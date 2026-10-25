// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1488e4bd9 FUN_1488e4bd9 body=69 status=ok
// SIG undefined FUN_1488e4bd9(void)

void FUN_1488e4bd9(void *param_1)

{
  memset(param_1,0,0x110);
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined1 *)((longlong)param_1 + 0x118) = 0;
  return;
}



// FUNCTION 1488e4c1e FUN_1488e4c1e body=147 status=ok
// SIG undefined FUN_1488e4c1e(void)

void FUN_1488e4c1e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x120,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x120)) {
      uVar5 = uVar4 / 0x120 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x120,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1488e4cb2 FUN_1488e4cb2 body=48 status=ok
// SIG undefined FUN_1488e4cb2(void)

void FUN_1488e4cb2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x120,8);
  }
  return;
}



// FUNCTION 1488e4ce2 FUN_1488e4ce2 body=147 status=ok
// SIG undefined FUN_1488e4ce2(void)

void FUN_1488e4ce2(longlong param_1,int param_2)

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



// FUNCTION 1488e4d76 FUN_1488e4d76 body=132 status=ok
// SIG undefined FUN_1488e4d76(void)

void FUN_1488e4d76(longlong param_1,int param_2)

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



// FUNCTION 1488e4dfc FUN_1488e4dfc body=48 status=ok
// SIG undefined FUN_1488e4dfc(void)

void FUN_1488e4dfc(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1488e4e2c FUN_1488e4e2c body=307 status=ok
// SIG undefined FUN_1488e4e2c(void)

void FUN_1488e4e2c(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar12 = (longlong)(int)uVar1;
  if (lVar12 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar3 = *(longlong *)*param_2;
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar3);
    }
    iVar9 = 0;
    uVar10 = 0;
    bVar5 = *plVar2 == lVar3;
    do {
      iVar4 = (int)uVar10;
      uVar11 = uVar10;
      uVar7 = uVar10;
      uVar6 = iVar4 + 1U;
      if ((int)(iVar4 + 1U) < (int)uVar1) {
        uVar6 = uVar1;
      }
      do {
        uVar7 = uVar7 + 1;
        if (lVar12 <= (longlong)uVar7) {
          uVar11 = (ulonglong)uVar6;
          break;
        }
        lVar3 = *(longlong *)*param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        uVar11 = (ulonglong)((int)uVar11 + 1);
      } while (bVar5 == (plVar2[uVar7] == lVar3));
      if (bVar5 == false) {
        iVar8 = (int)uVar11 - iVar4;
        if (iVar9 != iVar4) {
          memmove(plVar2 + iVar9,plVar2 + uVar10,(longlong)iVar8 << 3);
        }
        iVar9 = iVar9 + iVar8;
      }
      uVar10 = uVar11;
      bVar5 = (bool)(bVar5 ^ 1);
    } while ((longlong)uVar7 < lVar12);
    *(int *)(param_1 + 1) = iVar9;
  }
  return;
}



// FUNCTION 1488e4f60 FUN_1488e4f60 body=119 status=ok
// SIG undefined FUN_1488e4f60(void)

void FUN_1488e4f60(longlong param_1,int param_2)

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
    FUN_1488e4fd8(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1488e4fd8 FUN_1488e4fd8 body=141 status=ok
// SIG undefined FUN_1488e4fd8(void)

void FUN_1488e4fd8(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 1488e5066 FUN_1488e5066 body=90 status=ok
// SIG undefined FUN_1488e5066(void)

void FUN_1488e5066(void *param_1)

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



// FUNCTION 1488e50c0 FUN_1488e50c0 body=110 status=ok
// SIG undefined FUN_1488e50c0(void)

void FUN_1488e50c0(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar5;
    FUN_1488e5130(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1488e5130 FUN_1488e5130 body=132 status=ok
// SIG undefined FUN_1488e5130(void)

void FUN_1488e5130(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,8);
  return;
}



// FUNCTION 1488e51b4 FUN_1488e51b4 body=48 status=ok
// SIG undefined FUN_1488e51b4(void)

void FUN_1488e51b4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1488e51fe FUN_1488e51fe body=101 status=ok
// SIG undefined FUN_1488e51fe(void)

void FUN_1488e51fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b414d60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488e5264 FUN_1488e5264 body=101 status=ok
// SIG undefined FUN_1488e5264(void)

void FUN_1488e5264(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b414d60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488e52ca FUN_1488e52ca body=134 status=ok
// SIG undefined FUN_1488e52ca(void)

void FUN_1488e52ca(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b414d60;
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
                    /* WARNING: Could not recover jumptable at 0x0001488e5341. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488e5350 FUN_1488e5350 body=44 status=ok
// SIG undefined FUN_1488e5350(void)

void FUN_1488e5350(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001488e5379. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1488e537c FUN_1488e537c body=113 status=ok
// SIG undefined FUN_1488e537c(void)

void FUN_1488e537c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 1488e53ee FUN_1488e53ee body=147 status=ok
// SIG undefined FUN_1488e53ee(void)

void FUN_1488e53ee(longlong param_1,int param_2)

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



// FUNCTION 1488e5482 FUN_1488e5482 body=105 status=ok
// SIG undefined FUN_1488e5482(void)

void FUN_1488e5482(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b415230;
  if (param_1[0x67] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[99];
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
  param_1[9] = 0;
  FUN_14076ba36(param_1 + 10);
  return;
}



// FUNCTION 1488e54ec FUN_1488e54ec body=73 status=ok
// SIG undefined FUN_1488e54ec(void)

undefined8 * FUN_1488e54ec(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b415280;
  puVar1 = (undefined8 *)param_1[0x69];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1488e5482(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488e5552 FUN_1488e5552 body=32 status=ok
// SIG undefined FUN_1488e5552(void)

undefined8 FUN_1488e5552(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FPostLightProjectileTickFunction");
  return param_2;
}



// FUNCTION 1488e5572 FUN_1488e5572 body=32 status=ok
// SIG undefined FUN_1488e5572(void)

undefined8 FUN_1488e5572(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FLightProjectileBatchTickFunction");
  return param_2;
}



// FUNCTION 1488e5596 FUN_1488e5596 body=580 status=ok
// SIG undefined FUN_1488e5596(void)

void FUN_1488e5596(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar3 = *(int *)(param_1 + 0x3b0);
  if ((longlong)iVar3 != 0) {
    lVar7 = *(longlong *)(param_1 + 0x3a8);
    lVar8 = 0;
    bVar6 = DAT_14c950c29;
    do {
      plVar4 = *(longlong **)(lVar7 + lVar8);
      if ((plVar4 != (longlong *)0x0 & bVar6) == 1) {
        FUN_1456cec3c(plVar4);
LAB_1488e55dc:
        (**(code **)(*plVar4 + 0x2e0))(plVar4);
        bVar6 = DAT_14c950c29;
      }
      else if (plVar4 != (longlong *)0x0) goto LAB_1488e55dc;
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar3 * 8 != lVar8);
  }
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  if (*(int *)(param_1 + 0x3b4) != 0) {
    FUN_145bdc622(param_1 + 0x3a8);
  }
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  if (*(int *)(param_1 + 0x3dc) != 0) {
    FUN_145bdc622(param_1 + 0x3d0);
  }
  *(undefined4 *)(param_1 + 1000) = 0;
  if (*(int *)(param_1 + 0x3ec) != 0) {
    FUN_145bdc622(param_1 + 0x3e0);
  }
  if (0 < *(int *)(param_1 + 0x508)) {
    lVar7 = 0;
    lVar8 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x500);
      iVar3 = *(int *)(param_1 + 0x528);
      *(uint *)(param_1 + 0x528) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x52c) < iVar3 + 1U) {
        FUN_14574dc1a(param_1 + 0x520,iVar3);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x520) + (longlong)iVar3 * 8) =
           *(undefined8 *)(lVar5 + lVar7);
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x18;
    } while (lVar8 < *(int *)(param_1 + 0x508));
  }
  if (0 < *(int *)(param_1 + 0x518)) {
    lVar7 = 0;
    lVar8 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x510);
      iVar3 = *(int *)(param_1 + 0x528);
      *(uint *)(param_1 + 0x528) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x52c) < iVar3 + 1U) {
        FUN_14574dc1a(param_1 + 0x520,iVar3);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x520) + (longlong)iVar3 * 8) =
           *(undefined8 *)(lVar5 + lVar7);
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x18;
    } while (lVar8 < *(int *)(param_1 + 0x518));
  }
  *(undefined4 *)(param_1 + 0x508) = 0;
  if (*(int *)(param_1 + 0x50c) != 0) {
    FUN_1488ee8e6(param_1 + 0x500);
  }
  if (*(longlong *)(param_1 + 0x540) != 0) {
    FUN_1487e28d2();
    *(undefined8 *)(param_1 + 0x540) = 0;
    plVar4 = *(longlong **)(param_1 + 0x548);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x548) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001488e5783. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1488e57da FUN_1488e57da body=150 status=ok
// SIG undefined FUN_1488e57da(void)

void FUN_1488e57da(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140cf4cae();
  if (param_2 != 0) {
    lVar1 = FUN_140f1e398();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_28 = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      local_20 = &local_28;
      FUN_1488ee916(param_1 + 0x3e0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e5872 FUN_1488e5872 body=212 status=ok
// SIG undefined FUN_1488e5872(void)

void FUN_1488e5872(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x178) == '\x03') {
    iVar1 = *(int *)(param_1 + 0x558);
    if ((longlong)iVar1 != 0) {
      lVar2 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x550) + lVar2) == param_2) {
          return;
        }
        lVar2 = lVar2 + 8;
      } while ((longlong)iVar1 * 8 - lVar2 != 0);
    }
    iVar3 = iVar1;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
      iVar3 = *(int *)(param_1 + 0x558);
    }
    *(uint *)(param_1 + 0x558) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x55c) < iVar3 + 1U) {
      FUN_14575354e((longlong *)(param_1 + 0x550),iVar3);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x550) + (longlong)iVar3 * 8) = param_2;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    if (iVar1 == 0) {
      FUN_1488e5946(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1488e5946 FUN_1488e5946 body=197 status=ok
// SIG undefined FUN_1488e5946(void)

void FUN_1488e5946(code *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  code *local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[0x561] != (code)0x0) goto LAB_1488e59b5;
  lVar2 = FUN_1447210f0();
  if ((lVar2 == 0) || (plVar1 = *(longlong **)(lVar2 + 0x938), plVar1 == (longlong *)0x0)) {
    local_28 = FUN_1488e5ad0;
    local_20 = (code *)((ulonglong)local_20 & 0xffffffff00000000);
    FUN_1488e5b70(local_30,param_1);
  }
  else {
    if ((param_1 == (code *)0x0) || (DAT_14c950c29 == '\0')) {
      if (param_1 != (code *)0x0) goto LAB_1488e5995;
      local_20 = (code *)0x0;
    }
    else {
      FUN_1456cec3c(param_1);
LAB_1488e5995:
      local_20 = param_1 + 0x3a0;
    }
    local_28 = param_1;
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  param_1[0x561] = (code)0x1;
LAB_1488e59b5:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e5a0c FUN_1488e5a0c body=195 status=ok
// SIG undefined FUN_1488e5a0c(void)

void FUN_1488e5a0c(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if ((param_2 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x558);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x550);
    uVar5 = 0;
    lVar4 = 0;
    bVar3 = DAT_14c950c29;
    do {
      if ((param_2 != 0) && ((bVar3 & 1) != 0)) {
        FUN_1456cec3c(param_2);
        bVar3 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar5) == param_2) {
        if ((int)(~uVar5 >> 3) == 0) {
          return;
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0x550) + (lVar4 >> 0x20) * 8) = 0;
        *(undefined1 *)(param_1 + 0x560) = 1;
        return;
      }
      lVar4 = lVar4 + 0x100000000;
      uVar5 = uVar5 + 8;
    } while ((longlong)iVar1 * 8 != uVar5);
  }
  return;
}



// FUNCTION 1488e5ad0 FUN_1488e5ad0 body=158 status=ok
// SIG undefined FUN_1488e5ad0(void)

void FUN_1488e5ad0(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == '\0') goto LAB_1488e5b0a;
  lVar1 = (**(code **)(*param_2 + 8))(param_2);
  lVar2 = FUN_1447210f0(param_1);
  if (lVar1 != lVar2) goto LAB_1488e5b0a;
  if ((param_1 == 0) || (DAT_14c950c29 == '\0')) {
    if (param_1 != 0) goto LAB_1488e5b41;
    local_28 = 0;
  }
  else {
    FUN_1456cec3c(param_1);
LAB_1488e5b41:
    local_28 = param_1 + 0x3a0;
  }
  local_30 = param_1;
  (**(code **)(*param_2 + 0x10))(param_2);
LAB_1488e5b0a:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e5b70 FUN_1488e5b70 body=241 status=ok
// SIG undefined FUN_1488e5b70(void)

undefined8 FUN_1488e5b70(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  *local_40 = &PTR_LAB_14b416560;
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
  *local_40 = &PTR_FUN_14b4164f0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1488eeae6(param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e5c62 FUN_1488e5c62 body=175 status=ok
// SIG undefined FUN_1488e5c62(void)

undefined8 FUN_1488e5c62(undefined8 param_1)

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
  local_b8 = FUN_144a74fb4();
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



// FUNCTION 1488e5d12 FUN_1488e5d12 body=52 status=ok
// SIG undefined FUN_1488e5d12(void)

longlong FUN_1488e5d12(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x3b0) != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3a8) + lVar2);
      if ((lVar1 != 0) && (*(int *)(lVar1 + 0x58) == param_2)) {
        return lVar1;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_1 + 0x3b0) * 8 != lVar2);
  }
  return 0;
}



// FUNCTION 1488e5d46 FUN_1488e5d46 body=200 status=ok
// SIG undefined FUN_1488e5d46(void)

undefined4
FUN_1488e5d46(undefined8 param_1,void *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined8 param_10)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_60;
  undefined4 local_58;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  local_40 = param_10;
  local_48 = param_9;
  local_58 = param_7;
  uStack_50 = param_8;
  local_60 = param_6;
  local_68 = param_5;
  uVar2 = FUN_143dcfbe8(param_5,&local_38);
  pvVar1 = local_38;
  if ((((char)uVar2 != '\0') && (0 < (int)uStack_30)) &&
     (*(float *)((longlong)local_38 + 4) <= *(float *)((longlong)param_2 + 4) &&
      *(float *)((longlong)param_2 + 4) != *(float *)((longlong)local_38 + 4))) {
    memcpy(param_2,local_38,0x100);
  }
  if (pvVar1 != (void *)0x0) {
    FUN_1400020a8(pvVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e5e10 FUN_1488e5e10 body=82 status=ok
// SIG undefined FUN_1488e5e10(void)

undefined8 FUN_1488e5e10(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((longlong)*(int *)(param_1 + 0x558) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x550);
    lVar4 = (longlong)*(int *)(param_1 + 0x558) << 3;
    do {
      lVar1 = *plVar5;
      if ((lVar1 != 0) && (*(int *)(lVar1 + 0x58) == param_2)) {
        if (plVar5 == (longlong *)0x0) {
          return 0;
        }
        uVar2 = *(undefined8 *)(lVar1 + 0x408);
        param_3[2] = uVar2;
        uVar3 = *(undefined8 *)(lVar1 + 0x400);
        *param_3 = *(undefined8 *)(lVar1 + 0x3f8);
        param_3[1] = uVar3;
        return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
      }
      plVar5 = plVar5 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  return 0;
}



// FUNCTION 1488e5e62 FUN_1488e5e62 body=156 status=ok
// SIG undefined FUN_1488e5e62(void)

void FUN_1488e5e62(longlong param_1,undefined4 param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  uVar3 = (**(code **)(*param_3 + 0x10))(param_3);
  cVar2 = FUN_140746d72(uVar3);
  if (cVar2 == '\0') {
    lVar4 = (**(code **)(*param_3 + 0xa8))(param_3);
    if ((longlong)*(int *)(param_1 + 0x1c0) != 0) {
      plVar5 = *(longlong **)(param_1 + 0x1b8);
      lVar6 = (longlong)*(int *)(param_1 + 0x1c0) << 3;
      do {
        plVar1 = (longlong *)*plVar5;
        if ((plVar1 != (longlong *)0x0) && ((int)plVar1[0xb] == *(int *)(lVar4 + 0xa8))) {
          if (plVar5 == (longlong *)0x0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x0001488e5efb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar1 + 0x3f8))(plVar1,param_2,param_3);
          return;
        }
        plVar5 = plVar5 + 1;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
    }
  }
  return;
}



// FUNCTION 1488e5efe FUN_1488e5efe body=310 status=ok
// SIG undefined FUN_1488e5efe(void)

void FUN_1488e5efe(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  byte bVar15;
  longlong lVar16;
  
  iVar2 = *(int *)(param_1 + 0x1b8);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x1b0);
    lVar16 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar16);
      if (lVar4 != 0) {
        puVar14 = (undefined8 *)FUN_1488e6034(param_2);
        bVar1 = *(byte *)(puVar14 + 0x10);
        bVar15 = bVar1;
        if ((bVar1 & 1) != 0) {
          bVar15 = bVar1 & 0xfe;
          *(byte *)(puVar14 + 0x10) = bVar15;
          if ((bVar1 & 2) == 0) {
            FUN_1400020a8(*puVar14);
            bVar15 = *(byte *)(puVar14 + 0x10);
          }
        }
        *(byte *)(puVar14 + 0x10) = bVar15 | 3;
        uVar13 = *(undefined8 *)(lVar4 + 0x460);
        uVar5 = *(undefined4 *)(lVar4 + 0x468);
        uVar6 = *(undefined4 *)(lVar4 + 0x46c);
        uVar7 = *(undefined4 *)(lVar4 + 0x470);
        uVar8 = *(undefined4 *)(lVar4 + 0x474);
        uVar9 = *(undefined4 *)(lVar4 + 0x478);
        uVar10 = *(undefined4 *)(lVar4 + 0x47c);
        uVar11 = *(undefined4 *)(lVar4 + 0x480);
        uVar12 = *(undefined4 *)(lVar4 + 0x484);
        *puVar14 = *(undefined8 *)(lVar4 + 0x458);
        puVar14[1] = uVar13;
        *(undefined4 *)(puVar14 + 2) = uVar5;
        *(undefined4 *)((longlong)puVar14 + 0x14) = uVar6;
        *(undefined4 *)(puVar14 + 3) = uVar7;
        *(undefined4 *)((longlong)puVar14 + 0x1c) = uVar8;
        *(undefined4 *)(puVar14 + 4) = uVar9;
        *(undefined4 *)((longlong)puVar14 + 0x24) = uVar10;
        *(undefined4 *)(puVar14 + 5) = uVar11;
        *(undefined4 *)((longlong)puVar14 + 0x2c) = uVar12;
        puVar14[6] = *(undefined8 *)(lVar4 + 0x488);
        *(undefined4 *)(puVar14 + 7) = 0;
        *(undefined1 *)((longlong)puVar14 + 0x3c) = 0;
        puVar14[10] = DAT_14c8464f0;
        uVar13 = DAT_14c8464e8;
        puVar14[8] = DAT_14c8464e0;
        puVar14[9] = uVar13;
        uVar13 = DAT_14c8464e8;
        puVar14[0xb] = DAT_14c8464e0;
        puVar14[0xc] = uVar13;
        puVar14[0xd] = DAT_14c8464f0;
        *(undefined4 *)(puVar14 + 7) = *(undefined4 *)(lVar4 + 0x58);
        *(undefined1 *)((longlong)puVar14 + 0x3c) = *(undefined1 *)(lVar4 + 0x118);
        uVar13 = *(undefined8 *)(lVar4 + 0x448);
        puVar14[8] = *(undefined8 *)(lVar4 + 0x440);
        puVar14[9] = uVar13;
        puVar14[10] = *(undefined8 *)(lVar4 + 0x450);
        uVar5 = *(undefined4 *)(lVar4 + 0x3fc);
        uVar6 = *(undefined4 *)(lVar4 + 0x400);
        uVar7 = *(undefined4 *)(lVar4 + 0x404);
        *(undefined4 *)(puVar14 + 0xb) = *(undefined4 *)(lVar4 + 0x3f8);
        *(undefined4 *)((longlong)puVar14 + 0x5c) = uVar5;
        *(undefined4 *)(puVar14 + 0xc) = uVar6;
        *(undefined4 *)((longlong)puVar14 + 100) = uVar7;
        puVar14[0xd] = *(undefined8 *)(lVar4 + 0x408);
      }
      lVar16 = lVar16 + 8;
    } while ((longlong)iVar2 * 8 != lVar16);
  }
  return;
}



// FUNCTION 1488e6034 FUN_1488e6034 body=66 status=ok
// SIG undefined FUN_1488e6034(void)

longlong FUN_1488e6034(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1488ef070(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x88 + *param_1;
  FUN_1488ef05e(lVar2);
  return lVar2;
}



// FUNCTION 1488e6076 FUN_1488e6076 body=168 status=ok
// SIG undefined FUN_1488e6076(void)

void FUN_1488e6076(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0) {
    local_48 = 0;
    FUN_14485c47a();
    uVar2 = *param_3;
    uVar3 = param_3[1];
    iVar1 = *(int *)(param_1 + 0x538);
    lVar5 = (longlong)iVar1;
    *(uint *)(param_1 + 0x538) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x53c) < iVar1 + 1U) {
      FUN_1488ef108((longlong *)(param_1 + 0x530),iVar1);
    }
    lVar4 = *(longlong *)(param_1 + 0x530);
    *(undefined8 *)(lVar4 + lVar5 * 0x18) = local_48;
    *(undefined8 *)(lVar4 + 8 + lVar5 * 0x18) = uVar2;
    *(undefined8 *)(lVar4 + 0x10 + lVar5 * 0x18) = uVar3;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e6120 FUN_1488e6120 body=444 status=ok
// SIG undefined FUN_1488e6120(void)

void FUN_1488e6120(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [36];
  int local_74;
  ulonglong local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(uint *)(param_1 + 0x538);
  uVar10 = (ulonglong)(int)uVar1;
  if (uVar10 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x530);
    local_60 = *puVar2;
    local_58 = puVar2[1];
    local_50 = puVar2[2];
    cVar6 = FUN_144729dda();
    local_68 = param_1;
    if ((cVar6 == '\0') || (cVar6 = FUN_14069eaf4(&local_60,param_2), cVar6 != '\0')) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    uVar8 = 0;
    iVar9 = 0;
LAB_1488e61ae:
    local_74 = iVar9;
    uVar7 = uVar8 & 0xffffffff;
    iVar4 = (int)uVar8;
    uVar8 = (ulonglong)(iVar4 + 1U);
    if ((int)(iVar4 + 1U) < (int)uVar1) goto code_r0x0001488e61be;
    iVar9 = local_74;
    if (!bVar5) {
      bVar3 = false;
      goto LAB_1488e6238;
    }
    goto LAB_1488e6295;
  }
LAB_1488e62a0:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001488e61be:
  uVar8 = (longlong)iVar4 + 1;
  bVar3 = true;
  local_70 = uVar7;
  do {
    while( true ) {
      local_60 = puVar2[uVar8 * 3];
      local_58 = puVar2[uVar8 * 3 + 1];
      local_50 = puVar2[uVar8 * 3 + 2];
      cVar6 = FUN_144729dda(&local_60);
      if ((cVar6 != '\0') && (cVar6 = FUN_14069eaf4(&local_60,param_2), cVar6 == '\0')) break;
      uVar7 = local_70;
      if (!bVar5) goto LAB_1488e6238;
      uVar8 = uVar8 + 1;
      bVar3 = (longlong)uVar8 < (longlong)uVar10;
      iVar9 = local_74;
      if (uVar8 == uVar10) goto LAB_1488e6295;
    }
    if (bVar5) {
      bVar5 = false;
      iVar9 = local_74;
      if (bVar3) goto LAB_1488e61ae;
      goto LAB_1488e6295;
    }
    uVar8 = uVar8 + 1;
    bVar3 = (longlong)uVar8 < (longlong)uVar10;
  } while (uVar8 != uVar10);
  uVar8 = (ulonglong)uVar1;
  uVar7 = local_70;
LAB_1488e6238:
  iVar9 = (int)uVar8 - (int)uVar7;
  if (local_74 != (int)uVar7) {
    memmove(puVar2 + (longlong)local_74 * 3,puVar2 + (longlong)iVar4 * 3,(longlong)iVar9 * 0x18);
  }
  iVar9 = local_74 + iVar9;
  bVar5 = true;
  if (!bVar3) goto LAB_1488e6295;
  goto LAB_1488e61ae;
LAB_1488e6295:
  *(int *)(local_68 + 0x538) = iVar9;
  goto LAB_1488e62a0;
}



// FUNCTION 1488e62de FUN_1488e62de body=458 status=ok
// SIG undefined FUN_1488e62de(void)

void FUN_1488e62de(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_158 [32];
  longlong local_138 [2];
  longlong local_128;
  longlong *local_118;
  longlong local_108 [4];
  int local_e8;
  longlong local_d8 [2];
  longlong local_c8;
  longlong *local_b8;
  longlong local_a8 [4];
  int local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  longlong local_68;
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((((*param_1 != 0) && (lVar4 = FUN_1447210f0(), lVar4 != 0)) &&
      (iVar3 = FUN_14490d72a(lVar4), iVar3 != 3)) && (lVar4 = FUN_140877338(lVar4), lVar4 != 0)) {
    FUN_14189b054(lVar4,local_78,param_1);
    FUN_140ed5bce(local_78,local_d8);
    FUN_14189ab14(local_78,local_138);
    if (local_88 != local_e8) {
      do {
        uVar1 = local_80;
        if (local_88 < 0) {
          if ((local_e8 < 0) || (*(int *)(local_138[0] + 0x3b0) <= local_e8)) break;
        }
        else if (local_e8 < 0) {
          if (*(int *)(local_d8[0] + 0x3b0) <= local_88) break;
        }
        else if (local_e8 < *(int *)(local_138[0] + 0x3b0) ==
                 local_88 < *(int *)(local_d8[0] + 0x3b0)) break;
        cVar2 = FUN_14113f0c0(param_2);
        if (cVar2 != '\0') {
          FUN_14876fa34(param_2,uVar1);
        }
        local_88 = local_88 + 1;
        FUN_140ed5cca(local_d8);
      } while (local_88 != local_e8);
    }
    if (local_128 != 0) {
      if (local_118 == (longlong *)0x0) {
        local_118 = local_108;
      }
      (**(code **)(*local_118 + 0x10))();
    }
    if (local_c8 != 0) {
      if (local_b8 == (longlong *)0x0) {
        local_b8 = local_a8;
      }
      (**(code **)(*local_b8 + 0x10))();
    }
    if (local_68 != 0) {
      if (local_58 == (longlong *)0x0) {
        local_58 = local_48;
      }
      (**(code **)(*local_58 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488e64aa FUN_1488e64aa body=449 status=ok
// SIG undefined FUN_1488e64aa(void)

void FUN_1488e64aa(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_158 [32];
  longlong local_138 [2];
  longlong local_128;
  longlong *local_118;
  longlong local_108 [4];
  int local_e8;
  longlong local_d8 [2];
  longlong local_c8;
  longlong *local_b8;
  longlong local_a8 [4];
  int local_88;
  longlong local_80;
  undefined1 local_78 [16];
  longlong local_68;
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((((*param_1 != 0) && (lVar2 = FUN_1447210f0(), lVar2 != 0)) &&
      (iVar1 = FUN_14490d72a(lVar2), iVar1 != 3)) && (lVar2 = FUN_140877338(lVar2), lVar2 != 0)) {
    FUN_14189b054(lVar2,local_78,param_1);
    FUN_140ed5bce(local_78,local_d8);
    FUN_14189ab14(local_78,local_138);
    if (local_88 != local_e8) {
      do {
        if (local_88 < 0) {
          if ((local_e8 < 0) || (*(int *)(local_138[0] + 0x3b0) <= local_e8)) break;
        }
        else if (local_e8 < 0) {
          if (*(int *)(local_d8[0] + 0x3b0) <= local_88) break;
        }
        else if (local_e8 < *(int *)(local_138[0] + 0x3b0) ==
                 local_88 < *(int *)(local_d8[0] + 0x3b0)) break;
        FUN_143dc13e8(local_80 + 0x30,param_2);
        local_88 = local_88 + 1;
        FUN_140ed5cca(local_d8);
      } while (local_88 != local_e8);
    }
    if (local_128 != 0) {
      if (local_118 == (longlong *)0x0) {
        local_118 = local_108;
      }
      (**(code **)(*local_118 + 0x10))();
    }
    if (local_c8 != 0) {
      if (local_b8 == (longlong *)0x0) {
        local_b8 = local_a8;
      }
      (**(code **)(*local_b8 + 0x10))();
    }
    if (local_68 != 0) {
      if (local_58 == (longlong *)0x0) {
        local_58 = local_48;
      }
      (**(code **)(*local_58 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488e666c FUN_1488e666c body=483 status=ok
// SIG undefined FUN_1488e666c(void)

void FUN_1488e666c(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6,undefined4 *param_7,undefined4 param_8,
                  undefined4 param_9)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 *local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = *param_7;
  uStack_84 = param_7[1];
  uStack_80 = param_7[2];
  uStack_7c = param_7[3];
  local_78 = param_7[4];
  uStack_74 = param_7[5];
  uStack_70 = param_7[6];
  uStack_6c = param_7[7];
  local_68 = param_7[8];
  uStack_64 = param_7[9];
  uStack_60 = param_7[10];
  uStack_5c = param_7[0xb];
  local_b0 = &local_88;
  local_a0 = param_9;
  local_a8 = param_8;
  local_b8 = param_6;
  FUN_143dd13ab(&local_58,param_1,param_4,param_5);
  if (param_5 != 0) {
    lVar5 = FUN_1447210f0(param_5);
    if (lVar5 != 0 && local_58 != 0) {
      FUN_14893eee6(local_58);
      local_90 = FUN_14119d0a4(lVar5);
      puVar6 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      uVar3 = *param_2;
      uVar4 = *(undefined8 *)(param_2 + 2);
      lVar5 = *(longlong *)(param_2 + 4);
      if ((lVar5 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar5);
      }
      *puVar6 = &PTR_FUN_14b4164b0;
      *(undefined4 *)(puVar6 + 1) = uVar3;
      *(undefined8 *)((longlong)puVar6 + 0xc) = uVar4;
      *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
      FUN_14485c47a((longlong)puVar6 + 0x14,lVar5);
      puVar6[4] = local_58;
      puVar6[5] = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
      }
      puVar6[6] = param_3;
      FUN_140b1330e(local_90,*(undefined8 *)(param_2 + 4),param_2[1],puVar6);
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
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    FUN_140bba396(param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e6850 FUN_1488e6850 body=195 status=ok
// SIG undefined FUN_1488e6850(void)

void FUN_1488e6850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 *local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [8];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = *param_4;
  uStack_54 = param_4[1];
  uStack_50 = param_4[2];
  uStack_4c = param_4[3];
  local_48 = param_4[4];
  uStack_44 = param_4[5];
  uStack_40 = param_4[6];
  uStack_3c = param_4[7];
  local_38 = param_4[8];
  uStack_34 = param_4[9];
  uStack_30 = param_4[10];
  uStack_2c = param_4[0xb];
  local_70 = &local_58;
  local_60 = param_6;
  local_68 = param_5;
  local_78 = param_3;
  FUN_143dd13ab(local_28,local_58,param_1,param_2);
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
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_140bba396(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e6914 FUN_1488e6914 body=86 status=ok
// SIG undefined FUN_1488e6914(void)

void FUN_1488e6914(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = FUN_1447210f0();
    if (lVar2 != 0) {
      iVar1 = FUN_14490d72a(lVar2);
      if (iVar1 != 3) {
        lVar2 = FUN_140877338(lVar2);
        if (lVar2 != 0) {
          FUN_1488e6076(lVar2,param_1,param_2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1488e696a FUN_1488e696a body=77 status=ok
// SIG undefined FUN_1488e696a(void)

void FUN_1488e696a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = FUN_1447210f0();
    if (lVar2 != 0) {
      iVar1 = FUN_14490d72a(lVar2);
      if (iVar1 != 3) {
        lVar2 = FUN_140877338(lVar2);
        if (lVar2 != 0) {
          FUN_1488e6120(lVar2,param_1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1488e69e0 FUN_1488e69e0 body=44 status=ok
// SIG undefined FUN_1488e69e0(void)

void FUN_1488e69e0(undefined8 *param_1)

{
  (**(code **)*param_1)();
  memset(param_1,0,0xc0);
  FUN_145836b20(param_1);
  return;
}



// FUNCTION 1488e6a44 FUN_1488e6a44 body=40 status=ok
// SIG undefined FUN_1488e6a44(void)

undefined8 FUN_1488e6a44(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1458469b2(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 1488e6a7a FUN_1488e6a7a body=138 status=ok
// SIG undefined FUN_1488e6a7a(void)

longlong FUN_1488e6a7a(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_48 = *param_1;
    FUN_1446dcdd4(local_40);
    if (DAT_14cb854f8 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144815d88(DAT_14cb854f8,local_40);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e6b06 FUN_1488e6b06 body=215 status=ok
// SIG undefined FUN_1488e6b06(void)

undefined8 FUN_1488e6b06(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14a3a3510;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14b416630;
  local_30[3] = FUN_143dd1d64;
  FUN_14490d954(param_1,param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e6bde FUN_1488e6bde body=89 status=ok
// SIG undefined FUN_1488e6bde(void)

void FUN_1488e6bde(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (((param_1 != 0) && ((*(byte *)(param_1 + 0x65) & 2) == 0)) &&
     ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) {
    uVar1 = FUN_14595ccb2();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488e6c1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
    FUN_140aeefbc(param_1,0,1);
    return;
  }
  return;
}



// FUNCTION 1488e6c38 FUN_1488e6c38 body=456 status=ok
// SIG undefined FUN_1488e6c38(void)

void FUN_1488e6c38(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 auStack_a8 [47];
  char local_79;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar6 = *(int *)(param_1 + 0x28);
  local_79 = param_3;
  local_78 = param_1;
  local_60 = param_2;
  if (0 < iVar6) {
    local_70 = (longlong *)(param_1 + 0x20);
    lVar7 = 0;
    do {
      if (0 < *(int *)(*local_70 + 0x10 + lVar7 * 0x18)) {
        lVar1 = *local_70 + lVar7 * 0x18;
        plVar9 = (longlong *)(lVar1 + 8);
        uVar10 = 0;
        local_68 = lVar7;
        do {
          lVar7 = *plVar9;
          local_50 = 0;
          FUN_14485c47a(&local_50,local_60);
          lVar5 = (longlong)*(int *)(lVar7 + 0x20 + uVar10 * 0x28);
          if (lVar5 != 0) {
            local_58 = (longlong *)(lVar7 + uVar10 * 0x28 + 0x18);
            lVar7 = *local_58;
            lVar5 = lVar5 << 3;
            iVar6 = 1;
            lVar8 = 0;
            do {
              cVar3 = FUN_140383372(lVar7,&local_50);
              plVar2 = local_58;
              if (cVar3 != '\0') {
                if (iVar6 != 0) {
                  iVar4 = (int)local_58[1];
                  if (iVar4 - iVar6 != 0) {
                    memmove((void *)(*local_58 + (lVar8 >> 0x20) * 8),
                            (void *)(*local_58 + (lVar8 >> 0x20) * 8 + 8),
                            (longlong)(iVar4 - iVar6) << 3);
                    iVar4 = (int)plVar2[1];
                  }
                  *(int *)(plVar2 + 1) = iVar4 + -1;
                  FUN_14819c8f6(plVar2);
                  if (local_79 != '\0') {
                    FUN_1488e6bde(local_60);
                  }
                  if ((int)plVar2[1] == 0) {
                    FUN_1488ef798(plVar9,uVar10 & 0xffffffff);
                    FUN_1488ef7f2(plVar9);
                  }
                  plVar9 = local_70;
                  if (*(int *)(lVar1 + 0x10) == 0) {
                    FUN_1488ef42c(local_70,local_68);
                    FUN_1488ef496(plVar9);
                  }
                  goto LAB_1488e6d46;
                }
                break;
              }
              lVar7 = lVar7 + 8;
              lVar8 = lVar8 + 0x100000000;
              iVar6 = iVar6 + 1;
              lVar5 = lVar5 + -8;
            } while (lVar5 != 0);
          }
          uVar10 = uVar10 + 1;
        } while ((longlong)uVar10 < (longlong)*(int *)(lVar1 + 0x10));
        iVar6 = *(int *)(local_78 + 0x28);
        lVar7 = local_68;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar6);
  }
LAB_1488e6d46:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488e6e02 FUN_1488e6e02 body=267 status=ok
// SIG undefined FUN_1488e6e02(void)

undefined4 FUN_1488e6e02(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = FUN_1488e6a7a(param_2);
  if (lVar2 == 0) {
    return 0;
  }
  lVar2 = FUN_1447210f0(param_3);
  if (lVar2 == 0) {
    return 0;
  }
  lVar2 = FUN_144a7cbb2();
  if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
      != lVar2 + 0x30)) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_3 + 0x3b0);
  }
  if (*(int *)(param_1 + 0x28) < 1) {
    return 0;
  }
  lVar4 = 0;
  lVar3 = 0;
  while ((cVar1 = FUN_14069eaf4(*(longlong *)(param_1 + 0x20) + lVar4,param_3), cVar1 == '\0' &&
         ((lVar2 == 0 ||
          (cVar1 = FUN_14069eaf4(*(longlong *)(param_1 + 0x20) + lVar4,lVar2), cVar1 == '\0'))))) {
    lVar3 = lVar3 + 1;
    lVar4 = lVar4 + 0x18;
    if (*(int *)(param_1 + 0x28) <= lVar3) {
      return 0;
    }
  }
  lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x10 + lVar4);
  if (lVar2 < 1) {
    return 0;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + lVar4);
  lVar4 = 0;
  while ((*(longlong *)(lVar3 + lVar4) != *param_2 ||
         (*(int *)(lVar3 + 8 + lVar4) != (int)param_2[1]))) {
    lVar4 = lVar4 + 0x28;
    if (lVar2 * 0x28 == lVar4) {
      return 0;
    }
  }
  return *(undefined4 *)(lVar3 + 0x20 + lVar4);
}



// FUNCTION 1488e6f0e FUN_1488e6f0e body=219 status=ok
// SIG undefined FUN_1488e6f0e(void)

void FUN_1488e6f0e(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 != 0 && param_2 != 0) {
    uVar5 = FUN_1447210f0(param_2);
    FUN_14189b2f2(&local_38,uVar5);
    if (local_30 != (longlong *)0x0) {
      iVar4 = (int)local_30[1];
      do {
        if (iVar4 == 0) {
          plVar6 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_30[1];
        bVar7 = iVar4 == iVar3;
        if (bVar7) {
          *(int *)(local_30 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar6 = local_30;
      } while (!bVar7);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
      if (plVar6 != (longlong *)0x0) {
        if (local_38 != 0) {
          FUN_143dd1772(local_38,param_1,param_2,param_3);
        }
        LOCK();
        plVar2 = plVar6 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488e6fea FUN_1488e6fea body=187 status=ok
// SIG undefined FUN_1488e6fea(void)

void FUN_1488e6fea(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    uVar5 = FUN_1447210f0();
    FUN_14189b2f2(&local_30,uVar5);
    if (local_28 != (longlong *)0x0) {
      iVar4 = (int)local_28[1];
      do {
        if (iVar4 == 0) {
          plVar6 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_28[1];
        bVar7 = iVar4 == iVar3;
        if (bVar7) {
          *(int *)(local_28 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar6 = local_28;
      } while (!bVar7);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      if (plVar6 != (longlong *)0x0) {
        if (local_30 != 0) {
          FUN_1488e6c38(local_30,param_1,param_2);
        }
        LOCK();
        plVar2 = plVar6 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488e70a6 FUN_1488e70a6 body=203 status=ok
// SIG undefined FUN_1488e70a6(void)

undefined4 FUN_1488e70a6(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = 0;
  if (param_2 != 0) {
    uVar6 = FUN_1447210f0(param_2);
    FUN_14189b2f2(&local_38,uVar6);
    if (local_30 != (longlong *)0x0) {
      iVar4 = (int)local_30[1];
      do {
        if (iVar4 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_30[1];
        bVar8 = iVar4 == iVar3;
        if (bVar8) {
          *(int *)(local_30 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
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
        uVar5 = 0;
        if (local_38 != 0) {
          uVar5 = FUN_1488e6e02(local_38,param_1,param_2);
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
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1488e7176 FUN_1488e7176 body=59 status=ok
// SIG undefined FUN_1488e7176(void)

void FUN_1488e7176(longlong param_1)

{
  if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_1);
  }
  *(longlong *)(param_1 + 0x1f08) = param_1;
  *(undefined8 *)(param_1 + 0x1f10) = *(undefined8 *)(param_1 + 0x1f00);
  return;
}



// FUNCTION 1488e71b2 FUN_1488e71b2 body=635 status=ok
// SIG undefined FUN_1488e71b2(void)

void FUN_1488e71b2(uint *param_1,undefined1 *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_1a8 [32];
  undefined1 *local_188;
  undefined8 *local_180;
  undefined4 *local_178;
  undefined1 local_170;
  undefined4 local_168;
  uint local_164;
  uint local_160;
  undefined1 local_158 [4];
  undefined4 local_154;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined4 local_b4;
  undefined4 local_88;
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (*(longlong *)(param_1 + 0x1e) != 0) {
    lVar7 = FUN_14069294b();
    fVar1 = (float)param_1[1];
    dVar2 = *(double *)(param_2 + 0xc0);
    dVar4 = (double)*(float *)(*(longlong *)(param_1 + 0x1e) + 0x48);
    dVar3 = *(double *)(param_1 + 0x14);
    *(double *)(param_2 + 0x278) = dVar4 * *(double *)(param_2 + 8) + *(double *)(param_2 + 0x50);
    *(double *)(param_2 + 0x280) = *(double *)(param_2 + 0x10) * dVar4 + *(double *)(param_2 + 0x58)
    ;
    *(double *)(param_2 + 0x288) = *(double *)(param_2 + 0x18) * dVar4 + *(double *)(param_2 + 0x60)
    ;
    *(double *)(param_2 + 0x288) =
         (double)((float)param_1[1] + (float)param_1[1]) + (double)*(float *)(lVar7 + 0x28) + dVar3;
    local_58 = *(undefined8 *)(param_2 + 0x278);
    uStack_50 = *(undefined8 *)(param_2 + 0x280);
    local_48 = (double)((float)((double)fVar1 + dVar2) -
                       *(float *)(*(longlong *)(param_1 + 0x1e) + 0x40));
    memset(local_158,0,0x100);
    local_88 = 0xffffffff;
    local_154 = 0x3f800000;
    local_b4 = 0xffffffff;
    local_164 = *param_1;
    local_178 = &local_168;
    local_168 = 3;
    local_170 = 0;
    local_188 = param_2 + 0x278;
    local_180 = &local_58;
    local_160 = local_164;
    cVar5 = FUN_140692a30(local_158,*(undefined8 *)(param_1 + 0x1c),*(undefined8 *)(param_1 + 0x20),
                          (char)param_1[0x1a]);
    if (cVar5 == '\0') {
      *(double *)(param_2 + 0x2a0) = local_48;
      *(undefined4 *)(param_2 + 0x290) = (undefined4)local_58;
      *(undefined4 *)(param_2 + 0x294) = local_58._4_4_;
      *(undefined4 *)(param_2 + 0x298) = (undefined4)uStack_50;
      *(undefined4 *)(param_2 + 0x29c) = uStack_50._4_4_;
    }
    else {
      *(undefined8 *)(param_2 + 0x2d0) = local_f0;
      *(undefined8 *)(param_2 + 0x2c0) = local_100;
      *(undefined8 *)(param_2 + 0x2c8) = uStack_f8;
      *(undefined8 *)(param_2 + 0x290) = local_148;
      *(undefined8 *)(param_2 + 0x298) = uStack_140;
      *(undefined8 *)(param_2 + 0x2a0) = local_138;
      *(undefined4 *)(param_2 + 0x2a8) = local_130;
      *(undefined4 *)(param_2 + 0x2ac) = uStack_12c;
      *(undefined4 *)(param_2 + 0x2b0) = uStack_128;
      *(undefined4 *)(param_2 + 0x2b4) = uStack_124;
      *(undefined8 *)(param_2 + 0x2b8) = local_120;
      uVar8 = FUN_14479d2ce();
      FUN_14485c47a(param_2 + 0x2d8,uVar8);
      local_168 = 0x1010101;
      local_164 = local_164 & 0xffffff00;
      iVar6 = FUN_1406942f8(param_1,param_2 + 0x278);
      if ((iVar6 == 0) &&
         ((double)*(float *)(*(longlong *)(param_1 + 0x1e) + 0x44) <=
          (double)(float)((double)fVar1 + dVar2) - *(double *)(param_2 + 0x2a0))) {
        *param_2 = 1;
        param_2[0x2e0] = param_2[0x2e0] | 1;
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e742e FUN_1488e742e body=432 status=ok
// SIG undefined FUN_1488e742e(void)

bool FUN_1488e742e(undefined4 *param_1,longlong param_2)

{
  float fVar1;
  undefined4 uVar2;
  longlong lVar3;
  bool bVar4;
  double dVar5;
  undefined1 auStack_1d8 [32];
  double *local_1b8;
  double *local_1b0;
  undefined4 *local_1a8;
  undefined1 local_1a0;
  undefined4 local_190;
  undefined4 local_18c;
  float local_188;
  undefined1 local_180 [4];
  undefined4 local_17c;
  undefined4 local_dc;
  undefined4 local_b0;
  undefined1 local_a8 [40];
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar3 = *(longlong *)(param_1 + 0x1e);
  if (lVar3 != 0) {
    if (*(double *)(param_2 + 0xc0) - *(double *)(param_1 + 0x14) <=
        (double)*(float *)(lVar3 + 0x3c)) {
      fVar1 = (float)param_1[1];
      local_58 = *(double *)(param_1 + 0x14) + (double)(*(float *)(lVar3 + 0x3c) + fVar1);
      local_60 = *(double *)(param_1 + 0x12) + 0.0;
      local_68 = *(double *)(param_1 + 0x10) + 0.0;
      dVar5 = (double)*(float *)(lVar3 + 0x48);
      local_70 = *(double *)(param_2 + 0x18) * dVar5 * 0.5 + local_58;
      local_78 = *(double *)(param_2 + 0x10) * dVar5 * 0.5 + local_60;
      local_80 = dVar5 * *(double *)(param_2 + 8) * 0.5 + local_68;
      uVar2 = *param_1;
      memset(local_180,0,0x100);
      local_b0 = 0xffffffff;
      local_17c = 0x3f800000;
      local_dc = 0xffffffff;
      local_1a8 = &local_190;
      local_190 = 3;
      local_1a0 = 0;
      local_1b8 = &local_68;
      local_1b0 = &local_80;
      local_18c = uVar2;
      local_188 = fVar1;
      FUN_140692a30(local_180,*(undefined8 *)(param_1 + 0x1c),*(undefined8 *)(param_1 + 0x20),
                    *(undefined1 *)(param_1 + 0x1a));
      lVar3 = FUN_14479d2ce(local_a8);
      bVar4 = lVar3 == 0;
      goto LAB_1488e748c;
    }
  }
  bVar4 = false;
LAB_1488e748c:
  if ((local_50 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e75e0 FUN_1488e75e0 body=100 status=ok
// SIG undefined FUN_1488e75e0(void)

longlong FUN_1488e75e0(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_144a797b2();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (lVar2 = FUN_144a3a302(), lVar2 != 0)) &&
       (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30) {
        return 0;
      }
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1488e767c FUN_1488e767c body=40 status=ok
// SIG undefined FUN_1488e767c(void)

undefined8 FUN_1488e767c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145977fe2(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 1488e76b2 FUN_1488e76b2 body=104 status=ok
// SIG undefined FUN_1488e76b2(void)

void FUN_1488e76b2(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b33e0c0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_1446f470e(param_1 + 5,L"UpperBody",1);
  param_1[6] = 0x4296000042200000;
  param_1[7] = 0x432f000000000000;
  param_1[8] = 0x4248000043480000;
  *(undefined4 *)(param_1 + 9) = 0;
  return;
}



// FUNCTION 1488e7748 FUN_1488e7748 body=329 status=ok
// SIG undefined FUN_1488e7748(void)

undefined8
FUN_1488e7748(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x28) < 3) {
      return 0;
    }
    if (*(char *)(*(longlong *)(param_1 + 0x20) + 0x150) == '\0') {
      return 0;
    }
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      return 0;
    }
  }
  cVar2 = FUN_144729dda(param_1 + 8);
  if (cVar2 == '\0') {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return 0;
  }
  cVar2 = FUN_144729dda(param_1 + 0x10);
  if (cVar2 == '\0') {
    return 0;
  }
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))
                    (*(longlong **)(param_1 + 0x18),param_5);
  if (cVar2 != '\0') {
    lVar4 = param_3[1];
    if (lVar4 == 0) {
      uVar3 = FUN_145d847d4();
      lVar4 = FUN_14477b664(uVar3);
      param_3[1] = lVar4;
    }
    if (param_3[2] == 0) {
      if (lVar4 == 0) {
        return 0;
      }
      if (*param_3 == 0) {
        return 0;
      }
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        param_3[2] = 0;
        return 0;
      }
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar4 = FUN_144aff482(uVar3,param_3);
      param_3[2] = lVar4;
      if (lVar4 == 0) {
        return 0;
      }
    }
    cVar2 = FUN_144729dda(param_1 + 8);
    if ((cVar2 != '\0') && (*(longlong *)(param_1 + 0x18) != 0)) {
      uVar3 = FUN_144729dda(param_1 + 0x10);
      return uVar3;
    }
    return 0;
  }
  return 0;
}



// FUNCTION 1488e7892 FUN_1488e7892 body=181 status=ok
// SIG undefined FUN_1488e7892(void)

void FUN_1488e7892(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (param_2 == '\x01') {
    *(undefined1 *)(param_1 + 0x79) = 1;
    FUN_140843fac(param_1);
  }
  plVar2 = *(longlong **)(param_1 + 0x148);
  if (plVar2 != (longlong *)0x0) {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) {
        return;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    if ((*(longlong *)(param_1 + 0x140) != 0) && (*(longlong *)(param_1 + 0x150) != 0)) {
      FUN_14480f766(*(longlong *)(param_1 + 0x140) + 0x18);
      *(undefined8 *)(param_1 + 0x150) = 0;
      plVar3 = *(longlong **)(param_1 + 0x148);
      *(undefined8 *)(param_1 + 0x140) = 0;
      *(undefined8 *)(param_1 + 0x148) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001488e793b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1488e7948 FUN_1488e7948 body=113 status=ok
// SIG undefined FUN_1488e7948(void)

void FUN_1488e7948(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_144729dda(param_1 + 1);
  if ((cVar2 != '\0') && (param_1[3] != 0)) {
    cVar2 = FUN_144729dda(param_1 + 2);
    if (cVar2 != '\0') {
      plVar1 = (longlong *)param_1[3];
      uVar3 = FUN_14479d2ce(param_1 + 0x15);
      (**(code **)(*plVar1 + 0xb0))(plVar1,uVar3);
      FUN_14084408c(param_1);
      *(undefined4 *)(param_1 + 5) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001488e79ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x38))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1488e79ba FUN_1488e79ba body=336 status=ok
// SIG undefined FUN_1488e79ba(void)

void FUN_1488e79ba(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [40];
  uint local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  uint uStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar2 = FUN_144729dda(param_1 + 8);
  if ((cVar2 != '\0') && (*(longlong *)(param_1 + 0x18) != 0)) {
    cVar2 = FUN_144729dda(param_1 + 0x10);
    if (cVar2 != '\0') {
      lVar3 = FUN_14479d2ce(param_1 + 8);
      if ((((1 < *(byte *)(lVar3 + 0x178)) && (*(longlong *)(param_1 + 0x20) != 0)) &&
          (*(char *)(*(longlong *)(param_1 + 0x20) + 0x210) == '\x01')) &&
         (*(char *)(param_1 + 0x48) == '\0')) {
        cVar2 = FUN_144729dda(param_1 + 0xa8);
        if ((cVar2 != '\0') && (*(char *)(param_1 + 0xb0) == '\0')) {
          plVar1 = *(longlong **)(param_1 + 0x18);
          lVar3 = *(longlong *)(param_1 + 0x20);
          if (lVar3 == 0) {
            local_60 = 0;
            local_70 = local_70 & 0xffffff00;
            uStack_6c = 0;
            local_68 = 0;
            local_48 = 0;
            uStack_44 = uStack_44 & 0xffffff00;
            uStack_40 = 0;
            local_38 = 0;
            uStack_30 = 0;
            local_58 = 0xf00000d0;
          }
          else {
            local_68 = *(undefined4 *)(lVar3 + 0x228);
            local_70 = (uint)*(undefined8 *)(lVar3 + 0x220);
            uStack_6c = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x220) >> 0x20);
            local_60 = *(undefined8 *)(lVar3 + 0x230);
            local_58 = *(undefined4 *)(lVar3 + 0x238);
            local_38 = *(undefined8 *)(lVar3 + 600);
            uStack_30 = *(undefined8 *)(lVar3 + 0x260);
            local_48 = *(undefined4 *)(lVar3 + 0x248);
            uStack_44 = *(uint *)(lVar3 + 0x24c);
            uStack_40 = *(undefined8 *)(lVar3 + 0x250);
          }
          local_50 = 0;
          uVar4 = FUN_14479d2ce(param_1 + 0xa8);
          (**(code **)(*plVar1 + 0xa0))(plVar1,uVar4,&local_70);
          *(undefined1 *)(param_1 + 0x48) = 1;
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e7b34 FUN_1488e7b34 body=272 status=ok
// SIG undefined FUN_1488e7b34(void)

void FUN_1488e7b34(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  int local_60;
  undefined1 local_54 [4];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((param_1 != 0) && (lVar1 = FUN_1447210f0(), lVar1 != 0)) &&
      (lVar1 = FUN_1406f625c(lVar1), lVar1 != 0)) &&
     (lVar1 = *(longlong *)(lVar1 + 0x38), lVar1 != 0)) {
    local_48 = *param_2;
    uVar2 = FUN_14477b664(param_2[1]);
    local_40 = FUN_14477b664(uVar2);
    local_38 = param_2[2];
    local_30 = *(undefined8 *)(param_1 + 0x18);
    FUN_1400021e4(&local_30,&local_68);
    local_50 = 0;
    puVar3 = local_68;
    if (local_60 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_1405f0d29(local_54,puVar3,0);
    lVar1 = FUN_1488e7c46(lVar1,local_54,&local_48);
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (lVar1 != 0) {
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)(lVar1 + 0x20);
      *param_3 = *(undefined8 *)(lVar1 + 0x18);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488e7c46 FUN_1488e7c46 body=1177 status=ok
// SIG undefined FUN_1488e7c46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1488e7c46(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  int local_ac [2];
  int local_a4;
  undefined1 local_a0 [4];
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_84 [12];
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong lStack_50;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar3 = param_3[1];
  if (lVar3 == 0) {
    uVar4 = FUN_14653326e();
    lVar3 = FUN_14477b664(uVar4);
    param_3[1] = lVar3;
  }
  lVar5 = param_3[2];
  if (((lVar5 == 0) && (lVar5 = 0, lVar3 != 0)) && (*param_3 != 0)) {
    plVar6 = *(longlong **)(lVar3 + 0xb8);
    if ((plVar6 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar2 == '\0')) {
      lVar5 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar6 + 0x110))(plVar6);
      lVar5 = FUN_144aff482(uVar4,param_3);
    }
    param_3[2] = lVar5;
  }
  if (*(char *)(lVar5 + 0x68) == '\x01') {
    plVar6 = (longlong *)FUN_145b08b9a(param_1);
    local_90 = _DAT_14cb7baf0;
    local_88 = DAT_14cb7baf8;
    FUN_1448075d0(&local_60);
    (**(code **)(*plVar6 + 0x30))(plVar6,local_84,&local_60);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    lVar3 = param_3[1];
    if (lVar3 == 0) {
      uVar4 = FUN_14653326e();
      lVar3 = FUN_14477b664(uVar4);
      param_3[1] = lVar3;
    }
    lVar5 = param_3[2];
    if (lVar5 != 0) {
LAB_1488e7ee2:
      local_a0[0] = 2;
      local_94 = 1;
      local_9c = 0;
      uVar4 = FUN_14001cc68(0xf0,0x10);
      local_78 = *param_2;
      local_70 = *(undefined4 *)(param_2 + 1);
      uStack_58 = 0;
      uStack_54 = 0;
      lStack_50 = 0;
      uVar7 = FUN_14653326e();
      lVar3 = FUN_14477b664(uVar7);
      uVar7 = FUN_14653326e();
      uVar8 = FUN_14653326e();
      FUN_1402d1bfa(&local_68,uVar8,lVar5);
      if (local_68 != 0) {
        lStack_50 = 0;
      }
      local_60 = (undefined4)local_68;
      uStack_5c = (undefined4)((ulonglong)local_68 >> 0x20);
      uVar8 = FUN_14653326e();
      lVar9 = FUN_141459e9e(uVar7,uVar8);
      if (lVar3 != lVar9) {
        lStack_50 = 0;
      }
      uVar7 = FUN_14477b664(lVar9);
      lVar3 = FUN_14477b664(uVar7);
      uStack_58 = (undefined4)lVar3;
      uStack_54 = (undefined4)((ulonglong)lVar3 >> 0x20);
      if (lVar3 != 0 && local_68 != 0) {
        lStack_50 = lVar5;
      }
      local_c0 = &local_78;
      local_c8 = local_a0;
      FUN_1488e9bea(uVar4,param_1,&local_60,local_84);
      iVar1 = *(int *)(param_1 + 0x48);
      *(uint *)(param_1 + 0x48) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
        FUN_1488f0730(param_1 + 0x40,iVar1);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar1 * 8) = uVar4;
      lVar5 = *(longlong *)
               (*(longlong *)(param_1 + 0x40) + (longlong)(*(int *)(param_1 + 0x48) + -1) * 8);
      goto LAB_1488e7d19;
    }
    lVar5 = 0;
    if ((lVar3 == 0) || (lVar5 = 0, *param_3 == 0)) goto LAB_1488e7d19;
    plVar6 = *(longlong **)(lVar3 + 0xb8);
    if ((plVar6 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar2 == '\0')) {
      param_3[2] = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar6 + 0x110))(plVar6);
      lVar5 = FUN_144aff482(uVar4,param_3);
      param_3[2] = lVar5;
      if (lVar5 != 0) goto LAB_1488e7ee2;
    }
  }
  else {
    lVar3 = param_3[1];
    if (lVar3 == 0) {
      uVar4 = FUN_14653326e();
      lVar3 = FUN_14477b664(uVar4);
      param_3[1] = lVar3;
      lVar5 = param_3[2];
    }
    if (lVar5 == 0) {
      param_3[2] = 0;
      lVar5 = 0;
      if ((lVar3 != 0) && (*param_3 != 0)) {
        plVar6 = *(longlong **)(lVar3 + 0xb8);
        if ((plVar6 == (longlong *)0x0) ||
           (cVar2 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar2 == '\0')) {
          lVar5 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar6 + 0x110))(plVar6);
          lVar5 = FUN_144aff482(uVar4,param_3);
        }
        param_3[2] = lVar5;
      }
    }
    puVar10 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar5 + 8) != (undefined4 *)0x0) {
      puVar10 = *(undefined4 **)(lVar5 + 8);
    }
    FUN_144a7660c(puVar10,local_ac,1);
    if ((longlong)*(int *)(param_1 + 0x48) != 0) {
      plVar6 = *(longlong **)(param_1 + 0x40);
      lVar3 = (longlong)*(int *)(param_1 + 0x48) << 3;
      do {
        lVar5 = *plVar6;
        if ((*(int *)(lVar5 + 0x18) == local_ac[0]) && (*(int *)(lVar5 + 0x20) == local_a4)) {
          if (lVar5 != 0 && plVar6 != (longlong *)0x0) {
            cVar2 = FUN_141882374(lVar5 + 0x30,DAT_14cb858b8);
            if (cVar2 != '\0') {
              local_60 = CONCAT31(local_60._1_3_,2);
              uStack_54 = 1;
              uStack_5c = 0;
              uStack_58 = 0;
              FUN_1488e9f52(lVar5);
              local_b8 = *param_2;
              local_b0 = *(undefined4 *)(param_2 + 1);
              FUN_1488e9ff6(lVar5);
            }
            goto LAB_1488e7d19;
          }
          break;
        }
        plVar6 = plVar6 + 1;
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
  }
  lVar5 = 0;
LAB_1488e7d19:
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 1488e80e0 FUN_1488e80e0 body=385 status=ok
// SIG undefined FUN_1488e80e0(void)

void FUN_1488e80e0(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  undefined1 auStack_58 [36];
  int local_34 [2];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((param_1 != 0) && (lVar2 = FUN_1447210f0(), lVar2 != 0)) &&
      (lVar2 = FUN_1406f625c(lVar2), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 0x38), lVar2 != 0)) {
    lVar5 = param_2[1];
    if (lVar5 == 0) {
      uVar3 = FUN_14653326e();
      lVar5 = FUN_14477b664(uVar3);
      param_2[1] = lVar5;
    }
    lVar4 = param_2[2];
    if (((lVar4 == 0) && (lVar4 = 0, lVar5 != 0)) && (*param_2 != 0)) {
      plVar7 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar7 == (longlong *)0x0) ||
         (cVar1 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar1 == '\0')) {
        lVar4 = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar7 + 0x110))(plVar7);
        lVar4 = FUN_144aff482(uVar3,param_2);
      }
      param_2[2] = lVar4;
    }
    puVar6 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar4 + 8) != (undefined4 *)0x0) {
      puVar6 = *(undefined4 **)(lVar4 + 8);
    }
    FUN_144a7660c(puVar6,local_34,1);
    if ((longlong)*(int *)(lVar2 + 0x48) != 0) {
      plVar7 = *(longlong **)(lVar2 + 0x40);
      lVar2 = (longlong)*(int *)(lVar2 + 0x48) << 3;
      do {
        lVar5 = *plVar7;
        if ((*(int *)(lVar5 + 0x18) == local_34[0]) && (*(int *)(lVar5 + 0x20) == local_2c)) {
          if (lVar5 != 0 && plVar7 != (longlong *)0x0) {
            *(undefined4 *)(param_3 + 1) = *(undefined4 *)(lVar5 + 0x20);
            *param_3 = *(undefined8 *)(lVar5 + 0x18);
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
          }
          break;
        }
        plVar7 = plVar7 + 1;
        lVar2 = lVar2 + -8;
      } while (lVar2 != 0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488e8268 FUN_1488e8268 body=165 status=ok
// SIG undefined FUN_1488e8268(void)

void FUN_1488e8268(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c [12];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = param_3;
  if (param_1 != 0) {
    lVar1 = FUN_1447210f0();
    if (lVar1 != 0) {
      lVar1 = FUN_1406f625c(lVar1);
      if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x38), lVar1 != 0)) {
        FUN_1401533ba(local_3c,&local_30,1);
        local_48 = *param_2;
        local_40 = *(undefined4 *)(param_2 + 1);
        uVar2 = FUN_143dd7816(lVar1,&local_48,local_3c,0xbf800000);
        *param_4 = uVar2;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e830e FUN_1488e830e body=386 status=ok
// SIG undefined FUN_1488e830e(void)

void FUN_1488e830e(longlong param_1,undefined8 *param_2,undefined8 *param_3,float *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != 0) {
    lVar1 = FUN_1447210f0();
    if (lVar1 != 0) {
      lVar2 = FUN_1406f625c(lVar1);
      if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x38), lVar2 != 0)) {
        FUN_1402160b8(&local_50);
        if (*(longlong *)(lVar1 + 0x1f0) == 0) {
          plVar3 = (longlong *)(lVar1 + 0x458);
        }
        else {
          plVar3 = (longlong *)(*(longlong *)(lVar1 + 0x1f0) + 0xf0);
        }
        lVar1 = *plVar3;
        local_58 = *(undefined4 *)(param_3 + 1);
        local_60 = *param_3;
        local_70 = *param_2;
        local_68 = *(undefined4 *)(param_2 + 1);
        plVar3 = (longlong *)FUN_1488e8492(lVar2);
        local_48 = *plVar3;
        lVar2 = FUN_144a61814(lVar1);
        if (lVar2 == 0) {
          fVar4 = -1.0;
        }
        else if (*(char *)(lVar2 + 1) == '\x01') {
          fVar4 = (float)(*(double *)(lVar2 + 8) - *(double *)(lVar1 + 0x140));
        }
        else if (*(char *)(lVar2 + 1) == '\x03') {
          fVar4 = 0.0;
        }
        else {
          fVar4 = (float)*(double *)(lVar2 + 8);
        }
        auVar6._0_8_ = (double)fVar4 * 10000000.0 + 0.5;
        auVar6._8_8_ = 0;
        auVar6 = roundpd(auVar6,auVar6,1);
        FUN_140212f8e(&local_48);
        fVar5 = (float)((double)(((longlong)auVar6._0_8_ + local_50) - local_48) / 10000000.0);
        fVar4 = 0.0;
        if (0.0 <= fVar5) {
          fVar4 = fVar5;
        }
        *param_4 = fVar4;
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e8492 FUN_1488e8492 body=158 status=ok
// SIG undefined FUN_1488e8492(void)

longlong FUN_1488e8492(longlong param_1,int *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x40);
    lVar5 = (longlong)*(int *)(param_1 + 0x48) << 3;
    do {
      lVar1 = *plVar4;
      if ((*(int *)(lVar1 + 0x18) == *param_2) && (*(int *)(lVar1 + 0x20) == param_2[2])) {
        if (lVar1 == 0 || plVar4 == (longlong *)0x0) {
          return 0;
        }
        if (param_3[2] == 0) {
          uVar2 = *param_3;
        }
        else {
          uVar2 = FUN_144a78877(*param_3,param_3[2]);
        }
        iVar3 = FUN_1488f116c((longlong *)(lVar1 + 0x40),uVar2,param_3);
        if (iVar3 == -1) {
          lVar5 = 0;
        }
        else {
          lVar5 = (longlong)iVar3 * 0x20 + *(longlong *)(lVar1 + 0x40);
        }
        if (lVar5 != 0) {
          return lVar5 + 0x10;
        }
        return 0;
      }
      plVar4 = plVar4 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  return 0;
}



// FUNCTION 1488e8530 FUN_1488e8530 body=119 status=ok
// SIG undefined FUN_1488e8530(void)

void FUN_1488e8530(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    lVar2 = FUN_1447210f0();
    if (lVar2 != 0) {
      lVar2 = FUN_1406f625c(lVar2);
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x38) != 0)) {
        local_20 = *(undefined4 *)(param_2 + 1);
        local_28 = *param_2;
        uVar1 = FUN_1488e85a8();
        *param_3 = uVar1;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e85a8 FUN_1488e85a8 body=196 status=ok
// SIG undefined FUN_1488e85a8(void)

int FUN_1488e85a8(longlong param_1,int *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *_Str;
  longlong *plVar5;
  undefined1 auStack_48 [40];
  wchar_t *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar3 = 0;
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x40);
    lVar4 = (longlong)*(int *)(param_1 + 0x48) << 3;
    do {
      lVar1 = *plVar5;
      if ((*(int *)(lVar1 + 0x18) == *param_2) && (*(int *)(lVar1 + 0x20) == param_2[2])) {
        if (lVar1 != 0 && plVar5 != (longlong *)0x0) {
          FUN_140b12754(lVar1 + 0x30,&local_20);
          cVar2 = FUN_1405b43cc(&local_20);
          iVar3 = 0;
          if (cVar2 != '\0') {
            _Str = local_20;
            if (local_18 == 0) {
              _Str = L"";
            }
            iVar3 = _wtoi(_Str);
          }
          if (local_20 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
        }
        break;
      }
      plVar5 = plVar5 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 1488e866e FUN_1488e866e body=129 status=ok
// SIG undefined FUN_1488e866e(void)

void FUN_1488e866e(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    lVar1 = FUN_1447210f0();
    if (lVar1 != 0) {
      lVar1 = FUN_1406f625c(lVar1);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x38) != 0)) {
        local_28 = *param_3;
        uStack_24 = param_3[1];
        uStack_20 = param_3[2];
        uStack_1c = param_3[3];
        local_38 = *param_2;
        local_30 = *(undefined4 *)(param_2 + 1);
        FUN_1488e86f0();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e86f0 FUN_1488e86f0 body=475 status=ok
// SIG undefined FUN_1488e86f0(void)

void FUN_1488e86f0(longlong param_1,int *param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  uint *puVar7;
  bool bVar8;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  int local_78;
  undefined1 local_74;
  undefined8 local_70;
  int local_68;
  undefined1 local_64 [12];
  undefined8 local_58;
  int local_50;
  undefined8 local_48;
  int local_40;
  undefined8 local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x40);
    lVar4 = (longlong)*(int *)(param_1 + 0x48) << 3;
    do {
      lVar2 = *plVar6;
      if ((*(int *)(lVar2 + 0x18) == *param_2) && (*(int *)(lVar2 + 0x20) == param_2[2])) {
        if ((lVar2 != 0 && plVar6 != (longlong *)0x0) &&
           (cVar3 = FUN_1403218c0(lVar2 + 0x30,param_3), cVar3 == '\0')) {
          FUN_1488e9f52(lVar2,param_3);
          cVar3 = *(char *)(lVar2 + 0x30);
          if (cVar3 == '\x03') {
            bVar8 = *(longlong *)(lVar2 + 0x34) == 0;
LAB_1488e87aa:
            uVar5 = (uint)!bVar8;
          }
          else if (cVar3 == '\x02') {
            uVar5 = *(uint *)(lVar2 + 0x3c);
          }
          else {
            uVar5 = 0;
            if (cVar3 == '\x01') {
              bVar8 = *(int *)(lVar2 + 0x3c) == 0;
              goto LAB_1488e87aa;
            }
          }
          lVar4 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x10) + 0x78);
          if (lVar4 != 0) {
            puVar7 = *(uint **)(*(longlong *)(lVar2 + 0x10) + 0x70);
            lVar4 = lVar4 * 0x14;
            goto LAB_1488e87c6;
          }
        }
        break;
      }
      plVar6 = plVar6 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  goto LAB_1488e8768;
  while( true ) {
    puVar7 = puVar7 + 5;
    lVar4 = lVar4 + -0x14;
    if (lVar4 == 0) break;
LAB_1488e87c6:
    if (*puVar7 == uVar5) {
      if (puVar7 != (uint *)0x0) {
        cVar1 = (char)puVar7[1];
        if (cVar1 == '\x03') {
          local_30 = puVar7[4];
          local_38 = *(undefined8 *)(puVar7 + 2);
          local_48 = *(undefined8 *)param_2;
          local_40 = param_2[2];
          FUN_143dd7816(param_1,&local_48,&local_38,0xbf800000);
        }
        else if (cVar1 == '\x01') {
          if (cVar3 == '\x03') {
            bVar8 = *(longlong *)(lVar2 + 0x34) == 0;
LAB_1488e8879:
            uVar5 = (uint)!bVar8;
          }
          else if (cVar3 == '\x02') {
            uVar5 = *(uint *)(lVar2 + 0x3c);
          }
          else {
            if (cVar3 == '\x01') {
              bVar8 = *(int *)(lVar2 + 0x3c) == 0;
              goto LAB_1488e8879;
            }
            uVar5 = 0;
          }
          local_68 = uVar5 + 1;
          local_74 = 2;
          local_70 = 0;
          local_80 = *(undefined8 *)param_2;
          local_78 = param_2[2];
          FUN_1488e86f0(param_1);
        }
        else if (cVar1 == '\x02') {
          local_50 = param_2[2];
          local_58 = *(undefined8 *)param_2;
          FUN_1488e8b04(param_1,local_64);
        }
      }
      break;
    }
  }
LAB_1488e8768:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488e88cc FUN_1488e88cc body=175 status=ok
// SIG undefined FUN_1488e88cc(void)

undefined8 *
FUN_1488e88cc(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    lVar1 = FUN_1447210f0(param_2);
    if (lVar1 != 0) {
      lVar1 = FUN_1406f625c(lVar1);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x38) != 0)) {
        local_28 = *(undefined4 *)(param_4 + 1);
        local_30 = *param_4;
        local_40 = *param_3;
        local_38 = *(undefined4 *)(param_3 + 1);
        FUN_1488e897e(*(longlong *)(lVar1 + 0x38),param_1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e897e FUN_1488e897e body=232 status=ok
// SIG undefined FUN_1488e897e(void)

undefined8 * FUN_1488e897e(longlong param_1,undefined8 *param_2,int *param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_48;
  int local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)(param_2 + 1) = DAT_14c948620;
  *param_2 = DAT_14c948618;
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x40);
    lVar2 = (longlong)*(int *)(param_1 + 0x48) << 3;
    do {
      lVar1 = *plVar3;
      if ((*(int *)(lVar1 + 0x18) == *param_3) && (*(int *)(lVar1 + 0x20) == param_3[2])) {
        if ((lVar1 != 0 && plVar3 != (longlong *)0x0) && (*(longlong *)(lVar1 + 0x10) != 0)) {
          local_30 = *(undefined4 *)(param_4 + 1);
          local_38 = *param_4;
          lVar2 = FUN_1488e95f0();
          if (lVar2 != 0) {
            local_40 = param_3[2];
            local_58 = &local_48;
            local_48 = *(undefined8 *)param_3;
            FUN_1488eaa58(param_1,param_2,lVar2,lVar1);
          }
        }
        break;
      }
      plVar3 = plVar3 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1488e8a68 FUN_1488e8a68 body=152 status=ok
// SIG undefined FUN_1488e8a68(void)

undefined8 * FUN_1488e8a68(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    lVar1 = FUN_1447210f0(param_2);
    if (lVar1 != 0) {
      lVar1 = FUN_1406f625c(lVar1);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x38) != 0)) {
        local_20 = *(undefined4 *)(param_3 + 1);
        local_28 = *param_3;
        FUN_1488e8b04(*(longlong *)(lVar1 + 0x38),param_1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e8b04 FUN_1488e8b04 body=328 status=ok
// SIG undefined FUN_1488e8b04(void)

undefined8 * FUN_1488e8b04(longlong param_1,undefined8 *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_78;
  int local_70;
  longlong local_68;
  int local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_2 + 1) = DAT_14c948620;
  *param_2 = DAT_14c948618;
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x40);
    lVar3 = (longlong)*(int *)(param_1 + 0x48) << 3;
    do {
      lVar1 = *plVar4;
      if ((*(int *)(lVar1 + 0x18) == *param_3) && (*(int *)(lVar1 + 0x20) == param_3[2])) {
        if (lVar1 != 0 && plVar4 != (longlong *)0x0) {
          local_50 = param_3[2];
          local_58 = *(undefined8 *)param_3;
          iVar2 = FUN_1488e85a8(param_1);
          if (iVar2 != 0) {
            FUN_1488ea082(lVar1,&local_68,1);
            lVar3 = local_68;
            if ((longlong)local_60 != 0) {
              lVar5 = 0;
              do {
                if (*(longlong *)(lVar3 + lVar5) != 0) {
                  local_70 = param_3[2];
                  local_78 = *(undefined8 *)param_3;
                  local_88 = &local_78;
                  FUN_1488eaa58(param_1,param_2,*(longlong *)(lVar3 + lVar5),lVar1);
                }
                lVar5 = lVar5 + 8;
              } while ((longlong)local_60 * 8 != lVar5);
            }
            if (local_68 != 0) {
              FUN_1400020a8(local_68);
            }
          }
        }
        break;
      }
      plVar4 = plVar4 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1488e8c4e FUN_1488e8c4e body=152 status=ok
// SIG undefined FUN_1488e8c4e(void)

undefined8 *
FUN_1488e8c4e(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    lVar1 = FUN_1447210f0(param_2);
    if (lVar1 != 0) {
      lVar1 = FUN_1406f625c(lVar1);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x38) != 0)) {
        local_28 = *(undefined4 *)(param_3 + 1);
        local_30 = *param_3;
        FUN_1488e8cea(*(longlong *)(lVar1 + 0x38),param_1,&local_30,param_4);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e8cea FUN_1488e8cea body=323 status=ok
// SIG undefined FUN_1488e8cea(void)

longlong * FUN_1488e8cea(longlong param_1,longlong *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x40);
    lVar3 = (longlong)*(int *)(param_1 + 0x48) << 3;
    do {
      lVar6 = *plVar5;
      if ((*(int *)(lVar6 + 0x18) == *param_3) && (*(int *)(lVar6 + 0x20) == param_3[2])) {
        if (lVar6 != 0 && plVar5 != (longlong *)0x0) {
          *param_2 = 0;
          param_2[1] = 0;
          FUN_1488ea082(lVar6,&local_50,param_4);
          lVar3 = local_50;
          if ((longlong)local_48 != 0) {
            lVar6 = 0;
            do {
              puVar4 = *(undefined4 **)(*(longlong *)(lVar3 + lVar6) + 8);
              if (puVar4 == (undefined4 *)0x0) {
                puVar4 = &DAT_14c9485f0;
              }
              FUN_144a7660c(puVar4,&local_60,1);
              iVar1 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar1 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
                FUN_1487b79dc(param_2,iVar1);
              }
              lVar2 = *param_2;
              *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = local_58;
              *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = local_60;
              lVar6 = lVar6 + 8;
            } while ((longlong)local_48 * 8 != lVar6);
          }
          if (local_50 != 0) {
            FUN_1400020a8(local_50);
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
        }
        break;
      }
      plVar5 = plVar5 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1488e8e34 FUN_1488e8e34 body=117 status=ok
// SIG undefined FUN_1488e8e34(void)

undefined8 * FUN_1488e8e34(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1488e8eaa(&DAT_14cb85928);
  memset(puVar1 + 1,0,0xa0);
  *puVar1 = &PTR_FUN_14b364b10;
  FUN_140c13428(puVar1 + 3);
  *(undefined1 *)(puVar1 + 7) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined1 *)(puVar1 + 10) = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  return puVar1;
}



// FUNCTION 1488e8eaa FUN_1488e8eaa body=96 status=ok
// SIG undefined FUN_1488e8eaa(void)

void FUN_1488e8eaa(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0xa80,0);
    lVar4 = 0xf;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 0x15;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x10;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 1488e8f0a FUN_1488e8f0a body=44 status=ok
// SIG undefined FUN_1488e8f0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1488e8f0a(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb85934 = _DAT_14cb85934 + -1;
  *param_1 = DAT_14cb85928;
  DAT_14cb85928 = param_1;
  return;
}



// FUNCTION 1488e8f36 FUN_1488e8f36 body=109 status=ok
// SIG undefined FUN_1488e8f36(void)

void FUN_1488e8f36(undefined8 *param_1)

{
  (**(code **)*param_1)();
  memset(param_1 + 1,0,0xa0);
  *param_1 = &PTR_FUN_14b364b10;
  FUN_140c13428(param_1 + 3);
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return;
}



// FUNCTION 1488e8fa4 FUN_1488e8fa4 body=112 status=ok
// SIG undefined FUN_1488e8fa4(void)

undefined4 * FUN_1488e8fa4(undefined4 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined2 **)(param_1 + 6) = &DAT_14a171d50;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0x12] = 0x2000;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  lVar1 = FUN_143df59fe();
  param_1[0xc] = 0;
  if (param_1[0xd] != 0) {
    FUN_140115c12(param_1 + 10,0);
  }
  *(longlong *)(param_1 + 8) = lVar1 + 0x480;
  return param_1;
}



// FUNCTION 1488e9014 FUN_1488e9014 body=45 status=ok
// SIG undefined FUN_1488e9014(void)

undefined8 FUN_1488e9014(undefined8 param_1)

{
  longlong lVar1;
  
  if ((DAT_14cb85a38 != 0) && (lVar1 = thunk_FUN_1400e3c00(DAT_14cb85a38,param_1,1), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0x30);
  }
  return 0;
}



// FUNCTION 1488e9042 FUN_1488e9042 body=41 status=ok
// SIG undefined FUN_1488e9042(void)

void FUN_1488e9042(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,1);
  return;
}



// FUNCTION 1488e906c FUN_1488e906c body=1215 status=ok
// SIG undefined FUN_1488e906c(void)

void FUN_1488e906c(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  longlong *plVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  uint *puVar20;
  ulonglong uVar21;
  bool bVar22;
  float fVar23;
  undefined1 auStack_3c8 [32];
  longlong local_3a8;
  longlong local_3a0;
  undefined4 local_398 [190];
  undefined8 local_a0 [11];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  FUN_14878adf8((longlong *)(param_1 + 0x98));
  iVar8 = *(int *)(param_1 + 0xa0);
  if (1 < (longlong)iVar8) {
    lVar3 = *(longlong *)(param_1 + 0x98);
    memset(local_398,0,0x2f0);
    local_3a0 = (longlong)iVar8 * 0x58 + lVar3 + -0x58;
    local_3a8 = lVar3;
    fVar23 = logf((float)iVar8);
    local_398[0] = (int)(longlong)(fVar23 + fVar23);
    plVar7 = &local_3a8;
    do {
      puVar5 = (uint *)*plVar7;
      puVar11 = (uint *)plVar7[1];
      iVar8 = (int)plVar7[2];
      iVar2 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar5) >> 3) * -0x45d1745d;
      uVar18 = iVar2 + 1;
      puVar6 = puVar11;
      puVar13 = puVar5;
      if (iVar8 != 0) {
LAB_1488e9134:
        if (8 < (int)uVar18) {
          puVar14 = puVar5 + (ulonglong)(uVar18 >> 1) * 0x16;
          puVar12 = local_a0;
          for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar12 = *(undefined8 *)puVar14;
            puVar14 = puVar14 + 2;
            puVar12 = puVar12 + 1;
          }
          puVar14 = puVar5;
          puVar4 = puVar5 + (ulonglong)(uVar18 >> 1) * 0x16;
          for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
            *(undefined8 *)puVar4 = *(undefined8 *)puVar14;
            puVar14 = puVar14 + 2;
            puVar4 = puVar4 + 2;
          }
          puVar12 = local_a0;
          puVar14 = puVar5;
          for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
            *(undefined8 *)puVar14 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar14 = puVar14 + 2;
          }
          puVar14 = puVar11 + 0x16;
          puVar4 = puVar5;
          do {
            puVar10 = puVar4 + 0x16;
            puVar15 = puVar4 + 0x16;
            do {
              puVar4 = puVar15;
              puVar19 = puVar10;
              if (puVar11 < puVar4) break;
              puVar10 = puVar19 + 0x16;
              puVar15 = puVar4 + 0x16;
            } while (*puVar4 <= *puVar5);
            puVar10 = puVar14 + -0x2c;
            do {
              puVar15 = puVar14;
              puVar20 = puVar10;
              puVar14 = puVar15 + -0x16;
              if (puVar14 <= puVar5) break;
              puVar10 = puVar20 + -0x16;
            } while (*puVar5 <= *puVar14);
            lVar3 = 0xb;
            puVar10 = puVar5;
            puVar9 = puVar4;
            puVar12 = local_a0;
            if (puVar14 < puVar4) goto code_r0x0001488e91fb;
            for (; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar12 = *(undefined8 *)puVar9;
              puVar9 = puVar9 + 2;
              puVar12 = puVar12 + 1;
            }
            puVar10 = puVar14;
            puVar15 = puVar4;
            for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
              *(undefined8 *)puVar15 = *(undefined8 *)puVar10;
              puVar10 = puVar10 + 2;
              puVar15 = puVar15 + 2;
            }
            puVar12 = local_a0;
            puVar10 = puVar14;
            for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
              *(undefined8 *)puVar10 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar10 = puVar10 + 2;
            }
          } while( true );
        }
        if (puVar5 < puVar11) {
          do {
            puVar6 = puVar5;
            if (puVar5 + 0x16 <= puVar11) {
              uVar18 = *puVar5;
              puVar13 = puVar5 + 0x16;
              do {
                uVar1 = *puVar13;
                bVar22 = uVar18 < uVar1;
                if (uVar18 <= uVar1) {
                  uVar18 = uVar1;
                }
                if (bVar22) {
                  puVar6 = puVar13;
                }
                puVar13 = puVar13 + 0x16;
              } while (puVar13 <= puVar11);
            }
            puVar13 = puVar11 + -0x16;
            puVar14 = puVar6;
            puVar12 = local_a0;
            for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar12 = *(undefined8 *)puVar14;
              puVar14 = puVar14 + 2;
              puVar12 = puVar12 + 1;
            }
            puVar14 = puVar11;
            for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
              *(undefined8 *)puVar6 = *(undefined8 *)puVar14;
              puVar14 = puVar14 + 2;
              puVar6 = puVar6 + 2;
            }
            puVar12 = local_a0;
            for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
              *(undefined8 *)puVar11 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar11 = puVar11 + 2;
            }
            puVar11 = puVar13;
          } while (puVar5 < puVar13);
        }
        goto LAB_1488e94f1;
      }
LAB_1488e92a6:
      if (uVar18 != 0) {
        iVar2 = (iVar2 - (iVar2 + -1 >> 0x1f)) + -1 >> 1;
        iVar8 = iVar2;
joined_r0x0001488e92ce:
        do {
          iVar17 = iVar8 * 2 + 1;
          if (iVar17 < (int)uVar18) {
            iVar16 = iVar8 * 2 + 2;
            if ((iVar16 < (int)uVar18) &&
               (puVar5[(longlong)iVar17 * 0x16] <= puVar5[(longlong)iVar16 * 0x16])) {
              iVar17 = iVar16;
            }
            if (puVar5[(longlong)iVar8 * 0x16] < puVar5[(longlong)iVar17 * 0x16]) {
              puVar11 = puVar5 + (longlong)iVar8 * 0x16;
              puVar12 = local_a0;
              for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
                *puVar12 = *(undefined8 *)puVar11;
                puVar11 = puVar11 + 2;
                puVar12 = puVar12 + 1;
              }
              puVar11 = puVar5 + (longlong)iVar17 * 0x16;
              puVar6 = puVar5 + (longlong)iVar8 * 0x16;
              for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
                *(undefined8 *)puVar6 = *(undefined8 *)puVar11;
                puVar11 = puVar11 + 2;
                puVar6 = puVar6 + 2;
              }
              puVar12 = local_a0;
              puVar11 = puVar5 + (longlong)iVar17 * 0x16;
              for (lVar3 = 0xb; iVar8 = iVar17, lVar3 != 0; lVar3 = lVar3 + -1) {
                *(undefined8 *)puVar11 = *puVar12;
                puVar12 = puVar12 + 1;
                puVar11 = puVar11 + 2;
              }
              goto joined_r0x0001488e92ce;
            }
          }
          bVar22 = iVar2 != 0;
          iVar2 = iVar2 + -1;
          iVar8 = iVar2;
        } while (bVar22);
        if (1 < (int)uVar18) {
          puVar11 = puVar5;
          puVar12 = local_a0;
          for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar12 = *(undefined8 *)puVar11;
            puVar11 = puVar11 + 2;
            puVar12 = puVar12 + 1;
          }
          puVar11 = puVar5 + ((ulonglong)uVar18 - 1) * 0x16;
          puVar6 = puVar5;
          for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
            *(undefined8 *)puVar6 = *(undefined8 *)puVar11;
            puVar11 = puVar11 + 2;
            puVar6 = puVar6 + 2;
          }
          puVar12 = local_a0;
          puVar11 = puVar5 + ((ulonglong)uVar18 - 1) * 0x16;
          for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
            *(undefined8 *)puVar11 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar11 = puVar11 + 2;
          }
          uVar21 = (ulonglong)uVar18 - 1;
          if (uVar18 != 2) {
            do {
              iVar8 = 0;
              iVar17 = 1;
              iVar2 = 0;
              do {
                iVar8 = iVar8 + 2;
                iVar16 = iVar17;
                if (((longlong)iVar8 < (longlong)uVar21) &&
                   (puVar5[(longlong)iVar17 * 0x16] <= puVar5[(longlong)iVar8 * 0x16])) {
                  iVar16 = iVar8;
                }
                if (puVar5[(longlong)iVar16 * 0x16] <= puVar5[(longlong)iVar2 * 0x16]) break;
                puVar11 = puVar5 + (longlong)iVar2 * 0x16;
                puVar12 = local_a0;
                for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
                  *puVar12 = *(undefined8 *)puVar11;
                  puVar11 = puVar11 + 2;
                  puVar12 = puVar12 + 1;
                }
                puVar11 = puVar5 + (longlong)iVar16 * 0x16;
                puVar6 = puVar5 + (longlong)iVar2 * 0x16;
                for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
                  *(undefined8 *)puVar6 = *(undefined8 *)puVar11;
                  puVar11 = puVar11 + 2;
                  puVar6 = puVar6 + 2;
                }
                puVar12 = local_a0;
                puVar11 = puVar5 + (longlong)iVar16 * 0x16;
                for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
                  *(undefined8 *)puVar11 = *puVar12;
                  puVar12 = puVar12 + 1;
                  puVar11 = puVar11 + 2;
                }
                iVar8 = iVar16 * 2;
                iVar17 = iVar16 * 2 + 1;
                iVar2 = iVar16;
              } while ((longlong)iVar17 < (longlong)uVar21);
              puVar11 = puVar5;
              puVar12 = local_a0;
              for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
                *puVar12 = *(undefined8 *)puVar11;
                puVar11 = puVar11 + 2;
                puVar12 = puVar12 + 1;
              }
              puVar11 = puVar5 + (uVar21 - 1) * 0x16;
              puVar6 = puVar5;
              for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
                *(undefined8 *)puVar6 = *(undefined8 *)puVar11;
                puVar11 = puVar11 + 2;
                puVar6 = puVar6 + 2;
              }
              puVar12 = local_a0;
              puVar11 = puVar5 + (uVar21 - 1) * 0x16;
              for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
                *(undefined8 *)puVar11 = *puVar12;
                puVar12 = puVar12 + 1;
                puVar11 = puVar11 + 2;
              }
              bVar22 = 2 < uVar21;
              uVar21 = uVar21 - 1;
            } while (bVar22);
          }
        }
      }
LAB_1488e94f1:
      plVar7 = plVar7 + -3;
    } while (&local_3a8 <= plVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001488e91fb:
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar12 = *(undefined8 *)puVar10;
    puVar10 = puVar10 + 2;
    puVar12 = puVar12 + 1;
  }
  puVar10 = puVar14;
  puVar9 = puVar5;
  for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)puVar9 = *(undefined8 *)puVar10;
    puVar10 = puVar10 + 2;
    puVar9 = puVar9 + 2;
  }
  puVar12 = local_a0;
  puVar10 = puVar14;
  for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)puVar10 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar10 = puVar10 + 2;
  }
  iVar8 = iVar8 + -1;
  puVar15 = puVar15 + -0x2c;
  if ((longlong)puVar20 - (longlong)puVar13 < (longlong)puVar6 - (longlong)puVar19) {
    if (puVar4 < puVar11) {
      *plVar7 = (longlong)puVar4;
      plVar7[1] = (longlong)puVar11;
      *(int *)(plVar7 + 2) = iVar8;
      plVar7 = plVar7 + 3;
    }
    puVar19 = puVar5;
    if (puVar14 <= puVar5 + 0x16) goto LAB_1488e94f1;
  }
  else {
    if (puVar5 + 0x16 < puVar14) {
      *plVar7 = (longlong)puVar5;
      plVar7[1] = (longlong)puVar15;
      *(int *)(plVar7 + 2) = iVar8;
      plVar7 = plVar7 + 3;
    }
    puVar5 = puVar4;
    puVar15 = puVar11;
    puVar20 = puVar11;
    if (puVar11 <= puVar4) goto LAB_1488e94f1;
  }
  iVar2 = (int)((ulonglong)((longlong)puVar20 - (longlong)puVar19) >> 3) * -0x45d1745d;
  uVar18 = iVar2 + 1;
  puVar11 = puVar15;
  puVar6 = puVar20;
  puVar13 = puVar19;
  if (iVar8 == 0) goto LAB_1488e92a6;
  goto LAB_1488e9134;
}



// FUNCTION 1488e952c FUN_1488e952c body=108 status=ok
// SIG undefined FUN_1488e952c(void)

undefined8 * FUN_1488e952c(longlong param_1,undefined8 *param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar3 = (longlong)*(int *)(param_1 + 0x48) * 0x18;
    do {
      lVar1 = FUN_1412ba9fc(lVar2);
      if ((*(int *)(lVar1 + 8) == *param_3) && (*(int *)(lVar1 + 0x10) == param_3[2])) {
        if (lVar2 != 0) {
          FUN_1488e9598(lVar2,param_2);
          return param_2;
        }
        break;
      }
      lVar2 = lVar2 + 0x18;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1488e9598 FUN_1488e9598 body=88 status=ok
// SIG undefined FUN_1488e9598(void)

undefined8 * FUN_1488e9598(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar3 = *param_1;
  plVar4 = (longlong *)param_1[1];
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
  return param_2;
}



// FUNCTION 1488e95f0 FUN_1488e95f0 body=226 status=ok
// SIG undefined FUN_1488e95f0(void)

longlong FUN_1488e95f0(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1488e96d4(param_1 + 0x58,&local_58);
  lVar1 = local_58;
  lVar6 = (longlong)(int)uStack_50;
  if (lVar6 == 0) {
    lVar4 = 0;
  }
  else {
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar1 + lVar5);
      if (lVar4 != 0) {
        if (*param_2 != 0) {
          param_2[2] = 0;
        }
        puVar3 = *(undefined4 **)(lVar4 + 8);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = &DAT_14c9485f0;
        }
        FUN_1447325ac(puVar3,&local_60,1);
        plVar2 = (longlong *)FUN_144a8232a(param_2);
        if (local_60 == *plVar2) goto LAB_1488e9698;
      }
      lVar5 = lVar5 + 8;
    } while (lVar6 * 8 != lVar5);
    lVar4 = 0;
  }
LAB_1488e9698:
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 1488e96d4 FUN_1488e96d4 body=672 status=ok
// SIG undefined FUN_1488e96d4(void)

void FUN_1488e96d4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((longlong)(int)param_1[1] != 0) {
    lVar11 = *param_1;
    lVar12 = (longlong)(int)param_1[1] * 0x58 + lVar11;
    do {
      if (*(char *)(lVar11 + 4) == '\x01') {
        if ((*(longlong *)(lVar11 + 0x20) != 0) && ((longlong)*(int *)(lVar11 + 0x30) != 0)) {
          lVar6 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar11 + 0x28) + lVar6) != 0) {
              local_90 = *(undefined8 *)(lVar11 + 0x40);
              FUN_1446dcdd4(&local_88);
              lVar6 = FUN_14189db1a(&local_88);
              if (local_70 != 0) {
                FUN_1400020a8();
              }
              if (lVar6 != 0) {
                local_88 = 0;
                lStack_80 = 0;
                FUN_14891a442(lVar6,lVar11 + 0x18,*(undefined1 *)(lVar11 + 0x38),&local_88);
                lVar6 = local_88;
                lVar8 = (longlong)(int)lStack_80;
                if (lVar8 != 0) {
                  lVar10 = 0;
                  do {
                    lVar2 = param_2[1];
                    uVar4 = (int)lVar2 + 1;
                    *(uint *)(param_2 + 1) = uVar4;
                    if (*(uint *)((longlong)param_2 + 0xc) < uVar4) {
                      FUN_1406b7634(param_2);
                    }
                    *(undefined8 *)(*param_2 + (longlong)(int)lVar2 * 8) =
                         *(undefined8 *)(lVar6 + lVar10);
                    lVar10 = lVar10 + 8;
                  } while (lVar8 * 8 != lVar10);
                }
                if (local_88 != 0) {
                  FUN_1400020a8(local_88);
                }
              }
              break;
            }
            lVar6 = lVar6 + 8;
          } while ((longlong)*(int *)(lVar11 + 0x30) * 8 != lVar6);
        }
      }
      else if ((*(char *)(lVar11 + 4) == '\0') && ((longlong)*(int *)(lVar11 + 0x10) != 0)) {
        plVar9 = *(longlong **)(lVar11 + 8);
        plVar7 = plVar9 + (longlong)*(int *)(lVar11 + 0x10) * 3;
        do {
          lStack_80 = 0;
          local_78 = 0;
          local_88 = *plVar9;
          uVar5 = FUN_14477b664(plVar9[1]);
          lStack_80 = FUN_14477b664(uVar5);
          local_78 = plVar9[2];
          if (lStack_80 == 0) {
            uVar5 = FUN_14060ed7a();
            lStack_80 = FUN_14477b664(uVar5);
          }
          if (((local_78 == 0) && (local_78 = 0, lStack_80 != 0)) && (local_88 != 0)) {
            plVar1 = *(longlong **)(lStack_80 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
              local_78 = 0;
            }
            else {
              uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
              local_78 = FUN_144aff482(uVar5);
            }
          }
          lVar8 = local_78;
          lVar6 = param_2[1];
          uVar4 = (int)lVar6 + 1;
          *(uint *)(param_2 + 1) = uVar4;
          if (*(uint *)((longlong)param_2 + 0xc) < uVar4) {
            FUN_1406b7634(param_2);
          }
          *(longlong *)(*param_2 + (longlong)(int)lVar6 * 8) = lVar8;
          plVar9 = plVar9 + 3;
        } while (plVar9 != plVar7);
      }
      lVar11 = lVar11 + 0x58;
    } while (lVar11 != lVar12);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488e9976 FUN_1488e9976 body=626 status=ok
// SIG undefined FUN_1488e9976(void)

ulonglong FUN_1488e9976(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  void *pvVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  longlong *plVar9;
  undefined7 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = (void *)0x0;
  local_58 = *(int *)(param_2 + 1);
  lVar11 = (longlong)local_58;
  pvVar2 = (void *)*param_2;
  if (lVar11 == 0) {
    local_54 = 0;
    local_48 = 0;
  }
  else {
    FUN_14878a604(&local_60,local_58,0);
    memcpy(local_60,pvVar2,lVar11 << 3);
    pvVar2 = local_60;
    local_48 = local_58;
    lVar11 = (longlong)local_58;
    local_50 = (void *)0x0;
    if (lVar11 != 0) {
      FUN_14878a604(&local_50,local_58,0);
      memcpy(local_50,pvVar2,lVar11 << 3);
      goto LAB_1488e99cd;
    }
  }
  local_50 = (void *)0x0;
  local_44 = 0;
LAB_1488e99cd:
  pvVar2 = local_50;
  local_40 = (void *)0x0;
  lVar11 = (longlong)local_48;
  local_38 = local_48;
  if (lVar11 == 0) {
    local_34 = 0;
  }
  else {
    FUN_14878a604(&local_40,local_48,0);
    memcpy(local_40,pvVar2,lVar11 << 3);
  }
  lVar11 = *(longlong *)(param_1 + 0x58);
  if ((longlong)*(int *)(param_1 + 0x60) == 0) {
    bVar8 = 0;
    uVar10 = 0;
  }
  else {
    lVar12 = (longlong)*(int *)(param_1 + 0x60) * 0x58 + lVar11;
    do {
      if ((longlong)*(int *)(lVar11 + 0x10) != 0) {
        plVar9 = *(longlong **)(lVar11 + 8);
        plVar1 = plVar9 + (longlong)*(int *)(lVar11 + 0x10) * 3;
        do {
          lVar6 = plVar9[1];
          if (lVar6 == 0) {
            uVar5 = FUN_14060ed7a();
            lVar6 = FUN_14477b664(uVar5);
            plVar9[1] = lVar6;
          }
          lVar7 = plVar9[2];
          if (lVar7 == 0) {
            if (lVar6 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = 0;
              if (*plVar9 != 0) {
                plVar3 = *(longlong **)(lVar6 + 0xb8);
                if ((plVar3 == (longlong *)0x0) ||
                   (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
                  lVar7 = 0;
                }
                else {
                  uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
                  lVar7 = FUN_144aff482(uVar5,plVar9);
                }
                plVar9[2] = lVar7;
              }
            }
          }
          if ((longlong)local_38 != 0) {
            lVar6 = 0;
            do {
              if (*(longlong *)((longlong)local_40 + lVar6) == lVar7) {
                uVar10 = (undefined7)((ulonglong)plVar9 >> 8);
                bVar8 = 1;
                goto LAB_1488e9aed;
              }
              lVar6 = lVar6 + 8;
            } while ((longlong)local_38 * 8 != lVar6);
          }
          plVar9 = plVar9 + 3;
        } while (plVar9 != plVar1);
      }
      lVar11 = lVar11 + 0x58;
    } while (lVar11 != lVar12);
    bVar8 = 0;
    uVar10 = 0;
    lVar11 = lVar12;
  }
LAB_1488e9aed:
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar10,bVar8 & lVar11 != 0) & 0xffffffff;
}



// FUNCTION 1488e9bea FUN_1488e9bea body=688 status=ok
// SIG undefined FUN_1488e9bea(void)

undefined8 *
FUN_1488e9bea(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined8 local_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_FUN_14b4162e0;
  param_1[1] = param_2;
  lVar4 = param_3[1];
  if (lVar4 == 0) {
    uVar3 = FUN_14653326e();
    lVar4 = FUN_14477b664(uVar3);
    param_3[1] = lVar4;
  }
  lVar5 = param_3[2];
  if (((lVar5 == 0) && (lVar5 = 0, lVar4 != 0)) && (*param_3 != 0)) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if (plVar1 == (longlong *)0x0) {
LAB_1488e9e90:
      lVar5 = 0;
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 == '\0') goto LAB_1488e9e90;
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar5 = FUN_144aff482(uVar3,param_3);
    }
    param_3[2] = lVar5;
  }
  param_1[2] = lVar5;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_4 + 1);
  param_1[3] = *param_4;
  *(undefined8 *)((longlong)param_1 + 0x24) = *param_6;
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_6 + 1);
  uVar3 = param_5[1];
  param_1[6] = *param_5;
  param_1[7] = uVar3;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  puVar6 = &DAT_14c9485f0;
  if (*(undefined4 **)(lVar5 + 8) != (undefined4 *)0x0) {
    puVar6 = *(undefined4 **)(lVar5 + 8);
  }
  FUN_1447325ac(puVar6,&local_58,1);
  local_50[0] = 0;
  local_4c = 0;
  local_44 = 0;
  FUN_144976b9c(local_50,local_58);
  FUN_1488e9e9c(param_1,&DAT_14cb7c818,local_50);
  FUN_140e3418c(param_6,&local_60,1);
  local_50[0] = 0;
  local_4c = 0;
  local_44 = 0;
  FUN_144976b9c(local_50,local_60);
  FUN_1488e9e9c(param_1,&DAT_14cb7c830,local_50);
  FUN_1488e9e9c(param_1,&DAT_14cb7c848,param_5);
  lVar4 = param_3[1];
  if (lVar4 == 0) {
    uVar3 = FUN_14653326e();
    lVar4 = FUN_14477b664(uVar3);
    param_3[1] = lVar4;
  }
  lVar5 = param_3[2];
  if (((lVar5 != 0) || (lVar5 = 0, lVar4 == 0)) || (*param_3 == 0)) goto LAB_1488e9df3;
  plVar1 = *(longlong **)(lVar4 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_1488e9e97:
    lVar5 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_1488e9e97;
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar3,param_3);
  }
  param_3[2] = lVar5;
LAB_1488e9df3:
  FUN_1448c4dd6(param_1 + 0x1c,*(undefined4 *)(lVar5 + 0xa0),0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e9e9c FUN_1488e9e9c body=181 status=ok
// SIG undefined FUN_1488e9e9c(void)

void FUN_1488e9e9c(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [40];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = *param_2;
  local_58 = *(undefined4 *)(param_2 + 1);
  local_70 = *(undefined8 *)(param_1 + 0x18);
  local_68 = *(undefined4 *)(param_1 + 0x20);
  FUN_1488416a9(local_50,&local_70,&local_60,0);
  uVar1 = FUN_14479d2ce(*(longlong *)(param_1 + 8) + 0x38);
  lVar2 = FUN_14040226a(uVar1,0);
  if (lVar2 != 0) {
    FUN_140bc53f1(local_50,param_3,lVar2,0);
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488e9f52 FUN_1488e9f52 body=59 status=ok
// SIG undefined FUN_1488e9f52(void)

void FUN_1488e9f52(longlong param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  if (*param_2 == '\x02') {
    FUN_1488e9f8e(param_1,*(undefined4 *)(param_2 + 0xc));
  }
  FUN_1488e9e9c(param_1,&DAT_14cb7c848,param_2);
  return;
}



// FUNCTION 1488e9f8e FUN_1488e9f8e body=103 status=ok
// SIG undefined FUN_1488e9f8e(void)

void FUN_1488e9f8e(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  iVar1 = *(int *)(lVar2 + 0xa0);
  if (iVar1 != 0) {
    if (0 < iVar1) {
      uVar4 = (ulonglong)(param_2 - 1);
      uVar5 = 0;
      do {
        lVar3 = *(longlong *)(param_1 + 0xe0);
        if ((uVar4 == uVar5) && (*(char *)(lVar3 + uVar4) == '\0')) {
          *(undefined1 *)(lVar3 + uVar4) = 1;
        }
        else if (*(char *)(lVar3 + uVar5) == '\x01') {
          *(undefined1 *)(lVar3 + uVar5) = 0;
        }
        uVar5 = uVar5 + 1;
      } while ((longlong)uVar5 < (longlong)*(int *)(lVar2 + 0xa0));
    }
    if (*(int *)(param_1 + 0xe8) < param_2) {
      *(undefined1 *)(*(longlong *)(param_1 + 0xe0) + (longlong)(*(int *)(param_1 + 0xe8) + -1)) = 1
      ;
    }
  }
  return;
}



// FUNCTION 1488e9ff6 FUN_1488e9ff6 body=138 status=ok
// SIG undefined FUN_1488e9ff6(void)

void FUN_1488e9ff6(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_28 [4];
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x24) = *param_2;
  FUN_140e3418c(param_1 + 0x24,&local_30,1);
  local_28[0] = 0;
  local_24 = 0;
  local_1c = 0;
  FUN_144976b9c(local_28,local_30);
  FUN_1488e9e9c(param_1,&DAT_14cb7c830,local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ea082 FUN_1488ea082 body=263 status=ok
// SIG undefined FUN_1488ea082(void)

longlong * FUN_1488ea082(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1488ea18a(param_1,&local_38);
  if (local_30 != 0) {
    *param_2 = 0;
    param_2[1] = 0;
    FUN_1488e96d4(&local_38,param_2);
    FUN_1488ea224(param_1,&local_48,param_2,param_3);
    if (&local_48 == param_2) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_40 = (int)param_2[1];
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_48;
      local_48 = 0;
      *(int *)(param_2 + 1) = local_40;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_3c;
    }
    if (local_40 != 0) goto LAB_1488ea0bd;
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1488ea0bd:
  FUN_14878ac8e(local_38,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ea18a FUN_1488ea18a body=153 status=ok
// SIG undefined FUN_1488ea18a(void)

longlong * FUN_1488ea18a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = *(int *)(param_1 + 0xe8);
  if (0 < iVar2) {
    lVar4 = 0;
    lVar3 = 0;
    do {
      if (*(char *)(*(longlong *)(param_1 + 0xe0) + lVar3) == '\x01') {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x98);
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1488f043a(param_2,iVar2);
        }
        FUN_14878b016((longlong)iVar2 * 0x58 + *param_2,lVar1 + lVar4);
        iVar2 = *(int *)(param_1 + 0xe8);
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x58;
    } while (lVar3 < iVar2);
  }
  return param_2;
}



// FUNCTION 1488ea224 FUN_1488ea224 body=385 status=ok
// SIG undefined FUN_1488ea224(void)

longlong * FUN_1488ea224(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x10) + 0x50);
  if (cVar1 == '\x02') {
    *param_2 = 0;
    iVar2 = (int)param_3[1];
    _Src = (void *)*param_3;
    *(int *)(param_2 + 1) = iVar2;
    if ((longlong)iVar2 != 0) {
      FUN_1488f03e0(param_2,iVar2);
      memcpy((void *)*param_2,_Src,(longlong)iVar2 << 3);
LAB_1488ea26e:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
    }
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else if (cVar1 == '\x01') {
    uVar4 = *(undefined8 *)*param_3;
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 1;
    FUN_1488f03e0(param_2,1);
    *(undefined8 *)*param_2 = uVar4;
  }
  else {
    if (cVar1 != '\0') {
      *param_2 = 0;
      param_2[1] = 0;
      goto LAB_1488ea26e;
    }
    FUN_1488ea3a6(&local_68,(int)param_3[1] + -1,param_4);
    lVar5 = local_68;
    if ((longlong)local_60 != 0) {
      lVar8 = 0;
      do {
        uVar6 = uStack_50;
        iVar2 = *(int *)(lVar5 + lVar8);
        lVar3 = *param_3;
        lVar9 = (longlong)(int)uStack_50;
        uVar7 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar7);
        if (uStack_50._4_4_ < uVar7) {
          FUN_1406b7634(&local_58,uVar6 & 0xffffffff);
        }
        *(undefined8 *)(local_58 + lVar9 * 8) = *(undefined8 *)(lVar3 + (longlong)iVar2 * 8);
        lVar8 = lVar8 + 4;
      } while ((longlong)local_60 * 4 != lVar8);
    }
    if (local_68 != 0) {
      FUN_1400020a8(local_68);
    }
    *param_2 = local_58;
    *(int *)(param_2 + 1) = (int)uStack_50;
    *(uint *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ea3a6 FUN_1488ea3a6 body=242 status=ok
// SIG undefined FUN_1488ea3a6(void)

longlong * FUN_1488ea3a6(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_88 [36];
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 < param_3) {
    if (-1 < param_2) {
      iVar3 = 0;
      do {
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_1446f48e2(param_1,iVar1);
        }
        *(int *)(*param_1 + (longlong)iVar1 * 4) = iVar3;
        iVar3 = iVar3 + 1;
      } while (param_2 + 1 != iVar3);
    }
  }
  else if (0 < param_3) {
    do {
      uVar2 = rand();
      local_64 = (int)(((float)(uVar2 & 0x7fff) / 32767.0) * (float)(param_2 + 1));
      if (param_2 <= local_64) {
        local_64 = param_2;
      }
      FUN_1449e3bb0(param_1,&local_64);
    } while ((int)param_1[1] < param_3);
  }
  if ((local_60 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1488ea49a FUN_1488ea49a body=93 status=ok
// SIG undefined FUN_1488ea49a(void)

void FUN_1488ea49a(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  
  lVar1 = *param_1;
  puVar2 = *(undefined8 **)(lVar1 + (longlong)(int)param_2 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  iVar3 = (int)param_1[1];
  if (~param_2 + iVar3 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 8);
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~param_2 + iVar3) << 3);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  FUN_1488f07b6(param_1);
  return;
}



// FUNCTION 1488ea4f8 FUN_1488ea4f8 body=258 status=ok
// SIG undefined FUN_1488ea4f8(void)

void FUN_1488ea4f8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_40 [2];
  int local_38;
  int local_34 [2];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_144a659ac(param_2 + 0x10,local_34,1);
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x40);
    lVar2 = (longlong)*(int *)(param_1 + 0x48) << 3;
    do {
      lVar1 = *plVar3;
      if ((*(int *)(lVar1 + 0x18) == local_34[0]) && (*(int *)(lVar1 + 0x20) == local_2c)) {
        if ((lVar1 != 0 && plVar3 != (longlong *)0x0) &&
           (((lVar2 = FUN_145b08b9a(param_1), lVar2 != 0 &&
             (FUN_144a659ac(param_2 + 0x10,local_40,2), local_40[0] == DAT_14cb7c848)) &&
            (local_38 == DAT_14cb7c850)))) {
          local_58 = *(undefined4 *)(param_2 + 0x38);
          uStack_54 = *(undefined4 *)(param_2 + 0x3c);
          uStack_50 = *(undefined4 *)(param_2 + 0x40);
          uStack_4c = *(undefined4 *)(param_2 + 0x44);
          local_60 = local_2c;
          FUN_1488e86f0(param_1);
        }
        break;
      }
      plVar3 = plVar3 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488ea5fc FUN_1488ea5fc body=1114 status=ok
// SIG undefined FUN_1488ea5fc(void)

undefined8 *
FUN_1488ea5fc(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_1e8 [32];
  undefined8 *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined1 local_19c [12];
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined1 local_170 [4];
  undefined8 local_16c;
  undefined4 local_164;
  undefined1 local_160 [4];
  undefined8 local_15c;
  undefined8 uStack_154;
  undefined8 local_14c;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e0;
  undefined2 local_df;
  undefined1 local_dd;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 *local_b8;
  undefined4 local_b0;
  longlong local_90;
  undefined1 local_80 [40];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if (*(int *)(param_3 + 1) == 0) {
    uVar3 = *(undefined4 *)param_3;
  }
  else {
    uVar3 = FUN_144a78877(*(undefined4 *)param_3,*(int *)(param_3 + 1));
  }
  plVar1 = (longlong *)(param_4 + 0x90);
  puVar5 = (undefined8 *)FUN_1488f166c(plVar1,uVar3,param_3);
  local_c8 = *param_3;
  local_c0 = *(undefined4 *)(param_3 + 1);
  local_d8 = *param_5;
  local_d0 = *(undefined4 *)(param_5 + 1);
  FUN_1488416a9(local_80,&local_d8,&local_c8,2);
  uVar6 = FUN_14479d2ce(param_1 + 7);
  local_170[0] = 0;
  local_16c = 0;
  local_164 = 0;
  FUN_144976b9c(local_170,DAT_14cb858b0);
  lVar7 = FUN_14040226a(uVar6,0);
  if (lVar7 != 0) {
    FUN_140bc53f1(local_80,local_170,lVar7,0);
  }
  uVar6 = (**(code **)(*param_1 + 0x180))(param_1);
  plVar8 = (longlong *)FUN_1406f625c(uVar6);
  if ((plVar8 == (longlong *)0x0) || (lVar7 = (**(code **)(*plVar8 + 0x2b8))(plVar8), lVar7 == 0)) {
    plVar8 = (longlong *)0x0;
  }
  else {
    plVar8 = *(longlong **)(lVar7 + 0xe0);
  }
  uVar6 = (**(code **)(*param_1 + 0x180))(param_1);
  plVar9 = (longlong *)FUN_1406f625c(uVar6);
  uVar6 = (**(code **)(*plVar9 + 0x2b0))(plVar9);
  plVar9 = (longlong *)FUN_14039ffc6(uVar6);
  if ((plVar8 == (longlong *)0x0) || (plVar9 == (longlong *)0x0)) {
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
    *param_2 = *param_3;
  }
  else {
    local_170[0] = 0;
    local_16c = 0;
    local_164 = 0;
    local_160[0] = 0;
    local_15c = 0;
    uStack_154 = 0;
    local_14c = 0;
    local_140 = 0xc69c4000;
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    local_df = 1;
    local_dd = 0;
    local_dc = 0;
    local_180 = *param_3;
    local_178 = *(undefined4 *)(param_3 + 1);
    local_190 = *param_5;
    local_188 = *(undefined4 *)(param_5 + 1);
    local_b8 = (undefined8 *)0x0;
    local_b0 = 0;
    local_1c8 = puVar5;
    FUN_1446efa72(&local_b8,0,4,0x10);
    puVar5 = local_b8;
    local_b0 = 4;
    *local_b8 = &PTR_LAB_14b3e6310;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_b8[2] = lVar10;
    *local_b8 = &PTR_FUN_14b4171a0;
    local_b8[3] = 0;
    FUN_14485c47a(local_b8 + 3,param_1);
    puVar5[4] = param_1;
    puVar5[5] = local_180;
    *(undefined4 *)(puVar5 + 6) = local_178;
    *(undefined8 *)((longlong)puVar5 + 0x34) = local_190;
    *(undefined4 *)((longlong)puVar5 + 0x3c) = local_188;
    FUN_144a450dc((longlong)&uStack_154 + 4,&local_b8);
    FUN_1449db362(&local_b8);
    lVar7 = (**(code **)(*plVar8 + 8))(plVar8,param_3);
    if (lVar7 != 0) {
      FUN_144928b90(&local_b8,10);
      puVar5 = local_1c8 + 2;
      FUN_1411b8130(puVar5,&local_b8);
      if (local_90 != 0) {
        FUN_1400020a8();
      }
      uVar6 = FUN_143df09ba(lVar7);
      FUN_140fa600a(uVar6,local_19c);
      FUN_140fa5fd4(puVar5,local_19c);
      local_1a0 = *(undefined4 *)(param_3 + 1);
      local_1a8 = *param_3;
      FUN_140fa5ff8(puVar5);
      local_1b0 = DAT_14cb88980;
      local_1b8 = DAT_14cb88978;
      FUN_140fa5fe6(puVar5);
      if (*(int *)(param_3 + 1) != 0) {
        FUN_144a78877(*(undefined4 *)param_3,*(int *)(param_3 + 1));
      }
      iVar4 = FUN_1488f0e38(plVar1);
      lVar7 = 0;
      if (iVar4 != -1) {
        lVar7 = (longlong)iVar4 * 0x60 + *plVar1;
      }
      (**(code **)(*plVar9 + 0x18))(plVar9,&local_b8,lVar7 + 0x20,local_170);
      puVar5 = local_1c8;
      *local_1c8 = local_b8;
      FUN_1403a0728(local_160,&local_1c0);
      uVar2 = FUN_1405f6250(local_1c0);
      *(undefined1 *)(puVar5 + 1) = uVar2;
    }
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
    *param_2 = *param_3;
    FUN_1409838b8(local_170);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1488eaa58 FUN_1488eaa58 body=525 status=ok
// SIG undefined FUN_1488eaa58(void)

undefined8 *
FUN_1488eaa58(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  ulonglong local_a8;
  longlong *local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  int iStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_70 = DAT_14c948620;
  local_78 = DAT_14c948618;
  plVar1 = (longlong *)(param_4 + 0x90);
  lVar2 = param_4 + 0xa0;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  local_d0 = param_2;
  local_c8 = param_1;
  local_c0 = param_4;
  uStack_60 = lVar2;
  if (*(int *)(param_4 + 0xb8) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_4 + 0xb8);
  }
  uStack_80 = CONCAT44(uStack_4c,uStack_50);
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_98 = (undefined4)local_68;
  uStack_94 = local_68._4_4_;
  uStack_90 = (undefined4)uStack_60;
  uStack_8c = uStack_60._4_4_;
  local_a0 = plVar1;
  if ((iStack_54 != iVar7) || (uStack_60 != lVar2)) {
    do {
      puVar5 = (uint *)FUN_144a8232a((longlong)iStack_84 * 0x60 + *local_a0);
      uVar3 = *puVar5;
      puVar6 = *(undefined4 **)(param_3 + 8);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = &DAT_14c9485f0;
      }
      FUN_1447325ac(puVar6,&local_a8,1);
      if (uVar3 == local_a8) {
        *(undefined4 *)(local_d0 + 1) = local_70;
        *local_d0 = local_78;
        puVar8 = local_d0;
        goto LAB_1488eac2e;
      }
      local_88 = local_88 & ~uStack_94;
      FUN_1449c0562(&local_98);
    } while (local_a0 != plVar1 || (CONCAT44(uStack_8c,uStack_90) != lVar2 || iStack_84 != iVar7));
  }
  uVar4 = local_c8;
  FUN_1488eac66(local_c8,&local_78,param_3);
  puVar8 = local_d0;
  local_b0 = *(undefined4 *)(param_5 + 1);
  local_d8 = &local_b8;
  local_b8 = *param_5;
  FUN_1488ea5fc(uVar4,local_d0,&local_78,local_c0);
LAB_1488eac2e:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488eac66 FUN_1488eac66 body=1129 status=ok
// SIG undefined FUN_1488eac66(void)

undefined8 * FUN_1488eac66(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  longlong *plStack_70;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar10 = *(undefined4 **)(param_3 + 8);
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = &DAT_14c9485f0;
  }
  FUN_144a7660c(puVar10,&local_44,1);
  puVar10 = *(undefined4 **)(param_3 + 8);
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = &DAT_14c9485f0;
  }
  FUN_144a7660c(puVar10,&local_50,1);
  uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  plVar5 = (longlong *)FUN_145838d74(uVar4);
  if (plVar5 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = (longlong *)(**(code **)(*plVar5 + 0xc0))(plVar5);
  }
  if (*(char *)(param_3 + 0x750) == '\x01') {
    cVar3 = *(char *)(param_3 + 0x751);
    if (cVar3 != '\0') {
      uVar4 = FUN_14479d2ce(param_1 + 7);
      plVar7 = (longlong *)FUN_145725aea(uVar4,1);
      if (plVar7 != (longlong *)0x0) {
        lVar8 = FUN_1449f3324();
        if ((*(int *)(lVar8 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
            lVar8 + 0x30)) {
          lVar8 = (**(code **)(*plVar7 + 0x5e8))(plVar7);
          if (lVar8 != 0) {
            lVar9 = FUN_140082f10();
            if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
              FUN_14479d2ce(lVar8 + 0x4e0);
              if (cVar3 == '\x02') {
                lVar9 = (**(code **)(*plVar6 + 0x18))(plVar6,&local_44);
                if (lVar9 == 0) {
                  local_c8 = &local_78;
                  local_78 = 0;
                  plStack_70 = (longlong *)0x0;
                  local_d0 = &local_a0;
                  local_a0 = 0;
                  local_d8 = &local_98;
                  local_88 = DAT_14c8464f0;
                  local_98 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                  uStack_90 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                  local_a8 = 0;
                  (**(code **)(*plVar5 + 0x90))(plVar5,&local_5c,&local_44);
                  plVar6 = plStack_70;
                  if (plStack_70 != (longlong *)0x0) {
                    LOCK();
                    plVar2 = plStack_70 + 1;
                    *(int *)plVar2 = (int)*plVar2 + -1;
                    UNLOCK();
                    if ((int)*plVar2 == 0) {
                      (**(code **)*plStack_70)(plStack_70);
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
              else if (cVar3 != '\x01') goto LAB_1488ead90;
              local_78 = 0;
              plStack_70 = (longlong *)0x0;
              lVar9 = *(longlong *)(plVar7[0x7c] + 0x1c8);
              if (lVar9 == 0) {
                local_88 = DAT_14c8464f0;
                local_98 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                uStack_90 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
              }
              else {
                local_98 = *(undefined8 *)(lVar9 + 0x260);
                uStack_90 = *(undefined8 *)(lVar9 + 0x268);
                local_88 = *(undefined8 *)(lVar9 + 0x270);
              }
              FUN_148911b3e(&local_a0,lVar8);
              local_c8 = &local_78;
              local_d0 = (undefined8 *)&DAT_14cb86708;
              local_d8 = &local_98;
              (**(code **)(*plVar5 + 0x90))(plVar5,&local_5c,&local_44,&local_a0);
              plVar5 = plStack_70;
              local_48 = local_54;
              local_50 = local_5c;
              if (plStack_70 != (longlong *)0x0) {
                LOCK();
                plVar6 = plStack_70 + 1;
                *(int *)plVar6 = (int)*plVar6 + -1;
                UNLOCK();
                if ((int)*plVar6 == 0) {
                  (**(code **)*plStack_70)(plStack_70);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar5 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar5 + 0x10))(plVar5);
                  }
                }
              }
              goto LAB_1488ead90;
            }
          }
        }
      }
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = 0;
      goto LAB_1488eada5;
    }
    local_c8 = &local_78;
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    local_d8 = &local_98;
    local_88 = DAT_14c8464f0;
    local_98 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_90 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_a0 = 0;
    local_d0 = (undefined8 *)&DAT_14cb86708;
    (**(code **)(*plVar5 + 0x90))(plVar5,&local_5c,&local_44);
    plVar5 = plStack_70;
    local_48 = local_54;
    local_50 = local_5c;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_70 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    FUN_14029e8dd(0,0);
  }
  else {
    lVar8 = (**(code **)(*plVar5 + 8))(plVar5,&local_44);
    if (lVar8 == 0) {
      local_b0 = local_3c;
      local_b8 = local_44;
      FUN_14189c6e8(plVar6,&local_b8,&DAT_14cb86708);
    }
    else {
      FUN_1457b7554(lVar8);
    }
  }
LAB_1488ead90:
  *(undefined4 *)(param_2 + 1) = local_48;
  *param_2 = local_50;
LAB_1488eada5:
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488eb0d0 FUN_1488eb0d0 body=213 status=ok
// SIG undefined FUN_1488eb0d0(void)

void FUN_1488eb0d0(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  local_48 = 0;
  FUN_1458c54da(&local_28,0,*(undefined4 *)(param_1 + 0x60),0);
  FUN_140212f8e(&local_30);
  lVar1 = ((local_30 / 864000000000) * 864000000000 - local_30) + local_28;
  if (lVar1 < 0) {
    local_40 = 0;
    local_48 = 0;
    FUN_1458c54da(&local_28,0,0x18,0);
    lVar1 = local_28 - lVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(CONCAT44((int)((ulonglong)((double)lVar1 / 10000000.0) >> 0x20),
                         (float)((double)lVar1 / 10000000.0)));
}



// FUNCTION 1488eb1d4 FUN_1488eb1d4 body=184 status=ok
// SIG undefined FUN_1488eb1d4(void)

void FUN_1488eb1d4(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  FUN_144837e54(param_2);
  plVar2 = *(longlong **)(param_2 + 0x30);
  if (plVar2 == (longlong *)0x0) {
    puVar1 = (undefined8 *)FUN_1488ee382();
    memset(puVar1 + 1,0,0xa0);
    *puVar1 = &PTR_FUN_14b364b10;
    FUN_140c13428(puVar1 + 3);
    *(undefined1 *)(puVar1 + 7) = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *(undefined1 *)(puVar1 + 10) = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *(undefined1 *)(puVar1 + 0xd) = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    *(undefined1 *)(puVar1 + 0x12) = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    *(undefined8 **)(param_2 + 0x30) = puVar1;
    FUN_1407d81c6(param_1,param_2);
    plVar2 = *(longlong **)(param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x40) != *(int *)(param_2 + 0x44)) {
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_2 + 0x44);
  }
  return;
}



// FUNCTION 1488eb292 FUN_1488eb292 body=442 status=ok
// SIG undefined FUN_1488eb292(void)

void FUN_1488eb292(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
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
  plVar1 = (longlong *)(param_1 + 0x2e8);
  lVar4 = param_1 + 0x2f8;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar4;
  if (*(int *)(param_1 + 0x310) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar5 = *(int *)(param_1 + 0x310);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar5) || (uStack_60 != lVar4)) {
    do {
      lVar2 = *(longlong *)(*local_90 + 0x10 + (longlong)iStack_74 * 0x20);
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x30) == 0)) {
        plVar6 = (longlong *)(*local_90 + (longlong)iStack_74 * 0x20 + 0x10);
        puVar3 = (undefined8 *)FUN_1488ee382();
        memset(puVar3 + 1,0,0xa0);
        *puVar3 = &PTR_FUN_14b364b10;
        FUN_140c13428(puVar3 + 3);
        *(undefined1 *)(puVar3 + 7) = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        *(undefined1 *)(puVar3 + 10) = 0;
        puVar3[0xb] = 0;
        puVar3[0xc] = 0;
        *(undefined1 *)(puVar3 + 0xd) = 0;
        puVar3[0xe] = 0;
        puVar3[0xf] = 0;
        puVar3[0x10] = 0;
        puVar3[0x11] = 0;
        *(undefined1 *)(puVar3 + 0x12) = 0;
        puVar3[0x13] = 0;
        puVar3[0x14] = 0;
        *(undefined8 **)(*plVar6 + 0x30) = puVar3;
        FUN_1407d81c6(param_1,*plVar6);
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar4 || iStack_74 != iVar5));
  }
  lVar4 = FUN_14891b89c();
  if (lVar4 != 0) {
    thunk_FUN_14164bb12(lVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488eb45c FUN_1488eb45c body=65 status=ok
// SIG undefined FUN_1488eb45c(void)

undefined8 * FUN_1488eb45c(undefined8 *param_1,longlong param_2)

{
  *param_1 = &DAT_14a171d50;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  FUN_1406022fe(param_1 + 2,param_2 + 0x10);
  *param_1 = &PTR_FUN_14b416350;
  return param_1;
}



// FUNCTION 1488eb49e FUN_1488eb49e body=389 status=ok
// SIG undefined FUN_1488eb49e(void)

longlong * FUN_1488eb49e(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  longlong local_78;
  int local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = FUN_1488f639c();
  FUN_1488f607e(uVar4,&local_78,param_2,1);
  *param_1 = 0;
  param_1[1] = 0;
  if (local_70 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_70);
  }
  if (local_70 != 0) {
    FUN_1488f1a0c(param_1);
    lVar2 = local_78;
    if ((longlong)local_70 != 0) {
      lVar9 = 0;
      do {
        uVar4 = *(undefined8 *)(lVar2 + lVar9);
        local_58 = 0;
        uVar5 = FUN_146533f80();
        lVar6 = FUN_14477b664(uVar5);
        uVar5 = FUN_146533f80();
        uVar7 = FUN_146533f80();
        FUN_1402d1bfa(&local_50,uVar7,uVar4);
        lVar3 = local_50;
        local_68 = local_50;
        uVar7 = FUN_146533f80();
        lVar8 = FUN_141459e9e(uVar5,uVar7);
        if (lVar6 != lVar8) {
          local_58 = 0;
        }
        uVar5 = FUN_14477b664(lVar8);
        local_60 = FUN_14477b664(uVar5);
        if (local_60 != 0 && lVar3 != 0) {
          local_58 = uVar4;
        }
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_1488f1abc(param_1,iVar1);
        }
        FUN_1488f1a74((longlong)iVar1 * 0x18 + *param_1,&local_68);
        lVar9 = lVar9 + 8;
      } while ((longlong)local_70 * 8 != lVar9);
    }
  }
  if (local_78 != 0) {
    FUN_1400020a8(local_78);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1488eb626 FUN_1488eb626 body=133 status=ok
// SIG undefined FUN_1488eb626(void)

undefined8 FUN_1488eb626(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145d632de(param_1,local_30);
  FUN_140056680(local_40,L"MissionTaskChannel: ");
  FUN_1401c7f3e(param_2,local_40,local_30);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488eb6ac FUN_1488eb6ac body=26 status=ok
// SIG undefined FUN_1488eb6ac(void)

void FUN_1488eb6ac(undefined8 param_1)

{
  FUN_140893b6e();
  FUN_1488eb6c6(param_1);
  return;
}



// FUNCTION 1488eb6c6 FUN_1488eb6c6 body=207 status=ok
// SIG undefined FUN_1488eb6c6(void)

void FUN_1488eb6c6(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x180))();
  if (lVar3 == 0) {
    FUN_1488eb838(&local_30,param_1);
  }
  else {
    FUN_14485c47a(param_1 + 0x6c,*(undefined8 *)(lVar3 + 0x38));
    plVar4 = (longlong *)
             FUN_1488f1dd4((uint)((ulonglong)*(undefined8 *)(param_1 + 0x6c) >> 0x20) ^
                           (uint)*(undefined8 *)(param_1 + 0x6c),param_1 + 0x6c);
    local_30 = 0;
    FUN_14485c47a(&local_30,param_1);
    iVar1 = (int)plVar4[1];
    *(uint *)(plVar4 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar4 + 0xc) < iVar1 + 1U) {
      FUN_1488f245c(plVar4,iVar1);
    }
    *(undefined8 *)(*plVar4 + (longlong)iVar1 * 8) = local_30;
    uVar2 = FUN_14490d72a(lVar3);
    *(undefined4 *)(param_1 + 0x68) = uVar2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488eb796 FUN_1488eb796 body=32 status=ok
// SIG undefined FUN_1488eb796(void)

void FUN_1488eb796(undefined8 param_1,undefined4 param_2)

{
  FUN_145ed1ca2();
  FUN_1414df1a6(param_1,param_2);
  return;
}



// FUNCTION 1488eb7b6 FUN_1488eb7b6 body=99 status=ok
// SIG undefined FUN_1488eb7b6(void)

void FUN_1488eb7b6(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x180))();
  lVar2 = FUN_1406f625c(uVar1);
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x30), lVar2 != 0)) {
    if (*(int *)(param_1 + 0x68) - 1U < 2) {
      FUN_143dd91e2(lVar2,param_2);
      return;
    }
    if (*(int *)(param_1 + 0x68) == 3) {
      FUN_143dd8bc6(lVar2,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1488eb81a FUN_1488eb81a body=30 status=ok
// SIG undefined FUN_1488eb81a(void)

undefined8 FUN_1488eb81a(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  *(byte *)(param_3 + 0xf4) = *(byte *)(param_3 + 0xf4) | 0x10;
  FUN_1408f10c6();
  return param_2;
}



// FUNCTION 1488eb838 FUN_1488eb838 body=239 status=ok
// SIG undefined FUN_1488eb838(void)

undefined8 FUN_1488eb838(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14a1e1a40;
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
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14b417210;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_1488eb928;
  FUN_141211c46(&DAT_14c9647a0,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488eb928 FUN_1488eb928 body=60 status=ok
// SIG undefined FUN_1488eb928(void)

void FUN_1488eb928(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x180))();
  if (lVar1 == 0) {
    return;
  }
  FUN_140457ffc(&DAT_14c9647a0,param_1);
  FUN_1488eb6c6(param_1);
  return;
}



// FUNCTION 1488eb964 FUN_1488eb964 body=180 status=ok
// SIG undefined FUN_1488eb964(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1488eb964(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb85b18) {
    FUN_144b3d300(&DAT_14cb85b18);
    if (DAT_14cb85b18 == -1) {
      _DAT_14cb85ac8 = 0;
      _DAT_14cb85ad0 = 0;
      _DAT_14cb85aa8 = 0;
      uRam000000014cb85ab0 = 0;
      _DAT_14cb85ad4 = 0xffffffff00000080;
      _DAT_14cb85adc = 0;
      DAT_14cb85ae8 = 0;
      _DAT_14cb85af0 = 0;
      DAT_14cb85af8 = 0;
      uRam000000014cb85b00 = 0;
      _DAT_14cb85b08 = 0;
      InitializeSRWLock((PSRWLOCK)&DAT_14cb85b10);
      atexit(FUN_143dd92ad);
      _Init_thread_footer(&DAT_14cb85b18);
      return;
    }
  }
  return;
}



// FUNCTION 1488eba18 FUN_1488eba18 body=50 status=ok
// SIG undefined FUN_1488eba18(void)

undefined8 * FUN_1488eba18(undefined8 *param_1)

{
  FUN_1488eb964();
  param_1[1] = &DAT_14cb85aa8;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b416350;
  return param_1;
}



// FUNCTION 1488eba4a FUN_1488eba4a body=8 status=ok
// SIG undefined FUN_1488eba4a(void)

undefined8 * FUN_1488eba4a(void)

{
  return &DAT_14cb85b20;
}



// FUNCTION 1488eba52 FUN_1488eba52 body=62 status=ok
// SIG undefined FUN_1488eba52(void)

void FUN_1488eba52(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140f67268(&DAT_14cb85b80);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  FUN_1487841ac(puVar1);
  return;
}



// FUNCTION 1488eba90 FUN_1488eba90 body=44 status=ok
// SIG undefined FUN_1488eba90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1488eba90(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb85b8c = _DAT_14cb85b8c + -1;
  *param_1 = DAT_14cb85b80;
  DAT_14cb85b80 = param_1;
  return;
}



// FUNCTION 1488ebabc FUN_1488ebabc body=62 status=ok
// SIG undefined FUN_1488ebabc(void)

void FUN_1488ebabc(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_1487841ac(param_1);
  return;
}



// FUNCTION 1488ebb10 FUN_1488ebb10 body=485 status=ok
// SIG undefined FUN_1488ebb10(void)

longlong FUN_1488ebb10(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined1 auStack_f8 [32];
  int *local_d8;
  undefined1 *local_d0;
  undefined4 local_c0;
  int local_b8 [2];
  int local_b0;
  int local_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_8c;
  undefined1 local_88 [24];
  longlong local_70;
  longlong local_58;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = FUN_1488f639c();
  if (lVar2 != 0) {
    if (*(int *)(param_1 + 4) != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_f8);
    }
    FUN_144a659ac(param_1,&local_ac,0);
    FUN_144a659ac(param_1,local_b8,1);
    local_c0 = local_a4;
    FUN_1448075d0(local_88);
    lVar3 = FUN_14060eaf6(local_88);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if ((lVar3 != 0) && ((longlong)*(int *)(lVar3 + 0x88) != 0)) {
      piVar4 = *(int **)(lVar3 + 0x80);
      lVar3 = (longlong)*(int *)(lVar3 + 0x88) * 0x30;
      lVar6 = 0;
      do {
        if ((*piVar4 == local_b8[0]) && (piVar4[2] == local_b0)) {
          if ((piVar4 == (int *)0x0) || (lVar3 = FUN_1488ebd0c(), lVar3 == 0)) goto LAB_1488ebc0f;
          lVar6 = lVar3 + 0x38;
          puVar5 = &DAT_14c9485f0;
          if (*(undefined4 **)(lVar3 + 0x40) != (undefined4 *)0x0) {
            puVar5 = *(undefined4 **)(lVar3 + 0x40);
          }
          cVar1 = FUN_144aff496(puVar5);
          if (cVar1 != '\0') {
            local_98 = 0;
            if (local_ac == 0) {
              local_98 = local_a4;
            }
            local_d8 = &local_a0;
            local_a0 = local_ac;
            local_9c = uStack_a8;
            local_8c = local_b0;
            local_d0 = local_88;
            FUN_148845822(local_88);
            FUN_14686d0d2(local_48,local_88);
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            FUN_1400b066e(lVar2,lVar6,local_48);
            if (local_30 != 0) {
              FUN_1400020a8();
            }
          }
          break;
        }
        piVar4 = piVar4 + 0xc;
        lVar3 = lVar3 + -0x30;
      } while (lVar3 != 0);
      goto LAB_1488ebc11;
    }
  }
LAB_1488ebc0f:
  lVar6 = 0;
LAB_1488ebc11:
  if ((local_20 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 1488ebd0c FUN_1488ebd0c body=82 status=ok
// SIG undefined FUN_1488ebd0c(void)

longlong * FUN_1488ebd0c(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)FUN_1409c4b9a();
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1465314fc();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1488ebd5e FUN_1488ebd5e body=41 status=ok
// SIG undefined FUN_1488ebd5e(void)

void FUN_1488ebd5e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,1);
  return;
}



// FUNCTION 1488ebd87 FUN_1488ebd87 body=237 status=ok
// SIG undefined FUN_1488ebd87(void)

longlong FUN_1488ebd87(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  int local_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    FUN_1408226d0(param_2,&local_48,1);
    iVar1 = local_40 + -1;
    if (local_40 == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2(&local_38,CONCAT44(uStack_44,local_48),iVar1);
    if (CONCAT44(uStack_44,local_48) != 0) {
      FUN_1400020a8();
    }
    FUN_14021219d(param_1,&local_38);
  }
  else {
    FUN_14021219d(param_1,&local_38);
    uStack_44 = 0;
    local_40 = 0;
    puVar2 = local_38;
    if ((int)uStack_30 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_1405f0d29(&local_48,puVar2,0);
    *param_2 = CONCAT44(uStack_44,local_48);
    *(int *)(param_2 + 1) = local_40;
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1488ebe76 FUN_1488ebe76 body=360 status=ok
// SIG undefined FUN_1488ebe76(void)

void FUN_1488ebe76(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  longlong local_c8 [2];
  longlong *local_b8;
  longlong local_a8 [4];
  undefined8 local_88;
  undefined2 uStack_80;
  undefined6 uStack_7e;
  undefined2 uStack_78;
  undefined8 uStack_76;
  undefined1 local_68 [40];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_d0 = *(undefined4 *)(param_2 + 1);
  local_d8 = *param_2;
  local_e8 = *(undefined8 *)(param_1 + 0x2c);
  local_e0 = *(undefined4 *)(param_1 + 0x34);
  local_f8 = *(undefined8 *)(param_1 + 0x20);
  local_f0 = *(undefined4 *)(param_1 + 0x28);
  FUN_14884572d(local_68);
  local_c8[0] = 0;
  local_b8 = (longlong *)0x0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_7e = 0;
  uStack_78 = 0;
  uStack_76 = 0;
  if (*(int *)(param_2 + 1) != 0) {
    FUN_144a78877(*(undefined4 *)param_2,*(int *)(param_2 + 1));
  }
  iVar1 = FUN_1488f280a((longlong *)(param_1 + 0x40));
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x40),
     puVar3 = (undefined8 *)(lVar2 + 0x10), puVar3 != (undefined8 *)0x0 && lVar2 != 0)) {
    local_88 = *puVar3;
  }
  uVar4 = FUN_14479d2ce(*(longlong *)(param_1 + 0x18) + 0x110);
  lVar2 = FUN_14040226a(uVar4,0);
  if ((lVar2 != 0) && (FUN_140bc53f1(local_68,param_3,lVar2,local_c8), local_c8[0] != 0)) {
    plVar5 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar5 = local_a8;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ebfe0 FUN_1488ebfe0 body=7 status=ok
// SIG undefined FUN_1488ebfe0(void)

undefined1 FUN_1488ebfe0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x118);
}



// FUNCTION 1488ebfe8 FUN_1488ebfe8 body=223 status=ok
// SIG undefined FUN_1488ebfe8(void)

undefined1 * FUN_1488ebfe8(longlong param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [40];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = *(undefined4 *)(param_3 + 1);
  local_60 = *param_3;
  local_70 = *(undefined8 *)(param_1 + 0x2c);
  local_68 = *(undefined4 *)(param_1 + 0x34);
  local_80 = *(undefined8 *)(param_1 + 0x20);
  local_78 = *(undefined4 *)(param_1 + 0x28);
  FUN_14884572d(local_50);
  *param_2 = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  uVar1 = FUN_14479d2ce(*(longlong *)(param_1 + 0x18) + 0x110);
  lVar2 = FUN_14040226a(uVar1,0);
  if (lVar2 != 0) {
    FUN_14039fc7b(local_50,param_2,lVar2,0);
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ec0c8 FUN_1488ec0c8 body=737 status=ok
// SIG undefined FUN_1488ec0c8(void)

void FUN_1488ec0c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  uint local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 *local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_1 = &PTR_LAB_14b4163e0;
  local_e0 = param_1 + 8;
  puVar1 = param_1 + 10;
  local_80 = 0x100000000;
  local_70 = 0xffffffff;
  iStack_6c = 0;
  local_68 = 0;
  iVar9 = 0;
  local_78 = puVar1;
  if (*(int *)(param_1 + 0xd) != 0) {
    FUN_1449c0562(&local_80);
    iVar9 = *(int *)(param_1 + 0xd);
  }
  local_90 = local_70;
  iStack_8c = iStack_6c;
  local_88 = local_68;
  local_84 = local_64;
  local_a0 = local_80;
  local_98 = local_78;
  local_a8 = local_e0;
  if ((iStack_6c != iVar9) || (local_78 != puVar1)) {
    do {
      lVar5 = *local_a8;
      lVar8 = (longlong)iStack_8c * 0x20;
      local_b0 = *(undefined4 *)(lVar5 + 8 + lVar8);
      local_b8 = *(undefined8 *)(lVar5 + lVar8);
      local_c8 = *(undefined8 *)((longlong)param_1 + 0x2c);
      local_c0 = *(undefined4 *)((longlong)param_1 + 0x34);
      local_d8 = param_1[4];
      local_d0 = *(undefined4 *)(param_1 + 5);
      FUN_14884572d(&local_80,&local_d8,&local_c8,&local_b8);
      uVar6 = FUN_14479d2ce(param_1[3] + 0x110);
      uVar3 = *(undefined8 *)(lVar5 + 0x10 + lVar8);
      lVar5 = FUN_14040226a(uVar6,0);
      if (lVar5 != 0) {
        FUN_140825b72(&local_80,uVar3,lVar5,0);
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      local_90 = local_90 & ~local_a0._4_4_;
      FUN_1449c0562(&local_a0);
    } while (local_a8 != local_e0 || (local_98 != puVar1 || iStack_8c != iVar9));
  }
  if ((param_1[0x12] != 0) && (lVar5 = (**(code **)(*(longlong *)param_1[3] + 0x180))(), lVar5 != 0)
     ) {
    puVar1 = param_1 + 0x12;
    if (*(longlong *)(lVar5 + 0x1f0) == 0) {
      puVar7 = (undefined8 *)(lVar5 + 0x458);
    }
    else {
      puVar7 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
    }
    uVar3 = *puVar7;
    lVar5 = FUN_144a61814(uVar3,puVar1);
    if (lVar5 != 0) {
      FUN_1405a424c(uVar3,*puVar1);
    }
    *puVar1 = 0;
  }
  plVar4 = (longlong *)param_1[0x1c];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  FUN_1488ec3aa(param_1 + 0x14);
  if (*(char *)((longlong)param_1 + 0x9c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1488ee3f4(local_e0);
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488ec3aa FUN_1488ec3aa body=53 status=ok
// SIG undefined FUN_1488ec3aa(void)

void FUN_1488ec3aa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar1 = param_1;
  }
  FUN_1488f27c6(lVar1,*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1488ec3e0 FUN_1488ec3e0 body=724 status=ok
// SIG undefined FUN_1488ec3e0(void)

ulonglong FUN_1488ec3e0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined8 **local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 *local_158;
  undefined4 local_150;
  undefined1 local_148 [4];
  undefined8 local_144;
  undefined4 local_13c;
  undefined1 local_138;
  undefined8 local_134;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined2 local_b7;
  undefined1 local_b5;
  int local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_84 [4];
  undefined1 local_80 [40];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_88 = *(undefined4 *)(param_2 + 1);
  local_90 = *param_2;
  local_a0 = *(undefined8 *)(param_1 + 0x2c);
  local_98 = *(undefined4 *)(param_1 + 0x34);
  local_b0 = *(undefined8 *)(param_1 + 0x20);
  local_a8 = *(undefined4 *)(param_1 + 0x28);
  FUN_14884572d(local_80);
  local_148[0] = 0;
  local_144 = 0;
  local_13c = 0;
  local_138 = 0;
  local_134 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  iStack_120 = 0;
  local_118 = 0xc69c4000;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_b7 = 1;
  local_b5 = 0;
  local_b4 = 0;
  local_170 = (undefined8 **)CONCAT44(local_170._4_4_,*(undefined4 *)(param_2 + 1));
  local_178 = (undefined8 *)*param_2;
  local_168 = 0;
  local_160 = 0;
  FUN_1488f286a(&local_168,param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  local_158 = (undefined8 *)0x0;
  local_150 = 0;
  FUN_1446efa72(&local_158,0,4,0x10);
  puVar2 = local_158;
  local_150 = 4;
  *local_158 = &PTR_LAB_14b3e6310;
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
  local_158[2] = lVar5;
  *local_158 = &PTR_FUN_14b4172f0;
  local_158[3] = 0;
  FUN_14485c47a(local_158 + 3,uVar3);
  *(undefined4 *)(puVar2 + 5) = local_170._0_4_;
  puVar2[4] = local_178;
  puVar2[6] = local_168;
  local_168 = 0;
  *(undefined4 *)(puVar2 + 7) = local_160;
  local_160 = 0;
  FUN_144a450dc(&uStack_128,&local_158);
  FUN_1449db362(&local_158);
  FUN_1449db362(&local_168);
  uVar3 = FUN_14479d2ce(*(longlong *)(param_1 + 0x18) + 0x110);
  lVar4 = FUN_14040226a(uVar3,0);
  if (lVar4 == 0) {
    local_b4 = 2;
  }
  else {
    FUN_140983ba6(local_80,lVar4,local_148);
    if (local_b4 == 1) {
      plVar1 = (longlong *)CONCAT44(uStack_124,uStack_128);
      if (plVar1 == (longlong *)0x0 || iStack_120 == 0) {
        local_158 = (undefined8 *)0x0;
      }
      else {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_158);
      }
      local_178 = param_2;
      local_170 = &local_158;
      FUN_1488f28ee(param_1 + 0x40,local_84);
      uVar6 = CONCAT71((int7)((ulonglong)(param_1 + 0x40) >> 8),1);
      goto LAB_1488ec5e9;
    }
  }
  uVar6 = 0;
LAB_1488ec5e9:
  FUN_1409838b8(local_148);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_3);
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ec6b6 FUN_1488ec6b6 body=22 status=ok
// SIG undefined FUN_1488ec6b6(void)

void FUN_1488ec6b6(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1488ebe76(uVar1,&DAT_14cb7d0b0,param_2);
  return;
}



// FUNCTION 1488ec6cc FUN_1488ec6cc body=47 status=ok
// SIG undefined FUN_1488ec6cc(void)

longlong * FUN_1488ec6cc(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  plVar2 = *(longlong **)(lVar1 + 0x38);
  *param_2 = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0x40);
  return param_2;
}



// FUNCTION 1488ec6fc FUN_1488ec6fc body=224 status=ok
// SIG undefined FUN_1488ec6fc(void)

void FUN_1488ec6fc(longlong *param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1488ec7de(param_1 + 0x14);
  plVar2 = (longlong *)param_1[0x19];
  if ((longlong *)param_1[0x19] == (longlong *)0x0) {
    plVar2 = param_1 + 0x14;
  }
  (**(code **)(*param_1 + 0x40))(param_1,local_30);
  FUN_140008f88(plVar2,local_30);
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if (*(char *)(param_1[7] + 0x48) == '\x01') {
    *(float *)(plVar2 + 2) = (float)*(int *)(param_1[7] + 0x4c);
    *(undefined1 *)((longlong)plVar2 + 0x14) = 1;
  }
  else if (*(char *)((longlong)plVar2 + 0x14) == '\x01') {
    *(undefined1 *)((longlong)plVar2 + 0x14) = 0;
  }
  *(undefined1 *)(plVar2 + 3) = 0;
  if (*(char *)(param_1[7] + 0x78) == '\x01') {
    if (param_1 + 0x13 != plVar2 + 4) {
      if (*(char *)((longlong)param_1 + 0x9c) == '\x01') {
        *(int *)(plVar2 + 4) = (int)param_1[0x13];
        uVar1 = 1;
      }
      else {
        if (*(char *)((longlong)plVar2 + 0x24) != '\x01') goto LAB_1488ec7a8;
        uVar1 = 0;
      }
      *(undefined1 *)((longlong)plVar2 + 0x24) = uVar1;
    }
  }
LAB_1488ec7a8:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ec7de FUN_1488ec7de body=121 status=ok
// SIG undefined FUN_1488ec7de(void)

void FUN_1488ec7de(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 < 1) {
    *(undefined4 *)(param_1 + 0x30) = 1;
    if ((uint)(*(int *)(param_1 + 0x34) - iVar1) < 1U - iVar1) {
      FUN_1488f2df0(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x28);
    if (*(longlong *)(param_1 + 0x28) == 0) {
      lVar2 = param_1;
    }
    FUN_1488f2db6(lVar2 + (longlong)iVar1 * 0x28,1U - iVar1);
    return;
  }
  if (iVar1 == 1) {
    return;
  }
  FUN_1488f2f10(param_1,iVar1 + -1);
  FUN_1488f2f6c(param_1);
  return;
}



// FUNCTION 1488ec858 FUN_1488ec858 body=195 status=ok
// SIG undefined FUN_1488ec858(void)

void FUN_1488ec858(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  double dVar3;
  undefined1 auStack_58 [40];
  undefined1 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x9c) == '\x01') {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))();
    if ((lVar2 != 0) && (*(longlong **)(lVar2 + 0x178) != (longlong *)0x0)) {
      fVar1 = *(float *)(param_1 + 0x98);
      dVar3 = (double)(**(code **)(**(longlong **)(lVar2 + 0x178) + 0x640))();
      dVar3 = (double)fVar1 - dVar3;
      lVar2 = -((longlong)ROUND(-0.5 - (dVar3 + dVar3)) >> 1);
      if (lVar2 < 1) {
        lVar2 = 0;
      }
      local_30 = 2;
      local_24 = (undefined4)lVar2;
      local_2c = 0;
      FUN_1488ebe76(param_1,&DAT_14cb85c10);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ec91c FUN_1488ec91c body=284 status=ok
// SIG undefined FUN_1488ec91c(void)

void FUN_1488ec91c(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  longlong lVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined1 *local_38;
  undefined8 **local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = *param_2;
  local_60 = *(undefined4 *)(param_2 + 1);
  lVar1 = FUN_1488ed51e();
  if (lVar1 != 0) {
    local_78 = 0;
    lStack_70 = 0;
    local_88 = *param_3;
    local_80 = *(undefined4 *)(param_3 + 1);
    if (&local_78 != param_4) {
      local_78 = *param_4;
      *param_4 = 0;
      lStack_70 = param_4[1];
      param_4[1] = 0;
    }
    local_90 = *(undefined4 *)(param_2 + 1);
    local_48 = &local_98;
    local_98 = *param_2;
    local_30 = &local_48;
    local_40 = &local_88;
    local_38 = &LAB_1488f5808;
    local_58 = *param_2;
    local_50 = *(undefined4 *)(param_2 + 1);
    FUN_1488eda1c(param_1);
    FUN_1447f69b6(param_1 + 0x28);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488eca3a FUN_1488eca3a body=149 status=ok
// SIG undefined FUN_1488eca3a(void)

undefined8 FUN_1488eca3a(longlong param_1)

{
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  code *local_50;
  undefined8 **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  code **local_28;
  undefined1 *local_20;
  undefined8 **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = &local_40;
  local_40 = 0;
  local_48 = &local_58;
  local_28 = &local_50;
  local_50 = FUN_143de2138;
  local_30 = *(undefined4 *)(param_1 + 0x28);
  local_38 = *(undefined8 *)(param_1 + 0x20);
  local_18 = &local_28;
  local_20 = &LAB_143de34b6;
  FUN_1488eda1c(*(undefined8 *)(param_1 + 0x18));
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return local_40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ecad0 FUN_1488ecad0 body=98 status=ok
// SIG undefined FUN_1488ecad0(void)

void FUN_1488ecad0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined1 *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_10 = &local_20;
  local_18 = &LAB_143de34b6;
  local_30 = *param_2;
  local_28 = *(undefined4 *)(param_2 + 1);
  local_20 = param_3;
  FUN_1488eda1c(param_1,&local_30);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ecb34 FUN_1488ecb34 body=131 status=ok
// SIG undefined FUN_1488ecb34(void)

void FUN_1488ecb34(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140f12bd2(param_1,iVar1);
    }
    FUN_1459dea5f((longlong)iVar1 * 0x38 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_1488f3028(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_1488f3084(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1488ecbb8 FUN_1488ecbb8 body=62 status=ok
// SIG undefined FUN_1488ecbb8(void)

undefined8 * FUN_1488ecbb8(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_143dd97c6();
  if (lVar1 == 0) {
    *(undefined4 *)(param_2 + 1) = DAT_14c948620;
    uVar2 = DAT_14c948618;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 8);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0x18);
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 1488ecbf6 FUN_1488ecbf6 body=158 status=ok
// SIG undefined FUN_1488ecbf6(void)

longlong FUN_1488ecbf6(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    FUN_140b12754(param_2,local_38);
    FUN_14021219d(param_1,local_38);
  }
  else {
    local_38[0] = 0;
    local_38[1] = 0;
    FUN_14021219d(param_1,local_38);
    FUN_141881c76(&local_48,local_38);
    *param_2 = local_48;
    param_2[1] = uStack_44;
    param_2[2] = uStack_40;
    param_2[3] = uStack_3c;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ecc96 FUN_1488ecc96 body=50 status=ok
// SIG undefined FUN_1488ecc96(void)

undefined8 FUN_1488ecc96(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x110);
  lVar2 = FUN_14040226a(uVar1,0);
  if (lVar2 != 0) {
    uVar1 = FUN_14883d45c(lVar2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1488eccc8 FUN_1488eccc8 body=239 status=ok
// SIG undefined FUN_1488eccc8(void)

undefined8 FUN_1488eccc8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14a8bcc20;
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
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14b417360;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_143dda42a;
  FUN_1414cf8c0(&DAT_14cadbeb0,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ecdb8 FUN_1488ecdb8 body=239 status=ok
// SIG undefined FUN_1488ecdb8(void)

undefined8 FUN_1488ecdb8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14a8bcd00;
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
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14b4173d0;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_143dda572;
  FUN_141211dc4(&DAT_14cadbec8,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ecea8 FUN_1488ecea8 body=244 status=ok
// SIG undefined FUN_1488ecea8(void)

undefined8
FUN_1488ecea8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14b403cd0;
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
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14b417440;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_145ae24bc(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ecf9e FUN_1488ecf9e body=244 status=ok
// SIG undefined FUN_1488ecf9e(void)

undefined8
FUN_1488ecf9e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14b403b80;
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
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14b4174b0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_145ae26b0(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ed094 FUN_1488ed094 body=244 status=ok
// SIG undefined FUN_1488ed094(void)

undefined8 FUN_1488ed094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
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
  *local_38 = &PTR_LAB_14b403fd0;
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
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b417590;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_143ddb62c;
  FUN_1488671b8(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ed18a FUN_1488ed18a body=244 status=ok
// SIG undefined FUN_1488ed18a(void)

undefined8 FUN_1488ed18a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
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
  *local_38 = &PTR_LAB_14b417790;
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
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b417600;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_1488ed280;
  FUN_14598d416(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ed280 FUN_1488ed280 body=287 status=ok
// SIG undefined FUN_1488ed280(void)

void FUN_1488ed280(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  bool bVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 *local_60;
  longlong local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)(int)param_4[1] == 0) {
LAB_1488ed319:
    local_70 = *(undefined4 *)(param_2 + 1);
    local_78 = *param_2;
    local_6c = *param_3;
    local_64 = *(undefined4 *)(param_3 + 1);
    FUN_1488f4fbc(param_1 + 0xc0);
  }
  else {
    plVar6 = (longlong *)*param_4;
    plVar4 = plVar6 + (longlong)(int)param_4[1] * 2;
    bVar5 = false;
    do {
      while( true ) {
        lVar1 = *plVar6;
        uVar3 = FUN_1459a9868();
        bVar2 = FUN_1448093f4(lVar1,uVar3);
        if ((bVar2 & lVar1 != 0) != 0) break;
        plVar6 = plVar6 + 2;
        if (plVar6 == plVar4) {
          if (!bVar5) goto LAB_1488ed319;
          goto LAB_1488ed2f1;
        }
      }
      local_58 = lVar1 + 0x50;
      local_70 = *(undefined4 *)(param_2 + 1);
      local_78 = *param_2;
      local_6c = *param_3;
      local_64 = *(undefined4 *)(param_3 + 1);
      local_60 = &local_78;
      FUN_1488f4a08(param_1 + 0xc0,local_4c,&local_60);
      plVar6 = plVar6 + 2;
      bVar5 = true;
    } while (plVar6 != plVar4);
  }
LAB_1488ed2f1:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488ed3a0 FUN_1488ed3a0 body=187 status=ok
// SIG undefined FUN_1488ed3a0(void)

void FUN_1488ed3a0(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < (int)param_2) {
    *(uint *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < param_2 - iVar3) {
      FUN_1488f477e(param_1);
    }
    memset((void *)((longlong)iVar3 * 8 + *param_1),0,(longlong)(int)(param_2 - iVar3) << 3);
    return;
  }
  if (-1 < (int)param_2) {
    iVar2 = iVar3 - param_2;
    if (iVar2 == 0 || iVar3 < (int)param_2) {
      return;
    }
    _Dst = (void *)((ulonglong)param_2 * 8 + *param_1);
    FUN_145cc5775(_Dst,iVar2);
    iVar1 = (int)param_1[1] - iVar3;
    if (iVar1 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar2 * 8),(longlong)iVar1 << 3);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - iVar2;
    FUN_1488f4804(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1488ed45c FUN_1488ed45c body=191 status=ok
// SIG undefined FUN_1488ed45c(void)

undefined8 * FUN_1488ed45c(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144729dda(param_1 + 0x110);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x110);
    if ((*(longlong *)(lVar2 + 0x1e0) != 0) &&
       (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x1e0) + 0x68), lVar2 != 0)) {
      FUN_140d27df6(lVar2,local_2c,param_3);
      FUN_14151aed0(lVar2,param_2,local_2c);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  param_2[3] = 0;
  *param_2 = &PTR_FUN_14a184370;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ed51e FUN_1488ed51e body=147 status=ok
// SIG undefined FUN_1488ed51e(void)

longlong FUN_1488ed51e(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_18 = *(undefined4 *)(param_2 + 1);
  puVar2 = (undefined8 *)FUN_1488ed6e6(param_1,&local_20);
  if ((puVar2 == (undefined8 *)0x0) || ((longlong)*(int *)(puVar2 + 1) == 0)) {
    lVar3 = 0;
  }
  else {
    plVar5 = (longlong *)*puVar2;
    lVar4 = (longlong)*(int *)(puVar2 + 1) << 3;
    lVar3 = 0;
    do {
      lVar1 = *plVar5;
      if ((*(int *)(lVar1 + 0x2c) == *param_3) && (*(int *)(lVar1 + 0x34) == param_3[2])) {
        lVar3 = lVar1;
        if (plVar5 == (longlong *)0x0) {
          lVar3 = 0;
        }
        break;
      }
      plVar5 = plVar5 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 1488ed5b2 FUN_1488ed5b2 body=120 status=ok
// SIG undefined FUN_1488ed5b2(void)

undefined8 FUN_1488ed5b2(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_2 + 0x398) != 0) {
    lVar4 = FUN_140082f10();
    lVar2 = *(longlong *)(param_2 + 0x398);
    if (lVar2 != 0) {
      if (lVar4 == 0) {
        return 0;
      }
      lVar3 = *(longlong *)(lVar2 + 0x10);
      if (lVar3 == 0) {
        return 0;
      }
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        uVar1 = *(ushort *)(lVar2 + 0x538);
        if ((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x48))) {
          return *(undefined8 *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar1 * 8);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1488ed62a FUN_1488ed62a body=187 status=ok
// SIG undefined FUN_1488ed62a(void)

void FUN_1488ed62a(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < (int)param_2) {
    *(uint *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < param_2 - iVar3) {
      FUN_1488f5118(param_1);
    }
    memset((void *)((longlong)iVar3 * 8 + *param_1),0,(longlong)(int)(param_2 - iVar3) << 3);
    return;
  }
  if (-1 < (int)param_2) {
    iVar2 = iVar3 - param_2;
    if (iVar2 == 0 || iVar3 < (int)param_2) {
      return;
    }
    _Dst = (void *)((ulonglong)param_2 * 8 + *param_1);
    FUN_145cc574a(_Dst,iVar2);
    iVar1 = (int)param_1[1] - iVar3;
    if (iVar1 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar2 * 8),(longlong)iVar1 << 3);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - iVar2;
    FUN_1488f519e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1488ed6e6 FUN_1488ed6e6 body=180 status=ok
// SIG undefined FUN_1488ed6e6(void)

longlong FUN_1488ed6e6(longlong param_1,undefined8 *param_2)

{
  short sVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = *(undefined4 *)(param_2 + 1);
  iVar2 = FUN_1488edbb2();
  if (iVar2 == 2) {
    param_1 = param_1 + 0xb0;
  }
  else {
    if (iVar2 == 1) {
      sVar1 = (short)*(undefined4 *)(param_2 + 1) + -1;
      if (((-1 < sVar1) && ((int)sVar1 < *(int *)(param_1 + 0xa8))) &&
         (param_1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(uint)(int)sVar1 * 8),
         param_1 != 0)) {
        param_1 = param_1 + 0x18;
        goto LAB_1488ed77a;
      }
    }
    else {
      sVar1 = (short)*(undefined4 *)(param_2 + 1) + -1;
      if (((-1 < sVar1) && ((int)sVar1 < *(int *)(param_1 + 0x48))) &&
         (param_1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + (ulonglong)(uint)(int)sVar1 * 8),
         param_1 != 0)) {
        param_1 = param_1 + 0x20;
        goto LAB_1488ed77a;
      }
    }
    param_1 = 0;
  }
LAB_1488ed77a:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ed79c FUN_1488ed79c body=415 status=ok
// SIG undefined FUN_1488ed79c(void)

longlong FUN_1488ed79c(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined1 auStack_118 [32];
  longlong local_f8 [5];
  byte local_d0;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  puVar2 = &DAT_14c9485f0;
  if (*(undefined4 **)(param_2[7] + 8) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2[7] + 8);
  }
  FUN_1447325ac(puVar2,param_1,1);
  FUN_1488ebfe8(param_2,local_40,&DAT_14cb7d0e0);
  FUN_140b12754(local_40,local_f8);
  FUN_141881c76(param_1 + 8,local_f8);
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x2c);
  FUN_140b12754(param_2 + 1,local_f8);
  FUN_141881c76(param_1 + 0x24,local_f8);
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
  cVar1 = *(char *)((longlong)param_2 + 0x9c);
  *(char *)(param_1 + 0x38) = cVar1;
  if (cVar1 == '\x01') {
    *(int *)(param_1 + 0x34) = (int)param_2[0x13];
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_146866eea(local_f8);
  local_d0 = local_d0 | 4;
  (**(code **)(*param_2 + 0x58))(param_2,local_f8);
  if ((longlong *)(param_1 + 0x40) == &local_50) {
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x40) = local_50;
    local_50 = 0;
    *(undefined4 *)(param_1 + 0x48) = (undefined4)local_48;
    *(undefined4 *)(param_1 + 0x4c) = local_48._4_4_;
    local_48 = 0;
  }
  FUN_144a7fc42(local_f8);
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ed93c FUN_1488ed93c body=130 status=ok
// SIG undefined FUN_1488ed93c(void)

undefined4 * FUN_1488ed93c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  
  param_1[0xc] = param_2[0xc];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = param_2[9];
  uVar10 = param_2[10];
  uVar11 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar9;
  param_1[10] = uVar10;
  param_1[0xb] = uVar11;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  if (param_2 == param_1) {
    return param_1;
  }
  if (*(char *)(param_2 + 0xe) == '\x01') {
    param_1[0xd] = param_2[0xd];
    uVar12 = 1;
  }
  else {
    if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_1488ed97e;
    uVar12 = 0;
  }
  *(undefined1 *)(param_1 + 0xe) = uVar12;
LAB_1488ed97e:
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  *(undefined8 *)(param_2 + 0x12) = 0;
  return param_1;
}



// FUNCTION 1488ed9be FUN_1488ed9be body=93 status=ok
// SIG undefined FUN_1488ed9be(void)

void FUN_1488ed9be(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  
  lVar1 = *param_1;
  puVar2 = *(undefined8 **)(lVar1 + (longlong)(int)param_2 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  iVar3 = (int)param_1[1];
  if (~param_2 + iVar3 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 8);
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~param_2 + iVar3) << 3);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  FUN_1488f5684(param_1);
  return;
}



// FUNCTION 1488eda1c FUN_1488eda1c body=405 status=ok
// SIG undefined FUN_1488eda1c(void)

void FUN_1488eda1c(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *param_2;
  local_30 = *(undefined4 *)(param_2 + 1);
  iVar4 = FUN_1488edbb2();
  if (iVar4 == 2) {
    iVar4 = *(int *)(param_1 + 0x48);
    if ((longlong)iVar4 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x40);
      lVar9 = 0;
      do {
        if (*(longlong *)(lVar1 + lVar9) != 0) {
          (*(code *)*param_3)(param_3[1]);
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)iVar4 * 8 != lVar9);
    }
  }
  else if (iVar4 == 1) {
    sVar3 = (short)*(undefined4 *)(param_2 + 1) + -1;
    uVar5 = (uint)sVar3;
    if ((-1 < sVar3) && ((int)uVar5 < *(int *)(param_1 + 0xa8))) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar5 * 8);
      if (lVar1 != 0) {
        if (*(char *)(param_1 + 0x118) == '\0') {
          local_48 = *param_3;
          local_40 = param_3[1];
          local_58 = DAT_14cb7cff8;
          local_50 = DAT_14cb7d000;
          FUN_1488eda1c(param_1);
        }
        else {
          cVar2 = FUN_144729dda(lVar1 + 0xc);
          if (cVar2 != '\0') {
            uVar7 = FUN_14479d2ce(*(longlong *)
                                   (*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar5 * 8) + 0xc);
            uVar5 = FUN_14892d6d6(uVar7);
            while (uVar5 != 0) {
              uVar8 = uVar5 - 1 & uVar5;
              uVar5 = uVar5 ^ uVar8;
              if (uVar5 == 0) {
                uVar6 = 0x20;
              }
              else {
                uVar6 = 0;
                if (uVar5 != 0) {
                  for (; (uVar5 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
                  }
                }
              }
              uVar5 = uVar8;
              if (((int)uVar6 < *(int *)(param_1 + 0x48)) &&
                 (*(longlong *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar6 * 8) != 0)) {
                (*(code *)*param_3)(param_3[1]);
              }
            }
          }
        }
      }
    }
  }
  else {
    sVar3 = (short)*(undefined4 *)(param_2 + 1) + -1;
    if (((-1 < sVar3) && ((int)sVar3 < *(int *)(param_1 + 0x48))) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x40) + (ulonglong)(uint)(int)sVar3 * 8) != 0)) {
      (*(code *)*param_3)(param_3[1]);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488edbb2 FUN_1488edbb2 body=84 status=ok
// SIG undefined FUN_1488edbb2(void)

char FUN_1488edbb2(undefined8 param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)FUN_144a8232a();
  piVar3 = (int *)FUN_144a8232a(&DAT_14cb7cb30);
  cVar1 = '\0';
  if (*piVar2 != *piVar3) {
    piVar2 = (int *)FUN_144a8232a(param_1);
    piVar3 = (int *)FUN_144a8232a(&DAT_14cb7cb48);
    cVar1 = (*piVar2 != *piVar3) + '\x01';
  }
  return cVar1;
}



// FUNCTION 1488edc06 FUN_1488edc06 body=219 status=ok
// SIG undefined FUN_1488edc06(void)

void FUN_1488edc06(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined1 local_78 [4];
  undefined8 local_74;
  undefined1 uStack_6c;
  undefined1 auStack_6b [7];
  undefined1 uStack_64;
  undefined8 uStack_63;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78[0] = 0;
  local_80 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_74 = 0;
  uStack_6c = 0;
  auStack_6b = (undefined1  [7])0x0;
  uStack_64 = 0;
  uStack_63 = 0;
  FUN_1488ee6ed(param_3,&local_80);
  local_90 = *param_2;
  local_88 = *(undefined4 *)(param_2 + 1);
  local_98 = auStack_6b + 3;
  lVar1 = FUN_143ddc9ea(param_1,&local_90,&local_80,local_78);
  if (lVar1 != 0) {
    FUN_1488edfc4(&local_80,lVar1);
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488edce2 FUN_1488edce2 body=154 status=ok
// SIG undefined FUN_1488edce2(void)

void FUN_1488edce2(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined5 local_50;
  undefined3 uStack_4b;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0;
  local_38 = 0;
  local_50 = 0;
  uStack_4b = 0;
  auStack_48._0_5_ = 0;
  FUN_1488ebd87(param_3,&local_50);
  FUN_1488ecbf6(param_3,auStack_48 + 4);
  local_60 = *param_2;
  local_58 = *(undefined4 *)(param_2 + 1);
  FUN_143dd9b42(param_1,&local_60,&local_50,auStack_48 + 4);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488edd7e FUN_1488edd7e body=456 status=ok
// SIG undefined FUN_1488edd7e(void)

void FUN_1488edd7e(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  short sVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 **ppuVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_14011750a(&local_58);
  FUN_1488ee54e(param_2,&local_48);
  sVar2 = (short)local_50 + -1;
  iVar5 = (int)sVar2;
  if ((sVar2 < 0) || (*(int *)(param_1 + 0xa8) <= iVar5)) {
    FUN_1488ed62a((longlong *)(param_1 + 0xa0),iVar5 + 1);
  }
  ppuVar6 = (undefined8 **)((longlong)iVar5 * 8 + *(longlong *)(param_1 + 0xa0));
  local_60 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *local_60 = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  local_60[4] = 0;
  if (ppuVar6 != &local_60) {
    puVar1 = *ppuVar6;
    *ppuVar6 = local_60;
    local_60 = (undefined8 *)0x0;
    FUN_14878e9e0(ppuVar6,puVar1);
  }
  FUN_14878e9e0(&local_60,local_60);
  puVar1 = *ppuVar6;
  *(undefined4 *)(puVar1 + 1) = local_50;
  *puVar1 = local_58;
  uVar4 = 0;
  if ((longlong)(int)uStack_40 != 0) {
    lVar8 = (longlong)(int)uStack_40 * 0x50;
    lVar7 = local_48;
    do {
      local_68 = local_50;
      local_70 = local_58;
      local_88 = lVar7 + 0x18;
      lVar3 = FUN_143ddc9ea(param_1,&local_70,lVar7,lVar7 + 8);
      if (lVar3 != 0) {
        FUN_1488edfc4(lVar7,lVar3);
        local_78 = local_50;
        local_80 = local_58;
        FUN_143dd9b42(param_1,&local_80,lVar7 + 0x18,lVar7 + 0x24);
      }
      lVar7 = lVar7 + 0x50;
      lVar8 = lVar8 + -0x50;
    } while (lVar8 != 0);
    uVar4 = uStack_40 & 0xffffffff;
  }
  FUN_1488ee481(local_48,uVar4);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488edf48 FUN_1488edf48 body=123 status=ok
// SIG undefined FUN_1488edf48(void)

void FUN_1488edf48(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [36];
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  local_1c = 0;
  FUN_14011750a(&local_24);
  lVar1 = (longlong)(short)((short)local_1c + -1);
  if (*(longlong *)(*(longlong *)(param_1 + 0xa0) + lVar1 * 8) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + lVar1 * 8) = 0;
    FUN_14878e9e0();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488edfc4 FUN_1488edfc4 body=259 status=ok
// SIG undefined FUN_1488edfc4(void)

void FUN_1488edfc4(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 auStack_e8 [32];
  undefined **local_c8 [5];
  byte local_a0;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((longlong *)(param_1 + 0x34) != param_2 + 0x13) {
    if (*(char *)(param_1 + 0x38) == '\x01') {
      *(undefined4 *)(param_2 + 0x13) = *(undefined4 *)(param_1 + 0x34);
      uVar1 = 1;
    }
    else {
      if (*(char *)((longlong)param_2 + 0x9c) != '\x01') goto LAB_1488ee010;
      uVar1 = 0;
    }
    *(undefined1 *)((longlong)param_2 + 0x9c) = uVar1;
  }
LAB_1488ee010:
  if (*(int *)(param_1 + 0x48) != 0) {
    memset(local_c8,0,0x90);
    FUN_144869430(local_c8);
    local_38 = 0;
    local_c8[0] = &PTR_FUN_149e1e050;
    local_28 = 0x7fffffffffffffff;
    local_a0 = local_a0 | 1;
    local_30 = param_1 + 0x40;
    FUN_1449c2eca(local_c8,0);
    (**(code **)(*param_2 + 0x58))(param_2,local_c8);
    (**(code **)(*param_2 + 0x50))(param_2);
    FUN_144a7fc42(local_c8);
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ee0c8 FUN_1488ee0c8 body=96 status=ok
// SIG undefined FUN_1488ee0c8(void)

void FUN_1488ee0c8(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_2 + 0x398) != 0) {
    lVar3 = FUN_140082f10();
    lVar1 = *(longlong *)(param_2 + 0x398);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      FUN_14479d2ce(lVar1 + 0x4e0);
      return;
    }
  }
  return;
}



// FUNCTION 1488ee128 FUN_1488ee128 body=38 status=ok
// SIG undefined FUN_1488ee128(void)

undefined8 FUN_1488ee128(undefined8 param_1,int param_2)

{
  FUN_140333dee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488ee14e FUN_1488ee14e body=52 status=ok
// SIG undefined FUN_1488ee14e(void)

undefined8 * FUN_1488ee14e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488ee188 FUN_1488ee188 body=38 status=ok
// SIG undefined FUN_1488ee188(void)

undefined8 FUN_1488ee188(undefined8 param_1,int param_2)

{
  FUN_1488f5dfe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488ee1ae FUN_1488ee1ae body=91 status=ok
// SIG undefined FUN_1488ee1ae(void)

undefined8 * FUN_1488ee1ae(undefined8 *param_1,int param_2)

{
  *param_1 = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_140115c12(param_1 + 2,0);
  }
  param_1[1] = 0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488ee21a FUN_1488ee21a body=83 status=ok
// SIG undefined FUN_1488ee21a(void)

undefined8 * FUN_1488ee21a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4164b0;
  plVar3 = (longlong *)param_1[5];
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



// FUNCTION 1488ee26e FUN_1488ee26e body=162 status=ok
// SIG undefined FUN_1488ee26e(void)

void FUN_1488ee26e(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
  if (cVar2 == '\0') {
    cVar2 = FUN_14893eeee(*(undefined8 *)(param_1 + 0x20));
    if (cVar2 == '\0') {
      return;
    }
    FUN_14893f494(*(undefined8 *)(param_1 + 0x20));
    **(undefined1 **)(param_1 + 0x30) = 1;
    uVar5 = *(undefined8 *)(param_1 + 0x14);
    uVar6 = *(undefined4 *)(param_1 + 8);
    uVar7 = *(undefined8 *)(param_1 + 0xc);
  }
  else {
    **(undefined1 **)(param_1 + 0x30) = 0;
    uVar5 = *(undefined8 *)(param_1 + 0x14);
    uVar6 = *(undefined4 *)(param_1 + 8);
    uVar7 = *(undefined8 *)(param_1 + 0xc);
    *(undefined1 *)(param_2 + 0x60) = 1;
  }
  iVar1 = *(int *)(param_2 + 0x58);
  *(uint *)(param_2 + 0x58) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x5c) < iVar1 + 1U) {
    FUN_14579eadc(param_2,iVar1);
  }
  lVar3 = *(longlong *)(param_2 + 0x50);
  if (*(longlong *)(param_2 + 0x50) == 0) {
    lVar3 = param_2;
  }
  lVar4 = (longlong)iVar1;
  *(undefined8 *)(lVar3 + lVar4 * 0x14) = uVar7;
  *(undefined4 *)(lVar3 + 8 + lVar4 * 0x14) = uVar6;
  *(undefined8 *)(lVar3 + 0xc + lVar4 * 0x14) = uVar5;
  return;
}



// FUNCTION 1488ee310 FUN_1488ee310 body=113 status=ok
// SIG undefined FUN_1488ee310(void)

void FUN_1488ee310(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,4);
  }
  return;
}



// FUNCTION 1488ee382 FUN_1488ee382 body=113 status=ok
// SIG undefined FUN_1488ee382(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1488ee382(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cb85a40;
  if (DAT_14cb85a40 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x1500,0);
    lVar4 = 0x1f;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0x15;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cb85a40;
    _DAT_14cb85a48 = _DAT_14cb85a48 + 0x20;
  }
  DAT_14cb85a40 = (undefined8 *)*puVar2;
  _DAT_14cb85a4c = _DAT_14cb85a4c + 1;
  return;
}



// FUNCTION 1488ee3f4 FUN_1488ee3f4 body=52 status=ok
// SIG undefined FUN_1488ee3f4(void)

void FUN_1488ee3f4(longlong *param_1)

{
  FUN_1488ee428();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1488ee428 FUN_1488ee428 body=89 status=ok
// SIG undefined FUN_1488ee428(void)

void FUN_1488ee428(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 1488ee481 FUN_1488ee481 body=56 status=ok
// SIG undefined FUN_1488ee481(void)

void FUN_1488ee481(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 0x38);
    do {
      if (*(longlong *)(pcVar1 + 8) != 0) {
        FUN_1400020a8();
      }
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      pcVar1 = pcVar1 + 0x50;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1488ee4ba FUN_1488ee4ba body=147 status=ok
// SIG undefined FUN_1488ee4ba(void)

void FUN_1488ee4ba(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1488ee54e FUN_1488ee54e body=357 status=ok
// SIG undefined FUN_1488ee54e(void)

longlong * FUN_1488ee54e(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x50,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x50);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_1488ee481(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1488ee78c(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x33333 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1488ee6ed(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x50;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_1488ee6b4(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1488ee74c(param_2);
        FUN_1488ee6ed(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1488ee6b4 FUN_1488ee6b4 body=57 status=ok
// SIG undefined FUN_1488ee6b4(void)

void FUN_1488ee6b4(undefined8 *param_1,int param_2)

{
  FUN_1488ee481(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1488ee78c(param_1,param_2);
  return;
}



// FUNCTION 1488ee6ed FUN_1488ee6ed body=94 status=ok
// SIG undefined FUN_1488ee6ed(void)

longlong * FUN_1488ee6ed(longlong *param_1,longlong param_2)

{
  (**(code **)(*param_1 + 0x160))();
  FUN_1488ecbf6(param_1,param_2 + 8);
  FUN_1488ebd87(param_1,param_2 + 0x18);
  FUN_1488ecbf6(param_1,param_2 + 0x24);
  FUN_1410078ca(param_2 + 0x34,param_1);
  FUN_140077068(param_1,param_2 + 0x40);
  return param_1;
}



// FUNCTION 1488ee74c FUN_1488ee74c body=63 status=ok
// SIG undefined FUN_1488ee74c(void)

longlong FUN_1488ee74c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1488ee822(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x50 + *param_1;
  FUN_1488ee7fc(lVar2);
  return lVar2;
}



// FUNCTION 1488ee78c FUN_1488ee78c body=112 status=ok
// SIG undefined FUN_1488ee78c(void)

void FUN_1488ee78c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x50,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 1488ee7fc FUN_1488ee7fc body=38 status=ok
// SIG undefined FUN_1488ee7fc(void)

void FUN_1488ee7fc(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d) = 0;
  return;
}



// FUNCTION 1488ee822 FUN_1488ee822 body=147 status=ok
// SIG undefined FUN_1488ee822(void)

void FUN_1488ee822(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1488ee8b6 FUN_1488ee8b6 body=48 status=ok
// SIG undefined FUN_1488ee8b6(void)

void FUN_1488ee8b6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,4);
  }
  return;
}



// FUNCTION 1488ee8e6 FUN_1488ee8e6 body=48 status=ok
// SIG undefined FUN_1488ee8e6(void)

void FUN_1488ee8e6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1488ee916 FUN_1488ee916 body=307 status=ok
// SIG undefined FUN_1488ee916(void)

void FUN_1488ee916(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar12 = (longlong)(int)uVar1;
  if (lVar12 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar3 = *(longlong *)*param_2;
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar3);
    }
    iVar9 = 0;
    uVar10 = 0;
    bVar5 = *plVar2 == lVar3;
    do {
      iVar4 = (int)uVar10;
      uVar11 = uVar10;
      uVar7 = uVar10;
      uVar6 = iVar4 + 1U;
      if ((int)(iVar4 + 1U) < (int)uVar1) {
        uVar6 = uVar1;
      }
      do {
        uVar7 = uVar7 + 1;
        if (lVar12 <= (longlong)uVar7) {
          uVar11 = (ulonglong)uVar6;
          break;
        }
        lVar3 = *(longlong *)*param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        uVar11 = (ulonglong)((int)uVar11 + 1);
      } while (bVar5 == (plVar2[uVar7] == lVar3));
      if (bVar5 == false) {
        iVar8 = (int)uVar11 - iVar4;
        if (iVar9 != iVar4) {
          memmove(plVar2 + iVar9,plVar2 + uVar10,(longlong)iVar8 << 3);
        }
        iVar9 = iVar9 + iVar8;
      }
      uVar10 = uVar11;
      bVar5 = (bool)(bVar5 ^ 1);
    } while ((longlong)uVar7 < lVar12);
    *(int *)(param_1 + 1) = iVar9;
  }
  return;
}



// FUNCTION 1488eea4a FUN_1488eea4a body=62 status=ok
// SIG undefined FUN_1488eea4a(void)

void FUN_1488eea4a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1488eea88(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1488eea88 FUN_1488eea88 body=93 status=ok
// SIG undefined FUN_1488eea88(void)

ulonglong FUN_1488eea88(uint param_1,uint param_2)

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



// FUNCTION 1488eeae6 FUN_1488eeae6 body=243 status=ok
// SIG undefined FUN_1488eeae6(void)

undefined8 * FUN_1488eeae6(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_2 != (longlong *)0x0 && (int)param_2[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14cadbf08,CONCAT71(uVar5,1));
      plVar1 = (longlong *)*param_2;
      if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
        local_28 = 0;
      }
      else {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
      }
      *param_1 = local_28;
      uVar3 = DAT_14cadbf10;
      lVar6 = (longlong)(int)DAT_14cadbf10;
      DAT_14cadbf10 = DAT_14cadbf10 + 1;
      if (DAT_14cadbf14 < DAT_14cadbf10) {
        FUN_1447a71f6(&DAT_14cadbf08,uVar3);
      }
      lVar2 = DAT_14cadbf08;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14cadbf08 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488eebda FUN_1488eebda body=29 status=ok
// SIG undefined FUN_1488eebda(void)

undefined8 FUN_1488eebda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488eec12 FUN_1488eec12 body=29 status=ok
// SIG undefined FUN_1488eec12(void)

bool FUN_1488eec12(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1488eec30 FUN_1488eec30 body=26 status=ok
// SIG undefined FUN_1488eec30(void)

bool FUN_1488eec30(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1488eec4a FUN_1488eec4a body=24 status=ok
// SIG undefined FUN_1488eec4a(void)

bool FUN_1488eec4a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1488eec6e FUN_1488eec6e body=101 status=ok
// SIG undefined FUN_1488eec6e(void)

void FUN_1488eec6e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b416560;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4164f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488eecd4 FUN_1488eecd4 body=101 status=ok
// SIG undefined FUN_1488eecd4(void)

void FUN_1488eecd4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b416560;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4164f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488eed3a FUN_1488eed3a body=134 status=ok
// SIG undefined FUN_1488eed3a(void)

void FUN_1488eed3a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b416560;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4164f0;
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
                    /* WARNING: Could not recover jumptable at 0x0001488eedb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488eedc0 FUN_1488eedc0 body=52 status=ok
// SIG undefined FUN_1488eedc0(void)

void FUN_1488eedc0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001488eedf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1488eedf4 FUN_1488eedf4 body=167 status=ok
// SIG undefined FUN_1488eedf4(void)

bool FUN_1488eedf4(longlong param_1,undefined8 param_2,undefined4 param_3)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
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



// FUNCTION 1488eee9e FUN_1488eee9e body=48 status=ok
// SIG undefined FUN_1488eee9e(void)

void FUN_1488eee9e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,8);
  }
  return;
}



// FUNCTION 1488eeece FUN_1488eeece body=119 status=ok
// SIG undefined FUN_1488eeece(void)

void FUN_1488eeece(longlong param_1,int param_2)

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
    FUN_1488eef46(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1488eef46 FUN_1488eef46 body=141 status=ok
// SIG undefined FUN_1488eef46(void)

void FUN_1488eef46(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 1488eefd4 FUN_1488eefd4 body=90 status=ok
// SIG undefined FUN_1488eefd4(void)

void FUN_1488eefd4(void *param_1)

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



// FUNCTION 1488ef02e FUN_1488ef02e body=48 status=ok
// SIG undefined FUN_1488ef02e(void)

void FUN_1488ef02e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1488ef05e FUN_1488ef05e body=17 status=ok
// SIG undefined FUN_1488ef05e(void)

void FUN_1488ef05e(longlong param_1)

{
  *(byte *)(param_1 + 0x80) = *(byte *)(param_1 + 0x80) & 0xfc | 2;
  return;
}



// FUNCTION 1488ef070 FUN_1488ef070 body=150 status=ok
// SIG undefined FUN_1488ef070(void)

void FUN_1488ef070(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x88,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x88)) {
      uVar5 = uVar4 / 0x88 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x88,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1488ef108 FUN_1488ef108 body=147 status=ok
// SIG undefined FUN_1488ef108(void)

void FUN_1488ef108(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1488ef19c FUN_1488ef19c body=45 status=ok
// SIG undefined FUN_1488ef19c(void)

void FUN_1488ef19c(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b417820;
  FUN_140bba396(param_1 + 800);
  FUN_1488ef1e8(param_1 + 0x10);
  return;
}



// FUNCTION 1488ef1ca FUN_1488ef1ca body=29 status=ok
// SIG undefined FUN_1488ef1ca(void)

undefined8 FUN_1488ef1ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488ef1e8 FUN_1488ef1e8 body=103 status=ok
// SIG undefined FUN_1488ef1e8(void)

void FUN_1488ef1e8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b417800;
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x59];
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
  param_1[2] = 0;
  FUN_14076ba36(param_1 + 3);
  return;
}



// FUNCTION 1488ef250 FUN_1488ef250 body=63 status=ok
// SIG undefined FUN_1488ef250(void)

undefined8 * FUN_1488ef250(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b417820;
  FUN_140bba396(param_1 + 0x62);
  FUN_1488ef1e8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488ef292 FUN_1488ef292 body=31 status=ok
// SIG undefined FUN_1488ef292(void)

undefined8 FUN_1488ef292(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488ef2c6 FUN_1488ef2c6 body=85 status=ok
// SIG undefined FUN_1488ef2c6(void)

void FUN_1488ef2c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b417860;
  return;
}



// FUNCTION 1488ef31c FUN_1488ef31c body=118 status=ok
// SIG undefined FUN_1488ef31c(void)

void FUN_1488ef31c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b417860;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488ef383. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488ef392 FUN_1488ef392 body=105 status=ok
// SIG undefined FUN_1488ef392(void)

undefined8 FUN_1488ef392(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14620017a(param_1 + 0x18,local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ef3fc FUN_1488ef3fc body=47 status=ok
// SIG undefined FUN_1488ef3fc(void)

void FUN_1488ef3fc(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1488ef42c FUN_1488ef42c body=105 status=ok
// SIG undefined FUN_1488ef42c(void)

void FUN_1488ef42c(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = (longlong)(int)param_2;
  FUN_1488ef3fc(*(undefined8 *)(lVar1 + 8 + lVar3 * 0x18),
                *(undefined4 *)(lVar1 + 0x10 + lVar3 * 0x18));
  if (*(longlong *)(lVar1 + 8 + lVar3 * 0x18) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + lVar3 * 0x18);
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)(int)(~param_2 + iVar2) * 0x18);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1488ef496 FUN_1488ef496 body=62 status=ok
// SIG undefined FUN_1488ef496(void)

void FUN_1488ef496(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1488ef4d4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 1488ef4d4 FUN_1488ef4d4 body=112 status=ok
// SIG undefined FUN_1488ef4d4(void)

ulonglong FUN_1488ef4d4(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1488ef50e;
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
LAB_1488ef50e:
  return param_2 & 0xffffffff;
}



// FUNCTION 1488ef544 FUN_1488ef544 body=147 status=ok
// SIG undefined FUN_1488ef544(void)

void FUN_1488ef544(longlong param_1,int param_2)

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



// FUNCTION 1488ef5d8 FUN_1488ef5d8 body=147 status=ok
// SIG undefined FUN_1488ef5d8(void)

void FUN_1488ef5d8(longlong param_1,int param_2)

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



// FUNCTION 1488ef66c FUN_1488ef66c body=31 status=ok
// SIG undefined FUN_1488ef66c(void)

undefined8 FUN_1488ef66c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488ef69e FUN_1488ef69e body=93 status=ok
// SIG undefined FUN_1488ef69e(void)

void FUN_1488ef69e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b416630;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1488ef6fc FUN_1488ef6fc body=126 status=ok
// SIG undefined FUN_1488ef6fc(void)

void FUN_1488ef6fc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3a3510;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b416630;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488ef76b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488ef784 FUN_1488ef784 body=20 status=ok
// SIG undefined FUN_1488ef784(void)

undefined8 FUN_1488ef784(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 1488ef798 FUN_1488ef798 body=90 status=ok
// SIG undefined FUN_1488ef798(void)

void FUN_1488ef798(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x18 + (longlong)(int)param_2 * 0x28) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x28);
    memmove(_Dst,(void *)((longlong)_Dst + 0x28),(longlong)(int)(~param_2 + iVar2) * 0x28);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1488ef7f2 FUN_1488ef7f2 body=62 status=ok
// SIG undefined FUN_1488ef7f2(void)

void FUN_1488ef7f2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1488ef830(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 1488ef830 FUN_1488ef830 body=112 status=ok
// SIG undefined FUN_1488ef830(void)

ulonglong FUN_1488ef830(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1488ef86a;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x28,8);
      param_2 = param_2 / 0x28;
    }
  }
LAB_1488ef86a:
  return param_2 & 0xffffffff;
}



// FUNCTION 1488ef8a0 FUN_1488ef8a0 body=122 status=ok
// SIG undefined FUN_1488ef8a0(void)

void FUN_1488ef8a0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 1488ef91a FUN_1488ef91a body=114 status=ok
// SIG undefined FUN_1488ef91a(void)

void FUN_1488ef91a(longlong *param_1,int param_2)

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



// FUNCTION 1488ef98c FUN_1488ef98c body=76 status=ok
// SIG undefined FUN_1488ef98c(void)

undefined8 * FUN_1488ef98c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b416750;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14b416780;
  FUN_1449db362(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488ef9d8 FUN_1488ef9d8 body=515 status=ok
// SIG undefined FUN_1488ef9d8(void)

undefined8 FUN_1488ef9d8(longlong param_1,undefined8 param_2)

{
  float *pfVar1;
  wchar_t *pwVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  bool bVar5;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined2 *local_90;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  wchar_t *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  pfVar1 = (float *)(param_1 + 0x60);
  FUN_1411ab38a(pfVar1,&local_70);
  FUN_1467ee194(&local_70,&local_60);
  puVar4 = local_60;
  if (local_58 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_50,L"{%s}COLOR{white}",puVar4);
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_140002266(&local_60,&DAT_149e14292,(double)*pfVar1);
  }
  else {
    FUN_1411ab340(pfVar1,&local_60);
  }
  local_90 = &DAT_149dfb77a;
  if (local_58 != 0) {
    local_90 = local_60;
  }
  pwVar2 = L"";
  if (local_48 != 0) {
    pwVar2 = local_50;
  }
  local_98 = L"Scalar";
  if (*(char *)(param_1 + 0x18) == '\0') {
    local_98 = pwVar2;
  }
  if (*(longlong *)(param_1 + 0x40) == 0) {
    FUN_1400021e4(param_1 + 0x38,&local_80);
    puVar4 = &DAT_149dfb77a;
    if (local_78 != 0) {
      puVar4 = local_80;
    }
    FUN_140002266(param_2,L"%s%s: (%s) %s",puVar4);
  }
  else {
    FUN_1400021e4(param_1 + 0x40,&local_70);
    puVar4 = &DAT_149dfb77a;
    if (local_68 != 0) {
      puVar4 = local_70;
    }
    FUN_1400021e4(param_1 + 0x38,&local_80);
    puVar3 = &DAT_149dfb77a;
    if (local_78 != 0) {
      puVar3 = local_80;
    }
    FUN_140002266(param_2,L"%s%s: (%s) %s",puVar3,puVar4);
    bVar5 = local_80 != (undefined2 *)0x0;
    local_80 = local_70;
    if (bVar5) {
      FUN_1400020a8();
      local_80 = local_70;
    }
  }
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1488efd26 FUN_1488efd26 body=81 status=ok
// SIG undefined FUN_1488efd26(void)

undefined8 FUN_1488efd26(longlong param_1)

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



// FUNCTION 1488efd7e FUN_1488efd7e body=89 status=ok
// SIG undefined FUN_1488efd7e(void)

bool FUN_1488efd7e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1488efdc9;
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
LAB_1488efdc9:
  return lVar6 == param_2;
}



// FUNCTION 1488efdd8 FUN_1488efdd8 body=118 status=ok
// SIG undefined FUN_1488efdd8(void)

void FUN_1488efdd8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b416860;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4167f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488efe4e FUN_1488efe4e body=118 status=ok
// SIG undefined FUN_1488efe4e(void)

void FUN_1488efe4e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b416860;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4167f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488efec4 FUN_1488efec4 body=156 status=ok
// SIG undefined FUN_1488efec4(void)

void FUN_1488efec4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b416860;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4167f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488eff50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488eff60 FUN_1488eff60 body=98 status=ok
// SIG undefined FUN_1488eff60(void)

void FUN_1488eff60(longlong param_1)

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
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x0001488effa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001488effb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1488effc4 FUN_1488effc4 body=68 status=ok
// SIG undefined FUN_1488effc4(void)

undefined8 * FUN_1488effc4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4168d0;
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



// FUNCTION 1488f000c FUN_1488f000c body=81 status=ok
// SIG undefined FUN_1488f000c(void)

undefined8 FUN_1488f000c(longlong param_1)

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



// FUNCTION 1488f0064 FUN_1488f0064 body=118 status=ok
// SIG undefined FUN_1488f0064(void)

void FUN_1488f0064(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e7b60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4168d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488f00da FUN_1488f00da body=118 status=ok
// SIG undefined FUN_1488f00da(void)

void FUN_1488f00da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e7b60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4168d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}


