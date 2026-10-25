// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147e056ec FUN_147e056ec body=34 status=ok
// SIG undefined FUN_147e056ec(void)

undefined8 FUN_147e056ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 147e0570e FUN_147e0570e body=34 status=ok
// SIG undefined FUN_147e0570e(void)

undefined8 FUN_147e0570e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147e0574c FUN_147e0574c body=101 status=ok
// SIG undefined FUN_147e0574c(void)

void FUN_147e0574c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab3c4c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147e057b2 FUN_147e057b2 body=101 status=ok
// SIG undefined FUN_147e057b2(void)

void FUN_147e057b2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab3c4c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147e05818 FUN_147e05818 body=134 status=ok
// SIG undefined FUN_147e05818(void)

void FUN_147e05818(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab3c4c0;
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
                    /* WARNING: Could not recover jumptable at 0x000147e0588f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e058b0 FUN_147e058b0 body=25 status=ok
// SIG undefined FUN_147e058b0(void)

undefined8 FUN_147e058b0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147e058c9 FUN_147e058c9 body=73 status=ok
// SIG undefined FUN_147e058c9(void)

void FUN_147e058c9(longlong param_1,int param_2)

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



// FUNCTION 147e05912 FUN_147e05912 body=95 status=ok
// SIG undefined FUN_147e05912(void)

void FUN_147e05912(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 147e05972 FUN_147e05972 body=132 status=ok
// SIG undefined FUN_147e05972(void)

void FUN_147e05972(longlong param_1,int param_2)

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



// FUNCTION 147e059f8 FUN_147e059f8 body=115 status=ok
// SIG undefined FUN_147e059f8(void)

int FUN_147e059f8(longlong *param_1,uint param_2,int *param_3)

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



// FUNCTION 147e05a6c FUN_147e05a6c body=175 status=ok
// SIG undefined FUN_147e05a6c(void)

void FUN_147e05a6c(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_147e05af5;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_147e05af5:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 147e05b1c FUN_147e05b1c body=175 status=ok
// SIG undefined FUN_147e05b1c(void)

void FUN_147e05b1c(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_147e05ba5;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_147e05ba5:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 147e05bcc FUN_147e05bcc body=164 status=ok
// SIG undefined FUN_147e05bcc(void)

void FUN_147e05bcc(longlong *param_1,undefined8 param_2)

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
        goto LAB_147e05c4c;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_147e05c4c:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 147e05c70 FUN_147e05c70 body=273 status=ok
// SIG undefined FUN_147e05c70(void)

int FUN_147e05c70(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  int iVar13;
  
  iVar6 = (int)param_1[1];
  lVar7 = (longlong)iVar6;
  if (lVar7 == 0) {
    iVar6 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar13 = 0;
    bVar12 = *plVar1 == *(longlong *)*param_2;
    iVar3 = 0;
    do {
      lVar10 = (longlong)iVar3;
      iVar8 = iVar3 + 1;
      if (iVar3 + 1 < iVar6) {
        iVar8 = iVar6;
      }
      plVar9 = plVar1 + lVar10 * 2 + 2;
      iVar4 = iVar3;
      lVar11 = lVar10;
      do {
        lVar11 = lVar11 + 1;
        iVar5 = iVar8;
        if (lVar7 <= lVar11) break;
        lVar2 = *plVar9;
        iVar4 = iVar4 + 1;
        plVar9 = plVar9 + 2;
        iVar5 = iVar4;
      } while (bVar12 == (lVar2 == *(longlong *)*param_2));
      iVar8 = iVar5 - iVar3;
      if (bVar12 == false) {
        if (iVar13 != iVar3) {
          memmove(plVar1 + (longlong)iVar13 * 2,plVar1 + lVar10 * 2,(longlong)iVar8 << 4);
        }
        iVar13 = iVar13 + iVar8;
      }
      else {
        FUN_147e04ffb(plVar1 + lVar10 * 2,iVar8);
      }
      bVar12 = (bool)(bVar12 ^ 1);
      iVar3 = iVar5;
    } while (lVar11 < lVar7);
    *(int *)(param_1 + 1) = iVar13;
    iVar6 = iVar6 - iVar13;
  }
  return iVar6;
}



// FUNCTION 147e05d82 FUN_147e05d82 body=68 status=ok
// SIG undefined FUN_147e05d82(void)

void FUN_147e05d82(longlong param_1,uint param_2)

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
  FUN_147e05dc6(param_1);
  return;
}



// FUNCTION 147e05dc6 FUN_147e05dc6 body=443 status=ok
// SIG undefined FUN_147e05dc6(void)

void FUN_147e05dc6(longlong *param_1)

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



// FUNCTION 147e05f82 FUN_147e05f82 body=87 status=ok
// SIG undefined FUN_147e05f82(void)

void FUN_147e05f82(longlong *param_1,int param_2)

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
  FUN_147e05fda();
  return;
}



// FUNCTION 147e05fda FUN_147e05fda body=78 status=ok
// SIG undefined FUN_147e05fda(void)

void FUN_147e05fda(longlong *param_1,int param_2)

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
  FUN_147e06028(param_1,param_2);
  return;
}



// FUNCTION 147e06028 FUN_147e06028 body=114 status=ok
// SIG undefined FUN_147e06028(void)

void FUN_147e06028(longlong *param_1,int param_2)

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



// FUNCTION 147e0609a FUN_147e0609a body=383 status=ok
// SIG undefined FUN_147e0609a(void)

void FUN_147e0609a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  longlong in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(char *)(param_1 + 0x48) == '\x01') &&
     (plVar3 = *(longlong **)(param_1 + 0x40), plVar3 != (longlong *)0x0)) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_147e061d9;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar8 = iVar7 == iVar6;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar8);
    plVar4 = *(longlong **)(param_1 + 0x38);
    if (plVar4 != (longlong *)0x0) {
      plStack_40 = *(longlong **)(param_1 + 0x20);
      if (plStack_40 == (longlong *)0x0) {
LAB_147e06143:
        local_48 = 0;
        plStack_40 = (longlong *)0x0;
        bVar8 = true;
      }
      else {
        iVar7 = (int)plStack_40[1];
        do {
          if (iVar7 == 0) goto LAB_147e06143;
          LOCK();
          iVar6 = (int)plStack_40[1];
          bVar8 = iVar7 == iVar6;
          if (bVar8) {
            *(int *)(plStack_40 + 1) = iVar7 + 1;
            iVar6 = iVar7;
          }
          iVar7 = iVar6;
          UNLOCK();
        } while (!bVar8);
        local_48 = *(longlong *)(param_1 + 0x18) + 8;
        if (*(longlong *)(param_1 + 0x18) == 0) {
          local_48 = 0;
        }
        LOCK();
        *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
        UNLOCK();
        bVar8 = false;
      }
      plVar5 = plStack_40;
      local_50 = &local_48;
      local_58 = in_stack_00000038;
      local_60 = in_stack_00000030;
      local_68 = in_stack_00000028;
      (**(code **)(*plVar4 + 0x20))(plVar4);
      plVar4 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_40 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_40)(plStack_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      if (!bVar8) {
        LOCK();
        plVar4 = plVar5 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
LAB_147e061d9:
  *(undefined4 *)(in_stack_00000028 + 0x48) = 0;
  if (*(longlong *)(in_stack_00000028 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(in_stack_00000028);
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e0621a FUN_147e0621a body=135 status=ok
// SIG undefined FUN_147e0621a(void)

longlong FUN_147e0621a(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_147e059f8();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x28 != 0) goto LAB_147e06254;
  }
  local_30 = param_3;
  FUN_147e062a2(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_147e06254:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x28 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e062a2 FUN_147e062a2 body=277 status=ok
// SIG undefined FUN_147e062a2(void)

undefined4 * FUN_147e062a2(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147e063b8(param_1,local_48);
  uVar1 = ((undefined8 *)*param_4)[1];
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = uVar1;
  local_40[2] = 0;
  local_40[3] = 0;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  cVar2 = FUN_147e0649e(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x24) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_147e05dc6(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e063b8 FUN_147e063b8 body=230 status=ok
// SIG undefined FUN_147e063b8(void)

int * FUN_147e063b8(longlong *param_1,int *param_2)

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



// FUNCTION 147e0649e FUN_147e0649e body=145 status=ok
// SIG undefined FUN_147e0649e(void)

undefined8 FUN_147e0649e(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

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
     (iVar12 = FUN_147e059f8(), iVar12 != -1)) {
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
    FUN_147e06028(param_1,*param_4);
    *param_4 = iVar12;
    return 1;
  }
  return 0;
}



// FUNCTION 147e06530 FUN_147e06530 body=25 status=ok
// SIG undefined FUN_147e06530(void)

void FUN_147e06530(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e06545. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x50))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 147e0654a FUN_147e0654a body=34 status=ok
// SIG undefined FUN_147e0654a(void)

undefined8 FUN_147e0654a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 147e0656c FUN_147e0656c body=230 status=ok
// SIG undefined FUN_147e0656c(void)

undefined8 * FUN_147e0656c(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e06654 FUN_147e06654 body=313 status=ok
// SIG undefined FUN_147e06654(void)

longlong * FUN_147e06654(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_147e06750:
    *puVar5 = &PTR_LAB_14ab3c5c0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14ab3c550;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_147e06750;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14ab3c5c0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14ab3c550;
    puVar5[3] = uVar10;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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



// FUNCTION 147e0678e FUN_147e0678e body=69 status=ok
// SIG undefined FUN_147e0678e(void)

undefined8 * FUN_147e0678e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ab3c550;
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
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 147e067d8 FUN_147e067d8 body=81 status=ok
// SIG undefined FUN_147e067d8(void)

undefined8 FUN_147e067d8(longlong param_1)

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



// FUNCTION 147e06830 FUN_147e06830 body=89 status=ok
// SIG undefined FUN_147e06830(void)

bool FUN_147e06830(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_147e0687b;
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
LAB_147e0687b:
  return lVar6 == param_2;
}



// FUNCTION 147e068b2 FUN_147e068b2 body=118 status=ok
// SIG undefined FUN_147e068b2(void)

void FUN_147e068b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab3c5c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab3c550;
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



// FUNCTION 147e06928 FUN_147e06928 body=118 status=ok
// SIG undefined FUN_147e06928(void)

void FUN_147e06928(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab3c5c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab3c550;
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



// FUNCTION 147e0699e FUN_147e0699e body=156 status=ok
// SIG undefined FUN_147e0699e(void)

void FUN_147e0699e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ab3c5c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab3c550;
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
                    /* WARNING: Could not recover jumptable at 0x000147e06a2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e06a3a FUN_147e06a3a body=104 status=ok
// SIG undefined FUN_147e06a3a(void)

void FUN_147e06a3a(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000147e06a87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147e06a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 147e06aa2 FUN_147e06aa2 body=101 status=ok
// SIG undefined FUN_147e06aa2(void)

ulonglong FUN_147e06aa2(longlong param_1)

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
LAB_147e06afc:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_147e06afc;
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



// FUNCTION 147e06b0a FUN_147e06b0a body=166 status=ok
// SIG undefined FUN_147e06b0a(void)

void FUN_147e06b0a(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_146415940();
  if (lVar3 != 0) {
    FUN_14706e08c(*param_2,&local_40);
    FUN_1414d7078(lVar3,&local_50);
    if ((local_40 == local_50) && (local_38 == local_48)) {
      pcVar2 = *(code **)(param_1 + 0x10);
      iVar1 = *(int *)(param_1 + 0x18);
      lVar3 = *(longlong *)(param_1 + 8);
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      (*pcVar2)(iVar1 + lVar3,uVar4,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e06bb2 FUN_147e06bb2 body=166 status=ok
// SIG undefined FUN_147e06bb2(void)

void FUN_147e06bb2(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_1464159d2();
  if (lVar3 != 0) {
    FUN_14706e08c(*param_2,&local_40);
    FUN_1414d7078(lVar3,&local_50);
    if ((local_40 == local_50) && (local_38 == local_48)) {
      pcVar2 = *(code **)(param_1 + 0x10);
      iVar1 = *(int *)(param_1 + 0x18);
      lVar3 = *(longlong *)(param_1 + 8);
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      (*pcVar2)(iVar1 + lVar3,uVar4,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e06c5a FUN_147e06c5a body=166 status=ok
// SIG undefined FUN_147e06c5a(void)

void FUN_147e06c5a(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_145d88ef2();
  if (lVar3 != 0) {
    FUN_14706e08c(*param_2,&local_40);
    FUN_1414d7078(lVar3,&local_50);
    if ((local_40 == local_50) && (local_38 == local_48)) {
      pcVar2 = *(code **)(param_1 + 0x10);
      iVar1 = *(int *)(param_1 + 0x18);
      lVar3 = *(longlong *)(param_1 + 8);
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      (*pcVar2)(iVar1 + lVar3,uVar4,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e06d02 FUN_147e06d02 body=74 status=ok
// SIG undefined FUN_147e06d02(void)

void FUN_147e06d02(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = FUN_147e06d4c();
  if (iVar3 == -1) {
    iVar3 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
      FUN_14706f770(param_1,iVar3);
    }
    uVar2 = param_2[1];
    puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x10);
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
  }
  return;
}



// FUNCTION 147e06d4c FUN_147e06d4c body=80 status=ok
// SIG undefined FUN_147e06d4c(void)

int FUN_147e06d4c(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    piVar1 = (int *)*param_1;
    piVar3 = piVar1 + (longlong)*(int *)(param_1 + 1) * 4;
    iVar2 = 0;
    do {
      if ((((*piVar1 == *param_2) && (piVar1[1] == param_2[1])) && (piVar1[2] == param_2[2])) &&
         (piVar1[3] == param_2[3])) {
        return iVar2;
      }
      piVar1 = piVar1 + 4;
      iVar2 = iVar2 + 1;
    } while (piVar1 != piVar3);
  }
  return -1;
}



// FUNCTION 147e06d9c FUN_147e06d9c body=332 status=ok
// SIG undefined FUN_147e06d9c(void)

void FUN_147e06d9c(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  bool bVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  uVar4 = *(uint *)(param_1 + 1);
  lVar8 = (longlong)(int)uVar4;
  if (lVar8 != 0) {
    piVar6 = (int *)*param_1;
    piVar7 = (int *)*param_2;
    uVar12 = 0;
    bVar9 = piVar6[3] == piVar7[3] &&
            (piVar6[2] == piVar7[2] && (piVar6[1] == piVar7[1] && *piVar6 == *piVar7));
    uVar15 = 0;
    do {
      piVar7 = (int *)*param_2;
      uVar10 = (ulonglong)uVar15;
      uVar13 = uVar15 + 1;
      if ((int)(uVar15 + 1) < (int)uVar4) {
        uVar13 = uVar4;
      }
      piVar14 = piVar6 + uVar10 * 4 + 7;
      uVar16 = uVar15;
      uVar11 = uVar10;
      do {
        uVar11 = uVar11 + 1;
        uVar17 = uVar13;
        if (lVar8 <= (longlong)uVar11) break;
        piVar1 = piVar14 + -3;
        piVar2 = piVar14 + -2;
        piVar3 = piVar14 + -1;
        iVar5 = *piVar14;
        uVar16 = uVar16 + 1;
        piVar14 = piVar14 + 4;
        uVar17 = uVar16;
      } while (bVar9 == (iVar5 == piVar7[3] &&
                        (*piVar3 == piVar7[2] && (*piVar2 == piVar7[1] && *piVar1 == *piVar7))));
      if (bVar9 == false) {
        if (uVar12 != uVar15) {
          memmove(piVar6 + (longlong)(int)uVar12 * 4,piVar6 + uVar10 * 4,
                  (longlong)(int)(uVar17 - uVar15) << 4);
        }
        uVar12 = uVar12 + (uVar17 - uVar15);
      }
      bVar9 = (bool)(bVar9 ^ 1);
      uVar15 = uVar17;
    } while ((longlong)uVar11 < lVar8);
    *(uint *)(param_1 + 1) = uVar12;
  }
  return;
}



// FUNCTION 147e06ee8 FUN_147e06ee8 body=36 status=ok
// SIG undefined FUN_147e06ee8(void)

undefined8 FUN_147e06ee8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147e06f28 FUN_147e06f28 body=93 status=ok
// SIG undefined FUN_147e06f28(void)

void FUN_147e06f28(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab3c6c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147e06f86 FUN_147e06f86 body=126 status=ok
// SIG undefined FUN_147e06f86(void)

void FUN_147e06f86(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ab3c6c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e06ff5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e07004 FUN_147e07004 body=21 status=ok
// SIG undefined FUN_147e07004(void)

undefined8 FUN_147e07004(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147e0701a FUN_147e0701a body=43 status=ok
// SIG undefined FUN_147e0701a(void)

undefined8 FUN_147e0701a(undefined8 param_1,int param_2)

{
  FUN_145fe092c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 147e07046 FUN_147e07046 body=506 status=ok
// SIG undefined FUN_147e07046(void)

longlong * FUN_147e07046(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) goto LAB_147e0706f;
  if (((*(longlong *)(param_1 + 8) == 0) ||
      (plVar5 = *(longlong **)(param_1 + 0x10), plVar5 == (longlong *)0x0)) || ((int)plVar5[1] < 1))
  {
    lVar4 = 0;
    goto LAB_147e0706f;
  }
  lVar4 = FUN_14494321d();
  iVar3 = (int)plVar5[1];
  local_40 = 0;
  do {
    if (iVar3 == 0) {
      plVar5 = (longlong *)0x0;
      goto LAB_147e070f2;
    }
    LOCK();
    iVar2 = (int)plVar5[1];
    bVar7 = iVar3 == iVar2;
    if (bVar7) {
      *(int *)(plVar5 + 1) = iVar3 + 1;
      iVar2 = iVar3;
    }
    iVar3 = iVar2;
    UNLOCK();
  } while (!bVar7);
  local_40 = *(undefined8 *)(param_1 + 8);
LAB_147e070f2:
  local_38 = plVar5;
  FUN_147dfdec8(lVar4);
  plVar5 = (longlong *)FUN_14494321d(0x18);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ab3cc00;
  plVar5[2] = lVar4;
  if ((lVar4 != 0) &&
     (((*(longlong *)(lVar4 + 8) == 0 || (*(longlong *)(lVar4 + 0x10) == 0)) ||
      (*(int *)(*(longlong *)(lVar4 + 0x10) + 8) < 1)))) {
    if (plVar5 == (longlong *)0x0) {
      *(longlong *)(lVar4 + 8) = lVar4;
      plVar6 = *(longlong **)(lVar4 + 0x10);
      if (plVar6 != (longlong *)0x0) {
LAB_147e07173:
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
        *(longlong **)(lVar4 + 0x10) = plVar5;
        if (plVar5 != (longlong *)0x0) goto LAB_147e0719f;
      }
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      *(longlong *)(lVar4 + 8) = lVar4;
      if (*(longlong **)(lVar4 + 0x10) != plVar5) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar6 = *(longlong **)(lVar4 + 0x10);
        if (plVar6 != (longlong *)0x0) goto LAB_147e07173;
        *(longlong **)(lVar4 + 0x10) = plVar5;
      }
LAB_147e0719f:
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  *(longlong *)(param_1 + 0x18) = lVar4;
  plVar6 = *(longlong **)(param_1 + 0x20);
  if (plVar5 == plVar6) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar6 = plVar5;
        goto joined_r0x000147e07206;
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0x20) = plVar5;
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
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x000147e07206:
        if (iVar3 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  plVar5 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_38 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
LAB_147e0706f:
  *param_2 = lVar4;
  lVar4 = *(longlong *)(param_1 + 0x20);
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e07242 FUN_147e07242 body=356 status=ok
// SIG undefined FUN_147e07242(void)

longlong * FUN_147e07242(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (lVar4 != 0) goto LAB_147e07269;
  if (((*(longlong *)(param_1 + 8) == 0) ||
      (plVar6 = *(longlong **)(param_1 + 0x10), plVar6 == (longlong *)0x0)) || ((int)plVar6[1] < 1))
  {
    lVar4 = 0;
    goto LAB_147e07269;
  }
  lVar4 = FUN_14494321d();
  iVar3 = (int)plVar6[1];
  local_38 = 0;
  do {
    if (iVar3 == 0) {
      plVar6 = (longlong *)0x0;
      goto LAB_147e072e7;
    }
    LOCK();
    iVar2 = (int)plVar6[1];
    bVar7 = iVar3 == iVar2;
    if (bVar7) {
      *(int *)(plVar6 + 1) = iVar3 + 1;
      iVar2 = iVar3;
    }
    iVar3 = iVar2;
    UNLOCK();
  } while (!bVar7);
  local_38 = *(undefined8 *)(param_1 + 8);
LAB_147e072e7:
  local_30 = plVar6;
  FUN_147e00218(lVar4);
  plVar5 = (longlong *)FUN_14494321d(0x18);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ab3cc40;
  plVar5[2] = lVar4;
  *(longlong *)(param_1 + 0x38) = lVar4;
  plVar6 = *(longlong **)(param_1 + 0x40);
  if (plVar5 == plVar6) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar6 = plVar5;
        goto joined_r0x000147e0736c;
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0x40) = plVar5;
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
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x000147e0736c:
        if (iVar3 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  plVar6 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_30 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x38);
LAB_147e07269:
  *param_2 = lVar4;
  lVar4 = *(longlong *)(param_1 + 0x40);
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e073a8 FUN_147e073a8 body=25 status=ok
// SIG undefined FUN_147e073a8(void)

void FUN_147e073a8(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e073bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x78))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 147e073c2 FUN_147e073c2 body=34 status=ok
// SIG undefined FUN_147e073c2(void)

undefined8 FUN_147e073c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 147e073e4 FUN_147e073e4 body=24 status=ok
// SIG undefined FUN_147e073e4(void)

void FUN_147e073e4(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e073f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 147e073fc FUN_147e073fc body=34 status=ok
// SIG undefined FUN_147e073fc(void)

undefined8 FUN_147e073fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 147e0741e FUN_147e0741e body=161 status=ok
// SIG undefined FUN_147e0741e(void)

void FUN_147e0741e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_14629e292();
  if (lVar3 != 0) {
    FUN_14706e08c(*param_2,&local_40);
    FUN_1414d7078(lVar3,&local_50);
    if ((local_40 == local_50) && (local_38 == local_48)) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      pcVar2 = *(code **)(param_1 + 0x10);
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      (*pcVar2)(uVar1,uVar4,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e074c0 FUN_147e074c0 body=34 status=ok
// SIG undefined FUN_147e074c0(void)

undefined8 FUN_147e074c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 147e074fc FUN_147e074fc body=34 status=ok
// SIG undefined FUN_147e074fc(void)

undefined8 FUN_147e074fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 147e0751e FUN_147e0751e body=161 status=ok
// SIG undefined FUN_147e0751e(void)

void FUN_147e0751e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_14629de50();
  if (lVar3 != 0) {
    FUN_14706e08c(*param_2,&local_40);
    FUN_1414d7078(lVar3,&local_50);
    if ((local_40 == local_50) && (local_38 == local_48)) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      pcVar2 = *(code **)(param_1 + 0x10);
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      (*pcVar2)(uVar1,uVar4,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e075c0 FUN_147e075c0 body=34 status=ok
// SIG undefined FUN_147e075c0(void)

undefined8 FUN_147e075c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 147e075fc FUN_147e075fc body=34 status=ok
// SIG undefined FUN_147e075fc(void)

undefined8 FUN_147e075fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 147e0761e FUN_147e0761e body=161 status=ok
// SIG undefined FUN_147e0761e(void)

void FUN_147e0761e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_14629dfce();
  if (lVar3 != 0) {
    FUN_14706e08c(*param_2,&local_40);
    FUN_1414d7078(lVar3,&local_50);
    if ((local_40 == local_50) && (local_38 == local_48)) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      pcVar2 = *(code **)(param_1 + 0x10);
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      (*pcVar2)(uVar1,uVar4,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e076c0 FUN_147e076c0 body=34 status=ok
// SIG undefined FUN_147e076c0(void)

undefined8 FUN_147e076c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 147e076fc FUN_147e076fc body=34 status=ok
// SIG undefined FUN_147e076fc(void)

undefined8 FUN_147e076fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 147e0771e FUN_147e0771e body=161 status=ok
// SIG undefined FUN_147e0771e(void)

void FUN_147e0771e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_14629e0ba();
  if (lVar3 != 0) {
    FUN_14706e08c(*param_2,&local_40);
    FUN_1414d7078(lVar3,&local_50);
    if ((local_40 == local_50) && (local_38 == local_48)) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      pcVar2 = *(code **)(param_1 + 0x10);
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      (*pcVar2)(uVar1,uVar4,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e077c0 FUN_147e077c0 body=34 status=ok
// SIG undefined FUN_147e077c0(void)

undefined8 FUN_147e077c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 147e077fc FUN_147e077fc body=34 status=ok
// SIG undefined FUN_147e077fc(void)

undefined8 FUN_147e077fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 147e0781e FUN_147e0781e body=161 status=ok
// SIG undefined FUN_147e0781e(void)

void FUN_147e0781e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_14629e14c();
  if (lVar3 != 0) {
    FUN_14706e08c(*param_2,&local_40);
    FUN_1414d7078(lVar3,&local_50);
    if ((local_40 == local_50) && (local_38 == local_48)) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      pcVar2 = *(code **)(param_1 + 0x10);
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      (*pcVar2)(uVar1,uVar4,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e078c0 FUN_147e078c0 body=34 status=ok
// SIG undefined FUN_147e078c0(void)

undefined8 FUN_147e078c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 147e078fc FUN_147e078fc body=34 status=ok
// SIG undefined FUN_147e078fc(void)

undefined8 FUN_147e078fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 147e0791e FUN_147e0791e body=34 status=ok
// SIG undefined FUN_147e0791e(void)

undefined8 FUN_147e0791e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147e07968 FUN_147e07968 body=93 status=ok
// SIG undefined FUN_147e07968(void)

void FUN_147e07968(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab3cdc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab3cd50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147e079c6 FUN_147e079c6 body=93 status=ok
// SIG undefined FUN_147e079c6(void)

void FUN_147e079c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab3cdc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab3cd50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147e07a24 FUN_147e07a24 body=126 status=ok
// SIG undefined FUN_147e07a24(void)

void FUN_147e07a24(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ab3cdc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab3cd50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e07a93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e07ab0 FUN_147e07ab0 body=21 status=ok
// SIG undefined FUN_147e07ab0(void)

undefined8 FUN_147e07ab0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147e07ac8 FUN_147e07ac8 body=174 status=ok
// SIG undefined FUN_147e07ac8(void)

undefined8 FUN_147e07ac8(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_1448eb174(param_2,0x10,0);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x188;
        if ((((*(int *)(lVar1 + lVar4) == *param_2) && (*(int *)(lVar1 + 4 + lVar4) == param_2[1]))
            && (*(int *)(lVar1 + 8 + lVar4) == param_2[2])) &&
           (*(int *)(lVar1 + 0xc + lVar4) == param_2[3])) {
          FUN_147e07b76(param_1);
          return 1;
        }
        iVar2 = *(int *)(lVar4 + lVar1 + 0x180);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147e07b76 FUN_147e07b76 body=104 status=ok
// SIG undefined FUN_147e07b76(void)

void FUN_147e07b76(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x184 + (longlong)param_2 * 0x188);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x180 + lVar5 * 0x188);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x188 + 0x180);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x188 + 0x180);
  FUN_147e07bde();
  return;
}



// FUNCTION 147e07bde FUN_147e07bde body=71 status=ok
// SIG undefined FUN_147e07bde(void)

void FUN_147e07bde(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_147e023de((longlong)param_2 * 0x188 + lVar1 + 0x108);
  FUN_147e04146(lVar1 + (longlong)param_2 * 0x188 + 0x10);
  FUN_147e07c26(param_1,param_2);
  return;
}



// FUNCTION 147e07c26 FUN_147e07c26 body=122 status=ok
// SIG undefined FUN_147e07c26(void)

void FUN_147e07c26(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x188) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x188) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x188 + 4) = uVar5;
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



// FUNCTION 147e07ca0 FUN_147e07ca0 body=411 status=ok
// SIG undefined FUN_147e07ca0(void)

void FUN_147e07ca0(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_140957390(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_14055df60(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x28 + -0x24);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -10;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
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
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 147e07e3c FUN_147e07e3c body=443 status=ok
// SIG undefined FUN_147e07e3c(void)

void FUN_147e07e3c(longlong *param_1)

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



// FUNCTION 147e07ff8 FUN_147e07ff8 body=305 status=ok
// SIG undefined FUN_147e07ff8(void)

undefined4 * FUN_147e07ff8(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147e0812a(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar5 = ((undefined8 *)*param_3)[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = uVar5;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)(local_40 + 2) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar2;
  *(undefined4 *)(local_40 + 3) = uVar3;
  *(undefined4 *)((longlong)local_40 + 0x1c) = uVar4;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = FUN_1447addd0(local_40,0x10);
  cVar6 = FUN_147e08210(param_1,uVar7,local_40,&local_4c);
  uVar2 = local_4c;
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
      *(uint *)((longlong)local_40 + 0x24) = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_147e07e3c(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e0812a FUN_147e0812a body=230 status=ok
// SIG undefined FUN_147e0812a(void)

int * FUN_147e0812a(longlong *param_1,int *param_2)

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
      FUN_14055df60(param_1,iVar6);
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



// FUNCTION 147e08210 FUN_147e08210 body=93 status=ok
// SIG undefined FUN_147e08210(void)

undefined8 FUN_147e08210(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

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
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar10 = FUN_147e0826e(), iVar10 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    puVar1 = (undefined4 *)(lVar2 + 0x10 + (longlong)iVar10 * 0x28);
    *puVar1 = param_3[4];
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar9;
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar10 * 0x28);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_147e082e2(param_1,*param_4);
    *param_4 = iVar10;
    return 1;
  }
  return 0;
}



// FUNCTION 147e0826e FUN_147e0826e body=115 status=ok
// SIG undefined FUN_147e0826e(void)

int FUN_147e0826e(longlong *param_1,uint param_2,int *param_3)

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



// FUNCTION 147e082e2 FUN_147e082e2 body=114 status=ok
// SIG undefined FUN_147e082e2(void)

void FUN_147e082e2(longlong *param_1,int param_2)

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



// FUNCTION 147e08354 FUN_147e08354 body=121 status=ok
// SIG undefined FUN_147e08354(void)

int FUN_147e08354(longlong *param_1,uint param_2,int *param_3)

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
        lVar4 = (longlong)iVar1 * 0x188;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar4) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x180);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 147e083ce FUN_147e083ce body=343 status=ok
// SIG undefined FUN_147e083ce(void)

undefined4 * FUN_147e083ce(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147e08526(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  lVar10 = param_3[1];
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar2;
  local_40[2] = uVar3;
  local_40[3] = uVar4;
  FUN_147e08738(local_40 + 4,lVar10);
  FUN_147e08800(local_40 + 0x42,lVar10 + 0xf8);
  local_40[0x60] = 0xffffffff;
  local_4c = local_48[0];
  uVar6 = FUN_1448eb174(local_40,0x10,0);
  cVar5 = FUN_147e08614(param_1,uVar6,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar5 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      local_40[0x61] = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      local_40[0x60] =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_147e08a8e(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e08526 FUN_147e08526 body=237 status=ok
// SIG undefined FUN_147e08526(void)

int * FUN_147e08526(longlong *param_1,int *param_2)

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
      FUN_147e086a0(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x188);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x188) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x188 + *param_1;
  return param_2;
}



// FUNCTION 147e08614 FUN_147e08614 body=140 status=ok
// SIG undefined FUN_147e08614(void)

undefined8 FUN_147e08614(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar2 = FUN_147e08354(), iVar2 != -1)) {
    lVar1 = *param_1;
    lVar3 = (longlong)iVar2 * 0x188;
    FUN_147e023de(lVar3 + lVar1 + 0x108);
    FUN_147e04146(lVar1 + lVar3 + 0x10);
    memmove((void *)(lVar1 + lVar3),param_3,0x180);
    FUN_147e07c26(param_1,*param_4);
    *param_4 = iVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 147e086a0 FUN_147e086a0 body=150 status=ok
// SIG undefined FUN_147e086a0(void)

void FUN_147e086a0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x188,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x188)) {
      uVar5 = uVar4 / 0x188 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x188,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147e08738 FUN_147e08738 body=199 status=ok
// SIG undefined FUN_147e08738(void)

undefined8 * FUN_147e08738(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  *(undefined4 *)((longlong)param_1 + 0x1f) = *(undefined4 *)((longlong)param_2 + 0x1f);
  uVar8 = *param_2;
  uVar9 = param_2[1];
  uVar10 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar10;
  *param_1 = uVar8;
  param_1[1] = uVar9;
  param_1[5] = 0;
  param_1[5] = param_2[5];
  param_2[5] = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  param_2[6] = 0;
  uVar1 = *(undefined4 *)(param_2 + 7);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar3 = *(undefined4 *)(param_2 + 8);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x4c);
  uVar6 = *(undefined4 *)(param_2 + 10);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar5;
  *(undefined4 *)(param_1 + 10) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar7;
  *(undefined4 *)(param_1 + 7) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar4;
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = 0;
  param_1[0xc] = param_2[0xc];
  param_2[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  param_2[0xd] = 0;
  FUN_147e08872(param_1 + 0xe,param_2 + 0xe);
  uVar8 = param_2[0x19];
  uVar9 = param_2[0x1a];
  uVar10 = param_2[0x1b];
  uVar11 = param_2[0x1c];
  uVar12 = param_2[0x1d];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar8;
  param_1[0x1a] = uVar9;
  param_1[0x1b] = uVar10;
  param_1[0x1c] = uVar11;
  param_1[0x1d] = uVar12;
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
  return param_1;
}



// FUNCTION 147e08800 FUN_147e08800 body=113 status=ok
// SIG undefined FUN_147e08800(void)

undefined8 * FUN_147e08800(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14ab3c260;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = *(undefined8 *)(param_2 + 8);
  param_1[2] = uVar2;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  lVar1 = *(longlong *)(param_2 + 0x20);
  param_1[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  FUN_1478c2e40(param_1 + 5,param_2 + 0x28);
  return param_1;
}



// FUNCTION 147e08872 FUN_147e08872 body=123 status=ok
// SIG undefined FUN_147e08872(void)

undefined8 * FUN_147e08872(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_147e088ee();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 147e088ee FUN_147e088ee body=414 status=ok
// SIG undefined FUN_147e088ee(void)

longlong * FUN_147e088ee(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_58 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[5];
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_70 = local_50;
    uVar5 = local_70;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar6 = local_70._4_4_;
    local_88 = param_1;
    if ((local_70._4_4_ != iVar7) || (local_70 = uVar5, uStack_58 != plVar1)) {
      do {
        local_70 = uVar5;
        lVar2 = *local_88;
        if (*(longlong *)(lVar2 + 0x18 + (longlong)iVar6 * 0x38) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar2 + (longlong)iVar6 * 0x38 + 8) != 0) {
          FUN_1400020a8();
        }
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_88 != param_1 ||
               ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1 || local_70._4_4_ != iVar7));
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
      lVar2 = param_2[3];
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
      *(int *)(param_1 + 3) = (int)lVar2;
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
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e08a8e FUN_147e08a8e body=458 status=ok
// SIG undefined FUN_147e08a8e(void)

void FUN_147e08a8e(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x188;
        iVar6 = FUN_1448eb174(lVar3 + lVar10,0x10,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x184 + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x180 + lVar10) =
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



// FUNCTION 147e08c5a FUN_147e08c5a body=193 status=ok
// SIG undefined FUN_147e08c5a(void)

void FUN_147e08c5a(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_147e08cf1;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_147e08cf1:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 147e08d1c FUN_147e08d1c body=295 status=ok
// SIG undefined FUN_147e08d1c(void)

undefined4 * FUN_147e08d1c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147e08e44(param_1,local_48);
  uVar4 = *(uint *)*param_3;
  *local_40 = uVar4;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  local_40[7] = 0;
  local_40[8] = 0;
  local_40[9] = 0;
  *(undefined8 *)((longlong)local_40 + 0x26) = 0;
  local_40[0xc] = 0xffffffff;
  local_4c = local_48[0];
  cVar2 = FUN_147e08f26(param_1,uVar4,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[0xd] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[0xc] =
           *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_147e09052(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e08e44 FUN_147e08e44 body=226 status=ok
// SIG undefined FUN_147e08e44(void)

int * FUN_147e08e44(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
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



// FUNCTION 147e08f26 FUN_147e08f26 body=183 status=ok
// SIG undefined FUN_147e08f26(void)

undefined8 FUN_147e08f26(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar14 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar14 * 0x38);
        if (*(int *)(*param_1 + (longlong)iVar14 * 0x38) == *param_3) {
          if (*(longlong *)(piVar1 + 6) != 0) {
            FUN_1400020a8();
          }
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          iVar10 = param_3[9];
          iVar11 = param_3[10];
          iVar12 = param_3[0xb];
          piVar1[8] = param_3[8];
          piVar1[9] = iVar10;
          piVar1[10] = iVar11;
          piVar1[0xb] = iVar12;
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_147e08fde(param_1,*param_4);
          *param_4 = iVar14;
          return 1;
        }
        iVar14 = piVar1[0xc];
      } while (iVar14 != -1);
    }
  }
  return 0;
}



// FUNCTION 147e08fde FUN_147e08fde body=116 status=ok
// SIG undefined FUN_147e08fde(void)

void FUN_147e08fde(longlong *param_1,int param_2)

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



// FUNCTION 147e09052 FUN_147e09052 body=419 status=ok
// SIG undefined FUN_147e09052(void)

void FUN_147e09052(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0x38;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x34 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 147e091f6 FUN_147e091f6 body=48 status=ok
// SIG undefined FUN_147e091f6(void)

void FUN_147e091f6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 147e09226 FUN_147e09226 body=147 status=ok
// SIG undefined FUN_147e09226(void)

void FUN_147e09226(longlong param_1,int param_2)

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



// FUNCTION 147e092ba FUN_147e092ba body=158 status=ok
// SIG undefined FUN_147e092ba(void)

void FUN_147e092ba(longlong *param_1,uint param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_48 [40];
  longlong *local_20;
  undefined8 local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x18);
        if (*plVar1 == *param_3) {
          if (plVar1 != (longlong *)0x0) goto LAB_147e0933d;
          break;
        }
        iVar2 = (int)plVar1[2];
      } while (iVar2 != -1);
    }
  }
  local_20 = param_3;
  local_18 = param_4;
  FUN_147e0935a(param_1,local_c,param_2,&local_20);
LAB_147e0933d:
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e0935a FUN_147e0935a body=281 status=ok
// SIG undefined FUN_147e0935a(void)

undefined4 * FUN_147e0935a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1402eb086(param_1,local_48);
  puVar1 = (undefined4 *)param_4[1];
  *local_40 = *(undefined8 *)*param_4;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_58 = 0;
  cVar2 = FUN_1402eafee(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1402eb25c(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e09474 FUN_147e09474 body=213 status=ok
// SIG undefined FUN_147e09474(void)

void FUN_147e09474(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ab3bf50;
  FUN_144760e21(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0xf];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_147e0954a(param_1 + 3);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147e0953d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 147e0954a FUN_147e0954a body=52 status=ok
// SIG undefined FUN_147e0954a(void)

void FUN_147e0954a(longlong *param_1)

{
  FUN_147e0957e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147e0957e FUN_147e0957e body=343 status=ok
// SIG undefined FUN_147e0957e(void)

void FUN_147e0957e(longlong *param_1)

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



// FUNCTION 147e096d6 FUN_147e096d6 body=283 status=ok
// SIG undefined FUN_147e096d6(void)

void FUN_147e096d6(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ab3bfb0;
  FUN_144760e21(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x1b];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x19];
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
  FUN_147e097f1(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147e097e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 147e097f1 FUN_147e097f1 body=73 status=ok
// SIG undefined FUN_147e097f1(void)

void FUN_147e097f1(longlong param_1,int param_2)

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



// FUNCTION 147e0983a FUN_147e0983a body=222 status=ok
// SIG undefined FUN_147e0983a(void)

undefined8 FUN_147e0983a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(HMODULE *)(param_1 + 0x20) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar3 = 0;
  memset((void *)(param_1 + 0x28),0,0xa40);
  lVar2 = FUN_14155261e(L"nvcuda.dll");
  *(longlong *)(param_1 + 0x20) = lVar2;
  if (lVar2 != 0) {
    FUN_147e09a0e(lVar2);
    local_24 = -1;
    if (*(code **)(param_1 + 0x40) != (code *)0x0) {
      iVar1 = (**(code **)(param_1 + 0x40))(&local_24);
      if ((iVar1 == 0) && (10999 < local_24)) {
        uVar3 = 1;
        goto LAB_147e09895;
      }
    }
    if (*(HMODULE *)(param_1 + 0x20) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    uVar3 = 0;
    memset((void *)(param_1 + 0x28),0,0xa40);
  }
LAB_147e09895:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e0991a FUN_147e0991a body=186 status=ok
// SIG undefined FUN_147e0991a(void)

undefined8 FUN_147e0991a(undefined8 param_1,undefined8 param_2)

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
  *puVar1 = &PTR_FUN_14ab40680;
  puVar1[3] = param_2;
  puVar1[4] = FUN_1437d1808;
  FUN_1448b6402(&DAT_14c872cf8,param_1,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e099d6 FUN_147e099d6 body=56 status=ok
// SIG undefined FUN_147e099d6(void)

void FUN_147e099d6(longlong param_1)

{
  if (*(HMODULE *)(param_1 + 0x20) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  memset((void *)(param_1 + 0x28),0,0xa40);
  return;
}



// FUNCTION 147e09a0e FUN_147e09a0e body=7192 status=ok
// SIG undefined FUN_147e09a0e(void)

void FUN_147e09a0e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar1 = FUN_14170ce66(param_1,L"cuGetErrorString");
    *param_2 = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGetErrorName");
    param_2[1] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuInit");
    param_2[2] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuDriverGetVersion");
    param_2[3] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuDeviceGet");
    param_2[4] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuDeviceGetCount");
    param_2[5] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuDeviceGetName");
    param_2[6] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuDeviceGetUuid");
    param_2[7] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuDeviceGetLuid");
    param_2[8] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuDeviceTotalMem_v2");
    param_2[9] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuDeviceGetTexture1DLinearMaxWidth");
    param_2[10] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuDeviceGetAttribute");
    param_2[0xb] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuDeviceGetNvSciSyncAttributes");
    param_2[0xc] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuDeviceSetMemPool");
    param_2[0xd] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuDeviceGetMemPool");
    param_2[0xe] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuDeviceGetDefaultMemPool");
    param_2[0xf] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuDeviceGetProperties");
    param_2[0x10] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuDeviceComputeCapability");
    param_2[0x11] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuDevicePrimaryCtxRetain");
    param_2[0x12] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuDevicePrimaryCtxRelease_v2");
    param_2[0x13] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuDevicePrimaryCtxSetFlags_v2");
    param_2[0x14] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuDevicePrimaryCtxGetState");
    param_2[0x15] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuDevicePrimaryCtxReset_v2");
    param_2[0x16] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuCtxCreate_v2");
    param_2[0x17] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuCtxDestroy_v2");
    param_2[0x18] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuCtxPushCurrent_v2");
    param_2[0x19] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuCtxPopCurrent_v2");
    param_2[0x1a] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuCtxSetCurrent");
    param_2[0x1b] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuCtxGetCurrent");
    param_2[0x1c] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuCtxGetDevice");
    param_2[0x1d] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuCtxGetFlags");
    param_2[0x1e] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuCtxSynchronize");
    param_2[0x1f] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuCtxSetLimit");
    param_2[0x20] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuCtxGetLimit");
    param_2[0x21] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuCtxGetCacheConfig");
    param_2[0x22] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuCtxSetCacheConfig");
    param_2[0x23] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuCtxGetSharedMemConfig");
    param_2[0x24] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuCtxSetSharedMemConfig");
    param_2[0x25] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuCtxGetApiVersion");
    param_2[0x26] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuCtxGetStreamPriorityRange");
    param_2[0x27] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuCtxResetPersistingL2Cache");
    param_2[0x28] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuCtxAttach");
    param_2[0x29] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuCtxDetach");
    param_2[0x2a] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuModuleLoad");
    param_2[0x2b] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuModuleLoadData");
    param_2[0x2c] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuModuleLoadDataEx");
    param_2[0x2d] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuModuleLoadFatBinary");
    param_2[0x2e] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuModuleUnload");
    param_2[0x2f] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuModuleGetFunction");
    param_2[0x30] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuModuleGetGlobal_v2");
    param_2[0x31] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuModuleGetTexRef");
    param_2[0x32] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuModuleGetSurfRef");
    param_2[0x33] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuLinkCreate_v2");
    param_2[0x34] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuLinkAddData_v2");
    param_2[0x35] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuLinkAddFile_v2");
    param_2[0x36] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuLinkComplete");
    param_2[0x37] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuLinkDestroy");
    param_2[0x38] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemGetInfo_v2");
    param_2[0x39] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemAlloc_v2");
    param_2[0x3a] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemAllocPitch_v2");
    param_2[0x3b] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemFree_v2");
    param_2[0x3c] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemGetAddressRange_v2");
    param_2[0x3d] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemAllocHost_v2");
    param_2[0x3e] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemFreeHost");
    param_2[0x3f] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemHostAlloc");
    param_2[0x40] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemHostGetDevicePointer_v2");
    param_2[0x41] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemHostGetFlags");
    param_2[0x42] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemAllocManaged");
    param_2[0x43] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuDeviceGetByPCIBusId");
    param_2[0x44] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuDeviceGetPCIBusId");
    param_2[0x45] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuIpcGetEventHandle");
    param_2[0x46] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuIpcOpenEventHandle");
    param_2[0x47] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuIpcGetMemHandle");
    param_2[0x48] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuIpcOpenMemHandle_v2");
    param_2[0x49] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuIpcCloseMemHandle");
    param_2[0x4a] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemHostRegister_v2");
    param_2[0x4b] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemHostUnregister");
    param_2[0x4c] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemcpy");
    param_2[0x4d] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemcpyPeer");
    param_2[0x4e] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemcpyHtoD_v2");
    param_2[0x4f] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemcpyDtoH_v2");
    param_2[0x50] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemcpyDtoD_v2");
    param_2[0x51] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemcpyDtoA_v2");
    param_2[0x52] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemcpyAtoD_v2");
    param_2[0x53] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemcpyHtoA_v2");
    param_2[0x54] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemcpyAtoH_v2");
    param_2[0x55] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemcpyAtoA_v2");
    param_2[0x56] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemcpy2D_v2");
    param_2[0x57] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemcpy2DUnaligned_v2");
    param_2[0x58] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemcpy3D_v2");
    param_2[0x59] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemcpy3DPeer");
    param_2[0x5a] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemcpyAsync");
    param_2[0x5b] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemcpyPeerAsync");
    param_2[0x5c] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemcpyHtoDAsync_v2");
    param_2[0x5d] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemcpyDtoHAsync_v2");
    param_2[0x5e] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemcpyDtoDAsync_v2");
    param_2[0x5f] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemcpyHtoAAsync_v2");
    param_2[0x60] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemcpyAtoHAsync_v2");
    param_2[0x61] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemcpy2DAsync_v2");
    param_2[0x62] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemcpy3DAsync_v2");
    param_2[99] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemcpy3DPeerAsync");
    param_2[100] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemsetD8_v2");
    param_2[0x65] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemsetD16_v2");
    param_2[0x66] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemsetD32_v2");
    param_2[0x67] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemsetD2D8_v2");
    param_2[0x68] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemsetD2D16_v2");
    param_2[0x69] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemsetD2D32_v2");
    param_2[0x6a] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemsetD8Async");
    param_2[0x6b] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemsetD16Async");
    param_2[0x6c] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemsetD32Async");
    param_2[0x6d] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemsetD2D8Async");
    param_2[0x6e] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemsetD2D16Async");
    param_2[0x6f] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemsetD2D32Async");
    param_2[0x70] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuArrayCreate_v2");
    param_2[0x71] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuArrayGetDescriptor_v2");
    param_2[0x72] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuArrayGetSparseProperties");
    param_2[0x73] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMipmappedArrayGetSparseProperties");
    param_2[0x74] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuArrayGetPlane");
    param_2[0x75] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuArrayDestroy");
    param_2[0x76] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuArray3DCreate_v2");
    param_2[0x77] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuArray3DGetDescriptor_v2");
    param_2[0x78] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMipmappedArrayCreate");
    param_2[0x79] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMipmappedArrayGetLevel");
    param_2[0x7a] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMipmappedArrayDestroy");
    param_2[0x7b] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemAddressReserve");
    param_2[0x7c] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemAddressFree");
    param_2[0x7d] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemCreate");
    param_2[0x7e] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemRelease");
    param_2[0x7f] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemMap");
    param_2[0x80] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemMapArrayAsync");
    param_2[0x81] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemUnmap");
    param_2[0x82] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemSetAccess");
    param_2[0x83] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemGetAccess");
    param_2[0x84] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemExportToShareableHandle");
    param_2[0x85] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemImportFromShareableHandle");
    param_2[0x86] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemGetAllocationGranularity");
    param_2[0x87] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemGetAllocationPropertiesFromHandle");
    param_2[0x88] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemRetainAllocationHandle");
    param_2[0x89] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemFreeAsync");
    param_2[0x8a] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemAllocAsync");
    param_2[0x8b] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemPoolTrimTo");
    param_2[0x8c] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemPoolSetAttribute");
    param_2[0x8d] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemPoolGetAttribute");
    param_2[0x8e] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemPoolSetAccess");
    param_2[0x8f] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemPoolGetAccess");
    param_2[0x90] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemPoolCreate");
    param_2[0x91] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemPoolDestroy");
    param_2[0x92] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemAllocFromPoolAsync");
    param_2[0x93] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemPoolExportToShareableHandle");
    param_2[0x94] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemPoolImportFromShareableHandle");
    param_2[0x95] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemPoolExportPointer");
    param_2[0x96] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemPoolImportPointer");
    param_2[0x97] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuPointerGetAttribute");
    param_2[0x98] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemPrefetchAsync");
    param_2[0x99] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemAdvise");
    param_2[0x9a] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemRangeGetAttribute");
    param_2[0x9b] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuMemRangeGetAttributes");
    param_2[0x9c] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuPointerSetAttribute");
    param_2[0x9d] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuPointerGetAttributes");
    param_2[0x9e] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuStreamCreate");
    param_2[0x9f] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuStreamCreateWithPriority");
    param_2[0xa0] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuStreamGetPriority");
    param_2[0xa1] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuStreamGetFlags");
    param_2[0xa2] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuStreamGetCtx");
    param_2[0xa3] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuStreamWaitEvent");
    param_2[0xa4] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuStreamAddCallback");
    param_2[0xa5] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuStreamBeginCapture_v2");
    param_2[0xa6] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuThreadExchangeStreamCaptureMode");
    param_2[0xa7] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuStreamEndCapture");
    param_2[0xa8] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuStreamIsCapturing");
    param_2[0xa9] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuStreamGetCaptureInfo");
    param_2[0xaa] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuStreamAttachMemAsync");
    param_2[0xab] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuStreamQuery");
    param_2[0xac] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuStreamSynchronize");
    param_2[0xad] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuStreamDestroy_v2");
    param_2[0xae] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuStreamCopyAttributes");
    param_2[0xaf] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuStreamGetAttribute");
    param_2[0xb0] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuStreamSetAttribute");
    param_2[0xb1] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuEventCreate");
    param_2[0xb2] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuEventRecord");
    param_2[0xb3] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuEventRecordWithFlags");
    param_2[0xb4] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuEventQuery");
    param_2[0xb5] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuEventSynchronize");
    param_2[0xb6] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuEventDestroy_v2");
    param_2[0xb7] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuEventElapsedTime");
    param_2[0xb8] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuImportExternalMemory");
    param_2[0xb9] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuExternalMemoryGetMappedBuffer");
    param_2[0xba] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuExternalMemoryGetMappedMipmappedArray");
    param_2[0xbb] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuDestroyExternalMemory");
    param_2[0xbc] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuImportExternalSemaphore");
    param_2[0xbd] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuSignalExternalSemaphoresAsync");
    param_2[0xbe] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuWaitExternalSemaphoresAsync");
    param_2[0xbf] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuDestroyExternalSemaphore");
    param_2[0xc0] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuStreamWaitValue32");
    param_2[0xc1] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuStreamWaitValue64");
    param_2[0xc2] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuStreamWriteValue32");
    param_2[0xc3] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuStreamWriteValue64");
    param_2[0xc4] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuStreamBatchMemOp");
    param_2[0xc5] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuFuncGetAttribute");
    param_2[0xc6] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuFuncSetAttribute");
    param_2[199] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuFuncSetCacheConfig");
    param_2[200] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuFuncSetSharedMemConfig");
    param_2[0xc9] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuLaunchKernel");
    param_2[0xca] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuLaunchCooperativeKernel");
    param_2[0xcb] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuLaunchCooperativeKernelMultiDevice");
    param_2[0xcc] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuLaunchHostFunc");
    param_2[0xcd] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuFuncSetBlockShape");
    param_2[0xce] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuFuncSetSharedSize");
    param_2[0xcf] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuParamSetSize");
    param_2[0xd0] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuParamSeti");
    param_2[0xd1] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuParamSetf");
    param_2[0xd2] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuParamSetv");
    param_2[0xd3] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuLaunch");
    param_2[0xd4] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuLaunchGrid");
    param_2[0xd5] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuLaunchGridAsync");
    param_2[0xd6] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuParamSetTexRef");
    param_2[0xd7] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphCreate");
    param_2[0xd8] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphAddKernelNode");
    param_2[0xd9] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphKernelNodeGetParams");
    param_2[0xda] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphKernelNodeSetParams");
    param_2[0xdb] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphAddMemcpyNode");
    param_2[0xdc] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphMemcpyNodeGetParams");
    param_2[0xdd] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphMemcpyNodeSetParams");
    param_2[0xde] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphAddMemsetNode");
    param_2[0xdf] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphMemsetNodeGetParams");
    param_2[0xe0] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphMemsetNodeSetParams");
    param_2[0xe1] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphAddHostNode");
    param_2[0xe2] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphHostNodeGetParams");
    param_2[0xe3] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphHostNodeSetParams");
    param_2[0xe4] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphAddChildGraphNode");
    param_2[0xe5] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphChildGraphNodeGetGraph");
    param_2[0xe6] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphAddEmptyNode");
    param_2[0xe7] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphAddEventRecordNode");
    param_2[0xe8] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphEventRecordNodeGetEvent");
    param_2[0xe9] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphEventRecordNodeSetEvent");
    param_2[0xea] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphAddEventWaitNode");
    param_2[0xeb] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphEventWaitNodeGetEvent");
    param_2[0xec] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphEventWaitNodeSetEvent");
    param_2[0xed] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphAddExternalSemaphoresSignalNode");
    param_2[0xee] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphExternalSemaphoresSignalNodeGetParams");
    param_2[0xef] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphExternalSemaphoresSignalNodeSetParams");
    param_2[0xf0] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphAddExternalSemaphoresWaitNode");
    param_2[0xf1] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphExternalSemaphoresWaitNodeGetParams");
    param_2[0xf2] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphExternalSemaphoresWaitNodeSetParams");
    param_2[0xf3] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphClone");
    param_2[0xf4] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphNodeFindInClone");
    param_2[0xf5] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphNodeGetType");
    param_2[0xf6] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphGetNodes");
    param_2[0xf7] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphGetRootNodes");
    param_2[0xf8] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphGetEdges");
    param_2[0xf9] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphNodeGetDependencies");
    param_2[0xfa] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphNodeGetDependentNodes");
    param_2[0xfb] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphAddDependencies");
    param_2[0xfc] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphRemoveDependencies");
    param_2[0xfd] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphDestroyNode");
    param_2[0xfe] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphInstantiate_v2");
    param_2[0xff] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphExecKernelNodeSetParams");
    param_2[0x100] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphExecMemcpyNodeSetParams");
    param_2[0x101] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphExecMemsetNodeSetParams");
    param_2[0x102] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphExecHostNodeSetParams");
    param_2[0x103] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphExecChildGraphNodeSetParams");
    param_2[0x104] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphExecEventRecordNodeSetEvent");
    param_2[0x105] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphExecEventWaitNodeSetEvent");
    param_2[0x106] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphExecExternalSemaphoresSignalNodeSetParams");
    param_2[0x107] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphExecExternalSemaphoresWaitNodeSetParams");
    param_2[0x108] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphUpload");
    param_2[0x109] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphLaunch");
    param_2[0x10a] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphExecDestroy");
    param_2[0x10b] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphDestroy");
    param_2[0x10c] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphExecUpdate");
    param_2[0x10d] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphKernelNodeCopyAttributes");
    param_2[0x10e] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphKernelNodeGetAttribute");
    param_2[0x10f] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphKernelNodeSetAttribute");
    param_2[0x110] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuOccupancyMaxActiveBlocksPerMultiprocessor");
    param_2[0x111] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuOccupancyMaxActiveBlocksPerMultiprocessorWithFlags");
    param_2[0x112] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuOccupancyMaxPotentialBlockSize");
    param_2[0x113] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuOccupancyMaxPotentialBlockSizeWithFlags");
    param_2[0x114] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuOccupancyAvailableDynamicSMemPerBlock");
    param_2[0x115] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuTexRefSetArray");
    param_2[0x116] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuTexRefSetMipmappedArray");
    param_2[0x117] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuTexRefSetAddress_v2");
    param_2[0x118] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuTexRefSetAddress2D_v3");
    param_2[0x119] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuTexRefSetFormat");
    param_2[0x11a] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuTexRefSetAddressMode");
    param_2[0x11b] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuTexRefSetFilterMode");
    param_2[0x11c] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuTexRefSetMipmapFilterMode");
    param_2[0x11d] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuTexRefSetMipmapLevelBias");
    param_2[0x11e] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuTexRefSetMipmapLevelClamp");
    param_2[0x11f] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuTexRefSetMaxAnisotropy");
    param_2[0x120] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuTexRefSetBorderColor");
    param_2[0x121] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuTexRefSetFlags");
    param_2[0x122] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuTexRefGetAddress_v2");
    param_2[0x123] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuTexRefGetArray");
    param_2[0x124] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuTexRefGetMipmappedArray");
    param_2[0x125] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuTexRefGetAddressMode");
    param_2[0x126] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuTexRefGetFilterMode");
    param_2[0x127] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuTexRefGetFormat");
    param_2[0x128] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuTexRefGetMipmapFilterMode");
    param_2[0x129] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuTexRefGetMipmapLevelBias");
    param_2[0x12a] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuTexRefGetMipmapLevelClamp");
    param_2[299] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuTexRefGetMaxAnisotropy");
    param_2[300] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuTexRefGetBorderColor");
    param_2[0x12d] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuTexRefGetFlags");
    param_2[0x12e] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuTexRefCreate");
    param_2[0x12f] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuTexRefDestroy");
    param_2[0x130] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuSurfRefSetArray");
    param_2[0x131] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuSurfRefGetArray");
    param_2[0x132] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuTexObjectCreate");
    param_2[0x133] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuTexObjectDestroy");
    param_2[0x134] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuTexObjectGetResourceDesc");
    param_2[0x135] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuTexObjectGetTextureDesc");
    param_2[0x136] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuTexObjectGetResourceViewDesc");
    param_2[0x137] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuSurfObjectCreate");
    param_2[0x138] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuSurfObjectDestroy");
    param_2[0x139] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuSurfObjectGetResourceDesc");
    param_2[0x13a] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuDeviceCanAccessPeer");
    param_2[0x13b] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuCtxEnablePeerAccess");
    param_2[0x13c] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuCtxDisablePeerAccess");
    param_2[0x13d] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuDeviceGetP2PAttribute");
    param_2[0x13e] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphicsUnregisterResource");
    param_2[0x13f] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphicsSubResourceGetMappedArray");
    param_2[0x140] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphicsResourceGetMappedMipmappedArray");
    param_2[0x141] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphicsResourceGetMappedPointer_v2");
    param_2[0x142] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphicsResourceSetMapFlags_v2");
    param_2[0x143] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphicsMapResources");
    param_2[0x144] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGraphicsUnmapResources");
    param_2[0x145] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuGetExportTable");
    param_2[0x146] = uVar1;
    uVar1 = FUN_14170ce66(param_1,L"cuFuncGetModule");
    param_2[0x147] = uVar1;
  }
  return;
}



// FUNCTION 147e0b626 FUN_147e0b626 body=34 status=ok
// SIG undefined FUN_147e0b626(void)

undefined8 FUN_147e0b626(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147e0b664 FUN_147e0b664 body=93 status=ok
// SIG undefined FUN_147e0b664(void)

void FUN_147e0b664(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab40680;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147e0b6c2 FUN_147e0b6c2 body=93 status=ok
// SIG undefined FUN_147e0b6c2(void)

void FUN_147e0b6c2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab40680;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147e0b720 FUN_147e0b720 body=123 status=ok
// SIG undefined FUN_147e0b720(void)

void FUN_147e0b720(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab40680;
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



// FUNCTION 147e0b7a8 FUN_147e0b7a8 body=21 status=ok
// SIG undefined FUN_147e0b7a8(void)

undefined8 FUN_147e0b7a8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147e0b7be FUN_147e0b7be body=287 status=ok
// SIG undefined FUN_147e0b7be(void)

undefined4 * FUN_147e0b7be(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_147e0b8de(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_147e0b9c4(param_1,uVar5,local_40,&local_4c);
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
      FUN_147e0bab6(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e0b8de FUN_147e0b8de body=230 status=ok
// SIG undefined FUN_147e0b8de(void)

int * FUN_147e0b8de(longlong *param_1,int *param_2)

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



// FUNCTION 147e0b9c4 FUN_147e0b9c4 body=128 status=ok
// SIG undefined FUN_147e0b9c4(void)

undefined8 FUN_147e0b9c4(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_147e0ba44(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 147e0ba44 FUN_147e0ba44 body=114 status=ok
// SIG undefined FUN_147e0ba44(void)

void FUN_147e0ba44(longlong *param_1,int param_2)

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



// FUNCTION 147e0bab6 FUN_147e0bab6 body=419 status=ok
// SIG undefined FUN_147e0bab6(void)

void FUN_147e0bab6(longlong *param_1)

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



// FUNCTION 147e0bc5a FUN_147e0bc5a body=93 status=ok
// SIG undefined FUN_147e0bc5a(void)

undefined8 * FUN_147e0bc5a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0xac0);
  memset(puVar1 + 4,0,0xaa0);
  *puVar1 = &PTR_FUN_14ab40760;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 2;
  puVar1[0x14e] = 0;
  puVar1[0x14f] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xa9c) = 0xffffffff00000080;
  return puVar1;
}



// FUNCTION 147e0bcb8 FUN_147e0bcb8 body=36 status=ok
// SIG undefined FUN_147e0bcb8(void)

undefined8 FUN_147e0bcb8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147e0bcf8 FUN_147e0bcf8 body=93 status=ok
// SIG undefined FUN_147e0bcf8(void)

void FUN_147e0bcf8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab406f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147e0bd56 FUN_147e0bd56 body=123 status=ok
// SIG undefined FUN_147e0bd56(void)

void FUN_147e0bd56(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ab406f0;
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



// FUNCTION 147e0bdde FUN_147e0bdde body=21 status=ok
// SIG undefined FUN_147e0bdde(void)

undefined8 FUN_147e0bdde(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147e0bdf4 FUN_147e0bdf4 body=43 status=ok
// SIG undefined FUN_147e0bdf4(void)

undefined8 FUN_147e0bdf4(undefined8 param_1,int param_2)

{
  FUN_147e0be20();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xac0);
  }
  return param_1;
}



// FUNCTION 147e0be20 FUN_147e0be20 body=101 status=ok
// SIG undefined FUN_147e0be20(void)

void FUN_147e0be20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab40760;
  *(undefined4 *)(param_1 + 0x157) = 0;
  if (param_1[0x156] != 0) {
    FUN_1400020a8();
  }
  FUN_147e0be86(param_1 + 0x14e);
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147e0be86 FUN_147e0be86 body=52 status=ok
// SIG undefined FUN_147e0be86(void)

void FUN_147e0be86(longlong *param_1)

{
  FUN_147e0beba();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147e0beba FUN_147e0beba body=89 status=ok
// SIG undefined FUN_147e0beba(void)

void FUN_147e0beba(longlong param_1)

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



// FUNCTION 147e0bf14 FUN_147e0bf14 body=100 status=ok
// SIG undefined FUN_147e0bf14(void)

void FUN_147e0bf14(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  local_28 = param_2;
  FUN_147e0d7e2(param_1 + 0x30);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000147e0bf6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e0bf7a FUN_147e0bf7a body=108 status=ok
// SIG undefined FUN_147e0bf7a(void)

void FUN_147e0bf7a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  local_28 = &local_30;
  local_30 = param_2;
  FUN_147e0d8d4(param_1 + 0x30);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e0bfe8 FUN_147e0bfe8 body=92 status=ok
// SIG undefined FUN_147e0bfe8(void)

void FUN_147e0bfe8(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar2 + lVar4);
      (**(code **)*puVar3)(puVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x000147e0c03d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 147e0c044 FUN_147e0c044 body=198 status=ok
// SIG undefined FUN_147e0c044(void)

undefined8 FUN_147e0c044(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cb12b1c == '\0') {
    FUN_1437d1d88();
  }
  lVar2 = DAT_14cb12b20;
  lVar6 = (longlong)DAT_14cb12b28;
  if (lVar6 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar2 + lVar5);
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_50);
      iVar3 = FUN_144a075de(&local_50,param_1);
      FUN_1447a1747(local_50,local_48);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      if (iVar3 != -1) {
        uVar4 = *(undefined8 *)(lVar2 + lVar5);
        break;
      }
      lVar5 = lVar5 + 8;
    } while (lVar6 * 8 != lVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 147e0c10c FUN_147e0c10c body=352 status=ok
// SIG undefined FUN_147e0c10c(void)

undefined8 * FUN_147e0c10c(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_LAB_14ab40c00;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 1),4000);
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_14ab40990;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_1400b22c2(&local_38,"aac.wmf");
  if (param_1 + 9 == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[9] != 0) {
      FUN_1400020a8();
    }
    param_1[9] = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 10) = local_30;
    *(undefined4 *)((longlong)param_1 + 0x54) = local_2c;
  }
  FUN_1400b22c2(&local_38,&DAT_14ab409e0);
  if (param_1 + 0xb == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0xb] != 0) {
      FUN_1400020a8();
    }
    param_1[0xb] = local_38;
    *(undefined4 *)(param_1 + 0xc) = local_30;
    *(undefined4 *)((longlong)param_1 + 100) = local_2c;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e0c26e FUN_147e0c26e body=156 status=ok
// SIG undefined FUN_147e0c26e(void)

void FUN_147e0c26e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab40990;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x12] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x12] + 0x10))();
  }
  if ((longlong *)param_1[0x11] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x11] + 0x10))();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14ab40c00;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x000147e0c303. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



// FUNCTION 147e0c334 FUN_147e0c334 body=169 status=ok
// SIG undefined FUN_147e0c334(void)

undefined8 * FUN_147e0c334(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  FUN_14703e832();
  iVar1 = *(int *)(param_1 + 1);
  local_20 = iVar1 + *(uint *)(param_1 + 2);
  *(int *)(param_1 + 1) = local_20;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < *(uint *)(param_1 + 2)) {
    FUN_1405b572a(param_1);
    local_20 = *(int *)(param_1 + 1);
  }
  local_28 = *param_1;
  local_38 = *param_2;
  local_30 = *(undefined4 *)(param_2 + 1);
  FUN_142af421e();
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e0c3de FUN_147e0c3de body=107 status=ok
// SIG undefined FUN_147e0c3de(void)

undefined8 * FUN_147e0c3de(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x70);
  _Src = *(void **)(param_1 + 0x68);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x80);
  param_2[2] = *(undefined8 *)(param_1 + 0x78);
  return param_2;
}



// FUNCTION 147e0c452 FUN_147e0c452 body=127 status=ok
// SIG undefined FUN_147e0c452(void)

undefined8 * FUN_147e0c452(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140056680(&local_28,&DAT_14ab40a78);
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_1447a1bd6(param_2,0);
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = 0;
  *puVar1 = local_28;
  *(undefined4 *)(puVar1 + 1) = local_20;
  *(undefined4 *)((longlong)puVar1 + 0xc) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e0c4d2 FUN_147e0c4d2 body=75 status=ok
// SIG undefined FUN_147e0c4d2(void)

undefined * FUN_147e0c4d2(void)

{
  if (DAT_14cb12b9c == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb12b70);
    if (DAT_14cb12b9c == 0) {
      LOCK();
      DAT_14cb12b9c = 1;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb12b70);
  }
  return &DAT_14cb12b98;
}



// FUNCTION 147e0c51e FUN_147e0c51e body=293 status=ok
// SIG undefined FUN_147e0c51e(void)

undefined8 * FUN_147e0c51e(undefined8 *param_1,undefined8 param_2,undefined1 param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar4 = (longlong *)FUN_14001cc68(0xe0);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14ab40c90;
  plVar1 = plVar4 + 2;
  memset(plVar1,0,0xd0);
  FUN_147e0dba4(plVar1);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  *(undefined1 *)((longlong)plVar4 + 0x24) = param_3;
  if (param_4 == '\0') {
    cVar3 = FUN_1437d2fd2(plVar1,param_2);
  }
  else {
    cVar3 = FUN_1437d2c6e(plVar1,param_2);
  }
  plVar5 = (longlong *)0x0;
  if (cVar3 != '\0') {
    plVar5 = plVar1;
  }
  if (plVar4 == (longlong *)0x0 || cVar3 != '\0') {
    *param_1 = plVar5;
    param_1[1] = plVar4;
    if (plVar4 != (longlong *)0x0) {
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
  }
  else {
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
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}



// FUNCTION 147e0c644 FUN_147e0c644 body=293 status=ok
// SIG undefined FUN_147e0c644(void)

undefined8 * FUN_147e0c644(undefined8 *param_1,undefined8 param_2,undefined1 param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar4 = (longlong *)FUN_14001cc68(0xe0);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14ab40c90;
  plVar1 = plVar4 + 2;
  memset(plVar1,0,0xd0);
  FUN_147e0dba4(plVar1);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  *(undefined1 *)((longlong)plVar4 + 0x24) = param_3;
  if (param_4 == '\0') {
    cVar3 = FUN_1437d3700(plVar1,param_2);
  }
  else {
    cVar3 = FUN_1437d3336(plVar1,param_2);
  }
  plVar5 = (longlong *)0x0;
  if (cVar3 != '\0') {
    plVar5 = plVar1;
  }
  if (plVar4 == (longlong *)0x0 || cVar3 != '\0') {
    *param_1 = plVar5;
    param_1[1] = plVar4;
    if (plVar4 != (longlong *)0x0) {
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
  }
  else {
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
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}



// FUNCTION 147e0c76a FUN_147e0c76a body=223 status=ok
// SIG undefined FUN_147e0c76a(void)

undefined8 * FUN_147e0c76a(undefined8 *param_1,undefined4 *param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  
  plVar8 = (longlong *)FUN_14001cc68(0xe0);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14ab40c90;
  plVar1 = plVar8 + 2;
  memset(plVar1,0,0xd0);
  FUN_147e0dba4(plVar1);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  *(undefined1 *)((longlong)plVar8 + 0x24) = param_3;
  lVar4 = *(longlong *)(param_2 + 4);
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  *(undefined4 *)(plVar8 + 0xe) = *param_2;
  *(undefined4 *)((longlong)plVar8 + 0x74) = uVar5;
  *(undefined4 *)(plVar8 + 0xf) = uVar6;
  *(undefined4 *)((longlong)plVar8 + 0x7c) = uVar7;
  plVar8[0x10] = lVar4;
  *(undefined4 *)(plVar8 + 3) = 5;
  FUN_147e0cadc(plVar1);
  *param_1 = plVar1;
  param_1[1] = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  return param_1;
}



// FUNCTION 147e0c84a FUN_147e0c84a body=429 status=ok
// SIG undefined FUN_147e0c84a(void)

longlong **
FUN_147e0c84a(longlong param_1,longlong **param_2,int param_3,longlong *param_4,undefined8 param_5)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = (longlong *)0x0;
  lVar2 = *param_4;
  if (lVar2 != 0) {
    plVar3 = (longlong *)param_4[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if (0 < (longlong)*(int *)(param_1 + 0x20)) {
      lVar6 = 0x20;
      lVar10 = 0;
      do {
        if (*(int *)(*(longlong *)(param_1 + 0x18) + lVar10) == param_3) {
          lVar10 = *(longlong *)(param_1 + 8);
          pcVar4 = *(code **)(lVar10 + -0x20 + lVar6);
          plVar9 = *(longlong **)(lVar10 + -0x10 + lVar6);
          plVar8 = (longlong *)(lVar10 + lVar6);
          if (plVar9 != (longlong *)0x0) {
            plVar8 = plVar9;
          }
          uVar7 = (**(code **)(*plVar8 + 8))();
          (*pcVar4)(&local_48,uVar7);
          plVar9 = local_48;
          if (&local_48 == param_2) {
LAB_147e0c98d:
            if (local_48 != (longlong *)0x0) {
              (**(code **)*local_48)(local_48,1);
            }
            plVar9 = *param_2;
          }
          else {
            plVar8 = *param_2;
            *param_2 = local_48;
            local_48 = (longlong *)0x0;
            if (plVar8 != (longlong *)0x0) {
              (**(code **)*plVar8)(plVar8,1);
              goto LAB_147e0c98d;
            }
          }
          if (plVar9 != (longlong *)0x0) {
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
            }
            local_58 = lVar2;
            local_50 = plVar3;
            cVar5 = (**(code **)(*plVar9 + 8))(plVar9,&local_58,param_5);
            if ((cVar5 == '\0') && (plVar9 = *param_2, plVar9 != (longlong *)0x0)) {
              *param_2 = (longlong *)0x0;
              (**(code **)*plVar9)(plVar9,1);
            }
          }
          break;
        }
        lVar6 = lVar6 + 0x40;
        lVar10 = lVar10 + 0x30;
      } while ((longlong)*(int *)(param_1 + 0x20) * 0x30 != lVar10);
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
  }
  plVar3 = (longlong *)param_4[1];
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
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e0c9f8 FUN_147e0c9f8 body=129 status=ok
// SIG undefined FUN_147e0c9f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147e0c9f8(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((DAT_14cb12bc8 == 0 && _DAT_14cb12bc4 == 0) && _DAT_14cb12bcc == 0) && _DAT_14cb12bd0 == 0) {
    FUN_1412e3d1e(&local_28);
    _DAT_14cb12bc4 = local_28;
    _DAT_14cb12bcc = uStack_20;
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1407c869a(&DAT_14cb12bc4,param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e0ca7e FUN_147e0ca7e body=94 status=ok
// SIG undefined FUN_147e0ca7e(void)

void FUN_147e0ca7e(longlong param_1)

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
    thunk_FUN_1400020a8(puVar3,0x18);
    puVar3 = *(undefined8 **)(param_1 + 8);
  }
  return;
}



// FUNCTION 147e0cadc FUN_147e0cadc body=310 status=ok
// SIG undefined FUN_147e0cadc(void)

void FUN_147e0cadc(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  void *_Src;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  
  plVar1 = (longlong *)(param_1 + 0x20);
  FUN_145c33f67(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_147e0daa0(plVar1);
  }
  FUN_147e0c4d2();
  if ((longlong)DAT_14cb12bb8 != 0) {
    puVar11 = DAT_14cb12bb0 + (longlong)DAT_14cb12bb8 * 0xc;
    puVar10 = DAT_14cb12bb0;
    do {
      if ((longlong)(int)puVar10[6] != 0) {
        lVar9 = 0;
        do {
          if (*(int *)(*(longlong *)(puVar10 + 4) + lVar9) == *(int *)(param_1 + 8)) {
            iVar3 = *(int *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = iVar3 + 1U;
            if (*(uint *)(param_1 + 0x2c) < iVar3 + 1U) {
              FUN_147e0db10(plVar1,iVar3);
            }
            lVar4 = *plVar1;
            lVar8 = (longlong)iVar3 * 0x30;
            lVar9 = lVar4 + lVar8;
            uVar5 = puVar10[1];
            uVar6 = puVar10[2];
            uVar7 = puVar10[3];
            puVar2 = (undefined4 *)(lVar4 + lVar8);
            *puVar2 = *puVar10;
            puVar2[1] = uVar5;
            puVar2[2] = uVar6;
            puVar2[3] = uVar7;
            *(undefined8 *)(lVar4 + 0x10 + lVar8) = 0;
            iVar3 = puVar10[6];
            _Src = *(void **)(puVar10 + 4);
            *(int *)(lVar4 + 0x18 + lVar8) = iVar3;
            if ((longlong)iVar3 == 0) {
              *(undefined4 *)(lVar9 + 0x1c) = 0;
            }
            else {
              puVar12 = (undefined8 *)(lVar4 + lVar8 + 0x10);
              FUN_147e0d788(puVar12,iVar3);
              memcpy((void *)*puVar12,_Src,(longlong)iVar3 << 2);
            }
            *(undefined4 *)(lVar9 + 0x28) = puVar10[10];
            *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(puVar10 + 8);
            break;
          }
          lVar9 = lVar9 + 4;
        } while ((longlong)(int)puVar10[6] * 4 != lVar9);
      }
      puVar10 = puVar10 + 0xc;
    } while (puVar10 != puVar11);
  }
  return;
}



// FUNCTION 147e0cc18 FUN_147e0cc18 body=96 status=ok
// SIG undefined FUN_147e0cc18(void)

ulonglong FUN_147e0cc18(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  lVar1 = (ulonglong)*(uint *)(param_1 + 200) * 0x50;
  iVar2 = *(uint *)(param_1 + 200) + 1;
  do {
    lVar1 = lVar1 + -0x50;
    iVar2 = iVar2 + -1;
    if (iVar2 < 1) break;
  } while (*(longlong *)(*(longlong *)(param_1 + 0xc0) + lVar1) != param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  return CONCAT71((int7)((ulonglong)param_1 >> 8),0 < iVar2) & 0xffffffff;
}



// FUNCTION 147e0cc78 FUN_147e0cc78 body=233 status=ok
// SIG undefined FUN_147e0cc78(void)

longlong FUN_147e0cc78(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  
  lVar11 = FUN_1437d38de();
  if (lVar11 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
    iVar2 = *(int *)(param_1 + 200);
    *(uint *)(param_1 + 200) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0xcc) < iVar2 + 1U) {
      FUN_147e0dcf8((longlong *)(param_1 + 0xc0),iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0xc0);
    lVar12 = (longlong)iVar2 * 0x50;
    *(longlong *)(lVar3 + lVar12) = lVar11;
    *(longlong *)(lVar3 + 0x10 + lVar12) = *param_2;
    *(longlong *)(lVar3 + 0x20 + lVar12) = param_2[2];
    param_2[2] = 0;
    lVar8 = param_2[4];
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
    lVar9 = param_2[5];
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x2c);
    uVar6 = *(undefined4 *)((longlong)param_2 + 0x34);
    lVar10 = param_2[7];
    uVar7 = *(undefined4 *)((longlong)param_2 + 0x3c);
    puVar1 = (undefined4 *)(lVar3 + 0x40 + lVar12);
    *puVar1 = (int)param_2[6];
    puVar1[1] = uVar6;
    puVar1[2] = (int)lVar10;
    puVar1[3] = uVar7;
    puVar1 = (undefined4 *)(lVar3 + 0x30 + lVar12);
    *puVar1 = (int)lVar8;
    puVar1[1] = uVar4;
    puVar1[2] = (int)lVar9;
    puVar1[3] = uVar5;
    if (*(longlong *)(lVar3 + 0x10 + lVar12) != 0) {
      *param_2 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  }
  if (*param_2 != 0) {
    plVar13 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar13 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  return lVar11;
}



// FUNCTION 147e0cd62 FUN_147e0cd62 body=160 status=ok
// SIG undefined FUN_147e0cd62(void)

void FUN_147e0cd62(longlong param_1,longlong *param_2)

{
  bool bVar1;
  byte bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  uVar4 = (ulonglong)*(int *)(param_1 + 200);
  if (0 < (longlong)uVar4) {
    plVar3 = (longlong *)(param_1 + 0xc0);
    lVar5 = uVar4 * 0x50;
    bVar2 = 0;
    do {
      lVar5 = lVar5 + -0x50;
      if (*(longlong **)(*plVar3 + lVar5) == param_2) {
        FUN_147e0dd8c(plVar3,(int)uVar4 + -1);
        FUN_147e0ddf8(plVar3);
        bVar2 = 1;
      }
      bVar1 = 1 < uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar1);
    if ((bool)(param_2 != (longlong *)0x0 & bVar2)) {
      (**(code **)(*param_2 + 0x10))(param_2,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147e0cdfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  return;
}



// FUNCTION 147e0ce02 FUN_147e0ce02 body=243 status=ok
// SIG undefined FUN_147e0ce02(void)

void FUN_147e0ce02(longlong param_1,undefined8 *param_2)

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
      thunk_FUN_1400020a8(lVar5,0x18);
      return;
    }
  }
  return;
}



// FUNCTION 147e0cef6 FUN_147e0cef6 body=66 status=ok
// SIG undefined FUN_147e0cef6(void)

void FUN_147e0cef6(longlong param_1)

{
  char cVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  do {
    cVar1 = FUN_147e0e07a(param_1 + 0xa0);
  } while (cVar1 != '\0');
  *(undefined4 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x000147e0cf31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  return;
}



// FUNCTION 147e0cf38 FUN_147e0cf38 body=35 status=ok
// SIG undefined FUN_147e0cf38(void)

longlong * FUN_147e0cf38(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x40);
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_2;
}



// FUNCTION 147e0cf5c FUN_147e0cf5c body=35 status=ok
// SIG undefined FUN_147e0cf5c(void)

longlong * FUN_147e0cf5c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x50);
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_2;
}



// FUNCTION 147e0cf8c FUN_147e0cf8c body=217 status=ok
// SIG undefined FUN_147e0cf8c(void)

void FUN_147e0cf8c(undefined8 *param_1)

{
  *param_1 = &PTR__purecall_14ab40b40;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x2e] = 0;
  param_1[0x30] = 0;
  param_1[0x3a] = 0;
  param_1[0x3c] = 0;
  param_1[0x42] = 0;
  param_1[0x44] = 0;
  param_1[0x46] = 0;
  param_1[0x48] = 0;
  param_1[0x4a] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x2c] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  return;
}



// FUNCTION 147e0d066 FUN_147e0d066 body=423 status=ok
// SIG undefined FUN_147e0d066(void)

undefined8 * FUN_147e0d066(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR__purecall_14ab40b40;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x90);
  param_1[0x13] = *(undefined8 *)(param_2 + 0x98);
  param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x2e] = 0;
  param_1[0x30] = 0;
  param_1[0x3a] = 0;
  param_1[0x3c] = 0;
  param_1[0x42] = 0;
  param_1[0x44] = 0;
  param_1[0x46] = 0;
  param_1[0x48] = 0;
  param_1[0x4a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  param_1[0x1e] = *(undefined8 *)(param_2 + 0xf0);
  param_1[0x1d] = *(undefined8 *)(param_2 + 0xe8);
  plVar1 = *(longlong **)(param_2 + 0xf8);
  param_1[0x1f] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  param_1[0x2b] = *(undefined8 *)(param_2 + 0x158);
  param_1[0x2a] = *(undefined8 *)(param_2 + 0x150);
  plVar1 = *(longlong **)(param_2 + 0x160);
  param_1[0x2c] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  param_1[0x37] = *(undefined8 *)(param_2 + 0x1b8);
  param_1[0x36] = *(undefined8 *)(param_2 + 0x1b0);
  return param_1;
}



// FUNCTION 147e0d20e FUN_147e0d20e body=290 status=ok
// SIG undefined FUN_147e0d20e(void)

longlong * FUN_147e0d20e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
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
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e0d332 FUN_147e0d332 body=290 status=ok
// SIG undefined FUN_147e0d332(void)

longlong * FUN_147e0d332(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
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
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e0d456 FUN_147e0d456 body=170 status=ok
// SIG undefined FUN_147e0d456(void)

undefined8 * FUN_147e0d456(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  FUN_147e0d066();
  *param_1 = &PTR_FUN_14ab40bd0;
  param_1[0x50] = *(undefined8 *)(param_2 + 0x280);
  LOCK();
  *(int *)(param_2 + 0xa8) = *(int *)(param_2 + 0xa8) + 1;
  UNLOCK();
  param_1[0x51] = param_2;
  param_1[0x52] = *param_3;
  param_1[0x54] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x58) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x2c4) = uVar3;
  *(int *)(param_1 + 0x59) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = uVar4;
  *(int *)(param_1 + 0x56) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = uVar1;
  *(int *)(param_1 + 0x57) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 700) = uVar2;
  if (param_1[0x52] == 0) {
    if (*param_3 != 0) {
      plVar8 = param_3 + 4;
      if ((longlong *)param_3[2] != (longlong *)0x0) {
        plVar8 = (longlong *)param_3[2];
      }
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  else {
    *param_3 = 0;
  }
  return param_1;
}



// FUNCTION 147e0d500 FUN_147e0d500 body=85 status=ok
// SIG undefined FUN_147e0d500(void)

void FUN_147e0d500(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ab40bd0;
  if ((undefined8 *)param_1[0x51] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0x51])();
  }
  if (param_1[0x52] != 0) {
    plVar1 = param_1 + 0x56;
    if ((longlong *)param_1[0x54] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x54];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1437d3dce(param_1);
  return;
}



// FUNCTION 147e0d556 FUN_147e0d556 body=189 status=ok
// SIG undefined FUN_147e0d556(void)

void FUN_147e0d556(longlong *param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar2 = FUN_147e0cc18(param_1[0x50],param_1);
  if (cVar2 != '\0') {
LAB_147e0d582:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  LOCK();
  plVar4 = param_1 + 0x15;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    if (param_1[0x51] == 0) goto LAB_147e0d582;
    pcVar1 = (code *)param_1[0x52];
    plVar4 = param_1 + 0x56;
    if ((longlong *)param_1[0x54] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x54];
    }
    local_28 = param_1;
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(uVar3,&local_28);
    if (param_1 != (longlong *)0x0) {
      (**(code **)(*param_1 + 0x10))(param_1,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e0d628 FUN_147e0d628 body=180 status=ok
// SIG undefined FUN_147e0d628(void)

undefined8 FUN_147e0d628(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = FUN_14001cc68(0x2d0,0x10);
  local_68[0] = *param_2;
  local_58 = param_2[2];
  param_2[2] = 0;
  local_48 = (undefined4)param_2[4];
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_40 = (undefined4)param_2[5];
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_38 = (undefined4)param_2[6];
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_30 = (undefined4)param_2[7];
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x3c);
  if (local_68[0] != 0) {
    *param_2 = 0;
  }
  FUN_147e0d456(uVar1,param_1,local_68);
  if (*param_2 != 0) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e0d6de FUN_147e0d6de body=43 status=ok
// SIG undefined FUN_147e0d6de(void)

undefined8 FUN_147e0d6de(undefined8 param_1,int param_2)

{
  FUN_147e0c26e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 147e0d70a FUN_147e0d70a body=34 status=ok
// SIG undefined FUN_147e0d70a(void)

undefined8 FUN_147e0d70a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 147e0d72c FUN_147e0d72c body=43 status=ok
// SIG undefined FUN_147e0d72c(void)

undefined8 FUN_147e0d72c(undefined8 param_1,int param_2)

{
  FUN_1437d3804();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 147e0d75a FUN_147e0d75a body=43 status=ok
// SIG undefined FUN_147e0d75a(void)

undefined8 FUN_147e0d75a(undefined8 param_1,int param_2)

{
  FUN_147e0d500();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x2d0);
  }
  return param_1;
}



// FUNCTION 147e0d788 FUN_147e0d788 body=89 status=ok
// SIG undefined FUN_147e0d788(void)

void FUN_147e0d788(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 4,4);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 2)) {
    uVar3 = uVar1 >> 2 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,4,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 147e0d7e2 FUN_147e0d7e2 body=107 status=ok
// SIG undefined FUN_147e0d7e2(void)

void FUN_147e0d7e2(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147e0d84e(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 147e0d84e FUN_147e0d84e body=132 status=ok
// SIG undefined FUN_147e0d84e(void)

void FUN_147e0d84e(longlong param_1,int param_2)

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



// FUNCTION 147e0d8d4 FUN_147e0d8d4 body=201 status=ok
// SIG undefined FUN_147e0d8d4(void)

void FUN_147e0d8d4(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = (longlong)(int)uVar1;
  if (lVar3 != 0) {
    plVar2 = (longlong *)*param_1;
    uVar4 = 0;
    bVar10 = *plVar2 == *(longlong *)*param_2;
    uVar7 = 0;
    do {
      uVar5 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)uVar1) {
        uVar5 = uVar1;
      }
      uVar8 = uVar7;
      uVar6 = (ulonglong)uVar7;
      do {
        uVar6 = uVar6 + 1;
        uVar9 = uVar5;
        if (lVar3 <= (longlong)uVar6) break;
        uVar8 = uVar8 + 1;
        uVar9 = uVar8;
      } while (bVar10 == (plVar2[uVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (uVar4 != uVar7) {
          memmove(plVar2 + (int)uVar4,plVar2 + uVar7,(longlong)(int)(uVar9 - uVar7) << 3);
        }
        uVar4 = uVar4 + (uVar9 - uVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      uVar7 = uVar9;
    } while ((longlong)uVar6 < lVar3);
    *(uint *)(param_1 + 1) = uVar4;
  }
  return;
}



// FUNCTION 147e0d99e FUN_147e0d99e body=116 status=ok
// SIG undefined FUN_147e0d99e(void)

void FUN_147e0d99e(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  iVar1 = DAT_14cb12b28;
  lVar3 = (longlong)(int)DAT_14cb12b28;
  if (lVar3 != 0) {
    uVar2 = 0;
    do {
      if (*(longlong *)(DAT_14cb12b20 + uVar2) == *param_1) {
        if ((int)(~uVar2 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar2 = uVar2 + 8;
    } while (lVar3 * 8 - uVar2 != 0);
  }
  DAT_14cb12b28 = DAT_14cb12b28 + 1;
  if (DAT_14cb12b2c < DAT_14cb12b28) {
    FUN_147e0da12(iVar1);
  }
  *(longlong *)(DAT_14cb12b20 + lVar3 * 8) = *param_1;
  return;
}



// FUNCTION 147e0da12 FUN_147e0da12 body=140 status=ok
// SIG undefined FUN_147e0da12(void)

void FUN_147e0da12(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14cb12b28;
  if (param_1 <= (int)DAT_14cb12b28) {
    if (DAT_14cb12b2c == 0) {
      uVar2 = 4;
      if (4 < DAT_14cb12b28) {
        uVar2 = DAT_14cb12b28;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14cb12b28 + ((ulonglong)((longlong)(int)DAT_14cb12b28 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    DAT_14cb12b2c = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cb12b20,param_1,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147e0daa0 FUN_147e0daa0 body=48 status=ok
// SIG undefined FUN_147e0daa0(void)

void FUN_147e0daa0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 147e0dad0 FUN_147e0dad0 body=64 status=ok
// SIG undefined FUN_147e0dad0(void)

void FUN_147e0dad0(void)

{
  if (DAT_14cb12bac != 0) {
    DAT_14cb12bac = 0;
    FUN_1446f8d3c(&DAT_14cb12ba0,DAT_14cb12ba8,0,0x40,0x10);
  }
  return;
}



// FUNCTION 147e0db10 FUN_147e0db10 body=147 status=ok
// SIG undefined FUN_147e0db10(void)

void FUN_147e0db10(longlong param_1,int param_2)

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



// FUNCTION 147e0dba4 FUN_147e0dba4 body=164 status=ok
// SIG undefined FUN_147e0dba4(void)

undefined8 * FUN_147e0dba4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[1] = 0x300000000;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &PTR_LAB_14ab40a80;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xf),4000);
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  param_1[0x15] = puVar1;
  param_1[0x14] = puVar1;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return param_1;
}



// FUNCTION 147e0dc48 FUN_147e0dc48 body=9 status=ok
// SIG undefined FUN_147e0dc48(void)

void FUN_147e0dc48(longlong param_1)

{
  FUN_1437d3804(param_1 + 0x10);
  return;
}



// FUNCTION 147e0dc52 FUN_147e0dc52 body=34 status=ok
// SIG undefined FUN_147e0dc52(void)

undefined8 FUN_147e0dc52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 147e0dc74 FUN_147e0dc74 body=73 status=ok
// SIG undefined FUN_147e0dc74(void)

void FUN_147e0dc74(longlong param_1,int param_2)

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



// FUNCTION 147e0dcbd FUN_147e0dcbd body=58 status=ok
// SIG undefined FUN_147e0dcbd(void)

void FUN_147e0dcbd(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x30);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147e0dcf8 FUN_147e0dcf8 body=147 status=ok
// SIG undefined FUN_147e0dcf8(void)

void FUN_147e0dcf8(longlong param_1,int param_2)

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



// FUNCTION 147e0dd8c FUN_147e0dd8c body=107 status=ok
// SIG undefined FUN_147e0dd8c(void)

void FUN_147e0dd8c(longlong *param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  longlong *plVar2;
  
  _Dst = (void *)(*param_1 + (longlong)(int)param_2 * 0x50);
  if (*(longlong *)(*param_1 + 0x10 + (longlong)(int)param_2 * 0x50) != 0) {
    plVar2 = (longlong *)((longlong)_Dst + 0x30);
    if (*(longlong **)((longlong)_Dst + 0x20) != (longlong *)0x0) {
      plVar2 = *(longlong **)((longlong)_Dst + 0x20);
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x50),(longlong)(int)(~param_2 + iVar1) * 0x50);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  return;
}



// FUNCTION 147e0ddf8 FUN_147e0ddf8 body=62 status=ok
// SIG undefined FUN_147e0ddf8(void)

void FUN_147e0ddf8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147e0de36(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,0x10);
  }
  return;
}



// FUNCTION 147e0de36 FUN_147e0de36 body=112 status=ok
// SIG undefined FUN_147e0de36(void)

ulonglong FUN_147e0de36(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x50) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147e0de70;
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
LAB_147e0de70:
  return param_2 & 0xffffffff;
}



// FUNCTION 147e0dea6 FUN_147e0dea6 body=25 status=ok
// SIG undefined FUN_147e0dea6(void)

void FUN_147e0dea6(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e0debb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 147e0dec0 FUN_147e0dec0 body=34 status=ok
// SIG undefined FUN_147e0dec0(void)

undefined8 FUN_147e0dec0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 147e0dee2 FUN_147e0dee2 body=132 status=ok
// SIG undefined FUN_147e0dee2(void)

void FUN_147e0dee2(longlong param_1,int param_2)

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



// FUNCTION 147e0df68 FUN_147e0df68 body=273 status=ok
// SIG undefined FUN_147e0df68(void)

int FUN_147e0df68(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  int iVar13;
  
  iVar6 = (int)param_1[1];
  lVar7 = (longlong)iVar6;
  if (lVar7 == 0) {
    iVar6 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar13 = 0;
    bVar12 = *plVar1 == *(longlong *)*param_2;
    iVar3 = 0;
    do {
      lVar10 = (longlong)iVar3;
      iVar8 = iVar3 + 1;
      if (iVar3 + 1 < iVar6) {
        iVar8 = iVar6;
      }
      plVar9 = plVar1 + lVar10 * 2 + 2;
      iVar4 = iVar3;
      lVar11 = lVar10;
      do {
        lVar11 = lVar11 + 1;
        iVar5 = iVar8;
        if (lVar7 <= lVar11) break;
        lVar2 = *plVar9;
        iVar4 = iVar4 + 1;
        plVar9 = plVar9 + 2;
        iVar5 = iVar4;
      } while (bVar12 == (lVar2 == *(longlong *)*param_2));
      iVar8 = iVar5 - iVar3;
      if (bVar12 == false) {
        if (iVar13 != iVar3) {
          memmove(plVar1 + (longlong)iVar13 * 2,plVar1 + lVar10 * 2,(longlong)iVar8 << 4);
        }
        iVar13 = iVar13 + iVar8;
      }
      else {
        FUN_147e0dc74(plVar1 + lVar10 * 2,iVar8);
      }
      bVar12 = (bool)(bVar12 ^ 1);
      iVar3 = iVar5;
    } while (lVar11 < lVar7);
    *(int *)(param_1 + 1) = iVar13;
    iVar6 = iVar6 - iVar13;
  }
  return iVar6;
}



// FUNCTION 147e0e07a FUN_147e0e07a body=151 status=ok
// SIG undefined FUN_147e0e07a(void)

bool FUN_147e0e07a(longlong param_1)

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
      thunk_FUN_1400020a8(lVar4,0x18);
    }
  }
  return lVar3 != 0;
}



// FUNCTION 147e0e112 FUN_147e0e112 body=36 status=ok
// SIG undefined FUN_147e0e112(void)

undefined8 FUN_147e0e112(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147e0e152 FUN_147e0e152 body=93 status=ok
// SIG undefined FUN_147e0e152(void)

void FUN_147e0e152(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab40cd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147e0e1b0 FUN_147e0e1b0 body=126 status=ok
// SIG undefined FUN_147e0e1b0(void)

void FUN_147e0e1b0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ab40cd0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e0e21f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e0e22e FUN_147e0e22e body=21 status=ok
// SIG undefined FUN_147e0e22e(void)

undefined8 FUN_147e0e22e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147e0e244 FUN_147e0e244 body=21 status=ok
// SIG undefined FUN_147e0e244(void)

void FUN_147e0e244(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_146244a94();
  FUN_1437d4c88(uVar1);
  return;
}



// FUNCTION 147e0e25a FUN_147e0e25a body=21 status=ok
// SIG undefined FUN_147e0e25a(void)

void FUN_147e0e25a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_146244a94();
  FUN_1437d492a(uVar1);
  return;
}



// FUNCTION 147e0e270 FUN_147e0e270 body=21 status=ok
// SIG undefined FUN_147e0e270(void)

void FUN_147e0e270(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_146244a94();
  FUN_1437d4b66(uVar1);
  return;
}



// FUNCTION 147e0e286 FUN_147e0e286 body=21 status=ok
// SIG undefined FUN_147e0e286(void)

void FUN_147e0e286(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_146244a94();
  FUN_14164e6d6(uVar1);
  return;
}



// FUNCTION 147e0e29c FUN_147e0e29c body=168 status=ok
// SIG undefined FUN_147e0e29c(void)

undefined8 * FUN_147e0e29c(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_1 + 0xa8) != (longlong *)0x0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x10))();
    (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x30))(*(longlong **)(param_1 + 0xa8),local_40);
    FUN_140056680(param_2,uVar1);
    *(undefined4 *)(param_2 + 2) = local_30;
    *(undefined4 *)((longlong)param_2 + 0x14) = local_2c;
    *(undefined4 *)(param_2 + 3) = local_28;
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147e0e346 FUN_147e0e346 body=127 status=ok
// SIG undefined FUN_147e0e346(void)

undefined8 * FUN_147e0e346(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb12c40) {
    FUN_144b3d300(&DAT_14cb12c40);
    if (DAT_14cb12c40 == -1) {
      FUN_140056680(&DAT_14cb12c48,L"GameplayMediaEncoderListener");
      atexit((_func_5014 *)&LAB_1437d683f);
      DAT_14cb12c38 = &DAT_14cb12c48;
      _Init_thread_footer(&DAT_14cb12c40);
    }
  }
  return DAT_14cb12c38;
}



// FUNCTION 147e0e3c6 FUN_147e0e3c6 body=306 status=ok
// SIG undefined FUN_147e0e3c6(void)

void FUN_147e0e3c6(longlong *param_1,uint param_2)

{
  size_t _Size;
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  void *_Dst;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((0 < (int)param_2) && ((int)param_1[1] != 0)) {
    iVar1 = *(int *)((longlong)param_1 + 0x14);
    iVar5 = iVar1 * param_2;
    _Size = (longlong)iVar5 * 4;
    lVar6 = -1;
    if (-1 < iVar5) {
      lVar6 = _Size + (_Size == 0);
    }
    _Dst = (void *)FUN_14001cc68(lVar6);
    memset(_Dst,0,_Size);
    if (0 < (longlong)iVar1) {
      lVar6 = *param_1;
      uVar3 = *(uint *)(param_1 + 3);
      lVar7 = 0;
      do {
        if (0 < (int)uVar3) {
          uVar4 = 0;
          do {
            uVar2 = (uVar4 & 0xffffffff) % (ulonglong)param_2;
            *(float *)((longlong)_Dst + uVar2 * 4 + lVar7 * (ulonglong)param_2 * 4) =
                 *(float *)(lVar6 + uVar4 * 4) +
                 *(float *)((longlong)_Dst + uVar2 * 4 + lVar7 * (ulonglong)param_2 * 4);
            uVar4 = uVar4 + 1;
          } while (uVar3 != uVar4);
        }
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + (ulonglong)uVar3 * 4;
      } while (lVar7 != iVar1);
    }
    *(uint *)(param_1 + 3) = param_2;
    *(int *)(param_1 + 2) = iVar5;
    FUN_14005ea14(param_1,iVar5);
    uVar3 = *(uint *)(param_1 + 2);
    lVar6 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar6 + uVar3;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar6) < uVar3) {
      FUN_14475e4ac(param_1);
      uVar3 = *(uint *)(param_1 + 2);
    }
    memcpy((void *)*param_1,_Dst,(longlong)(int)uVar3 << 2);
    if (_Dst != (void *)0x0) {
      thunk_FUN_1400020a8(_Dst);
      return;
    }
  }
  return;
}



// FUNCTION 147e0e4f8 FUN_147e0e4f8 body=113 status=ok
// SIG undefined FUN_147e0e4f8(void)

undefined8 * FUN_147e0e4f8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  FUN_14005ea14();
  uVar2 = *(uint *)(param_1 + 2);
  iVar1 = *(int *)(param_1 + 1);
  *(uint *)(param_1 + 1) = iVar1 + uVar2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
    FUN_14475e4ac(param_1);
    uVar2 = *(uint *)(param_1 + 2);
  }
  memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar2 << 2);
  return param_1;
}



// FUNCTION 147e0e56a FUN_147e0e56a body=197 status=ok
// SIG undefined FUN_147e0e56a(void)

undefined4 FUN_147e0e56a(longlong param_1)

{
  undefined4 uVar1;
  undefined1 auStack_68 [36];
  undefined1 local_44 [8];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(int *)(param_1 + 0x110) == 0) && (*(int *)(param_1 + 0x118) == 0)) {
    uVar1 = 0;
  }
  else {
    FUN_1437d2bae(*(undefined8 *)(param_1 + 0xd0),local_44,0);
    if (*(int *)(param_1 + 0x110) != 0) {
      local_38 = 20000000;
      local_34 = *(undefined4 *)(param_1 + 0x10c);
    }
    if (*(int *)(param_1 + 0x118) != 0) {
      local_3c = *(undefined4 *)(param_1 + 0x114);
      *(undefined8 *)(param_1 + 0xe8) = 0;
    }
    FUN_1437d2bfe(*(undefined8 *)(param_1 + 0xd0),0,local_44);
    LOCK();
    uVar1 = *(undefined4 *)(param_1 + 0x118);
    *(undefined4 *)(param_1 + 0x118) = 0;
    UNLOCK();
    LOCK();
    *(undefined4 *)(param_1 + 0x110) = 0;
    UNLOCK();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e0e630 FUN_147e0e630 body=92 status=ok
// SIG undefined FUN_147e0e630(void)

void FUN_147e0e630(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar2 + lVar4);
      (**(code **)*puVar3)(puVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x000147e0e685. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 147e0e68c FUN_147e0e68c body=394 status=ok
// SIG undefined FUN_147e0e68c(void)

void FUN_147e0e68c(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong _Size;
  undefined1 auStack_a8 [32];
  void *local_88;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 local_68;
  void *local_60;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78[0] = 1;
  local_58 = 0;
  local_50 = 0;
  uStack_4c = 0;
  lVar6 = *param_2;
  local_70 = *(undefined8 *)(lVar6 + 0x98);
  local_68 = 0;
  local_80 = *(uint *)(param_3 + 0x18);
  _Size = (ulonglong)local_80;
  _Src = *(void **)(param_3 + 8);
  local_88 = (void *)0x0;
  if ((int)local_80 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(_Size);
  }
  if (local_80 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1447a127e(&local_88,local_80,0);
    memcpy(local_88,_Src,_Size);
    lVar6 = *param_2;
    local_58 = local_80;
  }
  local_40 = *(undefined4 *)(param_1 + 200);
  local_44 = *(undefined4 *)(param_3 + 0x20);
  local_50 = CONCAT31(local_50._1_3_,*(undefined1 *)(param_3 + 0x1c));
  uStack_4c = (undefined4)*(undefined8 *)(lVar6 + 0xac);
  uStack_48 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0xac) >> 0x20);
  local_60 = local_88;
  local_54 = local_7c;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  iVar3 = *(int *)(param_1 + 0x50);
  if ((longlong)iVar3 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x48);
    lVar7 = 0;
    do {
      puVar4 = *(undefined8 **)(lVar6 + lVar7);
      (**(code **)*puVar4)(puVar4,local_78);
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar3 * 8 != lVar7);
  }
  (*(code *)**(undefined8 **)*param_2)();
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar5 = (longlong *)param_2[1];
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
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e0e818 FUN_147e0e818 body=38 status=ok
// SIG undefined FUN_147e0e818(void)

undefined8 FUN_147e0e818(undefined8 param_1,int param_2)

{
  FUN_14620a8fe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e0e83e FUN_147e0e83e body=93 status=ok
// SIG undefined FUN_147e0e83e(void)

void FUN_147e0e83e(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + 8);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  plVar5 = *(longlong **)(param_1 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147e0e890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147e0e89c FUN_147e0e89c body=105 status=ok
// SIG undefined FUN_147e0e89c(void)

ulonglong FUN_147e0e89c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = uVar4 * 8;
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3 * 8) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_147e0e8e3;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147e0e906(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 8) = *param_2;
LAB_147e0e8e3:
  return uVar4 & 0xffffffff;
}



// FUNCTION 147e0e906 FUN_147e0e906 body=132 status=ok
// SIG undefined FUN_147e0e906(void)

void FUN_147e0e906(longlong param_1,int param_2)

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



// FUNCTION 147e0e98c FUN_147e0e98c body=217 status=ok
// SIG undefined FUN_147e0e98c(void)

int FUN_147e0e98c(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int local_44;
  
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  local_44 = 0;
  if (lVar4 != 0) {
    plVar2 = (longlong *)*param_1;
    local_44 = 0;
    bVar9 = *plVar2 == *(longlong *)*param_2;
    iVar6 = 0;
    do {
      iVar3 = iVar6 + 1;
      if (iVar6 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      iVar7 = iVar6;
      lVar5 = (longlong)iVar6;
      do {
        lVar5 = lVar5 + 1;
        iVar8 = iVar3;
        if (lVar4 <= lVar5) break;
        iVar7 = iVar7 + 1;
        iVar8 = iVar7;
      } while (bVar9 == (plVar2[lVar5] == *(longlong *)*param_2));
      if (bVar9 == false) {
        if (local_44 != iVar6) {
          memmove(plVar2 + local_44,plVar2 + iVar6,(longlong)(iVar8 - iVar6) << 3);
        }
        local_44 = local_44 + (iVar8 - iVar6);
      }
      bVar9 = (bool)(bVar9 ^ 1);
      iVar6 = iVar8;
    } while (lVar5 < lVar4);
    *(int *)(param_1 + 1) = local_44;
    local_44 = iVar1 - local_44;
  }
  return local_44;
}



// FUNCTION 147e0ea66 FUN_147e0ea66 body=211 status=ok
// SIG undefined FUN_147e0ea66(void)

LPCRITICAL_SECTION
FUN_147e0ea66(LPCRITICAL_SECTION param_1,_LIST_ENTRY *param_2,undefined8 *param_3)

{
  DWORD DVar1;
  undefined8 uVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  longlong lVar4;
  _LIST_ENTRY *p_Var5;
  
  DVar1 = *(DWORD *)(param_3 + 1);
  uVar2 = *param_3;
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var3 = param_1[1].DebugInfo;
  *(undefined ***)p_Var3 = &PTR_LAB_14a5885e0;
  LOCK();
  UNLOCK();
  p_Var5 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar4 = DAT_14c758608 + 1;
  if (p_Var5 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var5 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  (p_Var3->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var3 = &PTR_FUN_14ab41290;
  (p_Var3->ProcessLocksList).Blink = param_2;
  p_Var3->EntryCount = (int)uVar2;
  p_Var3->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  p_Var3->Flags = DVar1;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 147e0eb3a FUN_147e0eb3a body=29 status=ok
// SIG undefined FUN_147e0eb3a(void)

undefined8 FUN_147e0eb3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e0eb74 FUN_147e0eb74 body=101 status=ok
// SIG undefined FUN_147e0eb74(void)

void FUN_147e0eb74(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5885e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab41290;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147e0ebda FUN_147e0ebda body=101 status=ok
// SIG undefined FUN_147e0ebda(void)

void FUN_147e0ebda(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5885e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab41290;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147e0ec40 FUN_147e0ec40 body=134 status=ok
// SIG undefined FUN_147e0ec40(void)

void FUN_147e0ec40(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a5885e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab41290;
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
                    /* WARNING: Could not recover jumptable at 0x000147e0ecb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e0ecd8 FUN_147e0ecd8 body=25 status=ok
// SIG undefined FUN_147e0ecd8(void)

undefined8 FUN_147e0ecd8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147e0ecf2 FUN_147e0ecf2 body=63 status=ok
// SIG undefined FUN_147e0ecf2(void)

void FUN_147e0ecf2(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_14620aa82(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_147e0ee76(param_1);
    return;
  }
  FUN_147e0ed32(param_1);
  FUN_14620aa82(param_1);
  return;
}



// FUNCTION 147e0ed32 FUN_147e0ed32 body=322 status=ok
// SIG undefined FUN_147e0ed32(void)

void FUN_147e0ed32(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 147e0ee76 FUN_147e0ee76 body=527 status=ok
// SIG undefined FUN_147e0ee76(void)

void FUN_147e0ee76(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
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
  uVar6 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar6 != uVar10);
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
      iVar11 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar4 = *local_90;
        lVar12 = (longlong)iVar11 * 0x20;
        uVar9 = *(ulonglong *)(lVar4 + lVar12);
        plVar7 = *(longlong **)(lVar4 + 8 + lVar12);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar7 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar3 = (int *)((longlong)plVar7 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        uVar6 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar9 = (longlong)(int)(uVar6 >> 0x10 ^ uVar6) & (longlong)(int)param_1[9] - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar4 + lVar12 + 0x1c) = iVar8;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar4 + lVar12 + 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar11
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar11 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e0f086 FUN_147e0f086 body=228 status=ok
// SIG undefined FUN_147e0f086(void)

int FUN_147e0f086(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    while (iVar3 != -1) {
      lVar4 = *param_3;
      plVar7 = (longlong *)param_3[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      lVar8 = (longlong)iVar3 * 0x20;
      lVar5 = *(longlong *)(*param_1 + lVar8);
      plVar6 = *(longlong **)(*param_1 + 8 + lVar8);
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
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      if (lVar5 == lVar4) {
        return iVar3;
      }
      iVar3 = *(int *)(*param_1 + 0x18 + lVar8);
    }
  }
  return -1;
}



// FUNCTION 147e0f16a FUN_147e0f16a body=388 status=ok
// SIG undefined FUN_147e0f16a(void)

void FUN_147e0f16a(longlong *param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar8 = *param_2;
    plVar7 = (longlong *)param_2[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      plVar4 = plVar7 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    uVar5 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar7 + uVar8 * 4);
    if (iVar6 != -1) {
      puVar10 = (ulonglong *)((longlong)plVar7 + uVar8 * 4);
      do {
        puVar9 = (ulonglong *)((longlong)iVar6 * 0x20 + *param_1);
        uVar8 = *param_2;
        plVar7 = (longlong *)param_2[1];
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        uVar3 = *puVar9;
        plVar4 = (longlong *)puVar9[1];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
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
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar7 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
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
        if (uVar3 == uVar8) {
          FUN_147e0f2ee(param_1,(int)*puVar10);
          break;
        }
        iVar6 = (int)puVar9[3];
        puVar10 = puVar9 + 3;
      } while (iVar6 != -1);
    }
  }
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147e0f1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147e0f2ee FUN_147e0f2ee body=116 status=ok
// SIG undefined FUN_147e0f2ee(void)

void FUN_147e0f2ee(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar3 = (longlong)param_2 * 0x20;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x1c + lVar3);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x18 + lVar6 * 0x20);
    } while (iVar4 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar6 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + lVar3 + 0x18);
  FUN_147e0e83e(lVar3 + *param_1);
  FUN_147e0f362(param_1,param_2);
  return;
}



// FUNCTION 147e0f362 FUN_147e0f362 body=114 status=ok
// SIG undefined FUN_147e0f362(void)

void FUN_147e0f362(longlong *param_1,int param_2)

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



// FUNCTION 147e0f3d4 FUN_147e0f3d4 body=404 status=ok
// SIG undefined FUN_147e0f3d4(void)

undefined4 * FUN_147e0f3d4(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147e0f56a(param_1,local_48);
  puVar3 = (ulonglong *)*param_3;
  puVar4 = (ulonglong *)param_3[1];
  *local_40 = *puVar3;
  uVar10 = puVar3[1];
  local_40[1] = uVar10;
  if (uVar10 != 0) {
    LOCK();
    *(int *)(uVar10 + 8) = *(int *)(uVar10 + 8) + 1;
    UNLOCK();
  }
  uVar10 = *puVar4;
  local_40[2] = uVar10;
  if (uVar10 != 0) {
    LOCK();
    *(int *)(uVar10 + 8) = *(int *)(uVar10 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar10 = *local_40;
  plVar5 = (longlong *)local_40[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  cVar7 = FUN_147e0f650(param_1,uVar8,local_40,&local_4c);
  uVar6 = local_4c;
  if (cVar7 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar9) {
      uVar10 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x1c) = uVar8;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_147e0ee76(param_1);
    }
  }
  *param_2 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e0f56a FUN_147e0f56a body=229 status=ok
// SIG undefined FUN_147e0f56a(void)

int * FUN_147e0f56a(longlong *param_1,int *param_2)

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



// FUNCTION 147e0f650 FUN_147e0f650 body=242 status=ok
// SIG undefined FUN_147e0f650(void)

undefined8 FUN_147e0f650(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_48 = *param_3;
    plVar4 = (longlong *)param_3[1];
    local_40 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      iVar10 = FUN_147e0f086(param_1,param_2,&local_48);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar10 = FUN_147e0f086(param_1);
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
    if (iVar10 != -1) {
      lVar5 = *param_1;
      lVar12 = (longlong)iVar10 * 0x20;
      FUN_147e0e83e(lVar5 + lVar12);
      uVar6 = *(undefined4 *)param_3;
      uVar7 = *(undefined4 *)((longlong)param_3 + 4);
      uVar8 = *(undefined4 *)(param_3 + 1);
      uVar9 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined8 *)(lVar5 + 0x10 + lVar12) = param_3[2];
      puVar3 = (undefined4 *)(lVar5 + lVar12);
      *puVar3 = uVar6;
      puVar3[1] = uVar7;
      puVar3[2] = uVar8;
      puVar3[3] = uVar9;
      FUN_147e0f362(param_1,*param_4);
      *param_4 = iVar10;
      uVar11 = 1;
      goto LAB_147e0f678;
    }
  }
  uVar11 = 0;
LAB_147e0f678:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e0f743 FUN_147e0f743 body=45 status=ok
// SIG undefined FUN_147e0f743(void)

void FUN_147e0f743(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 147e0f770 FUN_147e0f770 body=31 status=ok
// SIG undefined FUN_147e0f770(void)

undefined8 FUN_147e0f770(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e0f7ac FUN_147e0f7ac body=93 status=ok
// SIG undefined FUN_147e0f7ac(void)

void FUN_147e0f7ac(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab41340;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147e0f80a FUN_147e0f80a body=126 status=ok
// SIG undefined FUN_147e0f80a(void)

void FUN_147e0f80a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ab41340;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e0f879. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e0f888 FUN_147e0f888 body=21 status=ok
// SIG undefined FUN_147e0f888(void)

undefined8 FUN_147e0f888(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147e0f89e FUN_147e0f89e body=166 status=ok
// SIG undefined FUN_147e0f89e(void)

void FUN_147e0f89e(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  wchar_t *_Str;
  double dVar2;
  
  if (DAT_14cb12cc0 == 0) {
    lVar1 = FUN_14001cc68(0xe0,0x10);
    FUN_1464162f4(lVar1);
    DAT_14cb12cc0 = lVar1;
  }
  if (1 < (int)param_1[1]) {
    FUN_146816218(param_3,2,L"zero or one parameter expected: Start [max_duration_secs=30.0]");
    return;
  }
  if ((int)param_1[1] == 1) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    dVar2 = wcstod(_Str,(wchar_t **)0x0);
  }
  else {
    dVar2 = 30.0;
  }
  FUN_1437d7822(DAT_14cb12cc0,dVar2);
  return;
}



// FUNCTION 147e0f944 FUN_147e0f944 body=77 status=ok
// SIG undefined FUN_147e0f944(void)

void FUN_147e0f944(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  FUN_145ec773b(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_147e106de(param_1 + 0x38);
  }
                    /* WARNING: Could not recover jumptable at 0x000147e0f97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 147e0f992 FUN_147e0f992 body=607 status=ok
// SIG undefined FUN_147e0f992(void)

void FUN_147e0f992(longlong param_1,int *param_2)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  size_t _Size;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  int local_110;
  int iStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  void *local_100;
  ulonglong uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  int local_e0;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int local_c8;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  undefined8 local_a8;
  void *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  int local_80;
  int local_78;
  int iStack_74;
  longlong lStack_70;
  undefined8 local_68;
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(int *)(param_1 + 8) == 1) {
    if ((*(longlong *)(param_1 + 0x60) == 0) && (*param_2 == 1)) {
      if ((char)param_2[10] != '\x01') goto LAB_147e0f9d3;
      *(undefined8 *)(param_1 + 0x60) = 1;
    }
    local_68 = *(undefined8 *)(param_2 + 4);
    local_78 = *param_2;
    iStack_74 = param_2[1];
    lStack_70 = *(longlong *)(param_2 + 2);
    local_60 = (void *)0x0;
    local_58 = param_2[8];
    _Size = (size_t)local_58;
    pvVar2 = *(void **)(param_2 + 6);
    if (_Size == 0) {
      local_54 = 0;
      iVar3 = 0;
    }
    else {
      FUN_1447a127e(&local_60,local_58,0);
      memcpy(local_60,pvVar2,_Size);
      iVar3 = param_2[8];
      pvVar2 = *(void **)(param_2 + 6);
    }
    local_40 = param_2[0xe];
    local_50 = *(undefined8 *)(param_2 + 10);
    uStack_48 = *(undefined8 *)(param_2 + 0xc);
    local_a8 = *(undefined8 *)(param_2 + 4);
    local_b8 = *param_2;
    iStack_b4 = param_2[1];
    iStack_b0 = param_2[2];
    iStack_ac = param_2[3];
    local_a0 = (void *)0x0;
    uStack_98 = CONCAT44(uStack_98._4_4_,iVar3);
    if (iVar3 == 0) {
      pvVar2 = (void *)0x0;
      uVar1 = 0;
    }
    else {
      FUN_1447a127e(&local_a0,iVar3,0);
      memcpy(local_a0,pvVar2,(longlong)iVar3);
      pvVar2 = local_a0;
      uVar1 = (uint)uStack_98;
    }
    local_80 = param_2[0xe];
    local_90 = *(undefined8 *)(param_2 + 10);
    uStack_88 = *(undefined8 *)(param_2 + 0xc);
    local_118 = CONCAT44(iStack_b4,local_b8);
    local_a0 = (void *)0x0;
    uStack_98 = 0;
    local_c8 = param_2[0xe];
    local_d8 = param_2[10];
    iStack_d4 = param_2[0xb];
    iStack_d0 = param_2[0xc];
    iStack_cc = param_2[0xd];
    local_100 = (void *)0x0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    local_110 = iStack_b0;
    iStack_10c = iStack_ac;
    uStack_108 = (undefined4)local_a8;
    uStack_104 = local_a8._4_4_;
    uStack_f8 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      FUN_1447a127e(&local_100,uVar1,0);
      memcpy(local_100,pvVar2,(longlong)(int)uVar1);
    }
    local_e0 = local_c8;
    local_f0 = CONCAT44(iStack_d4,local_d8);
    uStack_e8 = CONCAT44(iStack_cc,iStack_d0);
    if (*(longlong *)(param_1 + 0x78) != 0) {
      lStack_70 = lStack_70 - *(longlong *)(param_1 + 0x78);
    }
    FUN_147e0fbf2(param_1 + 0x18,&local_78);
    if (local_100 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (pvVar2 != (void *)0x0) {
      FUN_1400020a8(pvVar2);
    }
    if (local_a0 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_60 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_147e0f9d3:
  if ((local_38 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e0fbf2 FUN_147e0fbf2 body=349 status=ok
// SIG undefined FUN_147e0fbf2(void)

void FUN_147e0fbf2(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  iVar8 = (int)param_1[8];
  iVar3 = *param_2;
  if (iVar8 != 0 || iVar3 != 0) {
    plVar1 = param_1 + 7;
    if (iVar8 == 0) {
      *(undefined4 *)(param_1 + 8) = 1;
      if (*(int *)((longlong)param_1 + 0x44) == 0) {
        FUN_147e10564(plVar1,0);
      }
      puVar4 = (undefined8 *)*plVar1;
      puVar4[2] = *(undefined8 *)(param_2 + 4);
      uVar6 = *(undefined8 *)(param_2 + 2);
      *puVar4 = *(undefined8 *)param_2;
      puVar4[1] = uVar6;
      puVar4[3] = 0;
      puVar4[3] = *(undefined8 *)(param_2 + 6);
      param_2[6] = 0;
      param_2[7] = 0;
      *(int *)(puVar4 + 4) = param_2[8];
      *(int *)((longlong)puVar4 + 0x24) = param_2[9];
      param_2[8] = 0;
      param_2[9] = 0;
      *(int *)(puVar4 + 7) = param_2[0xe];
      iVar8 = param_2[0xb];
      iVar3 = param_2[0xc];
      iVar5 = param_2[0xd];
      *(int *)(puVar4 + 5) = param_2[10];
      *(int *)((longlong)puVar4 + 0x2c) = iVar8;
      *(int *)(puVar4 + 6) = iVar3;
      *(int *)((longlong)puVar4 + 0x34) = iVar5;
    }
    else {
      bVar2 = *(byte *)(param_2 + 10);
      plVar10 = (longlong *)((longlong)iVar8 * 0x40 + *plVar1 + -0x38);
      lVar9 = 0;
      do {
        if (((int)plVar10[-1] == iVar3) || (*plVar10 <= *(longlong *)(param_2 + 2))) {
          iVar8 = iVar8 - (int)lVar9;
          goto LAB_147e0fd2e;
        }
        lVar9 = lVar9 + 1;
        plVar10 = plVar10 + -8;
      } while (iVar8 != lVar9);
      if (iVar3 == 1) {
        iVar8 = 0;
LAB_147e0fd2e:
        FUN_147e0fe72(plVar1,param_2,iVar8);
      }
      if ((iVar3 == 1 & bVar2) == 1 && (int)param_1[6] == 0) {
        while( true ) {
          if ((int)param_1[8] == 0) {
            lVar9 = 0;
          }
          else {
            lVar9 = *plVar1;
            lVar7 = (longlong)((int)param_1[8] + -1) * 0x40;
            lVar9 = (*(longlong *)(lVar9 + 0x10 + lVar7) + *(longlong *)(lVar9 + 8 + lVar7)) -
                    *(longlong *)(lVar9 + 8);
          }
          if (lVar9 <= *param_1) break;
          FUN_1437d84fa(param_1);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147e0fc29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



// FUNCTION 147e0fd50 FUN_147e0fd50 body=67 status=ok
// SIG undefined FUN_147e0fd50(void)

undefined8 * FUN_147e0fd50(longlong param_1,undefined8 *param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  *param_2 = 0;
  param_2[1] = 0;
  FUN_147e0ff2e(param_2,param_1 + 0x38);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return param_2;
}



// FUNCTION 147e0fd94 FUN_147e0fd94 body=205 status=ok
// SIG undefined FUN_147e0fd94(void)

void FUN_147e0fd94(longlong param_1)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x31) == '\x01') {
    *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 1;
    if (*(int *)(param_1 + 0x40) == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    else {
      puVar1 = *(undefined2 **)(param_1 + 0x38);
    }
    FUN_140002266(&local_28,L"%s_%llu.mp4",puVar1);
  }
  else {
    FUN_1449b8608(&local_28,param_1 + 0x38,L".mp4");
  }
  if ((longlong *)(param_1 + 0x48) == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x48) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x48) = local_28;
    *(undefined4 *)(param_1 + 0x50) = local_20;
    *(undefined4 *)(param_1 + 0x54) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e0fe72 FUN_147e0fe72 body=187 status=ok
// SIG undefined FUN_147e0fe72(void)

int FUN_147e0fe72(longlong *param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_147e10564(param_1,iVar2);
  }
  lVar5 = (longlong)param_3 * 0x40;
  memmove((void *)(*param_1 + lVar5 + 0x40),(void *)(*param_1 + lVar5),
          (ulonglong)(uint)(iVar2 - param_3) << 6);
  lVar3 = *param_1;
  uVar4 = param_2[1];
  *(undefined8 *)(lVar3 + lVar5) = *param_2;
  ((undefined8 *)(lVar3 + lVar5))[1] = uVar4;
  *(undefined8 *)(lVar3 + 0x10 + lVar5) = param_2[2];
  *(undefined8 *)(lVar3 + 0x18 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar5) = param_2[3];
  param_2[3] = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar5) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(lVar3 + 0x24 + lVar5) = *(undefined4 *)((longlong)param_2 + 0x24);
  param_2[4] = 0;
  *(undefined4 *)(lVar3 + 0x38 + lVar5) = *(undefined4 *)(param_2 + 7);
  uVar4 = param_2[6];
  puVar1 = (undefined8 *)(lVar3 + 0x28 + lVar5);
  *puVar1 = param_2[5];
  puVar1[1] = uVar4;
  return param_3;
}



// FUNCTION 147e0ff2e FUN_147e0ff2e body=95 status=ok
// SIG undefined FUN_147e0ff2e(void)

undefined8 * FUN_147e0ff2e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145ec773b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147e105ea(param_1,iVar1);
      FUN_147e1064c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147e0ff8e FUN_147e0ff8e body=38 status=ok
// SIG undefined FUN_147e0ff8e(void)

undefined8 FUN_147e0ff8e(undefined8 param_1,int param_2)

{
  FUN_1416294a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e0ffea FUN_147e0ffea body=29 status=ok
// SIG undefined FUN_147e0ffea(void)

undefined8 FUN_147e0ffea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e10008 FUN_147e10008 body=31 status=ok
// SIG undefined FUN_147e10008(void)

undefined8 FUN_147e10008(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e10044 FUN_147e10044 body=93 status=ok
// SIG undefined FUN_147e10044(void)

void FUN_147e10044(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab41a90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147e100a2 FUN_147e100a2 body=126 status=ok
// SIG undefined FUN_147e100a2(void)

void FUN_147e100a2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ab41a90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e10111. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e10120 FUN_147e10120 body=21 status=ok
// SIG undefined FUN_147e10120(void)

undefined8 FUN_147e10120(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147e10136 FUN_147e10136 body=172 status=ok
// SIG undefined FUN_147e10136(void)

undefined8 *
FUN_147e10136(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,undefined8 *param_4,
             undefined1 *param_5)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = &PTR_LAB_14ab41bb0;
  *(undefined1 *)(param_1 + 1) = *param_2;
  *(undefined1 *)((longlong)param_1 + 9) = *param_3;
  param_1[2] = 0;
  iVar1 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 4) = *param_5;
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
  param_1[5] = lVar3;
  return param_1;
}



// FUNCTION 147e101e2 FUN_147e101e2 body=57 status=ok
// SIG undefined FUN_147e101e2(void)

undefined8 * FUN_147e101e2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ab41bb0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e10244 FUN_147e10244 body=106 status=ok
// SIG undefined FUN_147e10244(void)

void FUN_147e10244(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab41bb0;
  FUN_147e10442(puVar1 + 1,param_1 + 8);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  *puVar1 = &PTR_FUN_14ab41b40;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[7] = uVar2;
  return;
}



// FUNCTION 147e102ae FUN_147e102ae body=106 status=ok
// SIG undefined FUN_147e102ae(void)

void FUN_147e102ae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab41bb0;
  FUN_147e10442(puVar1 + 1,param_1 + 8);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  *puVar1 = &PTR_FUN_14ab41b40;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[7] = uVar2;
  return;
}


