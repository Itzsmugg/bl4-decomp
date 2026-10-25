// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14890ac88 FUN_14890ac88 body=126 status=ok
// SIG undefined FUN_14890ac88(void)

void FUN_14890ac88(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b419980;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014890acf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14890ad06 FUN_14890ad06 body=21 status=ok
// SIG undefined FUN_14890ad06(void)

undefined8 FUN_14890ad06(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14890ad1c FUN_14890ad1c body=116 status=ok
// SIG undefined FUN_14890ad1c(void)

void FUN_14890ad1c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x58) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58 + 4) = uVar5;
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



// FUNCTION 14890ad90 FUN_14890ad90 body=322 status=ok
// SIG undefined FUN_14890ad90(void)

void FUN_14890ad90(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x54 + (longlong)iVar4 * 0x58) * 4) =
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



// FUNCTION 14890aed4 FUN_14890aed4 body=413 status=ok
// SIG undefined FUN_14890aed4(void)

void FUN_14890aed4(longlong *param_1,uint param_2)

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
      FUN_1446f4a44(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1447711aa(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x20 + lVar2 + -0x1c);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = iVar8 + -1;
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
        puVar5 = puVar5 + -8;
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



// FUNCTION 14890b072 FUN_14890b072 body=326 status=ok
// SIG undefined FUN_14890b072(void)

undefined4 * FUN_14890b072(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140f165d8(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  local_40[2] = *(uint *)(puVar1 + 1);
  *(undefined8 *)local_40 = *puVar1;
  *(undefined8 *)(local_40 + 4) = *puVar2;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  if (local_40[2] == 0) {
    uVar5 = *local_40;
  }
  else {
    uVar5 = FUN_144a78877(*local_40,local_40[2]);
  }
  cVar4 = FUN_140f16282(param_1,uVar5,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[7] = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      local_40[6] = *(uint *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_140f17470(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14890b1ba FUN_14890b1ba body=114 status=ok
// SIG undefined FUN_14890b1ba(void)

void FUN_14890b1ba(longlong *param_1,int param_2)

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



// FUNCTION 14890b22c FUN_14890b22c body=147 status=ok
// SIG undefined FUN_14890b22c(void)

void FUN_14890b22c(longlong param_1,int param_2)

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



// FUNCTION 14890b2c0 FUN_14890b2c0 body=114 status=ok
// SIG undefined FUN_14890b2c0(void)

void FUN_14890b2c0(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x48) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x48);
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



// FUNCTION 14890b332 FUN_14890b332 body=148 status=ok
// SIG undefined FUN_14890b332(void)

void FUN_14890b332(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  lVar5 = *(longlong *)(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar5 = param_1;
  }
  if (*(int *)(param_1 + 0xec) != 0) {
    *(int *)(lVar5 + (longlong)*(int *)(param_1 + 0xe8) * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar5 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)(param_1 + 0xec) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0xe8);
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 0xe8) = param_2;
  *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
  lVar5 = param_1 + 0xd0;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    lVar5 = *(longlong *)(param_1 + 0xd8);
  }
  iVar4 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar4 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14890b3c6 FUN_14890b3c6 body=64 status=ok
// SIG undefined FUN_14890b3c6(void)

undefined8 * FUN_14890b3c6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b419a30;
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



// FUNCTION 14890b40a FUN_14890b40a body=81 status=ok
// SIG undefined FUN_14890b40a(void)

undefined8 FUN_14890b40a(longlong param_1)

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



// FUNCTION 14890b462 FUN_14890b462 body=89 status=ok
// SIG undefined FUN_14890b462(void)

bool FUN_14890b462(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14890b4ad;
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
LAB_14890b4ad:
  return lVar6 == param_2;
}



// FUNCTION 14890b4d8 FUN_14890b4d8 body=118 status=ok
// SIG undefined FUN_14890b4d8(void)

void FUN_14890b4d8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b419a30;
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



// FUNCTION 14890b54e FUN_14890b54e body=118 status=ok
// SIG undefined FUN_14890b54e(void)

void FUN_14890b54e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b419a30;
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



// FUNCTION 14890b5c4 FUN_14890b5c4 body=156 status=ok
// SIG undefined FUN_14890b5c4(void)

void FUN_14890b5c4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b419a30;
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
                    /* WARNING: Could not recover jumptable at 0x00014890b650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14890b660 FUN_14890b660 body=94 status=ok
// SIG undefined FUN_14890b660(void)

void FUN_14890b660(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014890b6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014890b6b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 14890b6be FUN_14890b6be body=93 status=ok
// SIG undefined FUN_14890b6be(void)

ulonglong FUN_14890b6be(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14890b710:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14890b710;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 14890b71c FUN_14890b71c body=122 status=ok
// SIG undefined FUN_14890b71c(void)

longlong FUN_14890b71c(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_14890b796(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14890b796 FUN_14890b796 body=117 status=ok
// SIG undefined FUN_14890b796(void)

undefined8 * FUN_14890b796(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145a1ab9e(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 5);
    }
  }
  return param_1;
}



// FUNCTION 14890b80c FUN_14890b80c body=108 status=ok
// SIG undefined FUN_14890b80c(void)

longlong FUN_14890b80c(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  uVar1 = FUN_14479d2ce(param_1 + 8);
  plVar2 = (longlong *)FUN_14895e252(uVar1);
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if ((-1 < (short)param_3) && (*(char *)(param_2 + 0x538) == '\x01')) {
      lVar3 = (**(code **)(*plVar2 + 0x308))(plVar2,param_3);
      if (lVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014890b86b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar3 = (**(code **)(*plVar2 + 0x310))(plVar2,param_3);
        return lVar3;
      }
    }
  }
  return lVar3;
}



// FUNCTION 14890b878 FUN_14890b878 body=54 status=ok
// SIG undefined FUN_14890b878(void)

undefined8 * FUN_14890b878(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14890d4e0();
  if (plVar1 == (longlong *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0xc);
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 14890b8ae FUN_14890b8ae body=509 status=ok
// SIG undefined FUN_14890b8ae(void)

longlong FUN_14890b8ae(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined ***pppuVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  undefined1 local_89;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong *local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x80);
    lVar5 = (longlong)*(int *)(param_1 + 0x88) * 0x30;
    do {
      plVar1 = (longlong *)FUN_1409c4b9a(lVar4);
      if (plVar1 != (longlong *)0x0) {
        lVar2 = (**(code **)(*plVar1 + 0x30))(plVar1);
        if (lVar2 != 0) {
          local_98 = 0;
          local_78 = (undefined ***)0x0;
          local_68 = &PTR_LAB_14b41a910;
          local_60 = &local_98;
          local_88[0] = &LAB_143df359c;
          local_89 = 0;
          local_58 = param_2;
          FUN_140c88625(&local_89,lVar2,local_88);
          if (local_88[0] != (undefined1 *)0x0) {
            pppuVar3 = local_78;
            if (local_78 == (undefined ***)0x0) {
              pppuVar3 = &local_68;
            }
            (*(code *)(*pppuVar3)[2])();
          }
          lVar2 = local_98;
          if (local_98 != 0) goto LAB_14890ba7e;
        }
      }
      lVar4 = lVar4 + 0x30;
      lVar5 = lVar5 + -0x30;
    } while (lVar5 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0xa8) != 0) {
    lVar4 = *(longlong *)(param_1 + 0xa0);
    local_a0 = (longlong)*(int *)(param_1 + 0xa8) * 0x130 + lVar4;
    do {
      if ((longlong)*(int *)(lVar4 + 0x20) != 0) {
        lVar6 = *(longlong *)(lVar4 + 0x18) + 0x88;
        lVar5 = (longlong)*(int *)(lVar4 + 0x20) * 0x98;
        do {
          local_98 = 0;
          local_78 = (undefined ***)0x0;
          local_68 = &PTR_LAB_14b41a930;
          local_60 = &local_98;
          local_88[0] = &LAB_143df3608;
          local_89 = 0;
          local_58 = param_2;
          FUN_140c88625(&local_89,lVar6,local_88);
          if (local_88[0] != (undefined1 *)0x0) {
            pppuVar3 = local_78;
            if (local_78 == (undefined ***)0x0) {
              pppuVar3 = &local_68;
            }
            (*(code *)(*pppuVar3)[2])();
          }
          lVar2 = local_98;
          if (local_98 != 0) goto LAB_14890ba7e;
          lVar6 = lVar6 + 0x98;
          lVar5 = lVar5 + -0x98;
        } while (lVar5 != 0);
      }
      lVar4 = lVar4 + 0x130;
    } while (lVar4 != local_a0);
  }
  lVar2 = 0;
LAB_14890ba7e:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14890baac FUN_14890baac body=14 status=ok
// SIG undefined FUN_14890baac(void)

undefined8 FUN_14890baac(longlong param_1)

{
  if (0 < *(int *)(param_1 + 0x78)) {
    return *(undefined8 *)(param_1 + 0x70);
  }
  return 0;
}



// FUNCTION 14890baba FUN_14890baba body=269 status=ok
// SIG undefined FUN_14890baba(void)

void FUN_14890baba(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  char local_88;
  undefined7 uStack_87;
  undefined4 local_80;
  undefined1 local_78 [24];
  longlong local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong)*(int *)(param_1 + 0x98) != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x98) * 0x48;
    lVar3 = *(longlong *)(param_1 + 0x90) + 0x10;
    do {
      FUN_14096c63a(lVar3,&local_88);
      if (local_88 == '\x01') {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_140f12bd2(param_2,iVar1);
        }
        puVar2 = (undefined8 *)((longlong)iVar1 * 0x38 + *param_2);
        *(undefined2 *)puVar2 = 0;
        *(undefined8 *)((longlong)puVar2 + 4) = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *(undefined4 *)(puVar2 + 4) = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        *(undefined4 *)(puVar2 + 1) = local_80;
        *puVar2 = CONCAT71(uStack_87,local_88);
        FUN_1447715ec(puVar2 + 2,local_78);
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 0x48;
      lVar4 = lVar4 + -0x48;
    } while (lVar4 != 0);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14890bbc8 FUN_14890bbc8 body=132 status=ok
// SIG undefined FUN_14890bbc8(void)

void FUN_14890bbc8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  local_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_3c = 0xffffffff00000080;
  local_34 = 0;
  local_28 = 0;
  local_20 = 0;
  FUN_1448bf83d(0,param_2,&local_68,1);
  local_20 = 0;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_1401bcc92(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14890bc4e FUN_14890bc4e body=52 status=ok
// SIG undefined FUN_14890bc4e(void)

undefined4 FUN_14890bc4e(longlong param_1)

{
  longlong lVar1;
  
  if ((longlong)*(int *)(param_1 + 0x68) != 0) {
    lVar1 = 0;
    do {
      if (*(char *)(*(longlong *)(param_1 + 0x60) + 0x40 + lVar1) == '\x01') {
        return *(undefined4 *)(*(longlong *)(param_1 + 0x60) + lVar1);
      }
      lVar1 = lVar1 + 0xc0;
    } while ((longlong)*(int *)(param_1 + 0x68) * 0xc0 != lVar1);
  }
  return 1;
}



// FUNCTION 14890bc92 FUN_14890bc92 body=578 status=ok
// SIG undefined FUN_14890bc92(void)

void FUN_14890bc92(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong *local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar7 = FUN_14890bed6();
  if ((lVar7 != 0) && (iVar4 = *(int *)(lVar7 + 0x18), (longlong)iVar4 != 0)) {
    lVar7 = *(longlong *)(lVar7 + 0x10);
    local_78 = (longlong *)(param_1 + 0x50);
    local_80 = param_1 + 0x18;
    lVar9 = 0;
    do {
      plVar10 = *(longlong **)(lVar7 + lVar9);
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,&local_68);
        plVar1 = local_60;
        plVar10 = local_68;
        if (local_68 != (longlong *)0x0) {
          if (local_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
            UNLOCK();
          }
          iVar5 = *(int *)(param_1 + 0x58);
          *(uint *)(param_1 + 0x58) = iVar5 + 1U;
          if (*(uint *)(param_1 + 0x5c) < iVar5 + 1U) {
            FUN_146557a24(local_78,iVar5);
          }
          lVar6 = *local_78;
          *(longlong **)(lVar6 + (longlong)iVar5 * 0x10) = plVar10;
          *(longlong **)(lVar6 + 8 + (longlong)iVar5 * 0x10) = plVar1;
          if (plVar1 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
            UNLOCK();
            LOCK();
            plVar10 = plVar1 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
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
          plVar1 = local_68;
          uVar8 = *(undefined8 *)(lVar7 + lVar9);
          plVar10 = *(longlong **)(lVar7 + 8 + lVar9);
          if (plVar10 == (longlong *)0x0) {
            local_50 = (longlong *)0x0;
            local_58 = uVar8;
            uVar8 = FUN_14479d2ce(local_80);
            FUN_143defa18(plVar1,uVar8,&local_58);
          }
          else {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
            LOCK();
            plVar3 = plVar10 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar2 = (int *)((longlong)plVar10 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
            local_58 = uVar8;
            local_50 = plVar10;
            uVar8 = FUN_14479d2ce(local_80);
            FUN_143defa18(plVar1,uVar8,&local_58);
            LOCK();
            plVar1 = plVar10 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
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
          (**(code **)(*local_68 + 0x10))();
          plVar10 = local_68 + 4;
          FUN_14891239a(&local_58,param_1);
          FUN_1448b6402(plVar10,local_70,&local_58);
          FUN_1449db362(&local_58);
        }
        plVar10 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_60 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
      }
      lVar9 = lVar9 + 0x18;
    } while ((longlong)iVar4 * 0x18 != lVar9);
  }
  FUN_14890bf24(param_1);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14890bed6 FUN_14890bed6 body=78 status=ok
// SIG undefined FUN_14890bed6(void)

longlong * FUN_14890bed6(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_14652fa8c();
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



// FUNCTION 14890bf24 FUN_14890bf24 body=146 status=ok
// SIG undefined FUN_14890bf24(void)

void FUN_14890bf24(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = FUN_14890bed6();
  if (lVar3 != 0) {
    iVar1 = *(int *)(param_1 + 0x58);
    if (*(char *)(lVar3 + 8) == '\0') {
      cVar2 = '\x01';
      if (iVar1 != 0) {
        lVar3 = 0;
        do {
          if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + lVar3) + 0x38) == '\0') {
            cVar2 = '\0';
            break;
          }
          lVar3 = lVar3 + 0x10;
        } while ((longlong)iVar1 * 0x10 != lVar3);
      }
      if (*(char *)(param_1 + 0x38) != cVar2) {
        *(char *)(param_1 + 0x38) = cVar2;
        goto LAB_14890bf95;
      }
    }
    else {
      if (iVar1 != 0) {
        lVar3 = 0;
        do {
          if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + lVar3) + 0x38) == '\x01') {
            cVar2 = '\x01';
            goto LAB_14890bf64;
          }
          lVar3 = lVar3 + 0x10;
        } while ((longlong)iVar1 * 0x10 != lVar3);
      }
      cVar2 = '\0';
LAB_14890bf64:
      if (*(char *)(param_1 + 0x38) != cVar2) {
        *(char *)(param_1 + 0x38) = cVar2;
LAB_14890bf95:
        FUN_1447f69b6(param_1 + 0x20);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14890bfb6 FUN_14890bfb6 body=116 status=ok
// SIG undefined FUN_14890bfb6(void)

void FUN_14890bfb6(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x50);
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar4 = 0;
    do {
      (**(code **)(**(longlong **)(lVar3 + lVar4) + 0x18))();
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
    uVar2 = *(undefined4 *)(param_1 + 0x58);
    lVar3 = *(longlong *)(param_1 + 0x50);
  }
  FUN_140e02d42(lVar3,uVar2);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) == 0) {
    return;
  }
  FUN_1457b2512(param_1 + 0x50,0);
  return;
}



// FUNCTION 14890c02a FUN_14890c02a body=158 status=ok
// SIG undefined FUN_14890c02a(void)

longlong * FUN_14890c02a(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14891286d();
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_1489128f6(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14890c0d6 FUN_14890c0d6 body=472 status=ok
// SIG undefined FUN_14890c0d6(void)

void FUN_14890c0d6(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_108 [32];
  undefined8 local_e8 [2];
  uint local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined1 local_c8 [4];
  undefined8 local_c4;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined2 local_47;
  undefined1 local_45;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar3 = FUN_14890c2b0();
  if (lVar3 == 0) goto LAB_14890c18a;
  lVar1 = param_1 + 0x50;
  *(undefined1 *)(param_1 + 0x50) = 10;
  FUN_140c25b54(lVar1);
  local_d8 = (uint)*(undefined8 *)(lVar3 + 8);
  uStack_d4 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 8) >> 0x20);
  FUN_1401533ba(local_34,&local_d8,1);
  FUN_144928d62(param_1 + 0x60,1,local_34);
  local_38 = DAT_14cb88980;
  local_40 = DAT_14cb88978;
  FUN_144928d62(param_1 + 0x60,4);
  cVar2 = FUN_140114204(lVar1);
  if ((cVar2 == '\0') || (*(longlong *)(param_1 + 0x88) != 0)) goto LAB_14890c18a;
  local_d8 = local_d8 & 0xffffff00;
  uStack_d4 = 0;
  uStack_d0 = 0;
  local_cc = 0;
  local_c8[0] = 0;
  local_c4 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  iStack_b0 = 0;
  local_a8 = 0xc69c4000;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_47 = 1;
  local_45 = 0;
  local_44 = 0;
  FUN_14890c2fe(local_e8,param_1);
  FUN_144a450dc(&uStack_b8,local_e8);
  FUN_1449db362(local_e8);
  plVar4 = (longlong *)FUN_14479d2ce(param_1 + 0x18);
  if (plVar4 == (longlong *)0x0) {
LAB_14890c242:
    local_44 = 2;
  }
  else {
    lVar3 = (**(code **)(*plVar4 + 0x2b0))(plVar4);
    if (lVar3 == 0) goto LAB_14890c242;
    FUN_140983ba6(lVar1,lVar3,&local_d8);
  }
  plVar4 = (longlong *)CONCAT44(uStack_b4,uStack_b8);
  if (plVar4 == (longlong *)0x0 || iStack_b0 == 0) {
    local_e8[0] = 0;
  }
  else {
    (**(code **)(*plVar4 + 0x38))(plVar4,local_e8);
  }
  *(undefined8 *)(param_1 + 0x88) = local_e8[0];
  FUN_14890c486(param_1,local_c8);
  FUN_1409838b8(&local_d8);
LAB_14890c18a:
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14890c2b0 FUN_14890c2b0 body=78 status=ok
// SIG undefined FUN_14890c2b0(void)

longlong * FUN_14890c2b0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_14652fe02();
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



// FUNCTION 14890c2fe FUN_14890c2fe body=381 status=ok
// SIG undefined FUN_14890c2fe(void)

longlong * FUN_14890c2fe(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_14890c409:
    *puVar3 = &PTR_LAB_14b3e6310;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41ab00;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = &LAB_14890c47c;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_14890c409;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b3e6310;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41ab00;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = &LAB_14890c47c;
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
  return param_1;
}



// FUNCTION 14890c486 FUN_14890c486 body=183 status=ok
// SIG undefined FUN_14890c486(void)

void FUN_14890c486(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_14890c2b0();
  if (lVar2 != 0) {
    FUN_1403a0728(param_2,&local_30);
    if (DAT_14cb88708 == local_30) {
      cVar1 = '\0';
    }
    else if (DAT_14cb88710 == local_30) {
      cVar1 = '\x01';
    }
    else {
      cVar1 = (DAT_14cb88718 == local_30) * '\x02';
    }
    if (*(char *)(lVar2 + 0x20) == '\x01') {
      bVar3 = (byte)(cVar1 - 1U) < 2;
      goto LAB_14890c4f8;
    }
    if (*(char *)(lVar2 + 0x20) == '\0') {
      bVar3 = cVar1 == '\x02';
      goto LAB_14890c4f8;
    }
  }
  bVar3 = false;
LAB_14890c4f8:
  if ((bool)*(char *)(param_1 + 0x38) != bVar3) {
    *(bool *)(param_1 + 0x38) = bVar3;
    FUN_1447f69b6(param_1 + 0x20);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14890c53e FUN_14890c53e body=113 status=ok
// SIG undefined FUN_14890c53e(void)

void FUN_14890c53e(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar1 = param_1 + 0x50;
  cVar2 = FUN_140114204(lVar1);
  if ((cVar2 != '\0') && (*(longlong *)(param_1 + 0x88) != 0)) {
    plVar3 = (longlong *)FUN_14479d2ce(param_1 + 0x18);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x2b0))(plVar3);
      if (lVar4 != 0) {
        FUN_140825b72(lVar1,*(undefined8 *)(param_1 + 0x88),lVar4,0);
      }
    }
    FUN_141543068(lVar1);
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  return;
}



// FUNCTION 14890c5b0 FUN_14890c5b0 body=158 status=ok
// SIG undefined FUN_14890c5b0(void)

longlong * FUN_14890c5b0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14891325a();
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_148913334(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14890c652 FUN_14890c652 body=902 status=ok
// SIG undefined FUN_14890c652(void)

void FUN_14890c652(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined1 auStack_158 [40];
  undefined8 local_130 [2];
  undefined1 local_120 [4];
  undefined8 local_11c;
  undefined4 local_114;
  undefined1 local_110 [4];
  undefined8 local_10c;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_90;
  undefined2 local_8f;
  undefined1 local_8d;
  undefined4 local_8c;
  int local_84;
  undefined8 local_80;
  undefined2 local_78;
  undefined2 uStack_76;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar2 = FUN_14890c9da();
  if (lVar2 == 0) goto LAB_14890c6b6;
  lVar4 = *(longlong *)(lVar2 + 0x10);
  if (lVar4 == 0) {
    uVar3 = FUN_14060ed7a();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(lVar2 + 0x10) = lVar4;
  }
  lVar5 = *(longlong *)(lVar2 + 0x18);
  if (lVar5 == 0) {
    if ((lVar4 == 0) || (*(longlong *)(lVar2 + 8) == 0)) goto LAB_14890c6b6;
    plVar6 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar6 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar1 == '\0')) {
      *(undefined8 *)(lVar2 + 0x18) = 0;
      goto LAB_14890c6b6;
    }
    uVar3 = (**(code **)(*plVar6 + 0x110))(plVar6);
    lVar5 = FUN_144aff482(uVar3,(longlong *)(lVar2 + 8));
    *(longlong *)(lVar2 + 0x18) = lVar5;
    if (lVar5 == 0) goto LAB_14890c6b6;
  }
  if ((*(char *)(lVar5 + 0x750) != '\0') || (lVar2 = FUN_1406b1d14(lVar5,lVar2 + 0x20), lVar2 == 0))
  goto LAB_14890c6b6;
  if (*(char *)(lVar2 + 0x409) == '\0') {
    plVar6 = (longlong *)FUN_1401bd7a2(lVar2);
    piVar9 = (int *)&DAT_14c948618;
    puVar8 = (undefined8 *)((longlong)&DAT_14c948618 + 4);
    if ((plVar6 != (longlong *)0x0) &&
       (cVar1 = (**(code **)(*plVar6 + 0x50))(plVar6), cVar1 != '\0')) goto LAB_14890c766;
  }
  else {
LAB_14890c766:
    if (*(char *)(lVar2 + 0x40b) == '\x01') {
      piVar9 = (int *)(lVar2 + 0x410);
      puVar8 = (undefined8 *)(lVar2 + 0x414);
    }
    else {
      piVar9 = (int *)(lVar2 + 0x380);
      puVar8 = (undefined8 *)(lVar2 + 900);
    }
  }
  if (*piVar9 != 0) {
    local_80 = *puVar8;
    local_78 = 0xb;
    uStack_74 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_84 = *piVar9;
    FUN_144928d62(&local_68,0);
    uVar3 = FUN_14479d2ce(param_1 + 0x18);
    puVar7 = *(undefined4 **)(lVar2 + 8);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = &DAT_14c9485f0;
    }
    FUN_144a7660c(puVar7,local_120,1);
    puVar7 = *(undefined4 **)(lVar5 + 8);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = &DAT_14c9485f0;
    }
    FUN_144a7660c(puVar7,local_130,1);
    FUN_140d84843(&local_78,local_130,local_120,uVar3);
    cVar1 = FUN_140114204(&local_78);
    if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x88) == 0)) {
      *(undefined4 *)(param_1 + 0x58) = uStack_70;
      *(ulonglong *)(param_1 + 0x50) = CONCAT44(uStack_74,CONCAT22(uStack_76,local_78));
      FUN_1447715ec(param_1 + 0x60,&local_68);
      local_120[0] = 0;
      local_11c = 0;
      local_114 = 0;
      local_110[0] = 0;
      local_10c = 0;
      uStack_104 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      iStack_f8 = 0;
      local_f0 = 0xc69c4000;
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      local_8f = 1;
      local_8d = 0;
      local_8c = 0;
      FUN_14890ca28(local_130,param_1);
      FUN_144a450dc(&uStack_100,local_130);
      FUN_1449db362(local_130);
      plVar6 = (longlong *)FUN_14479d2ce(param_1 + 0x18);
      if ((plVar6 == (longlong *)0x0) ||
         (lVar2 = (**(code **)(*plVar6 + 0x2b0))(plVar6), lVar2 == 0)) {
        local_8c = 2;
      }
      else {
        FUN_140983ba6(param_1 + 0x50,lVar2,local_120);
      }
      plVar6 = (longlong *)CONCAT44(uStack_fc,uStack_100);
      if (plVar6 == (longlong *)0x0 || iStack_f8 == 0) {
        local_130[0] = 0;
      }
      else {
        (**(code **)(*plVar6 + 0x38))(plVar6,local_130);
      }
      *(undefined8 *)(param_1 + 0x88) = local_130[0];
      FUN_14890cbb0(param_1,local_110);
      FUN_1409838b8(local_120);
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
LAB_14890c6b6:
  if ((local_40 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14890c9da FUN_14890c9da body=78 status=ok
// SIG undefined FUN_14890c9da(void)

longlong * FUN_14890c9da(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_14652ff5e();
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



// FUNCTION 14890ca28 FUN_14890ca28 body=381 status=ok
// SIG undefined FUN_14890ca28(void)

longlong * FUN_14890ca28(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_14890cb33:
    *puVar3 = &PTR_LAB_14b3e6310;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41ab90;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = &LAB_14890cba6;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_14890cb33;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b3e6310;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41ab90;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = &LAB_14890cba6;
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
  return param_1;
}



// FUNCTION 14890cbb0 FUN_14890cbb0 body=195 status=ok
// SIG undefined FUN_14890cbb0(void)

void FUN_14890cbb0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = FUN_14890c9da();
  if (lVar2 != 0) {
    cVar1 = *(char *)(lVar2 + 0x2c);
    if (cVar1 == '\x02') {
      FUN_1403a0728(param_2,&local_28);
      bVar3 = local_28 == DAT_14cb88848;
      goto LAB_14890cc06;
    }
    if (cVar1 == '\x01') {
      FUN_1403a0728(param_2,&local_28);
      bVar3 = local_28 == DAT_14cb88840;
      goto LAB_14890cc06;
    }
    if (cVar1 == '\0') {
      FUN_1403a0728(param_2,&local_28);
      bVar3 = local_28 == DAT_14cb88918;
      goto LAB_14890cc06;
    }
  }
  bVar3 = false;
LAB_14890cc06:
  if ((bool)*(char *)(param_1 + 0x38) != bVar3) {
    *(bool *)(param_1 + 0x38) = bVar3;
    FUN_1447f69b6(param_1 + 0x20);
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14890cc74 FUN_14890cc74 body=113 status=ok
// SIG undefined FUN_14890cc74(void)

void FUN_14890cc74(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar1 = param_1 + 0x50;
  cVar2 = FUN_140114204(lVar1);
  if ((cVar2 != '\0') && (*(longlong *)(param_1 + 0x88) != 0)) {
    plVar3 = (longlong *)FUN_14479d2ce(param_1 + 0x18);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x2b0))(plVar3);
      if (lVar4 != 0) {
        FUN_140825b72(lVar1,*(undefined8 *)(param_1 + 0x88),lVar4,0);
      }
    }
    FUN_141543068(lVar1);
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  return;
}



// FUNCTION 14890cce6 FUN_14890cce6 body=158 status=ok
// SIG undefined FUN_14890cce6(void)

longlong * FUN_14890cce6(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14891372c();
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_148913806(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14890cd88 FUN_14890cd88 body=78 status=ok
// SIG undefined FUN_14890cd88(void)

void FUN_14890cd88(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((param_2 == 0) || (lVar1 = FUN_1464f8864(), lVar1 == 0)) ||
     (*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38))) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    if (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30) {
      lVar2 = param_2;
    }
  }
  FUN_140005f6c(param_1,lVar2,0,0);
  return;
}



// FUNCTION 14890cdd6 FUN_14890cdd6 body=84 status=ok
// SIG undefined FUN_14890cdd6(void)

longlong * FUN_14890cdd6(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14890ce2a FUN_14890ce2a body=159 status=ok
// SIG undefined FUN_14890ce2a(void)

undefined8 * FUN_14890ce2a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar4 = FUN_1459aa176();
  uVar3 = FUN_1403d4194(uVar4);
  FUN_140d2f368(&local_28,uVar3);
  *param_1 = local_28;
  param_1[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14890cecc FUN_14890cecc body=34 status=ok
// SIG undefined FUN_14890cecc(void)

void FUN_14890cecc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1457a33b2();
  FUN_1457a58b2(param_1,param_3);
  return;
}



// FUNCTION 14890cef6 FUN_14890cef6 body=17 status=ok
// SIG undefined FUN_14890cef6(void)

void FUN_14890cef6(longlong param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x30);
  *param_2 = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14890cf08 FUN_14890cf08 body=47 status=ok
// SIG undefined FUN_14890cf08(void)

void FUN_14890cf08(undefined8 param_1,longlong *param_2)

{
  if (*param_2 == 0) {
    return;
  }
  FUN_1447f69b6(*param_2 + 0x108);
  FUN_145772c12(*param_2);
  return;
}



// FUNCTION 14890cf38 FUN_14890cf38 body=943 status=ok
// SIG undefined FUN_14890cf38(void)

void FUN_14890cf38(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_c8 [34];
  byte local_a6;
  byte local_a5;
  int local_a4;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_64;
  int local_5c;
  ulonglong local_58;
  int local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar3 = FUN_144a8940a(param_1 + 0x28,(undefined8 *)(param_2 + 0x10));
  if (cVar3 != '\0') {
    if (*(char *)(param_2 + 0x40) == '\x01') {
      iVar9 = *(int *)(param_1 + 0x110);
      lVar18 = (longlong)iVar9;
      *(uint *)(param_1 + 0x110) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0x114) < iVar9 + 1U) {
        FUN_1489152b8((longlong *)(param_1 + 0x108),iVar9);
      }
      lVar10 = *(longlong *)(param_1 + 0x108);
      *(undefined ***)(lVar10 + lVar18 * 0x48) = &PTR_FUN_14b3ca180;
      *(undefined1 *)(lVar10 + 8 + lVar18 * 0x48) = *(undefined1 *)(param_2 + 8);
      *(undefined ***)(lVar10 + lVar18 * 0x48) = &PTR_FUN_14b3caf90;
      *(undefined4 *)(lVar10 + 0x18 + lVar18 * 0x48) = *(undefined4 *)(param_2 + 0x18);
      *(undefined8 *)(lVar10 + 0x10 + lVar18 * 0x48) = *(undefined8 *)(param_2 + 0x10);
      *(undefined4 *)(lVar10 + 0x24 + lVar18 * 0x48) = *(undefined4 *)(param_2 + 0x24);
      *(undefined8 *)(lVar10 + 0x1c + lVar18 * 0x48) = *(undefined8 *)(param_2 + 0x1c);
      *(undefined4 *)(lVar10 + 0x30 + lVar18 * 0x48) = *(undefined4 *)(param_2 + 0x30);
      *(undefined8 *)(lVar10 + 0x28 + lVar18 * 0x48) = *(undefined8 *)(param_2 + 0x28);
      *(undefined4 *)(lVar10 + 0x3c + lVar18 * 0x48) = *(undefined4 *)(param_2 + 0x3c);
      *(undefined8 *)(lVar10 + 0x34 + lVar18 * 0x48) = *(undefined8 *)(param_2 + 0x34);
      *(undefined1 *)(lVar10 + 0x40 + lVar18 * 0x48) = *(undefined1 *)(param_2 + 0x40);
    }
    else {
      iVar9 = *(int *)(param_1 + 0x110);
      lVar18 = (longlong)iVar9;
      if (lVar18 != 0) {
        lVar10 = *(longlong *)(param_1 + 0x108);
        local_90 = param_1;
        bVar4 = FUN_140ac16b0(lVar10 + 0x1c,param_2 + 0x1c);
        local_88 = lVar10 + 100;
        iVar14 = 0;
        iVar11 = 0;
        local_a0 = lVar10;
        do {
          local_a6 = bVar4;
          local_a5 = local_a6 ^ 1;
          lVar10 = (longlong)iVar11;
          iVar16 = iVar11 + 1;
          if (iVar11 + 1 < iVar9) {
            iVar16 = iVar9;
          }
          local_98 = lVar10 * 9;
          lVar17 = local_88 + lVar10 * 0x48;
          bVar4 = local_a6 & 1;
          iVar12 = iVar11;
          local_a4 = iVar14;
          do {
            lVar10 = lVar10 + 1;
            iVar13 = iVar16;
            if (lVar18 <= lVar10) break;
            bVar5 = FUN_140ac16b0(lVar17,param_2 + 0x1c);
            iVar12 = iVar12 + 1;
            lVar17 = lVar17 + 0x48;
            iVar13 = iVar12;
          } while (bVar4 == bVar5);
          iVar14 = local_a4;
          iVar16 = iVar13 - iVar11;
          if ((local_a6 & 1) == 0) {
            if (local_a4 != iVar11) {
              memmove((void *)(local_a0 + (longlong)local_a4 * 0x48),
                      (void *)(local_a0 + local_98 * 8),(longlong)iVar16 * 0x48);
            }
            iVar14 = iVar14 + iVar16;
          }
          else {
            FUN_145c196fd(local_a0 + local_98 * 8,iVar16);
            iVar14 = local_a4;
          }
          iVar11 = iVar13;
          bVar4 = local_a5;
        } while (lVar10 < lVar18);
        *(int *)(local_90 + 0x110) = iVar14;
      }
    }
    goto LAB_14890d013;
  }
  local_68 = *(undefined4 *)(param_2 + 0x24);
  local_70 = *(undefined8 *)(param_2 + 0x1c);
  local_64 = *(ulonglong *)(param_2 + 0x28);
  local_5c = *(int *)(param_2 + 0x30);
  local_58 = *(ulonglong *)(param_2 + 0x34);
  local_50 = *(int *)(param_2 + 0x3c);
  local_4c = 0;
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_140d7f1a8(param_1,&local_80,&local_70);
    plVar15 = local_78;
    if (local_78 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_78 + 1) = (int)local_78[1] + 1;
      UNLOCK();
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_78 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar2 = (int *)((longlong)local_78 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_78 + 0x10))(local_78);
          }
        }
      }
    }
  }
  else {
    uVar6 = *(uint *)(param_2 + 0x1c);
    if (*(int *)(param_2 + 0x24) != 0) {
      uVar6 = FUN_144a78877(uVar6);
    }
    uVar7 = (uint)local_64;
    if (local_5c != 0) {
      uVar7 = FUN_144a78877(local_64 & 0xffffffff);
    }
    uVar8 = (uint)local_58;
    if (local_50 != 0) {
      uVar8 = FUN_144a78877(local_58 & 0xffffffff);
    }
    iVar9 = FUN_140d7f9b6((longlong *)(param_1 + 0x98),uVar7 ^ uVar6 ^ uVar8,&local_70);
    if (iVar9 == -1) goto LAB_14890d013;
    lVar18 = (longlong)iVar9 * 0x40 + *(longlong *)(param_1 + 0x98);
    if (lVar18 == -0x28 || lVar18 == 0) goto LAB_14890d013;
    local_80 = *(longlong *)(lVar18 + 0x28);
    plVar15 = *(longlong **)(lVar18 + 0x30);
    if (plVar15 == (longlong *)0x0) {
      plVar15 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
    }
  }
  if (local_80 != 0) {
    FUN_1457a3d2a(local_80,*(undefined1 *)(param_2 + 0x40));
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar15 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
LAB_14890d013:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14890d2e8 FUN_14890d2e8 body=289 status=ok
// SIG undefined FUN_14890d2e8(void)

longlong * FUN_14890d2e8(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_14890d313:
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) goto LAB_14890d313;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    local_38 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    plStack_30 = plVar4;
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
  puVar7 = (undefined8 *)FUN_14001cc68(0x130,0x10);
  puVar7[1] = &DAT_100000001;
  *puVar7 = &PTR_LAB_14b41b0a0;
  puVar1 = puVar7 + 2;
  FUN_141214e12(puVar1,&local_38,*(undefined1 *)(param_3 + 0x24));
  *param_2 = (longlong)puVar1;
  param_2[1] = (longlong)puVar7;
  FUN_148915374(param_2,puVar1);
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14890d41c FUN_14890d41c body=35 status=ok
// SIG undefined FUN_14890d41c(void)

void FUN_14890d41c(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140a262da(param_1 + 0xf8);
  FUN_140d8114c(param_1,uVar1);
  return;
}



// FUNCTION 14890d440 FUN_14890d440 body=35 status=ok
// SIG undefined FUN_14890d440(void)

void FUN_14890d440(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140a262da(param_1 + 0x180);
  FUN_14597b13e(param_1,uVar1);
  return;
}



// FUNCTION 14890d46a FUN_14890d46a body=29 status=ok
// SIG undefined FUN_14890d46a(void)

undefined8 FUN_14890d46a(longlong param_1,undefined8 param_2)

{
  FUN_1408226d0(param_1 + 0x28,param_2,1);
  return param_2;
}



// FUNCTION 14890d494 FUN_14890d494 body=29 status=ok
// SIG undefined FUN_14890d494(void)

undefined8 FUN_14890d494(longlong param_1,undefined8 param_2)

{
  FUN_1408226d0(param_1 + 0x34,param_2,1);
  return param_2;
}



// FUNCTION 14890d4b6 FUN_14890d4b6 body=37 status=ok
// SIG undefined FUN_14890d4b6(void)

undefined8 FUN_14890d4b6(longlong param_1,undefined8 param_2)

{
  FUN_140b11b44(param_1 + 0x28,param_2,0,0,0);
  return param_2;
}



// FUNCTION 14890d4e0 FUN_14890d4e0 body=82 status=ok
// SIG undefined FUN_14890d4e0(void)

longlong * FUN_14890d4e0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)FUN_1409c4b9a();
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1405a2e2a();
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



// FUNCTION 14890d532 FUN_14890d532 body=130 status=ok
// SIG undefined FUN_14890d532(void)

void FUN_14890d532(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  char local_58 [40];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14096c63a(param_2 + 0x10,local_58);
  if (local_58[0] != '\0') {
    FUN_140ca9cce(param_1 + 0x18,local_58);
  }
  FUN_1409c4df0(param_1 + 8,param_2 + 0x38);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14890d5b6 FUN_14890d5b6 body=122 status=ok
// SIG undefined FUN_14890d5b6(void)

void FUN_14890d5b6(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [40];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14096c63a(param_2 + 0x10,local_58);
  FUN_1411b8130(param_1 + 0x18,local_58);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1409c4df0(param_1 + 8,param_2 + 0x38);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14890d632 FUN_14890d632 body=147 status=ok
// SIG undefined FUN_14890d632(void)

void FUN_14890d632(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_78 [32];
  char local_58 [40];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14096c63a(param_2 + 0x10,local_58);
  if (local_58[0] == '\n') {
    cVar1 = FUN_143d206a2(local_58);
    if ((byte)(cVar1 - 1U) < 3) {
      *(char *)(param_1 + 0x18) = (char)(0x10200 >> ((cVar1 - 1U & 3) << 3));
    }
  }
  FUN_1409c4df0(param_1 + 8,param_2 + 0x38);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14890d6c6 FUN_14890d6c6 body=39 status=ok
// SIG undefined FUN_14890d6c6(void)

void FUN_14890d6c6(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14890d6ee(param_3 + 0x1d0);
  *(undefined8 *)(lVar1 + 8) = *param_2;
  *(undefined4 *)(lVar1 + 0x10) = *(undefined4 *)(param_2 + 1);
  return;
}



// FUNCTION 14890d6ee FUN_14890d6ee body=240 status=ok
// SIG undefined FUN_14890d6ee(void)

longlong * FUN_14890d6ee(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  
  plVar5 = (longlong *)FUN_14001cc68(0x28,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b41b5f0;
  plVar6 = plVar5 + 2;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[2] = (longlong)&PTR_FUN_14b347720;
  iVar3 = *(int *)(param_1 + 0x128);
  *(uint *)(param_1 + 0x128) = iVar3 + 1U;
  if (*(uint *)(param_1 + 300) < iVar3 + 1U) {
    FUN_140d8a32a((longlong *)(param_1 + 0x120),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x120);
  lVar7 = (longlong)iVar3 * 0x10;
  *(longlong **)(lVar4 + lVar7) = plVar6;
  *(longlong **)(lVar4 + 8 + lVar7) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
    plVar6 = *(longlong **)(lVar4 + lVar7);
    plVar5 = (longlong *)((longlong *)(lVar4 + lVar7))[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
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
  return plVar6;
}



// FUNCTION 14890d7e0 FUN_14890d7e0 body=451 status=ok
// SIG undefined FUN_14890d7e0(void)

void FUN_14890d7e0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144928b90(&local_b0,0xd);
  local_c0 = DAT_14cb7cff8;
  local_b8 = DAT_14cb7d000;
  FUN_14883463c(&local_b0);
  local_c8 = *(undefined4 *)(param_1 + 0xc4);
  local_d0 = *(undefined8 *)(param_1 + 0xbc);
  FUN_14883464e(&local_b0);
  plVar1 = (longlong *)(param_3 + 0x10);
  if (*(byte *)(param_3 + 0x30) == 0x1f) {
    puVar3 = (undefined8 *)*plVar1;
    *(undefined4 *)(puVar3 + 1) = local_a8;
    *puVar3 = local_b0;
    FUN_1447715ec(puVar3 + 2);
  }
  else {
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(param_3 + 0x30) * 0x120));
    if (pcVar2 != (code *)0x0) {
      plVar4 = plVar1;
      if (0x18 < *(ushort *)(param_3 + 0x28)) {
        plVar4 = *(longlong **)(param_3 + 0x10);
      }
      (*pcVar2)(plVar4);
    }
    if (0x18 < *(ushort *)(param_3 + 0x28)) {
      FUN_1400020a8(*plVar1);
    }
    local_58 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_78 = local_b0;
    local_70 = local_a8;
    FUN_1447715ec(&local_68);
    *(undefined2 *)(param_3 + 0x28) = 0x38;
    puVar3 = (undefined8 *)FUN_14001cc68(0x38,0);
    *(undefined8 **)(param_3 + 0x10) = puVar3;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *(undefined4 *)(puVar3 + 1) = local_70;
    *puVar3 = local_78;
    FUN_1447715ec(puVar3 + 2,&local_68);
    *(undefined1 *)(param_3 + 0x30) = 0x1f;
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1409c4df0(param_3 + 0x38,param_1 + 8);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14890d9a4 FUN_14890d9a4 body=136 status=ok
// SIG undefined FUN_14890d9a4(void)

void FUN_14890d9a4(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1411a0e4c(param_2 + 0x10,&local_30);
  if (*(longlong *)(param_1 + 8) != local_30) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(longlong *)(param_1 + 8) = local_30;
  if (*(longlong *)(param_1 + 0x10) != local_28) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  uVar1 = FUN_14477b664();
  uVar1 = FUN_14477b664(uVar1);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = local_20;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14890da2e FUN_14890da2e body=44 status=ok
// SIG undefined FUN_14890da2e(void)

undefined8 * FUN_14890da2e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 == (longlong *)0x0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 14890da5a FUN_14890da5a body=212 status=ok
// SIG undefined FUN_14890da5a(void)

void FUN_14890da5a(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)(lVar4 + 8) = *param_2;
    uVar5 = *(undefined8 *)(param_1 + 8);
    plVar6 = *(longlong **)(param_1 + 0x10);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    iVar3 = *(int *)(param_3 + 0x2f8);
    *(uint *)(param_3 + 0x2f8) = iVar3 + 1U;
    if (*(uint *)(param_3 + 0x2fc) < iVar3 + 1U) {
      FUN_140d8a32a((longlong *)(param_3 + 0x2f0),iVar3);
    }
    lVar4 = *(longlong *)(param_3 + 0x2f0);
    *(undefined8 *)(lVar4 + (longlong)iVar3 * 0x10) = uVar5;
    *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar6;
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
                    /* WARNING: Could not recover jumptable at 0x00014890db1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar6 + 0x10))(plVar6);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14890dbe4 FUN_14890dbe4 body=26 status=ok
// SIG undefined FUN_14890dbe4(void)

void FUN_14890dbe4(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1405d5f74(param_2 + 0x10);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// FUNCTION 14890dbfe FUN_14890dbfe body=111 status=ok
// SIG undefined FUN_14890dbfe(void)

void FUN_14890dbfe(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  
  uVar2 = *(undefined4 *)(param_1 + 8);
  puVar1 = (undefined8 *)(param_3 + 0x10);
  if (*(byte *)(param_3 + 0x30) == 2) {
    *(undefined4 *)puVar1 = uVar2;
  }
  else {
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(param_3 + 0x30) * 0x120));
    if (pcVar3 != (code *)0x0) {
      puVar4 = puVar1;
      if (0x18 < *(ushort *)(param_3 + 0x28)) {
        puVar4 = *(undefined8 **)(param_3 + 0x10);
      }
      (*pcVar3)(puVar4);
    }
    if (0x18 < *(ushort *)(param_3 + 0x28)) {
      FUN_1400020a8(*puVar1);
    }
    *(undefined2 *)(param_3 + 0x28) = 4;
    *(undefined4 *)(param_3 + 0x10) = uVar2;
    *(undefined1 *)(param_3 + 0x30) = 2;
  }
  return;
}



// FUNCTION 14890dc6e FUN_14890dc6e body=28 status=ok
// SIG undefined FUN_14890dc6e(void)

void FUN_14890dc6e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_144a7ecd0(param_2 + 0x10);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// FUNCTION 14890dc8a FUN_14890dc8a body=125 status=ok
// SIG undefined FUN_14890dc8a(void)

void FUN_14890dc8a(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  
  uVar2 = *(undefined4 *)(param_1 + 8);
  puVar1 = (undefined8 *)(param_3 + 0x10);
  if (*(byte *)(param_3 + 0x30) == 3) {
    *(undefined4 *)puVar1 = uVar2;
  }
  else {
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(param_3 + 0x30) * 0x120));
    if (pcVar3 != (code *)0x0) {
      puVar4 = puVar1;
      if (0x18 < *(ushort *)(param_3 + 0x28)) {
        puVar4 = *(undefined8 **)(param_3 + 0x10);
      }
      (*pcVar3)(puVar4);
    }
    if (0x18 < *(ushort *)(param_3 + 0x28)) {
      FUN_1400020a8(*puVar1);
    }
    *(undefined2 *)(param_3 + 0x28) = 4;
    *(undefined4 *)(param_3 + 0x10) = uVar2;
    *(undefined1 *)(param_3 + 0x30) = 3;
  }
  return;
}



// FUNCTION 14890dd08 FUN_14890dd08 body=77 status=ok
// SIG undefined FUN_14890dd08(void)

void FUN_14890dd08(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1457d43e4(param_2 + 0x10,&local_20);
  *(undefined8 *)(param_1 + 8) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14890dd56 FUN_14890dd56 body=121 status=ok
// SIG undefined FUN_14890dd56(void)

void FUN_14890dd56(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)(param_3 + 0x10);
  if (*(byte *)(param_3 + 0x30) == 0x12) {
    *puVar1 = *(undefined8 *)(param_1 + 8);
  }
  else {
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(param_3 + 0x30) * 0x120));
    if (pcVar2 != (code *)0x0) {
      puVar4 = puVar1;
      if (0x18 < *(ushort *)(param_3 + 0x28)) {
        puVar4 = *(undefined8 **)(param_3 + 0x10);
      }
      (*pcVar2)(puVar4);
    }
    if (0x18 < *(ushort *)(param_3 + 0x28)) {
      FUN_1400020a8(*puVar1);
    }
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined2 *)(param_3 + 0x28) = 8;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
    *(undefined1 *)(param_3 + 0x30) = 0x12;
  }
  return;
}



// FUNCTION 14890ddd0 FUN_14890ddd0 body=77 status=ok
// SIG undefined FUN_14890ddd0(void)

void FUN_14890ddd0(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1488aaa4e(param_2 + 0x10,&local_20);
  *(undefined8 *)(param_1 + 8) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14890de1e FUN_14890de1e body=115 status=ok
// SIG undefined FUN_14890de1e(void)

void FUN_14890de1e(longlong param_1,char param_2,undefined4 param_3)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x48) != param_2) {
    FUN_140ce26f2(param_1);
    *(char *)(param_1 + 0x48) = param_2;
  }
  FUN_140e5d67a(param_1);
  uVar1 = *(undefined1 *)(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0x78) = 1;
  FUN_143df53bc(param_1);
  lVar3 = FUN_140f42f34(*(undefined8 *)(param_1 + 0x40));
  if (lVar3 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = FUN_1405f61f4(lVar3);
  }
  if (cVar2 == param_2) {
    FUN_140f13ae4(*(undefined8 *)(param_1 + 0x40),param_3,1);
  }
  *(undefined1 *)(param_1 + 0x78) = uVar1;
  return;
}



// FUNCTION 14890de92 FUN_14890de92 body=154 status=ok
// SIG undefined FUN_14890de92(void)

void FUN_14890de92(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  undefined1 local_58 [40];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)FUN_140672052(*(undefined8 *)(param_1 + 8));
  FUN_140e1bd88(local_68,param_2);
  FUN_140e5d89c(param_1,local_58);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x2b0))(plVar1);
    if (lVar2 != 0) {
      FUN_140bc53f1(local_58,local_68,lVar2,0);
    }
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14890df2e FUN_14890df2e body=69 status=ok
// SIG undefined FUN_14890df2e(void)

void FUN_14890df2e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_140bdf3fa(param_1 + 0x1f0,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14890df74 FUN_14890df74 body=141 status=ok
// SIG undefined FUN_14890df74(void)

longlong FUN_14890df74(longlong param_1,char *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0x1f8) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x1f0);
    lVar6 = (longlong)*(int *)(param_1 + 0x1f8) * 0xc;
    do {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),lVar5);
      if (lVar2 != 0) {
        lVar3 = FUN_140f42f34();
        if (lVar3 == 0) {
          iVar1 = 0;
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 8) + 0x100);
          iVar1 = (int)((ulonglong)uVar4 >> 0x20);
        }
        if (((char)uVar4 == *param_2) && (iVar1 == *(int *)(param_2 + 4))) {
          return lVar2;
        }
      }
      lVar5 = lVar5 + 0xc;
      lVar6 = lVar6 + -0xc;
    } while (lVar6 != 0);
  }
  return 0;
}



// FUNCTION 14890e002 FUN_14890e002 body=273 status=ok
// SIG undefined FUN_14890e002(void)

void FUN_14890e002(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  longlong *local_80;
  undefined **local_78;
  longlong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = &PTR_FUN_14b00be10;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  lVar5 = FUN_14890e114(&local_78);
  uVar3 = uStack_68;
  *(undefined4 *)(lVar5 + 0x20) = param_3;
  lVar5 = (longlong)(int)uStack_68;
  uVar4 = (int)uStack_68 + 1;
  uStack_68 = CONCAT44(uStack_68._4_4_,uVar4);
  if (uStack_68._4_4_ < uVar4) {
    FUN_1406419cc(&local_70,uVar3 & 0xffffffff);
  }
  plVar2 = (longlong *)(local_70 + lVar5 * 0x18);
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = 0;
  FUN_1401f3db8(plVar2,param_2);
  if (*plVar2 != 0) {
    *(undefined1 *)(*plVar2 + 0x18) = 0;
    *(undefined4 *)(*plVar2 + 0x1c) = 0;
  }
  FUN_140d853aa(param_1,local_88,&local_78,0);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_80 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
  }
  FUN_140170ace(&local_78);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14890e114 FUN_14890e114 body=71 status=ok
// SIG undefined FUN_14890e114(void)

void FUN_14890e114(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
    FUN_1406419cc((longlong *)(param_1 + 8),iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  FUN_1489174f8();
  return;
}



// FUNCTION 14890e164 FUN_14890e164 body=62 status=ok
// SIG undefined FUN_14890e164(void)

void FUN_14890e164(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140f42f34();
  if (lVar1 != 0) {
    FUN_14884315e(lVar1,param_2);
    FUN_1401861f4(param_1 + 0x1d0,param_2);
    return;
  }
  return;
}



// FUNCTION 14890e1a2 FUN_14890e1a2 body=29 status=ok
// SIG undefined FUN_14890e1a2(void)

undefined8 FUN_14890e1a2(longlong param_1,undefined8 param_2)

{
  FUN_1411c20ec(*(undefined8 *)(param_1 + 0xa0));
  return param_2;
}



// FUNCTION 14890e1c0 FUN_14890e1c0 body=222 status=ok
// SIG undefined FUN_14890e1c0(void)

void FUN_14890e1c0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14891da60(*param_2,&local_28);
  if (local_28 != 0) {
    uVar2 = (uint)((ulonglong)local_28 >> 0x10);
    uVar4 = (uint)local_28 & 0xffff;
    uVar3 = FUN_148917676(param_1 + 0x130,
                          ((uint)local_28 << 0x10 | uVar4) + (int)((ulonglong)local_28 >> 0x20) +
                          (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4),&local_28);
    local_38 = *param_2;
    local_30 = (longlong *)param_2[1];
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
      UNLOCK();
    }
    FUN_148917c30(uVar3,&local_38);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14890e2a0 FUN_14890e2a0 body=312 status=ok
// SIG undefined FUN_14890e2a0(void)

void FUN_14890e2a0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14891da60(*param_2,&local_28);
  if (*(int *)(param_1 + 0x138) != *(int *)(param_1 + 0x164)) {
    uVar2 = (uint)((ulonglong)local_28 >> 0x10);
    uVar5 = (uint)local_28 & 0xffff;
    lVar4 = param_1 + 0x168;
    if (*(longlong *)(param_1 + 0x170) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x170);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x178) - 1U &
                             (int)((ulonglong)local_28 >> 0x20) + ((uint)local_28 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x130) + (longlong)iVar3 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x130) + (longlong)iVar3 * 0x20) == local_28) {
          if (lVar4 != -8 && lVar4 != 0) {
            local_38 = *param_2;
            local_30 = (longlong *)param_2[1];
            if (local_30 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
              UNLOCK();
            }
            local_20 = &local_38;
            FUN_148917e00();
            if (local_30 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)local_30 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_30 + 0x10))();
              }
            }
          }
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x18);
      } while (iVar3 != -1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14890e3da FUN_14890e3da body=281 status=ok
// SIG undefined FUN_14890e3da(void)

void FUN_14890e3da(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  bool bVar10;
  
  if (*(int *)(param_1 + 0x138) != *(int *)(param_1 + 0x164)) {
    uVar5 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar6 = param_1 + 0x168;
    if (*(longlong *)(param_1 + 0x170) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x170);
    }
    iVar9 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x178) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar5 << 0x13 | uVar5) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar9 != -1) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x130) + (longlong)iVar9 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x130) + (longlong)iVar9 * 0x20) == param_2) {
          if ((lVar6 + 8U & 0xfffffffffffffff7) == 0) {
            return;
          }
          if ((longlong)*(int *)(lVar6 + 0x10) == 0) {
            return;
          }
          plVar7 = *(longlong **)(lVar6 + 8);
          plVar8 = plVar7 + (longlong)*(int *)(lVar6 + 0x10) * 2;
          do {
            plVar3 = (longlong *)plVar7[1];
            if (plVar3 != (longlong *)0x0) {
              iVar9 = (int)plVar3[1];
              do {
                if (iVar9 == 0) goto LAB_14890e4e5;
                LOCK();
                iVar4 = (int)plVar3[1];
                bVar10 = iVar9 == iVar4;
                if (bVar10) {
                  *(int *)(plVar3 + 1) = iVar9 + 1;
                  iVar4 = iVar9;
                }
                iVar9 = iVar4;
                UNLOCK();
              } while (!bVar10);
              if (*plVar7 != 0) {
                FUN_14891d9ce();
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
LAB_14890e4e5:
            plVar7 = plVar7 + 2;
            if (plVar7 == plVar8) {
              return;
            }
          } while( true );
        }
        iVar9 = *(int *)(lVar6 + 0x18);
      } while (iVar9 != -1);
    }
  }
  return;
}



// FUNCTION 14890e4f4 FUN_14890e4f4 body=179 status=ok
// SIG undefined FUN_14890e4f4(void)

void FUN_14890e4f4(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 != 0) {
    FUN_1411c20ec(*(undefined8 *)(param_1 + 0xa0),&local_30,param_2);
    if ((local_30 != 0) && ((longlong)*(int *)(local_30 + 0x60) != 0)) {
      plVar3 = *(longlong **)(local_30 + 0x58);
      lVar2 = (longlong)*(int *)(local_30 + 0x60) * 0x28;
      do {
        if (*plVar3 == param_3) {
          FUN_1456d222c(param_1);
          break;
        }
        plVar3 = plVar3 + 5;
        lVar2 = lVar2 + -0x28;
      } while (lVar2 != 0);
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_28 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14890e5a8 FUN_14890e5a8 body=140 status=ok
// SIG undefined FUN_14890e5a8(void)

longlong FUN_14890e5a8(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x4d8);
  FUN_1446dcdd4(local_38);
  if (DAT_14cb86df8 != 0) {
    lVar1 = FUN_144837462(DAT_14cb86df8,local_38);
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x58) != '\0')) goto LAB_14890e600;
  }
  lVar1 = 0;
LAB_14890e600:
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14890e636 FUN_14890e636 body=33 status=ok
// SIG undefined FUN_14890e636(void)

undefined8 FUN_14890e636(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140f42f34();
  if (lVar1 != 0) {
    uVar2 = FUN_143d35b9c(lVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14890e658 FUN_14890e658 body=62 status=ok
// SIG undefined FUN_14890e658(void)

ulonglong FUN_14890e658(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if ((*(int *)(param_1 + 0x98) < 1) || (*(char *)(*(longlong *)(param_1 + 0xa0) + 0x751) == '\0'))
  {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_140f42f34();
    if (lVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = FUN_143d35b9c(lVar1);
      uVar2 = uVar2 ^ 1;
    }
  }
  return uVar2;
}



// FUNCTION 14890e696 FUN_14890e696 body=322 status=ok
// SIG undefined FUN_14890e696(void)

void FUN_14890e696(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar3 = *(undefined1 *)(param_1 + 0x1e9);
  *(undefined1 *)(param_1 + 0x1e9) = 1;
  FUN_140ce1cc4();
  plVar1 = (longlong *)(param_1 + 0x30);
  lVar2 = param_1 + 0x40;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x58) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0x58);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar5) || (uStack_58 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_88 + 0x10 + (longlong)iStack_6c * 0x20);
      FUN_140ce2548(lVar4);
      FUN_140f691f2(lVar4,*(longlong *)(lVar4 + 0x40) + 0xa0);
      *(undefined8 *)(lVar4 + 0xe8) = 0;
      *(undefined8 *)(lVar4 + 0xf0) = 0;
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar5));
  }
  *(undefined1 *)(param_1 + 0x1e9) = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14890e7da thunk_FUN_14890e696 body=5 status=ok
// SIG undefined thunk_FUN_14890e696(void)

void thunk_FUN_14890e696(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  longlong *plStack_88;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint uStack_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  uint uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong uStack_40;
  
  uStack_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar3 = *(undefined1 *)(param_1 + 0x1e9);
  *(undefined1 *)(param_1 + 0x1e9) = 1;
  FUN_140ce1cc4();
  plVar1 = (longlong *)(param_1 + 0x30);
  lVar2 = param_1 + 0x40;
  uStack_60 = 0x100000000;
  uStack_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x58) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&uStack_60);
    iVar5 = *(int *)(param_1 + 0x58);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  uStack_70 = uStack_50;
  iStack_6c = iStack_4c;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  plStack_88 = plVar1;
  if ((iStack_4c != iVar5) || (uStack_58 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*plStack_88 + 0x10 + (longlong)iStack_6c * 0x20);
      FUN_140ce2548(lVar4);
      FUN_140f691f2(lVar4,*(longlong *)(lVar4 + 0x40) + 0xa0);
      *(undefined8 *)(lVar4 + 0xe8) = 0;
      *(undefined8 *)(lVar4 + 0xf0) = 0;
      uStack_70 = uStack_70 & ~uStack_7c;
      FUN_1449c0562(&uStack_80);
    } while (plStack_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar5))
    ;
  }
  *(undefined1 *)(param_1 + 0x1e9) = uVar3;
  if ((uStack_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14890e7e0 FUN_14890e7e0 body=155 status=ok
// SIG undefined FUN_14890e7e0(void)

ulonglong FUN_14890e7e0(longlong param_1,int *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < (longlong)*(int *)(param_1 + 0x18)) {
    uVar1 = 0;
    do {
      lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 8 + uVar1 * 0x18);
      if (lVar3 != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar1 * 0x18);
        lVar2 = 0;
        do {
          if ((*(int *)(lVar4 + lVar2) == *param_2) && (*(int *)(lVar4 + 8 + lVar2) == param_2[2]))
          {
            return uVar1;
          }
          lVar2 = lVar2 + 0xc;
        } while (lVar3 * 0xc != lVar2);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != (longlong)*(int *)(param_1 + 0x18));
  }
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      if ((*(int *)(lVar3 + lVar4) == *param_2) && (*(int *)(lVar3 + 8 + lVar4) == param_2[2])) {
        return (ulonglong)*(uint *)(lVar3 + 0xc + lVar4);
      }
      lVar4 = lVar4 + 0x14;
    } while ((longlong)*(int *)(param_1 + 0x28) * 0x14 != lVar4);
  }
  return 0xffffffff;
}



// FUNCTION 14890e87c FUN_14890e87c body=161 status=ok
// SIG undefined FUN_14890e87c(void)

void FUN_14890e87c(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1410cfcf6(0,&local_48);
  lVar1 = local_48;
  lVar3 = (longlong)(int)uStack_40;
  if (lVar3 != 0) {
    lVar2 = 0;
    do {
      (**(code **)(*param_1 + 0x108))(param_1,*(undefined8 *)(lVar1 + lVar2),param_2,param_3);
      lVar2 = lVar2 + 8;
    } while (lVar3 * 8 != lVar2);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14890e91e FUN_14890e91e body=49 status=ok
// SIG undefined FUN_14890e91e(void)

void FUN_14890e91e(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_140f42f34();
  if (lVar2 != 0) {
    iVar1 = FUN_14884326a(lVar2);
    FUN_1488432a4(lVar2,iVar1 + 1);
    return;
  }
  return;
}



// FUNCTION 14890e950 FUN_14890e950 body=236 status=ok
// SIG undefined FUN_14890e950(void)

void FUN_14890e950(longlong *param_1,int param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140d83844();
  lVar4 = (longlong)*(int *)(*(longlong *)(*param_1 + 0xa0) + 0x40);
  if (lVar4 != 0) {
    lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0xa0) + 0x38);
    lVar6 = 0;
    do {
      iVar2 = *(int *)(lVar3 + 0xc + lVar6);
      if ((iVar2 == param_2) || (iVar2 == -1 && param_2 == 0)) {
        puVar1 = (undefined8 *)(lVar6 + lVar3);
        local_60 = *(undefined4 *)(puVar1 + 1);
        local_68 = *puVar1;
        local_58 = local_68;
        local_50 = local_60;
        lVar5 = FUN_140f54c6c(*param_1,&local_58);
        if (lVar5 != 0) {
          iVar2 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
            FUN_140f54fb6(param_3,iVar2);
          }
          *(longlong *)(*param_3 + (longlong)iVar2 * 8) = lVar5;
        }
      }
      lVar6 = lVar6 + 0x14;
    } while (lVar4 * 0x14 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14890ea3e FUN_14890ea3e body=323 status=ok
// SIG undefined FUN_14890ea3e(void)

void FUN_14890ea3e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x30);
  lVar2 = param_1 + 0x40;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x58) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar7 = *(int *)(param_1 + 0x58);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar7) || (uStack_58 != lVar2)) {
    do {
      uVar4 = *(undefined8 *)(*local_88 + 0x10 + (longlong)iStack_6c * 0x20);
      lVar6 = FUN_140dcc81c(uVar4);
      if (lVar6 != 0) {
        cVar5 = FUN_141042fba(lVar6);
        if (cVar5 == '\x04') {
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_140f54fb6(param_2,iVar3);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = uVar4;
        }
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar7));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14890eb82 FUN_14890eb82 body=33 status=ok
// SIG undefined FUN_14890eb82(void)

undefined8 FUN_14890eb82(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140dcc81c();
  if (lVar1 != 0) {
    uVar2 = FUN_141042fba(lVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14890eba4 FUN_14890eba4 body=50 status=ok
// SIG undefined FUN_14890eba4(void)

undefined8 FUN_14890eba4(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x40) + 8);
  puVar2 = &DAT_14c9485f0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
  }
  FUN_144a7660c(puVar2,param_2,1);
  return param_2;
}



// FUNCTION 14890ebda FUN_14890ebda body=55 status=ok
// SIG undefined FUN_14890ebda(void)

void FUN_14890ebda(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_140f42f34();
  if (lVar2 != 0) {
    cVar1 = FUN_1405f61f4(lVar2);
    if (cVar1 == '\x04') {
      FUN_140f13ae4(param_1,5,1);
      return;
    }
  }
  return;
}



// FUNCTION 14890ec12 FUN_14890ec12 body=42 status=ok
// SIG undefined FUN_14890ec12(void)

void FUN_14890ec12(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_14890ec3c();
  if (cVar1 != '\0') {
    FUN_140f13ae4(param_1,7,1);
    return;
  }
  return;
}



// FUNCTION 14890ec3c FUN_14890ec3c body=63 status=ok
// SIG undefined FUN_14890ec3c(void)

bool FUN_14890ec3c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x68))();
  if ((cVar1 != '\0') && (lVar2 = FUN_140f42f34(param_1), lVar2 != 0)) {
    cVar1 = FUN_1405f61f4(lVar2);
    return (byte)(cVar1 - 3U) < 2;
  }
  return false;
}



// FUNCTION 14890ec7c FUN_14890ec7c body=60 status=ok
// SIG undefined FUN_14890ec7c(void)

void FUN_14890ec7c(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_140f42f34();
  if (lVar2 != 0) {
    cVar1 = FUN_1405f61f4(lVar2);
    if ((param_2 != 0) && (cVar1 == '\x04')) {
      FUN_14890ebda(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14890ecb8 FUN_14890ecb8 body=215 status=ok
// SIG undefined FUN_14890ecb8(void)

void FUN_14890ecb8(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_140f42f34();
  if (((lVar3 == 0) || (cVar2 = FUN_1405f61f4(lVar3), param_2 == 0)) || (cVar2 != '\x04'))
  goto LAB_14890ecef;
  lVar3 = FUN_1401bd7a2(*(undefined8 *)(param_2 + 0x40));
  piVar4 = (int *)&DAT_14c948618;
  if (lVar3 != 0) {
    piVar4 = (int *)(lVar3 + 0x54);
  }
  if (*piVar4 == 0) {
    lVar3 = *(longlong *)(param_2 + 0x40);
LAB_14890ed32:
    uVar5 = *(undefined4 *)(lVar3 + 0x3c);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    lVar3 = FUN_1401bd7a2(*(undefined8 *)(param_2 + 0x40));
    if (lVar3 == 0) {
      local_28 = DAT_14c948620;
      local_30 = DAT_14c948618;
    }
    else {
      local_28 = *(undefined4 *)(lVar3 + 0x5c);
      local_30 = *(undefined8 *)(lVar3 + 0x54);
    }
    lVar3 = FUN_1406b1d14(uVar1,&local_30);
    uVar5 = 0xffffffff;
    if (lVar3 != 0) goto LAB_14890ed32;
  }
  FUN_14890ed90(param_1,uVar5);
LAB_14890ecef:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14890ed90 FUN_14890ed90 body=625 status=ok
// SIG undefined FUN_14890ed90(void)

void FUN_14890ed90(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_e8 [39];
  undefined1 local_c1;
  longlong *local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar11 = FUN_140f42f34();
  if ((lVar11 != 0) && (cVar7 = FUN_1405f61f4(lVar11), cVar7 == '\x04')) {
    lVar11 = FUN_140f42f34(param_1);
    if (lVar11 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = FUN_140f430f8(lVar11);
    }
    if (param_2 <= iVar8) {
      uVar2 = *(undefined1 *)(param_1 + 0x1e9);
      *(undefined1 *)(param_1 + 0x1e9) = 1;
      plVar1 = (longlong *)(param_1 + 0x30);
      local_98 = 0;
      uStack_90 = 0;
      lVar11 = param_1 + 0x40;
      local_80 = 0x100000000;
      local_70 = 0xffffffff;
      local_68 = 0;
      iVar8 = 0;
      local_78 = lVar11;
      if (*(int *)(param_1 + 0x58) != 0) {
        FUN_1449c0562(&local_80);
        iVar8 = *(int *)(param_1 + 0x58);
      }
      local_a8 = local_70;
      uVar6 = local_a8;
      local_a0 = local_68;
      local_9c = local_64;
      local_b8 = local_80;
      local_b0 = local_78;
      local_a8._4_4_ = (int)((ulonglong)local_70 >> 0x20);
      iVar9 = local_a8._4_4_;
      local_c1 = uVar2;
      local_c0 = plVar1;
      if ((local_a8._4_4_ != iVar8) || (local_a8 = uVar6, local_78 != lVar11)) {
        do {
          local_a8 = uVar6;
          uVar5 = uStack_90;
          lVar13 = *(longlong *)(*local_c0 + 0x10 + (longlong)iVar9 * 0x20);
          if (param_2 <= *(int *)(*(longlong *)(lVar13 + 0x40) + 0x40)) {
            lVar12 = (longlong)(int)uStack_90;
            uVar10 = (int)uStack_90 + 1;
            uStack_90 = CONCAT44(uStack_90._4_4_,uVar10);
            if (uStack_90._4_4_ < uVar10) {
              FUN_140f54fb6(&local_98,uVar5 & 0xffffffff);
            }
            *(longlong *)(local_98 + lVar12 * 8) = lVar13;
          }
          local_a8 = CONCAT44(local_a8._4_4_,(uint)local_a8 & ~local_b8._4_4_);
          FUN_1449c0562(&local_b8);
          lVar13 = local_98;
          iVar9 = local_a8._4_4_;
          uVar6 = local_a8;
        } while (local_c0 != plVar1 || (local_b0 != lVar11 || local_a8._4_4_ != iVar8));
        lVar11 = (longlong)(int)uStack_90;
        if (lVar11 != 0) {
          lVar12 = 0;
          do {
            lVar3 = *(longlong *)(lVar13 + lVar12);
            FUN_140ce2548(lVar3);
            FUN_140f691f2(lVar3,*(longlong *)(lVar3 + 0x40) + 0xa0);
            lVar4 = local_98;
            *(undefined8 *)(lVar3 + 0xe8) = 0;
            *(undefined8 *)(lVar3 + 0xf0) = 0;
            lVar12 = lVar12 + 8;
          } while (lVar11 * 8 != lVar12);
          lVar11 = (longlong)(int)uStack_90;
          if (lVar11 != 0) {
            lVar13 = 0;
            do {
              FUN_14890f002(*(undefined8 *)(lVar4 + lVar13));
              lVar13 = lVar13 + 8;
            } while (lVar11 * 8 != lVar13);
          }
        }
      }
      FUN_14890e164(param_1,param_2);
      FUN_140d833ee(param_1 + 0x1b8);
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      *(undefined1 *)(param_1 + 0x1e9) = local_c1;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14890f002 FUN_14890f002 body=431 status=ok
// SIG undefined FUN_14890f002(void)

void FUN_14890f002(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined2 local_a0 [2];
  undefined8 local_9c;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined1 local_60 [4];
  undefined8 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = FUN_140dcc81c();
  if (lVar2 != 0) {
    FUN_148843582(lVar2);
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  if (*(char *)(lVar2 + 0x409) == '\0') {
    plVar3 = (longlong *)FUN_1401bd7a2(lVar2);
    piVar4 = (int *)&DAT_14c948618;
    if ((plVar3 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar3 + 0x50))(plVar3), cVar1 == '\0')) goto LAB_14890f083;
  }
  if (*(char *)(lVar2 + 0x40b) == '\x01') {
    piVar4 = (int *)(lVar2 + 0x410);
  }
  else {
    piVar4 = (int *)(lVar2 + 0x380);
  }
LAB_14890f083:
  if (*piVar4 != 0) {
    local_9c = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    local_60[0] = 0;
    local_5c = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_a0[0] = 0xb;
    FUN_140c25b54(local_a0);
    lVar2 = *(longlong *)(param_1 + 0x40);
    if ((*(char *)(lVar2 + 0x409) == '\0') &&
       ((plVar3 = (longlong *)FUN_1401bd7a2(lVar2), plVar3 == (longlong *)0x0 ||
        (cVar1 = (**(code **)(*plVar3 + 0x50))(plVar3), cVar1 == '\0')))) {
      local_a8 = DAT_14c948620;
      local_b0 = DAT_14c948618;
    }
    else if (*(char *)(lVar2 + 0x40b) == '\x01') {
      local_a8 = *(undefined4 *)(lVar2 + 0x418);
      local_b0 = *(undefined8 *)(lVar2 + 0x410);
    }
    else {
      local_a8 = *(undefined4 *)(lVar2 + 0x388);
      local_b0 = *(undefined8 *)(lVar2 + 0x380);
    }
    FUN_144928d62(&local_90,0,&local_b0);
    local_b8 = 0;
    FUN_141881c66(local_60);
    FUN_140bc46c6(param_1,local_a0,0,0);
    FUN_141638c42(local_a0);
  }
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14890f1ba FUN_14890f1ba body=33 status=ok
// SIG undefined FUN_14890f1ba(void)

undefined8 FUN_14890f1ba(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140f42f34();
  if (lVar1 != 0) {
    uVar2 = FUN_1488430c6(lVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14890f1dc FUN_14890f1dc body=494 status=ok
// SIG undefined FUN_14890f1dc(void)

longlong FUN_14890f1dc(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_d8 [44];
  undefined1 local_ac [12];
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70 [3];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar2 = (longlong *)FUN_140b16984(*(undefined8 *)(param_1 + 8));
  lVar3 = (**(code **)(*plVar2 + 0xc0))(plVar2);
  if (lVar3 != 0) {
    local_78 = *(undefined4 *)(param_2 + 1);
    local_80 = *param_2;
    lVar4 = FUN_140f16de6(lVar3);
    if (lVar4 != 0) {
      if (param_3 == (longlong *)0x0) {
        local_a0 = *param_2;
        local_98 = *(undefined4 *)(param_2 + 1);
        FUN_1448075d0(local_70);
        if (((DAT_14cb86df8 == 0) || (lVar5 = FUN_144837462(DAT_14cb86df8,local_70), lVar5 == 0)) ||
           (*(char *)(lVar5 + 0x58) == '\0')) {
          lVar5 = 0;
        }
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        if (lVar5 == 0) goto LAB_14890f387;
        iVar1 = *(int *)(lVar5 + 0x68);
        if ((longlong)iVar1 != 0) {
          lVar5 = *(longlong *)(lVar5 + 0x60);
          lVar8 = 0;
          do {
            lVar7 = *(longlong *)(lVar5 + lVar8);
            if (lVar7 != 0) {
              local_70[0] = 0;
              puVar6 = *(undefined4 **)(lVar7 + 8);
              if (puVar6 == (undefined4 *)0x0) {
                puVar6 = &DAT_14c9485f0;
              }
              FUN_144a7660c(puVar6,local_ac,1);
              FUN_140f15de8(lVar3,local_ac,lVar4,local_70);
            }
            lVar8 = lVar8 + 8;
          } while ((longlong)iVar1 * 8 != lVar8);
        }
      }
      else {
        lVar5 = param_3[1];
        if ((longlong)(int)lVar5 != 0) {
          lVar8 = *param_3;
          lVar7 = 0;
          do {
            local_70[0] = 0;
            local_90 = *(undefined8 *)(lVar8 + lVar7);
            local_88 = *(undefined4 *)(lVar8 + 8 + lVar7);
            FUN_140f15de8(lVar3,&local_90,lVar4,local_70);
            lVar7 = lVar7 + 0xc;
          } while ((longlong)(int)lVar5 * 0xc != lVar7);
        }
      }
      FUN_140f167c2(lVar4);
      goto LAB_14890f389;
    }
  }
LAB_14890f387:
  lVar4 = 0;
LAB_14890f389:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 14890f430 FUN_14890f430 body=571 status=ok
// SIG undefined FUN_14890f430(void)

undefined8 * FUN_14890f430(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined1 local_54 [4];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_FUN_14b35c280;
  *(undefined2 *)(param_1 + 1) = 0;
  uVar2 = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = &DAT_14a171d50;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  param_1[0x11] = &DAT_14a171d50;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0x99) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa1) = 0;
  if (*(longlong *)(param_2 + 0x38) != 0) {
    if ((longlong)*(int *)(param_2 + 0x48) != 0) {
      lVar7 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_2 + 0x40) + lVar7) != 0) {
          uVar2 = 1;
          goto LAB_14890f4eb;
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)*(int *)(param_2 + 0x48) * 8 != lVar7);
    }
    uVar2 = 0;
  }
LAB_14890f4eb:
  *(undefined1 *)(param_1 + 1) = uVar2;
  if ((*(longlong *)(param_2 + 0x60) != 0) && ((longlong)*(int *)(param_2 + 0x70) != 0)) {
    lVar7 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_2 + 0x68) + lVar7) != 0) {
        uVar2 = 1;
        goto LAB_14890f51e;
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)*(int *)(param_2 + 0x70) * 8 != lVar7);
  }
  uVar2 = 0;
LAB_14890f51e:
  puVar9 = param_1 + 0x11;
  *(undefined1 *)((longlong)param_1 + 9) = uVar2;
  if ((longlong)*(int *)(param_2 + 0x28) != 0) {
    plVar8 = *(longlong **)(param_2 + 0x20);
    lVar7 = (longlong)*(int *)(param_2 + 0x28) * 0x18;
    do {
      lVar5 = plVar8[1];
      if (lVar5 == 0) {
        uVar4 = FUN_14060ed7a();
        lVar5 = FUN_14477b664(uVar4);
        plVar8[1] = lVar5;
      }
      lVar6 = plVar8[2];
      if (lVar6 == 0) {
        if (lVar5 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = 0;
          if (*plVar8 != 0) {
            plVar1 = *(longlong **)(lVar5 + 0xb8);
            local_60 = puVar9;
            if ((plVar1 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*plVar1 + 0x108))(), cVar3 == '\0')) {
              lVar6 = 0;
            }
            else {
              uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
              lVar6 = FUN_144aff482(uVar4,plVar8);
            }
            plVar8[2] = lVar6;
            puVar9 = local_60;
          }
        }
      }
      local_50 = lVar6;
      FUN_148918380(param_1 + 2,local_54,&local_50);
      plVar8 = plVar8 + 3;
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != 0);
  }
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x78);
  FUN_140115bdc(puVar9,param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x50);
  FUN_140115bdc(param_1 + 0xc,param_2 + 0x30);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14890f66c FUN_14890f66c body=306 status=ok
// SIG undefined FUN_14890f66c(void)

bool FUN_14890f66c(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50 [2];
  int local_48;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_2 + 0x68) != 0) {
    lVar4 = *(longlong *)(param_2 + 0x60);
    lVar5 = (longlong)*(int *)(param_2 + 0x68) * 0xc0;
    do {
      cVar1 = FUN_140f0e588(lVar4);
      if (cVar1 != '\0') goto LAB_14890f6c3;
      lVar4 = lVar4 + 0xc0;
      lVar5 = lVar5 + -0xc0;
    } while (lVar5 != 0);
  }
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    local_58 = *(undefined8 *)(param_2 + 0x4d8);
    FUN_1446dcdd4(local_50);
    if (DAT_14cb86df8 == 0) {
LAB_14890f794:
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_144837462(DAT_14cb86df8,local_50);
      if ((lVar4 == 0) || (*(char *)(lVar4 + 0x58) == '\0')) goto LAB_14890f794;
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0xa8) == '\x01')) {
      puVar3 = &DAT_14c9485f0;
      if (*(undefined4 **)(lVar4 + 8) != (undefined4 *)0x0) {
        puVar3 = *(undefined4 **)(lVar4 + 8);
      }
      FUN_144a7660c(puVar3,local_50,1);
      if (local_48 != 0) {
        local_50[0] = FUN_144a78877(local_50[0],local_48);
      }
      iVar2 = FUN_1407a7398(param_1 + 0x10,local_50[0],local_50);
      bVar6 = iVar2 != -1;
      goto LAB_14890f6c5;
    }
  }
LAB_14890f6c3:
  bVar6 = false;
LAB_14890f6c5:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14890f7a0 FUN_14890f7a0 body=1301 status=ok
// SIG undefined FUN_14890f7a0(void)

void FUN_14890f7a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  undefined8 local_160;
  longlong local_158;
  longlong local_150;
  undefined8 local_148;
  longlong *plStack_140;
  undefined8 local_138;
  undefined4 local_130;
  longlong *local_128;
  undefined8 uStack_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  longlong *local_f8;
  undefined1 *local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  longlong local_d8 [4];
  longlong local_b8 [2];
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_150 = param_1 + 0x10;
  local_160 = param_3;
  local_158 = param_1;
  FUN_1488b0ade(local_150,0);
  local_98 = 0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_1410d29a6(param_2,local_b8);
  local_f8 = (longlong *)&DAT_100000000;
  local_e8 = (longlong *)&DAT_ffffffff;
  local_e0 = 0;
  iVar15 = 0;
  local_f0 = local_a8;
  if (local_90 != 0) {
    FUN_1449c0562(&local_f8);
    iVar15 = local_90;
  }
  local_110 = local_e8;
  plVar12 = local_110;
  local_108 = local_e0;
  local_104 = uStack_dc;
  uStack_120 = local_f8;
  local_118 = local_f0;
  local_110._4_4_ = (int)((ulonglong)local_e8 >> 0x20);
  local_128 = local_b8;
  if ((local_110._4_4_ != iVar15) || (local_f0 != local_a8)) {
    iVar4 = local_110._4_4_;
    local_110 = plVar12;
    do {
      local_138 = *(undefined8 *)(*local_128 + (longlong)iVar4 * 0x28);
      local_130 = *(undefined4 *)(*local_128 + 8 + (longlong)iVar4 * 0x28);
      FUN_1448075d0(&local_f8,&local_138);
      if (((DAT_14cb86df8 == 0) || (lVar8 = FUN_144837462(DAT_14cb86df8,&local_f8), lVar8 == 0)) ||
         (*(char *)(lVar8 + 0x58) == '\0')) {
        lVar8 = 0;
      }
      if (CONCAT44(uStack_dc,local_e0) != 0) {
        FUN_1400020a8();
      }
      if (lVar8 != 0) {
        puVar11 = *(undefined4 **)(lVar8 + 8);
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = &DAT_14c9485f0;
        }
        FUN_144a7660c(puVar11,&local_f8,1);
        uVar14 = (ulonglong)local_f8 & 0xffffffff;
        if ((int)local_f0 != 0) {
          uVar5 = FUN_144a78877(uVar14,(ulonglong)local_f0 & 0xffffffff);
          uVar14 = (ulonglong)uVar5;
        }
        uVar6 = FUN_1410d237c(local_160,uVar14,&local_f8);
        local_f8 = (longlong *)0x0;
        local_e8 = (longlong *)0x0;
        local_148 = 0;
        plStack_140 = (longlong *)0x0;
        local_168 = 1;
        FUN_1410d25a7(lVar8,uVar6,&local_148,&local_f8);
        plVar12 = plStack_140;
        if (plStack_140 != (longlong *)0x0) {
          LOCK();
          plVar13 = plStack_140 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*plStack_140)(plStack_140);
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
        if (local_f8 != (longlong *)0x0) {
          plVar12 = local_e8;
          if (local_e8 == (longlong *)0x0) {
            plVar12 = local_d8;
          }
          (**(code **)(*plVar12 + 0x10))();
        }
      }
      local_110 = (longlong *)CONCAT44(local_110._4_4_,(uint)local_110 & ~uStack_120._4_4_);
      FUN_1449c0562(&uStack_120);
      iVar4 = local_110._4_4_;
      plVar12 = local_110;
    } while (local_128 != local_b8 || (local_118 != local_a8 || local_110._4_4_ != iVar15));
  }
  local_110 = plVar12;
  uVar6 = FUN_140c05e56(*(undefined8 *)(local_158 + 8));
  puVar7 = (undefined8 *)FUN_14891b18c(uVar6);
  lVar8 = local_150;
  if ((puVar7 != (undefined8 *)0x0) && ((longlong)*(int *)(puVar7 + 1) != 0)) {
    plVar12 = (longlong *)*puVar7;
    lVar16 = (longlong)*(int *)(puVar7 + 1) * 0x18;
    do {
      lVar9 = plVar12[1];
      if (lVar9 == 0) {
        uVar6 = FUN_140b79a36();
        lVar9 = FUN_14477b664(uVar6);
        plVar12[1] = lVar9;
      }
      lVar10 = plVar12[2];
      if (lVar10 == 0) {
        if ((lVar9 != 0) && (*plVar12 != 0)) {
          plVar13 = *(longlong **)(lVar9 + 0xb8);
          if ((plVar13 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar3 == '\0')) {
            plVar12[2] = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar13 + 0x110))(plVar13);
            lVar10 = FUN_144aff482(uVar6,plVar12);
            plVar12[2] = lVar10;
            if (lVar10 != 0) goto LAB_14890fb50;
          }
        }
      }
      else {
LAB_14890fb50:
        puVar11 = &DAT_14c9485f0;
        if (*(undefined4 **)(lVar10 + 8) != (undefined4 *)0x0) {
          puVar11 = *(undefined4 **)(lVar10 + 8);
        }
        FUN_144a7660c(puVar11,&local_f8,1);
        FUN_1409612f0(lVar8,&local_128,&local_f8,0);
        puVar11 = &DAT_14c9485f0;
        if (*(undefined4 **)(lVar10 + 8) != (undefined4 *)0x0) {
          puVar11 = *(undefined4 **)(lVar10 + 8);
        }
        FUN_144a7660c(puVar11,&local_f8,1);
        uVar14 = (ulonglong)local_f8 & 0xffffffff;
        if ((int)local_f0 != 0) {
          uVar5 = FUN_144a78877(uVar14,(ulonglong)local_f0 & 0xffffffff);
          uVar14 = (ulonglong)uVar5;
        }
        uVar6 = FUN_1410d237c(local_160,uVar14,&local_f8);
        local_f8 = (longlong *)0x0;
        local_e8 = (longlong *)0x0;
        local_128 = (longlong *)0x0;
        uStack_120 = (longlong *)0x0;
        local_168 = 1;
        FUN_1410d25a7(lVar10,uVar6,&local_128);
        plVar13 = uStack_120;
        if (uStack_120 != (longlong *)0x0) {
          LOCK();
          plVar1 = uStack_120 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*uStack_120)(uStack_120);
            LOCK();
            piVar2 = (int *)((longlong)plVar13 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
        }
        if (local_f8 != (longlong *)0x0) {
          plVar13 = local_e8;
          if (local_e8 == (longlong *)0x0) {
            plVar13 = local_d8;
          }
          (**(code **)(*plVar13 + 0x10))();
        }
      }
      plVar12 = plVar12 + 3;
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != 0);
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1457c7a60(local_b8);
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14890fcb6 FUN_14890fcb6 body=446 status=ok
// SIG undefined FUN_14890fcb6(void)

void FUN_14890fcb6(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  uint local_b8;
  int iStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined1 *local_a0;
  uint local_98;
  int iStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88 [2];
  undefined1 local_78 [16];
  undefined8 local_68;
  int local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_68 = 0;
  local_60 = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_14890fe76(0,param_2,local_88);
  local_a8 = 0x100000000;
  local_98 = 0xffffffff;
  iStack_94 = 0;
  local_90 = 0;
  iVar2 = 0;
  local_a0 = local_78;
  if (local_60 != 0) {
    FUN_1449c0562(&local_a8);
    iVar2 = local_60;
  }
  local_b8 = local_98;
  iStack_b4 = iStack_94;
  local_b0 = local_90;
  local_ac = local_8c;
  local_c8 = local_a8;
  local_c0 = local_a0;
  local_d0 = local_88;
  if ((iStack_94 != iVar2) || (local_a0 != local_78)) {
    do {
      lVar1 = FUN_14890f1dc(param_1,*local_d0 + (longlong)iStack_b4 * 0x28,
                            *local_d0 + (longlong)iStack_b4 * 0x28 + 0x10);
      if (lVar1 != 0) {
        FUN_140f42b12(lVar1);
        FUN_143df5d48(lVar1);
        FUN_143df5d4a(lVar1);
        FUN_140f54da8(lVar1);
      }
      local_b8 = local_b8 & ~local_c8._4_4_;
      FUN_1449c0562(&local_c8);
    } while (local_d0 != local_88 || (local_c0 != local_78 || iStack_b4 != iVar2));
  }
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_1457c7a60(local_88);
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14890fe76 FUN_14890fe76 body=1480 status=ok
// SIG undefined FUN_14890fe76(void)

void FUN_14890fe76(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  size_t sVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined ***pppuVar15;
  ulonglong uVar16;
  wchar_t *_Str;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  longlong *local_158;
  longlong *local_150;
  undefined **local_148;
  size_t local_140;
  undefined8 uStack_138;
  undefined1 local_130;
  undefined2 local_128;
  undefined1 local_126;
  undefined8 local_120;
  wchar_t *local_118;
  undefined4 local_110;
  byte *local_108;
  longlong *local_100;
  wchar_t *local_f8;
  undefined8 uStack_f0;
  undefined1 *local_e8;
  int local_e0;
  undefined ***local_d8;
  undefined **local_c8;
  code *local_c0;
  longlong local_68;
  undefined **local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar7 = FUN_14891adba(*(undefined8 *)(param_1 + 8));
  if (lVar7 != 0) {
    lVar7 = FUN_14895e26c(lVar7);
    local_f8 = (wchar_t *)0x0;
    uStack_f0 = 0;
    if (lVar7 != 0) {
      local_168 = 1;
      cVar5 = FUN_143e21d5e(lVar7,&DAT_14cb86718,param_2,&local_f8);
      if (cVar5 != '\0') {
        local_118 = L"UnspecifiedFile";
        local_110 = 0xf;
        local_128 = 0;
        local_126 = 0;
        local_120 = 0;
        _Str = local_f8;
        if ((int)uStack_f0 == 0) {
          _Str = L"";
        }
        local_68 = 0;
        if (_Str == (wchar_t *)0x0) {
          local_60 = (undefined **)0x0;
          local_58 = 0;
        }
        else {
          sVar8 = wcslen(_Str);
          FUN_1446fe5a4(&local_e8,_Str,sVar8 & 0xffffffff,1);
        }
        local_148 = local_60;
        local_140 = strlen((char *)local_60);
        FUN_141183efe(&local_108,&local_148,&local_128,&local_118);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        if ((local_108 != (byte *)0x0) && ((*local_108 & 0x6b) == 3)) {
          local_148 = &PTR_FUN_14b35c2f0;
          local_140 = 0;
          uStack_138 = 0;
          local_130 = 1;
          uVar9 = FUN_146531ad0();
          FUN_1446e7478(&local_108,&local_148,uVar9,0);
          if ((longlong)(int)uStack_138 != 0) {
            lVar7 = (longlong)(int)uStack_138 << 7;
            sVar8 = local_140;
            do {
              lVar10 = *(longlong *)(sVar8 + 0x10);
              if (lVar10 == 0) {
                uVar9 = FUN_140b79a36();
                lVar10 = FUN_14477b664(uVar9);
                *(longlong *)(sVar8 + 0x10) = lVar10;
              }
              plVar2 = (longlong *)(sVar8 + 8);
              lVar13 = *(longlong *)(sVar8 + 0x18);
              if (lVar13 == 0) {
                if (lVar10 == 0) {
                  lVar13 = 0;
                }
                else {
                  lVar13 = 0;
                  if (*plVar2 != 0) {
                    plVar3 = *(longlong **)(lVar10 + 0xb8);
                    if ((plVar3 == (longlong *)0x0) ||
                       (cVar5 = (**(code **)(*plVar3 + 0x108))(), cVar5 == '\0')) {
                      lVar13 = 0;
                    }
                    else {
                      uVar9 = (**(code **)(*plVar3 + 0x110))(plVar3);
                      lVar13 = FUN_144aff482(uVar9,plVar2);
                    }
                    *(longlong *)(sVar8 + 0x18) = lVar13;
                  }
                }
              }
              puVar14 = &DAT_14c9485f0;
              if (*(undefined4 **)(lVar13 + 8) != (undefined4 *)0x0) {
                puVar14 = *(undefined4 **)(lVar13 + 8);
              }
              FUN_144a7660c(puVar14,&local_e8,1);
              FUN_1409612f0(param_1 + 0x10,&local_158,&local_e8,0);
              plVar11 = (longlong *)FUN_14001cc68(0xc0,0x10);
              plVar11[1] = (longlong)&DAT_100000001;
              *plVar11 = (longlong)&PTR_FUN_14b41b6c0;
              plVar3 = plVar11 + 2;
              FUN_14890f430(plVar3,sVar8);
              if (plVar11 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
                UNLOCK();
                LOCK();
                plVar4 = plVar11 + 1;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                if ((int)*plVar4 == 0) {
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
              lVar10 = *(longlong *)(sVar8 + 0x10);
              if (lVar10 == 0) {
                uVar9 = FUN_140b79a36();
                lVar10 = FUN_14477b664(uVar9);
                *(longlong *)(sVar8 + 0x10) = lVar10;
              }
              lVar13 = *(longlong *)(sVar8 + 0x18);
              if (lVar13 == 0) {
                if (lVar10 == 0) {
                  lVar13 = 0;
                }
                else {
                  lVar13 = 0;
                  if (*plVar2 != 0) {
                    plVar4 = *(longlong **)(lVar10 + 0xb8);
                    if ((plVar4 == (longlong *)0x0) ||
                       (cVar5 = (**(code **)(*plVar4 + 0x108))(), cVar5 == '\0')) {
                      lVar13 = 0;
                    }
                    else {
                      uVar9 = (**(code **)(*plVar4 + 0x110))(plVar4);
                      lVar13 = FUN_144aff482(uVar9,plVar2);
                    }
                    *(longlong *)(sVar8 + 0x18) = lVar13;
                  }
                }
              }
              puVar14 = &DAT_14c9485f0;
              if (*(undefined4 **)(lVar13 + 8) != (undefined4 *)0x0) {
                puVar14 = *(undefined4 **)(lVar13 + 8);
              }
              FUN_144a7660c(puVar14,&local_e8,1);
              uVar16 = (ulonglong)local_e8 & 0xffffffff;
              if (local_e0 != 0) {
                uVar6 = FUN_144a78877(uVar16,local_e0);
                uVar16 = (ulonglong)uVar6;
              }
              uVar9 = FUN_1410d237c(param_3,uVar16,&local_e8);
              local_d8 = (undefined ***)0x0;
              local_c8 = &PTR_LAB_14b41b6e0;
              local_c0 = FUN_143df3a38;
              local_e8 = &LAB_1489184ea;
              if (plVar11 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
                UNLOCK();
              }
              lVar10 = *(longlong *)(sVar8 + 0x10);
              local_158 = plVar3;
              local_150 = plVar11;
              if (lVar10 == 0) {
                uVar12 = FUN_140b79a36();
                lVar10 = FUN_14477b664(uVar12);
                *(longlong *)(sVar8 + 0x10) = lVar10;
              }
              lVar13 = *(longlong *)(sVar8 + 0x18);
              if (lVar13 == 0) {
                if (lVar10 == 0) {
                  lVar13 = 0;
                }
                else {
                  lVar13 = 0;
                  if (*plVar2 != 0) {
                    plVar3 = *(longlong **)(lVar10 + 0xb8);
                    if ((plVar3 == (longlong *)0x0) ||
                       (cVar5 = (**(code **)(*plVar3 + 0x108))(), cVar5 == '\0')) {
                      lVar13 = 0;
                    }
                    else {
                      uVar12 = (**(code **)(*plVar3 + 0x110))(plVar3);
                      lVar13 = FUN_144aff482(uVar12,plVar2);
                    }
                    *(longlong *)(sVar8 + 0x18) = lVar13;
                  }
                }
              }
              local_168 = 1;
              FUN_1410d25a7(lVar13,uVar9,&local_158);
              plVar2 = local_150;
              if (local_150 != (longlong *)0x0) {
                LOCK();
                plVar3 = local_150 + 1;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)*plVar3 == 0) {
                  (**(code **)*local_150)(local_150);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar2 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar2 + 0x10))(plVar2);
                  }
                }
              }
              if (local_e8 != (undefined1 *)0x0) {
                pppuVar15 = local_d8;
                if (local_d8 == (undefined ***)0x0) {
                  pppuVar15 = &local_c8;
                }
                (*(code *)(*pppuVar15)[2])();
              }
              if (plVar11 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar11 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
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
              sVar8 = sVar8 + 0x80;
              lVar7 = lVar7 + -0x80;
            } while (lVar7 != 0);
          }
          FUN_148785c5a(&local_148);
        }
        if (local_100 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_100 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_100)(local_100);
            LOCK();
            piVar1 = (int *)((longlong)local_100 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_100 + 0x10))(local_100);
            }
          }
        }
      }
      if (local_f8 != (wchar_t *)0x0) {
        FUN_1400020a8(local_f8);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148910440 FUN_148910440 body=26 status=ok
// SIG undefined FUN_148910440(void)

undefined1 FUN_148910440(void)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1406b1df4();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(lVar2 + 0x7f);
  }
  return uVar1;
}



// FUNCTION 14891045a FUN_14891045a body=165 status=ok
// SIG undefined FUN_14891045a(void)

undefined8 FUN_14891045a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [36];
  undefined1 local_54 [12];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (1 < *(int *)(param_1 + 4)) {
    FUN_144a7660c(param_1,local_54,1);
    FUN_1448075d0(local_48,local_54);
    lVar1 = FUN_14060ebb8(local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (lVar1 != 0) {
      FUN_144a659ac(param_1,local_48,1);
      uVar2 = FUN_1406b1d14(lVar1,local_48);
      goto LAB_148910478;
    }
  }
  uVar2 = 0;
LAB_148910478:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148910500 FUN_148910500 body=145 status=ok
// SIG undefined FUN_148910500(void)

void FUN_148910500(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1457af436(param_1,2);
  FUN_148910c3c(param_1);
  lVar1 = *(longlong *)(param_1 + 0x40);
  if ((longlong)*(int *)(lVar1 + 0x330) != 0) {
    lVar2 = 0;
    do {
      if (*(char *)(*(longlong *)(*(longlong *)(lVar1 + 0x328) + lVar2) + 8) == '\x02')
      goto LAB_148910552;
      lVar2 = lVar2 + 0x10;
    } while ((longlong)*(int *)(lVar1 + 0x330) * 0x10 != lVar2);
  }
  if (*(char *)(lVar1 + 0x408) != '\x02') {
    return;
  }
LAB_148910552:
  lVar1 = FUN_1401bd7a2();
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x50) == '\x01') {
      FUN_14890ecb8(*(undefined8 *)(param_1 + 0x28),param_1);
      return;
    }
    if (*(char *)(lVar1 + 0x50) != '\0') {
      return;
    }
  }
  FUN_14890ec7c(*(undefined8 *)(param_1 + 0x28),param_1);
  return;
}



// FUNCTION 148910592 FUN_148910592 body=155 status=ok
// SIG undefined FUN_148910592(void)

void FUN_148910592(longlong param_1,char param_2,uint param_3)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 0x48) != (char)param_3) {
    FUN_140ce26f2(param_1);
    *(char *)(param_1 + 0x48) = param_2;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x49);
  *(undefined1 *)(param_1 + 0x49) = 1;
  FUN_143df53bc(param_1);
  lVar3 = FUN_140dcc81c(*(undefined8 *)(param_1 + 0x40));
  if (lVar3 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = FUN_141042fba(lVar3);
  }
  if (cVar2 == param_2) {
    FUN_140dcc746(*(undefined8 *)(param_1 + 0x40),param_3);
    if ((char)param_3 == '\x11') {
      FUN_148910500(*(undefined8 *)(param_1 + 0x40));
    }
    else {
      if ((param_3 & 0xff) == 0xd) {
        uVar4 = *(undefined8 *)(param_1 + 0x40);
        uVar5 = 1;
      }
      else {
        if ((param_3 & 0xff) != 9) goto LAB_1489105fc;
        uVar4 = *(undefined8 *)(param_1 + 0x40);
        uVar5 = 3;
      }
      FUN_1457af436(uVar4,uVar5);
    }
  }
LAB_1489105fc:
  *(undefined1 *)(param_1 + 0x49) = uVar1;
  return;
}



// FUNCTION 14891062e FUN_14891062e body=260 status=ok
// SIG undefined FUN_14891062e(void)

undefined8 FUN_14891062e(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined8 uStack_50;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x40) + 8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = &DAT_14c9485f0;
  }
  FUN_144a7660c(puVar1,&local_58,1);
  FUN_1408226d0(&local_58,&local_40,1);
  puVar3 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar3 = local_40;
  }
  puVar1 = *(undefined4 **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0xa0) + 8);
  puVar2 = &DAT_14c9485f0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
  }
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  FUN_1400b2348(puVar2,&local_58,1);
  puVar4 = &DAT_149dfb77a;
  if ((int)uStack_50 != 0) {
    puVar4 = local_58;
  }
  FUN_140002266(param_2,L"%s:%s",puVar4,puVar3);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148910734 FUN_148910734 body=111 status=ok
// SIG undefined FUN_148910734(void)

undefined8 FUN_148910734(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [12];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x40) + 8);
  puVar2 = &DAT_14c9485f0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
  }
  FUN_144a7660c(puVar2,local_24,1);
  FUN_1408226d0(local_24,param_2,1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489107b6 FUN_1489107b6 body=144 status=ok
// SIG undefined FUN_1489107b6(void)

longlong FUN_1489107b6(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0xa0) + 0x4d8);
  FUN_1446dcdd4(local_38);
  if (DAT_14cb86df8 != 0) {
    lVar1 = FUN_144837462(DAT_14cb86df8,local_38);
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x58) != '\0')) goto LAB_148910812;
  }
  lVar1 = 0;
LAB_148910812:
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148910848 FUN_148910848 body=334 status=ok
// SIG undefined FUN_148910848(void)

undefined8 FUN_148910848(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0xb8);
  lVar4 = lVar2;
  if (lVar2 != 0) {
    do {
      lVar5 = lVar4;
      lVar4 = *(longlong *)(lVar5 + 0xb8);
    } while (*(longlong *)(lVar5 + 0xb8) != 0);
    if (((*(longlong *)(lVar5 + 0x98) != 0) || (*(longlong *)(lVar5 + 0xa0) != 0)) &&
       (cVar1 = FUN_140f3d9e2(lVar2), cVar1 == '\0')) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
    lVar2 = FUN_1406b1df4(*(undefined8 *)(lVar2 + 0x40));
    if (lVar2 == 0) {
      local_31 = 1;
    }
    else {
      local_31 = *(undefined1 *)(lVar2 + 0x80);
    }
    cVar1 = FUN_143df1370(&local_31,param_1);
    if (cVar1 == '\0') {
LAB_14891099f:
      uVar3 = 0;
      goto LAB_1489108eb;
    }
    lVar2 = FUN_1406b1df4(*(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0x40));
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x7f) == '\x01')) {
      local_48 = 0;
      uStack_40 = 0;
      FUN_1457c9f7e(param_1,&local_48,0);
      lVar2 = local_48;
      lVar4 = (longlong)(int)uStack_40;
      if (lVar4 == 0) {
        cVar1 = '\x01';
      }
      else {
        lVar5 = 0;
        do {
          cVar1 = FUN_143df1370(&local_31,*(undefined8 *)(lVar2 + lVar5));
          if (cVar1 == '\0') break;
          bVar6 = lVar4 * 8 + -8 != lVar5;
          lVar5 = lVar5 + 8;
        } while (bVar6);
      }
      if (local_48 != 0) {
        FUN_1400020a8(local_48);
      }
      if (cVar1 == '\0') goto LAB_14891099f;
    }
  }
  uVar3 = 1;
LAB_1489108eb:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1489109aa FUN_1489109aa body=98 status=ok
// SIG undefined FUN_1489109aa(void)

undefined8 * FUN_1489109aa(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0xf8) == 0) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x338) == 0) {
      *param_2 = 0;
      param_2[1] = 0;
      return param_2;
    }
    lVar2 = FUN_140dcc81c();
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_140f43134(lVar2);
    }
  }
  else {
    uVar1 = FUN_14891c182(*(longlong *)(param_1 + 0xf8));
  }
  FUN_140e1bd88(param_2,uVar1);
  return param_2;
}



// FUNCTION 148910a0c FUN_148910a0c body=33 status=ok
// SIG undefined FUN_148910a0c(void)

undefined8 FUN_148910a0c(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140dcc81c();
  if (lVar1 != 0) {
    uVar2 = FUN_140f43134(lVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148910a2e FUN_148910a2e body=33 status=ok
// SIG undefined FUN_148910a2e(void)

undefined8 FUN_148910a2e(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140dcc81c();
  if (lVar1 != 0) {
    uVar2 = FUN_145ad3200(lVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148910a66 FUN_148910a66 body=38 status=ok
// SIG undefined FUN_148910a66(void)

undefined8 FUN_148910a66(void)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_140dcc81c();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = FUN_141042fba(lVar1);
    uVar3 = CONCAT71((int7)((uVar2 & 0xffffffffffffff1e) >> 8),
                     (char)(uVar2 & 0xffffffffffffff1e) == '\x04');
  }
  return uVar3;
}



// FUNCTION 148910a8c FUN_148910a8c body=36 status=ok
// SIG undefined FUN_148910a8c(void)

bool FUN_148910a8c(void)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = FUN_140dcc81c();
  if (lVar2 == 0) {
    bVar3 = false;
  }
  else {
    bVar1 = FUN_141042fba(lVar2);
    bVar3 = 5 < bVar1;
  }
  return bVar3;
}



// FUNCTION 148910ab0 FUN_148910ab0 body=228 status=ok
// SIG undefined FUN_148910ab0(void)

undefined8 FUN_148910ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_149e35290;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14b41b770;
  local_38[3] = param_3;
  local_38[4] = &LAB_148910b96;
  FUN_140feff30(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148910b9c FUN_148910b9c body=139 status=ok
// SIG undefined FUN_148910b9c(void)

undefined8 FUN_148910b9c(char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  bool bVar4;
  
  if (*param_1 == '\0') {
    return 1;
  }
  if (*param_1 != '\x01') {
    return 0;
  }
  cVar1 = *param_3;
  if (cVar1 == '\x03') {
    bVar4 = *(longlong *)(param_3 + 4) == 0;
LAB_148910bb8:
    uVar2 = (ulonglong)!bVar4;
  }
  else if (cVar1 == '\x02') {
    uVar2 = (ulonglong)*(uint *)(param_3 + 0xc);
  }
  else {
    if (cVar1 == '\x01') {
      bVar4 = *(int *)(param_3 + 0xc) == 0;
      goto LAB_148910bb8;
    }
    uVar2 = 0;
  }
  cVar1 = *param_2;
  if (cVar1 == '\x03') {
    bVar4 = *(longlong *)(param_2 + 4) == 0;
  }
  else {
    if (cVar1 == '\x02') {
      uVar3 = *(uint *)(param_2 + 0xc);
      goto LAB_148910bd1;
    }
    if (cVar1 != '\x01') {
      uVar3 = 0;
      goto LAB_148910bd1;
    }
    bVar4 = *(int *)(param_2 + 0xc) == 0;
  }
  uVar3 = (uint)!bVar4;
LAB_148910bd1:
  return CONCAT71((int7)(uVar2 >> 8),
                  *(int *)(param_1 + 4) <= (int)uVar2 && (int)uVar3 < *(int *)(param_1 + 4));
}



// FUNCTION 148910c3c FUN_148910c3c body=49 status=ok
// SIG undefined FUN_148910c3c(void)

void FUN_148910c3c(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_140dcc81c();
  if (lVar2 != 0) {
    iVar1 = FUN_1488435ba(lVar2);
    FUN_1488435f4(lVar2,iVar1 + 1);
    return;
  }
  return;
}



// FUNCTION 148910c6e FUN_148910c6e body=325 status=ok
// SIG undefined FUN_148910c6e(void)

longlong FUN_148910c6e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong unaff_RSI;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    if (0 < (longlong)*(int *)(param_1 + 0x160)) {
      lVar4 = *(longlong *)(param_1 + 0x158);
      lVar7 = (longlong)*(int *)(param_1 + 0x160) * 0x10;
      plVar9 = *(longlong **)(lVar4 + -8 + lVar7);
      if (plVar9 != (longlong *)0x0) {
        iVar6 = (int)plVar9[1];
        unaff_RSI = 0;
        do {
          if (iVar6 == 0) goto LAB_148910d89;
          LOCK();
          iVar5 = (int)plVar9[1];
          bVar10 = iVar6 == iVar5;
          if (bVar10) {
            *(int *)(plVar9 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar10);
        unaff_RSI = *(longlong *)(lVar4 + lVar7 + -0x10);
        LOCK();
        plVar8 = plVar9 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
        goto LAB_148910d89;
      }
    }
  }
  else if ((longlong)*(int *)(param_1 + 0x160) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x158);
    plVar8 = plVar9 + (longlong)*(int *)(param_1 + 0x160) * 2;
    do {
      plVar3 = (longlong *)plVar9[1];
      if (plVar3 != (longlong *)0x0) {
        iVar6 = (int)plVar3[1];
        do {
          if (iVar6 == 0) goto LAB_148910d1d;
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar10 = iVar6 == iVar5;
          if (bVar10) {
            *(int *)(plVar3 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar10);
        lVar4 = *plVar9;
        if (lVar4 == 0) {
          bVar10 = true;
        }
        else {
          FUN_14891e602(lVar4,&local_50);
          bVar10 = local_50 != param_2;
          if (!bVar10) {
            unaff_RSI = lVar4;
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
        if (!bVar10) goto LAB_148910d89;
      }
LAB_148910d1d:
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar8);
  }
  unaff_RSI = 0;
LAB_148910d89:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RSI;
}



// FUNCTION 148910db4 FUN_148910db4 body=115 status=ok
// SIG undefined FUN_148910db4(void)

void FUN_148910db4(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_18 = (longlong *)param_2[1];
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_18 + 0xc) = *(int *)((longlong)local_18 + 0xc) + 1;
    UNLOCK();
  }
  FUN_148918cf8(param_1 + 0x158,&local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_18 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_18 + 0x10))();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148910e28 FUN_148910e28 body=120 status=ok
// SIG undefined FUN_148910e28(void)

void FUN_148910e28(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = (longlong *)param_2[1];
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_20 + 0xc) = *(int *)((longlong)local_20 + 0xc) + 1;
    UNLOCK();
  }
  local_18 = &local_28;
  FUN_148918ed2(param_1 + 0x158);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148910ea2 FUN_148910ea2 body=288 status=ok
// SIG undefined FUN_148910ea2(void)

void FUN_148910ea2(longlong param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = FUN_140dcc81c();
  if (lVar5 != 0) {
    bVar4 = FUN_141042fba(lVar5);
    if (1 < bVar4) {
      FUN_140ce26f2(*(undefined8 *)(param_1 + 0x30));
      FUN_14890f002(param_1);
      FUN_140dcc746(param_1,1);
      local_38 = (void *)0x0;
      uStack_30 = 0;
      uVar1 = *(uint *)(param_1 + 0xe0);
      if ((longlong)(int)uVar1 != 0) {
        uStack_30 = (ulonglong)uVar1;
        FUN_140f54fb6(&local_38,0);
        memcpy(local_38,*(void **)(param_1 + 0xd8),(longlong)(int)uVar1 << 3);
        pvVar3 = local_38;
        lVar5 = (longlong)(int)uStack_30;
        if (lVar5 != 0) {
          lVar6 = 0;
          do {
            FUN_148910ea2(*(undefined8 *)((longlong)pvVar3 + lVar6));
            lVar6 = lVar6 + 8;
          } while (lVar5 * 8 != lVar6);
        }
      }
      lVar5 = FUN_1406b1df4(*(undefined8 *)(param_1 + 0x40));
      if ((lVar5 != 0) && (iVar2 = *(int *)(param_1 + 0xb0), (longlong)iVar2 != 0)) {
        lVar5 = *(longlong *)(param_1 + 0xa8);
        lVar6 = 0;
        do {
          FUN_148910ea2(*(undefined8 *)(lVar5 + lVar6));
          lVar6 = lVar6 + 8;
        } while ((longlong)iVar2 * 8 != lVar6);
      }
      if (local_38 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148910fc4 FUN_148910fc4 body=172 status=ok
// SIG undefined FUN_148910fc4(void)

void FUN_148910fc4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  undefined1 local_60 [4];
  undefined8 local_5c;
  undefined4 local_54;
  undefined1 local_50 [40];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60[0] = 0;
  local_5c = 0;
  local_54 = 0;
  plVar1 = (longlong *)FUN_140672052(*(undefined8 *)(param_1 + 8));
  FUN_143df1f20(param_1,local_50);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x2b0))(plVar1);
    if (lVar2 != 0) {
      FUN_14039fc7b(local_50,local_60,lVar2,0);
    }
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_14883d900(local_60,1);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148911072 FUN_148911072 body=41 status=ok
// SIG undefined FUN_148911072(void)

void FUN_148911072(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140dcc81c();
  if (lVar1 != 0) {
    FUN_14884358e(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 14891109c FUN_14891109c body=41 status=ok
// SIG undefined FUN_14891109c(void)

void FUN_14891109c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140dcc81c();
  if (lVar1 != 0) {
    FUN_148843598(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 1489110d2 FUN_1489110d2 body=183 status=ok
// SIG undefined FUN_1489110d2(void)

longlong * FUN_1489110d2(char *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 == '\x01') {
    FUN_140002266(&local_28,&DAT_149e063bc,*(undefined4 *)(param_1 + 4));
    if (&local_28 == param_2) {
      if (local_28 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_28;
      *(undefined4 *)(param_2 + 1) = local_20;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
    }
  }
  else if (*param_1 == '\0') {
    FUN_14020fad6(param_2,L"Updated");
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14891118c FUN_14891118c body=216 status=ok
// SIG undefined FUN_14891118c(void)

undefined8 FUN_14891118c(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1489110d2(param_1,&local_28);
  if (1 < local_20) {
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    FUN_14009b010(&local_38,1,0);
    FUN_1446dcc2e(param_2,&local_38);
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
    puVar4 = local_28;
    if (local_20 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_38,puVar4,1);
    FUN_1401269c0(param_2,&local_38);
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 14891126a FUN_14891126a body=259 status=ok
// SIG undefined FUN_14891126a(void)

void FUN_14891126a(longlong param_1,longlong param_2)

{
  undefined1 auStack_a8 [36];
  undefined1 local_84 [12];
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  int local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_143df207e();
  FUN_140ac173c(local_84,param_1 + 0x50);
  FUN_14011750a(local_84,param_2);
  FUN_14011750a(local_78,param_2);
  FUN_14011750a(local_6c,param_2);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    FUN_14105743e(&local_60,local_84);
    FUN_1411b8130(param_1 + 0x50,&local_60);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    uStack_58 = DAT_14cb7bba0;
    uStack_5c = DAT_14cb7bb98._4_4_;
    local_60 = (int)DAT_14cb7bb98;
    FUN_144928d62(param_1 + 0x60,1,&local_60);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14891136e FUN_14891136e body=321 status=ok
// SIG undefined FUN_14891136e(void)

void FUN_14891136e(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [72];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar1 = FUN_1401144ce((undefined8 *)(param_1 + 0x50));
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x30);
    plVar3 = (longlong *)FUN_140ec3c65(uVar2);
    if (plVar3 != (longlong *)0x0) {
      local_50 = 0;
      uStack_48 = 0;
      local_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_60 = *(undefined8 *)(param_1 + 0x50);
      local_58 = *(undefined4 *)(param_1 + 0x58);
      FUN_1447715ec(&local_50,param_1 + 0x60);
      FUN_1489114b0(local_a8,param_1);
      (**(code **)(*plVar3 + 0x70))(plVar3,&local_b0,&local_60,local_a8);
      *(undefined8 *)(param_1 + 0x88) = local_b0;
      FUN_1449db362(local_a8);
      if (*(longlong *)(param_1 + 0x88) != 0) {
        lVar4 = (**(code **)(*plVar3 + 0x60))(plVar3,&local_60);
        if (lVar4 != 0) {
          local_c0 = *(longlong *)(lVar4 + 0x10);
          if (*(longlong *)(lVar4 + 0x10) == 0) {
            local_c0 = lVar4;
          }
          local_b8 = *(undefined4 *)(lVar4 + 0x18);
          FUN_148911678(param_1,local_a8);
        }
      }
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489114b0 FUN_1489114b0 body=381 status=ok
// SIG undefined FUN_1489114b0(void)

longlong * FUN_1489114b0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_1489115bb:
    *puVar3 = &PTR_LAB_14b3fc100;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41b800;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_14891162e;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_1489115bb;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b3fc100;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41b800;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_14891162e;
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
  return param_1;
}



// FUNCTION 14891162e FUN_14891162e body=73 status=ok
// SIG undefined FUN_14891162e(void)

void FUN_14891162e(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  local_10 = *(undefined4 *)(param_3 + 1);
  FUN_148911678(param_1,param_2,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148911678 FUN_148911678 body=120 status=ok
// SIG undefined FUN_148911678(void)

void FUN_148911678(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  lVar2 = FUN_140d7fcdc();
  cVar1 = FUN_14069eaf4(param_1 + 0x44,lVar2);
  if (cVar1 == '\0') {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148911710 FUN_148911710 body=83 status=ok
// SIG undefined FUN_148911710(void)

void FUN_148911710(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  FUN_148911764();
  if (*(longlong *)(param_1 + 0x88) != 0) {
    uVar1 = FUN_14479d2ce(param_1 + 0x30);
    plVar2 = (longlong *)FUN_140ec3c65(uVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x78))(plVar2,param_1 + 0x50,*(undefined8 *)(param_1 + 0x88));
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
  }
  return;
}



// FUNCTION 148911764 FUN_148911764 body=149 status=ok
// SIG undefined FUN_148911764(void)

void FUN_148911764(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = FUN_14479d2ce((undefined8 *)(param_1 + 0x44));
  if (lVar1 != 0) {
    FUN_140457ffc(lVar1 + 0x2b8,param_1);
    FUN_140457ffc(lVar1 + 0x2d0,param_1);
    uVar2 = FUN_144a7b040();
    plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      lVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
      if (lVar1 != 0) {
        FUN_140d916fa(lVar1,param_1 + 0x90);
        FUN_140d9179c(lVar1,param_1 + 0x98);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x44) = 0;
  return;
}



// FUNCTION 148911958 FUN_148911958 body=374 status=ok
// SIG undefined FUN_148911958(void)

longlong * FUN_148911958(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_148911a61:
    *puVar3 = &PTR_LAB_14b41bb90;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41b950;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = param_3;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_148911a61;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b41bb90;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41b950;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = param_3;
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
  return param_1;
}



// FUNCTION 148911ada FUN_148911ada body=99 status=ok
// SIG undefined FUN_148911ada(void)

void FUN_148911ada(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  lVar1 = FUN_14479d2ce(param_1 + 0x44);
  if (lVar1 != 0) {
    uVar2 = FUN_144a7b040();
    plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      lVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
      if (lVar1 != 0) {
        uVar4 = FUN_140b54f46(lVar1);
        *(undefined4 *)(param_1 + 0x40) = uVar4;
      }
    }
  }
  FUN_1447f69b6(param_1 + 0x18);
  return;
}



// FUNCTION 148911b3e FUN_148911b3e body=26 status=ok
// SIG undefined FUN_148911b3e(void)

void FUN_148911b3e(longlong param_1,longlong param_2)

{
  int iVar1;
  
  *(bool *)param_1 = param_2 != 0;
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(short *)(param_2 + 0x538);
  }
  *(int *)(param_1 + 4) = iVar1;
  return;
}



// FUNCTION 148911b58 FUN_148911b58 body=33 status=ok
// SIG undefined FUN_148911b58(void)

void FUN_148911b58(char *param_1,longlong param_2)

{
  int iVar1;
  
  *param_1 = (param_2 != 0) * '\x02';
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(short *)(param_2 + 0x420);
  }
  *(int *)(param_1 + 4) = iVar1;
  return;
}



// FUNCTION 148911b7a FUN_148911b7a body=122 status=ok
// SIG undefined FUN_148911b7a(void)

undefined8 FUN_148911b7a(char *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  if (*param_1 == '\x01') {
    puVar1 = &DAT_14cb86ac8;
  }
  else {
    if (*param_1 != '\x02') goto LAB_148911bc8;
    puVar1 = &DAT_14cb86ad0;
  }
  local_18 = CONCAT44(*(int *)(param_1 + 4) + 1,(int)*puVar1);
LAB_148911bc8:
  FUN_1400021e4(&local_18,param_2);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148911bf6 FUN_148911bf6 body=54 status=ok
// SIG undefined FUN_148911bf6(void)

void FUN_148911bf6(char *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  *param_2 = 0;
  if (*param_1 == '\x01') {
    puVar1 = &DAT_14cb86ac8;
  }
  else {
    if (*param_1 != '\x02') {
      return;
    }
    puVar1 = &DAT_14cb86ad0;
  }
  *param_2 = *puVar1;
  *(int *)((longlong)param_2 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}



// FUNCTION 148911c30 FUN_148911c30 body=38 status=ok
// SIG undefined FUN_148911c30(void)

undefined8 FUN_148911c30(undefined8 param_1,int param_2)

{
  FUN_140d79878();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148911c5c FUN_148911c5c body=60 status=ok
// SIG undefined FUN_148911c5c(void)

undefined8 * FUN_148911c5c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b41a0d0;
  FUN_140170ace(param_1 + 10);
  FUN_140cab5ca(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148911c98 FUN_148911c98 body=38 status=ok
// SIG undefined FUN_148911c98(void)

undefined8 FUN_148911c98(undefined8 param_1,int param_2)

{
  FUN_141097b38();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148911cc6 FUN_148911cc6 body=26 status=ok
// SIG undefined FUN_148911cc6(void)

undefined8 FUN_148911cc6(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0xb0))();
  return param_2;
}



// FUNCTION 148911ce0 FUN_148911ce0 body=38 status=ok
// SIG undefined FUN_148911ce0(void)

undefined8 FUN_148911ce0(undefined8 param_1,int param_2)

{
  FUN_1403d96c2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148911d0c FUN_148911d0c body=38 status=ok
// SIG undefined FUN_148911d0c(void)

undefined8 FUN_148911d0c(undefined8 param_1,int param_2)

{
  FUN_140cab5ca();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148911d32 FUN_148911d32 body=147 status=ok
// SIG undefined FUN_148911d32(void)

void FUN_148911d32(longlong param_1,int param_2)

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



// FUNCTION 148911dc6 FUN_148911dc6 body=147 status=ok
// SIG undefined FUN_148911dc6(void)

void FUN_148911dc6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc0)) {
      uVar5 = uVar4 / 0xc0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148911e5a FUN_148911e5a body=54 status=ok
// SIG undefined FUN_148911e5a(void)

void FUN_148911e5a(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148911e90 FUN_148911e90 body=48 status=ok
// SIG undefined FUN_148911e90(void)

void FUN_148911e90(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 148911ec0 FUN_148911ec0 body=48 status=ok
// SIG undefined FUN_148911ec0(void)

void FUN_148911ec0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x14,4);
  }
  return;
}



// FUNCTION 148911ef0 FUN_148911ef0 body=114 status=ok
// SIG undefined FUN_148911ef0(void)

void FUN_148911ef0(longlong *param_1,int param_2)

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



// FUNCTION 148911f62 FUN_148911f62 body=138 status=ok
// SIG undefined FUN_148911f62(void)

void FUN_148911f62(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 148911fec FUN_148911fec body=138 status=ok
// SIG undefined FUN_148911fec(void)

void FUN_148911fec(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 148912076 FUN_148912076 body=147 status=ok
// SIG undefined FUN_148912076(void)

void FUN_148912076(longlong param_1,int param_2)

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



// FUNCTION 14891210a FUN_14891210a body=101 status=ok
// SIG undefined FUN_14891210a(void)

void FUN_14891210a(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x30 + *param_1);
  FUN_140d32de3(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x30 + (longlong)_Dst),(longlong)iVar2 * 0x30);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148912170 FUN_148912170 body=62 status=ok
// SIG undefined FUN_148912170(void)

void FUN_148912170(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1489121ae(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 1489121ae FUN_1489121ae body=112 status=ok
// SIG undefined FUN_1489121ae(void)

ulonglong FUN_1489121ae(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1489121e8;
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
LAB_1489121e8:
  return param_2 & 0xffffffff;
}



// FUNCTION 14891221e FUN_14891221e body=132 status=ok
// SIG undefined FUN_14891221e(void)

void FUN_14891221e(longlong param_1,int param_2)

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



// FUNCTION 1489122a4 FUN_1489122a4 body=89 status=ok
// SIG undefined FUN_1489122a4(void)

void FUN_1489122a4(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_140d32e71(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1489122fe FUN_1489122fe body=62 status=ok
// SIG undefined FUN_1489122fe(void)

void FUN_1489122fe(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14891233c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 14891233c FUN_14891233c body=93 status=ok
// SIG undefined FUN_14891233c(void)

ulonglong FUN_14891233c(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 14891239a FUN_14891239a body=381 status=ok
// SIG undefined FUN_14891239a(void)

longlong * FUN_14891239a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_1489124a5:
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41a950;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_14890bf24;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_1489124a5;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41a950;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_14890bf24;
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
  return param_1;
}



// FUNCTION 148912518 FUN_148912518 body=64 status=ok
// SIG undefined FUN_148912518(void)

undefined8 * FUN_148912518(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b41a950;
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



// FUNCTION 14891255c FUN_14891255c body=81 status=ok
// SIG undefined FUN_14891255c(void)

undefined8 FUN_14891255c(longlong param_1)

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



// FUNCTION 1489125b4 FUN_1489125b4 body=89 status=ok
// SIG undefined FUN_1489125b4(void)

bool FUN_1489125b4(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1489125ff;
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
LAB_1489125ff:
  return lVar6 == param_2;
}



// FUNCTION 14891262a FUN_14891262a body=118 status=ok
// SIG undefined FUN_14891262a(void)

void FUN_14891262a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41a950;
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



// FUNCTION 1489126a0 FUN_1489126a0 body=118 status=ok
// SIG undefined FUN_1489126a0(void)

void FUN_1489126a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41a950;
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



// FUNCTION 148912716 FUN_148912716 body=156 status=ok
// SIG undefined FUN_148912716(void)

void FUN_148912716(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b41a950;
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
                    /* WARNING: Could not recover jumptable at 0x0001489127a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489127b2 FUN_1489127b2 body=94 status=ok
// SIG undefined FUN_1489127b2(void)

void FUN_1489127b2(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001489127fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148912805. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148912810 FUN_148912810 body=93 status=ok
// SIG undefined FUN_148912810(void)

ulonglong FUN_148912810(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148912862:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148912862;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 14891286d FUN_14891286d body=96 status=ok
// SIG undefined FUN_14891286d(void)

void FUN_14891286d(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b41a9c0;
  puVar1[9] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 2;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[2] = &PTR_FUN_14b351e80;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  return;
}



// FUNCTION 1489128d8 FUN_1489128d8 body=29 status=ok
// SIG undefined FUN_1489128d8(void)

undefined8 FUN_1489128d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489128f6 FUN_1489128f6 body=158 status=ok
// SIG undefined FUN_1489128f6(void)

void FUN_1489128f6(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148912968;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148912968;
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
LAB_148912968:
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
                    /* WARNING: Could not recover jumptable at 0x000148912988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148912994 FUN_148912994 body=68 status=ok
// SIG undefined FUN_148912994(void)

undefined8 * FUN_148912994(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b41a9e0;
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



// FUNCTION 1489129dc FUN_1489129dc body=81 status=ok
// SIG undefined FUN_1489129dc(void)

undefined8 FUN_1489129dc(longlong param_1)

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



// FUNCTION 148912a34 FUN_148912a34 body=89 status=ok
// SIG undefined FUN_148912a34(void)

bool FUN_148912a34(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148912a7f;
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
LAB_148912a7f:
  return lVar6 == param_2;
}



// FUNCTION 148912aaa FUN_148912aaa body=118 status=ok
// SIG undefined FUN_148912aaa(void)

void FUN_148912aaa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41a9e0;
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



// FUNCTION 148912b20 FUN_148912b20 body=156 status=ok
// SIG undefined FUN_148912b20(void)

void FUN_148912b20(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b41a9e0;
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
                    /* WARNING: Could not recover jumptable at 0x000148912bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148912bbc FUN_148912bbc body=94 status=ok
// SIG undefined FUN_148912bbc(void)

void FUN_148912bbc(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148912c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148912c0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148912c1a FUN_148912c1a body=93 status=ok
// SIG undefined FUN_148912c1a(void)

ulonglong FUN_148912c1a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148912c6c:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148912c6c;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 148912c7c FUN_148912c7c body=81 status=ok
// SIG undefined FUN_148912c7c(void)

undefined8 FUN_148912c7c(longlong param_1)

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



// FUNCTION 148912cd4 FUN_148912cd4 body=89 status=ok
// SIG undefined FUN_148912cd4(void)

bool FUN_148912cd4(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148912d1f;
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
LAB_148912d1f:
  return lVar6 == param_2;
}



// FUNCTION 148912d2e FUN_148912d2e body=118 status=ok
// SIG undefined FUN_148912d2e(void)

void FUN_148912d2e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41aa70;
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



// FUNCTION 148912da4 FUN_148912da4 body=156 status=ok
// SIG undefined FUN_148912da4(void)

void FUN_148912da4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e6310;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b41aa70;
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
                    /* WARNING: Could not recover jumptable at 0x000148912e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148912e40 FUN_148912e40 body=98 status=ok
// SIG undefined FUN_148912e40(void)

void FUN_148912e40(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148912e89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148912e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148912ea2 FUN_148912ea2 body=94 status=ok
// SIG undefined FUN_148912ea2(void)

ulonglong FUN_148912ea2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148912ef5:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148912ef5;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 148912f00 FUN_148912f00 body=64 status=ok
// SIG undefined FUN_148912f00(void)

undefined8 * FUN_148912f00(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b41ab00;
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



// FUNCTION 148912f44 FUN_148912f44 body=81 status=ok
// SIG undefined FUN_148912f44(void)

undefined8 FUN_148912f44(longlong param_1)

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



// FUNCTION 148912f9c FUN_148912f9c body=89 status=ok
// SIG undefined FUN_148912f9c(void)

bool FUN_148912f9c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148912fe7;
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
LAB_148912fe7:
  return lVar6 == param_2;
}



// FUNCTION 148913012 FUN_148913012 body=118 status=ok
// SIG undefined FUN_148913012(void)

void FUN_148913012(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41ab00;
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



// FUNCTION 148913088 FUN_148913088 body=118 status=ok
// SIG undefined FUN_148913088(void)

void FUN_148913088(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41ab00;
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



// FUNCTION 1489130fe FUN_1489130fe body=156 status=ok
// SIG undefined FUN_1489130fe(void)

void FUN_1489130fe(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e6310;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b41ab00;
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
                    /* WARNING: Could not recover jumptable at 0x00014891318a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14891319a FUN_14891319a body=98 status=ok
// SIG undefined FUN_14891319a(void)

void FUN_14891319a(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001489131e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001489131f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1489131fc FUN_1489131fc body=94 status=ok
// SIG undefined FUN_1489131fc(void)

ulonglong FUN_1489131fc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14891324f:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14891324f;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 14891325a FUN_14891325a body=135 status=ok
// SIG undefined FUN_14891325a(void)

void FUN_14891325a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b41ab70;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 2;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[2] = &PTR_FUN_14b351ee0;
  *(undefined1 *)((longlong)puVar1 + 0x61) = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[0x13] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  return;
}



// FUNCTION 1489132e2 FUN_1489132e2 body=52 status=ok
// SIG undefined FUN_1489132e2(void)

void FUN_1489132e2(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b351ee0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_1413388a4(param_1 + 0x10);
  return;
}



// FUNCTION 148913316 FUN_148913316 body=29 status=ok
// SIG undefined FUN_148913316(void)

undefined8 FUN_148913316(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148913334 FUN_148913334 body=158 status=ok
// SIG undefined FUN_148913334(void)

void FUN_148913334(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1489133a6;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1489133a6;
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
LAB_1489133a6:
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
                    /* WARNING: Could not recover jumptable at 0x0001489133c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1489133d2 FUN_1489133d2 body=64 status=ok
// SIG undefined FUN_1489133d2(void)

undefined8 * FUN_1489133d2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b41ab90;
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



// FUNCTION 148913416 FUN_148913416 body=81 status=ok
// SIG undefined FUN_148913416(void)

undefined8 FUN_148913416(longlong param_1)

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



// FUNCTION 14891346e FUN_14891346e body=89 status=ok
// SIG undefined FUN_14891346e(void)

bool FUN_14891346e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1489134b9;
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
LAB_1489134b9:
  return lVar6 == param_2;
}



// FUNCTION 1489134e4 FUN_1489134e4 body=118 status=ok
// SIG undefined FUN_1489134e4(void)

void FUN_1489134e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41ab90;
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



// FUNCTION 14891355a FUN_14891355a body=118 status=ok
// SIG undefined FUN_14891355a(void)

void FUN_14891355a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41ab90;
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



// FUNCTION 1489135d0 FUN_1489135d0 body=156 status=ok
// SIG undefined FUN_1489135d0(void)

void FUN_1489135d0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e6310;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b41ab90;
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
                    /* WARNING: Could not recover jumptable at 0x00014891365c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14891366c FUN_14891366c body=98 status=ok
// SIG undefined FUN_14891366c(void)

void FUN_14891366c(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001489136b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001489136c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1489136ce FUN_1489136ce body=94 status=ok
// SIG undefined FUN_1489136ce(void)

ulonglong FUN_1489136ce(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148913721:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148913721;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 14891372c FUN_14891372c body=135 status=ok
// SIG undefined FUN_14891372c(void)

void FUN_14891372c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b41ac00;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 2;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[2] = &PTR_FUN_14b351f00;
  *(undefined1 *)((longlong)puVar1 + 0x61) = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[0x13] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  return;
}



// FUNCTION 1489137b4 FUN_1489137b4 body=52 status=ok
// SIG undefined FUN_1489137b4(void)

void FUN_1489137b4(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b351f00;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_1413388a4(param_1 + 0x10);
  return;
}



// FUNCTION 1489137e8 FUN_1489137e8 body=29 status=ok
// SIG undefined FUN_1489137e8(void)

undefined8 FUN_1489137e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148913806 FUN_148913806 body=158 status=ok
// SIG undefined FUN_148913806(void)

void FUN_148913806(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148913878;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148913878;
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
LAB_148913878:
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
                    /* WARNING: Could not recover jumptable at 0x000148913898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1489138a4 FUN_1489138a4 body=83 status=ok
// SIG undefined FUN_1489138a4(void)

longlong * FUN_1489138a4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_146530fd2();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1489138f8 FUN_1489138f8 body=147 status=ok
// SIG undefined FUN_1489138f8(void)

void FUN_1489138f8(longlong param_1,int param_2)

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



// FUNCTION 14891398c FUN_14891398c body=83 status=ok
// SIG undefined FUN_14891398c(void)

longlong * FUN_14891398c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_141855bda();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1489139e0 FUN_1489139e0 body=83 status=ok
// SIG undefined FUN_1489139e0(void)

longlong * FUN_1489139e0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_1464f8f46();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148913a34 FUN_148913a34 body=143 status=ok
// SIG undefined FUN_148913a34(void)

void FUN_148913a34(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148913ac4 FUN_148913ac4 body=72 status=ok
// SIG undefined FUN_148913ac4(void)

undefined8 * FUN_148913ac4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b41ac40;
  plVar2 = (longlong *)param_1[0xe];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_14106cf6c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148913b0c FUN_148913b0c body=68 status=ok
// SIG undefined FUN_148913b0c(void)

undefined8 * FUN_148913b0c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b41ad00;
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



// FUNCTION 148913b54 FUN_148913b54 body=81 status=ok
// SIG undefined FUN_148913b54(void)

undefined8 FUN_148913b54(longlong param_1)

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



// FUNCTION 148913bac FUN_148913bac body=89 status=ok
// SIG undefined FUN_148913bac(void)

bool FUN_148913bac(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148913bf7;
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
LAB_148913bf7:
  return lVar6 == param_2;
}



// FUNCTION 148913c22 FUN_148913c22 body=118 status=ok
// SIG undefined FUN_148913c22(void)

void FUN_148913c22(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b40d390;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41ad00;
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



// FUNCTION 148913c98 FUN_148913c98 body=118 status=ok
// SIG undefined FUN_148913c98(void)

void FUN_148913c98(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b40d390;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41ad00;
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



// FUNCTION 148913d0e FUN_148913d0e body=156 status=ok
// SIG undefined FUN_148913d0e(void)

void FUN_148913d0e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b40d390;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b41ad00;
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
                    /* WARNING: Could not recover jumptable at 0x000148913d9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148913daa FUN_148913daa body=98 status=ok
// SIG undefined FUN_148913daa(void)

void FUN_148913daa(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148913df3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148913e02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148913e0c FUN_148913e0c body=68 status=ok
// SIG undefined FUN_148913e0c(void)

undefined8 * FUN_148913e0c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b41ad70;
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



// FUNCTION 148913e54 FUN_148913e54 body=81 status=ok
// SIG undefined FUN_148913e54(void)

undefined8 FUN_148913e54(longlong param_1)

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



// FUNCTION 148913eac FUN_148913eac body=89 status=ok
// SIG undefined FUN_148913eac(void)

bool FUN_148913eac(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148913ef7;
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
LAB_148913ef7:
  return lVar6 == param_2;
}



// FUNCTION 148913f2e FUN_148913f2e body=118 status=ok
// SIG undefined FUN_148913f2e(void)

void FUN_148913f2e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b41ade0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41ad70;
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



// FUNCTION 148913fa4 FUN_148913fa4 body=118 status=ok
// SIG undefined FUN_148913fa4(void)

void FUN_148913fa4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b41ade0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41ad70;
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



// FUNCTION 14891401a FUN_14891401a body=156 status=ok
// SIG undefined FUN_14891401a(void)

void FUN_14891401a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b41ade0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b41ad70;
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
                    /* WARNING: Could not recover jumptable at 0x0001489140a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489140b6 FUN_1489140b6 body=98 status=ok
// SIG undefined FUN_1489140b6(void)

void FUN_1489140b6(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001489140ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014891410e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 14891411a FUN_14891411a body=381 status=ok
// SIG undefined FUN_14891411a(void)

longlong * FUN_14891411a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_148914225:
    *puVar3 = &PTR_LAB_14b400c40;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41ae50;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = &LAB_14890ceee;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_148914225;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b400c40;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41ae50;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = &LAB_14890ceee;
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
  return param_1;
}



// FUNCTION 148914298 FUN_148914298 body=64 status=ok
// SIG undefined FUN_148914298(void)

undefined8 * FUN_148914298(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b41ae50;
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



// FUNCTION 1489142dc FUN_1489142dc body=81 status=ok
// SIG undefined FUN_1489142dc(void)

undefined8 FUN_1489142dc(longlong param_1)

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



// FUNCTION 148914334 FUN_148914334 body=89 status=ok
// SIG undefined FUN_148914334(void)

bool FUN_148914334(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14891437f;
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
LAB_14891437f:
  return lVar6 == param_2;
}



// FUNCTION 1489143aa FUN_1489143aa body=118 status=ok
// SIG undefined FUN_1489143aa(void)

void FUN_1489143aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b400c40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41ae50;
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



// FUNCTION 148914420 FUN_148914420 body=118 status=ok
// SIG undefined FUN_148914420(void)

void FUN_148914420(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b400c40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41ae50;
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



// FUNCTION 148914496 FUN_148914496 body=156 status=ok
// SIG undefined FUN_148914496(void)

void FUN_148914496(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b400c40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b41ae50;
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
                    /* WARNING: Could not recover jumptable at 0x000148914522. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148914532 FUN_148914532 body=98 status=ok
// SIG undefined FUN_148914532(void)

void FUN_148914532(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014891457b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014891458a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148914594 FUN_148914594 body=94 status=ok
// SIG undefined FUN_148914594(void)

ulonglong FUN_148914594(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1489145e7:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1489145e7;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}


