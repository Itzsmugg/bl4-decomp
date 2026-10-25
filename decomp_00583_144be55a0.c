// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144be55a0 FUN_144be55a0 body=312 status=ok
// SIG undefined FUN_144be55a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144be55a0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  longlong lVar1;
  PFLS_CALLBACK_FUNCTION lpCallback;
  undefined8 local_res8;
  
  lpCallback = (PFLS_CALLBACK_FUNCTION)&DAT_144be5c80;
  if (param_5 == '\0') {
    lpCallback = (PFLS_CALLBACK_FUNCTION)&LAB_144be5c90;
  }
  DAT_14c783dd0 = FlsAlloc(lpCallback);
  local_res8 = 0x28;
  lVar1 = (**(code **)(*param_1 + 8))(param_1,&local_res8);
  if (lVar1 == 0) {
    DAT_14c783de0 = 0;
  }
  else {
    DAT_14c783de0 = FUN_144bdde80(lVar1);
  }
  local_res8 = 0x10;
  DAT_14c783de8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,&local_res8);
  if (DAT_14c783de8 == (undefined8 *)0x0) {
    DAT_14c783de8 = (undefined8 *)0x0;
  }
  else {
    *DAT_14c783de8 = 0;
    DAT_14c783de8[1] = 0;
  }
  local_res8 = 0x10;
  DAT_14c783e20 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,&local_res8);
  *DAT_14c783e20 = &LAB_144be5580;
  DAT_14c783e20[1] = 0;
  DAT_14c783df8 = param_1;
  DAT_14c783e00 = param_2;
  DAT_14c783e08 = param_3;
  DAT_14c783e10 = param_4;
  _DAT_14c783e18 = FUN_144f50f00();
  DAT_14c783df0 = &DAT_14c783dc0;
  DAT_14c783dd4 = 1;
  _DAT_14c783dd8 = FUN_144b3f4a0();
  return;
}



// FUNCTION 144be56e0 FUN_144be56e0 body=8 status=ok
// SIG undefined FUN_144be56e0(void)

undefined8 FUN_144be56e0(void)

{
  return DAT_14c783df8;
}



// FUNCTION 144be56f0 FUN_144be56f0 body=46 status=ok
// SIG undefined FUN_144be56f0(void)

void FUN_144be56f0(void)

{
  FUN_144be57c0(*(undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0xf0));
  FUN_144be58f0();
  return;
}



// FUNCTION 144be5720 FUN_144be5720 body=118 status=ok
// SIG undefined FUN_144be5720(void)

int FUN_144be5720(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  
  iVar1 = FUN_144f626b0();
  if (DAT_14c783e30 == (undefined4 *)0x0) {
    DAT_14c783e30 = &DAT_14c783e40;
  }
  do {
    iVar2 = 0;
    lVar3 = 0;
    while (DAT_14c783e30[lVar3] != 0) {
      if (DAT_14c783e30[lVar3] == iVar1) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 1;
      if (0x1f < iVar2) {
        return -1;
      }
    }
    LOCK();
    bVar4 = DAT_14c783e30[iVar2] == 0;
    if (bVar4) {
      DAT_14c783e30[iVar2] = iVar1;
    }
    UNLOCK();
    if (bVar4) {
      return iVar2;
    }
  } while( true );
}



// FUNCTION 144be57a0 FUN_144be57a0 body=24 status=ok
// SIG undefined FUN_144be57a0(void)

undefined4 * FUN_144be57a0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  *param_1 = param_2;
  puVar1 = param_1;
  *(undefined4 **)(param_1 + 2) = DAT_14c783e38;
  DAT_14c783e38 = puVar1;
  return param_1;
}



// FUNCTION 144be57c0 FUN_144be57c0 body=295 status=ok
// SIG undefined FUN_144be57c0(void)

void FUN_144be57c0(PVOID param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  LPCRITICAL_SECTION p_Var4;
  longlong *plVar5;
  
  p_Var4 = DAT_14c783de0;
  if (param_1 != (PVOID)0x0) {
    EnterCriticalSection(DAT_14c783de0);
    plVar5 = DAT_14c783de8;
    lVar1 = *(longlong *)((longlong)param_1 + 0x590);
    lVar2 = *(longlong *)((longlong)param_1 + 0x598);
    if (lVar1 != 0) {
      *(longlong *)(lVar1 + 0x598) = lVar2;
    }
    if (lVar2 != 0) {
      *(longlong *)(lVar2 + 0x590) = lVar1;
    }
    if ((PVOID)*plVar5 == param_1) {
      *plVar5 = lVar2;
    }
    if ((PVOID)plVar5[1] == param_1) {
      plVar5[1] = lVar1;
    }
    LeaveCriticalSection(p_Var4);
    FlsSetValue(DAT_14c783dd0,param_1);
    p_Var4 = DAT_14c783de0;
    EnterCriticalSection(DAT_14c783de0);
    for (puVar3 = DAT_14c783e20; puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)puVar3[1]) {
      (*(code *)*puVar3)(param_1);
    }
    LeaveCriticalSection(p_Var4);
    FUN_144be5b60(param_1,0);
    (**(code **)(*DAT_14c783df8 + 0x10))(DAT_14c783df8,param_1,0x618);
  }
  FlsSetValue(DAT_14c783dd0,(PVOID)0x0);
  p_Var4 = DAT_14c783de0;
  EnterCriticalSection(DAT_14c783de0);
  for (puVar3 = DAT_14c783e20; puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)puVar3[1]) {
    (*(code *)*puVar3)(0);
  }
                    /* WARNING: Could not recover jumptable at 0x000144be58e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(p_Var4);
  return;
}



// FUNCTION 144be58f0 FUN_144be58f0 body=614 status=ok
// SIG undefined FUN_144be58f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144be58f0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  LPCRITICAL_SECTION p_Var5;
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar6;
  
  FlsFree(DAT_14c783dd0);
  lpCriticalSection = DAT_14c783de0;
  DAT_14c783dd0 = 0;
  EnterCriticalSection(DAT_14c783de0);
  lVar4 = *DAT_14c783de8;
  p_Var5 = DAT_14c783de0;
  while (DAT_14c783de0 = p_Var5, lVar4 != 0) {
    lVar1 = *(longlong *)(lVar4 + 0x598);
    EnterCriticalSection(p_Var5);
    for (puVar2 = DAT_14c783e20; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)puVar2[1]) {
      (*(code *)*puVar2)(lVar4);
    }
    LeaveCriticalSection(p_Var5);
    FUN_144bea3b0(lVar4 + 0x5a0);
    FUN_144f64650(0);
    FUN_144f64660(0);
    puVar2 = *(undefined8 **)(*(longlong *)(lVar4 + 0x3d0) + 0x10);
    puVar3 = *(undefined8 **)(*(longlong *)(lVar4 + 0x3d0) + 0x28);
    FUN_144f63820(lVar4 + 8);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    if (DAT_14c783e08 != (code *)0x0) {
      (*DAT_14c783e08)(lVar4);
    }
    FUN_144f64c40(DAT_14c783df8,*(undefined8 *)(lVar4 + 0x3d8));
    p_Var5 = DAT_14c783de0;
    EnterCriticalSection(DAT_14c783de0);
    piVar6 = DAT_14c783df0;
    *DAT_14c783df0 = *DAT_14c783df0 + -1;
    if (*piVar6 == 0) {
      FUN_144f64af0();
    }
    LeaveCriticalSection(p_Var5);
    FUN_144be9ff0(lVar4 + 0x5a0);
    FUN_144f63770(lVar4 + 8);
    (**(code **)(*DAT_14c783df8 + 0x10))(DAT_14c783df8,lVar4,0x618);
    lVar4 = lVar1;
    p_Var5 = DAT_14c783de0;
  }
  DAT_14c783dd4 = 0;
  LeaveCriticalSection(lpCriticalSection);
  DeleteCriticalSection(DAT_14c783de0);
  (**(code **)(*DAT_14c783df8 + 0x10))(DAT_14c783df8,DAT_14c783de0,0x28);
  DAT_14c783de0 = (LPCRITICAL_SECTION)0x0;
  (**(code **)(*DAT_14c783df8 + 0x10))(DAT_14c783df8,DAT_14c783de8,0x10);
  puVar2 = DAT_14c783e20;
  while (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)puVar2[1];
    (**(code **)(*DAT_14c783df8 + 0x10))(DAT_14c783df8,puVar2,0x10);
    puVar2 = puVar3;
  }
  DAT_14c783de8 = (longlong *)0x0;
  DAT_14c783df0 = (int *)0x0;
  DAT_14c783e20 = (undefined8 *)0x0;
  DAT_14c783df8 = (longlong *)0x0;
  DAT_14c783e00 = 0;
  DAT_14c783e08 = (code *)0x0;
  DAT_14c783e10 = 0;
  _DAT_14c783e18 = 0;
  DAT_14c783dd4 = 0;
  return;
}



// FUNCTION 144be5b60 FUN_144be5b60 body=273 status=ok
// SIG undefined FUN_144be5b60(void)

longlong FUN_144be5b60(longlong param_1,byte param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  FUN_144bea3b0(param_1 + 0x5a0);
  FUN_144f64650(0);
  FUN_144f64660(0);
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x3d0) + 0x10);
  puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x3d0) + 0x28);
  FUN_144f63820(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (DAT_14c783e08 != (code *)0x0) {
    (*DAT_14c783e08)(param_1);
  }
  FUN_144f64c40(DAT_14c783df8,*(undefined8 *)(param_1 + 0x3d8));
  lpCriticalSection = DAT_14c783de0;
  EnterCriticalSection(DAT_14c783de0);
  *DAT_14c783df0 = *DAT_14c783df0 + -1;
  if (*DAT_14c783df0 == 0) {
    FUN_144f64af0();
  }
  LeaveCriticalSection(lpCriticalSection);
  FUN_144be9ff0(param_1 + 0x5a0);
  FUN_144f63770(param_1 + 8);
  if ((param_2 & 5) == 5) {
    FUN_144bda120(param_1,0x618);
  }
  return param_1;
}



// FUNCTION 144be5ca0 FUN_144be5ca0 body=18 status=ok
// SIG undefined FUN_144be5ca0(void)

undefined8 * FUN_144be5ca0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 144be5cc0 FUN_144be5cc0 body=3 status=ok
// SIG undefined FUN_144be5cc0(void)

void FUN_144be5cc0(void)

{
  return;
}



// FUNCTION 144be5cd0 FUN_144be5cd0 body=24 status=ok
// SIG undefined FUN_144be5cd0(void)

void FUN_144be5cd0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0xc);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 0) {
    FUN_144bdab30(*param_1);
    return;
  }
  return;
}



// FUNCTION 144be5cf0 FUN_144be5cf0 body=26 status=ok
// SIG undefined FUN_144be5cf0(void)

void FUN_144be5cf0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0xc);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (iVar2 < 0) {
    FUN_144bdabf0(*param_1,*(undefined4 *)(param_1 + 1));
    return;
  }
  return;
}



// FUNCTION 144be5d10 FUN_144be5d10 body=9 status=ok
// SIG undefined FUN_144be5d10(void)

void FUN_144be5d10(longlong param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 144be5d20 FUN_144be5d20 body=325 status=ok
// SIG undefined FUN_144be5d20(void)

void FUN_144be5d20(int *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_38 [16];
  undefined **local_28;
  undefined8 local_20;
  undefined1 *local_18;
  undefined4 local_10;
  
  iVar4 = *param_1;
  do {
    while (iVar4 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
      LOCK();
      iVar1 = *param_1;
      bVar5 = iVar4 == iVar1;
      if (bVar5) {
        *param_1 = iVar4 + 1;
        iVar1 = iVar4;
      }
      iVar4 = iVar1;
      UNLOCK();
      if (bVar5) {
        lVar2 = FUN_144bda930();
        if (lVar2 != 0) {
          local_10 = FUN_144bda950();
          local_28 = hkAsyncThreadPoolMutex::AsyncWaiter::vftable;
          local_20 = 0;
          plVar3 = (longlong *)(*(longlong *)(param_1 + 0xe) + 8);
          if (*(longlong *)(param_1 + 0xe) == 0) {
            plVar3 = (longlong *)(param_1 + 0xc);
          }
          *plVar3 = (longlong)&local_28;
          *(undefined ****)(param_1 + 0xe) = &local_28;
          local_18 = (undefined1 *)lVar2;
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
          FUN_144bdab30(lVar2);
          return;
        }
        FUN_144b4a290(local_38,0,1000,0);
        local_20 = 0;
        local_28 = hkAsyncThreadPoolMutex::OtherWaiter::vftable;
        local_18 = local_38;
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0xe) + 8);
        if (*(longlong *)(param_1 + 0xe) == 0) {
          plVar3 = (longlong *)(param_1 + 0xc);
        }
        *plVar3 = (longlong)&local_28;
        *(undefined ****)(param_1 + 0xe) = &local_28;
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
        FUN_144bdf0d0(local_38);
        FUN_144b49690(local_38);
        return;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
    }
    LOCK();
    iVar4 = *param_1;
    bVar5 = iVar4 == 0;
    if (bVar5) {
      *param_1 = 1;
      iVar4 = 0;
    }
    UNLOCK();
  } while (!bVar5);
  return;
}



// FUNCTION 144be5e70 FUN_144be5e70 body=147 status=ok
// SIG undefined FUN_144be5e70(void)

void FUN_144be5e70(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = *param_1;
  do {
    while (iVar5 != 1) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
      LOCK();
      iVar1 = *param_1;
      bVar6 = iVar5 == iVar1;
      if (bVar6) {
        *param_1 = iVar5 + -1;
        iVar1 = iVar5;
      }
      iVar5 = iVar1;
      UNLOCK();
      if (bVar6) {
        puVar2 = *(undefined8 **)(param_1 + 0xc);
        lVar4 = puVar2[1];
        if (puVar2[1] == 0) {
          param_1[0xe] = 0;
          param_1[0xf] = 0;
          lVar4 = 0;
        }
        *(longlong *)(param_1 + 0xc) = lVar4;
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
        (**(code **)*puVar2)(puVar2);
        return;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
    }
    LOCK();
    iVar1 = *param_1;
    iVar3 = iVar1;
    if (iVar1 == 1) {
      *param_1 = 0;
      iVar3 = iVar5;
    }
    iVar5 = iVar3;
    UNLOCK();
  } while (iVar1 != 1);
  return;
}



// FUNCTION 144be5f10 FUN_144be5f10 body=12 status=ok
// SIG undefined FUN_144be5f10(void)

void FUN_144be5f10(longlong param_1)

{
  FUN_144bdabf0(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  return;
}



// FUNCTION 144be5f20 FUN_144be5f20 body=14 status=ok
// SIG undefined FUN_144be5f20(void)

void FUN_144be5f20(longlong param_1)

{
  FUN_144bdf120(*(undefined8 *)(param_1 + 0x10),1);
  return;
}



// FUNCTION 144be5f30 FUN_144be5f30 body=11 status=ok
// SIG undefined FUN_144be5f30(void)

void FUN_144be5f30(undefined8 *param_1)

{
  *param_1 = hkTask::vftable;
  return;
}



// FUNCTION 144be5f40 FUN_144be5f40 body=11 status=ok
// SIG undefined FUN_144be5f40(void)

undefined8 * FUN_144be5f40(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 1;
  return param_2;
}



// FUNCTION 144be5f50 FUN_144be5f50 body=8 status=ok
// SIG undefined FUN_144be5f50(void)

char * FUN_144be5f50(void)

{
  return "Unnamed";
}



// FUNCTION 144be5f60 FUN_144be5f60 body=3 status=ok
// SIG undefined FUN_144be5f60(void)

void FUN_144be5f60(void)

{
  return;
}



// FUNCTION 144be5f70 FUN_144be5f70 body=71 status=ok
// SIG undefined FUN_144be5f70(void)

undefined8 * FUN_144be5f70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkTask::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144be5fc0 FUN_144be5fc0 body=45 status=ok
// SIG undefined FUN_144be5fc0(void)

undefined8 * FUN_144be5fc0(undefined8 *param_1,longlong param_2)

{
  param_1[1] = param_2;
  *param_1 = hkOstream::vftable;
  if (param_2 != 0) {
    FUN_144b3d910(param_2);
  }
  return param_1;
}



// FUNCTION 144be5ff0 FUN_144be5ff0 body=265 status=ok
// SIG undefined FUN_144be5ff0(void)

undefined8 * FUN_144be5ff0(undefined8 *param_1,char *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  int local_res18 [2];
  ulonglong local_res20;
  undefined1 local_38 [48];
  
  param_1[1] = 0;
  *param_1 = hkOstream::vftable;
  if (param_3 == 1) {
    pcVar3 = strrchr(param_2,0x2f);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = strrchr(param_2,0x5c);
      if (pcVar3 == (char *)0x0) goto LAB_144be60b5;
    }
    FUN_144be36a0(&local_res20,param_2,(int)pcVar3 - (int)param_2);
    FUN_144f58f10(local_38);
    (**(code **)(*DAT_14c797d88 + 0x40))
              (DAT_14c797d88,local_res18,local_res20 & 0xfffffffffffffffe,local_38);
    if (local_res18[0] < 0) {
      (**(code **)(*DAT_14c797d88 + 0x30))
                (DAT_14c797d88,local_res8,local_res20 & 0xfffffffffffffffe,1);
    }
    FUN_144f58f30(local_38);
    FUN_144b49dd0(&local_res20);
  }
LAB_144be60b5:
  puVar4 = (undefined8 *)FUN_144f590b0(DAT_14c797d88,local_res8,param_2,3);
  lVar1 = param_1[1];
  uVar2 = *puVar4;
  *puVar4 = 0;
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    FUN_144b3f230();
  }
  return param_1;
}



// FUNCTION 144be6100 FUN_144be6100 body=24 status=ok
// SIG undefined FUN_144be6100(void)

void FUN_144be6100(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = hkOstream::vftable;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  if (plVar3[1] != 0) {
    LOCK();
    plVar1 = plVar3 + 2;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000144b3f24d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 144be6120 FUN_144be6120 body=58 status=ok
// SIG undefined FUN_144be6120(void)

undefined1 * FUN_144be6120(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  char *pcVar2;
  undefined1 local_res8 [32];
  
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    pcVar2 = (char *)(**(code **)(*plVar1 + 0x18))(plVar1,local_res8);
    if (*pcVar2 != '\0') {
      *param_2 = 1;
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144be6160 FUN_144be6160 body=97 status=ok
// SIG undefined FUN_144be6160(void)

longlong FUN_144be6160(longlong param_1,char *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  plVar1 = *(longlong **)(param_1 + 8);
  lVar2 = *plVar1;
  if (param_2 == (char *)0x0) {
    lVar4 = 6;
    param_2 = "(null)";
  }
  else {
    iVar3 = FUN_144bfbbb0(param_2);
    lVar4 = (longlong)iVar3;
  }
  (**(code **)(lVar2 + 0x20))(plVar1,param_2,lVar4);
  return param_1;
}



// FUNCTION 144be61d0 FUN_144be61d0 body=111 status=ok
// SIG undefined FUN_144be61d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144be61d0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 local_2738 [10024];
  undefined8 uStack_10;
  
  uStack_10 = 0x144be61e5;
  FUN_144bfb9f0(local_2738,0x2728,0x2728,&DAT_149982374,param_2);
  plVar1 = *(longlong **)(param_1 + 8);
  lVar2 = *plVar1;
  iVar3 = FUN_144bfbbb0(local_2738);
  (**(code **)(lVar2 + 0x20))(plVar1,local_2738,(longlong)iVar3);
  return param_1;
}



// FUNCTION 144be6240 FUN_144be6240 body=112 status=ok
// SIG undefined FUN_144be6240(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144be6240(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 local_2738 [10024];
  undefined8 uStack_10;
  
  uStack_10 = 0x144be6255;
  FUN_144bfb9f0(local_2738,0x2728,0x2728,"%I64u",param_2);
  plVar1 = *(longlong **)(param_1 + 8);
  lVar2 = *plVar1;
  iVar3 = FUN_144bfbbb0(local_2738);
  (**(code **)(lVar2 + 0x20))(plVar1,local_2738,(longlong)iVar3);
  return param_1;
}



// FUNCTION 144be62b0 FUN_144be62b0 body=120 status=ok
// SIG undefined FUN_144be62b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144be62b0(longlong param_1,float *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 local_2738 [10024];
  undefined8 uStack_10;
  
  uStack_10 = 0x144be62c5;
  FUN_144bfb9f0(local_2738,0x2728,0x2728,&DAT_14998237c,(double)*param_2);
  plVar1 = *(longlong **)(param_1 + 8);
  lVar2 = *plVar1;
  iVar3 = FUN_144bfbbb0(local_2738);
  (**(code **)(lVar2 + 0x20))(plVar1,local_2738,(longlong)iVar3);
  return param_1;
}



// FUNCTION 144be6330 FUN_144be6330 body=124 status=ok
// SIG undefined FUN_144be6330(void)

longlong FUN_144be6330(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  uVar1 = *param_2;
  plVar2 = *(longlong **)(param_1 + 8);
  if ((uVar1 & 0xfffffffffffffffe) != 0) {
    lVar3 = *plVar2;
    iVar4 = FUN_144be3870(param_2);
    (**(code **)(lVar3 + 0x20))(plVar2,uVar1 & 0xfffffffffffffffe,(longlong)iVar4);
    return param_1;
  }
  (**(code **)(*plVar2 + 0x20))(plVar2,"(null)",6);
  return param_1;
}



// FUNCTION 144be63b0 FUN_144be63b0 body=106 status=ok
// SIG undefined FUN_144be63b0(void)

undefined8 * FUN_144be63b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkOstream::vftable;
  if (param_1[1] != 0) {
    FUN_144b3f230();
  }
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144be6420 FUN_144be6420 body=74 status=ok
// SIG undefined FUN_144be6420(void)

void FUN_144be6420(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  
  if (0 < param_3) {
    lVar1 = (longlong)param_3;
    do {
      (**(code **)(*param_1 + 0x28))(param_1,*param_2,param_2[1]);
      param_2 = param_2 + 2;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 144be6470 FUN_144be6470 body=573 status=ok
// SIG undefined FUN_144be6470(void)

void FUN_144be6470(longlong *param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 local_res20;
  ulonglong local_38;
  longlong local_30;
  
  if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000144be6499. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x50))(param_1,*param_2);
    return;
  }
  if (param_3 < 2) {
    return;
  }
  (**(code **)(*param_1 + 0x10))(param_1,&local_res20,1);
  (**(code **)(*param_1 + 0x20))(param_1,local_res20,0,0x40);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar4 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar4 + 0xf0);
  if (lVar2 == 0) {
    if (*(char *)(lVar4 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = FUN_144b3f4a0();
    *(longlong *)(lVar4 + 0xf0) = lVar2;
  }
  lVar6 = 0;
  lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x3d0) + 0x10);
  if (*(longlong *)(lVar4 + 8) != 0) {
    lVar4 = lVar6;
  }
  lVar2 = (longlong)param_3 * 0x10;
  local_30 = lVar2;
  if (lVar4 == 0) {
    puVar3 = (undefined8 *)(*DAT_14c787670)(1,&local_30,0x40);
  }
  else {
    local_38 = lVar2 + 0x3fU & 0xffffffffffffffc0;
    if (local_38 <= *(ulonglong *)(lVar4 + 0x28)) {
      puVar3 = *(undefined8 **)(lVar4 + 0x38);
      if (local_38 + (longlong)puVar3 <= *(ulonglong *)(lVar4 + 0x40)) {
        *(ulonglong *)(lVar4 + 0x38) = local_38 + (longlong)puVar3;
        goto LAB_144be65ae;
      }
    }
    puVar3 = (undefined8 *)FUN_144b454a0(lVar4,&local_38);
  }
LAB_144be65ae:
  puVar5 = puVar3;
  if (param_3 != 0) {
    do {
      puVar1 = param_2 + lVar6;
      lVar6 = lVar6 + 1;
      *puVar5 = *puVar1;
      puVar5[1] = local_res20;
      puVar5 = puVar5 + 2;
    } while (lVar6 < param_3);
  }
  (**(code **)(*param_1 + 0x30))(param_1,puVar3,param_3);
  (**(code **)(*param_1 + 0x38))(param_1,&local_res20,1,0,8);
  (**(code **)(*param_1 + 0x50))(param_1,local_res20);
  (**(code **)(*param_1 + 0x18))(param_1,&local_res20,1);
  if (lVar4 == 0) {
    (*DAT_14c787678)(1,puVar3,lVar2);
  }
  else {
    uVar7 = lVar2 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(lVar4 + 0x28) < uVar7) ||
       (uVar7 + (longlong)puVar3 != *(longlong *)(lVar4 + 0x38))) {
      FUN_144be8550(lVar4,puVar3);
    }
    else {
      *(undefined8 **)(lVar4 + 0x38) = puVar3;
      if (*(undefined8 **)(lVar4 + 0x48) == puVar3) {
        FUN_144be8430(lVar4);
      }
    }
  }
  return;
}



// FUNCTION 144be66b0 FUN_144be66b0 body=17 status=ok
// SIG undefined FUN_144be66b0(void)

undefined8 FUN_144be66b0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x50))();
  return 1;
}



// FUNCTION 144be66d0 FUN_144be66d0 body=117 status=ok
// SIG undefined FUN_144be66d0(void)

undefined8 FUN_144be66d0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 local_res8;
  
  (**(code **)(*param_1 + 0x10))(param_1,&local_res8,1);
  (**(code **)(*param_1 + 0x20))(param_1,local_res8,param_2,param_3);
  (**(code **)(*param_1 + 0x38))(param_1,&local_res8,1,1,8);
  return local_res8;
}



// FUNCTION 144be6750 FUN_144be6750 body=49 status=ok
// SIG undefined FUN_144be6750(void)

void FUN_144be6750(longlong *param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  (**(code **)(*param_1 + 0x50))();
  (**(code **)(*param_1 + 0x18))(param_1,local_res10,1);
  return;
}



// FUNCTION 144be6790 FUN_144be6790 body=14 status=ok
// SIG undefined FUN_144be6790(void)

void FUN_144be6790(undefined8 param_1,undefined8 param_2)

{
  FUN_144be3fc0(param_2,param_1);
  return;
}



// FUNCTION 144be67a0 FUN_144be67a0 body=514 status=ok
// SIG undefined FUN_144be67a0(void)

void FUN_144be67a0(longlong *param_1,longlong *param_2,undefined1 (*param_3) [16])

{
  int iVar1;
  int iVar2;
  int local_c0 [16];
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined **local_50;
  longlong *local_48;
  int *local_40;
  undefined1 local_38 [16];
  int local_28;
  
  local_40 = local_c0;
  if (0 < *(int *)*param_3) {
    local_38 = *param_3;
    iVar2 = local_38._0_4_;
    local_c0[0] = 0;
    local_50 = hkTaskQueue_BatchingTask::vftable;
    iVar1 = local_38._4_4_;
    if (iVar1 == 0 || local_38._0_8_ < 0) {
      iVar1 = iVar2;
      if ((1 < *(int *)(DAT_14c787698 + 0x18)) &&
         (iVar1 = iVar2 / (*(int *)(DAT_14c787698 + 0x18) * 2), iVar1 < 1)) {
        iVar1 = 1;
      }
      local_38._4_4_ = iVar1;
      local_38._0_4_ = iVar2;
    }
    iVar2 = (uint)(iVar2 % iVar1 != 0) + iVar2 / iVar1;
    local_48 = param_2;
    local_28 = iVar2;
    (**(code **)(*param_2 + 0x10))(param_2,local_38,iVar2);
    if (iVar2 < 2) {
      local_60 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_78 = param_1;
      (**(code **)(*local_48 + 0x18))(local_48,&local_78,local_38);
      LOCK();
      iVar2 = *local_40;
      *local_40 = *local_40 + local_38._4_4_;
      UNLOCK();
      if (iVar2 < (int)local_38._0_4_) {
        do {
          iVar1 = local_38._4_4_ + iVar2;
          if ((int)local_38._0_4_ < local_38._4_4_ + iVar2) {
            iVar1 = local_38._0_4_;
          }
          (**(code **)(*local_48 + 0x20))(local_48,&local_78,local_38,iVar2,iVar1 - iVar2);
          LOCK();
          iVar2 = *local_40;
          *local_40 = *local_40 + local_38._4_4_;
          UNLOCK();
        } while (iVar2 < (int)local_38._0_4_);
      }
      (**(code **)(*local_48 + 0x28))(local_48,&local_78,local_38);
    }
    else {
      (**(code **)(*param_1 + 0x10))(param_1,&local_80,1,8);
      (**(code **)(*param_1 + 0x20))(param_1,local_80,&local_50,0x40);
      (**(code **)(*param_1 + 0x38))(param_1,&local_80,1,0,8);
      (**(code **)(*param_1 + 0x50))(param_1,local_80);
      (**(code **)(*param_1 + 0x18))(param_1,&local_80,1,8);
    }
    FUN_144be5f30(&local_50);
  }
  return;
}



// FUNCTION 144be69b0 FUN_144be69b0 body=159 status=ok
// SIG undefined FUN_144be69b0(void)

void FUN_144be69b0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
            (*(longlong **)(param_1 + 8),param_2,param_1 + 0x18);
  piVar1 = *(int **)(param_1 + 0x10);
  LOCK();
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + *(int *)(param_1 + 0x1c);
  UNLOCK();
  iVar4 = *(int *)(param_1 + 0x18);
  if (iVar3 < iVar4) {
    do {
      iVar2 = *(int *)(param_1 + 0x1c) + iVar3;
      if (iVar4 < iVar2) {
        iVar2 = iVar4;
      }
      (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
                (*(longlong **)(param_1 + 8),param_2,param_1 + 0x18,iVar3,iVar2 - iVar3);
      piVar1 = *(int **)(param_1 + 0x10);
      LOCK();
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + *(int *)(param_1 + 0x1c);
      UNLOCK();
      iVar4 = *(int *)(param_1 + 0x18);
    } while (iVar3 < iVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x000144be6a4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x28))
            (*(longlong **)(param_1 + 8),param_2,param_1 + 0x18);
  return;
}



// FUNCTION 144be6a50 FUN_144be6a50 body=16 status=ok
// SIG undefined FUN_144be6a50(void)

undefined4 * FUN_144be6a50(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x28);
  param_2[1] = 1;
  return param_2;
}



// FUNCTION 144be6a60 FUN_144be6a60 body=87 status=ok
// SIG undefined FUN_144be6a60(void)

undefined8 FUN_144be6a60(undefined8 param_1,ulonglong param_2)

{
  FUN_144be5f30();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 144be6ac0 FUN_144be6ac0 body=21 status=ok
// SIG undefined FUN_144be6ac0(void)

undefined8 * FUN_144be6ac0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = hkReflect::Detail::Impl::vftable;
  return param_1;
}



// FUNCTION 144be6ae0 FUN_144be6ae0 body=11 status=ok
// SIG undefined FUN_144be6ae0(void)

void FUN_144be6ae0(undefined8 *param_1)

{
  *param_1 = hkReflect::Detail::Impl::vftable;
  return;
}



// FUNCTION 144be6af0 FUN_144be6af0 body=10 status=ok
// SIG undefined FUN_144be6af0(void)

undefined4 * FUN_144be6af0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144be6b00 FUN_144be6b00 body=3 status=ok
// SIG undefined FUN_144be6b00(void)

undefined8 FUN_144be6b00(void)

{
  return 0;
}



// FUNCTION 144be6b10 FUN_144be6b10 body=8 status=ok
// SIG undefined FUN_144be6b10(void)

void FUN_144be6b10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144befdb0(param_3);
  return;
}



// FUNCTION 144be6b20 FUN_144be6b20 body=5 status=ok
// SIG undefined FUN_144be6b20(void)

void FUN_144be6b20(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  return;
}



// FUNCTION 144be6b30 FUN_144be6b30 body=32 status=ok
// SIG undefined FUN_144be6b30(void)

void FUN_144be6b30(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 == 1) && (param_1 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144be6b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 144be6b50 FUN_144be6b50 body=71 status=ok
// SIG undefined FUN_144be6b50(void)

undefined8 * FUN_144be6b50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::Impl::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144be6ba0 FUN_144be6ba0 body=3 status=ok
// SIG undefined FUN_144be6ba0(void)

void FUN_144be6ba0(void)

{
  return;
}



// FUNCTION 144be6bb0 FUN_144be6bb0 body=740 status=ok
// SIG undefined FUN_144be6bb0(void)

undefined8 *
FUN_144be6bb0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 local_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  ulonglong local_30;
  
  if (param_3[6] == -1) {
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x30))(param_1,local_58,*param_3,param_3[1]);
    bVar3 = false;
    bVar2 = true;
    local_c8 = *puVar5;
  }
  else {
    local_c8 = *param_3;
    local_88 = param_3[1];
    local_80 = param_3[2];
    if ((local_80 & 1) != 0) {
      LOCK();
      piVar1 = (int *)((local_80 & 0xfffffffffffffffe) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_78 = param_3[3];
    local_70 = param_3[4];
    local_68 = param_3[5];
    if ((local_68 & 1) != 0) {
      LOCK();
      piVar1 = (int *)((local_68 & 0xfffffffffffffffe) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    puVar5 = &local_90;
    local_60 = param_3[6];
    bVar3 = true;
    bVar2 = false;
    local_90 = local_c8;
  }
  local_c0 = puVar5[1];
  local_b8 = puVar5[2];
  if ((local_b8 & 1) != 0) {
    LOCK();
    piVar1 = (int *)((local_b8 & 0xfffffffffffffffe) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_b0 = puVar5[3];
  uStack_a8 = puVar5[4];
  local_a0 = puVar5[5];
  if ((local_a0 & 1) != 0) {
    LOCK();
    piVar1 = (int *)((local_a0 & 0xfffffffffffffffe) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_98 = puVar5[6];
  if (bVar2) {
    if ((local_30 & 1) != 0) {
      puVar5 = (undefined8 *)(local_30 & 0xfffffffffffffffe);
      LOCK();
      piVar1 = (int *)(puVar5 + 1);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
    if ((local_48 & 1) != 0) {
      puVar5 = (undefined8 *)(local_48 & 0xfffffffffffffffe);
      LOCK();
      piVar1 = (int *)(puVar5 + 1);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
  }
  if (bVar3) {
    if ((local_68 & 1) != 0) {
      puVar5 = (undefined8 *)(local_68 & 0xfffffffffffffffe);
      LOCK();
      piVar1 = (int *)(puVar5 + 1);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
    if ((local_80 & 1) != 0) {
      puVar5 = (undefined8 *)(local_80 & 0xfffffffffffffffe);
      LOCK();
      piVar1 = (int *)(puVar5 + 1);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
  }
  do {
    if (local_98 == -1) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0xffffffffffffffff;
      if ((local_a0 & 1) != 0) {
        puVar5 = (undefined8 *)(local_a0 & 0xfffffffffffffffe);
        LOCK();
        piVar1 = (int *)(puVar5 + 1);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar4 == 1) && (puVar5 != (undefined8 *)0x0)) {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
LAB_144be6dd7:
      if ((local_b8 & 1) != 0) {
        puVar5 = (undefined8 *)(local_b8 & 0xfffffffffffffffe);
        LOCK();
        piVar1 = (int *)(puVar5 + 1);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar4 == 1) && (puVar5 != (undefined8 *)0x0)) {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
      if ((*(byte *)(param_4 + 0x10) & 1) != 0) {
        puVar5 = (undefined8 *)(*(ulonglong *)(param_4 + 0x10) & 0xfffffffffffffffe);
        LOCK();
        piVar1 = (int *)(puVar5 + 1);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar4 == 1) && (puVar5 != (undefined8 *)0x0)) {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
      return param_2;
    }
    iVar4 = FUN_144bece60(&local_b0,param_4);
    if (iVar4 == 0) {
      *param_2 = local_c8;
      param_2[1] = local_c0;
      param_2[2] = local_b8;
      if ((local_b8 & 1) != 0) {
        LOCK();
        piVar1 = (int *)((local_b8 & 0xfffffffffffffffe) + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      param_2[3] = local_b0;
      param_2[4] = uStack_a8;
      param_2[5] = local_a0;
      param_2[6] = local_98;
      local_a0 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      goto LAB_144be6dd7;
    }
    (**(code **)(*(longlong *)(local_b8 & 0xfffffffffffffffe) + 0x38))
              ((longlong *)(local_b8 & 0xfffffffffffffffe),&local_c8);
  } while( true );
}



// FUNCTION 144be6ea0 FUN_144be6ea0 body=177 status=ok
// SIG undefined FUN_144be6ea0(void)

undefined8 FUN_144be6ea0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  uint *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong lStack_18;
  ulonglong local_10;
  
  local_10 = 0;
  local_20 = 0;
  lStack_18 = 0;
  (**(code **)(*param_1 + 0x48))(0,local_res8,param_2,param_3,&local_20);
  lVar3 = lStack_18;
  uVar7 = local_20;
  if (lStack_18 != 0) {
    cVar4 = FUN_144b45dd0(lStack_18,param_4);
    if (cVar4 != '\0') {
      puVar5 = (uint *)FUN_144b45d50(lVar3,local_28);
      if ((*puVar5 >> 3 & 1) == 0) goto LAB_144be6f16;
    }
  }
  uVar7 = 0;
LAB_144be6f16:
  if ((local_10 & 1) != 0) {
    puVar6 = (undefined8 *)(local_10 & 0xfffffffffffffffe);
    LOCK();
    piVar1 = (int *)(puVar6 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
  }
  return uVar7;
}



// FUNCTION 144be6f60 FUN_144be6f60 body=105 status=ok
// SIG undefined FUN_144be6f60(void)

undefined8 FUN_144be6f60(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  (**(code **)(*param_1 + 0x48))(0,local_res8,param_2,param_3,&local_28);
  uVar3 = local_28;
  if ((local_18 & 1) != 0) {
    puVar4 = (undefined8 *)(local_18 & 0xfffffffffffffffe);
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  return uVar3;
}



// FUNCTION 144be6fd0 FUN_144be6fd0 body=3 status=ok
// SIG undefined FUN_144be6fd0(void)

undefined1 FUN_144be6fd0(void)

{
  return 1;
}



// FUNCTION 144be6fe0 FUN_144be6fe0 body=9 status=ok
// SIG undefined FUN_144be6fe0(void)

void FUN_144be6fe0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x30) = 0xffffffffffffffff;
  return;
}



// FUNCTION 144be6ff0 FUN_144be6ff0 body=262 status=ok
// SIG undefined FUN_144be6ff0(void)

undefined8 FUN_144be6ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  puVar3 = (undefined4 *)FUN_144bef800(param_4,local_res10);
  lVar4 = 0;
  if (((byte)*puVar3 & 0x1f) == 6) {
    lVar4 = param_4;
  }
  if (lVar4 == 0) {
    local_30 = 0;
  }
  else {
    local_30 = FUN_144befdb0(lVar4);
  }
  if ((local_30 & 1) != 0) {
    LOCK();
    piVar1 = (int *)((local_30 & 0xfffffffffffffffe) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  plVar5 = (longlong *)(local_30 & 0xfffffffffffffffe);
  (**(code **)(*plVar5 + 0x48))(plVar5,local_res18,param_3,lVar4,&local_58);
  local_40 = param_3;
  local_38 = lVar4;
  if ((local_30 & 1) == 0) {
    FUN_144be7f60(param_2,&local_40,&local_58,0);
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    FUN_144be7f60(param_2,&local_40,&local_58,0);
    LOCK();
    plVar2 = plVar5 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)*plVar5)(plVar5,1);
    }
  }
  return param_2;
}



// FUNCTION 144be7100 FUN_144be7100 body=51 status=ok
// SIG undefined FUN_144be7100(void)

undefined8 FUN_144be7100(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x58))();
  return param_2;
}



// FUNCTION 144be7140 FUN_144be7140 body=547 status=ok
// SIG undefined FUN_144be7140(void)

undefined4 *
FUN_144be7140(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             int param_5,int param_6,undefined8 *param_7)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 local_58;
  longlong local_50 [2];
  undefined8 local_40;
  ulonglong local_38;
  
  FUN_144beff00(param_4,&local_58);
  puVar7 = param_7;
  if ((param_7[1] != 0) && (cVar3 = FUN_144bef570(local_58), cVar3 == '\0')) {
    *param_2 = 0x80040200;
    return param_2;
  }
  local_40 = 0;
  local_38 = 0;
  local_50[0] = 0;
  local_50[1] = 0;
  plVar5 = (longlong *)FUN_144befdb0(param_4);
  (**(code **)(*plVar5 + 0x48))(plVar5,&param_7,param_3,param_4,local_50);
  if (param_5 < 0) {
    param_5 = (int)local_40;
  }
  if (param_6 < 0) {
    param_6 = (int)local_40;
  }
  if (param_6 == *(int *)(puVar7 + 2)) {
    if (param_6 == 0) {
      *param_2 = 0;
      if ((local_38 & 1) != 0) {
        puVar7 = (undefined8 *)(local_38 & 0xfffffffffffffffe);
        LOCK();
        piVar1 = (int *)(puVar7 + 1);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar4 == 1) && (puVar7 != (undefined8 *)0x0)) {
          (**(code **)*puVar7)(puVar7,1);
        }
      }
    }
    else {
      puVar6 = (undefined8 *)FUN_144befe50(local_58,0x80);
      lVar8 = local_50[0];
      if ((puVar6 == (undefined8 *)0x0) || (pcVar2 = (code *)*puVar6, pcVar2 == (code *)0x0)) {
        *param_2 = 0x80040200;
      }
      else {
        iVar4 = FUN_144beec90(local_58);
        lVar8 = iVar4 * param_5 + lVar8;
        puVar6 = (undefined8 *)FUN_144befe50(local_58,0x100);
        if ((puVar6 != (undefined8 *)0x0) && ((code *)*puVar6 != (code *)0x0)) {
          (*(code *)*puVar6)(lVar8,local_58,param_6);
        }
        (*pcVar2)(lVar8,*puVar7,local_58,param_6);
        *param_2 = 0;
      }
      if ((local_38 & 1) != 0) {
        puVar7 = (undefined8 *)(local_38 & 0xfffffffffffffffe);
        LOCK();
        piVar1 = (int *)(puVar7 + 1);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar4 == 1) && (puVar7 != (undefined8 *)0x0)) {
          (**(code **)*puVar7)(puVar7,1);
        }
      }
    }
  }
  else {
    *param_2 = 0x80040200;
    if ((local_38 & 1) != 0) {
      puVar7 = (undefined8 *)(local_38 & 0xfffffffffffffffe);
      LOCK();
      piVar1 = (int *)(puVar7 + 1);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (puVar7 != (undefined8 *)0x0)) {
        (**(code **)*puVar7)(puVar7,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 144be7370 FUN_144be7370 body=6 status=ok
// SIG undefined FUN_144be7370(void)

undefined8 FUN_144be7370(void)

{
  return 1;
}



// FUNCTION 144be7380 FUN_144be7380 body=3 status=ok
// SIG undefined FUN_144be7380(void)

void FUN_144be7380(void)

{
  return;
}



// FUNCTION 144be7390 FUN_144be7390 body=359 status=ok
// SIG undefined FUN_144be7390(void)

undefined8 *
FUN_144be7390(undefined8 param_1,undefined8 *param_2,undefined8 param_3,ulonglong param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined1 local_res20 [8];
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  puVar3 = (undefined4 *)FUN_144bef800(param_4,local_res20);
  uVar5 = 0;
  local_30 = 0;
  local_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uVar7 = uVar5;
  if (((byte)*puVar3 & 0x1f) == 8) {
    uVar7 = param_4;
  }
  plVar4 = (longlong *)FUN_144befdb0(uVar7);
  (**(code **)(*plVar4 + 0x48))(plVar4,local_78,param_3,uVar7,&local_40);
  if ((int)local_30 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0xffffffffffffffff;
  }
  else {
    local_70 = local_40;
    local_68 = uStack_38;
    local_60 = (ulonglong)((byte)local_28 & 1) | local_28 & 0xfffffffffffffffe;
    if ((ulonglong)((byte)local_28 & 1) != 0) {
      LOCK();
      piVar1 = (int *)((local_28 & 0xfffffffffffffffe) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_58 = param_3;
    local_50 = param_4;
    if (param_4 != 0) {
      uVar5 = FUN_144befdb0(param_4);
    }
    if ((uVar5 & 1) != 0) {
      LOCK();
      piVar1 = (int *)((uVar5 & 0xfffffffffffffffe) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_48 = uVar5;
    FUN_144be7f60(param_2,&local_58,&local_70,0);
  }
  if ((local_28 & 1) != 0) {
    puVar6 = (undefined8 *)(local_28 & 0xfffffffffffffffe);
    LOCK();
    piVar1 = (int *)(puVar6 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)(puVar6,1);
    }
  }
  return param_2;
}



// FUNCTION 144be7500 FUN_144be7500 body=301 status=ok
// SIG undefined FUN_144be7500(void)

void FUN_144be7500(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  uVar3 = param_2[1];
  puVar5 = (undefined4 *)FUN_144bef800(uVar3,local_res10);
  local_18 = 0;
  local_10 = 0;
  uVar8 = 0;
  if (((byte)*puVar5 & 0x1f) == 8) {
    uVar8 = uVar3;
  }
  local_28 = 0;
  uStack_20 = 0;
  plVar6 = (longlong *)FUN_144befdb0(uVar8);
  (**(code **)(*plVar6 + 0x48))(plVar6,local_res18,*param_2,uVar8,&local_28);
  if (*(int *)(param_2 + 6) + 1 < (int)local_18) {
    param_2[6] = param_2[6] + 1;
    uVar3 = param_2[6];
    if ((ulonglong)((byte)local_10 & 1) != 0) {
      LOCK();
      piVar1 = (int *)((local_10 & 0xfffffffffffffffe) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    param_2[3] = (int)uVar3 * local_18._4_4_ + local_28;
    param_2[4] = uStack_20;
    uVar4 = param_2[5];
    param_2[5] = (ulonglong)((byte)local_10 & 1) | local_10 & 0xfffffffffffffffe;
    if ((uVar4 & 1) != 0) {
      puVar7 = (undefined8 *)(uVar4 & 0xfffffffffffffffe);
      LOCK();
      piVar1 = (int *)(puVar7 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (puVar7 != (undefined8 *)0x0)) {
        (**(code **)*puVar7)(puVar7,1);
      }
    }
  }
  else {
    param_2[6] = 0xffffffffffffffff;
  }
  if ((local_10 & 1) != 0) {
    puVar7 = (undefined8 *)(local_10 & 0xfffffffffffffffe);
    LOCK();
    piVar1 = (int *)(puVar7 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)(puVar7,1);
    }
  }
  return;
}



// FUNCTION 144be7630 FUN_144be7630 body=1022 status=ok
// SIG undefined FUN_144be7630(void)

undefined8 *
FUN_144be7630(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  char cVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulonglong local_90;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 local_60 [8];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  undefined1 local_40 [24];
  
  uVar13 = 0;
  if ((param_4[1] != 0) &&
     (puVar9 = (undefined4 *)FUN_144bef800(param_4[1],local_70), uVar13 = 0,
     ((byte)*puVar9 & 0x1f) == 3)) {
    lVar16 = *param_4;
    lVar3 = param_4[1];
    if ((*(byte *)(param_4 + 2) & 1) != 0) {
      LOCK();
      piVar1 = (int *)((param_4[2] & 0xfffffffffffffffeU) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    uVar13 = param_4[2];
    if (lVar16 != 0) {
      local_90 = 0;
      local_a0 = 0;
      uStack_98 = (byte *)0x0;
      if (param_3[1] != 0) {
        puVar9 = (undefined4 *)FUN_144bef800(param_3[1],local_6c);
        if (((byte)*puVar9 & 0x1f) == 7) {
          local_a0 = *param_3;
          uStack_98 = (byte *)param_3[1];
          if ((*(byte *)(param_3 + 2) & 1) != 0) {
            LOCK();
            piVar1 = (int *)((param_3[2] & 0xfffffffffffffffeU) + 8);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          if ((local_90 & 1) != 0) {
            puVar12 = (undefined8 *)(local_90 & 0xfffffffffffffffe);
            LOCK();
            piVar1 = (int *)(puVar12 + 1);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar14 == 1) && (puVar12 != (undefined8 *)0x0)) {
              (**(code **)*puVar12)(puVar12,1);
            }
          }
          local_90 = param_3[2];
        }
        if (local_a0 != 0) {
          local_88 = 0;
          (**(code **)(*(longlong *)(uVar13 & 0xfffffffffffffffe) + 0x30))
                    ((longlong *)(uVar13 & 0xfffffffffffffffe),local_68,lVar16,lVar3,&local_88);
          pbVar7 = uStack_98;
          iVar14 = (int)param_3[6] + 1;
          if (param_3[6] == -1) {
            iVar14 = 0;
            pbVar10 = (byte *)FUN_144beff80(uStack_98);
            pbVar5 = pbVar7;
            while (pbVar6 = pbVar10, pbVar6 != (byte *)0x0) {
              pbVar10 = (byte *)FUN_144beff80(pbVar6);
              pbVar5 = pbVar6;
            }
          }
          else {
            pbVar10 = (byte *)FUN_144bef220(param_3[4]);
            puVar9 = (undefined4 *)FUN_144bef800(pbVar10,local_64);
            pbVar5 = (byte *)0x0;
            if (((byte)*puVar9 & 0x1f) == 7) {
              pbVar5 = pbVar10;
            }
          }
          while (pbVar5 != (byte *)0x0) {
            FUN_144bef820(pbVar5,&local_80);
            iVar15 = iVar14;
            if (iVar14 < (int)(local_78 - local_80 >> 3)) {
              do {
                lVar16 = (longlong)iVar15;
                uVar11 = FUN_144bf0530(local_80 + lVar16 * 8);
                cVar8 = FUN_144f65cf0(&local_88,uVar11);
                if (cVar8 != '\0') {
                  uVar11 = *(undefined8 *)(local_80 + lVar16 * 8);
                  local_48 = local_90;
                  local_58 = (undefined4)local_a0;
                  uStack_54 = local_a0._4_4_;
                  uStack_50 = (undefined4)uStack_98;
                  uStack_4c = uStack_98._4_4_;
                  if ((local_90 & 1) != 0) {
                    LOCK();
                    piVar1 = (int *)((local_90 & 0xfffffffffffffffe) + 8);
                    *piVar1 = *piVar1 + 1;
                    UNLOCK();
                  }
                  uVar11 = FUN_144bebf80(&local_a0,local_40,uVar11);
                  FUN_144be7f60(param_2,&local_58,uVar11,lVar16);
                  if ((local_90 & 1) != 0) {
                    puVar12 = (undefined8 *)(local_90 & 0xfffffffffffffffe);
                    LOCK();
                    piVar1 = (int *)(puVar12 + 1);
                    iVar14 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if ((iVar14 == 1) && (puVar12 != (undefined8 *)0x0)) {
                      (**(code **)*puVar12)(puVar12,1);
                    }
                  }
                  if ((uVar13 & 1) != 0) {
                    puVar12 = (undefined8 *)(uVar13 & 0xfffffffffffffffe);
                    LOCK();
                    piVar1 = (int *)(puVar12 + 1);
                    iVar14 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if ((iVar14 == 1) && (puVar12 != (undefined8 *)0x0)) {
                      (**(code **)*puVar12)(puVar12,1);
                    }
                  }
                  if ((*(byte *)(param_4 + 2) & 1) == 0) {
                    return param_2;
                  }
                  uVar13 = param_4[2];
                  goto LAB_144be79ed;
                }
                iVar15 = iVar15 + 1;
              } while (iVar15 < (int)(local_78 - local_80 >> 3));
            }
            pbVar10 = (byte *)0x0;
            pbVar6 = pbVar7;
            while (pbVar6 != (byte *)0x0) {
              bVar2 = *pbVar6;
              pbVar4 = pbVar6;
              while ((~bVar2 & 1) != 0) {
                if (pbVar5 == pbVar4) goto LAB_144be7884;
                pbVar4 = *(byte **)(pbVar4 + 8);
                bVar2 = *pbVar4;
              }
              if (pbVar4 == pbVar5) break;
              pbVar10 = pbVar6;
              pbVar6 = *(byte **)(pbVar4 + 8);
            }
LAB_144be7884:
            if (pbVar10 == (byte *)0x0) break;
            puVar9 = (undefined4 *)FUN_144bef800(pbVar10,local_60);
            pbVar5 = (byte *)0x0;
            if (((byte)*puVar9 & 0x1f) == 7) {
              pbVar5 = pbVar10;
            }
          }
        }
      }
      if ((local_90 & 1) != 0) {
        puVar12 = (undefined8 *)(local_90 & 0xfffffffffffffffe);
        LOCK();
        piVar1 = (int *)(puVar12 + 1);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar14 == 1) && (puVar12 != (undefined8 *)0x0)) {
          (**(code **)*puVar12)(puVar12,1);
        }
      }
    }
  }
  if ((uVar13 & 1) != 0) {
    puVar12 = (undefined8 *)(uVar13 & 0xfffffffffffffffe);
    LOCK();
    piVar1 = (int *)(puVar12 + 1);
    iVar14 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar14 == 1) && (puVar12 != (undefined8 *)0x0)) {
      (**(code **)*puVar12)(puVar12,1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0xffffffffffffffff;
  if ((*(byte *)(param_4 + 2) & 1) != 0) {
    uVar13 = param_4[2];
LAB_144be79ed:
    puVar12 = (undefined8 *)(uVar13 & 0xfffffffffffffffe);
    LOCK();
    piVar1 = (int *)(puVar12 + 1);
    iVar14 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar14 == 1) && (puVar12 != (undefined8 *)0x0)) {
      (**(code **)*puVar12)(puVar12,1);
    }
  }
  return param_2;
}



// FUNCTION 144be7a30 FUN_144be7a30 body=403 status=ok
// SIG undefined FUN_144be7a30(void)

undefined8 *
FUN_144be7a30(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 local_res20 [8];
  ulonglong local_78;
  ulonglong *local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  undefined1 local_30 [24];
  
  puVar3 = (undefined4 *)FUN_144bef800(param_4,local_res20);
  lVar4 = 0;
  if (((byte)*puVar3 & 0x1f) == 7) {
    lVar4 = param_4;
  }
  if (lVar4 != 0) {
    local_60 = param_3;
    uStack_58 = lVar4;
    local_50 = FUN_144befdb0(lVar4);
    if ((local_50 & 1) != 0) {
      LOCK();
      piVar1 = (int *)((local_50 & 0xfffffffffffffffe) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_144bf0690(&local_78,0);
    do {
      FUN_144bef820(lVar4,&local_70);
      if ((int)(local_68 - (longlong)local_70 >> 3) != 0) {
        local_78 = *local_70;
      }
      lVar4 = FUN_144beff80(lVar4);
    } while (lVar4 != 0);
    if (1 < local_78) {
      local_38 = local_50;
      local_48 = (undefined4)local_60;
      uStack_44 = local_60._4_4_;
      uStack_40 = (undefined4)uStack_58;
      uStack_3c = uStack_58._4_4_;
      if ((local_50 & 1) != 0) {
        LOCK();
        piVar1 = (int *)((local_50 & 0xfffffffffffffffe) + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      uVar5 = FUN_144bebf80(&local_60,local_30);
      FUN_144be7f60(param_2,&local_48,uVar5,0);
      if ((local_50 & 1) == 0) {
        return param_2;
      }
      puVar6 = (undefined8 *)(local_50 & 0xfffffffffffffffe);
      LOCK();
      piVar1 = (int *)(puVar6 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 != 1) {
        return param_2;
      }
      if (puVar6 == (undefined8 *)0x0) {
        return param_2;
      }
      (**(code **)*puVar6)(puVar6,1);
      return param_2;
    }
    if ((local_50 & 1) != 0) {
      puVar6 = (undefined8 *)(local_50 & 0xfffffffffffffffe);
      LOCK();
      piVar1 = (int *)(puVar6 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0xffffffffffffffff;
  return param_2;
}



// FUNCTION 144be7bd0 FUN_144be7bd0 body=775 status=ok
// SIG undefined FUN_144be7bd0(void)

void FUN_144be7bd0(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  longlong lVar8;
  int iVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  int iVar15;
  byte *pbVar16;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  longlong local_78;
  byte *pbStack_70;
  ulonglong local_68;
  undefined1 local_60 [16];
  ulonglong local_50;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  if (param_2[6] != -1) {
    pbVar16 = (byte *)0x0;
    local_68 = 0;
    local_78 = 0;
    pbStack_70 = (byte *)0x0;
    if (param_2[1] != 0) {
      puVar10 = (undefined4 *)FUN_144bef800(param_2[1],local_res10);
      if (((byte)*puVar10 & 0x1f) == 7) {
        local_78 = *param_2;
        pbStack_70 = (byte *)param_2[1];
        if ((*(byte *)(param_2 + 2) & 1) != 0) {
          LOCK();
          piVar1 = (int *)((param_2[2] & 0xfffffffffffffffeU) + 8);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        if ((local_68 & 1) != 0) {
          puVar13 = (undefined8 *)(local_68 & 0xfffffffffffffffe);
          LOCK();
          piVar1 = (int *)(puVar13 + 1);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar9 == 1) && (puVar13 != (undefined8 *)0x0)) {
            (**(code **)*puVar13)(puVar13,1);
          }
        }
        local_68 = param_2[2];
      }
      if (local_78 != 0) {
        pbVar11 = (byte *)FUN_144bef220(param_2[4]);
        puVar10 = (undefined4 *)FUN_144bef800(pbVar11,local_res18);
        pbVar14 = pbVar16;
        if (((byte)*puVar10 & 0x1f) == 7) {
          pbVar14 = pbVar11;
        }
        lVar8 = param_2[6];
        iVar15 = (int)lVar8 + 1;
        iVar9 = FUN_144bef940(pbVar14);
        if (iVar15 < iVar9) {
          param_2[6] = (longlong)(int)lVar8 + 1;
          puVar13 = (undefined8 *)FUN_144befa10(pbVar14,local_88,iVar15);
          plVar12 = (longlong *)FUN_144bebf80(&local_78,local_60,*puVar13);
          lVar8 = *plVar12;
          lVar3 = plVar12[2];
          lVar4 = plVar12[1];
          plVar12[2] = 0;
          *plVar12 = 0;
          plVar12[1] = 0;
          param_2[3] = lVar8;
          param_2[4] = lVar4;
          uVar5 = param_2[5];
          param_2[5] = lVar3;
          local_38 = local_50;
          if ((uVar5 & 1) != 0) {
            puVar13 = (undefined8 *)(uVar5 & 0xfffffffffffffffe);
            LOCK();
            piVar1 = (int *)(puVar13 + 1);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar9 == 1) && (puVar13 != (undefined8 *)0x0)) {
              (**(code **)*puVar13)(puVar13,1);
              local_38 = local_50;
            }
          }
        }
        else {
          param_2[6] = 0;
          pbVar11 = pbVar16;
          pbVar7 = pbStack_70;
joined_r0x000144be7d6b:
          do {
            if (pbVar7 != (byte *)0x0) {
              bVar2 = *pbVar7;
              pbVar6 = pbVar7;
              while ((~bVar2 & 1) != 0) {
                if (pbVar14 == pbVar6) goto LAB_144be7da4;
                pbVar6 = *(byte **)(pbVar6 + 8);
                bVar2 = *pbVar6;
              }
              if (pbVar6 != pbVar14) {
                pbVar11 = pbVar7;
                pbVar7 = *(byte **)(pbVar6 + 8);
                goto joined_r0x000144be7d6b;
              }
            }
LAB_144be7da4:
            if (pbVar11 == (byte *)0x0) goto LAB_144be7e98;
            puVar10 = (undefined4 *)FUN_144bef800(pbVar11,local_res20);
            pbVar14 = pbVar16;
            if (((byte)*puVar10 & 0x1f) == 7) {
              pbVar14 = pbVar11;
            }
            iVar9 = FUN_144bef940(pbVar14);
            pbVar11 = pbVar16;
            pbVar7 = pbStack_70;
          } while (iVar9 == 0);
          puVar13 = (undefined8 *)FUN_144befa10(pbVar14,local_80,0);
          plVar12 = (longlong *)FUN_144bebf80(&local_78,local_48,*puVar13);
          lVar8 = *plVar12;
          lVar3 = plVar12[2];
          lVar4 = plVar12[1];
          plVar12[2] = 0;
          *plVar12 = 0;
          plVar12[1] = 0;
          param_2[3] = lVar8;
          param_2[4] = lVar4;
          uVar5 = param_2[5];
          param_2[5] = lVar3;
          if ((uVar5 & 1) != 0) {
            puVar13 = (undefined8 *)(uVar5 & 0xfffffffffffffffe);
            LOCK();
            piVar1 = (int *)(puVar13 + 1);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar9 == 1) && (puVar13 != (undefined8 *)0x0)) {
              (**(code **)*puVar13)(puVar13,1);
            }
          }
        }
        if ((local_38 & 1) != 0) {
          puVar13 = (undefined8 *)(local_38 & 0xfffffffffffffffe);
          LOCK();
          piVar1 = (int *)(puVar13 + 1);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar9 == 1) && (puVar13 != (undefined8 *)0x0)) {
            (**(code **)*puVar13)(puVar13,1);
          }
        }
        if ((local_68 & 1) == 0) {
          return;
        }
        puVar13 = (undefined8 *)(local_68 & 0xfffffffffffffffe);
        LOCK();
        piVar1 = (int *)(puVar13 + 1);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 != 1) {
          return;
        }
        if (puVar13 == (undefined8 *)0x0) {
          return;
        }
        (**(code **)*puVar13)(puVar13,1);
        return;
      }
    }
LAB_144be7e98:
    if ((local_68 & 1) != 0) {
      puVar13 = (undefined8 *)(local_68 & 0xfffffffffffffffe);
      LOCK();
      piVar1 = (int *)(puVar13 + 1);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar9 == 1) && (puVar13 != (undefined8 *)0x0)) {
        (**(code **)*puVar13)(puVar13,1);
      }
    }
  }
  param_2[6] = -1;
  return;
}



// FUNCTION 144be7ee0 FUN_144be7ee0 body=14 status=ok
// SIG undefined FUN_144be7ee0(void)

undefined8 * FUN_144be7ee0(undefined8 *param_1)

{
  *param_1 = hkReflect::Detail::AllocationImpl::vftable;
  return param_1;
}



// FUNCTION 144be7ef0 FUN_144be7ef0 body=11 status=ok
// SIG undefined FUN_144be7ef0(void)

void FUN_144be7ef0(undefined8 *param_1)

{
  *param_1 = hkReflect::Detail::AllocationImpl::vftable;
  return;
}



// FUNCTION 144be7f00 FUN_144be7f00 body=3 status=ok
// SIG undefined FUN_144be7f00(void)

undefined1 FUN_144be7f00(void)

{
  return 1;
}



// FUNCTION 144be7f10 FUN_144be7f10 body=71 status=ok
// SIG undefined FUN_144be7f10(void)

undefined8 * FUN_144be7f10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::AllocationImpl::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,8);
  }
  return param_1;
}



// FUNCTION 144be7f60 FUN_144be7f60 body=192 status=ok
// SIG undefined FUN_144be7f60(void)

undefined8 *
FUN_144be7f60(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar3 = param_2[2];
  param_1[2] = uVar3;
  if ((uVar3 & 1) != 0) {
    LOCK();
    piVar1 = (int *)((uVar3 & 0xfffffffffffffffe) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[3] = *param_3;
  param_1[4] = param_3[1];
  param_1[5] = param_3[2];
  param_3[2] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_1[6] = param_4;
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    puVar4 = (undefined8 *)(param_2[2] & 0xfffffffffffffffe);
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    puVar4 = (undefined8 *)(param_3[2] & 0xfffffffffffffffe);
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  return param_1;
}



// FUNCTION 144be8020 FUN_144be8020 body=6 status=ok
// SIG undefined FUN_144be8020(void)

undefined8 FUN_144be8020(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 144be8030 FUN_144be8030 body=8 status=ok
// SIG undefined FUN_144be8030(void)

void FUN_144be8030(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}



// FUNCTION 144be8070 FUN_144be8070 body=97 status=ok
// SIG undefined FUN_144be8070(void)

void FUN_144be8070(longlong *param_1,uint param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (0 < (int)param_2) {
    uVar4 = (ulonglong)param_2;
    do {
      plVar3 = (longlong *)*param_1;
      if ((plVar3 != (longlong *)0x0) && (plVar3[1] != 0)) {
        LOCK();
        plVar1 = plVar3 + 2;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 1) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      param_1 = (longlong *)((longlong)param_1 + (longlong)param_3);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 144be80e0 FUN_144be80e0 body=18 status=ok
// SIG undefined FUN_144be80e0(void)

void FUN_144be80e0(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144be80ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 144be8100 FUN_144be8100 body=3 status=ok
// SIG undefined FUN_144be8100(void)

void FUN_144be8100(void)

{
  return;
}



// FUNCTION 144be8110 FUN_144be8110 body=3 status=ok
// SIG undefined FUN_144be8110(void)

void FUN_144be8110(void)

{
  return;
}



// FUNCTION 144be8120 FUN_144be8120 body=225 status=ok
// SIG undefined FUN_144be8120(void)

undefined8 *
FUN_144be8120(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  puVar2 = (undefined8 *)0x0;
  param_1[2] = param_2;
  param_1[1] = 0;
  *param_1 = hkMemory::LifoAllocator::vftable;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[3] = param_3;
  param_1[5] = param_4;
  local_res8 = 0x10;
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,&local_res8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_2;
    *puVar1 = hkMemory::ForwardingContainerAllocator::vftable;
    puVar2 = puVar1;
  }
  param_1[4] = puVar2;
  local_res8 = 0x28;
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,&local_res8);
  if (puVar2 == (undefined8 *)0x0) {
    param_1[6] = 0;
    return param_1;
  }
  puVar2[3] = 0;
  puVar2[4] = 0;
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0x80000000;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 3) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = 0x80000000;
  param_1[6] = puVar2;
  return param_1;
}



// FUNCTION 144be8210 FUN_144be8210 body=328 status=ok
// SIG undefined FUN_144be8210(void)

void FUN_144be8210(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = hkMemory::LifoAllocator::vftable;
  if (param_1[7] != 0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))
              ((longlong *)param_1[3],**(undefined8 **)(param_1[6] + 0x10),param_1[5]);
    *(int *)(param_1[6] + 0x20) = *(int *)(param_1[6] + 0x20) + -1;
  }
  if (param_1[10] != 0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))((longlong *)param_1[3],param_1[10],param_1[5]);
    *(int *)(param_1[6] + 0x20) = *(int *)(param_1[6] + 0x20) + -1;
  }
  lVar1 = param_1[6];
  plVar2 = (longlong *)param_1[4];
  *(undefined4 *)(lVar1 + 0x18) = 0;
  if ((-1 < (int)*(uint *)(lVar1 + 0x1c)) && (*(longlong *)(lVar1 + 0x10) != 0)) {
    (**(code **)(*plVar2 + 0x18))
              (plVar2,*(longlong *)(lVar1 + 0x10),
               (ulonglong)(*(uint *)(lVar1 + 0x1c) & 0x7fffffff) << 3);
  }
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined4 *)(lVar1 + 0x1c) = 0x80000000;
  plVar2 = (longlong *)param_1[6];
  plVar3 = (longlong *)param_1[4];
  *(undefined4 *)(plVar2 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)plVar2 + 0xc)) && (*plVar2 != 0)) {
    (**(code **)(*plVar3 + 0x18))
              (plVar3,*plVar2,(ulonglong)(*(uint *)((longlong)plVar2 + 0xc) & 0x7fffffff) * 0x18);
  }
  *plVar2 = 0;
  *(undefined4 *)((longlong)plVar2 + 0xc) = 0x80000000;
  (**(code **)(*(longlong *)param_1[2] + 0x10))((longlong *)param_1[2],param_1[6],0x28);
  param_1[6] = 0;
  (*(code *)**(undefined8 **)param_1[4])((undefined8 *)param_1[4],0);
  (**(code **)(*(longlong *)param_1[2] + 0x10))((longlong *)param_1[2],param_1[4],0x10);
  param_1[4] = 0;
  return;
}



// FUNCTION 144be8360 FUN_144be8360 body=64 status=ok
// SIG undefined FUN_144be8360(void)

void FUN_144be8360(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong local_res8 [4];
  
  local_res8[0] = *param_2 + 0x3fU & 0xffffffffffffffc0;
  if ((local_res8[0] <= *(ulonglong *)(param_1 + 0x28)) &&
     (uVar1 = *(longlong *)(param_1 + 0x38) + local_res8[0], uVar1 <= *(ulonglong *)(param_1 + 0x40)
     )) {
    *(ulonglong *)(param_1 + 0x38) = uVar1;
    return;
  }
  FUN_144b454a0(param_1,local_res8);
  return;
}



// FUNCTION 144be83a0 FUN_144be83a0 body=109 status=ok
// SIG undefined FUN_144be83a0(void)

void FUN_144be83a0(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulonglong *)(param_1 + 0x28) < uVar2) || (uVar2 + param_2 != *(longlong *)(param_1 + 0x38))
     ) {
    if (param_2 != 0) {
      if (*(ulonglong *)(param_1 + 0x28) < uVar2 + 0x40) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 0x20);
        *piVar1 = *piVar1 + -1;
                    /* WARNING: Could not recover jumptable at 0x000144be8408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
                  (*(longlong **)(param_1 + 0x10),param_2 - *(int *)(param_2 + -4),uVar2 + 0x44);
        return;
      }
      if (uVar2 + param_2 == *(longlong *)(param_1 + 0x38)) {
        *(longlong *)(param_1 + 0x38) = param_2;
        FUN_144be8430();
        return;
      }
      FUN_144be85a0(param_1,param_2,uVar2);
      return;
    }
  }
  else {
    *(longlong *)(param_1 + 0x38) = param_2;
    if (*(longlong *)(param_1 + 0x48) == param_2) {
      FUN_144be8430();
      return;
    }
  }
  return;
}



// FUNCTION 144be8410 FUN_144be8410 body=11 status=ok
// SIG undefined FUN_144be8410(void)

void FUN_144be8410(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144be8417. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))();
  return;
}



// FUNCTION 144be8420 FUN_144be8420 body=11 status=ok
// SIG undefined FUN_144be8420(void)

void FUN_144be8420(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144be8427. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))();
  return;
}



// FUNCTION 144be8430 FUN_144be8430 body=287 status=ok
// SIG undefined FUN_144be8430(void)

void FUN_144be8430(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = *(longlong *)(param_1 + 0x38);
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x18) + -1;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x30) + 8) + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar5 = lVar7 * 0x18;
    do {
      lVar2 = **(longlong **)(param_1 + 0x30);
      if (*(longlong *)(lVar5 + 8 + lVar2) != lVar8) break;
      lVar8 = *(longlong *)(lVar5 + lVar2);
      iVar6 = *(int *)(lVar5 + 0x10 + lVar2);
      lVar5 = lVar5 + -0x18;
      plVar3 = *(longlong **)(param_1 + 0x30) + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  lVar7 = *(longlong *)(param_1 + 0x30);
  for (lVar5 = (longlong)(*(int *)(lVar7 + 0x18) + -1); iVar6 < lVar5; lVar5 = lVar5 + -1) {
    if (*(longlong *)(param_1 + 0x50) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 0x20);
      *piVar1 = *piVar1 + -1;
    }
    lVar7 = *(longlong *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(*(longlong *)(lVar7 + 0x10) + lVar5 * 8);
  }
  iVar6 = iVar6 + 1;
  if ((*(int *)(lVar7 + 0x18) < iVar6) || (iVar6 < *(int *)(lVar7 + 0x18))) {
    *(int *)(lVar7 + 0x18) = iVar6;
  }
  plVar3 = *(longlong **)(param_1 + 0x30);
  *(longlong *)(param_1 + 0x38) = lVar8;
  if ((int)plVar3[3] == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(longlong *)(plVar3[2] + -8 + (longlong)(int)plVar3[3] * 8) +
            *(longlong *)(param_1 + 0x28);
  }
  *(longlong *)(param_1 + 0x40) = lVar8;
  if ((int)plVar3[1] == 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x48) =
         *(undefined8 *)(*plVar3 + -0x10 + (longlong)(int)plVar3[1] * 0x18);
  }
  return;
}



// FUNCTION 144be8550 FUN_144be8550 body=77 status=ok
// SIG undefined FUN_144be8550(void)

void FUN_144be8550(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  
  if (param_2 == 0) {
    return;
  }
  if (param_3 + 0x40U <= *(ulonglong *)(param_1 + 0x28)) {
    if ((param_3 + 0x3fU & 0xffffffffffffffc0) + param_2 == *(longlong *)(param_1 + 0x38)) {
      *(longlong *)(param_1 + 0x38) = param_2;
      FUN_144be8430();
      return;
    }
    FUN_144be85a0();
    return;
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 0x20);
  *piVar1 = *piVar1 + -1;
                    /* WARNING: Could not recover jumptable at 0x000144be8598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
            (*(longlong **)(param_1 + 0x10),param_2 - *(int *)(param_2 + -4),param_3 + 0x44);
  return;
}



// FUNCTION 144be85a0 FUN_144be85a0 body=1004 status=ok
// SIG undefined FUN_144be85a0(void)

void FUN_144be85a0(longlong param_1,ulonglong param_2,longlong param_3)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  int local_res8;
  
  plVar5 = *(longlong **)(param_1 + 0x30);
  iVar15 = (int)plVar5[3] + -1;
  iVar12 = -1;
  if (-1 < iVar15) {
    lVar14 = (longlong)iVar15;
    plVar8 = (longlong *)(plVar5[2] + lVar14 * 8);
    do {
      iVar12 = iVar15;
      if (param_2 - *plVar8 < *(ulonglong *)(param_1 + 0x28)) break;
      iVar15 = iVar15 + -1;
      plVar8 = plVar8 + -1;
      lVar14 = lVar14 + -1;
      iVar12 = -1;
    } while (-1 < lVar14);
  }
  uVar2 = param_2 + param_3;
  iVar15 = (int)plVar5[1] + -1;
  local_res8 = 0;
  lVar14 = 0xffffffff;
  if (-1 < iVar15) {
    puVar9 = (ulonglong *)(*plVar5 + (longlong)iVar15 * 0x18);
    do {
      if ((int)puVar9[2] == iVar12) {
        iVar16 = iVar15;
        if ((int)lVar14 != -1) {
          iVar16 = (int)lVar14;
        }
        lVar14 = (longlong)iVar16;
        if (uVar2 == *puVar9) {
          *puVar9 = param_2;
        }
        else {
          if (param_2 != puVar9[1]) {
            if (*puVar9 < param_2) goto LAB_144be8674;
            goto LAB_144be871c;
          }
          puVar9[1] = uVar2;
        }
        if ((iVar16 == -1) || (iVar12 == (int)(*(longlong **)(param_1 + 0x30))[3] + -1))
        goto LAB_144be893e;
        lVar10 = **(longlong **)(param_1 + 0x30);
        iVar6 = iVar16 + -1;
        lVar13 = *(longlong *)(lVar10 + lVar14 * 0x18);
        iVar15 = iVar16;
        if (iVar6 < 0) goto LAB_144be8797;
        plVar5 = (longlong *)(lVar10 + (longlong)iVar6 * 0x18);
        goto LAB_144be8771;
      }
      if ((int)puVar9[2] < iVar12) {
LAB_144be8674:
        local_res8 = iVar15 + 1;
        break;
      }
LAB_144be871c:
      puVar9 = puVar9 + -3;
      iVar15 = iVar15 + -1;
    } while (-1 < iVar15);
  }
  iVar15 = (int)plVar5[1] + 1;
  iVar16 = (int)plVar5[1] - local_res8;
  if ((int)(*(uint *)((longlong)plVar5 + 0xc) & 0x7fffffff) < iVar15) {
    FUN_144be8a90(plVar5,*(undefined8 *)(param_1 + 0x20),(longlong)iVar15);
  }
  puVar3 = (ulonglong *)(*plVar5 + (longlong)local_res8 * 0x18);
  puVar9 = puVar3 + 3;
  if (iVar16 != 0) {
    if (puVar9 < puVar3) {
      if ((longlong)iVar16 * 0x18 != 0) {
        lVar10 = (longlong)puVar3 - (longlong)puVar9;
        lVar14 = ((longlong)iVar16 * 0x18 - 1U >> 3) + 1;
        do {
          *puVar9 = *(ulonglong *)(lVar10 + (longlong)puVar9);
          puVar9 = puVar9 + 1;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
    }
    else if (puVar9 != puVar3) {
      FUN_144bfb260(puVar9,puVar3,(longlong)iVar16 * 0x18);
    }
  }
  *(int *)(plVar5 + 1) = iVar15;
  *puVar3 = param_2;
  puVar3[1] = uVar2;
  *(int *)(puVar3 + 2) = iVar12;
  goto LAB_144be893e;
  while( true ) {
    if (plVar5[1] != lVar13) goto LAB_144be893e;
    lVar13 = *plVar5;
    plVar5 = plVar5 + -3;
    iVar6 = iVar7 + -1;
    iVar15 = iVar7;
    if (iVar7 + -1 < 0) break;
LAB_144be8771:
    iVar7 = iVar6;
    if ((int)plVar5[2] != iVar12) break;
  }
  if (iVar15 != -1) {
LAB_144be8797:
    lVar10 = (longlong)iVar12 * 8;
    lVar13 = **(longlong **)(param_1 + 0x30);
    puVar9 = (ulonglong *)(lVar13 + (longlong)iVar15 * 0x18);
    if (*puVar9 ==
        (*(longlong *)((*(longlong **)(param_1 + 0x30))[2] + lVar10) + 0x3fU & 0xffffffffffffffc0))
    {
      if (0 < iVar15) {
        puVar9[-2] = *(ulonglong *)(lVar13 + 8 + lVar14 * 0x18);
      }
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 0x20);
      *piVar1 = *piVar1 + -1;
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))
                (*(longlong **)(param_1 + 0x18),
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) + lVar10),
                 *(undefined8 *)(param_1 + 0x28));
      lVar14 = *(longlong *)(param_1 + 0x30);
      if (*(longlong *)(param_1 + 0x50) == *(longlong *)(lVar10 + *(longlong *)(lVar14 + 0x10))) {
        *(undefined8 *)(param_1 + 0x50) = 0;
      }
      *(int *)(lVar14 + 0x18) = *(int *)(lVar14 + 0x18) + -1;
      puVar11 = (undefined8 *)(*(longlong *)(lVar14 + 0x10) + lVar10);
      iVar6 = *(int *)(lVar14 + 0x18) - iVar12;
      if (((iVar6 != 0) && (puVar11 != puVar11 + 1)) && (lVar14 = (longlong)iVar6 * 8, lVar14 != 0))
      {
        lVar14 = (lVar14 - 1U >> 3) + 1;
        do {
          *puVar11 = puVar11[1];
          puVar11 = puVar11 + 1;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      plVar5 = *(longlong **)(param_1 + 0x30);
      *(int *)(plVar5 + 1) = (int)plVar5[1] + (-1 - (iVar16 - iVar15));
      puVar4 = (undefined8 *)(*plVar5 + ((longlong)(iVar16 - iVar15) + 1 + (longlong)iVar15) * 0x18)
      ;
      puVar11 = (undefined8 *)(*plVar5 + (longlong)iVar15 * 0x18);
      iVar15 = (int)plVar5[1] - iVar15;
      if (((iVar15 != 0) && (puVar11 != puVar4)) && (lVar14 = (longlong)iVar15 * 0x18, lVar14 != 0))
      {
        lVar10 = (longlong)puVar4 - (longlong)puVar11;
        lVar14 = (lVar14 - 1U >> 3) + 1;
        do {
          *puVar11 = *(undefined8 *)(lVar10 + (longlong)puVar11);
          puVar11 = puVar11 + 1;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      iVar15 = *(int *)(*(longlong *)(param_1 + 0x30) + 8) + -1;
      lVar14 = (longlong)iVar15;
      if (-1 < iVar15) {
        lVar10 = lVar14 * 0x18;
        do {
          iVar15 = *(int *)(lVar10 + 0x10 + **(longlong **)(param_1 + 0x30));
          if (iVar15 <= iVar12) break;
          *(int *)(lVar10 + 0x10 + **(longlong **)(param_1 + 0x30)) = iVar15 + -1;
          lVar10 = lVar10 + -0x18;
          lVar14 = lVar14 + -1;
        } while (-1 < lVar14);
      }
    }
  }
LAB_144be893e:
  iVar12 = (int)(*(longlong **)(param_1 + 0x30))[1];
  if (iVar12 == 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x48) =
       *(undefined8 *)(**(longlong **)(param_1 + 0x30) + -0x10 + (longlong)iVar12 * 0x18);
  return;
}



// FUNCTION 144be8990 FUN_144be8990 body=87 status=ok
// SIG undefined FUN_144be8990(void)

undefined8 FUN_144be8990(undefined8 param_1,ulonglong param_2)

{
  FUN_144be8210();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 144be89f0 FUN_144be89f0 body=55 status=ok
// SIG undefined FUN_144be89f0(void)

undefined8 FUN_144be89f0(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong local_res10 [3];
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),local_res10)
    ;
    *param_3 = local_res10[0];
    return uVar1;
  }
  return 0;
}



// FUNCTION 144be8a30 FUN_144be8a30 body=17 status=ok
// SIG undefined FUN_144be8a30(void)

void FUN_144be8a30(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000144be8a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 144be8a50 FUN_144be8a50 body=61 status=ok
// SIG undefined FUN_144be8a50(void)

undefined8 FUN_144be8a50(undefined8 param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144be8a90 FUN_144be8a90 body=262 status=ok
// SIG undefined FUN_144be8a90(void)

ulonglong FUN_144be8a90(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  uVar6 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar3 = uVar6 * 2;
  uVar4 = param_3;
  if (param_3 < uVar3) {
    uVar4 = uVar3;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x18,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0x18);
  uVar3 = uVar4 * 0x18 + 0x18;
  uVar5 = uVar4;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0x18;
    uVar5 = uVar4 + 1;
    if (uVar3 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0x18;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0x18;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar6 * 0x18);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return uVar3;
}



// FUNCTION 144be8ba0 FUN_144be8ba0 body=247 status=ok
// SIG undefined FUN_144be8ba0(void)

void FUN_144be8ba0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar1 = uVar5 * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 * 8);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144be8ca0 FUN_144be8ca0 body=750 status=ok
// SIG undefined FUN_144be8ca0(void)

void FUN_144be8ca0(float *param_1,float *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  ulonglong local_a8;
  uint local_a0;
  uint local_9c;
  float *local_98;
  int local_90;
  undefined4 local_8c;
  undefined1 local_88 [24];
  float *local_70;
  int local_68;
  uint local_64;
  ulonglong local_60;
  uint local_58;
  uint local_54;
  
  uVar11 = 0;
  fVar15 = ABS(*param_2);
  fVar16 = ABS(param_2[1]);
  fVar17 = ABS(param_2[2]);
  fVar18 = ABS(param_2[3]);
  uVar14 = 0;
  local_98 = (float *)0x0;
  local_90 = 0;
  local_8c = 0x80000000;
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 0x80000000;
  local_res18 = param_3;
  FUN_1418055da(&local_98,&PTR_vftable_14c6e47a0,8);
  if (local_90 != 8) {
    local_90 = 8;
  }
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  *local_98 = fVar15 + *param_1;
  local_98[1] = fVar16 + fVar4;
  local_98[2] = fVar17 + fVar5;
  local_98[3] = fVar18 + fVar6;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  local_98[4] = -fVar15 + *param_1;
  local_98[5] = fVar16 + fVar4;
  local_98[6] = fVar17 + fVar5;
  local_98[7] = fVar18 + fVar6;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  local_98[8] = -fVar15 + *param_1;
  local_98[9] = -fVar16 + fVar4;
  local_98[10] = fVar17 + fVar5;
  local_98[0xb] = fVar18 + fVar6;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  local_98[0xc] = fVar15 + *param_1;
  local_98[0xd] = -fVar16 + fVar4;
  local_98[0xe] = fVar17 + fVar5;
  local_98[0xf] = fVar18 + fVar6;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  local_98[0x10] = fVar15 + *param_1;
  local_98[0x11] = fVar16 + fVar4;
  local_98[0x12] = -fVar17 + fVar5;
  local_98[0x13] = fVar18 + fVar6;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  local_98[0x14] = -fVar15 + *param_1;
  local_98[0x15] = fVar16 + fVar4;
  local_98[0x16] = -fVar17 + fVar5;
  local_98[0x17] = fVar18 + fVar6;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  local_98[0x18] = -fVar15 + *param_1;
  local_98[0x19] = -fVar16 + fVar4;
  local_98[0x1a] = -fVar17 + fVar5;
  local_98[0x1b] = fVar18 + fVar6;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  puVar8 = &DAT_14c6da234;
  local_98[0x1c] = fVar15 + *param_1;
  local_98[0x1d] = -fVar16 + fVar4;
  local_98[0x1e] = -fVar17 + fVar5;
  local_98[0x1f] = fVar18 + fVar6;
  uVar13 = uVar11;
  do {
    uVar9 = (uint)uVar11 + 1;
    uVar10 = (uint)uVar11;
    if ((int)(uVar14 & 0x7fffffff) < (int)uVar9) {
      FUN_141805702(&local_a8,&PTR_vftable_14c6e47a0,(longlong)(int)uVar9);
      uVar13 = local_a8;
      uVar14 = local_9c;
      uVar10 = local_a0;
    }
    uVar11 = (ulonglong)uVar9;
    puVar12 = (undefined4 *)((longlong)(int)uVar10 * 0x10 + uVar13);
    puVar12[3] = param_4;
    uVar2 = puVar8[1];
    uVar3 = *puVar8;
    puVar1 = puVar8 + -1;
    puVar8 = puVar8 + 4;
    *puVar12 = *puVar1;
    puVar12[1] = uVar3;
    puVar12[2] = uVar2;
    local_a0 = uVar9;
  } while ((longlong)puVar8 < 0x14c6da2f4);
  FUN_144b3e890(local_88);
  FUN_147e4a87c(&local_70,&PTR_vftable_14c6e47a0);
  FUN_147e4a87c(&local_98,&PTR_vftable_14c6e47a0);
  uVar14 = local_64;
  pfVar7 = local_70;
  local_70 = local_98;
  local_68 = local_90;
  local_64 = local_8c;
  FUN_144be8f90(&local_60,&PTR_vftable_14c6e47a0);
  FUN_144be8f90(&local_a8,&PTR_vftable_14c6e47a0);
  uVar10 = local_54;
  uVar11 = local_60;
  local_60 = local_a8;
  local_58 = local_a0;
  local_54 = local_9c;
  FUN_144bdea70(local_res18,local_res10,local_88,0);
  FUN_144b3e940(local_88);
  if ((-1 < (int)uVar10) && (uVar11 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,uVar11,(ulonglong)(uVar10 & 0x7fffffff) << 4);
  }
  if ((-1 < (int)uVar14) && (pfVar7 != (float *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,pfVar7,(ulonglong)(uVar14 & 0x7fffffff) << 4);
  }
  return;
}



// FUNCTION 144be8f90 FUN_144be8f90 body=103 status=ok
// SIG undefined FUN_144be8f90(void)

void FUN_144be8f90(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *param_1 = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return;
    }
    uVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) << 4);
    FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 4);
    *param_1 = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 144be9000 FUN_144be9000 body=99 status=ok
// SIG undefined FUN_144be9000(void)

void FUN_144be9000(longlong *param_1,longlong param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    lVar2 = 0;
    do {
      uVar1 = (**(code **)(*param_1 + 8))(param_1,param_4);
      *(undefined8 *)(param_2 + lVar2 * 8) = uVar1;
      lVar2 = lVar2 + 1;
    } while (lVar2 < param_3);
  }
  return;
}



// FUNCTION 144be9070 FUN_144be9070 body=99 status=ok
// SIG undefined FUN_144be9070(void)

void FUN_144be9070(longlong *param_1,longlong param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if (0 < param_3) {
    lVar1 = 0;
    do {
      (**(code **)(*param_1 + 0x10))(param_1,*(undefined8 *)(param_2 + lVar1 * 8),param_4);
      lVar1 = lVar1 + 1;
    } while (lVar1 < param_3);
  }
  return;
}



// FUNCTION 144be90e0 FUN_144be90e0 body=5 status=ok
// SIG undefined FUN_144be90e0(void)

void FUN_144be90e0(undefined4 param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xe8);
  if (lVar1 != 0) {
    FUN_144bda9a0(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 144be90f0 FUN_144be90f0 body=296 status=ok
// SIG undefined FUN_144be90f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144be90f0(longlong param_1,int param_2,undefined1 (*param_3) [16],uint *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  auVar8._4_4_ = uRam000000014c6dae84;
  auVar8._0_4_ = _DAT_14c6dae80;
  auVar8._8_4_ = uRam000000014c6dae88;
  auVar8._12_4_ = uRam000000014c6dae8c;
  *param_3 = auVar8;
  auVar9._0_8_ = CONCAT44(uRam000000014c6dae84,_DAT_14c6dae80) ^ 0x8000000080000000;
  auVar9._8_4_ = uRam000000014c6dae88 ^ 0x80000000;
  auVar9._12_4_ = uRam000000014c6dae8c ^ 0x80000000;
  param_3[1] = auVar9;
  if (0 < param_2) {
    *param_4 = *param_4 + 0x2d818f9;
    if (*param_4 < 0x2d818f9) {
      FUN_144be90e0(0x76c1b08a);
    }
    uVar6 = 0;
    uVar7 = uVar6;
    if (param_2 != 0) {
      do {
        iVar4 = param_2 - (int)uVar7;
        if (0x1e89 < iVar4) {
          iVar4 = 0x1e89;
        }
        lVar5 = (longlong)(iVar4 + (int)uVar7);
        if ((longlong)uVar6 < lVar5) {
          auVar8 = *param_3;
          auVar9 = param_3[1];
          lVar3 = uVar6 << 4;
          do {
            auVar8 = minps(auVar8,*(undefined1 (*) [16])(lVar3 + param_1));
            uVar7 = (ulonglong)((int)uVar7 + 1);
            uVar6 = uVar6 + 1;
            *param_3 = auVar8;
            auVar9 = maxps(auVar9,*(undefined1 (*) [16])(lVar3 + param_1));
            param_3[1] = auVar9;
            lVar3 = lVar3 + 0x10;
          } while ((longlong)uVar6 < lVar5);
        }
        *param_4 = *param_4 + iVar4 * 0x2188c;
        if (*param_4 < (uint)(iVar4 * 0x2188c)) {
          FUN_144be90e0(0x76c1b08a);
        }
      } while (uVar6 != (longlong)param_2);
    }
    uVar1 = *(undefined4 *)(*param_3 + 4);
    uVar2 = *(undefined4 *)(*param_3 + 8);
    *(undefined4 *)*param_3 = *(undefined4 *)*param_3;
    *(undefined4 *)(*param_3 + 4) = uVar1;
    *(undefined4 *)(*param_3 + 8) = uVar2;
    *(undefined4 *)(*param_3 + 0xc) = 0;
    uVar1 = *(undefined4 *)(param_3[1] + 4);
    uVar2 = *(undefined4 *)(param_3[1] + 8);
    *(undefined4 *)param_3[1] = *(undefined4 *)param_3[1];
    *(undefined4 *)(param_3[1] + 4) = uVar1;
    *(undefined4 *)(param_3[1] + 8) = uVar2;
    *(undefined4 *)(param_3[1] + 0xc) = 0;
  }
  return;
}



// FUNCTION 144be9220 FUN_144be9220 body=243 status=ok
// SIG undefined FUN_144be9220(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144be9220(float *param_1,float *param_2,float *param_3,float *param_4)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined4 in_EAX;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar11 = *param_2;
  fVar12 = param_2[1];
  fVar13 = param_2[2];
  fVar8 = param_2[3];
  fVar4 = param_2[4];
  fVar5 = param_2[5];
  fVar6 = param_2[6];
  auVar1._4_4_ = -(uint)(fVar5 < fVar12);
  auVar1._0_4_ = -(uint)(fVar4 < fVar11);
  auVar1._8_4_ = -(uint)(fVar6 < fVar13);
  auVar1._12_4_ = -(uint)(param_2[7] < fVar8);
  uVar3 = movmskps(in_EAX,auVar1);
  if ((uVar3 & 7) != 0) {
    *param_4 = fVar11;
    param_4[1] = fVar12;
    param_4[2] = fVar13;
    param_4[3] = fVar8;
    uVar2 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_4 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_4 + 6) = uVar2;
    return;
  }
  fVar8 = (fVar11 + fVar4) * _DAT_14c6dad90;
  fVar9 = (fVar12 + fVar5) * fRam000000014c6dad94;
  fVar10 = (fVar13 + fVar6) * fRam000000014c6dad98;
  fVar11 = (fVar4 - fVar11) * _DAT_14c6dad90;
  fVar12 = (fVar5 - fVar12) * fRam000000014c6dad94;
  fVar13 = (fVar6 - fVar13) * fRam000000014c6dad98;
  fVar4 = ABS(fVar11 * *param_1) + ABS(fVar12 * param_1[4]) + ABS(fVar13 * param_1[8]) + *param_3;
  fVar5 = ABS(fVar11 * param_1[1]) + ABS(fVar12 * param_1[5]) +
          ABS(fVar13 * param_1[9]) + param_3[1];
  fVar6 = ABS(fVar11 * param_1[2]) + ABS(fVar12 * param_1[6]) +
          ABS(fVar13 * param_1[10]) + param_3[2];
  fVar7 = ABS(fVar11 * param_1[3]) + ABS(fVar12 * param_1[7]) +
          ABS(fVar13 * param_1[0xb]) + param_3[3];
  fVar11 = fVar8 * *param_1 + fVar9 * param_1[4] + fVar10 * param_1[8] + param_1[0xc];
  fVar12 = fVar8 * param_1[1] + fVar9 * param_1[5] + fVar10 * param_1[9] + param_1[0xd];
  fVar13 = fVar8 * param_1[2] + fVar9 * param_1[6] + fVar10 * param_1[10] + param_1[0xe];
  fVar8 = fVar8 * param_1[3] + fVar9 * param_1[7] + fVar10 * param_1[0xb] + param_1[0xf];
  param_4[4] = fVar11 + fVar4;
  param_4[5] = fVar12 + fVar5;
  param_4[6] = fVar13 + fVar6;
  param_4[7] = fVar8 + fVar7;
  *param_4 = -fVar4 + fVar11;
  param_4[1] = -fVar5 + fVar12;
  param_4[2] = -fVar6 + fVar13;
  param_4[3] = -fVar7 + fVar8;
  return;
}



// FUNCTION 144be9320 FUN_144be9320 body=239 status=ok
// SIG undefined FUN_144be9320(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144be9320(float *param_1,float *param_2,float *param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined4 in_EAX;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar11 = *param_2;
  fVar12 = param_2[1];
  fVar13 = param_2[2];
  fVar8 = param_2[3];
  fVar4 = param_2[4];
  fVar5 = param_2[5];
  fVar6 = param_2[6];
  auVar1._4_4_ = -(uint)(fVar5 < fVar12);
  auVar1._0_4_ = -(uint)(fVar4 < fVar11);
  auVar1._8_4_ = -(uint)(fVar6 < fVar13);
  auVar1._12_4_ = -(uint)(param_2[7] < fVar8);
  uVar3 = movmskps(in_EAX,auVar1);
  if ((uVar3 & 7) != 0) {
    *param_3 = fVar11;
    param_3[1] = fVar12;
    param_3[2] = fVar13;
    param_3[3] = fVar8;
    uVar2 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_3 + 6) = uVar2;
    return;
  }
  fVar8 = (fVar11 + fVar4) * _DAT_14c6dad90;
  fVar9 = (fVar12 + fVar5) * fRam000000014c6dad94;
  fVar10 = (fVar13 + fVar6) * fRam000000014c6dad98;
  fVar11 = (fVar4 - fVar11) * _DAT_14c6dad90;
  fVar12 = (fVar5 - fVar12) * fRam000000014c6dad94;
  fVar13 = (fVar6 - fVar13) * fRam000000014c6dad98;
  fVar4 = ABS(fVar11 * *param_1) + ABS(fVar12 * param_1[4]) + ABS(fVar13 * param_1[8]);
  fVar5 = ABS(fVar11 * param_1[1]) + ABS(fVar12 * param_1[5]) + ABS(fVar13 * param_1[9]);
  fVar6 = ABS(fVar11 * param_1[2]) + ABS(fVar12 * param_1[6]) + ABS(fVar13 * param_1[10]);
  fVar7 = ABS(fVar11 * param_1[3]) + ABS(fVar12 * param_1[7]) + ABS(fVar13 * param_1[0xb]);
  fVar11 = fVar8 * *param_1 + param_1[0xc] + fVar9 * param_1[4] + fVar10 * param_1[8];
  fVar12 = fVar8 * param_1[1] + param_1[0xd] + fVar9 * param_1[5] + fVar10 * param_1[9];
  fVar13 = fVar8 * param_1[2] + param_1[0xe] + fVar9 * param_1[6] + fVar10 * param_1[10];
  fVar8 = fVar8 * param_1[3] + param_1[0xf] + fVar9 * param_1[7] + fVar10 * param_1[0xb];
  param_3[4] = fVar11 + fVar4;
  param_3[5] = fVar12 + fVar5;
  param_3[6] = fVar13 + fVar6;
  param_3[7] = fVar8 + fVar7;
  *param_3 = -fVar4 + fVar11;
  param_3[1] = -fVar5 + fVar12;
  param_3[2] = -fVar6 + fVar13;
  param_3[3] = -fVar7 + fVar8;
  return;
}



// FUNCTION 144be9410 FUN_144be9410 body=239 status=ok
// SIG undefined FUN_144be9410(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144be9410(float *param_1,float *param_2,float *param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined4 in_EAX;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar11 = *param_2;
  fVar12 = param_2[1];
  fVar13 = param_2[2];
  fVar8 = param_2[3];
  fVar4 = param_2[4];
  fVar5 = param_2[5];
  fVar6 = param_2[6];
  auVar1._4_4_ = -(uint)(fVar5 < fVar12);
  auVar1._0_4_ = -(uint)(fVar4 < fVar11);
  auVar1._8_4_ = -(uint)(fVar6 < fVar13);
  auVar1._12_4_ = -(uint)(param_2[7] < fVar8);
  uVar3 = movmskps(in_EAX,auVar1);
  if ((uVar3 & 7) != 0) {
    *param_3 = fVar11;
    param_3[1] = fVar12;
    param_3[2] = fVar13;
    param_3[3] = fVar8;
    uVar2 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_3 + 6) = uVar2;
    return;
  }
  fVar8 = (fVar11 + fVar4) * _DAT_14c6dad90;
  fVar9 = (fVar12 + fVar5) * fRam000000014c6dad94;
  fVar10 = (fVar13 + fVar6) * fRam000000014c6dad98;
  fVar11 = (fVar4 - fVar11) * _DAT_14c6dad90;
  fVar12 = (fVar5 - fVar12) * fRam000000014c6dad94;
  fVar13 = (fVar6 - fVar13) * fRam000000014c6dad98;
  fVar4 = ABS(fVar11 * *param_1) + ABS(fVar12 * param_1[4]) + ABS(fVar13 * param_1[8]);
  fVar5 = ABS(fVar11 * param_1[1]) + ABS(fVar12 * param_1[5]) + ABS(fVar13 * param_1[9]);
  fVar6 = ABS(fVar11 * param_1[2]) + ABS(fVar12 * param_1[6]) + ABS(fVar13 * param_1[10]);
  fVar7 = ABS(fVar11 * param_1[3]) + ABS(fVar12 * param_1[7]) + ABS(fVar13 * param_1[0xb]);
  fVar11 = fVar8 * *param_1 + fVar9 * param_1[4] + fVar10 * param_1[8] + param_1[0xc];
  fVar12 = fVar8 * param_1[1] + fVar9 * param_1[5] + fVar10 * param_1[9] + param_1[0xd];
  fVar13 = fVar8 * param_1[2] + fVar9 * param_1[6] + fVar10 * param_1[10] + param_1[0xe];
  fVar8 = fVar8 * param_1[3] + fVar9 * param_1[7] + fVar10 * param_1[0xb] + param_1[0xf];
  param_3[4] = fVar11 + fVar4;
  param_3[5] = fVar12 + fVar5;
  param_3[6] = fVar13 + fVar6;
  param_3[7] = fVar8 + fVar7;
  *param_3 = -fVar4 + fVar11;
  param_3[1] = -fVar5 + fVar12;
  param_3[2] = -fVar6 + fVar13;
  param_3[3] = -fVar7 + fVar8;
  return;
}



// FUNCTION 144be9500 FUN_144be9500 body=277 status=ok
// SIG undefined FUN_144be9500(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144be9500(longlong param_1,float *param_2,float *param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined4 in_EAX;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  auVar1._4_4_ = -(uint)(param_2[5] < fVar4);
  auVar1._0_4_ = -(uint)(param_2[4] < *param_2);
  auVar1._8_4_ = -(uint)(param_2[6] < fVar5);
  auVar1._12_4_ = -(uint)(param_2[7] < fVar6);
  uVar3 = movmskps(in_EAX,auVar1);
  if ((uVar3 & 7) == 0) {
    FUN_144b45650(&local_68,param_1);
    fVar11 = (*param_2 + param_2[4]) * _DAT_14c6dad90;
    fVar12 = (param_2[1] + param_2[5]) * fRam000000014c6dad94;
    fVar13 = (param_2[2] + param_2[6]) * fRam000000014c6dad98;
    fVar4 = ABS((param_2[4] - *param_2) * _DAT_14c6dad90);
    fVar5 = ABS((param_2[5] - param_2[1]) * fRam000000014c6dad94);
    fVar6 = ABS((param_2[6] - param_2[2]) * fRam000000014c6dad98);
    fVar7 = ABS(fVar5 * local_58) + ABS(fVar4 * local_68) + ABS(fVar6 * local_48);
    fVar8 = ABS(fVar5 * fStack_54) + ABS(fVar4 * fStack_64) + ABS(fVar6 * fStack_44);
    fVar9 = ABS(fVar5 * fStack_50) + ABS(fVar4 * fStack_60) + ABS(fVar6 * fStack_40);
    fVar10 = ABS(fVar5 * fStack_4c) + ABS(fVar4 * fStack_5c) + ABS(fVar6 * fStack_3c);
    fVar4 = fVar12 * local_58 + fVar11 * local_68 + fVar13 * local_48 + *(float *)(param_1 + 0x10);
    fVar5 = fVar12 * fStack_54 + fVar11 * fStack_64 + fVar13 * fStack_44 +
            *(float *)(param_1 + 0x14);
    fVar6 = fVar12 * fStack_50 + fVar11 * fStack_60 + fVar13 * fStack_40 +
            *(float *)(param_1 + 0x18);
    fVar11 = fVar12 * fStack_4c + fVar11 * fStack_5c + fVar13 * fStack_3c +
             *(float *)(param_1 + 0x1c);
    param_3[4] = fVar4 + fVar7;
    param_3[5] = fVar5 + fVar8;
    param_3[6] = fVar6 + fVar9;
    param_3[7] = fVar11 + fVar10;
    *param_3 = -fVar7 + fVar4;
    param_3[1] = -fVar8 + fVar5;
    param_3[2] = -fVar9 + fVar6;
    param_3[3] = -fVar10 + fVar11;
  }
  else {
    *param_3 = *param_2;
    param_3[1] = fVar4;
    param_3[2] = fVar5;
    param_3[3] = fVar6;
    uVar2 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_3 + 6) = uVar2;
  }
  return;
}



// FUNCTION 144be9620 FUN_144be9620 body=51 status=ok
// SIG undefined FUN_144be9620(void)

void FUN_144be9620(undefined8 param_1,uint param_2)

{
  if (0x7fffffff < param_2) {
    FUN_144bfc170(0x159079fc,"Container\\Array\\hkArrayUtil.cpp",0x12,"Invalid requestedCapacity {}"
                  ,param_2);
  }
  return;
}



// FUNCTION 144be9660 FUN_144be9660 body=71 status=ok
// SIG undefined FUN_144be9660(void)

undefined8 * FUN_144be9660(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 144be96b0 FUN_144be96b0 body=436 status=ok
// SIG undefined FUN_144be96b0(void)

void FUN_144be96b0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  int local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  int local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  lVar1 = *param_1;
  iVar7 = -1;
  if (*(longlong *)(lVar1 + 0x18) != 0) {
    FUN_144f5a1e0(&local_48);
    iVar7 = (iStack_40 - local_48) + 1;
    local_38 = local_48;
    uStack_34 = uStack_44;
    iStack_30 = iStack_40;
    uStack_2c = uStack_3c;
    (**(code **)(lVar1 + 0x18))(&local_38,0x74,*(undefined8 *)(lVar1 + 0x30));
  }
  if ((param_1[3] != 0) &&
     (((ulonglong)param_1[2] <= (ulonglong)param_1[3] ||
      (cVar3 = FUN_144bea600(param_1,0x20), cVar3 != '\0')))) {
    if (iVar7 < 0) {
      iVar7 = FUN_144bfbbb0(param_2);
      iVar7 = iVar7 + 1;
    }
    puVar5 = (undefined8 *)param_1[2];
    lVar6 = (longlong)iVar7;
    if (puVar5 != (undefined8 *)0x0) {
      uVar4 = (longlong)puVar5 + lVar6 + 0x1f & 0xfffffffffffffff8;
      if (param_1[3] + 0x20U <= uVar4) {
        cVar3 = FUN_144bea600(param_1,(int)uVar4 - (int)puVar5);
        if (cVar3 == '\0') goto LAB_144be9854;
        puVar5 = (undefined8 *)param_1[2];
        uVar4 = (longlong)puVar5 + lVar6 + 0x1f & 0xfffffffffffffff8;
      }
      param_1[2] = uVar4;
      if (puVar5 != (undefined8 *)0x0) {
        uVar2 = *param_3;
        *puVar5 = uVar2;
        *(short *)(puVar5 + 2) = (short)iVar7;
        uVar4 = rdtsc();
        puVar5[1] = CONCAT44((int)((ulonglong)uVar2 >> 0x20),(int)uVar4) |
                    uVar4 & 0xffffffff00000000;
        FUN_144b3d470(puVar5 + 3,param_2,lVar6);
        if ((((*(byte *)(lVar1 + 0x40) & 1) != 0) && (param_1[6] != 0)) &&
           (puVar5 = (undefined8 *)param_1[2], puVar5 != (undefined8 *)0x0)) {
          uVar4 = (longlong)puVar5 + 0x17U & 0xfffffffffffffff8;
          if (param_1[3] + 0x20U <= uVar4) {
            cVar3 = FUN_144bea600(param_1,(int)uVar4 - (int)puVar5);
            if (cVar3 == '\0') goto LAB_144be9854;
            puVar5 = (undefined8 *)param_1[2];
            uVar4 = (longlong)puVar5 + 0x17U & 0xfffffffffffffff8;
          }
          param_1[2] = uVar4;
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = &DAT_149982548;
            puVar5[1] = *(undefined8 *)(param_1[6] + 8);
          }
        }
      }
    }
  }
LAB_144be9854:
  *(int *)((longlong)param_1 + 0x6c) = *(int *)((longlong)param_1 + 0x6c) + 1;
  return;
}



// FUNCTION 144be9870 FUN_144be9870 body=378 status=ok
// SIG undefined FUN_144be9870(void)

void FUN_144be9870(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong local_18;
  longlong local_10;
  
  lVar1 = *param_1;
  if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
    local_18 = *param_2 + 2;
    local_10 = param_2[1];
    (**(code **)(lVar1 + 0x18))
              (&local_18,*(undefined1 *)(*param_2 + 1),*(undefined8 *)(lVar1 + 0x30));
  }
  if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
    local_18 = *param_3 + 2;
    local_10 = param_3[1];
    (**(code **)(lVar1 + 0x18))
              (&local_18,*(undefined1 *)(*param_3 + 1),*(undefined8 *)(lVar1 + 0x30));
  }
  plVar6 = (longlong *)param_1[2];
  if (plVar6 != (longlong *)0x0) {
    uVar4 = (longlong)plVar6 + 0x1fU & 0xfffffffffffffff8;
    if (param_1[3] + 0x20U <= uVar4) {
      cVar3 = FUN_144bea600(param_1,(int)uVar4 - (int)plVar6);
      if (cVar3 == '\0') goto LAB_144be995f;
      plVar6 = (longlong *)param_1[2];
      uVar4 = (longlong)plVar6 + 0x1fU & 0xfffffffffffffff8;
    }
    param_1[2] = uVar4;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = *param_2;
      lVar2 = *param_3;
      plVar6[2] = lVar2;
      uVar4 = rdtsc();
      plVar6[1] = CONCAT44((int)((ulonglong)lVar2 >> 0x20),(int)uVar4) | uVar4 & 0xffffffff00000000;
    }
  }
LAB_144be995f:
  if ((((*(byte *)(lVar1 + 0x40) & 1) != 0) && (param_1[6] != 0)) &&
     (puVar5 = (undefined8 *)param_1[2], puVar5 != (undefined8 *)0x0)) {
    uVar4 = (longlong)puVar5 + 0x17U & 0xfffffffffffffff8;
    if (param_1[3] + 0x20U <= uVar4) {
      cVar3 = FUN_144bea600(param_1,(int)uVar4 - (int)puVar5);
      if (cVar3 == '\0') goto LAB_144be99cc;
      puVar5 = (undefined8 *)param_1[2];
      uVar4 = (longlong)puVar5 + 0x17U & 0xfffffffffffffff8;
    }
    param_1[2] = uVar4;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &DAT_149982548;
      puVar5[1] = *(undefined8 *)(param_1[6] + 8);
    }
  }
LAB_144be99cc:
  *(int *)((longlong)param_1 + 0x6c) = *(int *)((longlong)param_1 + 0x6c) + 1;
  return;
}



// FUNCTION 144be99f0 FUN_144be99f0 body=297 status=ok
// SIG undefined FUN_144be99f0(void)

void FUN_144be99f0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong local_18;
  longlong local_10;
  
  lVar1 = *param_1;
  if ((((*(byte *)(lVar1 + 0x40) & 1) != 0) && (param_1[6] != 0)) &&
     (puVar5 = (undefined8 *)param_1[2], puVar5 != (undefined8 *)0x0)) {
    uVar4 = (longlong)puVar5 + 0x17U & 0xfffffffffffffff8;
    if (param_1[3] + 0x20U <= uVar4) {
      cVar3 = FUN_144bea600(param_1,(int)uVar4 - (int)puVar5);
      if (cVar3 == '\0') goto LAB_144be9a6e;
      puVar5 = (undefined8 *)param_1[2];
      uVar4 = (longlong)puVar5 + 0x17U & 0xfffffffffffffff8;
    }
    param_1[2] = uVar4;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &DAT_149982548;
      puVar5[1] = *(undefined8 *)(param_1[6] + 8);
    }
  }
LAB_144be9a6e:
  plVar6 = (longlong *)param_1[2];
  if (plVar6 != (longlong *)0x0) {
    uVar4 = (longlong)plVar6 + 0x17U & 0xfffffffffffffff8;
    if (param_1[3] + 0x20U <= uVar4) {
      cVar3 = FUN_144bea600(param_1,(int)uVar4 - (int)plVar6);
      if (cVar3 == '\0') goto LAB_144be9ac5;
      plVar6 = (longlong *)param_1[2];
      uVar4 = (longlong)plVar6 + 0x17U & 0xfffffffffffffff8;
    }
    param_1[2] = uVar4;
    if (plVar6 != (longlong *)0x0) {
      lVar2 = *param_2;
      *plVar6 = lVar2;
      uVar4 = rdtsc();
      plVar6[1] = CONCAT44((int)((ulonglong)lVar2 >> 0x20),(int)uVar4) | uVar4 & 0xffffffff00000000;
    }
  }
LAB_144be9ac5:
  if (*(code **)(lVar1 + 0x20) != (code *)0x0) {
    (**(code **)(lVar1 + 0x20))(*(undefined8 *)(lVar1 + 0x30));
  }
  local_10 = param_2[1];
  if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
    local_18 = *param_2 + 2;
    (**(code **)(lVar1 + 0x18))
              (&local_18,*(undefined1 *)(*param_2 + 1),*(undefined8 *)(lVar1 + 0x30));
  }
  return;
}



// FUNCTION 144be9b20 FUN_144be9b20 body=274 status=ok
// SIG undefined FUN_144be9b20(void)

void FUN_144be9b20(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  lVar2 = *param_1;
  if ((((*(byte *)(lVar2 + 0x40) & 1) != 0) && (param_1[6] != 0)) &&
     (puVar6 = (undefined8 *)param_1[2], puVar6 != (undefined8 *)0x0)) {
    uVar5 = (longlong)puVar6 + 0x17U & 0xfffffffffffffff8;
    if (param_1[3] + 0x20U <= uVar5) {
      cVar4 = FUN_144bea600(param_1,(int)uVar5 - (int)puVar6);
      if (cVar4 == '\0') goto LAB_144be9b9e;
      puVar6 = (undefined8 *)param_1[2];
      uVar5 = (longlong)puVar6 + 0x17U & 0xfffffffffffffff8;
    }
    param_1[2] = uVar5;
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &DAT_149982548;
      puVar6[1] = *(undefined8 *)(param_1[6] + 8);
    }
  }
LAB_144be9b9e:
  puVar6 = (undefined8 *)param_1[2];
  if (puVar6 != (undefined8 *)0x0) {
    uVar5 = (longlong)puVar6 + 0x17U & 0xfffffffffffffff8;
    if (param_1[3] + 0x20U <= uVar5) {
      cVar4 = FUN_144bea600(param_1,(int)uVar5 - (int)puVar6);
      if (cVar4 == '\0') goto LAB_144be9bf5;
      puVar6 = (undefined8 *)param_1[2];
      uVar5 = (longlong)puVar6 + 0x17U & 0xfffffffffffffff8;
    }
    param_1[2] = uVar5;
    if (puVar6 != (undefined8 *)0x0) {
      uVar3 = *param_2;
      *puVar6 = uVar3;
      uVar5 = rdtsc();
      puVar6[1] = CONCAT44((int)((ulonglong)uVar3 >> 0x20),(int)uVar5) | uVar5 & 0xffffffff00000000;
    }
  }
LAB_144be9bf5:
  if (*(code **)(lVar2 + 0x20) != (code *)0x0) {
    (**(code **)(lVar2 + 0x20))(*(undefined8 *)(lVar2 + 0x30));
  }
  if (*(code **)(lVar2 + 0x20) != (code *)0x0) {
    (**(code **)(lVar2 + 0x20))(*(undefined8 *)(lVar2 + 0x30));
  }
  piVar1 = (int *)((longlong)param_1 + 0x6c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    param_1[9] = param_1[2];
  }
  return;
}



// FUNCTION 144be9c40 FUN_144be9c40 body=189 status=ok
// SIG undefined FUN_144be9c40(void)

void FUN_144be9c40(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong local_28;
  longlong local_20;
  
  pcVar1 = *(code **)(*param_1 + 0x28);
  if (pcVar1 != (code *)0x0) {
    local_28 = *param_2 + 2;
    local_20 = param_2[1];
    (*pcVar1)(&local_28,*(undefined1 *)(*param_2 + 1),pcVar1,*(undefined8 *)(*param_1 + 0x30));
  }
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    uVar3 = (longlong)plVar4 + 0x17U & 0xfffffffffffffff8;
    if (param_1[3] + 0x20U <= uVar3) {
      cVar2 = FUN_144bea600(param_1,(int)uVar3 - (int)plVar4);
      if (cVar2 == '\0') goto LAB_144be9cde;
      plVar4 = (longlong *)param_1[2];
      uVar3 = (longlong)plVar4 + 0x17U & 0xfffffffffffffff8;
    }
    param_1[2] = uVar3;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = *param_2;
      *(undefined4 *)(plVar4 + 1) = param_3;
    }
  }
LAB_144be9cde:
  if (*(int *)((longlong)param_1 + 0x6c) == 0) {
    param_1[9] = param_1[2];
  }
  return;
}



// FUNCTION 144be9d00 FUN_144be9d00 body=289 status=ok
// SIG undefined FUN_144be9d00(void)

void FUN_144be9d00(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong local_18;
  longlong local_10;
  
  lVar1 = *param_1;
  if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
    local_18 = *param_2 + 2;
    local_10 = param_2[1];
    (**(code **)(lVar1 + 0x18))
              (&local_18,*(undefined1 *)(*param_2 + 1),*(undefined8 *)(lVar1 + 0x30));
  }
  plVar4 = (longlong *)param_1[2];
  if (plVar4 == (longlong *)0x0) {
LAB_144be9d95:
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = *param_2;
    }
  }
  else {
    uVar3 = (longlong)plVar4 + 0xfU & 0xfffffffffffffff8;
    if (uVar3 < param_1[3] + 0x20U) {
LAB_144be9d91:
      param_1[2] = uVar3;
      goto LAB_144be9d95;
    }
    cVar2 = FUN_144bea600(param_1,(int)uVar3 - (int)plVar4);
    if (cVar2 != '\0') {
      plVar4 = (longlong *)param_1[2];
      uVar3 = (longlong)plVar4 + 0xfU & 0xfffffffffffffff8;
      goto LAB_144be9d91;
    }
  }
  if ((((*(byte *)(lVar1 + 0x40) & 1) != 0) && (param_1[6] != 0)) &&
     (puVar5 = (undefined8 *)param_1[2], puVar5 != (undefined8 *)0x0)) {
    uVar3 = (longlong)puVar5 + 0x17U & 0xfffffffffffffff8;
    if (param_1[3] + 0x20U <= uVar3) {
      cVar2 = FUN_144bea600(param_1,(int)uVar3 - (int)puVar5);
      if (cVar2 == '\0') goto LAB_144be9e13;
      puVar5 = (undefined8 *)param_1[2];
      uVar3 = (longlong)puVar5 + 0x17U & 0xfffffffffffffff8;
    }
    param_1[2] = uVar3;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &DAT_149982548;
      puVar5[1] = *(undefined8 *)(param_1[6] + 8);
    }
  }
LAB_144be9e13:
  *(int *)((longlong)param_1 + 0x6c) = *(int *)((longlong)param_1 + 0x6c) + 1;
  return;
}



// FUNCTION 144be9e30 FUN_144be9e30 body=276 status=ok
// SIG undefined FUN_144be9e30(void)

void FUN_144be9e30(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  lVar2 = *param_1;
  if ((((*(byte *)(lVar2 + 0x40) & 1) != 0) && (param_1[6] != 0)) &&
     (puVar9 = (undefined8 *)param_1[2], puVar9 != (undefined8 *)0x0)) {
    uVar8 = (longlong)puVar9 + 0x17U & 0xfffffffffffffff8;
    if (param_1[3] + 0x20U <= uVar8) {
      cVar7 = FUN_144bea600(param_1,(int)uVar8 - (int)puVar9);
      if (cVar7 == '\0') goto LAB_144be9eb7;
      puVar9 = (undefined8 *)param_1[2];
      uVar8 = (longlong)puVar9 + 0x17U & 0xfffffffffffffff8;
    }
    param_1[2] = uVar8;
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &DAT_149982548;
      puVar9[1] = *(undefined8 *)(param_1[6] + 8);
    }
  }
LAB_144be9eb7:
  puVar9 = (undefined8 *)param_1[2];
  if (puVar9 != (undefined8 *)0x0) {
    uVar8 = (longlong)puVar9 + 0x1fU & 0xfffffffffffffff8;
    if (param_1[3] + 0x20U <= uVar8) {
      cVar7 = FUN_144bea600(param_1,(int)uVar8 - (int)puVar9);
      if (cVar7 == '\0') goto LAB_144be9f10;
      puVar9 = (undefined8 *)param_1[2];
      uVar8 = (longlong)puVar9 + 0x1fU & 0xfffffffffffffff8;
    }
    param_1[2] = uVar8;
    if (puVar9 != (undefined8 *)0x0) {
      uVar4 = param_3[1];
      uVar5 = param_3[2];
      uVar6 = param_3[3];
      uVar3 = *param_2;
      *(undefined4 *)puVar9 = *param_3;
      *(undefined4 *)((longlong)puVar9 + 4) = uVar4;
      *(undefined4 *)(puVar9 + 1) = uVar5;
      *(undefined4 *)((longlong)puVar9 + 0xc) = uVar6;
      puVar9[2] = *(undefined8 *)(param_3 + 4);
      *puVar9 = uVar3;
    }
  }
LAB_144be9f10:
  if (*(code **)(lVar2 + 0x20) != (code *)0x0) {
    (**(code **)(lVar2 + 0x20))(*(undefined8 *)(lVar2 + 0x30));
  }
  piVar1 = (int *)((longlong)param_1 + 0x6c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    param_1[9] = param_1[2];
  }
  return;
}



// FUNCTION 144be9f50 FUN_144be9f50 body=157 status=ok
// SIG undefined FUN_144be9f50(void)

void FUN_144be9f50(longlong param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    uVar2 = param_3 + 0xf + (longlong)puVar3 & 0xfffffffffffffff8;
    if (*(longlong *)(param_1 + 0x18) + 0x20U <= uVar2) {
      cVar1 = FUN_144bea600(param_1,(int)uVar2 - (int)puVar3);
      if (cVar1 == '\0') goto LAB_144be9fc8;
      puVar3 = *(undefined8 **)(param_1 + 0x10);
      uVar2 = param_3 + 0xf + (longlong)puVar3 & 0xfffffffffffffff8;
    }
    *(ulonglong *)(param_1 + 0x10) = uVar2;
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = *param_2;
      *param_4 = (longlong)(puVar3 + 1);
    }
  }
LAB_144be9fc8:
  if (*(int *)(param_1 + 0x6c) == 0) {
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 144be9ff0 FUN_144be9ff0 body=82 status=ok
// SIG undefined FUN_144be9ff0(void)

void FUN_144be9ff0(longlong param_1)

{
  if ((*(longlong *)(param_1 + 8) != 0) && (*(char *)(param_1 + 0x68) != '\0')) {
    (*DAT_14c787678)(3,*(longlong *)(param_1 + 8),0);
  }
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return;
}



// FUNCTION 144bea050 FUN_144bea050 body=256 status=ok
// SIG undefined FUN_144bea050(void)

void FUN_144bea050(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong local_res8;
  
  lVar2 = param_1[1];
  param_2 = param_2 & 0xfffffffffffffff8;
  if (param_2 != param_1[4] - lVar2) {
    if ((lVar2 != 0) && (*(char *)(param_1 + 0xd) != '\0')) {
      (*DAT_14c787678)(3,lVar2,0);
    }
    *(undefined1 *)(param_1 + 0xd) = 0;
    param_1[1] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
    if (param_2 != 0) {
      *param_1 = PTR_PTR_14c6da300;
      *(undefined1 *)(param_1 + 0xd) = 1;
      local_res8 = param_2;
      uVar1 = (*DAT_14c787670)(3,&local_res8,0);
      param_1[1] = uVar1;
      param_1[8] = uVar1;
      param_1[9] = param_1[1];
      param_1[2] = param_1[1];
      lVar2 = param_1[1] + param_2;
      param_1[4] = lVar2;
      lVar2 = lVar2 + -0x20;
      if (param_2 < 0x20) {
        lVar2 = 0;
      }
      param_1[3] = lVar2;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
      FUN_144bea220(param_1);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(param_1[1],"buffer_hkMonitorStream");
      }
    }
  }
  return;
}



// FUNCTION 144bea150 FUN_144bea150 body=200 status=ok
// SIG undefined FUN_144bea150(void)

int FUN_144bea150(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  
  iVar4 = (int)param_1[5];
  if ((short)iVar4 == -1) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x3c);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + 0x10000;
    UNLOCK();
  }
  iVar4 = iVar4 + 1;
  *(int *)(param_1 + 5) = iVar4;
  if (param_1[3] == 0) {
    return iVar4;
  }
  if ((ulonglong)param_1[3] < (ulonglong)param_1[2]) {
    cVar2 = FUN_144bea600(param_1,0x20);
    if (cVar2 == '\0') goto LAB_144bea1f3;
  }
  puVar3 = (undefined8 *)param_1[2];
  puVar5 = puVar3 + 2;
  if ((undefined8 *)param_1[4] < puVar5) {
    if ((undefined8 *)param_1[4] != puVar3) {
      FUN_144bfbef0(puVar3,0);
    }
    puVar3 = (undefined8 *)param_1[1];
    puVar5 = puVar3 + 2;
  }
  param_1[2] = (longlong)puVar5;
  *puVar3 = &DAT_149982544;
  *(int *)(puVar3 + 1) = iVar4;
  if (*(int *)((longlong)param_1 + 0x6c) == 0) {
    param_1[9] = param_1[2];
  }
LAB_144bea1f3:
  return (int)param_1[5];
}



// FUNCTION 144bea220 FUN_144bea220 body=258 status=ok
// SIG undefined FUN_144bea220(void)

undefined4 FUN_144bea220(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  
  lVar3 = *param_1;
  LOCK();
  piVar1 = (int *)(lVar3 + 0x38);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  *(int *)((longlong)param_1 + 0x2c) = iVar2;
  if (iVar2 == 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 0x38);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    *(int *)((longlong)param_1 + 0x2c) = iVar2;
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar3 + 0xf0);
  if (lVar5 == 0) {
    if (*(char *)(lVar3 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar5 = FUN_144b3f4a0();
    *(longlong *)(lVar3 + 0xf0) = lVar5;
  }
  lVar3 = *(longlong *)(lVar5 + 0x3e0);
  if (lVar3 == 0) goto LAB_144bea309;
  puVar7 = *(undefined8 **)(lVar3 + 0x10);
  if (puVar7 != (undefined8 *)0x0) {
    uVar6 = (longlong)puVar7 + 0x17U & 0xfffffffffffffff8;
    if (*(longlong *)(lVar3 + 0x18) + 0x20U <= uVar6) {
      cVar4 = FUN_144bea600(lVar3,(int)uVar6 - (int)puVar7);
      if (cVar4 == '\0') goto LAB_144bea2fa;
      puVar7 = *(undefined8 **)(lVar3 + 0x10);
      uVar6 = (longlong)puVar7 + 0x17U & 0xfffffffffffffff8;
    }
    *(ulonglong *)(lVar3 + 0x10) = uVar6;
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = "FiFrameId";
      *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(lVar3 + 0x2c);
    }
  }
LAB_144bea2fa:
  if (*(int *)(lVar3 + 0x6c) == 0) {
    *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(lVar3 + 0x10);
  }
LAB_144bea309:
  return *(undefined4 *)((longlong)param_1 + 0x2c);
}



// FUNCTION 144bea330 FUN_144bea330 body=128 status=ok
// SIG undefined FUN_144bea330(void)

ulonglong * FUN_144bea330(ulonglong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  do {
    do {
      uVar1 = *(ulonglong *)(param_1 + 0x50);
    } while ((uVar1 & 1) != 0);
    uVar2 = *(ulonglong *)(param_1 + 0x40);
    uVar3 = *(ulonglong *)(param_1 + 0x58);
  } while (uVar1 != *(ulonglong *)(param_1 + 0x50));
  if (uVar3 == 0) {
    *(ulonglong *)(param_1 + 0x58) = *(ulonglong *)(param_1 + 0x48);
    uVar3 = *(ulonglong *)(param_1 + 0x48);
  }
  *param_2 = uVar2;
  param_2[4] = uVar1;
  param_2[5] = param_1;
  if (uVar3 < uVar2) {
    param_2[1] = *(ulonglong *)(param_1 + 0x20);
    param_2[2] = *(ulonglong *)(param_1 + 8);
    param_2[3] = uVar3;
    LOCK();
    *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + 1;
    UNLOCK();
  }
  else {
    param_2[1] = uVar3;
    param_2[2] = 0;
    param_2[3] = 0;
    if (param_1 != 0) {
      LOCK();
      *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + 1;
      UNLOCK();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 144bea3b0 FUN_144bea3b0 body=82 status=ok
// SIG undefined FUN_144bea3b0(void)

void FUN_144bea3b0(longlong param_1)

{
  if ((*(longlong *)(param_1 + 8) != 0) && (*(char *)(param_1 + 0x68) != '\0')) {
    (*DAT_14c787678)(3,*(longlong *)(param_1 + 8),0);
  }
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return;
}



// FUNCTION 144bea410 FUN_144bea410 body=460 status=ok
// SIG undefined FUN_144bea410(void)

void FUN_144bea410(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar1 + 0xf0);
  if (lVar3 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar3;
  }
  lVar3 = *(longlong *)(lVar3 + 0x3e0);
  if (lVar3 != 0) {
    if ((*(longlong *)(lVar3 + 8) != 0) && (*(char *)(lVar3 + 0x68) != '\0')) {
      (*DAT_14c787678)(3,*(longlong *)(lVar3 + 8),0);
    }
    *(undefined8 *)(lVar3 + 8) = 0;
    *(undefined1 *)(lVar3 + 0x68) = 0;
    *(undefined8 *)(lVar3 + 0x40) = 0;
    *(undefined8 *)(lVar3 + 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x58) = 0;
    *(undefined8 *)(lVar3 + 0x60) = 0;
    *(undefined4 *)(lVar3 + 0x6c) = 0;
    if ((*(longlong *)(lVar3 + 8) != 0) && (*(char *)(lVar3 + 0x68) != '\0')) {
      (*DAT_14c787678)(3,*(longlong *)(lVar3 + 8),0);
    }
    *(undefined1 *)(lVar3 + 0x68) = 0;
    *(undefined8 *)(lVar3 + 8) = 0;
    *(undefined8 *)(lVar3 + 0x40) = 0;
    *(undefined8 *)(lVar3 + 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x58) = 0;
    *(undefined8 *)(lVar3 + 0x60) = 0;
    *(undefined4 *)(lVar3 + 0x6c) = 0;
    FUN_144bdb6a0(DAT_14c783ee8,0);
  }
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar1 + 0xf0);
  if (lVar3 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar3;
  }
  puVar2 = *(undefined8 **)(lVar3 + 0x3e0);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    *(undefined2 *)((longlong)puVar2 + 0x69) = 0;
    *(undefined1 *)((longlong)puVar2 + 0x6b) = 0;
    *puVar2 = 0;
    puVar2[5] = 0xffffffffffffffff;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[6] = 0;
    *(undefined1 *)(puVar2 + 0xd) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x6c) = 0;
  }
  FUN_144bdb6a0(DAT_14c783ee8,0);
  *(undefined4 *)(puVar2 + 5) = 0xffffffff;
  puVar2[7] = *(undefined8 *)(lVar3 + 0x3d8);
  *puVar2 = PTR_PTR_14c6da300;
  return;
}



// FUNCTION 144bea5e0 FUN_144bea5e0 body=4 status=ok
// SIG undefined FUN_144bea5e0(void)

void FUN_144bea5e0(longlong param_1)

{
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  return;
}



// FUNCTION 144bea5f0 FUN_144bea5f0 body=16 status=ok
// SIG undefined FUN_144bea5f0(void)

void FUN_144bea5f0(longlong param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x6c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 144bea600 FUN_144bea600 body=199 status=ok
// SIG undefined FUN_144bea600(void)

ulonglong FUN_144bea600(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar4 = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar6 = (longlong)param_2;
    uVar4 = *(longlong *)(param_1 + 0x10) + lVar6;
    if (uVar4 <= *(ulonglong *)(param_1 + 0x18)) {
LAB_144bea6a3:
      return CONCAT71((int7)(uVar4 >> 8),1);
    }
    uVar2 = *(ulonglong *)(param_1 + 0x40);
    uVar5 = *(ulonglong *)(param_1 + 0x10);
    if (uVar2 <= uVar5) {
      uVar3 = *(ulonglong *)(param_1 + 0x20);
      uVar1 = uVar3 - 0x20;
      if (*(ulonglong *)(param_1 + 0x18) < uVar1) {
        uVar4 = lVar6 + uVar5;
        *(ulonglong *)(param_1 + 0x18) = uVar1;
        if (uVar4 <= uVar1) goto LAB_144bea6a3;
      }
      uVar4 = uVar2 - *(longlong *)(param_1 + 8);
      if ((longlong)uVar4 < 0x20) goto LAB_144bea6b5;
      if (uVar5 < uVar3) {
        FUN_144bfbef0(uVar5,0,uVar3 - uVar5);
      }
      uVar5 = *(ulonglong *)(param_1 + 8);
      *(ulonglong *)(param_1 + 0x10) = uVar5;
    }
    *(ulonglong *)(param_1 + 0x18) = uVar2 - 0x20;
    return CONCAT71((int7)(uVar2 >> 8),uVar5 + lVar6 < uVar2);
  }
LAB_144bea6b5:
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 144bea6d0 FUN_144bea6d0 body=46 status=ok
// SIG undefined FUN_144bea6d0(void)

void FUN_144bea6d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  LOCK();
  *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + 1;
  UNLOCK();
  LOCK();
  lVar1 = *(longlong *)(param_1 + 0x40);
  *(longlong *)(param_1 + 0x40) = param_2;
  UNLOCK();
  *(undefined8 *)(param_1 + 0x58) = 0;
  lVar2 = 1;
  if (param_2 == lVar1) {
    lVar2 = -1;
  }
  LOCK();
  *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + lVar2;
  UNLOCK();
  return;
}



// FUNCTION 144bea700 FUN_144bea700 body=25 status=ok
// SIG undefined FUN_144bea700(void)

undefined8 * FUN_144bea700(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 144bea720 FUN_144bea720 body=14 status=ok
// SIG undefined FUN_144bea720(void)

void FUN_144bea720(longlong param_1)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  
  uVar1 = rdtsc();
  *(ulonglong *)(param_1 + 8) =
       CONCAT44((int)((ulonglong)in_RAX >> 0x20),(int)uVar1) | uVar1 & 0xffffffff00000000;
  return;
}



// FUNCTION 144bea730 FUN_144bea730 body=10 status=ok
// SIG undefined FUN_144bea730(void)

void FUN_144bea730(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 144bea740 FUN_144bea740 body=41 status=ok
// SIG undefined FUN_144bea740(void)

uint FUN_144bea740(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0x811c9dc5;
  bVar1 = *param_1;
  while (bVar1 != 0) {
    param_1 = param_1 + 1;
    uVar2 = (bVar1 ^ uVar2) * 0x1000193;
    bVar1 = *param_1;
  }
  return uVar2;
}



// FUNCTION 144bea770 FUN_144bea770 body=52 status=ok
// SIG undefined FUN_144bea770(void)

uint FUN_144bea770(uint param_1)

{
  uint uVar1;
  
  param_1 = param_1 - (param_1 >> 1 & 0x55555555);
  uVar1 = (param_1 >> 2 & 0x33333333) + (param_1 & 0x33333333);
  return ((uVar1 >> 4) + uVar1 & 0xf0f0f0f) * 0x1010101 >> 0x18;
}



// FUNCTION 144bea7b0 ceilf body=7 status=ok
// SIG float ceilf(float _X)

float __cdecl ceilf(float _X)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000144bea7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = ceilf(_X);
  return fVar1;
}



// FUNCTION 144bea7c0 roundf body=7 status=ok
// SIG undefined roundf(void)

void roundf(void)

{
                    /* WARNING: Could not recover jumptable at 0x000144bea7c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  roundf();
  return;
}



// FUNCTION 144bea7d0 FUN_144bea7d0 body=98 status=ok
// SIG undefined FUN_144bea7d0(void)

float FUN_144bea7d0(double param_1)

{
  uint uVar1;
  
  if (0x380fffffffffffff < (ulonglong)ABS(param_1)) {
    return (float)param_1;
  }
  if ((longlong)param_1 < 0) {
    uVar1 = 0xb8100000;
  }
  else {
    uVar1 = 0x38100000;
  }
  return (float)((uint)(float)((double)((ulonglong)param_1 & 0xfffffffff0000000) +
                              (double)((ulonglong)uVar1 << 0x20)) & 0x807fffff);
}



// FUNCTION 144bea840 FUN_144bea840 body=72 status=ok
// SIG undefined FUN_144bea840(void)

double FUN_144bea840(float param_1)

{
  if (0xfffffe < (int)param_1 * 2 - 1U) {
    return (double)param_1;
  }
  if (-1 < (int)param_1) {
    return (double)(float)((uint)param_1 | 0x800000) - 1.1754943508222875e-38;
  }
  return (double)(float)((uint)param_1 | 0x800000) + 1.1754943508222875e-38;
}



// FUNCTION 144bea890 FUN_144bea890 body=278 status=ok
// SIG undefined FUN_144bea890(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_144bea890(uint *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  auVar20._0_8_ = *(ulonglong *)param_2 & 0x7fffffff7fffffff;
  auVar20._8_4_ = ABS(fVar2);
  auVar20._12_4_ = ABS(fVar3);
  fVar21 = ABS(param_3[2]);
  fVar22 = ABS(param_3[3]);
  auVar10._0_8_ = *(ulonglong *)param_3 & 0x7fffffff7fffffff;
  auVar10._8_4_ = fVar21;
  auVar10._12_4_ = fVar22;
  auVar15._0_8_ = *(ulonglong *)param_3 & 0x7fffffff7fffffff;
  auVar15._8_4_ = fVar21;
  auVar15._12_4_ = fVar22;
  auVar10 = maxps(auVar10,auVar20);
  auVar15 = minps(auVar15,auVar20);
  auVar10 = maxps(auVar10,_DAT_14c6daec0);
  uVar4 = -(uint)(ABS(*param_3) < ABS(*param_2));
  uVar6 = -(uint)(ABS(param_3[1]) < ABS(fVar1));
  auVar10 = divps(auVar15,auVar10);
  fVar16 = auVar10._0_4_;
  fVar17 = auVar10._4_4_;
  fVar18 = auVar10._8_4_;
  fVar19 = auVar10._12_4_;
  fVar11 = fVar16 * fVar16;
  fVar12 = fVar17 * fVar17;
  fVar13 = fVar18 * fVar18;
  fVar14 = fVar19 * fVar19;
  uVar5 = -(uint)(*param_3 <= 0.0);
  uVar7 = -(uint)(param_3[1] <= 0.0);
  uVar8 = -(uint)(param_3[2] <= 0.0);
  uVar9 = -(uint)(param_3[3] <= 0.0);
  fVar16 = (fVar11 * 0.0028662258 + -0.007186844) * fVar11 * fVar16 *
           ((fVar11 + 1.7041799) * fVar11 + 2.2365003) *
           ((fVar11 + -1.0048817) * fVar11 + 3.768408) * ((fVar11 + -3.8319519) * fVar11 + 5.503148)
           + fVar16;
  fVar17 = (fVar12 * 0.0028662258 + -0.007186844) * fVar12 * fVar17 *
           ((fVar12 + 1.7041799) * fVar12 + 2.2365003) *
           ((fVar12 + -1.0048817) * fVar12 + 3.768408) * ((fVar12 + -3.8319519) * fVar12 + 5.503148)
           + fVar17;
  fVar18 = (fVar13 * 0.0028662258 + -0.007186844) * fVar13 * fVar18 *
           ((fVar13 + 1.7041799) * fVar13 + 2.2365003) *
           ((fVar13 + -1.0048817) * fVar13 + 3.768408) * ((fVar13 + -3.8319519) * fVar13 + 5.503148)
           + fVar18;
  fVar19 = (fVar14 * 0.0028662258 + -0.007186844) * fVar14 * fVar19 *
           ((fVar14 + 1.7041799) * fVar14 + 2.2365003) *
           ((fVar14 + -1.0048817) * fVar14 + 3.768408) * ((fVar14 + -3.8319519) * fVar14 + 5.503148)
           + fVar19;
  fVar14 = (float)((uint)(_DAT_14c6dafb0 - fVar16) & uVar4 | ~uVar4 & (uint)fVar16);
  fVar16 = (float)((uint)(fRam000000014c6dafb4 - fVar17) & uVar6 | ~uVar6 & (uint)fVar17);
  fVar17 = (float)((uint)(fRam000000014c6dafb8 - fVar18) & -(uint)(fVar21 < auVar20._8_4_) |
                  ~-(uint)(fVar21 < auVar20._8_4_) & (uint)fVar18);
  fVar18 = (float)((uint)(fRam000000014c6dafbc - fVar19) & -(uint)(fVar22 < auVar20._12_4_) |
                  ~-(uint)(fVar22 < auVar20._12_4_) & (uint)fVar19);
  fVar11 = fRam000000014c6dafa4 - fVar16;
  fVar12 = fRam000000014c6dafa8 - fVar17;
  fVar13 = fRam000000014c6dafac - fVar18;
  *param_1 = ((uint)(_DAT_14c6dafa0 - fVar14) & uVar5 | ~uVar5 & (uint)fVar14) ^
             (uint)(*param_2 < 0.0) * -0x80000000;
  param_1[1] = ((uint)fVar11 & uVar7 | ~uVar7 & (uint)fVar16) ^ (uint)(fVar1 < 0.0) * -0x80000000;
  param_1[2] = ((uint)fVar12 & uVar8 | ~uVar8 & (uint)fVar17) ^ (uint)(fVar2 < 0.0) * -0x80000000;
  param_1[3] = ((uint)fVar13 & uVar9 | ~uVar9 & (uint)fVar18) ^ (uint)(fVar3 < 0.0) * -0x80000000;
  return param_1;
}



// FUNCTION 144bea9b0 FUN_144bea9b0 body=247 status=ok
// SIG undefined FUN_144bea9b0(void)

uint * FUN_144bea9b0(uint *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = (fVar1 * 1.442695 + 12582912.0) - 12582912.0;
  fVar7 = (fVar2 * 1.442695 + 12582912.0) - 12582912.0;
  fVar9 = (fVar3 * 1.442695 + 12582912.0) - 12582912.0;
  fVar11 = (fVar4 * 1.442695 + 12582912.0) - 12582912.0;
  fVar17 = fVar5 * -0.69314575 + fVar1 + fVar5 * -1.4286068e-06;
  fVar18 = fVar7 * -0.69314575 + fVar2 + fVar7 * -1.4286068e-06;
  fVar19 = fVar9 * -0.69314575 + fVar3 + fVar9 * -1.4286068e-06;
  fVar20 = fVar11 * -0.69314575 + fVar4 + fVar11 * -1.4286068e-06;
  uVar13 = (int)fVar5 ^ -(uint)(2.1474836e+09 <= fVar5);
  uVar14 = (int)fVar7 ^ -(uint)(2.1474836e+09 <= fVar7);
  uVar15 = (int)fVar9 ^ -(uint)(2.1474836e+09 <= fVar9);
  uVar16 = (int)fVar11 ^ -(uint)(2.1474836e+09 <= fVar11);
  uVar6 = ~-(uint)(0 < (int)uVar13) & 0x83000000;
  uVar8 = ~-(uint)(0 < (int)uVar14) & 0x83000000;
  uVar10 = ~-(uint)(0 < (int)uVar15) & 0x83000000;
  uVar12 = ~-(uint)(0 < (int)uVar16) & 0x83000000;
  *param_1 = ~-(uint)(fVar1 < -87.33) &
             (~-(uint)(88.72 < fVar1) &
              (uint)(((((((fVar17 * 0.0013818741 + 0.0083752265) * fVar17 + 0.041669395) * fVar17 +
                        0.1666645) * fVar17 + 0.49999982) * fVar17 + 1.0) * fVar17 + 1.0) *
                     (float)(uVar6 + 0x7f000000) * (float)(uVar13 * 0x800000 - uVar6)) |
             -(uint)(88.72 < fVar1) & 0x7f7fffee);
  param_1[1] = ~-(uint)(fVar2 < -87.33) &
               (~-(uint)(88.72 < fVar2) &
                (uint)(((((((fVar18 * 0.0013818741 + 0.0083752265) * fVar18 + 0.041669395) * fVar18
                          + 0.1666645) * fVar18 + 0.49999982) * fVar18 + 1.0) * fVar18 + 1.0) *
                       (float)(uVar8 + 0x7f000000) * (float)(uVar14 * 0x800000 - uVar8)) |
               -(uint)(88.72 < fVar2) & 0x7f7fffee);
  param_1[2] = ~-(uint)(fVar3 < -87.33) &
               (~-(uint)(88.72 < fVar3) &
                (uint)(((((((fVar19 * 0.0013818741 + 0.0083752265) * fVar19 + 0.041669395) * fVar19
                          + 0.1666645) * fVar19 + 0.49999982) * fVar19 + 1.0) * fVar19 + 1.0) *
                       (float)(uVar10 + 0x7f000000) * (float)(uVar15 * 0x800000 - uVar10)) |
               -(uint)(88.72 < fVar3) & 0x7f7fffee);
  param_1[3] = ~-(uint)(fVar4 < -87.33) &
               (~-(uint)(88.72 < fVar4) &
                (uint)(((((((fVar20 * 0.0013818741 + 0.0083752265) * fVar20 + 0.041669395) * fVar20
                          + 0.1666645) * fVar20 + 0.49999982) * fVar20 + 1.0) * fVar20 + 1.0) *
                       (float)(uVar12 + 0x7f000000) * (float)(uVar16 * 0x800000 - uVar12)) |
               -(uint)(88.72 < fVar4) & 0x7f7fffee);
  return param_1;
}



// FUNCTION 144beaab0 FUN_144beaab0 body=281 status=ok
// SIG undefined FUN_144beaab0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_144beaab0(uint *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  
  fVar2 = ABS(*param_2) * 1.2732395;
  fVar3 = ABS(param_2[1]) * 1.2732395;
  fVar4 = ABS(param_2[2]) * 1.2732395;
  fVar5 = ABS(param_2[3]) * 1.2732395;
  uVar12 = ((int)fVar2 ^ -(uint)(2.1474836e+09 <= fVar2)) + 1 & 0xfffffffe;
  uVar14 = ((int)fVar3 ^ -(uint)(2.1474836e+09 <= fVar3)) + 1 & 0xfffffffe;
  uVar16 = ((int)fVar4 ^ -(uint)(2.1474836e+09 <= fVar4)) + 1 & 0xfffffffe;
  uVar18 = ((int)fVar5 ^ -(uint)(2.1474836e+09 <= fVar5)) + 1 & 0xfffffffe;
  fVar2 = (float)(int)uVar12;
  fVar3 = (float)(int)uVar14;
  fVar4 = (float)(int)uVar16;
  fVar5 = (float)(int)uVar18;
  uVar12 = uVar12 - 2;
  uVar14 = uVar14 - 2;
  uVar16 = uVar16 - 2;
  uVar18 = uVar18 - 2;
  uVar13 = -(uint)((uVar12 & 2) == 0);
  uVar15 = -(uint)((uVar14 & 2) == 0);
  uVar17 = -(uint)((uVar16 & 2) == 0);
  uVar19 = -(uint)((uVar18 & 2) == 0);
  fVar8 = fVar2 * -0.78515625 + ABS(*param_2) + fVar2 * -0.00024187565 + fVar2 * -3.774895e-08;
  fVar9 = fVar3 * -0.78515625 + ABS(param_2[1]) + fVar3 * -0.00024187565 + fVar3 * -3.774895e-08;
  fVar10 = fVar4 * -0.78515625 + ABS(param_2[2]) + fVar4 * -0.00024187565 + fVar4 * -3.774895e-08;
  fVar11 = fVar5 * -0.78515625 + ABS(param_2[3]) + fVar5 * -0.00024187565 + fVar5 * -3.774895e-08;
  fVar2 = fVar8 * fVar8;
  fVar3 = fVar9 * fVar9;
  fVar4 = fVar10 * fVar10;
  fVar5 = fVar11 * fVar11;
  auVar6._0_4_ = ~uVar13 & (uint)((((fVar2 * 2.4433157e-05 + -0.0013887316) * fVar2 + 0.041666646) *
                                   fVar2 * fVar2 - fVar2 * _DAT_14c6dad90) + _DAT_14c6daca0);
  auVar6._4_4_ = ~uVar15 & (uint)((((fVar3 * 2.4433157e-05 + -0.0013887316) * fVar3 + 0.041666646) *
                                   fVar3 * fVar3 - fVar3 * fRam000000014c6dad94) +
                                 fRam000000014c6daca4);
  auVar6._8_4_ = ~uVar17 & (uint)((((fVar4 * 2.4433157e-05 + -0.0013887316) * fVar4 + 0.041666646) *
                                   fVar4 * fVar4 - fVar4 * fRam000000014c6dad98) +
                                 fRam000000014c6daca8);
  auVar6._12_4_ =
       ~uVar19 & (uint)((((fVar5 * 2.4433157e-05 + -0.0013887316) * fVar5 + 0.041666646) * fVar5 *
                         fVar5 - fVar5 * fRam000000014c6dad9c) + fRam000000014c6dacac);
  auVar7._4_4_ = (uint)(((fVar3 * -0.00019515296 + 0.008332161) * fVar3 + -0.16666655) * fVar3 *
                        fVar9 + fVar9) & uVar15;
  auVar7._0_4_ = (uint)(((fVar2 * -0.00019515296 + 0.008332161) * fVar2 + -0.16666655) * fVar2 *
                        fVar8 + fVar8) & uVar13;
  auVar7._8_4_ = (uint)(((fVar4 * -0.00019515296 + 0.008332161) * fVar4 + -0.16666655) * fVar4 *
                        fVar10 + fVar10) & uVar17;
  auVar7._12_4_ =
       (uint)(((fVar5 * -0.00019515296 + 0.008332161) * fVar5 + -0.16666655) * fVar5 * fVar11 +
             fVar11) & uVar19;
  auVar1._4_4_ = fRam000000014c6daca4;
  auVar1._0_4_ = _DAT_14c6daca0;
  auVar1._8_4_ = fRam000000014c6daca8;
  auVar1._12_4_ = fRam000000014c6dacac;
  auVar7 = minps(auVar6 | auVar7,auVar1);
  *param_1 = auVar7._0_4_ ^ (~uVar12 & 4) << 0x1d;
  param_1[1] = auVar7._4_4_ ^ (~uVar14 & 4) << 0x1d;
  param_1[2] = auVar7._8_4_ ^ (~uVar16 & 4) << 0x1d;
  param_1[3] = auVar7._12_4_ ^ (~uVar18 & 4) << 0x1d;
  return param_1;
}



// FUNCTION 144beabd0 FUN_144beabd0 body=246 status=ok
// SIG undefined FUN_144beabd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_144beabd0(uint *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 in_XMM4 [16];
  float fVar16;
  float fVar19;
  float fVar20;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar21;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  auVar17._0_8_ = *(ulonglong *)param_2 & 0x7fffffff7fffffff;
  auVar17._8_4_ = ABS(fVar2);
  auVar17._12_4_ = ABS(fVar3);
  auVar18 = minps(auVar17,_DAT_14c6daca0);
  fVar16 = auVar18._0_4_;
  fVar19 = auVar18._4_4_;
  fVar20 = auVar18._8_4_;
  fVar21 = auVar18._12_4_;
  fVar8 = ((float)DAT_14c6daca0 - fVar16) * _DAT_14c6dad90;
  fVar10 = (DAT_14c6daca0._4_4_ - fVar19) * fRam000000014c6dad94;
  fVar12 = (DAT_14c6daca0._8_4_ - fVar20) * fRam000000014c6dad98;
  fVar14 = (DAT_14c6daca0._12_4_ - fVar21) * fRam000000014c6dad9c;
  uVar4 = -(uint)(_DAT_14c6dad90 < fVar16);
  uVar5 = -(uint)(fRam000000014c6dad94 < fVar19);
  uVar6 = -(uint)(fRam000000014c6dad98 < fVar20);
  uVar7 = -(uint)(fRam000000014c6dad9c < fVar21);
  auVar18._4_4_ = fVar10;
  auVar18._0_4_ = fVar8;
  auVar18._8_4_ = fVar12;
  auVar18._12_4_ = fVar14;
  auVar18 = sqrtps(in_XMM4,auVar18);
  fVar9 = (float)(auVar18._0_4_ & uVar4 | ~uVar4 & (uint)fVar16);
  fVar11 = (float)(auVar18._4_4_ & uVar5 | ~uVar5 & (uint)fVar19);
  fVar13 = (float)(auVar18._8_4_ & uVar6 | ~uVar6 & (uint)fVar20);
  fVar15 = (float)(auVar18._12_4_ & uVar7 | ~uVar7 & (uint)fVar21);
  fVar8 = (float)(~uVar4 & (uint)(fVar16 * fVar16) | uVar4 & (uint)fVar8);
  fVar10 = (float)(~uVar5 & (uint)(fVar19 * fVar19) | uVar5 & (uint)fVar10);
  fVar12 = (float)(~uVar6 & (uint)(fVar20 * fVar20) | uVar6 & (uint)fVar12);
  fVar14 = (float)(~uVar7 & (uint)(fVar21 * fVar21) | uVar7 & (uint)fVar14);
  fVar9 = ((((fVar8 * 0.0421632 + 0.024181312) * fVar8 + 0.045470025) * fVar8 + 0.074953005) * fVar8
          + 0.16666752) * fVar8 * fVar9 + fVar9;
  fVar11 = ((((fVar10 * 0.0421632 + 0.024181312) * fVar10 + 0.045470025) * fVar10 + 0.074953005) *
            fVar10 + 0.16666752) * fVar10 * fVar11 + fVar11;
  fVar13 = ((((fVar12 * 0.0421632 + 0.024181312) * fVar12 + 0.045470025) * fVar12 + 0.074953005) *
            fVar12 + 0.16666752) * fVar12 * fVar13 + fVar13;
  fVar15 = ((((fVar14 * 0.0421632 + 0.024181312) * fVar14 + 0.045470025) * fVar14 + 0.074953005) *
            fVar14 + 0.16666752) * fVar14 * fVar15 + fVar15;
  fVar8 = fRam000000014c6dafb4 - (fVar11 + fVar11);
  fVar10 = fRam000000014c6dafb8 - (fVar13 + fVar13);
  fVar12 = fRam000000014c6dafbc - (fVar15 + fVar15);
  *param_1 = (~-(uint)(fVar16 < 0.0001) &
              ((uint)(_DAT_14c6dafb0 - (fVar9 + fVar9)) & uVar4 | ~uVar4 & (uint)fVar9) |
             -(uint)(fVar16 < 0.0001) & (uint)fVar16) ^ (uint)(*param_2 < 0.0) * -0x80000000;
  param_1[1] = (~-(uint)(fVar19 < 0.0001) & ((uint)fVar8 & uVar5 | ~uVar5 & (uint)fVar11) |
               -(uint)(fVar19 < 0.0001) & (uint)fVar19) ^ (uint)(fVar1 < 0.0) * -0x80000000;
  param_1[2] = (~-(uint)(fVar20 < 0.0001) & ((uint)fVar10 & uVar6 | ~uVar6 & (uint)fVar13) |
               -(uint)(fVar20 < 0.0001) & (uint)fVar20) ^ (uint)(fVar2 < 0.0) * -0x80000000;
  param_1[3] = (~-(uint)(fVar21 < 0.0001) & ((uint)fVar12 & uVar7 | ~uVar7 & (uint)fVar15) |
               -(uint)(fVar21 < 0.0001) & (uint)fVar21) ^ (uint)(fVar3 < 0.0) * -0x80000000;
  return param_1;
}



// FUNCTION 144beacd0 FUN_144beacd0 body=362 status=ok
// SIG undefined FUN_144beacd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144beacd0(float *param_1,uint *param_2,uint *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  uint uVar24;
  float fVar25;
  uint uVar26;
  float fVar27;
  uint uVar28;
  float fVar29;
  undefined1 auVar23 [16];
  
  fVar4 = ABS(*param_1) * 1.2732395;
  fVar7 = ABS(param_1[1]) * 1.2732395;
  fVar10 = ABS(param_1[2]) * 1.2732395;
  fVar13 = ABS(param_1[3]) * 1.2732395;
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  uVar5 = ((int)fVar4 ^ -(uint)(2.1474836e+09 <= fVar4)) + 1;
  uVar8 = ((int)fVar7 ^ -(uint)(2.1474836e+09 <= fVar7)) + 1;
  uVar11 = ((int)fVar10 ^ -(uint)(2.1474836e+09 <= fVar10)) + 1;
  uVar14 = ((int)fVar13 ^ -(uint)(2.1474836e+09 <= fVar13)) + 1;
  fVar4 = (float)(int)(uVar5 & 0xfffffffe);
  fVar7 = (float)(int)(uVar8 & 0xfffffffe);
  fVar10 = (float)(int)(uVar11 & 0xfffffffe);
  fVar13 = (float)(int)(uVar14 & 0xfffffffe);
  fVar17 = fVar4 * -0.78515625 + ABS(*param_1) + fVar4 * -0.00024187565 + fVar4 * -3.774895e-08;
  fVar18 = fVar7 * -0.78515625 + ABS(param_1[1]) + fVar7 * -0.00024187565 + fVar7 * -3.774895e-08;
  fVar19 = fVar10 * -0.78515625 + ABS(param_1[2]) + fVar10 * -0.00024187565 + fVar10 * -3.774895e-08
  ;
  fVar20 = fVar13 * -0.78515625 + ABS(param_1[3]) + fVar13 * -0.00024187565 + fVar13 * -3.774895e-08
  ;
  fVar6 = fVar17 * fVar17;
  fVar9 = fVar18 * fVar18;
  fVar12 = fVar19 * fVar19;
  fVar15 = fVar20 * fVar20;
  fVar17 = ((fVar6 * -0.00019515296 + 0.008332161) * fVar6 + -0.16666655) * fVar6 * fVar17 + fVar17;
  fVar18 = ((fVar9 * -0.00019515296 + 0.008332161) * fVar9 + -0.16666655) * fVar9 * fVar18 + fVar18;
  fVar19 = ((fVar12 * -0.00019515296 + 0.008332161) * fVar12 + -0.16666655) * fVar12 * fVar19 +
           fVar19;
  fVar20 = ((fVar15 * -0.00019515296 + 0.008332161) * fVar15 + -0.16666655) * fVar15 * fVar20 +
           fVar20;
  uVar21 = -(uint)((uVar5 & 2) == 0);
  uVar24 = -(uint)((uVar8 & 2) == 0);
  uVar26 = -(uint)((uVar11 & 2) == 0);
  uVar28 = -(uint)((uVar14 & 2) == 0);
  fVar4 = (float)(uVar21 & (uint)fVar17);
  fVar7 = (float)(uVar24 & (uint)fVar18);
  fVar10 = (float)(uVar26 & (uint)fVar19);
  fVar13 = (float)(uVar28 & (uint)fVar20);
  fVar6 = (((fVar6 * 2.4433157e-05 + -0.0013887316) * fVar6 + 0.041666646) * fVar6 * fVar6 -
          fVar6 * _DAT_14c6dad90) + (float)DAT_14c6daca0;
  fVar9 = (((fVar9 * 2.4433157e-05 + -0.0013887316) * fVar9 + 0.041666646) * fVar9 * fVar9 -
          fVar9 * fRam000000014c6dad94) + DAT_14c6daca0._4_4_;
  fVar12 = (((fVar12 * 2.4433157e-05 + -0.0013887316) * fVar12 + 0.041666646) * fVar12 * fVar12 -
           fVar12 * fRam000000014c6dad98) + DAT_14c6daca0._8_4_;
  fVar15 = (((fVar15 * 2.4433157e-05 + -0.0013887316) * fVar15 + 0.041666646) * fVar15 * fVar15 -
           fVar15 * fRam000000014c6dad9c) + DAT_14c6daca0._12_4_;
  fVar22 = (float)(~uVar21 & (uint)fVar6);
  fVar25 = (float)(~uVar24 & (uint)fVar9);
  fVar27 = (float)(~uVar26 & (uint)fVar12);
  fVar29 = (float)(~uVar28 & (uint)fVar15);
  auVar23._0_4_ = fVar22 + fVar4;
  auVar23._4_4_ = fVar25 + fVar7;
  auVar23._8_4_ = fVar27 + fVar10;
  auVar23._12_4_ = fVar29 + fVar13;
  auVar16._0_4_ = (fVar17 - fVar4) + (fVar6 - fVar22);
  auVar16._4_4_ = (fVar18 - fVar7) + (fVar9 - fVar25);
  auVar16._8_4_ = (fVar19 - fVar10) + (fVar12 - fVar27);
  auVar16._12_4_ = (fVar20 - fVar13) + (fVar15 - fVar29);
  auVar23 = minps(auVar23,_DAT_14c6daca0);
  auVar16 = minps(auVar16,_DAT_14c6daca0);
  *param_2 = auVar23._0_4_ ^ (uVar5 & 4) << 0x1d ^ ((int)*param_1 >> 0x1f) << 0x1f;
  param_2[1] = auVar23._4_4_ ^ (uVar8 & 4) << 0x1d ^ ((int)fVar1 >> 0x1f) << 0x1f;
  param_2[2] = auVar23._8_4_ ^ (uVar11 & 4) << 0x1d ^ ((int)fVar2 >> 0x1f) << 0x1f;
  param_2[3] = auVar23._12_4_ ^ (uVar14 & 4) << 0x1d ^ ((int)fVar3 >> 0x1f) << 0x1f;
  *param_3 = (~((uVar5 & 0xfffffffe) - 2) & 4) << 0x1d ^ auVar16._0_4_;
  param_3[1] = (~((uVar8 & 0xfffffffe) - 2) & 4) << 0x1d ^ auVar16._4_4_;
  param_3[2] = (~((uVar11 & 0xfffffffe) - 2) & 4) << 0x1d ^ auVar16._8_4_;
  param_3[3] = (~((uVar14 & 0xfffffffe) - 2) & 4) << 0x1d ^ auVar16._12_4_;
  return;
}



// FUNCTION 144beae50 FUN_144beae50 body=71 status=ok
// SIG undefined FUN_144beae50(void)

undefined4 * FUN_144beae50(undefined4 *param_1)

{
  undefined1 local_118 [32];
  byte local_f8;
  
  FUN_144bfcbd0(local_118);
  if ((local_f8 & 0x40) != 0) {
    PTR_FUN_14c6da350 = &LAB_144beae40;
  }
  *param_1 = 0;
  FUN_144bfce60(local_118);
  return param_1;
}



// FUNCTION 144beaea0 FUN_144beaea0 body=177 status=ok
// SIG undefined FUN_144beaea0(void)

undefined8 * FUN_144beaea0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_res8;
  
  if (param_1 != 0) {
    local_res8 = 0x38;
    puVar1 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar1,"WriteBufferImpl");
    }
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[2] = 1;
      puVar1[1] = 0xffffffff;
      puVar1[3] = param_1;
      *puVar1 = hkIo::Detail::StreamWriteBufferImpl::vftable;
      FUN_144b3d910(param_1);
      puVar1[4] = 0;
      *(undefined4 *)(puVar1 + 5) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x2c) = 0x80000000;
      *(undefined1 *)(puVar1 + 6) = 0;
    }
    FUN_144be8030(puVar1,0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144beaf60 FUN_144beaf60 body=150 status=ok
// SIG undefined FUN_144beaf60(void)

undefined8 * FUN_144beaf60(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = 0x30;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,local_res18,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"WriteBufferImpl");
  }
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 1;
    puVar1[1] = 0xffffffff;
    *puVar1 = hkIo::Detail::ArrayWriteBufferImpl::vftable;
    puVar1[3] = param_1;
    puVar1[4] = param_2;
    puVar1[5] = 0;
  }
  FUN_144be8030(puVar1,0);
  return puVar1;
}



// FUNCTION 144beb000 FUN_144beb000 body=160 status=ok
// SIG undefined FUN_144beb000(void)

longlong * FUN_144beb000(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[3] = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0) {
    lVar3 = param_2[1];
    lVar2 = param_2[2];
    *param_1 = lVar3;
    param_1[1] = lVar2 + lVar3;
    param_1[2] = lVar3;
    param_1[4] = 0;
    lVar3 = param_2[3];
  }
  else {
    FUN_144b3d910(plVar1);
    lVar2 = param_1[6];
    param_1[6] = (longlong)plVar1;
    if (lVar2 != 0) {
      FUN_144b3f230();
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
  }
  param_1[7] = lVar3;
  param_1[3] = 1;
  return param_1;
}



// FUNCTION 144beb0a0 FUN_144beb0a0 body=39 status=ok
// SIG undefined FUN_144beb0a0(void)

void FUN_144beb0a0(longlong param_1)

{
  FUN_144beb0d0();
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_144b3f230();
    return;
  }
  return;
}



// FUNCTION 144beb0d0 FUN_144beb0d0 body=103 status=ok
// SIG undefined FUN_144beb0d0(void)

void FUN_144beb0d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)param_1[6];
  if (plVar1 == (longlong *)0x0) {
    if ((param_1[3] != 0) && ((longlong *)param_1[7] != (longlong *)0x0)) {
      *(longlong *)param_1[7] = *param_1 - param_1[2];
    }
  }
  else {
    (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
    lVar2 = param_1[6];
    param_1[6] = 0;
    if (lVar2 != 0) {
      FUN_144b3f230();
      param_1[3] = 0;
      return;
    }
  }
  param_1[3] = 0;
  return;
}



// FUNCTION 144beb140 FUN_144beb140 body=124 status=ok
// SIG undefined FUN_144beb140(void)

void FUN_144beb140(ulonglong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  for (; 0 < (longlong)param_2; param_2 = param_2 - uVar3) {
    uVar2 = *param_1;
    uVar3 = 0x1000;
    if (param_2 < 0x1000) {
      uVar3 = param_2;
    }
    if (param_1[1] < uVar2 + uVar3) {
      plVar1 = (longlong *)param_1[6];
      if (plVar1 == (longlong *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,param_1,uVar3);
      }
    }
    else {
      *param_1 = uVar2 + uVar3;
    }
    FUN_144bfb540(uVar2,0,uVar3);
  }
  return;
}



// FUNCTION 144beb1c0 FUN_144beb1c0 body=90 status=ok
// SIG undefined FUN_144beb1c0(void)

size_t FUN_144beb1c0(undefined8 *param_1,void *param_2,undefined8 param_3)

{
  longlong *plVar1;
  size_t sVar2;
  
  plVar1 = (longlong *)param_1[6];
  sVar2 = param_1[1] - (longlong)*param_1;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144beb1f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    sVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,param_1,param_2,param_3);
    return sVar2;
  }
  memcpy((void *)*param_1,param_2,sVar2);
  *param_1 = param_1[1];
  return sVar2;
}



// FUNCTION 144beb220 FUN_144beb220 body=80 status=ok
// SIG undefined FUN_144beb220(void)

size_t FUN_144beb220(longlong *param_1,longlong param_2,void *param_3,undefined8 param_4)

{
  longlong *plVar1;
  size_t sVar2;
  
  plVar1 = (longlong *)param_1[6];
  if (plVar1 != (longlong *)0x0) {
    sVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,param_1,param_2,param_3,param_4);
    return sVar2;
  }
  sVar2 = param_1[1] - (*param_1 + param_2);
  memcpy((void *)(*param_1 + param_2),param_3,sVar2);
  return sVar2;
}



// FUNCTION 144beb270 FUN_144beb270 body=25 status=ok
// SIG undefined FUN_144beb270(void)

undefined8 FUN_144beb270(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144beb282. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,param_1,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 144beb290 FUN_144beb290 body=73 status=ok
// SIG undefined FUN_144beb290(void)

void FUN_144beb290(longlong param_1,int *param_2)

{
  longlong lVar1;
  
  lVar1 = (longlong)(*param_2 - *(int *)(param_1 + 0x20));
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
            (*(longlong **)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),lVar1);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + lVar1;
  *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x20);
  return;
}



// FUNCTION 144beb2e0 FUN_144beb2e0 body=185 status=ok
// SIG undefined FUN_144beb2e0(void)

void FUN_144beb2e0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  char *pcVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  pcVar4 = (char *)(**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))
                             (*(longlong **)(param_1 + 0x18),local_res8);
  cVar1 = *pcVar4;
  *(char *)(param_1 + 0x30) = cVar1;
  lVar5 = 0;
  if (cVar1 != '\0') {
    lVar5 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))();
  }
  if (lVar5 < 1) {
    lVar5 = 0;
  }
  param_2[4] = lVar5;
  uVar3 = *(uint *)(param_1 + 0x2c) & 0x7fffffff;
  uVar6 = 0x400;
  if (0x400 < uVar3) {
    uVar6 = uVar3;
  }
  if ((*(uint *)(param_1 + 0x2c) & 0x7fffffff) < uVar6) {
    FUN_14039ab22(param_1 + 0x20,&PTR_vftable_14c6e47a0,uVar6);
  }
  if ((*(int *)(param_1 + 0x28) < (int)uVar6) || ((int)uVar6 < *(int *)(param_1 + 0x28))) {
    *(uint *)(param_1 + 0x28) = uVar6;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *param_2 = uVar2;
  param_2[2] = uVar2;
  param_2[1] = (longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x20);
  return;
}



// FUNCTION 144beb3a0 FUN_144beb3a0 body=42 status=ok
// SIG undefined FUN_144beb3a0(void)

void FUN_144beb3a0(longlong *param_1,undefined8 *param_2)

{
  (**(code **)(*param_1 + 0x40))();
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  return;
}



// FUNCTION 144beb3d0 FUN_144beb3d0 body=111 status=ok
// SIG undefined FUN_144beb3d0(void)

size_t FUN_144beb3d0(longlong *param_1,longlong *param_2,void *param_3,size_t param_4)

{
  (**(code **)(*param_1 + 0x40))();
  if ((longlong)(param_4 * 2) < (longlong)(int)param_1[5]) {
    memcpy((void *)*param_2,param_3,param_4);
    *param_2 = *param_2 + param_4;
  }
  else {
    param_4 = (**(code **)(*(longlong *)param_1[3] + 0x20))
                        ((longlong *)param_1[3],param_3,(longlong)(int)param_4);
    param_2[4] = param_2[4] + param_4;
  }
  return param_4;
}



// FUNCTION 144beb440 FUN_144beb440 body=357 status=ok
// SIG undefined FUN_144beb440(void)

undefined8
FUN_144beb440(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res8;
  undefined1 local_1a8 [80];
  undefined1 local_158 [336];
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    if ((1 < DAT_14c783f70) || (cVar1 = FUN_144bdbf80(), cVar1 != '\0')) {
      cVar1 = FUN_144bdbf80();
      if (cVar1 == '\0') {
        uVar3 = FUN_144bdc640(local_1a8);
        local_res8 = 0;
        lVar4 = FUN_144bdc480(uVar3,"_writeRawAt failed - stream does not support seeking",
                              &local_res8,0);
        *(char **)(lVar4 + 0x38) = "System\\Io\\Detail\\hkWriteBuffer.cpp";
        *(undefined8 *)(lVar4 + 0x40) = 0x5a;
        FUN_144bdc690(local_1a8);
      }
      else {
        uVar3 = FUN_144bdc810(local_158,&DAT_14c783f20,2);
        local_res8 = 0;
        lVar4 = FUN_144bdc480(uVar3,"_writeRawAt failed - stream does not support seeking",
                              &local_res8,0);
        *(char **)(lVar4 + 0x38) = "System\\Io\\Detail\\hkWriteBuffer.cpp";
        *(undefined8 *)(lVar4 + 0x40) = 0x5a;
        FUN_144bdc8a0(local_158);
      }
    }
    return 0xffffffffffffffff;
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))();
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))
            (*(longlong **)(param_1 + 0x18),&local_res8,(longlong)param_3,0);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
                    (*(longlong **)(param_1 + 0x18),param_4,(longlong)param_5);
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))
            (*(longlong **)(param_1 + 0x18),&local_res8,(longlong)iVar2,0);
  return uVar3;
}



// FUNCTION 144beb5b0 FUN_144beb5b0 body=156 status=ok
// SIG undefined FUN_144beb5b0(void)

longlong FUN_144beb5b0(longlong *param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x40))();
  iVar1 = (int)param_1[5];
  if ((int)param_1[5] < (int)param_3) {
    iVar1 = (int)param_3;
  }
  if ((int)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) < iVar1) {
    FUN_14039ab22(param_1 + 4,&PTR_vftable_14c6e47a0,(longlong)iVar1);
  }
  if (((int)param_1[5] < iVar1) || (iVar1 < (int)param_1[5])) {
    *(int *)(param_1 + 5) = iVar1;
  }
  param_2[2] = param_1[4];
  *param_2 = param_1[4] + param_3;
  param_2[1] = (longlong)(int)param_1[5] + param_1[4];
  return param_1[4];
}



// FUNCTION 144beb650 FUN_144beb650 body=169 status=ok
// SIG undefined FUN_144beb650(void)

undefined8 * FUN_144beb650(undefined8 *param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[4],*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  if (param_1[3] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 144beb700 FUN_144beb700 body=80 status=ok
// SIG undefined FUN_144beb700(void)

void FUN_144beb700(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  
  param_2[4] = 0;
  *(longlong **)(param_1 + 0x28) = param_2;
  param_2[2] = **(longlong **)(param_1 + 0x18);
  *param_2 = (longlong)(int)(*(longlong **)(param_1 + 0x18))[1] + **(longlong **)(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar2 = *(uint *)(lVar1 + 0xc) & 0x7fffffff;
  if ((*(int *)(lVar1 + 8) < (int)uVar2) || ((int)uVar2 < *(int *)(lVar1 + 8))) {
    *(uint *)(lVar1 + 8) = uVar2;
  }
  param_2[1] = (ulonglong)(*(uint *)((longlong)*(longlong **)(param_1 + 0x18) + 0xc) & 0x7fffffff) +
               **(longlong **)(param_1 + 0x18);
  return;
}



// FUNCTION 144beb750 FUN_144beb750 body=47 status=ok
// SIG undefined FUN_144beb750(void)

void FUN_144beb750(longlong param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x18);
  iVar2 = *param_2 - *piVar1;
  if ((piVar1[2] < iVar2) || (iVar2 < piVar1[2])) {
    piVar1[2] = iVar2;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  return;
}



// FUNCTION 144beb780 FUN_144beb780 body=259 status=ok
// SIG undefined FUN_144beb780(void)

ulonglong FUN_144beb780(longlong param_1,longlong *param_2,undefined1 *param_3,ulonglong param_4)

{
  undefined1 uVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  
  piVar2 = *(int **)(param_1 + 0x18);
  iVar5 = (int)*param_2 - *piVar2;
  if ((piVar2[2] < iVar5) || (iVar5 < piVar2[2])) {
    piVar2[2] = iVar5;
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar4 = plVar3[1];
  iVar5 = (int)lVar4 + (int)param_4;
  if ((int)(*(uint *)((longlong)plVar3 + 0xc) & 0x7fffffff) < iVar5) {
    FUN_14039ab22(plVar3,*(undefined8 *)(param_1 + 0x20),(longlong)iVar5);
  }
  if (0 < (int)param_4) {
    uVar8 = param_4 & 0xffffffff;
    puVar7 = (undefined1 *)((longlong)(int)lVar4 + *plVar3);
    do {
      if (puVar7 != (undefined1 *)0x0) {
        uVar1 = *param_3;
        param_3 = param_3 + 1;
        *puVar7 = uVar1;
      }
      uVar8 = uVar8 - 1;
      puVar7 = puVar7 + 1;
    } while (uVar8 != 0);
  }
  *(int *)(plVar3 + 1) = iVar5;
  *(longlong **)(param_1 + 0x28) = param_2;
  param_2[2] = **(longlong **)(param_1 + 0x18);
  *param_2 = (longlong)(int)(*(longlong **)(param_1 + 0x18))[1] + **(longlong **)(param_1 + 0x18);
  lVar4 = *(longlong *)(param_1 + 0x18);
  uVar6 = *(uint *)(lVar4 + 0xc) & 0x7fffffff;
  if ((*(int *)(lVar4 + 8) < (int)uVar6) || ((int)uVar6 < *(int *)(lVar4 + 8))) {
    *(uint *)(lVar4 + 8) = uVar6;
  }
  param_2[1] = (ulonglong)(*(uint *)((longlong)*(longlong **)(param_1 + 0x18) + 0xc) & 0x7fffffff) +
               **(longlong **)(param_1 + 0x18);
  return param_4;
}



// FUNCTION 144beb890 FUN_144beb890 body=37 status=ok
// SIG undefined FUN_144beb890(void)

size_t FUN_144beb890(longlong param_1,undefined8 param_2,longlong param_3,void *param_4,
                    size_t param_5)

{
  memcpy((void *)(**(longlong **)(param_1 + 0x18) + param_3),param_4,param_5);
  return param_5;
}



// FUNCTION 144beb8c0 FUN_144beb8c0 body=203 status=ok
// SIG undefined FUN_144beb8c0(void)

longlong FUN_144beb8c0(longlong param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  
  piVar1 = *(int **)(param_1 + 0x18);
  iVar6 = (int)*param_2 - *piVar1;
  if ((piVar1[2] < iVar6) || (iVar6 < piVar1[2])) {
    piVar1[2] = iVar6;
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar5 = plVar2[1];
  param_3 = (int)lVar5 + param_3;
  if ((int)(*(uint *)((longlong)plVar2 + 0xc) & 0x7fffffff) < param_3) {
    FUN_14039ab22(plVar2,*(undefined8 *)(param_1 + 0x20),(longlong)param_3);
  }
  *(int *)(plVar2 + 1) = param_3;
  lVar3 = *plVar2;
  *(longlong **)(param_1 + 0x28) = param_2;
  param_2[2] = **(longlong **)(param_1 + 0x18);
  *param_2 = (longlong)(int)(*(longlong **)(param_1 + 0x18))[1] + **(longlong **)(param_1 + 0x18);
  lVar4 = *(longlong *)(param_1 + 0x18);
  uVar7 = *(uint *)(lVar4 + 0xc) & 0x7fffffff;
  if ((*(int *)(lVar4 + 8) < (int)uVar7) || ((int)uVar7 < *(int *)(lVar4 + 8))) {
    *(uint *)(lVar4 + 8) = uVar7;
  }
  param_2[1] = (ulonglong)(*(uint *)((longlong)*(longlong **)(param_1 + 0x18) + 0xc) & 0x7fffffff) +
               **(longlong **)(param_1 + 0x18);
  return (int)lVar5 + lVar3;
}



// FUNCTION 144beb990 FUN_144beb990 body=3 status=ok
// SIG undefined FUN_144beb990(void)

void FUN_144beb990(void)

{
  return;
}



// FUNCTION 144beb9a0 FUN_144beb9a0 body=71 status=ok
// SIG undefined FUN_144beb9a0(void)

undefined8 * FUN_144beb9a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 144beb9f0 FUN_144beb9f0 body=111 status=ok
// SIG undefined FUN_144beb9f0(void)

undefined4 *
FUN_144beb9f0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  *param_3 = *param_5;
  param_3[1] = param_5[1];
  if ((*(byte *)(param_5 + 2) & 1) != 0) {
    FUN_144be6b20(param_5[2] & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    FUN_144be6b30(param_3[2] & 0xfffffffffffffffe);
  }
  param_3[2] = param_5[2];
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144beba60 FUN_144beba60 body=112 status=ok
// SIG undefined FUN_144beba60(void)

undefined4 *
FUN_144beba60(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  *param_5 = *param_3;
  param_5[1] = param_3[1];
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    FUN_144be6b20(param_3[2] & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_5 + 2) & 1) != 0) {
    FUN_144be6b30(param_5[2] & 0xfffffffffffffffe);
  }
  param_5[2] = param_3[2];
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144bebad0 FUN_144bebad0 body=87 status=ok
// SIG undefined FUN_144bebad0(void)

undefined8
FUN_144bebad0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  uint *puVar4;
  undefined1 local_res10 [24];
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  if (lVar1 != 0) {
    cVar3 = FUN_144b45dd0(lVar1,param_4);
    if (cVar3 != '\0') {
      puVar4 = (uint *)FUN_144b45d50(lVar1,local_res10);
      if ((*puVar4 >> 3 & 1) == 0) {
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 144bebb30 FUN_144bebb30 body=4 status=ok
// SIG undefined FUN_144bebb30(void)

undefined8 FUN_144bebb30(undefined8 param_1,undefined8 *param_2)

{
  return *param_2;
}



// FUNCTION 144bebb40 FUN_144bebb40 body=135 status=ok
// SIG undefined FUN_144bebb40(void)

undefined4 *
FUN_144bebb40(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_6 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144befdb0(param_6);
  }
  if ((uVar2 & 1) != 0) {
    FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
  }
  *param_3 = param_5;
  param_3[1] = param_6;
  uVar1 = param_3[2];
  param_3[2] = uVar2;
  if ((uVar1 & 1) != 0) {
    FUN_144be6b30(uVar1 & 0xfffffffffffffffe);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144bebbd0 FUN_144bebbd0 body=87 status=ok
// SIG undefined FUN_144bebbd0(void)

undefined8 FUN_144bebbd0(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144bebc30 FUN_144bebc30 body=733 status=ok
// SIG undefined FUN_144bebc30(void)

void FUN_144bebc30(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 local_res8 [8];
  ulonglong local_res18;
  char *local_e8;
  char *local_e0;
  longlong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  undefined8 local_b8;
  int local_b0;
  
  param_1 = (longlong *)*param_1;
  local_d8 = *param_1;
  local_d0 = param_1[1];
  local_c8 = param_1[2];
  if ((local_c8 & 1) != 0) {
    FUN_144be6b20(local_c8 & 0xfffffffffffffffe);
  }
  pcVar1 = (char *)*param_3;
  if ((pcVar1 == (char *)param_3[1]) || (*pcVar1 != '*')) {
    FUN_144be06b0(param_2,&DAT_149982a38,2);
    uVar4 = local_d0;
    if (local_d0 == 0) {
      FUN_144be0720(param_2,"void*",5);
    }
    else {
      local_e0 = "";
      local_e8 = "*";
      FUN_144bdfbf0(&local_b8,&local_e8);
      puVar6 = (undefined4 *)FUN_144bef800(uVar4,local_res8);
      uVar11 = 0;
      uVar3 = uVar11;
      if (((byte)*puVar6 & 0x1f) == 6) {
        uVar3 = uVar4;
      }
      while (((uVar3 != 0 && (lVar7 = FUN_144beee40(uVar3), lVar7 == 0)) &&
             (FUN_144beff00(uVar3,&local_res18), uVar5 = local_res18, local_res18 != 0))) {
        FUN_144be01f0(&local_b8,&DAT_149982a3c);
        puVar6 = (undefined4 *)FUN_144bef800(uVar5,local_res8);
        uVar3 = uVar11;
        uVar4 = uVar5;
        if (((byte)*puVar6 & 0x1f) == 6) {
          uVar3 = uVar5;
        }
      }
      FUN_144bede90(uVar4,param_2);
      puVar8 = (undefined8 *)FUN_144bef4c0(uVar4);
      if (puVar8 != (undefined8 *)0x0) {
        FUN_144be0720(param_2,&DAT_149981f0c,1);
        puVar12 = &DAT_14996de1b;
        puVar2 = puVar8;
        if (*(short *)(puVar8 + 1) != 0) {
          do {
            puVar9 = puVar2 + 2;
            FUN_144be0720(param_2,puVar12,0xffffffff);
            puVar12 = &DAT_14997153c;
            if (*(char *)puVar2[3] == 't') {
              FUN_144bede90(*puVar9,param_2);
            }
            else if (*(char *)puVar2[3] == 'v') {
              FUN_144bdff80(param_2,&DAT_149982a40,*puVar9);
            }
            uVar10 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar10;
            puVar2 = puVar9;
          } while ((int)uVar10 < (int)(uint)*(ushort *)(puVar8 + 1));
        }
        FUN_144be0720(param_2,&DAT_149981f18,1);
      }
      FUN_144be0720(param_2,local_b8,local_b0 + -1);
      FUN_144bdf2f0(&local_b8);
    }
    FUN_144be0720(param_2,&DAT_149982a50,1);
    FUN_144bdff80(param_2,"0x%I64x)",local_d8);
  }
  else if (local_d8 == 0) {
    FUN_144be06b0(param_2,"(null)",6);
  }
  else {
    local_e8 = pcVar1 + 1;
    local_e0 = (char *)param_3[1];
    FUN_144bec240(&local_d8,param_2,&local_e8);
  }
  if ((local_c8 & 1) != 0) {
    FUN_144be6b30(local_c8 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 144bebf10 FUN_144bebf10 body=102 status=ok
// SIG undefined FUN_144bebf10(void)

undefined8 * FUN_144bebf10(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulonglong local_res8;
  
  if (*param_1 != 0) {
    FUN_144bef280(param_1[1],&local_res8,param_3,1);
    if (1 < local_res8) {
      FUN_144bebf80(param_1,param_2);
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 144bebf80 FUN_144bebf80 body=276 status=ok
// SIG undefined FUN_144bebf80(void)

longlong * FUN_144bebf80(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 local_res8 [8];
  ulonglong local_res20;
  ulonglong local_28;
  undefined1 local_20 [8];
  
  if ((*param_1 == 0) || (FUN_144bf0690(&local_res20,param_3), local_res20 < 2)) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return param_2;
  }
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    lVar1 = param_1[1];
    FUN_144bf0690(&local_28,lVar1);
    if (1 < local_28) {
      FUN_144bf0690(local_20,lVar1);
      pbVar3 = (byte *)FUN_144bf04d0(local_20,local_res8);
      if ((*pbVar3 & 0x50) != 0) goto LAB_144bec009;
    }
    uVar4 = FUN_144befdb0(local_res20);
    uVar5 = 0;
  }
  else {
LAB_144bec009:
    uVar4 = (**(code **)(*(longlong *)(param_1[2] & 0xfffffffffffffffeU) + 0x18))
                      ((longlong *)(param_1[2] & 0xfffffffffffffffeU),param_1,local_res20);
    uVar5 = 1;
  }
  iVar2 = FUN_144bf0700(&local_res20);
  lVar1 = *param_1;
  param_2[1] = local_res20;
  *param_2 = iVar2 + lVar1;
  param_2[2] = uVar5 | uVar4;
  if (uVar5 == 0 && (uVar4 & 1) == 0) {
    return param_2;
  }
  FUN_144be6b20(uVar4 & 0xfffffffffffffffe);
  return param_2;
}



// FUNCTION 144bec0a0 FUN_144bec0a0 body=378 status=ok
// SIG undefined FUN_144bec0a0(void)

undefined4 * FUN_144bec0a0(longlong *param_1,undefined4 *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  uint *puVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  longlong *local_res8;
  ulonglong local_res20;
  undefined1 local_38 [16];
  
  if ((*param_1 != 0) && (*param_3 != 0)) {
    puVar6 = (uint *)FUN_144bef800(param_1[1],&local_res8);
    uVar1 = *puVar6;
    puVar6 = (uint *)FUN_144bef800(param_3[1],&local_res20);
    if (((uVar1 ^ *puVar6) & 0x1f) == 0) {
      lVar2 = param_3[1];
      lVar3 = *param_3;
      if ((((lVar2 != 0) && (cVar5 = FUN_144b45dd0(lVar2,param_1[1]), cVar5 != '\0')) &&
          (puVar6 = (uint *)FUN_144b45d50(lVar2,&local_res8), (*puVar6 >> 3 & 1) == 0)) &&
         ((lVar3 != 0 && ((*(byte *)(param_1 + 2) & 1) == 0)))) {
        lVar2 = param_1[1];
        FUN_144bf0690(&local_res20,lVar2);
        if (1 < local_res20) {
          FUN_144bf0690(local_38,lVar2);
          pbVar7 = (byte *)FUN_144bf04d0(local_38,&local_res8);
          if ((*pbVar7 & 0x50) != 0) goto LAB_144bec1f0;
        }
        puVar6 = (uint *)FUN_144b45d50(param_3[1],&local_res8);
        if ((*puVar6 >> 3 & 1) == 0) {
          lVar2 = param_1[1];
          lVar3 = *param_3;
          lVar4 = *param_1;
          puVar8 = (undefined8 *)FUN_144befe50(lVar2,0x200);
          if ((puVar8 != (undefined8 *)0x0) && ((code *)*puVar8 != (code *)0x0)) {
            (*(code *)*puVar8)(lVar4,lVar3,lVar2,1);
            *param_2 = 0;
            return param_2;
          }
        }
      }
LAB_144bec1f0:
      local_res8 = param_1;
      FUN_144bee300(&local_res8,param_2,param_3);
      return param_2;
    }
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144bec220 FUN_144bec220 body=28 status=ok
// SIG undefined FUN_144bec220(void)

void FUN_144bec220(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  FUN_144bec240(0,param_2,&local_18);
  return;
}



// FUNCTION 144bec240 FUN_144bec240 body=2977 status=ok
// SIG undefined FUN_144bec240(void)

void FUN_144bec240(ulonglong *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  uint *puVar8;
  ulonglong uVar9;
  char *pcVar10;
  int iVar11;
  undefined8 uVar12;
  char *pcVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  char *pcVar19;
  longlong lVar20;
  ulonglong *puVar21;
  ulonglong uVar22;
  ulonglong local_res8;
  ulonglong local_res18;
  ulonglong local_res20;
  ulonglong local_168;
  ulonglong uStack_160;
  ulonglong uStack_158;
  char *local_148;
  char *pcStack_140;
  ulonglong local_138;
  char local_130;
  longlong local_128;
  longlong lStack_120;
  ulonglong local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  ulonglong local_100;
  longlong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  undefined8 local_d8 [20];
  
  pcVar10 = (char *)*param_3;
  if ((pcVar10 == (char *)param_3[1]) || (*pcVar10 != '!')) {
    plVar7 = (longlong *)FUN_144bef430(param_1[1],&local_168,&DAT_14c6df050);
    lVar20 = *plVar7;
    if ((uStack_158 & 1) != 0) {
      FUN_144be6b30(uStack_158 & 0xfffffffffffffffe);
    }
    if ((lVar20 != 0) && (lVar20 = FUN_144f67590(lVar20,param_1,param_2), lVar20 != 0)) {
      return;
    }
    puVar8 = (uint *)FUN_144b45d50(param_1[1],&local_res8);
    if ((*puVar8 >> 3 & 1) == 0) {
      plVar7 = (longlong *)FUN_144bef430(param_1[1],&local_168,&DAT_14c6df3c0);
      puVar1 = (undefined8 *)*plVar7;
      if ((uStack_158 & 1) != 0) {
        FUN_144be6b30(uStack_158 & 0xfffffffffffffffe);
      }
      if (puVar1 != (undefined8 *)0x0) {
        (*(code *)*puVar1)(param_1,param_2,param_3);
        return;
      }
    }
  }
  else {
    *param_3 = (longlong)(pcVar10 + 1);
  }
  puVar21 = param_1 + 1;
  uVar18 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  if ((*puVar21 == 0) ||
     (puVar6 = (undefined4 *)FUN_144bef800(*puVar21,&local_res8), ((byte)*puVar6 & 0x1f) != 4)) {
    local_e0 = uStack_158;
    uVar16 = uStack_160;
    uVar9 = uVar18;
    uVar15 = uVar18;
  }
  else {
    uVar15 = *param_1;
    uVar16 = *puVar21;
    if ((param_1[2] & 1) != 0) {
      FUN_144be6b20(param_1[2] & 0xfffffffffffffffe);
    }
    local_e0 = param_1[2];
    uVar9 = local_e0;
  }
  if (uVar15 != 0) {
    local_138 = 0;
    local_130 = '\0';
    (**(code **)(*(longlong *)(uVar9 & 0xfffffffffffffffe) + 0x30))
              ((longlong *)(uVar9 & 0xfffffffffffffffe),&local_res8,uVar15,uVar16,&local_138);
    FUN_144bdf360(local_d8);
    local_148 = (char *)*param_3;
    pcStack_140 = (char *)param_3[1];
    FUN_144f502a0(&local_148,local_130,1,local_d8);
    uVar18 = local_138;
    if (local_130 != '\0') {
      uVar18 = -local_138;
    }
    FUN_144bdff50(param_2,local_d8[0],uVar18);
    FUN_144bdf2f0(local_d8);
    goto LAB_144becdac;
  }
  uStack_160 = 0;
  uStack_158 = 0;
  if ((*puVar21 == 0) ||
     (puVar6 = (undefined4 *)FUN_144bef800(*puVar21,&local_res8), ((byte)*puVar6 & 0x1f) != 3)) {
    local_138 = uStack_158;
    uVar9 = uVar18;
    uVar16 = uStack_160;
    uVar15 = uVar18;
  }
  else {
    uVar15 = *param_1;
    uVar16 = *puVar21;
    if ((param_1[2] & 1) != 0) {
      FUN_144be6b20(param_1[2] & 0xfffffffffffffffe);
    }
    local_138 = param_1[2];
    uVar9 = local_138;
  }
  if (uVar15 == 0) {
    uStack_160 = 0;
    uStack_158 = 0;
    local_e8 = uStack_158;
    uVar16 = uStack_160;
    uVar15 = uVar18;
    if ((*puVar21 != 0) &&
       (puVar6 = (undefined4 *)FUN_144bef800(*puVar21,&local_res8), local_e8 = uStack_158,
       uVar16 = uStack_160, ((byte)*puVar6 & 0x1f) == 5)) {
      uVar15 = *param_1;
      uVar16 = *puVar21;
      if ((param_1[2] & 1) != 0) {
        FUN_144be6b20(param_1[2] & 0xfffffffffffffffe);
      }
      local_e8 = param_1[2];
    }
    if (uVar15 == 0) {
      local_f0 = 0;
      local_168 = 0;
      uStack_160 = 0;
      if ((*puVar21 == 0) ||
         (puVar6 = (undefined4 *)FUN_144bef800(*puVar21,&local_res8), ((byte)*puVar6 & 0x1f) != 8))
      {
LAB_144bec8a3:
        local_res20 = 0;
        if ((*puVar21 == 0) ||
           (puVar6 = (undefined4 *)FUN_144bef800(*puVar21,&local_res8), ((byte)*puVar6 & 0x1f) != 7)
           ) {
LAB_144beca52:
          local_res18 = 0;
          uStack_160 = 0;
          uStack_158 = 0;
          uVar15 = uStack_160;
          uVar9 = uStack_158;
          if ((*puVar21 != 0) &&
             (puVar6 = (undefined4 *)FUN_144bef800(*puVar21,&local_res8), uVar15 = uStack_160,
             uVar9 = uStack_158, ((byte)*puVar6 & 0x1f) == 6)) {
            local_res18 = *param_1;
            uVar15 = *puVar21;
            if ((param_1[2] & 1) != 0) {
              FUN_144be6b20(param_1[2] & 0xfffffffffffffffe);
            }
            uVar9 = param_1[2];
          }
          if (local_res18 == 0) {
            uVar15 = uVar18;
            if ((*puVar21 != 0) &&
               (puVar6 = (undefined4 *)FUN_144bef800(*puVar21,&local_res8),
               ((byte)*puVar6 & 0x1f) == 2)) {
              local_res8 = *param_1;
              uVar16 = *puVar21;
              if ((param_1[2] & 1) != 0) {
                FUN_144be6b20(param_1[2] & 0xfffffffffffffffe);
              }
              uVar22 = local_res8;
              uVar15 = param_1[2];
              if (local_res8 != 0) {
                local_res8 = local_res8 & 0xffffffffffffff00;
                (**(code **)(*(longlong *)(uVar15 & 0xfffffffffffffffe) + 0x30))
                          ((longlong *)(uVar15 & 0xfffffffffffffffe),&local_res18,uVar22,uVar16,
                           &local_res8);
                pcVar10 = "false";
                if ((char)local_res8 != '\0') {
                  pcVar10 = "true";
                }
                FUN_144be06b0(param_2,pcVar10,0xffffffff);
                goto joined_r0x000144becd36;
              }
            }
            uVar16 = uVar18;
            if ((*puVar21 == 0) ||
               (puVar8 = (uint *)FUN_144bef800(*puVar21,&local_res8), (*puVar8 & 0x1f) != 0)) {
LAB_144becca2:
              uVar22 = 0;
              if ((*puVar21 != 0) &&
                 (puVar6 = (undefined4 *)FUN_144bef800(*puVar21,&local_res8),
                 ((byte)*puVar6 & 0x1f) == 1)) {
                local_res8 = *param_1;
                if ((param_1[2] & 1) != 0) {
                  FUN_144be6b20(param_1[2] & 0xfffffffffffffffe);
                }
                uVar22 = param_1[2];
                uVar18 = local_res8;
              }
              if (uVar18 != 0) {
                FUN_144be06b0(param_2,"incomplete",0xffffffff);
              }
              if ((uVar22 & 1) != 0) {
                FUN_144be6b30(uVar22 & 0xfffffffffffffffe);
              }
            }
            else {
              local_res8 = *param_1;
              if ((param_1[2] & 1) != 0) {
                FUN_144be6b20(param_1[2] & 0xfffffffffffffffe);
              }
              uVar16 = param_1[2];
              if (local_res8 == 0) goto LAB_144becca2;
              FUN_144be06b0(param_2,&DAT_149982a10,0xffffffff);
            }
            if ((uVar16 & 1) != 0) {
              FUN_144be6b30(uVar16 & 0xfffffffffffffffe);
            }
          }
          else {
            uStack_158 = 0;
            local_168 = 0;
            uStack_160 = 0;
            (**(code **)(*(longlong *)(uVar9 & 0xfffffffffffffffe) + 0x48))
                      ((longlong *)(uVar9 & 0xfffffffffffffffe),&local_res8,local_res18,uVar15,
                       &local_168);
            if ((((local_168 == 0) || (uStack_160 == 0)) ||
                (cVar2 = FUN_144f6a410(uStack_160,&DAT_14c6dc530), cVar2 == '\0')) ||
               (local_168 == 0)) {
              pcVar10 = (char *)*param_3;
              if ((pcVar10 == (char *)param_3[1]) || (*pcVar10 != '*')) {
                FUN_144bdff50(param_2,&DAT_149982368,local_168);
                uVar15 = uStack_158;
              }
              else {
                local_148 = pcVar10 + 1;
                pcStack_140 = (char *)param_3[1];
                FUN_144bec240(&local_168,param_2,&local_148);
                uVar15 = uStack_158;
              }
            }
            else {
              FUN_144beee90(local_168,param_2,0,0);
              uVar15 = uStack_158;
            }
          }
joined_r0x000144becd36:
          if ((uVar15 & 1) != 0) {
            FUN_144be6b30(uVar15 & 0xfffffffffffffffe);
          }
          uVar16 = local_res20;
          if ((uVar9 & 1) != 0) {
            FUN_144be6b30(uVar9 & 0xfffffffffffffffe);
            uVar16 = local_res20;
          }
        }
        else {
          local_res8 = *param_1;
          uVar15 = *puVar21;
          if ((param_1[2] & 1) != 0) {
            FUN_144be6b20(param_1[2] & 0xfffffffffffffffe);
          }
          uVar16 = param_1[2];
          local_res20 = uVar16;
          if (local_res8 == 0) goto LAB_144beca52;
          uVar12 = FUN_144beee40(uVar15);
          FUN_144be04a0(param_2,uVar12,&DAT_149982a04,0,0,0,0);
          puVar17 = &DAT_14996de1b;
          (**(code **)(*(longlong *)(uVar16 & 0xfffffffffffffffe) + 0x30))
                    ((longlong *)(uVar16 & 0xfffffffffffffffe),&local_128,local_res8,uVar15);
          while (local_f8 != -1) {
            FUN_144be0720(param_2,puVar17,0xffffffff);
            puVar17 = &DAT_14997153c;
            FUN_144bf0690(&local_res8,local_108);
            uVar12 = FUN_144bf0530(&local_res8);
            FUN_144be0720(param_2,uVar12,0xffffffff);
            FUN_144be0720(param_2,&DAT_149982a08,0xffffffff);
            FUN_144bdf360(local_d8);
            local_148 = (char *)0x0;
            pcStack_140 = (char *)0x0;
            FUN_144bec240(&uStack_110,local_d8,&local_148);
            FUN_144be01f0(param_2,local_d8[0]);
            FUN_144bdf2f0(local_d8);
            (**(code **)(*(longlong *)(local_118 & 0xfffffffffffffffe) + 0x38))
                      ((longlong *)(local_118 & 0xfffffffffffffffe),&local_128);
          }
          if ((local_100 & 1) != 0) {
            FUN_144be6b30(local_100 & 0xfffffffffffffffe);
          }
          if ((local_118 & 1) != 0) {
            FUN_144be6b30(local_118 & 0xfffffffffffffffe);
          }
          FUN_144be0720(param_2,&DAT_149982a0c,0xffffffff);
        }
        if ((uVar16 & 1) != 0) {
          FUN_144be6b30(uVar16 & 0xfffffffffffffffe);
        }
      }
      else {
        uVar15 = *param_1;
        uVar16 = *puVar21;
        local_168 = uVar15;
        uStack_160 = uVar16;
        if ((param_1[2] & 1) != 0) {
          FUN_144be6b20(param_1[2] & 0xfffffffffffffffe);
        }
        uStack_158 = param_1[2];
        local_f0 = uStack_158;
        if (uVar15 == 0) goto LAB_144bec8a3;
        FUN_144be06b0(param_2,&DAT_1499829fc,0xffffffff);
        local_118 = 0;
        uStack_110 = 0;
        local_128 = 0;
        lStack_120 = 0;
        puVar17 = &DAT_14996de1b;
        (**(code **)(*(longlong *)(local_f0 & 0xfffffffffffffffe) + 0x48))
                  ((longlong *)(local_f0 & 0xfffffffffffffffe),&local_res8,uVar15,uVar16,&local_128)
        ;
        uVar14 = (uint)local_118;
        if ((uStack_110 & 1) != 0) {
          FUN_144be6b30(uStack_110 & 0xfffffffffffffffe);
        }
        if (*param_3 != param_3[1]) {
          lVar20 = FUN_144f5a370(param_3,0x2c,0);
          if (lVar20 == 0) {
            local_128 = *param_3;
            lStack_120 = param_3[1];
            lVar20 = param_3[1];
            local_118 = uVar18;
            uStack_110 = uVar18;
          }
          else {
            local_128 = *param_3;
            local_118 = lVar20 + 1;
            uStack_110 = param_3[1];
            lStack_120 = lVar20;
          }
          if (local_128 != lVar20) {
            FUN_144bdfbf0(local_d8,&local_128);
            uVar4 = FUN_144bfbbd0(local_d8[0],10);
            if (-1 < (int)uVar4) {
              if ((int)uVar14 < (int)uVar4) {
                uVar4 = uVar14;
              }
              uVar18 = (ulonglong)uVar4;
            }
            FUN_144bdf2f0(local_d8);
          }
          if (local_118 != uStack_110) {
            FUN_144bdfbf0(local_d8,&local_118);
            iVar3 = FUN_144bfbbd0(local_d8[0],10);
            uVar4 = (uint)uVar18;
            uVar5 = iVar3 + uVar4;
            if (((int)uVar4 <= (int)uVar5) && (uVar4 = uVar14, (int)uVar5 <= (int)uVar14)) {
              uVar4 = uVar5;
            }
            uVar14 = uVar4;
            FUN_144bdf2f0(local_d8);
          }
        }
        uVar4 = (uint)uVar18;
        while ((int)uVar4 < (int)uVar14) {
          FUN_144be0720(param_2,puVar17,0xffffffff);
          puVar17 = &DAT_14997153c;
          FUN_144bdf360(local_d8);
          uVar12 = FUN_144bed0e0(&local_168,&local_128,uVar18);
          local_148 = (char *)0x0;
          pcStack_140 = (char *)0x0;
          FUN_144bec240(uVar12,local_d8,&local_148);
          if ((local_118 & 1) != 0) {
            FUN_144be6b30(local_118 & 0xfffffffffffffffe);
          }
          FUN_144be01f0(param_2,local_d8[0]);
          FUN_144bdf2f0(local_d8);
          uVar4 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar4;
        }
        FUN_144be0720(param_2,&DAT_149982a00,0xffffffff);
      }
      if ((local_f0 & 1) != 0) {
        FUN_144be6b30(local_f0 & 0xfffffffffffffffe);
      }
    }
    else {
      FUN_144bdf360(local_d8);
      iVar3 = FUN_144beec90(uVar16);
      local_148 = (char *)*param_3;
      pcStack_140 = (char *)param_3[1];
      uVar12 = 9;
      if (iVar3 != 4) {
        uVar12 = 0x11;
      }
      FUN_144f506e0(&local_148,uVar12,local_d8);
      local_res18 = 0;
      (**(code **)(*(longlong *)(local_e8 & 0xfffffffffffffffe) + 0x30))
                ((longlong *)(local_e8 & 0xfffffffffffffffe),&local_res8,uVar15,uVar16,&local_res18)
      ;
      FUN_144bdff50(param_2,local_d8[0],local_res18);
      iVar3 = FUN_144bdfd60(param_2,&DAT_1499829f8);
      if ((-1 < iVar3) && (iVar11 = (int)param_2[1] + -2, iVar3 + 2 < iVar11)) {
        pcVar13 = (char *)((longlong)iVar11 + *param_2);
        pcVar19 = (char *)(*param_2 + 2 + (longlong)iVar3);
        for (pcVar10 = pcVar19; (pcVar10 < pcVar13 && (*pcVar10 == '0')); pcVar10 = pcVar10 + 1) {
        }
        iVar3 = (int)pcVar10 - (int)pcVar19;
        if (0 < iVar3) {
          if (pcVar10 <= pcVar13) {
            lVar20 = (longlong)pcVar19 - (longlong)pcVar10;
            do {
              pcVar10[lVar20] = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (pcVar10 <= pcVar13);
          }
          FUN_144bdfcf0(param_2,((int)param_2[1] - iVar3) + -1);
        }
      }
      FUN_144bdf2f0(local_d8);
    }
    if ((local_e8 & 1) != 0) {
      FUN_144be6b30(local_e8 & 0xfffffffffffffffe);
    }
  }
  else {
    local_res18 = 0;
    (**(code **)(*(longlong *)(uVar9 & 0xfffffffffffffffe) + 0x30))
              ((longlong *)(uVar9 & 0xfffffffffffffffe),&local_res8,uVar15,uVar16,&local_res18);
    FUN_144be06b0(param_2,local_res18,0xffffffff);
  }
  if ((local_138 & 1) != 0) {
    FUN_144be6b30(local_138 & 0xfffffffffffffffe);
  }
LAB_144becdac:
  if ((local_e0 & 1) != 0) {
    FUN_144be6b30(local_e0 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 144becdf0 FUN_144becdf0 body=105 status=ok
// SIG undefined FUN_144becdf0(void)

undefined4 * FUN_144becdf0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined1 local_res20 [8];
  
  piVar1 = (int *)FUN_144f67bd0(local_res20,param_1);
  if (-1 < *piVar1) {
    *param_2 = 0;
    return param_2;
  }
  FUN_144bedf70(local_res20,param_2,param_1,param_3);
  return param_2;
}



// FUNCTION 144bece60 FUN_144bece60 body=170 status=ok
// SIG undefined FUN_144bece60(void)

int FUN_144bece60(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  int iVar4;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  if ((*param_1 == 0) || (*param_2 == 0)) {
    return (uint)(*param_2 != 0) - (uint)(*param_1 != 0);
  }
  lVar2 = param_2[1];
  puVar3 = (uint *)FUN_144bef800(param_1[1],local_res18);
  uVar1 = *puVar3;
  puVar3 = (uint *)FUN_144bef800(lVar2,local_res20);
  iVar4 = (uVar1 & 0x1f) - (*puVar3 & 0x1f);
  if (iVar4 == 0) {
    if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
      return 0;
    }
    iVar4 = FUN_144bed2b0(local_res8,param_1,param_2);
  }
  return iVar4;
}



// FUNCTION 144becf10 FUN_144becf10 body=203 status=ok
// SIG undefined FUN_144becf10(void)

undefined8 * FUN_144becf10(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  if (*param_1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return param_2;
  }
  puVar1 = (uint *)FUN_144b45d50(param_1[1],local_res8);
  lVar3 = param_1[1];
  if ((*puVar1 >> 3 & 1) != 0) {
    lVar3 = *(longlong *)(lVar3 + 8);
  }
  FUN_144f69260(&local_28,param_1,lVar3);
  piVar2 = (int *)FUN_144f6a150(local_res8,&local_28,param_1);
  if (-1 < *piVar2) {
    *param_2 = local_28;
    param_2[1] = local_20;
    param_2[2] = local_18;
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 144becfe0 FUN_144becfe0 body=152 status=ok
// SIG undefined FUN_144becfe0(void)

void FUN_144becfe0(longlong *param_1,byte param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if ((param_2 & 1) != 0) {
      lVar2 = param_1[1];
      puVar4 = (undefined8 *)FUN_144befe50(lVar2,0x100);
      if ((puVar4 != (undefined8 *)0x0) && ((code *)*puVar4 != (code *)0x0)) {
        (*(code *)*puVar4)(lVar1,lVar2,1);
      }
    }
    if ((param_2 & 2) != 0) {
      FUN_144f692e0(*param_1,param_1[1]);
      *param_1 = 0;
      param_1[1] = 0;
      uVar3 = param_1[2];
      param_1[2] = 0;
      if ((uVar3 & 1) != 0) {
        FUN_144be6b30(uVar3 & 0xfffffffffffffffe);
      }
    }
  }
  return;
}



// FUNCTION 144bed080 FUN_144bed080 body=85 status=ok
// SIG undefined FUN_144bed080(void)

void FUN_144bed080(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar2 = FUN_144befdb0();
    if ((uVar2 & 1) != 0) {
      FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
    }
    uVar1 = *(ulonglong *)(param_1 + 0x10);
    *(ulonglong *)(param_1 + 0x10) = uVar2;
    if ((uVar1 & 1) != 0) {
      FUN_144be6b30(uVar1 & 0xfffffffffffffffe);
      return;
    }
  }
  return;
}



// FUNCTION 144bed0e0 FUN_144bed0e0 body=329 status=ok
// SIG undefined FUN_144bed0e0(void)

longlong * FUN_144bed0e0(undefined8 *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 local_res18 [2];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong uStack_30;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  lVar5 = 0;
  local_res18[0] = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_10 = 0;
  (**(code **)(*(longlong *)(param_1[2] & 0xfffffffffffffffe) + 0x48))
            ((longlong *)(param_1[2] & 0xfffffffffffffffe),local_res18,*param_1,param_1[1],&local_28
            );
  if ((param_3 < 0) || ((int)local_18 <= param_3)) {
    puVar4 = &local_40;
    local_38 = 0;
    uStack_30 = 0;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    lVar5 = local_18._4_4_ * param_3 + local_28;
    local_50 = uStack_20;
    local_48 = (ulonglong)((byte)local_10 & 1) | local_10 & 0xfffffffffffffffe;
    if ((ulonglong)((byte)local_10 & 1) != 0) {
      FUN_144be6b20(local_10 & 0xfffffffffffffffe);
    }
    puVar4 = &local_58;
    bVar3 = true;
    bVar2 = false;
  }
  param_2[1] = puVar4[1];
  lVar1 = puVar4[2];
  puVar4[2] = 0;
  *param_2 = lVar5;
  param_2[2] = lVar1;
  *puVar4 = 0;
  puVar4[1] = 0;
  if (bVar2) {
    if ((uStack_30 & 1) != 0) {
      FUN_144be6b30(uStack_30 & 0xfffffffffffffffe);
    }
  }
  if ((bVar3) && ((local_48 & 1) != 0)) {
    FUN_144be6b30(local_48 & 0xfffffffffffffffe);
  }
  if ((local_10 & 1) != 0) {
    FUN_144be6b30(local_10 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 144bed230 FUN_144bed230 body=114 status=ok
// SIG undefined FUN_144bed230(void)

undefined4 * FUN_144bed230(undefined8 *param_1,undefined4 *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_144b45dd0(*(undefined8 *)(param_3 + 8),param_1[1]);
  if (cVar1 != '\0') {
    (**(code **)(*(longlong *)(param_1[2] & 0xfffffffffffffffe) + 0x40))
              ((longlong *)(param_1[2] & 0xfffffffffffffffe),param_2,*param_1,param_1[1],param_3);
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144bed2b0 FUN_144bed2b0 body=325 status=ok
// SIG undefined FUN_144bed2b0(void)

undefined8 FUN_144bed2b0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  
  puVar1 = (uint *)FUN_144bef800(*(undefined8 *)(param_2 + 8),local_res8);
  switch(*puVar1 & 0x1f) {
  case 0:
  case 1:
    break;
  case 2:
    uVar2 = FUN_144bed4d0(param_1,param_2,param_3);
    return uVar2;
  case 3:
    uVar2 = FUN_144bed830(param_1,param_2,param_3);
    return uVar2;
  case 4:
    uVar2 = FUN_144bed5c0(param_1,param_2,param_3);
    return uVar2;
  case 5:
    uVar2 = FUN_144bed710(param_1,param_2,param_3);
    return uVar2;
  case 6:
    uVar2 = FUN_144beddc0(param_1,param_2,param_3);
    return uVar2;
  case 7:
    uVar2 = FUN_144bedb80(param_1,param_2,param_3);
    return uVar2;
  case 8:
    uVar2 = FUN_144bed930(param_1,param_2,param_3);
    return uVar2;
  default:
    FUN_144bfc170(0x261011c5,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h"
                  ,0x3c,"Bad var visitor switch");
  }
  return 0;
}



// FUNCTION 144bed420 FUN_144bed420 body=26 status=ok
// SIG undefined FUN_144bed420(void)

undefined8 FUN_144bed420(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  
  if ((*param_2 == *param_3) && (param_2[1] == param_3[1])) {
    return 0;
  }
  uVar1 = FUN_144bed2b0();
  return uVar1;
}



// FUNCTION 144bed440 FUN_144bed440 body=131 status=ok
// SIG undefined FUN_144bed440(void)

ulonglong FUN_144bed440(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  
  lVar1 = param_3[1];
  puVar2 = (uint *)FUN_144bef800(param_2[1],local_res10);
  uVar4 = *puVar2;
  puVar2 = (uint *)FUN_144bef800(lVar1,local_res18);
  uVar4 = (uVar4 & 0x1f) - (*puVar2 & 0x1f);
  if (uVar4 == 0) {
    if ((*param_2 == *param_3) && (param_2[1] == param_3[1])) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_144bed2b0(param_1,param_2,param_3);
    }
  }
  else {
    uVar3 = (ulonglong)uVar4;
  }
  return uVar3;
}



// FUNCTION 144bed4d0 FUN_144bed4d0 body=229 status=ok
// SIG undefined FUN_144bed4d0(void)

int FUN_144bed4d0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  byte local_res10 [8];
  byte local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_38 [16];
  
  uVar5 = 0;
  uVar7 = 0;
  uVar4 = uVar5;
  if (param_3[1] != 0) {
    puVar1 = (undefined4 *)FUN_144bef800(param_3[1],local_res10);
    uVar4 = 0;
    if (((byte)*puVar1 & 0x1f) == 2) {
      uVar5 = *param_3;
      uVar4 = param_3[1];
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        FUN_144be6b20(param_3[2] & 0xfffffffffffffffe);
      }
      uVar7 = param_3[2];
    }
  }
  plVar6 = (longlong *)(uVar7 & 0xfffffffffffffffe);
  local_res10[0] = 0;
  (**(code **)(*plVar6 + 0x30))(plVar6,local_res20,uVar5,uVar4,local_res10);
  local_res18[0] = 0;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x30))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_38,*param_2,param_2[1],local_res18)
  ;
  uVar2 = (uint)local_res10[0];
  uVar3 = (uint)local_res18[0];
  if ((uVar7 & 1) != 0) {
    FUN_144be6b30(plVar6);
  }
  return uVar3 - uVar2;
}



// FUNCTION 144bed5c0 FUN_144bed5c0 body=328 status=ok
// SIG undefined FUN_144bed5c0(void)

int FUN_144bed5c0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 local_res10 [8];
  ulonglong local_48;
  byte local_40;
  ulonglong local_38;
  byte bStack_30;
  
  uVar6 = 0;
  uVar5 = 0;
  uVar9 = 0;
  if (param_3[1] != 0) {
    puVar3 = (undefined4 *)FUN_144bef800(param_3[1],local_res10);
    if (((byte)*puVar3 & 0x1f) == 4) {
      uVar6 = *param_3;
      uVar5 = param_3[1];
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        FUN_144be6b20(param_3[2] & 0xfffffffffffffffe);
      }
      uVar9 = param_3[2];
    }
  }
  plVar10 = (longlong *)(uVar9 & 0xfffffffffffffffe);
  local_38 = 0;
  bStack_30 = 0;
  (**(code **)(*plVar10 + 0x30))(plVar10,local_res10,uVar6,uVar5,&local_38);
  bVar2 = bStack_30;
  uVar1 = local_38;
  local_48 = 0;
  local_40 = 0;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x30))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res10,*param_2,param_2[1],&local_48
            );
  iVar4 = (uint)local_40 - (uint)bVar2;
  if (iVar4 == 0) {
    iVar8 = 1 - ((uint)local_40 + (uint)local_40);
    iVar7 = 0;
    if (local_48 < uVar1) {
      iVar7 = iVar8;
    }
    iVar4 = 0;
    if (uVar1 < local_48) {
      iVar4 = iVar8;
    }
    iVar4 = iVar4 - iVar7;
  }
  if ((uVar9 & 1) != 0) {
    FUN_144be6b30(plVar10);
  }
  return iVar4;
}



// FUNCTION 144bed710 FUN_144bed710 body=273 status=ok
// SIG undefined FUN_144bed710(void)

int FUN_144bed710(undefined8 param_1,undefined8 *param_2,ulonglong *param_3)

{
  bool bVar1;
  bool bVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar7;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  double local_res20;
  double local_58 [4];
  ulonglong uVar6;
  
  uVar4 = 0;
  uVar6 = uVar4;
  uVar7 = uVar4;
  if (param_3[1] != 0) {
    puVar3 = (undefined4 *)FUN_144bef800(param_3[1],local_res10);
    uVar4 = 0;
    uVar6 = 0;
    uVar7 = 0;
    if (((byte)*puVar3 & 0x1f) == 5) {
      uVar7 = *param_3;
      uVar4 = param_3[1];
      if ((param_3[2] & 1) != 0) {
        FUN_144be6b20(param_3[2] & 0xfffffffffffffffe);
      }
      uVar6 = param_3[2];
    }
  }
  plVar5 = (longlong *)(uVar6 & 0xfffffffffffffffe);
  local_58[0] = 0.0;
  (**(code **)(*plVar5 + 0x30))(plVar5,local_res10,uVar7,uVar4,local_58);
  local_res20 = 0.0;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x30))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res18,*param_2,param_2[1],
             &local_res20);
  bVar1 = local_58[0] < local_res20;
  bVar2 = local_res20 < local_58[0];
  if ((uVar6 & 1) != 0) {
    FUN_144be6b30(plVar5);
  }
  return (uint)bVar1 - (uint)bVar2;
}



// FUNCTION 144bed830 FUN_144bed830 body=243 status=ok
// SIG undefined FUN_144bed830(void)

ulonglong FUN_144bed830(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined8 local_res20;
  undefined8 local_38 [2];
  
  uVar6 = 0;
  uVar3 = 0;
  uVar4 = 0;
  if (param_3[1] != 0) {
    puVar1 = (undefined4 *)FUN_144bef800(param_3[1],local_res10);
    if (((byte)*puVar1 & 0x1f) == 3) {
      uVar6 = *param_3;
      uVar3 = param_3[1];
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        FUN_144be6b20(param_3[2] & 0xfffffffffffffffe);
      }
      uVar4 = param_3[2];
    }
  }
  plVar5 = (longlong *)(uVar4 & 0xfffffffffffffffe);
  local_res20 = 0;
  (**(code **)(*plVar5 + 0x30))(plVar5,local_res10,uVar6,uVar3,&local_res20);
  local_38[0] = 0;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x30))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res18,*param_2,param_2[1],local_38)
  ;
  uVar2 = FUN_144f65d20(local_38,local_res20);
  if ((uVar4 & 1) != 0) {
    FUN_144be6b30(plVar5);
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 144bed930 FUN_144bed930 body=584 status=ok
// SIG undefined FUN_144bed930(void)

int FUN_144bed930(undefined8 param_1,undefined8 *param_2,ulonglong *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  longlong local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  longlong local_90;
  ulonglong local_88;
  ulonglong uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  uVar7 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uVar6 = local_88;
  uVar9 = uVar7;
  uVar10 = uStack_80;
  if ((param_3[1] != 0) &&
     (puVar3 = (undefined4 *)FUN_144bef800(param_3[1],local_res10), uVar6 = local_88,
     uVar10 = uStack_80, ((byte)*puVar3 & 0x1f) == 8)) {
    uVar9 = *param_3;
    uVar6 = param_3[1];
    if ((param_3[2] & 1) != 0) {
      FUN_144be6b20(param_3[2] & 0xfffffffffffffffe);
    }
    uVar10 = param_3[2];
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x48))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res10,*param_2,param_2[1],&local_58
            );
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_60 = 0;
  plVar11 = (longlong *)(uVar10 & 0xfffffffffffffffe);
  (**(code **)(*plVar11 + 0x48))(plVar11,local_res10,uVar9,uVar6,&local_78);
  uVar9 = uStack_70;
  iVar2 = (int)local_48;
  if ((int)local_48 == (int)local_68) {
    if (((int)local_48 != 0) && ((int)local_68 != 0)) {
      puVar4 = (uint *)FUN_144bef800(uStack_50,local_res10);
      uVar1 = *puVar4;
      puVar4 = (uint *)FUN_144bef800(uVar9,local_res18);
      iVar8 = (uVar1 & 0x1f) - (*puVar4 & 0x1f);
      if (iVar8 != 0) goto LAB_144bedb27;
    }
    iVar8 = 0;
    if (0 < iVar2) {
      do {
        iVar5 = (int)uVar7;
        local_90 = local_68._4_4_ * iVar5 + local_78;
        local_88 = uStack_70;
        uStack_80 = (ulonglong)((byte)local_60 & 1) | local_60 & 0xfffffffffffffffe;
        if ((ulonglong)((byte)local_60 & 1) != 0) {
          FUN_144be6b20(local_60 & 0xfffffffffffffffe);
        }
        local_a8 = local_48._4_4_ * iVar5 + local_58;
        local_a0 = uStack_50;
        local_98 = (ulonglong)((byte)local_40 & 1) | local_40 & 0xfffffffffffffffe;
        if ((ulonglong)((byte)local_40 & 1) != 0) {
          FUN_144be6b20(local_40 & 0xfffffffffffffffe);
        }
        iVar8 = FUN_144bed420(param_1,&local_a8,&local_90);
        if ((local_98 & 1) != 0) {
          FUN_144be6b30(local_98 & 0xfffffffffffffffe);
        }
        if ((uStack_80 & 1) != 0) {
          FUN_144be6b30(uStack_80 & 0xfffffffffffffffe);
        }
      } while ((iVar8 == 0) &&
              (uVar7 = (ulonglong)(iVar5 + 1U), iVar8 = 0, (int)(iVar5 + 1U) < iVar2));
    }
  }
  else {
    iVar8 = (int)local_48 - (int)local_68;
  }
LAB_144bedb27:
  if ((local_60 & 1) != 0) {
    FUN_144be6b30(local_60 & 0xfffffffffffffffe);
  }
  if ((local_40 & 1) != 0) {
    FUN_144be6b30(local_40 & 0xfffffffffffffffe);
  }
  if ((uVar10 & 1) != 0) {
    FUN_144be6b30(plVar11);
  }
  return iVar8;
}



// FUNCTION 144bedb80 FUN_144bedb80 body=566 status=ok
// SIG undefined FUN_144bedb80(void)

int FUN_144bedb80(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_98 [8];
  undefined8 local_90;
  ulonglong uStack_88;
  undefined1 local_80 [16];
  ulonglong local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_48;
  undefined8 *local_40;
  
  local_90 = 0;
  uStack_88 = 0;
  uVar7 = local_90;
  uVar8 = uStack_88;
  if ((*(longlong *)(param_3 + 8) != 0) &&
     (puVar4 = (undefined4 *)FUN_144bef800(*(longlong *)(param_3 + 8),local_res10), uVar7 = local_90
     , uVar8 = uStack_88, ((byte)*puVar4 & 0x1f) == 7)) {
    uVar7 = *(undefined8 *)(param_3 + 8);
    if ((*(byte *)(param_3 + 0x10) & 1) != 0) {
      FUN_144be6b20(*(ulonglong *)(param_3 + 0x10) & 0xfffffffffffffffe);
    }
    uVar8 = *(ulonglong *)(param_3 + 0x10);
  }
  FUN_144bf0830(&local_48,*(undefined8 *)(param_2 + 8),0);
  FUN_144bf0830(&local_68,uVar7,0);
  do {
    do {
      puVar1 = local_48 + 1;
      if ((local_40 <= local_48 + 1) &&
         (cVar2 = FUN_144bf0850(&local_48), puVar1 = local_48, cVar2 == '\0')) goto LAB_144bedd00;
      local_48 = puVar1;
      pbVar5 = (byte *)FUN_144bf04d0(local_48,local_res10);
    } while ((*pbVar5 & 0x20) == 0);
    do {
      puVar1 = local_68 + 1;
      if ((local_60 <= local_68 + 1) &&
         (cVar2 = FUN_144bf0850(&local_68), puVar1 = local_68, cVar2 == '\0')) goto LAB_144bedd00;
      local_68 = puVar1;
      pbVar5 = (byte *)FUN_144bf04d0(local_68,local_res18);
    } while ((*pbVar5 & 0x20) == 0);
    uVar7 = *local_48;
    uVar6 = FUN_144bebf80(param_3,local_80,*local_68);
    uVar7 = FUN_144bebf80(param_2,local_98,uVar7);
    iVar3 = FUN_144bed440(param_1,uVar7,uVar6);
    if ((uStack_88 & 1) != 0) {
      FUN_144be6b30(uStack_88 & 0xfffffffffffffffe);
    }
    if ((local_70 & 1) != 0) {
      FUN_144be6b30(local_70 & 0xfffffffffffffffe);
    }
  } while (iVar3 == 0);
  goto LAB_144bedd7c;
  while (local_68 = puVar1, pbVar5 = (byte *)FUN_144bf04d0(local_68,local_res10),
        (*pbVar5 & 0x20) == 0) {
LAB_144bedd00:
    puVar1 = local_68 + 1;
    if ((local_60 <= local_68 + 1) &&
       (cVar2 = FUN_144bf0850(&local_68), puVar1 = local_68, cVar2 == '\0')) goto LAB_144bedd40;
  }
  iVar3 = -1;
  goto LAB_144bedd7c;
  while (local_48 = puVar1, pbVar5 = (byte *)FUN_144bf04d0(local_48,local_res10),
        (*pbVar5 & 0x20) == 0) {
LAB_144bedd40:
    puVar1 = local_48 + 1;
    if ((local_40 <= local_48 + 1) &&
       (cVar2 = FUN_144bf0850(&local_48), puVar1 = local_48, cVar2 == '\0')) {
      iVar3 = 0;
      goto LAB_144bedd7c;
    }
  }
  iVar3 = 1;
LAB_144bedd7c:
  if ((uVar8 & 1) != 0) {
    FUN_144be6b30(uVar8 & 0xfffffffffffffffe);
  }
  return iVar3;
}



// FUNCTION 144beddc0 FUN_144beddc0 body=204 status=ok
// SIG undefined FUN_144beddc0(void)

int FUN_144beddc0(undefined8 param_1,undefined8 *param_2,ulonglong *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 local_res10 [8];
  
  uVar4 = 0;
  uVar5 = uVar4;
  uVar7 = uVar4;
  if (param_3[1] != 0) {
    puVar1 = (undefined4 *)FUN_144bef800(param_3[1],local_res10);
    uVar4 = 0;
    uVar5 = 0;
    uVar7 = 0;
    if (((byte)*puVar1 & 0x1f) == 6) {
      uVar7 = *param_3;
      uVar4 = param_3[1];
      if ((param_3[2] & 1) != 0) {
        FUN_144be6b20(param_3[2] & 0xfffffffffffffffe);
      }
      uVar5 = param_3[2];
    }
  }
  lVar2 = (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x58))
                    ((longlong *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1]);
  plVar6 = (longlong *)(uVar5 & 0xfffffffffffffffe);
  lVar3 = (**(code **)(*plVar6 + 0x58))(plVar6,uVar7,uVar4);
  if ((uVar5 & 1) != 0) {
    FUN_144be6b30(plVar6);
  }
  return (uint)(0 < lVar2 - lVar3) + (int)(lVar2 - lVar3 >> 0x3f);
}



// FUNCTION 144bede90 FUN_144bede90 body=221 status=ok
// SIG undefined FUN_144bede90(void)

void FUN_144bede90(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  char *_Str;
  char *pcVar2;
  uint *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_res18 [8];
  
  _Str = (char *)FUN_144beee40();
  if (_Str == (char *)0x0) {
    FUN_144be0720(param_2,"<Unnamed",0xffffffff);
    puVar3 = (uint *)FUN_144bef800(param_1,local_res18);
    uVar4 = FUN_144beffb0(*puVar3 & 0x1f);
    lVar5 = FUN_144beee40(uVar4);
    if ((lVar5 != 0) && (iVar1 = FUN_144bfbbb0(lVar5), 0xf < iVar1)) {
      FUN_144be0720(param_2,&DAT_149982a34,0xffffffff);
      FUN_144be0720(param_2,lVar5 + 0xb,iVar1 + -0xf);
    }
    _Str = ">";
    iVar1 = -1;
  }
  else {
    pcVar2 = strchr(_Str,0x3c);
    iVar1 = -1;
    if (pcVar2 != (char *)0x0) {
      iVar1 = (int)pcVar2 - (int)_Str;
    }
  }
  FUN_144be0720(param_2,_Str,iVar1);
  return;
}



// FUNCTION 144bedf70 FUN_144bedf70 body=872 status=ok
// SIG undefined FUN_144bedf70(void)

int * FUN_144bedf70(undefined8 param_1,int *param_2,undefined8 *param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  char cVar4;
  uint *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined8 local_res8;
  undefined8 *local_res18;
  ulonglong in_stack_fffffffffffffee8;
  char *local_108;
  char *pcStack_100;
  undefined8 local_f8;
  longlong lStack_f0;
  ulonglong local_e8;
  char *local_d8;
  char *pcStack_d0;
  undefined8 local_c8 [20];
  
  local_res8 = param_1;
  puVar5 = (uint *)FUN_144bef800(param_3[1],&local_res8);
  switch(*puVar5 & 0x1f) {
  case 0:
  case 1:
  case 6:
  case 7:
  case 8:
    break;
  case 2:
    cVar4 = FUN_144bfbf10(*param_4,param_4[1] - *param_4,&DAT_149981e34);
    if (cVar4 != '\0') {
      (**(code **)(*(longlong *)(param_3[2] & 0xfffffffffffffffe) + 0x28))
                ((longlong *)(param_3[2] & 0xfffffffffffffffe),param_2,*param_3,param_3[1],1);
      return param_2;
    }
    cVar4 = FUN_144bfbf10(*param_4,param_4[1] - *param_4,"false");
    if (cVar4 != '\0') {
      (**(code **)(*(longlong *)(param_3[2] & 0xfffffffffffffffe) + 0x28))
                ((longlong *)(param_3[2] & 0xfffffffffffffffe),param_2,*param_3,param_3[1],
                 in_stack_fffffffffffffee8 & 0xffffffffffffff00);
      return param_2;
    }
    break;
  case 3:
    local_108 = (char *)*param_4;
    pcStack_100 = (char *)param_4[1];
    if ((((local_108 != pcStack_100) && (*local_108 == '\"')) &&
        (local_108 = local_108 + 1, local_108 != pcStack_100)) &&
       (pcStack_100 = pcStack_100 + -1, *pcStack_100 == '\"')) {
      local_d8 = local_108;
      pcStack_d0 = pcStack_100;
      FUN_144bdfbf0(local_c8,&local_d8);
      (**(code **)(*(longlong *)(param_3[2] & 0xfffffffffffffffe) + 0x28))
                ((longlong *)(param_3[2] & 0xfffffffffffffffe),param_2,*param_3,param_3[1],
                 local_c8[0]);
      FUN_144bdf2f0(local_c8);
      return param_2;
    }
    break;
  case 4:
    FUN_144f5a610(param_4,&local_res8,local_c8,0x80,0x80);
    if (-1 < (int)local_res8) {
      local_res18 = local_c8;
      puVar6 = (undefined8 *)FUN_144beec10(&local_108,&local_res18,&DAT_14c6da900);
      uVar7 = 0;
      iVar9 = 0;
      lVar1 = puVar6[1];
      uVar2 = *puVar6;
      if (lVar1 != 0) {
        uVar7 = FUN_144befdb0(lVar1);
      }
      if ((uVar7 & 1) != 0) {
        FUN_144be6b20(uVar7 & 0xfffffffffffffffe);
      }
      local_e8 = 0;
      local_f8 = 0;
      lStack_f0 = 0;
      uVar3 = local_e8;
      if ((lVar1 != 0) &&
         (puVar8 = (undefined4 *)FUN_144bef800(lVar1,&local_res8), uVar3 = local_e8,
         ((byte)*puVar8 & 0x1f) == 3)) {
        local_f8 = uVar2;
        lStack_f0 = lVar1;
        if ((uVar7 & 1) != 0) {
          FUN_144be6b20(uVar7 & 0xfffffffffffffffe);
        }
        uVar3 = uVar7;
        if ((local_e8 & 1) != 0) {
          FUN_144be6b30(local_e8 & 0xfffffffffffffffe);
        }
      }
      local_e8 = uVar3;
      cVar4 = FUN_144f68990(param_3,&local_f8);
      if ((local_e8 & 1) != 0) {
        FUN_144be6b30(local_e8 & 0xfffffffffffffffe);
      }
      if ((uVar7 & 1) != 0) {
        FUN_144be6b30(uVar7 & 0xfffffffffffffffe);
      }
      if (cVar4 != '\0') goto LAB_144bee231;
    }
    iVar9 = -0x7ffbfe00;
LAB_144bee231:
    *param_2 = iVar9;
    return param_2;
  case 5:
    local_108 = (char *)*param_4;
    pcStack_100 = (char *)param_4[1];
    FUN_144f68ca0(&local_res8,&local_108,&local_res18);
    if (-1 < (int)local_res8) {
      (**(code **)(*(longlong *)(param_3[2] & 0xfffffffffffffffe) + 0x28))
                ((longlong *)(param_3[2] & 0xfffffffffffffffe),param_2,*param_3,param_3[1],
                 local_res18);
      return param_2;
    }
    goto LAB_144bee2c7;
  default:
    FUN_144bfc170(0x261011c5,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h"
                  ,0x3c,"Bad var visitor switch");
    local_res8._0_4_ = 0;
LAB_144bee2c7:
    *param_2 = (int)local_res8;
    return param_2;
  }
  *param_2 = -0x7ffbfe00;
  return param_2;
}



// FUNCTION 144bee300 FUN_144bee300 body=383 status=ok
// SIG undefined FUN_144bee300(void)

undefined4 * FUN_144bee300(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  uint *puVar1;
  undefined1 local_res8 [8];
  
  puVar1 = (uint *)FUN_144bef800(*(undefined8 *)(param_3 + 8),local_res8);
  switch(*puVar1 & 0x1f) {
  case 0:
  case 1:
    *param_2 = 0x80040200;
    return param_2;
  case 2:
    FUN_144bee4b0(param_1,param_2,param_3);
    return param_2;
  case 3:
    FUN_144bee770(param_1,param_2,param_3);
    return param_2;
  case 4:
    FUN_144bee590(param_1,param_2,param_3);
    return param_2;
  case 5:
    FUN_144bee690(param_1,param_2,param_3);
    return param_2;
  case 6:
    FUN_144bee850(param_1,param_2,param_3);
    return param_2;
  case 7:
    FUN_144bee970(param_1,param_2,param_3);
    return param_2;
  case 8:
    FUN_144beea80(param_1,param_2,param_3);
    return param_2;
  default:
    FUN_144bfc170(0x261011c5,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h"
                  ,0x3c,"Bad var visitor switch");
    *param_2 = 0;
    return param_2;
  }
}



// FUNCTION 144bee4b0 FUN_144bee4b0 body=217 status=ok
// SIG undefined FUN_144bee4b0(void)

undefined8 FUN_144bee4b0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  puVar1 = (undefined8 *)*param_1;
  uVar4 = 0;
  uVar6 = 0;
  uVar3 = uVar4;
  if (puVar1[1] != 0) {
    puVar2 = (undefined4 *)FUN_144bef800(puVar1[1],local_res8);
    uVar3 = 0;
    if (((byte)*puVar2 & 0x1f) == 2) {
      uVar4 = *puVar1;
      uVar3 = puVar1[1];
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        FUN_144be6b20(puVar1[2] & 0xfffffffffffffffe);
      }
      uVar6 = puVar1[2];
    }
  }
  local_res8[0] = 0;
  (**(code **)(*(longlong *)(param_3[2] & 0xfffffffffffffffe) + 0x30))
            ((longlong *)(param_3[2] & 0xfffffffffffffffe),local_res10,*param_3,param_3[1],
             local_res8);
  plVar5 = (longlong *)(uVar6 & 0xfffffffffffffffe);
  (**(code **)(*plVar5 + 0x28))(plVar5,param_2,uVar4,uVar3,local_res8[0]);
  if ((uVar6 & 1) != 0) {
    FUN_144be6b30(plVar5);
  }
  return param_2;
}



// FUNCTION 144bee590 FUN_144bee590 body=246 status=ok
// SIG undefined FUN_144bee590(void)

undefined8 FUN_144bee590(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 local_res8 [8];
  undefined8 local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  
  puVar1 = (undefined8 *)*param_1;
  uVar6 = 0;
  uVar3 = 0;
  uVar4 = 0;
  if (puVar1[1] != 0) {
    puVar2 = (undefined4 *)FUN_144bef800(puVar1[1],local_res8);
    if (((byte)*puVar2 & 0x1f) == 4) {
      uVar6 = *puVar1;
      uVar3 = puVar1[1];
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        FUN_144be6b20(puVar1[2] & 0xfffffffffffffffe);
      }
      uVar4 = puVar1[2];
    }
  }
  local_48 = 0;
  uStack_40 = uStack_40 & 0xffffff00;
  (**(code **)(*(longlong *)(param_3[2] & 0xfffffffffffffffe) + 0x30))
            ((longlong *)(param_3[2] & 0xfffffffffffffffe),local_res8,*param_3,param_3[1],&local_48)
  ;
  plVar5 = (longlong *)(uVar4 & 0xfffffffffffffffe);
  local_38 = (undefined4)local_48;
  uStack_34 = local_48._4_4_;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  (**(code **)(*plVar5 + 0x28))(plVar5,param_2,uVar6,uVar3,&local_38);
  if ((uVar4 & 1) != 0) {
    FUN_144be6b30(plVar5);
  }
  return param_2;
}



// FUNCTION 144bee690 FUN_144bee690 body=223 status=ok
// SIG undefined FUN_144bee690(void)

undefined8 FUN_144bee690(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  
  puVar1 = (undefined8 *)*param_1;
  uVar4 = 0;
  uVar6 = 0;
  uVar3 = uVar4;
  if (puVar1[1] != 0) {
    puVar2 = (undefined4 *)FUN_144bef800(puVar1[1],local_res8);
    uVar3 = 0;
    if (((byte)*puVar2 & 0x1f) == 5) {
      uVar4 = *puVar1;
      uVar3 = puVar1[1];
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        FUN_144be6b20(puVar1[2] & 0xfffffffffffffffe);
      }
      uVar6 = puVar1[2];
    }
  }
  local_res10 = 0;
  (**(code **)(*(longlong *)(param_3[2] & 0xfffffffffffffffe) + 0x30))
            ((longlong *)(param_3[2] & 0xfffffffffffffffe),local_res8,*param_3,param_3[1],
             &local_res10);
  plVar5 = (longlong *)(uVar6 & 0xfffffffffffffffe);
  (**(code **)(*plVar5 + 0x28))(plVar5,param_2,uVar4,uVar3,local_res10);
  if ((uVar6 & 1) != 0) {
    FUN_144be6b30(plVar5);
  }
  return param_2;
}



// FUNCTION 144bee770 FUN_144bee770 body=223 status=ok
// SIG undefined FUN_144bee770(void)

undefined8 FUN_144bee770(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  
  puVar1 = (undefined8 *)*param_1;
  uVar6 = 0;
  uVar3 = 0;
  uVar4 = 0;
  if (puVar1[1] != 0) {
    puVar2 = (undefined4 *)FUN_144bef800(puVar1[1],local_res8);
    if (((byte)*puVar2 & 0x1f) == 3) {
      uVar6 = *puVar1;
      uVar3 = puVar1[1];
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        FUN_144be6b20(puVar1[2] & 0xfffffffffffffffe);
      }
      uVar4 = puVar1[2];
    }
  }
  local_res10 = 0;
  (**(code **)(*(longlong *)(param_3[2] & 0xfffffffffffffffe) + 0x30))
            ((longlong *)(param_3[2] & 0xfffffffffffffffe),local_res8,*param_3,param_3[1],
             &local_res10);
  plVar5 = (longlong *)(uVar4 & 0xfffffffffffffffe);
  (**(code **)(*plVar5 + 0x28))(plVar5,param_2,uVar6,uVar3,local_res10);
  if ((uVar4 & 1) != 0) {
    FUN_144be6b30(plVar5);
  }
  return param_2;
}



// FUNCTION 144bee850 FUN_144bee850 body=273 status=ok
// SIG undefined FUN_144bee850(void)

undefined8 FUN_144bee850(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 local_res8 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong uStack_28;
  
  puVar1 = (undefined8 *)*param_1;
  uVar6 = 0;
  uVar4 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uVar3 = uStack_30;
  uVar5 = uStack_28;
  if ((puVar1[1] != 0) &&
     (puVar2 = (undefined4 *)FUN_144bef800(puVar1[1],local_res8), uVar3 = uStack_30,
     uVar5 = uStack_28, ((byte)*puVar2 & 0x1f) == 6)) {
    uVar6 = *puVar1;
    uVar3 = puVar1[1];
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      FUN_144be6b20(puVar1[2] & 0xfffffffffffffffe);
    }
    uVar4 = puVar1[2];
    uVar5 = uVar4;
  }
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  (**(code **)(*(longlong *)(param_3[2] & 0xfffffffffffffffe) + 0x48))
            ((longlong *)(param_3[2] & 0xfffffffffffffffe),local_res8,*param_3,param_3[1],&local_38)
  ;
  (**(code **)(*(longlong *)(uVar4 & 0xfffffffffffffffe) + 0x40))
            ((longlong *)(uVar4 & 0xfffffffffffffffe),param_2,uVar6,uVar3,&local_38);
  if ((uStack_28 & 1) != 0) {
    FUN_144be6b30(uStack_28 & 0xfffffffffffffffe);
  }
  if ((uVar5 & 1) != 0) {
    FUN_144be6b30(uVar5 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 144bee970 FUN_144bee970 body=270 status=ok
// SIG undefined FUN_144bee970(void)

undefined4 * FUN_144bee970(longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 local_res8 [8];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong uStack_28;
  
  puVar1 = (undefined8 *)*param_1;
  uVar5 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uVar4 = local_30;
  uVar6 = uStack_28;
  if ((puVar1[1] != 0) &&
     (puVar3 = (undefined4 *)FUN_144bef800(puVar1[1],local_res8), uVar4 = local_30,
     uVar6 = uStack_28, ((byte)*puVar3 & 0x1f) == 7)) {
    uVar5 = *puVar1;
    uVar4 = puVar1[1];
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      FUN_144be6b20(puVar1[2] & 0xfffffffffffffffe);
    }
    uVar6 = puVar1[2];
  }
  local_38 = *param_3;
  local_30 = param_3[1];
  uStack_28 = param_3[2];
  if ((uStack_28 & 1) != 0) {
    FUN_144be6b20(uStack_28 & 0xfffffffffffffffe);
  }
  cVar2 = FUN_144b45dd0(local_30,uVar4);
  if (cVar2 == '\0') {
    *param_2 = 0x80040200;
  }
  else {
    (**(code **)(*(longlong *)(uVar6 & 0xfffffffffffffffe) + 0x40))
              ((longlong *)(uVar6 & 0xfffffffffffffffe),param_2,uVar5,uVar4,&local_38);
  }
  if ((uStack_28 & 1) != 0) {
    FUN_144be6b30(uStack_28 & 0xfffffffffffffffe);
  }
  if ((uVar6 & 1) != 0) {
    FUN_144be6b30(uVar6 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 144beea80 FUN_144beea80 body=284 status=ok
// SIG undefined FUN_144beea80(void)

undefined8 FUN_144beea80(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 local_res8 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
  puVar1 = (undefined8 *)*param_1;
  uVar6 = 0;
  uVar4 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uVar3 = uStack_30;
  uVar5 = uStack_28;
  if ((puVar1[1] != 0) &&
     (puVar2 = (undefined4 *)FUN_144bef800(puVar1[1],local_res8), uVar3 = uStack_30,
     uVar5 = uStack_28, ((byte)*puVar2 & 0x1f) == 8)) {
    uVar6 = *puVar1;
    uVar3 = puVar1[1];
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      FUN_144be6b20(puVar1[2] & 0xfffffffffffffffe);
    }
    uVar4 = puVar1[2];
    uVar5 = uVar4;
  }
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  (**(code **)(*(longlong *)(param_3[2] & 0xfffffffffffffffe) + 0x48))
            ((longlong *)(param_3[2] & 0xfffffffffffffffe),local_res8,*param_3,param_3[1],&local_38)
  ;
  (**(code **)(*(longlong *)(uVar4 & 0xfffffffffffffffe) + 0x40))
            ((longlong *)(uVar4 & 0xfffffffffffffffe),param_2,uVar6,uVar3,&local_38);
  if ((local_20 & 1) != 0) {
    FUN_144be6b30(local_20 & 0xfffffffffffffffe);
  }
  if ((uVar5 & 1) != 0) {
    FUN_144be6b30(uVar5 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 144beeba0 FUN_144beeba0 body=17 status=ok
// SIG undefined FUN_144beeba0(void)

void FUN_144beeba0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144beebad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c797f68 + 0x20))(DAT_14c797f68,param_1);
  return;
}



// FUNCTION 144beebc0 FUN_144beebc0 body=17 status=ok
// SIG undefined FUN_144beebc0(void)

void FUN_144beebc0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144beebcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c797f68 + 0x18))(DAT_14c797f68,param_1);
  return;
}



// FUNCTION 144beebe0 FUN_144beebe0 body=17 status=ok
// SIG undefined FUN_144beebe0(void)

void FUN_144beebe0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144beebed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c797f68 + 0x28))(DAT_14c797f68,param_1);
  return;
}



// FUNCTION 144beec00 FUN_144beec00 body=8 status=ok
// SIG undefined FUN_144beec00(void)

undefined8 FUN_144beec00(void)

{
  return DAT_14c797f68;
}



// FUNCTION 144beec10 FUN_144beec10 body=117 status=ok
// SIG undefined FUN_144beec10(void)

longlong * FUN_144beec10(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 local_18 [16];
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)FUN_144befde0(param_3,0x800);
    if ((puVar2 != (undefined8 *)0x0) && ((code *)*puVar2 != (code *)0x0)) {
      plVar3 = (longlong *)(*(code *)*puVar2)(local_18,param_2);
      lVar1 = plVar3[1];
      *param_1 = *plVar3;
      param_1[1] = lVar1;
      return param_1;
    }
  }
  param_1[1] = param_3;
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 144beec90 FUN_144beec90 body=90 status=ok
// SIG undefined FUN_144beec90(void)

ulonglong FUN_144beec90(ulonglong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  do {
    uVar1 = *param_1;
    if ((uVar1 >> 0x14 & 1) != 0) {
      iVar2 = (*(code *)PTR_FUN_14c6da350)((uint)uVar1 & 0xfffff);
      if (param_1 + (longlong)iVar2 + 2 == (ulonglong *)0x0) {
        return 0;
      }
      return param_1[(longlong)iVar2 + 2] & 0xffff;
    }
    if ((uVar1 & 1) != 0) {
      return 0;
    }
    param_1 = (ulonglong *)param_1[1];
  } while (param_1 != (ulonglong *)0x0);
  return 0;
}



// FUNCTION 144beecf0 FUN_144beecf0 body=102 status=ok
// SIG undefined FUN_144beecf0(void)

uint FUN_144beecf0(ulonglong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  do {
    uVar1 = *param_1;
    if ((uVar1 >> 0x14 & 1) != 0) {
      iVar2 = (*(code *)PTR_FUN_14c6da350)((uint)uVar1 & 0xfffff);
      if (param_1 + (longlong)iVar2 + 2 == (ulonglong *)0x0) {
        return 0;
      }
      return (uint)(param_1[(longlong)iVar2 + 2] >> 0x10) & 0xfff;
    }
    if ((uVar1 & 1) != 0) {
      return 0;
    }
    param_1 = (ulonglong *)param_1[1];
  } while (param_1 != (ulonglong *)0x0);
  return 0;
}



// FUNCTION 144beed60 FUN_144beed60 body=210 status=ok
// SIG undefined FUN_144beed60(void)

ulonglong * FUN_144beed60(ulonglong *param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  
  puVar3 = param_1;
  while (uVar2 = *puVar3, (uVar2 >> 0xc & 1) == 0) {
    if (((uVar2 & 1) != 0) || (puVar3 = (ulonglong *)puVar3[1], puVar3 == (ulonglong *)0x0))
    goto LAB_144beed98;
  }
  iVar1 = (*(code *)PTR_FUN_14c6da350)((uint)uVar2 & 0xfff);
  if ((puVar3 + (longlong)iVar1 + 2 != (ulonglong *)0x0) &&
     (uVar2 = puVar3[(longlong)iVar1 + 2], uVar2 != 0)) {
    *param_2 = uVar2;
    param_2[1] = (ulonglong)param_1;
    goto LAB_144beede2;
  }
LAB_144beed98:
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
  while (param_1 = (ulonglong *)param_1[1], param_1 != (ulonglong *)0x0) {
LAB_144beede2:
    uVar2 = *param_1;
    if ((uVar2 & 4) != 0) {
      uVar2 = param_1[(ulonglong)((uint)(uVar2 >> 1) & 1) + (ulonglong)((uint)uVar2 & 1) + 2];
      goto LAB_144beee0b;
    }
  }
  uVar2 = 0;
LAB_144beee0b:
  param_2[2] = uVar2;
  if ((uVar2 & 1) == 0) {
    return param_2;
  }
  FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
  return param_2;
}



// FUNCTION 144beee40 FUN_144beee40 body=79 status=ok
// SIG undefined FUN_144beee40(void)

ulonglong FUN_144beee40(ulonglong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  do {
    uVar1 = *param_1;
    if ((uVar1 & 8) != 0) {
      iVar2 = (*(code *)PTR_FUN_14c6da350)((uint)uVar1 & 7);
      if (param_1 + (longlong)iVar2 + 2 == (ulonglong *)0x0) {
        return 0;
      }
      return param_1[(longlong)iVar2 + 2];
    }
    if ((uVar1 & 1) != 0) {
      return 0;
    }
    param_1 = (ulonglong *)param_1[1];
  } while (param_1 != (ulonglong *)0x0);
  return 0;
}



// FUNCTION 144beee90 FUN_144beee90 body=552 status=ok
// SIG undefined FUN_144beee90(void)

undefined8 FUN_144beee90(ulonglong *param_1,undefined8 *param_2,code *param_3,code *param_4)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined1 local_d8 [160];
  
  uVar8 = 0;
  puVar9 = param_1;
  if (param_3 == (code *)0x0) {
    while (uVar12 = *puVar9, uVar7 = uVar8, (uVar12 & 8) == 0) {
      if (((uVar12 & 1) != 0) ||
         (puVar1 = puVar9 + 1, puVar9 = (ulonglong *)*puVar1,
         (ulonglong *)*puVar1 == (ulonglong *)0x0)) goto LAB_144beeed9;
    }
    iVar5 = (*(code *)PTR_FUN_14c6da350)((uint)uVar12 & 7);
    if (puVar9 + (longlong)iVar5 + 2 != (ulonglong *)0x0) {
      uVar7 = puVar9[(longlong)iVar5 + 2];
    }
LAB_144beeed9:
    FUN_144be06b0(param_2,uVar7,0xffffffff);
    if (*(int *)(param_2 + 1) == 1) {
      FUN_144be06b0(param_2,"unnamed",0xffffffff);
    }
  }
  else {
    (*param_3)();
  }
  while (uVar12 = *param_1, (uVar12 >> 0xf & 1) == 0) {
    if (((uVar12 & 9) != 0) || (param_1 = (ulonglong *)param_1[1], param_1 == (ulonglong *)0x0))
    goto LAB_144bef0a4;
  }
  iVar5 = (*(code *)PTR_FUN_14c6da350)((uint)uVar12 & 0x7fff);
  plVar2 = (longlong *)param_1[(longlong)iVar5 + 2];
  if ((plVar2 != (longlong *)0x0) && ((short)plVar2[1] != 0)) {
    FUN_144be0720(param_2,&DAT_149982da8,0xffffffff);
    uVar12 = uVar8;
    plVar4 = plVar2;
    if ((short)plVar2[1] != 0) {
      do {
        plVar10 = plVar4 + 2;
        if (0 < (longlong)uVar8) {
          FUN_144be0720(param_2,&DAT_14997153c,0xffffffff);
        }
        if (*(char *)plVar4[3] == 't') {
          lVar3 = *plVar10;
          if (param_4 == (code *)0x0) {
            if (lVar3 == 0) {
              FUN_144be0720(param_2,"(null)",0xffffffff);
            }
            else {
              FUN_144bdf360(local_d8);
              uVar6 = FUN_144beee90(lVar3,local_d8,param_3,0);
              FUN_144be0720(param_2,uVar6,0xffffffff);
              FUN_144bdf2f0(local_d8);
            }
          }
          else {
            (*param_4)(lVar3,param_2);
          }
        }
        else {
          local_res10 = *plVar10;
          FUN_144be16e0(param_2,local_res8,&DAT_1499819e4,&DAT_149982dd8,&local_res10);
        }
        uVar11 = (int)uVar12 + 1;
        uVar8 = uVar8 + 1;
        uVar12 = (ulonglong)uVar11;
        plVar4 = plVar10;
      } while ((int)uVar11 < (int)(uint)*(ushort *)(plVar2 + 1));
    }
    FUN_144be0720(param_2,&DAT_149982dac,0xffffffff);
  }
LAB_144bef0a4:
  return *param_2;
}



// FUNCTION 144bef0c0 FUN_144bef0c0 body=166 status=ok
// SIG undefined FUN_144bef0c0(void)

ulonglong * FUN_144bef0c0(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  
  puVar4 = param_1;
  while( true ) {
    uVar1 = *puVar4;
    uVar3 = 0;
    if ((uVar1 >> 0xf & 1) != 0) break;
    uVar5 = uVar3;
    if (((uVar1 & 9) != 0) || (puVar4 = (ulonglong *)puVar4[1], puVar4 == (ulonglong *)0x0))
    goto LAB_144bef113;
  }
  iVar2 = (*(code *)PTR_FUN_14c6da350)((uint)uVar1 & 0x7fff);
  uVar5 = puVar4[(longlong)iVar2 + 2];
LAB_144bef113:
  do {
    uVar1 = *param_1;
    if ((uVar1 & 8) != 0) {
      iVar2 = (*(code *)PTR_FUN_14c6da350)((uint)uVar1 & 7);
      if (param_1 + (longlong)iVar2 + 2 != (ulonglong *)0x0) {
        uVar3 = param_1[(longlong)iVar2 + 2];
      }
LAB_144bef146:
      *param_2 = uVar3;
      param_2[1] = uVar5;
      return param_2;
    }
    if (((uVar1 & 1) != 0) || (param_1 = (ulonglong *)param_1[1], param_1 == (ulonglong *)0x0))
    goto LAB_144bef146;
  } while( true );
}



// FUNCTION 144bef170 FUN_144bef170 body=88 status=ok
// SIG undefined FUN_144bef170(void)

undefined8 FUN_144bef170(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_1 == param_2) {
    return 0;
  }
  puVar1 = (undefined4 *)FUN_144bef0c0(param_2,local_28);
  local_48 = *puVar1;
  uStack_44 = puVar1[1];
  uStack_40 = puVar1[2];
  uStack_3c = puVar1[3];
  puVar1 = (undefined4 *)FUN_144bef0c0(param_1,local_18);
  local_38 = *puVar1;
  uStack_34 = puVar1[1];
  uStack_30 = puVar1[2];
  uStack_2c = puVar1[3];
  uVar2 = FUN_144bf0080(&local_38,&local_48);
  return uVar2;
}



// FUNCTION 144bef1d0 FUN_144bef1d0 body=67 status=ok
// SIG undefined FUN_144bef1d0(void)

undefined4 FUN_144bef1d0(ulonglong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  do {
    uVar1 = *param_1;
    if ((uVar1 & 0x10) != 0) {
      iVar2 = (*(code *)PTR_FUN_14c6da350)((uint)uVar1 & 0xf);
      return (int)param_1[(longlong)iVar2 + 2];
    }
  } while (((uVar1 & 9) == 0) && (param_1 = (ulonglong *)param_1[1], param_1 != (ulonglong *)0x0));
  return 0;
}



// FUNCTION 144bef220 FUN_144bef220 body=84 status=ok
// SIG undefined FUN_144bef220(void)

ulonglong FUN_144bef220(ulonglong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  do {
    uVar1 = *param_1;
    if ((uVar1 >> 0x12 & 1) != 0) {
      iVar2 = (*(code *)PTR_FUN_14c6da350)((uint)uVar1 & 0x3ffff);
      if (param_1 + (longlong)iVar2 + 2 == (ulonglong *)0x0) {
        return 0;
      }
      return param_1[(longlong)iVar2 + 2];
    }
    if ((uVar1 & 1) != 0) {
      return 0;
    }
    param_1 = (ulonglong *)param_1[1];
  } while (param_1 != (ulonglong *)0x0);
  return 0;
}



// FUNCTION 144bef280 FUN_144bef280 body=85 status=ok
// SIG undefined FUN_144bef280(void)

undefined8
FUN_144bef280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  puVar1 = (undefined4 *)FUN_144f5a1e0(local_18,param_3);
  local_28 = *puVar1;
  uStack_24 = puVar1[1];
  uStack_20 = puVar1[2];
  uStack_1c = puVar1[3];
  FUN_144bef2e0(param_1,param_2,&local_28,param_4);
  return param_2;
}



// FUNCTION 144bef2e0 FUN_144bef2e0 body=336 status=ok
// SIG undefined FUN_144bef2e0(void)

void FUN_144bef2e0(ulonglong *param_1,longlong *param_2,longlong *param_3,char param_4)

{
  ulonglong *puVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  
  for (; param_1 != (ulonglong *)0x0; param_1 = (ulonglong *)param_1[1]) {
    bVar3 = (byte)*param_1;
    while (puVar8 = param_1, (~bVar3 & 1) != 0) {
      param_1 = (ulonglong *)param_1[1];
      bVar3 = (byte)*param_1;
    }
    while (uVar11 = *puVar8, (uVar11 >> 0x17 & 1) == 0) {
      if (((uVar11 & 1) != 0) ||
         (puVar10 = puVar8 + 1, puVar8 = (ulonglong *)*puVar10,
         (ulonglong *)*puVar10 == (ulonglong *)0x0)) goto LAB_144bef3d3;
    }
    iVar7 = (*(code *)PTR_FUN_14c6da350)((uint)uVar11 & 0x7fffff);
    if ((puVar8 + (longlong)iVar7 + 2 != (ulonglong *)0x0) &&
       (uVar11 = puVar8[(longlong)iVar7 + 2], uVar11 != 0)) {
      plVar9 = (longlong *)(uVar11 + 8);
      plVar2 = (longlong *)(uVar11 + ((longlong)*(short *)(uVar11 + 4) + 1) * 8);
      if (plVar9 != plVar2) {
        lVar4 = *param_3;
        lVar5 = param_3[1];
        do {
          puVar8 = (ulonglong *)*plVar9;
          puVar10 = puVar8;
          if (puVar8 != (ulonglong *)0x0) {
            while (uVar11 = *puVar10, (uVar11 >> 0x10 & 1) == 0) {
              if (((uVar11 & 1) != 0) ||
                 (puVar1 = puVar10 + 1, puVar10 = (ulonglong *)*puVar1,
                 (ulonglong *)*puVar1 == (ulonglong *)0x0)) goto LAB_144bef3b8;
            }
            iVar7 = (*(code *)PTR_FUN_14c6da350)(uVar11 & 0xffff);
            if (puVar10 + (longlong)iVar7 + 2 != (ulonglong *)0x0) {
              uVar11 = puVar10[(longlong)iVar7 + 2];
              goto LAB_144bef3bb;
            }
          }
LAB_144bef3b8:
          uVar11 = 0;
LAB_144bef3bb:
          cVar6 = FUN_144bfbf10(lVar4,lVar5 - lVar4,uVar11);
          if (cVar6 != '\0') {
            *param_2 = (longlong)puVar8;
            return;
          }
          plVar9 = plVar9 + 1;
        } while (plVar9 != plVar2);
      }
    }
LAB_144bef3d3:
    if (param_4 == '\0') break;
  }
  *param_2 = 0;
  return;
}



// FUNCTION 144bef430 FUN_144bef430 body=137 status=ok
// SIG undefined FUN_144bef430(void)

longlong * FUN_144bef430(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  do {
    FUN_144f69110(&local_28,param_1,param_3);
    if (local_28 != 0) {
      *param_2 = local_28;
      param_2[1] = local_20;
      goto LAB_144bef4a2;
    }
    if ((local_18 & 1) != 0) {
      FUN_144be6b30(local_18 & 0xfffffffffffffffe);
    }
    param_1 = *(longlong *)(param_1 + 8);
  } while (param_1 != 0);
  local_18 = 0;
  *param_2 = 0;
  param_2[1] = 0;
LAB_144bef4a2:
  param_2[2] = local_18;
  return param_2;
}



// FUNCTION 144bef4c0 FUN_144bef4c0 body=73 status=ok
// SIG undefined FUN_144bef4c0(void)

ulonglong FUN_144bef4c0(ulonglong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  do {
    uVar1 = *param_1;
    if ((uVar1 >> 0xf & 1) != 0) {
      iVar2 = (*(code *)PTR_FUN_14c6da350)((uint)uVar1 & 0x7fff);
      return param_1[(longlong)iVar2 + 2];
    }
  } while (((uVar1 & 9) == 0) && (param_1 = (ulonglong *)param_1[1], param_1 != (ulonglong *)0x0));
  return 0;
}



// FUNCTION 144bef510 FUN_144bef510 body=84 status=ok
// SIG undefined FUN_144bef510(void)

ulonglong FUN_144bef510(ulonglong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  do {
    uVar1 = *param_1;
    if ((uVar1 >> 0x1a & 1) != 0) {
      iVar2 = (*(code *)PTR_FUN_14c6da350)((uint)uVar1 & 0x3ffffff);
      if (param_1 + (longlong)iVar2 + 2 == (ulonglong *)0x0) {
        return 0;
      }
      return param_1[(longlong)iVar2 + 2];
    }
    if ((uVar1 & 1) != 0) {
      return 0;
    }
    param_1 = (ulonglong *)param_1[1];
  } while (param_1 != (ulonglong *)0x0);
  return 0;
}



// FUNCTION 144bef570 FUN_144bef570 body=279 status=ok
// SIG undefined FUN_144bef570(void)

bool FUN_144bef570(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong *local_res8;
  ulonglong *local_res10;
  
  puVar7 = param_1;
  if (param_1 == param_2) {
    return true;
  }
  while( true ) {
    uVar2 = *puVar7;
    puVar9 = (ulonglong *)0x0;
    puVar8 = param_2;
    if ((uVar2 >> 0xd & 1) != 0) break;
    local_res8 = puVar9;
    if (((uVar2 & 1) != 0) ||
       (puVar1 = puVar7 + 1, puVar7 = (ulonglong *)*puVar1, (ulonglong *)*puVar1 == (ulonglong *)0x0
       )) goto LAB_144bef5e0;
  }
  iVar4 = (*(code *)PTR_FUN_14c6da350)((uint)uVar2 & 0x1fff);
  local_res8 = puVar7 + (longlong)iVar4 + 2;
LAB_144bef5e0:
  do {
    uVar2 = *puVar8;
    if ((uVar2 >> 0xd & 1) != 0) {
      iVar4 = (*(code *)PTR_FUN_14c6da350)((uint)uVar2 & 0x1fff);
      puVar9 = puVar8 + (longlong)iVar4 + 2;
LAB_144bef616:
      local_res10 = puVar9;
      if (local_res8 == (ulonglong *)0x0) {
        if (puVar9 == (ulonglong *)0x0) {
          lVar5 = FUN_144f69980(param_1);
          lVar6 = FUN_144f69980(param_2);
          return lVar5 == lVar6;
        }
      }
      else if (puVar9 != (ulonglong *)0x0) {
        uVar3 = FUN_144f68f40(&local_res8,&local_res10);
        return (bool)uVar3;
      }
      return false;
    }
    if (((uVar2 & 1) != 0) ||
       (puVar7 = puVar8 + 1, puVar8 = (ulonglong *)*puVar7, (ulonglong *)*puVar7 == (ulonglong *)0x0
       )) goto LAB_144bef616;
  } while( true );
}



// FUNCTION 144bef690 FUN_144bef690 body=159 status=ok
// SIG undefined FUN_144bef690(void)

ulonglong FUN_144bef690(ulonglong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *in_RAX;
  ulonglong *puVar3;
  
  puVar3 = param_1;
  do {
    if ((*puVar3 >> 0x13 & 1) != 0) {
      iVar2 = (*(code *)PTR_FUN_14c6da350)((uint)*puVar3 & 0x7ffff);
      in_RAX = puVar3 + (longlong)iVar2 + 2;
      if ((in_RAX != (ulonglong *)0x0) && (*in_RAX != 0)) goto LAB_144bef6e1;
      break;
    }
    puVar3 = (ulonglong *)puVar3[1];
  } while (puVar3 != (ulonglong *)0x0);
LAB_144bef6b3:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
LAB_144bef6e1:
  uVar1 = *param_1;
  if ((uVar1 & 0x40) != 0) {
    iVar2 = (*(code *)PTR_FUN_14c6da350)((uint)uVar1 & 0x3f);
    in_RAX = param_1 + (longlong)iVar2 + 2;
    if ((in_RAX != (ulonglong *)0x0) && (*in_RAX != 0)) {
      return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
    }
    goto LAB_144bef6b3;
  }
  if ((uVar1 & 1) != 0) goto LAB_144bef6b3;
  param_1 = (ulonglong *)param_1[1];
  if (param_1 == (ulonglong *)0x0) {
    return (ulonglong)in_RAX & 0xffffffffffffff00;
  }
  goto LAB_144bef6e1;
}



// FUNCTION 144bef730 FUN_144bef730 body=196 status=ok
// SIG undefined FUN_144bef730(void)

undefined8 * FUN_144bef730(ulonglong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  code *pcVar4;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar3 = param_1;
  while (uVar1 = *puVar3, (uVar1 & 0x40) == 0) {
    if (((uVar1 & 1) != 0) || (puVar3 = (ulonglong *)puVar3[1], puVar3 == (ulonglong *)0x0))
    goto LAB_144bef75e;
  }
  iVar2 = (*(code *)PTR_FUN_14c6da350)((uint)uVar1 & 0x3f);
  if (puVar3 + (longlong)iVar2 + 2 != (ulonglong *)0x0) {
    pcVar4 = (code *)puVar3[(longlong)iVar2 + 2];
    goto LAB_144bef760;
  }
LAB_144bef75e:
  pcVar4 = (code *)0x0;
LAB_144bef760:
  if (pcVar4 != (code *)0x0) {
    FUN_144f69200(&local_28,param_1);
    (*pcVar4)(local_28,param_1,1);
    *param_2 = local_28;
    param_2[1] = local_20;
    param_2[2] = local_18;
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 144bef800 FUN_144bef800 body=23 status=ok
// SIG undefined FUN_144bef800(void)

undefined4 * FUN_144bef800(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  
  bVar1 = *param_1;
  while ((bVar1 & 1) == 0) {
    param_1 = *(byte **)(param_1 + 8);
    bVar1 = *param_1;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  return param_2;
}



// FUNCTION 144bef820 FUN_144bef820 body=138 status=ok
// SIG undefined FUN_144bef820(void)

longlong * FUN_144bef820(ulonglong *param_1,longlong *param_2)

{
  short sVar1;
  short sVar2;
  ulonglong uVar3;
  short *psVar4;
  int iVar5;
  
  while (uVar3 = *param_1, (uVar3 >> 0x17 & 1) == 0) {
    if (((uVar3 & 1) != 0) || (param_1 = (ulonglong *)param_1[1], param_1 == (ulonglong *)0x0))
    goto LAB_144bef848;
  }
  iVar5 = (*(code *)PTR_FUN_14c6da350)((uint)uVar3 & 0x7fffff);
  if ((param_1 + (longlong)iVar5 + 2 != (ulonglong *)0x0) &&
     (psVar4 = (short *)param_1[(longlong)iVar5 + 2], psVar4 != (short *)0x0)) {
    sVar1 = psVar4[1];
    sVar2 = *psVar4;
    *param_2 = (longlong)(psVar4 + 4);
    param_2[1] = (longlong)(psVar4 + 4 + (longlong)((int)sVar2 + (int)sVar1) * 4);
    return param_2;
  }
LAB_144bef848:
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 144bef8b0 FUN_144bef8b0 body=131 status=ok
// SIG undefined FUN_144bef8b0(void)

longlong * FUN_144bef8b0(ulonglong *param_1,longlong *param_2)

{
  short sVar1;
  ulonglong uVar2;
  short *psVar3;
  int iVar4;
  
  while (uVar2 = *param_1, (uVar2 >> 0x17 & 1) == 0) {
    if (((uVar2 & 1) != 0) || (param_1 = (ulonglong *)param_1[1], param_1 == (ulonglong *)0x0))
    goto LAB_144bef8d8;
  }
  iVar4 = (*(code *)PTR_FUN_14c6da350)((uint)uVar2 & 0x7fffff);
  if ((param_1 + (longlong)iVar4 + 2 != (ulonglong *)0x0) &&
     (psVar3 = (short *)param_1[(longlong)iVar4 + 2], psVar3 != (short *)0x0)) {
    sVar1 = *psVar3;
    *param_2 = (longlong)(psVar3 + 4);
    param_2[1] = (longlong)(psVar3 + 4 + (longlong)sVar1 * 4);
    return param_2;
  }
LAB_144bef8d8:
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 144bef940 FUN_144bef940 body=99 status=ok
// SIG undefined FUN_144bef940(void)

int FUN_144bef940(ulonglong *param_1)

{
  ulonglong uVar1;
  short *psVar2;
  int iVar3;
  
  do {
    uVar1 = *param_1;
    if ((uVar1 >> 0x17 & 1) != 0) {
      iVar3 = (*(code *)PTR_FUN_14c6da350)((uint)uVar1 & 0x7fffff);
      if ((param_1 + (longlong)iVar3 + 2 != (ulonglong *)0x0) &&
         (psVar2 = (short *)param_1[(longlong)iVar3 + 2], psVar2 != (short *)0x0)) {
        return (int)psVar2[1] + (int)*psVar2;
      }
      return 0;
    }
    if ((uVar1 & 1) != 0) {
      return 0;
    }
    param_1 = (ulonglong *)param_1[1];
  } while (param_1 != (ulonglong *)0x0);
  return 0;
}



// FUNCTION 144bef9b0 FUN_144bef9b0 body=92 status=ok
// SIG undefined FUN_144bef9b0(void)

int FUN_144bef9b0(ulonglong *param_1)

{
  ulonglong uVar1;
  short *psVar2;
  int iVar3;
  
  do {
    uVar1 = *param_1;
    if ((uVar1 >> 0x17 & 1) != 0) {
      iVar3 = (*(code *)PTR_FUN_14c6da350)((uint)uVar1 & 0x7fffff);
      if ((param_1 + (longlong)iVar3 + 2 != (ulonglong *)0x0) &&
         (psVar2 = (short *)param_1[(longlong)iVar3 + 2], psVar2 != (short *)0x0)) {
        return (int)*psVar2;
      }
      return 0;
    }
    if ((uVar1 & 1) != 0) {
      return 0;
    }
    param_1 = (ulonglong *)param_1[1];
  } while (param_1 != (ulonglong *)0x0);
  return 0;
}



// FUNCTION 144befa10 FUN_144befa10 body=126 status=ok
// SIG undefined FUN_144befa10(void)

undefined8 * FUN_144befa10(ulonglong *param_1,undefined8 *param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  
  while (uVar1 = *param_1, (uVar1 >> 0x17 & 1) == 0) {
    if (((uVar1 & 1) != 0) || (param_1 = (ulonglong *)param_1[1], param_1 == (ulonglong *)0x0))
    goto LAB_144befa48;
  }
  iVar2 = (*(code *)PTR_FUN_14c6da350)((uint)uVar1 & 0x7fffff);
  if ((param_1 + (longlong)iVar2 + 2 != (ulonglong *)0x0) &&
     (uVar1 = param_1[(longlong)iVar2 + 2], uVar1 != 0)) {
    lVar3 = uVar1 + 8;
    goto LAB_144befa4a;
  }
LAB_144befa48:
  lVar3 = 0;
LAB_144befa4a:
  *param_2 = *(undefined8 *)(lVar3 + (longlong)param_3 * 8);
  return param_2;
}



// FUNCTION 144befa90 FUN_144befa90 body=392 status=ok
// SIG undefined FUN_144befa90(void)

undefined8 * FUN_144befa90(ulonglong *param_1,undefined8 *param_2,longlong param_3,char param_4)

{
  ulonglong *puVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  int iVar7;
  longlong lVar8;
  short *psVar9;
  
  if (param_3 != 0) {
    for (; puVar6 = param_1, param_1 != (ulonglong *)0x0;
        param_1 = (ulonglong *)FUN_144f69980(param_1[1])) {
      while ((*puVar6 >> 0x17 & 1) == 0) {
        if (((*puVar6 & 1) != 0) ||
           (puVar1 = puVar6 + 1, puVar6 = (ulonglong *)*puVar1,
           (ulonglong *)*puVar1 == (ulonglong *)0x0)) goto LAB_144befafc;
      }
      iVar3 = (*(code *)PTR_FUN_14c6da350)();
      if ((puVar6 + (longlong)iVar3 + 2 != (ulonglong *)0x0) &&
         (psVar4 = (short *)puVar6[(longlong)iVar3 + 2], psVar4 != (short *)0x0)) {
        psVar9 = psVar4 + 4;
        psVar4 = psVar9 + (longlong)((int)*psVar4 + (int)psVar4[1]) * 4;
        goto LAB_144befb01;
      }
LAB_144befafc:
      psVar9 = (short *)0x0;
      psVar4 = (short *)0x0;
LAB_144befb01:
      iVar7 = 0;
      lVar8 = 0;
      iVar3 = (int)((longlong)psVar4 - (longlong)psVar9 >> 3);
      if (0 < iVar3) {
        do {
          puVar6 = *(ulonglong **)(psVar9 + lVar8 * 4);
          if (puVar6 != (ulonglong *)0x0) {
            while (uVar5 = *puVar6, (uVar5 >> 0x10 & 1) == 0) {
              if (((uVar5 & 1) != 0) ||
                 (puVar6 = (ulonglong *)puVar6[1], puVar6 == (ulonglong *)0x0)) goto LAB_144befb3b;
            }
            iVar2 = (*(code *)PTR_FUN_14c6da350)(uVar5 & 0xffff);
            if (puVar6 + (longlong)iVar2 + 2 != (ulonglong *)0x0) {
              uVar5 = puVar6[(longlong)iVar2 + 2];
              goto LAB_144befb3d;
            }
LAB_144befb3b:
            uVar5 = 0;
LAB_144befb3d:
            if ((uVar5 != 0) && (iVar2 = FUN_144bfb930(param_3), iVar2 == 0)) {
              *param_2 = *(undefined8 *)(psVar9 + (longlong)iVar7 * 4);
              return param_2;
            }
          }
          iVar7 = iVar7 + 1;
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar3);
      }
      if (param_4 == '\0') break;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144befc20 FUN_144befc20 body=392 status=ok
// SIG undefined FUN_144befc20(void)

undefined8 * FUN_144befc20(ulonglong *param_1,undefined8 *param_2,longlong param_3,char param_4)

{
  ulonglong *puVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  int iVar7;
  longlong lVar8;
  short *psVar9;
  
  if (param_3 != 0) {
    for (; puVar6 = param_1, param_1 != (ulonglong *)0x0;
        param_1 = (ulonglong *)FUN_144f69980(param_1[1])) {
      while ((*puVar6 >> 0x17 & 1) == 0) {
        if (((*puVar6 & 1) != 0) ||
           (puVar1 = puVar6 + 1, puVar6 = (ulonglong *)*puVar1,
           (ulonglong *)*puVar1 == (ulonglong *)0x0)) goto LAB_144befc8c;
      }
      iVar3 = (*(code *)PTR_FUN_14c6da350)();
      if ((puVar6 + (longlong)iVar3 + 2 != (ulonglong *)0x0) &&
         (psVar4 = (short *)puVar6[(longlong)iVar3 + 2], psVar4 != (short *)0x0)) {
        psVar9 = psVar4 + 4;
        psVar4 = psVar9 + (longlong)((int)*psVar4 + (int)psVar4[1]) * 4;
        goto LAB_144befc91;
      }
LAB_144befc8c:
      psVar9 = (short *)0x0;
      psVar4 = (short *)0x0;
LAB_144befc91:
      iVar7 = 0;
      lVar8 = 0;
      iVar3 = (int)((longlong)psVar4 - (longlong)psVar9 >> 3);
      if (0 < iVar3) {
        do {
          puVar6 = *(ulonglong **)(psVar9 + lVar8 * 4);
          if (puVar6 != (ulonglong *)0x0) {
            while (uVar5 = *puVar6, (uVar5 >> 0x10 & 1) == 0) {
              if (((uVar5 & 1) != 0) ||
                 (puVar6 = (ulonglong *)puVar6[1], puVar6 == (ulonglong *)0x0)) goto LAB_144befccb;
            }
            iVar2 = (*(code *)PTR_FUN_14c6da350)(uVar5 & 0xffff);
            if (puVar6 + (longlong)iVar2 + 2 != (ulonglong *)0x0) {
              uVar5 = puVar6[(longlong)iVar2 + 2];
              goto LAB_144befccd;
            }
LAB_144befccb:
            uVar5 = 0;
LAB_144befccd:
            if ((uVar5 != 0) && (iVar2 = FUN_144bfbae0(param_3), iVar2 == 0)) {
              *param_2 = *(undefined8 *)(psVar9 + (longlong)iVar7 * 4);
              return param_2;
            }
          }
          iVar7 = iVar7 + 1;
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar3);
      }
      if (param_4 == '\0') break;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144befdb0 FUN_144befdb0 body=43 status=ok
// SIG undefined FUN_144befdb0(void)

ulonglong FUN_144befdb0(ulonglong *param_1)

{
  ulonglong uVar1;
  
  do {
    uVar1 = *param_1;
    if ((uVar1 & 4) != 0) {
      return param_1[(ulonglong)((uint)(uVar1 >> 1) & 1) + (ulonglong)((uint)uVar1 & 1) + 2];
    }
    param_1 = (ulonglong *)param_1[1];
  } while (param_1 != (ulonglong *)0x0);
  return 0;
}



// FUNCTION 144befde0 FUN_144befde0 body=68 status=ok
// SIG undefined FUN_144befde0(void)

ulonglong * FUN_144befde0(ulonglong *param_1,int param_2)

{
  int iVar1;
  
  do {
    if (((longlong)param_2 & *param_1) != 0) {
      iVar1 = (*(code *)PTR_FUN_14c6da350)(param_2 - 1U & (uint)*param_1);
      return param_1 + (longlong)iVar1 + 2;
    }
    param_1 = (ulonglong *)param_1[1];
  } while (param_1 != (ulonglong *)0x0);
  return (ulonglong *)0x0;
}



// FUNCTION 144befe30 FUN_144befe30 body=31 status=ok
// SIG undefined FUN_144befe30(void)

ulonglong * FUN_144befe30(ulonglong *param_1,int param_2)

{
  do {
    if (((longlong)param_2 & *param_1) != 0) {
      return param_1;
    }
  } while (((*param_1 & 1) == 0) && (param_1 = (ulonglong *)param_1[1], param_1 != (ulonglong *)0x0)
          );
  return (ulonglong *)0x0;
}



// FUNCTION 144befe50 FUN_144befe50 body=72 status=ok
// SIG undefined FUN_144befe50(void)

ulonglong * FUN_144befe50(ulonglong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  do {
    uVar1 = *param_1;
    if (((longlong)param_2 & uVar1) != 0) {
      iVar2 = (*(code *)PTR_FUN_14c6da350)(param_2 - 1U & (uint)uVar1);
      return param_1 + (longlong)iVar2 + 2;
    }
  } while (((uVar1 & 1) == 0) && (param_1 = (ulonglong *)param_1[1], param_1 != (ulonglong *)0x0));
  return (ulonglong *)0x0;
}



// FUNCTION 144befea0 FUN_144befea0 body=36 status=ok
// SIG undefined FUN_144befea0(void)

uint * FUN_144befea0(uint *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_14c6da350)(param_2 - 1U & *param_1);
  return param_1 + (longlong)iVar1 * 2 + 4;
}



// FUNCTION 144befed0 FUN_144befed0 body=36 status=ok
// SIG undefined FUN_144befed0(void)

uint * FUN_144befed0(uint *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_14c6da350)(param_2 - 1U & *param_1);
  return param_1 + (longlong)iVar1 * 2 + 4;
}



// FUNCTION 144beff00 FUN_144beff00 body=34 status=ok
// SIG undefined FUN_144beff00(void)

undefined8 * FUN_144beff00(byte *param_1,undefined8 *param_2)

{
  do {
    if ((*param_1 & 2) != 0) {
      *param_2 = *(undefined8 *)(param_1 + 0x18);
      return param_2;
    }
    param_1 = *(byte **)(param_1 + 8);
  } while (param_1 != (byte *)0x0);
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144beff30 FUN_144beff30 body=80 status=ok
// SIG undefined FUN_144beff30(void)

ulonglong FUN_144beff30(byte *param_1)

{
  int iVar1;
  
  do {
    if ((*param_1 & 1) != 0) {
      iVar1 = (*(code *)PTR_FUN_14c6da350)(0);
      if ((ulonglong *)(param_1 + ((longlong)iVar1 + 2) * 8) == (ulonglong *)0x0) {
        return 0;
      }
      return *(ulonglong *)(param_1 + ((longlong)iVar1 + 2) * 8) >> 9 & 0x7fff01;
    }
    param_1 = *(byte **)(param_1 + 8);
  } while (param_1 != (byte *)0x0);
  return 0;
}



// FUNCTION 144beff80 FUN_144beff80 body=34 status=ok
// SIG undefined FUN_144beff80(void)

undefined8 FUN_144beff80(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  while ((~bVar1 & 1) != 0) {
    param_1 = *(byte **)(param_1 + 8);
    bVar1 = *param_1;
  }
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 144beffb0 FUN_144beffb0 body=102 status=ok
// SIG undefined FUN_144beffb0(void)

undefined * FUN_144beffb0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return &DAT_14c6dc530;
  case 1:
    return &DAT_14c6dcd88;
  case 2:
    return &DAT_14c6dca20;
  case 3:
    return &DAT_14c6dcc08;
  case 4:
    return &DAT_14c6dcb40;
  case 5:
    return &DAT_14c6dcbd0;
  case 6:
    return &DAT_14c6dcc40;
  case 7:
    return &DAT_14c6dcd18;
  case 8:
    return &DAT_14c6dcc78;
  default:
    return (undefined *)0x0;
  }
}



// FUNCTION 144bf0040 FUN_144bf0040 body=59 status=ok
// SIG undefined FUN_144bf0040(void)

undefined8 FUN_144bf0040(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_144bdff00(param_2);
  local_18 = *param_1;
  uStack_14 = param_1[1];
  uStack_10 = param_1[2];
  uStack_c = param_1[3];
  FUN_144bf0af0(&local_18,param_2);
  return *param_2;
}



// FUNCTION 144bf0080 FUN_144bf0080 body=391 status=ok
// SIG undefined FUN_144bf0080(void)

ulonglong FUN_144bf0080(longlong *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  char cVar2;
  char cVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  ulonglong *puVar11;
  longlong lVar12;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  lVar12 = *param_2;
  if (*param_1 == 0) {
    if (lVar12 != 0) {
      return 0xffffffff;
    }
  }
  else {
    if (lVar12 == 0) {
      return 1;
    }
    if ((*param_1 != lVar12) && (uVar7 = FUN_144bfb930(), (int)uVar7 != 0)) {
      return uVar7;
    }
    puVar4 = (ulonglong *)param_1[1];
    puVar5 = (ulonglong *)param_2[1];
    if (puVar4 != puVar5) {
      if (puVar4 == (ulonglong *)0x0) {
        if (puVar5 != (ulonglong *)0x0) {
          return (ulonglong)-(uint)((short)puVar5[1] != 0);
        }
      }
      else {
        if (puVar5 == (ulonglong *)0x0) {
          return (ulonglong)(((uint)puVar4[1] & 0xffff) != 0);
        }
        uVar10 = (uint)puVar4[1] & 0xffff;
        uVar9 = (uint)puVar5[1] & 0xffff;
        if (uVar10 < uVar9) {
          return 0xffffffff;
        }
        if (uVar10 != uVar9) {
          return 1;
        }
        if (uVar10 != 0) {
          lVar12 = 0;
          puVar6 = puVar4;
          do {
            puVar11 = puVar6 + 2;
            puVar1 = (ulonglong *)((longlong)puVar11 + ((longlong)puVar5 - (longlong)puVar4));
            if (puVar11 == (ulonglong *)0x0) {
              if (puVar1 != (ulonglong *)0x0) {
                return 0xffffffff;
              }
            }
            else {
              if (puVar1 == (ulonglong *)0x0) {
                return 1;
              }
              cVar2 = *(char *)puVar6[3];
              cVar3 = **(char **)(((longlong)puVar5 - (longlong)puVar4) + 8 + (longlong)puVar11);
              if (cVar2 < cVar3) {
                return 0xffffffff;
              }
              if (cVar3 < cVar2) {
                return 1;
              }
              if (cVar2 == 't') {
                uVar7 = *puVar11;
                if (uVar7 != *puVar1) {
                  puVar8 = (undefined4 *)FUN_144bef0c0(*puVar1,local_28);
                  local_48 = *puVar8;
                  uStack_44 = puVar8[1];
                  uStack_40 = puVar8[2];
                  uStack_3c = puVar8[3];
                  puVar8 = (undefined4 *)FUN_144bef0c0(uVar7,local_18);
                  local_38 = *puVar8;
                  uStack_34 = puVar8[1];
                  uStack_30 = puVar8[2];
                  uStack_2c = puVar8[3];
                  uVar7 = FUN_144bf0080(&local_38,&local_48);
                  if ((int)uVar7 != 0) {
                    return uVar7;
                  }
                }
              }
              else if (cVar2 == 'v') {
                if (*puVar11 < *puVar1) {
                  return 0xffffffff;
                }
                if (*puVar11 != *puVar1) {
                  return 1;
                }
              }
            }
            lVar12 = lVar12 + 1;
            puVar6 = puVar11;
            if ((longlong)(ulonglong)uVar10 <= lVar12) {
              return 0;
            }
          } while( true );
        }
      }
    }
  }
  return 0;
}



// FUNCTION 144bf0210 FUN_144bf0210 body=231 status=ok
// SIG undefined FUN_144bf0210(void)

void FUN_144bf0210(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  puVar6 = (ulonglong *)param_1[1];
  puVar1 = (undefined4 *)*param_1;
  if (puVar6 != (ulonglong *)0x0) {
    cVar2 = FUN_144b45dd0(puVar6,&DAT_14c6dd1d0);
    if (cVar2 != '\0') {
      uVar7 = 0;
      do {
        uVar4 = *puVar6;
        if ((uVar4 >> 0x15 & 1) == 0) {
LAB_144bf027f:
          uVar5 = 0;
        }
        else {
          iVar3 = (*(code *)PTR_FUN_14c6da350)((uint)uVar4 & 0x1fffff);
          uVar4 = *puVar6;
          if (puVar6 + (longlong)iVar3 + 2 == (ulonglong *)0x0) goto LAB_144bf027f;
          uVar5 = puVar6[(longlong)iVar3 + 2];
        }
        uVar7 = uVar7 | uVar5;
      } while (((uVar4 & 1) == 0) && (puVar6 = (ulonglong *)puVar6[1], puVar6 != (ulonglong *)0x0));
      if (((uVar7 >> 3 & 1) == 0) && (puVar1 != (undefined4 *)0x0)) {
        FUN_144bdff00(param_2);
        local_18 = *puVar1;
        uStack_14 = puVar1[1];
        uStack_10 = puVar1[2];
        uStack_c = puVar1[3];
        FUN_144bf0af0(&local_18,param_2);
        return;
      }
    }
  }
  FUN_144be06b0(param_2,"<No Type Name>",0xffffffff);
  return;
}



// FUNCTION 144bf0300 FUN_144bf0300 body=404 status=ok
// SIG undefined FUN_144bf0300(void)

uint FUN_144bf0300(longlong *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong *puVar11;
  int iVar12;
  ulonglong *puVar13;
  undefined8 *puVar14;
  ulonglong local_28;
  ulonglong local_20;
  
  if (*param_1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = FUN_144bea740();
  }
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 == (undefined8 *)0x0) {
    return uVar5;
  }
  iVar12 = 0;
  puVar4 = puVar2;
  if (*(short *)(puVar2 + 1) != 0) {
    do {
      puVar14 = puVar4 + 2;
      cVar1 = *(char *)puVar4[3];
      uVar9 = cVar1 * -0x61c8864f;
      uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | cVar1 * -0x4f000000;
      uVar5 = uVar5 ^ uVar5 * 0x40 + (uVar9 >> 2) + 0x9e3779b9 + uVar9;
      if (cVar1 == 't') {
        puVar13 = (ulonglong *)*puVar14;
        puVar11 = puVar13;
        do {
          uVar8 = *puVar11;
          if ((uVar8 >> 0xf & 1) != 0) {
            iVar6 = (*(code *)PTR_FUN_14c6da350)((uint)uVar8 & 0x7fff);
            uVar8 = puVar11[(longlong)iVar6 + 2];
            goto LAB_144bf03c0;
          }
        } while (((uVar8 & 9) == 0) &&
                (puVar11 = (ulonglong *)puVar11[1], puVar11 != (ulonglong *)0x0));
        uVar8 = 0;
LAB_144bf03c0:
        uVar3 = *puVar13;
        if ((uVar3 & 8) == 0) {
          if (((uVar3 & 1) != 0) || (puVar13 = (ulonglong *)puVar13[1], puVar13 == (ulonglong *)0x0)
             ) goto LAB_144bf03d6;
          goto LAB_144bf03c0;
        }
        iVar6 = (*(code *)PTR_FUN_14c6da350)((uint)uVar3 & 7);
        if (puVar13 + (longlong)iVar6 + 2 != (ulonglong *)0x0) {
          local_28 = puVar13[(longlong)iVar6 + 2];
          goto LAB_144bf03d8;
        }
LAB_144bf03d6:
        local_28 = 0;
LAB_144bf03d8:
        local_20 = uVar8;
        uVar8 = FUN_144bf0300(&local_28);
        iVar6 = (int)uVar8;
        uVar10 = ((uint)(uVar8 >> 2) & 0x3fffffff) + 0x9e3779b9;
      }
      else {
        iVar6 = (int)*puVar14;
        uVar9 = iVar6 * -0x61c8864f;
        iVar7 = (int)((ulonglong)*puVar14 >> 0x20);
        uVar10 = iVar7 * -0x61c8864f;
        uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                iVar6 * -0x4f000000;
        uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                 iVar7 * -0x4f000000;
        uVar10 = uVar9 + uVar10 * 0x40 + (uVar9 >> 2) + 0x9e3779b9 ^ uVar10;
        iVar6 = (uVar10 >> 2) + 0x9e3779b9;
      }
      iVar12 = iVar12 + 1;
      uVar5 = uVar5 ^ uVar10 + iVar6 + uVar5 * 0x40;
      puVar4 = puVar14;
    } while (iVar12 < (int)(uint)*(ushort *)(puVar2 + 1));
  }
  return uVar5;
}



// FUNCTION 144bf04a0 FUN_144bf04a0 body=36 status=ok
// SIG undefined FUN_144bf04a0(void)

undefined8 * FUN_144bf04a0(undefined8 *param_1,uint *param_2)

{
  *param_1 = 0;
  if ((&DAT_00000001 < param_2) && ((*param_2 >> 0x11 & 1) != 0)) {
    *param_1 = param_2;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144bf04d0 FUN_144bf04d0 body=96 status=ok
// SIG undefined FUN_144bf04d0(void)

uint * FUN_144bf04d0(longlong *param_1,uint *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  
  puVar1 = (ulonglong *)*param_1;
  uVar2 = *puVar1;
  if ((uVar2 >> 0x11 & 1) != 0) {
    iVar3 = (*(code *)PTR_FUN_14c6da350)((uint)uVar2 & 0x1ffff);
    puVar1 = puVar1 + (longlong)iVar3 + 2;
    if (puVar1 != (ulonglong *)0x0) {
      *param_2 = (uint)(*puVar1 >> 0x10) & 0xffff;
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144bf0530 FUN_144bf0530 body=80 status=ok
// SIG undefined FUN_144bf0530(void)

ulonglong FUN_144bf0530(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  
  puVar3 = (ulonglong *)*param_1;
  if (puVar3 != (ulonglong *)0x0) {
    while (uVar1 = *puVar3, (uVar1 >> 0x10 & 1) == 0) {
      if ((uVar1 & 1) != 0) {
        return 0;
      }
      puVar3 = (ulonglong *)puVar3[1];
      if (puVar3 == (ulonglong *)0x0) {
        return 0;
      }
    }
    iVar2 = (*(code *)PTR_FUN_14c6da350)(uVar1 & 0xffff);
    if (puVar3 + (longlong)iVar2 + 2 != (ulonglong *)0x0) {
      return puVar3[(longlong)iVar2 + 2];
    }
  }
  return 0;
}



// FUNCTION 144bf0580 FUN_144bf0580 body=258 status=ok
// SIG undefined FUN_144bf0580(void)

void FUN_144bf0580(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  undefined1 local_res8 [8];
  ulonglong local_res20;
  ulonglong local_28 [2];
  
  plVar1 = (longlong *)*param_1;
  puVar4 = (ulonglong *)*plVar1;
  if (puVar4 == (ulonglong *)0x0) {
    FUN_144be06b0(param_2,"(null Decl)",0xffffffff);
    return;
  }
  while( true ) {
    uVar2 = *puVar4;
    uVar5 = 0;
    local_res20 = uVar5;
    if ((uVar2 >> 0x10 & 1) != 0) break;
    if (((uVar2 & 1) != 0) || (puVar4 = (ulonglong *)puVar4[1], puVar4 == (ulonglong *)0x0))
    goto LAB_144bf05bc;
  }
  iVar3 = (*(code *)PTR_FUN_14c6da350)(uVar2 & 0xffff);
  if (puVar4 + (longlong)iVar3 + 2 != (ulonglong *)0x0) {
    local_res20 = puVar4[(longlong)iVar3 + 2];
  }
LAB_144bf05bc:
  puVar4 = (ulonglong *)*plVar1;
  if (puVar4 != (ulonglong *)0x0) {
    while (uVar2 = *puVar4, (uVar2 >> 0x12 & 1) == 0) {
      if (((uVar2 & 1) != 0) || (puVar4 = (ulonglong *)puVar4[1], puVar4 == (ulonglong *)0x0))
      goto LAB_144bf0625;
    }
    iVar3 = (*(code *)PTR_FUN_14c6da350)((uint)uVar2 & 0x3ffff);
    uVar5 = 0;
    if (puVar4 + (longlong)iVar3 + 2 != (ulonglong *)0x0) {
      uVar5 = puVar4[(longlong)iVar3 + 2];
    }
  }
LAB_144bf0625:
  local_28[0] = uVar5;
  FUN_144be1640(param_2,local_res8,"{}::{}",&DAT_149982de8,local_28,&local_res20);
  return;
}



// FUNCTION 144bf0690 FUN_144bf0690 body=108 status=ok
// SIG undefined FUN_144bf0690(void)

undefined8 * FUN_144bf0690(undefined8 *param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  
  puVar3 = (ulonglong *)0x0;
  *param_1 = 0;
  if (&DAT_00000001 < param_2) {
    puVar2 = puVar3;
    if ((*param_2 >> 0x11 & 1) != 0) {
      iVar1 = (*(code *)PTR_FUN_14c6da350)((uint)*param_2 & 0x1ffff);
      if (param_2 + (longlong)iVar1 + 2 != (ulonglong *)0x0) {
        puVar2 = (ulonglong *)param_2[(longlong)iVar1 + 2];
      }
    }
    if (((ulonglong)puVar2 & 0x300000) == 0) {
      param_2 = puVar3;
    }
    *param_1 = param_2;
  }
  return param_1;
}



// FUNCTION 144bf0700 FUN_144bf0700 body=66 status=ok
// SIG undefined FUN_144bf0700(void)

undefined2 FUN_144bf0700(longlong *param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  
  puVar1 = (ulonglong *)*param_1;
  uVar2 = *puVar1;
  if ((uVar2 >> 0x11 & 1) != 0) {
    iVar3 = (*(code *)PTR_FUN_14c6da350)((uint)uVar2 & 0x1ffff);
    puVar1 = puVar1 + (longlong)iVar3 + 2;
    if (puVar1 != (ulonglong *)0x0) {
      return (short)*puVar1;
    }
  }
  return 0;
}


