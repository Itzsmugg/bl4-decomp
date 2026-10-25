// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1477aa6c8 FUN_1477aa6c8 body=101 status=ok
// SIG undefined FUN_1477aa6c8(void)

void FUN_1477aa6c8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a55e5c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1477aa72e FUN_1477aa72e body=101 status=ok
// SIG undefined FUN_1477aa72e(void)

void FUN_1477aa72e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a55e5c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1477aa794 FUN_1477aa794 body=134 status=ok
// SIG undefined FUN_1477aa794(void)

void FUN_1477aa794(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a55e5c0;
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
                    /* WARNING: Could not recover jumptable at 0x0001477aa80b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1477aa81a FUN_1477aa81a body=39 status=ok
// SIG undefined FUN_1477aa81a(void)

void FUN_1477aa81a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001477aa83d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 1477aa842 FUN_1477aa842 body=134 status=ok
// SIG undefined FUN_1477aa842(void)

bool FUN_1477aa842(longlong param_1)

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
    FUN_1400841de(param_1 + 0x18,&local_28);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477aa8ca FUN_1477aa8ca body=124 status=ok
// SIG undefined FUN_1477aa8ca(void)

ulonglong FUN_1477aa8ca(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  uVar5 = (ulonglong)iVar1;
  if (uVar5 != 0) {
    lVar6 = uVar5 * 8;
    uVar4 = 0;
    do {
      if (*(longlong *)(lVar3 + uVar4 * 8) == *param_2) {
        if ((int)uVar4 != -1) {
          uVar5 = uVar4 & 0xffffffff;
          goto LAB_1477aa923;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_1456af342(param_1,iVar1);
    lVar2 = *(longlong *)(param_1 + 0x20);
  }
  if (lVar2 != 0) {
    param_1 = lVar2;
  }
  *(longlong *)(param_1 + uVar5 * 8) = *param_2;
LAB_1477aa923:
  return uVar5 & 0xffffffff;
}



// FUNCTION 1477aa946 FUN_1477aa946 body=90 status=ok
// SIG undefined FUN_1477aa946(void)

void FUN_1477aa946(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_144a3809e((longlong)param_2,1);
    iVar2 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  if (param_3 < iVar2) {
    FUN_1446f8d3c(param_1,0,iVar2,1,1);
    param_3 = iVar2;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1477aa9a0 FUN_1477aa9a0 body=57 status=ok
// SIG undefined FUN_1477aa9a0(void)

void FUN_1477aa9a0(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a55e670;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_147762c48(param_1 + 0x20);
  return;
}



// FUNCTION 1477aa9da FUN_1477aa9da body=29 status=ok
// SIG undefined FUN_1477aa9da(void)

undefined8 FUN_1477aa9da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477aa9f8 FUN_1477aa9f8 body=73 status=ok
// SIG undefined FUN_1477aa9f8(void)

undefined8 * FUN_1477aa9f8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a55e670;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_147762c48(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477aaa4a FUN_1477aaa4a body=29 status=ok
// SIG undefined FUN_1477aaa4a(void)

undefined8 FUN_1477aaa4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477aaa84 FUN_1477aaa84 body=101 status=ok
// SIG undefined FUN_1477aaa84(void)

void FUN_1477aaa84(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a55e6d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1477aaaea FUN_1477aaaea body=101 status=ok
// SIG undefined FUN_1477aaaea(void)

void FUN_1477aaaea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a55e6d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1477aab50 FUN_1477aab50 body=134 status=ok
// SIG undefined FUN_1477aab50(void)

void FUN_1477aab50(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a55e6d0;
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
                    /* WARNING: Could not recover jumptable at 0x0001477aabc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1477aabe8 FUN_1477aabe8 body=25 status=ok
// SIG undefined FUN_1477aabe8(void)

undefined8 FUN_1477aabe8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1477aac02 FUN_1477aac02 body=218 status=ok
// SIG undefined FUN_1477aac02(void)

void FUN_1477aac02(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar1 = DAT_14cab9570;
  lVar4 = (longlong)DAT_14cab9570;
  iVar3 = DAT_14cab9570;
  if (lVar4 != 0) {
    plVar2 = &DAT_14cab9550;
    if (DAT_14cab9568 != (longlong *)0x0) {
      plVar2 = DAT_14cab9568;
    }
    iVar3 = 0;
    bVar7 = *plVar2 == *(longlong *)*param_1;
    iVar8 = 0;
    do {
      iVar5 = iVar8 + 1;
      if (iVar8 + 1 < iVar1) {
        iVar5 = iVar1;
      }
      iVar9 = iVar8;
      lVar6 = (longlong)iVar8;
      do {
        lVar6 = lVar6 + 1;
        iVar10 = iVar5;
        if (lVar4 <= lVar6) break;
        iVar9 = iVar9 + 1;
        iVar10 = iVar9;
      } while (bVar7 == (plVar2[lVar6] == *(longlong *)*param_1));
      if (bVar7 == false) {
        if (iVar3 != iVar8) {
          memmove(plVar2 + iVar3,plVar2 + iVar8,(longlong)(iVar10 - iVar8) << 3);
        }
        iVar3 = iVar3 + (iVar10 - iVar8);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar8 = iVar10;
    } while (lVar6 < lVar4);
  }
  DAT_14cab9570 = iVar3;
  return;
}



// FUNCTION 1477aacdc FUN_1477aacdc body=124 status=ok
// SIG undefined FUN_1477aacdc(void)

longlong FUN_1477aacdc(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1477aad5a();
  if (lVar1 == 0) {
    local_30 = param_3;
    FUN_1477aadb8(param_1,&local_24,param_2);
    lVar1 = (longlong)local_24 * 0x50 + *param_1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 8;
}



// FUNCTION 1477aad5a FUN_1477aad5a body=93 status=ok
// SIG undefined FUN_1477aad5a(void)

longlong FUN_1477aad5a(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x50;
        if ((*(int *)(lVar1 + lVar4) == *param_3) && (*(int *)(lVar1 + 4 + lVar4) == param_3[1])) {
          return lVar1 + lVar4;
        }
        iVar2 = *(int *)(lVar1 + lVar4 + 0x48);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1477aadb8 FUN_1477aadb8 body=272 status=ok
// SIG undefined FUN_1477aadb8(void)

undefined4 * FUN_1477aadb8(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_1477aaeca(param_1,local_48);
  FUN_1477ab062(param_4,local_40);
  *(undefined4 *)(local_40 + 0x48) = 0xffffffff;
  cVar1 = FUN_1477aafb8(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x4c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x48) =
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
      FUN_1477ab176(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477aaeca FUN_1477aaeca body=238 status=ok
// SIG undefined FUN_1477aaeca(void)

int * FUN_1477aaeca(longlong *param_1,int *param_2)

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
      FUN_1406fba42(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x50);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x50) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x50 + *param_1;
  return param_2;
}



// FUNCTION 1477aafb8 FUN_1477aafb8 body=170 status=ok
// SIG undefined FUN_1477aafb8(void)

undefined8 FUN_1477aafb8(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar3 * 0x50;
        _Dst = (void *)(lVar1 + lVar4);
        if ((*(int *)(lVar1 + lVar4) == *param_3) && (*(int *)(lVar1 + 4 + lVar4) == param_3[1])) {
          FUN_147791160((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x48);
          FUN_1477ab0fc(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)_Dst + 0x48);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 1477ab062 FUN_1477ab062 body=153 status=ok
// SIG undefined FUN_1477ab062(void)

undefined8 * FUN_1477ab062(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_78 [40];
  undefined1 local_50;
  undefined2 local_4f;
  undefined1 local_4d;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0;
  local_4c = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  *param_2 = *(undefined8 *)*param_1;
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined2 *)((longlong)param_2 + 9) = local_4f;
  *(undefined1 *)((longlong)param_2 + 0xb) = local_4d;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_44;
  param_2[3] = local_40;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  FUN_147791160(&local_50);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477ab0fc FUN_1477ab0fc body=122 status=ok
// SIG undefined FUN_1477ab0fc(void)

void FUN_1477ab0fc(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 1477ab176 FUN_1477ab176 body=450 status=ok
// SIG undefined FUN_1477ab176(void)

void FUN_1477ab176(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x50;
        iVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar10),*(undefined4 *)(lVar3 + 4 + lVar10));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x4c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x48 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477ab33a FUN_1477ab33a body=131 status=ok
// SIG undefined FUN_1477ab33a(void)

void FUN_1477ab33a(longlong *param_1,int *param_2)

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
        lVar4 = (longlong)iVar2 * 0x50;
        if ((*(int *)(lVar1 + lVar4) == *param_2) && (*(int *)(lVar1 + 4 + lVar4) == param_2[1])) {
          FUN_1477ab3be(param_1);
          return;
        }
        iVar2 = *(int *)(lVar4 + lVar1 + 0x48);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1477ab3be FUN_1477ab3be body=128 status=ok
// SIG undefined FUN_1477ab3be(void)

void FUN_1477ab3be(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x50;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x4c + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x48 + lVar6 * 0x50);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x50 + 0x48);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x48);
  FUN_147791160(*param_1 + lVar2 + 8);
  FUN_1477ab0fc(param_1,param_2);
  return;
}



// FUNCTION 1477ab43e FUN_1477ab43e body=24 status=ok
// SIG undefined FUN_1477ab43e(void)

void FUN_1477ab43e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477ab452. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1477ab456 FUN_1477ab456 body=29 status=ok
// SIG undefined FUN_1477ab456(void)

undefined8 FUN_1477ab456(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477ab474 FUN_1477ab474 body=31 status=ok
// SIG undefined FUN_1477ab474(void)

undefined8 FUN_1477ab474(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477ab4b0 FUN_1477ab4b0 body=93 status=ok
// SIG undefined FUN_1477ab4b0(void)

void FUN_1477ab4b0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a55e760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1477ab50e FUN_1477ab50e body=126 status=ok
// SIG undefined FUN_1477ab50e(void)

void FUN_1477ab50e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a55e760;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477ab57d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1477ab58c FUN_1477ab58c body=21 status=ok
// SIG undefined FUN_1477ab58c(void)

undefined8 FUN_1477ab58c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1477ab5a6 FUN_1477ab5a6 body=31 status=ok
// SIG undefined FUN_1477ab5a6(void)

undefined8 FUN_1477ab5a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477ab5d8 FUN_1477ab5d8 body=93 status=ok
// SIG undefined FUN_1477ab5d8(void)

void FUN_1477ab5d8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a55e880;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a55e810;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1477ab636 FUN_1477ab636 body=93 status=ok
// SIG undefined FUN_1477ab636(void)

void FUN_1477ab636(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a55e880;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a55e810;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1477ab694 FUN_1477ab694 body=126 status=ok
// SIG undefined FUN_1477ab694(void)

void FUN_1477ab694(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a55e880;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a55e810;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477ab703. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1477ab722 FUN_1477ab722 body=132 status=ok
// SIG undefined FUN_1477ab722(void)

void FUN_1477ab722(longlong param_1,int param_2)

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



// FUNCTION 1477ab7a8 FUN_1477ab7a8 body=132 status=ok
// SIG undefined FUN_1477ab7a8(void)

void FUN_1477ab7a8(longlong param_1,int param_2)

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



// FUNCTION 1477ab82e FUN_1477ab82e body=163 status=ok
// SIG undefined FUN_1477ab82e(void)

void FUN_1477ab82e(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_2 == 0) {
    uVar2 = 0;
    goto LAB_1477ab878;
  }
  uVar4 = 8;
  if (param_2 < 9) {
LAB_1477ab849:
    uVar2 = (uint)uVar4;
    if ((uVar2 < 9) && (*(longlong *)(param_1 + 0x1c0) == 0)) goto LAB_1477ab878;
    uVar5 = 0;
    if (8 < uVar2) {
      uVar5 = uVar4 & 0xffffffff;
    }
  }
  else {
    uVar2 = 0;
    uVar4 = FUN_144a3809e((longlong)(int)param_2 * 0x38,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar4 >> 3;
    uVar4 = (uVar4 >> 3) / 7;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    if ((int)param_2 <= iVar3) {
      if (iVar3 < 1) goto LAB_1477ab878;
      goto LAB_1477ab849;
    }
    uVar2 = 0x7fffffff;
    uVar5 = 0x7fffffff;
  }
  FUN_1446efa72(param_1 + 0x1c0,0,uVar5,0x38);
LAB_1477ab878:
  *(uint *)(param_1 + 0x1cc) = uVar2;
  return;
}



// FUNCTION 1477ab8d1 FUN_1477ab8d1 body=52 status=ok
// SIG undefined FUN_1477ab8d1(void)

void FUN_1477ab8d1(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1477ab906(param_1,param_2);
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return;
}



// FUNCTION 1477ab906 FUN_1477ab906 body=168 status=ok
// SIG undefined FUN_1477ab906(void)

longlong * FUN_1477ab906(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(char *)(param_1 + 1) = (char)param_2[1];
  lVar2 = param_2[2];
  *(char *)(param_1 + 2) = (char)lVar2;
  if ((char)lVar2 == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  }
  lVar2 = param_2[3];
  *(char *)(param_1 + 3) = (char)lVar2;
  if ((char)lVar2 == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  }
  lVar2 = param_2[4];
  *(char *)(param_1 + 4) = (char)lVar2;
  if ((char)lVar2 == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  }
  lVar2 = param_2[5];
  *(char *)(param_1 + 5) = (char)lVar2;
  if ((char)lVar2 == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  }
  lVar2 = param_2[6];
  *(char *)(param_1 + 6) = (char)lVar2;
  if ((char)lVar2 == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  }
  cVar1 = *(char *)((longlong)param_2 + 0x35);
  *(char *)((longlong)param_1 + 0x35) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x34) = *(undefined1 *)((longlong)param_2 + 0x34);
  }
  return param_1;
}



// FUNCTION 1477ab9ae FUN_1477ab9ae body=48 status=ok
// SIG undefined FUN_1477ab9ae(void)

void FUN_1477ab9ae(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x38,8);
  }
  return;
}



// FUNCTION 1477ab9de FUN_1477ab9de body=62 status=ok
// SIG undefined FUN_1477ab9de(void)

void FUN_1477ab9de(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1477aba1c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1477aba1c FUN_1477aba1c body=93 status=ok
// SIG undefined FUN_1477aba1c(void)

ulonglong FUN_1477aba1c(uint param_1,uint param_2)

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



// FUNCTION 1477aba7a FUN_1477aba7a body=48 status=ok
// SIG undefined FUN_1477aba7a(void)

void FUN_1477aba7a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1477abaaa FUN_1477abaaa body=32 status=ok
// SIG undefined FUN_1477abaaa(void)

void FUN_1477abaaa(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 6;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((longlong)param_1 + 0x35) = 0;
  return;
}



// FUNCTION 1477abaca FUN_1477abaca body=143 status=ok
// SIG undefined FUN_1477abaca(void)

void FUN_1477abaca(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1477abb5a FUN_1477abb5a body=86 status=ok
// SIG undefined FUN_1477abb5a(void)

void FUN_1477abb5a(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x48) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)(param_1 + 0x4c) = 8;
    return;
  }
  FUN_1477abbb0(param_1,param_3,param_4);
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar1 = param_1;
  }
  FUN_1477abc27(lVar1,param_2,param_3);
  return;
}



// FUNCTION 1477abbb0 FUN_1477abbb0 body=119 status=ok
// SIG undefined FUN_1477abbb0(void)

void FUN_1477abbb0(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 8;
    if (8 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      uVar1 = (uint)(uVar2 >> 3);
      uVar3 = 0x7fffffff;
      if ((int)param_2 <= (int)uVar1) {
        uVar3 = uVar1;
      }
    }
  }
  if (((int)param_3 < (int)uVar3) &&
     ((param_3 = uVar3, 8 < uVar3 || (*(longlong *)(param_1 + 0x40) != 0)))) {
    uVar1 = 0;
    if (8 < uVar3) {
      uVar1 = uVar3;
    }
    FUN_1446efa72(param_1 + 0x40,0,uVar1,8);
  }
  *(uint *)(param_1 + 0x4c) = param_3;
  return;
}



// FUNCTION 1477abc27 FUN_1477abc27 body=28 status=ok
// SIG undefined FUN_1477abc27(void)

void FUN_1477abc27(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_2 + lVar1 * 8);
      lVar1 = lVar1 + 1;
    } while (param_3 != (int)lVar1);
  }
  return;
}



// FUNCTION 1477abc44 FUN_1477abc44 body=190 status=ok
// SIG undefined FUN_1477abc44(void)

void FUN_1477abc44(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    uVar6 = 0;
    bVar5 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar5) == 1) {
        FUN_1456cec3c(lVar3);
        bVar5 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar6) == lVar3) {
        if ((int)(~uVar6 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar6 = uVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != uVar6);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1477ab7a8(param_1,iVar1);
  }
  lVar4 = *param_2;
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 1477abd02 FUN_1477abd02 body=29 status=ok
// SIG undefined FUN_1477abd02(void)

undefined8 FUN_1477abd02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477abd3a FUN_1477abd3a body=29 status=ok
// SIG undefined FUN_1477abd3a(void)

bool FUN_1477abd3a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1477abd58 FUN_1477abd58 body=26 status=ok
// SIG undefined FUN_1477abd58(void)

bool FUN_1477abd58(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1477abd72 FUN_1477abd72 body=24 status=ok
// SIG undefined FUN_1477abd72(void)

bool FUN_1477abd72(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1477abd8a FUN_1477abd8a body=101 status=ok
// SIG undefined FUN_1477abd8a(void)

void FUN_1477abd8a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a55e8f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1477abdf0 FUN_1477abdf0 body=101 status=ok
// SIG undefined FUN_1477abdf0(void)

void FUN_1477abdf0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a55e8f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1477abe56 FUN_1477abe56 body=134 status=ok
// SIG undefined FUN_1477abe56(void)

void FUN_1477abe56(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a55e8f0;
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
                    /* WARNING: Could not recover jumptable at 0x0001477abecd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1477abedc FUN_1477abedc body=39 status=ok
// SIG undefined FUN_1477abedc(void)

void FUN_1477abedc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001477abeff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 1477abf04 FUN_1477abf04 body=134 status=ok
// SIG undefined FUN_1477abf04(void)

bool FUN_1477abf04(longlong param_1)

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
    FUN_1400841de(param_1 + 0x18,&local_28);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477abf8c FUN_1477abf8c body=106 status=ok
// SIG undefined FUN_1477abf8c(void)

undefined8 FUN_1477abf8c(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x28,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x28)) {
    uVar5 = uVar2 / 0x28 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x28,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 1477abff6 FUN_1477abff6 body=136 status=ok
// SIG undefined FUN_1477abff6(void)

void FUN_1477abff6(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  
  lVar4 = 0;
  bVar3 = DAT_14c950c29;
  do {
    lVar2 = *(longlong *)(param_2 + lVar4);
    *(longlong *)(param_1 + lVar4) = lVar2;
    if ((lVar2 != 0 & bVar3) == 1) {
      FUN_1456cec3c();
      bVar3 = DAT_14c950c29;
    }
    lVar2 = param_1 + lVar4;
    lVar1 = param_2 + lVar4;
    *(undefined8 *)(lVar2 + 8) = 0;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
    *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(lVar1 + 0x20);
    lVar4 = lVar4 + 0x28;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1477ac07e FUN_1477ac07e body=62 status=ok
// SIG undefined FUN_1477ac07e(void)

void FUN_1477ac07e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1477ac0bc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1477ac0bc FUN_1477ac0bc body=93 status=ok
// SIG undefined FUN_1477ac0bc(void)

ulonglong FUN_1477ac0bc(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1477ac11a FUN_1477ac11a body=132 status=ok
// SIG undefined FUN_1477ac11a(void)

void FUN_1477ac11a(longlong param_1,int param_2)

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



// FUNCTION 1477ac1a0 FUN_1477ac1a0 body=147 status=ok
// SIG undefined FUN_1477ac1a0(void)

void FUN_1477ac1a0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1477ac234 FUN_1477ac234 body=23 status=ok
// SIG undefined FUN_1477ac234(void)

void FUN_1477ac234(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_2 + lVar1 * 8);
    lVar1 = lVar1 + 1;
  } while (param_3 != (int)lVar1);
  return;
}



// FUNCTION 1477ac24c FUN_1477ac24c body=119 status=ok
// SIG undefined FUN_1477ac24c(void)

void FUN_1477ac24c(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_1477ac2c4(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1477ac2c4 FUN_1477ac2c4 body=141 status=ok
// SIG undefined FUN_1477ac2c4(void)

void FUN_1477ac2c4(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,8);
  return;
}



// FUNCTION 1477ac352 FUN_1477ac352 body=29 status=ok
// SIG undefined FUN_1477ac352(void)

undefined8 FUN_1477ac352(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477ac38a FUN_1477ac38a body=29 status=ok
// SIG undefined FUN_1477ac38a(void)

bool FUN_1477ac38a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x20);
  return lVar1 == param_2;
}



// FUNCTION 1477ac3a8 FUN_1477ac3a8 body=26 status=ok
// SIG undefined FUN_1477ac3a8(void)

bool FUN_1477ac3a8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x20,1);
  return lVar1 == 0;
}



// FUNCTION 1477ac3c2 FUN_1477ac3c2 body=24 status=ok
// SIG undefined FUN_1477ac3c2(void)

bool FUN_1477ac3c2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x20);
  return lVar1 != 0;
}



// FUNCTION 1477ac3e6 FUN_1477ac3e6 body=124 status=ok
// SIG undefined FUN_1477ac3e6(void)

void FUN_1477ac3e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a55e9d0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14a55e960;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 1477ac462 FUN_1477ac462 body=124 status=ok
// SIG undefined FUN_1477ac462(void)

void FUN_1477ac462(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a55e9d0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14a55e960;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 1477ac4de FUN_1477ac4de body=157 status=ok
// SIG undefined FUN_1477ac4de(void)

void FUN_1477ac4de(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a55e9d0;
  p_Var1->CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  (p_Var1->ProcessLocksList).Flink = (_LIST_ENTRY *)0x0;
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_14a55e960;
  DVar3 = *(DWORD *)(param_1 + 0x24);
  DVar4 = *(DWORD *)(param_1 + 0x28);
  uVar5 = *(undefined4 *)(param_1 + 0x2c);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var1->ContentionCount = DVar3;
  p_Var1->Flags = DVar4;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar5;
  p_Var1->SpareWORD = (short)((uint)uVar5 >> 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477ac56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1477ac57c FUN_1477ac57c body=94 status=ok
// SIG undefined FUN_1477ac57c(void)

void FUN_1477ac57c(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14479d2ce(param_1 + 0x20);
  local_20 = *(undefined8 *)(param_1 + 8);
  local_18 = *(undefined8 *)(param_1 + 0x10);
  (**(code **)(param_1 + 0x28))(*(int *)(param_1 + 0x30) + lVar1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477ac5dc FUN_1477ac5dc body=157 status=ok
// SIG undefined FUN_1477ac5dc(void)

bool FUN_1477ac5dc(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x20,&local_30);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x20);
  if (lVar2 != 0) {
    local_30 = *(longlong *)(param_1 + 8);
    local_28 = *(undefined8 *)(param_1 + 0x10);
    (**(code **)(param_1 + 0x28))(*(int *)(param_1 + 0x30) + lVar2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477ac67c FUN_1477ac67c body=132 status=ok
// SIG undefined FUN_1477ac67c(void)

void FUN_1477ac67c(longlong param_1,int param_2)

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



// FUNCTION 1477ac702 FUN_1477ac702 body=132 status=ok
// SIG undefined FUN_1477ac702(void)

void FUN_1477ac702(longlong param_1,int param_2)

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



// FUNCTION 1477ac788 FUN_1477ac788 body=62 status=ok
// SIG undefined FUN_1477ac788(void)

void FUN_1477ac788(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1477ac7c6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1477ac7c6 FUN_1477ac7c6 body=93 status=ok
// SIG undefined FUN_1477ac7c6(void)

ulonglong FUN_1477ac7c6(uint param_1,uint param_2)

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



// FUNCTION 1477ac832 FUN_1477ac832 body=175 status=ok
// SIG undefined FUN_1477ac832(void)

void FUN_1477ac832(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  lVar4 = param_1[1];
  if (plVar2 != (longlong *)0x0) {
LAB_1477ac846:
    do {
      for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
        if (((~*(uint *)(*(longlong *)(lVar4 + 8) + 0x18) & 0x808001) == 0) &&
           ((*(char *)((longlong)param_1 + 0x15) != '\0' || ((*(byte *)(lVar4 + 0x3b) & 0x20) == 0))
           )) goto LAB_1477ac8a7;
      }
      if (*(char *)((longlong)param_1 + 0x16) == '\x01') {
        lVar4 = (longlong)(int)param_1[2] + 1;
        iVar3 = (int)lVar4;
        *(int *)(param_1 + 2) = iVar3;
        if (iVar3 < (int)plVar2[0x3c]) {
          lVar1 = *(longlong *)(plVar2[0x3b] + lVar4 * 0x10);
          lVar4 = 0;
          if (lVar1 != 0) {
            lVar4 = *(longlong *)(lVar1 + 0x50);
          }
          goto LAB_1477ac846;
        }
      }
      if (*(char *)((longlong)param_1 + 0x14) != '\x01') goto LAB_1477ac8dd;
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))();
      if (plVar2 == (longlong *)0x0) goto LAB_1477ac8db;
      lVar4 = plVar2[10];
      *(undefined4 *)(param_1 + 2) = 0xffffffff;
    } while( true );
  }
  plVar2 = (longlong *)0x0;
LAB_1477ac8a7:
  *param_1 = (longlong)plVar2;
  param_1[1] = lVar4;
  return;
LAB_1477ac8db:
  plVar2 = (longlong *)0x0;
LAB_1477ac8dd:
  lVar4 = 0;
  goto LAB_1477ac8a7;
}



// FUNCTION 1477ac8e2 FUN_1477ac8e2 body=335 status=ok
// SIG undefined FUN_1477ac8e2(void)

undefined4 * FUN_1477ac8e2(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1477aca32(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_1477acb18(param_1,uVar9,local_40,&local_4c);
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
      FUN_1477acc0a(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477aca32 FUN_1477aca32 body=230 status=ok
// SIG undefined FUN_1477aca32(void)

int * FUN_1477aca32(longlong *param_1,int *param_2)

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



// FUNCTION 1477acb18 FUN_1477acb18 body=128 status=ok
// SIG undefined FUN_1477acb18(void)

undefined8 FUN_1477acb18(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1477acb98((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1477acb98 FUN_1477acb98 body=114 status=ok
// SIG undefined FUN_1477acb98(void)

void FUN_1477acb98(longlong *param_1,int param_2)

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



// FUNCTION 1477acc0a FUN_1477acc0a body=473 status=ok
// SIG undefined FUN_1477acc0a(void)

void FUN_1477acc0a(longlong *param_1)

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
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
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



// FUNCTION 1477acde4 FUN_1477acde4 body=114 status=ok
// SIG undefined FUN_1477acde4(void)

void FUN_1477acde4(longlong *param_1,int param_2)

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



// FUNCTION 1477ace56 FUN_1477ace56 body=23 status=ok
// SIG undefined FUN_1477ace56(void)

void FUN_1477ace56(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_2 + lVar1 * 8);
    lVar1 = lVar1 + 1;
  } while (param_3 != (int)lVar1);
  return;
}



// FUNCTION 1477ace6e FUN_1477ace6e body=85 status=ok
// SIG undefined FUN_1477ace6e(void)

void FUN_1477ace6e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_14333de96();
  return;
}



// FUNCTION 1477acec4 FUN_1477acec4 body=47 status=ok
// SIG undefined FUN_1477acec4(void)

void FUN_1477acec4(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_1477acf4a(param_1,param_2);
    param_1 = param_1 + 0x60;
    param_2 = param_2 + 0x60;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1477acef4 FUN_1477acef4 body=85 status=ok
// SIG undefined FUN_1477acef4(void)

void FUN_1477acef4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_14333e058();
  return;
}



// FUNCTION 1477acf4a FUN_1477acf4a body=116 status=ok
// SIG undefined FUN_1477acf4a(void)

undefined8 * FUN_1477acf4a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
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
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  FUN_140d87c98(param_1 + 4,param_2 + 4);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  return param_1;
}



// FUNCTION 1477acfbe FUN_1477acfbe body=48 status=ok
// SIG undefined FUN_1477acfbe(void)

void FUN_1477acfbe(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1477acfee FUN_1477acfee body=48 status=ok
// SIG undefined FUN_1477acfee(void)

void FUN_1477acfee(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x60,8);
  }
  return;
}



// FUNCTION 1477ad01e FUN_1477ad01e body=110 status=ok
// SIG undefined FUN_1477ad01e(void)

void FUN_1477ad01e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caba868) {
    FUN_144b3d300(&DAT_14caba868);
    if (DAT_14caba868 == -1) {
      FUN_140056680(&DAT_14caba858,L"FUMGDragDropOp");
      atexit((_func_5014 *)&LAB_14333e21d);
      _Init_thread_footer(&DAT_14caba868);
      return;
    }
  }
  return;
}



// FUNCTION 1477ad08c FUN_1477ad08c body=48 status=ok
// SIG undefined FUN_1477ad08c(void)

void FUN_1477ad08c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1477ad0bc FUN_1477ad0bc body=132 status=ok
// SIG undefined FUN_1477ad0bc(void)

void FUN_1477ad0bc(longlong param_1,int param_2)

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



// FUNCTION 1477ad142 FUN_1477ad142 body=360 status=ok
// SIG undefined FUN_1477ad142(void)

undefined4 * FUN_1477ad142(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1477ad2ac(param_1,local_48);
  plVar1 = (longlong *)param_3[1];
  uVar9 = *(undefined8 *)*param_3;
  *local_40 = uVar9;
  lVar7 = *plVar1;
  local_40[1] = lVar7;
  if ((lVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
    uVar9 = *local_40;
  }
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar9 >> 0x10);
  uVar4 = (uint)uVar9 & 0xffff;
  uVar8 = ((uint)uVar9 << 0x10 | uVar4) + (int)((ulonglong)uVar9 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_1477ad392(param_1,uVar8,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x14) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_1477ad484(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477ad2ac FUN_1477ad2ac body=230 status=ok
// SIG undefined FUN_1477ad2ac(void)

int * FUN_1477ad2ac(longlong *param_1,int *param_2)

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



// FUNCTION 1477ad392 FUN_1477ad392 body=128 status=ok
// SIG undefined FUN_1477ad392(void)

undefined8 FUN_1477ad392(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1477ad412((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1477ad412 FUN_1477ad412 body=114 status=ok
// SIG undefined FUN_1477ad412(void)

void FUN_1477ad412(longlong *param_1,int param_2)

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



// FUNCTION 1477ad484 FUN_1477ad484 body=473 status=ok
// SIG undefined FUN_1477ad484(void)

void FUN_1477ad484(longlong *param_1)

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
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
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



// FUNCTION 1477ad65e FUN_1477ad65e body=132 status=ok
// SIG undefined FUN_1477ad65e(void)

void FUN_1477ad65e(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_1477ad6e2(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1477ad6e2 FUN_1477ad6e2 body=87 status=ok
// SIG undefined FUN_1477ad6e2(void)

void FUN_1477ad6e2(longlong *param_1,int param_2)

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
  FUN_1477ad412();
  return;
}



// FUNCTION 1477ad73a FUN_1477ad73a body=126 status=ok
// SIG undefined FUN_1477ad73a(void)

void FUN_1477ad73a(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = DAT_14cab9278;
  local_28 = DAT_14cab9280;
  cVar1 = (*(code *)*param_3)(param_3[1]);
  if (cVar1 != '\0') {
    local_40 = *param_3;
    local_38 = param_3[1];
    FUN_14775e24c(param_1,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477ad7ba FUN_1477ad7ba body=29 status=ok
// SIG undefined FUN_1477ad7ba(void)

undefined8 FUN_1477ad7ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477ad7d8 FUN_1477ad7d8 body=150 status=ok
// SIG undefined FUN_1477ad7d8(void)

void FUN_1477ad7d8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a54d780;
  param_1[10] = &PTR_FUN_14a54d7f0;
  plVar3 = (longlong *)param_1[0x11];
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
  plVar3 = (longlong *)param_1[0xe];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  param_1[10] = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 0x59) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1 + 10);
    *(undefined1 *)((longlong)param_1 + 0x59) = 0;
  }
  FUN_14695359c(param_1);
  return;
}



// FUNCTION 1477ad882 FUN_1477ad882 body=747 status=ok
// SIG undefined FUN_1477ad882(void)

void FUN_1477ad882(longlong param_1)

{
  float fVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  double dVar12;
  double *pdVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  double local_148;
  double dStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double dStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  double local_c8;
  double dStack_c0;
  undefined8 local_b8;
  double local_b0 [5];
  undefined8 local_88;
  ulonglong local_80;
  undefined8 uVar16;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_b0[4] = (double)*(float *)(param_1 + 0x394);
  local_b0[3] = 0.0;
  local_88 = 0;
  local_158 = 0;
  FUN_14020f75c(*(undefined8 *)(param_1 + 0x3a8),local_b0 + 3,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x3b0);
  local_b0[0] = (double)*(float *)(param_1 + 0x390);
  local_b0[1] = 0.0;
  local_b0[2] = 0.0;
  local_158 = 0;
  FUN_14020f75c(uVar16,local_b0,0,0);
  uVar14 = (undefined4)uVar16;
  dVar12 = *(double *)(param_1 + 0x3b8);
  uVar16 = *(undefined8 *)((longlong)dVar12 + 0x1a0);
  uVar2 = *(undefined8 *)((longlong)dVar12 + 0x1a8);
  fVar1 = *(float *)(param_1 + 0x398);
  lVar3 = *(longlong *)((longlong)dVar12 + 0x120);
  if (lVar3 == 0) {
    local_c8 = 0.0;
    dStack_c0 = 0.0;
  }
  else {
    dVar7 = *(double *)(lVar3 + 0x240);
    dVar8 = *(double *)(lVar3 + 0x248);
    dVar9 = *(double *)(lVar3 + 0x250);
    dVar10 = *(double *)(lVar3 + 600);
    pdVar13 = *(double **)(lVar3 + 0x228);
    local_148 = dVar7;
    dStack_140 = dVar8;
    local_138 = dVar9;
    uStack_130 = dVar10;
    if (pdVar13 == (double *)0x0) {
      uVar14 = 0x40;
      pdVar13 = (double *)FUN_14001cc68(0x40,0x10);
      dVar12 = DAT_14c8463d8;
      *pdVar13 = DAT_14c8463d0;
      pdVar13[1] = dVar12;
      dVar12 = DAT_14c8463e8;
      pdVar13[2] = DAT_14c8463e0;
      pdVar13[3] = dVar12;
      dVar12 = DAT_14c846500;
      pdVar13[4] = DAT_14c8464f8;
      pdVar13[5] = dVar12;
      dVar12 = DAT_14c846508;
      pdVar13[6] = DAT_14c846508;
      *(double **)(lVar3 + 0x228) = pdVar13;
    }
    auVar5._8_4_ = (int)-(ulonglong)(dVar8 != pdVar13[1]);
    auVar5._0_8_ = -(ulonglong)(dVar7 != *pdVar13);
    auVar5._12_4_ = (int)(-(ulonglong)(dVar8 != pdVar13[1]) >> 0x20);
    iVar11 = movmskpd(SUB84(dVar12,0),auVar5);
    auVar6._8_4_ = (int)-(ulonglong)(dVar10 != pdVar13[3]);
    auVar6._0_8_ = -(ulonglong)(dVar9 != pdVar13[2]);
    auVar6._12_4_ = (int)(-(ulonglong)(dVar10 != pdVar13[3]) >> 0x20);
    uVar15 = movmskpd(uVar14,auVar6);
    if ((uVar15 & 0x3fffffff) != 0 || iVar11 != 0) {
      *(undefined4 *)(pdVar13 + 2) = (undefined4)local_138;
      *(undefined4 *)((longlong)pdVar13 + 0x14) = local_138._4_4_;
      *(undefined4 *)(pdVar13 + 3) = (undefined4)uStack_130;
      *(undefined4 *)((longlong)pdVar13 + 0x1c) = uStack_130._4_4_;
      *pdVar13 = local_148;
      pdVar13[1] = dStack_140;
      FUN_1448052ee(&local_148,&local_e8);
      pdVar13[6] = (double)CONCAT44(uStack_d4,local_d8);
      pdVar13[4] = local_e8;
      pdVar13[5] = dStack_e0;
    }
    local_c8 = pdVar13[4];
    dStack_c0 = pdVar13[5];
  }
  if (*(char *)(param_1 + 0x39c) == '\0') {
    local_c8 = 0.0;
  }
  if (*(char *)(param_1 + 0x39d) == '\0') {
    dStack_c0 = *(double *)(*(longlong *)(param_1 + 0x1c8) + 0x1b8);
  }
  local_b8 = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x3b8);
  FUN_144a7484c(&local_c8,&local_148);
  FUN_140e1cfe8(uVar4,&local_e8,&local_148);
  local_148 = local_e8;
  dStack_140 = dStack_e0;
  local_128._8_4_ = (int)uVar16;
  local_128._0_8_ = (double)fVar1;
  local_128._12_4_ = (int)((ulonglong)uVar16 >> 0x20);
  uStack_110 = 0;
  local_108 = 0x3ff0000000000000;
  uStack_100 = 0x3ff0000000000000;
  local_f8 = 0x3ff0000000000000;
  uStack_f0 = 0;
  local_158 = 0;
  local_118 = uVar2;
  FUN_144927a08(*(undefined8 *)(param_1 + 0x3b8),&local_148,0,0);
  if ((local_80 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477adb6e FUN_1477adb6e body=26 status=ok
// SIG undefined FUN_1477adb6e(void)

void FUN_1477adb6e(undefined8 param_1)

{
  FUN_1448e423c();
  FUN_1477ad882(param_1);
  return;
}



// FUNCTION 1477adbba FUN_1477adbba body=375 status=ok
// SIG undefined FUN_1477adbba(void)

void FUN_1477adbba(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar1 = FUN_1447210f0();
  if (((lVar1 != 0) && (*(longlong *)(param_1 + 0x3a0) != 0)) &&
     (*(longlong *)(param_1 + 0x3a8) != 0)) {
    fVar2 = (float)FUN_147a21316();
    FUN_1417c1c5c(*(undefined8 *)(param_1 + 0x3a0),&local_48,*(float *)(param_1 + 0x390) * fVar2,1);
    if (*(char *)(param_1 + 0x394) == '\x01') {
      FUN_147a27812(*(undefined8 *)(param_1 + 0x3a0),&local_68,fVar2 * *(float *)(param_1 + 0x390),1
                   );
      local_c8 = local_68;
      uStack_c0 = uStack_60;
      local_b8 = local_58;
      uStack_b0 = uStack_50;
      local_a8 = local_48;
      uStack_a4 = uStack_44;
      uStack_a0 = uStack_40;
      uStack_9c = uStack_3c;
      local_98 = local_38;
      uStack_90 = 0;
      local_88 = 0x3ff0000000000000;
      uStack_80 = 0x3ff0000000000000;
      local_78 = 0x3ff0000000000000;
      uStack_70 = 0;
      local_f8 = 0;
      FUN_140613f88(*(undefined8 *)(param_1 + 0x3a8),&local_c8,0,0);
    }
    else {
      local_d8 = local_38;
      local_e8 = local_48;
      uStack_e4 = uStack_44;
      uStack_e0 = uStack_40;
      uStack_dc = uStack_3c;
      local_f8 = 0;
      FUN_140d93b16(*(undefined8 *)(param_1 + 0x3a8),&local_e8,0,0);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477add3a FUN_1477add3a body=31 status=ok
// SIG undefined FUN_1477add3a(void)

void FUN_1477add3a(longlong *param_1)

{
  FUN_1448e423c();
                    /* WARNING: Could not recover jumptable at 0x0001477add52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x638))(param_1);
  return;
}



// FUNCTION 1477add8e FUN_1477add8e body=366 status=ok
// SIG undefined FUN_1477add8e(void)

undefined1 (*) [16] FUN_1477add8e(longlong param_1,undefined1 (*param_2) [16])

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  longlong lVar8;
  double *pdVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  lVar8 = FUN_1404101e2(param_1 + 0xca0);
  if (lVar8 == 0) {
    *(undefined8 *)param_2[1] = *(undefined8 *)(param_1 + 0xcd8);
    uVar7 = *(undefined8 *)(param_1 + 0xcd0);
    *(undefined8 *)*param_2 = *(undefined8 *)(param_1 + 0xcc8);
    *(undefined8 *)(*param_2 + 8) = uVar7;
  }
  else {
    pdVar9 = (double *)&DAT_14c846480;
    if (*(longlong *)(lVar8 + 0x1c8) != 0) {
      pdVar9 = (double *)(*(longlong *)(lVar8 + 0x1c8) + 0x240);
    }
    dVar4 = *pdVar9;
    dVar5 = pdVar9[1];
    dVar6 = pdVar9[2];
    dVar11 = *(double *)(param_1 + 0xcc8) * pdVar9[8];
    dVar12 = *(double *)(param_1 + 0xcd0) * pdVar9[9];
    dVar10 = *(double *)(param_1 + 0xcd8) * pdVar9[10];
    dVar1 = pdVar9[3];
    dVar13 = dVar12 * dVar4 - dVar5 * dVar11;
    dVar14 = dVar10 * dVar5 - dVar6 * dVar12;
    dVar15 = dVar11 * dVar6 - dVar4 * dVar10;
    dVar14 = dVar14 + dVar14;
    dVar15 = dVar15 + dVar15;
    dVar13 = dVar13 + dVar13;
    dVar3 = (dVar6 * dVar14 - dVar4 * dVar13) + pdVar9[3] * dVar15 + dVar12 + pdVar9[5];
    dVar12 = pdVar9[6];
    auVar2._8_4_ = SUB84(dVar3,0);
    auVar2._0_8_ = (dVar13 * dVar5 - dVar15 * dVar6) + dVar1 * dVar14 + dVar11 + pdVar9[4];
    auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *param_2 = auVar2;
    *(double *)param_2[1] = dVar13 * dVar1 + dVar10 + (dVar15 * dVar4 - dVar14 * dVar5) + dVar12;
  }
  return param_2;
}



// FUNCTION 1477adf04 FUN_1477adf04 body=139 status=ok
// SIG undefined FUN_1477adf04(void)

void FUN_1477adf04(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477adf90(param_1,&local_28);
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



// FUNCTION 1477adf90 FUN_1477adf90 body=189 status=ok
// SIG undefined FUN_1477adf90(void)

undefined8 * FUN_1477adf90(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = FUN_1411f23a0();
  lVar4 = *(longlong *)(lVar3 + 0x110);
  if (lVar4 == 0) {
    FUN_140aa6c08(lVar3);
    lVar4 = *(longlong *)(lVar3 + 0x110);
  }
  if (0 < (longlong)*(int *)(lVar4 + 0x98)) {
    lVar3 = *(longlong *)(lVar4 + 0x90);
    lVar5 = 0;
    do {
      fVar1 = *(float *)(lVar3 + 0x10 + lVar5);
      if ((fVar1 == *(float *)(param_1 + 0xcd8)) &&
         (!NAN(fVar1) && !NAN(*(float *)(param_1 + 0xcd8)))) {
        *param_2 = 0;
        iVar2 = *(int *)(lVar3 + 8 + lVar5);
        _Src = *(void **)(lVar3 + lVar5);
        *(int *)(param_2 + 1) = iVar2;
        if ((longlong)iVar2 != 0) {
          FUN_1446dd670(param_2,iVar2,0);
          memcpy((void *)*param_2,_Src,(longlong)iVar2 * 2);
          return param_2;
        }
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        return param_2;
      }
      lVar5 = lVar5 + 0x18;
    } while ((longlong)*(int *)(lVar4 + 0x98) * 0x18 != lVar5);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1477ae04e FUN_1477ae04e body=139 status=ok
// SIG undefined FUN_1477ae04e(void)

void FUN_1477ae04e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477ae0da(&local_28);
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



// FUNCTION 1477ae0da FUN_1477ae0da body=131 status=ok
// SIG undefined FUN_1477ae0da(void)

undefined8 * FUN_1477ae0da(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1411f23a0();
  lVar3 = *(longlong *)(lVar2 + 0x110);
  if (lVar3 == 0) {
    FUN_140aa6c08(lVar2);
    lVar3 = *(longlong *)(lVar2 + 0x110);
    if (lVar3 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      return param_1;
    }
  }
  *param_1 = 0;
  iVar1 = *(int *)(lVar3 + 0x68);
  _Src = *(void **)(lVar3 + 0x60);
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



// FUNCTION 1477ae15e FUN_1477ae15e body=139 status=ok
// SIG undefined FUN_1477ae15e(void)

void FUN_1477ae15e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477ae1ea(param_1,&local_28);
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



// FUNCTION 1477ae1ea FUN_1477ae1ea body=234 status=ok
// SIG undefined FUN_1477ae1ea(void)

undefined8 * FUN_1477ae1ea(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = FUN_1411f23a0();
  lVar4 = *(longlong *)(lVar3 + 0x110);
  if (lVar4 == 0) {
    FUN_140aa6c08(lVar3);
    lVar4 = *(longlong *)(lVar3 + 0x110);
  }
  if (0 < (longlong)*(int *)(lVar4 + 0x78)) {
    lVar3 = *(longlong *)(lVar4 + 0x70);
    lVar5 = 0;
    do {
      fVar1 = *(float *)(lVar3 + 0x10 + lVar5);
      if ((fVar1 == *(float *)(param_1 + 0xc44)) &&
         (!NAN(fVar1) && !NAN(*(float *)(param_1 + 0xc44)))) {
        fVar1 = *(float *)(lVar3 + 0x14 + lVar5);
        if ((fVar1 == *(float *)(param_1 + 0xc48)) &&
           (!NAN(fVar1) && !NAN(*(float *)(param_1 + 0xc48)))) {
          fVar1 = *(float *)(lVar3 + 0x18 + lVar5);
          if ((fVar1 == *(float *)(param_1 + 0xc4c)) &&
             (!NAN(fVar1) && !NAN(*(float *)(param_1 + 0xc4c)))) {
            fVar1 = *(float *)(lVar3 + 0x1c + lVar5);
            if ((fVar1 == *(float *)(param_1 + 0xc50)) &&
               (!NAN(fVar1) && !NAN(*(float *)(param_1 + 0xc50)))) {
              *param_2 = 0;
              iVar2 = *(int *)(lVar3 + 8 + lVar5);
              _Src = *(void **)(lVar3 + lVar5);
              *(int *)(param_2 + 1) = iVar2;
              if ((longlong)iVar2 != 0) {
                FUN_1446dd670(param_2,iVar2,0);
                memcpy((void *)*param_2,_Src,(longlong)iVar2 * 2);
                return param_2;
              }
              *(undefined4 *)((longlong)param_2 + 0xc) = 0;
              return param_2;
            }
          }
        }
      }
      lVar5 = lVar5 + 0x28;
    } while ((longlong)*(int *)(lVar4 + 0x78) * 0x28 != lVar5);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1477ae2d4 FUN_1477ae2d4 body=117 status=ok
// SIG undefined FUN_1477ae2d4(void)

void FUN_1477ae2d4(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477ae34a(&local_28);
  FUN_1477ae3bc(param_3,&local_28);
  FUN_14580f7ba(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477ae34a FUN_1477ae34a body=113 status=ok
// SIG undefined FUN_1477ae34a(void)

undefined8 * FUN_1477ae34a(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_1411f23a0();
  lVar4 = *(longlong *)(lVar3 + 0x110);
  if (lVar4 == 0) {
    FUN_140aa6c08(lVar3);
    lVar4 = *(longlong *)(lVar3 + 0x110);
  }
  *param_1 = 0;
  iVar1 = *(int *)(lVar4 + 0x78);
  uVar2 = *(undefined8 *)(lVar4 + 0x70);
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1477b1528(param_1,iVar1,0);
    FUN_1477b159b(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1477ae3bc FUN_1477ae3bc body=78 status=ok
// SIG undefined FUN_1477ae3bc(void)

longlong * FUN_1477ae3bc(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_14580f7ba(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 1477ae40a FUN_1477ae40a body=41 status=ok
// SIG undefined FUN_1477ae40a(void)

void FUN_1477ae40a(undefined4 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_140c8927c(param_1,1);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1477ae4b6 FUN_1477ae4b6 body=139 status=ok
// SIG undefined FUN_1477ae4b6(void)

void FUN_1477ae4b6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477ae542(param_1,&local_28);
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



// FUNCTION 1477ae542 FUN_1477ae542 body=181 status=ok
// SIG undefined FUN_1477ae542(void)

undefined8 * FUN_1477ae542(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_1411f23a0();
  lVar4 = *(longlong *)(lVar3 + 0x110);
  if (lVar4 == 0) {
    FUN_140aa6c08(lVar3);
    lVar4 = *(longlong *)(lVar3 + 0x110);
  }
  lVar3 = (longlong)*(int *)(lVar4 + 0x58);
  if (0 < lVar3) {
    lVar4 = *(longlong *)(lVar4 + 0x50) + 0x10;
    do {
      cVar2 = FUN_1477af122(lVar4,param_1 + 0xc58);
      if (cVar2 != '\0') {
        *param_2 = 0;
        iVar1 = *(int *)(lVar4 + -8);
        _Src = *(void **)(lVar4 + -0x10);
        *(int *)(param_2 + 1) = iVar1;
        if ((longlong)iVar1 != 0) {
          FUN_1446dd670(param_2,iVar1,0);
          memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
          return param_2;
        }
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        return param_2;
      }
      lVar4 = lVar4 + 0x30;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1477ae5f8 FUN_1477ae5f8 body=117 status=ok
// SIG undefined FUN_1477ae5f8(void)

void FUN_1477ae5f8(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477ae66e(&local_28);
  FUN_1477ae6e0(param_3,&local_28);
  FUN_14580f78f(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477ae66e FUN_1477ae66e body=113 status=ok
// SIG undefined FUN_1477ae66e(void)

undefined8 * FUN_1477ae66e(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_1411f23a0();
  lVar4 = *(longlong *)(lVar3 + 0x110);
  if (lVar4 == 0) {
    FUN_140aa6c08(lVar3);
    lVar4 = *(longlong *)(lVar3 + 0x110);
  }
  *param_1 = 0;
  iVar1 = *(int *)(lVar4 + 0x58);
  uVar2 = *(undefined8 *)(lVar4 + 0x50);
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1477b1620(param_1,iVar1,0);
    FUN_1477b1693(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1477ae6e0 FUN_1477ae6e0 body=78 status=ok
// SIG undefined FUN_1477ae6e0(void)

longlong * FUN_1477ae6e0(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_14580f78f(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 1477ae72e FUN_1477ae72e body=39 status=ok
// SIG undefined FUN_1477ae72e(void)

void FUN_1477ae72e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477af092();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1477ae7d8 FUN_1477ae7d8 body=179 status=ok
// SIG undefined FUN_1477ae7d8(void)

void FUN_1477ae7d8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14583d23a(param_1,local_28);
  FUN_140c89136(param_1);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477ae88c FUN_1477ae88c body=176 status=ok
// SIG undefined FUN_1477ae88c(void)

void FUN_1477ae88c(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  puVar1 = &local_1c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0xcd8) = *puVar1;
  FUN_140c89136(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477ae93e FUN_1477ae93e body=164 status=ok
// SIG undefined FUN_1477ae93e(void)

void FUN_1477ae93e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0xce0) = local_1c;
  FUN_140c89136(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477ae9e4 FUN_1477ae9e4 body=164 status=ok
// SIG undefined FUN_1477ae9e4(void)

void FUN_1477ae9e4(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0xcdc) = local_1c;
  FUN_140c89136(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477aea8a FUN_1477aea8a body=156 status=ok
// SIG undefined FUN_1477aea8a(void)

void FUN_1477aea8a(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0xcec) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477aeb28 FUN_1477aeb28 body=200 status=ok
// SIG undefined FUN_1477aeb28(void)

void FUN_1477aeb28(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [44];
  undefined8 local_2c;
  undefined8 uStack_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0x41955c2941c71eb8;
  uStack_24 = 0;
  local_1c = 0x3faa3d71;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar4 = &local_2c;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0xc54) = *(undefined4 *)(puVar4 + 2);
  uVar1 = *(undefined4 *)((longlong)puVar4 + 4);
  uVar2 = *(undefined4 *)(puVar4 + 1);
  uVar3 = *(undefined4 *)((longlong)puVar4 + 0xc);
  *(undefined4 *)(param_1 + 0xc44) = *(undefined4 *)puVar4;
  *(undefined4 *)(param_1 + 0xc48) = uVar1;
  *(undefined4 *)(param_1 + 0xc4c) = uVar2;
  *(undefined4 *)(param_1 + 0xc50) = uVar3;
  FUN_140c89136(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477aebf2 FUN_1477aebf2 body=183 status=ok
// SIG undefined FUN_1477aebf2(void)

void FUN_1477aebf2(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1411f22ae(local_28,param_1 + 0xc44);
  FUN_140c89136(param_1);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477aecaa FUN_1477aecaa body=359 status=ok
// SIG undefined FUN_1477aecaa(void)

void FUN_1477aecaa(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [4];
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong alStack_70 [5];
  undefined1 local_48;
  undefined1 local_40 [4];
  undefined8 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90[0] = 1;
  uStack_8c = 0x47c35000;
  local_40[0] = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  alStack_70[0] = 0;
  alStack_70[1] = 0;
  alStack_70[2] = 0;
  alStack_70[3] = 0;
  alStack_70[4] = 0;
  local_48 = 0;
  uStack_3c = 0x41000000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_90);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  puVar11 = (undefined8 *)local_90;
  if (puVar1 != (undefined8 *)0x0) {
    puVar11 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined8 *)(param_1 + 0xc78) = *puVar11;
  *(undefined8 *)(param_1 + 0xc80) = puVar11[1];
  uVar2 = *(undefined4 *)((longlong)puVar11 + 0x14);
  uVar3 = *(undefined4 *)(puVar11 + 3);
  uVar4 = *(undefined4 *)((longlong)puVar11 + 0x1c);
  *(undefined4 *)(param_1 + 0xc88) = *(undefined4 *)(puVar11 + 2);
  *(undefined4 *)(param_1 + 0xc8c) = uVar2;
  *(undefined4 *)(param_1 + 0xc90) = uVar3;
  *(undefined4 *)(param_1 + 0xc94) = uVar4;
  puVar10 = puVar1 + 10;
  plVar9 = puVar1 + 4;
  if (puVar1 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)local_40;
    plVar9 = alStack_70;
  }
  FUN_144a787a6(param_1 + 0xc98,plVar9);
  uVar2 = *(undefined4 *)(puVar11 + 6);
  uVar3 = *(undefined4 *)((longlong)puVar11 + 0x34);
  uVar4 = *(undefined4 *)(puVar11 + 7);
  uVar5 = *(undefined4 *)((longlong)puVar11 + 0x3c);
  uVar6 = *(undefined4 *)((longlong)puVar11 + 0x3d);
  uVar7 = *(undefined4 *)((longlong)puVar11 + 0x41);
  uVar8 = *(undefined4 *)((longlong)puVar11 + 0x45);
  *(undefined4 *)(param_1 + 0xcb1) = *(undefined4 *)((longlong)puVar11 + 0x39);
  *(undefined4 *)(param_1 + 0xcb5) = uVar6;
  *(undefined4 *)(param_1 + 0xcb9) = uVar7;
  *(undefined4 *)(param_1 + 0xcbd) = uVar8;
  *(undefined4 *)(param_1 + 0xca8) = uVar2;
  *(undefined4 *)(param_1 + 0xcac) = uVar3;
  *(undefined4 *)(param_1 + 0xcb0) = uVar4;
  *(undefined4 *)(param_1 + 0xcb4) = uVar5;
  *(undefined8 *)(param_1 + 0xcc8) = *puVar10;
  *(undefined4 *)(param_1 + 0xcd0) = *(undefined4 *)(puVar10 + 1);
  FUN_140c89136(param_1);
  if (alStack_70[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477aee12 FUN_1477aee12 body=179 status=ok
// SIG undefined FUN_1477aee12(void)

void FUN_1477aee12(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1411f25b2(param_1,local_28);
  FUN_140c89136(param_1);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477aeec6 FUN_1477aeec6 body=216 status=ok
// SIG undefined FUN_1477aeec6(void)

void FUN_1477aeec6(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_58 [36];
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0x4248000042480000;
  uStack_2c = 0x4000000040000000;
  local_24 = 0x3f80000041700000;
  local_1c = 5;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  puVar8 = &local_34;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar8 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = *(undefined4 *)puVar8;
  uVar2 = *(undefined4 *)((longlong)puVar8 + 4);
  uVar3 = *(undefined4 *)(puVar8 + 1);
  uVar4 = *(undefined4 *)((longlong)puVar8 + 0xc);
  uVar5 = *(undefined4 *)(puVar8 + 2);
  uVar6 = *(undefined4 *)((longlong)puVar8 + 0x14);
  uVar7 = *(undefined4 *)(puVar8 + 3);
  *(undefined4 *)(param_1 + 0xc64) = *(undefined4 *)((longlong)puVar8 + 0xc);
  *(undefined4 *)(param_1 + 0xc68) = uVar5;
  *(undefined4 *)(param_1 + 0xc6c) = uVar6;
  *(undefined4 *)(param_1 + 0xc70) = uVar7;
  *(undefined4 *)(param_1 + 0xc58) = uVar1;
  *(undefined4 *)(param_1 + 0xc5c) = uVar2;
  *(undefined4 *)(param_1 + 0xc60) = uVar3;
  *(undefined4 *)(param_1 + 0xc64) = uVar4;
  FUN_140c89136(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477aefaa FUN_1477aefaa body=75 status=ok
// SIG undefined FUN_1477aefaa(void)

void FUN_1477aefaa(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_14635ee54(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477aeffc FUN_1477aeffc body=150 status=ok
// SIG undefined FUN_1477aeffc(void)

void FUN_1477aeffc(longlong param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  *(float *)(param_1 + 0x2a8) = param_2;
  fVar4 = *(float *)(param_1 + 0xc44) * *(float *)(param_1 + 0xc6c);
  fVar2 = *(float *)(param_1 + 0xcd8);
  if (0.0 < fVar2) {
    fVar3 = fVar4 / *(float *)(param_1 + 0xc48);
    uVar1 = -(uint)(fVar2 < fVar3);
    fVar4 = (float)(~uVar1 & (uint)fVar4 | (uint)((fVar2 / fVar3) * fVar4) & uVar1);
  }
  fVar2 = tanf(param_2 * 0.5 * 0.017453292);
  *(float *)(param_1 + 0xcdc) = (fVar4 * 0.5) / fVar2;
  return;
}



// FUNCTION 1477af092 FUN_1477af092 body=143 status=ok
// SIG undefined FUN_1477af092(void)

undefined8 FUN_1477af092(longlong param_1)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Db;
  float fVar6;
  
  fVar4 = *(float *)(param_1 + 0xcdc);
  fVar3 = 0.0;
  uVar5 = 0;
  if (0.0 < fVar4) {
    fVar3 = *(float *)(param_1 + 0xc48);
    fVar1 = *(float *)(param_1 + 0xcd8);
    if (0.0 < fVar1) {
      fVar6 = (*(float *)(param_1 + 0xc44) * *(float *)(param_1 + 0xc6c)) / fVar3;
      uVar2 = -(uint)(fVar6 < fVar1);
      fVar3 = (float)(~uVar2 & (uint)fVar3 | (uint)((fVar6 / fVar1) * fVar3) & uVar2);
    }
    fVar4 = atanf(((*(float *)(param_1 + 0x2d4) + 1.0) * fVar3) / (fVar4 + fVar4));
    fVar3 = (fVar4 + fVar4) * 57.295776;
    uVar5 = extraout_XMM0_Db;
  }
  return CONCAT44(uVar5,fVar3);
}



// FUNCTION 1477af122 FUN_1477af122 body=90 status=ok
// SIG undefined FUN_1477af122(void)

undefined4 FUN_1477af122(float *param_1,float *param_2)

{
  undefined4 uVar1;
  
  if (((((*param_1 != *param_2) || (NAN(*param_1) || NAN(*param_2))) || (param_1[1] != param_2[1]))
      || ((((NAN(param_1[1]) || NAN(param_2[1]) || (param_1[2] != param_2[2])) ||
           ((NAN(param_1[2]) || NAN(param_2[2]) ||
            ((param_1[3] != param_2[3] || (NAN(param_1[3]) || NAN(param_2[3]))))))) ||
          (param_1[4] != param_2[4])))) ||
     (((NAN(param_1[4]) || NAN(param_2[4]) || (param_1[5] != param_2[5])) ||
      (NAN(param_1[5]) || NAN(param_2[5]))))) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT31((int3)((uint)param_1[6] >> 8),param_1[6] == param_2[6]);
  }
  return uVar1;
}



// FUNCTION 1477af188 FUN_1477af188 body=70 status=ok
// SIG undefined FUN_1477af188(void)

void FUN_1477af188(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_1411f23a0();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  *param_3 = lVar2;
  return;
}



// FUNCTION 1477af1d4 FUN_1477af1d4 body=354 status=ok
// SIG undefined FUN_1477af1d4(void)

void FUN_1477af1d4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  void *_Src;
  undefined1 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined4 local_4c;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  _Src = local_48;
  puVar3 = &local_4c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_40;
  local_58 = (int)uStack_40;
  if (lVar2 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,uStack_40 & 0xffffffff,0);
    memcpy(local_60,_Src,lVar2 * 2);
  }
  uVar1 = FUN_1477af338(param_1,&local_60,puVar3);
  *param_3 = uVar1;
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477af338 FUN_1477af338 body=355 status=ok
// SIG undefined FUN_1477af338(void)

bool FUN_1477af338(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  void *_Src;
  undefined4 uVar2;
  longlong *plVar3;
  ushort uVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (void *)0x0;
  local_48 = (int)param_2[1];
  lVar7 = (longlong)local_48;
  _Src = (void *)*param_2;
  if (lVar7 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar7 * 2);
  }
  if ((longlong)*(int *)(param_1 + 0x98) == 0) {
LAB_1477af430:
    plVar3 = (longlong *)0x0;
LAB_1477af432:
    if (local_50 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (plVar3 == (longlong *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (undefined4)plVar3[2];
    }
    *param_3 = uVar2;
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return plVar3 != (longlong *)0x0;
  }
  plVar3 = *(longlong **)(param_1 + 0x90);
  plVar1 = plVar3 + (longlong)*(int *)(param_1 + 0x98) * 3;
LAB_1477af3cb:
  if ((int)plVar3[1] == local_48) {
    if (1 < local_48) {
      lVar7 = 0;
      do {
        uVar5 = *(ushort *)(*plVar3 + lVar7);
        uVar6 = (ulonglong)uVar5;
        uVar4 = *(ushort *)((longlong)local_50 + lVar7);
        if (uVar5 == uVar4) {
          if (uVar5 == 0) break;
        }
        else {
          if (0x7f < (uVar4 | uVar5)) goto LAB_1477af492;
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          uVar8 = (ulonglong)uVar4;
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[uVar8]) goto LAB_1477af492;
        }
        lVar7 = lVar7 + 2;
      } while( true );
    }
  }
  else if ((int)plVar3[1] + local_48 != 1) goto LAB_1477af427;
  goto LAB_1477af432;
LAB_1477af492:
  if (uVar5 == uVar4) goto LAB_1477af432;
LAB_1477af427:
  plVar3 = plVar3 + 3;
  if (plVar3 == plVar1) goto LAB_1477af430;
  goto LAB_1477af3cb;
}



// FUNCTION 1477af49c FUN_1477af49c body=117 status=ok
// SIG undefined FUN_1477af49c(void)

void FUN_1477af49c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477af512(param_1,&local_28);
  FUN_1410e5bda(param_3,&local_28);
  FUN_1447a1747(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477af512 FUN_1477af512 body=191 status=ok
// SIG undefined FUN_1477af512(void)

longlong * FUN_1477af512(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  void *_Src;
  longlong lVar6;
  longlong lVar7;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = *(int *)(param_1 + 0x98);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x90);
    lVar6 = 0;
    do {
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1447a1bd6(param_2,iVar3);
      }
      lVar5 = *param_2;
      lVar7 = (longlong)iVar3 * 0x10;
      puVar1 = (undefined8 *)(lVar5 + lVar7);
      *(undefined8 *)(lVar5 + lVar7) = 0;
      iVar3 = *(int *)(lVar4 + 8 + lVar6);
      _Src = *(void **)(lVar4 + lVar6);
      *(int *)(lVar5 + 8 + lVar7) = iVar3;
      if ((longlong)iVar3 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,iVar3,0);
        memcpy((void *)*puVar1,_Src,(longlong)iVar3 * 2);
      }
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar2 * 0x18 != lVar6);
  }
  return param_2;
}



// FUNCTION 1477af5d8 FUN_1477af5d8 body=367 status=ok
// SIG undefined FUN_1477af5d8(void)

void FUN_1477af5d8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  void *_Src;
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined4 local_4c;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_5c = 0x41955c2941c71eb8;
  uStack_54 = 0;
  local_4c = 0x3faa3d71;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  _Src = local_48;
  puVar3 = &local_5c;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_40;
  local_68 = (int)uStack_40;
  if (lVar2 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,uStack_40 & 0xffffffff,0);
    memcpy(local_70,_Src,lVar2 * 2);
  }
  uVar1 = FUN_1477af748(param_1,&local_70,puVar3);
  *param_3 = uVar1;
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477af748 FUN_1477af748 body=431 status=ok
// SIG undefined FUN_1477af748(void)

bool FUN_1477af748(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  void *_Src;
  longlong *plVar2;
  ushort uVar3;
  ushort uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (void *)0x0;
  local_48 = (int)param_2[1];
  lVar6 = (longlong)local_48;
  _Src = (void *)*param_2;
  if (lVar6 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar6 * 2);
  }
  if ((longlong)*(int *)(param_1 + 0x78) == 0) {
LAB_1477af83d:
    plVar2 = (longlong *)0x0;
LAB_1477af83f:
    if (local_50 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (plVar2 == (longlong *)0x0) {
      uVar8 = 0x41c71eb8;
      uVar9 = 0x41955c29;
      uVar10 = 0;
      uVar11 = 0x3faa3d71;
      uVar12 = 0;
    }
    else {
      uVar8 = (undefined4)plVar2[2];
      uVar9 = *(undefined4 *)((longlong)plVar2 + 0x14);
      uVar12 = (undefined4)plVar2[3];
      uVar10 = *(undefined4 *)((longlong)plVar2 + 0x1c);
      uVar11 = (undefined4)plVar2[4];
    }
    *param_3 = uVar8;
    param_3[1] = uVar9;
    param_3[2] = uVar12;
    param_3[3] = uVar10;
    param_3[4] = uVar11;
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return plVar2 != (longlong *)0x0;
  }
  plVar2 = *(longlong **)(param_1 + 0x70);
  plVar1 = plVar2 + (longlong)*(int *)(param_1 + 0x78) * 5;
LAB_1477af7d5:
  if ((int)plVar2[1] == local_48) {
    if (1 < local_48) {
      lVar6 = 0;
      do {
        uVar4 = *(ushort *)(*plVar2 + lVar6);
        uVar5 = (ulonglong)uVar4;
        uVar3 = *(ushort *)((longlong)local_50 + lVar6);
        if (uVar4 == uVar3) {
          if (uVar4 == 0) break;
        }
        else {
          if (0x7f < (uVar3 | uVar4)) goto LAB_1477af8e7;
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          uVar7 = (ulonglong)uVar3;
          uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[uVar7]) goto LAB_1477af8e7;
        }
        lVar6 = lVar6 + 2;
      } while( true );
    }
  }
  else if ((int)plVar2[1] + local_48 != 1) goto LAB_1477af834;
  goto LAB_1477af83f;
LAB_1477af8e7:
  if (uVar4 == uVar3) goto LAB_1477af83f;
LAB_1477af834:
  plVar2 = plVar2 + 5;
  if (plVar2 == plVar1) goto LAB_1477af83d;
  goto LAB_1477af7d5;
}



// FUNCTION 1477af8f8 FUN_1477af8f8 body=117 status=ok
// SIG undefined FUN_1477af8f8(void)

void FUN_1477af8f8(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477af96e(param_1,&local_28);
  FUN_1410e5bda(param_3,&local_28);
  FUN_1447a1747(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477af96e FUN_1477af96e body=181 status=ok
// SIG undefined FUN_1477af96e(void)

longlong * FUN_1477af96e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  void *_Src;
  longlong lVar6;
  longlong lVar7;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = *(int *)(param_1 + 0x78);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x70);
    lVar6 = 0;
    do {
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1447a1bd6(param_2,iVar3);
      }
      lVar5 = *param_2;
      lVar7 = (longlong)iVar3 * 0x10;
      puVar1 = (undefined8 *)(lVar5 + lVar7);
      *(undefined8 *)(lVar5 + lVar7) = 0;
      iVar3 = *(int *)(lVar4 + 8 + lVar6);
      _Src = *(void **)(lVar4 + lVar6);
      *(int *)(lVar5 + 8 + lVar7) = iVar3;
      if ((longlong)iVar3 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,iVar3,0);
        memcpy((void *)*puVar1,_Src,(longlong)iVar3 * 2);
      }
      lVar6 = lVar6 + 0x28;
    } while ((longlong)iVar2 * 0x28 != lVar6);
  }
  return param_2;
}



// FUNCTION 1477afa2a FUN_1477afa2a body=381 status=ok
// SIG undefined FUN_1477afa2a(void)

void FUN_1477afa2a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  void *_Src;
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined4 local_4c;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_64 = 0x4248000042480000;
  uStack_5c = 0x4000000040000000;
  local_54 = 0x3f80000041700000;
  local_4c = 5;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  _Src = local_48;
  puVar3 = &local_64;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_40;
  local_70 = (int)uStack_40;
  if (lVar2 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,uStack_40 & 0xffffffff,0);
    memcpy(local_78,_Src,lVar2 * 2);
  }
  uVar1 = FUN_1477afba8(param_1,&local_78,puVar3);
  *param_3 = uVar1;
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477afba8 FUN_1477afba8 body=474 status=ok
// SIG undefined FUN_1477afba8(void)

bool FUN_1477afba8(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  void *_Src;
  undefined4 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  ushort uVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (void *)0x0;
  local_48 = (int)param_2[1];
  lVar7 = (longlong)local_48;
  _Src = (void *)*param_2;
  if (lVar7 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar7 * 2);
  }
  if ((longlong)*(int *)(param_1 + 0x58) == 0) {
LAB_1477afca4:
    plVar3 = (longlong *)0x0;
LAB_1477afca6:
    if (local_50 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (plVar3 == (longlong *)0x0) {
      uVar9 = 0x42480000;
      uVar10 = 0x40000000;
      uVar11 = 0x41700000;
      uVar12 = 0x3f800000;
      uVar1 = 5;
      uVar13 = 0x40000000;
      uVar14 = 0x42480000;
    }
    else {
      uVar14 = (undefined4)plVar3[2];
      uVar9 = *(undefined4 *)((longlong)plVar3 + 0x14);
      uVar13 = (undefined4)plVar3[3];
      uVar10 = *(undefined4 *)((longlong)plVar3 + 0x1c);
      uVar11 = (undefined4)plVar3[4];
      uVar12 = *(undefined4 *)((longlong)plVar3 + 0x24);
      uVar1 = (undefined4)plVar3[5];
    }
    *param_3 = uVar14;
    param_3[1] = uVar9;
    param_3[2] = uVar13;
    param_3[3] = uVar10;
    param_3[4] = uVar11;
    param_3[5] = uVar12;
    param_3[6] = uVar1;
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return plVar3 != (longlong *)0x0;
  }
  plVar3 = *(longlong **)(param_1 + 0x50);
  plVar2 = plVar3 + (longlong)*(int *)(param_1 + 0x58) * 6;
LAB_1477afc3c:
  if ((int)plVar3[1] == local_48) {
    if (1 < local_48) {
      lVar7 = 0;
      do {
        uVar5 = *(ushort *)(*plVar3 + lVar7);
        uVar6 = (ulonglong)uVar5;
        uVar4 = *(ushort *)((longlong)local_50 + lVar7);
        if (uVar5 == uVar4) {
          if (uVar5 == 0) break;
        }
        else {
          if (0x7f < (uVar4 | uVar5)) goto LAB_1477afd72;
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          uVar8 = (ulonglong)uVar4;
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[uVar8]) goto LAB_1477afd72;
        }
        lVar7 = lVar7 + 2;
      } while( true );
    }
  }
  else if ((int)plVar3[1] + local_48 != 1) goto LAB_1477afc9b;
  goto LAB_1477afca6;
LAB_1477afd72:
  if (uVar5 == uVar4) goto LAB_1477afca6;
LAB_1477afc9b:
  plVar3 = plVar3 + 6;
  if (plVar3 == plVar2) goto LAB_1477afca4;
  goto LAB_1477afc3c;
}



// FUNCTION 1477afd84 FUN_1477afd84 body=117 status=ok
// SIG undefined FUN_1477afd84(void)

void FUN_1477afd84(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477afdfa(param_1,&local_28);
  FUN_1410e5bda(param_3,&local_28);
  FUN_1447a1747(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477afdfa FUN_1477afdfa body=181 status=ok
// SIG undefined FUN_1477afdfa(void)

longlong * FUN_1477afdfa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  void *_Src;
  longlong lVar6;
  longlong lVar7;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x50);
    lVar6 = 0;
    do {
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1447a1bd6(param_2,iVar3);
      }
      lVar5 = *param_2;
      lVar7 = (longlong)iVar3 * 0x10;
      puVar1 = (undefined8 *)(lVar5 + lVar7);
      *(undefined8 *)(lVar5 + lVar7) = 0;
      iVar3 = *(int *)(lVar4 + 8 + lVar6);
      _Src = *(void **)(lVar4 + lVar6);
      *(int *)(lVar5 + 8 + lVar7) = iVar3;
      if ((longlong)iVar3 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,iVar3,0);
        memcpy((void *)*puVar1,_Src,(longlong)iVar3 * 2);
      }
      lVar6 = lVar6 + 0x30;
    } while ((longlong)iVar2 * 0x30 != lVar6);
  }
  return param_2;
}



// FUNCTION 1477afeb0 FUN_1477afeb0 body=223 status=ok
// SIG undefined FUN_1477afeb0(void)

void FUN_1477afeb0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477b07a0(param_1 + 0x90,plVar1);
  local_48 = 1;
  FUN_140d6793a(param_1,0x4000,0,DAT_14c872ce0);
  FUN_145d457a3(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477aff90 FUN_1477aff90 body=249 status=ok
// SIG undefined FUN_1477aff90(void)

void FUN_1477aff90(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  _Src = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_30;
  local_40 = (int)uStack_30;
  if (lVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,uStack_30 & 0xffffffff,0);
    memcpy(local_48,_Src,lVar1 * 2);
  }
  FUN_1477b008a(param_1,&local_48);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b008a FUN_1477b008a body=79 status=ok
// SIG undefined FUN_1477b008a(void)

void FUN_1477b008a(longlong param_1,longlong *param_2)

{
  FUN_144a787a6(param_1 + 0x80);
  FUN_140d6793a(param_1,0x4000,0,DAT_14c872ce0,1);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1477b00da FUN_1477b00da body=249 status=ok
// SIG undefined FUN_1477b00da(void)

void FUN_1477b00da(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  _Src = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_30;
  local_40 = (int)uStack_30;
  if (lVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,uStack_30 & 0xffffffff,0);
    memcpy(local_48,_Src,lVar1 * 2);
  }
  FUN_1477b01d4(param_1,&local_48);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b01d4 FUN_1477b01d4 body=76 status=ok
// SIG undefined FUN_1477b01d4(void)

void FUN_1477b01d4(longlong param_1,longlong *param_2)

{
  FUN_144a787a6(param_1 + 0x60);
  FUN_140d6793a(param_1,0x4000,0,DAT_14c872ce0,1);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1477b0220 FUN_1477b0220 body=181 status=ok
// SIG undefined FUN_1477b0220(void)

void FUN_1477b0220(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x48) = local_1c;
  local_28 = 1;
  FUN_140d6793a(param_1,0x4000,0,DAT_14c872ce0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b02d6 FUN_1477b02d6 body=181 status=ok
// SIG undefined FUN_1477b02d6(void)

void FUN_1477b02d6(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x4c) = local_1c;
  local_28 = 1;
  FUN_140d6793a(param_1,0x4000,0,DAT_14c872ce0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b038c FUN_1477b038c body=249 status=ok
// SIG undefined FUN_1477b038c(void)

void FUN_1477b038c(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  _Src = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_30;
  local_40 = (int)uStack_30;
  if (lVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,uStack_30 & 0xffffffff,0);
    memcpy(local_48,_Src,lVar1 * 2);
  }
  FUN_1477b0486(param_1,&local_48);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b0486 FUN_1477b0486 body=76 status=ok
// SIG undefined FUN_1477b0486(void)

void FUN_1477b0486(longlong param_1,longlong *param_2)

{
  FUN_144a787a6(param_1 + 0x38);
  FUN_140d6793a(param_1,0x4000,0,DAT_14c872ce0,1);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1477b04d2 FUN_1477b04d2 body=191 status=ok
// SIG undefined FUN_1477b04d2(void)

void FUN_1477b04d2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477b0592(param_1,plVar1);
  FUN_14580f7ba(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b0592 FUN_1477b0592 body=114 status=ok
// SIG undefined FUN_1477b0592(void)

void FUN_1477b0592(longlong param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  
  FUN_1477b0742(param_1 + 0x70);
  iVar2 = *(int *)(param_1 + 0x78);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    lVar4 = 0;
    do {
      fVar1 = *(float *)(lVar3 + 0x14 + lVar4);
      fVar5 = 0.0;
      if (0.0 < fVar1) {
        fVar5 = *(float *)(lVar3 + 0x10 + lVar4) / fVar1;
      }
      *(float *)(lVar3 + 0x20 + lVar4) = fVar5;
      lVar4 = lVar4 + 0x28;
    } while ((longlong)iVar2 * 0x28 != lVar4);
  }
  FUN_140d6793a(param_1,0x4000,0,DAT_14c872ce0,1);
  return;
}



// FUNCTION 1477b0604 FUN_1477b0604 body=220 status=ok
// SIG undefined FUN_1477b0604(void)

void FUN_1477b0604(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477b06e4(param_1 + 0x50,plVar1);
  local_48 = 1;
  FUN_140d6793a(param_1,0x4000,0,DAT_14c872ce0);
  FUN_14580f78f(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b06e4 FUN_1477b06e4 body=93 status=ok
// SIG undefined FUN_1477b06e4(void)

undefined8 * FUN_1477b06e4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14580f78f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1477b1620(param_1,iVar1);
      FUN_1477b1693(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1477b0742 FUN_1477b0742 body=93 status=ok
// SIG undefined FUN_1477b0742(void)

undefined8 * FUN_1477b0742(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14580f7ba(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1477b1528(param_1,iVar1);
      FUN_1477b159b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1477b07a0 FUN_1477b07a0 body=95 status=ok
// SIG undefined FUN_1477b07a0(void)

undefined8 * FUN_1477b07a0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145d457a3(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1477b171a(param_1,iVar1);
      FUN_1477b178d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1477b0814 FUN_1477b0814 body=45 status=ok
// SIG undefined FUN_1477b0814(void)

longlong FUN_1477b0814(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14580f6c4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477b092a FUN_1477b092a body=59 status=ok
// SIG undefined FUN_1477b092a(void)

undefined8 FUN_1477b092a(longlong *param_1)

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



// FUNCTION 1477b0970 FUN_1477b0970 body=38 status=ok
// SIG undefined FUN_1477b0970(void)

void FUN_1477b0970(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    if (*(longlong *)(param_2 + 0x38) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 1477b0a74 FUN_1477b0a74 body=59 status=ok
// SIG undefined FUN_1477b0a74(void)

undefined8 FUN_1477b0a74(longlong *param_1)

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



// FUNCTION 1477b0b7c FUN_1477b0b7c body=68 status=ok
// SIG undefined FUN_1477b0b7c(void)

undefined8 FUN_1477b0b7c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
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



// FUNCTION 1477b0be8 FUN_1477b0be8 body=59 status=ok
// SIG undefined FUN_1477b0be8(void)

undefined8 FUN_1477b0be8(longlong *param_1)

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



// FUNCTION 1477b0c2e FUN_1477b0c2e body=37 status=ok
// SIG undefined FUN_1477b0c2e(void)

void FUN_1477b0c2e(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[5] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 1477b0d4c FUN_1477b0d4c body=59 status=ok
// SIG undefined FUN_1477b0d4c(void)

undefined8 FUN_1477b0d4c(longlong *param_1)

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



// FUNCTION 1477b0e66 FUN_1477b0e66 body=70 status=ok
// SIG undefined FUN_1477b0e66(void)

undefined1 FUN_1477b0e66(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    uVar3 = *(undefined4 *)(param_3 + 0x1c);
    uVar4 = *(undefined4 *)(param_3 + 0x1c);
    uVar5 = *(undefined4 *)(param_3 + 0x20);
    uVar6 = *(undefined4 *)(param_3 + 0x24);
    uVar7 = *(undefined4 *)(param_3 + 0x28);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
    *(undefined4 *)(param_2 + 0x1c) = uVar4;
    *(undefined4 *)(param_2 + 0x20) = uVar5;
    *(undefined4 *)(param_2 + 0x24) = uVar6;
    *(undefined4 *)(param_2 + 0x28) = uVar7;
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 1477b0ed4 FUN_1477b0ed4 body=59 status=ok
// SIG undefined FUN_1477b0ed4(void)

undefined8 FUN_1477b0ed4(longlong *param_1)

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



// FUNCTION 1477b0f1a FUN_1477b0f1a body=37 status=ok
// SIG undefined FUN_1477b0f1a(void)

void FUN_1477b0f1a(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[6] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 1477b0ffc FUN_1477b0ffc body=59 status=ok
// SIG undefined FUN_1477b0ffc(void)

undefined8 FUN_1477b0ffc(longlong *param_1)

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



// FUNCTION 1477b10e0 FUN_1477b10e0 body=60 status=ok
// SIG undefined FUN_1477b10e0(void)

undefined8 FUN_1477b10e0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 1477b1144 FUN_1477b1144 body=59 status=ok
// SIG undefined FUN_1477b1144(void)

undefined8 FUN_1477b1144(longlong *param_1)

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



// FUNCTION 1477b118a FUN_1477b118a body=37 status=ok
// SIG undefined FUN_1477b118a(void)

void FUN_1477b118a(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 1477b1260 FUN_1477b1260 body=116 status=ok
// SIG undefined FUN_1477b1260(void)

undefined8 FUN_1477b1260(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar8);
      lVar2 = param_2 + 0x18 + lVar8;
      *(undefined8 *)(lVar2 + -0x18) = *puVar1;
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0xc);
      uVar4 = *(undefined4 *)(puVar1 + 2);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x14);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6(lVar2,puVar1 + 3);
      uVar7 = puVar1[6];
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x31);
      uVar4 = *(undefined4 *)((longlong)puVar1 + 0x35);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x39);
      uVar6 = *(undefined4 *)((longlong)puVar1 + 0x3d);
      *(undefined8 *)(lVar2 + 0x10) = puVar1[5];
      *(undefined8 *)(lVar2 + 0x18) = uVar7;
      *(undefined4 *)(lVar2 + 0x19) = uVar3;
      *(undefined4 *)(lVar2 + 0x1d) = uVar4;
      *(undefined4 *)(lVar2 + 0x21) = uVar5;
      *(undefined4 *)(lVar2 + 0x25) = uVar6;
      lVar8 = lVar8 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1477b12fc FUN_1477b12fc body=59 status=ok
// SIG undefined FUN_1477b12fc(void)

undefined8 FUN_1477b12fc(longlong *param_1)

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



// FUNCTION 1477b1342 FUN_1477b1342 body=38 status=ok
// SIG undefined FUN_1477b1342(void)

void FUN_1477b1342(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1477b146c FUN_1477b146c body=59 status=ok
// SIG undefined FUN_1477b146c(void)

undefined8 FUN_1477b146c(longlong *param_1)

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



// FUNCTION 1477b14b2 FUN_1477b14b2 body=38 status=ok
// SIG undefined FUN_1477b14b2(void)

void FUN_1477b14b2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1477b1528 FUN_1477b1528 body=115 status=ok
// SIG undefined FUN_1477b1528(void)

void FUN_1477b1528(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1477b159b FUN_1477b159b body=132 status=ok
// SIG undefined FUN_1477b159b(void)

void FUN_1477b159b(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined4 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = puVar5[-2];
      _Src = *(void **)(puVar5 + -4);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
      *(undefined4 *)(param_1 + 4) = puVar5[4];
      uVar2 = puVar5[1];
      uVar3 = puVar5[2];
      uVar4 = puVar5[3];
      *(undefined4 *)(param_1 + 2) = *puVar5;
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(undefined4 *)(param_1 + 3) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
      param_1 = param_1 + 5;
      puVar5 = puVar5 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1477b1620 FUN_1477b1620 body=115 status=ok
// SIG undefined FUN_1477b1620(void)

void FUN_1477b1620(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1477b1693 FUN_1477b1693 body=134 status=ok
// SIG undefined FUN_1477b1693(void)

void FUN_1477b1693(undefined8 *param_1,longlong param_2,int param_3)

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
  undefined4 *puVar9;
  
  if (param_3 != 0) {
    puVar9 = (undefined4 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = puVar9[-2];
      _Src = *(void **)(puVar9 + -4);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
      uVar2 = *puVar9;
      uVar3 = puVar9[1];
      uVar4 = puVar9[2];
      uVar5 = puVar9[3];
      uVar6 = puVar9[4];
      uVar7 = puVar9[5];
      uVar8 = puVar9[6];
      *(undefined4 *)((longlong)param_1 + 0x1c) = puVar9[3];
      *(undefined4 *)(param_1 + 4) = uVar6;
      *(undefined4 *)((longlong)param_1 + 0x24) = uVar7;
      *(undefined4 *)(param_1 + 5) = uVar8;
      *(undefined4 *)(param_1 + 2) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
      *(undefined4 *)(param_1 + 3) = uVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
      param_1 = param_1 + 6;
      puVar9 = puVar9 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1477b171a FUN_1477b171a body=115 status=ok
// SIG undefined FUN_1477b171a(void)

void FUN_1477b171a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1477b178d FUN_1477b178d body=124 status=ok
// SIG undefined FUN_1477b178d(void)

void FUN_1477b178d(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined4 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = puVar2[-2];
      _Src = *(void **)(puVar2 + -4);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
      *(undefined4 *)(param_1 + 2) = *puVar2;
      param_1 = param_1 + 3;
      puVar2 = puVar2 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1477b180a FUN_1477b180a body=36 status=ok
// SIG undefined FUN_1477b180a(void)

undefined8 FUN_1477b180a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1477b184a FUN_1477b184a body=93 status=ok
// SIG undefined FUN_1477b184a(void)

void FUN_1477b184a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a565d90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1477b18a8 FUN_1477b18a8 body=126 status=ok
// SIG undefined FUN_1477b18a8(void)

void FUN_1477b18a8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a565d90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477b1917. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1477b1926 FUN_1477b1926 body=21 status=ok
// SIG undefined FUN_1477b1926(void)

undefined8 FUN_1477b1926(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1477b1950 FUN_1477b1950 body=88 status=ok
// SIG undefined FUN_1477b1950(void)

void FUN_1477b1950(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a566090;
  param_1[1] = &PTR_FUN_14a5661c8;
  param_1[2] = &PTR_FUN_14a5661e0;
  lVar1 = param_1[0x3e];
  if (lVar1 != 0) {
    FUN_14703395c(lVar1);
    thunk_FUN_1400020a8(lVar1,0x48);
  }
  FUN_14704184c(param_1);
  return;
}



// FUNCTION 1477b19a8 FUN_1477b19a8 body=139 status=ok
// SIG undefined FUN_1477b19a8(void)

void FUN_1477b19a8(longlong param_1,double param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  if ((~*(uint *)(param_1 + 0x1e8) & 3) == 0) {
    iVar1 = *(int *)(param_1 + 0x7c);
    iVar2 = *(int *)(param_1 + 0x48);
    param_2 = param_2 + *(double *)(param_1 + 0x1d8);
    *(double *)(param_1 + 0x1d8) = param_2;
    if (*(double *)(param_1 + 0x1d0) <= param_2 && param_2 != *(double *)(param_1 + 0x1d0)) {
      do {
        FUN_142af6df8(param_1 + 0xa8);
        FUN_142af7532(param_1);
        dVar3 = *(double *)(param_1 + 0x1d0) + (double)iVar1 / (double)iVar2;
        *(double *)(param_1 + 0x1d0) = dVar3;
      } while (dVar3 < *(double *)(param_1 + 0x1d8));
    }
  }
  return;
}



// FUNCTION 1477b1a96 FUN_1477b1a96 body=493 status=ok
// SIG undefined FUN_1477b1a96(void)

uint FUN_1477b1a96(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(param_1 + 0x1e8);
  if ((uVar2 & 1) != 0) {
    *(byte *)(param_3 + 0x40) = *(byte *)(param_3 + 0x40) | 1;
    *(int *)(param_3 + 0x28) = (int)*(float *)(param_1 + 0x1c8);
    FUN_14020fad6(param_3 + 0x10,0);
    *(undefined4 *)(param_3 + 0x2c) = 1;
    FUN_14020fad6(param_3,L"Non-realtime Renderer");
    *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_1 + 0x1cc);
    plVar1 = (longlong *)(param_3 + 0x30);
    iVar3 = *(int *)(param_3 + 0x38);
    *(uint *)(param_3 + 0x38) = iVar3 + 1U;
    if (*(uint *)(param_3 + 0x3c) < iVar3 + 1U) {
      FUN_1477b22f8(plVar1,iVar3);
    }
    *(undefined4 *)(*(longlong *)(param_3 + 0x30) + (longlong)iVar3 * 4) = 0;
    iVar3 = *(int *)(param_3 + 0x38);
    *(uint *)(param_3 + 0x38) = iVar3 + 1U;
    if (*(uint *)(param_3 + 0x3c) < iVar3 + 1U) {
      FUN_1477b22f8(plVar1,iVar3);
    }
    *(undefined4 *)(*(longlong *)(param_3 + 0x30) + (longlong)iVar3 * 4) = 1;
    iVar3 = *(int *)(param_3 + 0x38);
    *(uint *)(param_3 + 0x38) = iVar3 + 1U;
    if (*(uint *)(param_3 + 0x3c) < iVar3 + 1U) {
      FUN_1477b22f8(plVar1,iVar3);
    }
    *(undefined4 *)(*(longlong *)(param_3 + 0x30) + (longlong)iVar3 * 4) = 2;
    iVar3 = *(int *)(param_3 + 0x38);
    *(uint *)(param_3 + 0x38) = iVar3 + 1U;
    if (*(uint *)(param_3 + 0x3c) < iVar3 + 1U) {
      FUN_1477b22f8(plVar1,iVar3);
    }
    *(undefined4 *)(*(longlong *)(param_3 + 0x30) + (longlong)iVar3 * 4) = 3;
    iVar3 = *(int *)(param_3 + 0x38);
    *(uint *)(param_3 + 0x38) = iVar3 + 1U;
    if (*(uint *)(param_3 + 0x3c) < iVar3 + 1U) {
      FUN_1477b22f8(plVar1,iVar3);
    }
    *(undefined4 *)(*(longlong *)(param_3 + 0x30) + (longlong)iVar3 * 4) = 4;
    iVar3 = *(int *)(param_3 + 0x38);
    *(uint *)(param_3 + 0x38) = iVar3 + 1U;
    if (*(uint *)(param_3 + 0x3c) < iVar3 + 1U) {
      FUN_1477b22f8(plVar1,iVar3);
    }
    *(undefined4 *)(*(longlong *)(param_3 + 0x30) + (longlong)iVar3 * 4) = 5;
    iVar3 = *(int *)(param_3 + 0x38);
    *(uint *)(param_3 + 0x38) = iVar3 + 1U;
    if (*(uint *)(param_3 + 0x3c) < iVar3 + 1U) {
      FUN_1477b22f8(plVar1,iVar3);
    }
    *(undefined4 *)(*(longlong *)(param_3 + 0x30) + (longlong)iVar3 * 4) = 9;
    iVar3 = *(int *)(param_3 + 0x38);
    *(uint *)(param_3 + 0x38) = iVar3 + 1U;
    if (*(uint *)(param_3 + 0x3c) < iVar3 + 1U) {
      FUN_1477b22f8(plVar1,iVar3);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar3 * 4) = 10;
  }
  return uVar2 & 0xffffff01;
}



// FUNCTION 1477b1c8e FUN_1477b1c8e body=159 status=ok
// SIG undefined FUN_1477b1c8e(void)

undefined8 FUN_1477b1c8e(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined8 uVar9;
  
  uVar9 = 0;
  if ((*(uint *)(param_1 + 0x3d) & 3) == 1) {
    param_1[0x14] = *(longlong *)(param_2 + 8);
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uVar5 = param_2[5];
    uVar6 = param_2[6];
    uVar7 = param_2[7];
    *(undefined4 *)(param_1 + 0x12) = param_2[4];
    *(undefined4 *)((longlong)param_1 + 0x94) = uVar5;
    *(undefined4 *)(param_1 + 0x13) = uVar6;
    *(undefined4 *)((longlong)param_1 + 0x9c) = uVar7;
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x84) = uVar2;
    *(undefined4 *)(param_1 + 0x11) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
    *(undefined4 *)(param_1 + 3) = 0;
    FUN_147042096(param_1 + 4);
    *(undefined4 *)(param_1 + 0xd) = 0;
    *(int *)(param_1 + 3) = (int)param_1[0x10];
    param_1[0xf] = *(ulonglong *)((longlong)param_1 + 0x84) << 0x20 |
                   *(ulonglong *)((longlong)param_1 + 0x84) >> 0x20;
    param_1[0xe] = param_1[0x12];
    cVar8 = (**(code **)(*param_1 + 0x68))(param_1,(int)param_1[0x10],param_1 + 4);
    if (cVar8 != '\0') {
      *(undefined4 *)(param_1 + 0xd) = 1;
      *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) | 2;
      uVar9 = 1;
    }
  }
  return uVar9;
}



// FUNCTION 1477b1d2e FUN_1477b1d2e body=29 status=ok
// SIG undefined FUN_1477b1d2e(void)

undefined8 FUN_1477b1d2e(longlong param_1,undefined8 param_2)

{
  FUN_1477b1d4c(param_2,param_1 + 0x20);
  return param_2;
}



// FUNCTION 1477b1d4c FUN_1477b1d4c body=259 status=ok
// SIG undefined FUN_1477b1d4c(void)

undefined8 * FUN_1477b1d4c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 5);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 5) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1477b2074(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 << 2);
  }
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfe | *(byte *)(param_2 + 8) & 1;
  return param_1;
}



// FUNCTION 1477b1e50 FUN_1477b1e50 body=80 status=ok
// SIG undefined FUN_1477b1e50(void)

undefined8 FUN_1477b1e50(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x3d);
  if (((uVar2 & 1) == 0) || ((int)param_1[0xd] == 0)) {
LAB_1477b1e5f:
    uVar3 = 0;
  }
  else {
    if ((uVar2 & 2) != 0) {
      cVar1 = (**(code **)(*param_1 + 0xa8))(param_1);
      if (cVar1 == '\0') goto LAB_1477b1e5f;
      uVar2 = *(uint *)(param_1 + 0x3d);
    }
    *(uint *)(param_1 + 0x3d) = uVar2 & 0xfffffffd;
    *(undefined4 *)(param_1 + 0xd) = 0;
    uVar3 = CONCAT71((uint7)(uint3)((uVar2 & 0xfffffffd) >> 8),1);
  }
  return uVar3;
}



// FUNCTION 1477b1ea0 FUN_1477b1ea0 body=16 status=ok
// SIG undefined FUN_1477b1ea0(void)

undefined1 FUN_1477b1ea0(void)

{
  FUN_142af76d4();
  return 1;
}



// FUNCTION 1477b1ebc FUN_1477b1ebc body=106 status=ok
// SIG undefined FUN_1477b1ebc(void)

void FUN_1477b1ebc(longlong *param_1)

{
  undefined1 auStack_58 [40];
  undefined8 local_30 [2];
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147041650(param_1 + 0x15,local_30,local_1c);
  (**(code **)(*param_1 + 200))(param_1,local_30[0]);
  (**(code **)(*(longlong *)param_1[0x23] + 0x10))();
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b1f56 FUN_1477b1f56 body=32 status=ok
// SIG undefined FUN_1477b1f56(void)

undefined8 FUN_1477b1f56(undefined8 param_1,undefined8 param_2)

{
  FUN_147041d92(param_2,L"/Script/WindowsTargetPlatform.WindowsTargetSettings");
  return param_2;
}



// FUNCTION 1477b1fc4 FUN_1477b1fc4 body=43 status=ok
// SIG undefined FUN_1477b1fc4(void)

undefined8 FUN_1477b1fc4(undefined8 param_1,int param_2)

{
  FUN_1477b1950();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1f8);
  }
  return param_1;
}



// FUNCTION 1477b1ff0 FUN_1477b1ff0 body=32 status=ok
// SIG undefined FUN_1477b1ff0(void)

undefined8 FUN_1477b1ff0(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"NonRealtime");
  return param_2;
}



// FUNCTION 1477b2010 FUN_1477b2010 body=50 status=ok
// SIG undefined FUN_1477b2010(void)

longlong FUN_1477b2010(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1477b1950(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1f8);
  }
  return param_1;
}



// FUNCTION 1477b2042 FUN_1477b2042 body=50 status=ok
// SIG undefined FUN_1477b2042(void)

longlong FUN_1477b2042(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10;
  FUN_1477b1950(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1f8);
  }
  return param_1;
}



// FUNCTION 1477b2074 FUN_1477b2074 body=98 status=ok
// SIG undefined FUN_1477b2074(void)

void FUN_1477b2074(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 2,4);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,4,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1477b20d6 FUN_1477b20d6 body=34 status=ok
// SIG undefined FUN_1477b20d6(void)

void FUN_1477b20d6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14a5662e0;
  return;
}



// FUNCTION 1477b20f8 FUN_1477b20f8 body=36 status=ok
// SIG undefined FUN_1477b20f8(void)

undefined8 FUN_1477b20f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1477b2138 FUN_1477b2138 body=93 status=ok
// SIG undefined FUN_1477b2138(void)

void FUN_1477b2138(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a566270;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1477b2196 FUN_1477b2196 body=123 status=ok
// SIG undefined FUN_1477b2196(void)

void FUN_1477b2196(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a566270;
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



// FUNCTION 1477b221e FUN_1477b221e body=21 status=ok
// SIG undefined FUN_1477b221e(void)

undefined8 FUN_1477b221e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1477b2234 FUN_1477b2234 body=34 status=ok
// SIG undefined FUN_1477b2234(void)

undefined8 FUN_1477b2234(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1477b225e FUN_1477b225e body=149 status=ok
// SIG undefined FUN_1477b225e(void)

void FUN_1477b225e(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_14001cc68(0xe50,0x10);
  puVar2 = (undefined8 *)FUN_14001cc68(0x1f8,0x10);
  FUN_14704169a(puVar2);
  *puVar2 = &PTR_FUN_14a566090;
  puVar2[1] = &PTR_FUN_14a5661c8;
  puVar2[2] = &PTR_FUN_14a5661e0;
  puVar2[0x39] = 0x2473b8000;
  puVar2[0x3a] = 0;
  puVar2[0x3b] = 0;
  puVar2[0x3c] = 0;
  *(byte *)(puVar2 + 0x3d) = *(byte *)(puVar2 + 0x3d) & 0xfc;
  puVar2[0x3e] = 0;
  FUN_1477ba824(uVar1,puVar2);
  return;
}



// FUNCTION 1477b22f8 FUN_1477b22f8 body=132 status=ok
// SIG undefined FUN_1477b22f8(void)

void FUN_1477b22f8(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1477b237e FUN_1477b237e body=118 status=ok
// SIG undefined FUN_1477b237e(void)

void FUN_1477b237e(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_1477b26fe(param_2,param_1 + 8);
  puVar2 = (undefined4 *)(param_1 + 0x18);
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *puVar2 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001477b23cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x170))(param_2,puVar2,4);
    return;
  }
  thunk_FUN_14572512c(param_2,puVar2);
  return;
}



// FUNCTION 1477b23f4 FUN_1477b23f4 body=152 status=ok
// SIG undefined FUN_1477b23f4(void)

undefined8 * FUN_1477b23f4(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar2 = (undefined8 *)FUN_14494321d(0x60);
  *puVar2 = &PTR_FUN_14a566450;
  puVar2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(puVar2 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
  }
  else {
    FUN_1470345a0(puVar2 + 1,iVar1,0);
    memcpy((void *)puVar2[1],_Src,(longlong)iVar1 << 2);
  }
  puVar4 = (undefined8 *)(param_1 + 0x18);
  puVar5 = puVar2 + 3;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 1477b248c FUN_1477b248c body=54 status=ok
// SIG undefined FUN_1477b248c(void)

void FUN_1477b248c(longlong param_1)

{
  if (*(int *)(param_1 + 0x14) < 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_1470345fa(param_1 + 8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 1477b24c6 FUN_1477b24c6 body=57 status=ok
// SIG undefined FUN_1477b24c6(void)

undefined8 * FUN_1477b24c6(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14a566470;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 1477b24ff FUN_1477b24ff body=120 status=ok
// SIG undefined FUN_1477b24ff(void)

undefined8 * FUN_1477b24ff(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cababd8) {
    FUN_144b3d300(&DAT_14cababd8);
    if (DAT_14cababd8 == -1) {
      FUN_1446f470e(&DAT_14cababd0,L"Unreal Ambisonics",1);
      _Init_thread_footer(&DAT_14cababd8);
    }
  }
  *param_1 = DAT_14cababd0;
  return param_1;
}



// FUNCTION 1477b2577 FUN_1477b2577 body=181 status=ok
// SIG undefined FUN_1477b2577(void)

undefined8 * FUN_1477b2577(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1477b24ff(&local_40);
  plVar1 = (longlong *)FUN_147045aca(&local_40);
  if (plVar1 == (longlong *)0x0) {
    *param_1 = 0;
  }
  else {
    local_34 = *(undefined4 *)(param_2 + 0x7c);
    local_3c = *(undefined4 *)(param_2 + 0xcb8);
    local_30 = param_2;
    local_40 = FUN_14795ecdc(param_2);
    local_38 = (undefined4)(longlong)(float)*(int *)(param_2 + 0x74);
    FUN_1477b262d();
    (**(code **)(*plVar1 + 0x18))(plVar1,param_1,&local_40,&DAT_14cababe0);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b262d FUN_1477b262d body=108 status=ok
// SIG undefined FUN_1477b262d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1477b262d(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cababf0) {
    FUN_144b3d300(&DAT_14cababf0);
    if (DAT_14cababf0 == -1) {
      _DAT_14cababe0 = &PTR_FUN_14a566470;
      _Init_thread_footer(&DAT_14cababf0);
    }
  }
  _DAT_14cababe8 = 1;
  return &DAT_14cababe0;
}



// FUNCTION 1477b269e FUN_1477b269e body=62 status=ok
// SIG undefined FUN_1477b269e(void)

undefined8 * FUN_1477b269e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a566450;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1477b26dc FUN_1477b26dc body=34 status=ok
// SIG undefined FUN_1477b26dc(void)

undefined8 FUN_1477b26dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1477b26fe FUN_1477b26fe body=288 status=ok
// SIG undefined FUN_1477b26fe(void)

longlong * FUN_1477b26fe(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 1) << 2,
             (longlong)*(int *)((longlong)param_2 + 0xc) << 2);
  local_1c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_1c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_1c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1470345fa(param_2,0);
    }
  }
  else if ((((int)local_1c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x400000 < local_1c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else {
    *(uint *)(param_2 + 1) = local_1c;
    uVar3 = local_1c;
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_1470345a0(param_2,local_1c,*(undefined4 *)((longlong)param_2 + 0xc));
      uVar3 = *(uint *)(param_2 + 1);
    }
    (**(code **)(*param_1 + 0x170))(param_1,*param_2,(longlong)(int)uVar3 << 2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1477b2820 FUN_1477b2820 body=29 status=ok
// SIG undefined FUN_1477b2820(void)

void FUN_1477b2820(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14a566500;
  return;
}



// FUNCTION 1477b283e FUN_1477b283e body=36 status=ok
// SIG undefined FUN_1477b283e(void)

undefined8 FUN_1477b283e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1477b287e FUN_1477b287e body=93 status=ok
// SIG undefined FUN_1477b287e(void)

void FUN_1477b287e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a566490;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1477b28dc FUN_1477b28dc body=123 status=ok
// SIG undefined FUN_1477b28dc(void)

void FUN_1477b28dc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a566490;
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



// FUNCTION 1477b2964 FUN_1477b2964 body=21 status=ok
// SIG undefined FUN_1477b2964(void)

undefined8 FUN_1477b2964(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1477b297a FUN_1477b297a body=34 status=ok
// SIG undefined FUN_1477b297a(void)

undefined8 FUN_1477b297a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1477b29a0 FUN_1477b29a0 body=38 status=ok
// SIG undefined FUN_1477b29a0(void)

void FUN_1477b29a0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x28))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1477b29c6 FUN_1477b29c6 body=157 status=ok
// SIG undefined FUN_1477b29c6(void)

void FUN_1477b29c6(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x18))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b2a64 FUN_1477b2a64 body=157 status=ok
// SIG undefined FUN_1477b2a64(void)

void FUN_1477b2a64(longlong *param_1,longlong param_2)

{
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
  (**(code **)(*param_1 + 0x10))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b2b1c FUN_1477b2b1c body=120 status=ok
// SIG undefined FUN_1477b2b1c(void)

undefined8 * FUN_1477b2b1c(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cabacc8) {
    FUN_144b3d300(&DAT_14cabacc8);
    if (DAT_14cabacc8 == -1) {
      FUN_1446f470e(&DAT_14cabacc0,L"AudioLink Factory",1);
      _Init_thread_footer(&DAT_14cabacc8);
    }
  }
  *param_1 = DAT_14cabacc0;
  return param_1;
}



// FUNCTION 1477b2b94 FUN_1477b2b94 body=121 status=ok
// SIG undefined FUN_1477b2b94(void)

undefined8 FUN_1477b2b94(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_1448c2e86();
  (**(code **)(*plVar1 + 8))(plVar1);
  uVar2 = FUN_1448c2e86();
  FUN_1477b2b1c(&local_28);
  FUN_1477b2c0e(uVar2,param_1,local_28);
  plVar1 = (longlong *)FUN_1448c2e86();
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b2c0e FUN_1477b2c0e body=137 status=ok
// SIG undefined FUN_1477b2c0e(void)

longlong * FUN_1477b2c0e(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (**(code **)(*param_1 + 0x18))(0,param_3);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_3,iVar5);
      lVar4 = lVar3 + -8;
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1477b2f86(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  return param_2;
}



// FUNCTION 1477b2c98 FUN_1477b2c98 body=192 status=ok
// SIG undefined FUN_1477b2c98(void)

longlong * FUN_1477b2c98(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1477b2b94(&local_50);
  lVar2 = local_50;
  if ((longlong)local_48 != 0) {
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar3) + 8))(*(longlong **)(lVar2 + lVar3),&local_40);
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1446f84a2(param_1,iVar1);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = local_40;
      lVar3 = lVar3 + 8;
    } while ((longlong)local_48 * 8 != lVar3);
  }
  if (local_50 != 0) {
    FUN_1400020a8(local_50);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1477b2d5a FUN_1477b2d5a body=162 status=ok
// SIG undefined FUN_1477b2d5a(void)

undefined8 FUN_1477b2d5a(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  int local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1477b2b94(&local_48);
  if ((longlong)local_40 == 0) {
LAB_1477b2dc6:
    uVar1 = 0;
  }
  else {
    lVar3 = (longlong)local_40 << 3;
    uVar1 = 0;
    puVar2 = local_48;
    do {
      (**(code **)(*(longlong *)*puVar2 + 8))((longlong *)*puVar2,&local_38);
      if (local_38 == param_1) {
        if (puVar2 == (undefined8 *)0x0) goto LAB_1477b2dc6;
        uVar1 = *puVar2;
        break;
      }
      puVar2 = puVar2 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1477b2e02 FUN_1477b2e02 body=34 status=ok
// SIG undefined FUN_1477b2e02(void)

void FUN_1477b2e02(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14a566c90;
  return;
}


