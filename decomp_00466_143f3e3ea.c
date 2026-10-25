// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143f3e3ea FUN_143f3e3ea body=60 status=ok
// SIG undefined FUN_143f3e3ea(void)

undefined8 FUN_143f3e3ea(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  if (((*(longlong *)(param_1 + 0x20) != 0) && (*(longlong *)(param_1 + 0x28) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x28) + 8))) {
    FUN_145b00b0c(*(undefined8 *)(param_1 + 0x18),param_3,param_4,*(undefined8 *)(param_1 + 0x30));
  }
  return 1;
}



// FUNCTION 143f3e426 FUN_143f3e426 body=29 status=ok
// SIG undefined FUN_143f3e426(void)

undefined8 FUN_143f3e426(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f3e458 FUN_143f3e458 body=85 status=ok
// SIG undefined FUN_143f3e458(void)

void FUN_143f3e458(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f0290;
  return;
}



// FUNCTION 143f3e4ae FUN_143f3e4ae body=85 status=ok
// SIG undefined FUN_143f3e4ae(void)

void FUN_143f3e4ae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f0290;
  return;
}



// FUNCTION 143f3e504 FUN_143f3e504 body=118 status=ok
// SIG undefined FUN_143f3e504(void)

void FUN_143f3e504(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f3a00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f0290;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f3e56b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f3e584 FUN_143f3e584 body=97 status=ok
// SIG undefined FUN_143f3e584(void)

longlong * FUN_143f3e584(longlong param_1)

{
  uint uVar1;
  longlong *in_RAX;
  longlong lVar2;
  
  if ((((*(int *)(param_1 + 0x34) != 0) && (uVar1 = *(uint *)(param_1 + 0x30), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((in_RAX = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       in_RAX != (longlong *)0x0 && ((int)in_RAX[2] == *(int *)(param_1 + 0x34))) &&
      ((*(uint *)(in_RAX + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(in_RAX + 1) & 0x10200000) == 0) {
      lVar2 = *in_RAX;
    }
    else {
      lVar2 = 0;
    }
    if (*(longlong *)(lVar2 + 0x2c0) != 0) {
      return (longlong *)(ulonglong)*(uint *)(in_RAX + 1);
    }
  }
  return in_RAX;
}



// FUNCTION 143f3e5f6 FUN_143f3e5f6 body=64 status=ok
// SIG undefined FUN_143f3e5f6(void)

undefined8 * FUN_143f3e5f6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4f0390;
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



// FUNCTION 143f3e63a FUN_143f3e63a body=81 status=ok
// SIG undefined FUN_143f3e63a(void)

undefined8 FUN_143f3e63a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 143f3e692 FUN_143f3e692 body=89 status=ok
// SIG undefined FUN_143f3e692(void)

bool FUN_143f3e692(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_143f3e6dd;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_143f3e6dd:
  return lVar6 == param_2;
}



// FUNCTION 143f3e708 FUN_143f3e708 body=118 status=ok
// SIG undefined FUN_143f3e708(void)

void FUN_143f3e708(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4d10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f0390;
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



// FUNCTION 143f3e77e FUN_143f3e77e body=118 status=ok
// SIG undefined FUN_143f3e77e(void)

void FUN_143f3e77e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4d10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f0390;
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



// FUNCTION 143f3e7f4 FUN_143f3e7f4 body=156 status=ok
// SIG undefined FUN_143f3e7f4(void)

void FUN_143f3e7f4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e4d10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f0390;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f3e880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f3e890 FUN_143f3e890 body=111 status=ok
// SIG undefined FUN_143f3e890(void)

void FUN_143f3e890(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_143f3e8eb:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_143f3e8eb;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
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
                    /* WARNING: Could not recover jumptable at 0x000143f3e8e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143f3e900 FUN_143f3e900 body=111 status=ok
// SIG undefined FUN_143f3e900(void)

ulonglong FUN_143f3e900(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_143f3e964:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_143f3e964;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 143f3e970 FUN_143f3e970 body=29 status=ok
// SIG undefined FUN_143f3e970(void)

undefined8 FUN_143f3e970(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f3e9a2 FUN_143f3e9a2 body=85 status=ok
// SIG undefined FUN_143f3e9a2(void)

void FUN_143f3e9a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f04b0;
  return;
}



// FUNCTION 143f3e9f8 FUN_143f3e9f8 body=85 status=ok
// SIG undefined FUN_143f3e9f8(void)

void FUN_143f3e9f8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f04b0;
  return;
}



// FUNCTION 143f3ea4e FUN_143f3ea4e body=118 status=ok
// SIG undefined FUN_143f3ea4e(void)

void FUN_143f3ea4e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f3a00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f04b0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f3eab5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f3eace FUN_143f3eace body=509 status=ok
// SIG undefined FUN_143f3eace(void)

void FUN_143f3eace(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_98 [32];
  longlong **local_78;
  longlong local_70;
  longlong *local_68;
  int local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *param_1;
  local_70 = lVar4;
  FUN_148a9d892(&local_68,lVar4);
  if (*(int *)(lVar4 + 0x34) == 0) {
LAB_143f3ecbe:
    uVar7 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar4 + 0x30);
    uVar7 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != *(int *)(lVar4 + 0x34) ||
          ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_143f3ecbe;
      uVar7 = *puVar6;
    }
  }
  plVar5 = (longlong *)FUN_14001cc68(0x78,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b4f07b0;
  plVar1 = plVar5 + 2;
  local_78 = &local_48;
  local_48 = local_68;
  local_68 = (longlong *)0x0;
  local_40 = (longlong *)CONCAT44(local_40._4_4_,local_60);
  local_60 = 0;
  FUN_148a9da0e(plVar1,uVar7,*(undefined4 *)(lVar4 + 0x48),*(undefined4 *)(lVar4 + 0x4c));
  local_58 = plVar1;
  local_50 = plVar5;
  FUN_148a9e0a4(&local_58,plVar1);
  local_48 = plVar1;
  local_40 = plVar5;
  if (plVar5 == (longlong *)0x0) {
    FUN_146076d0e(lVar4 + 0x20,&local_48);
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    FUN_146076d0e(lVar4 + 0x20);
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
  }
  plVar1 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_50 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (local_60 != 0) {
    if (local_68 == (longlong *)0x0) goto LAB_143f3ec99;
    (**(code **)*local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    local_60 = 0;
  }
  if (local_68 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143f3ec99:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f3ecfa FUN_143f3ecfa body=103 status=ok
// SIG undefined FUN_143f3ecfa(void)

undefined8 FUN_143f3ecfa(undefined8 *param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)*param_1;
  FUN_140056680(local_28,&DAT_14b438b8e);
  (**(code **)(*plVar1 + 0xa8))(plVar1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f3ed6c FUN_143f3ed6c body=12 status=ok
// SIG undefined FUN_143f3ed6c(void)

void FUN_143f3ed6c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143f3ed75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143f3ed78 FUN_143f3ed78 body=29 status=ok
// SIG undefined FUN_143f3ed78(void)

undefined8 FUN_143f3ed78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f3ed96 FUN_143f3ed96 body=83 status=ok
// SIG undefined FUN_143f3ed96(void)

undefined8 * FUN_143f3ed96(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4f0980;
  plVar3 = (longlong *)param_1[4];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f3edfe FUN_143f3edfe body=110 status=ok
// SIG undefined FUN_143f3edfe(void)

void FUN_143f3edfe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f06a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f0980;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f3ee6c FUN_143f3ee6c body=110 status=ok
// SIG undefined FUN_143f3ee6c(void)

void FUN_143f3ee6c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f06a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f0980;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143f3eeda FUN_143f3eeda body=148 status=ok
// SIG undefined FUN_143f3eeda(void)

void FUN_143f3eeda(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f06a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f0980;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f3ef5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f3ef74 FUN_143f3ef74 body=29 status=ok
// SIG undefined FUN_143f3ef74(void)

undefined8 FUN_143f3ef74(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f3efa6 FUN_143f3efa6 body=85 status=ok
// SIG undefined FUN_143f3efa6(void)

void FUN_143f3efa6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f09f0;
  return;
}



// FUNCTION 143f3effc FUN_143f3effc body=85 status=ok
// SIG undefined FUN_143f3effc(void)

void FUN_143f3effc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f09f0;
  return;
}



// FUNCTION 143f3f052 FUN_143f3f052 body=118 status=ok
// SIG undefined FUN_143f3f052(void)

void FUN_143f3f052(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f3a00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f09f0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f3f0b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f3f0ce FUN_143f3f0ce body=578 status=ok
// SIG undefined FUN_143f3f0ce(void)

undefined8 FUN_143f3f0ce(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  void *_Src;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined8 **local_78;
  undefined4 local_6c;
  void *local_68;
  undefined8 local_60;
  undefined8 *local_58;
  int local_50;
  void *local_48;
  uint local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *param_1;
  if (*(int *)(*(longlong *)(lVar2 + 0x38) + 0x40) < 1) goto LAB_143f3f12b;
  lVar3 = **(longlong **)(*(longlong *)(lVar2 + 0x38) + 0x38);
  if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
    FUN_14689c22e(lVar3);
  }
  else if (lVar3 == 0) goto LAB_143f3f12b;
  local_38 = FUN_14119d510(lVar2,*(undefined4 *)(lVar3 + 0xe0));
  if (local_38 == 0) goto LAB_143f3f12b;
  FUN_1418c0468(lVar2 + 0x80,&local_48);
  _Src = local_48;
  uVar5 = *(undefined8 *)(lVar2 + 0x40);
  local_68 = (void *)0x0;
  local_60 = CONCAT44(local_60._4_4_,local_40);
  if ((longlong)(int)local_40 == 0) {
    local_60 = (ulonglong)local_40;
  }
  else {
    FUN_1446dd670(&local_68,local_40,0);
    memcpy(local_68,_Src,(longlong)(int)local_40 * 2);
  }
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  local_50 = 3;
  *local_58 = &PTR_LAB_14b4f3a00;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_58[2] = lVar6;
  *local_58 = &PTR_FUN_14b4f0b80;
  local_58[3] = local_68;
  local_68 = (void *)0x0;
  *(undefined4 *)(local_58 + 4) = (undefined4)local_60;
  *(undefined4 *)((longlong)local_58 + 0x24) = local_60._4_4_;
  local_60 = 0;
  local_6c = FUN_14119d564(lVar2);
  local_78 = &local_58;
  FUN_145d03dea(uVar5,&local_38,&local_6c,&local_48);
  if (local_50 == 0) {
LAB_143f3f2b8:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_143f3f2b8;
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_143f3f12b:
  plVar4 = *(longlong **)(lVar2 + 0x160);
  *(undefined8 *)(lVar2 + 0x158) = 0;
  *(undefined8 *)(lVar2 + 0x160) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f3f31c FUN_143f3f31c body=12 status=ok
// SIG undefined FUN_143f3f31c(void)

void FUN_143f3f31c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143f3f325. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143f3f328 FUN_143f3f328 body=29 status=ok
// SIG undefined FUN_143f3f328(void)

undefined8 FUN_143f3f328(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f3f346 FUN_143f3f346 body=57 status=ok
// SIG undefined FUN_143f3f346(void)

undefined8 * FUN_143f3f346(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4f0b80;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f3f394 FUN_143f3f394 body=159 status=ok
// SIG undefined FUN_143f3f394(void)

void FUN_143f3f394(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4f3a00;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b4f0b80;
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 3,iVar1,0);
    memcpy((void *)puVar2[3],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  return;
}



// FUNCTION 143f3f434 FUN_143f3f434 body=159 status=ok
// SIG undefined FUN_143f3f434(void)

void FUN_143f3f434(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4f3a00;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b4f0b80;
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 3,iVar1,0);
    memcpy((void *)puVar2[3],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  return;
}



// FUNCTION 143f3f4d4 FUN_143f3f4d4 body=198 status=ok
// SIG undefined FUN_143f3f4d4(void)

void FUN_143f3f4d4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  _LIST_ENTRY **pp_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b4f3a00;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b4f0b80;
  (p_Var2->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  DVar1 = *(DWORD *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  p_Var2->EntryCount = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->ContentionCount = 0;
  }
  else {
    pp_Var3 = &(p_Var2->ProcessLocksList).Blink;
    FUN_1446dd670(pp_Var3,DVar1,0);
    memcpy(*pp_Var3,_Src,(longlong)(int)DVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f3f588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f3f5a0 FUN_143f3f5a0 body=811 status=ok
// SIG undefined FUN_143f3f5a0(void)

undefined8 FUN_143f3f5a0(longlong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  undefined4 uVar8;
  uint *puVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 auStack_b8 [36];
  int local_94;
  longlong local_90;
  ulonglong local_88;
  uint *local_80;
  undefined8 *local_78;
  undefined4 local_70;
  longlong local_68 [2];
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = *param_1;
  local_90 = lVar5 + 0x178;
  local_80 = (uint *)(lVar5 + 0x188);
  uVar17 = *(uint *)(lVar5 + 0x1a0);
  uVar14 = (ulonglong)uVar17;
  if (uVar17 == 0) {
    uVar20 = 1;
    uVar19 = 0;
    iVar16 = 0;
    uVar7 = 0;
  }
  else {
    puVar9 = *(uint **)(lVar5 + 0x198);
    if (*(uint **)(lVar5 + 0x198) == (uint *)0x0) {
      puVar9 = local_80;
    }
    uVar7 = *puVar9;
    if (uVar7 == 0) {
      iVar16 = uVar17 + 0x1e;
      if (-1 < (int)(uVar17 - 1)) {
        iVar16 = uVar17 - 1;
      }
      uVar19 = 0;
      uVar20 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar20 = uVar19;
      }
      iVar16 = 0;
      do {
        if (uVar20 == uVar19) goto LAB_143f3f664;
        iVar16 = iVar16 + 0x20;
        uVar7 = puVar9[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar19 = 0;
      iVar16 = 0;
    }
    uVar20 = (ulonglong)(-uVar7 & uVar7);
    uVar2 = uVar20 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar7 = (iVar16 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if ((int)uVar17 <= (int)uVar7) {
      uVar7 = uVar17;
    }
  }
  if (uVar7 != uVar17) {
    uVar17 = 0xffffffff;
    local_88 = uVar14;
    do {
      uVar8 = *(undefined4 *)(*(longlong *)(lVar5 + 0x178) + (longlong)(int)uVar7 * 0xc);
      local_94 = iVar16;
      lVar10 = FUN_14119d510(lVar5,uVar8);
      if (lVar10 != 0) {
        FUN_1413f457a(lVar5,&local_58,uVar8);
        if (local_58 != 0) {
          FUN_1418c0468(local_58 + 0x20,local_68);
          local_78 = (undefined8 *)0x0;
          local_70 = 0;
          FUN_1446efa72(&local_78,0,2,0x10);
          local_70 = 2;
          *local_78 = &PTR_LAB_14b4f3a00;
          LOCK();
          UNLOCK();
          lVar13 = DAT_14c758608 + 1;
          lVar15 = DAT_14c758608 + 1;
          if (lVar13 == 0) {
            LOCK();
            UNLOCK();
            lVar13 = DAT_14c758608 + 2;
            lVar15 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar15;
          local_78[2] = lVar13;
          *local_78 = &PTR_FUN_14b4f0c10;
          *(undefined4 *)(local_78 + 3) = uVar8;
          uVar8 = FUN_14119d564(lVar5);
          FUN_143ef062a(lVar10,uVar8,local_68,&local_78);
          uVar14 = local_88;
          if (local_68[0] != 0) {
            FUN_1400020a8();
            uVar14 = local_88;
          }
        }
        plVar6 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_50 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
      }
      uVar17 = uVar17 & ~(uint)uVar20;
      puVar9 = *(uint **)(lVar5 + 0x198);
      if (*(uint **)(lVar5 + 0x198) == (uint *)0x0) {
        puVar9 = local_80;
      }
      uVar4 = *(uint *)(lVar5 + 0x1a0);
      iVar18 = (int)uVar19;
      lVar10 = (longlong)iVar18;
      uVar7 = puVar9[lVar10] & uVar17;
      iVar16 = local_94;
      if (uVar7 == 0) {
        iVar11 = uVar4 + 0x1e;
        if (-1 < (int)(uVar4 - 1)) {
          iVar11 = uVar4 - 1;
        }
        iVar11 = iVar11 >> 5;
        iVar16 = local_94 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar18) {
          iVar12 = iVar18;
        }
        if (iVar18 < iVar11) {
          lVar15 = 0;
          do {
            uVar7 = puVar9[lVar10 + lVar15 + 1];
            if (uVar7 != 0) {
              uVar19 = (ulonglong)(iVar18 + (int)lVar15 + 1);
              uVar17 = 0xffffffff;
              goto LAB_143f3f86c;
            }
            iVar16 = iVar16 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar12 - lVar10 != lVar15);
          uVar17 = 0xffffffff;
          iVar18 = iVar12;
        }
        uVar19 = (ulonglong)(iVar18 + 1);
        uVar7 = uVar4;
      }
      else {
LAB_143f3f86c:
        uVar20 = (ulonglong)(-uVar7 & uVar7);
        uVar2 = uVar20 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar7 = (iVar16 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if ((int)uVar4 <= (int)uVar7) {
          uVar7 = uVar4;
        }
      }
    } while (uVar7 != (uint)uVar14);
  }
LAB_143f3f664:
  FUN_1402226aa(local_90);
  plVar6 = *(longlong **)(lVar5 + 0x170);
  *(undefined8 *)(lVar5 + 0x168) = 0;
  *(undefined8 *)(lVar5 + 0x170) = 0;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 143f3f8d6 FUN_143f3f8d6 body=12 status=ok
// SIG undefined FUN_143f3f8d6(void)

void FUN_143f3f8d6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143f3f8df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143f3f8e2 FUN_143f3f8e2 body=29 status=ok
// SIG undefined FUN_143f3f8e2(void)

undefined8 FUN_143f3f8e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f3f900 FUN_143f3f900 body=29 status=ok
// SIG undefined FUN_143f3f900(void)

undefined8 FUN_143f3f900(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f3f932 FUN_143f3f932 body=91 status=ok
// SIG undefined FUN_143f3f932(void)

void FUN_143f3f932(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f0c10;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f3f98e FUN_143f3f98e body=91 status=ok
// SIG undefined FUN_143f3f98e(void)

void FUN_143f3f98e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f0c10;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f3f9ea FUN_143f3f9ea body=124 status=ok
// SIG undefined FUN_143f3f9ea(void)

void FUN_143f3f9ea(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f3a00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f0c10;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f3fa57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f3fa6c FUN_143f3fa6c body=29 status=ok
// SIG undefined FUN_143f3fa6c(void)

undefined8 FUN_143f3fa6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f3fa9e FUN_143f3fa9e body=93 status=ok
// SIG undefined FUN_143f3fa9e(void)

void FUN_143f3fa9e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f0d80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f0d10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f3fafc FUN_143f3fafc body=93 status=ok
// SIG undefined FUN_143f3fafc(void)

void FUN_143f3fafc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f0d80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f0d10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f3fb5a FUN_143f3fb5a body=126 status=ok
// SIG undefined FUN_143f3fb5a(void)

void FUN_143f3fb5a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f0d80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f0d10;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f3fbc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f3fbd8 FUN_143f3fbd8 body=77 status=ok
// SIG undefined FUN_143f3fbd8(void)

void FUN_143f3fbd8(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_c = param_4;
  FUN_143f3fc76(param_1 + 0x18,&local_10,param_3,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f3fc26 FUN_143f3fc26 body=79 status=ok
// SIG undefined FUN_143f3fc26(void)

undefined8 FUN_143f3fc26(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_c = param_4;
  FUN_143f3fc76(param_1 + 0x18,&local_10,param_3,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f3fc76 FUN_143f3fc76 body=512 status=ok
// SIG undefined FUN_143f3fc76(void)

void FUN_143f3fc76(longlong *param_1,int *param_2,longlong *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1 = (longlong *)*param_1;
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
  }
  FUN_1411cb5f6(&local_58,*param_4);
  plVar1 = uStack_50;
  if (param_1 + 0x6c != &local_58) {
    param_1[0x6c] = local_58;
    local_58 = 0;
    plVar3 = (longlong *)param_1[0x6d];
    if (uStack_50 != plVar3) {
      uStack_50 = (longlong *)0x0;
      param_1[0x6d] = (longlong)plVar1;
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
    }
  }
  plVar1 = uStack_50;
  if (uStack_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = uStack_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*uStack_50)(uStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_58 = 0;
  uStack_50 = (longlong *)0x0;
  lVar5 = param_3[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar4 = *param_3;
    lVar9 = 0;
    do {
      FUN_1411cb5f6(&local_68,*(undefined4 *)(lVar4 + lVar9));
      uVar7 = (ulonglong)uStack_50;
      plVar1 = local_60;
      lVar6 = local_68;
      if (local_68 != 0) {
        if (local_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
        }
        lVar10 = (longlong)(int)uStack_50;
        uVar8 = (int)uStack_50 + 1;
        uStack_50 = (longlong *)CONCAT44(uStack_50._4_4_,uVar8);
        if (uStack_50._4_4_ < uVar8) {
          FUN_1413eac7e(&local_58,uVar7 & 0xffffffff);
        }
        *(longlong *)(local_58 + lVar10 * 0x10) = lVar6;
        *(longlong **)(local_58 + 8 + lVar10 * 0x10) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
          UNLOCK();
          LOCK();
          plVar3 = plVar1 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar1)(plVar1);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
      }
      plVar1 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_60 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      lVar9 = lVar9 + 4;
    } while ((longlong)(int)lVar5 * 4 != lVar9);
  }
  (**(code **)(*param_1 + 0xb8))(param_1,&local_58);
  FUN_14127b1cd(local_58,(ulonglong)uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f3feb8 FUN_143f3feb8 body=29 status=ok
// SIG undefined FUN_143f3feb8(void)

undefined8 FUN_143f3feb8(longlong *param_1)

{
  if (*(longlong *)(*param_1 + 0x3f8) != 0) {
    FUN_143f38760();
  }
  return 0;
}



// FUNCTION 143f3fee0 FUN_143f3fee0 body=12 status=ok
// SIG undefined FUN_143f3fee0(void)

void FUN_143f3fee0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143f3fee9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143f3feec FUN_143f3feec body=29 status=ok
// SIG undefined FUN_143f3feec(void)

undefined8 FUN_143f3feec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f3ff0a FUN_143f3ff0a body=29 status=ok
// SIG undefined FUN_143f3ff0a(void)

undefined8 FUN_143f3ff0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f3ff3c FUN_143f3ff3c body=93 status=ok
// SIG undefined FUN_143f3ff3c(void)

void FUN_143f3ff3c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f1110;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f3ff9a FUN_143f3ff9a body=93 status=ok
// SIG undefined FUN_143f3ff9a(void)

void FUN_143f3ff9a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f3a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f1110;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f3fff8 FUN_143f3fff8 body=126 status=ok
// SIG undefined FUN_143f3fff8(void)

void FUN_143f3fff8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f3a70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f1110;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f40067. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f40076 FUN_143f40076 body=73 status=ok
// SIG undefined FUN_143f40076(void)

void FUN_143f40076(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_c = param_4;
  FUN_143f4010c(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f400c0 FUN_143f400c0 body=75 status=ok
// SIG undefined FUN_143f400c0(void)

undefined8 FUN_143f400c0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_c = param_4;
  FUN_143f4010c(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4010c FUN_143f4010c body=451 status=ok
// SIG undefined FUN_143f4010c(void)

void FUN_143f4010c(longlong *param_1,int *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_2 == 0) {
    lVar5 = *param_1;
    FUN_1411cb5f6(&local_28,*param_3);
    plVar3 = local_20;
    iVar4 = *(int *)(lVar5 + 0x78);
    if ((longlong)iVar4 != 0) {
      lVar6 = *(longlong *)(lVar5 + 0x70);
      lVar8 = 0;
      uVar7 = 0;
      do {
        if (*(char *)(*(longlong *)(lVar6 + lVar8) + 0x18) != '\0') {
          if ((-1 < (int)uVar7) && ((int)uVar7 < iVar4)) {
            lVar8 = (ulonglong)(uVar7 & 0x7fffffff) * 0x10;
            local_38 = *(undefined8 *)(lVar6 + lVar8);
            plStack_30 = *(longlong **)(lVar6 + 8 + lVar8);
            if (plStack_30 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
              UNLOCK();
            }
            goto LAB_143f401be;
          }
          break;
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x10;
      } while ((longlong)iVar4 << 4 != lVar8);
    }
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
LAB_143f401be:
    if (local_28 == 0) {
      local_48 = 0;
      plStack_40 = (longlong *)0x0;
    }
    else {
      local_58 = local_28;
      local_50 = local_20;
      if (local_20 == (longlong *)0x0) {
        FUN_140b7090e(lVar5,&local_48,&local_58);
      }
      else {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
        FUN_140b7090e(lVar5,&local_48);
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
      }
    }
    FUN_148a98e82(lVar5,&local_48,&local_38);
    plVar3 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    plVar3 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_20 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f402d0 FUN_143f402d0 body=29 status=ok
// SIG undefined FUN_143f402d0(void)

undefined8 FUN_143f402d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f40302 FUN_143f40302 body=93 status=ok
// SIG undefined FUN_143f40302(void)

void FUN_143f40302(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4f1180;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143f40360 FUN_143f40360 body=93 status=ok
// SIG undefined FUN_143f40360(void)

void FUN_143f40360(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4f1180;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143f403be FUN_143f403be body=126 status=ok
// SIG undefined FUN_143f403be(void)

void FUN_143f403be(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f1180;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f4042d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f4043c FUN_143f4043c body=26 status=ok
// SIG undefined FUN_143f4043c(void)

undefined8 FUN_143f4043c(longlong param_1)

{
  FUN_143f39b00(*(undefined8 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x20));
  return 0;
}



// FUNCTION 143f40456 FUN_143f40456 body=26 status=ok
// SIG undefined FUN_143f40456(void)

undefined8 FUN_143f40456(longlong param_1)

{
  FUN_143f39b00(*(undefined8 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x20));
  return 1;
}



// FUNCTION 143f40470 FUN_143f40470 body=29 status=ok
// SIG undefined FUN_143f40470(void)

undefined8 FUN_143f40470(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f404a2 FUN_143f404a2 body=93 status=ok
// SIG undefined FUN_143f404a2(void)

void FUN_143f404a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f11f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f40500 FUN_143f40500 body=93 status=ok
// SIG undefined FUN_143f40500(void)

void FUN_143f40500(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f11f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f4055e FUN_143f4055e body=126 status=ok
// SIG undefined FUN_143f4055e(void)

void FUN_143f4055e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f11f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f405cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f405dc FUN_143f405dc body=65 status=ok
// SIG undefined FUN_143f405dc(void)

void FUN_143f405dc(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_143f40662(param_1 + 0x18,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4061e FUN_143f4061e body=67 status=ok
// SIG undefined FUN_143f4061e(void)

undefined8 FUN_143f4061e(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_143f40662(param_1 + 0x18,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f40662 FUN_143f40662 body=264 status=ok
// SIG undefined FUN_143f40662(void)

void FUN_143f40662(longlong *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined8 unaff_RBX;
  undefined1 auStack_88 [32];
  longlong local_68 [3];
  longlong local_50 [2];
  longlong local_40;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *param_2;
  param_1 = (longlong *)*param_1;
  uVar2 = *(uint *)(param_1[0xc] + 0x50);
  if (*(uint *)(param_1 + 0xb) != uVar2) {
    *(uint *)(param_1 + 0xb) = uVar2;
    (**(code **)(*param_1 + 0x88))(param_1);
    uVar2 = *(uint *)(param_1 + 0xb);
  }
  if (uVar2 < 3) {
    puVar3 = (undefined2 *)(&PTR_u_Public_14b4f3cc0)[uVar2];
  }
  else {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_140056680(local_68,puVar3);
  FUN_1414f3eb8(local_50,param_1 + 5,&DAT_14cb97700,local_68);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_1458291a6(param_1,local_50);
  if (param_1[0x24] != 0) {
    FUN_145c65b22();
  }
  (**(code **)(*param_1 + 0x38))
            (param_1,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4076c FUN_143f4076c body=29 status=ok
// SIG undefined FUN_143f4076c(void)

undefined8 FUN_143f4076c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f4079e FUN_143f4079e body=93 status=ok
// SIG undefined FUN_143f4079e(void)

void FUN_143f4079e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f1260;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f407fc FUN_143f407fc body=93 status=ok
// SIG undefined FUN_143f407fc(void)

void FUN_143f407fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f1260;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f4085a FUN_143f4085a body=126 status=ok
// SIG undefined FUN_143f4085a(void)

void FUN_143f4085a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f1260;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f408c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f408e2 FUN_143f408e2 body=20 status=ok
// SIG undefined FUN_143f408e2(void)

undefined1 FUN_143f408e2(longlong param_1)

{
  FUN_143f408f6(param_1 + 0x18);
  return 1;
}



// FUNCTION 143f408f6 FUN_143f408f6 body=203 status=ok
// SIG undefined FUN_143f408f6(void)

void FUN_143f408f6(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  uVar2 = *(undefined8 *)(lVar1 + 0x60);
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_149e06450;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_30[2] = lVar4;
  *local_30 = &PTR_FUN_14b4f0ca0;
  local_30[3] = lVar1;
  local_30[4] = FUN_145a3b5fe;
  FUN_1459564ca(uVar2,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f409c2 FUN_143f409c2 body=29 status=ok
// SIG undefined FUN_143f409c2(void)

undefined8 FUN_143f409c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f409f4 FUN_143f409f4 body=93 status=ok
// SIG undefined FUN_143f409f4(void)

void FUN_143f409f4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4f1350;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143f40a52 FUN_143f40a52 body=93 status=ok
// SIG undefined FUN_143f40a52(void)

void FUN_143f40a52(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4f1350;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143f40ab0 FUN_143f40ab0 body=126 status=ok
// SIG undefined FUN_143f40ab0(void)

void FUN_143f40ab0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f1350;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f40b1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f40b2e FUN_143f40b2e body=61 status=ok
// SIG undefined FUN_143f40b2e(void)

void FUN_143f40b2e(longlong param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined8 unaff_RBX;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  uVar1 = *(undefined1 *)(param_1 + 0x20);
  if (*(int *)((longlong)plVar2 + 0x54) != 0) {
    *(undefined4 *)((longlong)plVar2 + 0x54) = 0;
    (**(code **)(*plVar2 + 0x90))(plVar2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x000143f40b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x40))
            (plVar2,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  return;
}



// FUNCTION 143f40b6c FUN_143f40b6c body=60 status=ok
// SIG undefined FUN_143f40b6c(void)

undefined8 FUN_143f40b6c(longlong param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined8 unaff_RBX;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  uVar1 = *(undefined1 *)(param_1 + 0x20);
  if (*(int *)((longlong)plVar2 + 0x54) != 0) {
    *(undefined4 *)((longlong)plVar2 + 0x54) = 0;
    (**(code **)(*plVar2 + 0x90))(plVar2,0);
  }
  (**(code **)(*plVar2 + 0x40))
            (plVar2,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  return 1;
}



// FUNCTION 143f40ba8 FUN_143f40ba8 body=29 status=ok
// SIG undefined FUN_143f40ba8(void)

undefined8 FUN_143f40ba8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f40bda FUN_143f40bda body=93 status=ok
// SIG undefined FUN_143f40bda(void)

void FUN_143f40bda(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4f13c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143f40c38 FUN_143f40c38 body=93 status=ok
// SIG undefined FUN_143f40c38(void)

void FUN_143f40c38(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4f13c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143f40c96 FUN_143f40c96 body=126 status=ok
// SIG undefined FUN_143f40c96(void)

void FUN_143f40c96(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f13c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f40d05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f40d14 FUN_143f40d14 body=65 status=ok
// SIG undefined FUN_143f40d14(void)

void FUN_143f40d14(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_143f40d9a(param_1 + 0x18,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f40d56 FUN_143f40d56 body=67 status=ok
// SIG undefined FUN_143f40d56(void)

undefined8 FUN_143f40d56(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_143f40d9a(param_1 + 0x18,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f40d9a FUN_143f40d9a body=475 status=ok
// SIG undefined FUN_143f40d9a(void)

void FUN_143f40d9a(longlong *param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 unaff_RBX;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = *param_2;
  plVar4 = (longlong *)*param_1;
  FUN_1413f46f8(&local_58,(int)param_1[1]);
  plVar7 = local_50;
  if (local_58 == 0) {
    if ((longlong)(int)plVar4[0xf] != 0) {
      plVar7 = (longlong *)plVar4[0xe];
      plVar8 = plVar7 + (longlong)(int)plVar4[0xf] * 2;
      do {
        plVar5 = (longlong *)*plVar7;
        plVar6 = (longlong *)plVar7[1];
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        if (*(int *)((longlong)plVar5 + 0x14) == 0) {
          local_68 = *plVar5;
          plVar5 = (longlong *)plVar5[1];
          local_60 = plVar5;
          if (plVar5 == (longlong *)0x0) {
            FUN_145ce2ae6(local_68,&local_68);
          }
          else {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            FUN_145ce2ae6(local_68,&local_68);
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
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar6 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
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
        plVar7 = plVar7 + 2;
      } while (plVar7 != plVar8);
    }
  }
  else {
    local_68 = local_58;
    local_60 = local_50;
    if (local_50 == (longlong *)0x0) {
      FUN_145ffe406(plVar4,&local_68);
    }
    else {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
      FUN_145ffe406(plVar4);
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
    }
  }
  if (plVar4[0x24] != 0) {
    FUN_148aaee2a(plVar4[0x24],(int)param_1[1]);
  }
  (**(code **)(*plVar4 + 0x50))
            (plVar4,(int)param_1[1],CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar3) & 0xffffffff);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_50 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f40f76 FUN_143f40f76 body=29 status=ok
// SIG undefined FUN_143f40f76(void)

undefined8 FUN_143f40f76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f40fa8 FUN_143f40fa8 body=93 status=ok
// SIG undefined FUN_143f40fa8(void)

void FUN_143f40fa8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edb10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f1430;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143f41006 FUN_143f41006 body=93 status=ok
// SIG undefined FUN_143f41006(void)

void FUN_143f41006(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edb10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f1430;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143f41064 FUN_143f41064 body=126 status=ok
// SIG undefined FUN_143f41064(void)

void FUN_143f41064(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4edb10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f1430;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f410d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f410e2 FUN_143f410e2 body=65 status=ok
// SIG undefined FUN_143f410e2(void)

void FUN_143f410e2(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_143f41168(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f41124 FUN_143f41124 body=67 status=ok
// SIG undefined FUN_143f41124(void)

undefined8 FUN_143f41124(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_143f41168(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f41168 FUN_143f41168 body=322 status=ok
// SIG undefined FUN_143f41168(void)

void FUN_143f41168(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong local_50;
  longlong *local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = *param_2;
  uVar4 = *param_1;
  switch(uVar5) {
  case 0:
    FUN_1413f46f8(&local_30,*(undefined4 *)(param_1 + 1));
    if (local_30 != 0) {
      local_50 = local_30;
      local_48 = local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
      }
      local_58 = 0;
      FUN_141647a44(uVar4,local_40,&local_50,0);
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar2 = (int *)((longlong)local_38 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_38 + 0x10))(local_38);
          }
        }
      }
      plVar1 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_48 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
    uVar5 = 0;
    break;
  case 1:
  case 2:
    break;
  case 3:
    uVar5 = 4;
    break;
  case 4:
    uVar5 = 3;
    break;
  default:
    uVar5 = 0xe;
  }
  FUN_148a98090(uVar4,*(undefined4 *)(param_1 + 1),uVar5);
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f412ac FUN_143f412ac body=29 status=ok
// SIG undefined FUN_143f412ac(void)

undefined8 FUN_143f412ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f412de FUN_143f412de body=85 status=ok
// SIG undefined FUN_143f412de(void)

void FUN_143f412de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f18b0;
  return;
}



// FUNCTION 143f41334 FUN_143f41334 body=85 status=ok
// SIG undefined FUN_143f41334(void)

void FUN_143f41334(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f18b0;
  return;
}



// FUNCTION 143f4138a FUN_143f4138a body=118 status=ok
// SIG undefined FUN_143f4138a(void)

void FUN_143f4138a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f18b0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f413f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f41406 FUN_143f41406 body=29 status=ok
// SIG undefined FUN_143f41406(void)

undefined8 FUN_143f41406(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f41438 FUN_143f41438 body=93 status=ok
// SIG undefined FUN_143f41438(void)

void FUN_143f41438(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f1990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f1920;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f41496 FUN_143f41496 body=93 status=ok
// SIG undefined FUN_143f41496(void)

void FUN_143f41496(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f1990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f1920;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f414f4 FUN_143f414f4 body=126 status=ok
// SIG undefined FUN_143f414f4(void)

void FUN_143f414f4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f1990;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f1920;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f41563. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f41572 FUN_143f41572 body=65 status=ok
// SIG undefined FUN_143f41572(void)

void FUN_143f41572(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_143f415f8(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f415b4 FUN_143f415b4 body=67 status=ok
// SIG undefined FUN_143f415b4(void)

undefined8 FUN_143f415b4(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_143f415f8(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f415f8 FUN_143f415f8 body=506 status=ok
// SIG undefined FUN_143f415f8(void)

void FUN_143f415f8(longlong *param_1,int *param_2,longlong *param_3)

{
  code **ppcVar1;
  int *piVar2;
  code **ppcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  longlong lVar8;
  code **ppcVar9;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  code *local_a0;
  code **local_98;
  code *local_90;
  longlong local_88 [3];
  code *local_70;
  code **local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*param_2 == 0) && (lVar5 = param_3[1], (longlong)(int)lVar5 != 0)) {
    lVar4 = *param_3;
    local_a8 = *param_1 + 0xd0;
    lVar8 = 0;
    do {
      local_88[0] = 0;
      local_88[1] = 0;
      local_70 = FUN_143f00b4a;
      local_a0 = (code *)local_88;
      local_68 = &local_a0;
      bifrost::users::shiftId(*(undefined4 *)(lVar4 + lVar8),&local_70);
      FUN_1446f470e(&local_90,L"SHIFT",1);
      local_a0 = local_90;
      plVar6 = (longlong *)FUN_1401e3228(&local_a0);
      if (plVar6 == (longlong *)0x0) {
        ppcVar9 = (code **)0x0;
      }
      else {
        (**(code **)(*plVar6 + 0x80))(plVar6,&local_70);
        if (local_70 == (code *)0x0) {
          ppcVar9 = (code **)0x0;
          pcVar7 = (code *)0x0;
        }
        else {
          (**(code **)(*(longlong *)local_70 + 0x120))(local_70,&local_a0,local_88);
          pcVar7 = local_a0;
          ppcVar9 = local_98;
        }
        ppcVar3 = local_68;
        if (local_68 != (code **)0x0) {
          LOCK();
          ppcVar1 = local_68 + 1;
          *(int *)ppcVar1 = *(int *)ppcVar1 + -1;
          UNLOCK();
          if (*(int *)ppcVar1 == 0) {
            (**(code **)*ppcVar3)(ppcVar3);
            LOCK();
            piVar2 = (int *)((longlong)ppcVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*ppcVar3 + 0x10))(ppcVar3);
            }
          }
        }
        if (pcVar7 != (code *)0x0) {
          if (ppcVar9 != (code **)0x0) {
            LOCK();
            *(int *)(ppcVar9 + 1) = *(int *)(ppcVar9 + 1) + 1;
            UNLOCK();
          }
          local_70 = pcVar7;
          local_68 = ppcVar9;
          FUN_140b6d1a4(local_a8,&local_a0,&local_70,0);
          ppcVar3 = local_68;
          if (local_68 != (code **)0x0) {
            LOCK();
            ppcVar1 = local_68 + 1;
            *(int *)ppcVar1 = *(int *)ppcVar1 + -1;
            UNLOCK();
            if (*(int *)ppcVar1 == 0) {
              (**(code **)*local_68)(local_68);
              LOCK();
              piVar2 = (int *)((longlong)ppcVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*ppcVar3 + 0x10))(ppcVar3);
              }
            }
          }
        }
      }
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
      if (ppcVar9 != (code **)0x0) {
        LOCK();
        ppcVar3 = ppcVar9 + 1;
        *(int *)ppcVar3 = *(int *)ppcVar3 + -1;
        UNLOCK();
        if (*(int *)ppcVar3 == 0) {
          (**(code **)*ppcVar9)(ppcVar9);
          LOCK();
          piVar2 = (int *)((longlong)ppcVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*ppcVar9 + 0x10))(ppcVar9);
          }
        }
      }
      lVar8 = lVar8 + 4;
    } while ((longlong)(int)lVar5 * 4 != lVar8);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f417f4 FUN_143f417f4 body=29 status=ok
// SIG undefined FUN_143f417f4(void)

undefined8 FUN_143f417f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f41826 FUN_143f41826 body=93 status=ok
// SIG undefined FUN_143f41826(void)

void FUN_143f41826(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4f1b10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143f41884 FUN_143f41884 body=93 status=ok
// SIG undefined FUN_143f41884(void)

void FUN_143f41884(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4f1b10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143f418e2 FUN_143f418e2 body=126 status=ok
// SIG undefined FUN_143f418e2(void)

void FUN_143f418e2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f1b10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f41951. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f41986 FUN_143f41986 body=43 status=ok
// SIG undefined FUN_143f41986(void)

undefined8 FUN_143f41986(longlong param_1,char param_2)

{
  if (param_2 != '\0') {
    if (*(int *)(param_1 + 0x20) != *(int *)((*(longlong **)(param_1 + 0x18))[0xc] + 0x58)) {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x98))();
    }
  }
  return 1;
}



// FUNCTION 143f419b2 FUN_143f419b2 body=29 status=ok
// SIG undefined FUN_143f419b2(void)

undefined8 FUN_143f419b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f419e4 FUN_143f419e4 body=93 status=ok
// SIG undefined FUN_143f419e4(void)

void FUN_143f419e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f1b80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f41a42 FUN_143f41a42 body=93 status=ok
// SIG undefined FUN_143f41a42(void)

void FUN_143f41a42(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f1b80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f41aa0 FUN_143f41aa0 body=126 status=ok
// SIG undefined FUN_143f41aa0(void)

void FUN_143f41aa0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f1b80;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f41b0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f41b1e FUN_143f41b1e body=20 status=ok
// SIG undefined FUN_143f41b1e(void)

undefined8 FUN_143f41b1e(longlong param_1)

{
  FUN_143f3adf2(*(undefined8 *)(param_1 + 0x18));
  return 0;
}



// FUNCTION 143f41b32 FUN_143f41b32 body=20 status=ok
// SIG undefined FUN_143f41b32(void)

undefined1 FUN_143f41b32(longlong param_1)

{
  FUN_143f3adf2(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143f41b46 FUN_143f41b46 body=111 status=ok
// SIG undefined FUN_143f41b46(void)

undefined8 * FUN_143f41b46(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b4f1bf0;
  plVar1 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f41b97;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143f41b97:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f41bca FUN_143f41bca body=123 status=ok
// SIG undefined FUN_143f41bca(void)

void FUN_143f41bca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f1bf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_14114e6dc(puVar1 + 4,param_1 + 0x20);
  return;
}



// FUNCTION 143f41c46 FUN_143f41c46 body=123 status=ok
// SIG undefined FUN_143f41c46(void)

void FUN_143f41c46(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f1bf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_14114e6dc(puVar1 + 4,param_1 + 0x20);
  return;
}



// FUNCTION 143f41cc2 FUN_143f41cc2 body=157 status=ok
// SIG undefined FUN_143f41cc2(void)

void FUN_143f41cc2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f1bf0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_14114e6dc(&p_Var1->EntryCount,param_1 + 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f41d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f41d60 FUN_143f41d60 body=70 status=ok
// SIG undefined FUN_143f41d60(void)

void FUN_143f41d60(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  if ((char)param_2 == '\0') {
    FUN_143f39a38(*(undefined8 *)(param_1 + 0x18));
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 == (longlong *)0x0 || *(int *)(param_1 + 0x28) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143f41da3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
  return;
}



// FUNCTION 143f41da6 FUN_143f41da6 body=62 status=ok
// SIG undefined FUN_143f41da6(void)

undefined8 FUN_143f41da6(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 in_RAX;
  undefined7 uVar2;
  undefined7 extraout_var;
  
  if ((char)param_2 == '\0') {
    in_RAX = FUN_143f39a38(*(undefined8 *)(param_1 + 0x18));
  }
  uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x28) != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
    uVar2 = extraout_var;
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 143f41e20 FUN_143f41e20 body=29 status=ok
// SIG undefined FUN_143f41e20(void)

undefined8 FUN_143f41e20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f41e3e FUN_143f41e3e body=111 status=ok
// SIG undefined FUN_143f41e3e(void)

undefined8 * FUN_143f41e3e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b4f1c80;
  plVar1 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f41e8f;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143f41e8f:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f41ec2 FUN_143f41ec2 body=123 status=ok
// SIG undefined FUN_143f41ec2(void)

void FUN_143f41ec2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f1c80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_14114e6dc(puVar1 + 4,param_1 + 0x20);
  return;
}



// FUNCTION 143f41f3e FUN_143f41f3e body=123 status=ok
// SIG undefined FUN_143f41f3e(void)

void FUN_143f41f3e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f1c80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_14114e6dc(puVar1 + 4,param_1 + 0x20);
  return;
}



// FUNCTION 143f41fba FUN_143f41fba body=157 status=ok
// SIG undefined FUN_143f41fba(void)

void FUN_143f41fba(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f1c80;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_14114e6dc(&p_Var1->EntryCount,param_1 + 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f42048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f42058 FUN_143f42058 body=72 status=ok
// SIG undefined FUN_143f42058(void)

void FUN_143f42058(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  if ((char)param_2 == '\0') {
    FUN_148a99ab0(*(undefined8 *)(param_1 + 0x18));
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 == (longlong *)0x0 || *(int *)(param_1 + 0x28) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143f42092. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
  return;
}



// FUNCTION 143f420a0 FUN_143f420a0 body=64 status=ok
// SIG undefined FUN_143f420a0(void)

undefined8 FUN_143f420a0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 in_RAX;
  undefined7 uVar2;
  undefined7 extraout_var;
  
  if ((char)param_2 == '\0') {
    in_RAX = FUN_148a99ab0(*(undefined8 *)(param_1 + 0x18));
  }
  uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x28) != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
    uVar2 = extraout_var;
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 143f42112 FUN_143f42112 body=29 status=ok
// SIG undefined FUN_143f42112(void)

undefined8 FUN_143f42112(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f42176 FUN_143f42176 body=29 status=ok
// SIG undefined FUN_143f42176(void)

undefined8 FUN_143f42176(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f42194 FUN_143f42194 body=29 status=ok
// SIG undefined FUN_143f42194(void)

undefined8 FUN_143f42194(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f421c6 FUN_143f421c6 body=101 status=ok
// SIG undefined FUN_143f421c6(void)

void FUN_143f421c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f1da0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f1d30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143f4222c FUN_143f4222c body=101 status=ok
// SIG undefined FUN_143f4222c(void)

void FUN_143f4222c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f1da0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f1d30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143f42292 FUN_143f42292 body=134 status=ok
// SIG undefined FUN_143f42292(void)

void FUN_143f42292(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f1da0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f1d30;
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
                    /* WARNING: Could not recover jumptable at 0x000143f42309. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f42318 FUN_143f42318 body=65 status=ok
// SIG undefined FUN_143f42318(void)

void FUN_143f42318(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_143f4239e(param_1 + 0x18,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4235a FUN_143f4235a body=67 status=ok
// SIG undefined FUN_143f4235a(void)

undefined8 FUN_143f4235a(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_143f4239e(param_1 + 0x18,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4239e FUN_143f4239e body=2274 status=ok
// SIG undefined FUN_143f4239e(void)

void FUN_143f4239e(longlong *param_1,char *param_2,longlong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  ushort uVar7;
  ulonglong uVar8;
  bool bVar9;
  longlong lVar10;
  ushort uVar11;
  ulonglong uVar12;
  int *piVar13;
  int *piVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_1e8 [40];
  longlong *local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  int local_188 [2];
  longlong local_180;
  int local_178;
  longlong local_170;
  int local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  int local_148;
  longlong local_140;
  int local_138;
  longlong local_130;
  int local_128;
  undefined8 local_120;
  int local_118;
  longlong local_110;
  int local_108;
  longlong local_100;
  int local_f8;
  longlong local_f0;
  int local_e8;
  char local_ae;
  undefined8 local_a8;
  int local_a0;
  undefined8 local_98;
  int local_90;
  longlong local_88;
  int local_80;
  longlong local_78;
  int local_70;
  char local_68;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  cVar5 = *param_2;
  lVar4 = *param_1;
  *(undefined1 *)(lVar4 + 0x18) = 0;
  if ((((*(int *)((longlong)param_1 + 0xc) != 0) &&
       (uVar2 = *(uint *)(param_1 + 1), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) &&
     (((lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar10 != 0 &&
       (*(int *)(lVar10 + 0x10) == *(int *)((longlong)param_1 + 0xc))) &&
      ((*(uint *)(lVar10 + 8) & 0x10200000) == 0)))) {
    FUN_146583a54(lVar4,(int)param_1[2]);
  }
  if (cVar5 != '\0') goto LAB_143f42c4b;
  iVar3 = *(int *)(lVar4 + 0x30);
  if (iVar3 == (int)param_3[1]) {
    if (iVar3 == 0) goto LAB_143f42c4b;
    piVar13 = (int *)*param_3;
    piVar14 = piVar13 + (longlong)iVar3 * 0x4e;
    bVar9 = false;
    local_1c0 = param_3;
    do {
      FUN_1418c091c(lVar4,&local_1b8);
      if (local_50 == 1) {
        if (local_188[0] == *piVar13) {
          if (local_178 == piVar13[4]) {
            if (1 < local_178) {
              lVar10 = 0;
              while( true ) {
                uVar7 = *(ushort *)(local_180 + lVar10);
                uVar8 = (ulonglong)uVar7;
                uVar11 = *(ushort *)(*(longlong *)(piVar13 + 2) + lVar10);
                if (uVar7 != uVar11) break;
                if (uVar7 == 0) goto LAB_143f424f8;
LAB_143f424ca:
                lVar10 = lVar10 + 2;
              }
              if ((uVar11 | uVar7) < 0x80) {
                uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
                uVar12 = (ulonglong)uVar11;
                uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
                if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar12]) goto LAB_143f424ca;
              }
              if (uVar7 != uVar11) goto LAB_143f42ad0;
            }
          }
          else if (piVar13[4] + local_178 != 1) goto LAB_143f42ad0;
LAB_143f424f8:
          if (local_168 == piVar13[8]) {
            if (1 < local_168) {
              lVar10 = 0;
              while( true ) {
                uVar7 = *(ushort *)(local_170 + lVar10);
                uVar8 = (ulonglong)uVar7;
                uVar11 = *(ushort *)(*(longlong *)(piVar13 + 6) + lVar10);
                if (uVar7 != uVar11) break;
                if (uVar7 == 0) goto LAB_143f42560;
LAB_143f42532:
                lVar10 = lVar10 + 2;
              }
              if ((uVar11 | uVar7) < 0x80) {
                uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
                uVar12 = (ulonglong)uVar11;
                uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
                if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar12]) goto LAB_143f42532;
              }
              if (uVar7 != uVar11) goto LAB_143f42ad0;
            }
          }
          else if (piVar13[8] + local_168 != 1) goto LAB_143f42ad0;
LAB_143f42560:
          if ((local_160 != *(longlong *)(piVar13 + 10)) || (local_158 != (char)piVar13[0xc]))
          goto LAB_143f42ad0;
          if (local_148 == piVar13[0x10]) {
            if (1 < local_148) {
              lVar10 = 0;
              while( true ) {
                uVar7 = *(ushort *)(local_150 + lVar10);
                uVar8 = (ulonglong)uVar7;
                uVar11 = *(ushort *)(*(longlong *)(piVar13 + 0xe) + lVar10);
                if (uVar7 != uVar11) break;
                if (uVar7 == 0) goto LAB_143f425f0;
LAB_143f425c2:
                lVar10 = lVar10 + 2;
              }
              if ((uVar11 | uVar7) < 0x80) {
                uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
                uVar12 = (ulonglong)uVar11;
                uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
                if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar12]) goto LAB_143f425c2;
              }
              if (uVar7 != uVar11) goto LAB_143f42ad0;
            }
          }
          else if (piVar13[0x10] + local_148 != 1) goto LAB_143f42ad0;
LAB_143f425f0:
          if (local_138 == piVar13[0x14]) {
            if (1 < local_138) {
              lVar10 = 0;
              while( true ) {
                uVar7 = *(ushort *)(local_140 + lVar10);
                uVar8 = (ulonglong)uVar7;
                uVar11 = *(ushort *)(*(longlong *)(piVar13 + 0x12) + lVar10);
                if (uVar7 != uVar11) break;
                if (uVar7 == 0) goto LAB_143f4260d;
LAB_143f42a54:
                lVar10 = lVar10 + 2;
              }
              if ((uVar11 | uVar7) < 0x80) {
                uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
                uVar12 = (ulonglong)uVar11;
                uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
                if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar12]) goto LAB_143f42a54;
              }
              if (uVar7 != uVar11) goto LAB_143f42ad0;
            }
          }
          else if (piVar13[0x14] + local_138 != 1) goto LAB_143f42ad0;
LAB_143f4260d:
          if (local_128 == piVar13[0x18]) {
            if (1 < local_128) {
              lVar10 = 0;
              while( true ) {
                uVar7 = *(ushort *)(local_130 + lVar10);
                uVar8 = (ulonglong)uVar7;
                uVar11 = *(ushort *)(*(longlong *)(piVar13 + 0x16) + lVar10);
                if (uVar7 != uVar11) break;
                if (uVar7 == 0) goto LAB_143f42678;
LAB_143f4264a:
                lVar10 = lVar10 + 2;
              }
              if ((uVar11 | uVar7) < 0x80) {
                uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
                uVar12 = (ulonglong)uVar11;
                uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
                if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar12]) goto LAB_143f4264a;
              }
              if (uVar7 != uVar11) goto LAB_143f42ad0;
            }
          }
          else if (piVar13[0x18] + local_128 != 1) goto LAB_143f42ad0;
LAB_143f42678:
          if ((local_118 != piVar13[0x1c]) ||
             (cVar5 = FUN_1405d12b4(local_120,*(undefined8 *)(piVar13 + 0x1a)), cVar5 == '\0'))
          goto LAB_143f42ad0;
          if (local_108 == piVar13[0x20]) {
            if (1 < local_108) {
              lVar10 = 0;
              while( true ) {
                uVar7 = *(ushort *)(local_110 + lVar10);
                uVar8 = (ulonglong)uVar7;
                uVar11 = *(ushort *)(*(longlong *)(piVar13 + 0x1e) + lVar10);
                if (uVar7 != uVar11) break;
                if (uVar7 == 0) goto LAB_143f42713;
LAB_143f426e5:
                lVar10 = lVar10 + 2;
              }
              if ((uVar11 | uVar7) < 0x80) {
                uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
                uVar12 = (ulonglong)uVar11;
                uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
                if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar12]) goto LAB_143f426e5;
              }
              if (uVar7 != uVar11) goto LAB_143f42ad0;
            }
          }
          else if (piVar13[0x20] + local_108 != 1) goto LAB_143f42ad0;
LAB_143f42713:
          if (local_f8 == piVar13[0x24]) {
            if (1 < local_f8) {
              lVar10 = 0;
              while( true ) {
                uVar7 = *(ushort *)(local_100 + lVar10);
                uVar8 = (ulonglong)uVar7;
                uVar11 = *(ushort *)(*(longlong *)(piVar13 + 0x22) + lVar10);
                if (uVar7 != uVar11) break;
                if (uVar7 == 0) goto LAB_143f42784;
LAB_143f42756:
                lVar10 = lVar10 + 2;
              }
              if ((uVar11 | uVar7) < 0x80) {
                uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
                uVar12 = (ulonglong)uVar11;
                uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
                if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar12]) goto LAB_143f42756;
              }
              if (uVar7 != uVar11) goto LAB_143f42ad0;
            }
          }
          else if (piVar13[0x24] + local_f8 != 1) goto LAB_143f42ad0;
LAB_143f42784:
          if (local_e8 == piVar13[0x28]) {
            if (1 < local_e8) {
              lVar10 = 0;
              while( true ) {
                uVar7 = *(ushort *)(local_f0 + lVar10);
                uVar8 = (ulonglong)uVar7;
                uVar11 = *(ushort *)(*(longlong *)(piVar13 + 0x26) + lVar10);
                if (uVar7 != uVar11) break;
                if (uVar7 == 0) goto LAB_143f427f5;
LAB_143f427c7:
                lVar10 = lVar10 + 2;
              }
              if ((uVar11 | uVar7) < 0x80) {
                uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
                uVar12 = (ulonglong)uVar11;
                uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
                if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar12]) goto LAB_143f427c7;
              }
              if (uVar7 != uVar11) goto LAB_143f42ad0;
            }
          }
          else if (piVar13[0x28] + local_e8 != 1) goto LAB_143f42ad0;
LAB_143f427f5:
          if ((((local_ae != *(char *)((longlong)piVar13 + 0xda)) || (local_a0 != piVar13[0x3a])) ||
              (cVar5 = FUN_1405d12b4(local_a8,*(undefined8 *)(piVar13 + 0x38)), cVar5 == '\0')) ||
             ((local_90 != piVar13[0x3e] ||
              (cVar5 = FUN_14144d6e5(local_98,*(undefined8 *)(piVar13 + 0x3c)), cVar5 == '\0'))))
          goto LAB_143f42ad0;
          if (local_80 == piVar13[0x42]) {
            if (1 < local_80) {
              lVar10 = 0;
              while( true ) {
                uVar7 = *(ushort *)(local_88 + lVar10);
                uVar8 = (ulonglong)uVar7;
                uVar11 = *(ushort *)(*(longlong *)(piVar13 + 0x40) + lVar10);
                if (uVar7 != uVar11) break;
                if (uVar7 == 0) goto LAB_143f428e1;
LAB_143f428b3:
                lVar10 = lVar10 + 2;
              }
              if ((uVar11 | uVar7) < 0x80) {
                uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
                uVar12 = (ulonglong)uVar11;
                uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
                if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar12]) goto LAB_143f428b3;
              }
              if (uVar7 != uVar11) goto LAB_143f42ad0;
            }
          }
          else if (piVar13[0x42] + local_80 != 1) goto LAB_143f42ad0;
LAB_143f428e1:
          if (local_70 == piVar13[0x46]) {
            if (1 < local_70) {
              lVar10 = 0;
              while( true ) {
                uVar7 = *(ushort *)(local_78 + lVar10);
                uVar8 = (ulonglong)uVar7;
                uVar11 = *(ushort *)(*(longlong *)(piVar13 + 0x44) + lVar10);
                if (uVar7 != uVar11) break;
                if (uVar7 == 0) goto LAB_143f42952;
LAB_143f42924:
                lVar10 = lVar10 + 2;
              }
              if ((uVar11 | uVar7) < 0x80) {
                uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
                uVar12 = (ulonglong)uVar11;
                uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
                if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar12]) goto LAB_143f42924;
              }
              if (uVar7 != uVar11) goto LAB_143f42ad0;
            }
          }
          else if (piVar13[0x46] + local_70 != 1) goto LAB_143f42ad0;
LAB_143f42952:
          bVar16 = local_68 == (char)piVar13[0x48];
        }
        else {
LAB_143f42ad0:
          bVar16 = false;
        }
        bVar9 = (bool)(bVar9 | bVar16 ^ 1U);
      }
      else {
        bVar9 = true;
        bVar16 = false;
      }
      if ((local_50 & 1) != 0) {
        FUN_141175be2(local_188);
        FUN_141175b88(local_198,local_190 & 0xffffffff);
        if (local_198 != 0) {
          FUN_1400020a8();
        }
        if (local_1a8 != 0) {
          FUN_1400020a8();
        }
        FUN_141175b4a(local_1b8,local_1b0 & 0xffffffff);
        if (local_1b8 != 0) {
          FUN_1400020a8();
        }
      }
      piVar13 = piVar13 + 0x4e;
    } while ((bool)(bVar16 & piVar13 != piVar14));
    if (!bVar9) goto LAB_143f42c4b;
    iVar3 = *(int *)(lVar4 + 0x30);
    param_3 = local_1c0;
  }
  plVar1 = (longlong *)(lVar4 + 0x28);
  FUN_141175adb(*(undefined8 *)(lVar4 + 0x28),iVar3);
  *(undefined4 *)(lVar4 + 0x30) = 0;
  if (*(int *)(lVar4 + 0x34) != 0) {
    FUN_148aa0518(plVar1);
  }
  if ((longlong)(int)param_3[1] != 0) {
    lVar10 = *param_3;
    lVar15 = (longlong)(int)param_3[1] * 0x138;
    do {
      FUN_148a99cba(&local_1b8,lVar10);
      iVar3 = *(int *)(lVar4 + 0x30);
      *(uint *)(lVar4 + 0x30) = iVar3 + 1U;
      if (*(uint *)(lVar4 + 0x34) < iVar3 + 1U) {
        FUN_14581ec00(plVar1,iVar3);
      }
      plVar6 = (longlong *)((longlong)iVar3 * 0x168 + *plVar1);
      *plVar6 = 0;
      *plVar6 = local_1b8;
      local_1b8 = 0;
      *(undefined4 *)(plVar6 + 1) = (undefined4)local_1b0;
      *(undefined4 *)((longlong)plVar6 + 0xc) = local_1b0._4_4_;
      local_1b0 = 0;
      plVar6[2] = 0;
      plVar6[2] = local_1a8;
      local_1a8 = 0;
      *(undefined4 *)(plVar6 + 3) = (undefined4)local_1a0;
      *(undefined4 *)((longlong)plVar6 + 0x1c) = local_1a0._4_4_;
      local_1a0 = 0;
      plVar6[4] = 0;
      plVar6[4] = local_198;
      local_198 = 0;
      *(undefined4 *)(plVar6 + 5) = (undefined4)local_190;
      *(undefined4 *)((longlong)plVar6 + 0x2c) = local_190._4_4_;
      local_190 = 0;
      FUN_1412efe78(plVar6 + 6,local_188);
      FUN_141175be2(local_188);
      FUN_141175b88(local_198,local_190 & 0xffffffff);
      if (local_198 != 0) {
        FUN_1400020a8();
      }
      if (local_1a8 != 0) {
        FUN_1400020a8();
      }
      FUN_141175b4a(local_1b8,local_1b0 & 0xffffffff);
      if (local_1b8 != 0) {
        FUN_1400020a8();
      }
      lVar10 = lVar10 + 0x138;
      lVar15 = lVar15 + -0x138;
    } while (lVar15 != 0);
  }
  FUN_1447f69b6(lVar4);
LAB_143f42c4b:
  FUN_145947db0(lVar4);
  if ((local_48 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f42c82 FUN_143f42c82 body=363 status=ok
// SIG undefined FUN_143f42c82(void)

void FUN_143f42c82(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143f42d18;
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
LAB_143f42d18:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 143f42dee FUN_143f42dee body=359 status=ok
// SIG undefined FUN_143f42dee(void)

void FUN_143f42dee(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar5 = 4;
    if (4 < uVar3) {
      uVar5 = uVar3;
    }
    lVar6 = (longlong)(int)uVar5;
  }
  else {
    lVar6 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  uVar7 = lVar6 * 0x38;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = uVar7 + 0xf;
      if (uVar7 < 0x7ff1) {
        uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
      }
      else {
        if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
          uVar9 = 0x32;
          if (0x32 < bVar2) {
            uVar9 = (ulonglong)bVar2;
          }
          uVar11 = 0x32 - (ulonglong)bVar2;
          do {
            uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar11 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_143f42e80;
            lVar6 = uVar9 + 1 + uVar11;
            uVar11 = uVar11 - 1;
          } while (lVar6 != 0x33);
        }
        uVar7 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar7 = (ulonglong)DAT_14c841df8;
        }
        uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
      }
    }
    else {
      uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,8);
    }
  }
LAB_143f42e80:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7 >> 3;
  iVar8 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
  iVar10 = 0x7fffffff;
  if ((int)uVar3 <= iVar8) {
    iVar10 = iVar8;
  }
  *(int *)(param_1 + 0xc) = iVar10;
  FUN_1446f8d3c(param_1,param_2,iVar10,0x38,8);
  return;
}



// FUNCTION 143f42f5a FUN_143f42f5a body=620 status=ok
// SIG undefined FUN_143f42f5a(void)

undefined8 FUN_143f42f5a(longlong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  longlong *local_80;
  undefined4 local_78 [2];
  longlong local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_1 = (longlong *)*param_1;
  local_80 = param_1 + 0x26;
  uVar3 = *(uint *)(param_1 + 0x2b);
  if (uVar3 == 0) {
    uVar16 = 1;
    uVar11 = 0;
    iVar14 = 0;
    uVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[0x2a];
    if ((uint *)param_1[0x2a] == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0x28);
    }
    uVar6 = *puVar7;
    if (uVar6 == 0) {
      iVar14 = uVar3 + 0x1e;
      if (-1 < (int)(uVar3 - 1)) {
        iVar14 = uVar3 - 1;
      }
      uVar11 = 0;
      uVar16 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar16 = uVar11;
      }
      iVar14 = 0;
      do {
        if (uVar16 == uVar11) goto LAB_143f43021;
        iVar14 = iVar14 + 0x20;
        uVar6 = puVar7[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar11 = 0;
      iVar14 = 0;
    }
    uVar16 = (ulonglong)(-uVar6 & uVar6);
    uVar2 = uVar16 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar6 = (iVar14 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if ((int)uVar3 <= (int)uVar6) {
      uVar6 = uVar3;
    }
  }
  if (uVar6 != uVar3) {
    uVar15 = 0xffffffff;
    local_88 = (ulonglong)uVar3;
    do {
      uVar4 = *(undefined4 *)(param_1[0x26] + (longlong)(int)uVar6 * 0xc);
      local_70 = 0;
      uStack_68 = 0;
      local_78[0] = uVar4;
      FUN_1411642e0(param_1,uVar4);
      if (0 < (int)uStack_68) {
        (**(code **)(*param_1 + 0x18))(param_1,uVar4,local_78);
      }
      FUN_14116373e(param_1,local_78);
      FUN_141164df8(local_70,uStack_68 & 0xffffffff);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      uVar15 = uVar15 & ~(uint)uVar16;
      puVar7 = (uint *)param_1[0x2a];
      if ((uint *)param_1[0x2a] == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x28);
      }
      uVar3 = *(uint *)(param_1 + 0x2b);
      iVar10 = (int)uVar11;
      lVar12 = (longlong)iVar10;
      uVar6 = puVar7[lVar12] & uVar15;
      if (uVar6 == 0) {
        iVar8 = uVar3 + 0x1e;
        if (-1 < (int)(uVar3 - 1)) {
          iVar8 = uVar3 - 1;
        }
        iVar8 = iVar8 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar10) {
          iVar9 = iVar10;
        }
        if (iVar10 < iVar8) {
          lVar13 = 0;
          do {
            uVar6 = puVar7[lVar12 + lVar13 + 1];
            if (uVar6 != 0) {
              uVar11 = (ulonglong)(iVar10 + (int)lVar13 + 1);
              uVar15 = 0xffffffff;
              goto LAB_143f43176;
            }
            iVar14 = iVar14 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar9 - lVar12 != lVar13);
          uVar15 = 0xffffffff;
          iVar10 = iVar9;
        }
        uVar11 = (ulonglong)(iVar10 + 1);
        uVar6 = uVar3;
      }
      else {
LAB_143f43176:
        uVar16 = (ulonglong)(-uVar6 & uVar6);
        uVar2 = uVar16 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        uVar6 = (iVar14 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if ((int)uVar3 <= (int)uVar6) {
          uVar6 = uVar3;
        }
      }
    } while (uVar6 != (uint)local_88);
  }
LAB_143f43021:
  FUN_1402226aa(local_80);
  plVar5 = (longlong *)param_1[0x31];
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 143f431d2 FUN_143f431d2 body=12 status=ok
// SIG undefined FUN_143f431d2(void)

void FUN_143f431d2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143f431db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143f431de FUN_143f431de body=29 status=ok
// SIG undefined FUN_143f431de(void)

undefined8 FUN_143f431de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f43218 FUN_143f43218 body=301 status=ok
// SIG undefined FUN_143f43218(void)

void FUN_143f43218(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (1 < *(int *)(param_1[1] + 8)) {
    FUN_1400b22c2(local_30,"locale");
    FUN_1401e7dd2(param_2,local_30);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1401e7c72(param_2,param_1[1]);
  }
  FUN_1400b22c2(local_30,"qos_server_location");
  FUN_1401e7dd2(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1401e7c72(param_2,*param_1 + 0x10);
  FUN_1400b22c2(local_30,"qos_server_ping");
  FUN_1401e7dd2(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vInt((rowBuilder *)*param_2,*(int *)(*param_1 + 0x24));
  FUN_1400b22c2(local_30,"qos_server_loss");
  FUN_1401e7dd2(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vInt((rowBuilder *)*param_2,*(int *)(*param_1 + 0x28));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f43346 FUN_143f43346 body=635 status=ok
// SIG undefined FUN_143f43346(void)

void FUN_143f43346(longlong *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_c8 [32];
  uint local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 *local_90;
  code *local_88 [2];
  longlong local_78;
  undefined **local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar8 = (longlong *)param_1[1];
  if (plVar8 == (longlong *)0x0) {
    local_60 = *param_1;
    bVar10 = true;
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    do {
      bVar10 = iVar5 == 0;
      if (bVar10) {
        plVar8 = (longlong *)0x0;
        goto LAB_143f43442;
      }
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
    lVar6 = *param_1;
    if (lVar6 != 0) {
      if ((int)param_1[4] == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      else {
        puVar9 = (undefined2 *)param_1[3];
      }
      local_98 = 0;
      local_a0 = 0;
      local_a8 = local_a8 & 0xffff0000;
      (**(code **)(*(longlong *)param_1[2] + 0x40))((longlong *)param_1[2],local_88,puVar9,0);
      *(int *)(lVar6 + 0x28) = (int)local_58;
      if ((int)local_58 == 0) {
        if (local_48 < 1) {
          *(undefined4 *)(lVar6 + 0x28) = 0x33;
        }
        else {
          uVar2 = *(undefined8 *)(local_50 + 0x18);
          plVar7 = *(longlong **)(local_50 + 0x20);
          if (plVar7 == (longlong *)0x0) {
            *(undefined8 *)(lVar6 + 0x18) = uVar2;
            plVar7 = *(longlong **)(lVar6 + 0x20);
            if (plVar7 != (longlong *)0x0) {
              *(undefined8 *)(lVar6 + 0x20) = 0;
LAB_143f43568:
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
                  lVar6 = *plVar7;
LAB_143f435b0:
                  (**(code **)(lVar6 + 0x10))(plVar7);
                }
              }
            }
          }
          else {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
            *(undefined8 *)(lVar6 + 0x18) = uVar2;
            plVar3 = *(longlong **)(lVar6 + 0x20);
            if (plVar7 == plVar3) {
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
                  lVar6 = *plVar7;
                  goto LAB_143f435b0;
                }
              }
            }
            else {
              *(longlong **)(lVar6 + 0x20) = plVar7;
              plVar7 = plVar3;
              if (plVar3 != (longlong *)0x0) goto LAB_143f43568;
            }
          }
        }
      }
      FUN_14135de18(local_50,local_48);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      if (local_68 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_88[0] != (code *)0x0) {
        FUN_1400020a8();
      }
    }
LAB_143f43442:
    local_60 = *param_1;
    local_58 = param_1[1];
    if (local_58 != 0) {
      LOCK();
      *(int *)(local_58 + 0xc) = *(int *)(local_58 + 0xc) + 1;
      UNLOCK();
      goto LAB_143f43456;
    }
  }
  local_58 = 0;
LAB_143f43456:
  local_78 = 0;
  local_68 = &PTR_LAB_14b4f2330;
  local_88[0] = FUN_143f43638;
  local_a8 = 1;
  FUN_14014aede(&local_90,local_88,&PTR_LAB_14b4f2330,0);
  if (local_90 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_90 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_90)(local_90,1);
    }
  }
  if (!bVar10) {
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f435cc FUN_143f435cc body=29 status=ok
// SIG undefined FUN_143f435cc(void)

void FUN_143f435cc(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143f435ea FUN_143f435ea body=78 status=ok
// SIG undefined FUN_143f435ea(void)

undefined8 * FUN_143f435ea(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b4f2310;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 143f43638 FUN_143f43638 body=85 status=ok
// SIG undefined FUN_143f43638(void)

void FUN_143f43638(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    if (*param_1 != 0) {
      *(undefined1 *)(*param_1 + 0x2c) = 1;
    }
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
                    /* WARNING: Could not recover jumptable at 0x000143f43682. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143f436a4 FUN_143f436a4 body=64 status=ok
// SIG undefined FUN_143f436a4(void)

undefined8 * FUN_143f436a4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b4f2330;
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



// FUNCTION 143f436e4 FUN_143f436e4 body=29 status=ok
// SIG undefined FUN_143f436e4(void)

undefined8 FUN_143f436e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f43716 FUN_143f43716 body=93 status=ok
// SIG undefined FUN_143f43716(void)

void FUN_143f43716(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f2390;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f43774 FUN_143f43774 body=93 status=ok
// SIG undefined FUN_143f43774(void)

void FUN_143f43774(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f2390;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f437d2 FUN_143f437d2 body=126 status=ok
// SIG undefined FUN_143f437d2(void)

void FUN_143f437d2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f2390;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f43841. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f43850 FUN_143f43850 body=65 status=ok
// SIG undefined FUN_143f43850(void)

void FUN_143f43850(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_143f438d6(param_1 + 0x18,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f43892 FUN_143f43892 body=67 status=ok
// SIG undefined FUN_143f43892(void)

undefined8 FUN_143f43892(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_143f438d6(param_1 + 0x18,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f438d6 FUN_143f438d6 body=528 status=ok
// SIG undefined FUN_143f438d6(void)

/* WARNING: Removing unreachable block (ram,0x000143f43a99) */
/* WARNING: Removing unreachable block (ram,0x000143f43aa8) */

void FUN_143f438d6(longlong *param_1,byte *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  void *_Src;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_c8 [32];
  void *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80 [32];
  longlong local_60;
  int local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = *param_1;
  *(uint *)(lVar4 + 0x18) = *param_2 ^ 3;
  local_50 = '\0';
  if ((0 < *(int *)(*(longlong *)(lVar4 + 0x30) + 0x30)) &&
     (*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + 0x28) != local_80)) {
    FUN_145c7bf94(local_80);
    local_50 = '\x01';
    plVar1 = (longlong *)(lVar4 + 0x20);
    FUN_145844f89(*(undefined8 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x28));
    *(undefined4 *)(lVar4 + 0x28) = 0;
    if (*(int *)(lVar4 + 0x2c) != 0) {
      FUN_148aa152a(plVar1);
    }
    if ((longlong)local_58 != 0) {
      lVar10 = (longlong)local_58 << 6;
      puVar9 = (undefined8 *)(local_60 + 0x10);
      uVar6 = local_a0;
      uVar7 = local_90;
      uVar8 = local_88;
      do {
        local_88 = uVar8;
        local_90 = uVar7;
        local_a0 = uVar6;
        local_a8 = (void *)0x0;
        uVar2 = *(uint *)(puVar9 + 1);
        _Src = (void *)*puVar9;
        local_a0 = CONCAT44(local_a0._4_4_,uVar2);
        if ((longlong)(int)uVar2 == 0) {
          local_a0 = (ulonglong)uVar2;
        }
        else {
          FUN_1446dd670(&local_a8,uVar2,0);
          memcpy(local_a8,_Src,(longlong)(int)uVar2 * 2);
        }
        local_98 = *(undefined4 *)((longlong)puVar9 + 0x14);
        FUN_14658425b(&local_90,puVar9);
        iVar3 = *(int *)(lVar4 + 0x28);
        lVar11 = (longlong)iVar3;
        *(uint *)(lVar4 + 0x28) = iVar3 + 1U;
        if (*(uint *)(lVar4 + 0x2c) < iVar3 + 1U) {
          FUN_146585530(plVar1,iVar3);
        }
        lVar5 = *plVar1;
        *(undefined8 *)(lVar5 + lVar11 * 0x28) = 0;
        *(void **)(lVar5 + lVar11 * 0x28) = local_a8;
        *(undefined4 *)(lVar5 + 8 + lVar11 * 0x28) = (undefined4)local_a0;
        *(undefined4 *)(lVar5 + 0xc + lVar11 * 0x28) = local_a0._4_4_;
        *(undefined4 *)(lVar5 + 0x10 + lVar11 * 0x28) = local_98;
        *(undefined8 *)(lVar5 + 0x18 + lVar11 * 0x28) = 0;
        *(undefined8 *)(lVar5 + 0x18 + lVar11 * 0x28) = local_90;
        *(undefined4 *)(lVar5 + 0x20 + lVar11 * 0x28) = (undefined4)local_88;
        *(undefined4 *)(lVar5 + 0x24 + lVar11 * 0x28) = local_88._4_4_;
        local_88 = 0;
        uVar8 = local_88;
        local_90 = 0;
        uVar7 = local_90;
        local_a0 = 0;
        uVar6 = local_a0;
        local_88 = 0;
        local_90 = 0;
        local_a0 = 0;
        local_a8 = (void *)0x0;
        puVar9 = puVar9 + 8;
        lVar10 = lVar10 + -0x40;
      } while (lVar10 != 0);
    }
    FUN_143f3cb50(lVar4);
  }
  FUN_1447f69b6(lVar4);
  if (local_50 == '\x01') {
    FUN_14584505c(local_80);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f43ae8 FUN_143f43ae8 body=29 status=ok
// SIG undefined FUN_143f43ae8(void)

undefined8 FUN_143f43ae8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f43b1a FUN_143f43b1a body=93 status=ok
// SIG undefined FUN_143f43b1a(void)

void FUN_143f43b1a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f2400;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f43b78 FUN_143f43b78 body=93 status=ok
// SIG undefined FUN_143f43b78(void)

void FUN_143f43b78(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f2400;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f43bd6 FUN_143f43bd6 body=126 status=ok
// SIG undefined FUN_143f43bd6(void)

void FUN_143f43bd6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f2400;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f43c45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f43c54 FUN_143f43c54 body=41 status=ok
// SIG undefined FUN_143f43c54(void)

void FUN_143f43c54(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  cVar2 = FUN_143f3cb50(uVar1);
  if (cVar2 != '\0') {
    FUN_1447f69b6(uVar1);
    return;
  }
  return;
}



// FUNCTION 143f43c7e FUN_143f43c7e body=37 status=ok
// SIG undefined FUN_143f43c7e(void)

undefined1 FUN_143f43c7e(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  cVar2 = FUN_143f3cb50(uVar1);
  if (cVar2 != '\0') {
    FUN_1447f69b6(uVar1);
  }
  return 1;
}



// FUNCTION 143f43ca4 FUN_143f43ca4 body=429 status=ok
// SIG undefined FUN_143f43ca4(void)

void FUN_143f43ca4(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    puVar5 = (undefined8 *)
             ((longlong)*(int *)(param_1 + 0x48) * 0x10 + *(longlong *)(param_1 + 0x38));
    iVar1 = *(int *)(param_1 + 0x148);
    *(uint *)(param_1 + 0x148) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x14c) < iVar1 + 1U) {
      FUN_1413eac7e((longlong *)(param_1 + 0x140),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x140);
    *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = *puVar5;
    lVar4 = puVar5[1];
    *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  *(undefined1 *)(param_1 + 0x128) = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_149e06450;
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
  local_38[2] = lVar4;
  *local_38 = &PTR_FUN_14b4f2cc0;
  local_38[3] = param_1;
  local_38[4] = FUN_148aa435e;
  *(undefined4 *)(local_38 + 5) = 0;
  local_40 = *(undefined8 *)(param_1 + 0x30);
  FUN_1459567f0(uVar3,&local_40,param_1 + 0x140,&local_38);
  if (local_30 != 0) {
    if (local_38 == (undefined8 *)0x0) goto LAB_143f43e27;
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143f43e27:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f43e64 FUN_143f43e64 body=428 status=ok
// SIG undefined FUN_143f43e64(void)

void FUN_143f43e64(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    puVar5 = (undefined8 *)
             ((longlong)*(int *)(param_1 + 0x48) * 0x10 + *(longlong *)(param_1 + 0x38));
    iVar1 = *(int *)(param_1 + 400);
    *(uint *)(param_1 + 400) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x194) < iVar1 + 1U) {
      FUN_1413eac7e((longlong *)(param_1 + 0x188),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x188);
    *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = *puVar5;
    lVar4 = puVar5[1];
    *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  *(int *)(param_1 + 0x170) = param_2;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_149e06450;
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
  local_38[2] = lVar4;
  *local_38 = &PTR_FUN_14b4f3260;
  local_38[3] = param_1;
  local_38[4] = FUN_148aa583e;
  *(undefined4 *)(local_38 + 5) = 0;
  local_40 = *(undefined8 *)(param_1 + 0x30);
  FUN_1459567f0(uVar3,&local_40,param_1 + 0x188,&local_38);
  if (local_30 != 0) {
    if (local_38 == (undefined8 *)0x0) goto LAB_143f43fe6;
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143f43fe6:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f44022 FUN_143f44022 body=213 status=ok
// SIG undefined FUN_143f44022(void)

void FUN_143f44022(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) goto LAB_143f44041;
  if (*(longlong **)(param_1 + 0x30) == (longlong *)0x0) {
LAB_143f440a8:
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
    if (plVar3 == (longlong *)0x0) goto LAB_143f440a8;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
    if (local_38 != (longlong *)0x0) {
      if (*(longlong *)(param_1 + 0x30) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x10);
      }
      (**(code **)(*local_38 + 0x390))(local_38,uVar4,*(undefined8 *)(param_1 + 0x38),0);
    }
  }
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_143f44041:
  *(int *)(param_1 + 0x48) = param_2;
  *(undefined1 *)(param_1 + 0x18) = 1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f440f8 FUN_143f440f8 body=185 status=ok
// SIG undefined FUN_143f440f8(void)

void FUN_143f440f8(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x48) = param_2;
  *(undefined1 *)(param_1 + 0x18) = 1;
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_28);
      if (local_28 != (longlong *)0x0) {
        if (*(longlong *)(param_1 + 0x30) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x10);
        }
        (**(code **)(*local_28 + 0x3c0))(local_28,uVar4,*(undefined8 *)(param_1 + 0x38));
      }
      goto LAB_143f4416d;
    }
  }
  local_28 = (longlong *)0x0;
  plStack_20 = (longlong *)0x0;
LAB_143f4416d:
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f441b2 FUN_143f441b2 body=2634 status=ok
// SIG undefined FUN_143f441b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f441b2(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_b8 [32];
  GUID local_98;
  undefined2 *local_88;
  undefined8 uStack_80;
  wchar_t *local_78;
  undefined4 local_70;
  undefined1 local_6c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = (wchar_t *)0x800000014b4ee6d2;
  local_88 = (undefined2 *)CONCAT44(local_88._4_4_,9);
  local_70 = FUN_14577453c(L"GbxOnline",&local_88);
  local_6c = 1;
  FUN_146582e0c(&local_78);
  FUN_1446f470e(&DAT_14cb973d0,L"UNSET",1);
  FUN_1446f470e(&DAT_14cb973d8,L"crossplaypref",1);
  FUN_1446f470e(&DAT_14cb973e0,L"networktypepref",1);
  FUN_1446f470e(&DAT_14cb973e8,L"networkprivacypref",1);
  FUN_1446f470e(&DAT_14cb973f0,L"friendsyncpref",1);
  FUN_1446f470e(&DAT_14cb973f8,L"favoritefriends",1);
  FUN_1446f470e(&DAT_14cb97400,L"favoritefriendsnotifications",1);
  FUN_1446f470e(&DAT_14cb97408,L"hide_nat_dialog",1);
  FUN_1446f470e(&DAT_14cb97410,L"hide_age_dialog",1);
  FUN_1446f470e(&DAT_14cb97418,L"pushtotalkpref",1);
  FUN_1446f470e(&DAT_14cb97420,L"voiceenabledpref",1);
  FUN_1446f470e(&DAT_14cb97428,L"textchatenabledpref",1);
  FUN_1446f470e(&DAT_14cb97430,L"incomingvoicevolume",1);
  FUN_1446f470e(&DAT_14cb97438,L"profanityfilterpref",1);
  FUN_1446f470e(&DAT_14cb97440,L"streamer_mode_local_pref",1);
  FUN_1446f470e(&DAT_14cb97448,L"streamer_mode_remote_pref",1);
  FUN_1446f470e(&DAT_14cb97450,L"hide_promotional_content_pref",1);
  FUN_1446f470e(&DAT_14cb97458,L"matchmakingautoregionselectpref",1);
  FUN_1446f470e(&DAT_14cb97460,L"matchmakingregionspref",1);
  FUN_1446f470e(&DAT_14cb97468,L"crosssavepref",1);
  DAT_14cb97470 = 0;
  _DAT_14cb97478 = 0;
  _DAT_14cb97480 = 2;
  atexit(FUN_143f374a1);
  FUN_140056680(&DAT_14cb97488,L"GameplayEnded");
  atexit((_func_5014 *)&LAB_143f374d2);
  local_78 = L"AssetRegistry";
  local_70 = 0xd;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cb97498 = (ulonglong)uVar2;
  DAT_14cb974c0 = 0;
  _DAT_14cb974c8 = 0;
  atexit((_func_5014 *)&LAB_143f38095);
  DAT_14cb974d0 = 0;
  _DAT_14cb974d8 = 0;
  atexit((_func_5014 *)&LAB_143f380a6);
  DAT_14cb974e0 = 0;
  DAT_14cb974e8 = 0;
  atexit((_func_5014 *)&LAB_143f380b7);
  FUN_1446f470e(&DAT_14cb974f0,L"PRESENCESEARCH",1);
  FUN_1446f470e(&DAT_14cb97810,L"PLATFORM_SESSION_ID",1);
  FUN_1446f470e(&DAT_14cb977f0,L"CUSTOMJOININFO",1);
  FUN_1446f470e(&DAT_14cb97848,L"InviteReason",1);
  FUN_140056680(&DAT_14cb97838,L"MatchmakingReservation");
  atexit((_func_5014 *)&LAB_143f380d1);
  FUN_140056680(&DAT_14cb97800,L"JoinRequestReservation");
  atexit((_func_5014 *)&LAB_143f380e2);
  DAT_14cb977f8 = 0;
  DAT_14cb97820 = 1;
  DAT_14cb97828 = 2;
  DAT_14cb97818 = &DAT_100000002;
  DAT_14cb97830 = &DAT_200000002;
  _DAT_14cb97518 = 0;
  _DAT_14cb97520 = 0;
  _DAT_14cb974f8 = 0;
  uRam000000014cb97500 = 0;
  _DAT_14cb97524 = 0xffffffff00000080;
  _DAT_14cb9752c = 0;
  DAT_14cb97538 = 0;
  _DAT_14cb97540 = 0;
  atexit(FUN_143f3811e);
  _DAT_14cb97568 = 0;
  _DAT_14cb97570 = 0;
  DAT_14cb97548 = 0;
  _DAT_14cb97550 = 0;
  _DAT_14cb97574 = 0xffffffff00000080;
  _DAT_14cb9757c = 0;
  DAT_14cb97588 = 0;
  DAT_14cb97590 = 0;
  atexit(FUN_143f3814d);
  DAT_14cb975f0 = 0;
  _DAT_14cb975f8 = 0;
  _DAT_14cb97600 = 2;
  atexit(FUN_143f381ab);
  _DAT_14cb97630 = 0;
  _DAT_14cb97638 = 0;
  DAT_14cb97610 = 0;
  uRam000000014cb97618 = 0;
  _DAT_14cb9763c = 0xffffffff00000080;
  _DAT_14cb97644 = 0;
  DAT_14cb97650 = 0;
  _DAT_14cb97658 = 0;
  atexit(FUN_143f381dc);
  FUN_140056680(&DAT_14cb97660,&DAT_149e001d8);
  atexit((_func_5014 *)&LAB_143f38524);
  FUN_140056680(&DAT_14cb97670,L"DeviceId");
  atexit((_func_5014 *)&LAB_143f38535);
  FUN_140056680(&DAT_14cb977e0,L"Platform");
  atexit((_func_5014 *)&LAB_143f38546);
  FUN_140056680(&DAT_14cb97680,L"Crossplay");
  atexit((_func_5014 *)&LAB_143f38557);
  local_98.Data1 = 0;
  local_98.Data2 = 0;
  local_98.Data3 = 0;
  local_98.Data4[0] = '\0';
  local_98.Data4[1] = '\0';
  local_98.Data4[2] = '\0';
  local_98.Data4[3] = '\0';
  local_98.Data4[4] = '\0';
  local_98.Data4[5] = '\0';
  local_98.Data4[6] = '\0';
  local_98.Data4[7] = '\0';
  CoCreateGuid(&local_98);
  local_88 = (undefined2 *)0x0;
  uStack_80 = 0;
  FUN_1407c869a(&local_98,&local_88,0);
  puVar4 = local_88;
  if ((int)uStack_80 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar3 = FUN_144a1ccda(puVar4,0);
  DAT_14cb97690 = 0;
  _DAT_14cb97698 = 0;
  lVar6 = 0xf;
  lVar5 = 0x1000000000;
  iVar7 = 0x10;
  iVar1 = iVar3;
  do {
    lVar5 = lVar5 + -0x100000000;
    *(undefined2 *)((longlong)&local_78 + lVar6 * 2) =
         *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar1 % 10) * 2);
    uVar2 = iVar1 + 9;
    lVar6 = lVar6 + -1;
    iVar7 = iVar7 + -1;
    iVar1 = iVar1 / 10;
  } while (0x12 < uVar2);
  if (iVar3 < 0) {
    iVar7 = (int)lVar6;
    lVar5 = (longlong)iVar7;
    *(undefined2 *)((longlong)&local_78 + lVar5 * 2) = 0x2d;
  }
  else {
    lVar5 = lVar5 >> 0x20;
  }
  FUN_1400020e8(&DAT_14cb97690,(longlong)&local_78 + lVar5 * 2,0x10 - iVar7);
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143f38568);
  FUN_140056680(&DAT_14cb976a0,&DAT_149e62e78);
  atexit((_func_5014 *)&LAB_143f38672);
  FUN_140056680(&DAT_14cb976b0,&DAT_149e62e78);
  atexit((_func_5014 *)&LAB_143f38683);
  FUN_140056680(&DAT_14cb976c0,L"GBX.JOIN_REQUEST");
  atexit((_func_5014 *)&LAB_143f38694);
  FUN_140056680(&DAT_14cb976d0,L"GBX.SS_JOIN_REQUEST");
  atexit((_func_5014 *)&LAB_143f386a5);
  FUN_140056680(&DAT_14cb976e0,L"GBX.JOIN_DECLINED");
  atexit((_func_5014 *)&LAB_143f386b6);
  FUN_140056680(&DAT_14cb976f0,L"GBX.SS_JOIN_RESPONSE");
  atexit((_func_5014 *)&LAB_143f386c7);
  FUN_140056680(&DAT_14cb97700,L"GBX.PRIVACY_UPDATED");
  atexit((_func_5014 *)&LAB_143f386d8);
  FUN_140056680(&DAT_14cb97710,L"GBX.KICKED");
  atexit((_func_5014 *)&LAB_143f386e9);
  FUN_140056680(&DAT_14cb97720,L"GBX.TEXTCHAT");
  atexit((_func_5014 *)&LAB_143f386fa);
  FUN_140056680(&DAT_14cb97730,L"GBX.CP_CHANGE_REQUEST");
  atexit((_func_5014 *)&LAB_143f3870b);
  FUN_140056680(&DAT_14cb97740,L"GBX.CP_CHANGE_RESPONSE");
  atexit((_func_5014 *)&LAB_143f3871c);
  FUN_140056680(&DAT_14cb97750,L"GBX.FRIENDSHIP_QUERY");
  atexit((_func_5014 *)&LAB_143f3872d);
  FUN_140056680(&DAT_14cb97760,L"GBX.FRIENDSHIP_RESPONSE");
  atexit((_func_5014 *)&LAB_143f3873e);
  DAT_14cb97770 = 0;
  _DAT_14cb97778 = 0;
  atexit((_func_5014 *)&LAB_143f3874f);
  local_78 = L"Online";
  local_70 = 6;
  FUN_1446e940c(&local_88,&local_78);
  local_78 = L"OnlinePresence";
  local_70 = 0xe;
  FUN_1446e940c(&local_98,&local_78);
  local_78 = L"Online";
  local_70 = 6;
  FUN_140208c1e(&DAT_14cb97790,&local_98,&local_88,&local_78);
  atexit((_func_5014 *)&LAB_143f3c403);
  local_78 = L"Offline";
  local_70 = 7;
  FUN_1446e940c(&local_88,&local_78);
  local_78 = L"OnlinePresence";
  local_70 = 0xe;
  FUN_1446e940c(&local_98,&local_78);
  local_78 = L"Offline";
  local_70 = 7;
  FUN_140208c1e(&DAT_14cb977a0,&local_98,&local_88,&local_78);
  atexit((_func_5014 *)&LAB_143f3c417);
  local_78 = L"Away";
  local_70 = 4;
  FUN_1446e940c(&local_88,&local_78);
  local_78 = L"OnlinePresence";
  local_70 = 0xe;
  FUN_1446e940c(&local_98,&local_78);
  local_78 = L"Away";
  local_70 = 4;
  FUN_140208c1e(&DAT_14cb977b0,&local_98,&local_88,&local_78);
  atexit((_func_5014 *)&LAB_143f3c42b);
  local_78 = L"DoNotDisturb";
  local_70 = 0xc;
  FUN_1446e940c(&local_88,&local_78);
  local_78 = L"OnlinePresence";
  local_70 = 0xe;
  FUN_1446e940c(&local_98,&local_78);
  local_78 = L"Do Not Disturb";
  local_70 = 0xe;
  FUN_140208c1e(&DAT_14cb977c0,&local_98,&local_88,&local_78);
  atexit((_func_5014 *)&LAB_143f3c43f);
  local_78 = L"Chat";
  local_70 = 4;
  FUN_1446e940c(&local_88,&local_78);
  local_78 = L"OnlinePresence";
  local_70 = 0xe;
  FUN_1446e940c(&local_98,&local_78);
  local_78 = L"Chat";
  local_70 = 4;
  FUN_140208c1e(&DAT_14cb977d0,&local_98,&local_88,&local_78);
  atexit((_func_5014 *)&LAB_143f3c453);
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f44c64 FUN_143f44c64 body=308 status=ok
// SIG undefined FUN_143f44c64(void)

ulonglong FUN_143f44c64(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  undefined7 uVar8;
  bool bVar9;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
  lVar5 = (**(code **)(*(longlong *)*param_2 + 0x38))();
  uVar8 = (undefined7)((ulonglong)unaff_RDI >> 8);
  switch(*(undefined4 *)(param_1 + 0x80)) {
  case 0:
    bVar6 = 1;
    break;
  case 1:
    bVar6 = *(byte *)(lVar5 + 0x10) & 1;
    break;
  case 2:
    uVar7 = CONCAT71(uVar8,*(undefined1 *)(lVar5 + 0x10)) & 0xffffffffffffff04;
    uVar8 = (undefined7)(uVar7 >> 8);
    bVar6 = (byte)uVar7 >> 2;
    break;
  default:
    bVar6 = 0;
    uVar8 = 0;
  }
  (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,&local_50);
  (**(code **)(*local_50 + 0x10))(local_50,&local_40);
  iVar3 = *(int *)(param_1 + 0x84);
  if (iVar3 == 0) {
    bVar9 = true;
  }
  else if (iVar3 == 2) {
    FUN_1446f470e(&local_38,L"SHIFT",1);
    bVar9 = local_40 == local_38;
  }
  else if (iVar3 == 1) {
    bVar9 = local_40 == DAT_14cb978a8;
  }
  else {
    bVar9 = false;
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return CONCAT71(uVar8,bVar6 & bVar9 & iVar4 == 1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f44d9a FUN_143f44d9a body=201 status=ok
// SIG undefined FUN_143f44d9a(void)

void FUN_143f44d9a(longlong *param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (((int)param_1[0xe] == param_2) && ((char)param_1[0x11] == '\x01')) {
    if (*(int *)((longlong)param_1 + 0x74) == 0) {
      lVar3 = FUN_1415ca610(param_1[10]);
      if ((lVar3 != 0) && ((longlong)*(int *)(lVar3 + 0x40) != 0)) {
        lVar4 = 0;
        do {
          lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + lVar4);
          if ((lVar1 != 0) && (*(int *)(lVar1 + 0xe0) == (int)param_1[0xe])) {
            cVar2 = FUN_143f44f76(param_1,lVar1,param_3,param_4);
            if (cVar2 == '\0') {
              return;
            }
            FUN_14127d8d6(param_1);
            goto LAB_143f44e3e;
          }
          lVar4 = lVar4 + 8;
        } while ((longlong)*(int *)(lVar3 + 0x40) * 8 != lVar4);
      }
    }
    else if ((*(int *)((longlong)param_1 + 0x74) == 1) &&
            (cVar2 = FUN_143f44e64(param_1,param_3), cVar2 != '\0')) {
LAB_143f44e3e:
      if (((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000143f44e56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(longlong *)*param_1 + 0x60))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 143f44e64 FUN_143f44e64 body=273 status=ok
// SIG undefined FUN_143f44e64(void)

ulonglong FUN_143f44e64(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar5 = FUN_143f44c64();
  if (cVar5 == '\0') {
    uVar7 = 0;
  }
  else {
    (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,&local_38);
    puVar4 = local_38;
    if ((longlong)*(int *)(param_1 + 0x98) != 0) {
      puVar8 = *(undefined8 **)(param_1 + 0x90);
      lVar6 = (longlong)*(int *)(param_1 + 0x98) << 4;
      do {
        cVar5 = (**(code **)*puVar4)(puVar4,*puVar8);
        if (cVar5 != '\0') {
          if (puVar8 != (undefined8 *)0x0) {
            uVar7 = 0;
            goto LAB_143f44f2c;
          }
          break;
        }
        puVar8 = puVar8 + 2;
        lVar6 = lVar6 + -0x10;
      } while (lVar6 != 0);
    }
    iVar3 = *(int *)(param_1 + 0x98);
    *(uint *)(param_1 + 0x98) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x9c) < iVar3 + 1U) {
      FUN_1413eac7e((longlong *)(param_1 + 0x90),iVar3);
    }
    lVar6 = *(longlong *)(param_1 + 0x90);
    *(undefined8 **)(lVar6 + (longlong)iVar3 * 0x10) = local_38;
    *(longlong **)(lVar6 + 8 + (longlong)iVar3 * 0x10) = local_30;
    uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
LAB_143f44f2c:
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 143f44f76 FUN_143f44f76 body=772 status=ok
// SIG undefined FUN_143f44f76(void)

char FUN_143f44f76(longlong param_1,undefined8 param_2,undefined8 *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  void *_Src;
  char cVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined1 auStack_b8 [38];
  char local_92;
  char local_91;
  longlong *local_90;
  longlong local_88 [2];
  void *local_78;
  int local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar7 = FUN_143f44c64(param_1,param_3);
  if (cVar7 != '\0') {
    local_91 = cVar7;
    (**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3,&local_58);
    uVar11 = FUN_140b6de3c();
    FUN_140b6df48(uVar11,&local_68,param_2,local_58);
    if (local_68 == (longlong *)0x0) {
      local_68 = (longlong *)*param_3;
    }
    local_88[0] = 0;
    local_88[1] = 0;
    local_92 = param_4;
    (**(code **)(*local_68 + 0x18))(0,&local_78,local_88);
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    local_90 = (longlong *)(param_1 + 0xa0);
    local_88[0] = local_58;
    iVar3 = *(int *)(param_1 + 0xa8);
    if ((longlong)iVar3 != 0) {
      lVar4 = *(longlong *)(param_1 + 0xa0);
      uVar9 = 0;
      lVar10 = 0;
      do {
        cVar7 = FUN_143f4a284(local_88,uVar9 + lVar4);
        if (cVar7 != '\0') {
          if ((int)(~uVar9 >> 4) != 0) {
            lVar10 = (lVar10 >> 0x20) * 0x10;
            puVar8 = (undefined8 *)(*local_90 + lVar10);
            uVar5 = *param_3;
            lVar4 = param_3[1];
            if (lVar4 != 0) {
              LOCK();
              *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
              UNLOCK();
            }
            plVar6 = (longlong *)puVar8[1];
            *puVar8 = uVar5;
            puVar8[1] = lVar4;
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
            iVar3 = local_70 + -1;
            if (local_70 == 0) {
              iVar3 = 0;
            }
            FUN_1402980a2(lVar10 + *(longlong *)(param_1 + 0xb0),local_78,iVar3);
            goto LAB_143f451f2;
          }
          break;
        }
        lVar10 = lVar10 + 0x100000000;
        uVar9 = uVar9 + 0x10;
      } while ((longlong)iVar3 * 0x10 != uVar9);
    }
    if (local_92 == '\0') {
      iVar3 = *(int *)(param_1 + 0xa8);
      *(uint *)(param_1 + 0xa8) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0xac) < iVar3 + 1U) {
        FUN_140b722da(local_90,iVar3);
      }
      lVar4 = *local_90;
      *(undefined8 *)(lVar4 + (longlong)iVar3 * 0x10) = *param_3;
      lVar10 = param_3[1];
      *(longlong *)(lVar4 + 8 + (longlong)iVar3 * 0x10) = lVar10;
      if (lVar10 != 0) {
        LOCK();
        *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
        UNLOCK();
      }
      iVar3 = *(int *)(param_1 + 0xb8);
      *(uint *)(param_1 + 0xb8) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0xbc) < iVar3 + 1U) {
        FUN_1447a1bd6((longlong *)(param_1 + 0xb0),iVar3);
      }
      _Src = local_78;
      lVar4 = *(longlong *)(param_1 + 0xb0);
      lVar10 = (longlong)iVar3 * 0x10;
      puVar8 = (undefined8 *)(lVar4 + lVar10);
      *(undefined8 *)(lVar4 + lVar10) = 0;
      *(int *)(lVar4 + 8 + lVar10) = local_70;
      if ((longlong)local_70 == 0) {
        *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar8,local_70,0);
        memcpy((void *)*puVar8,_Src,(longlong)local_70 * 2);
      }
      FUN_140b716a0(*(undefined8 *)(param_1 + 0x78),&local_58);
      if ((*(int *)(param_1 + 0x18) != 0) &&
         (plVar6 = *(longlong **)(param_1 + 0x10), plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x60))(plVar6,local_58);
      }
    }
LAB_143f451f2:
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_60 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_60 + 0x10))(local_60);
        }
      }
    }
    cVar7 = local_91;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_50 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        cVar7 = local_91;
        if (*piVar2 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
          cVar7 = local_91;
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return cVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4527c FUN_143f4527c body=440 status=ok
// SIG undefined FUN_143f4527c(void)

void FUN_143f4527c(longlong *param_1,int param_2,longlong *param_3,undefined4 param_4)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  longlong lVar7;
  
  if ((int)param_1[0xe] != param_2) {
    return;
  }
  if ((char)param_1[0x11] != '\x01') {
    return;
  }
  if (*(int *)((longlong)param_1 + 0x74) == 0) {
    lVar7 = FUN_1415ca610(param_1[10]);
    if (lVar7 == 0) {
      return;
    }
    if ((longlong)*(int *)(lVar7 + 0x40) == 0) {
      return;
    }
    lVar5 = 0;
    while ((lVar1 = *(longlong *)(*(longlong *)(lVar7 + 0x38) + lVar5), lVar1 == 0 ||
           (*(int *)(lVar1 + 0xe0) != (int)param_1[0xe]))) {
      lVar5 = lVar5 + 8;
      if ((longlong)*(int *)(lVar7 + 0x40) * 8 == lVar5) {
        return;
      }
    }
    iVar3 = (int)param_3[1];
    iVar4 = (int)param_1[0x15];
    if ((int)param_1[0x15] < iVar3) {
      iVar4 = iVar3;
    }
    if (iVar4 < 0) goto LAB_143f4542d;
    if (*(int *)((longlong)param_1 + 0xac) < iVar4) {
      FUN_14127d7f4(param_1 + 0x14);
      iVar3 = (int)param_3[1];
      iVar4 = (int)param_1[0x15];
      if ((int)param_1[0x15] < iVar3) {
        iVar4 = iVar3;
      }
      if (iVar4 < 0) goto LAB_143f4542d;
    }
    if (*(int *)((longlong)param_1 + 0xbc) < iVar4) {
      FUN_1408be2c4(param_1 + 0x16);
      iVar3 = (int)param_3[1];
    }
    if (iVar3 == 0) {
      return;
    }
    lVar7 = *param_3;
    lVar5 = (longlong)iVar3 << 4;
    bVar6 = 0;
    do {
      bVar2 = FUN_143f44f76(param_1,lVar1,lVar7,param_4);
      bVar6 = bVar6 | bVar2;
      lVar7 = lVar7 + 0x10;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  else {
    if (*(int *)((longlong)param_1 + 0x74) != 1) {
      return;
    }
    iVar3 = (int)param_3[1];
    iVar4 = (int)param_1[0x13];
    if ((int)param_1[0x13] < iVar3) {
      iVar4 = iVar3;
    }
    if (iVar4 < 0) {
LAB_143f4542d:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar4);
    }
    if (*(int *)((longlong)param_1 + 0x9c) < iVar4) {
      FUN_1459b6c3c(param_1 + 0x12);
      iVar3 = (int)param_3[1];
    }
    if (iVar3 == 0) {
      return;
    }
    lVar7 = *param_3;
    lVar5 = (longlong)iVar3 << 4;
    bVar6 = 0;
    do {
      bVar2 = FUN_143f44e64(param_1,lVar7);
      bVar6 = bVar6 | bVar2;
      lVar7 = lVar7 + 0x10;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  if ((((bVar6 & 1) != 0) && (FUN_14127d8d6(param_1), (int)param_1[1] != 0)) &&
     ((longlong *)*param_1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000143f45407. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x60))();
    return;
  }
  return;
}



// FUNCTION 143f45458 FUN_143f45458 body=126 status=ok
// SIG undefined FUN_143f45458(void)

void FUN_143f45458(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((*(uint *)((longlong)param_1 + 0x54) & 0xfffffffb) != 0) {
    (**(code **)(*param_1 + 0xe8))();
    FUN_14114e6dc(param_1 + 0xae,param_2);
    FUN_143f39b4c(param_1);
  }
  if ((int)param_2[1] != 0) {
    puVar1 = (undefined8 *)*param_2;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_2,0,0,0x10);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143f454d6 FUN_143f454d6 body=165 status=ok
// SIG undefined FUN_143f454d6(void)

void FUN_143f454d6(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  
  if (((*(int *)(param_1 + 0x588) == 0) ||
      (plVar1 = *(longlong **)(param_1 + 0x580), plVar1 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*plVar1 + 0x30))(), cVar3 == '\0')) {
    FUN_145deef92((longlong *)(param_1 + 0x580),param_4);
    FUN_148a98664(param_1,param_2,param_3);
  }
  if ((int)param_4[1] != 0) {
    puVar2 = (undefined8 *)*param_4;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_4,0,0,0x10);
    *(undefined4 *)(param_4 + 1) = 0;
  }
  if (*param_4 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143f455c2 FUN_143f455c2 body=1 status=ok
// SIG undefined FUN_143f455c2(void)

void FUN_143f455c2(void)

{
  return;
}



// FUNCTION 143f455e4 FUN_143f455e4 body=171 status=ok
// SIG undefined FUN_143f455e4(void)

void FUN_143f455e4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((*(int *)(param_1 + 0x508) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x500), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
  }
  if ((((*(longlong *)(param_1 + 0x38) != 0) &&
       (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x30), lVar2 != 0)) &&
      (lVar2 = *(longlong *)(lVar2 + 0x360), lVar2 != 0)) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
    lVar2 = FUN_140cb14ac();
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x30) != 0)) {
      FUN_148a99e7a();
    }
  }
  if ((*param_2 != 0) && (*(int *)(*param_2 + 0x14) == 0)) {
    *(undefined4 *)(param_1 + 0x528) = 0;
    if (*(longlong *)(param_1 + 0x530) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x530) = 0;
    *(undefined8 *)(param_1 + 0x538) = 0;
  }
  return;
}



// FUNCTION 143f45690 FUN_143f45690 body=381 status=ok
// SIG undefined FUN_143f45690(void)

void FUN_143f45690(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((*(longlong *)(param_1 + 0x38) != 0) &&
       (lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x30), lVar6 != 0)) &&
      (lVar6 = *(longlong *)(lVar6 + 0x360), lVar6 != 0)) &&
     (((*(longlong *)(lVar6 + 0x1f0) != 0 && (lVar6 = FUN_140cb14ac(), lVar6 != 0)) &&
      (lVar6 = *(longlong *)(lVar6 + 0x30), lVar6 != 0)))) {
    if (param_3 == '\0') {
      *(undefined1 *)(lVar6 + 0x20) = 1;
      FUN_14101cf30(param_1,&local_50);
      lVar4 = local_50;
      lVar7 = (longlong)local_48;
      if (lVar7 == 0) {
        local_48 = 0;
      }
      else {
        lVar8 = 0;
        do {
          puVar3 = *(undefined8 **)(lVar4 + lVar8);
          if (*(int *)((longlong)puVar3 + 0x14) == 0) {
            local_60 = *puVar3;
            local_58 = (longlong *)puVar3[1];
            if (local_58 == (longlong *)0x0) {
              plVar9 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(local_58 + 1) = (int)local_58[1] + 1;
              UNLOCK();
              plVar9 = local_58;
            }
            uVar5 = FUN_145ce2ae6(param_1,&local_60);
            FUN_143f3cecc(lVar6,uVar5);
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
          }
          lVar8 = lVar8 + 0x10;
        } while (lVar7 * 0x10 != lVar8);
      }
      FUN_14101cee4(local_50,local_48);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      FUN_146584316(lVar6);
      *(undefined1 *)(lVar6 + 0x20) = 0;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f4580e FUN_143f4580e body=290 status=ok
// SIG undefined FUN_143f4580e(void)

void FUN_143f4580e(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar4 = FUN_14586c3a8();
  if (cVar4 != '\0') {
    FUN_14586ccee(param_1,&local_30,param_2);
    if (local_30 != 0) {
      lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
      if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x1f0) != 0)) {
        lVar5 = FUN_141030f66();
        if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x30), lVar5 != 0)) {
          local_40 = local_30;
          local_38 = local_28;
          if (local_28 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_28 + 1) = (int)local_28[1] + 1;
            UNLOCK();
          }
          FUN_148a69b04(lVar5,*(undefined4 *)(param_1[4] + 0xe0),&local_40);
          plVar3 = local_38;
          if (local_38 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_38 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_38)(local_38);
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
      }
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_28 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f45932 FUN_143f45932 body=290 status=ok
// SIG undefined FUN_143f45932(void)

void FUN_143f45932(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar4 = FUN_145ed8ee0();
  if (cVar4 != '\0') {
    FUN_14586ccee(param_1,&local_30,param_2);
    if (local_30 != 0) {
      lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
      if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x1f0) != 0)) {
        lVar5 = FUN_141030f66();
        if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x30), lVar5 != 0)) {
          local_40 = local_30;
          local_38 = local_28;
          if (local_28 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_28 + 1) = (int)local_28[1] + 1;
            UNLOCK();
          }
          FUN_148a69c70(lVar5,*(undefined4 *)(param_1[4] + 0xe0),&local_40);
          plVar3 = local_38;
          if (local_38 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_38 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_38)(local_38);
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
      }
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_28 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f45a56 FUN_143f45a56 body=312 status=ok
// SIG undefined FUN_143f45a56(void)

void FUN_143f45a56(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  longlong *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(*param_2 + 0x48);
  if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar4 = (uint)lVar1 & 0xffff;
    lVar3 = param_1 + 0xb8;
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xc0);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 200) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar4) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x80);
      do {
        if (*(longlong *)(lVar3 + (longlong)iVar5 * 0x20) == lVar1) goto LAB_143f45b71;
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + lVar3 + 0x18);
      } while (iVar5 != -1);
    }
  }
  local_30 = &local_38;
  local_38 = lVar1;
  local_28 = param_2;
  FUN_148ab1e1e((longlong *)(param_1 + 0x80),local_1c,&local_30,0);
  FUN_148aa97d8(*param_2 + 0x18,param_1,FUN_148aa9948);
  FUN_148aa9c70(*param_2 + 0x28,param_1,FUN_148aa9de0);
  FUN_148aa9c70(*param_2 + 0x38,param_1,FUN_148aa9f2a);
  (**(code **)(*(longlong *)*param_2 + 8))();
LAB_143f45b71:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f45b90 FUN_143f45b90 body=449 status=ok
// SIG undefined FUN_143f45b90(void)

undefined8 FUN_143f45b90(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  iVar2 = *(int *)(param_1 + 0x58);
  if (iVar2 == 0) {
    uVar16 = 1;
    uVar15 = 0;
    iVar11 = 0;
    iVar14 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x40);
    }
    uVar12 = *puVar5;
    if (uVar12 == 0) {
      iVar14 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar14 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar16 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar16 = uVar15;
      }
      iVar11 = 0;
      do {
        if (uVar16 == uVar15) {
          return 1;
        }
        iVar11 = iVar11 + 0x20;
        uVar12 = puVar5[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar15 = 0;
      iVar11 = 0;
    }
    uVar16 = (ulonglong)(-uVar12 & uVar12);
    uVar1 = uVar16 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar14 = (iVar11 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar14) {
      iVar14 = iVar2;
    }
  }
  if (iVar14 != iVar2) {
    uVar12 = 0xffffffff;
    do {
      uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar14 * 0xc);
      uVar6 = FUN_148aa973e(param_1);
      lVar7 = FUN_14127aa70(uVar6,uVar3);
      if ((lVar7 != 0) &&
         ((*(char *)(lVar7 + 0x27) != '\x01' || (*(char *)(lVar7 + 0x26) != '\x01')))) {
        return 0;
      }
      uVar12 = uVar12 & ~(uint)uVar16;
      puVar5 = *(uint **)(param_1 + 0x50);
      if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x40);
      }
      iVar4 = *(int *)(param_1 + 0x58);
      iVar14 = (int)uVar15;
      lVar7 = (longlong)iVar14;
      uVar10 = puVar5[lVar7] & uVar12;
      if (uVar10 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar14) {
          iVar9 = iVar14;
        }
        if (iVar14 < iVar8) {
          lVar13 = 0;
          do {
            uVar10 = puVar5[lVar7 + lVar13 + 1];
            if (uVar10 != 0) {
              uVar15 = (ulonglong)(iVar14 + (int)lVar13 + 1);
              uVar12 = 0xffffffff;
              goto LAB_143f45cf1;
            }
            iVar11 = iVar11 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar9 - lVar7 != lVar13);
          uVar12 = 0xffffffff;
          iVar14 = iVar9;
        }
        uVar15 = (ulonglong)(iVar14 + 1);
        iVar14 = iVar4;
      }
      else {
LAB_143f45cf1:
        uVar16 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar16 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar14 = (iVar11 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar14) {
          iVar14 = iVar4;
        }
      }
    } while (iVar14 != iVar2);
  }
  return 1;
}



// FUNCTION 143f45d52 FUN_143f45d52 body=44 status=ok
// SIG undefined FUN_143f45d52(void)

void FUN_143f45d52(longlong param_1,undefined8 param_2,uint param_3)

{
  if ((((param_3 != 0) || (*(char *)(param_1 + 0x44) != '\0')) &&
      (*(uint *)(param_1 + 0x3c) != param_3)) &&
     (*(uint *)(param_1 + 0x3c) = param_3, (param_3 & 0xfffffffe) == 0)) {
    FUN_143f460d4(param_1,param_2,param_3 == 1);
    return;
  }
  return;
}



// FUNCTION 143f45d7e FUN_143f45d7e body=341 status=ok
// SIG undefined FUN_143f45d7e(void)

void FUN_143f45d7e(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  undefined ***pppuVar5;
  undefined4 uVar6;
  undefined1 auStack_a8 [32];
  code **local_88;
  undefined8 local_78;
  longlong *local_70;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(float *)(param_2 + 0xc4) <= 0.0) {
    iVar4 = 8;
    if (*(int *)(param_2 + 0xc0) < 8) {
      iVar4 = *(int *)(param_2 + 0xc0);
    }
    uVar6 = exp2f((float)iVar4);
    *(undefined4 *)(param_2 + 0xc4) = uVar6;
    *(int *)(param_2 + 0xc0) = *(int *)(param_2 + 0xc0) + 1;
    if (((*(longlong *)(param_1 + 0x1c8) == 0) || (*(longlong *)(param_1 + 0x1d0) == 0)) ||
       (*(int *)(*(longlong *)(param_1 + 0x1d0) + 8) < 1)) {
      uVar3 = FUN_1401cb356();
      local_88 = local_68;
      local_58 = (undefined ***)0x0;
      local_48 = &PTR_LAB_14b4f6790;
      local_68[0] = FUN_143f4cf6a;
      local_40 = param_1;
      FUN_1401cbba4(uVar3,&local_78,L"GbxVoice_LoginRetry",0);
      *(undefined8 *)(param_1 + 0x1c8) = local_78;
      local_78 = 0;
      plVar2 = *(longlong **)(param_1 + 0x1d0);
      *(longlong **)(param_1 + 0x1d0) = local_70;
      local_70 = (longlong *)0x0;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
        if (local_70 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_70 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_70 + 0x10))();
          }
        }
      }
      if (local_68[0] != (code *)0x0) {
        pppuVar5 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar5 = &local_48;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f45ed4 FUN_143f45ed4 body=327 status=ok
// SIG undefined FUN_143f45ed4(void)

void FUN_143f45ed4(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong **local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = (longlong *)FUN_14001cc68(0xd8,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b4f66e0;
  plVar2 = plVar4 + 2;
  FUN_148aab5ea(plVar2,param_2);
  local_58 = plVar2;
  local_50 = plVar4;
  FUN_148ab39d6(&local_58,plVar2);
  plVar2 = (longlong *)*param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (plVar2 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if (cVar3 != '\0') {
      (**(code **)(*plVar2 + 0x30))(plVar2,local_68);
      goto LAB_143f45f85;
    }
  }
  local_68[0] = 0;
  local_68[1] = 0;
LAB_143f45f85:
  local_48 = local_68;
  local_40 = &local_58;
  FUN_145d038fe(param_1 + 0xe8,local_34);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar2 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_50 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4601c FUN_143f4601c body=183 status=ok
// SIG undefined FUN_143f4601c(void)

void FUN_143f4601c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)*param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (plVar2 != (longlong *)0x0) {
    cVar4 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if (cVar4 != '\0') {
      (**(code **)(*plVar2 + 0x30))(plVar2,local_38);
      goto LAB_143f46076;
    }
  }
  local_38[0] = 0;
  local_38[1] = 0;
LAB_143f46076:
  FUN_145ad1bb0(param_1 + 0xe8,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f460d4 FUN_143f460d4 body=153 status=ok
// SIG undefined FUN_143f460d4(void)

void FUN_143f460d4(longlong param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1459ca5e2(param_1,&local_30,param_2);
  if ((local_30 != 0) && (*(longlong *)(local_30 + 0x38) != 0)) {
    *(char *)(param_1 + 0x39) = (char)param_3;
    (**(code **)(**(longlong **)(local_30 + 0x38) + 0x38))
              (*(longlong **)(local_30 + 0x38),param_3 ^ 1);
  }
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
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



// FUNCTION 143f46180 FUN_143f46180 body=401 status=ok
// SIG undefined FUN_143f46180(void)

void FUN_143f46180(longlong *param_1,undefined4 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  longlong local_68;
  uint local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1459ca5e2(param_1,&local_58,param_2);
  if ((local_58 != 0) && (*(longlong *)(local_58 + 0x38) != 0)) {
    FUN_1459b169e(param_1,&local_68,param_2);
    uVar7 = (ulonglong)(int)local_60;
    if (uVar7 != 0) {
      iVar5 = (int)param_3[1];
      lVar6 = local_68;
LAB_143f4624d:
      if (iVar5 != *(int *)(lVar6 + 0x18)) {
        if (*(int *)(lVar6 + 0x18) + iVar5 == 1) goto LAB_143f462c3;
        goto LAB_143f462b3;
      }
      if (1 < iVar5) {
        lVar9 = 0;
        do {
          uVar3 = *(ushort *)(*param_3 + lVar9);
          uVar4 = *(ushort *)(*(longlong *)(lVar6 + 0x10) + lVar9);
          if (uVar3 == uVar4) {
            if (uVar3 == 0) break;
          }
          else {
            if (0x7f < (uVar4 | uVar3)) {
              iVar8 = (uint)uVar3 - (uint)uVar4;
              goto LAB_143f462a4;
            }
            if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[(uint)uVar4]) goto code_r0x000143f462a1;
          }
          lVar9 = lVar9 + 2;
        } while( true );
      }
      goto LAB_143f462c3;
    }
    uVar7 = 0;
LAB_143f462f5:
    FUN_1459b117c(local_68,uVar7);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000143f462a1:
  iVar8 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar4];
LAB_143f462a4:
  if (iVar8 == 0) {
LAB_143f462c3:
    if (lVar6 != 0) {
      if (*(char *)(lVar6 + 0x20) == '\0') {
        (**(code **)(**(longlong **)(local_58 + 0x38) + 0x70))
                  (*(longlong **)(local_58 + 0x38),param_3);
      }
      (**(code **)(*param_1 + 0x308))(param_1,param_2,param_3);
      uVar7 = (ulonglong)local_60;
    }
    goto LAB_143f462f5;
  }
LAB_143f462b3:
  lVar6 = lVar6 + 0x28;
  if (lVar6 == local_68 + uVar7 * 0x28) goto LAB_143f462f5;
  goto LAB_143f4624d;
}



// FUNCTION 143f46312 FUN_143f46312 body=401 status=ok
// SIG undefined FUN_143f46312(void)

void FUN_143f46312(longlong *param_1,undefined4 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  longlong local_68;
  uint local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1459ca5e2(param_1,&local_58,param_2);
  if ((local_58 != 0) && (*(longlong *)(local_58 + 0x38) != 0)) {
    FUN_1459b137e(param_1,&local_68,param_2);
    uVar7 = (ulonglong)(int)local_60;
    if (uVar7 != 0) {
      iVar5 = (int)param_3[1];
      lVar6 = local_68;
LAB_143f463df:
      if (iVar5 != *(int *)(lVar6 + 0x18)) {
        if (*(int *)(lVar6 + 0x18) + iVar5 == 1) goto LAB_143f46455;
        goto LAB_143f46445;
      }
      if (1 < iVar5) {
        lVar9 = 0;
        do {
          uVar3 = *(ushort *)(*param_3 + lVar9);
          uVar4 = *(ushort *)(*(longlong *)(lVar6 + 0x10) + lVar9);
          if (uVar3 == uVar4) {
            if (uVar3 == 0) break;
          }
          else {
            if (0x7f < (uVar4 | uVar3)) {
              iVar8 = (uint)uVar3 - (uint)uVar4;
              goto LAB_143f46436;
            }
            if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[(uint)uVar4]) goto code_r0x000143f46433;
          }
          lVar9 = lVar9 + 2;
        } while( true );
      }
      goto LAB_143f46455;
    }
    uVar7 = 0;
LAB_143f46487:
    FUN_1459b117c(local_68,uVar7);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000143f46433:
  iVar8 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar4];
LAB_143f46436:
  if (iVar8 == 0) {
LAB_143f46455:
    if (lVar6 != 0) {
      if (*(char *)(lVar6 + 0x20) == '\0') {
        (**(code **)(**(longlong **)(local_58 + 0x38) + 0x78))
                  (*(longlong **)(local_58 + 0x38),param_3);
      }
      (**(code **)(*param_1 + 0x310))(param_1,param_2,param_3);
      uVar7 = (ulonglong)local_60;
    }
    goto LAB_143f46487;
  }
LAB_143f46445:
  lVar6 = lVar6 + 0x28;
  if (lVar6 == local_68 + uVar7 * 0x28) goto LAB_143f46487;
  goto LAB_143f463df;
}



// FUNCTION 143f464a4 FUN_143f464a4 body=498 status=ok
// SIG undefined FUN_143f464a4(void)

void FUN_143f464a4(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = (**(code **)(*param_1 + 0x180))();
  lVar5 = FUN_14127aa70(uVar4,param_2);
  if (lVar5 == 0) {
    if ((char)param_3 == '\0') goto LAB_143f46514;
  }
  else {
    cVar3 = FUN_148a9568e(lVar5);
    if (cVar3 == (char)param_3) goto LAB_143f46514;
  }
  lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((((lVar5 != 0) && (*(longlong *)(lVar5 + 0x1f0) != 0)) &&
      (lVar5 = FUN_141030f66(), lVar5 != 0)) && (lVar5 = *(longlong *)(lVar5 + 0x30), lVar5 != 0)) {
    FUN_143f46698(param_1,param_2,param_3);
    cVar3 = FUN_148a69346(lVar5,param_2);
    if ((cVar3 != '\0') && (cVar3 = FUN_1457e1d32(lVar5,param_2), cVar3 == '\0')) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar2 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b438ba0;
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
      local_48[2] = lVar6;
      *local_48 = &PTR_FUN_14b4f6700;
      local_48[3] = 0;
      iVar8 = 0;
      if (param_1 != (longlong *)0x0) {
        uVar1 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_48 + 3) = uVar1;
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
          iVar7 = DAT_14c964868 + 1;
          bVar10 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar8;
          if (bVar10) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar7);
          }
          LOCK();
          iVar8 = *(int *)(lVar9 + 0x10);
          bVar10 = iVar8 == 0;
          if (bVar10) {
            *(int *)(lVar9 + 0x10) = iVar7;
            iVar8 = 0;
          }
          UNLOCK();
          if (bVar10) {
            iVar8 = iVar7;
          }
        }
      }
      *(int *)((longlong)puVar2 + 0x1c) = iVar8;
      puVar2[4] = FUN_143f46698;
      FUN_148a693bc(lVar5,param_2,&local_48);
    }
  }
LAB_143f46514:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f46698 FUN_143f46698 body=738 status=ok
// SIG undefined FUN_143f46698(void)

void FUN_143f46698(longlong *param_1,undefined4 param_2,char param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined1 auStack_98 [40];
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar7 = (**(code **)(*param_1 + 0x180))();
  lVar8 = FUN_14127aa70(uVar7,param_2);
  if (lVar8 != 0) {
    cVar4 = FUN_14101d5a6(param_1);
    if ((*(char *)(lVar8 + 0x25) == '\0') || (*(char *)(lVar8 + 0x24) != param_3)) {
      *(char *)(lVar8 + 0x24) = param_3;
      *(undefined1 *)(lVar8 + 0x25) = 1;
      FUN_1459703e8(lVar8);
    }
    cVar5 = FUN_14101d5a6(param_1);
    if ((((cVar4 == '\0' && cVar5 == '\x01') &&
         (lVar8 = (**(code **)(*param_1 + 0x180))(param_1), lVar8 != 0)) &&
        (*(longlong *)(lVar8 + 0x1f0) != 0)) &&
       ((lVar8 = FUN_141030f66(), lVar8 != 0 && (lVar8 = *(longlong *)(lVar8 + 0x30), lVar8 != 0))))
    {
      FUN_145af3e6e(param_1,&local_58);
      iVar14 = 0;
      if ((longlong)local_50 != 0) {
        local_68 = local_58 + (longlong)local_50 * 2;
        plVar11 = local_58;
        local_70 = param_1;
        do {
          lVar3 = *plVar11;
          iVar14 = *(int *)(lVar3 + 0xd8);
          local_60 = plVar11;
          if (iVar14 == 0) {
            uVar20 = 1;
            uVar16 = 0;
            iVar15 = 0;
            iVar6 = 0;
          }
          else {
            puVar9 = *(uint **)(lVar3 + 0xd0);
            if (*(uint **)(lVar3 + 0xd0) == (uint *)0x0) {
              puVar9 = (uint *)(lVar3 + 0xc0);
            }
            uVar10 = *puVar9;
            if (uVar10 == 0) {
              iVar6 = iVar14 + 0x1e;
              if (-1 < iVar14 + -1) {
                iVar6 = iVar14 + -1;
              }
              uVar16 = 0;
              uVar20 = (ulonglong)(uint)(iVar6 >> 5);
              if (iVar6 >> 5 < 1) {
                uVar20 = uVar16;
              }
              iVar15 = 0;
              do {
                if (uVar20 == uVar16) goto LAB_143f46841;
                iVar15 = iVar15 + 0x20;
                uVar10 = puVar9[uVar16 + 1];
                uVar16 = uVar16 + 1;
              } while (uVar10 == 0);
            }
            else {
              uVar16 = 0;
              iVar15 = 0;
            }
            uVar20 = (ulonglong)(-uVar10 & uVar10);
            uVar1 = uVar20 * 2 + 1;
            lVar18 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            iVar6 = (iVar15 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
            if (iVar14 <= iVar6) {
              iVar6 = iVar14;
            }
          }
          if (iVar6 != iVar14) {
            uVar10 = 0xffffffff;
            do {
              FUN_145ebf3fc(lVar8,(longlong)iVar6 * 0x18 + *(longlong *)(lVar3 + 0xb0),DAT_14cb978e0
                           );
              uVar10 = ~(uint)uVar20 & uVar10;
              puVar9 = *(uint **)(lVar3 + 0xd0);
              if (*(uint **)(lVar3 + 0xd0) == (uint *)0x0) {
                puVar9 = (uint *)(lVar3 + 0xc0);
              }
              iVar2 = *(int *)(lVar3 + 0xd8);
              iVar6 = (int)uVar16;
              lVar18 = (longlong)iVar6;
              uVar17 = puVar9[lVar18] & uVar10;
              if (uVar17 == 0) {
                iVar12 = iVar2 + 0x1e;
                if (-1 < iVar2 + -1) {
                  iVar12 = iVar2 + -1;
                }
                iVar12 = iVar12 >> 5;
                iVar15 = iVar15 + 0x20;
                iVar13 = iVar12;
                if (iVar12 < iVar6) {
                  iVar13 = iVar6;
                }
                if (iVar6 < iVar12) {
                  lVar19 = 0;
                  do {
                    uVar17 = puVar9[lVar18 + lVar19 + 1];
                    if (uVar17 != 0) {
                      uVar16 = (ulonglong)(iVar6 + (int)lVar19 + 1);
                      uVar10 = 0xffffffff;
                      goto LAB_143f468ff;
                    }
                    iVar15 = iVar15 + 0x20;
                    lVar19 = lVar19 + 1;
                  } while (iVar13 - lVar18 != lVar19);
                  uVar10 = 0xffffffff;
                  iVar6 = iVar13;
                }
                uVar16 = (ulonglong)(iVar6 + 1);
                iVar6 = iVar2;
              }
              else {
LAB_143f468ff:
                uVar20 = (ulonglong)(-uVar17 & uVar17);
                uVar1 = uVar20 * 2 + 1;
                lVar18 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                  }
                }
                iVar6 = (iVar15 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
                if (iVar2 <= iVar6) {
                  iVar6 = iVar2;
                }
              }
            } while (iVar6 != iVar14);
          }
LAB_143f46841:
          plVar11 = local_60 + 2;
          param_1 = local_70;
          iVar14 = local_50;
        } while (plVar11 != local_68);
      }
      FUN_145af3e23(local_58,iVar14);
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_1458eaba4(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f4697b FUN_143f4697b body=69 status=ok
// SIG undefined FUN_143f4697b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f4697b(void)

{
  _DAT_14cb978e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f469bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb978f0,1);
  return;
}



// FUNCTION 143f469c0 FUN_143f469c0 body=69 status=ok
// SIG undefined FUN_143f469c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f469c0(void)

{
  _DAT_14cb978f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f46a02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb97900,1);
  return;
}



// FUNCTION 143f46a06 FUN_143f46a06 body=1402 status=ok
// SIG undefined FUN_143f46a06(void)

void FUN_143f46a06(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined1 auStack_b8 [32];
  undefined8 **local_98;
  longlong *local_88;
  int local_80;
  longlong *local_78;
  longlong *plStack_70;
  undefined8 *local_68;
  int local_60;
  longlong local_58 [2];
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar6 = *(int *)(param_1 + 9);
LAB_143f46a35:
  switch(iVar6) {
  case 0:
    lVar8 = (**(code **)(*(longlong *)param_1[6] + 0x180))();
    if (((lVar8 != 0) && (*(longlong *)(lVar8 + 0x1f0) != 0)) &&
       ((lVar8 = FUN_141030f66(), lVar8 != 0 && (*(longlong *)(lVar8 + 0x30) != 0)))) {
      cVar5 = FUN_1457e1d32(*(longlong *)(lVar8 + 0x30),*(undefined4 *)(param_1[7] + 0x30));
      goto LAB_143f46a95;
    }
    break;
  case 1:
    cVar5 = (**(code **)(*(longlong *)param_1[6] + 0x2f0))();
LAB_143f46a95:
    if (cVar5 != '\0') goto LAB_143f46a99;
    break;
  case 2:
    goto switchD_143f46a47_caseD_2;
  case 3:
    lVar8 = param_1[7];
    if (*(longlong *)(lVar8 + 0x38) == 0) {
      *(undefined4 *)(param_1 + 9) = 5;
      goto LAB_143f46ab9;
    }
    (**(code **)(*(longlong *)param_1[6] + 0x180))();
    local_48 = (undefined8 *)0x0;
    plVar9 = (longlong *)FUN_1401e3228();
    if (plVar9 == (longlong *)0x0) {
      local_78 = (longlong *)0x0;
      plStack_70 = (longlong *)0x0;
      uVar11 = 0xffffffff;
    }
    else {
      (**(code **)(*plVar9 + 0x80))(plVar9,&local_78);
      uVar11 = 0xffffffff;
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x180))(local_78,&local_48,*(undefined4 *)(param_1[7] + 0x30));
        uVar11 = local_48._0_4_;
      }
    }
    plVar9 = *(longlong **)(param_1[7] + 0x38);
    FUN_146586e80(&local_48,param_1);
    plVar2 = *(longlong **)(param_1[7] + 0x18);
    plVar3 = *(longlong **)(param_1[7] + 0x20);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if ((plVar2 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar2 + 0x28))(plVar2), cVar5 == '\0')) {
      local_58[0] = 0;
      local_58[1] = 0;
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,local_58);
    }
    local_98 = &local_48;
    (**(code **)(*plVar9 + 0xa0))(plVar9,uVar11,local_58,param_1 + 2);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (local_40 == 0) {
LAB_143f46d67:
      if (local_48 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_48 != (undefined8 *)0x0) {
      (**(code **)*local_48)(local_48,0);
      FUN_1446efa72(&local_48,0,0,0x10);
      local_40 = 0;
      goto LAB_143f46d67;
    }
    plVar9 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_70 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    goto switchD_143f46a47_default;
  case 4:
    FUN_146586a58(param_1[6]);
LAB_143f46a99:
    iVar6 = *(int *)(param_1 + 9) + 1;
    *(int *)(param_1 + 9) = iVar6;
    goto LAB_143f46a35;
  case 5:
    if ((*(int *)(param_1 + 5) != 0) && (param_1[4] != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
    }
  default:
    goto switchD_143f46a47_default;
  }
  *(undefined4 *)(param_1 + 9) = 5;
  lVar8 = param_1[7];
LAB_143f46ab9:
  *(undefined4 *)(lVar8 + 0x28) = 0;
  if ((*(int *)(param_1 + 5) != 0) && (param_1[4] != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
  }
  goto switchD_143f46a47_default;
switchD_143f46a47_caseD_2:
  FUN_146586c9c(&local_88,param_1);
  plVar9 = (longlong *)FUN_140773fe2();
  if (plVar9 == (longlong *)0x0) {
LAB_143f46bcb:
    local_78 = (longlong *)0x0;
    plStack_70 = (longlong *)0x0;
    if (((local_80 != 0) && (local_88 != (longlong *)0x0)) &&
       ((**(code **)(*local_88 + 0x60))(local_88,*(undefined4 *)(param_1[7] + 0x30),&local_78),
       local_78 != (longlong *)0x0)) {
      FUN_1400020a8();
    }
  }
  else {
    uVar7 = (**(code **)(*(longlong *)param_1[6] + 0x180))();
    lVar8 = (**(code **)(*plVar9 + 0x2d0))(plVar9,*(undefined4 *)(param_1[7] + 0x30),uVar7);
    if (lVar8 == 0) goto LAB_143f46bcb;
    if (*(int *)(param_1[6] + 0x40) == 0) {
      if (local_80 != 0) {
        if (local_88 == (longlong *)0x0) goto switchD_143f46a47_default;
        (**(code **)(*local_88 + 0x60))(local_88,*(undefined4 *)(param_1[7] + 0x30),lVar8 + 0x250);
      }
    }
    else {
      if (*(int *)(param_1[6] + 0x40) != 1) goto LAB_143f46bcb;
      local_78 = (longlong *)*param_1;
      plStack_70 = (longlong *)param_1[1];
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plStack_70 + 0xc) = *(int *)((longlong)plStack_70 + 0xc) + 1;
        UNLOCK();
      }
      local_68 = (undefined8 *)0x0;
      local_60 = 0;
      FUN_141509b10(&local_68,&local_88);
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,4,0x10);
      local_40 = 4;
      *local_48 = &PTR_LAB_14b4f6d50;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_48[2] = lVar10;
      *local_48 = &PTR_FUN_14b4f6ce0;
      local_48[3] = local_78;
      local_48[4] = plStack_70;
      local_78 = (longlong *)0x0;
      plStack_70 = (longlong *)0x0;
      local_48[5] = local_68;
      local_68 = (undefined8 *)0x0;
      *(int *)(local_48 + 6) = local_60;
      local_60 = 0;
      FUN_14657df61(lVar8,&local_48);
      if (local_60 == 0) {
LAB_143f46f4d:
        if (local_68 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_68 != (undefined8 *)0x0) {
        (**(code **)*local_68)(local_68,0);
        FUN_1446efa72(&local_68,0,0,0x10);
        local_60 = 0;
        goto LAB_143f46f4d;
      }
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plStack_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plStack_70 + 0x10))();
        }
      }
    }
  }
  if (local_80 != 0) {
    if (local_88 == (longlong *)0x0) goto switchD_143f46a47_default;
    (**(code **)*local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    local_80 = 0;
  }
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
switchD_143f46a47_default:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f46faa FUN_143f46faa body=1487 status=ok
// SIG undefined FUN_143f46faa(void)

void FUN_143f46faa(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStack_e8 [32];
  undefined8 **local_c8;
  undefined1 *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  int local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 *local_88;
  longlong *plStack_80;
  undefined1 local_6c [16];
  undefined1 local_5c;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  puVar8 = param_1 + 7;
  plVar5 = param_1 + 5;
  iVar3 = *(int *)(param_1 + 0xb);
LAB_143f46fe0:
  if (iVar3 == 0) {
    if ((*(int *)(*plVar5 + 0x28) != 2) || (cVar2 = FUN_146586832(param_1[4],plVar5), cVar2 != '\0')
       ) goto LAB_143f470a3;
LAB_143f47008:
    iVar3 = *(int *)(param_1 + 0xb) + 1;
    *(int *)(param_1 + 0xb) = iVar3;
    goto LAB_143f46fe0;
  }
  switch(iVar3) {
  case 1:
    local_b0 = (longlong *)param_1[1];
    if (local_b0 != (longlong *)0x0) {
      iVar3 = (int)local_b0[1];
      local_b8 = 0;
      goto LAB_143f47111;
    }
    local_b0 = (longlong *)0x0;
    local_b8 = 0;
    goto LAB_143f47145;
  case 2:
    plVar5 = *(longlong **)(*plVar5 + 0x38);
    if (plVar5 != (longlong *)0x0) {
      local_5c = 0;
      plVar9 = (longlong *)param_1[1];
      if (plVar9 != (longlong *)0x0) {
        iVar3 = (int)plVar9[1];
        local_88 = (undefined8 *)0x0;
        goto LAB_143f47129;
      }
      plVar9 = (longlong *)0x0;
      local_88 = (undefined8 *)0x0;
      goto LAB_143f4725c;
    }
LAB_143f470a3:
    *(undefined4 *)(param_1 + 0xb) = 4;
    if ((*(int *)(param_1 + 3) != 0) && (param_1[2] != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_e8);
    }
    break;
  case 3:
    FUN_145f836a4(param_1[4],puVar8);
    goto LAB_143f47008;
  case 4:
    if ((*(int *)(param_1 + 3) != 0) && (param_1[2] != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_e8);
    }
  default:
    break;
  }
  goto switchD_143f47024_default;
  while( true ) {
    LOCK();
    iVar4 = (int)plVar9[1];
    bVar15 = iVar3 == iVar4;
    if (bVar15) {
      *(int *)(plVar9 + 1) = iVar3 + 1;
      iVar4 = iVar3;
    }
    iVar3 = iVar4;
    UNLOCK();
    if (bVar15) break;
LAB_143f47129:
    if (iVar3 == 0) {
      plVar9 = (longlong *)0x0;
      goto LAB_143f4725c;
    }
  }
  local_88 = (undefined8 *)*param_1;
LAB_143f4725c:
  plStack_80 = plVar9;
  FUN_146587150(&local_58);
  local_c0 = local_6c;
  local_c8 = &local_58;
  (**(code **)(*plVar5 + 0xe8))(plVar5,puVar8,param_1 + 9,0);
  if ((int)uStack_50 == 0) {
LAB_143f472dd:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    uStack_50 = (longlong *)((ulonglong)uStack_50._4_4_ << 0x20);
    goto LAB_143f472dd;
  }
  if (plVar9 == (longlong *)0x0) goto switchD_143f47024_default;
  LOCK();
  plVar5 = plVar9 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 != 0) goto switchD_143f47024_default;
  (**(code **)*plVar9)(plVar9);
  LOCK();
  piVar1 = (int *)((longlong)plVar9 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 != 0) goto switchD_143f47024_default;
  lVar7 = *plVar9;
  goto LAB_143f4730d;
  while( true ) {
    LOCK();
    iVar4 = (int)local_b0[1];
    bVar15 = iVar3 == iVar4;
    if (bVar15) {
      *(int *)(local_b0 + 1) = iVar3 + 1;
      iVar4 = iVar3;
    }
    iVar3 = iVar4;
    UNLOCK();
    if (bVar15) break;
LAB_143f47111:
    if (iVar3 == 0) {
      local_b0 = (longlong *)0x0;
      goto LAB_143f47145;
    }
  }
  local_b8 = *param_1;
LAB_143f47145:
  FUN_146587026(&local_a8);
  plVar5 = (longlong *)FUN_140773fe2();
  if (plVar5 == (longlong *)0x0) {
LAB_143f471a8:
    local_58 = (undefined8 *)0x0;
    uStack_50 = (longlong *)0x0;
    if ((local_a0 != 0) && (local_a8 != (longlong *)0x0)) {
      (**(code **)(*local_a8 + 0x60))(local_a8,&local_58);
      puVar8 = local_58;
      goto LAB_143f471d8;
    }
  }
  else {
    uVar6 = (**(code **)(*(longlong *)param_1[4] + 0x180))();
    lVar7 = (**(code **)(*plVar5 + 0x2d0))(plVar5,*(undefined4 *)(param_1[5] + 0x30),uVar6);
    if (((lVar7 == 0) || (*(int *)(param_1[4] + 0x40) == 0)) || (*(int *)(param_1[4] + 0x40) != 1))
    goto LAB_143f471a8;
    if (*(int *)(param_1 + 8) == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    else {
      puVar10 = (undefined2 *)*puVar8;
    }
    iVar4 = FUN_144a1ccda(puVar10,0);
    local_88 = (undefined8 *)0x0;
    plStack_80 = (longlong *)0x0;
    lVar12 = 0xf;
    lVar11 = 0x1000000000;
    iVar14 = 0x10;
    iVar3 = iVar4;
    do {
      lVar11 = lVar11 + -0x100000000;
      *(undefined2 *)((longlong)&local_58 + lVar12 * 2) =
           *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar3 % 10) * 2);
      uVar13 = iVar3 + 9;
      lVar12 = lVar12 + -1;
      iVar14 = iVar14 + -1;
      iVar3 = iVar3 / 10;
    } while (0x12 < uVar13);
    if (iVar4 < 0) {
      iVar14 = (int)lVar12;
      lVar11 = (longlong)iVar14;
      *(undefined2 *)((longlong)&local_58 + lVar11 * 2) = 0x2d;
    }
    else {
      lVar11 = lVar11 >> 0x20;
    }
    FUN_1400020e8(&local_88,(longlong)&local_58 + lVar11 * 2,0x10 - iVar14);
    local_58 = (undefined8 *)*param_1;
    uStack_50 = (longlong *)param_1[1];
    if (uStack_50 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)uStack_50 + 0xc) = *(int *)((longlong)uStack_50 + 0xc) + 1;
      UNLOCK();
    }
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_146281d3c(&local_48,&local_a8);
    local_98 = (undefined8 *)0x0;
    local_90 = 0;
    FUN_1446efa72(&local_98,0,4,0x10);
    local_90 = 4;
    *local_98 = &PTR_LAB_14b4f6d50;
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 1;
    lVar11 = DAT_14c758608 + 1;
    if (lVar12 == 0) {
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 2;
      lVar11 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar11;
    local_98[2] = lVar12;
    *local_98 = &PTR_FUN_14b4f6f80;
    local_98[3] = local_58;
    local_98[4] = uStack_50;
    local_58 = (undefined8 *)0x0;
    uStack_50 = (longlong *)0x0;
    local_98[5] = local_48;
    local_48 = (undefined8 *)0x0;
    *(int *)(local_98 + 6) = local_40;
    local_40 = 0;
    FUN_1461f98b3(lVar7,&local_88,&local_98);
    if (local_40 == 0) {
LAB_143f47533:
      if (local_48 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_48 != (undefined8 *)0x0) {
      (**(code **)*local_48)(local_48,0);
      FUN_1446efa72(&local_48,0,0,0x10);
      local_40 = 0;
      goto LAB_143f47533;
    }
    puVar8 = local_88;
    if (uStack_50 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)uStack_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*uStack_50 + 0x10))();
        puVar8 = local_88;
      }
    }
LAB_143f471d8:
    if (puVar8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_a0 == 0) {
LAB_143f4721c:
    if (local_a8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (longlong *)0x0) {
    (**(code **)*local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_143f4721c;
  }
  plVar9 = local_b0;
  if (local_b0 == (longlong *)0x0) goto switchD_143f47024_default;
  LOCK();
  plVar5 = local_b0 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 != 0) goto switchD_143f47024_default;
  (**(code **)*local_b0)(local_b0);
  LOCK();
  piVar1 = (int *)((longlong)plVar9 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 != 0) goto switchD_143f47024_default;
  lVar7 = *plVar9;
LAB_143f4730d:
  (**(code **)(lVar7 + 0x10))(plVar9);
switchD_143f47024_default:
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f475c8 FUN_143f475c8 body=104 status=ok
// SIG undefined FUN_143f475c8(void)

undefined8 FUN_143f475c8(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar1 = *(uint *)(param_1 + 0x30);
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) {
      return 0;
    }
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == *(int *)(param_1 + 0x34))) &&
       ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar2;
      }
      else {
        lVar3 = 0;
      }
      if (*(longlong *)(lVar3 + 0x30) != 0) {
        return *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + 0x360);
      }
    }
  }
  return 0;
}



// FUNCTION 143f4764a FUN_143f4764a body=832 status=ok
// SIG undefined FUN_143f4764a(void)

void FUN_143f4764a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 *local_58;
  int local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(int *)(param_1 + 0x4c) < 0) || (*(int *)(param_1 + 0x28) <= *(int *)(param_1 + 0x4c))) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x18) = 1;
    goto LAB_143f47818;
  }
  plVar9 = (longlong *)FUN_140a68038(1);
  if (plVar9 == (longlong *)0x0) {
    local_40 = (longlong *)0x0;
LAB_143f4783f:
    *(undefined4 *)(param_1 + 0x50) = 4;
    *(undefined1 *)(param_1 + 0x18) = 1;
    plVar10 = local_40;
  }
  else {
    (**(code **)(*plVar9 + 0x80))(plVar9,&local_48);
    plVar10 = local_40;
    plVar9 = local_48;
    if (local_48 == (longlong *)0x0) goto LAB_143f4783f;
    (**(code **)(*local_48 + 0x110))
              (local_48,&local_48,
               *(undefined4 *)
                (*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x4c) * 4));
    plVar5 = local_40;
    plVar1 = local_48;
    if (local_48 == (longlong *)0x0) {
      *(undefined4 *)(param_1 + 0x50) = 4;
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
    else {
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,4,0x10);
      local_50 = 4;
      plVar3 = *(longlong **)(param_1 + 0x10);
      if (plVar3 == (longlong *)0x0) {
LAB_143f4786e:
        *local_58 = &PTR_LAB_14b4e4c90;
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 1;
        lVar7 = DAT_14c758608 + 1;
        if (lVar11 == 0) {
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 2;
          lVar7 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar7;
        local_58[2] = lVar11;
        *local_58 = &PTR_FUN_14b4f7140;
        local_58[3] = 0;
        local_58[4] = 0;
        local_58[5] = param_1;
        local_58[6] = plVar1;
        local_58[7] = plVar5;
      }
      else {
        iVar8 = (int)plVar3[1];
        do {
          if (iVar8 == 0) goto LAB_143f4786e;
          LOCK();
          iVar6 = (int)plVar3[1];
          bVar12 = iVar8 == iVar6;
          if (bVar12) {
            *(int *)(plVar3 + 1) = iVar8 + 1;
            iVar6 = iVar8;
          }
          iVar8 = iVar6;
          UNLOCK();
        } while (!bVar12);
        uVar4 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        *local_58 = &PTR_LAB_14b4e4c90;
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 1;
        lVar7 = DAT_14c758608 + 1;
        if (lVar11 == 0) {
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 2;
          lVar7 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar7;
        local_58[2] = lVar11;
        *local_58 = &PTR_FUN_14b4f7140;
        local_58[3] = uVar4;
        local_58[4] = plVar3;
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        local_58[5] = param_1;
        local_58[6] = plVar1;
        local_58[7] = plVar5;
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
      local_68 = 0;
      (**(code **)(*plVar9 + 0x170))(plVar9,local_48,4,&local_58);
      if (local_50 != 0) {
        if (local_58 == (undefined8 *)0x0) goto LAB_143f4792b;
        (**(code **)*local_58)(local_58,0);
        FUN_1446efa72(&local_58,0,0,0x10);
        local_50 = 0;
      }
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
LAB_143f4792b:
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_40 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
        }
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar10 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
LAB_143f47818:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f4798c FUN_143f4798c body=761 status=ok
// SIG undefined FUN_143f4798c(void)

void FUN_143f4798c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(int *)(*(longlong *)(param_1 + 0x28) + 0x18) == 1))
  goto LAB_143f479b6;
  FUN_148aac3a2(param_1);
  local_50 = (undefined8 *)0x0;
  plVar5 = (longlong *)FUN_1401e3228();
  if (plVar5 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_38);
    if (local_38 != (longlong *)0x0) {
      plVar5 = (longlong *)FUN_148ab55ca();
      if (plVar5 == (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x28) = 0x10;
        plVar7 = *(longlong **)(param_1 + 0x30);
        if (plVar7 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x30) = 0;
LAB_143f47ab2:
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
          if (plVar5 != (longlong *)0x0) goto LAB_143f47ad4;
        }
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *(longlong **)(param_1 + 0x28) = plVar5 + 2;
        plVar7 = *(longlong **)(param_1 + 0x30);
        if (plVar5 == plVar7) {
          LOCK();
          plVar7 = plVar5 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
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
        else {
          *(longlong **)(param_1 + 0x30) = plVar5;
          if (plVar7 != (longlong *)0x0) goto LAB_143f47ab2;
        }
LAB_143f47ad4:
        LOCK();
        plVar7 = plVar5 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
      plVar5 = local_38;
      *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x78) = 1;
      *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x1c) = 0x14;
      *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x84) = 0x40000000;
      local_50 = (undefined8 *)0x0;
      local_48._0_4_ = 0;
      FUN_1446efa72(&local_50,0,3,0x10);
      local_48._0_4_ = 3;
      *local_50 = &PTR_LAB_149e06450;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_50[2] = lVar6;
      *local_50 = &PTR_FUN_14b4f7240;
      local_50[3] = param_1;
      local_50[4] = FUN_143f47c86;
      (**(code **)(*plVar5 + 0x188))(plVar5,&local_40,&local_50);
      *(undefined8 *)(param_1 + 0x40) = local_40;
      if ((int)local_48 == 0) {
LAB_143f47be7:
        if (local_50 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_50 != (undefined8 *)0x0) {
        (**(code **)*local_50)(local_50,0);
        FUN_1446efa72(&local_50,0,0,0x10);
        local_48._0_4_ = 0;
        goto LAB_143f47be7;
      }
      uVar4 = FUN_148aac3ce(param_1);
      local_50 = *(undefined8 **)(param_1 + 0x28);
      local_48 = *(longlong **)(param_1 + 0x30);
      if (local_48 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_48 + 1) = (int)local_48[1] + 1;
        UNLOCK();
      }
      (**(code **)(*local_38 + 0x180))(local_38,uVar4,&local_50);
      plVar5 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_48 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      FUN_1447f69b6(param_1 + 8);
    }
  }
  plVar5 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_30 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_143f479b6:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f47c86 FUN_143f47c86 body=198 status=ok
// SIG undefined FUN_143f47c86(void)

void FUN_143f47c86(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148aac3a2();
  local_28 = 0;
  plVar3 = (longlong *)FUN_1401e3228();
  if (plVar3 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 400))(local_38,param_1 + 0x40);
    }
  }
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_2 != '\0') {
    FUN_148aac412(param_1);
  }
  FUN_1447f69b6(param_1 + 8);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f47d4d FUN_143f47d4d body=49 status=ok
// SIG undefined FUN_143f47d4d(void)

void FUN_143f47d4d(void)

{
  FUN_145fee2f2(DAT_14cb97908,DAT_14cb97910);
  if (DAT_14cb97908 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143f47db2 FUN_143f47db2 body=375 status=ok
// SIG undefined FUN_143f47db2(void)

void FUN_143f47db2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145e1aa6e(*(undefined8 *)(param_1 + 8),&local_38);
  plVar3 = local_30;
  if (local_38 != 0) {
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    FUN_14101cdd4(local_38 + 0x20,&DAT_14cb977e0,&local_48);
    iVar4 = (int)plStack_40;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
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
    plVar3 = local_30;
    if (1 < iVar4) {
      local_48 = local_38;
      plStack_40 = local_30;
      if (local_30 == (longlong *)0x0) {
        FUN_145c7de4a(param_1,&local_48);
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        FUN_145c7de4a(param_1);
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
      }
      if (*(int *)(param_1 + 0x154) == 0) {
        *(undefined4 *)(param_1 + 0x154) = 1;
        FUN_143f48db6(param_1);
      }
      else if (*(int *)(param_1 + 0x158) != 3) {
        *(undefined4 *)(param_1 + 0x158) = 1;
      }
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f47f2a FUN_143f47f2a body=1512 status=ok
// SIG undefined FUN_143f47f2a(void)

void FUN_143f47f2a(longlong param_1)

{
  int *piVar1;
  void *_Src;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  ushort uVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  ushort uVar14;
  ulonglong uVar15;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong *plStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_70 [2];
  longlong local_60 [2];
  undefined2 *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar6 = FUN_1414e62ca(*(undefined8 *)(param_1 + 8));
  if ((cVar6 != '\0') || (lVar7 = FUN_140a68038(0), lVar7 == 0)) goto LAB_143f484e3;
  puVar8 = (undefined8 *)FUN_14101d2ea();
  local_50 = (undefined2 *)0x0;
  local_48 = *(int *)(puVar8 + 1);
  lVar7 = (longlong)local_48;
  _Src = (void *)*puVar8;
  if (lVar7 == 0) {
    local_44 = 0;
LAB_143f47fdb:
    puVar10 = &DAT_149dfb77a;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar7 * 2);
    puVar10 = local_50;
    if (local_48 == 0) goto LAB_143f47fdb;
  }
  puVar13 = &DAT_149dfb77a;
  if (DAT_14cb97938 != 0) {
    puVar13 = DAT_14cb97930;
  }
  FUN_140002266(local_60,L"%s.%s",puVar13,puVar10);
  puVar10 = &DAT_149dfb77a;
  if (DAT_14cb97948 != 0) {
    puVar10 = DAT_14cb97940;
  }
  FUN_140002266(local_70,L"%s.%s",puVar10);
  local_88 = 0;
  uStack_80 = 0;
  cVar6 = FUN_14101cdd4(*(longlong *)(param_1 + 8) + 0x80,local_60);
  if (cVar6 == '\0') {
    bVar4 = false;
  }
  else {
    plVar9 = *(longlong **)(param_1 + 0x160);
    if (plVar9 == (longlong *)0x0) {
      FUN_140056680(&local_98,&DAT_149dfb77a);
    }
    else {
      (**(code **)(*plVar9 + 0x30))(plVar9,&local_98);
    }
    if ((int)uStack_80 == (int)uStack_90) {
      if (1 < (int)uStack_80) {
        lVar7 = 0;
        while( true ) {
          uVar14 = *(ushort *)(local_88 + lVar7);
          uVar15 = (ulonglong)uVar14;
          uVar11 = *(ushort *)(local_98 + lVar7);
          if (uVar14 != uVar11) break;
          if (uVar14 == 0) goto LAB_143f4815c;
LAB_143f480de:
          lVar7 = lVar7 + 2;
        }
        if ((uVar11 | uVar14) < 0x80) {
          uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
          uVar12 = (ulonglong)uVar11;
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar12]) goto LAB_143f480de;
        }
        if (uVar14 != uVar11) goto LAB_143f48109;
      }
LAB_143f4815c:
      bVar4 = false;
    }
    else {
      if ((int)uStack_90 + (int)uStack_80 == 1) goto LAB_143f4815c;
LAB_143f48109:
      if ((int)uStack_80 < 2) {
        *(undefined8 *)(param_1 + 0x160) = 0;
        plVar9 = *(longlong **)(param_1 + 0x168);
        bVar4 = true;
        if (plVar9 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x168) = 0;
          LOCK();
          plVar2 = plVar9 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
      }
      else {
        FUN_1446f470e(&local_b0,L"SHIFT",1);
        local_c0 = local_b0;
        plVar9 = (longlong *)FUN_1401e3228(&local_c0);
        if (plVar9 == (longlong *)0x0) {
          local_a8 = (longlong *)0x0;
          plStack_a0 = (longlong *)0x0;
        }
        else {
          (**(code **)(*plVar9 + 0x80))(plVar9,&local_a8);
          if (local_a8 != (longlong *)0x0) {
            (**(code **)(*local_a8 + 0x120))(local_a8,&local_c0,&local_88);
            plVar9 = local_b8;
            if ((longlong *)(param_1 + 0x160) != &local_c0) {
              *(longlong *)(param_1 + 0x160) = local_c0;
              local_c0 = 0;
              plVar2 = *(longlong **)(param_1 + 0x168);
              if (local_b8 != plVar2) {
                local_b8 = (longlong *)0x0;
                *(longlong **)(param_1 + 0x168) = plVar9;
                if (plVar2 != (longlong *)0x0) {
                  LOCK();
                  plVar9 = plVar2 + 1;
                  *(int *)plVar9 = (int)*plVar9 + -1;
                  UNLOCK();
                  if ((int)*plVar9 == 0) {
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
              }
            }
            plVar9 = local_b8;
            if (local_b8 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_b8 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*local_b8)(local_b8);
                LOCK();
                piVar1 = (int *)((longlong)plVar9 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar9 + 0x10))(plVar9);
                }
              }
            }
          }
        }
        plVar9 = plStack_a0;
        if (plStack_a0 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_a0 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_a0)(plStack_a0);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        bVar4 = true;
      }
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  local_98 = 0;
  uStack_90 = 0;
  cVar6 = FUN_14101cdd4(*(longlong *)(param_1 + 8) + 0x80,local_70);
  if (cVar6 == '\0') {
LAB_143f48203:
    if (bVar4) {
      bVar5 = false;
      goto LAB_143f48226;
    }
  }
  else {
    if ((int)uStack_90 == *(int *)(param_1 + 0x178)) {
      if (1 < (int)uStack_90) {
        lVar7 = 0;
        while( true ) {
          uVar14 = *(ushort *)(local_98 + lVar7);
          uVar15 = (ulonglong)uVar14;
          uVar11 = *(ushort *)(*(longlong *)(param_1 + 0x170) + lVar7);
          if (uVar14 != uVar11) break;
          if (uVar14 == 0) goto LAB_143f48203;
LAB_143f481d0:
          lVar7 = lVar7 + 2;
        }
        if ((uVar11 | uVar14) < 0x80) {
          uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
          uVar12 = (ulonglong)uVar11;
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar12]) goto LAB_143f481d0;
        }
        if (uVar14 != uVar11) goto LAB_143f48214;
      }
      goto LAB_143f48203;
    }
    if (*(int *)(param_1 + 0x178) + (int)uStack_90 == 1) goto LAB_143f48203;
LAB_143f48214:
    iVar3 = (int)uStack_90 + -1;
    if ((int)uStack_90 == 0) {
      iVar3 = 0;
    }
    FUN_1402980a2((longlong *)(param_1 + 0x170),local_98,iVar3);
    bVar5 = true;
LAB_143f48226:
    lVar7 = *(longlong *)(param_1 + 0x160);
    if (lVar7 != 0) {
      plVar9 = *(longlong **)(param_1 + 0x168);
      local_c0 = lVar7;
      local_b8 = plVar9;
      if (plVar9 == (longlong *)0x0) {
        FUN_140b7090e(*(undefined8 *)(param_1 + 8),&local_a8,&local_c0);
      }
      else {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        FUN_140b7090e(*(undefined8 *)(param_1 + 8),&local_a8);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar9 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
      }
      if (local_a8 != (longlong *)0x0) {
        if (*(int *)((longlong)local_a8 + 0x14) == 0) {
          if (bVar4) {
            if (*(int *)(param_1 + 0x154) == 0) {
              *(undefined4 *)(param_1 + 0x154) = 1;
              goto LAB_143f48463;
            }
            if (*(int *)(param_1 + 0x158) != 3) {
              *(undefined4 *)(param_1 + 0x158) = 1;
            }
          }
        }
        else if ((bVar5) && (1 < *(int *)(param_1 + 0x178))) {
          if (*(int *)(param_1 + 0x154) == 0) {
            *(undefined4 *)(param_1 + 0x154) = 2;
LAB_143f48463:
            FUN_143f48db6(param_1);
          }
          else if (*(int *)(param_1 + 0x158) != 3) {
            *(undefined4 *)(param_1 + 0x158) = 2;
          }
        }
      }
      plVar9 = plStack_a0;
      if (plStack_a0 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_a0 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_a0)(plStack_a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
    }
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_143f484e3:
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f48514 FUN_143f48514 body=2208 status=ok
// SIG undefined FUN_143f48514(void)

/* WARNING: Removing unreachable block (ram,0x000143f48818) */

void FUN_143f48514(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  ushort uVar3;
  ushort uVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  undefined8 uVar12;
  void *pvVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  int iVar22;
  int iVar23;
  ulonglong uVar24;
  undefined2 *puVar25;
  longlong *plVar26;
  longlong *plVar27;
  longlong lVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  bool bVar31;
  undefined1 auStack_118 [32];
  longlong local_f8;
  int local_ec;
  longlong *local_e8;
  longlong *local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  longlong local_c8;
  int local_c0;
  longlong *local_b8;
  int local_b0;
  void *local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  longlong lStack_90;
  void *local_88;
  ulonglong uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e8 = param_2;
  if ((*param_2 == 0) || (*(int *)(*param_2 + 0x14) != 0)) goto LAB_143f48d61;
  local_78 = (longlong *)0x0;
  uStack_70 = 0;
  lVar28 = *(longlong *)(param_1 + 8);
  uVar14 = *(uint *)(lVar28 + 0xa8);
  uVar24 = (ulonglong)uVar14;
  local_f8 = param_1;
  if (uVar14 == 0) {
    uVar30 = 1;
    uVar10 = 0;
    iVar22 = 0;
    uVar18 = 0;
  }
  else {
    puVar17 = *(uint **)(lVar28 + 0xa0);
    if (*(uint **)(lVar28 + 0xa0) == (uint *)0x0) {
      puVar17 = (uint *)(lVar28 + 0x90);
    }
    uVar18 = *puVar17;
    if (uVar18 == 0) {
      iVar22 = uVar14 + 0x1e;
      if (-1 < (int)(uVar14 - 1)) {
        iVar22 = uVar14 - 1;
      }
      uVar30 = 0;
      uVar7 = iVar22 >> 5;
      if (iVar22 >> 5 < 1) {
        uVar7 = 0;
      }
      uVar10 = 0;
      iVar22 = 0;
      do {
        if (uVar7 == uVar10) goto LAB_143f48d47;
        iVar22 = iVar22 + 0x20;
        uVar18 = puVar17[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar10 = 0;
      iVar22 = 0;
    }
    uVar30 = (ulonglong)(-uVar18 & uVar18);
    uVar29 = uVar30 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar29 != 0) {
      for (; uVar29 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    uVar18 = (iVar22 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    if ((int)uVar14 <= (int)uVar18) {
      uVar18 = uVar14;
    }
  }
  if ((int)uVar18 < (int)uVar14) {
    uVar14 = 0xffffffff;
    do {
      local_e0 = (longlong *)CONCAT44(local_e0._4_4_,uVar14);
      uVar14 = DAT_14cb97938 - 1;
      if (DAT_14cb97938 == 0) {
        uVar14 = 0;
      }
      puVar11 = &DAT_149dfb77a;
      if (DAT_14cb97938 != 0) {
        puVar11 = DAT_14cb97930;
      }
      if (0 < (int)uVar14) {
        puVar2 = (undefined8 *)(*(longlong *)(lVar28 + 0x80) + (longlong)(int)uVar18 * 0x28);
        iVar9 = *(int *)(puVar2 + 1);
        puVar25 = &DAT_149dfb77a;
        if (iVar9 != 0) {
          puVar25 = (undefined2 *)*puVar2;
        }
        uVar29 = (ulonglong)uVar14;
        lVar20 = 0;
        while( true ) {
          uVar3 = *(ushort *)((longlong)puVar25 + lVar20);
          uVar4 = *(ushort *)((longlong)puVar11 + lVar20);
          local_ec = iVar22;
          local_d0 = uVar24;
          if (uVar3 != uVar4) break;
          if ((uVar3 == 0) || (uVar29 == 1)) goto LAB_143f486e3;
LAB_143f48693:
          uVar29 = uVar29 - 1;
          lVar20 = lVar20 + 2;
        }
        local_d8 = uVar10;
        if ((uVar4 | uVar3) < 0x80) {
          if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[(uint)uVar4]) {
            iVar23 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar4]
            ;
            goto LAB_143f488da;
          }
          if (uVar29 != 1) goto LAB_143f48693;
        }
        else {
          iVar23 = (uint)uVar3 - (uint)uVar4;
LAB_143f488da:
          if (iVar23 != 0) goto LAB_143f48838;
        }
LAB_143f486e3:
        if (1 < *(int *)(*(longlong *)(lVar28 + 0x80) + 0x18 + (longlong)(int)uVar18 * 0x28)) {
          uVar14 = DAT_14cb97938 + (uint)(DAT_14cb97938 == 0);
          puVar11 = &DAT_149dfb77a;
          if (iVar9 != 0) {
            puVar11 = (undefined2 *)*puVar2;
          }
          uVar18 = iVar9 - 1;
          if (iVar9 == 0) {
            uVar18 = 0;
          }
          if ((int)uVar18 <= (int)uVar14) {
            uVar14 = uVar18;
          }
          if ((int)uVar14 < 1) {
            uVar14 = 0;
          }
          FUN_14006620a(&local_88,puVar11 + uVar14,uVar18 - uVar14);
          pvVar13 = local_88;
          local_a8 = (void *)0x0;
          local_98 = 0;
          lStack_90 = 0;
          lVar20 = (longlong)(int)uStack_80;
          uStack_a0 = (longlong *)(uStack_80 & 0xffffffff);
          if (lVar20 != 0) {
            FUN_1446dd670(&local_a8,uStack_80 & 0xffffffff,0);
            memcpy(local_a8,pvVar13,lVar20 * 2);
          }
          uVar24 = uStack_70;
          lVar20 = (longlong)(int)uStack_70;
          uVar14 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar14);
          if (uStack_70._4_4_ < uVar14) {
            FUN_143f4f2f2(&local_78,uVar24 & 0xffffffff);
          }
          local_78[lVar20 * 4] = 0;
          local_78[lVar20 * 4] = (longlong)local_a8;
          *(undefined4 *)(local_78 + lVar20 * 4 + 1) = (undefined4)uStack_a0;
          *(undefined4 *)((longlong)local_78 + lVar20 * 0x20 + 0xc) = uStack_a0._4_4_;
          local_78[lVar20 * 4 + 2] = local_98;
          local_78[lVar20 * 4 + 3] = lStack_90;
          lStack_90 = 0;
          local_98 = 0;
          uStack_a0 = (longlong *)0x0;
          local_a8 = (void *)0x0;
          if (local_88 != (void *)0x0) {
            FUN_1400020a8();
          }
          uVar24 = (ulonglong)*(uint *)(lVar28 + 0xa8);
        }
      }
LAB_143f48838:
      uVar14 = (uint)local_e0 & ~(uint)uVar30;
      puVar17 = *(uint **)(lVar28 + 0xa0);
      if (*(uint **)(lVar28 + 0xa0) == (uint *)0x0) {
        puVar17 = (uint *)(lVar28 + 0x90);
      }
      iVar9 = (int)uVar10;
      lVar20 = (longlong)iVar9;
      uVar18 = puVar17[lVar20] & uVar14;
      iVar23 = (int)uVar24;
      if (uVar18 == 0) {
        iVar15 = iVar23 + 0x1e;
        if (-1 < iVar23 + -1) {
          iVar15 = iVar23 + -1;
        }
        iVar15 = iVar15 >> 5;
        iVar16 = iVar15;
        if (iVar15 < iVar9) {
          iVar16 = iVar9;
        }
        if (iVar15 <= iVar9) break;
        lVar19 = 0;
        while( true ) {
          iVar22 = iVar22 + 0x20;
          uVar18 = puVar17[lVar20 + lVar19 + 1];
          if (uVar18 != 0) break;
          lVar19 = lVar19 + 1;
          if (iVar16 - lVar20 == lVar19) goto LAB_143f48900;
        }
        uVar10 = (ulonglong)(iVar9 + (int)lVar19 + 1);
        uVar14 = 0xffffffff;
      }
      uVar30 = (ulonglong)(-uVar18 & uVar18);
      uVar29 = uVar30 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar29 != 0) {
        for (; uVar29 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      uVar18 = (iVar22 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    } while ((int)uVar18 < iVar23);
LAB_143f48900:
    if ((longlong)(int)uStack_70 == 0) goto LAB_143f48d45;
    plVar27 = local_78 + (longlong)(int)uStack_70 * 4;
    plVar21 = local_78;
    lVar28 = local_f8;
    local_e0 = plVar27;
    do {
      puVar11 = &DAT_149dfb77a;
      if ((int)plVar21[1] != 0) {
        puVar11 = (undefined2 *)*plVar21;
      }
      puVar25 = &DAT_149dfb77a;
      if (DAT_14cb97938 != 0) {
        puVar25 = DAT_14cb97930;
      }
      FUN_140002266(&local_a8,L"%s.%s",puVar25,puVar11);
      local_88 = (void *)0x0;
      uStack_80 = 0;
      cVar8 = FUN_14101cdd4(*(longlong *)(lVar28 + 8) + 0x80,&local_a8);
      if (cVar8 != '\0') {
        FUN_14101cf30(*(undefined8 *)(lVar28 + 8),&local_b8);
        if ((longlong)local_b0 != 0) {
          plVar26 = local_b8 + (longlong)local_b0 * 2;
          plVar27 = local_b8;
          do {
            plVar5 = *(longlong **)*plVar27;
            plVar6 = (longlong *)((undefined8 *)*plVar27)[1];
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
            }
            (**(code **)(*plVar5 + 0x30))(plVar5,&local_c8);
            if (local_c0 == (int)uStack_80) {
              bVar31 = true;
              if (1 < local_c0) {
                lVar28 = 0;
                while( true ) {
                  uVar3 = *(ushort *)(local_c8 + lVar28);
                  uVar14 = (uint)uVar3;
                  uVar4 = *(ushort *)((longlong)local_88 + lVar28);
                  uVar18 = (uint)uVar4;
                  if (uVar3 != uVar4) {
                    if ((uVar4 | uVar3) < 0x80) {
                      uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                      uVar18 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                      if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_143f48a21;
                    }
                    iVar22 = uVar14 - uVar18;
                    goto LAB_143f48a63;
                  }
                  if (uVar3 == 0) break;
LAB_143f48a21:
                  lVar28 = lVar28 + 2;
                }
                iVar22 = 0;
LAB_143f48a63:
                bVar31 = iVar22 == 0;
              }
            }
            else {
              bVar31 = (int)uStack_80 + local_c0 == 1;
            }
            if (local_c8 != 0) {
              FUN_1400020a8();
            }
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              plVar5 = plVar6 + 1;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)*plVar5 == 0) {
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
            if (bVar31) {
              lVar28 = *plVar27;
              plVar27 = (longlong *)plVar27[1];
              if (plVar27 == (longlong *)0x0) {
                plVar21[2] = lVar28;
                plVar26 = (longlong *)plVar21[3];
                if (plVar26 == (longlong *)0x0) break;
                plVar21[3] = 0;
LAB_143f48b5f:
                LOCK();
                plVar27 = plVar26 + 1;
                *(int *)plVar27 = (int)*plVar27 + -1;
                UNLOCK();
                if ((int)*plVar27 != 0) break;
                (**(code **)*plVar26)(plVar26);
                LOCK();
                piVar1 = (int *)((longlong)plVar26 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar22 = *piVar1;
                UNLOCK();
                plVar27 = plVar26;
              }
              else {
                LOCK();
                *(int *)(plVar27 + 1) = (int)plVar27[1] + 1;
                UNLOCK();
                plVar21[2] = lVar28;
                plVar26 = (longlong *)plVar21[3];
                if (plVar27 != plVar26) {
                  plVar21[3] = (longlong)plVar27;
                  if (plVar26 != (longlong *)0x0) goto LAB_143f48b5f;
                  break;
                }
                LOCK();
                plVar26 = plVar27 + 1;
                *(int *)plVar26 = (int)*plVar26 + -1;
                UNLOCK();
                if ((int)*plVar26 != 0) break;
                (**(code **)*plVar27)(plVar27);
                LOCK();
                piVar1 = (int *)((longlong)plVar27 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar22 = *piVar1;
                UNLOCK();
              }
              if (iVar22 == 0) {
                (**(code **)(*plVar27 + 0x10))(plVar27);
              }
              break;
            }
            plVar27 = plVar27 + 2;
          } while (plVar27 != plVar26);
        }
        FUN_14101cee4(local_b8,local_b0);
        lVar28 = local_f8;
        plVar27 = local_e0;
        if (local_b8 != (longlong *)0x0) {
          FUN_1400020a8();
          lVar28 = local_f8;
          plVar27 = local_e0;
        }
      }
      if (local_88 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_a8 != (void *)0x0) {
        FUN_1400020a8();
      }
      plVar21 = plVar21 + 4;
    } while (plVar21 != plVar27);
    if ((longlong)(int)uStack_70 == 0) goto LAB_143f48d45;
    lVar28 = (longlong)(int)uStack_70 << 5;
    plVar21 = local_78;
    do {
      lVar20 = plVar21[2];
      uVar12 = FUN_14101d2ea();
      cVar8 = FUN_143f3ac8a(uVar12,plVar21);
      if (lVar20 == 0) {
        if (cVar8 != '\0') {
          pvVar13 = (void *)*local_e8;
          goto LAB_143f48c2b;
        }
        FUN_148aaf074(local_f8,plVar21);
      }
      else if ((cVar8 != '\0') && (pvVar13 = (void *)*local_e8, (void *)plVar21[2] != pvVar13)) {
LAB_143f48c2b:
        plVar27 = (longlong *)local_e8[1];
        local_a8 = pvVar13;
        uStack_a0 = plVar27;
        if (plVar27 == (longlong *)0x0) {
          FUN_145c7de4a(local_f8,&local_a8);
        }
        else {
          LOCK();
          *(int *)(plVar27 + 1) = (int)plVar27[1] + 1;
          UNLOCK();
          FUN_145c7de4a(local_f8,&local_a8);
          if (plVar27 != (longlong *)0x0) {
            LOCK();
            plVar26 = plVar27 + 1;
            *(int *)plVar26 = (int)*plVar26 + -1;
            UNLOCK();
            if ((int)*plVar26 == 0) {
              (**(code **)*plVar27)(plVar27);
              LOCK();
              piVar1 = (int *)((longlong)plVar27 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar27 + 0x10))(plVar27);
              }
            }
          }
        }
        puVar11 = &DAT_149dfb77a;
        if ((int)plVar21[1] != 0) {
          puVar11 = (undefined2 *)*plVar21;
        }
        puVar25 = &DAT_149dfb77a;
        if (DAT_14cb97948 != 0) {
          puVar25 = DAT_14cb97940;
        }
        FUN_140002266(&local_a8,L"%s.%s",puVar25,puVar11);
        FUN_140056680(&local_88,&DAT_149dfb77a);
        FUN_141511334(*(undefined8 *)(local_f8 + 8),&local_a8,&local_88);
        if (local_88 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (*(int *)(local_f8 + 0x154) == 0) {
          *(undefined4 *)(local_f8 + 0x154) = 1;
          FUN_143f48db6();
        }
        else if (*(int *)(local_f8 + 0x158) != 3) {
          *(undefined4 *)(local_f8 + 0x158) = 1;
        }
        if (local_a8 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      plVar21 = plVar21 + 4;
      lVar28 = lVar28 + -0x20;
    } while (lVar28 != 0);
    uVar30 = uStack_70 & 0xffffffff;
  }
  else {
LAB_143f48d45:
    uVar30 = 0;
  }
LAB_143f48d47:
  FUN_143f4f29f(local_78,uVar30);
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143f48d61:
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f48db6 FUN_143f48db6 body=376 status=ok
// SIG undefined FUN_143f48db6(void)

void FUN_143f48db6(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148aaebd2();
  *(undefined1 *)(param_1 + 400) = 0;
  iVar4 = *(int *)(param_1 + 0x154);
  if (iVar4 == 3) {
    *(undefined4 *)(param_1 + 0x150) = 1;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (iVar4 == 2) {
    if (*(longlong *)(param_1 + 0x180) != 0) {
      FUN_14119d664(*(longlong *)(param_1 + 0x180),&local_30);
      if (local_28 == *(int *)(param_1 + 0x178)) {
        bVar7 = true;
        if (1 < local_28) {
          lVar5 = 0;
          while( true ) {
            uVar1 = *(ushort *)(local_30 + lVar5);
            uVar3 = (uint)uVar1;
            uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x170) + lVar5);
            uVar6 = (uint)uVar2;
            if (uVar1 != uVar2) {
              if ((uVar2 | uVar1) < 0x80) {
                uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_143f48e7e;
              }
              iVar4 = uVar3 - uVar6;
              goto LAB_143f48ede;
            }
            if (uVar1 == 0) break;
LAB_143f48e7e:
            lVar5 = lVar5 + 2;
          }
          iVar4 = 0;
LAB_143f48ede:
          bVar7 = iVar4 == 0;
        }
      }
      else {
        bVar7 = *(int *)(param_1 + 0x178) + local_28 == 1;
      }
      if (local_30 != 0) {
        FUN_1400020a8();
      }
      if (bVar7) {
        *(undefined4 *)(param_1 + 0x154) = 0;
        if (*(int *)(param_1 + 0x158) != 0) {
          *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x158);
          *(undefined4 *)(param_1 + 0x158) = 0;
          FUN_143f48db6(param_1);
        }
        goto LAB_143f48f2e;
      }
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    FUN_143f494f8(param_1);
  }
  else if (iVar4 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
LAB_143f48f2e:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f48f4e FUN_143f48f4e body=1410 status=ok
// SIG undefined FUN_143f48f4e(void)

void FUN_143f48f4e(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  ulonglong uStack_60;
  void *local_50;
  int local_48;
  undefined4 local_44;
  longlong *local_40;
  int local_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[0x2b] != 0) {
    *(int *)((longlong)param_1 + 0x154) = (int)param_1[0x2b];
    *(undefined4 *)(param_1 + 0x2b) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
  }
  iVar6 = (int)param_1[2];
  *(int *)(param_1 + 2) = iVar6 + 1;
  if (iVar6 == 0) {
    lVar11 = param_1[0x30];
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
    }
    local_40 = (longlong *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    local_38 = 3;
    *local_40 = (longlong)&PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_40[2] = lVar3;
    *local_40 = (longlong)&PTR_FUN_14b4f7390;
    local_40[3] = (longlong)param_1;
    local_40[4] = (longlong)FUN_143f49d8c;
    FUN_1459564ca(lVar11,&local_40);
    goto LAB_143f4903b;
  }
  if (iVar6 != 1) {
    if (iVar6 == 2) {
      if (param_1[0x30] != 0) {
        FUN_14119d664(param_1[0x30],&local_40);
        if ((longlong **)(param_1 + 0x2e) == &local_40) {
          if (local_40 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (param_1[0x2e] != 0) {
            FUN_1400020a8();
          }
          param_1[0x2e] = (longlong)local_40;
          local_40 = (longlong *)0x0;
          *(int *)(param_1 + 0x2f) = local_38;
          *(undefined4 *)((longlong)param_1 + 0x17c) = uStack_34;
        }
      }
      FUN_14658727a(param_1);
      FUN_145e1aa6e(param_1[1],&local_40);
      if ((local_40 != (longlong *)0x0) && (*(int *)((longlong)local_40 + 0x14) == 0)) {
        plVar8 = (longlong *)CONCAT44(uStack_34,local_38);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        local_68 = (undefined2 *)0x0;
        uStack_60 = 0;
        FUN_14101cdd4(local_40 + 4,&DAT_14cb977e0,&local_68);
        puVar10 = &DAT_149dfb77a;
        if ((int)uStack_60 != 0) {
          puVar10 = local_68;
        }
        puVar9 = &DAT_149dfb77a;
        if (DAT_14cb97948 != 0) {
          puVar9 = DAT_14cb97940;
        }
        FUN_140002266(&local_50,L"%s.%s",puVar9,puVar10);
        if (local_68 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar8 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
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
        FUN_141511334(param_1[1],&local_50,param_1 + 0x2e);
        if (local_50 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      plVar8 = (longlong *)CONCAT44(uStack_34,local_38);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar8 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      FUN_145c65b22(param_1);
      *(undefined4 *)((longlong)param_1 + 0x154) = 0;
      if ((int)param_1[0x2b] != 0) {
        *(int *)((longlong)param_1 + 0x154) = (int)param_1[0x2b];
        *(undefined4 *)(param_1 + 0x2b) = 0;
        FUN_143f48db6(param_1);
      }
    }
    goto LAB_143f4903b;
  }
  if (param_1[0x30] != 0) goto LAB_143f4903b;
  iVar6 = *(int *)(param_1[1] + 0x58);
  iVar7 = 0;
  if (iVar6 != 0) {
    FUN_14101cf30(param_1[1],&local_40);
    if ((longlong)local_38 != 0) {
      lVar11 = (longlong)local_38 << 4;
      plVar8 = local_40;
      do {
        cVar2 = FUN_145c65e6c(plVar8);
        if ((cVar2 != '\0') && (*(int *)(*plVar8 + 0x14) != 0)) {
          *(undefined1 *)(param_1 + 0x32) = 1;
          iVar6 = 0;
          break;
        }
        plVar8 = plVar8 + 2;
        lVar11 = lVar11 + -0x10;
      } while (lVar11 != 0);
    }
    FUN_14101cee4(local_40,local_38);
    iVar7 = iVar6;
    if (local_40 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*param_1 + 8))(param_1,&local_40);
  plVar8 = (longlong *)CONCAT44(uStack_34,local_38);
  if (plVar8 == (longlong *)0x0) {
    param_1[0x30] = (longlong)local_40;
    plVar4 = (longlong *)param_1[0x31];
    if (plVar4 != (longlong *)0x0) {
      param_1[0x31] = 0;
LAB_143f4936b:
      LOCK();
      plVar8 = plVar4 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar6 = *piVar1;
        UNLOCK();
joined_r0x000143f491cf:
        if (iVar6 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    param_1[0x30] = (longlong)local_40;
    plVar4 = (longlong *)param_1[0x31];
    if (plVar8 == plVar4) {
      LOCK();
      plVar4 = plVar8 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar6 = *piVar1;
        UNLOCK();
        plVar4 = plVar8;
        goto joined_r0x000143f491cf;
      }
    }
    else {
      param_1[0x31] = (longlong)plVar8;
      if (plVar4 != (longlong *)0x0) goto LAB_143f4936b;
    }
  }
  plVar8 = (longlong *)CONCAT44(uStack_34,local_38);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  lVar11 = param_1[0x30];
  local_40 = (longlong *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = (longlong)&PTR_LAB_149e06450;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_40[2] = lVar3;
  *local_40 = (longlong)&PTR_FUN_14b4f7390;
  local_40[3] = (longlong)param_1;
  local_40[4] = (longlong)FUN_1415ab6a8;
  FUN_146048f14(param_1[1],&local_68);
  puVar10 = local_68;
  local_50 = (void *)0x0;
  lVar5 = (longlong)(int)uStack_60;
  local_48 = (int)uStack_60;
  if (lVar5 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,uStack_60 & 0xffffffff,0);
    memcpy(local_50,puVar10,lVar5 * 2);
  }
  FUN_146583812(lVar11,iVar7,&local_50,&local_40);
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_143f4903b:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f494f8 FUN_143f494f8 body=2141 status=ok
// SIG undefined FUN_143f494f8(void)

void FUN_143f494f8(longlong *param_1)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  void *_Src;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  bool bVar15;
  undefined1 auStack_d8 [32];
  undefined8 **local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  int local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar6 = (int)param_1[0x2b];
  if (iVar6 != 0) goto LAB_143f4952a;
  iVar6 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar6 + 1;
  switch(iVar6) {
  case 0:
    if (param_1[0x30] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
    }
    FUN_14119d664(param_1[0x30],&local_b0);
    if ((int)local_a8 == (int)param_1[0x2f]) {
      bVar15 = true;
      if (1 < (int)local_a8) {
        lVar12 = 0;
        while( true ) {
          uVar2 = *(ushort *)((longlong)local_b0 + lVar12);
          uVar5 = (uint)uVar2;
          uVar3 = *(ushort *)(param_1[0x2e] + lVar12);
          uVar14 = (uint)uVar3;
          if (uVar2 != uVar3) {
            if ((uVar3 | uVar2) < 0x80) {
              uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar3];
              if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_143f495ef;
            }
            iVar6 = uVar5 - uVar14;
            goto LAB_143f498b3;
          }
          if (uVar2 == 0) break;
LAB_143f495ef:
          lVar12 = lVar12 + 2;
        }
        iVar6 = 0;
LAB_143f498b3:
        bVar15 = iVar6 == 0;
      }
    }
    else {
      bVar15 = (int)param_1[0x2f] + (int)local_a8 == 1;
    }
    if (local_b0 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (!bVar15) {
      lVar12 = param_1[0x30];
      local_b0 = (longlong *)0x0;
      local_a8 = (longlong *)((ulonglong)local_a8 & 0xffffffff00000000);
      FUN_1446efa72(&local_b0,0,3,0x10);
      local_a8 = (longlong *)CONCAT44(local_a8._4_4_,3);
      *local_b0 = (longlong)&PTR_LAB_149e06450;
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 1;
      lVar10 = DAT_14c758608 + 1;
      if (lVar9 == 0) {
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 2;
        lVar10 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar10;
      local_b0[2] = lVar9;
      *local_b0 = (longlong)&PTR_FUN_14b4f7390;
      local_b0[3] = (longlong)param_1;
      local_b0[4] = (longlong)FUN_143f49dec;
      FUN_1459564ca(lVar12,&local_b0);
    }
    break;
  case 1:
    plVar7 = (longlong *)FUN_140a68038(0);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
      if (((local_58 == (longlong *)0x0) || (lVar12 = *(longlong *)(param_1[1] + 0x38), lVar12 == 0)
          ) || (*(int *)(lVar12 + 0x40) < 1)) {
LAB_143f4982c:
        bVar15 = false;
      }
      else {
        lVar12 = **(longlong **)(lVar12 + 0x38);
        if ((DAT_14c950c29 == '\x01') && (lVar12 != 0)) {
          FUN_14689c22e(lVar12);
        }
        else if (lVar12 == 0) goto LAB_143f4982c;
        (**(code **)(*plVar7 + 0x80))(plVar7,&local_68);
        if (local_68 == (longlong *)0x0) {
          bVar15 = false;
        }
        else {
          (**(code **)(*local_68 + 0x110))(local_68,&local_b0,*(undefined4 *)(lVar12 + 0xe0));
          plVar13 = local_a8;
          plVar7 = local_b0;
          if (local_b0 == (longlong *)0x0) {
            bVar15 = false;
          }
          else {
            (**(code **)(*local_58 + 0x18))(local_58,&local_78,param_1 + 0x2e);
            if ((local_78 == 0) || (param_1[0x2c] == 0)) {
              bVar15 = false;
            }
            else {
              if ((*(longlong *)(param_1[1] + 0x38) == 0) ||
                 (lVar12 = *(longlong *)(*(longlong *)(param_1[1] + 0x38) + 0x30), lVar12 == 0)) {
                uVar11 = 0;
              }
              else {
                uVar11 = *(undefined8 *)(lVar12 + 0x360);
              }
              FUN_140b6e166(&local_88,uVar11);
              bVar15 = local_88 != 0;
              if (bVar15) {
                local_a8 = (longlong *)0x0;
                uVar5 = *(uint *)(param_1 + 0x2f);
                _Src = (void *)param_1[0x2e];
                local_a0 = CONCAT44(local_a0._4_4_,uVar5);
                local_b0 = param_1;
                if ((longlong)(int)uVar5 == 0) {
                  local_a0 = (ulonglong)uVar5;
                }
                else {
                  FUN_1446dd670(&local_a8,uVar5,0);
                  memcpy(local_a8,_Src,(longlong)(int)uVar5 * 2);
                }
                local_98 = (undefined8 *)0x0;
                local_90 = 0;
                FUN_1446efa72(&local_98,0,3,0x10);
                local_90 = 3;
                *local_98 = &PTR_LAB_14b4e4ea0;
                LOCK();
                UNLOCK();
                lVar10 = DAT_14c758608 + 1;
                lVar12 = DAT_14c758608 + 1;
                if (lVar10 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar10 = DAT_14c758608 + 2;
                  lVar12 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar12;
                local_98[2] = lVar10;
                *local_98 = &PTR_FUN_14b4f74e0;
                local_98[3] = local_b0;
                local_98[4] = local_a8;
                local_a8 = (longlong *)0x0;
                *(undefined4 *)(local_98 + 5) = (undefined4)local_a0;
                *(undefined4 *)((longlong)local_98 + 0x2c) = local_a0._4_4_;
                local_a0 = 0;
                local_b8 = &local_98;
                (**(code **)(*local_58 + 0x1b0))(local_58,plVar7,local_78,local_88);
                if (local_90 == 0) {
LAB_143f49cdd:
                  if (local_98 != (undefined8 *)0x0) {
                    FUN_1400020a8();
                  }
                }
                else if (local_98 != (undefined8 *)0x0) {
                  (**(code **)*local_98)(local_98,0);
                  FUN_1446efa72(&local_98,0,0,0x10);
                  local_90 = 0;
                  goto LAB_143f49cdd;
                }
                if (local_a8 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
              }
              if (local_80 != (longlong *)0x0) {
                LOCK();
                plVar7 = local_80 + 1;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                if ((int)*plVar7 == 0) {
                  (**(code **)*local_80)(local_80);
                  LOCK();
                  piVar1 = (int *)((longlong)local_80 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*local_80 + 0x10))(local_80);
                  }
                }
              }
            }
            if (local_70 != (longlong *)0x0) {
              LOCK();
              plVar7 = local_70 + 1;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)*plVar7 == 0) {
                (**(code **)*local_70)(local_70);
                LOCK();
                piVar1 = (int *)((longlong)local_70 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_70 + 0x10))(local_70);
                }
              }
            }
          }
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar13 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
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
        }
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_60 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)local_60 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_60 + 0x10))(local_60);
            }
          }
        }
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_50 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_50 + 0x10))(local_50);
          }
        }
      }
      if (bVar15) break;
    }
    *(undefined4 *)((longlong)param_1 + 0x154) = 0;
    iVar6 = (int)param_1[0x2b];
    if (iVar6 != 0) {
LAB_143f4952a:
      *(int *)((longlong)param_1 + 0x154) = iVar6;
      *(undefined4 *)(param_1 + 0x2b) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
    }
    break;
  case 2:
    if ((((param_1[0x30] != 0) || (param_1[4] == 0)) ||
        ((longlong *)param_1[0x23] == (longlong *)0x0)) ||
       (cVar4 = (**(code **)(*(longlong *)param_1[0x23] + 0x20))(), cVar4 == '\0')) break;
    (**(code **)(*param_1 + 8))(param_1,&local_b0);
    plVar7 = local_a8;
    if (local_a8 == (longlong *)0x0) {
      param_1[0x30] = (longlong)local_b0;
      plVar13 = (longlong *)param_1[0x31];
      if (plVar13 != (longlong *)0x0) {
        param_1[0x31] = 0;
LAB_143f49aa0:
        LOCK();
        plVar7 = plVar13 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar6 = *piVar1;
          UNLOCK();
joined_r0x000143f49b19:
          if (iVar6 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
      UNLOCK();
      param_1[0x30] = (longlong)local_b0;
      plVar13 = (longlong *)param_1[0x31];
      if (local_a8 == plVar13) {
        LOCK();
        plVar13 = local_a8 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*local_a8)(local_a8);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar6 = *piVar1;
          UNLOCK();
          plVar13 = plVar7;
          goto joined_r0x000143f49b19;
        }
      }
      else {
        param_1[0x31] = (longlong)local_a8;
        if (plVar13 != (longlong *)0x0) goto LAB_143f49aa0;
      }
    }
    plVar7 = local_a8;
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_a8 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    FUN_143f3aeec(param_1 + 3);
    lVar12 = param_1[0x30];
    local_b0 = (longlong *)0x0;
    local_a8._0_4_ = 0;
    FUN_1446efa72(&local_b0,0,3,0x10);
    local_a8 = (longlong *)CONCAT44(local_a8._4_4_,3);
    *local_b0 = (longlong)&PTR_LAB_14b4edb10;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_b0[2] = lVar9;
    *local_b0 = (longlong)&PTR_FUN_14b4f7470;
    local_b0[3] = (longlong)param_1;
    local_b0[4] = (longlong)FUN_1415e440e;
    FUN_14166d06a(lVar12,param_1 + 3,&local_b0);
    break;
  case 3:
    FUN_14658727a(param_1);
    FUN_14101cf30(param_1[1],&local_b0);
    if ((longlong)(int)local_a8 == 0) {
      uVar8 = 0;
    }
    else {
      lVar12 = (longlong)(int)local_a8 << 4;
      plVar7 = local_b0;
      do {
        if ((*(int *)(*plVar7 + 0x14) != 0) && (cVar4 = FUN_145c65e6c(plVar7), cVar4 != '\0')) {
          FUN_145c65818(param_1,plVar7);
        }
        plVar7 = plVar7 + 2;
        lVar12 = lVar12 + -0x10;
      } while (lVar12 != 0);
      uVar8 = (ulonglong)local_a8 & 0xffffffff;
    }
    FUN_14101cee4(local_b0,uVar8);
    if (local_b0 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    *(undefined4 *)((longlong)param_1 + 0x154) = 0;
    if ((int)param_1[0x2b] != 0) {
      *(int *)((longlong)param_1 + 0x154) = (int)param_1[0x2b];
      *(undefined4 *)(param_1 + 0x2b) = 0;
      FUN_143f48db6(param_1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f49d8c FUN_143f49d8c body=96 status=ok
// SIG undefined FUN_143f49d8c(void)

void FUN_143f49d8c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x180) != 0) {
    *(undefined8 *)(param_1 + 0x180) = 0;
    plVar3 = *(longlong **)(param_1 + 0x188);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x188) = 0;
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
  FUN_143f48f4e(param_1);
  return;
}



// FUNCTION 143f49dec FUN_143f49dec body=96 status=ok
// SIG undefined FUN_143f49dec(void)

void FUN_143f49dec(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x180) != 0) {
    *(undefined8 *)(param_1 + 0x180) = 0;
    plVar3 = *(longlong **)(param_1 + 0x188);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x188) = 0;
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
  FUN_143f494f8(param_1);
  return;
}



// FUNCTION 143f49e4c FUN_143f49e4c body=133 status=ok
// SIG undefined FUN_143f49e4c(void)

undefined8 FUN_143f49e4c(longlong param_1,float param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 1;
  if ((0.0 < *(float *)(param_1 + 0x138)) &&
     (param_2 = *(float *)(param_1 + 0x138) - param_2, *(float *)(param_1 + 0x138) = param_2,
     param_2 <= 0.0)) {
    plVar2 = *(longlong **)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    if (*(int *)(param_1 + 0x154) == 0) {
      *(undefined4 *)(param_1 + 0x154) = 2;
      FUN_143f48db6(param_1);
    }
    else if (*(int *)(param_1 + 0x158) != 3) {
      *(undefined4 *)(param_1 + 0x158) = 2;
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143f49ed6 FUN_143f49ed6 body=29 status=ok
// SIG undefined FUN_143f49ed6(void)

undefined8 FUN_143f49ed6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f49f08 FUN_143f49f08 body=93 status=ok
// SIG undefined FUN_143f49f08(void)

void FUN_143f49f08(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f5500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f5490;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f49f66 FUN_143f49f66 body=93 status=ok
// SIG undefined FUN_143f49f66(void)

void FUN_143f49f66(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f5500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f5490;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f49fc4 FUN_143f49fc4 body=126 status=ok
// SIG undefined FUN_143f49fc4(void)

void FUN_143f49fc4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f5500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f5490;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f4a033. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f4a04c FUN_143f4a04c body=20 status=ok
// SIG undefined FUN_143f4a04c(void)

undefined1 FUN_143f4a04c(longlong param_1)

{
  FUN_143f4a060(param_1 + 0x18);
  return 1;
}



// FUNCTION 143f4a060 FUN_143f4a060 body=547 status=ok
// SIG undefined FUN_143f4a060(void)

void FUN_143f4a060(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_50;
  int local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *param_2;
  if (lVar4 != 0) {
    lVar5 = *param_1;
    plVar6 = (longlong *)param_2[1];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    iVar3 = *(int *)(lVar5 + 0xd8);
    *(uint *)(lVar5 + 0xd8) = iVar3 + 1U;
    if (*(uint *)(lVar5 + 0xdc) < iVar3 + 1U) {
      FUN_1413eac7e((longlong *)(lVar5 + 0xd0),iVar3);
    }
    lVar8 = *(longlong *)(lVar5 + 0xd0);
    *(longlong *)(lVar8 + (longlong)iVar3 * 0x10) = lVar4;
    *(longlong **)(lVar8 + 8 + (longlong)iVar3 * 0x10) = plVar6;
    if (plVar6 != (longlong *)0x0) {
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
    }
    if (((*(longlong *)(lVar5 + 0xc0) == 0) || (*(longlong *)(lVar5 + 200) == 0)) ||
       (*(int *)(*(longlong *)(lVar5 + 200) + 8) < 1)) {
      uVar7 = FUN_1401cb356();
      local_50 = (undefined8 *)0x0;
      local_48 = 0;
      FUN_1446efa72(&local_50,0,3,0x10);
      local_48 = 3;
      *local_50 = &PTR_LAB_149e02020;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_50[2] = lVar8;
      *local_50 = &PTR_FUN_14b4f55b0;
      local_50[3] = lVar5;
      local_50[4] = FUN_1415e1b4e;
      local_58 = 0;
      FUN_1405f67fc(uVar7,&local_40,&local_50,L"FGbxSocialList_RefreshDisplayNames");
      *(undefined8 *)(lVar5 + 0xc0) = local_40;
      local_40 = 0;
      plVar6 = *(longlong **)(lVar5 + 200);
      *(longlong **)(lVar5 + 200) = local_38;
      local_38 = (longlong *)0x0;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))();
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
      }
      if (local_48 != 0) {
        if (local_50 == (undefined8 *)0x0) goto LAB_143f4a246;
        (**(code **)*local_50)(local_50,0);
        FUN_1446efa72(&local_50,0,0,0x10);
        local_48 = 0;
      }
      if (local_50 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_143f4a246:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4a284 FUN_143f4a284 body=127 status=ok
// SIG undefined FUN_143f4a284(void)

undefined4 FUN_143f4a284(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *param_1;
  (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,&local_30);
  uVar4 = (**(code **)*local_30)(local_30,uVar3);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4a304 FUN_143f4a304 body=29 status=ok
// SIG undefined FUN_143f4a304(void)

undefined8 FUN_143f4a304(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f4a336 FUN_143f4a336 body=93 status=ok
// SIG undefined FUN_143f4a336(void)

void FUN_143f4a336(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f5690;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f5620;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f4a394 FUN_143f4a394 body=93 status=ok
// SIG undefined FUN_143f4a394(void)

void FUN_143f4a394(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f5690;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f5620;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f4a3f2 FUN_143f4a3f2 body=126 status=ok
// SIG undefined FUN_143f4a3f2(void)

void FUN_143f4a3f2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f5690;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f5620;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f4a461. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f4a470 FUN_143f4a470 body=65 status=ok
// SIG undefined FUN_143f4a470(void)

void FUN_143f4a470(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_143f4a4f6(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4a4b2 FUN_143f4a4b2 body=67 status=ok
// SIG undefined FUN_143f4a4b2(void)

undefined8 FUN_143f4a4b2(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_143f4a4f6(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4a4f6 FUN_143f4a4f6 body=543 status=ok
// SIG undefined FUN_143f4a4f6(void)

void FUN_143f4a4f6(longlong *param_1,int *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  longlong *local_50;
  undefined8 **local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1 = (longlong *)*param_1;
  if (((int)param_1[0xe] == *param_2) && ((char)param_1[0x11] == '\x01')) {
    if (*(int *)((longlong)param_1 + 0x74) == 0) {
      local_58 = param_3;
      if ((longlong)(int)param_1[0x15] != 0) {
        lVar9 = param_1[0x14];
        lVar7 = (longlong)(int)param_1[0x15] << 4;
        iVar6 = 0;
        do {
          cVar5 = FUN_143f4a284(&local_58,lVar9);
          if (cVar5 != '\0') {
            if (iVar6 != 1) {
              FUN_145777c06(param_1 + 0x14,-iVar6);
              FUN_145777ad2(param_1 + 0x14);
              FUN_14101da94(param_1 + 0x16,-iVar6);
              FUN_140b12644(param_1 + 0x16);
              if (((int)param_1[5] != 0) &&
                 (plVar3 = (longlong *)param_1[4], plVar3 != (longlong *)0x0)) {
                (**(code **)(*plVar3 + 0x60))(plVar3,param_3);
              }
              if (((int)param_1[1] != 0) && (*param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
                FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
              }
            }
            break;
          }
          lVar9 = lVar9 + 0x10;
          iVar6 = iVar6 + -1;
          lVar7 = lVar7 + -0x10;
        } while (lVar7 != 0);
      }
    }
    else if ((*(int *)((longlong)param_1 + 0x74) == 1) &&
            (lVar9 = param_1[0x13], (longlong)(int)lVar9 != 0)) {
      lVar7 = param_1[0x12];
      uVar8 = 0;
      do {
        cVar5 = (**(code **)*param_3)(param_3,*(undefined8 *)(lVar7 + uVar8));
        if (cVar5 != '\0') {
          if ((int)(~uVar8 >> 4) != 0) {
            local_50 = (longlong *)param_3[2];
            if (local_50 == (longlong *)0x0) goto LAB_143f4a5ee;
            iVar6 = (int)local_50[1];
            goto LAB_143f4a6ab;
          }
          break;
        }
        uVar8 = uVar8 + 0x10;
      } while ((longlong)(int)lVar9 * 0x10 != uVar8);
    }
  }
  goto LAB_143f4a5fa;
LAB_143f4a5ee:
  local_50 = (longlong *)0x0;
  goto LAB_143f4a6bd;
  while( true ) {
    LOCK();
    iVar4 = (int)local_50[1];
    bVar10 = iVar6 == iVar4;
    if (bVar10) {
      *(int *)(local_50 + 1) = iVar6 + 1;
      iVar4 = iVar6;
    }
    iVar6 = iVar4;
    UNLOCK();
    if (bVar10) break;
LAB_143f4a6ab:
    if (iVar6 == 0) goto LAB_143f4a5ee;
  }
LAB_143f4a6bd:
  local_58 = (undefined8 *)0x0;
  if (local_50 != (longlong *)0x0) {
    local_58 = (undefined8 *)param_3[1];
  }
  local_48 = &local_58;
  FUN_1460d2ee2(param_1 + 0x12);
  plVar3 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    (**(code **)(*(longlong *)*param_1 + 0x60))();
  }
LAB_143f4a5fa:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f4a730 FUN_143f4a730 body=29 status=ok
// SIG undefined FUN_143f4a730(void)

undefined8 FUN_143f4a730(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f4a762 FUN_143f4a762 body=93 status=ok
// SIG undefined FUN_143f4a762(void)

void FUN_143f4a762(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f5770;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f5700;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f4a7c0 FUN_143f4a7c0 body=93 status=ok
// SIG undefined FUN_143f4a7c0(void)

void FUN_143f4a7c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f5770;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f5700;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f4a81e FUN_143f4a81e body=126 status=ok
// SIG undefined FUN_143f4a81e(void)

void FUN_143f4a81e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f5770;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f5700;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f4a88d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f4a89c FUN_143f4a89c body=65 status=ok
// SIG undefined FUN_143f4a89c(void)

void FUN_143f4a89c(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_143f4a922(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4a8de FUN_143f4a8de body=67 status=ok
// SIG undefined FUN_143f4a8de(void)

undefined8 FUN_143f4a8de(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_143f4a922(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4a922 FUN_143f4a922 body=2299 status=ok
// SIG undefined FUN_143f4a922(void)

/* WARNING: Removing unreachable block (ram,0x000143f4aecf) */

void FUN_143f4a922(longlong *param_1,int *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  byte bVar11;
  longlong lVar12;
  longlong **pplVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong *local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar7 = *param_2;
  param_1 = (longlong *)*param_1;
  if (((int)param_1[0xe] != iVar7) || ((char)param_1[0x11] != '\x01')) goto LAB_143f4b1f0;
  if (*(uint *)(param_1 + 0x10) < 4) {
    switch(*(uint *)(param_1 + 0x10)) {
    case 0:
      bVar11 = 1;
      break;
    case 1:
      bVar11 = *(byte *)(*param_4 + 0x10) & 1;
      break;
    case 2:
      bVar11 = (*(byte *)(*param_4 + 0x10) & 4) >> 2;
      break;
    case 3:
      goto switchD_143f4a985_caseD_3;
    }
  }
  else {
switchD_143f4a985_caseD_3:
    bVar11 = 0;
  }
  (**(code **)(*param_3 + 0x10))(param_3,&local_68);
  iVar3 = *(int *)((longlong)param_1 + 0x84);
  if (iVar3 == 0) {
    bVar16 = true;
LAB_143f4aa07:
    if ((bVar11 & bVar16) == 1) {
      if (*(int *)((longlong)param_1 + 0x74) != 0) {
        if (*(int *)((longlong)param_1 + 0x74) == 1) {
          if ((longlong)(int)param_1[0x13] != 0) {
            puVar14 = (undefined8 *)param_1[0x12];
            lVar8 = (longlong)(int)param_1[0x13] << 4;
            do {
              cVar5 = (**(code **)*param_3)(param_3,*puVar14);
              if (cVar5 != '\0') {
                if (puVar14 != (undefined8 *)0x0) goto LAB_143f4b1f0;
                break;
              }
              puVar14 = puVar14 + 2;
              lVar8 = lVar8 + -0x10;
            } while (lVar8 != 0);
          }
          plVar6 = (longlong *)param_3[2];
          if (plVar6 == (longlong *)0x0) {
LAB_143f4ac5b:
            plVar6 = (longlong *)0x0;
          }
          else {
            iVar7 = (int)plVar6[1];
            do {
              if (iVar7 == 0) goto LAB_143f4ac5b;
              LOCK();
              iVar3 = (int)plVar6[1];
              bVar16 = iVar7 == iVar3;
              if (bVar16) {
                *(int *)(plVar6 + 1) = iVar7 + 1;
                iVar3 = iVar7;
              }
              iVar7 = iVar3;
              UNLOCK();
            } while (!bVar16);
          }
          lVar8 = 0;
          if (plVar6 != (longlong *)0x0) {
            lVar8 = param_3[1];
          }
          iVar7 = (int)param_1[0x13];
          *(uint *)(param_1 + 0x13) = iVar7 + 1U;
          if (*(uint *)((longlong)param_1 + 0x9c) < iVar7 + 1U) {
            FUN_1413eac7e(param_1 + 0x12,iVar7);
          }
          lVar10 = param_1[0x12];
          *(longlong *)(lVar10 + (longlong)iVar7 * 0x10) = lVar8;
          *(longlong **)(lVar10 + 8 + (longlong)iVar7 * 0x10) = plVar6;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
            LOCK();
            plVar4 = plVar6 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
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
          if ((int)param_1[3] != 0) {
            plVar6 = (longlong *)param_1[2];
LAB_143f4acd4:
            if (plVar6 != (longlong *)0x0) {
              (**(code **)(*plVar6 + 0x60))(plVar6,param_3);
            }
          }
LAB_143f4ace2:
          FUN_14127d8d6(param_1);
          if (((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
            (**(code **)(*(longlong *)*param_1 + 0x60))();
          }
        }
        goto LAB_143f4b1f0;
      }
      lVar8 = FUN_1415ca610(param_1[10]);
      if ((lVar8 == 0) || ((longlong)*(int *)(lVar8 + 0x40) == 0)) {
        local_a8 = 0;
      }
      else {
        lVar10 = 0;
        do {
          local_a8 = *(longlong *)(*(longlong *)(lVar8 + 0x38) + lVar10);
          if ((local_a8 != 0) && (*(int *)(local_a8 + 0xe0) == (int)param_1[0xe])) break;
          lVar10 = lVar10 + 8;
          local_a8 = 0;
        } while ((longlong)*(int *)(lVar8 + 0x40) * 8 != lVar10);
      }
      local_b0 = param_1 + 0x14;
      lVar8 = param_1[0x15];
      local_b8 = param_4;
      local_a0 = param_3;
      local_58 = param_3;
      if ((longlong)(int)lVar8 != 0) {
        lVar10 = param_1[0x14];
        uVar15 = 0;
        lVar12 = 0;
        do {
          cVar5 = FUN_143f4a284(&local_58,lVar10 + uVar15);
          plVar6 = local_a0;
          if (cVar5 != '\0') {
            if ((int)(~uVar15 >> 4) != 0) {
              FUN_140b6c84e(param_1[10],&local_58,iVar7,local_a0);
              plVar2 = plStack_50;
              plVar9 = local_58;
              local_58 = (longlong *)0x0;
              plStack_50 = (longlong *)0x0;
              lVar8 = param_1[0x14];
              lVar10 = (lVar12 >> 0x20) * 0x10;
              plVar4 = *(longlong **)(lVar8 + 8 + lVar10);
              *(longlong **)(lVar8 + lVar10) = plVar9;
              *(longlong **)(lVar8 + 8 + lVar10) = plVar2;
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                plVar9 = plVar4 + 1;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)*plVar9 == 0) {
                  (**(code **)*plVar4)(plVar4);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar4 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar4 + 0x10))(plVar4);
                  }
                }
              }
              plVar9 = plStack_50;
              lVar8 = local_a8;
              plVar4 = local_b0;
              if (plStack_50 != (longlong *)0x0) {
                LOCK();
                plVar2 = plStack_50 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*plStack_50)(plStack_50);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar9 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar9 + 0x10))(plVar9);
                  }
                }
              }
              if (lVar8 == 0) {
                local_58 = (longlong *)0x0;
                plStack_50 = (longlong *)0x0;
LAB_143f4b116:
                plVar9 = local_b8;
                plVar4 = *(longlong **)(*plVar4 + lVar10);
                local_88 = 0;
                uStack_80 = 0;
                (**(code **)(*plVar4 + 0x18))(plVar4,&local_68);
                bVar16 = true;
              }
              else {
                FUN_140b6de3c();
                plVar9 = *(longlong **)(*plVar4 + lVar10);
                uVar17 = (**(code **)(*plVar9 + 8))(plVar9,&local_68);
                FUN_140b6df48(uVar17,&local_58,lVar8,local_68);
                plVar9 = uStack_60;
                if (uStack_60 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = uStack_60 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)*uStack_60)(uStack_60);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar9 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar9 + 0x10))(plVar9);
                    }
                  }
                }
                plVar9 = local_b8;
                if (local_58 == (longlong *)0x0) goto LAB_143f4b116;
                local_78 = 0;
                uStack_70 = (longlong *)0x0;
                (**(code **)(*local_58 + 0x18))(local_58,&local_68);
                bVar16 = false;
              }
              pplVar13 = (longlong **)(lVar10 + param_1[0x16]);
              if (pplVar13 != &local_68) {
                if (*pplVar13 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
                *pplVar13 = local_68;
                local_68 = (longlong *)0x0;
                *(undefined4 *)(pplVar13 + 1) = (undefined4)uStack_60;
                *(undefined4 *)((longlong)pplVar13 + 0xc) = uStack_60._4_4_;
                uStack_60 = (longlong *)0x0;
              }
              if (local_68 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              lVar8 = local_78;
              if (bVar16) {
                lVar8 = local_88;
              }
              if (lVar8 != 0) {
                FUN_1400020a8();
              }
              FUN_14127d8d6(param_1);
              if (((int)param_1[7] != 0) &&
                 (plVar4 = (longlong *)param_1[6], plVar4 != (longlong *)0x0)) {
                (**(code **)(*plVar4 + 0x60))(plVar4,plVar6,plVar9);
              }
              goto LAB_143f4b1c6;
            }
            break;
          }
          lVar12 = lVar12 + 0x100000000;
          uVar15 = uVar15 + 0x10;
        } while ((longlong)(int)lVar8 * 0x10 != uVar15);
      }
      plVar4 = local_a0;
      FUN_140b6c84e(param_1[10],&local_58,iVar7,local_a0);
      plVar2 = plStack_50;
      plVar9 = local_58;
      plVar6 = local_b0;
      if (local_58 != (longlong *)0x0) {
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
          UNLOCK();
        }
        iVar7 = (int)param_1[0x15];
        *(uint *)(param_1 + 0x15) = iVar7 + 1U;
        if (*(uint *)((longlong)param_1 + 0xac) < iVar7 + 1U) {
          FUN_140b722da(local_b0,iVar7);
        }
        lVar8 = *plVar6;
        *(longlong **)(lVar8 + (longlong)iVar7 * 0x10) = plVar9;
        *(longlong **)(lVar8 + 8 + (longlong)iVar7 * 0x10) = plVar2;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
          LOCK();
          plVar6 = plVar2 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
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
        lVar8 = local_a8;
        if (local_a8 == 0) {
          local_68 = (longlong *)0x0;
          uStack_60 = (longlong *)0x0;
LAB_143f4ae4d:
          local_98 = 0;
          uStack_90 = 0;
          (**(code **)(*local_58 + 0x18))(local_58,&local_78);
          bVar16 = true;
        }
        else {
          FUN_140b6de3c();
          uVar17 = (**(code **)(*local_58 + 8))(local_58,&local_78);
          FUN_140b6df48(uVar17,&local_68,lVar8,local_78);
          plVar6 = uStack_70;
          if (uStack_70 != (longlong *)0x0) {
            LOCK();
            plVar9 = uStack_70 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
              (**(code **)*uStack_70)(uStack_70);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
          if (local_68 == (longlong *)0x0) goto LAB_143f4ae4d;
          local_88 = 0;
          uStack_80 = 0;
          (**(code **)(*local_68 + 0x18))(local_68,&local_78);
          bVar16 = false;
        }
        iVar7 = (int)param_1[0x17];
        *(uint *)(param_1 + 0x17) = iVar7 + 1U;
        if (*(uint *)((longlong)param_1 + 0xbc) < iVar7 + 1U) {
          FUN_1447a1bd6(param_1 + 0x16,iVar7);
        }
        lVar8 = param_1[0x16];
        lVar10 = (longlong)iVar7 * 0x10;
        *(undefined8 *)(lVar8 + lVar10) = 0;
        *(longlong *)(lVar8 + lVar10) = local_78;
        *(undefined4 *)(lVar8 + 8 + lVar10) = (undefined4)uStack_70;
        *(undefined4 *)(lVar8 + 0xc + lVar10) = uStack_70._4_4_;
        uStack_70 = (longlong *)0x0;
        local_78 = 0;
        lVar8 = local_88;
        if (bVar16) {
          lVar8 = local_98;
        }
        if (lVar8 != 0) {
          FUN_1400020a8();
        }
        lVar8 = param_1[0xf];
        uStack_70 = (longlong *)plVar4[2];
        if (uStack_70 == (longlong *)0x0) {
LAB_143f4af11:
          uStack_70 = (longlong *)0x0;
        }
        else {
          iVar7 = (int)uStack_70[1];
          do {
            if (iVar7 == 0) goto LAB_143f4af11;
            LOCK();
            iVar3 = (int)uStack_70[1];
            bVar16 = iVar7 == iVar3;
            if (bVar16) {
              *(int *)(uStack_70 + 1) = iVar7 + 1;
              iVar3 = iVar7;
            }
            iVar7 = iVar3;
            UNLOCK();
          } while (!bVar16);
        }
        local_78 = 0;
        if (uStack_70 != (longlong *)0x0) {
          local_78 = plVar4[1];
        }
        FUN_140b716a0(lVar8,&local_78);
        plVar6 = uStack_70;
        if (uStack_70 != (longlong *)0x0) {
          LOCK();
          plVar9 = uStack_70 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*uStack_70)(uStack_70);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        if (((int)param_1[3] != 0) && (plVar6 = (longlong *)param_1[2], plVar6 != (longlong *)0x0))
        {
          (**(code **)(*plVar6 + 0x60))(plVar6,plVar4);
        }
        FUN_14127d8d6(param_1);
        if (((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
          (**(code **)(*(longlong *)*param_1 + 0x60))();
        }
        plVar6 = uStack_60;
        if (uStack_60 != (longlong *)0x0) {
          LOCK();
          plVar4 = uStack_60 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*uStack_60)(uStack_60);
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
LAB_143f4b1c6:
      plVar6 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar4 = plStack_50 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      goto LAB_143f4b1f0;
    }
  }
  else {
    if (iVar3 == 2) {
      FUN_1446f470e(&local_58,L"SHIFT");
      bVar16 = local_68 == local_58;
      goto LAB_143f4aa07;
    }
    if (iVar3 == 1) {
      bVar16 = local_68 == DAT_14cb978a8;
      goto LAB_143f4aa07;
    }
  }
  if (*(int *)((longlong)param_1 + 0x74) == 0) {
    local_58 = param_3;
    if ((longlong)(int)param_1[0x15] != 0) {
      lVar8 = param_1[0x14];
      lVar10 = (longlong)(int)param_1[0x15] << 4;
      iVar7 = 0;
      do {
        cVar5 = FUN_143f4a284(&local_58,lVar8);
        if (cVar5 != '\0') {
          if (iVar7 != 1) {
            FUN_145777c06(param_1 + 0x14,-iVar7);
            FUN_145777ad2(param_1 + 0x14);
            FUN_14101da94(param_1 + 0x16,-iVar7);
            FUN_140b12644(param_1 + 0x16);
            goto LAB_143f4abaa;
          }
          break;
        }
        lVar8 = lVar8 + 0x10;
        iVar7 = iVar7 + -1;
        lVar10 = lVar10 + -0x10;
      } while (lVar10 != 0);
    }
  }
  else if ((*(int *)((longlong)param_1 + 0x74) == 1) && ((longlong)(int)param_1[0x13] != 0)) {
    puVar14 = (undefined8 *)param_1[0x12];
    lVar8 = (longlong)(int)param_1[0x13] << 4;
LAB_143f4aa93:
    cVar5 = (**(code **)*param_3)(param_3,*puVar14);
    if (cVar5 == '\0') goto code_r0x000143f4aaa6;
    if (puVar14 != (undefined8 *)0x0) {
      FUN_148aafe22(param_1 + 0x12,puVar14);
LAB_143f4abaa:
      if ((int)param_1[5] != 0) {
        plVar6 = (longlong *)param_1[4];
        goto LAB_143f4acd4;
      }
      goto LAB_143f4ace2;
    }
  }
LAB_143f4b1f0:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x000143f4aaa6:
  puVar14 = puVar14 + 2;
  lVar8 = lVar8 + -0x10;
  if (lVar8 == 0) goto LAB_143f4b1f0;
  goto LAB_143f4aa93;
}



// FUNCTION 143f4b21e FUN_143f4b21e body=29 status=ok
// SIG undefined FUN_143f4b21e(void)

undefined8 FUN_143f4b21e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f4b250 FUN_143f4b250 body=93 status=ok
// SIG undefined FUN_143f4b250(void)

void FUN_143f4b250(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f5850;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f57e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f4b2ae FUN_143f4b2ae body=93 status=ok
// SIG undefined FUN_143f4b2ae(void)

void FUN_143f4b2ae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f5850;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f57e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f4b30c FUN_143f4b30c body=126 status=ok
// SIG undefined FUN_143f4b30c(void)

void FUN_143f4b30c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f5850;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f57e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f4b37b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f4b394 FUN_143f4b394 body=20 status=ok
// SIG undefined FUN_143f4b394(void)

undefined1 FUN_143f4b394(longlong param_1)

{
  FUN_14127d8d6(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143f4b3a8 FUN_143f4b3a8 body=29 status=ok
// SIG undefined FUN_143f4b3a8(void)

undefined8 FUN_143f4b3a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f4b3da FUN_143f4b3da body=93 status=ok
// SIG undefined FUN_143f4b3da(void)

void FUN_143f4b3da(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4f58c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143f4b438 FUN_143f4b438 body=93 status=ok
// SIG undefined FUN_143f4b438(void)

void FUN_143f4b438(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4f58c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143f4b496 FUN_143f4b496 body=126 status=ok
// SIG undefined FUN_143f4b496(void)

void FUN_143f4b496(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f58c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f4b505. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f4b51e FUN_143f4b51e body=20 status=ok
// SIG undefined FUN_143f4b51e(void)

undefined1 FUN_143f4b51e(longlong param_1)

{
  FUN_143f4b532(param_1 + 0x18);
  return 1;
}



// FUNCTION 143f4b532 FUN_143f4b532 body=251 status=ok
// SIG undefined FUN_143f4b532(void)

void FUN_143f4b532(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_1;
  plVar1 = (longlong *)(lVar2 + 0x570);
  local_30 = (longlong *)0x0;
  local_28 = 0;
  FUN_14114e6dc(&local_30,plVar1);
  if ((*(int *)(lVar2 + 0x578) != 0) &&
     (puVar3 = (undefined8 *)*plVar1, puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(lVar2 + 0x578) = 0;
  }
  if (local_30 != (longlong *)0x0 && local_28 != 0) {
    (**(code **)(*local_30 + 0x60))(local_30,(char)param_1[1]);
  }
  if (local_28 != 0) {
    if (local_30 == (longlong *)0x0) goto LAB_143f4b608;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143f4b608:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f4b632 FUN_143f4b632 body=29 status=ok
// SIG undefined FUN_143f4b632(void)

undefined8 FUN_143f4b632(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f4b664 FUN_143f4b664 body=93 status=ok
// SIG undefined FUN_143f4b664(void)

void FUN_143f4b664(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f5d60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f5cf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f4b6c2 FUN_143f4b6c2 body=93 status=ok
// SIG undefined FUN_143f4b6c2(void)

void FUN_143f4b6c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f5d60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f5cf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f4b720 FUN_143f4b720 body=126 status=ok
// SIG undefined FUN_143f4b720(void)

void FUN_143f4b720(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f5d60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4f5cf0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f4b78f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}


