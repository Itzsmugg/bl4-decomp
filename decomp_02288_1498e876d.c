// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1498e876d FUN_1498e876d body=88 status=ok
// SIG undefined FUN_1498e876d(void)

undefined8 * FUN_1498e876d(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = SharedPointerInternals::TIntrusiveReferenceController<TFutureState<int>,1>::vftable;
  FUN_1405d89e4(puVar1 + 2,param_1);
  return puVar1;
}



// FUNCTION 1498e87c5 Unwind@1498e87c5 body=32 status=ok
// SIG undefined Unwind@1498e87c5(void)

void Unwind_1498e87c5(undefined8 param_1,longlong param_2)

{
  FUN_1400020a8(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1498e87e6 FUN_1498e87e6 body=65 status=ok
// SIG undefined FUN_1498e87e6(void)

void FUN_1498e87e6(longlong param_1)

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



// FUNCTION 1498e8828 Unwind@1498e8828 body=20 status=ok
// SIG undefined Unwind@1498e8828(void)

void Unwind_1498e8828(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e883d FUN_1498e883d body=65 status=ok
// SIG undefined FUN_1498e883d(void)

undefined8 * FUN_1498e883d(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = SharedPointerInternals::
            TIntrusiveReferenceController<TFutureState<FRunnableThread*___ptr64>,1>::vftable;
  FUN_1498e887e(puVar1 + 2);
  return puVar1;
}



// FUNCTION 1498e887e FUN_1498e887e body=62 status=ok
// SIG undefined FUN_1498e887e(void)

LPCRITICAL_SECTION FUN_1498e887e(LPCRITICAL_SECTION param_1)

{
  ULONG_PTR UVar1;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].LockCount = 0;
  param_1[1].RecursionCount = 0;
  param_1[1].LockSemaphore = (HANDLE)0x0;
  UVar1 = FUN_1405d8a54(1);
  param_1[2].SpinCount = UVar1;
  *(undefined1 *)&param_1[3].DebugInfo = 0;
  return param_1;
}



// FUNCTION 1498e88bc FUN_1498e88bc body=65 status=ok
// SIG undefined FUN_1498e88bc(void)

void FUN_1498e88bc(longlong param_1)

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



// FUNCTION 1498e88fe Unwind@1498e88fe body=20 status=ok
// SIG undefined Unwind@1498e88fe(void)

void Unwind_1498e88fe(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e8928 FUN_1498e8928 body=92 status=ok
// SIG undefined FUN_1498e8928(void)

void FUN_1498e8928(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  FUN_147808960(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_1478089aa(param_1 + 0x50,0);
  }
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
                    /* WARNING: Could not recover jumptable at 0x0001498e897d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}



// FUNCTION 1498e8984 Unwind@1498e8984 body=33 status=ok
// SIG undefined Unwind@1498e8984(void)

void Unwind_1498e8984(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x28));
  return;
}



// FUNCTION 1498e89a6 FUN_1498e89a6 body=43 status=ok
// SIG undefined FUN_1498e89a6(void)

undefined4 FUN_1498e89a6(longlong param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  uVar1 = *(undefined4 *)(param_1 + 100);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 1498e89d2 FUN_1498e89d2 body=38 status=ok
// SIG undefined FUN_1498e89d2(void)

undefined8 FUN_1498e89d2(undefined8 param_1,int param_2)

{
  FUN_1498dcc96();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498e89f8 FUN_1498e89f8 body=309 status=ok
// SIG undefined FUN_1498e89f8(void)

ulonglong FUN_1498e89f8(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 unaff_RBP;
  ulonglong uVar6;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  iVar5 = *(int *)(param_1 + 0x38);
  if (iVar5 == 0) {
    uVar6 = 0;
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x30);
    local_68 = *plVar4;
    local_60 = plVar4[1];
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
      iVar5 = *(int *)(param_1 + 0x38);
      plVar4 = *(longlong **)(param_1 + 0x30);
    }
    lVar1 = plVar4[(longlong)(iVar5 + -1) * 2];
    local_70 = plVar4[(longlong)(iVar5 + -1) * 2 + 1];
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
      UNLOCK();
    }
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),lVar1 != 0 && local_68 != 0);
    local_78 = lVar1;
    if (lVar1 != 0 && local_68 != 0) {
      if (local_60 != 0) {
        LOCK();
        *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
        UNLOCK();
      }
      local_58._0_4_ = (undefined4)local_68;
      local_58._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
      uStack_50._0_4_ = (undefined4)local_60;
      uStack_50._4_4_ = (undefined4)((ulonglong)local_60 >> 0x20);
      local_48 = (undefined4)local_58;
      uStack_44 = local_58._4_4_;
      uStack_40 = (undefined4)uStack_50;
      uStack_3c = uStack_50._4_4_;
      uVar2 = *param_2;
      uVar3 = param_2[1];
      *(undefined4 *)param_2 = (undefined4)local_58;
      *(undefined4 *)((longlong)param_2 + 4) = local_58._4_4_;
      *(undefined4 *)(param_2 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
      local_58 = uVar2;
      uStack_50 = uVar3;
      FUN_1498dd4da(&local_58);
      if (local_70 != 0) {
        LOCK();
        *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
        UNLOCK();
      }
      local_58._0_4_ = (undefined4)lVar1;
      local_58._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
      uStack_50._0_4_ = (undefined4)local_70;
      uStack_50._4_4_ = (undefined4)((ulonglong)local_70 >> 0x20);
      local_48 = (undefined4)local_58;
      uStack_44 = local_58._4_4_;
      uStack_40 = (undefined4)uStack_50;
      uStack_3c = uStack_50._4_4_;
      uVar2 = *param_3;
      uVar3 = param_3[1];
      *(undefined4 *)param_3 = (undefined4)local_58;
      *(undefined4 *)((longlong)param_3 + 4) = local_58._4_4_;
      *(undefined4 *)(param_3 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)param_3 + 0xc) = uStack_50._4_4_;
      local_58 = uVar2;
      uStack_50 = uVar3;
      FUN_1498dd4da();
    }
    FUN_1498dd4da(&local_78);
    FUN_1498dd4da(&local_68);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return uVar6 & 0xffffffff;
}



// FUNCTION 1498e8b2e FUN_1498e8b2e body=285 status=ok
// SIG undefined FUN_1498e8b2e(void)

void FUN_1498e8b2e(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  LPCRITICAL_SECTION local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_58 = (LPCRITICAL_SECTION)(param_1 + 8);
  EnterCriticalSection(local_58);
  local_60 = (longlong)*(int *)(param_1 + 0x38);
  local_50 = param_1;
  if (0 < local_60) {
    local_60 = local_60 << 4;
    lVar8 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(local_50 + 0x30) + lVar8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_88);
        plVar2 = *(longlong **)(*(longlong *)(local_50 + 0x30) + lVar8);
        (**(code **)(*plVar2 + 0x10))(plVar2,&local_68);
        uVar4 = local_80;
        lVar9 = local_68 + local_88;
        plVar2 = *(longlong **)(*(longlong *)(local_50 + 0x30) + lVar8);
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_78);
        uVar6 = local_70;
        uVar5 = local_78;
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_147808ba8(param_2,iVar1);
        }
        lVar3 = *param_2;
        lVar7 = (longlong)iVar1 * 0x30;
        *(undefined1 *)(lVar3 + lVar7) = 1;
        *(undefined8 *)(lVar3 + 8 + lVar7) = uVar5;
        *(undefined8 *)(lVar3 + 0x10 + lVar7) = uVar6;
        *(undefined1 *)(lVar3 + 0x18 + lVar7) = 0;
        *(longlong *)(lVar3 + 0x20 + lVar7) = lVar9;
        *(undefined8 *)(lVar3 + 0x28 + lVar7) = uVar4;
      }
      lVar8 = lVar8 + 0x10;
    } while (local_60 != lVar8);
  }
  LeaveCriticalSection(local_58);
  return;
}



// FUNCTION 1498e8c4c Unwind@1498e8c4c body=53 status=ok
// SIG undefined Unwind@1498e8c4c(void)

void Unwind_1498e8c4c(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x50));
  return;
}



// FUNCTION 1498e8c82 FUN_1498e8c82 body=91 status=ok
// SIG undefined FUN_1498e8c82(void)

ulonglong FUN_1498e8c82(longlong param_1)

{
  undefined8 unaff_RSI;
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((*(int *)(param_1 + 0x38) == 0) || (**(longlong **)(param_1 + 0x30) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    FUN_1498e8d30((undefined8 *)(param_1 + 0x30));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return uVar1 & 0xffffffff;
}



// FUNCTION 1498e8cde Unwind@1498e8cde body=35 status=ok
// SIG undefined Unwind@1498e8cde(void)

void Unwind_1498e8cde(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x20));
  return;
}



// FUNCTION 1498e8d02 FUN_1498e8d02 body=45 status=ok
// SIG undefined FUN_1498e8d02(void)

longlong FUN_1498e8d02(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_1498dcc96(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498e8d30 FUN_1498e8d30 body=70 status=ok
// SIG undefined FUN_1498e8d30(void)

void FUN_1498e8d30(undefined8 *param_1)

{
  void *_Dst;
  int iVar1;
  
  _Dst = (void *)*param_1;
  FUN_1498dd4da(_Dst);
  iVar1 = 0;
  if (*(int *)(param_1 + 1) + -1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(*(int *)(param_1 + 1) + -1) << 4);
    iVar1 = *(int *)(param_1 + 1) + -1;
  }
  *(int *)(param_1 + 1) = iVar1;
  FUN_147808b06(param_1);
  return;
}



// FUNCTION 1498e8d76 FUN_1498e8d76 body=44 status=ok
// SIG undefined FUN_1498e8d76(void)

void FUN_1498e8d76(longlong *param_1)

{
  FUN_147808960(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498e8da2 FUN_1498e8da2 body=38 status=ok
// SIG undefined FUN_1498e8da2(void)

void FUN_1498e8da2(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1498e8dc8(param_1);
    param_1 = param_1 + 0x60;
  }
  return;
}



// FUNCTION 1498e8dc8 FUN_1498e8dc8 body=111 status=ok
// SIG undefined FUN_1498e8dc8(void)

void FUN_1498e8dc8(longlong *param_1)

{
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  FUN_1498e8e7a(param_1 + 3);
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x10))();
  }
  return;
}



// FUNCTION 1498e8e38 Unwind@1498e8e38 body=20 status=ok
// SIG undefined Unwind@1498e8e38(void)

void Unwind_1498e8e38(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e8e4e Unwind@1498e8e4e body=20 status=ok
// SIG undefined Unwind@1498e8e4e(void)

void Unwind_1498e8e4e(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e8e64 Unwind@1498e8e64 body=20 status=ok
// SIG undefined Unwind@1498e8e64(void)

void Unwind_1498e8e64(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e8e7a FUN_1498e8e7a body=44 status=ok
// SIG undefined FUN_1498e8e7a(void)

void FUN_1498e8e7a(longlong *param_1)

{
  FUN_1498e8ea6(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498e8ea6 FUN_1498e8ea6 body=38 status=ok
// SIG undefined FUN_1498e8ea6(void)

void FUN_1498e8ea6(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1498e139c(param_1);
    param_1 = param_1 + 0x70;
  }
  return;
}



// FUNCTION 1498e8ecc FUN_1498e8ecc body=85 status=ok
// SIG undefined FUN_1498e8ecc(void)

void FUN_1498e8ecc(LPCRITICAL_SECTION param_1)

{
  longlong *plVar1;
  int iVar2;
  
  EnterCriticalSection(param_1);
  do {
    iVar2 = param_1[1].LockCount;
    do {
      if (iVar2 == 0) {
        if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498e8f13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          LeaveCriticalSection(param_1);
          return;
        }
        return;
      }
      plVar1 = *(longlong **)((longlong)param_1[1].DebugInfo + (longlong)iVar2 * 8 + -8);
      iVar2 = iVar2 + -1;
      param_1[1].LockCount = iVar2;
    } while (plVar1 == (longlong *)0x0);
    (**(code **)(*plVar1 + 0x128))(plVar1,1);
  } while( true );
}



// FUNCTION 1498e8f22 FUN_1498e8f22 body=116 status=ok
// SIG undefined FUN_1498e8f22(void)

void FUN_1498e8f22(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  uVar1 = DAT_14c967818;
  puVar2[2] = DAT_14c967818;
  puVar2[3] = 0;
  puVar2[4] = uVar1;
  *(undefined4 *)(puVar2 + 5) = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  *(undefined1 *)(puVar2 + 8) = 0;
  *(undefined4 *)(puVar2 + 0xb) = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  *puVar2 = &PTR_LAB_14bef8660;
  puVar2[1] = &PTR_LAB_14bef8790;
  puVar2[0xc] = &PTR_FUN_14bef87b0;
  *(undefined4 *)((longlong)puVar2 + 0x87) = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  return;
}



// FUNCTION 1498e8f96 FUN_1498e8f96 body=132 status=ok
// SIG undefined FUN_1498e8f96(void)

void FUN_1498e8f96(longlong param_1,int param_2)

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



// FUNCTION 1498e901c FUN_1498e901c body=80 status=ok
// SIG undefined FUN_1498e901c(void)

longlong FUN_1498e901c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  cVar1 = FUN_145db1694(6,2,0);
  if (cVar1 != '\0') {
    if (((*(longlong *)(param_1 + 0x68) == 0) && (*(longlong *)(param_1 + 0x78) == 0)) &&
       (*(char *)(param_1 + 0x40) == '\0')) {
      param_1 = 0;
    }
    lVar2 = param_1 + 0x60;
    if (param_1 == 0) {
      lVar2 = 0;
    }
  }
  return lVar2;
}



// FUNCTION 1498e906c FUN_1498e906c body=38 status=ok
// SIG undefined FUN_1498e906c(void)

undefined8 FUN_1498e906c(undefined8 param_1,int param_2)

{
  FUN_1498e9148();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498e9092 FUN_1498e9092 body=45 status=ok
// SIG undefined FUN_1498e9092(void)

longlong FUN_1498e9092(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1498e9148(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498e90c0 FUN_1498e90c0 body=45 status=ok
// SIG undefined FUN_1498e90c0(void)

longlong FUN_1498e90c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x60;
  FUN_1498e9148(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498e90ee FUN_1498e90ee body=88 status=ok
// SIG undefined FUN_1498e90ee(void)

undefined8 FUN_1498e90ee(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_3;
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_1446a0560(param_2,param_1 + -0x60,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498e9148 FUN_1498e9148 body=204 status=ok
// SIG undefined FUN_1498e9148(void)

void FUN_1498e9148(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_LAB_14bef8660;
  param_1[1] = &PTR_LAB_14bef8790;
  param_1[0xc] = &PTR_FUN_14bef87b0;
  if (param_1[0x10] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x10] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0xf] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0xf] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x10))();
  }
  if ((longlong *)param_1[0xd] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xd] + 0x10))();
  }
  *param_1 = &PTR_LAB_14bef81e0;
  param_1[1] = &PTR_LAB_14bef8310;
  if (param_1[9] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498e9214 Unwind@1498e9214 body=20 status=ok
// SIG undefined Unwind@1498e9214(void)

void Unwind_1498e9214(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e922a Unwind@1498e922a body=20 status=ok
// SIG undefined Unwind@1498e922a(void)

void Unwind_1498e922a(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e9240 FUN_1498e9240 body=48 status=ok
// SIG undefined FUN_1498e9240(void)

void FUN_1498e9240(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x60,8);
  }
  return;
}



// FUNCTION 1498e9270 FUN_1498e9270 body=391 status=ok
// SIG undefined FUN_1498e9270(void)

void FUN_1498e9270(longlong param_1,longlong param_2,char param_3,int *param_4,int *param_5,
                  int *param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_d8 [47];
  char local_a9;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined1 local_78 [8];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_4 = -1;
  *param_5 = -1;
  *param_6 = 0;
  iVar1 = *(int *)(param_1 + 0x58);
  local_a9 = param_3;
  local_a8 = param_1;
  if (0 < (longlong)iVar1) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(local_a8 + 0x50);
      (**(code **)(**(longlong **)(lVar2 + lVar6) + 0x30))(*(longlong **)(lVar2 + lVar6),&local_88);
      (**(code **)(**(longlong **)(lVar2 + lVar6) + 0x10))(*(longlong **)(lVar2 + lVar6),&local_90);
      lVar3 = local_80;
      lVar7 = local_90 + local_88;
      (**(code **)(**(longlong **)(lVar2 + lVar6) + 0x30))(*(longlong **)(lVar2 + lVar6),&local_a0);
      local_78[0] = 1;
      local_70 = local_a0;
      uStack_6c = uStack_9c;
      uStack_68 = uStack_98;
      uStack_64 = uStack_94;
      local_60 = 0;
      local_50 = lVar3;
      local_58 = lVar7;
      cVar4 = FUN_147805044(param_2,local_78);
      if (cVar4 == '\0') {
        if (local_a9 == '\0') {
          if ((*(longlong *)(param_2 + 0x28) < CONCAT44(uStack_64,uStack_68)) ||
             ((CONCAT44(uStack_64,uStack_68) == *(longlong *)(param_2 + 0x28) &&
              (*(longlong *)(param_2 + 0x20) <= CONCAT44(uStack_6c,local_70))))) break;
        }
        else if ((local_50 < *(longlong *)(param_2 + 0x10)) ||
                ((local_50 == *(longlong *)(param_2 + 0x10) &&
                 (local_58 <= *(longlong *)(param_2 + 8))))) break;
        if (-1 < *param_4) goto LAB_1498e93a2;
        *param_6 = *param_6 + 1;
      }
      else {
        if (*param_4 < 0) {
          *param_4 = (int)lVar5;
        }
LAB_1498e93a2:
        *param_5 = (int)lVar5;
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while (iVar1 != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498e93f8 FUN_1498e93f8 body=192 status=ok
// SIG undefined FUN_1498e93f8(void)

undefined8 * FUN_1498e93f8(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined8 local_28;
  
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar3 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar3 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar1 = (longlong *)*param_3;
      if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_28 = 0;
      }
      else {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
      }
      *param_2 = local_28;
      lVar6 = param_1[1];
      uVar4 = (int)lVar6 + 1;
      *(uint *)(param_1 + 1) = uVar4;
      if (*(uint *)((longlong)param_1 + 0xc) < uVar4) {
        FUN_1447a71f6();
      }
      lVar2 = *param_1;
      lVar6 = (longlong)(int)lVar6 * 0x10;
      *(undefined8 *)(lVar2 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  return param_2;
}



// FUNCTION 1498e94b8 FUN_1498e94b8 body=135 status=ok
// SIG undefined FUN_1498e94b8(void)

undefined8 *
FUN_1498e94b8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  puVar3 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar3 = &PTR_LAB_14bef8860;
  *(undefined4 *)(puVar3 + 1) = *param_4;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14bef87f0;
  puVar3[3] = param_2;
  puVar3[4] = uVar2;
  *(undefined4 *)(puVar3 + 5) = uVar1;
  return param_1;
}



// FUNCTION 1498e9540 Unwind@1498e9540 body=44 status=ok
// SIG undefined Unwind@1498e9540(void)

void Unwind_1498e9540(undefined8 param_1,longlong param_2)

{
  FUN_1449db362(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1498e956c FUN_1498e956c body=29 status=ok
// SIG undefined FUN_1498e956c(void)

undefined8 FUN_1498e956c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498e95b2 FUN_1498e95b2 body=68 status=ok
// SIG undefined FUN_1498e95b2(void)

void FUN_1498e95b2(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14bef8860;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[2] = uVar1;
  *puVar2 = &PTR_FUN_14bef87f0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1498e95f6 FUN_1498e95f6 body=68 status=ok
// SIG undefined FUN_1498e95f6(void)

void FUN_1498e95f6(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14bef8860;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[2] = uVar1;
  *puVar2 = &PTR_FUN_14bef87f0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1498e963a FUN_1498e963a body=129 status=ok
// SIG undefined FUN_1498e963a(void)

void FUN_1498e963a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  EnterCriticalSection(param_2);
  puVar5 = (undefined8 *)FUN_144a72ab6(0x30,param_2 + 1);
  *puVar5 = &PTR_LAB_14bef8860;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  puVar5[1] = *(undefined8 *)(param_1 + 8);
  puVar5[2] = uVar4;
  *puVar5 = &PTR_FUN_14bef87f0;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar1;
  *(undefined4 *)(puVar5 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar5 + 0x24) = uVar3;
  puVar5[5] = *(undefined8 *)(param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498e96ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498e96bc Unwind@1498e96bc body=42 status=ok
// SIG undefined Unwind@1498e96bc(void)

void Unwind_1498e96bc(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) != 0) {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x20));
  }
  return;
}



// FUNCTION 1498e96fc FUN_1498e96fc body=29 status=ok
// SIG undefined FUN_1498e96fc(void)

undefined8 FUN_1498e96fc(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x20))
            ((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18),param_2,
             *(undefined4 *)(param_1 + 8));
  return 1;
}



// FUNCTION 1498e971c FUN_1498e971c body=192 status=ok
// SIG undefined FUN_1498e971c(void)

undefined8 * FUN_1498e971c(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined8 local_28;
  
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar3 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar3 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar1 = (longlong *)*param_3;
      if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_28 = 0;
      }
      else {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
      }
      *param_2 = local_28;
      lVar6 = param_1[1];
      uVar4 = (int)lVar6 + 1;
      *(uint *)(param_1 + 1) = uVar4;
      if (*(uint *)((longlong)param_1 + 0xc) < uVar4) {
        FUN_1447a71f6();
      }
      lVar2 = *param_1;
      lVar6 = (longlong)(int)lVar6 * 0x10;
      *(undefined8 *)(lVar2 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  return param_2;
}



// FUNCTION 1498e97dc FUN_1498e97dc body=122 status=ok
// SIG undefined FUN_1498e97dc(void)

undefined8 * FUN_1498e97dc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  puVar3 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar3 = &PTR_LAB_14bef8940;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14bef88d0;
  puVar3[3] = param_2;
  puVar3[4] = uVar2;
  *(undefined4 *)(puVar3 + 5) = uVar1;
  return param_1;
}



// FUNCTION 1498e9856 Unwind@1498e9856 body=40 status=ok
// SIG undefined Unwind@1498e9856(void)

void Unwind_1498e9856(undefined8 param_1,longlong param_2)

{
  FUN_1449db362(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1498e987e FUN_1498e987e body=29 status=ok
// SIG undefined FUN_1498e987e(void)

undefined8 FUN_1498e987e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498e98c4 FUN_1498e98c4 body=68 status=ok
// SIG undefined FUN_1498e98c4(void)

void FUN_1498e98c4(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14bef8940;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14bef88d0;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 1498e9908 FUN_1498e9908 body=68 status=ok
// SIG undefined FUN_1498e9908(void)

void FUN_1498e9908(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14bef8940;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14bef88d0;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 1498e994c FUN_1498e994c body=129 status=ok
// SIG undefined FUN_1498e994c(void)

void FUN_1498e994c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x30,param_2 + 1);
  *puVar4 = &PTR_LAB_14bef8940;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_14bef88d0;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498e99bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498e99ce Unwind@1498e99ce body=42 status=ok
// SIG undefined Unwind@1498e99ce(void)

void Unwind_1498e99ce(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) != 0) {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x20));
  }
  return;
}



// FUNCTION 1498e9a0a FUN_1498e9a0a body=35 status=ok
// SIG undefined FUN_1498e9a0a(void)

undefined8 FUN_1498e9a0a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498e9a30 FUN_1498e9a30 body=72 status=ok
// SIG undefined FUN_1498e9a30(void)

undefined8 * FUN_1498e9a30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14bef89b0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  FUN_1498e9aa0(puVar1 + 2);
  return puVar1;
}



// FUNCTION 1498e9a82 FUN_1498e9a82 body=29 status=ok
// SIG undefined FUN_1498e9a82(void)

undefined8 FUN_1498e9a82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498e9aa0 FUN_1498e9aa0 body=95 status=ok
// SIG undefined FUN_1498e9aa0(void)

undefined8 * FUN_1498e9aa0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_14001cc68(0x60,0x10);
  FUN_1498e9b00(uVar1);
  *param_1 = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14bef89d0;
  puVar2[2] = uVar1;
  param_1[1] = puVar2;
  return param_1;
}



// FUNCTION 1498e9b00 FUN_1498e9b00 body=76 status=ok
// SIG undefined FUN_1498e9b00(void)

LPCRITICAL_SECTION FUN_1498e9b00(LPCRITICAL_SECTION param_1)

{
  undefined8 *puVar1;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  param_1[1].RecursionCount = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[1].SpinCount = (ULONG_PTR)puVar1;
  param_1[1].LockSemaphore = puVar1;
  param_1[2].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  return param_1;
}



// FUNCTION 1498e9b4c FUN_1498e9b4c body=41 status=ok
// SIG undefined FUN_1498e9b4c(void)

void FUN_1498e9b4c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  FUN_1498e9b94(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 1498e9b76 FUN_1498e9b76 body=29 status=ok
// SIG undefined FUN_1498e9b76(void)

undefined8 FUN_1498e9b76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498e9b94 FUN_1498e9b94 body=157 status=ok
// SIG undefined FUN_1498e9b94(void)

void FUN_1498e9b94(LPCRITICAL_SECTION param_1)

{
  ULONG_PTR UVar1;
  longlong *plVar2;
  ULONG_PTR UVar3;
  
  FUN_1498e8ecc();
  while (UVar1 = *(ULONG_PTR *)param_1[1].SpinCount, UVar1 != 0) {
    plVar2 = *(longlong **)(UVar1 + 8);
    UVar3 = param_1[1].SpinCount;
    param_1[1].SpinCount = UVar1;
    *(undefined8 *)(UVar1 + 8) = 0;
    if (UVar3 != 0) {
      FUN_1400020a8();
    }
    (**(code **)(plVar2[1] + 8))(plVar2 + 1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x128))(plVar2,1);
    }
  }
  while ((ULONG_PTR *)param_1[1].SpinCount != (ULONG_PTR *)0x0) {
    param_1[1].SpinCount = *(ULONG_PTR *)param_1[1].SpinCount;
    FUN_1400020a8();
  }
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x0001498e9c2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(param_1);
  return;
}



// FUNCTION 1498e9c32 Unwind@1498e9c32 body=21 status=ok
// SIG undefined Unwind@1498e9c32(void)

void Unwind_1498e9c32(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e9c48 FUN_1498e9c48 body=65 status=ok
// SIG undefined FUN_1498e9c48(void)

void FUN_1498e9c48(longlong param_1)

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



// FUNCTION 1498e9c8a Unwind@1498e9c8a body=20 status=ok
// SIG undefined Unwind@1498e9c8a(void)

void Unwind_1498e9c8a(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e9c9f thunk_FUN_1498e9d38 body=5 status=ok
// SIG undefined thunk_FUN_1498e9d38(void)

void thunk_FUN_1498e9d38(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_144a5dc74(param_1 + 1);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[9] = 0;
  return;
}



// FUNCTION 1498e9ca4 FUN_1498e9ca4 body=147 status=ok
// SIG undefined FUN_1498e9ca4(void)

void FUN_1498e9ca4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x60,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1498e9d38 FUN_1498e9d38 body=71 status=ok
// SIG undefined FUN_1498e9d38(void)

void FUN_1498e9d38(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_144a5dc74(param_1 + 1);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[9] = 0;
  return;
}



// FUNCTION 1498e9d80 Unwind@1498e9d80 body=39 status=ok
// SIG undefined Unwind@1498e9d80(void)

void Unwind_1498e9d80(undefined8 param_1,longlong param_2)

{
  if ((longlong *)**(longlong **)(param_2 + 0x20) != (longlong *)0x0) {
    (**(code **)(*(longlong *)**(longlong **)(param_2 + 0x20) + 0x10))();
  }
  return;
}



// FUNCTION 1498e9da8 FUN_1498e9da8 body=143 status=ok
// SIG undefined FUN_1498e9da8(void)

void FUN_1498e9da8(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x70,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1498e9e38 FUN_1498e9e38 body=44 status=ok
// SIG undefined FUN_1498e9e38(void)

void FUN_1498e9e38(longlong *param_1)

{
  FUN_14007f2db(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498e9e64 FUN_1498e9e64 body=65 status=ok
// SIG undefined FUN_1498e9e64(void)

void FUN_1498e9e64(longlong param_1)

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



// FUNCTION 1498e9ea6 Unwind@1498e9ea6 body=20 status=ok
// SIG undefined Unwind@1498e9ea6(void)

void Unwind_1498e9ea6(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e9ebc FUN_1498e9ebc body=353 status=ok
// SIG undefined FUN_1498e9ebc(void)

undefined8 * FUN_1498e9ebc(LPCRITICAL_SECTION param_1)

{
  longlong *plVar1;
  int iVar2;
  ULONG_PTR UVar3;
  ULONG_PTR UVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  EnterCriticalSection(param_1);
  iVar2 = param_1[1].LockCount;
  if ((longlong)iVar2 < 1) {
    if (*(longlong *)param_1[1].SpinCount == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)0x0;
      do {
        puVar7 = *(undefined8 **)(*(longlong *)param_1[1].SpinCount + 8);
        plVar1 = puVar7 + 1;
        cVar5 = (**(code **)(puVar7[1] + 0x10))(plVar1);
        if (cVar5 == '\0') break;
        UVar3 = *(ULONG_PTR *)param_1[1].SpinCount;
        if (UVar3 != 0) {
          UVar4 = param_1[1].SpinCount;
          param_1[1].SpinCount = UVar3;
          *(undefined8 *)(UVar3 + 8) = 0;
          if (UVar4 != 0) {
            FUN_1400020a8();
          }
        }
        (**(code **)(*plVar1 + 8))(plVar1);
        if (puVar6 != (undefined8 *)0x0) {
          iVar2 = param_1[1].LockCount;
          param_1[1].LockCount = iVar2 + 1U;
          if ((uint)param_1[1].RecursionCount < iVar2 + 1U) {
            FUN_1498e716c(param_1 + 1,iVar2);
          }
          *(undefined8 **)(&(param_1[1].DebugInfo)->Type + (longlong)iVar2 * 4) = puVar7;
          puVar7 = puVar6;
        }
        puVar6 = puVar7;
      } while (*(longlong *)param_1[1].SpinCount != 0);
    }
  }
  else {
    puVar6 = *(undefined8 **)((longlong)param_1[1].DebugInfo + (longlong)iVar2 * 8 + -8);
    param_1[1].LockCount = iVar2 + -1;
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    *puVar6 = &PTR_LAB_14bef80c0;
    puVar6[1] = &PTR_LAB_14bef8110;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *(undefined4 *)(puVar6 + 4) = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
  }
  return puVar6;
}



// FUNCTION 1498ea01e Unwind@1498ea01e body=48 status=ok
// SIG undefined Unwind@1498ea01e(void)

void Unwind_1498ea01e(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) != 0) {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x20));
  }
  return;
}



// FUNCTION 1498ea05c FUN_1498ea05c body=69 status=ok
// SIG undefined FUN_1498ea05c(void)

longlong FUN_1498ea05c(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 1498ea0a2 Unwind@1498ea0a2 body=21 status=ok
// SIG undefined Unwind@1498ea0a2(void)

void Unwind_1498ea0a2(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498ea0b8 FUN_1498ea0b8 body=136 status=ok
// SIG undefined FUN_1498ea0b8(void)

void FUN_1498ea0b8(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_20 = 0;
  local_18 = param_1[1];
  if (local_18 != 0) {
    iVar2 = *(int *)(local_18 + 8);
    do {
      if (iVar2 == 0) {
        local_18 = 0;
        goto LAB_1498ea0e3;
      }
      LOCK();
      iVar1 = *(int *)(local_18 + 8);
      bVar3 = iVar2 == iVar1;
      if (bVar3) {
        *(int *)(local_18 + 8) = iVar2 + 1;
        iVar1 = iVar2;
      }
      iVar2 = iVar1;
      UNLOCK();
    } while (!bVar3);
    if (local_18 != 0) {
      local_20 = *param_1;
    }
  }
LAB_1498ea0e3:
  if (local_20 == 0) {
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x40))(param_2,1);
    }
  }
  else {
    FUN_1498ea15e();
  }
  FUN_1498ea240(&local_20);
  return;
}



// FUNCTION 1498ea140 Unwind@1498ea140 body=30 status=ok
// SIG undefined Unwind@1498ea140(void)

void Unwind_1498ea140(undefined8 param_1,longlong param_2)

{
  FUN_1498ea240(param_2 + 0x28);
  return;
}



// FUNCTION 1498ea15e FUN_1498ea15e body=188 status=ok
// SIG undefined FUN_1498ea15e(void)

void FUN_1498ea15e(LPCRITICAL_SECTION param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  
  if (param_2 != 0) {
    EnterCriticalSection(param_1);
    plVar1 = (longlong *)(param_2 + 8);
    cVar4 = (**(code **)(*(longlong *)(param_2 + 8) + 0x10))(plVar1);
    if (cVar4 == '\0') {
      puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar5 = 0;
      puVar5[1] = param_2;
      if (puVar5 != (undefined8 *)0x0) {
        puVar3 = param_1[1].LockSemaphore;
        param_1[1].LockSemaphore = puVar5;
        *puVar3 = puVar5;
      }
    }
    else {
      (**(code **)(*plVar1 + 8))(plVar1);
      iVar2 = param_1[1].LockCount;
      param_1[1].LockCount = iVar2 + 1U;
      if ((uint)param_1[1].RecursionCount < iVar2 + 1U) {
        FUN_1498e716c(param_1 + 1,iVar2);
      }
      *(longlong *)(&(param_1[1].DebugInfo)->Type + (longlong)iVar2 * 4) = param_2;
    }
                    /* WARNING: Could not recover jumptable at 0x0001498ea1d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 1498ea21a Unwind@1498ea21a body=37 status=ok
// SIG undefined Unwind@1498ea21a(void)

void Unwind_1498ea21a(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x28));
  return;
}



// FUNCTION 1498ea240 FUN_1498ea240 body=65 status=ok
// SIG undefined FUN_1498ea240(void)

void FUN_1498ea240(longlong param_1)

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



// FUNCTION 1498ea282 Unwind@1498ea282 body=20 status=ok
// SIG undefined Unwind@1498ea282(void)

void Unwind_1498ea282(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498ea297 FUN_1498ea297 body=106 status=ok
// SIG undefined FUN_1498ea297(void)

void FUN_1498ea297(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14bef8a30;
  puVar1[2] = &PTR_LAB_14bef8a50;
  puVar1[3] = 0;
  FUN_144a5dc74(puVar1 + 4);
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 1498ea301 Unwind@1498ea301 body=30 status=ok
// SIG undefined Unwind@1498ea301(void)

void Unwind_1498ea301(undefined8 param_1,longlong param_2)

{
  FUN_1400020a8(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1498ea320 FUN_1498ea320 body=51 status=ok
// SIG undefined FUN_1498ea320(void)

void FUN_1498ea320(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_14bef8a50;
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
  }
  return;
}



// FUNCTION 1498ea354 Unwind@1498ea354 body=19 status=ok
// SIG undefined Unwind@1498ea354(void)

void Unwind_1498ea354(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498ea368 FUN_1498ea368 body=29 status=ok
// SIG undefined FUN_1498ea368(void)

undefined8 FUN_1498ea368(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498ea39a FUN_1498ea39a body=46 status=ok
// SIG undefined FUN_1498ea39a(void)

longlong * FUN_1498ea39a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x18);
  return param_2;
}



// FUNCTION 1498ea3ea FUN_1498ea3ea body=73 status=ok
// SIG undefined FUN_1498ea3ea(void)

undefined8 * FUN_1498ea3ea(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14bef8a50;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498ea434 Unwind@1498ea434 body=21 status=ok
// SIG undefined Unwind@1498ea434(void)

void Unwind_1498ea434(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498ea464 FUN_1498ea464 body=29 status=ok
// SIG undefined FUN_1498ea464(void)

undefined8 FUN_1498ea464(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498ea4b6 FUN_1498ea4b6 body=57 status=ok
// SIG undefined FUN_1498ea4b6(void)

undefined8 * FUN_1498ea4b6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14bef8ab0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498ea4f0 FUN_1498ea4f0 body=376 status=ok
// SIG undefined FUN_1498ea4f0(void)

undefined8 * FUN_1498ea4f0(LPCRITICAL_SECTION param_1)

{
  longlong *plVar1;
  int iVar2;
  ULONG_PTR UVar3;
  ULONG_PTR UVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  EnterCriticalSection(param_1);
  iVar2 = param_1[1].LockCount;
  if ((longlong)iVar2 < 1) {
    if (*(longlong *)param_1[1].SpinCount == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar7 = (undefined8 *)0x0;
      do {
        puVar8 = *(undefined8 **)(*(longlong *)param_1[1].SpinCount + 8);
        plVar1 = puVar8 + 1;
        cVar6 = (**(code **)(puVar8[1] + 0x10))(plVar1);
        if (cVar6 == '\0') break;
        UVar3 = *(ULONG_PTR *)param_1[1].SpinCount;
        if (UVar3 != 0) {
          UVar4 = param_1[1].SpinCount;
          param_1[1].SpinCount = UVar3;
          *(undefined8 *)(UVar3 + 8) = 0;
          if (UVar4 != 0) {
            FUN_1400020a8();
          }
        }
        (**(code **)(*plVar1 + 8))(plVar1);
        if (puVar7 != (undefined8 *)0x0) {
          iVar2 = param_1[1].LockCount;
          param_1[1].LockCount = iVar2 + 1U;
          if ((uint)param_1[1].RecursionCount < iVar2 + 1U) {
            FUN_1498e77da(param_1 + 1,iVar2);
          }
          *(undefined8 **)(&(param_1[1].DebugInfo)->Type + (longlong)iVar2 * 4) = puVar8;
          puVar8 = puVar7;
        }
        puVar7 = puVar8;
      } while (*(longlong *)param_1[1].SpinCount != 0);
    }
  }
  else {
    puVar7 = *(undefined8 **)((longlong)param_1[1].DebugInfo + (longlong)iVar2 * 8 + -8);
    param_1[1].LockCount = iVar2 + -1;
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)FUN_14001cc68(0x60,0x10);
    *puVar7 = &PTR_LAB_14bef81e0;
    puVar7[1] = &PTR_LAB_14bef8310;
    uVar5 = DAT_14c967818;
    puVar7[2] = DAT_14c967818;
    puVar7[3] = 0;
    puVar7[4] = uVar5;
    *(undefined4 *)(puVar7 + 5) = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    *(undefined1 *)(puVar7 + 8) = 0;
    *(undefined4 *)(puVar7 + 0xb) = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
  }
  return puVar7;
}



// FUNCTION 1498ea668 Unwind@1498ea668 body=48 status=ok
// SIG undefined Unwind@1498ea668(void)

void Unwind_1498ea668(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) != 0) {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x20));
  }
  return;
}



// FUNCTION 1498ea6a6 FUN_1498ea6a6 body=69 status=ok
// SIG undefined FUN_1498ea6a6(void)

longlong FUN_1498ea6a6(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 1498ea6ec Unwind@1498ea6ec body=21 status=ok
// SIG undefined Unwind@1498ea6ec(void)

void Unwind_1498ea6ec(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498ea702 FUN_1498ea702 body=139 status=ok
// SIG undefined FUN_1498ea702(void)

void FUN_1498ea702(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_20 = 0;
  local_18 = param_1[1];
  if (local_18 != 0) {
    iVar2 = *(int *)(local_18 + 8);
    do {
      if (iVar2 == 0) {
        local_18 = 0;
        goto LAB_1498ea72d;
      }
      LOCK();
      iVar1 = *(int *)(local_18 + 8);
      bVar3 = iVar2 == iVar1;
      if (bVar3) {
        *(int *)(local_18 + 8) = iVar2 + 1;
        iVar1 = iVar2;
      }
      iVar2 = iVar1;
      UNLOCK();
    } while (!bVar3);
    if (local_18 != 0) {
      local_20 = *param_1;
    }
  }
LAB_1498ea72d:
  if (local_20 == 0) {
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x128))(param_2,1);
    }
  }
  else {
    FUN_1498ea7ac();
  }
  FUN_1498ea88e(&local_20);
  return;
}



// FUNCTION 1498ea78e Unwind@1498ea78e body=30 status=ok
// SIG undefined Unwind@1498ea78e(void)

void Unwind_1498ea78e(undefined8 param_1,longlong param_2)

{
  FUN_1498ea88e(param_2 + 0x28);
  return;
}



// FUNCTION 1498ea7ac FUN_1498ea7ac body=188 status=ok
// SIG undefined FUN_1498ea7ac(void)

void FUN_1498ea7ac(LPCRITICAL_SECTION param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  
  if (param_2 != 0) {
    EnterCriticalSection(param_1);
    plVar1 = (longlong *)(param_2 + 8);
    cVar4 = (**(code **)(*(longlong *)(param_2 + 8) + 0x10))(plVar1);
    if (cVar4 == '\0') {
      puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar5 = 0;
      puVar5[1] = param_2;
      if (puVar5 != (undefined8 *)0x0) {
        puVar3 = param_1[1].LockSemaphore;
        param_1[1].LockSemaphore = puVar5;
        *puVar3 = puVar5;
      }
    }
    else {
      (**(code **)(*plVar1 + 8))(plVar1);
      iVar2 = param_1[1].LockCount;
      param_1[1].LockCount = iVar2 + 1U;
      if ((uint)param_1[1].RecursionCount < iVar2 + 1U) {
        FUN_1498e77da(param_1 + 1,iVar2);
      }
      *(longlong *)(&(param_1[1].DebugInfo)->Type + (longlong)iVar2 * 4) = param_2;
    }
                    /* WARNING: Could not recover jumptable at 0x0001498ea824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 1498ea868 Unwind@1498ea868 body=37 status=ok
// SIG undefined Unwind@1498ea868(void)

void Unwind_1498ea868(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x28));
  return;
}



// FUNCTION 1498ea88e FUN_1498ea88e body=65 status=ok
// SIG undefined FUN_1498ea88e(void)

void FUN_1498ea88e(longlong param_1)

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



// FUNCTION 1498ea8d0 Unwind@1498ea8d0 body=20 status=ok
// SIG undefined Unwind@1498ea8d0(void)

void Unwind_1498ea8d0(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498ea958 FUN_1498ea958 body=201 status=ok
// SIG undefined FUN_1498ea958(void)

void FUN_1498ea958(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  
  lVar3 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar2 = lVar3 + (longlong)param_2 * 0x18;
  lVar9 = (longlong)*(int *)(lVar2 + 0x14);
  iVar8 = *(int *)((longlong)plVar5 + lVar9 * 4);
  if (iVar8 == param_2) {
    puVar6 = (undefined4 *)((longlong)plVar5 + lVar9 * 4);
  }
  else {
    do {
      lVar9 = (longlong)iVar8;
      iVar8 = *(int *)(lVar3 + 0x10 + lVar9 * 0x18);
    } while (iVar8 != param_2);
    puVar6 = (undefined4 *)(lVar3 + lVar9 * 0x18 + 0x10);
  }
  *puVar6 = *(undefined4 *)(lVar2 + 0x10);
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar6 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar6 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (undefined4)param_1[6];
  }
  puVar6[1] = uVar7;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar8 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar8 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 1498ea9b0 FUN_1498ea9b0 body=132 status=ok
// SIG undefined FUN_1498ea9b0(void)

void FUN_1498ea9b0(longlong param_1,int param_2)

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



// FUNCTION 1498eaa36 FUN_1498eaa36 body=31 status=ok
// SIG undefined FUN_1498eaa36(void)

undefined8 FUN_1498eaa36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498eaa72 FUN_1498eaa72 body=60 status=ok
// SIG undefined FUN_1498eaa72(void)

void FUN_1498eaa72(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14bef8b10;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 1498eaaae FUN_1498eaaae body=121 status=ok
// SIG undefined FUN_1498eaaae(void)

void FUN_1498eaaae(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x28,param_2 + 1);
  *puVar4 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_14bef8b10;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498eab17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498eab28 Unwind@1498eab28 body=42 status=ok
// SIG undefined Unwind@1498eab28(void)

void Unwind_1498eab28(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) != 0) {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x20));
  }
  return;
}



// FUNCTION 1498eab52 FUN_1498eab52 body=21 status=ok
// SIG undefined FUN_1498eab52(void)

undefined8 FUN_1498eab52(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498eab80 FUN_1498eab80 body=63 status=ok
// SIG undefined FUN_1498eab80(void)

longlong FUN_1498eab80(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  *(undefined ***)(param_1 + 8) = &PTR_LAB_14bef5540;
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498eabc4 FUN_1498eabc4 body=135 status=ok
// SIG undefined FUN_1498eabc4(void)

undefined8 * FUN_1498eabc4(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    uVar1 = FUN_14001cc68(0x50,0x10);
    FUN_1498db8f6(uVar1,param_3);
    *param_2 = uVar1;
    puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    puVar2[1] = &DAT_100000001;
    *puVar2 = &PTR_LAB_14bef8c70;
    puVar2[2] = uVar1;
    param_2[1] = puVar2;
  }
  return param_2;
}



// FUNCTION 1498eac4c Unwind@1498eac4c body=34 status=ok
// SIG undefined Unwind@1498eac4c(void)

void Unwind_1498eac4c(undefined8 param_1,longlong param_2)

{
  FUN_1400020a8(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1498eac6e FUN_1498eac6e body=423 status=ok
// SIG undefined FUN_1498eac6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1498eac6e(undefined1 (*param_1) [16],longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  int local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  byte local_61 [33];
  
  local_61[1] = 0xfe;
  local_61[2] = 0xff;
  local_61[3] = 0xff;
  local_61[4] = 0xff;
  local_61[5] = 0xff;
  local_61[6] = 0xff;
  local_61[7] = 0xff;
  local_61[8] = 0xff;
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  FUN_1446a7462();
  puVar5 = local_78 + (int)uStack_70;
  for (puVar6 = local_78; puVar6 != puVar5; puVar6 = puVar6 + 1) {
    FUN_144a5dc74(local_b0);
    local_a0 = 0;
    uStack_98 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_61[0] = 0;
    cVar3 = FUN_1498e6431(*puVar6,local_b0,&local_a0,local_61,&local_88);
    if (cVar3 != '\0') {
      local_90 = (local_61[0] & 1) * 2 + 6;
      if (_DAT_14ab40900 != *param_1) {
        local_90 = 1;
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1498eaec2(param_2,iVar1);
      }
      lVar2 = *param_2;
      lVar4 = (longlong)iVar1 * 0x38;
      FUN_14023423e(lVar2 + lVar4,local_b0);
      *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0;
      *(undefined8 *)(lVar2 + 0x10 + lVar4) = local_a0;
      local_a0 = 0;
      *(undefined4 *)(lVar2 + 0x18 + lVar4) = (undefined4)uStack_98;
      *(undefined4 *)(lVar2 + 0x1c + lVar4) = uStack_98._4_4_;
      uStack_98 = 0;
      *(int *)(lVar2 + 0x20 + lVar4) = local_90;
      *(undefined8 *)(lVar2 + 0x28 + lVar4) = 0;
      *(undefined8 *)(lVar2 + 0x28 + lVar4) = local_88;
      local_88 = 0;
      *(undefined4 *)(lVar2 + 0x30 + lVar4) = (undefined4)uStack_80;
      *(undefined4 *)(lVar2 + 0x34 + lVar4) = uStack_80._4_4_;
      uStack_80 = 0;
    }
    FUN_147819d4c(local_b0);
  }
  FUN_1498eae96(&local_78);
  return;
}



// FUNCTION 1498eae16 Unwind@1498eae16 body=64 status=ok
// SIG undefined Unwind@1498eae16(void)

void Unwind_1498eae16(undefined8 param_1,longlong param_2)

{
  FUN_147819d4c(param_2 + 0x58);
  return;
}



// FUNCTION 1498eae56 Unwind@1498eae56 body=64 status=ok
// SIG undefined Unwind@1498eae56(void)

void Unwind_1498eae56(undefined8 param_1,longlong param_2)

{
  FUN_1498eae96(param_2 + 0x90);
  return;
}



// FUNCTION 1498eae96 FUN_1498eae96 body=44 status=ok
// SIG undefined FUN_1498eae96(void)

void FUN_1498eae96(longlong *param_1)

{
  FUN_1498eaf52(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498eaec2 FUN_1498eaec2 body=143 status=ok
// SIG undefined FUN_1498eaec2(void)

void FUN_1498eaec2(longlong param_1,int param_2)

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



// FUNCTION 1498eaf52 FUN_1498eaf52 body=63 status=ok
// SIG undefined FUN_1498eaf52(void)

void FUN_1498eaf52(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 1498eaf91 Unwind@1498eaf91 body=22 status=ok
// SIG undefined Unwind@1498eaf91(void)

void Unwind_1498eaf91(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498eafc8 FUN_1498eafc8 body=29 status=ok
// SIG undefined FUN_1498eafc8(void)

undefined8 FUN_1498eafc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498eafe5 FUN_1498eafe5 body=38 status=ok
// SIG undefined FUN_1498eafe5(void)

void FUN_1498eafe5(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1498ddd06(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 1498eb00c FUN_1498eb00c body=132 status=ok
// SIG undefined FUN_1498eb00c(void)

void FUN_1498eb00c(longlong param_1,int param_2)

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



// FUNCTION 1498eb092 FUN_1498eb092 body=147 status=ok
// SIG undefined FUN_1498eb092(void)

void FUN_1498eb092(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1498eb126 FUN_1498eb126 body=62 status=ok
// SIG undefined FUN_1498eb126(void)

void FUN_1498eb126(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1498eb164(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,0x10);
  }
  return;
}



// FUNCTION 1498eb164 FUN_1498eb164 body=112 status=ok
// SIG undefined FUN_1498eb164(void)

ulonglong FUN_1498eb164(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x50) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1498eb19e;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x50,0x10);
      param_2 = param_2 / 0x50;
    }
  }
LAB_1498eb19e:
  return param_2 & 0xffffffff;
}



// FUNCTION 1498eb1d4 FUN_1498eb1d4 body=48 status=ok
// SIG undefined FUN_1498eb1d4(void)

void FUN_1498eb1d4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x50,0x10);
  }
  return;
}



// FUNCTION 1498eb206 FUN_1498eb206 body=29 status=ok
// SIG undefined FUN_1498eb206(void)

undefined8 FUN_1498eb206(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498eb224 FUN_1498eb224 body=29 status=ok
// SIG undefined FUN_1498eb224(void)

undefined8 FUN_1498eb224(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498eb242 FUN_1498eb242 body=48 status=ok
// SIG undefined FUN_1498eb242(void)

void FUN_1498eb242(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,4);
  }
  return;
}



// FUNCTION 1498eb274 FUN_1498eb274 body=29 status=ok
// SIG undefined FUN_1498eb274(void)

undefined8 FUN_1498eb274(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498eb292 FUN_1498eb292 body=29 status=ok
// SIG undefined FUN_1498eb292(void)

undefined8 FUN_1498eb292(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498eb2b2 FUN_1498eb2b2 body=29 status=ok
// SIG undefined FUN_1498eb2b2(void)

undefined8 FUN_1498eb2b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498eb2d0 FUN_1498eb2d0 body=29 status=ok
// SIG undefined FUN_1498eb2d0(void)

undefined8 FUN_1498eb2d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498eb2ee FUN_1498eb2ee body=89 status=ok
// SIG undefined FUN_1498eb2ee(void)

void FUN_1498eb2ee(longlong param_1,int param_2)

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



// FUNCTION 1498eb347 FUN_1498eb347 body=58 status=ok
// SIG undefined FUN_1498eb347(void)

void FUN_1498eb347(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    plVar1 = *(longlong **)(param_2 + lVar2 * 8);
    *(longlong **)(param_1 + lVar2 * 8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    lVar2 = lVar2 + 1;
  } while (param_3 != (int)lVar2);
  return;
}



// FUNCTION 1498eb382 FUN_1498eb382 body=314 status=ok
// SIG undefined FUN_1498eb382(void)

longlong FUN_1498eb382(LPCRITICAL_SECTION param_1)

{
  longlong *plVar1;
  int iVar2;
  ULONG_PTR UVar3;
  ULONG_PTR UVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  
  EnterCriticalSection(param_1);
  iVar2 = param_1[1].LockCount;
  if ((longlong)iVar2 < 1) {
    if (*(longlong *)param_1[1].SpinCount == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      do {
        lVar7 = *(longlong *)(*(longlong *)param_1[1].SpinCount + 8);
        plVar1 = (longlong *)(lVar7 + 8);
        cVar5 = (**(code **)(*(longlong *)(lVar7 + 8) + 0x10))(plVar1);
        if (cVar5 == '\0') break;
        UVar3 = *(ULONG_PTR *)param_1[1].SpinCount;
        if (UVar3 != 0) {
          UVar4 = param_1[1].SpinCount;
          param_1[1].SpinCount = UVar3;
          *(undefined8 *)(UVar3 + 8) = 0;
          if (UVar4 != 0) {
            FUN_1400020a8();
          }
        }
        (**(code **)(*plVar1 + 8))(plVar1);
        if (lVar6 != 0) {
          iVar2 = param_1[1].LockCount;
          param_1[1].LockCount = iVar2 + 1U;
          if ((uint)param_1[1].RecursionCount < iVar2 + 1U) {
            FUN_1498e8f96(param_1 + 1,iVar2);
          }
          *(longlong *)(&(param_1[1].DebugInfo)->Type + (longlong)iVar2 * 4) = lVar7;
          lVar7 = lVar6;
        }
        lVar6 = lVar7;
      } while (*(longlong *)param_1[1].SpinCount != 0);
    }
  }
  else {
    lVar6 = *(longlong *)((longlong)param_1[1].DebugInfo + (longlong)iVar2 * 8 + -8);
    param_1[1].LockCount = iVar2 + -1;
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if (lVar6 == 0) {
    lVar6 = FUN_1498e8f22();
    (*(code *)**(undefined8 **)(lVar6 + 8))(lVar6 + 8);
  }
  return lVar6;
}



// FUNCTION 1498eb4bc Unwind@1498eb4bc body=48 status=ok
// SIG undefined Unwind@1498eb4bc(void)

void Unwind_1498eb4bc(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) != 0) {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x20));
  }
  return;
}



// FUNCTION 1498eb4fa FUN_1498eb4fa body=69 status=ok
// SIG undefined FUN_1498eb4fa(void)

longlong FUN_1498eb4fa(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 1498eb540 Unwind@1498eb540 body=21 status=ok
// SIG undefined Unwind@1498eb540(void)

void Unwind_1498eb540(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498eb556 FUN_1498eb556 body=139 status=ok
// SIG undefined FUN_1498eb556(void)

void FUN_1498eb556(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_20 = 0;
  local_18 = param_1[1];
  if (local_18 != 0) {
    iVar2 = *(int *)(local_18 + 8);
    do {
      if (iVar2 == 0) {
        local_18 = 0;
        goto LAB_1498eb581;
      }
      LOCK();
      iVar1 = *(int *)(local_18 + 8);
      bVar3 = iVar2 == iVar1;
      if (bVar3) {
        *(int *)(local_18 + 8) = iVar2 + 1;
        iVar1 = iVar2;
      }
      iVar2 = iVar1;
      UNLOCK();
    } while (!bVar3);
    if (local_18 != 0) {
      local_20 = *param_1;
    }
  }
LAB_1498eb581:
  if (local_20 == 0) {
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x128))(param_2,1);
    }
  }
  else {
    FUN_1498eb600();
  }
  FUN_1498eb6e2(&local_20);
  return;
}



// FUNCTION 1498eb5e2 Unwind@1498eb5e2 body=30 status=ok
// SIG undefined Unwind@1498eb5e2(void)

void Unwind_1498eb5e2(undefined8 param_1,longlong param_2)

{
  FUN_1498eb6e2(param_2 + 0x28);
  return;
}



// FUNCTION 1498eb600 FUN_1498eb600 body=188 status=ok
// SIG undefined FUN_1498eb600(void)

void FUN_1498eb600(LPCRITICAL_SECTION param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  
  if (param_2 != 0) {
    EnterCriticalSection(param_1);
    plVar1 = (longlong *)(param_2 + 8);
    cVar4 = (**(code **)(*(longlong *)(param_2 + 8) + 0x10))(plVar1);
    if (cVar4 == '\0') {
      puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar5 = 0;
      puVar5[1] = param_2;
      if (puVar5 != (undefined8 *)0x0) {
        puVar3 = param_1[1].LockSemaphore;
        param_1[1].LockSemaphore = puVar5;
        *puVar3 = puVar5;
      }
    }
    else {
      (**(code **)(*plVar1 + 8))(plVar1);
      iVar2 = param_1[1].LockCount;
      param_1[1].LockCount = iVar2 + 1U;
      if ((uint)param_1[1].RecursionCount < iVar2 + 1U) {
        FUN_1498e8f96(param_1 + 1,iVar2);
      }
      *(longlong *)(&(param_1[1].DebugInfo)->Type + (longlong)iVar2 * 4) = param_2;
    }
                    /* WARNING: Could not recover jumptable at 0x0001498eb678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 1498eb6bc Unwind@1498eb6bc body=37 status=ok
// SIG undefined Unwind@1498eb6bc(void)

void Unwind_1498eb6bc(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x28));
  return;
}



// FUNCTION 1498eb6e2 FUN_1498eb6e2 body=65 status=ok
// SIG undefined FUN_1498eb6e2(void)

void FUN_1498eb6e2(longlong param_1)

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



// FUNCTION 1498eb724 Unwind@1498eb724 body=20 status=ok
// SIG undefined Unwind@1498eb724(void)

void Unwind_1498eb724(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498eb73a FUN_1498eb73a body=132 status=ok
// SIG undefined FUN_1498eb73a(void)

void FUN_1498eb73a(longlong param_1,int param_2)

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



// FUNCTION 1498eb7c0 FUN_1498eb7c0 body=132 status=ok
// SIG undefined FUN_1498eb7c0(void)

void FUN_1498eb7c0(longlong param_1,int param_2)

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



// FUNCTION 1498eb846 FUN_1498eb846 body=41 status=ok
// SIG undefined FUN_1498eb846(void)

void FUN_1498eb846(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  FUN_1498e69c2(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 1498eb870 FUN_1498eb870 body=29 status=ok
// SIG undefined FUN_1498eb870(void)

undefined8 FUN_1498eb870(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498eb8aa FUN_1498eb8aa body=36 status=ok
// SIG undefined FUN_1498eb8aa(void)

undefined8 FUN_1498eb8aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1498eb8ea FUN_1498eb8ea body=93 status=ok
// SIG undefined FUN_1498eb8ea(void)

void FUN_1498eb8ea(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bef9ae0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1498eb948 FUN_1498eb948 body=123 status=ok
// SIG undefined FUN_1498eb948(void)

void FUN_1498eb948(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bef9ae0;
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



// FUNCTION 1498eb9c4 FUN_1498eb9c4 body=21 status=ok
// SIG undefined FUN_1498eb9c4(void)

undefined8 FUN_1498eb9c4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498eb9da FUN_1498eb9da body=31 status=ok
// SIG undefined FUN_1498eb9da(void)

bool FUN_1498eb9da(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x38))();
  return 0 < iVar1;
}



// FUNCTION 1498eb9fa FUN_1498eb9fa body=138 status=ok
// SIG undefined FUN_1498eb9fa(void)

undefined8 * FUN_1498eb9fa(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_28,"WmfMedia",1);
  uVar1 = FUN_144a52528();
  plVar2 = (longlong *)FUN_1405f3750(uVar1,local_28,0);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x48))(plVar2,param_2,param_3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498eba86 FUN_1498eba86 body=151 status=ok
// SIG undefined FUN_1498eba86(void)

undefined8 FUN_1498eba86(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = L"MediaPlayerDisplayName";
  local_30 = 0x16;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"FWmfMediaFactoryModule";
  local_30 = 0x16;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(param_2,local_40,local_3c,L"Windows Media Foundation");
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ebb1e FUN_1498ebb1e body=120 status=ok
// SIG undefined FUN_1498ebb1e(void)

undefined8 * FUN_1498ebb1e(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc32258) {
    FUN_144b3d300(&DAT_14cc32258);
    if (DAT_14cc32258 == -1) {
      FUN_1446f470e(&DAT_14cc32250,L"WmfMedia",1);
      _Init_thread_footer(&DAT_14cc32258);
    }
  }
  *param_2 = DAT_14cc32250;
  return param_2;
}



// FUNCTION 1498ebbbc FUN_1498ebbbc body=1921 status=ok
// SIG undefined FUN_1498ebbbc(void)

undefined8
FUN_1498ebbbc(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined2 *puVar5;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ushort uVar10;
  ulonglong uVar11;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined1 local_134 [4];
  longlong *local_130 [2];
  undefined8 local_120;
  longlong *local_118;
  longlong *local_110 [2];
  undefined1 local_fc [4];
  wchar_t *local_f8 [2];
  undefined8 local_e8;
  longlong *local_e0;
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  longlong local_b8 [2];
  undefined2 *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *local_90;
  wchar_t **local_88;
  ulonglong *local_80;
  longlong local_78;
  undefined4 local_70;
  wchar_t *local_68;
  undefined4 local_60;
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_a8 = (undefined2 *)0x0;
  uStack_a0 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  FUN_140056680(&local_68,&DAT_149e3579e);
  local_140 = 0;
  local_148 = 0;
  cVar4 = FUN_1407cdbc6(param_2,&local_68,local_b8 + 2,local_b8);
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (cVar4 == '\0') {
    uVar9 = 0;
    if (param_5 == (longlong *)0x0) goto LAB_1498ebd47;
    local_68 = L"NoSchemeFound";
    local_60 = 0xd;
    FUN_1446e940c(&local_78,&local_68);
    local_68 = L"FWmfMediaFactoryModule";
    local_60 = 0x16;
    FUN_1446e940c(&local_88,&local_68);
    FUN_140208bae(&local_68,&local_88,&local_78,L"No URI scheme found");
    iVar3 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
      FUN_14001d63e(param_5,iVar3);
    }
    FUN_14023423e((longlong)iVar3 * 0x10 + *param_5,&local_68);
    local_f8[0] = local_68;
  }
  else {
    cVar4 = FUN_144a23846(param_1 + 0x30,local_b8 + 2);
    if (cVar4 != '\0') {
      puVar5 = local_a8;
      if ((int)uStack_a0 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      lVar6 = 0;
      while( true ) {
        uVar7 = *(ushort *)((longlong)puVar5 + lVar6);
        uVar8 = (ulonglong)uVar7;
        uVar10 = *(ushort *)((longlong)&DAT_14a8e6a18 + lVar6);
        if (uVar7 != uVar10) break;
        if (uVar7 == 0) goto LAB_1498ebfc2;
LAB_1498ebf97:
        lVar6 = lVar6 + 2;
      }
      if ((uVar10 | uVar7) < 0x80) {
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        uVar11 = (ulonglong)uVar10;
        uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
        if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar11]) goto LAB_1498ebf97;
      }
      if (uVar7 != uVar10) goto LAB_1498ec002;
LAB_1498ebfc2:
      FUN_144a06df0(local_c8,local_b8,0);
      cVar4 = FUN_144a23846(param_1 + 0x10,local_c8);
      if (cVar4 == '\0') {
        if (param_5 != (longlong *)0x0) {
          FUN_140009b9a(local_110,local_c8);
          local_68 = L"ExtensionNotSupported";
          local_60 = 0x15;
          FUN_1446e940c(local_fc,&local_68);
          local_68 = L"FWmfMediaFactoryModule";
          local_60 = 0x16;
          FUN_1446e940c(local_134,&local_68);
          FUN_140208bae(local_130,local_134,local_fc,L"The file extension \'{0}\' is not supported")
          ;
          FUN_14023409e(&local_120,local_130,1);
          local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
          FUN_14023423e(local_58,local_110);
          local_80 = &local_48;
          local_88 = &local_68;
          FUN_14010d304(&local_78);
          local_98 = local_120;
          local_90 = local_118;
          if (local_118 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_118 + 1) = (int)local_118[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_f8,&local_98,&local_78);
          FUN_14007f2db(local_78,local_70);
          if (local_78 != 0) {
            FUN_1400020a8();
          }
          if (local_58[0] != (longlong *)0x0) {
            (**(code **)(*local_58[0] + 0x10))();
          }
          if (local_118 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_118 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_118)(local_118);
              LOCK();
              piVar2 = (int *)((longlong)local_118 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_118 + 0x10))(local_118);
              }
            }
          }
          if (local_110[0] != (longlong *)0x0) {
            (**(code **)(*local_110[0] + 0x10))();
          }
          iVar3 = (int)param_5[1];
          *(uint *)(param_5 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
            FUN_14001d63e(param_5,iVar3);
          }
          FUN_14023423e((longlong)iVar3 * 0x10 + *param_5,local_f8);
          if (local_f8[0] != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_f8[0] + 0x10))();
          }
          if (local_130[0] != (longlong *)0x0) {
            (**(code **)(*local_130[0] + 0x10))();
          }
        }
        if (local_c8[0] != (longlong *)0x0) {
          FUN_1400020a8();
        }
        uVar9 = 0;
      }
      else {
        if (local_c8[0] != (longlong *)0x0) {
          FUN_1400020a8();
        }
LAB_1498ec002:
        uVar9 = 0x50;
        if (param_3 != (longlong *)0x0 && param_4 != (longlong *)0x0) {
          FUN_1446ddc76(&local_68,"PrecacheFile",1);
          cVar4 = (**(code **)(*param_3 + 0x30))(param_3,&local_68,0);
          if (cVar4 != '\0') {
            puVar5 = local_a8;
            if ((int)uStack_a0 == 0) {
              puVar5 = &DAT_149dfb77a;
            }
            lVar6 = 0;
            while( true ) {
              uVar7 = *(ushort *)((longlong)puVar5 + lVar6);
              uVar8 = (ulonglong)uVar7;
              uVar10 = *(ushort *)((longlong)&DAT_14a8e6a18 + lVar6);
              if (uVar7 != uVar10) break;
              if (uVar7 == 0) goto LAB_1498ebd47;
LAB_1498ec268:
              lVar6 = lVar6 + 2;
            }
            if ((uVar10 | uVar7) < 0x80) {
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar11 = (ulonglong)uVar10;
              uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
              if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar11]) goto LAB_1498ec268;
            }
            if (uVar7 != uVar10) {
              local_68 = L"PrecachingNotSupported";
              local_60 = 0x16;
              FUN_1446e940c(&local_78,&local_68);
              local_68 = L"FWmfMediaFactoryModule";
              local_60 = 0x16;
              FUN_1446e940c(&local_88,&local_68);
              FUN_140208bae(&local_68,&local_88,&local_78,
                            L"Precaching is supported for local files only");
              iVar3 = (int)param_4[1];
              *(uint *)(param_4 + 1) = iVar3 + 1U;
              if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
                FUN_14001d63e(param_4,iVar3);
              }
              FUN_14023423e((longlong)iVar3 * 0x10 + *param_4,&local_68);
              local_f8[0] = local_68;
              goto LAB_1498ebd3c;
            }
          }
        }
      }
      goto LAB_1498ebd47;
    }
    uVar9 = 0;
    if (param_5 == (longlong *)0x0) goto LAB_1498ebd47;
    FUN_140009b9a(local_d8,local_b8 + 2);
    local_68 = L"SchemeNotSupported";
    local_60 = 0x12;
    FUN_1446e940c(local_130,&local_68);
    local_68 = L"FWmfMediaFactoryModule";
    local_60 = 0x16;
    FUN_1446e940c(local_fc,&local_68);
    FUN_140208bae(local_f8,local_fc,local_130,L"The URI scheme \'{0}\' is not supported");
    FUN_14023409e(&local_e8,local_f8,1);
    local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
    FUN_14023423e(local_58,local_d8);
    local_80 = &local_48;
    local_88 = &local_68;
    FUN_14010d304(&local_78);
    local_98 = local_e8;
    local_90 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_98,&local_78);
    FUN_14007f2db(local_78,local_70);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != (longlong *)0x0) {
      (**(code **)(*local_58[0] + 0x10))();
    }
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar2 = (int *)((longlong)local_e0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_e0 + 0x10))(local_e0);
        }
      }
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    iVar3 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
      FUN_14001d63e(param_5,iVar3);
    }
    FUN_14023423e((longlong)iVar3 * 0x10 + *param_5,local_c8);
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
  }
LAB_1498ebd3c:
  if (local_f8[0] != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_f8[0] + 0x10))();
  }
LAB_1498ebd47:
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 1498ec33e FUN_1498ec33e body=43 status=ok
// SIG undefined FUN_1498ec33e(void)

undefined8 FUN_1498ec33e(undefined8 param_1,int param_2)

{
  FUN_145dc3e62();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1498ec37a FUN_1498ec37a body=65 status=ok
// SIG undefined FUN_1498ec37a(void)

undefined1 FUN_1498ec37a(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = FUN_14118da1c();
    cVar2 = FUN_14054d46e(uVar1,L"TcpMessagingListen=");
    if (cVar2 == '\0') {
      uVar1 = FUN_14118da1c();
      uVar3 = FUN_14054d46e(uVar1,L"TcpMessagingConnect=");
      return uVar3;
    }
  }
  return 1;
}



// FUNCTION 1498ec3bc FUN_1498ec3bc body=118 status=ok
// SIG undefined FUN_1498ec3bc(void)

undefined8 * FUN_1498ec3bc(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  uVar2 = FUN_14118da1c();
  FUN_14063337c(uVar2,L"TcpMessagingListen=",param_2,1,0);
  return param_2;
}



// FUNCTION 1498ec432 FUN_1498ec432 body=294 status=ok
// SIG undefined FUN_1498ec432(void)

void FUN_1498ec432(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  void *_Src;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_58 [3];
  
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar2 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x40);
    lVar8 = 0;
    do {
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1447a1bd6(param_2,iVar3);
      }
      lVar5 = *param_2;
      lVar9 = (longlong)iVar3 * 0x10;
      puVar1 = (undefined8 *)(lVar5 + lVar9);
      *(undefined8 *)(lVar5 + lVar9) = 0;
      iVar3 = *(int *)(lVar4 + 8 + lVar8);
      _Src = *(void **)(lVar4 + lVar8);
      *(int *)(lVar5 + 8 + lVar9) = iVar3;
      if ((longlong)iVar3 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,iVar3,0);
        memcpy((void *)*puVar1,_Src,(longlong)iVar3 * 2);
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar8);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  uVar7 = FUN_14118da1c();
  local_68 = 0;
  cVar6 = FUN_14063337c(uVar7,L"TcpMessagingConnect=",local_58,0);
  if (cVar6 != '\0') {
    FUN_1403de9f2(local_58,param_2,&DAT_149e06196,1);
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[2] ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498ec55a FUN_1498ec55a body=100 status=ok
// SIG undefined FUN_1498ec55a(void)

void FUN_1498ec55a(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_14befa400;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = *param_2;
  lVar1 = param_2[1];
  param_1[0xc] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  return;
}



// FUNCTION 1498ec5be FUN_1498ec5be body=174 status=ok
// SIG undefined FUN_1498ec5be(void)

void FUN_1498ec5be(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14befa400;
  if (param_1[0xe] != 0) {
    plVar3 = (longlong *)FUN_14479d2ce(param_1 + 0x15);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x2f0))(plVar3,param_1[0xe],1);
    }
    FUN_1400020a8(param_1[0xe]);
    param_1[0xe] = 0;
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
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
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_1 + 1);
  return;
}



// FUNCTION 1498ec6e4 FUN_1498ec6e4 body=462 status=ok
// SIG undefined FUN_1498ec6e4(void)

undefined8 *
FUN_1498ec6e4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
             undefined4 param_5)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_58 [8];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_LAB_14befa480;
  param_1[1] = &PTR_FUN_14befa4b0;
  param_1[2] = *param_2;
  param_1[3] = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1498eeec8(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 << 3);
  }
  *(undefined4 *)(param_1 + 5) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = param_5;
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_1446f470e(local_58,L"WINDOWS",1);
  uVar2 = FUN_140272950(local_58);
  param_1[7] = uVar2;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar3 = 0;
  *(undefined1 *)(puVar3 + 1) = 0;
  *(undefined8 *)((longlong)puVar3 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x14) = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  param_1[0x17] = puVar3;
  param_1[0x16] = puVar3;
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  param_1[0x19] = puVar3;
  param_1[0x18] = puVar3;
  puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar3 = 0;
  param_1[0x1b] = puVar3;
  param_1[0x1a] = puVar3;
  param_1[0x1d] = 0;
  local_60 = 0;
  local_68 = 0xffffffffffffffff;
  uVar2 = FUN_1411b1052(param_1,L"FTcpMessageTransport",0x20000,0);
  param_1[0x1c] = uVar2;
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ec8b4 FUN_1498ec8b4 body=233 status=ok
// SIG undefined FUN_1498ec8b4(void)

void FUN_1498ec8b4(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14befa480;
  param_1[1] = &PTR_FUN_14befa4b0;
  plVar1 = (longlong *)param_1[0x1c];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
    plVar1 = (longlong *)param_1[0x1c];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1);
    }
  }
  (**(code **)(param_1[1] + 0x10))(param_1 + 1);
  while ((undefined8 *)param_1[0x1b] != (undefined8 *)0x0) {
    param_1[0x1b] = *(undefined8 *)param_1[0x1b];
    FUN_1400020a8();
  }
  FUN_1498ec99e(param_1 + 0x18);
  FUN_1498ec9f8(param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1498edc28(param_1 + 0xb);
  FUN_1498eee7f(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498ec99e FUN_1498ec99e body=89 status=ok
// SIG undefined FUN_1498ec99e(void)

void FUN_1498ec99e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  while (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = *puVar3;
    plVar4 = (longlong *)puVar3[2];
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
    FUN_1400020a8(puVar3);
    puVar3 = *(undefined8 **)(param_1 + 8);
  }
  return;
}



// FUNCTION 1498ec9f8 FUN_1498ec9f8 body=70 status=ok
// SIG undefined FUN_1498ec9f8(void)

void FUN_1498ec9f8(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  while (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = *puVar2;
    plVar3 = (longlong *)puVar2[5];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    FUN_1400020a8(puVar2);
    puVar2 = *(undefined8 **)(param_1 + 8);
  }
  return;
}



// FUNCTION 1498eca3e FUN_1498eca3e body=362 status=ok
// SIG undefined FUN_1498eca3e(void)

undefined8 FUN_1498eca3e(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  
  *(undefined8 *)(param_1 + 0xe0) = param_2;
  if ((*(int *)(param_1 + 8) != DAT_14c99094c) || (*(short *)(param_1 + 0xc) != DAT_14c990950)) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    auVar5 = roundpd(ZEXT816(0x416312d010000000),ZEXT816(0x416312d010000000),1);
    *puVar1 = &PTR_FUN_14befa5d0;
    *(undefined1 *)(puVar1 + 1) = 1;
    *(undefined8 *)((longlong)puVar1 + 0xc) = *(undefined8 *)(param_1 + 8);
    puVar1[3] = (longlong)auVar5._0_8_;
    puVar1[4] = 0;
    *(undefined2 *)(puVar1 + 5) = 0x100;
    puVar1[7] = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    uVar2 = FUN_1411b1052(puVar1,L"FTcpListener",0x2000,0,0xffffffffffffffff,0);
    puVar1[6] = uVar2;
    *(undefined8 **)(param_1 + 0x38) = puVar1;
    if (*(int *)(puVar1 + 8) != 3) {
      FUN_1446efa72(puVar1 + 7,0,3,0x10);
      *(undefined4 *)(puVar1 + 8) = 3;
    }
    puVar1 = (undefined8 *)puVar1[7];
    *puVar1 = &PTR_LAB_14befae50;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    puVar1[2] = lVar3;
    *puVar1 = &PTR_FUN_14befade0;
    puVar1[3] = param_1 + -8;
    puVar1[4] = FUN_1498ecba8;
    *(undefined4 *)(puVar1 + 5) = 0;
  }
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x10);
    lVar3 = (longlong)*(int *)(param_1 + 0x18) << 3;
    do {
      FUN_1446a9314(param_1 + -8,lVar4);
      lVar4 = lVar4 + 8;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  return 1;
}



// FUNCTION 1498ecba8 FUN_1498ecba8 body=313 status=ok
// SIG undefined FUN_1498ecba8(void)

undefined8 FUN_1498ecba8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  lVar3 = FUN_14001cc68(0x100,0x10);
  FUN_1498ecd64(lVar3,param_2,param_3,0,0);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14befaec0;
  plVar4[2] = lVar3;
  if ((lVar3 == 0) ||
     (((*(longlong *)(lVar3 + 8) != 0 && (*(longlong *)(lVar3 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar3 + 0x10) + 8))))) goto LAB_1498ecca3;
  if (plVar4 == (longlong *)0x0) {
    *(longlong *)(lVar3 + 8) = lVar3;
    plVar7 = *(longlong **)(lVar3 + 0x10);
    if (plVar7 == (longlong *)0x0) goto LAB_1498ecca3;
LAB_1498ecc5a:
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    *(longlong **)(lVar3 + 0x10) = plVar4;
    if (plVar4 == (longlong *)0x0) goto LAB_1498ecca3;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong *)(lVar3 + 8) = lVar3;
    if (*(longlong **)(lVar3 + 0x10) != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(lVar3 + 0x10);
      if (plVar7 != (longlong *)0x0) goto LAB_1498ecc5a;
      *(longlong **)(lVar3 + 0x10) = plVar4;
    }
  }
  LOCK();
  plVar7 = plVar4 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_1498ecca3:
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar5 = 0;
  puVar5[1] = lVar3;
  puVar5[2] = plVar4;
  uVar6 = 0;
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    puVar2 = *(undefined8 **)(param_1 + 0xc0);
    *(undefined8 **)(param_1 + 0xc0) = puVar5;
    UNLOCK();
    LOCK();
    uVar6 = *puVar2;
    *puVar2 = puVar5;
    UNLOCK();
  }
  return CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
}



// FUNCTION 1498ecce2 FUN_1498ecce2 body=129 status=ok
// SIG undefined FUN_1498ecce2(void)

undefined2 * FUN_1498ecce2(undefined2 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = DAT_14c990940;
  param_1[4] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 0xc) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return param_1;
}



// FUNCTION 1498ecd64 FUN_1498ecd64 body=336 status=ok
// SIG undefined FUN_1498ecd64(void)

undefined8 *
FUN_1498ecd64(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_14befa550;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  param_1[9] = puVar1;
  param_1[8] = puVar1;
  FUN_140212f8e(param_1 + 10);
  param_1[0xb] = *param_3;
  FUN_1412e3d1e(param_1 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  param_1[0x11] = param_2;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0x99) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = param_4;
  *(undefined4 *)(param_1 + 0x16) = param_5;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1a),4000);
  local_54 = 0;
  (**(code **)(*(longlong *)param_1[0x11] + 0x108))((longlong *)param_1[0x11],0x200000,&local_54);
  (**(code **)(*(longlong *)param_1[0x11] + 0x100))((longlong *)param_1[0x11],0x200000,&local_54);
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498eceb6 FUN_1498eceb6 body=204 status=ok
// SIG undefined FUN_1498eceb6(void)

void FUN_1498eceb6(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  *(undefined1 *)(param_1 + 0x28) = 1;
  plVar3 = *(longlong **)(param_1 + 0x38);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,1);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  lVar5 = *(longlong *)(param_1 + 0x40);
  iVar1 = *(int *)(param_1 + 0x48);
  uVar4 = 0;
  if ((longlong)iVar1 != 0) {
    lVar6 = 0;
    do {
      FUN_1498ecf82(*(undefined8 *)(lVar5 + lVar6));
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar6);
    uVar4 = *(undefined4 *)(param_1 + 0x48);
    lVar5 = *(longlong *)(param_1 + 0x40);
  }
  FUN_1498eee7f(lVar5,uVar4);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_1498ef128(param_1 + 0x40);
  }
  do {
    cVar2 = FUN_1498ef158(param_1 + 0xb8);
  } while (cVar2 != '\0');
  do {
    plVar3 = *(longlong **)(param_1 + 0xd0);
    do {
      plVar3 = (longlong *)*plVar3;
      if (plVar3 == (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0xe0) = 0;
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0xd0);
      *(longlong **)(param_1 + 0xd0) = plVar3;
    } while (lVar5 == 0);
    FUN_1400020a8();
  } while( true );
}



// FUNCTION 1498ecf82 FUN_1498ecf82 body=98 status=ok
// SIG undefined FUN_1498ecf82(void)

void FUN_1498ecf82(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
    *(undefined1 *)(param_1 + 0xa8) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x20))();
    plVar1 = *(longlong **)(param_1 + 0x90);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1);
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498ecfd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1498ecfe4 FUN_1498ecfe4 body=187 status=ok
// SIG undefined FUN_1498ecfe4(void)

bool FUN_1498ecfe4(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  lVar2 = **(longlong **)(param_1 + 8);
  if (lVar2 != 0) {
    param_2[4] = *(undefined4 *)(lVar2 + 0x18);
    uVar5 = *(undefined4 *)(lVar2 + 0xc);
    uVar6 = *(undefined4 *)(lVar2 + 0x10);
    uVar7 = *(undefined4 *)(lVar2 + 0x14);
    *param_2 = *(undefined4 *)(lVar2 + 8);
    param_2[1] = uVar5;
    param_2[2] = uVar6;
    param_2[3] = uVar7;
    if ((undefined4 *)(lVar2 + 8) != param_2) {
      *(undefined8 *)(param_2 + 6) = *(undefined8 *)(lVar2 + 0x20);
      *(undefined8 *)(lVar2 + 0x20) = 0;
      plVar3 = *(longlong **)(param_2 + 8);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(lVar2 + 0x28);
      *(undefined8 *)(lVar2 + 0x28) = 0;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
    }
    lVar4 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar2;
    *(undefined1 *)(lVar2 + 8) = 0;
    plVar3 = *(longlong **)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined8 *)(lVar2 + 0xc) = 0;
    *(undefined8 *)(lVar2 + 0x14) = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    if (lVar4 != 0) {
      plVar3 = *(longlong **)(lVar4 + 0x28);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      FUN_1400020a8(lVar4);
    }
  }
  return lVar2 != 0;
}



// FUNCTION 1498ed0a0 FUN_1498ed0a0 body=80 status=ok
// SIG undefined FUN_1498ed0a0(void)

longlong * FUN_1498ed0a0(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1498eee7f(*param_1,(int)param_1[1]);
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



// FUNCTION 1498ed0f0 FUN_1498ed0f0 body=100 status=ok
// SIG undefined FUN_1498ed0f0(void)

undefined8 * FUN_1498ed0f0(undefined8 *param_1)

{
  memset(param_1,0,0x90);
  FUN_144869430(param_1);
  param_1[0x12] = 0;
  param_1[0x13] = param_1 + 0x15;
  param_1[0x14] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 4;
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) | 1;
  *param_1 = &PTR_FUN_14befa6f0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  return param_1;
}



// FUNCTION 1498ed15a FUN_1498ed15a body=236 status=ok
// SIG undefined FUN_1498ed15a(void)

bool FUN_1498ed15a(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
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
    if (lVar5 != 0) {
      plVar3 = *(longlong **)(lVar5 + 0x10);
      if (plVar3 != (longlong *)0x0) {
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
      FUN_1400020a8(lVar5);
    }
  }
  return lVar2 != 0;
}



// FUNCTION 1498ed246 FUN_1498ed246 body=202 status=ok
// SIG undefined FUN_1498ed246(void)

void FUN_1498ed246(longlong param_1)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50;
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined1 *)(param_1 + 0xa8) = 1;
  FUN_146b13724(param_1 + 0x58,&local_40);
  puVar2 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar2 = local_40;
  }
  FUN_140002266(&local_30,L"FTcpMessageTransportConnection %s",puVar2);
  puVar2 = &DAT_149dfb77a;
  if (local_28 != 0) {
    puVar2 = local_30;
  }
  local_50 = 0;
  local_58 = 0xffffffffffffffff;
  uVar1 = FUN_1411b1052(param_1,puVar2,0x20000,0);
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ed318 FUN_1498ed318 body=286 status=ok
// SIG undefined FUN_1498ed318(void)

void FUN_1498ed318(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_LAB_14befa550;
  plVar3 = (longlong *)param_1[0x12];
  if (plVar3 != (longlong *)0x0) {
    if (*(char *)(param_1 + 0x15) == '\x01') {
      *(undefined1 *)(param_1 + 0x15) = 0;
      (**(code **)(*plVar3 + 0x20))();
      plVar3 = (longlong *)param_1[0x12];
      if (plVar3 == (longlong *)0x0) goto LAB_1498ed34a;
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,1);
  }
LAB_1498ed34a:
  if (param_1[0x11] != 0) {
    FUN_1446f470e(local_20,L"WINDOWS",1);
    plVar3 = (longlong *)FUN_140272950(local_20);
    (**(code **)(*plVar3 + 0x38))(plVar3,param_1[0x11]);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  plVar3 = (longlong *)param_1[0x18];
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
  FUN_1498ed438(param_1 + 8);
  FUN_1449db362(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ed438 FUN_1498ed438 body=89 status=ok
// SIG undefined FUN_1498ed438(void)

void FUN_1498ed438(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  while (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = *puVar3;
    plVar4 = (longlong *)puVar3[2];
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
    FUN_1400020a8(puVar3);
    puVar3 = *(undefined8 **)(param_1 + 8);
  }
  return;
}



// FUNCTION 1498ed492 FUN_1498ed492 body=236 status=ok
// SIG undefined FUN_1498ed492(void)

bool FUN_1498ed492(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
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
    if (lVar5 != 0) {
      plVar3 = *(longlong **)(lVar5 + 0x10);
      if (plVar3 != (longlong *)0x0) {
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
      FUN_1400020a8(lVar5);
    }
  }
  return lVar2 != 0;
}



// FUNCTION 1498ed57e FUN_1498ed57e body=227 status=ok
// SIG undefined FUN_1498ed57e(void)

ulonglong FUN_1498ed57e(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  ulonglong unaff_RBP;
  undefined7 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_68 [36];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  auVar5 = roundpd(ZEXT816(0x416312d010000000),ZEXT816(0x416312d010000000),1);
  do {
    uVar4 = (undefined7)(unaff_RBP >> 8);
    unaff_RBP = CONCAT71(uVar4,param_3 < 1);
    if (param_3 < 1) {
      unaff_RBP = CONCAT71(uVar4,1);
      break;
    }
    while (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x78))
                             (*(longlong **)(param_1 + 0x88),1,(longlong)auVar5._0_8_),
          cVar2 == '\0') {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x80))();
      if (iVar3 == 2) {
        unaff_RBP = 0;
        goto LAB_1498ed635;
      }
    }
    local_44 = 0;
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x58))
                      (*(longlong **)(param_1 + 0x88),param_2,param_3,&local_44);
    iVar3 = local_44;
    lVar1 = (longlong)local_44;
    if (cVar2 == '\0') {
      iVar3 = 0;
      lVar1 = 0;
    }
    param_2 = param_2 + lVar1;
    param_3 = param_3 - iVar3;
  } while (cVar2 != '\0');
LAB_1498ed635:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return unaff_RBP & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ed684 FUN_1498ed684 body=93 status=ok
// SIG undefined FUN_1498ed684(void)

undefined8 FUN_1498ed684(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b13724(param_1,local_28);
  FUN_140233b1a(param_2,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ed6e2 FUN_1498ed6e2 body=173 status=ok
// SIG undefined FUN_1498ed6e2(void)

void FUN_1498ed6e2(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_1402ac1b3(param_1,param_2 + 2);
  return;
}



// FUNCTION 1498ed790 FUN_1498ed790 body=976 status=ok
// SIG undefined FUN_1498ed790(void)

void FUN_1498ed790(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  int *piVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  undefined *puVar6;
  ulonglong uVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined **ppuVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  int iVar16;
  longlong lVar17;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong local_b0;
  undefined **local_a8;
  undefined8 local_a0;
  undefined **local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  undefined1 local_79;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined **local_60;
  ulonglong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar4 = (longlong *)*param_1;
  lVar10 = (**(code **)(*plVar4 + 0x18))(plVar4);
  if (lVar10 != 0) {
    uVar11 = (**(code **)(*plVar4 + 0x20))(plVar4);
    cVar8 = FUN_144b00e3a(uVar11,0,1);
    if (cVar8 != '\0') {
      plVar4 = (longlong *)param_1[2];
      FUN_14706e08c(*param_1,local_78);
      plVar12 = (longlong *)(**(code **)(*plVar4 + 0x160))(plVar4,local_78);
      (**(code **)(*plVar12 + 0x160))(plVar12,local_70);
      uVar11 = (**(code **)(*(longlong *)*param_1 + 0x48))();
      FUN_1402ac1b3(plVar4,uVar11);
      uVar11 = (**(code **)(*(longlong *)*param_1 + 0x30))();
      FUN_1498f0050(plVar4,uVar11);
      local_79 = (**(code **)(*(longlong *)*param_1 + 0x38))();
      puVar5 = (ulonglong *)plVar4[1];
      puVar1 = (undefined1 *)*puVar5 + 1;
      if ((undefined1 *)puVar5[1] < puVar1) {
        (**(code **)(*plVar4 + 0x170))(plVar4,&local_79,1);
      }
      else {
        local_79 = *(undefined1 *)*puVar5;
        *puVar5 = (ulonglong)puVar1;
      }
      uVar11 = (**(code **)(*(longlong *)*param_1 + 0x68))();
      FUN_1408383eb(plVar4,uVar11);
      uVar11 = (**(code **)(*(longlong *)*param_1 + 0x10))();
      FUN_1408383eb(plVar4,uVar11);
      lVar10 = (*(code *)**(undefined8 **)*param_1)();
      local_80 = *(int *)(lVar10 + 8) - *(int *)(lVar10 + 0x34);
      puVar5 = (ulonglong *)plVar4[1];
      piVar3 = (int *)*puVar5 + 1;
      if ((int *)puVar5[1] < piVar3) {
        if ((*(byte *)((longlong)plVar4 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar4 + 0x170))(plVar4,&local_80,4);
        }
        else {
          FUN_14572512c(plVar4,&local_80);
        }
      }
      else {
        local_80 = *(int *)*puVar5;
        *puVar5 = (ulonglong)piVar3;
      }
      ppuVar13 = (undefined **)(*(code *)**(undefined8 **)*param_1)();
      ppuVar2 = ppuVar13 + 2;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      local_50 = 0;
      iVar16 = 0;
      local_60 = ppuVar2;
      if (*(int *)(ppuVar13 + 5) != 0) {
        FUN_1449c0562(&local_68);
        iVar16 = *(int *)(ppuVar13 + 5);
      }
      local_90 = local_58;
      uVar7 = local_90;
      local_88 = local_50;
      local_84 = local_4c;
      local_a0 = (undefined8 *)local_68;
      local_98 = local_60;
      local_90._4_4_ = (int)(local_58 >> 0x20);
      iVar9 = local_90._4_4_;
      local_a8 = ppuVar13;
      if ((local_90._4_4_ != iVar16) || (local_90 = uVar7, local_60 != ppuVar2)) {
        do {
          local_90 = uVar7;
          puVar6 = *local_a8;
          (**(code **)(*plVar4 + 0x160))(plVar4,puVar6 + (longlong)iVar9 * 0x20);
          FUN_14021219d(plVar4,puVar6 + (longlong)iVar9 * 0x20 + 8);
          local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~local_a0._4_4_);
          FUN_1449c0562(&local_a0);
          iVar9 = local_90._4_4_;
          uVar7 = local_90;
        } while (local_a8 != ppuVar13 || (local_98 != ppuVar2 || local_90._4_4_ != iVar16));
      }
      uVar11 = (**(code **)(*(longlong *)*param_1 + 0x20))();
      uVar11 = FUN_14479d2ce(uVar11);
      local_a8 = &PTR_FUN_14ba6ce30;
      puVar14 = (undefined8 *)FUN_14001cc68(0x28,0x10);
      *puVar14 = &PTR_FUN_14ba6cee0;
      puVar14[1] = plVar4;
      puVar14[2] = 0;
      puVar14[3] = 0;
      puVar14[4] = 0;
      local_a0 = puVar14;
      local_98 = (undefined **)FUN_14001cc68(0x18,0x10);
      local_98[1] = &DAT_100000001;
      *local_98 = (undefined *)&PTR_FUN_14ba6cf10;
      local_98[2] = (undefined *)puVar14;
      local_90 = local_90 & 0xffffffff00000000;
      uVar15 = (**(code **)(*(longlong *)*param_1 + 0x18))();
      FUN_149028064(uVar15,uVar11,&local_a8);
      iVar16 = *(int *)(param_1 + 5);
      if ((longlong)iVar16 != 0) {
        lVar10 = param_1[4];
        lVar17 = 0;
        do {
          uVar11 = *(undefined8 *)(lVar10 + lVar17);
          local_b8 = param_1[2];
          local_b0 = param_1[3];
          if (local_b0 != 0) {
            LOCK();
            *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
            UNLOCK();
          }
          FUN_1446aa108(uVar11,&local_b8);
          lVar17 = lVar17 + 0x10;
        } while ((longlong)iVar16 * 0x10 != lVar17);
      }
      ppuVar2 = local_98;
      local_a8 = &PTR_FUN_14ba6ce30;
      if (local_98 != (undefined **)0x0) {
        LOCK();
        plVar4 = (longlong *)(local_98 + 1);
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar3 = (int *)((longlong)ppuVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)((longlong)*ppuVar2 + 0x10))(ppuVar2);
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498edb62 FUN_1498edb62 body=38 status=ok
// SIG undefined FUN_1498edb62(void)

undefined8 FUN_1498edb62(undefined8 param_1,int param_2)

{
  FUN_1498ec5be();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498edb88 FUN_1498edb88 body=38 status=ok
// SIG undefined FUN_1498edb88(void)

undefined8 FUN_1498edb88(undefined8 param_1,int param_2)

{
  FUN_1498ec8b4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498edbae FUN_1498edbae body=38 status=ok
// SIG undefined FUN_1498edbae(void)

undefined8 FUN_1498edbae(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"TcpMessageTransport",1);
  return param_2;
}



// FUNCTION 1498edbd4 FUN_1498edbd4 body=45 status=ok
// SIG undefined FUN_1498edbd4(void)

longlong FUN_1498edbd4(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1498ec8b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498edc02 FUN_1498edc02 body=38 status=ok
// SIG undefined FUN_1498edc02(void)

undefined8 FUN_1498edc02(undefined8 param_1,int param_2)

{
  FUN_1498ed318();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498edc28 FUN_1498edc28 body=52 status=ok
// SIG undefined FUN_1498edc28(void)

void FUN_1498edc28(longlong *param_1)

{
  FUN_1498edc5c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498edc5c FUN_1498edc5c body=343 status=ok
// SIG undefined FUN_1498edc5c(void)

void FUN_1498edc5c(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
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
      plVar4 = *(longlong **)(*local_70 + 0x18 + (longlong)iStack_54 * 0x28);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498eddb4 FUN_1498eddb4 body=819 status=ok
// SIG undefined FUN_1498eddb4(void)

bool FUN_1498eddb4(longlong param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_1a8 [32];
  longlong local_188 [2];
  undefined1 local_178 [8];
  undefined4 local_170;
  void *local_168;
  int local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined1 local_138;
  undefined1 uStack_137;
  undefined2 uStack_136;
  undefined4 uStack_134;
  undefined4 local_130;
  void *local_128;
  int local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  bVar4 = true;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    FUN_140056680(local_188,L"FTcpListener server");
    FUN_1498ecce2(local_178,local_188);
    pvVar1 = local_168;
    local_144 = CONCAT31(local_144._1_3_,*(undefined1 *)(param_1 + 0x29));
    local_130 = local_170;
    local_138 = local_178[0];
    uStack_137 = local_178[1];
    uStack_136 = local_178._2_2_;
    uStack_134 = local_178._4_4_;
    local_128 = (void *)0x0;
    local_120 = local_160;
    if ((longlong)local_160 == 0) {
      local_11c = 0;
      iVar3 = 0;
    }
    else {
      FUN_1446dd670(&local_128,local_160,0);
      memcpy(local_128,pvVar1,(longlong)local_160 * 2);
      iVar3 = local_120;
    }
    pvVar1 = local_128;
    uStack_108 = uStack_148;
    uStack_104 = local_144;
    uStack_100 = uStack_140;
    local_118 = local_158;
    uStack_114 = uStack_154;
    uStack_110 = uStack_150;
    uStack_10c = uStack_14c;
    uStack_134 = (undefined4)*(undefined8 *)(param_1 + 0xc);
    local_130 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
    uStack_137 = 1;
    local_f0 = local_130;
    local_f8 = CONCAT44(uStack_134,CONCAT22(uStack_136,CONCAT11(1,local_138)));
    local_e8 = (void *)0x0;
    local_e0 = iVar3;
    if (iVar3 == 0) {
      local_dc = 0;
      iVar3 = 0;
    }
    else {
      FUN_1446dd670(&local_e8,iVar3,0);
      memcpy(local_e8,pvVar1,(longlong)iVar3 * 2);
      iVar3 = local_e0;
    }
    pvVar1 = local_e8;
    local_d8 = local_118;
    uStack_d4 = uStack_114;
    local_c8 = uStack_108;
    uStack_c4 = uStack_104;
    uStack_c0 = uStack_100;
    uStack_d0 = CONCAT31((int3)((uint)uStack_110 >> 8),1);
    uStack_cc = 8;
    local_b8 = local_f8;
    local_b0 = local_f0;
    local_a8 = (void *)0x0;
    local_a0 = iVar3;
    if (iVar3 == 0) {
      local_9c = 0;
      iVar3 = 0;
    }
    else {
      FUN_1446dd670(&local_a8,iVar3,0);
      memcpy(local_a8,pvVar1,(longlong)iVar3 * 2);
      iVar3 = local_a0;
    }
    pvVar1 = local_a8;
    local_88 = CONCAT44(uStack_c4,local_c8);
    local_98 = local_d8;
    uStack_94 = uStack_d4;
    uStack_90 = uStack_d0;
    uStack_8c = uStack_cc;
    local_80 = 0x200000;
    local_78 = local_b8;
    local_70 = local_b0;
    local_68 = (void *)0x0;
    local_60 = iVar3;
    if (iVar3 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,iVar3,0);
      memcpy(local_68,pvVar1,(longlong)iVar3 * 2);
    }
    uStack_48 = (undefined4)local_88;
    uStack_44 = local_88._4_4_;
    uStack_40 = local_80;
    uStack_58 = local_98;
    uStack_54 = uStack_94;
    uStack_50 = uStack_90;
    local_4c = uStack_8c;
    uVar2 = FUN_1498ee466(&local_78);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_a8 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_e8 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_128 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_168 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_188[0] != 0) {
      FUN_1400020a8();
    }
    bVar4 = *(longlong *)(param_1 + 0x20) != 0;
  }
  if ((local_38 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ee0e8 FUN_1498ee0e8 body=664 status=ok
// SIG undefined FUN_1498ee0e8(void)

undefined8 FUN_1498ee0e8(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  float fVar9;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined2 uStack_74;
  undefined2 uStack_72;
  char local_61;
  longlong *local_60;
  longlong *local_58;
  undefined2 local_4c [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1446f470e(&local_78,L"WINDOWS",1);
  plVar6 = (longlong *)FUN_140272950(&local_78);
  (**(code **)(*plVar6 + 0x90))(plVar6,&local_60);
  if (*(char *)(param_1 + 0x28) == '\0') {
    lVar2 = *(longlong *)(param_1 + 0x18);
    do {
      local_61 = '\0';
      cVar5 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))
                        (*(longlong **)(param_1 + 0x20),&local_61,(longlong *)(param_1 + 0x18));
      if (cVar5 == '\0') {
        lVar8 = *(longlong *)(param_1 + 0x18);
        lVar8 = lVar8 / 10000000 - lVar8 / -0x6769800000000000;
        auVar3 = SEXT816(lVar8) * ZEXT816(0x8888888888888889);
        fVar9 = (float)((int)lVar8 + ((int)(auVar3._8_8_ >> 5) - (auVar3._12_4_ >> 0x1f)) * -0x3c);
LAB_1498ee347:
        FUN_14000f986(fVar9);
      }
      else if (local_61 == '\x01') {
        plVar6 = *(longlong **)(param_1 + 0x20);
        FUN_140056680(&local_78,L"FTcpListener client");
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x40))(plVar6,local_60,&local_78);
        if (CONCAT26(uStack_72,CONCAT24(uStack_74,local_78)) != 0) {
          FUN_1400020a8();
        }
        if (plVar6 != (longlong *)0x0) {
          if (((*(int *)(param_1 + 0x40) != 0) &&
              (*(longlong **)(param_1 + 0x38) != (longlong *)0x0)) &&
             (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))(), plVar4 = local_58,
             plVar7 = local_60, cVar5 != '\0')) {
            if (local_58 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_58 + 1) = (int)local_58[1] + 1;
              UNLOCK();
            }
            (**(code **)(*local_60 + 0x20))(local_60,&local_78);
            (**(code **)(*plVar7 + 0x40))(plVar7,local_4c);
            uStack_74 = local_4c[0];
            if (*(int *)(param_1 + 0x40) == 0) {
              plVar7 = (longlong *)0x0;
            }
            else {
              plVar7 = *(longlong **)(param_1 + 0x38);
            }
            cVar5 = (**(code **)(*plVar7 + 0x58))(plVar7,plVar6,&local_78);
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              plVar7 = plVar4 + 1;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)*plVar7 == 0) {
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
            if (cVar5 != '\0') goto LAB_1498ee34c;
          }
          (**(code **)(*plVar6 + 0x10))(plVar6);
          FUN_1446f470e(&local_78,L"WINDOWS",1);
          plVar7 = (longlong *)FUN_140272950(&local_78);
          (**(code **)(*plVar7 + 0x38))(plVar7,plVar6);
        }
      }
      else if (lVar2 == 0) {
        fVar9 = 0.0;
        goto LAB_1498ee347;
      }
LAB_1498ee34c:
    } while (*(char *)(param_1 + 0x28) != '\x01');
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_58 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1498ee38a FUN_1498ee38a body=38 status=ok
// SIG undefined FUN_1498ee38a(void)

undefined8 FUN_1498ee38a(undefined8 param_1,int param_2)

{
  FUN_1498ee3b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498ee3b0 FUN_1498ee3b0 body=181 status=ok
// SIG undefined FUN_1498ee3b0(void)

void FUN_1498ee3b0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14befa5d0;
  plVar1 = (longlong *)param_1[6];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
    plVar1 = (longlong *)param_1[6];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1);
    }
  }
  if ((*(char *)(param_1 + 1) == '\x01') && (param_1[4] != 0)) {
    FUN_1446f470e(local_20,L"WINDOWS",1);
    plVar1 = (longlong *)FUN_140272950(local_20);
    (**(code **)(*plVar1 + 0x38))(plVar1,param_1[4]);
    param_1[4] = 0;
  }
  FUN_1449db362(param_1 + 7);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ee466 FUN_1498ee466 body=567 status=ok
// SIG undefined FUN_1498ee466(void)

longlong * FUN_1498ee466(undefined1 *param_1)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  longlong *local_38;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446f470e(&local_40,L"WINDOWS",1);
  plVar3 = (longlong *)FUN_140272950(&local_40);
  if (plVar3 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
    goto LAB_1498ee662;
  }
  (**(code **)(*DAT_14c990958 + 0x90))(DAT_14c990958,&local_40);
  (**(code **)(*local_40 + 0x18))(local_40,*(undefined4 *)(param_1 + 4));
  (**(code **)(*local_40 + 0x28))(local_40,*(undefined2 *)(param_1 + 8));
  (**(code **)(*local_40 + 0xa8))(local_40,local_48);
  if (*(int *)(param_1 + 0x18) == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = *(undefined2 **)(param_1 + 0x10);
  }
  FUN_140056680(local_58,puVar8);
  FUN_1401a700c(&local_2c,0x119);
  local_60 = (ulonglong)local_2c;
  puVar6 = &local_60;
  plVar4 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,puVar6,local_58,local_48);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (plVar4 == (longlong *)0x0) {
LAB_1498ee635:
    plVar4 = (longlong *)0x0;
  }
  else {
    uVar5 = CONCAT71((int7)((ulonglong)puVar6 >> 8),param_1[0x34]);
    cVar2 = (**(code **)(*plVar4 + 0xe8))(plVar4,uVar5);
    if (cVar2 == '\0') {
LAB_1498ee60b:
      uVar5 = FUN_144a82cde();
      if (*(int *)(param_1 + 0x18) == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      else {
        puVar8 = *(undefined2 **)(param_1 + 0x10);
      }
      FUN_140047918(uVar5,L"FTcpSocketBuilder: Failed to create the socket %s as configured",puVar8)
      ;
      (**(code **)(*plVar3 + 0x38))(plVar3,plVar4);
      goto LAB_1498ee635;
    }
    uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),param_1[0x20]);
    cVar2 = (**(code **)(*plVar4 + 0xf0))(plVar4,uVar5,*(undefined4 *)(param_1 + 0x24));
    if (cVar2 == '\0') goto LAB_1498ee60b;
    plVar7 = (longlong *)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    cVar2 = (**(code **)(*plVar4 + 0xf8))(plVar4,plVar7);
    if (cVar2 == '\0') goto LAB_1498ee60b;
    if (param_1[1] == '\x01') {
      cVar2 = (**(code **)(*plVar4 + 0x18))(plVar4,local_40);
      plVar7 = local_40;
      if (cVar2 == '\0') goto LAB_1498ee60b;
    }
    if (param_1[0x28] == '\x01') {
      plVar7 = (longlong *)(ulonglong)*(uint *)(param_1 + 0x2c);
      cVar2 = (**(code **)(*plVar4 + 0x28))(plVar4,plVar7);
      if (cVar2 == '\0') goto LAB_1498ee60b;
    }
    cVar2 = (**(code **)(*plVar4 + 0x98))
                      (plVar4,CONCAT71((int7)((ulonglong)plVar7 >> 8),*param_1) ^ 1);
    if (cVar2 == '\0') goto LAB_1498ee60b;
    if (0 < *(int *)(param_1 + 0x30)) {
      (**(code **)(*plVar4 + 0x108))(plVar4,*(int *)(param_1 + 0x30),local_58);
    }
    if (0 < *(int *)(param_1 + 0x38)) {
      (**(code **)(*plVar4 + 0x100))(plVar4,*(int *)(param_1 + 0x38),local_58);
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
LAB_1498ee662:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ee69e FUN_1498ee69e body=68 status=ok
// SIG undefined FUN_1498ee69e(void)

undefined8 * FUN_1498ee69e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14befa6f0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498ee6e2 FUN_1498ee6e2 body=31 status=ok
// SIG undefined FUN_1498ee6e2(void)

undefined8 FUN_1498ee6e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498ee71e FUN_1498ee71e body=93 status=ok
// SIG undefined FUN_1498ee71e(void)

void FUN_1498ee71e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14befa950;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1498ee77c FUN_1498ee77c body=126 status=ok
// SIG undefined FUN_1498ee77c(void)

void FUN_1498ee77c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14befa950;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498ee7eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498ee7fa FUN_1498ee7fa body=21 status=ok
// SIG undefined FUN_1498ee7fa(void)

undefined8 FUN_1498ee7fa(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498ee810 FUN_1498ee810 body=38 status=ok
// SIG undefined FUN_1498ee810(void)

undefined8 FUN_1498ee810(undefined8 param_1,int param_2)

{
  FUN_145d3dfaa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498ee83a FUN_1498ee83a body=154 status=ok
// SIG undefined FUN_1498ee83a(void)

void FUN_1498ee83a(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar4 = FUN_146b137c6(param_2,local_20);
  if ((cVar4 != '\0') && (puVar3 = *(undefined8 **)(param_1 + 0x20), puVar3 != (undefined8 *)0x0)) {
    iVar5 = *(int *)(puVar3 + 1);
    do {
      if (iVar5 == 0) goto LAB_1498ee8c7;
      LOCK();
      iVar2 = *(int *)(puVar3 + 1);
      bVar6 = iVar5 == iVar2;
      if (bVar6) {
        *(int *)(puVar3 + 1) = iVar5 + 1;
        iVar2 = iVar5;
      }
      iVar5 = iVar2;
      UNLOCK();
    } while (!bVar6);
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1446a9314(*(longlong *)(param_1 + 0x18),local_20);
    }
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
LAB_1498ee8c7:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498ee8e6 FUN_1498ee8e6 body=197 status=ok
// SIG undefined FUN_1498ee8e6(void)

ulonglong FUN_1498ee8e6(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar8 = FUN_146b137c6(param_2,&local_20);
  if (((char)uVar8 != '\0') &&
     (puVar5 = *(undefined8 **)(param_1 + 0x20), puVar5 != (undefined8 *)0x0)) {
    uVar8 = (ulonglong)*(uint *)(puVar5 + 1);
    do {
      uVar7 = (uint)uVar8;
      if (uVar7 == 0) goto LAB_1498ee99e;
      LOCK();
      uVar3 = *(uint *)(puVar5 + 1);
      if (uVar7 == uVar3) {
        *(uint *)(puVar5 + 1) = uVar7 + 1;
      }
      else {
        uVar8 = (ulonglong)uVar3;
      }
      UNLOCK();
    } while (uVar7 != uVar3);
    lVar6 = *(longlong *)(param_1 + 0x18);
    if (lVar6 != 0) {
      puVar9 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar9 = 0;
      puVar9[1] = local_20;
      uVar8 = 0;
      if (puVar9 != (undefined8 *)0x0) {
        LOCK();
        puVar2 = (undefined8 *)(lVar6 + 0xd0);
        puVar4 = (ulonglong *)*puVar2;
        *puVar2 = puVar9;
        UNLOCK();
        LOCK();
        uVar8 = *puVar4;
        *puVar4 = (ulonglong)puVar9;
        UNLOCK();
      }
    }
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      uVar8 = (**(code **)*puVar5)(puVar5);
      LOCK();
      piVar1 = (int *)((longlong)puVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
LAB_1498ee99e:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ee9bc FUN_1498ee9bc body=83 status=ok
// SIG undefined FUN_1498ee9bc(void)

void FUN_1498ee9bc(undefined8 param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_145b157d8();
  lVar3 = plVar2[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar3 = plVar2[0x22];
  }
  cVar1 = FUN_1498ec37a(lVar3);
  if (cVar1 != '\0') {
    FUN_1446ab950();
    return;
  }
  FUN_145d6cc0e(param_1);
  return;
}



// FUNCTION 1498eea10 FUN_1498eea10 body=225 status=ok
// SIG undefined FUN_1498eea10(void)

undefined8 * FUN_1498eea10(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1412e3d1e(&local_40);
  *(undefined4 *)param_1 = local_40;
  *(undefined4 *)((longlong)param_1 + 4) = uStack_3c;
  *(undefined4 *)(param_1 + 1) = uStack_38;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_34;
  FUN_1446ddc76(&local_40,"Messaging",1);
  uVar3 = CONCAT44(uStack_3c,local_40);
  uVar5 = FUN_144a52528();
  plVar6 = (longlong *)FUN_14493e38c(uVar5,uVar3);
  (**(code **)(*plVar6 + 0x68))(plVar6,&local_40);
  param_1[2] = CONCAT44(uStack_3c,local_40);
  lVar4 = CONCAT44(uStack_34,uStack_38);
  param_1[3] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
    plVar6 = (longlong *)CONCAT44(uStack_34,uStack_38);
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
  }
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498eeaf2 FUN_1498eeaf2 body=136 status=ok
// SIG undefined FUN_1498eeaf2(void)

longlong FUN_1498eeaf2(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x30);
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x30);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) {
        return param_1;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      goto joined_r0x0001498eeb4b;
    }
    *(longlong **)(param_1 + 0x30) = plVar4;
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 != 0) {
    return param_1;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  UNLOCK();
  plVar4 = plVar5;
joined_r0x0001498eeb4b:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 1498eeb7a FUN_1498eeb7a body=83 status=ok
// SIG undefined FUN_1498eeb7a(void)

void FUN_1498eeb7a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
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
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001498eebc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1498eebce FUN_1498eebce body=132 status=ok
// SIG undefined FUN_1498eebce(void)

void FUN_1498eebce(longlong param_1,int param_2)

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



// FUNCTION 1498eec54 FUN_1498eec54 body=25 status=ok
// SIG undefined FUN_1498eec54(void)

void FUN_1498eec54(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498eec69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 1498eec6e FUN_1498eec6e body=29 status=ok
// SIG undefined FUN_1498eec6e(void)

undefined8 FUN_1498eec6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498eec8c FUN_1498eec8c body=498 status=ok
// SIG undefined FUN_1498eec8c(void)

longlong * FUN_1498eec8c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    iVar7 = (int)plVar2[1];
    do {
      if (iVar7 == 0) goto LAB_1498eee57;
      LOCK();
      iVar6 = (int)plVar2[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar2 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    lVar3 = *(longlong *)(param_1 + 0x10);
    if (lVar3 != 0) {
      FUN_1446ddc76(&local_48,"Messaging",1);
      lVar5 = local_48;
      uVar8 = FUN_144a52528();
      plVar9 = (longlong *)FUN_14493e38c(uVar8,lVar5);
      local_58 = *(undefined8 *)(param_1 + 0x28);
      local_50 = *(longlong **)(param_1 + 0x30);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
      }
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      local_78 = &local_58;
      local_68 = lVar3;
      local_60 = plVar2;
      (**(code **)(*plVar9 + 0x50))(plVar9,&local_48,param_1);
      plVar9 = local_40;
      if (&local_48 != param_2) {
        *param_2 = local_48;
        local_48 = 0;
        plVar4 = (longlong *)param_2[1];
        if (local_40 != plVar4) {
          local_40 = (longlong *)0x0;
          param_2[1] = (longlong)plVar9;
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
        }
      }
      plVar9 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_40 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      plVar9 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_60 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      plVar9 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_50 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      if ((longlong *)*param_2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*param_2 + (ulonglong)(*(byte *)(param_1 + 0x20) ^ 1) * 8))();
      }
    }
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
LAB_1498eee57:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1498eee7f FUN_1498eee7f body=73 status=ok
// SIG undefined FUN_1498eee7f(void)

void FUN_1498eee7f(longlong param_1,int param_2)

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



// FUNCTION 1498eeec8 FUN_1498eeec8 body=98 status=ok
// SIG undefined FUN_1498eeec8(void)

void FUN_1498eeec8(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1498eef2a FUN_1498eef2a body=29 status=ok
// SIG undefined FUN_1498eef2a(void)

undefined8 FUN_1498eef2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498eef70 FUN_1498eef70 body=101 status=ok
// SIG undefined FUN_1498eef70(void)

void FUN_1498eef70(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14befae50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14befade0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1498eefd6 FUN_1498eefd6 body=101 status=ok
// SIG undefined FUN_1498eefd6(void)

void FUN_1498eefd6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14befae50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14befade0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1498ef03c FUN_1498ef03c body=134 status=ok
// SIG undefined FUN_1498ef03c(void)

void FUN_1498ef03c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14befae50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14befade0;
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
                    /* WARNING: Could not recover jumptable at 0x0001498ef0b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498ef0d4 FUN_1498ef0d4 body=25 status=ok
// SIG undefined FUN_1498ef0d4(void)

undefined8 FUN_1498ef0d4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498ef0f0 FUN_1498ef0f0 body=25 status=ok
// SIG undefined FUN_1498ef0f0(void)

void FUN_1498ef0f0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498ef105. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 1498ef10a FUN_1498ef10a body=29 status=ok
// SIG undefined FUN_1498ef10a(void)

undefined8 FUN_1498ef10a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498ef128 FUN_1498ef128 body=48 status=ok
// SIG undefined FUN_1498ef128(void)

void FUN_1498ef128(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1498ef158 FUN_1498ef158 body=146 status=ok
// SIG undefined FUN_1498ef158(void)

bool FUN_1498ef158(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar3 = **(longlong **)(param_1 + 8);
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar3;
    *(undefined8 *)(lVar3 + 8) = 0;
    plVar5 = *(longlong **)(lVar3 + 0x10);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(lVar3 + 0x10) = 0;
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
    if (lVar4 != 0) {
      plVar5 = *(longlong **)(lVar4 + 0x10);
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
      FUN_1400020a8(lVar4);
    }
  }
  return lVar3 != 0;
}



// FUNCTION 1498ef1ea FUN_1498ef1ea body=323 status=ok
// SIG undefined FUN_1498ef1ea(void)

undefined4 * FUN_1498ef1ea(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1498ef32e(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  *(undefined8 *)(local_40 + 4) = *puVar2;
  lVar11 = puVar2[1];
  *(longlong *)(local_40 + 6) = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  local_40[8] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = FUN_1447addd0(local_40,0x10);
  cVar6 = FUN_1498ef414(param_1,uVar7,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[9] = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_40[8] = *(undefined4 *)
                     (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
      ;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_1498ef58c(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ef32e FUN_1498ef32e body=230 status=ok
// SIG undefined FUN_1498ef32e(void)

int * FUN_1498ef32e(longlong *param_1,int *param_2)

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



// FUNCTION 1498ef414 FUN_1498ef414 body=145 status=ok
// SIG undefined FUN_1498ef414(void)

undefined8 FUN_1498ef414(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar12 = FUN_1498ef4a6(), iVar12 != -1)) {
    puVar3 = (undefined4 *)(*param_1 + (longlong)iVar12 * 0x28);
    plVar4 = *(longlong **)(puVar3 + 6);
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
    uVar5 = *param_3;
    uVar6 = param_3[1];
    uVar7 = param_3[2];
    uVar8 = param_3[3];
    uVar9 = param_3[5];
    uVar10 = param_3[6];
    uVar11 = param_3[7];
    puVar3[4] = param_3[4];
    puVar3[5] = uVar9;
    puVar3[6] = uVar10;
    puVar3[7] = uVar11;
    *puVar3 = uVar5;
    puVar3[1] = uVar6;
    puVar3[2] = uVar7;
    puVar3[3] = uVar8;
    FUN_1498ef51a(param_1,*param_4);
    *param_4 = iVar12;
    return 1;
  }
  return 0;
}



// FUNCTION 1498ef4a6 FUN_1498ef4a6 body=115 status=ok
// SIG undefined FUN_1498ef4a6(void)

int FUN_1498ef4a6(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1;
        if ((((*(int *)(lVar2 + lVar4 * 0x28) == *param_3) &&
             (*(int *)(lVar2 + 4 + lVar4 * 0x28) == param_3[1])) &&
            (*(int *)(lVar2 + 8 + lVar4 * 0x28) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4 * 0x28) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + lVar4 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1498ef51a FUN_1498ef51a body=114 status=ok
// SIG undefined FUN_1498ef51a(void)

void FUN_1498ef51a(longlong *param_1,int param_2)

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



// FUNCTION 1498ef58c FUN_1498ef58c body=443 status=ok
// SIG undefined FUN_1498ef58c(void)

void FUN_1498ef58c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x28;
        iVar6 = FUN_1447addd0(lVar2,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x24) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498ef748 FUN_1498ef748 body=152 status=ok
// SIG undefined FUN_1498ef748(void)

void FUN_1498ef748(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_1447addd0(param_2,0x10);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2;
        if ((((*(int *)(lVar1 + lVar4 * 0x28) == *param_2) &&
             (*(int *)(lVar1 + 4 + lVar4 * 0x28) == param_2[1])) &&
            (*(int *)(lVar1 + 8 + lVar4 * 0x28) == param_2[2])) &&
           (*(int *)(lVar1 + 0xc + lVar4 * 0x28) == param_2[3])) {
          FUN_1498ef7e0(param_1);
          return;
        }
        iVar2 = *(int *)(lVar1 + lVar4 * 0x28 + 0x20);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1498ef7e0 FUN_1498ef7e0 body=87 status=ok
// SIG undefined FUN_1498ef7e0(void)

void FUN_1498ef7e0(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_1498ef838();
  return;
}



// FUNCTION 1498ef838 FUN_1498ef838 body=78 status=ok
// SIG undefined FUN_1498ef838(void)

void FUN_1498ef838(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x18 + (longlong)param_2 * 0x28);
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
  FUN_1498ef51a(param_1,param_2);
  return;
}



// FUNCTION 1498ef886 FUN_1498ef886 body=128 status=ok
// SIG undefined FUN_1498ef886(void)

void FUN_1498ef886(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar3 = *param_1;
  iVar1 = (int)param_1[1];
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if (*(longlong *)(lVar3 + uVar4) == *param_2) {
        if ((int)(~uVar4 >> 4) != 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 0x10;
    } while (lVar5 << 4 != uVar4);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1498efe6e(param_1,iVar1);
    lVar3 = *param_1;
  }
  *(longlong *)(lVar3 + lVar5 * 0x10) = *param_2;
  lVar2 = param_2[1];
  *(longlong *)(lVar3 + 8 + lVar5 * 0x10) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1498ef906 FUN_1498ef906 body=24 status=ok
// SIG undefined FUN_1498ef906(void)

void FUN_1498ef906(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498ef91a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1498ef91e FUN_1498ef91e body=29 status=ok
// SIG undefined FUN_1498ef91e(void)

undefined8 FUN_1498ef91e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498ef93c FUN_1498ef93c body=219 status=ok
// SIG undefined FUN_1498ef93c(void)

undefined8 *
FUN_1498ef93c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  *param_1 = *param_2;
  lVar4 = param_2[1];
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = *param_3;
  lVar4 = param_3[1];
  param_1[3] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  param_1[4] = 0;
  iVar3 = *(int *)(param_4 + 1);
  uVar5 = *param_4;
  *(int *)(param_1 + 5) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1498efb02(param_1 + 4,iVar3);
    FUN_1498efb5a(param_1[4],uVar5,iVar3);
  }
  plVar6 = (longlong *)param_2[1];
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
  plVar6 = (longlong *)param_3[1];
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
  return param_1;
}



// FUNCTION 1498efa18 FUN_1498efa18 body=107 status=ok
// SIG undefined FUN_1498efa18(void)

void FUN_1498efa18(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1498ed790(0xa8);
    FUN_1498efa84(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1498ed790(param_1 + 0x15);
  FUN_1498efa84(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001498efa78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1498efa84 FUN_1498efa84 body=126 status=ok
// SIG undefined FUN_1498efa84(void)

void FUN_1498efa84(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1498eee7f(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
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
                    /* WARNING: Could not recover jumptable at 0x0001498efaf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1498efb02 FUN_1498efb02 body=88 status=ok
// SIG undefined FUN_1498efb02(void)

void FUN_1498efb02(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1498efb5a FUN_1498efb5a body=40 status=ok
// SIG undefined FUN_1498efb5a(void)

void FUN_1498efb5a(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
    lVar1 = *(longlong *)(param_2 + 8 + lVar2);
    *(longlong *)(param_1 + 8 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar2 = lVar2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1498efb82 FUN_1498efb82 body=83 status=ok
// SIG undefined FUN_1498efb82(void)

undefined8 * FUN_1498efb82(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14befaf80;
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



// FUNCTION 1498efbfe FUN_1498efbfe body=126 status=ok
// SIG undefined FUN_1498efbfe(void)

void FUN_1498efbfe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14befaf80;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14befaf10;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar3;
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 1498efc7c FUN_1498efc7c body=126 status=ok
// SIG undefined FUN_1498efc7c(void)

void FUN_1498efc7c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14befaf80;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14befaf10;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar3;
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 1498efcfa FUN_1498efcfa body=164 status=ok
// SIG undefined FUN_1498efcfa(void)

void FUN_1498efcfa(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  undefined8 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14befaf80;
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  p_Var2 = *(_LIST_ENTRY **)(param_1 + 0x10);
  (p_Var1->ProcessLocksList).Flink = p_Var2;
  if (p_Var2 != (_LIST_ENTRY *)0x0) {
    LOCK();
    *(int *)&p_Var2->Blink = *(int *)&p_Var2->Blink + 1;
    UNLOCK();
  }
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_14befaf10;
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = DVar5;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var1->SpareWORD = (short)((uint)uVar6 >> 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar3 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar3 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498efd8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}


