// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146984fba FUN_146984fba body=29 status=ok
// SIG undefined FUN_146984fba(void)

undefined8 FUN_146984fba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146984fd8 FUN_146984fd8 body=69 status=ok
// SIG undefined FUN_146984fd8(void)

undefined8 * FUN_146984fd8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149ef15b8;
  FUN_14698503e(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698501e FUN_14698501e body=32 status=ok
// SIG undefined FUN_14698501e(void)

bool FUN_14698501e(undefined8 param_1,longlong *param_2)

{
  FUN_146983b94();
  return DAT_14c98e130 == *param_2;
}



// FUNCTION 14698503e FUN_14698503e body=73 status=ok
// SIG undefined FUN_14698503e(void)

void FUN_14698503e(longlong param_1,int param_2)

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



// FUNCTION 146985088 FUN_146985088 body=113 status=ok
// SIG undefined FUN_146985088(void)

void FUN_146985088(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x10 + lVar1);
  FUN_140a50355(_Dst,1);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x10),(longlong)iVar3 << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1469850fa FUN_1469850fa body=38 status=ok
// SIG undefined FUN_1469850fa(void)

undefined8 FUN_1469850fa(undefined8 param_1,int param_2)

{
  FUN_145c0d136();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146985120 FUN_146985120 body=68 status=ok
// SIG undefined FUN_146985120(void)

undefined8 * FUN_146985120(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149ef1600;
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



// FUNCTION 146985168 FUN_146985168 body=81 status=ok
// SIG undefined FUN_146985168(void)

undefined8 FUN_146985168(longlong param_1)

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



// FUNCTION 1469851c0 FUN_1469851c0 body=89 status=ok
// SIG undefined FUN_1469851c0(void)

bool FUN_1469851c0(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14698520b;
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
LAB_14698520b:
  return lVar6 == param_2;
}



// FUNCTION 146985236 FUN_146985236 body=118 status=ok
// SIG undefined FUN_146985236(void)

void FUN_146985236(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149ef1600;
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



// FUNCTION 1469852ac FUN_1469852ac body=118 status=ok
// SIG undefined FUN_1469852ac(void)

void FUN_1469852ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149ef1600;
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



// FUNCTION 146985322 FUN_146985322 body=156 status=ok
// SIG undefined FUN_146985322(void)

void FUN_146985322(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149ef1600;
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
                    /* WARNING: Could not recover jumptable at 0x0001469853ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1469853be FUN_1469853be body=104 status=ok
// SIG undefined FUN_1469853be(void)

void FUN_1469853be(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014698540b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014698541c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 146985426 FUN_146985426 body=101 status=ok
// SIG undefined FUN_146985426(void)

ulonglong FUN_146985426(longlong param_1)

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
LAB_146985480:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146985480;
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



// FUNCTION 14698548c FUN_14698548c body=9 status=ok
// SIG undefined FUN_14698548c(void)

void FUN_14698548c(longlong param_1)

{
  FUN_1402bbc34(param_1 + 0x10);
  return;
}



// FUNCTION 146985496 FUN_146985496 body=29 status=ok
// SIG undefined FUN_146985496(void)

undefined8 FUN_146985496(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469854b4 FUN_1469854b4 body=38 status=ok
// SIG undefined FUN_1469854b4(void)

undefined8 FUN_1469854b4(undefined8 param_1,int param_2)

{
  FUN_14287ac1e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469854da FUN_1469854da body=64 status=ok
// SIG undefined FUN_1469854da(void)

undefined8 * FUN_1469854da(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149ef1670;
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



// FUNCTION 14698551e FUN_14698551e body=81 status=ok
// SIG undefined FUN_14698551e(void)

undefined8 FUN_14698551e(longlong param_1)

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



// FUNCTION 146985576 FUN_146985576 body=89 status=ok
// SIG undefined FUN_146985576(void)

bool FUN_146985576(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1469855c1;
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
LAB_1469855c1:
  return lVar6 == param_2;
}



// FUNCTION 1469855f8 FUN_1469855f8 body=118 status=ok
// SIG undefined FUN_1469855f8(void)

void FUN_1469855f8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ef16e0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_149ef1670;
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



// FUNCTION 14698566e FUN_14698566e body=118 status=ok
// SIG undefined FUN_14698566e(void)

void FUN_14698566e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ef16e0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_149ef1670;
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



// FUNCTION 1469856e4 FUN_1469856e4 body=156 status=ok
// SIG undefined FUN_1469856e4(void)

void FUN_1469856e4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149ef16e0;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_149ef1670;
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
                    /* WARNING: Could not recover jumptable at 0x000146985770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146985780 FUN_146985780 body=121 status=ok
// SIG undefined FUN_146985780(void)

undefined8 FUN_146985780(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar7 = *(longlong **)(param_1 + 0x20);
  bVar3 = true;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar7[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_1469857b7;
      }
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    lVar6 = *(longlong *)(param_1 + 0x18);
    bVar3 = false;
  }
LAB_1469857b7:
  (**(code **)(param_1 + 0x28))
            (*(int *)(param_1 + 0x30) + lVar6,param_2,*(undefined1 *)(param_1 + 8));
  if (!bVar3) {
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
  }
  return param_2;
}



// FUNCTION 1469857fa FUN_1469857fa body=147 status=ok
// SIG undefined FUN_1469857fa(void)

ulonglong FUN_1469857fa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14698586c:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14698586c;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))
                (lVar4 + *(int *)(param_1 + 0x30),local_28,*(undefined1 *)(param_1 + 8));
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146985890 FUN_146985890 body=38 status=ok
// SIG undefined FUN_146985890(void)

undefined8 FUN_146985890(undefined8 param_1,int param_2)

{
  FUN_14287cf94();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146985952 FUN_146985952 body=87 status=ok
// SIG undefined FUN_146985952(void)

void FUN_146985952(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_146985cb4(param_1 + 0x18,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8) = uVar2;
  FUN_146985a0a(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8),param_1,param_2
               );
  return;
}



// FUNCTION 1469859aa FUN_1469859aa body=95 status=ok
// SIG undefined FUN_1469859aa(void)

void FUN_1469859aa(longlong param_1,uint param_2)

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



// FUNCTION 146985a0a FUN_146985a0a body=681 status=ok
// SIG undefined FUN_146985a0a(void)

void FUN_146985a0a(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(char *)(param_3 + 0x28) == '\x01') {
    local_48 = *(undefined1 *)(param_3 + 0x28);
    local_58 = *(undefined8 *)(param_3 + 0x18);
    uStack_50 = *(undefined8 *)(param_3 + 0x20);
    local_40 = *(undefined8 *)(param_3 + 0x30);
    *(undefined8 *)(param_3 + 0x30) = 0;
    local_38 = *(undefined4 *)(param_3 + 0x38);
    *(undefined4 *)(param_3 + 0x38) = 0;
    uVar1 = *(undefined4 *)(param_3 + 0x18);
    uVar2 = *(undefined4 *)(param_3 + 0x1c);
    uVar3 = *(undefined4 *)(param_3 + 0x20);
    uVar4 = *(undefined4 *)(param_3 + 0x24);
    *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_3 + 0x28);
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    *(undefined4 *)(param_1 + 0x28) = uVar3;
    *(undefined4 *)(param_1 + 0x2c) = uVar4;
    FUN_144a450dc(param_1 + 0x38,&local_40);
    FUN_1449db362(&local_40);
  }
  if (*(char *)(param_3 + 0x44) == '\x01') {
    local_6c = *(undefined1 *)(param_3 + 0x44);
    local_70 = *(undefined4 *)(param_3 + 0x40);
    local_68 = *(undefined8 *)(param_3 + 0x48);
    *(undefined8 *)(param_3 + 0x48) = 0;
    local_60 = *(undefined4 *)(param_3 + 0x50);
    *(undefined4 *)(param_3 + 0x50) = 0;
    uVar1 = *(undefined4 *)(param_3 + 0x40);
    *(undefined1 *)(param_1 + 0x4c) = *(undefined1 *)(param_3 + 0x44);
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    FUN_144a450dc(param_1 + 0x50,&local_68);
    FUN_1449db362(&local_68);
  }
  if (*(char *)(param_3 + 0x5c) == '\x01') {
    local_84 = *(undefined1 *)(param_3 + 0x5c);
    local_88 = *(undefined4 *)(param_3 + 0x58);
    local_80 = *(undefined8 *)(param_3 + 0x60);
    *(undefined8 *)(param_3 + 0x60) = 0;
    local_78 = *(undefined4 *)(param_3 + 0x68);
    *(undefined4 *)(param_3 + 0x68) = 0;
    uVar1 = *(undefined4 *)(param_3 + 0x58);
    *(undefined1 *)(param_1 + 100) = *(undefined1 *)(param_3 + 0x5c);
    *(undefined4 *)(param_1 + 0x60) = uVar1;
    FUN_144a450dc(param_1 + 0x68,&local_80);
    FUN_1449db362(&local_80);
  }
  if (*(char *)(param_3 + 0x74) == '\x01') {
    local_9c = *(undefined1 *)(param_3 + 0x74);
    local_a0 = *(undefined4 *)(param_3 + 0x70);
    local_98 = *(undefined8 *)(param_3 + 0x78);
    *(undefined8 *)(param_3 + 0x78) = 0;
    local_90 = *(undefined4 *)(param_3 + 0x80);
    *(undefined4 *)(param_3 + 0x80) = 0;
    uVar1 = *(undefined4 *)(param_3 + 0x70);
    *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_3 + 0x74);
    *(undefined4 *)(param_1 + 0x78) = uVar1;
    FUN_144a450dc(param_1 + 0x80,&local_98);
    FUN_1449db362(&local_98);
  }
  if (*(char *)(param_3 + 0x89) == '\x01') {
    local_b8 = *(undefined2 *)(param_3 + 0x88);
    local_b0 = *(undefined8 *)(param_3 + 0x90);
    *(undefined8 *)(param_3 + 0x90) = 0;
    local_a8 = *(undefined4 *)(param_3 + 0x98);
    *(undefined4 *)(param_3 + 0x98) = 0;
    *(undefined2 *)(param_1 + 0x90) = local_b8;
    FUN_144a450dc(param_1 + 0x98,&local_b0);
    FUN_1449db362(&local_b0);
  }
  if (*(char *)(param_3 + 0xb0) == '\x01') {
    local_d8 = *(undefined1 *)(param_3 + 0xb0);
    local_e8 = *(undefined8 *)(param_3 + 0xa0);
    uStack_e0 = *(undefined8 *)(param_3 + 0xa8);
    local_d0 = *(undefined8 *)(param_3 + 0xb8);
    *(undefined8 *)(param_3 + 0xb8) = 0;
    local_c8 = *(undefined4 *)(param_3 + 0xc0);
    *(undefined4 *)(param_3 + 0xc0) = 0;
    uVar1 = *(undefined4 *)(param_3 + 0xa0);
    uVar2 = *(undefined4 *)(param_3 + 0xa4);
    uVar3 = *(undefined4 *)(param_3 + 0xa8);
    uVar4 = *(undefined4 *)(param_3 + 0xac);
    *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_3 + 0xb0);
    *(undefined4 *)(param_1 + 0xa8) = uVar1;
    *(undefined4 *)(param_1 + 0xac) = uVar2;
    *(undefined4 *)(param_1 + 0xb0) = uVar3;
    *(undefined4 *)(param_1 + 0xb4) = uVar4;
    FUN_144a450dc(param_1 + 0xc0,&local_d0);
    FUN_1449db362(&local_d0);
  }
  FUN_146985d3a(param_1,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146985cb4 FUN_146985cb4 body=132 status=ok
// SIG undefined FUN_146985cb4(void)

void FUN_146985cb4(longlong param_1,int param_2)

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



// FUNCTION 146985d3a FUN_146985d3a body=150 status=ok
// SIG undefined FUN_146985d3a(void)

void FUN_146985d3a(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar3 = *(longlong *)(param_3 + 8);
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(param_3 + 0x10);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    FUN_14149270a(param_1);
    plVar5 = *(longlong **)(param_1 + 0x18);
    *(longlong *)(param_1 + 0x10) = lVar3;
    *(longlong *)(param_1 + 0x18) = lVar4;
    FUN_140a5503c(param_1);
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
  if ((param_2 != 0) && (*(longlong *)(param_1 + 8) == 0)) {
    *(longlong *)(param_1 + 8) = param_2;
    FUN_140a5503c(param_1);
    return;
  }
  return;
}



// FUNCTION 146985dd0 FUN_146985dd0 body=64 status=ok
// SIG undefined FUN_146985dd0(void)

undefined8 * FUN_146985dd0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149ef1a00;
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



// FUNCTION 146985e14 FUN_146985e14 body=81 status=ok
// SIG undefined FUN_146985e14(void)

undefined8 FUN_146985e14(longlong param_1)

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



// FUNCTION 146985e6c FUN_146985e6c body=89 status=ok
// SIG undefined FUN_146985e6c(void)

bool FUN_146985e6c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_146985eb7;
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
LAB_146985eb7:
  return lVar6 == param_2;
}



// FUNCTION 146985ee2 FUN_146985ee2 body=118 status=ok
// SIG undefined FUN_146985ee2(void)

void FUN_146985ee2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ed0600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149ef1a00;
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



// FUNCTION 146985f58 FUN_146985f58 body=118 status=ok
// SIG undefined FUN_146985f58(void)

void FUN_146985f58(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ed0600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149ef1a00;
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



// FUNCTION 146985fce FUN_146985fce body=156 status=ok
// SIG undefined FUN_146985fce(void)

void FUN_146985fce(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149ed0600;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149ef1a00;
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
                    /* WARNING: Could not recover jumptable at 0x00014698605a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14698606a FUN_14698606a body=103 status=ok
// SIG undefined FUN_14698606a(void)

ulonglong FUN_14698606a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar8) {
        uVar6 = (**(code **)(param_1 + 0x28))
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
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
        return (ulonglong)uVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001469860ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar7;
}



// FUNCTION 1469860d2 FUN_1469860d2 body=100 status=ok
// SIG undefined FUN_1469860d2(void)

ulonglong FUN_1469860d2(longlong param_1)

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
LAB_14698612b:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14698612b;
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



// FUNCTION 146986136 FUN_146986136 body=24 status=ok
// SIG undefined FUN_146986136(void)

void FUN_146986136(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014698614a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14698614e FUN_14698614e body=29 status=ok
// SIG undefined FUN_14698614e(void)

undefined8 FUN_14698614e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698616c FUN_14698616c body=162 status=ok
// SIG undefined FUN_14698616c(void)

void FUN_14698616c(longlong *param_1,undefined8 param_2)

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
        goto LAB_1469861f9;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1469861f9:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14698620e FUN_14698620e body=109 status=ok
// SIG undefined FUN_14698620e(void)

void FUN_14698620e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ef0f40;
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
  plVar3 = (longlong *)param_1[8];
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
  FUN_14698627c(param_1);
  return;
}



// FUNCTION 14698627c FUN_14698627c body=131 status=ok
// SIG undefined FUN_14698627c(void)

void FUN_14698627c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_149ef12c0;
  plVar3 = (longlong *)param_1[6];
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
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001469862f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 146986300 FUN_146986300 body=194 status=ok
// SIG undefined FUN_146986300(void)

void FUN_146986300(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 **ppuVar3;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  ppuVar3 = *(undefined8 ***)(param_2 + 0x38);
  if (*(undefined8 ***)(param_2 + 0x38) == (undefined8 **)0x0) {
    ppuVar3 = &local_28;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1469863c4(ppuVar3);
  *param_3 = uVar2;
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_28)(local_28,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469863c4 FUN_1469863c4 body=66 status=ok
// SIG undefined FUN_1469863c4(void)

uint FUN_1469863c4(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = *param_1;
  uVar3 = 0xffffffff;
  if ((((lVar2 != 0) && (-1 < *(int *)(lVar2 + 0x10))) &&
      (uVar1 = *(uint *)(lVar2 + 0x14), -1 < (int)uVar1)) &&
     (((-1 < *(int *)(lVar2 + 0x18) && (*(byte *)(lVar2 + 0x1c) != 0xff)) &&
      ((*(char *)(lVar2 + 0x1d) != '\x03' &&
       (uVar3 = -(uint)(*(char *)(lVar2 + 0x1d) != '\0') | uVar1, *(byte *)(lVar2 + 0x1c) < 2))))))
  {
    uVar3 = uVar1;
  }
  return uVar3;
}



// FUNCTION 14698640c FUN_14698640c body=551 status=ok
// SIG undefined FUN_14698640c(void)

void FUN_14698640c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined8 **ppuVar2;
  undefined1 *puVar3;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined4 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 local_39;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_30 = (undefined8 *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  ppuVar2 = &local_30;
  if (*(undefined8 ***)(param_2 + 0x38) != (undefined8 **)0x0) {
    ppuVar2 = *(undefined8 ***)(param_2 + 0x38);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  puVar3 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = &local_78;
  local_78 = local_4c;
  uStack_74 = uStack_48;
  uStack_70 = uStack_44;
  uStack_6c = uStack_40;
  local_88 = puVar3;
  FUN_146986634(&local_5c,ppuVar2,local_34,local_38);
  *param_3 = local_5c;
  param_3[1] = uStack_58;
  param_3[2] = uStack_54;
  param_3[3] = uStack_50;
  if (local_30 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_30 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146986634 FUN_146986634 body=220 status=ok
// SIG undefined FUN_146986634(void)

undefined8 *
FUN_146986634(undefined8 *param_1,longlong *param_2,uint param_3,uint param_4,undefined1 *param_5,
             undefined8 *param_6)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar2 = *param_2;
  *param_5 = 0;
  if ((((((lVar2 == 0) || (*(int *)(lVar2 + 0x10) < 0)) || (*(int *)(lVar2 + 0x14) < 0)) ||
       ((*(int *)(lVar2 + 0x18) < 0 || (bVar1 = *(byte *)(lVar2 + 0x1c), bVar1 == 0xff)))) ||
      ((*(char *)(lVar2 + 0x1d) == '\x03' ||
       ((*(char *)(lVar2 + 0x1d) != '\0' && 1 < bVar1 ||
        ((*(int *)(lVar2 + 0x10) <= (int)param_3 || (int)(param_4 | param_3) < 0) ||
         *(int *)(lVar2 + 0x14) <= (int)param_4)))))) || (8 < bVar1)) {
    uVar3 = param_6[1];
    *param_1 = *param_6;
    param_1[1] = uVar3;
  }
  else {
    *param_5 = 1;
    uVar5 = (ulonglong)*(byte *)(lVar2 + 0x1c);
    if (uVar5 < 9) {
      lVar4 = *(longlong *)(&DAT_149ef4cf0 + uVar5 * 8);
    }
    else {
      lVar4 = 0;
    }
    FUN_146987bd0(param_1,((longlong)(int)param_3 +
                          (longlong)*(int *)(lVar2 + 0x10) * (longlong)(int)param_4) * lVar4 +
                          *(longlong *)(lVar2 + 0x20),uVar5,
                  CONCAT71((int7)((ulonglong)param_6 >> 8),*(undefined1 *)(lVar2 + 0x1d)) &
                  0xffffffff);
  }
  return param_1;
}



// FUNCTION 146986716 FUN_146986716 body=459 status=ok
// SIG undefined FUN_146986716(void)

void FUN_146986716(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined8 **ppuVar2;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_39;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = (undefined8 *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  ppuVar2 = &local_30;
  if (*(undefined8 ***)(param_2 + 0x38) != (undefined8 **)0x0) {
    ppuVar2 = *(undefined8 ***)(param_2 + 0x38);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  local_68 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_68 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1469868e2(&local_58,ppuVar2,local_34,local_38);
  *param_3 = local_58;
  param_3[1] = uStack_54;
  param_3[2] = uStack_50;
  param_3[3] = uStack_4c;
  if (local_30 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_30 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469868e2 FUN_1469868e2 body=1546 status=ok
// SIG undefined FUN_1469868e2(void)

float * FUN_1469868e2(float *param_1,longlong *param_2,uint param_3,uint param_4,undefined1 *param_5
                     )

{
  undefined8 *puVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  ushort uVar5;
  uint uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  float fVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_68 [44];
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *param_2;
  *param_5 = 0;
  if (((((lVar3 == 0) || (*(int *)(lVar3 + 0x10) < 0)) || (*(int *)(lVar3 + 0x14) < 0)) ||
      ((*(int *)(lVar3 + 0x18) < 0 || (bVar2 = *(byte *)(lVar3 + 0x1c), bVar2 == 0xff)))) ||
     ((*(char *)(lVar3 + 0x1d) == '\x03' ||
      ((*(char *)(lVar3 + 0x1d) != '\0' && 1 < bVar2 ||
       ((*(int *)(lVar3 + 0x10) <= (int)param_3 || (int)(param_4 | param_3) < 0) ||
        *(int *)(lVar3 + 0x14) <= (int)param_4)))))) {
switchD_146986991_default:
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  switch(bVar2) {
  case 0:
    *param_5 = 1;
    if ((ulonglong)*(byte *)(lVar3 + 0x1c) < 9) {
      lVar11 = *(longlong *)(&DAT_149ef4cf0 + (ulonglong)*(byte *)(lVar3 + 0x1c) * 8);
    }
    else {
      lVar11 = 0;
    }
    fVar10 = (float)*(byte *)(*(longlong *)(lVar3 + 0x20) +
                             ((longlong)(int)param_3 +
                             (longlong)*(int *)(lVar3 + 0x10) * (longlong)(int)param_4) * lVar11);
    *param_1 = fVar10;
    param_1[1] = fVar10;
    param_1[2] = fVar10;
    param_1[3] = 255.0;
    break;
  case 1:
    *param_5 = 1;
    if ((ulonglong)*(byte *)(lVar3 + 0x1c) < 9) {
      lVar11 = *(longlong *)(&DAT_149ef4cf0 + (ulonglong)*(byte *)(lVar3 + 0x1c) * 8);
    }
    else {
      lVar11 = 0;
    }
    lVar11 = ((longlong)(int)param_3 + (longlong)*(int *)(lVar3 + 0x10) * (longlong)(int)param_4) *
             lVar11;
    lVar3 = *(longlong *)(lVar3 + 0x20);
    uVar7 = (ushort)*(byte *)(lVar3 + 3 + lVar11);
    uVar8 = (ushort)*(byte *)(lVar3 + lVar11);
    uVar9 = (ushort)*(byte *)(lVar3 + 1 + lVar11);
    uVar5 = (ushort)*(byte *)(lVar3 + 2 + lVar11);
    goto LAB_146986d8d;
  case 2:
    *param_5 = 1;
    if ((ulonglong)*(byte *)(lVar3 + 0x1c) < 9) {
      lVar11 = *(longlong *)(&DAT_149ef4cf0 + (ulonglong)*(byte *)(lVar3 + 0x1c) * 8);
    }
    else {
      lVar11 = 0;
    }
    local_2c = *(undefined4 *)
                (*(longlong *)(lVar3 + 0x20) +
                ((longlong)(int)param_3 + (longlong)*(int *)(lVar3 + 0x10) * (longlong)(int)param_4)
                * lVar11);
    FUN_1467ed870(&local_2c,&local_3c);
    *param_1 = local_3c;
    param_1[1] = local_38;
    param_1[2] = local_34;
    goto LAB_146986d9f;
  case 3:
    *param_5 = 1;
    if ((ulonglong)*(byte *)(lVar3 + 0x1c) < 9) {
      lVar11 = *(longlong *)(&DAT_149ef4cf0 + (ulonglong)*(byte *)(lVar3 + 0x1c) * 8);
    }
    else {
      lVar11 = 0;
    }
    lVar11 = ((longlong)(int)param_3 + (longlong)*(int *)(lVar3 + 0x10) * (longlong)(int)param_4) *
             lVar11;
    lVar3 = *(longlong *)(lVar3 + 0x20);
    uVar7 = *(ushort *)(lVar3 + 6 + lVar11);
    uVar8 = *(ushort *)(lVar3 + 4 + lVar11);
    uVar9 = *(ushort *)(lVar3 + 2 + lVar11);
    uVar5 = *(ushort *)(lVar3 + lVar11);
LAB_146986d8d:
    local_30 = (float)uVar7;
    *param_1 = (float)uVar5;
    param_1[1] = (float)uVar9;
    param_1[2] = (float)uVar8;
LAB_146986d9f:
    param_1[3] = local_30;
    break;
  case 4:
    *param_5 = 1;
    if ((ulonglong)*(byte *)(lVar3 + 0x1c) < 9) {
      lVar11 = *(longlong *)(&DAT_149ef4cf0 + (ulonglong)*(byte *)(lVar3 + 0x1c) * 8);
    }
    else {
      lVar11 = 0;
    }
    lVar11 = ((longlong)(int)param_3 + (longlong)*(int *)(lVar3 + 0x10) * (longlong)(int)param_4) *
             lVar11;
    lVar3 = *(longlong *)(lVar3 + 0x20);
    uVar7 = *(ushort *)(lVar3 + 6 + lVar11);
    uVar6 = (uint)uVar7 << 0xd;
    if ((uVar6 & 0xf800000) == 0xf800000) {
      fVar10 = (float)(uVar6 | 0x70000000);
    }
    else if ((uVar6 & 0xf800000) == 0) {
      fVar10 = (float)(uVar6 | 0x38800000) + -6.1035156e-05;
    }
    else {
      fVar10 = (float)((uVar6 & 0xfffe000) + 0x38000000);
    }
    uVar8 = *(ushort *)(lVar3 + 4 + lVar11);
    uVar6 = (uint)uVar8 << 0xd;
    if ((uVar6 & 0xf800000) == 0xf800000) {
      fVar12 = (float)(uVar6 | 0x70000000);
    }
    else if ((uVar6 & 0xf800000) == 0) {
      fVar12 = (float)(uVar6 | 0x38800000) + -6.1035156e-05;
    }
    else {
      fVar12 = (float)((uVar6 & 0xfffe000) + 0x38000000);
    }
    uVar9 = *(ushort *)(lVar3 + 2 + lVar11);
    uVar6 = (uint)uVar9 << 0xd;
    if ((uVar6 & 0xf800000) == 0xf800000) {
      fVar13 = (float)(uVar6 | 0x70000000);
    }
    else if ((uVar6 & 0xf800000) == 0) {
      fVar13 = (float)(uVar6 | 0x38800000) + -6.1035156e-05;
    }
    else {
      fVar13 = (float)((uVar6 & 0xfffe000) + 0x38000000);
    }
    uVar6 = (uint)*(ushort *)(lVar3 + lVar11) << 0xd;
    if ((uVar6 & 0xf800000) == 0xf800000) {
      fVar14 = (float)(uVar6 | 0x70000000);
    }
    else if ((uVar6 & 0xf800000) == 0) {
      fVar14 = (float)(uVar6 | 0x38800000) + -6.1035156e-05;
    }
    else {
      fVar14 = (float)((uVar6 & 0xfffe000) + 0x38000000);
    }
    *param_1 = (float)((int)(short)*(ushort *)(lVar3 + lVar11) & 0x80000000U | (uint)fVar14);
    param_1[1] = (float)((int)(short)uVar9 & 0x80000000U | (uint)fVar13);
    param_1[2] = (float)((uint)fVar12 | (int)(short)uVar8 & 0x80000000U);
    param_1[3] = (float)((uint)fVar10 | (int)(short)uVar7 & 0x80000000U);
    break;
  case 5:
    *param_5 = 1;
    if ((ulonglong)*(byte *)(lVar3 + 0x1c) < 9) {
      lVar11 = *(longlong *)(&DAT_149ef4cf0 + (ulonglong)*(byte *)(lVar3 + 0x1c) * 8);
    }
    else {
      lVar11 = 0;
    }
    puVar1 = (undefined8 *)
             (*(longlong *)(lVar3 + 0x20) +
             ((longlong)(int)param_3 + (longlong)*(int *)(lVar3 + 0x10) * (longlong)(int)param_4) *
             lVar11);
    uVar4 = puVar1[1];
    *(undefined8 *)param_1 = *puVar1;
    *(undefined8 *)(param_1 + 2) = uVar4;
    break;
  case 6:
    *param_5 = 1;
    if ((ulonglong)*(byte *)(lVar3 + 0x1c) < 9) {
      lVar11 = *(longlong *)(&DAT_149ef4cf0 + (ulonglong)*(byte *)(lVar3 + 0x1c) * 8);
    }
    else {
      lVar11 = 0;
    }
    fVar10 = (float)*(ushort *)
                     (*(longlong *)(lVar3 + 0x20) +
                     ((longlong)(int)param_3 +
                     (longlong)*(int *)(lVar3 + 0x10) * (longlong)(int)param_4) * lVar11);
    *param_1 = fVar10;
    param_1[1] = fVar10;
    param_1[2] = fVar10;
    goto LAB_146986dcf;
  case 7:
    *param_5 = 1;
    if ((ulonglong)*(byte *)(lVar3 + 0x1c) < 9) {
      lVar11 = *(longlong *)(&DAT_149ef4cf0 + (ulonglong)*(byte *)(lVar3 + 0x1c) * 8);
    }
    else {
      lVar11 = 0;
    }
    uVar7 = *(ushort *)
             (*(longlong *)(lVar3 + 0x20) +
             ((longlong)(int)param_3 + (longlong)*(int *)(lVar3 + 0x10) * (longlong)(int)param_4) *
             lVar11);
    uVar6 = (uint)uVar7 << 0xd;
    if ((uVar6 & 0xf800000) == 0xf800000) {
      fVar10 = (float)(uVar6 | 0x70000000);
    }
    else if ((uVar6 & 0xf800000) == 0) {
      fVar10 = (float)(uVar6 | 0x38800000) + -6.1035156e-05;
    }
    else {
      fVar10 = (float)((uVar6 & 0xfffe000) + 0x38000000);
    }
    *param_1 = (float)((int)(short)uVar7 & 0x80000000U | (uint)fVar10);
    goto LAB_146986dc7;
  case 8:
    *param_5 = 1;
    if ((ulonglong)*(byte *)(lVar3 + 0x1c) < 9) {
      lVar11 = *(longlong *)(&DAT_149ef4cf0 + (ulonglong)*(byte *)(lVar3 + 0x1c) * 8);
    }
    else {
      lVar11 = 0;
    }
    *param_1 = *(float *)(*(longlong *)(lVar3 + 0x20) +
                         ((longlong)(int)param_3 +
                         (longlong)*(int *)(lVar3 + 0x10) * (longlong)(int)param_4) * lVar11);
LAB_146986dc7:
    param_1[1] = 0.0;
    param_1[2] = 0.0;
LAB_146986dcf:
    param_1[3] = 1.0;
    break;
  default:
    goto switchD_146986991_default;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146986eee FUN_146986eee body=206 status=ok
// SIG undefined FUN_146986eee(void)

void FUN_146986eee(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 **ppuVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined8 *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  ppuVar2 = *(undefined8 ***)(param_2 + 0x38);
  if (*(undefined8 ***)(param_2 + 0x38) == (undefined8 **)0x0) {
    ppuVar2 = &local_28;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_146986fbe(&local_30,ppuVar2);
  *param_3 = local_30;
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_28)(local_28,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146986fbe FUN_146986fbe body=114 status=ok
// SIG undefined FUN_146986fbe(void)

void FUN_146986fbe(float *param_1,longlong *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *param_2;
  fVar2 = -1.0;
  if ((((lVar1 == 0) || (*(int *)(lVar1 + 0x10) < 0)) || (*(int *)(lVar1 + 0x14) < 0)) ||
     (((*(int *)(lVar1 + 0x18) < 0 || (*(byte *)(lVar1 + 0x1c) == 0xff)) ||
      (*(char *)(lVar1 + 0x1d) == '\x03')))) {
    fVar3 = -1.0;
  }
  else {
    fVar3 = fVar2;
    if (*(byte *)(lVar1 + 0x1c) < 2 || *(char *)(lVar1 + 0x1d) == '\0') {
      fVar3 = (float)*(int *)(lVar1 + 0x14);
      fVar2 = (float)*(int *)(lVar1 + 0x10);
    }
  }
  *param_1 = fVar2;
  param_1[1] = fVar3;
  return;
}



// FUNCTION 146987030 FUN_146987030 body=194 status=ok
// SIG undefined FUN_146987030(void)

void FUN_146987030(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 **ppuVar3;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  ppuVar3 = *(undefined8 ***)(param_2 + 0x38);
  if (*(undefined8 ***)(param_2 + 0x38) == (undefined8 **)0x0) {
    ppuVar3 = &local_28;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1469870f4(ppuVar3);
  *param_3 = uVar2;
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_28)(local_28,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469870f4 FUN_1469870f4 body=66 status=ok
// SIG undefined FUN_1469870f4(void)

uint FUN_1469870f4(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = *param_1;
  uVar3 = 0xffffffff;
  if ((((lVar2 != 0) && (uVar1 = *(uint *)(lVar2 + 0x10), -1 < (int)uVar1)) &&
      (-1 < *(int *)(lVar2 + 0x14))) &&
     (((-1 < *(int *)(lVar2 + 0x18) && (*(byte *)(lVar2 + 0x1c) != 0xff)) &&
      ((*(char *)(lVar2 + 0x1d) != '\x03' &&
       (uVar3 = -(uint)(*(char *)(lVar2 + 0x1d) != '\0') | uVar1, *(byte *)(lVar2 + 0x1c) < 2))))))
  {
    uVar3 = uVar1;
  }
  return uVar3;
}



// FUNCTION 14698713c FUN_14698713c body=254 status=ok
// SIG undefined FUN_14698713c(void)

void FUN_14698713c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (undefined8 *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  ppuVar4 = &local_20;
  if (*(undefined8 ***)(param_2 + 0x38) != (undefined8 **)0x0) {
    ppuVar4 = *(undefined8 ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar2 = *ppuVar4;
  if ((((puVar2 == (undefined8 *)0x0) || (*(int *)(puVar2 + 2) < 0)) ||
      (*(int *)((longlong)puVar2 + 0x14) < 0)) ||
     (((*(int *)(puVar2 + 3) < 0 || (*(byte *)((longlong)puVar2 + 0x1c) == 0xff)) ||
      (*(char *)((longlong)puVar2 + 0x1d) == '\x03')))) {
    bVar3 = false;
  }
  else {
    bVar3 = *(char *)((longlong)puVar2 + 0x1d) == '\0' || *(byte *)((longlong)puVar2 + 0x1c) < 2;
  }
  *param_3 = bVar3;
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14698723e FUN_14698723e body=42 status=ok
// SIG undefined FUN_14698723e(void)

undefined4 FUN_14698723e(int param_1)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  
  piVar3 = &DAT_149ef3ef0;
  lVar2 = 0;
  do {
    if (*piVar3 == param_1) {
      uVar1 = (uint)lVar2 & 0x80000001;
      return CONCAT31((int3)(uVar1 >> 8),uVar1 == 1);
    }
    lVar2 = lVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (lVar2 != 0xe);
  return 0;
}



// FUNCTION 146987268 FUN_146987268 body=44 status=ok
// SIG undefined FUN_146987268(void)

undefined8 FUN_146987268(int param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar2 = 1;
  if (param_1 != 0x1c) {
    uVar1 = 0;
    do {
      uVar3 = uVar1;
      if (uVar3 == 0xd) break;
      uVar1 = uVar3 + 1;
    } while ((&DAT_149ef3ef4)[uVar3] != param_1);
    uVar2 = CONCAT71(0x149ef3e,uVar3 < 0xd);
  }
  return uVar2;
}



// FUNCTION 146987294 FUN_146987294 body=44 status=ok
// SIG undefined FUN_146987294(void)

undefined8 FUN_146987294(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_14287d0d8();
  if (((iVar1 != 0) || (1 < *param_1 - 1U)) ||
     (uVar2 = CONCAT71((uint7)(uint3)(*param_1 - 1U >> 8),1), param_1[5] != 1)) {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1469872c0 FUN_1469872c0 body=50 status=ok
// SIG undefined FUN_1469872c0(void)

undefined8 FUN_1469872c0(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_14287d0d8();
  if ((((iVar1 != 0) || ((*(byte *)(param_1 + 7) & 1) != 0)) || (1 < *param_1 - 1U)) ||
     (uVar2 = CONCAT71((uint7)(uint3)(*param_1 - 1U >> 8),1), (uint)param_1[5] < 2)) {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1469872f2 FUN_1469872f2 body=280 status=ok
// SIG undefined FUN_1469872f2(void)

undefined8 *
FUN_1469872f2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,int param_7,uint param_8,int *param_9)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  if (puVar2 == (undefined8 *)0x0) {
    if (param_9 != (int *)0x0) {
      *param_9 = 1;
    }
  }
  else {
    *(undefined4 *)puVar2 = param_1;
    *(undefined4 *)((longlong)puVar2 + 4) = param_2;
    *(undefined4 *)(puVar2 + 1) = param_3;
    *(undefined4 *)((longlong)puVar2 + 0xc) = param_4;
    *(undefined4 *)(puVar2 + 2) = param_5;
    *(undefined4 *)((longlong)puVar2 + 0x14) = param_6;
    *(int *)(puVar2 + 3) = param_7;
    *(uint *)((longlong)puVar2 + 0x1c) = param_8 & 0xfffffffd;
    iVar1 = FUN_14287d0d8();
    if (param_9 != (int *)0x0) {
      *param_9 = iVar1;
    }
    if (iVar1 == 0) {
      lVar3 = 0;
      if (param_7 != 0) {
        lVar4 = 0;
        do {
          if (*(int *)((longlong)&DAT_149ef45c0 + lVar4) == param_7) {
            lVar3 = (longlong)&DAT_149ef45c0 + lVar4;
            break;
          }
          lVar4 = lVar4 + 0x10;
        } while (lVar4 != 0x650);
      }
      FUN_14287d262(puVar2,lVar3,param_8);
      if (param_9 == (int *)0x0) {
        return puVar2;
      }
      *param_9 = 0;
      return puVar2;
    }
    FUN_1400020a8(puVar2);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14698740a FUN_14698740a body=69 status=ok
// SIG undefined FUN_14698740a(void)

void FUN_14698740a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  FUN_1469872f2(2,param_1,param_2,1,param_3,1,param_4,param_5,param_6);
  return;
}



// FUNCTION 14698744f FUN_14698744f body=6 status=ok
// SIG undefined FUN_14698744f(void)

undefined8 FUN_14698744f(void)

{
  return 0x94;
}



// FUNCTION 146987455 FUN_146987455 body=6 status=ok
// SIG undefined FUN_146987455(void)

undefined8 FUN_146987455(void)

{
  return 0x80;
}



// FUNCTION 14698745c FUN_14698745c body=57 status=ok
// SIG undefined FUN_14698745c(void)

bool FUN_14698745c(int *param_1,ulonglong param_2)

{
  bool bVar1;
  
  if ((param_2 < 0x80) || (*param_1 != 0x20534444)) {
    bVar1 = false;
  }
  else {
    bVar1 = param_2 - 0x94 < 0xffffffffffffffec ||
            (param_1[0x15] != 0x30315844 || (*(byte *)(param_1 + 0x14) & 4) == 0);
  }
  return bVar1;
}



// FUNCTION 146987496 FUN_146987496 body=110 status=ok
// SIG undefined FUN_146987496(void)

void FUN_146987496(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 < 0x5d) {
    if (iVar1 == 0x58) {
      uVar3 = 0x57;
    }
    else {
      if (iVar1 != 0x5c) {
        return;
      }
      uVar3 = 0x5a;
    }
  }
  else if (iVar1 == 0x5d) {
    uVar3 = 0x5b;
  }
  else {
    uVar3 = 0x1d;
    if (iVar1 != 0x3eb) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      if (0 < *(longlong *)(lVar2 + 0x20 + lVar4)) {
        *(undefined1 *)(*(longlong *)(lVar2 + 0x28 + lVar4) + 3) = 0xff;
      }
      lVar4 = lVar4 + 0x30;
    } while ((longlong)iVar1 * 0x30 != lVar4);
  }
  return;
}



// FUNCTION 146987504 FUN_146987504 body=139 status=ok
// SIG undefined FUN_146987504(void)

void FUN_146987504(longlong param_1,uint param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  
  piVar7 = &DAT_149ef42c0;
  uVar4 = 0;
  while (*piVar7 != *(int *)(param_1 + 0x18)) {
    uVar4 = uVar4 + 1;
    piVar7 = piVar7 + 1;
    if (uVar4 == 8) {
      return;
    }
  }
  if (((uint)uVar4 & 1) == param_2) {
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = (&DAT_149ef42c0)[uVar4 ^ 1];
  if ((longlong)*(int *)(param_1 + 0x28) == 0) {
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  lVar6 = (longlong)*(int *)(param_1 + 0x28) * 0x30 + lVar5;
  do {
    lVar2 = *(longlong *)(lVar5 + 0x20);
    if (0 < lVar2) {
      lVar3 = *(longlong *)(lVar5 + 0x28);
      lVar8 = 0;
      do {
        uVar1 = *(undefined1 *)(lVar3 + lVar8);
        *(undefined1 *)(lVar3 + lVar8) = *(undefined1 *)(lVar3 + 2 + lVar8);
        *(undefined1 *)(lVar3 + 2 + lVar8) = uVar1;
        lVar8 = lVar8 + 4;
      } while (lVar8 < lVar2);
    }
    lVar5 = lVar5 + 0x30;
  } while (lVar5 != lVar6);
  return;
}



// FUNCTION 146987590 FUN_146987590 body=34 status=ok
// SIG undefined FUN_146987590(void)

void FUN_146987590(longlong param_1,longlong param_2,int param_3)

{
  memcpy(*(void **)(*(longlong *)(param_1 + 0x20) + 0x28 + (longlong)param_3 * 0x30),
         *(void **)(param_2 + 0x10),
         *(size_t *)(*(longlong *)(param_1 + 0x20) + 0x20 + (longlong)param_3 * 0x30));
  return;
}



// FUNCTION 1469875b2 FUN_1469875b2 body=55 status=ok
// SIG undefined FUN_1469875b2(void)

undefined1 FUN_1469875b2(int param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_14c75ed80 != 0) {
    piVar1 = &DAT_14c75ed88;
    iVar2 = DAT_14c75ed80;
    do {
      if (iVar2 == param_1) {
        if (param_2 != (undefined1 *)0x0) {
          *param_2 = *(undefined1 *)((longlong)piVar1 + -3);
        }
        return (char)piVar1[-1];
      }
      iVar2 = *piVar1;
      piVar1 = piVar1 + 2;
    } while (iVar2 != 0);
  }
  return 0xff;
}



// FUNCTION 1469875e9 FUN_1469875e9 body=90 status=ok
// SIG undefined FUN_1469875e9(void)

char FUN_1469875e9(undefined1 param_1,char param_2)

{
  switch(param_1) {
  case 0:
    return '=';
  case 1:
    return (param_2 != '\0') * '\x04' + 'W';
  case 2:
    return 'W';
  case 3:
    return '\v';
  case 4:
    return '\n';
  case 5:
    return '\x02';
  case 6:
    return '8';
  case 7:
    return '6';
  case 8:
    return ')';
  default:
    return '\0';
  }
}



// FUNCTION 146987643 FUN_146987643 body=55 status=ok
// SIG undefined FUN_146987643(void)

longlong FUN_146987643(ulonglong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = FUN_14287de75();
  if (1 < (int)lVar1) {
    uVar2 = *param_1 + 0x3f & 0xffffffffffffffc0;
    *param_1 = uVar2;
    lVar1 = (longlong)(param_2 + uVar2 + -1) / (longlong)uVar2;
  }
  return lVar1;
}



// FUNCTION 14698767a FUN_14698767a body=101 status=ok
// SIG undefined FUN_14698767a(void)

longlong FUN_14698767a(undefined4 *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = FUN_14287de75(local_20,param_2 * param_3);
  lVar2 = (param_3 + iVar1 + -1) / (longlong)iVar1;
  lVar3 = lVar2 + param_3 + -1;
  *param_1 = (int)lVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar3 / lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48,lVar3 % lVar2);
}



// FUNCTION 1469876e0 FUN_1469876e0 body=64 status=ok
// SIG undefined FUN_1469876e0(void)

undefined4 *
FUN_1469876e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5,undefined1 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined1 *)(param_1 + 3) = param_5;
  *(undefined1 *)((longlong)param_1 + 0xd) = param_6;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_14287f4cc(param_1);
  return param_1;
}



// FUNCTION 146987720 FUN_146987720 body=221 status=ok
// SIG undefined FUN_146987720(void)

void FUN_146987720(int *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((char)param_1[3] == '\x03') {
    lVar7 = (longlong)param_1[1] * (longlong)*param_1 * (longlong)param_1[2];
    if ((lVar7 * 4 & 0x7ffffffffffffffcU) != 0) {
      lVar5 = *(longlong *)(param_1 + 4);
      lVar6 = *(longlong *)(param_2 + 0x10);
      lVar8 = 0;
      do {
        puVar2 = (undefined2 *)(lVar5 + lVar8);
        uVar4 = *puVar2;
        *(undefined2 *)(lVar6 + lVar8) = puVar2[2];
        *(undefined2 *)(lVar6 + 2 + lVar8) = puVar2[1];
        *(undefined2 *)(lVar6 + 4 + lVar8) = uVar4;
        *(undefined2 *)(lVar6 + 6 + lVar8) = puVar2[3];
        lVar8 = lVar8 + 8;
      } while (puVar2 + 4 < (undefined2 *)(lVar5 + lVar7 * 8));
    }
  }
  else if (((char)param_1[3] == '\x01') &&
          (lVar7 = (longlong)param_1[1] * (longlong)*param_1 * (longlong)param_1[2], 0 < lVar7)) {
    lVar5 = *(longlong *)(param_1 + 4);
    lVar6 = *(longlong *)(param_2 + 0x10);
    lVar8 = 0;
    do {
      puVar1 = (undefined1 *)(lVar5 + lVar8);
      uVar3 = *puVar1;
      *(undefined1 *)(lVar6 + lVar8) = puVar1[2];
      *(undefined1 *)(lVar6 + 1 + lVar8) = puVar1[1];
      *(undefined1 *)(lVar6 + 2 + lVar8) = uVar3;
      *(undefined1 *)(lVar6 + 3 + lVar8) = puVar1[3];
      lVar8 = lVar8 + 4;
    } while (puVar1 + 4 < (undefined1 *)(lVar5 + lVar7 * 4));
  }
  return;
}



// FUNCTION 1469877fd FUN_1469877fd body=8 status=ok
// SIG undefined FUN_1469877fd(void)

void FUN_1469877fd(undefined8 param_1)

{
  FUN_146987720(param_1,param_1);
  return;
}



// FUNCTION 146987806 FUN_146987806 body=31 status=ok
// SIG undefined FUN_146987806(void)

void FUN_146987806(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined1 *)(param_1 + 3) = param_5;
  *(undefined1 *)((longlong)param_1 + 0xd) = param_6;
  FUN_14287f4cc();
  return;
}



// FUNCTION 146987826 FUN_146987826 body=203 status=ok
// SIG undefined FUN_146987826(void)

void FUN_146987826(undefined8 *param_1,byte param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)((longlong)param_1 + 0xc) != param_2) ||
     ((param_2 < 2 && (*(char *)((longlong)param_1 + 0xd) != param_3)))) {
    local_60 = 0;
    uStack_58 = 0;
    uStack_54 = CONCAT22(uStack_54._2_2_,0x201);
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    FUN_14287f568(param_1,&local_60);
    local_28 = param_1[4];
    local_38 = param_1[2];
    uStack_30 = param_1[3];
    param_1[4] = local_40;
    param_1[2] = local_50;
    param_1[3] = uStack_48;
    uVar3 = *param_1;
    uVar1 = *(undefined4 *)(param_1 + 1);
    uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
    *(undefined4 *)param_1 = (undefined4)local_60;
    *(undefined4 *)((longlong)param_1 + 4) = local_60._4_4_;
    *(undefined4 *)(param_1 + 1) = uStack_58;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_54;
    local_60 = uVar3;
    uStack_58 = uVar1;
    uStack_54 = uVar2;
    local_50 = local_38;
    uStack_48 = uStack_30;
    local_40 = local_28;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469878f2 FUN_1469878f2 body=82 status=ok
// SIG undefined FUN_1469878f2(void)

void FUN_1469878f2(undefined8 *param_1,int *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = param_1[1];
  *(undefined8 *)param_2 = *param_1;
  *(undefined8 *)(param_2 + 2) = uVar1;
  *(undefined8 *)(param_2 + 4) = param_1[2];
  param_2[2] = 1;
  if ((ulonglong)*(byte *)(param_2 + 3) < 9) {
    lVar2 = *(longlong *)(&DAT_149ef4cf0 + (ulonglong)*(byte *)(param_2 + 3) * 8);
  }
  else {
    lVar2 = 0;
  }
  *(longlong *)(param_2 + 4) =
       (longlong)*param_2 * (longlong)param_3 * param_2[1] * lVar2 + param_1[2];
  return;
}



// FUNCTION 146987944 FUN_146987944 body=77 status=ok
// SIG undefined FUN_146987944(void)

void FUN_146987944(undefined8 *param_1,int *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = param_1[2];
  uVar2 = param_1[1];
  *(undefined8 *)param_2 = *param_1;
  *(undefined8 *)(param_2 + 2) = uVar2;
  param_2[2] = 1;
  if ((ulonglong)*(byte *)(param_2 + 3) < 9) {
    lVar3 = *(longlong *)(&DAT_149ef4cf0 + (ulonglong)*(byte *)(param_2 + 3) * 8);
  }
  else {
    lVar3 = 0;
  }
  *(longlong *)(param_2 + 4) = lVar1 + (longlong)*param_2 * (longlong)param_3 * param_2[1] * lVar3;
  return;
}



// FUNCTION 146987992 FUN_146987992 body=310 status=ok
// SIG undefined FUN_146987992(void)

void FUN_146987992(longlong param_1,int param_2,int param_3,int param_4,byte param_5,
                  undefined1 param_6)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  
  *(byte *)(param_1 + 0x28) = param_5;
  *(undefined1 *)(param_1 + 0x29) = param_6;
  iVar8 = 0;
  if (param_5 < 9) {
    iVar8 = *(int *)(&DAT_149ef4c1c + (ulonglong)param_5 * 4);
  }
  plVar1 = (longlong *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != param_4) {
    FUN_1469884bc(plVar1,param_4);
  }
  uVar6 = 0;
  do {
    iVar2 = *(int *)(param_1 + 0x20);
    lVar7 = (longlong)iVar2;
    *(uint *)(param_1 + 0x20) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x24) < iVar2 + 1U) {
      FUN_146988524(plVar1,iVar2);
    }
    lVar4 = (longlong)(param_2 * iVar8 * param_3);
    lVar3 = *plVar1;
    *(int *)(lVar3 + lVar7 * 0x18) = param_2;
    *(int *)(lVar3 + 4 + lVar7 * 0x18) = param_3;
    *(ulonglong *)(lVar3 + 8 + lVar7 * 0x18) = uVar6;
    *(longlong *)(lVar3 + 0x10 + lVar7 * 0x18) = lVar4;
    uVar6 = uVar6 + lVar4;
    if ((param_4 < 2) || (param_2 = param_2 >> 1, param_2 < 1)) break;
    param_3 = param_3 >> 1;
    param_4 = param_4 + -1;
  } while (0 < param_3);
  if ((longlong)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar6);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(ulonglong *)(param_1 + 0x10) == uVar6) {
    lVar7 = 0;
    uVar5 = uVar6;
  }
  else {
    FUN_140d2d4a8(param_1,uVar6);
    lVar7 = *(longlong *)(param_1 + 8);
    uVar5 = *(ulonglong *)(param_1 + 0x10);
  }
  *(ulonglong *)(param_1 + 8) = lVar7 + uVar6;
  if (uVar6 <= uVar5 - lVar7) {
    return;
  }
  FUN_14112c458(param_1);
  return;
}



// FUNCTION 146987ac9 FUN_146987ac9 body=23 status=ok
// SIG undefined FUN_146987ac9(void)

undefined8 FUN_146987ac9(byte param_1)

{
  if (param_1 < 9) {
    return *(undefined8 *)(&DAT_149ef4cf0 + (ulonglong)param_1 * 8);
  }
  return 0;
}



// FUNCTION 146987ae0 FUN_146987ae0 body=239 status=ok
// SIG undefined FUN_146987ae0(void)

void FUN_146987ae0(longlong *param_1,byte param_2,char param_3)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(byte *)(param_1 + 5) != param_2) ||
     ((param_2 < 2 && (*(char *)((longlong)param_1 + 0x29) != param_3)))) {
    local_68 = 0;
    lStack_60 = 0;
    local_78 = 0;
    lStack_70 = 0;
    local_58 = 0;
    uStack_50 = 0x201;
    FUN_14287f5fc(param_1,&local_78);
    local_48 = *param_1;
    lStack_40 = param_1[1];
    local_38 = param_1[2];
    lStack_30 = param_1[3];
    local_28 = param_1[4];
    lVar1 = param_1[5];
    param_1[4] = local_58;
    param_1[5] = CONCAT44(uStack_4c,CONCAT22(uStack_4e,uStack_50));
    param_1[2] = local_68;
    param_1[3] = lStack_60;
    *param_1 = local_78;
    param_1[1] = lStack_70;
    uStack_20._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
    uStack_50 = (undefined2)lVar1;
    uStack_4e = (undefined2)((ulonglong)lVar1 >> 0x10);
    uStack_4c = uStack_20._4_4_;
    local_78 = local_48;
    lStack_70 = lStack_40;
    local_68 = local_38;
    lStack_60 = lStack_30;
    local_58 = local_28;
    uStack_20 = lVar1;
    if (lStack_30 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146987bd0 FUN_146987bd0 body=744 status=ok
// SIG undefined FUN_146987bd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_146987bd0(undefined1 (*param_1) [16],float *param_2,undefined1 param_3,char param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar12;
  float fVar13;
  undefined1 in_XMM1 [16];
  undefined1 auVar14 [16];
  int iVar15;
  float fVar16;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined1 auVar17 [16];
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auStack_38 [36];
  float local_14;
  ulonglong local_10;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined2 uVar11;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  switch(param_3) {
  case 0:
    if (param_4 == '\x01') {
      puVar4 = (undefined4 *)&DAT_14c758770;
    }
    else {
      if (param_4 != '\x02') {
        fVar2 = (float)*(byte *)param_2 * 0.003921569;
        goto LAB_146987d29;
      }
      puVar4 = &DAT_14c758c60;
    }
    fVar2 = (float)puVar4[*(byte *)param_2];
    goto LAB_146987d29;
  case 1:
    fVar1 = *param_2;
    if (param_4 == '\x01') {
      puVar4 = (undefined4 *)&DAT_14c758770;
    }
    else {
      if (param_4 != '\x02') {
        fVar13 = 0.003921569;
        fVar2 = (float)((uint)fVar1 >> 0x18) * 0.003921569;
        fVar16 = (float)((uint)fVar1 & 0xff) * 0.003921569;
        fVar21 = (float)((uint)fVar1 >> 8 & 0xff) * 0.003921569;
        uVar3 = (uint)fVar1 >> 0x10 & 0xff;
        goto LAB_146987cfe;
      }
      puVar4 = &DAT_14c758c60;
    }
    *(undefined4 *)*param_1 = puVar4[(uint)fVar1 >> 0x10 & 0xff];
    *(undefined4 *)(*param_1 + 4) = puVar4[(uint)fVar1 >> 8 & 0xff];
    *(undefined4 *)(*param_1 + 8) = puVar4[(uint)fVar1 & 0xff];
    *(float *)(*param_1 + 0xc) = (float)((uint)fVar1 >> 0x18) * 0.003921569;
    break;
  case 2:
    local_14 = *param_2;
    FUN_1467ed870(&local_14,param_1);
    break;
  case 3:
    fVar13 = 1.5259022e-05;
    fVar2 = (float)*(ushort *)((longlong)param_2 + 6) * 1.5259022e-05;
    fVar16 = (float)*(ushort *)(param_2 + 1) * 1.5259022e-05;
    fVar21 = (float)*(ushort *)((longlong)param_2 + 2) * 1.5259022e-05;
    uVar3 = (uint)*(ushort *)param_2;
LAB_146987cfe:
    *(float *)*param_1 = (float)uVar3 * fVar13;
    *(float *)(*param_1 + 4) = fVar21;
    *(float *)(*param_1 + 8) = fVar16;
    *(float *)(*param_1 + 0xc) = fVar2;
    break;
  case 4:
    uVar5 = *(ulonglong *)param_2;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar5;
    auVar6 = pmovzxwd(in_XMM1,auVar6);
    auVar6 = auVar6 & _DAT_149e1a1a0;
    iVar15 = auVar6._0_4_;
    iVar18 = auVar6._4_4_;
    iVar19 = auVar6._8_4_;
    iVar20 = auVar6._12_4_;
    auVar17._0_4_ = (float)(iVar15 << 0xd) * 5.192297e+33;
    auVar17._4_4_ = (float)(iVar18 << 0xd) * 5.192297e+33;
    auVar17._8_4_ = (float)(iVar19 << 0xd) * 5.192297e+33;
    auVar17._12_4_ = (float)(iVar20 << 0xd) * 5.192297e+33;
    auVar22._0_4_ = -(uint)(0x7bff < iVar15);
    auVar22._4_4_ = -(uint)(0x7bff < iVar18);
    auVar22._8_4_ = -(uint)(0x7bff < iVar19);
    auVar22._12_4_ = -(uint)(0x7bff < iVar20);
    uVar11 = (undefined2)(uVar5 >> 0x30);
    auVar10._8_4_ = 0;
    auVar10._0_8_ = uVar5;
    auVar10._12_2_ = uVar11;
    auVar10._14_2_ = uVar11;
    uVar11 = (undefined2)(uVar5 >> 0x20);
    auVar9._12_4_ = auVar10._12_4_;
    auVar9._8_2_ = 0;
    auVar9._0_8_ = uVar5;
    auVar9._10_2_ = uVar11;
    auVar8._10_6_ = auVar9._10_6_;
    auVar8._8_2_ = uVar11;
    auVar8._0_8_ = uVar5;
    uVar11 = (undefined2)(uVar5 >> 0x10);
    auVar7._8_8_ = auVar8._8_8_;
    auVar7._6_2_ = uVar11;
    auVar7._4_2_ = uVar11;
    auVar7._0_2_ = (undefined2)uVar5;
    auVar7._2_2_ = auVar7._0_2_;
    auVar14._0_4_ = -(uint)(0x7c00 < iVar15);
    auVar14._4_4_ = -(uint)(0x7c00 < iVar18);
    auVar14._8_4_ = -(uint)(0x7c00 < iVar19);
    auVar14._12_4_ = -(uint)(0x7c00 < iVar20);
    *param_1 = auVar7 & _DAT_1499319e0 | auVar14 & _DAT_149e1a1e0 | auVar22 & _DAT_1499356b0 |
               auVar17;
    break;
  case 5:
    uVar5 = *(ulonglong *)param_2;
    uVar12 = *(ulonglong *)(param_2 + 2);
    goto LAB_146987d7d;
  case 6:
    fVar2 = (float)*(ushort *)param_2 * 1.5259022e-05;
LAB_146987d29:
    *(float *)*param_1 = fVar2;
    *(float *)(*param_1 + 4) = fVar2;
    *(float *)(*param_1 + 8) = fVar2;
LAB_146987da0:
    *(undefined4 *)(*param_1 + 0xc) = 0x3f800000;
    break;
  case 7:
    uVar3 = (uint)*(ushort *)param_2 << 0xd;
    if ((uVar3 & 0xf800000) == 0xf800000) {
      fVar2 = (float)(uVar3 | 0x70000000);
    }
    else if ((uVar3 & 0xf800000) == 0) {
      fVar2 = (float)(uVar3 | 0x38800000) + -6.1035156e-05;
    }
    else {
      fVar2 = (float)((uVar3 & 0xfffe000) + 0x38000000);
    }
    *(uint *)*param_1 = (int)(short)*(ushort *)param_2 & 0x80000000U | (uint)fVar2;
    goto LAB_146987d98;
  case 8:
    *(float *)*param_1 = *param_2;
LAB_146987d98:
    *(undefined8 *)(*param_1 + 4) = 0;
    goto LAB_146987da0;
  default:
    uVar5 = 0;
    uVar12 = 0;
LAB_146987d7d:
    *(ulonglong *)*param_1 = uVar5;
    *(ulonglong *)(*param_1 + 8) = uVar12;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146987ebb FUN_146987ebb body=247 status=ok
// SIG undefined FUN_146987ebb(void)

void FUN_146987ebb(int *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined8 *local_78;
  code *local_68;
  int *local_60;
  undefined8 local_58;
  undefined4 local_50;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_1 + 3) < 6) && ((0x3aU >> (*(byte *)(param_1 + 3) & 0x1f) & 1) != 0)) {
    lVar3 = (longlong)param_1[2] * (longlong)param_1[1];
    iVar1 = FUN_14287de75(&local_48,*param_1 * lVar3);
    lVar2 = (lVar3 + iVar1 + -1) / (longlong)iVar1;
    local_30 = (longlong)(int)lVar2;
    local_38 = *(undefined8 *)(param_1 + 4);
    local_48 = *param_1;
    iStack_44 = param_1[1];
    iStack_40 = param_1[2];
    iStack_3c = param_1[3];
    local_78 = &local_58;
    local_58 = 0;
    local_50 = 0;
    local_68 = FUN_142881138;
    local_80 = 2;
    local_60 = &local_48;
    FUN_1411ca36e(L"PF.SetAlphaOpaque",(lVar2 + lVar3 + -1) / lVar2 & 0xffffffff,1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146987fb3 FUN_146987fb3 body=81 status=ok
// SIG undefined FUN_146987fb3(void)

undefined8 FUN_146987fb3(char param_1,char *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (char *)0x0) {
    *param_2 = param_1;
  }
  if (param_1 == '\x01') {
    uVar1 = 2;
  }
  else {
    switch(param_1) {
    case '\0':
      uVar1 = 3;
      break;
    default:
      uVar1 = 0;
      break;
    case '\x02':
    case '\x05':
      uVar1 = 10;
      if (param_2 != (char *)0x0) {
        *param_2 = '\x04';
      }
      break;
    case '\x03':
      uVar1 = 0x3e;
      break;
    case '\x04':
      uVar1 = 10;
      break;
    case '\x06':
      uVar1 = 4;
      break;
    case '\a':
      uVar1 = 0x15;
      break;
    case '\b':
      uVar1 = 0xd;
    }
  }
  return uVar1;
}



// FUNCTION 146988004 FUN_146988004 body=21 status=ok
// SIG undefined FUN_146988004(void)

undefined4 FUN_146988004(byte param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < 9) {
    uVar1 = *(undefined4 *)(&DAT_149ef4c4c + (ulonglong)param_1 * 4);
  }
  return uVar1;
}



// FUNCTION 146988019 FUN_146988019 body=164 status=ok
// SIG undefined FUN_146988019(void)

uint FUN_146988019(uint param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  
  if (param_1 == param_2) {
    return param_1;
  }
  switch(param_1) {
  case 1:
    if ((param_2 - 3 < 9) && ((0x1c5U >> (param_2 - 3 & 0x1f) & 1) != 0)) {
      param_2 = 9;
    }
    break;
  case 2:
  case 8:
    if (param_2 < 0xc) {
      if ((0xe28U >> (param_2 & 0x1f) & 1) != 0) goto switchD_146988036_caseD_3;
      if (param_2 == 1) {
        return param_1;
      }
    }
    param_2 = 4;
    break;
  default:
switchD_146988036_caseD_3:
    param_2 = 9;
    break;
  case 4:
    uVar1 = param_2 - 3;
    param_2 = 4;
    if (uVar1 < 9) {
      param_2 = *(uint *)(&DAT_149ef4c70 + (ulonglong)uVar1 * 4);
    }
    break;
  case 5:
  case 0xb:
    bVar2 = param_2 == 10;
    param_2 = 9;
    if (bVar2) {
      param_2 = param_1;
    }
    break;
  case 10:
    uVar1 = 9;
    if (param_2 == 5) {
      uVar1 = 5;
    }
    bVar2 = param_2 == 0xb;
    param_2 = uVar1;
    if (bVar2) {
      param_2 = 0xb;
    }
  }
  return param_2;
}



// FUNCTION 1469880bd FUN_1469880bd body=23 status=ok
// SIG undefined FUN_1469880bd(void)

undefined1 FUN_1469880bd(char param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0xff;
  if ((byte)(param_1 - 1U) < 0x55) {
    uVar1 = (&DAT_149ef4c94)[(byte)(param_1 - 1U)];
  }
  return uVar1;
}



// FUNCTION 1469880d4 FUN_1469880d4 body=105 status=ok
// SIG undefined FUN_1469880d4(void)

void FUN_1469880d4(undefined8 *param_1,int *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  iVar1 = *param_2;
  param_3 = param_3 * param_4;
  lVar3 = param_4 + param_3;
  if ((longlong)param_2[2] * (longlong)param_2[1] <= param_4 + param_3) {
    lVar3 = (longlong)param_2[2] * (longlong)param_2[1];
  }
  uVar2 = *(undefined8 *)(param_2 + 2);
  *param_1 = *(undefined8 *)param_2;
  param_1[1] = uVar2;
  param_1[2] = *(undefined8 *)(param_2 + 4);
  *(int *)((longlong)param_1 + 4) = (int)lVar3 - (int)param_3;
  *(undefined4 *)(param_1 + 1) = 1;
  if ((ulonglong)*(byte *)(param_2 + 3) < 9) {
    lVar3 = *(longlong *)(&DAT_149ef4cf0 + (ulonglong)*(byte *)(param_2 + 3) * 8);
  }
  else {
    lVar3 = 0;
  }
  param_1[2] = *(longlong *)(param_2 + 4) + iVar1 * param_3 * lVar3;
  return;
}



// FUNCTION 146988182 FUN_146988182 body=93 status=ok
// SIG undefined FUN_146988182(void)

undefined8 FUN_146988182(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(param_3 + lVar4 * 8);
      puVar3 = *(undefined8 **)(param_2 + lVar4 * 8);
      if (puVar3 != puVar2) {
        *(undefined8 **)(param_2 + lVar4 * 8) = puVar2;
        if (puVar2 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
          UNLOCK();
        }
        if (puVar3 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar3 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar3)(puVar3,1);
          }
        }
      }
      lVar4 = lVar4 + 1;
    } while (param_4 != (int)lVar4);
  }
  return 1;
}



// FUNCTION 146988208 FUN_146988208 body=59 status=ok
// SIG undefined FUN_146988208(void)

undefined8 FUN_146988208(longlong *param_1)

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



// FUNCTION 14698824e FUN_14698824e body=48 status=ok
// SIG undefined FUN_14698824e(void)

void FUN_14698824e(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if ((char)param_2[1] == '\x01') {
    puVar2 = (undefined8 *)*param_2;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return;
}



// FUNCTION 1469882ce FUN_1469882ce body=123 status=ok
// SIG undefined FUN_1469882ce(void)

void FUN_1469882ce(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14698837a(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x30 + *param_1),0,(longlong)(param_2 - iVar1) * 0x30);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_14698840e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14698834a FUN_14698834a body=48 status=ok
// SIG undefined FUN_14698834a(void)

void FUN_14698834a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 14698837a FUN_14698837a body=147 status=ok
// SIG undefined FUN_14698837a(void)

void FUN_14698837a(longlong param_1,int param_2)

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



// FUNCTION 14698840e FUN_14698840e body=62 status=ok
// SIG undefined FUN_14698840e(void)

void FUN_14698840e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14698844c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 14698844c FUN_14698844c body=112 status=ok
// SIG undefined FUN_14698844c(void)

ulonglong FUN_14698844c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146988486;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_146988486:
  return param_2 & 0xffffffff;
}



// FUNCTION 1469884bc FUN_1469884bc body=103 status=ok
// SIG undefined FUN_1469884bc(void)

undefined8 FUN_1469884bc(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0x18)) {
    uVar4 = uVar2 / 0x18 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x18,8);
  }
  return uVar3;
}



// FUNCTION 146988524 FUN_146988524 body=147 status=ok
// SIG undefined FUN_146988524(void)

void FUN_146988524(longlong param_1,int param_2)

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



// FUNCTION 1469885b8 FUN_1469885b8 body=63 status=ok
// SIG undefined FUN_1469885b8(void)

void FUN_1469885b8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1469885f8(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 1469885f8 FUN_1469885f8 body=97 status=ok
// SIG undefined FUN_1469885f8(void)

ulonglong FUN_1469885f8(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 14698865a FUN_14698865a body=149 status=ok
// SIG undefined FUN_14698865a(void)

void FUN_14698865a(longlong param_1)

{
  char cVar1;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_140d2d4a8(param_1 + 0x10,0);
  }
  if ((*(ulonglong *)(param_1 + 0x30) != 0) &&
     ((*(char *)(param_1 + 0x68) != '\x01' ||
      (((0x35 < *(ulonglong *)(param_1 + 0x30) && (**(char **)(param_1 + 0x28) == 'B')) &&
       ((*(char **)(param_1 + 0x28))[1] == 'M')))))) {
    cVar1 = FUN_142881c4c(param_1);
    if (cVar1 == '\0') {
      *(undefined8 *)(param_1 + 0x18) = 0;
      if (*(longlong *)(param_1 + 0x20) != 0) {
        FUN_140d2d4a8(param_1 + 0x10,0);
      }
      if (*(int *)(param_1 + 0x60) < 2) {
        FUN_14020fad6(param_1 + 0x58,L"UncompressBMPData failed");
        return;
      }
    }
  }
  return;
}



// FUNCTION 1469886f0 FUN_1469886f0 body=115 status=ok
// SIG undefined FUN_1469886f0(void)

void FUN_1469886f0(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14602b1fc(param_1,iVar1);
    }
    FUN_14698d2a7((longlong)iVar1 * 4 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_14698d2a8(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14698878c FUN_14698878c body=1129 status=ok
// SIG undefined FUN_14698878c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14698878c(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  size_t _Size;
  int iVar8;
  void *_Src;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined1 *_Dst;
  bool bVar14;
  undefined1 in_XMM0 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar15 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_498 [39];
  char local_471;
  longlong *local_470;
  int local_464;
  undefined8 local_460;
  longlong local_458;
  ulonglong local_450;
  int local_448 [256];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_498;
  local_471 = *(char *)(param_1 + 0x40);
  if (local_471 == '\x01') {
    lVar4 = *(longlong *)(param_1 + 0x50) * *(longlong *)(param_1 + 0x48);
    uVar12 = 3;
    if (lVar4 < 1) {
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      lVar9 = 0;
      do {
        if (*(char *)(*(longlong *)(param_1 + 0x10) + 3 + lVar9 * 4) != -1) {
          uVar12 = 4;
          break;
        }
        lVar9 = lVar9 + 1;
      } while (lVar4 - lVar9 != 0);
    }
  }
  else {
    uVar12 = 1;
    lVar5 = 0x400;
  }
  uVar10 = (int)*(longlong *)(param_1 + 0x48) * (int)uVar12 + 3U & 0xfffffffc;
  local_450 = (ulonglong)uVar10;
  _Size = (size_t)(int)uVar10;
  lVar9 = *(longlong *)(param_1 + 0x50) * _Size;
  lVar4 = lVar9 + lVar5 + 0x400;
  if (lVar9 + lVar5 < -0x400) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(lVar4);
  }
  local_470 = (longlong *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(longlong *)(param_1 + 0x38) == lVar4) {
    lVar7 = 0;
  }
  else {
    in_XMM0._0_8_ = FUN_140d2d4a8();
    in_XMM0._8_8_ = extraout_XMM0_Qb;
    lVar7 = *(longlong *)(param_1 + 0x30);
    lVar4 = *(longlong *)(param_1 + 0x38);
  }
  iVar11 = 0x28;
  if ((int)uVar12 == 4) {
    iVar11 = 0x6c;
  }
  *(longlong *)(param_1 + 0x30) = lVar7 + 0xe;
  local_460 = uVar12;
  if ((ulonglong)(lVar4 - lVar7) < 0xe) {
    in_XMM0._0_8_ = FUN_14112c458(local_470,lVar7);
    in_XMM0._8_8_ = extraout_XMM0_Qb_00;
  }
  lVar4 = *(longlong *)(param_1 + 0x28);
  *(undefined2 *)(lVar4 + lVar7) = 0x4d42;
  *(uint *)(lVar4 + 2 + lVar7) = (int)lVar9 + ((uint)lVar5 | iVar11 + 0xeU);
  *(undefined4 *)(lVar4 + 6 + lVar7) = 0;
  *(uint *)(lVar4 + 10 + lVar7) = iVar11 + 0xeU;
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  uVar2 = *(undefined4 *)(param_1 + 0x50);
  sVar3 = (short)local_460;
  iVar6 = (uint)((int)local_460 == 4) * 3;
  iVar8 = (uint)(local_471 != '\x01') << 8;
  lVar5 = *(longlong *)(param_1 + 0x30);
  *(longlong *)(param_1 + 0x30) = lVar5 + 0x28;
  if ((ulonglong)(*(longlong *)(param_1 + 0x38) - lVar5) < 0x28) {
    local_464 = iVar6;
    local_458 = lVar9;
    in_XMM0._0_8_ = FUN_14112c458(local_470,lVar5);
    in_XMM0._8_8_ = extraout_XMM0_Qb_01;
    lVar9 = local_458;
    iVar6 = local_464;
  }
  lVar4 = *local_470;
  *(int *)(lVar4 + lVar5) = iVar11;
  *(undefined4 *)(lVar4 + 4 + lVar5) = uVar1;
  *(undefined4 *)(lVar4 + 8 + lVar5) = uVar2;
  *(undefined2 *)(lVar4 + 0xc + lVar5) = 1;
  *(short *)(lVar4 + 0xe + lVar5) = sVar3 * 8;
  *(int *)(lVar4 + 0x10 + lVar5) = iVar6;
  *(int *)(lVar4 + 0x14 + lVar5) = (int)lVar9;
  *(undefined8 *)(lVar4 + 0x18 + lVar5) = 0;
  *(int *)(lVar4 + 0x20 + lVar5) = iVar8;
  *(int *)(lVar4 + 0x24 + lVar5) = iVar8;
  iVar11 = (int)local_460;
  if (iVar11 == 4) {
    lVar5 = *(longlong *)(param_1 + 0x30);
    *(longlong *)(param_1 + 0x30) = lVar5 + 0x44;
    if ((ulonglong)(*(longlong *)(param_1 + 0x38) - lVar5) < 0x44) {
      FUN_14112c458(local_470,lVar5);
    }
    lVar4 = *local_470;
    *(undefined8 *)(lVar4 + lVar5) = 0xff0000ff0000;
    ((undefined8 *)(lVar4 + lVar5))[1] = 0xff000000000000ff;
    *(undefined4 *)(lVar4 + 0x10 + lVar5) = 0x57696e20;
    in_XMM0 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(lVar4 + 0x14 + lVar5) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(lVar4 + 0x24 + lVar5) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(lVar4 + 0x34 + lVar5) = (undefined1  [16])0x0;
  }
  if (local_471 != '\x01') {
    auVar15 = pmovsxbd(in_XMM0,0x3020100);
    lVar5 = 0;
    auVar16 = pmovsxbd(in_XMM3,0x4040404);
    do {
      auVar17 = pmulld(auVar15,_DAT_149ef4ea0);
      local_448[lVar5] = auVar17._0_4_ + (int)DAT_149ef4eb0;
      local_448[lVar5 + 1] = auVar17._4_4_ + DAT_149ef4eb0._4_4_;
      local_448[lVar5 + 2] = auVar17._8_4_ + DAT_149ef4eb0._8_4_;
      local_448[lVar5 + 3] = auVar17._12_4_ + DAT_149ef4eb0._12_4_;
      lVar5 = lVar5 + 4;
      auVar17._0_4_ = auVar15._0_4_ + auVar16._0_4_;
      auVar17._4_4_ = auVar15._4_4_ + auVar16._4_4_;
      auVar17._8_4_ = auVar15._8_4_ + auVar16._8_4_;
      auVar17._12_4_ = auVar15._12_4_ + auVar16._12_4_;
      auVar15 = auVar17;
    } while (lVar5 != 0x100);
    lVar5 = *(longlong *)(param_1 + 0x30);
    *(longlong *)(param_1 + 0x30) = lVar5 + 0x400;
    if ((ulonglong)(*(longlong *)(param_1 + 0x38) - lVar5) < 0x400) {
      FUN_14112c458(local_470,lVar5);
    }
    memcpy((void *)(lVar5 + *local_470),local_448,0x400);
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  FUN_1467ac1d6(local_470,lVar9 + lVar5,1);
  _Dst = (undefined1 *)(lVar5 + *(longlong *)(param_1 + 0x28));
  if (iVar11 == 4) {
    uVar10 = *(int *)(param_1 + 0x50) - 1;
    if (-1 < (int)uVar10) {
      lVar5 = (ulonglong)uVar10 + 1;
      _Src = (void *)(_Size * uVar10 + *(longlong *)(param_1 + 0x10));
      do {
        memcpy(_Dst,_Src,_Size);
        _Dst = _Dst + _Size;
        _Src = (void *)((longlong)_Src - _Size);
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  else {
    iVar6 = (int)local_450 - *(int *)(param_1 + 0x48) * iVar11;
    if (iVar11 == 3) {
      uVar10 = *(int *)(param_1 + 0x50) - 1;
      if (-1 < (int)uVar10) {
        lVar4 = *(longlong *)(param_1 + 0x10);
        lVar5 = (ulonglong)uVar10 * 4;
        uVar13 = (ulonglong)uVar10;
        do {
          if (0 < *(longlong *)(param_1 + 0x48)) {
            lVar9 = *(longlong *)(param_1 + 0x48) * lVar5 + lVar4 + 2;
            lVar7 = 0;
            do {
              *_Dst = *(undefined1 *)(lVar9 + -2 + lVar7 * 4);
              _Dst[1] = *(undefined1 *)(lVar9 + -1 + lVar7 * 4);
              _Dst[2] = *(undefined1 *)(lVar9 + lVar7 * 4);
              _Dst = _Dst + 3;
              lVar7 = lVar7 + 1;
            } while (lVar7 < *(longlong *)(param_1 + 0x48));
          }
          memset(_Dst,0,(longlong)iVar6);
          _Dst = _Dst + iVar6;
          lVar5 = lVar5 + -4;
          bVar14 = 0 < (longlong)uVar13;
          uVar13 = uVar13 - 1;
        } while (bVar14);
      }
    }
    else if ((iVar11 == 1) && (uVar10 = *(int *)(param_1 + 0x50) - 1, -1 < (int)uVar10)) {
      lVar5 = *(longlong *)(param_1 + 0x10);
      uVar13 = (ulonglong)uVar10;
      do {
        memcpy(_Dst,(void *)(*(size_t *)(param_1 + 0x48) * uVar13 + lVar5),
               *(size_t *)(param_1 + 0x48));
        lVar4 = *(longlong *)(param_1 + 0x48);
        memset(_Dst + lVar4,0,(longlong)iVar6);
        _Dst = _Dst + lVar4 + iVar6;
        bVar14 = uVar13 != 0;
        uVar13 = uVar13 - 1;
      } while (bVar14);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_498) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146988bf8 FUN_146988bf8 body=56 status=ok
// SIG undefined FUN_146988bf8(void)

void FUN_146988bf8(longlong param_1)

{
  longlong lVar1;
  
  FUN_140d488e8();
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 != 0) {
    FUN_14698cc96(lVar1);
    FUN_1400020a8(lVar1);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  return;
}



// FUNCTION 146988c30 FUN_146988c30 body=539 status=ok
// SIG undefined FUN_146988c30(void)

void FUN_146988c30(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined8 unaff_RBP;
  undefined7 uVar12;
  ulonglong uVar11;
  longlong lVar13;
  char local_41;
  undefined8 local_40;
  undefined4 local_38;
  undefined2 local_34;
  longlong local_30;
  
  plVar1 = param_1 + 5;
  param_1[6] = 0;
  if (param_1[7] < 0) {
    FUN_140d2d4a8(plVar1,0);
  }
  lVar8 = param_1[0xd];
  if (lVar8 != 0) {
    FUN_14698cc96(lVar8);
    FUN_1400020a8(lVar8);
    param_1[0xd] = 0;
  }
  uVar4 = (**(code **)(*param_1 + 0x58))(param_1);
  uVar5 = (**(code **)(*param_1 + 0x50))(param_1);
  uVar6 = FUN_142882538(uVar4,uVar5,&local_41);
  bVar3 = (byte)uVar6;
  if (bVar3 == 0xff) {
    FUN_14020fad6(param_1 + 0xb,L"Format not supported");
  }
  else {
    uVar10 = (ulonglong)uVar6;
    uVar12 = (undefined7)((ulonglong)unaff_RBP >> 8);
    cVar2 = (bVar3 < 2) * '\x02';
    uVar11 = CONCAT71(uVar12,cVar2);
    local_30 = param_1[2];
    local_40 = CONCAT44((int)param_1[10],(int)param_1[9]);
    local_38 = 1;
    local_34 = CONCAT11(cVar2,bVar3);
    if (local_41 == '\0') {
      cVar2 = (char)param_1[8];
      if (cVar2 == '\x05') {
        lVar8 = (longlong)(int)param_1[10] * (longlong)(int)param_1[9];
        if (0 < lVar8) {
          puVar9 = (undefined4 *)&DAT_0000000c;
          lVar13 = 0;
          do {
            uVar4 = *(undefined4 *)(local_30 + lVar13 * 4);
            puVar9[-3] = uVar4;
            puVar9[-2] = uVar4;
            puVar9[-1] = uVar4;
            *puVar9 = 0x3f800000;
            lVar13 = lVar13 + 1;
            puVar9 = puVar9 + 4;
          } while (lVar8 - lVar13 != 0);
        }
        local_40 = 0;
        local_38 = 0;
        local_34 = 0x201;
        local_30 = 0;
        uVar11 = CONCAT71(uVar12,2);
        uVar10 = CONCAT71((uint7)(uint3)(uVar6 >> 8),1);
      }
      else if ((cVar2 == '\x01') || (cVar2 == '\0')) {
        FUN_146987720(&local_40,&local_40);
      }
    }
    uVar4 = FUN_1469875e9(uVar10,uVar11 & 0xffffffff);
    lVar8 = FUN_14698740a((int)param_1[9],(int)param_1[10],1,uVar4,0,0);
    param_1[0xd] = lVar8;
    FUN_146987590(lVar8,&local_40,0);
    iVar7 = FUN_14287d870(param_1[0xd],plVar1,2);
    lVar8 = param_1[0xd];
    if (lVar8 != 0) {
      FUN_14698cc96(lVar8);
      FUN_1400020a8(lVar8);
      param_1[0xd] = 0;
    }
    if (iVar7 != 0) {
      FUN_14020fad6(param_1 + 0xb,L"WriteDDS failed");
      param_1[6] = 0;
      if (param_1[7] != 0) {
        FUN_140d2d4a8(plVar1,0);
      }
    }
  }
  return;
}



// FUNCTION 146988e4c FUN_146988e4c body=426 status=ok
// SIG undefined FUN_146988e4c(void)

undefined8 FUN_146988e4c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140d48816();
  lVar6 = *(longlong *)(param_1 + 0x68);
  if (lVar6 != 0) {
    FUN_14698cc96(lVar6);
    FUN_1400020a8(lVar6);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  lVar6 = FUN_14287d3da(param_2,param_3,&local_2c,0);
  *(longlong *)(param_1 + 0x68) = lVar6;
  if ((lVar6 == 0) || (local_2c != 0)) {
    pwVar8 = L"CreateFromDDSInMemory failed";
LAB_146988f5b:
    FUN_14020fad6(param_1 + 0x58,pwVar8);
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_140d2d4a8(param_1 + 0x10,0);
    }
    lVar6 = *(longlong *)(param_1 + 0x68);
    if (lVar6 != 0) {
      FUN_14698cc96(lVar6);
      FUN_1400020a8(lVar6);
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
  }
  else {
    FUN_146987496(lVar6);
    FUN_146987504(*(undefined8 *)(param_1 + 0x68),1);
    bVar4 = FUN_1469875b2(*(undefined4 *)(*(longlong *)(param_1 + 0x68) + 0x18),0);
    if (bVar4 == 0xff) {
      pwVar8 = L"DDS DXGIFormat not supported";
      goto LAB_146988f5b;
    }
    cVar5 = FUN_146987294(*(undefined8 *)(param_1 + 0x68));
    if (cVar5 == '\0') {
      pwVar8 = L"DDS is a complex 3d/cube/array image, only 2d DDS surfaces are supported here";
      goto LAB_146988f5b;
    }
    if (bVar4 < 9) {
      uVar1 = *(undefined4 *)(&DAT_149ef820c + (ulonglong)bVar4 * 4);
      *(undefined *)(param_1 + 0x40) = (&DAT_149ef8201)[bVar4];
      *(undefined4 *)(param_1 + 0x44) = uVar1;
    }
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x68) + 4);
    *(ulonglong *)(param_1 + 0x48) = (ulonglong)uVar2;
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x68) + 8);
    *(ulonglong *)(param_1 + 0x50) = (ulonglong)uVar3;
    lVar6 = (ulonglong)uVar3 * (ulonglong)uVar2;
    if (((((int)((ulonglong)lVar6 >> 0x20) == 0) && (uVar2 != 0)) && (uVar3 != 0)) &&
       (uVar7 = CONCAT71((uint7)((ulonglong)lVar6 >> 8) & 0xffffff,1),
       ((uVar3 | uVar2) & 0x80000000) == 0)) goto LAB_146988f85;
    FUN_14020fad6(param_1 + 0x58,L"Image dimensions are not possible to import");
  }
  uVar7 = 0;
LAB_146988f85:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146988ff8 FUN_146988ff8 body=275 status=ok
// SIG undefined FUN_146988ff8(void)

void FUN_146988ff8(undefined4 *param_1)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  *(undefined8 *)(param_1 + 6) = 0;
  if (*(longlong *)(param_1 + 8) < 0) {
    FUN_140d2d4a8(param_1 + 4,0);
  }
  bVar2 = FUN_1469875b2(*(undefined4 *)(*(longlong *)(param_1 + 0x1a) + 0x18),0);
  FUN_1469876e0(&local_50,param_1[0x12],param_1[0x14],1,bVar2,(bVar2 < 2) * '\x02');
  local_68 = local_50;
  uStack_64 = uStack_4c;
  uStack_60 = uStack_48;
  uStack_5c = uStack_44;
  local_58 = local_40;
  cVar3 = FUN_14287dc9e(*(undefined8 *)(param_1 + 0x1a),&local_68,0);
  if (cVar3 == '\0') {
    FUN_14020fad6(param_1 + 0x16,L"DDS GetMipImage failed");
    lVar1 = *(longlong *)(param_1 + 0x1a);
    if (lVar1 != 0) {
      FUN_14698cc96(lVar1);
      FUN_1400020a8(lVar1);
      *(undefined8 *)(param_1 + 0x1a) = 0;
    }
  }
  else if (&local_50 != param_1) {
    if (*(longlong *)(param_1 + 4) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 4) = local_40;
    local_40 = 0;
    *(undefined8 *)(param_1 + 6) = local_38;
    *(undefined8 *)(param_1 + 8) = uStack_30;
    local_38 = 0;
    uStack_30 = 0;
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 14698910c Unwind@14698910c body=41 status=ok
// SIG undefined Unwind@14698910c(void)

void Unwind_14698910c(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x58) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 146989136 FUN_146989136 body=91 status=ok
// SIG undefined FUN_146989136(void)

undefined8 FUN_146989136(undefined8 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  
  cVar1 = FUN_142882538(param_2,param_3,0);
  bVar2 = cVar1 - 1;
  if (bVar2 < 8) {
    cVar1 = (char)(0x505020303000401 >> (bVar2 * '\b' & 0x3f));
    uVar3 = (ulonglong)*(uint *)(&DAT_149ef80f8 + (ulonglong)bVar2 * 4);
  }
  else {
    uVar3 = 8;
    cVar1 = '\x02';
  }
  return CONCAT71((int7)(uVar3 >> 8),(int)uVar3 == param_3 && cVar1 == (char)param_2);
}



// FUNCTION 1469891cc FUN_1469891cc body=130 status=ok
// SIG undefined FUN_1469891cc(void)

undefined8 * FUN_1469891cc(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined **local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_144b6b800(param_1,&DAT_149e02088);
  *param_1 = &PTR_FUN_149ef6350;
  param_1[5] = param_2;
  param_1[6] = param_3;
  param_1[7] = 0;
  if (-1 < param_3) {
    return param_1;
  }
  param_1[6] = 0;
  local_48 = std::exception::vftable;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = param_1;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14c0d31b0);
}



// FUNCTION 146989250 Unwind@146989250 body=36 status=ok
// SIG undefined Unwind@146989250(void)

void Unwind_146989250(undefined8 param_1,longlong param_2)

{
  FUN_144b6b720(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 146989274 FUN_146989274 body=124 status=ok
// SIG undefined FUN_146989274(void)

void FUN_146989274(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14698d42e(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x18 + *param_1),0,(longlong)(param_2 - iVar1) * 0x18);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  FUN_14698d4c2(param_1,param_2,iVar1 - param_2);
  FUN_14698d524(param_1);
  return;
}



// FUNCTION 1469892f6 FUN_1469892f6 body=45 status=ok
// SIG undefined FUN_1469892f6(void)

void FUN_1469892f6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149ef63a0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144b6b8e0(param_1);
  return;
}



// FUNCTION 146989324 FUN_146989324 body=44 status=ok
// SIG undefined FUN_146989324(void)

void FUN_146989324(longlong *param_1)

{
  FUN_145c74b7c(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146989350 FUN_146989350 body=151 status=ok
// SIG undefined FUN_146989350(void)

undefined8 FUN_146989350(undefined8 param_1)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = L"MalformedHeader";
  local_30 = 0xf;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"HdrImageWrapper";
  local_30 = 0xf;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(param_1,local_40,local_3c,
                L"The file header is malformed. The HDR image is likely corrupted.");
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469893e8 FUN_1469893e8 body=152 status=ok
// SIG undefined FUN_1469893e8(void)

undefined8 FUN_1469893e8(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"EndOFBufferError";
  local_28 = 0x10;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"HdrImageWrapper";
  local_28 = 0xf;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_1,local_38,local_34,
                L"Reached the end of the buffer before finishing decompressing the HDR. The HDR image is likely corrupted."
               );
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146989481 FUN_146989481 body=152 status=ok
// SIG undefined FUN_146989481(void)

undefined8 FUN_146989481(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"MalformedScanline";
  local_28 = 0x11;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"HdrImageWrapper";
  local_28 = 0xf;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_1,local_38,local_34,
                L"Compressed data for HDR scanline is malformed. The HDR image is likely to be corrupted."
               );
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14698951a FUN_14698951a body=213 status=ok
// SIG undefined FUN_14698951a(void)

bool FUN_14698951a(longlong param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  
  cVar5 = '-';
  lVar1 = 0;
  do {
    if (*(char *)(param_1 + lVar1) != cVar5) {
      return false;
    }
    cVar5 = (&DAT_149ef5a2d)[lVar1];
    lVar1 = lVar1 + 1;
  } while (lVar1 != 3);
  if ((byte)(*(char *)(param_1 + 3) - 0x3aU) < 0xf6) {
    return false;
  }
  uVar2 = (ulonglong)(byte)(*(char *)(param_1 + 3) - 0x30);
  pcVar3 = (char *)(param_1 + 4);
  while( true ) {
    if (9 < (byte)(*pcVar3 - 0x30U)) break;
    uVar2 = (ulonglong)(byte)(*pcVar3 - 0x30U) + (longlong)(int)uVar2 * 10;
    pcVar3 = pcVar3 + 1;
    if (0x7fffffff < (longlong)uVar2) {
      return false;
    }
  }
  *param_3 = (int)uVar2;
  pcVar4 = pcVar3 + 5;
  cVar5 = ' ';
  lVar1 = 0;
  pcVar6 = pcVar3;
  do {
    if (*pcVar6 != cVar5) {
      return false;
    }
    pcVar6 = pcVar6 + 1;
    cVar5 = (&DAT_149ef5a31)[lVar1];
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  if ((byte)(pcVar3[4] - 0x3aU) < 0xf6) {
    return false;
  }
  uVar2 = (ulonglong)(byte)(pcVar3[4] - 0x30);
  do {
    if (9 < (byte)(*pcVar4 - 0x30U)) {
      *param_2 = (int)uVar2;
      return *pcVar4 == '\0';
    }
    uVar2 = (ulonglong)(byte)(*pcVar4 - 0x30U) + (longlong)(int)uVar2 * 10;
    pcVar4 = pcVar4 + 1;
  } while ((longlong)uVar2 < 0x80000000);
  return false;
}



// FUNCTION 1469895f0 FUN_1469895f0 body=174 status=ok
// SIG undefined FUN_1469895f0(void)

void FUN_1469895f0(longlong param_1,void *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14626baa2(param_1 + 0x28,param_3);
  lVar1 = *(longlong *)(param_1 + 0x30);
  lVar2 = lVar1 + param_3;
  *(longlong *)(param_1 + 0x30) = lVar2;
  if ((ulonglong)(*(longlong *)(param_1 + 0x38) - lVar1) < param_3) {
    FUN_14112c458(param_1 + 0x28,lVar1);
  }
  else if (param_3 == 0) goto LAB_14698965b;
  memcpy((void *)(lVar1 + *(longlong *)(param_1 + 0x28)),param_2,param_3);
  lVar2 = *(longlong *)(param_1 + 0x30);
LAB_14698965b:
  local_40 = *(undefined8 *)(param_1 + 0x28);
  local_38 = (longlong)(int)lVar2;
  FUN_142883bac(param_1);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469896b4 FUN_1469896b4 body=320 status=ok
// SIG undefined FUN_1469896b4(void)

undefined8 * FUN_1469896b4(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  void *pvVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong _Size;
  undefined1 local_468 [1024];
  void *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_1 + 0x58);
  lVar5 = *(longlong *)(param_1 + 0x60);
  uVar3 = FUN_14698d5d2(local_468,"#?RADIANCE\nFORMAT=32-bit_rle_rgbe\n\n-Y %d +X %d\n",lVar5,lVar1)
  ;
  if ((int)uVar3 < 1) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    lVar5 = lVar5 * lVar1;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_140d2d4a8(param_1 + 0x28,0);
    }
    _Size = (ulonglong)uVar3;
    local_68 = (void *)0x0;
    uStack_60 = 0;
    local_58 = 0;
    FUN_1415d7a80(&local_68,_Size + lVar5 * 4,1);
    pvVar2 = local_68;
    memcpy(local_68,local_468,_Size);
    if (0 < lVar5) {
      lVar1 = *(longlong *)(param_1 + 0x40);
      lVar4 = 0;
      do {
        *(undefined1 *)((longlong)pvVar2 + lVar4 * 4 + _Size) =
             *(undefined1 *)(lVar1 + 2 + lVar4 * 4);
        *(undefined1 *)((longlong)pvVar2 + lVar4 * 4 + _Size + 1) =
             *(undefined1 *)(lVar1 + 1 + lVar4 * 4);
        *(undefined1 *)((longlong)pvVar2 + lVar4 * 4 + _Size + 2) =
             *(undefined1 *)(lVar1 + lVar4 * 4);
        *(undefined1 *)((longlong)pvVar2 + lVar4 * 4 + _Size + 3) =
             *(undefined1 *)(lVar1 + 3 + lVar4 * 4);
        lVar4 = lVar4 + 1;
      } while (lVar5 - lVar4 != 0);
    }
    *param_2 = local_68;
    param_2[1] = uStack_60;
    param_2[2] = local_58;
  }
  return param_2;
}



// FUNCTION 1469897f4 Unwind@1469897f4 body=64 status=ok
// SIG undefined Unwind@1469897f4(void)

void Unwind_1469897f4(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x420) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 146989834 FUN_146989834 body=440 status=ok
// SIG undefined FUN_146989834(void)

undefined8 FUN_146989834(longlong param_1,byte *param_2,longlong *param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 uVar15;
  
  if (0xffffffffffff8007 < *(longlong *)(param_1 + 0x58) - 0x8000U) {
    pbVar5 = (byte *)*param_3;
    if (param_4 == pbVar5 || (longlong)param_4 - (longlong)pbVar5 < 0) {
      return 0;
    }
    if (*pbVar5 == 2) {
      *param_3 = (longlong)(pbVar5 + 1);
      if ((longlong)param_4 - (longlong)(pbVar5 + 1) < 3) {
        return 0;
      }
      *param_3 = (longlong)(pbVar5 + 2);
      bVar1 = pbVar5[1];
      *param_3 = (longlong)(pbVar5 + 3);
      bVar2 = pbVar5[2];
      pbVar10 = pbVar5 + 4;
      *param_3 = (longlong)pbVar10;
      if ((bVar1 == 2) && (-1 < (char)bVar2)) {
        uVar12 = 0;
        do {
          if (uVar12 == 0) {
            pbVar5 = (byte *)0x2;
          }
          else if (uVar12 == 2) {
            pbVar5 = (byte *)0x0;
          }
          else {
            pbVar5 = (byte *)(ulonglong)uVar12;
          }
          lVar14 = *(longlong *)(param_1 + 0x58);
          if (0 < lVar14) {
            pbVar5 = pbVar5 + (longlong)param_2;
            uVar13 = 0;
            do {
              if (param_4 == pbVar10 || (longlong)param_4 - (longlong)pbVar10 < 0) {
LAB_14698999c:
                FUN_1428845fc();
                return 0;
              }
              pbVar11 = pbVar10 + 1;
              bVar1 = *pbVar10;
              uVar8 = (uint)bVar1;
              uVar7 = (uint)bVar1;
              uVar9 = (uint)bVar1;
              if (uVar7 < 0x81) {
                if ((longlong)param_4 - (longlong)pbVar11 < (longlong)(ulonglong)uVar7)
                goto LAB_14698999c;
                if ((longlong)(lVar14 - uVar13) < (longlong)(ulonglong)uVar7) goto LAB_1469899c0;
                if (bVar1 == 0) goto LAB_14698996b;
                do {
                  bVar1 = *pbVar11;
                  pbVar11 = pbVar11 + 1;
                  *pbVar5 = bVar1;
                  pbVar5 = pbVar5 + 4;
                  uVar9 = uVar9 - 1;
                  pbVar10 = pbVar11;
                } while (uVar9 != 0);
              }
              else {
                if (param_4 == pbVar11 || (longlong)param_4 - (longlong)pbVar11 < 0)
                goto LAB_14698999c;
                uVar8 = uVar9 & 0x7f;
                if ((longlong)(lVar14 - uVar13) < (longlong)(ulonglong)uVar8) {
LAB_1469899c0:
                  FUN_1428846a4();
                  return 0;
                }
                pbVar11 = pbVar10 + 2;
                if ((bVar1 & 0x7f) == 0) {
LAB_14698996b:
                  uVar8 = 0;
                  pbVar10 = pbVar11;
                }
                else {
                  bVar1 = pbVar10[1];
                  uVar9 = uVar8;
                  do {
                    *pbVar5 = bVar1;
                    pbVar5 = pbVar5 + 4;
                    uVar9 = uVar9 - 1;
                    pbVar10 = pbVar11;
                  } while (uVar9 != 0);
                }
              }
              uVar13 = (ulonglong)((int)uVar13 + uVar8);
              lVar14 = *(longlong *)(param_1 + 0x58);
            } while ((longlong)uVar13 < lVar14);
          }
          *param_3 = (longlong)pbVar10;
          uVar12 = uVar12 + 1;
          if (uVar12 == 4) {
            return CONCAT71((int7)((ulonglong)pbVar5 >> 8),1);
          }
        } while( true );
      }
      bVar3 = pbVar5[3];
      *param_2 = bVar2;
      param_2[1] = bVar1;
      param_2[2] = 2;
      param_2[3] = bVar3;
      param_2 = param_2 + 4;
      iVar4 = *(int *)(param_1 + 0x58) + -1;
      uVar15 = 1;
      goto LAB_1469899b9;
    }
  }
  iVar4 = (int)*(longlong *)(param_1 + 0x58);
  uVar15 = 0;
LAB_1469899b9:
  uVar6 = FUN_146989b84(param_1,param_2,param_3,param_4,iVar4,uVar15);
  return uVar6;
}



// FUNCTION 1469899ec FUN_1469899ec body=126 status=ok
// SIG undefined FUN_1469899ec(void)

undefined4 FUN_1469899ec(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong local_48 [4];
  
  local_48[3] = 0xfffffffffffffffe;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  uVar1 = (**(code **)(*param_1 + 0x38))();
  if ((char)uVar1 != '\0') {
    uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
    uVar3 = (**(code **)(*param_1 + 0x40))(param_1);
    FUN_146989a98(param_4,local_48,uVar3,uVar2);
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  return uVar1;
}



// FUNCTION 146989a6a Unwind@146989a6a body=45 status=ok
// SIG undefined Unwind@146989a6a(void)

void Unwind_146989a6a(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 146989a98 FUN_146989a98 body=214 status=ok
// SIG undefined FUN_146989a98(void)

void FUN_146989a98(longlong *param_1,undefined8 *param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong _Size;
  longlong lVar4;
  longlong lVar5;
  
  if ((ulonglong)*(byte *)(param_1 + 5) < 9) {
    lVar4 = *(longlong *)(&DAT_149ef8148 + (ulonglong)*(byte *)(param_1 + 5) * 8);
  }
  else {
    lVar4 = 0;
  }
  lVar2 = param_1[1];
  iVar1 = (int)param_1[4];
  lVar5 = (longlong)iVar1;
  *(uint *)(param_1 + 4) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x24) < iVar1 + 1U) {
    FUN_146988524(param_1 + 3,iVar1);
  }
  lVar3 = param_1[3];
  *(int *)(lVar3 + lVar5 * 0x18) = param_3;
  *(int *)(lVar3 + 4 + lVar5 * 0x18) = param_4;
  *(longlong *)(lVar3 + 8 + lVar5 * 0x18) = lVar2;
  *(longlong *)(lVar3 + 0x10 + lVar5 * 0x18) = lVar4 * (param_4 * param_3);
  _Size = param_2[1];
  if (_Size != 0) {
    lVar4 = param_1[1];
    param_1[1] = lVar4 + _Size;
    if ((ulonglong)(param_1[2] - lVar4) < _Size) {
      FUN_14112c458(param_1,lVar4);
    }
    memmove((void *)(lVar4 + *param_1),(void *)*param_2,_Size);
    param_2[1] = 0;
  }
  return;
}



// FUNCTION 146989b84 FUN_146989b84 body=268 status=ok
// SIG undefined FUN_146989b84(void)

undefined8
FUN_146989b84(undefined8 param_1,char *param_2,undefined8 *param_3,longlong param_4,uint param_5,
             byte param_6)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  char *pcVar8;
  ulonglong uVar9;
  
  pcVar8 = (char *)*param_3;
  if (0 < (int)param_5) {
    iVar6 = (uint)(param_6 ^ 1) << 5;
    do {
      if (param_4 - (longlong)pcVar8 < 4) {
        FUN_1428845fc(param_1);
        return 0;
      }
      cVar1 = *pcVar8;
      cVar2 = pcVar8[1];
      bVar3 = pcVar8[3];
      if (pcVar8[2] == '\x01' && (cVar2 == '\x01' && cVar1 == '\x01')) {
        if ((0x1f < iVar6) || (uVar7 = (ulonglong)bVar3 << ((byte)iVar6 & 0x3f), param_5 < uVar7)) {
          FUN_1428846a4(param_1);
          return 0;
        }
        if (bVar3 != 0) {
          cVar1 = param_2[-4];
          cVar2 = param_2[-3];
          cVar4 = param_2[-2];
          cVar5 = param_2[-1];
          uVar9 = uVar7 + 1;
          do {
            *param_2 = cVar4;
            param_2[1] = cVar2;
            param_2[2] = cVar1;
            param_2[3] = cVar5;
            param_2 = param_2 + 4;
            uVar9 = uVar9 - 1;
          } while (1 < uVar9);
        }
        param_5 = param_5 - (int)uVar7;
        iVar6 = iVar6 + 8;
      }
      else {
        *param_2 = pcVar8[2];
        param_2[1] = cVar2;
        param_2[2] = cVar1;
        param_2[3] = bVar3;
        param_2 = param_2 + 4;
        param_5 = param_5 - 1;
        iVar6 = 0;
      }
      pcVar8 = pcVar8 + 4;
    } while (0 < (int)param_5);
  }
  *param_3 = pcVar8;
  return 1;
}



// FUNCTION 146989cae FUN_146989cae body=70 status=ok
// SIG undefined FUN_146989cae(void)

void FUN_146989cae(longlong param_1)

{
  if (((*(int *)(param_1 + 0x78) != 0) && (*(int *)(param_1 + 0x7c) != 0)) &&
     (*(longlong **)(param_1 + 0x68) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x80))();
    FUN_144a787a6(param_1 + 0x58,*(longlong *)(param_1 + 0x68) + 0x58);
    return;
  }
  return;
}



// FUNCTION 146989cf4 FUN_146989cf4 body=38 status=ok
// SIG undefined FUN_146989cf4(void)

undefined8 FUN_146989cf4(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_140d48816();
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = FUN_146989d1a(param_1);
  return uVar2;
}



// FUNCTION 146989d1a FUN_146989d1a body=1041 status=ok
// SIG undefined FUN_146989d1a(void)

ulonglong FUN_146989d1a(longlong param_1)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  wchar_t *pwVar9;
  ulonglong uVar10;
  short *psVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  ulonglong local_90;
  short *local_88;
  uint local_7c;
  undefined8 local_78;
  longlong *plStack_70;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_88 = *(short **)(param_1 + 0x28);
  local_90 = *(ulonglong *)(param_1 + 0x30);
  plVar6 = (longlong *)FUN_14001cc68(0x78,0x10);
  plVar6[1] = 0;
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  *(undefined1 *)(plVar6 + 8) = 0xff;
  *(undefined8 *)((longlong)plVar6 + 0x44) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x4c) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x54) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x5c) = 0;
  *(undefined4 *)((longlong)plVar6 + 100) = 0;
  *plVar6 = (longlong)&PTR_FUN_149ef5d00;
  plVar6[0xd] = 0;
  *(undefined4 *)(plVar6 + 0xe) = 0;
  *(undefined1 *)((longlong)plVar6 + 0x74) = 0;
  local_b0 = plVar6;
  local_a8 = (longlong *)FUN_14001cc68(0x18,0x10);
  local_a8[1] = (longlong)&DAT_100000001;
  *local_a8 = (longlong)&PTR_LAB_149ef63c0;
  local_a8[2] = (longlong)plVar6;
  plVar6 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar6[1] = 0;
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  *(undefined1 *)(plVar6 + 8) = 0xff;
  *(undefined8 *)((longlong)plVar6 + 0x44) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x4c) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x54) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x5c) = 0;
  *(undefined4 *)((longlong)plVar6 + 100) = 0;
  *plVar6 = (longlong)&PTR_FUN_149ef4ef0;
  *(undefined2 *)(plVar6 + 0xd) = 0x100;
  local_a0 = plVar6;
  local_98 = (longlong *)FUN_14001cc68(0x18,0x10);
  local_98[1] = (longlong)&DAT_100000001;
  *local_98 = (longlong)&PTR_LAB_149ef63e0;
  local_98[2] = (longlong)plVar6;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  plVar6 = *(longlong **)(param_1 + 0x70);
  if (plVar6 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    LOCK();
    plVar8 = plVar6 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  FUN_14698a2e2(&local_78);
  plVar8 = local_a0;
  plVar6 = local_b0;
  if (local_90 < 0x16) {
LAB_146989e85:
    pwVar9 = L"LoadICOHeader corrupt; insufficient data";
LAB_146989e90:
    FUN_14020fad6(param_1 + 0x58,pwVar9);
  }
  else if ((*local_88 == 0) && (local_88[1] == 1)) {
    uVar4 = (uint)(ushort)local_88[2];
    if (uVar4 == 0) {
      pwVar9 = L"LoadICOHeader corrupt; no entries";
      goto LAB_146989e90;
    }
    if (local_90 < ((ulonglong)(ushort)local_88[2] * 0x10 + 0xffffffff0 & 0xffffffff0) + 0x16)
    goto LAB_146989e85;
    pbVar12 = (byte *)(local_88 + 3);
    local_7c = 0;
    uVar13 = 0;
    psVar11 = local_88;
    for (uVar14 = 0; uVar14 < uVar4; uVar14 = uVar14 + 1) {
      uVar4 = (uint)*pbVar12;
      if (*pbVar12 == 0) {
        uVar4 = 0x100;
      }
      if ((*(short *)(pbVar12 + 6) == 0x20) && (uVar13 < uVar4)) {
        if (local_90 < (ulonglong)*(uint *)(pbVar12 + 8) + (ulonglong)*(uint *)(pbVar12 + 0xc))
        goto LAB_146989e85;
        cVar2 = (**(code **)*plVar6)(plVar6,(ulonglong)*(uint *)(pbVar12 + 0xc) + (longlong)psVar11)
        ;
        if (cVar2 == '\0') {
          cVar2 = (**(code **)*plVar8)
                            (plVar8,(ulonglong)*(uint *)(pbVar12 + 0xc) + (longlong)local_88,
                             *(undefined4 *)(pbVar12 + 8));
          psVar11 = local_88;
          if (cVar2 == '\0') goto LAB_146989fd8;
          uVar7 = (**(code **)(*plVar8 + 0x40))(plVar8);
          *(undefined8 *)(param_1 + 0x48) = uVar7;
          uVar7 = (**(code **)(*plVar8 + 0x48))(plVar8);
          *(undefined8 *)(param_1 + 0x50) = uVar7;
          uVar3 = (**(code **)(*plVar8 + 0x58))(plVar8);
          *(undefined1 *)(param_1 + 0x40) = uVar3;
          uVar5 = (**(code **)(*plVar8 + 0x50))();
          uVar3 = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar6 + 0x40))(plVar6);
          *(undefined8 *)(param_1 + 0x48) = uVar7;
          uVar7 = (**(code **)(*plVar6 + 0x48))(plVar6);
          *(undefined8 *)(param_1 + 0x50) = uVar7;
          uVar3 = (**(code **)(*plVar6 + 0x58))(plVar6);
          *(undefined1 *)(param_1 + 0x40) = uVar3;
          uVar5 = (**(code **)(*plVar6 + 0x50))(plVar6);
          uVar3 = 1;
        }
        *(undefined4 *)(param_1 + 0x44) = uVar5;
        *(undefined1 *)(param_1 + 0x80) = uVar3;
        *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(pbVar12 + 0xc);
        uVar5 = *(undefined4 *)(pbVar12 + 8);
        *(undefined4 *)(param_1 + 0x7c) = uVar5;
        local_7c = (uint)CONCAT71((uint7)(uint3)((uint)uVar5 >> 8),1);
        psVar11 = local_88;
        uVar13 = uVar4;
      }
LAB_146989fd8:
      pbVar12 = pbVar12 + 0x10;
      uVar4 = (uint)(ushort)psVar11[2];
    }
    if ((local_7c & 1) != 0) {
      if (*(char *)(param_1 + 0x80) == '\x01') {
        plStack_70 = local_a8;
        if (local_a8 == (longlong *)0x0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
          UNLOCK();
          plVar8 = local_a8;
        }
        *(longlong **)(param_1 + 0x68) = plVar6;
        local_78 = 0;
        plVar6 = *(longlong **)(param_1 + 0x70);
        if (plVar8 != plVar6) {
          plStack_70 = (longlong *)0x0;
          *(longlong **)(param_1 + 0x70) = plVar8;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar8 = plVar6 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
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
        }
      }
      else {
        plStack_70 = local_98;
        if (local_98 == (longlong *)0x0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(local_98 + 1) = (int)local_98[1] + 1;
          UNLOCK();
          plVar6 = local_98;
        }
        *(longlong **)(param_1 + 0x68) = plVar8;
        local_78 = 0;
        plVar8 = *(longlong **)(param_1 + 0x70);
        if (plVar6 != plVar8) {
          plStack_70 = (longlong *)0x0;
          *(longlong **)(param_1 + 0x70) = plVar6;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar6 = plVar8 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
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
        }
      }
      FUN_14698a2e2(&local_78);
      uVar10 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      goto LAB_146989e9a;
    }
  }
  uVar10 = 0;
LAB_146989e9a:
  FUN_14698a33a(&local_a0);
  FUN_14698a392(&local_b0);
  return uVar10 & 0xffffffff;
}



// FUNCTION 14698a12c Unwind@14698a12c body=64 status=ok
// SIG undefined Unwind@14698a12c(void)

void Unwind_14698a12c(undefined8 param_1,longlong param_2)

{
  FUN_14698a2e2(param_2 + 0x60);
  return;
}



// FUNCTION 14698a16c Unwind@14698a16c body=64 status=ok
// SIG undefined Unwind@14698a16c(void)

void Unwind_14698a16c(undefined8 param_1,longlong param_2)

{
  FUN_14698a2e2(param_2 + 0x60);
  return;
}



// FUNCTION 14698a1ac Unwind@14698a1ac body=73 status=ok
// SIG undefined Unwind@14698a1ac(void)

void Unwind_14698a1ac(undefined8 param_1,longlong param_2)

{
  FUN_14698a33a(param_2 + 0x38);
  FUN_14698a392(param_2 + 0x28);
  return;
}



// FUNCTION 14698a1f6 Unwind@14698a1f6 body=64 status=ok
// SIG undefined Unwind@14698a1f6(void)

void Unwind_14698a1f6(undefined8 param_1,longlong param_2)

{
  FUN_14698a2e2(param_2 + 0x60);
  return;
}



// FUNCTION 14698a236 FUN_14698a236 body=171 status=ok
// SIG undefined FUN_14698a236(void)

bool FUN_14698a236(longlong *param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)((longlong)param_1 + 100) != 0) {
    FUN_1446f8c06(param_1 + 0xb,0);
  }
  (**(code **)(*param_1 + 0x80))(param_1,param_2,param_3);
  if ((int)param_1[0xc] < 2) {
    lVar1 = param_1[0xd];
    if (lVar1 == 0) {
      return true;
    }
    if ((longlong *)(lVar1 + 0x10) != param_4) {
      if (*param_4 != 0) {
        FUN_1400020a8();
      }
      *param_4 = *(longlong *)(lVar1 + 0x10);
      *(undefined8 *)(lVar1 + 0x10) = 0;
      param_4[1] = *(longlong *)(lVar1 + 0x18);
      param_4[2] = *(longlong *)(lVar1 + 0x20);
      *(undefined8 *)(lVar1 + 0x18) = 0;
      *(undefined8 *)(lVar1 + 0x20) = 0;
    }
    if (param_4[1] != 0) {
      return (int)param_1[0xc] < 2;
    }
  }
  return false;
}



// FUNCTION 14698a2e2 FUN_14698a2e2 body=65 status=ok
// SIG undefined FUN_14698a2e2(void)

void FUN_14698a2e2(longlong param_1)

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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 14698a324 Unwind@14698a324 body=20 status=ok
// SIG undefined Unwind@14698a324(void)

void Unwind_14698a324(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14698a33a FUN_14698a33a body=65 status=ok
// SIG undefined FUN_14698a33a(void)

void FUN_14698a33a(longlong param_1)

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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 14698a37c Unwind@14698a37c body=20 status=ok
// SIG undefined Unwind@14698a37c(void)

void Unwind_14698a37c(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14698a392 FUN_14698a392 body=65 status=ok
// SIG undefined FUN_14698a392(void)

void FUN_14698a392(longlong param_1)

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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 14698a3d4 Unwind@14698a3d4 body=20 status=ok
// SIG undefined Unwind@14698a3d4(void)

void Unwind_14698a3d4(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14698a3ea FUN_14698a3ea body=73 status=ok
// SIG undefined FUN_14698a3ea(void)

void FUN_14698a3ea(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_149ef5bf0;
  FUN_140d488e8();
  if (param_1[0xe] != 0) {
    FUN_144b75d10();
    param_1[0xe] = 0;
  }
  FUN_1469a33a0(param_1);
  return;
}



// FUNCTION 14698a434 Unwind@14698a434 body=20 status=ok
// SIG undefined Unwind@14698a434(void)

void Unwind_14698a434(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14698a44a FUN_14698a44a body=41 status=ok
// SIG undefined FUN_14698a44a(void)

void FUN_14698a44a(longlong param_1)

{
  FUN_140d488e8();
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_144b75d10();
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  return;
}



// FUNCTION 14698a4d8 FUN_14698a4d8 body=358 status=ok
// SIG undefined FUN_14698a4d8(void)

void FUN_14698a4d8(longlong param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined8 *local_88;
  undefined4 *local_80;
  uint local_78;
  undefined4 local_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    bVar1 = *(byte *)(param_1 + 0x40);
    uVar6 = 7;
    if ((ulonglong)bVar1 < 3) {
      uVar6 = *(undefined4 *)(&DAT_149ef8124 + (ulonglong)bVar1 * 4);
    }
    uVar5 = (bVar1 == 2 || *(int *)(param_1 + 0x68) == 1) | 2;
    local_4c = FUN_144b75e00(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50),uVar5);
    local_60 = param_1 + 0x28;
    FUN_1467ac1d6(param_1 + 0x28,local_4c,1);
    local_58 = *(undefined8 *)(param_1 + 0x28);
    iVar3 = *(int *)(param_1 + 0x48);
    iVar2 = FUN_142885c44(*(undefined1 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
    uVar4 = FUN_144b75de0();
    local_98 = *(undefined4 *)(param_1 + 0x50);
    local_68 = 0xc00;
    local_90 = uVar6;
    local_88 = &local_58;
    local_80 = &local_4c;
    local_78 = uVar5;
    local_70 = param_2;
    iVar3 = FUN_144b75e80(uVar4,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x48),
                          iVar3 * iVar2);
    FUN_144b75d10(uVar4);
    if (iVar3 == 0) {
      FUN_1467ac1d6(local_60,local_4c,1);
    }
    else {
      *(undefined8 *)(param_1 + 0x30) = 0;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        FUN_140d2d4a8(local_60,0);
      }
      FUN_14020fad6(param_1 + 0x58,L"tjCompress2 failed");
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14698a676 FUN_14698a676 body=85 status=ok
// SIG undefined FUN_14698a676(void)

void FUN_14698a676(undefined8 param_1,void *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = png_get_io_ptr();
  lVar1 = *(longlong *)(lVar2 + 0x30);
  *(ulonglong *)(lVar2 + 0x30) = lVar1 + param_3;
  if ((ulonglong)(*(longlong *)(lVar2 + 0x38) - lVar1) < param_3) {
    FUN_14112c458((longlong *)(lVar2 + 0x28),lVar1);
  }
  memcpy((void *)(lVar1 + *(longlong *)(lVar2 + 0x28)),param_2,param_3);
  return;
}



// FUNCTION 14698a6cc FUN_14698a6cc body=105 status=ok
// SIG undefined FUN_14698a6cc(void)

undefined8 * FUN_14698a6cc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
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
  return param_1;
}



// FUNCTION 14698a736 Unwind@14698a736 body=44 status=ok
// SIG undefined Unwind@14698a736(void)

void Unwind_14698a736(undefined8 param_1,longlong param_2)

{
  if (**(longlong **)(param_2 + 0x28) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 14698a78a FUN_14698a78a body=436 status=ok
// SIG undefined FUN_14698a78a(void)

void FUN_14698a78a(longlong param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(longlong *)(param_1 + 0x38) < 0) {
    FUN_140d2d4a8(param_1 + 0x28,0);
  }
  local_50 = 0;
  local_48 = 0;
  local_44 = 0x201;
  local_40 = 0;
  cVar5 = FUN_14698a958(param_1);
  if (((cVar5 == '\0') || (lVar3 = *(longlong *)(param_1 + 0x48), 0xffff < lVar3)) ||
     (0xffff < *(longlong *)(param_1 + 0x50))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  bVar6 = FUN_14287f6c7(&local_50);
  FUN_1467ac1d6(param_1 + 0x28,
                *(longlong *)(param_1 + 0x48) * ((ulonglong)bVar6 + 3) *
                *(longlong *)(param_1 + 0x50) + 0x12,1);
  puVar10 = *(undefined2 **)(param_1 + 0x28);
  uVar1 = *(undefined2 *)(param_1 + 0x48);
  uVar2 = *(undefined2 *)(param_1 + 0x50);
  *puVar10 = 0;
  *(undefined1 *)(puVar10 + 1) = 2;
  *(undefined8 *)((longlong)puVar10 + 3) = 0;
  *(undefined1 *)((longlong)puVar10 + 0xb) = 0;
  puVar10[6] = uVar1;
  puVar10[7] = uVar2;
  *(char *)(puVar10 + 8) = (char)((ulonglong)bVar6 + 3) << 3;
  *(byte *)((longlong)puVar10 + 0x11) = bVar6 << 3;
  uVar7 = *(int *)(param_1 + 0x50) - 1;
  if (-1 < (int)uVar7) {
    puVar10 = puVar10 + 9;
    lVar12 = lVar3 * (ulonglong)uVar7 * 4;
    uVar11 = (ulonglong)uVar7;
    do {
      if (bVar6 == 0) {
        if (0 < *(longlong *)(param_1 + 0x48)) {
          lVar9 = *(longlong *)(param_1 + 0x10) + lVar12;
          lVar8 = 0;
          do {
            *(undefined1 *)puVar10 = *(undefined1 *)(lVar9 + lVar8 * 4);
            *(undefined1 *)((longlong)puVar10 + 1) = *(undefined1 *)(lVar9 + 1 + lVar8 * 4);
            *(undefined1 *)(puVar10 + 1) = *(undefined1 *)(lVar9 + 2 + lVar8 * 4);
            puVar10 = (undefined2 *)((longlong)puVar10 + 3);
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(longlong *)(param_1 + 0x48));
        }
      }
      else {
        memcpy(puVar10,(void *)(*(longlong *)(param_1 + 0x10) + uVar11 * lVar3 * 4),lVar3 * 4);
        puVar10 = puVar10 + lVar3 * 2;
      }
      lVar12 = lVar12 + lVar3 * -4;
      bVar4 = 0 < (longlong)uVar11;
      uVar11 = uVar11 - 1;
    } while (bVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14698a958 FUN_14698a958 body=152 status=ok
// SIG undefined FUN_14698a958(void)

undefined8 FUN_14698a958(longlong *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [39];
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[3] != 0) {
    uVar2 = (**(code **)(*param_1 + 0x58))();
    uVar3 = (**(code **)(*param_1 + 0x50))(param_1);
    bVar1 = FUN_142882538(uVar2,uVar3,&local_21);
    if ((bVar1 != 0xff) && (local_21 == '\x01')) {
      *(longlong *)(param_2 + 4) = param_1[2];
      *param_2 = (int)param_1[9];
      param_2[1] = (int)param_1[10];
      param_2[2] = 1;
      *(byte *)(param_2 + 3) = bVar1;
      *(char *)((longlong)param_2 + 0xd) = (bVar1 < 2) * '\x02';
      uVar4 = 1;
      goto LAB_14698a9d2;
    }
  }
  uVar4 = 0;
LAB_14698a9d2:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14698a9f2 FUN_14698a9f2 body=103 status=ok
// SIG undefined FUN_14698a9f2(void)

undefined8 FUN_14698a9f2(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  
  cVar3 = FUN_140d48816();
  if ((cVar3 != '\0') && (cVar3 = FUN_14698aa5a(param_1), cVar3 != '\0')) {
    uVar1 = *(ulonglong *)(param_1 + 0x50);
    if ((0 < (longlong)uVar1) &&
       (((uVar2 = *(ulonglong *)(param_1 + 0x48), 0 < (longlong)uVar2 &&
         ((uVar2 | uVar1) < 0x80000000)) && (uVar2 * uVar1 >> 0x20 == 0)))) {
      return CONCAT71((int7)(uVar1 >> 8),1);
    }
    FUN_14020fad6(param_1 + 0x58,L"Image dimensions are not possible to import");
  }
  return 0;
}



// FUNCTION 14698aa5a FUN_14698aa5a body=112 status=ok
// SIG undefined FUN_14698aa5a(void)

void FUN_14698aa5a(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  cVar2 = FUN_14698ab8e(lVar1,*(undefined8 *)(param_1 + 0x30));
  if (cVar2 == '\0') {
    return;
  }
  *(ulonglong *)(param_1 + 0x48) = (ulonglong)*(ushort *)(lVar1 + 0xc);
  *(ulonglong *)(param_1 + 0x50) = (ulonglong)*(ushort *)(lVar1 + 0xe);
  *(undefined4 *)(param_1 + 0x44) = 8;
  if (*(char *)(lVar1 + 1) == '\0') {
    if (*(char *)(lVar1 + 2) == '\x03') goto LAB_14698aaa9;
  }
  else if ((*(char *)(lVar1 + 1) == '\x01') && (*(char *)(lVar1 + 2) == '\x01')) {
LAB_14698aaa9:
    uVar3 = 2;
    if (*(char *)(lVar1 + 0x10) == '\b') goto LAB_14698aab3;
  }
  uVar3 = 1;
LAB_14698aab3:
  *(undefined1 *)(param_1 + 0x40) = uVar3;
  *(uint *)(param_1 + 0x68) = (uint)*(byte *)(lVar1 + 1);
  *(undefined1 *)(param_1 + 0x6c) = *(undefined1 *)(lVar1 + 2);
  return;
}



// FUNCTION 14698aaca FUN_14698aaca body=195 status=ok
// SIG undefined FUN_14698aaca(void)

void FUN_14698aaca(longlong param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar5 = *(longlong *)(param_1 + 0x50) * *(longlong *)(param_1 + 0x48) <<
          (param_2 != '\x02') * '\x02';
  if ((longlong)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar5);
  }
  lVar1 = param_1 + 0x10;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(ulonglong *)(param_1 + 0x20) == uVar5) {
    lVar4 = 0;
    uVar3 = uVar5;
  }
  else {
    FUN_140d2d4a8(lVar1,uVar5);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar3 = *(ulonglong *)(param_1 + 0x20);
  }
  *(ulonglong *)(param_1 + 0x18) = lVar4 + uVar5;
  if (uVar3 - lVar4 < uVar5) {
    FUN_14112c458(lVar1);
  }
  cVar2 = FUN_14288511f(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x10),uVar5);
  if (cVar2 == '\0') {
    FUN_14020fad6(param_1 + 0x58,L"Error while decompressing a TGA");
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (*(longlong *)(param_1 + 0x20) < 0) {
      FUN_140d2d4a8(lVar1,0);
      return;
    }
  }
  return;
}



// FUNCTION 14698ab8e FUN_14698ab8e body=55 status=ok
// SIG undefined FUN_14698ab8e(void)

uint FUN_14698ab8e(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  
  if (0x11 < param_2) {
    if (*(char *)(param_1 + 1) == '\x01') {
      if ((*(char *)(param_1 + 2) == '\x01') && (uVar1 = 1, *(char *)(param_1 + 0x10) == '\b'))
      goto LAB_14698abc2;
    }
    else if ((*(char *)(param_1 + 1) == '\0') && (*(byte *)(param_1 + 2) < 0xb)) {
      uVar1 = 0x40c >> (*(byte *)(param_1 + 2) & 0x1f);
      goto LAB_14698abc2;
    }
  }
  uVar1 = 0;
LAB_14698abc2:
  return uVar1 & 0xffffff01;
}



// FUNCTION 14698abc6 FUN_14698abc6 body=203 status=ok
// SIG undefined FUN_14698abc6(void)

undefined8 * FUN_14698abc6(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  byte local_52 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_40 = 0;
  local_48 = 0;
  local_68 = &local_50;
  local_50 = 0;
  FUN_144b77e20(param_2,0x140,&local_40,&local_48);
  FUN_144b77e20(param_2,0x102,local_52);
  lVar1 = 1L << (local_52[0] & 0x3f);
  *param_1 = local_40;
  param_1[1] = lVar1;
  param_1[2] = local_48;
  param_1[3] = lVar1;
  param_1[4] = local_50;
  param_1[5] = lVar1;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14698ac92 FUN_14698ac92 body=203 status=ok
// SIG undefined FUN_14698ac92(void)

undefined8 * FUN_14698ac92(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  byte local_52 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_40 = 0;
  local_48 = 0;
  local_68 = &local_50;
  local_50 = 0;
  FUN_144b77e20(param_2,0x140,&local_40,&local_48);
  FUN_144b77e20(param_2,0x102,local_52);
  lVar1 = 1L << (local_52[0] & 0x3f);
  *param_1 = local_40;
  param_1[1] = lVar1;
  param_1[2] = local_48;
  param_1[3] = lVar1;
  param_1[4] = local_50;
  param_1[5] = lVar1;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14698ad5e FUN_14698ad5e body=203 status=ok
// SIG undefined FUN_14698ad5e(void)

undefined8 * FUN_14698ad5e(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  byte local_52 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_40 = 0;
  local_48 = 0;
  local_68 = &local_50;
  local_50 = 0;
  FUN_144b77e20(param_2,0x140,&local_40,&local_48);
  FUN_144b77e20(param_2,0x102,local_52);
  lVar1 = 1L << (local_52[0] & 0x3f);
  *param_1 = local_40;
  param_1[1] = lVar1;
  param_1[2] = local_48;
  param_1[3] = lVar1;
  param_1[4] = local_50;
  param_1[5] = lVar1;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14698ae2a FUN_14698ae2a body=70 status=ok
// SIG undefined FUN_14698ae2a(void)

void FUN_14698ae2a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149ef5f00;
  if (param_1[0xe] != 0) {
    FUN_144b77790();
    param_1[0xe] = 0;
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1469a33a0(param_1);
  return;
}



// FUNCTION 14698ae7a FUN_14698ae7a body=212 status=ok
// SIG undefined FUN_14698ae7a(void)

void FUN_14698ae7a(longlong param_1)

{
  ulonglong _Size;
  longlong lVar1;
  char cVar2;
  
  if (*(longlong *)(param_1 + 0x70) == 0) {
    FUN_14020fad6(param_1 + 0x58,L"Tiff invalid.");
  }
  else {
    cVar2 = FUN_14698af86(param_1);
    if ((cVar2 == '\0') || (_Size = *(ulonglong *)(param_1 + 0xa0), _Size == 0)) {
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x18);
      *(ulonglong *)(param_1 + 0x18) = lVar1 + _Size;
      if ((ulonglong)(*(longlong *)(param_1 + 0x20) - lVar1) < _Size) {
        FUN_14112c458(param_1 + 0x10,lVar1);
      }
      memmove((void *)(lVar1 + *(longlong *)(param_1 + 0x10)),*(void **)(param_1 + 0x98),_Size);
      *(undefined8 *)(param_1 + 0xa0) = 0;
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_144b77790();
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  return;
}



// FUNCTION 14698af4e Unwind@14698af4e body=56 status=ok
// SIG undefined Unwind@14698af4e(void)

void Unwind_14698af4e(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x70) != 0) {
    FUN_144b77790();
    *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x70) = 0;
  }
  return;
}



// FUNCTION 14698af86 FUN_14698af86 body=738 status=ok
// SIG undefined FUN_14698af86(void)

ulonglong FUN_14698af86(longlong param_1,char param_2,ulonglong param_3)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined7 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  longlong local_50;
  undefined1 *local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  uVar3 = param_3 & 0xffffffff;
  FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x100,(ulonglong *)(param_1 + 0x88));
  FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x101,(ulonglong *)(param_1 + 0x90));
  iVar2 = (int)param_3;
  if ((*(char *)(param_1 + 0x40) != param_2) || (*(int *)(param_1 + 0x44) != iVar2))
  goto LAB_14698b103;
  if (iVar2 == 8 && param_2 == '\x01') {
    uVar3 = *(ulonglong *)(param_1 + 0x90);
    if (uVar3 == 0) {
      uVar4 = 0;
LAB_14698b07c:
      uVar3 = -uVar4;
      if ((longlong)-uVar4 < 0) {
        uVar3 = uVar4;
      }
      if (uVar3 <= 0x7fffffffffffffffU - ((longlong)uVar4 >> 0x3f) >> 2) {
        uVar3 = uVar4 * 4;
        if ((longlong)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar3);
        }
        *(undefined8 *)(param_1 + 0xa0) = 0;
        if (*(ulonglong *)(param_1 + 0xa8) == uVar3) {
          lVar6 = 0;
          uVar4 = uVar3;
        }
        else {
          FUN_140d2d4a8(param_1 + 0x98,uVar3);
          lVar6 = *(longlong *)(param_1 + 0xa0);
          uVar4 = *(ulonglong *)(param_1 + 0xa8);
        }
        *(ulonglong *)(param_1 + 0xa0) = lVar6 + uVar3;
        if (uVar4 - lVar6 < uVar3) {
          FUN_14112c458(param_1 + 0x98);
        }
        uVar10 = 5;
        iVar2 = FUN_144b843f0(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x88),
                              *(undefined4 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98),5,0);
        if (iVar2 == 0) {
          FUN_14698b38c(param_1,4);
        }
        else {
          bVar1 = FUN_144a61b4f();
          local_40 = &local_50;
          local_38 = 0;
          local_30 = 0;
          local_48 = &LAB_142885cf2;
          local_50 = param_1;
          FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0x90),1,&local_48,uVar10,
                        (uint)(bVar1 ^ 1) << 3,&local_38);
        }
LAB_14698b1ec:
        uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
        goto LAB_14698b118;
      }
    }
    else {
      uVar4 = *(ulonglong *)(param_1 + 0x88);
      uVar8 = -uVar4;
      if ((longlong)-uVar4 < 0) {
        uVar8 = uVar4;
      }
      uVar9 = -uVar3;
      if ((longlong)-uVar3 < 0) {
        uVar9 = uVar3;
      }
      if (uVar8 <= (0x7fffffffffffffffU - ((longlong)(uVar4 ^ uVar3) >> 0x3f)) / uVar9) {
        uVar4 = uVar4 * uVar3;
        goto LAB_14698b07c;
      }
    }
    pwVar5 = L"Tiff image is massive - likely corrupted file.";
  }
  else {
    if (iVar2 == 0x10 && param_2 == '\0') {
      FUN_14698b522(param_1,4);
      goto LAB_14698b1ec;
    }
    uVar7 = (undefined7)(uVar3 >> 8);
    if (param_2 != '\x02') {
      if (param_2 == '\x05') {
        if (iVar2 == 0x10) {
          uVar3 = CONCAT71(uVar7,1);
          FUN_14288538e(param_1,1);
          goto LAB_14698b118;
        }
        if (iVar2 == 0x20) {
          uVar3 = CONCAT71(uVar7,1);
          FUN_1428855f6(param_1,1);
          goto LAB_14698b118;
        }
        goto LAB_14698b103;
      }
      if (param_2 != '\x03') goto LAB_14698b103;
      if (iVar2 == 0x10) {
        FUN_14288538e(param_1,4);
      }
      else {
        if (iVar2 != 0x20) goto LAB_14698b103;
        FUN_1428855f6(param_1,4);
      }
      goto LAB_14698b1ec;
    }
    if (iVar2 == 8) {
      uVar3 = CONCAT71(uVar7,1);
      FUN_14698b38c(param_1,1);
      goto LAB_14698b118;
    }
    if (iVar2 == 0x10) {
      uVar3 = CONCAT71(uVar7,1);
      FUN_14698b522(param_1,1);
      goto LAB_14698b118;
    }
LAB_14698b103:
    pwVar5 = L"Unsupported requested format for the input image. Can\'t uncompress the tiff image.";
  }
  FUN_14020fad6(param_1 + 0x58,pwVar5);
  uVar3 = 0;
LAB_14698b118:
  return uVar3 & 0xffffffff;
}



// FUNCTION 14698b26a FUN_14698b26a body=222 status=ok
// SIG undefined FUN_14698b26a(void)

void FUN_14698b26a(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x70) == 0) {
    FUN_14020fad6(param_1 + 0x58,L"Tiff invalid.");
  }
  else {
    lVar3 = param_1;
    lVar4 = param_1;
    do {
      cVar1 = FUN_14698af86(lVar3,param_2,param_3);
      lVar3 = lVar4;
      if ((cVar1 == '\0') || (*(longlong *)(lVar3 + 0xa0) == 0)) {
        *(undefined8 *)(lVar3 + 0x48) = 0;
        *(undefined8 *)(lVar3 + 0x50) = 0;
        break;
      }
      FUN_146989a98(param_4,param_1 + 0x98,*(undefined4 *)(lVar3 + 0x88),
                    *(undefined4 *)(lVar3 + 0x90),lVar3,uVar5);
      lVar4 = lVar3;
      iVar2 = FUN_144b7b190(*(undefined8 *)(lVar3 + 0x70));
    } while (iVar2 != 0);
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    param_1 = lVar3;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_144b77790();
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  return;
}



// FUNCTION 14698b348 Unwind@14698b348 body=67 status=ok
// SIG undefined Unwind@14698b348(void)

void Unwind_14698b348(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  if (*(longlong *)(lVar1 + 0x70) != 0) {
    FUN_144b77790();
    *(undefined8 *)(lVar1 + 0x70) = 0;
  }
  return;
}



// FUNCTION 14698b38c FUN_14698b38c body=405 status=ok
// SIG undefined FUN_14698b38c(void)

void FUN_14698b38c(longlong param_1,ulonglong param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 *local_40;
  undefined4 **local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  uVar4 = (param_2 & 0xff) * *(longlong *)(param_1 + 0x88) * *(longlong *)(param_1 + 0x90);
  if (-1 < (longlong)uVar4) {
    param_2 = param_2 & 0xffffffff;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    if (*(ulonglong *)(param_1 + 0xa8) == uVar4) {
      lVar3 = 0;
      uVar2 = uVar4;
    }
    else {
      FUN_140d2d4a8(param_1 + 0x98,uVar4);
      lVar3 = *(longlong *)(param_1 + 0xa0);
      uVar2 = *(ulonglong *)(param_1 + 0xa8);
    }
    *(ulonglong *)(param_1 + 0xa0) = lVar3 + uVar4;
    if (uVar2 - lVar3 < uVar4) {
      FUN_14112c458(param_1 + 0x98);
    }
    iVar1 = FUN_144b76e70(*(undefined8 *)(param_1 + 0x70));
    switch(*(undefined2 *)(param_1 + 0x7c)) {
    case 1:
      FUN_14698d6de(param_1,param_2,iVar1 != 0);
      break;
    case 2:
      FUN_14698d752(param_1,param_2,iVar1 != 0);
      break;
    default:
      FUN_14020fad6(param_1 + 0x58,L"Tiff, Unsupported bits per sample from a uint sample format.");
      break;
    case 4:
      FUN_14698d7c6(param_1,param_2,iVar1 != 0);
      break;
    case 8:
      FUN_146990270(param_1,param_2,iVar1 != 0);
    }
    if (*(short *)(param_1 + 0x78) == 0) {
      local_50 = *(undefined4 *)(param_1 + 0x98);
      uStack_4c = *(undefined4 *)(param_1 + 0x9c);
      uStack_48 = *(undefined4 *)(param_1 + 0xa0);
      uStack_44 = *(undefined4 *)(param_1 + 0xa4);
      FUN_144a61b4f();
      local_38 = &local_58;
      local_30 = 0;
      local_28 = 0;
      local_40 = &LAB_146990e98;
      local_58 = &local_50;
      FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x90) * *(int *)(param_1 + 0x88),1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar4);
}



// FUNCTION 14698b522 FUN_14698b522 body=762 status=ok
// SIG undefined FUN_14698b522(void)

void FUN_14698b522(longlong param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  ulonglong uVar6;
  undefined4 *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 *local_40;
  undefined4 **local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  uVar6 = (ulonglong)((param_2 & 0xff) * 2) * *(longlong *)(param_1 + 0x88) *
          *(longlong *)(param_1 + 0x90);
  if ((longlong)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar6);
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (*(ulonglong *)(param_1 + 0xa8) == uVar6) {
    lVar4 = 0;
    uVar3 = uVar6;
  }
  else {
    FUN_140d2d4a8(param_1 + 0x98,uVar6);
    lVar4 = *(longlong *)(param_1 + 0xa0);
    uVar3 = *(ulonglong *)(param_1 + 0xa8);
  }
  *(ulonglong *)(param_1 + 0xa0) = lVar4 + uVar6;
  if (uVar3 - lVar4 < uVar6) {
    FUN_14112c458(param_1 + 0x98);
  }
  iVar2 = FUN_144b76e70(*(undefined8 *)(param_1 + 0x70));
  if (*(ushort *)(param_1 + 0x80) < 2) {
    sVar1 = *(short *)(param_1 + 0x7c);
    if (*(short *)(param_1 + 0x78) != 3) {
      if (sVar1 == 0x40) {
        FUN_146994f36(param_1,param_2,iVar2 != 0);
        goto LAB_14698b654;
      }
      if (sVar1 == 0x20) {
        FUN_1469941ee(param_1,param_2,iVar2 != 0);
        goto LAB_14698b654;
      }
      if (sVar1 == 0x10) {
        FUN_14699357e(param_1,param_2,iVar2 != 0);
        goto LAB_14698b654;
      }
      pwVar5 = L"Tiff, Unsupported bits per sample from a uint sample format.";
      goto LAB_14698b64f;
    }
    switch(sVar1) {
    case 1:
      if (iVar2 == 0) {
        FUN_142897c60(param_1,param_2);
      }
      else {
        FUN_142896e1e();
      }
      break;
    case 2:
      if (iVar2 == 0) {
        FUN_14289a08c(param_1,param_2);
      }
      else {
        FUN_14289924a();
      }
      break;
    case 4:
      if (iVar2 == 0) {
        FUN_14289c4b8(param_1,param_2);
      }
      else {
        FUN_14289b676();
      }
      break;
    case 8:
      if (iVar2 == 0) {
        FUN_14289e898(param_1,param_2);
      }
      else {
        FUN_14289daa0();
      }
      break;
    default:
      if (sVar1 == 0x10) {
        if (iVar2 == 0) {
          FUN_1428a0c34(param_1,param_2);
        }
        else {
          FUN_14289fe3a();
        }
        break;
      }
      if (sVar1 == 0x20) {
        if (iVar2 == 0) {
          FUN_1428a2fae(param_1,param_2);
        }
        else {
          FUN_1428a21b2();
        }
        break;
      }
    case 3:
    case 5:
    case 6:
    case 7:
      pwVar5 = L"Tiff, Unsupported bits per sample from a Palette base image.";
LAB_14698b64f:
      FUN_14020fad6(param_1 + 0x58,pwVar5);
    }
LAB_14698b654:
    if (*(short *)(param_1 + 0x78) == 0) {
      local_50 = *(undefined4 *)(param_1 + 0x98);
      uStack_4c = *(undefined4 *)(param_1 + 0x9c);
      uStack_48 = *(undefined4 *)(param_1 + 0xa0);
      uStack_44 = *(undefined4 *)(param_1 + 0xa4);
      FUN_144a61b4f();
      local_38 = &local_58;
      local_30 = 0;
      local_28 = 0;
      local_40 = &LAB_146998612;
      local_58 = &local_50;
      FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x90) * *(int *)(param_1 + 0x88),1);
    }
    return;
  }
  if (*(ushort *)(param_1 + 0x80) != 3) goto LAB_14698b654;
  sVar1 = *(short *)(param_1 + 0x7c);
  if (sVar1 == 0x40) {
    FUN_1469978c2(param_1,param_2,iVar2 != 0);
    goto LAB_14698b654;
  }
  if (sVar1 == 0x20) {
    FUN_146996b66(param_1,param_2,iVar2 != 0);
    goto LAB_14698b654;
  }
  if (sVar1 == 0x10) {
    FUN_146995cd2(param_1,param_2,iVar2 != 0);
    goto LAB_14698b654;
  }
  pwVar5 = L"Tiff, Unsupported bits per sample from a IEEEFP sample format.";
  goto LAB_14698b64f;
}



// FUNCTION 14698b81e FUN_14698b81e body=765 status=ok
// SIG undefined FUN_14698b81e(void)

undefined8 FUN_14698b81e(longlong param_1)

{
  short *psVar1;
  ushort *puVar2;
  ushort uVar3;
  short sVar4;
  ushort uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char cVar8;
  longlong lVar9;
  int iVar10;
  wchar_t *pwVar11;
  uint uVar12;
  
  cVar8 = FUN_140d48816();
  if (cVar8 == '\0') {
    return 0;
  }
  lVar9 = FUN_144b76e80(&DAT_149e02088,L"rInvalid resolution in tiff: zero or negative.",param_1,
                        FUN_14698bb8e,&LAB_14698bb86,&LAB_14698bb2c,&LAB_14698bb28,&LAB_14698bb22,
                        &LAB_14698bb1e,&DAT_14698bb1c);
  *(longlong *)(param_1 + 0x70) = lVar9;
  if (lVar9 == 0) {
    return 0;
  }
  FUN_144b77e20(lVar9,0x100,param_1 + 0x48);
  FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x101,(ulonglong *)(param_1 + 0x50));
  FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x106,(undefined2 *)(param_1 + 0x78));
  FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x103,param_1 + 0x7a);
  psVar1 = (short *)(param_1 + 0x7e);
  FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x115,psVar1);
  puVar2 = (ushort *)(param_1 + 0x7c);
  FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x102,puVar2);
  FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x153,(ushort *)(param_1 + 0x80));
  *(undefined1 *)(param_1 + 0x40) = 0xff;
  uVar6 = *(ulonglong *)(param_1 + 0x48);
  pwVar11 = L"Invalid resolution in tiff: zero or negative.";
  if (((longlong)uVar6 < 1) || (uVar7 = *(ulonglong *)(param_1 + 0x50), (longlong)uVar7 < 1))
  goto switchD_14698b98f_caseD_4;
  uVar3 = *(ushort *)(param_1 + 0x80);
  pwVar11 = L"The sample format of the tiff is unsuported. (We support UInt and IEEEFP)";
  if ((3 < uVar3) || (uVar3 == 2)) goto switchD_14698b98f_caseD_4;
  pwVar11 = L"Unsupported Tiff content.";
  switch(*(undefined2 *)(param_1 + 0x78)) {
  case 0:
  case 1:
    sVar4 = *psVar1;
    if (1 < (ushort)(sVar4 - 1U)) goto switchD_14698b98f_caseD_4;
    uVar12 = *puVar2 - 1;
    if (0x3f < uVar12) goto switchD_14698b98f_caseD_4;
    if ((0x8bUL >> ((ulonglong)uVar12 & 0x3f) & 1) == 0) {
      if ((0x8000000080008000U >> ((ulonglong)uVar12 & 0x3f) & 1) == 0)
      goto switchD_14698b98f_caseD_4;
      if (uVar3 == 3) {
        *(char *)(param_1 + 0x40) = (sVar4 == 1) * '\x02' + '\x03';
        iVar10 = 0x20;
        if (0x1f < *puVar2) break;
      }
      else {
        *(char *)(param_1 + 0x40) = (sVar4 == 1) * '\x02';
      }
      goto LAB_14698bab5;
    }
    *(char *)(param_1 + 0x40) = (sVar4 == 1) + '\x01';
    goto LAB_14698b996;
  case 2:
    if (1 < (ushort)(*psVar1 - 3U)) goto switchD_14698b98f_caseD_4;
    uVar5 = *puVar2;
    if ((0x30 < uVar5 - 0x10) || ((0x1000000010001U >> ((ulonglong)(uVar5 - 0x10) & 0x3f) & 1) == 0)
       ) {
      if (8 < uVar5) goto switchD_14698b98f_caseD_4;
      goto switchD_14698b98f_caseD_6;
    }
    if (uVar3 != 3) goto LAB_14698bab1;
    *(undefined1 *)(param_1 + 0x40) = 3;
    iVar10 = (uint)(0x1f < uVar5) * 0x10 + 0x10;
    break;
  case 3:
    if ((*psVar1 != 1) || (uVar12 = *puVar2 - 1, 0x3f < uVar12)) goto switchD_14698b98f_caseD_4;
    if ((0x8bUL >> ((ulonglong)uVar12 & 0x3f) & 1) == 0) {
      if ((0x8000000080008000U >> ((ulonglong)uVar12 & 0x3f) & 1) == 0)
      goto switchD_14698b98f_caseD_4;
LAB_14698bab1:
      *(undefined1 *)(param_1 + 0x40) = 0;
LAB_14698bab5:
      iVar10 = 0x10;
      break;
    }
  case 6:
  case 8:
  case 9:
  case 10:
switchD_14698b98f_caseD_6:
    *(undefined1 *)(param_1 + 0x40) = 1;
LAB_14698b996:
    iVar10 = 8;
    break;
  default:
    goto switchD_14698b98f_caseD_4;
  }
  *(int *)(param_1 + 0x44) = iVar10;
  pwVar11 = L"Image dimensions are not possible to import";
  if (((uVar7 | uVar6) < 0x80000000) && (uVar7 * uVar6 >> 0x20 == 0)) {
    return CONCAT71((int7)(uVar6 >> 8),1);
  }
switchD_14698b98f_caseD_4:
  FUN_14020fad6(param_1 + 0x58,pwVar11);
  return 0;
}



// FUNCTION 14698bb8e FUN_14698bb8e body=73 status=ok
// SIG undefined FUN_14698bb8e(void)

size_t FUN_14698bb8e(longlong param_1,void *param_2,size_t param_3)

{
  longlong lVar1;
  size_t sVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  if ((lVar1 < 0) ||
     (sVar2 = *(longlong *)(param_1 + 0x30) - lVar1,
     sVar2 == 0 || *(longlong *)(param_1 + 0x30) < lVar1)) {
    param_3 = 0;
  }
  else {
    if ((longlong)sVar2 < (longlong)param_3) {
      param_3 = sVar2;
    }
    memcpy(param_2,(void *)(lVar1 + *(longlong *)(param_1 + 0x28)),param_3);
    *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + param_3;
  }
  return param_3;
}



// FUNCTION 14698bbd8 FUN_14698bbd8 body=744 status=ok
// SIG undefined FUN_14698bbd8(void)

undefined8 FUN_14698bbd8(longlong param_1,short *param_2,ulonglong param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 uVar4;
  int *local_998;
  int local_98c;
  int *local_988;
  undefined1 *local_980;
  int **local_978;
  undefined8 local_970;
  undefined4 local_968;
  int local_960;
  undefined4 local_95c;
  
  if (param_3 >> 0x20 != 0) {
    return 0;
  }
  if ((char)param_2[1] == -1 && *param_2 == -0x2701) {
    local_998 = (int *)0x0;
    local_98c = 0;
    FUN_144b8c6e0(&local_960,param_2,param_3 & 0xffffffff,0);
    if (local_960 != 0) {
      return 0;
    }
    local_970 = 0;
    local_968 = 0;
    local_980 = &LAB_1428f03e0;
    local_988 = &local_960;
    local_978 = &local_988;
    FUN_1401f8d10(L"ParallelFor Task",local_95c,1);
    iVar2 = FUN_144b8c9f0(&local_960,&local_998,&local_98c);
    if (iVar2 != 0) {
      return 0;
    }
    FUN_144b8df60(&local_960,local_998,local_98c,2);
    if (local_960 == 0) {
      local_970 = 0;
      local_968 = 0;
      local_980 = &LAB_1428f03ea;
      local_988 = &local_960;
      local_978 = &local_988;
      FUN_1401f8d10(L"ParallelFor Task",local_95c,1);
      lVar3 = FUN_144b8e9d0(&local_960,&local_970,&local_980,&local_988);
      if (lVar3 != 0) {
        FUN_1400020a8(lVar3);
        cVar1 = FUN_140d48816(param_1,local_998,(longlong)local_98c);
        FUN_1400020a8(local_998);
        goto joined_r0x00014698beb5;
      }
    }
    FUN_1400020a8(local_998);
  }
  else {
    FUN_144b8df60(&local_960,param_2,param_3 & 0xffffffff,2);
    if (local_960 != 0) {
      return 0;
    }
    local_978 = &local_998;
    local_970 = 0;
    local_968 = 0;
    local_980 = &LAB_1428f03f4;
    local_998 = &local_960;
    FUN_1401f8d10(L"ParallelFor Task",local_95c,1);
    lVar3 = FUN_144b8e9d0(&local_960,&local_970,&local_980,&local_988);
    if (lVar3 == 0) {
      return 0;
    }
    FUN_1400020a8(lVar3);
    cVar1 = FUN_140d48816(param_1,param_2,param_3);
joined_r0x00014698beb5:
    if (cVar1 != '\0') {
      *(undefined4 *)(param_1 + 0x44) = 8;
      *(longlong *)(param_1 + 0x48) = (longlong)(int)(uint)local_970;
      *(longlong *)(param_1 + 0x50) = (longlong)(int)(uint)local_980;
      if ((int)local_988 == 1) {
        uVar4 = 2;
      }
      else {
        if ((int)local_988 != 4) {
          return 0;
        }
        uVar4 = 0;
      }
      *(undefined1 *)(param_1 + 0x40) = uVar4;
      if ((((0 < (int)(uint)local_970) && (0 < (int)(uint)local_980)) &&
          (((uint)local_980 | (uint)local_970) < 0x80000000)) &&
         ((ulonglong)((longlong)(int)(uint)local_980 * (longlong)(int)(uint)local_970) >> 0x20 == 0)
         ) {
        return CONCAT71((int7)(int3)((ulonglong)local_970 >> 8),1);
      }
      FUN_14020fad6(param_1 + 0x58,L"Image dimensions are not possible to import");
    }
  }
  return 0;
}



// FUNCTION 14698bee6 FUN_14698bee6 body=369 status=ok
// SIG undefined FUN_14698bee6(void)

void FUN_14698bee6(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  size_t _Size;
  undefined8 uVar9;
  ulonglong in_stack_fffffffffffff4a8;
  void *local_b50;
  undefined4 local_b48;
  undefined1 *local_b40;
  undefined1 **local_b38;
  undefined1 *local_b30;
  undefined1 local_b28 [4];
  undefined4 local_b24;
  
  if (param_2 == 0) {
    iVar4 = 0x55;
  }
  else if (param_2 == 1) {
    iVar4 = 100;
  }
  else {
    iVar5 = 100;
    if (param_2 < 100) {
      iVar5 = param_2;
    }
    iVar4 = 0x28;
    if (0x28 < iVar5) {
      iVar4 = iVar5;
    }
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    puVar1 = (undefined8 *)(param_1 + 0x28);
    if (*(char *)(param_1 + 0x40) == '\x01') {
      lVar3 = *(longlong *)(param_1 + 0x18);
      lVar7 = lVar3 + 3;
      if (-1 < lVar3) {
        lVar7 = lVar3;
      }
      uVar6 = (uint)(lVar7 >> 2);
      if (0 < (int)uVar6) {
        lVar3 = *(longlong *)(param_1 + 0x10);
        uVar8 = 0;
        do {
          uVar2 = *(undefined1 *)(lVar3 + uVar8 * 4);
          *(undefined1 *)(lVar3 + uVar8 * 4) = *(undefined1 *)(lVar3 + 2 + uVar8 * 4);
          *(undefined1 *)(lVar3 + 2 + uVar8 * 4) = uVar2;
          uVar8 = uVar8 + 1;
        } while ((uVar6 & 0x7fffffff) != uVar8);
      }
    }
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    FUN_144b8ca40(local_b28,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50),
                  *(undefined4 *)(param_1 + 0x68),uVar9,iVar4,
                  in_stack_fffffffffffff4a8 & 0xffffffff00000000);
    local_b38 = &local_b30;
    local_b50 = (void *)0x0;
    local_b48 = 0;
    local_b40 = &LAB_1428f03fe;
    local_b30 = local_b28;
    FUN_1401f8d10(L"ParallelFor Task",local_b24,1,&local_b40,uVar9,0,&local_b50);
    FUN_144b8df10(local_b28,&local_b50,&local_b40);
    FUN_14626baa2(puVar1,(longlong)(int)local_b40);
    _Size = (size_t)(int)local_b40;
    lVar3 = *(longlong *)(param_1 + 0x30);
    *(size_t *)(param_1 + 0x30) = lVar3 + _Size;
    if ((ulonglong)(*(longlong *)(param_1 + 0x38) - lVar3) < _Size) {
      FUN_14112c458(puVar1);
      _Size = (size_t)(int)local_b40;
    }
    memcpy((void *)*puVar1,local_b50,_Size);
    FUN_1400020a8(local_b50);
  }
  return;
}



// FUNCTION 14698c058 FUN_14698c058 body=141 status=ok
// SIG undefined FUN_14698c058(void)

undefined8 * FUN_14698c058(longlong param_1,undefined8 *param_2)

{
  void *_Dst;
  size_t _Size;
  void *local_38;
  undefined8 *local_30;
  int local_24 [3];
  
  local_24[1] = -2;
  local_24[2] = -1;
  FUN_144b90840(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),&local_38,local_24,0
               );
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[1] = (longlong)local_24[0];
  if ((longlong)local_24[0] == 0) {
    _Dst = (void *)0x0;
    _Size = 0;
  }
  else {
    local_30 = param_2;
    FUN_14112c458(param_2,0);
    _Size = (size_t)local_24[0];
    _Dst = (void *)*local_30;
    param_2 = local_30;
  }
  memcpy(_Dst,local_38,_Size);
  FUN_1400020a8(local_38);
  return param_2;
}



// FUNCTION 14698c0e6 Unwind@14698c0e6 body=42 status=ok
// SIG undefined Unwind@14698c0e6(void)

void Unwind_14698c0e6(undefined8 param_1,longlong param_2)

{
  if (**(longlong **)(param_2 + 0x38) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 14698c110 FUN_14698c110 body=140 status=ok
// SIG undefined FUN_14698c110(void)

void FUN_14698c110(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_30 = 0x201;
  FUN_14698d1f8(param_4,&local_58);
  FUN_14698d278(&local_58);
  (**(code **)(*param_1 + 0x80))(param_1,param_2,param_3);
  uVar1 = (**(code **)(*param_1 + 0x48))(param_1);
  uVar2 = (**(code **)(*param_1 + 0x40))(param_1);
  FUN_146989a98(param_4,param_1 + 2,uVar2,uVar1);
  return;
}



// FUNCTION 14698c19c FUN_14698c19c body=102 status=ok
// SIG undefined FUN_14698c19c(void)

longlong * FUN_14698c19c(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)((longlong)param_1 + 100) != 0) {
    FUN_1446f8c06(param_1 + 0xb,0);
  }
  (**(code **)(*param_1 + 0x68))(param_1,param_3);
  *param_2 = param_1[5];
  param_1[5] = 0;
  param_2[1] = param_1[6];
  param_2[2] = param_1[7];
  param_1[6] = 0;
  param_1[7] = 0;
  return param_2;
}



// FUNCTION 14698c202 FUN_14698c202 body=336 status=ok
// SIG undefined FUN_14698c202(void)

ulonglong FUN_14698c202(longlong *param_1,longlong *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined7 uVar8;
  ulonglong uVar7;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_54;
  longlong local_50;
  char local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = (**(code **)(*param_1 + 0x58))();
  iVar5 = (**(code **)(*param_1 + 0x50))(param_1);
  if ((iVar5 != 0 && (char)uVar4 != -1) &&
     (cVar1 = (**(code **)(*param_1 + 0x30))(param_1,uVar4,iVar5,param_2), cVar1 != '\0')) {
    (**(code **)(*param_1 + 0x40))(param_1);
    (**(code **)(*param_1 + 0x48))(param_1);
    bVar2 = (**(code **)(*param_1 + 0x58))(param_1);
    (**(code **)(*param_1 + 0x50))(param_1);
    uVar4 = (**(code **)(*param_1 + 0x58))(param_1);
    uVar6 = (**(code **)(*param_1 + 0x50))(param_1);
    bVar3 = FUN_142882538(uVar4,uVar6,&local_41);
    if (bVar3 != 0xff) {
      uVar8 = (undefined7)((ulonglong)param_1 >> 8);
      if (local_41 == '\0') {
        uVar7 = CONCAT71(uVar8,1);
        if (0 < (int)param_2[4]) {
          lVar10 = 8;
          lVar9 = 0;
          do {
            local_50 = *param_2 + *(longlong *)(param_2[3] + lVar10);
            local_54 = (undefined2)param_2[5];
            local_60 = *(undefined8 *)(param_2[3] + -8 + lVar10);
            local_58 = 1;
            if (1 < bVar2) goto LAB_14698c329;
            FUN_1469877fd(&local_60);
            lVar9 = lVar9 + 1;
            lVar10 = lVar10 + 0x18;
          } while (lVar9 < (int)param_2[4]);
        }
      }
      else {
        *(byte *)(param_2 + 5) = bVar3;
        *(char *)((longlong)param_2 + 0x29) = (bVar3 < 2) * '\x02';
        uVar7 = CONCAT71(uVar8,1);
      }
      goto LAB_14698c32b;
    }
  }
LAB_14698c329:
  uVar7 = 0;
LAB_14698c32b:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14698c353 FUN_14698c353 body=286 status=ok
// SIG undefined FUN_14698c353(void)

undefined8 FUN_14698c353(byte *param_1,ulonglong param_2,longlong param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  byte *pbVar9;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  if ((param_2 < 0x12) ||
     (lVar8 = (ulonglong)*param_1 +
              (ulonglong)*(ushort *)(param_1 + 5) * (ulonglong)(param_1[7] + 7 >> 3) + 0x12,
     pbVar9 = param_1 + lVar8, pbVar9 == (byte *)0x0 || (longlong)param_2 < lVar8)) {
LAB_14698c393:
    uVar4 = 0;
  }
  else {
    uVar10 = (ulonglong)*(ushort *)(param_1 + 0xe);
    uVar4 = 1;
    if (uVar10 != 0) {
      uVar11 = *(ushort *)(param_1 + 0xc);
      lVar8 = uVar10 * 4;
      uVar7 = 0;
      iVar5 = 0;
      uVar6 = 0;
      do {
        lVar8 = lVar8 + -4;
        if (uVar11 == 0) {
          uVar11 = 0;
        }
        else {
          uVar12 = (ulonglong)uVar11;
          uVar13 = 0;
          do {
            if (iVar5 < 1) {
              if (uVar7 != 0) goto LAB_14698c3de;
              if (param_1 + param_2 <= pbVar9) goto LAB_14698c393;
              bVar1 = *pbVar9;
              iVar3 = (bVar1 & 0x7f) + 1;
              if (-1 < (char)bVar1) {
                iVar3 = iVar5;
              }
              iVar5 = iVar3;
              uVar7 = bVar1 + 1;
              if (-1 >= (char)bVar1) {
                uVar7 = 1;
              }
              if (param_1 + param_2 < pbVar9 + (ulonglong)uVar7 * 4 + 1) goto LAB_14698c393;
              pbVar9 = pbVar9 + 1;
LAB_14698c3e5:
              uVar6 = *(undefined4 *)pbVar9;
              pbVar9 = pbVar9 + 4;
              uVar7 = uVar7 - 1;
              iVar5 = iVar5 + -1;
            }
            else {
              iVar5 = iVar5 + -1;
LAB_14698c3de:
              if (0 < (int)uVar7) goto LAB_14698c3e5;
              uVar7 = 0;
            }
            *(undefined4 *)(uVar12 * lVar8 + param_3 + uVar13 * 4) = uVar6;
            uVar13 = uVar13 + 1;
            uVar11 = *(ushort *)(param_1 + 0xc);
            uVar12 = (ulonglong)uVar11;
          } while (uVar13 < uVar12);
        }
        bVar2 = 1 < (longlong)uVar10;
        uVar10 = uVar10 - 1;
      } while (bVar2);
    }
  }
  return uVar4;
}



// FUNCTION 14698c471 FUN_14698c471 body=309 status=ok
// SIG undefined FUN_14698c471(void)

undefined8 FUN_14698c471(byte *param_1,ulonglong param_2,longlong param_3)

{
  byte bVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint3 *puVar8;
  ulonglong uVar9;
  ushort uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  if ((param_2 < 0x12) ||
     (lVar7 = (ulonglong)*param_1 +
              (ulonglong)*(ushort *)(param_1 + 5) * (ulonglong)(param_1[7] + 7 >> 3) + 0x12,
     puVar8 = (uint3 *)(param_1 + lVar7), puVar8 == (uint3 *)0x0 || (longlong)param_2 < lVar7)) {
LAB_14698c4b1:
    uVar3 = 0;
  }
  else {
    uVar9 = (ulonglong)*(ushort *)(param_1 + 0xe);
    uVar3 = 1;
    if (uVar9 != 0) {
      uVar10 = *(ushort *)(param_1 + 0xc);
      lVar7 = uVar9 * 4;
      iVar6 = 0;
      iVar4 = 0;
      uVar5 = 0;
      do {
        lVar7 = lVar7 + -4;
        if (uVar10 == 0) {
          uVar10 = 0;
        }
        else {
          uVar11 = (ulonglong)uVar10;
          uVar12 = 0;
          do {
            if (iVar4 < 1) {
              if (iVar6 != 0) goto LAB_14698c4fc;
              if (param_1 + param_2 <= puVar8) goto LAB_14698c4b1;
              bVar1 = (byte)*puVar8;
              iVar6 = bVar1 + 1;
              if ((char)bVar1 < '\0') {
                iVar6 = 1;
                iVar4 = (bVar1 & 0x7f) + 1;
              }
              if (param_1 + param_2 < (uint3 *)((longlong)puVar8 + (ulonglong)(uint)(iVar6 * 3) + 1)
                 ) goto LAB_14698c4b1;
              puVar8 = (uint3 *)((longlong)puVar8 + 1);
LAB_14698c507:
              uVar5 = *puVar8 | 0xff000000;
              puVar8 = (uint3 *)((longlong)puVar8 + 3);
              iVar6 = iVar6 + -1;
              iVar4 = iVar4 + -1;
            }
            else {
              iVar4 = iVar4 + -1;
LAB_14698c4fc:
              if (0 < iVar6) goto LAB_14698c507;
              iVar6 = 0;
            }
            *(uint *)(uVar11 * lVar7 + param_3 + uVar12 * 4) = uVar5;
            uVar12 = uVar12 + 1;
            uVar10 = *(ushort *)(param_1 + 0xc);
            uVar11 = (ulonglong)uVar10;
          } while (uVar12 < uVar11);
        }
        bVar2 = 1 < (longlong)uVar9;
        uVar9 = uVar9 - 1;
      } while (bVar2);
    }
  }
  return uVar3;
}



// FUNCTION 14698c5a6 FUN_14698c5a6 body=418 status=ok
// SIG undefined FUN_14698c5a6(void)

undefined8 FUN_14698c5a6(byte *param_1,ulonglong param_2,longlong param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  byte *pbVar10;
  ushort uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  
  if ((param_2 < 0x12) ||
     (lVar9 = (ulonglong)*param_1 +
              (ulonglong)*(ushort *)(param_1 + 5) * (ulonglong)(param_1[7] + 7 >> 3) + 0x12,
     pbVar10 = param_1 + lVar9, pbVar10 == (byte *)0x0 || (longlong)param_2 < lVar9)) {
LAB_14698c5e8:
    uVar4 = 0;
  }
  else {
    uVar5 = (ulonglong)*(ushort *)(param_1 + 0xe);
    uVar4 = 1;
    if (uVar5 != 0) {
      uVar11 = *(ushort *)(param_1 + 0xc);
      lVar9 = uVar5 * 4;
      uVar8 = 0;
      iVar7 = 0;
      uVar14 = 0;
      do {
        lVar9 = lVar9 + -4;
        if (uVar11 == 0) {
          uVar11 = 0;
        }
        else {
          uVar6 = (ulonglong)uVar11;
          uVar12 = 0;
          do {
            if (iVar7 < 1) {
              if ((int)uVar8 != 0) goto LAB_14698c638;
              if (param_1 + param_2 <= pbVar10) goto LAB_14698c5e8;
              bVar1 = *pbVar10;
              iVar3 = (bVar1 & 0x7f) + 1;
              if (-1 < (char)bVar1) {
                iVar3 = iVar7;
              }
              iVar7 = iVar3;
              uVar8 = (ulonglong)(bVar1 + 1);
              if (-1 >= (char)bVar1) {
                uVar8 = 1;
              }
              if (param_1 + param_2 < pbVar10 + uVar8 * 2 + 1) goto LAB_14698c5e8;
              pbVar10 = pbVar10 + 1;
LAB_14698c643:
              uVar14 = (uint)pbVar10[1] * 0x100;
              uVar13 = *pbVar10 & 0x1f;
              uVar14 = (uVar14 & 0x8000) * 0x1fe00 | (uVar13 << 5 | uVar13) >> 2 |
                       (uVar14 & 0x7c00) * 0x210 & 0xff0000 |
                       (*pbVar10 + uVar14 & 0x3e0) * 0x42 & 0xff00;
              pbVar10 = pbVar10 + 2;
              uVar8 = (ulonglong)((int)uVar8 - 1);
              iVar7 = iVar7 + -1;
            }
            else {
              iVar7 = iVar7 + -1;
LAB_14698c638:
              if (0 < (int)uVar8) goto LAB_14698c643;
              uVar8 = 0;
            }
            *(uint *)(uVar6 * lVar9 + param_3 + uVar12 * 4) = uVar14;
            uVar12 = uVar12 + 1;
            uVar11 = *(ushort *)(param_1 + 0xc);
            uVar6 = (ulonglong)uVar11;
          } while (uVar12 < uVar6);
        }
        uVar6 = uVar5 - 1;
        bVar2 = 1 < (longlong)uVar5;
        uVar5 = uVar6;
      } while (bVar2);
      uVar4 = CONCAT71((int7)(uVar6 >> 8),1);
    }
  }
  return uVar4;
}



// FUNCTION 14698c748 FUN_14698c748 body=188 status=ok
// SIG undefined FUN_14698c748(void)

ulonglong FUN_14698c748(byte *param_1,ulonglong param_2,longlong param_3)

{
  ushort uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (0x11 < param_2) {
    lVar3 = (ulonglong)*param_1 +
            (ulonglong)*(ushort *)(param_1 + 5) * (ulonglong)(param_1[7] + 7 >> 3) + 0x12;
    if ((param_1 + lVar3 != (byte *)0x0 && lVar3 <= (longlong)param_2) &&
       (uVar2 = (ulonglong)*(ushort *)(param_1 + 0xe),
       (ulonglong)*(ushort *)(param_1 + 0xc) * 4 * uVar2 + lVar3 <= param_2)) {
      uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
      if (uVar2 != 0) {
        lVar6 = -1;
        uVar5 = 0;
        do {
          uVar1 = *(ushort *)(param_1 + 0xc);
          memcpy((void *)(param_3 + uVar5 * uVar1 * 4),
                 param_1 + lVar3 + (uVar2 + lVar6) * (ulonglong)uVar1 * 4,(ulonglong)uVar1 << 2);
          uVar5 = uVar5 + 1;
          uVar2 = (ulonglong)*(ushort *)(param_1 + 0xe);
          lVar6 = lVar6 + -1;
        } while (uVar5 < uVar2);
      }
      goto LAB_14698c7ae;
    }
  }
  uVar4 = 0;
LAB_14698c7ae:
  return uVar4 & 0xffffffff;
}



// FUNCTION 14698c804 FUN_14698c804 body=238 status=ok
// SIG undefined FUN_14698c804(void)

undefined8 FUN_14698c804(byte *param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (0x11 < param_2) {
    lVar5 = (ulonglong)*param_1 +
            (ulonglong)*(ushort *)(param_1 + 5) * (ulonglong)(param_1[7] + 7 >> 3);
    lVar6 = lVar5 + 0x12;
    if (param_1 + lVar6 != (byte *)0x0 && lVar6 <= (longlong)param_2) {
      uVar3 = (ulonglong)*(ushort *)(param_1 + 0xc);
      uVar9 = (ulonglong)*(ushort *)(param_1 + 0xe);
      if (uVar3 * uVar9 * 3 + lVar6 <= param_2) {
        uVar2 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
        if (*(ushort *)(param_1 + 0xe) == 0) {
          return uVar2;
        }
        lVar6 = -1;
        lVar7 = 0;
        uVar8 = 0;
        do {
          if ((short)uVar3 == 0) {
            uVar3 = 0;
          }
          else {
            uVar9 = 0;
            pbVar4 = param_1 + lVar5 + 0x14;
            do {
              lVar1 = ((ulonglong)*(ushort *)(param_1 + 0xe) + lVar6) * uVar3 * 3;
              *(uint *)(uVar3 * lVar7 + param_3 + uVar9 * 4) =
                   CONCAT12(pbVar4[lVar1],*(undefined2 *)(pbVar4 + lVar1 + -2)) | 0xff000000;
              uVar9 = uVar9 + 1;
              uVar3 = (ulonglong)*(ushort *)(param_1 + 0xc);
              pbVar4 = pbVar4 + 3;
            } while (uVar9 < uVar3);
            uVar9 = (ulonglong)*(ushort *)(param_1 + 0xe);
          }
          uVar8 = uVar8 + 1;
          lVar7 = lVar7 + 4;
          lVar6 = lVar6 + -1;
        } while (uVar8 < uVar9);
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 14698c8f2 FUN_14698c8f2 body=282 status=ok
// SIG undefined FUN_14698c8f2(void)

undefined8 FUN_14698c8f2(byte *param_1,ulonglong param_2,longlong param_3)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  if (0x11 < param_2) {
    lVar4 = (ulonglong)*param_1 +
            (ulonglong)*(ushort *)(param_1 + 5) * (ulonglong)(param_1[7] + 7 >> 3) + 0x12;
    pbVar8 = param_1 + lVar4;
    if (pbVar8 != (byte *)0x0 && lVar4 <= (longlong)param_2) {
      uVar1 = *(ushort *)(param_1 + 0xe);
      uVar9 = (ulonglong)uVar1;
      uVar6 = (ulonglong)*(ushort *)(param_1 + 0xc);
      if (((uint)uVar1 + (uint)uVar1) * uVar6 + lVar4 <= param_2) {
        uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
        if (uVar9 == 0) {
          return uVar5;
        }
        lVar4 = uVar9 * 4;
        do {
          lVar4 = lVar4 + -4;
          if ((short)uVar6 == 0) {
            uVar6 = 0;
          }
          else {
            uVar10 = 0;
            do {
              uVar3 = (uint)pbVar8[1] * 0x100;
              uVar7 = *pbVar8 & 0x1f;
              *(uint *)(uVar6 * lVar4 + param_3 + uVar10 * 4) =
                   (uVar3 & 0x8000) * 0x1fe00 | (uVar7 << 5 | uVar7) >> 2 |
                   (uVar3 & 0x7c00) * 0x210 & 0xff0000 | (uVar3 + *pbVar8 & 0x3e0) * 0x42 & 0xff00;
              pbVar8 = pbVar8 + 2;
              uVar10 = uVar10 + 1;
              uVar6 = (ulonglong)*(ushort *)(param_1 + 0xc);
            } while (uVar10 < uVar6);
          }
          bVar2 = 1 < (longlong)uVar9;
          uVar9 = uVar9 - 1;
        } while (bVar2);
        return uVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 14698ca0c FUN_14698ca0c body=167 status=ok
// SIG undefined FUN_14698ca0c(void)

ulonglong FUN_14698ca0c(byte *param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  ulonglong _Size;
  ulonglong uVar4;
  
  if (0x11 < param_2) {
    lVar1 = (ulonglong)*param_1 +
            (ulonglong)*(ushort *)(param_1 + 5) * (ulonglong)(param_1[7] + 7 >> 3) + 0x12;
    if ((param_1 + lVar1 != (byte *)0x0 && lVar1 <= (longlong)param_2) &&
       (uVar4 = (ulonglong)*(ushort *)(param_1 + 0xe),
       *(ushort *)(param_1 + 0xc) * uVar4 + lVar1 <= param_2)) {
      uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
      if (uVar4 != 0) {
        lVar2 = 0;
        do {
          uVar4 = uVar4 - 1;
          _Size = (ulonglong)*(ushort *)(param_1 + 0xc);
          memcpy((void *)(lVar2 * _Size + param_3),param_1 + lVar1 + uVar4 * _Size,_Size);
          lVar2 = lVar2 + 1;
        } while (uVar4 != 0);
      }
      goto LAB_14698ca6d;
    }
  }
  uVar3 = 0;
LAB_14698ca6d:
  return uVar3 & 0xffffffff;
}



// FUNCTION 14698cab4 FUN_14698cab4 body=23 status=ok
// SIG undefined FUN_14698cab4(void)

undefined8 FUN_14698cab4(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x20))();
  return param_2;
}



// FUNCTION 14698cacc FUN_14698cacc body=4 status=ok
// SIG undefined FUN_14698cacc(void)

undefined4 FUN_14698cacc(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}



// FUNCTION 14698cad0 FUN_14698cad0 body=4 status=ok
// SIG undefined FUN_14698cad0(void)

undefined1 FUN_14698cad0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x40);
}



// FUNCTION 14698cad4 FUN_14698cad4 body=38 status=ok
// SIG undefined FUN_14698cad4(void)

undefined8 FUN_14698cad4(undefined8 param_1,int param_2)

{
  FUN_1469a33a0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698cafa FUN_14698cafa body=60 status=ok
// SIG undefined FUN_14698cafa(void)

undefined8 * FUN_14698cafa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149ef5190;
  FUN_1469a328e(param_1 + 0xd);
  FUN_1469a33a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698cb36 FUN_14698cb36 body=38 status=ok
// SIG undefined FUN_14698cb36(void)

undefined8 FUN_14698cb36(undefined8 param_1,int param_2)

{
  FUN_1469a33a0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698cb5c FUN_14698cb5c body=60 status=ok
// SIG undefined FUN_14698cb5c(void)

undefined8 * FUN_14698cb5c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149ef5ad0;
  FUN_14698a2e2(param_1 + 0xd);
  FUN_1469a33a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698cb98 FUN_14698cb98 body=38 status=ok
// SIG undefined FUN_14698cb98(void)

undefined8 FUN_14698cb98(undefined8 param_1,int param_2)

{
  FUN_14698a3ea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698cbbe FUN_14698cbbe body=38 status=ok
// SIG undefined FUN_14698cbbe(void)

undefined8 FUN_14698cbbe(undefined8 param_1,int param_2)

{
  FUN_1469a33a0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698cbe4 FUN_14698cbe4 body=38 status=ok
// SIG undefined FUN_14698cbe4(void)

undefined8 FUN_14698cbe4(undefined8 param_1,int param_2)

{
  FUN_14698ae2a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698cc0a FUN_14698cc0a body=99 status=ok
// SIG undefined FUN_14698cc0a(void)

void FUN_14698cc0a(longlong param_1)

{
  FUN_140d488e8();
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_144b77790();
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined2 *)(param_1 + 0x80) = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_140d2d4a8(param_1 + 0x98,0);
    return;
  }
  return;
}



// FUNCTION 14698cc6e FUN_14698cc6e body=38 status=ok
// SIG undefined FUN_14698cc6e(void)

undefined8 FUN_14698cc6e(undefined8 param_1,int param_2)

{
  FUN_1469a33a0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698cc96 FUN_14698cc96 body=48 status=ok
// SIG undefined FUN_14698cc96(void)

void FUN_14698cc96(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14698ccc6 FUN_14698ccc6 body=50 status=ok
// SIG undefined FUN_14698ccc6(void)

undefined8 * FUN_14698ccc6(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8,param_1 + 1);
  return param_1;
}



// FUNCTION 14698ccf8 FUN_14698ccf8 body=38 status=ok
// SIG undefined FUN_14698ccf8(void)

undefined8 FUN_14698ccf8(undefined8 param_1,int param_2)

{
  FUN_144b6b720();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698cd1e FUN_14698cd1e body=201 status=ok
// SIG undefined FUN_14698cd1e(void)

bool FUN_14698cd1e(longlong param_1,void *param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte bVar3;
  ulonglong _Size;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [40];
  undefined **local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(ulonglong *)(param_1 + 0x38);
  _Size = (ulonglong)param_3;
  if ((longlong)uVar2 < 0) {
    uVar5 = 0;
    bVar3 = 1;
  }
  else {
    uVar1 = uVar2 + _Size;
    uVar6 = (uVar1 ^ _Size) & (uVar1 ^ uVar2);
    bVar3 = (byte)(uVar6 >> 0x3f);
    uVar5 = 0;
    if (-1 < (longlong)uVar6) {
      uVar5 = uVar1;
    }
  }
  if (((-1 < param_3) && ((longlong)uVar5 <= *(longlong *)(param_1 + 0x30))) &&
     (bVar3 == 0 && -1 < *(longlong *)(param_1 + 0x30))) {
    memcpy(param_2,(void *)(uVar2 + *(longlong *)(param_1 + 0x28)),_Size);
    lVar4 = _Size + *(longlong *)(param_1 + 0x38);
    *(longlong *)(param_1 + 0x38) = lVar4;
    if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return lVar4 != *(longlong *)(param_1 + 0x30);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  local_30 = std::exception::vftable;
  local_28 = 0;
  uStack_20 = 0;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_30,(ThrowInfo *)&DAT_14c0d31b0);
}



// FUNCTION 14698cdf6 FUN_14698cdf6 body=52 status=ok
// SIG undefined FUN_14698cdf6(void)

undefined8 * FUN_14698cdf6(undefined8 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698ce2a FUN_14698ce2a body=19 status=ok
// SIG undefined FUN_14698ce2a(void)

char * FUN_14698ce2a(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}



// FUNCTION 14698ce3e FUN_14698ce3e body=114 status=ok
// SIG undefined FUN_14698ce3e(void)

longlong * FUN_14698ce3e(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_14001cc68(0x130,0x10);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  FUN_14698ced2(param_1,param_2);
  FUN_14698cf42();
  return param_1;
}



// FUNCTION 14698ceb0 Unwind@14698ceb0 body=34 status=ok
// SIG undefined Unwind@14698ceb0(void)

void Unwind_14698ceb0(undefined8 param_1,longlong param_2)

{
  FUN_14698cf42(param_2 + 0x28);
  return;
}



// FUNCTION 14698ced2 FUN_14698ced2 body=112 status=ok
// SIG undefined FUN_14698ced2(void)

void FUN_14698ced2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  uVar4 = FUN_14698cf8a(param_1,*(undefined8 *)(*param_2 + 8),*param_1);
  *(undefined8 *)(*param_1 + 8) = uVar4;
  param_1[1] = param_2[1];
  plVar1 = (longlong *)*param_1;
  plVar2 = (longlong *)plVar1[1];
  if (*(char *)(plVar1[1] + 0x19) == '\0') {
    do {
      plVar7 = plVar2;
      plVar2 = (longlong *)*plVar7;
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
    *plVar1 = (longlong)plVar7;
    lVar5 = *param_1;
    lVar3 = *(longlong *)(lVar5 + 8);
    do {
      lVar6 = lVar3;
      lVar3 = *(longlong *)(lVar6 + 0x10);
    } while (*(char *)(*(longlong *)(lVar6 + 0x10) + 0x19) == '\0');
  }
  else {
    *plVar1 = (longlong)plVar1;
    lVar5 = *param_1;
    lVar6 = lVar5;
  }
  *(longlong *)(lVar5 + 0x10) = lVar6;
  return;
}



// FUNCTION 14698cf42 FUN_14698cf42 body=51 status=ok
// SIG undefined FUN_14698cf42(void)

void FUN_14698cf42(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[1];
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  FUN_14698d0c2(plVar1,*param_1,*(undefined8 *)(*plVar1 + 8));
  FUN_1400020a8(*plVar1);
  return;
}



// FUNCTION 14698cf8a FUN_14698cf8a body=187 status=ok
// SIG undefined FUN_14698cf8a(void)

longlong * FUN_14698cf8a(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)*param_1;
  if (*(char *)((longlong)param_2 + 0x19) == '\0') {
    plVar1 = (longlong *)FUN_14001cc68(0x130,0x10);
    memcpy((void *)((longlong)plVar1 + 0x1c),(void *)((longlong)param_2 + 0x1c),0x110);
    *plVar1 = (longlong)plVar3;
    plVar1[2] = (longlong)plVar3;
    *(undefined1 *)((longlong)plVar1 + 0x19) = 0;
    plVar1[1] = param_3;
    *(undefined1 *)(plVar1 + 3) = *(undefined1 *)(param_2 + 3);
    if (*(char *)((longlong)plVar3 + 0x19) != '\0') {
      plVar3 = plVar1;
    }
    lVar2 = FUN_14698cf8a(param_1,*param_2,plVar1);
    *plVar1 = lVar2;
    lVar2 = FUN_14698cf8a(param_1,param_2[2],plVar1);
    plVar1[2] = lVar2;
  }
  return plVar3;
}



// FUNCTION 14698d046 Catch_All@14698d046 body=48 status=ok
// SIG undefined Catch_All@14698d046(void)

void Catch_All_14698d046(undefined8 param_1,longlong param_2)

{
  FUN_14698d078(*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x28),
                *(undefined8 *)(param_2 + 0x30));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 14698d078 FUN_14698d078 body=73 status=ok
// SIG undefined FUN_14698d078(void)

void FUN_14698d078(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_14698d078(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_1400020a8(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// FUNCTION 14698d0c2 FUN_14698d0c2 body=73 status=ok
// SIG undefined FUN_14698d0c2(void)

void FUN_14698d0c2(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_14698d0c2(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_1400020a8(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// FUNCTION 14698d10c FUN_14698d10c body=38 status=ok
// SIG undefined FUN_14698d10c(void)

undefined8 FUN_14698d10c(undefined8 param_1,int param_2)

{
  FUN_1469892f6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698d132 FUN_14698d132 body=118 status=ok
// SIG undefined FUN_14698d132(void)

void FUN_14698d132(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_3;
  lVar1 = *(longlong *)(param_1 + 0x28) + lVar4;
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (lVar2 < lVar1) {
    lVar3 = lVar2 * 2;
    if (lVar2 * 2 < lVar1) {
      lVar3 = lVar1;
    }
    *(longlong *)(param_1 + 0x38) = lVar3;
    if ((ulonglong)(*(longlong *)(param_1 + 0x40) - lVar2) < (ulonglong)(lVar3 - lVar2)) {
      FUN_14112c458(param_1 + 0x30);
    }
  }
  if (0 < param_3) {
    lVar2 = 0;
    do {
      *(undefined1 *)(lVar2 + *(longlong *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x28)) =
           *(undefined1 *)(param_2 + lVar2);
      lVar2 = lVar2 + 1;
    } while (lVar4 != lVar2);
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + lVar4;
  return;
}



// FUNCTION 14698d1ae FUN_14698d1ae body=73 status=ok
// SIG undefined FUN_14698d1ae(void)

void FUN_14698d1ae(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_14698d1ae(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_1400020a8(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// FUNCTION 14698d1f8 FUN_14698d1f8 body=128 status=ok
// SIG undefined FUN_14698d1f8(void)

longlong * FUN_14698d1f8(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_2[1] = 0;
    param_2[2] = 0;
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    param_1[3] = param_2[3];
    param_2[3] = 0;
    *(int *)(param_1 + 4) = (int)param_2[4];
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    param_2[4] = 0;
  }
  *(short *)(param_1 + 5) = (short)param_2[5];
  return param_1;
}



// FUNCTION 14698d278 FUN_14698d278 body=47 status=ok
// SIG undefined FUN_14698d278(void)

void FUN_14698d278(longlong *param_1)

{
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14698d2a7 FUN_14698d2a7 body=1 status=ok
// SIG undefined FUN_14698d2a7(void)

void FUN_14698d2a7(void)

{
  return;
}



// FUNCTION 14698d2a8 FUN_14698d2a8 body=63 status=ok
// SIG undefined FUN_14698d2a8(void)

void FUN_14698d2a8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14698d2e8(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 14698d2e8 FUN_14698d2e8 body=97 status=ok
// SIG undefined FUN_14698d2e8(void)

ulonglong FUN_14698d2e8(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 14698d349 FUN_14698d349 body=47 status=ok
// SIG undefined FUN_14698d349(void)

void FUN_14698d349(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 14698d378 FUN_14698d378 body=48 status=ok
// SIG undefined FUN_14698d378(void)

void FUN_14698d378(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14698d3a8 FUN_14698d3a8 body=132 status=ok
// SIG undefined FUN_14698d3a8(void)

void FUN_14698d3a8(longlong param_1,int param_2)

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



// FUNCTION 14698d42e FUN_14698d42e body=147 status=ok
// SIG undefined FUN_14698d42e(void)

void FUN_14698d42e(longlong param_1,int param_2)

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



// FUNCTION 14698d4c2 FUN_14698d4c2 body=98 status=ok
// SIG undefined FUN_14698d4c2(void)

void FUN_14698d4c2(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x18 + *param_1);
  FUN_145c74b7c(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar2 * 0x18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14698d524 FUN_14698d524 body=62 status=ok
// SIG undefined FUN_14698d524(void)

void FUN_14698d524(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14698d562(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 14698d562 FUN_14698d562 body=112 status=ok
// SIG undefined FUN_14698d562(void)

ulonglong FUN_14698d562(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14698d59c;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_14698d59c:
  return param_2 & 0xffffffff;
}



// FUNCTION 14698d5d2 FUN_14698d5d2 body=154 status=ok
// SIG undefined FUN_14698d5d2(void)

int FUN_14698d5d2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_res18 = param_3;
  local_res20 = param_4;
  local_28 = &local_res18;
  puVar3 = (ulonglong *)FUN_144737586();
  local_38 = 0;
  local_30 = &local_res18;
  iVar1 = __stdio_common_vsprintf(*puVar3 | 2,param_1,0x400,param_2);
  iVar2 = -1;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (0x3ff < iVar1) {
    iVar2 = -1;
  }
  if (0x3ff < iVar2) {
    iVar2 = -1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14698d688 FUN_14698d688 body=29 status=ok
// SIG undefined FUN_14698d688(void)

undefined8 FUN_14698d688(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698d6c0 FUN_14698d6c0 body=29 status=ok
// SIG undefined FUN_14698d6c0(void)

undefined8 FUN_14698d6c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698d6de FUN_14698d6de body=116 status=ok
// SIG undefined FUN_14698d6de(void)

void FUN_14698d6de(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ushort uVar4;
  undefined8 uVar5;
  int iVar6;
  short sVar7;
  longlong *plVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  DWORD DVar12;
  DWORD DVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined4 *puVar16;
  uint *puVar17;
  undefined8 *puVar18;
  undefined8 in_RAX;
  undefined8 *puVar19;
  undefined1 *puVar20;
  longlong *plVar21;
  byte bVar22;
  undefined1 uVar23;
  uint uVar24;
  int iVar25;
  ulonglong uVar26;
  int iVar27;
  byte bVar28;
  int iVar29;
  bool bVar30;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 uStack_1c8;
  undefined4 auStack_1c0 [2];
  longlong lStack_1b8;
  undefined4 *puStack_1b0;
  undefined1 uStack_1a8;
  char cStack_1a7;
  byte bStack_1a6;
  int iStack_1a4;
  int iStack_1a0;
  undefined8 *puStack_198;
  int *piStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong *plStack_140;
  longlong *plStack_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 **ppuStack_100;
  longlong *plStack_f8;
  int iStack_f0;
  int iStack_ec;
  undefined8 **ppuStack_e8;
  longlong *plStack_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined8 uStack_c8;
  short sStack_ba;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  int iStack_8c;
  undefined8 **ppuStack_88;
  longlong *plStack_80;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  
  cVar9 = (char)param_2;
  uVar4 = *(ushort *)(param_1 + 0x7e);
  uVar26 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar4 == 3 && cVar9 == '\x04');
  if (uVar4 == ((ushort)param_2 & 0xff) || uVar4 == 3 && cVar9 == '\x04') {
    if (param_3 == '\0') {
      FUN_142886b5e(param_1,param_2,uVar26 & 0xffffffff);
      return;
    }
    FUN_142885d42(param_1,param_2,uVar26 & 0xffffffff);
    return;
  }
  if (uVar4 != 2 || cVar9 != '\x04') {
    FUN_14020fad6(param_1 + 0x58,L"Tiff, Unsupported conversion of sample data format.");
    return;
  }
  if (param_3 == '\0') {
    FUN_142888da0();
    return;
  }
  uStack_60 = 0xfffffffffffffffe;
  FUN_144b77940(*(undefined8 *)(param_1 + 0x70));
  FUN_144b77ad0(*(undefined8 *)(param_1 + 0x70));
  uStack_1d8 = *(undefined4 *)(param_1 + 0x98);
  uStack_1d4 = *(undefined4 *)(param_1 + 0x9c);
  uStack_1d0 = *(undefined4 *)(param_1 + 0xa0);
  uStack_1cc = *(undefined4 *)(param_1 + 0xa4);
  sStack_ba = 0;
  FUN_144b7a120(*(undefined8 *)(param_1 + 0x70),0x11c,&sStack_ba);
  sVar7 = sStack_ba;
  bVar28 = 1;
  bVar30 = sStack_ba == 2;
  if (!bVar30) {
    bVar28 = *(byte *)(param_1 + 0x7e);
  }
  iStack_70 = *(int *)(param_1 + 0x88);
  iStack_6c = *(int *)(param_1 + 0x90);
  iVar10 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x142);
  if ((iVar10 == 0) ||
     (iVar10 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x143,&iStack_6c), iVar10 == 0)) {
    FUN_14020fad6(param_1 + 0x58,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  uStack_1c8 = 0;
  auStack_1c0[0] = 0;
  uStack_1c8 = FUN_144b77940(uVar5);
  FUN_144b77e20(uVar5,0x100,auStack_1c0);
  puStack_1b0 = &uStack_1d8;
  uStack_1a8 = 4;
  iStack_1a4 = iStack_70;
  iStack_1a0 = iStack_6c;
  puStack_198 = &uStack_1c8;
  bVar22 = 1;
  if (sVar7 == 2) {
    bVar22 = (byte)*(undefined2 *)(param_1 + 0x7e);
  }
  lStack_1b8 = param_1;
  cStack_1a7 = bVar30 * '\x03' + '\x01';
  bStack_1a6 = bVar28;
  puStack_a8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puStack_a8 = 0;
  puStack_a8[1] = 0;
  puStack_a8[2] = 0;
  puStack_158 = (undefined1 *)0x0;
  uStack_150 = 0x400000000;
  puStack_a0 = puStack_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar10 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar10 != 2)) {
    uStack_74 = 0xff;
    if (iVar10 != 1) goto LAB_1428882c9;
    DVar12 = FUN_140ad26c0();
    DVar13 = GetCurrentThreadId();
    if (DVar12 != DVar13) goto LAB_1428882c9;
  }
  uStack_74 = 1;
LAB_1428882c9:
  uStack_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (uStack_180 < (ulonglong)(longlong)(int)((uint)bVar28 * iStack_6c * iStack_70) >> 3) {
    FUN_14020fad6(param_1 + 0x58,
                  L"Tiff tiles are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    iVar10 = FUN_144b7b020(*(undefined8 *)(param_1 + 0x70));
    if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar10);
    }
    if ((int)uStack_150._4_4_ < iVar10) {
      FUN_14473dbc4(auStack_178,iVar10);
    }
    lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar15 + 0x308);
    puStack_b0 = (undefined8 *)(lVar15 + 0x310);
    piStack_190 = (int *)(lVar15 + 0xc60);
    uStack_b4 = (uint)bVar22;
    for (uStack_c8 = 0; uStack_b8 = (uint)uStack_c8 & 0xff, uStack_b8 < uStack_b4;
        uStack_c8 = CONCAT71((int7)((ulonglong)uStack_c8 >> 8),(char)uStack_c8 + '\x01')) {
      iStack_8c = 0;
      for (iVar10 = 0; lVar15 = *(longlong *)(param_1 + 0x90), iVar10 < lVar15;
          iVar10 = iVar10 + iStack_6c) {
        iVar6 = (int)lVar15 - iVar10;
        if (iStack_6c + iVar10 <= lVar15) {
          iVar6 = iStack_6c;
        }
        iVar27 = 0;
        iVar29 = 0;
LAB_1428883c4:
        if ((longlong)iVar27 < *(longlong *)(param_1 + 0x88)) {
          ppuStack_88 = (undefined8 **)0x0;
          plStack_80 = (longlong *)0x0;
          cVar9 = FUN_14698d83a(&puStack_a8,&ppuStack_88);
          if (cVar9 == '\0') {
            plStack_f8 = (longlong *)FUN_14001cc68(0x28,0x10);
            plVar21 = plStack_80;
            plStack_f8[1] = (longlong)&DAT_100000001;
            *plStack_f8 = (longlong)&PTR_LAB_149ef6700;
            ppuStack_100 = (undefined8 **)(plStack_f8 + 2);
            plStack_f8[2] = 0;
            plStack_f8[3] = 0;
            plStack_f8[4] = 0;
            if (plStack_f8 == (longlong *)0x0) {
              plVar14 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plStack_f8 + 1) = (int)plStack_f8[1] + 1;
              UNLOCK();
              plVar14 = plStack_f8;
            }
            lStack_148 = 0;
            plStack_140 = plStack_f8;
            ppuStack_88 = ppuStack_100;
            plVar8 = plStack_80;
            if ((plVar14 != plStack_80) &&
               (plStack_140 = (longlong *)0x0, plVar8 = plVar14, plStack_80 != (longlong *)0x0)) {
              LOCK();
              plVar1 = plStack_80 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                puVar19 = (undefined8 *)*plStack_80;
                plStack_80 = plVar14;
                (*(code *)*puVar19)(plVar21);
                LOCK();
                piVar2 = (int *)((longlong)plVar21 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                plVar8 = plStack_80;
                if (*piVar2 == 0) {
                  (**(code **)(*plVar21 + 0x10))(plVar21);
                  plVar8 = plStack_80;
                }
              }
            }
            plStack_80 = plVar8;
            FUN_14698d952(&lStack_148);
            FUN_14698d9aa(&ppuStack_100);
            puVar19 = ppuStack_88[1];
            ppuStack_88[1] = (undefined8 *)((longlong)puVar19 + uStack_180);
            if ((ulonglong)((longlong)ppuStack_88[2] - (longlong)puVar19) < uStack_180) {
              FUN_14112c458();
            }
          }
          lVar15 = FUN_144b82d60(*(undefined8 *)(param_1 + 0x70),*ppuStack_88,iVar27,iVar10,0,
                                 (short)uStack_b8);
          if (-1 < lVar15) {
            iStack_f0 = (int)*(longlong *)(param_1 + 0x88) - iVar27;
            if ((longlong)(iStack_70 + iVar27) <= *(longlong *)(param_1 + 0x88)) {
              iStack_f0 = iStack_70;
            }
            ppuStack_100 = &puStack_a8;
            plStack_f8 = &lStack_1b8;
            ppuStack_e8 = ppuStack_88;
            plStack_e0 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
            }
            uStack_d8 = CONCAT31(uStack_d8._1_3_,(char)uStack_c8);
            iStack_d0 = iStack_8c;
            puVar17 = (uint *)*puVar3;
            iStack_ec = iVar6;
            iStack_d4 = iVar29;
            if (puVar17 != (uint *)0x0) goto LAB_142888616;
LAB_1428885ac:
            uVar24 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar24 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar24 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar16 = (undefined4 *)*puStack_b0;
            *puStack_b0 = 0;
            if (puVar16 == (undefined4 *)0x0) {
              puVar16 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar16 = 0xffffffff;
            *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar3 = puVar16;
            FUN_140217a48(puVar3);
            puVar17 = (uint *)*puVar3;
LAB_142888616:
            uVar26 = *(longlong *)(puVar17 + 0x10) + 0xf;
            uVar24 = puVar17[0x12];
            do {
              puVar19 = (undefined8 *)(uVar26 & 0xfffffffffffffff0);
              if (puVar19 + 0x20 <= puVar17 + 0x4000) {
                *(undefined8 **)(puVar17 + 0x10) = puVar19 + 0x20;
                puVar17[0x12] = uVar24 + 1;
                uStack_188 = uVar26;
                puStack_68 = puVar19;
                FUN_1447247dc(puVar19,0);
                puVar19 = puStack_68;
                *puStack_68 = &PTR_FUN_149ef6718;
                lStack_148 = 0;
                plStack_138 = (longlong *)0x0;
                puVar18 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar18 = &PTR_LAB_149ef6940;
                puVar18[1] = ppuStack_100;
                puVar18[2] = plStack_f8;
                puVar18[3] = CONCAT44(iStack_ec,iStack_f0);
                puVar18[4] = ppuStack_e8;
                puVar18[5] = plStack_e0;
                ppuStack_e8 = (undefined8 **)0x0;
                plStack_e0 = (longlong *)0x0;
                *(int *)(puVar18 + 7) = iStack_d0;
                puVar18[6] = CONCAT44(iStack_d4,uStack_d8);
                if (puVar18 + 1 == (longlong *)0x0) {
                  puVar19[0x16] = lStack_148;
                  puVar19[0x18] = puVar18;
                  *(undefined4 *)(puVar19 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar19 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar19 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar19 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar19 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar19 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar19 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar19 + 0xdc) = uStack_11c;
                  if (lStack_148 != 0) goto LAB_1428887a5;
                }
                else {
                  puVar19[0x16] = &LAB_14698e2c4;
                  puVar19[0x18] = puVar18;
                  *(undefined4 *)(puVar19 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar19 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar19 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar19 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar19 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar19 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar19 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar19 + 0xdc) = uStack_11c;
LAB_1428887a5:
                  lStack_148 = 0;
                }
                plStack_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*piStack_190 != 2)) {
                  uVar26 = 0x8ff;
                  if (*piStack_190 != 1) goto LAB_1428887d8;
                  DVar12 = FUN_140ad26c0();
                  DVar13 = GetCurrentThreadId();
                  uVar24 = (uint)(DVar12 != DVar13) * 0x200 + 0x6ff;
                  uVar26 = (ulonglong)uVar24;
                  *(uint *)(puStack_68 + 0x1e) = uVar24;
                  puVar19 = puStack_68;
                  if (lStack_148 != 0) {
                    plVar21 = plStack_138;
                    if (plStack_138 == (longlong *)0x0) {
                      plVar21 = (longlong *)&uStack_128;
                    }
                    (**(code **)(*plVar21 + 0x10))();
                    uVar26 = (ulonglong)*(uint *)(puStack_68 + 0x1e);
                    puVar19 = puStack_68;
                  }
                }
                else {
                  uVar26 = 0x6ff;
LAB_1428887d8:
                  *(int *)(puVar19 + 0x1e) = (int)uVar26;
                }
                uVar24 = (uint)uVar26;
                if ((uVar24 & 0xff) == 0xff) {
                  uVar11 = (uint)(uVar26 >> 10) & 3;
                  iVar25 = 0;
                  if ((uVar24 >> 9 & 1) == 0 || uVar11 < 2) {
                    uVar23 = (&DAT_149e38edc)[uVar11];
                  }
                  else {
                    uVar23 = 2;
                  }
                }
                else {
                  iVar25 = (uVar24 >> 7 & 2 | (uint)(uVar26 >> 9) & 1) +
                           *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar24 & 0xff) * 4);
                  uVar23 = 5;
                }
                FUN_144a24082(puVar19,L"GraphTask",uVar23,iVar25,0);
                if (puVar19 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
                  UNLOCK();
                }
                lStack_148 = CONCAT71(lStack_148._1_7_,1);
                FUN_1447439e4(puVar19,&lStack_148);
                uVar26 = uStack_150;
                iVar25 = (int)uStack_150;
                uVar24 = (int)uStack_150 + 1;
                uStack_150 = CONCAT44(uStack_150._4_4_,uVar24);
                if (uStack_150._4_4_ < uVar24) {
                  FUN_14476a5c8(auStack_178,uVar26 & 0xffffffff);
                }
                puVar20 = puStack_158;
                if (puStack_158 == (undefined1 *)0x0) {
                  puVar20 = auStack_178;
                }
                *(undefined8 **)(puVar20 + (longlong)iVar25 * 8) = puStack_68;
                FUN_14698d952(&ppuStack_e8);
                FUN_14698d952(&ppuStack_88);
                iVar27 = iVar27 + iStack_70;
                iVar29 = iVar29 + 1;
                goto LAB_1428883c4;
              }
              *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
              LOCK();
              uVar11 = *puVar17;
              *puVar17 = *puVar17 + uVar24 + 1;
              UNLOCK();
              if ((uVar11 ^ uVar24) != 0xffffffff) goto LAB_1428885ac;
              puVar17 = (uint *)*puVar3;
              *puVar17 = 0xffffffff;
              *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
              puVar17[0x12] = 0;
              *puVar3 = puVar17;
              uVar26 = (longlong)puVar17 + 0x67;
              uVar24 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0x58,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&ppuStack_88);
          goto LAB_1428889fb;
        }
        iStack_8c = iStack_8c + 1;
      }
    }
  }
LAB_1428889fb:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,auStack_178,uStack_74);
  FUN_14588b8d6(auStack_178);
  while (puVar3 = puStack_a0, puStack_a0 != (undefined8 *)0x0) {
    puVar19 = puStack_a0 + 1;
    puStack_a0 = (undefined8 *)*puStack_a0;
    FUN_14698d952(puVar19);
    FUN_1400020a8(puVar3);
  }
  return;
}



// FUNCTION 14698d752 FUN_14698d752 body=116 status=ok
// SIG undefined FUN_14698d752(void)

void FUN_14698d752(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ushort uVar4;
  undefined8 uVar5;
  int iVar6;
  short sVar7;
  longlong *plVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  DWORD DVar12;
  DWORD DVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined4 *puVar16;
  uint *puVar17;
  undefined8 *puVar18;
  undefined8 in_RAX;
  undefined8 *puVar19;
  undefined1 *puVar20;
  longlong *plVar21;
  byte bVar22;
  undefined1 uVar23;
  uint uVar24;
  int iVar25;
  ulonglong uVar26;
  int iVar27;
  byte bVar28;
  int iVar29;
  bool bVar30;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 uStack_1c8;
  undefined4 auStack_1c0 [2];
  longlong lStack_1b8;
  undefined4 *puStack_1b0;
  undefined1 uStack_1a8;
  char cStack_1a7;
  byte bStack_1a6;
  int iStack_1a4;
  int iStack_1a0;
  undefined8 *puStack_198;
  int *piStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong *plStack_140;
  longlong *plStack_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 **ppuStack_100;
  longlong *plStack_f8;
  int iStack_f0;
  int iStack_ec;
  undefined8 **ppuStack_e8;
  longlong *plStack_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined8 uStack_c8;
  short sStack_ba;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  int iStack_8c;
  undefined8 **ppuStack_88;
  longlong *plStack_80;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  
  cVar9 = (char)param_2;
  uVar4 = *(ushort *)(param_1 + 0x7e);
  uVar26 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar4 == 3 && cVar9 == '\x04');
  if (uVar4 == ((ushort)param_2 & 0xff) || uVar4 == 3 && cVar9 == '\x04') {
    if (param_3 == '\0') {
      FUN_14288b06a(param_1,param_2,uVar26 & 0xffffffff);
      return;
    }
    FUN_14288a24e(param_1,param_2,uVar26 & 0xffffffff);
    return;
  }
  if (uVar4 != 2 || cVar9 != '\x04') {
    FUN_14020fad6(param_1 + 0x58,L"Tiff, Unsupported conversion of sample data format.");
    return;
  }
  if (param_3 == '\0') {
    FUN_14288d2ac();
    return;
  }
  uStack_60 = 0xfffffffffffffffe;
  FUN_144b77940(*(undefined8 *)(param_1 + 0x70));
  FUN_144b77ad0(*(undefined8 *)(param_1 + 0x70));
  uStack_1d8 = *(undefined4 *)(param_1 + 0x98);
  uStack_1d4 = *(undefined4 *)(param_1 + 0x9c);
  uStack_1d0 = *(undefined4 *)(param_1 + 0xa0);
  uStack_1cc = *(undefined4 *)(param_1 + 0xa4);
  sStack_ba = 0;
  FUN_144b7a120(*(undefined8 *)(param_1 + 0x70),0x11c,&sStack_ba);
  sVar7 = sStack_ba;
  bVar28 = 1;
  bVar30 = sStack_ba == 2;
  if (!bVar30) {
    bVar28 = *(byte *)(param_1 + 0x7e);
  }
  iStack_70 = *(int *)(param_1 + 0x88);
  iStack_6c = *(int *)(param_1 + 0x90);
  iVar10 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x142);
  if ((iVar10 == 0) ||
     (iVar10 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x143,&iStack_6c), iVar10 == 0)) {
    FUN_14020fad6(param_1 + 0x58,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  uStack_1c8 = 0;
  auStack_1c0[0] = 0;
  uStack_1c8 = FUN_144b77940(uVar5);
  FUN_144b77e20(uVar5,0x100,auStack_1c0);
  puStack_1b0 = &uStack_1d8;
  uStack_1a8 = 4;
  iStack_1a4 = iStack_70;
  iStack_1a0 = iStack_6c;
  puStack_198 = &uStack_1c8;
  bVar22 = 1;
  if (sVar7 == 2) {
    bVar22 = (byte)*(undefined2 *)(param_1 + 0x7e);
  }
  lStack_1b8 = param_1;
  cStack_1a7 = bVar30 * '\x03' + '\x01';
  bStack_1a6 = bVar28;
  puStack_a8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puStack_a8 = 0;
  puStack_a8[1] = 0;
  puStack_a8[2] = 0;
  puStack_158 = (undefined1 *)0x0;
  uStack_150 = 0x400000000;
  puStack_a0 = puStack_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar10 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar10 != 2)) {
    uStack_74 = 0xff;
    if (iVar10 != 1) goto LAB_14288c7d5;
    DVar12 = FUN_140ad26c0();
    DVar13 = GetCurrentThreadId();
    if (DVar12 != DVar13) goto LAB_14288c7d5;
  }
  uStack_74 = 1;
LAB_14288c7d5:
  uStack_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (uStack_180 < (ulonglong)(longlong)(int)((uint)bVar28 * iStack_6c * iStack_70) >> 2) {
    FUN_14020fad6(param_1 + 0x58,
                  L"Tiff tiles are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    iVar10 = FUN_144b7b020(*(undefined8 *)(param_1 + 0x70));
    if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar10);
    }
    if ((int)uStack_150._4_4_ < iVar10) {
      FUN_14473dbc4(auStack_178,iVar10);
    }
    lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar15 + 0x308);
    puStack_b0 = (undefined8 *)(lVar15 + 0x310);
    piStack_190 = (int *)(lVar15 + 0xc60);
    uStack_b4 = (uint)bVar22;
    for (uStack_c8 = 0; uStack_b8 = (uint)uStack_c8 & 0xff, uStack_b8 < uStack_b4;
        uStack_c8 = CONCAT71((int7)((ulonglong)uStack_c8 >> 8),(char)uStack_c8 + '\x01')) {
      iStack_8c = 0;
      for (iVar10 = 0; lVar15 = *(longlong *)(param_1 + 0x90), iVar10 < lVar15;
          iVar10 = iVar10 + iStack_6c) {
        iVar6 = (int)lVar15 - iVar10;
        if (iStack_6c + iVar10 <= lVar15) {
          iVar6 = iStack_6c;
        }
        iVar27 = 0;
        iVar29 = 0;
LAB_14288c8d0:
        if ((longlong)iVar27 < *(longlong *)(param_1 + 0x88)) {
          ppuStack_88 = (undefined8 **)0x0;
          plStack_80 = (longlong *)0x0;
          cVar9 = FUN_14698d83a(&puStack_a8,&ppuStack_88);
          if (cVar9 == '\0') {
            plStack_f8 = (longlong *)FUN_14001cc68(0x28,0x10);
            plVar21 = plStack_80;
            plStack_f8[1] = (longlong)&DAT_100000001;
            *plStack_f8 = (longlong)&PTR_LAB_149ef6700;
            ppuStack_100 = (undefined8 **)(plStack_f8 + 2);
            plStack_f8[2] = 0;
            plStack_f8[3] = 0;
            plStack_f8[4] = 0;
            if (plStack_f8 == (longlong *)0x0) {
              plVar14 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plStack_f8 + 1) = (int)plStack_f8[1] + 1;
              UNLOCK();
              plVar14 = plStack_f8;
            }
            lStack_148 = 0;
            plStack_140 = plStack_f8;
            ppuStack_88 = ppuStack_100;
            plVar8 = plStack_80;
            if ((plVar14 != plStack_80) &&
               (plStack_140 = (longlong *)0x0, plVar8 = plVar14, plStack_80 != (longlong *)0x0)) {
              LOCK();
              plVar1 = plStack_80 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                puVar19 = (undefined8 *)*plStack_80;
                plStack_80 = plVar14;
                (*(code *)*puVar19)(plVar21);
                LOCK();
                piVar2 = (int *)((longlong)plVar21 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                plVar8 = plStack_80;
                if (*piVar2 == 0) {
                  (**(code **)(*plVar21 + 0x10))(plVar21);
                  plVar8 = plStack_80;
                }
              }
            }
            plStack_80 = plVar8;
            FUN_14698d952(&lStack_148);
            FUN_14698d9aa(&ppuStack_100);
            puVar19 = ppuStack_88[1];
            ppuStack_88[1] = (undefined8 *)((longlong)puVar19 + uStack_180);
            if ((ulonglong)((longlong)ppuStack_88[2] - (longlong)puVar19) < uStack_180) {
              FUN_14112c458();
            }
          }
          lVar15 = FUN_144b82d60(*(undefined8 *)(param_1 + 0x70),*ppuStack_88,iVar27,iVar10,0,
                                 (short)uStack_b8);
          if (-1 < lVar15) {
            iStack_f0 = (int)*(longlong *)(param_1 + 0x88) - iVar27;
            if ((longlong)(iStack_70 + iVar27) <= *(longlong *)(param_1 + 0x88)) {
              iStack_f0 = iStack_70;
            }
            ppuStack_100 = &puStack_a8;
            plStack_f8 = &lStack_1b8;
            ppuStack_e8 = ppuStack_88;
            plStack_e0 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
            }
            uStack_d8 = CONCAT31(uStack_d8._1_3_,(char)uStack_c8);
            iStack_d0 = iStack_8c;
            puVar17 = (uint *)*puVar3;
            iStack_ec = iVar6;
            iStack_d4 = iVar29;
            if (puVar17 != (uint *)0x0) goto LAB_14288cb22;
LAB_14288cab8:
            uVar24 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar24 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar24 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar16 = (undefined4 *)*puStack_b0;
            *puStack_b0 = 0;
            if (puVar16 == (undefined4 *)0x0) {
              puVar16 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar16 = 0xffffffff;
            *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar3 = puVar16;
            FUN_140217a48(puVar3);
            puVar17 = (uint *)*puVar3;
LAB_14288cb22:
            uVar26 = *(longlong *)(puVar17 + 0x10) + 0xf;
            uVar24 = puVar17[0x12];
            do {
              puVar19 = (undefined8 *)(uVar26 & 0xfffffffffffffff0);
              if (puVar19 + 0x20 <= puVar17 + 0x4000) {
                *(undefined8 **)(puVar17 + 0x10) = puVar19 + 0x20;
                puVar17[0x12] = uVar24 + 1;
                uStack_188 = uVar26;
                puStack_68 = puVar19;
                FUN_1447247dc(puVar19,0);
                puVar19 = puStack_68;
                *puStack_68 = &PTR_FUN_149ef6718;
                lStack_148 = 0;
                plStack_138 = (longlong *)0x0;
                puVar18 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar18 = &PTR_LAB_149ef6a00;
                puVar18[1] = ppuStack_100;
                puVar18[2] = plStack_f8;
                puVar18[3] = CONCAT44(iStack_ec,iStack_f0);
                puVar18[4] = ppuStack_e8;
                puVar18[5] = plStack_e0;
                ppuStack_e8 = (undefined8 **)0x0;
                plStack_e0 = (longlong *)0x0;
                *(int *)(puVar18 + 7) = iStack_d0;
                puVar18[6] = CONCAT44(iStack_d4,uStack_d8);
                if (puVar18 + 1 == (longlong *)0x0) {
                  puVar19[0x16] = lStack_148;
                  puVar19[0x18] = puVar18;
                  *(undefined4 *)(puVar19 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar19 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar19 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar19 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar19 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar19 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar19 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar19 + 0xdc) = uStack_11c;
                  if (lStack_148 != 0) goto LAB_14288ccb1;
                }
                else {
                  puVar19[0x16] = &LAB_14698ef6c;
                  puVar19[0x18] = puVar18;
                  *(undefined4 *)(puVar19 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar19 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar19 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar19 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar19 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar19 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar19 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar19 + 0xdc) = uStack_11c;
LAB_14288ccb1:
                  lStack_148 = 0;
                }
                plStack_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*piStack_190 != 2)) {
                  uVar26 = 0x8ff;
                  if (*piStack_190 != 1) goto LAB_14288cce4;
                  DVar12 = FUN_140ad26c0();
                  DVar13 = GetCurrentThreadId();
                  uVar24 = (uint)(DVar12 != DVar13) * 0x200 + 0x6ff;
                  uVar26 = (ulonglong)uVar24;
                  *(uint *)(puStack_68 + 0x1e) = uVar24;
                  puVar19 = puStack_68;
                  if (lStack_148 != 0) {
                    plVar21 = plStack_138;
                    if (plStack_138 == (longlong *)0x0) {
                      plVar21 = (longlong *)&uStack_128;
                    }
                    (**(code **)(*plVar21 + 0x10))();
                    uVar26 = (ulonglong)*(uint *)(puStack_68 + 0x1e);
                    puVar19 = puStack_68;
                  }
                }
                else {
                  uVar26 = 0x6ff;
LAB_14288cce4:
                  *(int *)(puVar19 + 0x1e) = (int)uVar26;
                }
                uVar24 = (uint)uVar26;
                if ((uVar24 & 0xff) == 0xff) {
                  uVar11 = (uint)(uVar26 >> 10) & 3;
                  iVar25 = 0;
                  if ((uVar24 >> 9 & 1) == 0 || uVar11 < 2) {
                    uVar23 = (&DAT_149e38edc)[uVar11];
                  }
                  else {
                    uVar23 = 2;
                  }
                }
                else {
                  iVar25 = (uVar24 >> 7 & 2 | (uint)(uVar26 >> 9) & 1) +
                           *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar24 & 0xff) * 4);
                  uVar23 = 5;
                }
                FUN_144a24082(puVar19,L"GraphTask",uVar23,iVar25,0);
                if (puVar19 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
                  UNLOCK();
                }
                lStack_148 = CONCAT71(lStack_148._1_7_,1);
                FUN_1447439e4(puVar19,&lStack_148);
                uVar26 = uStack_150;
                iVar25 = (int)uStack_150;
                uVar24 = (int)uStack_150 + 1;
                uStack_150 = CONCAT44(uStack_150._4_4_,uVar24);
                if (uStack_150._4_4_ < uVar24) {
                  FUN_14476a5c8(auStack_178,uVar26 & 0xffffffff);
                }
                puVar20 = puStack_158;
                if (puStack_158 == (undefined1 *)0x0) {
                  puVar20 = auStack_178;
                }
                *(undefined8 **)(puVar20 + (longlong)iVar25 * 8) = puStack_68;
                FUN_14698d952(&ppuStack_e8);
                FUN_14698d952(&ppuStack_88);
                iVar27 = iVar27 + iStack_70;
                iVar29 = iVar29 + 1;
                goto LAB_14288c8d0;
              }
              *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
              LOCK();
              uVar11 = *puVar17;
              *puVar17 = *puVar17 + uVar24 + 1;
              UNLOCK();
              if ((uVar11 ^ uVar24) != 0xffffffff) goto LAB_14288cab8;
              puVar17 = (uint *)*puVar3;
              *puVar17 = 0xffffffff;
              *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
              puVar17[0x12] = 0;
              *puVar3 = puVar17;
              uVar26 = (longlong)puVar17 + 0x67;
              uVar24 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0x58,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&ppuStack_88);
          goto LAB_14288cf07;
        }
        iStack_8c = iStack_8c + 1;
      }
    }
  }
LAB_14288cf07:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,auStack_178,uStack_74);
  FUN_14588b8d6(auStack_178);
  while (puVar3 = puStack_a0, puStack_a0 != (undefined8 *)0x0) {
    puVar19 = puStack_a0 + 1;
    puStack_a0 = (undefined8 *)*puStack_a0;
    FUN_14698d952(puVar19);
    FUN_1400020a8(puVar3);
  }
  return;
}



// FUNCTION 14698d7c6 FUN_14698d7c6 body=116 status=ok
// SIG undefined FUN_14698d7c6(void)

void FUN_14698d7c6(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ushort uVar4;
  undefined8 uVar5;
  int iVar6;
  short sVar7;
  longlong *plVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  DWORD DVar12;
  DWORD DVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined4 *puVar16;
  uint *puVar17;
  undefined8 *puVar18;
  undefined8 in_RAX;
  undefined8 *puVar19;
  undefined1 *puVar20;
  longlong *plVar21;
  byte bVar22;
  undefined1 uVar23;
  uint uVar24;
  int iVar25;
  ulonglong uVar26;
  int iVar27;
  byte bVar28;
  int iVar29;
  bool bVar30;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 uStack_1c8;
  undefined4 auStack_1c0 [2];
  longlong lStack_1b8;
  undefined4 *puStack_1b0;
  undefined1 uStack_1a8;
  char cStack_1a7;
  byte bStack_1a6;
  int iStack_1a4;
  int iStack_1a0;
  undefined8 *puStack_198;
  int *piStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong *plStack_140;
  longlong *plStack_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 **ppuStack_100;
  longlong *plStack_f8;
  int iStack_f0;
  int iStack_ec;
  undefined8 **ppuStack_e8;
  longlong *plStack_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined8 uStack_c8;
  short sStack_ba;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  int iStack_8c;
  undefined8 **ppuStack_88;
  longlong *plStack_80;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  
  cVar9 = (char)param_2;
  uVar4 = *(ushort *)(param_1 + 0x7e);
  uVar26 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar4 == 3 && cVar9 == '\x04');
  if (uVar4 == ((ushort)param_2 & 0xff) || uVar4 == 3 && cVar9 == '\x04') {
    if (param_3 == '\0') {
      FUN_14288f4b8(param_1,param_2,uVar26 & 0xffffffff);
      return;
    }
    FUN_14288e69c(param_1,param_2,uVar26 & 0xffffffff);
    return;
  }
  if (uVar4 != 2 || cVar9 != '\x04') {
    FUN_14020fad6(param_1 + 0x58,L"Tiff, Unsupported conversion of sample data format.");
    return;
  }
  if (param_3 == '\0') {
    FUN_1428916f8();
    return;
  }
  uStack_60 = 0xfffffffffffffffe;
  FUN_144b77940(*(undefined8 *)(param_1 + 0x70));
  FUN_144b77ad0(*(undefined8 *)(param_1 + 0x70));
  uStack_1d8 = *(undefined4 *)(param_1 + 0x98);
  uStack_1d4 = *(undefined4 *)(param_1 + 0x9c);
  uStack_1d0 = *(undefined4 *)(param_1 + 0xa0);
  uStack_1cc = *(undefined4 *)(param_1 + 0xa4);
  sStack_ba = 0;
  FUN_144b7a120(*(undefined8 *)(param_1 + 0x70),0x11c,&sStack_ba);
  sVar7 = sStack_ba;
  bVar28 = 1;
  bVar30 = sStack_ba == 2;
  if (!bVar30) {
    bVar28 = *(byte *)(param_1 + 0x7e);
  }
  iStack_70 = *(int *)(param_1 + 0x88);
  iStack_6c = *(int *)(param_1 + 0x90);
  iVar10 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x142);
  if ((iVar10 == 0) ||
     (iVar10 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x143,&iStack_6c), iVar10 == 0)) {
    FUN_14020fad6(param_1 + 0x58,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  uStack_1c8 = 0;
  auStack_1c0[0] = 0;
  uStack_1c8 = FUN_144b77940(uVar5);
  FUN_144b77e20(uVar5,0x100,auStack_1c0);
  puStack_1b0 = &uStack_1d8;
  uStack_1a8 = 4;
  iStack_1a4 = iStack_70;
  iStack_1a0 = iStack_6c;
  puStack_198 = &uStack_1c8;
  bVar22 = 1;
  if (sVar7 == 2) {
    bVar22 = (byte)*(undefined2 *)(param_1 + 0x7e);
  }
  lStack_1b8 = param_1;
  cStack_1a7 = bVar30 * '\x03' + '\x01';
  bStack_1a6 = bVar28;
  puStack_a8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puStack_a8 = 0;
  puStack_a8[1] = 0;
  puStack_a8[2] = 0;
  puStack_158 = (undefined1 *)0x0;
  uStack_150 = 0x400000000;
  puStack_a0 = puStack_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar10 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar10 != 2)) {
    uStack_74 = 0xff;
    if (iVar10 != 1) goto LAB_142890c21;
    DVar12 = FUN_140ad26c0();
    DVar13 = GetCurrentThreadId();
    if (DVar12 != DVar13) goto LAB_142890c21;
  }
  uStack_74 = 1;
LAB_142890c21:
  uStack_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (uStack_180 < (ulonglong)(longlong)(int)((uint)bVar28 * iStack_6c * iStack_70) >> 1) {
    FUN_14020fad6(param_1 + 0x58,
                  L"Tiff tiles are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    iVar10 = FUN_144b7b020(*(undefined8 *)(param_1 + 0x70));
    if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar10);
    }
    if ((int)uStack_150._4_4_ < iVar10) {
      FUN_14473dbc4(auStack_178,iVar10);
    }
    lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar15 + 0x308);
    puStack_b0 = (undefined8 *)(lVar15 + 0x310);
    piStack_190 = (int *)(lVar15 + 0xc60);
    uStack_b4 = (uint)bVar22;
    for (uStack_c8 = 0; uStack_b8 = (uint)uStack_c8 & 0xff, uStack_b8 < uStack_b4;
        uStack_c8 = CONCAT71((int7)((ulonglong)uStack_c8 >> 8),(char)uStack_c8 + '\x01')) {
      iStack_8c = 0;
      for (iVar10 = 0; lVar15 = *(longlong *)(param_1 + 0x90), iVar10 < lVar15;
          iVar10 = iVar10 + iStack_6c) {
        iVar6 = (int)lVar15 - iVar10;
        if (iStack_6c + iVar10 <= lVar15) {
          iVar6 = iStack_6c;
        }
        iVar27 = 0;
        iVar29 = 0;
LAB_142890d1b:
        if ((longlong)iVar27 < *(longlong *)(param_1 + 0x88)) {
          ppuStack_88 = (undefined8 **)0x0;
          plStack_80 = (longlong *)0x0;
          cVar9 = FUN_14698d83a(&puStack_a8,&ppuStack_88);
          if (cVar9 == '\0') {
            plStack_f8 = (longlong *)FUN_14001cc68(0x28,0x10);
            plVar21 = plStack_80;
            plStack_f8[1] = (longlong)&DAT_100000001;
            *plStack_f8 = (longlong)&PTR_LAB_149ef6700;
            ppuStack_100 = (undefined8 **)(plStack_f8 + 2);
            plStack_f8[2] = 0;
            plStack_f8[3] = 0;
            plStack_f8[4] = 0;
            if (plStack_f8 == (longlong *)0x0) {
              plVar14 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plStack_f8 + 1) = (int)plStack_f8[1] + 1;
              UNLOCK();
              plVar14 = plStack_f8;
            }
            lStack_148 = 0;
            plStack_140 = plStack_f8;
            ppuStack_88 = ppuStack_100;
            plVar8 = plStack_80;
            if ((plVar14 != plStack_80) &&
               (plStack_140 = (longlong *)0x0, plVar8 = plVar14, plStack_80 != (longlong *)0x0)) {
              LOCK();
              plVar1 = plStack_80 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                puVar19 = (undefined8 *)*plStack_80;
                plStack_80 = plVar14;
                (*(code *)*puVar19)(plVar21);
                LOCK();
                piVar2 = (int *)((longlong)plVar21 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                plVar8 = plStack_80;
                if (*piVar2 == 0) {
                  (**(code **)(*plVar21 + 0x10))(plVar21);
                  plVar8 = plStack_80;
                }
              }
            }
            plStack_80 = plVar8;
            FUN_14698d952(&lStack_148);
            FUN_14698d9aa(&ppuStack_100);
            puVar19 = ppuStack_88[1];
            ppuStack_88[1] = (undefined8 *)((longlong)puVar19 + uStack_180);
            if ((ulonglong)((longlong)ppuStack_88[2] - (longlong)puVar19) < uStack_180) {
              FUN_14112c458();
            }
          }
          lVar15 = FUN_144b82d60(*(undefined8 *)(param_1 + 0x70),*ppuStack_88,iVar27,iVar10,0,
                                 (short)uStack_b8);
          if (-1 < lVar15) {
            iStack_f0 = (int)*(longlong *)(param_1 + 0x88) - iVar27;
            if ((longlong)(iStack_70 + iVar27) <= *(longlong *)(param_1 + 0x88)) {
              iStack_f0 = iStack_70;
            }
            ppuStack_100 = &puStack_a8;
            plStack_f8 = &lStack_1b8;
            ppuStack_e8 = ppuStack_88;
            plStack_e0 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
            }
            uStack_d8 = CONCAT31(uStack_d8._1_3_,(char)uStack_c8);
            iStack_d0 = iStack_8c;
            puVar17 = (uint *)*puVar3;
            iStack_ec = iVar6;
            iStack_d4 = iVar29;
            if (puVar17 != (uint *)0x0) goto LAB_142890f6d;
LAB_142890f03:
            uVar24 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar24 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar24 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar16 = (undefined4 *)*puStack_b0;
            *puStack_b0 = 0;
            if (puVar16 == (undefined4 *)0x0) {
              puVar16 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar16 = 0xffffffff;
            *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar3 = puVar16;
            FUN_140217a48(puVar3);
            puVar17 = (uint *)*puVar3;
LAB_142890f6d:
            uVar26 = *(longlong *)(puVar17 + 0x10) + 0xf;
            uVar24 = puVar17[0x12];
            do {
              puVar19 = (undefined8 *)(uVar26 & 0xfffffffffffffff0);
              if (puVar19 + 0x20 <= puVar17 + 0x4000) {
                *(undefined8 **)(puVar17 + 0x10) = puVar19 + 0x20;
                puVar17[0x12] = uVar24 + 1;
                uStack_188 = uVar26;
                puStack_68 = puVar19;
                FUN_1447247dc(puVar19,0);
                puVar19 = puStack_68;
                *puStack_68 = &PTR_FUN_149ef6718;
                lStack_148 = 0;
                plStack_138 = (longlong *)0x0;
                puVar18 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar18 = &PTR_LAB_149ef6ac0;
                puVar18[1] = ppuStack_100;
                puVar18[2] = plStack_f8;
                puVar18[3] = CONCAT44(iStack_ec,iStack_f0);
                puVar18[4] = ppuStack_e8;
                puVar18[5] = plStack_e0;
                ppuStack_e8 = (undefined8 **)0x0;
                plStack_e0 = (longlong *)0x0;
                *(int *)(puVar18 + 7) = iStack_d0;
                puVar18[6] = CONCAT44(iStack_d4,uStack_d8);
                if (puVar18 + 1 == (longlong *)0x0) {
                  puVar19[0x16] = lStack_148;
                  puVar19[0x18] = puVar18;
                  *(undefined4 *)(puVar19 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar19 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar19 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar19 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar19 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar19 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar19 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar19 + 0xdc) = uStack_11c;
                  if (lStack_148 != 0) goto LAB_1428910fc;
                }
                else {
                  puVar19[0x16] = &LAB_14698fc30;
                  puVar19[0x18] = puVar18;
                  *(undefined4 *)(puVar19 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar19 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar19 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar19 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar19 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar19 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar19 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar19 + 0xdc) = uStack_11c;
LAB_1428910fc:
                  lStack_148 = 0;
                }
                plStack_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*piStack_190 != 2)) {
                  uVar26 = 0x8ff;
                  if (*piStack_190 != 1) goto LAB_14289112f;
                  DVar12 = FUN_140ad26c0();
                  DVar13 = GetCurrentThreadId();
                  uVar24 = (uint)(DVar12 != DVar13) * 0x200 + 0x6ff;
                  uVar26 = (ulonglong)uVar24;
                  *(uint *)(puStack_68 + 0x1e) = uVar24;
                  puVar19 = puStack_68;
                  if (lStack_148 != 0) {
                    plVar21 = plStack_138;
                    if (plStack_138 == (longlong *)0x0) {
                      plVar21 = (longlong *)&uStack_128;
                    }
                    (**(code **)(*plVar21 + 0x10))();
                    uVar26 = (ulonglong)*(uint *)(puStack_68 + 0x1e);
                    puVar19 = puStack_68;
                  }
                }
                else {
                  uVar26 = 0x6ff;
LAB_14289112f:
                  *(int *)(puVar19 + 0x1e) = (int)uVar26;
                }
                uVar24 = (uint)uVar26;
                if ((uVar24 & 0xff) == 0xff) {
                  uVar11 = (uint)(uVar26 >> 10) & 3;
                  iVar25 = 0;
                  if ((uVar24 >> 9 & 1) == 0 || uVar11 < 2) {
                    uVar23 = (&DAT_149e38edc)[uVar11];
                  }
                  else {
                    uVar23 = 2;
                  }
                }
                else {
                  iVar25 = (uVar24 >> 7 & 2 | (uint)(uVar26 >> 9) & 1) +
                           *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar24 & 0xff) * 4);
                  uVar23 = 5;
                }
                FUN_144a24082(puVar19,L"GraphTask",uVar23,iVar25,0);
                if (puVar19 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
                  UNLOCK();
                }
                lStack_148 = CONCAT71(lStack_148._1_7_,1);
                FUN_1447439e4(puVar19,&lStack_148);
                uVar26 = uStack_150;
                iVar25 = (int)uStack_150;
                uVar24 = (int)uStack_150 + 1;
                uStack_150 = CONCAT44(uStack_150._4_4_,uVar24);
                if (uStack_150._4_4_ < uVar24) {
                  FUN_14476a5c8(auStack_178,uVar26 & 0xffffffff);
                }
                puVar20 = puStack_158;
                if (puStack_158 == (undefined1 *)0x0) {
                  puVar20 = auStack_178;
                }
                *(undefined8 **)(puVar20 + (longlong)iVar25 * 8) = puStack_68;
                FUN_14698d952(&ppuStack_e8);
                FUN_14698d952(&ppuStack_88);
                iVar27 = iVar27 + iStack_70;
                iVar29 = iVar29 + 1;
                goto LAB_142890d1b;
              }
              *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
              LOCK();
              uVar11 = *puVar17;
              *puVar17 = *puVar17 + uVar24 + 1;
              UNLOCK();
              if ((uVar11 ^ uVar24) != 0xffffffff) goto LAB_142890f03;
              puVar17 = (uint *)*puVar3;
              *puVar17 = 0xffffffff;
              *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
              puVar17[0x12] = 0;
              *puVar3 = puVar17;
              uVar26 = (longlong)puVar17 + 0x67;
              uVar24 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0x58,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&ppuStack_88);
          goto LAB_142891352;
        }
        iStack_8c = iStack_8c + 1;
      }
    }
  }
LAB_142891352:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,auStack_178,uStack_74);
  FUN_14588b8d6(auStack_178);
  while (puVar3 = puStack_a0, puStack_a0 != (undefined8 *)0x0) {
    puVar19 = puStack_a0 + 1;
    puStack_a0 = (undefined8 *)*puStack_a0;
    FUN_14698d952(puVar19);
    FUN_1400020a8(puVar3);
  }
  return;
}



// FUNCTION 14698d83a FUN_14698d83a body=243 status=ok
// SIG undefined FUN_14698d83a(void)

bool FUN_14698d83a(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  lVar2 = **(longlong **)(param_1 + 8);
  if (lVar2 != 0) {
    if ((undefined8 *)(lVar2 + 8) != param_2) {
      *param_2 = *(undefined8 *)(lVar2 + 8);
      *(undefined8 *)(lVar2 + 8) = 0;
      plVar3 = *(longlong **)(lVar2 + 0x10);
      plVar4 = (longlong *)param_2[1];
      if (plVar3 != plVar4) {
        *(undefined8 *)(lVar2 + 0x10) = 0;
        param_2[1] = plVar3;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar4 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
      }
    }
    lVar5 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar2;
    local_38 = 0;
    uStack_30 = 0;
    *(undefined8 *)(lVar2 + 8) = 0;
    plVar3 = *(longlong **)(lVar2 + 0x10);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(lVar2 + 0x10) = 0;
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    FUN_14698d952(&local_38);
    if (lVar5 != 0) {
      FUN_14698d952(lVar5 + 8);
      FUN_1400020a8(lVar5);
    }
  }
  return lVar2 != 0;
}



// FUNCTION 14698d92e Unwind@14698d92e body=36 status=ok
// SIG undefined Unwind@14698d92e(void)

void Unwind_14698d92e(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x20);
  return;
}



// FUNCTION 14698d952 FUN_14698d952 body=65 status=ok
// SIG undefined FUN_14698d952(void)

void FUN_14698d952(longlong param_1)

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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 14698d994 Unwind@14698d994 body=20 status=ok
// SIG undefined Unwind@14698d994(void)

void Unwind_14698d994(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14698d9aa FUN_14698d9aa body=65 status=ok
// SIG undefined FUN_14698d9aa(void)

void FUN_14698d9aa(longlong param_1)

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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 14698d9ec Unwind@14698d9ec body=20 status=ok
// SIG undefined Unwind@14698d9ec(void)

void Unwind_14698d9ec(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14698da02 FUN_14698da02 body=115 status=ok
// SIG undefined FUN_14698da02(void)

void FUN_14698da02(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    if ((uint)(*(int *)(param_1 + 0x2c) - iVar1) < (uint)-iVar1) {
      FUN_14476a5c8(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar2 = param_1;
    }
    FUN_14698de3f(lVar2 + (longlong)iVar1 * 8,-iVar1);
    return;
  }
  if (iVar1 == 0) {
    return;
  }
  FUN_14698de4e(param_1,iVar1);
  FUN_14698de9c(param_1);
  return;
}



// FUNCTION 14698da84 FUN_14698da84 body=29 status=ok
// SIG undefined FUN_14698da84(void)

undefined8 FUN_14698da84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698daa2 FUN_14698daa2 body=156 status=ok
// SIG undefined FUN_14698daa2(void)

void FUN_14698daa2(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014698db32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14698db3e Unwind@14698db3e body=56 status=ok
// SIG undefined Unwind@14698db3e(void)

void Unwind_14698db3e(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x20) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x20) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x20))(*(undefined8 **)(param_2 + 0x20),1);
    }
  }
  return;
}



// FUNCTION 14698db76 Unwind@14698db76 body=21 status=ok
// SIG undefined Unwind@14698db76(void)

void Unwind_14698db76(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14698db9c FUN_14698db9c body=29 status=ok
// SIG undefined FUN_14698db9c(void)

void FUN_14698db9c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14698dbba FUN_14698dbba body=52 status=ok
// SIG undefined FUN_14698dbba(void)

undefined8 * FUN_14698dbba(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6730;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698dbee FUN_14698dbee body=125 status=ok
// SIG undefined FUN_14698dbee(void)

undefined8 FUN_14698dbee(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14698dc6c(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14698dc6c FUN_14698dc6c body=277 status=ok
// SIG undefined FUN_14698dc6c(void)

void FUN_14698dc6c(longlong *param_1,int param_2,int param_3,undefined4 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined4 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  uStack_ac = param_4[1];
  uStack_a8 = param_4[2];
  uStack_a4 = param_4[3];
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14698dd82;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14698dd8a FUN_14698dd8a body=181 status=ok
// SIG undefined FUN_14698dd8a(void)

void FUN_14698dd8a(longlong *param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  bVar2 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar2 != 0) {
    iVar4 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34);
    lVar8 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar4 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar9 = 0;
    do {
      lVar1 = (int)((iVar4 * iVar3 + param_2) * (uint)bVar2) + lVar9;
      uVar6 = (ulonglong)*(uint *)((longlong *)param_1[7] + 1);
      uVar7 = lVar1 % (longlong)uVar6;
      bVar5 = ~(byte)uVar7 & 7;
      *(char *)(*(longlong *)param_1[2] + lVar8) =
           -(char)(((uint)*(byte *)((uVar7 >> 3 & 0x1fffffff) +
                                   (lVar1 / (longlong)uVar6 & 0xffffffffU) * *(longlong *)param_1[7]
                                   + *(longlong *)param_1[3]) & 1 << bVar5) >> bVar5);
      lVar8 = lVar8 + (ulonglong)*(byte *)((longlong)param_1 + 0x21);
      lVar9 = lVar9 + 1;
    } while ((uint)lVar9 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 14698de3f FUN_14698de3f body=14 status=ok
// SIG undefined FUN_14698de3f(void)

void FUN_14698de3f(void *param_1,uint param_2)

{
  memset(param_1,0,(ulonglong)param_2 << 3);
  return;
}



// FUNCTION 14698de4e FUN_14698de4e body=77 status=ok
// SIG undefined FUN_14698de4e(void)

void FUN_14698de4e(void *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  void *_Dst;
  
  _Dst = *(void **)((longlong)param_1 + 0x20);
  if (*(void **)((longlong)param_1 + 0x20) == (void *)0x0) {
    _Dst = param_1;
  }
  FUN_144717c65(_Dst);
  iVar1 = *(int *)((longlong)param_1 + 0x28) - param_2;
  uVar2 = param_2;
  if (iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)param_2 * 8),(longlong)iVar1 << 3);
    uVar2 = *(uint *)((longlong)param_1 + 0x28);
  }
  *(uint *)((longlong)param_1 + 0x28) = uVar2 - param_2;
  return;
}



// FUNCTION 14698de9c FUN_14698de9c body=52 status=ok
// SIG undefined FUN_14698de9c(void)

void FUN_14698de9c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14698ded0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  if (iVar1 == *(int *)(param_1 + 0x2c)) {
    return;
  }
  *(int *)(param_1 + 0x2c) = iVar1;
  FUN_144aa2962(param_1,*(undefined4 *)(param_1 + 0x28),iVar1);
  return;
}



// FUNCTION 14698ded0 FUN_14698ded0 body=108 status=ok
// SIG undefined FUN_14698ded0(void)

ulonglong FUN_14698ded0(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 4;
  if (4 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x1ffffffffffff800U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,0);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 14698df66 FUN_14698df66 body=29 status=ok
// SIG undefined FUN_14698df66(void)

void FUN_14698df66(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14698df84 FUN_14698df84 body=52 status=ok
// SIG undefined FUN_14698df84(void)

undefined8 * FUN_14698df84(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6900;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698dfb8 FUN_14698dfb8 body=125 status=ok
// SIG undefined FUN_14698dfb8(void)

undefined8 FUN_14698dfb8(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14698e036(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}


