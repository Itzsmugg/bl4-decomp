// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146b0f19a FUN_146b0f19a body=81 status=ok
// SIG undefined FUN_146b0f19a(void)

undefined8 FUN_146b0f19a(longlong param_1)

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



// FUNCTION 146b0f1f2 FUN_146b0f1f2 body=89 status=ok
// SIG undefined FUN_146b0f1f2(void)

bool FUN_146b0f1f2(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146b0f23d;
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
LAB_146b0f23d:
  return lVar6 == param_2;
}



// FUNCTION 146b0f268 FUN_146b0f268 body=118 status=ok
// SIG undefined FUN_146b0f268(void)

void FUN_146b0f268(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eb50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f21260;
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



// FUNCTION 146b0f2de FUN_146b0f2de body=118 status=ok
// SIG undefined FUN_146b0f2de(void)

void FUN_146b0f2de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eb50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f21260;
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



// FUNCTION 146b0f354 FUN_146b0f354 body=156 status=ok
// SIG undefined FUN_146b0f354(void)

void FUN_146b0f354(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f0eb50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f21260;
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
                    /* WARNING: Could not recover jumptable at 0x000146b0f3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b0f3f0 FUN_146b0f3f0 body=104 status=ok
// SIG undefined FUN_146b0f3f0(void)

void FUN_146b0f3f0(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000146b0f43d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146b0f44e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 146b0f458 FUN_146b0f458 body=101 status=ok
// SIG undefined FUN_146b0f458(void)

ulonglong FUN_146b0f458(longlong param_1)

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
LAB_146b0f4b2:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146b0f4b2;
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



// FUNCTION 146b0f4bd FUN_146b0f4bd body=77 status=ok
// SIG undefined FUN_146b0f4bd(void)

void FUN_146b0f4bd(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146b0f50a FUN_146b0f50a body=144 status=ok
// SIG undefined FUN_146b0f50a(void)

longlong FUN_146b0f50a(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined1 *)(param_1 + 0x1bc) = 1;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  local_30 = CONCAT11(1,DAT_14c96b23c);
  local_28 = 0;
  uStack_20 = 0;
  *(undefined2 *)(param_1 + 0x70) = local_30;
  FUN_144a450dc(param_1 + 0x78,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b0f59c FUN_146b0f59c body=115 status=ok
// SIG undefined FUN_146b0f59c(void)

longlong * FUN_146b0f59c(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146aa12da(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 146b0f610 FUN_146b0f610 body=68 status=ok
// SIG undefined FUN_146b0f610(void)

void FUN_146b0f610(longlong param_1)

{
  FUN_1449db362(param_1 + 0x1c0);
  FUN_146ac6347(*(undefined8 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1b0));
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1400020a8();
  }
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 146b0f654 FUN_146b0f654 body=228 status=ok
// SIG undefined FUN_146b0f654(void)

void FUN_146b0f654(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if ((int)param_1[6] == -1) {
      uVar3 = FUN_146ac5300();
      *(undefined4 *)(param_1 + 6) = uVar3;
    }
    else {
      FUN_146b0fbe4(param_1[5],param_1);
    }
    pcVar2 = (code *)param_1[8];
    if (pcVar2 != (code *)0x0) {
      local_34 = (undefined4)param_1[6];
      plVar5 = param_1 + 0xc;
      if ((longlong *)param_1[10] != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[10];
      }
      local_40 = lVar1;
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar2)(uVar4,&local_40,&local_34);
    }
  }
  if (param_1[8] != 0) {
    plVar5 = param_1 + 0xc;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[10];
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 0x24) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  FUN_146ac5540(param_1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b0f73a FUN_146b0f73a body=243 status=ok
// SIG undefined FUN_146b0f73a(void)

void FUN_146b0f73a(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if ((int)param_1[0xb] == -1) {
      uVar3 = FUN_146a6aad8();
      *(undefined4 *)(param_1 + 0xb) = uVar3;
    }
    else {
      FUN_146b0fc94(param_1[10],param_1);
    }
    pcVar2 = (code *)param_1[0xc];
    if (pcVar2 != (code *)0x0) {
      local_34 = (undefined4)param_1[0xb];
      plVar5 = param_1 + 0x10;
      if ((longlong *)param_1[0xe] != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[0xe];
      }
      local_40 = lVar1;
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar2)(uVar4,&local_40,&local_34);
    }
  }
  if (param_1[0xc] != 0) {
    plVar5 = param_1 + 0x10;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0xe];
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 0x4c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x44) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  }
  FUN_1449db362(param_1 + 6);
  FUN_146a74ecc(param_1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b0f82e FUN_146b0f82e body=238 status=ok
// SIG undefined FUN_146b0f82e(void)

void FUN_146b0f82e(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if ((int)param_1[0x19] == -1) {
      uVar3 = FUN_146ac367a();
      *(undefined4 *)(param_1 + 0x19) = uVar3;
    }
    else {
      FUN_146b0f91e(param_1[0x18],param_1);
    }
    pcVar2 = (code *)param_1[0x1a];
    if (pcVar2 != (code *)0x0) {
      local_34 = (undefined4)param_1[0x19];
      plVar5 = param_1 + 0x1e;
      if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[0x1c];
      }
      local_40 = lVar1;
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar2)(uVar4,&local_40,&local_34);
    }
  }
  if (param_1[0x1a] != 0) {
    plVar5 = param_1 + 0x1e;
    if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0x1c];
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  FUN_146a0989a(param_1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b0f91e FUN_146b0f91e body=131 status=ok
// SIG undefined FUN_146b0f91e(void)

void FUN_146b0f91e(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = *param_2;
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_146ac3734(param_1 + 0x18,iVar1);
  }
  lVar3 = (longlong)param_3;
  memmove((void *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8 + 8),
          (void *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8),
          (ulonglong)(uint)(iVar1 - param_3) << 3);
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8) = uVar2;
  FUN_146a94290(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8),param_1,param_2);
  return;
}



// FUNCTION 146b0f9a2 FUN_146b0f9a2 body=369 status=ok
// SIG undefined FUN_146b0f9a2(void)

longlong *
FUN_146b0f9a2(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar4 = (longlong *)FUN_14001cc68(0x268,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f21320;
  plVar1 = plVar4 + 2;
  FUN_146aa0e1e(plVar1);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_146b0fb3c(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_146b0faa7;
    param_1[1] = 0;
LAB_146b0fa6a:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_146b0faa7;
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
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (local_48 != plVar4) {
      param_1[1] = (longlong)local_48;
      if (plVar4 == (longlong *)0x0) goto LAB_146b0faa7;
      goto LAB_146b0fa6a;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146b0faa7;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_146b0faa7:
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  local_58 = 600;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b0fb14 FUN_146b0fb14 body=9 status=ok
// SIG undefined FUN_146b0fb14(void)

void FUN_146b0fb14(longlong param_1)

{
  FUN_142903886(param_1 + 0x10);
  return;
}



// FUNCTION 146b0fb1e FUN_146b0fb1e body=29 status=ok
// SIG undefined FUN_146b0fb1e(void)

undefined8 FUN_146b0fb1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b0fb3c FUN_146b0fb3c body=167 status=ok
// SIG undefined FUN_146b0fb3c(void)

void FUN_146b0fb3c(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146b0fbb7;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146b0fbb7;
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
LAB_146b0fbb7:
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
                    /* WARNING: Could not recover jumptable at 0x000146b0fbd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146b0fbe4 FUN_146b0fbe4 body=175 status=ok
// SIG undefined FUN_146b0fbe4(void)

void FUN_146b0fbe4(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  uVar2 = *param_2;
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_146ac53ea(param_1 + 0x18,iVar1);
  }
  lVar4 = (longlong)param_3;
  memmove((void *)(*(longlong *)(param_1 + 0x18) + lVar4 * 8 + 8),
          (void *)(*(longlong *)(param_1 + 0x18) + lVar4 * 8),
          (ulonglong)(uint)(iVar1 - param_3) << 3);
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar4 * 8) = uVar2;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar4 * 8);
  FUN_146ac5470(lVar4,param_1,param_2);
  puVar3 = (undefined8 *)(lVar4 + 0x20);
  if (*(char *)((longlong)param_2 + 0x1c) != '\0') {
    puVar3 = param_2 + 3;
  }
  *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)puVar3;
  puVar3 = (undefined8 *)(lVar4 + 0x24);
  if (*(char *)((longlong)param_2 + 0x24) != '\0') {
    puVar3 = param_2 + 4;
  }
  *(undefined4 *)(lVar4 + 0x24) = *(undefined4 *)puVar3;
  return;
}



// FUNCTION 146b0fc94 FUN_146b0fc94 body=129 status=ok
// SIG undefined FUN_146b0fc94(void)

void FUN_146b0fc94(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = *param_2;
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_146a7f3ac(param_1 + 0x18,iVar1);
  }
  lVar3 = (longlong)param_3;
  memmove((void *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8 + 8),
          (void *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8),
          (ulonglong)(uint)(iVar1 - param_3) << 3);
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8) = uVar2;
  FUN_146a7f350(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8),param_1,param_2);
  return;
}



// FUNCTION 146b0fd24 FUN_146b0fd24 body=29 status=ok
// SIG undefined FUN_146b0fd24(void)

void FUN_146b0fd24(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_149f21430;
  return;
}



// FUNCTION 146b0fd42 FUN_146b0fd42 body=36 status=ok
// SIG undefined FUN_146b0fd42(void)

undefined8 FUN_146b0fd42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 146b0fd82 FUN_146b0fd82 body=93 status=ok
// SIG undefined FUN_146b0fd82(void)

void FUN_146b0fd82(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f213c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146b0fde0 FUN_146b0fde0 body=123 status=ok
// SIG undefined FUN_146b0fde0(void)

void FUN_146b0fde0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149f213c0;
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



// FUNCTION 146b0fe68 FUN_146b0fe68 body=21 status=ok
// SIG undefined FUN_146b0fe68(void)

undefined8 FUN_146b0fe68(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146b0fe7e FUN_146b0fe7e body=34 status=ok
// SIG undefined FUN_146b0fe7e(void)

undefined8 FUN_146b0fe7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 146b0fea8 FUN_146b0fea8 body=350 status=ok
// SIG undefined FUN_146b0fea8(void)

bool FUN_146b0fea8(longlong *param_1,longlong *param_2)

{
  undefined1 (*pauVar1) [16];
  short sVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  char cVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar6 = (**(code **)(*param_1 + 0x38))();
  iVar7 = (**(code **)(*param_2 + 0x38))(param_2);
  if (iVar6 == iVar7) {
    sVar2 = (short)param_1[1];
    if (sVar2 == (short)param_2[1]) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    if (sVar2 == 2 || (short)param_2[1] == 2) {
      plVar8 = param_2;
      if (sVar2 == 0x17) {
        plVar8 = param_1;
      }
      if (sVar2 == 2) {
        param_2 = param_1;
      }
      if ((((char)plVar8[2] == -1) && ((*(byte *)((longlong)plVar8 + 0x11) & 0xf) == 2)) &&
         (bVar9 = true, (*(uint *)((longlong)param_2 + 0xc) & 0xf0000000) == 0xe0000000))
      goto LAB_146b0ff91;
      pauVar1 = (undefined1 (*) [16])(plVar8 + 2);
      cVar5 = FUN_146b1001a(pauVar1);
      if ((cVar5 != '\0') && (bVar9 = true, *(int *)((longlong)param_2 + 0xc) == 0))
      goto LAB_146b0ff91;
      cVar5 = FUN_146b10057(pauVar1);
      if ((cVar5 != '\0') && (bVar9 = true, *(int *)((longlong)param_2 + 0xc) == 0x7f000001))
      goto LAB_146b0ff91;
      if ((((*(short *)*pauVar1 == 0) && (*(short *)((longlong)plVar8 + 0x12) == 0)) &&
          (*(short *)((longlong)plVar8 + 0x14) == 0)) &&
         (((*(short *)((longlong)plVar8 + 0x16) == 0 && ((short)plVar8[3] == 0)) &&
          (*(short *)((longlong)plVar8 + 0x1a) == -1)))) {
        uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
        local_30 = 0;
        uStack_28 = 0xffff0000;
        uStack_24 = (undefined1)uVar3;
        uStack_23 = (undefined1)((uint)uVar3 >> 8);
        uStack_22 = (undefined1)((uint)uVar3 >> 0x10);
        uStack_21 = (undefined1)((uint)uVar3 >> 0x18);
        auVar4[0xc] = uStack_24;
        auVar4._0_12_ = ZEXT412(0xffff0000) << 0x40;
        auVar4[0xd] = uStack_23;
        auVar4[0xe] = uStack_22;
        auVar4[0xf] = uStack_21;
        bVar9 = *pauVar1 == auVar4;
        goto LAB_146b0ff91;
      }
    }
  }
  bVar9 = false;
LAB_146b0ff91:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1001a FUN_146b1001a body=61 status=ok
// SIG undefined FUN_146b1001a(void)

bool FUN_146b1001a(short *param_1)

{
  bool bVar1;
  
  if ((((*param_1 == 0) && (param_1[1] == 0)) && (param_1[2] == 0)) &&
     (((param_1[3] == 0 && (param_1[4] == 0)) && ((param_1[5] == 0 && (param_1[6] == 0)))))) {
    bVar1 = param_1[7] == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



// FUNCTION 146b10057 FUN_146b10057 body=62 status=ok
// SIG undefined FUN_146b10057(void)

bool FUN_146b10057(short *param_1)

{
  bool bVar1;
  
  if ((((*param_1 == 0) && (param_1[1] == 0)) && (param_1[2] == 0)) &&
     (((param_1[3] == 0 && (param_1[4] == 0)) && ((param_1[5] == 0 && (param_1[6] == 0)))))) {
    bVar1 = param_1[7] == 0x100;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



// FUNCTION 146b100aa FUN_146b100aa body=32 status=ok
// SIG undefined FUN_146b100aa(void)

void FUN_146b100aa(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(short *)(param_1 + 8) == 0x17) {
    uVar1 = Ordinal_8(param_2);
    *(undefined4 *)(param_1 + 0x20) = uVar1;
  }
  return;
}



// FUNCTION 146b100ca FUN_146b100ca body=209 status=ok
// SIG undefined FUN_146b100ca(void)

void FUN_146b100ca(longlong *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0xa8))(param_1,&local_38);
  cVar1 = FUN_1403f35db(local_38,&DAT_14c9908f8);
  if (cVar1 == '\0') {
    uVar2 = Ordinal_8(param_2);
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
    *(undefined2 *)(param_1 + 1) = 2;
  }
  else if (param_2 == -1) {
    (**(code **)(*param_1 + 0xf0))(param_1);
  }
  else if (param_2 == 0) {
    (**(code **)(*param_1 + 0xe0))(param_1);
  }
  else {
    uVar2 = Ordinal_8(param_2);
    local_30 = 0;
    local_28 = 0xffff0000;
    local_24 = (undefined1)uVar2;
    local_23 = (undefined1)((uint)uVar2 >> 8);
    local_22 = (undefined1)((uint)uVar2 >> 0x10);
    local_21 = (undefined1)((uint)uVar2 >> 0x18);
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1019c FUN_146b1019c body=20 status=ok
// SIG undefined FUN_146b1019c(void)

void FUN_146b1019c(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  for (lVar1 = 0x10; param_1 = param_1 + 1, lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
  }
  return;
}



// FUNCTION 146b101b0 FUN_146b101b0 body=160 status=ok
// SIG undefined FUN_146b101b0(void)

void FUN_146b101b0(longlong *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0xa8))(param_1,&local_28);
  cVar1 = FUN_1403f35db(local_28,&DAT_14c9908f8);
  if (cVar1 == '\0') {
    uVar2 = Ordinal_14(*(undefined4 *)((longlong)param_1 + 0xc));
  }
  else {
    *param_2 = 0;
    if (((((short)param_1[2] != 0) || (*(short *)((longlong)param_1 + 0x12) != 0)) ||
        (*(short *)((longlong)param_1 + 0x14) != 0)) ||
       (((*(short *)((longlong)param_1 + 0x16) != 0 || ((short)param_1[3] != 0)) ||
        (*(short *)((longlong)param_1 + 0x1a) != -1)))) goto LAB_146b10232;
    uVar2 = *(uint *)((longlong)param_1 + 0x1c);
    uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  }
  *param_2 = uVar2;
LAB_146b10232:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1025c FUN_146b1025c body=66 status=ok
// SIG undefined FUN_146b1025c(void)

void FUN_146b1025c(longlong param_1)

{
  undefined4 uVar1;
  
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar1 = Ordinal_8(0);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined2 *)(param_1 + 8) = 2;
  return;
}



// FUNCTION 146b102d6 FUN_146b102d6 body=69 status=ok
// SIG undefined FUN_146b102d6(void)

void FUN_146b102d6(longlong param_1)

{
  undefined4 uVar1;
  
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar1 = Ordinal_8(0xffffffff);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined2 *)(param_1 + 8) = 2;
  return;
}



// FUNCTION 146b10354 FUN_146b10354 body=69 status=ok
// SIG undefined FUN_146b10354(void)

void FUN_146b10354(longlong param_1)

{
  undefined4 uVar1;
  
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar1 = Ordinal_8(0x7f000001);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined2 *)(param_1 + 8) = 2;
  return;
}



// FUNCTION 146b103d2 FUN_146b103d2 body=755 status=ok
// SIG undefined FUN_146b103d2(void)

undefined2 ** FUN_146b103d2(longlong *param_1,undefined2 **param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  wchar_t *pwVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_5b8 [32];
  undefined8 local_598;
  undefined4 local_590;
  undefined4 local_588;
  undefined2 *local_578;
  int local_570;
  undefined8 local_568;
  undefined2 *local_560;
  int local_558;
  undefined4 local_554;
  longlong local_460;
  undefined8 local_458;
  undefined1 local_448 [1040];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_5b8;
  FUN_1400b22c2(param_2,&DAT_149e02088);
  uVar2 = (**(code **)(*param_1 + 0x108))(param_1);
  local_588 = 2;
  local_590 = 0;
  local_598 = 0;
  iVar3 = getnameinfo(param_1 + 1,uVar2,local_448,0x401);
  if (iVar3 != 0) goto LAB_146b1044f;
  (**(code **)(*param_1 + 0xa8))(param_1,&local_568);
  cVar1 = FUN_1403f35db(local_568,&DAT_14c9908f8);
  if (cVar1 == '\0') {
    FUN_1400b22c2(&local_560,local_448);
    local_578 = local_560;
    if (&local_560 == param_2) goto LAB_146b1064d;
    if (*param_2 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    *param_2 = local_560;
    local_560 = (undefined2 *)0x0;
    *(int *)(param_2 + 1) = local_558;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_554;
  }
  else {
    FUN_144a81018();
    FUN_140056680(&local_578,local_458);
    if (local_460 != 0) {
      FUN_1400020a8();
    }
    FUN_1400b22c2(&local_560,&DAT_149f215a3);
    iVar3 = local_558 + -1;
    puVar5 = local_560;
    if (local_558 == 0) {
      puVar5 = &DAT_149dfb77a;
      iVar3 = 0;
    }
    local_590 = 0xffffffff;
    local_598 = CONCAT44(local_598._4_4_,1);
    uVar4 = FUN_1447ee042(&local_578,puVar5,iVar3,0);
    if (local_560 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (uVar4 != 0xffffffff) {
      uVar7 = local_570 - 1;
      if (local_570 == 0) {
        uVar7 = 0;
      }
      if ((int)uVar7 <= (int)uVar4) {
        uVar4 = uVar7;
      }
      uVar8 = (ulonglong)uVar4;
      if ((int)uVar4 < 1) {
        uVar8 = 0;
      }
      uVar7 = uVar7 - (int)uVar8;
      if (0 < (int)uVar7) {
        iVar3 = local_570 - (uVar7 + (int)uVar8);
        if (iVar3 != 0) {
          memmove(local_578 + uVar8,local_578 + uVar8 + uVar7,(longlong)iVar3 * 2);
        }
        local_570 = local_570 - uVar7;
      }
    }
    puVar5 = local_578;
    if (local_570 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    pwVar6 = L"%s";
    if (param_3 != '\0') {
      pwVar6 = L"[%s]";
    }
    FUN_140002266(&local_560,pwVar6,puVar5);
    if (&local_560 == param_2) {
      if (local_560 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      *param_2 = local_560;
      local_560 = (undefined2 *)0x0;
      *(int *)(param_2 + 1) = local_558;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_554;
    }
LAB_146b1064d:
    if (local_578 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (param_3 != '\0') {
    uVar2 = (**(code **)(*param_1 + 0x38))(param_1);
    FUN_140002266(&local_560,&DAT_149f215a6,uVar2);
    iVar3 = local_558 + -1;
    if (local_558 == 0) {
      iVar3 = 0;
    }
    FUN_1400020e8(param_2,local_560,iVar3);
    if (local_560 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_146b1044f:
  if ((local_38 ^ (ulonglong)auStack_5b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146b106c6 FUN_146b106c6 body=207 status=ok
// SIG undefined FUN_146b106c6(void)

bool FUN_146b106c6(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0xa8))(param_1,&local_30);
  (**(code **)(*param_2 + 0xa8))(param_2,&local_38);
  if (local_38 == local_30) {
    iVar2 = (**(code **)(*param_1 + 0x38))(param_1);
    iVar3 = (**(code **)(*param_2 + 0x38))(param_2);
    if (iVar2 == iVar3) {
      cVar1 = FUN_1403f35db(local_30,&DAT_14c9908f8);
      if (cVar1 != '\0') {
        bVar4 = *(undefined1 (*) [16])(param_2 + 2) == *(undefined1 (*) [16])(param_1 + 2);
        goto LAB_146b10775;
      }
      cVar1 = FUN_1403f35db(local_30,&DAT_14c9908e8);
      if (cVar1 != '\0') {
        bVar4 = *(int *)((longlong)param_1 + 0xc) == *(int *)((longlong)param_2 + 0xc);
        goto LAB_146b10775;
      }
    }
  }
  bVar4 = false;
LAB_146b10775:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar4;
}



// FUNCTION 146b10796 FUN_146b10796 body=213 status=ok
// SIG undefined FUN_146b10796(void)

int FUN_146b10796(longlong *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0xa8))(param_1,&local_28);
  cVar1 = FUN_1403f35db(local_28,&DAT_14c9908e8);
  if (cVar1 == '\0') {
    cVar1 = FUN_1403f35db(local_28,&DAT_14c9908f8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x80))(param_1,&local_38,1);
      puVar4 = local_38;
      if (local_30 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      iVar2 = FUN_144a8db9c(puVar4);
      if (local_38 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    iVar2 = Ordinal_14(*(undefined4 *)((longlong)param_1 + 0xc));
    iVar3 = (**(code **)(*param_1 + 0x38))(param_1);
    iVar2 = iVar3 * 0x17 + iVar2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar2;
}



// FUNCTION 146b1086c FUN_146b1086c body=26 status=ok
// SIG undefined FUN_146b1086c(void)

bool FUN_146b1086c(longlong param_1)

{
  int iVar1;
  
  iVar1 = Ordinal_22(*(undefined8 *)(param_1 + 0x28),0);
  return iVar1 == 0;
}



// FUNCTION 146b10886 FUN_146b10886 body=24 status=ok
// SIG undefined FUN_146b10886(void)

bool FUN_146b10886(longlong param_1)

{
  int iVar1;
  
  iVar1 = Ordinal_13(*(undefined8 *)(param_1 + 0x28));
  return iVar1 == 0;
}



// FUNCTION 146b1089e FUN_146b1089e body=163 status=ok
// SIG undefined FUN_146b1089e(void)

undefined8 FUN_146b1089e(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined1 local_44 [8];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3c = 0x80;
  lVar2 = Ordinal_1(*(undefined8 *)(param_1 + 0x28),param_2 + 1);
  if (lVar2 == -1) {
    uVar3 = 0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x40);
    (**(code **)(*param_2 + 0xa8))(param_2,local_44);
    local_58 = local_44;
    uVar3 = (**(code **)(*plVar1 + 0x168))(plVar1,lVar2,*(undefined4 *)(param_1 + 8),param_3);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b10942 FUN_146b10942 body=129 status=ok
// SIG undefined FUN_146b10942(void)

bool FUN_146b10942(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = Ordinal_19(*(undefined8 *)(param_1 + 0x28),param_2,param_3,*(undefined4 *)(param_1 + 0x38)
                    );
  *param_4 = iVar1;
  if (-1 < iVar1) {
    QueryPerformanceCounter(&local_28);
    LOCK();
    *(double *)(param_1 + 0x30) = (double)local_28.QuadPart * DAT_14c83f420 + 16777216.0;
    UNLOCK();
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return -1 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b109c8 FUN_146b109c8 body=196 status=ok
// SIG undefined FUN_146b109c8(void)

undefined8
FUN_146b109c8(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4,uint param_5)

{
  double dVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar3 = *(int *)(param_1 + 8);
  iVar2 = Ordinal_16(*(undefined8 *)(param_1 + 0x28),param_2,param_3,param_5 >> 5 & 8 | param_5 & 2)
  ;
  *param_4 = iVar2;
  if (iVar2 < 0) {
    if (iVar3 == 2) {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0xc0))
                        (*(longlong **)(param_1 + 0x40),iVar2);
      *param_4 = 0;
      if (iVar3 == 7) goto LAB_146b10a14;
    }
    else {
      *param_4 = 0;
    }
  }
  else if (iVar3 != 2 || iVar2 != 0) {
LAB_146b10a14:
    QueryPerformanceCounter(&local_28);
    LOCK();
    dVar1 = *(double *)(param_1 + 0x30);
    *(double *)(param_1 + 0x30) = (double)local_28.QuadPart * DAT_14c83f420 + 16777216.0;
    UNLOCK();
    uVar4 = CONCAT71((int7)((ulonglong)dVar1 >> 8),1);
    goto LAB_146b10a51;
  }
  uVar4 = 0;
LAB_146b10a51:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 146b10a8e FUN_146b10a8e body=90 status=ok
// SIG undefined FUN_146b10a8e(void)

undefined8 FUN_146b10a8e(longlong *param_1,ulonglong param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  
  if (((param_2 & 0xfffffffd) == 0) &&
     (cVar1 = (**(code **)(*param_1 + 0x130))(param_1,0,param_3), cVar1 == '\0')) {
    return CONCAT71((uint7)(param_2 >> 8) & 0xffffff,1);
  }
  uVar2 = (int)param_2 - 1;
  if (uVar2 < 2) {
    cVar1 = (**(code **)(*param_1 + 0x130))(param_1,1,param_3);
    if (cVar1 == '\0') {
      return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 146b10ae8 FUN_146b10ae8 body=101 status=ok
// SIG undefined FUN_146b10ae8(void)

bool FUN_146b10ae8(longlong param_1,byte param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  uint local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(param_1 + 8) == 2) {
    local_c = (uint)param_2;
    local_18 = 4;
    iVar1 = Ordinal_21(*(undefined8 *)(param_1 + 0x28),6,1);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = true;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b10b4e FUN_146b10b4e body=91 status=ok
// SIG undefined FUN_146b10b4e(void)

bool FUN_146b10b4e(longlong param_1,byte param_2)

{
  int iVar1;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  uint local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = (uint)param_2;
  local_18 = 4;
  iVar1 = Ordinal_21(*(undefined8 *)(param_1 + 0x28),0xffff,0x20);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b10baa FUN_146b10baa body=203 status=ok
// SIG undefined FUN_146b10baa(void)

bool FUN_146b10baa(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_2 + 0xa8))(param_2,&local_40);
  cVar1 = FUN_1403f35db(local_40,&DAT_14c9908f8);
  if (cVar1 == '\0') {
    uStack_34 = 0;
    local_38 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    local_48 = 8;
    uVar5 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_2 + 0x118))(param_2);
    local_28 = Ordinal_8(uVar2);
    local_38 = (undefined4)param_2[2];
    uStack_34 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_30 = (undefined4)param_2[3];
    uStack_2c = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    local_48 = 0x14;
    uVar5 = 0x29;
  }
  iVar3 = Ordinal_21(uVar4,uVar5,0xc);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar3 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b10c76 FUN_146b10c76 body=209 status=ok
// SIG undefined FUN_146b10c76(void)

bool FUN_146b10c76(longlong param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_2 + 0xa8))(param_2,&local_50);
  cVar1 = FUN_1403f35db(local_50,&DAT_14c9908f8);
  if (cVar1 == '\0') {
    uStack_44 = *(undefined4 *)((longlong)param_3 + 0xc);
    local_48 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    local_58 = 8;
    uVar5 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_3 + 0x118))(param_3);
    local_38 = Ordinal_8(uVar2);
    local_48 = (undefined4)param_2[2];
    uStack_44 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_40 = (undefined4)param_2[3];
    uStack_3c = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    local_58 = 0x14;
    uVar5 = 0x29;
  }
  iVar3 = Ordinal_21(uVar4,uVar5,0xc);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return iVar3 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b10d48 FUN_146b10d48 body=203 status=ok
// SIG undefined FUN_146b10d48(void)

bool FUN_146b10d48(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_2 + 0xa8))(param_2,&local_40);
  cVar1 = FUN_1403f35db(local_40,&DAT_14c9908f8);
  if (cVar1 == '\0') {
    uStack_34 = 0;
    local_38 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    local_48 = 8;
    uVar5 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_2 + 0x118))(param_2);
    local_28 = Ordinal_8(uVar2);
    local_38 = (undefined4)param_2[2];
    uStack_34 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_30 = (undefined4)param_2[3];
    uStack_2c = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    local_48 = 0x14;
    uVar5 = 0x29;
  }
  iVar3 = Ordinal_21(uVar4,uVar5,0xd);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar3 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b10e14 FUN_146b10e14 body=209 status=ok
// SIG undefined FUN_146b10e14(void)

bool FUN_146b10e14(longlong param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_2 + 0xa8))(param_2,&local_50);
  cVar1 = FUN_1403f35db(local_50,&DAT_14c9908f8);
  if (cVar1 == '\0') {
    uStack_44 = *(undefined4 *)((longlong)param_3 + 0xc);
    local_48 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    local_58 = 8;
    uVar5 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_3 + 0x118))(param_3);
    local_38 = Ordinal_8(uVar2);
    local_48 = (undefined4)param_2[2];
    uStack_44 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_40 = (undefined4)param_2[3];
    uStack_3c = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    local_58 = 0x14;
    uVar5 = 0x29;
  }
  iVar3 = Ordinal_21(uVar4,uVar5,0xd);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return iVar3 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b10ee6 FUN_146b10ee6 body=145 status=ok
// SIG undefined FUN_146b10ee6(void)

bool FUN_146b10ee6(longlong param_1,byte param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  uint local_20;
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  cVar1 = FUN_1403f35db(*(undefined8 *)(param_1 + 0x20),&DAT_14c9908f8);
  if (cVar1 == '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    local_28 = 1;
    puVar5 = (uint *)&local_19;
    uVar4 = 0;
  }
  else {
    local_20 = (uint)param_2;
    puVar5 = &local_20;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    local_28 = 4;
    uVar4 = 0x29;
  }
  iVar2 = Ordinal_21(uVar3,uVar4,0xb,puVar5);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar2 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b10f78 FUN_146b10f78 body=145 status=ok
// SIG undefined FUN_146b10f78(void)

bool FUN_146b10f78(longlong param_1,byte param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  uint local_20;
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  cVar1 = FUN_1403f35db(*(undefined8 *)(param_1 + 0x20),&DAT_14c9908f8);
  if (cVar1 == '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    local_28 = 1;
    puVar5 = (uint *)&local_19;
    uVar4 = 0;
  }
  else {
    local_20 = (uint)param_2;
    puVar5 = &local_20;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    local_28 = 4;
    uVar4 = 0x29;
  }
  iVar2 = Ordinal_21(uVar3,uVar4,10,puVar5);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar2 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1100a FUN_146b1100a body=186 status=ok
// SIG undefined FUN_146b1100a(void)

bool FUN_146b1100a(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0xa8))(param_2,&local_28);
  cVar1 = FUN_1403f35db(local_28,&DAT_14c9908f8);
  if (cVar1 == '\0') {
    local_2c = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar5 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_2 + 0x118))(param_2);
    local_2c = Ordinal_8(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar5 = 0x29;
  }
  local_38 = 4;
  iVar3 = Ordinal_21(uVar4,uVar5,9);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar3 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b110c6 FUN_146b110c6 body=91 status=ok
// SIG undefined FUN_146b110c6(void)

bool FUN_146b110c6(longlong param_1,byte param_2)

{
  int iVar1;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  uint local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = (uint)param_2;
  local_18 = 4;
  iVar1 = Ordinal_21(*(undefined8 *)(param_1 + 0x28),0xffff,4);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b11122 FUN_146b11122 body=97 status=ok
// SIG undefined FUN_146b11122(void)

bool FUN_146b11122(longlong param_1,byte param_2,undefined2 param_3)

{
  int iVar1;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  ushort local_c;
  undefined2 local_a;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = (ushort)param_2;
  local_18 = 4;
  local_a = param_3;
  iVar1 = Ordinal_21(*(undefined8 *)(param_1 + 0x28),0xffff,0x80);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b11188 FUN_146b11188 body=144 status=ok
// SIG undefined FUN_146b11188(void)

ulonglong FUN_146b11188(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 unaff_RBX;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 4;
  local_38 = (undefined4 *)CONCAT44(local_38._4_4_,4);
  local_2c = param_2;
  iVar1 = Ordinal_21(*(undefined8 *)(param_1 + 0x28),0xffff,0x1001);
  local_38 = &local_30;
  Ordinal_7(*(undefined8 *)(param_1 + 0x28),0xffff,0x1001,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),iVar1 == 0) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1121a FUN_146b1121a body=144 status=ok
// SIG undefined FUN_146b1121a(void)

ulonglong FUN_146b1121a(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 unaff_RBX;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 4;
  local_38 = (undefined4 *)CONCAT44(local_38._4_4_,4);
  local_2c = param_2;
  iVar1 = Ordinal_21(*(undefined8 *)(param_1 + 0x28),0xffff,0x1002);
  local_38 = &local_30;
  Ordinal_7(*(undefined8 *)(param_1 + 0x28),0xffff,0x1002,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),iVar1 == 0) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b112ac FUN_146b112ac body=190 status=ok
// SIG undefined FUN_146b112ac(void)

bool FUN_146b112ac(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  size_t sVar2;
  undefined1 auStack_268 [40];
  undefined1 local_240 [256];
  longlong local_140;
  undefined8 local_138;
  char local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_268;
  iVar1 = Ordinal_57(local_128,0x100);
  if (iVar1 == 0) {
    local_140 = 0;
    sVar2 = strlen(local_128);
    FUN_1446e6fe8(local_240,local_128,sVar2 & 0xffffffff,1);
    FUN_14020fad6(param_2,local_138);
    if (local_140 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1136c FUN_146b1136c body=113 status=ok
// SIG undefined FUN_146b1136c(void)

undefined8 * FUN_146b1136c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_14001cc68(0x90,0x10);
  FUN_14135dece(uVar1,param_1,param_3);
  *param_2 = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_149f22470;
  puVar2[2] = uVar1;
  param_2[1] = puVar2;
  return param_2;
}



// FUNCTION 146b113f8 FUN_146b113f8 body=50 status=ok
// SIG undefined FUN_146b113f8(void)

undefined8 *
FUN_146b113f8(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_3,param_4,param_5);
  *param_2 = param_1;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 146b1142a FUN_146b1142a body=249 status=ok
// SIG undefined FUN_146b1142a(void)

undefined8 * FUN_146b1142a(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_149f21740;
  param_1[1] = 0;
  param_1[2] = 0;
  (**(code **)(*param_2 + 0xa0))(param_2,&local_30);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    param_1[1] = local_30;
    plVar4 = (longlong *)param_1[2];
    if (plVar4 == (longlong *)0x0) goto LAB_146b114db;
    param_1[2] = 0;
LAB_146b114a5:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_146b114db;
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
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    param_1[1] = local_30;
    plVar4 = (longlong *)param_1[2];
    if (local_28 != plVar4) {
      param_1[2] = local_28;
      if (plVar4 == (longlong *)0x0) goto LAB_146b114db;
      goto LAB_146b114a5;
    }
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146b114db;
    (**(code **)*local_28)(local_28);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_146b114db:
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
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b11524 FUN_146b11524 body=530 status=ok
// SIG undefined FUN_146b11524(void)

void FUN_146b11524(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_1e8 [32];
  undefined2 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1a8;
  longlong local_1a0;
  undefined1 local_198 [48];
  int local_168;
  longlong local_160;
  int local_158;
  undefined8 local_150 [32];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_150[0] = 0;
  plVar4 = (longlong *)FUN_140272950(local_150);
  iVar5 = 0;
  do {
    FUN_144a81018(local_150,param_1 + 0x18);
    local_1b8 = 0;
    local_1c0 = 0;
    local_1c8 = 0;
    (**(code **)(*plVar4 + 0x40))(plVar4,local_198,local_48,0);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    *(int *)(param_1 + 0x118) = local_168;
    if (local_168 < 0x30) {
      if (local_168 == 0) {
        if (0 < local_158) {
          uVar2 = *(undefined8 *)(local_160 + 0x18);
          plVar3 = *(longlong **)(local_160 + 0x20);
          if (plVar3 == (longlong *)0x0) {
            *(undefined8 *)(param_1 + 8) = uVar2;
            plVar6 = *(longlong **)(param_1 + 0x10);
            if (plVar6 != (longlong *)0x0) {
              *(undefined8 *)(param_1 + 0x10) = 0;
LAB_146b116fd:
              LOCK();
              plVar3 = plVar6 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*plVar6)(plVar6);
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar5 = *piVar1;
                UNLOCK();
joined_r0x000146b116ee:
                if (iVar5 == 0) {
                  (**(code **)(*plVar6 + 0x10))(plVar6);
                }
              }
            }
          }
          else {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
            *(undefined8 *)(param_1 + 8) = uVar2;
            plVar6 = *(longlong **)(param_1 + 0x10);
            if (plVar3 == plVar6) {
              LOCK();
              plVar6 = plVar3 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 == 0) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar5 = *piVar1;
                UNLOCK();
                plVar6 = plVar3;
                goto joined_r0x000146b116ee;
              }
            }
            else {
              *(longlong **)(param_1 + 0x10) = plVar3;
              if (plVar6 != (longlong *)0x0) goto LAB_146b116fd;
            }
          }
          local_1a8 = *(undefined8 *)(param_1 + 8);
          local_1a0 = *(longlong *)(param_1 + 0x10);
          if (local_1a0 != 0) {
            LOCK();
            *(int *)(local_1a0 + 8) = *(int *)(local_1a0 + 8) + 1;
            UNLOCK();
          }
          FUN_146b11738(plVar4,param_1 + 0x18,&local_1a8);
          FUN_14135ddbe(local_198);
LAB_146b11692:
          if ((local_38 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        *(undefined4 *)(param_1 + 0x118) = 0x33;
      }
      else if (local_168 == 0x20) goto LAB_146b115e2;
    }
    else if ((local_168 == 0x33) || (local_168 == 0x30)) {
LAB_146b115e2:
      iVar5 = 3;
    }
    FUN_14135ddbe(local_198);
    if (((*(int *)(param_1 + 0x118) == 0) || (1 < iVar5)) ||
       (iVar5 = iVar5 + 1, *(int *)(param_1 + 0x11c) != 0)) goto LAB_146b11692;
  } while( true );
}



// FUNCTION 146b11738 FUN_146b11738 body=185 status=ok
// SIG undefined FUN_146b11738(void)

void FUN_146b11738(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong *local_48;
  longlong local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  FUN_1400b22c2(local_58,param_2);
  local_48 = local_58;
  local_40 = param_3;
  FUN_146b13070(param_1 + 0x30,local_34);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  plVar3 = *(longlong **)(param_3 + 8);
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b117f2 FUN_146b117f2 body=160 status=ok
// SIG undefined FUN_146b117f2(void)

ulonglong FUN_146b117f2(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  ulonglong unaff_RBP;
  ulonglong uVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 < 0) {
    unaff_RBP = 0;
  }
  else {
    uVar2 = 0;
    do {
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),param_3 < 1);
      if (param_3 < 1) break;
      local_44 = 0;
      local_58 = 0;
      (**(code **)(**(longlong **)(param_1 + 8) + 0x68))
                (*(longlong **)(param_1 + 8),uVar2 + param_2,param_3,&local_44);
      iVar1 = 0;
      if (0 < local_44) {
        iVar1 = local_44;
      }
      param_3 = param_3 - iVar1;
      uVar2 = (ulonglong)(uint)((int)uVar2 + iVar1);
    } while (0 < local_44);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 146b11894 FUN_146b11894 body=139 status=ok
// SIG undefined FUN_146b11894(void)

bool FUN_146b11894(longlong param_1,longlong param_2,int param_3)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong uVar3;
  int iVar4;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  do {
    iVar4 = param_3;
    if (iVar4 < 1) break;
    local_34 = 0;
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x58))
                      (*(longlong **)(param_1 + 8),param_2,iVar4,&local_34);
    uVar3 = (longlong)(int)local_34;
    uVar1 = (ulonglong)local_34;
    if (cVar2 == '\0') {
      uVar3 = 0;
      uVar1 = 0;
    }
    param_2 = param_2 + uVar3;
    param_3 = iVar4 - (int)uVar1;
  } while (cVar2 != '\0');
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4 < 1;
}



// FUNCTION 146b11920 FUN_146b11920 body=280 status=ok
// SIG undefined FUN_146b11920(void)

longlong * FUN_146b11920(longlong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  uVar1 = *param_2;
  puVar3 = *(uint **)param_1[1];
  if ((uint *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  uVar2 = *param_2;
  if ((((*(byte *)(param_1 + 5) & 1) == 0) || (uVar2 == uVar1)) ||
     (uVar2 != (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18))) {
    if (uVar2 != uVar1) {
      return param_1;
    }
  }
  else {
    *(byte *)((longlong)param_1 + 0x2a) = *(byte *)((longlong)param_1 + 0x2a) ^ 2;
    *param_2 = uVar1;
  }
  puVar3 = *(uint **)param_1[1];
  if ((uint *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 2;
  puVar3 = *(uint **)param_1[1];
  if ((uint *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 146b11a48 FUN_146b11a48 body=302 status=ok
// SIG undefined FUN_146b11a48(void)

undefined8 *
FUN_146b11a48(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined2 *param_5,undefined8 param_6,undefined4 *param_7,longlong *param_8)

{
  undefined2 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined2 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  longlong *local_b0;
  longlong local_a8 [2];
  longlong local_98 [2];
  longlong local_88 [2];
  undefined8 local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_149f225a0;
  local_88[0] = *param_8;
  local_78[0] = 0;
  if (local_88[0] != 0) {
    plVar3 = param_8 + 4;
    if ((longlong *)param_8[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_8[2];
    }
    (**(code **)*plVar3)(plVar3,local_78);
  }
  uVar2 = *param_7;
  uVar1 = *param_5;
  FUN_140056680(local_98,*param_4);
  FUN_140056680(local_a8,*param_3);
  local_b0 = local_88;
  local_c0 = param_6;
  local_c8 = uVar1;
  local_b8 = uVar2;
  FUN_146b12c1a(param_1 + 2,*param_2,local_a8,local_98);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b11b78 FUN_146b11b78 body=402 status=ok
// SIG undefined FUN_146b11b78(void)

undefined8 * FUN_146b11b78(longlong *param_1,char *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  cVar4 = FUN_146b11d0c();
  if (cVar4 == '\0') {
    puVar5 = (undefined8 *)FUN_14001cc68(0x170,0x10);
    *puVar5 = &PTR_FUN_149f21760;
    *(undefined4 *)(puVar5 + 0x23) = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *(undefined4 *)((longlong)puVar5 + 0x11c) = 0;
    puVar5[0x25] = 0;
    puVar5[0x24] = &PTR_FUN_149e06640;
    *(undefined4 *)(puVar5 + 0x26) = 0;
    puVar5[0x27] = 0;
    puVar5[0x28] = 0;
    *(undefined2 *)(puVar5 + 0x29) = 3;
    puVar5[0x2a] = 0xffffffffffffffff;
    puVar5[0x2b] = 0;
    puVar5[0x24] = &PTR_FUN_149f22490;
    puVar5[0x2d] = puVar5;
    strncpy((char *)(puVar5 + 3),param_2,0x100);
    *(undefined1 *)((longlong)puVar5 + 0x117) = 0;
    local_78 = 0;
    local_80 = 0xffffffffffffffff;
    local_88 = 0;
    FUN_1402a8900(puVar5 + 0x24,0,DAT_14c8442c0,3);
  }
  else {
    local_68 = local_58;
    local_60 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
    }
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x30))(param_1,&local_68);
  }
  plVar3 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b11d0c FUN_146b11d0c body=277 status=ok
// SIG undefined FUN_146b11d0c(void)

ulonglong FUN_146b11d0c(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  plVar9 = (longlong *)(param_1 + 0x30);
  FUN_1400b22c2(&local_40,param_2);
  puVar8 = local_40;
  if (local_38 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  uVar11 = 0;
  uVar7 = (ulonglong)(local_38 - 1);
  if (local_38 == 0) {
    uVar7 = uVar11;
  }
  uVar5 = FUN_144a49b4a(uVar7,puVar8);
  iVar6 = FUN_146b12fa4(plVar9,uVar5,&local_40);
  if (iVar6 != -1) {
    uVar11 = (longlong)iVar6 * 0x28 + *plVar9;
  }
  puVar10 = (undefined8 *)(uVar11 + 0x10);
  if (uVar11 == 0) {
    puVar10 = (undefined8 *)0x0;
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (puVar10 != (undefined8 *)0x0) {
    uVar3 = *puVar10;
    lVar4 = puVar10[1];
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar9 = (longlong *)param_3[1];
    *param_3 = uVar3;
    param_3[1] = lVar4;
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
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)plVar9 >> 8),puVar10 != (undefined8 *)0x0) & 0xffffffff;
}



// FUNCTION 146b11e22 FUN_146b11e22 body=305 status=ok
// SIG undefined FUN_146b11e22(void)

undefined8 *
FUN_146b11e22(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 *puVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 *local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x90))();
  *param_4 = 0;
  cVar5 = (**(code **)(*param_1 + 0xe8))(param_1,param_2);
  if (cVar5 == '\0') {
    *param_4 = 1;
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    cVar5 = (**(code **)(*param_1 + 200))(param_1);
    if ((cVar5 == '\0') || ((int)uStack_40 == 0)) {
      puVar6 = (undefined1 *)FUN_1400d7a00();
      (**(code **)(*param_3 + 0x10))
                (param_3,L"Could not fetch the local adapter addresses",*puVar6,puVar6 + 4);
      (**(code **)(*(longlong *)*param_2 + 0x68))();
    }
    else if (0 < (int)uStack_40) {
      (**(code **)(*(longlong *)*local_48 + 0xa0))((longlong *)*local_48,&local_58);
      uVar3 = *param_2;
      plVar4 = (longlong *)param_2[1];
      *param_2 = CONCAT44(uStack_54,local_58);
      param_2[1] = CONCAT44(uStack_4c,uStack_50);
      local_38._0_4_ = (undefined4)uVar3;
      local_58 = (undefined4)local_38;
      local_38._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      uStack_54 = local_38._4_4_;
      uStack_30._0_4_ = SUB84(plVar4,0);
      uStack_50 = (undefined4)uStack_30;
      uStack_30._4_4_ = (undefined4)((ulonglong)plVar4 >> 0x20);
      uStack_4c = uStack_30._4_4_;
      local_38 = uVar3;
      uStack_30 = plVar4;
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
    }
    FUN_146b12a16(local_48,uStack_40 & 0xffffffff);
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b11f54 FUN_146b11f54 body=53 status=ok
// SIG undefined FUN_146b11f54(void)

undefined4 FUN_146b11f54(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_1403f35db(*param_2,&DAT_14c9908f8);
  uVar2 = 2;
  if (cVar1 == '\0') {
    uVar2 = FUN_1403f35db(*param_2,&DAT_14c9908e8);
  }
  return uVar2;
}



// FUNCTION 146b11f8a FUN_146b11f8a body=86 status=ok
// SIG undefined FUN_146b11f8a(void)

undefined8 FUN_146b11f8a(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_14001cc68(0x18,0x10);
  FUN_146b1142a(uVar4,*param_2);
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
  return uVar4;
}



// FUNCTION 146b11fe0 FUN_146b11fe0 body=52 status=ok
// SIG undefined FUN_146b11fe0(void)

wchar_t * FUN_146b11fe0(longlong *param_1,uint param_2)

{
  wchar_t *pwVar1;
  
  if (param_2 == 0x38) {
    param_2 = (**(code **)(*param_1 + 0xb8))();
  }
  if (param_2 < 0x38) {
    pwVar1 = (wchar_t *)(&PTR_u_SE_NO_ERROR_149f225d0)[param_2];
  }
  else {
    pwVar1 = L"Unknown Error";
  }
  return pwVar1;
}



// FUNCTION 146b12028 FUN_146b12028 body=33 status=ok
// SIG undefined FUN_146b12028(void)

bool FUN_146b12028(longlong param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  
  if (param_2 < 3) {
    iVar1 = Ordinal_22(*(undefined8 *)(param_1 + 0x28));
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 146b1204a FUN_146b1204a body=655 status=ok
// SIG undefined FUN_146b1204a(void)

undefined8
FUN_146b1204a(longlong param_1,undefined8 param_2,undefined4 param_3,int *param_4,longlong param_5,
             longlong *param_6)

{
  double dVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_4e8 [32];
  undefined8 local_4c8;
  LARGE_INTEGER local_4b8;
  undefined8 uStack_4b0;
  int local_49c;
  longlong local_498 [2];
  undefined4 *puStack_488;
  undefined8 local_480;
  ulonglong uStack_478;
  longlong *local_470;
  undefined8 uStack_468;
  undefined4 local_460 [2];
  undefined8 local_458;
  undefined8 local_450;
  longlong local_448 [129];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_4e8;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    cVar2 = FUN_1403f35db(*(undefined8 *)(param_1 + 0x20),&DAT_14c9908f8);
    if (cVar2 != '\0') {
      (**(code **)(*param_6 + 0xa8))(param_6,&local_450);
      cVar2 = FUN_1403f35db(local_450,&DAT_14c9908f8);
      if (cVar2 == '\0') goto LAB_146b1215b;
    }
    iVar4 = *(int *)(param_1 + 8);
    local_498[0] = param_5 + 8;
    puStack_488 = local_460;
    uStack_468 = 0;
    local_498[1] = 0x80;
    local_480 = 1;
    local_470 = local_448;
    uStack_478 = 0x400;
    local_49c = 0;
    local_4c8 = 0;
    local_460[0] = param_3;
    local_458 = param_2;
    iVar3 = (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x28),local_498,&local_49c,0);
    if (iVar3 == 0) {
      *param_4 = local_49c;
      if (local_470 != (longlong *)0x0 && 0xf < (uStack_478 & 0xffffffff)) {
        plVar9 = local_470;
LAB_146b1220a:
        if (*(int *)((longlong)plVar9 + 0xc) != 0x13) goto code_r0x000146b12211;
        cVar2 = FUN_1403f35db(*(undefined8 *)(param_1 + 0x20),&DAT_14c9908f8);
        if (cVar2 == '\0') {
          lVar8 = plVar9[2];
          local_4b8.QuadPart = 0;
          uStack_4b0 = CONCAT44(uStack_4b0._4_4_,4);
          FUN_1447a127e(&local_4b8,4,0);
          *(int *)local_4b8 = (int)lVar8;
          lVar8 = *param_6;
        }
        else {
          local_4b8.QuadPart = 0;
          uStack_4b0 = 0x10;
          lVar8 = 0;
          FUN_1447403be(&local_4b8,0);
          do {
            *(undefined1 *)(local_4b8.QuadPart + lVar8) =
                 *(undefined1 *)((longlong)plVar9 + lVar8 + 0x10);
            lVar8 = lVar8 + 1;
          } while (lVar8 != 0x10);
          lVar8 = *param_6;
        }
        (**(code **)(lVar8 + 0x58))(param_6,&local_4b8);
        if ((undefined4 *)local_4b8.QuadPart != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
      }
LAB_146b121a9:
      if ((iVar4 != 2) || (0 < *param_4)) {
LAB_146b121d1:
        QueryPerformanceCounter(&local_4b8);
        LOCK();
        dVar1 = *(double *)(param_1 + 0x30);
        *(double *)(param_1 + 0x30) = (double)local_4b8.QuadPart * DAT_14c83f420 + 16777216.0;
        UNLOCK();
        uVar5 = CONCAT71((int7)((ulonglong)dVar1 >> 8),1);
        goto LAB_146b1215d;
      }
    }
    else if (iVar4 == 2) {
      iVar4 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0xc0))
                        (*(longlong **)(param_1 + 0x40),iVar3);
      *param_4 = 0;
      if (iVar4 == 7) goto LAB_146b121d1;
    }
    else {
      *param_4 = 0;
    }
  }
LAB_146b1215b:
  uVar5 = 0;
LAB_146b1215d:
  if ((local_40 ^ (ulonglong)auStack_4e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
code_r0x000146b12211:
  uVar6 = *plVar9 + 7U & 0xfffffffffffffff8;
  plVar7 = (longlong *)((longlong)plVar9 + uVar6);
  if ((plVar7 == (longlong *)0x0) ||
     (uVar6 = (longlong)plVar9 + uVar6 + 0x10, plVar9 = plVar7,
     (uStack_478 & 0xffffffff) + (longlong)local_470 < uVar6)) goto LAB_146b121a9;
  goto LAB_146b1220a;
}



// FUNCTION 146b122da FUN_146b122da body=191 status=ok
// SIG undefined FUN_146b122da(void)

bool FUN_146b122da(longlong param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined1 *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_2c [4];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = CONCAT44(local_28._4_4_,param_2) & 0xffffffff000000ff;
  local_58 = CONCAT44(local_58._4_4_,4);
  bVar2 = false;
  iVar1 = Ordinal_21(*(undefined8 *)(param_1 + 0x28),0,0x13);
  if ((iVar1 == 0) && (bVar2 = true, *(longlong *)(param_1 + 0x48) == 0)) {
    local_58 = param_1 + 0x48;
    local_28 = 0x436b6f1ff689d7c8;
    uStack_20 = 0x22c351e34fe5538a;
    local_40 = 0;
    uStack_38 = 0;
    local_48 = local_2c;
    local_50 = 8;
    WSAIoctl(*(undefined8 *)(param_1 + 0x28),0xc8000006,&local_28,0x10);
    bVar2 = *(longlong *)(param_1 + 0x48) != 0;
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1239a FUN_146b1239a body=22 status=ok
// SIG undefined FUN_146b1239a(void)

void FUN_146b1239a(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x38))();
  *param_2 = uVar1;
  return;
}



// FUNCTION 146b123dc FUN_146b123dc body=83 status=ok
// SIG undefined FUN_146b123dc(void)

undefined8 * FUN_146b123dc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f21740;
  plVar3 = (longlong *)param_1[2];
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



// FUNCTION 146b1243e FUN_146b1243e body=38 status=ok
// SIG undefined FUN_146b1243e(void)

undefined8 FUN_146b1243e(undefined8 param_1,int param_2)

{
  FUN_146b13580();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b12476 FUN_146b12476 body=103 status=ok
// SIG undefined FUN_146b12476(void)

void FUN_146b12476(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x118))(param_1,local_30,param_4);
  (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3,local_30);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b124de FUN_146b124de body=64 status=ok
// SIG undefined FUN_146b124de(void)

void FUN_146b124de(longlong *param_1)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 0;
  (**(code **)(*param_1 + 0x18))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b12520 FUN_146b12520 body=159 status=ok
// SIG undefined FUN_146b12520(void)

undefined8
FUN_146b12520(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined2 param_5,undefined1 param_6,undefined4 param_7)

{
  undefined1 auStack_88 [32];
  undefined2 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x118))(param_1,&local_48,param_6);
  local_58 = param_7;
  local_60 = local_48;
  local_68 = param_5;
  (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b125c0 FUN_146b125c0 body=230 status=ok
// SIG undefined FUN_146b125c0(void)

undefined8 FUN_146b125c0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_1b8 [32];
  undefined2 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined1 local_180 [56];
  longlong local_148;
  int local_140;
  longlong local_138 [32];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_144a81018(local_138);
  local_188 = 0;
  local_190 = 0;
  local_198 = 0;
  (**(code **)(*param_1 + 0x40))(param_1,local_180,local_30,0);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_140 < 1) {
    uVar1 = 0x30;
  }
  else {
    (**(code **)(**(longlong **)(local_148 + 0x18) + 0x60))
              (*(longlong **)(local_148 + 0x18),local_138);
    (**(code **)(*param_3 + 0x58))(param_3,local_138);
    if (local_138[0] != 0) {
      FUN_1400020a8();
    }
    uVar1 = 0;
  }
  FUN_14135ddbe(local_180);
  if ((local_20 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b126a8 FUN_146b126a8 body=26 status=ok
// SIG undefined FUN_146b126a8(void)

undefined8 FUN_146b126a8(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x90))();
  return param_2;
}



// FUNCTION 146b126c2 FUN_146b126c2 body=58 status=ok
// SIG undefined FUN_146b126c2(void)

undefined8 *
FUN_146b126c2(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(*param_1 + 0x90))();
  (**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,param_3);
  (**(code **)(*(longlong *)*param_2 + 0x28))((longlong *)*param_2,param_4);
  return param_2;
}



// FUNCTION 146b126fc FUN_146b126fc body=38 status=ok
// SIG undefined FUN_146b126fc(void)

undefined8 FUN_146b126fc(undefined8 param_1,int param_2)

{
  FUN_14106263c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b12722 FUN_146b12722 body=138 status=ok
// SIG undefined FUN_146b12722(void)

void FUN_146b12722(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146b127ac FUN_146b127ac body=419 status=ok
// SIG undefined FUN_146b127ac(void)

void FUN_146b127ac(longlong *param_1)

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



// FUNCTION 146b12950 FUN_146b12950 body=74 status=ok
// SIG undefined FUN_146b12950(void)

void FUN_146b12950(longlong *param_1)

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



// FUNCTION 146b129a2 FUN_146b129a2 body=115 status=ok
// SIG undefined FUN_146b129a2(void)

void FUN_146b129a2(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x128))(param_1,local_38);
  local_48 = local_38;
  (**(code **)(*param_1 + 0x168))(param_1,param_2,param_3,param_4);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b12a16 FUN_146b12a16 body=73 status=ok
// SIG undefined FUN_146b12a16(void)

void FUN_146b12a16(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146b12a60 FUN_146b12a60 body=38 status=ok
// SIG undefined FUN_146b12a60(void)

undefined8 FUN_146b12a60(undefined8 param_1,int param_2)

{
  FUN_140187f4a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b12aa2 FUN_146b12aa2 body=31 status=ok
// SIG undefined FUN_146b12aa2(void)

undefined8 FUN_146b12aa2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b12ade FUN_146b12ade body=93 status=ok
// SIG undefined FUN_146b12ade(void)

void FUN_146b12ade(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f224d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146b12b3c FUN_146b12b3c body=123 status=ok
// SIG undefined FUN_146b12b3c(void)

void FUN_146b12b3c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149f224d0;
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



// FUNCTION 146b12bb8 FUN_146b12bb8 body=21 status=ok
// SIG undefined FUN_146b12bb8(void)

undefined8 FUN_146b12bb8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146b12bd6 FUN_146b12bd6 body=68 status=ok
// SIG undefined FUN_146b12bd6(void)

void FUN_146b12bd6(longlong param_1,uint param_2)

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
  FUN_145d31032(param_1);
  return;
}



// FUNCTION 146b12c1a FUN_146b12c1a body=315 status=ok
// SIG undefined FUN_146b12c1a(void)

undefined8 *
FUN_146b12c1a(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined2 param_5,undefined8 *param_6,undefined4 param_7,longlong *param_8)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_4 + 1);
  pvVar2 = (void *)*param_4;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined2 *)(param_1 + 5) = param_5;
  *(undefined8 *)((longlong)param_1 + 0x2c) = *param_6;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_7;
  lVar3 = *param_8;
  param_1[8] = lVar3;
  param_1[10] = 0;
  if (lVar3 != 0) {
    plVar4 = param_8 + 4;
    if ((longlong *)param_8[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_8[2];
    }
    (**(code **)*plVar4)(plVar4,param_1 + 10);
  }
  if (*param_8 != 0) {
    plVar4 = param_8 + 4;
    if ((longlong *)param_8[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_8[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 146b12d56 FUN_146b12d56 body=52 status=ok
// SIG undefined FUN_146b12d56(void)

void FUN_146b12d56(longlong *param_1)

{
  FUN_146b12e16(param_1 + 2);
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b12d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 146b12d8a FUN_146b12d8a body=52 status=ok
// SIG undefined FUN_146b12d8a(void)

void FUN_146b12d8a(longlong *param_1)

{
  FUN_146b12e16(param_1 + 2);
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b12db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 146b12dbe FUN_146b12dbe body=87 status=ok
// SIG undefined FUN_146b12dbe(void)

undefined8 * FUN_146b12dbe(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149f225a0;
  FUN_146b12ed2(param_1 + 2);
  *param_1 = IQueuedWork::vftable;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b12e16 FUN_146b12e16 body=186 status=ok
// SIG undefined FUN_146b12e16(void)

void FUN_146b12e16(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_a8 [32];
  undefined2 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_68 [72];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar4 = &DAT_149dfb77a;
  puVar5 = &DAT_149dfb77a;
  if (*(int *)(param_1 + 4) != 0) {
    puVar5 = (undefined2 *)param_1[3];
  }
  local_78 = *(undefined4 *)((longlong)param_1 + 0x34);
  local_80 = *(undefined8 *)((longlong)param_1 + 0x2c);
  local_88 = *(undefined2 *)(param_1 + 5);
  if (*(int *)(param_1 + 2) != 0) {
    puVar4 = (undefined2 *)param_1[1];
  }
  (**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1,local_68,puVar4,puVar5);
  pcVar1 = (code *)param_1[8];
  plVar3 = param_1 + 0xc;
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[10];
  }
  uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
  (*pcVar1)(uVar2,local_68);
  FUN_14135ddbe(local_68);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b12ed2 FUN_146b12ed2 body=76 status=ok
// SIG undefined FUN_146b12ed2(void)

void FUN_146b12ed2(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    plVar1 = (longlong *)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x50);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b12f1e FUN_146b12f1e body=132 status=ok
// SIG undefined FUN_146b12f1e(void)

void FUN_146b12f1e(longlong param_1,int param_2)

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



// FUNCTION 146b12fa4 FUN_146b12fa4 body=203 status=ok
// SIG undefined FUN_146b12fa4(void)

int FUN_146b12fa4(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_146b12fee:
      lVar10 = (longlong)iVar1;
      iVar3 = *(int *)(lVar4 + 8 + lVar10 * 0x28);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10 * 0x28) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_146b13064;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_146b13064;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_146b13055;
    }
  }
  return -1;
LAB_146b13064:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_146b13055:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar10 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_146b12fee;
}



// FUNCTION 146b13070 FUN_146b13070 body=363 status=ok
// SIG undefined FUN_146b13070(void)

undefined4 * FUN_146b13070(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146b131dc(param_1,local_40);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  *local_38 = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_38 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_38 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_38[2] = *puVar2;
  lVar11 = puVar2[1];
  local_38[3] = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_38 + 4) = 0xffffffff;
  local_44 = local_40[0];
  iVar9 = *(int *)(local_38 + 1);
  if (iVar9 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = (undefined2 *)*local_38;
  }
  iVar3 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar3 = 0;
  }
  uVar6 = FUN_144a49b4a(iVar3,puVar10);
  cVar5 = FUN_146b132c2(param_1,uVar6,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_38 + 0x24) = uVar6;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 4) =
           *(undefined4 *)
            (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_146b133a2(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b131dc FUN_146b131dc body=230 status=ok
// SIG undefined FUN_146b131dc(void)

int * FUN_146b131dc(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 146b132c2 FUN_146b132c2 body=109 status=ok
// SIG undefined FUN_146b132c2(void)

undefined8 FUN_146b132c2(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar9 = FUN_146b12fa4(), iVar9 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x28);
    FUN_146b12950(puVar1);
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[5];
    uVar7 = param_3[6];
    uVar8 = param_3[7];
    puVar1[4] = param_3[4];
    puVar1[5] = uVar6;
    puVar1[6] = uVar7;
    puVar1[7] = uVar8;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_146b13330(param_1,*param_4);
    *param_4 = iVar9;
    return 1;
  }
  return 0;
}



// FUNCTION 146b13330 FUN_146b13330 body=114 status=ok
// SIG undefined FUN_146b13330(void)

void FUN_146b13330(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 146b133a2 FUN_146b133a2 body=476 status=ok
// SIG undefined FUN_146b133a2(void)

void FUN_146b133a2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
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
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar7 = (longlong)iVar12;
        iVar6 = *(int *)(lVar3 + 8 + lVar7 * 0x28);
        puVar10 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar10 = *(undefined2 **)(lVar3 + lVar7 * 0x28);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar10);
        uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)(lVar3 + 0x24 + lVar7 * 0x28) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar7 * 0x28) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b13580 FUN_146b13580 body=81 status=ok
// SIG undefined FUN_146b13580(void)

void FUN_146b13580(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f21760;
  FUN_140187f4a(param_1 + 0x24);
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x000146b135c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146b135d2 FUN_146b135d2 body=57 status=ok
// SIG undefined FUN_146b135d2(void)

undefined8 FUN_146b135d2(undefined1 *param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"%i.%i.%i.%i",param_1[3],param_1[2],param_1[1],*param_1);
  return param_2;
}



// FUNCTION 146b1360c FUN_146b1360c body=278 status=ok
// SIG undefined FUN_146b1360c(void)

undefined8 FUN_146b1360c(undefined8 param_1,undefined1 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  wchar_t *pwVar6;
  wchar_t *_Str;
  undefined8 uVar7;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  uVar7 = 0;
  iVar1 = FUN_1403de9f2(0,&local_48,&DAT_149e0635c,0);
  if (iVar1 == 4) {
    _Str = L"";
    pwVar6 = L"";
    if (*(int *)(local_48 + 1) != 0) {
      pwVar6 = (wchar_t *)*local_48;
    }
    uVar2 = _wtoi(pwVar6);
    pwVar6 = L"";
    if (*(int *)(local_48 + 3) != 0) {
      pwVar6 = (wchar_t *)local_48[2];
    }
    uVar3 = _wtoi(pwVar6);
    pwVar6 = L"";
    if (*(int *)(local_48 + 5) != 0) {
      pwVar6 = (wchar_t *)local_48[4];
    }
    uVar4 = _wtoi(pwVar6);
    if (*(int *)(local_48 + 7) != 0) {
      _Str = (wchar_t *)local_48[6];
    }
    uVar5 = _wtoi(_Str);
    if ((uVar4 | uVar5 | uVar3 | uVar2) < 0x100) {
      param_2[3] = (char)uVar2;
      param_2[2] = (char)uVar3;
      param_2[1] = (char)uVar4;
      *param_2 = (char)uVar5;
      uVar7 = CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
    }
    else {
      uVar7 = 0;
    }
  }
  FUN_1447a1747(local_48,uStack_40 & 0xffffffff);
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b13724 FUN_146b13724 body=160 status=ok
// SIG undefined FUN_146b13724(void)

undefined8 FUN_146b13724(byte *param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [32];
  uint local_48;
  uint local_40;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined2 *)(param_1 + 4);
  local_40 = (uint)*param_1;
  local_48 = (uint)param_1[1];
  FUN_140002266(&local_30,L"%i.%i.%i.%i",param_1[3],param_1[2]);
  puVar2 = local_30;
  if (local_28 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"%s:%i",puVar2,uVar1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146b137c6 FUN_146b137c6 body=184 status=ok
// SIG undefined FUN_146b137c6(void)

undefined8 FUN_146b137c6(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  wchar_t *_Str;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  uVar4 = 0;
  iVar2 = FUN_1403de9f2(0,&local_28,&DAT_149e31048,0);
  if (iVar2 == 2) {
    cVar1 = FUN_146b1360c(local_28,param_2);
    if (cVar1 != '\0') {
      if (*(int *)(local_28 + 0x18) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)(local_28 + 0x10);
      }
      uVar3 = _wtoi(_Str);
      if (uVar3 < 0x10000) {
        *(short *)(param_2 + 4) = (short)uVar3;
        uVar4 = 1;
        goto LAB_146b137ff;
      }
    }
    uVar4 = 0;
  }
LAB_146b137ff:
  FUN_1447a1747(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b13880 FUN_146b13880 body=567 status=ok
// SIG undefined FUN_146b13880(void)

ulonglong FUN_146b13880(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined2 uStack_b4;
  undefined2 uStack_b2;
  longlong local_b0 [6];
  int local_80;
  longlong local_78;
  int local_70;
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  undefined2 local_3c [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  local_68 = (undefined2 *)0x0;
  uStack_60 = 0;
  FUN_140056680(local_b0,&DAT_149e31048);
  local_d0 = CONCAT44(local_d0._4_4_,1);
  local_d8 = 1;
  cVar3 = FUN_1407cdbc6(param_1,local_b0,&local_58,&local_68);
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 == '\0') {
    uVar5 = 0;
  }
  else {
    FUN_14033cb48(&local_58);
    FUN_14033cb48(&local_68);
    uVar5 = 0;
    if ((1 < (int)uStack_50) && (1 < (int)uStack_60)) {
      FUN_1446f470e(&local_b8,L"WINDOWS",1);
      plVar4 = (longlong *)FUN_140272950(&local_b8);
      FUN_1446f57c6(&DAT_14c9908e8,&local_c0);
      puVar7 = &DAT_149dfb77a;
      if ((int)uStack_60 != 0) {
        puVar7 = local_68;
      }
      puVar6 = &DAT_149dfb77a;
      if ((int)uStack_50 != 0) {
        puVar6 = local_58;
      }
      local_d0 = local_c0;
      local_c8 = 0;
      local_d8 = CONCAT22(local_d8._2_2_,4);
      (**(code **)(*plVar4 + 0x40))(plVar4,local_b0,puVar6,puVar7);
      uVar5 = CONCAT71((int7)((ulonglong)plVar4 >> 8),local_70 != 0 && local_80 == 0);
      if (local_70 != 0 && local_80 == 0) {
        plVar4 = *(longlong **)(local_78 + 0x18);
        plVar2 = *(longlong **)(local_78 + 0x20);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
        }
        (**(code **)(*plVar4 + 0x20))(plVar4,&local_b8);
        (**(code **)(*plVar4 + 0x40))(plVar4,local_3c);
        uStack_b4 = local_3c[0];
        *param_2 = CONCAT26(uStack_b2,CONCAT24(local_3c[0],local_b8));
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar2 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
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
      FUN_14135ddbe(local_b0);
    }
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b13abe FUN_146b13abe body=36 status=ok
// SIG undefined FUN_146b13abe(void)

undefined8 FUN_146b13abe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 146b13afe FUN_146b13afe body=93 status=ok
// SIG undefined FUN_146b13afe(void)

void FUN_146b13afe(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f22980;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146b13b5c FUN_146b13b5c body=123 status=ok
// SIG undefined FUN_146b13b5c(void)

void FUN_146b13b5c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149f22980;
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



// FUNCTION 146b13bd8 FUN_146b13bd8 body=21 status=ok
// SIG undefined FUN_146b13bd8(void)

undefined8 FUN_146b13bd8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146b13bed FUN_146b13bed body=334 status=ok
// SIG undefined FUN_146b13bed(void)

longlong * FUN_146b13bed(longlong *param_1,undefined4 *param_2)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = *param_2;
  local_20 = param_2[1];
  puVar1 = (ulonglong *)param_1[1];
  puVar2 = (undefined4 *)*puVar1 + 1;
  if ((undefined4 *)puVar1[1] < puVar2) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar1;
    *puVar1 = (ulonglong)puVar2;
  }
  puVar1 = (ulonglong *)param_1[1];
  puVar2 = (undefined4 *)*puVar1 + 1;
  if ((undefined4 *)puVar1[1] < puVar2) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_20,4);
    }
    else {
      FUN_14572512c(param_1,&local_20);
    }
  }
  else {
    local_20 = *(undefined4 *)*puVar1;
    *puVar1 = (ulonglong)puVar2;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[2] = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_1408383eb(param_1,param_2 + 4);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    *param_2 = local_1c;
    param_2[1] = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b13d3c FUN_146b13d3c body=90 status=ok
// SIG undefined FUN_146b13d3c(void)

void FUN_146b13d3c(longlong param_1,longlong *param_2)

{
  if ((longlong *)(param_1 + 0x18) != param_2) {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x18) = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 0x20) = (int)param_2[1];
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b13d96 FUN_146b13d96 body=126 status=ok
// SIG undefined FUN_146b13d96(void)

undefined8 FUN_146b13d96(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_14001cc68(0x128,0x10);
  local_28 = *param_1;
  *param_1 = 0;
  FUN_146b13e16(uVar2,&local_28,param_2);
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b13e16 FUN_146b13e16 body=1868 status=ok
// SIG undefined FUN_146b13e16(void)

undefined8 * FUN_146b13e16(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  uint *puVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  void *_Src;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  code *_Src_00;
  byte bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  undefined2 *puVar12;
  undefined ***pppuVar13;
  undefined8 uVar14;
  wchar_t *pwVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_2c8 [32];
  undefined4 local_2a8;
  undefined4 local_2a0;
  undefined8 *local_298;
  undefined4 local_290;
  longlong *local_280;
  undefined2 *local_278;
  ulonglong uStack_270;
  undefined **local_268;
  ulonglong *local_260;
  byte local_240;
  byte local_23f;
  byte local_23e;
  undefined8 local_1d8;
  longlong lStack_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  ulonglong *local_1b8;
  longlong local_118;
  longlong local_108;
  ulonglong uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 *local_e8 [2];
  undefined ***local_d8;
  undefined **local_c8;
  undefined8 *local_c0;
  code *local_a8;
  ulonglong uStack_a0;
  undefined ***local_98;
  undefined **local_88;
  undefined8 *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  *param_1 = &PTR_FUN_149f22ad0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 1),4000);
  param_1[6] = *param_2;
  *param_2 = 0;
  param_1[7] = 0;
  iVar11 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 8) = iVar11;
  if ((longlong)iVar11 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 7,iVar11,0);
    memcpy((void *)param_1[7],_Src,(longlong)iVar11 * 2);
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 2;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  bVar8 = FUN_144a53f06();
  *(byte *)((longlong)param_1 + 0x69) = bVar8 ^ 1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x15));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x15),4000);
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined4 *)(param_1 + 0x24) = 1;
  local_108 = 0;
  uStack_100 = 0;
  FUN_1467b7b96(&local_108);
  FUN_146866eea(&local_1c0);
  FUN_1405d0c38(&local_1c0,&local_108);
  if (local_1b8[1] < *local_1b8 + 4) {
    local_268 = (undefined **)CONCAT44(local_268._4_4_,(uint)*(byte *)((longlong)param_1 + 0x69));
    (**(code **)(local_1c0 + 0x170))(&local_1c0,&local_268,4);
    if (1 < (uint)local_268) {
      FUN_14572541c(&local_1c0);
    }
  }
  else {
    *local_1b8 = *local_1b8 + 4;
  }
  cVar9 = (**(code **)(*(longlong *)param_1[6] + 0x18))();
  if (cVar9 == '\0') {
    FUN_140033559(".\\Runtime/CookOnTheFly/Private/CookOnTheFlyServerConnection.cpp",0x2d,
                  L"Failed to send handshake request to server");
    goto LAB_146b140e0;
  }
  memset(&local_268,0,0x90);
  FUN_144869430(&local_268);
  local_1d8 = 0;
  lStack_1d0 = 0;
  local_1c8 = 0;
  local_268 = &PTR_FUN_149f22c90;
  local_240 = local_240 | 1;
  local_23f = local_23f & 0xfe;
  cVar9 = (**(code **)(*(longlong *)param_1[6] + 0x28))((longlong *)param_1[6],&local_268);
  if (cVar9 == '\0') {
    pwVar15 = L"Failed to receive handshake response from server";
    uVar14 = 0x34;
LAB_146b140bf:
    FUN_140033559(".\\Runtime/CookOnTheFly/Private/CookOnTheFlyServerConnection.cpp",uVar14,pwVar15)
    ;
  }
  else {
    puVar1 = (uint *)*local_260 + 1;
    if ((uint *)local_260[1] < puVar1) {
      local_a8 = (code *)((ulonglong)local_a8 & 0xffffffff00000000);
      (*(code *)local_268[0x2e])(&local_268,&local_a8,4);
      uVar10 = (uint)local_a8;
      if (1 < (uint)local_a8) {
        FUN_14572541c(&local_268);
        uVar10 = (uint)local_a8;
      }
    }
    else {
      uVar10 = *(uint *)*local_260;
      *local_260 = (ulonglong)puVar1;
    }
    if (uVar10 == 0) {
      pwVar15 = L"Couldn\'t handshake with server";
      uVar14 = 0x3b;
      goto LAB_146b140bf;
    }
    local_278 = (undefined2 *)0x0;
    uStack_270 = 0;
    FUN_14021219d(&local_268,param_1 + 0xe);
    FUN_14021219d(&local_268,param_1 + 0x10);
    FUN_14021219d(&local_268,&local_278);
    if ((undefined2 *)local_260[1] < (undefined2 *)*local_260 + 1) {
      if ((local_23e & 2) == 0) {
        (*(code *)local_268[0x2e])(&local_268,param_1 + 0x14,2);
      }
      else {
        thunk_FUN_1457251a8(&local_268);
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)*local_260;
      *local_260 = *local_260 + 2;
    }
    puVar12 = local_278;
    if ((int)uStack_270 == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    plVar3 = param_1 + 0x12;
    iVar11 = FUN_144a8a8b6(puVar12,"localhost");
    local_280 = param_2;
    if (iVar11 == 0) {
      uVar7 = (ulonglong)local_e8[0] >> 0x20;
      local_e8[0] = (undefined1 *)((ulonglong)local_e8[0] & 0xffffffff00000000);
      piVar2 = (int *)*local_260 + 1;
      if ((int *)local_260[1] < piVar2) {
        if ((local_23e & 2) == 0) {
          (*(code *)local_268[0x2e])(&local_268,local_e8,4);
        }
        else {
          FUN_14572512c(&local_268,local_e8);
        }
        iVar11 = (int)local_e8[0];
      }
      else {
        iVar11 = *(int *)*local_260;
        local_e8[0] = (undefined1 *)CONCAT44((int)uVar7,iVar11);
        *local_260 = (ulonglong)piVar2;
      }
      if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar11);
      }
      if (*(int *)((longlong)param_1 + 0x9c) < iVar11) {
        FUN_1408be2c4(plVar3);
        iVar11 = (int)local_e8[0];
      }
      if (0 < iVar11) {
        iVar11 = 0;
        do {
          local_a8 = (code *)0x0;
          uStack_a0 = 0;
          FUN_14021219d(&local_268,&local_a8);
          iVar4 = *(int *)(param_1 + 0x13);
          *(uint *)(param_1 + 0x13) = iVar4 + 1U;
          if (*(uint *)((longlong)param_1 + 0x9c) < iVar4 + 1U) {
            FUN_1447a1bd6(plVar3,iVar4);
          }
          _Src_00 = local_a8;
          lVar6 = *plVar3;
          lVar16 = (longlong)iVar4 * 0x10;
          puVar5 = (undefined8 *)(lVar6 + lVar16);
          *(undefined8 *)(lVar6 + lVar16) = 0;
          lVar17 = (longlong)(int)uStack_a0;
          *(int *)(lVar6 + 8 + lVar16) = (int)uStack_a0;
          if (lVar17 == 0) {
            *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar5,uStack_a0 & 0xffffffff,0);
            memcpy((void *)*puVar5,_Src_00,lVar17 * 2);
          }
          if (local_a8 != (code *)0x0) {
            FUN_1400020a8();
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)local_e8[0]);
      }
    }
    else {
      iVar11 = *(int *)(param_1 + 0x13);
      *(uint *)(param_1 + 0x13) = iVar11 + 1U;
      if (*(uint *)((longlong)param_1 + 0x9c) < iVar11 + 1U) {
        FUN_1447a1bd6(plVar3,iVar11);
      }
      puVar12 = local_278;
      lVar6 = *plVar3;
      lVar17 = (longlong)iVar11 * 0x10;
      puVar5 = (undefined8 *)(lVar6 + lVar17);
      *(undefined8 *)(lVar6 + lVar17) = 0;
      lVar16 = (longlong)(int)uStack_270;
      *(int *)(lVar6 + 8 + lVar17) = (int)uStack_270;
      if (lVar16 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,uStack_270 & 0xffffffff,0);
        memcpy((void *)*puVar5,puVar12,lVar16 * 2);
      }
    }
    FUN_146b14b32(&local_a8,param_1);
    uVar14 = FUN_14001cc68(0x10,0x10);
    local_298 = &local_f8;
    local_f0 = 0;
    local_f8 = 0xffffffffffffffff;
    local_98 = (undefined ***)0x0;
    local_88 = &PTR_LAB_149f22f80;
    local_a8 = FUN_146b14eee;
    local_d8 = (undefined ***)0x0;
    local_c8 = &PTR_LAB_149f22fa0;
    local_e8[0] = &LAB_146b152a2;
    local_290 = 1;
    local_2a0 = 0;
    local_2a8 = 0x2000;
    local_c0 = param_1;
    local_80 = param_1;
    FUN_1467c270c(uVar14,L"CotfServerConnection",local_e8,&local_a8);
    param_2 = local_280;
    if (local_e8[0] != (undefined1 *)0x0) {
      pppuVar13 = local_d8;
      if (local_d8 == (undefined ***)0x0) {
        pppuVar13 = &local_c8;
      }
      (*(code *)(*pppuVar13)[2])();
    }
    if (local_a8 != (code *)0x0) {
      pppuVar13 = local_98;
      if (local_98 == (undefined ***)0x0) {
        pppuVar13 = &local_88;
      }
      (*(code *)(*pppuVar13)[2])();
    }
    lVar6 = param_1[0xc];
    param_1[0xc] = uVar14;
    if (lVar6 != 0) {
      FUN_1411ee6a8(lVar6);
      FUN_1400020a8(lVar6);
    }
    if (local_278 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (lStack_1d0 != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(&local_268);
LAB_146b140e0:
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(&local_1c0);
  FUN_1447a1747(local_108,uStack_100 & 0xffffffff);
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  puVar5 = (undefined8 *)*param_2;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
  }
  if ((local_60 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b14564 FUN_146b14564 body=103 status=ok
// SIG undefined FUN_146b14564(void)

bool FUN_146b14564(longlong param_1)

{
  char cVar1;
  
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
  while (cVar1 == '\x01') {
    FUN_14000f986(0x3f000000);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
  return cVar1 == '\x02';
}



// FUNCTION 146b145cc FUN_146b145cc body=223 status=ok
// SIG undefined FUN_146b145cc(void)

undefined4 FUN_146b145cc(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined **local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined8 *)(param_1 + 0x20);
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
    local_38 = &PTR_FUN_149f22fe0;
    local_28 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_38 = &PTR_FUN_149f22fe0;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    local_28 = plVar3;
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
  uVar4 = FUN_14290f6d6(param_2,&local_38);
  plVar3 = local_28;
  local_38 = &PTR_FUN_149f22fe0;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b146ac FUN_146b146ac body=223 status=ok
// SIG undefined FUN_146b146ac(void)

undefined4 FUN_146b146ac(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined **local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined8 *)(param_1 + 0x20);
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
    local_38 = &PTR_FUN_149f22fe0;
    local_28 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_38 = &PTR_FUN_149f22fe0;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    local_28 = plVar3;
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
  uVar4 = FUN_14290f836(param_2,&local_38);
  plVar3 = local_28;
  local_38 = &PTR_FUN_149f22fe0;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b14790 FUN_146b14790 body=115 status=ok
// SIG undefined FUN_146b14790(void)

void FUN_146b14790(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)FUN_1467b7aa4();
  cVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
  if (cVar1 != '\0') {
    local_28 = *(undefined8 *)(param_1 + 0x20);
    local_20 = *(longlong *)(param_1 + 0x28);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b14804 FUN_146b14804 body=255 status=ok
// SIG undefined FUN_146b14804(void)

void FUN_146b14804(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_149f22a50;
  if (param_1[4] != 0) {
    plVar4 = (longlong *)FUN_1467b7aa4();
    cVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
    if (cVar3 != '\0') {
      local_28 = param_1[4];
      local_20 = param_1[5];
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_28);
      param_1[4] = 0;
      plVar4 = (longlong *)param_1[5];
      if (plVar4 != (longlong *)0x0) {
        param_1[5] = 0;
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
    }
  }
  plVar4 = (longlong *)param_1[5];
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
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b14904 FUN_146b14904 body=80 status=ok
// SIG undefined FUN_146b14904(void)

void FUN_146b14904(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined **local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(undefined8 *)(param_1 + 8);
  local_18 = &PTR_FUN_149f23000;
  FUN_14290f6d6(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b14956 FUN_146b14956 body=80 status=ok
// SIG undefined FUN_146b14956(void)

void FUN_146b14956(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined **local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(undefined8 *)(param_1 + 8);
  local_18 = &PTR_FUN_149f23000;
  FUN_14290f836(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b149a8 FUN_146b149a8 body=61 status=ok
// SIG undefined FUN_146b149a8(void)

void FUN_146b149a8(longlong param_1)

{
  undefined1 auStack_38 [44];
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b149f2 FUN_146b149f2 body=149 status=ok
// SIG undefined FUN_146b149f2(void)

void FUN_146b149f2(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_149f22a80;
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    FUN_146b14a96(lVar1);
    FUN_1400020a8(lVar1);
  }
  param_1[2] = 0;
  local_20 = 0;
  plVar2 = (longlong *)FUN_140272950();
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1[1]);
  param_1[1] = 0;
  if (param_1[3] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b14a96 FUN_146b14a96 body=80 status=ok
// SIG undefined FUN_146b14a96(void)

void FUN_146b14a96(longlong param_1)

{
  FUN_146b15fda(param_1 + 0xb8);
  FUN_146b16054(param_1 + 0x88);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_146b163de(param_1 + 8);
  return;
}



// FUNCTION 146b14ae6 FUN_146b14ae6 body=38 status=ok
// SIG undefined FUN_146b14ae6(void)

undefined8 FUN_146b14ae6(undefined8 param_1,int param_2)

{
  FUN_146b14804();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b14b0c FUN_146b14b0c body=38 status=ok
// SIG undefined FUN_146b14b0c(void)

undefined8 FUN_146b14b0c(undefined8 param_1,int param_2)

{
  FUN_146b149f2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b14b32 FUN_146b14b32 body=186 status=ok
// SIG undefined FUN_146b14b32(void)

undefined8 FUN_146b14b32(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149f22f10;
  puVar1[3] = param_2;
  puVar1[4] = &LAB_146b14bee;
  FUN_1448b6402(&DAT_14c872d10,param_1,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b14bf4 FUN_146b14bf4 body=38 status=ok
// SIG undefined FUN_146b14bf4(void)

undefined8 FUN_146b14bf4(undefined8 param_1,int param_2)

{
  FUN_146b1597a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b14c2e FUN_146b14c2e body=84 status=ok
// SIG undefined FUN_146b14c2e(void)

undefined8 * FUN_146b14c2e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x98);
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_140b856de(param_2,iVar1,0);
    FUN_140b8566a(*param_2,uVar2,iVar1);
  }
  return param_2;
}



// FUNCTION 146b14c9e FUN_146b14c9e body=58 status=ok
// SIG undefined FUN_146b14c9e(void)

longlong FUN_146b14c9e(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b14cd8 FUN_146b14cd8 body=32 status=ok
// SIG undefined FUN_146b14cd8(void)

undefined8 FUN_146b14cd8(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FArrayReader");
  return param_2;
}



// FUNCTION 146b14d00 FUN_146b14d00 body=29 status=ok
// SIG undefined FUN_146b14d00(void)

undefined8 FUN_146b14d00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b14d3a FUN_146b14d3a body=93 status=ok
// SIG undefined FUN_146b14d3a(void)

void FUN_146b14d3a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f22f10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146b14d98 FUN_146b14d98 body=93 status=ok
// SIG undefined FUN_146b14d98(void)

void FUN_146b14d98(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f22f10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146b14df6 FUN_146b14df6 body=126 status=ok
// SIG undefined FUN_146b14df6(void)

void FUN_146b14df6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149f22f10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b14e65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b14e80 FUN_146b14e80 body=21 status=ok
// SIG undefined FUN_146b14e80(void)

undefined8 FUN_146b14e80(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146b14e96 FUN_146b14e96 body=88 status=ok
// SIG undefined FUN_146b14e96(void)

void FUN_146b14e96(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  
  LOCK();
  bVar1 = *(byte *)(param_1 + 0x68);
  *(byte *)(param_1 + 0x68) = 1;
  UNLOCK();
  if ((bVar1 & 1) == 0) {
    if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
    }
    FUN_140f14a8a(*(undefined8 *)(param_1 + 0x60));
    lVar2 = *(longlong *)(param_1 + 0x60);
    if (lVar2 != 0) {
      *(undefined8 *)(param_1 + 0x60) = 0;
      FUN_1411ee6a8(lVar2);
      FUN_1400020a8(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146b14eee FUN_146b14eee body=81 status=ok
// SIG undefined FUN_146b14eee(void)

void FUN_146b14eee(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined1 *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_1;
  local_10 = &local_20;
  local_18 = &LAB_146b1528c;
  FUN_142910836();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b14f4a FUN_146b14f4a body=12 status=ok
// SIG undefined FUN_146b14f4a(void)

void FUN_146b14f4a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146b14f53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 146b14f56 FUN_146b14f56 body=29 status=ok
// SIG undefined FUN_146b14f56(void)

undefined8 FUN_146b14f56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b14f74 FUN_146b14f74 body=159 status=ok
// SIG undefined FUN_146b14f74(void)

undefined8 FUN_146b14f74(longlong param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  if (*(int *)(param_1 + 0xd8) != *(int *)(param_1 + 0x104)) {
    lVar2 = param_1 + 0x108;
    if (*(longlong *)(param_1 + 0x110) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x110);
    }
    uVar3 = *(uint *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x118) - 1U & param_2) * 4);
    if (uVar3 != 0xffffffff) {
      uVar4 = 0;
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0xd0) + (longlong)(int)uVar3 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 2 == (uint *)0x0 || puVar1 == (uint *)0x0) goto LAB_146b14f9e;
          uVar4 = *(undefined8 *)(puVar1 + 2);
          break;
        }
        uVar3 = puVar1[4];
      } while (uVar3 != 0xffffffff);
      goto LAB_146b14fa0;
    }
  }
LAB_146b14f9e:
  uVar4 = 0;
LAB_146b14fa0:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  return uVar4;
}



// FUNCTION 146b15014 FUN_146b15014 body=64 status=ok
// SIG undefined FUN_146b15014(void)

void FUN_146b15014(longlong param_1,longlong param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  FUN_146b15054(param_1 + 0xd0,*(undefined4 *)(param_2 + 8));
                    /* WARNING: Could not recover jumptable at 0x000146b1504d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  return;
}



// FUNCTION 146b15054 FUN_146b15054 body=81 status=ok
// SIG undefined FUN_146b15054(void)

void FUN_146b15054(longlong *param_1,int param_2)

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
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_146b150a6(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146b150a6 FUN_146b150a6 body=87 status=ok
// SIG undefined FUN_146b150a6(void)

void FUN_146b150a6(longlong *param_1,int param_2)

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
  FUN_146b150fe();
  return;
}



// FUNCTION 146b150fe FUN_146b150fe body=45 status=ok
// SIG undefined FUN_146b150fe(void)

void FUN_146b150fe(longlong *param_1,int param_2)

{
  FUN_146b1519e(*(undefined8 *)(*param_1 + 8 + (longlong)param_2 * 0x18));
  FUN_146b1512c(param_1,param_2);
  return;
}



// FUNCTION 146b1512c FUN_146b1512c body=114 status=ok
// SIG undefined FUN_146b1512c(void)

void FUN_146b1512c(longlong *param_1,int param_2)

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



// FUNCTION 146b1519e FUN_146b1519e body=74 status=ok
// SIG undefined FUN_146b1519e(void)

void FUN_146b1519e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1 != 0) {
    plVar3 = *(longlong **)(param_1 + 0x20);
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
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 146b151e8 FUN_146b151e8 body=164 status=ok
// SIG undefined FUN_146b151e8(void)

void FUN_146b151e8(longlong *param_1,undefined8 param_2)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_146b15268;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_146b15268:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 146b152b4 FUN_146b152b4 body=12 status=ok
// SIG undefined FUN_146b152b4(void)

void FUN_146b152b4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146b152bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 146b152c0 FUN_146b152c0 body=29 status=ok
// SIG undefined FUN_146b152c0(void)

undefined8 FUN_146b152c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b152de FUN_146b152de body=435 status=ok
// SIG undefined FUN_146b152de(void)

void FUN_146b152de(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint *puVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0xd8) != *(int *)(param_1 + 0x104)) {
    plVar1 = (longlong *)(param_1 + 0xd0);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
    lVar2 = param_1 + 0xe0;
    local_a0 = 0x100000000;
    local_90 = 0xffffffff;
    uStack_88 = uStack_88 & 0xffffffff00000000;
    iVar6 = 0;
    local_98 = lVar2;
    if (*(int *)(param_1 + 0xf8) != 0) {
      FUN_1449c0562(&local_a0);
      iVar6 = *(int *)(param_1 + 0xf8);
    }
    local_60 = local_90;
    uVar4 = local_60;
    local_58 = (undefined4)uStack_88;
    local_54 = uStack_88._4_4_;
    local_70 = local_a0;
    local_68 = local_98;
    local_60._4_4_ = (int)((ulonglong)local_90 >> 0x20);
    local_78 = plVar1;
    if ((local_60._4_4_ != iVar6) || (local_98 != lVar2)) {
      iVar5 = local_60._4_4_;
      local_60 = uVar4;
      do {
        puVar3 = *(uint **)(*local_78 + 8 + (longlong)iVar5 * 0x18);
        local_90 = 0;
        uStack_88 = 0;
        local_80 = 0;
        local_98 = CONCAT44(local_98._4_4_,puVar3[2]);
        local_a0 = CONCAT44(2,*puVar3 & 0xfffffff0 | 4);
        FUN_146b1549e(*(undefined8 *)(puVar3 + 6),&local_a0);
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar5 = local_60._4_4_;
        uVar4 = local_60;
      } while (local_78 != plVar1 || (local_68 != lVar2 || local_60._4_4_ != iVar6));
    }
    local_60 = uVar4;
    FUN_146b1551c(plVar1);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1549e FUN_146b1549e body=126 status=ok
// SIG undefined FUN_146b1549e(void)

void FUN_146b1549e(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 4);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(param_1 + 0x80) = *param_2;
  *(undefined4 *)(param_1 + 0x84) = uVar2;
  *(undefined4 *)(param_1 + 0x88) = uVar3;
  *(undefined4 *)(param_1 + 0x8c) = uVar4;
  *(undefined8 *)(param_1 + 0x98) = 0;
  iVar1 = param_2[8];
  _Src = *(void **)(param_2 + 6);
  *(int *)(param_1 + 0xa0) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  else {
    FUN_1447a127e((undefined8 *)(param_1 + 0x98),iVar1,0);
    memcpy(*(void **)(param_1 + 0x98),_Src,(longlong)iVar1);
  }
  FUN_140b576f0(param_1);
  return;
}



// FUNCTION 146b1551c FUN_146b1551c body=63 status=ok
// SIG undefined FUN_146b1551c(void)

void FUN_146b1551c(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_146b156a0(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_146b157d6(param_1);
    return;
  }
  FUN_146b1555c(param_1);
  FUN_146b156a0(param_1);
  return;
}



// FUNCTION 146b1555c FUN_146b1555c body=322 status=ok
// SIG undefined FUN_146b1555c(void)

void FUN_146b1555c(longlong *param_1)

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



// FUNCTION 146b156a0 FUN_146b156a0 body=308 status=ok
// SIG undefined FUN_146b156a0(void)

void FUN_146b156a0(longlong *param_1)

{
  longlong *plVar1;
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
      FUN_146b1519e(*(undefined8 *)(*local_68 + 8 + (longlong)iStack_4c * 0x18));
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



// FUNCTION 146b157d6 FUN_146b157d6 body=419 status=ok
// SIG undefined FUN_146b157d6(void)

void FUN_146b157d6(longlong *param_1)

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



// FUNCTION 146b1597a FUN_146b1597a body=257 status=ok
// SIG undefined FUN_146b1597a(void)

void FUN_146b1597a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  FUN_140457ffc(&DAT_14c872d10,param_1);
  FUN_146b14e96(param_1);
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  FUN_146b15a7c(param_1 + 0xd0);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98));
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (lVar1 != 0) {
    FUN_1411ee6a8(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  puVar2 = *(undefined8 **)(param_1 + 0x30);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x000146b15a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 146b15a7c FUN_146b15a7c body=52 status=ok
// SIG undefined FUN_146b15a7c(void)

void FUN_146b15a7c(longlong *param_1)

{
  FUN_146b156a0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b15ab0 FUN_146b15ab0 body=228 status=ok
// SIG undefined FUN_146b15ab0(void)

undefined8 FUN_146b15ab0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined4 local_54;
  undefined4 *local_50;
  undefined8 **local_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_54 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(undefined4 *)((longlong)puVar3 + 4) = 1;
  FUN_146b15e38(puVar3 + 3);
  *(undefined1 *)(puVar3 + 5) = 0;
  local_48 = &local_60;
  local_60 = puVar3;
  local_50 = &local_54;
  FUN_146b15b96(param_1 + 0xd0,&local_3c);
  lVar1 = *(longlong *)(param_1 + 0xd0);
  FUN_146b1519e(local_60);
  uVar2 = *(undefined8 *)(lVar1 + 8 + (longlong)local_3c * 0x18);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b15b96 FUN_146b15b96 body=296 status=ok
// SIG undefined FUN_146b15b96(void)

undefined4 * FUN_146b15b96(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_146b15cc0(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(uint *)*param_3;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  *puVar1 = 0;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_146b15da6(param_1,uVar5,local_40,&local_4c);
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
      FUN_146b157d6(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b15cc0 FUN_146b15cc0 body=230 status=ok
// SIG undefined FUN_146b15cc0(void)

int * FUN_146b15cc0(longlong *param_1,int *param_2)

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



// FUNCTION 146b15da6 FUN_146b15da6 body=146 status=ok
// SIG undefined FUN_146b15da6(void)

undefined8 FUN_146b15da6(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
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
        piVar1 = (int *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*piVar1 == *param_3) {
          FUN_146b1519e(*(undefined8 *)(piVar1 + 2));
          iVar2 = param_3[1];
          iVar3 = param_3[2];
          iVar4 = param_3[3];
          *piVar1 = *param_3;
          piVar1[1] = iVar2;
          piVar1[2] = iVar3;
          piVar1[3] = iVar4;
          FUN_146b1512c(param_1,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = piVar1[4];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 146b15e38 FUN_146b15e38 body=94 status=ok
// SIG undefined FUN_146b15e38(void)

longlong * FUN_146b15e38(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0xc0,0x10);
  FUN_146b15e96(plVar3);
  *param_1 = (longlong)(plVar3 + 2);
  param_1[1] = (longlong)plVar3;
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
  return param_1;
}



// FUNCTION 146b15e96 FUN_146b15e96 body=99 status=ok
// SIG undefined FUN_146b15e96(void)

undefined8 * FUN_146b15e96(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_FUN_149f22fc0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 2),4000);
  param_1[8] = 0;
  param_1[10] = 0;
  uVar1 = FUN_1405d8a54(1);
  param_1[0x10] = uVar1;
  *(undefined1 *)(param_1 + 0x11) = 0;
  return param_1;
}



// FUNCTION 146b15efa FUN_146b15efa body=52 status=ok
// SIG undefined FUN_146b15efa(void)

void FUN_146b15efa(longlong param_1)

{
  if (((*(byte *)(param_1 + 0x88) & 1) != 0) && (*(longlong *)(param_1 + 0xa8) != 0)) {
    FUN_1400020a8();
  }
  FUN_140788a7e(param_1 + 0x10);
  return;
}



// FUNCTION 146b15f2e FUN_146b15f2e body=29 status=ok
// SIG undefined FUN_146b15f2e(void)

undefined8 FUN_146b15f2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b15fbc FUN_146b15fbc body=29 status=ok
// SIG undefined FUN_146b15fbc(void)

undefined8 FUN_146b15fbc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b15fda FUN_146b15fda body=121 status=ok
// SIG undefined FUN_146b15fda(void)

void FUN_146b15fda(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_149f23020;
  plVar1 = (longlong *)param_1[0x13];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
    plVar1 = (longlong *)param_1[0x13];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1);
    }
  }
  FUN_1449db362(param_1 + 0x14);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_146b1622e(param_1 + 3);
  return;
}



// FUNCTION 146b16054 FUN_146b16054 body=72 status=ok
// SIG undefined FUN_146b16054(void)

void FUN_146b16054(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_149f23050;
  plVar1 = (longlong *)param_1[3];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
    plVar1 = (longlong *)param_1[3];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1);
    }
  }
  FUN_1449db362(param_1 + 4);
  return;
}



// FUNCTION 146b160a2 FUN_146b160a2 body=356 status=ok
// SIG undefined FUN_146b160a2(void)

void FUN_146b160a2(longlong param_1)

{
  longlong *plVar1;
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
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  local_80 = (longlong *)(param_1 + 0x18);
  local_38 = param_1 + 0x28;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_1449c0562(&local_40);
  }
  local_68 = local_30;
  iStack_64 = iStack_2c;
  local_60 = local_28;
  local_5c = local_24;
  local_78 = local_40;
  local_70 = local_38;
  local_48 = 0;
  local_58 = local_80;
  local_50 = local_80;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      plVar1 = *(longlong **)(*local_80 + 8 + (longlong)iStack_64 * 0x18);
      if (plVar1 != (longlong *)0x0) {
        if (*plVar1 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar1);
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < *(int *)(local_70 + 0x18));
    if (((local_48 & 1) != 0) && (local_48._1_1_ == '\x01')) {
      FUN_146b162bc(local_50,(int)local_50[1] - *(int *)((longlong)local_50 + 0x34));
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b16208 FUN_146b16208 body=38 status=ok
// SIG undefined FUN_146b16208(void)

undefined8 FUN_146b16208(undefined8 param_1,int param_2)

{
  FUN_146b15fda();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b1622e FUN_146b1622e body=52 status=ok
// SIG undefined FUN_146b1622e(void)

void FUN_146b1622e(longlong *param_1)

{
  FUN_146b16262();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b16262 FUN_146b16262 body=89 status=ok
// SIG undefined FUN_146b16262(void)

void FUN_146b16262(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146b162bc FUN_146b162bc body=68 status=ok
// SIG undefined FUN_146b162bc(void)

void FUN_146b162bc(longlong param_1,uint param_2)

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
  FUN_146b127ac(param_1);
  return;
}



// FUNCTION 146b16300 FUN_146b16300 body=81 status=ok
// SIG undefined FUN_146b16300(void)

void FUN_146b16300(longlong *param_1,int param_2)

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
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_146b16352(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146b16352 FUN_146b16352 body=93 status=ok
// SIG undefined FUN_146b16352(void)

void FUN_146b16352(longlong *param_1,int param_2)

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
  FUN_146b12722(param_1,param_2,1);
  return;
}



// FUNCTION 146b163b8 FUN_146b163b8 body=38 status=ok
// SIG undefined FUN_146b163b8(void)

undefined8 FUN_146b163b8(undefined8 param_1,int param_2)

{
  FUN_146b16054();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b163de FUN_146b163de body=52 status=ok
// SIG undefined FUN_146b163de(void)

void FUN_146b163de(longlong *param_1)

{
  FUN_146b16412();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b16412 FUN_146b16412 body=89 status=ok
// SIG undefined FUN_146b16412(void)

void FUN_146b16412(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146b1646c FUN_146b1646c body=31 status=ok
// SIG undefined FUN_146b1646c(void)

undefined8 FUN_146b1646c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b164a8 FUN_146b164a8 body=93 status=ok
// SIG undefined FUN_146b164a8(void)

void FUN_146b164a8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f23080;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146b16506 FUN_146b16506 body=126 status=ok
// SIG undefined FUN_146b16506(void)

void FUN_146b16506(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149f23080;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b16575. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b16584 FUN_146b16584 body=21 status=ok
// SIG undefined FUN_146b16584(void)

undefined8 FUN_146b16584(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146b165a2 FUN_146b165a2 body=28 status=ok
// SIG undefined FUN_146b165a2(void)

undefined8 * FUN_146b165a2(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1416530ca(param_3);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 146b165e6 FUN_146b165e6 body=74 status=ok
// SIG undefined FUN_146b165e6(void)

void FUN_146b165e6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = (longlong *)FUN_140628716();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  *param_3 = lVar2;
  return;
}



// FUNCTION 146b16650 FUN_146b16650 body=151 status=ok
// SIG undefined FUN_146b16650(void)

void FUN_146b16650(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)(param_1 + 0x5c) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b16756 FUN_146b16756 body=508 status=ok
// SIG undefined FUN_146b16756(void)

longlong * FUN_146b16756(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *_Src;
  int iVar3;
  size_t sVar4;
  wchar_t *_Str;
  undefined8 *puVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  ulonglong uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = 0;
  param_2[1] = 0;
  iVar3 = 0x14;
  if (*(int *)(param_3 + 1) == 0) {
    iVar3 = *(int *)(param_1 + 0x38);
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar3);
    }
    if (iVar3 == 0) {
      uVar6 = 0;
      goto LAB_146b167a0;
    }
  }
  FUN_1408be2c4(param_2,iVar3);
  uVar6 = *(undefined4 *)(param_3 + 1);
LAB_146b167a0:
  local_68 = 0;
  uStack_60 = 0;
  FUN_14006620a(&local_58,*param_3,uVar6);
  local_78 = local_58;
  uStack_74 = uStack_54;
  uStack_70 = uStack_50;
  uStack_6c = uStack_4c;
  FUN_140f7c65c(&local_78,&local_68,0,1);
  if (CONCAT44(uStack_74,local_78) != 0) {
    FUN_1400020a8();
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x30);
    local_80 = puVar5 + (longlong)*(int *)(param_1 + 0x38) * 5;
    do {
      lVar2 = local_68;
      lVar8 = (longlong)(int)uStack_60;
      if (lVar8 != 0) {
        lVar7 = 0;
        do {
          _Str = L"";
          if (*(int *)(lVar2 + 8 + lVar7) != 0) {
            _Str = *(wchar_t **)(lVar2 + lVar7);
          }
          if (_Str == (wchar_t *)0x0) goto LAB_146b168d3;
          sVar4 = wcslen(_Str);
          local_90 = 0xffffffff;
          local_98 = 0;
          iVar3 = FUN_1447ee042(puVar5,_Str,sVar4 & 0xffffffff,1);
          if (iVar3 == -1) goto LAB_146b168d3;
          lVar7 = lVar7 + 0x10;
        } while (lVar8 * 0x10 != lVar7);
      }
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1447a1bd6(param_2,iVar3);
      }
      lVar2 = *param_2;
      lVar8 = (longlong)iVar3 * 0x10;
      puVar1 = (undefined8 *)(lVar2 + lVar8);
      *(undefined8 *)(lVar2 + lVar8) = 0;
      iVar3 = *(int *)(puVar5 + 1);
      _Src = (void *)*puVar5;
      *(int *)(lVar2 + 8 + lVar8) = iVar3;
      if ((longlong)iVar3 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,iVar3,0);
        memcpy((void *)*puVar1,_Src,(longlong)iVar3 * 2);
      }
LAB_146b168d3:
      puVar5 = puVar5 + 5;
    } while (puVar5 != local_80);
  }
  FUN_1447a1747(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146b16954 FUN_146b16954 body=250 status=ok
// SIG undefined FUN_146b16954(void)

void FUN_146b16954(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    FUN_141532077(param_1 + 0x80);
    FUN_141532077(param_1 + 0xa0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  lVar1 = *(longlong *)(param_2 + 0x20);
  FUN_1446f470e(&local_30,L"GameDefaultMap",1);
  if (lVar1 == local_30) {
    param_1 = param_1 + 0x80;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x20);
    FUN_1446f470e(&local_38,L"ServerDefaultMap",1);
    if (lVar1 == local_38) {
      param_1 = param_1 + 0xa0;
    }
    else {
      lVar1 = *(longlong *)(param_2 + 0x20);
      FUN_1446f470e(&local_40,L"TransitionMap",1);
      if (lVar1 != local_40) goto LAB_146b169a6;
      param_1 = param_1 + 0x38;
    }
  }
  FUN_141532077(param_1);
LAB_146b169a6:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b16a72 FUN_146b16a72 body=47 status=ok
// SIG undefined FUN_146b16a72(void)

void FUN_146b16a72(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b16ab8 FUN_146b16ab8 body=73 status=ok
// SIG undefined FUN_146b16ab8(void)

undefined8 FUN_146b16ab8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 146b16b2a FUN_146b16b2a body=59 status=ok
// SIG undefined FUN_146b16b2a(void)

undefined8 FUN_146b16b2a(longlong *param_1)

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



// FUNCTION 146b16bc8 FUN_146b16bc8 body=51 status=ok
// SIG undefined FUN_146b16bc8(void)

void FUN_146b16bc8(longlong *param_1)

{
  if ((char)param_1[5] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 146b16c1c FUN_146b16c1c body=47 status=ok
// SIG undefined FUN_146b16c1c(void)

void FUN_146b16c1c(undefined8 param_1,longlong *param_2)

{
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b16c62 FUN_146b16c62 body=75 status=ok
// SIG undefined FUN_146b16c62(void)

undefined1 FUN_146b16c62(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
    FUN_144a787a6(param_2 + 0x20,param_3 + 0x20);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 146b16cd6 FUN_146b16cd6 body=59 status=ok
// SIG undefined FUN_146b16cd6(void)

undefined8 FUN_146b16cd6(longlong *param_1)

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



// FUNCTION 146b16d74 FUN_146b16d74 body=51 status=ok
// SIG undefined FUN_146b16d74(void)

void FUN_146b16d74(longlong *param_1)

{
  if ((char)param_1[6] == '\x01') {
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  return;
}



// FUNCTION 146b16dfe FUN_146b16dfe body=54 status=ok
// SIG undefined FUN_146b16dfe(void)

undefined1 FUN_146b16dfe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146b16f52(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 146b16e5c FUN_146b16e5c body=59 status=ok
// SIG undefined FUN_146b16e5c(void)

undefined8 FUN_146b16e5c(longlong *param_1)

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



// FUNCTION 146b16ea2 FUN_146b16ea2 body=34 status=ok
// SIG undefined FUN_146b16ea2(void)

void FUN_146b16ea2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_146b16f12(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 146b16f12 FUN_146b16f12 body=63 status=ok
// SIG undefined FUN_146b16f12(void)

void FUN_146b16f12(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b16f52 FUN_146b16f52 body=112 status=ok
// SIG undefined FUN_146b16f52(void)

undefined4 * FUN_146b16f52(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  FUN_144a787a6(param_1 + 4,param_2 + 4);
  uVar3 = param_2[9];
  uVar4 = param_2[10];
  uVar5 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar3;
  param_1[10] = uVar4;
  param_1[0xb] = uVar5;
  FUN_144a787a6(param_1 + 0xc,param_2 + 0xc);
  plVar1 = *(longlong **)(param_2 + 0x10);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x10) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  param_1[0x12] = param_2[0x12];
  return param_1;
}



// FUNCTION 146b16fc4 FUN_146b16fc4 body=29 status=ok
// SIG undefined FUN_146b16fc4(void)

void FUN_146b16fc4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_149f273a0;
  return;
}



// FUNCTION 146b16fe2 FUN_146b16fe2 body=36 status=ok
// SIG undefined FUN_146b16fe2(void)

undefined8 FUN_146b16fe2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 146b17022 FUN_146b17022 body=93 status=ok
// SIG undefined FUN_146b17022(void)

void FUN_146b17022(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f27330;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146b17080 FUN_146b17080 body=123 status=ok
// SIG undefined FUN_146b17080(void)

void FUN_146b17080(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149f27330;
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



// FUNCTION 146b17108 FUN_146b17108 body=21 status=ok
// SIG undefined FUN_146b17108(void)

undefined8 FUN_146b17108(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146b1711e FUN_146b1711e body=34 status=ok
// SIG undefined FUN_146b1711e(void)

undefined8 FUN_146b1711e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 146b17148 FUN_146b17148 body=120 status=ok
// SIG undefined FUN_146b17148(void)

longlong * FUN_146b17148(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x110,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f275e0;
  FUN_146b1811a(plVar3 + 2);
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



// FUNCTION 146b171c0 FUN_146b171c0 body=187 status=ok
// SIG undefined FUN_146b171c0(void)

void FUN_146b171c0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48 [2];
  ulonglong local_38;
  
  uVar1 = DAT_14c872ce0;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar3 = &DAT_149dfb77a;
  puVar2 = &DAT_149dfb77a;
  if (*(int *)(param_2 + 1) != 0) {
    puVar2 = (undefined2 *)*param_2;
  }
  FUN_140056680(local_48,puVar2);
  puVar2 = &DAT_149dfb77a;
  if (*(int *)(param_5 + 1) != 0) {
    puVar2 = (undefined2 *)*param_5;
  }
  puVar4 = &DAT_149dfb77a;
  if (*(int *)(param_4 + 1) != 0) {
    puVar4 = (undefined2 *)*param_4;
  }
  if (*(int *)(param_3 + 1) != 0) {
    puVar3 = (undefined2 *)*param_3;
  }
  local_58 = local_48;
  FUN_1410abc14(uVar1,puVar3,puVar4,puVar2);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b17280 FUN_146b17280 body=28 status=ok
// SIG undefined FUN_146b17280(void)

undefined8 * FUN_146b17280(undefined8 *param_1,LPCRITICAL_SECTION param_2)

{
  *param_1 = param_2;
  EnterCriticalSection(param_2);
  return param_1;
}



// FUNCTION 146b1729c FUN_146b1729c body=34 status=ok
// SIG undefined FUN_146b1729c(void)

void FUN_146b1729c(undefined8 *param_1)

{
  if ((LPCRITICAL_SECTION)*param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 146b172be FUN_146b172be body=101 status=ok
// SIG undefined FUN_146b172be(void)

longlong * FUN_146b172be(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_140002266(param_1 + 2,&DAT_149e063bc,*param_3);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146b17324 FUN_146b17324 body=47 status=ok
// SIG undefined FUN_146b17324(void)

void FUN_146b17324(longlong *param_1)

{
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b17354 FUN_146b17354 body=101 status=ok
// SIG undefined FUN_146b17354(void)

longlong * FUN_146b17354(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_140002266(param_1 + 2,&DAT_149e061aa,*param_3);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146b173ba FUN_146b173ba body=101 status=ok
// SIG undefined FUN_146b173ba(void)

longlong * FUN_146b173ba(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_140002266(param_1 + 2,L"%lld",*param_3);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146b17420 FUN_146b17420 body=101 status=ok
// SIG undefined FUN_146b17420(void)

longlong * FUN_146b17420(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_140002266(param_1 + 2,L"%llu",*param_3);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146b17486 FUN_146b17486 body=96 status=ok
// SIG undefined FUN_146b17486(void)

longlong * FUN_146b17486(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_146b17f35(param_1 + 2,*param_3);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146b174e6 FUN_146b174e6 body=96 status=ok
// SIG undefined FUN_146b174e6(void)

longlong * FUN_146b174e6(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_146b188cf(param_1 + 2,*param_3);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146b17546 FUN_146b17546 body=113 status=ok
// SIG undefined FUN_146b17546(void)

longlong * FUN_146b17546(longlong *param_1,longlong *param_2,char *param_3)

{
  wchar_t *pwVar1;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  pwVar1 = L"false";
  if (*param_3 != '\0') {
    pwVar1 = L"true";
  }
  FUN_140056680(param_1 + 2,pwVar1);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146b175b8 FUN_146b175b8 body=156 status=ok
// SIG undefined FUN_146b175b8(void)

longlong * FUN_146b175b8(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146b17654 FUN_146b17654 body=103 status=ok
// SIG undefined FUN_146b17654(void)

longlong * FUN_146b17654(longlong *param_1,longlong *param_2,longlong *param_3)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = *param_3;
  *param_3 = 0;
  *(int *)(param_1 + 3) = (int)param_3[1];
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146b176bc FUN_146b176bc body=14 status=ok
// SIG undefined FUN_146b176bc(void)

double FUN_146b176bc(longlong *param_1)

{
  return (double)*param_1 / 10000000.0;
}



// FUNCTION 146b176ca FUN_146b176ca body=56 status=ok
// SIG undefined FUN_146b176ca(void)

void FUN_146b176ca(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000146b176f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146b17702 FUN_146b17702 body=95 status=ok
// SIG undefined FUN_146b17702(void)

undefined8 * FUN_146b17702(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_146b17e4e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_146b17e8e(param_1,iVar1);
      FUN_146b17f01(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 146b17762 FUN_146b17762 body=13 status=ok
// SIG undefined FUN_146b17762(void)

longlong * FUN_146b17762(longlong *param_1,longlong *param_2,longlong *param_3)

{
  *param_2 = *param_1 - *param_3;
  return param_2;
}



// FUNCTION 146b17770 FUN_146b17770 body=101 status=ok
// SIG undefined FUN_146b17770(void)

longlong * FUN_146b17770(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_140002266(param_1 + 2,&DAT_149e061aa,*param_3);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146b177d6 FUN_146b177d6 body=31 status=ok
// SIG undefined FUN_146b177d6(void)

undefined8 * FUN_146b177d6(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1407c869a(0,param_2,0);
  return param_2;
}



// FUNCTION 146b177f6 FUN_146b177f6 body=117 status=ok
// SIG undefined FUN_146b177f6(void)

void FUN_146b177f6(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_1;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  FUN_14021300e(&local_20,0x7b2,1,1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0((double)(lVar1 - local_20) / 10000000.0);
}



// FUNCTION 146b1786c FUN_146b1786c body=96 status=ok
// SIG undefined FUN_146b1786c(void)

longlong * FUN_146b1786c(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_146b188cf(param_1 + 2,*param_3);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146b178cc FUN_146b178cc body=44 status=ok
// SIG undefined FUN_146b178cc(void)

void FUN_146b178cc(longlong *param_1)

{
  FUN_146b17e4e(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b178f8 FUN_146b178f8 body=56 status=ok
// SIG undefined FUN_146b178f8(void)

void FUN_146b178f8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000146b17925. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146b17930 FUN_146b17930 body=51 status=ok
// SIG undefined FUN_146b17930(void)

void FUN_146b17930(undefined8 *param_1)

{
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_146b18950(param_1);
    return;
  }
  FUN_146b18477(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 146b17964 FUN_146b17964 body=56 status=ok
// SIG undefined FUN_146b17964(void)

void FUN_146b17964(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000146b17991. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146b1799c FUN_146b1799c body=71 status=ok
// SIG undefined FUN_146b1799c(void)

void FUN_146b1799c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  local_18 = param_3;
  FUN_146b18b66(param_1,local_c,&local_20);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b179e4 FUN_146b179e4 body=82 status=ok
// SIG undefined FUN_146b179e4(void)

undefined8 * FUN_146b179e4(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  *param_1 = 0;
  lVar1 = *param_2;
  uVar2 = (ulonglong)(param_2[1] - lVar1) >> 4;
  *(int *)(param_1 + 1) = (int)uVar2;
  if ((int)uVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_146b19042(param_1,uVar2 & 0xffffffff);
    FUN_146b1909a(*param_1,lVar1,uVar2 & 0xffffffff);
  }
  return param_1;
}



// FUNCTION 146b17a36 FUN_146b17a36 body=44 status=ok
// SIG undefined FUN_146b17a36(void)

void FUN_146b17a36(longlong *param_1)

{
  FUN_146b190c2(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b17a62 FUN_146b17a62 body=23 status=ok
// SIG undefined FUN_146b17a62(void)

void FUN_146b17a62(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146b17a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 146b17a7a FUN_146b17a7a body=96 status=ok
// SIG undefined FUN_146b17a7a(void)

longlong * FUN_146b17a7a(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = (longlong)(param_1 + 4);
  param_1[1] = (longlong)(param_1 + 4);
  param_1[2] = (longlong)param_1 + 0x836;
  local_18 = param_2;
  FUN_14005eb5c(&local_18,param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


