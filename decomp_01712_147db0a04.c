// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147db0a04 FUN_147db0a04 body=24 status=ok
// SIG undefined FUN_147db0a04(void)

bool FUN_147db0a04(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x58);
  return lVar1 != 0;
}



// FUNCTION 147db0a28 FUN_147db0a28 body=114 status=ok
// SIG undefined FUN_147db0a28(void)

void FUN_147db0a28(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab098f0;
  FUN_147db0d9c(puVar1 + 1,param_1 + 8);
  puVar1[10] = *(undefined8 *)(param_1 + 0x50);
  *puVar1 = &PTR_FUN_14ab09880;
  puVar1[0xd] = *(undefined8 *)(param_1 + 0x68);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  puVar1[0xb] = *(undefined8 *)(param_1 + 0x58);
  puVar1[0xc] = uVar2;
  return;
}



// FUNCTION 147db0a9a FUN_147db0a9a body=114 status=ok
// SIG undefined FUN_147db0a9a(void)

void FUN_147db0a9a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab098f0;
  FUN_147db0d9c(puVar1 + 1,param_1 + 8);
  puVar1[10] = *(undefined8 *)(param_1 + 0x50);
  *puVar1 = &PTR_FUN_14ab09880;
  puVar1[0xd] = *(undefined8 *)(param_1 + 0x68);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  puVar1[0xb] = *(undefined8 *)(param_1 + 0x58);
  puVar1[0xc] = uVar2;
  return;
}



// FUNCTION 147db0b0c FUN_147db0b0c body=150 status=ok
// SIG undefined FUN_147db0b0c(void)

void FUN_147db0b0c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 7) {
    FUN_1446efa72(param_2 + 1,0,7,0x10);
    param_2[1].LockCount = 7;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ab098f0;
  FUN_147db0d9c(&p_Var1->CriticalSection,param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  p_Var1[1].EntryCount = (int)uVar2;
  p_Var1[1].ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab09880;
  p_Var1[2].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x68);
  uVar3 = *(undefined4 *)(param_1 + 0x5c);
  uVar4 = *(undefined4 *)(param_1 + 0x60);
  uVar5 = *(undefined4 *)(param_1 + 100);
  p_Var1[1].Flags = *(DWORD *)(param_1 + 0x58);
  p_Var1[1].CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1[1].SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[2].Type = (short)uVar4;
  p_Var1[2].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[2].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147db0b92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147db0ba2 FUN_147db0ba2 body=92 status=ok
// SIG undefined FUN_147db0ba2(void)

void FUN_147db0ba2(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = FUN_14479d2ce(param_1 + 0x58);
  FUN_147db0e32(param_1 + 8,param_1 + 0x60,&local_20,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db0c00 FUN_147db0c00 body=172 status=ok
// SIG undefined FUN_147db0c00(void)

bool FUN_147db0c00(longlong param_1,undefined8 param_2)

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
    FUN_140192332(param_1 + 0x58,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x58);
  if (lVar2 != 0) {
    local_30 = lVar2;
    FUN_147db0e32(param_1 + 8,param_1 + 0x60,&local_30,param_2);
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



// FUNCTION 147db0cb0 FUN_147db0cb0 body=150 status=ok
// SIG undefined FUN_147db0cb0(void)

undefined8 *
FUN_147db0cb0(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  byte bVar1;
  int iVar2;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = &PTR_FUN_14a184370;
  bVar1 = *(byte *)(param_3 + 0x18);
  *(byte *)(param_1 + 4) = bVar1;
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar1])(param_1 + 2,param_3 + 8);
  param_1[1] = &PTR_FUN_14a5af930;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  iVar2 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 8) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 7,iVar2,0);
    memcpy((void *)param_1[7],_Src,(longlong)iVar2 * 2);
  }
  return param_1;
}



// FUNCTION 147db0d46 FUN_147db0d46 body=85 status=ok
// SIG undefined FUN_147db0d46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147db0d46(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 8) = &PTR_FUN_14a5af930;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 8) = &PTR_FUN_14a184370;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x20)) {
  case 1:
    return;
  case 2:
    *(code **)(param_1 + 0x10) = switchD_1458da17c::caseD_0;
    *(undefined **)(param_1 + 0x18) = (undefined *)0x1470afba2;
    LOCK();
    FUN_1470afba4 = FUN_1470afba4 + 1;
    UNLOCK();
    return;
  case 3:
    *(undefined4 *)(param_1 + 0x10) = 0x4053b5c6;
    return;
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x00014053b5f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147db0d9c FUN_147db0d9c body=150 status=ok
// SIG undefined FUN_147db0d9c(void)

undefined8 * FUN_147db0d9c(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = &PTR_FUN_14a184370;
  bVar1 = *(byte *)(param_2 + 4);
  *(byte *)(param_1 + 4) = bVar1;
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar1])(param_1 + 2,param_2 + 2);
  param_1[1] = &PTR_FUN_14a5af930;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  iVar2 = *(int *)(param_2 + 8);
  _Src = (void *)param_2[7];
  *(int *)(param_1 + 8) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 7,iVar2,0);
    memcpy((void *)param_1[7],_Src,(longlong)iVar2 * 2);
  }
  return param_1;
}



// FUNCTION 147db0e32 FUN_147db0e32 body=260 status=ok
// SIG undefined FUN_147db0e32(void)

void FUN_147db0e32(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  void **local_98;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined **local_78;
  undefined1 local_70 [16];
  byte local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar1 = *(int *)(param_2 + 1);
  pcVar2 = (code *)*param_2;
  lVar3 = *param_3;
  local_88 = (void *)0x0;
  local_80 = *(int *)(param_1 + 8);
  lVar4 = (longlong)local_80;
  _Src = (void *)param_1[7];
  if (lVar4 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_80,0);
    memcpy(local_88,_Src,lVar4 * 2);
  }
  local_78 = &PTR_FUN_14a184370;
  local_60 = *(byte *)(param_1 + 4);
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_60])(local_70,param_1 + 2);
  local_78 = &PTR_FUN_14a5af930;
  local_58 = 0;
  uStack_50 = 0;
  local_98 = &local_88;
  (*pcVar2)(lVar3 + iVar1,param_4,*param_1,&local_78);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db0f38 FUN_147db0f38 body=317 status=ok
// SIG undefined FUN_147db0f38(void)

int FUN_147db0f38(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar7 = (int)param_1[1];
  lVar8 = (longlong)iVar7;
  if (lVar8 == 0) {
    iVar7 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    lVar5 = *(longlong *)*param_2;
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
    }
    iVar12 = 0;
    iVar9 = 0;
    bVar3 = *plVar1 == lVar5;
    do {
      lVar6 = (longlong)iVar9;
      iVar10 = iVar9;
      lVar5 = lVar6;
      iVar4 = iVar9 + 1;
      if (iVar9 + 1 < iVar7) {
        iVar4 = iVar7;
      }
      do {
        lVar5 = lVar5 + 1;
        iVar11 = iVar4;
        if (lVar8 <= lVar5) break;
        lVar2 = *(longlong *)*param_2;
        if ((lVar2 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar2);
        }
        iVar11 = iVar10 + 1;
        iVar10 = iVar11;
      } while (bVar3 == (plVar1[lVar5] == lVar2));
      if (bVar3 == false) {
        if (iVar12 != iVar9) {
          memmove(plVar1 + iVar12,plVar1 + lVar6,(longlong)(iVar11 - iVar9) << 3);
        }
        iVar12 = iVar12 + (iVar11 - iVar9);
      }
      iVar9 = iVar11;
      bVar3 = (bool)(bVar3 ^ 1);
    } while (lVar5 < lVar8);
    *(int *)(param_1 + 1) = iVar12;
    iVar7 = iVar7 - iVar12;
  }
  return iVar7;
}



// FUNCTION 147db1076 FUN_147db1076 body=264 status=ok
// SIG undefined FUN_147db1076(void)

void FUN_147db1076(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_98 [44];
  uint local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar4 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar4 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    plVar5 = (longlong *)0x0;
    do {
      local_6c = (uint)plVar5;
      lVar7 = uVar4 * 0x10 + -8;
      uVar6 = uVar4;
      while ((*(int *)(*param_1 + lVar7) != 0 &&
             (plVar5 = *(longlong **)(*param_1 + -8 + lVar7), plVar5 != (longlong *)0x0))) {
        local_50 = *(undefined4 *)(param_4 + 1);
        local_58 = *param_4;
        local_68 = *param_3;
        local_60 = *(undefined4 *)(param_3 + 1);
        cVar3 = (**(code **)(*plVar5 + 0x60))(plVar5,param_2,&local_68,&local_58);
        if (cVar3 == '\0') break;
        lVar7 = lVar7 + -0x10;
        bVar2 = uVar6 < 2;
        uVar6 = uVar6 - 1;
        if (bVar2) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if ((local_6c & 1) != 0) goto LAB_147db1148;
          goto LAB_147db1157;
        }
      }
      uVar4 = uVar6 - 1;
      plVar5 = (longlong *)CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
    } while (1 < uVar6);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_147db1148:
    FUN_14474d06a(param_1,0);
  }
LAB_147db1157:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db1180 FUN_147db1180 body=31 status=ok
// SIG undefined FUN_147db1180(void)

undefined8 FUN_147db1180(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147db11bc FUN_147db11bc body=93 status=ok
// SIG undefined FUN_147db11bc(void)

void FUN_147db11bc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab09960;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147db121a FUN_147db121a body=126 status=ok
// SIG undefined FUN_147db121a(void)

void FUN_147db121a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e665f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab09960;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147db1289. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147db12a6 FUN_147db12a6 body=169 status=ok
// SIG undefined FUN_147db12a6(void)

undefined8 * FUN_147db12a6(undefined8 *param_1)

{
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14ab099d0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[2] = &PTR_FUN_149e90fd0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xd),4000);
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[2] = &PTR_FUN_149e90ff0;
  return param_1;
}



// FUNCTION 147db1350 FUN_147db1350 body=143 status=ok
// SIG undefined FUN_147db1350(void)

void FUN_147db1350(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x78,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x78)) {
      uVar5 = uVar4 / 0x78 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x78,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147db13e0 FUN_147db13e0 body=175 status=ok
// SIG undefined FUN_147db13e0(void)

void FUN_147db13e0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_147db1469;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_147db1469:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 147db14ac FUN_147db14ac body=182 status=ok
// SIG undefined FUN_147db14ac(void)

void FUN_147db14ac(longlong param_1,longlong param_2)

{
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = param_2;
  switchD_143c3d4dc::caseD_20();
  if ((((*(longlong *)(param_2 + 0x68) == 0) ||
       (*(longlong *)(*(longlong *)(param_2 + 0x68) + 0x10) == 0)) &&
      ((*(uint *)(param_2 + 0x34) >> 0x16 & 1) == 0)) && ((*(byte *)(param_2 + 0x28) & 1) == 0)) {
    if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_14021219d(param_2,param_1 + 0x28);
  FUN_147dba692(param_2,param_1 + 0x38);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_1c8);
}



// FUNCTION 147db1578 FUN_147db1578 body=36 status=ok
// SIG undefined FUN_147db1578(void)

void FUN_147db1578(undefined8 param_1,char param_2)

{
  if (param_2 == '\0') {
    return;
  }
  FUN_144a79778();
  FUN_147db159c(param_1);
  return;
}



// FUNCTION 147db159c FUN_147db159c body=365 status=ok
// SIG undefined FUN_147db159c(void)

void FUN_147db159c(longlong param_1)

{
  undefined2 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar3 = 0;
    do {
      puVar4 = (undefined8 *)(lVar3 * 200 + *(longlong *)(param_1 + 0x38));
      FUN_1400021e4(puVar4,&local_68);
      FUN_147daa0c0(&local_58,&local_68,0xffffffff);
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      puVar1 = &DAT_149dfb77a;
      if (local_50 != 0) {
        puVar1 = local_58;
      }
      FUN_1446f470e(&local_68,puVar1,1);
      *puVar4 = local_68;
      FUN_1468fc60e();
      if ((longlong)*(int *)(puVar4 + 2) != 0) {
        plVar5 = (longlong *)puVar4[1];
        lVar2 = (longlong)*(int *)(puVar4 + 2) << 3;
        do {
          FUN_1400021e4(plVar5,local_78);
          FUN_147daa0c0(&local_68,local_78,0xffffffff);
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
          puVar1 = &DAT_149dfb77a;
          if (local_60 != 0) {
            puVar1 = local_68;
          }
          FUN_1446f470e(local_78,puVar1,1);
          *plVar5 = local_78[0];
          FUN_1468fc60e(*plVar5);
          if (local_68 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          plVar5 = plVar5 + 1;
          lVar2 = lVar2 + -8;
        } while (lVar2 != 0);
      }
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x40));
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db170a FUN_147db170a body=172 status=ok
// SIG undefined FUN_147db170a(void)

void FUN_147db170a(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446e0b6e();
  FUN_147db17b8(param_1);
  FUN_143797134(param_1);
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar2 = FUN_144a7757c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_147db1762;
  }
  lVar3 = 0;
LAB_147db1762:
  bVar1 = *(byte *)(lVar3 + 0x152);
  if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
    local_28 = *(undefined8 *)(param_1 + 0x48);
    local_20 = *(undefined4 *)(param_1 + 0x50);
    FUN_147daa57a(lVar3);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147db17b8 FUN_147db17b8 body=221 status=ok
// SIG undefined FUN_147db17b8(void)

void FUN_147db17b8(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar3 = *(int *)(param_1 + 0x40);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  plVar1 = (longlong *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) != iVar3) {
    FUN_147daff34(plVar1);
    iVar3 = *(int *)(param_1 + 0x40);
  }
  if (iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x38);
    lVar5 = (longlong)iVar3 * 200;
    do {
      lVar2 = FUN_147db18d0(param_1,lVar4);
      if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar2);
      }
      iVar3 = *(int *)(param_1 + 0x50);
      *(uint *)(param_1 + 0x50) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x54) < iVar3 + 1U) {
        FUN_140831cc2(plVar1,iVar3);
      }
      *(longlong *)(*plVar1 + (longlong)iVar3 * 8) = lVar2;
      if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar2);
      }
      lVar4 = lVar4 + 200;
      lVar5 = lVar5 + -200;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 147db1896 FUN_147db1896 body=57 status=ok
// SIG undefined FUN_147db1896(void)

longlong FUN_147db1896(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = FUN_144a7757c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 147db18d0 FUN_147db18d0 body=168 status=ok
// SIG undefined FUN_147db18d0(void)

longlong FUN_147db18d0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar1 = FUN_144a7757c();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_147db1908;
  }
  lVar2 = 0;
LAB_147db1908:
  lVar1 = FUN_14090368a(param_1 + 0x68);
  if (lVar1 == 0) {
    lVar1 = FUN_14129ec24();
  }
  lVar2 = FUN_1417de24c(lVar2,lVar1,0,0x40,0,0,0,0);
  FUN_147b98faa(lVar2,*param_2);
  *(undefined8 *)(lVar2 + 0x54) = *param_2;
  FUN_1406fa324(lVar2 + 0x60,param_2 + 1);
  return lVar2;
}



// FUNCTION 147db1978 FUN_147db1978 body=93 status=ok
// SIG undefined FUN_147db1978(void)

longlong FUN_147db1978(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (0 < (longlong)*(int *)(param_1 + 0x40)) {
    lVar1 = *(longlong *)(param_1 + 0x38);
    uVar2 = 0;
    do {
      if (*(longlong *)(lVar1 + uVar2 * 200) == *param_2) {
LAB_147db19c8:
        return lVar1 + (uVar2 & 0xffffffff) * 200;
      }
      lVar4 = uVar2 * 200 + lVar1;
      lVar3 = (longlong)*(int *)(lVar4 + 0x10);
      if (lVar3 != 0) {
        lVar5 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar4 + 8) + lVar5) == *param_2) goto LAB_147db19c8;
          lVar5 = lVar5 + 8;
        } while (lVar3 * 8 != lVar5);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != (longlong)*(int *)(param_1 + 0x40));
  }
  return 0;
}



// FUNCTION 147db19d6 FUN_147db19d6 body=57 status=ok
// SIG undefined FUN_147db19d6(void)

void FUN_147db19d6(undefined8 *param_1,int param_2)

{
  FUN_145c5b3bf(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147dbaab6(param_1,param_2);
  return;
}



// FUNCTION 147db1a10 FUN_147db1a10 body=769 status=ok
// SIG undefined FUN_147db1a10(void)

void FUN_147db1a10(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4,
                  longlong *param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_118 [44];
  uint local_ec;
  int local_e8;
  int local_e4;
  longlong *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined8 local_98;
  double local_90;
  double local_88;
  undefined8 local_80;
  undefined1 local_78;
  ulonglong local_70;
  
  param_3 = param_3 & 0xffffffff;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar13 = *(longlong *)(param_1 + 0x20);
  local_e0 = param_4;
  local_d0 = param_2;
  if (lVar13 != 0) {
    lVar8 = FUN_144a7757c();
    if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
        == lVar8 + 0x30)) goto LAB_147db1a83;
  }
  lVar13 = 0;
LAB_147db1a83:
  iVar5 = *(int *)(param_1 + 0x40);
  if (0 < iVar5) {
    local_e4 = *(int *)(lVar13 + 0x710);
    local_e8 = *(int *)(lVar13 + 0x714);
    local_d8 = param_3 * 0x18;
    lVar8 = 0;
    do {
      lVar11 = *(longlong *)(param_1 + 0x38);
      if ((*(char *)(lVar11 + 0x88 + lVar8 * 200) == '\x01') &&
         (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + lVar8 * 8),
         (*(byte *)(lVar2 + 0x10a) & 0x10) == 0)) {
        cVar4 = FUN_147db1d12(lVar13);
        uVar12 = 0xffffffff;
        if ((cVar4 == '\0') && (DAT_14c872bf0 == '\0')) {
          lVar11 = lVar11 + lVar8 * 200;
          local_a8 = (double)(*(int *)(lVar11 + 0x24) - local_e4);
          local_a0 = (double)(*(int *)(lVar11 + 0x28) - local_e8);
          local_88 = *(double *)(lVar11 + 0x50) + local_a0;
          local_a0 = local_a0 + *(double *)(lVar11 + 0x38);
          local_90 = *(double *)(lVar11 + 0x48) + local_a8;
          local_a8 = local_a8 + *(double *)(lVar11 + 0x30);
          local_78 = 1;
          local_98 = 0xc2a0000000000000;
          local_80 = 0x42a0000000000000;
          iVar5 = *(int *)(lVar11 + 0x10);
          if (*(int *)(lVar11 + 0xb0) < *(int *)(lVar11 + 0x10)) {
            iVar5 = *(int *)(lVar11 + 0xb0);
          }
          if (-1 < iVar5) {
            local_ec = (uint)param_3;
            do {
              iVar6 = *(int *)(lVar11 + 0x84);
              if ((-1 < (int)uVar12) && ((int)uVar12 < *(int *)(lVar11 + 0xb0))) {
                iVar6 = iVar6 + *(int *)(*(longlong *)(lVar11 + 0xa8) + (ulonglong)uVar12 * 0x14);
              }
              if (0 < (int)local_ec) {
                dVar3 = (double)iVar6;
                lVar9 = 0;
                do {
                  local_b8 = *(undefined8 *)(local_d0 + 0x10 + lVar9);
                  puVar1 = (undefined4 *)(local_d0 + lVar9);
                  local_c8 = *puVar1;
                  uStack_c4 = puVar1[1];
                  uStack_c0 = puVar1[2];
                  uStack_bc = puVar1[3];
                  local_b0 = dVar3;
                  cVar4 = FUN_147dbab2a(&local_c8,dVar3 * dVar3,&local_a8);
                  if (cVar4 != '\0') {
                    param_3 = (ulonglong)local_ec;
                    goto LAB_147db1bae;
                  }
                  lVar9 = lVar9 + 0x18;
                } while (local_d8 != lVar9);
              }
              uVar12 = uVar12 + 1;
            } while ((int)uVar12 < iVar5);
            param_3 = (ulonglong)local_ec;
          }
          iVar5 = (int)param_5[1];
          uVar7 = iVar5 + 1;
          *(uint *)(param_5 + 1) = uVar7;
          uVar12 = 0xffffffff;
          plVar10 = param_5;
        }
        else {
LAB_147db1bae:
          iVar5 = (int)local_e0[1];
          uVar7 = iVar5 + 1;
          *(uint *)(local_e0 + 1) = uVar7;
          plVar10 = local_e0;
        }
        if (*(uint *)((longlong)plVar10 + 0xc) < uVar7) {
          FUN_147dbabb6(plVar10,iVar5);
        }
        lVar11 = *plVar10;
        lVar9 = (longlong)iVar5;
        *(int *)(lVar11 + lVar9 * 0x18) = (int)lVar8;
        *(longlong *)(lVar11 + 8 + lVar9 * 0x18) = lVar2;
        *(uint *)(lVar11 + 0x10 + lVar9 * 0x18) = uVar12;
        iVar5 = *(int *)(param_1 + 0x40);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar5);
  }
  if ((local_70 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147db1d12 FUN_147db1d12 body=54 status=ok
// SIG undefined FUN_147db1d12(void)

ulonglong FUN_147db1d12(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((param_1 != 0) && (iVar1 = FUN_14490d72a(), iVar1 == 1)) {
    lVar2 = FUN_14494016c(param_1,0,1);
    return CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(lVar2 + 0x5b8)) &
           0xffffffffffffff01;
  }
  return 0;
}



// FUNCTION 147db1d48 FUN_147db1d48 body=412 status=ok
// SIG undefined FUN_147db1d48(void)

void FUN_147db1d48(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined1 local_70;
  undefined4 local_68;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0) {
LAB_147db1d96:
    lVar5 = 0;
  }
  else {
    lVar3 = FUN_144a7757c();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_147db1d96;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_78 = &local_58;
  local_58 = 0;
  uStack_50 = 0;
  FUN_147db1a10(param_1,param_2,param_3);
  iVar2 = FUN_14490d72a(lVar5);
  lVar3 = local_58;
  lVar4 = (longlong)(int)uStack_50;
  if (lVar4 != 0) {
    lVar6 = 0;
    do {
      local_68 = *(undefined4 *)(lVar3 + 0x10 + lVar6);
      local_70 = iVar2 == 1;
      local_78 = (longlong *)((ulonglong)local_78 & 0xffffffffffffff00);
      FUN_147db1ee6(param_1,lVar5,*(undefined4 *)(lVar3 + lVar6),0);
      lVar6 = lVar6 + 0x18;
    } while (lVar4 * 0x18 != lVar6);
  }
  lVar3 = local_48;
  lVar4 = (longlong)(int)uStack_40;
  if (lVar4 == 0) goto LAB_147db1ea2;
  lVar6 = 0;
  do {
    local_68 = *(undefined4 *)(lVar3 + 0x10 + lVar6);
    local_70 = iVar2 == 1;
    local_78 = (longlong *)CONCAT71(local_78._1_7_,1);
    bVar1 = FUN_147db1ee6(param_1,lVar5,*(undefined4 *)(lVar3 + lVar6),1);
    lVar6 = lVar6 + 0x18;
  } while (lVar4 * 0x18 != lVar6);
  if ((iVar2 == 1 & bVar1) == 0) goto LAB_147db1ea2;
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0) {
LAB_147db1e96:
    lVar5 = 0;
  }
  else {
    lVar3 = FUN_144a7757c();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_147db1e96;
  }
  FUN_143786ce4(lVar5,1);
LAB_147db1ea2:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db1ee6 FUN_147db1ee6 body=444 status=ok
// SIG undefined FUN_147db1ee6(void)

undefined8
FUN_147db1ee6(longlong param_1,longlong param_2,uint param_3,undefined4 param_4,byte param_5,
             char param_6,int param_7)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  double dVar8;
  undefined1 auStack_78 [40];
  LARGE_INTEGER local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((int)param_3 < 0) || (*(int *)(param_1 + 0x40) <= (int)param_3)) {
LAB_147db205d:
    uVar5 = 0;
  }
  else {
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),param_5);
    lVar2 = *(longlong *)(param_1 + 0x38);
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x48) + (ulonglong)param_3 * 8);
    if ((((*(byte *)((longlong)plVar3 + 0x10a) & 4) == 0) != (bool)param_6) &&
       ((*(int *)((longlong)plVar3 + 0xe4) == param_7 &&
        ((*(byte *)(plVar3 + 0x1d) & 8) >> 3 == param_5)))) {
      cVar4 = (**(code **)(*plVar3 + 0x2d8))(plVar3);
      uVar7 = CONCAT71((int7)((ulonglong)lVar2 >> 8),param_5);
      if (cVar4 == (char)param_4) goto LAB_147db205d;
    }
    bVar1 = *(byte *)(param_2 + 0x152);
    if ((((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
        (*(char *)(param_2 + 0x758) == '\0')) && (0.0 < *(double *)(param_1 + 0x58))) {
      QueryPerformanceCounter(&local_50);
      dVar8 = (double)local_50.QuadPart * DAT_14c83f420 + 16777216.0;
      lVar6 = (ulonglong)param_3 * 200;
      if (dVar8 - *(double *)(lVar2 + 0xc0 + lVar6) < *(double *)(param_1 + 0x58))
      goto LAB_147db205d;
      *(double *)(lVar6 + lVar2 + 0xc0) = dVar8;
    }
    *(byte *)((longlong)plVar3 + 0x10a) = *(byte *)((longlong)plVar3 + 0x10a) & 0xfb | param_6 << 2;
    (**(code **)(*plVar3 + 0x2c0))(plVar3,param_4);
    FUN_14039914a(plVar3,uVar7 & 0xffffffff);
    FUN_147b9824e(plVar3,param_7);
    uVar5 = 1;
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 147db20a4 FUN_147db20a4 body=295 status=ok
// SIG undefined FUN_147db20a4(void)

void FUN_147db20a4(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  byte bVar7;
  
  if (*(char *)(param_1 + 0x60) != '\x01') {
    FUN_147db1d48(param_1);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar2 < 1) {
    return;
  }
  lVar6 = 0x18;
  uVar5 = 0;
  bVar7 = 0;
  do {
    if ((*(char *)(*(longlong *)(param_1 + 0x38) + -0x38 + lVar6 * 8) == '\x01') &&
       ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + uVar5 * 8) + 0x10a) & 0x10) == 0))
    {
      *(undefined8 *)(*(longlong *)(param_1 + 0x38) + lVar6 * 8) = 0;
      lVar4 = *(longlong *)(param_1 + 0x20);
      if (lVar4 == 0) {
LAB_147db2135:
        lVar4 = 0;
      }
      else {
        lVar3 = FUN_144a7757c();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) goto LAB_147db2135;
      }
      bVar1 = FUN_147db1ee6(param_1,lVar4,uVar5 & 0xffffffff,1,1,1,0xffffffff);
      bVar7 = bVar7 | bVar1;
      iVar2 = *(int *)(param_1 + 0x40);
    }
    uVar5 = uVar5 + 1;
    lVar6 = lVar6 + 0x19;
  } while ((longlong)uVar5 < (longlong)iVar2);
  if ((bVar7 & 1) == 0) {
    return;
  }
  lVar6 = *(longlong *)(param_1 + 0x20);
  if (lVar6 != 0) {
    lVar4 = FUN_144a7757c();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) goto LAB_147db2193;
  }
  lVar6 = 0;
LAB_147db2193:
  FUN_143786ce4(lVar6,1);
  return;
}



// FUNCTION 147db21cc FUN_147db21cc body=1061 status=ok
// SIG undefined FUN_147db21cc(void)

void FUN_147db21cc(longlong param_1)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong **pplVar14;
  int iVar15;
  longlong lVar16;
  byte bVar17;
  double *pdVar18;
  double *pdVar19;
  undefined1 auStack_5d8 [32];
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  double local_5a8;
  longlong *local_5a0;
  uint local_598;
  longlong **local_420;
  undefined8 local_418;
  double local_410 [112];
  double *local_90;
  ulonglong local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_5d8;
  lVar16 = *(longlong *)(param_1 + 0x20);
  if (lVar16 == 0) {
LAB_147db2239:
    lVar16 = 0;
  }
  else {
    lVar12 = FUN_144a7757c();
    if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x38) < *(int *)(lVar12 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8
         ) != lVar12 + 0x30)) goto LAB_147db2239;
  }
  if ((DAT_14c872bf0 != '\0') || (cVar9 = FUN_147db1d12(lVar16), cVar9 != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_5d8);
  }
  local_5a8 = DAT_14c8464f0;
  local_5b8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_5b0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_90 = (double *)0x0;
  local_88 = 0x1000000000;
  iVar10 = FUN_14490d72a(lVar16);
  if (iVar10 == 3) {
    iVar10 = FUN_1458cac74(DAT_14cb0d2b0,lVar16);
    if (iVar10 == 0) goto LAB_147db236b;
    iVar15 = 0;
    if (iVar10 < 1) {
      bVar17 = 0;
    }
    else {
      bVar17 = 0;
      do {
        lVar12 = FUN_147d808fc(DAT_14cb0d2b0,lVar16,iVar15);
        if ((lVar12 != 0) && (plVar13 = *(longlong **)(lVar12 + 0x30), plVar13 != (longlong *)0x0))
        {
          (**(code **)(*plVar13 + 0xee8))(plVar13,local_410);
          bVar17 = bVar17 | *(byte *)(*(longlong *)(lVar12 + 0x30) + 0x5a0) >> 1;
        }
        iVar15 = iVar15 + 1;
      } while (iVar10 != iVar15);
    }
  }
  else {
    iVar10 = FUN_144b2c470(lVar16);
    if (iVar10 == 0) goto LAB_147db236b;
    FUN_144a7d35a(lVar16,&local_5a0);
    bVar17 = 0;
    if (-1 < (int)local_598) {
      do {
        if ((int)local_5a0[1] <= (int)local_598) break;
        plVar13 = (longlong *)FUN_14479d2ce((ulonglong)local_598 * 8 + *local_5a0);
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 0xee8))(plVar13,local_410);
          bVar17 = bVar17 | *(byte *)(plVar13 + 0xb4) >> 1;
        }
        uVar11 = local_598 + 1;
        bVar1 = -2 < (int)local_598;
        local_598 = uVar11;
      } while (bVar1);
    }
  }
  if ((local_88 & 0xffffffff) != 0) {
    local_420 = (longlong **)0x0;
    local_418 = 0x1000000000;
    if ((int)(uint)local_88 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(local_88 & 0xffffffff);
    }
    if (0x10 < (uint)local_88) {
      FUN_147dbac4a(&local_5a0);
    }
    pdVar19 = local_90;
    if (local_90 == (double *)0x0) {
      pdVar19 = local_410;
    }
    dVar2 = local_5b8;
    dVar4 = uStack_5b0;
    dVar3 = local_5a8;
    if ((uint)local_88 != 0) {
      pdVar18 = pdVar19 + (longlong)(int)(uint)local_88 * 7;
      do {
        uVar8 = local_418;
        dVar2 = dVar2 + *pdVar19;
        dVar4 = dVar4 + pdVar19[1];
        dVar3 = dVar3 + pdVar19[2];
        lVar12 = (longlong)(int)local_418;
        uVar11 = (int)local_418 + 1;
        local_418 = CONCAT44(local_418._4_4_,uVar11);
        if (local_418._4_4_ < uVar11) {
          FUN_147dbad4a(&local_5a0,uVar8 & 0xffffffff);
        }
        pplVar14 = local_420;
        if (local_420 == (longlong **)0x0) {
          pplVar14 = &local_5a0;
        }
        pplVar14[lVar12 * 3 + 2] = (longlong *)pdVar19[2];
        uVar5 = *(undefined4 *)((longlong)pdVar19 + 4);
        uVar6 = *(undefined4 *)(pdVar19 + 1);
        uVar7 = *(undefined4 *)((longlong)pdVar19 + 0xc);
        pplVar14 = pplVar14 + lVar12 * 3;
        *(undefined4 *)pplVar14 = *(undefined4 *)pdVar19;
        *(undefined4 *)((longlong)pplVar14 + 4) = uVar5;
        *(undefined4 *)(pplVar14 + 1) = uVar6;
        *(undefined4 *)((longlong)pplVar14 + 0xc) = uVar7;
        pdVar19 = pdVar19 + 7;
      } while (pdVar19 != pdVar18);
    }
    local_5a8 = 1.0 / (double)(int)local_418;
    local_5b8 = dVar2 * local_5a8;
    uStack_5b0 = dVar4 * local_5a8;
    local_5a8 = local_5a8 * dVar3;
    lVar12 = FUN_14494016c(lVar16,0,1);
    if ((((*(char *)(lVar12 + 0x39d) < '\0') && (*(double *)(lVar16 + 0x728) == 0.0)) &&
        (!NAN(*(double *)(lVar16 + 0x728)))) &&
       (((*(double *)(lVar16 + 0x730) == 0.0 && (!NAN(*(double *)(lVar16 + 0x730)))) &&
        ((*(double *)(lVar16 + 0x738) == 0.0 && (!NAN(*(double *)(lVar16 + 0x738)))))))) {
      FUN_147db2630(param_1,&local_5b8);
    }
    pplVar14 = local_420;
    if (local_420 == (longlong **)0x0) {
      pplVar14 = &local_5a0;
    }
    if ((bVar17 & 1) == 0) {
      FUN_147db1d48(param_1,pplVar14,local_418 & 0xffffffff);
    }
    else {
      FUN_147db20a4();
    }
    if (local_420 != (longlong **)0x0) {
      FUN_1400020a8();
    }
  }
LAB_147db236b:
  if (local_90 != (double *)0x0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_5d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147db2630 FUN_147db2630 body=232 status=ok
// SIG undefined FUN_147db2630(void)

void FUN_147db2630(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  undefined1 auStack_58 [44];
  int local_2c;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != 0) {
    lVar3 = FUN_144a7757c();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) goto LAB_147db2677;
  }
  lVar4 = 0;
LAB_147db2677:
  dVar1 = *param_2;
  dVar2 = param_2[1];
  if (*(char *)(param_1 + 0x61) == '\0') {
    dVar5 = 0.0;
  }
  else {
    dVar5 = param_2[2];
  }
  if ((double)(*(float *)(param_1 + 100) * *(float *)(param_1 + 100)) <
      dVar5 * dVar5 + dVar1 * dVar1 + dVar2 * dVar2) {
    local_2c = (int)dVar1 + *(int *)(lVar4 + 0x710);
    local_28 = (int)dVar2 + *(int *)(lVar4 + 0x714);
    local_24 = (int)dVar5 + *(int *)(lVar4 + 0x718);
    FUN_147dab1a0(lVar4);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db271a FUN_147db271a body=122 status=ok
// SIG undefined FUN_147db271a(void)

undefined8 FUN_147db271a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (0 < (longlong)*(int *)(param_1 + 0x40)) {
    lVar1 = *(longlong *)(param_1 + 0x38);
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + uVar3 * 200) == param_2) {
LAB_147db2767:
        if (*(char *)(lVar1 + 0x88 + (uVar3 & 0xffffffff) * 200) != '\x01') {
          return 0;
        }
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + (uVar3 & 0xffffffff) * 8);
        return CONCAT71((int7)((ulonglong)lVar1 >> 8),(*(byte *)(lVar1 + 0x10a) & 0x10) == 0);
      }
      lVar5 = uVar3 * 200 + lVar1;
      lVar4 = (longlong)*(int *)(lVar5 + 0x10);
      if (lVar4 != 0) {
        lVar2 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar5 + 8) + lVar2) == param_2) goto LAB_147db2767;
          lVar2 = lVar2 + 8;
        } while (lVar4 * 8 != lVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != (longlong)*(int *)(param_1 + 0x40));
  }
  return 0;
}



// FUNCTION 147db2794 FUN_147db2794 body=119 status=ok
// SIG undefined FUN_147db2794(void)

void FUN_147db2794(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  double local_40;
  double local_38;
  double local_30;
  int local_24;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147db280c(param_1,&local_24,param_2);
  local_40 = (double)local_24;
  local_38 = (double)local_20;
  local_30 = (double)local_1c;
  FUN_14355277e(param_2,&local_40,0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db280c FUN_147db280c body=150 status=ok
// SIG undefined FUN_147db280c(void)

int * FUN_147db280c(longlong param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  lVar6 = *(longlong *)(param_1 + 0x20);
  if (lVar6 != 0) {
    lVar3 = FUN_144a7757c();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) goto LAB_147db2844;
  }
  lVar6 = 0;
LAB_147db2844:
  lVar3 = FUN_144a79778(param_3);
  iVar4 = (int)DAT_14c9a5298;
  iVar5 = DAT_14c9a5298._4_4_;
  iVar7 = DAT_14c9a52a0;
  if ((*(longlong *)(lVar3 + 0x48) != 0) &&
     (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x48) + 0x30), lVar3 != 0)) {
    iVar4 = *(int *)(lVar3 + 0xc);
    iVar5 = *(int *)(lVar3 + 0x10);
    iVar7 = *(int *)(lVar3 + 0x14);
  }
  iVar1 = *(int *)(lVar6 + 0x714);
  iVar2 = *(int *)(lVar6 + 0x718);
  *param_2 = iVar4 - *(int *)(lVar6 + 0x710);
  param_2[1] = iVar5 - iVar1;
  param_2[2] = iVar7 - iVar2;
  return param_2;
}



// FUNCTION 147db28a2 FUN_147db28a2 body=131 status=ok
// SIG undefined FUN_147db28a2(void)

void FUN_147db28a2(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  double local_40;
  double dStack_38;
  double local_30;
  int local_24;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147db280c(param_1,&local_24,param_2);
  local_30 = -(double)local_1c;
  local_40 = -(double)local_24;
  dStack_38 = -(double)local_20;
  FUN_14355277e(param_2,&local_40,0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db293c FUN_147db293c body=173 status=ok
// SIG undefined FUN_147db293c(void)

void FUN_147db293c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = 0;
  FUN_147dbadd9(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db29f0 FUN_147db29f0 body=262 status=ok
// SIG undefined FUN_147db29f0(void)

void FUN_147db29f0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = 0;
  FUN_147dbadd9(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db2af8 FUN_147db2af8 body=156 status=ok
// SIG undefined FUN_147db2af8(void)

void FUN_147db2af8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14765b906(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db2bc4 FUN_147db2bc4 body=247 status=ok
// SIG undefined FUN_147db2bc4(void)

void FUN_147db2bc4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_88 [32];
  longlong local_68;
  ulonglong uStack_60;
  undefined1 local_58 [48];
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_68 = 0;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = 0;
  FUN_147dbadd9(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db2ce4 FUN_147db2ce4 body=151 status=ok
// SIG undefined FUN_147db2ce4(void)

void FUN_147db2ce4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db2d7c FUN_147db2d7c body=151 status=ok
// SIG undefined FUN_147db2d7c(void)

void FUN_147db2d7c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db2e14 FUN_147db2e14 body=151 status=ok
// SIG undefined FUN_147db2e14(void)

void FUN_147db2e14(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db2eac FUN_147db2eac body=151 status=ok
// SIG undefined FUN_147db2eac(void)

void FUN_147db2eac(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db3086 FUN_147db3086 body=102 status=ok
// SIG undefined FUN_147db3086(void)

undefined8 * FUN_147db3086(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_14ab0c380;
  param_1[1] = *param_2;
  lVar1 = param_2[1];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  param_1[3] = param_3;
  lVar1 = FUN_14479d2ce(*param_2 + 8);
  param_1[4] = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  return param_1;
}



// FUNCTION 147db30ec FUN_147db30ec body=218 status=ok
// SIG undefined FUN_147db30ec(void)

undefined8 FUN_147db30ec(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147db32ba(param_1,local_38);
  FUN_147db3333(local_68,param_1);
  FUN_1467acaa6(local_58,local_68,L"_Generated_/",0xb);
  FUN_144a882a8(local_48,local_58,&DAT_149e065c6);
  FUN_1401c7f3e(param_2,local_48,local_38);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db31d8 FUN_147db31d8 body=91 status=ok
// SIG undefined FUN_147db31d8(void)

void FUN_147db31d8(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x20,0,0);
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x30,0,0);
                    /* WARNING: Could not recover jumptable at 0x000147db3230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x38,0,0);
  return;
}



// FUNCTION 147db327a FUN_147db327a body=64 status=ok
// SIG undefined FUN_147db327a(void)

void FUN_147db327a(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  FUN_14379796a(param_1,param_2,0);
  (**(code **)(*param_1 + 0x28))(param_1,param_2);
  cVar1 = FUN_147db34cc(param_1);
  if ((cVar1 == '\0') && ((int)param_1[0xe] == 3)) {
    *(undefined4 *)(param_1 + 0xe) = 1;
  }
  return;
}



// FUNCTION 147db32ba FUN_147db32ba body=120 status=ok
// SIG undefined FUN_147db32ba(void)

undefined8 FUN_147db32ba(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_1407c869a(*(longlong *)(param_1 + 0x20) + 0x3c,local_28,9);
  FUN_140ba7826(param_2,L"StreamingObject_",local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db3333 FUN_147db3333 body=407 status=ok
// SIG undefined FUN_147db3333(void)

undefined8 FUN_147db3333(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_878 [32];
  longlong local_858;
  int local_850;
  undefined2 *local_848;
  undefined8 *local_840;
  ulonglong *local_838;
  char local_830;
  undefined2 local_828;
  undefined8 local_826 [255];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_878;
  local_848 = &local_828;
  local_830 = '\0';
  local_838 = &local_28;
  local_828 = 0x2f;
  local_840 = local_826;
  FUN_147db383a(*(undefined8 *)(param_2 + 0x20),&local_858);
  iVar1 = local_850 + -1;
  if (local_850 == 0) {
    iVar1 = 0;
  }
  FUN_1449668a2(&local_848,local_858,iVar1);
  if (local_858 != 0) {
    FUN_1400020a8();
  }
  if (local_838 <= local_840 + 1) {
    FUN_140213274(&local_848,4);
  }
  *local_840 = 0x2f00420043002f;
  local_840 = local_840 + 1;
  FUN_147db3976(&local_858,param_2);
  iVar1 = local_850 + -1;
  if (local_850 == 0) {
    iVar1 = 0;
  }
  FUN_1449668a2(&local_848,local_858,iVar1);
  if (local_858 != 0) {
    FUN_1400020a8();
  }
  if (local_838 <= (ulonglong *)((longlong)local_840 + 2)) {
    FUN_140213274(&local_848,1);
  }
  *(undefined2 *)local_840 = 0x2f;
  *(undefined2 *)((longlong)local_840 + 2) = 0;
  local_840 = (undefined8 *)((longlong)local_840 + 2);
  FUN_140056680(param_1,local_848);
  FUN_1401ae99a(param_1);
  if (local_830 == '\x01') {
    FUN_1400020a8(local_848);
  }
  if ((local_28 ^ (ulonglong)auStack_878) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db34cc FUN_147db34cc body=290 status=ok
// SIG undefined FUN_147db34cc(void)

undefined4 FUN_147db34cc(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined8 uVar4;
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
  plVar1 = param_1 + 2;
  plVar2 = param_1 + 4;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = plVar2;
  if ((int)param_1[7] == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar5 = (int)param_1[7];
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 == iVar5) && (uStack_50 == plVar2)) {
    uVar3 = 0;
  }
  else {
    do {
      uVar4 = FUN_14479d2ce((longlong)iStack_64 * 0x14 + *local_80);
      uVar3 = (**(code **)(*param_1 + 0x10))(param_1,uVar4);
      if ((char)uVar3 != '\0') break;
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 ||
             ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar2 || iStack_64 != iVar5));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 147db35f0 FUN_147db35f0 body=29 status=ok
// SIG undefined FUN_147db35f0(void)

bool FUN_147db35f0(longlong param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*(int *)(param_1 + 0x70) == 2) {
    iVar1 = FUN_147db360e();
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 147db360e FUN_147db360e body=150 status=ok
// SIG undefined FUN_147db360e(void)

undefined4 FUN_147db360e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_14485c47a(&local_28);
  local_20 = local_28;
  iVar2 = FUN_147dbb186((longlong *)(param_1 + 0x10),
                        (uint)((ulonglong)local_28 >> 0x20) ^ (uint)local_28);
  if (iVar2 == -1) {
    uVar3 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0x14;
    puVar4 = (undefined4 *)(lVar1 + 8);
    uVar3 = 0;
    if (puVar4 != (undefined4 *)0x0 && lVar1 != 0) {
      uVar3 = *puVar4;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db36a6 FUN_147db36a6 body=29 status=ok
// SIG undefined FUN_147db36a6(void)

bool FUN_147db36a6(longlong param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*(int *)(param_1 + 0x70) == 2) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_147db360e();
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}



// FUNCTION 147db36c4 FUN_147db36c4 body=128 status=ok
// SIG undefined FUN_147db36c4(void)

undefined8 FUN_147db36c4(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  
  if ((*(int *)(param_2 + 0x28) == 0) &&
     (plVar2 = *(longlong **)(param_2 + 0x10), plVar2 != (longlong *)0x0)) {
    iVar6 = (int)plVar2[1];
    do {
      if (iVar6 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar7 = iVar6 == iVar4;
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar7);
    plVar3 = *(longlong **)(param_2 + 8);
    bVar7 = true;
    if ((plVar3 != (longlong *)0x0) &&
       (cVar5 = (**(code **)(*plVar3 + 8))(plVar3,*(undefined8 *)(param_1 + 0x10)), cVar5 != '\0'))
    {
      FUN_1437977a8(param_2);
      bVar7 = false;
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
    if (!bVar7) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 147db3744 FUN_147db3744 body=78 status=ok
// SIG undefined FUN_147db3744(void)

undefined8 FUN_147db3744(undefined8 param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined7 uVar4;
  byte bVar5;
  
  uVar2 = FUN_144a7757c();
  lVar3 = FUN_144a78ede(param_1,uVar2);
  bVar5 = (byte)param_1;
  if (((*(longlong *)(lVar3 + 0x30) == 0) ||
      (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x2b0), lVar3 == 0)) ||
     (bVar5 = 0, *(longlong *)(lVar3 + 0x3f0) == 0)) {
    bVar1 = 0;
    uVar4 = 0;
  }
  else {
    uVar2 = FUN_14090251e();
    bVar5 = (byte)uVar2;
    uVar4 = (undefined7)((ulonglong)uVar2 >> 8);
    bVar1 = 1;
  }
  return CONCAT71(uVar4,bVar1 & bVar5);
}



// FUNCTION 147db3792 FUN_147db3792 body=29 status=ok
// SIG undefined FUN_147db3792(void)

void FUN_147db3792(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143797b5a();
  FUN_147db36c4(param_1,uVar1);
  return;
}



// FUNCTION 147db37b0 FUN_147db37b0 body=121 status=ok
// SIG undefined FUN_147db37b0(void)

void FUN_147db37b0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar1 = *param_1;
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar6);
      lVar3 = *(longlong *)(lVar2 + 0x20);
      lVar5 = FUN_14479d2ce(param_2 + 8);
      if (lVar3 == lVar5) {
        if (lVar2 == 0) {
          return;
        }
        FUN_143797c20(param_1,lVar2);
        return;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar6);
  }
  return;
}



// FUNCTION 147db383a FUN_147db383a body=131 status=ok
// SIG undefined FUN_147db383a(void)

undefined8 FUN_147db383a(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_144b00ba4();
  local_28 = *(undefined8 *)(lVar1 + 0x18);
  FUN_1400021e4(&local_28,local_38);
  FUN_146871c70(&local_28,local_38,1);
  FUN_1400021e4(&local_28,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db38c6 FUN_147db38c6 body=175 status=ok
// SIG undefined FUN_147db38c6(void)

undefined8 FUN_147db38c6(undefined8 param_1)

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
  local_b8 = FUN_1459d5d18();
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



// FUNCTION 147db3976 FUN_147db3976 body=405 status=ok
// SIG undefined FUN_147db3976(void)

undefined8 FUN_147db3976(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_8c8 [32];
  undefined1 local_8a8;
  longlong local_898;
  undefined8 uStack_890;
  longlong local_888;
  undefined8 uStack_880;
  longlong local_878 [3];
  longlong local_860 [2];
  undefined2 *local_850;
  undefined2 *local_848;
  ulonglong *local_840;
  char local_838;
  undefined2 local_830 [1024];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_8c8;
  lVar1 = FUN_144b00ba4(*(undefined8 *)(param_2 + 0x18));
  local_850 = *(undefined2 **)(lVar1 + 0x18);
  FUN_1400021e4(&local_850,local_860);
  local_878[0] = 0;
  local_878[1] = 0;
  local_888 = 0;
  uStack_880 = 0;
  local_898 = 0;
  uStack_890 = 0;
  local_8a8 = 0;
  FUN_146870ed0(local_860,local_878,&local_888,&local_898);
  local_850 = local_830;
  local_838 = '\0';
  local_840 = &local_30;
  iVar2 = (int)uStack_880 + -1;
  if ((int)uStack_880 == 0) {
    iVar2 = 0;
  }
  local_848 = local_850;
  FUN_1449668a2(&local_850,local_888,iVar2);
  iVar2 = (int)uStack_890 + -1;
  if ((int)uStack_890 == 0) {
    iVar2 = 0;
  }
  FUN_1449668a2(&local_850,local_898,iVar2);
  if (local_840 <= local_848 + 1) {
    FUN_140213274(&local_850,1);
  }
  *local_848 = 0x2f;
  local_848[1] = 0;
  local_848 = local_848 + 1;
  FUN_140056680(param_1,local_850);
  if (local_838 == '\x01') {
    FUN_1400020a8(local_850);
  }
  if (local_898 != 0) {
    FUN_1400020a8();
  }
  if (local_888 != 0) {
    FUN_1400020a8();
  }
  if (local_878[0] != 0) {
    FUN_1400020a8();
  }
  if (local_860[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_8c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db3b0c FUN_147db3b0c body=140 status=ok
// SIG undefined FUN_147db3b0c(void)

longlong * FUN_147db3b0c(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x88,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ab18a30;
  FUN_143797836(plVar3 + 2,param_3,param_4);
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



// FUNCTION 147db3ba0 FUN_147db3ba0 body=446 status=ok
// SIG undefined FUN_147db3ba0(void)

void FUN_147db3ba0(longlong param_1,longlong param_2,undefined8 param_3,double *param_4)

{
  undefined8 uVar1;
  double dVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_c8 [32];
  double *local_a8;
  float *local_a0;
  double *local_90;
  undefined8 *local_88;
  double *local_80;
  float *local_78;
  float local_6c;
  double local_68;
  double dStack_60;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_50 = param_3;
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    uVar4 = 0;
    lVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + uVar4) + 0x10) == param_2) {
        if (((int)(~uVar4 >> 3) != 0) &&
           (plVar7 = (longlong *)(*(longlong *)(param_1 + 0x28) + (lVar3 >> 0x20) * 8),
           plVar7 != (longlong *)0x0)) {
          lVar3 = (longlong)(int)((longlong *)*plVar7)[1];
          if (lVar3 != 0) {
            local_68 = *param_4;
            dStack_60 = param_4[1];
            local_6c = 0.0;
            lVar5 = 0;
            dVar2 = 10.0;
            goto LAB_147db3c76;
          }
        }
        break;
      }
      lVar3 = lVar3 + 0x100000000;
      uVar4 = uVar4 + 8;
    } while ((longlong)*(int *)(param_1 + 0x30) * 8 != uVar4);
  }
LAB_147db3c04:
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_147db3c76:
  if (*(int *)(*(longlong *)(*(longlong *)*plVar7 + lVar5) + 0x28) == 3) {
    uVar1 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
    FUN_140056680(&local_90,L"Injected Content Bundles");
    local_a8 = &local_68;
    local_a0 = &local_6c;
    FUN_147dc1086(param_3,&local_90,uVar1,&DAT_149e1e2d8);
    if (local_90 != (double *)0x0) {
      FUN_1400020a8();
    }
    local_88 = &local_50;
    lVar3 = (longlong)(int)((longlong *)*plVar7)[1];
    local_90 = param_4;
    local_80 = &local_68;
    local_78 = &local_6c;
    if (lVar3 != 0) {
      lVar5 = *(longlong *)*plVar7;
      lVar6 = 0;
      do {
        local_48 = *(undefined8 *)(lVar5 + lVar6);
        FUN_1437a223e(&local_90,&local_48);
        lVar6 = lVar6 + 8;
      } while (lVar3 * 8 != lVar6);
    }
    dVar2 = (double)(local_6c + 10.0);
LAB_147db3c8a:
    *param_4 = dVar2 + *param_4;
    goto LAB_147db3c04;
  }
  lVar5 = lVar5 + 8;
  if (lVar3 * 8 == lVar5) goto LAB_147db3c8a;
  goto LAB_147db3c76;
}



// FUNCTION 147db3d60 FUN_147db3d60 body=252 status=ok
// SIG undefined FUN_147db3d60(void)

undefined8 FUN_147db3d60(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  if ((longlong)*(int *)(param_1 + 0x30) == 0) {
LAB_147db3dca:
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    uVar6 = 0;
    lVar5 = 0;
    do {
      if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + uVar6) + 0x10) == param_2) {
        if (((int)(~uVar6 >> 3) == 0) ||
           (plVar4 = (longlong *)(*(longlong *)(param_1 + 0x28) + (lVar5 >> 0x20) * 8),
           plVar4 == (longlong *)0x0)) goto LAB_147db3dca;
        plVar4 = (longlong *)*plVar4;
        local_50 = &local_40;
        lVar5 = (longlong)(int)plVar4[1];
        local_48 = param_3;
        if (lVar5 == 0) goto LAB_147db3dca;
        lVar1 = *plVar4;
        lVar7 = 0;
        goto LAB_147db3e2f;
      }
      lVar5 = lVar5 + 0x100000000;
      uVar6 = uVar6 + 8;
    } while ((longlong)*(int *)(param_1 + 0x30) * 8 != uVar6);
  }
  goto LAB_147db3dcc;
  while (bVar8 = lVar5 * 8 + -8 != lVar7, lVar7 = lVar7 + 8, bVar8) {
LAB_147db3e2f:
    local_38 = *(undefined8 *)(lVar1 + lVar7);
    cVar2 = FUN_1437a2388(&local_50,&local_38);
    uVar3 = local_40;
    if (cVar2 == '\0') break;
  }
LAB_147db3dcc:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
    local_40 = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 147db3e68 FUN_147db3e68 body=176 status=ok
// SIG undefined FUN_147db3e68(void)

void FUN_147db3e68(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  plVar1 = &local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = *plVar1 == *(longlong *)(param_1 + 0x18);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db404a FUN_147db404a body=41 status=ok
// SIG undefined FUN_147db404a(void)

void FUN_147db404a(longlong param_1)

{
  FUN_1446e0b6e();
  if (*(longlong *)(param_1 + 0x40) == 0) {
    return;
  }
  FUN_147db4074(*(longlong *)(param_1 + 0x40),param_1);
  return;
}



// FUNCTION 147db4074 FUN_147db4074 body=120 status=ok
// SIG undefined FUN_147db4074(void)

void FUN_147db4074(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar1 + 1U) {
    FUN_147dbc294((longlong *)(param_1 + 0x48),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
    return;
  }
  return;
}



// FUNCTION 147db4104 FUN_147db4104 body=41 status=ok
// SIG undefined FUN_147db4104(void)

void FUN_147db4104(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2a0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147db4132 FUN_147db4132 body=75 status=ok
// SIG undefined FUN_147db4132(void)

void FUN_147db4132(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_140aed08c();
  lVar2 = FUN_144a78ede(param_1,uVar1);
  if ((lVar2 == 0) && (*(char *)(param_1 + 0x30) == '\0')) {
    bVar3 = *(char *)(param_1 + 0x38) == '\x01';
  }
  else {
    bVar3 = false;
  }
  *param_3 = bVar3;
  return;
}



// FUNCTION 147db4182 FUN_147db4182 body=69 status=ok
// SIG undefined FUN_147db4182(void)

void FUN_147db4182(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_140aed08c();
  lVar2 = FUN_144a78ede(param_1,uVar1);
  if (lVar2 == 0) {
    bVar3 = *(char *)(param_1 + 0x30) == '\0';
  }
  else {
    bVar3 = false;
  }
  *param_3 = bVar3;
  return;
}



// FUNCTION 147db41cc FUN_147db41cc body=75 status=ok
// SIG undefined FUN_147db41cc(void)

void FUN_147db41cc(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_140aed08c();
  lVar2 = FUN_144a78ede(param_1,uVar1);
  if ((lVar2 == 0) && (*(char *)(param_1 + 0x30) == '\0')) {
    bVar3 = *(char *)(param_1 + 0x38) == '\x02';
  }
  else {
    bVar3 = false;
  }
  *param_3 = bVar3;
  return;
}



// FUNCTION 147db4220 FUN_147db4220 body=42 status=ok
// SIG undefined FUN_147db4220(void)

void FUN_147db4220(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x308))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147db424a FUN_147db424a body=143 status=ok
// SIG undefined FUN_147db424a(void)

void FUN_147db424a(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2d8))(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db42da FUN_147db42da body=143 status=ok
// SIG undefined FUN_147db42da(void)

void FUN_147db42da(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2d0))(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db436a FUN_147db436a body=90 status=ok
// SIG undefined FUN_147db436a(void)

void FUN_147db436a(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2c8))(param_1,&local_1c);
  *param_3 = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db43c6 FUN_147db43c6 body=57 status=ok
// SIG undefined FUN_147db43c6(void)

void FUN_147db43c6(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x2b0))();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (undefined1)param_1[5];
  }
  *param_3 = uVar2;
  return;
}



// FUNCTION 147db4400 FUN_147db4400 body=41 status=ok
// SIG undefined FUN_147db4400(void)

void FUN_147db4400(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2a8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147db442e FUN_147db442e body=41 status=ok
// SIG undefined FUN_147db442e(void)

void FUN_147db442e(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2b8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147db4490 FUN_147db4490 body=41 status=ok
// SIG undefined FUN_147db4490(void)

void FUN_147db4490(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2b0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147db44be FUN_147db44be body=41 status=ok
// SIG undefined FUN_147db44be(void)

void FUN_147db44be(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2c0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147db4504 FUN_147db4504 body=29 status=ok
// SIG undefined FUN_147db4504(void)

void FUN_147db4504(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144a7757c();
  FUN_144a78ede(param_1,uVar1);
  return;
}



// FUNCTION 147db4522 FUN_147db4522 body=115 status=ok
// SIG undefined FUN_147db4522(void)

void FUN_147db4522(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = (**(code **)(*param_1 + 0x2a0))();
  if (*(longlong *)(lVar1 + 0x30) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x30) + 0x2b8);
  }
  (**(code **)(*param_1 + 0x310))(param_1,&local_28);
  FUN_143797fc8(uVar2,local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db459e FUN_147db459e body=39 status=ok
// SIG undefined FUN_147db459e(void)

undefined8 FUN_147db459e(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x20))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147db45b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x308))(plVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 147db45ce FUN_147db45ce body=50 status=ok
// SIG undefined FUN_147db45ce(void)

undefined8 FUN_147db45ce(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_144a7757c();
  lVar2 = FUN_144a78ede(param_1,uVar1);
  if (*(longlong *)(lVar2 + 0x30) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 0x2b8);
  }
  return uVar1;
}



// FUNCTION 147db4600 FUN_147db4600 body=92 status=ok
// SIG undefined FUN_147db4600(void)

undefined8 * FUN_147db4600(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  code *local_20;
  undefined8 **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  param_2[1] = 0;
  local_18 = &local_28;
  local_20 = FUN_1437a2c80;
  local_28 = param_2;
  FUN_140bc66fe();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db465e thunk_FUN_147db4664 body=5 status=ok
// SIG undefined thunk_FUN_147db4664(void)

undefined8 thunk_FUN_147db4664(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_144a7757c();
  lVar2 = FUN_144a78ede(param_1,uVar1);
  if ((*(longlong *)(lVar2 + 0x30) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x2b8), lVar2 != 0)) {
    uVar1 = FUN_1414a418c(lVar2,param_2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 147db4664 FUN_147db4664 body=72 status=ok
// SIG undefined FUN_147db4664(void)

undefined8 FUN_147db4664(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_144a7757c();
  lVar2 = FUN_144a78ede(param_1,uVar1);
  if ((*(longlong *)(lVar2 + 0x30) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x2b8), lVar2 != 0)) {
    uVar1 = FUN_1414a418c(lVar2,param_2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 147db46ac FUN_147db46ac body=72 status=ok
// SIG undefined FUN_147db46ac(void)

undefined8 FUN_147db46ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_144a7757c();
  lVar2 = FUN_144a78ede(param_1,uVar1);
  if ((*(longlong *)(lVar2 + 0x30) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x2b8), lVar2 != 0)) {
    uVar1 = FUN_147db46f4(lVar2,param_2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 147db46f4 FUN_147db46f4 body=178 status=ok
// SIG undefined FUN_147db46f4(void)

undefined8 FUN_147db46f4(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(param_2,&local_30);
  puVar5 = local_30;
  if (local_28 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  uVar6 = 0;
  uVar4 = (ulonglong)(local_28 - 1);
  if (local_28 == 0) {
    uVar4 = uVar6;
  }
  uVar1 = FUN_144a49b4a(uVar4,puVar5);
  iVar2 = FUN_1411ac920((longlong *)(param_1 + 1000),uVar1,&local_30);
  if (iVar2 != -1) {
    uVar6 = (longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 1000);
  }
  puVar7 = (undefined8 *)(uVar6 + 0x10);
  if (uVar6 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (puVar7 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar7;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 147db47a8 FUN_147db47a8 body=143 status=ok
// SIG undefined FUN_147db47a8(void)

undefined8 FUN_147db47a8(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  byte bVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    local_28 = param_2;
    plVar2 = (longlong *)FUN_1411ac5e8(param_1,&local_28);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x2a0))(plVar2);
      if (*(longlong *)(lVar3 + 0x30) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + 0x2b8);
      }
      uVar4 = FUN_1411ada6c(uVar4,plVar2,param_3,param_4);
      bVar6 = (byte)uVar4;
      uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
      bVar1 = 1;
      goto LAB_147db4813;
    }
  }
  bVar6 = (byte)param_1;
  bVar1 = 0;
  uVar5 = 0;
LAB_147db4813:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT71(uVar5,bVar1 & bVar6);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db4838 FUN_147db4838 body=219 status=ok
// SIG undefined FUN_147db4838(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147db4838(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb110e8) {
    FUN_144b3d300(&DAT_14cb110e8);
    if (DAT_14cb110e8 == -1) {
      DAT_14cb110b8 = 0;
      _DAT_14cb110c0 = 0;
      DAT_14cb11098 = 0;
      _DAT_14cb110a0 = 0;
      _DAT_14cb110c4 = 0xffffffff00000080;
      _DAT_14cb110cc = 0;
      DAT_14cb110d8 = 0;
      _DAT_14cb110e0 = 0;
      atexit(FUN_14379853e);
      _Init_thread_footer(&DAT_14cb110e8);
    }
  }
  uVar1 = FUN_144a7757c();
  lVar2 = FUN_144a78ede(param_1,uVar1);
  if ((*(longlong *)(lVar2 + 0x30) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x2b8), lVar2 != 0)) {
    puVar3 = (undefined8 *)FUN_140044908(lVar2 + 0x720);
    return puVar3;
  }
  return &DAT_14cb11098;
}



// FUNCTION 147db4914 FUN_147db4914 body=556 status=ok
// SIG undefined FUN_147db4914(void)

ulonglong FUN_147db4914(longlong *param_1,char param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  uint uVar9;
  
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_2 == '\x01') {
    if ((longlong)(int)param_1[1] != 0) {
      plVar7 = (longlong *)*param_1;
      plVar1 = plVar7 + (int)param_1[1];
      do {
        plVar4 = (longlong *)FUN_140044908(param_3);
        if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
          lVar2 = *plVar7;
          uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
          uVar9 = (uint)lVar2 & 0xffff;
          plVar6 = plVar4 + 7;
          if ((longlong *)plVar4[8] != (longlong *)0x0) {
            plVar6 = (longlong *)plVar4[8];
          }
          iVar5 = *(int *)((longlong)plVar6 +
                          (ulonglong)
                          ((int)plVar4[9] - 1U &
                          (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar9) +
                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
          if (iVar5 != -1) {
            do {
              if (*(longlong *)(*plVar4 + (longlong)iVar5 * 0x10) == lVar2) goto LAB_147db4b23;
              iVar5 = *(int *)((longlong)iVar5 * 0x10 + *plVar4 + 8);
            } while (iVar5 != -1);
          }
        }
        plVar4 = (longlong *)FUN_140899162(param_3);
        if ((int)plVar4[1] == *(int *)((longlong)plVar4 + 0x34)) goto LAB_147db4b32;
        lVar2 = *plVar7;
        uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
        uVar9 = (uint)lVar2 & 0xffff;
        plVar6 = plVar4 + 7;
        if ((longlong *)plVar4[8] != (longlong *)0x0) {
          plVar6 = (longlong *)plVar4[8];
        }
        iVar5 = *(int *)((longlong)plVar6 +
                        (ulonglong)
                        ((int)plVar4[9] - 1U &
                        (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar9) +
                        (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
        if (iVar5 == -1) goto LAB_147db4b32;
        while (*(longlong *)(*plVar4 + (longlong)iVar5 * 0x10) != lVar2) {
          iVar5 = *(int *)((longlong)iVar5 * 0x10 + *plVar4 + 8);
          if (iVar5 == -1) goto LAB_147db4b32;
        }
LAB_147db4b23:
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar1);
    }
  }
  else if ((param_2 == '\x02') && ((longlong)(int)param_1[1] != 0)) {
    plVar7 = (longlong *)*param_1;
    plVar1 = plVar7 + (int)param_1[1];
    do {
      plVar4 = (longlong *)FUN_140899162(param_3);
      if ((int)plVar4[1] == *(int *)((longlong)plVar4 + 0x34)) goto LAB_147db4b32;
      lVar2 = *plVar7;
      uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
      uVar9 = (uint)lVar2 & 0xffff;
      plVar6 = plVar4 + 7;
      if ((longlong *)plVar4[8] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar4[8];
      }
      iVar5 = *(int *)((longlong)plVar6 +
                      (ulonglong)
                      ((int)plVar4[9] - 1U &
                      (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar9) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
      if (iVar5 == -1) goto LAB_147db4b32;
      while (*(longlong *)(*plVar4 + (longlong)iVar5 * 0x10) != lVar2) {
        iVar5 = *(int *)((longlong)iVar5 * 0x10 + *plVar4 + 8);
        if (iVar5 == -1) goto LAB_147db4b32;
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar1);
  }
LAB_147db4b34:
  return uVar8 & 0xffffffff;
LAB_147db4b32:
  uVar8 = 0;
  goto LAB_147db4b34;
}



// FUNCTION 147db4b40 FUN_147db4b40 body=70 status=ok
// SIG undefined FUN_147db4b40(void)

void FUN_147db4b40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_144a7757c();
  lVar2 = FUN_144a78ede(param_1,uVar1);
  if ((*(longlong *)(lVar2 + 0x30) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x2b8), lVar2 != 0)) {
    FUN_147db4b86(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 147db4b86 FUN_147db4b86 body=488 status=ok
// SIG undefined FUN_147db4b86(void)

void FUN_147db4b86(code *param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined8 local_50;
  code *local_48;
  code **local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1468161aa(param_2,L"====================================================");
  local_58 = *(code **)(param_1 + 0x18);
  FUN_1400021e4(&local_58,&local_48);
  pcVar4 = local_48;
  if ((int)local_40 == 0) {
    pcVar4 = (code *)&DAT_149dfb77a;
  }
  FUN_140047918(param_2,L" Data Layers for %s",pcVar4);
  if (local_48 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_1468161aa(param_2,L"====================================================");
  FUN_1468161aa(param_2,&DAT_149dfb77a);
  lVar2 = FUN_1447210f0(param_1);
  bVar1 = *(byte *)(lVar2 + 0x152);
  if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
    pcVar4 = param_1 + 0x720;
    local_48 = param_1;
    local_40 = (code **)param_2;
    lVar2 = FUN_140044908(pcVar4);
    if ((*(int *)(lVar2 + 8) != *(int *)(lVar2 + 0x34)) ||
       (lVar2 = FUN_140899162(pcVar4), *(int *)(lVar2 + 8) != *(int *)(lVar2 + 0x34))) {
      FUN_1468161aa(param_2,L"----------------------------------------------------");
      FUN_1468161aa(param_2,L" Data Layers Runtime States");
      uVar3 = FUN_140044908(pcVar4);
      FUN_14379d7ac(&local_48,L"Loaded",uVar3);
      uVar3 = FUN_140899162(pcVar4);
      FUN_14379d7ac(&local_48,L"Active",uVar3);
      FUN_1468161aa(param_2,L"----------------------------------------------------");
      FUN_1468161aa(param_2,&DAT_149dfb77a);
    }
  }
  FUN_1468161aa(param_2,L"----------------------------------------------------");
  FUN_1468161aa(param_2,L" Data Layers Hierarchy");
  local_48 = FUN_1437a3150;
  local_58 = param_1;
  local_50 = param_2;
  local_40 = &local_58;
  FUN_140bc6ada(param_1);
  FUN_1468161aa(param_2,L"----------------------------------------------------");
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147db4d70 FUN_147db4d70 body=1603 status=ok
// SIG undefined FUN_147db4d70(void)

/* WARNING: Removing unreachable block (ram,0x000147db50e7) */
/* WARNING: Removing unreachable block (ram,0x000147db521f) */
/* WARNING: Removing unreachable block (ram,0x000147db5398) */

undefined8 FUN_147db4d70(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  void *_Src;
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_548 [32];
  undefined4 local_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 *local_510;
  undefined8 local_508;
  undefined1 *local_500;
  code *local_4f8;
  undefined8 **local_4f0;
  longlong local_4e8 [2];
  undefined1 local_4d1;
  undefined1 local_4d0 [8];
  undefined8 *local_4c8;
  undefined8 uStack_4c0;
  undefined2 *local_4b8;
  undefined2 *local_4b0;
  undefined8 *local_4a8;
  char local_4a0;
  undefined2 local_498 [512];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_548;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_4b8 = local_498;
  local_4a0 = '\0';
  local_4a8 = &local_98;
  local_4c8 = (undefined8 *)0x0;
  uStack_4c0 = 0;
  local_520 = param_2;
  local_518 = param_1;
  local_4b0 = local_4b8;
  if ((longlong)*(int *)(param_3 + 1) != 0) {
    puVar7 = (undefined8 *)*param_3;
    lVar10 = (longlong)*(int *)(param_3 + 1) << 4;
    bVar2 = false;
    do {
      bVar1 = bVar2;
      if (bVar2) {
        if (local_4a8 <= local_4b0 + 1) {
          FUN_140213274(&local_4b8,1);
        }
        *local_4b0 = 0x20;
        local_4b0 = local_4b0 + 1;
        local_528 = 1;
        FUN_140807d8e(puVar7,&local_510,&DAT_149e01f5a,&DAT_149dfb77a);
        iVar11 = (int)local_508 + -1;
        if ((int)local_508 == 0) {
          iVar11 = 0;
        }
        FUN_1449668a2(&local_4b8,local_510,iVar11);
        if (local_510 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        cVar5 = FUN_144a38768(puVar7,&DAT_149e01f5a,1,1);
        if (cVar5 != '\0') {
          *local_4b0 = 0;
          FUN_140056680(&local_510,local_4b8);
          uVar4 = uStack_4c0;
          lVar9 = (longlong)(int)uStack_4c0;
          uVar6 = (int)uStack_4c0 + 1;
          uStack_4c0 = CONCAT44(uStack_4c0._4_4_,uVar6);
          if (uStack_4c0._4_4_ < uVar6) {
            FUN_1447a1bd6(&local_4c8,uVar4 & 0xffffffff);
          }
          local_4c8[lVar9 * 2] = 0;
          local_4c8[lVar9 * 2] = local_510;
          *(int *)(local_4c8 + lVar9 * 2 + 1) = (int)local_508;
          *(undefined4 *)((longlong)local_4c8 + lVar9 * 0x10 + 0xc) = local_508._4_4_;
          local_508 = (longlong *)0x0;
          local_510 = (undefined8 *)0x0;
          local_4b0 = local_4b8;
          bVar1 = false;
        }
      }
      else {
        cVar5 = FUN_144a791f8(puVar7,&DAT_149e01f5a,1,1);
        uVar4 = uStack_4c0;
        if (cVar5 == '\0') {
          lVar9 = (longlong)(int)uStack_4c0;
          uVar6 = (int)uStack_4c0 + 1;
          uStack_4c0 = CONCAT44(uStack_4c0._4_4_,uVar6);
          if (uStack_4c0._4_4_ < uVar6) {
            FUN_1447a1bd6(&local_4c8,uVar4 & 0xffffffff);
          }
          puVar8 = local_4c8 + lVar9 * 2;
          local_4c8[lVar9 * 2] = 0;
          iVar11 = *(int *)(puVar7 + 1);
          _Src = (void *)*puVar7;
          *(int *)(local_4c8 + lVar9 * 2 + 1) = iVar11;
          if ((longlong)iVar11 == 0) {
            *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar8,iVar11,0);
            memcpy((void *)*puVar8,_Src,(longlong)iVar11 * 2);
          }
        }
        else {
          local_528 = 1;
          FUN_140807d8e(puVar7,&local_510,&DAT_149e01f5a,&DAT_149dfb77a);
          iVar11 = (int)local_508 + -1;
          if ((int)local_508 == 0) {
            iVar11 = 0;
          }
          FUN_1449668a2(&local_4b8,local_510,iVar11);
          if (local_510 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          cVar5 = FUN_144a38768(puVar7,&DAT_149e01f5a,1,1);
          bVar1 = true;
          if ((cVar5 != '\0') && (*(int *)(puVar7 + 1) - 3U < 0x7ffffffe)) {
            *local_4b0 = 0;
            FUN_140056680(&local_510,local_4b8);
            uVar4 = uStack_4c0;
            lVar9 = (longlong)(int)uStack_4c0;
            uVar6 = (int)uStack_4c0 + 1;
            uStack_4c0 = CONCAT44(uStack_4c0._4_4_,uVar6);
            if (uStack_4c0._4_4_ < uVar6) {
              FUN_1447a1bd6(&local_4c8,uVar4 & 0xffffffff);
            }
            local_4c8[lVar9 * 2] = 0;
            local_4c8[lVar9 * 2] = local_510;
            *(int *)(local_4c8 + lVar9 * 2 + 1) = (int)local_508;
            *(undefined4 *)((longlong)local_4c8 + lVar9 * 0x10 + 0xc) = local_508._4_4_;
            local_508 = (longlong *)0x0;
            local_510 = (undefined8 *)0x0;
            local_4b0 = local_4b8;
            bVar1 = bVar2;
          }
        }
      }
      puVar7 = puVar7 + 2;
      lVar10 = lVar10 + -0x10;
      bVar2 = bVar1;
    } while (lVar10 != 0);
    if (bVar1) {
      *local_4b0 = 0;
      FUN_140056680(&local_510,local_4b8);
      uVar4 = uStack_4c0;
      lVar10 = (longlong)(int)uStack_4c0;
      uVar6 = (int)uStack_4c0 + 1;
      uStack_4c0 = CONCAT44(uStack_4c0._4_4_,uVar6);
      if (uStack_4c0._4_4_ < uVar6) {
        FUN_1447a1bd6(&local_4c8,uVar4 & 0xffffffff);
      }
      local_4c8[lVar10 * 2] = 0;
      local_4c8[lVar10 * 2] = local_510;
      local_510 = (undefined8 *)0x0;
      *(int *)(local_4c8 + lVar10 * 2 + 1) = (int)local_508;
      *(undefined4 *)((longlong)local_4c8 + lVar10 * 0x10 + 0xc) = local_508._4_4_;
      local_508 = (longlong *)0x0;
    }
  }
  if ((longlong)(int)uStack_4c0 != 0) {
    puVar8 = local_4c8 + (longlong)(int)uStack_4c0 * 2;
    puVar7 = local_4c8;
    do {
      iVar11 = *(int *)(puVar7 + 1) + -1;
      if (*(int *)(puVar7 + 1) == 0) {
        iVar11 = 0;
      }
      FUN_1446f82e2(local_4d0,iVar11,*puVar7,1);
      local_4d1 = 0;
      FUN_1400021e4(local_4d0,&local_510);
      local_528 = 1;
      FUN_1414bc8e4(&local_510,local_4e8,&DAT_149e001d8,&DAT_149dfb77a);
      if (local_510 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      local_510 = &local_98;
      local_4f8 = FUN_1437a2e2c;
      local_508 = local_4e8;
      local_500 = &local_4d1;
      local_4f0 = &local_510;
      FUN_140bc66fe(local_518,&local_4f8);
      if (local_4e8[0] != 0) {
        FUN_1400020a8();
      }
      puVar7 = puVar7 + 2;
    } while (puVar7 != puVar8);
  }
  uVar3 = local_520;
  FUN_147db53b4(&local_98,local_520);
  FUN_1447a1747(local_4c8,uStack_4c0 & 0xffffffff);
  if (local_4c8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_4a0 == '\x01') {
    FUN_1400020a8(local_4b8);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_145cb49ca(&local_98);
  if ((local_48 ^ (ulonglong)auStack_548) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db53b4 FUN_147db53b4 body=323 status=ok
// SIG undefined FUN_147db53b4(void)

longlong * FUN_147db53b4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
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
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (iVar2 != 0) {
    FUN_14641114e(param_2);
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
      lVar3 = (longlong)iStack_54;
      lVar1 = *local_70;
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_145c15c22(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar3 * 0x10 + lVar1);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147db54fa FUN_147db54fa body=49 status=ok
// SIG undefined FUN_147db54fa(void)

void FUN_147db54fa(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147db552c();
  FUN_144881636(param_3,&DAT_14cb113d0);
  return;
}



// FUNCTION 147db552c FUN_147db552c body=152 status=ok
// SIG undefined FUN_147db552c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147db552c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb11420) {
    FUN_144b3d300(&DAT_14cb11420);
    if (DAT_14cb11420 == -1) {
      DAT_14cb113f0 = 0;
      _DAT_14cb113f8 = 0;
      DAT_14cb113d0 = 0;
      _DAT_14cb113d8 = 0;
      _DAT_14cb113fc = 0xffffffff00000080;
      _DAT_14cb11404 = 0;
      DAT_14cb11410 = 0;
      _DAT_14cb11418 = 0;
      atexit(FUN_14379e6bc);
      _Init_thread_footer(&DAT_14cb11420);
      return;
    }
  }
  return;
}



// FUNCTION 147db55c4 FUN_147db55c4 body=188 status=ok
// SIG undefined FUN_147db55c4(void)

void FUN_147db55c4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar2 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = *puVar2;
  uVar1 = FUN_147db65b8(param_1);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db5682 FUN_147db5682 body=176 status=ok
// SIG undefined FUN_147db5682(void)

void FUN_147db5682(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147db64ae(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db5734 FUN_147db5734 body=190 status=ok
// SIG undefined FUN_147db5734(void)

void FUN_147db5734(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar3 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_147db589a(param_1,*puVar3);
  uVar1 = FUN_147db647e(param_1,uVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db57f4 FUN_147db57f4 body=164 status=ok
// SIG undefined FUN_147db57f4(void)

void FUN_147db57f4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147db589a(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db589a FUN_147db589a body=91 status=ok
// SIG undefined FUN_147db589a(void)

undefined8 FUN_147db589a(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  lVar1 = FUN_144a126be();
  if ((*(longlong *)(lVar1 + 0x30) == 0) ||
     (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x2b8), lVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_147db64e8(lVar1,&local_10);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db58f6 FUN_147db58f6 body=172 status=ok
// SIG undefined FUN_147db58f6(void)

void FUN_147db58f6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_30;
  uVar1 = FUN_147db65b8(param_1);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db59a4 FUN_147db59a4 body=163 status=ok
// SIG undefined FUN_147db59a4(void)

void FUN_147db59a4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147db5a48(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db5a48 FUN_147db5a48 body=94 status=ok
// SIG undefined FUN_147db5a48(void)

undefined8 FUN_147db5a48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  uVar1 = FUN_144a126be();
  lVar2 = FUN_14103c0a0(uVar1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_1411ac5e8(lVar2,&local_10);
    uVar1 = FUN_14379840e();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db5aa8 FUN_147db5aa8 body=164 status=ok
// SIG undefined FUN_147db5aa8(void)

void FUN_147db5aa8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147db5b4e(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db5b4e FUN_147db5b4e body=86 status=ok
// SIG undefined FUN_147db5b4e(void)

undefined8 FUN_147db5b4e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  uVar1 = FUN_144a126be();
  lVar2 = FUN_14103c0a0(uVar1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1411ac5e8(lVar2,&local_10);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db5ba6 FUN_147db5ba6 body=163 status=ok
// SIG undefined FUN_147db5ba6(void)

void FUN_147db5ba6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147db5c4a(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db5c4a FUN_147db5c4a body=94 status=ok
// SIG undefined FUN_147db5c4a(void)

undefined8 FUN_147db5c4a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  uVar1 = FUN_144a126be();
  lVar2 = FUN_14103c0a0(uVar1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_1411ac5e8(lVar2,&local_10);
    uVar1 = FUN_14379838e();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db5caa FUN_147db5caa body=176 status=ok
// SIG undefined FUN_147db5caa(void)

void FUN_147db5caa(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147db6444(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db5d5c FUN_147db5d5c body=190 status=ok
// SIG undefined FUN_147db5d5c(void)

void FUN_147db5d5c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar3 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_147db589a(param_1,*puVar3);
  uVar1 = FUN_147db6414(param_1,uVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db5e1c FUN_147db5e1c body=176 status=ok
// SIG undefined FUN_147db5e1c(void)

void FUN_147db5e1c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147db6444(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db5ece FUN_147db5ece body=190 status=ok
// SIG undefined FUN_147db5ece(void)

void FUN_147db5ece(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar3 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_147db589a(param_1,*puVar3);
  uVar1 = FUN_147db6414(param_1,uVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db5f8e FUN_147db5f8e body=49 status=ok
// SIG undefined FUN_147db5f8e(void)

void FUN_147db5f8e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147db5fc0();
  FUN_144881636(param_3,&DAT_14cb11428);
  return;
}



// FUNCTION 147db5fc0 FUN_147db5fc0 body=152 status=ok
// SIG undefined FUN_147db5fc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147db5fc0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb11478) {
    FUN_144b3d300(&DAT_14cb11478);
    if (DAT_14cb11478 == -1) {
      DAT_14cb11448 = 0;
      _DAT_14cb11450 = 0;
      DAT_14cb11428 = 0;
      _DAT_14cb11430 = 0;
      _DAT_14cb11454 = 0xffffffff00000080;
      _DAT_14cb1145c = 0;
      DAT_14cb11468 = 0;
      _DAT_14cb11470 = 0;
      atexit(FUN_14379e765);
      _Init_thread_footer(&DAT_14cb11478);
      return;
    }
  }
  return;
}



// FUNCTION 147db605e FUN_147db605e body=328 status=ok
// SIG undefined FUN_147db605e(void)

void FUN_147db605e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  int local_28;
  undefined1 local_21;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14379a3e2(param_1,local_20,local_21,local_28 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db61ae FUN_147db61ae body=343 status=ok
// SIG undefined FUN_147db61ae(void)

void FUN_147db61ae(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  int local_30;
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14379a566(param_1,puVar2,local_29,local_30 != 0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db630c FUN_147db630c body=260 status=ok
// SIG undefined FUN_147db630c(void)

void FUN_147db630c(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14379a566(param_1,puVar2,local_29,0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db6414 FUN_147db6414 body=47 status=ok
// SIG undefined FUN_147db6414(void)

undefined8 FUN_147db6414(void)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_144a126be();
  lVar2 = FUN_14103c0a0(uVar1);
  if (lVar2 != 0) {
    uVar1 = FUN_14379838e();
    return uVar1;
  }
  return 0;
}



// FUNCTION 147db6444 FUN_147db6444 body=58 status=ok
// SIG undefined FUN_147db6444(void)

undefined8 FUN_147db6444(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_144a126be();
  lVar2 = FUN_14103c0a0(uVar1);
  if (lVar2 == 0) {
    return 0;
  }
  FUN_147db4664(lVar2,param_2);
  uVar1 = FUN_14379838e();
  return uVar1;
}



// FUNCTION 147db647e FUN_147db647e body=47 status=ok
// SIG undefined FUN_147db647e(void)

undefined8 FUN_147db647e(void)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_144a126be();
  lVar2 = FUN_14103c0a0(uVar1);
  if (lVar2 != 0) {
    uVar1 = FUN_14379840e();
    return uVar1;
  }
  return 0;
}



// FUNCTION 147db64ae FUN_147db64ae body=58 status=ok
// SIG undefined FUN_147db64ae(void)

undefined8 FUN_147db64ae(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_144a126be();
  lVar2 = FUN_14103c0a0(uVar1);
  if (lVar2 == 0) {
    return 0;
  }
  FUN_147db4664(lVar2,param_2);
  uVar1 = FUN_14379840e();
  return uVar1;
}



// FUNCTION 147db64e8 FUN_147db64e8 body=207 status=ok
// SIG undefined FUN_147db64e8(void)

undefined8 FUN_147db64e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  longlong local_40 [2];
  code *local_30;
  longlong **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400021e4(param_2,local_50);
  FUN_147db7834(&local_30,local_50);
  pcVar2 = local_30;
  if ((int)local_28 == 0) {
    pcVar2 = (code *)&DAT_149dfb77a;
  }
  FUN_140056680(local_40,pcVar2);
  if (local_30 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_60 = &local_58;
  local_58 = 0;
  local_28 = &local_68;
  local_30 = FUN_1437a31de;
  local_68 = local_40;
  FUN_140bc6ada(param_1);
  uVar1 = local_58;
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 147db65b8 FUN_147db65b8 body=50 status=ok
// SIG undefined FUN_147db65b8(void)

undefined8 FUN_147db65b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_144a126be();
  lVar2 = FUN_14103c0a0(uVar1);
  if (lVar2 == 0) {
    return 0;
  }
  uVar1 = FUN_147db4664(lVar2,param_2);
  return uVar1;
}



// FUNCTION 147db65f0 FUN_147db65f0 body=254 status=ok
// SIG undefined FUN_147db65f0(void)

undefined8 FUN_147db65f0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(param_2);
    }
    local_20 = param_2;
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(param_2);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(param_2);
    }
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    iVar3 = FUN_147dbcfba((longlong *)(param_1 + 0x50),uVar2 >> 0x10 ^ uVar2,&local_20);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x50);
      lVar4 = (longlong)iVar3 * 0xb8;
      if ((lVar1 + lVar4 + 8U & 0xfffffffffffffff7) != 0) {
        uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),*(char *)(lVar1 + lVar4 + 0xa8) == '\x02');
        goto LAB_147db660c;
      }
    }
  }
  uVar5 = 0;
LAB_147db660c:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db66f0 FUN_147db66f0 body=134 status=ok
// SIG undefined FUN_147db66f0(void)

undefined8 FUN_147db66f0(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_144a78877(*param_2,param_2[1]);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x10;
        if ((*(int *)(lVar1 + lVar4) == *param_2) && (*(int *)(lVar1 + 4 + lVar4) == param_2[1])) {
          FUN_147dbd090(param_1);
          return 1;
        }
        iVar2 = *(int *)(lVar4 + lVar1 + 8);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147db6776 FUN_147db6776 body=331 status=ok
// SIG undefined FUN_147db6776(void)

void FUN_147db6776(undefined8 *param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_878 [40];
  longlong local_850;
  int local_848;
  undefined2 *local_840;
  undefined8 *local_838;
  ulonglong *local_830;
  char local_828;
  undefined2 local_820;
  undefined8 local_81e [255];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_878;
  if ((1 < *(int *)(param_1 + 1)) && (*param_2 != 0)) {
    local_840 = &local_820;
    local_828 = '\0';
    local_830 = &local_20;
    local_820 = 0x2f;
    local_838 = local_81e;
    FUN_1449668a2(&local_840,*param_1,*(int *)(param_1 + 1) + -1);
    if (local_830 <= (ulonglong *)((longlong)local_838 + 10U)) {
      FUN_140213274(&local_840,5);
    }
    *local_838 = 0x4c00440045002f;
    *(undefined2 *)(local_838 + 1) = 0x2f;
    local_838 = (undefined8 *)((longlong)local_838 + 10);
    FUN_140002266(&local_850,&DAT_14a392fd8,*param_2);
    iVar1 = local_848 + -1;
    if (local_848 == 0) {
      iVar1 = 0;
    }
    FUN_1449668a2(&local_840,local_850,iVar1);
    if (local_850 != 0) {
      FUN_1400020a8();
    }
    *(undefined2 *)local_838 = 0;
    FUN_14020fad6(param_3,local_840);
    if (local_828 == '\x01') {
      FUN_1400020a8(local_840);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_878) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db68c2 FUN_147db68c2 body=186 status=ok
// SIG undefined FUN_147db68c2(void)

undefined8 FUN_147db68c2(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_144b00ba4(param_2);
  local_40[0] = *(longlong *)(lVar1 + 0x18);
  FUN_1400021e4(local_40,local_58);
  FUN_146871c70(local_48,local_58,1);
  FUN_1400021e4(local_48,local_40);
  FUN_147db697e(param_1,local_40,param_2 + 0x40,param_3);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db697e FUN_147db697e body=306 status=ok
// SIG undefined FUN_147db697e(void)

undefined8
FUN_147db697e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined1 auStack_878 [32];
  longlong local_858;
  undefined8 uStack_850;
  undefined2 *local_848;
  undefined2 *local_840;
  ulonglong *local_838;
  char local_830;
  undefined2 local_828 [1024];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_878;
  local_858 = 0;
  uStack_850 = 0;
  FUN_147db6776(param_2,param_3,&local_858);
  local_848 = local_828;
  local_830 = '\0';
  local_838 = &local_28;
  iVar1 = (int)uStack_850 + -1;
  if ((int)uStack_850 == 0) {
    iVar1 = 0;
  }
  local_840 = local_848;
  FUN_1449668a2(&local_848,local_858,iVar1);
  if (local_838 <= local_840 + 1) {
    FUN_140213274(&local_848,1);
  }
  *local_840 = 0x2f;
  local_840 = local_840 + 1;
  iVar1 = *(int *)(param_4 + 1) + -1;
  if (*(int *)(param_4 + 1) == 0) {
    iVar1 = 0;
  }
  FUN_1449668a2(&local_848,*param_4,iVar1);
  *local_840 = 0;
  FUN_140056680(param_1,local_848);
  FUN_1401ae99a(param_1);
  if (local_830 == '\x01') {
    FUN_1400020a8(local_848);
  }
  if (local_858 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_878) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db6ab8 FUN_147db6ab8 body=99 status=ok
// SIG undefined FUN_147db6ab8(void)

void FUN_147db6ab8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  undefined8 local_190;
  undefined ***local_188;
  undefined8 **local_180;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180 = &local_188;
  local_198 = &PTR_FUN_149e37810;
  local_188 = &local_198;
  local_190 = param_2;
  switchD_143c3d4dc::caseD_20(param_1,local_180);
  if ((local_8 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db6b22 FUN_147db6b22 body=111 status=ok
// SIG undefined FUN_147db6b22(void)

void FUN_147db6b22(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_145a3dd86(DAT_14cb0d2b0);
  (**(code **)(*param_1 + 0x180))(param_1);
  cVar1 = FUN_147db65f0(uVar3,param_2);
  cVar2 = FUN_147db6b92(param_1,param_2);
  if (cVar1 == cVar2) {
    return;
  }
  if (cVar1 != '\0') {
    FUN_14379bc5c();
    return;
  }
  FUN_14379b4fc(param_1,param_2);
  return;
}



// FUNCTION 147db6b92 FUN_147db6b92 body=472 status=ok
// SIG undefined FUN_147db6b92(void)

bool FUN_147db6b92(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar6 = FUN_144a7757c();
  lVar7 = FUN_144a78ede(param_1,uVar6);
  bVar1 = *(byte *)(lVar7 + 0x152);
  if ((bVar1 != 1) && ((bVar10 = false, 6 < bVar1 || ((0x68U >> (bVar1 & 0x1f) & 1) == 0))))
  goto LAB_147db6ca3;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  if ((~DAT_14c950c29 & 1) == 0 && param_2 != 0) {
    FUN_1456cec3c(param_2);
  }
  local_28 = param_2;
  if ((~DAT_14c950c29 & 1) == 0 && param_2 != 0) {
    FUN_1456cec3c(param_2);
  }
  if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar5 = FUN_147dbd35c((longlong *)(param_1 + 0x30),uVar4 >> 0x10 ^ uVar4,&local_28);
  if ((iVar5 != -1) &&
     (lVar7 = *(longlong *)(param_1 + 0x30) + (longlong)iVar5 * 0x18,
     plVar8 = (longlong *)(lVar7 + 8), plVar8 != (longlong *)0x0 && lVar7 != 0)) {
    lVar7 = *plVar8;
    if ((DAT_14c950c29 == 1) && (lVar7 != 0)) {
      FUN_1456cec3c(lVar7);
    }
    else if (lVar7 == 0) goto LAB_147db6ca1;
    uVar6 = FUN_144a7757c();
    lVar9 = FUN_144a78ede(param_1,uVar6);
    if ((*(longlong *)(lVar9 + 0x30) == 0) ||
       (lVar2 = *(longlong *)(*(longlong *)(lVar9 + 0x30) + 0x2b0), lVar2 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar2 + 0x3f0);
    }
    cVar3 = FUN_147dc0d52(uVar6,lVar7);
    if (((cVar3 != '\0') && (*(longlong *)(lVar9 + 0x30) != 0)) &&
       (lVar7 = *(longlong *)(*(longlong *)(lVar9 + 0x30) + 0x2b8), lVar7 != 0)) {
      lVar7 = FUN_1411ac7fa(lVar7,param_2);
      bVar10 = lVar7 != 0;
      goto LAB_147db6ca3;
    }
  }
LAB_147db6ca1:
  bVar10 = false;
LAB_147db6ca3:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar10;
}



// FUNCTION 147db6d6c FUN_147db6d6c body=282 status=ok
// SIG undefined FUN_147db6d6c(void)

undefined8 FUN_147db6d6c(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_a8 [40];
  longlong local_80 [2];
  longlong local_70 [2];
  longlong local_60 [2];
  longlong local_50 [2];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140002266(local_40,L"StreamingObject_%X",*(undefined4 *)(param_3 + 0x40));
  FUN_147db72b4(param_1,local_80,param_3);
  FUN_144a882a8(local_70,local_80,&DAT_149e065c6);
  FUN_1467acaa6(local_60,local_70,L"_Generated_/",0xb);
  FUN_144a882a8(local_50,local_60,&DAT_149e065c6);
  FUN_1401c7f3e(param_2,local_50,local_40);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db6e88 FUN_147db6e88 body=91 status=ok
// SIG undefined FUN_147db6e88(void)

undefined8 FUN_147db6e88(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar2 = 0;
  }
  uVar3 = *(undefined8 *)(lVar2 + 0xd0);
  uVar1 = FUN_144a7757c();
  lVar2 = FUN_144a78ede(uVar3,uVar1);
  if ((*(longlong *)(lVar2 + 0x30) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x2b8), lVar2 != 0)) {
    uVar3 = FUN_1411ac7fa(lVar2,param_2);
    return uVar3;
  }
  return 0;
}



// FUNCTION 147db6ee4 FUN_147db6ee4 body=490 status=ok
// SIG undefined FUN_147db6ee4(void)

undefined8 FUN_147db6ee4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  undefined1 uVar10;
  bool bVar11;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar8 = *(int *)(param_1 + 0x4f8);
  if ((longlong)iVar8 != 0) {
    lVar7 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x4f0) + lVar7) == param_2) {
        uVar6 = 0;
        goto LAB_147db7071;
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar8 * 8 - lVar7 != 0);
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
    iVar8 = *(int *)(param_1 + 0x4f8);
  }
  *(uint *)(param_1 + 0x4f8) = iVar8 + 1U;
  if (*(uint *)(param_1 + 0x4fc) < iVar8 + 1U) {
    FUN_14594fe2e((longlong *)(param_1 + 0x4f0),iVar8);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x4f0) + (longlong)iVar8 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  plVar4 = (longlong *)FUN_14379ccad(param_2);
  plVar1 = plVar4 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_50 = plVar1;
  if ((int)plVar4[5] == 0) {
    uVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    uVar9 = *(uint *)(plVar4 + 5);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  uVar6 = local_68;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_68._4_4_ = (uint)((ulonglong)local_48 >> 0x20);
  uVar5 = (ulonglong)local_68._4_4_;
  bVar11 = local_68._4_4_ != uVar9;
  local_80 = plVar4;
  local_68 = uVar6;
  if ((bVar11) || (uStack_50 != plVar1)) {
    do {
      plVar2 = *(longlong **)(*local_80 + (longlong)(int)uVar5 * 0x10);
      cVar3 = (**(code **)(*plVar2 + 0x2b0))(plVar2);
      if (cVar3 == '\0') {
        uVar10 = 0;
      }
      else {
        uVar10 = (undefined1)plVar2[5];
      }
      FUN_1411ada6c(param_1,plVar2,uVar10,0);
      FUN_14379cd62(param_1,plVar2,1);
      local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
      FUN_1449c0562(&local_78);
      uVar5 = (ulonglong)local_68._4_4_;
    } while (local_80 != plVar4 ||
             ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || local_68._4_4_ != uVar9));
  }
  uVar6 = CONCAT71((int7)(uVar5 >> 8),1);
LAB_147db7071:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db70d0 FUN_147db70d0 body=482 status=ok
// SIG undefined FUN_147db70d0(void)

ulonglong FUN_147db70d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((longlong)*(int *)(param_1 + 0x4f8) != 0) {
    iVar6 = 1;
    lVar8 = 0;
    lVar9 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x4f0) + lVar8) == param_2) {
        uVar5 = 0;
        if (iVar6 != 0) {
          local_98 = param_1 + 0x4f0;
          plVar4 = (longlong *)FUN_14379ccad(param_2);
          plVar1 = plVar4 + 2;
          local_68 = 0x100000000;
          local_58 = 0xffffffff;
          local_50 = 0;
          local_60 = plVar1;
          if ((int)plVar4[5] != 0) {
            FUN_1449c0562(&local_68);
            uVar5 = (ulonglong)*(uint *)(plVar4 + 5);
          }
          local_78 = local_58;
          uVar2 = local_78;
          local_70 = local_50;
          local_6c = local_4c;
          local_88 = local_68;
          local_80 = local_60;
          local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
          iVar3 = local_78._4_4_;
          local_90 = plVar4;
          if ((local_78._4_4_ != (int)uVar5) || (local_78 = uVar2, local_60 != plVar1)) {
            do {
              local_78 = uVar2;
              uVar2 = *(undefined8 *)(*local_90 + (longlong)iVar3 * 0x10);
              FUN_1411ada6c(param_1,uVar2,0,0);
              FUN_14379cd62(param_1,uVar2,0);
              local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
              FUN_1449c0562(&local_88);
              iVar3 = local_78._4_4_;
              uVar2 = local_78;
            } while (local_90 != plVar4 || (local_80 != plVar1 || local_78._4_4_ != (int)uVar5));
          }
          iVar3 = *(int *)(param_1 + 0x4f8);
          iVar6 = iVar3 - iVar6;
          if (iVar6 != 0) {
            iVar7 = 1;
            if (iVar6 < 1) {
              iVar7 = iVar6;
            }
            memmove((void *)(*(longlong *)(param_1 + 0x4f0) + (lVar9 >> 0x20) * 8),
                    (void *)(*(longlong *)(param_1 + 0x4f0) + (longlong)(iVar3 - iVar7) * 8),
                    (longlong)iVar7 << 3);
            iVar3 = *(int *)(param_1 + 0x4f8);
          }
          *(int *)(param_1 + 0x4f8) = iVar3 + -1;
          FUN_147dbdb74(local_98);
          uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
        }
        goto LAB_147db713b;
      }
      lVar9 = lVar9 + 0x100000000;
      iVar6 = iVar6 + 1;
      lVar8 = lVar8 + 8;
    } while ((longlong)*(int *)(param_1 + 0x4f8) * 8 != lVar8);
  }
  uVar5 = 0;
LAB_147db713b:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db72b4 FUN_147db72b4 body=168 status=ok
// SIG undefined FUN_147db72b4(void)

undefined8 FUN_147db72b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_144a7757c();
  uVar1 = FUN_144a78ede(param_1,uVar1);
  lVar2 = FUN_144b00ba4(uVar1);
  if (*(longlong *)(lVar2 + 0x38) == 0) {
    local_28 = *(undefined8 *)(lVar2 + 0x18);
    FUN_1400021e4(&local_28,local_38);
  }
  else {
    FUN_1468750d6(lVar2 + 0x38,local_38);
  }
  FUN_147db68c2(param_2,param_3,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db736c FUN_147db736c body=34 status=ok
// SIG undefined FUN_147db736c(void)

void FUN_147db736c(undefined8 param_1)

{
  FUN_1478b711e();
  FUN_147db738e(param_1);
  FUN_141651a7e(param_1);
  return;
}



// FUNCTION 147db738e FUN_147db738e body=326 status=ok
// SIG undefined FUN_147db738e(void)

void FUN_147db738e(longlong param_1)

{
  FUN_1449ad616(param_1 + 0x5c0);
  FUN_1449ad616(param_1 + 0x610);
  FUN_1449ad616(param_1 + 0x660);
  FUN_1449ad616(param_1 + 0x6b0);
  FUN_147db74d4(param_1 + 0x720);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb11260) {
    FUN_144b3d300(&DAT_14cb11260);
    if (DAT_14cb11260 == -1) {
      DAT_14cb11250 = 0;
      uRam000000014cb11258 = 0;
      atexit((_func_5014 *)&LAB_14379cc9c);
      _Init_thread_footer(&DAT_14cb11260);
    }
  }
  FUN_14103d96c(param_1);
  FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0xb);
  FUN_1406fa324(param_1 + 0x5a0,&DAT_14cb11250);
  FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0xc);
  FUN_1406fa324(param_1 + 0x5b0,&DAT_14cb11250);
  FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0xd);
  FUN_1406fa324(param_1 + 0x700,&DAT_14cb11250);
  FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0xe);
  FUN_1406fa324(param_1 + 0x710,&DAT_14cb11250);
  return;
}



// FUNCTION 147db74d4 FUN_147db74d4 body=58 status=ok
// SIG undefined FUN_147db74d4(void)

void FUN_147db74d4(longlong param_1)

{
  FUN_1449ad616();
  FUN_1449ad616(param_1 + 0x50);
  FUN_1449ad616(param_1 + 0xa0);
  FUN_1449ad616(param_1 + 0xf0);
  *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
  return;
}



// FUNCTION 147db750e FUN_147db750e body=629 status=ok
// SIG undefined FUN_147db750e(void)

void FUN_147db750e(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  wchar_t *pwVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined1 auStack_a8 [32];
  undefined2 *local_88;
  undefined2 *local_80;
  undefined8 local_78;
  undefined2 *local_70;
  int local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = param_4;
  cVar4 = (**(code **)(*param_2 + 0x2b0))(param_2);
  if (cVar4 == '\0') {
    FUN_1400b22c2(&local_58,&DAT_149e02088);
  }
  else {
    lVar6 = (**(code **)(*param_2 + 0x180))(param_2);
    bVar5 = *(byte *)(lVar6 + 0x152);
    if ((bVar5 == 1) || ((bVar5 < 7 && ((0x68U >> (bVar5 & 0x1f) & 1) != 0)))) {
      (**(code **)(*param_2 + 0x310))(param_2,&local_70);
      bVar5 = FUN_143797fc8(param_1,local_70);
      puVar1 = (&PTR_u_Unloaded_14ab190d8)[bVar5];
      (**(code **)(*param_2 + 0x310))(param_2,&local_60);
      bVar5 = FUN_1411bbe3a(param_1 + 0x720,local_60);
      FUN_140002266(&local_58,L"(Effective State = %s | Target State = %s)",
                    (&PTR_u_Unloaded_14ab190d8)[bVar5],puVar1);
    }
    else {
      cVar4 = (**(code **)(*param_2 + 0x2b0))(param_2);
      if (cVar4 == '\0') {
        pwVar9 = L"Unloaded";
      }
      else if ((ulonglong)*(byte *)(param_2 + 5) < 3) {
        pwVar9 = (wchar_t *)(&PTR_u_Unloaded_14ab190d8)[*(byte *)(param_2 + 5)];
      }
      else {
        pwVar9 = L"Invalid";
      }
      FUN_140002266(&local_58,L"(Initial State = %s)",pwVar9);
    }
  }
  puVar11 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar11 = local_58;
  }
  (**(code **)(*param_2 + 0x2d0))(param_2,&local_70);
  local_88 = &DAT_149dfb77a;
  if (local_68 != 0) {
    local_88 = local_70;
  }
  if ((int)param_2[8] == 0) {
    puVar10 = &DAT_149dfb77a;
    if (param_2[6] == 0) {
      puVar10 = (undefined2 *)&DAT_14ab14d38;
    }
  }
  else {
    puVar10 = (undefined2 *)&DAT_14ab14d38;
  }
  if ((int)param_3[1] == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*param_3;
  }
  local_80 = puVar11;
  FUN_140047918(local_78,L" %s%s%s %s",puVar8,puVar10);
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar6 = param_2[8];
  if ((longlong)(int)lVar6 != 0) {
    lVar2 = param_2[7];
    lVar7 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar2 + lVar7);
      FUN_1449b8608(&local_58,param_3,&DAT_149e895f6);
      FUN_147db750e(param_1,uVar3,&local_58,local_78);
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar6 * 8 != lVar7);
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147db7784 FUN_147db7784 body=174 status=ok
// SIG undefined FUN_147db7784(void)

undefined8 * FUN_147db7784(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = (int)param_3[1];
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_147dbc772(param_2);
    if ((longlong)(int)param_3[1] != 0) {
      lVar2 = *param_3;
      lVar3 = (longlong)(int)param_3[1] << 3;
      do {
        local_38 = FUN_1414a418c(param_1,lVar2);
        if (local_38 != 0) {
          FUN_147dbdc10(param_2,&local_38);
        }
        lVar2 = lVar2 + 8;
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147db7834 FUN_147db7834 body=136 status=ok
// SIG undefined FUN_147db7834(void)

undefined8 FUN_147db7834(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140ded208(param_2,local_30);
  local_38 = 1;
  FUN_1414bc8e4(local_30,param_1,&DAT_149e01f5a,&DAT_149dfb77a);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db78be FUN_147db78be body=1 status=ok
// SIG undefined FUN_147db78be(void)

void FUN_147db78be(void)

{
  return;
}



// FUNCTION 147db78c0 FUN_147db78c0 body=4 status=ok
// SIG undefined FUN_147db78c0(void)

undefined8 FUN_147db78c0(undefined8 param_1)

{
  return param_1;
}



// FUNCTION 147db78cc FUN_147db78cc body=104 status=ok
// SIG undefined FUN_147db78cc(void)

void FUN_147db78cc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb112e0) {
    FUN_144b3d300(&DAT_14cb112e0);
    if (DAT_14cb112e0 == -1) {
      FUN_1446f470e(&DAT_14cb112d8,L"DestructibleHLODState",1);
      _Init_thread_footer(&DAT_14cb112e0);
      return;
    }
  }
  return;
}



// FUNCTION 147db7934 FUN_147db7934 body=121 status=ok
// SIG undefined FUN_147db7934(void)

void FUN_147db7934(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30;
  undefined1 *local_28;
  wchar_t *local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1412aa84a();
  local_20 = L"DestructibleHLODState";
  local_18 = 0x100000011;
  local_38 = 0;
  local_30 = 1;
  local_28 = &LAB_14379e85a;
  FUN_140c2c993(&local_20,param_2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db79ae FUN_147db79ae body=33 status=ok
// SIG undefined FUN_147db79ae(void)

void FUN_147db79ae(longlong param_1)

{
  FUN_1401c3ca6();
  FUN_14379d9d4(param_1 + 0x2c0,param_1);
  return;
}



// FUNCTION 147db79e6 FUN_147db79e6 body=61 status=ok
// SIG undefined FUN_147db79e6(void)

void FUN_147db79e6(longlong param_1,undefined8 param_2,float param_3)

{
  if (1.0 <= param_3) {
    param_3 = 1.0;
  }
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  FUN_14379dbe8(param_1 + 0x2c0,param_2,(int)(param_3 * 255.0));
  FUN_14379dd8c(param_1);
  return;
}



// FUNCTION 147db7a24 FUN_147db7a24 body=1268 status=ok
// SIG undefined FUN_147db7a24(void)

void FUN_147db7a24(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  int iVar12;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_ac;
  undefined2 local_ab;
  undefined8 local_a8;
  ulonglong local_a0;
  float local_94;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar2 = local_78;
  if ((*(longlong *)(param_1 + 0x418) != 0) || (lVar7 = *(longlong *)(param_1 + 0x2b8), lVar7 == 0))
  goto LAB_147db7a53;
  local_94 = 0.0;
  FUN_1446ddc76(&local_a0,"NumInstances",1);
  local_90 = (longlong *)(local_a0 & 0xffffffff);
  local_88 = (undefined4)(local_a0 >> 0x20);
  uStack_84 = 0xffffffff;
  uStack_80 = CONCAT31(uStack_80._1_3_,2);
  cVar5 = FUN_140fc5b24(lVar7,&local_90,&local_94,1);
  uVar2 = local_78;
  if (cVar5 == '\0') goto LAB_147db7a53;
  local_ab = 0;
  local_ac = 3;
  local_a8 = 0x100000000;
  lVar7 = FUN_143734b16((int)local_94,1);
  if (lVar7 == 0) {
    if (*(longlong *)(param_1 + 0x418) != 0) goto LAB_147db7b36;
    lVar7 = *(longlong *)(param_1 + 0x410);
  }
  else {
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar7);
    }
    *(longlong *)(param_1 + 0x418) = lVar7;
LAB_147db7b36:
    lVar7 = FUN_14090ceee(*(undefined8 *)(param_1 + 0x2b8),param_1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x418);
    FUN_1446ddc76(&local_b8,"InstanceVisibilityTexture",1);
    FUN_14016d8b0(lVar7,local_b8,uVar2);
    if ((lVar7 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar7);
    }
    *(longlong *)(param_1 + 0x410) = lVar7;
  }
  uVar2 = local_78;
  if (lVar7 == 0) goto LAB_147db7a53;
  lVar7 = *(longlong *)(param_1 + 0xa8);
  lVar8 = FUN_144a7a726();
  if ((lVar8 == 0) || (DAT_14c950c29 == 0)) {
    if (lVar8 != 0) goto LAB_147db7bc6;
    bVar4 = true;
LAB_147db7be0:
    lVar10 = 0;
  }
  else {
    FUN_1456cec3c(lVar8);
LAB_147db7bc6:
    lVar9 = FUN_144a78d6a();
    if ((lVar9 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar9 + 0x38))) {
      bVar4 = false;
      goto LAB_147db7be0;
    }
    bVar4 = false;
    lVar10 = 0;
    if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
        lVar9 + 0x30) {
      lVar10 = lVar8;
    }
  }
  lVar9 = FUN_144a78d6a();
  bVar11 = lVar8 != 0 & DAT_14c950c29;
  if (lVar10 == lVar9) {
    if (bVar11 != 0) {
      FUN_1456cec3c(lVar8);
    }
    plVar1 = (longlong *)(lVar7 + 0x240);
    lVar8 = lVar7 + 0x250;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = lVar8;
    if (*(int *)(lVar7 + 0x268) == 0) {
      iVar12 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar12 = *(int *)(lVar7 + 0x268);
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar2 = local_78;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar12) || (uStack_60 != lVar8)) {
      iVar6 = local_78._4_4_;
      local_78 = uVar2;
      do {
        plVar3 = *(longlong **)(*local_90 + (longlong)iVar6 * 0x10);
        if (((plVar3 != (longlong *)0x0) && (lVar7 = FUN_1448c9576(plVar3,0), lVar7 != 0)) &&
           (*(longlong *)(param_1 + 0x2b8) == lVar7)) {
          (**(code **)(*plVar3 + 0x638))(plVar3,0,*(undefined8 *)(param_1 + 0x410));
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
        uVar2 = local_78;
      } while (local_90 != plVar1 ||
               (CONCAT44(uStack_7c,uStack_80) != lVar8 || local_78._4_4_ != iVar12));
    }
  }
  else {
    if (bVar11 != 0) {
      FUN_1456cec3c(lVar8);
    }
    plVar1 = (longlong *)(lVar7 + 0x240);
    lVar9 = lVar7 + 0x250;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = lVar9;
    if (*(int *)(lVar7 + 0x268) == 0) {
      iVar12 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar12 = *(int *)(lVar7 + 0x268);
    }
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar2 = local_78;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar12) || (uStack_60 != lVar9)) {
      iVar6 = local_78._4_4_;
      local_78 = uVar2;
      do {
        plVar3 = *(longlong **)(*local_90 + (longlong)iVar6 * 0x10);
        if (plVar3 != (longlong *)0x0) {
          if ((lVar8 != 0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c(lVar8);
          }
          if (((bVar4) || (lVar7 = FUN_144a78d6a(), lVar7 == 0)) ||
             (*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38))) {
            lVar10 = 0;
          }
          else {
            lVar10 = 0;
            if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                lVar7 + 0x30) {
              lVar10 = lVar8;
            }
          }
          if (((*(int *)(lVar10 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
               lVar10 + 0x30)) &&
             ((lVar7 = FUN_1448c9576(plVar3,0), lVar7 != 0 &&
              (*(longlong *)(param_1 + 0x2b8) == lVar7)))) {
            (**(code **)(*plVar3 + 0x638))(plVar3,0,*(undefined8 *)(param_1 + 0x410));
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
        uVar2 = local_78;
      } while (local_90 != plVar1 ||
               (CONCAT44(uStack_7c,uStack_80) != lVar9 || local_78._4_4_ != iVar12));
    }
  }
LAB_147db7a53:
  local_78 = uVar2;
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147db7f56 FUN_147db7f56 body=64 status=ok
// SIG undefined FUN_147db7f56(void)

undefined8 * FUN_147db7f56(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14ab0c380;
  plVar2 = (longlong *)param_1[2];
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



// FUNCTION 147db7f98 FUN_147db7f98 body=38 status=ok
// SIG undefined FUN_147db7f98(void)

undefined8 FUN_147db7f98(undefined8 param_1,int param_2)

{
  FUN_147dbbff2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147db7fe4 FUN_147db7fe4 body=32 status=ok
// SIG undefined FUN_147db7fe4(void)

undefined8 FUN_147db7fe4(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Invalid Data Layer");
  return param_2;
}



// FUNCTION 147db8004 FUN_147db8004 body=32 status=ok
// SIG undefined FUN_147db8004(void)

undefined8 FUN_147db8004(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Invalid Data Layer");
  return param_2;
}



// FUNCTION 147db803a FUN_147db803a body=47 status=ok
// SIG undefined FUN_147db803a(void)

bool FUN_147db803a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  uVar2 = FUN_140aed08c();
  lVar3 = FUN_144a78ede(lVar1,uVar2);
  if (lVar3 == 0) {
    bVar4 = *(char *)(lVar1 + 0x30) == '\0';
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}



// FUNCTION 147db8078 FUN_147db8078 body=83 status=ok
// SIG undefined FUN_147db8078(void)

undefined8 * FUN_147db8078(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x50);
  _Src = *(void **)(param_1 + 0x48);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 147db80cc FUN_147db80cc body=37 status=ok
// SIG undefined FUN_147db80cc(void)

undefined8 * FUN_147db80cc(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1401031ac(uVar1,0,param_2);
  return param_2;
}



// FUNCTION 147db810e FUN_147db810e body=26 status=ok
// SIG undefined FUN_147db810e(void)

undefined8 FUN_147db810e(longlong param_1,undefined8 param_2)

{
  FUN_1400021e4(param_1 + 0x48);
  return param_2;
}



// FUNCTION 147db8128 FUN_147db8128 body=104 status=ok
// SIG undefined FUN_147db8128(void)

undefined8 FUN_147db8128(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(param_1 + 0x48,local_28);
  FUN_140ba7826(param_2,L"Deprecated_",local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db81be FUN_147db81be body=41 status=ok
// SIG undefined FUN_147db81be(void)

void FUN_147db81be(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\WorldPartition/HLOD/DestructibleHLODComponent.h",0x19,
                L"Pure virtual not implemented (%s)",
                L"UWorldPartitionDestructibleHLODComponent::DestroyActor");
  return;
}



// FUNCTION 147db81e8 FUN_147db81e8 body=41 status=ok
// SIG undefined FUN_147db81e8(void)

void FUN_147db81e8(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\WorldPartition/HLOD/DestructibleHLODComponent.h",0x1a,
                L"Pure virtual not implemented (%s)",
                L"UWorldPartitionDestructibleHLODComponent::DamageActor");
  return;
}



// FUNCTION 147db8212 FUN_147db8212 body=41 status=ok
// SIG undefined FUN_147db8212(void)

void FUN_147db8212(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\WorldPartition/HLOD/DestructibleHLODComponent.h",0x1b,
                L"Pure virtual not implemented (%s)",
                L"UWorldPartitionDestructibleHLODComponent::OnDestructionStateUpdated");
  return;
}



// FUNCTION 147db8246 FUN_147db8246 body=45 status=ok
// SIG undefined FUN_147db8246(void)

longlong FUN_147db8246(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c9d8dc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147db827c FUN_147db827c body=89 status=ok
// SIG undefined FUN_147db827c(void)

undefined8 * FUN_147db827c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147db82d6(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x14);
      }
    }
  }
  return param_1;
}



// FUNCTION 147db82d6 FUN_147db82d6 body=115 status=ok
// SIG undefined FUN_147db82d6(void)

void FUN_147db82d6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x14,4);
    iVar2 = (int)(uVar1 / 0x14);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x14,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147db83f4 FUN_147db83f4 body=63 status=ok
// SIG undefined FUN_147db83f4(void)

undefined1 FUN_147db83f4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147db8564(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 147db845c FUN_147db845c body=59 status=ok
// SIG undefined FUN_147db845c(void)

undefined8 FUN_147db845c(longlong *param_1)

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



// FUNCTION 147db84a8 FUN_147db84a8 body=40 status=ok
// SIG undefined FUN_147db84a8(void)

void FUN_147db84a8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_147db851e(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 147db851e FUN_147db851e body=69 status=ok
// SIG undefined FUN_147db851e(void)

void FUN_147db851e(longlong param_1)

{
  FUN_140861e20(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147db8564 FUN_147db8564 body=137 status=ok
// SIG undefined FUN_147db8564(void)

undefined4 * FUN_147db8564(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  lVar4 = *(longlong *)(param_2 + 4);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_2 + 4);
    }
  }
  *(longlong *)(param_1 + 4) = lVar4;
  uVar1 = param_2[7];
  uVar2 = param_2[8];
  uVar3 = param_2[9];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  FUN_144a787a6(param_1 + 10,param_2 + 10);
  puVar5 = (undefined8 *)(param_2 + 0xe);
  puVar6 = (undefined8 *)(param_1 + 0xe);
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  param_1[0x26] = param_2[0x26];
  FUN_14591fc3c(param_1 + 0x28,param_2 + 0x28);
  return param_1;
}



// FUNCTION 147db863e FUN_147db863e body=68 status=ok
// SIG undefined FUN_147db863e(void)

undefined8 FUN_147db863e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1406fa324(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    uVar3 = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 147db86aa FUN_147db86aa body=59 status=ok
// SIG undefined FUN_147db86aa(void)

undefined8 FUN_147db86aa(longlong *param_1)

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



// FUNCTION 147db86f0 FUN_147db86f0 body=37 status=ok
// SIG undefined FUN_147db86f0(void)

void FUN_147db86f0(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[5] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 147db8766 FUN_147db8766 body=59 status=ok
// SIG undefined FUN_147db8766(void)

undefined8 FUN_147db8766(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1459ea3d4();
  lVar2 = FUN_140561e42(param_1,uVar1);
  if (lVar2 != 0) {
    uVar1 = FUN_144718840(lVar2,uVar1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 147db8834 FUN_147db8834 body=59 status=ok
// SIG undefined FUN_147db8834(void)

undefined8 FUN_147db8834(longlong *param_1)

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



// FUNCTION 147db88d5 FUN_147db88d5 body=91 status=ok
// SIG undefined FUN_147db88d5(void)

longlong FUN_147db88d5(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x38,0x10);
  FUN_147db8930(lVar1,*(undefined4 *)(param_3 + 800),param_1,param_2);
  if (lVar1 != 0) {
    FUN_146f183a6(lVar1,param_3,8);
  }
  return lVar1;
}



// FUNCTION 147db8930 FUN_147db8930 body=171 status=ok
// SIG undefined FUN_147db8930(void)

undefined8 * FUN_147db8930(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  void *_Dst;
  
  FUN_146f181f8();
  *param_1 = &PTR_FUN_14ab182e0;
  param_1[6] = 0;
  if ((param_2 & 0x40) != 0) {
    _Dst = (void *)FUN_14001cc68(0x150);
    memset(_Dst,0,0x150);
    FUN_140f23ff6(_Dst);
    *(undefined4 *)((longlong)_Dst + 0x14c) = 0;
    *(undefined8 *)((longlong)_Dst + 0x110) = 0;
    *(undefined8 *)((longlong)_Dst + 0x118) = 0;
    *(undefined8 *)((longlong)_Dst + 0x120) = 0;
    *(undefined8 *)((longlong)_Dst + 0x128) = 0;
    *(undefined8 *)((longlong)_Dst + 0x130) = 0;
    *(undefined8 *)((longlong)_Dst + 0x138) = 0;
    *(undefined8 *)((longlong)_Dst + 0x13a) = 0;
    *(undefined8 *)((longlong)_Dst + 0x142) = 0;
    lVar1 = param_1[6];
    param_1[6] = _Dst;
    if (lVar1 != 0) {
      FUN_145c9d950(lVar1);
      FUN_1400020a8(lVar1);
    }
  }
  return param_1;
}



// FUNCTION 147db89dc FUN_147db89dc body=38 status=ok
// SIG undefined FUN_147db89dc(void)

undefined8 FUN_147db89dc(undefined8 param_1,int param_2)

{
  FUN_147db8e6a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147db8a02 FUN_147db8a02 body=130 status=ok
// SIG undefined FUN_147db8a02(void)

void FUN_147db8a02(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)*(int *)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0x38) + 0x44) +
          *(longlong *)(param_1 + 0x20);
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar4 = FUN_146f181e6();
  FUN_146f184b6(param_2,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x18),uVar4);
  lVar2 = *(longlong *)(param_1 + 0x30);
  lVar3 = *(longlong *)(param_1 + 0x28);
  uVar4 = FUN_146f18364(param_1);
  FUN_14379e860(lVar5,lVar1 + lVar5,lVar2,lVar3 + lVar2,uVar4,param_2);
  return;
}



// FUNCTION 147db8a84 FUN_147db8a84 body=651 status=ok
// SIG undefined FUN_147db8a84(void)

void FUN_147db8a84(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 auStack_308 [32];
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined8 local_2bc;
  undefined4 local_2b4;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 local_270;
  undefined4 local_268;
  undefined8 local_264;
  undefined4 local_25c;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_214;
  undefined4 local_20c;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined1 local_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined2 uStack_1b0;
  undefined6 local_1ae;
  undefined2 uStack_1a8;
  undefined8 uStack_1a6;
  undefined4 local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined4 local_164;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined2 uStack_60;
  undefined6 local_5e;
  undefined2 uStack_58;
  undefined8 uStack_56;
  undefined4 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_308;
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = **(longlong **)(lVar1 + 0x40);
  if (lVar2 != 0) {
    if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
      local_178 = 0;
      local_170 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_16c = 0xffffffff00000080;
      local_164 = 0;
      local_158 = 0;
      local_150 = 0;
      local_120 = 0;
      local_118 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      local_114 = 0xffffffff00000080;
      local_10c = 0;
      local_100 = 0;
      local_f8 = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_c4 = 0xffffffff00000080;
      local_bc = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0xffffffffffffffff;
      local_90 = 0xffffffff;
      local_8c = 2;
      local_4c = 0;
      uStack_58 = 0;
      uStack_56 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      local_5e = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_2c8 = 0;
      local_2c0 = 0;
      local_2e8 = 0;
      uStack_2e0 = 0;
      local_2bc = 0xffffffff00000080;
      local_2b4 = 0;
      local_2a8 = 0;
      local_2a0 = 0;
      local_270 = 0;
      local_268 = 0;
      local_298 = 0;
      uStack_290 = 0;
      local_288 = 0;
      local_264 = 0xffffffff00000080;
      local_25c = 0;
      local_250 = 0;
      local_248 = 0;
      local_220 = 0;
      local_218 = 0;
      local_240 = 0;
      uStack_238 = 0;
      local_214 = 0xffffffff00000080;
      local_20c = 0;
      local_200 = 0;
      local_1f8 = 0;
      local_1f0 = 0;
      local_1e8 = 0xffffffffffffffff;
      local_1e0 = 0xffffffff;
      local_1dc = 2;
      local_19c = 0;
      uStack_1a8 = 0;
      uStack_1a6 = 0;
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      local_1ae = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      uVar5 = FUN_146f181e6(param_1);
      FUN_146f18422(*(undefined8 *)(param_2 + 8),&local_198,*(undefined8 *)(param_2 + 0x18),uVar5);
      uVar5 = FUN_146f181e6(param_1);
      FUN_146f18598(*(undefined8 *)(param_2 + 8),&local_198,*(undefined8 *)(param_2 + 0x18),uVar5);
      plVar3 = (longlong *)**(undefined8 **)(lVar1 + 0x38);
      cVar4 = (**(code **)(*plVar3 + 200))(plVar3,&local_198,&local_2e8,0);
      FUN_145c9d950(&local_2e8);
      FUN_145c9d950(&local_198);
      if (cVar4 != '\0') goto LAB_147db8ad7;
    }
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x248))(*(longlong **)(param_1 + 0x20),lVar2,0);
  }
LAB_147db8ad7:
  if ((local_40 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147db8d18 FUN_147db8d18 body=337 status=ok
// SIG undefined FUN_147db8d18(void)

void FUN_147db8d18(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined2 uStack_40;
  undefined6 local_3e;
  undefined2 uStack_38;
  undefined8 uStack_36;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_158 = 0;
  local_150 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_14c = 0xffffffff00000080;
  local_144 = 0;
  local_138 = 0;
  local_130 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  local_f4 = 0xffffffff00000080;
  local_ec = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_a4 = 0xffffffff00000080;
  local_9c = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0xffffffffffffffff;
  local_70 = 0xffffffff;
  local_6c = 2;
  local_2c = 0;
  uStack_38 = 0;
  uStack_36 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_3e = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uVar1 = FUN_146f181e6(param_1);
  FUN_146f18422(*(undefined8 *)(param_3 + 8),&local_178,*(undefined8 *)(param_3 + 0x18),uVar1);
  uVar1 = FUN_146f181e6(param_1);
  FUN_146f186a0(param_2,&local_178,uVar1);
  FUN_145c9d950(&local_178);
  if ((local_28 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db8e6a FUN_147db8e6a body=58 status=ok
// SIG undefined FUN_147db8e6a(void)

void FUN_147db8e6a(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14ab182e0;
  lVar1 = param_1[6];
  if (lVar1 != 0) {
    FUN_145c9d950(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_147db8ea4(param_1);
  return;
}



// FUNCTION 147db8ea4 FUN_147db8ea4 body=72 status=ok
// SIG undefined FUN_147db8ea4(void)

void FUN_147db8ea4(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_149f99190;
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    FUN_146f11042(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (param_1[2] != 0) {
    FUN_146f11920();
    return;
  }
  return;
}



// FUNCTION 147db8eec FUN_147db8eec body=79 status=ok
// SIG undefined FUN_147db8eec(void)

undefined8 FUN_147db8eec(longlong param_1,uint param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = 1;
  if (3 < param_2) {
    uVar3 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) &&
     ((param_3 != '\x01' || (*(int *)(param_1 + 0x48) <= iVar4)))) {
    uVar2 = 0;
  }
  else {
    *(int *)(param_1 + 0x48) = iVar4;
    FUN_140264164(param_1);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 147db8f3c FUN_147db8f3c body=147 status=ok
// SIG undefined FUN_147db8f3c(void)

void FUN_147db8f3c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147db8fd0 FUN_147db8fd0 body=62 status=ok
// SIG undefined FUN_147db8fd0(void)

void FUN_147db8fd0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147db900e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x14,4);
  }
  return;
}



// FUNCTION 147db900e FUN_147db900e body=112 status=ok
// SIG undefined FUN_147db900e(void)

ulonglong FUN_147db900e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x14) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147db9048;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x14,4);
      param_2 = param_2 / 0x14;
    }
  }
LAB_147db9048:
  return param_2 & 0xffffffff;
}



// FUNCTION 147db907e FUN_147db907e body=110 status=ok
// SIG undefined FUN_147db907e(void)

void FUN_147db907e(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147db8f3c(param_1,iVar1);
    }
    FUN_147db90ed((longlong)iVar1 * 0x14 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_147db8fd0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147db90ed FUN_147db90ed body=25 status=ok
// SIG undefined FUN_147db90ed(void)

void FUN_147db90ed(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0xffffffff;
    param_1[1] = 0xffffffff;
    param_1[2] = 0xffffffff;
    param_1[3] = 0xffffffff;
    *(undefined1 *)(param_1 + 4) = 0xff;
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 147db9106 FUN_147db9106 body=79 status=ok
// SIG undefined FUN_147db9106(void)

void FUN_147db9106(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x150);
  FUN_140f23ff6(param_2);
  *(undefined4 *)((longlong)param_2 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x110) = 0;
  *(undefined8 *)((longlong)param_2 + 0x118) = 0;
  *(undefined8 *)((longlong)param_2 + 0x120) = 0;
  *(undefined8 *)((longlong)param_2 + 0x128) = 0;
  *(undefined8 *)((longlong)param_2 + 0x130) = 0;
  *(undefined8 *)((longlong)param_2 + 0x138) = 0;
  *(undefined8 *)((longlong)param_2 + 0x13a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x142) = 0;
  return;
}



// FUNCTION 147db9156 FUN_147db9156 body=63 status=ok
// SIG undefined FUN_147db9156(void)

void FUN_147db9156(undefined8 param_1,longlong param_2)

{
  FUN_140f23ff6(param_2);
  *(undefined4 *)(param_2 + 0x14c) = 0;
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined8 *)(param_2 + 0x118) = 0;
  *(undefined8 *)(param_2 + 0x120) = 0;
  *(undefined8 *)(param_2 + 0x128) = 0;
  *(undefined8 *)(param_2 + 0x130) = 0;
  *(undefined8 *)(param_2 + 0x138) = 0;
  *(undefined8 *)(param_2 + 0x13a) = 0;
  *(undefined8 *)(param_2 + 0x142) = 0;
  return;
}



// FUNCTION 147db91bc FUN_147db91bc body=63 status=ok
// SIG undefined FUN_147db91bc(void)

undefined1 FUN_147db91bc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147db9c2c(param_2,param_3);
    param_3 = param_3 + 0x150;
    param_2 = param_2 + 0x150;
  }
  return 1;
}



// FUNCTION 147db9224 FUN_147db9224 body=59 status=ok
// SIG undefined FUN_147db9224(void)

undefined8 FUN_147db9224(longlong *param_1)

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



// FUNCTION 147db9270 FUN_147db9270 body=40 status=ok
// SIG undefined FUN_147db9270(void)

void FUN_147db9270(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x150) == '\x01') {
    FUN_145c9d950(param_2);
    *(undefined1 *)(param_2 + 0x150) = 0;
  }
  return;
}



// FUNCTION 147db92e6 FUN_147db92e6 body=68 status=ok
// SIG undefined FUN_147db92e6(void)

longlong FUN_147db92e6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147db8f3c(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x14 + *param_1;
  FUN_147db90ed(lVar2,1);
  return lVar2;
}



// FUNCTION 147db9372 FUN_147db9372 body=31 status=ok
// SIG undefined FUN_147db9372(void)

undefined8 FUN_147db9372(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147db93c4 FUN_147db93c4 body=31 status=ok
// SIG undefined FUN_147db93c4(void)

undefined8 FUN_147db93c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147db93e4 FUN_147db93e4 body=151 status=ok
// SIG undefined FUN_147db93e4(void)

void FUN_147db93e4(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 200 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 200) = param_2;
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
      puVar7 = puVar7 + 0x32;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147db947c FUN_147db947c body=432 status=ok
// SIG undefined FUN_147db947c(void)

void FUN_147db947c(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 200;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc4 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc0 + lVar7) =
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



// FUNCTION 147db962e FUN_147db962e body=463 status=ok
// SIG undefined FUN_147db962e(void)

undefined8 FUN_147db962e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  longlong *local_58;
  longlong *local_50;
  undefined2 local_48;
  undefined8 local_40;
  longlong local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x20);
  local_38 = param_1 + 0x30;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_1449c0562(&local_40);
  }
  local_68 = local_30;
  iStack_64 = iStack_2c;
  local_60 = local_28;
  local_5c = local_24;
  local_78 = local_40;
  local_70 = local_38;
  local_48 = 0;
  local_80 = plVar1;
  local_58 = plVar1;
  local_50 = plVar1;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      if (*(int *)(param_2 + 0x28) == *(int *)(param_2 + 0x54)) {
LAB_147db97c2:
        if (((char)local_48 == '\x01') && (local_48._1_1_ == '\x01')) {
          FUN_147db8eec(local_50,(int)local_50[1] - *(int *)((longlong)local_50 + 0x34),1);
        }
        uVar3 = 0;
        goto LAB_147db979d;
      }
      uVar2 = *(uint *)(*local_80 + (longlong)iStack_64 * 0x10);
      lVar4 = *(longlong *)(param_2 + 0x60);
      if (*(longlong *)(param_2 + 0x60) == 0) {
        lVar4 = param_2 + 0x58;
      }
      iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_2 + 0x68) - 1U & uVar2) * 4);
      if (iVar5 == -1) goto LAB_147db97c2;
      while (lVar4 = *(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 0x10,
            *(uint *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 0x10) != uVar2) {
        iVar5 = *(int *)(lVar4 + 8);
        if (iVar5 == -1) goto LAB_147db97c2;
      }
      if (((lVar4 == 0) || ((int *)(lVar4 + 4) == (int *)0x0)) ||
         (*(int *)(lVar4 + 4) != *(int *)(*local_80 + 4 + (longlong)iStack_64 * 0x10)))
      goto LAB_147db97c2;
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < *(int *)(local_70 + 0x18));
    if (((local_48 & 1) != 0) && (local_48._1_1_ == '\x01')) {
      FUN_147db8eec(local_50,(int)local_50[1] - *(int *)((longlong)local_50 + 0x34),1);
    }
  }
  uVar3 = 1;
LAB_147db979d:
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 147db97fe FUN_147db97fe body=104 status=ok
// SIG undefined FUN_147db97fe(void)

void FUN_147db97fe(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x28) << 4,(longlong)*(int *)(param_1 + 0x2c) << 4
            );
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x48) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x4c) + 0x1fU >> 3 & 0xfffffffc);
  lVar1 = (longlong)*(int *)(param_1 + 0x68) << 2;
                    /* WARNING: Could not recover jumptable at 0x000147db9863. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,lVar1,lVar1);
  return;
}



// FUNCTION 147db9866 FUN_147db9866 body=305 status=ok
// SIG undefined FUN_147db9866(void)

undefined4 *
FUN_147db9866(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147db9998(param_1,local_58);
  FUN_147db9b42(param_4,local_50);
  *(undefined4 *)(local_50 + 0xc0) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_147db9a86(param_1,param_3,local_50,local_58);
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
      *(uint *)(local_50 + 0xc4) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 0xc0) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_147db947c(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db9998 FUN_147db9998 body=237 status=ok
// SIG undefined FUN_147db9998(void)

int * FUN_147db9998(longlong *param_1,int *param_2)

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
      FUN_146efee60(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 200);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 200) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 200 + *param_1;
  return param_2;
}



// FUNCTION 147db9a86 FUN_147db9a86 body=188 status=ok
// SIG undefined FUN_147db9a86(void)

void FUN_147db9a86(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  void *_Dst;
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
        _Dst = (void *)(*param_1 + (longlong)iVar3 * 200);
        if (*(int *)(*param_1 + (longlong)iVar3 * 200) == *param_3) {
          FUN_146efed88((longlong)_Dst + 8);
          memmove(_Dst,param_3,0xc0);
          FUN_147db93e4(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_147db9afd;
        }
        iVar3 = *(int *)((longlong)_Dst + 0xc0);
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_147db9afd:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 147db9b42 FUN_147db9b42 body=232 status=ok
// SIG undefined FUN_147db9b42(void)

undefined4 * FUN_147db9b42(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_108 [32];
  undefined1 local_e8 [44];
  undefined8 local_bc;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined8 local_6c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  memset(local_e8,0,0xb8);
  local_bc = 0xffffffff00000080;
  local_78 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_48 = 0;
  uStack_40 = 0;
  *param_2 = *(undefined4 *)*param_1;
  FUN_14041f7b6(param_2 + 2,local_e8);
  FUN_14041f7b6(param_2 + 0x16,&local_98);
  *(undefined8 *)(param_2 + 0x2a) = local_48;
  local_48 = 0;
  param_2[0x2c] = (undefined4)uStack_40;
  param_2[0x2d] = uStack_40._4_4_;
  uStack_40 = 0;
  param_2[0x2e] = local_38;
  FUN_146efed88(local_e8);
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147db9c2c FUN_147db9c2c body=202 status=ok
// SIG undefined FUN_147db9c2c(void)

longlong FUN_147db9c2c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  FUN_140cae46a();
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  FUN_140cae504(param_1 + 0x58,param_2 + 0x58);
  FUN_140cae59e(param_1 + 0xa8,param_2 + 0xa8);
  uVar1 = *(undefined4 *)(param_2 + 0xfc);
  uVar2 = *(undefined4 *)(param_2 + 0x100);
  uVar3 = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0xfc) = uVar1;
  *(undefined4 *)(param_1 + 0x100) = uVar2;
  *(undefined4 *)(param_1 + 0x104) = uVar3;
  *(undefined8 *)(param_1 + 0x105) = *(undefined8 *)(param_2 + 0x105);
  FUN_147db9cf6(param_1 + 0x110,param_2 + 0x110);
  lVar4 = *(longlong *)(param_2 + 0x120);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_2 + 0x120);
    }
  }
  *(longlong *)(param_1 + 0x120) = lVar4;
  FUN_14054c6c4(param_1 + 0x128,param_2 + 0x128);
  FUN_1447a122a(param_1 + 0x138,param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x148);
  return param_1;
}



// FUNCTION 147db9cf6 FUN_147db9cf6 body=79 status=ok
// SIG undefined FUN_147db9cf6(void)

undefined8 * FUN_147db9cf6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147db9d46(param_1,iVar1);
      FUN_147db9db9(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147db9d46 FUN_147db9d46 body=115 status=ok
// SIG undefined FUN_147db9d46(void)

void FUN_147db9d46(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x14,4);
    iVar2 = (int)(uVar1 / 0x14);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x14,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147db9db9 FUN_147db9db9 body=56 status=ok
// SIG undefined FUN_147db9db9(void)

void FUN_147db9db9(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1) = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 8 + lVar1) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xc + lVar1) = *(undefined4 *)(param_2 + 0xc + lVar1);
      *(undefined1 *)(param_1 + 0x10 + lVar1) = *(undefined1 *)(param_2 + 0x10 + lVar1);
      lVar1 = lVar1 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147db9e40 FUN_147db9e40 body=42 status=ok
// SIG undefined FUN_147db9e40(void)

void FUN_147db9e40(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_147db9faa(param_2);
  return;
}



// FUNCTION 147db9e80 FUN_147db9e80 body=54 status=ok
// SIG undefined FUN_147db9e80(void)

undefined1 FUN_147db9e80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147dba062(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 147db9ede FUN_147db9ede body=59 status=ok
// SIG undefined FUN_147db9ede(void)

undefined8 FUN_147db9ede(longlong *param_1)

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



// FUNCTION 147db9f24 FUN_147db9f24 body=55 status=ok
// SIG undefined FUN_147db9f24(void)

void FUN_147db9f24(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_147db9faa(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147db9faa FUN_147db9faa body=54 status=ok
// SIG undefined FUN_147db9faa(void)

void FUN_147db9faa(longlong *param_1)

{
  FUN_147db9fe0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147db9fe0 FUN_147db9fe0 body=128 status=ok
// SIG undefined FUN_147db9fe0(void)

void FUN_147db9fe0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140411364(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147dba062 FUN_147dba062 body=122 status=ok
// SIG undefined FUN_147dba062(void)

longlong FUN_147dba062(longlong param_1,longlong param_2)

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
    FUN_147dba0dc(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147dba0dc FUN_147dba0dc body=124 status=ok
// SIG undefined FUN_147dba0dc(void)

undefined8 * FUN_147dba0dc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_147db9fe0(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1406245f8(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x1c);
    }
  }
  return param_1;
}



// FUNCTION 147dba1a8 FUN_147dba1a8 body=42 status=ok
// SIG undefined FUN_147dba1a8(void)

void FUN_147dba1a8(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_147dba312(param_2);
  return;
}



// FUNCTION 147dba1e8 FUN_147dba1e8 body=54 status=ok
// SIG undefined FUN_147dba1e8(void)

undefined1 FUN_147dba1e8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147dba4d6(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 147dba246 FUN_147dba246 body=59 status=ok
// SIG undefined FUN_147dba246(void)

undefined8 FUN_147dba246(longlong *param_1)

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



// FUNCTION 147dba28c FUN_147dba28c body=55 status=ok
// SIG undefined FUN_147dba28c(void)

void FUN_147dba28c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_147dba312(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147dba312 FUN_147dba312 body=54 status=ok
// SIG undefined FUN_147dba312(void)

void FUN_147dba312(longlong *param_1)

{
  FUN_147dba348(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147dba348 FUN_147dba348 body=396 status=ok
// SIG undefined FUN_147dba348(void)

void FUN_147dba348(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar5 = (longlong)iStack_64 * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar5) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar5) != 0) {
        FUN_1400020a8();
      }
      FUN_147db9faa(lVar2 + lVar5 + 8);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1448fc38a(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar4 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar4 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar3 = 0x80;
      if (0x80 < (int)uVar4) {
        uVar3 = uVar4;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147dba4d6 FUN_147dba4d6 body=122 status=ok
// SIG undefined FUN_147dba4d6(void)

longlong FUN_147dba4d6(longlong param_1,longlong param_2)

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
    FUN_147dba550(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147dba550 FUN_147dba550 body=320 status=ok
// SIG undefined FUN_147dba550(void)

longlong * FUN_147dba550(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (param_1 != param_2) {
    uVar2 = *(uint *)(param_2 + 1);
    FUN_147dba348(param_1,(ulonglong)uVar2);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar2) {
      FUN_14488f93c(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar2) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar6 = 0;
      uVar7 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar5 + (uVar7 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar7 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar6) = *(undefined4 *)(lVar3 + lVar6);
          *(undefined4 *)(lVar4 + 4 + lVar6) = *(undefined4 *)(lVar3 + 4 + lVar6);
        }
        else {
          *(undefined8 *)(lVar4 + lVar6) = *(undefined8 *)(lVar3 + lVar6);
          *(undefined8 *)(lVar4 + 0x28 + lVar6) = 0;
          *(undefined4 *)(lVar4 + 0x30 + lVar6) = 0;
          puVar1 = (undefined8 *)(lVar4 + 8 + lVar6);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar4 + 0x34 + lVar6) = 0xffffffff00000080;
          *(undefined4 *)(lVar4 + 0x3c + lVar6) = 0;
          *(undefined8 *)(lVar4 + 0x48 + lVar6) = 0;
          *(undefined4 *)(lVar4 + 0x50 + lVar6) = 0;
          FUN_147dba062(lVar4 + 8 + lVar6,lVar3 + 8 + lVar6);
          *(undefined8 *)(lVar4 + 0x58 + lVar6) = *(undefined8 *)(lVar3 + 0x58 + lVar6);
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x60;
      } while (uVar2 != uVar7);
    }
  }
  return param_1;
}



// FUNCTION 147dba692 FUN_147dba692 body=472 status=ok
// SIG undefined FUN_147dba692(void)

longlong * FUN_147dba692(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 200,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 200);
  local_3c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_3c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_3c,4);
    }
    else {
      FUN_14572512c(param_1,&local_3c);
    }
  }
  else {
    local_3c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_3c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_145c5b3bf(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_147dbaab6(param_2,0);
      }
    }
  }
  else if ((((int)local_3c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x147ae < local_3c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_3c;
    lVar5 = 0;
    lVar7 = 0;
    do {
      lVar3 = *param_2;
      uVar4 = (**(code **)(*param_1 + 0x160))(param_1,lVar3 + lVar5);
      uVar4 = FUN_146875ac2(uVar4,lVar3 + lVar5 + 0x18);
      FUN_140219018(uVar4,lVar3 + lVar5 + 8);
      lVar7 = lVar7 + 1;
      lVar5 = lVar5 + 200;
    } while (lVar7 < (int)param_2[1]);
  }
  else {
    FUN_147db19d6(param_2);
    if (0 < (int)local_3c) {
      iVar6 = 0;
      do {
        lVar5 = FUN_147dba86c(param_2);
        uVar4 = (**(code **)(*param_1 + 0x160))(param_1,lVar5);
        uVar4 = FUN_146875ac2(uVar4,lVar5 + 0x18);
        FUN_140219018(uVar4,lVar5 + 8);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)local_3c);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147dba86c FUN_147dba86c body=62 status=ok
// SIG undefined FUN_147dba86c(void)

longlong FUN_147dba86c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147dba8d6(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 200 + *param_1;
  FUN_147dba8aa(lVar2);
  return lVar2;
}



// FUNCTION 147dba8aa FUN_147dba8aa body=44 status=ok
// SIG undefined FUN_147dba8aa(void)

void FUN_147dba8aa(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_141711350(param_1 + 3);
  param_1[0x18] = 0;
  return;
}



// FUNCTION 147dba8d6 FUN_147dba8d6 body=150 status=ok
// SIG undefined FUN_147dba8d6(void)

void FUN_147dba8d6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 200,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 200)) {
      uVar5 = uVar4 / 200 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,200,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147dba96e FUN_147dba96e body=328 status=ok
// SIG undefined FUN_147dba96e(void)

undefined8 * FUN_147dba96e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar7 = param_2;
  puVar8 = param_1;
  for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  param_1[10] = 0;
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
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  uVar3 = *(undefined4 *)((longlong)param_2 + 100);
  uVar4 = *(undefined4 *)(param_2 + 0xd);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = uVar3;
  *(undefined4 *)(param_1 + 0xd) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar5;
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  param_1[0x10] = 0;
  iVar1 = *(int *)(param_2 + 0x11);
  pvVar2 = (void *)param_2[0x10];
  *(int *)(param_1 + 0x11) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x10,iVar1,0);
    memcpy((void *)param_1[0x10],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x12] = 0;
  iVar1 = *(int *)(param_2 + 0x13);
  pvVar2 = (void *)param_2[0x12];
  *(int *)(param_1 + 0x13) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  }
  else {
    FUN_147db82d6(param_1 + 0x12,iVar1,0);
    memcpy((void *)param_1[0x12],pvVar2,(longlong)iVar1 * 0x14);
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  return param_1;
}



// FUNCTION 147dbaab6 FUN_147dbaab6 body=115 status=ok
// SIG undefined FUN_147dbaab6(void)

void FUN_147dbaab6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 200,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 200)) {
      uVar2 = uVar1 / 200 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,200,8);
  }
  return;
}



// FUNCTION 147dbab2a FUN_147dbab2a body=139 status=ok
// SIG undefined FUN_147dbab2a(void)

bool FUN_147dbab2a(double *param_1,double param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = *param_1;
  dVar3 = *param_3;
  if (dVar3 <= dVar1) {
    dVar3 = param_3[3];
    dVar2 = 0.0;
    if (dVar1 <= dVar3) goto LAB_147dbab45;
  }
  dVar2 = (dVar1 - dVar3) * (dVar1 - dVar3);
LAB_147dbab45:
  dVar1 = param_1[1];
  dVar3 = param_3[1];
  if ((dVar1 < dVar3) || (dVar3 = param_3[4], dVar3 < dVar1)) {
    dVar2 = dVar2 + (dVar1 - dVar3) * (dVar1 - dVar3);
  }
  dVar1 = param_1[2];
  dVar3 = param_3[2];
  if ((dVar1 < dVar3) || (dVar3 = param_3[5], dVar3 < dVar1)) {
    dVar2 = dVar2 + (dVar1 - dVar3) * (dVar1 - dVar3);
  }
  return dVar2 <= param_2;
}



// FUNCTION 147dbabb6 FUN_147dbabb6 body=147 status=ok
// SIG undefined FUN_147dbabb6(void)

void FUN_147dbabb6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147dbac4a FUN_147dbac4a body=106 status=ok
// SIG undefined FUN_147dbac4a(void)

undefined8 FUN_147dbac4a(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x18,0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0x18)) {
    uVar4 = uVar2 / 0x18 & 0xffffffff;
  }
  if ((int)uVar4 == *(int *)(param_1 + 0x18c)) {
    return SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  }
  *(int *)(param_1 + 0x18c) = (int)uVar4;
  uVar3 = FUN_147dbacb4(param_1,*(undefined4 *)(param_1 + 0x188),uVar4,0x18);
  return uVar3;
}



// FUNCTION 147dbacb4 FUN_147dbacb4 body=150 status=ok
// SIG undefined FUN_147dbacb4(void)

void FUN_147dbacb4(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x180);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x180,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x180),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x180,param_2,param_3,param_4);
  return;
}



// FUNCTION 147dbad4a FUN_147dbad4a body=142 status=ok
// SIG undefined FUN_147dbad4a(void)

void FUN_147dbad4a(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x188);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x10;
    if (0x10 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x18c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0x18)) {
        uVar4 = uVar3 / 0x18 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x18c) = (int)uVar4;
    FUN_147dbacb4(param_1,param_2,uVar4,0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147dbadd9 FUN_147dbadd9 body=41 status=ok
// SIG undefined FUN_147dbadd9(void)

void FUN_147dbadd9(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147db851e(param_1);
    param_1 = param_1 + 0xb0;
  }
  return;
}



// FUNCTION 147dbae02 FUN_147dbae02 body=38 status=ok
// SIG undefined FUN_147dbae02(void)

undefined8 FUN_147dbae02(undefined8 param_1,int param_2)

{
  FUN_145bb4c80();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dbae28 FUN_147dbae28 body=33 status=ok
// SIG undefined FUN_147dbae28(void)

void FUN_147dbae28(undefined8 param_1)

{
  FUN_145bb4cfe();
  FUN_140f93338(&DAT_14c9647b8,param_1);
  return;
}



// FUNCTION 147dbae7e FUN_147dbae7e body=326 status=ok
// SIG undefined FUN_147dbae7e(void)

void FUN_147dbae7e(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x2c + (longlong)iVar4 * 0x30) * 4) =
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



// FUNCTION 147dbafc6 FUN_147dbafc6 body=38 status=ok
// SIG undefined FUN_147dbafc6(void)

undefined8 FUN_147dbafc6(undefined8 param_1,int param_2)

{
  FUN_145bf2494();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dbafec FUN_147dbafec body=33 status=ok
// SIG undefined FUN_147dbafec(void)

void FUN_147dbafec(undefined8 param_1)

{
  FUN_145bf2512();
  FUN_140f93338(&DAT_14c9647b8,param_1);
  return;
}



// FUNCTION 147dbb042 FUN_147dbb042 body=322 status=ok
// SIG undefined FUN_147dbb042(void)

void FUN_147dbb042(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x44 + (longlong)iVar4 * 0x48) * 4) =
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



// FUNCTION 147dbb186 FUN_147dbb186 body=185 status=ok
// SIG undefined FUN_147dbb186(void)

int FUN_147dbb186(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x14);
        cVar1 = FUN_140bf1e82(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_147dbb1af;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_147dbb1af:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 147dbb240 FUN_147dbb240 body=297 status=ok
// SIG undefined FUN_147dbb240(void)

undefined4 * FUN_147dbb240(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
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
  FUN_147dbb36a(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2;
  cVar4 = FUN_147dbb450(param_1,uVar9,local_40,&local_4c);
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
      *(uint *)(local_40 + 2) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
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
      FUN_147dbb550(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dbb36a FUN_147dbb36a body=230 status=ok
// SIG undefined FUN_147dbb36a(void)

int * FUN_147dbb36a(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 147dbb450 FUN_147dbb450 body=141 status=ok
// SIG undefined FUN_147dbb450(void)

undefined8 FUN_147dbb450(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar2 = FUN_147dbb186();
    if (iVar2 != -1) {
      lVar1 = *param_1;
      uVar3 = *param_3;
      *(undefined4 *)(lVar1 + 8 + (longlong)iVar2 * 0x14) = *(undefined4 *)(param_3 + 1);
      *(undefined8 *)(lVar1 + (longlong)iVar2 * 0x14) = uVar3;
      FUN_147dbb4de(param_1,*param_4);
      *param_4 = iVar2;
      uVar3 = 1;
      goto LAB_147dbb474;
    }
  }
  uVar3 = 0;
LAB_147dbb474:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


