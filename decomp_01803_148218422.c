// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148218422 FUN_148218422 body=115 status=ok
// SIG undefined FUN_148218422(void)

void FUN_148218422(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_149ed05f0;
  plVar3 = *(longlong **)(param_1 + 0xc0);
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
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000148218491. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148218496 FUN_148218496 body=33 status=ok
// SIG undefined FUN_148218496(void)

void FUN_148218496(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140ca8f8e(param_2 + 2);
  *(undefined1 *)((longlong)param_2 + 0x2c) = 3;
  return;
}



// FUNCTION 1482184d6 FUN_1482184d6 body=75 status=ok
// SIG undefined FUN_1482184d6(void)

undefined1 FUN_1482184d6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146a6959c(param_2,param_3);
    FUN_140f13d9e(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0xc0;
    param_3 = param_3 + 0xc0;
  }
  return 1;
}



// FUNCTION 14821854a FUN_14821854a body=59 status=ok
// SIG undefined FUN_14821854a(void)

undefined8 FUN_14821854a(longlong *param_1)

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



// FUNCTION 148218596 FUN_148218596 body=40 status=ok
// SIG undefined FUN_148218596(void)

void FUN_148218596(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_14589bc04(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 148218652 FUN_148218652 body=75 status=ok
// SIG undefined FUN_148218652(void)

undefined8 FUN_148218652(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_144a787a6();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1482186c6 FUN_1482186c6 body=59 status=ok
// SIG undefined FUN_1482186c6(void)

undefined8 FUN_1482186c6(longlong *param_1)

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



// FUNCTION 14821870c FUN_14821870c body=38 status=ok
// SIG undefined FUN_14821870c(void)

void FUN_14821870c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1482187ee FUN_1482187ee body=59 status=ok
// SIG undefined FUN_1482187ee(void)

undefined8 FUN_1482187ee(longlong *param_1)

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



// FUNCTION 148218918 FUN_148218918 body=91 status=ok
// SIG undefined FUN_148218918(void)

undefined8 FUN_148218918(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      uVar1 = *(undefined8 *)(param_3 + -0x10);
      *(undefined8 *)(param_2 + -10) = *(undefined8 *)(param_3 + -10);
      *(undefined8 *)(param_2 + -0x10) = uVar1;
      FUN_148218ac4(param_2,param_3);
      FUN_148218b24(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14821899c FUN_14821899c body=59 status=ok
// SIG undefined FUN_14821899c(void)

undefined8 FUN_14821899c(longlong *param_1)

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



// FUNCTION 1482189e2 FUN_1482189e2 body=34 status=ok
// SIG undefined FUN_1482189e2(void)

void FUN_1482189e2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_148218a7e(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148218a52 FUN_148218a52 body=43 status=ok
// SIG undefined FUN_148218a52(void)

undefined8 FUN_148218a52(undefined8 param_1,int param_2)

{
  FUN_148218a7e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 148218a7e FUN_148218a7e body=70 status=ok
// SIG undefined FUN_148218a7e(void)

void FUN_148218a7e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae3d680;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_1459a6409(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148218ac4 FUN_148218ac4 body=95 status=ok
// SIG undefined FUN_148218ac4(void)

undefined8 * FUN_148218ac4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1459a6409(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148218b74(param_1,iVar1);
      FUN_148218be7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148218b24 FUN_148218b24 body=79 status=ok
// SIG undefined FUN_148218b24(void)

undefined8 * FUN_148218b24(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148218c6e(param_1,iVar1);
      FUN_148218cd0(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148218b74 FUN_148218b74 body=115 status=ok
// SIG undefined FUN_148218b74(void)

void FUN_148218b74(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148218be7 FUN_148218be7 body=134 status=ok
// SIG undefined FUN_148218be7(void)

void FUN_148218be7(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar5[-3] = *param_2;
      uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar3 = *(undefined4 *)(param_2 + 2);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      *puVar5 = 0;
      iVar1 = *(int *)(param_2 + 4);
      _Src = (void *)param_2[3];
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 5;
      puVar5 = puVar5 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148218c6e FUN_148218c6e body=98 status=ok
// SIG undefined FUN_148218c6e(void)

void FUN_148218c6e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148218cd0 FUN_148218cd0 body=82 status=ok
// SIG undefined FUN_148218cd0(void)

void FUN_148218cd0(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 148218d24 FUN_148218d24 body=48 status=ok
// SIG undefined FUN_148218d24(void)

void FUN_148218d24(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148218d54 FUN_148218d54 body=36 status=ok
// SIG undefined FUN_148218d54(void)

undefined8 FUN_148218d54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148218d94 FUN_148218d94 body=93 status=ok
// SIG undefined FUN_148218d94(void)

void FUN_148218d94(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae3d6a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148218df2 FUN_148218df2 body=123 status=ok
// SIG undefined FUN_148218df2(void)

void FUN_148218df2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ae3d6a0;
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



// FUNCTION 148218e6e FUN_148218e6e body=21 status=ok
// SIG undefined FUN_148218e6e(void)

undefined8 FUN_148218e6e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148218e84 FUN_148218e84 body=132 status=ok
// SIG undefined FUN_148218e84(void)

void FUN_148218e84(longlong *param_1,longlong param_2)

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
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x14) == param_2) {
          FUN_148218f08(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x14 + 0xc);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 148218f08 FUN_148218f08 body=93 status=ok
// SIG undefined FUN_148218f08(void)

void FUN_148218f08(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x14;
  lVar6 = (longlong)*(int *)(lVar1 + 0x10);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0xc + lVar6 * 0x14);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x14 + 0xc);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0xc);
  FUN_145764936(param_1,param_2,1);
  return;
}



// FUNCTION 148218f66 FUN_148218f66 body=36 status=ok
// SIG undefined FUN_148218f66(void)

undefined8 FUN_148218f66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148218fa4 FUN_148218fa4 body=29 status=ok
// SIG undefined FUN_148218fa4(void)

bool FUN_148218fa4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148218fc2 FUN_148218fc2 body=26 status=ok
// SIG undefined FUN_148218fc2(void)

bool FUN_148218fc2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148218fdc FUN_148218fdc body=93 status=ok
// SIG undefined FUN_148218fdc(void)

void FUN_148218fdc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae3d710;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14821903a FUN_14821903a body=123 status=ok
// SIG undefined FUN_14821903a(void)

void FUN_14821903a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae3d710;
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



// FUNCTION 1482190b6 FUN_1482190b6 body=158 status=ok
// SIG undefined FUN_1482190b6(void)

bool FUN_1482190b6(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 148219156 FUN_148219156 body=36 status=ok
// SIG undefined FUN_148219156(void)

undefined8 FUN_148219156(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148219194 FUN_148219194 body=29 status=ok
// SIG undefined FUN_148219194(void)

bool FUN_148219194(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1482191b2 FUN_1482191b2 body=26 status=ok
// SIG undefined FUN_1482191b2(void)

bool FUN_1482191b2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1482191cc FUN_1482191cc body=93 status=ok
// SIG undefined FUN_1482191cc(void)

void FUN_1482191cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae3d780;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14821922a FUN_14821922a body=123 status=ok
// SIG undefined FUN_14821922a(void)

void FUN_14821922a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae3d780;
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



// FUNCTION 1482192a6 FUN_1482192a6 body=40 status=ok
// SIG undefined FUN_1482192a6(void)

void FUN_1482192a6(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001482192cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1482192ce FUN_1482192ce body=152 status=ok
// SIG undefined FUN_1482192ce(void)

bool FUN_1482192ce(longlong param_1,undefined8 param_2)

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
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 148219368 FUN_148219368 body=180 status=ok
// SIG undefined FUN_148219368(void)

longlong * FUN_148219368(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x14);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_1482193ff;
          break;
        }
        iVar1 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14821941e(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x14);
LAB_1482193ff:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 14821941e FUN_14821941e body=274 status=ok
// SIG undefined FUN_14821941e(void)

undefined4 * FUN_14821941e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148219532(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  *(undefined1 *)(local_40 + 1) = 0;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  cVar1 = FUN_148219618(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 2) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
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
      FUN_148219710(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148219532 FUN_148219532 body=230 status=ok
// SIG undefined FUN_148219532(void)

int * FUN_148219532(longlong *param_1,int *param_2)

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



// FUNCTION 148219618 FUN_148219618 body=134 status=ok
// SIG undefined FUN_148219618(void)

undefined8 FUN_148219618(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x14);
        if (*plVar2 == *param_3) {
          lVar1 = *param_3;
          *(int *)(plVar2 + 1) = (int)param_3[1];
          *plVar2 = lVar1;
          FUN_14821969e(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 14821969e FUN_14821969e body=114 status=ok
// SIG undefined FUN_14821969e(void)

void FUN_14821969e(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 148219710 FUN_148219710 body=473 status=ok
// SIG undefined FUN_148219710(void)

void FUN_148219710(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x14);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x10 + lVar6 * 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar6 * 0x14) =
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



// FUNCTION 1482198ea FUN_1482198ea body=132 status=ok
// SIG undefined FUN_1482198ea(void)

void FUN_1482198ea(longlong *param_1,longlong param_2)

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
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x14) == param_2) {
          FUN_14821996e(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x14 + 0xc);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14821996e FUN_14821996e body=87 status=ok
// SIG undefined FUN_14821996e(void)

void FUN_14821996e(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x14;
  lVar6 = (longlong)*(int *)(lVar1 + 0x10);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0xc + lVar6 * 0x14);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x14 + 0xc);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0xc);
  FUN_14821969e();
  return;
}



// FUNCTION 1482199c6 FUN_1482199c6 body=201 status=ok
// SIG undefined FUN_1482199c6(void)

void FUN_1482199c6(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14cb44960;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14cb4496c = DAT_14cb4496c + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14cb44958 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14cb44958 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2,param_3), cVar3 != '\0')))
    {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14cb4496c = DAT_14cb4496c + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_148219a75;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14cb4496c = DAT_14cb4496c + -1;
LAB_148219a75:
  FUN_14474d06a(&DAT_14cb44958,0);
  return;
}



// FUNCTION 148219a90 FUN_148219a90 body=221 status=ok
// SIG undefined FUN_148219a90(void)

longlong FUN_148219a90(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_140a5071c();
  *(undefined4 *)(param_1 + 0x1a8) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  uVar2 = DAT_14c8463f8;
  *(undefined8 *)(param_1 + 0x1c0) = DAT_14c8463f0;
  *(undefined8 *)(param_1 + 0x1c8) = uVar2;
  *(undefined1 *)(param_1 + 0x1d0) = 1;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1ec) = 1;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  uVar2 = DAT_14c8463f8;
  *(undefined8 *)(param_1 + 0x200) = DAT_14c8463f0;
  *(undefined8 *)(param_1 + 0x208) = uVar2;
  *(undefined1 *)(param_1 + 0x210) = 1;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined2 *)(param_1 + 0x228) = 0x101;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined1 **)(param_1 + 0x240) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0x248) = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x250) = 1;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined1 **)(param_1 + 0x268) = &DAT_200000002;
  *(undefined8 *)(param_1 + 0x270) = DAT_14c98dec8;
  lVar3 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x278) = DAT_14c98ded0;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 148219b6e FUN_148219b6e body=115 status=ok
// SIG undefined FUN_148219b6e(void)

longlong * FUN_148219b6e(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146a8d64e(*param_1,param_3);
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



// FUNCTION 148219be2 FUN_148219be2 body=136 status=ok
// SIG undefined FUN_148219be2(void)

void FUN_148219be2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x278);
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
  FUN_1449db362(param_1 + 600);
  FUN_1449db362(param_1 + 0x230);
  FUN_1449db362(param_1 + 0x218);
  FUN_1449db362(param_1 + 0x1f0);
  FUN_1449db362(param_1 + 0x1d8);
  FUN_1449db362(param_1 + 0x1b0);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 148219c6e FUN_148219c6e body=147 status=ok
// SIG undefined FUN_148219c6e(void)

void FUN_148219c6e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ae3dd30;
  param_1[0x86] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x9a];
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
  param_1[0x70] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x84];
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
  FUN_140ffd6b6(param_1 + 2);
  FUN_142873a18(param_1);
  return;
}



// FUNCTION 148219d02 FUN_148219d02 body=117 status=ok
// SIG undefined FUN_148219d02(void)

void FUN_148219d02(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x380;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x430;
  FUN_14122c7a8(param_1 + 0x10,param_2);
  return;
}



// FUNCTION 148219d78 FUN_148219d78 body=77 status=ok
// SIG undefined FUN_148219d78(void)

undefined8 * FUN_148219d78(undefined8 *param_1)

{
  FUN_145a4f208();
  *param_1 = &PTR_FUN_14ae3dda0;
  FUN_140ca8f8e(param_1 + 2);
  FUN_140ca8d78(param_1 + 0x18);
  FUN_140ca8d78(param_1 + 0x86);
  FUN_140ca8d78(param_1 + 0xf4);
  return param_1;
}



// FUNCTION 148219dc6 FUN_148219dc6 body=121 status=ok
// SIG undefined FUN_148219dc6(void)

void FUN_148219dc6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ae3dda0;
  FUN_140ffd6b6(param_1 + 0xf4);
  FUN_140ffd6b6(param_1 + 0x86);
  FUN_140ffd6b6(param_1 + 0x18);
  param_1[2] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x16];
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
  FUN_142873a18(param_1);
  return;
}



// FUNCTION 148219e40 FUN_148219e40 body=104 status=ok
// SIG undefined FUN_148219e40(void)

void FUN_148219e40(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x10;
  FUN_14122c7a8(param_1 + 0xc0,param_2);
  FUN_14122c7a8(param_1 + 0x430,param_2);
  FUN_14122c7a8(param_1 + 0x7a0,param_2);
  return;
}



// FUNCTION 148219ea8 FUN_148219ea8 body=38 status=ok
// SIG undefined FUN_148219ea8(void)

undefined8 FUN_148219ea8(undefined8 param_1,int param_2)

{
  FUN_148219c6e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148219edc FUN_148219edc body=38 status=ok
// SIG undefined FUN_148219edc(void)

undefined8 FUN_148219edc(undefined8 param_1,int param_2)

{
  FUN_148219dc6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148219f10 FUN_148219f10 body=67 status=ok
// SIG undefined FUN_148219f10(void)

void FUN_148219f10(undefined8 param_1,undefined8 *param_2)

{
  FUN_145a4f208(param_2);
  *param_2 = &PTR_FUN_14ae3dd30;
  FUN_140ca8d78(param_2 + 2);
  FUN_140ca8f8e(param_2 + 0x70);
  FUN_140ca8f8e(param_2 + 0x86);
  return;
}



// FUNCTION 148219f54 FUN_148219f54 body=67 status=ok
// SIG undefined FUN_148219f54(void)

void FUN_148219f54(undefined8 param_1,undefined8 *param_2)

{
  FUN_145a4f208(param_2);
  *param_2 = &PTR_FUN_14ae3dd30;
  FUN_140ca8d78(param_2 + 2);
  FUN_140ca8f8e(param_2 + 0x70);
  FUN_140ca8f8e(param_2 + 0x86);
  return;
}



// FUNCTION 148219fbc FUN_148219fbc body=121 status=ok
// SIG undefined FUN_148219fbc(void)

undefined8 FUN_148219fbc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x430;
    param_2 = param_2 + 0x430;
    do {
      FUN_141254448(param_2 + -0x420,param_3 + -0x420);
      FUN_140f13d9e(param_2 + -0xb0,param_3 + -0xb0);
      FUN_140f13d9e(param_2,param_3);
      param_3 = param_3 + 0x4e0;
      param_2 = param_2 + 0x4e0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14821a05e FUN_14821a05e body=59 status=ok
// SIG undefined FUN_14821a05e(void)

undefined8 FUN_14821a05e(longlong *param_1)

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



// FUNCTION 14821a0aa FUN_14821a0aa body=40 status=ok
// SIG undefined FUN_14821a0aa(void)

void FUN_14821a0aa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4e0) == '\x01') {
    FUN_148219c6e(param_2);
    *(undefined1 *)(param_2 + 0x4e0) = 0;
  }
  return;
}



// FUNCTION 14821a156 FUN_14821a156 body=63 status=ok
// SIG undefined FUN_14821a156(void)

undefined1 FUN_14821a156(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14821a280(param_2,param_3);
    param_3 = param_3 + 0xb10;
    param_2 = param_2 + 0xb10;
  }
  return 1;
}



// FUNCTION 14821a1be FUN_14821a1be body=59 status=ok
// SIG undefined FUN_14821a1be(void)

undefined8 FUN_14821a1be(longlong *param_1)

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



// FUNCTION 14821a20a FUN_14821a20a body=40 status=ok
// SIG undefined FUN_14821a20a(void)

void FUN_14821a20a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb10) == '\x01') {
    FUN_148219dc6(param_2);
    *(undefined1 *)(param_2 + 0xb10) = 0;
  }
  return;
}



// FUNCTION 14821a280 FUN_14821a280 body=89 status=ok
// SIG undefined FUN_14821a280(void)

longlong FUN_14821a280(longlong param_1,longlong param_2)

{
  FUN_140f13d9e(param_1 + 0x10,param_2 + 0x10);
  FUN_141254448(param_1 + 0xc0,param_2 + 0xc0);
  FUN_141254448(param_1 + 0x430,param_2 + 0x430);
  FUN_141254448(param_1 + 0x7a0,param_2 + 0x7a0);
  return param_1;
}



// FUNCTION 14821a2da FUN_14821a2da body=354 status=ok
// SIG undefined FUN_14821a2da(void)

longlong *
FUN_14821a2da(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar5 = (longlong *)FUN_14001cc68(0x2b0,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ae3e0d0;
  plVar1 = plVar5 + 2;
  FUN_146a8d5fa(plVar1);
  local_40 = plVar1;
  local_38 = plVar5;
  FUN_14821a466(&local_40,plVar1);
  plVar1 = local_38;
  if (local_38 == (longlong *)0x0) {
    *param_1 = (longlong)local_40;
    plVar5 = (longlong *)param_1[1];
    if (plVar5 == (longlong *)0x0) goto LAB_14821a3cd;
    param_1[1] = 0;
LAB_14821a395:
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_14821a3cd;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar5;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_40;
    plVar5 = (longlong *)param_1[1];
    if (local_38 != plVar5) {
      param_1[1] = (longlong)local_38;
      if (plVar5 == (longlong *)0x0) goto LAB_14821a3cd;
      goto LAB_14821a395;
    }
    LOCK();
    plVar5 = local_38 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_14821a3cd;
    (**(code **)*local_38)(local_38);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_14821a3cd:
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_38 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  lVar4 = *param_1;
  FUN_1446ddc76(&local_40,param_2,1);
  *(longlong **)(lVar4 + 0x1d8) = local_40;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821a43e FUN_14821a43e body=9 status=ok
// SIG undefined FUN_14821a43e(void)

void FUN_14821a43e(longlong param_1)

{
  FUN_14171f70c(param_1 + 0x10);
  return;
}



// FUNCTION 14821a448 FUN_14821a448 body=29 status=ok
// SIG undefined FUN_14821a448(void)

undefined8 FUN_14821a448(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14821a466 FUN_14821a466 body=167 status=ok
// SIG undefined FUN_14821a466(void)

void FUN_14821a466(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14821a4e1;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14821a4e1;
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
LAB_14821a4e1:
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
                    /* WARNING: Could not recover jumptable at 0x00014821a501. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14821a50e FUN_14821a50e body=34 status=ok
// SIG undefined FUN_14821a50e(void)

void FUN_14821a50e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ae3e160;
  return;
}



// FUNCTION 14821a530 FUN_14821a530 body=31 status=ok
// SIG undefined FUN_14821a530(void)

undefined8 FUN_14821a530(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14821a56c FUN_14821a56c body=93 status=ok
// SIG undefined FUN_14821a56c(void)

void FUN_14821a56c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae3e0f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14821a5ca FUN_14821a5ca body=123 status=ok
// SIG undefined FUN_14821a5ca(void)

void FUN_14821a5ca(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ae3e0f0;
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



// FUNCTION 14821a652 FUN_14821a652 body=21 status=ok
// SIG undefined FUN_14821a652(void)

undefined8 FUN_14821a652(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14821a668 FUN_14821a668 body=29 status=ok
// SIG undefined FUN_14821a668(void)

undefined8 FUN_14821a668(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14821a69e FUN_14821a69e body=1797 status=ok
// SIG undefined FUN_14821a69e(void)

longlong * FUN_14821a69e(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_3c8 [47];
  undefined1 local_399;
  undefined1 local_398 [8];
  longlong *local_390;
  undefined8 *local_380;
  undefined4 local_378;
  undefined8 *local_370;
  undefined4 local_368;
  undefined8 *local_360;
  undefined4 local_358;
  undefined8 *local_350;
  undefined4 local_348;
  undefined8 *local_340;
  undefined4 local_338;
  undefined8 *local_330;
  undefined4 local_328;
  longlong local_320;
  longlong *local_318;
  undefined1 *local_310;
  undefined4 local_308;
  undefined8 local_e0;
  undefined1 local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  FUN_14821ada4(&local_310);
  local_e0 = FUN_14774ef82(param_1);
  local_a8 = *(undefined1 *)((longlong)param_1 + 0x5fc);
  local_330 = (undefined8 *)0x0;
  local_328 = 0;
  FUN_1446efa72(&local_330,0,3,0x10);
  puVar3 = local_330;
  local_328 = 3;
  *local_330 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_330[2] = lVar4;
  *local_330 = &PTR_FUN_14ae67b30;
  local_330[3] = 0;
  FUN_14485c47a(local_330 + 3,param_1);
  *(undefined4 *)(puVar3 + 5) = 0;
  puVar3[4] = &LAB_14774f7e6;
  FUN_144a450dc(local_a0,&local_330);
  local_340 = (undefined8 *)0x0;
  local_338 = 0;
  FUN_1446efa72(&local_340,0,3,0x10);
  puVar3 = local_340;
  local_338 = 3;
  *local_340 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_340[2] = lVar4;
  *local_340 = &PTR_FUN_14ae67b30;
  local_340[3] = 0;
  FUN_14485c47a(local_340 + 3,param_1);
  *(undefined4 *)(puVar3 + 5) = 0;
  puVar3[4] = &LAB_14774f7f4;
  FUN_144a450dc(local_90,&local_340);
  local_350 = (undefined8 *)0x0;
  local_348 = 0;
  FUN_1446efa72(&local_350,0,3,0x10);
  puVar3 = local_350;
  local_348 = 3;
  *local_350 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_350[2] = lVar4;
  *local_350 = &PTR_FUN_14ae67b30;
  local_350[3] = 0;
  FUN_14485c47a(local_350 + 3,param_1);
  *(undefined4 *)(puVar3 + 5) = 0;
  puVar3[4] = &LAB_14774f802;
  FUN_144a450dc(local_80,&local_350);
  local_360 = (undefined8 *)0x0;
  local_358 = 0;
  FUN_1446efa72(&local_360,0,3,0x10);
  puVar3 = local_360;
  local_358 = 3;
  *local_360 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_360[2] = lVar4;
  *local_360 = &PTR_FUN_14ae67b30;
  local_360[3] = 0;
  FUN_14485c47a(local_360 + 3,param_1);
  *(undefined4 *)(puVar3 + 5) = 0;
  puVar3[4] = &LAB_14774f810;
  FUN_144a450dc(local_70,&local_360);
  local_370 = (undefined8 *)0x0;
  local_368 = 0;
  FUN_1446efa72(&local_370,0,3,0x10);
  puVar3 = local_370;
  local_368 = 3;
  *local_370 = &PTR_LAB_149e01f80;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_370[2] = lVar4;
  *local_370 = &PTR_FUN_14ae67ba0;
  local_370[3] = 0;
  FUN_14485c47a(local_370 + 3,param_1);
  *(undefined4 *)(puVar3 + 5) = 0;
  puVar3[4] = FUN_14774f81e;
  FUN_144a450dc(local_60,&local_370);
  local_380 = (undefined8 *)0x0;
  local_378 = 0;
  FUN_1446efa72(&local_380,0,3,0x10);
  puVar3 = local_380;
  local_378 = 3;
  *local_380 = &PTR_LAB_149e01f80;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_380[2] = lVar4;
  *local_380 = &PTR_FUN_14ae67ba0;
  local_380[3] = 0;
  FUN_14485c47a(local_380 + 3,param_1);
  puVar3[4] = &LAB_14821af1c;
  *(undefined4 *)(puVar3 + 5) = 0;
  FUN_144a450dc(local_50,&local_380);
  FUN_1482491e0(local_398,&local_399);
  FUN_14821af28(local_398,&local_320,&local_310);
  if (local_318 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_318 + 1) = (int)local_318[1] + 1;
    UNLOCK();
  }
  param_1[0xce] = local_320;
  plVar8 = (longlong *)param_1[0xcf];
  plVar6 = local_318;
  plVar7 = plVar8;
  if (local_318 != plVar8) {
    param_1[0xcf] = (longlong)local_318;
    plVar7 = local_318;
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
      local_320 = param_1[0xce];
      plVar7 = (longlong *)param_1[0xcf];
    }
    plVar6 = (longlong *)0x0;
  }
  if (plVar7 == (longlong *)0x0) {
    param_1[0xca] = local_320;
    plVar8 = (longlong *)param_1[0xcb];
    if (plVar8 == (longlong *)0x0) goto LAB_14821aae7;
    param_1[0xcb] = 0;
LAB_14821ac96:
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_14821aae7;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    param_1[0xca] = local_320;
    plVar8 = (longlong *)param_1[0xcb];
    if (plVar7 != plVar8) {
      param_1[0xcb] = (longlong)plVar7;
      if (plVar8 == (longlong *)0x0) goto LAB_14821aae7;
      goto LAB_14821ac96;
    }
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_14821aae7;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar8 = plVar7;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
LAB_14821aae7:
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
  if (local_318 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_318 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_318)(local_318);
      LOCK();
      piVar1 = (int *)((longlong)local_318 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_318 + 0x10))(local_318);
      }
    }
  }
  if (local_390 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_390 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_390)(local_390);
      LOCK();
      piVar1 = (int *)((longlong)local_390 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_390 + 0x10))(local_390);
      }
    }
  }
  FUN_1449db362(&local_380);
  FUN_1449db362(&local_370);
  FUN_1449db362(&local_360);
  FUN_1449db362(&local_350);
  FUN_1449db362(&local_340);
  FUN_1449db362(&local_330);
  FUN_14821af9c(&local_310);
  lVar5 = (**(code **)(*param_1 + 0x2d0))(param_1);
  if ((lVar5 != 0) && (lVar5 = FUN_140e94dc2(lVar5), lVar5 != 0)) {
    FUN_14825fb2c(param_1[0xce],*(char *)(lVar5 + 0x91) == '\x01');
    local_310 = &LAB_14821b142;
    local_308 = 0;
    FUN_14821b042(lVar5 + 0x30,local_398,param_1);
  }
  lVar5 = param_1[0xca];
  plVar8 = (longlong *)param_1[0xcb];
  if (plVar8 == (longlong *)0x0) {
    *param_2 = lVar5;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    *param_2 = lVar5;
    param_2[1] = (longlong)plVar8;
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
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
  if ((local_40 ^ (ulonglong)auStack_3c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821ada4 FUN_14821ada4 body=375 status=ok
// SIG undefined FUN_14821ada4(void)

longlong FUN_14821ada4(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140a5071c();
  *(undefined2 *)(param_1 + 0x1a8) = 0x101;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined2 *)(param_1 + 0x1c0) = 0x100;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1e4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1e8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1ec) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1f0) = 0;
  *(undefined1 *)(param_1 + 500) = 1;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x210) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x214) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x218) = 0;
  *(undefined1 *)(param_1 + 0x21c) = 1;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  lVar1 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar1 == 0) {
    lVar1 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_48,"Slider",1);
  uVar2 = FUN_145817a5c(lVar1,local_48,0,0);
  *(undefined8 *)(param_1 + 0x230) = uVar2;
  *(undefined4 *)(param_1 + 0x238) = 0x3c23d70a;
  *(undefined1 *)(param_1 + 0x23c) = 1;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x254) = 1;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined1 *)(param_1 + 0x268) = 1;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x28c) = 0;
  *(undefined8 *)(param_1 + 0x294) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821af28 FUN_14821af28 body=115 status=ok
// SIG undefined FUN_14821af28(void)

longlong * FUN_14821af28(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_14825f382(*param_1,param_3);
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



// FUNCTION 14821af9c FUN_14821af9c body=165 status=ok
// SIG undefined FUN_14821af9c(void)

void FUN_14821af9c(longlong param_1)

{
  FUN_1449db362(param_1 + 0x2c0);
  FUN_1449db362(param_1 + 0x2b0);
  FUN_1449db362(param_1 + 0x2a0);
  FUN_1449db362(param_1 + 0x290);
  FUN_1449db362(param_1 + 0x280);
  FUN_1449db362(param_1 + 0x270);
  FUN_1449db362(param_1 + 600);
  FUN_1449db362(param_1 + 0x240);
  FUN_1449db362(param_1 + 0x220);
  FUN_1449db362(param_1 + 0x1f8);
  FUN_1449db362(param_1 + 0x1c8);
  FUN_1449db362(param_1 + 0x1b0);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 14821b042 FUN_14821b042 body=254 status=ok
// SIG undefined FUN_14821b042(void)

undefined8
FUN_14821b042(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14ae6bc70;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14ae67c10;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1457bd49c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821b166 FUN_14821b166 body=107 status=ok
// SIG undefined FUN_14821b166(void)

void FUN_14821b166(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143ae583c(param_1,local_28);
  FUN_140008f88(param_3,local_28);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821b1d2 FUN_14821b1d2 body=160 status=ok
// SIG undefined FUN_14821b1d2(void)

void FUN_14821b1d2(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_e8 [32];
  undefined **local_c8 [20];
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x300))(param_1,local_c8);
  FUN_140f13d9e(param_3,local_c8);
  local_c8[0] = &PTR_FUN_149ed05f0;
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
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821b274 FUN_14821b274 body=38 status=ok
// SIG undefined FUN_14821b274(void)

void FUN_14821b274(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14821b29a();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14821b29a FUN_14821b29a body=153 status=ok
// SIG undefined FUN_14821b29a(void)

longlong FUN_14821b29a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x3a8);
  if (lVar2 != 0) {
    lVar1 = FUN_1402d2740();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) {
      lVar1 = FUN_144a772c4();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
           ) == lVar1 + 0x30)) {
        return lVar2;
      }
      lVar2 = FUN_14090ceee(lVar2,param_1,0);
      FUN_140648376(param_1 + 0x370,lVar2);
      if (*(longlong *)(param_1 + 0x338) == 0) {
        return lVar2;
      }
      thunk_FUN_140163244();
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 14821b338 FUN_14821b338 body=41 status=ok
// SIG undefined FUN_14821b338(void)

void FUN_14821b338(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x308))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14821b362 FUN_14821b362 body=156 status=ok
// SIG undefined FUN_14821b362(void)

void FUN_14821b362(undefined8 param_1,longlong param_2)

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
  FUN_14821b400(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821b400 FUN_14821b400 body=117 status=ok
// SIG undefined FUN_14821b400(void)

void FUN_14821b400(longlong *param_1,longlong param_2)

{
  FUN_143ae63ec(param_1,0xffffffff);
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  param_1[0x62] = param_2;
  if (*(int *)((longlong)param_1 + 0x30c) < 0) {
    *(undefined4 *)(param_1 + 0x61) = 0;
    FUN_148249d46(param_1 + 0x60,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x61) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014821b44a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 800))(param_1);
  return;
}



// FUNCTION 14821b476 FUN_14821b476 body=505 status=ok
// SIG undefined FUN_14821b476(void)

void FUN_14821b476(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_1a8 [32];
  undefined **local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  uint local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  longlong local_150;
  undefined8 local_148 [10];
  uint local_f8;
  undefined1 local_f4;
  undefined8 local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  uint local_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong local_a0;
  undefined8 auStack_98 [4];
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined4 local_64;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 local_50;
  uint local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_d8 = &PTR_FUN_149ed05f0;
  local_d0 = &DAT_3f8000003f800000;
  uStack_c8 = &DAT_3f8000003f800000;
  local_c0 = local_c0 & 0xffffff00;
  uStack_bc = 3;
  uStack_b8 = 0x4200000042000000;
  local_64 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  auStack_98[0] = 0;
  auStack_98[1] = 0;
  auStack_98[2] = 0;
  auStack_98[3] = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  local_60 = 1;
  local_50 = DAT_14c84635c;
  local_58 = DAT_14c84635c;
  local_48 = local_48 & 0xffffff00;
  local_44 = 4;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_188 = &PTR_FUN_149ed05f0;
  local_180 = (undefined4)local_d0;
  uStack_17c = local_d0._4_4_;
  uStack_178 = (undefined4)uStack_c8;
  uStack_174 = uStack_c8._4_4_;
  local_170 = local_c0;
  uStack_16c = uStack_bc;
  uStack_168 = (undefined4)uStack_b8;
  uStack_164 = uStack_b8._4_4_;
  local_160 = (undefined4)local_b0;
  uStack_15c = local_b0._4_4_;
  uStack_158 = (undefined4)uStack_a8;
  uStack_154 = uStack_a8._4_4_;
  local_150 = local_a0;
  if ((local_a0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar5 = auStack_98;
  puVar6 = local_148;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_f4 = local_44;
  local_f8 = local_48;
  local_f0 = local_40;
  local_e8 = plStack_38;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_38 + 1) = (int)plStack_38[1] + 1;
    UNLOCK();
  }
  local_e0 = local_30;
  FUN_14821b670(param_1);
  plVar3 = plStack_38;
  local_d8 = &PTR_FUN_149ed05f0;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821b670 FUN_14821b670 body=84 status=ok
// SIG undefined FUN_14821b670(void)

void FUN_14821b670(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140f13d9e(param_1 + 0x250);
  *param_2 = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_2[0x14];
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
                    /* WARNING: Could not recover jumptable at 0x00014821b6b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14821b6c4 FUN_14821b6c4 body=195 status=ok
// SIG undefined FUN_14821b6c4(void)

void FUN_14821b6c4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_30 = uStack_20;
  FUN_14821b788(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821b788 FUN_14821b788 body=192 status=ok
// SIG undefined FUN_14821b788(void)

void FUN_14821b788(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  FUN_143ae63ec(param_1,0xffffffff);
  param_1[0x62] = 0;
  plVar1 = param_1 + 0x60;
  uVar4 = *(uint *)((longlong)param_1 + 0x30c);
  iVar5 = 0;
  if ((int)uVar4 < 0) {
    *(undefined4 *)(param_1 + 0x61) = 0;
    FUN_148249d46(plVar1,0);
    iVar5 = (int)param_1[0x61];
    uVar4 = *(uint *)((longlong)param_1 + 0x30c);
  }
  *(uint *)(param_1 + 0x61) = iVar5 + 1U;
  if (uVar4 < iVar5 + 1U) {
    FUN_148249da6(plVar1,iVar5);
  }
  lVar2 = *plVar1;
  lVar3 = *param_2;
  *(longlong *)(lVar2 + (longlong)iVar5 * 0x10) = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(longlong *)(lVar2 + (longlong)iVar5 * 0x10 + 8) = param_2[1];
                    /* WARNING: Could not recover jumptable at 0x00014821b80a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 800))(param_1);
  return;
}



// FUNCTION 14821b848 FUN_14821b848 body=244 status=ok
// SIG undefined FUN_14821b848(void)

void FUN_14821b848(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  uVar2 = uStack_30;
  lVar1 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = 0;
  local_40 = (int)uStack_30;
  if ((int)uStack_30 == 0) {
    local_3c = 0;
  }
  else {
    FUN_148249c84(&local_48,uStack_30 & 0xffffffff,0);
    FUN_148249ce6(local_48,lVar1,uVar2 & 0xffffffff);
  }
  FUN_14821b93e(param_1,&local_48);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821b93e FUN_14821b93e body=87 status=ok
// SIG undefined FUN_14821b93e(void)

void FUN_14821b93e(longlong *param_1,longlong *param_2)

{
  FUN_143ae63ec(param_1,0xffffffff);
  param_1[0x62] = 0;
  FUN_14821c7d0(param_1 + 0x60,param_2);
  (**(code **)(*param_1 + 800))(param_1);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14821b998 FUN_14821b998 body=75 status=ok
// SIG undefined FUN_14821b998(void)

void FUN_14821b998(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  switchD_143c3d4dc::caseD_21(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821b9e4 FUN_14821b9e4 body=2509 status=ok
// SIG undefined FUN_14821b9e4(void)

undefined8 * FUN_14821b9e4(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_bb8 [32];
  undefined1 *local_b98;
  undefined8 *local_b88;
  undefined1 local_b79;
  undefined1 local_b78 [8];
  longlong *local_b70;
  undefined1 local_b59;
  undefined8 local_b58;
  longlong *local_b50;
  longlong local_b40;
  undefined1 local_b38;
  undefined8 local_b30;
  undefined8 uStack_b28;
  undefined8 local_b20;
  longlong *local_b18;
  undefined8 local_b10;
  longlong *local_b08;
  undefined1 local_af9;
  undefined8 local_af8;
  longlong *local_af0;
  longlong local_ae0;
  undefined1 local_ad8;
  undefined8 local_ad0;
  undefined8 uStack_ac8;
  undefined8 local_ac0;
  longlong *local_ab8;
  undefined8 local_ab0;
  longlong *local_aa8;
  undefined1 local_a99;
  undefined8 local_a98;
  longlong *local_a90;
  longlong local_a80;
  undefined1 local_a78;
  undefined8 local_a70;
  undefined8 uStack_a68;
  undefined8 local_a60;
  longlong *local_a58;
  undefined8 local_a50;
  longlong *local_a48;
  undefined8 local_a40;
  longlong *local_a38;
  undefined8 local_a30;
  longlong *local_a28;
  undefined1 local_a20 [64];
  undefined4 local_9e0;
  undefined1 local_9dc;
  undefined4 local_9d8;
  undefined1 local_9d4;
  undefined1 local_9c8 [64];
  undefined4 local_988;
  undefined1 local_984;
  undefined4 local_980;
  undefined1 local_97c;
  undefined1 local_970 [64];
  undefined4 local_930;
  undefined1 local_92c;
  undefined4 local_928;
  undefined1 local_924;
  undefined8 local_918;
  longlong *local_910;
  longlong local_770;
  undefined1 local_768;
  undefined1 local_760 [128];
  undefined1 local_6e0 [8];
  longlong *local_6d8;
  longlong local_538;
  undefined1 local_530;
  undefined1 local_528 [128];
  undefined1 local_4a8 [440];
  undefined1 local_2f0 [424];
  undefined1 *local_148;
  undefined1 local_140;
  undefined1 local_138 [240];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_bb8;
  if (*(longlong *)(param_1 + 800) == 0) {
    lVar8 = *(longlong *)(param_1 + 0x1c8);
    if (lVar8 != 0) {
      lVar5 = FUN_144a772c4();
      lVar8 = *(longlong *)(lVar8 + 0x10);
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30)) goto LAB_14821ba1d;
      lVar8 = *(longlong *)(param_1 + 0x1c8);
      if (lVar8 != 0) {
        lVar5 = FUN_1402d2740();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          lVar8 = FUN_14090ceee(lVar8,0,0);
          if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar8);
          }
          *(longlong *)(param_1 + 800) = lVar8;
          FUN_140648376(param_1 + 400,lVar8);
          goto LAB_14821ba1d;
        }
      }
    }
    *(undefined8 *)(param_1 + 800) = 0;
  }
LAB_14821ba1d:
  FUN_140a53a96(local_2f0);
  local_148 = &DAT_200000002;
  local_b98 = local_4a8;
  FUN_140a53d66(local_6e0,&DAT_149efe19f,
                ".\\../Plugins/Runtime/CommonUI/Source/CommonUI/Private/CommonActionWidget.cpp",0x3f
               );
  FUN_140a50bf4(local_6e0,&local_918,local_2f0);
  plVar4 = local_910;
  if (local_910 == (longlong *)0x0) {
    local_b88 = (undefined8 *)(param_1 + 0x328);
    *(undefined8 *)(param_1 + 0x328) = local_918;
    plVar9 = *(longlong **)(param_1 + 0x330);
    if (plVar9 == (longlong *)0x0) goto LAB_14821bbac;
    *(undefined8 *)(param_1 + 0x330) = 0;
LAB_14821bb74:
    local_b88 = (undefined8 *)(param_1 + 0x328);
    LOCK();
    plVar4 = plVar9 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14821bbac;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar9;
  }
  else {
    LOCK();
    *(int *)(local_910 + 1) = (int)local_910[1] + 1;
    UNLOCK();
    local_b88 = (undefined8 *)(param_1 + 0x328);
    *(undefined8 *)(param_1 + 0x328) = local_918;
    plVar9 = *(longlong **)(param_1 + 0x330);
    if (local_910 != plVar9) {
      *(longlong **)(param_1 + 0x330) = local_910;
      if (plVar9 == (longlong *)0x0) goto LAB_14821bbac;
      goto LAB_14821bb74;
    }
    LOCK();
    plVar9 = local_910 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_14821bbac;
    (**(code **)*local_910)(local_910);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_14821bbac:
  if (local_910 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_910 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_910)(local_910);
      LOCK();
      piVar1 = (int *)((longlong)local_910 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_910 + 0x10))(local_910);
      }
    }
  }
  if (local_6d8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_6d8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_6d8)(local_6d8);
      LOCK();
      piVar1 = (int *)((longlong)local_6d8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_6d8 + 0x10))(local_6d8);
      }
    }
  }
  FUN_140a5660c(local_2f0);
  uVar3 = *(undefined8 *)(param_1 + 0x328);
  FUN_140a504fe(local_4a8);
  FUN_140a4fdf2(local_970,0);
  local_930 = 2;
  local_92c = 1;
  local_928 = 2;
  local_924 = 1;
  FUN_140a53334(local_2f0);
  local_a80 = param_1 + 0x250;
  local_a78 = 1;
  local_a70 = 0;
  uStack_a68 = 0;
  local_140 = 1;
  local_148 = (undefined1 *)local_a80;
  FUN_144a450dc(local_138,&local_a70);
  FUN_1449db362(&local_a70);
  local_b98 = &local_a99;
  FUN_140a554b8(&local_a98,"SImage",
                ".\\../Plugins/Runtime/CommonUI/Source/CommonUI/Private/CommonActionWidget.cpp",0x49
               );
  if (local_a90 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a90 + 1) = (int)local_a90[1] + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x360);
  *(undefined8 *)(param_1 + 0x358) = local_a98;
  *(longlong **)(param_1 + 0x360) = local_a90;
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
  FUN_140a52c70(&local_a98,&local_a60,local_2f0);
  local_a50 = local_a60;
  local_a48 = local_a58;
  if (local_a58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a58 + 1) = (int)local_a58[1] + 1;
    UNLOCK();
  }
  uVar6 = FUN_140a4fd40(local_970,&local_a50);
  uVar6 = FUN_140a5058c(local_4a8,uVar6);
  FUN_140a4fdf2(local_9c8,0);
  local_988 = 2;
  local_984 = 1;
  local_980 = 2;
  local_97c = 1;
  FUN_140a53334(local_6e0);
  local_ae0 = param_1 + 400;
  local_ad8 = 1;
  local_ad0 = 0;
  uStack_ac8 = 0;
  local_530 = 1;
  local_538 = local_ae0;
  FUN_144a450dc(local_528,&local_ad0);
  FUN_1449db362(&local_ad0);
  local_b98 = &local_af9;
  FUN_140a554b8(&local_af8,"SImage",
                ".\\../Plugins/Runtime/CommonUI/Source/CommonUI/Private/CommonActionWidget.cpp",0x50
               );
  if (local_af0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_af0 + 1) = (int)local_af0[1] + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x350);
  *(undefined8 *)(param_1 + 0x348) = local_af8;
  *(longlong **)(param_1 + 0x350) = local_af0;
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
  FUN_140a52c70(&local_af8,&local_ac0,local_6e0);
  local_ab0 = local_ac0;
  local_aa8 = local_ab8;
  if (local_ab8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_ab8 + 1) = (int)local_ab8[1] + 1;
    UNLOCK();
  }
  uVar7 = FUN_140a4fd40(local_9c8,&local_ab0);
  uVar6 = FUN_140a5058c(uVar6,uVar7);
  FUN_140a4fdf2(local_a20,0);
  local_9e0 = 2;
  local_9dc = 1;
  local_9d8 = 2;
  local_9d4 = 1;
  FUN_140a53334(&local_918);
  local_b40 = param_1 + 0x370;
  local_b38 = 1;
  local_b30 = 0;
  uStack_b28 = 0;
  local_768 = 1;
  local_770 = local_b40;
  FUN_144a450dc(local_760,&local_b30);
  FUN_1449db362(&local_b30);
  local_b98 = &local_b59;
  FUN_140a554b8(&local_b58,"SImage",
                ".\\../Plugins/Runtime/CommonUI/Source/CommonUI/Private/CommonActionWidget.cpp",0x57
               );
  if (local_b50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b50 + 1) = (int)local_b50[1] + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x340);
  *(undefined8 *)(param_1 + 0x338) = local_b58;
  *(longlong **)(param_1 + 0x340) = local_b50;
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
  FUN_140a52c70(&local_b58,&local_b20,&local_918);
  local_b10 = local_b20;
  local_b08 = local_b18;
  if (local_b18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b18 + 1) = (int)local_b18[1] + 1;
    UNLOCK();
  }
  uVar7 = FUN_140a4fd40(local_a20,&local_b10);
  uVar6 = FUN_140a5058c(uVar6,uVar7);
  local_b98 = &local_b79;
  FUN_140a536a8(local_b78,"SOverlay",
                ".\\../Plugins/Runtime/CommonUI/Source/CommonUI/Private/CommonActionWidget.cpp",0x44
               );
  FUN_140a4ff16(local_b78,&local_a40,uVar6);
  local_a30 = local_a40;
  local_a28 = local_a38;
  if (local_a38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a38 + 1) = (int)local_a38[1] + 1;
    UNLOCK();
  }
  FUN_145cfad50(uVar3,&local_a30);
  plVar4 = local_a28;
  if (local_a28 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_a28 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_a28)(local_a28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_a38 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_a38 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_a38)(local_a38);
      LOCK();
      piVar1 = (int *)((longlong)local_a38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_a38 + 0x10))(local_a38);
      }
    }
  }
  if (local_b70 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_b70 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_b70)(local_b70);
      LOCK();
      piVar1 = (int *)((longlong)local_b70 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_b70 + 0x10))(local_b70);
      }
    }
  }
  plVar4 = local_b08;
  if (local_b08 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_b08 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_b08)(local_b08);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_b18 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_b18 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_b18)(local_b18);
      LOCK();
      piVar1 = (int *)((longlong)local_b18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_b18 + 0x10))(local_b18);
      }
    }
  }
  if (local_b50 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_b50 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_b50)(local_b50);
      LOCK();
      piVar1 = (int *)((longlong)local_b50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_b50 + 0x10))(local_b50);
      }
    }
  }
  FUN_140a55a86(&local_918);
  FUN_1415b5e50(local_a20);
  plVar4 = local_aa8;
  if (local_aa8 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_aa8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_aa8)(local_aa8);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_ab8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_ab8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_ab8)(local_ab8);
      LOCK();
      piVar1 = (int *)((longlong)local_ab8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_ab8 + 0x10))(local_ab8);
      }
    }
  }
  if (local_af0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_af0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_af0)(local_af0);
      LOCK();
      piVar1 = (int *)((longlong)local_af0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_af0 + 0x10))(local_af0);
      }
    }
  }
  FUN_140a55a86(local_6e0);
  FUN_1415b5e50(local_9c8);
  plVar4 = local_a48;
  if (local_a48 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_a48 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_a48)(local_a48);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_a58 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_a58 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_a58)(local_a58);
      LOCK();
      piVar1 = (int *)((longlong)local_a58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_a58 + 0x10))(local_a58);
      }
    }
  }
  if (local_a90 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_a90 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_a90)(local_a90);
      LOCK();
      piVar1 = (int *)((longlong)local_a90 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_a90 + 0x10))(local_a90);
      }
    }
  }
  FUN_140a55a86(local_2f0);
  FUN_1415b5e50(local_970);
  FUN_1415b5e16(local_4a8);
  uVar3 = *local_b88;
  plVar4 = *(longlong **)(param_1 + 0x330);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  if ((local_48 ^ (ulonglong)auStack_bb8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821c3b2 FUN_14821c3b2 body=122 status=ok
// SIG undefined FUN_14821c3b2(void)

void FUN_14821c3b2(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  code *local_30;
  undefined4 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_145877a06();
  if (lVar1 != 0) {
    FUN_140457ffc(lVar1 + 0x30,param_1);
    local_30 = FUN_14821cb3c;
    local_28 = 0;
    FUN_14821ca3c(lVar1 + 0x30,local_20,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821c434 FUN_14821c434 body=115 status=ok
// SIG undefined FUN_14821c434(void)

undefined8 FUN_14821c434(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_145877a06();
  if (lVar2 == 0) {
    uVar3 = FUN_141319416();
    FUN_140e361c2(param_2,uVar3);
  }
  else {
    if ((*(longlong *)(param_1 + 0x310) != 0) && (cVar1 = FUN_14821c4a8(), cVar1 != '\0')) {
      FUN_14821c512(param_2,lVar2,*(undefined8 *)(param_1 + 0x310));
      return param_2;
    }
    FUN_143ae5e9c(param_2,lVar2,param_1 + 0x300);
  }
  return param_2;
}



// FUNCTION 14821c4a8 FUN_14821c4a8 body=105 status=ok
// SIG undefined FUN_14821c4a8(void)

undefined1 FUN_14821c4a8(void)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb45d24) {
    FUN_144b3d300(&DAT_14cb45d24);
    if (DAT_14cb45d24 == -1) {
      FUN_14821789c();
      lVar1 = FUN_1409e7438();
      DAT_14cb45d20 = *(undefined1 *)(lVar1 + 0xda);
      _Init_thread_footer(&DAT_14cb45d24);
    }
  }
  return DAT_14cb45d20;
}



// FUNCTION 14821c512 FUN_14821c512 body=701 status=ok
// SIG undefined FUN_14821c512(void)

undefined8 * FUN_14821c512(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 unaff_RBP;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  longlong *local_110;
  undefined **local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  uint local_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  longlong local_d0;
  undefined8 auStack_c8 [4];
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined8 uStack_9f;
  undefined4 local_94;
  undefined2 local_90;
  undefined8 local_88;
  undefined8 local_80;
  uint local_78;
  byte local_74;
  undefined8 local_70;
  longlong *plStack_68;
  undefined8 local_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar4 = *(undefined1 *)(param_2 + 0x91);
  lVar8 = *(longlong *)(param_2 + 0x20);
  if (lVar8 == 0) {
LAB_14821c56c:
    lVar8 = 0;
  }
  else {
    lVar6 = FUN_1449db7f2();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_14821c56c;
  }
  FUN_148237874(&local_50,lVar8,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar4) & 0xffffffff,
                param_3);
  local_108 = &PTR_FUN_149ed05f0;
  local_100 = &DAT_3f8000003f800000;
  uStack_f8 = &DAT_3f8000003f800000;
  local_f0 = local_f0 & 0xffffff00;
  uStack_ec = 3;
  uStack_e8 = 0x4200000042000000;
  local_94 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  auStack_c8[0] = 0;
  auStack_c8[1] = 0;
  auStack_c8[2] = 0;
  auStack_c8[3] = 0;
  uStack_a8 = 0;
  uStack_a7 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  local_90 = 1;
  local_80 = DAT_14c84635c;
  local_88 = DAT_14c84635c;
  local_78 = local_78 & 0xffffff00;
  local_74 = local_74 & 0xf8 | 4;
  local_70 = 0;
  plStack_68 = (longlong *)0x0;
  local_60 = 0;
  cVar5 = FUN_1403e7f2a(&local_50);
  if (cVar5 != '\0') {
    uVar7 = FUN_140902dbe();
    local_128 = *(undefined8 *)(param_2 + 0x94);
    uVar4 = *(undefined1 *)(param_2 + 0x91);
    local_120 = local_50;
    uStack_11c = uStack_4c;
    uStack_118 = uStack_48;
    uStack_114 = uStack_44;
    local_110 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    cVar5 = FUN_148217086(uVar7,&local_108,&local_120,uVar4);
    if (cVar5 != '\0') {
      *param_1 = &PTR_FUN_149ed05f0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_100;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_100._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_f8;
      *(undefined4 *)((longlong)param_1 + 0x14) = uStack_f8._4_4_;
      *(uint *)(param_1 + 3) = local_f0;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_ec;
      *(undefined4 *)(param_1 + 4) = (undefined4)uStack_e8;
      *(undefined4 *)((longlong)param_1 + 0x24) = uStack_e8._4_4_;
      *(undefined4 *)(param_1 + 5) = (undefined4)local_e0;
      *(undefined4 *)((longlong)param_1 + 0x2c) = local_e0._4_4_;
      *(undefined4 *)(param_1 + 6) = (undefined4)uStack_d8;
      *(undefined4 *)((longlong)param_1 + 0x34) = uStack_d8._4_4_;
      param_1[7] = local_d0;
      if ((local_d0 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      puVar9 = auStack_c8;
      puVar10 = param_1 + 8;
      for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      *(byte *)((longlong)param_1 + 0x94) = local_74;
      *(uint *)(param_1 + 0x12) = local_78;
      param_1[0x13] = local_70;
      param_1[0x14] = plStack_68;
      if (plStack_68 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_68 + 1) = (int)plStack_68[1] + 1;
        UNLOCK();
      }
      param_1[0x15] = local_60;
      goto LAB_14821c65b;
    }
  }
  uVar7 = FUN_141319416();
  FUN_140e361c2(param_1,uVar7);
LAB_14821c65b:
  plVar3 = plStack_68;
  local_108 = &PTR_FUN_149ed05f0;
  if (plStack_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_68)(plStack_68);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821c7d0 FUN_14821c7d0 body=79 status=ok
// SIG undefined FUN_14821c7d0(void)

undefined8 * FUN_14821c7d0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148249c84(param_1,iVar1);
      FUN_148249ce6(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14821c820 FUN_14821c820 body=38 status=ok
// SIG undefined FUN_14821c820(void)

void FUN_14821c820(longlong *param_1)

{
  FUN_1433350e2();
  (**(code **)(*param_1 + 800))(param_1);
  FUN_14821c3b2(param_1);
  return;
}



// FUNCTION 14821c846 FUN_14821c846 body=501 status=ok
// SIG undefined FUN_14821c846(void)

void FUN_14821c846(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined1 auStack_127 [7];
  undefined8 local_120 [2];
  undefined1 local_110 [8];
  undefined8 local_108 [2];
  longlong *local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined **local_d8 [20];
  longlong *local_38;
  ulonglong local_28;
  undefined7 uVar9;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar4 = (**(code **)(*param_1 + 0x180))();
  if (lVar4 != 0) {
    lVar4 = FUN_145877a06(param_1);
    lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
    uVar9 = (undefined7)((ulonglong)unaff_RBX >> 8);
    uVar8 = CONCAT71(uVar9,1);
    if (((lVar5 != 0) && (lVar4 != 0)) && (*(longlong *)(lVar5 + 0x1f0) != 0)) {
      cVar3 = FUN_148217ba2(lVar4);
      if (cVar3 != '\0') {
        cVar3 = (**(code **)(*param_1 + 0x328))(param_1);
        if (cVar3 != '\0') {
          (**(code **)(*param_1 + 0x300))(param_1,local_d8);
          FUN_140f13d9e(param_1 + 0x6e,local_d8);
          local_d8[0] = &PTR_FUN_149ed05f0;
          if (local_38 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_38 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
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
          if (*(char *)((longlong)param_1 + 0x38c) == '\0') {
            uVar8 = CONCAT71(uVar9,1);
            (**(code **)(*param_1 + 0x2b0))(param_1,1);
          }
          else if (param_1[0x67] != 0) {
            local_f0 = 1;
            local_e8 = 0;
            uStack_e0 = 0;
            local_f8 = param_1 + 0x6e;
            FUN_145767ef4();
            FUN_1447cd2ec(param_1 + 0x2f,0);
            cVar3 = FUN_145beedf4(param_1);
            if (cVar3 != '\x01') {
              FUN_140163244(param_1[0x67],1);
            }
            if (param_1[0x69] != 0) {
              cVar3 = (**(code **)(*param_1 + 0x308))(param_1);
              plVar2 = (longlong *)param_1[0x69];
              if (cVar3 == '\0') {
                puVar6 = (undefined8 *)(auStack_127 + 7);
                local_128 = DAT_14c96b1e1;
                puVar7 = &local_128;
              }
              else {
                puVar6 = local_108;
                local_110[0] = DAT_14c96b23c;
                puVar7 = auStack_127 + 0x17;
              }
              puVar7[1] = 1;
              *puVar6 = 0;
              puVar6[1] = 0;
              (**(code **)(*plVar2 + 0x1c0))();
            }
            uVar8 = CONCAT71(uVar9,4);
            if (param_1[0x65] != 0) {
              FUN_140163244(param_1[0x65],5);
            }
          }
        }
      }
    }
    (**(code **)(*param_1 + 0x2b0))(param_1,uVar8 & 0xffffffff);
  }
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821ca3c FUN_14821ca3c body=254 status=ok
// SIG undefined FUN_14821ca3c(void)

undefined8
FUN_14821ca3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14ae6bc70;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14ae67c80;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1457bd49c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821cb3c FUN_14821cb3c body=90 status=ok
// SIG undefined FUN_14821cb3c(void)

void FUN_14821cb3c(longlong *param_1,char param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 800))();
  local_19 = param_2 == '\x01';
  FUN_1447cd2ec(param_1 + 0x2d);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821cbe0 FUN_14821cbe0 body=234 status=ok
// SIG undefined FUN_14821cbe0(void)

void FUN_14821cbe0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1 + 400;
  FUN_140f13d9e(lVar1);
  *(undefined8 *)(param_1 + 0x240) = *param_3;
  lVar3 = *(longlong *)(param_1 + 0x1c8);
  if (lVar3 != 0) {
    lVar2 = FUN_1402d2740();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar3 = FUN_14090ceee(lVar3,0,0);
      if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar3);
      }
      *(longlong *)(param_1 + 800) = lVar3;
      FUN_140648376(lVar1,lVar3);
      goto LAB_14821cc4c;
    }
  }
  *(undefined8 *)(param_1 + 800) = 0;
LAB_14821cc4c:
  if (*(longlong *)(param_1 + 0x348) != 0) {
    local_38 = 1;
    local_30 = 0;
    uStack_28 = 0;
    local_40 = lVar1;
    FUN_145767ef4();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821ccf0 FUN_14821ccf0 body=156 status=ok
// SIG undefined FUN_14821ccf0(void)

void FUN_14821ccf0(undefined8 param_1,longlong param_2)

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
  FUN_14821cd8e(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821cd8e FUN_14821cd8e body=284 status=ok
// SIG undefined FUN_14821cd8e(void)

void FUN_14821cd8e(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    if ((longlong)*(int *)(param_1 + 0x368) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x360);
      lVar4 = (longlong)*(int *)(param_1 + 0x368) << 3;
      do {
        cVar2 = FUN_14824a362(lVar3,param_2);
        if (cVar2 != '\0') goto LAB_14821ce89;
        lVar3 = lVar3 + 8;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
    local_48 = (code *)0x0;
    FUN_14485c47a(&local_48,param_2);
    iVar1 = *(int *)(param_1 + 0x368);
    *(uint *)(param_1 + 0x368) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x36c) < iVar1 + 1U) {
      FUN_14824a3da(param_1 + 0x360,iVar1);
    }
    *(code **)(*(longlong *)(param_1 + 0x360) + (longlong)iVar1 * 8) = local_48;
    local_48 = FUN_14821d622;
    local_40 = 0;
    FUN_14821d522(param_2 + 0x388,local_38,param_1,&local_48);
    local_48 = FUN_14821d622;
    local_40 = 0;
    FUN_14821d522(param_2 + 0x3a0,local_38,param_1,&local_48);
    FUN_14821d622(param_1);
  }
LAB_14821ce89:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821ceac FUN_14821ceac body=99 status=ok
// SIG undefined FUN_14821ceac(void)

undefined8 FUN_14821ceac(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  uVar1 = FUN_14477b072(param_1,DAT_14cb44bd0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821cf2a FUN_14821cf2a body=122 status=ok
// SIG undefined FUN_14821cf2a(void)

void FUN_14821cf2a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x380);
  if (plVar2 != (longlong *)0x0) {
    iVar6 = (int)plVar2[1];
    do {
      if (iVar6 == 0) {
        return;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    lVar3 = *(longlong *)(param_1 + 0x378);
    if (lVar3 != 0) {
      plVar4 = *(longlong **)(lVar3 + 0x88);
      *(undefined8 *)(lVar3 + 0x80) = 0;
      *(undefined8 *)(lVar3 + 0x88) = 0;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
    }
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
                    /* WARNING: Could not recover jumptable at 0x00014821cf99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14821cfc8 FUN_14821cfc8 body=20 status=ok
// SIG undefined FUN_14821cfc8(void)

void FUN_14821cfc8(longlong *param_1)

{
  if ((char)param_1[0x6b] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00014821cfd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x4e0))();
    return;
  }
  return;
}



// FUNCTION 14821cfdc FUN_14821cfdc body=42 status=ok
// SIG undefined FUN_14821cfdc(void)

void FUN_14821cfdc(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x4b8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14821d046 FUN_14821d046 body=329 status=ok
// SIG undefined FUN_14821d046(void)

void FUN_14821d046(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_1a = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a);
  }
  local_20 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x370) = local_19;
  *(undefined1 *)(param_1 + 0x371) = local_1a;
  *(bool *)(param_1 + 0x372) = local_20 != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821d1f6 FUN_14821d1f6 body=112 status=ok
// SIG undefined FUN_14821d1f6(void)

undefined8 * FUN_14821d1f6(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14485c47a(param_1 + 3);
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x1010000000000;
  FUN_144a5dc74(param_1 + 6);
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_14009d848(param_1 + 8,param_3);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  return param_1;
}



// FUNCTION 14821d266 FUN_14821d266 body=72 status=ok
// SIG undefined FUN_14821d266(void)

void FUN_14821d266(longlong param_1)

{
  FUN_1449db362(param_1 + 0x70);
  FUN_1449db362(param_1 + 0x60);
  FUN_1449db362(param_1 + 0x50);
  FUN_1449db362(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014821d2a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14821d2ae FUN_14821d2ae body=145 status=ok
// SIG undefined FUN_14821d2ae(void)

undefined8 * FUN_14821d2ae(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  *param_1 = 0;
  lVar1 = *param_2;
  param_1[1] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[2] = param_2[1];
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x29) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x2b) = 0;
  FUN_144a5dc74(param_1 + 6);
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_14009d848(param_1 + 8,param_3);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  return param_1;
}



// FUNCTION 14821d340 FUN_14821d340 body=102 status=ok
// SIG undefined FUN_14821d340(void)

void FUN_14821d340(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) && ((char)param_1[0x6b] == '\x01')) {
    (**(code **)(*param_1 + 0x4e0))(param_1);
  }
  FUN_14821d3a6(param_1);
  cVar1 = FUN_143af6288((longlong)param_1 + 0x374);
  if (cVar1 != '\0') {
    FUN_143af6302((longlong)param_1 + 0x374);
    return;
  }
  return;
}



// FUNCTION 14821d3a6 FUN_14821d3a6 body=73 status=ok
// SIG undefined FUN_14821d3a6(void)

void FUN_14821d3a6(longlong *param_1)

{
  longlong lVar1;
  
  if (0 < (int)param_1[0x5c]) {
    lVar1 = (**(code **)(*param_1 + 0x2d0))(param_1);
    if (lVar1 != 0) {
      lVar1 = FUN_1403f18c8(lVar1);
      if (lVar1 != 0) {
        FUN_148238500(lVar1,param_1);
      }
    }
  }
  FUN_140e64ae8(param_1);
  return;
}



// FUNCTION 14821d3f8 FUN_14821d3f8 body=112 status=ok
// SIG undefined FUN_14821d3f8(void)

void FUN_14821d3f8(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  uVar1 = FUN_14477b072(param_1,DAT_14cb44bd0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if (local_20 == 0) {
    FUN_14779cc78(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821d46a FUN_14821d46a body=182 status=ok
// SIG undefined FUN_14821d46a(void)

undefined4 * FUN_14821d46a(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_2e;
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)param_1[2];
  FUN_1446f470e(&local_38,L"BP_GetDesiredInputConfig",1);
  cVar2 = (**(code **)(*plVar1 + 0x3c0))(plVar1,local_38);
  if (cVar2 != '\0') {
    FUN_14825d43e(&local_2e);
    uVar3 = FUN_14477b072(param_1,DAT_14cb44be0);
    (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_2e);
    *(undefined2 *)(param_2 + 1) = local_2a;
    *param_2 = local_2e;
  }
  *(bool *)((longlong)param_2 + 6) = cVar2 != '\0';
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14821d522 FUN_14821d522 body=254 status=ok
// SIG undefined FUN_14821d522(void)

undefined8
FUN_14821d522(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14ae67cf0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821d622 FUN_14821d622 body=192 status=ok
// SIG undefined FUN_14821d622(void)

void FUN_14821d622(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  longlong lVar5;
  longlong lVar6;
  undefined7 uVar4;
  
  uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar3 = CONCAT71(uVar4,*(undefined1 *)((longlong)param_1 + 0x371));
  if (((char)param_1[0x83] == '\x01') && ((char)param_1[0x6b] == '\x01')) {
    uVar3 = CONCAT71(uVar4,*(undefined1 *)((longlong)param_1 + 0x419));
  }
  if ((*(char *)((longlong)param_1 + 0x41a) == '\x01') && ((char)param_1[0x6b] == '\0')) {
    uVar3 = CONCAT71((int7)(uVar3 >> 8),*(undefined1 *)((longlong)param_1 + 0x41b));
  }
  if ((longlong)(int)param_1[0x6d] != 0) {
    lVar5 = param_1[0x6c];
    lVar6 = (longlong)(int)param_1[0x6d] << 3;
    do {
      cVar1 = FUN_144729dda(lVar5);
      if (cVar1 != '\0') {
        cVar1 = *(char *)((longlong)param_1 + 0x372);
        lVar2 = FUN_14479d2ce(lVar5);
        if (cVar1 == '\x01') {
          if (*(char *)(lVar2 + 0x358) == '\0') goto LAB_14821d6c6;
        }
        else if (*(char *)(lVar2 + 0x358) != '\0') goto LAB_14821d6c0;
      }
      lVar5 = lVar5 + 8;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  if (*(char *)((longlong)param_1 + 0x372) == '\x01') {
LAB_14821d6c0:
    uVar3 = CONCAT71((int7)(uVar3 >> 8),(char)param_1[0x6e]);
  }
LAB_14821d6c6:
                    /* WARNING: Could not recover jumptable at 0x00014821d6df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2b0))(param_1,uVar3 & 0xffffffff);
  return;
}



// FUNCTION 14821d6e2 FUN_14821d6e2 body=1337 status=ok
// SIG undefined FUN_14821d6e2(void)

longlong * FUN_14821d6e2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((char)param_1[0x82] == '\x01') {
    lVar9 = FUN_14821dc1e(param_1 + 0x7d);
    *param_2 = lVar9;
    if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar9);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_f8);
    }
  }
  else {
    FUN_1446f470e(&local_88,L"SObjectWidget",1);
    lVar9 = (**(code **)(*param_1 + 0x2d0))(param_1);
    FUN_140760c2c(param_1,&local_98);
    if (local_98 != 0) {
      do {
        FUN_1414927ae(local_98,&local_d8);
        lVar10 = local_98;
        if (((int)local_d8 == local_88) && (local_d8._4_4_ == local_84)) {
          FUN_14821dce4(local_98,&local_a8);
          plVar12 = local_90;
          if (local_a8 == 0) {
            if (local_90 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_90 + 1) = (int)local_90[1] + 1;
              UNLOCK();
            }
            plVar13 = *(longlong **)(lVar10 + 0x278);
            if (plVar13 == (longlong *)0x0) {
LAB_14821d91e:
              plVar13 = (longlong *)0x0;
            }
            else {
              lVar10 = FUN_14110d11e();
              if ((*(int *)(plVar13[2] + 0x38) < *(int *)(lVar10 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
                  lVar10 + 0x30)) goto LAB_14821d91e;
            }
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              plVar6 = plVar12 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 == 0) {
                (**(code **)*plVar12)();
                LOCK();
                piVar2 = (int *)((longlong)plVar12 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar12 + 0x10))();
                }
              }
            }
            bVar14 = true;
            if ((plVar13 != (longlong *)0x0) && (*(char *)((longlong)plVar13 + 0x2fe) == '\x01')) {
              lVar10 = (**(code **)(*plVar13 + 0x2d0))();
              if (lVar10 == lVar9) {
                lVar10 = FUN_14821dc1e();
                local_c8 = 0;
                uStack_c0 = 0;
                local_d8 = 0;
                uStack_d0 = 0;
                local_b8 = 0;
                if (lVar10 != 0) {
                  FUN_1400bbfae(&local_80,lVar10);
                  uStack_d0 = CONCAT44(uStack_7c,local_80);
                  local_c8 = CONCAT44(uStack_74,uStack_78);
                  if (uStack_c0 != 0) {
                    FUN_1400020a8();
                  }
                  uStack_c0 = CONCAT44(uStack_6c,local_70);
                  local_b8 = CONCAT44(uStack_64,uStack_68);
                  cVar7 = (*(code *)PTR_FUN_14c758760)();
                  if (cVar7 != '\0') {
                    uVar3 = *(uint *)(lVar10 + 0xc);
                    if ((int)uVar3 < DAT_14c9647dc) {
                      lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
                    }
                    else {
                      lVar11 = 0;
                    }
                    if ((*(uint *)(lVar11 + 8) & 0x8400000) != 0) goto LAB_14821d9ab;
                  }
                  goto LAB_14821d9b9;
                }
              }
              uStack_c0 = 0;
              local_d8 = 0;
              uStack_d0 = 0;
              local_c8 = 0;
              local_b8 = 0;
              lVar10 = 0;
              goto LAB_14821d9c1;
            }
          }
          else {
            lVar10 = FUN_14479d2ce();
            local_c8 = 0;
            uStack_c0 = 0;
            local_d8 = 0;
            uStack_d0 = 0;
            local_b8 = 0;
            if (lVar10 == 0) {
              local_d8 = 0;
              uStack_d0 = 0;
              local_c8 = 0;
            }
            else {
              FUN_1400bbfae(&local_80,lVar10);
              uStack_d0 = CONCAT44(uStack_7c,local_80);
              local_c8 = CONCAT44(uStack_74,uStack_78);
              if (uStack_c0 != 0) {
                FUN_1400020a8();
              }
              uStack_c0 = CONCAT44(uStack_6c,local_70);
              local_b8 = CONCAT44(uStack_64,uStack_68);
              cVar7 = (*(code *)PTR_FUN_14c758760)();
              if (cVar7 == '\0') {
LAB_14821d9b9:
                FUN_14485c47a(&local_d8,lVar10);
              }
              else {
                uVar3 = *(uint *)(lVar10 + 0xc);
                if ((int)uVar3 < DAT_14c9647dc) {
                  lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
                }
                else {
                  lVar11 = 0;
                }
                if ((*(uint *)(lVar11 + 8) & 0x8400000) == 0) goto LAB_14821d9b9;
LAB_14821d9ab:
                local_d8 = 0;
              }
            }
LAB_14821d9c1:
            if (((char)param_1[0x82] == '\x01') && (param_1[0x80] != 0)) {
              FUN_1400020a8();
            }
            param_1[0x7d] = local_d8;
            *(undefined4 *)(param_1 + 0x7e) = (undefined4)uStack_d0;
            *(undefined4 *)((longlong)param_1 + 0x3f4) = uStack_d0._4_4_;
            *(undefined4 *)(param_1 + 0x7f) = (undefined4)local_c8;
            *(undefined4 *)((longlong)param_1 + 0x3fc) = local_c8._4_4_;
            param_1[0x80] = uStack_c0;
            uStack_c0 = 0;
            *(undefined4 *)(param_1 + 0x81) = (undefined4)local_b8;
            *(undefined4 *)((longlong)param_1 + 0x40c) = local_b8._4_4_;
            *(undefined1 *)(param_1 + 0x82) = 1;
            *param_2 = lVar10;
            bVar14 = false;
            if ((lVar10 != 0) && (bVar14 = false, DAT_14c950c29 != '\0')) {
              FUN_1456cec3c();
              bVar14 = false;
            }
          }
          plVar12 = local_a0;
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            plVar13 = local_a0 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
              (**(code **)*local_a0)();
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar12 + 0x10))();
              }
            }
          }
          if (!bVar14) goto LAB_14821dab9;
        }
        plVar13 = local_90;
        plVar12 = *(longlong **)(local_98 + 0x1c8);
        if (plVar12 == (longlong *)0x0) {
LAB_14821d7c3:
          plVar12 = (longlong *)0x0;
          local_98 = 0;
        }
        else {
          iVar8 = (int)plVar12[1];
          do {
            if (iVar8 == 0) goto LAB_14821d7c3;
            LOCK();
            iVar5 = (int)plVar12[1];
            bVar14 = iVar8 == iVar5;
            if (bVar14) {
              *(int *)(plVar12 + 1) = iVar8 + 1;
              iVar5 = iVar8;
            }
            iVar8 = iVar5;
            UNLOCK();
          } while (!bVar14);
          local_98 = *(longlong *)(local_98 + 0x1c0);
        }
        if (plVar12 == local_90) {
          plVar6 = local_90;
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            plVar13 = plVar12 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              *piVar2 = *piVar2 + -1;
              iVar8 = *piVar2;
              UNLOCK();
              plVar13 = plVar12;
              goto joined_r0x00014821d814;
            }
          }
        }
        else {
          plVar6 = plVar12;
          if (local_90 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_90 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar4 = (undefined8 *)*local_90;
              local_90 = plVar12;
              (*(code *)*puVar4)(plVar13);
              LOCK();
              piVar2 = (int *)((longlong)plVar13 + 0xc);
              *piVar2 = *piVar2 + -1;
              iVar8 = *piVar2;
              UNLOCK();
joined_r0x00014821d814:
              plVar6 = local_90;
              if (iVar8 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
                plVar6 = local_90;
              }
            }
          }
        }
        local_90 = plVar6;
      } while (local_98 != 0);
    }
    local_d8 = 0;
    uStack_d0 = 0;
    if (((char)param_1[0x82] == '\x01') && (param_1[0x80] != 0)) {
      FUN_1400020a8();
    }
    param_1[0x7d] = 0;
    *(int *)(param_1 + 0x7e) = (int)local_d8;
    *(int *)((longlong)param_1 + 0x3f4) = local_d8._4_4_;
    *(undefined4 *)(param_1 + 0x7f) = (undefined4)uStack_d0;
    *(undefined4 *)((longlong)param_1 + 0x3fc) = uStack_d0._4_4_;
    param_1[0x80] = 0;
    param_1[0x81] = 0;
    *(undefined1 *)(param_1 + 0x82) = 1;
    *param_2 = 0;
LAB_14821dab9:
    plVar12 = local_90;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_90 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821dc1e FUN_14821dc1e body=197 status=ok
// SIG undefined FUN_14821dc1e(void)

longlong FUN_14821dc1e(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_14595af54();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 14821dce4 FUN_14821dce4 body=179 status=ok
// SIG undefined FUN_14821dce4(void)

undefined8 * FUN_14821dce4(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  
  iVar3 = *(int *)(param_1 + 0x1b8);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x1b0);
    lVar8 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar8);
      FUN_14824a460();
      cVar7 = (**(code **)(*plVar5 + 8))(plVar5,&DAT_14cb462c4);
      if (cVar7 != '\0') {
        uVar6 = *(undefined8 *)(lVar4 + lVar8);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar8);
        if (plVar5 == (longlong *)0x0) {
          *param_2 = uVar6;
          param_2[1] = 0;
          return param_2;
        }
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar6;
        param_2[1] = plVar5;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return param_2;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return param_2;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return param_2;
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar8);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14821dd98 FUN_14821dd98 body=38 status=ok
// SIG undefined FUN_14821dd98(void)

undefined8 FUN_14821dd98(undefined8 param_1,undefined8 param_2)

{
  FUN_14824a4c8();
  FUN_1417aae82(param_1,param_2);
  return param_2;
}



// FUNCTION 14821ddbe FUN_14821ddbe body=40 status=ok
// SIG undefined FUN_14821ddbe(void)

void FUN_14821ddbe(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  if (*(char *)(param_1 + 0x41c) == '\0') {
    *(undefined4 *)(param_1 + 0x420) = param_2;
    *(undefined4 *)(param_1 + 0x424) = param_2;
    *(undefined1 *)(param_1 + 0x428) = param_3;
    *(undefined1 *)(param_1 + 0x429) = param_3;
  }
  return;
}



// FUNCTION 14821ddf2 FUN_14821ddf2 body=26 status=ok
// SIG undefined FUN_14821ddf2(void)

void FUN_14821ddf2(undefined8 param_1)

{
  FUN_1433350e2();
  FUN_14821de0c(param_1);
  return;
}



// FUNCTION 14821de0c FUN_14821de0c body=291 status=ok
// SIG undefined FUN_14821de0c(void)

void FUN_14821de0c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 *local_58;
  undefined4 local_50;
  undefined1 local_48 [15];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_14821e0f1();
  if (*(char *)(param_1 + 0x22c) == '\x01') {
    lVar2 = FUN_14479d2ce(param_1 + 0x224);
  }
  else {
    lVar2 = 0;
  }
  if (lVar2 != lVar1) {
    FUN_145a3e130(param_1);
    if (lVar1 != 0) {
      local_39 = 1;
      local_58 = &LAB_14821e0e4;
      local_50 = 0;
      local_68 = &local_39;
      FUN_14821e1a6(lVar1 + 0x388,local_48,param_1,&local_58);
      local_39 = 0;
      local_58 = &LAB_14821e0e4;
      local_50 = 0;
      local_68 = &local_39;
      FUN_14821e1a6(lVar1 + 0x3a0,local_48,param_1,&local_58);
      if (*(char *)(lVar1 + 0x358) == '\x01') {
        FUN_14821e064(param_1);
      }
      else {
        FUN_14821df36(param_1);
      }
    }
  }
  local_58 = (undefined1 *)0x0;
  FUN_14485c47a(&local_58,lVar1);
  *(undefined1 **)(param_1 + 0x224) = local_58;
  *(undefined1 *)(param_1 + 0x22c) = 1;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821df36 FUN_14821df36 body=108 status=ok
// SIG undefined FUN_14821df36(void)

void FUN_14821df36(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_147786f98();
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_14110d11e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      if (*(char *)(param_1 + 0x220) == '\x01') {
        FUN_14821cf2a(plVar1);
      }
      if ((char)plVar1[0x6b] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00014821df91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x4e0))(plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14821dfa2 FUN_14821dfa2 body=43 status=ok
// SIG undefined FUN_14821dfa2(void)

void FUN_14821dfa2(longlong param_1)

{
  FUN_14821dfce();
  if (*(char *)(param_1 + 0x22c) == '\0') {
    FUN_14821de0c(param_1);
  }
  FUN_14821e064(param_1);
  return;
}



// FUNCTION 14821dfce FUN_14821dfce body=148 status=ok
// SIG undefined FUN_14821dfce(void)

void FUN_14821dfce(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x180);
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x170))) {
    uVar3 = FUN_14778714a(param_1,iVar1);
    FUN_14824a816(param_1 + 0x198,uVar3,iVar1);
    uVar2 = *(undefined4 *)(param_1 + 0x180);
    local_30 = FUN_14778714a(param_1,uVar2);
    local_28 = uVar2;
    FUN_1447cd2ec(param_1 + 0x1c8);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821e064 FUN_14821e064 body=127 status=ok
// SIG undefined FUN_14821e064(void)

void FUN_14821e064(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_147786f98();
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_14110d11e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      if ((*(char *)(param_1 + 0x22c) == '\x01') &&
         ((lVar2 = FUN_14479d2ce(param_1 + 0x224), lVar2 != 0 &&
          (*(char *)(lVar2 + 0x358) != '\x01')))) {
        return;
      }
      if ((char)plVar1[0x6b] == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014821e0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x4d8))(plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14821e0f1 FUN_14821e0f1 body=181 status=ok
// SIG undefined FUN_14821e0f1(void)

longlong FUN_14821e0f1(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    for (lVar2 = *(longlong *)(param_1 + 0x20); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x20)) {
      lVar1 = FUN_1412864c6();
      if (*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) {
        return 0;
      }
      if (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
           ) != lVar1 + 0x30) {
        return 0;
      }
      lVar2 = *(longlong *)(lVar2 + 0x20);
      if (lVar2 == 0) {
        return 0;
      }
      lVar1 = FUN_1405e2bf2();
      if (*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) {
        return 0;
      }
      if (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
           ) != lVar1 + 0x30) {
        return 0;
      }
      lVar1 = FUN_14110d11e();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
           ) == lVar1 + 0x30)) {
        lVar1 = FUN_14110d11e();
        if (*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) {
          return 0;
        }
        if (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30) {
          return 0;
        }
        return lVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 14821e1a6 FUN_14821e1a6 body=274 status=ok
// SIG undefined FUN_14821e1a6(void)

undefined8
FUN_14821e1a6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined1 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar3 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14a83c0e0;
  *(undefined1 *)(local_50 + 1) = *param_5;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_50[2] = lVar5;
  *local_50 = &PTR_FUN_14ae67da0;
  local_50[3] = 0;
  FUN_14485c47a(local_50 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_50);
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821e2be FUN_14821e2be body=191 status=ok
// SIG undefined FUN_14821e2be(void)

void FUN_14821e2be(longlong *param_1,longlong param_2)

{
  int iVar1;
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
  if (1 < (int)param_1[0x2e]) {
    if ((int)param_1[0x30] == (int)param_1[0x2e] + -1) {
      iVar1 = 0;
      if (local_1c == 0) goto LAB_14821e360;
    }
    else {
      iVar1 = (int)param_1[0x30] + 1;
    }
    (**(code **)(*param_1 + 800))(param_1,iVar1);
  }
LAB_14821e360:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14821e382 FUN_14821e382 body=186 status=ok
// SIG undefined FUN_14821e382(void)

void FUN_14821e382(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
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
  if ((1 < (int)param_1[0x2e]) && (iVar1 = (int)param_1[0x30], local_1c != 0 || iVar1 != 0)) {
    iVar2 = (int)param_1[0x2e];
    if (iVar1 != 0) {
      iVar2 = iVar1;
    }
    (**(code **)(*param_1 + 800))(param_1,iVar2 + -1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821e480 FUN_14821e480 body=53 status=ok
// SIG undefined FUN_14821e480(void)

void FUN_14821e480(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x208) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_148260a64();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 14821e4ba FUN_14821e4ba body=154 status=ok
// SIG undefined FUN_14821e4ba(void)

void FUN_14821e4ba(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x218) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821e55e FUN_14821e55e body=397 status=ok
// SIG undefined FUN_14821e55e(void)

void FUN_14821e55e(longlong *param_1,int param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined1 *)((longlong)param_1 + 0x21a);
  *(undefined1 *)((longlong)param_1 + 0x21a) = 1;
  if (((-1 < param_2) && (param_2 < (int)param_1[0x2e])) &&
     (((int)param_1[0x30] != param_2 || (*(char *)((longlong)param_1 + 0x219) == '\0')))) {
    (**(code **)(*param_1 + 0x340))(param_1);
    if (*(char *)((longlong)param_1 + 0x219) == '\0') {
      lVar2 = param_1[0x41];
      if (lVar2 == 0) {
        bVar8 = true;
      }
      else {
        if ((*(int *)(lVar2 + 0x1f0) != 0) && (*(longlong **)(lVar2 + 0x1e8) != (longlong *)0x0)) {
          cVar4 = (**(code **)(**(longlong **)(lVar2 + 0x1e8) + 0x30))();
          if (cVar4 != '\0') {
            if (*(int *)(lVar2 + 0x1f0) == 0) {
              plVar6 = (longlong *)0x0;
            }
            else {
              plVar6 = *(longlong **)(lVar2 + 0x1e8);
            }
            uVar5 = (**(code **)(*plVar6 + 0x58))();
            *(undefined4 *)(lVar2 + 0x1e0) = uVar5;
          }
        }
        bVar8 = *(int *)(lVar2 + 0x1e0) == param_2;
      }
    }
    else {
      bVar8 = false;
    }
    if ((int)param_1[0x30] != param_2) {
      *(int *)(param_1 + 0x30) = param_2;
      local_38 = DAT_14cab9280;
      local_40 = DAT_14cab9278;
      FUN_140e2f5f4(param_1 + 5);
    }
    if (param_1[0x41] != 0) {
      iVar7 = 1;
      if (1 < (int)param_1[0x2e]) {
        iVar7 = (int)param_1[0x2e];
      }
      iVar3 = iVar7 + -1;
      if ((int)param_1[0x30] < iVar7 + -1) {
        iVar3 = (int)param_1[0x30];
      }
      iVar7 = 0;
      if (0 < iVar3) {
        iVar7 = iVar3;
      }
      FUN_143af900c(param_1[0x41],iVar7,CONCAT31((int3)((uint)iVar3 >> 8),(char)param_1[0x43]));
    }
    if (bVar8) {
      (**(code **)(*param_1 + 0x330))(param_1,(int)param_1[0x30]);
    }
    *(undefined1 *)((longlong)param_1 + 0x219) = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x21a) = uVar1;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821e740 FUN_14821e740 body=1830 status=ok
// SIG undefined FUN_14821e740(void)

undefined8 * FUN_14821e740(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_558 [32];
  undefined1 *local_538;
  undefined1 local_529;
  undefined8 local_528;
  longlong *local_520;
  undefined1 local_509;
  undefined8 local_508;
  longlong *local_500;
  undefined2 local_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  longlong *local_4d0;
  undefined8 local_4c8;
  longlong *local_4c0;
  undefined8 local_4b8;
  longlong *local_4b0;
  undefined8 local_4a8;
  longlong *local_4a0;
  undefined8 local_498;
  longlong local_490;
  undefined1 local_488 [88];
  undefined8 local_430;
  longlong *local_428;
  undefined1 *local_3d8;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined1 local_220 [112];
  undefined2 local_1b0;
  undefined1 local_1a8 [304];
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_73;
  undefined4 local_70;
  undefined1 local_6c;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_558;
  FUN_14821ee68(local_220);
  local_78 = *(undefined4 *)(param_1 + 0x180);
  local_73 = *(undefined1 *)(param_1 + 0x1d9);
  local_70 = *(undefined4 *)(param_1 + 0x1dc);
  local_74 = *(undefined1 *)(param_1 + 0x1d8);
  local_6c = *(undefined1 *)(param_1 + 0x1e0);
  local_3d8 = &LAB_14821f00c;
  local_3d0 = 0;
  FUN_14821ef16(local_220,param_1,&local_3d8);
  local_3d8 = &LAB_14821f110;
  local_3d0 = 0;
  FUN_14821f01a(local_220,param_1,&local_3d8);
  local_538 = local_488;
  FUN_14824a8c6(&local_3d8,"SCommonAnimatedSwitcher",
                ".\\../Plugins/Runtime/CommonUI/Source/CommonUI/Private/CommonAnimatedSwitcher.cpp",
                0x73);
  FUN_14821f11e(&local_3d8,&local_430,local_220);
  if (local_428 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_428 + 1) = (int)local_428[1] + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x208) = local_430;
  plVar11 = *(longlong **)(param_1 + 0x210);
  plVar8 = local_428;
  plVar10 = plVar11;
  if (local_428 != plVar11) {
    *(longlong **)(param_1 + 0x210) = local_428;
    plVar10 = local_428;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar11 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
      local_430 = *(undefined8 *)(param_1 + 0x208);
      plVar10 = *(longlong **)(param_1 + 0x210);
    }
    plVar8 = (longlong *)0x0;
  }
  if (plVar10 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x188) = local_430;
    plVar11 = *(longlong **)(param_1 + 400);
    if (plVar11 == (longlong *)0x0) goto LAB_14821e933;
    *(undefined8 *)(param_1 + 400) = 0;
LAB_14821e8f4:
    LOCK();
    plVar10 = plVar11 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 != 0) goto LAB_14821e933;
    (**(code **)*plVar11)(plVar11);
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar10 = plVar11;
  }
  else {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x188) = local_430;
    plVar11 = *(longlong **)(param_1 + 400);
    if (plVar10 != plVar11) {
      *(longlong **)(param_1 + 400) = plVar10;
      if (plVar11 == (longlong *)0x0) goto LAB_14821e933;
      goto LAB_14821e8f4;
    }
    LOCK();
    plVar11 = plVar10 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 != 0) goto LAB_14821e933;
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
LAB_14821e933:
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar8 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if (local_428 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_428 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_428)(local_428);
      LOCK();
      piVar1 = (int *)((longlong)local_428 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_428 + 0x10))(local_428);
      }
    }
  }
  plVar11 = (longlong *)CONCAT44(uStack_3cc,local_3d0);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar11 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  FUN_1449db362(local_58);
  FUN_1449db362(local_68);
  FUN_140a4ff8c(local_220);
  iVar2 = *(int *)(param_1 + 0x170);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x168);
    lVar9 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar9);
      if (lVar4 != 0) {
        lVar5 = FUN_1459913e6();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(param_1);
          }
          *(longlong *)(lVar4 + 0x28) = param_1;
          local_498 = *(undefined8 *)(param_1 + 0x188);
          local_490 = *(longlong *)(param_1 + 400);
          if (local_490 != 0) {
            LOCK();
            *(int *)(local_490 + 8) = *(int *)(local_490 + 8) + 1;
            UNLOCK();
          }
          FUN_1477874b0(lVar4,&local_498);
        }
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar2 * 8 != lVar9);
  }
  FUN_140a504fe(&local_3d8);
  FUN_140a4fdf2(&local_430,0);
  local_4b8 = *(undefined8 *)(param_1 + 0x208);
  plVar11 = *(longlong **)(param_1 + 0x210);
  if (plVar11 == (longlong *)0x0) {
    local_4b0 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    local_4b0 = plVar11;
  }
  uVar6 = FUN_140a4fd40(&local_430,&local_4b8);
  uVar6 = FUN_140a5058c(&local_3d8,uVar6);
  FUN_140a4fdf2(local_488,0);
  FUN_140a50678(local_220);
  local_4f0 = CONCAT11(1,DAT_14c96b1e1);
  local_4e8 = 0;
  uStack_4e0 = 0;
  local_1b0 = local_4f0;
  FUN_144a450dc(local_1a8,&local_4e8);
  FUN_1449db362(&local_4e8);
  local_538 = &local_509;
  FUN_140a52ce6(&local_508,"SSpacer",
                ".\\../Plugins/Runtime/CommonUI/Source/CommonUI/Private/CommonAnimatedSwitcher.cpp",
                0x8d);
  if (local_500 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_500 + 1) = (int)local_500[1] + 1;
    UNLOCK();
  }
  plVar10 = *(longlong **)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x1f8) = local_508;
  *(longlong **)(param_1 + 0x200) = local_500;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar10 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  FUN_140a50c6a(&local_508,&local_4d8,local_220);
  local_4c8 = local_4d8;
  local_4c0 = local_4d0;
  if (local_4d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_4d0 + 1) = (int)local_4d0[1] + 1;
    UNLOCK();
  }
  uVar7 = FUN_140a4fd40(local_488,&local_4c8);
  uVar6 = FUN_140a5058c(uVar6,uVar7);
  local_538 = &local_529;
  FUN_140a536a8(&local_528,"SOverlay",
                ".\\../Plugins/Runtime/CommonUI/Source/CommonUI/Private/CommonAnimatedSwitcher.cpp",
                0x86);
  if (local_520 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_520 + 1) = (int)local_520[1] + 1;
    UNLOCK();
  }
  plVar10 = *(longlong **)(param_1 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1e8) = local_528;
  *(longlong **)(param_1 + 0x1f0) = local_520;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar10 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  FUN_140a4ff16(&local_528,&local_4a8,uVar6);
  *param_2 = local_4a8;
  param_2[1] = local_4a0;
  if (local_4a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_4a0 + 1) = (int)local_4a0[1] + 1;
    UNLOCK();
    if (local_4a0 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_4a0 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*local_4a0)(local_4a0);
        LOCK();
        piVar1 = (int *)((longlong)local_4a0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_4a0 + 0x10))(local_4a0);
        }
      }
    }
  }
  if (local_520 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_520 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_520)(local_520);
      LOCK();
      piVar1 = (int *)((longlong)local_520 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_520 + 0x10))(local_520);
      }
    }
  }
  plVar10 = local_4c0;
  if (local_4c0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_4c0 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_4c0)(local_4c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (local_4d0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_4d0 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_4d0)(local_4d0);
      LOCK();
      piVar1 = (int *)((longlong)local_4d0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_4d0 + 0x10))(local_4d0);
      }
    }
  }
  if (local_500 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_500 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_500)(local_500);
      LOCK();
      piVar1 = (int *)((longlong)local_500 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_500 + 0x10))(local_500);
      }
    }
  }
  FUN_1449db362(local_60);
  FUN_140a4ff8c(local_220);
  FUN_1415b5e50(local_488);
  plVar10 = local_4b0;
  if (local_4b0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_4b0 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_4b0)(local_4b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar11 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  FUN_1415b5e50(&local_430);
  FUN_1415b5e16(&local_3d8);
  if ((local_48 ^ (ulonglong)auStack_558) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821ee68 FUN_14821ee68 body=173 status=ok
// SIG undefined FUN_14821ee68(void)

longlong FUN_14821ee68(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined2 *)(param_1 + 0x1ac) = 0x600;
  *(undefined4 *)(param_1 + 0x1b0) = 0x3e4ccccd;
  *(undefined1 *)(param_1 + 0x1b4) = 1;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
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



// FUNCTION 14821ef16 FUN_14821ef16 body=245 status=ok
// SIG undefined FUN_14821ef16(void)

longlong FUN_14821ef16(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e35290;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14ae67e10;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 0x1b8,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821f01a FUN_14821f01a body=245 status=ok
// SIG undefined FUN_14821f01a(void)

longlong FUN_14821f01a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e06450;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14ae67e80;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_144a450dc(param_1 + 0x1c8,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821f11e FUN_14821f11e body=115 status=ok
// SIG undefined FUN_14821f11e(void)

longlong * FUN_14821f11e(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_1482602c2(*param_1,param_3);
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



// FUNCTION 14821f192 FUN_14821f192 body=128 status=ok
// SIG undefined FUN_14821f192(void)

void FUN_14821f192(longlong param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30;
  undefined1 local_2f;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = &DAT_14c96b1e1;
  if ((char)param_2 != '\0') {
    puVar1 = &DAT_14c96b238;
  }
  local_30 = *puVar1;
  local_2f = 1;
  local_28 = 0;
  uStack_20 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x1f8) + 0x1c0))();
  FUN_140898514(param_1 + 0x1b0,param_2);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821f214 FUN_14821f214 body=393 status=ok
// SIG undefined FUN_14821f214(void)

void FUN_14821f214(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_f8 [32];
  undefined **local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined4 local_64;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = &PTR_FUN_149ed05f0;
  local_d0 = &DAT_3f8000003f800000;
  puStack_c8 = &DAT_3f8000003f800000;
  local_c0 = 0;
  local_bc = 3;
  local_b8 = 0x4200000042000000;
  local_64 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  local_60 = 1;
  local_50 = DAT_14c84635c;
  local_58 = DAT_14c84635c;
  local_48 = 0;
  local_44 = 4;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  pppuVar4 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar4 = &local_d8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140f13d9e(pppuVar4,param_1 + 0x30);
  plVar3 = plStack_38;
  local_d8 = &PTR_FUN_149ed05f0;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821f3a2 FUN_14821f3a2 body=239 status=ok
// SIG undefined FUN_14821f3a2(void)

void FUN_14821f3a2(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_20 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(local_20);
  }
  if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x61] = lVar1;
  if (param_1[0x5f] != 0) {
    (**(code **)(*param_1 + 0x2d8))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821f49e FUN_14821f49e body=117 status=ok
// SIG undefined FUN_14821f49e(void)

undefined8 FUN_14821f49e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  code *local_30;
  undefined4 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x310) == '\x01') {
    local_30 = FUN_14821f60e;
    local_28 = 0;
    FUN_14821f514(local_20,param_1);
  }
  FUN_1476d1c4e(param_1,param_2);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821f514 FUN_14821f514 body=248 status=ok
// SIG undefined FUN_14821f514(void)

undefined8 FUN_14821f514(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14ae67ef0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(&DAT_14c8672b0,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821f60e FUN_14821f60e body=609 status=ok
// SIG undefined FUN_14821f60e(void)

void FUN_14821f60e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_e8 [40];
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  float local_94;
  int local_90;
  int local_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = 0;
  uStack_70 = 0;
  if ((*(char *)(param_1 + 0x310) != '\x01') || (*(longlong *)(param_1 + 0x2f8) == 0))
  goto LAB_14821f830;
  FUN_1469aa384(DAT_14c98e618,&local_88);
  lVar4 = CONCAT44(fStack_84,local_88);
  if ((lVar4 != 0) && (plVar2 = *(longlong **)(lVar4 + 0x270), plVar2 != (longlong *)0x0)) {
    plVar3 = *(longlong **)(lVar4 + 0x268);
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    iVar6 = (int)plVar2[1];
    do {
      plVar7 = (longlong *)0x0;
      if (iVar6 == 0) break;
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
      plVar7 = plVar2;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    if (plVar3 == (longlong *)0x0 || plVar7 == (longlong *)0x0) {
      if (plVar7 == (longlong *)0x0) goto LAB_14821f73c;
    }
    else {
      (**(code **)(*plVar3 + 0x10))(plVar3,&local_90);
      local_94 = (float)local_8c;
      local_98 = (float)local_90;
      FUN_145787b40(DAT_14c98e618,&local_78);
    }
    LOCK();
    plVar2 = plVar7 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
LAB_14821f73c:
  plVar2 = (longlong *)CONCAT44(fStack_7c,local_80);
  if (plVar2 != (longlong *)0x0) {
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
  }
  FUN_1476d1ad2(param_1,&local_88);
  fVar9 = *(float *)(param_1 + 0x314);
  if (*(float *)(param_1 + 0x314) <= local_88 - (float)local_78) {
    fVar9 = local_88 - (float)local_78;
  }
  FUN_1476d1ad2(param_1,&local_88);
  fVar10 = *(float *)(param_1 + 0x31c);
  if (*(float *)(param_1 + 0x31c) <= local_80 - (float)uStack_70) {
    fVar10 = local_80 - (float)uStack_70;
  }
  FUN_1476d1ad2(param_1,&local_88);
  local_bc = *(float *)(param_1 + 0x318);
  if (*(float *)(param_1 + 0x318) <= fStack_84 - local_78._4_4_) {
    local_bc = fStack_84 - local_78._4_4_;
  }
  FUN_1476d1ad2(param_1,&local_88);
  local_b4 = *(float *)(param_1 + 800);
  if (*(float *)(param_1 + 800) <= fStack_7c - uStack_70._4_4_) {
    local_b4 = fStack_7c - uStack_70._4_4_;
  }
  local_b0 = 1;
  local_a8 = 0;
  uStack_a0 = 0;
  local_c0 = fVar9;
  local_b8 = fVar10;
  FUN_145ab4ba4(*(undefined8 *)(param_1 + 0x2f8));
LAB_14821f830:
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14821f870 FUN_14821f870 body=58 status=ok
// SIG undefined FUN_14821f870(void)

void FUN_14821f870(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14821f8aa();
  if (lVar1 != 0) {
    FUN_140f13d9e(param_1 + 0x1c0,lVar1 + 0x30);
  }
  FUN_1476d1fba(param_1);
  FUN_14821f60e(param_1);
  return;
}



// FUNCTION 14821f8aa FUN_14821f8aa body=204 status=ok
// SIG undefined FUN_14821f8aa(void)

longlong FUN_14821f8aa(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x308);
  if ((((lVar3 != 0) && (lVar2 = FUN_14594b69c(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
     ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30 && (lVar3 = *(longlong *)(param_1 + 0x308), lVar3 != 0)))) {
    lVar2 = FUN_14594b69c();
    if ((lVar2 == 0) ||
       ((*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
         lVar2 + 0x30)))) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x308);
    }
    if (*(longlong *)(lVar3 + 0x110) != 0) {
      lVar2 = FUN_14594b69c();
      lVar3 = *(longlong *)(lVar3 + 0x110);
      if ((((lVar3 != 0) && (lVar2 != 0)) && (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 != 0)) &&
         ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
           lVar2 + 0x30)))) {
        return lVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 14821f97a FUN_14821f97a body=167 status=ok
// SIG undefined FUN_14821f97a(void)

void FUN_14821f97a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
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
  puVar4 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = *(undefined4 *)(param_1 + 0x5b4);
  uVar2 = *(undefined4 *)(param_1 + 0x5b8);
  uVar3 = *(undefined4 *)(param_1 + 0x5bc);
  *(undefined4 *)puVar4 = *(undefined4 *)(param_1 + 0x5b0);
  *(undefined4 *)((longlong)puVar4 + 4) = uVar1;
  *(undefined4 *)(puVar4 + 1) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0xc) = uVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821fa22 FUN_14821fa22 body=167 status=ok
// SIG undefined FUN_14821fa22(void)

void FUN_14821fa22(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
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
  puVar4 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = *(undefined4 *)(param_1 + 0x5c4);
  uVar2 = *(undefined4 *)(param_1 + 0x5c8);
  uVar3 = *(undefined4 *)(param_1 + 0x5cc);
  *(undefined4 *)puVar4 = *(undefined4 *)(param_1 + 0x5c0);
  *(undefined4 *)((longlong)puVar4 + 4) = uVar1;
  *(undefined4 *)(puVar4 + 1) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0xc) = uVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821faca FUN_14821faca body=396 status=ok
// SIG undefined FUN_14821faca(void)

void FUN_14821faca(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_f8 [32];
  undefined **local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined4 local_64;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = &PTR_FUN_149ed05f0;
  local_d0 = &DAT_3f8000003f800000;
  puStack_c8 = &DAT_3f8000003f800000;
  local_c0 = 0;
  local_bc = 3;
  local_b8 = 0x4200000042000000;
  local_64 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  local_60 = 1;
  local_50 = DAT_14c84635c;
  local_58 = DAT_14c84635c;
  local_48 = 0;
  local_44 = 4;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  pppuVar4 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar4 = &local_d8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140f13d9e(pppuVar4,param_1 + 0x500);
  plVar3 = plStack_38;
  local_d8 = &PTR_FUN_149ed05f0;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821fc58 FUN_14821fc58 body=38 status=ok
// SIG undefined FUN_14821fc58(void)

void FUN_14821fc58(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14821fc7e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14821fc7e FUN_14821fc7e body=189 status=ok
// SIG undefined FUN_14821fc7e(void)

longlong FUN_14821fc7e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x5f8);
  if ((((lVar3 != 0) && (lVar2 = FUN_14117a954(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
     ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30 && (lVar3 = *(longlong *)(param_1 + 0x5f8), lVar3 != 0)))) {
    lVar2 = FUN_14117a954();
    if ((lVar2 == 0) ||
       ((*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
         lVar2 + 0x30)))) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x5f8);
    }
    if (*(longlong *)(lVar3 + 0x110) != 0) {
      lVar2 = FUN_14117a954();
      lVar3 = *(longlong *)(lVar3 + 0x110);
      if ((((lVar3 != 0) && (lVar2 != 0)) && (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 != 0)) &&
         ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
           lVar2 + 0x30)))) {
        return lVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 14821fd3c FUN_14821fd3c body=393 status=ok
// SIG undefined FUN_14821fd3c(void)

void FUN_14821fd3c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_f8 [32];
  undefined **local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined4 local_64;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = &PTR_FUN_149ed05f0;
  local_d0 = &DAT_3f8000003f800000;
  puStack_c8 = &DAT_3f8000003f800000;
  local_c0 = 0;
  local_bc = 3;
  local_b8 = 0x4200000042000000;
  local_64 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  local_60 = 1;
  local_50 = DAT_14c84635c;
  local_58 = DAT_14c84635c;
  local_48 = 0;
  local_44 = 4;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  pppuVar4 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar4 = &local_d8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140f13d9e(pppuVar4,param_1 + 0x30);
  plVar3 = plStack_38;
  local_d8 = &PTR_FUN_149ed05f0;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14821fec6 FUN_14821fec6 body=396 status=ok
// SIG undefined FUN_14821fec6(void)

void FUN_14821fec6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_f8 [32];
  undefined **local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined4 local_64;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = &PTR_FUN_149ed05f0;
  local_d0 = &DAT_3f8000003f800000;
  puStack_c8 = &DAT_3f8000003f800000;
  local_c0 = 0;
  local_bc = 3;
  local_b8 = 0x4200000042000000;
  local_64 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  local_60 = 1;
  local_50 = DAT_14c84635c;
  local_58 = DAT_14c84635c;
  local_48 = 0;
  local_44 = 4;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  pppuVar4 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar4 = &local_d8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140f13d9e(pppuVar4,param_1 + 0xe0);
  plVar3 = plStack_38;
  local_d8 = &PTR_FUN_149ed05f0;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148220054 FUN_148220054 body=396 status=ok
// SIG undefined FUN_148220054(void)

void FUN_148220054(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_f8 [32];
  undefined **local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined4 local_64;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = &PTR_FUN_149ed05f0;
  local_d0 = &DAT_3f8000003f800000;
  puStack_c8 = &DAT_3f8000003f800000;
  local_c0 = 0;
  local_bc = 3;
  local_b8 = 0x4200000042000000;
  local_64 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  local_60 = 1;
  local_50 = DAT_14c84635c;
  local_58 = DAT_14c84635c;
  local_48 = 0;
  local_44 = 4;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  pppuVar4 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar4 = &local_d8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140f13d9e(pppuVar4,param_1 + 400);
  plVar3 = plStack_38;
  local_d8 = &PTR_FUN_149ed05f0;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482201e2 FUN_1482201e2 body=38 status=ok
// SIG undefined FUN_1482201e2(void)

void FUN_1482201e2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148220208();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148220208 FUN_148220208 body=189 status=ok
// SIG undefined FUN_148220208(void)

longlong FUN_148220208(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x5e0);
  if ((((lVar3 != 0) && (lVar2 = FUN_14117a954(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
     ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30 && (lVar3 = *(longlong *)(param_1 + 0x5e0), lVar3 != 0)))) {
    lVar2 = FUN_14117a954();
    if ((lVar2 == 0) ||
       ((*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
         lVar2 + 0x30)))) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x5e0);
    }
    if (*(longlong *)(lVar3 + 0x110) != 0) {
      lVar2 = FUN_14117a954();
      lVar3 = *(longlong *)(lVar3 + 0x110);
      if ((((lVar3 != 0) && (lVar2 != 0)) && (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 != 0)) &&
         ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
           lVar2 + 0x30)))) {
        return lVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 1482202c6 FUN_1482202c6 body=396 status=ok
// SIG undefined FUN_1482202c6(void)

void FUN_1482202c6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_f8 [32];
  undefined **local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined4 local_64;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = &PTR_FUN_149ed05f0;
  local_d0 = &DAT_3f8000003f800000;
  puStack_c8 = &DAT_3f8000003f800000;
  local_c0 = 0;
  local_bc = 3;
  local_b8 = 0x4200000042000000;
  local_64 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  local_60 = 1;
  local_50 = DAT_14c84635c;
  local_58 = DAT_14c84635c;
  local_48 = 0;
  local_44 = 4;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  pppuVar4 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar4 = &local_d8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140f13d9e(pppuVar4,param_1 + 0x240);
  plVar3 = plStack_38;
  local_d8 = &PTR_FUN_149ed05f0;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148220454 FUN_148220454 body=38 status=ok
// SIG undefined FUN_148220454(void)

void FUN_148220454(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14822047a();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14822047a FUN_14822047a body=189 status=ok
// SIG undefined FUN_14822047a(void)

longlong FUN_14822047a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x5d8);
  if ((((lVar3 != 0) && (lVar2 = FUN_14117a954(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
     ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30 && (lVar3 = *(longlong *)(param_1 + 0x5d8), lVar3 != 0)))) {
    lVar2 = FUN_14117a954();
    if ((lVar2 == 0) ||
       ((*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
         lVar2 + 0x30)))) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x5d8);
    }
    if (*(longlong *)(lVar3 + 0x110) != 0) {
      lVar2 = FUN_14117a954();
      lVar3 = *(longlong *)(lVar3 + 0x110);
      if ((((lVar3 != 0) && (lVar2 != 0)) && (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 != 0)) &&
         ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
           lVar2 + 0x30)))) {
        return lVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 148220538 FUN_148220538 body=396 status=ok
// SIG undefined FUN_148220538(void)

void FUN_148220538(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_f8 [32];
  undefined **local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined4 local_64;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = &PTR_FUN_149ed05f0;
  local_d0 = &DAT_3f8000003f800000;
  puStack_c8 = &DAT_3f8000003f800000;
  local_c0 = 0;
  local_bc = 3;
  local_b8 = 0x4200000042000000;
  local_64 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  local_60 = 1;
  local_50 = DAT_14c84635c;
  local_58 = DAT_14c84635c;
  local_48 = 0;
  local_44 = 4;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  pppuVar4 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar4 = &local_d8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140f13d9e(pppuVar4,param_1 + 0x2f0);
  plVar3 = plStack_38;
  local_d8 = &PTR_FUN_149ed05f0;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482206c6 FUN_1482206c6 body=396 status=ok
// SIG undefined FUN_1482206c6(void)

void FUN_1482206c6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_f8 [32];
  undefined **local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined4 local_64;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = &PTR_FUN_149ed05f0;
  local_d0 = &DAT_3f8000003f800000;
  puStack_c8 = &DAT_3f8000003f800000;
  local_c0 = 0;
  local_bc = 3;
  local_b8 = 0x4200000042000000;
  local_64 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  local_60 = 1;
  local_50 = DAT_14c84635c;
  local_58 = DAT_14c84635c;
  local_48 = 0;
  local_44 = 4;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  pppuVar4 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar4 = &local_d8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140f13d9e(pppuVar4,param_1 + 0x3a0);
  plVar3 = plStack_38;
  local_d8 = &PTR_FUN_149ed05f0;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148220854 FUN_148220854 body=38 status=ok
// SIG undefined FUN_148220854(void)

void FUN_148220854(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14822087a();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14822087a FUN_14822087a body=189 status=ok
// SIG undefined FUN_14822087a(void)

longlong FUN_14822087a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x5f0);
  if ((((lVar3 != 0) && (lVar2 = FUN_14117a954(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
     ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30 && (lVar3 = *(longlong *)(param_1 + 0x5f0), lVar3 != 0)))) {
    lVar2 = FUN_14117a954();
    if ((lVar2 == 0) ||
       ((*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
         lVar2 + 0x30)))) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x5f0);
    }
    if (*(longlong *)(lVar3 + 0x110) != 0) {
      lVar2 = FUN_14117a954();
      lVar3 = *(longlong *)(lVar3 + 0x110);
      if ((((lVar3 != 0) && (lVar2 != 0)) && (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 != 0)) &&
         ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
           lVar2 + 0x30)))) {
        return lVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 148220938 FUN_148220938 body=396 status=ok
// SIG undefined FUN_148220938(void)

void FUN_148220938(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_f8 [32];
  undefined **local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined4 local_64;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = &PTR_FUN_149ed05f0;
  local_d0 = &DAT_3f8000003f800000;
  puStack_c8 = &DAT_3f8000003f800000;
  local_c0 = 0;
  local_bc = 3;
  local_b8 = 0x4200000042000000;
  local_64 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  local_60 = 1;
  local_50 = DAT_14c84635c;
  local_58 = DAT_14c84635c;
  local_48 = 0;
  local_44 = 4;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  pppuVar4 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar4 = &local_d8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140f13d9e(pppuVar4,param_1 + 0x450);
  plVar3 = plStack_38;
  local_d8 = &PTR_FUN_149ed05f0;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148220ac6 FUN_148220ac6 body=38 status=ok
// SIG undefined FUN_148220ac6(void)

void FUN_148220ac6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148220aec();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148220aec FUN_148220aec body=189 status=ok
// SIG undefined FUN_148220aec(void)

longlong FUN_148220aec(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x5e8);
  if ((((lVar3 != 0) && (lVar2 = FUN_14117a954(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
     ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30 && (lVar3 = *(longlong *)(param_1 + 0x5e8), lVar3 != 0)))) {
    lVar2 = FUN_14117a954();
    if ((lVar2 == 0) ||
       ((*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
         lVar2 + 0x30)))) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x5e8);
    }
    if (*(longlong *)(lVar3 + 0x110) != 0) {
      lVar2 = FUN_14117a954();
      lVar3 = *(longlong *)(lVar3 + 0x110);
      if ((((lVar3 != 0) && (lVar2 != 0)) && (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 != 0)) &&
         ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
           lVar2 + 0x30)))) {
        return lVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 148220bee FUN_148220bee body=189 status=ok
// SIG undefined FUN_148220bee(void)

void FUN_148220bee(undefined8 param_1,longlong param_2)

{
  longlong **pplVar1;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(local_30);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  pplVar1 = local_30;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar1 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148220cac(param_1,pplVar1);
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148220cac FUN_148220cac body=94 status=ok
// SIG undefined FUN_148220cac(void)

void FUN_148220cac(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)param_1[0x96];
  if (plVar2 != plVar1) {
    param_1[0x96] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x97) = (int)param_2[1];
                    /* WARNING: Could not recover jumptable at 0x000148220d07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2a8))(param_1,0);
  return;
}



// FUNCTION 148220d0e FUN_148220d0e body=41 status=ok
// SIG undefined FUN_148220d0e(void)

void FUN_148220d0e(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x560))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148220d38 FUN_148220d38 body=182 status=ok
// SIG undefined FUN_148220d38(void)

void FUN_148220d38(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar5 = FUN_148226fde(param_1);
  if (lVar5 != 0) {
    puVar6 = &local_38;
    if (puVar1 != (undefined8 *)0x0) {
      puVar6 = puVar1;
    }
    uVar2 = *(undefined4 *)(lVar5 + 0x5b4);
    uVar3 = *(undefined4 *)(lVar5 + 0x5b8);
    uVar4 = *(undefined4 *)(lVar5 + 0x5bc);
    *(undefined4 *)puVar6 = *(undefined4 *)(lVar5 + 0x5b0);
    *(undefined4 *)((longlong)puVar6 + 4) = uVar2;
    *(undefined4 *)(puVar6 + 1) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0xc) = uVar4;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148220df0 FUN_148220df0 body=182 status=ok
// SIG undefined FUN_148220df0(void)

void FUN_148220df0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar5 = FUN_148226fde(param_1);
  if (lVar5 != 0) {
    puVar6 = &local_38;
    if (puVar1 != (undefined8 *)0x0) {
      puVar6 = puVar1;
    }
    uVar2 = *(undefined4 *)(lVar5 + 0x5c4);
    uVar3 = *(undefined4 *)(lVar5 + 0x5c8);
    uVar4 = *(undefined4 *)(lVar5 + 0x5cc);
    *(undefined4 *)puVar6 = *(undefined4 *)(lVar5 + 0x5c0);
    *(undefined4 *)((longlong)puVar6 + 4) = uVar2;
    *(undefined4 *)(puVar6 + 1) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0xc) = uVar4;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148220ea8 FUN_148220ea8 body=38 status=ok
// SIG undefined FUN_148220ea8(void)

void FUN_148220ea8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148220ece();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148220ece FUN_148220ece body=142 status=ok
// SIG undefined FUN_148220ece(void)

longlong FUN_148220ece(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_148226fde();
  if (lVar2 == 0) {
    return 0;
  }
  if ((*(byte *)((longlong)param_1 + 0x3b9) & 2) == 0) {
    lVar3 = FUN_14821fc7e(lVar2);
  }
  else {
    if ((*(byte *)((longlong)param_1 + 0x3b9) & 1) == 0) goto LAB_148220f0a;
    cVar1 = (**(code **)(*param_1 + 0x2b8))(param_1);
    if ((cVar1 != '\0') && (lVar3 = FUN_14822087a(lVar2), lVar3 != 0)) {
      return lVar3;
    }
    lVar3 = FUN_148220aec(lVar2);
  }
  if (lVar3 != 0) {
    return lVar3;
  }
LAB_148220f0a:
  cVar1 = (**(code **)(*param_1 + 0x2b8))(param_1);
  if ((cVar1 != '\0') && (lVar3 = FUN_148220208(lVar2), lVar3 != 0)) {
    return lVar3;
  }
  lVar2 = FUN_14822047a(lVar2);
  return lVar2;
}



// FUNCTION 148220f5c FUN_148220f5c body=107 status=ok
// SIG undefined FUN_148220f5c(void)

void FUN_148220f5c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_148220ece();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if (lVar1 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar1);
    }
    if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(lVar1);
    }
  }
  *param_3 = lVar1;
  return;
}



// FUNCTION 148220fea FUN_148220fea body=172 status=ok
// SIG undefined FUN_148220fea(void)

void FUN_148220fea(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
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
  puVar2 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148221098(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148221098 FUN_148221098 body=200 status=ok
// SIG undefined FUN_148221098(void)

undefined8 FUN_148221098(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x3c8);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x3e0);
    if (*(longlong *)(param_1 + 0x3d0) != 0) {
      if (lVar1 != 0) {
        return 0;
      }
      lVar1 = 0;
      if (*(longlong *)(param_1 + 1000) != 0) {
        return 0;
      }
      lVar2 = 0x3d0;
      goto LAB_148221126;
    }
    if (lVar1 == 0) {
      lVar1 = 0;
      if (*(longlong *)(param_1 + 1000) == 0) {
        return 0;
      }
      lVar2 = 1000;
      goto LAB_148221126;
    }
    lVar2 = 1000;
    if (DAT_14c950c29 != '\x01') goto LAB_148221126;
    plVar3 = (longlong *)(param_1 + 0x3e0);
  }
  else {
    if ((*(longlong *)(param_1 + 0x3e0) != 0) || (*(longlong *)(param_1 + 1000) != 0)) {
      return 0;
    }
    lVar2 = 0x3d0;
    if (DAT_14c950c29 == '\0') goto LAB_148221126;
    plVar3 = (longlong *)(param_1 + 0x3c8);
  }
  FUN_1456cec3c(lVar1);
  lVar1 = *plVar3;
LAB_148221126:
  *param_2 = lVar1;
  lVar1 = *(longlong *)(param_1 + lVar2);
  param_2[1] = lVar1;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



// FUNCTION 148221164 FUN_148221164 body=37 status=ok
// SIG undefined FUN_148221164(void)

void FUN_148221164(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14779bf34();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14822124e FUN_14822124e body=38 status=ok
// SIG undefined FUN_14822124e(void)

void FUN_14822124e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148226fde();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14822128a FUN_14822128a body=156 status=ok
// SIG undefined FUN_14822128a(void)

void FUN_14822128a(longlong *param_1)

{
  char cVar1;
  
  cVar1 = FUN_14822193e();
  if ((cVar1 != '\0') &&
     (((*(byte *)((longlong)param_1 + 0x3a9) & 4) == 0 ||
      (1.0 < *(float *)(param_1 + 0x8e) || *(float *)(param_1 + 0x8e) == 1.0)))) {
    if ((*(byte *)(param_1 + 0x75) & 0x40) == 0) {
      (**(code **)(*param_1 + 0x528))(param_1);
      FUN_148222946(param_1,(*(byte *)((longlong)param_1 + 0x3b9) & 1) == 0,0);
    }
    else {
      FUN_148222946(param_1,(*(byte *)((longlong)param_1 + 0x3b9) & 1) == 0,0);
      (**(code **)(*param_1 + 0x528))(param_1);
    }
    (**(code **)(*param_1 + 0x4e8))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014822131f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x588))(param_1);
    return;
  }
  return;
}



// FUNCTION 14822133c FUN_14822133c body=608 status=ok
// SIG undefined FUN_14822133c(void)

void FUN_14822133c(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong local_58;
  longlong local_50;
  undefined8 *local_48;
  undefined4 local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x538))();
  lVar5 = (**(code **)(*param_1 + 0x2d0))(param_1);
  if (lVar5 != 0) {
    lVar5 = FUN_140e94dc2(lVar5);
    if ((((lVar5 != 0) && (*(char *)(lVar5 + 0x91) == '\x02')) && ((char)param_1[0x77] == '\x01'))
       && (DAT_14c762a54 != 0)) {
      (**(code **)(*param_1 + 0x518))(param_1);
    }
  }
  if (((*(byte *)((longlong)param_1 + 0x3a9) & 4) != 0) &&
     (0.0 < *(float *)((longlong)param_1 + 0x464))) {
    uVar6 = FUN_1401cb356();
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,3,0x10);
    puVar3 = local_48;
    local_40 = 3;
    *local_48 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_48[2] = lVar7;
    *local_48 = &PTR_FUN_14ae68540;
    local_48[3] = 0;
    FUN_14485c47a(local_48 + 3,param_1);
    *(undefined4 *)(puVar3 + 5) = 0;
    puVar3[4] = &LAB_1482273b8;
    local_68 = 0;
    FUN_1405f67fc(uVar6,&local_38,&local_48,L"UCommonButtonBase_NativeOnHoldProgress");
    if (param_1 + 0x8f != &local_38) {
      param_1[0x8f] = local_38;
      local_38 = 0;
      plVar2 = (longlong *)param_1[0x90];
      param_1[0x90] = (longlong)local_30;
      local_30 = (longlong *)0x0;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
    }
    FUN_1449db362(&local_48);
    if (((param_1[0x91] != 0) && (param_1[0x92] != 0)) && (0 < *(int *)(param_1[0x92] + 8))) {
      FUN_1401cb356();
      local_58 = param_1[0x91];
      local_50 = param_1[0x92];
      if (local_50 != 0) {
        LOCK();
        *(int *)(local_50 + 0xc) = *(int *)(local_50 + 0xc) + 1;
        UNLOCK();
      }
      FUN_140d61352(&local_58);
      plVar2 = (longlong *)param_1[0x92];
      param_1[0x91] = 0;
      param_1[0x92] = 0;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
    }
  }
  cVar4 = FUN_143af6288(param_1 + 0x8c);
  if (cVar4 != '\0') {
    FUN_143af63e6(param_1 + 0x8c);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482215b4 FUN_1482215b4 body=590 status=ok
// SIG undefined FUN_1482215b4(void)

void FUN_1482215b4(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong local_58;
  longlong local_50;
  undefined8 *local_48;
  undefined4 local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x540))();
  lVar4 = (**(code **)(*param_1 + 0x2d0))(param_1);
  if (lVar4 != 0) {
    lVar4 = FUN_140e94dc2(lVar4);
    if ((((lVar4 != 0) && (*(char *)(lVar4 + 0x91) == '\x02')) && ((char)param_1[0x77] == '\x01'))
       && (DAT_14c762a54 != 0)) {
      (**(code **)(*param_1 + 0x520))(param_1);
    }
  }
  if (((*(byte *)((longlong)param_1 + 0x3a9) & 4) != 0) &&
     (0.0 < *(float *)((longlong)param_1 + 0x464))) {
    if (*(float *)(param_1 + 0x8d) <= 1e-08) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
    }
    uVar5 = FUN_1401cb356();
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,3,0x10);
    puVar3 = local_48;
    local_40 = 3;
    *local_48 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_48[2] = lVar6;
    *local_48 = &PTR_FUN_14ae68540;
    local_48[3] = 0;
    FUN_14485c47a(local_48 + 3,param_1);
    *(undefined4 *)(puVar3 + 5) = 0;
    puVar3[4] = &LAB_1482273c6;
    local_68 = 0;
    FUN_1405f67fc(uVar5,&local_38,&local_48,L"UCommonButtonBase_NativeOnHoldProgressRollback");
    if (param_1 + 0x91 != &local_38) {
      param_1[0x91] = local_38;
      local_38 = 0;
      plVar2 = (longlong *)param_1[0x92];
      param_1[0x92] = (longlong)local_30;
      local_30 = (longlong *)0x0;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
    }
    FUN_1449db362(&local_48);
    FUN_1401cb356();
    local_58 = param_1[0x8f];
    local_50 = param_1[0x90];
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 0xc) = *(int *)(local_50 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_58);
    plVar2 = (longlong *)param_1[0x90];
    param_1[0x8f] = 0;
    param_1[0x90] = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148221850 FUN_148221850 body=169 status=ok
// SIG undefined FUN_148221850(void)

void FUN_148221850(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  puVar1 = &local_19;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x4e0))(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148221918 FUN_148221918 body=37 status=ok
// SIG undefined FUN_148221918(void)

void FUN_148221918(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14822193e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14822193e FUN_14822193e body=67 status=ok
// SIG undefined FUN_14822193e(void)

byte FUN_14822193e(longlong param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  
  cVar1 = FUN_145beedf4();
  cVar2 = FUN_14775b22e(param_1);
  if ((cVar2 == '\0') || ((*(byte *)(param_1 + 0x3b9) & 2) == 0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = (byte)(cVar1 - 3U) < 0xfe & (*(byte *)(param_1 + 0x3b9) & 4) >> 2;
  }
  return bVar3;
}



// FUNCTION 148221986 FUN_148221986 body=37 status=ok
// SIG undefined FUN_148221986(void)

void FUN_148221986(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1482219ac();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1482219ac FUN_1482219ac body=74 status=ok
// SIG undefined FUN_1482219ac(void)

undefined1 FUN_1482219ac(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x1294);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x1294);
    lVar2 = *(longlong *)(lVar2 + 0x5d8);
    if (lVar2 != 0) {
      if ((*(byte *)(lVar2 + 0x33b) & 2) != 0) {
        return 1;
      }
      return *(undefined1 *)(lVar2 + 0x360);
    }
  }
  return 0;
}



// FUNCTION 148221a10 FUN_148221a10 body=160 status=ok
// SIG undefined FUN_148221a10(void)

void FUN_148221a10(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x568))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148221ab8 FUN_148221ab8 body=167 status=ok
// SIG undefined FUN_148221ab8(void)

void FUN_148221ab8(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x570))(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148221b66 FUN_148221b66 body=167 status=ok
// SIG undefined FUN_148221b66(void)

void FUN_148221b66(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x578))(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148221c0e FUN_148221c0e body=155 status=ok
// SIG undefined FUN_148221c0e(void)

void FUN_148221c0e(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x4b8))(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148221caa FUN_148221caa body=137 status=ok
// SIG undefined FUN_148221caa(void)

void FUN_148221caa(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (local_30 == 0) {
      local_30 = 0;
    }
    else {
      FUN_1456cec3c();
      local_30 = *param_2;
    }
  }
  local_28 = param_2[1];
  uVar1 = FUN_14477b072(param_1,DAT_14cb45048);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148221d34 FUN_148221d34 body=137 status=ok
// SIG undefined FUN_148221d34(void)

void FUN_148221d34(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (local_30 == 0) {
      local_30 = 0;
    }
    else {
      FUN_1456cec3c();
      local_30 = *param_2;
    }
  }
  local_28 = param_2[1];
  uVar1 = FUN_14477b072(param_1,DAT_14cb45068);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148221dbe FUN_148221dbe body=152 status=ok
// SIG undefined FUN_148221dbe(void)

void FUN_148221dbe(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148221e58(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148221e58 FUN_148221e58 body=71 status=ok
// SIG undefined FUN_148221e58(void)

void FUN_148221e58(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  *(undefined1 *)(param_1 + 0x3ba) = param_2;
  cVar2 = FUN_144729dda(param_1 + 0x1294);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x1294);
    FUN_1476d35fc(uVar1,*(undefined1 *)(param_1 + 0x3ba));
    return;
  }
  return;
}



// FUNCTION 148221ea4 FUN_148221ea4 body=162 status=ok
// SIG undefined FUN_148221ea4(void)

void FUN_148221ea4(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x310) = local_1c != 0;
  FUN_148226ad8(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148221f48 FUN_148221f48 body=156 status=ok
// SIG undefined FUN_148221f48(void)

void FUN_148221f48(undefined8 param_1,longlong param_2)

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
  FUN_148221fe6(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148221fe6 FUN_148221fe6 body=79 status=ok
// SIG undefined FUN_148221fe6(void)

void FUN_148221fe6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_142873a50(param_1 + 0x330);
  if (lVar1 == param_2) {
    return;
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x330) = param_2;
  FUN_148225288(param_1);
  return;
}



// FUNCTION 148222036 FUN_148222036 body=520 status=ok
// SIG undefined FUN_148222036(void)

void FUN_148222036(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined8 *puVar5;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  undefined **local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  undefined4 local_74;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined1 local_54;
  undefined8 local_50;
  longlong *plStack_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e8 = &PTR_FUN_149ed05f0;
  local_e0 = &DAT_3f8000003f800000;
  puStack_d8 = &DAT_3f8000003f800000;
  local_d0 = 0;
  local_cc = 3;
  local_c8 = 0x4200000042000000;
  local_74 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_87 = 0;
  uStack_80 = 0;
  uStack_7f = 0;
  local_70 = 1;
  local_60 = DAT_14c84635c;
  local_68 = DAT_14c84635c;
  local_58 = 0;
  local_54 = 4;
  local_50 = 0;
  plStack_48 = (longlong *)0x0;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  pppuVar4 = &local_e8;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar4 = *(undefined ****)(param_2 + 0x38);
  }
  local_f0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x13a8) != 0) {
    puVar5 = &local_f0;
    if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)(param_2 + 0x38);
    }
    FUN_14821cbe0(*(longlong *)(param_1 + 0x13a8),pppuVar4,puVar5);
  }
  plVar3 = plStack_48;
  local_e8 = &PTR_FUN_149ed05f0;
  if (plStack_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148222244 FUN_148222244 body=158 status=ok
// SIG undefined FUN_148222244(void)

void FUN_148222244(undefined8 param_1,longlong param_2)

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
  FUN_14579168e(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482222e8 FUN_1482222e8 body=158 status=ok
// SIG undefined FUN_1482222e8(void)

void FUN_1482222e8(undefined8 param_1,longlong param_2)

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
  FUN_148222388(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148222388 FUN_148222388 body=60 status=ok
// SIG undefined FUN_148222388(void)

void FUN_148222388(longlong *param_1,char param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined7 uVar8;
  undefined4 *puVar7;
  undefined1 auStack_78 [32];
  undefined4 auStack_58 [4];
  undefined4 auStack_48 [4];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong uStack_28;
  
  bVar1 = *(byte *)(param_1 + 0x75);
  if (((bVar1 & 0x10) == 0) != (bool)param_2) {
    return;
  }
  *(byte *)(param_1 + 0x75) = bVar1 & 0xef | param_2 << 4;
  if ((bVar1 & 0x20) != 0) {
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x3b9) & 1) == 0) {
    return;
  }
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(byte *)((longlong)param_1 + 0x3b9) & 4) == 0) != (bool)param_2) goto LAB_14822248e;
  uVar2 = (**(code **)(*param_1 + 0x2b8))();
  bVar1 = *(byte *)((longlong)param_1 + 0x3b9);
  uVar6 = CONCAT71((int7)((ulonglong)uVar2 >> 8),bVar1) & 0xfffffffb;
  uVar8 = (undefined7)(uVar6 >> 8);
  *(byte *)((longlong)param_1 + 0x3b9) = (byte)uVar6 | param_2 * '\x04';
  if (param_2 == '\0') {
    lVar3 = (longlong)param_1 + 0x1294;
    lVar5 = FUN_14479d2ce(lVar3);
    if (*(char *)(lVar5 + 0x5c1) != '\0') {
      *(undefined1 *)(lVar5 + 0x5c1) = 0;
      if (*(longlong *)(lVar5 + 0x5d8) != 0) {
        FUN_148224190(*(longlong *)(lVar5 + 0x5d8),0);
      }
    }
    if ((*(byte *)(param_1 + 0x75) & 1) != 0) {
      uVar4 = FUN_14479d2ce(lVar3);
      FUN_1476d3a8e(uVar4,&uStack_38);
      uStack_2c = 0x3f000000;
      uVar4 = FUN_14479d2ce(lVar3);
      puVar7 = auStack_58;
      goto LAB_1482225d1;
    }
  }
  else {
    if ((((bVar1 & 1) == 0) || ((*(byte *)(param_1 + 0x75) & 0x20) != 0)) &&
       (lVar3 = FUN_14479d2ce((longlong)param_1 + 0x1294), *(char *)(lVar3 + 0x5c1) == '\0')) {
      *(undefined1 *)(lVar3 + 0x5c1) = 1;
      if (*(longlong *)(lVar3 + 0x5d8) != 0) {
        FUN_148224190(*(longlong *)(lVar3 + 0x5d8),CONCAT71(uVar8,1));
      }
    }
    if ((*(byte *)(param_1 + 0x75) & 1) != 0) {
      uVar4 = FUN_14479d2ce((longlong)param_1 + 0x1294);
      FUN_1476d3a8e(uVar4,&uStack_38);
      uStack_2c = 0x3f800000;
      uVar4 = FUN_14479d2ce((longlong)param_1 + 0x1294);
      puVar7 = auStack_48;
LAB_1482225d1:
      *puVar7 = uStack_38;
      puVar7[1] = uStack_34;
      puVar7[2] = uStack_30;
      puVar7[3] = uStack_2c;
      FUN_1476d36b4(uVar4);
    }
  }
  FUN_148226ad8(param_1);
  bVar1 = (**(code **)(*param_1 + 0x2b8))(param_1);
  if ((byte)uVar2 != bVar1) {
    (**(code **)(*param_1 + 0x518 + (ulonglong)(bVar1 ^ 1) * 8))(param_1);
  }
  FUN_148226b7a(param_1);
LAB_14822248e:
  if ((uStack_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482223c8 FUN_1482223c8 body=158 status=ok
// SIG undefined FUN_1482223c8(void)

void FUN_1482223c8(undefined8 param_1,longlong param_2)

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
  FUN_148222468(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148222468 FUN_148222468 body=426 status=ok
// SIG undefined FUN_148222468(void)

void FUN_148222468(longlong *param_1,char param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined7 uVar8;
  undefined4 *puVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  undefined4 local_48 [4];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(byte *)((longlong)param_1 + 0x3b9) & 4) == 0) != (bool)param_2) goto LAB_14822248e;
  uVar2 = (**(code **)(*param_1 + 0x2b8))();
  bVar1 = *(byte *)((longlong)param_1 + 0x3b9);
  uVar6 = CONCAT71((int7)((ulonglong)uVar2 >> 8),bVar1) & 0xfffffffb;
  uVar8 = (undefined7)(uVar6 >> 8);
  *(byte *)((longlong)param_1 + 0x3b9) = (byte)uVar6 | param_2 * '\x04';
  if (param_2 == '\0') {
    lVar3 = (longlong)param_1 + 0x1294;
    lVar5 = FUN_14479d2ce(lVar3);
    if (*(char *)(lVar5 + 0x5c1) != '\0') {
      *(undefined1 *)(lVar5 + 0x5c1) = 0;
      if (*(longlong *)(lVar5 + 0x5d8) != 0) {
        FUN_148224190(*(longlong *)(lVar5 + 0x5d8),0);
      }
    }
    if ((*(byte *)(param_1 + 0x75) & 1) != 0) {
      uVar4 = FUN_14479d2ce(lVar3);
      FUN_1476d3a8e(uVar4,&local_38);
      uStack_2c = 0x3f000000;
      uVar4 = FUN_14479d2ce(lVar3);
      puVar7 = local_58;
      goto LAB_1482225d1;
    }
  }
  else {
    if (((bVar1 & 1) == 0) || ((*(byte *)(param_1 + 0x75) & 0x20) != 0)) {
      lVar3 = FUN_14479d2ce((longlong)param_1 + 0x1294);
      if (*(char *)(lVar3 + 0x5c1) == '\0') {
        *(undefined1 *)(lVar3 + 0x5c1) = 1;
        if (*(longlong *)(lVar3 + 0x5d8) != 0) {
          FUN_148224190(*(longlong *)(lVar3 + 0x5d8),CONCAT71(uVar8,1));
        }
      }
    }
    if ((*(byte *)(param_1 + 0x75) & 1) != 0) {
      uVar4 = FUN_14479d2ce((longlong)param_1 + 0x1294);
      FUN_1476d3a8e(uVar4,&local_38);
      uStack_2c = 0x3f800000;
      uVar4 = FUN_14479d2ce((longlong)param_1 + 0x1294);
      puVar7 = local_48;
LAB_1482225d1:
      *puVar7 = local_38;
      puVar7[1] = uStack_34;
      puVar7[2] = uStack_30;
      puVar7[3] = uStack_2c;
      FUN_1476d36b4(uVar4);
    }
  }
  FUN_148226ad8(param_1);
  bVar1 = (**(code **)(*param_1 + 0x2b8))(param_1);
  if ((byte)uVar2 != bVar1) {
    (**(code **)(*param_1 + 0x518 + (ulonglong)(bVar1 ^ 1) * 8))(param_1);
  }
  FUN_148226b7a(param_1);
LAB_14822248e:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148222618 FUN_148222618 body=158 status=ok
// SIG undefined FUN_148222618(void)

void FUN_148222618(undefined8 param_1,longlong param_2)

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
  FUN_1482226b8(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482226b8 FUN_1482226b8 body=173 status=ok
// SIG undefined FUN_1482226b8(void)

void FUN_1482226b8(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  byte *pbVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [47];
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(byte *)(param_1 + 0x75) & 2) == 0) == (bool)param_2) {
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xfd | param_2 * '\x02';
    FUN_148226b7a(param_1);
    local_19 = *(byte *)(param_1 + 0x75) >> 1 & 1;
    pbVar2 = &local_19;
    uVar1 = FUN_14477b072(param_1,DAT_14cb44ed0);
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,pbVar2);
    uVar3 = CONCAT71((int7)((ulonglong)pbVar2 >> 8),(char)param_1[0x75]) & 0xffffffffffffff02;
    FUN_14775e432(param_1,&DAT_14cb46390,CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 1));
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14822276a FUN_14822276a body=158 status=ok
// SIG undefined FUN_14822276a(void)

void FUN_14822276a(undefined8 param_1,longlong param_2)

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
  FUN_14822280a(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14822280a FUN_14822280a body=64 status=ok
// SIG undefined FUN_14822280a(void)

void FUN_14822280a(longlong param_1,int param_2)

{
  if (((*(byte *)(param_1 + 0x3a8) & 4) == 0) == (bool)(char)param_2) {
    *(byte *)(param_1 + 0x3a8) = *(byte *)(param_1 + 0x3a8) & 0xfb | (byte)(param_2 * 4);
    if ((*(byte *)(param_1 + 0x3b9) & 1) != 0 && (char)param_2 == '\0') {
      FUN_1482232ec(param_1,0,CONCAT71((uint7)(uint3)((uint)(param_2 * 4) >> 8),1),1);
      return;
    }
  }
  return;
}



// FUNCTION 148222854 FUN_148222854 body=240 status=ok
// SIG undefined FUN_148222854(void)

void FUN_148222854(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
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
  FUN_148222946(param_1,iVar1 != 0,local_28 != 0);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148222946 FUN_148222946 body=147 status=ok
// SIG undefined FUN_148222946(void)

void FUN_148222946(longlong *param_1,byte param_2,ulonglong param_3)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  
  bVar1 = (**(code **)(*param_1 + 0x2b8))();
  if (((*(byte *)(param_1 + 0x75) & 4) != 0) &&
     ((*(byte *)((longlong)param_1 + 0x3b9) & 1) != param_2)) {
    if ((*(byte *)(param_1 + 0x75) & 0x20) == 0 || param_2 != 0) {
      if (param_2 == 0) goto LAB_148222988;
      uVar3 = 1;
      param_3 = param_3 & 0xffffffff;
    }
    else {
      uVar3 = 0;
      param_3 = 1;
    }
    FUN_1482232ec(param_1,uVar3,param_3,1);
  }
LAB_148222988:
  bVar2 = (**(code **)(*param_1 + 0x2b8))(param_1);
  if (bVar1 != bVar2) {
                    /* WARNING: Could not recover jumptable at 0x0001482229ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x518 + (ulonglong)(bVar2 ^ 1) * 8))(param_1);
    return;
  }
  return;
}



// FUNCTION 1482229de FUN_1482229de body=158 status=ok
// SIG undefined FUN_1482229de(void)

void FUN_1482229de(undefined8 param_1,longlong param_2)

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
  FUN_148222a7e(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148222a7e FUN_148222a7e body=147 status=ok
// SIG undefined FUN_148222a7e(void)

void FUN_148222a7e(longlong param_1,undefined4 param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined3 uVar4;
  uint uVar3;
  
  uVar4 = (undefined3)((uint)param_2 >> 8);
  *(byte *)(param_1 + 0x3a8) = *(byte *)(param_1 + 0x3a8) & 0xdf | (byte)param_2 << 5;
  bVar1 = *(byte *)(param_1 + 0x3b9);
  lVar2 = FUN_14479d2ce(param_1 + 0x1294);
  if ((bVar1 & ((byte)param_2 ^ 1)) == 0) {
    uVar3 = CONCAT31(uVar4,*(undefined1 *)(param_1 + 0x3b9)) & 0xffffff04;
    bVar1 = (byte)(uVar3 >> 2) & 0x3f;
  }
  else {
    uVar3 = CONCAT31(uVar4,*(undefined1 *)(param_1 + 0x3a8)) & 0xffffff10;
    bVar1 = (byte)(uVar3 >> 4) & 0xf;
  }
  if (*(byte *)(lVar2 + 0x5c1) != bVar1) {
    *(byte *)(lVar2 + 0x5c1) = bVar1;
    if (*(longlong *)(lVar2 + 0x5d8) != 0) {
      FUN_148224190(*(longlong *)(lVar2 + 0x5d8),CONCAT31((int3)(uVar3 >> 8),(char)uVar3 != '\0'));
    }
  }
  FUN_148226ad8(param_1);
  return;
}



// FUNCTION 148222b12 FUN_148222b12 body=156 status=ok
// SIG undefined FUN_148222b12(void)

void FUN_148222b12(undefined8 param_1,longlong param_2)

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
  FUN_148222bb0(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148222bb0 FUN_148222bb0 body=79 status=ok
// SIG undefined FUN_148222bb0(void)

void FUN_148222bb0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_142873a50(param_1 + 0x390);
  if (lVar1 == param_2) {
    return;
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x390) = param_2;
  FUN_148225288(param_1);
  return;
}



// FUNCTION 148222c00 FUN_148222c00 body=156 status=ok
// SIG undefined FUN_148222c00(void)

void FUN_148222c00(undefined8 param_1,longlong param_2)

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
  FUN_148222c9e(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148222c9e FUN_148222c9e body=79 status=ok
// SIG undefined FUN_148222c9e(void)

void FUN_148222c9e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_142873a50(param_1 + 0x378);
  if (lVar1 == param_2) {
    return;
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x378) = param_2;
  FUN_148225288(param_1);
  return;
}



// FUNCTION 148222cee FUN_148222cee body=240 status=ok
// SIG undefined FUN_148222cee(void)

void FUN_148222cee(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x2fc) = local_1c;
  *(undefined4 *)(param_1 + 0x300) = local_20;
  FUN_14822517c(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148222de0 FUN_148222de0 body=156 status=ok
// SIG undefined FUN_148222de0(void)

void FUN_148222de0(undefined8 param_1,longlong param_2)

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
  FUN_148222e7e(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148222e7e FUN_148222e7e body=79 status=ok
// SIG undefined FUN_148222e7e(void)

void FUN_148222e7e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_142873a50(param_1 + 0x318);
  if (lVar1 == param_2) {
    return;
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x318) = param_2;
  FUN_148225288(param_1);
  return;
}



// FUNCTION 148222ece FUN_148222ece body=152 status=ok
// SIG undefined FUN_148222ece(void)

void FUN_148222ece(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148222f68(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148222f68 FUN_148222f68 body=69 status=ok
// SIG undefined FUN_148222f68(void)

void FUN_148222f68(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  *(char *)(param_1 + 0x3bc) = (char)param_2;
  cVar2 = FUN_144729dda(param_1 + 0x1294);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x1294);
    FUN_1476d37d6(uVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148222fb2 FUN_148222fb2 body=158 status=ok
// SIG undefined FUN_148222fb2(void)

void FUN_148222fb2(undefined8 param_1,longlong param_2)

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
  FUN_148223052(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148223052 FUN_148223052 body=88 status=ok
// SIG undefined FUN_148223052(void)

void FUN_148223052(longlong *param_1,char param_2)

{
  longlong lVar1;
  
  *(byte *)((longlong)param_1 + 0x3a9) = *(byte *)((longlong)param_1 + 0x3a9) & 0xfb | param_2 << 2;
  lVar1 = (**(code **)(*param_1 + 0x2d0))();
  if (lVar1 != 0) {
    lVar1 = FUN_140e94dc2(lVar1);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001482230a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x4c0))(param_1,*(undefined1 *)(lVar1 + 0x91));
      return;
    }
  }
  return;
}



// FUNCTION 1482230aa FUN_1482230aa body=156 status=ok
// SIG undefined FUN_1482230aa(void)

void FUN_1482230aa(undefined8 param_1,longlong param_2)

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
  FUN_148223148(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148223148 FUN_148223148 body=79 status=ok
// SIG undefined FUN_148223148(void)

void FUN_148223148(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_142873a50(param_1 + 0x360);
  if (lVar1 == param_2) {
    return;
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x360) = param_2;
  FUN_148225288(param_1);
  return;
}



// FUNCTION 1482231a8 FUN_1482231a8 body=322 status=ok
// SIG undefined FUN_1482231a8(void)

void FUN_1482231a8(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [36];
  int local_34;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  iVar2 = local_2c;
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  iVar1 = local_30;
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1482232ec(param_1,iVar2 != 0,iVar1 != 0,local_34 != 0);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482232ec FUN_1482232ec body=325 status=ok
// SIG undefined FUN_1482232ec(void)

void FUN_1482232ec(longlong *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  cVar2 = (char)param_3;
  bVar1 = *(byte *)((longlong)param_1 + 0x3b9);
  bVar6 = (byte)param_2;
  *(byte *)((longlong)param_1 + 0x3b9) = bVar1 & 0xfe | bVar6;
  FUN_148226b7a();
  if ((*(byte *)((longlong)param_1 + 0x3b9) & 1) == 0) {
    lVar4 = FUN_14479d2ce((longlong)param_1 + 0x1294);
    uVar8 = CONCAT71((int7)((ulonglong)param_2 >> 8),*(undefined1 *)((longlong)param_1 + 0x3b9));
    uVar7 = uVar8 & 0xffffffffffffff04;
    bVar5 = (byte)((uVar8 & 0xffffff04) >> 2) & 0x3f;
    if (*(byte *)(lVar4 + 0x5c1) != bVar5) {
      *(byte *)(lVar4 + 0x5c1) = bVar5;
      if (*(longlong *)(lVar4 + 0x5d8) != 0) {
        FUN_148224190(*(longlong *)(lVar4 + 0x5d8),CONCAT71((int7)(uVar7 >> 8),(char)uVar7 != '\0'))
        ;
      }
    }
    (**(code **)(*param_1 + 0x510))(param_1,param_4);
  }
  else {
    uVar8 = (ulonglong)param_4;
    (**(code **)(*param_1 + 0x508))(param_1,uVar8);
    if ((*(byte *)(param_1 + 0x75) & 0x20) == 0) {
      cVar3 = FUN_147793b40(param_1);
      if (cVar3 != '\0') {
        lVar4 = FUN_14479d2ce((longlong)param_1 + 0x1294);
        uVar8 = CONCAT71((int7)(uVar8 >> 8),(char)param_1[0x75]);
        uVar7 = uVar8 & 0xffffffffffffff10;
        bVar5 = (byte)((uVar8 & 0xffffff10) >> 4) & 0xf;
        if (*(byte *)(lVar4 + 0x5c1) != bVar5) {
          *(byte *)(lVar4 + 0x5c1) = bVar5;
          if (*(longlong *)(lVar4 + 0x5d8) != 0) {
            FUN_148224190(*(longlong *)(lVar4 + 0x5d8),
                          CONCAT71((int7)(uVar7 >> 8),(char)uVar7 != '\0'));
          }
        }
      }
    }
    if (cVar2 != '\0') {
      param_3 = 0;
      FUN_1469a9da8(DAT_14c98e618,param_1 + 0x102,0);
    }
  }
  FUN_148226ad8(param_1);
  if (((bVar1 ^ bVar6) & 1) != 0) {
    FUN_14775e432(param_1,&DAT_14cab6e88,
                  CONCAT71((int7)((ulonglong)param_3 >> 8),
                           *(undefined1 *)((longlong)param_1 + 0x3b9)) & 0xffffffffffffff01);
    return;
  }
  return;
}



// FUNCTION 148223432 FUN_148223432 body=156 status=ok
// SIG undefined FUN_148223432(void)

void FUN_148223432(undefined8 param_1,longlong param_2)

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
  FUN_1482234d0(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482234d0 FUN_1482234d0 body=79 status=ok
// SIG undefined FUN_1482234d0(void)

void FUN_1482234d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_142873a50(param_1 + 0x348);
  if (lVar1 == param_2) {
    return;
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x348) = param_2;
  FUN_148225288(param_1);
  return;
}



// FUNCTION 148223524 FUN_148223524 body=188 status=ok
// SIG undefined FUN_148223524(void)

void FUN_148223524(longlong param_1,longlong param_2)

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
  if (local_1c == 0 || (*(byte *)(param_1 + 0x3a8) & 4) != 0) {
    *(byte *)(param_1 + 0x3a8) = *(byte *)(param_1 + 0x3a8) & 0xf7 | (local_1c != 0) << 3;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482235e6 FUN_1482235e6 body=181 status=ok
// SIG undefined FUN_1482235e6(void)

void FUN_1482235e6(longlong *param_1,longlong param_2)

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
  *(byte *)((longlong)param_1 + 0x3a9) =
       *(byte *)((longlong)param_1 + 0x3a9) & 0xfd | (local_1c != 0) * '\x02';
  (**(code **)(*param_1 + 0x4f0))(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14822369c FUN_14822369c body=185 status=ok
// SIG undefined FUN_14822369c(void)

void FUN_14822369c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
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
  local_28 = local_20;
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_148223756(param_1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148223756 FUN_148223756 body=235 status=ok
// SIG undefined FUN_148223756(void)

void FUN_148223756(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if (lVar3 == 0) {
    return;
  }
  lVar1 = FUN_1458e73bc();
  if (lVar1 == 0) {
    return;
  }
  if (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38)) {
    return;
  }
  if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
      lVar1 + 0x30) {
    if (*param_2 == 0) {
      return;
    }
    lVar3 = *(longlong *)(param_1 + 0x308);
    if ((((lVar3 == 0) || (lVar1 = FUN_1458e73bc(), lVar1 == 0)) ||
        (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30)) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x308);
    }
    lVar1 = *param_2;
    if (((lVar1 == 0) || (lVar2 = FUN_1458e73bc(), lVar2 == 0)) ||
       ((*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
         lVar2 + 0x30)))) {
      lVar1 = 0;
    }
    else {
      lVar1 = *param_2;
    }
    if (lVar3 == lVar1) {
      return;
    }
    lVar3 = *param_2;
    if (DAT_14c950c29 == '\x01') {
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar3 = *param_2;
      }
    }
    *(longlong *)(param_1 + 0x308) = lVar3;
    FUN_148225288(param_1);
    return;
  }
  return;
}



// FUNCTION 148223842 FUN_148223842 body=152 status=ok
// SIG undefined FUN_148223842(void)

void FUN_148223842(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1482238dc(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482238dc FUN_1482238dc body=69 status=ok
// SIG undefined FUN_1482238dc(void)

void FUN_1482238dc(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  *(char *)(param_1 + 0x3bb) = (char)param_2;
  cVar2 = FUN_144729dda(param_1 + 0x1294);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x1294);
    FUN_1476d39ba(uVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148223922 FUN_148223922 body=165 status=ok
// SIG undefined FUN_148223922(void)

void FUN_148223922(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
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
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1482239c8(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482239c8 FUN_1482239c8 body=118 status=ok
// SIG undefined FUN_1482239c8(void)

void FUN_1482239c8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  (**(code **)(*param_1 + 0x4d0))();
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  param_1[0x7c] = lVar1;
  param_1[0x7d] = param_2[1];
  (**(code **)(*param_1 + 0x4f0))(param_1);
  FUN_148221caa(param_1,param_2);
  return;
}



// FUNCTION 148223a3e FUN_148223a3e body=156 status=ok
// SIG undefined FUN_148223a3e(void)

void FUN_148223a3e(undefined8 param_1,longlong param_2)

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
  FUN_148223adc(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148223adc FUN_148223adc body=202 status=ok
// SIG undefined FUN_148223adc(void)

void FUN_148223adc(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_14821c4a8();
  if ((cVar1 != '\0') && (param_1[0x7b] != param_2)) {
    (**(code **)(*param_1 + 0x4d0))(param_1);
    param_1[0x79] = 0;
    param_1[0x7a] = 0;
    param_1[0x7c] = 0;
    param_1[0x7d] = 0;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    param_1[0x7b] = param_2;
    (**(code **)(*param_1 + 0x4c8))(param_1);
    (**(code **)(*param_1 + 0x4f0))(param_1);
    local_28 = param_2;
    uVar2 = FUN_14477b072(param_1,DAT_14cb45058);
    (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148223ba8 FUN_148223ba8 body=165 status=ok
// SIG undefined FUN_148223ba8(void)

void FUN_148223ba8(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
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
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148223c4e(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148223c4e FUN_148223c4e body=156 status=ok
// SIG undefined FUN_148223c4e(void)

void FUN_148223c4e(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_147a49e0a(param_1 + 0x79);
  if (cVar1 == '\0') {
    return;
  }
  (**(code **)(*param_1 + 0x4d0))(param_1);
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  lVar2 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  param_1[0x79] = lVar2;
  param_1[0x7a] = param_2[1];
  (**(code **)(*param_1 + 0x4c8))(param_1);
  (**(code **)(*param_1 + 0x4f0))(param_1);
  FUN_148221d34(param_1,param_2);
  return;
}



// FUNCTION 148223d02 FUN_148223d02 body=155 status=ok
// SIG undefined FUN_148223d02(void)

void FUN_148223d02(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x4c0))(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


