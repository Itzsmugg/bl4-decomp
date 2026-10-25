// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147989714 FUN_147989714 body=432 status=ok
// SIG undefined FUN_147989714(void)

void FUN_147989714(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x98;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x94 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x90 + lVar7) =
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



// FUNCTION 1479898c6 FUN_1479898c6 body=367 status=ok
// SIG undefined FUN_1479898c6(void)

void FUN_1479898c6(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar2 != 0) {
    uVar3 = *(uint *)(param_1 + 1);
    iVar11 = uVar3 - iVar2;
    iVar8 = iVar11;
    if ((int)param_1[6] != -1) {
      lVar5 = *param_1;
      iVar6 = (int)param_1[6];
      uVar13 = uVar3;
      do {
        iVar4 = *(int *)(lVar5 + 4 + (longlong)iVar6 * 0x98);
        if (iVar6 < iVar11) {
          plVar7 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar7 = param_1 + 2;
          }
          pvVar10 = (void *)((longlong)(int)(uVar13 - 1) * 0x98 + lVar5 + 0x98);
          uVar12 = uVar13;
          do {
            uVar13 = uVar12 - 1;
            uVar14 = uVar12 + 0x1e;
            if (-1 < (int)uVar13) {
              uVar14 = uVar13;
            }
            pvVar10 = (void *)((longlong)pvVar10 + -0x98);
            uVar12 = uVar13;
          } while ((*(uint *)((longlong)plVar7 + (longlong)((int)uVar14 >> 5) * 4) >>
                    (uVar13 & 0x1f) & 1) == 0);
          memmove((void *)((longlong)iVar6 * 0x98 + lVar5),pvVar10,0x98);
          plVar7 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar7 = param_1 + 2;
          }
          iVar9 = iVar6 + 0x1f;
          if (-1 < iVar6) {
            iVar9 = iVar6;
          }
          puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar9 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
        }
        iVar6 = iVar4;
      } while (iVar4 != -1);
      iVar6 = (int)param_1[1] - uVar3;
      if (iVar6 != 0) {
        pvVar10 = (void *)((longlong)iVar11 * 0x98 + *param_1);
        memmove(pvVar10,(void *)((longlong)iVar2 * 0x98 + (longlong)pvVar10),(longlong)iVar6 * 0x98)
        ;
        iVar8 = (int)param_1[1] - iVar2;
      }
    }
    *(int *)(param_1 + 1) = iVar8;
    FUN_144a6134a(param_1 + 2,iVar11,iVar2);
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_140f776e6(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147989a36 FUN_147989a36 body=87 status=ok
// SIG undefined FUN_147989a36(void)

void FUN_147989a36(longlong *param_1,int param_2)

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
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x98) == param_2) {
          FUN_147989a8e(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x98 + *param_1 + 0x90);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 147989a8e FUN_147989a8e body=138 status=ok
// SIG undefined FUN_147989a8e(void)

void FUN_147989a8e(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x94 + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x90 + lVar6 * 0x98);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x98 + 0x90);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x90);
  FUN_14796516a(*param_1 + lVar2 + 8);
  FUN_14798969a(param_1,param_2);
  return;
}



// FUNCTION 147989b18 FUN_147989b18 body=201 status=ok
// SIG undefined FUN_147989b18(void)

void FUN_147989b18(longlong *param_1,undefined8 *param_2)

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



// FUNCTION 147989be2 FUN_147989be2 body=29 status=ok
// SIG undefined FUN_147989be2(void)

undefined8 FUN_147989be2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147989c1a FUN_147989c1a body=29 status=ok
// SIG undefined FUN_147989c1a(void)

bool FUN_147989c1a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147989c38 FUN_147989c38 body=26 status=ok
// SIG undefined FUN_147989c38(void)

bool FUN_147989c38(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147989c52 FUN_147989c52 body=24 status=ok
// SIG undefined FUN_147989c52(void)

bool FUN_147989c52(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147989c6a FUN_147989c6a body=93 status=ok
// SIG undefined FUN_147989c6a(void)

void FUN_147989c6a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a7feda0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a7feb80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147989cc8 FUN_147989cc8 body=93 status=ok
// SIG undefined FUN_147989cc8(void)

void FUN_147989cc8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a7feda0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a7feb80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147989d26 FUN_147989d26 body=126 status=ok
// SIG undefined FUN_147989d26(void)

void FUN_147989d26(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a7feda0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a7feb80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147989d95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147989da4 FUN_147989da4 body=58 status=ok
// SIG undefined FUN_147989da4(void)

void FUN_147989da4(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147989ddb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147989dde FUN_147989dde body=161 status=ok
// SIG undefined FUN_147989dde(void)

bool FUN_147989dde(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_40);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147989e82 FUN_147989e82 body=132 status=ok
// SIG undefined FUN_147989e82(void)

void FUN_147989e82(longlong param_1,int param_2)

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



// FUNCTION 147989f28 FUN_147989f28 body=29 status=ok
// SIG undefined FUN_147989f28(void)

undefined8 FUN_147989f28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147989f46 FUN_147989f46 body=56 status=ok
// SIG undefined FUN_147989f46(void)

undefined8 * FUN_147989f46(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a7fec50;
  FUN_144725486();
  FUN_1463ae92e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147989f7e FUN_147989f7e body=56 status=ok
// SIG undefined FUN_147989f7e(void)

longlong FUN_147989f7e(longlong param_1,int param_2)

{
  if (*(ulonglong *)(param_1 + 8) != 0 && (*(ulonglong *)(param_1 + 8) & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147989ff6 FUN_147989ff6 body=21 status=ok
// SIG undefined FUN_147989ff6(void)

undefined * FUN_147989ff6(void)

{
  FUN_14798a018();
  return &DAT_14cacebe0;
}



// FUNCTION 14798a018 FUN_14798a018 body=205 status=ok
// SIG undefined FUN_14798a018(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14798a018(void)

{
  if ((DAT_14cacec47 & 2) != 0) {
    return;
  }
  DAT_14cacec47 = DAT_14cacec47 | 2;
  _DAT_14cacebe8 = L"TResourceArray";
  _DAT_14cacec00 = FUN_146826540;
  _DAT_14cacec08 = FUN_146825d77;
  _DAT_14cacec10 = FUN_146825fd6;
  _DAT_14cacec18 = FUN_1407e02ea;
  _DAT_14cacec20 = FUN_146826273;
  _DAT_14cacebf8 = FUN_14798a0e6;
  _DAT_14cacec38 = 0xffffffff00000020;
  _DAT_14cacec40 = 8;
  DAT_14cacec44 = 1;
  _DAT_14cacec28 = FUN_14798a112;
  FUN_14798a128();
  FUN_14798a236();
  FUN_1407e00cc(&DAT_14cacebe0);
  return;
}



// FUNCTION 14798a0e6 FUN_14798a0e6 body=43 status=ok
// SIG undefined FUN_14798a0e6(void)

void FUN_14798a0e6(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    (**(code **)*param_1)(param_1,0);
  }
  param_1[2] = 0xfefefefefefefefe;
  param_1[3] = 0xfefefefefefefefe;
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 14798a112 FUN_14798a112 body=21 status=ok
// SIG undefined FUN_14798a112(void)

undefined * FUN_14798a112(void)

{
  FUN_14798a40f();
  return &DAT_14cacec48;
}



// FUNCTION 14798a128 FUN_14798a128 body=270 status=ok
// SIG undefined FUN_14798a128(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14798a128(void)

{
  _DAT_14cacec70 = L"bNeedsCPUAccess";
  DAT_14cacec9a = FUN_140850cc5();
  if ((DAT_14c9cfd57 & 2) == 0) {
    DAT_14c9cfd57 = DAT_14c9cfd57 | 3;
    _DAT_14c9cfcf8 = L"bool";
    _DAT_14c9cfd10 = &LAB_147169480;
    _DAT_14c9cfd18 = &LAB_14716948c;
    _DAT_14c9cfd20 = &LAB_147169498;
    _DAT_14c9cfd28 = &LAB_14716949e;
    _DAT_14c9cfd30 = &LAB_1471694a2;
    _DAT_14c9cfd08 = &LAB_1471694a8;
    _DAT_14c9cfd48 = &DAT_100000001;
    _DAT_14c9cfd50 = 1;
    DAT_14c9cfd54 = 0;
  }
  _DAT_14cacec78 = &DAT_14c9cfcf0;
  _DAT_14cacec88 = &LAB_14682652b;
  _DAT_14cacec90 = &DAT_100000018;
  _DAT_14cacec98 = 0;
  _DAT_14cacec80 = DAT_14cacebf0;
  DAT_14cacebf0 = &DAT_14cacec70;
  return;
}



// FUNCTION 14798a236 FUN_14798a236 body=473 status=ok
// SIG undefined FUN_14798a236(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14798a236(void)

{
  _DAT_14caceca0 = L"BASE";
  DAT_14cacecca = 4;
  if ((DAT_14caced37 & 2) == 0) {
    DAT_14caced37 = DAT_14caced37 | 3;
    _DAT_14cacecd8 = L"(TArray<T, AllocatorType>)";
    _DAT_14cacecf0 = FUN_14798a48a;
    _DAT_14cacecf8 = &LAB_14798a4ea;
    _DAT_14caced00 = &LAB_14798a4f8;
    _DAT_14caced08 = &LAB_14798a506;
    _DAT_14caced10 = &DAT_14798a514;
    _DAT_14cacece8 = FUN_14798a516;
    _DAT_14caced28 = 0x1000000010;
    _DAT_14caced30 = 8;
    DAT_14caced34 = '\0';
  }
  else if (DAT_14caced34 != '\0') {
    DAT_14cacec46 = DAT_14cacec46 + '\x01';
  }
  _DAT_14cacecb0 = DAT_14cacebf0;
  _DAT_14cacecc0 = &DAT_100000008;
  _DAT_14cacecb8 = &LAB_14682652b;
  _DAT_14caceca8 = &DAT_14cacecd0;
  DAT_14cacec45 = DAT_14cacec45 + '\x01';
  DAT_14cacebf0 = &DAT_14caceca0;
  _DAT_14caced38 = L"BASE";
  DAT_14caced62 = 4;
  _DAT_14caced40 = FUN_146268212();
  _DAT_14caced48 = DAT_14cacebf0;
  _DAT_14caced50 = &LAB_14682652b;
  DAT_14cacebf0 = &DAT_14caced38;
  DAT_14cacec45 = DAT_14cacec45 + '\x01';
  _DAT_14caced58 = 0x100000000;
  if (*(char *)(_DAT_14caced40 + 100) != '\0') {
    DAT_14cacec46 = DAT_14cacec46 + '\x01';
  }
  return;
}



// FUNCTION 14798a40f FUN_14798a40f body=122 status=ok
// SIG undefined FUN_14798a40f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14798a40f(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cacec68) {
    FUN_144b3d300(&DAT_14cacec68);
    if (DAT_14cacec68 == -1) {
      DAT_14cacec50 = 0;
      uRam000000014cacec58 = 0;
      _DAT_14cacec48 = &PTR_FUN_14a7fec80;
      DAT_14cacec60 = 0;
      atexit((_func_5014 *)&LAB_14341ae75);
      _Init_thread_footer(&DAT_14cacec68);
      return;
    }
  }
  return;
}



// FUNCTION 14798a48a FUN_14798a48a body=95 status=ok
// SIG undefined FUN_14798a48a(void)

void FUN_14798a48a(void)

{
  undefined1 auStack_48 [32];
  ulonglong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_146826a6c(0,local_28,0x10);
  if (local_28[0] != 0 && (local_28[0] & 1) == 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798a516 FUN_14798a516 body=51 status=ok
// SIG undefined FUN_14798a516(void)

void FUN_14798a516(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 == '\0') && (*param_1 != 0 && (*param_1 & 1) == 0)) {
    FUN_1400020a8();
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 14798a54a FUN_14798a54a body=132 status=ok
// SIG undefined FUN_14798a54a(void)

void FUN_14798a54a(longlong param_1,int param_2)

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



// FUNCTION 14798a5d0 FUN_14798a5d0 body=132 status=ok
// SIG undefined FUN_14798a5d0(void)

void FUN_14798a5d0(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_144a7f90c(param_1,param_2,uVar5,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14798a656 FUN_14798a656 body=147 status=ok
// SIG undefined FUN_14798a656(void)

void FUN_14798a656(longlong param_1,int param_2)

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



// FUNCTION 14798a6ea FUN_14798a6ea body=147 status=ok
// SIG undefined FUN_14798a6ea(void)

void FUN_14798a6ea(longlong param_1,int param_2)

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



// FUNCTION 14798a77e FUN_14798a77e body=150 status=ok
// SIG undefined FUN_14798a77e(void)

void FUN_14798a77e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0xf8);
  if (param_2 <= (int)uVar1) {
    uVar5 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0xfc) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x78,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar4 / 0x78)) {
        uVar5 = uVar4 / 0x78 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xfc) = (int)uVar5;
    FUN_144b16e62(param_1,param_2,uVar5,0x78);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14798a816 FUN_14798a816 body=95 status=ok
// SIG undefined FUN_14798a816(void)

void FUN_14798a816(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 6,0x10);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,0x10);
  }
  return;
}



// FUNCTION 14798a876 FUN_14798a876 body=95 status=ok
// SIG undefined FUN_14798a876(void)

void FUN_14798a876(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,4);
  }
  return;
}



// FUNCTION 14798a8d6 FUN_14798a8d6 body=95 status=ok
// SIG undefined FUN_14798a8d6(void)

void FUN_14798a8d6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 6,0x10);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,0x10);
  }
  return;
}



// FUNCTION 14798a936 FUN_14798a936 body=112 status=ok
// SIG undefined FUN_14798a936(void)

void FUN_14798a936(longlong param_1,uint param_2)

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



// FUNCTION 14798a9a6 FUN_14798a9a6 body=143 status=ok
// SIG undefined FUN_14798a9a6(void)

void FUN_14798a9a6(longlong param_1,int param_2)

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



// FUNCTION 14798aa36 FUN_14798aa36 body=257 status=ok
// SIG undefined FUN_14798aa36(void)

void FUN_14798aa36(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_147d13d40(*param_2,lVar11,*param_4);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14798ab37 FUN_14798ab37 body=337 status=ok
// SIG undefined FUN_14798ab37(void)

void FUN_14798ab37(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_147d1388c(*param_2,lVar11,*param_4,*param_5,*param_6,*param_7,*param_8);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14798ac88 FUN_14798ac88 body=337 status=ok
// SIG undefined FUN_14798ac88(void)

void FUN_14798ac88(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_147d1388c(*param_2,lVar11,*param_4,*param_5,*param_6,*param_7,*param_8);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14798add9 FUN_14798add9 body=405 status=ok
// SIG undefined FUN_14798add9(void)

void FUN_14798add9(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined1 *param_7,undefined4 *param_8,
                  undefined8 param_9,undefined4 *param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_147d13aae(*param_2,lVar11,*param_4,*param_5,*param_6,DAT_14c761370,*param_7,&DAT_14cace7f8,
                &DAT_14cace80c,*param_8,param_9,*param_10);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14798af6e FUN_14798af6e body=273 status=ok
// SIG undefined FUN_14798af6e(void)

void FUN_14798af6e(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_147d137f2(*param_2,lVar11,*param_4,*param_5);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14798b07f FUN_14798b07f body=296 status=ok
// SIG undefined FUN_14798b07f(void)

void FUN_14798b07f(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_147d13e0a(*param_2,lVar11,*param_4,param_5,*param_6);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14798b1a7 FUN_14798b1a7 body=273 status=ok
// SIG undefined FUN_14798b1a7(void)

void FUN_14798b1a7(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_147d137f2(*param_2,lVar11,*param_4,*param_5);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14798b2b8 FUN_14798b2b8 body=112 status=ok
// SIG undefined FUN_14798b2b8(void)

void FUN_14798b2b8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 14798b328 FUN_14798b328 body=108 status=ok
// SIG undefined FUN_14798b328(void)

void FUN_14798b328(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x58,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x58)) {
      uVar2 = uVar1 / 0x58 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x58,8);
  }
  return;
}



// FUNCTION 14798b394 FUN_14798b394 body=48 status=ok
// SIG undefined FUN_14798b394(void)

void FUN_14798b394(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14798b3c4 FUN_14798b3c4 body=132 status=ok
// SIG undefined FUN_14798b3c4(void)

void FUN_14798b3c4(longlong param_1,int param_2)

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



// FUNCTION 14798b44a FUN_14798b44a body=96 status=ok
// SIG undefined FUN_14798b44a(void)

void FUN_14798b44a(longlong param_1,int param_2)

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



// FUNCTION 14798b4aa FUN_14798b4aa body=128 status=ok
// SIG undefined FUN_14798b4aa(void)

void FUN_14798b4aa(longlong *param_1,short *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar4 = *param_1;
  iVar2 = (int)param_1[1];
  lVar6 = (longlong)iVar2;
  if (lVar6 != 0) {
    uVar5 = 0;
    do {
      if (*(short *)(lVar4 + uVar5) == *param_2) {
        if ((int)(uVar5 >> 3) * -0x55555555 != -1) {
          return;
        }
        break;
      }
      uVar5 = uVar5 + 0x18;
    } while (lVar6 * 0x18 != uVar5);
  }
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_146f1c730(param_1,iVar2);
    lVar4 = *param_1;
  }
  *(undefined8 *)(lVar4 + 0x10 + lVar6 * 0x18) = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 4);
  puVar1 = (undefined8 *)(lVar4 + lVar6 * 0x18);
  *puVar1 = *(undefined8 *)param_2;
  puVar1[1] = uVar3;
  return;
}



// FUNCTION 14798b52a FUN_14798b52a body=186 status=ok
// SIG undefined FUN_14798b52a(void)

void FUN_14798b52a(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  lVar4 = param_1[1];
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
LAB_14798b549:
    for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
      if (((~*(ulonglong *)(*(longlong *)(lVar4 + 8) + 0x18) & 0x800000008001) == 0) &&
         ((*(char *)((longlong)param_1 + 0x15) != '\0' || ((*(byte *)(lVar4 + 0x3b) & 0x20) == 0))))
      goto LAB_14798b5a9;
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
        goto LAB_14798b549;
      }
    }
    if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))();
      if (plVar2 != (longlong *)0x0) {
        lVar4 = plVar2[10];
        *(undefined4 *)(param_1 + 2) = 0xffffffff;
        goto LAB_14798b549;
      }
      plVar2 = (longlong *)0x0;
    }
    lVar4 = 0;
  }
LAB_14798b5a9:
  *param_1 = (longlong)plVar2;
  param_1[1] = lVar4;
  return;
}



// FUNCTION 14798b5e4 FUN_14798b5e4 body=74 status=ok
// SIG undefined FUN_14798b5e4(void)

undefined8 * FUN_14798b5e4(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a7fece8;
  puVar1 = TlsGetValue(DAT_14c761374);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c761374,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14798b62e FUN_14798b62e body=147 status=ok
// SIG undefined FUN_14798b62e(void)

void FUN_14798b62e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14798b6c2 FUN_14798b6c2 body=112 status=ok
// SIG undefined FUN_14798b6c2(void)

void FUN_14798b6c2(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,4);
  }
  return;
}



// FUNCTION 14798b732 FUN_14798b732 body=63 status=ok
// SIG undefined FUN_14798b732(void)

longlong FUN_14798b732(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1417ba2a8(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xc + *param_1;
  FUN_14798b7da(lVar2);
  return lVar2;
}



// FUNCTION 14798b772 FUN_14798b772 body=104 status=ok
// SIG undefined FUN_14798b772(void)

longlong FUN_14798b772(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) == iVar1) {
    FUN_1417ba2a8(param_1,iVar1);
  }
  lVar3 = (longlong)param_2 * 0xc;
  memmove((void *)(*param_1 + lVar3 + 0xc),(void *)(*param_1 + lVar3),
          (ulonglong)(uint)(iVar1 - param_2) * 0xc);
  lVar2 = *param_1;
  FUN_14798b7da(lVar3 + lVar2);
  return lVar3 + lVar2;
}



// FUNCTION 14798b7da FUN_14798b7da body=12 status=ok
// SIG undefined FUN_14798b7da(void)

void FUN_14798b7da(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 14798b7e6 FUN_14798b7e6 body=114 status=ok
// SIG undefined FUN_14798b7e6(void)

void FUN_14798b7e6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 14798b858 FUN_14798b858 body=42 status=ok
// SIG undefined FUN_14798b858(void)

undefined8 FUN_14798b858(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_144a79cc8();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(lVar1 + 0xa0) >> 8),
                     *(longlong *)(*(longlong *)(lVar1 + 0xa0) + 8) != param_1);
  }
  return uVar2;
}



// FUNCTION 14798b884 FUN_14798b884 body=237 status=ok
// SIG undefined FUN_14798b884(void)

undefined4 * FUN_14798b884(longlong *param_1,undefined4 *param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined4 *puVar4;
  
  *param_2 = *(undefined4 *)(DAT_14cb0d2b0 + 0xd10);
  cVar2 = (**(code **)(*param_1 + 0x640))();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*param_1 + 0x648))(param_1);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*param_1 + 0x650))(param_1);
      if (cVar2 == '\0') {
        return param_2;
      }
      lVar3 = 0xd3c;
    }
    else {
      lVar3 = 0xd38;
    }
    puVar4 = (undefined4 *)(lVar3 + DAT_14cb0d2b0);
    if ((*(byte *)((longlong)param_1 + 0x39c) & 1) != 0) {
      puVar4 = (undefined4 *)((longlong)param_1 + 0x394);
    }
  }
  else if ((*(byte *)((longlong)param_1 + 0x39c) & 1) == 0) {
    if ((char)param_1[0x72] == '\x01') {
      uVar1 = *(uint *)(param_1 + 0x73);
      if ((uVar1 >> 0x1a & 1) == 0) {
        if ((uVar1 & 8) == 0) {
          lVar3 = 0xd28;
          if ((uVar1 & 0x20) == 0) {
            lVar3 = 0xd14;
          }
        }
        else {
          lVar3 = 0xd20;
        }
      }
      else {
        lVar3 = 0xd1c;
      }
    }
    else if ((char)param_1[0x72] == '\x02') {
      lVar3 = 0xd18;
    }
    else {
      lVar3 = 0xd10;
    }
    puVar4 = (undefined4 *)(lVar3 + DAT_14cb0d2b0);
  }
  else {
    puVar4 = (undefined4 *)((longlong)param_1 + 0x394);
  }
  *param_2 = *puVar4;
  return param_2;
}



// FUNCTION 14798b9a0 FUN_14798b9a0 body=143 status=ok
// SIG undefined FUN_14798b9a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14798b9a0(void)

{
  _DAT_14cacee88 = 0;
  _DAT_14cacee90 = 0;
  _DAT_14cacee68 = 0;
  uRam000000014cacee70 = 0;
  _DAT_14cacee94 = 0xffffffff00000080;
  _DAT_14cacee9c = 0;
  DAT_14caceea8 = 0;
  _DAT_14caceeb0 = 0;
  _DAT_14caceed8 = 0;
  _DAT_14caceee0 = 0;
  _DAT_14caceeb8 = 0;
  uRam000000014caceec0 = 0;
  _DAT_14caceee4 = 0xffffffff00000080;
  _DAT_14caceeec = 0;
  DAT_14caceef8 = 0;
  _DAT_14cacef00 = 0;
  DAT_14cacef08 = 0;
  _DAT_14cacef10 = 0;
  DAT_14cacef18 = 0;
  _DAT_14cacef20 = 0;
  DAT_14cacef28 = 0;
  uRam000000014cacef30 = 0;
  DAT_14cacef38 = 0;
  uRam000000014cacef40 = 0;
  DAT_14cacef48 = 0;
  return;
}



// FUNCTION 14798ba30 FUN_14798ba30 body=661 status=ok
// SIG undefined FUN_14798ba30(void)

void FUN_14798ba30(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = 0;
  uStack_a0 = 0;
  local_60 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_68);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = param_1;
  if (iStack_54 < (int)local_60[3]) {
    do {
      iVar5 = iStack_74;
      lVar3 = *local_90;
      FUN_140056680(&local_68,&DAT_14a819d6a);
      iVar2 = (int)local_60 + -1;
      if ((int)local_60 == 0) {
        iVar2 = 0;
      }
      FUN_1400020e8(&local_a8,local_68,iVar2);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      lVar3 = (longlong)iVar5 * 0x40 + lVar3;
      iVar2 = *(int *)(lVar3 + 0x10);
      iVar5 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar5 = 0;
      }
      FUN_1400020e8(&local_a8,*(undefined8 *)(lVar3 + 8),iVar5);
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (iStack_74 < (int)local_80[3]);
  }
  plVar1 = param_1 + 0x18;
  FUN_14020fad6(plVar1,
                L"When the viewport view-mode is set to \'Buffer Visualization\', this command specifies which of the various channels to display. Values entered other than the allowed values shown below will be ignored."
               );
  iVar2 = (int)uStack_a0 + -1;
  if ((int)uStack_a0 == 0) {
    iVar2 = 0;
  }
  FUN_1400020e8(plVar1,local_a8,iVar2);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  if ((int)param_1[0x19] == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*plVar1;
  }
  local_b8 = 1;
  puVar4 = &DAT_149dfb77a;
  (**(code **)(*DAT_14c8407a8 + 8))
            (DAT_14c8407a8,L"r.BufferVisualizationTarget",&DAT_149dfb77a,puVar6);
  plVar1 = param_1 + 0x1a;
  FUN_14020fad6(plVar1,
                L"Specify the list of post process materials that can be used in the buffer visualization overview. Put nothing between the commas to leave a gap.\n\n\tChoose from:\n"
               );
  iVar2 = (int)uStack_a0 + -1;
  if ((int)uStack_a0 == 0) {
    iVar2 = 0;
  }
  FUN_1400020e8(plVar1,local_a8,iVar2);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  if ((int)param_1[0x1b] != 0) {
    puVar4 = (undefined2 *)*plVar1;
  }
  local_b8 = 0;
  (**(code **)(*DAT_14c8407a8 + 8))
            (DAT_14c8407a8,L"r.BufferVisualizationOverviewTargets",
             L"BaseColor,Specular,SubsurfaceColor,WorldNormal,SeparateTranslucencyRGB,,,WorldTangent,SeparateTranslucencyA,,,Opacity,SceneDepth,Roughness,Metallic,ShadingModel,,SceneDepthWorldUnits,SceneColor,PreTonemapHDRColor,PostTonemapHDRColor"
             ,puVar4);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798bcc6 FUN_14798bcc6 body=304 status=ok
// SIG undefined FUN_14798bcc6(void)

longlong FUN_14798bcc6(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  
  iVar7 = (int)((ulonglong)param_2 >> 0x20);
  uVar6 = (ushort)((ulonglong)param_2 >> 0x10);
  uVar5 = (ushort)param_2;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    iVar7 + ((int)param_2 << 0x10 | (uint)uVar5) +
                    ((uint)uVar6 << 0x13 | (uint)uVar6) + (uint)(uVar5 >> 4)) * 4);
    if (iVar1 != -1) {
      do {
        lVar4 = *param_1 + (longlong)iVar1 * 0x40;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x40) == param_2) {
          if (lVar4 != 0) {
            return lVar4 + 8;
          }
          break;
        }
        iVar1 = *(int *)(lVar4 + 0x38);
      } while (iVar1 != -1);
    }
  }
  if ((int)param_1[0xb] != *(int *)((longlong)param_1 + 0x84)) {
    plVar3 = param_1 + 0x11;
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x12];
    }
    iVar7 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[0x13] - 1U &
                    iVar7 + ((int)param_2 << 0x10 | (uint)uVar5) +
                    ((uint)uVar6 << 0x13 | (uint)uVar6) + (uint)(uVar5 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        lVar4 = param_1[10] + (longlong)iVar7 * 0x40;
        if (*(longlong *)(param_1[10] + (longlong)iVar7 * 0x40) == param_2) goto LAB_14798bcdf;
        iVar7 = *(int *)(lVar4 + 0x38);
      } while (iVar7 != -1);
    }
  }
  lVar4 = 0;
LAB_14798bcdf:
  lVar2 = lVar4 + 8;
  if (lVar4 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 14798bdf6 FUN_14798bdf6 body=93 status=ok
// SIG undefined FUN_14798bdf6(void)

longlong * FUN_14798bdf6(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = FUN_14798bcc6(param_1,param_3);
  if (lVar2 == 0) {
    plVar3 = (longlong *)FUN_140e82300();
    plVar1 = (longlong *)*plVar3;
    *param_2 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar3 = plVar3 + 1;
  }
  else {
    plVar1 = *(longlong **)(lVar2 + 0x10);
    *param_2 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar3 = (longlong *)(lVar2 + 0x18);
  }
  *(int *)(param_2 + 1) = (int)*plVar3;
  return param_2;
}



// FUNCTION 14798be54 FUN_14798be54 body=122 status=ok
// SIG undefined FUN_14798be54(void)

ulonglong FUN_14798be54(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint7 uVar5;
  ulonglong uVar4;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  bool bVar10;
  
  iVar7 = (int)param_2[1];
  iVar3 = *(int *)(param_1 + 0xa8);
  if (iVar7 == iVar3) {
    uVar5 = (uint7)(uint3)((uint)iVar3 >> 8);
    bVar10 = true;
    if (iVar7 < 2) goto LAB_14798bec5;
    uVar4 = *(ulonglong *)(param_1 + 0xa0);
    lVar8 = 0;
    while( true ) {
      uVar1 = *(ushort *)(*param_2 + lVar8);
      uVar6 = (uint)uVar1;
      uVar2 = *(ushort *)(uVar4 + lVar8);
      uVar9 = (uint)uVar2;
      if (uVar1 != uVar2) {
        if ((uVar2 | uVar1) < 0x80) {
          uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14798be93;
        }
        iVar7 = uVar6 - uVar9;
        goto LAB_14798beca;
      }
      if (uVar1 == 0) break;
LAB_14798be93:
      lVar8 = lVar8 + 2;
    }
    iVar7 = 0;
LAB_14798beca:
    bVar10 = iVar7 == 0;
  }
  else {
    uVar4 = (ulonglong)(uint)(iVar3 + iVar7);
    bVar10 = iVar3 + iVar7 == 1;
  }
  uVar5 = (uint7)(uVar4 >> 8);
LAB_14798bec5:
  return CONCAT71(uVar5,bVar10) ^ 1;
}



// FUNCTION 14798bef0 FUN_14798bef0 body=10 status=ok
// SIG undefined FUN_14798bef0(void)

int FUN_14798bef0(longlong param_1)

{
  return *(byte *)(param_1 + 0x390) - 1;
}



// FUNCTION 14798bf06 FUN_14798bf06 body=75 status=ok
// SIG undefined FUN_14798bf06(void)

void FUN_14798bf06(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1463afe74(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798bf5a FUN_14798bf5a body=1244 status=ok
// SIG undefined FUN_14798bf5a(void)

void FUN_14798bf5a(double *param_1,double *param_2,double *param_3,undefined4 *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_298 [40];
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined8 local_260;
  undefined1 local_258 [128];
  double local_1d8;
  double local_1d0;
  double local_1c8;
  undefined8 local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  undefined8 local_1a0;
  double local_198;
  double local_190;
  double local_188;
  undefined8 local_180;
  double local_178;
  double local_170;
  double dStack_168;
  undefined8 local_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 local_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 local_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 local_100;
  double local_f8;
  double dStack_f0;
  double dStack_e8;
  undefined8 local_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  dVar6 = param_1[3];
  dVar1 = param_1[4];
  dVar2 = param_1[5];
  dVar3 = sin(dVar6 * 0.01745329238474369);
  dVar4 = sin(dVar1 * 0.01745329238474369);
  dVar5 = sin(dVar2 * 0.01745329238474369);
  sin(0.0);
  dVar6 = cos(dVar6 * 0.01745329238474369);
  dVar1 = cos(dVar1 * 0.01745329238474369);
  dVar2 = cos(dVar2 * 0.01745329238474369);
  cos(0.0);
  local_158 = dVar6 * dVar1;
  dStack_150 = dVar4 * dVar6;
  local_140 = 0;
  local_138 = dVar3 * dVar5 * dVar1 - dVar4 * dVar2;
  dStack_130 = dVar3 * dVar5 * dVar4 + dVar1 * dVar2;
  local_128 = -dVar5 * dVar6;
  local_120 = 0;
  local_118 = -(dVar3 * dVar2 * dVar1 + dVar4 * dVar5);
  dStack_110 = dVar1 * dVar5 - dVar4 * dVar3 * dVar2;
  local_108 = dVar6 * dVar2;
  local_100 = 0;
  local_f8 = DAT_14c8464e0;
  dStack_f0 = DAT_14c8464e8;
  dStack_e8 = DAT_14c8464f0;
  local_e0 = 0x3ff0000000000000;
  dVar5 = param_2[3];
  dVar1 = param_2[4];
  dVar2 = param_2[5];
  local_148 = dVar3;
  dVar6 = sin(dVar5 * 0.01745329238474369);
  dVar3 = sin(dVar1 * 0.01745329238474369);
  dVar4 = sin(dVar2 * 0.01745329238474369);
  sin(0.0);
  dVar5 = cos(dVar5 * 0.01745329238474369);
  dVar1 = cos(dVar1 * 0.01745329238474369);
  dVar2 = cos(dVar2 * 0.01745329238474369);
  cos(0.0);
  local_1d8 = dVar5 * dVar1;
  local_1d0 = dVar3 * dVar5;
  local_1c0 = 0;
  local_1b8 = dVar6 * dVar4 * dVar1 - dVar3 * dVar2;
  local_1b0 = dVar6 * dVar4 * dVar3 + dVar1 * dVar2;
  local_1a8 = -dVar4 * dVar5;
  local_1a0 = 0;
  local_198 = -(dVar6 * dVar2 * dVar1 + dVar3 * dVar4);
  local_190 = dVar1 * dVar4 - dVar3 * dVar6 * dVar2;
  local_188 = dVar5 * dVar2;
  local_180 = 0;
  local_178 = DAT_14c8464e0;
  local_170 = DAT_14c8464e8;
  dStack_168 = DAT_14c8464f0;
  local_160 = 0x3ff0000000000000;
  dVar1 = param_2[2];
  dVar2 = *param_2;
  dVar3 = param_2[1];
  dVar4 = param_1[2];
  dVar5 = param_1[1];
  *param_3 = *param_1 + local_f8 * 0.0 + dVar1 * local_118 + dVar3 * local_138 + dVar2 * local_158;
  param_3[1] = dStack_f0 * 0.0 + dVar1 * dStack_110 + dVar3 * dStack_130 + dVar2 * dStack_150 +
               dVar5;
  param_3[2] = dVar2 * local_148 + dVar3 * local_128 + dVar1 * local_108 + dStack_e8 * 0.0 + dVar4;
  local_1c8 = dVar6;
  FUN_1447fea8d(local_258,&local_1d8,&local_158);
  FUN_144a90b9e(local_258,&local_270);
  *(undefined8 *)(param_4 + 4) = local_260;
  *param_4 = local_270;
  param_4[1] = uStack_26c;
  param_4[2] = uStack_268;
  param_4[3] = uStack_264;
  if ((local_d0 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798c438 FUN_14798c438 body=1376 status=ok
// SIG undefined FUN_14798c438(void)

void FUN_14798c438(double *param_1,double *param_2,double *param_3,double *param_4,
                  undefined4 *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_428 [40];
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined8 local_3f0;
  undefined1 local_3e8 [128];
  undefined1 local_368 [128];
  undefined1 local_2e8 [128];
  undefined1 local_268 [128];
  double local_1e8;
  double local_1e0;
  double local_1d8;
  undefined8 local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  undefined8 local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  double local_168;
  double local_160;
  double local_158;
  undefined8 local_150;
  double local_148;
  double local_140;
  double local_138;
  undefined8 local_130;
  double local_128;
  double local_120;
  double local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_428;
  dVar9 = param_2[3];
  dVar1 = param_2[4];
  dVar2 = param_2[5];
  dVar6 = sin(dVar9 * 0.01745329238474369);
  dVar7 = sin(dVar1 * 0.01745329238474369);
  dVar8 = sin(dVar2 * 0.01745329238474369);
  sin(0.0);
  dVar9 = cos(dVar9 * 0.01745329238474369);
  dVar1 = cos(dVar1 * 0.01745329238474369);
  dVar2 = cos(dVar2 * 0.01745329238474369);
  cos(0.0);
  local_168 = dVar9 * dVar1;
  local_160 = dVar7 * dVar9;
  local_150 = 0;
  local_148 = dVar6 * dVar8 * dVar1 - dVar7 * dVar2;
  local_140 = dVar6 * dVar8 * dVar7 + dVar1 * dVar2;
  local_138 = -dVar8 * dVar9;
  local_130 = 0;
  local_128 = -(dVar6 * dVar2 * dVar1 + dVar7 * dVar8);
  local_120 = dVar1 * dVar8 - dVar7 * dVar6 * dVar2;
  local_118 = dVar9 * dVar2;
  local_110 = 0;
  local_108 = DAT_14c8464e0;
  local_100 = DAT_14c8464e8;
  uStack_f8 = DAT_14c8464f0;
  local_f0 = 0x3ff0000000000000;
  dVar8 = param_3[3];
  dVar1 = param_3[4];
  dVar2 = param_3[5];
  local_158 = dVar6;
  dVar10 = sin(dVar8 * 0.01745329238474369);
  dVar6 = sin(dVar1 * 0.01745329238474369);
  dVar7 = sin(dVar2 * 0.01745329238474369);
  sin(0.0);
  dVar8 = cos(dVar8 * 0.01745329238474369);
  dVar1 = cos(dVar1 * 0.01745329238474369);
  dVar2 = cos(dVar2 * 0.01745329238474369);
  cos(0.0);
  local_1e8 = dVar8 * dVar1;
  local_1e0 = dVar6 * dVar8;
  local_1d0 = 0;
  local_1c8 = dVar10 * dVar7 * dVar1 - dVar6 * dVar2;
  local_1c0 = dVar10 * dVar7 * dVar6 + dVar1 * dVar2;
  local_1b8 = -dVar7 * dVar8;
  local_1b0 = 0;
  local_1a8 = -(dVar10 * dVar2 * dVar1 + dVar6 * dVar7);
  local_1a0 = dVar1 * dVar7 - dVar6 * dVar10 * dVar2;
  local_198 = dVar8 * dVar2;
  local_190 = 0;
  local_188 = DAT_14c8464e0;
  local_180 = DAT_14c8464e8;
  uStack_178 = DAT_14c8464f0;
  local_170 = 0x3ff0000000000000;
  dVar1 = param_3[2];
  dVar2 = *param_3;
  dVar6 = param_3[1];
  dVar11 = param_1[1];
  dVar12 = param_1[5];
  dVar13 = param_1[9];
  dVar14 = param_1[0xd];
  dVar7 = param_1[0xe];
  dVar8 = param_1[10];
  dVar9 = param_1[6];
  dVar3 = param_1[2];
  dVar4 = param_2[2];
  dVar5 = param_2[1];
  *param_4 = *param_2 +
             param_1[0xc] * 0.0 + dVar1 * param_1[8] + dVar6 * param_1[4] + dVar2 * *param_1;
  param_4[1] = dVar14 * 0.0 + dVar1 * dVar13 + dVar6 * dVar12 + dVar2 * dVar11 + dVar5;
  param_4[2] = dVar2 * dVar3 + dVar6 * dVar9 + dVar1 * dVar8 + dVar7 * 0.0 + dVar4;
  local_1d8 = dVar10;
  FUN_14494412e(param_1,local_2e8);
  FUN_1447fea8d(local_268,&local_168,local_2e8);
  FUN_14494412e(local_268,local_368);
  FUN_1447fea8d(local_2e8,&local_1e8,local_368);
  FUN_1447fea8d(local_368,local_268,local_2e8);
  FUN_1447fea8d(local_3e8,local_368,&local_168);
  FUN_144a90b9e(local_3e8,&local_400);
  *(undefined8 *)(param_5 + 4) = local_3f0;
  *param_5 = local_400;
  param_5[1] = uStack_3fc;
  param_5[2] = uStack_3f8;
  param_5[3] = uStack_3f4;
  if ((local_e0 ^ (ulonglong)auStack_428) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798c99e FUN_14798c99e body=326 status=ok
// SIG undefined FUN_14798c99e(void)

void FUN_14798c99e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  lVar2 = local_58;
  uVar1 = local_5c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_58 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(local_58);
  }
  uVar3 = uStack_50;
  local_40 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  local_38 = uVar3;
  FUN_145bd965a(param_1 + 0x370,&local_40,uVar1);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798cae6 FUN_14798cae6 body=333 status=ok
// SIG undefined FUN_14798cae6(void)

void FUN_14798cae6(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_a88 [44];
  undefined4 local_a5c;
  undefined1 local_a58 [2264];
  longlong local_180;
  longlong local_f8;
  char local_68;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a88;
  local_a5c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a5c);
  }
  FUN_1400e6e60(local_a58);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a58);
  }
  puVar1 = local_a58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x5f8))(param_1,local_a5c,puVar1);
  if (local_68 == '\x01') {
    local_68 = '\0';
  }
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (local_180 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798cc46 FUN_14798cc46 body=237 status=ok
// SIG undefined FUN_14798cc46(void)

void FUN_14798cc46(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  lVar1 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_48 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(local_48);
  }
  uVar2 = uStack_40;
  local_30 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  local_28 = uVar2;
  FUN_14789f084(param_1 + 0x370);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798cd34 FUN_14798cd34 body=156 status=ok
// SIG undefined FUN_14798cd34(void)

void FUN_14798cd34(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0x2cc) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798cdd2 FUN_14798cdd2 body=149 status=ok
// SIG undefined FUN_14798cdd2(void)

void FUN_14798cdd2(longlong param_1,longlong param_2)

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
  *(undefined1 *)(param_1 + 0x2d0) = local_19;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798ce6c FUN_14798ce6c body=154 status=ok
// SIG undefined FUN_14798ce6c(void)

void FUN_14798ce6c(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x2b8) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798cf08 FUN_14798cf08 body=156 status=ok
// SIG undefined FUN_14798cf08(void)

void FUN_14798cf08(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 700) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798cfaa FUN_14798cfaa body=167 status=ok
// SIG undefined FUN_14798cfaa(void)

void FUN_14798cfaa(longlong param_1,longlong param_2)

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
  *(byte *)(param_1 + 0x2d1) = *(byte *)(param_1 + 0x2d1) & 0xfe | local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798d056 FUN_14798d056 body=154 status=ok
// SIG undefined FUN_14798d056(void)

void FUN_14798d056(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x2d9) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798d0f6 FUN_14798d0f6 body=170 status=ok
// SIG undefined FUN_14798d0f6(void)

void FUN_14798d0f6(longlong param_1,longlong param_2)

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
  *(byte *)(param_1 + 0x2da) = *(byte *)(param_1 + 0x2da) & 0xfb | (local_1c != 0) << 2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798d1a6 FUN_14798d1a6 body=170 status=ok
// SIG undefined FUN_14798d1a6(void)

void FUN_14798d1a6(longlong param_1,longlong param_2)

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
  *(byte *)(param_1 + 0x2da) = *(byte *)(param_1 + 0x2da) & 0xf7 | (local_1c != 0) << 3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798d252 FUN_14798d252 body=160 status=ok
// SIG undefined FUN_14798d252(void)

void FUN_14798d252(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x5d8))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798d2f4 FUN_14798d2f4 body=160 status=ok
// SIG undefined FUN_14798d2f4(void)

void FUN_14798d2f4(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x5e0))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798d396 FUN_14798d396 body=160 status=ok
// SIG undefined FUN_14798d396(void)

void FUN_14798d396(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x5e8))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798d438 FUN_14798d438 body=156 status=ok
// SIG undefined FUN_14798d438(void)

void FUN_14798d438(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0x2c4) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798d4d6 FUN_14798d4d6 body=156 status=ok
// SIG undefined FUN_14798d4d6(void)

void FUN_14798d4d6(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0x2c0) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798d574 FUN_14798d574 body=156 status=ok
// SIG undefined FUN_14798d574(void)

void FUN_14798d574(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0x2b4) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798d612 FUN_14798d612 body=156 status=ok
// SIG undefined FUN_14798d612(void)

void FUN_14798d612(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0x2d4) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798d6b0 FUN_14798d6b0 body=156 status=ok
// SIG undefined FUN_14798d6b0(void)

void FUN_14798d6b0(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0x340) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798d74e FUN_14798d74e body=149 status=ok
// SIG undefined FUN_14798d74e(void)

void FUN_14798d74e(longlong param_1,longlong param_2)

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
  *(undefined1 *)(param_1 + 0x2db) = local_19;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798d7e8 FUN_14798d7e8 body=154 status=ok
// SIG undefined FUN_14798d7e8(void)

void FUN_14798d7e8(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x2d8) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798d888 FUN_14798d888 body=154 status=ok
// SIG undefined FUN_14798d888(void)

void FUN_14798d888(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x2c8) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798d928 FUN_14798d928 body=154 status=ok
// SIG undefined FUN_14798d928(void)

void FUN_14798d928(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x2c9) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798d9c8 FUN_14798d9c8 body=170 status=ok
// SIG undefined FUN_14798d9c8(void)

void FUN_14798d9c8(longlong param_1,longlong param_2)

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
  *(byte *)(param_1 + 0x2d1) = *(byte *)(param_1 + 0x2d1) & 0xfb | (local_1c != 0) << 2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798dad6 FUN_14798dad6 body=61 status=ok
// SIG undefined FUN_14798dad6(void)

undefined8 * FUN_14798dad6(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x8c0,0x10);
  FUN_1403305c2(puVar1,param_1,0);
  *puVar1 = &PTR_FUN_14a817c10;
  return puVar1;
}



// FUNCTION 14798db1a FUN_14798db1a body=2173 status=ok
// SIG undefined FUN_14798db1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14798db1a(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  double dVar24;
  double dVar25;
  undefined1 auVar23 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStack_3f8 [32];
  ulonglong local_3d8;
  double local_3a8;
  double dStack_3a0;
  undefined8 local_398 [8];
  undefined1 local_358 [16];
  undefined8 local_348;
  undefined8 uStack_340;
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  double local_308;
  double dStack_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined1 local_2e8 [16];
  longlong *local_2d8;
  longlong *local_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfe0) + 0x118))
            (*(longlong **)(DAT_14cb0d2b0 + 0xfe0),&local_2d8,0);
  auVar26 = _DAT_149934d80;
  if (local_2d8 != (longlong *)0x0) {
    local_398[0] = 0;
    local_398[1] = 0;
    local_398[2] = 0;
    local_398[3] = 0x3ff0000000000000;
    local_398[4] = 0;
    local_398[5] = 0;
    local_398[6] = 0;
    local_398[7] = 0;
    dVar24 = (double)DAT_149934d80;
    uVar28 = (undefined4)DAT_149934d80;
    uVar29 = DAT_149934d80._4_4_;
    dVar25 = DAT_149934d80._8_8_;
    uVar30 = DAT_149934d80._8_4_;
    uVar31 = DAT_149934d80._12_4_;
    local_358 = _DAT_149934d80;
    local_348 = 0x3ff0000000000000;
    uStack_340 = 0;
    plVar12 = *(longlong **)(param_1 + 0x120);
    if (plVar12 == (longlong *)0x0) {
      puVar13 = local_398;
      puVar14 = (undefined8 *)local_338;
      for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
        *puVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      }
    }
    else if ((*(byte *)(param_1 + 0x1f8) & 0x1c) == 0) {
      uVar8 = (**(code **)(*plVar12 + 0x4a8))(plVar12,&local_2c8,*(ulonglong *)(param_1 + 0x128),0);
      local_308 = 0.0;
      dStack_300 = 0.0;
      local_318 = ZEXT816(0);
      dVar5 = local_288._0_8_;
      local_2f8 = local_288._0_4_;
      uStack_2f4 = local_288._4_4_;
      dVar6 = local_288._8_8_;
      uStack_2f0 = local_288._8_4_;
      uStack_2ec = local_288._12_4_;
      dVar2 = local_278._0_8_;
      auVar18 = minpd(auVar26,local_288);
      auVar21 = minpd(ZEXT816(0x3ff0000000000000),local_278);
      auVar19._8_8_ = -(ulonglong)(auVar18._8_8_ < 0.0);
      auVar19._0_8_ = -(ulonglong)(auVar18._0_8_ < 0.0);
      iVar9 = movmskpd(uVar8,auVar19);
      auVar18._8_8_ = -(ulonglong)(auVar21._8_8_ < 0.0);
      auVar18._0_8_ = -(ulonglong)(auVar21._0_8_ < 0.0);
      uVar10 = movmskpd((int)plVar12,auVar18);
      if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
        local_3a8 = dStack_2b0 * 0.0;
        dStack_3a0 = dStack_2b0 * 1.0;
        dVar5 = dVar5 * 0.0;
        dVar6 = dVar6 * 0.0;
        dVar25 = dVar2 * 0.0;
        dVar3 = local_278._8_8_ * 0.0;
        dVar20 = dVar6 * local_2c8 - dVar5 * dStack_2c0;
        dVar4 = dVar25 * dStack_2c0 - dVar6 * local_2b8;
        dVar17 = dVar5 * local_2b8 - dVar25 * local_2c8;
        dVar22 = dVar3 * dStack_2b0 - dVar3 * dStack_2b0;
        dVar4 = dVar4 + dVar4;
        dVar17 = dVar17 + dVar17;
        dVar20 = dVar20 + dVar20;
        dVar22 = dVar22 + dVar22;
        dVar24 = local_2b8 * 0.0 * 1.0 +
                 dStack_2c0 * 1.0 + local_2c8 * 0.0 * -1.0 + dStack_2b0 * 0.0;
        local_338._8_4_ = SUB84(dVar24,0);
        local_338._0_8_ =
             local_2b8 * 0.0 * -1.0 + dStack_2c0 * 0.0 + local_2c8 * 1.0 * 1.0 + dStack_2b0 * 0.0;
        local_338._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
        local_328._8_8_ =
             local_2b8 * 0.0 * -1.0 + ((local_2c8 * 0.0 * -1.0 + dStack_3a0) - dStack_2c0 * 0.0);
        local_328._0_8_ =
             local_2b8 * 1.0 * 1.0 + ((local_2c8 * 0.0 * 1.0 + local_3a8) - dStack_2c0 * 0.0);
        dStack_2a0 = (dVar4 * local_2b8 - dVar20 * local_2c8) + dStack_2b0 * dVar17 + dVar6 +
                     dStack_2a0;
        local_308 = (dVar17 * local_2c8 - dStack_2c0 * dVar4) + dStack_2b0 * dVar20 + dVar25 +
                    local_298;
        dStack_300 = (dVar22 * dStack_2b0 - dVar22 * dStack_2b0) + dStack_2b0 * dVar22 + dVar3 +
                     dStack_290;
        local_318._8_4_ = SUB84(dStack_2a0,0);
        local_318._0_8_ =
             (dVar20 * dStack_2c0 - local_2b8 * dVar17) + dStack_2b0 * dVar4 + dVar5 + local_2a8;
        local_318._12_4_ = (int)((ulonglong)dStack_2a0 >> 0x20);
        uVar28 = 0;
        uVar29 = 0x3ff00000;
        uVar30 = 0;
        uVar31 = 0x3ff00000;
      }
      else {
        dVar20 = dStack_2c0 + dStack_2c0;
        dVar22 = local_2b8 + local_2b8;
        dVar3 = local_2c8 * (local_2c8 + local_2c8);
        local_1c8 = (dVar24 - (local_2b8 * dVar22 + dStack_2c0 * dVar20)) * dVar5;
        dStack_1a0 = (dVar25 - (local_2b8 * dVar22 + dVar3)) * dVar6;
        dVar24 = (local_2c8 + local_2c8) * dStack_2b0;
        local_1a8 = (dVar20 * local_2c8 - dVar22 * dStack_2b0) * dVar6;
        dStack_180 = (dVar22 * dStack_2c0 - dVar24) * dVar2;
        local_188 = (dVar20 * dStack_2b0 + local_2c8 * dVar22) * dVar2;
        dStack_1c0 = (dVar20 * local_2c8 + dVar22 * dStack_2b0) * dVar5;
        local_198 = (dVar22 * dStack_2c0 + dVar24) * dVar6;
        local_1b8 = (local_2c8 * dVar22 - dVar20 * dStack_2b0) * dVar5;
        uStack_1b0 = 0;
        uStack_190 = 0;
        local_178 = (1.0 - (dVar3 + dStack_2c0 * dVar20)) * dVar2;
        uStack_170 = 0;
        local_168 = local_2a8;
        dStack_160 = dStack_2a0;
        local_158 = local_298;
        uStack_150 = 0x3ff0000000000000;
        local_248 = 1.0;
        dStack_240 = 0.0;
        local_238 = 0.0;
        uStack_230 = 0;
        auVar19 = ZEXT816(0x3ff0000000000000) << 0x40;
        local_218 = 0;
        uStack_210 = 0;
        local_208 = 0;
        uStack_200 = 0;
        local_1f8 = 0x3ff0000000000000;
        uStack_1f0 = 0;
        local_1e8 = 0;
        uStack_1e0 = 0;
        local_228 = auVar19;
        local_1d8 = auVar19;
        FUN_1447fea8d(&local_148);
        FUN_144a1c686(&local_148,0x3e45798ee0000000);
        auVar21._8_8_ = -(ulonglong)(0.0 <= dVar6);
        auVar21._0_8_ = -(ulonglong)(0.0 <= dVar5);
        auVar18 = blendvpd(_DAT_149936790,auVar26,auVar21);
        uVar15 = -(ulonglong)(0.0 <= dVar2 * 1.0);
        dVar24 = (double)(~uVar15 & 0xbff0000000000000 | uVar15 & 0x3ff0000000000000);
        dVar25 = auVar18._0_8_;
        local_138 = local_138 * dVar25;
        dStack_140 = dStack_140 * dVar25;
        local_148 = local_148 * dVar25;
        dVar25 = auVar18._8_8_;
        local_118 = local_118 * dVar25;
        dStack_120 = dStack_120 * dVar25;
        local_128 = dVar25 * local_128;
        local_f8 = local_f8 * dVar24;
        uStack_100 = uStack_100 * dVar24;
        local_108 = dVar24 * local_108;
        FUN_14481fd10(&local_268,&local_148);
        dVar24 = local_258 * local_258 + local_268 * local_268;
        dVar25 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
        auVar23._0_8_ = dVar24 + dVar25;
        auVar23._8_8_ = dVar24 + dVar25;
        auVar16._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_);
        auVar16._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_);
        auVar18 = sqrtpd(auVar23,auVar23);
        auVar26 = divpd(auVar26,auVar18);
        auVar27._0_8_ = auVar26._0_8_ * local_258;
        auVar27._8_8_ = auVar26._8_8_ * dStack_250;
        local_328 = blendvpd(auVar19,auVar27,auVar16);
        local_338._8_8_ =
             (ulonglong)(dStack_260 * auVar26._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_);
        local_338._0_8_ =
             (ulonglong)(local_268 * auVar26._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_);
        local_318._8_8_ = uStack_e0;
        local_318._0_8_ = local_e8;
        local_308 = local_d8;
        dStack_300 = 0.0;
      }
      dVar24 = local_278._8_8_ * 0.0;
      local_2e8._8_4_ = SUB84(dVar24,0);
      local_2e8._0_8_ = dVar2 * 1.0;
      local_2e8._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
    }
    else {
      local_3d8 = *(ulonglong *)(param_1 + 0x128);
      FUN_14028ca22(param_1,local_338,local_398);
    }
    (**(code **)(*local_2d8 + 0x38))
              (local_2d8,local_338,param_1,(*(byte *)(param_1 + 0x2da) & 1) == 0);
    if ((*(byte *)(param_1 + 0x2da) & 1) != 0) {
      cVar7 = (**(code **)(*local_2d8 + 0x28))(local_2d8,&local_1c8,&local_248,param_2);
      if (cVar7 == '\0') {
        FUN_147a03e26(param_1);
      }
      else {
        local_148 = local_1c8;
        dStack_140 = dStack_1c0;
        local_138 = local_1b8;
        uStack_130 = uStack_1b0;
        local_128 = local_248;
        dStack_120 = dStack_240;
        local_118 = local_238;
        uStack_110 = 0;
        local_108 = (double)CONCAT44(uVar29,uVar28);
        uStack_100 = (double)CONCAT44(uVar31,uVar30);
        local_f8 = 1.0;
        uStack_f0 = 0;
        local_3d8 = local_3d8 & 0xffffffffffffff00;
        FUN_144927a08(param_1,&local_148,0,0);
      }
    }
    (**(code **)(*local_2d8 + 0x30))(local_2d8,param_1 + 0x2a8);
  }
  if (local_2d0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_2d0 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_2d0)(local_2d0);
      LOCK();
      piVar1 = (int *)((longlong)local_2d0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2d0 + 0x10))(local_2d0);
      }
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14798e398 FUN_14798e398 body=1852 status=ok
// SIG undefined FUN_14798e398(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14798e398(longlong param_1,double *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 auVar21 [16];
  double dVar23;
  undefined1 auVar22 [16];
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auStack_298 [44];
  float local_26c;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  double dVar3;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  *(byte *)(param_1 + 0x2da) = *(byte *)(param_1 + 0x2da) | 0x10;
  auVar34 = _DAT_149934d80;
  auVar26 = *(undefined1 (*) [16])(param_2 + 8);
  dVar6 = auVar26._0_8_;
  dVar10 = auVar26._8_8_;
  auVar4 = *(undefined1 (*) [16])(param_2 + 10);
  dVar7 = auVar4._0_8_;
  auVar27 = *(undefined1 (*) [16])(param_1 + 800);
  dVar8 = auVar27._0_8_;
  dVar11 = auVar27._8_8_;
  auVar5 = *(undefined1 (*) [16])(param_1 + 0x330);
  dVar9 = auVar5._0_8_;
  auVar26 = minpd(auVar27,auVar26);
  auVar30 = minpd(auVar5,auVar4);
  auVar27._8_8_ = -(ulonglong)(auVar26._8_8_ < 0.0);
  auVar27._0_8_ = -(ulonglong)(auVar26._0_8_ < 0.0);
  iVar18 = movmskpd((int)local_c0,auVar27);
  auVar26._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
  auVar26._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
  uVar19 = movmskpd((int)param_1,auVar26);
  if ((uVar19 & 0x3fffffff) == 0 && iVar18 == 0) {
    dVar28 = *(double *)(param_1 + 0x2e0);
    dVar31 = *(double *)(param_1 + 0x2e8);
    dVar32 = *(double *)(param_1 + 0x2f0);
    dVar33 = *(double *)(param_1 + 0x2f8);
    dVar14 = *param_2;
    dVar15 = param_2[1];
    dVar16 = param_2[2];
    dVar17 = param_2[3];
    dVar24 = param_2[3];
    dVar23 = param_2[3];
    dVar1 = param_2[1];
    dVar13 = param_2[1];
    dVar2 = param_2[2];
    dVar3 = param_2[2];
    dVar25 = dVar31 * dVar2 * -1.0 + dVar32 * dVar1 + dVar33 * *param_2 * 1.0 + dVar28 * dVar24;
    dVar29 = dVar28 * dVar3 * 1.0 + dVar33 * dVar13 + dVar32 * *param_2 * -1.0 + dVar31 * dVar23;
    auVar34._0_8_ =
         dVar33 * dVar2 * 1.0 + ((*param_2 * dVar31 * 1.0 + dVar32 * dVar24) - dVar28 * dVar1);
    auVar34._8_8_ =
         dVar32 * dVar3 * -1.0 + ((*param_2 * dVar28 * -1.0 + dVar33 * dVar23) - dVar31 * dVar13);
    dVar28 = *(double *)(param_1 + 0x300) * dVar6;
    dVar31 = *(double *)(param_1 + 0x308) * dVar10;
    dVar32 = *(double *)(param_1 + 0x310) * dVar7;
    dVar33 = *(double *)(param_1 + 0x318) * auVar4._8_8_;
    dVar3 = dVar31 * dVar14 - dVar15 * dVar28;
    dVar2 = dVar32 * dVar15 - dVar16 * dVar31;
    dVar13 = dVar28 * dVar16 - dVar14 * dVar32;
    dVar1 = dVar33 * dVar17 - dVar17 * dVar33;
    dVar2 = dVar2 + dVar2;
    dVar13 = dVar13 + dVar13;
    dVar3 = dVar3 + dVar3;
    dVar1 = dVar1 + dVar1;
    local_e8 = (dVar3 * dVar15 - dVar16 * dVar13) + dVar24 * dVar2 + dVar28 + param_2[4];
    dStack_e0 = (dVar2 * dVar16 - dVar3 * dVar14) + dVar23 * dVar13 + dVar31 + param_2[5];
    local_d8 = (dVar13 * dVar14 - dVar15 * dVar2) + dVar24 * dVar3 + dVar32 + param_2[6];
    dVar24 = (dVar1 * dVar17 - dVar1 * dVar17) + dVar23 * dVar1 + dVar33 + param_2[7];
    local_26c = param_3;
  }
  else {
    dVar1 = *param_2;
    dVar3 = param_2[1];
    dVar2 = param_2[2];
    dVar28 = dVar3 + dVar3;
    dVar31 = dVar2 + dVar2;
    dVar23 = dVar1 * (dVar1 + dVar1);
    local_178 = (1.0 - (dVar23 + dVar3 * dVar28)) * dVar7;
    dVar24 = param_2[3];
    dVar32 = dVar31 * dVar24;
    dVar33 = (dVar1 + dVar1) * param_2[3];
    dVar24 = dVar28 * dVar24;
    local_188 = (dVar24 + *param_2 * dVar31) * dVar7;
    dVar23 = (DAT_149934d80._8_8_ - (dVar2 * dVar31 + dVar23)) * dVar10;
    dVar13 = (dVar28 * dVar1 + dVar32) * dVar6;
    local_198 = (dVar31 * dVar3 + dVar33) * dVar10;
    dStack_180 = (dVar31 * dVar3 - dVar33) * dVar7;
    local_1b8 = (*param_2 * dVar31 - dVar24) * dVar6;
    local_1c8._8_4_ = SUB84(dVar13,0);
    local_1c8._0_8_ = ((double)DAT_149934d80 - (dVar2 * dVar31 + dVar3 * dVar28)) * dVar6;
    local_1c8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    uStack_1b0 = 0;
    local_1a8._8_4_ = SUB84(dVar23,0);
    local_1a8._0_8_ = (dVar28 * dVar1 - dVar32) * dVar10;
    local_1a8._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
    uStack_190 = 0;
    uStack_170 = 0;
    local_168 = param_2[4];
    dStack_160 = param_2[5];
    local_158 = param_2[6];
    uStack_150 = 0x3ff0000000000000;
    dVar1 = *(double *)(param_1 + 0x2e0);
    dVar3 = *(double *)(param_1 + 0x2e8);
    dVar2 = *(double *)(param_1 + 0x2f0);
    dVar28 = dVar3 + dVar3;
    dVar31 = dVar2 + dVar2;
    dVar23 = dVar1 * (dVar1 + dVar1);
    local_1f8 = (1.0 - (dVar23 + dVar3 * dVar28)) * dVar9;
    dVar13 = *(double *)(param_1 + 0x2e0) * dVar31;
    dVar24 = *(double *)(param_1 + 0x2f8);
    dVar32 = dVar31 * dVar24;
    dVar33 = (dVar1 + dVar1) * *(double *)(param_1 + 0x2f8);
    dVar24 = dVar28 * dVar24;
    local_208 = (dVar24 + dVar13) * dVar9;
    dStack_200 = (dVar31 * dVar3 - dVar33) * dVar9;
    local_248 = ((double)DAT_149934d80 - (dVar2 * dVar31 + dVar3 * dVar28)) * dVar8;
    dVar23 = (DAT_149934d80._8_8_ - (dVar2 * dVar31 + dVar23)) * dVar11;
    dStack_240 = (dVar28 * dVar1 + dVar32) * dVar8;
    local_218 = (dVar31 * dVar3 + dVar33) * dVar11;
    local_238 = (dVar13 - dVar24) * dVar8;
    uStack_230 = 0;
    local_228._8_4_ = SUB84(dVar23,0);
    local_228._0_8_ = (dVar28 * dVar1 - dVar32) * dVar11;
    local_228._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
    uStack_210 = 0;
    uStack_1f0 = 0;
    local_1e8 = *(undefined8 *)(param_1 + 0x300);
    uStack_1e0 = *(undefined8 *)(param_1 + 0x308);
    local_1d8 = *(undefined8 *)(param_1 + 0x310);
    uStack_1d0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_148);
    FUN_144a1c686(&local_148,0x3e45798ee0000000);
    auVar30._8_8_ = -(ulonglong)(0.0 <= dVar10 * dVar11);
    auVar30._0_8_ = -(ulonglong)(0.0 <= dVar6 * dVar8);
    auVar26 = blendvpd(_DAT_149936790,auVar34,auVar30);
    uVar20 = -(ulonglong)(0.0 <= dVar7 * dVar9);
    dVar24 = (double)(~uVar20 & 0xbff0000000000000 | uVar20 & 0x3ff0000000000000);
    dVar23 = auVar26._0_8_;
    local_138 = local_138 * dVar23;
    local_140 = local_140 * dVar23;
    local_148 = local_148 * dVar23;
    dVar23 = auVar26._8_8_;
    local_118 = local_118 * dVar23;
    local_120 = local_120 * dVar23;
    local_128 = dVar23 * local_128;
    local_f8 = local_f8 * dVar24;
    local_100 = local_100 * dVar24;
    local_108 = dVar24 * local_108;
    FUN_14481fd10(&local_268,&local_148);
    dVar24 = local_258 * local_258 + local_268 * local_268;
    dVar23 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
    auVar22._0_8_ = dVar24 + dVar23;
    auVar22._8_8_ = dVar24 + dVar23;
    auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_);
    auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_);
    auVar26 = sqrtpd(auVar22,auVar22);
    auVar26 = divpd(auVar34,auVar26);
    auVar35._0_8_ = auVar26._0_8_ * local_258;
    auVar35._8_8_ = auVar26._8_8_ * dStack_250;
    dVar25 = (double)((ulonglong)(local_268 * auVar26._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_));
    dVar29 = (double)((ulonglong)(dStack_260 * auVar26._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_));
    auVar34 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar35,auVar21);
    dVar24 = 0.0;
  }
  dVar23 = auVar4._8_8_ * auVar5._8_8_;
  *(double *)(param_1 + 0x2e0) = dVar25;
  *(double *)(param_1 + 0x2e8) = dVar29;
  *(undefined1 (*) [16])(param_1 + 0x2f0) = auVar34;
  auVar5._8_4_ = SUB84(dStack_e0,0);
  auVar5._0_8_ = local_e8;
  auVar5._12_4_ = (int)((ulonglong)dStack_e0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x300) = auVar5;
  *(double *)(param_1 + 0x310) = local_d8;
  *(double *)(param_1 + 0x318) = dVar24;
  auVar12._8_4_ = SUB84(dVar10 * dVar11,0);
  auVar12._0_8_ = dVar6 * dVar8;
  auVar12._12_4_ = (int)((ulonglong)(dVar10 * dVar11) >> 0x20);
  *(undefined1 (*) [16])(param_1 + 800) = auVar12;
  auVar4._8_4_ = SUB84(dVar23,0);
  auVar4._0_8_ = dVar7 * dVar9;
  auVar4._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x330) = auVar4;
  *(float *)(param_1 + 0x344) = param_3 + *(float *)(param_1 + 0x344);
  if ((local_c0 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798ead6 FUN_14798ead6 body=47 status=ok
// SIG undefined FUN_14798ead6(void)

void FUN_14798ead6(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(byte *)(param_1 + 0x2da) = *(byte *)(param_1 + 0x2da) & 0xef;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_1 + 0x2e0);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x344) = 0;
  return;
}



// FUNCTION 14798eb06 FUN_14798eb06 body=39 status=ok
// SIG undefined FUN_14798eb06(void)

void FUN_14798eb06(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 0x2e0);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *param_3 = *(undefined4 *)(param_1 + 0x344);
  return;
}



// FUNCTION 14798eb2e FUN_14798eb2e body=143 status=ok
// SIG undefined FUN_14798eb2e(void)

void FUN_14798eb2e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x350);
  *(uint *)(param_1 + 0x350) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x354) < iVar1 + 1U) {
    FUN_14019e766(param_1 + 0x348,iVar1);
  }
  FUN_144903306((longlong)iVar1 * 0x8c0 + *(longlong *)(param_1 + 0x348),param_2);
  iVar1 = *(int *)(param_1 + 0x360);
  *(uint *)(param_1 + 0x360) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x364) < iVar1 + 1U) {
    FUN_14475e4ac((longlong *)(param_1 + 0x358),iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x358) + (longlong)iVar1 * 4) = param_3;
  return;
}



// FUNCTION 14798ebbe FUN_14798ebbe body=107 status=ok
// SIG undefined FUN_14798ebbe(void)

void FUN_14798ebbe(longlong param_1)

{
  FUN_1400e59f7(*(undefined8 *)(param_1 + 0x348),*(undefined4 *)(param_1 + 0x350));
  *(undefined4 *)(param_1 + 0x350) = 0;
  if (*(int *)(param_1 + 0x354) != 0) {
    FUN_1400e5bc0(param_1 + 0x348,0);
  }
  *(undefined4 *)(param_1 + 0x360) = 0;
  if (*(int *)(param_1 + 0x364) != 0) {
    FUN_14482f6fa(param_1 + 0x358,0);
    return;
  }
  return;
}



// FUNCTION 14798ec2a FUN_14798ec2a body=140 status=ok
// SIG undefined FUN_14798ec2a(void)

void FUN_14798ec2a(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x10))(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798ecb8 FUN_14798ecb8 body=39 status=ok
// SIG undefined FUN_14798ecb8(void)

void FUN_14798ecb8(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x18))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14798ece2 FUN_14798ece2 body=206 status=ok
// SIG undefined FUN_14798ece2(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14798ece2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 1);
  }
  plVar1 = local_28 + 1;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14798edb2(local_28,plVar1);
  if ((local_28[0] != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(local_28[0]);
  }
  *param_3 = local_28[0];
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798edb2 FUN_14798edb2 body=997 status=ok
// SIG undefined FUN_14798edb2(void)

longlong * FUN_14798edb2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  longlong *local_100;
  undefined8 local_f8;
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  longlong *local_e8 [2];
  undefined8 local_d8;
  longlong *local_d0;
  longlong local_c8 [2];
  longlong *local_b8 [2];
  longlong *local_a8 [2];
  undefined8 local_98;
  longlong *local_90;
  wchar_t **local_88;
  undefined1 *local_80;
  longlong local_78;
  undefined4 local_70;
  wchar_t *local_68;
  undefined4 local_60;
  longlong *local_58 [2];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar5 = *param_2;
  if (lVar5 != 0) {
    lVar4 = FUN_144a6c4d8();
    if ((lVar4 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) {
LAB_14798edf9:
      lVar9 = *param_2;
    }
    else {
      lVar9 = *param_2;
      if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30) {
        if (lVar9 == 0) goto LAB_14798ee70;
        lVar5 = FUN_144a6c4d8();
        if (((lVar5 == 0) || (*(int *)(lVar9 + 0x38) < *(int *)(lVar5 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
            lVar5 + 0x30)) {
          lVar5 = 0;
        }
        else {
          lVar5 = *param_2;
        }
        uVar7 = FUN_1458d48aa();
        cVar3 = FUN_144a7ff9e(lVar5,uVar7);
        if (cVar3 != '\0') {
          lVar5 = *param_2;
          *param_1 = lVar5;
          if ((lVar5 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_128);
          }
          goto LAB_14798ee77;
        }
        goto LAB_14798edf9;
      }
    }
    if (lVar9 != 0) {
      lVar5 = FUN_144a6c4d8();
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x38) <= *(int *)(lVar9 + 0x38)) {
          lVar4 = *param_2;
          if (lVar4 != 0 &&
              *(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30) {
            lVar5 = FUN_144a6c4d8();
            if (((lVar5 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar5 + 0x38))) ||
               (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
                lVar5 + 0x30)) {
              lVar5 = 0;
            }
            else {
              lVar5 = *param_2;
            }
            local_68 = *(wchar_t **)(lVar5 + 0x18);
            FUN_1400021e4(&local_68,local_c8);
            FUN_140233b1a(local_b8,local_c8);
            local_68 = L"GetInterfaceClass_ClassSetWithoutInterface";
            local_60 = 0x2a;
            FUN_1446e940c(local_ec,&local_68);
            local_68 = L"CameraLensEffectInterfaceClassSupportLibrary";
            local_60 = 0x2c;
            FUN_1446e940c(local_f0,&local_68);
            FUN_140208bae(local_e8,local_f0,local_ec,
                          L"{0} found within wrapper passed to UCameraLensEffectInterfaceClassSupportLibrary::GetInterfaceClass, but does not implement CameraLensEffectInterface!"
                         );
            FUN_14023409e(&local_d8,local_e8,1);
            local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
            FUN_14023423e(local_58,local_b8);
            local_80 = local_48;
            local_88 = &local_68;
            FUN_14010d304(&local_78);
            local_98 = local_d8;
            local_90 = local_d0;
            if (local_d0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(local_a8,&local_98,&local_78);
            FUN_14007f2db(local_78,local_70);
            if (local_78 != 0) {
              FUN_1400020a8();
            }
            if (local_58[0] != (longlong *)0x0) {
              (**(code **)(*local_58[0] + 0x10))();
            }
            if (local_d0 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_d0 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_d0)(local_d0);
                LOCK();
                piVar2 = (int *)((longlong)local_d0 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*local_d0 + 0x10))(local_d0);
                }
              }
            }
            if (local_b8[0] != (longlong *)0x0) {
              (**(code **)(*local_b8[0] + 0x10))();
            }
            if (local_e8[0] != (longlong *)0x0) {
              (**(code **)(*local_e8[0] + 0x10))();
            }
            if (local_c8[0] != 0) {
              FUN_1400020a8();
            }
            FUN_1446f470e(&local_f8,
                          L"CameraLensEffectInterfaceClassSupportLibraryxxGetInterfaceClass_ClassSetWithoutInterface"
                          ,1);
            puVar6 = (undefined8 *)FUN_1447a1f4a(local_a8);
            if (*(int *)(puVar6 + 1) == 0) {
              puVar8 = &DAT_149dfb77a;
            }
            else {
              puVar8 = (undefined2 *)*puVar6;
            }
            FUN_1415b7ec4(puVar8,2,local_f8);
            FUN_1446ddc76(&local_78,&DAT_14a492018,1);
            FUN_14276766e(&local_68,&local_78);
            FUN_142767974(&local_68,local_108,local_a8);
            if (local_100 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_100 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_100)(local_100);
                LOCK();
                piVar2 = (int *)((longlong)local_100 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*local_100 + 0x10))(local_100);
                }
              }
            }
            FUN_1427678c0(&local_68);
            if (local_a8[0] != (longlong *)0x0) {
              (**(code **)(*local_a8[0] + 0x10))();
            }
          }
        }
      }
    }
  }
LAB_14798ee70:
  *param_1 = 0;
LAB_14798ee77:
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798f19e FUN_14798f19e body=253 status=ok
// SIG undefined FUN_14798f19e(void)

void FUN_14798f19e(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar3 = &local_29;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14798f29c(puVar2,puVar3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798f29c FUN_14798f29c body=83 status=ok
// SIG undefined FUN_14798f29c(void)

void FUN_14798f29c(undefined8 param_1,undefined1 *param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14798edb2(&local_20,param_1);
  if (local_20 != 0) {
    FUN_144a6c4d8();
  }
  *param_2 = 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798f2f0 FUN_14798f2f0 body=235 status=ok
// SIG undefined FUN_14798f2f0(void)

void FUN_14798f2f0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar1 = &local_29;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *puVar1 = 1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798f3dc FUN_14798f3dc body=358 status=ok
// SIG undefined FUN_14798f3dc(void)

void FUN_14798f3dc(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined1 local_31;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_31 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  puVar4 = &local_31;
  if (puVar2 != (undefined1 *)0x0) {
    puVar4 = puVar2;
  }
  puVar3 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  FUN_14798f544(&local_40,puVar3,puVar4);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798f544 FUN_14798f544 body=1001 status=ok
// SIG undefined FUN_14798f544(void)

void FUN_14798f544(longlong *param_1,longlong *param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined1 auStack_128 [40];
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [4];
  undefined1 local_e4 [4];
  longlong *local_e0 [2];
  undefined8 local_d0;
  longlong *local_c8;
  longlong local_c0 [2];
  longlong *local_b0 [2];
  longlong *local_a0 [2];
  undefined8 local_90;
  longlong *local_88;
  wchar_t **local_80;
  undefined1 *local_78;
  longlong local_70;
  undefined4 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  longlong *local_50 [2];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar8 = *param_1;
  if (lVar8 != 0) {
    lVar4 = FUN_144a6c4d8();
    if ((((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar8 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)) && (lVar8 = *param_1, lVar8 != 0)) {
      lVar4 = FUN_144a6c4d8();
      if (((lVar4 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar4 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
          lVar4 + 0x30)) {
        lVar8 = 0;
      }
      else {
        lVar8 = *param_1;
      }
      uVar6 = FUN_1458d48aa();
      cVar3 = FUN_144a7ff9e(lVar8,uVar6);
      if (cVar3 != '\0') {
        lVar8 = *param_1;
        if (DAT_14c950c29 == '\x01') {
          if (lVar8 == 0) {
            lVar8 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar8 = *param_1;
          }
        }
        *param_2 = lVar8;
        *param_3 = 0;
        goto LAB_14798f5cf;
      }
    }
  }
  *param_3 = 1;
  lVar8 = *param_1;
  if (lVar8 != 0) {
    lVar4 = FUN_144a6c4d8();
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar8 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30 && (lVar8 = *param_1, lVar8 != 0)))) {
      lVar4 = FUN_144a6c4d8();
      if ((((lVar4 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar4 + 0x38))) ||
          (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
           lVar4 + 0x30)) || (*param_1 == 0)) {
        FUN_140056680(local_c0,&DAT_149e01fe8);
      }
      else {
        local_60 = *(wchar_t **)(*param_1 + 0x18);
        FUN_1400021e4(&local_60,local_c0);
      }
      FUN_140233b1a(local_b0,local_c0);
      local_60 = L"SetInterfaceClass_ClassSetWithoutInterface";
      local_58 = 0x2a;
      FUN_1446e940c(local_e4,&local_60);
      local_60 = L"CameraLensEffectInterfaceClassSupportLibrary";
      local_58 = 0x2c;
      FUN_1446e940c(local_e8,&local_60);
      FUN_140208bae(local_e0,local_e8,local_e4,
                    L"{0} passed to UCameraLensEffectInterfaceClassSupportLibrary::SetInterfaceClass, but does not implement CameraLensEffectInterface!"
                   );
      FUN_14023409e(&local_d0,local_e0,1);
      local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
      FUN_14023423e(local_50,local_b0);
      local_78 = local_40;
      local_80 = &local_60;
      FUN_14010d304(&local_70);
      local_90 = local_d0;
      local_88 = local_c8;
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_a0,&local_90,&local_70);
      FUN_14007f2db(local_70,local_68);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      if (local_50[0] != (longlong *)0x0) {
        (**(code **)(*local_50[0] + 0x10))();
      }
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_c8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_c8)(local_c8);
          LOCK();
          piVar2 = (int *)((longlong)local_c8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_c8 + 0x10))(local_c8);
          }
        }
      }
      if (local_b0[0] != (longlong *)0x0) {
        (**(code **)(*local_b0[0] + 0x10))();
      }
      if (local_e0[0] != (longlong *)0x0) {
        (**(code **)(*local_e0[0] + 0x10))();
      }
      if (local_c0[0] != 0) {
        FUN_1400020a8();
      }
      FUN_1446f470e(&local_f0,
                    L"CameraLensEffectInterfaceClassSupportLibraryxxSetInterfaceClass_ClassSetWithoutInterface"
                    ,1);
      puVar5 = (undefined8 *)FUN_1447a1f4a(local_a0);
      if (*(int *)(puVar5 + 1) == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      else {
        puVar7 = (undefined2 *)*puVar5;
      }
      FUN_1415b7ec4(puVar7,2,local_f0);
      FUN_1446ddc76(&local_70,&DAT_14a492018,1);
      FUN_14276766e(&local_60,&local_70);
      FUN_142767974(&local_60,local_100,local_a0);
      if (local_f8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_f8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_f8)(local_f8);
          LOCK();
          piVar2 = (int *)((longlong)local_f8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_f8 + 0x10))(local_f8);
          }
        }
      }
      FUN_1427678c0(&local_60);
      if (local_a0[0] != (longlong *)0x0) {
        (**(code **)(*local_a0[0] + 0x10))();
      }
    }
  }
LAB_14798f5cf:
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798f932 FUN_14798f932 body=92 status=ok
// SIG undefined FUN_14798f932(void)

undefined8 * FUN_14798f932(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 8))();
    if (lVar1 != 0) {
      lVar2 = FUN_144a6c4d8();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) goto LAB_14798f970;
    }
  }
  lVar1 = 0;
LAB_14798f970:
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14798f98e(lVar1,param_2,1);
  return param_2;
}



// FUNCTION 14798f98e FUN_14798f98e body=135 status=ok
// SIG undefined FUN_14798f98e(void)

void FUN_14798f98e(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_1479ad8e2(param_2,0);
  }
  local_28 = FUN_140288b94();
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_28);
  }
  FUN_1479ad7a0(param_1,&local_28,param_3,param_2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798fa16 FUN_14798fa16 body=91 status=ok
// SIG undefined FUN_14798fa16(void)

undefined8 FUN_14798fa16(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))(param_1,&local_20);
  if (local_18 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *local_20;
  }
  if (local_20 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798fa72 FUN_14798fa72 body=196 status=ok
// SIG undefined FUN_14798fa72(void)

void FUN_14798fa72(longlong *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_d8 [32];
  uint local_b8;
  undefined1 local_a8 [104];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 8))();
    if (lVar1 != 0) {
      lVar2 = FUN_144a6c4d8();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        local_b8 = param_4;
        FUN_14798fb38(local_a8,lVar1,param_2,param_3);
        local_b8 = local_b8 & 0xffffff00;
        FUN_1413d4c10(lVar1,local_a8,0,0);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14798fb38 FUN_14798fb38 body=1960 status=ok
// SIG undefined FUN_14798fb38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_14798fb38(undefined1 (*param_1) [16],longlong param_2,double *param_3,undefined8 param_4,
             float param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  longlong *plVar12;
  double *pdVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  double dVar29;
  double dVar30;
  undefined1 auVar28 [16];
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auStack_2c8 [32];
  double local_2a8;
  double dStack_2a0;
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  if (param_2 != 0) {
    uVar11 = FUN_1458d48aa();
    plVar12 = (longlong *)FUN_144718840(param_2,uVar11);
    if (plVar12 != (longlong *)0x0) {
      pdVar13 = (double *)(**(code **)(*plVar12 + 0x20))(plVar12);
      dVar4 = *pdVar13;
      dVar5 = pdVar13[1];
      dVar32 = pdVar13[2];
      dVar35 = pdVar13[3];
      auVar22 = *(undefined1 (*) [16])(pdVar13 + 4);
      dVar23 = auVar22._8_8_;
      local_2a8 = pdVar13[6];
      dStack_2a0 = 0.0;
      auVar1 = *(undefined1 (*) [16])(pdVar13 + 8);
      dVar2 = auVar1._0_8_;
      dVar3 = auVar1._8_8_;
      auVar33 = *(undefined1 (*) [16])(pdVar13 + 10);
      fVar18 = (float)(**(code **)(*plVar12 + 0x28))(plVar12);
      fVar18 = tanf((fVar18 * 0.5 * 3.1415927) / 180.0);
      fVar19 = tanf((param_5 * 0.5 * 3.1415927) / 180.0);
      dVar6 = auVar22._0_8_ * (double)(fVar18 / fVar19);
      uVar9 = FUN_144a7484c(param_4,&local_158);
      dVar8 = *param_3;
      dVar26 = param_3[1];
      dVar30 = param_3[2];
      *(undefined8 *)param_1[2] = 0;
      *(undefined8 *)(param_1[2] + 8) = 0;
      *(undefined8 *)param_1[3] = 0;
      *(undefined8 *)(param_1[3] + 8) = 0;
      auVar7 = _DAT_149934d80;
      auVar24 = minpd(auVar1,_DAT_149934d80);
      auVar27 = minpd(auVar33,ZEXT816(0x3ff0000000000000));
      auVar25._8_8_ = -(ulonglong)(auVar24._8_8_ < 0.0);
      auVar25._0_8_ = -(ulonglong)(auVar24._0_8_ < 0.0);
      iVar10 = movmskpd(uVar9,auVar25);
      auVar24._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
      auVar24._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
      uVar14 = movmskpd((int)param_4,auVar24);
      local_298._0_8_ = auVar33._0_8_;
      local_298._8_8_ = auVar33._8_8_;
      local_298 = auVar33;
      if ((uVar14 & 0x3fffffff) == 0 && iVar10 == 0) {
        dVar31 = dVar4 * local_148 * 1.0 +
                 dVar35 * dStack_150 + dVar32 * local_158 * -1.0 + dVar5 * dStack_140;
        auVar27._0_8_ = (double)(fVar18 / fVar19) * auVar22._0_8_;
        auVar27._8_8_ = 0;
        dVar29 = dVar32 * local_148 * -1.0 +
                 ((local_158 * dVar4 * -1.0 + dVar35 * dStack_140) - dStack_150 * dVar5);
        auVar7._8_4_ = SUB84(dVar31,0);
        auVar7._0_8_ = dVar5 * local_148 * -1.0 +
                       dVar32 * dStack_150 + dVar35 * local_158 * 1.0 + dVar4 * dStack_140;
        auVar7._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
        *param_1 = auVar7;
        auVar33._8_4_ = SUB84(dVar29,0);
        auVar33._0_8_ =
             dVar35 * local_148 * 1.0 +
             ((local_158 * dVar5 * 1.0 + dVar32 * dStack_140) - dStack_150 * dVar4);
        auVar33._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
        param_1[1] = auVar33;
        dVar4 = local_2a8 * 1.0;
        dVar5 = dStack_2a0 * 0.0;
        auVar22._8_4_ = SUB84(dVar5,0);
        auVar22._0_8_ = dVar4;
        auVar22._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        auVar22 = blendpd(auVar27,auVar22,2);
        dVar32 = dVar23 * local_158 - dVar6 * dStack_150;
        dVar29 = dVar4 * dStack_150 - dVar23 * local_148;
        dVar31 = auVar22._0_8_ * local_148 - dVar4 * local_158;
        dVar35 = auVar22._8_8_ * dStack_140 - dVar5 * dStack_140;
        dVar29 = dVar29 + dVar29;
        dVar31 = dVar31 + dVar31;
        dVar32 = dVar32 + dVar32;
        dVar35 = dVar35 + dVar35;
        *(double *)param_1[2] =
             dVar8 + (dVar32 * dStack_150 - local_148 * dVar31) + dStack_140 * dVar29 + dVar6;
        *(double *)(param_1[2] + 8) =
             dVar26 + (dVar29 * local_148 - dVar32 * local_158) + dStack_140 * dVar31 + dVar23;
        *(double *)param_1[3] =
             dVar30 + (dVar31 * local_158 - dStack_150 * dVar29) + dStack_140 * dVar32 + dVar4;
        *(double *)(param_1[3] + 8) =
             (dVar35 * dStack_140 - dVar35 * dStack_140) + dStack_140 * dVar35 + dVar5 + 0.0;
        *(double *)param_1[4] = dVar2;
        *(double *)(param_1[4] + 8) = dVar3;
        *(double *)param_1[5] = (double)local_298._0_8_ * 1.0;
        *(double *)(param_1[5] + 8) = (double)local_298._8_8_ * 0.0;
        local_288 = auVar1;
      }
      else {
        dVar29 = dStack_150 + dStack_150;
        dVar23 = local_148 + local_148;
        dVar31 = local_158 * (local_158 + local_158);
        local_1d8 = (double)DAT_149934d80 - (local_148 * dVar23 + dStack_150 * dVar29);
        dStack_1b0 = DAT_149934d80._8_8_ - (local_148 * dVar23 + dVar31);
        local_188 = 1.0 - (dVar31 + dStack_150 * dVar29);
        dStack_190 = (local_158 + local_158) * dStack_140;
        dStack_1d0 = dVar29 * local_158 + dVar23 * dStack_140;
        local_1a8 = dVar23 * dStack_150 + dStack_190;
        local_1b8 = dVar29 * local_158 - dVar23 * dStack_140;
        dStack_190 = dVar23 * dStack_150 - dStack_190;
        local_198 = dVar29 * dStack_140 + local_158 * dVar23;
        local_1c8 = local_158 * dVar23 - dVar29 * dStack_140;
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        uStack_180 = 0;
        uStack_160 = 0x3ff0000000000000;
        dVar23 = dVar5 + dVar5;
        dVar31 = dVar32 + dVar32;
        dVar29 = dVar4 * (dVar4 + dVar4);
        local_258 = ((double)DAT_149934d80 - (dVar32 * dVar31 + dVar5 * dVar23)) * dVar2;
        dStack_230 = (DAT_149934d80._8_8_ - (dVar32 * dVar31 + dVar29)) * dVar3;
        dVar32 = (dVar4 + dVar4) * dVar35;
        local_238 = (dVar23 * dVar4 - dVar31 * dVar35) * dVar3;
        dStack_210 = (dVar31 * dVar5 - dVar32) * (double)local_298._0_8_;
        local_218 = (dVar23 * dVar35 + dVar4 * dVar31) * (double)local_298._0_8_;
        dStack_250 = (dVar23 * dVar4 + dVar31 * dVar35) * dVar2;
        local_228 = (dVar31 * dVar5 + dVar32) * dVar3;
        local_248 = (dVar4 * dVar31 - dVar23 * dVar35) * dVar2;
        uStack_240 = 0;
        uStack_220 = 0;
        local_208 = (1.0 - (dVar29 + dVar5 * dVar23)) * (double)local_298._0_8_;
        uStack_200 = 0;
        local_1f8._8_4_ = auVar22._8_4_;
        local_1f8._0_8_ = dVar6;
        local_1f8._12_4_ = auVar22._12_4_;
        local_1e8 = local_2a8;
        uStack_1e0 = 0x3ff0000000000000;
        dVar23 = (double)local_298._0_8_ * 1.0;
        dVar6 = (double)local_298._8_8_ * 0.0;
        local_178 = dVar8;
        dStack_170 = dVar26;
        local_168 = dVar30;
        FUN_1447fea8d(&local_158);
        FUN_144a1c686(&local_158,0x3e45798ee0000000);
        auVar20._8_8_ = -(ulonglong)(0.0 <= dVar3);
        auVar20._0_8_ = -(ulonglong)(0.0 <= dVar2);
        auVar22 = blendvpd(_DAT_149936790,auVar7,auVar20);
        uVar17 = -(ulonglong)(0.0 <= dVar23);
        dVar26 = (double)(~uVar17 & 0xbff0000000000000 | uVar17 & 0x3ff0000000000000);
        dVar30 = auVar22._0_8_;
        local_148 = local_148 * dVar30;
        dStack_150 = dStack_150 * dVar30;
        local_158 = local_158 * dVar30;
        dVar30 = auVar22._8_8_;
        local_128 = local_128 * dVar30;
        local_130 = local_130 * dVar30;
        local_138 = dVar30 * local_138;
        local_108 = local_108 * dVar26;
        local_110 = local_110 * dVar26;
        local_118 = dVar26 * local_118;
        FUN_14481fd10(&local_278,&local_158);
        dVar26 = local_268 * local_268 + local_278 * local_278;
        dVar30 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
        auVar28._0_8_ = dVar26 + dVar30;
        auVar28._8_8_ = dVar26 + dVar30;
        auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_);
        auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_);
        auVar22 = sqrtpd(auVar28,auVar28);
        auVar33 = divpd(auVar7,auVar22);
        auVar34._0_8_ = auVar33._0_8_ * local_268;
        auVar34._8_8_ = auVar33._8_8_ * dStack_260;
        auVar22 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar34,auVar21);
        param_1[4] = auVar1;
        auVar1._8_4_ = SUB84(dVar6,0);
        auVar1._0_8_ = dVar23;
        auVar1._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        param_1[5] = auVar1;
        *(ulonglong *)*param_1 =
             (ulonglong)(local_278 * auVar33._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_);
        *(ulonglong *)(*param_1 + 8) =
             (ulonglong)(dStack_270 * auVar33._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_);
        param_1[1] = auVar22;
        *(undefined8 *)param_1[2] = local_f8;
        *(undefined8 *)(param_1[2] + 8) = uStack_f0;
        *(undefined8 *)param_1[3] = local_e8;
        *(undefined8 *)(param_1[3] + 8) = 0;
      }
      if ((local_d0 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
  }
  puVar16 = &DAT_14c846480;
  for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
    *(undefined8 *)*param_1 = *puVar16;
    puVar16 = puVar16 + 1;
    param_1 = (undefined1 (*) [16])(*param_1 + 8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_2c8);
}



// FUNCTION 1479902e6 FUN_1479902e6 body=162 status=ok
// SIG undefined FUN_1479902e6(void)

void FUN_1479902e6(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2e0))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479903a4 FUN_1479903a4 body=42 status=ok
// SIG undefined FUN_1479903a4(void)

void FUN_1479903a4(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2d8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1479903d2 FUN_1479903d2 body=41 status=ok
// SIG undefined FUN_1479903d2(void)

void FUN_1479903d2(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2c8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147990400 FUN_147990400 body=41 status=ok
// SIG undefined FUN_147990400(void)

void FUN_147990400(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2d0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14799049e FUN_14799049e body=1 status=ok
// SIG undefined FUN_14799049e(void)

void FUN_14799049e(void)

{
  return;
}



// FUNCTION 1479904aa FUN_1479904aa body=221 status=ok
// SIG undefined FUN_1479904aa(void)

float FUN_1479904aa(longlong param_1,double *param_2)

{
  float fVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = *(double *)(param_1 + 0x270) - param_2[2];
  dVar5 = *(double *)(param_1 + 0x268) - param_2[1];
  dVar4 = *(double *)(param_1 + 0x260) - *param_2;
  fVar3 = *(float *)(param_1 + 0x2ac);
  fVar1 = *(float *)(param_1 + 0x2b0);
  if (fVar3 < fVar1) {
    fVar3 = (float)((SQRT(dVar2 * dVar2 + dVar4 * dVar4 + dVar5 * dVar5) - (double)fVar3) /
                   (double)(fVar1 - fVar3));
    if (1.0 <= fVar3) {
      fVar3 = 1.0;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
                    /* WARNING: Could not recover jumptable at 0x00014799054d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar3 = powf(1.0 - fVar3,
                 *(float *)(&DAT_14a2fa1f0 + (ulonglong)(*(char *)(param_1 + 0x2a8) == '\x01') * 4))
    ;
    return fVar3;
  }
  fVar3 = 0.0;
  if ((fVar1 <= 0.0) || (dVar2 * dVar2 + dVar4 * dVar4 + dVar5 * dVar5 < (double)(fVar1 * fVar1))) {
    fVar3 = 1.0;
  }
  return fVar3;
}



// FUNCTION 147990588 FUN_147990588 body=22 status=ok
// SIG undefined FUN_147990588(void)

undefined8 FUN_147990588(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147990594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2c0))();
    return uVar1;
  }
  return 1;
}



// FUNCTION 1479905c6 FUN_1479905c6 body=155 status=ok
// SIG undefined FUN_1479905c6(void)

void FUN_1479905c6(undefined8 param_1,longlong param_2,undefined4 param_3,undefined1 param_4,
                  undefined4 *param_5)

{
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_44 = 0;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_60 = *param_5;
  uStack_5c = param_5[1];
  uStack_58 = param_5[2];
  uStack_54 = param_5[3];
  local_50 = *(undefined8 *)(param_5 + 4);
  local_70 = param_2;
  local_68 = param_3;
  local_64 = param_4;
  FUN_14341d62a(param_1);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147990662 FUN_147990662 body=84 status=ok
// SIG undefined FUN_147990662(void)

void FUN_147990662(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(char *)(param_1 + 0xd0) == '\x01') &&
     (plVar1 = *(longlong **)(param_1 + 0x30), plVar1 != (longlong *)0x0)) {
    local_9 = param_2;
    (**(code **)(*plVar1 + 0x2c8))(plVar1,&local_9);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479906b8 FUN_1479906b8 body=367 status=ok
// SIG undefined FUN_1479906b8(void)

undefined8 FUN_1479906b8(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = *param_2;
  if ((uVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar5);
  }
  local_30 = uVar5;
  if ((uVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar5);
  }
  if ((uVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar5);
  }
  uVar2 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  iVar3 = FUN_1479ae95a((longlong *)(param_1 + 0x58),uVar2 >> 0x10 ^ uVar2,&local_30);
  if (iVar3 == -1) {
LAB_14799078c:
    if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  lVar4 = (longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0x58);
  if ((lVar4 + 8 == 0 || lVar4 == 0) || (*(int *)(lVar4 + 0x10) < 1)) goto LAB_14799078c;
  FUN_14799091c(lVar4 + 8,&local_30);
  uVar1 = *(undefined8 *)(local_30 + 0x18);
  uVar5 = *param_2;
  if (uVar5 != 0) {
    lVar4 = FUN_1411080a4();
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(uVar5 + 0x38))) &&
       (*(longlong *)(*(longlong *)(uVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      uVar5 = *param_2;
      goto LAB_1479907f4;
    }
  }
  uVar5 = 0;
LAB_1479907f4:
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  local_58 = 0;
  FUN_147677802(param_1,uVar5,uVar1,0);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
}



// FUNCTION 147990830 FUN_147990830 body=235 status=ok
// SIG undefined FUN_147990830(void)

void FUN_147990830(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = *(ulonglong *)(param_2 + 0x10);
  local_28 = uVar2;
  if (uVar2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(uVar2);
  }
  if ((uVar2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(uVar2);
  }
  uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  plVar4 = (longlong *)FUN_1479ae4ee(param_1 + 0x58,uVar3 >> 0x10 ^ uVar3,&local_28);
  iVar1 = (int)plVar4[1];
  if ((longlong)iVar1 < 5) {
    *(uint *)(plVar4 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar4 + 0xc) < iVar1 + 1U) {
      FUN_1479aed20(plVar4,iVar1);
    }
    *(longlong *)(*plVar4 + (longlong)iVar1 * 8) = param_2;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14799091c FUN_14799091c body=72 status=ok
// SIG undefined FUN_14799091c(void)

longlong * FUN_14799091c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  lVar1 = *(longlong *)(*param_1 + -8 + (longlong)iVar2 * 8);
  *param_2 = lVar1;
  if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
    FUN_1456cec3c();
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_1479aeda6(param_1);
  return param_2;
}



// FUNCTION 147990974 FUN_147990974 body=95 status=ok
// SIG undefined FUN_147990974(void)

void FUN_147990974(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_1479ae45a(param_1,iVar2);
  }
  FUN_1479aeed0((longlong)iVar2 * 0x18 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1479909d4 FUN_1479909d4 body=268 status=ok
// SIG undefined FUN_1479909d4(void)

void FUN_1479909d4(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [47];
  char local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0x50);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if ((*(char *)(lVar3 + 0xd0) == '\x01') &&
         (plVar4 = *(longlong **)(lVar3 + 0x30), plVar4 != (longlong *)0x0)) {
        local_39 = param_2;
        (**(code **)(*plVar4 + 0x2c8))(plVar4,&local_39);
      }
      lVar5 = lVar5 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar5);
  }
  if (param_2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x50);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
      lVar5 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + lVar5);
        plVar4 = *(longlong **)(lVar3 + 0x30);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x2d0))();
        }
        *(undefined1 *)(lVar3 + 0xd0) = 0;
        if ((*(longlong *)(lVar2 + lVar5) != 0) && (*(char *)(lVar2 + 0x10 + lVar5) == '\0')) {
          FUN_147990830(param_1);
        }
        lVar5 = lVar5 + 0x18;
      } while ((longlong)iVar1 * 0x18 != lVar5);
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    if (*(int *)(param_1 + 0x54) != 0) {
      FUN_1479aef3a(param_1 + 0x48);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147990ae2 FUN_147990ae2 body=1238 status=ok
// SIG undefined FUN_147990ae2(void)

void FUN_147990ae2(longlong param_1,undefined8 param_2,undefined8 param_3,float *param_4,
                  float *param_5)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_178 [32];
  undefined2 *local_158;
  undefined4 local_150;
  undefined4 local_148;
  float *local_140;
  undefined8 local_138;
  undefined8 local_130;
  float *local_128;
  undefined2 *local_120;
  int local_118;
  undefined2 *local_110;
  int local_108;
  undefined2 *local_100;
  int local_f8;
  undefined2 *local_f0;
  int local_e8;
  longlong local_e0;
  int local_d8;
  longlong local_d0;
  int local_c8;
  float local_c0;
  char local_bc;
  uint local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_130 = param_2;
  FUN_147d8e5b4(param_2,&DAT_149e1e2d4);
  local_138 = FUN_14375bb6e();
  fVar1 = *param_4;
  iVar7 = (int)ROUND(-0.5 - (*param_5 / fVar1 + *param_5 / fVar1)) >> 1;
  local_c0 = 0.0;
  local_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  local_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  fVar2 = *(float *)(param_1 + 0x40);
  local_128 = param_4;
  if (param_1 == 0) {
    FUN_140056680(&local_f0,&DAT_149e01fe8);
  }
  else {
    local_e0 = *(longlong *)(param_1 + 0x18);
    FUN_1400021e4(&local_e0,&local_f0);
  }
  puVar8 = local_f0;
  if (local_e8 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_e0,L"Modifier_CameraShake %s, Alpha:%f",puVar8,(double)fVar2);
  local_d0 = local_e0;
  local_c8 = local_d8 + -1;
  if (local_d8 == 0) {
    local_c8 = 0;
  }
  local_140 = &local_c0;
  local_148 = 0x3f800000;
  local_150 = 0x3f800000;
  local_158 = (undefined2 *)CONCAT44(local_158._4_4_,(float)-iVar7 * fVar1);
  FUN_147d8e6b2(local_130,local_138,&local_d0,fVar1);
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
  if (local_f0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  iVar7 = 1 - iVar7;
  iVar5 = *(int *)(param_1 + 0x50);
  if (0 < iVar5) {
    lVar11 = 8;
    uVar10 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x48);
      lVar6 = *(longlong *)(lVar3 + -8 + lVar11);
      if (lVar6 != 0) {
        local_c0 = 0.0;
        local_bc = '\0';
        local_b8 = 0;
        uStack_b4 = 0;
        plVar4 = *(longlong **)(lVar6 + 0x30);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x2a0))(plVar4,&local_c0);
        }
        if (local_bc == '\x01') {
          FUN_140056680(&local_e0,L"Infinite");
        }
        else {
          local_c0 = 0.0;
          local_bc = '\0';
          local_b8 = 0;
          uStack_b4 = 0;
          plVar4 = *(longlong **)(*(longlong *)(lVar3 + -8 + lVar11) + 0x30);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x2a0))(plVar4,&local_c0);
          }
          FUN_1406112c4(&local_e0,(double)local_c0,1);
        }
        local_c0 = 0.0;
        local_b8 = local_b8 & 0xfffffffe;
        uStack_b4 = 0;
        uStack_b0 = 0;
        uStack_ac = 0;
        local_a8 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        fVar1 = *local_128;
        lVar6 = FUN_14479d2ce(lVar3 + lVar11);
        if (lVar6 == 0) {
          FUN_140056680(&local_110,&DAT_149e01fe8);
        }
        else {
          local_f0 = *(undefined2 **)(lVar6 + 0x18);
          FUN_1400021e4(&local_f0,&local_110);
        }
        puVar8 = &DAT_149dfb77a;
        if (local_108 != 0) {
          puVar8 = local_110;
        }
        lVar3 = *(longlong *)(lVar3 + -8 + lVar11);
        if (lVar3 == 0) {
          FUN_140056680(&local_120,&DAT_149e01fe8);
        }
        else {
          local_f0 = *(undefined2 **)(lVar3 + 0x18);
          FUN_1400021e4(&local_f0,&local_120);
        }
        puVar9 = &DAT_149dfb77a;
        if (local_118 != 0) {
          puVar9 = local_120;
        }
        local_158 = puVar8;
        FUN_140002266(&local_f0,L"[%d] %s Source:%s",uVar10 & 0xffffffff,puVar9);
        local_100 = local_f0;
        local_f8 = local_e8 + -1;
        if (local_e8 == 0) {
          local_f8 = 0;
        }
        local_140 = &local_c0;
        local_148 = 0x3f800000;
        local_150 = 0x3f800000;
        local_158 = (undefined2 *)CONCAT44(local_158._4_4_,(float)iVar7 * fVar1);
        FUN_147d8e6b2(local_130,local_138,&local_100,fVar1 + fVar1);
        if (local_f0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_120 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_110 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_e0 != 0) {
          FUN_1400020a8();
        }
        iVar7 = iVar7 + 1;
        iVar5 = *(int *)(param_1 + 0x50);
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x18;
    } while ((longlong)uVar10 < (longlong)iVar5);
  }
  *param_5 = (float)iVar7 * *local_128;
  if ((local_80 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147990fba FUN_147990fba body=107 status=ok
// SIG undefined FUN_147990fba(void)

undefined8 * FUN_147990fba(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  uint uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  uStack_1c = uStack_1c & 0xffffff00;
  local_18 = 0;
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2a0))(plVar1,&local_20);
  }
  *param_2 = CONCAT44(uStack_1c,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147991026 FUN_147991026 body=137 status=ok
// SIG undefined FUN_147991026(void)

longlong * FUN_147991026(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (**(code **)(*param_1 + 0x18))(0,param_3);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_3,iVar5);
      lVar4 = lVar3 + -8;
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1479aef6a(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  return param_2;
}



// FUNCTION 1479910b0 FUN_1479910b0 body=50 status=ok
// SIG undefined FUN_1479910b0(void)

undefined8 FUN_1479910b0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    iVar1 = FUN_14490d72a();
    if (iVar1 != 1) {
      plVar2 = (longlong *)FUN_140475d9a();
      if ((longlong *)*plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001479910de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*(longlong *)*plVar2 + 0x28))();
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 1479910e2 FUN_1479910e2 body=185 status=ok
// SIG undefined FUN_1479910e2(void)

void FUN_1479910e2(longlong *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined8 *)(param_5 + 4) = *(undefined8 *)(param_2 + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_5 = *param_2;
  param_5[1] = uVar1;
  param_5[2] = uVar2;
  param_5[3] = uVar3;
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    local_18 = param_4[2];
    local_28 = *param_4;
    uStack_20 = param_4[1];
    local_38 = param_3[2];
    local_48 = *param_3;
    uStack_40 = param_3[1];
    local_68 = *param_2;
    uStack_64 = param_2[1];
    uStack_60 = param_2[2];
    uStack_5c = param_2[3];
    local_58 = *(undefined8 *)(param_2 + 4);
    local_70 = param_6;
    local_78 = param_5;
    (**(code **)(*param_1 + 0x38))(param_1,&local_68,&local_48,&local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479911c2 FUN_1479911c2 body=185 status=ok
// SIG undefined FUN_1479911c2(void)

void FUN_1479911c2(longlong param_1,longlong param_2)

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
  if (*(char *)(param_1 + 0xd0) == '\0') {
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    *(longlong *)(param_1 + 0x30) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14799128a FUN_14799128a body=61 status=ok
// SIG undefined FUN_14799128a(void)

void FUN_14799128a(void)

{
  undefined1 auStack_38 [44];
  undefined1 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = 0;
  FUN_1479912c8();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479912c8 FUN_1479912c8 body=213 status=ok
// SIG undefined FUN_1479912c8(void)

void FUN_1479912c8(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  
  fVar1 = *(float *)(param_1 + 3);
  bVar3 = *(byte *)((longlong)param_1 + 0x1c);
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  fVar2 = *(float *)(param_1 + 1);
  bVar6 = (0.0 < fVar2) << 3;
  bVar5 = (0.0 < *(float *)((longlong)param_1 + 0xc)) << 4;
  *(byte *)((longlong)param_1 + 0x1c) = bVar5 | bVar3 & 0xe7 | bVar6;
  if (*(char *)(param_3 + 1) == '\x01') {
    *(undefined4 *)param_1 = *param_3;
    *(undefined1 *)((longlong)param_1 + 4) = 0;
  }
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  bVar6 = bVar5 | bVar3 & 0xe0 | bVar6;
  *(byte *)((longlong)param_1 + 0x1c) = 0.0 < fVar2 | bVar6 | 4;
  if ((bVar3 & 4) != 0) {
    if ((~bVar3 & 0x12) == 0 && 0.0 < fVar2) {
      *(float *)((longlong)param_1 + 0x14) =
           (1.0 - fVar1 / *(float *)((longlong)param_1 + 0xc)) * fVar2;
    }
    else if ((bVar3 & 0x10) == 0 && 0.0 < fVar2) {
      *(byte *)((longlong)param_1 + 0x1c) = bVar6 | 4;
    }
  }
  if (*(char *)(param_3 + 1) == '\x01') {
    *(undefined1 *)(param_3 + 1) = 0;
  }
  return;
}



// FUNCTION 14799139e FUN_14799139e body=13 status=ok
// SIG undefined FUN_14799139e(void)

void FUN_14799139e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001479913a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2a0))();
  return;
}



// FUNCTION 1479913ac FUN_1479913ac body=140 status=ok
// SIG undefined FUN_1479913ac(void)

void FUN_1479913ac(undefined8 param_1,longlong *param_2,longlong param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  (**(code **)(*param_2 + 0x2a0))(param_2);
  local_1c = *(char *)(param_3 + 1) == '\x01';
  if ((bool)local_1c) {
    local_20 = *(undefined4 *)(param_3 + 4);
  }
  FUN_1479912c8(param_1,&local_30);
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14799143a FUN_14799143a body=227 status=ok
// SIG undefined FUN_14799143a(void)

float FUN_14799143a(float *param_1,float param_2)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  
  fVar3 = param_1[4] + param_2;
  param_1[4] = fVar3;
  bVar2 = *(byte *)(param_1 + 7);
  if ((bVar2 & 1) != 0) {
    param_1[5] = param_1[5] + param_2;
  }
  if ((bVar2 & 2) != 0) {
    param_1[6] = param_2 + param_1[6];
  }
  if (*(char *)(param_1 + 1) == '\0') {
    if ((fVar3 < 0.0) || (*param_1 <= fVar3)) {
      *(byte *)(param_1 + 7) = bVar2 & 0xfb;
      return 0.0;
    }
    if ((bVar2 & 0x12) == 0x10) {
      fVar3 = *param_1 - fVar3;
      if (fVar3 < param_1[3]) {
        bVar2 = bVar2 | 2;
        *(byte *)(param_1 + 7) = bVar2;
        param_1[6] = param_1[3] - fVar3;
      }
    }
  }
  fVar3 = 1.0;
  if (((bVar2 & 8) != 0) && ((bVar2 & 1) != 0)) {
    fVar1 = param_1[2];
    if (fVar1 <= param_1[5]) {
      bVar2 = bVar2 & 0xfe;
      *(byte *)(param_1 + 7) = bVar2;
      param_1[5] = fVar1;
    }
    else {
      fVar3 = param_1[5] / fVar1;
    }
  }
  if ((~bVar2 & 0x12) == 0) {
    fVar1 = param_1[3];
    if (param_1[6] < fVar1) {
      return fVar3 * (1.0 - param_1[6] / fVar1);
    }
    param_1[6] = fVar1;
    *(byte *)(param_1 + 7) = bVar2 & 0xf9;
    fVar3 = 0.0;
  }
  return fVar3;
}



// FUNCTION 14799151e FUN_14799151e body=40 status=ok
// SIG undefined FUN_14799151e(void)

void FUN_14799151e(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(byte *)(param_1 + 0x1c) =
       *(byte *)(param_1 + 0x1c) & 0xf8 | *(byte *)(param_1 + 0x1c) >> 3 & 1 | 4;
  FUN_14799143a();
  return;
}



// FUNCTION 147991546 FUN_147991546 body=41 status=ok
// SIG undefined FUN_147991546(void)

void FUN_147991546(longlong param_1,byte param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x1c);
  if (((bVar1 & 0x10) == 0 | param_2) == 1) {
    *(byte *)(param_1 + 0x1c) = bVar1 & 0xfb;
    return;
  }
  if ((bVar1 & 2) == 0) {
    *(byte *)(param_1 + 0x1c) = bVar1 | 2;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 147991570 FUN_147991570 body=62 status=ok
// SIG undefined FUN_147991570(void)

undefined4 * FUN_147991570(undefined4 *param_1,undefined4 *param_2)

{
  FUN_1479915ae(param_2,param_1 + 4);
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  return param_2;
}



// FUNCTION 1479915ae FUN_1479915ae body=252 status=ok
// SIG undefined FUN_1479915ae(void)

undefined8 * FUN_1479915ae(undefined8 *param_1,void *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  *param_1 = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 1) = 0x3f800000;
  memcpy(param_1 + 2,param_2,0x98);
  cVar1 = *(char *)((longlong)param_2 + 0x9c);
  *(char *)((longlong)param_1 + 0xac) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)((longlong)param_2 + 0x98);
  }
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)((longlong)param_2 + 0xa8);
  param_1[0x16] = *(undefined8 *)((longlong)param_2 + 0xa0);
  FUN_144903306(param_1 + 0x18,(longlong)param_2 + 0xb0);
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x978);
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x980);
  uVar4 = *(undefined8 *)((longlong)param_2 + 0x988);
  param_1[0x130] = *(undefined8 *)((longlong)param_2 + 0x970);
  param_1[0x131] = uVar2;
  param_1[0x132] = uVar3;
  param_1[0x133] = uVar4;
  cVar1 = *(char *)((longlong)param_2 + 0x9f0);
  *(char *)(param_1 + 0x140) = cVar1;
  if (cVar1 == '\x01') {
    puVar6 = (undefined8 *)((longlong)param_2 + 0x990);
    puVar7 = param_1 + 0x134;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  param_1[0x146] = *(undefined8 *)((longlong)param_2 + 0xa20);
  uVar2 = *(undefined8 *)((longlong)param_2 + 0xa00);
  uVar3 = *(undefined8 *)((longlong)param_2 + 0xa08);
  uVar4 = *(undefined8 *)((longlong)param_2 + 0xa18);
  param_1[0x144] = *(undefined8 *)((longlong)param_2 + 0xa10);
  param_1[0x145] = uVar4;
  param_1[0x142] = uVar2;
  param_1[0x143] = uVar3;
  return param_1;
}



// FUNCTION 1479916aa FUN_1479916aa body=122 status=ok
// SIG undefined FUN_1479916aa(void)

void FUN_1479916aa(double *param_1,float param_2)

{
  double dVar1;
  
  if ((*(byte *)((longlong)param_1 + 0x904) & 1) == 0) {
    dVar1 = (double)param_2;
    *param_1 = *param_1 * dVar1;
    param_1[1] = param_1[1] * dVar1;
    param_1[2] = param_1[2] * dVar1;
    param_1[3] = param_1[3] * dVar1;
    param_1[4] = param_1[4] * dVar1;
    param_1[5] = dVar1 * param_1[5];
    *(float *)(param_1 + 6) = *(float *)(param_1 + 6) * param_2;
    *(float *)(param_1 + 0x120) = param_2 * *(float *)(param_1 + 0x120);
  }
  return;
}



// FUNCTION 147991724 FUN_147991724 body=13 status=ok
// SIG undefined FUN_147991724(void)

void FUN_147991724(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014799172e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2a8))();
  return;
}



// FUNCTION 147991732 FUN_147991732 body=13 status=ok
// SIG undefined FUN_147991732(void)

void FUN_147991732(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014799173c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2b0))();
  return;
}



// FUNCTION 147991740 FUN_147991740 body=803 status=ok
// SIG undefined FUN_147991740(void)

void FUN_147991740(float *param_1,double *param_2,double *param_3)

{
  byte bVar1;
  double dVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  float *pfVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined1 auStack_9e8 [32];
  undefined8 local_9c8 [16];
  double local_948;
  double dStack_940;
  double local_938;
  double dStack_930;
  double local_928;
  double dStack_920;
  float local_918;
  undefined1 local_908 [2088];
  longlong local_e0;
  longlong local_58;
  float local_48;
  byte local_44;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_9e8;
  local_918 = *(float *)(param_2 + 6);
  local_948 = *param_2;
  dStack_940 = param_2[1];
  local_938 = param_2[2];
  dStack_930 = param_2[3];
  local_928 = param_2[4];
  dStack_920 = param_2[5];
  FUN_144903306(local_908,param_2 + 8);
  local_48 = *(float *)(param_2 + 0x120);
  local_44 = *(byte *)((longlong)param_2 + 0x904);
  if ((local_44 & 1) == 0) {
    if ((local_44 & 2) == 0) {
      fVar8 = *param_1;
      dVar2 = (double)fVar8;
      local_948 = local_948 * dVar2;
      dStack_940 = dStack_940 * dVar2;
      local_938 = local_938 * dVar2;
      dStack_930 = dStack_930 * dVar2;
      local_928 = local_928 * dVar2;
      dStack_920 = dVar2 * dStack_920;
      local_918 = local_918 * fVar8;
      local_48 = fVar8 * local_48;
    }
    FUN_147991b86(param_3,&local_948);
    if ((local_44 & 4) == 0) {
      pfVar6 = param_1 + 4;
      puVar7 = local_9c8;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = *(undefined8 *)pfVar6;
        pfVar6 = pfVar6 + 2;
        puVar7 = puVar7 + 1;
      }
      FUN_147991e14(*(undefined1 *)(param_1 + 1),local_9c8,param_3,&local_948);
    }
  }
  if ((local_44 & 1) == 0) {
    *param_3 = local_948 + *param_3;
    param_3[1] = dStack_940 + param_3[1];
    param_3[2] = local_938 + param_3[2];
    param_3[3] = dStack_930 + param_3[3];
    param_3[4] = local_928 + param_3[4];
    param_3[5] = dStack_920 + param_3[5];
    fVar8 = local_918 + *(float *)(param_3 + 6);
  }
  else {
    param_3[2] = local_938;
    *param_3 = local_948;
    param_3[1] = dStack_940;
    param_3[3] = dStack_930;
    param_3[4] = local_928;
    param_3[5] = dStack_920;
    fVar8 = local_918;
  }
  *(float *)(param_3 + 6) = fVar8;
  if (0.0 < local_48) {
    cVar3 = FUN_144729dda(param_1 + 0x24);
    if (cVar3 == '\0') {
      FUN_14477b16e(param_3 + 0x16,local_908);
      *(float *)(param_3 + 0x15) = local_48;
    }
    else {
      bVar1 = *DAT_14cacf3c0;
      uVar4 = FUN_14479d2ce(param_1 + 0x24);
      FUN_14019e69a(uVar4,local_908,local_48,bVar1 ^ 1);
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_9e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147991a64 FUN_147991a64 body=252 status=ok
// SIG undefined FUN_147991a64(void)

undefined8 * FUN_147991a64(undefined8 *param_1,void *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  *param_1 = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 1) = 0x3f800000;
  memcpy(param_1 + 2,param_2,0x98);
  cVar1 = *(char *)((longlong)param_2 + 0x9c);
  *(char *)((longlong)param_1 + 0xac) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)((longlong)param_2 + 0x98);
  }
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)((longlong)param_2 + 0xa8);
  param_1[0x16] = *(undefined8 *)((longlong)param_2 + 0xa0);
  FUN_144903306(param_1 + 0x18,(longlong)param_2 + 0xb0);
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x978);
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x980);
  uVar4 = *(undefined8 *)((longlong)param_2 + 0x988);
  param_1[0x130] = *(undefined8 *)((longlong)param_2 + 0x970);
  param_1[0x131] = uVar2;
  param_1[0x132] = uVar3;
  param_1[0x133] = uVar4;
  cVar1 = *(char *)((longlong)param_2 + 0x9f0);
  *(char *)(param_1 + 0x140) = cVar1;
  if (cVar1 == '\x01') {
    puVar6 = (undefined8 *)((longlong)param_2 + 0x990);
    puVar7 = param_1 + 0x134;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  param_1[0x146] = *(undefined8 *)((longlong)param_2 + 0xa20);
  uVar2 = *(undefined8 *)((longlong)param_2 + 0xa00);
  uVar3 = *(undefined8 *)((longlong)param_2 + 0xa08);
  uVar4 = *(undefined8 *)((longlong)param_2 + 0xa18);
  param_1[0x144] = *(undefined8 *)((longlong)param_2 + 0xa10);
  param_1[0x145] = uVar4;
  param_1[0x142] = uVar2;
  param_1[0x143] = uVar3;
  return param_1;
}



// FUNCTION 147991b60 FUN_147991b60 body=13 status=ok
// SIG undefined FUN_147991b60(void)

void FUN_147991b60(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147991b6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2b8))();
  return;
}



// FUNCTION 147991b6e FUN_147991b6e body=13 status=ok
// SIG undefined FUN_147991b6e(void)

void FUN_147991b6e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147991b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2c8))();
  return;
}



// FUNCTION 147991b7c FUN_147991b7c body=10 status=ok
// SIG undefined FUN_147991b7c(void)

void FUN_147991b7c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147991b7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2d0))();
  return;
}



// FUNCTION 147991b86 FUN_147991b86 body=653 status=ok
// SIG undefined FUN_147991b86(void)

void FUN_147991b86(longlong param_1,longlong param_2)

{
  char cVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  
  if ((*(longlong **)(DAT_14cb0d2b0 + 0xfe0) == (longlong *)0x0) ||
     (cVar1 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfe0) + 0x150))(), cVar1 == '\0')) {
    dVar3 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0x18),0x4076800000000000);
    dVar3 = (double)(~-(ulonglong)(dVar3 < 0.0) & (ulonglong)dVar3 |
                    (ulonglong)(dVar3 + 360.0) & -(ulonglong)(dVar3 < 0.0));
    fVar4 = (float)(double)(~-(ulonglong)(180.0 < dVar3) & (ulonglong)dVar3 |
                           (ulonglong)(dVar3 + -360.0) & -(ulonglong)(180.0 < dVar3));
    dVar3 = (double)FUN_144719204(*(undefined8 *)(param_2 + 0x18),0x4076800000000000);
    dVar3 = (double)(~-(ulonglong)(dVar3 < 0.0) & (ulonglong)dVar3 |
                    (ulonglong)(dVar3 + 360.0) & -(ulonglong)(dVar3 < 0.0));
    fVar2 = (float)FUN_1447c7e44();
    fVar2 = (float)FUN_1447c7e44((float)(~-(uint)(fVar2 < 0.0) & (uint)fVar2 |
                                        (uint)(fVar2 + 360.0) & -(uint)(fVar2 < 0.0)) * 0.5 + -89.9)
    ;
    FUN_1447c7e44(((float)(double)(~-(ulonglong)(180.0 < dVar3) & (ulonglong)dVar3 |
                                  (ulonglong)(dVar3 + -360.0) & -(ulonglong)(180.0 < dVar3)) + fVar4
                  ) - (float)(~-(uint)(fVar2 < 0.0) & (uint)fVar2 |
                             (uint)(fVar2 + 360.0) & -(uint)(fVar2 < 0.0)));
    fVar2 = (float)FUN_1447c7e44();
    fVar2 = (float)(~-(uint)(fVar2 < 0.0) & (uint)fVar2 |
                   (uint)(fVar2 + 360.0) & -(uint)(fVar2 < 0.0));
    *(double *)(param_2 + 0x18) =
         (double)((float)(~-(uint)(180.0 < fVar2) & (uint)fVar2 |
                         (uint)(fVar2 + -360.0) & -(uint)(180.0 < fVar2)) - fVar4);
  }
  return;
}



// FUNCTION 147991e14 FUN_147991e14 body=165 status=ok
// SIG undefined FUN_147991e14(void)

void FUN_147991e14(char param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = param_4[2];
  local_48 = *param_4;
  uStack_40 = param_4[1];
  local_30 = *(undefined4 *)(param_4 + 3);
  uStack_2c = *(undefined4 *)((longlong)param_4 + 0x1c);
  uStack_28 = *(undefined4 *)(param_4 + 4);
  uStack_24 = *(undefined4 *)((longlong)param_4 + 0x24);
  local_20 = param_4[5];
  if (param_1 == '\0') {
    FUN_14798bf5a(param_3,&local_48,param_4);
  }
  else {
    local_58 = param_4 + 3;
    FUN_14798c438(param_2,param_3,&local_48,param_4);
  }
  *(byte *)((longlong)param_4 + 0x904) = *(byte *)((longlong)param_4 + 0x904) | 1;
  *(float *)(param_4 + 6) = *(float *)(param_3 + 0x30) + *(float *)(param_4 + 6);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147991eba FUN_147991eba body=29 status=ok
// SIG undefined FUN_147991eba(void)

void FUN_147991eba(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1411080a4();
  FUN_144a78ede(param_1,uVar1);
  return;
}



// FUNCTION 147991edc FUN_147991edc body=169 status=ok
// SIG undefined FUN_147991edc(void)

void FUN_147991edc(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1479904aa(param_1,puVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147991f9c FUN_147991f9c body=454 status=ok
// SIG undefined FUN_147991f9c(void)

void FUN_147991f9c(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_3d;
  undefined4 local_3c;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_3d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3d);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  uVar1 = local_3c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_48;
  local_78 = local_58;
  uStack_74 = uStack_54;
  uStack_70 = uStack_50;
  uStack_6c = uStack_4c;
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_3d);
  local_80 = local_38;
  if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_88 = &local_78;
  FUN_147992164(param_1,&local_80,uVar1,uVar2 & 0xffffffff);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147992164 FUN_147992164 body=160 status=ok
// SIG undefined FUN_147992164(void)

void FUN_147992164(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined1 param_4,
                  undefined4 *param_5)

{
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_44 = 0;
  local_70 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (local_70 == 0) {
      local_70 = 0;
    }
    else {
      FUN_1456cec3c();
      local_70 = *param_2;
    }
  }
  local_60 = *param_5;
  uStack_5c = param_5[1];
  uStack_58 = param_5[2];
  uStack_54 = param_5[3];
  local_50 = *(undefined8 *)(param_5 + 4);
  local_68 = param_3;
  local_64 = param_4;
  FUN_1479925c4(param_1);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14799220a FUN_14799220a body=158 status=ok
// SIG undefined FUN_14799220a(void)

void FUN_14799220a(undefined8 param_1,longlong param_2)

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
  FUN_1479922aa(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479922aa FUN_1479922aa body=179 status=ok
// SIG undefined FUN_1479922aa(void)

void FUN_1479922aa(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_1 + 0xb0);
  if (((lVar4 != 0) || (lVar4 = FUN_1448abda6(param_1), lVar4 != 0)) &&
     (FUN_144a7d35a(lVar4,&local_30), -1 < (int)local_28)) {
    do {
      if ((int)local_30[1] <= (int)local_28) break;
      lVar4 = FUN_14479d2ce((ulonglong)local_28 * 8 + *local_30);
      if ((lVar4 != 0) && (plVar2 = *(longlong **)(lVar4 + 0x448), plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x800))(plVar2,param_1,param_2);
      }
      uVar1 = local_28 + 1;
      bVar3 = -2 < (int)local_28;
      local_28 = uVar1;
    } while (bVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147992364 FUN_147992364 body=267 status=ok
// SIG undefined FUN_147992364(void)

void FUN_147992364(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  iVar1 = local_2c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_147992470(param_1,&local_38,iVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147992470 FUN_147992470 body=246 status=ok
// SIG undefined FUN_147992470(void)

void FUN_147992470(longlong param_1,longlong *param_2,undefined4 param_3)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  uint local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 0xb0);
  if (((lVar4 != 0) || (lVar4 = FUN_1448abda6(param_1), lVar4 != 0)) &&
     (FUN_144a7d35a(lVar4,&local_40), -1 < (int)local_38)) {
    do {
      if ((int)local_40[1] <= (int)local_38) break;
      lVar4 = FUN_14479d2ce((ulonglong)local_38 * 8 + *local_40);
      if ((lVar4 != 0) && (plVar2 = *(longlong **)(lVar4 + 0x448), plVar2 != (longlong *)0x0)) {
        local_48 = *param_2;
        if ((local_48 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        (**(code **)(*plVar2 + 0x7f8))(plVar2,&local_48,param_1,param_3);
      }
      uVar1 = local_38 + 1;
      bVar3 = -2 < (int)local_38;
      local_38 = uVar1;
    } while (bVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147992578 FUN_147992578 body=42 status=ok
// SIG undefined FUN_147992578(void)

void FUN_147992578(longlong param_1)

{
  FUN_1401c3ca6();
  if (*(char *)(param_1 + 0x2c0) == '\x01') {
    FUN_14341e43c(param_1);
    return;
  }
  return;
}



// FUNCTION 1479925a2 FUN_1479925a2 body=34 status=ok
// SIG undefined FUN_1479925a2(void)

void FUN_1479925a2(undefined8 param_1,undefined4 param_2)

{
  FUN_1479922aa(param_1,1);
  FUN_1448c4a0e(param_1,param_2);
  return;
}



// FUNCTION 1479925c4 FUN_1479925c4 body=361 status=ok
// SIG undefined FUN_1479925c4(void)

void FUN_1479925c4(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong *local_78;
  uint local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30;
  char local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)(param_1 + 0xb0);
  if ((lVar4 != 0) || (lVar4 = FUN_1448abda6(param_1), lVar4 != 0)) {
    local_2c = '\0';
    local_40 = 0;
    local_38 = 0;
    local_68 = (undefined4)param_2[1];
    local_64 = *(undefined1 *)((longlong)param_2 + 0xc);
    local_60 = (undefined4)param_2[2];
    uStack_5c = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_58 = (undefined4)param_2[3];
    uStack_54 = *(undefined4 *)((longlong)param_2 + 0x1c);
    local_50 = param_2[4];
    if ((param_2 + 5 != (longlong *)&local_30) && (*(char *)((longlong)param_2 + 0x2c) == '\x01')) {
      local_30 = (undefined4)param_2[5];
      local_2c = '\x01';
    }
    local_48 = param_1;
    FUN_144a7d35a(lVar4,&local_78);
    if (-1 < (int)local_70) {
      do {
        if ((int)local_78[1] <= (int)local_70) break;
        lVar4 = FUN_14479d2ce((ulonglong)local_70 * 8 + *local_78);
        if ((lVar4 != 0) && (plVar2 = *(longlong **)(lVar4 + 0x448), plVar2 != (longlong *)0x0)) {
          local_80 = *param_2;
          if ((local_80 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          (**(code **)(*plVar2 + 0x7c8))(plVar2,&local_80,&local_68);
        }
        uVar1 = local_70 + 1;
        bVar3 = -2 < (int)local_70;
        local_70 = uVar1;
      } while (bVar3);
    }
    if (local_2c == '\x01') {
      local_2c = '\0';
    }
    FUN_1449db362();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14799272e FUN_14799272e body=560 status=ok
// SIG undefined FUN_14799272e(void)

byte FUN_14799272e(double *param_1,double *param_2)

{
  float fVar1;
  float fVar2;
  
  if ((*param_1 == *param_2) && (!NAN(*param_1) && !NAN(*param_2))) {
    if ((param_1[1] == param_2[1]) && (!NAN(param_1[1]) && !NAN(param_2[1]))) {
      if ((param_1[2] == param_2[2]) && (!NAN(param_1[2]) && !NAN(param_2[2]))) {
        if ((param_1[3] == param_2[3]) && (!NAN(param_1[3]) && !NAN(param_2[3]))) {
          if ((param_1[4] == param_2[4]) && (!NAN(param_1[4]) && !NAN(param_2[4]))) {
            if ((param_1[5] == param_2[5]) && (!NAN(param_1[5]) && !NAN(param_2[5]))) {
              if ((*(float *)(param_1 + 6) == *(float *)(param_2 + 6)) &&
                 (!NAN(*(float *)(param_1 + 6)) && !NAN(*(float *)(param_2 + 6)))) {
                if ((*(float *)(param_1 + 0xe) == *(float *)(param_2 + 0xe)) &&
                   (!NAN(*(float *)(param_1 + 0xe)) && !NAN(*(float *)(param_2 + 0xe)))) {
                  if ((*(float *)((longlong)param_1 + 0x74) == *(float *)((longlong)param_2 + 0x74))
                     && (!NAN(*(float *)((longlong)param_1 + 0x74)) &&
                         !NAN(*(float *)((longlong)param_2 + 0x74)))) {
                    if ((param_1[7] == param_2[7]) && (!NAN(param_1[7]) && !NAN(param_2[7]))) {
                      if ((param_1[8] == param_2[8]) && (!NAN(param_1[8]) && !NAN(param_2[8]))) {
                        if ((param_1[9] == param_2[9]) && (!NAN(param_1[9]) && !NAN(param_2[9]))) {
                          if ((param_1[10] == param_2[10]) &&
                             (!NAN(param_1[10]) && !NAN(param_2[10]))) {
                            if ((param_1[0xb] == param_2[0xb]) &&
                               (!NAN(param_1[0xb]) && !NAN(param_2[0xb]))) {
                              if ((param_1[0xc] == param_2[0xc]) &&
                                 (!NAN(param_1[0xc]) && !NAN(param_2[0xc]))) {
                                if ((*(float *)(param_1 + 0xd) == *(float *)(param_2 + 0xd)) &&
                                   (!NAN(*(float *)(param_1 + 0xd)) &&
                                    !NAN(*(float *)(param_2 + 0xd)))) {
                                  if ((*(float *)(param_1 + 0xf) == *(float *)(param_2 + 0xf)) &&
                                     (!NAN(*(float *)(param_1 + 0xf)) &&
                                      !NAN(*(float *)(param_2 + 0xf)))) {
                                    if ((*(float *)(param_1 + 0x11) == *(float *)(param_2 + 0x11))
                                       && (!NAN(*(float *)(param_1 + 0x11)) &&
                                           !NAN(*(float *)(param_2 + 0x11)))) {
                                      if ((*(float *)((longlong)param_1 + 0x8c) ==
                                           *(float *)((longlong)param_2 + 0x8c)) &&
                                         (!NAN(*(float *)((longlong)param_1 + 0x8c)) &&
                                          !NAN(*(float *)((longlong)param_2 + 0x8c)))) {
                                        fVar1 = *(float *)(param_1 + 0x12);
                                        fVar2 = *(float *)(param_2 + 0x12);
                                        if ((fVar1 != fVar2) || (NAN(fVar1) || NAN(fVar2))) {
                                          if (0.0 < fVar1) {
                                            return 0;
                                          }
                                          if (0.0 < fVar2) {
                                            return 0;
                                          }
                                        }
                                        if ((((*(float *)((longlong)param_1 + 0x94) ==
                                               *(float *)((longlong)param_2 + 0x94)) &&
                                             (!NAN(*(float *)((longlong)param_1 + 0x94)) &&
                                              !NAN(*(float *)((longlong)param_2 + 0x94)))) &&
                                            (((*(uint *)(param_2 + 0x14) ^ *(uint *)(param_1 + 0x14)
                                              ) & 0x1f) == 0)) &&
                                           (*(char *)((longlong)param_1 + 0xa4) ==
                                            *(char *)((longlong)param_2 + 0xa4))) {
                                          if ((param_1[0x12e] == param_2[0x12e]) &&
                                             (!NAN(param_1[0x12e]) && !NAN(param_2[0x12e]))) {
                                            if ((param_1[0x12f] == param_2[0x12f]) &&
                                               (!NAN(param_1[0x12f]) && !NAN(param_2[0x12f]))) {
                                              if ((param_1[0x130] == param_2[0x130]) &&
                                                 (!NAN(param_1[0x130]) && !NAN(param_2[0x130]))) {
                                                return -(param_2[0x131] == param_1[0x131]) & 1;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14799295e FUN_14799295e body=1257 status=ok
// SIG undefined FUN_14799295e(void)

void FUN_14799295e(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  double _X;
  undefined8 uVar3;
  int *piVar4;
  byte *pbVar5;
  byte bVar6;
  int iVar7;
  byte bVar8;
  longlong lVar9;
  bool bVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 extraout_XMM0_Qb;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_dc;
  
  lVar9 = DAT_14cacf490;
  if (*(char *)(param_1 + 0xa4) != '\x01') {
    return;
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar2 + 0xc60) == 0x40000002) {
    uVar12 = 0;
  }
  else {
    bVar8 = FUN_144a61b4f();
    uVar12 = (ulonglong)(bVar8 ^ 1);
  }
  piVar4 = DAT_14cacf4a8;
  if (*(char *)(lVar9 + uVar12) != '\x01') {
    return;
  }
  if (*(char *)(param_1 + 0x7c) != '\x01') {
    return;
  }
  piVar1 = (int *)(lVar2 + 0xc60);
  if (*piVar1 == 0x40000002) {
    iVar7 = *DAT_14cacf4a8;
LAB_147992a35:
    bVar10 = iVar7 == 1;
    bVar8 = *DAT_14cacf4c0 & bVar10;
    if (bVar8 == 0) {
      fVar23 = 2097152.0;
    }
    else {
      fVar23 = 8.796093e+12;
    }
    fVar13 = *(float *)(&DAT_14a7fef60 + (ulonglong)bVar10 * 4);
  }
  else {
    bVar8 = FUN_144a61b4f();
    pbVar5 = DAT_14cacf4c0;
    iVar7 = piVar4[bVar8 ^ 1];
    if (*piVar1 == 0x40000002) goto LAB_147992a35;
    bVar8 = FUN_144a61b4f();
    lVar9 = DAT_14cacf4d8;
    bVar10 = iVar7 == 1;
    bVar8 = pbVar5[bVar8 ^ 1] & bVar10;
    if (bVar8 == 0) {
      fVar23 = 2097152.0;
    }
    else {
      fVar23 = 8.796093e+12;
    }
    fVar13 = *(float *)(&DAT_14a7fef60 + (ulonglong)bVar10 * 4);
    if (*piVar1 != 0x40000002) {
      bVar6 = FUN_144a61b4f();
      uVar12 = (ulonglong)(bVar6 ^ 1);
      goto LAB_147992abf;
    }
  }
  uVar12 = 0;
  lVar9 = DAT_14cacf4d8;
LAB_147992abf:
  fVar21 = *(float *)(lVar9 + uVar12 * 4);
  local_dc = fVar13;
  if (0.0 < fVar21) {
    local_dc = fVar21;
    if (fVar13 <= fVar21) {
      local_dc = fVar13;
    }
    if (local_dc <= 1.0) {
      local_dc = 1.0;
    }
  }
  uVar11 = -(uint)(*(float *)(param_1 + 0x94) == 0.0);
  fVar24 = *(float *)(param_1 + 0x78) /
           (float)(~uVar11 & (uint)*(float *)(param_1 + 0x94) | uVar11 & 0x3727c5ac);
  dVar17 = *(double *)(param_1 + 0x18) * 0.01745329238474369;
  _X = *(double *)(param_1 + 0x20) * 0.01745329238474369;
  dVar18 = *(double *)(param_1 + 0x28) * 0.01745329238474369;
  dVar15 = sin(dVar17);
  sin(_X);
  dVar16 = sin(dVar18);
  sin(0.0);
  dVar17 = cos(dVar17);
  cos(_X);
  dVar18 = cos(dVar18);
  cos(0.0);
  dVar18 = dVar18 * dVar17;
  auVar20._0_8_ = dVar15 * dVar15 + -dVar16 * dVar17 * -dVar16 * dVar17;
  auVar20._8_8_ = extraout_XMM0_Qb;
  dVar17 = dVar18 * dVar18 + auVar20._0_8_;
  uVar12 = -(ulonglong)(9.99999993922529e-09 < dVar17);
  fVar13 = (float)(double)(~uVar12 & (ulonglong)dVar18 |
                          (ulonglong)((1.0 / SQRT(dVar17)) * dVar18) & uVar12);
  fVar21 = ABS(fVar13);
  if (((bool)(bVar10 & 0.0 < fVar24)) &&
     (iVar7 = *(int *)(param_2 + 300) - *(int *)(param_2 + 0x124),
     0 < (*(int *)(param_2 + 0x128) - *(int *)(param_2 + 0x120)) * iVar7)) {
    auVar20 = roundps(auVar20,ZEXT416((uint)(fVar24 / (float)iVar7)),1);
    fVar14 = auVar20._0_4_;
    if (bVar8 != 0) {
      fVar14 = logf(fVar14);
      fVar14 = fVar14 * 1.442695;
    }
    fVar13 = fVar14 * local_dc;
    if (fVar23 <= fVar14 * local_dc) {
      fVar13 = fVar23;
    }
    if (fVar13 <= local_dc) {
      fVar13 = local_dc;
    }
  }
  else {
    uVar11 = -(uint)(fVar13 == 0.0);
    fVar13 = fVar24 / (float)(~uVar11 & (uint)fVar21 | uVar11 & 0x3727c5ac);
  }
  lVar9 = DAT_14cacf4f0;
  fVar14 = 1.0 - fVar21;
  if (1.0 <= 1.0 - fVar21) {
    fVar14 = 1.0;
  }
  if (fVar14 <= 0.707107) {
    fVar14 = 0.707107;
  }
  fVar19 = *(float *)(param_1 + 0x78);
  if (*(float *)(param_1 + 0x78) <= fVar24) {
    fVar19 = fVar24;
  }
  fVar22 = fVar21;
  if (1.0 <= fVar21) {
    fVar22 = 1.0;
  }
  if (fVar22 <= 0.707107) {
    fVar22 = 0.707107;
  }
  fVar22 = fVar22 - 1.0 / fVar14;
  if (fVar22 <= -0.5) {
    fVar22 = -0.5;
  }
  fVar21 = fVar22 * fVar19 -
           (float)SQRT(*(double *)(param_1 + 0xa20) * *(double *)(param_1 + 0xa20) +
                       *(double *)(param_1 + 0xa10) * *(double *)(param_1 + 0xa10) +
                       *(double *)(param_1 + 0xa18) * *(double *)(param_1 + 0xa18)) * fVar21;
  fVar23 = fVar23 + fVar21;
  if (fVar23 <= fVar13) {
    fVar13 = fVar23;
  }
  if (fVar13 <= fVar24) {
    fVar13 = fVar24;
  }
  if (*piVar1 == 0x40000002) {
    uVar12 = 0;
  }
  else {
    bVar8 = FUN_144a61b4f();
    uVar12 = (ulonglong)(bVar8 ^ 1);
  }
  fVar23 = *(float *)(lVar9 + uVar12 * 4);
  *(float *)(param_1 + 0x88) = fVar21 + *(float *)(param_1 + 0x80) + fVar23;
  *(float *)(param_1 + 0x8c) = fVar13 + *(float *)(param_1 + 0x80) + fVar23;
  *(undefined8 *)(param_2 + 0x280) = *(undefined8 *)(param_1 + 0xa20);
  uVar3 = *(undefined8 *)(param_1 + 0xa18);
  *(undefined8 *)(param_2 + 0x270) = *(undefined8 *)(param_1 + 0xa10);
  *(undefined8 *)(param_2 + 0x278) = uVar3;
  return;
}



// FUNCTION 147992e48 FUN_147992e48 body=581 status=ok
// SIG undefined FUN_147992e48(void)

double * FUN_147992e48(double *param_1,double *param_2,double *param_3,char param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_f8 [32];
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)((longlong)param_1 + 0xa4) == '\0') {
    FUN_144a76660(param_1 + 3,&local_d8);
    dVar4 = param_3[2] - param_1[2];
    dVar2 = param_3[1] - param_1[1];
    dVar3 = *param_3 - *param_1;
    dVar12 = local_c8 * dVar4 + local_d8 * dVar3 + dVar2 * local_d0;
    fVar9 = tanf(*(float *)(param_1 + 6) * 0.017453292 * 0.5);
    fVar10 = tanf(*(float *)(param_1 + 0xe) * 0.5 * 0.017453292);
    dVar11 = (double)(fVar9 / fVar10 + -1.0);
    dVar4 = (dVar4 - local_c8 * dVar12) * dVar11 + dVar4;
    dVar1 = (double)*(float *)((longlong)param_1 + 0x74);
    bVar8 = param_4 == '\0';
    if (bVar8) {
      dVar4 = dVar4 * dVar1;
    }
    dVar2 = dVar2 + (dVar2 - local_d0 * dVar12) * dVar11;
    if (bVar8) {
      dVar2 = dVar2 * dVar1;
    }
    dVar3 = dVar3 + (dVar3 - dVar12 * local_d8) * dVar11;
    dVar11 = param_1[2];
    dVar12 = param_1[1];
    if (bVar8) {
      dVar3 = dVar3 * dVar1;
    }
    *param_2 = dVar3 + *param_1;
    param_2[1] = dVar2 + dVar12;
    param_2[2] = dVar4 + dVar11;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_f8);
  }
  param_2[2] = param_3[2];
  uVar5 = *(undefined4 *)((longlong)param_3 + 4);
  uVar6 = *(undefined4 *)(param_3 + 1);
  uVar7 = *(undefined4 *)((longlong)param_3 + 0xc);
  *(undefined4 *)param_2 = *(undefined4 *)param_3;
  *(undefined4 *)((longlong)param_2 + 4) = uVar5;
  *(undefined4 *)(param_2 + 1) = uVar6;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar7;
  if ((local_c0 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14799308e FUN_14799308e body=417 status=ok
// SIG undefined FUN_14799308e(void)

void FUN_14799308e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
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
  uVar2 = local_34;
  uVar1 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_30;
  if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  uVar3 = FUN_147993230(local_28,&local_40,uVar2,uVar1);
  *param_3 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147993230 FUN_147993230 body=225 status=ok
// SIG undefined FUN_147993230(void)

longlong FUN_147993230(undefined8 param_1,longlong *param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (((((0 < param_4 && 0 < param_3) && (lVar2 = *param_2, lVar2 != 0)) &&
       (lVar1 = FUN_145959c10(), lVar1 != 0)) &&
      ((*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)))) && (lVar2 = *param_2, lVar2 != 0)) {
    lVar1 = FUN_145959c10();
    if (((lVar1 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30)) {
      lVar2 = 0;
    }
    else {
      lVar2 = *param_2;
    }
    lVar2 = FUN_14799352f(DAT_14c951640,lVar2);
    if (lVar2 != 0) {
      uVar3 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
      FUN_14485c47a(lVar2 + 0x178,uVar3);
      FUN_141646166(lVar2,param_3,param_4);
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 147993312 FUN_147993312 body=41 status=ok
// SIG undefined FUN_147993312(void)

void FUN_147993312(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x3d0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14799333c FUN_14799333c body=309 status=ok
// SIG undefined FUN_14799333c(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14799333c(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  undefined1 auStack_58 [40];
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30 + 1);
  }
  piVar1 = *(int **)(param_2 + 0x38);
  local_30[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  piVar2 = local_30 + 1;
  if (piVar1 != (int *)0x0) {
    piVar2 = piVar1;
  }
  piVar1 = local_30;
  if (*(int **)(param_2 + 0x38) != (int *)0x0) {
    piVar1 = *(int **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fVar3 = (float)(**(code **)(*param_1 + 0x350))(param_1);
  *piVar2 = (int)fVar3;
  fVar3 = (float)(**(code **)(*param_1 + 0x358))(param_1);
  *piVar1 = (int)fVar3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147993498 FUN_147993498 body=142 status=ok
// SIG undefined FUN_147993498(void)

void FUN_147993498(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  code *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x180) != '\0') {
    *(byte *)(param_1 + 0x13c) = *(byte *)(param_1 + 0x13c) & 0xfd;
  }
  FUN_1414374dc(param_1);
  cVar1 = FUN_144a792c0(param_1,0x30);
  if (cVar1 == '\0') {
    local_18 = &local_21;
    local_20 = FUN_141073f72;
    lVar2 = FUN_144a773aa(&local_20,&DAT_14c75ec34);
    if (*(char *)(lVar2 + 0x20) == '\0') {
      FUN_14341e9e8(param_1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14799352f FUN_14799352f body=175 status=ok
// SIG undefined FUN_14799352f(void)

undefined8 FUN_14799352f(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147993610 FUN_147993610 body=282 status=ok
// SIG undefined FUN_147993610(void)

void FUN_147993610(longlong *param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  local_68 = local_48;
  uStack_60 = uStack_40;
  local_88 = local_30;
  uStack_84 = uStack_2c;
  uStack_80 = uStack_28;
  uStack_7c = uStack_24;
  local_78 = local_20;
  (**(code **)(*param_1 + 0x7b0))(param_1);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147993730 FUN_147993730 body=41 status=ok
// SIG undefined FUN_147993730(void)

void FUN_147993730(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x870))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14799375e FUN_14799375e body=37 status=ok
// SIG undefined FUN_14799375e(void)

void FUN_14799375e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_140553fce();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147993788 FUN_147993788 body=41 status=ok
// SIG undefined FUN_147993788(void)

void FUN_147993788(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x800))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1479937b2 FUN_1479937b2 body=93 status=ok
// SIG undefined FUN_1479937b2(void)

void FUN_1479937b2(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cacf5f0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147993810 FUN_147993810 body=164 status=ok
// SIG undefined FUN_147993810(void)

void FUN_147993810(longlong param_1,longlong param_2)

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
  (**(code **)(**(longlong **)(param_1 + 0x430) + 0xaa8))(*(longlong **)(param_1 + 0x430),local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479938b6 FUN_1479938b6 body=170 status=ok
// SIG undefined FUN_1479938b6(void)

void FUN_1479938b6(longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_28;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = *param_3;
  uStack_58 = param_3[1];
  local_50 = param_3[2];
  local_48 = *param_4;
  uStack_44 = param_4[1];
  uStack_40 = param_4[2];
  uStack_3c = param_4[3];
  local_38 = *(undefined8 *)(param_4 + 4);
  local_30 = param_5;
  uStack_28 = param_6;
  local_20 = param_7;
  local_1f = param_8;
  local_1e = param_9;
  local_68[0] = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cacf600);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14799396e FUN_14799396e body=856 status=ok
// SIG undefined FUN_14799396e(void)

void FUN_14799396e(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined1 local_100;
  undefined1 local_f8;
  undefined1 *local_f0;
  undefined1 local_d9;
  int local_d8;
  int local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_48 [24];
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_8c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  local_c8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  local_d0 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  local_d4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d4);
  }
  iVar2 = local_d4;
  local_d8 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  iVar1 = local_d8;
  local_d9 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d9);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_b0;
  local_68 = local_c0;
  uStack_60 = uStack_b8;
  local_78 = local_98;
  local_88 = local_a8;
  uStack_84 = uStack_a4;
  uStack_80 = uStack_a0;
  uStack_7c = uStack_9c;
  local_f0 = local_48;
  local_30 = 0;
  local_100 = iVar1 != 0;
  local_108 = iVar2 != 0;
  local_f8 = local_d9;
  local_110 = local_d0;
  local_118 = local_c8;
  (**(code **)(**(longlong **)(param_1 + 0x430) + 0xab0))(*(longlong **)(param_1 + 0x430),local_8c);
  if ((local_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147993cc8 FUN_147993cc8 body=209 status=ok
// SIG undefined FUN_147993cc8(void)

void FUN_147993cc8(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined1 param_9,undefined1 param_10,undefined1 param_11)

{
  undefined8 uVar1;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 uStack_28;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_4;
  uStack_60 = param_4[1];
  local_58 = param_4[2];
  local_50 = *param_5;
  uStack_4c = param_5[1];
  uStack_48 = param_5[2];
  uStack_44 = param_5[3];
  local_40 = *(undefined8 *)(param_5 + 4);
  local_38 = param_6;
  local_30 = param_7;
  uStack_28 = param_8;
  local_20 = param_9;
  local_1f = param_10;
  local_1e = param_11;
  local_70 = param_2;
  local_6c = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cacf610);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_70);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147993da6 FUN_147993da6 body=1049 status=ok
// SIG undefined FUN_147993da6(void)

void FUN_147993da6(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  undefined1 local_c1;
  int local_c0;
  int local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_6c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  local_70 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a4 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a4);
  }
  local_b0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  local_b8 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  local_bc = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_bc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_bc);
  }
  iVar2 = local_bc;
  local_c0 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  iVar1 = local_c0;
  local_c1 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c1);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_108 = &local_48;
  local_38 = local_90;
  local_48 = local_a0;
  uStack_40 = uStack_98;
  local_58 = local_78;
  local_68 = local_88;
  uStack_60 = uStack_80;
  local_e0 = iVar1 != 0;
  local_e8 = iVar2 != 0;
  local_d8 = local_c1;
  local_f0 = local_b8;
  local_f8 = local_b0;
  local_100 = local_a4;
  (**(code **)(**(longlong **)(param_1 + 0x430) + 0xac0))
            (*(longlong **)(param_1 + 0x430),local_6c,local_70);
  if ((local_28 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479941c0 FUN_1479941c0 body=402 status=ok
// SIG undefined FUN_1479941c0(void)

void FUN_1479941c0(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4,
                  undefined4 param_5,undefined8 *param_6,undefined4 *param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined1 param_12,
                  undefined1 param_13)

{
  undefined8 uVar1;
  undefined1 auStack_148 [32];
  undefined4 local_128 [2];
  undefined **local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined2 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_120 = &PTR_FUN_14a819a28;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_90 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_128[0] = param_2;
  FUN_140fb3d70(&local_120,param_3);
  local_d4 = param_5;
  local_d0 = *param_6;
  uStack_c8 = param_6[1];
  local_c0 = param_6[2];
  local_b8 = *param_7;
  uStack_b4 = param_7[1];
  uStack_b0 = param_7[2];
  uStack_ac = param_7[3];
  local_a8 = *(undefined8 *)(param_7 + 4);
  local_a0 = param_8;
  local_98 = param_9;
  uStack_90 = param_10;
  local_88 = param_11;
  local_87 = param_12;
  local_86 = param_13;
  local_d8 = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cacf620);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_128);
  FUN_140d7a9b4(&local_120);
  FUN_140d7a9b4(param_3);
  if ((local_80 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14799436a FUN_14799436a body=1585 status=ok
// SIG undefined FUN_14799436a(void)

void FUN_14799436a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 auStack_2a8 [32];
  undefined4 local_288;
  undefined4 *local_280;
  undefined8 *local_278;
  undefined4 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined1 local_258;
  undefined1 local_250;
  undefined1 local_248;
  undefined1 local_239;
  int local_238;
  int local_234;
  undefined1 local_230 [72];
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined1 local_1a9;
  int local_1a8;
  int local_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined4 local_158;
  int local_154;
  undefined **local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  byte local_128;
  undefined1 local_127;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined4 local_104;
  undefined1 local_100 [72];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  local_104 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_104);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_104);
  }
  local_150 = &PTR_FUN_14a819a28;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = local_128 & 0xf0;
  local_127 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_150);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_150);
  }
  local_154 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_154);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_154);
  }
  iVar7 = local_154;
  local_158 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_158);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_158);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_170);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_170);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_188);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_188);
  }
  local_18c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18c);
  }
  local_198 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_198);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_198);
  }
  local_1a0 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a0);
  }
  local_1a4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a4);
  }
  local_234 = local_1a4;
  local_1a8 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a8);
  }
  local_238 = local_1a8;
  local_1a9 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a9);
  }
  uVar6 = local_158;
  uVar5 = local_18c;
  uVar4 = local_198;
  uVar3 = local_1a0;
  uVar2 = local_1a9;
  local_239 = iVar7 != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1c8 = local_188;
  uStack_1c0 = uStack_180;
  local_1b8 = local_178;
  local_1e8 = local_170;
  uStack_1e4 = uStack_16c;
  uStack_1e0 = uStack_168;
  uStack_1dc = uStack_164;
  local_1d8 = local_160;
  FUN_14341f2e8(local_230,&local_150);
  uVar8 = local_104;
  plVar1 = *(longlong **)(param_1 + 0x430);
  local_88 = local_1b8;
  local_98 = local_1c8;
  uStack_90 = uStack_1c0;
  local_b8 = local_1e8;
  uStack_b4 = uStack_1e4;
  uStack_b0 = uStack_1e0;
  uStack_ac = uStack_1dc;
  local_a8 = local_1d8;
  FUN_14341f2e8(local_100,local_230);
  local_250 = local_238 != 0;
  local_258 = local_234 != 0;
  local_248 = uVar2;
  local_260 = uVar3;
  local_268 = uVar4;
  local_270 = uVar5;
  local_288 = uVar6;
  local_280 = &local_b8;
  local_278 = &local_98;
  (**(code **)(*plVar1 + 0xac8))(plVar1,uVar8,local_100,local_239);
  FUN_140d7a9b4(local_230);
  FUN_140d7a9b4(&local_150);
  if ((local_80 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479949ea FUN_1479949ea body=158 status=ok
// SIG undefined FUN_1479949ea(void)

void FUN_1479949ea(longlong *param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  local_38 = *(undefined8 *)(param_3 + 4);
  local_28 = param_5;
  local_20 = param_6;
  local_1f = param_7;
  local_1e = param_8;
  local_50[0] = param_2;
  local_30 = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cacf670);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_50);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147994a96 FUN_147994a96 body=712 status=ok
// SIG undefined FUN_147994a96(void)

void FUN_147994a96(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined1 local_90;
  undefined1 local_81;
  int local_80;
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_70 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_78 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_7c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  iVar2 = local_7c;
  local_80 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  iVar1 = local_80;
  local_81 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_81);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_81);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_58;
  local_48 = local_68;
  uStack_44 = uStack_64;
  uStack_40 = uStack_60;
  uStack_3c = uStack_5c;
  local_98 = iVar1 != 0;
  local_a0 = iVar2 != 0;
  local_90 = local_81;
  local_a8 = local_78;
  (**(code **)(**(longlong **)(param_1 + 0x430) + 0xab8))
            (*(longlong **)(param_1 + 0x430),local_4c,&local_48,local_70);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147994d64 FUN_147994d64 body=162 status=ok
// SIG undefined FUN_147994d64(void)

void FUN_147994d64(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x860))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147994e26 FUN_147994e26 body=118 status=ok
// SIG undefined FUN_147994e26(void)

void FUN_147994e26(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined1 local_48 [40];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 2000))(param_1,local_48);
  FUN_1448052ee(local_48,&local_60);
  *(undefined8 *)(param_3 + 4) = local_50;
  *param_3 = local_60;
  param_3[1] = uStack_5c;
  param_3[2] = uStack_58;
  param_3[3] = uStack_54;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147994ec6 FUN_147994ec6 body=66 status=ok
// SIG undefined FUN_147994ec6(void)

void FUN_147994ec6(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((*(longlong *)(param_1 + 0x428) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x428) + 0xae8) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1478edf68();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 147994f0c FUN_147994f0c body=53 status=ok
// SIG undefined FUN_147994f0c(void)

void FUN_147994f0c(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x430) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_143432570();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 147994f46 FUN_147994f46 body=41 status=ok
// SIG undefined FUN_147994f46(void)

void FUN_147994f46(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x810))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147994f74 FUN_147994f74 body=57 status=ok
// SIG undefined FUN_147994f74(void)

void FUN_147994f74(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong **)(param_1 + 0x428) == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x428) + 0xbb0))();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 147994fb2 FUN_147994fb2 body=57 status=ok
// SIG undefined FUN_147994fb2(void)

void FUN_147994fb2(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong **)(param_1 + 0x428) == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x428) + 0xba8))();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 147995012 FUN_147995012 body=350 status=ok
// SIG undefined FUN_147995012(void)

void FUN_147995012(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  iVar1 = local_3c;
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_28;
  local_58 = local_38;
  uStack_54 = uStack_34;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  (**(code **)(*param_1 + 0x828))(param_1,&local_58,iVar1 != 0,local_40 != 0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479951d0 FUN_1479951d0 body=454 status=ok
// SIG undefined FUN_1479951d0(void)

void FUN_1479951d0(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_7c;
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_7c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  puVar4 = local_78;
  if (puVar3 != (undefined1 *)0x0) {
    puVar4 = puVar3;
  }
  puVar3 = local_60;
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = local_48;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = local_7c;
  (**(code **)(*param_1 + 0x850))(param_1,puVar2,puVar3,puVar4);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147995398 FUN_147995398 body=342 status=ok
// SIG undefined FUN_147995398(void)

void FUN_147995398(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_38 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x818))(param_1,local_28,local_2c,local_38);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479954f0 FUN_1479954f0 body=175 status=ok
// SIG undefined FUN_1479954f0(void)

void FUN_1479954f0(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x8c8))(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479955a0 FUN_1479955a0 body=204 status=ok
// SIG undefined FUN_1479955a0(void)

void FUN_1479955a0(longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_40;
  undefined1 local_3f;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = *param_3;
  uStack_68 = param_3[1];
  local_60 = param_3[2];
  local_58 = *param_4;
  uStack_54 = param_4[1];
  uStack_50 = param_4[2];
  uStack_4c = param_4[3];
  local_48 = *(undefined8 *)(param_4 + 4);
  local_40 = param_5;
  local_3f = param_6;
  local_3c = param_7;
  local_38 = param_8;
  local_30 = param_9;
  local_28 = param_10;
  local_78[0] = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cacf790);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14799566e FUN_14799566e body=1082 status=ok
// SIG undefined FUN_14799566e(void)

void FUN_14799566e(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined1 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined1 local_b9;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a2;
  undefined1 local_a1;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_6c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a1 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a1);
  }
  local_a2 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a2);
  }
  local_a8 = 0;
  FUN_144a8cc30();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_b0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  local_b8 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  local_b9 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b9);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_90;
  local_48 = local_a0;
  uStack_40 = uStack_98;
  local_58 = local_78;
  local_68 = local_88;
  uStack_64 = uStack_84;
  uStack_60 = uStack_80;
  uStack_5c = uStack_7c;
  local_d0 = local_b9;
  local_d8 = local_b8;
  local_e0 = local_b0;
  local_e8 = local_a8;
  local_f0 = local_a2;
  local_f8 = local_a1;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x430) + 0xaf8))
                    (*(longlong **)(param_1 + 0x430),local_6c);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerMove_Validate");
  }
  else {
    local_38 = local_90;
    local_48 = local_a0;
    uStack_40 = uStack_98;
    local_58 = local_78;
    local_68 = local_88;
    uStack_64 = uStack_84;
    uStack_60 = uStack_80;
    uStack_5c = uStack_7c;
    local_d0 = local_b9;
    local_d8 = local_b8;
    local_e0 = local_b0;
    local_e8 = local_a8;
    local_f0 = local_a2;
    local_f8 = local_a1;
    (**(code **)(**(longlong **)(param_1 + 0x430) + 0xaf0))
              (*(longlong **)(param_1 + 0x430),local_6c);
  }
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147995aaa FUN_147995aaa body=280 status=ok
// SIG undefined FUN_147995aaa(void)

void FUN_147995aaa(longlong *param_1,undefined4 param_2,undefined4 *param_3,undefined1 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 *param_7,undefined4 *param_8,
                  undefined1 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined1 param_14)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined4 local_b8 [2];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined1 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = *param_3;
  uStack_ac = param_3[1];
  uStack_a8 = param_3[2];
  uStack_a4 = param_3[3];
  local_a0 = *(undefined8 *)(param_3 + 4);
  local_94 = param_5;
  local_90 = param_6;
  local_88 = *param_7;
  uStack_80 = param_7[1];
  local_78 = param_7[2];
  local_70 = *param_8;
  uStack_6c = param_8[1];
  uStack_68 = param_8[2];
  uStack_64 = param_8[3];
  local_60 = *(undefined8 *)(param_8 + 4);
  local_58 = param_9;
  local_57 = param_10;
  local_54 = param_11;
  local_50 = param_12;
  local_48 = param_13;
  local_40 = param_14;
  local_b8[0] = param_2;
  local_98 = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cacf7a0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_b8);
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147995bc4 FUN_147995bc4 body=1653 status=ok
// SIG undefined FUN_147995bc4(void)

void FUN_147995bc4(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_160;
  undefined8 *local_158;
  undefined8 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined1 local_111;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_fa;
  undefined1 local_f9;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 local_b9;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_9c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  local_b9 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b9);
  }
  local_c0 = 0;
  FUN_144a8cc30();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  local_c4 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c4);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f8);
  }
  local_f9 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f9);
  }
  local_fa = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_fa);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_fa);
  }
  local_100 = 0;
  FUN_144a8cc30();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_100);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_100);
  }
  local_108 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_108);
  }
  local_110 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_110);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_110);
  }
  local_111 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_111);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_111);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_e8;
  local_58 = local_f8;
  uStack_50 = uStack_f0;
  local_68 = local_d0;
  local_78 = local_e0;
  uStack_70 = uStack_d8;
  local_88 = local_a8;
  local_98 = local_b8;
  uStack_90 = uStack_b0;
  local_120 = local_111;
  local_128 = local_110;
  local_130 = local_108;
  local_138 = local_100;
  local_140 = local_fa;
  local_148 = local_f9;
  local_160 = local_c4;
  local_168 = local_c0;
  local_158 = &local_78;
  local_150 = &local_58;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x430) + 0xb10))
                    (*(longlong **)(param_1 + 0x430),local_9c,&local_98,local_b9);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerMoveDual_Validate");
  }
  else {
    local_48 = local_e8;
    local_58 = local_f8;
    uStack_50 = uStack_f0;
    local_68 = local_d0;
    local_78 = local_e0;
    uStack_70 = uStack_d8;
    local_88 = local_a8;
    local_98 = local_b8;
    uStack_90 = uStack_b0;
    local_120 = local_111;
    local_128 = local_110;
    local_130 = local_108;
    local_138 = local_100;
    local_140 = local_fa;
    local_148 = local_f9;
    local_160 = local_c4;
    local_168 = local_c0;
    local_158 = &local_78;
    local_150 = &local_58;
    (**(code **)(**(longlong **)(param_1 + 0x430) + 0xb08))
              (*(longlong **)(param_1 + 0x430),local_9c,&local_98,local_b9);
  }
  if ((local_40 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14799623a FUN_14799623a body=280 status=ok
// SIG undefined FUN_14799623a(void)

void FUN_14799623a(longlong *param_1,undefined4 param_2,undefined4 *param_3,undefined1 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 *param_7,undefined4 *param_8,
                  undefined1 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined1 param_14)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined4 local_b8 [2];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined1 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = *param_3;
  uStack_ac = param_3[1];
  uStack_a8 = param_3[2];
  uStack_a4 = param_3[3];
  local_a0 = *(undefined8 *)(param_3 + 4);
  local_94 = param_5;
  local_90 = param_6;
  local_88 = *param_7;
  uStack_80 = param_7[1];
  local_78 = param_7[2];
  local_70 = *param_8;
  uStack_6c = param_8[1];
  uStack_68 = param_8[2];
  uStack_64 = param_8[3];
  local_60 = *(undefined8 *)(param_8 + 4);
  local_58 = param_9;
  local_57 = param_10;
  local_54 = param_11;
  local_50 = param_12;
  local_48 = param_13;
  local_40 = param_14;
  local_b8[0] = param_2;
  local_98 = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cacf7b0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_b8);
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147996354 FUN_147996354 body=1653 status=ok
// SIG undefined FUN_147996354(void)

void FUN_147996354(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_160;
  undefined8 *local_158;
  undefined8 *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined1 local_111;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_fa;
  undefined1 local_f9;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 local_b9;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_9c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  local_b9 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b9);
  }
  local_c0 = 0;
  FUN_144a8cc30();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  local_c4 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c4);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f8);
  }
  local_f9 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f9);
  }
  local_fa = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_fa);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_fa);
  }
  local_100 = 0;
  FUN_144a8cc30();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_100);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_100);
  }
  local_108 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_108);
  }
  local_110 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_110);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_110);
  }
  local_111 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_111);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_111);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_e8;
  local_58 = local_f8;
  uStack_50 = uStack_f0;
  local_68 = local_d0;
  local_78 = local_e0;
  uStack_70 = uStack_d8;
  local_88 = local_a8;
  local_98 = local_b8;
  uStack_90 = uStack_b0;
  local_120 = local_111;
  local_128 = local_110;
  local_130 = local_108;
  local_138 = local_100;
  local_140 = local_fa;
  local_148 = local_f9;
  local_160 = local_c4;
  local_168 = local_c0;
  local_158 = &local_78;
  local_150 = &local_58;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x430) + 0xb28))
                    (*(longlong **)(param_1 + 0x430),local_9c,&local_98,local_b9);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerMoveDualHybridRootMotion_Validate");
  }
  else {
    local_48 = local_e8;
    local_58 = local_f8;
    uStack_50 = uStack_f0;
    local_68 = local_d0;
    local_78 = local_e0;
    uStack_70 = uStack_d8;
    local_88 = local_a8;
    local_98 = local_b8;
    uStack_90 = uStack_b0;
    local_120 = local_111;
    local_128 = local_110;
    local_130 = local_108;
    local_138 = local_100;
    local_140 = local_fa;
    local_148 = local_f9;
    local_160 = local_c4;
    local_168 = local_c0;
    local_158 = &local_78;
    local_150 = &local_58;
    (**(code **)(**(longlong **)(param_1 + 0x430) + 0xb20))
              (*(longlong **)(param_1 + 0x430),local_9c,&local_98,local_b9);
  }
  if ((local_40 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479969ca FUN_1479969ca body=245 status=ok
// SIG undefined FUN_1479969ca(void)

void FUN_1479969ca(longlong *param_1,undefined4 param_2,undefined4 *param_3,undefined1 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 *param_7,undefined4 *param_8,
                  undefined1 param_9,undefined1 param_10,undefined4 param_11,undefined1 param_12)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98 [2];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 local_37;
  undefined4 local_34;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = *param_3;
  uStack_8c = param_3[1];
  uStack_88 = param_3[2];
  uStack_84 = param_3[3];
  local_80 = *(undefined8 *)(param_3 + 4);
  local_74 = param_5;
  local_70 = param_6;
  local_68 = *param_7;
  uStack_60 = param_7[1];
  local_58 = param_7[2];
  local_50 = *param_8;
  uStack_4c = param_8[1];
  uStack_48 = param_8[2];
  uStack_44 = param_8[3];
  local_40 = *(undefined8 *)(param_8 + 4);
  local_38 = param_9;
  local_37 = param_10;
  local_34 = param_11;
  local_30 = param_12;
  local_98[0] = param_2;
  local_78 = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cacf7c0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_98);
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147996ac0 FUN_147996ac0 body=1409 status=ok
// SIG undefined FUN_147996ac0(void)

void FUN_147996ac0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110;
  undefined1 local_101;
  undefined4 local_100;
  undefined1 local_fa;
  undefined1 local_f9;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 local_b9;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_9c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  local_b9 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b9);
  }
  local_c0 = 0;
  FUN_144a8cc30();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  local_c4 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c4);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f8);
  }
  local_f9 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f9);
  }
  local_fa = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_fa);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_fa);
  }
  local_100 = 0;
  FUN_144a8cc30();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_100);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_100);
  }
  local_101 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_101);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_101);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_e8;
  local_58 = local_f8;
  uStack_50 = uStack_f0;
  local_68 = local_d0;
  local_78 = local_e0;
  uStack_70 = uStack_d8;
  local_88 = local_a8;
  local_98 = local_b8;
  uStack_90 = uStack_b0;
  local_110 = local_101;
  local_120 = 0;
  uStack_118 = 0;
  local_128 = local_100;
  local_130 = local_fa;
  local_138 = local_f9;
  local_150 = local_c4;
  local_158 = local_c0;
  local_148 = &local_78;
  local_140 = &local_58;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x430) + 0xb10))
                    (*(longlong **)(param_1 + 0x430),local_9c,&local_98,local_b9);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerMoveDualNoBase_Validate");
  }
  else {
    local_48 = local_e8;
    local_58 = local_f8;
    uStack_50 = uStack_f0;
    local_68 = local_d0;
    local_78 = local_e0;
    uStack_70 = uStack_d8;
    local_88 = local_a8;
    local_98 = local_b8;
    uStack_90 = uStack_b0;
    local_110 = local_101;
    local_120 = 0;
    uStack_118 = 0;
    local_128 = local_100;
    local_130 = local_fa;
    local_138 = local_f9;
    local_150 = local_c4;
    local_158 = local_c0;
    local_148 = &local_78;
    local_140 = &local_58;
    (**(code **)(**(longlong **)(param_1 + 0x430) + 0xb08))
              (*(longlong **)(param_1 + 0x430),local_9c,&local_98,local_b9);
  }
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147997042 FUN_147997042 body=170 status=ok
// SIG undefined FUN_147997042(void)

void FUN_147997042(longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined1 local_28;
  undefined1 local_27;
  undefined4 local_24;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_48 = param_3[2];
  local_40 = *param_4;
  uStack_3c = param_4[1];
  uStack_38 = param_4[2];
  uStack_34 = param_4[3];
  local_30 = *(undefined8 *)(param_4 + 4);
  local_28 = param_5;
  local_27 = param_6;
  local_24 = param_7;
  local_20 = param_8;
  local_60[0] = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cacf7d0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_60);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479970ee FUN_1479970ee body=898 status=ok
// SIG undefined FUN_1479970ee(void)

void FUN_1479970ee(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined1 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined1 local_a9;
  undefined4 local_a8;
  undefined1 local_a2;
  undefined1 local_a1;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_6c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a1 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a1);
  }
  local_a2 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a2);
  }
  local_a8 = 0;
  FUN_144a8cc30();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_a9 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a9);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_90;
  local_48 = local_a0;
  uStack_40 = uStack_98;
  local_58 = local_78;
  local_68 = local_88;
  uStack_64 = uStack_84;
  uStack_60 = uStack_80;
  uStack_5c = uStack_7c;
  local_c0 = local_a9;
  local_d0 = 0;
  uStack_c8 = 0;
  local_d8 = local_a8;
  local_e0 = local_a2;
  local_e8 = local_a1;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x430) + 0xaf8))
                    (*(longlong **)(param_1 + 0x430),local_6c);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerMoveNoBase_Validate");
  }
  else {
    local_38 = local_90;
    local_48 = local_a0;
    uStack_40 = uStack_98;
    local_58 = local_78;
    local_68 = local_88;
    uStack_64 = uStack_84;
    uStack_60 = uStack_80;
    uStack_5c = uStack_7c;
    local_c0 = local_a9;
    local_d0 = 0;
    uStack_c8 = 0;
    local_d8 = local_a8;
    local_e0 = local_a2;
    local_e8 = local_a1;
    (**(code **)(**(longlong **)(param_1 + 0x430) + 0xaf0))
              (*(longlong **)(param_1 + 0x430),local_6c);
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147997472 FUN_147997472 body=113 status=ok
// SIG undefined FUN_147997472(void)

void FUN_147997472(longlong *param_1,undefined4 param_2,undefined4 *param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_28 = *(undefined8 *)(param_3 + 4);
  local_40[0] = param_2;
  local_20 = param_4;
  uVar1 = FUN_14477b072(local_38,DAT_14cacf7e0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_40);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479974e4 FUN_1479974e4 body=410 status=ok
// SIG undefined FUN_1479974e4(void)

void FUN_1479974e4(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_88 [47];
  undefined1 local_59;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_59 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_59);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_59);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_48;
  local_38 = local_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x430) + 0xb40))
                    (*(longlong **)(param_1 + 0x430),local_3c,&local_38,local_59);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerMoveOld_Validate");
  }
  else {
    local_28 = local_48;
    local_38 = local_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    (**(code **)(**(longlong **)(param_1 + 0x430) + 0xb38))
              (*(longlong **)(param_1 + 0x430),local_3c,&local_38,local_59);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147997680 FUN_147997680 body=160 status=ok
// SIG undefined FUN_147997680(void)

void FUN_147997680(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x820))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147997740 FUN_147997740 body=162 status=ok
// SIG undefined FUN_147997740(void)

void FUN_147997740(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x868))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147997846 FUN_147997846 body=37 status=ok
// SIG undefined FUN_147997846(void)

void FUN_147997846(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x430) != 0) {
    *(float *)(param_1 + 0x54c) = *(float *)(*(longlong *)(param_1 + 0x430) + 800) * 0.8;
  }
  return;
}



// FUNCTION 14799786c thunk_FUN_1463f2130 body=5 status=ok
// SIG undefined thunk_FUN_1463f2130(void)

void thunk_FUN_1463f2130(longlong param_1)

{
  FUN_1401b2056();
  *(undefined1 *)(param_1 + 0x17b) = 0;
  return;
}



// FUNCTION 147997872 FUN_147997872 body=167 status=ok
// SIG undefined FUN_147997872(void)

void FUN_147997872(longlong param_1,float *param_2,float *param_3)

{
  longlong lVar1;
  char cVar2;
  double dVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x438);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  if (*(longlong *)(param_1 + 0x1c8) == lVar1) {
    cVar2 = FUN_1433b7698(param_1);
    if (cVar2 != '\0') {
      lVar1 = *(longlong *)(param_1 + 0x438);
      dVar3 = *(double *)(lVar1 + 0x280);
      if (*(double *)(lVar1 + 0x288) <= *(double *)(lVar1 + 0x280)) {
        dVar3 = *(double *)(lVar1 + 0x288);
      }
      *param_2 = (float)dVar3 * *(float *)(lVar1 + 0x644);
      *param_3 = (float)*(double *)(lVar1 + 0x290) * *(float *)(lVar1 + 0x640);
      return;
    }
  }
  FUN_141440178(param_1,param_2,param_3);
  return;
}



// FUNCTION 14799791a FUN_14799791a body=93 status=ok
// SIG undefined FUN_14799791a(void)

float FUN_14799791a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  lVar2 = *(longlong *)(lVar2 + 0x438);
  if (lVar2 != 0) {
    return (float)*(double *)(lVar2 + 0x290) * *(float *)(lVar2 + 0x640);
  }
  fVar3 = (float)FUN_147c46038(param_1);
  return fVar3;
}



// FUNCTION 147997978 FUN_147997978 body=105 status=ok
// SIG undefined FUN_147997978(void)

undefined8 FUN_147997978(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  double dVar3;
  undefined8 uVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  lVar2 = *(longlong *)(lVar2 + 0x438);
  if (lVar2 != 0) {
    dVar3 = *(double *)(lVar2 + 0x280);
    if (*(double *)(lVar2 + 0x288) <= *(double *)(lVar2 + 0x280)) {
      dVar3 = *(double *)(lVar2 + 0x288);
    }
    return CONCAT44((int)((ulonglong)dVar3 >> 0x20),(float)dVar3 * *(float *)(lVar2 + 0x644));
  }
  uVar4 = FUN_147c46102(param_1);
  return uVar4;
}



// FUNCTION 1479979f2 FUN_1479979f2 body=214 status=ok
// SIG undefined FUN_1479979f2(void)

bool FUN_1479979f2(longlong *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  
  cVar2 = (**(code **)(*(longlong *)param_1[0x86] + 0x680))();
  if (cVar2 != '\0') {
    if (((*(byte *)((longlong)param_1 + 0x551) & 8) == 0) ||
       ((**(code **)(*param_1 + 0x8a8))(param_1), extraout_XMM0_Da <= 0.0)) {
      iVar3 = (int)param_1[0xad];
      if (iVar3 == 0) {
        cVar2 = (**(code **)(*(longlong *)(param_1[0x86] + 0x178) + 0xd8))(param_1[0x86] + 0x178);
        iVar3 = (int)param_1[0xad];
        if (cVar2 != '\0') {
          iVar3 = iVar3 + 1;
        }
      }
      return iVar3 < *(int *)((longlong)param_1 + 0x564);
    }
    if (((*(byte *)(param_1 + 0xaa) & 8) != 0) &&
       (fVar1 = *(float *)((longlong)param_1 + 0x554), (**(code **)(*param_1 + 0x8a8))(param_1),
       fVar1 < extraout_XMM0_Da_00)) {
      if (*(int *)((longlong)param_1 + 0x564) <= (int)param_1[0xad]) {
        return (bool)((int)param_1[0xad] == *(int *)((longlong)param_1 + 0x564) &
                     (*(byte *)((longlong)param_1 + 0x551) & 8) >> 3);
      }
      return true;
    }
  }
  return false;
}



// FUNCTION 147997ac8 FUN_147997ac8 body=121 status=ok
// SIG undefined FUN_147997ac8(void)

bool FUN_147997ac8(longlong *param_1)

{
  float fVar1;
  double dVar2;
  bool bVar3;
  longlong lVar4;
  float fVar5;
  
  bVar3 = true;
  if (*(float *)(param_1 + 0xab) <= 0.0) {
    if (((*(byte *)(param_1 + 0xaa) & 4) == 0) || ((char)param_1[0x2f] != '\x01')) {
      bVar3 = false;
    }
    else {
      lVar4 = FUN_1447210f0(param_1);
      fVar1 = *(float *)((longlong)param_1 + 0x55c);
      dVar2 = *(double *)(lVar4 + 0x6d0);
      fVar5 = (float)(**(code **)(*param_1 + 0x8a8))(param_1);
      bVar3 = dVar2 - (double)fVar1 <= (double)fVar5;
    }
  }
  return bVar3;
}



// FUNCTION 147997b42 FUN_147997b42 body=238 status=ok
// SIG undefined FUN_147997b42(void)

void FUN_147997b42(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x6c8))();
  plVar1 = (longlong *)param_1[2];
  lVar4 = plVar1[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar4 = plVar1[0x22];
  }
  if ((param_1[0x85] == 0) || (*(longlong *)(lVar4 + 0x428) == 0)) {
    lVar4 = *(longlong *)(lVar4 + 0x510);
  }
  else {
    lVar2 = FUN_1411b6c24();
    lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x428) + 0x1a8);
    *(longlong *)(lVar2 + 0x10) = lVar4;
  }
  param_1[0xa2] = lVar4;
  local_48 = param_2;
  local_44 = param_3;
  uVar3 = FUN_14477b072(param_1,DAT_14cacf6d0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_48);
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147997c32 FUN_147997c32 body=246 status=ok
// SIG undefined FUN_147997c32(void)

void FUN_147997c32(longlong *param_1,float param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  double dVar5;
  undefined1 auStack_68 [32];
  float local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x6c8))();
  plVar1 = (longlong *)param_1[2];
  lVar4 = plVar1[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar4 = plVar1[0x22];
  }
  if ((param_1[0x85] == 0) || (*(longlong *)(lVar4 + 0x428) == 0)) {
    dVar5 = (double)param_2 + *(double *)(lVar4 + 0x510);
  }
  else {
    lVar2 = FUN_1411b6c24();
    dVar5 = (double)param_2 + *(double *)(*(longlong *)(lVar4 + 0x428) + 0x1a8);
    *(double *)(lVar2 + 0x10) = dVar5;
  }
  param_1[0xa2] = (longlong)dVar5;
  local_48 = param_2;
  local_44 = param_3;
  uVar3 = FUN_14477b072(param_1,DAT_14cacf6f0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_48);
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147997d2a FUN_147997d2a body=603 status=ok
// SIG undefined FUN_147997d2a(void)

void FUN_147997d2a(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  float fVar1;
  double dVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_1e8 [32];
  double *local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  undefined1 local_190 [4];
  undefined4 local_18c;
  undefined4 local_ec;
  undefined4 local_c0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar9 = param_3[1];
  if (lVar9 != 0) {
    lVar8 = FUN_1411311bc();
    if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar9 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
        lVar8 + 0x30)) {
      plVar10 = (longlong *)param_3[1];
      goto LAB_147997db8;
    }
  }
  plVar10 = (longlong *)0x0;
LAB_147997db8:
  lVar9 = plVar10[0x22];
  if (lVar9 == 0) {
    (**(code **)(*plVar10 + 1000))(plVar10);
    lVar9 = plVar10[0x22];
  }
  fVar1 = *(float *)(lVar9 + 0x2c);
  if ((3.0 < fVar1) && (*(longlong *)(param_1 + 0x430) != 0)) {
    memset(local_190,0,0x100);
    local_c0 = 0xffffffff;
    local_18c = 0x3f800000;
    local_ec = 0xffffffff;
    local_1c8 = &local_1a8;
    (**(code **)(*param_3 + 0x18))(param_3,param_1,param_4,local_190);
    dVar6 = (double)fVar1;
    local_1b0 = local_198 * dVar6;
    uVar3 = *(uint *)(lVar9 + 0x28);
    plVar10 = *(longlong **)(param_1 + 0x430);
    dVar7 = local_1b0;
    if ((uVar3 & 2) != 0) {
      if (1e-08 < *(float *)(plVar10 + 0x6c)) {
        dVar7 = (1.0 / (double)*(float *)(plVar10 + 0x6c)) * local_1b0;
      }
    }
    dVar2 = (double)plVar10[0x27];
    plVar4 = (longlong *)plVar10[2];
    lVar9 = plVar4[0x22];
    if (lVar9 == 0) {
      (**(code **)(*plVar4 + 1000))(plVar4);
      lVar9 = plVar4[0x22];
      plVar10 = *(longlong **)(param_1 + 0x430);
    }
    bVar5 = (double)*(float *)(lVar9 + 0x200) < dVar2;
    if (0.0 < dVar7 && bVar5) {
      local_1b0 = local_1b0 * 0.5;
    }
    local_1c0 = dVar6 * local_1a8;
    local_1b8 = local_1a0 * dVar6;
    (**(code **)(*plVar10 + 0x848))(-(ulonglong)bVar5,&local_1c0,(uVar3 & 2) == 0);
  }
  if ((local_90 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147997f86 FUN_147997f86 body=81 status=ok
// SIG undefined FUN_147997f86(void)

void FUN_147997f86(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1[0x8a] != 0) {
    lVar1 = FUN_144a79778(param_1);
    lVar2 = FUN_144a79778(param_1[0x8a]);
    if (lVar1 != lVar2) {
      (**(code **)(*param_1 + 0x7a8))(param_1,0,0,1);
    }
  }
  FUN_1478b6dae(param_1);
  return;
}



// FUNCTION 147998066 FUN_147998066 body=142 status=ok
// SIG undefined FUN_147998066(void)

void FUN_147998066(longlong param_1)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  
  if (*(longlong **)(param_1 + 0x430) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x430) + 0x490))();
    (**(code **)(**(longlong **)(param_1 + 0x430) + 0x5f8))();
  }
  iVar3 = FUN_14487fd02(param_1);
  if ((iVar3 != 1) && (*(longlong *)(param_1 + 0x428) != 0)) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x428) + 0xc70);
    *pbVar1 = *pbVar1 | 0x10;
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x428) + 0x480))
                      (*(longlong **)(param_1 + 0x428),0);
    if (cVar2 != '\0') {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x428) + 0xc61);
      *pbVar1 = *pbVar1 | 0x20;
      *(undefined1 *)(*(longlong *)(param_1 + 0x428) + 0xc5c) = 1;
    }
  }
  FUN_147c465d2(param_1);
  return;
}



// FUNCTION 1479980f4 FUN_1479980f4 body=794 status=ok
// SIG undefined FUN_1479980f4(void)

void FUN_1479980f4(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  undefined2 *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  char cVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined2 *local_98;
  longlong local_90;
  undefined2 *local_88;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = param_5;
  FUN_147c46922();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cacf910) && (FUN_144b3d300(&DAT_14cacf910), DAT_14cacf910 == -1)) {
    FUN_1446f470e(&DAT_14cacf908,L"Physics");
    _Init_thread_footer(&DAT_14cacf910);
  }
  if ((longlong)(int)param_3[1] != 0) {
    lVar5 = 0;
    do {
      if (*(longlong *)(*param_3 + lVar5) == DAT_14cacf908) {
        local_4c = 0x40800000;
        if ((*(longlong *)(param_1 + 0x430) == 0) ||
           (*(longlong **)(param_1 + 0x450) == (longlong *)0x0)) {
          FUN_1400b22c2(&local_60,"Not Based");
        }
        else {
          cVar4 = (**(code **)(**(longlong **)(param_1 + 0x450) + 0x568))();
          if (cVar4 == '\0') {
            local_70 = *(undefined2 **)(*(longlong *)(param_1 + 0x450) + 0x18);
            FUN_1400021e4(&local_70,&local_60);
          }
          else {
            FUN_1400b22c2(&local_60,"World Geometry");
          }
          puVar7 = local_60;
          puVar6 = &DAT_149dfb77a;
          if (local_58 != 0) {
            puVar6 = local_60;
          }
          FUN_140002266(&local_60,L"Based On %s",puVar6);
          if (puVar7 != (undefined2 *)0x0) {
            FUN_1400020a8(puVar7);
          }
        }
        local_88 = local_60;
        puVar7 = local_60;
        if (local_58 == 0) {
          puVar7 = &DAT_149dfb77a;
        }
        FUN_1467fafc0(param_1 + 0x470,&local_70);
        local_98 = &DAT_149dfb77a;
        if (local_68 != 0) {
          local_98 = local_70;
        }
        local_90 = param_2 + 0xa8;
        FUN_141706e52(param_1 + 0x458,&local_80);
        puVar6 = &DAT_149dfb77a;
        if (local_78 != 0) {
          puVar6 = local_80;
        }
        local_a8 = puVar7;
        FUN_140002266(&local_60,L"RelativeLoc: %s Rot: %s %s",puVar6,local_98);
        lVar5 = local_90;
        FUN_147d8f316(local_90,&local_60,&local_4c);
        if (local_60 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_80 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_70 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        plVar1 = *(longlong **)(param_1 + 0x430);
        uVar3 = 0;
        if (plVar1 != (longlong *)0x0) {
          local_a8 = param_5;
          (**(code **)(*plVar1 + 0x858))(plVar1,param_2,param_3,param_4);
          lVar2 = *(longlong *)(param_1 + 0x430);
          if (lVar2 != 0) {
            uVar3 = (**(code **)(*(longlong *)(lVar2 + 0x178) + 0xd0))(lVar2 + 0x178);
          }
        }
        FUN_140002266(&local_60,L"Crouched %i",uVar3);
        FUN_147d8f316(lVar5,&local_60,&local_4c);
        if (local_60 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_88 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)param_3[1] * 8 != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147998410 FUN_147998410 body=256 status=ok
// SIG undefined FUN_147998410(void)

void FUN_147998410(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  
  *(int *)((longlong)param_1 + 0x56c) = (int)param_1[0xad];
  lVar1 = param_1[0x86];
  if ((lVar1 != 0) && ((*(byte *)(param_1 + 0xaa) & 8) != 0)) {
    if ((int)param_1[0xad] == 0) {
      cVar3 = (**(code **)(*(longlong *)(lVar1 + 0x178) + 0xd8))(lVar1 + 0x178);
      if (cVar3 != '\0') {
        *(int *)(param_1 + 0xad) = (int)param_1[0xad] + 1;
      }
    }
    cVar3 = FUN_140553fce(param_1);
    plVar2 = (longlong *)param_1[0x86];
    if ((cVar3 == '\0') || (DAT_14c761378 == 0)) {
      cVar3 = (**(code **)(*plVar2 + 0x670))(plVar2,(*(byte *)(param_1 + 0xaa) & 0x10) >> 4,param_2)
      ;
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x678))(plVar2,(*(byte *)(param_1 + 0xaa) & 0x10) >> 4);
    }
    if (cVar3 == '\0') {
      bVar4 = 0;
    }
    else {
      bVar4 = 8;
      if ((*(byte *)((longlong)param_1 + 0x551) & 8) == 0) {
        *(int *)(param_1 + 0xad) = (int)param_1[0xad] + 1;
        uVar5 = (**(code **)(*param_1 + 0x8a8))(param_1);
        *(undefined4 *)(param_1 + 0xab) = uVar5;
        FUN_140e3c802(param_1);
      }
    }
    *(byte *)((longlong)param_1 + 0x551) = *(byte *)((longlong)param_1 + 0x551) & 0xf7 | bVar4;
  }
  return;
}



// FUNCTION 147998510 FUN_147998510 body=95 status=ok
// SIG undefined FUN_147998510(void)

void FUN_147998510(longlong *param_1,float param_2)

{
  float fVar1;
  
  if ((*(byte *)(param_1 + 0xaa) & 8) == 0) {
    *(undefined4 *)(param_1 + 0xab) = 0;
    *(byte *)((longlong)param_1 + 0x551) = *(byte *)((longlong)param_1 + 0x551) & 0xf7;
  }
  else {
    param_2 = param_2 + *(float *)((longlong)param_1 + 0x554);
    *(float *)((longlong)param_1 + 0x554) = param_2;
    fVar1 = (float)(**(code **)(*param_1 + 0x8a8))(param_1);
    if (fVar1 <= param_2) {
      *(byte *)(param_1 + 0xaa) = *(byte *)(param_1 + 0xaa) & 0xf7;
    }
  }
  return;
}



// FUNCTION 147998570 FUN_147998570 body=196 status=ok
// SIG undefined FUN_147998570(void)

longlong * FUN_147998570(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  longlong lVar12;
  
  lVar12 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar12 = *param_2;
    }
  }
  bVar11 = DAT_14c950c29;
  *param_1 = lVar12;
  param_1[7] = param_2[7];
  lVar12 = param_2[1];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  lVar7 = param_2[2];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  lVar8 = param_2[3];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar9 = param_2[4];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x2c);
  lVar10 = param_2[6];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x34);
  *(int *)(param_1 + 5) = (int)param_2[5];
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
  *(int *)(param_1 + 6) = (int)lVar10;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar6;
  *(int *)(param_1 + 3) = (int)lVar8;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(int *)(param_1 + 4) = (int)lVar9;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  *(int *)(param_1 + 1) = (int)lVar12;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(int *)(param_1 + 2) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  lVar12 = param_2[8];
  if ((bVar11 & 1) != 0) {
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar12 = param_2[8];
    }
  }
  param_1[8] = lVar12;
  param_1[9] = param_2[9];
  FUN_140fb3d70(param_1 + 10,param_2 + 10);
  lVar12 = param_2[0x14];
  lVar7 = param_2[0x15];
  lVar8 = param_2[0x16];
  lVar9 = param_2[0x17];
  lVar10 = param_2[0x18];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = lVar12;
  param_1[0x15] = lVar7;
  param_1[0x16] = lVar8;
  param_1[0x17] = lVar9;
  param_1[0x18] = lVar10;
  return param_1;
}



// FUNCTION 147998634 FUN_147998634 body=172 status=ok
// SIG undefined FUN_147998634(void)

void FUN_147998634(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  double local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1478b7114();
  lVar3 = FUN_1447210f0(param_1);
  if (lVar3 != 0) {
    cVar1 = FUN_144b2c478(lVar3);
    if (((cVar1 != '\0') && (*(longlong *)(param_1 + 0x3c0) != 0)) &&
       (*(char *)(param_1 + 0x178) == '\x02')) {
      iVar2 = FUN_14487fd02(param_1);
      if (iVar2 == 3) {
        (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x680))
                  (*(longlong **)(param_1 + 0x3c0),local_38);
        FUN_147c461cc(param_1,(float)local_38[0]);
      }
    }
    *(float *)(param_1 + 0x4d4) = (float)*(double *)(lVar3 + 0x6d0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479986e2 FUN_1479986e2 body=129 status=ok
// SIG undefined FUN_1479986e2(void)

undefined8 FUN_1479986e2(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  if ((*(longlong *)(param_1 + 0x428) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x428) + 0xae8), uVar2 = 0,
     lVar1 != 0 && param_2 != 0)) {
    uVar3 = FUN_1478f2168(0,param_2,param_3,0,0,1);
    uVar2 = 0;
    if ((0.0 < (float)uVar3) && (uVar2 = uVar3, param_4 != 0)) {
      FUN_1478f1bb6(lVar1,param_4,param_2);
    }
  }
  return uVar2;
}



// FUNCTION 147998764 FUN_147998764 body=114 status=ok
// SIG undefined FUN_147998764(void)

void FUN_147998764(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  if (*(longlong *)(param_1 + 0x428) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x428) + 0xae8);
    if (param_2 == 0) {
      if (lVar1 == 0) {
        return;
      }
      param_2 = FUN_1478edf68(lVar1);
    }
    if ((param_2 != 0 && lVar1 != 0) && (cVar2 = FUN_1478f1672(lVar1,param_2), cVar2 == '\0')) {
      FUN_1478f2ff8(lVar1,*(undefined4 *)(param_2 + 0x100),param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1479987d8 FUN_1479987d8 body=202 status=ok
// SIG undefined FUN_1479987d8(void)

void FUN_1479987d8(longlong *param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = (**(code **)(*param_1 + 0x8a8))();
  *(undefined4 *)(param_2 + 8) = uVar2;
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)((longlong)param_1 + 0x564);
  *(undefined4 *)(param_2 + 0x10) = 3;
  *(uint *)(param_2 + 0x14) = (uint)*(byte *)(param_1 + 0xd);
  *(undefined1 *)(param_2 + 0x18) = 1;
  if ((longlong *)param_1[0x85] == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(longlong *)param_1[0x85] + 0xbb0))();
  }
  *(undefined1 *)(param_2 + 0x19) = uVar1;
  *(byte *)(param_2 + 0x1a) = *(byte *)(param_1 + 0x73) & 1;
  *(byte *)(param_2 + 0x1b) = *(byte *)(param_1 + 0x73) >> 1 & 1;
  *(byte *)(param_2 + 0x1c) = *(byte *)(param_1 + 0x73) >> 2 & 1;
  (**(code **)(*(longlong *)param_1[0x78] + 0x6c0))((longlong *)param_1[0x78],&local_30);
  *(undefined8 *)(param_2 + 0x30) = local_20;
  *(undefined4 *)(param_2 + 0x20) = local_30;
  *(undefined4 *)(param_2 + 0x24) = uStack_2c;
  *(undefined4 *)(param_2 + 0x28) = uStack_28;
  *(undefined4 *)(param_2 + 0x2c) = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479988a4 FUN_1479988a4 body=435 status=ok
// SIG undefined FUN_1479988a4(void)

void FUN_1479988a4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  double dVar9;
  double *pdVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  double local_50;
  
  dVar9 = (double)(DAT_14c707940 ^ (ulonglong)auStack_a8);
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  local_50 = dVar9;
  if (lVar1 == 0) {
    local_58 = DAT_14c846508;
    local_68 = (undefined4)DAT_14c8464f8;
    uStack_64 = DAT_14c8464f8._4_4_;
    uStack_60 = (undefined4)DAT_14c846500;
    uStack_5c = DAT_14c846500._4_4_;
  }
  else {
    dVar4 = *(double *)(lVar1 + 0x240);
    dVar5 = *(double *)(lVar1 + 0x248);
    dVar6 = *(double *)(lVar1 + 0x250);
    dVar7 = *(double *)(lVar1 + 600);
    pdVar10 = *(double **)(lVar1 + 0x228);
    lVar12 = param_1;
    local_88 = dVar4;
    uStack_80 = dVar5;
    local_78 = dVar6;
    uStack_70 = dVar7;
    if (pdVar10 == (double *)0x0) {
      lVar12 = 0x40;
      pdVar10 = (double *)FUN_14001cc68(0x40,0x10);
      dVar9 = DAT_14c8463d8;
      *pdVar10 = DAT_14c8463d0;
      pdVar10[1] = dVar9;
      dVar9 = DAT_14c8463e8;
      pdVar10[2] = DAT_14c8463e0;
      pdVar10[3] = dVar9;
      dVar9 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
      pdVar10[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
      pdVar10[5] = dVar9;
      dVar9 = DAT_14c846508;
      pdVar10[6] = DAT_14c846508;
      *(double **)(lVar1 + 0x228) = pdVar10;
    }
    auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar10[1]);
    auVar2._0_8_ = -(ulonglong)(dVar4 != *pdVar10);
    auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar10[1]) >> 0x20);
    iVar8 = movmskpd(SUB84(dVar9,0),auVar2);
    auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar10[3]);
    auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar10[2]);
    auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar10[3]) >> 0x20);
    uVar11 = movmskpd((int)lVar12,auVar3);
    if ((uVar11 & 0x3fffffff) != 0 || iVar8 != 0) {
      *(undefined4 *)(pdVar10 + 2) = (undefined4)local_78;
      *(undefined4 *)((longlong)pdVar10 + 0x14) = local_78._4_4_;
      *(undefined4 *)(pdVar10 + 3) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)pdVar10 + 0x1c) = uStack_70._4_4_;
      *(undefined4 *)pdVar10 = (undefined4)local_88;
      *(undefined4 *)((longlong)pdVar10 + 4) = local_88._4_4_;
      *(undefined4 *)(pdVar10 + 1) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)pdVar10 + 0xc) = uStack_80._4_4_;
      FUN_1448052ee(&local_88,&local_68);
      pdVar10[6] = local_58;
      pdVar10[4] = (double)CONCAT44(uStack_64,local_68);
      pdVar10[5] = (double)CONCAT44(uStack_5c,uStack_60);
    }
    local_58 = pdVar10[6];
    local_68 = *(undefined4 *)(pdVar10 + 4);
    uStack_64 = *(undefined4 *)((longlong)pdVar10 + 0x24);
    uStack_60 = *(undefined4 *)(pdVar10 + 5);
    uStack_5c = *(undefined4 *)((longlong)pdVar10 + 0x2c);
  }
  *(double *)(param_2 + 0x18) = local_58;
  *(ulonglong *)(param_2 + 8) = CONCAT44(uStack_64,local_68);
  *(ulonglong *)(param_2 + 0x10) = CONCAT44(uStack_5c,uStack_60);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x56c);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x568);
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x558);
  *(byte *)(param_2 + 0x30) = *(byte *)(param_1 + 0x551) >> 3 & 1;
  *(byte *)(param_2 + 0x31) = *(byte *)(param_1 + 0x550) >> 3 & 1;
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_1 + 0x554);
  *(undefined1 *)(param_2 + 0x32) = 0;
  if (((ulonglong)local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147998a58 FUN_147998a58 body=85 status=ok
// SIG undefined FUN_147998a58(void)

void FUN_147998a58(longlong param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 0x56c) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x568) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x558) = *(undefined4 *)(param_2 + 0x28);
  *(byte *)(param_1 + 0x551) = *(byte *)(param_1 + 0x551) & 0xf7 | *(char *)(param_2 + 0x30) << 3;
  *(undefined4 *)(param_1 + 0x554) = *(undefined4 *)(param_2 + 0x2c);
  if (*(char *)(param_2 + 0x32) == '\x01') {
    *(byte *)(param_1 + 0x550) = *(byte *)(param_1 + 0x550) & 0xf7;
  }
  return;
}



// FUNCTION 147998aba FUN_147998aba body=244 status=ok
// SIG undefined FUN_147998aba(void)

void FUN_147998aba(longlong *param_1,undefined4 param_2,longlong param_3)

{
  undefined8 in_RDX;
  undefined4 uVar1;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined1 local_70 [24];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*(longlong *)param_1[0x55] + 0x10))((longlong *)param_1[0x55],in_RDX,param_1,param_3)
  ;
  local_88 = (undefined4)param_1[3];
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_80 = (undefined4)param_1[4];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x24);
  local_78 = param_1[5];
  (**(code **)(*param_1 + 0x70))(param_1,local_70,&local_88,param_3);
  (**(code **)(*param_1 + 0x78))(param_1,&local_58,local_70,param_3);
  *(undefined8 *)(param_3 + 0x38) = local_48;
  *(undefined8 *)(param_3 + 0x28) = local_58;
  *(undefined8 *)(param_3 + 0x30) = uStack_50;
  local_a8 = *(undefined4 *)(param_3 + 0x28);
  uStack_a4 = *(undefined4 *)(param_3 + 0x2c);
  uStack_a0 = *(undefined4 *)(param_3 + 0x30);
  uStack_9c = *(undefined4 *)(param_3 + 0x34);
  local_98 = *(undefined8 *)(param_3 + 0x38);
  uVar1 = (**(code **)(*param_1 + 0x80))(param_1);
  *(undefined4 *)(param_3 + 0x40) = uVar1;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147998bb0 FUN_147998bb0 body=2119 status=ok
// SIG undefined FUN_147998bb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147998bb0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined4 *puVar1;
  double dVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  char cVar23;
  byte bVar24;
  uint uVar25;
  double *pdVar26;
  longlong lVar27;
  longlong lVar28;
  int iVar29;
  uint uVar30;
  longlong *plVar31;
  undefined4 uVar32;
  longlong lVar33;
  longlong lVar34;
  undefined8 *puVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  pdVar26 = (double *)&DAT_14c8464e0;
  if ((*(longlong *)(param_1[0x54] + 0xc0) != 0) &&
     (plVar31 = *(longlong **)(*(longlong *)(param_1[0x54] + 0xc0) + 0x48),
     plVar31 != (longlong *)0x0)) {
    pdVar26 = (double *)((longlong)(int)plVar31[1] * 0x18 + *(longlong *)(*plVar31 + 0x28));
  }
  dVar2 = pdVar26[2];
  dVar43 = *pdVar26;
  dVar39 = pdVar26[1];
  cVar23 = (**(code **)(*param_1 + 0x278))(param_1,param_3);
  if (cVar23 == '\0') {
    bVar24 = 0;
  }
  else {
    bVar24 = 1;
    if ((((dVar43 == *(double *)(param_3 + 0x48)) &&
         (!NAN(dVar43) && !NAN(*(double *)(param_3 + 0x48)))) &&
        (dVar39 == *(double *)(param_3 + 0x50))) &&
       (!NAN(dVar39) && !NAN(*(double *)(param_3 + 0x50)))) {
      bVar24 = -(*(double *)(param_3 + 0x58) != dVar2) & 1;
    }
  }
  *(byte *)(param_3 + 0x98) = *(byte *)(param_3 + 0x98) | bVar24;
  puVar1 = (undefined4 *)(param_3 + 0xa0);
  if (*(char *)((longlong)param_1 + 0x143) == '\x01') {
    *(double *)(param_3 + 0xb8) =
         (*(double *)(param_3 + 0xa0) - *(double *)(param_3 + 0x80)) + *(double *)(param_3 + 0xb8);
    *(double *)(param_3 + 0xc0) =
         (*(double *)(param_3 + 0xa8) - *(double *)(param_3 + 0x88)) + *(double *)(param_3 + 0xc0);
    *(double *)(param_3 + 200) =
         (*(double *)(param_3 + 0xb0) - *(double *)(param_3 + 0x90)) + *(double *)(param_3 + 200);
  }
  (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3);
  *(undefined8 *)(param_3 + 0x2f8) = *(undefined8 *)(param_3 + 0xb0);
  *(undefined4 *)(param_3 + 0x2e8) = *puVar1;
  *(undefined4 *)(param_3 + 0x2ec) = *(undefined4 *)(param_3 + 0xa4);
  *(undefined4 *)(param_3 + 0x2f0) = *(undefined4 *)(param_3 + 0xa8);
  *(undefined4 *)(param_3 + 0x2f4) = *(undefined4 *)(param_3 + 0xac);
  *(double *)(param_3 + 0x300) = dVar43;
  *(double *)(param_3 + 0x308) = dVar39;
  *(double *)(param_3 + 0x310) = dVar2;
  (**(code **)(*param_1 + 0xb8))(param_1,param_2,param_3);
  lVar28 = param_3;
  (**(code **)(*param_1 + 0xc0))(param_1);
  uVar32 = (undefined4)lVar28;
  if (*(char *)((longlong)param_1 + 0x143) == '\x01') {
    *(double *)(param_3 + 0xb8) =
         (*(double *)(param_3 + 0xa0) - *(double *)(param_3 + 0x2e8)) + *(double *)(param_3 + 0xb8);
    *(double *)(param_3 + 0xc0) =
         (*(double *)(param_3 + 0xa8) - *(double *)(param_3 + 0x2f0)) + *(double *)(param_3 + 0xc0);
    *(double *)(param_3 + 200) =
         (*(double *)(param_3 + 0xb0) - *(double *)(param_3 + 0x2f8)) + *(double *)(param_3 + 200);
  }
  if (*(char *)((longlong)param_1 + 0x141) == '\0') {
    if ((*(byte *)(param_1 + 0x28) & 1) != 0) goto LAB_147998e07;
  }
  else if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    if (0.0 < (float)param_2) {
      *(longlong *)(param_3 + 0xb0) = param_1[0x2e];
      uVar17 = *(undefined4 *)((longlong)param_1 + 0x164);
      lVar28 = param_1[0x2d];
      uVar18 = *(undefined4 *)((longlong)param_1 + 0x16c);
      *puVar1 = (int)param_1[0x2c];
      *(undefined4 *)(param_3 + 0xa4) = uVar17;
      *(int *)(param_3 + 0xa8) = (int)lVar28;
      *(undefined4 *)(param_3 + 0xac) = uVar18;
    }
  }
  else {
LAB_147998e07:
    if (0.0 < *(float *)(param_1 + 0x40)) {
      dVar39 = 1.0 / (double)*(float *)(param_1 + 0x40);
      dVar43 = (double)param_1[0x3a] * dVar39;
      dVar2 = (double)param_1[0x39];
      *(double *)(param_3 + 0x280) = dVar39 * (double)param_1[0x38];
      *(double *)(param_3 + 0x288) = dVar2 * dVar39;
      *(double *)(param_3 + 0x290) = dVar43;
      local_98 = *(undefined1 (*) [16])(param_3 + 0x280);
      lVar28 = param_3;
      cVar23 = (**(code **)(*param_1 + 0x268))(param_1);
      uVar32 = (undefined4)lVar28;
      if (cVar23 != '\0') {
        dVar43 = *(double *)(param_3 + 0xb0);
      }
      *puVar1 = local_98._0_4_;
      *(undefined4 *)(param_3 + 0xa4) = local_98._4_4_;
      *(undefined4 *)(param_3 + 0xa8) = local_98._8_4_;
      *(undefined4 *)(param_3 + 0xac) = local_98._12_4_;
      *(double *)(param_3 + 0xb0) = dVar43;
    }
  }
  (**(code **)(*(longlong *)param_1[0x55] + 0x18))
            ((longlong *)param_1[0x55],param_2,param_1,param_3);
  *(undefined4 *)(param_3 + 0x278) = 0;
  (**(code **)(*param_1 + 0x38))(param_1,param_2,0,param_3);
  if ((char)param_1[0xf] != '\x01') goto LAB_1479993ae;
  plVar31 = param_1;
  (**(code **)(*param_1 + 0x100))(param_1,param_2,param_3);
  if (((char)param_1[0x20] != '\0') || (bVar24 = *(byte *)(param_1 + 0x28), bVar24 == 0)) {
    plVar31 = param_1;
    (**(code **)(*param_1 + 0x50))(param_1,param_2,param_3);
    bVar24 = *(byte *)(param_1 + 0x28);
  }
  dVar2 = (double)DAT_149931170;
  dVar43 = DAT_149931170._8_8_;
  if ((bVar24 & 1) == 0) {
    if ((*(char *)((longlong)param_1 + 0x141) == '\x01') && (param_1[0x54] != 0)) {
      dVar37 = (double)param_1[0x30];
      dVar36 = (double)param_1[0x31];
      dVar40 = (double)param_1[0x32];
      dVar19 = (double)param_1[0x33];
      dVar42 = (double)CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
      dVar39 = (double)CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
      dVar38 = (double)CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
      dVar41 = (double)CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
      lVar28 = -(ulonglong)(9.99999993922529e-09 < ABS(dVar36 - dVar39));
      auVar15._8_4_ = (int)lVar28;
      auVar15._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar37 - dVar42));
      auVar15._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
      uVar25 = movmskpd((int)plVar31,auVar15);
      lVar28 = -(ulonglong)(9.99999993922529e-09 < ABS(dVar19 - dVar41));
      auVar10._8_4_ = (int)lVar28;
      auVar10._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar40 - dVar38));
      auVar10._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
      iVar29 = movmskpd(uVar32,auVar10);
      uVar30 = iVar29 << 2 | uVar25;
      if (uVar30 != 0) {
        lVar28 = -(ulonglong)(9.99999993922529e-09 < ABS(dVar36 + dVar39));
        auVar6._8_4_ = (int)lVar28;
        auVar6._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar37 + dVar42));
        auVar6._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
        iVar29 = movmskpd(uVar25,auVar6);
        lVar28 = -(ulonglong)(9.99999993922529e-09 < ABS(dVar19 + dVar41));
        auVar4._8_4_ = (int)lVar28;
        auVar4._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar40 + dVar38));
        auVar4._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
        uVar25 = movmskpd(uVar30,auVar4);
        if ((uVar25 & 0x3fffffff) != 0 || iVar29 != 0) {
          lVar28 = *(longlong *)(param_1[0x54] + 0xc0);
          if ((lVar28 != 0) && (plVar31 = *(longlong **)(lVar28 + 0x48), plVar31 != (longlong *)0x0)
             ) {
            lVar28 = *(longlong *)(*plVar31 + 0x48);
            lVar27 = (longlong)(int)plVar31[1] * 0x10;
            dVar41 = (double)*(float *)(lVar28 + 0xc + lVar27);
            dVar38 = (double)*(float *)(lVar28 + 8 + lVar27);
            dVar39 = (double)*(float *)(lVar28 + 4 + lVar27);
            dVar42 = (double)*(float *)(lVar28 + lVar27);
          }
          dVar11 = (dVar37 * dVar39 * dVar2 + dVar19 * dVar38) - dVar36 * dVar42;
          dVar12 = (dVar37 * dVar42 * dVar43 + dVar19 * dVar41) - dVar36 * dVar39;
          dVar7 = dVar41 * dVar40;
          dVar8 = dVar38 * dVar40;
          dVar5 = dVar39 * dVar40 * -1.0 +
                  dVar38 * dVar36 + dVar37 * dVar41 * dVar2 + dVar19 * dVar42;
          dVar39 = dVar42 * dVar40 * 1.0 +
                   dVar41 * dVar36 + dVar37 * dVar38 * dVar43 + dVar19 * dVar39;
          goto LAB_14799924e;
        }
      }
    }
  }
  else {
    if ((*(longlong *)(param_1[0x54] + 0xc0) == 0) ||
       (plVar3 = *(longlong **)(*(longlong *)(param_1[0x54] + 0xc0) + 0x48),
       plVar3 == (longlong *)0x0)) {
      lVar28 = 0;
      dVar36 = (double)CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
      auVar21._8_4_ = (undefined4)DAT_14c8463d8;
      auVar21._0_8_ = dVar36;
      auVar21._12_4_ = DAT_14c8463d8._4_4_;
      dVar39 = (double)CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
      auVar22._8_4_ = (undefined4)DAT_14c8463e8;
      auVar22._0_8_ = dVar39;
      auVar22._12_4_ = DAT_14c8463e8._4_4_;
      dVar37 = auVar22._8_8_;
      dVar40 = auVar21._8_8_;
    }
    else {
      lVar27 = (longlong)(int)plVar3[1];
      plVar31 = *(longlong **)(*plVar3 + 0x48);
      lVar28 = lVar27 * 0x10;
      dVar37 = (double)*(float *)((longlong)plVar31 + lVar28 + 0xc);
      dVar39 = (double)*(float *)(plVar31 + lVar27 * 2 + 1);
      dVar40 = (double)*(float *)((longlong)plVar31 + lVar28 + 4);
      dVar36 = (double)*(float *)(plVar31 + lVar27 * 2);
    }
    dVar19 = (double)param_1[0x34];
    dVar42 = (double)param_1[0x35];
    dVar38 = (double)param_1[0x36];
    dVar41 = (double)param_1[0x37];
    lVar27 = -(ulonglong)
              (9.99999993922529e-09 <
              ABS(dVar42 - (double)CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8)));
    auVar16._8_4_ = (int)lVar27;
    auVar16._0_8_ =
         -(ulonglong)
          (9.99999993922529e-09 <
          ABS(dVar19 - (double)CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0)));
    auVar16._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
    uVar25 = movmskpd((int)lVar28,auVar16);
    lVar28 = -(ulonglong)
              (9.99999993922529e-09 <
              ABS(dVar41 - (double)CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8)));
    auVar14._8_4_ = (int)lVar28;
    auVar14._0_8_ =
         -(ulonglong)
          (9.99999993922529e-09 <
          ABS(dVar38 - (double)CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0)));
    auVar14._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
    iVar29 = movmskpd((int)plVar31,auVar14);
    uVar30 = iVar29 << 2 | uVar25;
    if (uVar30 != 0) {
      lVar28 = -(ulonglong)
                (9.99999993922529e-09 <
                ABS((double)CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8) + dVar42));
      auVar13._8_4_ = (int)lVar28;
      auVar13._0_8_ =
           -(ulonglong)
            (9.99999993922529e-09 <
            ABS((double)CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0) + dVar19));
      auVar13._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
      iVar29 = movmskpd(uVar25,auVar13);
      lVar28 = -(ulonglong)
                (9.99999993922529e-09 <
                ABS((double)CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8) + dVar41));
      auVar9._8_4_ = (int)lVar28;
      auVar9._0_8_ = -(ulonglong)
                      (9.99999993922529e-09 <
                      ABS((double)CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0) + dVar38))
      ;
      auVar9._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
      uVar25 = movmskpd(uVar30,auVar9);
      if ((uVar25 & 0x3fffffff) != 0 || iVar29 != 0) {
        dVar11 = (dVar19 * dVar40 * dVar2 + dVar41 * dVar39) - dVar42 * dVar36;
        dVar12 = (dVar19 * dVar36 * dVar43 + dVar41 * dVar37) - dVar42 * dVar40;
        dVar7 = dVar37 * dVar38;
        dVar8 = dVar39 * dVar38;
        dVar5 = dVar40 * dVar38 * -1.0 + dVar39 * dVar42 + dVar37 * dVar19 * dVar2 + dVar36 * dVar41
        ;
        dVar39 = dVar36 * dVar38 * 1.0 +
                 dVar37 * dVar42 + dVar39 * dVar19 * dVar43 + dVar40 * dVar41;
LAB_14799924e:
        dVar12 = dVar8 * dVar43 + dVar12;
        local_98._8_4_ = SUB84(dVar39,0);
        local_98._0_8_ = dVar5;
        local_98._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
        local_88._8_4_ = SUB84(dVar12,0);
        local_88._0_8_ = dVar7 * dVar2 + dVar11;
        local_88._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        local_a8 = 0;
        local_b0 = 0;
        local_b8 = param_3;
        (**(code **)(*param_1 + 0xa8))(param_1,&DAT_14c8464e0,local_98,1);
      }
    }
  }
  puVar35 = &DAT_14c8464e0;
  if (*(char *)(param_3 + 0x240) != '\0') {
    puVar35 = (undefined8 *)(param_3 + 0x248);
  }
  uVar20 = puVar35[1];
  *(undefined8 *)(param_3 + 0x260) = *puVar35;
  *(undefined8 *)(param_3 + 0x268) = uVar20;
  *(undefined8 *)(param_3 + 0x270) = puVar35[2];
  *(undefined1 *)(param_3 + 0x240) = 0;
  if ((*(longlong *)(param_1[0x54] + 0xc0) == 0) ||
     (plVar31 = *(longlong **)(*(longlong *)(param_1[0x54] + 0xc0) + 0x48),
     plVar31 == (longlong *)0x0)) {
    local_98._8_8_ = DAT_14c8464e8;
    local_98._0_8_ = DAT_14c8464e0;
    dVar43 = (double)CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
    dVar39 = (double)CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
    dVar37 = (double)CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
    dVar2 = (double)CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
    local_88._0_8_ = DAT_14c8464f0;
  }
  else {
    lVar33 = (longlong)(int)plVar31[1];
    lVar28 = *(longlong *)(*plVar31 + 0x28);
    local_98 = *(undefined1 (*) [16])(lVar28 + lVar33 * 0x18);
    lVar27 = *(longlong *)(*plVar31 + 0x48);
    lVar34 = lVar33 * 0x10;
    dVar2 = (double)*(float *)(lVar27 + 0xc + lVar34);
    dVar37 = (double)*(float *)(lVar27 + 8 + lVar34);
    dVar39 = (double)*(float *)(lVar27 + 4 + lVar34);
    dVar43 = (double)*(float *)(lVar27 + lVar34);
    local_88._0_8_ = *(undefined8 *)(lVar28 + 0x10 + lVar33 * 0x18);
  }
  *(undefined8 *)(param_3 + 0x58) = local_88._0_8_;
  *(undefined8 *)(param_3 + 0x48) = local_98._0_8_;
  *(undefined8 *)(param_3 + 0x50) = local_98._8_8_;
  *(double *)(param_3 + 0x60) = dVar43;
  *(double *)(param_3 + 0x68) = dVar39;
  *(double *)(param_3 + 0x70) = dVar37;
  *(double *)(param_3 + 0x78) = dVar2;
  *(undefined8 *)(param_3 + 0x90) = *(undefined8 *)(param_3 + 0xb0);
  *(undefined4 *)(param_3 + 0x80) = *puVar1;
  *(undefined4 *)(param_3 + 0x84) = *(undefined4 *)(param_3 + 0xa4);
  *(undefined4 *)(param_3 + 0x88) = *(undefined4 *)(param_3 + 0xa8);
  *(undefined4 *)(param_3 + 0x8c) = *(undefined4 *)(param_3 + 0xac);
LAB_1479993ae:
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479993f8 FUN_1479993f8 body=94 status=ok
// SIG undefined FUN_1479993f8(void)

void FUN_1479993f8(longlong *param_1,undefined8 param_2,longlong param_3)

{
  *(undefined1 *)(param_3 + 0xd1) = 0;
  if ((char)param_1[0x43] == '\x01') {
    if (*(char *)((longlong)param_1 + 0x219) == '\0') {
      (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3);
      *(undefined1 *)(param_3 + 0x331) = 1;
      *(undefined1 *)(param_3 + 0x333) = 1;
    }
    else {
      *(undefined1 *)(param_3 + 0xd1) = 1;
      *(undefined1 *)(param_3 + 0x332) = 1;
      *(undefined1 *)(param_3 + 0x334) = 1;
    }
  }
  else {
    *(undefined1 *)(param_3 + 0x332) = 1;
  }
  return;
}



// FUNCTION 147999456 FUN_147999456 body=3328 status=ok
// SIG undefined FUN_147999456(void)

void FUN_147999456(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar7;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  longlong *plVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  bool bVar33;
  undefined8 uVar34;
  uint uVar35;
  undefined4 uVar36;
  longlong lVar37;
  int iVar38;
  uint uVar39;
  longlong lVar40;
  double *pdVar41;
  double *pdVar42;
  longlong lVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined1 auStack_3d8 [32];
  longlong local_3b8;
  undefined1 *local_3b0;
  undefined1 local_3a8;
  undefined1 local_398 [16];
  undefined8 local_388;
  undefined8 uStack_380;
  undefined1 local_378 [16];
  double local_368;
  undefined8 uStack_360;
  double local_350;
  undefined1 local_348 [16];
  double local_338;
  undefined8 uStack_330;
  double local_328;
  undefined8 uStack_320;
  undefined1 local_318 [16];
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined8 local_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  double local_248;
  double dStack_240;
  double local_238;
  double local_228;
  double dStack_220;
  double local_218;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined4 local_1c4;
  undefined4 local_198;
  double local_168;
  double local_160;
  double local_158;
  undefined8 local_150;
  double local_148;
  double local_140;
  double local_138;
  undefined8 local_130;
  double local_128;
  double local_120;
  double local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong local_100;
  longlong local_f8;
  undefined8 local_f0;
  ulonglong local_e0;
  double dVar6;
  double dVar8;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  if ((char)param_1[0x43] == '\0') goto LAB_14799a139;
  if ((*(char *)((longlong)param_1 + 0x21a) != '\x01') ||
     (*(char *)((longlong)param_1 + 0x21b) == '\0')) {
    *(undefined8 *)(param_3 + 0x338) = 0;
    *(undefined8 *)(param_3 + 0x340) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_e0 ^ (ulonglong)auStack_3d8);
  }
  uVar12 = *(uint *)(param_3 + 0xd4);
  *(uint *)(param_3 + 0xd4) = uVar12 | 1;
  dVar3 = DAT_14c8463e8;
  *(double *)(param_3 + 0x2d0) = DAT_14c8463e0;
  *(double *)(param_3 + 0x2d8) = dVar3;
  dVar3 = DAT_14c8463d8;
  *(double *)(param_3 + 0x2c0) = DAT_14c8463d0;
  *(double *)(param_3 + 0x2c8) = dVar3;
  uVar34 = DAT_14c8464f0;
  *(undefined8 *)(param_3 + 0x2b0) = DAT_14c8464f0;
  uVar45 = DAT_14c8464e8._4_4_;
  uVar44 = (undefined4)DAT_14c8464e8;
  uVar36 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_3 + 0x2a0) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_3 + 0x2a4) = uVar36;
  *(undefined4 *)(param_3 + 0x2a8) = uVar44;
  *(undefined4 *)(param_3 + 0x2ac) = uVar45;
  if (*(char *)((longlong)param_1 + 0x21d) == '\x01') {
    auVar9 = *(undefined1 (*) [16])(param_1 + 0x44);
    dVar14 = auVar9._0_8_;
    dVar32 = auVar9._8_8_;
    auVar10 = *(undefined1 (*) [16])(param_1 + 0x46);
    dVar18 = auVar10._0_8_;
    dVar15 = auVar10._8_8_;
    local_368 = (double)param_1[0x48];
    uStack_360 = 0;
    dVar3 = (double)param_1[0x49];
    uStack_380 = 0;
    dVar4 = (double)param_1[0x4a];
    auVar11 = *(undefined1 (*) [16])(param_1 + 0x4c);
    dVar17 = auVar11._0_8_;
    uVar47 = auVar11._0_4_;
    uVar48 = auVar11._4_4_;
    dVar24 = auVar11._8_8_;
    auVar11 = *(undefined1 (*) [16])(param_1 + 0x4e);
    dVar21 = auVar11._0_8_;
    uVar45 = auVar11._0_4_;
    uVar46 = auVar11._4_4_;
    dVar22 = auVar11._8_8_;
    lVar43 = -(ulonglong)(9.99999993922529e-09 < ABS(dVar24 - dVar32));
    auVar26._8_4_ = (int)lVar43;
    auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar17 - dVar14));
    auVar26._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
    uVar35 = movmskpd((int)uVar34,auVar26);
    lVar43 = -(ulonglong)(9.99999993922529e-09 < ABS(dVar22 - dVar15));
    auVar11._8_4_ = (int)lVar43;
    auVar11._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar21 - dVar18));
    auVar11._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
    iVar38 = movmskpd((int)param_1,auVar11);
    uVar39 = iVar38 << 2 | uVar35;
    uVar36 = (undefined4)param_1[0x4d];
    uVar44 = (undefined4)((ulonglong)param_1[0x4d] >> 0x20);
    uVar49 = (undefined4)param_1[0x4f];
    uVar50 = (undefined4)((ulonglong)param_1[0x4f] >> 0x20);
    local_388 = dVar3;
    if (uVar39 == 0) {
LAB_1479997b4:
      dVar17 = (double)param_1[0x50];
      uVar51 = SUB84(dVar17,0);
      uVar52 = (undefined4)((ulonglong)dVar17 >> 0x20);
      bVar33 = true;
      if ((dVar17 == local_368) && (!NAN(dVar17) && !NAN(local_368))) {
        if (((double)param_1[0x51] == dVar3) && (!NAN((double)param_1[0x51]) && !NAN(dVar3))) {
          if (((double)param_1[0x52] == dVar4) && (!NAN((double)param_1[0x52]) && !NAN(dVar4)))
          goto LAB_14799a133;
        }
      }
    }
    else {
      lVar43 = -(ulonglong)(9.99999993922529e-09 < ABS(dVar32 + dVar24));
      auVar30._8_4_ = (int)lVar43;
      auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar14 + dVar17));
      auVar30._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
      iVar38 = movmskpd(uVar35,auVar30);
      lVar43 = -(ulonglong)(9.99999993922529e-09 < ABS(dVar15 + dVar22));
      auVar27._8_4_ = (int)lVar43;
      auVar27._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar18 + dVar21));
      auVar27._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
      uVar35 = movmskpd(uVar39,auVar27);
      if ((uVar35 & 0x3fffffff) == 0 && iVar38 == 0) goto LAB_1479997b4;
      dVar21 = dVar21 * -1.0;
      dVar22 = dVar22 * 1.0;
      dVar29 = ((dVar14 * dVar21 * -1.0 - dVar15 * dVar24) + dVar32 * dVar22) -
               dVar17 * dVar18 * 1.0;
      dVar23 = dVar21 * dVar18 * -1.0 + dVar24 * dVar32 + (dVar15 * dVar22 - dVar14 * dVar17 * -1.0)
      ;
      auVar28._8_4_ = SUB84(dVar29,0);
      auVar28._0_8_ =
           ((dVar14 * dVar22 * 1.0 - dVar15 * dVar17) + dVar32 * dVar21) - dVar24 * dVar18 * -1.0;
      auVar28._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
      *(undefined1 (*) [16])(param_3 + 0x2c0) = auVar28;
      auVar20._8_4_ = SUB84(dVar23,0);
      auVar20._0_8_ =
           dVar22 * dVar18 * 1.0 + dVar17 * dVar32 + (dVar15 * dVar21 - dVar14 * dVar24 * 1.0);
      auVar20._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      *(undefined1 (*) [16])(param_3 + 0x2d0) = auVar20;
      uVar47 = (undefined4)param_1[0x4c];
      uVar48 = (undefined4)((ulonglong)param_1[0x4c] >> 0x20);
      uVar36 = (undefined4)param_1[0x4d];
      uVar44 = (undefined4)((ulonglong)param_1[0x4d] >> 0x20);
      uVar45 = (undefined4)param_1[0x4e];
      uVar46 = (undefined4)((ulonglong)param_1[0x4e] >> 0x20);
      uVar49 = (undefined4)param_1[0x4f];
      uVar50 = (undefined4)((ulonglong)param_1[0x4f] >> 0x20);
      uVar51 = (undefined4)param_1[0x50];
      uVar52 = (undefined4)((ulonglong)param_1[0x50] >> 0x20);
      bVar33 = false;
    }
    local_138 = (double)CONCAT44(uVar48,uVar47) + (double)CONCAT44(uVar48,uVar47);
    dVar23 = (double)CONCAT44(uVar44,uVar36) + (double)CONCAT44(uVar44,uVar36);
    local_160 = (double)CONCAT44(uVar46,uVar45) + (double)CONCAT44(uVar46,uVar45);
    dVar22 = (double)CONCAT44(uVar48,uVar47) * local_138;
    local_158 = local_160 * (double)CONCAT44(uVar48,uVar47);
    dVar24 = (double)CONCAT44(uVar48,uVar47) * dVar23;
    dVar29 = (double)CONCAT44(uVar44,uVar36) * dVar23;
    dVar17 = (double)CONCAT44(uVar44,uVar36) * local_160;
    dVar21 = (double)CONCAT44(uVar46,uVar45) * local_160;
    local_138 = local_138 * (double)CONCAT44(uVar50,uVar49);
    dVar23 = dVar23 * (double)CONCAT44(uVar50,uVar49);
    local_160 = local_160 * (double)CONCAT44(uVar50,uVar49);
    local_398._8_4_ = auVar10._8_4_;
    local_398._0_8_ = dVar15;
    local_398._12_4_ = auVar10._12_4_;
    local_168 = 1.0 - (dVar21 + dVar29);
    local_148 = dVar24 - local_160;
    local_128 = local_158 + dVar23;
    local_108 = CONCAT44(uVar52,uVar51);
    local_160 = local_160 + dVar24;
    local_140 = 1.0 - (dVar21 + dVar22);
    local_120 = dVar17 - local_138;
    local_100 = param_1[0x51];
    local_158 = local_158 - dVar23;
    local_138 = local_138 + dVar17;
    local_118 = 1.0 - (dVar29 + dVar22);
    local_f8 = param_1[0x52];
    local_150 = 0;
    local_130 = 0;
    local_110 = 0;
    local_f0 = 0x3ff0000000000000;
    dVar22 = dVar32 + dVar32;
    dVar17 = dVar18 + dVar18;
    dVar21 = dVar14 * (dVar14 + dVar14);
    dVar24 = dVar32 * dVar17;
    dVar23 = (dVar14 + dVar14) * dVar15;
    lVar43 = *(longlong *)(param_1[0x54] + 0xc0);
    if ((lVar43 == 0) || (plVar13 = *(longlong **)(lVar43 + 0x48), plVar13 == (longlong *)0x0)) {
      local_278 = DAT_14c8463e0;
      dStack_270 = DAT_14c8463e8;
      local_288 = DAT_14c8463d0;
      dStack_280 = DAT_14c8463d8;
    }
    else {
      lVar37 = *(longlong *)(*plVar13 + 0x48);
      lVar40 = (longlong)(int)plVar13[1] * 0x10;
      dStack_270 = (double)*(float *)(lVar37 + 0xc + lVar40);
      local_278 = (double)*(float *)(lVar37 + 8 + lVar40);
      dStack_280 = (double)*(float *)(lVar37 + 4 + lVar40);
      local_288 = (double)*(float *)(lVar37 + lVar40);
    }
    dVar31 = 1.0 - (dVar32 * dVar22 + dVar18 * dVar17);
    dVar29 = 1.0 - (dVar18 * dVar17 + dVar21);
    dVar18 = dVar24 - dVar23;
    local_388._0_4_ = SUB84(dVar3,0);
    local_388._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
    uVar36 = (undefined4)local_388;
    uVar44 = local_388._4_4_;
    local_350 = dVar4;
    if ((!bVar33) && ((char)param_1[8] == '\0')) {
      local_348._8_4_ = auVar9._8_4_;
      local_348._0_8_ = dVar18;
      local_348._12_4_ = auVar9._12_4_;
      uStack_330 = 0;
      local_318._8_4_ = auVar9._8_4_;
      local_318._0_8_ = dVar24;
      local_318._12_4_ = auVar9._12_4_;
      uStack_320 = 0;
      if ((lVar43 == 0) || (plVar13 = *(longlong **)(lVar43 + 0x48), plVar13 == (longlong *)0x0)) {
        local_378._8_8_ = DAT_14c8463d8;
        local_378._0_8_ = DAT_14c8463d0;
        local_398._8_8_ = DAT_14c8463e8;
        local_398._0_8_ = DAT_14c8463e0;
      }
      else {
        lVar43 = *(longlong *)(*plVar13 + 0x48);
        lVar37 = (longlong)(int)plVar13[1] * 0x10;
        dVar3 = (double)*(float *)(lVar43 + 0xc + lVar37);
        dVar4 = (double)*(float *)(lVar43 + 4 + lVar37);
        local_398._8_4_ = SUB84(dVar3,0);
        local_398._0_8_ = (double)*(float *)(lVar43 + 8 + lVar37);
        local_398._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        local_378._8_4_ = SUB84(dVar4,0);
        local_378._0_8_ = (double)*(float *)(lVar43 + lVar37);
        local_378._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      }
      dVar4 = *(double *)(param_3 + 0x2d8);
      dVar3 = *(double *)(param_3 + 0x2d8);
      dVar24 = *(double *)(param_3 + 0x2c8);
      dVar18 = *(double *)(param_3 + 0x2c8);
      dVar5 = *(double *)(param_3 + 0x2c0);
      dVar6 = *(double *)(param_3 + 0x2c0);
      dVar7 = *(double *)(param_3 + 0x2d0);
      dVar8 = *(double *)(param_3 + 0x2d0);
      dVar25 = local_288 * dVar8 * 1.0 +
               dStack_270 * dVar18 + dVar6 * local_278 * -1.0 + dVar3 * dStack_280;
      dVar3 = local_278 * dVar8 * -1.0 +
              ((dVar6 * local_288 * -1.0 + dVar3 * dStack_270) - dVar18 * dStack_280);
      local_268._8_4_ = SUB84(dVar25,0);
      local_268._0_8_ =
           dStack_280 * dVar7 * -1.0 +
           local_278 * dVar24 + dVar5 * dStack_270 * 1.0 + dVar4 * local_288;
      local_268._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
      local_258._8_4_ = SUB84(dVar3,0);
      local_258._0_8_ =
           dStack_270 * dVar7 * 1.0 +
           ((dVar5 * dStack_280 * 1.0 + dVar4 * local_278) - dVar24 * local_288);
      local_258._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      local_338 = dVar29;
      local_328 = dVar31;
      FUN_141706cfc(&local_2a0);
      local_2b8 = (undefined4)local_2a0;
      uStack_2b4 = local_2a0._4_4_;
      uStack_2b0 = uStack_298;
      uStack_2ac = uStack_294;
      local_2a8 = local_290;
      local_3b8 = param_3;
      (**(code **)(*(longlong *)param_1[0x55] + 8))((longlong *)param_1[0x55],&local_2b8,0,param_1);
      lVar43 = *(longlong *)(param_3 + 0x358) + 8;
      uVar36 = FUN_144a7484c(lVar43,&local_288);
      lVar37 = -(ulonglong)(9.999999974752427e-07 < ABS((double)local_378._8_8_ - dStack_280));
      auVar10._8_4_ = (int)lVar37;
      auVar10._0_8_ = -(ulonglong)(9.999999974752427e-07 < ABS((double)local_378._0_8_ - local_288))
      ;
      auVar10._12_4_ = (int)((ulonglong)lVar37 >> 0x20);
      uVar35 = movmskpd(uVar36,auVar10);
      lVar37 = -(ulonglong)(9.999999974752427e-07 < ABS((double)local_398._8_8_ - dStack_270));
      auVar9._8_4_ = (int)lVar37;
      auVar9._0_8_ = -(ulonglong)(9.999999974752427e-07 < ABS((double)local_398._0_8_ - local_278));
      auVar9._12_4_ = (int)((ulonglong)lVar37 >> 0x20);
      iVar38 = movmskpd((int)lVar43,auVar9);
      uVar39 = iVar38 << 2 | uVar35;
      uVar36 = (undefined4)local_388;
      uVar44 = local_388._4_4_;
      dVar24 = (double)local_318._0_8_;
      if (uVar39 == 0) {
LAB_147999d36:
        if ((*(char *)((longlong)param_1 + 0x41) != '\0') ||
           (*(char *)((longlong)param_1 + 0x42) == '\x01')) {
          local_2a0 = 0;
          local_290 = 0;
          FUN_144a7484c(&local_2a0,&local_2d8);
          local_3b0 = (undefined1 *)0x0;
          local_3a8 = 0;
          local_3b8 = param_3;
          (**(code **)(*param_1 + 0xa8))(param_1,&DAT_14c8464e0,&local_2d8,0);
          local_288 = DAT_14c8463d0;
          dStack_280 = DAT_14c8463d8;
          local_278 = DAT_14c8463e0;
          dStack_270 = DAT_14c8463e8;
          if ((*(longlong *)(param_1[0x54] + 0xc0) != 0) &&
             (plVar13 = *(longlong **)(*(longlong *)(param_1[0x54] + 0xc0) + 0x48),
             plVar13 != (longlong *)0x0)) {
            lVar43 = *(longlong *)(*plVar13 + 0x48);
            lVar37 = (longlong)(int)plVar13[1] * 0x10;
            dStack_270 = (double)*(float *)(lVar43 + 0xc + lVar37);
            local_278 = (double)*(float *)(lVar43 + 8 + lVar37);
            dStack_280 = (double)*(float *)(lVar43 + 4 + lVar37);
            local_288 = (double)*(float *)(lVar43 + lVar37);
          }
        }
      }
      else {
        lVar43 = -(ulonglong)(9.999999974752427e-07 < ABS((double)local_378._8_8_ + dStack_280));
        auVar16._8_4_ = (int)lVar43;
        auVar16._0_8_ =
             -(ulonglong)(9.999999974752427e-07 < ABS((double)local_378._0_8_ + local_288));
        auVar16._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
        iVar38 = movmskpd(uVar35,auVar16);
        lVar43 = -(ulonglong)(9.999999974752427e-07 < ABS((double)local_398._8_8_ + dStack_270));
        auVar19._8_4_ = (int)lVar43;
        auVar19._0_8_ =
             -(ulonglong)(9.999999974752427e-07 < ABS((double)local_398._0_8_ + local_278));
        auVar19._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
        uVar35 = movmskpd(uVar39,auVar19);
        if ((uVar35 & 0x3fffffff) == 0 && iVar38 == 0) goto LAB_147999d36;
      }
      lVar43 = *(longlong *)(param_1[0x54] + 0xc0);
      dVar31 = local_328;
      dVar29 = local_338;
      dVar18 = (double)local_348._0_8_;
      dVar3 = local_388;
    }
    local_388 = dVar3;
    dVar3 = local_368;
    fVar2 = *(float *)(param_3 + 0x128);
    local_398._0_8_ = 1.0 - (dVar21 + dVar32 * dVar22);
    pdVar42 = (double *)&DAT_14c8464e0;
    pdVar41 = (double *)&DAT_14c8464e0;
    if (lVar43 != 0) {
      plVar13 = *(longlong **)(lVar43 + 0x48);
      pdVar41 = (double *)&DAT_14c8464e0;
      if (plVar13 != (longlong *)0x0) {
        pdVar41 = (double *)((longlong)(int)plVar13[1] * 0x18 + *(longlong *)(*plVar13 + 0x28));
      }
    }
    puVar1 = (undefined8 *)(param_3 + 0x2a0);
    dVar4 = *pdVar41;
    dVar21 = pdVar41[1];
    dVar32 = pdVar41[2] - (double)fVar2;
    FUN_14007522e(local_268,&local_168);
    local_208 = dVar32 * local_228 + dVar21 * local_248 + dVar4 * (double)local_268._0_8_ +
                local_208;
    dStack_200 = dVar32 * dStack_220 + dVar21 * dStack_240 + dVar4 * (double)local_268._8_8_ +
                 dStack_200;
    local_1f8 = dVar4 * (double)local_258._0_8_ + dVar21 * local_238 + dVar32 * local_218 +
                local_1f8;
    local_2e0 = local_350 +
                (dVar23 + dVar24) * dStack_200 + (dVar14 * dVar17 - dVar22 * dVar15) * local_208 +
                (double)local_398._0_8_ * local_1f8 + (double)fVar2;
    local_2e8 = (double)CONCAT44(uVar44,uVar36) +
                dVar29 * dStack_200 + (dVar14 * dVar22 + dVar17 * dVar15) * local_208 +
                dVar18 * local_1f8 + 0.0;
    local_2f0 = dVar3 + (dVar14 * dVar22 - dVar17 * dVar15) * dStack_200 + dVar31 * local_208 +
                        (dVar22 * dVar15 + dVar14 * dVar17) * local_1f8 + 0.0;
    (**(code **)(*param_1 + 0x88))(param_1,&local_2d8);
    if ((*(longlong *)(param_1[0x54] + 0xc0) != 0) &&
       (plVar13 = *(longlong **)(*(longlong *)(param_1[0x54] + 0xc0) + 0x48),
       plVar13 != (longlong *)0x0)) {
      pdVar42 = (double *)((longlong)(int)plVar13[1] * 0x18 + *(longlong *)(*plVar13 + 0x28));
    }
    local_2f8 = local_2c8 - pdVar42[2];
    local_300 = local_2d0 - pdVar42[1];
    local_308 = local_2d8 - *pdVar42;
    (**(code **)(*param_1 + 0x90))(param_1);
    *(undefined8 *)(param_3 + 0x2b0) = local_258._0_8_;
    *puVar1 = local_268._0_8_;
    *(undefined8 *)(param_3 + 0x2a8) = local_268._8_8_;
    if ((((bool)(bVar33 & local_368 - (double)param_1[0x50] == 0.0)) &&
        (local_388 - (double)param_1[0x51] == 0.0)) && (!NAN(local_388 - (double)param_1[0x51]))) {
      *puVar1 = 0;
      *(undefined8 *)(param_3 + 0x2a8) = 0;
    }
    memset(local_268,0,0x100);
    local_198 = 0xffffffff;
    local_1c4 = 0xffffffff;
    local_268._4_4_ = 0x3f800000;
    local_3a8 = 0;
    local_3b8 = param_3;
    local_3b0 = local_268;
    (**(code **)(*param_1 + 0xa8))(param_1,puVar1,&local_288,1);
    if (*(char *)((longlong)param_1 + 0x219) == '\x01') {
      *(undefined1 *)(param_3 + 0x298) = 1;
    }
  }
LAB_14799a133:
  *(uint *)(param_3 + 0xd4) = uVar12;
LAB_14799a139:
  if ((local_e0 ^ (ulonglong)auStack_3d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14799a158 FUN_14799a158 body=135 status=ok
// SIG undefined FUN_14799a158(void)

void FUN_14799a158(longlong *param_1,float param_2,undefined8 param_3,longlong param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 in_RDX;
  
  if ((((1e-06 <= param_2) && ((int)param_3 < *(int *)((longlong)param_1 + 0x94))) &&
      ((char)param_1[0xf] == '\x01')) && (*(char *)(param_1[0x54] + 9) == '\0')) {
    uVar1 = *(undefined1 *)(param_4 + 0x12e);
    *(undefined1 *)(param_4 + 0x12e) = 1;
    iVar2 = *(int *)(param_4 + 0x1c);
    if (iVar2 != 0) {
      if (iVar2 == 3) {
        (**(code **)(*param_1 + 0x48))(0x358637bd,in_RDX,param_3,param_4);
      }
      else if (iVar2 == 1) {
        (**(code **)(*param_1 + 0x40))(0x358637bd,in_RDX,param_3,param_4);
      }
      else {
        (**(code **)(*param_1 + 200))(0x358637bd,0,param_4,0);
      }
    }
    *(undefined1 *)(param_4 + 0x12e) = uVar1;
  }
  return;
}



// FUNCTION 14799a1e0 FUN_14799a1e0 body=3170 status=ok
// SIG undefined FUN_14799a1e0(void)

void FUN_14799a1e0(double *param_1,undefined8 param_2,int param_3,double *param_4)

{
  double *pdVar1;
  undefined4 *puVar2;
  double dVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  double dVar8;
  double *pdVar9;
  longlong lVar10;
  double *pdVar11;
  undefined8 uVar12;
  bool bVar13;
  byte bVar14;
  int iVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  double dVar25;
  float fVar26;
  undefined1 auStack_518 [32];
  double *local_4f8;
  double *local_4f0;
  double *local_4e8;
  int local_4e0;
  byte local_4d8;
  double *local_4d0;
  uint local_4c8;
  undefined4 local_4c4;
  double *local_4c0;
  double *local_4b8;
  double *local_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  double local_498;
  double dStack_490;
  undefined1 local_480 [24];
  undefined8 local_468;
  undefined8 uStack_460;
  double local_458;
  double local_3f8;
  double local_3f0;
  double local_3e8;
  double local_3e0;
  double local_3d8;
  double local_3d0;
  double local_3b0;
  double local_3a8;
  double dStack_3a0;
  undefined4 local_398;
  undefined1 local_394;
  double local_390;
  double dStack_388;
  double local_380;
  double dStack_378;
  double local_370;
  uint local_368;
  byte local_360 [4];
  undefined8 local_35c;
  undefined1 local_350 [4];
  undefined4 local_34c;
  undefined4 local_2ac;
  undefined4 local_280;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double dStack_230;
  double local_228;
  double local_218;
  undefined4 local_210;
  undefined1 local_208 [64];
  undefined1 local_1c8 [24];
  undefined1 local_1b0 [96];
  double local_150;
  double local_148;
  double dStack_140;
  undefined4 local_138;
  undefined1 local_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  double local_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  ulonglong local_f0;
  undefined8 uVar20;
  
  fVar26 = (float)param_2;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_518;
  if (1e-06 <= fVar26) {
    if (*(char *)((longlong)param_1[0x54] + 8) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_518);
    }
    *(undefined1 *)((longlong)param_4 + 0x121) = 0;
    if (1e-06 <= fVar26) {
      pdVar11 = param_4 + 0x26;
      local_4c0 = param_4 + 0x28;
      local_4b0 = param_4 + 0x3f;
      pdVar1 = param_4 + 0x43;
      local_4b8 = param_4 + 0x40;
      local_4c4 = 0;
      local_4c8 = 0;
      uVar18 = (int)((ulonglong)param_2 >> 0x20);
LAB_14799a463:
      do {
        if (*(int *)((longlong)param_1 + 0x94) <= param_3) break;
        iVar15 = param_3 + 1;
        *(undefined1 *)((longlong)param_4 + 0x121) = 0;
        uVar20 = (**(code **)((longlong)*param_1 + 0x108))(param_1,fVar26,iVar15);
        fVar16 = (float)uVar20;
        if ((*(longlong *)((longlong)param_1[0x54] + 0xc0) == 0) ||
           (plVar4 = *(longlong **)(*(longlong *)((longlong)param_1[0x54] + 0xc0) + 0x48),
           plVar4 == (longlong *)0x0)) {
          local_f8 = DAT_14c8464f0;
          local_108._0_4_ = (undefined4)DAT_14c8464e0;
          local_108._4_4_ = DAT_14c8464e0._4_4_;
          uStack_100 = (undefined4)DAT_14c8464e8;
          uStack_fc = DAT_14c8464e8._4_4_;
        }
        else {
          local_f8 = *(double *)
                      (*(longlong *)(*plVar4 + 0x28) + 0x10 + (longlong)(int)plVar4[1] * 0x18);
          puVar2 = (undefined4 *)(*(longlong *)(*plVar4 + 0x28) + (longlong)(int)plVar4[1] * 0x18);
          local_108._0_4_ = *puVar2;
          local_108._4_4_ = puVar2[1];
          uStack_100 = puVar2[2];
          uStack_fc = puVar2[3];
        }
        local_210 = *(undefined4 *)(param_4 + 0x27);
        local_218 = *pdVar11;
        memcpy(local_208,local_4c0,0xb8);
        local_150 = param_4[0x3f];
        local_148 = *local_4b8;
        dStack_140 = local_4b8[1];
        local_138 = *(undefined4 *)(param_4 + 0x42);
        local_134 = *(undefined1 *)((longlong)param_4 + 0x214);
        local_110 = param_4[0x47];
        local_130 = *(undefined4 *)pdVar1;
        uStack_12c = *(undefined4 *)((longlong)param_4 + 0x21c);
        uStack_128 = *(undefined4 *)(param_4 + 0x44);
        uStack_124 = *(undefined4 *)((longlong)param_4 + 0x224);
        local_120 = *(undefined4 *)(param_4 + 0x45);
        uStack_11c = *(undefined4 *)((longlong)param_4 + 0x22c);
        uStack_118 = *(undefined4 *)(param_4 + 0x46);
        uStack_114 = *(undefined4 *)((longlong)param_4 + 0x234);
        if (*(char *)(param_4 + 0x1a) == '\x01') {
          param_4[0x16] = param_4[0x19];
          *(undefined4 *)(param_4 + 0x14) = *(undefined4 *)(param_4 + 0x17);
          *(undefined4 *)((longlong)param_4 + 0xa4) = *(undefined4 *)((longlong)param_4 + 0xbc);
          *(undefined4 *)(param_4 + 0x15) = *(undefined4 *)(param_4 + 0x18);
          *(undefined4 *)((longlong)param_4 + 0xac) = *(undefined4 *)((longlong)param_4 + 0xc4);
          *(undefined1 *)(param_4 + 0x1a) = 0;
        }
        (**(code **)((longlong)*param_1 + 0xa0))(param_1,param_4);
        param_4[7] = 0.0;
        if ((*(char *)(param_1 + 0x28) == '\0') && (*(char *)((longlong)param_1 + 0x141) == '\0')) {
          uVar17 = (**(code **)((longlong)*param_1 + 0x130))(param_1,param_4);
          local_4f8 = (double *)CONCAT44(local_4f8._4_4_,uVar17);
          local_4f0 = param_4;
          (**(code **)((longlong)*param_1 + 0x110))
                    (param_1,fVar16,*(undefined4 *)(param_1 + 0x14),0);
        }
        fVar26 = fVar26 - fVar16;
        FUN_14799aec2(param_1,fVar16,param_4);
        cVar6 = (**(code **)((longlong)*param_1 + 0x268))(param_1);
        if (cVar6 != '\0') {
          fVar26 = fVar16 + fVar26;
          dVar25 = *param_1;
LAB_14799ac3d:
          (**(code **)((longlong)dVar25 + 0x38))(param_1,fVar26,param_3,param_4);
          goto LAB_14799a274;
        }
        local_228 = param_4[0x16];
        local_238 = param_4[0x14];
        dStack_230 = param_4[0x15];
        dVar25 = (double)fVar16;
        local_240 = local_228 * dVar25;
        local_248 = dStack_230 * dVar25;
        local_250 = local_238 * dVar25;
        bVar13 = false;
        if ((ABS(local_250) <= 9.999999747378752e-05) && (ABS(local_248) <= 9.999999747378752e-05))
        {
          bVar13 = ABS(local_240) <= 9.999999747378752e-05;
        }
        local_368 = 0;
        local_360[0] = local_360[0] & 0xf8;
        local_35c = 0;
        memset(local_350,0,0x100);
        local_280 = 0xffffffff;
        local_2ac = 0xffffffff;
        local_34c = 0x3f800000;
        fVar19 = 0.0;
        uVar17 = 0;
        if (bVar13 == false) {
          local_4f8 = param_4;
          (**(code **)((longlong)*param_1 + 0x58))(param_1,&local_238,uVar20);
          cVar6 = (**(code **)((longlong)*param_1 + 0x268))(param_1,param_4);
          if (cVar6 != '\0') {
            fVar19 = (float)SQRT(local_240 * local_240 +
                                 local_250 * local_250 + local_248 * local_248);
            if (0.0001 < fVar19) {
              pdVar11 = (double *)&DAT_14c8464e0;
              if ((*(longlong *)((longlong)param_1[0x54] + 0xc0) != 0) &&
                 (plVar4 = *(longlong **)(*(longlong *)((longlong)param_1[0x54] + 0xc0) + 0x48),
                 plVar4 != (longlong *)0x0)) {
                pdVar11 = (double *)
                          ((longlong)(int)plVar4[1] * 0x18 + *(longlong *)(*plVar4 + 0x28));
              }
              dVar8 = pdVar11[1] - (double)CONCAT44(uStack_fc,uStack_100);
              dVar25 = *pdVar11 - (double)CONCAT44(local_108._4_4_,(undefined4)local_108);
              fVar19 = (float)SQRT(dVar25 * dVar25 + dVar8 * dVar8) / fVar19;
              fVar24 = 1.0;
              if (fVar19 <= 1.0) {
                fVar24 = fVar19;
              }
              fVar26 = fVar26 + fVar16 * (1.0 - fVar24);
            }
            dVar25 = *param_1;
            param_3 = iVar15;
            goto LAB_14799ac3d;
          }
          fVar19 = fVar26;
          uVar17 = uVar18;
          if ((local_368 & 1) == 0) goto LAB_14799a6f1;
          memcpy(pdVar11,local_360,0x110);
        }
        else {
LAB_14799a6f1:
          if ((*(longlong *)((longlong)param_1[0x54] + 0xc0) == 0) ||
             (plVar4 = *(longlong **)(*(longlong *)((longlong)param_1[0x54] + 0xc0) + 0x48),
             plVar4 == (longlong *)0x0)) {
            local_458 = DAT_14c8464f0;
            uVar18 = (undefined4)DAT_14c8464e0;
            uVar21 = DAT_14c8464e0._4_4_;
            uVar22 = (undefined4)DAT_14c8464e8;
            uVar23 = DAT_14c8464e8._4_4_;
          }
          else {
            local_458 = *(double *)
                         (*(longlong *)(*plVar4 + 0x28) + 0x10 + (longlong)(int)plVar4[1] * 0x18);
            puVar2 = (undefined4 *)(*(longlong *)(*plVar4 + 0x28) + (longlong)(int)plVar4[1] * 0x18)
            ;
            uVar18 = *puVar2;
            uVar21 = puVar2[1];
            uVar22 = puVar2[2];
            uVar23 = puVar2[3];
          }
          local_468 = (double)CONCAT44(uVar21,uVar18);
          uStack_460 = CONCAT44(uVar23,uVar22);
          local_4f0 = (double *)0x0;
          local_4f8 = param_4;
          (**(code **)((longlong)*param_1 + 0xd8))(param_1,&local_468,pdVar11);
          fVar26 = fVar19;
          uVar18 = uVar17;
        }
        cVar6 = (**(code **)((longlong)*param_1 + 0x188))(param_1,param_4);
        pdVar9 = (double *)0x0;
        if (cVar6 != '\0') {
          if ((*(uint *)(param_4 + 0x26) & 3) == 3) {
LAB_14799a90a:
            cVar6 = (**(code **)((longlong)*param_1 + 0x1a8))(param_1,&local_218,pdVar11);
            if (cVar6 != '\0') {
              local_4f8 = (double *)CONCAT44(local_4f8._4_4_,fVar16);
              (**(code **)((longlong)*param_1 + 0x1a0))(param_1,local_1b0,local_1c8,&local_108);
              cVar6 = (**(code **)((longlong)*param_1 + 0x278))(param_1,param_4);
              if (cVar6 != '\0') {
                local_4f8 = &local_250;
                local_4f0 = (double *)&local_108;
                local_4e8 = param_4;
                (**(code **)((longlong)*param_1 + 0x1b0))
                          (param_1,param_3 + 1,CONCAT44(uVar18,fVar26),uVar20);
              }
              goto LAB_14799a274;
            }
            (**(code **)((longlong)*param_1 + 0x1b8))(param_1,param_4);
            dVar8 = (double)FUN_14479d2ce(pdVar1);
            param_4[0x67] = dVar8;
            pdVar9 = local_4b0;
            dVar8 = (double)FUN_14485cccc(local_4b0);
            param_4[0x68] = dVar8;
          }
          else if ((fVar26 <= 0.0) && ((*(byte *)((longlong)param_4 + 0x1ed) & 2) != 0)) {
            memcpy(&local_468,local_4c0,0xb8);
            local_3b0 = param_4[0x3f];
            local_3a8 = *local_4b8;
            dStack_3a0 = local_4b8[1];
            local_398 = *(undefined4 *)(param_4 + 0x42);
            local_394 = *(undefined1 *)((longlong)param_4 + 0x214);
            local_370 = param_4[0x47];
            local_390 = *pdVar1;
            dStack_388 = param_4[0x44];
            local_380 = param_4[0x45];
            dStack_378 = param_4[0x46];
            local_3d0 = local_3e8 + 2.4000000953674316;
            local_3d8 = local_3f0 + 0.0;
            local_3e0 = local_3f8 + 0.0;
            (**(code **)((longlong)*param_1 + 0x140))(param_1,local_480,&local_468);
            if ((*(longlong *)((longlong)param_1[0x54] + 0xc0) == 0) ||
               (plVar4 = *(longlong **)(*(longlong *)((longlong)param_1[0x54] + 0xc0) + 0x48),
               plVar4 == (longlong *)0x0)) {
              local_498 = DAT_14c8463e0;
              dStack_490 = DAT_14c8463e8;
              local_4a8 = (double)CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
              uStack_4a0 = (double)CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
            }
            else {
              lVar5 = *(longlong *)(*plVar4 + 0x48);
              lVar10 = (longlong)(int)plVar4[1] * 0x10;
              dStack_490 = (double)*(float *)(lVar5 + 0xc + lVar10);
              local_498 = (double)*(float *)(lVar5 + 8 + lVar10);
              uStack_4a0 = (double)*(float *)(lVar5 + 4 + lVar10);
              local_4a8 = (double)*(float *)(lVar5 + lVar10);
            }
            pdVar9 = param_1;
            local_4f8 = param_4;
            (**(code **)((longlong)*param_1 + 0x148))(param_1,local_480,&local_468);
            *(undefined1 *)(param_4 + 0x13) = 1;
          }
          if (((~*(uint *)pdVar11 & 3) != 0) && ((*(byte *)((longlong)param_4 + 0x1ed) & 2) == 0)) {
            bVar14 = bVar13 | *(byte *)((longlong)param_4 + 0x121);
            bVar7 = (byte)local_4c4;
            local_4c4 = (undefined4)CONCAT71((int7)((ulonglong)pdVar9 >> 8),1);
            if (((~bVar7 | bVar14) & 1) != 0) {
              local_4e8 = (double *)CONCAT44(local_4e8._4_4_,fVar16);
              local_4f0 = (double *)CONCAT44(local_4f0._4_4_,fVar26);
              local_4f8 = (double *)&local_108;
              local_4e0 = iVar15;
              local_4d8 = bVar14;
              local_4d0 = param_4;
              cVar6 = (**(code **)((longlong)*param_1 + 0x1d8))(param_1,&local_218,local_4c0);
              if (cVar6 != '\0') goto LAB_14799a274;
            }
          }
          cVar6 = (**(code **)((longlong)*param_1 + 0x278))(param_1,param_4);
          if ((((cVar6 != '\0') && (*(char *)((longlong)param_4 + 0x121) == '\0')) &&
              (*(char *)(param_1 + 0x28) == '\0')) &&
             ((1e-06 <= fVar16 && (*(char *)((longlong)param_1 + 0x141) == '\0')))) {
            pdVar9 = (double *)&DAT_14c8464e0;
            if (*(longlong *)((longlong)param_1[0x54] + 0xc0) != 0) {
              plVar4 = *(longlong **)(*(longlong *)((longlong)param_1[0x54] + 0xc0) + 0x48);
              pdVar9 = (double *)&DAT_14c8464e0;
              if (plVar4 != (longlong *)0x0) {
                pdVar9 = (double *)((longlong)(int)plVar4[1] * 0x18 + *(longlong *)(*plVar4 + 0x28))
                ;
              }
            }
            dVar8 = pdVar9[1];
            dVar3 = pdVar9[2];
            dVar25 = 1.0 / dVar25;
            param_4[0x14] =
                 dVar25 * (*pdVar9 - (double)CONCAT44(local_108._4_4_,(undefined4)local_108));
            param_4[0x15] = (dVar8 - (double)CONCAT44(uStack_fc,uStack_100)) * dVar25;
            param_4[0x16] = (dVar3 - local_f8) * dVar25;
            (**(code **)((longlong)*param_1 + 0xa0))(param_1,param_4);
          }
          pdVar9 = (double *)&DAT_14c8464e0;
          if (*(longlong *)((longlong)param_1[0x54] + 0xc0) != 0) {
            plVar4 = *(longlong **)(*(longlong *)((longlong)param_1[0x54] + 0xc0) + 0x48);
            pdVar9 = (double *)&DAT_14c8464e0;
            if (plVar4 != (longlong *)0x0) {
              pdVar9 = (double *)((longlong)(int)plVar4[1] * 0x18 + *(longlong *)(*plVar4 + 0x28));
            }
          }
          if ((*pdVar9 == (double)CONCAT44(local_108._4_4_,(undefined4)local_108)) &&
             (!NAN(*pdVar9) && !NAN((double)CONCAT44(local_108._4_4_,(undefined4)local_108)))) {
            if ((pdVar9[1] == (double)CONCAT44(uStack_fc,uStack_100)) &&
               (!NAN(pdVar9[1]) && !NAN((double)CONCAT44(uStack_fc,uStack_100)))) {
              if ((pdVar9[2] == local_f8) && (!NAN(pdVar9[2]) && !NAN(local_f8))) break;
            }
          }
          param_3 = param_3 + 1;
          if (fVar26 < 1e-06) break;
          goto LAB_14799a463;
        }
        if ((*(uint *)(param_4 + 0x26) & 3) == 3) goto LAB_14799a90a;
        local_468 = 0.0;
        uStack_460 = 0;
        local_458 = -1.0;
        if ((local_4c8 & 1) == 0) {
          local_4f8 = (double *)&local_468;
          local_4f0 = param_4;
          (**(code **)((longlong)*param_1 + 400))(param_1,&local_4a8,&local_108);
        }
        else {
          local_498 = DAT_14c8464f0;
          local_4a8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_4a0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        }
        if (((((local_4a8 == 0.0) && (!NAN(local_4a8))) && (uStack_4a0 == 0.0)) &&
            ((!NAN(uStack_4a0) && (local_498 == 0.0)))) && (!NAN(local_498))) break;
        uVar12 = FUN_1479a1d1c(param_1[0x54],&local_108);
        *(undefined1 *)((longlong)param_4 + 0x121) = 0;
        dVar25 = 1.0 / dVar25;
        param_4[0x14] = dVar25 * local_4a8;
        param_4[0x15] = uStack_4a0 * dVar25;
        param_4[0x16] = local_498 * dVar25;
        fVar26 = fVar16 + fVar26;
        local_4c8 = (uint)CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
        uVar18 = (int)((ulonglong)uVar20 >> 0x20);
        param_3 = iVar15;
      } while (1e-06 <= fVar26);
    }
    cVar6 = (**(code **)((longlong)*param_1 + 0x278))(param_1,param_4);
    if (cVar6 != '\0') {
      (**(code **)((longlong)*param_1 + 0xa0))(param_1,param_4);
    }
  }
LAB_14799a274:
  if ((local_f0 ^ (ulonglong)auStack_518) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14799aec2 FUN_14799aec2 body=459 status=ok
// SIG undefined FUN_14799aec2(void)

void FUN_14799aec2(longlong *param_1,float param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 <= 0.0) || ((char)param_1[0x28] == '\0')) {
    dVar1 = *(double *)(param_3 + 0xb0);
    uVar5 = SUB84(dVar1,0);
    cVar4 = *(char *)((longlong)param_1 + 0x141);
    uVar6 = (undefined4)((ulonglong)dVar1 >> 0x20);
    if (cVar4 == '\x01') {
      *(longlong *)(param_3 + 0xb0) = param_1[0x2e];
      uVar5 = *(undefined4 *)((longlong)param_1 + 0x164);
      lVar3 = param_1[0x2d];
      uVar6 = *(undefined4 *)((longlong)param_1 + 0x16c);
      *(int *)(param_3 + 0xa0) = (int)param_1[0x2c];
      *(undefined4 *)(param_3 + 0xa4) = uVar5;
      *(int *)(param_3 + 0xa8) = (int)lVar3;
      *(undefined4 *)(param_3 + 0xac) = uVar6;
      uVar5 = (undefined4)*(undefined8 *)(param_3 + 0xb0);
      uVar6 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0xb0) >> 0x20);
    }
    dVar2 = (double)CONCAT44(uVar6,uVar5);
    if (*(char *)((longlong)param_1 + 0x143) == '\x01') {
      *(undefined8 *)(param_3 + 200) = *(undefined8 *)(param_3 + 0xb0);
      *(undefined8 *)(param_3 + 0xb8) = *(undefined8 *)(param_3 + 0xa0);
      *(undefined8 *)(param_3 + 0xc0) = *(undefined8 *)(param_3 + 0xa8);
      *(double *)(param_3 + 0xa0) = (double)param_1[0x29] + *(double *)(param_3 + 0xa0);
      *(double *)(param_3 + 0xa8) = (double)param_1[0x2a] + *(double *)(param_3 + 0xa8);
      dVar2 = (double)CONCAT44(uVar6,uVar5) + (double)param_1[0x2b];
      *(double *)(param_3 + 0xb0) = dVar2;
      *(undefined1 *)(param_3 + 0xd0) = 1;
      cVar4 = '\x01';
    }
    if (cVar4 != '\0') {
      dVar2 = dVar2 - dVar1;
      if ((dVar2 != 0.0) || (NAN(dVar2))) {
        cVar4 = (**(code **)(*param_1 + 0x278))(param_1,param_3);
        if (cVar4 != '\0') {
          if (*(char *)((longlong)param_1 + 0x144) == '\0') {
            param_2 = param_2 * *(float *)((longlong)param_1 + 0x8c);
            if (param_2 <= 1e-08) {
              param_2 = 1e-08;
            }
            dVar1 = (double)param_2;
          }
          else {
            dVar1 = 9.99999993922529e-09;
          }
          if (dVar1 < dVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
          }
        }
      }
    }
  }
  else {
    local_58 = *(undefined4 *)(param_3 + 0x280);
    uStack_54 = *(undefined4 *)(param_3 + 0x284);
    uStack_50 = *(undefined4 *)(param_3 + 0x288);
    uStack_4c = *(undefined4 *)(param_3 + 0x28c);
    uVar5 = (undefined4)*(undefined8 *)(param_3 + 0x290);
    uVar6 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x290) >> 0x20);
    cVar4 = (**(code **)(*param_1 + 0x268))(param_1,param_3);
    if (cVar4 != '\0') {
      uVar5 = (undefined4)*(undefined8 *)(param_3 + 0xb0);
      uVar6 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0xb0) >> 0x20);
    }
    *(undefined4 *)(param_3 + 0xa0) = local_58;
    *(undefined4 *)(param_3 + 0xa4) = uStack_54;
    *(undefined4 *)(param_3 + 0xa8) = uStack_50;
    *(undefined4 *)(param_3 + 0xac) = uStack_4c;
    *(ulonglong *)(param_3 + 0xb0) = CONCAT44(uVar6,uVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14799b0b4 FUN_14799b0b4 body=5956 status=ok
// SIG undefined FUN_14799b0b4(void)

void FUN_14799b0b4(longlong *param_1,float param_2,int param_3,double *param_4)

{
  double *pdVar1;
  double *pdVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong *plVar9;
  double dVar10;
  bool bVar11;
  float fVar12;
  char cVar13;
  uint uVar14;
  longlong lVar15;
  double *pdVar16;
  longlong lVar17;
  undefined8 *_Dst;
  undefined4 uVar18;
  float fVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  float fVar32;
  undefined1 auStack_468 [32];
  double *local_448;
  double *local_440;
  double *local_438;
  char local_425;
  int local_424;
  double local_420;
  double *local_418;
  double local_410;
  double local_408;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  double local_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  double local_3d8;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  double local_3b8;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  double local_398;
  uint local_388;
  uint uStack_384;
  uint uStack_380;
  uint uStack_37c;
  undefined8 local_378;
  undefined4 local_2d4;
  undefined4 local_2a8;
  undefined8 local_278;
  undefined8 uStack_270;
  double local_268;
  undefined8 local_260;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  undefined4 local_1bc;
  byte local_1b3;
  undefined4 local_190;
  double local_160;
  double local_158;
  double local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_468;
  if (1e-06 <= param_2) {
    (**(code **)(*param_1 + 0x1e0))(0x358637bd,&local_108);
    local_f8 = 0.0;
    local_425 = (**(code **)(*param_1 + 0x1f8))(param_1);
    if (1e-06 <= param_2) {
      pdVar2 = param_4 + 0x14;
      local_418 = param_4 + 0x17;
      pdVar1 = param_4 + 5;
      do {
        if (*(int *)((longlong)param_1 + 0x94) <= param_3) break;
        local_424 = param_3 + 1;
        uVar20 = (**(code **)(*param_1 + 0x108))(param_1);
        fVar19 = (float)uVar20;
        if ((*(longlong *)(param_1[0x54] + 0xc0) == 0) ||
           (plVar9 = *(longlong **)(*(longlong *)(param_1[0x54] + 0xc0) + 0x48),
           plVar9 == (longlong *)0x0)) {
          local_420 = DAT_14c8464f0;
          local_118 = DAT_14c8463e0;
          dStack_110 = DAT_14c8463e8;
          local_128 = (double)CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
          uStack_120 = (double)CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
          uVar14 = (uint)DAT_14c8464e8;
          uVar21 = DAT_14c8464e8._4_4_;
          uVar22 = (uint)DAT_14c8464e0;
          uVar23 = DAT_14c8464e0._4_4_;
        }
        else {
          lVar15 = (longlong)(int)plVar9[1];
          lVar17 = *(longlong *)(*plVar9 + 0x28);
          local_420 = *(double *)(lVar17 + 0x10 + lVar15 * 0x18);
          uVar4 = *(undefined8 *)(lVar17 + lVar15 * 0x18);
          uVar5 = *(undefined8 *)(lVar17 + 8 + lVar15 * 0x18);
          lVar17 = *(longlong *)(*plVar9 + 0x48);
          lVar15 = lVar15 * 0x10;
          dStack_110 = (double)*(float *)(lVar17 + 0xc + lVar15);
          local_118 = (double)*(float *)(lVar17 + 8 + lVar15);
          uStack_120 = (double)*(float *)(lVar17 + 4 + lVar15);
          local_128 = (double)*(float *)(lVar17 + lVar15);
          uVar14 = (uint)uVar5;
          uVar21 = (uint)((ulonglong)uVar5 >> 0x20);
          uVar22 = (uint)uVar4;
          uVar23 = (uint)((ulonglong)uVar4 >> 0x20);
        }
        *(undefined1 *)((longlong)param_4 + 0x121) = 0;
        if (*(char *)(param_4 + 0x1a) == '\x01') {
          param_4[0x16] = local_418[2];
          uVar18 = *(undefined4 *)((longlong)local_418 + 4);
          uVar25 = *(undefined4 *)(local_418 + 1);
          uVar26 = *(undefined4 *)((longlong)local_418 + 0xc);
          *(undefined4 *)pdVar2 = *(undefined4 *)local_418;
          *(undefined4 *)((longlong)param_4 + 0xa4) = uVar18;
          *(undefined4 *)(param_4 + 0x15) = uVar25;
          *(undefined4 *)((longlong)param_4 + 0xac) = uVar26;
          *(undefined1 *)(param_4 + 0x1a) = 0;
        }
        dVar31 = param_4[0x14];
        dVar6 = param_4[0x15];
        dVar7 = param_4[0x16];
        uVar18 = (**(code **)(*param_1 + 0x130))(param_1,param_4);
        if (((char)param_1[0x28] == '\0') && (*(char *)((longlong)param_1 + 0x141) == '\0')) {
          local_378 = param_4[7];
          local_388 = SUB84(*pdVar1,0);
          uStack_384 = (uint)((ulonglong)*pdVar1 >> 0x20);
          uStack_380 = SUB84(param_4[6],0);
          uStack_37c = (uint)((ulonglong)param_4[6] >> 0x20);
          *(undefined4 *)pdVar1 = local_108;
          *(undefined4 *)((longlong)param_4 + 0x2c) = uStack_104;
          *(undefined4 *)(param_4 + 6) = uStack_100;
          *(undefined4 *)((longlong)param_4 + 0x34) = uStack_fc;
          param_4[7] = local_f8;
          param_4[0x16] = 0.0;
          local_448 = (double *)CONCAT44(local_448._4_4_,uVar18);
          local_440 = param_4;
          (**(code **)(*param_1 + 0x110))(param_1);
          param_4[0x16] = dVar7;
          param_4[7] = local_378;
          *pdVar1 = (double)CONCAT44(uStack_384,local_388);
          param_4[6] = (double)CONCAT44(uStack_37c,uStack_380);
        }
        local_138 = (double)*(float *)((longlong)param_1 + 0x8c);
        local_148 = 0;
        uStack_140 = 0;
        fVar27 = *(float *)((longlong)param_4[0x6b] + 0x28);
        fVar32 = fVar19;
        if (fVar27 <= 0.0) {
          bVar11 = false;
        }
        else {
          fVar12 = fVar27;
          if (fVar19 <= fVar27) {
            fVar12 = fVar19;
          }
          if (*(char *)((longlong)param_1 + 0xe9) == '\0') {
            fVar32 = 0.0;
            if (0.0 <= fVar19 - fVar12) {
              fVar32 = fVar19 - fVar12;
            }
          }
          *(float *)((longlong)param_4[0x6b] + 0x28) = fVar27 - fVar12;
          if (*(float *)((longlong)param_4[0x6b] + 0x28) <= 0.0) {
            (**(code **)(*(longlong *)param_1[0x55] + 0x28))
                      ((longlong *)param_1[0x55],param_1,param_4);
            bVar11 = true;
          }
          else {
            bVar11 = false;
          }
        }
        param_2 = param_2 - fVar19;
        local_448 = (double *)CONCAT44(local_448._4_4_,fVar32);
        local_440 = param_4;
        (**(code **)(*param_1 + 0x208))(param_1,&local_388,pdVar2,&local_148);
        param_4[0x16] = local_378;
        *pdVar2 = (double)CONCAT44(uStack_384,local_388);
        param_4[0x15] = (double)CONCAT44(uStack_37c,uStack_380);
        dVar28 = param_4[0x16];
        uVar25 = SUB84(dVar28,0);
        uVar26 = (undefined4)((ulonglong)dVar28 >> 0x20);
        local_408 = (double)CONCAT44(uVar21,uVar14);
        local_410 = (double)CONCAT44(uVar23,uVar22);
        if (((DAT_14c7613f8 == 0) || (dVar7 <= 0.0)) || (0.0 < dVar28)) {
          dVar8 = param_4[0x14];
          dVar24 = param_4[0x15];
        }
        else {
          dVar8 = param_4[0x14];
          dVar24 = param_4[0x15];
          if (*(int *)(param_4 + 0x4f) < (int)param_1[0x1e]) {
            dVar30 = 1.0 / (double)fVar19;
            dVar28 = (dVar28 - dVar7) * dVar30;
            if (1e-08 < ABS(dVar28)) {
              fVar27 = (float)(-dVar7 / dVar28);
              if ((0.0001 <= fVar27) && (fVar27 < fVar19)) {
                dVar24 = (dVar24 - dVar6) * dVar30 * (double)fVar27 + dVar6;
                dVar8 = (dVar8 - dVar31) * dVar30 * (double)fVar27 + dVar31;
                param_4[0x14] = dVar8;
                param_4[0x15] = dVar24;
                param_4[0x16] = 0.0;
                param_2 = param_2 + (fVar19 - fVar27);
                *(int *)(param_4 + 0x4f) = *(int *)(param_4 + 0x4f) + 1;
                uVar25 = 0;
                uVar26 = 0;
                local_424 = param_3;
                uVar20 = (ulonglong)(uint)fVar27;
              }
            }
          }
        }
        fVar19 = (float)uVar20;
        dVar30 = ((double)CONCAT44(uVar26,uVar25) + dVar7) * 0.5;
        dVar24 = (dVar24 + dVar6) * 0.5;
        dVar28 = (dVar8 + dVar31) * 0.5;
        dVar8 = (double)fVar19;
        local_150 = dVar30 * dVar8;
        local_158 = dVar24 * dVar8;
        local_160 = dVar28 * dVar8;
        if ((bVar11) && (*(char *)((longlong)param_1 + 0xe9) == '\0')) {
          fVar27 = 0.0;
          if (0.0 <= fVar19 - fVar32) {
            fVar27 = fVar19 - fVar32;
          }
          dVar29 = (double)fVar27;
          dVar10 = (double)fVar32;
          local_150 = dVar30 * dVar10 + dVar7 * dVar29;
          local_158 = dVar24 * dVar10 + dVar6 * dVar29;
          local_160 = dVar28 * dVar10 + dVar29 * dVar31;
        }
        memset(&local_260,0,0x100);
        local_190 = 0xffffffff;
        local_1bc = 0xffffffff;
        local_260._4_4_ = 1.0;
        local_438 = (double *)((ulonglong)local_438 & 0xffffffffffffff00);
        local_448 = (double *)&local_260;
        local_440 = param_4;
        (**(code **)(*param_1 + 0xb0))(param_1,&local_160,&local_128);
        _Dst = &local_378;
        if ((char)param_1[0xf] != '\x01') break;
        if ((local_1b3 & 1) != 0) {
          if ((*(longlong *)(param_1[0x54] + 0xc0) == 0) ||
             (plVar9 = *(longlong **)(*(longlong *)(param_1[0x54] + 0xc0) + 0x48),
             plVar9 == (longlong *)0x0)) {
            local_378 = DAT_14c8464f0;
            local_388 = (uint)DAT_14c8464e0;
            uStack_384 = DAT_14c8464e0._4_4_;
            uStack_380 = (uint)DAT_14c8464e8;
            uStack_37c = DAT_14c8464e8._4_4_;
          }
          else {
            local_378 = *(double *)
                         (*(longlong *)(*plVar9 + 0x28) + 0x10 + (longlong)(int)plVar9[1] * 0x18);
            puVar3 = (uint *)(*(longlong *)(*plVar9 + 0x28) + (longlong)(int)plVar9[1] * 0x18);
            local_388 = *puVar3;
            uStack_384 = puVar3[1];
            uStack_380 = puVar3[2];
            uStack_37c = puVar3[3];
          }
          fVar27 = (1.0 - local_260._4_4_) * fVar19;
          cVar13 = (**(code **)(*param_1 + 0x210))(param_1,&local_388,&local_260);
          if (cVar13 != '\0') {
            lVar17 = *param_1;
            _Dst = &local_260;
LAB_14799c5c0:
            fVar32 = param_2 + fVar27;
LAB_14799c5c3:
            local_448 = param_4;
            (**(code **)(lVar17 + 0x218))(param_1,_Dst,fVar32,local_424);
            break;
          }
          local_150 = param_4[0x16] * dVar8;
          local_158 = param_4[0x15] * dVar8;
          local_160 = param_4[0x14] * dVar8;
          if (((local_1b3 & 2) == 0) &&
             (local_448 = param_4, cVar13 = (**(code **)(*param_1 + 0x230))(param_1), cVar13 != '\0'
             )) {
            if ((*(longlong *)(param_1[0x54] + 0xc0) == 0) ||
               (plVar9 = *(longlong **)(*(longlong *)(param_1[0x54] + 0xc0) + 0x48),
               plVar9 == (longlong *)0x0)) {
              local_268 = DAT_14c8464f0;
              uVar14 = (uint)DAT_14c8464e0;
              uVar21 = DAT_14c8464e0._4_4_;
              uVar22 = (uint)DAT_14c8464e8;
              uVar23 = DAT_14c8464e8._4_4_;
            }
            else {
              local_268 = *(double *)
                           (*(longlong *)(*plVar9 + 0x28) + 0x10 + (longlong)(int)plVar9[1] * 0x18);
              puVar3 = (uint *)(*(longlong *)(*plVar9 + 0x28) + (longlong)(int)plVar9[1] * 0x18);
              uVar14 = *puVar3;
              uVar21 = puVar3[1];
              uVar22 = puVar3[2];
              uVar23 = puVar3[3];
            }
            local_278 = (double)CONCAT44(uVar21,uVar14);
            uStack_270 = (double)CONCAT44(uVar23,uVar22);
            local_388 = 0;
            uStack_384 = 0;
            uStack_380 = 0;
            memset(_Dst,0,0x100);
            local_2a8 = 0xffffffff;
            local_2d4 = 0xffffffff;
            local_378 = (double)CONCAT44(0x3f800000,(undefined4)local_378);
            local_440 = (double *)0x0;
            local_448 = param_4;
            (**(code **)(*param_1 + 0xd8))(param_1,&local_278,&local_388);
            if ((((local_388 ^ 0xffffffff) & 3) == 0) &&
               (cVar13 = (**(code **)(*param_1 + 0x210))(param_1,&local_278,_Dst), cVar13 != '\0'))
            {
              lVar17 = *param_1;
              goto LAB_14799c5c0;
            }
          }
          local_448 = &local_160;
          (**(code **)(*param_1 + 0x150))(param_1,&local_260,param_4,uVar20);
          if (((char)param_1[0xf] != '\x01') ||
             (cVar13 = (**(code **)(*param_1 + 0x268))(param_1,param_4), cVar13 == '\0')) break;
          local_388 = SUB84(dVar31,0);
          uStack_384 = (uint)((ulonglong)dVar31 >> 0x20);
          uStack_380 = SUB84(dVar6,0);
          uStack_37c = (uint)((ulonglong)dVar6 >> 0x20);
          local_268 = param_4[7];
          local_278 = *pdVar1;
          uStack_270 = param_4[6];
          local_378 = dVar7;
          if (local_425 != '\0') {
            local_398 = param_4[7];
            local_3a8 = *pdVar1;
            uStack_3a0 = param_4[6];
            dVar28 = (double)CONCAT44(DAT_14c8464e8._4_4_,(uint)DAT_14c8464e8);
            *pdVar1 = (double)CONCAT44(DAT_14c8464e0._4_4_,(uint)DAT_14c8464e0);
            param_4[6] = dVar28;
            param_4[7] = DAT_14c8464f0;
            local_3b8 = param_4[0x16];
            local_3c8 = *pdVar2;
            uStack_3c0 = param_4[0x15];
            param_4[0x14] = dVar31;
            param_4[0x15] = dVar6;
            param_4[0x16] = 0.0;
            local_440 = param_4;
            local_448._0_4_ = uVar18;
            (**(code **)(*param_1 + 0x110))(param_1);
            local_388 = *(uint *)(param_4 + 0x14);
            uStack_384 = *(undefined4 *)((longlong)param_4 + 0xa4);
            uStack_380 = *(uint *)(param_4 + 0x15);
            uStack_37c = *(undefined4 *)((longlong)param_4 + 0xac);
            local_448 = (double *)CONCAT44(local_448._4_4_,fVar32);
            local_440 = param_4;
            local_378 = dVar7;
            (**(code **)(*param_1 + 0x208))(param_1,&local_3e8,&local_388,&local_148);
            local_378 = local_3d8;
            local_388 = SUB84(local_3e8,0);
            uStack_384 = (uint)((ulonglong)local_3e8 >> 0x20);
            uStack_380 = SUB84(uStack_3e0,0);
            uStack_37c = (uint)((ulonglong)uStack_3e0 >> 0x20);
            param_4[0x16] = local_3b8;
            *pdVar2 = local_3c8;
            param_4[0x15] = uStack_3c0;
            param_4[7] = local_398;
            *pdVar1 = local_3a8;
            param_4[6] = uStack_3a0;
            local_278 = 1.0 / dVar8;
            local_268 = (param_4[0x16] - local_3d8) * local_278;
            uStack_270 = (param_4[0x15] - uStack_3e0) * local_278;
            local_278 = local_278 * (param_4[0x14] - local_3e8);
            local_440 = (double *)((ulonglong)local_440 & 0xffffffffffffff00);
            local_448 = (double *)&local_260;
            local_438 = param_4;
            (**(code **)(*param_1 + 0x200))(param_1,&local_3a8,fVar19);
            local_150 = (local_398 * dVar8 + local_378) * dVar8;
            local_158 = (uStack_3a0 * dVar8 + (double)CONCAT44(uStack_37c,uStack_380)) * dVar8;
            local_160 = (local_3a8 * dVar8 + (double)CONCAT44(uStack_384,local_388)) * dVar8;
          }
          dVar7 = local_1f8;
          dVar6 = local_200;
          dVar31 = local_208;
          local_398 = local_210;
          local_3a8 = (double)CONCAT44(uStack_21c,local_220);
          uStack_3a0 = (double)CONCAT44(uStack_214,uStack_218);
          local_448 = (double *)&local_3a8;
          local_440 = (double *)&local_260;
          local_438 = param_4;
          (**(code **)(*param_1 + 0x160))(param_1,&local_3c8,&local_160,1.0 - local_260._4_4_);
          if (0.0001 < fVar27) {
            if (*(char *)((longlong)param_4 + 0x121) == '\0') {
              dVar28 = 1.0 / (double)fVar27;
              if (((char)param_1[0x28] == '\0') && (*(char *)((longlong)param_1 + 0x142) != '\x01'))
              {
                dVar24 = local_3c8 * dVar28;
                dVar30 = uStack_3c0 * dVar28;
              }
              else {
                dVar24 = param_4[0x14];
                dVar30 = param_4[0x15];
              }
              param_4[0x14] = dVar24;
              param_4[0x15] = dVar30;
              param_4[0x16] = dVar28 * local_3b8;
            }
            if (0.0 < local_3b8 * local_150 + local_3c8 * local_160 + uStack_3c0 * local_158) {
              local_438 = (double *)((ulonglong)local_438 & 0xffffffffffffff00);
              local_448 = (double *)&local_260;
              local_440 = param_4;
              (**(code **)(*param_1 + 0xb0))(param_1,&local_3c8,&local_128);
              if ((local_1b3 & 1) != 0) {
                if ((*(longlong *)(param_1[0x54] + 0xc0) == 0) ||
                   (plVar9 = *(longlong **)(*(longlong *)(param_1[0x54] + 0xc0) + 0x48),
                   plVar9 == (longlong *)0x0)) {
                  local_3d8 = DAT_14c8464f0;
                  uVar14 = (uint)DAT_14c8464e0;
                  uVar21 = DAT_14c8464e0._4_4_;
                  uVar22 = (uint)DAT_14c8464e8;
                  uVar23 = DAT_14c8464e8._4_4_;
                }
                else {
                  local_3d8 = *(double *)
                               (*(longlong *)(*plVar9 + 0x28) + 0x10 +
                               (longlong)(int)plVar9[1] * 0x18);
                  puVar3 = (uint *)(*(longlong *)(*plVar9 + 0x28) + (longlong)(int)plVar9[1] * 0x18)
                  ;
                  uVar14 = *puVar3;
                  uVar21 = puVar3[1];
                  uVar22 = puVar3[2];
                  uVar23 = puVar3[3];
                }
                local_3e8 = (double)CONCAT44(uVar21,uVar14);
                uStack_3e0 = (double)CONCAT44(uVar23,uVar22);
                fVar32 = (1.0 - local_260._4_4_) * fVar27;
                cVar13 = (**(code **)(*param_1 + 0x210))(param_1,&local_3e8,&local_260,param_4);
                if (cVar13 == '\0') {
                  local_448 = (double *)&local_3c8;
                  (**(code **)(*param_1 + 0x150))(param_1,&local_260,param_4,fVar27);
                  if (((char)param_1[0xf] != '\x01') ||
                     (cVar13 = (**(code **)(*param_1 + 0x268))(param_1,param_4), cVar13 == '\0'))
                  break;
                  if (local_425 == '\0') {
                    local_448 = param_4;
                    FUN_14799c7fa(param_1,&local_3c8,&local_260,&local_3a8);
                  }
                  else {
                    if (0.0010000000474974513 < local_210) {
                      local_3e8 = (double)fVar27;
                      local_3d8 = local_378 * local_3e8;
                      uStack_3e0 = (double)CONCAT44(uStack_37c,uStack_380) * local_3e8;
                      local_3e8 = local_3e8 * (double)CONCAT44(uStack_384,local_388);
                      local_448 = (double *)&local_3a8;
                      local_440 = (double *)&local_260;
                      local_438 = param_4;
                      (**(code **)(*param_1 + 0x160))(param_1,&local_400,&local_3e8,0x3f800000);
                      local_3b8 = local_3f0;
                      local_3c8 = (double)CONCAT44(uStack_3fc,local_400);
                      uStack_3c0 = (double)CONCAT44(uStack_3f4,uStack_3f8);
                    }
                    local_448 = param_4;
                    FUN_14799c7fa(param_1,&local_3c8,&local_260,&local_3a8);
                    local_440 = (double *)((ulonglong)local_440 & 0xffffffffffffff00);
                    local_448 = (double *)&local_260;
                    local_438 = param_4;
                    (**(code **)(*param_1 + 0x200))(param_1,&local_3e8,fVar32,&local_278);
                    dVar28 = (double)fVar32;
                    if (0.0 < local_398 * local_3d8 * dVar28 +
                              local_3a8 * local_3e8 * dVar28 + uStack_3a0 * uStack_3e0 * dVar28) {
                      local_3c8 = local_3e8 * dVar28 * dVar28 + local_3c8;
                      uStack_3c0 = uStack_3e0 * dVar28 * dVar28 + uStack_3c0;
                      local_3b8 = local_3d8 * dVar28 * dVar28 + local_3b8;
                    }
                  }
                  if ((0.0001 < fVar32) && (*(char *)((longlong)param_4 + 0x121) == '\0')) {
                    dVar28 = 1.0 / (double)fVar32;
                    if (((char)param_1[0x28] == '\0') &&
                       (*(char *)((longlong)param_1 + 0x142) != '\x01')) {
                      dVar24 = local_3c8 * dVar28;
                      dVar30 = uStack_3c0 * dVar28;
                    }
                    else {
                      dVar24 = param_4[0x14];
                      dVar30 = param_4[0x15];
                    }
                    param_4[0x14] = dVar24;
                    param_4[0x15] = dVar30;
                    param_4[0x16] = dVar28 * local_3b8;
                  }
                  bVar11 = false;
                  if ((0.0 < dVar7) && (bVar11 = false, 0.0 < local_1f8)) {
                    if (ABS(local_3b8) <= 9.999999747378752e-05) {
                      bVar11 = local_1f8 * dVar7 + dVar31 * local_208 + dVar6 * local_200 < 0.0;
                    }
                    else {
                      bVar11 = false;
                    }
                  }
                  local_438 = (double *)((ulonglong)local_438 & 0xffffffffffffff00);
                  local_448 = (double *)&local_260;
                  local_440 = param_4;
                  (**(code **)(*param_1 + 0xb0))(param_1,&local_3c8,&local_128,1);
                  if ((local_260._4_4_ == 0.0) && (!NAN(local_260._4_4_))) {
                    uStack_3e0 = local_200 + uStack_3a0;
                    local_3e8 = local_208 + local_3a8;
                    dVar31 = local_3e8 * local_3e8 + uStack_3e0 * uStack_3e0;
                    if ((dVar31 != 1.0) || (NAN(dVar31))) {
                      if (9.99999993922529e-09 <= dVar31) {
                        uStack_3e0 = uStack_3e0 * (1.0 / SQRT(dVar31));
                        local_3e8 = local_3e8 * (1.0 / SQRT(dVar31));
                        goto LAB_14799c663;
                      }
                      local_3e8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(uint)DAT_14c8464e0);
                      uStack_3e0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(uint)DAT_14c8464e8);
                      local_3d8 = DAT_14c8464f0;
                    }
                    else {
                      local_3d8 = local_398 + local_1f8;
                      if ((local_3d8 != 0.0) || (NAN(local_3d8))) {
LAB_14799c663:
                        local_3d8 = 0.0;
                      }
                    }
                    if (((ABS(local_3e8) <= 9.999999747378752e-05) &&
                        (ABS(uStack_3e0) <= 9.999999747378752e-05)) &&
                       (ABS(local_3d8) <= 9.999999747378752e-05)) {
                      uStack_3e0 = -local_3a8;
                      dVar31 = uStack_3a0 * uStack_3a0 + local_3a8 * local_3a8;
                      if ((dVar31 != 1.0) || (NAN(dVar31))) {
                        if (9.99999993922529e-09 <= dVar31) {
                          local_3e8 = 1.0 / SQRT(dVar31);
                          local_3d8 = local_3e8 * 0.0;
                          uStack_3e0 = uStack_3e0 * local_3e8;
                          local_3e8 = uStack_3a0 * local_3e8;
                        }
                        else {
                          local_3e8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(uint)DAT_14c8464e0);
                          uStack_3e0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(uint)DAT_14c8464e8);
                          local_3d8 = DAT_14c8464f0;
                        }
                      }
                      else {
                        local_3d8 = 0.0;
                        local_3e8 = uStack_3a0;
                      }
                    }
                    local_438 = (double *)((ulonglong)local_438 & 0xffffffffffffff00);
                    local_448 = (double *)&local_260;
                    local_440 = param_4;
                    (**(code **)(*param_1 + 0xb0))(param_1,&local_3e8,&local_128,1);
                  }
                  if (!bVar11) {
                    if ((*(longlong *)(param_1[0x54] + 0xc0) == 0) ||
                       (plVar9 = *(longlong **)(*(longlong *)(param_1[0x54] + 0xc0) + 0x48),
                       plVar9 == (longlong *)0x0)) {
                      local_3d8 = DAT_14c8464f0;
                      uVar14 = (uint)DAT_14c8464e0;
                      uVar21 = DAT_14c8464e0._4_4_;
                      uVar22 = (uint)DAT_14c8464e8;
                      uVar23 = DAT_14c8464e8._4_4_;
                    }
                    else {
                      local_3d8 = *(double *)
                                   (*(longlong *)(*plVar9 + 0x28) + 0x10 +
                                   (longlong)(int)plVar9[1] * 0x18);
                      puVar3 = (uint *)(*(longlong *)(*plVar9 + 0x28) +
                                       (longlong)(int)plVar9[1] * 0x18);
                      uVar14 = *puVar3;
                      uVar21 = puVar3[1];
                      uVar22 = puVar3[2];
                      uVar23 = puVar3[3];
                    }
                    local_3e8 = (double)CONCAT44(uVar21,uVar14);
                    uStack_3e0 = (double)CONCAT44(uVar23,uVar22);
                    cVar13 = (**(code **)(*param_1 + 0x210))(param_1,&local_3e8,&local_260);
                    if (cVar13 == '\0') {
                      fVar32 = 0.0;
                      if ((local_260._4_4_ != 0.0) || (NAN(local_260._4_4_))) {
                        if ((local_260._4_4_ == 1.0) && (!NAN(local_260._4_4_))) {
                          fVar27 = 0.0;
                          if (0.0 <= *(float *)(param_1 + 0x1b)) {
                            fVar27 = *(float *)(param_1 + 0x1b);
                          }
                          if ((0.0 < fVar27) &&
                             ((double)*(float *)((longlong)param_1 + 0x84) <= dVar7)) {
                            pdVar16 = (double *)&DAT_14c8464e0;
                            if (*(longlong *)(param_1[0x54] + 0xc0) != 0) {
                              plVar9 = *(longlong **)(*(longlong *)(param_1[0x54] + 0xc0) + 0x48);
                              pdVar16 = (double *)&DAT_14c8464e0;
                              if (plVar9 != (longlong *)0x0) {
                                pdVar16 = (double *)
                                          ((longlong)(int)plVar9[1] * 0x18 +
                                          *(longlong *)(*plVar9 + 0x28));
                              }
                            }
                            if ((ABS((float)(pdVar16[2] - local_420)) <= fVar19 * 0.2) &&
                               ((float)((*pdVar16 - local_410) * (*pdVar16 - local_410) +
                                       (pdVar16[1] - local_408) * (pdVar16[1] - local_408)) <=
                                fVar19 * 4.0)) {
                              fVar19 = (float)(**(code **)(*param_1 + 600))(param_1,param_4);
                              uVar14 = *(int *)((longlong)param_1 + 0x3ec) * 0xbb38435 + 0x3619636b;
                              *(uint *)((longlong)param_1 + 0x3ec) = uVar14;
                              param_4[0x14] =
                                   (double)(((float)(uVar14 >> 9 | 0x3f800000) + -1.0 + -0.5) *
                                           fVar19 * 0.25) + param_4[0x14];
                              fVar19 = (float)(**(code **)(*param_1 + 600))(param_1,param_4);
                              uVar14 = *(int *)((longlong)param_1 + 0x3ec) * 0xbb38435 + 0x3619636b;
                              *(uint *)((longlong)param_1 + 0x3ec) = uVar14;
                              uStack_3c0 = (double)(((float)(uVar14 >> 9 | 0x3f800000) + -1.0 + -0.5
                                                    ) * fVar19 * 0.25) + param_4[0x15];
                              param_4[0x15] = uStack_3c0;
                              fVar19 = *(float *)((longlong)param_1 + 0xfc) * 0.25;
                              if (fVar19 <= 1.0) {
                                fVar19 = 1.0;
                              }
                              param_4[0x16] = (double)fVar19;
                              local_3b8 = (double)fVar19 * dVar8;
                              uStack_3c0 = uStack_3c0 * dVar8;
                              local_3c8 = dVar8 * param_4[0x14];
                              local_438 = (double *)((ulonglong)local_438 & 0xffffffffffffff00);
                              local_448 = (double *)&local_260;
                              local_440 = param_4;
                              (**(code **)(*param_1 + 0xb0))(param_1,&local_3c8,&local_128);
                            }
                          }
                        }
                        goto LAB_14799b7a0;
                      }
                      goto LAB_14799c76c;
                    }
                  }
                  fVar32 = 0.0;
                }
                else {
                  fVar32 = param_2 + fVar32;
                }
LAB_14799c76c:
                lVar17 = *param_1;
                _Dst = &local_260;
                goto LAB_14799c5c3;
              }
            }
          }
        }
LAB_14799b7a0:
        if (param_4[0x14] * param_4[0x14] + param_4[0x15] * param_4[0x15] <= 0.0009999999310821295)
        {
          *pdVar2 = 0.0;
          param_4[0x15] = 0.0;
        }
        param_3 = local_424;
      } while (1e-06 <= param_2);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14799c7fa FUN_14799c7fa body=960 status=ok
// SIG undefined FUN_14799c7fa(void)

void FUN_14799c7fa(longlong *param_1,double *param_2,longlong param_3,double *param_4,
                  undefined8 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_108 [32];
  double *local_e8;
  longlong local_e0;
  undefined8 local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined1 local_98 [12];
  undefined4 uStack_8c;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dVar1 = param_2[2];
  dVar3 = *param_2;
  dVar4 = param_2[1];
  local_a8 = *(double *)(param_3 + 0x50);
  local_b8 = *(double *)(param_3 + 0x40);
  dStack_b0 = *(double *)(param_3 + 0x48);
  dVar9 = *param_4;
  dVar5 = param_4[1];
  dVar6 = param_4[2];
  if (dVar6 * local_a8 + dVar9 * local_b8 + dVar5 * dStack_b0 <= 0.0) {
    dVar2 = local_b8 * dVar5 - dVar9 * dStack_b0;
    dVar7 = local_a8 * dVar9 - dVar6 * local_b8;
    dVar5 = dStack_b0 * dVar6 - dVar5 * local_a8;
    dVar9 = dVar2 * dVar2 + dVar5 * dVar5 + dVar7 * dVar7;
    if (((dVar9 != 1.0) || (dVar6 = dVar5, dVar8 = dVar7, local_88 = dVar2, NAN(dVar9))) &&
       (dVar6 = DAT_14c8464e0, dVar8 = DAT_14c8464e8, local_88 = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar9)) {
      dVar9 = 1.0 / SQRT(dVar9);
      dVar6 = dVar5 * dVar9;
      dVar8 = dVar7 * dVar9;
      local_88 = dVar2 * dVar9;
    }
    local_98._0_8_ =
         (double)(1.0 - *(float *)(param_3 + 4)) *
         (dVar1 * local_88 + dVar3 * dVar6 + dVar4 * dVar8);
    local_88 = local_88 * (double)local_98._0_8_;
    dVar8 = dVar8 * (double)local_98._0_8_;
    local_98._0_8_ = (double)local_98._0_8_ * dVar6;
    stack0xffffffffffffff70 = dVar8;
    if (dVar1 * local_88 + dVar3 * (double)local_98._0_8_ + dVar4 * dVar8 < 0.0) {
      local_88 = -local_88;
      local_98._8_4_ = SUB84(dVar8,0);
      local_98._0_8_ = -(double)local_98._0_8_;
      uStack_8c = (uint)((ulonglong)dVar8 >> 0x20) ^ 0x80000000;
    }
  }
  else {
    local_d8 = param_5;
    local_e8 = &local_b8;
    local_e0 = param_3;
    local_88 = dVar1;
    local_98._0_8_ = dVar3;
    unique0x10000ab5 = dVar4;
    (**(code **)(*param_1 + 0x160))
              (SUB84(local_b8,0),&local_d0,local_98,1.0 - *(float *)(param_3 + 4));
    local_88 = local_c0;
    stack0xffffffffffffff70 = dStack_c8;
    local_98._0_8_ = local_d0;
    if (dVar1 * local_c0 + dVar3 * local_d0 + dVar4 * dStack_c8 <= 0.0) {
      local_88 = DAT_14c8464f0;
      stack0xffffffffffffff70 = DAT_14c8464e8;
      local_98._0_8_ = DAT_14c8464e0;
    }
    else if (ABS(param_4[2] * local_a8 + *param_4 * local_b8 + param_4[1] * dStack_b0 + -1.0) <
             9.999999747378752e-05) {
      stack0xffffffffffffff70 = dStack_c8 + dStack_b0 * 0.009999999776482582;
      local_98._0_8_ = local_d0 + local_b8 * 0.009999999776482582;
      local_88 = local_c0 + local_a8 * 0.009999999776482582;
    }
  }
  param_2[2] = local_88;
  *(undefined4 *)param_2 = local_98._0_4_;
  *(undefined4 *)((longlong)param_2 + 4) = local_98._4_4_;
  *(undefined4 *)(param_2 + 1) = local_98._8_4_;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_8c;
  if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14799cbbc FUN_14799cbbc body=1448 status=ok
// SIG undefined FUN_14799cbbc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14799cbbc(longlong *param_1,float param_2,double *param_3)

{
  longlong lVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  double dVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  double *pdVar13;
  undefined4 uVar14;
  uint uVar16;
  double extraout_XMM0_Qa;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auStack_f8 [32];
  double *local_d8;
  double *local_d0;
  undefined1 local_c8;
  undefined1 local_b8 [16];
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  ulonglong local_50;
  longlong *plVar15;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((*(char *)((longlong)param_1 + 0x41) != '\0') ||
      (*(char *)((longlong)param_1 + 0x42) == '\x01')) && ((char)param_1[0xf] == '\x01')) {
    if ((*(longlong *)(param_1[0x54] + 0xc0) == 0) ||
       (plVar15 = *(longlong **)(*(longlong *)(param_1[0x54] + 0xc0) + 0x48),
       plVar15 == (longlong *)0x0)) {
      local_78 = DAT_14c8463e0;
      dStack_70 = DAT_14c8463e8;
      local_88 = DAT_14c8463d0;
      dStack_80 = DAT_14c8463d8;
    }
    else {
      lVar1 = *(longlong *)(*plVar15 + 0x48);
      lVar12 = (longlong)(int)plVar15[1] * 0x10;
      dStack_70 = (double)*(float *)(lVar1 + 0xc + lVar12);
      local_78 = (double)*(float *)(lVar1 + 8 + lVar12);
      dStack_80 = (double)*(float *)(lVar1 + 4 + lVar12);
      local_88 = (double)*(float *)(lVar1 + lVar12);
    }
    FUN_141706cfc(&local_68,&local_88);
    pdVar13 = (double *)(param_1 + 0x24);
    if (*(char *)(param_3 + 0x66) != '\0') {
      pdVar13 = param_3 + 99;
    }
    uVar16 = -(uint)((float)pdVar13[2] < 0.0);
    fVar32 = (float)pdVar13[2] * param_2;
    if (360.0 <= fVar32) {
      fVar32 = 360.0;
    }
    local_90 = (double)(float)(uVar16 & 0x43b40000 | ~uVar16 & (uint)fVar32);
    uVar16 = -(uint)((float)pdVar13[1] < 0.0);
    fVar32 = (float)pdVar13[1] * param_2;
    if (360.0 <= fVar32) {
      fVar32 = 360.0;
    }
    local_98 = (double)(float)(uVar16 & 0x43b40000 | ~uVar16 & (uint)fVar32);
    uVar16 = -(uint)((float)*pdVar13 < 0.0);
    param_2 = (float)*pdVar13 * param_2;
    if (360.0 <= param_2) {
      param_2 = 360.0;
    }
    local_a0 = (double)(float)(uVar16 & 0x43b40000 | ~uVar16 & (uint)param_2);
    local_a8 = local_58;
    local_b8._8_8_ = dStack_60;
    local_b8._0_8_ = local_68;
    if (*(char *)((longlong)param_1 + 0x41) == '\x01') {
      local_d8 = &local_a0;
      local_d0 = param_3;
      (**(code **)(*param_1 + 0x238))(param_1,local_b8,&local_68);
    }
    else {
      if (*(char *)((longlong)param_1 + 0x42) != '\x01') goto LAB_14799d127;
      local_a8 = *(double *)(param_1[0x55] + 0x30);
      local_b8 = *(undefined1 (*) [16])(param_1[0x55] + 0x20);
    }
    plVar15 = param_1;
    uVar10 = (**(code **)(*param_1 + 0x240))(param_1,param_3);
    uVar14 = SUB84(plVar15,0);
    uVar8 = local_b8._8_8_;
    if ((char)uVar10 == '\0') {
      dVar29 = (double)DAT_1499387d0;
      dVar2 = DAT_1499387d0._8_8_;
      auVar26 = divpd(local_b8,_DAT_1499387d0);
      auVar35._8_8_ = 0;
      auVar35._0_8_ = local_a8;
      auVar27 = divpd(auVar35,_DAT_1499387d0);
      auVar26 = roundpd(auVar26,auVar26,3);
      auVar27 = roundpd(auVar27,auVar27,3);
      auVar37._0_8_ = local_b8._0_8_ - auVar26._0_8_ * dVar29;
      auVar37._8_8_ = (double)local_b8._8_8_ - auVar26._8_8_ * dVar2;
      auVar38._0_8_ = local_a8 - auVar27._0_8_ * dVar29;
      auVar38._8_8_ = 0.0 - auVar27._8_8_ * dVar2;
      auVar34._0_8_ = auVar37._0_8_ + dVar29;
      auVar34._8_8_ = auVar37._8_8_ + dVar2;
      auVar30._0_8_ = dVar29 + auVar38._0_8_;
      auVar30._8_8_ = dVar2 + auVar38._8_8_;
      auVar26._8_8_ = -(ulonglong)(0.0 <= auVar37._8_8_);
      auVar26._0_8_ = -(ulonglong)(0.0 <= auVar37._0_8_);
      auVar35 = blendvpd(auVar34,auVar37,auVar26);
      auVar27._8_8_ = -(ulonglong)(0.0 <= auVar38._8_8_);
      auVar27._0_8_ = -(ulonglong)(0.0 <= auVar38._0_8_);
      auVar26 = blendvpd(auVar30,auVar38,auVar27);
      auVar24._0_8_ = auVar35._0_8_ + -360.0;
      auVar24._8_8_ = auVar35._8_8_ + -360.0;
      auVar17._8_8_ = -(ulonglong)(180.0 < auVar35._8_8_);
      auVar17._0_8_ = -(ulonglong)(180.0 < auVar35._0_8_);
      local_b8 = blendvpd(auVar35,auVar24,auVar17);
      dVar29 = auVar26._0_8_;
      local_a8 = (double)(~-(ulonglong)(180.0 < dVar29) & (ulonglong)dVar29 |
                         (ulonglong)(dVar29 + -360.0) & -(ulonglong)(180.0 < dVar29));
    }
    else {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = local_b8._8_8_;
      local_b8 = auVar7 << 0x40;
      uVar10 = FUN_144719204(uVar8,0x4076800000000000);
      dVar29 = (double)(~-(ulonglong)(extraout_XMM0_Qa < 0.0) & (ulonglong)extraout_XMM0_Qa |
                       (ulonglong)(extraout_XMM0_Qa + 360.0) & -(ulonglong)(extraout_XMM0_Qa < 0.0))
      ;
      local_b8._8_8_ =
           ~-(ulonglong)(180.0 < dVar29) & (ulonglong)dVar29 |
           (ulonglong)(dVar29 + -360.0) & -(ulonglong)(180.0 < dVar29);
      local_a8 = 0.0;
    }
    dVar9 = local_a8;
    dVar33 = local_b8._0_8_;
    dVar36 = local_b8._8_8_;
    dVar29 = (double)DAT_1499387d0;
    dVar2 = DAT_1499387d0._8_8_;
    auVar25._8_8_ = dStack_60 - dVar36;
    auVar25._0_8_ = local_68 - dVar33;
    auVar26 = divpd(auVar25,_DAT_1499387d0);
    auVar18._0_8_ = (local_58 - local_a8) / 360.0;
    auVar18._8_8_ = 0;
    auVar27 = roundpd(auVar26,auVar26,3);
    auVar26 = roundpd(auVar18,auVar18,3);
    auVar40._0_8_ = (local_58 - local_a8) - auVar26._0_8_ * dVar29;
    auVar40._8_8_ = 0.0 - auVar26._8_8_ * dVar2;
    dVar5 = (local_68 - dVar33) - auVar27._0_8_ * dVar29;
    dVar6 = (dStack_60 - dVar36) - auVar27._8_8_ * dVar2;
    auVar39._0_8_ = dVar5 + dVar29;
    auVar39._8_8_ = dVar6 + dVar2;
    auVar31._0_8_ = dVar29 + auVar40._0_8_;
    auVar31._8_8_ = dVar2 + auVar40._8_8_;
    auVar19._8_8_ = -(ulonglong)(0.0 <= dVar6);
    auVar19._0_8_ = -(ulonglong)(0.0 <= dVar5);
    auVar3._8_4_ = SUB84(dVar6,0);
    auVar3._0_8_ = dVar5;
    auVar3._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    auVar27 = blendvpd(auVar39,auVar3,auVar19);
    auVar20._8_8_ = -(ulonglong)(0.0 <= auVar40._8_8_);
    auVar20._0_8_ = -(ulonglong)(0.0 <= auVar40._0_8_);
    auVar26 = blendvpd(auVar31,auVar40,auVar20);
    auVar41._0_8_ = auVar27._0_8_ + -360.0;
    auVar41._8_8_ = auVar27._8_8_ + -360.0;
    dVar29 = auVar26._8_8_ + -360.0;
    auVar21._8_8_ = -(ulonglong)(180.0 < auVar27._8_8_);
    auVar21._0_8_ = -(ulonglong)(180.0 < auVar27._0_8_);
    auVar27 = blendvpd(auVar27,auVar41,auVar21);
    auVar22._8_8_ = -(ulonglong)(180.0 < auVar26._8_8_);
    auVar22._0_8_ = -(ulonglong)(180.0 < auVar26._0_8_);
    auVar4._8_4_ = SUB84(dVar29,0);
    auVar4._0_8_ = auVar26._0_8_ + -360.0;
    auVar4._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
    auVar26 = blendvpd(auVar26,auVar4,auVar22);
    auVar28._8_8_ = -(ulonglong)(0.0010000000474974513 < ABS(auVar27._8_8_));
    auVar28._0_8_ = -(ulonglong)(0.0010000000474974513 < ABS(auVar27._0_8_));
    iVar11 = movmskpd(uVar10,auVar28);
    auVar23._8_8_ = -(ulonglong)(0.0010000000474974513 < ABS(auVar26._8_8_));
    auVar23._0_8_ = -(ulonglong)(0.0010000000474974513 < ABS(auVar26._0_8_));
    uVar16 = movmskpd(uVar14,auVar23);
    if ((uVar16 & 0x3fffffff) != 0 || iVar11 != 0) {
      if (0.0010000000474974513 < ABS(local_68 - dVar33)) {
        fVar32 = (float)FUN_1407b5b68((float)local_68,(float)dVar33,(float)local_a0);
        local_b8._0_8_ = (double)fVar32;
      }
      if (0.0010000000474974513 < ABS(dStack_60 - dVar36)) {
        fVar32 = (float)FUN_1407b5b68((float)dStack_60,(float)dVar36,(float)local_98);
        local_b8._8_8_ = (double)fVar32;
      }
      if (0.0010000000474974513 < ABS(local_58 - dVar9)) {
        fVar32 = (float)FUN_1407b5b68((float)local_58,(float)dVar9,(float)local_90);
        local_a8 = (double)fVar32;
      }
      FUN_144a7484c(local_b8,&local_88);
      local_c8 = 0;
      local_d0 = (double *)0x0;
      local_d8 = param_3;
      (**(code **)(*param_1 + 0xa8))(param_1,&DAT_14c8464e0,&local_88,0);
    }
  }
LAB_14799d127:
  if ((local_50 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14799d166 FUN_14799d166 body=1686 status=ok
// SIG undefined FUN_14799d166(void)

void FUN_14799d166(longlong *param_1,double *param_2,undefined8 param_3,undefined1 *param_4,
                  undefined1 *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  double *pdVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined1 auStack_248 [32];
  double *local_228;
  undefined1 *local_220;
  undefined1 *local_218;
  double local_210;
  double local_208;
  double local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined1 local_1b8 [4];
  float local_1b4;
  undefined1 local_178 [16];
  double local_168;
  undefined4 local_114;
  byte local_10b;
  undefined1 local_100 [24];
  undefined4 local_e8;
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  uVar4 = *(uint *)(param_5 + 0x130);
  if ((~uVar4 & 3) == 0) {
    fVar10 = (float)param_3;
    uVar14 = (undefined4)((ulonglong)param_3 >> 0x20);
    local_b8 = (double)fVar10;
    local_a8 = local_b8 * 0.0;
    local_b0 = param_2[1] * local_b8;
    local_b8 = local_b8 * *param_2;
    memset(local_1b8,0,0x100);
    local_e8 = 0xffffffff;
    local_114 = 0xffffffff;
    local_1b4 = 1.0;
    local_220 = param_5;
    local_228 = (double *)CONCAT71(local_228._1_7_,(char)((uVar4 & 4) >> 2));
    (**(code **)(*param_1 + 0x60))(param_1,&local_1d8,&local_b8,param_5 + 0x140);
    if ((*(longlong *)(param_1[0x54] + 0xc0) == 0) ||
       (plVar5 = *(longlong **)(*(longlong *)(param_1[0x54] + 0xc0) + 0x48),
       plVar5 == (longlong *)0x0)) {
      local_1e8 = DAT_14c8463e0;
      dStack_1e0 = DAT_14c8463e8;
      local_1f8 = (double)CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
      uStack_1f0 = (double)CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
    }
    else {
      lVar6 = *(longlong *)(*plVar5 + 0x48);
      lVar8 = (longlong)(int)plVar5[1] * 0x10;
      dStack_1e0 = (double)*(float *)(lVar6 + 0xc + lVar8);
      local_1e8 = (double)*(float *)(lVar6 + 8 + lVar8);
      uStack_1f0 = (double)*(float *)(lVar6 + 4 + lVar8);
      local_1f8 = (double)*(float *)(lVar6 + lVar8);
    }
    local_220 = param_5;
    local_218 = (undefined1 *)((ulonglong)local_218 & 0xffffffffffffff00);
    local_228 = (double *)local_1b8;
    (**(code **)(*param_1 + 0xb0))(param_1,&local_1d8,&local_1f8,1);
    fVar15 = local_1b4;
    if ((local_10b & 2) == 0) {
      if ((local_10b & 1) != 0) {
        fVar12 = fVar10;
        if (((0.0 < local_1b4) && (9.999999747378752e-05 < local_168)) &&
           (cVar7 = (**(code **)(*param_1 + 0xf8))(param_1,local_1b8), cVar7 != '\0')) {
          uVar14 = 0;
          fVar13 = 1.0 - fVar15;
          local_210 = (double)fVar13;
          local_200 = local_a8 * local_210;
          local_208 = local_b0 * local_210;
          local_210 = local_210 * local_b8;
          local_220 = param_5;
          local_228 = (double *)((ulonglong)local_228 & 0xffffffffffffff00);
          (**(code **)(*param_1 + 0x60))(param_1,&local_1f8,&local_210,local_1b8);
          local_1c8 = local_1e8;
          local_1d8 = local_1f8;
          dStack_1d0 = uStack_1f0;
          if ((*(longlong *)(param_1[0x54] + 0xc0) == 0) ||
             (plVar5 = *(longlong **)(*(longlong *)(param_1[0x54] + 0xc0) + 0x48),
             plVar5 == (longlong *)0x0)) {
            local_1e8 = DAT_14c8463e0;
            dStack_1e0 = DAT_14c8463e8;
            local_1f8 = (double)CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
            uStack_1f0 = (double)CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
          }
          else {
            lVar6 = *(longlong *)(*plVar5 + 0x48);
            lVar8 = (longlong)(int)plVar5[1] * 0x10;
            dStack_1e0 = (double)*(float *)(lVar6 + 0xc + lVar8);
            local_1e8 = (double)*(float *)(lVar6 + 8 + lVar8);
            uStack_1f0 = (double)*(float *)(lVar6 + 4 + lVar8);
            local_1f8 = (double)*(float *)(lVar6 + lVar8);
          }
          fVar12 = fVar13 * fVar10;
          local_220 = param_5;
          local_218 = (undefined1 *)((ulonglong)local_218 & 0xffffffffffffff00);
          local_228 = (double *)local_1b8;
          (**(code **)(*param_1 + 0xb0))(param_1,&local_1d8,&local_1f8,1);
          fVar15 = fVar15 + fVar13 * local_1b4;
          if (1.0 <= fVar15) {
            fVar15 = 1.0;
          }
          if (fVar15 <= 0.0) {
            fVar15 = 0.0;
          }
        }
        if (((local_10b & 3) == 1) &&
           ((cVar7 = (**(code **)(*param_1 + 0x178))(param_1,local_1b8,param_5), cVar7 != '\0' ||
            ((*(longlong *)(param_5 + 0x338) != 0 &&
             (lVar6 = *(longlong *)(param_5 + 0x340), lVar8 = FUN_14485cccc(local_100),
             lVar6 == lVar8)))))) {
          pdVar9 = (double *)&DAT_14c8464e0;
          if ((*(longlong *)(param_1[0x54] + 0xc0) != 0) &&
             (plVar5 = *(longlong **)(*(longlong *)(param_1[0x54] + 0xc0) + 0x48),
             plVar5 != (longlong *)0x0)) {
            pdVar9 = (double *)((longlong)(int)plVar5[1] * 0x18 + *(longlong *)(*plVar5 + 0x28));
          }
          dVar1 = *pdVar9;
          dVar2 = pdVar9[1];
          local_1f8 = 0.0;
          uStack_1f0 = 0.0;
          local_1e8 = -1.0;
          fVar15 = 1.0 - fVar15;
          local_210 = (double)fVar15;
          local_200 = local_a8 * local_210;
          local_208 = local_b0 * local_210;
          local_210 = local_210 * local_b8;
          local_228 = (double *)param_5;
          local_220 = param_4;
          cVar7 = (**(code **)(*param_1 + 0x180))(param_1,&local_1f8,&local_210,local_1b8);
          if (cVar7 == '\0') {
            local_228 = &local_1d8;
            (**(code **)(*param_1 + 0x150))(param_1,local_1b8,param_5,CONCAT44(uVar14,fVar12));
            local_218 = param_5;
            local_220 = (undefined1 *)CONCAT71(local_220._1_7_,1);
            local_228 = (double *)local_1b8;
            (**(code **)(*param_1 + 0x158))(param_1,&local_b8,fVar15,local_178);
          }
          else if ((((*(char *)((longlong)param_1 + 0x9c) == '\0') &&
                    (param_5[0x121] = 1, (char)param_1[0x28] == '\0')) &&
                   (0.0001 <= fVar15 * fVar10)) && (*(char *)((longlong)param_1 + 0x141) == '\0')) {
            pdVar9 = (double *)&DAT_14c8464e0;
            if ((*(longlong *)(param_1[0x54] + 0xc0) != 0) &&
               (plVar5 = *(longlong **)(*(longlong *)(param_1[0x54] + 0xc0) + 0x48),
               plVar5 != (longlong *)0x0)) {
              pdVar9 = (double *)((longlong)(int)plVar5[1] * 0x18 + *(longlong *)(*plVar5 + 0x28));
            }
            dVar3 = pdVar9[1];
            dVar11 = 1.0 / (double)(fVar15 * fVar10);
            *(double *)(param_5 + 0xa0) = dVar11 * (*pdVar9 - dVar1);
            *(double *)(param_5 + 0xa8) = (dVar3 - dVar2) * dVar11;
            *(undefined8 *)(param_5 + 0xb0) = 0;
          }
        }
      }
    }
    else {
      local_228 = (double *)&DAT_14c8464e0;
      (**(code **)(*param_1 + 0x150))(param_1,local_1b8,param_5,0);
      local_218 = param_5;
      local_220 = (undefined1 *)CONCAT71(local_220._1_7_,1);
      local_228 = (double *)local_1b8;
      (**(code **)(*param_1 + 0x158))(param_1,&local_b8,0x3f800000,local_178);
      if ((local_10b & 2) != 0) {
        (**(code **)(*param_1 + 0x170))(param_1,local_1b8,param_5);
      }
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14799d7fe FUN_14799d7fe body=411 status=ok
// SIG undefined FUN_14799d7fe(void)

double * FUN_14799d7fe(longlong *param_1,double *param_2,double *param_3,longlong param_4,
                      byte param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar1 = *(double *)(param_4 + 0x68);
  if (((0.9998999834060669 <= dVar1 | param_5 |
       -(*(double *)(param_4 + 0x50) <= 9.999999747378752e-05) | -(dVar1 <= 9.999999747378752e-05))
      & 1) == 0) {
    dVar9 = *(double *)(param_4 + 0x58);
    dVar10 = *(double *)(param_4 + 0x60);
    cVar4 = (**(code **)(*param_1 + 0xf8))(param_1,param_4);
    if (cVar4 != '\0') {
      dVar8 = *param_3;
      dVar6 = param_3[1];
      dVar2 = param_3[2];
      dVar1 = (double)-(float)(dVar1 * dVar2 + dVar9 * dVar8 + dVar10 * dVar6) / dVar1;
      if (*(char *)((longlong)param_1 + 0x9c) != '\x01') {
        dVar9 = dVar8 * dVar8 + dVar6 * dVar6;
        dVar10 = dVar1 * dVar1 + dVar9;
        if (((dVar10 != 1.0) || (dVar5 = dVar6, dVar7 = dVar8, dVar3 = dVar1, NAN(dVar10))) &&
           (dVar5 = DAT_14c8464e8, dVar7 = DAT_14c8464e0, dVar3 = DAT_14c8464f0,
           9.99999993922529e-09 <= dVar10)) {
          dVar10 = 1.0 / SQRT(dVar10);
          dVar5 = dVar6 * dVar10;
          dVar7 = dVar8 * dVar10;
          dVar3 = dVar1 * dVar10;
        }
        dVar8 = SQRT(dVar2 * dVar2 + dVar9);
        dVar1 = dVar3 * dVar8;
        dVar6 = dVar5 * dVar8;
        dVar8 = dVar7 * dVar8;
      }
      *param_2 = dVar8;
      param_2[1] = dVar6;
      param_2[2] = dVar1;
      return param_2;
    }
  }
  param_2[2] = param_3[2];
  dVar1 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = dVar1;
  return param_2;
}



// FUNCTION 14799d99a FUN_14799d99a body=74 status=ok
// SIG undefined FUN_14799d99a(void)

undefined8 FUN_14799d99a(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((char)param_1[0x12] == '\x01') {
    cVar1 = (**(code **)(*param_1 + 0x268))();
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_1 + 0x278))(param_1,param_2);
      if (cVar1 == '\0') goto LAB_14799d9db;
    }
    uVar2 = CONCAT71((int7)((ulonglong)param_1[0x54] >> 8),*(undefined1 *)(param_1[0x54] + 9));
  }
  else {
LAB_14799d9db:
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14799d9e4 FUN_14799d9e4 body=117 status=ok
// SIG undefined FUN_14799d9e4(void)

undefined8 *
FUN_14799d9e4(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  double dVar1;
  undefined8 uVar2;
  char cVar3;
  
  dVar1 = (double)param_3[2];
  if ((dVar1 != 0.0) || (NAN(dVar1))) {
    cVar3 = (**(code **)(*param_1 + 0x278))(SUB84(dVar1,0),param_4);
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(*param_1 + 0x268))(param_1,param_4);
      if (cVar3 == '\0') goto LAB_14799da3e;
    }
    uVar2 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = uVar2;
    param_2[2] = 0;
  }
  else {
LAB_14799da3e:
    param_2[2] = param_3[2];
    uVar2 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = uVar2;
  }
  return param_2;
}



// FUNCTION 14799db3e FUN_14799db3e body=158 status=ok
// SIG undefined FUN_14799db3e(void)

void FUN_14799db3e(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (*(char *)(param_1 + 0x43) == '\x01') {
    dVar1 = *(double *)(param_1 + 0x68);
    dVar2 = *(double *)(param_1 + 0x70);
    dVar3 = param_3[2] * dVar2 + *param_3 * *(double *)(param_1 + 0x60) + param_3[1] * dVar1;
    *param_3 = *param_3 - dVar3 * *(double *)(param_1 + 0x60);
    param_3[1] = param_3[1] - dVar1 * dVar3;
    param_3[2] = param_3[2] - dVar2 * dVar3;
  }
  param_2[2] = param_3[2];
  dVar1 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = dVar1;
  return;
}



// FUNCTION 14799dbdc FUN_14799dbdc body=276 status=ok
// SIG undefined FUN_14799dbdc(void)

void FUN_14799dbdc(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if (*(char *)(param_1 + 0x43) == '\x01') {
    dVar1 = param_3[2] * *(double *)(param_1 + 0x70) +
            *param_3 * *(double *)(param_1 + 0x60) + param_3[1] * *(double *)(param_1 + 0x68);
    dVar5 = param_3[2] - *(double *)(param_1 + 0x70) * dVar1;
    dVar3 = param_3[1] - *(double *)(param_1 + 0x68) * dVar1;
    dVar1 = *param_3 - dVar1 * *(double *)(param_1 + 0x60);
    dVar7 = dVar5 * dVar5 + dVar1 * dVar1 + dVar3 * dVar3;
    if (((dVar7 != 1.0) || (dVar4 = dVar3, dVar6 = dVar5, dVar2 = dVar1, NAN(dVar7))) &&
       (dVar4 = DAT_14c8464e8, dVar6 = DAT_14c8464f0, dVar2 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar7)) {
      dVar7 = 1.0 / SQRT(dVar7);
      dVar4 = dVar3 * dVar7;
      dVar6 = dVar5 * dVar7;
      dVar2 = dVar1 * dVar7;
    }
    *param_3 = dVar2;
    param_3[1] = dVar4;
    param_3[2] = dVar6;
  }
  param_2[2] = param_3[2];
  dVar1 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = dVar1;
  return;
}


