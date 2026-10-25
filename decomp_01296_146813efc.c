// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146813efc FUN_146813efc body=209 status=ok
// SIG undefined FUN_146813efc(void)

int FUN_146813efc(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_146813f46:
      lVar10 = (longlong)iVar1 * 0xe0;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_146813fc2;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_146813fc2;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_146813fb0;
    }
  }
  return -1;
LAB_146813fc2:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_146813fb0:
  iVar1 = *(int *)(lVar4 + 0xd8 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_146813f46;
}



// FUNCTION 146813fce FUN_146813fce body=122 status=ok
// SIG undefined FUN_146813fce(void)

void FUN_146813fce(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xe0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xe0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xe0 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 146814048 FUN_146814048 body=182 status=ok
// SIG undefined FUN_146814048(void)

void FUN_146814048(undefined8 param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14c868720;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar6 = false;
  DAT_14c86872c = DAT_14c86872c + 1;
  do {
    lVar5 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14c868718 + lVar5) != 0 &&
            (plVar1 = *(longlong **)(DAT_14c868718 + -8 + lVar5), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1), cVar3 != '\0'))) {
      lVar5 = lVar5 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14c86872c = DAT_14c86872c + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1468140d7;
      }
    }
    uVar4 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  DAT_14c86872c = DAT_14c86872c + -1;
LAB_1468140d7:
  FUN_14474d06a(&DAT_14c868718,0);
  return;
}



// FUNCTION 1468140fe FUN_1468140fe body=164 status=ok
// SIG undefined FUN_1468140fe(void)

void FUN_1468140fe(longlong *param_1,undefined8 param_2)

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
        goto LAB_14681417e;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14681417e:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1468141b0 FUN_1468141b0 body=59 status=ok
// SIG undefined FUN_1468141b0(void)

void FUN_1468141b0(longlong *param_1)

{
  FUN_140457ffc(&DAT_14c8670e8,param_1);
  FUN_1468141eb(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468141eb FUN_1468141eb body=61 status=ok
// SIG undefined FUN_1468141eb(void)

void FUN_1468141eb(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146814228 FUN_146814228 body=9 status=ok
// SIG undefined FUN_146814228(void)

void FUN_146814228(longlong param_1)

{
  FUN_14680e182(param_1 + 0x10);
  return;
}



// FUNCTION 146814232 FUN_146814232 body=29 status=ok
// SIG undefined FUN_146814232(void)

undefined8 FUN_146814232(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14681424f FUN_14681424f body=40 status=ok
// SIG undefined FUN_14681424f(void)

void FUN_14681424f(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1449db362(param_1);
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 146814277 FUN_146814277 body=40 status=ok
// SIG undefined FUN_146814277(void)

void FUN_146814277(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1449db362(param_1);
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 1468142a0 FUN_1468142a0 body=31 status=ok
// SIG undefined FUN_1468142a0(void)

undefined8 FUN_1468142a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468142dc FUN_1468142dc body=11 status=ok
// SIG undefined FUN_1468142dc(void)

undefined8 * FUN_1468142dc(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x10);
  return param_2;
}



// FUNCTION 1468142e8 FUN_1468142e8 body=93 status=ok
// SIG undefined FUN_1468142e8(void)

void FUN_1468142e8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149e307b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146814346 FUN_146814346 body=126 status=ok
// SIG undefined FUN_146814346(void)

void FUN_146814346(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149e307b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001468143b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1468143c4 FUN_1468143c4 body=21 status=ok
// SIG undefined FUN_1468143c4(void)

undefined8 FUN_1468143c4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1468143da FUN_1468143da body=2 status=ok
// SIG undefined FUN_1468143da(void)

void FUN_1468143da(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1468143e0 FUN_1468143e0 body=95 status=ok
// SIG undefined FUN_1468143e0(void)

void FUN_1468143e0(longlong *param_1)

{
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x10))();
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146814434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 146814458 FUN_146814458 body=74 status=ok
// SIG undefined FUN_146814458(void)

undefined8 * FUN_146814458(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149e30888;
  puVar1 = TlsGetValue(DAT_14c75b110);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c75b110,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468144b0 FUN_1468144b0 body=136 status=ok
// SIG undefined FUN_1468144b0(void)

void FUN_1468144b0(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14c867e58;
  if (DAT_14c867e8c != 0) {
    *(int *)(DAT_14c867e58 + (longlong)DAT_14c867e88 * 0xa0) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0xa0) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c867e8c) {
    iVar4 = DAT_14c867e88;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0xa0) = iVar4;
  DAT_14c867e8c = DAT_14c867e8c + 1;
  puVar3 = &DAT_14c867e68;
  if (DAT_14c867e78 != (undefined *)0x0) {
    puVar3 = DAT_14c867e78;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14c867e88 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 146814548 FUN_146814548 body=144 status=ok
// SIG undefined FUN_146814548(void)

void FUN_146814548(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e309d0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x0001468145cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 1468145d8 FUN_1468145d8 body=144 status=ok
// SIG undefined FUN_1468145d8(void)

void FUN_1468145d8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e309d0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x00014681465d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 146814668 FUN_146814668 body=171 status=ok
// SIG undefined FUN_146814668(void)

void FUN_146814668(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 *puVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 6) {
    FUN_1446efa72(param_2 + 1,0,6,0x10);
    param_2[1].LockCount = 6;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e309d0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar3)(puVar3,p_Var1 + 1);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146814703. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146814714 FUN_146814714 body=44 status=ok
// SIG undefined FUN_146814714(void)

void FUN_146814714(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
  plVar2 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x30);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014681473d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 146814740 FUN_146814740 body=114 status=ok
// SIG undefined FUN_146814740(void)

void FUN_146814740(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0xc) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0xc);
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



// FUNCTION 1468147b2 FUN_1468147b2 body=114 status=ok
// SIG undefined FUN_1468147b2(void)

void FUN_1468147b2(longlong *param_1,int param_2)

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



// FUNCTION 146814824 FUN_146814824 body=31 status=ok
// SIG undefined FUN_146814824(void)

undefined8 FUN_146814824(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14681485c FUN_14681485c body=93 status=ok
// SIG undefined FUN_14681485c(void)

void FUN_14681485c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e312b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e30a40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1468148ba FUN_1468148ba body=93 status=ok
// SIG undefined FUN_1468148ba(void)

void FUN_1468148ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e312b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e30a40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146814918 FUN_146814918 body=126 status=ok
// SIG undefined FUN_146814918(void)

void FUN_146814918(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e312b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e30a40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146814987. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1468149a4 FUN_1468149a4 body=21 status=ok
// SIG undefined FUN_1468149a4(void)

undefined8 FUN_1468149a4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1468149bc FUN_1468149bc body=313 status=ok
// SIG undefined FUN_1468149bc(void)

undefined4 * FUN_1468149bc(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146814af6(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar9 = ((undefined8 *)*param_3)[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = uVar9;
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  uVar6 = puVar1[5];
  uVar7 = puVar1[6];
  uVar8 = puVar1[7];
  *(undefined4 *)(local_40 + 4) = puVar1[4];
  *(undefined4 *)((longlong)local_40 + 0x24) = uVar6;
  *(undefined4 *)(local_40 + 5) = uVar7;
  *(undefined4 *)((longlong)local_40 + 0x2c) = uVar8;
  *(undefined4 *)(local_40 + 2) = uVar2;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar3;
  *(undefined4 *)(local_40 + 3) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0x1c) = uVar5;
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  local_4c = local_48[0];
  uVar11 = FUN_1447addd0(local_40,0x10);
  cVar10 = FUN_146814bda(param_1,uVar11,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar10 == '\0') {
    uVar12 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar14 = 1;
    if (3 < uVar12) {
      uVar13 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
      lVar15 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar15 & 0x1f);
    }
    if (((int)uVar12 < 1) || (iVar14 <= *(int *)(param_1 + 0x48))) {
      uVar11 = *(int *)(param_1 + 0x48) - 1U & uVar11;
      *(uint *)((longlong)local_40 + 0x34) = uVar11;
      lVar15 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar15 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
           *(undefined4 *)
            (lVar15 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4);
      lVar15 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar15 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar15 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar14;
      FUN_146814cb4(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146814af6 FUN_146814af6 body=228 status=ok
// SIG undefined FUN_146814af6(void)

int * FUN_146814af6(longlong *param_1,int *param_2)

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
      FUN_146812ad6(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 146814bda FUN_146814bda body=102 status=ok
// SIG undefined FUN_146814bda(void)

undefined8 FUN_146814bda(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
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
  int iVar14;
  longlong lVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar14 = FUN_1412c2be0(), iVar14 != -1)) {
    lVar2 = *param_1;
    lVar15 = (longlong)iVar14 * 0x38;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    uVar11 = param_3[9];
    uVar12 = param_3[10];
    uVar13 = param_3[0xb];
    puVar1 = (undefined4 *)(lVar2 + 0x20 + lVar15);
    *puVar1 = param_3[8];
    puVar1[1] = uVar11;
    puVar1[2] = uVar12;
    puVar1[3] = uVar13;
    puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar15);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    puVar1 = (undefined4 *)(lVar2 + lVar15);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_146814c40(param_1,*param_4);
    *param_4 = iVar14;
    return 1;
  }
  return 0;
}



// FUNCTION 146814c40 FUN_146814c40 body=116 status=ok
// SIG undefined FUN_146814c40(void)

void FUN_146814c40(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 146814cb4 FUN_146814cb4 body=446 status=ok
// SIG undefined FUN_146814cb4(void)

void FUN_146814cb4(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x38;
        iVar6 = FUN_1447addd0(lVar3 + lVar10,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x34 + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar10) =
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



// FUNCTION 146814f24 FUN_146814f24 body=72 status=ok
// SIG undefined FUN_146814f24(void)

void FUN_146814f24(undefined8 param_1,longlong *param_2)

{
  if (param_2 != (longlong *)0x0) {
    if (*(char *)((longlong)param_2 + 0x3c) == '\x01') {
      *(undefined1 *)((longlong)param_2 + 0x3c) = 0;
    }
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[2] + 0x10))();
    }
    if ((longlong *)*param_2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_2 + 0x10))();
    }
    FUN_1400020a8(param_2);
    return;
  }
  return;
}



// FUNCTION 146814f6c FUN_146814f6c body=132 status=ok
// SIG undefined FUN_146814f6c(void)

void FUN_146814f6c(longlong param_1,int param_2)

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



// FUNCTION 146814ff2 FUN_146814ff2 body=62 status=ok
// SIG undefined FUN_146814ff2(void)

void FUN_146814ff2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146815030(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146815030 FUN_146815030 body=93 status=ok
// SIG undefined FUN_146815030(void)

ulonglong FUN_146815030(uint param_1,uint param_2)

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



// FUNCTION 14681508e FUN_14681508e body=116 status=ok
// SIG undefined FUN_14681508e(void)

void FUN_14681508e(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if (param_2 <= (int)uVar1) {
    uVar4 = 10;
    if (10 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (10 < *(uint *)(param_1 + 0x34)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 2,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 2)) {
        uVar4 = uVar2 >> 2 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x34) = (int)uVar4;
    FUN_146815104(param_1,param_2,uVar4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146815104 FUN_146815104 body=133 status=ok
// SIG undefined FUN_146815104(void)

void FUN_146815104(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x28);
  if ((uint)param_3 < 0xb) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x28,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x28),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x28,param_2,param_3,param_4);
  return;
}



// FUNCTION 146815189 FUN_146815189 body=38 status=ok
// SIG undefined FUN_146815189(void)

void FUN_146815189(undefined4 param_1,undefined8 param_2)

{
  FUN_140033559(".\\Runtime/Core/Private/Misc/MemStack.cpp",0x1ae,
                L"Trying to resize TMemStackAllocator to an invalid size of %d with element size %I64u"
                ,param_1,param_2);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 1468151b0 FUN_1468151b0 body=311 status=ok
// SIG undefined FUN_1468151b0(void)

void FUN_1468151b0(undefined8 param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_140b3f358();
  if (cVar1 != '\0') {
    FUN_146816822();
    puVar2 = (undefined8 *)FUN_1447a1f4a(param_1);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*puVar2;
    }
    FUN_140047918(&DAT_14c872ee0,&DAT_149e0625e,puVar4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_38 = L"DefaultDebugMessageTitle";
  local_30 = 0x18;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"MessageDialog";
  local_30 = 0xd;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(&local_38,local_40,local_3c,L"ShowDebugMessagef");
  puVar2 = (undefined8 *)FUN_1447a1f4a(&local_38);
  puVar3 = &DAT_149dfb77a;
  puVar4 = &DAT_149dfb77a;
  if (*(int *)(puVar2 + 1) != 0) {
    puVar4 = (undefined2 *)*puVar2;
  }
  puVar2 = (undefined8 *)FUN_1447a1f4a(param_1);
  if (*(int *)(puVar2 + 1) != 0) {
    puVar3 = (undefined2 *)*puVar2;
  }
  FUN_14682f732(0,puVar3,puVar4);
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468152e8 FUN_1468152e8 body=370 status=ok
// SIG undefined FUN_1468152e8(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1468152e8(void)

{
  char cVar1;
  DWORD DVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_1068 [32];
  undefined8 local_1048;
  undefined1 local_1040 [4];
  undefined1 local_103c [4];
  wchar_t *local_1038;
  undefined4 local_1030;
  undefined1 local_1028 [2048];
  undefined1 local_828 [2048];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1068;
  DVar2 = GetLastError();
  cVar1 = FUN_140b3f358();
  if (cVar1 == '\0') {
    memset(local_1028,0,0x800);
    uVar3 = FUN_14682f6b8(local_828,0x400,0);
    FUN_141301ee6(local_1028,L"GetLastError : %d\n\n%s",DVar2,uVar3);
    local_1038 = L"DefaultSystemErrorTitle";
    local_1030 = 0x17;
    FUN_1446e940c(local_103c,&local_1038);
    local_1038 = L"MessageDialog";
    local_1030 = 0xd;
    FUN_1446e940c(local_1040,&local_1038);
    FUN_140208bae(&local_1038,local_1040,local_103c,L"System Error");
    puVar4 = (undefined8 *)FUN_1447a1f4a(&local_1038);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*puVar4;
    }
    FUN_14682f732(0,local_1028,puVar5);
    if (local_1038 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_1038 + 0x10))();
    }
  }
  else {
    local_1048 = FUN_14682f6b8(local_828,0x400,0);
    FUN_140033559(".\\Runtime/Core/Private/Misc/MessageDialog.cpp",0x45,L"GetLastError : %d\n\n%s",
                  DVar2);
  }
  if ((local_28 ^ (ulonglong)auStack_1068) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681545c FUN_14681545c body=39 status=ok
// SIG undefined FUN_14681545c(void)

void FUN_14681545c(void)

{
  FUN_1427863e0();
  FUN_1427864dc();
  return;
}



// FUNCTION 146815484 FUN_146815484 body=13 status=ok
// SIG undefined FUN_146815484(void)

void FUN_146815484(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1427864dc(param_1,param_1,param_2,param_3);
  return;
}



// FUNCTION 146815492 FUN_146815492 body=200 status=ok
// SIG undefined FUN_146815492(void)

undefined4
FUN_146815492(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  
  cVar2 = FUN_140b3f358();
  if (cVar2 == '\0') {
    puVar3 = (undefined8 *)FUN_1447a1f4a(param_5);
    puVar6 = &DAT_149dfb77a;
    puVar5 = &DAT_149dfb77a;
    if (*(int *)(puVar3 + 1) != 0) {
      puVar5 = (undefined2 *)*puVar3;
    }
    puVar3 = (undefined8 *)FUN_1447a1f4a(param_4);
    if (*(int *)(puVar3 + 1) != 0) {
      puVar6 = (undefined2 *)*puVar3;
    }
    param_3 = FUN_14682f732(param_2,puVar6,puVar5);
  }
  lVar1 = DAT_14c872be8;
  if (DAT_14c872be8 != 0) {
    puVar3 = (undefined8 *)FUN_1447a1f4a(param_4);
    puVar6 = &DAT_149dfb77a;
    puVar5 = &DAT_149dfb77a;
    if (*(int *)(puVar3 + 1) != 0) {
      puVar5 = (undefined2 *)*puVar3;
    }
    puVar3 = (undefined8 *)FUN_1447a1f4a(param_5);
    if (*(int *)(puVar3 + 1) != 0) {
      puVar6 = (undefined2 *)*puVar3;
    }
    uVar4 = FUN_1467b7a33(param_3);
    FUN_140047918(lVar1,L"Message dialog closed, result: %s, title: %s, text: %s",uVar4,puVar6,
                  puVar5);
  }
  return param_3;
}



// FUNCTION 14681555a FUN_14681555a body=53 status=ok
// SIG undefined FUN_14681555a(void)

void FUN_14681555a(void)

{
  FUN_1427863e0();
  FUN_146815492();
  return;
}



// FUNCTION 146815590 FUN_146815590 body=138 status=ok
// SIG undefined FUN_146815590(void)

ulonglong FUN_146815590(longlong *param_1,longlong *param_2)

{
  byte unaff_BL;
  byte bVar1;
  undefined8 unaff_RDI;
  undefined7 uVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((int)param_1[1] == 0) || (param_1 = (longlong *)*param_1, param_1 == (longlong *)0x0)) {
    bVar1 = 0;
    uVar2 = 0;
  }
  else {
    local_30 = *param_2;
    *param_2 = 0;
    local_28 = (undefined4)param_2[1];
    local_24 = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    unaff_BL = (**(code **)(*param_1 + 0x60))();
    uVar2 = (undefined7)((ulonglong)unaff_RDI >> 8);
    bVar1 = 1;
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71(uVar2,bVar1 & unaff_BL) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681561c FUN_14681561c body=297 status=ok
// SIG undefined FUN_14681561c(void)

undefined8 FUN_14681561c(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar7 = (int)((ulonglong)param_2 >> 0x20);
  uVar5 = (ushort)((ulonglong)param_2 >> 0x10);
  uVar4 = (ushort)param_2;
  if (*(int *)(param_1 + 0xc0) < 1) {
    uVar1 = (ulonglong)*(uint *)(param_1 + 0x70);
    if ((int)*(uint *)(param_1 + 0x70) <= *(int *)(param_1 + 0x9c)) {
LAB_1468156b1:
      uVar3 = CONCAT71((int7)(uVar1 >> 8),1);
      if (*(int *)(param_1 + 0x20) == *(int *)(param_1 + 0x4c)) {
        return uVar3;
      }
      lVar2 = param_1 + 0x50;
      if (*(longlong *)(param_1 + 0x58) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x58);
      }
      iVar7 = *(int *)(lVar2 + (ulonglong)
                               (*(int *)(param_1 + 0x60) - 1U &
                               iVar7 + ((int)param_2 << 0x10 | (uint)uVar4) +
                               ((uint)uVar5 << 0x13 | (uint)uVar5) + (uint)(uVar4 >> 4)) * 4);
      if (iVar7 == -1) {
        return uVar3;
      }
      do {
        bVar8 = *(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar7 * 0x20) == param_2;
        uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),!bVar8);
        if (bVar8) {
          return uVar3;
        }
        iVar7 = *(int *)((longlong)iVar7 * 0x20 + *(longlong *)(param_1 + 0x18) + 0x18);
      } while (iVar7 != -1);
      return uVar3;
    }
    lVar2 = param_1 + 0xa0;
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xa8);
    }
    iVar6 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0xb0) - 1U &
                             iVar7 + ((int)param_2 << 0x10 | (uint)uVar4) +
                             ((uint)uVar5 << 0x13 | (uint)uVar5) + (uint)(uVar4 >> 4)) * 4);
    if (iVar6 != -1) {
      uVar1 = *(ulonglong *)(param_1 + 0x68);
      do {
        if (*(longlong *)(uVar1 + (longlong)iVar6 * 0x20) == param_2) goto LAB_1468156b1;
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + uVar1 + 0x18);
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 146815746 FUN_146815746 body=187 status=ok
// SIG undefined FUN_146815746(void)

bool FUN_146815746(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x4c);
  uVar1 = (uint)((ulonglong)param_3 >> 0x10);
  uVar5 = (uint)param_3 & 0xffff;
  local_30 = param_3;
  local_28 = param_2;
  uVar2 = FUN_140e6d7e2(param_1 + 0x18,
                        ((uint)param_3 << 0x10 | uVar5) + (int)((ulonglong)param_3 >> 0x20) +
                        (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4));
  FUN_140721fbe(uVar2,&local_28);
  iVar4 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x4c);
  if ((iVar3 != iVar4) && (*(char *)(param_1 + 0xe0) == '\0')) {
    FUN_1447f69b6(param_1 + 200);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar3 != iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146815802 FUN_146815802 body=193 status=ok
// SIG undefined FUN_146815802(void)

bool FUN_146815802(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = *(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x9c);
  uVar1 = (uint)((ulonglong)param_3 >> 0x10);
  uVar5 = (uint)param_3 & 0xffff;
  local_30 = param_3;
  local_28 = param_2;
  uVar2 = FUN_140e6d7e2(param_1 + 0x68,
                        ((uint)param_3 << 0x10 | uVar5) + (int)((ulonglong)param_3 >> 0x20) +
                        (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4));
  FUN_140721fbe(uVar2,&local_28);
  iVar4 = *(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x9c);
  if ((iVar3 != iVar4) && (*(char *)(param_1 + 0xe0) == '\0')) {
    FUN_1447f69b6(param_1 + 200);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar3 != iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468158c4 FUN_1468158c4 body=123 status=ok
// SIG undefined FUN_1468158c4(void)

bool FUN_1468158c4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *(int *)(param_1 + 0xc0);
  local_28 = param_2;
  FUN_140721fbe(param_1 + 0xb8,&local_28);
  iVar2 = *(int *)(param_1 + 0xc0);
  if ((iVar1 != iVar2) && (*(char *)(param_1 + 0xe0) == '\0')) {
    FUN_1447f69b6(param_1 + 200);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar1 != iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146815c2a FUN_146815c2a body=287 status=ok
// SIG undefined FUN_146815c2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146815c2a(void)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c872e48) {
    FUN_144b3d300(&DAT_14c872e48);
    if (DAT_14c872e48 == -1) {
      DAT_14c872e38 = 0;
      _DAT_14c872e40 = 0;
      atexit((_func_5014 *)&LAB_14278663e);
      _Init_thread_footer(&DAT_14c872e48);
    }
  }
  if (DAT_14c872e4c == '\0') {
    FUN_1446f470e(&local_20,L"EngineNetworkVersion",1);
    local_38 = 0x62915ca3;
    uStack_34 = 0x1c8e4bf7;
    uStack_30 = 0xa30e12c7;
    uStack_2c = 0xc8219df7;
    FUN_1459476e6(&DAT_14c872e38,&local_38,2,local_20);
    FUN_1446f470e(&local_40,L"GameNetworkVersion",1);
    local_58 = 0xcc400d24;
    uStack_54 = 0xe0e94e7b;
    uStack_50 = 0x9bf9a283;
    uStack_4c = 0xdcc0c027;
    FUN_1459476e6(&DAT_14c872e38,&local_58,0,local_40);
    DAT_14c872e4c = '\x01';
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146815d4a FUN_146815d4a body=90 status=ok
// SIG undefined FUN_146815d4a(void)

undefined4 FUN_146815d4a(void)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_145946ebb();
  local_18 = DAT_14c8733f4;
  uStack_14 = DAT_14c8733f8;
  uStack_10 = DAT_14c8733fc;
  uStack_c = DAT_14c873400;
  lVar2 = FUN_144afef82(&DAT_14c872e20);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 0x10);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146815da6 FUN_146815da6 body=90 status=ok
// SIG undefined FUN_146815da6(void)

undefined4 FUN_146815da6(void)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_145946ebb();
  local_18 = DAT_14c8733e4;
  uStack_14 = DAT_14c8733e8;
  uStack_10 = DAT_14c8733ec;
  uStack_c = DAT_14c8733f0;
  lVar2 = FUN_144afef82(&DAT_14c872e20);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 0x10);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146815e02 FUN_146815e02 body=100 status=ok
// SIG undefined FUN_146815e02(void)

undefined8 FUN_146815e02(int param_1,int param_2)

{
  char extraout_AL;
  undefined8 in_RAX;
  undefined7 uVar2;
  undefined7 extraout_var;
  undefined8 uVar1;
  longlong *plVar3;
  
  uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
  if ((DAT_14c872e00 != (longlong *)0x0 && DAT_14c872e08 != 0) &&
     ((**(code **)(*DAT_14c872e00 + 0x30))(), uVar2 = extraout_var, extraout_AL != '\0')) {
    plVar3 = DAT_14c872e00;
    if (DAT_14c872e08 == 0) {
      plVar3 = (longlong *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x000146815e63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*plVar3 + 0x58))(plVar3,param_1,param_2);
    return uVar1;
  }
  return CONCAT71(uVar2,param_1 == param_2);
}



// FUNCTION 146815e66 FUN_146815e66 body=511 status=ok
// SIG undefined FUN_146815e66(void)

undefined8 * FUN_146815e66(undefined8 *param_1)

{
  undefined4 uVar1;
  void *_Src;
  undefined4 uVar2;
  undefined2 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  void *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14c872e8c == '\0') {
    FUN_140056680(&local_58,&DAT_14c764000);
    FUN_146815c2a();
    if ((longlong)DAT_14c872e40 != 0) {
      lVar6 = (longlong)DAT_14c872e40 * 0x28;
      lVar4 = DAT_14c872e38;
      do {
        uVar1 = *(undefined4 *)(lVar4 + 0x10);
        FUN_14278ffaa(lVar4,local_80);
        FUN_1400021e4(local_80,&local_78);
        puVar3 = &DAT_149dfb77a;
        if (local_70 != 0) {
          puVar3 = local_78;
        }
        FUN_140002266(&local_68,L", %s: %d",puVar3,uVar1);
        iVar5 = local_60 + -1;
        if (local_60 == 0) {
          iVar5 = 0;
        }
        FUN_1400020e8(&local_58,local_68,iVar5);
        if (local_68 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_78 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        lVar4 = lVar4 + 0x28;
        lVar6 = lVar6 + -0x28;
      } while (lVar6 != 0);
    }
    FUN_144a2b0a4(&local_58,&local_68);
    puVar3 = local_68;
    if (local_60 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    DAT_14c872e90 = FUN_144a1ccda(puVar3,0);
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    DAT_14c872e8c = '\x01';
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar2 = FUN_1427866f8();
  uVar1 = DAT_14c872e90;
  FUN_140056680(&local_58,&DAT_14c764000);
  _Src = local_58;
  *param_1 = 0;
  *(int *)(param_1 + 1) = local_50;
  if ((longlong)local_50 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,local_50,0);
    memcpy((void *)*param_1,_Src,(longlong)local_50 * 2);
  }
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  if (local_58 != (void *)0x0) {
    FUN_1400020a8(local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146816066 FUN_146816066 body=146 status=ok
// SIG undefined FUN_146816066(void)

void FUN_146816066(ulonglong param_1,longlong param_2)

{
  wchar_t *pwVar1;
  
  pwVar1 = *(wchar_t **)(param_2 + 8);
  if ((param_1 & 1) == 0) {
    if (*(wchar_t **)(param_2 + 0x10) <= pwVar1 + 0x12) {
      FUN_140213274(param_2,0x12);
      pwVar1 = *(wchar_t **)(param_2 + 8);
    }
    builtin_wcsncpy(pwVar1,L"GenericReplication",0x12);
    pwVar1 = pwVar1 + 0x12;
  }
  else {
    if (*(wchar_t **)(param_2 + 0x10) <= pwVar1 + 0xf) {
      FUN_140213274(param_2,0xf);
      pwVar1 = *(wchar_t **)(param_2 + 8);
    }
    builtin_wcsncpy(pwVar1,L"IrisReplication",0xf);
    pwVar1 = pwVar1 + 0xf;
  }
  *(wchar_t **)(param_2 + 8) = pwVar1;
  return;
}



// FUNCTION 1468160f8 FUN_1468160f8 body=12 status=ok
// SIG undefined FUN_1468160f8(void)

void FUN_1468160f8(longlong param_1,longlong param_2)

{
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  return;
}



// FUNCTION 146816104 FUN_146816104 body=73 status=ok
// SIG undefined FUN_146816104(void)

void FUN_146816104(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 0;
  (**(code **)(*param_1 + 0x10))(param_1,param_3,param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681614e FUN_14681614e body=91 status=ok
// SIG undefined FUN_14681614e(void)

void FUN_14681614e(longlong *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 0;
  if (*(int *)(param_3 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_3;
  }
  (**(code **)(*param_1 + 0x10))(param_1,puVar1,param_2,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468161aa FUN_1468161aa body=46 status=ok
// SIG undefined FUN_1468161aa(void)

void FUN_1468161aa(longlong *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_1400d7a00();
                    /* WARNING: Could not recover jumptable at 0x0001468161d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_2,*puVar1,puVar1 + 4);
  return;
}



// FUNCTION 1468161d8 FUN_1468161d8 body=64 status=ok
// SIG undefined FUN_1468161d8(void)

void FUN_1468161d8(longlong *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  
  puVar1 = (undefined1 *)FUN_1400d7a00();
  if (*(int *)(param_2 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x000146816215. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,puVar2,*puVar1,puVar1 + 4);
  return;
}



// FUNCTION 146816218 FUN_146816218 body=339 status=ok
// SIG undefined FUN_146816218(void)

void FUN_146816218(longlong *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 *_Memory;
  uint uVar5;
  undefined1 *_Memory_00;
  undefined8 local_res20;
  undefined1 auStack_498 [32];
  undefined8 local_478;
  undefined8 *local_470;
  undefined1 local_459;
  longlong *local_458;
  undefined8 *local_450;
  undefined1 local_448 [1024];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_498;
  local_res20 = param_4;
  local_459 = param_2;
  local_458 = param_1;
  local_450 = &local_res20;
  puVar4 = (undefined8 *)FUN_144737586();
  local_478 = 0;
  _Memory = local_448;
  local_470 = &local_res20;
  uVar2 = __stdio_common_vswprintf(*puVar4,_Memory,0x200,param_3);
  if ((int)uVar2 < 0) {
    uVar2 = 0xffffffff;
  }
  if (uVar2 < 0x200) {
    _Memory_00 = (undefined1 *)0x0;
  }
  else {
    uVar5 = 0x400;
    _Memory = (undefined1 *)0x0;
    do {
      free(_Memory);
      _Memory = malloc((ulonglong)uVar5 * 2);
      if (_Memory == (undefined1 *)0x0) goto LAB_14681633e;
      local_450 = &local_res20;
      puVar4 = (undefined8 *)FUN_144737586();
      local_478 = 0;
      local_470 = &local_res20;
      uVar3 = __stdio_common_vswprintf(*puVar4,_Memory,(ulonglong)uVar5,param_3);
      uVar2 = uVar3;
      if ((int)uVar3 < 0) {
        uVar2 = 0xffffffff;
      }
      bVar1 = (int)uVar5 <= (int)uVar2;
      uVar5 = uVar5 * 2;
      _Memory_00 = _Memory;
    } while (bVar1 || (int)uVar3 < 0);
  }
  *(undefined2 *)(_Memory + (ulonglong)uVar2 * 2) = 0;
  local_450 = (undefined8 *)0x0;
  (**(code **)(*local_458 + 0x10))(local_458,_Memory,local_459);
  free(_Memory_00);
LAB_14681633e:
  if ((local_48 ^ (ulonglong)auStack_498) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14681636c FUN_14681636c body=163 status=ok
// SIG undefined FUN_14681636c(void)

void FUN_14681636c(longlong *param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 auStack_468 [40];
  undefined2 *local_440;
  undefined2 *local_438;
  ulonglong *local_430;
  char local_428;
  undefined2 local_420 [512];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_468;
  local_440 = local_420;
  local_428 = '\0';
  local_430 = &local_20;
  local_438 = local_440;
  FUN_1467eb1ca(param_2,&local_440);
  uVar1 = *(undefined1 *)(param_2 + 0x1c);
  *local_438 = 0;
  (**(code **)(*param_1 + 0x10))(param_1,local_440,uVar1,param_2 + 0x14);
  if (local_428 == '\x01') {
    FUN_1400020a8(local_440);
  }
  if ((local_20 ^ (ulonglong)auStack_468) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146816410 FUN_146816410 body=306 status=ok
// SIG undefined FUN_146816410(void)

void FUN_146816410(longlong param_1)

{
  DWORD *pDVar1;
  double dVar2;
  BOOLEAN BVar3;
  DWORD DVar4;
  DWORD DVar5;
  bool bVar6;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  DVar4 = GetCurrentThreadId();
  pDVar1 = (DWORD *)(*(longlong *)(param_1 + 0x10) + 0xa8);
  LOCK();
  DVar5 = *pDVar1;
  bVar6 = DVar5 == 0xffffffff;
  if (bVar6) {
    *pDVar1 = DVar4;
    DVar5 = 0xffffffff;
  }
  UNLOCK();
  if (bVar6) {
    QueryPerformanceCounter(&local_58);
    dVar2 = (double)local_58.QuadPart * DAT_14c83f420 + 16777216.0 + 1.0;
    QueryPerformanceCounter(&local_58);
    if ((double)local_58.QuadPart * DAT_14c83f420 + 16777216.0 < dVar2) {
      do {
        BVar3 = TryAcquireSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x10));
        if (BVar3 != '\0') {
          ReleaseSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x10));
          break;
        }
        QueryPerformanceCounter(&local_58);
      } while ((double)local_58.QuadPart * DAT_14c83f420 + 16777216.0 < dVar2);
    }
    LOCK();
    *(DWORD *)(*(longlong *)(param_1 + 0x10) + 0xa4) = DVar4;
    UNLOCK();
    FUN_14626bd28(param_1);
  }
  else if (DVar5 == DVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_78);
  }
  if ((local_50 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14681655e FUN_14681655e body=158 status=ok
// SIG undefined FUN_14681655e(void)

void FUN_14681655e(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 0x868);
  if (lVar2 == 0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0x80;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined8 **)(param_1 + 0x868) = puVar1;
    FUN_1456bcfbc(0);
    lVar2 = *(longlong *)(param_1 + 0x868);
  }
  FUN_144a13f80(lVar2,local_1c,param_2,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468165fe FUN_1468165fe body=186 status=ok
// SIG undefined FUN_1468165fe(void)

undefined8 FUN_1468165fe(undefined8 param_1)

{
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined1 auStack_478 [32];
  undefined4 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined2 *local_438;
  undefined2 *local_430;
  ulonglong *local_428;
  char local_420;
  undefined2 local_418 [512];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_478;
  local_438 = local_418;
  local_420 = '\0';
  local_428 = &local_18;
  local_448 = in_stack_00000038;
  local_450 = in_stack_00000030;
  local_458 = in_stack_00000028;
  local_430 = local_438;
  FUN_140212aa8(&local_438);
  *local_430 = 0;
  FUN_140056680(param_1,local_438);
  if (local_420 == '\x01') {
    FUN_1400020a8(local_438);
  }
  if ((local_18 ^ (ulonglong)auStack_478) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468166bc FUN_1468166bc body=140 status=ok
// SIG undefined FUN_1468166bc(void)

void FUN_1468166bc(uint *param_1,uint param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50 [16];
  uint *local_40;
  uint local_38;
  undefined1 local_29;
  undefined1 *local_28;
  uint **local_20;
  undefined *local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*param_1 & 0xfffffffe) == param_2) {
    local_20 = &local_40;
    local_10 = &local_29;
    local_18 = &DAT_142788402;
    local_28 = &LAB_142788404;
    local_58 = 0x7ff0000000000000;
    local_40 = param_1;
    local_38 = param_2;
    FUN_1456d3e9c(local_50,param_1);
  }
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681674a FUN_14681674a body=215 status=ok
// SIG undefined FUN_14681674a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14681674a(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 auStack_478 [32];
  double local_458;
  LARGE_INTEGER local_450;
  undefined2 *local_448;
  undefined2 *local_440;
  ulonglong *local_438;
  char local_430;
  undefined2 local_428 [512];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_478;
  local_448 = local_428;
  local_430 = '\0';
  local_438 = &local_28;
  local_440 = local_448;
  FUN_1467eb1ca(param_2,&local_448);
  QueryPerformanceCounter(&local_450);
  local_458 = ((double)local_450.QuadPart * DAT_14c83f420 + 16777216.0) - _DAT_14c86a9d8;
  uVar1 = *(undefined1 *)(param_2 + 0x1c);
  *local_440 = 0;
  FUN_14049c200(param_1,local_448,uVar1,param_2 + 0x14);
  if (local_430 == '\x01') {
    FUN_1400020a8(local_448);
  }
  if ((local_28 ^ (ulonglong)auStack_478) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146816822 FUN_146816822 body=108 status=ok
// SIG undefined FUN_146816822(void)

undefined8 * FUN_146816822(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c872ef8) {
    FUN_144b3d300(&DAT_14c872ef8);
    if (DAT_14c872ef8 == -1) {
      FUN_1459825b0(&DAT_14c872ee0);
      atexit(FUN_1427868a5);
      _Init_thread_footer(&DAT_14c872ef8);
    }
  }
  return &DAT_14c872ee0;
}



// FUNCTION 14681688e FUN_14681688e body=668 status=ok
// SIG undefined FUN_14681688e(void)

void FUN_14681688e(longlong param_1,undefined8 param_2)

{
  DWORD DVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  DWORD DVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong local_68;
  PSRWLOCK local_60;
  char local_58;
  char local_57;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = *(longlong *)(param_1 + 0x10);
  LOCK();
  puVar9 = (uint *)(local_50 + 8);
  uVar6 = *puVar9;
  *puVar9 = *puVar9 + 2;
  UNLOCK();
  local_70 = param_2;
  if ((uVar6 & 1) != 0) {
    FUN_142787bd2(&local_50);
  }
  DVar5 = GetCurrentThreadId();
  lVar12 = *(longlong *)(param_1 + 0x10);
  DVar1 = *(DWORD *)(lVar12 + 0xa8);
  iVar7 = *(int *)(lVar12 + 0x60);
  if ((longlong)iVar7 != 0) {
    lVar2 = *(longlong *)(lVar12 + 0x58);
    lVar11 = 0;
    uVar6 = 0;
    local_68 = param_1;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar11);
      if (DVar1 == DVar5) {
        lVar8 = *(longlong *)(lVar12 + 0xd0);
        if (*(longlong *)(lVar12 + 0xd0) == 0) {
          lVar8 = lVar12 + 200;
        }
        uVar10 = uVar6 + 0x1f;
        if (-1 < (int)uVar6) {
          uVar10 = uVar6;
        }
        uVar4 = uVar6 & 0x1f;
        uVar6 = uVar6 + 1;
        if ((*(uint *)(lVar8 + (longlong)((int)uVar10 >> 5) * 4) >> uVar4 & 1) != 0)
        goto LAB_14681693d;
      }
      else {
LAB_14681693d:
        (**(code **)(*plVar3 + 0x18))(plVar3,local_70);
      }
      lVar11 = lVar11 + 8;
    } while ((longlong)iVar7 * 8 != lVar11);
    lVar12 = *(longlong *)(local_68 + 0x10);
    param_1 = local_68;
  }
  if ((*(char *)(lVar12 + 0xad) == '\x01') && (*(int *)(lVar12 + 0xa8) == -1)) {
    FUN_14681674a(lVar12,local_70);
    lVar12 = *(longlong *)(param_1 + 0x10);
  }
  if ((*(DWORD *)(lVar12 + 0xa4) == DVar5) && (*(int *)(lVar12 + 0x50) != 0)) {
    FUN_1405043e4(&local_60,lVar12);
    if (local_57 == '\x01') {
      if (*(DWORD *)(*(longlong *)(param_1 + 0x10) + 0xa4) == DVar5) {
        FUN_14050447c();
        lVar12 = *(longlong *)(param_1 + 0x10);
        DVar1 = *(DWORD *)(lVar12 + 0xa8);
        iVar7 = *(int *)(lVar12 + 0x50);
        if ((longlong)iVar7 != 0) {
          lVar2 = *(longlong *)(lVar12 + 0x48);
          lVar11 = 0;
          uVar6 = 0;
          local_68 = param_1;
          do {
            plVar3 = *(longlong **)(lVar2 + lVar11);
            if (DVar1 == DVar5) {
              lVar8 = *(longlong *)(lVar12 + 0xb8);
              if (*(longlong *)(lVar12 + 0xb8) == 0) {
                lVar8 = lVar12 + 0xb0;
              }
              uVar10 = uVar6 + 0x1f;
              if (-1 < (int)uVar6) {
                uVar10 = uVar6;
              }
              uVar4 = uVar6 & 0x1f;
              uVar6 = uVar6 + 1;
              if ((*(uint *)(lVar8 + (longlong)((int)uVar10 >> 5) * 4) >> uVar4 & 1) != 0)
              goto LAB_146816a1e;
            }
            else {
LAB_146816a1e:
              (**(code **)(*plVar3 + 0x18))(plVar3,local_70);
            }
            lVar11 = lVar11 + 8;
          } while ((longlong)iVar7 * 8 != lVar11);
          lVar12 = *(longlong *)(local_68 + 0x10);
          param_1 = local_68;
        }
        if (*(DWORD *)(lVar12 + 0xa8) == DVar5) {
          FUN_14626bd28(param_1);
        }
        if (local_57 == '\x01') {
          *(undefined4 *)&local_60[0x14].Ptr = 0xffffffff;
        }
        if (local_58 == '\x01') {
          ReleaseSRWLockExclusive(local_60);
        }
        goto LAB_146816ad6;
      }
      *(undefined4 *)&local_60[0x14].Ptr = 0xffffffff;
    }
    if (local_58 == '\x01') {
      ReleaseSRWLockExclusive(local_60);
    }
    lVar12 = *(longlong *)(param_1 + 0x10);
  }
  iVar7 = FUN_1427868ba(lVar12 + 0x40,local_70);
  if (iVar7 != 0) {
    uVar6 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x9c);
    if ((uVar6 & 1) != 0) {
      puVar9 = (uint *)(*(longlong *)(param_1 + 0x10) + 0x9c);
      LOCK();
      uVar10 = *puVar9;
      if (uVar6 == uVar10) {
        *puVar9 = uVar6 + 1;
      }
      UNLOCK();
      if (uVar6 == uVar10) {
        FUN_1447458da(puVar9,0xffffffff);
      }
    }
  }
LAB_146816ad6:
  LOCK();
  *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + -2;
  UNLOCK();
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146816b2c FUN_146816b2c body=91 status=ok
// SIG undefined FUN_146816b2c(void)

bool FUN_146816b2c(undefined8 param_1,wchar_t *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  size_t sVar2;
  bool bVar3;
  
  bVar3 = false;
  lVar1 = FUN_144a29ec4(param_1,param_2,0);
  if (lVar1 != 0) {
    sVar2 = wcslen(param_2);
    lVar1 = FUN_140c97480(lVar1 + (longlong)(int)sVar2 * 2,param_3,param_4,0,0);
    bVar3 = lVar1 != 0;
  }
  return bVar3;
}



// FUNCTION 146816b88 FUN_146816b88 body=138 status=ok
// SIG undefined FUN_146816b88(void)

undefined8 FUN_146816b88(undefined8 param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined8 uVar3;
  undefined4 extraout_var_00;
  undefined1 auStack_248 [32];
  undefined1 local_228;
  undefined8 local_220;
  wchar_t local_218 [260];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_220 = 0;
  local_228 = 1;
  cVar1 = FUN_140751ea8(param_1,param_2,local_218,0x100);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = _wtoi(local_218);
    *param_3 = (char)iVar2;
    uVar3 = CONCAT71((int7)(CONCAT44(extraout_var,iVar2) >> 8),1);
    if ((char)iVar2 == '\0') {
      iVar2 = iswdigit(local_218[0]);
      uVar3 = CONCAT71((int7)(CONCAT44(extraout_var_00,iVar2) >> 8),iVar2 != 0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146816c14 FUN_146816c14 body=204 status=ok
// SIG undefined FUN_146816c14(void)

undefined4 FUN_146816c14(longlong *param_1,undefined8 *param_2)

{
  wint_t *pwVar1;
  longlong lVar2;
  int iVar3;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1446f8c06(param_2,0);
  }
  if ((undefined2 *)*param_2 != (undefined2 *)0x0) {
    *(undefined2 *)*param_2 = 0;
  }
  iVar3 = iswspace(*(wint_t *)*param_1);
  pwVar1 = (wint_t *)*param_1;
  while (iVar3 != 0) {
    *param_1 = (longlong)(pwVar1 + 1);
    iVar3 = iswspace(pwVar1[1]);
    pwVar1 = (wint_t *)*param_1;
  }
  iVar3 = iswalnum(*pwVar1);
  if (*(short *)*param_1 == 0x5f || iVar3 != 0) {
    do {
      FUN_140002184(param_2);
      lVar2 = *param_1;
      *param_1 = lVar2 + 2;
      iVar3 = iswalnum(*(wint_t *)(lVar2 + 2));
    } while (*(short *)*param_1 == 0x5f || iVar3 != 0);
  }
  return CONCAT31((int3)(*(int *)(param_2 + 1) - 2U >> 8),*(int *)(param_2 + 1) - 2U < 0x7fffffff);
}



// FUNCTION 146816ce0 FUN_146816ce0 body=101 status=ok
// SIG undefined FUN_146816ce0(void)

undefined4 FUN_146816ce0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0;
  uVar1 = FUN_146816d46(param_1,&local_30);
  FUN_1402980a2(param_2,local_30,local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146816d46 FUN_146816d46 body=280 status=ok
// SIG undefined FUN_146816d46(void)

byte FUN_146816d46(longlong *param_1,undefined8 *param_2,byte param_3)

{
  byte bVar1;
  ushort uVar2;
  byte bVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  bool bVar8;
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  puVar5 = (ushort *)*param_1;
  bVar1 = 0;
  bVar3 = 0;
  bVar8 = false;
  puVar7 = (ushort *)0x0;
  puVar6 = puVar5;
  while( true ) {
    puVar4 = puVar6 + 1;
    uVar2 = *puVar6;
    if ((uVar2 < 0xe) && ((0x2401U >> (uVar2 & 0x1f) & 1) != 0)) break;
    if ((~(bVar3 | param_3) & uVar2 == 0x2f) == 0) {
      if ((bVar3 == 0 && (param_3 & 1) == 0) && uVar2 == 0x7c) break;
    }
    else {
      bVar8 = (bool)(bVar8 | *puVar4 == 0x2f);
    }
    bVar3 = bVar3 ^ uVar2 == 0x22;
    if (puVar7 != (ushort *)0x0) {
      puVar6 = puVar7;
    }
    if (!bVar8) {
      puVar7 = puVar6;
    }
    *param_1 = (longlong)puVar4;
    puVar5 = puVar5 + 1;
    bVar1 = 1;
    puVar6 = puVar4;
  }
  if (puVar7 != (ushort *)0x0) {
    *param_2 = puVar7;
    *(int *)(param_2 + 1) = (int)((ulonglong)((longlong)puVar5 - (longlong)puVar7) >> 1);
    puVar6 = (ushort *)*param_1;
  }
  if (param_3 == 0) {
    while( true ) {
      uVar2 = *puVar6;
      if (((uVar2 != 10) && (uVar2 != 0x7c)) && (uVar2 != 0xd)) break;
      *param_1 = (longlong)(puVar6 + 1);
      puVar6 = puVar6 + 1;
    }
  }
  else {
    uVar2 = *puVar6;
    puVar5 = puVar6;
    if (uVar2 == 0xd) {
      puVar5 = puVar6 + 1;
      *param_1 = (longlong)puVar5;
      uVar2 = puVar6[1];
    }
    if (uVar2 == 10) {
      *param_1 = (longlong)(puVar5 + 1);
      uVar2 = puVar5[1];
    }
  }
  return bVar1 | uVar2 != 0;
}



// FUNCTION 146816e5e FUN_146816e5e body=103 status=ok
// SIG undefined FUN_146816e5e(void)

longlong FUN_146816e5e(ushort *param_1)

{
  longlong lVar1;
  int iVar2;
  ushort uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == 0) {
    return 0;
  }
  lVar1 = 0;
  do {
    param_1 = param_1 + 1;
    if ((ushort)(uVar3 - 0x30) < 10) {
      iVar2 = uVar3 - 0x30;
    }
    else if ((ushort)(uVar3 - 0x61) < 6) {
      iVar2 = uVar3 - 0x57;
    }
    else {
      iVar2 = uVar3 - 0x37;
      if (5 < (ushort)(uVar3 - 0x41)) {
        iVar2 = 0;
      }
    }
    lVar1 = lVar1 * 0x10 + (longlong)iVar2;
    uVar3 = *param_1;
  } while (uVar3 != 0);
  return lVar1;
}



// FUNCTION 146816ec6 FUN_146816ec6 body=242 status=ok
// SIG undefined FUN_146816ec6(void)

ulonglong FUN_146816ec6(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 unaff_RBP;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = 0;
  do {
    iVar2 = iswalpha(*(wint_t *)(param_1 + uVar3 * 2));
    if (iVar2 == 0) {
      iVar2 = iswdigit(*(wint_t *)(param_1 + uVar3 * 2));
      if (iVar2 == 0) {
        uVar1 = *(ushort *)(param_1 + uVar3 * 2);
        if ((0x2e < (ulonglong)uVar1) || ((0x680000000000U >> ((ulonglong)uVar1 & 0x3f) & 1) == 0))
        {
          if (uVar1 == 0x3a && uVar3 != 0) {
            FUN_14006620a(&local_50,param_1,uVar3 & 0xffffffff);
            if (&local_50 == param_2) {
              if (local_50 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*param_2 != 0) {
                FUN_1400020a8();
              }
              *param_2 = local_50;
              *(undefined4 *)(param_2 + 1) = local_48;
              *(undefined4 *)((longlong)param_2 + 0xc) = local_44;
            }
          }
          if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
            return CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1 == 0x3a && uVar3 != 0) &
                   0xffffffff;
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
      }
    }
    uVar3 = uVar3 + 1;
  } while( true );
}



// FUNCTION 146816fba FUN_146816fba body=100 status=ok
// SIG undefined FUN_146816fba(void)

undefined8 FUN_146816fba(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145c6a176(local_28);
  FUN_144a882a8(param_1,local_28,L"FeaturePacks/");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146817020 FUN_146817020 body=568 status=ok
// SIG undefined FUN_146817020(void)

ulonglong FUN_146817020(undefined8 *param_1,undefined8 param_2)

{
  void *_Src;
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined1 *local_a0;
  undefined8 *local_98;
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 *local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78 [2];
  undefined8 local_68;
  undefined1 *local_60;
  int local_58;
  undefined4 *local_50;
  undefined4 local_48;
  code *local_40;
  undefined1 **local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_68 = param_2;
  FUN_140056680(local_78,L"/?:&\\*\"<>|%#@^");
  local_88 = (undefined1 *)0x0;
  local_80 = *(int *)(param_1 + 1);
  lVar4 = (longlong)local_80;
  _Src = (void *)*param_1;
  if (lVar4 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_80,0);
    memcpy(local_88,_Src,lVar4 * 2);
  }
  FUN_1448097c4(&local_88,&DAT_149e01f64,&DAT_149e065c6,0);
  FUN_1448b5552(&local_88);
  cVar1 = FUN_144a791f8(&local_88,&DAT_149e35204,2,1);
  if (cVar1 == '\0') {
    FUN_1401ae99a(&local_88);
  }
  else {
    iVar2 = local_80 + -1;
    if (local_80 == 0) {
      iVar2 = 0;
    }
    if (0 < iVar2) {
      iVar5 = local_80 - (uint)(0 < iVar2);
      if (iVar5 != 0) {
        memmove(local_88,local_88 + 2,(longlong)iVar5 * 2);
      }
      local_80 = local_80 - (uint)(0 < iVar2);
    }
    FUN_1401ae99a(&local_88);
    FUN_140ba7826(&local_b8,&DAT_149e065c6,&local_88);
    if (local_88 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    local_88 = local_b8;
    local_80 = (int)local_b0;
    local_7c = local_b0._4_4_;
  }
  local_89 = 1;
  local_b8 = &local_8a;
  local_8a = 1;
  local_38 = &local_b8;
  local_98 = &local_68;
  local_58 = local_80 + -1;
  if (local_80 == 0) {
    local_58 = 0;
  }
  local_40 = FUN_142788b86;
  local_50 = &local_2c;
  local_2c = 0x5c002f;
  local_48 = 2;
  local_b0 = &local_88;
  local_a8 = local_78;
  local_a0 = &local_89;
  local_60 = local_88;
  FUN_1461de5f2();
  uVar3 = CONCAT71((int7)((ulonglong)&local_89 >> 8),local_89);
  if (local_88 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681725a FUN_14681725a body=394 status=ok
// SIG undefined FUN_14681725a(void)

undefined8 FUN_14681725a(undefined8 param_1,longlong *param_2,short param_3)

{
  short sVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  short sVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(&local_38);
  uVar8 = (int)param_2[1] - 1;
  if ((int)param_2[1] == 0) {
    uVar8 = 0;
  }
  local_48 = 0;
  uStack_40 = (ulonglong)(uVar8 + 1);
  FUN_144a2dbb8();
  if ((int)uVar8 < 1) {
    *(undefined2 *)(local_48 + (longlong)(int)uVar8 * 2) = 0;
  }
  else {
    uVar2 = (ulonglong)uVar8;
    uVar4 = 0;
    do {
      sVar1 = *(short *)(*param_2 + uVar4 * 2);
      if ((longlong)local_30 != 0) {
        uVar7 = 0;
        do {
          if (*(short *)(local_38 + uVar7) == sVar1) {
            sVar5 = param_3;
            if ((~uVar7 & 0x1fffffffe) != 0) goto LAB_1468172fb;
            break;
          }
          uVar7 = uVar7 + 2;
        } while ((longlong)local_30 * 2 != uVar7);
      }
      sVar5 = sVar1;
LAB_1468172fb:
      *(short *)(local_48 + uVar4 * 2) = sVar5;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar2);
    *(undefined2 *)(local_48 + uVar2 * 2) = 0;
    if (param_3 == 0) {
      uVar4 = 0;
      uVar6 = 0;
      do {
        if (*(short *)(local_48 + uVar4 * 2) == 0) {
          uVar3 = (uint)uVar4;
          uVar7 = uVar4 & 0xffffffff;
          if ((int)uVar3 < (int)uVar6) {
            uVar7 = (ulonglong)uVar6;
            uVar3 = uVar6;
          }
          do {
            uVar6 = uVar3 + 1;
            if ((int)uVar8 <= (int)uVar6) goto LAB_14681739c;
            sVar1 = *(short *)(local_48 + 2 + uVar7 * 2);
            uVar7 = uVar7 + 1;
            uVar3 = uVar6;
          } while (sVar1 == 0);
          *(short *)(local_48 + uVar4 * 2) = sVar1;
          *(undefined2 *)(local_48 + uVar7 * 2) = 0;
        }
LAB_14681739c:
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar2);
    }
  }
  FUN_140056680(param_1,local_48);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468173e6 FUN_1468173e6 body=85 status=ok
// SIG undefined FUN_1468173e6(void)

undefined8 * FUN_1468173e6(undefined8 *param_1)

{
  uint uVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14681743c();
  uVar1 = *(uint *)(puVar2 + 1);
  if ((int)uVar1 < 2) {
    FUN_145c83956(param_1);
  }
  else {
    *param_1 = 0;
    _Src = (void *)*puVar2;
    *(uint *)(param_1 + 1) = uVar1;
    FUN_1446dd670(param_1,(ulonglong)uVar1,0);
    memcpy((void *)*param_1,_Src,(ulonglong)uVar1 * 2);
  }
  return param_1;
}



// FUNCTION 14681743c FUN_14681743c body=515 status=ok
// SIG undefined FUN_14681743c(void)

longlong FUN_14681743c(void)

{
  wchar_t **ppwVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  size_t sVar6;
  wchar_t *_Str;
  undefined4 uVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  wchar_t *local_78;
  int local_70;
  longlong local_68 [2];
  wchar_t *local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = FUN_1401aee1c();
  if (*(char *)(lVar4 + 0x11b) == '\0') {
    ppwVar1 = (wchar_t **)(lVar4 + 0x68);
    uVar5 = FUN_14118da1c();
    local_88 = 0;
    FUN_14063337c(uVar5,L"ShaderWorkingDir=",ppwVar1,1);
    *(undefined1 *)(lVar4 + 0x11b) = 1;
    if (1 < *(int *)(lVar4 + 0x70)) {
      cVar2 = FUN_1401aeb9c(ppwVar1);
      if (cVar2 == '\0') {
        FUN_140e4328c(ppwVar1);
        FUN_1449b8608(&local_58,ppwVar1,&DAT_149e065c6);
        local_78 = local_58;
        if (ppwVar1 != &local_58) {
          if (*(longlong *)(lVar4 + 0x68) != 0) {
            FUN_1400020a8();
          }
          *(wchar_t **)(lVar4 + 0x68) = local_58;
          *(undefined4 *)(lVar4 + 0x70) = (undefined4)local_50;
          *(undefined4 *)(lVar4 + 0x74) = local_50._4_4_;
          goto LAB_14681749e;
        }
      }
      else {
        _Str = L"";
        if (*(int *)(lVar4 + 0x70) != 0) {
          _Str = *(wchar_t **)(lVar4 + 0x68);
        }
        uVar5 = FUN_140d6afb0();
        FUN_140056680(&local_78,uVar5);
        local_58 = L"";
        if (local_70 != 0) {
          local_58 = local_78;
        }
        uVar7 = 0;
        uVar3 = 0;
        if (local_58 != (wchar_t *)0x0) {
          sVar6 = wcslen(local_58);
          uVar3 = (int)sVar6;
        }
        local_50 = CONCAT44(local_50._4_4_,uVar3);
        local_48 = _Str;
        if (_Str != (wchar_t *)0x0) {
          sVar6 = wcslen(_Str);
          uVar7 = (int)sVar6;
        }
        local_40 = uVar7;
        FUN_140bee87a(local_68,&local_58,2);
        FUN_144a882a8(&local_58,local_68,&DAT_149e065c6);
        if (ppwVar1 == &local_58) {
          if (local_58 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(lVar4 + 0x68) != 0) {
            FUN_1400020a8();
          }
          *(wchar_t **)(lVar4 + 0x68) = local_58;
          local_58 = (wchar_t *)0x0;
          *(undefined4 *)(lVar4 + 0x70) = (undefined4)local_50;
          *(undefined4 *)(lVar4 + 0x74) = local_50._4_4_;
          local_50 = 0;
        }
        if (local_68[0] != 0) {
          FUN_1400020a8();
        }
      }
      if (local_78 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_14681749e:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4 + 0x68;
}



// FUNCTION 146817640 FUN_146817640 body=108 status=ok
// SIG undefined FUN_146817640(void)

undefined8 FUN_146817640(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_140d6afb0();
  FUN_140056680(local_28,uVar1);
  FUN_144a882a8(param_1,local_28,L"Saved/Sandboxes");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468176ae FUN_1468176ae body=190 status=ok
// SIG undefined FUN_1468176ae(void)

undefined8 FUN_1468176ae(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400b22c2(local_48,"Windows");
  uVar1 = FUN_14047ac8c();
  FUN_1449b8608(local_58,uVar1,L"BugIt/");
  FUN_1401c7f3e(local_38,local_58,local_48);
  FUN_144a882a8(param_1,local_38,&DAT_149e065c6);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681776e FUN_14681776e body=40 status=ok
// SIG undefined FUN_14681776e(void)

undefined8 FUN_14681776e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14047ac8c();
  FUN_1449b8608(param_1,uVar1,L"Automation/");
  return param_1;
}



// FUNCTION 146817796 FUN_146817796 body=115 status=ok
// SIG undefined FUN_146817796(void)

undefined8 FUN_146817796(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14047ac8c();
  FUN_1449b8608(local_28,uVar1,L"Automation/");
  FUN_144a882a8(param_1,local_28,L"Tmp/");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681780a FUN_14681780a body=115 status=ok
// SIG undefined FUN_14681780a(void)

undefined8 FUN_14681780a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14047ac8c();
  FUN_1449b8608(local_28,uVar1,L"Automation/");
  FUN_144a882a8(param_1,local_28,L"Logs/");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681787e FUN_14681787e body=40 status=ok
// SIG undefined FUN_14681787e(void)

undefined8 FUN_14681787e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14047ac8c();
  FUN_1449b8608(param_1,uVar1,L"Diff/");
  return param_1;
}



// FUNCTION 1468178a6 FUN_1468178a6 body=1110 status=ok
// SIG undefined FUN_1468178a6(void)

/* WARNING: Removing unreachable block (ram,0x000146817b1d) */
/* WARNING: Removing unreachable block (ram,0x000146817a38) */
/* WARNING: Removing unreachable block (ram,0x000146817954) */
/* WARNING: Removing unreachable block (ram,0x0001468179c6) */
/* WARNING: Removing unreachable block (ram,0x000146817aaa) */
/* WARNING: Removing unreachable block (ram,0x000146817c61) */

longlong FUN_1468178a6(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar6 = FUN_1401aee1c();
  if (*(char *)(lVar6 + 0x123) == '\0') {
    plVar2 = (longlong *)(lVar6 + 0xe8);
    FUN_140056680(&local_108,L"LimitedAccess");
    iVar9 = *(int *)(lVar6 + 0xf0);
    *(uint *)(lVar6 + 0xf0) = iVar9 + 1U;
    if (*(uint *)(lVar6 + 0xf4) < iVar9 + 1U) {
      FUN_1447a1bd6(plVar2,iVar9);
    }
    lVar3 = *plVar2;
    lVar8 = (longlong)iVar9 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined8 *)(lVar3 + lVar8) = local_108;
    *(undefined4 *)(lVar3 + 8 + lVar8) = (undefined4)local_100;
    *(undefined4 *)(lVar3 + 0xc + lVar8) = local_100._4_4_;
    local_100 = (longlong *)0x0;
    local_108 = 0;
    FUN_140056680(&local_108,L"NotForLicensees");
    iVar9 = *(int *)(lVar6 + 0xf0);
    *(uint *)(lVar6 + 0xf0) = iVar9 + 1U;
    if (*(uint *)(lVar6 + 0xf4) < iVar9 + 1U) {
      FUN_1447a1bd6(plVar2,iVar9);
    }
    lVar3 = *plVar2;
    lVar8 = (longlong)iVar9 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined8 *)(lVar3 + lVar8) = local_108;
    *(undefined4 *)(lVar3 + 8 + lVar8) = (undefined4)local_100;
    *(undefined4 *)(lVar3 + 0xc + lVar8) = local_100._4_4_;
    local_100 = (longlong *)0x0;
    local_108 = 0;
    FUN_140056680(&local_108,L"NoRedist");
    iVar9 = *(int *)(lVar6 + 0xf0);
    *(uint *)(lVar6 + 0xf0) = iVar9 + 1U;
    if (*(uint *)(lVar6 + 0xf4) < iVar9 + 1U) {
      FUN_1447a1bd6(plVar2,iVar9);
    }
    lVar3 = *plVar2;
    lVar8 = (longlong)iVar9 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined8 *)(lVar3 + lVar8) = local_108;
    *(undefined4 *)(lVar3 + 8 + lVar8) = (undefined4)local_100;
    *(undefined4 *)(lVar3 + 0xc + lVar8) = local_100._4_4_;
    local_100 = (longlong *)0x0;
    local_108 = 0;
    FUN_140056680(&local_108,L"CarefullyRedist");
    iVar9 = *(int *)(lVar6 + 0xf0);
    *(uint *)(lVar6 + 0xf0) = iVar9 + 1U;
    if (*(uint *)(lVar6 + 0xf4) < iVar9 + 1U) {
      FUN_1447a1bd6(plVar2,iVar9);
    }
    lVar3 = *plVar2;
    lVar8 = (longlong)iVar9 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined8 *)(lVar3 + lVar8) = local_108;
    *(undefined4 *)(lVar3 + 8 + lVar8) = (undefined4)local_100;
    *(undefined4 *)(lVar3 + 0xc + lVar8) = local_100._4_4_;
    local_100 = (longlong *)0x0;
    local_108 = 0;
    FUN_140056680(&local_108,L"EpicInternal");
    iVar9 = *(int *)(lVar6 + 0xf0);
    *(uint *)(lVar6 + 0xf0) = iVar9 + 1U;
    if (*(uint *)(lVar6 + 0xf4) < iVar9 + 1U) {
      FUN_1447a1bd6(plVar2,iVar9);
    }
    lVar3 = *plVar2;
    lVar8 = (longlong)iVar9 * 0x10;
    iVar9 = 0;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined8 *)(lVar3 + lVar8) = local_108;
    local_108 = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = (undefined4)local_100;
    *(undefined4 *)(lVar3 + 0xc + lVar8) = local_100._4_4_;
    local_100 = (longlong *)0x0;
    plVar7 = (longlong *)FUN_140f7b050();
    plVar1 = plVar7 + 2;
    local_108 = 0x100000000;
    local_f8 = 0xffffffff;
    local_f0 = 0;
    local_100 = plVar1;
    if ((int)plVar7[5] != 0) {
      FUN_1449c0562(&local_108);
      iVar9 = (int)plVar7[5];
    }
    local_58 = local_f8;
    uVar4 = local_58;
    local_50 = local_f0;
    local_4c = local_ec;
    local_68 = local_108;
    local_60 = local_100;
    local_58._4_4_ = (int)((ulonglong)local_f8 >> 0x20);
    local_70 = plVar7;
    if ((local_58._4_4_ != iVar9) || (local_100 != plVar1)) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        local_108 = *(undefined8 *)(*local_70 + (longlong)iVar5 * 0xa0);
        FUN_1468128ac(&local_100);
        FUN_1400021e4(&local_108,&local_118);
        iVar5 = *(int *)(lVar6 + 0xf0);
        *(uint *)(lVar6 + 0xf0) = iVar5 + 1U;
        if (*(uint *)(lVar6 + 0xf4) < iVar5 + 1U) {
          FUN_1447a1bd6(plVar2,iVar5);
        }
        lVar3 = *plVar2;
        lVar8 = (longlong)iVar5 * 0x10;
        *(undefined8 *)(lVar3 + lVar8) = 0;
        *(undefined8 *)(lVar3 + lVar8) = local_118;
        *(undefined4 *)(lVar3 + 8 + lVar8) = (undefined4)local_110;
        *(undefined4 *)(lVar3 + 0xc + lVar8) = local_110._4_4_;
        local_110 = 0;
        local_118 = 0;
        FUN_1457d3294(&local_100);
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_70 != plVar7 || (local_60 != plVar1 || local_58._4_4_ != iVar9));
    }
    local_58 = uVar4;
    *(undefined1 *)(lVar6 + 0x123) = 1;
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6 + 0xe8;
}



// FUNCTION 146817cfe FUN_146817cfe body=635 status=ok
// SIG undefined FUN_146817cfe(void)

/* WARNING: Removing unreachable block (ram,0x000146817f39) */

ulonglong FUN_146817cfe(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  size_t sVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *_Str;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  longlong local_78;
  int local_70;
  undefined8 local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = FUN_1401aee1c();
  if (*(char *)(lVar4 + 0x124) == '\0') {
    FUN_140056680(&local_58,&DAT_149e065c6);
    plVar6 = (longlong *)FUN_1468178a6();
    if ((longlong)(int)plVar6[1] != 0) {
      lVar7 = *plVar6;
      lVar10 = (longlong)(int)plVar6[1] << 4;
      do {
        FUN_140474144(&local_78,&local_58,lVar7);
        FUN_1412cfe60(&local_68,&local_78,(local_70 == 0) + '\x01');
        FUN_140002184(&local_68,0x2f);
        iVar1 = *(int *)(lVar4 + 0x100);
        *(uint *)(lVar4 + 0x100) = iVar1 + 1U;
        if (*(uint *)(lVar4 + 0x104) < iVar1 + 1U) {
          FUN_1447a1bd6((longlong *)(lVar4 + 0xf8),iVar1);
        }
        lVar2 = *(longlong *)(lVar4 + 0xf8);
        lVar8 = (longlong)iVar1 * 0x10;
        *(undefined8 *)(lVar2 + lVar8) = 0;
        *(undefined8 *)(lVar2 + lVar8) = local_68;
        *(undefined4 *)(lVar2 + 8 + lVar8) = (undefined4)local_60;
        *(undefined4 *)(lVar2 + 0xc + lVar8) = local_60._4_4_;
        local_60 = 0;
        local_68 = 0;
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        lVar7 = lVar7 + 0x10;
        lVar10 = lVar10 + -0x10;
      } while (lVar10 != 0);
    }
    *(undefined1 *)(lVar4 + 0x124) = 1;
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  local_58 = (void *)0x0;
  local_50 = *(int *)(param_1 + 1);
  lVar7 = (longlong)local_50;
  _Src = (void *)*param_1;
  if (lVar7 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar7 * 2);
  }
  uVar9 = 0;
  FUN_1448097c4(&local_58,&DAT_149e01f64,&DAT_149e065c6,0);
  FUN_1401aebe8(&local_58,0,0);
  iVar1 = *(int *)(lVar4 + 0x100);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(lVar4 + 0xf8);
    lVar7 = 0;
    do {
      _Str = L"";
      if (*(int *)(lVar4 + 8 + lVar7) != 0) {
        _Str = *(wchar_t **)(lVar4 + lVar7);
      }
      if (_Str != (wchar_t *)0x0) {
        sVar5 = wcslen(_Str);
        local_80 = 0xffffffff;
        local_88 = 0;
        iVar3 = FUN_1447ee042(&local_58,_Str,sVar5 & 0xffffffff,1);
        if (iVar3 != -1) {
          uVar9 = CONCAT71((int7)((ulonglong)_Str >> 8),1);
          goto LAB_146817e1d;
        }
      }
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar7);
    uVar9 = 0;
  }
LAB_146817e1d:
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 146817f7a FUN_146817f7a body=108 status=ok
// SIG undefined FUN_146817f7a(void)

undefined8 FUN_146817f7a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_140d6ac5a();
  FUN_140056680(local_28,uVar1);
  FUN_144a882a8(param_1,local_28,L"Source/");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146817fe8 FUN_146817fe8 body=108 status=ok
// SIG undefined FUN_146817fe8(void)

undefined8 FUN_146817fe8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_140d6afb0();
  FUN_140056680(local_28,uVar1);
  FUN_144a882a8(param_1,local_28,L"Source/");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146818056 FUN_146818056 body=108 status=ok
// SIG undefined FUN_146818056(void)

undefined8 FUN_146818056(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_1401af3ae();
  FUN_140056680(local_28,uVar1);
  FUN_144a882a8(param_1,local_28,L"FeaturePacks/");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468180c4 FUN_1468180c4 body=259 status=ok
// SIG undefined FUN_1468180c4(void)

longlong * FUN_1468180c4(longlong *param_1,longlong *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  
  iVar2 = (int)param_2[1];
  iVar3 = 0;
  iVar6 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar6 = 0;
  }
  if (iVar2 != 0 && iVar2 + -1 != 0) {
    uVar5 = (longlong)iVar6 * 2 - 2;
    do {
      sVar1 = *(short *)(*param_2 + uVar5);
      if ((sVar1 != 0x5c) && (sVar1 != 0x2f)) {
        iVar3 = (int)(uVar5 >> 1) + 1;
        break;
      }
      uVar5 = uVar5 - 2;
    } while (uVar5 != 0xfffffffffffffffe);
  }
  uVar5 = (longlong)iVar3 * 2;
  do {
    if (uVar5 == 0) {
      uVar4 = 0;
      goto LAB_146818114;
    }
    sVar1 = *(short *)(*param_2 + -2 + uVar5);
    uVar5 = uVar5 - 2;
  } while ((sVar1 != 0x5c) && (sVar1 != 0x2f));
  uVar4 = (int)(uVar5 >> 1) + 1;
LAB_146818114:
  FUN_14496493a(param_2,iVar3,iVar6 - iVar3,0);
  iVar2 = (int)param_2[1];
  uVar7 = iVar2 - 1;
  if (iVar2 == 0) {
    uVar7 = 0;
  }
  if ((int)uVar4 < (int)uVar7) {
    uVar7 = uVar4;
  }
  if (0 < (int)uVar7) {
    if (iVar2 - uVar7 != 0) {
      memmove((void *)*param_2,(void *)(*param_2 + (ulonglong)uVar7 * 2),
              (longlong)(int)(iVar2 - uVar7) * 2);
      iVar2 = (int)param_2[1];
    }
    iVar2 = iVar2 - uVar7;
  }
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = iVar2;
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  return param_1;
}



// FUNCTION 1468181c8 FUN_1468181c8 body=279 status=ok
// SIG undefined FUN_1468181c8(void)

undefined8 * FUN_1468181c8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  short sVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  undefined2 *_Src;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  
  _Src = (undefined2 *)*param_2;
  iVar9 = *(int *)(param_2 + 1);
  uVar10 = (longlong)iVar9 * 2;
  do {
    if (uVar10 == 0) goto LAB_14681823f;
    uVar1 = uVar10 - 2;
    lVar3 = uVar10 - 2;
    uVar10 = uVar1;
  } while (*(short *)((longlong)_Src + lVar3) != 0x2e);
  iVar4 = (int)(uVar1 >> 1);
  if (iVar4 != -1) {
    iVar5 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar5 = 0;
    }
    uVar10 = (longlong)iVar5 * 2;
    do {
      if (uVar10 == 0) goto LAB_1468182b7;
      sVar2 = *(short *)((longlong)_Src + (uVar10 - 2));
      uVar10 = uVar10 - 2;
    } while ((sVar2 != 0x5c) && (sVar2 != 0x2f));
    iVar7 = (int)(uVar10 >> 1);
    if ((iVar7 == -1) || (iVar7 <= iVar4)) {
LAB_1468182b7:
      if (iVar9 == 0) {
        _Src = &DAT_149dfb77a;
      }
      if (iVar4 < iVar5) {
        iVar5 = iVar4;
      }
      iVar9 = 0;
      if (0 < iVar5) {
        iVar9 = iVar5;
      }
      FUN_14006620a(param_1,_Src,iVar9);
      goto LAB_146818269;
    }
  }
LAB_14681823f:
  *param_1 = 0;
  *(int *)(param_1 + 1) = iVar9;
  if (iVar9 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar9,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar9 * 2);
  }
LAB_146818269:
  uVar8 = *(uint *)(param_3 + 1);
  psVar6 = (short *)*param_3;
  if ((1 < uVar8) && (*psVar6 != 0x2e)) {
    FUN_140002184(param_1,CONCAT62((int6)((ulonglong)psVar6 >> 0x10),0x2e));
    uVar8 = *(uint *)(param_3 + 1);
    psVar6 = (short *)*param_3;
  }
  iVar9 = uVar8 - 1;
  if (uVar8 == 0) {
    iVar9 = 0;
  }
  FUN_1400020e8(param_1,psVar6,iVar9);
  return param_1;
}



// FUNCTION 1468182e0 FUN_1468182e0 body=1422 status=ok
// SIG undefined FUN_1468182e0(void)

ulonglong FUN_1468182e0(undefined8 *param_1)

{
  wchar_t wVar1;
  void *_Src;
  int iVar2;
  uint uVar3;
  wchar_t *pwVar4;
  undefined2 *puVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined7 uVar13;
  undefined *puVar11;
  wchar_t *pwVar12;
  ushort uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  bool bVar19;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  wchar_t *local_68;
  int local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = (wchar_t *)0x0;
  local_50 = *(int *)(param_1 + 1);
  lVar10 = (longlong)local_50;
  _Src = (void *)*param_1;
  if (lVar10 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar10 * 2);
  }
  local_98 = 0;
  FUN_140807d8e(&local_58,&local_68,&DAT_149e065c6,&DAT_149e01f64);
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_58 = local_68;
  local_50 = local_60;
  local_4c = local_5c;
  pwVar12 = L"";
  if (local_60 != 0) {
    pwVar12 = local_68;
  }
  wVar1 = *pwVar12;
  uVar13 = (undefined7)((ulonglong)&local_58 >> 8);
  if (wVar1 == L'\0') {
    puVar11 = (undefined *)CONCAT71(uVar13,1);
    goto LAB_146818701;
  }
  if (((0xffffffe5 < ((ushort)wVar1 & 0xffffffdf) - 0x5b) && (pwVar12[1] == L':')) &&
     (pwVar12[2] == L'\0')) {
    puVar11 = (undefined *)CONCAT71(uVar13,1);
    goto LAB_146818701;
  }
  iVar2 = wcscmp(pwVar12,L"\\");
  puVar11 = (undefined *)CONCAT71(uVar13,1);
  if (((iVar2 == 0) || (iVar2 = wcscmp(pwVar12,L"\\\\"), iVar2 == 0)) ||
     ((wVar1 == L'\\' &&
      ((pwVar12[1] == L'\\' && (pwVar4 = wcschr(pwVar12 + 2,L'\\'), pwVar4 == (wchar_t *)0x0))))))
  goto LAB_146818701;
  FUN_140056680(&local_68,pwVar12);
  iVar2 = local_60 + -1;
  if (local_60 == 0) {
    iVar2 = 0;
  }
  uVar3 = 0xffffffff;
  if (0 < iVar2) {
    uVar16 = (ulonglong)(iVar2 - 1U);
    iVar7 = iVar2;
    do {
      if (local_68[uVar16] == L'\\') {
        uVar3 = (uint)uVar16;
        break;
      }
      uVar16 = uVar16 - 1;
      iVar8 = iVar7 + -1;
      bVar19 = 0 < iVar7;
      iVar7 = iVar8;
    } while (iVar8 != 0 && bVar19);
  }
  if (uVar3 != iVar2 - 1U) {
    FUN_1400020e8(&local_68,&DAT_149e01f64,1);
  }
  FUN_140056680(&local_78,&DAT_149dfb77a);
  local_90 = 0xffffffff;
  local_98 = 0;
  iVar2 = FUN_1447ee042(&local_68,&DAT_149e351d0,2,0);
  if (iVar2 == -1) {
    pwVar12 = local_68;
    if (local_60 == 0) {
      pwVar12 = L"";
    }
    iVar2 = wcsncmp(pwVar12,L"\\\\",2);
    if (iVar2 == 0) {
      iVar2 = local_60 + -1;
      if (local_60 == 0) {
        iVar2 = 0;
      }
      iVar7 = 2;
      if (2 < iVar2) {
        iVar7 = iVar2;
      }
      FUN_140056680(&local_88,pwVar12 + ((longlong)iVar2 - (ulonglong)(iVar7 - 2)));
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_78 = (undefined2 *)CONCAT44(uStack_84,local_88);
      uStack_70 = CONCAT44(uStack_7c,iStack_80);
      local_90 = 0xffffffff;
      local_98 = 0;
      uVar3 = FUN_1447ee042(&local_78,&DAT_149e01f64,1,0);
      if (uVar3 == 0xffffffff) {
        bVar19 = (longlong)uStack_70 < 0;
        uStack_70 = uStack_70 & 0xffffffff00000000;
        if (bVar19) {
          FUN_1446f8c06(&local_78,0);
        }
        if (local_78 != (undefined2 *)0x0) {
          *local_78 = 0;
        }
      }
      else {
        uVar18 = (int)uStack_70 - 1;
        if ((int)uStack_70 == 0) {
          uVar18 = 0;
        }
        uVar15 = ~uVar3 + uVar18;
        if ((int)uVar18 <= (int)(~uVar3 + uVar18)) {
          uVar15 = uVar18;
        }
        if ((int)uVar15 < 1) {
          uVar15 = 0;
        }
        uVar3 = uVar18 - uVar15;
        if ((int)uVar18 <= (int)(uVar18 - uVar15)) {
          uVar3 = uVar18;
        }
        if (0 < (int)uVar3) {
          if ((int)uStack_70 - uVar3 != 0) {
            memmove(local_78,local_78 + uVar3,(longlong)(int)((int)uStack_70 - uVar3) * 2);
          }
          uStack_70 = CONCAT44(uStack_70._4_4_,(int)uStack_70 - uVar3);
        }
      }
    }
  }
  else {
    iVar7 = local_60 + -1;
    if (local_60 == 0) {
      iVar7 = 0;
    }
    iVar2 = (iVar7 - iVar2) + -2;
    pwVar12 = L"";
    if (local_60 != 0) {
      pwVar12 = local_68;
    }
    iVar8 = iVar7;
    if (iVar2 < iVar7) {
      iVar8 = iVar2;
    }
    iVar2 = 0;
    if (0 < iVar8) {
      iVar2 = iVar8;
    }
    FUN_140056680(&local_88,(longlong)pwVar12 + ((longlong)iVar7 * 2 - (ulonglong)(uint)(iVar2 * 2))
                 );
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_78 = (undefined2 *)CONCAT44(uStack_84,local_88);
    uStack_70 = CONCAT44(uStack_7c,iStack_80);
  }
  if ((int)uStack_70 - 2U < 0x7fffffff) {
    uVar18 = 0;
    FUN_1448097c4(&local_78,&DAT_149e01ff2,&DAT_149e01f64,0);
    local_90 = 0xffffffff;
    local_98 = 0;
    uVar3 = FUN_1447ee042(&local_78,&DAT_149e01f64,1,0);
    puVar11 = &UNK_149e01f01;
    if (uVar3 != 0xffffffff) {
      iVar2 = 0;
      do {
        uVar15 = (int)uStack_70 - 1;
        puVar5 = local_78;
        if ((int)uStack_70 == 0) {
          uVar15 = uVar18;
          puVar5 = &DAT_149dfb77a;
        }
        if ((int)uVar3 < (int)uVar15) {
          uVar15 = uVar3;
        }
        if ((int)uVar15 < 1) {
          uVar15 = 0;
        }
        FUN_14006620a(&local_88,puVar5,uVar15);
        puVar5 = &DAT_149dfb77a;
        if (iStack_80 != 0) {
          puVar5 = (undefined2 *)CONCAT44(uStack_84,local_88);
        }
        lVar10 = 0;
        while( true ) {
          uVar6 = *(ushort *)((longlong)puVar5 + lVar10);
          uVar16 = (ulonglong)uVar6;
          uVar14 = *(ushort *)((longlong)&DAT_149e06258 + lVar10);
          if (uVar6 != uVar14) break;
          if (uVar6 == 0) goto LAB_146818636;
LAB_1468185fe:
          lVar10 = lVar10 + 2;
        }
        if ((uVar14 | uVar6) < 0x80) {
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
          uVar17 = (ulonglong)uVar14;
          uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
          if ((&DAT_149e05da0)[uVar16] == (&DAT_149e05da0)[uVar17]) goto LAB_1468185fe;
        }
        iVar7 = 1;
        if (uVar6 != uVar14) goto LAB_14681863c;
LAB_146818636:
        iVar7 = -1;
LAB_14681863c:
        uVar15 = (int)uStack_70 - 1;
        if ((int)uStack_70 == 0) {
          uVar15 = uVar18;
        }
        uVar9 = ~uVar3 + uVar15;
        if ((int)uVar15 <= (int)(~uVar3 + uVar15)) {
          uVar9 = uVar15;
        }
        if ((int)uVar9 < 1) {
          uVar9 = uVar18;
        }
        uVar3 = uVar15 - uVar9;
        if ((int)uVar15 <= (int)(uVar15 - uVar9)) {
          uVar3 = uVar15;
        }
        if (0 < (int)uVar3) {
          if ((int)uStack_70 - uVar3 != 0) {
            memmove(local_78,local_78 + uVar3,(longlong)(int)((int)uStack_70 - uVar3) * 2);
          }
          uStack_70 = CONCAT44(uStack_70._4_4_,(int)uStack_70 - uVar3);
        }
        local_90 = 0xffffffff;
        local_98 = 0;
        uVar3 = FUN_1447ee042(&local_78,&DAT_149e01f64,1,0);
        if (CONCAT44(uStack_84,local_88) != 0) {
          FUN_1400020a8();
        }
        iVar2 = iVar2 + iVar7;
      } while (uVar3 != 0xffffffff);
      if (0 < iVar2) goto LAB_1468186dc;
    }
  }
  else {
LAB_1468186dc:
    puVar11 = (undefined *)0x0;
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_146818701:
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return (ulonglong)puVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146818870 FUN_146818870 body=269 status=ok
// SIG undefined FUN_146818870(void)

undefined8 FUN_146818870(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_38;
  pvVar1 = (void *)*param_3;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,pvVar1,lVar2 * 2);
  }
  local_50 = (void *)0x0;
  local_48 = *(int *)(param_2 + 1);
  lVar2 = (longlong)local_48;
  pvVar1 = (void *)*param_2;
  if (lVar2 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,pvVar1,lVar2 * 2);
  }
  FUN_1401aeae4(param_1,&local_50,&local_40);
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681897e FUN_14681897e body=171 status=ok
// SIG undefined FUN_14681897e(void)

undefined8 FUN_14681897e(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_3 + 1);
  lVar1 = (longlong)local_38;
  _Src = (void *)*param_3;
  if (lVar1 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar1 * 2);
  }
  FUN_1401aeae4(param_1,param_2,&local_40);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146818a2a FUN_146818a2a body=22 status=ok
// SIG undefined FUN_146818a2a(void)

undefined8 FUN_146818a2a(undefined8 param_1)

{
  FUN_1401aeae4();
  return param_1;
}



// FUNCTION 146818a40 FUN_146818a40 body=454 status=ok
// SIG undefined FUN_146818a40(void)

undefined8 * FUN_146818a40(undefined8 *param_1,undefined8 param_2,wchar_t *param_3)

{
  char cVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146817640(&local_60);
  sVar2 = wcslen(param_3);
  FUN_1412cfe60(&local_50,&local_60,(int)sVar2 + (uint)((int)sVar2 != -1 && local_58 == 0) + 1);
  FUN_1401aebe8(&local_50,param_3,sVar2 & 0xffffffff);
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1448097c4(&local_50,&DAT_149e01f64,&DAT_149e065c6,0);
  uVar3 = FUN_1401af3ae();
  FUN_140056680(&local_60,uVar3);
  FUN_1448b5552(&local_60);
  FUN_1448097c4(&local_60,&DAT_149e01f64,&DAT_149e065c6,0);
  FUN_1401aea18(param_1,param_2);
  iVar5 = local_58 + -1;
  puVar6 = local_60;
  if (local_58 == 0) {
    puVar6 = &DAT_149dfb77a;
    iVar5 = 0;
  }
  cVar1 = FUN_144a791f8(param_1,puVar6,iVar5,1);
  if (cVar1 == '\0') {
    puVar6 = &DAT_149dfb77a;
    local_68 = &DAT_149dfb77a;
    if (local_58 != 0) {
      local_68 = local_60;
    }
    if (*(int *)(param_1 + 1) != 0) {
      puVar6 = (undefined2 *)*param_1;
    }
    FUN_140033559(".\\Runtime/Core/Private/Misc/Paths.cpp",0x696,
                  L"%s does not start with %s so this is not a valid sandbox path.",puVar6);
  }
  puVar6 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar6 = local_50;
  }
  puVar4 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar4 = local_60;
  }
  FUN_1448097c4(param_1,puVar4,puVar6,1);
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146818c08 FUN_146818c08 body=359 status=ok
// SIG undefined FUN_146818c08(void)

undefined8 * FUN_146818c08(undefined8 *param_1,undefined8 *param_2,wchar_t *param_3)

{
  int iVar1;
  void *_Src;
  size_t sVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146817640(&local_58);
  sVar2 = wcslen(param_3);
  FUN_1412cfe60(&local_48,&local_58,(int)sVar2 + (uint)((int)sVar2 != -1 && local_50 == 0) + 1);
  FUN_1401aebe8(&local_48,param_3,sVar2 & 0xffffffff);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1448097c4(&local_48,&DAT_149e01f64,&DAT_149e065c6,0);
  uVar3 = FUN_1401af3ae();
  FUN_140056680(&local_58,uVar3);
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
  puVar5 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar5 = local_58;
  }
  puVar4 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar4 = local_48;
  }
  FUN_1448097c4(param_1,puVar4,puVar5,1);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146818d70 FUN_146818d70 body=447 status=ok
// SIG undefined FUN_146818d70(void)

longlong * FUN_146818d70(longlong *param_1,wchar_t *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  size_t sVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  wchar_t *_Str;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 local_c8 [16];
  undefined2 *local_b8;
  undefined8 uStack_b0;
  wchar_t *local_a8;
  int local_a0;
  longlong local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined4 local_80;
  wchar_t *local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_1 = 0;
  param_1[1] = 0;
  do {
    FUN_1412e3d1e(local_c8);
    local_b8 = (undefined2 *)0x0;
    uStack_b0 = 0;
    FUN_1407c869a(local_c8,&local_b8,0);
    puVar5 = &DAT_149dfb77a;
    if ((int)uStack_b0 != 0) {
      puVar5 = local_b8;
    }
    local_d8 = param_4;
    FUN_140002266(&local_a8,L"%s%s%s",param_3,puVar5);
    _Str = L"";
    if (local_a0 != 0) {
      _Str = local_a8;
    }
    uVar1 = 0;
    local_88 = param_2;
    if (param_2 != (wchar_t *)0x0) {
      sVar2 = wcslen(param_2);
      uVar1 = (int)sVar2;
    }
    local_80 = uVar1;
    local_78 = _Str;
    if (_Str == (wchar_t *)0x0) {
      local_70 = 0;
    }
    else {
      sVar2 = wcslen(_Str);
      local_70 = (int)sVar2;
    }
    FUN_140bee87a(&local_98,&local_88,2);
    if (&local_98 == param_1) {
      if (local_98 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = local_98;
      local_98 = 0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_90;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_90._4_4_;
      local_90 = 0;
    }
    if (local_a8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_b8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    plVar3 = (longlong *)FUN_14054d1d4();
    puVar5 = &DAT_149dfb77a;
    if ((int)param_1[1] != 0) {
      puVar5 = (undefined2 *)*param_1;
    }
    lVar4 = (**(code **)(*plVar3 + 0x108))(plVar3,puVar5);
  } while (-1 < lVar4);
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146818f30 FUN_146818f30 body=29 status=ok
// SIG undefined FUN_146818f30(void)

undefined8 FUN_146818f30(undefined8 param_1)

{
  FUN_140056680(param_1,L"/?:&\\*\"<>|%#@^");
  return param_1;
}



// FUNCTION 146818f4e FUN_146818f4e body=76 status=ok
// SIG undefined FUN_146818f4e(void)

undefined1 FUN_146818f4e(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_144a791f8(param_1,&DAT_149e35204,2,1);
  if (cVar1 != '\0') {
    return 1;
  }
  uVar2 = FUN_144a791f8(param_1,&DAT_149e01ff2,2,1);
  return uVar2;
}



// FUNCTION 146818f9a FUN_146818f9a body=170 status=ok
// SIG undefined FUN_146818f9a(void)

void FUN_146818f9a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  short sVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  
  iVar6 = (int)param_2[1];
  if ((longlong)iVar6 != 0) {
    lVar3 = *param_2;
    uVar5 = (longlong)iVar6 * 2;
    do {
      sVar2 = *(short *)(lVar3 + -2 + uVar5);
      if ((sVar2 != 0x5c) && (sVar2 != 0x2f)) {
        if (lVar3 + uVar5 != 2) {
          iVar4 = (int)(uVar5 >> 1);
          if (iVar4 < iVar6) {
            iVar6 = iVar4;
          }
          iVar4 = 0;
          if (0 < iVar6) {
            iVar4 = iVar6;
          }
          uVar5 = (ulonglong)(uint)(iVar4 * 2);
          lVar1 = lVar3 + uVar5;
          goto LAB_146818ff2;
        }
        break;
      }
      uVar5 = uVar5 - 2;
    } while (uVar5 != 0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
  while( true ) {
    sVar2 = *(short *)(lVar3 + -2 + uVar5);
    uVar5 = uVar5 - 2;
    if ((sVar2 == 0x5c) || (sVar2 == 0x2f)) break;
LAB_146818ff2:
    if (uVar5 == 0) goto LAB_14681903c;
  }
  if (lVar3 + uVar5 != 0) {
    iVar6 = ~(uint)(uVar5 >> 1) + iVar4;
    if (iVar4 <= iVar6) {
      iVar6 = iVar4;
    }
    iVar4 = 0;
    if (0 < iVar6) {
      iVar4 = iVar6;
    }
    *param_1 = lVar1 - (ulonglong)(uint)(iVar4 * 2);
    *(int *)(param_1 + 1) = iVar4;
    return;
  }
LAB_14681903c:
  *param_1 = lVar3;
  *(int *)(param_1 + 1) = iVar4;
  return;
}



// FUNCTION 146819044 FUN_146819044 body=95 status=ok
// SIG undefined FUN_146819044(void)

ulonglong FUN_146819044(longlong *param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  iVar2 = (int)param_1[1];
  lVar4 = (longlong)iVar2;
  if (lVar4 < 3) {
    if (iVar2 == 2) {
      psVar3 = (short *)*param_1;
      if ((psVar3[1] == 0x5c) || (psVar3[1] == 0x2f)) {
        uVar5 = CONCAT71((int7)((ulonglong)psVar3 >> 8),1);
        if ((ushort)(*psVar3 - 0x2fU) < 0x2e) {
          uVar5 = 0x1ffffffff7fe >> ((byte)(*psVar3 - 0x2fU) & 0x3f);
        }
        goto LAB_146819062;
      }
    }
  }
  else {
    sVar1 = *(short *)(*param_1 + -2 + lVar4 * 2);
    if ((sVar1 == 0x2f) || (sVar1 == 0x5c)) {
      uVar5 = CONCAT71((int7)(int3)((uint)iVar2 >> 8),*(short *)(*param_1 + -4 + lVar4 * 2) != 0x3a)
      ;
      goto LAB_146819062;
    }
  }
  uVar5 = 0;
LAB_146819062:
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 1468190a4 FUN_1468190a4 body=157 status=ok
// SIG undefined FUN_1468190a4(void)

bool FUN_1468190a4(undefined8 *param_1,undefined8 param_2,short *param_3)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  short *psVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  short *psVar10;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar6 = (longlong)(int)uVar2;
  if (lVar6 == 0) {
    return true;
  }
  psVar3 = (short *)*param_1;
  lVar9 = lVar6 * 2;
  psVar10 = psVar3;
  while( true ) {
    sVar1 = *psVar10;
    if (sVar1 == 0x5c) {
      param_3 = psVar10;
    }
    psVar4 = psVar10;
    if ((sVar1 == 0x2f) || (psVar4 = param_3, sVar1 == 0x5c)) break;
    psVar10 = psVar10 + 1;
    lVar9 = lVar9 + -2;
    if (lVar9 == 0) {
      return true;
    }
  }
  if (psVar4 == (short *)0x0) {
    return true;
  }
  uVar8 = uVar2 - (int)((ulonglong)((longlong)psVar4 - (longlong)psVar3) >> 1);
  if ((int)uVar2 <= (int)uVar8) {
    uVar8 = uVar2;
  }
  if ((int)uVar8 < 1) {
    return true;
  }
  lVar5 = (ulonglong)uVar8 * -2;
  lVar9 = lVar6;
  do {
    sVar1 = *(short *)((longlong)psVar3 + lVar5 + lVar6 * 2);
    lVar7 = (longlong)psVar3 + lVar5 + lVar6 * 2;
    if (sVar1 == 0x5c) {
      lVar7 = lVar9;
    }
    if (sVar1 == 0x2f) {
      lVar7 = lVar9;
    }
    if ((sVar1 != 0x5c) && (sVar1 != 0x2f)) goto LAB_146819139;
    lVar5 = lVar5 + 2;
    lVar9 = lVar7;
  } while (lVar5 != 0);
  lVar7 = 0;
LAB_146819139:
  return lVar7 == 0;
}



// FUNCTION 146819142 FUN_146819142 body=251 status=ok
// SIG undefined FUN_146819142(void)

void FUN_146819142(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = *param_1;
  uStack_40 = *(undefined4 *)(param_1 + 1);
  uStack_3c = *(undefined4 *)((longlong)param_1 + 0xc);
  cVar1 = FUN_146819044();
  if (cVar1 != '\0') {
    iVar2 = *(int *)(param_1 + 1);
    do {
      if (iVar2 < 2) {
        iVar2 = 1;
      }
      iVar2 = iVar2 + -1;
      *(int *)(param_1 + 1) = iVar2;
      local_48 = *param_1;
      uStack_40 = *(undefined4 *)(param_1 + 1);
      uStack_3c = *(undefined4 *)((longlong)param_1 + 0xc);
      cVar1 = FUN_146819044(&local_48);
    } while (cVar1 != '\0');
  }
  local_58 = *param_2;
  uStack_50 = *(undefined4 *)(param_2 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
  cVar1 = FUN_146819044();
  if (cVar1 != '\0') {
    iVar2 = *(int *)(param_2 + 1);
    do {
      if (iVar2 < 2) {
        iVar2 = 1;
      }
      iVar2 = iVar2 + -1;
      *(int *)(param_2 + 1) = iVar2;
      local_58 = *param_2;
      uStack_50 = *(undefined4 *)(param_2 + 1);
      uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
      cVar1 = FUN_146819044(&local_58);
    } while (cVar1 != '\0');
  }
  local_68 = *param_2;
  uStack_60 = param_2[1];
  local_78 = *(undefined4 *)param_1;
  uStack_74 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_70 = *(undefined4 *)(param_1 + 1);
  uStack_6c = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_14005b3f4();
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681923e FUN_14681923e body=72 status=ok
// SIG undefined FUN_14681923e(void)

longlong FUN_14681923e(longlong param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((int)uVar1 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)((param_2 + uVar1) - 1) / (ulonglong)uVar1;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulonglong)((param_3 + uVar1) - 1) / (ulonglong)uVar1;
  }
  return (longlong)*(int *)(param_1 + 0x18) * uVar3 * param_4 * uVar2;
}



// FUNCTION 146819286 FUN_146819286 body=115 status=ok
// SIG undefined FUN_146819286(void)

longlong FUN_146819286(longlong param_1,int param_2,int param_3,int param_4,byte param_5)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  param_3 = param_3 >> (param_5 & 0x1f);
  if (param_3 < 2) {
    param_3 = 1;
  }
  uVar4 = *(uint *)(param_1 + 0xc);
  if ((int)uVar4 < 1) {
    uVar5 = 0;
  }
  else {
    param_2 = param_2 >> (param_5 & 0x1f);
    iVar1 = 1;
    if (1 < param_2) {
      iVar1 = param_2;
    }
    uVar5 = CONCAT44(0 >> (param_5 & 0x1f),iVar1 + uVar4 + -1) / (ulonglong)uVar4 & 0xffffffff;
  }
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((int)uVar4 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulonglong)((param_3 + uVar4) - 1) / (ulonglong)uVar4;
  }
  uVar4 = param_4 >> (param_5 & 0x1f);
  uVar3 = 1;
  if (1 < (int)uVar4) {
    uVar3 = (ulonglong)uVar4;
  }
  return (longlong)*(int *)(param_1 + 0x18) * uVar5 * uVar2 * uVar3;
}



// FUNCTION 1468192fe FUN_1468192fe body=343 status=ok
// SIG undefined FUN_1468192fe(void)

void FUN_1468192fe(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
    FUN_14681c50e(param_2);
  }
  local_48 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      iVar2 = iStack_5c;
      lVar1 = *local_78;
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_14681c488(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) =
           *(undefined8 *)(lVar1 + (longlong)iVar2 * 0x18 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146819456 FUN_146819456 body=114 status=ok
// SIG undefined FUN_146819456(void)

void FUN_146819456(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  LOCK();
  *(int *)(param_1 + 0x2c) = (int)param_1[0x2c] + -1;
  UNLOCK();
  (**(code **)(*param_1 + 0x48))();
  FUN_14681c56e(param_1 + 0x21,*(undefined8 *)(param_2 + 0x28));
  *(undefined8 *)(param_2 + 0x28) = 0;
  iVar1 = (int)param_1[0x20];
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x104) < iVar1 + 1U) {
    FUN_14681c488(param_1 + 0x1f,iVar1);
  }
  *(longlong *)(param_1[0x1f] + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 1468194c8 FUN_1468194c8 body=613 status=ok
// SIG undefined FUN_1468194c8(void)

void FUN_1468194c8(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_b8 [47];
  char local_89;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  char local_6a;
  char local_69;
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  if (param_2 != 0) {
    FUN_146819456(param_1,param_2);
  }
  cVar3 = *(char *)((longlong)param_1 + 0x165);
  if (cVar3 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x165) = 1;
    local_89 = cVar3;
    lVar6 = FUN_1467c2b1a(param_1 + 6,&local_69);
    if (lVar6 != 0) {
      do {
        if (((*(int *)((longlong)param_1 + 0x15c) == -1) ||
            (0 < *(int *)((longlong)param_1 + 0x15c) || local_69 == '\0')) &&
           (lVar6 = param_1[0x2c], iVar4 = (**(code **)(*param_1 + 0x38))(param_1),
           (int)lVar6 < iVar4)) break;
        cVar3 = FUN_14681988a(param_1,local_69);
      } while (cVar3 != '\0');
    }
    local_80 = param_1 + 0x21;
    local_88 = param_1 + 0x1a;
    iVar4 = *(int *)((longlong)param_1 + 0x15c);
    while ((((iVar4 == -1 || (0 < iVar4)) || (local_69 == '\0')) &&
           ((lVar6 = param_1[0x2c], iVar4 = (**(code **)(*param_1 + 0x38))(param_1),
            (int)lVar6 < iVar4 &&
            (lVar6 = FUN_14018c76c(param_1 + 6,&local_6a), cVar3 = local_6a, local_78 = lVar6,
            lVar6 != 0))))) {
      LOCK();
      *(int *)(param_1 + 0x2c) = (int)param_1[0x2c] + 1;
      UNLOCK();
      iVar4 = (int)param_1[0x20];
      if ((longlong)iVar4 < 1) {
        lVar7 = (**(code **)(*param_1 + 0x50))(param_1);
      }
      else {
        lVar7 = *(longlong *)(param_1[0x1f] + -8 + (longlong)iVar4 * 8);
        *(int *)(param_1 + 0x20) = iVar4 + -1;
      }
      *(longlong **)(lVar7 + 0x20) = param_1;
      *(longlong *)(lVar7 + 0x28) = lVar6;
      *(char *)(lVar7 + 0x30) = cVar3;
      (**(code **)(*(longlong *)(lVar7 + 0x10) + 8))(lVar7 + 0x10);
      local_60 = &local_78;
      local_58 = &local_68;
      local_68 = lVar7;
      FUN_14681c6bc(local_80,local_4c,&local_60);
      (**(code **)(*param_1 + 0x40))(param_1,local_68);
      plVar1 = (longlong *)param_1[0x1e];
      if (local_6a == '\0') {
        uVar5 = 0;
      }
      else {
        local_60 = (longlong *)CONCAT71(local_60._1_7_,local_6a);
        pcVar2 = (code *)param_1[0x16];
        plVar9 = (longlong *)param_1[0x18];
        if ((longlong *)param_1[0x18] == (longlong *)0x0) {
          plVar9 = local_88;
        }
        uVar8 = (**(code **)(*plVar9 + 8))();
        uVar5 = (*pcVar2)(uVar8,&local_60);
      }
      (**(code **)(*plVar1 + 0x18))(plVar1,local_68,uVar5);
      iVar4 = *(int *)((longlong)param_1 + 0x15c);
      if (0 < iVar4) {
        iVar4 = iVar4 + -1;
        *(int *)((longlong)param_1 + 0x15c) = iVar4;
      }
    }
    *(char *)((longlong)param_1 + 0x165) = local_89;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14681972e FUN_14681972e body=74 status=ok
// SIG undefined FUN_14681972e(void)

void FUN_14681972e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  FUN_141239b4c(param_1 + 0x30,param_2,param_3);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  FUN_1468194c8(param_1,0);
  return;
}



// FUNCTION 146819778 FUN_146819778 body=274 status=ok
// SIG undefined FUN_146819778(void)

undefined8 FUN_146819778(longlong param_1,ulonglong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong *puVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  EnterCriticalSection(lpCriticalSection);
  cVar3 = FUN_1448db474(param_1 + 0x30,param_2);
  if (cVar3 == '\0') {
    if (*(int *)(param_1 + 0x110) != *(int *)(param_1 + 0x13c)) {
      uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      lVar6 = param_1 + 0x140;
      if (*(longlong *)(param_1 + 0x148) != 0) {
        lVar6 = *(longlong *)(param_1 + 0x148);
      }
      iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x150) - 1U & (uVar4 >> 0x10 ^ uVar4))
                               * 4);
      if (iVar7 != -1) {
        do {
          puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar7 * 0x18);
          if (*puVar1 == param_2) {
            if (((puVar1 != (ulonglong *)0x0) && (uVar2 = puVar1[1], uVar2 != 0)) &&
               (cVar3 = (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x20))
                                  (*(longlong **)(param_1 + 0xf0),uVar2), cVar3 != '\0')) {
              LeaveCriticalSection(lpCriticalSection);
              (**(code **)(*(longlong *)(uVar2 + 0x10) + 0x10))(uVar2 + 0x10);
              goto LAB_1468197ab;
            }
            break;
          }
          iVar7 = (int)puVar1[2];
        } while (iVar7 != -1);
      }
    }
    LeaveCriticalSection(lpCriticalSection);
    uVar5 = 0;
  }
  else {
    LeaveCriticalSection(lpCriticalSection);
LAB_1468197ab:
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 14681988a FUN_14681988a body=378 status=ok
// SIG undefined FUN_14681988a(void)

undefined8 FUN_14681988a(longlong param_1,byte param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x108);
  lVar2 = param_1 + 0x118;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x130) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x130);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar8) || (uStack_60 != lVar2)) {
    do {
      lVar4 = *local_90;
      lVar6 = (longlong)iStack_74;
      if ((param_2 < *(byte *)(*(longlong *)(lVar4 + 8 + lVar6 * 0x18) + 0x30)) &&
         (cVar5 = (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x20))(), cVar5 != '\0')) {
        puVar3 = (undefined8 *)(lVar4 + lVar6 * 0x18);
        FUN_141239b4c(param_1 + 0x30,*puVar3,*(undefined1 *)(puVar3[1] + 0x30));
        (**(code **)(*(longlong *)(puVar3[1] + 0x10) + 0x10))(puVar3[1] + 0x10);
        uVar7 = 1;
        if (*(int *)(param_1 + 0x15c) != -1) {
          *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + 1;
        }
        goto LAB_146819929;
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar8));
  }
  uVar7 = 0;
LAB_146819929:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 146819a06 FUN_146819a06 body=156 status=ok
// SIG undefined FUN_146819a06(void)

wchar_t * FUN_146819a06(wchar_t *param_1,wchar_t *param_2,longlong param_3,undefined8 *param_4)

{
  int iVar1;
  
  param_1[0x400] = L'\0';
  param_1[0x401] = L'\0';
  param_1[0x402] = L'\0';
  param_1[0x403] = L'\0';
  param_1[0x404] = L'\0';
  param_1[0x405] = L'\0';
  param_1[0x406] = L'\0';
  param_1[0x407] = L'\0';
  param_1[0x408] = L'\0';
  param_1[0x409] = L'\0';
  param_1[0x40a] = L'\0';
  param_1[0x40b] = L'\0';
  param_1[0x818] = L'\0';
  param_1[0x819] = L'\0';
  param_1[0x81a] = L'\0';
  param_1[0x81b] = L'\0';
  param_1[0x81c] = L'\0';
  param_1[0x81d] = L'\0';
  param_1[0x81e] = L'\0';
  param_1[0x81f] = L'\0';
  wcscpy(param_1,param_2);
  *(undefined1 *)(param_1 + 0x820) = 0;
  FUN_144a787a6(param_1 + 0x400,param_3);
  memcpy(param_1 + 0x408,(void *)(param_3 + 0x10),0x81a);
  if (param_4 != (undefined8 *)0x0) {
    iVar1 = *(int *)(param_4 + 1) + -1;
    if (*(int *)(param_4 + 1) == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2(param_1 + 0x818,*param_4,iVar1);
  }
  return param_1;
}



// FUNCTION 146819aa2 FUN_146819aa2 body=202 status=ok
// SIG undefined FUN_146819aa2(void)

void FUN_146819aa2(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_30;
  int local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x1040) == '\x01') {
    plVar2 = (longlong *)FUN_14054d1d4();
    (**(code **)(*plVar2 + 0xd0))(plVar2,&local_20,param_1);
    *(undefined8 *)(param_1 + 0x810) = local_20;
    bVar1 = FUN_140f7cb10(param_1 + 0x800,param_1,0,0);
    *(byte *)(param_1 + 0x828) = bVar1 ^ 1;
  }
  else if (1 < *(int *)(param_1 + 0x1038)) {
    uVar3 = FUN_14054d1d4();
    local_30 = *(undefined8 *)(param_1 + 0x1030);
    local_28 = *(int *)(param_1 + 0x1038) + -1;
    if (*(int *)(param_1 + 0x1038) == 0) {
      local_28 = 0;
    }
    local_38 = 0;
    FUN_1415d54ec(&local_30,param_1,0,uVar3);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146819b6e FUN_146819b6e body=256 status=ok
// SIG undefined FUN_146819b6e(void)

undefined8 FUN_146819b6e(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar3;
  
  if ((longlong)DAT_14c8730b0 < 1) {
    return 0;
  }
  lVar8 = 0;
LAB_146819b9e:
  lVar2 = lVar8 * 0x20;
  puVar7 = &DAT_149dfb77a;
  if (*(int *)(DAT_14c8730a8 + 8 + lVar2) != 0) {
    puVar7 = *(undefined2 **)(DAT_14c8730a8 + lVar2);
  }
  lVar9 = 0;
  while( true ) {
    uVar4 = *(ushort *)(param_1 + lVar9);
    uVar3 = (ulonglong)uVar4;
    uVar5 = *(ushort *)((longlong)puVar7 + lVar9);
    if (uVar4 != uVar5) break;
    if (uVar4 == 0) goto LAB_146819bf6;
LAB_146819bcd:
    lVar9 = lVar9 + 2;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar10 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar10]) goto LAB_146819bcd;
  }
  if (uVar4 != uVar5) goto LAB_146819c47;
LAB_146819bf6:
  puVar7 = &DAT_149dfb77a;
  if (*(int *)(DAT_14c8730a8 + 0x18 + lVar2) != 0) {
    puVar7 = *(undefined2 **)(lVar2 + DAT_14c8730a8 + 0x10);
  }
  lVar2 = 0;
  do {
    uVar4 = *(ushort *)(param_2 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar1 = (uint)uVar4;
    uVar5 = *(ushort *)((longlong)puVar7 + lVar2);
    uVar6 = (uint)uVar5;
    if (uVar4 == uVar5) {
      if (uVar4 == 0) goto LAB_146819c57;
    }
    else {
      if (0x7f < (uVar5 | uVar4)) break;
      uVar1 = (uint)(byte)(&DAT_149e05da0)[uVar3];
      uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar5];
      if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[uVar5]) break;
    }
    lVar2 = lVar2 + 2;
  } while( true );
  uVar3 = (ulonglong)(uVar1 - uVar6);
  if (uVar1 - uVar6 == 0) {
LAB_146819c57:
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
LAB_146819c47:
  lVar8 = lVar8 + 1;
  if (lVar8 == DAT_14c8730b0) {
    return 0;
  }
  goto LAB_146819b9e;
}



// FUNCTION 146819c6e FUN_146819c6e body=302 status=ok
// SIG undefined FUN_146819c6e(void)

ulonglong FUN_146819c6e(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  undefined8 unaff_RBP;
  ulonglong uVar7;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  cVar1 = FUN_14278768a(param_1,param_2);
  if (cVar1 == '\0') {
    uVar7 = 0;
  }
  else {
    FUN_140056680(&local_48,param_2);
    puVar5 = local_48;
    if (local_40 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    plVar6 = (longlong *)0x0;
    plVar4 = (longlong *)(ulonglong)(local_40 - 1);
    if (local_40 == 0) {
      plVar4 = plVar6;
    }
    uVar2 = FUN_144a49b4a(plVar4,puVar5);
    iVar3 = FUN_14681cb46(param_1,uVar2,&local_48);
    if (iVar3 != -1) {
      plVar6 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar3 * 0x20);
      FUN_14681cd1a(param_1,iVar3);
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),(char)plVar6[0x10e]) ^ 1;
    FUN_144a787a6(param_3,plVar6 + 0x109);
    memcpy((void *)(param_3 + 0x10),plVar6 + 0x10b,0x81a);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6,1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146819d9e FUN_146819d9e body=385 status=ok
// SIG undefined FUN_146819d9e(void)

undefined8 FUN_146819d9e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined2 *local_90;
  undefined2 *local_88;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140056680(local_38);
  FUN_140c50e9c(&local_48,local_38,1);
  local_98 = &DAT_14c872ce8;
  FUN_145d13352(DAT_14c872ce0,&local_58,L"RemoteConfiguration",L"ConfigPathPrefix");
  local_98 = &DAT_14c872ce8;
  FUN_145d13352(DAT_14c872ce0,&local_68,L"RemoteConfiguration",L"ConfigPathSuffix");
  uVar1 = FUN_1461681e2(0);
  FUN_140056680(&local_78,uVar1);
  local_88 = &DAT_149dfb77a;
  if (local_40 != 0) {
    local_88 = local_48;
  }
  local_98 = (undefined8 *)&DAT_149dfb77a;
  if (local_60 != 0) {
    local_98 = (undefined8 *)local_68;
  }
  puVar3 = &DAT_149dfb77a;
  if (local_70 != 0) {
    puVar3 = local_78;
  }
  puVar2 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar2 = local_58;
  }
  local_90 = &DAT_14c764000;
  FUN_140002266(param_1,L"%s/%s/%s/%s/%s.ini",puVar2,puVar3);
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146819f20 FUN_146819f20 body=244 status=ok
// SIG undefined FUN_146819f20(void)

longlong * FUN_146819f20(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  lVar2 = 8;
  do {
    local_48 = 1;
    FUN_140807d8e(param_1,&local_38,*(undefined8 *)((longlong)L"Timeout" + lVar2 + 8),
                  *(undefined8 *)((longlong)&PTR_DAT_149e33f20 + lVar2));
    if (&local_38 == param_1) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = local_38;
      *(undefined4 *)(param_1 + 1) = local_30;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_2c;
    }
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x68);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681a016 FUN_14681a016 body=244 status=ok
// SIG undefined FUN_14681a016(void)

longlong * FUN_14681a016(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  lVar2 = 8;
  do {
    local_48 = 1;
    FUN_140807d8e(param_1,&local_38,*(undefined8 *)((longlong)&PTR_DAT_149e33f20 + lVar2),
                  *(undefined8 *)((longlong)L"Timeout" + lVar2 + 8));
    if (&local_38 == param_1) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = local_38;
      *(undefined4 *)(param_1 + 1) = local_30;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_2c;
    }
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x68);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681a10c FUN_14681a10c body=83 status=ok
// SIG undefined FUN_14681a10c(void)

undefined8 FUN_14681a10c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)FUN_14054d1d4();
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x18))(plVar1,param_2,0);
  FUN_14681a160(param_1,puVar2,param_3);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return param_1;
}



// FUNCTION 14681a160 FUN_14681a160 body=280 status=ok
// SIG undefined FUN_14681a160(void)

undefined1 * FUN_14681a160(undefined1 *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  longlong local_b8 [3];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_1 = 0;
  if (param_2 != (longlong *)0x0) {
    local_b8[0] = 0;
    local_b8[1] = 0;
    if (param_3 == (longlong *)0x0) {
      param_3 = local_b8;
      FUN_140393c76(param_3,0x10000,1);
    }
    local_90 = 0;
    local_a0 = 0x67452301;
    uStack_9c = 0xefcdab89;
    uStack_98 = 0x98badcfe;
    uStack_94 = 0x10325476;
    lVar1 = (**(code **)(*param_2 + 0x30))(param_2);
    if (0 < lVar1) {
      lVar3 = *param_3;
      lVar2 = 0;
      do {
        lVar4 = lVar1 - lVar2;
        if ((longlong)(int)param_3[1] <= lVar1 - lVar2) {
          lVar4 = (longlong)(int)param_3[1];
        }
        (**(code **)(*param_2 + 0x170))(param_2,lVar3,lVar4);
        lVar3 = *param_3;
        FUN_145c4230c(&local_a0,lVar3,lVar4);
        lVar2 = lVar2 + lVar4;
      } while (lVar2 < lVar1);
    }
    FUN_1414fe9a8(&local_a0,param_1 + 1);
    *param_1 = 1;
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681a27a FUN_14681a27a body=83 status=ok
// SIG undefined FUN_14681a27a(void)

undefined8 FUN_14681a27a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)FUN_14054d1d4();
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x18))(plVar1,param_2,0);
  FUN_14681a2ce(param_1,puVar2,param_3);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return param_1;
}



// FUNCTION 14681a2ce FUN_14681a2ce body=287 status=ok
// SIG undefined FUN_14681a2ce(void)

undefined4 * FUN_14681a2ce(undefined4 *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_f8 [32];
  longlong local_d8 [2];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c8 = 0x67452301;
  uStack_c4 = 0xefcdab89;
  uStack_c0 = 0x98badcfe;
  uStack_bc = 0x10325476;
  local_b8 = 0xc3d2e1f0;
  local_b0 = 0;
  if (param_2 != (longlong *)0x0) {
    local_d8[0] = 0;
    local_d8[1] = 0;
    if (param_3 == (longlong *)0x0) {
      param_3 = local_d8;
      FUN_140393c76(param_3,0x10000,1);
    }
    lVar1 = (**(code **)(*param_2 + 0x30))(param_2);
    if (0 < lVar1) {
      lVar3 = 0;
      do {
        lVar2 = lVar1 - lVar3;
        if ((longlong)(int)param_3[1] <= lVar1 - lVar3) {
          lVar2 = (longlong)(int)param_3[1];
        }
        (**(code **)(*param_2 + 0x170))(param_2,*param_3,lVar2);
        FUN_140c54e34(&local_c8,*param_3,lVar2);
        lVar3 = lVar3 + lVar2;
      } while (lVar3 < lVar1);
    }
    if (local_d8[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_140c54d7a(&local_c8);
  param_1[4] = local_54;
  *param_1 = local_64;
  param_1[1] = uStack_60;
  param_1[2] = uStack_5c;
  param_1[3] = uStack_58;
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681a3ee FUN_14681a3ee body=127 status=ok
// SIG undefined FUN_14681a3ee(void)

void FUN_14681a3ee(void)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined8 *in_R9;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *in_R9;
  local_28 = (undefined2 *)0x0;
  uStack_20 = 0;
  FUN_1407c8a86(0,0x14,&local_28);
  puVar2 = local_28;
  if ((int)uStack_20 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140212e80(uVar1,&DAT_149e2b5d6,puVar2);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14681a46e FUN_14681a46e body=26 status=ok
// SIG undefined FUN_14681a46e(void)

void FUN_14681a46e(undefined8 *param_1)

{
  *param_1 = 0xefcdab8967452301;
  param_1[1] = 0x1032547698badcfe;
  *(undefined4 *)(param_1 + 2) = 0xc3d2e1f0;
  param_1[3] = 0;
  return;
}



// FUNCTION 14681a488 FUN_14681a488 body=11 status=ok
// SIG undefined FUN_14681a488(void)

void FUN_14681a488(undefined8 param_1,undefined8 param_2,uint param_3)

{
  FUN_140c54e34(param_1,param_2,(ulonglong)param_3 * 2);
  return;
}



// FUNCTION 14681a494 FUN_14681a494 body=349 status=ok
// SIG undefined FUN_14681a494(void)

void FUN_14681a494(longlong param_1,ulonglong param_2,char param_3)

{
  char *_Str;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  size_t sVar6;
  bool bVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined1 auStack_1b8 [40];
  longlong local_190 [2];
  undefined4 *local_180;
  longlong *local_178;
  undefined4 **local_170;
  undefined1 local_164 [4];
  undefined1 local_160 [256];
  longlong local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (param_2 != 0) {
    bVar7 = true;
    uVar8 = 0;
    do {
      if (*(char *)(param_1 + uVar8) != '\0') {
        _Str = (char *)(param_1 + uVar8);
        sVar6 = strlen(_Str);
        uVar8 = (longlong)((int)sVar6 + 1) + uVar8;
        iVar5 = strcmp(_Str,"+++");
        if (iVar5 == 0) {
          bVar7 = false;
        }
        else {
          if (param_3 == '\0') {
            local_180 = (undefined4 *)(param_1 + uVar8);
          }
          else {
            local_180 = (undefined4 *)FUN_14001cc68(0x14,0);
            puVar1 = (undefined4 *)(param_1 + uVar8);
            uVar2 = puVar1[1];
            uVar3 = puVar1[2];
            uVar4 = puVar1[3];
            *local_180 = *puVar1;
            local_180[1] = uVar2;
            local_180[2] = uVar3;
            local_180[3] = uVar4;
            local_180[4] = *(undefined4 *)(param_1 + 0x10 + uVar8);
          }
          puVar9 = (undefined8 *)&DAT_14c873140;
          if (bVar7) {
            puVar9 = &DAT_14c8730f0;
          }
          FUN_144a81018(local_160,_Str);
          FUN_140056680(local_190,local_58);
          local_170 = &local_180;
          local_178 = local_190;
          FUN_14681d420(puVar9,local_164,&local_178);
          if (local_190[0] != 0) {
            FUN_1400020a8();
          }
          if (local_60 != 0) {
            FUN_1400020a8();
          }
          uVar8 = uVar8 + 0x14;
        }
      }
    } while (uVar8 < param_2);
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14681a5f2 FUN_14681a5f2 body=43 status=ok
// SIG undefined FUN_14681a5f2(void)

void FUN_14681a5f2(longlong param_1)

{
  FUN_142787a1e();
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(param_1);
  return;
}



// FUNCTION 14681a61e FUN_14681a61e body=180 status=ok
// SIG undefined FUN_14681a61e(void)

void FUN_14681a61e(longlong param_1,undefined4 param_2,byte param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x40) == '\x01') {
    cVar3 = FUN_144a61b4f();
    if (cVar3 != '\0') {
      bVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x80))();
      if (((((bVar4 & (param_3 ^ 1)) == 0) && (DAT_14c872bf0 == '\0')) &&
          (*(int *)(param_1 + 0x2c) != 3)) && (DAT_14c872a70 == '\0')) {
        plVar1 = *(longlong **)(param_1 + 0x48);
        cVar3 = FUN_144a7c5f6(param_1 + 0x10);
        lVar5 = param_1 + 0x10;
        if (cVar3 != '\0') {
          lVar5 = param_1;
        }
        (**(code **)(*plVar1 + 0x68))(plVar1,lVar5,param_2);
        if (DAT_14c872a70 == '\x01') {
          *(undefined1 *)(param_1 + 0x41) = 1;
          uVar2 = *(undefined8 *)(param_1 + 0x48);
          FUN_140997e44(uVar2,1);
          FUN_140997e44(uVar2,1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14681a6d2 FUN_14681a6d2 body=169 status=ok
// SIG undefined FUN_14681a6d2(void)

undefined8 FUN_14681a6d2(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = (int)param_1[1];
  if ((longlong)iVar2 != 0) {
    lVar1 = *param_1;
    iVar4 = 1;
    lVar6 = 0;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar6) == *param_2) {
        if (iVar4 == 0) {
          return 0;
        }
        iVar4 = iVar2 - iVar4;
        if (iVar4 != 0) {
          iVar5 = 1;
          if (iVar4 < 1) {
            iVar5 = iVar4;
          }
          memmove((void *)(lVar1 + (lVar3 >> 0x20) * 8),
                  (void *)(lVar1 + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar2 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar2 + -1;
        if (param_3 == '\x01') {
          FUN_14681d9e6(param_1);
          return 1;
        }
        return 1;
      }
      lVar3 = lVar3 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 << 3 != lVar6);
  }
  return 0;
}



// FUNCTION 14681a77c FUN_14681a77c body=28 status=ok
// SIG undefined FUN_14681a77c(void)

void FUN_14681a77c(longlong param_1,undefined4 param_2,byte param_3,char param_4)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  *(byte *)(param_1 + 0x50) = param_4 * '\x02' | param_3 | *(byte *)(param_1 + 0x50) & 0xfc;
  return;
}



// FUNCTION 14681a798 FUN_14681a798 body=42 status=ok
// SIG undefined FUN_14681a798(void)

void FUN_14681a798(longlong param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_140997d34();
    FUN_140997e44(*(undefined8 *)(param_1 + 0x48),0);
    return;
  }
  return;
}



// FUNCTION 14681a7c2 FUN_14681a7c2 body=58 status=ok
// SIG undefined FUN_14681a7c2(void)

undefined8 FUN_14681a7c2(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x40) == '\x01') && (DAT_14c872a70 == '\x01')) {
    FUN_140997e44(*(undefined8 *)(param_1 + 0x48),0);
                    /* WARNING: Could not recover jumptable at 0x00014681a7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x60))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14681a7fc FUN_14681a7fc body=21 status=ok
// SIG undefined FUN_14681a7fc(void)

undefined4 * FUN_14681a7fc(undefined4 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 14681a812 FUN_14681a812 body=26 status=ok
// SIG undefined FUN_14681a812(void)

undefined4 * FUN_14681a812(undefined4 *param_1,float param_2)

{
  *param_1 = 2;
  *(double *)(param_1 + 2) = (double)param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 14681a82c FUN_14681a82c body=22 status=ok
// SIG undefined FUN_14681a82c(void)

undefined4 * FUN_14681a82c(undefined4 *param_1,undefined8 param_2)

{
  *param_1 = 2;
  *(undefined8 *)(param_1 + 2) = param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 14681a842 FUN_14681a842 body=153 status=ok
// SIG undefined FUN_14681a842(void)

undefined4 * FUN_14681a842(undefined4 *param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 3;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  FUN_14006620a(&local_30,*param_2,*(undefined4 *)(param_2 + 1));
  if (&local_30 == (longlong *)(param_1 + 4)) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 4) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 4) = local_30;
    param_1[6] = local_28;
    param_1[7] = local_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681a8dc FUN_14681a8dc body=294 status=ok
// SIG undefined FUN_14681a8dc(void)

longlong FUN_14681a8dc(longlong param_1,longlong param_2)

{
  undefined1 auStack_128 [40];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined2 local_b0;
  undefined1 local_a8 [72];
  longlong local_60;
  longlong local_58;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1467ebcd2(&local_60,param_2 + 0x10,0,0);
  if (local_48 == '\x01') {
    FUN_14006620a(&local_100,local_60,(ulonglong)(local_58 - local_60) >> 1);
    local_f0._0_4_ = (undefined4)local_100;
    local_f0._4_4_ = local_100._4_4_;
    uStack_e8._0_4_ = (undefined4)uStack_f8;
    uStack_e8._4_4_ = uStack_f8._4_4_;
    local_100 = 0;
    uStack_f8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    FUN_14118ab0c(&local_f0);
    local_d0 = (undefined4)local_f0;
    uStack_cc = local_f0._4_4_;
    uStack_c8 = (undefined4)uStack_e8;
    uStack_c4 = uStack_e8._4_4_;
    local_f0 = 0;
    uStack_e8 = 0;
    local_c0 = (undefined4)local_e0;
    uStack_bc = local_e0._4_4_;
    uStack_b8 = (undefined4)uStack_d8;
    uStack_b4 = uStack_d8._4_4_;
    local_e0 = 0;
    uStack_d8 = 0;
    local_b0 = 1;
    FUN_141151cf4(local_a8,&local_d0,0);
    FUN_140079082(param_2,&local_60,local_a8);
    FUN_1448f2150(local_a8);
    if (local_100 != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681aa03 FUN_14681aa03 body=83 status=ok
// SIG undefined FUN_14681aa03(void)

undefined8 FUN_14681aa03(undefined8 param_1)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined1 *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = &local_21;
  local_20 = &LAB_142789804;
  FUN_14118a75c();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681aa58 FUN_14681aa58 body=195 status=ok
// SIG undefined FUN_14681aa58(void)

longlong * FUN_14681aa58(longlong *param_1,longlong param_2)

{
  *param_1 = (longlong)&PTR_FUN_149e343e0;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  FUN_144a5dc74(param_1 + 2);
  FUN_144a5dc74(param_1 + 4);
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  FUN_1457ac5c8(param_1 + 0x1f);
  FUN_1457ac672(param_1 + 0x47);
  (**(code **)(*param_1 + 8))(param_1);
  FUN_14115046c(param_1,param_2 + 0x10);
  return param_1;
}



// FUNCTION 14681ab1c FUN_14681ab1c body=602 status=ok
// SIG undefined FUN_14681ab1c(void)

longlong * FUN_14681ab1c(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_1a8 [40];
  undefined1 local_180 [8];
  longlong local_178 [4];
  undefined8 local_154;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_110;
  undefined8 local_104;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_c0;
  undefined8 local_b4;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_70;
  undefined8 local_64;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  plVar4 = (longlong *)FUN_140e82300();
  plVar2 = (longlong *)*plVar4;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != plVar2) {
    param_1[2] = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(int *)(param_1 + 3) = (int)plVar4[1];
  plVar4 = (longlong *)FUN_140e82300();
  plVar2 = (longlong *)*plVar4;
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != plVar2) {
    param_1[4] = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(int *)(param_1 + 5) = (int)plVar4[1];
  iVar1 = *(int *)((longlong)param_1 + 0x3c);
  FUN_1449079f2(param_1[6],(int)param_1[7]);
  *(undefined4 *)(param_1 + 7) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x3c) != 0)) {
    FUN_141151e80(param_1 + 6,0);
  }
  if ((char)param_1[0xb] == '\x01') {
    (*(code *)(&PTR_FUN_149e1da60)[*(byte *)(param_1 + 10)])(param_1 + 8);
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if ((char)param_1[1] != *(char *)(param_2 + 8)) {
    *(char *)(param_1 + 1) = *(char *)(param_2 + 8);
    local_180[0] = 0;
    local_178[0] = 0;
    local_178[1] = 0;
    *(undefined1 *)(param_1 + 0x1c) = 0;
    FUN_14681b59c(param_1 + 0x1d,local_178);
    FUN_141359509(local_178[0]);
    if (local_178[0] != 0) {
      FUN_1400020a8();
    }
    memset(local_180,0,0x140);
    local_154 = 0xffffffff00000080;
    local_110 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_104 = 0xffffffff00000080;
    local_c0 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_b4 = 0xffffffff00000080;
    local_70 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_64 = 0xffffffff00000080;
    FUN_14681ad78(param_1 + 0x1f);
    FUN_145a34d36(local_180);
    memset(local_180,0,0x140);
    local_154 = 0xffffffff00000080;
    local_110 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_104 = 0xffffffff00000080;
    local_c0 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_b4 = 0xffffffff00000080;
    local_70 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_64 = 0xffffffff00000080;
    FUN_14681adc6(param_1 + 0x47,local_180);
    FUN_145a34e96(local_180);
    (**(code **)(*param_1 + 8))(param_1);
  }
  FUN_14115046c(param_1,param_2 + 0x10);
  if ((local_40 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681ad78 FUN_14681ad78 body=77 status=ok
// SIG undefined FUN_14681ad78(void)

longlong FUN_14681ad78(longlong param_1,longlong param_2)

{
  FUN_14681b646();
  FUN_14681b5ea(param_1 + 0x50,param_2 + 0x50);
  FUN_14681b5ea(param_1 + 0xa0,param_2 + 0xa0);
  FUN_14681b736(param_1 + 0xf0,param_2 + 0xf0);
  return param_1;
}



// FUNCTION 14681adc6 FUN_14681adc6 body=77 status=ok
// SIG undefined FUN_14681adc6(void)

longlong FUN_14681adc6(longlong param_1,longlong param_2)

{
  FUN_14681b826();
  FUN_14681b826(param_1 + 0x50,param_2 + 0x50);
  FUN_14681ba1c(param_1 + 0xa0,param_2 + 0xa0);
  FUN_14681bc12(param_1 + 0xf0,param_2 + 0xf0);
  return param_1;
}



// FUNCTION 14681ae13 FUN_14681ae13 body=200 status=ok
// SIG undefined FUN_14681ae13(void)

longlong FUN_14681ae13(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined **local_98;
  undefined1 local_68 [24];
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = 0;
  do {
    FUN_140c582a6(param_2 + 0x10,local_68,*(undefined8 *)((longlong)&PTR_DAT_149e342f0 + lVar1),0);
    if (local_50 == '\x01') {
      local_a8 = DAT_14c75d5c8;
      uStack_a4 = DAT_14c75d5cc;
      uStack_a0 = DAT_14c75d5d0;
      uStack_9c = DAT_14c75d5d4;
      local_98 = &PTR_FUN_149e34dd0;
      FUN_140079082(param_2,local_68,&local_a8);
      FUN_1448f2150(&local_a8);
    }
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x10);
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681aedc FUN_14681aedc body=160 status=ok
// SIG undefined FUN_14681aedc(void)

longlong FUN_14681aedc(longlong param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined **local_78;
  undefined1 local_40 [24];
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140c582a6(param_2 + 0x10,local_40,&DAT_149e0633e,0);
  if (local_28 == '\x01') {
    local_88 = DAT_14c75d5b8;
    uStack_84 = DAT_14c75d5bc;
    uStack_80 = DAT_14c75d5c0;
    uStack_7c = DAT_14c75d5c4;
    local_78 = &PTR_FUN_149e34df0;
    FUN_140079082(param_2,local_40,&local_88);
    FUN_1448f2150(&local_88);
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681af7d FUN_14681af7d body=200 status=ok
// SIG undefined FUN_14681af7d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14681af7d(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined **local_98;
  undefined1 local_68 [24];
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = 0;
  do {
    FUN_140c582a6(param_2 + 0x10,local_68,*(undefined8 *)((longlong)&PTR_DAT_149e34310 + lVar1),0);
    if (local_50 == '\x01') {
      local_a8 = DAT_14c75d5e8;
      uStack_a4 = _DAT_14c75d5ec;
      uStack_a0 = _DAT_14c75d5f0;
      uStack_9c = _DAT_14c75d5f4;
      local_98 = &PTR_FUN_149e34e10;
      FUN_140079082(param_2,local_68,&local_a8);
      FUN_1448f2150(&local_a8);
    }
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x10);
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681b046 FUN_14681b046 body=160 status=ok
// SIG undefined FUN_14681b046(void)

longlong FUN_14681b046(longlong param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined **local_78;
  undefined1 local_40 [24];
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140c582a6(param_2 + 0x10,local_40,&DAT_149e06342,0);
  if (local_28 == '\x01') {
    local_88 = DAT_14c75d5d8;
    uStack_84 = DAT_14c75d5dc;
    uStack_80 = DAT_14c75d5e0;
    uStack_7c = DAT_14c75d5e4;
    local_78 = &PTR_FUN_149e34e30;
    FUN_140079082(param_2,local_40,&local_88);
    FUN_1448f2150(&local_88);
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681b0e7 FUN_14681b0e7 body=200 status=ok
// SIG undefined FUN_14681b0e7(void)

longlong FUN_14681b0e7(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined **local_98;
  undefined1 local_68 [24];
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = 0;
  do {
    FUN_140c582a6(param_2 + 0x10,local_68,*(undefined8 *)((longlong)&PTR_DAT_149e342d0 + lVar1),0);
    if (local_50 == '\x01') {
      local_a8 = DAT_14c75d5a8;
      uStack_a4 = DAT_14c75d5ac;
      uStack_a0 = DAT_14c75d5b0;
      uStack_9c = DAT_14c75d5b4;
      local_98 = &PTR_FUN_149e34e50;
      FUN_140079082(param_2,local_68,&local_a8);
      FUN_1448f2150(&local_a8);
    }
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x10);
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681b1b0 FUN_14681b1b0 body=200 status=ok
// SIG undefined FUN_14681b1b0(void)

longlong FUN_14681b1b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined **local_98;
  undefined1 local_68 [24];
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = 0;
  do {
    FUN_140c582a6(param_2 + 0x10,local_68,*(undefined8 *)((longlong)&PTR_DAT_149e342a0 + lVar1),0);
    if (local_50 == '\x01') {
      local_a8 = DAT_14c75d598;
      uStack_a4 = DAT_14c75d59c;
      uStack_a0 = DAT_14c75d5a0;
      uStack_9c = DAT_14c75d5a4;
      local_98 = &PTR_FUN_149e34e70;
      FUN_140079082(param_2,local_68,&local_a8);
      FUN_1448f2150(&local_a8);
    }
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681b27a FUN_14681b27a body=84 status=ok
// SIG undefined FUN_14681b27a(void)

undefined8 * FUN_14681b27a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1409e00a6(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
    }
  }
  return param_1;
}



// FUNCTION 14681b2ce FUN_14681b2ce body=111 status=ok
// SIG undefined FUN_14681b2ce(void)

longlong * FUN_14681b2ce(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  return param_1;
}



// FUNCTION 14681b34c FUN_14681b34c body=49 status=ok
// SIG undefined FUN_14681b34c(void)

longlong FUN_14681b34c(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14681b37e FUN_14681b37e body=124 status=ok
// SIG undefined FUN_14681b37e(void)

void FUN_14681b37e(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_1 + 0x10;
  local_38 = lVar1;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(lVar1);
  FUN_1467adb94(&local_29,&local_38);
  (**(code **)**(undefined8 **)(param_1 + 0x28))();
  FUN_1467add50(&local_29);
  (**(code **)(*(longlong *)(param_1 + 0x10) + 0x10))(lVar1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681b3fc FUN_14681b3fc body=38 status=ok
// SIG undefined FUN_14681b3fc(void)

void FUN_14681b3fc(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014681b41e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x10) + 0x10))(param_1 + 0x10);
  return;
}



// FUNCTION 14681b460 FUN_14681b460 body=45 status=ok
// SIG undefined FUN_14681b460(void)

int FUN_14681b460(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 == 0) {
    FUN_1468194c8(*(undefined8 *)(param_1 + 0x10),param_1 + -0x10);
  }
  return iVar2 + -1;
}



// FUNCTION 14681b49e FUN_14681b49e body=60 status=ok
// SIG undefined FUN_14681b49e(void)

void FUN_14681b49e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_149e33e40;
  puVar1[2] = &PTR_LAB_149e33e70;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



// FUNCTION 14681b4da FUN_14681b4da body=38 status=ok
// SIG undefined FUN_14681b4da(void)

undefined8 FUN_14681b4da(undefined8 param_1,int param_2)

{
  FUN_145a34c1a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14681b500 FUN_14681b500 body=74 status=ok
// SIG undefined FUN_14681b500(void)

void FUN_14681b500(longlong *param_1)

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



// FUNCTION 14681b54a FUN_14681b54a body=64 status=ok
// SIG undefined FUN_14681b54a(void)

void FUN_14681b54a(void)

{
  if (DAT_14c872ffc != 0) {
    DAT_14c872ffc = 0;
    FUN_1446f8d3c(&DAT_14c872ff0,DAT_14c872ff8,0,0x848,8);
  }
  return;
}



// FUNCTION 14681b59c FUN_14681b59c body=78 status=ok
// SIG undefined FUN_14681b59c(void)

longlong * FUN_14681b59c(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_141359509(*param_1,(int)param_1[1]);
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



// FUNCTION 14681b5ea FUN_14681b5ea body=91 status=ok
// SIG undefined FUN_14681b5ea(void)

longlong FUN_14681b5ea(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_1409e6822(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 14681b646 FUN_14681b646 body=93 status=ok
// SIG undefined FUN_14681b646(void)

longlong FUN_14681b646(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_14681b6a4(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 14681b6a4 FUN_14681b6a4 body=146 status=ok
// SIG undefined FUN_14681b6a4(void)

longlong * FUN_14681b6a4(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 14681b736 FUN_14681b736 body=93 status=ok
// SIG undefined FUN_14681b736(void)

longlong FUN_14681b736(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_14681b794(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 14681b794 FUN_14681b794 body=146 status=ok
// SIG undefined FUN_14681b794(void)

longlong * FUN_14681b794(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 14681b826 FUN_14681b826 body=93 status=ok
// SIG undefined FUN_14681b826(void)

longlong FUN_14681b826(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_14681b884(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 14681b884 FUN_14681b884 body=406 status=ok
// SIG undefined FUN_14681b884(void)

longlong * FUN_14681b884(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar9 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar5 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar9) || (local_60 = uVar5, uStack_48 != plVar1)) {
      do {
        local_60 = uVar5;
        if (*(longlong *)(*local_78 + 0x30 + (longlong)iVar6 * 0x80) != 0) {
          lVar7 = *local_78 + (longlong)iVar6 * 0x80;
          plVar2 = *(longlong **)(lVar7 + 0x40);
          plVar8 = (longlong *)(lVar7 + 0x50);
          if (plVar2 != (longlong *)0x0) {
            plVar8 = plVar2;
          }
          (**(code **)(*plVar8 + 0x10))();
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar9));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar7 = param_2[3];
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
      *(int *)(param_1 + 3) = (int)lVar7;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681ba1c FUN_14681ba1c body=93 status=ok
// SIG undefined FUN_14681ba1c(void)

longlong FUN_14681ba1c(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_14681ba7a(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 14681ba7a FUN_14681ba7a body=406 status=ok
// SIG undefined FUN_14681ba7a(void)

longlong * FUN_14681ba7a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar9 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar5 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar9) || (local_60 = uVar5, uStack_48 != plVar1)) {
      do {
        local_60 = uVar5;
        if (*(longlong *)(*local_78 + 0x30 + (longlong)iVar6 * 0x80) != 0) {
          lVar7 = *local_78 + (longlong)iVar6 * 0x80;
          plVar2 = *(longlong **)(lVar7 + 0x40);
          plVar8 = (longlong *)(lVar7 + 0x50);
          if (plVar2 != (longlong *)0x0) {
            plVar8 = plVar2;
          }
          (**(code **)(*plVar8 + 0x10))();
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar9));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar7 = param_2[3];
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
      *(int *)(param_1 + 3) = (int)lVar7;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681bc12 FUN_14681bc12 body=93 status=ok
// SIG undefined FUN_14681bc12(void)

longlong FUN_14681bc12(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_14681bc70(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 14681bc70 FUN_14681bc70 body=406 status=ok
// SIG undefined FUN_14681bc70(void)

longlong * FUN_14681bc70(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar9 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar5 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar9) || (local_60 = uVar5, uStack_48 != plVar1)) {
      do {
        local_60 = uVar5;
        if (*(longlong *)(*local_78 + 0x30 + (longlong)iVar6 * 0x80) != 0) {
          lVar7 = *local_78 + (longlong)iVar6 * 0x80;
          plVar2 = *(longlong **)(lVar7 + 0x40);
          plVar8 = (longlong *)(lVar7 + 0x50);
          if (plVar2 != (longlong *)0x0) {
            plVar8 = plVar2;
          }
          (**(code **)(*plVar8 + 0x10))();
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar9));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar7 = param_2[3];
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
      *(int *)(param_1 + 3) = (int)lVar7;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681be0c FUN_14681be0c body=29 status=ok
// SIG undefined FUN_14681be0c(void)

undefined8 FUN_14681be0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14681be2a FUN_14681be2a body=1 status=ok
// SIG undefined FUN_14681be2a(void)

void FUN_14681be2a(void)

{
  return;
}



// FUNCTION 14681be2e FUN_14681be2e body=79 status=ok
// SIG undefined FUN_14681be2e(void)

undefined8 FUN_14681be2e(longlong param_1,uint param_2,char param_3)

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
    FUN_1409d9c06(param_1);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 14681be7e FUN_14681be7e body=154 status=ok
// SIG undefined FUN_14681be7e(void)

undefined8 FUN_14681be7e(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_14681bf18(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14681bf18 FUN_14681bf18 body=96 status=ok
// SIG undefined FUN_14681bf18(void)

void FUN_14681bf18(longlong *param_1,int param_2)

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
  FUN_14681bf78(param_1,param_2,1);
  return;
}



// FUNCTION 14681bf78 FUN_14681bf78 body=87 status=ok
// SIG undefined FUN_14681bf78(void)

void FUN_14681bf78(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)((longlong)param_2 * 0x20 + *param_1 + 8);
    iVar1 = param_3;
    do {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      plVar2 = plVar2 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_14680bc48(param_1,param_2,param_3);
  return;
}



// FUNCTION 14681c02a FUN_14681c02a body=96 status=ok
// SIG undefined FUN_14681c02a(void)

void FUN_14681c02a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14681c08a FUN_14681c08a body=227 status=ok
// SIG undefined FUN_14681c08a(void)

void FUN_14681c08a(longlong param_1,undefined4 *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  local_3c = param_3 * 2;
  if (0 < param_3) {
    FUN_14681c16e(*param_2,&local_40,&local_3c);
  }
  *(int *)(param_1 + 0x110) = local_40;
  uVar1 = (uint)(param_4 == 1);
  iVar3 = local_40 + uVar1;
  FUN_144aa0790(param_1,0,iVar3,2);
  lVar5 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar5 = param_1;
  }
  *(longlong *)(param_1 + 0x108) = lVar5;
  uVar2 = param_3 + uVar1;
  if (uVar2 != 0 && SCARRY4(param_3,uVar1) == (int)uVar2 < 0) {
    uVar4 = 0;
    do {
      uVar1 = FUN_14681c1e6(param_2[uVar4],lVar5,iVar3);
      if ((int)uVar1 < 1) break;
      iVar3 = iVar3 - uVar1;
      lVar5 = lVar5 + (ulonglong)uVar1 * 2;
      uVar4 = uVar4 + 1;
    } while (uVar2 != uVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681c16e FUN_14681c16e body=120 status=ok
// SIG undefined FUN_14681c16e(void)

void FUN_14681c16e(uint param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  if (*param_3 != 0) {
    iVar1 = *param_2;
    if (((param_1 & 0xfffffffe) == 0xfffe || 0x10ffff < param_1) ||
       ((param_1 & 0x1ffc00 | 0x400) == 0xdc00)) {
      param_1 = 0x3f;
    }
    iVar2 = iVar1 + 2;
    if (*param_3 == 1) {
      iVar2 = iVar1;
    }
    if (0xfffff < param_1 - 0x10000) {
      iVar2 = iVar1 + 1;
    }
    if (iVar2 - iVar1 != 0 && iVar1 <= iVar2) {
      *param_2 = iVar2;
      *param_3 = *param_3 - (iVar2 - iVar1);
    }
  }
  return;
}



// FUNCTION 14681c1e6 FUN_14681c1e6 body=147 status=ok
// SIG undefined FUN_14681c1e6(void)

ulonglong FUN_14681c1e6(uint param_1,ushort *param_2,int param_3)

{
  ushort *puVar1;
  ulonglong uVar2;
  ushort uVar3;
  
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = 0x3f;
    if ((((param_1 & 0xfffffffe) == 0xfffe || 0x10ffff < param_1) ||
        ((param_1 & 0x1ffc00 | 0x400) == 0xdc00)) ||
       (uVar3 = (ushort)param_1, 0xfffff < param_1 - 0x10000)) {
      *param_2 = uVar3;
      puVar1 = param_2 + 1;
    }
    else {
      puVar1 = param_2;
      if (param_3 != 1) {
        *param_2 = (short)(param_1 + 0x3ff0000 >> 10) + 0xd800;
        puVar1 = param_2 + 2;
        param_2[1] = uVar3 & 0x3ff | 0xdc00;
      }
    }
    uVar2 = (ulonglong)((longlong)puVar1 - (longlong)param_2) >> 1;
  }
  return uVar2;
}



// FUNCTION 14681c27a FUN_14681c27a body=162 status=ok
// SIG undefined FUN_14681c27a(void)

void FUN_14681c27a(longlong *param_1,undefined8 param_2)

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
        goto LAB_14681c307;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14681c307:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14681c31c FUN_14681c31c body=96 status=ok
// SIG undefined FUN_14681c31c(void)

longlong * FUN_14681c31c(longlong *param_1)

{
  undefined2 *puVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_1;
  puVar1 = (undefined2 *)plVar2[1];
  if ((((int)((ulonglong)((longlong)puVar1 - *plVar2) >> 1) != 0) && (puVar1[-1] != 0x2f)) &&
     (puVar1[-1] != 0x5c)) {
    if ((undefined2 *)plVar2[2] <= puVar1 + 1) {
      FUN_140213274(plVar2,1);
      puVar1 = (undefined2 *)plVar2[1];
    }
    plVar2[1] = (longlong)(puVar1 + 1);
    *puVar1 = 0x2f;
    plVar2 = (longlong *)*param_1;
  }
  return plVar2;
}



// FUNCTION 14681c37c FUN_14681c37c body=125 status=ok
// SIG undefined FUN_14681c37c(void)

void FUN_14681c37c(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x10;
    if (0x10 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x10c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x10c) = (int)uVar4;
    FUN_14681c3fa(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14681c3fa FUN_14681c3fa body=142 status=ok
// SIG undefined FUN_14681c3fa(void)

void FUN_14681c3fa(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,param_4);
  return;
}



// FUNCTION 14681c488 FUN_14681c488 body=132 status=ok
// SIG undefined FUN_14681c488(void)

void FUN_14681c488(longlong param_1,int param_2)

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



// FUNCTION 14681c50e FUN_14681c50e body=95 status=ok
// SIG undefined FUN_14681c50e(void)

void FUN_14681c50e(longlong param_1,uint param_2)

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



// FUNCTION 14681c56e FUN_14681c56e body=132 status=ok
// SIG undefined FUN_14681c56e(void)

void FUN_14681c56e(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_14681c5f2(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14681c5f2 FUN_14681c5f2 body=87 status=ok
// SIG undefined FUN_14681c5f2(void)

void FUN_14681c5f2(longlong *param_1,int param_2)

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
  FUN_14681c64a();
  return;
}



// FUNCTION 14681c64a FUN_14681c64a body=114 status=ok
// SIG undefined FUN_14681c64a(void)

void FUN_14681c64a(longlong *param_1,int param_2)

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



// FUNCTION 14681c6bc FUN_14681c6bc body=326 status=ok
// SIG undefined FUN_14681c6bc(void)

undefined4 * FUN_14681c6bc(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14681c804(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_14681c8ea(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
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
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14681c96a(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681c804 FUN_14681c804 body=230 status=ok
// SIG undefined FUN_14681c804(void)

int * FUN_14681c804(longlong *param_1,int *param_2)

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



// FUNCTION 14681c8ea FUN_14681c8ea body=128 status=ok
// SIG undefined FUN_14681c8ea(void)

undefined8 FUN_14681c8ea(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14681c64a((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14681c96a FUN_14681c96a body=474 status=ok
// SIG undefined FUN_14681c96a(void)

void FUN_14681c96a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14681cb46 FUN_14681cb46 body=203 status=ok
// SIG undefined FUN_14681cb46(void)

int FUN_14681cb46(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_14681cb90:
      lVar10 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_14681cc06;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_14681cc06;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_14681cbf7;
    }
  }
  return -1;
LAB_14681cc06:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_14681cbf7:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_14681cb90;
}



// FUNCTION 14681cc12 FUN_14681cc12 body=263 status=ok
// SIG undefined FUN_14681cc12(void)

void FUN_14681cc12(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined *puVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  if (DAT_14c873060 != DAT_14c87308c) {
    iVar3 = (int)param_1[1];
    if (iVar3 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_1;
    }
    iVar2 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    iVar3 = FUN_144a49b4a(iVar2,puVar4);
    puVar5 = &DAT_14c873090;
    if (DAT_14c873098 != (undefined *)0x0) {
      puVar5 = DAT_14c873098;
    }
    iVar3 = *(int *)(puVar5 + ((longlong)iVar3 & (longlong)DAT_14c8730a0 - 1U) * 4);
    if (iVar3 != -1) {
      iVar2 = (int)param_1[1];
LAB_14681cc94:
      plVar1 = (longlong *)(DAT_14c873058 + (longlong)iVar3 * 0x20);
      iVar3 = *(int *)(DAT_14c873058 + 8 + (longlong)iVar3 * 0x20);
      if (iVar3 == iVar2) {
        if (1 < iVar2) {
          lVar10 = 0;
          do {
            uVar8 = *(ushort *)(*plVar1 + lVar10);
            uVar9 = (ulonglong)uVar8;
            uVar6 = *(ushort *)(*param_1 + lVar10);
            if (uVar8 == uVar6) {
              if (uVar8 == 0) break;
            }
            else {
              if (0x7f < (uVar6 | uVar8)) goto LAB_14681ccff;
              uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              uVar7 = (ulonglong)uVar6;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
              if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar7]) goto LAB_14681ccff;
            }
            lVar10 = lVar10 + 2;
          } while( true );
        }
        goto LAB_14681cd05;
      }
      if (iVar3 + iVar2 == 1) goto LAB_14681cd05;
      goto LAB_14681ccf1;
    }
  }
  return;
LAB_14681ccff:
  if (uVar8 == uVar6) {
LAB_14681cd05:
    FUN_14681cd1a(&DAT_14c873058);
    return;
  }
LAB_14681ccf1:
  iVar3 = (int)plVar1[3];
  if (iVar3 == -1) {
    return;
  }
  goto LAB_14681cc94;
}



// FUNCTION 14681cd1a FUN_14681cd1a body=90 status=ok
// SIG undefined FUN_14681cd1a(void)

void FUN_14681cd1a(longlong *param_1,int param_2)

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
  FUN_14681cd74();
  return;
}



// FUNCTION 14681cd74 FUN_14681cd74 body=51 status=ok
// SIG undefined FUN_14681cd74(void)

void FUN_14681cd74(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_14681cda8(param_1,param_2);
  return;
}



// FUNCTION 14681cda8 FUN_14681cda8 body=114 status=ok
// SIG undefined FUN_14681cda8(void)

void FUN_14681cda8(longlong *param_1,int param_2)

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



// FUNCTION 14681ce1a FUN_14681ce1a body=140 status=ok
// SIG undefined FUN_14681ce1a(void)

void FUN_14681ce1a(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14c8730b0;
  if (param_1 <= (int)DAT_14c8730b0) {
    if (DAT_14c8730b4 == 0) {
      uVar2 = 4;
      if (4 < DAT_14c8730b0) {
        uVar2 = DAT_14c8730b0;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14c8730b0 + ((ulonglong)((longlong)(int)DAT_14c8730b0 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    DAT_14c8730b4 = (int)uVar5;
    FUN_1446f8d3c(&DAT_14c8730a8,param_1,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14681cea8 FUN_14681cea8 body=38 status=ok
// SIG undefined FUN_14681cea8(void)

undefined8 FUN_14681cea8(undefined8 param_1,int param_2)

{
  FUN_14681cedc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14681cedc FUN_14681cedc body=65 status=ok
// SIG undefined FUN_14681cedc(void)

void FUN_14681cedc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e34bb0;
  if (param_1[0x20f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x109] != 0) {
    FUN_1400020a8();
  }
  FUN_140187f4a(param_1);
  return;
}



// FUNCTION 14681cf1e FUN_14681cf1e body=359 status=ok
// SIG undefined FUN_14681cf1e(void)

undefined4 * FUN_14681cf1e(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  ulonglong uVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14681d086(local_40);
  puVar1 = (undefined8 *)*param_2;
  puVar2 = (undefined8 *)param_2[1];
  *local_38 = *puVar1;
  iVar10 = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_38 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_38 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_38[2] = *puVar2;
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  if (*(int *)(local_38 + 1) == 0) {
    puVar11 = &DAT_149dfb77a;
  }
  else {
    puVar11 = (undefined2 *)*local_38;
    iVar10 = *(int *)(local_38 + 1) + -1;
  }
  uVar6 = FUN_144a49b4a(iVar10,puVar11);
  cVar5 = FUN_14681d194(uVar6,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar7 = DAT_14c873060 - DAT_14c87308c;
    iVar10 = 1;
    if (3 < uVar7) {
      uVar9 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar10 <= DAT_14c8730a0)) {
      uVar6 = DAT_14c8730a0 - 1U & uVar6;
      *(uint *)((longlong)local_38 + 0x1c) = uVar6;
      puVar8 = DAT_14c873098;
      if (DAT_14c873098 == (undefined *)0x0) {
        puVar8 = &DAT_14c873090;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)(puVar8 + ((longlong)DAT_14c8730a0 - 1U & (longlong)(int)uVar6) * 4);
      puVar8 = DAT_14c873098;
      if (DAT_14c873098 == (undefined *)0x0) {
        puVar8 = &DAT_14c873090;
      }
      *(undefined4 *)(puVar8 + ((longlong)DAT_14c8730a0 - 1U & (longlong)(int)uVar6) * 4) = local_44
      ;
    }
    else {
      DAT_14c8730a0 = iVar10;
      FUN_14681d21c();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14681d086 FUN_14681d086 body=269 status=ok
// SIG undefined FUN_14681d086(void)

int * FUN_14681d086(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c873088;
  iVar4 = DAT_14c873060;
  if (DAT_14c87308c == 0) {
    iVar2 = DAT_14c873060 + 1;
    bVar7 = DAT_14c873064 == DAT_14c873060;
    DAT_14c873060 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14c873058,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14c873068,1);
    puVar3 = DAT_14c873078;
    if (DAT_14c873078 == (undefined *)0x0) {
      puVar3 = &DAT_14c873068;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14c873088;
    DAT_14c873088 = *(int *)(DAT_14c873058 + 4 + lVar6 * 0x20);
    DAT_14c87308c = DAT_14c87308c + -1;
    iVar4 = iVar2;
    if (DAT_14c87308c != 0) {
      *(undefined4 *)(DAT_14c873058 + (longlong)DAT_14c873088 * 0x20) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14c873068;
  if (DAT_14c873078 != (undefined *)0x0) {
    puVar3 = DAT_14c873078;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14c873058;
  return param_1;
}



// FUNCTION 14681d194 FUN_14681d194 body=135 status=ok
// SIG undefined FUN_14681d194(void)

undefined8 FUN_14681d194(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if ((DAT_14c873060 - DAT_14c87308c != 1) &&
     (iVar6 = FUN_14681cb46(&DAT_14c873058,param_1,param_2), iVar6 != -1)) {
    puVar1 = (undefined4 *)(DAT_14c873058 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(DAT_14c873058 + (longlong)iVar6 * 0x20) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_2 + 4);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_14681cda8(&DAT_14c873058,*param_3);
    *param_3 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 14681d21c FUN_14681d21c body=515 status=ok
// SIG undefined FUN_14681d21c(void)

void FUN_14681d21c(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  undefined *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14c873098 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c873098,0,0,4);
  }
  uVar2 = DAT_14c8730a0;
  uVar3 = local_70;
  if (DAT_14c8730a0 != 0) {
    uVar9 = 0;
    FUN_144a1cbf0(&DAT_14c873090,0,DAT_14c8730a0,4);
    if (0 < (int)uVar2) {
      do {
        puVar7 = DAT_14c873098;
        if (DAT_14c873098 == (undefined *)0x0) {
          puVar7 = &DAT_14c873090;
        }
        *(undefined4 *)(puVar7 + (ulonglong)(DAT_14c8730a0 + 0x7fffffff & uVar9) * 4) = 0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_60 = 0x100000000;
    local_58 = &DAT_14c873068;
    local_50 = 0xffffffff;
    local_48 = 0;
    if (DAT_14c873080 != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = &DAT_14c873058;
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar3 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    if (local_70._4_4_ < *(int *)(local_58 + 0x18)) {
      iVar11 = local_70._4_4_;
      local_70 = uVar3;
      do {
        lVar1 = *local_88;
        lVar10 = (longlong)iVar11 * 0x20;
        iVar4 = *(int *)(lVar1 + 8 + lVar10);
        puVar8 = &DAT_149dfb77a;
        iVar6 = 0;
        if (iVar4 != 0) {
          puVar8 = *(undefined2 **)(lVar1 + lVar10);
          iVar6 = iVar4 + -1;
        }
        iVar4 = FUN_144a49b4a(iVar6,puVar8);
        uVar5 = (longlong)iVar4 & (longlong)(int)DAT_14c8730a0 - 1U;
        iVar4 = (int)uVar5;
        *(int *)(lVar1 + 0x1c + lVar10) = iVar4;
        puVar7 = DAT_14c873098;
        if (DAT_14c873098 == (undefined *)0x0) {
          puVar7 = &DAT_14c873090;
        }
        *(undefined4 *)(lVar1 + 0x18 + lVar10) =
             *(undefined4 *)(puVar7 + ((longlong)(int)DAT_14c8730a0 - 1U & uVar5) * 4);
        puVar7 = DAT_14c873098;
        if (DAT_14c873098 == (undefined *)0x0) {
          puVar7 = &DAT_14c873090;
        }
        *(int *)(puVar7 + ((longlong)iVar4 & (longlong)(int)DAT_14c8730a0 - 1U) * 4) = iVar11;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar11 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_70._4_4_ < *(int *)(local_78 + 0x18));
    }
  }
  local_70 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681d420 FUN_14681d420 body=347 status=ok
// SIG undefined FUN_14681d420(void)

undefined4 * FUN_14681d420(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14681d57c(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  *local_40 = *puVar1;
  iVar8 = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_40[2] = *puVar2;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  if (*(int *)(local_40 + 1) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*local_40;
    iVar8 = *(int *)(local_40 + 1) + -1;
  }
  uVar5 = FUN_144a49b4a(iVar8,puVar9);
  cVar4 = FUN_14681d662(param_1,uVar5,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_40 + 0x1c) = uVar5;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_14681d746(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14681d57c FUN_14681d57c body=229 status=ok
// SIG undefined FUN_14681d57c(void)

int * FUN_14681d57c(longlong *param_1,int *param_2)

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



// FUNCTION 14681d662 FUN_14681d662 body=114 status=ok
// SIG undefined FUN_14681d662(void)

undefined8 FUN_14681d662(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_140d2d812(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_14681d6d4(param_1,*param_4);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 14681d6d4 FUN_14681d6d4 body=114 status=ok
// SIG undefined FUN_14681d6d4(void)

void FUN_14681d6d4(longlong *param_1,int param_2)

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



// FUNCTION 14681d746 FUN_14681d746 body=476 status=ok
// SIG undefined FUN_14681d746(void)

void FUN_14681d746(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
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
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
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
        lVar11 = (longlong)iVar12 * 0x20;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
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



// FUNCTION 14681d92a FUN_14681d92a body=66 status=ok
// SIG undefined FUN_14681d92a(void)

void FUN_14681d92a(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0x49) == '\x01') {
    FUN_1400020a8(param_1[2]);
    param_1[2] = 0;
  }
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014681d962. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14681d96c FUN_14681d96c body=38 status=ok
// SIG undefined FUN_14681d96c(void)

undefined8 FUN_14681d96c(undefined8 param_1,int param_2)

{
  FUN_14681d992();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14681d992 FUN_14681d992 body=83 status=ok
// SIG undefined FUN_14681d992(void)

void FUN_14681d992(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_149e34bf0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = IQueuedWork::vftable;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014681d9db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 14681d9e6 FUN_14681d9e6 body=62 status=ok
// SIG undefined FUN_14681d9e6(void)

void FUN_14681d9e6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14681da24(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14681da24 FUN_14681da24 body=93 status=ok
// SIG undefined FUN_14681da24(void)

ulonglong FUN_14681da24(uint param_1,uint param_2)

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



// FUNCTION 14681dae4 FUN_14681dae4 body=168 status=ok
// SIG undefined FUN_14681dae4(void)

undefined4 * FUN_14681dae4(longlong param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [32];
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
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = *(undefined8 **)(param_1 + 8);
  local_18 = puVar1[6];
  local_48 = *puVar1;
  uStack_40 = puVar1[1];
  local_38 = *(undefined4 *)(puVar1 + 2);
  uStack_34 = *(undefined4 *)((longlong)puVar1 + 0x14);
  uStack_30 = *(undefined4 *)(puVar1 + 3);
  uStack_2c = *(undefined4 *)((longlong)puVar1 + 0x1c);
  local_28 = *(undefined4 *)(puVar1 + 4);
  uStack_24 = *(undefined4 *)((longlong)puVar1 + 0x24);
  uStack_20 = *(undefined4 *)(puVar1 + 5);
  uStack_1c = *(undefined4 *)((longlong)puVar1 + 0x2c);
  *param_2 = 0xaab48e5b;
  param_2[1] = 0xeda94853;
  param_2[2] = 0xa951ed2d;
  param_2[3] = 0xa8e795d;
  *(undefined ***)(param_2 + 4) = &PTR_FUN_149e34c60;
  puVar2 = (undefined4 *)FUN_14001cc68(0x38,0x10);
  *puVar2 = (undefined4)local_48;
  puVar2[1] = local_48._4_4_;
  puVar2[2] = (undefined4)uStack_40;
  puVar2[3] = uStack_40._4_4_;
  puVar2[4] = local_38;
  puVar2[5] = uStack_34;
  puVar2[6] = uStack_30;
  puVar2[7] = uStack_2c;
  puVar2[8] = local_28;
  puVar2[9] = uStack_24;
  puVar2[10] = uStack_20;
  puVar2[0xb] = uStack_1c;
  *(undefined8 *)(puVar2 + 0xc) = local_18;
  *(undefined4 **)(param_2 + 6) = puVar2;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681db8e FUN_14681db8e body=29 status=ok
// SIG undefined FUN_14681db8e(void)

undefined8 FUN_14681db8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14681dc28 FUN_14681dc28 body=44 status=ok
// SIG undefined FUN_14681dc28(void)

void FUN_14681dc28(longlong param_1,longlong param_2)

{
  FUN_14681b2ce(param_2 + 8,param_1 + 8);
  *(undefined1 *)(param_2 + 0x28) = *(undefined1 *)(param_1 + 0x28);
  *(undefined1 *)(param_2 + 0x29) = *(undefined1 *)(param_1 + 0x29);
  return;
}



// FUNCTION 14681dc54 FUN_14681dc54 body=29 status=ok
// SIG undefined FUN_14681dc54(void)

undefined8 FUN_14681dc54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14681dc9a FUN_14681dc9a body=29 status=ok
// SIG undefined FUN_14681dc9a(void)

undefined8 FUN_14681dc9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14681dce0 FUN_14681dce0 body=29 status=ok
// SIG undefined FUN_14681dce0(void)

undefined8 FUN_14681dce0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14681dd30 FUN_14681dd30 body=203 status=ok
// SIG undefined FUN_14681dd30(void)

int FUN_14681dd30(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_14681dd7a:
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_14681ddf0;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_14681ddf0;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_14681dde1;
    }
  }
  return -1;
LAB_14681ddf0:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_14681dde1:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar10 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_14681dd7a;
}



// FUNCTION 14681ddfc FUN_14681ddfc body=29 status=ok
// SIG undefined FUN_14681ddfc(void)

undefined8 FUN_14681ddfc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14681de42 FUN_14681de42 body=29 status=ok
// SIG undefined FUN_14681de42(void)

undefined8 FUN_14681de42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14681de88 FUN_14681de88 body=29 status=ok
// SIG undefined FUN_14681de88(void)

undefined8 FUN_14681de88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14681dece FUN_14681dece body=29 status=ok
// SIG undefined FUN_14681dece(void)

undefined8 FUN_14681dece(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14681df14 FUN_14681df14 body=29 status=ok
// SIG undefined FUN_14681df14(void)

undefined8 FUN_14681df14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14681df5a FUN_14681df5a body=29 status=ok
// SIG undefined FUN_14681df5a(void)

undefined8 FUN_14681df5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14681dfa0 FUN_14681dfa0 body=29 status=ok
// SIG undefined FUN_14681dfa0(void)

undefined8 FUN_14681dfa0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14681dfe6 FUN_14681dfe6 body=29 status=ok
// SIG undefined FUN_14681dfe6(void)

undefined8 FUN_14681dfe6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14681e034 FUN_14681e034 body=114 status=ok
// SIG undefined FUN_14681e034(void)

void FUN_14681e034(longlong *param_1,int param_2)

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



// FUNCTION 14681e0a6 FUN_14681e0a6 body=38 status=ok
// SIG undefined FUN_14681e0a6(void)

undefined8 FUN_14681e0a6(longlong param_1,undefined8 param_2)

{
  FUN_14681e102(*(undefined8 *)(param_1 + 8));
  return param_2;
}



// FUNCTION 14681e0cc FUN_14681e0cc body=38 status=ok
// SIG undefined FUN_14681e0cc(void)

undefined8 FUN_14681e0cc(longlong param_1,undefined8 param_2)

{
  FUN_14681e4d2(*(undefined8 *)(param_1 + 8));
  return param_2;
}



// FUNCTION 14681e102 FUN_14681e102 body=975 status=ok
// SIG undefined FUN_14681e102(void)

undefined8 *
FUN_14681e102(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,
             wchar_t *param_5)

{
  undefined4 *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_108 [44];
  undefined1 local_dc [4];
  undefined1 local_d8 [16];
  longlong local_c8 [2];
  longlong *local_b8 [2];
  undefined4 *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_98 = *param_3;
  uStack_90 = param_3[1];
  local_88 = 0;
  uStack_80 = 0;
  local_78 = *param_4;
  uStack_74 = param_4[1];
  uStack_70 = param_4[2];
  uStack_6c = param_4[3];
  uVar5 = FUN_144a70b6e(&local_98);
  iVar6 = FUN_1457ad2ca(param_1,uVar5,&local_98);
  if (iVar6 != -1) {
    lVar9 = (longlong)iVar6 * 0x80 + *param_1;
    if (lVar9 != -0x30 && lVar9 != 0) {
      local_60 = param_5;
      pcVar2 = *(code **)(lVar9 + 0x30);
      plVar10 = (longlong *)(lVar9 + 0x50);
      if (*(longlong **)(lVar9 + 0x40) != (longlong *)0x0) {
        plVar10 = *(longlong **)(lVar9 + 0x40);
      }
      uVar8 = (**(code **)(*plVar10 + 8))();
      (*pcVar2)(param_2,uVar8,param_4,&local_60);
      goto LAB_14681e423;
    }
  }
  local_a8 = (undefined4 *)0x0;
  uStack_a0 = 0;
  FUN_14006620a(local_c8,param_3[8],(ulonglong)(param_3[9] - param_3[8]) >> 1);
  FUN_140233b1a(local_b8,local_c8);
  local_60._0_4_ = 4;
  FUN_14023423e(&local_50,local_b8);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,1);
  FUN_140188694(&local_a8,0);
  *local_a8 = (undefined4)local_60;
  local_a8[1] = local_60._4_4_;
  local_a8[2] = uStack_58;
  local_a8[3] = uStack_54;
  if (local_50 == (longlong *)0x0) {
    *(undefined8 *)(local_a8 + 4) = 0;
    local_a8[6] = 0;
  }
  else {
    FUN_14023423e(local_a8 + 4,&local_50);
  }
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
    local_50 = (longlong *)0x0;
    local_48 = 0;
  }
  if (local_b8[0] != (longlong *)0x0) {
    (**(code **)(*local_b8[0] + 0x10))();
  }
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_14006620a(local_c8,*(longlong *)(param_4 + 0x10),
                (ulonglong)(*(longlong *)(param_4 + 0x12) - *(longlong *)(param_4 + 0x10)) >> 1);
  FUN_140233b1a(local_b8,local_c8);
  local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
  FUN_14023423e(&local_50,local_b8);
  uVar3 = uStack_a0;
  lVar9 = (longlong)(int)uStack_a0;
  uVar7 = (int)uStack_a0 + 1;
  uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar7);
  if (uStack_a0._4_4_ < uVar7) {
    FUN_140188694(&local_a8,uVar3 & 0xffffffff);
  }
  puVar1 = local_a8 + lVar9 * 8;
  *puVar1 = (undefined4)local_60;
  puVar1[1] = local_60._4_4_;
  puVar1[2] = uStack_58;
  puVar1[3] = uStack_54;
  if (local_50 == (longlong *)0x0) {
    *(undefined8 *)(local_a8 + lVar9 * 8 + 4) = 0;
    local_a8[lVar9 * 8 + 6] = 0;
  }
  else {
    FUN_14023423e(local_a8 + lVar9 * 8 + 4,&local_50);
  }
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
    local_50 = (longlong *)0x0;
    local_48 = 0;
  }
  if (local_b8[0] != (longlong *)0x0) {
    (**(code **)(*local_b8[0] + 0x10))();
  }
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  local_60 = L"PreUnaryExecutionError";
  uStack_58 = 0x16;
  FUN_1446e940c(local_c8,&local_60);
  local_60 = L"ExpressionParser";
  uStack_58 = 0x10;
  FUN_1446e940c(local_dc,&local_60);
  FUN_140208bae(local_b8,local_dc,local_c8,L"Pre-unary operator {0} cannot operate on {1}");
  FUN_14023409e(local_d8,local_b8,1);
  FUN_140188794(&local_60,local_d8,&local_a8);
  pwVar4 = local_60;
  *param_2 = local_60;
  if (local_60 == (wchar_t *)0x0) {
    *(undefined4 *)(param_2 + 1) = uStack_58;
    *(undefined1 *)(param_2 + 8) = 1;
  }
  else {
    (**(code **)(*(longlong *)local_60 + 8))(local_60);
    *(undefined4 *)(param_2 + 1) = uStack_58;
    *(undefined1 *)(param_2 + 8) = 1;
    (**(code **)(*(longlong *)pwVar4 + 0x10))(pwVar4);
  }
  if (local_b8[0] != (longlong *)0x0) {
    (**(code **)(*local_b8[0] + 0x10))();
  }
  FUN_14007f2db(local_a8,uStack_a0 & 0xffffffff);
  if (local_a8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
LAB_14681e423:
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681e4d2 FUN_14681e4d2 body=979 status=ok
// SIG undefined FUN_14681e4d2(void)

undefined8 *
FUN_14681e4d2(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,
             wchar_t *param_5)

{
  undefined4 *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_108 [44];
  undefined1 local_dc [4];
  undefined1 local_d8 [16];
  longlong local_c8 [2];
  longlong *local_b8 [2];
  undefined4 *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_98 = *param_3;
  uStack_90 = param_3[1];
  local_88 = *param_4;
  uStack_84 = param_4[1];
  uStack_80 = param_4[2];
  uStack_7c = param_4[3];
  local_78 = 0;
  uStack_70 = 0;
  uVar5 = FUN_144a70b6e(&local_98);
  iVar6 = FUN_1457ad2ca((longlong *)(param_1 + 0x50),uVar5,&local_98);
  if (iVar6 != -1) {
    lVar9 = (longlong)iVar6 * 0x80 + *(longlong *)(param_1 + 0x50);
    if (lVar9 != -0x30 && lVar9 != 0) {
      local_60 = param_5;
      pcVar2 = *(code **)(lVar9 + 0x30);
      plVar10 = (longlong *)(lVar9 + 0x50);
      if (*(longlong **)(lVar9 + 0x40) != (longlong *)0x0) {
        plVar10 = *(longlong **)(lVar9 + 0x40);
      }
      uVar8 = (**(code **)(*plVar10 + 8))();
      (*pcVar2)(param_2,uVar8,param_4,&local_60);
      goto LAB_14681e7f7;
    }
  }
  local_a8 = (undefined4 *)0x0;
  uStack_a0 = 0;
  FUN_14006620a(local_c8,param_3[8],(ulonglong)(param_3[9] - param_3[8]) >> 1);
  FUN_140233b1a(local_b8,local_c8);
  local_60._0_4_ = 4;
  FUN_14023423e(&local_50,local_b8);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,1);
  FUN_140188694(&local_a8,0);
  *local_a8 = (undefined4)local_60;
  local_a8[1] = local_60._4_4_;
  local_a8[2] = uStack_58;
  local_a8[3] = uStack_54;
  if (local_50 == (longlong *)0x0) {
    *(undefined8 *)(local_a8 + 4) = 0;
    local_a8[6] = 0;
  }
  else {
    FUN_14023423e(local_a8 + 4,&local_50);
  }
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
    local_50 = (longlong *)0x0;
    local_48 = 0;
  }
  if (local_b8[0] != (longlong *)0x0) {
    (**(code **)(*local_b8[0] + 0x10))();
  }
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_14006620a(local_c8,*(longlong *)(param_4 + 0x10),
                (ulonglong)(*(longlong *)(param_4 + 0x12) - *(longlong *)(param_4 + 0x10)) >> 1);
  FUN_140233b1a(local_b8,local_c8);
  local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
  FUN_14023423e(&local_50,local_b8);
  uVar3 = uStack_a0;
  lVar9 = (longlong)(int)uStack_a0;
  uVar7 = (int)uStack_a0 + 1;
  uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar7);
  if (uStack_a0._4_4_ < uVar7) {
    FUN_140188694(&local_a8,uVar3 & 0xffffffff);
  }
  puVar1 = local_a8 + lVar9 * 8;
  *puVar1 = (undefined4)local_60;
  puVar1[1] = local_60._4_4_;
  puVar1[2] = uStack_58;
  puVar1[3] = uStack_54;
  if (local_50 == (longlong *)0x0) {
    *(undefined8 *)(local_a8 + lVar9 * 8 + 4) = 0;
    local_a8[lVar9 * 8 + 6] = 0;
  }
  else {
    FUN_14023423e(local_a8 + lVar9 * 8 + 4,&local_50);
  }
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
    local_50 = (longlong *)0x0;
    local_48 = 0;
  }
  if (local_b8[0] != (longlong *)0x0) {
    (**(code **)(*local_b8[0] + 0x10))();
  }
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  local_60 = L"PostUnaryExecutionError";
  uStack_58 = 0x17;
  FUN_1446e940c(local_c8,&local_60);
  local_60 = L"ExpressionParser";
  uStack_58 = 0x10;
  FUN_1446e940c(local_dc,&local_60);
  FUN_140208bae(local_b8,local_dc,local_c8,L"Post-unary operator {0} cannot operate on {1}");
  FUN_14023409e(local_d8,local_b8,1);
  FUN_140188794(&local_60,local_d8,&local_a8);
  pwVar4 = local_60;
  *param_2 = local_60;
  if (local_60 == (wchar_t *)0x0) {
    *(undefined4 *)(param_2 + 1) = uStack_58;
    *(undefined1 *)(param_2 + 8) = 1;
  }
  else {
    (**(code **)(*(longlong *)local_60 + 8))(local_60);
    *(undefined4 *)(param_2 + 1) = uStack_58;
    *(undefined1 *)(param_2 + 8) = 1;
    (**(code **)(*(longlong *)pwVar4 + 0x10))(pwVar4);
  }
  if (local_b8[0] != (longlong *)0x0) {
    (**(code **)(*local_b8[0] + 0x10))();
  }
  FUN_14007f2db(local_a8,uStack_a0 & 0xffffffff);
  if (local_a8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
LAB_14681e7f7:
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681e8a6 FUN_14681e8a6 body=208 status=ok
// SIG undefined FUN_14681e8a6(void)

undefined8
FUN_14681e8a6(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  code *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined7 uVar6;
  byte bVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = *param_2;
  uStack_60 = param_2[1];
  local_58 = *param_3;
  uStack_50 = param_3[1];
  plVar9 = (longlong *)(param_1 + 0xf0);
  local_48 = 0;
  uStack_40 = 0;
  uVar3 = FUN_144a70b6e(&local_68);
  plVar8 = plVar9;
  iVar4 = FUN_14681e978(plVar9,uVar3,&local_68);
  if (iVar4 != -1) {
    plVar8 = (longlong *)((longlong)iVar4 * 0x80 + *plVar9);
    if (plVar8 != (longlong *)&DAT_ffffffffffffffd0 && plVar8 != (longlong *)0x0) {
      pcVar1 = (code *)plVar8[6];
      plVar9 = plVar8 + 10;
      if ((longlong *)plVar8[8] != (longlong *)0x0) {
        plVar9 = (longlong *)plVar8[8];
      }
      local_30 = param_4;
      uVar5 = (**(code **)(*plVar9 + 8))();
      uVar5 = (*pcVar1)(uVar5,param_3,&local_30);
      bVar7 = (byte)uVar5;
      uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
      bVar2 = 1;
      goto LAB_14681e954;
    }
  }
  bVar7 = (byte)plVar8;
  bVar2 = 0;
  uVar6 = 0;
LAB_14681e954:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return CONCAT71(uVar6,bVar2 & bVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681e978 FUN_14681e978 body=110 status=ok
// SIG undefined FUN_14681e978(void)

int FUN_14681e978(longlong *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        cVar2 = FUN_144a70af3(lVar4 + (longlong)iVar1 * 0x80,param_3);
        if (cVar2 != '\0') {
          return iVar1;
        }
        lVar4 = *param_1;
        iVar1 = *(int *)(lVar4 + 0x70 + (longlong)iVar1 * 0x80);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 14681e9e6 FUN_14681e9e6 body=44 status=ok
// SIG undefined FUN_14681e9e6(void)

undefined1 FUN_14681e9e6(void)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  ulonglong uVar4;
  
  lVar1 = DAT_14c874590;
  cVar2 = FUN_144a8728e();
  if (cVar2 == '\0') {
    bVar3 = FUN_144a61b4f();
    uVar4 = (ulonglong)(bVar3 ^ 1);
  }
  else {
    uVar4 = 0;
  }
  return *(undefined1 *)(lVar1 + uVar4);
}



// FUNCTION 14681ea12 FUN_14681ea12 body=113 status=ok
// SIG undefined FUN_14681ea12(void)

undefined8 FUN_14681ea12(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14681ea84(param_1,&local_28,L"%D.%h:%m:%s.%n");
  iVar1 = local_20 + -1;
  if (local_20 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_28,iVar1);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681ea84 FUN_14681ea84 body=842 status=ok
// SIG undefined FUN_14681ea84(void)

undefined8 * FUN_14681ea84(longlong *param_1,undefined8 *param_2,short *param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140002184(param_2,(int)(*param_1 >> 0x3f) * -2 + 0x2b);
  do {
    if (*param_3 != 0x25) {
      if (*param_3 == 0) {
        if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return param_2;
      }
switchD_14681eb1f_caseD_65:
      FUN_140002184(param_2);
      goto LAB_14681eaff;
    }
    sVar1 = param_3[1];
    param_3 = param_3 + 1;
    switch(sVar1) {
    case 100:
      lVar4 = *param_1;
      iVar3 = ((int)(lVar4 / 864000000000) + (int)(lVar4 >> 0x3f)) -
              (SUB164(SEXT816(lVar4) * ZEXT816(0xa2e3ff1de20581e3),0xc) >> 0x1f);
      iVar6 = -iVar3;
      if (iVar6 < 0) {
        iVar6 = iVar3;
      }
      pwVar5 = L"%i";
      break;
    case 0x65:
    case 0x67:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x72:
      goto switchD_14681eb1f_caseD_65;
    case 0x66:
      lVar4 = *param_1;
      iVar3 = ((int)lVar4 +
              ((int)(SUB168(SEXT816(lVar4) * ZEXT816(0xd6bf94d5e57a42bd),8) >> 0x17) -
              ((int)(lVar4 / -0x6769800000000000) + (int)(lVar4 >> 0x3f))) * -10000000) / 10000;
      iVar6 = -iVar3;
      if (iVar6 < 0) {
        iVar6 = iVar3;
      }
      pwVar5 = L"%03i";
      break;
    case 0x68:
      uVar2 = (uint)((ulonglong)((*param_1 / 36000000000) * 0x2aaaaaab) >> 0x20);
      iVar3 = (int)(*param_1 / 36000000000) + ((uVar2 >> 2) - ((int)uVar2 >> 0x1f)) * -0x18;
      iVar6 = -iVar3;
      if (iVar6 < 0) {
        iVar6 = iVar3;
      }
      goto LAB_14681ed67;
    case 0x6d:
      lVar4 = *param_1 / 600000000;
      goto LAB_14681ed38;
    case 0x6e:
      lVar4 = *param_1;
      iVar3 = (int)lVar4 +
              ((int)(SUB168(SEXT816(lVar4) * ZEXT816(0xd6bf94d5e57a42bd),8) >> 0x17) -
              ((int)(lVar4 / -0x6769800000000000) + (int)(lVar4 >> 0x3f))) * -10000000;
      iVar6 = iVar3 * -100;
      if (iVar6 < 0) {
        iVar6 = iVar3 * 100;
      }
      pwVar5 = L"%09i";
      break;
    case 0x73:
      lVar4 = *param_1 / 10000000;
LAB_14681ed38:
      iVar3 = (int)lVar4 +
              ((int)(SUB168(SEXT816(lVar4) * ZEXT816(0x8888888888888889),8) >> 5) -
              (SUB164(SEXT816(lVar4) * ZEXT816(0x8888888888888889),0xc) >> 0x1f)) * -0x3c;
      iVar6 = -iVar3;
      if (iVar6 < 0) {
        iVar6 = iVar3;
      }
LAB_14681ed67:
      pwVar5 = L"%02i";
      break;
    case 0x74:
      lVar4 = *param_1;
      iVar3 = (int)lVar4 +
              ((int)(SUB168(SEXT816(lVar4) * ZEXT816(0xd6bf94d5e57a42bd),8) >> 0x17) -
              ((int)(lVar4 / -0x6769800000000000) + (int)(lVar4 >> 0x3f))) * -10000000;
      iVar6 = -iVar3;
      if (iVar6 < 0) {
        iVar6 = iVar3;
      }
      pwVar5 = L"%07i";
      break;
    case 0x75:
      lVar4 = *param_1;
      iVar3 = ((int)lVar4 +
              ((int)(SUB168(SEXT816(lVar4) * ZEXT816(0xd6bf94d5e57a42bd),8) >> 0x17) -
              ((int)(lVar4 / -0x6769800000000000) + (int)(lVar4 >> 0x3f))) * -10000000) / 10;
      iVar6 = -iVar3;
      if (iVar6 < 0) {
        iVar6 = iVar3;
      }
      pwVar5 = L"%06i";
      break;
    default:
      if ((sVar1 == 0) || (sVar1 != 0x44)) goto switchD_14681eb1f_caseD_65;
      lVar4 = *param_1;
      iVar3 = ((int)(lVar4 / 864000000000) + (int)(lVar4 >> 0x3f)) -
              (SUB164(SEXT816(lVar4) * ZEXT816(0xa2e3ff1de20581e3),0xc) >> 0x1f);
      iVar6 = -iVar3;
      if (iVar6 < 0) {
        iVar6 = iVar3;
      }
      pwVar5 = L"%08i";
    }
    FUN_140002266(&local_58,pwVar5,iVar6);
    iVar6 = local_50 + -1;
    if (local_50 == 0) {
      iVar6 = 0;
    }
    FUN_1400020e8(param_2,local_58,iVar6);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
LAB_14681eaff:
    param_3 = param_3 + 1;
  } while( true );
}



// FUNCTION 14681edd0 FUN_14681edd0 body=291 status=ok
// SIG undefined FUN_14681edd0(void)

ulonglong FUN_14681edd0(undefined8 param_1,longlong *param_2)

{
  wchar_t *_Str;
  undefined4 uVar1;
  size_t sVar2;
  uint uVar3;
  ulonglong uVar4;
  void *_Dst;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined8 uStack_48;
  longlong local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  _Str = (wchar_t *)*param_2;
  sVar2 = wcslen(_Str);
  uVar5 = 0;
  if (0x1a < (int)sVar2) {
    FUN_140056680(&local_50,_Str);
    uVar7 = (int)uStack_48 - 1;
    if ((int)uStack_48 == 0) {
      uVar7 = 0;
    }
    uVar3 = 0x1b;
    if ((int)uVar7 < 0x1b) {
      uVar3 = uVar7;
    }
    uVar4 = (ulonglong)uVar3;
    if ((int)uVar3 < 1) {
      uVar4 = uVar5;
    }
    uVar7 = uVar7 - (int)uVar4;
    local_38 = (int)uStack_48;
    if (0 < (int)uVar7) {
      iVar6 = (int)uStack_48 - (uVar7 + (int)uVar4);
      if (iVar6 != 0) {
        _Dst = (void *)(uVar4 * 2 + local_50);
        memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar7 * 2),(longlong)iVar6 * 2);
      }
      local_38 = (int)uStack_48 - uVar7;
    }
    local_40 = local_50;
    local_34 = uStack_48._4_4_;
    local_50 = 0;
    uStack_48 = 0;
    uVar1 = FUN_14681eef4(&local_40,param_1);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if ((char)uVar1 == '\0') {
      uVar5 = 0;
    }
    else {
      *param_2 = *param_2 + 0x36;
      uVar5 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14681eef4 FUN_14681eef4 body=1234 status=ok
// SIG undefined FUN_14681eef4(void)

undefined8 FUN_14681eef4(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  wchar_t *pwVar8;
  ulonglong uVar9;
  void *pvVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 *puVar13;
  wchar_t *_Str;
  undefined8 uVar14;
  int iVar15;
  bool bVar16;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = 0xffffffff;
  local_88 = 0;
  iVar3 = FUN_1447ee042(param_1,&DAT_149e0635c,1,1);
  bVar16 = true;
  if (iVar3 == -1) {
    local_80 = 0xffffffff;
    local_88 = 0;
    iVar3 = FUN_1447ee042(param_1,&DAT_149e06196,1,1);
    bVar16 = iVar3 != -1;
  }
  local_50 = (void *)0x0;
  local_48 = *(int *)(param_1 + 1);
  lVar11 = (longlong)local_48;
  pvVar10 = (void *)*param_1;
  if (lVar11 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,pvVar10,lVar11 * 2);
  }
  FUN_1448097c4(&local_50,&DAT_149e0635c,&DAT_149e31048,1);
  FUN_1448097c4(&local_50,&DAT_149e06196,&DAT_149e31048,1);
  cVar1 = FUN_144a791f8(&local_50,&DAT_149e1419a,1,1);
  FUN_1448097c4(&local_50,&DAT_149e1419a,&DAT_149e31048,1);
  FUN_1448097c4(&local_50,&DAT_149e06124,&DAT_149e31048,1);
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  FUN_1403de9f2(&local_50,&local_68,&DAT_149e31048,1);
  uVar9 = uStack_60;
  if (!bVar16) {
    lVar11 = (longlong)(int)(uint)uStack_60;
    uVar4 = (uint)uStack_60 + 1;
    uStack_60 = CONCAT44(uStack_60._4_4_,uVar4);
    if (uStack_60._4_4_ < uVar4) {
      FUN_1447a1bd6(&local_68,uVar9 & 0xffffffff);
    }
    local_68[lVar11 * 2] = 0;
    (local_68 + lVar11 * 2)[1] = 0;
  }
  if ((longlong)(int)(uint)uStack_60 == 0) {
    uVar4 = 0;
LAB_14681f0e2:
    uVar12 = 5 - uVar4;
    uStack_60 = CONCAT44(uStack_60._4_4_,5);
    if (uStack_60._4_4_ - uVar4 < uVar12) {
      FUN_1447a1bd6(&local_68,uVar4);
    }
    memmove(local_68 + (ulonglong)uVar12 * 2,local_68,(ulonglong)uVar4 << 4);
    memset(local_68,0,(ulonglong)uVar12 * 0x10);
LAB_14681f135:
    puVar13 = local_68;
    if (bVar16) {
      iVar3 = *(int *)(local_68 + 9);
      iVar15 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar15 = 0;
      }
      if (iVar15 < 10) {
        if (iVar15 != 9) {
          FUN_140056680(&local_78);
          uVar4 = (int)uStack_70 - 1;
          if ((int)uStack_70 == 0) {
            uVar4 = 0;
          }
          uVar12 = 9U - iVar15;
          if ((int)uVar4 <= (int)(9U - iVar15)) {
            uVar12 = uVar4;
          }
          uVar9 = (ulonglong)uVar12;
          if ((int)uVar12 < 1) {
            uVar9 = 0;
          }
          uVar12 = uVar4 - (int)uVar9;
          if (0 < (int)uVar12) {
            iVar3 = (int)uStack_70 - (uVar12 + (int)uVar9);
            if (iVar3 != 0) {
              pvVar10 = (void *)(uVar9 * 2 + local_78);
              memmove(pvVar10,(void *)((longlong)pvVar10 + (ulonglong)uVar12 * 2),
                      (longlong)iVar3 * 2);
            }
            uVar4 = ((int)uStack_70 - uVar12) - 1;
            if ((int)uStack_70 - uVar12 == 0) {
              uVar4 = 0;
            }
          }
          lVar11 = local_78;
          local_78 = 0;
          uStack_70 = 0;
          FUN_1400020e8(local_68 + 8,lVar11,uVar4);
          if (lVar11 != 0) {
            FUN_1400020a8(lVar11);
          }
          puVar13 = local_68;
          if (local_78 != 0) {
            FUN_1400020a8();
            puVar13 = local_68;
          }
        }
      }
      else {
        if (iVar3 - iVar15 != 0) {
          memmove((void *)(local_68[8] + 0x12),
                  (void *)(local_68[8] + (ulonglong)(iVar15 - 9U) * 2 + 0x12),
                  (longlong)(iVar3 - iVar15) * 2);
          iVar3 = *(int *)(puVar13 + 9);
        }
        *(uint *)(puVar13 + 9) = iVar3 - (iVar15 - 9U);
      }
    }
    _Str = L"";
    pwVar8 = L"";
    if (*(int *)(puVar13 + 1) != 0) {
      pwVar8 = (wchar_t *)*puVar13;
    }
    iVar3 = _wtoi(pwVar8);
    pwVar8 = L"";
    if (*(int *)(local_68 + 3) != 0) {
      pwVar8 = (wchar_t *)local_68[2];
    }
    iVar15 = _wtoi(pwVar8);
    pwVar8 = L"";
    if (*(int *)(local_68 + 5) != 0) {
      pwVar8 = (wchar_t *)local_68[4];
    }
    iVar5 = _wtoi(pwVar8);
    pwVar8 = L"";
    if (*(int *)(local_68 + 7) != 0) {
      pwVar8 = (wchar_t *)local_68[6];
    }
    iVar6 = _wtoi(pwVar8);
    if (*(int *)(local_68 + 9) != 0) {
      _Str = (wchar_t *)local_68[8];
    }
    iVar7 = _wtoi(_Str);
    if (iVar3 < 0xa2e3ff) {
      uVar14 = 0;
      if ((((iVar15 < 0x18) && (iVar5 < 0x3c)) && (iVar6 < 0x3c)) &&
         (uVar14 = 0, iVar7 < 1000000000)) {
        lVar11 = (longlong)(iVar7 / 100) +
                 (longlong)iVar6 * 10000000 + (longlong)iVar5 * 600000000 +
                 (longlong)iVar15 * 36000000000 + (longlong)iVar3 * 864000000000;
        *param_2 = lVar11;
        uVar14 = 1;
        if (cVar1 != '\0') {
          *param_2 = -lVar11;
        }
      }
      goto LAB_14681f21c;
    }
  }
  else {
    lVar11 = (longlong)(int)(uint)uStack_60 << 4;
    puVar13 = local_68;
    do {
      if ((1 < *(int *)(puVar13 + 1)) && (cVar2 = FUN_1405b43cc(), cVar2 == '\0'))
      goto LAB_14681f21a;
      puVar13 = puVar13 + 2;
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != 0);
    uVar4 = (uint)uStack_60;
    if ((int)(uint)uStack_60 < 5) goto LAB_14681f0e2;
    if ((uint)uStack_60 == 5) goto LAB_14681f135;
  }
LAB_14681f21a:
  uVar14 = 0;
LAB_14681f21c:
  FUN_1447a1747(local_68,uStack_60 & 0xffffffff);
  if (local_68 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


