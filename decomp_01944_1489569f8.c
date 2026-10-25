// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1489569f8 FUN_1489569f8 body=29 status=ok
// SIG undefined FUN_1489569f8(void)

bool FUN_1489569f8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148956a16 FUN_148956a16 body=26 status=ok
// SIG undefined FUN_148956a16(void)

bool FUN_148956a16(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148956a30 FUN_148956a30 body=93 status=ok
// SIG undefined FUN_148956a30(void)

void FUN_148956a30(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4244b0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b424440;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148956a8e FUN_148956a8e body=93 status=ok
// SIG undefined FUN_148956a8e(void)

void FUN_148956a8e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4244b0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b424440;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148956aec FUN_148956aec body=126 status=ok
// SIG undefined FUN_148956aec(void)

void FUN_148956aec(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  _LIST_ENTRY *p_Var5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4244b0;
  p_Var5 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var1 = &PTR_FUN_14b424440;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148956b5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148956b6a FUN_148956b6a body=36 status=ok
// SIG undefined FUN_148956b6a(void)

void FUN_148956b6a(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148956b8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,*(undefined2 *)(param_1 + 8),*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148956b90 FUN_148956b90 body=31 status=ok
// SIG undefined FUN_148956b90(void)

undefined8 FUN_148956b90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148956bc0 FUN_148956bc0 body=29 status=ok
// SIG undefined FUN_148956bc0(void)

bool FUN_148956bc0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148956bde FUN_148956bde body=26 status=ok
// SIG undefined FUN_148956bde(void)

bool FUN_148956bde(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148956c04 FUN_148956c04 body=93 status=ok
// SIG undefined FUN_148956c04(void)

void FUN_148956c04(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b424590;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b424520;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148956c62 FUN_148956c62 body=126 status=ok
// SIG undefined FUN_148956c62(void)

void FUN_148956c62(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  _LIST_ENTRY *p_Var5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b424590;
  p_Var5 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var1 = &PTR_FUN_14b424520;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148956cd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148956ce0 FUN_148956ce0 body=36 status=ok
// SIG undefined FUN_148956ce0(void)

void FUN_148956ce0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148956d01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,*(undefined2 *)(param_1 + 8),*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148956d04 FUN_148956d04 body=146 status=ok
// SIG undefined FUN_148956d04(void)

bool FUN_148956d04(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,*(undefined2 *)(param_1 + 8));
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148956d9a FUN_148956d9a body=183 status=ok
// SIG undefined FUN_148956d9a(void)

longlong FUN_148956d9a(longlong *param_1,uint param_2,short *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  short *local_28;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(short *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_148956e34;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_148956e52(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_148956e34:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 148956e52 FUN_148956e52 body=271 status=ok
// SIG undefined FUN_148956e52(void)

undefined4 * FUN_148956e52(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined2 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148956f62(param_1,local_48);
  *local_40 = *(undefined2 *)*param_4;
  *(undefined8 *)(local_40 + 4) = 0;
  *(undefined8 *)(local_40 + 8) = 0;
  *(undefined4 *)(local_40 + 0xc) = 0xffffffff;
  cVar1 = FUN_148957048(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar2 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0xe) = param_3;
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xc) =
           *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4);
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_148955a0c(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148956f62 FUN_148956f62 body=229 status=ok
// SIG undefined FUN_148956f62(void)

int * FUN_148956f62(longlong *param_1,int *param_2)

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



// FUNCTION 148957048 FUN_148957048 body=166 status=ok
// SIG undefined FUN_148957048(void)

undefined8 FUN_148957048(longlong *param_1,uint param_2,short *param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        puVar2 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(short *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          plVar7 = *(longlong **)(puVar2 + 4);
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar7 + 0x10))();
            }
          }
          uVar3 = *(undefined4 *)param_3;
          uVar4 = *(undefined4 *)(param_3 + 2);
          uVar5 = *(undefined4 *)(param_3 + 4);
          uVar6 = *(undefined4 *)(param_3 + 6);
          *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(param_3 + 8);
          *puVar2 = uVar3;
          puVar2[1] = uVar4;
          puVar2[2] = uVar5;
          puVar2[3] = uVar6;
          FUN_148955c40(param_1,*param_4);
          *param_4 = iVar8;
          return 1;
        }
        iVar8 = puVar2[6];
      } while (iVar8 != -1);
    }
  }
  return 0;
}



// FUNCTION 1489570ee FUN_1489570ee body=29 status=ok
// SIG undefined FUN_1489570ee(void)

undefined8 FUN_1489570ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148957126 FUN_148957126 body=29 status=ok
// SIG undefined FUN_148957126(void)

bool FUN_148957126(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148957144 FUN_148957144 body=26 status=ok
// SIG undefined FUN_148957144(void)

bool FUN_148957144(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14895715e FUN_14895715e body=24 status=ok
// SIG undefined FUN_14895715e(void)

bool FUN_14895715e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148957182 FUN_148957182 body=93 status=ok
// SIG undefined FUN_148957182(void)

void FUN_148957182(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b424670;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b424600;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489571e0 FUN_1489571e0 body=93 status=ok
// SIG undefined FUN_1489571e0(void)

void FUN_1489571e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b424670;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b424600;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14895723e FUN_14895723e body=126 status=ok
// SIG undefined FUN_14895723e(void)

void FUN_14895723e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  _LIST_ENTRY *p_Var5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b424670;
  p_Var5 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var1 = &PTR_FUN_14b424600;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489572ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489572bc FUN_1489572bc body=53 status=ok
// SIG undefined FUN_1489572bc(void)

void FUN_1489572bc(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001489572ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(undefined2 *)(param_1 + 8));
  return;
}



// FUNCTION 1489572f2 FUN_1489572f2 body=163 status=ok
// SIG undefined FUN_1489572f2(void)

bool FUN_1489572f2(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,*(undefined2 *)(param_1 + 8));
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148957398 FUN_148957398 body=80 status=ok
// SIG undefined FUN_148957398(void)

void FUN_148957398(longlong *param_1,ushort *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & (uint)*param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ushort *)(*param_1 + (longlong)iVar1 * 0x20) == *param_2) {
          FUN_148955baa();
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1489573e8 FUN_1489573e8 body=31 status=ok
// SIG undefined FUN_1489573e8(void)

undefined8 FUN_1489573e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148957422 FUN_148957422 body=29 status=ok
// SIG undefined FUN_148957422(void)

bool FUN_148957422(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148957440 FUN_148957440 body=26 status=ok
// SIG undefined FUN_148957440(void)

bool FUN_148957440(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14895745a FUN_14895745a body=93 status=ok
// SIG undefined FUN_14895745a(void)

void FUN_14895745a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcd00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4246e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489574b8 FUN_1489574b8 body=93 status=ok
// SIG undefined FUN_1489574b8(void)

void FUN_1489574b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcd00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4246e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148957516 FUN_148957516 body=126 status=ok
// SIG undefined FUN_148957516(void)

void FUN_148957516(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a8bcd00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4246e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148957585. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148957594 FUN_148957594 body=48 status=ok
// SIG undefined FUN_148957594(void)

void FUN_148957594(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001489575c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1489575c4 FUN_1489575c4 body=61 status=ok
// SIG undefined FUN_1489575c4(void)

undefined8 * FUN_1489575c4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b4247c0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14895761c FUN_14895761c body=29 status=ok
// SIG undefined FUN_14895761c(void)

bool FUN_14895761c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x38);
  return lVar1 == param_2;
}



// FUNCTION 14895763a FUN_14895763a body=26 status=ok
// SIG undefined FUN_14895763a(void)

bool FUN_14895763a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x38,1);
  return lVar1 == 0;
}



// FUNCTION 148957660 FUN_148957660 body=106 status=ok
// SIG undefined FUN_148957660(void)

void FUN_148957660(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4247c0;
  FUN_1447a97f4(puVar1 + 1,param_1 + 8);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  *puVar1 = &PTR_FUN_14b424750;
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  puVar1[8] = uVar2;
  return;
}



// FUNCTION 1489576ca FUN_1489576ca body=142 status=ok
// SIG undefined FUN_1489576ca(void)

void FUN_1489576ca(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4247c0;
  FUN_1447a97f4(&p_Var1->CriticalSection,param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  *(undefined ***)p_Var1 = &PTR_FUN_14b424750;
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  uVar4 = *(undefined4 *)(param_1 + 0x40);
  uVar5 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)&p_Var1[1].CriticalSection = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)&p_Var1[1].CriticalSection + 4) = uVar3;
  *(undefined4 *)&p_Var1[1].ProcessLocksList.Flink = uVar4;
  *(undefined4 *)((longlong)&p_Var1[1].ProcessLocksList.Flink + 4) = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148957748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148957758 FUN_148957758 body=133 status=ok
// SIG undefined FUN_148957758(void)

void FUN_148957758(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_60 [40];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = FUN_14479d2ce(param_1 + 0x38);
  pcVar1 = *(code **)(param_1 + 0x40);
  FUN_1447a97f4(local_60,param_1 + 8);
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  (*pcVar1)(uVar2,param_2,&local_78,local_60);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489577de FUN_1489577de body=207 status=ok
// SIG undefined FUN_1489577de(void)

bool FUN_1489577de(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar2 = FUN_144a61b4f();
  if (cVar2 == '\0') {
    FUN_140192332(param_1 + 0x38,local_68,0);
    lVar4 = local_68[0];
  }
  else {
    lVar4 = 0;
  }
  lVar3 = FUN_14479d2ce(param_1 + 0x38);
  if (lVar3 != 0) {
    pcVar1 = *(code **)(param_1 + 0x40);
    FUN_1447a97f4(local_68,param_1 + 8);
    local_78 = *param_3;
    uStack_74 = param_3[1];
    uStack_70 = param_3[2];
    uStack_6c = param_3[3];
    (*pcVar1)(lVar3,param_2,&local_78,local_68);
  }
  if ((lVar4 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489578b0 FUN_1489578b0 body=196 status=ok
// SIG undefined FUN_1489578b0(void)

longlong *
FUN_1489578b0(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,5,0x10);
  *(undefined4 *)(param_1 + 1) = 5;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_14b4248a0;
  puVar1[1] = *param_3;
  FUN_1447a97f4(puVar1 + 2,param_4);
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
  puVar1[7] = lVar3;
  *puVar1 = &PTR_FUN_14b424830;
  puVar1[8] = 0;
  FUN_14485c47a(puVar1 + 8,param_2);
  puVar1[9] = FUN_148951a1a;
  return param_1;
}



// FUNCTION 148957974 FUN_148957974 body=59 status=ok
// SIG undefined FUN_148957974(void)

undefined8 * FUN_148957974(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b4248a0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489579ca FUN_1489579ca body=29 status=ok
// SIG undefined FUN_1489579ca(void)

bool FUN_1489579ca(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x40);
  return lVar1 == param_2;
}



// FUNCTION 1489579e8 FUN_1489579e8 body=26 status=ok
// SIG undefined FUN_1489579e8(void)

bool FUN_1489579e8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x40,1);
  return lVar1 == 0;
}



// FUNCTION 148957a02 FUN_148957a02 body=24 status=ok
// SIG undefined FUN_148957a02(void)

bool FUN_148957a02(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x40);
  return lVar1 != 0;
}



// FUNCTION 148957a26 FUN_148957a26 body=114 status=ok
// SIG undefined FUN_148957a26(void)

void FUN_148957a26(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4248a0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  FUN_1447a97f4(puVar1 + 2,param_1 + 0x10);
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  *puVar1 = &PTR_FUN_14b424830;
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  puVar1[8] = *(undefined8 *)(param_1 + 0x40);
  puVar1[9] = uVar2;
  return;
}



// FUNCTION 148957a98 FUN_148957a98 body=114 status=ok
// SIG undefined FUN_148957a98(void)

void FUN_148957a98(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4248a0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  FUN_1447a97f4(puVar1 + 2,param_1 + 0x10);
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  *puVar1 = &PTR_FUN_14b424830;
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  puVar1[8] = *(undefined8 *)(param_1 + 0x40);
  puVar1[9] = uVar2;
  return;
}



// FUNCTION 148957b0a FUN_148957b0a body=150 status=ok
// SIG undefined FUN_148957b0a(void)

void FUN_148957b0a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4248a0;
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  FUN_1447a97f4(&p_Var1->ProcessLocksList,param_1 + 0x10);
  p_Var1[1].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  *(undefined ***)p_Var1 = &PTR_FUN_14b424830;
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  uVar3 = *(undefined4 *)(param_1 + 0x48);
  uVar4 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)&p_Var1[1].ProcessLocksList.Flink = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((longlong)&p_Var1[1].ProcessLocksList.Flink + 4) = uVar2;
  *(undefined4 *)&p_Var1[1].ProcessLocksList.Blink = uVar3;
  *(undefined4 *)((longlong)&p_Var1[1].ProcessLocksList.Blink + 4) = uVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148957b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148957ba0 FUN_148957ba0 body=105 status=ok
// SIG undefined FUN_148957ba0(void)

void FUN_148957ba0(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [40];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_14479d2ce(param_1 + 0x40);
  pcVar1 = *(code **)(param_1 + 0x48);
  FUN_1447a97f4(local_50,param_1 + 0x10);
  (*pcVar1)(uVar2,*(undefined8 *)(param_1 + 8),local_50);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148957c0a FUN_148957c0a body=178 status=ok
// SIG undefined FUN_148957c0a(void)

bool FUN_148957c0a(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar2 = FUN_144a61b4f();
  if (cVar2 == '\0') {
    FUN_140192332(param_1 + 0x40,local_58,0);
    lVar4 = local_58[0];
  }
  else {
    lVar4 = 0;
  }
  lVar3 = FUN_14479d2ce(param_1 + 0x40);
  if (lVar3 != 0) {
    pcVar1 = *(code **)(param_1 + 0x48);
    FUN_1447a97f4(local_58,param_1 + 0x10);
    (*pcVar1)(lVar3,*(undefined8 *)(param_1 + 8),local_58);
  }
  if ((lVar4 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148957cc0 FUN_148957cc0 body=29 status=ok
// SIG undefined FUN_148957cc0(void)

undefined8 FUN_148957cc0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148957cf8 FUN_148957cf8 body=29 status=ok
// SIG undefined FUN_148957cf8(void)

bool FUN_148957cf8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148957d16 FUN_148957d16 body=26 status=ok
// SIG undefined FUN_148957d16(void)

bool FUN_148957d16(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148957d30 FUN_148957d30 body=24 status=ok
// SIG undefined FUN_148957d30(void)

bool FUN_148957d30(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148957d48 FUN_148957d48 body=101 status=ok
// SIG undefined FUN_148957d48(void)

void FUN_148957d48(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b424910;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148957dae FUN_148957dae body=101 status=ok
// SIG undefined FUN_148957dae(void)

void FUN_148957dae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b424910;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148957e14 FUN_148957e14 body=134 status=ok
// SIG undefined FUN_148957e14(void)

void FUN_148957e14(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b424910;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148957e8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148957e9a FUN_148957e9a body=52 status=ok
// SIG undefined FUN_148957e9a(void)

void FUN_148957e9a(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148957ecb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2);
  return;
}



// FUNCTION 148957ece FUN_148957ece body=162 status=ok
// SIG undefined FUN_148957ece(void)

bool FUN_148957ece(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148957f72 FUN_148957f72 body=48 status=ok
// SIG undefined FUN_148957f72(void)

void FUN_148957f72(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 148957fa2 FUN_148957fa2 body=48 status=ok
// SIG undefined FUN_148957fa2(void)

void FUN_148957fa2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 148957fda FUN_148957fda body=75 status=ok
// SIG undefined FUN_148957fda(void)

void FUN_148957fda(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x14) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 8),
              (longlong)*(int *)((longlong)param_1 + 0x10) << 3);
      FUN_1446efa72((longlong)param_1 + 8,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 148958040 FUN_148958040 body=29 status=ok
// SIG undefined FUN_148958040(void)

bool FUN_148958040(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14895805e FUN_14895805e body=26 status=ok
// SIG undefined FUN_14895805e(void)

bool FUN_14895805e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148958078 FUN_148958078 body=101 status=ok
// SIG undefined FUN_148958078(void)

void FUN_148958078(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b424980;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1489580de FUN_1489580de body=134 status=ok
// SIG undefined FUN_1489580de(void)

void FUN_1489580de(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b424980;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148958155. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148958164 FUN_148958164 body=39 status=ok
// SIG undefined FUN_148958164(void)

void FUN_148958164(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148958187. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 14895818c FUN_14895818c body=48 status=ok
// SIG undefined FUN_14895818c(void)

void FUN_14895818c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 1489581bc FUN_1489581bc body=119 status=ok
// SIG undefined FUN_1489581bc(void)

void FUN_1489581bc(longlong param_1,int param_2)

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
    FUN_148958234(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148958234 FUN_148958234 body=141 status=ok
// SIG undefined FUN_148958234(void)

void FUN_148958234(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 1489582c2 FUN_1489582c2 body=119 status=ok
// SIG undefined FUN_1489582c2(void)

void FUN_1489582c2(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x20c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 5,0);
      iVar2 = (int)(uVar3 >> 5);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x20c) = iVar5;
    FUN_14895833a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14895833a FUN_14895833a body=141 status=ok
// SIG undefined FUN_14895833a(void)

void FUN_14895833a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,0x20);
  return;
}



// FUNCTION 1489583c8 FUN_1489583c8 body=29 status=ok
// SIG undefined FUN_1489583c8(void)

undefined8 FUN_1489583c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148958400 FUN_148958400 body=29 status=ok
// SIG undefined FUN_148958400(void)

bool FUN_148958400(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14895841e FUN_14895841e body=26 status=ok
// SIG undefined FUN_14895841e(void)

bool FUN_14895841e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148958438 FUN_148958438 body=24 status=ok
// SIG undefined FUN_148958438(void)

bool FUN_148958438(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148958450 FUN_148958450 body=101 status=ok
// SIG undefined FUN_148958450(void)

void FUN_148958450(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4249f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1489584b6 FUN_1489584b6 body=101 status=ok
// SIG undefined FUN_1489584b6(void)

void FUN_1489584b6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4249f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14895851c FUN_14895851c body=134 status=ok
// SIG undefined FUN_14895851c(void)

void FUN_14895851c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4249f0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148958593. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489585a2 FUN_1489585a2 body=39 status=ok
// SIG undefined FUN_1489585a2(void)

void FUN_1489585a2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001489585c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 1489585ca FUN_1489585ca body=146 status=ok
// SIG undefined FUN_1489585ca(void)

bool FUN_1489585ca(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895865e FUN_14895865e body=90 status=ok
// SIG undefined FUN_14895865e(void)

void FUN_14895865e(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x8c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
    if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x80),
              (longlong)*(int *)((longlong)param_1 + 0x88) << 3);
      FUN_1446efa72((longlong)param_1 + 0x80,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 1489586b8 FUN_1489586b8 body=90 status=ok
// SIG undefined FUN_1489586b8(void)

void FUN_1489586b8(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x20c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x20c) = 0;
    if (*(void **)((longlong)param_1 + 0x200) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x200),
              (longlong)*(int *)((longlong)param_1 + 0x208) << 5);
      FUN_1446efa72((longlong)param_1 + 0x200,0,0,0x20);
      return;
    }
  }
  return;
}



// FUNCTION 148958734 FUN_148958734 body=93 status=ok
// SIG undefined FUN_148958734(void)

void FUN_148958734(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b424ad0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b424a60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148958792 FUN_148958792 body=126 status=ok
// SIG undefined FUN_148958792(void)

void FUN_148958792(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b424ad0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b424a60;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148958801. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14895882c FUN_14895882c body=119 status=ok
// SIG undefined FUN_14895882c(void)

undefined8 FUN_14895882c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_144a6c4d8();
  if (*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) {
LAB_148958854:
    lVar1 = FUN_144a78d6a();
    if (*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) {
      lVar2 = lVar1 + 0x30;
      if (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar2) goto LAB_14895888a;
    }
    lVar1 = FUN_1402e44f4();
    if (*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) {
      uVar3 = 0;
    }
    else {
      uVar3 = CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),
                       *(longlong *)
                        (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
                        (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30);
    }
  }
  else {
    lVar2 = lVar1 + 0x30;
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) != lVar2) goto LAB_148958854;
LAB_14895888a:
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return uVar3;
}



// FUNCTION 1489588a4 FUN_1489588a4 body=119 status=ok
// SIG undefined FUN_1489588a4(void)

undefined8 FUN_1489588a4(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_144a6c4d8();
  if (*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) {
LAB_1489588cc:
    lVar1 = FUN_144a78d6a();
    if (*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) {
      lVar2 = lVar1 + 0x30;
      if (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar2) goto LAB_148958902;
    }
    lVar1 = FUN_1402e44f4();
    if (*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) {
      uVar3 = 0;
    }
    else {
      uVar3 = CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),
                       *(longlong *)
                        (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
                        (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30);
    }
  }
  else {
    lVar2 = lVar1 + 0x30;
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) != lVar2) goto LAB_1489588cc;
LAB_148958902:
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return uVar3;
}



// FUNCTION 148958928 FUN_148958928 body=42 status=ok
// SIG undefined FUN_148958928(void)

void FUN_148958928(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1400d690e(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148958944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1);
    return;
  }
  FUN_144a6c4d8();
  return;
}



// FUNCTION 148958952 FUN_148958952 body=191 status=ok
// SIG undefined FUN_148958952(void)

void FUN_148958952(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_1 + 0x38) != *param_2) || (*(int *)(param_1 + 0x40) != (int)param_2[1]))
  {
    *(longlong *)(param_1 + 0x38) = *param_2;
    *(int *)(param_1 + 0x40) = (int)param_2[1];
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x60);
  if (lVar4 == 0) {
    uVar3 = FUN_1458f96d4();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x60) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x68) == 0) {
    if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x58) != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        *(undefined8 *)(param_1 + 0x68) = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x58));
        *(longlong *)(param_1 + 0x68) = lVar4;
        if (lVar4 != 0) {
          return;
        }
      }
    }
    cVar2 = FUN_1458fe2b6(param_1);
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1 + 0x50) = 0;
    }
    return;
  }
  return;
}



// FUNCTION 148958a12 FUN_148958a12 body=849 status=ok
// SIG undefined FUN_148958a12(void)

longlong FUN_148958a12(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    lVar1 = FUN_144a6c4d8();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
       ((longlong)*(int *)(param_2 + 0x1f8) != 0)) {
      lVar1 = 0;
      lVar10 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_2 + 0x1f0) + lVar10) == DAT_14cb8a668) {
          uVar2 = FUN_1401b0f18();
          lVar1 = FUN_144718840(param_2,uVar2);
          if (lVar1 == 0) goto LAB_148958a5e;
          lVar10 = FUN_141147bae();
          if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar10 + 0x38) * 8) != lVar10 + 0x30)) {
            lVar10 = FUN_1415c99d8(lVar1);
            if (*(longlong *)(lVar10 + 0xd8) == 0) goto LAB_148958a5e;
            puVar8 = *(undefined4 **)(*(longlong *)(lVar10 + 0xd8) + 8);
            if (puVar8 == (undefined4 *)0x0) {
              puVar8 = &DAT_14c9485f0;
            }
            FUN_1447325ac(puVar8,&local_70,1);
            if (local_70 == 0) goto LAB_148958a5e;
            lVar1 = FUN_148958d64(param_3,*param_4);
            puVar8 = *(undefined4 **)(*(longlong *)(lVar10 + 0xd8) + 8);
            puVar9 = &DAT_14c9485f0;
            if (puVar8 != (undefined4 *)0x0) {
              puVar9 = puVar8;
            }
            FUN_1447325ac(puVar9,&local_80,1);
            local_70 = local_80;
            local_68 = 0x4000;
            local_60 = 0;
            FUN_148958952(lVar1);
            *(undefined1 *)(lVar1 + 0x50) = 0;
          }
          else {
            lVar10 = *(longlong *)(param_2 + 0x3f0);
            if (lVar10 == 0) goto LAB_148958a5e;
            puVar8 = *(undefined4 **)(lVar10 + 8);
            if (puVar8 == (undefined4 *)0x0) {
              puVar8 = &DAT_14c9485f0;
            }
            FUN_1447325ac(puVar8,&local_70,1);
            if (local_70 == 0) goto LAB_148958a5e;
            lVar1 = FUN_148958d64(param_3,*param_4);
            *(undefined1 *)(lVar1 + 0x50) = 1;
            plVar3 = (longlong *)FUN_145ada3a8();
            lVar5 = plVar3[0x22];
            if (lVar5 == 0) {
              (**(code **)(*plVar3 + 1000))(plVar3);
              lVar5 = plVar3[0x22];
              if (lVar5 != 0) goto LAB_148958c19;
LAB_148958c48:
              uVar2 = *(undefined8 *)(param_2 + 0x3f8);
              local_50 = 0;
              uStack_48 = 0;
              uVar4 = FUN_1458f96d4();
              lVar5 = FUN_14477b664(uVar4);
              lVar6 = FUN_1458f96d4();
              uVar4 = FUN_1458f96d4();
              FUN_1402d1bfa(&local_70,uVar4,uVar2);
              if (local_70 != 0) {
                uStack_48 = 0;
              }
              local_58 = local_70;
              lVar7 = FUN_1458f96d4();
              if (lVar6 == 0) {
LAB_148958ccc:
                lVar7 = lVar6;
              }
              else if (lVar7 == 0) {
                lVar7 = 0;
              }
              else if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
                      (*(longlong *)
                        (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                       lVar7 + 0x30)) goto LAB_148958ccc;
              if (lVar5 != lVar7) {
                uStack_48 = 0;
              }
              uVar4 = FUN_14477b664(lVar7);
              local_50 = FUN_14477b664(uVar4);
              if (local_50 != 0 && local_70 != 0) {
                uStack_48 = uVar2;
              }
              FUN_14872a5b8(lVar1 + 0x58,&local_58);
            }
            else {
LAB_148958c19:
              puVar8 = *(undefined4 **)(*(longlong *)(param_2 + 0x3f8) + 8);
              if (puVar8 == (undefined4 *)0x0) {
                puVar8 = &DAT_14c9485f0;
              }
              FUN_1447325ac(puVar8,&local_70,1);
              if (local_70 != *(longlong *)(lVar5 + 0x38)) goto LAB_148958c48;
            }
            puVar8 = &DAT_14c9485f0;
            if (*(undefined4 **)(lVar10 + 8) != (undefined4 *)0x0) {
              puVar8 = *(undefined4 **)(lVar10 + 8);
            }
            FUN_1447325ac(puVar8,&local_78,1);
            local_70 = local_78;
            local_68 = 0x4000;
            local_60 = 0;
            FUN_148958952(lVar1);
          }
          break;
        }
        lVar10 = lVar10 + 8;
      } while ((longlong)*(int *)(param_2 + 0x1f8) * 8 != lVar10);
      goto LAB_148958a60;
    }
  }
LAB_148958a5e:
  lVar1 = 0;
LAB_148958a60:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 148958d64 FUN_148958d64 body=199 status=ok
// SIG undefined FUN_148958d64(void)

undefined8 FUN_148958d64(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_b8 = FUN_14129d0d4();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  uStack_a0 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148958e2c FUN_148958e2c body=81 status=ok
// SIG undefined FUN_148958e2c(void)

void FUN_148958e2c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_145996f82();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_140bc37de(uVar1,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 148958e7e FUN_148958e7e body=88 status=ok
// SIG undefined FUN_148958e7e(void)

undefined8 FUN_148958e7e(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined7 uVar5;
  byte bVar6;
  
  if (param_1 != 0) {
    uVar2 = FUN_145996f82();
    plVar3 = (longlong *)FUN_144718840(param_1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
      uVar5 = (undefined7)((ulonglong)lVar4 >> 8);
      bVar1 = 1;
      if (*(longlong *)(lVar4 + 0x298) == param_2) {
        bVar6 = *(char *)(lVar4 + 0x290) == '\x01';
      }
      else {
        bVar6 = 0;
      }
      goto LAB_148958ec1;
    }
  }
  bVar6 = (byte)param_1;
  bVar1 = 0;
  uVar5 = 0;
LAB_148958ec1:
  return CONCAT71(uVar5,bVar1 & bVar6);
}



// FUNCTION 148958ed6 FUN_148958ed6 body=63 status=ok
// SIG undefined FUN_148958ed6(void)

void FUN_148958ed6(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_145996f82();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_140c7df0a(uVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148958f15 FUN_148958f15 body=183 status=ok
// SIG undefined FUN_148958f15(void)

void FUN_148958f15(longlong *param_1,ushort param_2,double *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  
  lVar1 = *param_1;
  dVar3 = 0.0;
  uVar2 = (ulonglong)param_2;
  if (lVar1 == 0) {
    fVar6 = 0.0;
    dVar4 = 0.0;
    fVar5 = 0.0;
    fVar7 = 0.0;
  }
  else {
    dVar4 = *(double *)(lVar1 + uVar2 * 0x18);
    fVar6 = *(float *)(lVar1 + 8 + uVar2 * 0x18);
    fVar5 = *(float *)(lVar1 + 0xc + uVar2 * 0x18);
    fVar7 = *(float *)(lVar1 + 0x10 + uVar2 * 0x18);
  }
  if (param_1[1] != 0) {
    dVar3 = *(double *)(param_1[1] + uVar2 * 0x18);
  }
  if (param_1[2] == 0) {
    dVar8 = 0.0;
  }
  else {
    dVar8 = *(double *)(param_1[2] + uVar2 * 0x18);
  }
  if ((fVar6 != 0.0) || (NAN(fVar6))) {
    dVar4 = dVar4 / (double)fVar6;
  }
  else {
    if ((fVar7 == 0.0) && (!NAN(fVar7))) {
      return;
    }
    dVar4 = (double)(fVar5 / fVar7);
  }
  *param_3 = dVar8 + dVar4 + dVar3;
  return;
}



// FUNCTION 148958fcc FUN_148958fcc body=122 status=ok
// SIG undefined FUN_148958fcc(void)

void FUN_148958fcc(undefined8 *param_1)

{
  FUN_145ab7d19(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_148962b42(param_1);
  }
  FUN_145ab7d19(param_1[2],*(undefined4 *)(param_1 + 3));
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_148962b42(param_1 + 2);
  }
  FUN_145ab7d4a(param_1[4],*(undefined4 *)(param_1 + 5));
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) == 0) {
    return;
  }
  FUN_148962b72(param_1 + 4);
  return;
}



// FUNCTION 148959046 FUN_148959046 body=314 status=ok
// SIG undefined FUN_148959046(void)

void FUN_148959046(longlong *param_1,undefined8 *param_2,ushort param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar2 = *(uint *)(param_1 + 1);
  lVar3 = *param_1;
  uVar6 = 0;
  uVar7 = uVar2;
  if (0 < (int)uVar2) {
    do {
      uVar1 = (uVar7 >> 1) + uVar6;
      if (*(ushort *)(lVar3 + (ulonglong)uVar1 * 0x18) < param_3) {
        uVar6 = uVar1 + (uVar7 & 1);
      }
      bVar4 = 1 < uVar7;
      uVar7 = uVar7 >> 1;
    } while (bVar4);
  }
  if ((((int)uVar6 < (int)uVar2) && (*(ushort *)(lVar3 + (ulonglong)uVar6 * 0x18) <= param_3)) &&
     (puVar5 = (undefined8 *)(lVar3 + (ulonglong)uVar6 * 0x18 + 8), puVar5 != (undefined8 *)0x0)) {
    *param_2 = *puVar5;
  }
  uVar2 = *(uint *)(param_1 + 3);
  lVar3 = param_1[2];
  uVar6 = 0;
  uVar7 = uVar2;
  if (0 < (int)uVar2) {
    do {
      uVar1 = (uVar7 >> 1) + uVar6;
      if (*(ushort *)(lVar3 + (ulonglong)uVar1 * 0x18) < param_3) {
        uVar6 = uVar1 + (uVar7 & 1);
      }
      bVar4 = 1 < uVar7;
      uVar7 = uVar7 >> 1;
    } while (bVar4);
  }
  if ((((int)uVar6 < (int)uVar2) && (*(ushort *)(lVar3 + (ulonglong)uVar6 * 0x18) <= param_3)) &&
     (puVar5 = (undefined8 *)(lVar3 + (ulonglong)uVar6 * 0x18 + 8), puVar5 != (undefined8 *)0x0)) {
    param_2[1] = *puVar5;
  }
  uVar2 = *(uint *)(param_1 + 5);
  lVar3 = param_1[4];
  uVar6 = 0;
  uVar7 = uVar2;
  if (0 < (int)uVar2) {
    do {
      uVar1 = (uVar7 >> 1) + uVar6;
      if (*(ushort *)(lVar3 + (ulonglong)uVar1 * 0x20) < param_3) {
        uVar6 = uVar1 + (uVar7 & 1);
      }
      bVar4 = 1 < uVar7;
      uVar7 = uVar7 >> 1;
    } while (bVar4);
  }
  if ((((int)uVar6 < (int)uVar2) && (*(ushort *)(lVar3 + (ulonglong)uVar6 * 0x20) <= param_3)) &&
     (puVar5 = (undefined8 *)(lVar3 + (ulonglong)uVar6 * 0x20 + 8), puVar5 != (undefined8 *)0x0)) {
    param_2[2] = *puVar5;
  }
  return;
}



// FUNCTION 148959180 FUN_148959180 body=2824 status=ok
// SIG undefined FUN_148959180(void)

void FUN_148959180(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ushort uVar3;
  uint uVar4;
  code *pcVar5;
  code *pcVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  uint *puVar10;
  code *pcVar11;
  ulonglong uVar12;
  uint *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_248 [32];
  code **local_228;
  code **local_220;
  code **local_218;
  code **local_210;
  undefined8 *local_208;
  uint *local_200;
  code *local_1f8;
  code *local_1f0;
  longlong local_1e8;
  undefined8 *local_1e0;
  longlong local_1d8;
  code *local_1d0;
  undefined2 *local_1c8;
  undefined8 *local_1c0;
  code *local_1b8;
  undefined4 local_1b0;
  undefined1 local_1ac;
  undefined4 local_1a4;
  undefined8 *local_1a0;
  longlong local_198;
  uint local_18c;
  undefined4 local_188;
  ushort local_182;
  undefined8 local_180;
  undefined8 local_178;
  undefined2 local_16c;
  undefined2 local_16a;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined8 local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined1 local_110 [8];
  undefined1 local_108 [32];
  undefined1 local_e8 [8];
  undefined1 local_e0 [32];
  longlong local_c0;
  longlong local_b8;
  undefined1 local_b0 [8];
  undefined1 local_a8 [32];
  undefined1 local_88 [48];
  code *local_58;
  undefined2 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_14633bf66();
  if (*(int *)(param_1 + 0x58) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x28);
    FUN_148959c8a(param_1);
    if (((*(int *)(param_1 + 0x78) != 0) || (*(int *)(param_1 + 0x88) != 0)) ||
       (*(int *)(param_1 + 0x98) != 0)) {
      local_1f8 = (code *)(lVar9 + 0x28);
      local_1e8 = lVar9;
      plVar8 = (longlong *)FUN_14009d2a0();
      local_168._0_2_ = (ushort)(byte)local_168;
      local_228 = (code **)&local_120;
      local_120 = FUN_14895a466;
      local_118 = 0;
      FUN_14895a346(param_2,&local_188,&local_168,param_1);
      FUN_145c7137e(param_2,&local_18c);
      if ((longlong)*(int *)(param_1 + 0x78) != 0) {
        puVar13 = *(uint **)(param_1 + 0x70);
        local_200 = puVar13 + (longlong)*(int *)(param_1 + 0x78) * 6;
        do {
          pcVar11 = local_168;
          local_168._0_4_ = CONCAT22(*(undefined2 *)((longlong)plVar8 + 0x5a),(short)*puVar13);
          local_168._6_2_ = SUB82(pcVar11,6);
          local_168._0_6_ = CONCAT24(*(undefined2 *)((longlong)plVar8 + 0xf4),(undefined4)local_168)
          ;
          local_160._0_2_ = (ushort)(byte)local_160;
          local_160 = CONCAT44(0x6ff,(undefined4)local_160);
          local_158 = 0;
          local_178._0_4_ = CONCAT22(*(undefined2 *)(param_1 + 0x66),(short)plVar8[0x22]);
          FUN_14634b910(&local_120,&local_168);
          local_140 = (code *)&local_178;
          local_138 = (longlong)&local_178 + 4;
          FUN_1447c44f6(local_108,&local_140);
          FUN_140dad9c2(local_108,param_1 + 0xa0,2);
          local_180 = (code *)CONCAT62(local_180._2_6_,(short)plVar8[0x26]);
          local_140 = (code *)&local_180;
          local_138 = (longlong)&local_180 + 2;
          FUN_1447c44f6(local_e0,&local_140);
          FUN_14010b303(param_1 + 0xa0,local_a8,1,&local_140);
          local_58 = (code *)(puVar13 + 2);
          local_1d0 = (code *)(CONCAT62(local_1d0._2_6_,(undefined2)local_118) | 0x200);
          local_140 = FUN_148962e3e;
          local_138 = CONCAT71(local_138._1_7_,3);
          local_218 = &local_58;
          local_228 = &local_1d0;
          local_220 = (code **)&local_140;
          FUN_148962bf0(&local_120,&local_1b8,local_1f8,param_2);
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
          thunk_FUN_1406adae8(param_2,local_188,(ulonglong)local_1b8 & 0xffffffff);
          thunk_FUN_1406adae8(param_2,(ulonglong)local_1b8 & 0xffffffff,local_18c);
          puVar13 = puVar13 + 6;
        } while (puVar13 != local_200);
      }
      if ((longlong)*(int *)(param_1 + 0x88) != 0) {
        puVar13 = *(uint **)(param_1 + 0x80);
        local_200 = puVar13 + (longlong)*(int *)(param_1 + 0x88) * 6;
        do {
          pcVar11 = local_168;
          local_168._0_4_ = CONCAT22(*(undefined2 *)((longlong)plVar8 + 0x5a),(short)*puVar13);
          local_168._6_2_ = SUB82(pcVar11,6);
          local_168._0_6_ = CONCAT24(*(undefined2 *)((longlong)plVar8 + 0xf4),(undefined4)local_168)
          ;
          local_160._0_2_ = (ushort)(byte)local_160;
          local_160 = CONCAT44(0x6ff,(undefined4)local_160);
          local_158 = 0;
          local_178._0_4_ =
               CONCAT22(*(undefined2 *)(param_1 + 0x66),*(undefined2 *)((longlong)plVar8 + 0x114));
          FUN_14634b910(&local_120,&local_168);
          local_140 = (code *)&local_178;
          local_138 = (longlong)&local_178 + 4;
          FUN_1447c44f6(local_108,&local_140);
          FUN_140dad9c2(local_108,param_1 + 0xa0,2);
          local_180 = (code *)CONCAT62(local_180._2_6_,(short)plVar8[0x26]);
          local_140 = (code *)&local_180;
          local_138 = (longlong)&local_180 + 2;
          FUN_1447c44f6(local_e0,&local_140);
          FUN_14010b303(param_1 + 0xa0,local_a8,1,&local_140);
          local_58 = (code *)(puVar13 + 2);
          local_1d0 = (code *)(CONCAT62(local_1d0._2_6_,(undefined2)local_118) | 0x200);
          local_140 = FUN_148962e3e;
          local_138 = CONCAT71(local_138._1_7_,3);
          local_218 = &local_58;
          local_228 = &local_1d0;
          local_220 = (code **)&local_140;
          FUN_148962bf0(&local_120,&local_1b8,local_1f8,param_2);
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
          thunk_FUN_1406adae8(param_2,local_188,(ulonglong)local_1b8 & 0xffffffff);
          thunk_FUN_1406adae8(param_2,(ulonglong)local_1b8 & 0xffffffff,local_18c);
          puVar13 = puVar13 + 6;
        } while (puVar13 != local_200);
      }
      pcVar11 = local_140;
      if (*(int *)(param_1 + 0x98) != 0) {
        local_140._0_4_ =
             CONCAT22(*(undefined2 *)((longlong)plVar8 + 0xf4),
                      *(undefined2 *)((longlong)plVar8 + 0x5a));
        pcVar5 = local_140;
        local_140._6_2_ = SUB82(pcVar11,6);
        local_140._0_5_ = (uint5)pcVar5;
        local_140._0_6_ = (uint6)(uint5)local_140;
        local_138 = CONCAT35(local_138._5_3_,0x6ff);
        local_1a0 = &local_178;
        local_178._0_4_ =
             CONCAT22(*(undefined2 *)(param_1 + 0x66),*(undefined2 *)((longlong)plVar8 + 0x116));
        local_198 = (longlong)&local_178 + 4;
        FUN_147662af4(&local_140,&local_120);
        FUN_140dad9c2(local_110,param_1 + 0xa0,2);
        local_160 = (longlong)&local_180 + 2;
        local_180 = (code *)CONCAT62(local_180._2_6_,(short)plVar8[0x26]);
        local_168 = (code *)&local_180;
        FUN_1447c44f6(local_e8);
        FUN_14010b303(param_1 + 0xa0,local_b0,1,&local_168);
        local_218 = &local_58;
        local_228 = &local_1d0;
        local_1d0 = (code *)(CONCAT62(local_1d0._2_6_,local_120._4_2_) | 0x200);
        local_168 = FUN_1489632c6;
        local_160 = CONCAT71(local_160._1_7_,3);
        local_220 = (code **)&local_168;
        local_58 = (code *)(param_1 + 0x90);
        FUN_14896305e(&local_120,&local_1b8,local_1f8,param_2);
        if (local_c0 != 0) {
          FUN_1400020a8();
        }
        thunk_FUN_1406adae8(param_2,local_188,(ulonglong)local_1b8 & 0xffffffff);
        thunk_FUN_1406adae8(param_2,(ulonglong)local_1b8 & 0xffffffff,local_18c);
      }
      pcVar11 = (code *)(param_1 + 0x70);
      puVar13 = (uint *)(param_1 + 200);
      uVar1 = *(int *)(param_1 + 0xe8) + 0x1f;
      if (0x1f < uVar1) {
        lVar9 = 0;
        puVar10 = puVar13;
LAB_14895981d:
        uVar4 = *puVar10;
        if (uVar4 == 0) goto code_r0x000148959825;
        iVar7 = 0;
        if (uVar4 != 0) {
          for (; (uVar4 >> iVar7 & 1) == 0; iVar7 = iVar7 + 1) {
          }
        }
        if (iVar7 + 1 != (int)lVar9 && iVar7 - (int)lVar9 < *(int *)(param_1 + 0xe8)) {
          local_138 = param_1 + 0xf8;
          local_140 = (code *)0x100000000;
          local_130 = 0xffffffff;
          local_128 = 0;
          local_200 = puVar13;
          if (*(int *)(param_1 + 0x110) == 0) {
            local_130._4_4_ = 0;
          }
          else {
            FUN_1449c0562(&local_140);
          }
          puVar13 = local_200;
          if (local_130._4_4_ < *(int *)(local_138 + 0x18)) {
            iVar7 = local_130._4_4_;
            local_1f0 = pcVar11;
            do {
              lVar9 = *plVar8;
              lVar14 = (longlong)iVar7 * 0x58;
              uVar2 = lVar9 + lVar14;
              uVar3 = *(ushort *)(lVar9 + 0x10 + lVar14);
              uVar12 = (ulonglong)*(ushort *)(lVar9 + 0x12 + lVar14);
              lVar9 = plVar8[2];
              local_148 = 0x10000000000;
              if (uVar12 != 0) {
                uVar15 = 0;
                do {
                  if ((*(uint *)(uVar2 + 0xc) >> ((uint)uVar15 & 0x1f) & 1) != 0) {
                    FUN_140dba9e6(&local_168,
                                  *(undefined2 *)((ulonglong)uVar3 * 4 + lVar9 + uVar15 * 4));
                  }
                  uVar15 = uVar15 + 1;
                } while (uVar12 != uVar15);
              }
              pcVar11 = local_1b8;
              local_1b8 = (code *)CONCAT62(local_1b8._2_6_,*(undefined2 *)((longlong)plVar8 + 0x5c))
              ;
              pcVar5 = local_1b8;
              local_1b8._6_2_ = SUB82(pcVar11,6);
              local_1b8._0_6_ = (uint6)(uint5)pcVar5;
              local_1b0 = 0x6ff;
              local_1ac = 0;
              local_16a = *(undefined2 *)(param_1 + 0x66);
              local_1c8 = &local_16a;
              local_1c0 = &local_168;
              FUN_147662ba4(&local_1b8,&local_120,&local_1c8);
              local_16c = *(undefined2 *)(uVar2 + 0x14);
              local_58 = (code *)&local_16c;
              local_50 = &local_16a;
              FUN_1403b5126(local_110,&local_58,2);
              FUN_14010b303(&local_168,local_88,1,&local_58);
              pcVar11 = local_1f0;
              local_1d0 = local_1f0;
              local_180 = local_1f8;
              local_182 = local_120._4_2_ & 0xfdff;
              local_58 = FUN_148963968;
              local_50 = (undefined2 *)CONCAT71(local_50._1_7_,3);
              local_208 = &local_178;
              local_210 = &local_1d0;
              local_218 = (code **)&local_180;
              local_228 = (code **)&local_182;
              local_220 = &local_58;
              local_178 = uVar2;
              FUN_148963744(&local_120,&local_1a4,local_1f8,param_2);
              if (local_c0 != 0) {
                FUN_1400020a8();
              }
              thunk_FUN_1406adae8(param_2,local_18c,local_1a4);
              local_130 = CONCAT44(local_130._4_4_,(uint)local_130 & ~local_140._4_4_);
              FUN_1449c0562(&local_140);
              puVar13 = local_200;
              iVar7 = local_130._4_4_;
            } while (local_130._4_4_ < *(int *)(local_138 + 0x18));
          }
        }
      }
LAB_1489596a2:
      pcVar5 = local_140;
      if (*(char *)(param_1 + 0x118) == '\x01') {
        local_140 = (code *)CONCAT62(local_140._2_6_,*(undefined2 *)((longlong)plVar8 + 0x5c));
        pcVar6 = local_140;
        local_140._6_2_ = SUB82(pcVar5,6);
        local_140._0_5_ = (uint5)pcVar6;
        local_140._0_6_ = (uint6)(uint5)local_140;
        local_138 = CONCAT35(local_138._5_3_,0x6ff);
        local_1e0 = &local_180;
        local_180 = (code *)CONCAT62(local_180._2_6_,*(undefined2 *)(param_1 + 0x66));
        local_1d8 = (longlong)&local_180 + 2;
        FUN_147662ba4(&local_140,&local_120);
        FUN_140dad9c2(local_110,param_1 + 0xa0,2);
        FUN_14010b303(puVar13,local_e8,1,&local_168);
        lVar9 = FUN_14009d2a0();
        lVar14 = -0x12;
        do {
          FUN_140dba9e6(local_88,*(undefined2 *)(lVar9 + 0xce + lVar14));
          lVar14 = lVar14 + 2;
        } while (lVar14 != 0);
        local_58 = *(code **)(local_1e8 + 0x270);
        local_210 = &local_58;
        local_218 = &local_1b8;
        local_228 = &local_1d0;
        local_1d0 = (code *)(CONCAT62(local_1d0._2_6_,local_120._4_2_) & 0xfffffffffffffdff);
        local_168 = FUN_148963f28;
        local_160 = CONCAT71(local_160._1_7_,3);
        local_220 = (code **)&local_168;
        local_1b8 = pcVar11;
        FUN_148963cc6(&local_120,&local_178,local_1f8,param_2);
        if (local_c0 != 0) {
          FUN_1400020a8();
        }
        thunk_FUN_1406adae8(param_2,local_18c,local_178 & 0xffffffff);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000148959825:
  lVar9 = lVar9 + -0x20;
  puVar10 = puVar10 + 1;
  if ((ulonglong)(uVar1 & 0xffffffe0) + lVar9 == 0) goto LAB_1489596a2;
  goto LAB_14895981d;
}



// FUNCTION 148959c8a FUN_148959c8a body=1723 status=ok
// SIG undefined FUN_148959c8a(void)

void FUN_148959c8a(longlong param_1)

{
  uint *puVar1;
  undefined2 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined2 *puVar17;
  bool bVar18;
  undefined1 auStack_1d8 [44];
  undefined4 local_1ac;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  undefined2 local_16c;
  undefined2 local_16a;
  undefined8 local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  undefined1 *puStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f0;
  undefined1 local_e8 [24];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  plVar11 = (longlong *)FUN_14009d2a0();
  local_1a8 = param_1 + 0xa0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  local_178 = param_1 + 0x70;
  FUN_148958fcc();
  local_180 = FUN_14009d2a0();
  local_1a0 = FUN_14009d2a0();
  local_1ac = *(undefined4 *)(param_1 + 0x58);
  local_198 = *(longlong *)(param_1 + 0x28) + 0x28;
  lVar14 = 0;
  local_188 = param_1 + 0x80;
  local_190 = param_1 + 0x90;
  do {
    lVar13 = local_198;
    uVar2 = *(undefined2 *)(local_1a0 + 0xbc + lVar14 * 2);
    local_168 = (undefined2 *)CONCAT62(local_168._2_6_,uVar2);
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_88 = 0;
    local_a8 = 0x10000000000;
    local_80 = 0x10000000000;
    local_78 = 0;
    uStack_70 = 0;
    local_f0._2_2_ = *(undefined2 *)(param_1 + 0x66);
    local_f0._4_2_ = *(undefined2 *)((longlong)plVar11 + 0x5a);
    local_f0._6_2_ = (undefined2)plVar11[0x22];
    local_158 = &local_f0;
    puStack_150 = local_e8;
    local_f0._0_2_ = uVar2;
    FUN_1447c44f6(&local_c8,&local_158);
    bVar5 = FUN_14050a5e0(lVar13,&local_c8);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_88 = 0;
    local_a8 = 0x10000000000;
    local_80 = 0x10000000000;
    local_78 = 0;
    uStack_70 = 0;
    local_f0._2_2_ = *(undefined2 *)(param_1 + 0x66);
    local_f0._4_2_ = *(undefined2 *)((longlong)plVar11 + 0x5a);
    local_f0._6_2_ = *(undefined2 *)((longlong)plVar11 + 0x114);
    local_158 = &local_f0;
    puStack_150 = local_e8;
    local_f0._0_2_ = uVar2;
    FUN_1447c44f6(&local_c8,&local_158);
    bVar6 = FUN_14050a5e0(lVar13,&local_c8);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_88 = 0;
    local_a8 = 0x10000000000;
    local_80 = 0x10000000000;
    local_78 = 0;
    uStack_70 = 0;
    local_f0._2_2_ = *(undefined2 *)(param_1 + 0x66);
    local_f0._4_2_ = *(undefined2 *)((longlong)plVar11 + 0x5a);
    local_f0._6_2_ = *(undefined2 *)((longlong)plVar11 + 0x116);
    local_158 = &local_f0;
    puStack_150 = local_e8;
    local_f0._0_2_ = uVar2;
    FUN_1447c44f6(&local_c8,&local_158);
    bVar7 = FUN_14050a5e0(lVar13,&local_c8);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if ((byte)(bVar5 | bVar6 | bVar7) == 1) {
      FUN_140dba9e6(local_1a8,uVar2);
      if (bVar5 != 0) {
        uVar12 = FUN_148964dfa(local_178,&local_168);
        FUN_14895acaa(uVar12,local_1ac,1);
      }
      if (bVar6 != 0) {
        uVar12 = FUN_148964dfa(local_188,&local_168);
        FUN_14895acaa(uVar12,local_1ac,1);
      }
      if (bVar7 != 0) {
        lVar13 = FUN_148964f68(local_190,&local_168);
        FUN_14895acaa(lVar13,local_1ac,1);
        *(undefined2 *)(lVar13 + 0x10) = *(undefined2 *)(local_180 + 0xce + lVar14 * 2);
      }
    }
    lVar13 = local_198;
    lVar14 = lVar14 + 1;
  } while (lVar14 != 9);
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (0x80 < *(uint *)(param_1 + 0x114)) {
    *(undefined4 *)(param_1 + 0x114) = 0x80;
    FUN_1446efbd8(param_1 + 0xf8,0);
  }
  if (((*(int *)(param_1 + 0x78) != 0) || (*(int *)(param_1 + 0x88) != 0)) ||
     (*(int *)(param_1 + 0x98) != 0)) {
    local_1a0 = param_1 + 0xf8;
    FUN_14895a466(param_1);
    local_d0 = 0x10000000000;
    local_a8 = 0x10000000000;
    local_80 = 0x10000000000;
    local_78 = 0;
    uStack_70 = 0;
    lVar14 = plVar11[1];
    if (0 < (longlong)(int)lVar14) {
      local_1a8 = param_1 + 200;
      puVar17 = (undefined2 *)(*plVar11 + 0x14);
      uVar16 = 0;
      do {
        if (*(int *)(puVar17 + -4) != 0) {
          FUN_140dba9e6(&local_f0,*puVar17);
          local_a8 = local_a8 & 0xffffffff00000000;
          local_80 = local_80 & 0xffffffff00000000;
          bVar18 = (longlong)uStack_70 < 0;
          uStack_70 = uStack_70 & 0xffffffff00000000;
          if (bVar18) {
            FUN_1476644c4(&local_78,0);
          }
          puVar4 = local_168;
          local_168._6_2_ = SUB82(puVar4,6);
          local_168._0_6_ =
               CONCAT24(*puVar17,CONCAT22(*(undefined2 *)((longlong)plVar11 + 0x5c),
                                          *(undefined2 *)(param_1 + 0x66)));
          local_158 = &local_168;
          puStack_150 = (undefined1 *)((longlong)&local_168 + 6);
          FUN_1447c44f6(&local_c8,&local_158);
          cVar8 = FUN_14050a5e0(lVar13,&local_c8);
          lVar3 = local_1a0;
          if (cVar8 != '\0') {
            uVar15 = (uint)-*(int *)(param_1 + 0x110) + uVar16 + 1;
            if (0 < (int)uVar15) {
              uVar10 = FUN_144a54ea4(local_1a0,uVar15 & 0xffffffff);
              FUN_1447c6044(lVar3,uVar10,uVar15 & 0xffffffff,0);
            }
            lVar13 = *(longlong *)(param_1 + 0x108);
            if (*(longlong *)(param_1 + 0x108) == 0) {
              lVar13 = lVar3;
            }
            puVar1 = (uint *)(lVar13 + (uVar16 >> 5 & 0x7ffffff) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)uVar16 & 0x1f);
            FUN_140dba9e6(local_1a8,*puVar17);
            lVar13 = local_198;
          }
        }
        uVar16 = uVar16 + 1;
        puVar17 = puVar17 + 0x2c;
      } while ((longlong)(int)lVar14 != uVar16);
    }
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_158 = (undefined8 *)0x0;
    puStack_150 = (undefined1 *)0x0;
    local_118 = 0;
    local_138 = 0x10000000000;
    local_110 = 0x10000000000;
    local_108 = 0;
    uStack_100 = 0;
    local_16c = *(undefined2 *)(param_1 + 0x66);
    local_160 = &local_168;
    local_16a = *(undefined2 *)((longlong)plVar11 + 0x5c);
    local_168 = &local_16c;
    FUN_1447c44f6(&local_158);
    FUN_14010b303(&local_f0,&uStack_130,1,&local_168);
    uVar9 = FUN_14050a5e0(lVar13,&local_158);
    *(undefined1 *)(param_1 + 0x118) = uVar9;
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14895a346 FUN_14895a346 body=286 status=ok
// SIG undefined FUN_14895a346(void)

undefined8
FUN_14895a346(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined4 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  undefined1 **local_68;
  longlong *local_58;
  longlong *local_50;
  undefined1 *local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0;
  local_48 = &LAB_148962ba2;
  plVar6 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b425820;
  local_58 = plVar6 + 2;
  plVar6[2] = (longlong)&PTR_FUN_14b425838;
  plVar6[3] = param_4;
  uVar3 = param_5[1];
  uVar4 = param_5[2];
  uVar5 = param_5[3];
  *(undefined4 *)(plVar6 + 4) = *param_5;
  *(undefined4 *)((longlong)plVar6 + 0x24) = uVar3;
  *(undefined4 *)(plVar6 + 5) = uVar4;
  *(undefined4 *)((longlong)plVar6 + 0x2c) = uVar5;
  local_50 = plVar6;
  if (plVar6 == (longlong *)0x0) {
    local_68 = &local_48;
    FUN_1406abf4a(param_1,param_2,param_3,&local_58);
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    local_68 = &local_48;
    FUN_1406abf4a(param_1,param_2,param_3,&local_58);
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
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895a466 FUN_14895a466 body=203 status=ok
// SIG undefined FUN_14895a466(void)

void FUN_14895a466(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x70);
    lVar3 = 0;
    do {
      memset(*(void **)(lVar2 + 8 + lVar3),0,(longlong)*(int *)(lVar2 + 0x10 + lVar3) * 0x18);
      lVar3 = lVar3 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar3);
  }
  iVar1 = *(int *)(param_1 + 0x88);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x80);
    lVar3 = 0;
    do {
      memset(*(void **)(lVar2 + 8 + lVar3),0,(longlong)*(int *)(lVar2 + 0x10 + lVar3) * 0x18);
      lVar3 = lVar3 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar3);
  }
  iVar1 = *(int *)(param_1 + 0x98);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x90);
    lVar3 = 0;
    do {
      memset(*(void **)(lVar2 + 8 + lVar3),0,(longlong)*(int *)(lVar2 + 0x10 + lVar3) * 0x18);
      lVar3 = lVar3 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar3);
  }
  return;
}



// FUNCTION 14895a532 FUN_14895a532 body=1910 status=ok
// SIG undefined FUN_14895a532(void)

void FUN_14895a532(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auVar8 [8];
  undefined1 auVar9 [8];
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint *puVar15;
  undefined1 auStack_268 [32];
  longlong *local_248;
  longlong *local_240;
  longlong *local_238;
  undefined1 *local_230;
  longlong local_220;
  undefined2 *local_218;
  undefined2 *local_210;
  undefined8 *local_208;
  undefined2 *local_200;
  undefined2 *local_1f8;
  undefined8 *local_1f0;
  undefined2 *local_1e8;
  undefined1 *local_1e0;
  undefined2 *local_1d8;
  undefined1 *local_1d0;
  longlong local_1c8;
  undefined2 *local_1c0;
  undefined1 *local_1b8;
  undefined1 local_1b0 [8];
  undefined4 local_1a8;
  undefined1 local_1a4;
  undefined8 *local_1a0;
  undefined2 *local_198;
  undefined2 local_18e;
  undefined2 uStack_18c;
  undefined2 uStack_18a;
  undefined1 auStack_188 [16];
  undefined1 local_178 [40];
  undefined1 local_150 [40];
  longlong local_128;
  undefined1 local_c8 [64];
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_268;
  FUN_14633bf66();
  if (*(int *)(param_1 + 0x58) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x28);
    lVar2 = lVar7 + 0x28;
    iVar12 = FUN_14754621c(param_1 + 0xf0,lVar2);
    if (iVar12 == 1) {
      FUN_148959c8a();
    }
    else {
      FUN_14895a466(param_1);
    }
    if (((*(int *)(param_1 + 0x78) != 0) || (*(int *)(param_1 + 0x88) != 0)) ||
       (*(int *)(param_1 + 0x98) != 0)) {
      lVar3 = param_1 + 0x70;
      lVar13 = FUN_14009d2a0();
      auVar8 = local_1b0;
      local_88 = 0;
      local_80 = 0x400000000;
      local_58 = 0;
      local_50 = 0x400000000;
      if (*(int *)(param_1 + 0x78) != 0) {
        local_1b0._2_2_ = *(undefined2 *)(lVar13 + 0xf4);
        local_1b0._0_2_ = *(undefined2 *)(lVar13 + 0x5a);
        auVar9 = local_1b0;
        local_1b0._6_2_ = auVar8._6_2_;
        local_1b0._0_5_ = auVar9._0_5_;
        local_1b0[5] = 0;
        local_1a8 = 0x6ff;
        local_1a4 = 0;
        uStack_18c = *(undefined2 *)(lVar13 + 0x110);
        local_1c0 = &uStack_18c;
        uStack_18a = *(undefined2 *)(param_1 + 0x66);
        local_1b8 = auStack_188;
        FUN_147662af4(local_1b0,auStack_188);
        FUN_140dad9c2(local_178,param_1 + 0xa0,2);
        local_18e = *(undefined2 *)(lVar13 + 0x130);
        local_198 = &uStack_18c;
        local_1a0 = (undefined8 *)&local_18e;
        FUN_1447c44f6(local_150);
        local_248 = &local_1c8;
        local_1c8 = lVar3;
        FUN_143e1b0b2(auStack_188,&local_1a0,lVar2,param_2);
        if (local_128 != 0) {
          FUN_1400020a8();
        }
        if ((local_1a0 != (undefined8 *)0x0) &&
           (FUN_147552ffc(local_c8,0xffff,&local_1a0), local_1a0 != (undefined8 *)0x0)) {
          LOCK();
          piVar4 = (int *)(local_1a0 + 1);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)*local_1a0)(local_1a0,1);
          }
        }
      }
      auVar8 = local_1b0;
      if (*(int *)(param_1 + 0x88) != 0) {
        local_220 = param_1 + 0x80;
        local_1b0._2_2_ = *(undefined2 *)(lVar13 + 0xf4);
        local_1b0._0_2_ = *(undefined2 *)(lVar13 + 0x5a);
        auVar9 = local_1b0;
        local_1b0._6_2_ = auVar8._6_2_;
        local_1b0._0_5_ = auVar9._0_5_;
        local_1b0[5] = 0;
        local_1a8 = 0x6ff;
        local_1a4 = 0;
        uStack_18c = *(undefined2 *)(lVar13 + 0x114);
        local_1d8 = &uStack_18c;
        uStack_18a = *(undefined2 *)(param_1 + 0x66);
        local_1d0 = auStack_188;
        FUN_147662af4(local_1b0,auStack_188);
        FUN_140dad9c2(local_178,param_1 + 0xa0,2);
        local_18e = *(undefined2 *)(lVar13 + 0x130);
        local_198 = &uStack_18c;
        local_1a0 = (undefined8 *)&local_18e;
        FUN_1447c44f6(local_150);
        local_248 = &local_1c8;
        local_1c8 = local_220;
        FUN_143e1b0b2(auStack_188,&local_1a0,lVar2,param_2);
        if (local_128 != 0) {
          FUN_1400020a8();
        }
        if ((local_1a0 != (undefined8 *)0x0) &&
           (FUN_147552ffc(local_c8,0xffff,&local_1a0), local_1a0 != (undefined8 *)0x0)) {
          LOCK();
          piVar4 = (int *)(local_1a0 + 1);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)*local_1a0)(local_1a0,1);
          }
        }
      }
      auVar8 = local_1b0;
      if (*(int *)(param_1 + 0x98) != 0) {
        local_220 = param_1 + 0x90;
        local_1b0._2_2_ = *(undefined2 *)(lVar13 + 0xf4);
        local_1b0._0_2_ = *(undefined2 *)(lVar13 + 0x5a);
        auVar9 = local_1b0;
        local_1b0._6_2_ = auVar8._6_2_;
        local_1b0._0_5_ = auVar9._0_5_;
        local_1b0[5] = 0;
        local_1a8 = 0x6ff;
        local_1a4 = 0;
        uStack_18c = *(undefined2 *)(lVar13 + 0x116);
        local_1e8 = &uStack_18c;
        uStack_18a = *(undefined2 *)(param_1 + 0x66);
        local_1e0 = auStack_188;
        FUN_147662af4(local_1b0,auStack_188);
        FUN_140dad9c2(local_178,param_1 + 0xa0,2);
        local_18e = *(undefined2 *)(lVar13 + 0x130);
        local_198 = &uStack_18c;
        local_1a0 = (undefined8 *)&local_18e;
        FUN_1447c44f6(local_150);
        local_248 = &local_1c8;
        local_1c8 = local_220;
        FUN_143e1b51e(auStack_188,&local_1a0,lVar2,param_2);
        if (local_128 != 0) {
          FUN_1400020a8();
        }
        if ((local_1a0 != (undefined8 *)0x0) &&
           (FUN_147552ffc(local_c8,0xffff,&local_1a0), local_1a0 != (undefined8 *)0x0)) {
          LOCK();
          piVar4 = (int *)(local_1a0 + 1);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)*local_1a0)(local_1a0,1);
          }
        }
      }
      puVar10 = local_1a0;
      puVar5 = (uint *)(param_1 + 200);
      uVar1 = *(int *)(param_1 + 0xe8) + 0x1f;
      if (0x1f < uVar1) {
        lVar14 = 0;
        puVar15 = puVar5;
LAB_14895a673:
        uVar6 = *puVar15;
        if (uVar6 == 0) goto code_r0x00014895a67b;
        iVar12 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> iVar12 & 1) == 0; iVar12 = iVar12 + 1) {
          }
        }
        if (iVar12 + 1 != (int)lVar14 && iVar12 - (int)lVar14 < *(int *)(param_1 + 0xe8)) {
          local_1a0 = (undefined8 *)CONCAT62(local_1a0._2_6_,*(undefined2 *)(lVar13 + 0x5c));
          puVar11 = local_1a0;
          local_1a0._6_2_ = SUB82(puVar10,6);
          local_1a0._0_5_ = (uint5)puVar11;
          local_1a0._0_6_ = (uint6)(uint5)local_1a0;
          local_198 = (undefined2 *)CONCAT35(local_198._5_3_,0x6ff);
          uStack_18c = *(undefined2 *)(param_1 + 0x66);
          local_200 = &uStack_18c;
          local_1f8 = &uStack_18a;
          FUN_147662ba4(&local_1a0,auStack_188);
          FUN_140dad9c2(local_178,puVar5,2);
          local_1b0 = *(undefined1 (*) [8])(lVar7 + 0x270);
          local_230 = local_1b0;
          local_238 = &local_1c8;
          local_240 = (longlong *)(param_1 + 0xf8);
          local_248 = param_3;
          local_1c8 = lVar3;
          FUN_143e1b98a(auStack_188,&local_1f0,lVar2,local_c8);
          if (local_1f0 != (undefined8 *)0x0) {
            LOCK();
            piVar4 = (int *)(local_1f0 + 1);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)*local_1f0)(local_1f0,1);
            }
          }
          if (local_128 != 0) {
            FUN_1400020a8();
          }
        }
      }
LAB_14895a63f:
      puVar10 = local_1a0;
      if (*(char *)(param_1 + 0x118) == '\x01') {
        local_1a0 = (undefined8 *)CONCAT62(local_1a0._2_6_,*(undefined2 *)(lVar13 + 0x5c));
        puVar11 = local_1a0;
        local_1a0._6_2_ = SUB82(puVar10,6);
        local_1a0._0_5_ = (uint5)puVar11;
        local_1a0._0_6_ = (uint6)(uint5)local_1a0;
        local_198 = (undefined2 *)CONCAT35(local_198._5_3_,0x6ff);
        uStack_18c = *(undefined2 *)(param_1 + 0x66);
        local_218 = &uStack_18c;
        local_210 = &uStack_18a;
        FUN_147662ba4(&local_1a0,auStack_188);
        FUN_140dad9c2(local_178,param_1 + 0xa0,2);
        FUN_14010b303(puVar5,local_150,1,local_1b0);
        local_1b0 = *(undefined1 (*) [8])(lVar7 + 0x270);
        local_240 = &local_1c8;
        local_248 = param_3;
        local_238 = (longlong *)local_1b0;
        local_1c8 = lVar3;
        FUN_143e1c000(auStack_188,&local_208,lVar2,local_c8);
        if (local_208 != (undefined8 *)0x0) {
          LOCK();
          piVar4 = (int *)(local_208 + 1);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)*local_208)(local_208,1);
          }
        }
        if (local_128 != 0) {
          FUN_1400020a8();
        }
      }
      FUN_14588b8d6(local_78);
      FUN_14009d40c(local_c8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014895a67b:
  lVar14 = lVar14 + -0x20;
  puVar15 = puVar15 + 1;
  if ((ulonglong)(uVar1 & 0xffffffe0) + lVar14 == 0) goto LAB_14895a63f;
  goto LAB_14895a673;
}



// FUNCTION 14895acaa FUN_14895acaa body=116 status=ok
// SIG undefined FUN_14895acaa(void)

void FUN_14895acaa(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148962a00(param_1,iVar1);
    }
    FUN_1489629e5((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_148962a94(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14895ad20 FUN_14895ad20 body=148 status=ok
// SIG undefined FUN_14895ad20(void)

undefined8 * FUN_14895ad20(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[2] = param_1[2];
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_1489650d6(param_2,param_2 + 3);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1447c44f6(param_2 + 3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895adb6 FUN_14895adb6 body=134 status=ok
// SIG undefined FUN_14895adb6(void)

longlong * FUN_14895adb6(undefined8 param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_20,L"GbxSequencePlayer",1);
  local_30 = 0;
  local_38 = 0;
  plVar1 = (longlong *)FUN_140bc39f2(param_1,local_20,0x900040,0);
  (**(code **)(*plVar1 + 0x310))(plVar1,param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895ae4e FUN_14895ae4e body=32 status=ok
// SIG undefined FUN_14895ae4e(void)

undefined8 FUN_14895ae4e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGbxSequencePlayerPoolManager");
  return param_2;
}



// FUNCTION 14895ae6e FUN_14895ae6e body=95 status=ok
// SIG undefined FUN_14895ae6e(void)

uint FUN_14895ae6e(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  
  FUN_140c7de9c();
  FUN_144757f48(param_1,0x40000000);
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar3 = 0;
  }
  do {
    uVar1 = *(uint *)(lVar3 + 8);
    if ((uVar1 >> 0x15 & 1) != 0) {
      return uVar1;
    }
    LOCK();
    uVar2 = *(uint *)(lVar3 + 8);
    bVar4 = uVar1 == uVar2;
    if (bVar4) {
      *(uint *)(lVar3 + 8) = uVar1 | 0x200000;
      uVar2 = uVar1;
    }
    UNLOCK();
  } while (!bVar4);
  return uVar2;
}



// FUNCTION 14895aece FUN_14895aece body=101 status=ok
// SIG undefined FUN_14895aece(void)

void FUN_14895aece(longlong param_1)

{
  undefined1 auStack_58 [44];
  int local_2c [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_143d2743c(param_1 + 0x3a0,local_2c);
  if (local_2c[0] != 0) {
    FUN_1407bebdc(param_1 + 0x3a0,param_1 + 0x390,param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895af52 FUN_14895af52 body=120 status=ok
// SIG undefined FUN_14895af52(void)

undefined8 FUN_14895af52(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = FUN_1475545d8(param_4,param_3);
  local_2c = *(undefined4 *)(param_1 + -0x54);
  local_30[0] = 1;
  local_28 = 1;
  local_24 = local_2c;
  FUN_147554a22(param_4,local_30,param_1 + -0xf8,0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895afcc FUN_14895afcc body=75 status=ok
// SIG undefined FUN_14895afcc(void)

bool FUN_14895afcc(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14895b000;
    }
  }
  lVar2 = 0;
LAB_14895b000:
  lVar1 = FUN_145b7cbfc();
  return lVar2 == lVar1;
}



// FUNCTION 14895b01d FUN_14895b01d body=182 status=ok
// SIG undefined FUN_14895b01d(void)

undefined8 FUN_14895b01d(undefined8 param_1)

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
  local_b8 = FUN_145b7cbfc();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = 8;
  local_90 = 0;
  uStack_88 = 0;
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



// FUNCTION 14895b0d4 FUN_14895b0d4 body=162 status=ok
// SIG undefined FUN_14895b0d4(void)

void FUN_14895b0d4(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_145b7cbfc();
  if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
      == lVar2 + 0x30)) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(param_2);
    }
    iVar1 = *(int *)(param_1 + 0x100);
    *(uint *)(param_1 + 0x100) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x104) < iVar1 + 1U) {
      FUN_14759143a((longlong *)(param_1 + 0xf8),iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar1 * 8) = param_2;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 14895b1dc FUN_14895b1dc body=106 status=ok
// SIG undefined FUN_14895b1dc(void)

void FUN_14895b1dc(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0xf8);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895b24c FUN_14895b24c body=118 status=ok
// SIG undefined FUN_14895b24c(void)

void FUN_14895b24c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140861d3c(local_50,param_1,param_1 + 0x50,param_1 + 0x70);
  local_38 = param_1 + 0x60;
  FUN_147523910(local_50,param_2,param_3,param_4);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895b2c4 FUN_14895b2c4 body=125 status=ok
// SIG undefined FUN_14895b2c4(void)

void FUN_14895b2c4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_30 = param_1 + 0x60;
  FUN_147523b62(local_48);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895b342 FUN_14895b342 body=125 status=ok
// SIG undefined FUN_14895b342(void)

void FUN_14895b342(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_30 = param_1 + 0x60;
  FUN_14895b3c0(local_48);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895b3c0 FUN_14895b3c0 body=90 status=ok
// SIG undefined FUN_14895b3c0(void)

void FUN_14895b3c0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (0 < (int)param_2[1]) {
    lVar2 = 0;
    do {
      iVar1 = FUN_14752433e(param_1,*(undefined4 *)(*param_2 + lVar2 * 4));
      if (iVar1 != -1) {
        FUN_148965d82(param_1,iVar1,*(undefined4 *)(*param_3 + lVar2 * 4));
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 14895b41a FUN_14895b41a body=125 status=ok
// SIG undefined FUN_14895b41a(void)

void FUN_14895b41a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_30 = param_1 + 0x60;
  FUN_14895b498(local_48);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895b498 FUN_14895b498 body=309 status=ok
// SIG undefined FUN_14895b498(void)

void FUN_14895b498(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0 < (int)param_2[1]) {
    lVar3 = 0;
    do {
      iVar1 = FUN_14752433e(param_1,*(undefined4 *)(*param_2 + lVar3 * 4));
      if (iVar1 == -1) {
        FUN_147a3fc60(&local_58);
        *(undefined4 *)(*param_3 + lVar3 * 4) = local_58._0_4_;
      }
      else {
        lVar2 = (longlong)iVar1 * 0x10;
        local_58 = (void *)0x0;
        local_50 = *(int *)(*(longlong *)param_1[3] + 8 + lVar2);
        lVar4 = (longlong)local_50;
        _Src = *(void **)(*(longlong *)param_1[3] + lVar2);
        if (lVar4 == 0) {
          local_4c = 0;
        }
        else {
          FUN_1446dd670(&local_58,local_50,0);
          memcpy(local_58,_Src,lVar4 * 2);
        }
        FUN_148965ff2(param_1,*(undefined4 *)(*(longlong *)*param_1 + (longlong)iVar1 * 4),&local_58
                     );
        FUN_147524308(param_1,&local_5c);
        *(undefined4 *)(*param_3 + lVar3 * 4) = local_5c;
        if (local_58 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_2[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14895b5ce FUN_14895b5ce body=150 status=ok
// SIG undefined FUN_14895b5ce(void)

void FUN_14895b5ce(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  lVar2 = param_2[1];
  local_30 = param_1 + 0x60;
  if (0 < (longlong)(int)lVar2) {
    lVar1 = *param_2;
    lVar4 = 0;
    do {
      iVar3 = FUN_14752433e(local_48,*(undefined4 *)(lVar1 + lVar4 * 4));
      if (iVar3 != -1) {
        FUN_1489660ca(local_48,iVar3);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar2 != lVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14895b666 FUN_14895b666 body=106 status=ok
// SIG undefined FUN_14895b666(void)

void FUN_14895b666(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_30 = param_1 + 0x60;
  FUN_14895b6d2(local_48,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895b6d2 FUN_14895b6d2 body=353 status=ok
// SIG undefined FUN_14895b6d2(void)

void FUN_14895b6d2(undefined8 param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 2;
  uStack_80 = 2;
  FUN_147523910(param_1,&local_88,&local_68);
  local_88 = 0;
  uStack_80 = 0;
  if (0 < (int)uStack_60) {
    lVar6 = 0;
    iVar5 = (int)uStack_60;
    do {
      lVar3 = local_78;
      uVar4 = uStack_80;
      iVar2 = *(int *)(local_68 + lVar6 * 4);
      if (param_3 == '\0') {
        if (param_2 < iVar2) goto LAB_14895b75d;
      }
      else if (iVar2 < param_2) {
LAB_14895b75d:
        iVar5 = (int)uStack_80;
        uVar1 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
        if (uStack_80._4_4_ < uVar1) {
          FUN_14065110c(&local_88,uVar4 & 0xffffffff);
        }
        *(undefined4 *)(local_88 + (longlong)iVar5 * 4) = *(undefined4 *)(lVar3 + lVar6 * 4);
        iVar5 = (int)uStack_60;
      }
      lVar3 = local_88;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar5);
    lVar6 = (longlong)(int)uStack_80;
    if (0 < lVar6) {
      lVar7 = 0;
      do {
        iVar5 = FUN_14752433e(param_1,*(undefined4 *)(lVar3 + lVar7 * 4));
        if (iVar5 != -1) {
          FUN_1489660ca(param_1,iVar5);
        }
        lVar7 = lVar7 + 1;
      } while (lVar6 != lVar7);
    }
    if (local_88 != 0) {
      FUN_1400020a8(local_88);
    }
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14895b834 FUN_14895b834 body=108 status=ok
// SIG undefined FUN_14895b834(void)

void FUN_14895b834(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_30 = param_1 + 0x60;
  FUN_147524082(local_48,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895b8dc FUN_14895b8dc body=103 status=ok
// SIG undefined FUN_14895b8dc(void)

void FUN_14895b8dc(longlong param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x5c) < 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    FUN_140aba11c(param_1 + 0x50,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  FUN_141166f0f(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x68) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x6c) != 0)) {
    FUN_1489661f6(param_1 + 0x60);
  }
  FUN_147a408e2(param_1 + 0x70);
  return;
}



// FUNCTION 14895b944 FUN_14895b944 body=96 status=ok
// SIG undefined FUN_14895b944(void)

void FUN_14895b944(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_40,param_1,param_1 + 0x50,param_1 + 0x70);
  local_28 = param_1 + 0x60;
  FUN_1475243aa(local_40,param_2);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895b9a6 FUN_14895b9a6 body=282 status=ok
// SIG undefined FUN_14895b9a6(void)

undefined8 * FUN_14895b9a6(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  FUN_1475affea();
  *param_1 = &PTR_FUN_14b217ce0;
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0x58);
  _Src = *(void **)(param_2 + 0x50);
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_147539e5c(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],_Src,(longlong)iVar1 << 2);
  }
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0x68);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  *(int *)(param_1 + 0xd) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_1486f3fba(param_1 + 0xc,iVar1,0);
    FUN_1486f401c(param_1[0xc],uVar2,iVar1);
  }
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  return param_1;
}



// FUNCTION 14895bac0 FUN_14895bac0 body=1027 status=ok
// SIG undefined FUN_14895bac0(void)

/* WARNING: Removing unreachable block (ram,0x00014895bc04) */

void FUN_14895bac0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong *param_6)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined **ppuVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_178 [44];
  undefined4 local_14c;
  longlong local_148;
  undefined8 uStack_140;
  void *local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  longlong local_f0;
  longlong local_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [40];
  undefined5 local_a0;
  undefined3 uStack_9b;
  undefined5 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  int local_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (((*(int *)(param_3 + 0x70) == 0) || ((*(byte *)(param_3 + 0x7c) & 2) != 0)) ||
     (*(int *)(param_3 + 0x20) == 1)) goto LAB_14895baec;
  local_148 = 0;
  uStack_140 = 0;
  iVar2 = *(int *)(param_1 + 0x78);
  if ((longlong)iVar2 < 1) {
LAB_14895bea2:
    uVar7 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x70);
    lVar11 = *(longlong *)(param_1 + 0x80);
    lVar8 = 0;
    do {
      local_14c = *(undefined4 *)(lVar3 + lVar8);
      cVar5 = FUN_1400a246c(param_4,&local_14c);
      if (cVar5 != '\0') {
        local_138 = (void *)0x0;
        uVar6 = *(uint *)(lVar11 + 8 + lVar8 * 4);
        _Src = *(void **)(lVar11 + lVar8 * 4);
        uStack_130 = CONCAT44(uStack_130._4_4_,uVar6);
        if ((longlong)(int)uVar6 == 0) {
          uStack_130 = (ulonglong)uVar6;
        }
        else {
          FUN_1446dd670(&local_138,uVar6,0);
          memcpy(local_138,_Src,(longlong)(int)uVar6 * 2);
        }
        uVar7 = uStack_140;
        lVar10 = (longlong)(int)uStack_140;
        uVar6 = (int)uStack_140 + 1;
        uStack_140 = CONCAT44(uStack_140._4_4_,uVar6);
        if (uStack_140._4_4_ < uVar6) {
          FUN_148965f6c(&local_148,uVar7 & 0xffffffff);
        }
        lVar10 = lVar10 * 0x10;
        *(undefined8 *)(local_148 + lVar10) = 0;
        *(void **)(local_148 + lVar10) = local_138;
        local_138 = (void *)0x0;
        *(undefined4 *)(local_148 + 8 + lVar10) = (undefined4)uStack_130;
        *(undefined4 *)(local_148 + 0xc + lVar10) = uStack_130._4_4_;
        uStack_130 = 0;
      }
      lVar10 = local_148;
      lVar8 = lVar8 + 4;
    } while ((longlong)iVar2 * 4 != lVar8);
    iVar2 = (int)uStack_140;
    if ((int)uStack_140 == 0) goto LAB_14895bea2;
    uVar4 = uStack_140._4_4_;
    local_148 = 0;
    uStack_140 = 0;
    FUN_141166f0f(0,0);
    local_128 = (undefined4)param_6[0x24];
    local_138 = (void *)param_6[0x22];
    uStack_130 = param_6[0x23];
    uStack_124 = (undefined4)*(undefined8 *)((longlong)param_6 + 0x124);
    uStack_120 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_6 + 0x124) >> 0x20);
    uStack_11c = (undefined4)*(undefined8 *)((longlong)param_6 + 300);
    uStack_118 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_6 + 300) >> 0x20);
    local_f0 = param_6[0x2b];
    local_110 = (undefined4)param_6[0x27];
    uStack_10c = *(undefined4 *)((longlong)param_6 + 0x13c);
    uStack_108 = (undefined4)param_6[0x28];
    uStack_104 = *(undefined4 *)((longlong)param_6 + 0x144);
    local_100 = (undefined4)param_6[0x29];
    uStack_fc = *(undefined4 *)((longlong)param_6 + 0x14c);
    uStack_f8 = (undefined4)param_6[0x2a];
    uStack_f4 = *(undefined4 *)((longlong)param_6 + 0x154);
    FUN_144a3f8b4(&local_e8,param_6 + 0x2c);
    FUN_144b1f2a6(local_c8,param_6 + 0x30);
    local_a0 = (undefined5)param_6[0x35];
    uStack_9b = (undefined3)*(undefined8 *)((longlong)param_6 + 0x1ad);
    uStack_98 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_6 + 0x1ad) >> 0x18);
    local_50 = local_50 | 3;
    local_90 = &PTR_FUN_14b425788;
    uStack_88 = lVar10;
    local_80 = iVar2;
    uStack_7c = uVar4;
    iVar2 = (int)param_6[1];
    *(uint *)(param_6 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_6 + 0xc) < iVar2 + 1U) {
      FUN_140ac5684(param_6,iVar2);
    }
    lVar11 = *param_6;
    lVar8 = (longlong)iVar2 * 0xf0;
    plVar1 = (longlong *)(lVar8 + lVar11);
    *(undefined4 *)(plVar1 + 4) = uStack_118;
    plVar1[2] = CONCAT44(uStack_124,local_128);
    plVar1[3] = CONCAT44(uStack_11c,uStack_120);
    *plVar1 = (longlong)local_138;
    plVar1[1] = uStack_130;
    plVar1[9] = local_f0;
    *(undefined4 *)(plVar1 + 7) = local_100;
    *(undefined4 *)((longlong)plVar1 + 0x3c) = uStack_fc;
    *(undefined4 *)(plVar1 + 8) = uStack_f8;
    *(undefined4 *)((longlong)plVar1 + 0x44) = uStack_f4;
    *(undefined4 *)(plVar1 + 5) = local_110;
    *(undefined4 *)((longlong)plVar1 + 0x2c) = uStack_10c;
    *(undefined4 *)(plVar1 + 6) = uStack_108;
    *(undefined4 *)((longlong)plVar1 + 0x34) = uStack_104;
    plVar1[10] = local_e8;
    *(undefined4 *)(plVar1 + 0xb) = local_e0;
    plVar1[0xc] = 0;
    plVar1[0xc] = local_d8;
    local_d8 = 0;
    *(undefined4 *)(plVar1 + 0xd) = (undefined4)local_d0;
    *(undefined4 *)((longlong)plVar1 + 0x6c) = local_d0._4_4_;
    local_d0 = 0;
    FUN_144b1f34a(plVar1 + 0xe,local_c8);
    plVar1[0x13] = CONCAT35(uStack_9b,local_a0);
    *(ulonglong *)((longlong)plVar1 + 0x9d) = CONCAT53(uStack_98,uStack_9b);
    lVar3 = lVar8 + lVar11;
    *(byte *)(lVar3 + 0xe8) = *(byte *)(lVar3 + 0xe8) & 0xfc | 2;
    FUN_144adeb48((undefined4 *)(lVar3 + 0xa8));
    if ((local_50 & 1) != 0) {
      lVar11 = lVar11 + lVar8;
      *(byte *)(lVar11 + 0xe8) = *(byte *)(lVar11 + 0xe8) | 1;
      *(byte *)(lVar11 + 0xe8) = *(byte *)(lVar11 + 0xe8) & 0xfd | local_50 & 2;
      *(undefined8 *)(lVar3 + 0xd8) = local_60;
      *(undefined8 *)(lVar3 + 0xe0) = uStack_58;
      *(undefined8 *)(lVar3 + 200) = local_70;
      *(undefined8 *)(lVar3 + 0xd0) = uStack_68;
      *(ulonglong *)(lVar3 + 0xb8) = CONCAT44(uStack_7c,local_80);
      *(undefined8 *)(lVar3 + 0xc0) = uStack_78;
      *(undefined4 *)(lVar3 + 0xa8) = (undefined4)local_90;
      *(undefined4 *)(lVar3 + 0xac) = local_90._4_4_;
      *(undefined4 *)(lVar3 + 0xb0) = (undefined4)uStack_88;
      *(undefined4 *)(lVar3 + 0xb4) = uStack_88._4_4_;
      local_50 = local_50 & 0xfe;
    }
    if ((local_50 & 1) != 0) {
      ppuVar9 = (undefined **)&local_90;
      if ((local_50 & 2) == 0) {
        ppuVar9 = local_90;
      }
      local_50 = local_50 & 0xfe;
      (**(code **)*ppuVar9)(ppuVar9,0);
      if ((local_50 & 2) == 0) {
        FUN_1400020a8(local_90);
      }
    }
    FUN_144adeafa(&local_110);
    FUN_141166f0f(0,0);
    uVar7 = uStack_140 & 0xffffffff;
  }
  FUN_141166f0f(local_148,uVar7);
  if (local_148 != 0) {
    FUN_1400020a8();
  }
LAB_14895baec:
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895bec4 FUN_14895bec4 body=102 status=ok
// SIG undefined FUN_14895bec4(void)

undefined8 FUN_14895bec4(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar3 = *param_2;
      goto LAB_14895bef8;
    }
  }
  lVar3 = 0;
LAB_14895bef8:
  lVar1 = FUN_145b7cdd0();
  if ((lVar1 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),
                     *(longlong *)
                      (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
                     lVar1 + 0x30);
  }
  return uVar2;
}



// FUNCTION 14895bf2a FUN_14895bf2a body=68 status=ok
// SIG undefined FUN_14895bf2a(void)

void FUN_14895bf2a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_145b7cdd0();
  if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
      == lVar1 + 0x30)) {
    FUN_1476be2d0(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 14895bf73 FUN_14895bf73 body=182 status=ok
// SIG undefined FUN_14895bf73(void)

undefined8 FUN_14895bf73(undefined8 param_1)

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
  local_b8 = FUN_145b7cdd0();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = 8;
  local_90 = 0;
  uStack_88 = 0;
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



// FUNCTION 14895c030 FUN_14895c030 body=155 status=ok
// SIG undefined FUN_14895c030(void)

longlong FUN_14895c030(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_168 [40];
  undefined **local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_12c;
  undefined1 local_120 [248];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_138 = 0;
  local_12c = 0;
  local_130 = 0;
  local_140 = &PTR_FUN_14b215af0;
  FUN_14895b9a6(local_120,param_3 + 0xf8);
  *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) & 0xfe;
  FUN_148966226(param_2,&local_140);
  local_140 = &PTR_FUN_14b215af0;
  FUN_141166e00(local_120);
  if ((local_28 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895c0cc FUN_14895c0cc body=118 status=ok
// SIG undefined FUN_14895c0cc(void)

void FUN_14895c0cc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140861d3c(local_50,param_1,param_1 + 0x50,param_1 + 0x70);
  local_38 = param_1 + 0x60;
  FUN_147523910(local_50,param_2,param_3,param_4);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895c144 FUN_14895c144 body=125 status=ok
// SIG undefined FUN_14895c144(void)

void FUN_14895c144(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_30 = param_1 + 0x60;
  FUN_147523b62(local_48);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895c1c2 FUN_14895c1c2 body=125 status=ok
// SIG undefined FUN_14895c1c2(void)

void FUN_14895c1c2(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_30 = param_1 + 0x60;
  FUN_14895c240(local_48);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895c240 FUN_14895c240 body=90 status=ok
// SIG undefined FUN_14895c240(void)

void FUN_14895c240(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (0 < (int)param_2[1]) {
    lVar2 = 0;
    do {
      iVar1 = FUN_14752433e(param_1,*(undefined4 *)(*param_2 + lVar2 * 4));
      if (iVar1 != -1) {
        FUN_14896636e(param_1,iVar1,*(undefined4 *)(*param_3 + lVar2 * 4));
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 14895c29a FUN_14895c29a body=125 status=ok
// SIG undefined FUN_14895c29a(void)

void FUN_14895c29a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_30 = param_1 + 0x60;
  FUN_14895c318(local_48);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895c318 FUN_14895c318 body=252 status=ok
// SIG undefined FUN_14895c318(void)

void FUN_14895c318(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  longlong local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0 < (int)param_2[1]) {
    lVar4 = 0;
    do {
      iVar1 = FUN_14752433e(param_1,*(undefined4 *)(*param_2 + lVar4 * 4));
      if (iVar1 == -1) {
        FUN_147a3fc60(&local_58);
        lVar3 = *param_3;
        uVar2 = (undefined4)local_58;
      }
      else {
        lVar3 = *(longlong *)param_1[3];
        lVar5 = (longlong)iVar1 * 0x10;
        local_58 = *(longlong *)(lVar3 + lVar5);
        if ((DAT_14c950c29 == '\x01') && (local_58 != 0)) {
          FUN_14689c22e();
        }
        local_50 = *(undefined1 *)(lVar3 + lVar5 + 8);
        uVar2 = FUN_14895cbde(param_1,*(undefined4 *)(*(longlong *)*param_1 + (longlong)iVar1 * 4),
                              &local_58);
        FUN_147524308(param_1,&local_5c,uVar2);
        lVar3 = *param_3;
        uVar2 = local_5c;
      }
      *(undefined4 *)(lVar3 + lVar4 * 4) = uVar2;
      lVar4 = lVar4 + 1;
    } while (lVar4 < (int)param_2[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14895c416 FUN_14895c416 body=150 status=ok
// SIG undefined FUN_14895c416(void)

void FUN_14895c416(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  lVar2 = param_2[1];
  local_30 = param_1 + 0x60;
  if (0 < (longlong)(int)lVar2) {
    lVar1 = *param_2;
    lVar4 = 0;
    do {
      iVar3 = FUN_14752433e(local_48,*(undefined4 *)(lVar1 + lVar4 * 4));
      if (iVar3 != -1) {
        FUN_148966554(local_48,iVar3);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar2 != lVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14895c4ae FUN_14895c4ae body=106 status=ok
// SIG undefined FUN_14895c4ae(void)

void FUN_14895c4ae(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_30 = param_1 + 0x60;
  FUN_14895c51a(local_48,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895c51a FUN_14895c51a body=353 status=ok
// SIG undefined FUN_14895c51a(void)

void FUN_14895c51a(undefined8 param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 2;
  uStack_80 = 2;
  FUN_147523910(param_1,&local_88,&local_68);
  local_88 = 0;
  uStack_80 = 0;
  if (0 < (int)uStack_60) {
    lVar6 = 0;
    iVar5 = (int)uStack_60;
    do {
      lVar3 = local_78;
      uVar4 = uStack_80;
      iVar2 = *(int *)(local_68 + lVar6 * 4);
      if (param_3 == '\0') {
        if (param_2 < iVar2) goto LAB_14895c5a5;
      }
      else if (iVar2 < param_2) {
LAB_14895c5a5:
        iVar5 = (int)uStack_80;
        uVar1 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
        if (uStack_80._4_4_ < uVar1) {
          FUN_14065110c(&local_88,uVar4 & 0xffffffff);
        }
        *(undefined4 *)(local_88 + (longlong)iVar5 * 4) = *(undefined4 *)(lVar3 + lVar6 * 4);
        iVar5 = (int)uStack_60;
      }
      lVar3 = local_88;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar5);
    lVar6 = (longlong)(int)uStack_80;
    if (0 < lVar6) {
      lVar7 = 0;
      do {
        iVar5 = FUN_14752433e(param_1,*(undefined4 *)(lVar3 + lVar7 * 4));
        if (iVar5 != -1) {
          FUN_148966554(param_1,iVar5);
        }
        lVar7 = lVar7 + 1;
      } while (lVar6 != lVar7);
    }
    if (local_88 != 0) {
      FUN_1400020a8(local_88);
    }
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14895c67c FUN_14895c67c body=108 status=ok
// SIG undefined FUN_14895c67c(void)

void FUN_14895c67c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_48,param_1,param_1 + 0x50,param_1 + 0x70);
  local_30 = param_1 + 0x60;
  FUN_147524082(local_48,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895c722 FUN_14895c722 body=89 status=ok
// SIG undefined FUN_14895c722(void)

void FUN_14895c722(longlong param_1)

{
  if (*(int *)(param_1 + 0x5c) < 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    FUN_140aba11c(param_1 + 0x50,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(int *)(param_1 + 0x6c) < 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    FUN_1489666ae(param_1 + 0x60);
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  FUN_147a408e2(param_1 + 0x70);
  return;
}



// FUNCTION 14895c77c FUN_14895c77c body=96 status=ok
// SIG undefined FUN_14895c77c(void)

void FUN_14895c77c(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140861d3c(local_40,param_1,param_1 + 0x50,param_1 + 0x70);
  local_28 = param_1 + 0x60;
  FUN_1475243aa(local_40,param_2);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895c7de FUN_14895c7de body=320 status=ok
// SIG undefined FUN_14895c7de(void)

undefined8 FUN_14895c7de(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a492060;
  plVar1 = plVar4 + 2;
  FUN_1489666de(plVar1,param_1 + 0x110);
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_140aec6f8(&local_38,plVar1);
  plVar1 = local_30;
  if (local_30 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0xe0) = local_38;
    plVar4 = *(longlong **)(param_1 + 0xe8);
    if (plVar4 == (longlong *)0x0) goto LAB_14895c8d5;
    *(undefined8 *)(param_1 + 0xe8) = 0;
LAB_14895c89f:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_14895c8d5;
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
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0xe0) = local_38;
    plVar4 = *(longlong **)(param_1 + 0xe8);
    if (local_30 != plVar4) {
      *(longlong **)(param_1 + 0xe8) = local_30;
      if (plVar4 == (longlong *)0x0) goto LAB_14895c8d5;
      goto LAB_14895c89f;
    }
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14895c8d5;
    (**(code **)*local_30)(local_30);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_14895c8d5:
  plVar1 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895c920 FUN_14895c920 body=102 status=ok
// SIG undefined FUN_14895c920(void)

undefined8 FUN_14895c920(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar3 = *param_2;
      goto LAB_14895c954;
    }
  }
  lVar3 = 0;
LAB_14895c954:
  lVar1 = FUN_1459f04ac();
  if ((lVar1 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),
                     *(longlong *)
                      (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
                     lVar1 + 0x30);
  }
  return uVar2;
}



// FUNCTION 14895c98b FUN_14895c98b body=182 status=ok
// SIG undefined FUN_14895c98b(void)

undefined8 FUN_14895c98b(undefined8 param_1)

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
  local_b8 = FUN_145b7d178();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = 8;
  local_90 = 0;
  uStack_88 = 0;
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



// FUNCTION 14895ca42 FUN_14895ca42 body=157 status=ok
// SIG undefined FUN_14895ca42(void)

void FUN_14895ca42(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_1459f04ac();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_14689c22e(param_2);
      }
      iVar1 = *(int *)(param_1 + 0x100);
      *(uint *)(param_1 + 0x100) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x104) < iVar1 + 1U) {
        FUN_14759143a((longlong *)(param_1 + 0xf8),iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar1 * 8) = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_14689c22e(param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14895cb02 FUN_14895cb02 body=106 status=ok
// SIG undefined FUN_14895cb02(void)

void FUN_14895cb02(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0xf8);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895cb6e FUN_14895cb6e body=95 status=ok
// SIG undefined FUN_14895cb6e(void)

void FUN_14895cb6e(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar1) << 3);
    iVar1 = *(int *)(param_1 + 0x100);
  }
  *(int *)(param_1 + 0x100) = iVar1 + -1;
  FUN_1475915fe(param_1 + 0xf8);
  return;
}



// FUNCTION 14895cbde FUN_14895cbde body=215 status=ok
// SIG undefined FUN_14895cbde(void)

ulonglong FUN_14895cbde(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  ulonglong *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_147525f8a();
  FUN_14896643e(*(undefined8 *)(param_1 + 0x18),param_3,uVar2);
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 != 0) && ((longlong)*(int *)(lVar1 + 0x10) != 0)) {
    lVar3 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar1 + 8) + 8 + lVar3) != 0) &&
         (*(longlong *)(*(longlong *)(lVar1 + 8) + lVar3) != 0)) {
        local_38 = (ulonglong *)0x0;
        uStack_30 = 1;
        FUN_14753e66a(&local_38,0);
        *local_38 = (ulonglong)uVar2 | param_2 << 0x20;
        FUN_14753e6f0(*(longlong *)(param_1 + 0x10) + 8,*(longlong *)(param_1 + 0x10),&local_38);
        if (local_38 != (ulonglong *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)*(int *)(lVar1 + 0x10) * 0x10 != lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return (ulonglong)uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895ccb6 FUN_14895ccb6 body=743 status=ok
// SIG undefined FUN_14895ccb6(void)

void FUN_14895ccb6(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  undefined **ppuVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_178 [44];
  float local_14c;
  longlong local_148;
  longlong lStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  longlong local_100;
  longlong local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [40];
  undefined5 local_b0;
  undefined3 uStack_ab;
  undefined5 uStack_a8;
  undefined8 local_a0;
  float fStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  byte local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_14c = 1.0;
  uVar6 = *(uint *)(param_3 + 0x24);
  if (SBORROW4(0,uVar6)) {
    puVar7 = (uint *)(param_3 + 4);
    if (*(int *)(param_3 + 0x20) == 0) {
      puVar7 = (uint *)(param_3 + 0x10);
    }
    uVar6 = *puVar7;
    uVar9 = (ulonglong)puVar7[1] << 0x20;
  }
  else {
    uVar9 = 0;
  }
  cVar5 = FUN_1400f01f6(param_1 + 0x20,uVar6 | uVar9,&local_14c);
  fVar4 = local_14c;
  if (cVar5 != '\0') {
    if (0.0 <= local_14c) {
      local_138 = (undefined4)param_5[0x24];
      local_148 = param_5[0x22];
      lStack_140 = param_5[0x23];
      uStack_134 = (undefined4)*(undefined8 *)((longlong)param_5 + 0x124);
      uStack_130 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x124) >> 0x20);
      uStack_12c = (undefined4)*(undefined8 *)((longlong)param_5 + 300);
      uStack_128 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 300) >> 0x20);
      local_120 = (undefined4)param_5[0x27];
      uStack_11c = *(undefined4 *)((longlong)param_5 + 0x13c);
      uStack_118 = (undefined4)param_5[0x28];
      uStack_114 = *(undefined4 *)((longlong)param_5 + 0x144);
      local_110 = (undefined4)param_5[0x29];
      uStack_10c = *(undefined4 *)((longlong)param_5 + 0x14c);
      uStack_108 = (undefined4)param_5[0x2a];
      uStack_104 = *(undefined4 *)((longlong)param_5 + 0x154);
      local_100 = param_5[0x2b];
      FUN_144a3f8b4(&local_f8,param_5 + 0x2c);
      FUN_144b1f2a6(local_d8,param_5 + 0x30);
      local_b0 = (undefined5)param_5[0x35];
      uStack_ab = (undefined3)*(undefined8 *)((longlong)param_5 + 0x1ad);
      uStack_a8 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x1ad) >> 0x18);
      local_60 = local_60 | 3;
      local_a0 = &PTR_FUN_14b425798;
      fStack_98 = fVar4;
      iVar3 = (int)param_5[1];
      *(uint *)(param_5 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
        FUN_140ac5684(param_5,iVar3);
      }
      lVar11 = *param_5;
      lVar10 = (longlong)iVar3 * 0xf0;
      plVar1 = (longlong *)(lVar10 + lVar11);
      *(undefined4 *)(plVar1 + 4) = uStack_128;
      plVar1[2] = CONCAT44(uStack_134,local_138);
      plVar1[3] = CONCAT44(uStack_12c,uStack_130);
      *plVar1 = local_148;
      plVar1[1] = lStack_140;
      plVar1[9] = local_100;
      *(undefined4 *)(plVar1 + 7) = local_110;
      *(undefined4 *)((longlong)plVar1 + 0x3c) = uStack_10c;
      *(undefined4 *)(plVar1 + 8) = uStack_108;
      *(undefined4 *)((longlong)plVar1 + 0x44) = uStack_104;
      *(undefined4 *)(plVar1 + 5) = local_120;
      *(undefined4 *)((longlong)plVar1 + 0x2c) = uStack_11c;
      *(undefined4 *)(plVar1 + 6) = uStack_118;
      *(undefined4 *)((longlong)plVar1 + 0x34) = uStack_114;
      plVar1[10] = local_f8;
      *(undefined4 *)(plVar1 + 0xb) = local_f0;
      plVar1[0xc] = 0;
      plVar1[0xc] = local_e8;
      local_e8 = 0;
      *(undefined4 *)(plVar1 + 0xd) = (undefined4)local_e0;
      *(undefined4 *)((longlong)plVar1 + 0x6c) = local_e0._4_4_;
      local_e0 = 0;
      FUN_144b1f34a(plVar1 + 0xe,local_d8);
      plVar1[0x13] = CONCAT35(uStack_ab,local_b0);
      *(ulonglong *)((longlong)plVar1 + 0x9d) = CONCAT53(uStack_a8,uStack_ab);
      lVar2 = lVar10 + lVar11;
      *(byte *)(lVar2 + 0xe8) = *(byte *)(lVar2 + 0xe8) & 0xfc | 2;
      FUN_144adeb48((undefined4 *)(lVar2 + 0xa8));
      if ((local_60 & 1) != 0) {
        lVar11 = lVar11 + lVar10;
        *(byte *)(lVar11 + 0xe8) = *(byte *)(lVar11 + 0xe8) | 1;
        *(byte *)(lVar11 + 0xe8) = *(byte *)(lVar11 + 0xe8) & 0xfd | local_60 & 2;
        *(undefined8 *)(lVar2 + 0xd8) = local_70;
        *(undefined8 *)(lVar2 + 0xe0) = uStack_68;
        *(undefined8 *)(lVar2 + 200) = local_80;
        *(undefined8 *)(lVar2 + 0xd0) = uStack_78;
        *(undefined8 *)(lVar2 + 0xb8) = local_90;
        *(undefined8 *)(lVar2 + 0xc0) = uStack_88;
        *(undefined4 *)(lVar2 + 0xa8) = (undefined4)local_a0;
        *(undefined4 *)(lVar2 + 0xac) = local_a0._4_4_;
        *(float *)(lVar2 + 0xb0) = fStack_98;
        *(undefined4 *)(lVar2 + 0xb4) = uStack_94;
        local_60 = local_60 & 0xfe;
      }
      if ((local_60 & 1) != 0) {
        ppuVar8 = (undefined **)&local_a0;
        if ((local_60 & 2) == 0) {
          ppuVar8 = local_a0;
        }
        local_60 = local_60 & 0xfe;
        (**(code **)*ppuVar8)(ppuVar8,0);
        if ((local_60 & 2) == 0) {
          FUN_1400020a8(local_a0);
        }
      }
      FUN_144adeafa(&local_120);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895cf9e FUN_14895cf9e body=75 status=ok
// SIG undefined FUN_14895cf9e(void)

bool FUN_14895cf9e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14895cfd2;
    }
  }
  lVar2 = 0;
LAB_14895cfd2:
  lVar1 = FUN_145b7d262();
  return lVar2 == lVar1;
}



// FUNCTION 14895cfef FUN_14895cfef body=182 status=ok
// SIG undefined FUN_14895cfef(void)

undefined8 FUN_14895cfef(undefined8 param_1)

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
  local_b8 = FUN_145b7d262();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = 8;
  local_90 = 0;
  uStack_88 = 0;
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



// FUNCTION 14895d0a6 FUN_14895d0a6 body=155 status=ok
// SIG undefined FUN_14895d0a6(void)

longlong FUN_14895d0a6(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_178 [32];
  undefined **local_158;
  undefined1 local_150;
  undefined1 local_148;
  undefined8 local_144;
  undefined1 local_138 [272];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_150 = 0;
  local_144 = 0;
  local_148 = 0;
  local_158 = &PTR_FUN_14b2171d0;
  FUN_140737604(local_138,param_3 + 0x108);
  *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) & 0xfe;
  FUN_1489667a4(param_2,&local_158);
  local_158 = &PTR_FUN_14b2171d0;
  FUN_1404dbc70(local_138);
  if ((local_28 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895d142 FUN_14895d142 body=71 status=ok
// SIG undefined FUN_14895d142(void)

void FUN_14895d142(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14895d18a(param_1 + -0x100);
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
                    /* WARNING: Could not recover jumptable at 0x00014895d17e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14895d18a FUN_14895d18a body=388 status=ok
// SIG undefined FUN_14895d18a(void)

void FUN_14895d18a(longlong param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  int local_98;
  undefined1 local_90 [64];
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (0 < *(int *)(param_1 + 0x118)) {
    FUN_1405e06c2(*param_2,&local_a0,param_3,param_3 + 0x90);
    if ((longlong)local_98 != 0) {
      puVar6 = local_a0;
      do {
        local_a8 = *puVar6;
        lVar3 = FUN_14479d2ce(&local_a8);
        if (lVar3 != 0) {
          lVar4 = FUN_144a6c4d8();
          if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
            uVar5 = FUN_1407725cc();
            lVar4 = FUN_144718840(lVar3,uVar5);
            if (lVar4 != 0) {
              local_50 = 0xff;
              local_b8 = local_90;
              local_b0 = param_2;
              cVar2 = FUN_14895d492(param_1,param_2,param_3,lVar3);
              param_2 = local_b0;
              if (cVar2 != '\0') {
                uVar5 = FUN_144b397c8(lVar4);
                uVar1 = *(uint *)(param_1 + 0x118);
                param_2 = local_b0;
                if ((ulonglong)uVar1 != 0) {
                  lVar3 = 0;
                  do {
                    lVar4 = FUN_144a782da(uVar5,*(longlong *)(param_1 + 0x110) + lVar3);
                    if (lVar4 != 0) {
                      FUN_1406ebff6(lVar4,0,local_90);
                    }
                    lVar3 = lVar3 + 8;
                    param_2 = local_b0;
                  } while ((ulonglong)uVar1 << 3 != lVar3);
                }
              }
            }
          }
        }
        puVar6 = puVar6 + 1;
      } while (puVar6 != local_a0 + local_98);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14895d310 FUN_14895d310 body=91 status=ok
// SIG undefined FUN_14895d310(void)

void FUN_14895d310(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if ((*(char *)(param_1 + 0x30) == '\x01') && (*(char *)(param_1 + 0x88) == '\x01')) {
    FUN_14895d18a(param_1 + -0x100,param_2);
  }
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
                    /* WARNING: Could not recover jumptable at 0x00014895d34f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14895d36c FUN_14895d36c body=293 status=ok
// SIG undefined FUN_14895d36c(void)

void FUN_14895d36c(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0 < *(int *)(param_1 + 0x18)) {
    FUN_1405e06c2(*param_2,&local_58,param_3,param_3 + 0x90);
    if ((longlong)local_50 != 0) {
      puVar8 = local_58;
      do {
        local_60 = *puVar8;
        lVar5 = FUN_14479d2ce(&local_60);
        if (lVar5 != 0) {
          uVar6 = FUN_1407725cc();
          lVar5 = FUN_144718840(lVar5,uVar6);
          if (lVar5 != 0) {
            uVar6 = FUN_144b397c8(lVar5);
            uVar3 = *(uint *)(param_1 + 0x18);
            if ((ulonglong)uVar3 != 0) {
              lVar5 = 0;
              do {
                lVar7 = FUN_144a782da(uVar6,*(longlong *)(param_1 + 0x10) + lVar5);
                if (lVar7 != 0) {
                  FUN_140c82872(lVar7,0);
                }
                lVar5 = lVar5 + 8;
              } while ((ulonglong)uVar3 << 3 != lVar5);
            }
          }
        }
        puVar8 = puVar8 + 1;
      } while (puVar8 != local_58 + local_50);
    }
  }
  plVar4 = (longlong *)param_2[1];
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
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895d492 FUN_14895d492 body=594 status=ok
// SIG undefined FUN_14895d492(void)

undefined8
FUN_14895d492(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 ****ppppuVar5;
  longlong lVar6;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 ***local_a8;
  int local_a0;
  ushort local_90;
  byte local_88;
  undefined1 local_80 [40];
  undefined4 local_58;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b4 = CONCAT31(local_b4._1_3_,*(undefined1 *)(param_1 + 0x189));
  uStack_b0 = (undefined4)*(undefined8 *)(param_1 + 0x18c);
  uStack_ac = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x18c) >> 0x20);
  if (*(char *)(param_1 + 0x130) == '\0') {
    FUN_1405e06c2(*param_2,&local_a8,param_1 + 0x134,param_3 + 0x90);
    if ((longlong)local_a0 != 0) {
      lVar6 = 0;
      do {
        local_c0 = *(undefined8 *)((longlong)local_a8 + lVar6);
        lVar2 = FUN_14479d2ce(&local_c0);
        if (lVar2 != 0) {
          lVar3 = FUN_144a6c4d8();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            local_c8 = 0;
            FUN_14485c47a(&local_c8,lVar2);
            FUN_145ef4c5c(local_80,&local_c8,&local_b4,0);
            FUN_14186f05e(param_5,local_80);
            goto LAB_14895d5d5;
          }
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)local_a0 * 8 != lVar6);
    }
  }
  else if (*(char *)(param_1 + 0x130) == '\x01') {
    local_80[0] = 0;
    local_58 = 0;
    FUN_1456bb102(local_80,param_4);
    FUN_1447c3578(param_1 + 0x150,&local_a8,local_80);
    FUN_144a5ac3a(local_80);
    if (local_88 != 0) {
      local_d8 = CONCAT44(uStack_b0,local_b4);
      local_d0 = uStack_ac;
      FUN_14070d2c0(local_80,&local_a8,&local_d8,param_4);
      FUN_14186f05e(param_5,local_80);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
      if (pcVar1 != (code *)0x0) {
        ppppuVar5 = &local_a8;
        if (0x18 < local_90) {
          ppppuVar5 = (undefined8 ****)local_a8;
        }
        (*pcVar1)(ppppuVar5);
      }
      if (0x18 < local_90) {
        FUN_1400020a8(local_a8);
      }
LAB_14895d5d5:
      uVar4 = 1;
      goto LAB_14895d4eb;
    }
    if (DAT_14c9a85d0 != (code *)0x0) {
      ppppuVar5 = &local_a8;
      if (0x18 < local_90) {
        ppppuVar5 = (undefined8 ****)local_a8;
      }
      (*DAT_14c9a85d0)(ppppuVar5);
    }
    if (0x18 < local_90) {
      FUN_1400020a8(local_a8);
    }
  }
  uVar4 = 0;
LAB_14895d4eb:
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14895d6e6 FUN_14895d6e6 body=102 status=ok
// SIG undefined FUN_14895d6e6(void)

undefined8 FUN_14895d6e6(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar3 = *param_2;
      goto LAB_14895d71a;
    }
  }
  lVar3 = 0;
LAB_14895d71a:
  lVar1 = FUN_145b7d436();
  if ((lVar1 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),
                     *(longlong *)
                      (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
                     lVar1 + 0x30);
  }
  return uVar2;
}



// FUNCTION 14895d751 FUN_14895d751 body=182 status=ok
// SIG undefined FUN_14895d751(void)

undefined8 FUN_14895d751(undefined8 param_1)

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
  local_b8 = FUN_145b7d436();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = 8;
  local_90 = 0;
  uStack_88 = 0;
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



// FUNCTION 14895d808 FUN_14895d808 body=157 status=ok
// SIG undefined FUN_14895d808(void)

void FUN_14895d808(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_145b7d436();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_14689c22e(param_2);
      }
      iVar1 = *(int *)(param_1 + 0x100);
      *(uint *)(param_1 + 0x100) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x104) < iVar1 + 1U) {
        FUN_14759143a((longlong *)(param_1 + 0xf8),iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar1 * 8) = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_14689c22e(param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14895d900 FUN_14895d900 body=106 status=ok
// SIG undefined FUN_14895d900(void)

void FUN_14895d900(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0xf8);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895d96c FUN_14895d96c body=95 status=ok
// SIG undefined FUN_14895d96c(void)

void FUN_14895d96c(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar1) << 3);
    iVar1 = *(int *)(param_1 + 0x100);
  }
  *(int *)(param_1 + 0x100) = iVar1 + -1;
  FUN_1475915fe(param_1 + 0xf8);
  return;
}



// FUNCTION 14895da18 FUN_14895da18 body=86 status=ok
// SIG undefined FUN_14895da18(void)

void FUN_14895da18(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1488dee1a(param_1,param_2 + 0x18);
  FUN_1488de6c8(param_1,param_2 + 0x38);
  if ((longlong)*(int *)(param_2 + 0x98) != 0) {
    lVar2 = *(longlong *)(param_2 + 0x90);
    lVar1 = (longlong)*(int *)(param_2 + 0x98) * 0x38;
    do {
      FUN_1488de6c8(param_1,lVar2);
      lVar2 = lVar2 + 0x38;
      lVar1 = lVar1 + -0x38;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 14895da6e FUN_14895da6e body=55 status=ok
// SIG undefined FUN_14895da6e(void)

undefined8 * FUN_14895da6e(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *param_1 = &PTR_FUN_14b424b40;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  *(undefined4 *)(param_1 + 1) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 3) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 4) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar7;
  FUN_1400750e6(param_1 + 5,param_2 + 8);
  return param_1;
}



// FUNCTION 14895dace FUN_14895dace body=45 status=ok
// SIG undefined FUN_14895dace(void)

void FUN_14895dace(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_1488dee1a(param_2,param_3 + 0x18);
  FUN_1488de6c8(param_2,param_3 + 0x30);
  return;
}



// FUNCTION 14895db00 FUN_14895db00 body=315 status=ok
// SIG undefined FUN_14895db00(void)

void FUN_14895db00(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
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
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
    FUN_140ca8596(param_2);
  }
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar2 = (longlong)iStack_54;
      lVar1 = *local_70;
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1405b572a(param_2,iVar3);
      }
      *(undefined2 *)(*param_2 + (longlong)iVar3 * 2) = *(undefined2 *)(lVar2 * 0x18 + lVar1);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895dc4c FUN_14895dc4c body=35 status=ok
// SIG undefined FUN_14895dc4c(void)

void FUN_14895dc4c(longlong param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_143e1d438(param_1 + 0x58,*(undefined2 *)(param_1 + 0x50),0,param_2,param_3);
  return;
}



// FUNCTION 14895dc70 FUN_14895dc70 body=315 status=ok
// SIG undefined FUN_14895dc70(void)

void FUN_14895dc70(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
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
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
    FUN_140ca8596(param_2);
  }
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar2 = (longlong)iStack_54;
      lVar1 = *local_70;
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1405b572a(param_2,iVar3);
      }
      *(undefined2 *)(*param_2 + (longlong)iVar3 * 2) = *(undefined2 *)(lVar2 * 0x18 + lVar1);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895ddae FUN_14895ddae body=74 status=ok
// SIG undefined FUN_14895ddae(void)

void FUN_14895ddae(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
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
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



// FUNCTION 14895ddf8 FUN_14895ddf8 body=93 status=ok
// SIG undefined FUN_14895ddf8(void)

undefined8 FUN_14895ddf8(longlong param_1,undefined4 *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_1 + 0x30))) {
    if (0xffffffdf <
        *(int *)(*(longlong *)(param_1 + 0x28) + 0x18 + (ulonglong)param_3 * 0x20) - 0x21U) {
      lVar1 = *(longlong *)(param_1 + 0x28) + (ulonglong)param_3 * 0x20;
      *param_2 = 0;
      lVar2 = lVar1;
      if (*(longlong *)(lVar1 + 0x10) != 0) {
        lVar2 = *(longlong *)(lVar1 + 0x10);
      }
      FUN_14493566c(param_2,0,lVar2,0,*(undefined4 *)(lVar1 + 0x18));
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14895de56 FUN_14895de56 body=76 status=ok
// SIG undefined FUN_14895de56(void)

undefined8 * FUN_14895de56(undefined8 *param_1)

{
  undefined8 *_Src;
  size_t _Size;
  
  if (param_1[3] == param_1[2]) {
    FUN_1489628aa(param_1);
  }
  else {
    _Size = param_1[2] + 1;
    param_1[2] = _Size;
    _Src = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      _Src = (undefined8 *)*param_1;
    }
    memmove((undefined1 *)((longlong)_Src + 1),_Src,_Size);
    *(undefined1 *)_Src = 0x2e;
  }
  return param_1;
}



// FUNCTION 14895dea2 FUN_14895dea2 body=137 status=ok
// SIG undefined FUN_14895dea2(void)

undefined8 FUN_14895dea2(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uStack_40 = 0;
  local_38 = 1;
  local_30 = 0xf;
  local_48 = 0x5f;
  cVar1 = FUN_140bddaa2(0,0,&local_48);
  FUN_1401d9a90(&local_48);
  uVar2 = 1;
  if ((cVar1 == '\0') &&
     (((*(longlong *)(param_1 + 0x48) == 0 || (*(int *)(param_1 + 0x30) != 0)) ||
      (*(longlong *)(param_1 + 0x18) != 0)))) {
    uVar2 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14895df2c FUN_14895df2c body=469 status=ok
// SIG undefined FUN_14895df2c(void)

undefined8 * FUN_14895df2c(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  wchar_t *pwVar1;
  size_t sVar2;
  int iVar3;
  char *_Str;
  undefined1 auStack_188 [46];
  undefined2 local_15a;
  void *local_158;
  undefined8 uStack_150;
  longlong local_148;
  int local_140;
  longlong local_48;
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_158 = (void *)0x0;
  uStack_150 = 0;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if (0 < *(int *)(param_1 + 0x30)) goto LAB_14895e00c;
  }
  else {
    _Str = (char *)(param_1 + 8);
    if (0xf < *(ulonglong *)(param_1 + 0x20)) {
      _Str = *(char **)_Str;
    }
    local_48 = 0;
    if (_Str == (char *)0x0) {
      local_40 = (wchar_t *)0x0;
      local_38 = 0;
    }
    else {
      sVar2 = strlen(_Str);
      FUN_1446e6fe8(&local_148,_Str,sVar2 & 0xffffffff,1);
    }
    pwVar1 = local_40;
    sVar2 = wcslen(local_40);
    FUN_1400020e8(&local_158,pwVar1,sVar2 & 0xffffffff);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    iVar3 = (int)uStack_150;
    if (0 < *(int *)(param_1 + 0x30)) {
      if (1 < (int)uStack_150) {
        FUN_1400020e8(&local_158,&DAT_14a499588,3);
      }
LAB_14895e00c:
      local_15a = 0;
      FUN_140bddb30(param_1,&local_15a,0);
      FUN_140002266(&local_148,&DAT_149e063bc,local_15a);
      iVar3 = local_140 + -1;
      if (local_140 == 0) {
        iVar3 = 0;
      }
      FUN_1400020e8(&local_158,local_148,iVar3);
      if (local_148 != 0) {
        FUN_1400020a8();
      }
      iVar3 = (int)uStack_150;
    }
    _Src = local_158;
    if (1 < iVar3) {
      *param_2 = 0;
      *(int *)(param_2 + 1) = iVar3;
      FUN_1446dd670(param_2,iVar3,0);
      memcpy((void *)*param_2,_Src,(ulonglong)(uint)(iVar3 * 2));
      goto LAB_14895e07c;
    }
  }
  FUN_140056680(param_2,L"no class");
LAB_14895e07c:
  if (local_158 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895e102 FUN_14895e102 body=193 status=ok
// SIG undefined FUN_14895e102(void)

void FUN_14895e102(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < 1) {
    return;
  }
  lVar7 = 0;
  bVar4 = false;
  do {
    uVar5 = (uint)lVar7;
    lVar7 = (longlong)(int)uVar5;
    lVar1 = *param_1 + lVar7 * 8;
    lVar9 = 0;
    while (*(longlong *)(lVar1 + lVar9 * 8) != *param_2) {
      lVar2 = lVar7 + lVar9;
      lVar9 = lVar9 + 1;
      if ((longlong)iVar3 <= lVar2 + 1) {
        if (!bVar4) {
          return;
        }
        goto LAB_14895e1a1;
      }
    }
    iVar8 = (int)lVar9;
    if (~uVar5 + iVar3 != iVar8) {
      iVar6 = (~uVar5 + iVar3) - iVar8;
      if (0 < iVar6) {
        iVar6 = 1;
      }
      memmove((void *)(lVar1 + lVar9 * 8),(void *)(*param_1 + (longlong)(iVar3 - iVar6) * 8),
              (longlong)iVar6 << 3);
      iVar3 = (int)param_1[1];
    }
    lVar7 = lVar7 + lVar9;
    iVar3 = iVar3 + -1;
    *(int *)(param_1 + 1) = iVar3;
    bVar4 = true;
  } while ((int)(uVar5 + iVar8) < iVar3);
LAB_14895e1a1:
  FUN_1418a8b78(param_1);
  return;
}



// FUNCTION 14895e1c3 FUN_14895e1c3 body=105 status=ok
// SIG undefined FUN_14895e1c3(void)

undefined8 FUN_14895e1c3(undefined8 param_1,longlong param_2,char *param_3)

{
  ulonglong uVar1;
  size_t sVar2;
  
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  sVar2 = strlen(param_3);
  if (sVar2 <= (uVar1 ^ 0x7fffffffffffffff)) {
    FUN_1456dbc04(param_1);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_146eb22ad();
}



// FUNCTION 14895e22e FUN_14895e22e body=36 status=ok
// SIG undefined FUN_14895e22e(void)

void FUN_14895e22e(longlong param_1,undefined4 param_2)

{
  FUN_1487f59ae();
  FUN_148966fdc(param_1 + 0x50,param_2);
  return;
}



// FUNCTION 14895e252 FUN_14895e252 body=26 status=ok
// SIG undefined FUN_14895e252(void)

undefined8 FUN_14895e252(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014895e265. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)(param_1 + 0x1c0) + 0x10))(param_1 + 0x1c0);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14895e26c FUN_14895e26c body=5 status=ok
// SIG undefined FUN_14895e26c(void)

undefined8 FUN_14895e26c(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// FUNCTION 14895e272 FUN_14895e272 body=535 status=ok
// SIG undefined FUN_14895e272(void)

void FUN_14895e272(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  
  plVar3 = (longlong *)FUN_1406f625c(param_2);
  if (plVar3 != param_1) {
    return;
  }
  FUN_145756a82(param_1,param_2);
  cVar2 = (**(code **)(*param_1 + 0x388))(param_1);
  lVar4 = param_1[6];
  if (cVar2 == '\0') {
    if (lVar4 != 0) {
      FUN_143dd9e92();
      lVar4 = param_1[6];
      FUN_144757f48(lVar4,0x40000000);
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      do {
        uVar1 = *(uint *)(lVar4 + 8);
        if ((uVar1 >> 0x15 & 1) != 0) break;
        LOCK();
        bVar5 = uVar1 == *(uint *)(lVar4 + 8);
        if (bVar5) {
          *(uint *)(lVar4 + 8) = uVar1 | 0x200000;
        }
        UNLOCK();
      } while (!bVar5);
      param_1[6] = 0;
    }
  }
  else {
    if (lVar4 == 0) {
      lVar4 = FUN_14895e534(param_1);
      if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_14689c22e(lVar4);
      }
      param_1[6] = lVar4;
      FUN_143dd9df2(lVar4,param_1[5]);
      lVar4 = param_1[6];
    }
    FUN_143ddb94e(lVar4,param_1 + 0x1c,*(undefined1 *)((longlong)param_1 + 0xd1),
                  *(undefined1 *)((longlong)param_1 + 0x49));
  }
  cVar2 = (**(code **)(*param_1 + 0x390))(param_1);
  lVar4 = param_1[7];
  if (cVar2 == '\0') {
    if (lVar4 != 0) {
      FUN_145953236();
      lVar4 = param_1[7];
      FUN_144757f48(lVar4,0x40000000);
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      do {
        uVar1 = *(uint *)(lVar4 + 8);
        if ((uVar1 >> 0x15 & 1) != 0) break;
        LOCK();
        bVar5 = uVar1 == *(uint *)(lVar4 + 8);
        if (bVar5) {
          *(uint *)(lVar4 + 8) = uVar1 | 0x200000;
        }
        UNLOCK();
      } while (!bVar5);
      param_1[7] = 0;
    }
  }
  else {
    if (lVar4 == 0) {
      lVar4 = FUN_145756bf1(param_1);
      if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_14689c22e(lVar4);
      }
      param_1[7] = lVar4;
      FUN_145757360(lVar4,param_1[5]);
      lVar4 = param_1[7];
    }
    thunk_FUN_145756ca4(lVar4,param_1 + 0x1c,*(undefined1 *)((longlong)param_1 + 0xd1),
                        *(undefined1 *)((longlong)param_1 + 0x49));
  }
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x2b0))(param_1);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00014895e344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x368))(param_1,param_2);
  return;
}



// FUNCTION 14895e48a FUN_14895e48a body=57 status=ok
// SIG undefined FUN_14895e48a(void)

void FUN_14895e48a(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_1406f625c(param_2);
  if (plVar1 == param_1) {
    lVar2 = (**(code **)(*param_1 + 0x2c0))(param_1);
    if (lVar2 != 0) {
      thunk_FUN_145953928(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14895e4c4 FUN_14895e4c4 body=49 status=ok
// SIG undefined FUN_14895e4c4(void)

void FUN_14895e4c4(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1406f625c(param_2);
  if (plVar1 != param_1) {
    return;
  }
  *(undefined1 *)(param_1 + 10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014895e4ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x360))(param_1);
  return;
}



// FUNCTION 14895e4f6 FUN_14895e4f6 body=62 status=ok
// SIG undefined FUN_14895e4f6(void)

void FUN_14895e4f6(longlong param_1,longlong param_2)

{
  FUN_144a787a6(param_2 + 0xe0,param_1 + 0xe0);
  *(undefined8 *)(param_2 + 0xf0) = *(undefined8 *)(param_1 + 0xf0);
  *(undefined4 *)(param_2 + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  return;
}



// FUNCTION 14895e534 FUN_14895e534 body=175 status=ok
// SIG undefined FUN_14895e534(void)

undefined8 FUN_14895e534(undefined8 param_1)

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
  local_b8 = FUN_1459d7b66();
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



// FUNCTION 14895e5e4 FUN_14895e5e4 body=137 status=ok
// SIG undefined FUN_14895e5e4(void)

void FUN_14895e5e4(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  
  if (*(int *)((longlong)param_1 + 0xd4) < 0) {
    lVar1 = (**(code **)(*param_1 + 0x2f0))(param_1);
    if (lVar1 == 0) {
      return;
    }
  }
  (**(code **)(*param_1 + 0x350))(param_1,0);
  FUN_144a787a6(param_1 + 0x1c,param_2);
  param_1[0x1e] = *param_3;
  *(int *)(param_1 + 0x1f) = (int)param_3[1];
  (**(code **)(*param_1 + 0x358))(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00014895e651. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x348))(param_1,0);
  return;
}



// FUNCTION 14895e678 FUN_14895e678 body=57 status=ok
// SIG undefined FUN_14895e678(void)

void FUN_14895e678(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (*param_2 == 0) {
    lVar1 = FUN_148967d8e();
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar1);
    }
    *param_2 = lVar1;
  }
  return;
}



// FUNCTION 14895e6bc FUN_14895e6bc body=57 status=ok
// SIG undefined FUN_14895e6bc(void)

void FUN_14895e6bc(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (*param_2 == 0) {
    lVar1 = FUN_14895e6fb();
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar1);
    }
    *param_2 = lVar1;
  }
  return;
}



// FUNCTION 14895e6fb FUN_14895e6fb body=175 status=ok
// SIG undefined FUN_14895e6fb(void)

undefined8 FUN_14895e6fb(undefined8 param_1)

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
  local_b8 = FUN_14589e8f4();
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



// FUNCTION 14895e7ac FUN_14895e7ac body=349 status=ok
// SIG undefined FUN_14895e7ac(void)

void FUN_14895e7ac(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  lVar6 = *(longlong *)(param_1 + 0x10);
  if (lVar6 == 0) {
    uVar5 = FUN_145c2bba6();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x10) = lVar6;
  }
  plVar1 = (longlong *)(param_1 + 8);
  lVar8 = *(longlong *)(param_1 + 0x18);
  if (lVar8 == 0) {
    if (lVar6 == 0) {
      return;
    }
    if (*plVar1 == 0) {
      return;
    }
    plVar2 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      return;
    }
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar8 = FUN_144aff482(uVar5,plVar1);
    *(longlong *)(param_1 + 0x18) = lVar8;
    if (lVar8 == 0) {
      return;
    }
    lVar6 = *(longlong *)(param_1 + 0x10);
  }
  uVar5 = *param_2;
  cVar3 = *(char *)(param_1 + 0x28);
  if (lVar6 == 0) {
    uVar7 = FUN_145c2bba6();
    lVar6 = FUN_14477b664(uVar7);
    *(longlong *)(param_1 + 0x10) = lVar6;
    lVar8 = *(longlong *)(param_1 + 0x18);
    if (((lVar8 == 0) && (lVar8 = 0, lVar6 != 0)) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
        lVar8 = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar8 = FUN_144aff482(uVar7,plVar1);
      }
      *(longlong *)(param_1 + 0x18) = lVar8;
    }
  }
  FUN_148973c90(uVar5,lVar8,param_1 + 0x20,cVar3 == '\0');
  return;
}



// FUNCTION 14895e90a FUN_14895e90a body=330 status=ok
// SIG undefined FUN_14895e90a(void)

void FUN_14895e90a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  lVar6 = *(longlong *)(param_1 + 0x10);
  if (lVar6 == 0) {
    uVar5 = FUN_145c2bba6();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x10) = lVar6;
  }
  plVar1 = (longlong *)(param_1 + 8);
  lVar8 = *(longlong *)(param_1 + 0x18);
  if (lVar8 == 0) {
    if (lVar6 == 0) {
      return;
    }
    if (*plVar1 == 0) {
      return;
    }
    plVar3 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar3 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      return;
    }
    uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
    lVar8 = FUN_144aff482(uVar5,plVar1);
    *(longlong *)(param_1 + 0x18) = lVar8;
    if (lVar8 == 0) {
      return;
    }
    lVar6 = *(longlong *)(param_1 + 0x10);
  }
  uVar5 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 0x20);
  if (lVar6 == 0) {
    uVar7 = FUN_145c2bba6();
    lVar6 = FUN_14477b664(uVar7);
    *(longlong *)(param_1 + 0x10) = lVar6;
    lVar8 = *(longlong *)(param_1 + 0x18);
    if (((lVar8 == 0) && (lVar8 = 0, lVar6 != 0)) && (*plVar1 != 0)) {
      plVar3 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
        lVar8 = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar8 = FUN_144aff482(uVar7,plVar1);
      }
      *(longlong *)(param_1 + 0x18) = lVar8;
    }
  }
  FUN_148973c9a(uVar5,lVar8,CONCAT71((int7)((ulonglong)param_2 >> 8),uVar2) & 0xffffffff);
  return;
}



// FUNCTION 14895ea54 FUN_14895ea54 body=148 status=ok
// SIG undefined FUN_14895ea54(void)

void FUN_14895ea54(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar1 = *param_2;
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (lVar5 == 0) {
    uVar4 = FUN_140e391b0();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x10) = lVar5;
  }
  if (((*(longlong *)(param_1 + 0x18) != 0) || (lVar5 == 0)) || (*(longlong *)(param_1 + 8) == 0))
  goto LAB_14895ea86;
  plVar2 = *(longlong **)(lVar5 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_14895eae4:
    uVar4 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (cVar3 == '\0') goto LAB_14895eae4;
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    uVar4 = FUN_144aff482(uVar4,(longlong *)(param_1 + 8));
  }
  *(undefined8 *)(param_1 + 0x18) = uVar4;
LAB_14895ea86:
  FUN_1410b135e(uVar1);
  return;
}



// FUNCTION 14895eae8 FUN_14895eae8 body=83 status=ok
// SIG undefined FUN_14895eae8(void)

undefined8 * FUN_14895eae8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14889016e(&DAT_14cb8a8f0);
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *puVar1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(puVar1 + 1);
  *puVar1 = &PTR_FUN_14b222810;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return puVar1;
}



// FUNCTION 14895eb3c FUN_14895eb3c body=44 status=ok
// SIG undefined FUN_14895eb3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14895eb3c(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8a8fc = _DAT_14cb8a8fc + -1;
  *param_1 = DAT_14cb8a8f0;
  DAT_14cb8a8f0 = param_1;
  return;
}



// FUNCTION 14895eb68 FUN_14895eb68 body=75 status=ok
// SIG undefined FUN_14895eb68(void)

void FUN_14895eb68(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *param_1 = &PTR_FUN_14b222810;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}



// FUNCTION 14895ebb4 FUN_14895ebb4 body=137 status=ok
// SIG undefined FUN_14895ebb4(void)

undefined8 * FUN_14895ebb4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  FUN_140f2a246();
  *param_1 = &PTR_LAB_14b426080;
  param_1[0x12] = *param_3;
  lVar1 = param_3[1];
  param_1[0x13] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *param_1 = &PTR_LAB_14b4255a0;
  param_1[0x14] = 0;
  *(undefined1 *)((longlong)param_1 + 0xa9) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc9) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd4) = 0;
  return param_1;
}



// FUNCTION 14895ec3e FUN_14895ec3e body=179 status=ok
// SIG undefined FUN_14895ec3e(void)

void FUN_14895ec3e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0xb8);
  if (lVar4 != 0) {
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      FUN_14480f766(lVar4 + 0x18);
      lVar4 = *(longlong *)(param_1 + 0xb8);
    }
    *(undefined8 *)(param_1 + 0xb0) = 0;
    FUN_14103b6f6(lVar4,1);
    *(undefined8 *)(param_1 + 0xb8) = 0;
    plVar3 = *(longlong **)(param_1 + 0xc0);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xc0) = 0;
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
  }
  lVar4 = FUN_14479d2ce(param_1 + 0xcc);
  if (lVar4 != 0) {
    thunk_FUN_1410fee4e(lVar4,1);
    *(undefined1 *)(param_1 + 0xd4) = 2;
    *(undefined8 *)(param_1 + 0xcc) = 0;
  }
  return;
}



// FUNCTION 14895ecf2 FUN_14895ecf2 body=271 status=ok
// SIG undefined FUN_14895ecf2(void)

void FUN_14895ecf2(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0xd4) == '\x01') {
    lVar2 = FUN_141400eec(*param_2);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x11e8) != 0)) {
      thunk_FUN_1410fee4e(*(longlong *)(lVar2 + 0x11e8),1);
      *(undefined1 *)(param_1 + 0xd4) = 2;
    }
  }
  lVar2 = *(longlong *)(param_1 + 0xb8);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0xa0) == '\0')) {
    FUN_14103b6f6(lVar2,1);
  }
  if ((*(char *)(param_1 + 0xa9) == '\x01') &&
     ((*(char *)(param_1 + 0xa8) == '\x01' || (*(char *)(param_1 + 0xa8) == '\0')))) {
    puVar3 = &local_48;
    local_30 = 4;
    local_48 = 0;
    local_28 = 1;
    FUN_1410f7fb4(param_1,param_2,&DAT_14cb8a980,puVar3);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_30) {
        puVar3 = (undefined4 *)CONCAT44(uStack_44,local_48);
      }
      (*pcVar1)(puVar3);
    }
    if (0x18 < local_30) {
      FUN_1400020a8(CONCAT44(uStack_44,local_48));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895ee02 FUN_14895ee02 body=124 status=ok
// SIG undefined FUN_14895ee02(void)

undefined8 FUN_14895ee02(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x70) != 0) && (lVar2 = FUN_14896040c(), lVar2 != 0)) {
    *param_2 = *(undefined4 *)(lVar2 + 8);
    param_2[1] = *(undefined4 *)(lVar2 + 0xc);
    param_2[2] = *(undefined4 *)(lVar2 + 0x10);
    lVar3 = *(longlong *)(lVar2 + 0x18);
    if (DAT_14c950c29 == '\x01') {
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_14689c22e();
        lVar3 = *(longlong *)(lVar2 + 0x18);
      }
    }
    *(longlong *)(param_2 + 4) = lVar3;
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(param_2 + 6) = *(undefined8 *)(lVar2 + 0x20);
    *(undefined8 *)(param_2 + 8) = uVar1;
    uVar1 = *(undefined8 *)(lVar2 + 0x30);
    *(undefined8 *)(param_2 + 10) = uVar1;
    return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
  }
  return 0;
}



// FUNCTION 14895ee7e FUN_14895ee7e body=386 status=ok
// SIG undefined FUN_14895ee7e(void)

longlong * FUN_14895ee7e(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_14895ef8f:
    *puVar5 = &PTR_LAB_14b3e9c20;
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
    *puVar5 = &PTR_FUN_14b426100;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14895ef8f;
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
    *puVar5 = &PTR_LAB_14b3e9c20;
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
    *puVar5 = &PTR_FUN_14b426100;
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



// FUNCTION 14895f000 FUN_14895f000 body=34 status=ok
// SIG undefined FUN_14895f000(void)

ulonglong FUN_14895f000(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 ****ppppuVar12;
  ulonglong uVar13;
  undefined1 auStack_178 [32];
  undefined8 *puStack_158;
  undefined1 uStack_150;
  undefined1 auStack_144 [4];
  undefined8 *puStack_140;
  undefined8 ***pppuStack_138;
  undefined8 ***pppuStack_130;
  longlong *plStack_128;
  undefined8 uStack_120;
  ushort uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined4 uStack_d4;
  undefined8 *puStack_d0;
  undefined8 ***pppuStack_c8;
  undefined8 ***pppuStack_c0;
  longlong *plStack_b8;
  undefined8 uStack_b0;
  ushort uStack_a8;
  byte bStack_a0;
  undefined8 uStack_98;
  undefined8 auStack_90 [3];
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  longlong lStack_58;
  undefined4 uStack_50;
  ulonglong uStack_48;
  
  cVar4 = *(char *)(*(longlong *)(param_1 + 0x90) + 0x90);
  if (cVar4 != '\x01') {
    if (cVar4 != '\0') {
      return 0;
    }
    uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
    if ((((*(byte *)(param_1 + 0x88) & 2) == 0) && (*(char *)(param_1 + 0xd5) != '\x01')) &&
       (plVar6 = *(longlong **)(*param_2 + 0x40), plVar6 != (longlong *)0x0)) {
      uVar5 = FUN_1407ca880();
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar5);
      if (plVar6 != (longlong *)0x0) {
        uVar5 = FUN_1407ca880();
        plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
        if ((plVar7 != (longlong *)0x0 && plVar6 != plVar7) &&
           (lVar8 = FUN_14895fb16(*(undefined8 *)(param_1 + 0x90),param_2), lVar8 != 0)) {
          FUN_1459670f6(&uStack_108,lVar8);
          puVar2 = (undefined8 *)(param_1 + 0xd8);
          if (&uStack_108 != puVar2) {
            FUN_145966f58(puVar2,&uStack_108);
          }
          FUN_144a2da94(auStack_90);
          FUN_144a2da94(&pppuStack_c8);
          FUN_144a2da94(&uStack_108);
          cVar4 = FUN_145966fd4(puVar2,*(undefined8 *)(*param_2 + 0x40),
                                *(char *)(param_1 + 0x111) != '\0');
          uVar13 = 0;
          if (cVar4 == '\0') goto LAB_14895f05f;
          *(undefined1 *)(param_1 + 0x188) = 0;
          puStack_e8 = (undefined8 *)0x0;
          uStack_e0 = 0;
          uStack_108 = 0;
          uStack_100 = 0;
          uStack_dc = 0xffffffff00000080;
          uStack_d4 = 0;
          pppuStack_c8 = (undefined8 ****)0x0;
          pppuStack_c0 = (undefined8 ***)((ulonglong)pppuStack_c0 & 0xffffffff00000000);
          uVar5 = *(undefined8 *)(*param_2 + 0xa8);
          uVar9 = FUN_140feeb70();
          FUN_14477b664(uVar9);
          lVar10 = FUN_140feeb70();
          uVar9 = FUN_140feeb70();
          FUN_1402d1bfa(&pppuStack_130,uVar9,uVar5);
          lVar11 = FUN_140feeb70();
          if (lVar10 == 0) {
LAB_14895f221:
            lVar11 = lVar10;
          }
          else if (lVar11 == 0) {
            lVar11 = 0;
          }
          else if ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38)) &&
                  (*(longlong *)
                    (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
                   lVar11 + 0x30)) goto LAB_14895f221;
          uVar9 = FUN_14477b664(lVar11);
          lVar11 = FUN_14477b664(uVar9);
          if (lVar11 == 0) {
            uVar5 = 0;
          }
          if ((undefined8 ****)pppuStack_130 == (undefined8 ****)0x0) {
            uVar5 = 0;
          }
          uStack_118 = 0x18;
          plStack_128 = (longlong *)0x0;
          uStack_120 = 0;
          uVar9 = FUN_14477b664(lVar11);
          plStack_128 = (longlong *)FUN_14477b664(uVar9);
          puStack_110 = (undefined *)CONCAT71(puStack_110._1_7_,0x1d);
          puStack_140 = &DAT_14cb8ae68;
          pppuStack_138 = &pppuStack_130;
          uStack_120 = uVar5;
          FUN_140881f5a(&uStack_108,auStack_144,&puStack_140,0);
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                             (ulonglong)((uint)(byte)puStack_110 * 0x120));
          if (pcVar3 != (code *)0x0) {
            ppppuVar12 = &pppuStack_130;
            if (0x18 < uStack_118) {
              ppppuVar12 = (undefined8 ****)pppuStack_130;
            }
            (*pcVar3)(ppppuVar12);
          }
          if (0x18 < uStack_118) {
            FUN_1400020a8(pppuStack_130);
          }
          uStack_118 = 8;
          pppuStack_130 = (undefined8 ****)0x0;
          FUN_14485c47a(&pppuStack_130,param_2[1]);
          puStack_110 = (undefined *)CONCAT71(puStack_110._1_7_,6);
          puStack_140 = (undefined8 *)&DAT_14cb8ae58;
          pppuStack_138 = &pppuStack_130;
          FUN_140881f5a(&uStack_108,auStack_144,&puStack_140,0);
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                             (ulonglong)((uint)(byte)puStack_110 * 0x120));
          if (pcVar3 != (code *)0x0) {
            ppppuVar12 = &pppuStack_130;
            if (0x18 < uStack_118) {
              ppppuVar12 = (undefined8 ****)pppuStack_130;
            }
            (*pcVar3)(ppppuVar12);
          }
          if (0x18 < uStack_118) {
            FUN_1400020a8(pppuStack_130);
          }
          uStack_118 = 4;
          pppuStack_130 =
               (undefined8 ***)CONCAT44(pppuStack_130._4_4_,*(undefined4 *)(param_2[1] + 0x78));
          puStack_110 = (undefined *)CONCAT71(puStack_110._1_7_,2);
          puStack_140 = (undefined8 *)&DAT_14cb8ae70;
          pppuStack_138 = &pppuStack_130;
          FUN_140881f5a(&uStack_108,auStack_144,&puStack_140,0);
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                             (ulonglong)((uint)(byte)puStack_110 * 0x120));
          if (pcVar3 != (code *)0x0) {
            ppppuVar12 = &pppuStack_130;
            if (0x18 < uStack_118) {
              ppppuVar12 = (undefined8 ****)pppuStack_130;
            }
            (*pcVar3)(ppppuVar12);
          }
          if (0x18 < uStack_118) {
            FUN_1400020a8(pppuStack_130);
          }
          uStack_118 = 4;
          pppuStack_130 =
               (undefined8 ***)CONCAT44(pppuStack_130._4_4_,*(undefined4 *)(param_1 + 0x38));
          puStack_110 = (undefined *)CONCAT71(puStack_110._1_7_,2);
          puStack_140 = (undefined8 *)&DAT_14cb8ae60;
          pppuStack_138 = &pppuStack_130;
          FUN_140881f5a(&uStack_108,auStack_144,&puStack_140,0);
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                             (ulonglong)((uint)(byte)puStack_110 * 0x120));
          if (pcVar3 != (code *)0x0) {
            ppppuVar12 = &pppuStack_130;
            if (0x18 < uStack_118) {
              ppppuVar12 = (undefined8 ****)pppuStack_130;
            }
            (*pcVar3)(ppppuVar12);
          }
          if (0x18 < uStack_118) {
            FUN_1400020a8(pppuStack_130);
          }
          uVar5 = (**(code **)(*plVar7 + 0x50))(plVar7);
          if ((*(longlong *)(param_2[2] + 0x28) == 0) ||
             ((~*(byte *)(*(longlong *)(param_2[2] + 0x28) + 0x88) & 0x18) != 0)) {
            uVar9 = 3;
          }
          else {
            uVar9 = 0;
          }
          uStack_150 = 1;
          puStack_158 = &uStack_108;
          FUN_14096dfee(uVar5,&pppuStack_130,lVar8,uVar9);
          plVar7 = plStack_128;
          *(undefined8 ****)(param_1 + 0xb8) = pppuStack_130;
          pppuStack_130 = (undefined8 ****)0x0;
          plVar6 = *(longlong **)(param_1 + 0xc0);
          if (plStack_128 == plVar6) {
LAB_14895f501:
            plVar6 = plStack_128;
            if (plStack_128 != (longlong *)0x0) {
              LOCK();
              plVar7 = plStack_128 + 1;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)*plVar7 == 0) {
                (**(code **)*plStack_128)(plStack_128);
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
          else {
            plStack_128 = (longlong *)0x0;
            *(longlong **)(param_1 + 0xc0) = plVar7;
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              plVar7 = plVar6 + 1;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)*plVar7 == 0) {
                (**(code **)*plVar6)(plVar6);
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar6 + 0x10))(plVar6);
                }
              }
              goto LAB_14895f501;
            }
          }
          lVar8 = *(longlong *)(param_1 + 0xb8);
          uVar13 = CONCAT71((int7)((ulonglong)&uStack_108 >> 8),lVar8 != 0);
          if (lVar8 != 0) {
            puStack_140 = (undefined8 *)&LAB_143e2229c;
            pppuStack_138 = (undefined8 ***)((ulonglong)pppuStack_138 & 0xffffffff00000000);
            FUN_14895ee7e(&pppuStack_130,param_1);
            FUN_140ebcfd8(lVar8 + 0x18,&puStack_140,&pppuStack_130);
            FUN_1449db362(&pppuStack_130);
            *(undefined8 **)(param_1 + 0xb0) = puStack_140;
            *(undefined1 *)(param_1 + 0xd5) = 1;
          }
          pppuStack_c0 = (undefined8 ***)((ulonglong)pppuStack_c0 & 0xffffffff00000000);
          if ((undefined8 ****)pppuStack_c8 != (undefined8 ****)0x0) {
            FUN_1400020a8();
          }
          FUN_140333f4e(&uStack_108);
          goto LAB_14895f05f;
        }
      }
    }
    uVar13 = 0;
LAB_14895f05f:
    if ((uStack_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return uVar13 & 0xffffffff;
  }
  uStack_48 = DAT_14c707940 ^ (ulonglong)&uStack_108;
  if (((*(byte *)(param_1 + 0x88) & 2) == 0) &&
     (plVar6 = *(longlong **)(*param_2 + 0x40), plVar6 != (longlong *)0x0)) {
    puStack_110 = (undefined *)0x14895f607;
    uVar5 = FUN_1407ca880();
    puStack_110 = (undefined *)0x14895f617;
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar5);
    if (plVar6 != (longlong *)0x0) {
      puStack_110 = (undefined *)0x14895f624;
      uVar5 = FUN_1407ca880();
      puStack_110 = (undefined *)0x14895f62f;
      plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
      if (plVar7 != (longlong *)0x0 && plVar6 != plVar7) {
        puStack_110 = (undefined *)0x14895f685;
        lVar8 = FUN_14895fad2(*(undefined8 *)(param_1 + 0x90),param_2);
        uVar13 = 0;
        if (lVar8 == 0) goto LAB_14895f645;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_98 = 0;
        auStack_90[0] = 0;
        uStack_6c = 0xffffffff00000080;
        uStack_64 = 0;
        lStack_58 = 0;
        uStack_50 = 0;
        uVar5 = *(undefined8 *)(*param_2 + 0xa8);
        puStack_110 = (undefined *)0x14895f6e1;
        uVar9 = FUN_140feeb70();
        puStack_110 = (undefined *)0x14895f6e9;
        FUN_14477b664(uVar9);
        puStack_110 = (undefined *)0x14895f6ee;
        lVar10 = FUN_140feeb70();
        puStack_110 = (undefined *)0x14895f6f6;
        uVar9 = FUN_140feeb70();
        puStack_110 = (undefined *)0x14895f709;
        FUN_1402d1bfa(&pppuStack_c0,uVar9,uVar5);
        puStack_110 = (undefined *)0x14895f711;
        lVar11 = FUN_140feeb70();
        if (lVar10 == 0) {
LAB_14895f73a:
          lVar11 = lVar10;
        }
        else if (lVar11 == 0) {
          lVar11 = 0;
        }
        else if ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38)) &&
                (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8)
                 == lVar11 + 0x30)) goto LAB_14895f73a;
        puStack_110 = (undefined *)0x14895f745;
        uVar9 = FUN_14477b664(lVar11);
        puStack_110 = (undefined *)0x14895f74d;
        lVar11 = FUN_14477b664(uVar9);
        if (lVar11 == 0) {
          uVar5 = 0;
        }
        if ((undefined8 ****)pppuStack_c0 == (undefined8 ****)0x0) {
          uVar5 = 0;
        }
        uStack_a8 = 0x18;
        plStack_b8 = (longlong *)0x0;
        uStack_b0 = 0;
        puStack_110 = (undefined *)0x14895f777;
        uVar9 = FUN_14477b664(lVar11);
        puStack_110 = (undefined *)0x14895f77f;
        plStack_b8 = (longlong *)FUN_14477b664(uVar9);
        bStack_a0 = 0x1d;
        puStack_d0 = &DAT_14cb8ae68;
        puStack_110 = (undefined *)0x14895f7b3;
        pppuStack_c8 = &pppuStack_c0;
        uStack_b0 = uVar5;
        FUN_140881f5a(&uStack_98,&uStack_d4,&puStack_d0,0);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bStack_a0 * 0x120));
        if (pcVar3 != (code *)0x0) {
          ppppuVar12 = &pppuStack_c0;
          if (0x18 < uStack_a8) {
            ppppuVar12 = (undefined8 ****)pppuStack_c0;
          }
          puStack_110 = (undefined *)0x14895f7e5;
          (*pcVar3)(ppppuVar12);
        }
        if (0x18 < uStack_a8) {
          puStack_110 = (undefined *)0x14895f7f7;
          FUN_1400020a8(pppuStack_c0);
        }
        uStack_a8 = 8;
        pppuStack_c0 = (undefined8 ****)0x0;
        puStack_110 = (undefined *)0x14895f816;
        FUN_14485c47a(&pppuStack_c0,param_2[1]);
        bStack_a0 = 6;
        puStack_d0 = (undefined8 *)&DAT_14cb8ae58;
        puStack_110 = (undefined *)0x14895f840;
        pppuStack_c8 = &pppuStack_c0;
        FUN_140881f5a(&uStack_98,&uStack_d4,&puStack_d0,0);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bStack_a0 * 0x120));
        if (pcVar3 != (code *)0x0) {
          ppppuVar12 = &pppuStack_c0;
          if (0x18 < uStack_a8) {
            ppppuVar12 = (undefined8 ****)pppuStack_c0;
          }
          puStack_110 = (undefined *)0x14895f86b;
          (*pcVar3)(ppppuVar12);
        }
        if (0x18 < uStack_a8) {
          puStack_110 = (undefined *)0x14895f87d;
          FUN_1400020a8(pppuStack_c0);
        }
        uStack_a8 = 4;
        pppuStack_c0 = (undefined8 ***)
                       CONCAT44(pppuStack_c0._4_4_,*(undefined4 *)(param_2[1] + 0x78));
        bStack_a0 = 2;
        puStack_d0 = (undefined8 *)&DAT_14cb8ae70;
        puStack_110 = (undefined *)0x14895f8bd;
        pppuStack_c8 = &pppuStack_c0;
        FUN_140881f5a(&uStack_98,&uStack_d4,&puStack_d0,0);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bStack_a0 * 0x120));
        if (pcVar3 != (code *)0x0) {
          ppppuVar12 = &pppuStack_c0;
          if (0x18 < uStack_a8) {
            ppppuVar12 = (undefined8 ****)pppuStack_c0;
          }
          puStack_110 = (undefined *)0x14895f8e8;
          (*pcVar3)(ppppuVar12);
        }
        if (0x18 < uStack_a8) {
          puStack_110 = (undefined *)0x14895f8fa;
          FUN_1400020a8(pppuStack_c0);
        }
        uStack_a8 = 4;
        pppuStack_c0 = (undefined8 ***)CONCAT44(pppuStack_c0._4_4_,*(undefined4 *)(param_1 + 0x38));
        bStack_a0 = 2;
        puStack_d0 = (undefined8 *)&DAT_14cb8ae60;
        puStack_110 = (undefined *)0x14895f93c;
        pppuStack_c8 = &pppuStack_c0;
        FUN_140881f5a(&uStack_98,&uStack_d4,&puStack_d0,0);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bStack_a0 * 0x120));
        if (pcVar3 != (code *)0x0) {
          ppppuVar12 = &pppuStack_c0;
          if (0x18 < uStack_a8) {
            ppppuVar12 = (undefined8 ****)pppuStack_c0;
          }
          puStack_110 = (undefined *)0x14895f968;
          (*pcVar3)(ppppuVar12);
        }
        if (0x18 < uStack_a8) {
          puStack_110 = (undefined *)0x14895f97a;
          FUN_1400020a8(pppuStack_c0);
        }
        puStack_110 = (undefined *)0x14895f983;
        uVar5 = (**(code **)(*plVar7 + 0x50))(plVar7);
        if ((*(longlong *)(param_2[2] + 0x28) == 0) ||
           ((~*(byte *)(*(longlong *)(param_2[2] + 0x28) + 0x88) & 0x18) != 0)) {
          uVar9 = 3;
        }
        else {
          uVar9 = 0;
        }
        uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
        puStack_110 = (undefined *)0x14895f9c2;
        puStack_e8 = &uStack_98;
        FUN_14096dfee(uVar5,&pppuStack_c0,lVar8,uVar9);
        plVar7 = plStack_b8;
        *(undefined8 ****)(param_1 + 0xb8) = pppuStack_c0;
        pppuStack_c0 = (undefined8 ****)0x0;
        plVar6 = *(longlong **)(param_1 + 0xc0);
        if (plStack_b8 == plVar6) {
LAB_14895fa1a:
          plVar6 = plStack_b8;
          if (plStack_b8 != (longlong *)0x0) {
            LOCK();
            plVar7 = plStack_b8 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              puStack_110 = (undefined *)0x14895fa2d;
              (**(code **)*plStack_b8)(plStack_b8);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                puStack_110 = (undefined *)0x14895fa3c;
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
        }
        else {
          plStack_b8 = (longlong *)0x0;
          *(longlong **)(param_1 + 0xc0) = plVar7;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar6 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              puStack_110 = (undefined *)0x14895fa06;
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                puStack_110 = (undefined *)0x14895fa15;
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
            goto LAB_14895fa1a;
          }
        }
        lVar8 = *(longlong *)(param_1 + 0xb8);
        uVar13 = CONCAT71((int7)((ulonglong)&uStack_98 >> 8),lVar8 != 0);
        if (lVar8 != 0) {
          puStack_d0 = (undefined8 *)&LAB_143e22274;
          pppuStack_c8 = (undefined8 ***)((ulonglong)pppuStack_c8 & 0xffffffff00000000);
          puStack_110 = (undefined *)0x14895faa3;
          FUN_14895ee7e(&pppuStack_c0,param_1);
          puStack_110 = (undefined *)0x14895fab6;
          FUN_140ebcfd8(lVar8 + 0x18,&puStack_d0,&pppuStack_c0);
          puStack_110 = (undefined *)0x14895fabe;
          FUN_1449db362(&pppuStack_c0);
          *(undefined8 **)(param_1 + 0xb0) = puStack_d0;
        }
        uStack_50 = 0;
        if (lStack_58 != 0) {
          puStack_110 = (undefined *)0x14895fa69;
          FUN_1400020a8();
        }
        puStack_110 = (undefined *)0x14895fa73;
        FUN_140333f4e(&uStack_98);
        goto LAB_14895f645;
      }
    }
  }
  uVar13 = 0;
LAB_14895f645:
  if ((uStack_48 ^ (ulonglong)&uStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    puStack_110 = &UNK_14895f675;
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 14895f022 FUN_14895f022 body=1439 status=ok
// SIG undefined FUN_14895f022(void)

ulonglong FUN_14895f022(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 ****ppppuVar12;
  ulonglong uVar13;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  undefined1 local_150;
  undefined1 local_144 [4];
  undefined8 *local_140;
  undefined8 ***local_138;
  undefined8 ***local_130;
  longlong *local_128;
  undefined8 uStack_120;
  ushort local_118;
  byte local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_90 [72];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((((*(byte *)(param_1 + 0x88) & 2) == 0) && (*(char *)(param_1 + 0xd5) != '\x01')) &&
     (plVar6 = *(longlong **)(*param_2 + 0x40), plVar6 != (longlong *)0x0)) {
    uVar5 = FUN_1407ca880();
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar5);
    if (plVar6 != (longlong *)0x0) {
      uVar5 = FUN_1407ca880();
      plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
      if ((plVar7 != (longlong *)0x0 && plVar6 != plVar7) &&
         (lVar8 = FUN_14895fb16(*(undefined8 *)(param_1 + 0x90),param_2), lVar8 != 0)) {
        FUN_1459670f6(&local_108,lVar8);
        puVar2 = (undefined8 *)(param_1 + 0xd8);
        if (&local_108 != puVar2) {
          FUN_145966f58(puVar2,&local_108);
        }
        FUN_144a2da94(local_90);
        FUN_144a2da94(&local_c8);
        FUN_144a2da94(&local_108);
        cVar4 = FUN_145966fd4(puVar2,*(undefined8 *)(*param_2 + 0x40),
                              *(char *)(param_1 + 0x111) != '\0');
        uVar13 = 0;
        if (cVar4 == '\0') goto LAB_14895f05f;
        *(undefined1 *)(param_1 + 0x188) = 0;
        local_e8 = 0;
        local_e0 = 0;
        local_108 = 0;
        uStack_100 = 0;
        local_dc = 0xffffffff00000080;
        local_d4 = 0;
        local_c8 = 0;
        local_c0 = 0;
        uVar5 = *(undefined8 *)(*param_2 + 0xa8);
        uVar9 = FUN_140feeb70();
        FUN_14477b664(uVar9);
        lVar10 = FUN_140feeb70();
        uVar9 = FUN_140feeb70();
        FUN_1402d1bfa(&local_130,uVar9,uVar5);
        lVar11 = FUN_140feeb70();
        if (lVar10 == 0) {
LAB_14895f221:
          lVar11 = lVar10;
        }
        else if (lVar11 == 0) {
          lVar11 = 0;
        }
        else if ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38)) &&
                (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8)
                 == lVar11 + 0x30)) goto LAB_14895f221;
        uVar9 = FUN_14477b664(lVar11);
        lVar11 = FUN_14477b664(uVar9);
        if (lVar11 == 0) {
          uVar5 = 0;
        }
        if ((undefined8 ****)local_130 == (undefined8 ****)0x0) {
          uVar5 = 0;
        }
        local_118 = 0x18;
        local_128 = (longlong *)0x0;
        uStack_120 = 0;
        uVar9 = FUN_14477b664(lVar11);
        local_128 = (longlong *)FUN_14477b664(uVar9);
        local_110 = 0x1d;
        local_140 = &DAT_14cb8ae68;
        local_138 = &local_130;
        uStack_120 = uVar5;
        FUN_140881f5a(&local_108,local_144,&local_140,0);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_110 * 0x120));
        if (pcVar3 != (code *)0x0) {
          ppppuVar12 = &local_130;
          if (0x18 < local_118) {
            ppppuVar12 = (undefined8 ****)local_130;
          }
          (*pcVar3)(ppppuVar12);
        }
        if (0x18 < local_118) {
          FUN_1400020a8(local_130);
        }
        local_118 = 8;
        local_130 = (undefined8 ****)0x0;
        FUN_14485c47a(&local_130,param_2[1]);
        local_110 = 6;
        local_140 = (undefined8 *)&DAT_14cb8ae58;
        local_138 = &local_130;
        FUN_140881f5a(&local_108,local_144,&local_140,0);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_110 * 0x120));
        if (pcVar3 != (code *)0x0) {
          ppppuVar12 = &local_130;
          if (0x18 < local_118) {
            ppppuVar12 = (undefined8 ****)local_130;
          }
          (*pcVar3)(ppppuVar12);
        }
        if (0x18 < local_118) {
          FUN_1400020a8(local_130);
        }
        local_118 = 4;
        local_130 = (undefined8 ***)CONCAT44(local_130._4_4_,*(undefined4 *)(param_2[1] + 0x78));
        local_110 = 2;
        local_140 = (undefined8 *)&DAT_14cb8ae70;
        local_138 = &local_130;
        FUN_140881f5a(&local_108,local_144,&local_140,0);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_110 * 0x120));
        if (pcVar3 != (code *)0x0) {
          ppppuVar12 = &local_130;
          if (0x18 < local_118) {
            ppppuVar12 = (undefined8 ****)local_130;
          }
          (*pcVar3)(ppppuVar12);
        }
        if (0x18 < local_118) {
          FUN_1400020a8(local_130);
        }
        local_118 = 4;
        local_130 = (undefined8 ***)CONCAT44(local_130._4_4_,*(undefined4 *)(param_1 + 0x38));
        local_110 = 2;
        local_140 = (undefined8 *)&DAT_14cb8ae60;
        local_138 = &local_130;
        FUN_140881f5a(&local_108,local_144,&local_140,0);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_110 * 0x120));
        if (pcVar3 != (code *)0x0) {
          ppppuVar12 = &local_130;
          if (0x18 < local_118) {
            ppppuVar12 = (undefined8 ****)local_130;
          }
          (*pcVar3)(ppppuVar12);
        }
        if (0x18 < local_118) {
          FUN_1400020a8(local_130);
        }
        uVar5 = (**(code **)(*plVar7 + 0x50))(plVar7);
        if ((*(longlong *)(param_2[2] + 0x28) == 0) ||
           ((~*(byte *)(*(longlong *)(param_2[2] + 0x28) + 0x88) & 0x18) != 0)) {
          uVar9 = 3;
        }
        else {
          uVar9 = 0;
        }
        local_150 = 1;
        local_158 = &local_108;
        FUN_14096dfee(uVar5,&local_130,lVar8,uVar9);
        plVar7 = local_128;
        *(undefined8 ****)(param_1 + 0xb8) = local_130;
        local_130 = (undefined8 ****)0x0;
        plVar6 = *(longlong **)(param_1 + 0xc0);
        if (local_128 == plVar6) {
LAB_14895f501:
          plVar6 = local_128;
          if (local_128 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_128 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)*local_128)(local_128);
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
        else {
          local_128 = (longlong *)0x0;
          *(longlong **)(param_1 + 0xc0) = plVar7;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar6 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
            goto LAB_14895f501;
          }
        }
        lVar8 = *(longlong *)(param_1 + 0xb8);
        uVar13 = CONCAT71((int7)((ulonglong)&local_108 >> 8),lVar8 != 0);
        if (lVar8 != 0) {
          local_140 = (undefined8 *)&LAB_143e2229c;
          local_138 = (undefined8 ***)((ulonglong)local_138 & 0xffffffff00000000);
          FUN_14895ee7e(&local_130,param_1);
          FUN_140ebcfd8(lVar8 + 0x18,&local_140,&local_130);
          FUN_1449db362(&local_130);
          *(undefined8 **)(param_1 + 0xb0) = local_140;
          *(undefined1 *)(param_1 + 0xd5) = 1;
        }
        local_c0 = 0;
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
        FUN_140333f4e(&local_108);
        goto LAB_14895f05f;
      }
    }
  }
  uVar13 = 0;
LAB_14895f05f:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 14895f5c2 FUN_14895f5c2 body=1294 status=ok
// SIG undefined FUN_14895f5c2(void)

ulonglong FUN_14895f5c2(longlong param_1,longlong *param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 ****ppppuVar10;
  ulonglong uVar11;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined1 local_e0;
  undefined1 local_d4 [4];
  undefined8 *local_d0;
  undefined8 ***local_c8;
  undefined8 ***local_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  ushort local_a8;
  byte local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((*(byte *)(param_1 + 0x88) & 2) == 0) &&
     (plVar4 = *(longlong **)(*param_2 + 0x40), plVar4 != (longlong *)0x0)) {
    uVar3 = FUN_1407ca880();
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = FUN_1407ca880();
      plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
      if (plVar5 != (longlong *)0x0 && plVar4 != plVar5) {
        lVar6 = FUN_14895fad2(*(undefined8 *)(param_1 + 0x90),param_2);
        uVar11 = 0;
        if (lVar6 == 0) goto LAB_14895f645;
        local_78 = 0;
        local_70 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_6c = 0xffffffff00000080;
        local_64 = 0;
        local_58 = 0;
        local_50 = 0;
        uVar3 = *(undefined8 *)(*param_2 + 0xa8);
        uVar7 = FUN_140feeb70();
        FUN_14477b664(uVar7);
        lVar8 = FUN_140feeb70();
        uVar7 = FUN_140feeb70();
        FUN_1402d1bfa(&local_c0,uVar7,uVar3);
        lVar9 = FUN_140feeb70();
        if (lVar8 == 0) {
LAB_14895f73a:
          lVar9 = lVar8;
        }
        else if (lVar9 == 0) {
          lVar9 = 0;
        }
        else if ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
                (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
                 == lVar9 + 0x30)) goto LAB_14895f73a;
        uVar7 = FUN_14477b664(lVar9);
        lVar9 = FUN_14477b664(uVar7);
        if (lVar9 == 0) {
          uVar3 = 0;
        }
        if ((undefined8 ****)local_c0 == (undefined8 ****)0x0) {
          uVar3 = 0;
        }
        local_a8 = 0x18;
        local_b8 = (longlong *)0x0;
        uStack_b0 = 0;
        uVar7 = FUN_14477b664(lVar9);
        local_b8 = (longlong *)FUN_14477b664(uVar7);
        local_a0 = 0x1d;
        local_d0 = &DAT_14cb8ae68;
        local_c8 = &local_c0;
        uStack_b0 = uVar3;
        FUN_140881f5a(&local_98,local_d4,&local_d0,0);
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
        if (pcVar2 != (code *)0x0) {
          ppppuVar10 = &local_c0;
          if (0x18 < local_a8) {
            ppppuVar10 = (undefined8 ****)local_c0;
          }
          (*pcVar2)(ppppuVar10);
        }
        if (0x18 < local_a8) {
          FUN_1400020a8(local_c0);
        }
        local_a8 = 8;
        local_c0 = (undefined8 ****)0x0;
        FUN_14485c47a(&local_c0,param_2[1]);
        local_a0 = 6;
        local_d0 = (undefined8 *)&DAT_14cb8ae58;
        local_c8 = &local_c0;
        FUN_140881f5a(&local_98,local_d4,&local_d0,0);
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
        if (pcVar2 != (code *)0x0) {
          ppppuVar10 = &local_c0;
          if (0x18 < local_a8) {
            ppppuVar10 = (undefined8 ****)local_c0;
          }
          (*pcVar2)(ppppuVar10);
        }
        if (0x18 < local_a8) {
          FUN_1400020a8(local_c0);
        }
        local_a8 = 4;
        local_c0 = (undefined8 ***)CONCAT44(local_c0._4_4_,*(undefined4 *)(param_2[1] + 0x78));
        local_a0 = 2;
        local_d0 = (undefined8 *)&DAT_14cb8ae70;
        local_c8 = &local_c0;
        FUN_140881f5a(&local_98,local_d4,&local_d0,0);
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
        if (pcVar2 != (code *)0x0) {
          ppppuVar10 = &local_c0;
          if (0x18 < local_a8) {
            ppppuVar10 = (undefined8 ****)local_c0;
          }
          (*pcVar2)(ppppuVar10);
        }
        if (0x18 < local_a8) {
          FUN_1400020a8(local_c0);
        }
        local_a8 = 4;
        local_c0 = (undefined8 ***)CONCAT44(local_c0._4_4_,*(undefined4 *)(param_1 + 0x38));
        local_a0 = 2;
        local_d0 = (undefined8 *)&DAT_14cb8ae60;
        local_c8 = &local_c0;
        FUN_140881f5a(&local_98,local_d4,&local_d0,0);
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
        if (pcVar2 != (code *)0x0) {
          ppppuVar10 = &local_c0;
          if (0x18 < local_a8) {
            ppppuVar10 = (undefined8 ****)local_c0;
          }
          (*pcVar2)(ppppuVar10);
        }
        if (0x18 < local_a8) {
          FUN_1400020a8(local_c0);
        }
        uVar3 = (**(code **)(*plVar5 + 0x50))(plVar5);
        if ((*(longlong *)(param_2[2] + 0x28) == 0) ||
           ((~*(byte *)(*(longlong *)(param_2[2] + 0x28) + 0x88) & 0x18) != 0)) {
          uVar7 = 3;
        }
        else {
          uVar7 = 0;
        }
        local_e0 = 1;
        local_e8 = &local_98;
        FUN_14096dfee(uVar3,&local_c0,lVar6,uVar7);
        plVar5 = local_b8;
        *(undefined8 ****)(param_1 + 0xb8) = local_c0;
        local_c0 = (undefined8 ****)0x0;
        plVar4 = *(longlong **)(param_1 + 0xc0);
        if (local_b8 == plVar4) {
LAB_14895fa1a:
          plVar4 = local_b8;
          if (local_b8 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_b8 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*local_b8)(local_b8);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
        }
        else {
          local_b8 = (longlong *)0x0;
          *(longlong **)(param_1 + 0xc0) = plVar5;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar4 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
            goto LAB_14895fa1a;
          }
        }
        lVar6 = *(longlong *)(param_1 + 0xb8);
        uVar11 = CONCAT71((int7)((ulonglong)&local_98 >> 8),lVar6 != 0);
        if (lVar6 != 0) {
          local_d0 = (undefined8 *)&LAB_143e22274;
          local_c8 = (undefined8 ***)((ulonglong)local_c8 & 0xffffffff00000000);
          FUN_14895ee7e(&local_c0,param_1);
          FUN_140ebcfd8(lVar6 + 0x18,&local_d0,&local_c0);
          FUN_1449db362(&local_c0);
          *(undefined8 **)(param_1 + 0xb0) = local_d0;
        }
        local_50 = 0;
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        FUN_140333f4e(&local_98);
        goto LAB_14895f645;
      }
    }
  }
  uVar11 = 0;
LAB_14895f645:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 14895fad2 FUN_14895fad2 body=68 status=ok
// SIG undefined FUN_14895fad2(void)

longlong FUN_14895fad2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140fee782(param_1 + 0x98);
  if (lVar1 != 0) {
    lVar2 = FUN_1458993e6();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 14895fb16 FUN_14895fb16 body=68 status=ok
// SIG undefined FUN_14895fb16(void)

longlong FUN_14895fb16(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140fee782(param_1 + 0x98);
  if (lVar1 != 0) {
    lVar2 = FUN_140ed0e8c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 14895fb5a FUN_14895fb5a body=105 status=ok
// SIG undefined FUN_14895fb5a(void)

void FUN_14895fb5a(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0xd4) == '\x01') {
    return;
  }
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x90) + 0x90);
  if (cVar1 == '\x01') {
    if ((*(longlong *)(param_1 + 0xb8) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0xb8) + 0xa0) == '\0')) {
      return;
    }
  }
  else if (((cVar1 == '\0') && (*(char *)(param_1 + 0xd5) == '\x01')) &&
          (cVar1 = FUN_14895fbc4(param_1), cVar1 != '\0')) {
    return;
  }
  FUN_140f97806(param_1);
  return;
}



// FUNCTION 14895fbc4 FUN_14895fbc4 body=112 status=ok
// SIG undefined FUN_14895fbc4(void)

ulonglong FUN_14895fbc4(longlong param_1)

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  if ((*(char *)(param_1 + 400) == '\x01') && (*(longlong *)(param_1 + 0xb8) != 0)) {
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (*(char *)(param_1 + 0x188) != '\0') goto LAB_14895fc2b;
    cVar1 = FUN_145966fd4(param_1 + 0xd8,*(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0x38),
                          *(char *)(param_1 + 0x111) == '\0');
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x188) = 1;
      goto LAB_14895fc2b;
    }
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_14103b6f6(*(longlong *)(param_1 + 0xb8),1);
  }
  uVar2 = 0;
LAB_14895fc2b:
  return uVar2 & 0xffffffff;
}



// FUNCTION 14895fc34 FUN_14895fc34 body=98 status=ok
// SIG undefined FUN_14895fc34(void)

void FUN_14895fc34(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_2 != 0) {
    lVar2 = FUN_14895fc96();
    *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(param_1 + 1);
    *(undefined8 *)(lVar2 + 8) = *param_1;
    lVar3 = param_1[2];
    if (DAT_14c950c29 == '\x01') {
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_14689c22e();
        lVar3 = param_1[2];
      }
    }
    *(longlong *)(lVar2 + 0x18) = lVar3;
    uVar1 = param_1[4];
    *(undefined8 *)(lVar2 + 0x20) = param_1[3];
    *(undefined8 *)(lVar2 + 0x28) = uVar1;
    *(undefined8 *)(lVar2 + 0x30) = param_1[5];
  }
  return;
}



// FUNCTION 14895fc96 FUN_14895fc96 body=437 status=ok
// SIG undefined FUN_14895fc96(void)

longlong * FUN_14895fc96(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar6 = FUN_14650117a();
  FUN_14109b76e(param_1,&local_38,uVar6);
  if (local_38 != (longlong *)0x0) goto LAB_14895fccf;
  plVar7 = (longlong *)FUN_14001cc68(0x48,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14b426170;
  local_38 = plVar7 + 2;
  plVar7[2] = (longlong)&PTR_FUN_14b235f20;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[8] = 0;
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_145c69ce2(param_1,iVar4);
  }
  plVar3 = local_30;
  lVar5 = *param_1;
  *(longlong **)(lVar5 + (longlong)iVar4 * 0x10) = local_38;
  *(longlong **)(lVar5 + 8 + (longlong)iVar4 * 0x10) = plVar7;
  if (plVar7 == (longlong *)0x0) {
    if (local_30 == (longlong *)0x0) goto LAB_14895fccf;
    local_30 = (longlong *)0x0;
LAB_14895fdb0:
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
    if (plVar7 == (longlong *)0x0) goto LAB_14895fccf;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    if (plVar7 == local_30) {
      LOCK();
      plVar3 = plVar7 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    else {
      bVar8 = local_30 != (longlong *)0x0;
      local_30 = plVar7;
      if (bVar8) goto LAB_14895fdb0;
    }
  }
  LOCK();
  plVar3 = plVar7 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
LAB_14895fccf:
  plVar3 = local_30;
  plVar7 = local_38;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return plVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895fe4c FUN_14895fe4c body=105 status=ok
// SIG undefined FUN_14895fe4c(void)

void FUN_14895fe4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_14895feb6(param_2,&local_48);
  FUN_14895fc34(&local_48,param_3);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895feb6 FUN_14895feb6 body=182 status=ok
// SIG undefined FUN_14895feb6(void)

void FUN_14895feb6(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_14895ff6e(param_1,&DAT_14cb8a988);
  *param_2 = uVar2;
  uVar2 = FUN_14895ff6e(param_1,&DAT_14cb8a990);
  param_2[1] = uVar2;
  uVar2 = FUN_14895ff6e(param_1,&DAT_14cb8a998);
  param_2[2] = uVar2;
  lVar1 = FUN_148960002(param_1);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  *(longlong *)(param_2 + 4) = lVar1;
  FUN_14896009a(param_1,&local_38);
  *(undefined8 *)(param_2 + 10) = local_28;
  param_2[6] = local_38;
  param_2[7] = uStack_34;
  param_2[8] = uStack_30;
  param_2[9] = uStack_2c;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14895ff6e FUN_14895ff6e body=147 status=ok
// SIG undefined FUN_14895ff6e(void)

void FUN_14895ff6e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    lVar3 = *param_2;
    uVar2 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar7 = (uint)lVar3 & 0xffff;
    plVar6 = plVar1 + 7;
    if ((longlong *)plVar1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)plVar1[8];
    }
    iVar4 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)plVar1[9] - 1U &
                    (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar7) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *plVar1 + (longlong)iVar4 * 0x38;
        if (*(longlong *)(*plVar1 + (longlong)iVar4 * 0x38) == lVar3) goto LAB_14895ff7c;
        iVar4 = *(int *)(lVar5 + 0x30);
      } while (iVar4 != -1);
    }
  }
  lVar5 = 0;
LAB_14895ff7c:
  lVar3 = lVar5 + 8;
  if (lVar5 == 0) {
    lVar3 = 0;
  }
  FUN_144a7ecd0(lVar3);
  return;
}



// FUNCTION 148960002 FUN_148960002 body=151 status=ok
// SIG undefined FUN_148960002(void)

void FUN_148960002(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    uVar2 = (uint)((ulonglong)DAT_14cb8a9a0 >> 0x10);
    uVar7 = (uint)DAT_14cb8a9a0 & 0xffff;
    plVar6 = plVar1 + 7;
    if ((longlong *)plVar1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)plVar1[8];
    }
    iVar4 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)plVar1[9] - 1U &
                    (int)((ulonglong)DAT_14cb8a9a0 >> 0x20) + ((uint)DAT_14cb8a9a0 << 0x10 | uVar7)
                    + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *plVar1 + (longlong)iVar4 * 0x38;
        if (*(longlong *)(*plVar1 + (longlong)iVar4 * 0x38) == DAT_14cb8a9a0) goto LAB_148960010;
        iVar4 = *(int *)(lVar5 + 0x30);
      } while (iVar4 != -1);
    }
  }
  lVar5 = 0;
LAB_148960010:
  lVar3 = lVar5 + 8;
  if (lVar5 == 0) {
    lVar3 = 0;
  }
  FUN_14030a32e(lVar3);
  return;
}



// FUNCTION 14896009a FUN_14896009a body=175 status=ok
// SIG undefined FUN_14896009a(void)

undefined8 FUN_14896009a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    uVar2 = (uint)((ulonglong)DAT_14cb8a9a8 >> 0x10);
    uVar7 = (uint)DAT_14cb8a9a8 & 0xffff;
    plVar6 = plVar1 + 7;
    if ((longlong *)plVar1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)plVar1[8];
    }
    iVar4 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)plVar1[9] - 1U &
                    (int)((ulonglong)DAT_14cb8a9a8 >> 0x20) + ((uint)DAT_14cb8a9a8 << 0x10 | uVar7)
                    + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *plVar1 + (longlong)iVar4 * 0x38;
        if (*(longlong *)(*plVar1 + (longlong)iVar4 * 0x38) == DAT_14cb8a9a8) goto LAB_1489600b0;
        iVar4 = *(int *)(lVar5 + 0x30);
      } while (iVar4 != -1);
    }
  }
  lVar5 = 0;
LAB_1489600b0:
  lVar3 = lVar5 + 8;
  if (lVar5 == 0) {
    lVar3 = 0;
  }
  FUN_144a7b7fe(lVar3,param_2);
  return param_2;
}



// FUNCTION 14896014a FUN_14896014a body=705 status=ok
// SIG undefined FUN_14896014a(void)

void FUN_14896014a(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_98 [40];
  undefined8 *local_70;
  undefined8 **local_68;
  undefined1 local_5c [4];
  undefined8 **local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ushort local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1459462fe();
  lVar2 = FUN_14896040c(*param_2);
  if (lVar2 != 0) {
    local_40 = 4;
    local_58 = (undefined8 **)CONCAT44(local_58._4_4_,*(undefined4 *)(lVar2 + 8));
    local_38 = 3;
    local_70 = (undefined8 *)&DAT_14cb8a988;
    local_68 = &local_58;
    FUN_140881f5a(param_4,local_5c,&local_70,0);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar3 = &local_58;
      if (0x18 < local_40) {
        pppuVar3 = (undefined8 ***)local_58;
      }
      (*pcVar1)(pppuVar3);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58);
    }
    local_40 = 4;
    local_58 = (undefined8 **)CONCAT44(local_58._4_4_,*(undefined4 *)(lVar2 + 0xc));
    local_38 = 3;
    local_70 = (undefined8 *)&DAT_14cb8a990;
    local_68 = &local_58;
    FUN_140881f5a(param_4,local_5c,&local_70,0);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar3 = &local_58;
      if (0x18 < local_40) {
        pppuVar3 = (undefined8 ***)local_58;
      }
      (*pcVar1)(pppuVar3);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58);
    }
    local_40 = 4;
    local_58 = (undefined8 **)CONCAT44(local_58._4_4_,*(undefined4 *)(lVar2 + 0x10));
    local_38 = 3;
    local_70 = (undefined8 *)&DAT_14cb8a998;
    local_68 = &local_58;
    FUN_140881f5a(param_4,local_5c,&local_70,0);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar3 = &local_58;
      if (0x18 < local_40) {
        pppuVar3 = (undefined8 ***)local_58;
      }
      (*pcVar1)(pppuVar3);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58);
    }
    local_40 = 8;
    local_58 = (undefined8 ***)0x0;
    FUN_14485c47a(&local_58,*(undefined8 *)(lVar2 + 0x18));
    local_38 = 7;
    local_70 = &DAT_14cb8a9a0;
    local_68 = &local_58;
    FUN_140881f5a(param_4,local_5c,&local_70,0);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar3 = &local_58;
      if (0x18 < local_40) {
        pppuVar3 = (undefined8 ***)local_58;
      }
      (*pcVar1)(pppuVar3);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58);
    }
    local_40 = 0x18;
    local_58 = *(undefined8 ***)(lVar2 + 0x20);
    uStack_50 = *(undefined4 *)(lVar2 + 0x28);
    uStack_4c = *(undefined4 *)(lVar2 + 0x2c);
    local_48 = *(undefined8 *)(lVar2 + 0x30);
    local_38 = 4;
    local_70 = &DAT_14cb8a9a8;
    local_68 = &local_58;
    FUN_140881f5a(param_4,local_5c,&local_70,0);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar3 = &local_58;
      if (0x18 < local_40) {
        pppuVar3 = (undefined8 ***)local_58;
      }
      (*pcVar1)(pppuVar3);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14896040c FUN_14896040c body=180 status=ok
// SIG undefined FUN_14896040c(void)

longlong * FUN_14896040c(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = FUN_14650117a();
  FUN_14109b76e(param_1,&local_28,uVar3);
  if (local_28 != (longlong *)0x0) {
    lVar4 = (**(code **)(*local_28 + 8))(local_28);
    lVar5 = FUN_14650117a();
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) {
      plVar6 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30) {
        plVar6 = local_28;
      }
      goto LAB_148960465;
    }
  }
  plVar6 = (longlong *)0x0;
LAB_148960465:
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar6;
}



// FUNCTION 1489604c2 FUN_1489604c2 body=291 status=ok
// SIG undefined FUN_1489604c2(void)

longlong *
FUN_1489604c2(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_4;
  local_40 = (longlong *)param_4[1];
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b426190;
  plVar1 = plVar4 + 2;
  FUN_14895ebb4(plVar1,param_3,&local_48);
  plVar4[2] = (longlong)&PTR_FUN_14b4261b0;
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_1489682ac(&local_38,plVar1);
  plVar3 = local_30;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
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
  plVar1 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489605e8 FUN_1489605e8 body=280 status=ok
// SIG undefined FUN_1489605e8(void)

longlong *
FUN_1489605e8(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_4;
  local_40 = (longlong *)param_4[1];
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FUN_14001cc68(0x1b8,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b426230;
  plVar1 = plVar4 + 2;
  FUN_148968354(plVar1,param_3,&local_48);
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_148968536(&local_38,plVar1);
  plVar3 = local_30;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
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
  plVar1 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148960704 FUN_148960704 body=109 status=ok
// SIG undefined FUN_148960704(void)

void FUN_148960704(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x60) != 0)) {
    lVar2 = FUN_14895fc96();
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(param_2 + 1);
      *(undefined8 *)(lVar2 + 8) = *param_2;
      lVar3 = param_2[2];
      if (DAT_14c950c29 == '\x01') {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_14689c22e();
          lVar3 = param_2[2];
        }
      }
      *(longlong *)(lVar2 + 0x18) = lVar3;
      uVar1 = param_2[4];
      *(undefined8 *)(lVar2 + 0x20) = param_2[3];
      *(undefined8 *)(lVar2 + 0x28) = uVar1;
      *(undefined8 *)(lVar2 + 0x30) = param_2[5];
    }
  }
  return;
}



// FUNCTION 1489607a8 FUN_1489607a8 body=280 status=ok
// SIG undefined FUN_1489607a8(void)

longlong *
FUN_1489607a8(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_4;
  local_40 = (longlong *)param_4[1];
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b4262d0;
  plVar1 = plVar4 + 2;
  FUN_1489685de(plVar1,param_3,&local_48);
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_14896a60e(&local_38,plVar1);
  plVar3 = local_30;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
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
  plVar1 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489608c4 FUN_1489608c4 body=65 status=ok
// SIG undefined FUN_1489608c4(void)

longlong FUN_1489608c4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140fee782(param_1 + 0x68);
  if (lVar1 != 0) {
    lVar2 = FUN_140ed0e8c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148960906 FUN_148960906 body=221 status=ok
// SIG undefined FUN_148960906(void)

undefined8 * FUN_148960906(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = *(longlong **)(param_1 + 0xb8);
  if (plVar3 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_40 = *(undefined8 *)(param_3 + 8);
  plVar4 = *(longlong **)(param_1 + 0xc0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = plVar3;
  local_30 = plVar4;
  (**(code **)(*plVar3 + 0x10))(plVar3,param_2,&local_40);
  plVar3 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489609f2 FUN_1489609f2 body=270 status=ok
// SIG undefined FUN_1489609f2(void)

longlong *
FUN_1489609f2(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_4;
  local_40 = (longlong *)param_4[1];
  if (local_40 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    plVar4 = local_40;
  }
  plVar3 = (longlong *)FUN_14001cc68(400,0x10);
  FUN_14896a6b6(plVar3,param_3,&local_48);
  plVar5 = plVar3 + 2;
  local_38 = plVar5;
  local_30 = plVar3;
  FUN_14896b2b8(&local_38,plVar5);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    plVar3 = local_30;
    plVar5 = local_38;
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar3 = local_30;
      plVar5 = local_38;
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        plVar3 = local_30;
        plVar5 = local_38;
      }
    }
  }
  plVar4 = local_30;
  *param_2 = (longlong)plVar5;
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_30 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148960b04 FUN_148960b04 body=65 status=ok
// SIG undefined FUN_148960b04(void)

longlong FUN_148960b04(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140fee782(param_1 + 0x68);
  if (lVar1 != 0) {
    lVar2 = FUN_140ed0e8c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148960b46 FUN_148960b46 body=408 status=ok
// SIG undefined FUN_148960b46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_148960b46(longlong param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  float fVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb8aa18) {
      FUN_144b3d300(&DAT_14cb8aa18);
      if (DAT_14cb8aa18 == -1) {
        DAT_14cb8aa08 = 0;
        _DAT_14cb8aa10 = 0;
        atexit((_func_5014 *)&LAB_143e2231b);
        _Init_thread_footer(&DAT_14cb8aa18);
      }
    }
    FUN_14005ea14(&DAT_14cb8aa08,*(undefined4 *)(param_1 + 0x18));
    iVar5 = *(int *)(param_1 + 0x18);
    fVar9 = 0.0;
    if ((longlong)iVar5 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x10);
      lVar6 = 0;
      do {
        uVar3 = _DAT_14cb8aa10;
        lVar7 = (longlong)DAT_14cb8aa10;
        uVar4 = DAT_14cb8aa10 + 1;
        _DAT_14cb8aa10 = CONCAT44(DAT_14cb8aa14,uVar4);
        if (DAT_14cb8aa14 < uVar4) {
          FUN_14475e4ac(&DAT_14cb8aa08,uVar3 & 0xffffffff);
        }
        fVar1 = *(float *)(lVar2 + lVar6);
        *(float *)(DAT_14cb8aa08 + lVar7 * 4) = fVar1;
        fVar9 = fVar9 + fVar1;
        lVar6 = lVar6 + 0x30;
      } while ((longlong)iVar5 * 0x30 != lVar6);
    }
    uVar8 = FUN_14897454c(param_2,*(undefined4 *)(param_1 + 8));
    local_60 = DAT_14cb8aa08;
    local_58 = DAT_14cb8aa10;
    iVar5 = FUN_148960cfb(&local_60,fVar9,uVar8);
    if ((-1 < iVar5) && (iVar5 < *(int *)(param_1 + 0x18))) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_88);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148960cfb FUN_148960cfb body=115 status=ok
// SIG undefined FUN_148960cfb(void)

ulonglong FUN_148960cfb(longlong *param_1,float param_2,float param_3)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  float fVar4;
  
  if (param_3 < 0.0) {
    uVar2 = rand();
    param_3 = (float)(uVar2 & 0x7fff) / 32767.0;
  }
  if (0 < (longlong)(int)param_1[1]) {
    fVar4 = 0.0;
    uVar3 = 0;
    do {
      bVar1 = fVar4 <= param_3 * param_2;
      fVar4 = fVar4 + *(float *)(*param_1 + uVar3 * 4);
      if ((bVar1) && (param_3 * param_2 <= fVar4)) {
        return uVar3 & 0xffffffff;
      }
      uVar3 = uVar3 + 1;
    } while ((longlong)(int)param_1[1] != uVar3);
  }
  return 0xffffffff;
}



// FUNCTION 148960d6e FUN_148960d6e body=49 status=ok
// SIG undefined FUN_148960d6e(void)

undefined8 FUN_148960d6e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14155b440(param_3);
  if (lVar1 != 0) {
    uVar2 = FUN_14619133c(param_1 + 0x10,lVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148960da0 FUN_148960da0 body=380 status=ok
// SIG undefined FUN_148960da0(void)

byte FUN_148960da0(ulonglong param_1,undefined8 param_2,longlong *param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined1 local_50 [48];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar9 = param_1 + 0x10;
  lVar4 = FUN_14108b142(lVar9);
  if (lVar4 == 0) {
LAB_148960de2:
    bVar2 = 0;
    goto LAB_148960de4;
  }
  lVar4 = FUN_14108b142(lVar9);
  if (*(char *)(lVar4 + 0x68) == '\0') {
    lVar4 = FUN_14155b440(param_3);
    if (lVar4 != 0) {
      uVar6 = FUN_14108b142(lVar9);
      FUN_14108b31e(lVar4,local_58,uVar6);
      uVar3 = FUN_144a43716(local_50,param_1 + 0x40);
      param_1 = (ulonglong)uVar3;
      FUN_144a2da94(local_58);
    }
    bVar2 = lVar4 != 0 & (byte)param_1;
    goto LAB_148960de4;
  }
  if (*(char *)(lVar4 + 0x68) != '\x01') goto LAB_148960de2;
  plVar5 = (longlong *)FUN_1447262c2(param_3);
  if (plVar5 == (longlong *)0x0) {
LAB_148960f14:
    bVar1 = (byte)param_3;
    bVar2 = 0;
  }
  else {
    uVar6 = FUN_144a7c80a();
    plVar7 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,uVar6);
    param_3 = plVar5;
    if (plVar7 == (longlong *)0x0) goto LAB_148960f14;
    uVar6 = FUN_144a7c80a();
    plVar5 = (longlong *)FUN_144718840(plVar7,uVar6);
    param_3 = plVar7;
    if (plVar5 == (longlong *)0x0 || plVar7 == plVar5) goto LAB_148960f14;
    lVar4 = (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar8 = FUN_14108b142(lVar9);
    lVar4 = (**(code **)(*(longlong *)(lVar4 + 0x1a8) + 0x38))(lVar4 + 0x1a8,lVar8);
    lVar9 = lVar4 + 0x10;
    if (lVar4 == 0) {
      lVar9 = lVar8 + 0x30;
    }
    FUN_14034cca6(local_58,lVar9);
    bVar1 = FUN_144a43716(local_50,param_1 + 0x40);
    FUN_144a2da94(local_58);
    bVar2 = 1;
  }
  bVar2 = bVar2 & bVar1;
LAB_148960de4:
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2;
}



// FUNCTION 148960f1e FUN_148960f1e body=318 status=ok
// SIG undefined FUN_148960f1e(void)

ulonglong FUN_148960f1e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)FUN_14586032a(param_3);
  lVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    local_60 = *(undefined8 *)(param_1 + 0x10);
    local_58 = *(undefined4 *)(param_1 + 0x18);
    FUN_1448075d0(local_50);
    lVar2 = FUN_1418aadca(local_50);
    lVar6 = lVar2;
    if (local_38 != 0) {
      lVar6 = FUN_1400020a8();
    }
    if (lVar2 != 0) {
      uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
      lVar2 = FUN_144b39ca2(uVar3,lVar2,0);
      lVar6 = 0;
      if (lVar2 != 0) {
        local_70 = *(undefined8 *)(param_1 + 0x1c);
        local_68 = *(undefined4 *)(param_1 + 0x24);
        FUN_1448075d0(local_50);
        lVar4 = FUN_1418ab20a(local_50);
        lVar6 = lVar4;
        if (local_38 != 0) {
          lVar6 = FUN_1400020a8();
        }
        if (lVar4 != 0) {
          if ((longlong)*(int *)(lVar2 + 0x50) != 0) {
            plVar1 = *(longlong **)(lVar2 + 0x48);
            lVar6 = (longlong)*(int *)(lVar2 + 0x50) * 0x90;
            do {
              if (*plVar1 == lVar4) {
                if (plVar1 != (longlong *)0x0) {
                  uVar5 = CONCAT71((int7)((ulonglong)plVar1 >> 8),(char)plVar1[0x11]) &
                          0xffffffffffffff01;
                  goto LAB_148961044;
                }
                break;
              }
              plVar1 = plVar1 + 0x12;
              lVar6 = lVar6 + -0x90;
            } while (lVar6 != 0);
          }
          uVar5 = 0;
LAB_148961044:
          uVar5 = CONCAT71((int7)(uVar5 >> 8),*(char *)(param_1 + 0x28) == (char)uVar5);
          goto LAB_148961016;
        }
      }
    }
  }
  uVar5 = CONCAT71((int7)((ulonglong)lVar6 >> 8),*(undefined1 *)(param_1 + 0x28)) ^ 1;
LAB_148961016:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14896105e FUN_14896105e body=925 status=ok
// SIG undefined FUN_14896105e(void)

undefined1 *
FUN_14896105e(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  longlong *plStack_60;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0x38);
  if (lVar5 == 0) {
    uVar4 = FUN_145cdcf34();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x38) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    if ((lVar5 != 0) && (*plVar1 != 0)) {
      plVar7 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar7 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar3 == '\0')) {
        *(undefined8 *)(param_1 + 0x40) = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar7 + 0x110))(plVar7);
        lVar5 = FUN_144aff482(uVar4,plVar1);
        *(longlong *)(param_1 + 0x40) = lVar5;
        if (lVar5 != 0) goto LAB_1489610ac;
      }
    }
LAB_1489613af:
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0x100000000;
    goto LAB_1489613c5;
  }
LAB_1489610ac:
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0) {
    uVar4 = FUN_140feeb70();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x20) = lVar5;
  }
  lVar6 = *(longlong *)(param_1 + 0x28);
  if (lVar6 == 0) {
    if ((lVar5 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
      plVar7 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar7 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar3 == '\0')) {
        *(undefined8 *)(param_1 + 0x28) = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar7 + 0x110))(plVar7);
        lVar6 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x18));
        *(longlong *)(param_1 + 0x28) = lVar6;
        if (lVar6 != 0) goto LAB_1489610d3;
      }
    }
    local_78 = *(undefined8 *)(param_1 + 8);
    local_70 = *(undefined4 *)(param_1 + 0x10);
    FUN_1448075d0(&local_68);
    lVar6 = FUN_1418aadca(&local_68);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (lVar6 == 0) goto LAB_1489613af;
  }
LAB_1489610d3:
  lVar5 = FUN_14155b440(param_4);
  if ((lVar5 == 0) || (*(longlong *)(lVar5 + 0xa8) != lVar6)) {
    plVar7 = (longlong *)FUN_1447262c2(param_4);
    if (plVar7 != (longlong *)0x0) {
      uVar4 = FUN_144a7c80a();
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,uVar4);
      if (plVar7 != (longlong *)0x0) {
        uVar4 = FUN_144a7c80a();
        plVar8 = (longlong *)FUN_144718840(plVar7,uVar4);
        if (plVar7 != plVar8 && plVar8 != (longlong *)0x0) {
          uVar4 = (**(code **)(*plVar8 + 0x10))(plVar8);
          lVar5 = FUN_144b39ca2(uVar4,lVar6,0);
          if (lVar5 != 0) goto LAB_1489610f4;
        }
      }
    }
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0x100000000;
  }
  else {
LAB_1489610f4:
    lVar6 = *(longlong *)(param_1 + 0x38);
    if (lVar6 == 0) {
      uVar4 = FUN_145cdcf34();
      lVar6 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x38) = lVar6;
    }
    if (((*(longlong *)(param_1 + 0x40) == 0) && (lVar6 != 0)) && (*plVar1 != 0)) {
      plVar7 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar7 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar3 == '\0')) {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar7 + 0x110))(plVar7);
        uVar4 = FUN_144aff482(uVar4,plVar1);
      }
      *(undefined8 *)(param_1 + 0x40) = uVar4;
    }
    FUN_14897417a(lVar5,&local_68);
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0x100000000;
    if (local_68 != 0) {
      *(undefined4 *)(param_2 + 0x38) = 1;
      *param_2 = 0;
      *(undefined4 *)(param_2 + 0x28) = 0;
      FUN_14896bbba(param_2,&local_68);
    }
  }
  plVar1 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_60 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
LAB_1489613c5:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489613fc FUN_1489613fc body=164 status=ok
// SIG undefined FUN_1489613fc(void)

undefined1 *
FUN_1489613fc(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)FUN_1447262c2(param_4);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_144a7c80a();
    lVar3 = (**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (lVar3 != 0) {
      uVar2 = FUN_144a7c80a();
      lVar4 = FUN_144718840(lVar3,uVar2);
      if (lVar3 != lVar4) {
        *(undefined8 *)(param_2 + 0x30) = 0;
        *(undefined8 *)(param_2 + 0x38) = 0x100000000;
        if (lVar4 == 0) {
          return param_2;
        }
        *(undefined4 *)(param_2 + 0x38) = 1;
        *param_2 = 0;
        *(undefined4 *)(param_2 + 0x28) = 0;
        FUN_14896bc28(param_2,lVar4);
        return param_2;
      }
    }
  }
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0x100000000;
  return param_2;
}



// FUNCTION 1489614a0 FUN_1489614a0 body=30 status=ok
// SIG undefined FUN_1489614a0(void)

undefined1 FUN_1489614a0(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_14108b142(param_1 + 8);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(lVar2 + 0x58);
  }
  return uVar1;
}



// FUNCTION 1489614f2 FUN_1489614f2 body=591 status=ok
// SIG undefined FUN_1489614f2(void)

void FUN_1489614f2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  code *local_68;
  undefined4 local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    cVar8 = FUN_144729dda(param_1 + 0xb0);
    if (cVar8 != '\0') {
      uVar10 = FUN_14896188e(param_1);
      FUN_1409e0c66(&local_58,uVar10);
      if (local_50 != (longlong *)0x0) {
        iVar9 = (int)local_50[1];
        do {
          if (iVar9 == 0) {
            plVar11 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar7 = (int)local_50[1];
          bVar12 = iVar9 == iVar7;
          if (bVar12) {
            *(int *)(local_50 + 1) = iVar9 + 1;
            iVar7 = iVar9;
          }
          iVar9 = iVar7;
          UNLOCK();
          plVar11 = local_50;
        } while (!bVar12);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_50 + 0x10))();
        }
        lVar6 = local_58;
        if (plVar11 != (longlong *)0x0) {
          if ((local_58 != 0) &&
             (plVar3 = *(longlong **)(param_1 + 0x98), plVar3 != (longlong *)0x0)) {
            iVar9 = (int)plVar3[1];
            do {
              if (iVar9 == 0) goto LAB_1489616bf;
              LOCK();
              iVar7 = (int)plVar3[1];
              bVar12 = iVar9 == iVar7;
              if (bVar12) {
                *(int *)(plVar3 + 1) = iVar9 + 1;
                iVar7 = iVar9;
              }
              iVar9 = iVar7;
              UNLOCK();
            } while (!bVar12);
            lVar4 = *(longlong *)(param_1 + 0x90);
            if (lVar4 != 0) {
              uVar10 = FUN_14479d2ce(param_1 + 0xb0);
              local_78 = 1;
              FUN_140a41f04(lVar6,&local_58,uVar10,lVar4 + 0x38);
              plVar2 = local_50;
              if ((longlong *)(param_1 + 0xb8) != &local_58) {
                *(longlong *)(param_1 + 0xb8) = local_58;
                local_58 = 0;
                plVar5 = *(longlong **)(param_1 + 0xc0);
                if (local_50 != plVar5) {
                  local_50 = (longlong *)0x0;
                  *(longlong **)(param_1 + 0xc0) = plVar2;
                  if (plVar5 != (longlong *)0x0) {
                    LOCK();
                    plVar2 = plVar5 + 1;
                    *(int *)plVar2 = (int)*plVar2 + -1;
                    UNLOCK();
                    if ((int)*plVar2 == 0) {
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
                }
              }
              plVar2 = local_50;
              if (local_50 != (longlong *)0x0) {
                LOCK();
                plVar5 = local_50 + 1;
                *(int *)plVar5 = (int)*plVar5 + -1;
                UNLOCK();
                if ((int)*plVar5 == 0) {
                  (**(code **)*local_50)(local_50);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar2 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar2 + 0x10))(plVar2);
                  }
                }
              }
              lVar6 = *(longlong *)(param_1 + 0xb8);
              if (lVar6 != 0) {
                local_68 = FUN_1489618c6;
                local_60 = 0;
                FUN_14896beac(&local_58,param_1);
                FUN_140e0aeb0(lVar6 + 0x130,&local_68,&local_58);
                FUN_1449db362(&local_58);
                *(code **)(param_1 + 0xa8) = local_68;
              }
            }
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
LAB_1489616bf:
          LOCK();
          plVar3 = plVar11 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14896174c FUN_14896174c body=321 status=ok
// SIG undefined FUN_14896174c(void)

void FUN_14896174c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar6 = FUN_14896188e();
  FUN_1409e0c66(&local_38,uVar6);
  if (local_30 != (longlong *)0x0) {
    iVar5 = (int)local_30[1];
    do {
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_30[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(local_30 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar7 = local_30;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      if ((local_38 != 0) && (*(longlong *)(param_1 + 0xb8) != 0)) {
        if (*(longlong *)(param_1 + 0xa8) != 0) {
          FUN_14480f766(*(longlong *)(param_1 + 0xb8) + 0x130);
        }
        FUN_1409e0d9e(local_38,param_1 + 0xb8);
        *(undefined8 *)(param_1 + 0xb8) = 0;
        plVar3 = *(longlong **)(param_1 + 0xc0);
        if (plVar3 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0xc0) = 0;
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
        if (*(longlong *)(param_1 + 0x70) != 0) {
          FUN_1414a7868(*(longlong *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x80));
        }
      }
      LOCK();
      plVar3 = plVar7 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14896188e FUN_14896188e body=56 status=ok
// SIG undefined FUN_14896188e(void)

undefined8 FUN_14896188e(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x88);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x88);
    uVar2 = FUN_1447210f0(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1489618c6 FUN_1489618c6 body=623 status=ok
// SIG undefined FUN_1489618c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1489618c6(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_98 [32];
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*param_2 != 0) && (*param_2 == *(longlong *)(param_1 + 0xb8))) &&
     (*(longlong *)(param_1 + 0x70) != 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb8aa38) && (FUN_144b3d300(&DAT_14cb8aa38), DAT_14cb8aa38 == -1)) {
      DAT_14cb8aa28 = 0;
      _DAT_14cb8aa30 = 0;
      atexit((_func_5014 *)&LAB_143e229e0);
      _Init_thread_footer(&DAT_14cb8aa38);
    }
    bVar7 = (longlong)_DAT_14cb8aa30 < 0;
    _DAT_14cb8aa30 = _DAT_14cb8aa30 & 0xffffffff00000000;
    if (bVar7) {
      FUN_140c5c1ec(&DAT_14cb8aa28,0);
    }
    lVar3 = FUN_1412e3d68(*param_2);
    lVar5 = *(longlong *)(lVar3 + 0x380);
    if (*(longlong *)(lVar3 + 0x380) == 0) {
      lVar5 = lVar3;
    }
    if ((longlong)*(int *)(lVar3 + 0x388) != 0) {
      lVar3 = (longlong)*(int *)(lVar3 + 0x388) * 0x38 + lVar5;
      do {
        uVar4 = FUN_14030a32e(lVar5);
        uVar1 = _DAT_14cb8aa30;
        lVar6 = (longlong)DAT_14cb8aa30;
        uVar2 = DAT_14cb8aa30 + 1;
        _DAT_14cb8aa30 = CONCAT44(DAT_14cb8aa34,uVar2);
        if (DAT_14cb8aa34 < uVar2) {
          FUN_1447d05f2(&DAT_14cb8aa28,uVar1 & 0xffffffff);
        }
        *(undefined8 *)(DAT_14cb8aa28 + lVar6 * 8) = uVar4;
        if ((*(byte *)(lVar5 + 0x34) & 1) == 0) {
          FUN_1412e0f8a();
        }
        else {
          FUN_1412d5418(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x80),uVar4);
        }
        lVar5 = lVar5 + 0x38;
      } while (lVar5 != lVar3);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb8aa50) && (FUN_144b3d300(&DAT_14cb8aa50), DAT_14cb8aa50 == -1)) {
      DAT_14cb8aa40 = 0;
      _DAT_14cb8aa48 = 0;
      atexit((_func_5014 *)&LAB_143e229f1);
      _Init_thread_footer(&DAT_14cb8aa50);
    }
    bVar7 = (longlong)_DAT_14cb8aa48 < 0;
    _DAT_14cb8aa48 = _DAT_14cb8aa48 & 0xffffffff00000000;
    if (bVar7) {
      FUN_140c5c1ec(&DAT_14cb8aa40,0);
    }
    local_68 = 0;
    local_58 = &PTR_LAB_14b426c50;
    local_78 = FUN_143e26d70;
    FUN_14589a084(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x80));
    lVar5 = DAT_14cb8aa40;
    lVar3 = (longlong)DAT_14cb8aa48;
    if (lVar3 != 0) {
      lVar6 = 0;
      do {
        FUN_1412d5418(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x80),
                      *(undefined8 *)(lVar5 + lVar6));
        lVar6 = lVar6 + 8;
      } while (lVar3 * 8 != lVar6);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148961b36 FUN_148961b36 body=339 status=ok
// SIG undefined FUN_148961b36(void)

void FUN_148961b36(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = param_1 + 0xb0;
  cVar4 = FUN_14069eaf4(lVar6);
  if (cVar4 == '\0') {
    FUN_14896174c(param_1);
    cVar4 = FUN_144729dda(lVar6);
    if (cVar4 != '\0') {
      lVar5 = FUN_14479d2ce(lVar6);
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        FUN_14480f766(lVar5 + 0x2d0);
      }
    }
    *(undefined8 *)(param_1 + 0xb8) = 0;
    plVar3 = *(longlong **)(param_1 + 0xc0);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xc0) = 0;
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
    FUN_14485c47a(lVar6,param_2);
    cVar4 = FUN_144729dda(lVar6);
    if (cVar4 != '\0') {
      lVar6 = FUN_14479d2ce(lVar6);
      local_48 = FUN_148961c8a;
      local_40 = 0;
      FUN_14896c3d2(local_38,param_1);
      FUN_140725f8c(lVar6 + 0x2d0,&local_48,local_38);
      FUN_1449db362(local_38);
      *(code **)(param_1 + 0xa0) = local_48;
    }
    if ((*(byte *)(param_1 + 0x68) & 2) != 0) {
      FUN_1489614f2(param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148961c8a FUN_148961c8a body=51 status=ok
// SIG undefined FUN_148961c8a(void)

void FUN_148961c8a(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14069eaf4(param_1 + 0xb0);
  if (cVar1 != '\0') {
    FUN_14896174c(param_1);
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 148961cbe FUN_148961cbe body=125 status=ok
// SIG undefined FUN_148961cbe(void)

void FUN_148961cbe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148961d4c(param_2,&local_28);
  FUN_148961b36(local_28,param_3);
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148961d4c FUN_148961d4c body=131 status=ok
// SIG undefined FUN_148961d4c(void)

undefined8 * FUN_148961d4c(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140df5234(param_1,&local_28);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148961dd0 FUN_148961dd0 body=165 status=ok
// SIG undefined FUN_148961dd0(void)

void FUN_148961dd0(longlong param_1,undefined8 *param_2,char param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 == '\x01') {
    uVar1 = FUN_14479d2ce(param_1 + 0x50);
    local_48 = *param_2;
    local_40 = *(undefined4 *)(param_2 + 1);
    local_38 = 0;
    FUN_141324a7a(param_4,&local_48,uVar1);
  }
  else if (param_3 == '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x50);
    local_30 = *param_2;
    local_28 = *(undefined4 *)(param_2 + 1);
    local_20 = 0;
    FUN_1412d78aa(param_4,&local_30,uVar1,0);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148961e76 FUN_148961e76 body=167 status=ok
// SIG undefined FUN_148961e76(void)

void FUN_148961e76(longlong param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0xa8);
  if ((((-1 < (int)param_3 && lVar3 != 0) && ((int)param_3 < *(int *)(lVar3 + 0x68))) &&
      (lVar3 = (ulonglong)param_3 * 0x50 + *(longlong *)(lVar3 + 0x60), lVar3 != 0)) &&
     ((longlong)*(int *)(lVar3 + 0x40) != 0)) {
    lVar2 = *(longlong *)(lVar3 + 0x38);
    lVar1 = (longlong)*(int *)(lVar3 + 0x40) * 0x18;
    do {
      if (*(char *)(lVar3 + 0x48) == '\0') {
        FUN_148961fca(param_1,lVar2,param_4,param_2);
      }
      else if (*(char *)(lVar3 + 0x48) == '\x01') {
        FUN_148961f1e(param_1,lVar2,param_4,param_2);
      }
      lVar2 = lVar2 + 0x18;
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 148961f1e FUN_148961f1e body=171 status=ok
// SIG undefined FUN_148961f1e(void)

void FUN_148961f1e(longlong param_1,undefined8 *param_2,char param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 == '\x01') {
    uVar1 = FUN_14479d2ce(param_1 + 0xb8);
    local_48 = *param_2;
    local_40 = *(undefined4 *)(param_2 + 1);
    local_38 = 0;
    FUN_141324a7a(param_4,&local_48,uVar1);
  }
  else if (param_3 == '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0xb8);
    local_30 = *param_2;
    local_28 = *(undefined4 *)(param_2 + 1);
    local_20 = 0;
    FUN_1412d78aa(param_4,&local_30,uVar1,0);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148961fca FUN_148961fca body=171 status=ok
// SIG undefined FUN_148961fca(void)

void FUN_148961fca(longlong param_1,undefined8 *param_2,char param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 == '\x01') {
    uVar1 = FUN_14479d2ce(param_1 + 0xb8);
    local_48 = *param_2;
    local_40 = *(undefined4 *)(param_2 + 1);
    local_38 = 0;
    FUN_141431052(param_4,&local_48,uVar1);
  }
  else if (param_3 == '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0xb8);
    local_30 = *param_2;
    local_28 = *(undefined4 *)(param_2 + 1);
    local_20 = 0;
    FUN_145acb39c(param_4,&local_30,uVar1,0);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148962076 FUN_148962076 body=91 status=ok
// SIG undefined FUN_148962076(void)

undefined8 FUN_148962076(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if ((plVar3 != (longlong *)0x0) &&
         (cVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2), cVar4 != (char)plVar3[1])) {
        return 1;
      }
      lVar5 = lVar5 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar5);
  }
  return 0;
}



// FUNCTION 1489620d2 FUN_1489620d2 body=98 status=ok
// SIG undefined FUN_1489620d2(void)

ulonglong FUN_1489620d2(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x18);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar6);
      if (plVar3 != (longlong *)0x0) {
        cVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
        if (cVar4 == (char)plVar3[1]) {
          uVar5 = 0;
          break;
        }
      }
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar6);
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 148962158 FUN_148962158 body=72 status=ok
// SIG undefined FUN_148962158(void)

byte FUN_148962158(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  
  lVar3 = *(longlong *)(param_2 + 8) + 0x10;
  plVar2 = (longlong *)FUN_14479d2ce(lVar3);
  bVar4 = (byte)lVar3;
  if (plVar2 != (longlong *)0x0) {
    if (*(char *)((longlong)plVar2 + 0x1fb) == '\0') {
      bVar4 = 1;
    }
    else {
      iVar1 = (**(code **)(*plVar2 + 0x580))(plVar2);
      bVar4 = iVar1 == 0;
    }
  }
  return plVar2 != (longlong *)0x0 & bVar4;
}



// FUNCTION 1489621a0 FUN_1489621a0 body=160 status=ok
// SIG undefined FUN_1489621a0(void)

bool FUN_1489621a0(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar2 = FUN_14479d2ce(*(longlong *)(param_2 + 8) + 8);
  if (lVar2 != 0) {
    lVar3 = FUN_144a7cacc();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      if (*(char *)(param_1 + 0x10) != '\x01') {
        return true;
      }
      uVar4 = FUN_1449d6ade();
      plVar5 = (longlong *)FUN_144718840(lVar2,uVar4);
      if ((plVar5 != (longlong *)0x0) &&
         (lVar2 = FUN_14479d2ce(*(undefined8 *)(param_2 + 8)), lVar2 != 0)) {
        uVar4 = (**(code **)(*plVar5 + 0x10))(plVar5);
        uVar1 = FUN_14486116a(uVar4,*(undefined8 *)(lVar2 + 0xa8));
        return uVar1 == *(byte *)(param_1 + 0x11);
      }
    }
  }
  return false;
}



// FUNCTION 148962240 FUN_148962240 body=252 status=ok
// SIG undefined FUN_148962240(void)

longlong *
FUN_148962240(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_3;
  local_38 = (longlong *)param_3[1];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FUN_14001cc68(0x108,0x10);
  FUN_14896d368(plVar4,&local_40,param_4);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_14896e4c8(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
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
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


