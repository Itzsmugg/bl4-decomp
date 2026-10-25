// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146887dfe FUN_146887dfe body=144 status=ok
// SIG undefined FUN_146887dfe(void)

void FUN_146887dfe(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x1000);
  if ((uint)param_3 < 0x201) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x1000,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x1000),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x1000,param_2,param_3,8);
  return;
}



// FUNCTION 146887e8e FUN_146887e8e body=48 status=ok
// SIG undefined FUN_146887e8e(void)

void FUN_146887e8e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x78,8);
  }
  return;
}



// FUNCTION 146887ebe FUN_146887ebe body=75 status=ok
// SIG undefined FUN_146887ebe(void)

void FUN_146887ebe(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x20),
              (longlong)*(int *)((longlong)param_1 + 0x28) << 3);
      FUN_1446efa72((longlong)param_1 + 0x20,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 146887f0a FUN_146887f0a body=31 status=ok
// SIG undefined FUN_146887f0a(void)

undefined8 FUN_146887f0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146887f46 FUN_146887f46 body=101 status=ok
// SIG undefined FUN_146887f46(void)

void FUN_146887f46(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149e68c50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146887fac FUN_146887fac body=101 status=ok
// SIG undefined FUN_146887fac(void)

void FUN_146887fac(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149e68c50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 146888012 FUN_146888012 body=134 status=ok
// SIG undefined FUN_146888012(void)

void FUN_146888012(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149e68c50;
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
                    /* WARNING: Could not recover jumptable at 0x000146888089. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1468880a8 FUN_1468880a8 body=62 status=ok
// SIG undefined FUN_1468880a8(void)

void FUN_1468880a8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1468880e6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 1468880e6 FUN_1468880e6 body=112 status=ok
// SIG undefined FUN_1468880e6(void)

ulonglong FUN_1468880e6(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146888120;
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
LAB_146888120:
  return param_2 & 0xffffffff;
}



// FUNCTION 146888156 FUN_146888156 body=48 status=ok
// SIG undefined FUN_146888156(void)

void FUN_146888156(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 146888186 FUN_146888186 body=48 status=ok
// SIG undefined FUN_146888186(void)

void FUN_146888186(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,0x10);
  }
  return;
}



// FUNCTION 1468881b6 FUN_1468881b6 body=124 status=ok
// SIG undefined FUN_1468881b6(void)

void FUN_1468881b6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 3,0);
      iVar3 = (int)(uVar4 >> 3);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar6;
    FUN_1468873e2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146888234 FUN_146888234 body=201 status=ok
// SIG undefined FUN_146888234(void)

void FUN_146888234(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar5 = 0;
    bVar10 = *plVar2 == *(longlong *)*param_2;
    iVar7 = 0;
    do {
      iVar3 = iVar7 + 1;
      if (iVar7 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      iVar8 = iVar7;
      lVar6 = (longlong)iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar3;
        if (lVar4 <= lVar6) break;
        iVar8 = iVar8 + 1;
        iVar9 = iVar8;
      } while (bVar10 == (plVar2[lVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (iVar5 != iVar7) {
          memmove(plVar2 + iVar5,plVar2 + iVar7,(longlong)(iVar9 - iVar7) << 3);
        }
        iVar5 = iVar5 + (iVar9 - iVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar9;
    } while (lVar6 < lVar4);
    *(int *)(param_1 + 1) = iVar5;
  }
  return;
}



// FUNCTION 1468882fe FUN_1468882fe body=29 status=ok
// SIG undefined FUN_1468882fe(void)

undefined8 FUN_1468882fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146888338 FUN_146888338 body=93 status=ok
// SIG undefined FUN_146888338(void)

void FUN_146888338(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149e68cc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146888396 FUN_146888396 body=93 status=ok
// SIG undefined FUN_146888396(void)

void FUN_146888396(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149e68cc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1468883f4 FUN_1468883f4 body=126 status=ok
// SIG undefined FUN_1468883f4(void)

void FUN_1468883f4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149e68cc0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146888463. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146888480 FUN_146888480 body=21 status=ok
// SIG undefined FUN_146888480(void)

undefined8 FUN_146888480(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146888496 FUN_146888496 body=31 status=ok
// SIG undefined FUN_146888496(void)

undefined8 FUN_146888496(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468884cc FUN_1468884cc body=93 status=ok
// SIG undefined FUN_1468884cc(void)

void FUN_1468884cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e68d30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14688852a FUN_14688852a body=93 status=ok
// SIG undefined FUN_14688852a(void)

void FUN_14688852a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e68d30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 146888588 FUN_146888588 body=126 status=ok
// SIG undefined FUN_146888588(void)

void FUN_146888588(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e063e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e68d30;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001468885f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146888610 FUN_146888610 body=159 status=ok
// SIG undefined FUN_146888610(void)

uint FUN_146888610(longlong param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = 0;
  if (1 < *(int *)(param_1 + 8)) {
    FUN_140c50e86(local_38,param_1,1);
    FUN_144a6c01e(local_38,&local_28);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    puVar2 = local_28;
    if (local_20 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    uVar1 = FUN_144a1ccda(puVar2,0);
    if (local_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar1 = -(uint)(uVar1 == 0) | uVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1468886b0 FUN_1468886b0 body=74 status=ok
// SIG undefined FUN_1468886b0(void)

undefined8 FUN_1468886b0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  if ((lVar1 == 0) || (*(int *)(lVar1 + 0x98) != 1)) {
    FUN_140056680(param_1,L"Unknown");
  }
  else {
    FUN_14171133a(lVar1 + 0x318,param_1);
  }
  return param_1;
}



// FUNCTION 1468886fa FUN_1468886fa body=80 status=ok
// SIG undefined FUN_1468886fa(void)

void FUN_1468886fa(longlong *param_1)

{
  undefined8 *puVar1;
  
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146888740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14688874a FUN_14688874a body=4 status=ok
// SIG undefined FUN_14688874a(void)

void FUN_14688874a(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | param_2;
  return;
}



// FUNCTION 14688874e FUN_14688874e body=27 status=ok
// SIG undefined FUN_14688874e(void)

longlong FUN_14688874e(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    if (param_1[2] == 0) {
      return 0;
    }
    lVar1 = *(longlong *)(param_1[2] + 8);
  }
  return lVar1;
}



// FUNCTION 14688876a FUN_14688876a body=72 status=ok
// SIG undefined FUN_14688876a(void)

undefined8 * FUN_14688876a(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if ((*(uint *)(param_2 + 0x14) >> 0x1e & 1) == 0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar1 = *param_1;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  else {
    puVar1 = (undefined8 *)*param_1;
    *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) & 0xbfffffff;
  }
  *param_1 = 0;
  return puVar1;
}



// FUNCTION 1468887b2 FUN_1468887b2 body=147 status=ok
// SIG undefined FUN_1468887b2(void)

bool FUN_1468887b2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  int local_128 [66];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_138 = 0;
  local_130 = 0;
  local_148 = param_3;
  local_140 = param_4;
  FUN_1467e8cf0(DAT_14c844ed8,local_128,param_2,&local_148);
  if (local_128[0] == 0) {
    *param_5 = local_20;
    param_5[1] = uStack_1c;
    param_5[2] = uStack_18;
    param_5[3] = uStack_14;
  }
  if ((local_10 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return local_128[0] == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146888846 FUN_146888846 body=97 status=ok
// SIG undefined FUN_146888846(void)

void FUN_146888846(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [46];
  undefined1 local_2a [10];
  ulonglong local_20;
  
  uVar1 = DAT_14c844ed8;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140314dc0(param_1 + 8,local_2a);
  FUN_1467e8dec(uVar1,param_1 + 0x18,local_2a);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468888a8 FUN_1468888a8 body=3 status=ok
// SIG undefined FUN_1468888a8(void)

undefined8 FUN_1468888a8(void)

{
  return 0;
}



// FUNCTION 1468888ac thunk_FUN_14031515e body=5 status=ok
// SIG undefined thunk_FUN_14031515e(void)

void thunk_FUN_14031515e(longlong *param_1)

{
  undefined1 uVar1;
  uint5 uVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [40];
  longlong *plStack_30;
  ulonglong uStack_28;
  
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == 0) {
    uVar2 = *(uint5 *)(param_1 + 1);
    uVar1 = *(undefined1 *)((longlong)param_1 + 0xc);
    uVar5 = (ulonglong)*(uint5 *)(param_1 + 1);
    if (uVar5 != 0) {
      lVar4 = FUN_14001fdce(0,uVar5,0);
      *param_1 = lVar4;
      plStack_30 = (longlong *)FUN_14001cc68(0x20,0x10);
      plStack_30[1] = 0;
      plStack_30[2] = 0;
      *plStack_30 = lVar4;
      *(int *)(plStack_30 + 1) = (int)uVar2;
      *(undefined1 *)(plStack_30 + 3) = uVar1;
      *(undefined1 *)((longlong)plStack_30 + 0x19) = 0;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plStack_30 + 0xc) = *(int *)((longlong)plStack_30 + 0xc) + 1;
        UNLOCK();
      }
      cVar3 = FUN_1427d88f8(param_1,&plStack_30);
      if (cVar3 == '\0') {
        FUN_1400ea36e(param_1,param_1);
      }
    }
  }
  if ((uStack_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468888b2 FUN_1468888b2 body=4 status=ok
// SIG undefined FUN_1468888b2(void)

void FUN_1468888b2(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}



// FUNCTION 1468888b6 FUN_1468888b6 body=147 status=ok
// SIG undefined FUN_1468888b6(void)

undefined8 FUN_1468888b6(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (ulonglong)*(uint5 *)(param_1 + 8);
  uVar1 = 0xffffffffffffffff;
  if ((ulonglong)*(uint5 *)(param_1 + 0xd) != 0xffffffffff) {
    uVar1 = (ulonglong)*(uint5 *)(param_1 + 0xd);
  }
  local_30 = param_2;
  local_28 = param_3;
  local_20 = param_4;
  FUN_1411dbd50(&local_18,param_2,param_1 + 0x18,uVar1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14688894a FUN_14688894a body=463 status=ok
// SIG undefined FUN_14688894a(void)

ulonglong FUN_14688894a(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined **local_128 [5];
  byte local_100;
  byte local_ff;
  undefined8 local_98;
  undefined8 local_90;
  ulonglong local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((int)param_1[1] == DAT_14c845dc4 && *param_1 == DAT_14c845dbc) {
    uVar7 = 0;
  }
  else {
    local_48 = *DAT_14c844ed8;
    local_40 = 0;
    uStack_38 = 0;
    local_60 = 0;
    local_58 = 0;
    local_138 = 0x3fffffff;
    local_70 = param_2;
    local_68 = param_3;
    FUN_1417039f6(&local_48,local_50,param_1);
    FUN_144a85b52(&local_78,0);
    FUN_14626a73c(&local_48,local_78);
    (**(code **)(*local_78 + 0x20))(local_78,0xffffffff,0);
    plVar5 = (longlong *)FUN_1467e8f64(local_50);
    uVar7 = CONCAT71((int7)((ulonglong)&local_48 >> 8),plVar5 != (longlong *)0x0);
    if (plVar5 != (longlong *)0x0) {
      puVar3 = (undefined8 *)*plVar5;
      uVar2 = *(undefined4 *)(puVar3 + 1);
      uVar1 = *(undefined1 *)(puVar3 + 3);
      uVar6 = *puVar3;
      memset(local_128,0,0x90);
      FUN_144869430(local_128);
      local_98 = 0;
      local_128[0] = &PTR_FUN_149e1ddc0;
      local_80 = 0x7fffffffffffffff;
      local_100 = local_100 | 1;
      local_ff = local_ff & 0xfe;
      pcVar4 = (code *)*param_4;
      plVar5 = param_4 + 4;
      if ((longlong *)param_4[2] != (longlong *)0x0) {
        plVar5 = (longlong *)param_4[2];
      }
      local_90 = uVar6;
      local_88 = (ulonglong)CONCAT14(uVar1,uVar2);
      uVar6 = (**(code **)(*plVar5 + 8))(plVar5);
      (*pcVar4)(uVar6,local_128);
      FUN_144a7fc42(local_128);
    }
    FUN_144a75412(&local_78);
    FUN_1447ef07c(local_50);
    FUN_1400d6814(&local_48);
  }
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146888b4e FUN_146888b4e body=187 status=ok
// SIG undefined FUN_146888b4e(void)

undefined8 FUN_146888b4e(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_158 [40];
  int local_130;
  undefined1 local_12c [260];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((*(uint *)(param_1 + -8) & 4) == 0) {
    uVar3 = 0;
  }
  else {
    puVar1 = *(undefined8 **)(param_1 + -0x28);
    if ((*(byte *)((longlong)puVar1 + 0x19) & 1) == 0) {
      uVar3 = *puVar1;
    }
    else {
      uVar3 = *puVar1;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined2 *)(puVar1 + 3) = 0;
      iVar2 = DAT_14c845dc8;
      memcpy(local_12c,&DAT_14c845dcc,0x100);
      local_130 = iVar2;
      local_28 = uVar3;
      if (iVar2 != 0) {
        FUN_1467e8feb(&local_130);
        uVar3 = local_28;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146888c0a FUN_146888c0a body=24 status=ok
// SIG undefined FUN_146888c0a(void)

void FUN_146888c0a(longlong *param_1)

{
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146888c1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))(param_1,0xffffffff);
    return;
  }
  return;
}



// FUNCTION 146888c22 FUN_146888c22 body=102 status=ok
// SIG undefined FUN_146888c22(void)

void FUN_146888c22(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong *local_48;
  longlong local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  local_48 = (longlong *)0x0;
  FUN_14048a7c4(param_1,local_58,param_2);
  if (local_58[0] != 0) {
    plVar1 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar1 = local_38;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146888c8a FUN_146888c8a body=243 status=ok
// SIG undefined FUN_146888c8a(void)

void FUN_146888c8a(ulonglong *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  longlong *plVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c948bb0);
  uVar2 = *param_1;
  iVar5 = FUN_144a788f7(uVar2 & 0xffffffff);
  if (DAT_14c948b68 != DAT_14c948b94) {
    puVar6 = &DAT_14c948b98;
    if (DAT_14c948ba0 != (undefined *)0x0) {
      puVar6 = DAT_14c948ba0;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14c948ba8 - 1U & iVar5 + (int)(uVar2 >> 0x20)) * 4);
    if (iVar5 != -1) {
      plVar7 = (longlong *)0x0;
      do {
        puVar1 = (ulonglong *)(DAT_14c948b60 + (longlong)iVar5 * 0x18);
        if (*puVar1 == uVar2) {
          if (puVar1 == (ulonglong *)0x0) goto LAB_146888cbc;
          plVar7 = (longlong *)puVar1[1];
          break;
        }
        iVar5 = (int)puVar1[2];
      } while (iVar5 != -1);
      goto LAB_146888cbe;
    }
  }
LAB_146888cbc:
  plVar7 = (longlong *)0x0;
LAB_146888cbe:
  iVar5 = (int)plVar7[1];
  *(uint *)(plVar7 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)plVar7 + 0xc) < iVar5 + 1U) {
    FUN_1467f3144(plVar7,iVar5);
  }
  lVar3 = *plVar7;
  *(undefined8 *)(lVar3 + (longlong)iVar5 * 0x10) = *param_2;
  lVar4 = param_2[1];
  *(longlong *)(lVar3 + 8 + (longlong)iVar5 * 0x10) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
                    /* WARNING: Could not recover jumptable at 0x000146888cff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c948bb0);
  return;
}



// FUNCTION 146888d7e FUN_146888d7e body=68 status=ok
// SIG undefined FUN_146888d7e(void)

void FUN_146888d7e(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_145ec7255(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1467f31f2(param_1,param_2);
  return;
}



// FUNCTION 146888dc4 FUN_146888dc4 body=283 status=ok
// SIG undefined FUN_146888dc4(void)

void FUN_146888dc4(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined8 **)param_2[1];
  if ((undefined8 *)((longlong *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,8);
    }
    else {
      FUN_146821949(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
  }
  puVar1 = *(undefined8 **)param_2[1];
  if ((undefined8 *)((longlong *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 1,8);
    }
    else {
      FUN_146821949(param_2);
    }
  }
  else {
    param_1[1] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
  }
  (**(code **)(*param_2 + 0x170))(param_2,param_1 + 2,0xc);
  puVar3 = (undefined4 *)((longlong)param_1 + 0x1c);
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146888e9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x170))(param_2,puVar3,4);
      return;
    }
    FUN_14572512c(param_2,puVar3);
    return;
  }
  *puVar3 = *puVar2;
  *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  return;
}



// FUNCTION 146888ee0 FUN_146888ee0 body=224 status=ok
// SIG undefined FUN_146888ee0(void)

int * FUN_146888ee0(int *param_1,longlong *param_2,undefined8 *param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  
  if (*param_2 == 0) {
    puVar10 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    *puVar10 = FUN_14688b704;
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[5] = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    puVar10[0xc] = 0;
    puVar10[0xd] = 0;
    *(undefined1 *)((longlong)puVar10 + 0x24) = 3;
    *param_2 = (longlong)(puVar10 + 2);
  }
  iVar9 = FUN_146888fc0();
  lVar2 = *(longlong *)*param_2;
  lVar11 = (longlong)iVar9 * 0x68;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  puVar1 = (undefined4 *)(lVar2 + 0x38 + lVar11);
  *puVar1 = *param_4;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  *(undefined8 *)(lVar2 + 0x48 + lVar11) = *(undefined8 *)(param_4 + 4);
  *(undefined1 *)(lVar2 + 0x60 + lVar11) = param_5;
  *param_1 = iVar9;
  if (*(char *)((longlong)param_3 + 0x1b) != '\0') {
    puVar10 = (undefined8 *)(lVar2 + lVar11);
    (*(code *)(&PTR_LAB_149e69c00)[*(byte *)(puVar10 + 6)])(puVar10);
    *puVar10 = 0;
    uVar6 = param_3[1];
    uVar7 = param_3[2];
    uVar8 = param_3[3];
    puVar10[1] = *param_3;
    puVar10[2] = uVar6;
    puVar10[3] = uVar7;
    puVar10[4] = uVar8;
    *(undefined1 *)(puVar10 + 5) = 0;
    *(undefined1 *)(puVar10 + 6) = 1;
  }
  return param_1;
}



// FUNCTION 146888fc0 FUN_146888fc0 body=55 status=ok
// SIG undefined FUN_146888fc0(void)

int FUN_146888fc0(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14688b748(param_1,iVar1);
  }
  FUN_14688b722((longlong)iVar1 * 0x68 + *param_1);
  return iVar1;
}



// FUNCTION 146888ff8 FUN_146888ff8 body=311 status=ok
// SIG undefined FUN_146888ff8(void)

void FUN_146888ff8(longlong *param_1,longlong *param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  longlong *plVar19;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_1 == 0) {
    lVar1 = *param_2;
    if (lVar1 != 0) {
      *param_2 = 0;
      (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
    }
    pcVar2 = (code *)*param_4;
    if (pcVar2 != (code *)0x0) {
      plVar19 = param_4 + 4;
      if ((longlong *)param_4[2] != (longlong *)0x0) {
        plVar19 = (longlong *)param_4[2];
      }
      uVar18 = (**(code **)(*plVar19 + 8))();
      (*pcVar2)(uVar18);
    }
  }
  lVar1 = *param_1;
  uVar18 = *(undefined8 *)(lVar1 + 0x20);
  uVar4 = *(undefined8 *)(lVar1 + 0x28);
  uVar5 = *(undefined8 *)(lVar1 + 0x30);
  uVar6 = *(undefined8 *)(lVar1 + 0x38);
  uVar7 = *(undefined8 *)(lVar1 + 0x40);
  uVar8 = *(undefined8 *)(lVar1 + 0x48);
  uVar9 = *(undefined8 *)(lVar1 + 0x50);
  uVar10 = *(undefined8 *)(lVar1 + 0x58);
  uVar11 = *param_4;
  uVar12 = param_4[1];
  uVar13 = param_4[2];
  uVar14 = param_4[3];
  uVar15 = param_4[4];
  uVar16 = param_4[5];
  uVar17 = param_4[7];
  *(undefined8 *)(lVar1 + 0x50) = param_4[6];
  *(undefined8 *)(lVar1 + 0x58) = uVar17;
  *(undefined8 *)(lVar1 + 0x40) = uVar15;
  *(undefined8 *)(lVar1 + 0x48) = uVar16;
  *(undefined8 *)(lVar1 + 0x30) = uVar13;
  *(undefined8 *)(lVar1 + 0x38) = uVar14;
  *(undefined8 *)(lVar1 + 0x20) = uVar11;
  *(undefined8 *)(lVar1 + 0x28) = uVar12;
  local_78._0_4_ = (undefined4)uVar18;
  local_78._4_4_ = (undefined4)((ulonglong)uVar18 >> 0x20);
  uStack_70._0_4_ = (undefined4)uVar4;
  uStack_70._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_68._0_4_ = (undefined4)uVar5;
  local_68._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_60._0_4_ = (undefined4)uVar6;
  uStack_60._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_58._0_4_ = (undefined4)uVar7;
  local_58._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar8;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  local_48._0_4_ = (undefined4)uVar9;
  local_48._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar10;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
  *(undefined4 *)(param_4 + 6) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_4 + 0x34) = local_48._4_4_;
  *(undefined4 *)(param_4 + 7) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_4 + 0x3c) = uStack_40._4_4_;
  *(undefined4 *)(param_4 + 4) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_4 + 0x24) = local_58._4_4_;
  *(undefined4 *)(param_4 + 5) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_4 + 0x2c) = uStack_50._4_4_;
  *(undefined4 *)(param_4 + 2) = (undefined4)local_68;
  *(undefined4 *)((longlong)param_4 + 0x14) = local_68._4_4_;
  *(undefined4 *)(param_4 + 3) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)param_4 + 0x1c) = uStack_60._4_4_;
  *(undefined4 *)param_4 = (undefined4)local_78;
  *(undefined4 *)((longlong)param_4 + 4) = local_78._4_4_;
  *(undefined4 *)(param_4 + 1) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)param_4 + 0xc) = uStack_70._4_4_;
  local_78 = uVar18;
  uStack_70 = uVar4;
  local_68 = uVar5;
  uStack_60 = uVar6;
  local_58 = uVar7;
  uStack_50 = uVar8;
  local_48 = uVar9;
  uStack_40 = uVar10;
  if (param_1 != param_2) {
    lVar3 = *param_2;
    *param_2 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      (**(code **)(lVar3 + -0x10))(lVar3 + -0x10);
    }
  }
  LOCK();
  *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
  UNLOCK();
  FUN_146889130(lVar1,param_3);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_1468891f8(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146889130 FUN_146889130 body=198 status=ok
// SIG undefined FUN_146889130(void)

void FUN_146889130(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c844ed8 == (undefined8 *)0x0) {
    local_48 = 0;
  }
  else {
    local_48 = *DAT_14c844ed8;
  }
  local_40 = 0;
  uStack_38 = 0;
  local_30 = param_2;
  if ((longlong)(int)param_1[1] != 0) {
    lVar1 = *param_1;
    lVar2 = (longlong)(int)param_1[1] * 0x68;
    do {
      if ((lVar1 == 0) || (*(char *)(lVar1 + 0x30) != '\x01')) {
        *(undefined1 *)(lVar1 + 0x61) = 1;
      }
      else {
        FUN_146889396(&local_48,param_1,lVar1,lVar1);
      }
      lVar1 = lVar1 + 0x68;
      lVar2 = lVar2 + -0x68;
    } while (lVar2 != 0);
  }
  FUN_1400d20b8(local_48,&local_48,0);
  FUN_1400d6814(&local_48);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468891f8 FUN_1468891f8 body=224 status=ok
// SIG undefined FUN_1468891f8(void)

void FUN_1468891f8(longlong *param_1)

{
  byte bVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 uVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  code *local_58;
  longlong *local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  LOCK();
  plVar3 = param_1 + 2;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    if ((longlong)(int)param_1[1] == 0) {
      bVar5 = 0;
    }
    else {
      lVar6 = 0;
      bVar5 = 0;
      do {
        bVar1 = *(byte *)(*param_1 + 0x61 + lVar6);
        if (bVar5 < bVar1) {
          bVar5 = bVar1;
        }
        lVar6 = lVar6 + 0x68;
      } while ((longlong)(int)param_1[1] * 0x68 - lVar6 != 0);
    }
    *(byte *)((longlong)param_1 + 0x14) = bVar5;
    pcVar2 = (code *)param_1[4];
    local_48 = (longlong *)param_1[6];
    param_1[6] = 0;
    local_28 = (int)param_1[10];
    uStack_24 = *(undefined4 *)((longlong)param_1 + 0x54);
    uStack_20 = (int)param_1[0xb];
    uStack_1c = *(undefined4 *)((longlong)param_1 + 0x5c);
    local_38 = (int)param_1[8];
    uStack_34 = *(undefined4 *)((longlong)param_1 + 0x44);
    uStack_30 = (int)param_1[9];
    uStack_2c = *(undefined4 *)((longlong)param_1 + 0x4c);
    local_58 = pcVar2;
    if (pcVar2 != (code *)0x0) {
      param_1[4] = 0;
      plVar3 = local_48;
      if (local_48 == (longlong *)0x0) {
        plVar3 = (longlong *)&local_38;
      }
      uVar4 = (**(code **)(*plVar3 + 8))(plVar3);
      (*pcVar2)(uVar4);
      if (local_58 != (code *)0x0) {
        plVar3 = (longlong *)&local_38;
        if (local_48 != (longlong *)0x0) {
          plVar3 = local_48;
        }
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468892da FUN_1468892da body=77 status=ok
// SIG undefined FUN_1468892da(void)

void FUN_1468892da(longlong *param_1)

{
  longlong *plVar1;
  
  FUN_146889328();
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_14688b7df(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146889328 FUN_146889328 body=110 status=ok
// SIG undefined FUN_146889328(void)

bool FUN_146889328(undefined8 *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  
  bVar4 = true;
  if (*(char *)((longlong)param_1 + 0x14) == '\x03') {
    if ((longlong)*(int *)(param_1 + 1) != 0) {
      plVar3 = (longlong *)*param_1;
      lVar2 = (longlong)*(int *)(param_1 + 1) * 0x68;
      do {
        if ((plVar3 != (longlong *)0x0) && ((char)plVar3[6] == '\x01')) {
          LOCK();
          bVar1 = *(byte *)(plVar3 + 5);
          *(byte *)(plVar3 + 5) = 1;
          UNLOCK();
          if (((bVar1 & 1) == 0) && ((DAT_14c844ed8 != (undefined8 *)0x0 && (*plVar3 != 0)))) {
            FUN_1402e42a2(*DAT_14c844ed8);
          }
        }
        plVar3 = plVar3 + 0xd;
        lVar2 = lVar2 + -0x68;
      } while (lVar2 != 0);
    }
    bVar4 = *(char *)((longlong)param_1 + 0x14) != '\x03';
  }
  return bVar4;
}



// FUNCTION 146889396 FUN_146889396 body=423 status=ok
// SIG undefined FUN_146889396(void)

void FUN_146889396(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  undefined1 uVar2;
  undefined ***pppuVar3;
  ulonglong uVar4;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  code **local_180;
  longlong local_170;
  longlong local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined1 local_150 [8];
  code *local_148 [2];
  undefined ***local_138;
  undefined **local_128;
  longlong local_120;
  longlong local_118;
  ulonglong local_40;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_28 = *(undefined4 *)(param_4 + 0x20);
  local_30 = *(undefined8 *)(param_4 + 0x18);
  if (*(char *)(param_3 + 0x60) == '\0') {
    LOCK();
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
    UNLOCK();
    local_138 = (undefined ***)0x0;
    local_128 = &PTR_LAB_149e69c20;
    local_148[0] = FUN_1427da2f8;
    local_188 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = *(ulonglong *)(param_3 + 0x48);
    local_170 = *(longlong *)(param_4 + 8) + uVar4;
    local_158 = 0;
    local_160 = *(undefined8 *)(param_3 + 0x38);
    local_168 = *(longlong *)(param_3 + 0x40);
    if (*(longlong *)(param_3 + 0x40) == -1) {
      uVar1 = *(ulonglong *)(param_4 + 0x10);
      if (uVar1 == 0xffffffffffffffff) {
        local_168 = -1;
      }
      else {
        local_168 = 0;
        if (uVar4 <= uVar1) {
          local_168 = uVar1 - uVar4;
        }
      }
    }
    local_180 = local_148;
    local_120 = param_2;
    local_118 = param_3;
    FUN_144750922(param_1,local_150,&local_30);
    FUN_1447ef144(param_4,local_150);
    FUN_1447ef07c(local_150);
    if (local_148[0] != (code *)0x0) {
      pppuVar3 = local_138;
      if (local_138 == (undefined ***)0x0) {
        pppuVar3 = &local_128;
      }
      (*(code *)(*pppuVar3)[2])();
    }
  }
  else {
    FUN_1467e8e76(DAT_14c844ed8,local_148,&local_30);
    uVar2 = 1;
    if ((int)local_148[0] == 0) {
      uVar2 = 0;
      uVar4 = 0;
      if (*(ulonglong *)(param_3 + 0x48) <= local_40) {
        uVar4 = local_40 - *(ulonglong *)(param_3 + 0x48);
      }
      if (*(ulonglong *)(param_3 + 0x40) < uVar4) {
        uVar4 = *(ulonglong *)(param_3 + 0x40);
      }
      *(ulonglong *)(param_3 + 0x58) = uVar4;
    }
    *(undefined1 *)(param_3 + 0x61) = uVar2;
  }
  if ((local_20 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14688953e FUN_14688953e body=694 status=ok
// SIG undefined FUN_14688953e(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14688953e(undefined8 param_1,longlong param_2,int *param_3)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined1 auStack_188 [40];
  longlong local_160;
  undefined8 local_158;
  undefined2 local_da;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (*param_3 != 0) {
    *(char *)(param_2 + 0x61) = (*param_3 == 3) + '\x01';
    goto LAB_1468896cc;
  }
  *param_3 = DAT_14c845ecc;
  memcpy(param_3 + 1,&DAT_14c845ed0,0x100);
  puVar6 = *(undefined8 **)(param_3 + 0x42);
  param_3[0x42] = 0;
  param_3[0x43] = 0;
  uVar11 = (ulonglong)CONCAT14(*(undefined1 *)(puVar6 + 3),*(undefined4 *)(puVar6 + 1));
  if (*(longlong *)(param_2 + 0x38) == 0) {
    if ((*(byte *)((longlong)puVar6 + 0x19) & 1) == 0) {
      memcpy((int *)((longlong)&local_158 + 4),
             L"Cannot call release on a FIoBuffer unless it owns it\'s memory",0x7a);
      local_da = 0;
      local_158._0_4_ = 0xb;
LAB_146889619:
      FUN_1467e8feb(&local_158);
    }
    else {
      uVar7 = *puVar6;
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined2 *)(puVar6 + 3) = 0;
      iVar8 = DAT_14c845dc8;
      memcpy((int *)((longlong)&local_158 + 4),&DAT_14c845dcc,0x100);
      local_158._0_4_ = iVar8;
      local_50 = uVar7;
      if (iVar8 != 0) goto LAB_146889619;
    }
    uVar7 = local_50;
    local_158._0_4_ = DAT_14c845ecc;
    memcpy((int *)((longlong)&local_158 + 4),&DAT_14c845ed0,0x100);
    puVar9 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    puVar9[1] = uVar7;
    puVar9[2] = uVar11;
    puVar9[3] = 0;
    *puVar9 = &PTR_FUN_149e69c40;
    puVar9[4] = FUN_1400020a8;
    LOCK();
    puVar9[3] = puVar9[3] | 0x4000000000000000;
    UNLOCK();
    LOCK();
    puVar9[3] = puVar9[3] | 0x1000000000000000;
    UNLOCK();
    LOCK();
    puVar9[3] = puVar9[3] | 0x2000000000000000;
    UNLOCK();
    plVar10 = &local_160;
    FUN_1467fe89c(plVar10,puVar9);
  }
  else {
    plVar10 = &local_158;
    FUN_1467fe818(plVar10,*(longlong *)(param_2 + 0x38),uVar11);
  }
  FUN_1467aa942(param_2 + 0x50,plVar10);
  plVar10 = (longlong *)*plVar10;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar10 + 3;
    lVar4 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (((uint)lVar4 & 0x3fffffff) == 1) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      plVar10[1] = 0;
      plVar10[2] = 0;
      LOCK();
      puVar3 = (ulonglong *)(plVar10 + 3);
      uVar5 = *puVar3;
      *puVar3 = *puVar3 - 0x40000000;
      UNLOCK();
      if ((uVar5 & 0xfffffffc0000000) == 0x40000000) {
        (**(code **)*plVar10)(plVar10,1);
      }
    }
  }
  *(ulonglong *)(param_2 + 0x58) = uVar11;
  *(undefined1 *)(param_2 + 0x61) = 0;
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)puVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_144716208(puVar6);
      FUN_1400020a8(puVar6);
    }
  }
LAB_1468896cc:
  FUN_141703b80(param_2);
  FUN_1468891f8(param_1);
  FUN_1427683c4(param_3);
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468897f6 FUN_1468897f6 body=256 status=ok
// SIG undefined FUN_1468897f6(void)

void FUN_1468897f6(longlong param_1)

{
  longlong lVar1;
  undefined2 *puVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  undefined2 *local_38;
  int local_30;
  undefined1 local_21;
  code *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14689b411(&local_38,*(undefined8 *)(param_1 + 0x70));
  puVar2 = local_38;
  if (local_30 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  local_18 = &local_21;
  local_20 = FUN_141073f72;
  lVar1 = FUN_144a773aa(&local_20,&DAT_14c75ec34);
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + 0x30);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x10) == 0)) {
    FUN_140056680(&local_20,&DAT_149e01fe8);
  }
  else {
    FUN_144750a86(lVar1,&local_20,0,0);
  }
  pcVar3 = local_20;
  if ((int)local_18 == 0) {
    pcVar3 = (code *)&DAT_149dfb77a;
  }
  local_48 = puVar2;
  FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/DuplicateDataReader.cpp",0x2c,
                L"FDuplicateDataReader Overread. SerializedObject = %s SerializedProperty = %s",
                pcVar3);
  if (local_20 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468898f8 FUN_1468898f8 body=376 status=ok
// SIG undefined FUN_1468898f8(void)

longlong * FUN_1468898f8(longlong *param_1,ulonglong *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong *puVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
  uVar4 = *param_2;
  if (uVar4 != 0) {
    lVar2 = param_1[0x12];
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 0x58);
    EnterCriticalSection(lpCriticalSection);
    if (*(ulonglong *)(lVar2 + 0x80) == uVar4) {
      uVar4 = *(ulonglong *)(lVar2 + 0x88);
    }
    else {
      *(ulonglong *)(lVar2 + 0x80) = uVar4;
      if (*(int *)(lVar2 + 0x10) != *(int *)(lVar2 + 0x3c)) {
        uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        lVar5 = lVar2 + 0x40;
        if (*(longlong *)(lVar2 + 0x48) != 0) {
          lVar5 = *(longlong *)(lVar2 + 0x48);
        }
        iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar2 + 0x50) - 1U & (uVar3 >> 0x10 ^ uVar3))
                                 * 4);
        if (iVar6 != -1) {
          do {
            puVar1 = (ulonglong *)(*(longlong *)(lVar2 + 8) + (longlong)iVar6 * 0x18);
            if (*puVar1 == uVar4) {
              if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
                uVar4 = puVar1[1];
                *(ulonglong *)(lVar2 + 0x88) = uVar4;
                goto LAB_14688996b;
              }
              break;
            }
            iVar6 = (int)puVar1[2];
          } while (iVar6 != -1);
        }
      }
      *(undefined8 *)(lVar2 + 0x88) = 0;
      uVar4 = 0;
    }
LAB_14688996b:
    local_38 = uVar4;
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    if (uVar4 != 0) {
      uVar4 = FUN_1409ca440(&local_38);
      if ((uVar4 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(uVar4);
      }
      *param_2 = uVar4;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146889a72 FUN_146889a72 body=139 status=ok
// SIG undefined FUN_146889a72(void)

longlong FUN_146889a72(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1402ac1b3();
  if ((*(byte *)(param_1 + 0x36) & 0x40) != 0) {
    uVar1 = FUN_140d25081();
    FUN_1468b521e(&local_38,&local_48,uVar1);
    local_38 = local_48;
    uStack_30 = uStack_40;
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_38._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_30._4_4_;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146889afe FUN_146889afe body=479 status=ok
// SIG undefined FUN_146889afe(void)

longlong FUN_146889afe(longlong param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong *puVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14010d536(param_2,param_1);
  uVar4 = FUN_140007850(param_2);
  if (uVar4 == 0) {
    local_38 = 0;
    iVar7 = 0;
    uVar4 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x90);
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 0x58);
    EnterCriticalSection(lpCriticalSection);
    if (*(ulonglong *)(lVar2 + 0x80) == uVar4) {
      uVar4 = *(ulonglong *)(lVar2 + 0x88);
    }
    else {
      *(ulonglong *)(lVar2 + 0x80) = uVar4;
      if (*(int *)(lVar2 + 0x10) != *(int *)(lVar2 + 0x3c)) {
        uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        lVar6 = lVar2 + 0x40;
        if (*(longlong *)(lVar2 + 0x48) != 0) {
          lVar6 = *(longlong *)(lVar2 + 0x48);
        }
        iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(lVar2 + 0x50) - 1U & (uVar3 >> 0x10 ^ uVar3))
                                 * 4);
        if (iVar7 != -1) {
          do {
            puVar1 = (ulonglong *)(*(longlong *)(lVar2 + 8) + (longlong)iVar7 * 0x18);
            if (*puVar1 == uVar4) {
              if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
                uVar4 = puVar1[1];
                *(ulonglong *)(lVar2 + 0x88) = uVar4;
                goto LAB_146889b81;
              }
              break;
            }
            iVar7 = (int)puVar1[2];
          } while (iVar7 != -1);
        }
      }
      *(undefined8 *)(lVar2 + 0x88) = 0;
      uVar4 = 0;
    }
LAB_146889b81:
    iVar7 = (int)(uVar4 >> 0x20);
    local_38 = uVar4;
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  if (iVar7 != 0 || (int)uVar4 != 0) {
    uVar5 = FUN_1409ca440(&local_38);
    FUN_1400bbfae(&local_58,uVar5);
    *param_2 = local_58;
    param_2[1] = uStack_54;
    param_2[2] = uStack_50;
    param_2[3] = uStack_4c;
    if (&local_58 == param_2) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 4) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 4) = local_48;
      param_2[6] = local_40;
      param_2[7] = local_3c;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146889cde FUN_146889cde body=74 status=ok
// SIG undefined FUN_146889cde(void)

longlong * FUN_146889cde(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  (**(code **)(*param_1 + 0x150))();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146889d2a FUN_146889d2a body=408 status=ok
// SIG undefined FUN_146889d2a(void)

longlong FUN_146889d2a(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x36) & 0x40) == 0) {
    lVar3 = FUN_14479d2ce(param_2);
    if (lVar3 == 0) {
      if (((*(int *)(param_2 + 0xc) == 0 && *(int *)(param_2 + 8) == 0) &&
          *(int *)(param_2 + 0x10) == 0) && *(int *)(param_2 + 0x14) == 0) {
LAB_146889e93:
        lVar3 = 0;
      }
      else {
        lVar4 = thunk_FUN_140971090();
        cVar2 = (*(code *)PTR_FUN_14c758760)();
        if ((lVar4 == 0) || (cVar2 == '\0')) {
          FUN_14485c47a(param_2,lVar4);
          if (lVar4 == 0) goto LAB_146889e93;
        }
        else {
          uVar1 = *(uint *)(lVar4 + 0xc);
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar3 = 0;
          }
          if ((*(uint *)(lVar3 + 8) & 0x8400000) == 0) {
            FUN_14485c47a(param_2,lVar4);
          }
        }
        lVar3 = 0;
        if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) {
          lVar3 = lVar4;
        }
      }
    }
    lVar3 = FUN_14076b71e(param_1,lVar3,0);
    if (lVar3 != 0) {
      puVar5 = &uStack_30;
      local_38 = 0;
      uStack_30 = 0;
      local_28 = 0;
      FUN_1468b526e(puVar5,lVar3);
      cVar2 = (*(code *)PTR_FUN_14c758760)();
      if (cVar2 != '\0') {
        uVar1 = *(uint *)(lVar3 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        if ((*(uint *)(lVar4 + 8) & 0x8400000) != 0) {
          local_38 = 0;
          goto LAB_146889ddf;
        }
      }
      FUN_14485c47a(&local_38,lVar3);
      goto LAB_146889ddf;
    }
  }
  local_38 = *(undefined8 *)(param_2 + 8);
  uStack_30 = *(undefined8 *)(param_2 + 0x10);
  puVar5 = &local_38;
LAB_146889ddf:
  FUN_1402ac1b3(param_1,puVar5);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146889ec8 FUN_146889ec8 body=13 status=ok
// SIG undefined FUN_146889ec8(void)

undefined2 * FUN_146889ec8(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 146889ed6 FUN_146889ed6 body=57 status=ok
// SIG undefined FUN_146889ed6(void)

void FUN_146889ed6(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x1b8))(plVar1,param_1,0);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  FUN_14152e1c8(param_1 + 0x28);
  return;
}



// FUNCTION 146889f10 FUN_146889f10 body=478 status=ok
// SIG undefined FUN_146889f10(void)

ulong * FUN_146889f10(ulong *param_1,ulong *param_2)

{
  longlong *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  longlong *plVar6;
  int iVar7;
  uchar auVar8 [8];
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (longlong *)0x0;
  uStack_50._0_1_ = '\x02';
  uStack_50._1_1_ = '\0';
  uStack_50._2_1_ = '\0';
  uStack_50._3_1_ = '\0';
  FUN_14014a230(&local_58,2,0);
  auVar8 = uStack_50;
  plVar6 = local_58;
  *local_58 = (longlong)(param_1 + 0x16);
  local_58[1] = (longlong)(param_2 + 0x16);
  iVar7 = (ulong)uStack_50;
  lVar11 = (longlong)(int)(ulong)uStack_50;
  local_58 = (longlong *)0x0;
  uStack_50._0_1_ = '\0';
  uStack_50._1_1_ = '\0';
  uStack_50._2_1_ = '\0';
  uStack_50._3_1_ = '\0';
  uStack_50._4_1_ = '\0';
  uStack_50._5_1_ = '\0';
  uStack_50._6_1_ = '\0';
  uStack_50._7_1_ = '\0';
  FUN_14014a36d(plVar6,(ulonglong)auVar8 & 0xffffffff);
  if (lVar11 != 0) {
    lVar12 = 0;
    do {
      FUN_14490b2fc(*(undefined8 *)((longlong)plVar6 + lVar12));
      lVar12 = lVar12 + 8;
    } while (lVar11 * 8 - lVar12 != 0);
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (((param_1[0x15] & 0x80) == 0) && ((param_2[0x15] & 0x80) == 0)) {
    if ((((param_1[1] == 0 && *param_1 == 0) && param_1[2] == 0) && param_1[3] == 0) &&
       (((param_2[1] != 0 || *param_2 != 0) || param_2[2] != 0) || param_2[3] != 0)) {
      local_58 = (longlong *)0x0;
      uStack_50._0_1_ = '\0';
      uStack_50._1_1_ = '\0';
      uStack_50._2_1_ = '\0';
      uStack_50._3_1_ = '\0';
      uStack_50._4_1_ = '\0';
      uStack_50._5_1_ = '\0';
      uStack_50._6_1_ = '\0';
      uStack_50._7_1_ = '\0';
      CoCreateGuid((GUID *)&local_58);
      *param_1 = (ulong)local_58;
      param_1[1] = local_58._4_4_;
      param_1[2] = (ulong)uStack_50;
      param_1[3] = uStack_50._4_4_;
    }
    bVar5 = false;
  }
  else {
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    bVar5 = true;
  }
  plVar1 = *(longlong **)(param_1 + 0xe);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x1b8))(plVar1,param_1,0);
  }
  param_1[8] = param_2[8];
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  FUN_14688ab98(param_1 + 10,param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  FUN_1427b9478(param_1 + 0x12,param_2 + 0x12);
  uVar9 = param_2[0x15];
  param_1[0x15] = uVar9;
  *(undefined1 *)((longlong)param_1 + 99) = *(undefined1 *)((longlong)param_2 + 99);
  *(undefined2 *)((longlong)param_1 + 0x61) = *(undefined2 *)((longlong)param_2 + 0x61);
  plVar1 = *(longlong **)(param_1 + 0xe);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x1a8))(plVar1,param_1);
    uVar9 = param_1[0x15];
  }
  uVar10 = (uVar9 & 0xfffff73f) + 0x80;
  if (!bVar5) {
    uVar10 = uVar9 & 0xfffff73f;
  }
  param_1[0x15] = uVar10;
  if (iVar7 != 0) {
    lVar12 = 0;
    do {
      FUN_144a6a7be(*(undefined8 *)((longlong)plVar6 + lVar12));
      lVar12 = lVar12 + 8;
    } while (lVar11 * 8 != lVar12);
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_1400020a8(plVar6);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14688a0f0 FUN_14688a0f0 body=105 status=ok
// SIG undefined FUN_14688a0f0(void)

void FUN_14688a0f0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x54) & 0x20) != 0) {
    FUN_1467a8fd6(param_2,&local_34);
    *(undefined4 *)(param_1 + 0x20) = local_24;
    *(undefined4 *)(param_1 + 0x10) = local_34;
    *(undefined4 *)(param_1 + 0x14) = uStack_30;
    *(undefined4 *)(param_1 + 0x18) = uStack_2c;
    *(undefined4 *)(param_1 + 0x1c) = uStack_28;
    *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) & 0xdf;
  }
  FUN_1458cf622(param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14688a15a FUN_14688a15a body=199 status=ok
// SIG undefined FUN_14688a15a(void)

undefined8 * FUN_14688a15a(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined1 local_30 [8];
  undefined1 *local_28;
  ulonglong local_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = param_3[4];
  local_58 = &local_48;
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  local_28 = (undefined1 *)0x0;
  local_20 = 0x100000000;
  local_18 = 0;
  local_50 = 1;
  cVar1 = (**(code **)(*param_1 + 0x38))();
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined4 *)((longlong)param_2 + 0x14) = 1;
  }
  else {
    param_2[1] = 0;
    puVar2 = local_28;
    if (local_28 == (undefined1 *)0x0) {
      puVar2 = local_30;
    }
    FUN_1467ac028(param_2,puVar2,local_20 & 0xffffffff,0);
  }
  FUN_1458cf622(local_30);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14688a222 FUN_14688a222 body=55 status=ok
// SIG undefined FUN_14688a222(void)

undefined8 * FUN_14688a222(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  *param_1 = uVar1;
  FUN_1427d9fa1(param_1 + 1,param_1);
  FUN_14152e1c8(param_2);
  return param_1;
}



// FUNCTION 14688a25a FUN_14688a25a body=30 status=ok
// SIG undefined FUN_14688a25a(void)

void FUN_14688a25a(undefined8 param_1,longlong param_2)

{
  FUN_1427d939a(param_1,param_2,param_2 + 8);
  FUN_14152e1c8(param_2);
  return;
}



// FUNCTION 14688a278 FUN_14688a278 body=237 status=ok
// SIG undefined FUN_14688a278(void)

longlong * FUN_14688a278(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  local_20 = 0;
  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
  }
  else {
    FUN_146821860(param_1,&local_1c,4);
  }
  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_20,4);
  }
  else {
    FUN_146821860(param_1,&local_20,4);
  }
  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
  }
  else {
    FUN_146821860(param_1,&local_24,4);
  }
  *param_2 = CONCAT44(local_24,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14688a366 FUN_14688a366 body=57 status=ok
// SIG undefined FUN_14688a366(void)

longlong * FUN_14688a366(longlong *param_1,undefined8 param_2)

{
  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
  }
  else {
    FUN_146821860(param_1,param_2,8);
  }
  return param_1;
}



// FUNCTION 14688a3a0 FUN_14688a3a0 body=57 status=ok
// SIG undefined FUN_14688a3a0(void)

longlong * FUN_14688a3a0(longlong *param_1,undefined8 param_2)

{
  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
  }
  else {
    FUN_146821860(param_1,param_2,8);
  }
  return param_1;
}



// FUNCTION 14688a3da FUN_14688a3da body=94 status=ok
// SIG undefined FUN_14688a3da(void)

undefined8 FUN_14688a3da(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1402ac1b3(0,&local_38);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_38._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_30._4_4_;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14688a43a thunk_FUN_1401fb7cc body=5 status=ok
// SIG undefined thunk_FUN_1401fb7cc(void)

longlong * thunk_FUN_1401fb7cc(longlong *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  longlong lStack_30;
  ulonglong uStack_28;
  
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)((longlong)param_1 + 0x2b) & 6) == 2) goto LAB_1401fb8a2;
  if (param_2[1] == 0) {
LAB_1401fb8d8:
    lStack_30 = 0;
  }
  else {
    uVar2 = *param_2;
    lStack_30 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar3 == (longlong *)0x0) ||
         ((*(uint *)(plVar3 + 2) != param_2[1] || ((*(uint *)(plVar3 + 1) >> 0x1c & 1) != 0))))
      goto LAB_1401fb8d8;
      lStack_30 = *plVar3;
    }
  }
  (**(code **)(*param_1 + 0x150))(param_1);
  if (((*(byte *)(param_1 + 5) & 1) != 0) || ((*(byte *)((longlong)param_1 + 0x2b) & 4) != 0)) {
    if (lStack_30 == 0) {
      *param_2 = 0;
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(lStack_30 + 0xc);
      *param_2 = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      uVar2 = *(uint *)(lVar5 + 0x10);
      if (*(uint *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar4 = DAT_14c964868 + 1;
        bVar6 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar6) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar4);
        }
        LOCK();
        uVar2 = *(uint *)(lVar5 + 0x10);
        bVar6 = uVar2 == 0;
        if (bVar6) {
          *(uint *)(lVar5 + 0x10) = uVar4;
          uVar2 = 0;
        }
        UNLOCK();
        if (bVar6) {
          uVar2 = uVar4;
        }
      }
    }
    param_2[1] = uVar2;
  }
LAB_1401fb8a2:
  if ((uStack_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14688a440 FUN_14688a440 body=32 status=ok
// SIG undefined FUN_14688a440(void)

undefined8 FUN_14688a440(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FObjectReader");
  return param_2;
}



// FUNCTION 14688a460 FUN_14688a460 body=221 status=ok
// SIG undefined FUN_14688a460(void)

longlong * FUN_14688a460(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  local_1c = param_2[1];
  local_14 = local_18;
  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_14,4);
  }
  else {
    FUN_146821860(param_1,&local_14,4);
  }
  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_18,4);
  }
  else {
    FUN_146821860(param_1,&local_18,4);
  }
  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
  }
  else {
    FUN_146821860(param_1,&local_1c,4);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14688a53e FUN_14688a53e body=57 status=ok
// SIG undefined FUN_14688a53e(void)

longlong * FUN_14688a53e(longlong *param_1,undefined8 param_2)

{
  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
  }
  else {
    FUN_146821860(param_1,param_2,8);
  }
  return param_1;
}



// FUNCTION 14688a578 FUN_14688a578 body=57 status=ok
// SIG undefined FUN_14688a578(void)

longlong * FUN_14688a578(longlong *param_1,undefined8 param_2)

{
  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
  }
  else {
    FUN_146821860(param_1,param_2,8);
  }
  return param_1;
}



// FUNCTION 14688a5b2 FUN_14688a5b2 body=71 status=ok
// SIG undefined FUN_14688a5b2(void)

undefined8 FUN_14688a5b2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined4 *)(param_2 + 8);
  uStack_24 = *(undefined4 *)(param_2 + 0xc);
  uStack_20 = *(undefined4 *)(param_2 + 0x10);
  uStack_1c = *(undefined4 *)(param_2 + 0x14);
  FUN_1402ac1b3();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14688a5fa FUN_14688a5fa body=17 status=ok
// SIG undefined FUN_14688a5fa(void)

void FUN_14688a5fa(longlong *param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014688a608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x128))(param_1,param_2 + 8);
  return;
}



// FUNCTION 14688a60c FUN_14688a60c body=28 status=ok
// SIG undefined FUN_14688a60c(void)

undefined8 FUN_14688a60c(undefined8 param_1,undefined8 param_2)

{
  FUN_14010d536(param_2,param_1);
  return param_1;
}



// FUNCTION 14688a62e FUN_14688a62e body=32 status=ok
// SIG undefined FUN_14688a62e(void)

undefined8 FUN_14688a62e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FObjectWriter");
  return param_2;
}



// FUNCTION 14688a64e FUN_14688a64e body=69 status=ok
// SIG undefined FUN_14688a64e(void)

void FUN_14688a64e(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1467d696e(param_1 + 2);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14688a693 FUN_14688a693 body=670 status=ok
// SIG undefined FUN_14688a693(void)

ulonglong FUN_14688a693(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  uint *puVar8;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  uint local_130;
  byte local_129;
  uint *local_128;
  byte *local_120;
  undefined1 local_114 [4];
  undefined1 local_110 [216];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (param_1 == (longlong *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c948c94) && (FUN_144b3d300(&DAT_14c948c94), DAT_14c948c94 == -1)) {
      local_138 = &DAT_14c872ce8;
      cVar3 = FUN_14052bb08(DAT_14c872ce0,L"Core.System",L"CanUseUnversionedPropertySerialization",
                            local_110);
      DAT_14c948c90 = 0;
      if (cVar3 != '\0') {
        DAT_14c948c90 = local_110[0];
      }
      _Init_thread_footer(&DAT_14c948c94);
    }
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),DAT_14c948c90);
  }
  else {
    uVar4 = (**(code **)(param_1[1] + 0xb0))(param_1 + 1);
    uVar7 = (ulonglong)uVar4;
    uVar5 = (**(code **)(param_1[1] + 0x1a8))(param_1 + 1);
    uVar5 = uVar5 | uVar4 << 0x1f;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c948c38);
    if (DAT_14c948c48 != DAT_14c948c74) {
      puVar6 = &DAT_14c948c78;
      if (DAT_14c948c80 != (undefined *)0x0) {
        puVar6 = DAT_14c948c80;
      }
      iVar2 = *(int *)(puVar6 + (ulonglong)(DAT_14c948c88 - 1U & uVar5) * 4);
      while (iVar2 != -1) {
        lVar1 = DAT_14c948c40 + (longlong)iVar2 * 0x10;
        if (*(uint *)(DAT_14c948c40 + (longlong)iVar2 * 0x10) == uVar5) {
          if ((undefined1 *)(lVar1 + 4) != (undefined1 *)0x0 && lVar1 != 0) {
            uVar7 = (ulonglong)CONCAT31((int3)(uVar4 >> 8),*(undefined1 *)(lVar1 + 4));
            goto LAB_14688a878;
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 8);
      }
    }
    FUN_1408e76da(local_110);
    (**(code **)(*param_1 + 8))(param_1,&local_128);
    puVar8 = local_128;
    if ((int)local_120 == 0) {
      puVar8 = (uint *)&DAT_149dfb77a;
    }
    local_138 = (undefined8 *)((ulonglong)local_138 & 0xffffffffffffff00);
    FUN_14626b27c(local_110,L"Engine",1,puVar8);
    if (local_128 != (uint *)0x0) {
      FUN_1400020a8();
    }
    local_129 = FUN_141273478(local_110,L"Core.System",L"CanUseUnversionedPropertySerialization",
                              &local_128);
    local_129 = local_129 & (byte)local_128;
    if ((char)uVar4 != '\0') {
      uVar7 = 0;
      if ((local_129 != 0) &&
         (cVar3 = FUN_141273478(local_110,L"Core.System",
                                L"CanUseUnversionedPropertySerializationForServerOnly",&local_128),
         cVar3 != '\0')) {
        uVar7 = (ulonglong)(byte)local_128;
      }
      local_129 = (byte)uVar7;
    }
    local_128 = &local_130;
    local_120 = &local_129;
    local_130 = uVar5;
    FUN_14078dde4(&DAT_14c948c40,local_114,&local_128,0);
    uVar7 = CONCAT71((int7)(uVar7 >> 8),local_129);
    FUN_1409263a6(local_110);
LAB_14688a878:
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c948c38);
  }
  if ((local_38 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14688a934 FUN_14688a934 body=38 status=ok
// SIG undefined FUN_14688a934(void)

undefined8 FUN_14688a934(undefined8 param_1,int param_2)

{
  FUN_1400e0db6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14688a9ca FUN_14688a9ca body=38 status=ok
// SIG undefined FUN_14688a9ca(void)

undefined8 FUN_14688a9ca(undefined8 param_1,int param_2)

{
  FUN_144a7fc42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14688a9f0 FUN_14688a9f0 body=32 status=ok
// SIG undefined FUN_14688a9f0(void)

undefined8 FUN_14688a9f0(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FDuplicateDataReader");
  return param_2;
}



// FUNCTION 14688aa2c FUN_14688aa2c body=68 status=ok
// SIG undefined FUN_14688aa2c(void)

undefined8 * FUN_14688aa2c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e69cb0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14688aa70 FUN_14688aa70 body=32 status=ok
// SIG undefined FUN_14688aa70(void)

undefined8 FUN_14688aa70(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FDuplicateDataWriter");
  return param_2;
}



// FUNCTION 14688aad2 FUN_14688aad2 body=29 status=ok
// SIG undefined FUN_14688aad2(void)

undefined8 FUN_14688aad2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14688aaf8 FUN_14688aaf8 body=42 status=ok
// SIG undefined FUN_14688aaf8(void)

longlong FUN_14688aaf8(longlong param_1,int param_2)

{
  FUN_1447ef07c(param_1 + 0x10);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14688ab22 FUN_14688ab22 body=31 status=ok
// SIG undefined FUN_14688ab22(void)

void FUN_14688ab22(longlong param_1)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(longlong **)(param_1 + 8) + 8);
  if (UNRECOVERED_JUMPTABLE == (code *)&LAB_14048a8a6) {
    LOCK();
    plVar1 = *(longlong **)(param_1 + 8) + 1;
    *(int *)plVar1 = (int)*plVar1 + 1;
    UNLOCK();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014688ab3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14688ab98 FUN_14688ab98 body=151 status=ok
// SIG undefined FUN_14688ab98(void)

longlong * FUN_14688ab98(longlong *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)*param_1;
  lVar5 = *param_2;
  if (lVar5 != 0) {
    LOCK();
    puVar1 = (ulonglong *)(lVar5 + 0x18);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 0) {
      LOCK();
      *(longlong *)(lVar5 + 0x18) = *(longlong *)(lVar5 + 0x18) + 0x40000000;
      UNLOCK();
    }
  }
  *param_1 = lVar5;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 3;
    lVar5 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (((uint)lVar5 & 0x3fffffff) == 1) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      plVar4[1] = 0;
      plVar4[2] = 0;
      LOCK();
      puVar1 = (ulonglong *)(plVar4 + 3);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 0x40000000;
      UNLOCK();
      if ((uVar3 & 0xfffffffc0000000) == 0x40000000) {
        (**(code **)*plVar4)(plVar4,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 14688ac2f FUN_14688ac2f body=64 status=ok
// SIG undefined FUN_14688ac2f(void)

void FUN_14688ac2f(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
    *(undefined4 *)(param_1 + 10) = 0xffffffff;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 14688ac70 FUN_14688ac70 body=132 status=ok
// SIG undefined FUN_14688ac70(void)

void FUN_14688ac70(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 7,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 7)) {
      uVar5 = uVar3 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x80,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14688acf6 FUN_14688acf6 body=38 status=ok
// SIG undefined FUN_14688acf6(void)

undefined8 FUN_14688acf6(undefined8 param_1,int param_2)

{
  FUN_144a7fc42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14688ad20 FUN_14688ad20 body=428 status=ok
// SIG undefined FUN_14688ad20(void)

void FUN_14688ad20(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_14474875a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_1446efaca(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x10 + lVar2 + -0xc);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -4;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar7,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar7 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 14688aece FUN_14688aece body=477 status=ok
// SIG undefined FUN_14688aece(void)

void FUN_14688aece(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
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
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 14688b0ac FUN_14688b0ac body=332 status=ok
// SIG undefined FUN_14688b0ac(void)

undefined4 *
FUN_14688b0ac(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14688b1fa(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_14688b2e0(param_1,uVar2,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_48 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14688aece(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14688b1fa FUN_14688b1fa body=229 status=ok
// SIG undefined FUN_14688b1fa(void)

int * FUN_14688b1fa(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 14688b2e0 FUN_14688b2e0 body=144 status=ok
// SIG undefined FUN_14688b2e0(void)

void FUN_14688b2e0(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *plVar2 = *param_3;
          FUN_14688b370(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_14688b34b;
        }
        iVar3 = (int)plVar2[1];
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_14688b34b:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 14688b370 FUN_14688b370 body=138 status=ok
// SIG undefined FUN_14688b370(void)

void FUN_14688b370(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
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
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14688b3fa FUN_14688b3fa body=54 status=ok
// SIG undefined FUN_14688b3fa(void)

void FUN_14688b3fa(longlong *param_1)

{
  FUN_14688b430(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14688b430 FUN_14688b430 body=128 status=ok
// SIG undefined FUN_14688b430(void)

void FUN_14688b430(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
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



// FUNCTION 14688b4b2 caseD_0 body=33 status=ok
// SIG undefined caseD_0(void)

bool switchD_14013128b::caseD_0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  byte bVar2;
  
  if (param_2 != 0) {
    uVar1 = 0;
    bVar2 = 0;
    do {
      bVar2 = bVar2 | *(byte *)(param_1 + uVar1);
      uVar1 = uVar1 + 1;
    } while (param_2 != uVar1);
    return bVar2 == 0;
  }
  return true;
}



// FUNCTION 14688b4f8 FUN_14688b4f8 body=121 status=ok
// SIG undefined FUN_14688b4f8(void)

void FUN_14688b4f8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
      iVar2 = (int)(uVar1 / 0x18);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0xcc)) {
    *(int *)(param_1 + 0xcc) = iVar3;
    FUN_14688b572(param_1,*(undefined4 *)(param_1 + 200));
    return;
  }
  return;
}



// FUNCTION 14688b572 FUN_14688b572 body=149 status=ok
// SIG undefined FUN_14688b572(void)

void FUN_14688b572(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,0x18);
  return;
}



// FUNCTION 14688b608 FUN_14688b608 body=136 status=ok
// SIG undefined FUN_14688b608(void)

void FUN_14688b608(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0xcc)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      iVar4 = (int)(uVar3 / 0x18);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0xcc) = iVar5;
    FUN_14688b572(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14688b692 FUN_14688b692 body=114 status=ok
// SIG undefined FUN_14688b692(void)

void FUN_14688b692(longlong *param_1,int param_2)

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



// FUNCTION 14688b704 FUN_14688b704 body=30 status=ok
// SIG undefined FUN_14688b704(void)

void FUN_14688b704(longlong param_1)

{
  FUN_1468892da(param_1 + 0x10);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14688b722 FUN_14688b722 body=37 status=ok
// SIG undefined FUN_14688b722(void)

void FUN_14688b722(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0xffffffffffffffff;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x51) = 0;
  *(undefined8 *)((longlong)param_1 + 0x59) = 0;
  *(undefined1 *)((longlong)param_1 + 0x61) = 3;
  return;
}



// FUNCTION 14688b748 FUN_14688b748 body=143 status=ok
// SIG undefined FUN_14688b748(void)

void FUN_14688b748(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x68,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x68)) {
      uVar5 = uVar4 / 0x68 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x68,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14688b7df FUN_14688b7df body=70 status=ok
// SIG undefined FUN_14688b7df(void)

void FUN_14688b7df(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x50;
    do {
      FUN_14152e1c8(param_1);
      (*(code *)(&PTR_LAB_149e69c00)[*(byte *)(param_1 + -0x20)])(param_1 + -0x50);
      param_1 = param_1 + 0x68;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14688b826 FUN_14688b826 body=39 status=ok
// SIG undefined FUN_14688b826(void)

undefined8 * FUN_14688b826(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e25ce0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14688b84e FUN_14688b84e body=77 status=ok
// SIG undefined FUN_14688b84e(void)

void FUN_14688b84e(longlong *param_1)

{
  if (((ulonglong)param_1[3] >> 0x3e & 1) == 0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  if ((param_1[3] & 0x4000000000000000U) == 0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014688b897. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[4])(param_1[1]);
  return;
}



// FUNCTION 14688b8e8 FUN_14688b8e8 body=155 status=ok
// SIG undefined FUN_14688b8e8(void)

undefined8 FUN_14688b8e8(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_14688b984(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14688b984 FUN_14688b984 body=93 status=ok
// SIG undefined FUN_14688b984(void)

void FUN_14688b984(longlong *param_1,int param_2)

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
  FUN_14688b9e2(param_1,param_2,1);
  return;
}



// FUNCTION 14688b9e2 FUN_14688b9e2 body=138 status=ok
// SIG undefined FUN_14688b9e2(void)

void FUN_14688b9e2(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 14688ba6c FUN_14688ba6c body=283 status=ok
// SIG undefined FUN_14688ba6c(void)

void FUN_14688ba6c(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 != 0) {
    iVar3 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar3;
joined_r0x00014688ba8d:
    do {
      iVar6 = iVar3 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar7 = iVar3 * 2 + 2;
        if ((iVar7 < (int)param_2) && ((ulonglong)param_1[iVar6] <= (ulonglong)param_1[iVar7])) {
          iVar6 = iVar7;
        }
        uVar4 = param_1[iVar3];
        if (uVar4 < (ulonglong)param_1[iVar6]) {
          param_1[iVar3] = param_1[iVar6];
          param_1[iVar6] = uVar4;
          iVar3 = iVar6;
          goto joined_r0x00014688ba8d;
        }
      }
      bVar9 = iVar8 != 0;
      iVar3 = iVar8 + -1;
      iVar8 = iVar3;
    } while (bVar9);
    if (1 < (int)param_2) {
      uVar4 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar4 - 1];
      param_1[uVar4 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar5 = uVar4 - 1;
          iVar3 = 0;
          iVar6 = 1;
          iVar8 = 0;
          do {
            iVar3 = iVar3 + 2;
            iVar7 = iVar6;
            if (((longlong)iVar3 < (longlong)uVar5) &&
               ((ulonglong)param_1[iVar6] <= (ulonglong)param_1[iVar3])) {
              iVar7 = iVar3;
            }
            uVar2 = param_1[iVar8];
            if ((ulonglong)param_1[iVar7] <= uVar2) break;
            param_1[iVar8] = param_1[iVar7];
            param_1[iVar7] = uVar2;
            iVar3 = iVar7 * 2;
            iVar6 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar6 < (longlong)uVar5);
          uVar1 = *param_1;
          *param_1 = param_1[uVar4 - 2];
          param_1[uVar4 - 2] = uVar1;
          uVar4 = uVar5;
        } while (2 < uVar5);
      }
    }
  }
  return;
}



// FUNCTION 14688bb88 FUN_14688bb88 body=94 status=ok
// SIG undefined FUN_14688bb88(void)

longlong * FUN_14688bb88(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0xa0,0x10);
  FUN_14688bbe6(plVar3);
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



// FUNCTION 14688bbe6 FUN_14688bbe6 body=101 status=ok
// SIG undefined FUN_14688bbe6(void)

undefined8 * FUN_14688bbe6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_FUN_149e69c60;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 2),4000);
  param_1[8] = 0;
  param_1[10] = 0;
  uVar1 = FUN_1405d8a54(1);
  param_1[0x10] = uVar1;
  *(undefined1 *)(param_1 + 0x11) = 0;
  return param_1;
}



// FUNCTION 14688bc4c FUN_14688bc4c body=47 status=ok
// SIG undefined FUN_14688bc4c(void)

void FUN_14688bc4c(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x88) & 1) != 0) {
    FUN_14152e1c8(param_1 + 0x90);
  }
  FUN_140788a7e(param_1 + 0x10);
  return;
}



// FUNCTION 14688bc7c FUN_14688bc7c body=29 status=ok
// SIG undefined FUN_14688bc7c(void)

undefined8 FUN_14688bc7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14688bc9a FUN_14688bc9a body=175 status=ok
// SIG undefined FUN_14688bc9a(void)

void FUN_14688bc9a(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  lVar4 = param_1[1];
  if (plVar2 != (longlong *)0x0) {
LAB_14688bcae:
    do {
      for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
        if (((~*(uint *)(*(longlong *)(lVar4 + 8) + 0x18) & 0x8001) == 0) &&
           ((*(char *)((longlong)param_1 + 0x15) != '\0' || ((*(byte *)(lVar4 + 0x3b) & 0x20) == 0))
           )) goto LAB_14688bd0f;
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
          goto LAB_14688bcae;
        }
      }
      if (*(char *)((longlong)param_1 + 0x14) != '\x01') goto LAB_14688bd45;
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))();
      if (plVar2 == (longlong *)0x0) goto LAB_14688bd43;
      lVar4 = plVar2[10];
      *(undefined4 *)(param_1 + 2) = 0xffffffff;
    } while( true );
  }
  plVar2 = (longlong *)0x0;
LAB_14688bd0f:
  *param_1 = (longlong)plVar2;
  param_1[1] = lVar4;
  return;
LAB_14688bd43:
  plVar2 = (longlong *)0x0;
LAB_14688bd45:
  lVar4 = 0;
  goto LAB_14688bd0f;
}



// FUNCTION 14688bd4a FUN_14688bd4a body=138 status=ok
// SIG undefined FUN_14688bd4a(void)

void FUN_14688bd4a(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
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
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14688bdd4 FUN_14688bdd4 body=31 status=ok
// SIG undefined FUN_14688bdd4(void)

undefined8 * FUN_14688bdd4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1401fa0f0(0,param_2,0);
  return param_1;
}



// FUNCTION 14688bdf4 FUN_14688bdf4 body=38 status=ok
// SIG undefined FUN_14688bdf4(void)

undefined8 * FUN_14688bdf4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1401fa0f0(0,*param_2,param_2[1]);
  return param_1;
}



// FUNCTION 14688be1a FUN_14688be1a body=52 status=ok
// SIG undefined FUN_14688be1a(void)

longlong * FUN_14688be1a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (*param_1 == *param_2) {
    lVar1 = param_2[1];
    if (param_1[1] == lVar1) {
      return param_1;
    }
  }
  else {
    lVar1 = param_2[1];
  }
  FUN_1401fa0f0(param_1,*param_2,lVar1);
  return param_1;
}



// FUNCTION 14688be4e FUN_14688be4e body=256 status=ok
// SIG undefined FUN_14688be4e(void)

void FUN_14688be4e(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    local_58 = 0;
    uStack_50 = 0;
    FUN_1401031ac(lVar1,0,&local_58);
    iVar2 = (int)uStack_50 + -1;
    if ((int)uStack_50 == 0) {
      iVar2 = 0;
    }
    FUN_1400020e8(param_2,local_58,iVar2);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (lVar1 == *param_3) {
      lVar3 = param_3[1];
    }
    else {
      lVar3 = 0;
    }
    local_68 = param_6;
    local_70 = param_5;
    local_60 = 1;
    local_78 = param_4;
    FUN_1446df618(lVar1,param_2,param_1[1],lVar3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_1400020e8(param_2,&DAT_149e01fe8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98,&DAT_149e01fe8);
}



// FUNCTION 14688bf62 FUN_14688bf62 body=571 status=ok
// SIG undefined FUN_14688bf62(void)

ulonglong FUN_14688bf62(longlong *param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  longlong *plVar1;
  undefined2 *puVar2;
  int iVar3;
  wchar_t *pwVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  ushort uVar8;
  ulonglong uVar9;
  ushort uVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  undefined1 auStack_8d8 [32];
  undefined4 local_8b8;
  undefined8 local_8b0;
  code **local_8a8;
  undefined8 local_8a0;
  longlong local_890;
  code *local_888;
  longlong *local_880;
  undefined2 *local_878;
  undefined2 *local_870;
  undefined1 *local_868;
  char local_860;
  undefined2 local_858 [1035];
  undefined1 local_42 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_8d8;
  local_860 = '\0';
  local_868 = local_42;
  pwVar4 = (wchar_t *)*param_2;
  local_878 = local_858;
  local_870 = local_858;
  iVar3 = wcscmp(pwVar4,L"()");
  if (iVar3 == 0) {
    pwVar4 = pwVar4 + 2;
    puVar5 = local_858;
    puVar12 = local_858;
  }
  else {
    pwVar4 = (wchar_t *)FUN_1409a0110(pwVar4,&local_878,1);
    puVar5 = local_870;
    puVar12 = local_878;
    if (pwVar4 == (wchar_t *)0x0) {
      pwVar4 = (wchar_t *)0x0;
      goto LAB_14688c14b;
    }
  }
  puVar2 = local_878;
  *param_2 = (longlong)pwVar4;
  if ((int)((ulonglong)((longlong)puVar5 - (longlong)puVar12) >> 1) != 0) {
    *puVar5 = 0;
    lVar6 = 0;
    while( true ) {
      uVar8 = *(ushort *)((longlong)local_878 + lVar6);
      uVar9 = (ulonglong)uVar8;
      uVar10 = *(ushort *)((longlong)&DAT_149e01fe8 + lVar6);
      if (uVar8 != uVar10) break;
      if (uVar8 == 0) goto LAB_14688c117;
LAB_14688c042:
      lVar6 = lVar6 + 2;
    }
    if ((uVar10 | uVar8) < 0x80) {
      uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
      uVar11 = (ulonglong)uVar10;
      uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
      if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar11]) goto LAB_14688c042;
    }
    if (uVar8 != uVar10) {
      *local_870 = 0;
      uVar7 = FUN_1446f4bba();
      pwVar4 = (wchar_t *)0x0;
      local_8a0 = 0;
      local_8b0 = 0;
      local_8a8 = (code **)CONCAT71(local_8a8._1_7_,1);
      local_8b8 = 0;
      lVar6 = FUN_1412ecd05(uVar7,0,puVar2,0);
      if (lVar6 == 0) goto LAB_14688c14b;
      pwVar4 = (wchar_t *)0x0;
      FUN_1401fa0f0(param_1,lVar6,0);
      local_880 = &local_890;
      local_8a8 = &local_888;
      local_888 = FUN_1427decc6;
      local_8b0 = param_5;
      local_8a0 = CONCAT71(local_8a0._1_7_,1);
      local_8b8 = param_3;
      local_890 = lVar6;
      lVar6 = FUN_1408de6dc(lVar6,*param_2,param_1[1],param_4);
      if (lVar6 == 0) goto LAB_14688c14b;
      *param_2 = lVar6;
      goto LAB_14688c148;
    }
  }
LAB_14688c117:
  lVar6 = param_1[1];
  if (lVar6 != 0) {
    plVar1 = (longlong *)*param_1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x2f0))(plVar1,lVar6,1);
    }
    FUN_1400020a8(lVar6);
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_14688c148:
  pwVar4 = (wchar_t *)CONCAT71((int7)((ulonglong)pwVar4 >> 8),1);
LAB_14688c14b:
  if (local_860 == '\x01') {
    FUN_1400020a8(local_878);
  }
  if ((local_40 ^ (ulonglong)auStack_8d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)pwVar4 & 0xffffffff;
}



// FUNCTION 14688c19e FUN_14688c19e body=323 status=ok
// SIG undefined FUN_14688c19e(void)

void FUN_14688c19e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 auStack_788 [32];
  undefined1 local_768;
  undefined4 local_760;
  undefined1 local_750 [1792];
  undefined1 *local_50;
  uint local_48;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_788;
  lVar7 = *param_1;
  if (lVar7 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1447f76d2(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar7;
    lVar7 = *param_1;
    plVar2 = *(longlong **)(lVar7 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x58))(plVar2,param_1[1],param_2);
      lVar7 = *param_1;
    }
    lVar3 = param_1[1];
    uVar4 = FUN_1446dcc8c();
    local_760 = 2;
    local_768 = 1;
    FUN_140021b28(local_750,uVar4,lVar7,lVar3);
    while (0 < (int)local_48) {
      puVar6 = local_50;
      if (local_50 == (undefined1 *)0x0) {
        puVar6 = local_750;
      }
      puVar5 = *(undefined1 **)(puVar6 + (ulonglong)local_48 * 0xe0 + -0x18);
      if (*(undefined1 **)(puVar6 + (ulonglong)local_48 * 0xe0 + -0x18) == (undefined1 *)0x0) {
        puVar5 = puVar6 + (ulonglong)local_48 * 0xe0 + -0xd8;
      }
      plVar2 = *(longlong **)
                (*(longlong *)
                  (*(longlong *)
                    (puVar5 + (longlong)*(int *)(puVar6 + (ulonglong)local_48 * 0xe0 + -8) * 0x18) +
                  0x70) + 0xb8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x58))
                  (plVar2,*(undefined8 *)
                           (puVar5 + (longlong)*(int *)(puVar6 + (ulonglong)local_48 * 0xe0 + -8) *
                                     0x18 + 8),param_2);
      }
      FUN_140caedf2(local_750);
    }
    FUN_140021a7a(local_750);
  }
  if ((local_28 ^ (ulonglong)auStack_788) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14688c2e2 FUN_14688c2e2 body=44 status=ok
// SIG undefined FUN_14688c2e2(void)

undefined8 FUN_14688c2e2(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_2 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 != *param_2)) {
    uVar2 = 0;
  }
  else {
    if (lVar1 != 0) {
      uVar2 = FUN_14470ec92(lVar1,param_1[1],param_2[1],param_3);
      return uVar2;
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 14688c30e FUN_14688c30e body=290 status=ok
// SIG undefined FUN_14688c30e(void)

undefined8 FUN_14688c30e(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong lStack_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  longlong local_78;
  longlong lStack_70;
  undefined8 local_68;
  longlong local_60;
  longlong lStack_58;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *param_1;
  if ((lVar1 != 0) && (param_1[1] != 0)) {
    lStack_58 = *(longlong *)(lVar1 + 0x50);
    local_50 = 0xffffffff;
    uStack_4c = 0x101;
    uVar2 = 0;
    uStack_4a = 0;
    local_60 = lVar1;
    FUN_144a2daf0(&local_60);
    local_68 = CONCAT17(uStack_49,CONCAT16(uStack_4a,CONCAT24(uStack_4c,local_50)));
    local_78 = local_60;
    lStack_70 = lStack_58;
    local_98 = 0;
    lStack_90 = 0;
    local_88 = 0xffffffff;
    local_84 = 0x101;
    local_82 = 0;
    FUN_144a2daf0();
    if (lStack_70 == lStack_90) goto LAB_14688c3f8;
    do {
      if (lStack_70 == 0) {
        lVar1 = 0;
      }
      else {
        lVar1 = *(longlong *)(lStack_70 + 0x20);
      }
      if (lVar1 == param_2) {
        *param_3 = lStack_70;
        *param_4 = param_1[1];
        uVar2 = 1;
        goto LAB_14688c3f8;
      }
      lStack_70 = *(longlong *)(lStack_70 + 0x18);
      FUN_144a2daf0();
    } while (lStack_70 != lStack_90);
  }
  uVar2 = 0;
LAB_14688c3f8:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14688c432 FUN_14688c432 body=28 status=ok
// SIG undefined FUN_14688c432(void)

undefined8 * FUN_14688c432(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14688c44e();
  return param_1;
}



// FUNCTION 14688c44e FUN_14688c44e body=246 status=ok
// SIG undefined FUN_14688c44e(void)

void FUN_14688c44e(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 1) {
    uStack_50._0_4_ = 0;
  }
  else {
    iVar7 = 0;
    iVar8 = -0x10;
    local_70 = param_1;
    do {
      uVar4 = uStack_50;
      lVar2 = *param_2;
      lVar6 = (longlong)((int)param_2[1] + iVar8);
      iVar1 = *(int *)(lVar2 + 8 + lVar6);
      uVar3 = *(undefined8 *)(lVar2 + lVar6);
      lVar6 = (longlong)(int)uStack_50;
      uVar5 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
      if (uStack_50._4_4_ < uVar5) {
        FUN_146896856(&local_58,uVar4 & 0xffffffff);
      }
      *(undefined8 *)(local_58 + lVar6 * 0x10) = uVar3;
      *(longlong *)(local_58 + 8 + lVar6 * 0x10) = lVar2 + iVar1;
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + -0x10;
    } while (iVar7 < *(int *)((longlong)param_2 + 0xc));
    param_1 = local_70;
  }
  local_68 = local_58;
  local_60 = (int)uStack_50;
  FUN_14688c712(param_1,*(undefined4 *)(param_1 + 0xc));
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14688c546 FUN_14688c546 body=120 status=ok
// SIG undefined FUN_14688c546(void)

longlong * FUN_14688c546(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 != param_2) {
    iVar3 = *(int *)((longlong)param_1 + 0xc);
    if (0 < iVar3) {
      iVar5 = 0;
      iVar6 = -0x10;
      do {
        lVar1 = *param_1;
        lVar4 = (longlong)((int)param_1[1] + iVar6);
        plVar2 = *(longlong **)(lVar1 + lVar4);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x2f0))(plVar2,*(int *)(lVar1 + 8 + lVar4) + lVar1,1);
          iVar3 = *(int *)((longlong)param_1 + 0xc);
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -0x10;
      } while (iVar5 < iVar3);
    }
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    FUN_14688c44e(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14688c5be FUN_14688c5be body=338 status=ok
// SIG undefined FUN_14688c5be(void)

longlong * FUN_14688c5be(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar6 = *(int *)((longlong)param_1 + 0xc);
  if (0 < iVar6) {
    iVar9 = 0;
    iVar11 = -0x10;
    do {
      lVar1 = *param_1;
      lVar8 = (longlong)((int)param_1[1] + iVar11);
      plVar2 = *(longlong **)(lVar1 + lVar8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x2f0))(plVar2,*(int *)(lVar1 + 8 + lVar8) + lVar1,1);
        iVar6 = *(int *)((longlong)param_1 + 0xc);
      }
      iVar9 = iVar9 + 1;
      iVar11 = iVar11 + -0x10;
    } while (iVar9 < iVar6);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  local_58 = 0;
  uStack_50 = 0;
  iVar6 = (int)param_2[1];
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (iVar6 != 0) {
    FUN_146896800(&local_58);
    lVar1 = param_2[1];
    if ((longlong)(int)lVar1 != 0) {
      lVar8 = *param_2;
      lVar12 = 0;
      do {
        uVar5 = uStack_50;
        uVar3 = *(undefined8 *)(lVar8 + lVar12);
        uVar4 = *(undefined8 *)(lVar8 + 8 + lVar12);
        lVar10 = (longlong)(int)uStack_50;
        uVar7 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar7);
        if (uStack_50._4_4_ < uVar7) {
          FUN_146896856(&local_58,uVar5 & 0xffffffff);
        }
        *(undefined8 *)(local_58 + lVar10 * 0x10) = uVar3;
        *(undefined8 *)(local_58 + 8 + lVar10 * 0x10) = uVar4;
        lVar12 = lVar12 + 0x10;
      } while ((longlong)(int)lVar1 * 0x10 != lVar12);
    }
  }
  local_68 = local_58;
  local_60 = (int)uStack_50;
  FUN_14688c712(param_1,0);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14688c712 FUN_14688c712 body=1262 status=ok
// SIG undefined FUN_14688c712(void)

void FUN_14688c712(longlong *param_1,uint param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  size_t _Size;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auStack_a8 [36];
  uint local_84;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = (ulonglong)*(uint *)(param_3 + 1);
  uVar6 = *(uint *)((longlong)param_1 + 0xc);
  local_58 = 0;
  uStack_50 = 0;
  local_70 = param_3;
  if ((int)*(uint *)(param_3 + 1) < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  local_84 = uVar6;
  local_80 = param_1;
  if (local_78 != 0) {
    FUN_1468968dc(&local_58,local_78);
    uVar6 = *(uint *)((longlong)local_80 + 0xc);
  }
  iVar8 = 8;
  if (0 < (int)uVar6) {
    iVar5 = (int)local_80[1];
    uVar11 = (ulonglong)uVar6;
    iVar8 = 8;
    do {
      iVar5 = iVar5 + -0x10;
      if (*(longlong *)(*local_80 + (longlong)iVar5) == 0) {
        iVar19 = 1;
      }
      else {
        iVar19 = *(int *)(*(longlong *)(*local_80 + (longlong)iVar5) + 0x5c);
      }
      if (iVar8 < iVar19) {
        iVar8 = iVar19;
      }
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar20 = 0;
  if (0 < (int)param_2) {
    lVar9 = (longlong)(int)local_80[1] - (longlong)(int)(param_2 << 4);
    lVar16 = *(longlong *)(*local_80 + lVar9);
    uVar20 = 0;
    if (lVar16 != 0) {
      uVar20 = -*(int *)(lVar16 + 0x5c) & (*(int *)(lVar16 + 0x5c) + *(int *)(lVar16 + 0x58)) - 1U;
    }
    uVar20 = uVar20 + *(int *)(*local_80 + 8 + lVar9);
  }
  local_84 = local_84 - param_2;
  plVar17 = local_80;
  iVar5 = iVar8;
  if ((longlong)(int)local_70[1] != 0) {
    lVar16 = *local_70;
    lVar9 = (longlong)(int)local_70[1] << 4;
    lVar10 = 0;
    local_68 = lVar16;
    local_60 = lVar9;
    do {
      uVar11 = uStack_50;
      lVar18 = *(longlong *)(lVar16 + lVar10);
      lVar12 = (longlong)(int)uStack_50;
      uVar6 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
      if (uStack_50._4_4_ < uVar6) {
        FUN_146896932(&local_58,uVar11 & 0xffffffff);
        lVar9 = local_60;
        lVar16 = local_68;
        plVar17 = local_80;
      }
      plVar15 = (longlong *)(local_58 + lVar12 * 0x10);
      *(longlong *)(local_58 + lVar12 * 0x10) = lVar18;
      if ((lVar18 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar18);
        lVar18 = *plVar15;
        lVar9 = local_60;
        lVar16 = local_68;
        plVar17 = local_80;
      }
      *(undefined4 *)(plVar15 + 1) = 0;
      if (lVar18 == 0) {
        if (iVar5 < 2) {
          iVar5 = 1;
        }
        *(uint *)(plVar15 + 1) = uVar20;
        uVar6 = 0;
      }
      else {
        iVar19 = *(int *)(lVar18 + 0x5c);
        if (iVar5 < iVar19) {
          iVar5 = iVar19;
        }
        uVar20 = -iVar19 & (uVar20 + iVar19) - 1;
        *(uint *)(plVar15 + 1) = uVar20;
        uVar6 = -*(int *)(lVar18 + 0x5c) & (*(int *)(lVar18 + 0x58) + *(int *)(lVar18 + 0x5c)) - 1U;
      }
      uVar20 = uVar20 + uVar6;
      lVar10 = lVar10 + 0x10;
    } while (lVar9 != lVar10);
    uVar6 = *(uint *)((longlong)plVar17 + 0xc);
  }
  uVar11 = local_78;
  _Size = 0;
  uVar13 = 0;
  uVar21 = ~param_2;
  if ((int)local_84 < 1) {
    lVar16 = 0;
    lVar9 = 0;
  }
  else {
    lVar9 = *plVar17;
    iVar19 = *(int *)(lVar9 + 8 + (longlong)(int)(param_2 * -0x10 + (int)plVar17[1] + -0x10));
    lVar16 = (longlong)iVar19;
    lVar10 = (longlong)(int)((int)plVar17[1] + uVar6 * -0x10);
    iVar14 = *(int *)(lVar9 + 8 + lVar10);
    lVar9 = *(longlong *)(lVar9 + lVar10);
    if (lVar9 != 0) {
      uVar13 = -*(int *)(lVar9 + 0x5c) & (*(int *)(lVar9 + 0x58) + *(int *)(lVar9 + 0x5c)) - 1U;
    }
    uVar7 = (iVar8 + uVar20) - 1 & -iVar8;
    iVar8 = iVar14 - iVar19;
    if ((int)param_2 < (int)uVar6) {
      iVar14 = uVar21 << 4;
      do {
        piVar1 = (int *)(*plVar17 + 8 + (longlong)((int)plVar17[1] + iVar14));
        *piVar1 = *piVar1 + (uVar7 - iVar19);
        param_2 = param_2 + 1;
        uVar6 = *(uint *)((longlong)plVar17 + 0xc);
        iVar14 = iVar14 + -0x10;
      } while ((int)param_2 < (int)uVar6);
      lVar9 = (longlong)(int)plVar17[1] - (longlong)(int)(uVar6 << 4);
      iVar14 = *(int *)(*plVar17 + 8 + lVar9);
      lVar9 = *(longlong *)(*plVar17 + lVar9);
    }
    uVar20 = 0;
    if (lVar9 != 0) {
      uVar20 = -*(int *)(lVar9 + 0x5c) & (*(int *)(lVar9 + 0x5c) + *(int *)(lVar9 + 0x58)) - 1U;
    }
    uVar20 = uVar20 + iVar14;
    _Size = (size_t)(int)(iVar8 + uVar13);
    lVar9 = (longlong)(int)uVar7;
  }
  iVar19 = uVar6 + (int)uStack_50;
  iVar8 = 8;
  if (8 < iVar5) {
    iVar8 = iVar5;
  }
  FUN_14688cc46(plVar17,uVar20 + iVar19 * 0x10 + 7 & 0xfffffff8,iVar8);
  plVar17 = local_70;
  *(int *)((longlong)local_80 + 0xc) = iVar19;
  plVar15 = local_80;
  if (0 < (int)local_84) {
    memmove((void *)(lVar9 + *local_80),(void *)(lVar16 + *local_80),_Size);
    iVar8 = *(int *)((longlong)local_80 + 0xc);
    iVar5 = iVar8 * -0x10;
    plVar15 = local_80;
    bVar4 = DAT_14c950c29;
    uVar6 = local_84;
    do {
      iVar19 = (int)plVar15[1] + iVar5;
      lVar16 = *plVar15;
      lVar10 = (longlong)(iVar19 + (int)uVar11 * 0x10);
      lVar9 = *(longlong *)(lVar16 + lVar10);
      if ((bVar4 & 1) != 0) {
        if (lVar9 == 0) {
          lVar9 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar9 = *(longlong *)(lVar16 + lVar10);
          plVar15 = local_80;
          bVar4 = DAT_14c950c29;
          uVar6 = local_84;
        }
      }
      iVar8 = iVar8 + -1;
      *(longlong *)(lVar16 + iVar19) = lVar9;
      *(undefined4 *)(lVar16 + 8 + (longlong)iVar19) = *(undefined4 *)(lVar16 + 8 + lVar10);
      iVar5 = iVar5 + 0x10;
    } while ((int)(*(int *)((longlong)plVar15 + 0xc) - uVar6) < iVar8);
  }
  if (0 < (int)uStack_50) {
    iVar8 = uVar21 << 4;
    lVar9 = 0;
    lVar16 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar3 = local_58;
      lVar12 = plVar15[1];
      lVar10 = *plVar15;
      lVar18 = *(longlong *)(local_58 + lVar9);
      if ((bVar4 & 1) != 0) {
        if (lVar18 == 0) {
          lVar18 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar18 = *(longlong *)(lVar3 + lVar9);
          plVar15 = local_80;
          bVar4 = DAT_14c950c29;
        }
      }
      lVar12 = (longlong)((int)lVar12 + iVar8);
      *(longlong *)(lVar10 + lVar12) = lVar18;
      *(undefined4 *)(lVar10 + 8 + lVar12) = *(undefined4 *)(lVar3 + 8 + lVar9);
      lVar16 = lVar16 + 1;
      iVar8 = iVar8 + -0x10;
      lVar9 = lVar9 + 0x10;
    } while (lVar16 < (int)uStack_50);
  }
  if (0 < (int)plVar17[1]) {
    iVar8 = uVar21 << 4;
    lVar16 = 8;
    lVar9 = 0;
    do {
      lVar10 = *plVar15;
      lVar18 = (longlong)((int)plVar15[1] + iVar8);
      plVar2 = *(longlong **)(lVar10 + lVar18);
      if (plVar2 != (longlong *)0x0) {
        lVar12 = *(longlong *)(*plVar17 + lVar16);
        (**(code **)(*plVar2 + 0x2e8))(plVar2,*(int *)(lVar10 + 8 + lVar18) + lVar10,1);
        plVar15 = local_80;
        if (lVar12 != 0) {
          FUN_1449b16b6(*(undefined8 *)(lVar10 + lVar18),
                        (longlong)*(int *)(lVar10 + 8 + lVar18) + *local_80,lVar12,1);
          plVar15 = local_80;
        }
      }
      lVar9 = lVar9 + 1;
      iVar8 = iVar8 + -0x10;
      lVar16 = lVar16 + 0x10;
    } while (lVar9 < (int)plVar17[1]);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14688cc02 FUN_14688cc02 body=66 status=ok
// SIG undefined FUN_14688cc02(void)

void FUN_14688cc02(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_14688c712(local_18,*(undefined4 *)(param_1 + 0xc));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14688cc46 FUN_14688cc46 body=193 status=ok
// SIG undefined FUN_14688cc46(void)

void FUN_14688cc46(ulonglong *param_1,int param_2,uint param_3)

{
  void *_Src;
  longlong lVar1;
  ulonglong uVar2;
  void *_Dst;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  size_t _Size;
  
  iVar5 = (int)param_1[1];
  if ((iVar5 < param_2) || ((*param_1 & (ulonglong)param_3 - 1) != 0)) {
    if (iVar5 < param_2) {
      iVar5 = param_2;
    }
    _Dst = (void *)FUN_14001cc68((longlong)iVar5,param_3);
    _Src = (void *)*param_1;
    if (0 < *(int *)((longlong)param_1 + 0xc)) {
      uVar2 = param_1[1];
      _Size = (size_t)(*(int *)((longlong)param_1 + 0xc) << 4);
      lVar4 = (longlong)(int)uVar2 - _Size;
      lVar1 = *(longlong *)((longlong)_Src + lVar4);
      if (lVar1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = -*(int *)(lVar1 + 0x5c) & (*(int *)(lVar1 + 0x58) + *(int *)(lVar1 + 0x5c)) - 1U;
      }
      memcpy(_Dst,_Src,(longlong)(int)uVar3 + (longlong)*(int *)((longlong)_Src + lVar4 + 8));
      memcpy((void *)((longlong)_Dst + ((longlong)param_2 - _Size)),
             (void *)((longlong)_Src + ((longlong)(int)uVar2 - _Size)),_Size);
    }
    FUN_1400020a8(_Src);
    *param_1 = (ulonglong)_Dst;
    *(int *)(param_1 + 1) = iVar5;
  }
  return;
}



// FUNCTION 14688cd08 FUN_14688cd08 body=96 status=ok
// SIG undefined FUN_14688cd08(void)

void FUN_14688cd08(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = *(int *)((longlong)param_1 + 0xc);
  if ((int)param_2 < iVar3) {
    iVar5 = ~param_2 << 4;
    uVar6 = param_2;
    do {
      lVar1 = *param_1;
      lVar4 = (longlong)((int)param_1[1] + iVar5);
      plVar2 = *(longlong **)(lVar1 + lVar4);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x2f0))(plVar2,*(int *)(lVar1 + 8 + lVar4) + lVar1,1);
        iVar3 = *(int *)((longlong)param_1 + 0xc);
      }
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + -0x10;
    } while ((int)uVar6 < iVar3);
  }
  *(uint *)((longlong)param_1 + 0xc) = param_2;
  return;
}



// FUNCTION 14688cd68 FUN_14688cd68 body=271 status=ok
// SIG undefined FUN_14688cd68(void)

undefined8 FUN_14688cd68(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  
  if (param_2 == (longlong *)0x0) {
LAB_14688ce60:
    uVar7 = 0;
  }
  else {
    iVar8 = *(int *)((longlong)param_1 + 0xc);
    iVar10 = *(int *)((longlong)param_2 + 0xc);
    if (0 < iVar10 || 0 < iVar8) {
      if (iVar8 != iVar10) {
        return 0;
      }
      if (0 < iVar8 == iVar10 < 1) {
        return 0;
      }
      if (0 < iVar8) {
        iVar8 = 0;
        iVar10 = -0x10;
        do {
          lVar4 = param_1[1];
          lVar1 = *param_1;
          lVar2 = *param_2;
          lVar9 = (longlong)((int)param_2[1] + iVar10);
          lVar3 = *(longlong *)(lVar2 + lVar9);
          if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
            FUN_1456cec3c(lVar3);
          }
          lVar6 = (longlong)((int)lVar4 + iVar10);
          lVar4 = *(longlong *)(lVar1 + lVar6);
          if ((lVar4 != lVar3) ||
             (((lVar3 != 0 && (*(longlong *)(lVar2 + lVar9) != 0)) &&
              (cVar5 = FUN_14470ec92(lVar4,(longlong)*(int *)(lVar1 + 8 + lVar6) + *param_1,
                                     (longlong)*(int *)(lVar2 + 8 + lVar9) + *param_2,param_3),
              cVar5 == '\0')))) goto LAB_14688ce60;
          iVar8 = iVar8 + 1;
          iVar10 = iVar10 + -0x10;
        } while (iVar8 < *(int *)((longlong)param_1 + 0xc));
      }
    }
    uVar7 = 1;
  }
  return uVar7;
}



// FUNCTION 14688ce78 FUN_14688ce78 body=387 status=ok
// SIG undefined FUN_14688ce78(void)

void FUN_14688ce78(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_7a8 [32];
  undefined1 local_788;
  undefined4 local_780;
  undefined1 local_770 [1792];
  undefined1 *local_70;
  uint local_68;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_7a8;
  iVar3 = *(int *)((longlong)param_1 + 0xc);
  if (0 < iVar3) {
    iVar7 = 0;
    do {
      lVar1 = *param_1;
      lVar8 = (longlong)((int)param_1[1] + iVar7 * -0x10 + -0x10);
      lVar9 = *(longlong *)(lVar1 + lVar8);
      if (lVar9 != 0) {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_1447f76d2(param_2,iVar3);
        }
        *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar9;
        lVar9 = *(longlong *)(lVar1 + lVar8);
        plVar2 = *(longlong **)(lVar9 + 0xb8);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x58))
                    (plVar2,(longlong)*(int *)(lVar1 + 8 + lVar8) + *param_1,param_2);
          lVar9 = *(longlong *)(lVar1 + lVar8);
        }
        iVar3 = *(int *)(lVar1 + 8 + lVar8);
        lVar1 = *param_1;
        uVar4 = FUN_1446dcc8c();
        local_780 = 2;
        local_788 = 1;
        FUN_140021b28(local_770,uVar4,lVar9,iVar3 + lVar1);
        while (0 < (int)local_68) {
          puVar6 = local_70;
          if (local_70 == (undefined1 *)0x0) {
            puVar6 = local_770;
          }
          puVar5 = *(undefined1 **)(puVar6 + (ulonglong)local_68 * 0xe0 + -0x18);
          if (*(undefined1 **)(puVar6 + (ulonglong)local_68 * 0xe0 + -0x18) == (undefined1 *)0x0) {
            puVar5 = puVar6 + (ulonglong)local_68 * 0xe0 + -0xd8;
          }
          plVar2 = *(longlong **)
                    (*(longlong *)
                      (*(longlong *)
                        (puVar5 + (longlong)*(int *)(puVar6 + (ulonglong)local_68 * 0xe0 + -8) *
                                  0x18) + 0x70) + 0xb8);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x58))
                      (plVar2,*(undefined8 *)
                               (puVar5 + (longlong)
                                         *(int *)(puVar6 + (ulonglong)local_68 * 0xe0 + -8) * 0x18 +
                                         8),param_2);
          }
          FUN_140caedf2(local_770);
        }
        FUN_140021a7a(local_770);
        iVar3 = *(int *)((longlong)param_1 + 0xc);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_7a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14688cffc FUN_14688cffc body=469 status=ok
// SIG undefined FUN_14688cffc(void)

void FUN_14688cffc(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_80 = param_3;
  FUN_140002184(param_2,0x28);
  if (0 < *(int *)((longlong)param_1 + 0xc)) {
    iVar8 = -0x10;
    iVar7 = 0;
    local_88 = param_4;
    do {
      if (iVar7 != 0) {
        FUN_140002184(param_2,0x2c);
      }
      lVar1 = *param_1;
      lVar5 = (longlong)((int)param_1[1] + iVar8);
      if (*(longlong *)(lVar1 + lVar5) == 0) {
        FUN_1400020e8(param_2,&DAT_149e01fe8,4);
      }
      else {
        local_78 = 0;
        uStack_70 = 0;
        FUN_1401031ac(*(longlong *)(lVar1 + lVar5),0,&local_78);
        iVar3 = (int)uStack_70 + -1;
        if ((int)uStack_70 == 0) {
          iVar3 = 0;
        }
        FUN_1400020e8(param_2,local_78,iVar3);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        lVar2 = *(longlong *)(lVar1 + lVar5);
        if (iVar7 < *(int *)((longlong)local_80 + 0xc)) {
          lVar6 = *(longlong *)(*local_80 + (longlong)((int)local_80[1] + iVar8));
          lVar4 = lVar2;
          if ((DAT_14c950c29 == '\x01') && (lVar6 != 0)) {
            FUN_1456cec3c(lVar6);
            lVar4 = *(longlong *)(lVar1 + lVar5);
          }
          param_4 = local_88;
          if (lVar4 == lVar6) {
            lVar6 = (longlong)*(int *)(*local_80 + 8 + (longlong)((int)local_80[1] + iVar8)) +
                    *local_80;
          }
          else {
            lVar6 = 0;
          }
        }
        else {
          lVar6 = 0;
        }
        local_98 = param_6;
        local_a0 = param_5;
        local_90 = 1;
        local_a8 = param_4;
        FUN_1446df618(lVar2,param_2,(longlong)*(int *)(lVar1 + 8 + lVar5) + *param_1,lVar6);
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + -0x10;
    } while (iVar7 < *(int *)((longlong)param_1 + 0xc));
  }
  FUN_140002184(param_2,0x29);
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14688d1d2 FUN_14688d1d2 body=318 status=ok
// SIG undefined FUN_14688d1d2(void)

ulonglong FUN_14688d1d2(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4
                       ,undefined8 param_5)

{
  short sVar1;
  char cVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  undefined8 unaff_R12;
  ulonglong uVar5;
  undefined1 auStack_488 [32];
  undefined8 local_468;
  undefined1 *local_460;
  undefined4 local_458;
  undefined1 local_450 [1024];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_488;
  local_50 = (undefined1 *)0x0;
  local_48 = 0x4000000000;
  if (*(short *)*param_2 == 0x28) {
    *param_2 = (short *)*param_2 + 1;
    uVar5 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
    do {
      sVar1 = *(short *)*param_2;
      if (sVar1 == 0x29) {
        local_460 = local_450;
        if (local_50 != (undefined1 *)0x0) {
          local_460 = local_50;
        }
        local_458 = (undefined4)local_48;
        FUN_14688c5be(param_1);
        uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
        break;
      }
      if ((char)uVar5 == '\0') {
        if (sVar1 != 0x2c) {
          pwVar4 = L"FInstancedStructContainer: Missing \',\' after item.";
          goto LAB_14688d294;
        }
        *param_2 = (short *)*param_2 + 1;
      }
      uVar3 = FUN_14688d312(local_450);
      local_468 = param_5;
      cVar2 = FUN_14688bf62(uVar3,param_2,param_3,param_4);
      uVar5 = 0;
    } while (cVar2 != '\0');
  }
  else {
    pwVar4 = L"FInstancedStructContainer: Missing opening \'(\' while importing property values.";
LAB_14688d294:
    FUN_146816218(param_5,3,pwVar4);
    uVar5 = 0;
  }
  FUN_14688d364(local_450);
  if ((local_40 ^ (ulonglong)auStack_488) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 14688d312 FUN_14688d312 body=82 status=ok
// SIG undefined FUN_14688d312(void)

longlong FUN_14688d312(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x408);
  *(uint *)(param_1 + 0x408) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x40c) < iVar1 + 1U) {
    FUN_146896a1a(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x400);
  if (*(longlong *)(param_1 + 0x400) == 0) {
    lVar2 = param_1;
  }
  lVar2 = (longlong)iVar1 * 0x10 + lVar2;
  FUN_146896a12(lVar2);
  return lVar2;
}



// FUNCTION 14688d364 FUN_14688d364 body=62 status=ok
// SIG undefined FUN_14688d364(void)

void FUN_14688d364(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x400);
  if (*(longlong *)(param_1 + 0x400) == 0) {
    lVar1 = param_1;
  }
  FUN_1468969b7(lVar1,*(undefined4 *)(param_1 + 0x408));
  if (*(longlong *)(param_1 + 0x400) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14688d3a8 FUN_14688d3a8 body=246 status=ok
// SIG undefined FUN_14688d3a8(void)

undefined2 * FUN_14688d3a8(undefined2 *param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  bool bVar4;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  if (param_2 == 0) {
    return param_1;
  }
  bVar2 = 0;
LAB_14688d3cb:
  do {
    lVar3 = *(longlong *)(param_2 + 8);
    lVar1 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar1 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar1) break;
        } while (lVar3 != 0);
      }
      if (!bVar4) {
        return param_1;
      }
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) {
      return param_1;
    }
    if (1 < bVar2) {
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 0;
      return param_1;
    }
    *(undefined1 *)((longlong)param_1 + (ulonglong)bVar2) = 1;
    bVar2 = *(char *)(param_1 + 1) + 1;
    *(byte *)(param_1 + 1) = bVar2;
    param_2 = *(longlong *)(param_2 + 0x78);
    if (param_2 == 0) {
      return param_1;
    }
    lVar3 = *(longlong *)(param_2 + 8);
    lVar1 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar1 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar1) break;
        } while (lVar3 != 0);
      }
      if (!bVar4) {
        return param_1;
      }
      goto LAB_14688d3cb;
    }
    if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) {
      return param_1;
    }
  } while( true );
}



// FUNCTION 14688d49e FUN_14688d49e body=1642 status=ok
// SIG undefined FUN_14688d49e(void)

/* WARNING: Type propagation algorithm not settling */

byte FUN_14688d49e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  do {
    if (param_1 == (longlong *)0x0) {
      return 0;
    }
    lVar2 = param_1[1];
    lVar1 = FUN_144a5ab96();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return 1;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return 1;
    }
    lVar2 = param_1[1];
    lVar1 = FUN_14475a8dc();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) goto LAB_14688da26;
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
LAB_14688da26:
      lVar2 = (**(code **)(*param_1 + 0x1f0))(param_1);
      return (lVar2 != 0) << 3 | 2;
    }
    lVar2 = param_1[1];
    lVar1 = FUN_144a7452c();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return 3;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return 3;
    }
    lVar2 = param_1[1];
    lVar1 = FUN_144a8cc30();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return 0x10;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return 0x10;
    }
    lVar2 = param_1[1];
    lVar1 = FUN_144a83f76();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return 4;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return 4;
    }
    lVar2 = param_1[1];
    lVar1 = FUN_144aa1f9a();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return 0x11;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return 0x11;
    }
    lVar2 = param_1[1];
    lVar1 = FUN_144a64e42();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return 5;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return 5;
    }
    lVar2 = param_1[1];
    lVar1 = FUN_144a49fc8();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return 6;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return 6;
    }
    lVar2 = param_1[1];
    lVar1 = FUN_144a63fc8();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return 7;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return 7;
    }
    lVar2 = param_1[1];
    lVar1 = FUN_144a49f24();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return 8;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return 8;
    }
    lVar2 = param_1[1];
    lVar1 = FUN_144a4a07e();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return 9;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return 9;
    }
    lVar2 = param_1[1];
    lVar1 = FUN_144a7add4();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return 10;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return 10;
    }
    lVar2 = param_1[1];
    lVar1 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) {
        return 0xb;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
      return 0xb;
    }
    lVar2 = param_1[1];
    lVar1 = FUN_144a810c6();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) goto LAB_14688da6b;
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
LAB_14688da6b:
      lVar2 = param_1[1];
      lVar1 = FUN_140019cf2();
      if (*(ulonglong *)(lVar1 + 8) != 0) {
        bVar3 = (*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0;
        goto LAB_14688da87;
      }
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) break;
      goto LAB_14688da87;
    }
    lVar2 = param_1[1];
    lVar1 = FUN_1446ef9c4();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar3) goto LAB_14688da8d;
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
LAB_14688da8d:
      lVar2 = param_1[1];
      lVar1 = FUN_140f4d408();
      if (*(ulonglong *)(lVar1 + 8) != 0) {
        bVar3 = (*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0;
        goto LAB_14688daa9;
      }
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) goto LAB_14688daf2;
      goto LAB_14688daa9;
    }
    lVar2 = param_1[1];
    lVar1 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (!bVar3) {
        return 0;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) {
      return 0;
    }
    param_1 = (longlong *)param_1[0xf];
  } while( true );
  while (lVar2 != 0) {
    lVar2 = *(longlong *)(lVar2 + 0x30);
    bVar3 = lVar2 != 0;
    if (lVar2 == lVar1) break;
  }
LAB_14688da87:
  return bVar3 * '\x02' | 0xc;
  while (lVar2 != 0) {
LAB_14688daf2:
    lVar2 = *(longlong *)(lVar2 + 0x30);
    bVar3 = lVar2 != 0;
    if (lVar2 == lVar1) break;
  }
LAB_14688daa9:
  return bVar3 * '\x02' | 0xd;
}



// FUNCTION 14688db08 FUN_14688db08 body=698 status=ok
// SIG undefined FUN_14688db08(void)

undefined8 FUN_14688db08(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  do {
    lVar3 = param_1[1];
    lVar1 = FUN_14475a8dc();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar1 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar1) break;
        } while (lVar3 != 0);
      }
      if (!bVar4) goto LAB_14688db79;
LAB_14688db64:
      lVar3 = (**(code **)(*param_1 + 0x1f0))(param_1);
      if (lVar3 == 0) goto LAB_14688db79;
LAB_14688dd36:
      lVar3 = 0x70;
      goto LAB_14688dd3b;
    }
    if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) goto LAB_14688db64;
LAB_14688db79:
    lVar3 = param_1[1];
    lVar1 = FUN_144a7add4();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar1 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar1) break;
        } while (lVar3 != 0);
      }
      if (bVar4) goto LAB_14688dd4a;
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
LAB_14688dd4a:
      lVar3 = 0x78;
      goto LAB_14688dd3b;
    }
    lVar3 = param_1[1];
    lVar1 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar1 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar1) break;
        } while (lVar3 != 0);
      }
      if (bVar4) goto LAB_14688dd36;
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) goto LAB_14688dd36;
    lVar3 = param_1[1];
    lVar1 = FUN_144a810c6();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar1 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar1) break;
        } while (lVar3 != 0);
      }
      if (bVar4) goto LAB_14688dd51;
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
LAB_14688dd51:
      lVar1 = param_1[1];
      lVar2 = FUN_140019cf2();
      lVar3 = 0x70;
      if ((*(longlong *)(lVar2 + 8) != 0) || (lVar1 == lVar2 || lVar1 == 0)) goto LAB_14688dd3b;
      break;
    }
    lVar3 = param_1[1];
    lVar1 = FUN_1446ef9c4();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar1 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar1) break;
        } while (lVar3 != 0);
      }
      if (bVar4) goto LAB_14688dd88;
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
LAB_14688dd88:
      lVar1 = param_1[1];
      lVar2 = FUN_140f4d408();
      lVar3 = 0x70;
      if ((*(longlong *)(lVar2 + 8) != 0) || (lVar1 == lVar2 || lVar1 == 0)) goto LAB_14688dd3b;
      goto LAB_14688ddaf;
    }
    lVar3 = param_1[1];
    lVar1 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar1 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar1) break;
        } while (lVar3 != 0);
      }
      if (!bVar4) {
        return 0;
      }
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) {
      return 0;
    }
    param_1 = (longlong *)param_1[0xf];
    if (param_1 == (longlong *)0x0) {
      return 0;
    }
  } while( true );
  while (lVar1 != 0) {
    lVar1 = *(longlong *)(lVar1 + 0x30);
    if (lVar1 == lVar2) break;
  }
  goto LAB_14688dd3b;
  while (lVar1 != 0) {
LAB_14688ddaf:
    lVar1 = *(longlong *)(lVar1 + 0x30);
    if (lVar1 == lVar2) break;
  }
LAB_14688dd3b:
  return *(undefined8 *)((longlong)param_1 + lVar3);
}



// FUNCTION 14688ddc2 FUN_14688ddc2 body=63 status=ok
// SIG undefined FUN_14688ddc2(void)

undefined8 * FUN_14688ddc2(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0);
  uVar2 = FUN_144a810c6();
  puVar1[1] = uVar2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *puVar1 = &PTR_LAB_149e6fb80;
  return puVar1;
}



// FUNCTION 14688de02 FUN_14688de02 body=63 status=ok
// SIG undefined FUN_14688de02(void)

undefined8 * FUN_14688de02(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0);
  uVar2 = FUN_1446ef9c4();
  puVar1[1] = uVar2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *puVar1 = &PTR_LAB_149e71910;
  return puVar1;
}



// FUNCTION 14688de41 FUN_14688de41 body=145 status=ok
// SIG undefined FUN_14688de41(void)

undefined8 FUN_14688de41(longlong param_1,double *param_2,double *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  double dVar3;
  
  uVar2 = 3;
  if ((param_1 != 0) && (lVar1 = *(longlong *)(param_1 + 0x28), lVar1 != 0)) {
    if (param_2 == (double *)0x0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 1;
      if (*(char *)(param_1 + 0x23) == '\0') {
        switch(*(undefined1 *)(param_1 + 0x20)) {
        case 1:
          dVar3 = (double)(ulonglong)
                          ((*(byte *)((longlong)param_2 + (ulonglong)*(byte *)(lVar1 + 0x71)) &
                           *(byte *)(lVar1 + 0x73)) != 0);
          break;
        case 2:
          dVar3 = (double)(ulonglong)*(byte *)param_2;
          break;
        case 3:
          dVar3 = (double)(longlong)(int)*(float *)param_2;
          break;
        case 4:
        case 0x11:
          dVar3 = *param_2;
          break;
        case 5:
          dVar3 = (double)(longlong)*(float *)param_2;
          break;
        case 6:
          dVar3 = (double)(longlong)*param_2;
          break;
        default:
          goto switchD_14688de7f_caseD_7;
        case 10:
          dVar3 = (double)(**(code **)(**(longlong **)(lVar1 + 0x70) + 0x220))();
          break;
        case 0x10:
          dVar3 = (double)(ulonglong)(uint)*(float *)param_2;
        }
        *param_3 = dVar3;
        uVar2 = 0;
      }
    }
  }
switchD_14688de7f_caseD_7:
  return uVar2;
}



// FUNCTION 14688ded2 FUN_14688ded2 body=194 status=ok
// SIG undefined FUN_14688ded2(void)

undefined8 FUN_14688ded2(longlong param_1,double *param_2,double *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  double dVar4;
  ulonglong uVar5;
  
  if (param_1 == 0) {
    return 3;
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    return 3;
  }
  if (param_2 == (double *)0x0) {
    return 2;
  }
  uVar2 = 1;
  if (*(char *)(param_1 + 0x23) != '\0') {
    return 1;
  }
  switch(*(undefined1 *)(param_1 + 0x20)) {
  case 1:
    dVar4 = (double)(ulonglong)
                    ((*(byte *)((longlong)param_2 + (ulonglong)*(byte *)(lVar1 + 0x71)) &
                     *(byte *)(lVar1 + 0x73)) != 0);
    break;
  case 2:
    dVar4 = (double)(ulonglong)*(byte *)param_2;
    break;
  case 3:
  case 0x10:
    dVar4 = (double)(ulonglong)(uint)*(float *)param_2;
    break;
  case 4:
  case 0x11:
    dVar4 = *param_2;
    break;
  case 5:
    uVar5 = (ulonglong)*(float *)param_2;
    uVar3 = (ulonglong)(*(float *)param_2 - 9.223372e+18);
    goto LAB_14688df78;
  case 6:
    uVar5 = (ulonglong)*param_2;
    uVar3 = (ulonglong)(*param_2 - 9.223372036854776e+18);
LAB_14688df78:
    dVar4 = (double)(uVar3 & (longlong)uVar5 >> 0x3f | uVar5);
    break;
  default:
    goto switchD_14688df10_caseD_7;
  case 10:
    dVar4 = (double)(**(code **)(**(longlong **)(lVar1 + 0x70) + 0x230))();
  }
  *param_3 = dVar4;
  uVar2 = 0;
switchD_14688df10_caseD_7:
  return uVar2;
}



// FUNCTION 14688df94 FUN_14688df94 body=188 status=ok
// SIG undefined FUN_14688df94(void)

undefined8 FUN_14688df94(longlong param_1,double *param_2,double *param_3)

{
  longlong lVar1;
  double dVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  if (param_1 == 0) {
    return 3;
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    return 3;
  }
  if (param_2 == (double *)0x0) {
    return 2;
  }
  uVar3 = 1;
  if (*(char *)(param_1 + 0x23) != '\0') {
    return 1;
  }
  switch(*(undefined1 *)(param_1 + 0x20)) {
  case 1:
    dVar2 = 0.0;
    if ((*(byte *)((longlong)param_2 + (ulonglong)*(byte *)(lVar1 + 0x71)) & *(byte *)(lVar1 + 0x73)
        ) != 0) {
      dVar2 = 1.0;
    }
    break;
  case 2:
    dVar2 = (double)*(byte *)param_2;
    break;
  case 3:
    dVar2 = (double)(int)*(float *)param_2;
    break;
  case 4:
    dVar2 = (double)(longlong)*param_2;
    break;
  case 5:
    dVar2 = (double)*(float *)param_2;
    break;
  case 6:
    dVar2 = *param_2;
    break;
  default:
    goto switchD_14688dfd2_caseD_7;
  case 10:
    uVar4 = (**(code **)(**(longlong **)(lVar1 + 0x70) + 0x220))();
    goto LAB_14688e01d;
  case 0x10:
    uVar4 = (ulonglong)(uint)*(float *)param_2;
LAB_14688e01d:
    dVar2 = (double)(longlong)uVar4;
    break;
  case 0x11:
    dVar2 = ((double)CONCAT44(0x43300000,SUB84(*param_2,0)) - 4503599627370496.0) +
            ((double)CONCAT44(0x45300000,(int)((ulonglong)*param_2 >> 0x20)) -
            1.9342813113834067e+25);
  }
  *param_3 = dVar2;
  uVar3 = 0;
switchD_14688dfd2_caseD_7:
  return uVar3;
}



// FUNCTION 14688e050 FUN_14688e050 body=145 status=ok
// SIG undefined FUN_14688e050(void)

void FUN_14688e050(longlong param_1,double *param_2,double param_3)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if ((param_2 != (double *)0x0 && lVar1 != 0) && (*(char *)(param_1 + 0x23) == '\0')) {
    switch(*(undefined1 *)(param_1 + 0x20)) {
    case 1:
      if (param_3 == 0.0) {
        bVar2 = 0;
      }
      else {
        bVar2 = *(byte *)(lVar1 + 0x72);
      }
      *(byte *)((longlong)param_2 + (ulonglong)*(byte *)(lVar1 + 0x71)) =
           *(byte *)((longlong)param_2 + (ulonglong)*(byte *)(lVar1 + 0x71)) &
           ~*(byte *)(lVar1 + 0x73) | bVar2;
      return;
    case 2:
      *(char *)param_2 = SUB81(param_3,0);
      break;
    case 3:
    case 0x10:
      *(float *)param_2 = SUB84(param_3,0);
      return;
    case 4:
    case 0x11:
      *param_2 = param_3;
      return;
    case 5:
      *(float *)param_2 = (float)(longlong)param_3;
      return;
    case 6:
      *param_2 = (double)(longlong)param_3;
      return;
    case 10:
                    /* WARNING: Could not recover jumptable at 0x00014688e0da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(lVar1 + 0x70) + 0x200))();
      return;
    }
  }
  return;
}



// FUNCTION 14688e0e1 FUN_14688e0e1 body=194 status=ok
// SIG undefined FUN_14688e0e1(void)

void FUN_14688e0e1(longlong param_1,double *param_2,double param_3)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if ((param_2 != (double *)0x0 && lVar1 != 0) && (*(char *)(param_1 + 0x23) == '\0')) {
    switch(*(undefined1 *)(param_1 + 0x20)) {
    case 1:
      if (param_3 == 0.0) {
        bVar2 = 0;
      }
      else {
        bVar2 = *(byte *)(lVar1 + 0x72);
      }
      *(byte *)((longlong)param_2 + (ulonglong)*(byte *)(lVar1 + 0x71)) =
           *(byte *)((longlong)param_2 + (ulonglong)*(byte *)(lVar1 + 0x71)) &
           ~*(byte *)(lVar1 + 0x73) | bVar2;
      return;
    case 2:
      *(char *)param_2 = SUB81(param_3,0);
      break;
    case 3:
    case 0x10:
      *(float *)param_2 = SUB84(param_3,0);
      return;
    case 4:
    case 0x11:
      *param_2 = param_3;
      return;
    case 5:
      *(float *)param_2 = (float)(ulonglong)param_3;
      return;
    case 6:
      auVar3._8_4_ = (int)((ulonglong)param_3 >> 0x20);
      auVar3._0_8_ = param_3;
      auVar3._12_4_ = 0x45300000;
      *param_2 = ((double)CONCAT44(0x43300000,SUB84(param_3,0)) - 4503599627370496.0) +
                 (auVar3._8_8_ - 1.9342813113834067e+25);
      return;
    case 10:
                    /* WARNING: Could not recover jumptable at 0x00014688e181. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(lVar1 + 0x70) + 0x200))();
      return;
    }
  }
  return;
}



// FUNCTION 14688e1a3 FUN_14688e1a3 body=260 status=ok
// SIG undefined FUN_14688e1a3(void)

undefined8 FUN_14688e1a3(longlong param_1,double *param_2,double param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  
  uVar2 = 3;
  if ((param_1 != 0) && (lVar1 = *(longlong *)(param_1 + 0x28), lVar1 != 0)) {
    if (param_2 == (double *)0x0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 1;
      if (*(char *)(param_1 + 0x23) == '\0') {
        switch(*(undefined1 *)(param_1 + 0x20)) {
        case 1:
          if (ABS(param_3) <= 1e-08) {
            bVar3 = 0;
          }
          else {
            bVar3 = *(byte *)(lVar1 + 0x72);
          }
          *(byte *)((longlong)param_2 + (ulonglong)*(byte *)(lVar1 + 0x71)) =
               *(byte *)((longlong)param_2 + (ulonglong)*(byte *)(lVar1 + 0x71)) &
               ~*(byte *)(lVar1 + 0x73) | bVar3;
          break;
        case 2:
          *(char *)param_2 = (char)((uint)(int)ROUND(param_3 + param_3 + 0.5) >> 1);
          break;
        case 3:
        case 0x10:
          *(int *)param_2 = (int)ROUND(param_3 + param_3 + 0.5) >> 1;
          break;
        case 4:
        case 0x11:
          *param_2 = (double)((longlong)ROUND(param_3 + param_3 + 0.5) >> 1);
          break;
        case 5:
          *(float *)param_2 = (float)param_3;
          break;
        case 6:
          *param_2 = param_3;
          break;
        default:
          goto switchD_14688e1dd_caseD_7;
        case 10:
          (**(code **)(**(longlong **)(lVar1 + 0x70) + 0x200))
                    (*(longlong **)(lVar1 + 0x70),param_2,
                     (longlong)(param_3 - 9.223372036854776e+18) & (longlong)param_3 >> 0x3f |
                     (longlong)param_3);
        }
        uVar2 = 0;
      }
    }
  }
switchD_14688e1dd_caseD_7:
  return uVar2;
}



// FUNCTION 14688e2a7 FUN_14688e2a7 body=1145 status=ok
// SIG undefined FUN_14688e2a7(void)

void FUN_14688e2a7(longlong *param_1,longlong *param_2,char param_3,undefined8 *param_4)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  int *piVar13;
  longlong lVar14;
  int *piVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined1 auStack_88 [32];
  longlong local_68;
  void *local_60;
  void *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((param_1[1] != 0) && (lVar14 = *param_1, lVar14 != 0)) && (param_2[1] != 0)) &&
     (*param_2 != 0)) {
    lVar7 = FUN_141156bb2();
    if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        != lVar7 + 0x30)) {
      lVar14 = 0;
    }
    lVar7 = *param_2;
    if (lVar7 != 0) {
      lVar8 = FUN_141156bb2();
      if (((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) && (lVar14 != 0)
          ) && ((*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30 &&
                ((longlong)*(int *)(lVar14 + 200) != 0)))) {
        plVar17 = *(longlong **)(lVar14 + 0xc0);
        plVar12 = plVar17 + (longlong)*(int *)(lVar14 + 200) * 6;
        do {
          if (param_3 == '\0') {
            iVar6 = (int)plVar17[1];
            iVar10 = *(int *)((longlong)plVar17 + 0xc);
            iVar11 = (int)plVar17[2];
            iVar2 = *(int *)((longlong)plVar17 + 0x14);
LAB_14688e3e1:
            if ((longlong)*(int *)(lVar7 + 200) != 0) {
              plVar16 = *(longlong **)(lVar7 + 0xc0);
              lVar14 = (longlong)*(int *)(lVar7 + 200) * 0x30;
              do {
                if ((((int)plVar16[1] == iVar6) && (*(int *)((longlong)plVar16 + 0xc) == iVar10)) &&
                   (((int)plVar16[2] == iVar11 && (*(int *)((longlong)plVar16 + 0x14) == iVar2)))) {
                  if (((plVar16 == (longlong *)0x0) || (plVar16[5] == 0)) || (plVar17[5] == 0))
                  break;
                  local_60 = (void *)((longlong)*(int *)(plVar16[5] + 0x44) + param_2[1]);
                  local_58 = (void *)((longlong)*(int *)(plVar17[5] + 0x44) + param_1[1]);
                  cVar5 = FUN_14688e76e(plVar16,plVar17);
                  if (cVar5 != '\0') {
                    if (local_60 != local_58) {
                      plVar16 = (longlong *)plVar16[5];
                      if ((*(byte *)((longlong)plVar16 + 0x3b) & 0x40) == 0) {
                        (**(code **)(*plVar16 + 0x100))(plVar16,local_60,local_58,(int)plVar16[6]);
                      }
                      else {
                        memcpy(local_60,local_58,
                               (longlong)(int)plVar16[6] *
                               (longlong)*(int *)((longlong)plVar16 + 0x34));
                      }
                    }
                    break;
                  }
                  if ((*(char *)((longlong)plVar16 + 0x23) != '\0') ||
                     (*(char *)((longlong)plVar17 + 0x23) != '\0')) break;
                  bVar1 = *(byte *)(plVar16 + 4);
                  if (((bVar1 - 1 < 6) || (bVar1 - 0x10 < 2)) &&
                     ((*(byte *)(plVar17 + 4) < 0x12 &&
                      ((0x3007eU >> (*(byte *)(plVar17 + 4) & 0x1f) & 1) != 0)))) {
                    if ((byte)(bVar1 - 5) < 2) {
                      local_50 = 0;
                      cVar5 = FUN_14688df94(plVar17);
                      if (cVar5 == '\0') {
                        FUN_14688e1a3(plVar16,local_60,local_50);
                      }
                    }
                    else if ((bVar1 < 0x12) && ((0x30004U >> (bVar1 & 0x1f) & 1) != 0)) {
                      local_50 = 0;
                      cVar5 = FUN_14688ded2(plVar17);
                      if (cVar5 == '\0') {
                        FUN_14688e0e1(plVar16,local_60,local_50);
                      }
                    }
                    else {
                      local_50 = 0;
                      cVar5 = FUN_14688de41(plVar17,local_58);
                      if (cVar5 == '\0') {
                        FUN_14688e050(plVar16,local_60,local_50);
                      }
                    }
                  }
                  else {
                    if ((bVar1 & 0xfe) == 0xe) {
                      if ((*(byte *)(plVar17 + 4) & 0xfe) != 0xe) break;
                    }
                    else if (((bVar1 & 0xfe) != 0xc) || ((*(byte *)(plVar17 + 4) & 0xfe) != 0xc))
                    break;
                    if (*plVar16 == 0) {
LAB_14688e6e0:
                      local_68 = 0;
                    }
                    else {
                      lVar8 = FUN_144a797b2();
                      lVar14 = *plVar16;
                      if (lVar14 == 0) goto LAB_14688e6e0;
                      local_68 = 0;
                      if ((lVar8 != 0) && (lVar3 = *(longlong *)(lVar14 + 0x10), lVar3 != 0)) {
                        if (*(int *)(lVar3 + 0x38) < *(int *)(lVar8 + 0x38)) goto LAB_14688e6e0;
                        local_68 = 0;
                        if (*(longlong *)
                             (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                            lVar8 + 0x30) {
                          local_68 = lVar14;
                        }
                      }
                    }
                    if (*plVar17 != 0) {
                      lVar8 = FUN_144a797b2();
                      pvVar4 = local_60;
                      lVar14 = *plVar17;
                      if ((((lVar14 != 0) && (lVar8 != 0)) &&
                          (lVar3 = *(longlong *)(lVar14 + 0x10), lVar3 != 0)) &&
                         (((*(int *)(lVar8 + 0x38) <= *(int *)(lVar3 + 0x38) && (local_68 != 0)) &&
                          ((*(longlong *)
                             (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                            lVar8 + 0x30 &&
                           ((*(int *)(local_68 + 0x38) <= *(int *)(lVar14 + 0x38) &&
                            (*(longlong *)
                              (*(longlong *)(lVar14 + 0x30) +
                              (longlong)*(int *)(local_68 + 0x38) * 8) == local_68 + 0x30)))))))) {
                        local_68 = plVar16[5];
                        uVar9 = (**(code **)(*(longlong *)plVar17[5] + 0x210))
                                          ((longlong *)plVar17[5],local_58);
                        FUN_14281147a(local_68,pvVar4,uVar9);
                      }
                    }
                  }
                  break;
                }
                plVar16 = plVar16 + 6;
                lVar14 = lVar14 + -0x30;
              } while (lVar14 != 0);
            }
          }
          else if ((longlong)*(int *)(param_4 + 1) != 0) {
            piVar15 = (int *)*param_4;
            piVar13 = piVar15 + (longlong)*(int *)(param_4 + 1) * 4;
            iVar6 = (int)plVar17[1];
            iVar10 = *(int *)((longlong)plVar17 + 0xc);
            iVar11 = (int)plVar17[2];
            iVar2 = *(int *)((longlong)plVar17 + 0x14);
            do {
              if ((((*piVar15 == iVar6) && (piVar15[1] == iVar10)) && (piVar15[2] == iVar11)) &&
                 (piVar15[3] == iVar2)) goto LAB_14688e3e1;
              piVar15 = piVar15 + 4;
            } while (piVar15 != piVar13);
          }
          plVar17 = plVar17 + 6;
        } while (plVar17 != plVar12);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14688e722 FUN_14688e722 body=75 status=ok
// SIG undefined FUN_14688e722(void)

longlong FUN_14688e722(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 200) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xc0);
    lVar2 = (longlong)*(int *)(param_1 + 200) * 0x30;
    do {
      if ((((*(int *)(lVar1 + 8) == *param_2) && (*(int *)(lVar1 + 0xc) == param_2[1])) &&
          (*(int *)(lVar1 + 0x10) == param_2[2])) && (*(int *)(lVar1 + 0x14) == param_2[3])) {
        return lVar1;
      }
      lVar1 = lVar1 + 0x30;
      lVar2 = lVar2 + -0x30;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 14688e76e FUN_14688e76e body=319 status=ok
// SIG undefined FUN_14688e76e(void)

bool FUN_14688e76e(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  bVar1 = *(byte *)((longlong)param_2 + 0x23);
  if (bVar1 != *(byte *)((longlong)param_1 + 0x23)) {
    return false;
  }
  if ((ulonglong)bVar1 != 0) {
    uVar5 = 0;
    do {
      if (*(char *)((longlong)param_2 + uVar5 + 0x21) != *(char *)((longlong)param_1 + uVar5 + 0x21)
         ) {
        return false;
      }
      uVar5 = uVar5 + 1;
    } while (bVar1 != uVar5);
  }
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != *(byte *)(param_2 + 4)) {
    return false;
  }
  if (bVar1 - 10 < 2) {
    lVar4 = *param_2;
    if ((lVar4 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar4);
    }
    goto LAB_14688e7d1;
  }
  if (bVar1 != 0xc) {
    return true;
  }
  if (*param_1 == 0) {
LAB_14688e88b:
    lVar6 = 0;
  }
  else {
    lVar3 = FUN_144a797b2();
    lVar4 = *param_1;
    if (lVar4 == 0) goto LAB_14688e88b;
    lVar6 = 0;
    if ((lVar3 != 0) && (lVar2 = *(longlong *)(lVar4 + 0x10), lVar2 != 0)) {
      if (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38)) goto LAB_14688e88b;
      lVar6 = 0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        lVar6 = lVar4;
      }
    }
  }
  if (*param_2 != 0) {
    lVar4 = FUN_144a797b2();
    lVar3 = *param_2;
    if (lVar3 != 0) {
      if (lVar4 == 0) {
        return false;
      }
      lVar2 = *(longlong *)(lVar3 + 0x10);
      if (lVar2 == 0) {
        return false;
      }
      if (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        if (lVar6 == 0) {
          return false;
        }
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
            lVar4 + 0x30) {
          return false;
        }
        if (*(int *)(lVar6 + 0x38) <= *(int *)(lVar3 + 0x38)) {
          lVar4 = lVar6 + 0x30;
          param_1 = (longlong *)((longlong)*(int *)(lVar6 + 0x38) * 8 + *(longlong *)(lVar3 + 0x30))
          ;
LAB_14688e7d1:
          return *param_1 == lVar4;
        }
      }
    }
  }
  return false;
}



// FUNCTION 14688e8ae FUN_14688e8ae body=164 status=ok
// SIG undefined FUN_14688e8ae(void)

longlong * FUN_14688e8ae(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [37];
  undefined2 local_23;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = param_2;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  uVar1 = FUN_14688d49e(param_3);
  *(undefined1 *)(param_1 + 4) = uVar1;
  lVar2 = FUN_14688db08(param_3);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  *param_1 = lVar2;
  FUN_14688d3a8(&local_23,param_3);
  *(undefined1 *)((longlong)param_1 + 0x23) = local_21;
  *(undefined2 *)((longlong)param_1 + 0x21) = local_23;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14688e954 FUN_14688e954 body=29 status=ok
// SIG undefined FUN_14688e954(void)

undefined4 FUN_14688e954(void)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_145814b44();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 200);
  }
  return uVar1;
}



// FUNCTION 14688e972 FUN_14688e972 body=479 status=ok
// SIG undefined FUN_14688e972(void)

void FUN_14688e972(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (longlong *)0x0;
  uStack_50 = 0;
  lVar8 = FUN_145814b44();
  if (lVar8 != 0) {
    uVar9 = *(undefined8 *)(lVar8 + 0xc0);
    iVar1 = *(int *)(lVar8 + 200);
    uStack_50 = CONCAT44(uStack_50._4_4_,iVar1);
    if (iVar1 == 0) {
      uStack_50 = 0;
    }
    else {
      FUN_1462733a6(&local_58,iVar1,0);
      FUN_1427ded14(local_58,uVar9,iVar1);
    }
  }
  if ((longlong)(int)param_2[1] != 0) {
    plVar12 = (longlong *)*param_2;
    plVar13 = plVar12 + (longlong)(int)param_2[1] * 6;
    do {
      uVar6 = uStack_50;
      lVar8 = (longlong)(int)uStack_50;
      if (lVar8 != 0) {
        lVar10 = lVar8 * 0x30;
        plVar11 = local_58;
        do {
          if (plVar11[3] == plVar12[3]) {
            if (plVar11 != (longlong *)0x0) {
              *(char *)(plVar11 + 4) = (char)plVar12[4];
              lVar8 = *plVar12;
              if (DAT_14c950c29 == 1) {
                if (lVar8 == 0) {
                  lVar8 = 0;
                }
                else {
                  FUN_1456cec3c();
                  lVar8 = *plVar12;
                }
              }
              *plVar11 = lVar8;
              goto LAB_14688eaca;
            }
            break;
          }
          plVar11 = plVar11 + 6;
          lVar10 = lVar10 + -0x30;
        } while (lVar10 != 0);
      }
      if ((char)plVar12[4] != '\0') {
        uVar7 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar7);
        if (uStack_50._4_4_ < uVar7) {
          FUN_146896bce(&local_58,uVar6 & 0xffffffff);
        }
        plVar11 = local_58;
        lVar10 = *plVar12;
        local_58[lVar8 * 6] = lVar10;
        if ((lVar10 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        plVar11[lVar8 * 6 + 5] = plVar12[5];
        lVar4 = plVar12[1];
        uVar2 = *(undefined4 *)((longlong)plVar12 + 0xc);
        lVar5 = plVar12[2];
        uVar3 = *(undefined4 *)((longlong)plVar12 + 0x14);
        lVar10 = plVar12[4];
        plVar11[lVar8 * 6 + 3] = plVar12[3];
        plVar11[lVar8 * 6 + 4] = lVar10;
        *(int *)(plVar11 + lVar8 * 6 + 1) = (int)lVar4;
        *(undefined4 *)((longlong)plVar11 + lVar8 * 0x30 + 0xc) = uVar2;
        *(int *)(plVar11 + lVar8 * 6 + 2) = (int)lVar5;
        *(undefined4 *)((longlong)plVar11 + lVar8 * 0x30 + 0x14) = uVar3;
      }
LAB_14688eaca:
      plVar12 = plVar12 + 6;
    } while (plVar12 != plVar13);
  }
  local_68 = local_58;
  local_60 = (int)uStack_50;
  uVar9 = FUN_1427db2b0();
  FUN_14688eb52(param_1,uVar9);
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14688eb52 FUN_14688eb52 body=181 status=ok
// SIG undefined FUN_14688eb52(void)

void FUN_14688eb52(undefined4 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (longlong *)0x0;
  uStack_50 = 0;
  FUN_1401fa0f0(&local_58,param_2,0);
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  local_28 = 0;
  local_20 = 0;
  local_38 = (undefined4)local_58;
  uStack_34 = local_58._4_4_;
  uStack_30 = (undefined4)uStack_50;
  uStack_2c = uStack_50._4_4_;
  FUN_14688e2a7(&local_48,&local_38,0);
  FUN_14688ec62(param_1,&local_58);
  lVar1 = uStack_50;
  if (uStack_50 != 0) {
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x2f0))(local_58,uStack_50,1);
    }
    FUN_1400020a8(lVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14688ec08 FUN_14688ec08 body=89 status=ok
// SIG undefined FUN_14688ec08(void)

void FUN_14688ec08(undefined8 param_1)

{
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined4 local_50;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14688e8ae(local_48);
  local_50 = 1;
  local_58 = local_48;
  FUN_14688e972(param_1);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14688ec62 FUN_14688ec62 body=133 status=ok
// SIG undefined FUN_14688ec62(void)

longlong * FUN_14688ec62(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      plVar2 = (longlong *)*param_1;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x2f0))(plVar2,lVar1,1);
      }
      FUN_1400020a8(lVar1);
    }
    *param_1 = 0;
    param_1[1] = 0;
    lVar1 = *param_2;
    lVar3 = param_2[1];
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *param_1 = lVar1;
    param_1[1] = lVar3;
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 14688ece8 FUN_14688ece8 body=185 status=ok
// SIG undefined FUN_14688ece8(void)

void FUN_14688ece8(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = (longlong *)0x0;
  uStack_60 = 0;
  FUN_1401fa0f0(&local_68,*param_2,param_2[1]);
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_58 = *param_1;
  uStack_54 = param_1[1];
  uStack_50 = param_1[2];
  uStack_4c = param_1[3];
  local_48 = (undefined4)local_68;
  uStack_44 = local_68._4_4_;
  uStack_40 = (undefined4)uStack_60;
  uStack_3c = uStack_60._4_4_;
  FUN_14688e2a7(&local_58,&local_48,1);
  FUN_14688ec62(param_1,&local_68);
  lVar1 = uStack_60;
  if (uStack_60 != 0) {
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x2f0))(local_68,uStack_60,1);
    }
    FUN_1400020a8(lVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14688eda2 FUN_14688eda2 body=217 status=ok
// SIG undefined FUN_14688eda2(void)

char * FUN_14688eda2(longlong *param_1,char *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = FUN_145814b44();
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 200) != 0)) {
    lVar4 = *(longlong *)(lVar2 + 0xc0);
    lVar2 = (longlong)*(int *)(lVar2 + 200) * 0x30;
    do {
      if (*(longlong *)(lVar4 + 0x18) == param_3) {
        if (lVar4 != 0) {
          if ((param_1[1] == 0) || (*param_1 == 0)) goto LAB_14688ede2;
          lVar2 = param_1[1] + (longlong)*(int *)(*(longlong *)(lVar4 + 0x28) + 0x44);
          goto LAB_14688ede4;
        }
        break;
      }
      lVar4 = lVar4 + 0x30;
      lVar2 = lVar2 + -0x30;
    } while (lVar2 != 0);
  }
  lVar4 = 0;
LAB_14688ede2:
  lVar2 = 0;
LAB_14688ede4:
  local_28 = 0;
  cVar1 = FUN_14688de41(lVar4,lVar2,&local_28);
  cVar3 = local_28 != 0;
  if (cVar1 != '\0') {
    cVar3 = cVar1;
  }
  *param_2 = cVar3;
  param_2[1] = cVar1 != '\0';
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14688ee7c FUN_14688ee7c body=212 status=ok
// SIG undefined FUN_14688ee7c(void)

char * FUN_14688ee7c(longlong *param_1,char *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = FUN_145814b44();
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 200) != 0)) {
    lVar3 = *(longlong *)(lVar2 + 0xc0);
    lVar2 = (longlong)*(int *)(lVar2 + 200) * 0x30;
    do {
      if (*(longlong *)(lVar3 + 0x18) == param_3) {
        if (lVar3 != 0) {
          if ((param_1[1] == 0) || (*param_1 == 0)) goto LAB_14688eebc;
          lVar2 = param_1[1] + (longlong)*(int *)(*(longlong *)(lVar3 + 0x28) + 0x44);
          goto LAB_14688eebe;
        }
        break;
      }
      lVar3 = lVar3 + 0x30;
      lVar2 = lVar2 + -0x30;
    } while (lVar2 != 0);
  }
  lVar3 = 0;
LAB_14688eebc:
  lVar2 = 0;
LAB_14688eebe:
  local_28 = 0;
  cVar1 = FUN_14688de41(lVar3,lVar2,&local_28);
  if (cVar1 == '\0') {
    *(undefined4 *)param_2 = (undefined4)local_28;
  }
  else {
    *param_2 = cVar1;
  }
  param_2[4] = cVar1 != '\0';
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14688ef52 FUN_14688ef52 body=216 status=ok
// SIG undefined FUN_14688ef52(void)

float * FUN_14688ef52(longlong *param_1,float *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = FUN_145814b44();
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 200) != 0)) {
    lVar3 = *(longlong *)(lVar2 + 0xc0);
    lVar2 = (longlong)*(int *)(lVar2 + 200) * 0x30;
    do {
      if (*(longlong *)(lVar3 + 0x18) == param_3) {
        if (lVar3 != 0) {
          if ((param_1[1] == 0) || (*param_1 == 0)) goto LAB_14688ef92;
          lVar2 = param_1[1] + (longlong)*(int *)(*(longlong *)(lVar3 + 0x28) + 0x44);
          goto LAB_14688ef94;
        }
        break;
      }
      lVar3 = lVar3 + 0x30;
      lVar2 = lVar2 + -0x30;
    } while (lVar2 != 0);
  }
  lVar3 = 0;
LAB_14688ef92:
  lVar2 = 0;
LAB_14688ef94:
  local_28 = 0.0;
  cVar1 = FUN_14688df94(lVar3,lVar2,&local_28);
  if (cVar1 == '\0') {
    *param_2 = (float)local_28;
  }
  else {
    *(char *)param_2 = cVar1;
  }
  *(bool *)(param_2 + 1) = cVar1 != '\0';
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14688f02c FUN_14688f02c body=214 status=ok
// SIG undefined FUN_14688f02c(void)

char * FUN_14688f02c(longlong *param_1,char *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = FUN_145814b44();
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 200) != 0)) {
    lVar3 = *(longlong *)(lVar2 + 0xc0);
    lVar2 = (longlong)*(int *)(lVar2 + 200) * 0x30;
    do {
      if (*(longlong *)(lVar3 + 0x18) == param_3) {
        if (lVar3 != 0) {
          if ((param_1[1] == 0) || (*param_1 == 0)) goto LAB_14688f06c;
          lVar2 = param_1[1] + (longlong)*(int *)(*(longlong *)(lVar3 + 0x28) + 0x44);
          goto LAB_14688f06e;
        }
        break;
      }
      lVar3 = lVar3 + 0x30;
      lVar2 = lVar2 + -0x30;
    } while (lVar2 != 0);
  }
  lVar3 = 0;
LAB_14688f06c:
  lVar2 = 0;
LAB_14688f06e:
  local_28 = 0;
  cVar1 = FUN_14688f103(lVar3,lVar2,&local_28);
  if (cVar1 == '\0') {
    *(undefined8 *)param_2 = local_28;
  }
  else {
    *param_2 = cVar1;
  }
  param_2[8] = cVar1 != '\0';
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14688f103 FUN_14688f103 body=144 status=ok
// SIG undefined FUN_14688f103(void)

ulonglong FUN_14688f103(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  longlong lVar4;
  bool bVar5;
  undefined7 uVar3;
  
  uVar3 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar2 = CONCAT71(uVar3,3);
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x28) != 0)) {
    if (param_2 == (undefined8 *)0x0) {
      uVar2 = CONCAT71(uVar3,2);
    }
    else {
      uVar2 = CONCAT71(uVar3,1);
      if (*(char *)(param_1 + 0x23) == '\0') {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8);
        lVar1 = FUN_144a63fc8();
        if (*(ulonglong *)(lVar1 + 8) == 0) {
          bVar5 = lVar4 != 0;
          if (lVar4 != lVar1 && bVar5) {
            do {
              lVar4 = *(longlong *)(lVar4 + 0x30);
              bVar5 = lVar4 != 0;
              if (lVar4 == lVar1) break;
            } while (lVar4 != 0);
          }
          if (!bVar5) goto LAB_14688f12e;
        }
        else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0)
        goto LAB_14688f12e;
        *param_3 = *param_2;
        uVar2 = 0;
      }
    }
  }
LAB_14688f12e:
  return uVar2 & 0xffffffff;
}



// FUNCTION 14688f194 FUN_14688f194 body=135 status=ok
// SIG undefined FUN_14688f194(void)

void FUN_14688f194(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = FUN_145814b44();
  if ((lVar1 == 0) || ((longlong)*(int *)(lVar1 + 200) == 0)) {
LAB_14688f1be:
    lVar2 = 0;
LAB_14688f1c0:
    lVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0xc0);
    lVar1 = (longlong)*(int *)(lVar1 + 200) * 0x30;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + 0x18) == param_2) {
        if (lVar2 == 0) goto LAB_14688f1be;
        if ((param_1[1] == 0) || (*param_1 == 0)) goto LAB_14688f1c0;
        lVar3 = param_1[1] + (longlong)*(int *)(*(longlong *)(lVar2 + 0x28) + 0x44);
        goto LAB_14688f1c2;
      }
      lVar2 = lVar2 + 0x30;
      lVar1 = lVar1 + -0x30;
    } while (lVar1 != 0);
    lVar2 = 0;
  }
LAB_14688f1c2:
  FUN_14688e1a3(lVar2,lVar3,param_3);
  return;
}



// FUNCTION 14688f21c FUN_14688f21c body=720 status=ok
// SIG undefined FUN_14688f21c(void)

undefined4 * FUN_14688f21c(longlong *param_1,undefined4 *param_2,longlong param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 uStack_48;
  char acStack_47 [3];
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = FUN_145814b44();
  if ((lVar3 != 0) && ((longlong)*(int *)(lVar3 + 200) != 0)) {
    plVar7 = *(longlong **)(lVar3 + 0xc0);
    lVar3 = (longlong)*(int *)(lVar3 + 200) * 0x30;
    do {
      if (plVar7[3] == param_3) {
        if (plVar7 != (longlong *)0x0) {
          if ((*(char *)((longlong)plVar7 + 0x23) == '\0') ||
             (*(char *)((longlong)plVar7 + 0x21) != '\x01')) {
            *(undefined1 *)param_2 = 1;
            *(undefined1 *)(param_2 + 0x14) = 1;
            goto LAB_14688f27d;
          }
          if ((param_1[1] != 0) && (*param_1 != 0)) {
            lVar3 = plVar7[5];
            lVar8 = param_1[1] + (longlong)*(int *)(lVar3 + 0x44);
            if (lVar8 != 0) {
              if (lVar3 == 0) {
                lVar5 = 0;
                goto LAB_14688f30e;
              }
              lVar5 = *(longlong *)(lVar3 + 8);
              lVar4 = FUN_1446e6bbc();
              if (*(ulonglong *)(lVar4 + 8) == 0) {
                bVar9 = lVar5 != 0;
                if (lVar5 == lVar4 || !bVar9) goto LAB_14688f305;
                goto LAB_14688f47b;
              }
              bVar9 = (*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0;
              goto LAB_14688f305;
            }
          }
        }
        break;
      }
      plVar7 = plVar7 + 6;
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != 0);
  }
  *(undefined1 *)param_2 = 3;
  *(undefined1 *)(param_2 + 0x14) = 1;
  goto LAB_14688f27d;
  while (lVar5 != 0) {
LAB_14688f47b:
    lVar5 = *(longlong *)(lVar5 + 0x30);
    bVar9 = lVar5 != 0;
    if (lVar5 == lVar4) break;
  }
LAB_14688f305:
  lVar5 = 0;
  if (bVar9) {
    lVar5 = lVar3;
  }
LAB_14688f30e:
  uVar1 = *(undefined1 *)(lVar5 + 0x70);
  uStack_74 = (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x178))();
  local_88 = *(longlong *)(lVar5 + 0x78);
  local_78 = *(undefined4 *)(local_88 + 0x34);
  uStack_70 = CONCAT31(uStack_70._1_3_,uVar1);
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  lVar3 = plVar7[5];
  uStack_80 = lVar8;
  if (lVar3 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(longlong *)(lVar3 + 8);
    lVar5 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar9 = lVar8 != 0;
      if (lVar8 != lVar5 && bVar9) {
        do {
          lVar8 = *(longlong *)(lVar8 + 0x30);
          bVar9 = lVar8 != 0;
          if (lVar8 == lVar5) break;
        } while (lVar8 != 0);
      }
    }
    else {
      bVar9 = (*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0;
    }
    lVar8 = 0;
    if (bVar9) {
      lVar8 = lVar3;
    }
  }
  uStack_48 = (char)plVar7[4];
  local_68 = *plVar7;
  if (DAT_14c950c29 == '\x01') {
    if (local_68 == 0) {
      local_68 = 0;
    }
    else {
      FUN_1456cec3c();
      local_68 = *plVar7;
    }
  }
  local_40 = *(undefined8 *)(lVar8 + 0x78);
  acStack_47[2] = *(char *)((longlong)plVar7 + 0x23);
  uVar2 = *(undefined2 *)((longlong)plVar7 + 0x21);
  acStack_47[0] = (char)uVar2;
  acStack_47[1] = (char)((ushort)uVar2 >> 8);
  if (acStack_47[2] != '\0') {
    acStack_47[0] = '\0';
    if ((byte)(acStack_47[2] - 1U) == 0) {
      acStack_47[2] = '\0';
    }
    else {
      uVar6 = (ulonglong)(byte)(acStack_47[2] - 1U);
      do {
        acStack_47[(int)uVar6 - 1] = acStack_47[uVar6];
        acStack_47[uVar6] = '\0';
        uVar6 = uVar6 - 1;
      } while ((char)uVar6 != '\0');
      acStack_47[2] = acStack_47[2] + -1;
    }
  }
  param_2[4] = local_78;
  param_2[5] = uStack_74;
  param_2[6] = uStack_70;
  param_2[7] = uStack_6c;
  *param_2 = (undefined4)local_88;
  param_2[1] = local_88._4_4_;
  param_2[2] = (undefined4)uStack_80;
  param_2[3] = uStack_80._4_4_;
  *(longlong *)(param_2 + 8) = local_68;
  if ((DAT_14c950c29 == '\x01') && (local_68 != 0)) {
    FUN_1456cec3c();
  }
  *(undefined8 *)(param_2 + 0x12) = local_40;
  *(undefined8 *)(param_2 + 0xe) = local_50;
  *(ulonglong *)(param_2 + 0x10) =
       CONCAT44(uStack_44,
                CONCAT13(acStack_47[2],CONCAT12(acStack_47[1],CONCAT11(acStack_47[0],uStack_48))));
  param_2[10] = (undefined4)local_60;
  param_2[0xb] = local_60._4_4_;
  param_2[0xc] = (undefined4)uStack_58;
  param_2[0xd] = uStack_58._4_4_;
  *(undefined1 *)(param_2 + 0x14) = 0;
LAB_14688f27d:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14688f4ee FUN_14688f4ee body=44 status=ok
// SIG undefined FUN_14688f4ee(void)

undefined8 FUN_14688f4ee(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_2 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 != *param_2)) {
    uVar2 = 0;
  }
  else {
    if (lVar1 != 0) {
      uVar2 = FUN_14470ec92(lVar1,param_1[1],param_2[1],param_3);
      return uVar2;
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 14688f51a FUN_14688f51a body=361 status=ok
// SIG undefined FUN_14688f51a(void)

void FUN_14688f51a(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined1 auStack_7a8 [32];
  undefined1 local_788;
  undefined4 local_780;
  undefined1 local_770 [1792];
  undefined1 *local_70;
  uint local_68;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_7a8;
  lVar7 = FUN_145814b44();
  if (lVar7 != 0) {
    iVar1 = *(int *)(lVar7 + 200);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(lVar7 + 0xc0);
      lVar11 = 0;
      do {
        lVar4 = *(longlong *)(lVar3 + lVar11);
        if (lVar4 != 0) {
          iVar2 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
            FUN_1447f76d2(param_2,iVar2);
          }
          *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar4;
        }
        lVar11 = lVar11 + 0x30;
      } while ((longlong)iVar1 * 0x30 != lVar11);
    }
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar8 = FUN_1446dcc8c();
    local_780 = 2;
    local_788 = 1;
    FUN_140021b28(local_770,uVar8,lVar7,uVar5);
    while (0 < (int)local_68) {
      puVar10 = local_70;
      if (local_70 == (undefined1 *)0x0) {
        puVar10 = local_770;
      }
      puVar9 = *(undefined1 **)(puVar10 + (ulonglong)local_68 * 0xe0 + -0x18);
      if (*(undefined1 **)(puVar10 + (ulonglong)local_68 * 0xe0 + -0x18) == (undefined1 *)0x0) {
        puVar9 = puVar10 + (ulonglong)local_68 * 0xe0 + -0xd8;
      }
      plVar6 = *(longlong **)
                (*(longlong *)
                  (*(longlong *)
                    (puVar9 + (longlong)*(int *)(puVar10 + (ulonglong)local_68 * 0xe0 + -8) * 0x18)
                  + 0x70) + 0xb8);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x58))
                  (plVar6,*(undefined8 *)
                           (puVar9 + (longlong)*(int *)(puVar10 + (ulonglong)local_68 * 0xe0 + -8) *
                                     0x18 + 8),param_2);
      }
      FUN_140caedf2(local_770);
    }
    FUN_140021a7a(local_770);
  }
  if ((local_48 ^ (ulonglong)auStack_7a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14688f684 FUN_14688f684 body=164 status=ok
// SIG undefined FUN_14688f684(void)

char * FUN_14688f684(longlong param_1,char *param_2,uint param_3)

{
  ulonglong *puVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  if (((int)param_3 < 0) || (puVar1 = *(ulonglong **)(param_1 + 8), (int)puVar1[1] <= (int)param_3))
  {
    lVar4 = 0;
  }
  else {
    if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
      uVar3 = *puVar1;
    }
    else {
      uVar3 = *puVar1;
      if ((uVar3 & 1) != 0) {
        uVar3 = (longlong)puVar1 + ((longlong)uVar3 >> 0x18);
      }
    }
    lVar4 = (longlong)*(int *)(param_1 + 0x10) * (ulonglong)param_3 + uVar3;
  }
  cVar2 = FUN_14688f103(param_1 + 0x20,lVar4,&local_18);
  if (cVar2 == '\0') {
    *(undefined8 *)param_2 = local_18;
  }
  else {
    *param_2 = cVar2;
  }
  param_2[8] = cVar2 != '\0';
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14688f72a FUN_14688f72a body=112 status=ok
// SIG undefined FUN_14688f72a(void)

undefined8 FUN_14688f72a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != (longlong *)0x0) {
    param_1 = (longlong *)*param_1;
    if (param_1 == (longlong *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = -(longlong)*(int *)(*param_1 + 0x5c) &
              (longlong)param_1 + (longlong)*(int *)(*param_1 + 0x5c) + 7;
    }
    param_2 = (longlong *)*param_2;
    if (param_2 == (longlong *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = -(longlong)*(int *)(*param_2 + 0x5c) &
              (longlong)param_2 + (longlong)*(int *)(*param_2 + 0x5c) + 7;
    }
    if (uVar4 == uVar3) {
      if (param_1 == (longlong *)0x0) {
        lVar1 = 0;
      }
      else {
        lVar1 = *param_1;
      }
      if (param_2 == (longlong *)0x0) {
        lVar2 = 0;
      }
      else {
        lVar2 = *param_2;
      }
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 == lVar2);
    }
  }
  return 0;
}



// FUNCTION 14688f79a FUN_14688f79a body=67 status=ok
// SIG undefined FUN_14688f79a(void)

void FUN_14688f79a(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  param_1 = (longlong *)*param_1;
  if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
    lVar1 = (longlong)*(int *)(*param_1 + 0x5c);
    thunk_FUN_140497476(param_2,param_1,-lVar1 & (longlong)param_1 + lVar1 + 7,0,0);
  }
  return;
}



// FUNCTION 14688f7de FUN_14688f7de body=112 status=ok
// SIG undefined FUN_14688f7de(void)

undefined8 FUN_14688f7de(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != (longlong *)0x0) {
    param_1 = (longlong *)*param_1;
    if (param_1 == (longlong *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = -(longlong)*(int *)(*param_1 + 0x5c) &
              (longlong)param_1 + (longlong)*(int *)(*param_1 + 0x5c) + 7;
    }
    param_2 = (longlong *)*param_2;
    if (param_2 == (longlong *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = -(longlong)*(int *)(*param_2 + 0x5c) &
              (longlong)param_2 + (longlong)*(int *)(*param_2 + 0x5c) + 7;
    }
    if (uVar4 == uVar3) {
      if (param_1 == (longlong *)0x0) {
        lVar1 = 0;
      }
      else {
        lVar1 = *param_1;
      }
      if (param_2 == (longlong *)0x0) {
        lVar2 = 0;
      }
      else {
        lVar2 = *param_2;
      }
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 == lVar2);
    }
  }
  return 0;
}



// FUNCTION 14688f84e FUN_14688f84e body=67 status=ok
// SIG undefined FUN_14688f84e(void)

void FUN_14688f84e(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  param_1 = (longlong *)*param_1;
  if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
    lVar1 = (longlong)*(int *)(*param_1 + 0x5c);
    thunk_FUN_140497476(param_2,param_1,-lVar1 & (longlong)param_1 + lVar1 + 7,0,0);
  }
  return;
}



// FUNCTION 14688f891 FUN_14688f891 body=83 status=ok
// SIG undefined FUN_14688f891(void)

void FUN_14688f891(undefined4 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_24;
  undefined4 *local_20;
  undefined8 *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = &local_24;
  local_18 = &local_30;
  local_30 = param_2;
  local_24 = param_1;
  FUN_146897444(local_c);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14688f8e6 FUN_14688f8e6 body=142 status=ok
// SIG undefined FUN_14688f8e6(void)

undefined8 * FUN_14688f8e6(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0x4000000000;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  lVar1 = *param_2;
  param_1[0x4e] = lVar1;
  param_1[0x50] = 0;
  if (lVar1 != 0) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[2];
    }
    (**(code **)*plVar2)(plVar2,param_1 + 0x50);
  }
  return param_1;
}



// FUNCTION 14688f974 FUN_14688f974 body=532 status=ok
// SIG undefined FUN_14688f974(void)

int FUN_14688f974(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  local_34 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  local_34 = local_34 >> 0x10 ^ local_34;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & local_34) * 4);
    if (iVar8 != -1) {
      do {
        if (*(uint *)(*param_1 + (longlong)iVar8 * 0xc) == local_34) goto LAB_14688fb64;
        iVar8 = *(int *)(*param_1 + (longlong)iVar8 * 0xc + 4);
      } while (iVar8 != -1);
    }
  }
  FUN_1468979ce(param_1,&local_48,local_34,&local_34);
  iVar8 = (int)local_48;
  local_48 = (undefined2 *)0x0;
  FUN_14485c47a(&local_48,param_2);
  iVar7 = (int)param_1[0x4b];
  *(uint *)(param_1 + 0x4b) = iVar7 + 1U;
  if (*(uint *)((longlong)param_1 + 0x25c) < iVar7 + 1U) {
    FUN_146897adc(param_1 + 10,iVar7);
  }
  plVar5 = param_1 + 10;
  if ((longlong *)param_1[0x4a] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[0x4a];
  }
  plVar5[iVar7] = (longlong)local_48;
  if ((int)param_1[0x4c] == 0) {
    pcVar1 = (code *)param_1[0x4e];
    plVar5 = param_1 + 0x52;
    if ((longlong *)param_1[0x50] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0x50];
    }
    uVar6 = (**(code **)(*plVar5 + 8))();
    uVar6 = (*pcVar1)(uVar6);
    FUN_144750a86(uVar6,&local_48,0,0);
    iVar7 = local_40 + -1;
    puVar2 = local_48;
    if (local_40 == 0) {
      iVar7 = 0;
      puVar2 = &DAT_149dfb77a;
    }
    uVar4 = FUN_144a49b4a(iVar7,puVar2);
    *(undefined4 *)(param_1 + 0x4c) = uVar4;
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_144750a86(param_2,&local_48,0,0);
  iVar7 = local_40 + -1;
  puVar2 = local_48;
  if (local_40 == 0) {
    iVar7 = 0;
    puVar2 = &DAT_149dfb77a;
  }
  uVar4 = FUN_144a49b4a(iVar7,puVar2);
  uVar4 = FUN_144a78877((int)param_1[0x4c],uVar4);
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
    uVar4 = (undefined4)param_1[0x4c];
  }
  FUN_14688f891(uVar4,param_1);
LAB_14688fb64:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14688fb8a FUN_14688fb8a body=97 status=ok
// SIG undefined FUN_14688fb8a(void)

void FUN_14688fb8a(longlong param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = (param_2 - *(int *)(param_1 + 0x18)) + 1;
  if (0 < iVar4) {
    uVar2 = FUN_144a54ea4(param_1,iVar4);
    FUN_1447c6044(param_1,uVar2,iVar4,0);
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar3 = param_1;
  }
  iVar4 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar4 = param_2;
  }
  puVar1 = (uint *)(lVar3 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
  return;
}



// FUNCTION 14688fc06 FUN_14688fc06 body=370 status=ok
// SIG undefined FUN_14688fc06(void)

int FUN_14688fc06(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar4 = 0;
  if (param_2 == 0) {
    local_48 = 0;
  }
  else {
    local_48 = *(longlong *)(param_2 + 0x50);
  }
  local_40 = 0xffffffff;
  local_3c = 0x101;
  local_3a = 0;
  local_50 = param_2;
  FUN_14688bc9a(&local_50);
  if (local_48 != 0) {
    iVar4 = 0;
    do {
      lVar5 = *(longlong *)(local_48 + 8);
      lVar3 = FUN_144a5ab96();
      if (*(ulonglong *)(lVar3 + 8) == 0) {
        bVar6 = lVar5 != 0;
        if (lVar5 != lVar3 && bVar6) {
          do {
            lVar5 = *(longlong *)(lVar5 + 0x30);
            bVar6 = lVar5 != 0;
            if (lVar5 == lVar3) break;
          } while (lVar5 != 0);
        }
        if (bVar6) goto LAB_14688fd12;
LAB_14688fcb2:
        iVar2 = 0;
        if (((*(byte *)(local_48 + 0x3e) & 8) != 0) && (0 < *(int *)(local_48 + 0x30))) {
          lVar5 = 0;
          iVar2 = 0;
          do {
            iVar1 = FUN_1449b1a2a(local_48,*(int *)(local_48 + 0x34) * lVar5 +
                                           *(int *)(local_48 + 0x44) + param_1);
            if (iVar2 != 0) {
              iVar1 = FUN_144a78877(iVar2,iVar1);
            }
            iVar2 = iVar1;
            lVar5 = lVar5 + 1;
          } while (lVar5 < *(int *)(local_48 + 0x30));
        }
      }
      else {
        if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) goto LAB_14688fcb2;
LAB_14688fd12:
        iVar2 = 0;
      }
      if (iVar4 != 0) {
        iVar2 = FUN_144a78877(iVar4,iVar2);
      }
      iVar4 = iVar2;
      local_48 = *(longlong *)(local_48 + 0x18);
      FUN_14688bc9a(&local_50);
    } while (local_48 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 14688fd7a FUN_14688fd7a body=271 status=ok
// SIG undefined FUN_14688fd7a(void)

void FUN_14688fd7a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined **local_b8 [18];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar1 = FUN_144b00dc8();
  if ((lVar1 != 0) && (param_1[0xe] == 0)) {
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    FUN_14086ecde(param_1,&local_c8,1,0);
    if (0 < (int)uStack_c0) {
      lVar2 = 0;
      do {
        FUN_1427ff290(lVar1 + 0x240,*(undefined8 *)(local_c8 + lVar2 * 8));
        lVar2 = lVar2 + 1;
      } while (lVar2 < (int)uStack_c0);
    }
    FUN_1427ff290(lVar1 + 0x240,param_1);
    if (param_1[0xe] == 0) {
      FUN_144869430(local_b8);
      local_b8[0] = &PTR_FUN_149e69f40;
      (**(code **)(*param_1 + 0x2b8))(param_1,local_b8,1);
      FUN_144a7fc42(local_b8);
    }
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14688fe8a FUN_14688fe8a body=236 status=ok
// SIG undefined FUN_14688fe8a(void)

undefined8 FUN_14688fe8a(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_144a79778(param_2);
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_1401031ac(uVar2,0,&local_38);
  FUN_141090af6(&local_48,&local_38);
  iVar4 = local_40 + -1;
  if (local_40 == 0) {
    iVar4 = 0;
  }
  puVar3 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar3 = local_48;
  }
  FUN_140b127b8(&local_38,puVar3,iVar4,1);
  iVar4 = (int)uStack_30 + -1;
  puVar3 = local_38;
  if ((int)uStack_30 == 0) {
    iVar4 = 0;
    puVar3 = &DAT_149dfb77a;
  }
  uVar1 = FUN_144a49b4a(iVar4,puVar3);
  FUN_140002266(param_1,&DAT_149e061aa,uVar1);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14688ff78 FUN_14688ff78 body=180 status=ok
// SIG undefined FUN_14688ff78(void)

undefined8 * FUN_14688ff78(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0);
  FUN_1468900ae();
  puVar1[1] = &DAT_14c948f18;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_LAB_149e70630;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_14689002e(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689002e FUN_14689002e body=126 status=ok
// SIG undefined FUN_14689002e(void)

undefined8 *
FUN_14689002e(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_14689015c(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e70630;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468900ae FUN_1468900ae body=174 status=ok
// SIG undefined FUN_1468900ae(void)

undefined * FUN_1468900ae(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c948f68) {
    FUN_144b3d300(&DAT_14c948f68);
    if (DAT_14c948f68 == -1) {
      uVar1 = FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c948f18,L"FAnsiStrProperty",0x2000000000000000,0,0x2000000000008001,0,
                    uVar1,FUN_14688ff78);
      atexit(FUN_1427dc308);
      _Init_thread_footer(&DAT_14c948f68);
    }
  }
  return &DAT_14c948f18;
}



// FUNCTION 14689015c FUN_14689015c body=126 status=ok
// SIG undefined FUN_14689015c(void)

undefined8 *
FUN_14689015c(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_146897cdc(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e6df40;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468901dc FUN_1468901dc body=118 status=ok
// SIG undefined FUN_1468901dc(void)

undefined8 * FUN_1468901dc(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_146890254(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149e70630;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146890254 FUN_146890254 body=118 status=ok
// SIG undefined FUN_146890254(void)

undefined8 * FUN_146890254(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_146897d64(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149e6df40;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468902cc FUN_1468902cc body=981 status=ok
// SIG undefined FUN_1468902cc(void)

undefined8 FUN_1468902cc(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  ulonglong uVar1;
  void *_Src;
  int iVar2;
  longlong *_Src_00;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong **pplVar7;
  size_t sVar8;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  longlong *local_68;
  ulonglong uStack_60;
  longlong *local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar1 == DAT_14c892b78) {
    FUN_144a5dc74(&local_68);
    (**(code **)(**(longlong **)(*param_3 + 8) + 0x158))(*(longlong **)(*param_3 + 8),&local_68);
    lVar3 = FUN_1467cf004(&local_68);
    if (lVar3 == 0) {
      FUN_140056680(&local_78,&DAT_149dfb77a);
    }
    else {
      puVar4 = (undefined8 *)FUN_1467cf004(&local_68);
      local_78 = (void *)0x0;
      local_70 = *(int *)(puVar4 + 1);
      lVar3 = (longlong)local_70;
      _Src = (void *)*puVar4;
      if (lVar3 == 0) {
        local_6c = 0;
      }
      else {
        FUN_1446dd670(&local_78,local_70,0);
        memcpy(local_78,_Src,lVar3 * 2);
      }
    }
    iVar2 = local_70 + -1;
    if (local_70 == 0) {
      iVar2 = 0;
    }
    FUN_142745fd8(&local_58,local_78,iVar2);
    uVar1 = uStack_50;
    plVar6 = local_58;
    iVar2 = (int)uStack_50;
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    param_4 = param_4 + *(int *)(param_1 + 0x44);
    lVar3 = (longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40);
    puVar4 = (undefined8 *)(param_4 + lVar3);
    *(int *)(lVar3 + 8 + param_4) = iVar2;
    if (*(int *)(lVar3 + 0xc + param_4) == 0 && iVar2 == 0) {
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    }
    else {
      FUN_1409e00a6(puVar4,uVar1 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy((void *)*puVar4,plVar6,(longlong)iVar2);
      }
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_1400020a8(plVar6);
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  else {
    uVar1 = *(ulonglong *)(param_2 + 0xc);
    if (uVar1 == DAT_14c892b74) {
      local_68 = (longlong *)0x0;
      uStack_60 = 0;
      FUN_14021219d(*(undefined8 *)(*param_3 + 8),&local_68);
      iVar2 = (int)uStack_60 + -1;
      if ((int)uStack_60 == 0) {
        iVar2 = 0;
      }
      FUN_142745fd8(&local_58,local_68,iVar2);
LAB_1468904b2:
      _Src_00 = local_58;
      iVar2 = (int)uStack_50;
      sVar8 = (size_t)(int)uStack_50;
      param_4 = param_4 + *(int *)(param_1 + 0x44);
      lVar3 = (longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40);
      puVar4 = (undefined8 *)(param_4 + lVar3);
      *(int *)(lVar3 + 8 + param_4) = (int)uStack_50;
      if (*(int *)(lVar3 + 0xc + param_4) == 0 && (int)uStack_50 == 0) {
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      }
      else {
        FUN_1409e00a6(puVar4,uStack_50 & 0xffffffff);
        if (iVar2 != 0) {
          memcpy((void *)*puVar4,_Src_00,sVar8);
        }
      }
      plVar6 = local_68;
      if (_Src_00 != (longlong *)0x0) {
        FUN_1400020a8(_Src_00);
        plVar6 = local_68;
      }
    }
    else {
      if (uVar1 == DAT_14c892bd0) {
        local_68 = (longlong *)0x0;
        uStack_60 = 0;
        FUN_1427479f3(*(undefined8 *)(*param_3 + 8),&local_68);
        iVar2 = (int)uStack_60 + -1;
        if ((int)uStack_60 == 0) {
          iVar2 = 0;
        }
        FUN_14274607e(&local_58,local_68,iVar2);
        goto LAB_1468904b2;
      }
      uVar5 = 0;
      if (uVar1 != DAT_14c892bd4) goto LAB_146890442;
      local_58 = (longlong *)0x0;
      uStack_50 = 0;
      FUN_140117ade(*(undefined8 *)(*param_3 + 8),&local_58);
      plVar6 = local_58;
      local_68 = (longlong *)0x0;
      sVar8 = (size_t)(int)uStack_50;
      uStack_60 = CONCAT44(uStack_60._4_4_,(int)uStack_50);
      if (sVar8 == 0) {
        uStack_60 = uStack_50 & 0xffffffff;
      }
      else {
        FUN_1409e00a6(&local_68,uStack_50 & 0xffffffff,0);
        memcpy(local_68,plVar6,sVar8);
      }
      plVar6 = local_68;
      pplVar7 = (longlong **)
                ((longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
                param_4 + *(int *)(param_1 + 0x44));
      if (pplVar7 != &local_68) {
        iVar2 = (int)uStack_60;
        sVar8 = (size_t)(int)uStack_60;
        *(int *)(pplVar7 + 1) = (int)uStack_60;
        if ((int)uStack_60 == 0 && *(int *)((longlong)pplVar7 + 0xc) == 0) {
          *(undefined4 *)((longlong)pplVar7 + 0xc) = 0;
        }
        else {
          FUN_1409e00a6(pplVar7,uStack_60 & 0xffffffff);
          if (iVar2 != 0) {
            memcpy(*pplVar7,plVar6,sVar8);
          }
        }
      }
      plVar6 = local_58;
      if (local_68 != (longlong *)0x0) {
        FUN_1400020a8();
        plVar6 = local_58;
      }
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar5 = 3;
LAB_146890442:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1468906ac FUN_1468906ac body=459 status=ok
// SIG undefined FUN_1468906ac(void)

void FUN_1468906ac(longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7)

{
  char cVar1;
  undefined *puVar2;
  undefined **_Src;
  int iVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  int local_50;
  longlong local_48;
  int local_40;
  undefined *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = (undefined *)0x0;
  uStack_30 = 0;
  if (param_4 == 1) {
    cVar1 = (**(code **)(*param_1 + 0x88))();
    if (cVar1 == '\0') {
      param_3 = (undefined8 *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
      goto LAB_14689071f;
    }
    cVar1 = (**(code **)(*param_1 + 0x88))(param_1);
    if (cVar1 == '\0') {
      _Src = (undefined **)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
      if (_Src != &local_38) {
        if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
          (**(code **)(*param_1 + 0x100))(param_1,&local_38,_Src,(int)param_1[6]);
        }
        else {
          memcpy(&local_38,_Src,
                 (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0xa0))(param_1,param_3,&local_38);
    }
  }
  else {
LAB_14689071f:
    iVar3 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar3 = 0;
    }
    FUN_1427460fc(&local_38,*param_3,iVar3);
  }
  if ((param_7 & 1) == 0) {
    puVar2 = local_38;
    iVar3 = (int)uStack_30 + -1;
    if ((int)uStack_30 == 0) {
      iVar3 = 0;
    }
  }
  else {
    if ((int)uStack_30 - 2U < 0x7fffffff) {
      FUN_146890878(&local_38,&local_58);
      puVar4 = local_58;
      if (local_50 == 0) {
        puVar4 = &DAT_149e02088;
      }
      FUN_1427462d6(&local_48,&DAT_149e6f1ac,puVar4);
      iVar3 = local_40 + -1;
      if (local_40 == 0) {
        iVar3 = 0;
      }
      thunk_FUN_14047a987(param_2,local_48,iVar3);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14689075c;
    }
    puVar2 = &DAT_149e6f1b1;
    iVar3 = 2;
  }
  thunk_FUN_14047a987(param_2,puVar2,iVar3);
LAB_14689075c:
  if (local_38 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146890878 FUN_146890878 body=89 status=ok
// SIG undefined FUN_146890878(void)

undefined8 * FUN_146890878(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 1);
  _Src = (void *)*param_1;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1409e00a6(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1);
  }
  FUN_1467ac578(param_2,0);
  return param_2;
}



// FUNCTION 1468908d2 FUN_1468908d2 body=565 status=ok
// SIG undefined FUN_1468908d2(void)

wchar_t * FUN_1468908d2(longlong *param_1,wchar_t *param_2,longlong *param_3,int param_4,
                       undefined8 param_5,byte param_6,undefined8 param_7)

{
  int iVar1;
  char cVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  undefined8 *_Dst;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  if ((param_6 & 1) == 0) {
    FUN_142745f10(&local_48,param_2);
    local_58 = CONCAT44(uStack_44,local_48);
    uStack_50 = CONCAT44(uStack_3c,uStack_40);
    sVar3 = wcslen(param_2);
    pwVar4 = param_2 + (int)sVar3;
LAB_146890932:
    if (param_4 == 1) {
      cVar2 = (**(code **)(*param_1 + 0x80))(param_1);
      if (cVar2 != '\0') {
        cVar2 = (**(code **)(*param_1 + 0x80))(param_1);
        if (cVar2 == '\0') {
          _Dst = (undefined8 *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
          if (_Dst != &local_58) {
            if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
              (**(code **)(*param_1 + 0x100))(param_1,_Dst,&local_58,(int)param_1[6]);
            }
            else {
              memcpy(_Dst,&local_58,
                     (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*param_1 + 0x98))(param_1,param_3,&local_58);
        }
        goto LAB_146890a10;
      }
      param_3 = (longlong *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
    }
    if (param_3 != &local_58) {
      if (*param_3 != 0) {
        FUN_1400020a8();
      }
      *param_3 = local_58;
      local_58 = 0;
      *(undefined4 *)(param_3 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)param_3 + 0xc) = uStack_50._4_4_;
      uStack_50 = 0;
    }
  }
  else {
    if (*param_2 == L'\"') {
      local_68 = 0;
      uStack_60 = 0;
      pwVar4 = (wchar_t *)FUN_1401e9420(param_2,&local_68,0);
      if (pwVar4 != (wchar_t *)0x0) {
        if ((pwVar4 <= param_2) || (pwVar4[-1] == L'\"')) {
          iVar1 = (int)uStack_60 + -1;
          if ((int)uStack_60 == 0) {
            iVar1 = 0;
          }
          FUN_142745fd8(&local_48,local_68,iVar1);
          local_58 = CONCAT44(uStack_44,local_48);
          uStack_50 = CONCAT44(uStack_3c,uStack_40);
          if (local_68 != 0) {
            FUN_1400020a8();
          }
          goto LAB_146890932;
        }
        FUN_140047918(param_7,L"Missing terminating \'\"\' in string property value: %s",param_2);
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      FUN_140047918(param_7,L"Missing opening \'\"\' in string property value: %s",param_2);
    }
    pwVar4 = (wchar_t *)0x0;
  }
LAB_146890a10:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return pwVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146890b08 FUN_146890b08 body=108 status=ok
// SIG undefined FUN_146890b08(void)

void FUN_146890b08(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 8) + -1;
  if (*(int *)(param_2 + 8) == 0) {
    iVar1 = 0;
  }
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}



// FUNCTION 146890b74 FUN_146890b74 body=62 status=ok
// SIG undefined FUN_146890b74(void)

void FUN_146890b74(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = param_2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  return;
}



// FUNCTION 146890bb2 FUN_146890bb2 body=7 status=ok
// SIG undefined FUN_146890bb2(void)

undefined8 * FUN_146890bb2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 146890bba FUN_146890bba body=65 status=ok
// SIG undefined FUN_146890bba(void)

longlong FUN_146890bba(longlong param_1)

{
  longlong lVar1;
  
  do {
    if (param_1 != 0) {
      lVar1 = FUN_1449e2fb2();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) {
        return param_1;
      }
    }
    param_1 = *(longlong *)(param_1 + 0x20);
    if (param_1 == 0) {
      return 0;
    }
  } while( true );
}



// FUNCTION 146890bfc FUN_146890bfc body=3 status=ok
// SIG undefined FUN_146890bfc(void)

undefined1 FUN_146890bfc(void)

{
  return 1;
}



// FUNCTION 146890c00 FUN_146890c00 body=3 status=ok
// SIG undefined FUN_146890c00(void)

undefined1 FUN_146890c00(void)

{
  return 1;
}



// FUNCTION 146890c04 FUN_146890c04 body=34 status=ok
// SIG undefined FUN_146890c04(void)

void FUN_146890c04(void)

{
  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/Class.cpp",0xee,L"UField::AddCppProperty");
  return;
}



// FUNCTION 146890c2c FUN_146890c2c body=172 status=ok
// SIG undefined FUN_146890c2c(void)

void FUN_146890c2c(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  switchD_143c3d4dc::caseD_2e();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1447f76d2(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  for (lVar5 = *(longlong *)(param_1 + 0x48); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x28)) {
    lVar3 = FUN_140010bca();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) {
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1447f76d2(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar5;
    }
  }
  for (plVar4 = *(longlong **)(param_1 + 0x50); plVar4 != (longlong *)0x0;
      plVar4 = (longlong *)plVar4[3]) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
  }
  return;
}



// FUNCTION 146890cd8 FUN_146890cd8 body=478 status=ok
// SIG undefined FUN_146890cd8(void)

ulonglong FUN_146890cd8(longlong param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_R13;
  undefined7 uVar5;
  ulonglong uVar4;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar8 = *(longlong **)(param_1 + 0x70);
  uVar5 = (undefined7)((ulonglong)unaff_R13 >> 8);
  local_80 = param_1;
  if (plVar8 == (longlong *)0x0) {
    uVar4 = CONCAT71(uVar5,1);
  }
  else {
    iVar6 = (int)param_2[1];
    uVar4 = CONCAT71(uVar5,1);
    do {
      *(uint *)(param_2 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
        FUN_146895f4a(param_2,iVar6);
      }
      lVar7 = *param_2;
      lVar3 = (longlong)iVar6;
      *(longlong **)(lVar7 + lVar3 * 0x18) = plVar8;
      *(undefined8 *)(lVar7 + 8 + lVar3 * 0x18) = 0;
      *(undefined4 *)(lVar7 + 0x10 + lVar3 * 0x18) = 0xffffffff;
      *(undefined2 *)(lVar7 + 0x14 + lVar3 * 0x18) = 0;
      *(longlong *)(*param_2 + 8 + (longlong)((int)param_2[1] + -1) * 0x18) = local_80;
      if ((int)plVar8[6] == 1) {
        local_50 = *param_3;
        local_58 = *(int *)((longlong)plVar8 + 0x44) + local_50;
        local_68 = *param_4;
        local_60 = param_4[1];
        uVar1 = (**(code **)(*plVar8 + 0xa8))(plVar8,param_2,&local_58,&local_68);
        if ((char)uVar1 == '\0') {
LAB_146890e86:
          uVar4 = 0;
        }
        else {
          uVar4 = (ulonglong)uVar1;
          if ((uVar1 & 0xff) != 2) goto LAB_146890dcd;
LAB_146890e81:
          uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
        }
        *(int *)(param_2 + 1) = (int)param_2[1] + -1;
        break;
      }
      if (0 < (int)plVar8[6]) {
        lVar7 = 0;
        do {
          lVar3 = *param_2;
          lVar2 = (longlong)((int)param_2[1] + -1);
          *(int *)(lVar3 + 0x10 + lVar2 * 0x18) = (int)lVar7;
          *(undefined1 *)(lVar3 + 0x14 + lVar2 * 0x18) = 1;
          local_50 = *param_3;
          local_58 = *(int *)((longlong)plVar8 + 0x34) * lVar7 +
                     *(int *)((longlong)plVar8 + 0x44) + local_50;
          local_78 = *param_4;
          local_70 = param_4[1];
          uVar1 = (**(code **)(*plVar8 + 0xa8))(plVar8,param_2,&local_58,&local_78);
          if ((char)uVar1 == '\0') goto LAB_146890e86;
          uVar4 = (ulonglong)uVar1;
          if ((uVar1 & 0xff) == 2) goto LAB_146890e81;
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)plVar8[6]);
      }
LAB_146890dcd:
      iVar6 = (int)param_2[1] + -1;
      *(int *)(param_2 + 1) = iVar6;
      plVar8 = (longlong *)plVar8[9];
    } while (plVar8 != (longlong *)0x0);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 146890eb8 FUN_146890eb8 body=106 status=ok
// SIG undefined FUN_146890eb8(void)

longlong FUN_146890eb8(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  
  if ((((param_3[1] != 0) && (lVar1 = FUN_1448f9ec4(*param_3), lVar1 != 0)) &&
      (*(int *)(lVar1 + 0x38) <= *(int *)(param_1 + 0x38))) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
      lVar1 + 0x30)) {
    lVar1 = 0;
    if (*(char *)((longlong)param_3 + 0x14) == '\x01') {
      lVar1 = (longlong)(int)param_3[2];
    }
    return lVar1 * *(int *)(*param_3 + 0x34) + param_2 + *(int *)(*param_3 + 0x44);
  }
  return 0;
}



// FUNCTION 146890f22 FUN_146890f22 body=187 status=ok
// SIG undefined FUN_146890f22(void)

void FUN_146890f22(longlong param_1,void *param_2,uint param_3)

{
  ulonglong uVar1;
  void *pvVar2;
  longlong *plVar3;
  uint uVar4;
  
  uVar4 = -*(int *)(param_1 + 0x5c) & (*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x5c)) - 1U;
  memset(param_2,0,(longlong)(int)uVar4);
  plVar3 = *(longlong **)(param_1 + 0x70);
  if (plVar3 != (longlong *)0x0) {
    do {
      if ((int)uVar4 <
          *(int *)((longlong)plVar3 + 0x34) * (int)plVar3[6] + *(int *)((longlong)plVar3 + 0x44)) {
        return;
      }
      uVar1 = (ulonglong)param_3;
      pvVar2 = param_2;
      if (0 < (int)param_3) {
        do {
          if ((*(byte *)((longlong)plVar3 + 0x39) & 2) == 0) {
            (**(code **)(*plVar3 + 0x160))(plVar3);
          }
          else {
            memset((void *)((longlong)*(int *)((longlong)plVar3 + 0x44) + (longlong)pvVar2),0,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
          pvVar2 = (void *)((longlong)pvVar2 + (longlong)(int)uVar4);
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
      }
      plVar3 = (longlong *)plVar3[9];
    } while (plVar3 != (longlong *)0x0);
  }
  return;
}



// FUNCTION 146890fde FUN_146890fde body=162 status=ok
// SIG undefined FUN_146890fde(void)

void FUN_146890fde(longlong param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x80);
  if (plVar1 != (longlong *)0x0) {
    uVar4 = -*(int *)(param_1 + 0x5c) & (*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x5c)) - 1U;
    do {
      if ((plVar1[7] & 0x1000000000U) != 0) {
        return;
      }
      if ((0 < (int)param_3) &&
         (lVar2 = param_2, uVar3 = (ulonglong)param_3,
         *(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6] + *(int *)((longlong)plVar1 + 0x44) <=
         (int)uVar4)) {
        do {
          if ((plVar1[7] & 0x1000000000U) == 0) {
            (**(code **)(*plVar1 + 0x148))(plVar1,*(int *)((longlong)plVar1 + 0x44) + lVar2);
          }
          uVar3 = uVar3 - 1;
          lVar2 = lVar2 + (int)uVar4;
        } while (uVar3 != 0);
      }
      plVar1 = (longlong *)plVar1[0xb];
    } while (plVar1 != (longlong *)0x0);
  }
  return;
}



// FUNCTION 146891080 FUN_146891080 body=250 status=ok
// SIG undefined FUN_146891080(void)

void FUN_146891080(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_4 == 0 || param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  if (param_1 == 0) {
    local_40 = 0;
  }
  else {
    local_40 = *(longlong *)(param_1 + 0x50);
  }
  local_38 = 0xffffffff;
  local_34 = 0x101;
  local_32 = 0;
  local_48 = param_1;
  FUN_144a2daf0(&local_48);
  if (local_40 != 0) {
    do {
      local_58 = param_5;
      FUN_146891196(local_40,param_2,param_3,param_4);
      local_40 = *(longlong *)(local_40 + 0x18);
      FUN_144a2daf0(&local_48);
    } while (local_40 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146891196 FUN_146891196 body=268 status=ok
// SIG undefined FUN_146891196(void)

void FUN_146891196(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)(*param_2 + 8);
  local_60 = param_4;
  cVar3 = FUN_144b00082(param_1,lVar2);
  if ((cVar3 != '\0') &&
     (uVar4 = (ulonglong)*(uint *)(param_1 + 6), 0 < (int)*(uint *)(param_1 + 6))) {
    lVar7 = 0;
    do {
      iVar1 = *(int *)((longlong)param_1 + 0x44);
      lVar5 = *(int *)((longlong)param_1 + 0x34) * lVar7;
      if (*(int *)(param_5 + 0x58) < (int)uVar4 * *(int *)((longlong)param_1 + 0x34) + iVar1) {
        lVar6 = 0;
      }
      else {
        lVar6 = local_60 + iVar1 + lVar5;
      }
      lVar5 = iVar1 + param_3 + lVar5;
      cVar3 = (**(code **)(*param_1 + 200))(param_1,lVar5,lVar6,*(undefined4 *)(lVar2 + 0x34));
      if (cVar3 == '\0') {
        local_58 = lVar2;
        local_50 = param_1;
        FUN_144a60fb8(&local_58);
        (**(code **)(*param_1 + 0xd0))(param_1,param_2,lVar5,lVar6);
        FUN_1449b192c(&local_58);
      }
      lVar7 = lVar7 + 1;
      uVar4 = (ulonglong)(int)param_1[6];
    } while (lVar7 < (longlong)uVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468912b0 FUN_1468912b0 body=98 status=ok
// SIG undefined FUN_1468912b0(void)

undefined8 * FUN_1468912b0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_3 != 0) {
    local_18 = *(undefined8 *)(param_3 + 0x18);
    FUN_1400021e4(&local_18,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146891318 FUN_146891318 body=182 status=ok
// SIG undefined FUN_146891318(void)

void FUN_146891318(longlong param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  switchD_143c3d4dc::caseD_41();
  if (param_1 == 0) {
    local_30 = 0;
  }
  else {
    local_30 = *(longlong *)(param_1 + 0x50);
  }
  local_28 = 0xffffffff;
  local_24 = 0x100;
  local_22 = 0;
  local_38 = param_1;
  FUN_144a2daf0(&local_38);
  if (local_30 != 0) {
    do {
      lVar1 = local_30;
      cVar2 = FUN_14689b13e(local_30);
      if (cVar2 == '\0') {
        *(uint *)(lVar1 + 0x28) = *(uint *)(lVar1 + 0x28) | param_2;
      }
      local_30 = *(longlong *)(local_30 + 0x18);
      FUN_144a2daf0(&local_38);
    } while (local_30 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468913e4 FUN_1468913e4 body=148 status=ok
// SIG undefined FUN_1468913e4(void)

byte FUN_1468913e4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  byte bVar2;
  ulonglong uVar3;
  byte bVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [14];
  char local_32;
  ulonglong local_30;
  
  uVar3 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0xb8);
  local_30 = uVar3;
  if (plVar1 != (longlong *)0x0) {
    uVar3 = (**(code **)(*plVar1 + 8))(plVar1,local_40);
    if (local_32 < '\0') {
      local_48 = param_5;
      bVar2 = (**(code **)(*plVar1 + 0x80))(plVar1,param_2,param_3,param_4);
      bVar4 = 1;
      goto LAB_14689142d;
    }
  }
  bVar2 = (byte)uVar3;
  bVar4 = 0;
LAB_14689142d:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar2 & bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689147a FUN_14689147a body=159 status=ok
// SIG undefined FUN_14689147a(void)

char FUN_14689147a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_4;
  local_30 = param_4[1];
  cVar1 = FUN_146890cd8();
  if (cVar1 != '\0') {
    if (cVar1 == '\x02') {
      cVar1 = '\x01';
    }
    else if ((*(byte *)(param_1 + 0xb3) & 4) != 0) {
      local_48 = *param_4;
      local_40 = param_4[1];
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 200))
                        (*(longlong **)(param_1 + 0xb8),param_2,param_3);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return cVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689151a FUN_14689151a body=80 status=ok
// SIG undefined FUN_14689151a(void)

longlong FUN_14689151a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_146890eb8();
  if (lVar1 == 0) {
    if ((*(byte *)(param_1 + 0xb3) & 4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000146891567. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar1 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0xd0))
                        (*(longlong **)(param_1 + 0xb8),param_2,param_3);
      return lVar1;
    }
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 146891576 FUN_146891576 body=88 status=ok
// SIG undefined FUN_146891576(void)

undefined8 FUN_146891576(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  (**(code **)(*param_2 + 0x138))(param_2,param_1);
  (**(code **)(*param_2 + 0x130))(param_2,param_1 + 8);
  plVar1 = (longlong *)(**(code **)(*param_2 + 0x128))(param_2,param_1 + 0x30);
  (**(code **)(*plVar1 + 0x120))(plVar1,param_1 + 0x50);
  return 1;
}



// FUNCTION 1468915d4 FUN_1468915d4 body=71 status=ok
// SIG undefined FUN_1468915d4(void)

undefined8 FUN_1468915d4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = param_1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*param_1 + 1000))(param_1);
    lVar2 = param_1[0x22];
    if (lVar2 == 0) {
      return 0;
    }
  }
  uVar1 = FUN_141717630(lVar2,param_2);
  return uVar1;
}



// FUNCTION 14689161c FUN_14689161c body=39 status=ok
// SIG undefined FUN_14689161c(void)

void FUN_14689161c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x58,0x10);
  FUN_146891644(uVar1,param_1);
  return;
}



// FUNCTION 146891644 FUN_146891644 body=210 status=ok
// SIG undefined FUN_146891644(void)

undefined8 * FUN_146891644(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_149e6e610;
  param_1[1] = param_2;
  param_1[2] = *(undefined8 *)(param_2 + 0xe0);
  if (*(longlong *)(param_2 + 0x110) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0x110);
    if (*(int *)(param_2 + 0x58) == 0) {
      lVar2 = 0;
    }
  }
  param_1[3] = lVar2;
  *(uint *)(param_1 + 4) = *(uint *)(param_2 + 0xd4) & 1;
  param_1[5] = *(undefined8 *)(param_2 + 0xd8);
  param_1[6] = *(undefined8 *)(param_2 + 0xb0);
  param_1[7] = *(undefined8 *)(param_2 + 0xb8);
  param_1[8] = *(undefined8 *)(param_2 + 0xc0);
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 0x1f8);
  _Src = *(void **)(param_2 + 0x1f0);
  *(int *)(param_1 + 10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_1468965ec(param_1 + 9,iVar1,0);
    memcpy((void *)param_1[9],_Src,(longlong)iVar1 << 4);
  }
  return param_1;
}



// FUNCTION 146891716 FUN_146891716 body=184 status=ok
// SIG undefined FUN_146891716(void)

undefined4 FUN_146891716(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = switchD_143c3d4dc::caseD_34();
  if (((char)uVar2 != '\0') && (plVar1 = *(longlong **)(param_1 + 0x110), plVar1 != (longlong *)0x0)
     ) {
    FUN_140aa725c(param_1,local_50);
    FUN_1400021e4(local_50,&local_48);
    puVar3 = local_48;
    if (local_40 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    (**(code **)(*plVar1 + 0x170))(plVar1,puVar3,param_3,param_4);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1468917d0 FUN_1468917d0 body=122 status=ok
// SIG undefined FUN_1468917d0(void)

void FUN_1468917d0(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_146891318();
  lVar2 = *(longlong *)(param_1 + 0x110);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0) {
      FUN_144757f48(lVar2,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014689183f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x110) + 0x1d8))
                (*(longlong **)(param_1 + 0x110),param_2);
      return;
    }
  }
  return;
}



// FUNCTION 14689184a FUN_14689184a body=71 status=ok
// SIG undefined FUN_14689184a(void)

undefined8 FUN_14689184a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_1 + 0x18);
  FUN_1400021e4();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146891892 FUN_146891892 body=71 status=ok
// SIG undefined FUN_146891892(void)

undefined8 FUN_146891892(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_1 + 0x18);
  FUN_1400021e4();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468918e0 FUN_1468918e0 body=62 status=ok
// SIG undefined FUN_1468918e0(void)

void FUN_1468918e0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  switchD_143c3d4dc::caseD_3d();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146891920 FUN_146891920 body=348 status=ok
// SIG undefined FUN_146891920(void)

void FUN_146891920(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 auStack_788 [32];
  undefined1 local_768;
  undefined4 local_760;
  undefined1 local_750 [1792];
  undefined1 *local_50;
  uint local_48;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_788;
  FUN_146890c2c();
  lVar7 = *(longlong *)(param_1 + 0x120);
  if (lVar7 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1447f76d2(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar7;
    uVar3 = FUN_140005490(param_1,1);
    lVar7 = *(longlong *)(param_1 + 0x120);
    plVar2 = *(longlong **)(lVar7 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x58))(plVar2,uVar3,param_2);
      lVar7 = *(longlong *)(param_1 + 0x120);
    }
    uVar4 = FUN_1446dcc8c();
    local_760 = 2;
    local_768 = 1;
    FUN_140021b28(local_750,uVar4,lVar7,uVar3);
    while (0 < (int)local_48) {
      puVar6 = local_50;
      if (local_50 == (undefined1 *)0x0) {
        puVar6 = local_750;
      }
      puVar5 = *(undefined1 **)(puVar6 + (ulonglong)local_48 * 0xe0 + -0x18);
      if (*(undefined1 **)(puVar6 + (ulonglong)local_48 * 0xe0 + -0x18) == (undefined1 *)0x0) {
        puVar5 = puVar6 + (ulonglong)local_48 * 0xe0 + -0xd8;
      }
      plVar2 = *(longlong **)
                (*(longlong *)
                  (*(longlong *)
                    (puVar5 + (longlong)*(int *)(puVar6 + (ulonglong)local_48 * 0xe0 + -8) * 0x18) +
                  0x70) + 0xb8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x58))
                  (plVar2,*(undefined8 *)
                           (puVar5 + (longlong)*(int *)(puVar6 + (ulonglong)local_48 * 0xe0 + -8) *
                                     0x18 + 8),param_2);
      }
      FUN_140caedf2(local_750);
    }
    FUN_140021a7a(local_750);
  }
  if ((local_28 ^ (ulonglong)auStack_788) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146891a9c FUN_146891a9c body=19 status=ok
// SIG undefined FUN_146891a9c(void)

undefined8 FUN_146891a9c(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    uVar1 = FUN_140005490(*(longlong *)(param_1 + 0x40),1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 146891ab0 FUN_146891ab0 body=500 status=ok
// SIG undefined FUN_146891ab0(void)

void FUN_146891ab0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (*(int *)((longlong)param_1 + 0xfc) != 0) {
    FUN_140710002(param_1 + 0x1e,0);
  }
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (*(int *)((longlong)param_1 + 0x10c) != 0) {
    FUN_1403ab89a(param_1 + 0x20,0);
  }
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (*(int *)((longlong)param_1 + 0x1e4) != 0) {
    FUN_14073ebd8(param_1 + 0x3b,0);
  }
  *(undefined4 *)(param_1 + 0x3f) = 0;
  if (*(int *)((longlong)param_1 + 0x1fc) != 0) {
    FUN_1468988f6(param_1 + 0x3e);
  }
  (**(code **)(*param_1 + 0x310))(param_1,0);
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (*(int *)((longlong)param_1 + 0x6c) != 0) {
    FUN_144893a1c(param_1 + 0xc,0);
  }
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  if (*(int *)((longlong)param_1 + 0x9c) != 0) {
    FUN_140c6998c(param_1 + 0x12,0);
  }
  plVar1 = (longlong *)param_1[0x14];
  if (plVar1 != (longlong *)0x0) {
    FUN_1403a7699(*plVar1,(int)plVar1[1]);
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
    param_1[0x14] = 0;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x2f));
  FUN_146898926(param_1 + 0x25);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x2f));
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x3a));
  FUN_1407953a4(param_1 + 0x30);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x3a));
  param_1[0xe] = 0;
  plVar1 = (longlong *)param_1[10];
  while (plVar1 != (longlong *)0x0) {
    plVar2 = (longlong *)plVar1[3];
    (**(code **)(*plVar1 + 8))(plVar1,1);
    plVar1 = plVar2;
  }
  param_1[10] = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  param_1[0x15] = 0;
  return;
}



// FUNCTION 146891ca8 FUN_146891ca8 body=157 status=ok
// SIG undefined FUN_146891ca8(void)

undefined8 FUN_146891ca8(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = FUN_1446f8646();
  uVar4 = *(ulonglong *)(param_2 + 0x10);
  if (((uVar4 & 1) != 0) && ((uVar4 & 0xfffffffffffffffe) != 0)) {
    lVar2 = *(longlong *)((uVar4 & 0xfffffffffffffffe) + 0x10);
    if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
      if (uVar4 < 2) {
        return 0;
      }
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return 0;
      }
      lVar3 = FUN_144a797b2();
      if (((*(ulonglong *)(param_2 + 0x10) & 1) != 0) &&
         (uVar4 = *(ulonglong *)(param_2 + 0x10) & 0xfffffffffffffffe, uVar4 != 0)) {
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(uVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          iVar1 = *(int *)(uVar4 + 0x38);
          if (iVar1 <= *(int *)(param_1 + 0x38)) {
            return CONCAT71((int7)(int3)((uint)iVar1 >> 8),
                            *(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 8) ==
                            uVar4 + 0x30);
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 146891d46 FUN_146891d46 body=114 status=ok
// SIG undefined FUN_146891d46(void)

longlong FUN_146891d46(longlong param_1,undefined8 *param_2)

{
  char *_Str;
  longlong lVar1;
  size_t sVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  _Str = (char *)*param_2;
  if (_Str == (char *)0x0) {
    iVar5 = 0;
  }
  else {
    sVar2 = strlen(_Str);
    iVar5 = (int)sVar2;
  }
  lVar4 = (longlong)iVar5;
  if (*(ulonglong *)(param_1 + 0x10) <= (ulonglong)(lVar4 * 2 + *(longlong *)(param_1 + 8))) {
    FUN_140213274(param_1,lVar4);
  }
  if (iVar5 != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    if (0 < iVar5) {
      lVar3 = 0;
      do {
        *(short *)(lVar1 + lVar3 * 2) = (short)_Str[lVar3];
        lVar3 = lVar3 + 1;
      } while (lVar4 != lVar3);
    }
    *(longlong *)(param_1 + 8) = lVar1 + lVar4 * 2;
  }
  return param_1;
}



// FUNCTION 146891db8 FUN_146891db8 body=215 status=ok
// SIG undefined FUN_146891db8(void)

undefined8 *
FUN_146891db8(undefined8 *param_1,undefined8 param_2,longlong *param_3,char param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  uint local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_3[1] < 2) {
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  lVar2 = *param_3;
  uVar3 = (int)param_3[1] - 1;
  lVar4 = 0;
  do {
    if (*(short *)(lVar2 + lVar4) == 0x2f) {
      *param_1 = 0;
      param_1[1] = 0;
      local_20 = lVar2;
      local_18 = uVar3;
      FUN_1468fe3e4(param_1);
      goto LAB_146891e29;
    }
    lVar4 = lVar4 + 2;
  } while ((ulonglong)uVar3 * 2 != lVar4);
  *param_1 = 0;
  param_1[1] = 0;
  local_28 = param_5;
  lVar2 = FUN_140277cc4(param_2,lVar2,((byte)(param_4 - 1U) < 2) * '\b' + '\x04');
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + 0x18);
    *param_1 = *(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0x18);
    param_1[1] = uVar1;
  }
LAB_146891e29:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146891e96 FUN_146891e96 body=87 status=ok
// SIG undefined FUN_146891e96(void)

undefined8 FUN_146891e96(longlong *param_1,longlong *param_2,char param_3)

{
  undefined8 uVar1;
  
  if (param_1 == param_2) {
    uVar1 = 1;
  }
  else {
    if (((param_2 != (longlong *)0x0 && param_1 != (longlong *)0x0) &&
        (((param_3 == '\0' || (param_1[4] == param_2[4])) &&
         (*(int *)((longlong)param_1 + 0x34) * (int)param_1[6] ==
          *(int *)((longlong)param_2 + 0x34) * (int)param_2[6])))) &&
       (*(int *)((longlong)param_1 + 0x44) == *(int *)((longlong)param_2 + 0x44))) {
                    /* WARNING: Could not recover jumptable at 0x000146891ee3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*param_1 + 0x1b0))();
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 146891eee FUN_146891eee body=257 status=ok
// SIG undefined FUN_146891eee(void)

undefined8 FUN_146891eee(longlong param_1,longlong param_2,undefined4 param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  while( true ) {
    if (param_1 == param_2) {
      return 1;
    }
    if (param_1 == 0) {
      return 0;
    }
    if (param_2 == 0) {
      return 0;
    }
    if ((*(int *)(param_1 + 0x58) != *(int *)(param_2 + 0x58)) ||
       (*(int *)(param_1 + 0x5c) != *(int *)(param_2 + 0x5c))) break;
    lVar2 = *(longlong *)(param_1 + 0x70);
    lVar3 = *(longlong *)(param_2 + 0x70);
    if (lVar2 != lVar3) {
      do {
        bVar1 = FUN_146891e96(lVar2,lVar3,param_3);
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          lVar2 = *(longlong *)(lVar2 + 0x48);
        }
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = *(longlong *)(lVar3 + 0x48);
        }
      } while ((bVar1 & lVar2 != lVar3) != 0);
      if (bVar1 == 0) {
        return 0;
      }
    }
    lVar2 = FUN_144a797b2();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) != lVar2 + 0x30)) {
      param_1 = 0;
    }
    lVar2 = FUN_144a797b2();
    if (*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) {
      return 1;
    }
    if (param_1 == 0) {
      return 1;
    }
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) != lVar2 + 0x30) {
      return 1;
    }
    param_2 = *(longlong *)(param_2 + 0x120);
    param_1 = *(longlong *)(param_1 + 0x120);
  }
  return 0;
}



// FUNCTION 146891ff0 FUN_146891ff0 body=164 status=ok
// SIG undefined FUN_146891ff0(void)

undefined8 FUN_146891ff0(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c949198) {
    FUN_144b3d300(&DAT_14c949198);
    if (DAT_14c949198 == -1) {
      FUN_1446f470e(&local_18,L"FloatRange",1);
      DAT_14c949190 = FUN_141473ad5(local_18);
      _Init_thread_footer(&DAT_14c949198);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return DAT_14c949190;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146892096 FUN_146892096 body=164 status=ok
// SIG undefined FUN_146892096(void)

undefined8 FUN_146892096(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9491d8) {
    FUN_144b3d300(&DAT_14c9491d8);
    if (DAT_14c9491d8 == -1) {
      FUN_1446f470e(&local_18,L"FrameRate",1);
      DAT_14c9491d0 = FUN_141473ad5(local_18);
      _Init_thread_footer(&DAT_14c9491d8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return DAT_14c9491d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689213c FUN_14689213c body=164 status=ok
// SIG undefined FUN_14689213c(void)

undefined8 FUN_14689213c(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9491e8) {
    FUN_144b3d300(&DAT_14c9491e8);
    if (DAT_14c9491e8 == -1) {
      FUN_1446f470e(&local_18,L"AssetBundleData",1);
      DAT_14c9491e0 = FUN_141473ad5(local_18);
      _Init_thread_footer(&DAT_14c9491e8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return DAT_14c9491e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468921e2 FUN_1468921e2 body=130 status=ok
// SIG undefined FUN_1468921e2(void)

undefined8 FUN_1468921e2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c949208) {
    FUN_144b3d300(&DAT_14c949208);
    if (DAT_14c949208 == -1) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      DAT_14c949200 = FUN_141473ad5(DAT_14c892ca8);
      _Init_thread_footer(&DAT_14c949208);
    }
  }
  return DAT_14c949200;
}



// FUNCTION 146892264 FUN_146892264 body=130 status=ok
// SIG undefined FUN_146892264(void)

undefined8 FUN_146892264(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c949228) {
    FUN_144b3d300(&DAT_14c949228);
    if (DAT_14c949228 == -1) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      DAT_14c949220 = FUN_141473ad5(DAT_14c892c60);
      _Init_thread_footer(&DAT_14c949228);
    }
  }
  return DAT_14c949220;
}



// FUNCTION 1468922e6 FUN_1468922e6 body=130 status=ok
// SIG undefined FUN_1468922e6(void)

undefined8 FUN_1468922e6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c949258) {
    FUN_144b3d300(&DAT_14c949258);
    if (DAT_14c949258 == -1) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      DAT_14c949250 = FUN_141473ad5(DAT_14c892c98);
      _Init_thread_footer(&DAT_14c949258);
    }
  }
  return DAT_14c949250;
}



// FUNCTION 146892368 FUN_146892368 body=130 status=ok
// SIG undefined FUN_146892368(void)

undefined8 FUN_146892368(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c949268) {
    FUN_144b3d300(&DAT_14c949268);
    if (DAT_14c949268 == -1) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      DAT_14c949260 = FUN_141473ad5(DAT_14c892c9c);
      _Init_thread_footer(&DAT_14c949268);
    }
  }
  return DAT_14c949260;
}



// FUNCTION 1468923ea FUN_1468923ea body=130 status=ok
// SIG undefined FUN_1468923ea(void)

undefined8 FUN_1468923ea(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c949288) {
    FUN_144b3d300(&DAT_14c949288);
    if (DAT_14c949288 == -1) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      DAT_14c949280 = FUN_141473ad5(DAT_14c892c68);
      _Init_thread_footer(&DAT_14c949288);
    }
  }
  return DAT_14c949280;
}



// FUNCTION 14689246c FUN_14689246c body=130 status=ok
// SIG undefined FUN_14689246c(void)

undefined8 FUN_14689246c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c949298) {
    FUN_144b3d300(&DAT_14c949298);
    if (DAT_14c949298 == -1) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      DAT_14c949290 = FUN_141473ad5(DAT_14c892c6c);
      _Init_thread_footer(&DAT_14c949298);
    }
  }
  return DAT_14c949290;
}



// FUNCTION 1468924ee FUN_1468924ee body=130 status=ok
// SIG undefined FUN_1468924ee(void)

undefined8 FUN_1468924ee(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9492b8) {
    FUN_144b3d300(&DAT_14c9492b8);
    if (DAT_14c9492b8 == -1) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      DAT_14c9492b0 = FUN_141473ad5(DAT_14c892c78);
      _Init_thread_footer(&DAT_14c9492b8);
    }
  }
  return DAT_14c9492b0;
}



// FUNCTION 146892570 FUN_146892570 body=130 status=ok
// SIG undefined FUN_146892570(void)

undefined8 FUN_146892570(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9492c8) {
    FUN_144b3d300(&DAT_14c9492c8);
    if (DAT_14c9492c8 == -1) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      DAT_14c9492c0 = FUN_141473ad5(DAT_14c892c7c);
      _Init_thread_footer(&DAT_14c9492c8);
    }
  }
  return DAT_14c9492c0;
}



// FUNCTION 1468925f2 FUN_1468925f2 body=130 status=ok
// SIG undefined FUN_1468925f2(void)

undefined8 FUN_1468925f2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9492e8) {
    FUN_144b3d300(&DAT_14c9492e8);
    if (DAT_14c9492e8 == -1) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      DAT_14c9492e0 = FUN_141473ad5(DAT_14c892ca0);
      _Init_thread_footer(&DAT_14c9492e8);
    }
  }
  return DAT_14c9492e0;
}



// FUNCTION 146892674 FUN_146892674 body=130 status=ok
// SIG undefined FUN_146892674(void)

undefined8 FUN_146892674(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9492f8) {
    FUN_144b3d300(&DAT_14c9492f8);
    if (DAT_14c9492f8 == -1) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      DAT_14c9492f0 = FUN_141473ad5(DAT_14c892ca4);
      _Init_thread_footer(&DAT_14c9492f8);
    }
  }
  return DAT_14c9492f0;
}



// FUNCTION 1468926f6 FUN_1468926f6 body=130 status=ok
// SIG undefined FUN_1468926f6(void)

undefined8 FUN_1468926f6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c949318) {
    FUN_144b3d300(&DAT_14c949318);
    if (DAT_14c949318 == -1) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      DAT_14c949310 = FUN_141473ad5(DAT_14c892c80);
      _Init_thread_footer(&DAT_14c949318);
    }
  }
  return DAT_14c949310;
}



// FUNCTION 146892778 FUN_146892778 body=130 status=ok
// SIG undefined FUN_146892778(void)

undefined8 FUN_146892778(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c949328) {
    FUN_144b3d300(&DAT_14c949328);
    if (DAT_14c949328 == -1) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      DAT_14c949320 = FUN_141473ad5(DAT_14c892c84);
      _Init_thread_footer(&DAT_14c949328);
    }
  }
  return DAT_14c949320;
}



// FUNCTION 1468927fa FUN_1468927fa body=130 status=ok
// SIG undefined FUN_1468927fa(void)

undefined8 FUN_1468927fa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c949338) {
    FUN_144b3d300(&DAT_14c949338);
    if (DAT_14c949338 == -1) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      DAT_14c949330 = FUN_141473ad5(DAT_14c892c40);
      _Init_thread_footer(&DAT_14c949338);
    }
  }
  return DAT_14c949330;
}



// FUNCTION 14689287c FUN_14689287c body=130 status=ok
// SIG undefined FUN_14689287c(void)

undefined8 FUN_14689287c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c949348) {
    FUN_144b3d300(&DAT_14c949348);
    if (DAT_14c949348 == -1) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      DAT_14c949340 = FUN_141473ad5(DAT_14c892c70);
      _Init_thread_footer(&DAT_14c949348);
    }
  }
  return DAT_14c949340;
}



// FUNCTION 1468928fe FUN_1468928fe body=130 status=ok
// SIG undefined FUN_1468928fe(void)

undefined8 FUN_1468928fe(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c949358) {
    FUN_144b3d300(&DAT_14c949358);
    if (DAT_14c949358 == -1) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      DAT_14c949350 = FUN_141473ad5(DAT_14c892c74);
      _Init_thread_footer(&DAT_14c949358);
    }
  }
  return DAT_14c949350;
}



// FUNCTION 146892980 FUN_146892980 body=130 status=ok
// SIG undefined FUN_146892980(void)

undefined8 FUN_146892980(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c949378) {
    FUN_144b3d300(&DAT_14c949378);
    if (DAT_14c949378 == -1) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      DAT_14c949370 = FUN_141473ad5(DAT_14c892cb4);
      _Init_thread_footer(&DAT_14c949378);
    }
  }
  return DAT_14c949370;
}



// FUNCTION 146892a0c FUN_146892a0c body=68 status=ok
// SIG undefined FUN_146892a0c(void)

void FUN_146892a0c(longlong param_1,longlong *param_2)

{
  FUN_1403a5060();
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0xe0);
                    /* WARNING: Could not recover jumptable at 0x000146892a4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0xe8);
  return;
}



// FUNCTION 146892a5c FUN_146892a5c body=29 status=ok
// SIG undefined FUN_146892a5c(void)

undefined8 FUN_146892a5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


