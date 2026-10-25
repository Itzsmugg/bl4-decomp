// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14855c2e8 FUN_14855c2e8 body=62 status=ok
// SIG undefined FUN_14855c2e8(void)

void FUN_14855c2e8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14855c326(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,8);
  }
  return;
}



// FUNCTION 14855c326 FUN_14855c326 body=112 status=ok
// SIG undefined FUN_14855c326(void)

ulonglong FUN_14855c326(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x50) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14855c360;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x50,8);
      param_2 = param_2 / 0x50;
    }
  }
LAB_14855c360:
  return param_2 & 0xffffffff;
}



// FUNCTION 14855c396 FUN_14855c396 body=9 status=ok
// SIG undefined FUN_14855c396(void)

void FUN_14855c396(longlong param_1)

{
  FUN_1485221be(param_1 + 0x10);
  return;
}



// FUNCTION 14855c3a0 FUN_14855c3a0 body=29 status=ok
// SIG undefined FUN_14855c3a0(void)

undefined8 FUN_14855c3a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14855c3be FUN_14855c3be body=326 status=ok
// SIG undefined FUN_14855c3be(void)

undefined4 * FUN_14855c3be(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_14855c506(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_14855c5ec(param_1,uVar4,local_40,&local_4c);
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
      FUN_14855c6de(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855c506 FUN_14855c506 body=230 status=ok
// SIG undefined FUN_14855c506(void)

int * FUN_14855c506(longlong *param_1,int *param_2)

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



// FUNCTION 14855c5ec FUN_14855c5ec body=128 status=ok
// SIG undefined FUN_14855c5ec(void)

undefined8 FUN_14855c5ec(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14855c66c((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14855c66c FUN_14855c66c body=114 status=ok
// SIG undefined FUN_14855c66c(void)

void FUN_14855c66c(longlong *param_1,int param_2)

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



// FUNCTION 14855c6de FUN_14855c6de body=474 status=ok
// SIG undefined FUN_14855c6de(void)

void FUN_14855c6de(longlong *param_1)

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



// FUNCTION 14855c8ba FUN_14855c8ba body=29 status=ok
// SIG undefined FUN_14855c8ba(void)

undefined8 FUN_14855c8ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14855c8f2 FUN_14855c8f2 body=29 status=ok
// SIG undefined FUN_14855c8f2(void)

bool FUN_14855c8f2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14855c910 FUN_14855c910 body=26 status=ok
// SIG undefined FUN_14855c910(void)

bool FUN_14855c910(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14855c92a FUN_14855c92a body=24 status=ok
// SIG undefined FUN_14855c92a(void)

bool FUN_14855c92a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14855c94e FUN_14855c94e body=93 status=ok
// SIG undefined FUN_14855c94e(void)

void FUN_14855c94e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14af1a3f0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14af1a380;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14855c9ac FUN_14855c9ac body=93 status=ok
// SIG undefined FUN_14855c9ac(void)

void FUN_14855c9ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14af1a3f0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14af1a380;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14855ca0a FUN_14855ca0a body=126 status=ok
// SIG undefined FUN_14855ca0a(void)

void FUN_14855ca0a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  _LIST_ENTRY *p_Var5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14af1a3f0;
  p_Var5 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var1 = &PTR_FUN_14af1a380;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014855ca79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14855ca88 FUN_14855ca88 body=36 status=ok
// SIG undefined FUN_14855ca88(void)

void FUN_14855ca88(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014855caa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,*(undefined8 *)(param_1 + 8),*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14855caac FUN_14855caac body=146 status=ok
// SIG undefined FUN_14855caac(void)

bool FUN_14855caac(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,*(undefined8 *)(param_1 + 8));
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855cb42 FUN_14855cb42 body=326 status=ok
// SIG undefined FUN_14855cb42(void)

undefined4 * FUN_14855cb42(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_14855cc8a(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_14855cd70(param_1,uVar4,local_40,&local_4c);
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
      FUN_14855ce62(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855cc8a FUN_14855cc8a body=230 status=ok
// SIG undefined FUN_14855cc8a(void)

int * FUN_14855cc8a(longlong *param_1,int *param_2)

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



// FUNCTION 14855cd70 FUN_14855cd70 body=128 status=ok
// SIG undefined FUN_14855cd70(void)

undefined8 FUN_14855cd70(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14855cdf0((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14855cdf0 FUN_14855cdf0 body=114 status=ok
// SIG undefined FUN_14855cdf0(void)

void FUN_14855cdf0(longlong *param_1,int param_2)

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



// FUNCTION 14855ce62 FUN_14855ce62 body=474 status=ok
// SIG undefined FUN_14855ce62(void)

void FUN_14855ce62(longlong *param_1)

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



// FUNCTION 14855d03e FUN_14855d03e body=132 status=ok
// SIG undefined FUN_14855d03e(void)

void FUN_14855d03e(longlong *param_1,ulonglong param_2)

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
          FUN_14855d0c2(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14855d0c2 FUN_14855d0c2 body=87 status=ok
// SIG undefined FUN_14855d0c2(void)

void FUN_14855d0c2(longlong *param_1,int param_2)

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
  FUN_14855c66c();
  return;
}



// FUNCTION 14855d11a FUN_14855d11a body=132 status=ok
// SIG undefined FUN_14855d11a(void)

void FUN_14855d11a(longlong *param_1,ulonglong param_2)

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
          FUN_14855d19e(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14855d19e FUN_14855d19e body=87 status=ok
// SIG undefined FUN_14855d19e(void)

void FUN_14855d19e(longlong *param_1,int param_2)

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
  FUN_14855cdf0();
  return;
}



// FUNCTION 14855d1f6 FUN_14855d1f6 body=312 status=ok
// SIG undefined FUN_14855d1f6(void)

undefined4 * FUN_14855d1f6(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14855d330(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_14855d416(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14855d504(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855d330 FUN_14855d330 body=229 status=ok
// SIG undefined FUN_14855d330(void)

int * FUN_14855d330(longlong *param_1,int *param_2)

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



// FUNCTION 14855d416 FUN_14855d416 body=124 status=ok
// SIG undefined FUN_14855d416(void)

undefined8 FUN_14855d416(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_14855d492(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14855d492 FUN_14855d492 body=114 status=ok
// SIG undefined FUN_14855d492(void)

void FUN_14855d492(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 14855d504 FUN_14855d504 body=477 status=ok
// SIG undefined FUN_14855d504(void)

void FUN_14855d504(longlong *param_1)

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



// FUNCTION 14855d6e2 FUN_14855d6e2 body=322 status=ok
// SIG undefined FUN_14855d6e2(void)

void FUN_14855d6e2(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 14855d826 FUN_14855d826 body=147 status=ok
// SIG undefined FUN_14855d826(void)

void FUN_14855d826(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc0)) {
      uVar5 = uVar4 / 0xc0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14855d8ba FUN_14855d8ba body=48 status=ok
// SIG undefined FUN_14855d8ba(void)

void FUN_14855d8ba(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14855d8ea FUN_14855d8ea body=132 status=ok
// SIG undefined FUN_14855d8ea(void)

void FUN_14855d8ea(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14855d970 FUN_14855d970 body=132 status=ok
// SIG undefined FUN_14855d970(void)

void FUN_14855d970(longlong param_1,int param_2)

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



// FUNCTION 14855d9f6 FUN_14855d9f6 body=29 status=ok
// SIG undefined FUN_14855d9f6(void)

undefined8 FUN_14855d9f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14855da2e FUN_14855da2e body=29 status=ok
// SIG undefined FUN_14855da2e(void)

bool FUN_14855da2e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14855da4c FUN_14855da4c body=26 status=ok
// SIG undefined FUN_14855da4c(void)

bool FUN_14855da4c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14855da66 FUN_14855da66 body=24 status=ok
// SIG undefined FUN_14855da66(void)

bool FUN_14855da66(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14855da7e FUN_14855da7e body=93 status=ok
// SIG undefined FUN_14855da7e(void)

void FUN_14855da7e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af1a4a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14855dadc FUN_14855dadc body=93 status=ok
// SIG undefined FUN_14855dadc(void)

void FUN_14855dadc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af1a4a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14855db3a FUN_14855db3a body=126 status=ok
// SIG undefined FUN_14855db3a(void)

void FUN_14855db3a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aeff220;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14af1a4a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014855dba9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14855dbb8 FUN_14855dbb8 body=111 status=ok
// SIG undefined FUN_14855dbb8(void)

void FUN_14855dbb8(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = FUN_14479d2ce(param_1 + 0x18);
  pcVar1 = *(code **)(param_1 + 0x20);
  puVar4 = local_88;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  (*pcVar1)(uVar2,param_2);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855dc28 FUN_14855dc28 body=191 status=ok
// SIG undefined FUN_14855dc28(void)

bool FUN_14855dc28(longlong param_1,undefined8 param_2,longlong *param_3)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  longlong local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar2 = FUN_144a61b4f();
  if (cVar2 == '\0') {
    FUN_140192332(param_1 + 0x18,local_98,0);
    lVar6 = local_98[0];
  }
  else {
    lVar6 = 0;
  }
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar3 != 0) {
    pcVar1 = *(code **)(param_1 + 0x20);
    plVar5 = local_98;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *plVar5 = *param_3;
      param_3 = param_3 + 1;
      plVar5 = plVar5 + 1;
    }
    (*pcVar1)(lVar3,param_2);
  }
  if ((lVar6 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855dce8 FUN_14855dce8 body=29 status=ok
// SIG undefined FUN_14855dce8(void)

undefined8 FUN_14855dce8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14855dd20 FUN_14855dd20 body=29 status=ok
// SIG undefined FUN_14855dd20(void)

bool FUN_14855dd20(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14855dd3e FUN_14855dd3e body=26 status=ok
// SIG undefined FUN_14855dd3e(void)

bool FUN_14855dd3e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14855dd58 FUN_14855dd58 body=24 status=ok
// SIG undefined FUN_14855dd58(void)

bool FUN_14855dd58(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14855dd70 FUN_14855dd70 body=93 status=ok
// SIG undefined FUN_14855dd70(void)

void FUN_14855dd70(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14af12c50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af1a510;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14855ddce FUN_14855ddce body=93 status=ok
// SIG undefined FUN_14855ddce(void)

void FUN_14855ddce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14af12c50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af1a510;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14855de2c FUN_14855de2c body=126 status=ok
// SIG undefined FUN_14855de2c(void)

void FUN_14855de2c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14af12c50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14af1a510;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014855de9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14855deaa FUN_14855deaa body=40 status=ok
// SIG undefined FUN_14855deaa(void)

void FUN_14855deaa(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014855decf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14855ded2 FUN_14855ded2 body=152 status=ok
// SIG undefined FUN_14855ded2(void)

bool FUN_14855ded2(longlong param_1,undefined8 param_2)

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



// FUNCTION 14855df6c FUN_14855df6c body=287 status=ok
// SIG undefined FUN_14855df6c(void)

undefined4 * FUN_14855df6c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14855e08c(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar7 = *(uint *)*param_3;
  *local_40 = uVar7;
  uVar6 = puVar1[1];
  uVar2 = puVar1[2];
  uVar3 = puVar1[3];
  local_40[1] = *puVar1;
  local_40[2] = uVar6;
  local_40[3] = uVar2;
  local_40[4] = uVar3;
  local_40[5] = 0xffffffff;
  local_4c = local_48[0];
  cVar5 = FUN_14855e188(param_1,uVar7,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar5 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[6] = uVar7;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      local_40[5] = *(uint *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                       (longlong)(int)uVar7) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_14855e298(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855e08c FUN_14855e08c body=251 status=ok
// SIG undefined FUN_14855e08c(void)

int * FUN_14855e08c(longlong *param_1,int *param_2)

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
      FUN_1406245f8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x1c);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x1c) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 14855e188 FUN_14855e188 body=144 status=ok
// SIG undefined FUN_14855e188(void)

undefined8 FUN_14855e188(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x1c);
        if (*(int *)(*param_1 + (longlong)iVar7 * 0x1c) == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          piVar1[4] = param_3[4];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_14855e218(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[5];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 14855e218 FUN_14855e218 body=128 status=ok
// SIG undefined FUN_14855e218(void)

void FUN_14855e218(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c + 4) = uVar4;
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



// FUNCTION 14855e298 FUN_14855e298 body=430 status=ok
// SIG undefined FUN_14855e298(void)

void FUN_14855e298(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
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
  uVar5 = local_58;
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
    uVar5 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar6 = local_58._4_4_;
      local_58 = uVar5;
      do {
        lVar3 = *local_70;
        lVar4 = (longlong)iVar6 * 0x1c;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar4);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x18 + lVar4) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x14 + lVar4) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar6 = local_58._4_4_;
        uVar5 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar5;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14855e502 FUN_14855e502 body=495 status=ok
// SIG undefined FUN_14855e502(void)

void FUN_14855e502(undefined8 param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined1 local_b5;
  undefined2 local_b4 [2];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined7 local_3f;
  undefined1 uStack_38;
  undefined8 uStack_37;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uStack_38 = 0;
  uStack_37 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_3f = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  local_b4[0] = 0x101;
  local_b0 = 0x3e19999a40a00000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b4);
  }
  puVar1 = *(undefined2 **)(param_2 + 0x38);
  local_b5 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b5);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b5);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_c0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  puVar5 = &local_b5;
  if (puVar2 != (undefined1 *)0x0) {
    puVar5 = puVar2;
  }
  puVar3 = local_b4;
  if (puVar1 != (undefined2 *)0x0) {
    puVar3 = puVar1;
  }
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = &local_a8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14855e6f2(puVar4,puVar3,puVar5);
  FUN_1400d7d10(&local_a8);
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855e6f2 FUN_14855e6f2 body=1736 status=ok
// SIG undefined FUN_14855e6f2(void)

void FUN_14855e6f2(longlong *param_1,char *param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  longlong *plVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  longlong lVar12;
  int iVar13;
  float *pfVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_228 [32];
  undefined8 local_208;
  longlong *local_1f8;
  longlong *local_1f0;
  undefined1 *local_1e8;
  longlong local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  code *local_1c8;
  undefined8 **local_1c0;
  undefined1 *local_1b8;
  undefined8 **local_1b0;
  undefined1 *local_1a8;
  undefined8 **local_1a0;
  undefined1 *local_198;
  undefined8 **local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 *local_170;
  char *pcStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  double local_150;
  double local_148;
  double local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  double local_120;
  undefined8 *local_118;
  char *pcStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  *param_3 = 0;
  local_1e8 = param_3;
  if (((param_2[1] != '\0') || (*param_2 == '\x01')) && (0 < (int)param_1[7])) {
    local_1f0 = param_1 + 6;
    iVar13 = 0;
    dVar7 = 1.79769313486232e+308;
    local_1f8 = param_1 + 2;
    do {
      lVar3 = *local_1f0;
      lVar12 = (longlong)iVar13 * 0x100;
      puVar1 = (undefined8 *)(lVar3 + lVar12);
      uStack_180 = lVar3 + lVar12 + 0x40;
      lVar12 = lVar3 + 0x30 + lVar12;
      local_188 = lVar12;
      FUN_14857f740(&local_118,&local_188);
      dVar5 = *(double *)(lVar12 + 0xa0) * *(double *)(lVar12 + 0xa8) * *(double *)(lVar12 + 0xb0) *
              -(double)local_118;
      local_128 = DAT_14c8464f0;
      local_138 = (undefined4)DAT_14c8464e0;
      uStack_134 = DAT_14c8464e0._4_4_;
      uStack_130 = (undefined4)DAT_14c8464e8;
      uStack_12c = DAT_14c8464e8._4_4_;
      bVar10 = 0;
      local_120 = 0.0;
      local_178 = DAT_14c8464f0;
      local_188 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_180 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_160 = 0;
      local_170 = (undefined8 *)0x0;
      pcStack_168 = (char *)0x0;
      uStack_158 = 0x3ff0000000000000;
      local_150 = 1.0;
      local_148 = 1.0;
      local_140 = 1.0;
      dVar4 = dVar7;
      if (*param_2 == '\x01') {
        local_1e0 = 0;
        local_190 = &local_118;
        local_198 = &LAB_143bb3002;
        bVar10 = 0;
        local_118 = puVar1;
        cVar9 = FUN_14826a96c(&local_1e0,*(undefined4 *)(puVar1 + 7),&local_198,0);
        if (cVar9 != '\0') {
          FUN_14826ab42(&local_1e0,&local_138);
          dVar4 = ABS((local_120 * 4.1887902047863905 * local_120 * local_120) / dVar5 + -1.0);
          if ((double)*(float *)(param_2 + 8) <= dVar4) {
            bVar10 = 0;
          }
          else {
            local_1a0 = &local_118;
            local_1a8 = &LAB_143bb3024;
            local_118 = (undefined8 *)&local_138;
            pcStack_110 = param_2;
            bVar10 = FUN_143ba974a(puVar1,&local_1a8);
          }
        }
        if (local_1e0 != 0) {
          (**(code **)(local_1e0 + -0x10))(local_1e0 + -0x10);
        }
      }
      dVar17 = dVar7;
      if (param_2[1] == '\x01') {
        bVar11 = 0;
        local_1e0 = 0;
        local_1b0 = &local_118;
        local_1b8 = &LAB_143bb3080;
        local_208 = 0;
        local_118 = puVar1;
        cVar9 = FUN_14826a48c(&local_1e0,*(undefined4 *)(puVar1 + 7),&local_1b8);
        if (cVar9 != '\0') {
          FUN_14826a958(&local_1e0,&local_188);
          uVar15 = 0;
          uVar16 = 0;
          if (0.0 <= local_150) {
            uVar15 = SUB84(local_150,0);
            uVar16 = (undefined4)((ulonglong)local_150 >> 0x20);
          }
          dVar17 = 0.0;
          if (0.0 <= local_148) {
            dVar17 = local_148;
          }
          uVar18 = 0;
          uVar19 = 0;
          if (0.0 <= local_140) {
            uVar18 = SUB84(local_140,0);
            uVar19 = (undefined4)((ulonglong)local_140 >> 0x20);
          }
          dVar17 = ABS(((double)CONCAT44(uVar19,uVar18) *
                       dVar17 * (double)CONCAT44(uVar16,uVar15) * 8.0) / dVar5 + -1.0);
          if ((double)*(float *)(param_2 + 8) <= dVar17) {
            bVar11 = 0;
          }
          else {
            local_1c0 = &local_118;
            local_1c8 = FUN_143bb30a2;
            local_118 = &local_188;
            pcStack_110 = param_2;
            bVar11 = FUN_143ba974a(puVar1,&local_1c8);
          }
        }
        if (local_1e0 != 0) {
          (**(code **)(local_1e0 + -0x10))(local_1e0 + -0x10);
        }
      }
      else {
        bVar11 = 0;
      }
      if ((bVar10 | bVar11) == 1) {
        if (dVar4 <= dVar17) {
          iVar2 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
            FUN_140e25fd0(param_1,iVar2);
          }
          lVar12 = *param_1;
          puVar1 = (undefined8 *)(lVar12 + (longlong)iVar2 * 0x50);
          pfVar14 = (float *)(puVar1 + 9);
          puVar1[1] = 0;
          puVar1[2] = 0;
          *(byte *)(puVar1 + 3) = *(byte *)(puVar1 + 3) | 1;
          *(undefined1 *)((longlong)puVar1 + 0x19) = 3;
          *(undefined4 *)(puVar1 + 4) = 6;
          puVar1[5] = lVar12 + (longlong)iVar2 * 0x50;
          *puVar1 = &PTR_FUN_14a418310;
          puVar1[8] = DAT_14c8464f0;
          uVar6 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          puVar1[6] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          puVar1[7] = uVar6;
          *pfVar14 = 1.0;
          puVar1[8] = local_128;
          puVar1[6] = CONCAT44(uStack_134,local_138);
          puVar1[7] = CONCAT44(uStack_12c,uStack_130);
          dVar4 = local_120;
        }
        else {
          iVar2 = (int)param_1[3];
          *(uint *)(param_1 + 3) = iVar2 + 1U;
          if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
            FUN_140c9d5a2(local_1f8,iVar2);
          }
          lVar12 = *local_1f8;
          puVar1 = (undefined8 *)(lVar12 + (longlong)iVar2 * 0x70);
          pfVar14 = (float *)(puVar1 + 0xd);
          puVar1[1] = 0;
          puVar1[2] = 0x100000000;
          *(byte *)(puVar1 + 3) = *(byte *)(puVar1 + 3) | 1;
          *(undefined1 *)((longlong)puVar1 + 0x19) = 3;
          *(undefined4 *)(puVar1 + 4) = 6;
          puVar1[5] = lVar12 + (longlong)iVar2 * 0x70;
          *puVar1 = &PTR_FUN_14a1e3c70;
          uVar6 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          puVar1[6] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          puVar1[7] = uVar6;
          puVar1[8] = DAT_14c8464f0;
          uVar6 = DAT_14c846500;
          puVar1[9] = DAT_14c8464f8;
          puVar1[10] = uVar6;
          puVar1[0xb] = DAT_14c846508;
          puVar1[0xc] = &DAT_3f8000003f800000;
          *pfVar14 = 1.0;
          puVar1[8] = local_178;
          puVar1[6] = local_188;
          puVar1[7] = uStack_180;
          local_118 = local_170;
          pcStack_110 = pcStack_168;
          local_108 = local_160;
          uStack_100 = uStack_158;
          FUN_1448052ee(&local_118,&local_1e0);
          puVar1[0xb] = local_1d0;
          puVar1[9] = local_1e0;
          puVar1[10] = uStack_1d8;
          *(float *)(puVar1 + 0xc) = (float)(local_150 + local_150);
          *(float *)((longlong)puVar1 + 100) = (float)(local_148 + local_148);
          dVar4 = local_140 + local_140;
        }
        plVar8 = local_1f0;
        *pfVar14 = (float)dVar4;
        FUN_148581e30(local_1f0,iVar13);
        FUN_1485167b0(plVar8);
        iVar13 = iVar13 + -1;
        *local_1e8 = 1;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < (int)param_1[7]);
  }
  if ((local_f0 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14855edbc FUN_14855edbc body=479 status=ok
// SIG undefined FUN_14855edbc(void)

void FUN_14855edbc(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_168 [40];
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined7 local_cf;
  undefined1 uStack_c8;
  undefined8 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined7 local_4f;
  undefined1 uStack_48;
  undefined8 uStack_47;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uStack_48 = 0;
  uStack_47 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_4f = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  local_cf = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_138);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_138);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_140 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_140);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_140);
  }
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = &local_138;
  }
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = &local_b8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14855ef9c(puVar2,puVar1,local_140);
  FUN_1400d7d10(&local_138);
  FUN_1400d7d10(&local_b8);
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855ef9c FUN_14855ef9c body=307 status=ok
// SIG undefined FUN_14855ef9c(void)

void FUN_14855ef9c(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 == param_2) {
    local_38 = L"CombineSimpleCollision Combining Collision Shapes with Self";
    local_30 = 0x3b;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"UGeometryScriptLibrary_CollisionFunctions";
    local_30 = 0x29;
    FUN_1446e940c(local_40,&local_38);
    FUN_140208bae(&local_38,local_40,local_3c,
                  L"CombineSimpleCollision: Collision and AppendCollision must be different Simple Collision objects."
                 );
    FUN_143ba9449(param_3,2,&local_38);
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 0x10))();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  FUN_1407e1c1c(param_1 + 0x10,param_2 + 0x10);
  FUN_1407e1cd4(param_1 + 0x30,param_2 + 0x30);
  FUN_1407e1c78(param_1 + 0x20,param_2 + 0x20);
  FUN_1407e1d32(param_1,param_2);
  FUN_148567ad2(param_1 + 0x40,param_2 + 0x40);
  FUN_1407e1d92(param_1 + 0x50,param_2 + 0x50);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_148567b2e(param_1 + 0x60,param_2 + 0x60);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855f0dc FUN_14855f0dc body=494 status=ok
// SIG undefined FUN_14855f0dc(void)

void FUN_14855f0dc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined7 local_5f;
  undefined1 uStack_58;
  undefined8 uStack_57;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  plVar3 = plVar1;
  if (plVar1 == (longlong *)0x0) {
    plVar3 = &local_48;
  }
  uStack_58 = 0;
  uStack_57 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  local_5f = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  puVar5 = &local_c8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  local_d0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  uVar2 = local_d0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar7 = &local_48;
  if (plVar1 != (longlong *)0x0) {
    plVar7 = plVar1;
  }
  if ((longlong)(int)plVar7[1] != 0) {
    lVar4 = *plVar3;
    lVar6 = (longlong)(int)plVar7[1] << 7;
    do {
      FUN_14855ef9c(puVar5,lVar4,uVar2);
      lVar4 = lVar4 + 0x80;
      lVar6 = lVar6 + -0x80;
    } while (lVar6 != 0);
  }
  FUN_1400d7d10(&local_c8);
  FUN_148581bf2(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855f2cc FUN_14855f2cc body=490 status=ok
// SIG undefined FUN_14855f2cc(void)

void FUN_14855f2cc(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [128];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_60 = 0x4059000000000000;
  local_58 = 0x4024000000000000;
  local_50 = 1;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  puVar1 = &local_60;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14855f4b8(local_e8,local_28,puVar1,local_68);
  FUN_1401842de(param_3);
  FUN_14058b698(param_3,local_e8);
  FUN_1400d7d10(local_e8);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855f4b8 FUN_14855f4b8 body=267 status=ok
// SIG undefined FUN_14855f4b8(void)

undefined8 * FUN_14855f4b8(undefined8 *param_1,longlong param_2,wchar_t *param_3,undefined8 param_4)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)((longlong)param_1 + 0x69) = 0;
  *(undefined8 *)((longlong)param_1 + 0x71) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 == 0) {
    local_40 = L"ComputeNavigableConvexDecomposition_NullInput";
    local_38._0_4_ = 0x2d;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"UGeometryScriptLibrary_CollisionFunctions";
    local_38 = (undefined8 *)CONCAT44(local_38._4_4_,0x29);
    FUN_1446e940c(local_48,&local_40);
    FUN_140208bae(&local_40,local_48,local_44,
                  L"ComputeNavigableConvexDecomposition: Dynamic Mesh is Null");
    FUN_143ba90d7(param_4,2,&local_40);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
  }
  else {
    local_40 = param_3;
    local_38 = param_1;
    FUN_143bb315e(&local_40,*(undefined8 *)(param_2 + 0x98));
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855f5c4 FUN_14855f5c4 body=490 status=ok
// SIG undefined FUN_14855f5c4(void)

void FUN_14855f5c4(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  longlong *local_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined8 local_6c;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar3 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  local_70 = 0;
  local_6e = 0;
  local_6c = 0x3200000080;
  local_60 = 0x3ff0000000000000;
  local_58 = 0x4000000000000000;
  local_50 = 0x4024000000000000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  puVar4 = &local_70;
  if (*(undefined2 **)(param_2 + 0x38) != (undefined2 *)0x0) {
    puVar4 = *(undefined2 **)(param_2 + 0x38);
  }
  local_78 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14855f7b0(local_88,puVar3,puVar4,local_78);
  FUN_14855f9c8(param_3,local_88);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_80 + 0x10))(local_80);
      }
    }
  }
  FUN_14855fa28(&local_48);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855f7b0 FUN_14855f7b0 body=535 status=ok
// SIG undefined FUN_14855f7b0(void)

undefined8 * FUN_14855f7b0(undefined8 *param_1,longlong *param_2,char *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined1 auStack_168 [40];
  undefined1 local_140 [4];
  undefined1 local_13c [4];
  undefined8 local_138;
  double local_130;
  undefined1 local_128;
  double local_120;
  double local_118;
  char local_110;
  char local_10f;
  int local_10c;
  undefined1 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  longlong local_e8;
  longlong *local_d8;
  longlong local_c8 [4];
  undefined8 local_a8;
  undefined8 local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_2[2] == 0) || (*param_2 == 0)) {
    local_138 = L"ComputeNegativeSpace_Null_BVH";
    local_130._0_4_ = 0x1d;
    FUN_1446e940c(local_13c,&local_138);
    local_138 = L"UGeometryScriptLibrary_CollisionFunctions";
    local_130 = (double)CONCAT44(local_130._4_4_,0x29);
    FUN_1446e940c(local_140,&local_138);
    FUN_140208bae(&local_138,local_140,local_13c,L"ComputeNegativeSpace: BVH must be initialized");
    FUN_143ba90d7(param_4,2,&local_138);
    if (local_138 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_138 + 0x10))();
    }
  }
  else {
    local_128 = 0;
    local_108 = 1;
    local_100 = 0x3fe0000000000000;
    local_f8 = 0;
    local_f0 = 0x3ff0000000000000;
    local_e8 = 0;
    local_d8 = (longlong *)0x0;
    local_a8 = 0x3ff0000000000000;
    puVar4 = &DAT_14c846480;
    puVar5 = local_98;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar1 = 2;
    if (*param_3 != '\x02') {
      uVar1 = *param_3 == '\x01';
    }
    local_130 = 0.0;
    if (0.0 <= *(double *)(param_3 + 0x10)) {
      local_130 = *(double *)(param_3 + 0x10);
    }
    local_120 = 0.0;
    if (0.0 <= *(double *)(param_3 + 0x18)) {
      local_120 = *(double *)(param_3 + 0x18);
    }
    local_118 = 0.0;
    if (0.0 <= *(double *)(param_3 + 0x20)) {
      local_118 = *(double *)(param_3 + 0x20);
    }
    local_138 = (wchar_t *)CONCAT71(local_138._1_7_,uVar1);
    local_110 = param_3[1];
    local_10f = param_3[2];
    iVar6 = 1;
    if (1 < *(int *)(param_3 + 8)) {
      iVar6 = *(int *)(param_3 + 8);
    }
    local_138 = (wchar_t *)CONCAT44(iVar6,(undefined4)local_138);
    iVar6 = 0x50a;
    if (*(int *)(param_3 + 4) < 0x50a) {
      iVar6 = *(int *)(param_3 + 4);
    }
    local_10c = 4;
    if (4 < iVar6) {
      local_10c = iVar6;
    }
    FUN_148567b8a(param_1);
    FUN_146b9dbb6(*param_1,param_2[2],&local_138,0);
    if (local_e8 != 0) {
      plVar3 = local_d8;
      if (local_d8 == (longlong *)0x0) {
        plVar3 = local_c8;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855f9c8 FUN_14855f9c8 body=96 status=ok
// SIG undefined FUN_14855f9c8(void)

undefined8 * FUN_14855f9c8(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    plVar2 = (longlong *)param_2[1];
    plVar3 = (longlong *)param_1[1];
    if (plVar2 != plVar3) {
      param_2[1] = 0;
      param_1[1] = plVar2;
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
    }
  }
  return param_1;
}



// FUNCTION 14855fa28 FUN_14855fa28 body=100 status=ok
// SIG undefined FUN_14855fa28(void)

void FUN_14855fa28(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
                    /* WARNING: Could not recover jumptable at 0x00014855fa80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14855fa8c FUN_14855fa8c body=275 status=ok
// SIG undefined FUN_14855fa8c(void)

void FUN_14855fa8c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
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
  FUN_14855fba0(&local_38,puVar4);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    local_38 = 0;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855fba0 FUN_14855fba0 body=129 status=ok
// SIG undefined FUN_14855fba0(void)

longlong * FUN_14855fba0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (*param_2 != 0) {
    lVar7 = (longlong)*(int *)(*param_2 + 8);
    FUN_148567c7c();
    if (0 < lVar7) {
      lVar5 = 0;
      lVar6 = 0;
      do {
        lVar2 = *param_1;
        puVar1 = (undefined8 *)(*(longlong *)*param_2 + lVar6 * 8);
        uVar3 = *puVar1;
        uVar4 = puVar1[1];
        *(undefined8 *)(lVar2 + 0x10 + lVar5 * 4) =
             *(undefined8 *)(*(longlong *)*param_2 + 0x10 + lVar6 * 8);
        puVar1 = (undefined8 *)(lVar2 + lVar5 * 4);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        *(undefined8 *)(lVar2 + 0x18 + lVar5 * 4) =
             *(undefined8 *)(*(longlong *)(*param_2 + 0x10) + lVar5);
        lVar6 = lVar6 + 3;
        lVar5 = lVar5 + 8;
      } while (lVar7 * 3 != lVar6);
    }
  }
  return param_1;
}



// FUNCTION 14855fc22 FUN_14855fc22 body=267 status=ok
// SIG undefined FUN_14855fc22(void)

void FUN_14855fc22(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  longlong local_48 [3];
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar3 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  FUN_148567b8a(&local_58);
  local_30 = *plVar3;
  local_28 = (undefined4)plVar3[1];
  FUN_148567cc4(local_58);
  FUN_14855f9c8(param_3,&local_58);
  plVar3 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855fd2e FUN_14855fd2e body=503 status=ok
// SIG undefined FUN_14855fd2e(void)

void FUN_14855fd2e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [128];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_50 = 0x1010601;
  uStack_4c = CONCAT31(uStack_4c._1_3_,1);
  uStack_48 = 0x3f800000;
  uStack_44 = CONCAT31(uStack_44._1_3_,1);
  local_40 = 0x19;
  uStack_3c = 1;
  uStack_38 = 0x3f000000;
  uStack_34 = 0;
  local_30 = 0x3dcccccd3dcccccd;
  uStack_28 = CONCAT22(uStack_28._2_2_,0x102);
  uStack_24 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_108 = local_50;
  uStack_104 = uStack_4c;
  uStack_100 = uStack_48;
  uStack_fc = uStack_44;
  local_f8 = local_40;
  uStack_f4 = uStack_3c;
  uStack_f0 = uStack_38;
  uStack_ec = uStack_34;
  local_e8 = (undefined4)local_30;
  uStack_e4 = local_30._4_4_;
  uStack_e0 = uStack_28;
  uStack_dc = uStack_24;
  FUN_14855ff26(local_d8,local_20,&local_108,local_58);
  FUN_1401842de(param_3);
  FUN_14058b698(param_3,local_d8);
  FUN_1400d7d10(local_d8);
  if ((local_18 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855ff26 FUN_14855ff26 body=266 status=ok
// SIG undefined FUN_14855ff26(void)

undefined8 *
FUN_14855ff26(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)((longlong)param_1 + 0x69) = 0;
  *(undefined8 *)((longlong)param_1 + 0x71) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 == 0) {
    local_40 = L"GenerateCollisionFromMesh_InvalidInput";
    local_38 = 0x26;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"UGeometryScriptLibrary_CollisionFunctions";
    local_38 = 0x29;
    FUN_1446e940c(local_48,&local_40);
    FUN_140208bae(&local_40,local_48,local_44,L"GenerateCollisionFromMesh: FromDynamicMesh is Null")
    ;
    FUN_143ba90d7(param_4,2,&local_40);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  FUN_148567615(*(undefined8 *)(param_2 + 0x98),param_1);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148560032 FUN_148560032 body=300 status=ok
// SIG undefined FUN_148560032(void)

void FUN_148560032(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [128];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148560160(local_a8,local_20,local_28);
  FUN_1401842de(param_3);
  FUN_14058b698(param_3,local_a8);
  FUN_1400d7d10(local_a8);
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148560160 FUN_148560160 body=383 status=ok
// SIG undefined FUN_148560160(void)

undefined8 * FUN_148560160(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  wchar_t *pwVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)((longlong)param_1 + 0x69) = 0;
  *(undefined8 *)((longlong)param_1 + 0x71) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 == (longlong *)0x0) {
    local_40 = L"GetSimpleCollisionFromComponent_InvalidComponent";
    local_38 = 0x30;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"UGeometryScriptLibrary_CollisionFunctions";
    local_38 = 0x29;
    FUN_1446e940c(local_48,&local_40);
    pwVar2 = L"GetSimpleCollisionFromComponent: Component is Null";
  }
  else {
    lVar1 = (**(code **)(*param_2 + 0x7a0))(param_2);
    if (lVar1 != 0) {
      FUN_1401842de(param_1);
      FUN_14058b698(param_1,lVar1 + 0x38);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
    local_40 = L"GetSimpleCollisionFromComponent_InvalidBodySetup";
    local_38 = 0x30;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"UGeometryScriptLibrary_CollisionFunctions";
    local_38 = 0x29;
    FUN_1446e940c(local_48,&local_40);
    pwVar2 = L"GetSimpleCollisionFromComponent: Component\'s BodySetup is Null";
  }
  FUN_140208bae(&local_40,local_48,local_44,pwVar2);
  FUN_143ba90d7(param_3,2,&local_40);
  if (local_40 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_40 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1485602e0 FUN_1485602e0 body=300 status=ok
// SIG undefined FUN_1485602e0(void)

void FUN_1485602e0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [128];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14856040e(local_a8,local_20,local_28);
  FUN_1401842de(param_3);
  FUN_14058b698(param_3,local_a8);
  FUN_1400d7d10(local_a8);
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856040e FUN_14856040e body=375 status=ok
// SIG undefined FUN_14856040e(void)

undefined8 * FUN_14856040e(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  wchar_t *pwVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)((longlong)param_1 + 0x69) = 0;
  *(undefined8 *)((longlong)param_1 + 0x71) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 == 0) {
    local_40 = L"GetSimpleCollisionFromStaticMesh_InvalidStaticMesh";
    local_38 = 0x32;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"UGeometryScriptLibrary_CollisionFunctions";
    local_38 = 0x29;
    FUN_1446e940c(local_48,&local_40);
    pwVar2 = L"GetSimpleCollisionFromStaticMesh: Input Mesh is Null";
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x188);
    if (lVar1 != 0) {
      FUN_1401842de(param_1);
      FUN_14058b698(param_1,lVar1 + 0x38);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
    local_40 = L"GetSimpleCollisionFromStaticMesh_InvalidBodySetup";
    local_38 = 0x31;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"UGeometryScriptLibrary_CollisionFunctions";
    local_38 = 0x29;
    FUN_1446e940c(local_48,&local_40);
    pwVar2 = L"GetSimpleCollisionFromStaticMesh: Input Mesh\'s BodySetup is Null";
  }
  FUN_140208bae(&local_40,local_48,local_44,pwVar2);
  FUN_143ba90d7(param_3,2,&local_40);
  if (local_40 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_40 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148560586 FUN_148560586 body=241 status=ok
// SIG undefined FUN_148560586(void)

void FUN_148560586(undefined8 param_1,longlong param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined1 uStack_28;
  undefined8 uStack_27;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uStack_28 = 0;
  uStack_27 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_2f = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar1 = &local_98;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = *(int *)(puVar1 + 5) + *(int *)(puVar1 + 1) + *(int *)(puVar1 + 3) +
             *(int *)(puVar1 + 7) + *(int *)(puVar1 + 9) + *(int *)(puVar1 + 0xb) +
             *(int *)(puVar1 + 0xd);
  FUN_1400d7d10();
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148560680 FUN_148560680 body=802 status=ok
// SIG undefined FUN_148560680(void)

void FUN_148560680(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined1 local_1b8 [128];
  undefined8 local_138;
  undefined1 local_129;
  undefined4 local_128 [2];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110;
  undefined8 local_108;
  longlong *plStack_100;
  undefined1 local_f8;
  undefined2 local_f0;
  undefined1 local_ee;
  undefined8 local_ec;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined7 local_4f;
  undefined1 uStack_48;
  undefined8 uStack_47;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  uStack_48 = 0;
  uStack_47 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_4f = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  puVar4 = &local_b8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_128[0] = 0;
  local_f0 = 0;
  local_ee = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  local_f8 = 0;
  local_ec = 0x3200000080;
  local_e0 = 0x3ff0000000000000;
  local_d8 = 0x4000000000000000;
  local_d0 = 0x4024000000000000;
  local_c8 = 0x500000004;
  local_c0 = 8;
  local_bc = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_128);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_128);
  }
  puVar5 = local_128;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar5 = *(undefined4 **)(param_2 + 0x38);
  }
  local_129 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_129);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_129);
  }
  puVar6 = &local_129;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  local_138 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_138);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_138);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1c8 = local_138;
  FUN_1485609a4(local_1b8,puVar4,puVar5,puVar6);
  FUN_1401842de(param_3);
  FUN_14058b698(param_3,local_1b8);
  FUN_1400d7d10(local_1b8);
  plVar3 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_100 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_1400d7d10(&local_b8);
  if ((local_30 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485609a4 FUN_1485609a4 body=7633 status=ok
// SIG undefined FUN_1485609a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1485609a4(undefined8 *param_1,double *param_2,uint *param_3,undefined1 *param_4,
             undefined8 param_5)

{
  byte *pbVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  uint *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined **ppuVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  undefined8 *puVar31;
  undefined1 (*pauVar32) [16];
  undefined1 uVar33;
  longlong *plVar34;
  longlong lVar35;
  int iVar36;
  longlong lVar37;
  double dVar38;
  longlong *plVar39;
  undefined8 *puVar40;
  undefined8 *puVar41;
  undefined8 *puVar42;
  ulonglong uVar43;
  double dVar44;
  int iVar45;
  float fVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined1 auStack_728 [32];
  undefined1 **local_708;
  longlong *local_700;
  int local_6f8;
  longlong *local_6f0;
  undefined8 local_6e8;
  double local_6e0;
  double local_6d8;
  uint *local_6d0;
  double local_6c8;
  undefined8 *local_6c0;
  double local_6b8;
  double local_6b0;
  double local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined1 *local_680;
  double local_678;
  double local_670;
  double local_668;
  double local_660;
  double local_658;
  double local_650;
  double local_648;
  undefined8 uStack_640;
  undefined1 local_638 [16];
  longlong local_628;
  undefined8 uStack_620;
  longlong local_618;
  undefined8 uStack_610;
  undefined1 *local_608;
  int ****local_600;
  undefined1 *local_5f8;
  int ***local_5f0;
  undefined1 *local_5e8;
  undefined8 *local_5e0;
  longlong local_5d8;
  undefined4 local_5d0;
  longlong local_5c8;
  undefined8 uStack_5c0;
  undefined1 (*local_5b8) [16];
  ulonglong uStack_5b0;
  undefined8 local_5a8;
  undefined4 local_5a0;
  undefined1 (*local_598) [16];
  undefined4 local_590;
  undefined1 (*local_588) [16];
  undefined4 local_580;
  undefined ***local_578;
  undefined4 local_570;
  undefined1 (*local_568) [16];
  undefined4 local_560;
  longlong *local_558;
  longlong *local_550;
  double *local_548;
  int **local_540;
  undefined8 **local_538;
  undefined8 *local_530;
  longlong local_528 [2];
  int **local_518;
  undefined8 uStack_510;
  int *local_508;
  ulonglong uStack_500;
  double local_4f8 [2];
  double local_4e8;
  undefined8 uStack_4e0;
  longlong local_4d8;
  undefined8 uStack_4d0;
  longlong local_4c8;
  undefined8 uStack_4c0;
  longlong local_4b8;
  undefined8 uStack_4b0;
  longlong local_4a8;
  undefined8 uStack_4a0;
  longlong local_498;
  undefined8 uStack_490;
  longlong local_488;
  uint local_480;
  uint uStack_47c;
  undefined1 uStack_478;
  undefined8 uStack_477;
  int ***local_468;
  undefined8 uStack_460;
  double local_458;
  undefined8 local_440;
  undefined4 local_438;
  undefined8 local_434;
  undefined4 local_42c;
  longlong local_420;
  undefined4 local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined4 local_400;
  int **local_3f8;
  double local_3f0;
  double local_3e8;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined1 local_318;
  undefined7 uStack_317;
  double dStack_310;
  undefined8 local_308;
  undefined1 local_300;
  undefined1 local_2ff;
  uint local_2fc;
  undefined1 local_2f8;
  undefined8 local_2f0;
  undefined1 local_2e8;
  undefined8 local_2e0;
  longlong local_2d8;
  longlong *local_2c8;
  longlong local_2b8 [4];
  undefined8 local_298;
  undefined8 local_288 [12];
  undefined **local_228;
  undefined1 (*local_220) [16];
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double local_190;
  double dStack_188;
  double dStack_180;
  undefined8 local_178;
  undefined **ppuStack_170;
  undefined1 (*pauStack_168) [16];
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  uint local_138;
  uint uStack_134;
  uint local_130;
  undefined2 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_728;
  uStack_478 = 0;
  uStack_477 = 0;
  local_488 = 0;
  local_480 = 0;
  uStack_47c = 0;
  local_498 = 0;
  uStack_490 = 0;
  local_4a8 = 0;
  uStack_4a0 = 0;
  local_4b8 = 0;
  uStack_4b0 = 0;
  local_4c8 = 0;
  uStack_4c0 = 0;
  local_4d8 = 0;
  uStack_4d0 = 0;
  local_4e8 = 0.0;
  uStack_4e0 = 0;
  *param_4 = 0;
  iVar27 = *(int *)(param_2 + 3);
  if (*(int *)(param_2 + 5) + *(int *)(param_2 + 1) + iVar27 + *(int *)(param_2 + 7) +
      *(int *)(param_2 + 9) + *(int *)(param_2 + 0xb) + *(int *)(param_2 + 0xd) < 2) {
    *(undefined8 *)((longlong)param_1 + 0x69) = 0;
    *(undefined8 *)((longlong)param_1 + 0x71) = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    FUN_14058b698(param_1,param_2);
  }
  else {
    local_4f8[0] = 0.0;
    local_4f8[1] = 0.0;
    local_508 = (int *)0x0;
    uStack_500 = 0;
    local_518 = (int **)0x0;
    uStack_510 = 0;
    local_528[0] = 0;
    local_528[1] = 0;
    local_530 = (undefined8 *)0x0;
    local_6d0 = param_3;
    local_6c0 = param_1;
    local_680 = param_4;
    if ((char)param_3[0xc] == '\x01') {
      puVar31 = (undefined8 *)FUN_14001cc68(0x220);
      local_708 = (undefined1 **)((ulonglong)local_708 & 0xffffffffffffff00);
      FUN_1411b354a(puVar31,0,0,0);
      iVar27 = *(int *)(param_2 + 3);
      local_530 = puVar31;
    }
    local_538 = &local_530;
    local_558 = local_528;
    local_550 = local_528 + 2;
    local_548 = local_4f8;
    local_540 = &local_508;
    if (iVar27 != 0) {
      lVar35 = (longlong)iVar27 * 0x70;
      lVar37 = (longlong)param_2[2] + 0x48;
      do {
        local_698 = (double)*(float *)(lVar37 + 0x20) * 0.5;
        uStack_690 = 0;
        dVar11 = (double)*(float *)(lVar37 + 0x1c) * 0.5;
        dVar8 = (double)*(float *)(lVar37 + 0x18) * 0.5;
        dVar38 = *(double *)(lVar37 + -0x18);
        dVar44 = *(double *)(lVar37 + -0x10);
        dVar3 = *(double *)(lVar37 + -8);
        FUN_144a7484c(lVar37);
        dVar51 = local_210;
        dVar4 = local_218;
        pauVar32 = local_220;
        ppuVar26 = local_228;
        if (local_530 == (undefined8 *)0x0) {
          dVar4 = (double)local_220 + (double)local_220;
          dVar52 = local_218 + local_218;
          dVar51 = (double)local_228 * ((double)local_228 + (double)local_228);
          local_6d8 = ((double)local_228 + (double)local_228) * local_210;
          uStack_640 = 0;
          uStack_6a0 = 0;
          dVar9 = 1.0 - (dVar4 * (double)local_220 + dVar52 * local_218);
          local_6c8 = 1.0 - (dVar52 * local_218 + dVar51);
          local_6e0 = (double)local_228 * dVar4 - local_210 * dVar52;
          dVar5 = (double)local_228 * dVar4 + local_210 * dVar52;
          local_650 = 1.0 - (dVar4 * (double)local_220 + dVar51);
          local_658 = (double)local_220 * dVar52 - local_6d8;
          local_6d8 = (double)local_220 * dVar52 + local_6d8;
          local_660 = (double)local_228 * dVar52 + dVar4 * local_210;
          dVar13 = (double)local_228 * dVar52 - dVar4 * local_210;
          uVar43 = DAT_149931e80;
          dVar54 = (double)((ulonglong)local_698 ^ uVar43);
          dVar6 = (double)((ulonglong)dVar11 ^ uVar43);
          dVar12 = (double)((ulonglong)dVar8 ^ uVar43);
          local_6a8 = local_6d8 * dVar6;
          local_678 = dVar13 * dVar12;
          dVar52 = local_650 * dVar54;
          dVar53 = local_6c8 * dVar6;
          local_670 = dVar5 * dVar12;
          dVar51 = local_658 * dVar54;
          dVar6 = dVar6 * local_6e0;
          dVar12 = dVar12 * dVar9;
          dVar4 = dVar12 + dVar6;
          local_638._8_4_ = DAT_149931e80._8_4_;
          local_638._0_8_ = dVar4;
          local_638._12_4_ = DAT_149931e80._12_4_;
          dVar54 = dVar54 * local_660;
          local_228 = (undefined **)(dVar54 + dVar4 + dVar38);
          dVar14 = local_670 + dVar53;
          local_220 = (undefined1 (*) [16])(dVar51 + dVar14 + dVar44);
          dVar7 = local_678 + local_6a8;
          local_218 = dVar52 + dVar7 + dVar3;
          dVar13 = dVar13 * dVar8;
          dVar5 = dVar5 * dVar8;
          dVar9 = dVar9 * dVar8;
          dVar6 = dVar6 + dVar9;
          local_210 = dVar54 + dVar6 + dVar38;
          dVar53 = dVar53 + dVar5;
          local_208 = dVar51 + dVar53 + dVar44;
          local_6a8 = local_6a8 + dVar13;
          local_200 = dVar52 + local_6a8 + dVar3;
          local_6d8 = local_6d8 * dVar11;
          local_6c8 = local_6c8 * dVar11;
          local_6e0 = local_6e0 * dVar11;
          dVar9 = dVar9 + local_6e0;
          local_1f8 = dVar54 + dVar9 + dVar38;
          dVar5 = dVar5 + local_6c8;
          local_1f0 = dVar51 + dVar5 + dVar44;
          dVar13 = dVar13 + local_6d8;
          local_1e8 = dVar52 + dVar13 + dVar3;
          local_6d8 = local_6d8 + local_678;
          local_6e0 = local_6e0 + dVar12;
          local_1e0 = dVar54 + local_6e0 + dVar38;
          local_1d8 = dVar51 + local_6c8 + local_670 + dVar44;
          dStack_1d0 = dVar52 + local_6d8 + dVar3;
          dVar8 = local_660 * local_698;
          dVar52 = local_658 * local_698;
          dVar51 = local_650 * local_698;
          local_1c8 = dVar4 + dVar8 + dVar38;
          dStack_1c0 = dVar14 + dVar52 + dVar44;
          local_1b8 = dVar7 + dVar51 + dVar3;
          local_1b0 = dVar6 + dVar8 + dVar38;
          local_1a8 = dVar53 + dVar52 + dVar44;
          uStack_1a0 = local_6a8 + dVar51 + dVar3;
          local_198 = dVar9 + dVar8 + dVar38;
          local_190 = dVar5 + dVar52 + dVar44;
          dStack_188 = dVar13 + dVar51 + dVar3;
          dStack_180 = dVar8 + local_6e0 + dVar38;
          local_178 = dVar52 + local_6c8 + local_670 + dVar44;
          ppuStack_170 = (undefined **)(dVar51 + local_6d8 + dVar3);
          pauStack_168 = (undefined1 (*) [16])0x800000008;
          local_570 = 8;
          local_6b8 = dVar38;
          local_6b0 = dVar44;
          local_668 = dVar3;
          local_648 = dVar11;
          local_578 = &local_228;
          FUN_143ba989a(&local_558,&local_578,
                        SUB84((double)*(float *)(lVar37 + 0x20) *
                              (double)*(float *)(lVar37 + 0x1c) *
                              (double)*(float *)(lVar37 + 0x18) *
                              DAT_14c846518 * DAT_14c846510 * DAT_14c846520,0),lVar37 + -0x48);
        }
        else {
          memset(&local_220,0,0x91);
          local_228 = &PTR_FUN_14ae75120;
          local_12c = 1;
          local_138 = 1;
          uStack_134 = 1;
          local_130 = 1;
          ppuStack_170 = ppuVar26;
          pauStack_168 = pauVar32;
          local_160 = dVar4;
          local_158 = dVar51;
          local_140 = (undefined4)local_698;
          uStack_13c = local_698._4_4_;
          dStack_188 = dVar38;
          dStack_180 = dVar44;
          local_178 = dVar3;
          local_150 = dVar8;
          local_148 = dVar11;
          FUN_148396580(&local_228);
          local_568 = local_220;
          local_560 = local_218._0_4_;
          FUN_143ba989a(&local_558,&local_568,
                        SUB84((double)*(float *)(lVar37 + 0x20) *
                              (double)*(float *)(lVar37 + 0x1c) *
                              (double)*(float *)(lVar37 + 0x18) *
                              DAT_14c846510 * DAT_14c846518 * DAT_14c846520,0),lVar37 + -0x48);
          FUN_143ba9948(&local_538);
          FUN_146bd8050(&local_228);
        }
        lVar37 = lVar37 + 0x70;
        lVar35 = lVar35 + -0x70;
      } while (lVar35 != 0);
    }
    if ((longlong)*(int *)(param_2 + 1) != 0) {
      dVar38 = *param_2;
      lVar35 = (longlong)*(int *)(param_2 + 1) * 0x50;
      do {
        memset(&local_220,0,0x91);
        ppuStack_170 = (undefined **)0x0;
        pauStack_168 = (undefined1 (*) [16])0x0;
        local_160 = 0.0;
        local_158 = 1.0;
        local_150 = 1.0;
        local_148 = 1.0;
        local_140 = 0;
        uStack_13c = 0x3ff00000;
        local_12c = 1;
        local_228 = &PTR_FUN_14ae75170;
        local_178 = *(double *)((longlong)dVar38 + 0x40);
        dStack_188 = *(double *)((longlong)dVar38 + 0x30);
        dStack_180 = *(double *)((longlong)dVar38 + 0x38);
        fVar46 = 1e-06;
        if (1e-06 <= *(float *)((longlong)dVar38 + 0x48)) {
          fVar46 = *(float *)((longlong)dVar38 + 0x48);
        }
        local_128 = CONCAT44(1,fVar46);
        local_138 = local_6d0[0x18];
        if ((int)local_138 < 2) {
          local_138 = 1;
        }
        uStack_134 = local_138;
        local_130 = local_138;
        FUN_148397678(&local_228);
        uStack_320 = &dStack_1d0;
        local_328 = (wchar_t *)&local_220;
        FUN_1483adb3a(&local_3f8,&local_328);
        local_588 = local_220;
        local_580 = local_218._0_4_;
        FUN_143ba989a(&local_558,&local_588,(int)local_3f8,dVar38);
        FUN_143ba9948(&local_538);
        FUN_146bd8050(&local_228);
        dVar38 = (double)((longlong)dVar38 + 0x50);
        lVar35 = lVar35 + -0x50;
      } while (lVar35 != 0);
    }
    if ((longlong)*(int *)(param_2 + 5) != 0) {
      dVar38 = param_2[4];
      dVar44 = (double)((longlong)*(int *)(param_2 + 5) * 0x68 + (longlong)dVar38);
      do {
        memset(&local_220,0,0x91);
        local_228 = &PTR_FUN_14ae75180;
        ppuStack_170 = (undefined **)((ulonglong)ppuStack_170 & 0xffffff0000000000);
        dStack_188 = (double)*(float *)((longlong)dVar38 + 0x60);
        dStack_180 = (double)*(float *)((longlong)dVar38 + 100);
        uVar30 = local_6d0[0x19];
        if ((int)uVar30 < 3) {
          uVar30 = 2;
        }
        uVar28 = local_6d0[0x1a];
        if ((int)uVar28 < 4) {
          uVar28 = 3;
        }
        local_178 = (double)CONCAT44(uVar28,uVar30);
        FUN_148397c72(&local_228);
        local_458 = (double)*(float *)((longlong)dVar38 + 100) * -0.5;
        local_468 = (int ***)0x0;
        uStack_460 = 0;
        FUN_1401c9a0e((longlong)dVar38 + 0x48,&local_3f8,&local_468);
        dVar3 = *(double *)((longlong)dVar38 + 0x40) + local_3e8;
        dVar11 = *(double *)((longlong)dVar38 + 0x38) + local_3f0;
        dVar8 = *(double *)((longlong)dVar38 + 0x30) + (double)local_3f8;
        FUN_144a7484c((longlong)dVar38 + 0x48,&local_328);
        if ((longlong)local_218._0_4_ != 0) {
          dVar4 = (double)CONCAT71(uStack_317,local_318);
          pauVar32 = local_220;
          do {
            dVar7 = *(double *)*pauVar32;
            dVar6 = *(double *)(*pauVar32 + 8);
            dVar54 = *(double *)pauVar32[1] * 1.0;
            dVar51 = dVar6 * (double)local_328 - (double)uStack_320 * dVar7;
            dVar52 = dVar54 * (double)uStack_320 - dVar4 * dVar6;
            dVar5 = dVar7 * dVar4 - (double)local_328 * dVar54;
            dVar52 = dVar52 + dVar52;
            dVar5 = dVar5 + dVar5;
            dVar51 = dVar51 + dVar51;
            dVar6 = (dVar4 * dVar52 - (double)local_328 * dVar51) + dStack_310 * dVar5 + dVar6 +
                    dVar11;
            auVar10._8_4_ = SUB84(dVar6,0);
            auVar10._0_8_ =
                 (dVar51 * (double)uStack_320 - dVar5 * dVar4) + dStack_310 * dVar52 + dVar7 + dVar8
            ;
            auVar10._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
            *pauVar32 = auVar10;
            *(double *)pauVar32[1] =
                 dVar51 * dStack_310 + dVar54 +
                 (dVar5 * (double)local_328 - dVar52 * (double)uStack_320) + dVar3;
            pauVar32 = (undefined1 (*) [16])(pauVar32[1] + 8);
          } while (pauVar32 !=
                   (undefined1 (*) [16])((longlong)local_220 + (longlong)local_218._0_4_ * 0x18));
        }
        uStack_320 = &dStack_1d0;
        local_328 = (wchar_t *)&local_220;
        FUN_1483adb3a(&local_3f8,&local_328);
        local_598 = local_220;
        local_590 = local_218._0_4_;
        FUN_143ba989a(&local_558,&local_598,(int)local_3f8,dVar38);
        FUN_143ba9948(&local_538);
        FUN_146bd8050(&local_228);
        dVar38 = (double)((longlong)dVar38 + 0x68);
      } while (dVar38 != dVar44);
    }
    if ((longlong)*(int *)(param_2 + 7) != 0) {
      dVar38 = param_2[6];
      lVar35 = (longlong)*(int *)(param_2 + 7) << 8;
      do {
        local_220 = (undefined1 (*) [16])((longlong)dVar38 + 0x40);
        local_228 = (undefined **)((longlong)dVar38 + 0x30);
        FUN_14857f740(&local_328,&local_228);
        local_5a8 = *(undefined8 *)((longlong)dVar38 + 0x30);
        local_5a0 = *(undefined4 *)((longlong)dVar38 + 0x38);
        FUN_143ba989a(&local_558,&local_5a8,
                      SUB84(*(double *)((longlong)dVar38 + 0xd0) *
                            *(double *)((longlong)dVar38 + 0xd8) *
                            *(double *)((longlong)dVar38 + 0xe0) * -(double)local_328,0),dVar38);
        if (local_530 != (undefined8 *)0x0) {
          FUN_143ba94d3(dVar38,local_530,0);
        }
        dVar38 = (double)((longlong)dVar38 + 0x100);
        lVar35 = lVar35 + -0x100;
      } while (lVar35 != 0);
    }
    param_1 = local_6c0;
    iVar27 = (int)uStack_500;
    lVar35 = (longlong)(int)uStack_500;
    if (lVar35 < 2) {
      *(undefined8 *)((longlong)local_6c0 + 0x69) = 0;
      *(undefined8 *)((longlong)local_6c0 + 0x71) = 0;
      local_6c0[0xc] = 0;
      local_6c0[0xd] = 0;
      local_6c0[10] = 0;
      local_6c0[0xb] = 0;
      local_6c0[8] = 0;
      local_6c0[9] = 0;
      local_6c0[6] = 0;
      local_6c0[7] = 0;
      local_6c0[4] = 0;
      local_6c0[5] = 0;
      local_6c0[2] = 0;
      local_6c0[3] = 0;
      *local_6c0 = 0;
      local_6c0[1] = 0;
      FUN_14058b698(local_6c0,param_2);
    }
    else {
      local_5b8 = (undefined1 (*) [16])0x0;
      uStack_5b0 = 0;
      FUN_144a127d2(&local_5b8,uStack_500 & 0xffffffff,1);
      *(undefined4 *)*local_5b8 = 0;
      iVar29 = *local_508;
      lVar37 = 1;
      do {
        *(int *)(*local_5b8 + lVar37 * 4) = iVar29;
        iVar29 = iVar29 + local_508[lVar37];
        lVar37 = lVar37 + 1;
      } while (lVar35 != lVar37);
      local_5c8 = 0;
      uStack_5c0 = 0;
      if ((char)local_6d0[6] == '\x01') {
        iVar29 = 0;
        do {
          iVar36 = iVar29 + 1;
          iVar45 = iVar36;
          if (iVar36 < iVar27) {
            do {
              uVar43 = uStack_5c0;
              lVar35 = (longlong)(int)uStack_5c0;
              uVar30 = (int)uStack_5c0 + 1;
              uStack_5c0 = CONCAT44(uStack_5c0._4_4_,uVar30);
              if (uStack_5c0._4_4_ < uVar30) {
                FUN_1406b704c(&local_5c8,uVar43 & 0xffffffff);
              }
              *(int *)(local_5c8 + lVar35 * 8) = iVar29;
              *(int *)(local_5c8 + 4 + lVar35 * 8) = iVar45;
              iVar45 = iVar45 + 1;
            } while (iVar27 != iVar45);
          }
          iVar29 = iVar36;
        } while (iVar36 != iVar27);
      }
      else {
        uStack_5c0._0_4_ = 0;
      }
      puVar21 = local_6d0;
      local_328 = (wchar_t *)&local_5b8;
      local_228 = (undefined **)0x3f50624dd2f1a9fc;
      local_220 = (undefined1 (*) [16])0x3f50624dd2f1a9fc;
      local_218 = 1e-07;
      local_210 = 0.99;
      local_208 = 30.0;
      local_200 = 170.0;
      local_1f8 = 0.1;
      local_1f0 = (double)CONCAT26(local_1f0._6_2_,0x10100000032);
      local_1e8 = 0.0;
      local_1e0 = (double)CONCAT44(local_1e0._4_4_,0xffffffff);
      local_1d8 = 0.0;
      dStack_1d0 = 0.0;
      local_190 = DAT_14c846510;
      dStack_188 = DAT_14c846518;
      dStack_180 = DAT_14c846520;
      local_1a8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_1a0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_198 = DAT_14c8464f0;
      local_1c8 = 0.0;
      dStack_1c0 = 0.0;
      local_1b8 = 0.0;
      local_1b0 = 1.0;
      local_148 = 0.0;
      local_140 = 0;
      pauStack_168 = (undefined1 (*) [16])0x0;
      local_160 = 0.0;
      local_178 = 0.0;
      ppuStack_170 = (undefined **)0x0;
      uStack_13c = 0x80;
      local_138 = 0xffffffff;
      uStack_134 = 0;
      local_128 = 0;
      local_120 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_700 = &local_5d8;
      local_5e0 = &local_328;
      uStack_320 = local_4f8;
      local_708 = &local_5e8;
      local_5e8 = &LAB_143bb312c;
      local_3f8 = &local_508;
      local_5f8 = &LAB_143bb311e;
      local_600 = &local_468;
      local_468 = (int ***)(local_528 + 2);
      local_608 = &LAB_143bb310e;
      local_5f0 = &local_3f8;
      local_5d8 = local_5c8;
      local_5d0 = (int)uStack_5c0;
      FUN_146ba4c5e(&local_228,uStack_5b0 & 0xffffffff);
      local_618 = 0;
      uStack_610 = 0;
      local_628 = 0;
      uStack_620 = 0;
      uVar55 = 0;
      uVar56 = 0;
      if ((char)puVar21[0xc] == '\x01') {
        local_318 = 0;
        local_2f8 = 1;
        local_2f0 = 0x3fe0000000000000;
        local_2e8 = 0;
        local_2e0 = 0x3ff0000000000000;
        local_2d8 = 0;
        local_2c8 = (longlong *)0x0;
        local_298 = 0x3ff0000000000000;
        puVar31 = &DAT_14c846480;
        puVar41 = local_288;
        for (lVar35 = 0xc; lVar35 != 0; lVar35 = lVar35 + -1) {
          *puVar41 = *puVar31;
          puVar31 = puVar31 + 1;
          puVar41 = puVar41 + 1;
        }
        uVar33 = 2;
        if ((char)puVar21[0xe] != '\x02') {
          uVar33 = (char)puVar21[0xe] == '\x01';
        }
        uVar47 = 0;
        uVar48 = 0;
        dVar38 = *(double *)(puVar21 + 0x12);
        if (0.0 <= dVar38) {
          uVar47 = SUB84(dVar38,0);
          uVar48 = (undefined4)((ulonglong)dVar38 >> 0x20);
        }
        dVar38 = *(double *)(puVar21 + 0x14);
        if (0.0 <= dVar38) {
          uVar55 = SUB84(dVar38,0);
          uVar56 = (undefined4)((ulonglong)dVar38 >> 0x20);
        }
        uVar49 = 0;
        uVar50 = 0;
        dVar38 = *(double *)(puVar21 + 0x16);
        if (0.0 <= dVar38) {
          uVar49 = SUB84(dVar38,0);
          uVar50 = (undefined4)((ulonglong)dVar38 >> 0x20);
        }
        local_328 = (wchar_t *)CONCAT71(local_328._1_7_,uVar33);
        local_300 = *(undefined1 *)((longlong)puVar21 + 0x39);
        local_2ff = *(undefined1 *)((longlong)puVar21 + 0x3a);
        uVar43 = 1;
        if (1 < (int)puVar21[0x10]) {
          uVar43 = (ulonglong)puVar21[0x10];
        }
        local_328 = (wchar_t *)CONCAT44((int)uVar43,(undefined4)local_328);
        uStack_320 = (double *)CONCAT44(uVar48,uVar47);
        dStack_310 = (double)CONCAT44(uVar56,uVar55);
        local_308 = CONCAT44(uVar50,uVar49);
        uVar30 = 0x50a;
        if ((int)puVar21[0xf] < 0x50a) {
          uVar30 = puVar21[0xf];
        }
        local_2fc = 4;
        if (4 < (int)uVar30) {
          local_2fc = uVar30;
        }
        FUN_146ba21d6(&local_3f8,local_530,CONCAT71((int7)(uVar43 >> 8),1));
        local_440 = 0;
        local_438 = 0;
        uStack_460 = 0;
        local_458 = 0.0;
        local_434 = 0xffffffff00000080;
        local_42c = 0;
        local_420 = 0;
        local_418 = 0;
        local_410 = 0;
        local_408 = 0x4000000000000000;
        local_400 = 2;
        local_468 = &local_3f8;
        FUN_146bef8a8(&local_468,1);
        FUN_146b9dbb6(&local_628,&local_468,&local_328,0);
        local_418 = 0;
        if (local_420 != 0) {
          FUN_1400020a8();
        }
        dVar38 = (double)CONCAT44(uVar56,uVar55) * 0.5;
        FUN_146bddd50(&uStack_460);
        FUN_1457e5b52(&local_3f8);
        if (local_2d8 != 0) {
          plVar34 = local_2c8;
          if (local_2c8 == (longlong *)0x0) {
            plVar34 = local_2b8;
          }
          (**(code **)(*plVar34 + 0x10))();
        }
        uVar55 = SUB84(dVar38,0);
        if (dVar38 <= 0.0) {
          uVar55 = 0;
        }
      }
      if ((*(longlong *)(puVar21 + 8) != 0) && (0 < *(int *)(*(longlong *)(puVar21 + 8) + 8))) {
        FUN_146ec5f9a(&local_628);
      }
      plVar39 = (longlong *)0x0;
      plVar34 = &local_628;
      if ((int)uStack_620 < 1) {
        plVar34 = plVar39;
      }
      if ((char)puVar21[6] == '\0') {
        FUN_146ba52d2(&local_228,0,0x9999999a,uVar55);
      }
      if (0 < (int)*puVar21) {
        plVar39 = (longlong *)(ulonglong)*puVar21;
      }
      local_6f8 = (int)plVar39;
      local_1e0 = (double)CONCAT44(local_1e0._4_4_,local_6f8 * local_6f8 + 1000);
      local_6e8 = 0;
      local_700 = (longlong *)((ulonglong)local_700 & 0xffffffffffffff00);
      local_708 = (undefined1 **)CONCAT71(local_708._1_7_,1);
      local_6f0 = plVar34;
      FUN_146ba2a14(&local_228,plVar39,(int)*(undefined8 *)(puVar21 + 2),
                    (int)*(undefined8 *)(puVar21 + 4));
      if (dStack_1d0._0_4_ == iVar27) {
        *(undefined8 *)((longlong)local_6c0 + 0x69) = 0;
        *(undefined8 *)((longlong)local_6c0 + 0x71) = 0;
        local_6c0[0xc] = 0;
        local_6c0[0xd] = 0;
        local_6c0[10] = 0;
        local_6c0[0xb] = 0;
        local_6c0[8] = 0;
        local_6c0[9] = 0;
        local_6c0[6] = 0;
        local_6c0[7] = 0;
        local_6c0[4] = 0;
        local_6c0[5] = 0;
        local_6c0[2] = 0;
        local_6c0[3] = 0;
        *local_6c0 = 0;
        local_6c0[1] = 0;
      }
      else {
        *local_680 = 1;
        if (((*(int *)(param_2 + 9) != 0) || (*(int *)(param_2 + 0xd) != 0)) ||
           (*(int *)(param_2 + 0xb) != 0)) {
          local_328 = L"PrimitiveFunctions_AppendSimpleCollisionShapes Unsupported Shapes";
          uStack_320._0_4_ = 0x41;
          FUN_1446e940c(&local_3f8,&local_328);
          local_328 = L"UGeometryScriptLibrary_CollisionFunctions";
          uStack_320 = (double *)CONCAT44(uStack_320._4_4_,0x29);
          FUN_1446e940c(&local_468,&local_328);
          FUN_140208bae(&local_328,&local_468,&local_3f8,
                        L"MergeSimpleCollisionShapes: Merging for Tapered Capsules and Level Set collision is not yet supported; these shapes will be copied without considering them for merging."
                       );
          FUN_143ba9449(param_5,3,&local_328);
          if ((undefined1 (**) [16])local_328 != (undefined1 (**) [16])0x0) {
            (**(code **)(*(undefined1 (**) [16])local_328)[1])();
          }
          if ((longlong)*(int *)(param_2 + 9) != 0) {
            dVar38 = param_2[8];
            lVar35 = (longlong)*(int *)(param_2 + 9) * 0x70;
            do {
              uVar43 = uStack_4a0;
              lVar37 = (longlong)(int)uStack_4a0;
              uVar30 = (int)uStack_4a0 + 1;
              uStack_4a0 = CONCAT44(uStack_4a0._4_4_,uVar30);
              if (uStack_4a0._4_4_ < uVar30) {
                FUN_147c64082(&local_4a8,uVar43 & 0xffffffff);
              }
              FUN_1479b2570(lVar37 * 0x70 + local_4a8,dVar38);
              dVar38 = (double)((longlong)dVar38 + 0x70);
              lVar35 = lVar35 + -0x70;
            } while (lVar35 != 0);
          }
          if ((longlong)*(int *)(param_2 + 0xd) != 0) {
            dVar38 = param_2[0xc];
            lVar35 = (longlong)*(int *)(param_2 + 0xd) * 0x38;
            do {
              uVar30 = local_480;
              lVar37 = (longlong)(int)local_480;
              local_480 = local_480 + 1;
              if (uStack_47c < local_480) {
                FUN_148581cb4(&local_488,uVar30);
              }
              lVar37 = lVar37 * 0x38;
              puVar31 = (undefined8 *)(local_488 + 8 + lVar37);
              *puVar31 = 0;
              puVar31[1] = 0x700000000;
              pbVar1 = (byte *)(local_488 + 0x18 + lVar37);
              *pbVar1 = *pbVar1 | 1;
              *(undefined1 *)(local_488 + 0x19 + lVar37) = 3;
              *(undefined4 *)(local_488 + 0x20 + lVar37) = 6;
              *(longlong *)(local_488 + 0x28 + lVar37) = local_488 + lVar37;
              *(undefined ***)(local_488 + lVar37) = &PTR_FUN_14a418040;
              *(undefined8 *)(local_488 + 0x30 + lVar37) = 0;
              FUN_147c4d060(local_488 + lVar37,dVar38);
              dVar38 = (double)((longlong)dVar38 + 0x38);
              lVar35 = lVar35 + -0x38;
            } while (lVar35 != 0);
          }
          if ((longlong)*(int *)(param_2 + 0xb) != 0) {
            dVar38 = param_2[10];
            lVar35 = (longlong)*(int *)(param_2 + 0xb) * 0xa0;
            do {
              uVar43 = uStack_490;
              lVar37 = (longlong)(int)uStack_490;
              uVar30 = (int)uStack_490 + 1;
              uStack_490 = CONCAT44(uStack_490._4_4_,uVar30);
              if (uStack_490._4_4_ < uVar30) {
                FUN_147c63fee(&local_498,uVar43 & 0xffffffff);
              }
              lVar37 = lVar37 * 0xa0;
              puVar31 = (undefined8 *)(local_498 + 8 + lVar37);
              *puVar31 = 0;
              puVar31[1] = 0x700000000;
              pbVar1 = (byte *)(local_498 + 0x18 + lVar37);
              *pbVar1 = *pbVar1 | 1;
              *(undefined1 *)(local_498 + 0x19 + lVar37) = 3;
              *(undefined4 *)(local_498 + 0x20 + lVar37) = 6;
              *(longlong *)(local_498 + 0x28 + lVar37) = local_498 + lVar37;
              *(undefined ***)(local_498 + lVar37) = &PTR_FUN_14a418060;
              puVar31 = (undefined8 *)(local_498 + 0x30 + lVar37);
              *puVar31 = 0;
              puVar31[1] = 0;
              puVar2 = (undefined4 *)(local_498 + 0x40 + lVar37);
              *puVar2 = 0;
              puVar2[1] = 0;
              puVar2[2] = 0;
              puVar2[3] = 0x3ff00000;
              puVar31 = (undefined8 *)(local_498 + 0x50 + lVar37);
              *puVar31 = 0;
              puVar31[1] = 0;
              puVar31 = (undefined8 *)(local_498 + 0x60 + lVar37);
              *puVar31 = 0;
              puVar31[1] = 0;
              puVar31 = (undefined8 *)(local_498 + 0x70 + lVar37);
              *puVar31 = 0x3ff0000000000000;
              puVar31[1] = 0x3ff0000000000000;
              puVar31 = (undefined8 *)(local_498 + 0x80 + lVar37);
              *puVar31 = 0x3ff0000000000000;
              puVar31[1] = 0;
              puVar31 = (undefined8 *)(local_498 + 0x90 + lVar37);
              *puVar31 = 0;
              puVar31[1] = 0;
              FUN_147c4cfbe(local_498 + lVar37,dVar38);
              dVar38 = (double)((longlong)dVar38 + 0xa0);
              lVar35 = lVar35 + -0xa0;
            } while (lVar35 != 0);
          }
        }
        if (0 < dStack_1d0._0_4_) {
          uVar43 = 0;
          do {
            uVar25 = uStack_4b0;
            uVar24 = uStack_4c0;
            uVar23 = uStack_4d0;
            uVar22 = uStack_4e0;
            lVar35 = (longlong)*(int *)(*(longlong *)((longlong)local_1d8 + uVar43 * 8) + 0x240);
            if (lVar35 < 0) {
switchD_148562066_default:
              lVar35 = (longlong)(int)uStack_4b0;
              uVar30 = (int)uStack_4b0 + 1;
              uStack_4b0 = CONCAT44(uStack_4b0._4_4_,uVar30);
              if (uStack_4b0._4_4_ < uVar30) {
                FUN_1474ba6a4(&local_4b8,uVar25 & 0xffffffff);
              }
              lVar35 = lVar35 * 0x100;
              lVar37 = local_4b8 + lVar35;
              puVar31 = (undefined8 *)(local_4b8 + lVar35);
              puVar31[1] = 0;
              puVar31[2] = 0x300000000;
              *(byte *)(puVar31 + 3) = *(byte *)(puVar31 + 3) | 1;
              *(undefined1 *)((longlong)puVar31 + 0x19) = 3;
              *(undefined4 *)(puVar31 + 4) = 6;
              puVar31[5] = lVar37;
              *puVar31 = &PTR_FUN_14aa0f410;
              puVar41 = (undefined8 *)(local_4b8 + 0x90 + lVar35);
              puVar41[-0xc] = 0;
              puVar41[-0xb] = 0;
              puVar41[-10] = 0;
              puVar41[-9] = 0;
              puVar41[-8] = 0;
              puVar41[-7] = 0;
              puVar41[-6] = 0;
              puVar41[-5] = 0;
              puVar41[-4] = 0;
              puVar41[-3] = 0;
              *(undefined1 *)(puVar41 + -2) = 0;
              puVar40 = &DAT_14c846480;
              puVar42 = puVar41;
              for (lVar35 = 0xc; lVar35 != 0; lVar35 = lVar35 + -1) {
                *puVar42 = *puVar40;
                puVar40 = puVar40 + 1;
                puVar42 = puVar42 + 1;
              }
              puVar41[0xc] = 0;
              FUN_146ec5046(&local_228,&local_328,uVar43 & 0xffffffff,1);
              if (puVar31 + 6 != &local_328) {
                if (*(longlong *)(lVar37 + 0x30) != 0) {
                  FUN_1400020a8();
                }
                *(wchar_t **)(lVar37 + 0x30) = local_328;
                local_328 = (wchar_t *)0x0;
                *(undefined4 *)(lVar37 + 0x38) = (undefined4)uStack_320;
                *(undefined4 *)(lVar37 + 0x3c) = uStack_320._4_4_;
                uStack_320 = (double *)0x0;
              }
              if ((undefined1 (**) [16])local_328 != (undefined1 (**) [16])0x0) {
                FUN_1400020a8();
              }
              FUN_1479b2c20(lVar37);
            }
            else {
              lVar35 = *(longlong *)(local_528[0] + lVar35 * 8);
              switch(*(undefined4 *)(lVar35 + 0x14)) {
              case 0:
                lVar37 = (longlong)(int)uStack_4e0;
                uVar30 = (int)uStack_4e0 + 1;
                uStack_4e0 = CONCAT44(uStack_4e0._4_4_,uVar30);
                if (uStack_4e0._4_4_ < uVar30) {
                  FUN_140e25fd0(local_4f8 + 2,uVar22 & 0xffffffff);
                }
                lVar37 = lVar37 * 0x50;
                *(undefined ***)((longlong)local_4e8 + lVar37) = &PTR_FUN_14a1dee50;
                *(undefined4 *)((longlong)local_4e8 + 8 + lVar37) = *(undefined4 *)(lVar35 + 8);
                *(undefined8 *)((longlong)local_4e8 + 0xc + lVar37) = *(undefined8 *)(lVar35 + 0xc);
                *(undefined4 *)((longlong)local_4e8 + 0x14 + lVar37) =
                     *(undefined4 *)(lVar35 + 0x14);
                *(byte *)((longlong)local_4e8 + 0x18 + lVar37) =
                     *(byte *)((longlong)local_4e8 + 0x18 + lVar37) & 0xfe |
                     *(byte *)(lVar35 + 0x18) & 1;
                *(undefined1 *)((longlong)local_4e8 + 0x19 + lVar37) =
                     *(undefined1 *)(lVar35 + 0x19);
                *(undefined4 *)((longlong)local_4e8 + 0x20 + lVar37) = 6;
                *(longlong *)((longlong)local_4e8 + 0x28 + lVar37) = (longlong)local_4e8 + lVar37;
                *(undefined ***)((longlong)local_4e8 + lVar37) = &PTR_FUN_14a418310;
                uVar55 = *(undefined4 *)(lVar35 + 0x34);
                uVar56 = *(undefined4 *)(lVar35 + 0x38);
                uVar47 = *(undefined4 *)(lVar35 + 0x3c);
                uVar15 = *(undefined8 *)(lVar35 + 0x3c);
                uVar16 = *(undefined8 *)(lVar35 + 0x44);
                puVar2 = (undefined4 *)((longlong)local_4e8 + 0x30 + lVar37);
                *puVar2 = *(undefined4 *)(lVar35 + 0x30);
                puVar2[1] = uVar55;
                puVar2[2] = uVar56;
                puVar2[3] = uVar47;
                puVar31 = (undefined8 *)((longlong)local_4e8 + 0x3c + lVar37);
                *puVar31 = uVar15;
                puVar31[1] = uVar16;
                break;
              case 1:
                lVar37 = (longlong)(int)uStack_4d0;
                uVar30 = (int)uStack_4d0 + 1;
                uStack_4d0 = CONCAT44(uStack_4d0._4_4_,uVar30);
                if (uStack_4d0._4_4_ < uVar30) {
                  FUN_140c9d5a2(&local_4d8,uVar23 & 0xffffffff);
                }
                lVar37 = lVar37 * 0x70;
                *(undefined ***)(local_4d8 + lVar37) = &PTR_FUN_14a1dee50;
                *(undefined4 *)(local_4d8 + 8 + lVar37) = *(undefined4 *)(lVar35 + 8);
                *(undefined8 *)(local_4d8 + 0xc + lVar37) = *(undefined8 *)(lVar35 + 0xc);
                *(undefined4 *)(local_4d8 + 0x14 + lVar37) = *(undefined4 *)(lVar35 + 0x14);
                *(byte *)(local_4d8 + 0x18 + lVar37) =
                     *(byte *)(local_4d8 + 0x18 + lVar37) & 0xfe | *(byte *)(lVar35 + 0x18) & 1;
                *(undefined1 *)(local_4d8 + 0x19 + lVar37) = *(undefined1 *)(lVar35 + 0x19);
                *(undefined4 *)(local_4d8 + 0x20 + lVar37) = 6;
                *(longlong *)(local_4d8 + 0x28 + lVar37) = local_4d8 + lVar37;
                *(undefined ***)(local_4d8 + lVar37) = &PTR_FUN_14a1e3c70;
                uVar55 = *(undefined4 *)(lVar35 + 0x34);
                uVar56 = *(undefined4 *)(lVar35 + 0x38);
                uVar47 = *(undefined4 *)(lVar35 + 0x3c);
                uVar15 = *(undefined8 *)(lVar35 + 0x40);
                uVar16 = *(undefined8 *)(lVar35 + 0x48);
                uVar17 = *(undefined8 *)(lVar35 + 0x50);
                uVar18 = *(undefined8 *)(lVar35 + 0x58);
                uVar19 = *(undefined8 *)(lVar35 + 0x5c);
                uVar20 = *(undefined8 *)(lVar35 + 100);
                puVar2 = (undefined4 *)(local_4d8 + 0x30 + lVar37);
                *puVar2 = *(undefined4 *)(lVar35 + 0x30);
                puVar2[1] = uVar55;
                puVar2[2] = uVar56;
                puVar2[3] = uVar47;
                puVar31 = (undefined8 *)(local_4d8 + 0x40 + lVar37);
                *puVar31 = uVar15;
                puVar31[1] = uVar16;
                puVar31 = (undefined8 *)(local_4d8 + 0x50 + lVar37);
                *puVar31 = uVar17;
                puVar31[1] = uVar18;
                puVar31 = (undefined8 *)(local_4d8 + 0x5c + lVar37);
                *puVar31 = uVar19;
                puVar31[1] = uVar20;
                break;
              case 2:
                lVar37 = (longlong)(int)uStack_4c0;
                uVar30 = (int)uStack_4c0 + 1;
                uStack_4c0 = CONCAT44(uStack_4c0._4_4_,uVar30);
                if (uStack_4c0._4_4_ < uVar30) {
                  FUN_1407e1e9e(&local_4c8,uVar24 & 0xffffffff);
                }
                lVar37 = lVar37 * 0x68;
                *(undefined ***)(local_4c8 + lVar37) = &PTR_FUN_14a1dee50;
                *(undefined4 *)(local_4c8 + 8 + lVar37) = *(undefined4 *)(lVar35 + 8);
                *(undefined8 *)(local_4c8 + 0xc + lVar37) = *(undefined8 *)(lVar35 + 0xc);
                *(undefined4 *)(local_4c8 + 0x14 + lVar37) = *(undefined4 *)(lVar35 + 0x14);
                *(byte *)(local_4c8 + 0x18 + lVar37) =
                     *(byte *)(local_4c8 + 0x18 + lVar37) & 0xfe | *(byte *)(lVar35 + 0x18) & 1;
                *(undefined1 *)(local_4c8 + 0x19 + lVar37) = *(undefined1 *)(lVar35 + 0x19);
                *(undefined4 *)(local_4c8 + 0x20 + lVar37) = 6;
                *(longlong *)(local_4c8 + 0x28 + lVar37) = local_4c8 + lVar37;
                *(undefined ***)(local_4c8 + lVar37) = &PTR_FUN_14a1dee70;
                uVar55 = *(undefined4 *)(lVar35 + 0x34);
                uVar56 = *(undefined4 *)(lVar35 + 0x38);
                uVar47 = *(undefined4 *)(lVar35 + 0x3c);
                uVar15 = *(undefined8 *)(lVar35 + 0x40);
                uVar16 = *(undefined8 *)(lVar35 + 0x48);
                uVar17 = *(undefined8 *)(lVar35 + 0x50);
                uVar18 = *(undefined8 *)(lVar35 + 0x58);
                puVar2 = (undefined4 *)(local_4c8 + 0x30 + lVar37);
                *puVar2 = *(undefined4 *)(lVar35 + 0x30);
                puVar2[1] = uVar55;
                puVar2[2] = uVar56;
                puVar2[3] = uVar47;
                puVar31 = (undefined8 *)(local_4c8 + 0x40 + lVar37);
                *puVar31 = uVar15;
                puVar31[1] = uVar16;
                puVar31 = (undefined8 *)(local_4c8 + 0x50 + lVar37);
                *puVar31 = uVar17;
                puVar31[1] = uVar18;
                *(undefined8 *)(local_4c8 + 0x60 + lVar37) = *(undefined8 *)(lVar35 + 0x60);
                break;
              case 3:
                lVar37 = (longlong)(int)uStack_4b0;
                uVar30 = (int)uStack_4b0 + 1;
                uStack_4b0 = CONCAT44(uStack_4b0._4_4_,uVar30);
                if (uStack_4b0._4_4_ < uVar30) {
                  FUN_1474ba6a4(&local_4b8,uVar25 & 0xffffffff);
                }
                FUN_147c4992e(lVar37 * 0x100 + local_4b8,lVar35);
                break;
              default:
                goto switchD_148562066_default;
              }
            }
            uVar43 = uVar43 + 1;
          } while ((longlong)uVar43 < (longlong)dStack_1d0._0_4_);
        }
        *(undefined8 *)((longlong)local_6c0 + 0x69) = 0;
        *(undefined8 *)((longlong)local_6c0 + 0x71) = 0;
        local_6c0[0xc] = 0;
        local_6c0[0xd] = 0;
        local_6c0[10] = 0;
        local_6c0[0xb] = 0;
        local_6c0[8] = 0;
        local_6c0[9] = 0;
        local_6c0[6] = 0;
        local_6c0[7] = 0;
        local_6c0[4] = 0;
        local_6c0[5] = 0;
        local_6c0[2] = 0;
        local_6c0[3] = 0;
        *local_6c0 = 0;
        local_6c0[1] = 0;
        param_2 = local_4f8 + 2;
      }
      param_1 = local_6c0;
      FUN_14058b698(local_6c0,param_2);
      if (local_618 != 0) {
        FUN_1400020a8();
      }
      if (local_628 != 0) {
        FUN_1400020a8();
      }
      FUN_146ec51d6(&local_228);
      if (local_5c8 != 0) {
        FUN_1400020a8();
      }
      if (local_5b8 != (undefined1 (*) [16])0x0) {
        FUN_1400020a8();
      }
    }
    if (local_530 != (undefined8 *)0x0) {
      (**(code **)*local_530)(local_530,1);
    }
    if (local_528[0] != 0) {
      FUN_1400020a8();
    }
    if (local_518 != (int **)0x0) {
      FUN_1400020a8();
    }
    if (local_508 != (int *)0x0) {
      FUN_1400020a8();
    }
    if (local_4f8[0] != 0.0) {
      FUN_1400020a8();
    }
  }
  FUN_1400d7d10(local_4f8 + 2);
  if ((local_f0 ^ (ulonglong)auStack_728) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14856277c FUN_14856277c body=294 status=ok
// SIG undefined FUN_14856277c(void)

void FUN_14856277c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485628a4(local_18,local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485628a4 FUN_1485628a4 body=224 status=ok
// SIG undefined FUN_1485628a4(void)

void FUN_1485628a4(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 == (longlong *)0x0) {
    local_38 = L"ResetDynamicMeshCollision_InvalidInput2";
    local_30 = 0x27;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"UGeometryScriptLibrary_CollisionFunctions";
    local_30 = 0x29;
    FUN_1446e940c(local_40,&local_38);
    FUN_140208bae(&local_38,local_40,local_3c,L"ResetDynamicMeshCollision: Component is Null");
    FUN_143ba90d7(param_2,2,&local_38);
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 0x10))();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001485628eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xc78))(param_1,1,*(code **)(*param_1 + 0xc78));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
}



// FUNCTION 148562990 FUN_148562990 body=220 status=ok
// SIG undefined FUN_148562990(void)

void FUN_148562990(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined7 local_2f;
  undefined1 uStack_28;
  undefined8 uStack_27;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uStack_28 = 0;
  uStack_27 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_2f = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar1 = &local_98;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a2cbea(puVar1);
  FUN_1400d7d10(&local_98);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148562a6e FUN_148562a6e body=523 status=ok
// SIG undefined FUN_148562a6e(void)

void FUN_148562a6e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_58 = 0x1010601;
  uStack_54 = CONCAT31(uStack_54._1_3_,1);
  uStack_50 = 0x3f800000;
  uStack_4c = CONCAT31(uStack_4c._1_3_,1);
  local_48 = 0x19;
  uStack_44 = 1;
  uStack_40 = 0x3f000000;
  uStack_3c = 0;
  local_38 = 0x3dcccccd3dcccccd;
  uStack_30 = CONCAT22(uStack_30._2_2_,0x102);
  uStack_2c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_58;
  uStack_94 = uStack_54;
  uStack_90 = uStack_50;
  uStack_8c = uStack_4c;
  local_88 = local_48;
  uStack_84 = uStack_44;
  uStack_80 = uStack_40;
  uStack_7c = uStack_3c;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  FUN_148562c7a(local_20,local_28,&local_98,local_60);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148562c7a FUN_148562c7a body=410 status=ok
// SIG undefined FUN_148562c7a(void)

longlong FUN_148562c7a(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  wchar_t *pwVar1;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined7 local_4f;
  undefined1 uStack_48;
  undefined8 uStack_47;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1 == 0) {
    local_b8 = L"SetDynamicMeshCollisionFromMesh_InvalidInput1";
    uStack_b0._0_4_ = 0x2d;
    FUN_1446e940c(local_34,&local_b8);
    local_b8 = L"UGeometryScriptLibrary_CollisionFunctions";
    uStack_b0 = CONCAT44(uStack_b0._4_4_,0x29);
    FUN_1446e940c(local_38,&local_b8);
    pwVar1 = L"SetDynamicMeshCollisionFromMesh: FromDynamicMesh is Null";
  }
  else {
    if (param_2 != (longlong *)0x0) {
      uStack_48 = 0;
      uStack_47 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      local_4f = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = (wchar_t *)0x0;
      uStack_b0 = 0;
      FUN_148567615(*(undefined8 *)(param_1 + 0x98),&local_b8);
      (**(code **)(*param_2 + 0xc70))(param_2,&local_b8,1);
      FUN_1400d7d10(&local_b8);
      goto LAB_148562d39;
    }
    local_b8 = L"SetDynamicMeshCollisionFromMesh_InvalidInput2";
    uStack_b0._0_4_ = 0x2d;
    FUN_1446e940c(local_34,&local_b8);
    local_b8 = L"UGeometryScriptLibrary_CollisionFunctions";
    uStack_b0 = CONCAT44(uStack_b0._4_4_,0x29);
    FUN_1446e940c(local_38,&local_b8);
    pwVar1 = L"SetDynamicMeshCollisionFromMesh: ToDynamicMeshComponent is Null";
  }
  FUN_140208bae(&local_b8,local_38,local_34,pwVar1);
  FUN_143ba90d7(param_4,2,&local_b8);
  if (local_b8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_b8 + 0x10))();
  }
LAB_148562d39:
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148562e16 FUN_148562e16 body=450 status=ok
// SIG undefined FUN_148562e16(void)

void FUN_148562e16(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined1 local_b1;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined7 local_3f;
  undefined1 uStack_38;
  undefined8 uStack_37;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uStack_38 = 0;
  uStack_37 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_3f = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_b0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  local_b1 = 1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b1);
  }
  local_c0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = &local_a8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148562fda(puVar1,local_b0,local_c0);
  FUN_1400d7d10(&local_a8);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148562fda FUN_148562fda body=231 status=ok
// SIG undefined FUN_148562fda(void)

void FUN_148562fda(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == (longlong *)0x0) {
    local_38 = L"SetSimpleCollisionOfDynamicMeshComponent_InvalidComponent";
    local_30 = 0x39;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"UGeometryScriptLibrary_CollisionFunctions";
    local_30 = 0x29;
    FUN_1446e940c(local_40,&local_38);
    FUN_140208bae(&local_38,local_40,local_3c,
                  L"SetSimpleCollisionOfDynamicMeshComponent: Component is Null");
    FUN_143ba90d7(param_3,2,&local_38);
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 0x10))();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014856302b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0xc70))(param_2,param_1,1,*(code **)(*param_2 + 0xc70));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485630ce FUN_1485630ce body=517 status=ok
// SIG undefined FUN_1485630ce(void)

void FUN_1485630ce(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined1 local_b2;
  undefined1 local_b1;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined7 local_3f;
  undefined1 uStack_38;
  undefined8 uStack_37;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uStack_38 = 0;
  uStack_37 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_3f = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_b0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  local_b1 = 1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b1);
  }
  local_b2 = 1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b2);
  }
  local_c0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = &local_a8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485632d4(puVar1,local_b0,local_c0);
  FUN_1400d7d10(&local_a8);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485632d4 FUN_1485632d4 body=220 status=ok
// SIG undefined FUN_1485632d4(void)

void FUN_1485632d4(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    local_38 = L"SetSimpleCollisionOfStaticMesh_InvalidStaticMesh";
    local_30 = 0x30;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"UGeometryScriptLibrary_CollisionFunctions";
    local_30 = 0x29;
    FUN_1446e940c(local_40,&local_38);
    FUN_140208bae(&local_38,local_40,local_3c,L"SetSimpleCollisionOfStaticMesh: Input Mesh is Null")
    ;
    FUN_143ba90d7(param_3,2,&local_38);
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 0x10))();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_143ba9161(param_2,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485633bc FUN_1485633bc body=434 status=ok
// SIG undefined FUN_1485633bc(void)

void FUN_1485633bc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_22;
  undefined1 local_21;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  local_22 = 1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_22);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_22);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148563570(local_18,local_20,local_30);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148563570 FUN_148563570 body=413 status=ok
// SIG undefined FUN_148563570(void)

void FUN_148563570(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  wchar_t *pwVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 == 0) {
    local_38 = L"SetStaticMeshCollisionFromComponent_InvalidStaticMesh";
    local_30 = 0x35;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"UGeometryScriptLibrary_CollisionFunctions";
    local_30 = 0x29;
    FUN_1446e940c(local_40,&local_38);
    pwVar2 = L"SetStaticMeshCollisionFromComponent: UpdateStaticMeshAsset is Null";
  }
  else if (param_2 == (longlong *)0x0) {
    local_38 = L"SetStaticMeshCollisionFromComponent_InvalidSourceComponent";
    local_30 = 0x3a;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"UGeometryScriptLibrary_CollisionFunctions";
    local_30 = 0x29;
    FUN_1446e940c(local_40,&local_38);
    pwVar2 = L"SetStaticMeshCollisionFromComponent: SourceComponent is Null";
  }
  else {
    lVar1 = (**(code **)(*param_2 + 0x7a0))(param_2);
    if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
    }
    local_38 = L"SetStaticMeshCollisionFromComponent_InvalidBodySetup";
    local_30 = 0x34;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"UGeometryScriptLibrary_CollisionFunctions";
    local_30 = 0x29;
    FUN_1446e940c(local_40,&local_38);
    pwVar2 = L"SetStaticMeshCollisionFromComponent: SourceComponent BodySetup is Null";
  }
  FUN_140208bae(&local_38,local_40,local_3c,pwVar2);
  FUN_143ba90d7(param_3,2,&local_38);
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148563722 FUN_148563722 body=590 status=ok
// SIG undefined FUN_148563722(void)

void FUN_148563722(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined1 local_59;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_58 = 0x1010601;
  uStack_54 = CONCAT31(uStack_54._1_3_,1);
  uStack_50 = 0x3f800000;
  uStack_4c = CONCAT31(uStack_4c._1_3_,1);
  local_48 = 0x19;
  uStack_44 = 1;
  uStack_40 = 0x3f000000;
  uStack_3c = 0;
  local_38 = 0x3dcccccd3dcccccd;
  uStack_30 = CONCAT22(uStack_30._2_2_,0x102);
  uStack_2c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_59 = 1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_59);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_59);
  }
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_58;
  uStack_94 = uStack_54;
  uStack_90 = uStack_50;
  uStack_8c = uStack_4c;
  local_88 = local_48;
  uStack_84 = uStack_44;
  uStack_80 = uStack_40;
  uStack_7c = uStack_3c;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  FUN_148563972(local_20,local_28,&local_98,local_68);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148563972 FUN_148563972 body=403 status=ok
// SIG undefined FUN_148563972(void)

longlong FUN_148563972(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  wchar_t *pwVar1;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined7 local_4f;
  undefined1 uStack_48;
  undefined8 uStack_47;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1 == 0) {
    local_b8 = L"SetStaticMeshCollisionFromMesh_InvalidInput1";
    uStack_b0._0_4_ = 0x2c;
    FUN_1446e940c(local_34,&local_b8);
    local_b8 = L"UGeometryScriptLibrary_CollisionFunctions";
    uStack_b0 = CONCAT44(uStack_b0._4_4_,0x29);
    FUN_1446e940c(local_38,&local_b8);
    pwVar1 = L"SetStaticMeshCollisionFromMesh: FromDynamicMesh is Null";
  }
  else {
    if (param_2 != 0) {
      uStack_48 = 0;
      uStack_47 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      local_4f = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = (wchar_t *)0x0;
      uStack_b0 = 0;
      FUN_148567615(*(undefined8 *)(param_1 + 0x98),&local_b8);
      FUN_143ba9161(param_2,&local_b8);
      FUN_1400d7d10(&local_b8);
      goto LAB_148563a31;
    }
    local_b8 = L"SetStaticMeshCollisionFromMesh_InvalidInput2";
    uStack_b0._0_4_ = 0x2c;
    FUN_1446e940c(local_34,&local_b8);
    local_b8 = L"UGeometryScriptLibrary_CollisionFunctions";
    uStack_b0 = CONCAT44(uStack_b0._4_4_,0x29);
    FUN_1446e940c(local_38,&local_b8);
    pwVar1 = L"SetStaticMeshCollisionFromMesh: ToStaticMeshAsset is Null";
  }
  FUN_140208bae(&local_b8,local_38,local_34,pwVar1);
  FUN_143ba90d7(param_4,2,&local_b8);
  if (local_b8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_b8 + 0x10))();
  }
LAB_148563a31:
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148563b18 FUN_148563b18 body=448 status=ok
// SIG undefined FUN_148563b18(void)

void FUN_148563b18(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
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
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148563cda(local_20,local_28,local_38);
  *param_3 = 0;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148563cda FUN_148563cda body=281 status=ok
// SIG undefined FUN_148563cda(void)

void FUN_148563cda(longlong param_1,longlong param_2,undefined8 param_3)

{
  wchar_t *pwVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 == 0) {
    local_38 = L"SetStaticMeshCustomComplexCollision_InvalidInput";
    local_30 = 0x30;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"UGeometryScriptLibrary_CollisionFunctions";
    local_30 = 0x29;
    FUN_1446e940c(local_40,&local_38);
    pwVar1 = L"SetStaticMeshCustomComplexCollision: StaticMeshAsset is Null";
  }
  else {
    if (param_2 != 0) goto LAB_148563dd3;
    local_38 = L"SetStaticMeshCustomComplexCollision_InvalidInput2";
    local_30 = 0x31;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"UGeometryScriptLibrary_CollisionFunctions";
    local_30 = 0x29;
    FUN_1446e940c(local_40,&local_38);
    pwVar1 = L"SetStaticMeshCustomComplexCollision: StaticMeshCollisionAsset is Null";
  }
  FUN_140208bae(&local_38,local_40,local_3c,pwVar1);
  FUN_143ba90d7(param_3,2,&local_38);
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
LAB_148563dd3:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148563dfc FUN_148563dfc body=501 status=ok
// SIG undefined FUN_148563dfc(void)

void FUN_148563dfc(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_b9;
  undefined1 local_b8 [4];
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined7 local_3f;
  undefined1 uStack_38;
  undefined8 uStack_37;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uStack_38 = 0;
  uStack_37 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_3f = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_b8[0] = 0;
  local_b4 = 0x4120000041200000;
  local_ac = 0xc;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_b9 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b9);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_c8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  puVar4 = &local_b9;
  if (puVar2 != (undefined1 *)0x0) {
    puVar4 = puVar2;
  }
  puVar2 = local_b8;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = &local_a8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148563ff2(puVar3,puVar2,puVar4);
  FUN_1400d7d10(&local_a8);
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148563ff2 FUN_148563ff2 body=1466 status=ok
// SIG undefined FUN_148563ff2(void)

void FUN_148563ff2(longlong param_1,char *param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_988 [32];
  undefined1 local_968;
  char *local_960;
  undefined1 *local_958;
  undefined4 local_950;
  undefined4 uStack_94c;
  undefined4 uStack_948;
  undefined4 uStack_944;
  undefined8 local_940;
  undefined **local_938;
  undefined4 *local_930;
  longlong *local_928;
  uint local_91c;
  int *local_918;
  uint local_910;
  uint local_90c;
  longlong local_908 [2];
  longlong *local_8f8;
  longlong local_8e8 [4];
  undefined *local_8c8;
  uint local_8c0;
  int local_8bc;
  code *local_8b8;
  undefined **local_8a8;
  undefined1 *local_8a0;
  undefined *local_898 [4];
  longlong local_878 [2];
  longlong *local_868;
  longlong local_858 [4];
  int *local_838;
  longlong local_828;
  undefined8 uStack_820;
  undefined4 local_758;
  undefined4 uStack_754;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  undefined8 local_748;
  double local_538 [2];
  int local_528;
  undefined1 local_524;
  undefined ***local_468;
  undefined4 local_3e8;
  undefined4 local_3d4;
  double local_3d0;
  undefined1 local_2a0 [16];
  longlong local_290;
  undefined1 local_280 [48];
  undefined4 local_250;
  int local_130;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_988;
  *param_3 = 0;
  local_958 = param_3;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar13 = 0;
    do {
      lVar12 = lVar13 * 0x100 + *(longlong *)(param_1 + 0x30);
      FUN_140ab2a56(lVar12,0);
      iVar11 = *(int *)(param_2 + 0xc);
      if (iVar11 < 5) {
        iVar11 = 4;
      }
      local_968 = 0;
      FUN_1411b354a(local_2a0,0,0,0);
      cVar5 = FUN_143ba94d3(lVar12);
      if (cVar5 != '\0') {
        if (*param_2 == '\0') {
          local_960 = (char *)CONCAT44(local_960._4_4_,local_130);
          FUN_1482bc5b8(local_538,local_2a0);
          local_3e8 = 1;
          local_3d4 = 1;
          local_3d0 = (double)*(float *)(param_2 + 4);
          FUN_146bff712(&local_758,local_2a0);
          FUN_146ba21d6(&local_828,&local_758);
          local_938 = &PTR_FUN_14ae73f80;
          local_468 = &local_938;
          local_930 = &local_758;
          local_928 = &local_828;
          FUN_1482bc72c(local_538);
          if (local_130 == (int)local_960) {
            FUN_1457e5b52(&local_828);
            FUN_141082778(&local_758);
            FUN_1482fec66(local_538);
            goto LAB_1485640bc;
          }
          plVar9 = (longlong *)(lVar12 + 0x30);
          FUN_1417247dc(plVar9,local_250);
          local_8b8 = (code *)0x0;
          local_8a8 = &PTR_DAT_149f363e0;
          local_8c8 = &DAT_146be727e;
          local_8a0 = local_2a0;
          FUN_146be708e(local_280,local_878);
          FUN_146be6fec(local_878,&local_8c8);
          local_910 = *local_838 * 0x200 + local_838[1];
          local_8f8 = (longlong *)0x0;
          local_908[0] = 0;
          local_918 = local_838;
          local_90c = local_910;
          FUN_146be715a(local_908);
          if (local_8c0 != local_910) {
            do {
              pcVar4 = local_8b8;
              ppuVar8 = local_8a8;
              if (local_8a8 == (undefined **)0x0) {
                ppuVar8 = local_898;
              }
              local_91c = local_8c0;
              uVar7 = (**(code **)(*ppuVar8 + 8))();
              (*pcVar4)(&local_950,uVar7,&local_91c);
              iVar11 = *(int *)(lVar12 + 0x38);
              *(uint *)(lVar12 + 0x38) = iVar11 + 1U;
              if (*(uint *)(lVar12 + 0x3c) < iVar11 + 1U) {
                FUN_1403e3958(plVar9,iVar11);
              }
              lVar3 = *plVar9;
              *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar11 * 0x18) = local_940;
              puVar1 = (undefined4 *)(lVar3 + (longlong)iVar11 * 0x18);
              *puVar1 = local_950;
              puVar1[1] = uStack_94c;
              puVar1[2] = uStack_948;
              puVar1[3] = uStack_944;
              do {
                local_8c0 = local_8c0 + 1;
                if (local_8bc <= (int)local_8c0) break;
              } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                     (*(longlong *)(local_8c8 + 8) +
                                                     (ulonglong)(local_8c0 >> 9) * 8) +
                                                   (ulonglong)(local_8c0 & 0x1ff) * 2) - 1U));
            } while (local_910 != local_8c0);
          }
          if (local_908[0] != 0) {
            plVar9 = local_8f8;
            if (local_8f8 == (longlong *)0x0) {
              plVar9 = local_8e8;
            }
            (**(code **)(*plVar9 + 0x10))();
          }
          if (local_8b8 != (code *)0x0) {
            ppuVar8 = local_8a8;
            if (local_8a8 == (undefined **)0x0) {
              ppuVar8 = local_898;
            }
            (**(code **)(*ppuVar8 + 0x10))();
          }
          if (local_878[0] != 0) {
            plVar9 = local_868;
            if (local_868 == (longlong *)0x0) {
              plVar9 = local_858;
            }
            (**(code **)(*plVar9 + 0x10))();
          }
          FUN_1457e5b52(&local_828);
          FUN_141082778(&local_758);
          FUN_1482fec66(local_538);
        }
        else {
          local_828 = 0;
          uStack_820 = 0;
          local_524 = 1;
          local_538[1] = 0.0001;
          local_960 = param_2;
          local_528 = iVar11;
          local_538[0] = cos((double)*(float *)(param_2 + 8) * 0.017453292519943295);
          local_538[0] = 1.0 - local_538[0];
          FUN_146b9d133(local_2a0,&local_828);
          plVar9 = (longlong *)(lVar12 + 0x30);
          FUN_1417247dc(plVar9);
          lVar3 = local_828;
          lVar10 = (longlong)(int)uStack_820;
          if (lVar10 != 0) {
            lVar14 = 0;
            do {
              lVar2 = *(longlong *)(local_290 + (ulonglong)(*(uint *)(lVar3 + lVar14) >> 9) * 8);
              uVar6 = (ulonglong)(*(uint *)(lVar3 + lVar14) & 0x1ff);
              puVar1 = (undefined4 *)(lVar2 + uVar6 * 0x18);
              local_758 = *puVar1;
              uStack_754 = puVar1[1];
              uStack_750 = puVar1[2];
              uStack_74c = puVar1[3];
              local_748 = *(undefined8 *)(lVar2 + 0x10 + uVar6 * 0x18);
              iVar11 = *(int *)(lVar12 + 0x38);
              *(uint *)(lVar12 + 0x38) = iVar11 + 1U;
              if (*(uint *)(lVar12 + 0x3c) < iVar11 + 1U) {
                FUN_1403e3958(plVar9,iVar11);
              }
              lVar2 = *plVar9;
              *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar11 * 0x18) = local_748;
              puVar1 = (undefined4 *)(lVar2 + (longlong)iVar11 * 0x18);
              *puVar1 = local_758;
              puVar1[1] = uStack_754;
              puVar1[2] = uStack_750;
              puVar1[3] = uStack_74c;
              lVar14 = lVar14 + 4;
            } while (lVar10 * 4 != lVar14);
          }
          param_2 = local_960;
          if (local_828 != 0) {
            FUN_1400020a8(local_828);
          }
        }
        FUN_1479b2c20(lVar12);
        *local_958 = 1;
      }
LAB_1485640bc:
      FUN_141082778(local_2a0);
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_1 + 0x38));
  }
  if ((local_80 ^ (ulonglong)auStack_988) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1485645b4 FUN_1485645b4 body=146 status=ok
// SIG undefined FUN_1485645b4(void)

void FUN_1485645b4(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  *param_3 = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148564650 FUN_148564650 body=765 status=ok
// SIG undefined FUN_148564650(void)

void FUN_148564650(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_238 [32];
  undefined1 *local_218;
  undefined8 local_210;
  undefined8 local_208 [12];
  undefined1 local_1a8 [128];
  undefined8 local_128;
  undefined1 local_11b;
  undefined2 local_11a;
  undefined8 local_118 [2];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined7 local_4f;
  undefined1 uStack_48;
  undefined8 uStack_47;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_238;
  uStack_48 = 0;
  uStack_47 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_4f = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  puVar7 = *(undefined8 **)(param_2 + 0x38);
  local_118[0] = 0;
  local_118[1] = 0;
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0x3ff00000;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d4 = 0x3ff00000;
  uStack_d0 = 0;
  uStack_cc = 0x3ff00000;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_118);
  }
  local_11a = 1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_11a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_11a);
  }
  puVar1 = *(undefined2 **)(param_2 + 0x38);
  local_11b = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_11b);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_11b);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_128 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_128);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_128);
  }
  local_210 = local_128;
  local_218 = &local_11b;
  if (puVar2 != (undefined1 *)0x0) {
    local_218 = puVar2;
  }
  puVar6 = &local_11a;
  if (puVar1 != (undefined2 *)0x0) {
    puVar6 = puVar1;
  }
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = &local_b8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = local_118;
  puVar5 = local_208;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_14856494e(local_1a8,puVar7,local_208,puVar6);
  FUN_1401842de(param_3);
  FUN_14058b698(param_3,local_1a8);
  FUN_1400d7d10(local_1a8);
  FUN_1400d7d10(&local_b8);
  if ((local_30 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856494e FUN_14856494e body=11458 status=ok
// SIG undefined FUN_14856494e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_14856494e(longlong *param_1,longlong *param_2,undefined1 (*param_3) [16],wchar_t *param_4,
             undefined1 *param_5,undefined8 param_6)

{
  undefined1 (*pauVar1) [16];
  double *pdVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar23;
  undefined8 uVar24;
  int iVar25;
  undefined4 uVar26;
  undefined7 uVar27;
  uint uVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong *plVar34;
  uint uVar35;
  undefined **ppuVar36;
  byte bVar37;
  int iVar38;
  uint uVar39;
  wchar_t *pwVar40;
  ulonglong uVar41;
  wchar_t *pwVar42;
  longlong *plVar43;
  longlong lVar44;
  bool bVar45;
  ulonglong uVar46;
  undefined8 uVar47;
  double dVar48;
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar61;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  double dVar69;
  undefined1 auVar68 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  double dVar74;
  double dVar75;
  double dVar76;
  double dVar77;
  double dVar80;
  double dVar81;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  double dVar82;
  undefined1 auVar83 [16];
  double dVar84;
  undefined1 auVar85 [16];
  double dVar87;
  undefined1 auVar86 [16];
  undefined4 uVar88;
  undefined4 uVar89;
  undefined4 uVar90;
  undefined4 uVar91;
  undefined4 uVar92;
  double dVar93;
  double dVar94;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  double dVar97;
  double dVar98;
  undefined1 auVar99 [16];
  double dVar100;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  double dVar104;
  undefined4 uVar105;
  undefined4 uVar106;
  undefined4 uVar107;
  undefined4 uVar108;
  undefined1 auStack_348 [40];
  longlong *local_320;
  undefined1 local_318 [8];
  double dStack_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [24];
  longlong *local_2e0;
  undefined1 local_2d8 [16];
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  undefined8 uStack_2b0;
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
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
  undefined1 local_208 [16];
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined **local_178;
  double local_170;
  undefined8 uStack_168;
  byte local_160;
  undefined1 uStack_15f;
  undefined6 uStack_15e;
  double local_158;
  undefined ***local_150;
  double local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  double dStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  double local_108;
  ulonglong local_f0;
  
  dVar63 = (double)CONCAT44(uStack_140._4_4_,(undefined4)uStack_140);
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_348;
  *param_5 = 1;
  *(undefined8 *)((longlong)param_1 + 0x69) = 0;
  *(undefined8 *)((longlong)param_1 + 0x71) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  dVar49 = *(double *)param_3[5];
  dVar75 = *(double *)param_3[4];
  uVar26 = SUB84(dVar75,0);
  uVar88 = (undefined4)((ulonglong)dVar75 >> 0x20);
  dVar61 = *(double *)(param_3[4] + 8);
  ppuVar36 = (undefined **)param_3;
  pwVar40 = param_4;
  local_320 = param_2;
  if (((9.999999747378752e-05 < ABS(dVar75 - dVar61)) ||
      (9.999999747378752e-05 < ABS(dVar75 - dVar49))) ||
     (9.999999747378752e-05 < ABS(dVar61 - dVar49))) {
    uVar47 = cbrt(dVar75 * dVar61 * dVar49);
    dVar63 = (double)CONCAT44(uStack_140._4_4_,(undefined4)uStack_140);
    uVar26 = (undefined4)uVar47;
    uVar88 = (undefined4)((ulonglong)uVar47 >> 0x20);
    iVar38 = (int)param_2[1];
    if (0 < iVar38) {
      iVar25 = 0;
      if ((char)*param_4 == '\x01') {
        local_178 = (undefined **)0x14af22804;
        local_170._0_4_ = 0x3a;
        FUN_1446e940c(&local_1f8,&local_178);
        local_178 = (undefined **)0x14af21230;
        local_170._0_4_ = 0x29;
        FUN_1446e940c(&local_278,&local_178);
        pwVar40 = L"TransformSimpleCollisionShapes: Cannot apply Non-Uniform Scale to Spheres";
        ppuVar36 = (undefined **)&local_178;
        FUN_140208bae(ppuVar36,&local_278,&local_1f8);
        FUN_143ba9449(param_6);
        if (local_178 != (undefined **)0x0) {
          (**(code **)(*local_178 + 0x10))();
        }
        iVar25 = *(int *)((longlong)param_1 + 0xc);
        param_2 = local_320;
      }
      *param_5 = 0;
      auVar50._12_4_ = 0;
      auVar50._0_12_ = stack0xfffffffffffffcec;
      _local_318 = auVar50 << 0x20;
      goto LAB_148564b50;
    }
    uVar28 = *(uint *)(param_2 + 3);
    if (0 < (int)uVar28) {
      plVar34 = param_2 + 2;
      plVar43 = param_2 + 3;
LAB_148564e8d:
      lVar30 = 0;
      dVar93 = (double)DAT_1499387d0;
      dVar98 = DAT_1499387d0._8_8_;
      do {
        auVar96 = *(undefined1 (*) [16])(*plVar34 + 0x48 + lVar30);
        dVar94 = *(double *)(*plVar34 + 0x58 + lVar30);
        auVar50 = divpd(auVar96,_DAT_1499387d0);
        auVar66._8_8_ = 0;
        auVar66._0_8_ = dVar94;
        auVar67 = divpd(auVar66,_DAT_1499387d0);
        auVar50 = roundpd(auVar50,auVar50,3);
        auVar67 = roundpd(auVar67,auVar67,3);
        dVar62 = auVar96._0_8_ - auVar50._0_8_ * dVar93;
        dVar48 = auVar96._8_8_ - auVar50._8_8_ * dVar98;
        auVar101._0_8_ = dVar94 - auVar67._0_8_ * dVar93;
        auVar101._8_8_ = 0.0 - auVar67._8_8_ * dVar98;
        auVar99._0_8_ = dVar62 + dVar93;
        auVar99._8_8_ = dVar48 + dVar98;
        auVar95._0_8_ = auVar101._0_8_ + dVar93;
        auVar95._8_8_ = auVar101._8_8_ + dVar98;
        auVar51._8_8_ = -(ulonglong)(0.0 <= dVar48);
        auVar51._0_8_ = -(ulonglong)(0.0 <= dVar62);
        auVar72._8_4_ = SUB84(dVar48,0);
        auVar72._0_8_ = dVar62;
        auVar72._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
        auVar50 = blendvpd(auVar99,auVar72,auVar51);
        auVar52._8_8_ = -(ulonglong)(0.0 <= auVar101._8_8_);
        auVar52._0_8_ = -(ulonglong)(0.0 <= auVar101._0_8_);
        auVar96 = blendvpd(auVar95,auVar101,auVar52);
        dVar94 = auVar50._8_8_ + -360.0;
        auVar102._0_8_ = auVar96._0_8_ + -360.0;
        auVar102._8_8_ = auVar96._8_8_ + -360.0;
        auVar53._8_8_ = -(ulonglong)(180.0 < auVar50._8_8_);
        auVar53._0_8_ = -(ulonglong)(180.0 < auVar50._0_8_);
        auVar6._8_4_ = SUB84(dVar94,0);
        auVar6._0_8_ = auVar50._0_8_ + -360.0;
        auVar6._12_4_ = (int)((ulonglong)dVar94 >> 0x20);
        auVar50 = blendvpd(auVar50,auVar6,auVar53);
        auVar54._8_8_ = -(ulonglong)(180.0 < auVar96._8_8_);
        auVar54._0_8_ = -(ulonglong)(180.0 < auVar96._0_8_);
        auVar96 = blendvpd(auVar96,auVar102,auVar54);
        auVar55._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar50._8_8_));
        auVar55._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar50._0_8_));
        uVar35 = movmskpd((int)ppuVar36,auVar55);
        ppuVar36 = (undefined **)(ulonglong)uVar35;
        auVar56._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar96._8_8_));
        auVar56._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar96._0_8_));
        iVar38 = movmskpd((int)pwVar40,auVar56);
        uVar35 = iVar38 << 2 | uVar35;
        pwVar42 = (wchar_t *)(ulonglong)uVar35;
        if (uVar35 != 0) {
          uStack_140 = dVar63;
          if ((char)*param_4 == '\x01') {
            local_178 = (undefined **)0x14af22916;
            local_170._0_4_ = 0x3f;
            FUN_1446e940c(&local_1f8,&local_178);
            local_178 = (undefined **)0x14af21230;
            local_170._0_4_ = 0x29;
            FUN_1446e940c(&local_278,&local_178);
            pwVar42 = 
            L"TransformSimpleCollisionShapes: Cannot apply Non-Uniform Scale to Rotated Box";
            ppuVar36 = (undefined **)&local_178;
            FUN_140208bae(ppuVar36,&local_278,&local_1f8);
            FUN_143ba9449(param_6,2);
            param_2 = local_320;
            if (local_178 != (undefined **)0x0) {
              (**(code **)(*local_178 + 0x10))();
              param_2 = local_320;
            }
          }
          *param_5 = 0;
          dVar63 = uStack_140;
          break;
        }
        lVar30 = lVar30 + 0x70;
        pwVar40 = (wchar_t *)0x0;
      } while ((ulonglong)uVar28 * 0x70 - lVar30 != 0);
      auVar21._12_4_ = 0;
      auVar21._0_12_ = stack0xfffffffffffffcec;
      _local_318 = auVar21 << 0x20;
      pwVar40 = pwVar42;
      goto LAB_1485650a0;
    }
    iVar38 = (int)param_2[5];
    if (iVar38 < 1) {
      auVar96._12_4_ = 0;
      auVar96._0_12_ = stack0xfffffffffffffcec;
      _local_318 = auVar96 << 0x20;
      goto LAB_148565a8e;
    }
    plVar34 = param_2 + 4;
    plVar43 = param_2 + 5;
LAB_148565583:
    uStack_140 = dVar63;
    if ((char)*param_4 == '\x01') {
      local_178 = (undefined **)0x14af22a28;
      local_170._0_4_ = 0x39;
      FUN_1446e940c(&local_1f8,&local_178);
      local_178 = (undefined **)0x14af21230;
      local_170._0_4_ = 0x29;
      FUN_1446e940c(&local_278,&local_178);
      pwVar40 = L"TransformSimpleCollisionShapes: Cannot apply Non-Uniform Scale to Sphyls";
      ppuVar36 = (undefined **)&local_178;
      FUN_140208bae(ppuVar36,&local_278,&local_1f8);
      FUN_143ba9449(param_6,2);
      param_2 = local_320;
      if (local_178 != (undefined **)0x0) {
        (**(code **)(*local_178 + 0x10))();
        param_2 = local_320;
      }
    }
    *param_5 = 0;
    auVar22._12_4_ = 0;
    auVar22._0_12_ = stack0xfffffffffffffcec;
    _local_318 = auVar22 << 0x20;
    dVar63 = uStack_140;
  }
  else {
    iVar38 = (int)param_2[1];
    if (iVar38 < 1) {
      uVar28 = *(uint *)(param_2 + 3);
      uVar27 = (undefined7)(local_f0 >> 8);
      if (0 < (int)uVar28) {
        plVar43 = param_2 + 3;
        plVar34 = param_2 + 2;
        local_318._0_4_ = (int)CONCAT71(uVar27,1);
LAB_1485650a0:
        local_308._0_8_ = param_1 + 2;
        if (*(int *)((longlong)param_1 + 0x1c) < (int)uVar28) {
          uStack_140 = dVar63;
          FUN_147a3a81e(param_1 + 2,uVar28);
          dVar63 = uStack_140;
        }
        lVar30 = 0;
        if ((longlong)(int)*plVar43 == 0) goto LAB_14856555b;
        lVar32 = *plVar34;
        local_2f8._0_8_ = (longlong)(int)*plVar43 * 0x70;
        lVar31 = 0;
        do {
          local_170._0_4_ = *(undefined4 *)(lVar32 + 8 + lVar31);
          uVar47 = *(undefined8 *)(lVar32 + 0xc + lVar31);
          local_170._4_4_ = (undefined4)uVar47;
          uStack_168._0_4_ = (undefined4)((ulonglong)uVar47 >> 0x20);
          uStack_168._4_4_ = *(undefined4 *)(lVar32 + 0x14 + lVar31);
          local_160 = local_160 & 0xfe | *(byte *)(lVar32 + 0x18 + lVar31) & 1;
          uStack_15f = *(undefined1 *)(lVar32 + 0x19 + lVar31);
          local_158 = (double)CONCAT44(local_158._4_4_,6);
          local_150 = &local_178;
          local_178 = &PTR_FUN_14a1e3c70;
          pdVar2 = (double *)(lVar32 + 0x30 + lVar31);
          local_148 = *pdVar2;
          uStack_140 = pdVar2[1];
          pdVar2 = (double *)(lVar32 + 0x40 + lVar31);
          uStack_138 = *pdVar2;
          dVar63 = pdVar2[1];
          puVar3 = (undefined8 *)(lVar32 + 0x50 + lVar31);
          dStack_128 = (double)*puVar3;
          uVar16 = puVar3[1];
          puVar3 = (undefined8 *)(lVar32 + 0x5c + lVar31);
          uVar47 = puVar3[1];
          fStack_118 = (float)((ulonglong)*puVar3 >> 0x20);
          fStack_114 = (float)uVar47;
          fStack_110 = (float)((ulonglong)uVar47 >> 0x20);
          uStack_120 = (undefined4)uVar16;
          uStack_11c = (undefined4)((ulonglong)uVar16 >> 0x20);
          uStack_130._0_4_ = SUB84(dVar63,0);
          uStack_130._4_4_ = (undefined4)((ulonglong)dVar63 >> 0x20);
          if (*(char *)((longlong)param_4 + 1) == '\x01') {
            local_148 = *(double *)param_3[2] + local_148;
            uStack_140 = *(double *)(param_3[2] + 8) + uStack_140;
            uStack_138 = *(double *)param_3[3] + uStack_138;
            uVar89 = *(undefined4 *)*param_3;
            uVar90 = *(undefined4 *)(*param_3 + 4);
            uVar91 = *(undefined4 *)(*param_3 + 8);
            uVar92 = *(undefined4 *)(*param_3 + 0xc);
            dVar98 = SUB168(param_3[1],0);
            uVar47 = *(undefined8 *)(param_3[1] + 8);
            uVar105 = (undefined4)uVar47;
            uVar106 = (undefined4)((ulonglong)uVar47 >> 0x20);
            uVar47 = *(undefined8 *)(param_3[1] + 8);
            uVar107 = (undefined4)uVar47;
            uVar108 = (undefined4)((ulonglong)uVar47 >> 0x20);
          }
          else {
            local_148 = local_148 * *(double *)param_3[4];
            uStack_140 = uStack_140 * *(double *)(param_3[4] + 8);
            uStack_138 = uStack_138 * *(double *)param_3[5];
            auVar96 = *param_3;
            dVar94 = auVar96._0_8_;
            uVar89 = auVar96._0_4_;
            uVar90 = auVar96._4_4_;
            dVar62 = auVar96._8_8_;
            uVar91 = auVar96._8_4_;
            uVar92 = auVar96._12_4_;
            dVar98 = SUB168(param_3[1],0);
            dVar93 = *(double *)(param_3[1] + 8);
            uVar105 = SUB84(dVar93,0);
            uVar106 = (undefined4)((ulonglong)dVar93 >> 0x20);
            dVar63 = *(double *)(param_3[1] + 8);
            uVar107 = SUB84(dVar63,0);
            uVar108 = (undefined4)((ulonglong)dVar63 >> 0x20);
            dVar48 = uStack_140 * dVar94 - local_148 * dVar62;
            dVar64 = uStack_138 * dVar62 - uStack_140 * dVar98;
            dVar74 = local_148 * dVar98 - dVar94 * uStack_138;
            dVar64 = dVar64 + dVar64;
            dVar74 = dVar74 + dVar74;
            dVar48 = dVar48 + dVar48;
            local_148 = (dVar48 * dVar62 - dVar74 * dVar98) + dVar93 * dVar64 + local_148 +
                        *(double *)param_3[2];
            uStack_140 = (dVar98 * dVar64 - dVar94 * dVar48) + dVar63 * dVar74 + uStack_140 +
                         *(double *)(param_3[2] + 8);
            uStack_138 = dVar48 * dVar93 + uStack_138 + (dVar74 * dVar94 - dVar64 * dVar62) +
                         *(double *)param_3[3];
          }
          FUN_144a7484c(&uStack_130,&local_278);
          local_1f8 = dStack_270 * dVar98 * -1.0 +
                      local_268 * (double)CONCAT44(uVar92,uVar91) +
                      (double)CONCAT44(uVar90,uVar89) * dStack_260 * 1.0 +
                      (double)CONCAT44(uVar106,uVar105) * local_278;
          dStack_1f0 = local_278 * dVar98 * 1.0 +
                       dStack_260 * (double)CONCAT44(uVar92,uVar91) +
                       (double)CONCAT44(uVar90,uVar89) * local_268 * -1.0 +
                       (double)CONCAT44(uVar108,uVar107) * dStack_270;
          local_1e8 = dStack_260 * dVar98 * 1.0 +
                      (((double)CONCAT44(uVar90,uVar89) * dStack_270 * 1.0 +
                       (double)CONCAT44(uVar106,uVar105) * local_268) -
                      (double)CONCAT44(uVar92,uVar91) * local_278);
          dStack_1e0 = local_268 * dVar98 * -1.0 +
                       (((double)CONCAT44(uVar90,uVar89) * local_278 * -1.0 +
                        (double)CONCAT44(uVar108,uVar107) * dStack_260) -
                       (double)CONCAT44(uVar92,uVar91) * dStack_270);
          FUN_1448052ee(&local_1f8,&local_298);
          uStack_120 = SUB84(local_288,0);
          uStack_11c = (undefined4)((ulonglong)local_288 >> 0x20);
          uStack_130._0_4_ = SUB84(local_298,0);
          uStack_130._4_4_ = (undefined4)((ulonglong)local_298 >> 0x20);
          dStack_128 = dStack_290;
          fStack_118 = ABS((float)((double)fStack_118 * dVar75));
          fStack_114 = ABS((float)((double)fStack_114 * dVar61));
          fStack_110 = ABS((float)((double)fStack_110 * dVar49));
          iVar38 = (int)param_1[3];
          *(uint *)(param_1 + 3) = iVar38 + 1U;
          dVar63 = uStack_140;
          if (*(uint *)((longlong)param_1 + 0x1c) < iVar38 + 1U) {
            FUN_140c9d5a2(local_308._0_8_,iVar38);
            dVar63 = uStack_140;
          }
          uStack_140._4_4_ = (undefined4)((ulonglong)dVar63 >> 0x20);
          uStack_140._0_4_ = SUB84(dVar63,0);
          lVar30 = *(longlong *)local_308._0_8_;
          lVar33 = (longlong)iVar38 * 0x70;
          *(undefined ***)(lVar30 + lVar33) = &PTR_FUN_14a1dee50;
          *(undefined4 *)(lVar30 + 8 + lVar33) = local_170._0_4_;
          *(ulonglong *)(lVar30 + 0xc + lVar33) = CONCAT44((undefined4)uStack_168,local_170._4_4_);
          *(undefined4 *)(lVar30 + 0x14 + lVar33) = uStack_168._4_4_;
          uVar46 = (ulonglong)CONCAT31((int3)((uint)uStack_168._4_4_ >> 8),local_160) &
                   0xffffffffffffff01;
          uVar41 = CONCAT71((int7)((ulonglong)pwVar40 >> 8),*(undefined1 *)(lVar30 + 0x18 + lVar33))
                   & 0xfffffffffffffffe;
          bVar37 = (byte)uVar41 | (byte)uVar46;
          pwVar40 = (wchar_t *)CONCAT71((int7)(uVar41 >> 8),bVar37);
          *(byte *)(lVar30 + 0x18 + lVar33) = bVar37;
          ppuVar36 = (undefined **)CONCAT71((int7)(uVar46 >> 8),uStack_15f);
          *(undefined1 *)(lVar30 + 0x19 + lVar33) = uStack_15f;
          *(undefined4 *)(lVar30 + 0x20 + lVar33) = 6;
          *(longlong *)(lVar30 + 0x28 + lVar33) = lVar30 + lVar33;
          *(undefined ***)(lVar30 + lVar33) = &PTR_FUN_14a1e3c70;
          auVar17._8_4_ = (undefined4)uStack_140;
          auVar17._0_8_ = local_148;
          auVar17._12_4_ = uStack_140._4_4_;
          auVar19._8_4_ = uStack_120;
          auVar19._0_8_ = dStack_128;
          auVar19._12_4_ = uStack_11c;
          *(undefined1 (*) [16])(lVar30 + 0x30 + lVar33) = auVar17;
          pdVar2 = (double *)(lVar30 + 0x40 + lVar33);
          *pdVar2 = uStack_138;
          pdVar2[1] = (double)CONCAT44(uStack_130._4_4_,(float)uStack_130);
          *(undefined1 (*) [16])(lVar30 + 0x50 + lVar33) = auVar19;
          puVar3 = (undefined8 *)(lVar30 + 0x5c + lVar33);
          *puVar3 = CONCAT44(fStack_118,uStack_11c);
          puVar3[1] = CONCAT44(fStack_110,fStack_114);
          lVar31 = lVar31 + 0x70;
          param_2 = local_320;
        } while (local_2f8._0_8_ != lVar31);
        goto LAB_14856555f;
      }
      iVar38 = (int)param_2[5];
      if (iVar38 < 1) {
        local_318._0_4_ = (int)CONCAT71(uVar27,1);
        goto LAB_148565a8e;
      }
      plVar43 = param_2 + 5;
      plVar34 = param_2 + 4;
      local_318._0_4_ = (int)CONCAT71(uVar27,1);
    }
    else {
      iVar25 = 0;
      local_318._0_4_ = (int)CONCAT71((int7)((ulonglong)param_5 >> 8),1);
LAB_148564b50:
      if (iVar25 < iVar38) {
        FUN_147a38878(param_1);
      }
      dVar63 = (double)CONCAT44(uStack_140._4_4_,(undefined4)uStack_140);
      lVar32 = param_2[1];
      lVar30 = 0;
      if ((longlong)(int)lVar32 != 0) {
        lVar31 = *local_320 + 8;
        lVar33 = 0;
        local_308._0_8_ = lVar31;
        do {
          local_170._0_4_ = *(undefined4 *)(lVar31 + lVar33);
          uVar47 = *(undefined8 *)(lVar31 + 4 + lVar33);
          local_170._4_4_ = (undefined4)uVar47;
          uStack_168._0_4_ = (undefined4)((ulonglong)uVar47 >> 0x20);
          uStack_168._4_4_ = *(undefined4 *)(lVar31 + 0xc + lVar33);
          local_160 = local_160 & 0xfe | *(byte *)(lVar31 + 0x10 + lVar33) & 1;
          uStack_15f = *(undefined1 *)(lVar31 + 0x11 + lVar33);
          local_158 = (double)CONCAT44(local_158._4_4_,6);
          local_178 = &PTR_FUN_14a418310;
          pdVar2 = (double *)(lVar31 + 0x28 + lVar33);
          local_148 = *pdVar2;
          uStack_140 = pdVar2[1];
          puVar3 = (undefined8 *)(lVar31 + 0x34 + lVar33);
          uVar47 = puVar3[1];
          uStack_138._0_4_ = (undefined4)((ulonglong)*puVar3 >> 0x20);
          uStack_138._4_4_ = (undefined4)uVar47;
          uStack_130._0_4_ = (float)((ulonglong)uVar47 >> 0x20);
          if (*(char *)((longlong)param_4 + 1) == '\x01') {
            local_148 = *(double *)param_3[2] + local_148;
            uStack_140 = *(double *)(param_3[2] + 8) + uStack_140;
            dVar63 = *(double *)param_3[3] +
                     (double)CONCAT44(uStack_138._4_4_,(undefined4)uStack_138);
          }
          else {
            local_148 = local_148 * *(double *)param_3[4];
            uStack_140 = uStack_140 * *(double *)(param_3[4] + 8);
            dVar48 = (double)CONCAT44(uStack_138._4_4_,(undefined4)uStack_138) *
                     *(double *)param_3[5];
            dVar98 = *(double *)*param_3;
            dVar94 = *(double *)(*param_3 + 8);
            dVar62 = *(double *)param_3[1];
            dVar63 = *(double *)(param_3[1] + 8);
            dVar64 = uStack_140 * dVar98 - local_148 * dVar94;
            dVar74 = dVar48 * dVar94 - uStack_140 * dVar62;
            dVar93 = local_148 * dVar62 - dVar98 * dVar48;
            dVar74 = dVar74 + dVar74;
            dVar93 = dVar93 + dVar93;
            dVar64 = dVar64 + dVar64;
            local_148 = (dVar64 * dVar94 - dVar93 * dVar62) + dVar63 * dVar74 + local_148 +
                        *(double *)param_3[2];
            uStack_140 = (dVar62 * dVar74 - dVar98 * dVar64) +
                         *(double *)(param_3[1] + 8) * dVar93 + uStack_140 +
                         *(double *)(param_3[2] + 8);
            dVar63 = dVar64 * dVar63 + dVar48 + (dVar93 * dVar98 - dVar74 * dVar94) +
                     *(double *)param_3[3];
          }
          uStack_138._0_4_ = SUB84(dVar63,0);
          uStack_138._4_4_ = (undefined4)((ulonglong)dVar63 >> 0x20);
          uStack_130._0_4_ =
               ABS((float)((double)(float)uStack_130 * (double)CONCAT44(uVar88,uVar26)));
          iVar38 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar38 + 1U;
          local_150 = &local_178;
          dVar63 = uStack_140;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar38 + 1U) {
            FUN_140e25fd0(param_1,iVar38);
            lVar31 = local_308._0_8_;
            dVar63 = uStack_140;
          }
          uStack_140._4_4_ = (undefined4)((ulonglong)dVar63 >> 0x20);
          uStack_140._0_4_ = SUB84(dVar63,0);
          lVar30 = *param_1;
          lVar29 = (longlong)iVar38 * 0x50;
          *(undefined ***)(lVar30 + lVar29) = &PTR_FUN_14a1dee50;
          *(undefined4 *)(lVar30 + 8 + lVar29) = local_170._0_4_;
          *(ulonglong *)(lVar30 + 0xc + lVar29) = CONCAT44((undefined4)uStack_168,local_170._4_4_);
          *(undefined4 *)(lVar30 + 0x14 + lVar29) = uStack_168._4_4_;
          uVar46 = (ulonglong)CONCAT31((int3)((uint)uStack_168._4_4_ >> 8),local_160) &
                   0xffffffffffffff01;
          uVar41 = CONCAT71((int7)((ulonglong)pwVar40 >> 8),*(undefined1 *)(lVar30 + 0x18 + lVar29))
                   & 0xfffffffffffffffe;
          bVar37 = (byte)uVar41 | (byte)uVar46;
          pwVar40 = (wchar_t *)CONCAT71((int7)(uVar41 >> 8),bVar37);
          *(byte *)(lVar30 + 0x18 + lVar29) = bVar37;
          ppuVar36 = (undefined **)CONCAT71((int7)(uVar46 >> 8),uStack_15f);
          *(undefined1 *)(lVar30 + 0x19 + lVar29) = uStack_15f;
          *(undefined4 *)(lVar30 + 0x20 + lVar29) = 6;
          *(longlong *)(lVar30 + 0x28 + lVar29) = lVar30 + lVar29;
          *(undefined ***)(lVar30 + lVar29) = &PTR_FUN_14a418310;
          auVar67._8_4_ = (undefined4)uStack_140;
          auVar67._0_8_ = local_148;
          auVar67._12_4_ = uStack_140._4_4_;
          *(undefined1 (*) [16])(lVar30 + 0x30 + lVar29) = auVar67;
          puVar3 = (undefined8 *)(lVar30 + 0x3c + lVar29);
          *puVar3 = CONCAT44((undefined4)uStack_138,uStack_140._4_4_);
          puVar3[1] = CONCAT44((float)uStack_130,uStack_138._4_4_);
          lVar33 = lVar33 + 0x50;
        } while ((longlong)(int)lVar32 * 0x50 != lVar33);
      }
      uVar28 = *(uint *)(local_320 + 3);
      param_2 = local_320;
      if (0 < (int)uVar28) {
        plVar43 = local_320 + 3;
        plVar34 = local_320 + 2;
        bVar45 = local_318[0] == '\0';
        local_318._0_4_ = (int)CONCAT71((int7)((ulonglong)lVar30 >> 8),1);
        if (bVar45) goto LAB_148564e8d;
        goto LAB_1485650a0;
      }
LAB_14856555b:
LAB_14856555f:
      iVar38 = (int)param_2[5];
      if (iVar38 < 1) goto LAB_148565a8e;
      plVar43 = param_2 + 5;
      plVar34 = param_2 + 4;
      bVar45 = local_318[0] == '\0';
      local_318._0_4_ = (int)CONCAT71((int7)((ulonglong)lVar30 >> 8),1);
      if (bVar45) goto LAB_148565583;
    }
  }
  local_308._0_8_ = param_1 + 4;
  if (*(int *)((longlong)param_1 + 0x2c) < iVar38) {
    uStack_140 = dVar63;
    FUN_147a3880a(param_1 + 4,iVar38);
    dVar63 = uStack_140;
  }
  if ((longlong)(int)*plVar43 != 0) {
    lVar30 = *plVar34;
    local_2f8._0_8_ = (longlong)(int)*plVar43 * 0x68;
    lVar32 = 0;
    do {
      local_170._0_4_ = *(undefined4 *)(lVar30 + 8 + lVar32);
      uVar47 = *(undefined8 *)(lVar30 + 0xc + lVar32);
      local_170._4_4_ = (undefined4)uVar47;
      uStack_168._0_4_ = (undefined4)((ulonglong)uVar47 >> 0x20);
      uStack_168._4_4_ = *(undefined4 *)(lVar30 + 0x14 + lVar32);
      local_160 = local_160 & 0xfe | *(byte *)(lVar30 + 0x18 + lVar32) & 1;
      uStack_15f = *(undefined1 *)(lVar30 + 0x19 + lVar32);
      local_158 = (double)CONCAT44(local_158._4_4_,6);
      local_150 = &local_178;
      local_178 = &PTR_FUN_14a1dee70;
      uVar47 = *(undefined8 *)(lVar30 + 0x60 + lVar32);
      fStack_118 = (float)uVar47;
      fStack_114 = (float)((ulonglong)uVar47 >> 0x20);
      pdVar2 = (double *)(lVar30 + 0x30 + lVar32);
      local_148 = *pdVar2;
      uStack_140 = pdVar2[1];
      pdVar2 = (double *)(lVar30 + 0x40 + lVar32);
      uStack_138 = *pdVar2;
      dVar49 = pdVar2[1];
      puVar3 = (undefined8 *)(lVar30 + 0x50 + lVar32);
      dStack_128 = (double)*puVar3;
      uVar47 = puVar3[1];
      uStack_120 = (undefined4)uVar47;
      uStack_11c = (undefined4)((ulonglong)uVar47 >> 0x20);
      uStack_130._0_4_ = SUB84(dVar49,0);
      uStack_130._4_4_ = (undefined4)((ulonglong)dVar49 >> 0x20);
      if (*(char *)((longlong)param_4 + 1) == '\x01') {
        local_148 = *(double *)param_3[2] + local_148;
        uStack_140 = *(double *)(param_3[2] + 8) + uStack_140;
        uStack_138 = *(double *)param_3[3] + uStack_138;
        uVar89 = *(undefined4 *)*param_3;
        uVar90 = *(undefined4 *)(*param_3 + 4);
        uVar91 = *(undefined4 *)(*param_3 + 8);
        uVar92 = *(undefined4 *)(*param_3 + 0xc);
        dVar93 = *(double *)param_3[1];
        dVar49 = *(double *)(param_3[1] + 8);
        dVar75 = *(double *)(param_3[1] + 8);
      }
      else {
        local_148 = local_148 * *(double *)param_3[4];
        uStack_140 = uStack_140 * *(double *)(param_3[4] + 8);
        uStack_138 = uStack_138 * *(double *)param_3[5];
        auVar96 = *param_3;
        dVar61 = auVar96._0_8_;
        uVar89 = auVar96._0_4_;
        uVar90 = auVar96._4_4_;
        dVar63 = auVar96._8_8_;
        uVar91 = auVar96._8_4_;
        uVar92 = auVar96._12_4_;
        dVar93 = *(double *)param_3[1];
        dVar49 = *(double *)(param_3[1] + 8);
        dVar75 = *(double *)(param_3[1] + 8);
        dVar98 = uStack_140 * dVar61 - local_148 * dVar63;
        dVar94 = uStack_138 * dVar63 - uStack_140 * dVar93;
        dVar62 = local_148 * dVar93 - dVar61 * uStack_138;
        dVar94 = dVar94 + dVar94;
        dVar62 = dVar62 + dVar62;
        dVar98 = dVar98 + dVar98;
        local_148 = (dVar98 * dVar63 - dVar62 * dVar93) + dVar49 * dVar94 + local_148 +
                    *(double *)param_3[2];
        uStack_140 = (dVar93 * dVar94 - dVar61 * dVar98) + dVar75 * dVar62 + uStack_140 +
                     *(double *)(param_3[2] + 8);
        uStack_138 = dVar98 * dVar49 + uStack_138 + (dVar62 * dVar61 - dVar94 * dVar63) +
                     *(double *)param_3[3];
      }
      fStack_118 = ABS((float)((double)fStack_118 * (double)CONCAT44(uVar88,uVar26)));
      fStack_114 = ABS((float)((double)fStack_114 * (double)CONCAT44(uVar88,uVar26)));
      FUN_144a7484c(&uStack_130,&local_278);
      local_1f8 = dStack_270 * dVar93 * -1.0 +
                  local_268 * (double)CONCAT44(uVar92,uVar91) +
                  (double)CONCAT44(uVar90,uVar89) * dStack_260 * 1.0 + dVar49 * local_278;
      dStack_1f0 = local_278 * dVar93 * 1.0 +
                   dStack_260 * (double)CONCAT44(uVar92,uVar91) +
                   (double)CONCAT44(uVar90,uVar89) * local_268 * -1.0 + dVar75 * dStack_270;
      local_1e8 = dStack_260 * dVar93 * 1.0 +
                  (((double)CONCAT44(uVar90,uVar89) * dStack_270 * 1.0 + dVar49 * local_268) -
                  (double)CONCAT44(uVar92,uVar91) * local_278);
      dStack_1e0 = local_268 * dVar93 * -1.0 +
                   (((double)CONCAT44(uVar90,uVar89) * local_278 * -1.0 + dVar75 * dStack_260) -
                   (double)CONCAT44(uVar92,uVar91) * dStack_270);
      FUN_1448052ee(&local_1f8,&local_298);
      uStack_120 = SUB84(local_288,0);
      uStack_11c = (undefined4)((ulonglong)local_288 >> 0x20);
      uStack_130._0_4_ = SUB84(local_298,0);
      uStack_130._4_4_ = (undefined4)((ulonglong)local_298 >> 0x20);
      dStack_128 = dStack_290;
      iVar38 = (int)param_1[5];
      *(uint *)(param_1 + 5) = iVar38 + 1U;
      dVar63 = uStack_140;
      if (*(uint *)((longlong)param_1 + 0x2c) < iVar38 + 1U) {
        FUN_1407e1e9e(local_308._0_8_,iVar38);
        dVar63 = uStack_140;
      }
      uStack_140._4_4_ = (undefined4)((ulonglong)dVar63 >> 0x20);
      uStack_140._0_4_ = SUB84(dVar63,0);
      lVar31 = *(longlong *)local_308._0_8_;
      lVar33 = (longlong)iVar38 * 0x68;
      *(undefined ***)(lVar31 + lVar33) = &PTR_FUN_14a1dee50;
      *(undefined4 *)(lVar31 + 8 + lVar33) = local_170._0_4_;
      *(ulonglong *)(lVar31 + 0xc + lVar33) = CONCAT44((undefined4)uStack_168,local_170._4_4_);
      *(undefined4 *)(lVar31 + 0x14 + lVar33) = uStack_168._4_4_;
      uVar46 = CONCAT71((int7)((ulonglong)pwVar40 >> 8),*(undefined1 *)(lVar31 + 0x18 + lVar33)) &
               0xfffffffffffffffe;
      bVar37 = (byte)uVar46 | local_160 & 1;
      pwVar40 = (wchar_t *)CONCAT71((int7)(uVar46 >> 8),bVar37);
      *(byte *)(lVar31 + 0x18 + lVar33) = bVar37;
      *(undefined1 *)(lVar31 + 0x19 + lVar33) = uStack_15f;
      *(undefined4 *)(lVar31 + 0x20 + lVar33) = 6;
      *(longlong *)(lVar31 + 0x28 + lVar33) = lVar31 + lVar33;
      ppuVar36 = &PTR_FUN_14a1dee70;
      *(undefined ***)(lVar31 + lVar33) = &PTR_FUN_14a1dee70;
      auVar18._8_4_ = (undefined4)uStack_140;
      auVar18._0_8_ = local_148;
      auVar18._12_4_ = uStack_140._4_4_;
      auVar20._8_4_ = uStack_120;
      auVar20._0_8_ = dStack_128;
      auVar20._12_4_ = uStack_11c;
      *(undefined1 (*) [16])(lVar31 + 0x30 + lVar33) = auVar18;
      pdVar2 = (double *)(lVar31 + 0x40 + lVar33);
      *pdVar2 = uStack_138;
      pdVar2[1] = (double)CONCAT44(uStack_130._4_4_,(float)uStack_130);
      *(undefined1 (*) [16])(lVar31 + 0x50 + lVar33) = auVar20;
      *(ulonglong *)(lVar31 + 0x60 + lVar33) = CONCAT44(fStack_114,fStack_118);
      lVar32 = lVar32 + 0x68;
      param_2 = local_320;
    } while (local_2f8._0_8_ != lVar32);
  }
LAB_148565a8e:
  iVar38 = (int)param_2[7];
  uStack_140 = dVar63;
  if (iVar38 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar38);
  }
  local_308._0_8_ = param_1 + 6;
  if (*(int *)((longlong)param_1 + 0x3c) < iVar38) {
    FUN_147a387aa(param_1 + 6);
    iVar38 = (int)param_2[7];
  }
  if (iVar38 != 0) {
    lVar30 = local_320[6];
    lVar32 = (longlong)iVar38 * 0x100 + lVar30;
    do {
      iVar38 = (int)param_1[7];
      *(uint *)(param_1 + 7) = iVar38 + 1U;
      if (*(uint *)((longlong)param_1 + 0x3c) < iVar38 + 1U) {
        FUN_1474ba6a4(local_308._0_8_,iVar38);
      }
      lVar33 = *(longlong *)local_308._0_8_;
      lVar44 = (longlong)iVar38 * 0x100;
      lVar31 = lVar33 + lVar44;
      FUN_147c4992e(lVar31,lVar30);
      puVar3 = (undefined8 *)(lVar33 + 0x50 + lVar44);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3 = (undefined8 *)(lVar33 + 0x60 + lVar44);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3 = (undefined8 *)(lVar33 + 0x70 + lVar44);
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined1 *)(lVar33 + 0x80 + lVar44) = 0;
      lVar29 = (longlong)*(int *)(lVar33 + 0x38 + lVar44);
      if (lVar29 != 0) {
        lVar33 = lVar33 + lVar44;
        lVar44 = *(longlong *)(lVar33 + 0x30);
        ppuVar36 = (undefined **)0x0;
        do {
          if (*(char *)((longlong)param_4 + 1) == '\x01') {
            dVar63 = (*(double *)(lVar30 + 0x60) + *(double *)(lVar30 + 0x78)) * 0.5;
            dVar64 = (*(double *)(lVar30 + 0x58) + *(double *)(lVar30 + 0x70)) * 0.5;
            dVar48 = (*(double *)(lVar30 + 0x50) + *(double *)(lVar30 + 0x68)) * 0.5;
            dVar74 = (*(double *)(*(undefined1 (*) [16])ppuVar36 + lVar44) - dVar48) *
                     *(double *)param_3[4];
            dVar80 = (*(double *)(*(undefined1 (*) [16])ppuVar36 + lVar44 + 8) - dVar64) *
                     *(double *)(param_3[4] + 8);
            dVar82 = (*(double *)(*(undefined1 (*) [16])((longlong)ppuVar36 + 0x10) + lVar44) -
                     dVar63) * *(double *)param_3[5];
            dVar98 = *(double *)*param_3;
            dVar94 = *(double *)(*param_3 + 8);
            dVar62 = *(double *)param_3[1];
            dVar75 = *(double *)(param_3[1] + 8);
            dVar49 = *(double *)(param_3[1] + 8);
            dVar93 = dVar80 * dVar98 - dVar74 * dVar94;
            dVar97 = dVar82 * dVar94 - dVar80 * dVar62;
            dVar100 = dVar74 * dVar62 - dVar98 * dVar82;
            dVar97 = dVar97 + dVar97;
            dVar100 = dVar100 + dVar100;
            dVar93 = dVar93 + dVar93;
            dVar61 = *(double *)(param_3[2] + 8);
            dVar63 = dVar93 * dVar75 + dVar82 + (dVar100 * dVar98 - dVar97 * dVar94) +
                     *(double *)param_3[3] + dVar63;
            *(double *)(*(undefined1 (*) [16])ppuVar36 + lVar44) =
                 dVar48 + (dVar93 * dVar94 - dVar100 * dVar62) + dVar75 * dVar97 + dVar74 +
                          *(double *)param_3[2];
            *(double *)(*(undefined1 (*) [16])ppuVar36 + lVar44 + 8) =
                 (dVar62 * dVar97 - dVar98 * dVar93) + dVar49 * dVar100 + dVar80 + dVar61 + dVar64;
          }
          else {
            dVar48 = *(double *)(*(undefined1 (*) [16])ppuVar36 + lVar44) * *(double *)param_3[4];
            dVar64 = *(double *)((longlong)(*(undefined1 (*) [16])ppuVar36 + lVar44) + 8) *
                     *(double *)(param_3[4] + 8);
            dVar63 = *(double *)(*(undefined1 (*) [16])((longlong)ppuVar36 + 0x10) + lVar44) *
                     *(double *)param_3[5];
            dVar98 = *(double *)*param_3;
            dVar94 = *(double *)(*param_3 + 8);
            dVar62 = *(double *)param_3[1];
            dVar75 = *(double *)(param_3[1] + 8);
            dVar49 = *(double *)(param_3[1] + 8);
            dVar93 = dVar64 * dVar98 - dVar48 * dVar94;
            dVar74 = dVar63 * dVar94 - dVar64 * dVar62;
            dVar80 = dVar48 * dVar62 - dVar98 * dVar63;
            dVar74 = dVar74 + dVar74;
            dVar80 = dVar80 + dVar80;
            dVar93 = dVar93 + dVar93;
            dVar61 = *(double *)(param_3[2] + 8);
            dVar63 = dVar93 * dVar75 + dVar63 + (dVar80 * dVar98 - dVar74 * dVar94) +
                     *(double *)param_3[3];
            *(double *)(*(undefined1 (*) [16])ppuVar36 + lVar44) =
                 (dVar93 * dVar94 - dVar80 * dVar62) + dVar75 * dVar74 + dVar48 +
                 *(double *)param_3[2];
            *(double *)((longlong)(*(undefined1 (*) [16])ppuVar36 + lVar44) + 8) =
                 (dVar62 * dVar74 - dVar98 * dVar93) + dVar49 * dVar80 + dVar64 + dVar61;
          }
          *(double *)(*(undefined1 (*) [16])((longlong)ppuVar36 + 0x10) + lVar44) = dVar63;
          if (*(char *)(lVar31 + 0x80) == '\0') {
            pauVar1 = (undefined1 (*) [16])(*(undefined1 (*) [16])ppuVar36 + lVar44);
            *(undefined8 *)(lVar33 + 0x78) = *(undefined8 *)pauVar1[1];
            uVar47 = *(undefined8 *)(*pauVar1 + 8);
            *(undefined8 *)(lVar33 + 0x68) = *(undefined8 *)*pauVar1;
            *(undefined8 *)(lVar33 + 0x70) = uVar47;
            auVar96 = *pauVar1;
            pwVar40 = *(wchar_t **)pauVar1[1];
            *(wchar_t **)(lVar33 + 0x60) = pwVar40;
            *(undefined1 (*) [16])(lVar33 + 0x50) = auVar96;
            *(undefined1 *)(lVar31 + 0x80) = 1;
          }
          else {
            dVar49 = *(double *)(lVar31 + 0x50);
            if (*(double *)(*(undefined1 (*) [16])ppuVar36 + lVar44) <= *(double *)(lVar31 + 0x50))
            {
              dVar49 = *(double *)(*(undefined1 (*) [16])ppuVar36 + lVar44);
            }
            *(double *)(lVar31 + 0x50) = dVar49;
            dVar49 = *(double *)(lVar31 + 0x58);
            if (*(double *)(*(undefined1 (*) [16])ppuVar36 + lVar44 + 8) <=
                *(double *)(lVar31 + 0x58)) {
              dVar49 = *(double *)(*(undefined1 (*) [16])ppuVar36 + lVar44 + 8);
            }
            *(double *)(lVar31 + 0x58) = dVar49;
            dVar49 = *(double *)(lVar31 + 0x60);
            if (*(double *)(*(undefined1 (*) [16])((longlong)ppuVar36 + 0x10) + lVar44) <=
                *(double *)(lVar31 + 0x60)) {
              dVar49 = *(double *)(*(undefined1 (*) [16])((longlong)ppuVar36 + 0x10) + lVar44);
            }
            *(double *)(lVar31 + 0x60) = dVar49;
            dVar49 = *(double *)(lVar31 + 0x68);
            if (*(double *)(lVar31 + 0x68) <= *(double *)(*(undefined1 (*) [16])ppuVar36 + lVar44))
            {
              dVar49 = *(double *)(*(undefined1 (*) [16])ppuVar36 + lVar44);
            }
            *(double *)(lVar31 + 0x68) = dVar49;
            dVar49 = *(double *)(lVar31 + 0x70);
            if (*(double *)(lVar31 + 0x70) <=
                *(double *)(*(undefined1 (*) [16])ppuVar36 + lVar44 + 8)) {
              dVar49 = *(double *)(*(undefined1 (*) [16])ppuVar36 + lVar44 + 8);
            }
            *(double *)(lVar31 + 0x70) = dVar49;
            dVar49 = *(double *)(lVar31 + 0x78);
            if (*(double *)(lVar31 + 0x78) <=
                *(double *)(*(undefined1 (*) [16])((longlong)ppuVar36 + 0x10) + lVar44)) {
              dVar49 = *(double *)(*(undefined1 (*) [16])((longlong)ppuVar36 + 0x10) + lVar44);
            }
            *(double *)(lVar31 + 0x78) = dVar49;
          }
          ppuVar36 = (undefined **)(*(undefined1 (*) [16])((longlong)ppuVar36 + 0x10) + 8);
        } while ((undefined1 (*) [16])(lVar29 * 0x18) != (undefined1 (*) [16])ppuVar36);
      }
      lVar30 = lVar30 + 0x100;
    } while (lVar30 != lVar32);
  }
  lVar30 = local_320[9];
  if (0 < (int)lVar30) {
    if (local_318[0] == '\0') {
      if ((char)*param_4 == '\x01') {
        local_178 = (undefined **)0x14af22b42;
        local_170._0_4_ = 0x43;
        FUN_1446e940c(&local_1f8,&local_178);
        local_178 = (undefined **)0x14af21230;
        local_170._0_4_ = 0x29;
        FUN_1446e940c(&local_278,&local_178);
        pwVar40 = 
        L"TransformSimpleCollisionShapes: Cannot apply Non-Uniform Scale to Tapered Capsules";
        ppuVar36 = (undefined **)&local_178;
        FUN_140208bae(ppuVar36,&local_278,&local_1f8);
        FUN_143ba9449(param_6);
        if (local_178 != (undefined **)0x0) {
          (**(code **)(*local_178 + 0x10))();
        }
      }
      *param_5 = 0;
    }
    plVar43 = param_1 + 8;
    if (*(int *)((longlong)param_1 + 0x4c) < (int)lVar30) {
      FUN_147a388ea(plVar43);
    }
    if ((longlong)(int)local_320[9] != 0) {
      lVar30 = local_320[8];
      lVar32 = (longlong)(int)local_320[9] * 0x70;
      do {
        FUN_1479b2570(&local_178,lVar30);
        if (*(char *)((longlong)param_4 + 1) == '\x01') {
          local_148 = *(double *)param_3[2] + local_148;
          uStack_140 = *(double *)(param_3[2] + 8) + uStack_140;
          uStack_138 = *(double *)param_3[3] + uStack_138;
        }
        else {
          local_148 = local_148 * *(double *)param_3[4];
          uStack_140 = uStack_140 * *(double *)(param_3[4] + 8);
          uStack_138 = uStack_138 * *(double *)param_3[5];
          dVar61 = *(double *)*param_3;
          dVar63 = *(double *)(*param_3 + 8);
          dVar93 = *(double *)param_3[1];
          dVar49 = *(double *)(param_3[1] + 8);
          dVar98 = uStack_140 * dVar61 - local_148 * dVar63;
          dVar94 = uStack_138 * dVar63 - uStack_140 * dVar93;
          dVar75 = local_148 * dVar93 - dVar61 * uStack_138;
          dVar94 = dVar94 + dVar94;
          dVar75 = dVar75 + dVar75;
          dVar98 = dVar98 + dVar98;
          local_148 = (dVar98 * dVar63 - dVar75 * dVar93) + dVar49 * dVar94 + local_148 +
                      *(double *)param_3[2];
          uStack_140 = (dVar93 * dVar94 - dVar61 * dVar98) +
                       *(double *)(param_3[1] + 8) * dVar75 + uStack_140 +
                       *(double *)(param_3[2] + 8);
          uStack_138 = dVar98 * dVar49 + uStack_138 + (dVar75 * dVar61 - dVar94 * dVar63) +
                       *(double *)param_3[3];
        }
        uStack_138._4_4_ = (undefined4)((ulonglong)uStack_138 >> 0x20);
        if (0.0 < (double)CONCAT44(uVar88,uVar26) || (double)CONCAT44(uVar88,uVar26) == 0.0) {
          fStack_118 = (float)((double)fStack_118 * (double)CONCAT44(uVar88,uVar26));
          dVar49 = (double)CONCAT44(uVar88,uVar26);
        }
        else {
          fStack_118 = (float)((double)fStack_114 * (double)CONCAT44(uVar88,uVar26));
          dVar49 = -(double)CONCAT44(uVar88,uVar26);
          fStack_114 = fStack_118;
        }
        fStack_114 = (float)((double)fStack_114 * (double)CONCAT44(uVar88,uVar26));
        fStack_110 = (float)((double)fStack_110 * dVar49);
        dVar75 = *(double *)(param_3[1] + 8);
        dVar49 = *(double *)(param_3[1] + 8);
        dVar63 = *(double *)*param_3;
        dVar61 = *(double *)*param_3;
        dVar93 = *(double *)(*param_3 + 8);
        dVar98 = *(double *)(*param_3 + 8);
        dVar94 = *(double *)param_3[1];
        dVar62 = *(double *)param_3[1];
        FUN_144a7484c(&uStack_130,&local_278);
        local_1f8 = dStack_270 * dVar94 * -1.0 +
                    dVar63 * dStack_260 * 1.0 + dVar75 * local_278 + dVar93 * local_268;
        dStack_1f0 = local_278 * dVar62 * 1.0 +
                     dVar61 * local_268 * -1.0 + dVar49 * dStack_270 + dVar98 * dStack_260;
        local_1e8 = dStack_260 * dVar94 * 1.0 +
                    ((dVar63 * dStack_270 * 1.0 + dVar75 * local_268) - dVar93 * local_278);
        dStack_1e0 = local_268 * dVar62 * -1.0 +
                     ((dVar61 * local_278 * -1.0 + dVar49 * dStack_260) - dVar98 * dStack_270);
        FUN_1448052ee(&local_1f8,&local_298);
        uStack_120 = SUB84(local_288,0);
        uStack_11c = (undefined4)((ulonglong)local_288 >> 0x20);
        uStack_130._0_4_ = SUB84(local_298,0);
        uStack_130._4_4_ = (undefined4)((ulonglong)local_298 >> 0x20);
        dStack_128 = dStack_290;
        iVar38 = (int)param_1[9];
        *(uint *)(param_1 + 9) = iVar38 + 1U;
        if (*(uint *)((longlong)param_1 + 0x4c) < iVar38 + 1U) {
          FUN_147c64082(plVar43,iVar38);
        }
        FUN_1479b2570((longlong)iVar38 * 0x70 + *plVar43);
        lVar30 = lVar30 + 0x70;
        lVar32 = lVar32 + -0x70;
      } while (lVar32 != 0);
    }
  }
  uVar28 = *(uint *)(local_320 + 0xb);
  dVar49 = (double)CONCAT44(local_170._4_4_,local_170._0_4_);
  if (0 < (int)uVar28) {
    if (local_318[0] == '\0') {
      lVar30 = 0;
      do {
        pdVar2 = (double *)(local_320[10] + 0x30 + lVar30);
        dVar49 = *pdVar2;
        dVar75 = pdVar2[1];
        pdVar2 = (double *)(local_320[10] + 0x40 + lVar30);
        dVar61 = *pdVar2;
        dVar63 = pdVar2[1];
        lVar32 = -(ulonglong)(9.99999993922529e-09 < ABS(dVar75 - DAT_14c8463d8));
        auVar12._8_4_ = (int)lVar32;
        auVar12._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar49 - DAT_14c8463d0));
        auVar12._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
        uVar35 = movmskpd((int)ppuVar36,auVar12);
        lVar32 = -(ulonglong)(9.99999993922529e-09 < ABS(dVar63 - DAT_14c8463e8));
        auVar8._8_4_ = (int)lVar32;
        auVar8._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar61 - DAT_14c8463e0));
        auVar8._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
        iVar38 = movmskpd((int)pwVar40,auVar8);
        uVar39 = iVar38 << 2 | uVar35;
        if (uVar39 != 0) {
          lVar32 = -(ulonglong)(9.99999993922529e-09 < ABS(dVar75 + DAT_14c8463d8));
          auVar9._8_4_ = (int)lVar32;
          auVar9._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar49 + DAT_14c8463d0));
          auVar9._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
          uVar35 = movmskpd(uVar35,auVar9);
          auVar86._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar63 + DAT_14c8463e8));
          auVar86._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar61 + DAT_14c8463e0));
          uVar39 = movmskpd(uVar39,auVar86);
          if ((uVar39 & 0x3fffffff) != 0 || uVar35 != 0) {
            if ((char)*param_4 == '\x01') {
              local_178 = (undefined **)0x14af22c66;
              local_170._0_4_ = 0x3e;
              FUN_1446e940c(&local_1f8,&local_178);
              local_178 = (undefined **)0x14af21230;
              local_170._0_4_ = 0x29;
              FUN_1446e940c(&local_278,&local_178);
              FUN_140208bae(&local_178,&local_278,&local_1f8,
                            L"TransformSimpleCollisionShapes: Cannot apply requested transform to Level Set"
                           );
              FUN_143ba9449(param_6,2,&local_178);
              if (local_178 != (undefined **)0x0) {
                (**(code **)(*local_178 + 0x10))();
              }
            }
            *param_5 = 0;
            break;
          }
        }
        pwVar40 = (wchar_t *)0x0;
        ppuVar36 = (undefined **)(ulonglong)uVar35;
        lVar30 = lVar30 + 0xa0;
      } while ((ulonglong)uVar28 * 0xa0 != lVar30);
    }
    plVar43 = local_320;
    local_2e0 = param_1 + 10;
    if (*(int *)((longlong)param_1 + 0x5c) < (int)uVar28) {
      FUN_147a38958(local_2e0,uVar28);
    }
    dVar49 = local_170;
    if ((longlong)(int)plVar43[0xb] != 0) {
      lVar30 = local_320[10];
      lVar32 = (longlong)(int)plVar43[0xb] * 0xa0;
      local_2a8 = ZEXT816(0x3ff0000000000000) << 0x40;
      do {
        iVar38 = (int)param_1[0xb];
        *(uint *)(param_1 + 0xb) = iVar38 + 1U;
        if (*(uint *)((longlong)param_1 + 0x5c) < iVar38 + 1U) {
          FUN_147c63fee(local_2e0,iVar38);
        }
        lVar33 = *local_2e0;
        lVar29 = (longlong)iVar38 * 0xa0;
        puVar4 = (undefined4 *)(lVar33 + 8 + lVar29);
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 7;
        pbVar5 = (byte *)(lVar33 + 0x18 + lVar29);
        *pbVar5 = *pbVar5 | 1;
        lVar31 = lVar33 + lVar29;
        *(undefined1 *)(lVar33 + 0x19 + lVar29) = 3;
        *(undefined4 *)(lVar33 + 0x20 + lVar29) = 6;
        *(longlong *)(lVar33 + 0x28 + lVar29) = lVar31;
        *(undefined ***)(lVar33 + lVar29) = &PTR_FUN_14a418060;
        puVar3 = (undefined8 *)(lVar33 + 0x30 + lVar29);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3 = (undefined8 *)(lVar33 + 0x40 + lVar29);
        *puVar3 = local_2a8._0_8_;
        puVar3[1] = local_2a8._8_8_;
        puVar3 = (undefined8 *)(lVar33 + 0x50 + lVar29);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3 = (undefined8 *)(lVar33 + 0x60 + lVar29);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3 = (undefined8 *)(lVar33 + 0x70 + lVar29);
        *puVar3 = 0x3ff0000000000000;
        puVar3[1] = 0x3ff0000000000000;
        puVar3 = (undefined8 *)(lVar33 + 0x80 + lVar29);
        *puVar3 = 0x3ff0000000000000;
        puVar3[1] = 0;
        puVar3 = (undefined8 *)(lVar33 + 0x90 + lVar29);
        *puVar3 = 0;
        puVar3[1] = 0;
        lVar33 = lVar31;
        uVar26 = FUN_147c4cfbe(lVar31,lVar30);
        auVar67 = _DAT_149934d80;
        dVar94 = *(double *)(lVar30 + 0x30);
        dVar62 = *(double *)(lVar30 + 0x38);
        dVar48 = *(double *)(lVar30 + 0x40);
        dVar64 = *(double *)(lVar30 + 0x48);
        dVar93 = *(double *)*(undefined1 (*) [16])(lVar30 + 0x50);
        dVar98 = *(double *)(lVar30 + 0x58);
        dVar63 = *(double *)(lVar30 + 0x60);
        auVar96 = *(undefined1 (*) [16])(lVar30 + 0x70);
        dVar49 = auVar96._0_8_;
        dVar61 = auVar96._8_8_;
        auVar50 = *(undefined1 (*) [16])(lVar30 + 0x80);
        dVar75 = auVar50._0_8_;
        local_308 = auVar50;
        local_2f8._0_16_ = auVar96;
        if (*(char *)((longlong)param_4 + 1) == '\x01') {
          lVar33 = lVar30;
          uVar26 = FUN_1479b25e6(lVar30,&local_178);
          auVar72 = _DAT_149934d80;
          dVar49 = ((double)local_178 + (double)CONCAT62(uStack_15e,CONCAT11(uStack_15f,local_160)))
                   * 0.5 * dVar49;
          dVar61 = (local_170 + local_158) * 0.5 * dVar61;
          dVar75 = (uStack_168 + (double)local_150) * 0.5 * dVar75;
          dVar74 = dVar61 * dVar94 - dVar62 * dVar49;
          dVar80 = dVar75 * dVar62 - dVar48 * dVar61;
          dVar82 = dVar49 * dVar48 - dVar94 * dVar75;
          dVar80 = dVar80 + dVar80;
          dVar82 = dVar82 + dVar82;
          dVar74 = dVar74 + dVar74;
          dVar49 = (dVar74 * dVar62 - dVar82 * dVar48) + dVar64 * dVar80 + dVar49 + dVar93;
          dVar61 = (dVar48 * dVar80 - dVar74 * dVar94) + dVar64 * dVar82 + dVar61 + dVar98;
          dVar75 = dVar64 * dVar74 + dVar75 + (dVar82 * dVar94 - dVar80 * dVar62) + dVar63;
          local_2b8 = dVar63 - dVar75;
          dVar93 = dVar93 - dVar49;
          dVar98 = dVar98 - dVar61;
          unique0x1000268b = SUB84(dVar98,0);
          local_318 = dVar93;
          unique0x1000268f = (int)((ulonglong)dVar98 >> 0x20);
          uStack_2b0 = 0;
          auVar67 = param_3[4];
          dVar13 = auVar67._0_8_;
          dVar14 = auVar67._8_8_;
          local_2d8 = param_3[5];
          dVar65 = local_2d8._0_8_;
          dVar97 = local_2d8._8_8_;
          auVar96 = minpd(auVar96,auVar67);
          auVar50 = minpd(auVar50,local_2d8);
          auVar70._8_8_ = -(ulonglong)(auVar96._8_8_ < 0.0);
          auVar70._0_8_ = -(ulonglong)(auVar96._0_8_ < 0.0);
          iVar38 = movmskpd(uVar26,auVar70);
          auVar85._8_8_ = -(ulonglong)(auVar50._8_8_ < 0.0);
          auVar85._0_8_ = -(ulonglong)(auVar50._0_8_ < 0.0);
          uVar28 = movmskpd((int)lVar33,auVar85);
          uVar47 = local_308._0_8_;
          uVar16 = local_308._8_8_;
          uVar23 = local_2f8._0_8_;
          uVar24 = local_2f8._8_8_;
          if ((uVar28 & 0x3fffffff) == 0 && iVar38 == 0) {
            dVar10 = *(double *)*param_3;
            dVar104 = *(double *)(*param_3 + 8);
            dVar15 = *(double *)param_3[1];
            dVar63 = *(double *)(param_3[1] + 8);
            dVar98 = *(double *)(param_3[1] + 8);
            dVar80 = *(double *)(*param_3 + 8);
            dVar74 = *(double *)(*param_3 + 8);
            dVar100 = *(double *)param_3[1];
            dVar82 = *(double *)param_3[1];
            dVar87 = dVar62 * dVar100 * -1.0 +
                     dVar48 * dVar80 + dVar64 * *(double *)*param_3 * 1.0 + dVar94 * dVar63;
            dVar69 = dVar94 * dVar82 * 1.0 +
                     dVar64 * dVar74 + dVar48 * *(double *)*param_3 * -1.0 + dVar62 * dVar98;
            auVar71._0_8_ =
                 dVar64 * dVar100 * 1.0 +
                 ((*(double *)*param_3 * dVar62 * 1.0 + dVar48 * dVar63) - dVar94 * dVar80);
            auVar71._8_8_ =
                 dVar48 * dVar82 * -1.0 +
                 ((*(double *)*param_3 * dVar94 * -1.0 + dVar64 * dVar98) - dVar62 * dVar74);
            dVar93 = dVar93 * dVar13;
            dVar62 = dStack_310 * dVar14;
            dVar64 = local_2b8 * dVar65;
            dVar94 = dVar62 * dVar10 - dVar93 * dVar104;
            dVar74 = dVar64 * dVar104 - dVar62 * dVar15;
            dVar48 = dVar93 * dVar15 - dVar64 * dVar10;
            dVar74 = dVar74 + dVar74;
            dVar48 = dVar48 + dVar48;
            dVar94 = dVar94 + dVar94;
            dVar93 = (dVar94 * dVar104 - dVar15 * dVar48) + dVar63 * dVar74 + dVar93 +
                     *(double *)param_3[2];
            dVar98 = (dVar74 * dVar15 - dVar94 * dVar10) + dVar98 * dVar48 + dVar62 +
                     *(double *)(param_3[2] + 8);
            dVar94 = (dVar48 * dVar10 - dVar104 * dVar74) + dVar63 * dVar94 + dVar64 +
                     *(double *)param_3[3];
          }
          else {
            dVar10 = *(double *)*param_3;
            dVar104 = *(double *)(*param_3 + 8);
            dVar15 = *(double *)param_3[1];
            dVar87 = dVar104 + dVar104;
            dVar98 = dVar15 + dVar15;
            dVar82 = dVar10 * (dVar10 + dVar10);
            dVar100 = *(double *)*param_3 * dVar98;
            dVar63 = *(double *)(param_3[1] + 8);
            dVar74 = dVar98 * dVar63;
            dVar80 = (dVar10 + dVar10) * *(double *)(param_3[1] + 8);
            dVar63 = dVar87 * dVar63;
            dVar76 = (double)local_308._0_8_ * dVar65;
            dStack_2c0 = (double)local_308._8_8_ * dVar97;
            local_1a8 = (1.0 - (dVar82 + dVar104 * dVar87)) * dVar65;
            local_1b8 = (dVar63 + dVar100) * dVar65;
            dStack_1b0 = (dVar98 * dVar104 - dVar80) * dVar65;
            dVar77 = (double)local_2f8._0_8_ * dVar13;
            dVar81 = (double)local_2f8._8_8_ * dVar14;
            local_2d8._8_8_ = dVar81;
            local_2d8._0_8_ = dVar77;
            local_1f8 = (1.0 - (dVar15 * dVar98 + dVar104 * dVar87)) * dVar13;
            dVar82 = (1.0 - (dVar15 * dVar98 + dVar82)) * dVar14;
            dStack_1f0 = (dVar87 * dVar10 + dVar74) * dVar13;
            local_1c8 = (dVar98 * dVar104 + dVar80) * dVar14;
            local_1e8 = (dVar100 - dVar63) * dVar13;
            dStack_1e0 = 0.0;
            local_1d8._8_4_ = SUB84(dVar82,0);
            local_1d8._0_8_ = (dVar87 * dVar10 - dVar74) * dVar14;
            local_1d8._12_4_ = (int)((ulonglong)dVar82 >> 0x20);
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            local_198 = *(undefined8 *)param_3[2];
            uStack_190 = *(undefined8 *)(param_3[2] + 8);
            local_188 = *(undefined8 *)param_3[3];
            uStack_180 = 0x3ff0000000000000;
            dVar74 = dVar62 + dVar62;
            dVar63 = dVar48 + dVar48;
            dVar80 = dVar94 * (dVar94 + dVar94);
            local_228 = (1.0 - (dVar80 + dVar62 * dVar74)) * (double)local_308._0_8_;
            dVar98 = (dVar94 + dVar94) * dVar64;
            local_238 = (dVar74 * dVar64 + dVar94 * dVar63) * (double)local_308._0_8_;
            local_258 = (dVar74 * dVar94 - dVar63 * dVar64) * (double)local_2f8._8_8_;
            dStack_230 = (dVar63 * dVar62 - dVar98) * (double)local_308._0_8_;
            local_278 = ((double)DAT_149934d80 - (dVar48 * dVar63 + dVar62 * dVar74)) *
                        (double)local_2f8._0_8_;
            dStack_250 = (DAT_149934d80._8_8_ - (dVar48 * dVar63 + dVar80)) *
                         (double)local_2f8._8_8_;
            dStack_270 = (dVar74 * dVar94 + dVar63 * dVar64) * (double)local_2f8._0_8_;
            local_248 = (dVar63 * dVar62 + dVar98) * (double)local_2f8._8_8_;
            local_268 = (dVar94 * dVar63 - dVar74 * dVar64) * (double)local_2f8._0_8_;
            dStack_260 = 0.0;
            uStack_240 = 0;
            uStack_220 = 0;
            dStack_210 = dStack_310;
            local_208._8_8_ = 0x3ff0000000000000;
            local_208._0_8_ = local_2b8;
            local_2c8 = dVar76;
            local_218 = dVar93;
            FUN_1447fea8d(&local_178,&local_278,&local_1f8);
            FUN_144a1c686(&local_178,0x3e45798ee0000000);
            auVar57._8_8_ = -(ulonglong)(0.0 <= dVar81);
            auVar57._0_8_ = -(ulonglong)(0.0 <= dVar77);
            auVar96 = blendvpd(_DAT_149936790,auVar72,auVar57);
            uVar46 = -(ulonglong)(0.0 <= dVar76);
            dVar63 = (double)(~uVar46 & 0xbff0000000000000 | uVar46 & 0x3ff0000000000000);
            dVar93 = auVar96._0_8_;
            uStack_168 = uStack_168 * dVar93;
            local_170 = local_170 * dVar93;
            local_178 = (undefined **)((double)local_178 * dVar93);
            dVar93 = auVar96._8_8_;
            local_148 = local_148 * dVar93;
            local_150 = (undefined ***)((double)local_150 * dVar93);
            local_158 = dVar93 * local_158;
            dStack_128 = dStack_128 * dVar63;
            uStack_130 = uStack_130 * dVar63;
            uStack_138 = dVar63 * uStack_138;
            FUN_14481fd10(&local_298,&local_178);
            dVar63 = local_288 * local_288 + local_298 * local_298;
            dVar93 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
            auVar78._0_8_ = dVar63 + dVar93;
            auVar78._8_8_ = dVar63 + dVar93;
            auVar58._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar78._8_8_);
            auVar58._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar78._0_8_);
            auVar96 = sqrtpd(auVar78,auVar78);
            auVar96 = divpd(auVar72,auVar96);
            auVar83._0_8_ = auVar96._0_8_ * local_288;
            auVar83._8_8_ = auVar96._8_8_ * dStack_280;
            dVar87 = (double)((ulonglong)(local_298 * auVar96._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar78._0_8_));
            dVar69 = (double)((ulonglong)(dStack_290 * auVar96._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar78._8_8_));
            auVar71 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar83,auVar58);
            dVar93 = (double)CONCAT44(fStack_114,fStack_118);
            dVar98 = (double)CONCAT44(uStack_10c,fStack_110);
            dVar94 = local_108;
          }
          dVar14 = (double)uVar24 * dVar14;
          dVar13 = (double)uVar23 * dVar13;
          dVar97 = (double)uVar16 * dVar97;
          dVar65 = (double)uVar47 * dVar65;
          dVar49 = dVar49 + dVar93;
          dVar61 = dVar61 + dVar98;
          dVar63 = 0.0;
          dVar75 = dVar75 + dVar94;
        }
        else {
          auVar72 = param_3[4];
          dVar74 = auVar72._0_8_;
          dVar82 = auVar72._8_8_;
          auVar6 = param_3[5];
          dVar80 = auVar6._0_8_;
          dVar97 = auVar6._8_8_;
          auVar96 = minpd(auVar96,auVar72);
          auVar72 = minpd(auVar50,auVar6);
          auVar68._8_8_ = -(ulonglong)(auVar96._8_8_ < 0.0);
          auVar68._0_8_ = -(ulonglong)(auVar96._0_8_ < 0.0);
          iVar38 = movmskpd(uVar26,auVar68);
          auVar73._8_8_ = -(ulonglong)(auVar72._8_8_ < 0.0);
          auVar73._0_8_ = -(ulonglong)(auVar72._0_8_ < 0.0);
          uVar28 = movmskpd((int)lVar33,auVar73);
          if ((uVar28 & 0x3fffffff) == 0 && iVar38 == 0) {
            dVar15 = *(double *)*param_3;
            dVar76 = *(double *)(*param_3 + 8);
            dVar77 = *(double *)param_3[1];
            dVar81 = *(double *)(param_3[1] + 8);
            dVar10 = *(double *)(param_3[1] + 8);
            dVar100 = *(double *)(param_3[1] + 8);
            dVar13 = *(double *)(*param_3 + 8);
            dVar65 = *(double *)(*param_3 + 8);
            dVar104 = *(double *)param_3[1];
            dVar14 = *(double *)param_3[1];
            dVar87 = dVar62 * dVar104 * -1.0 +
                     dVar48 * dVar13 + dVar64 * *(double *)*param_3 * 1.0 + dVar94 * dVar10;
            dVar69 = dVar94 * dVar14 * 1.0 +
                     dVar64 * dVar65 + dVar48 * *(double *)*param_3 * -1.0 + dVar62 * dVar100;
            auVar71._0_8_ =
                 dVar64 * dVar104 * 1.0 +
                 ((*(double *)*param_3 * dVar62 * 1.0 + dVar48 * dVar10) - dVar94 * dVar13);
            auVar71._8_8_ =
                 dVar48 * dVar14 * -1.0 +
                 ((*(double *)*param_3 * dVar94 * -1.0 + dVar64 * dVar100) - dVar62 * dVar65);
            dVar93 = dVar93 * dVar74;
            dVar98 = dVar98 * dVar82;
            dVar63 = dVar63 * dVar80;
            dVar48 = *(double *)(lVar30 + 0x68) * dVar97;
            dVar64 = dVar98 * dVar15 - dVar93 * dVar76;
            dVar104 = dVar63 * dVar76 - dVar98 * dVar77;
            dVar94 = dVar93 * dVar77 - dVar63 * dVar15;
            dVar62 = dVar48 * dVar81 - dVar48 * dVar81;
            dVar104 = dVar104 + dVar104;
            dVar94 = dVar94 + dVar94;
            dVar64 = dVar64 + dVar64;
            dVar62 = dVar62 + dVar62;
            dVar13 = dVar49 * dVar74;
            dVar14 = dVar61 * dVar82;
            dVar65 = dVar75 * dVar80;
            dVar97 = auVar50._8_8_ * dVar97;
            dVar49 = (dVar64 * dVar76 - dVar77 * dVar94) + dVar10 * dVar104 + dVar93 +
                     *(double *)param_3[2];
            dVar61 = (dVar104 * dVar77 - dVar64 * dVar15) + dVar100 * dVar94 + dVar98 +
                     *(double *)(param_3[2] + 8);
            dVar75 = (dVar94 * dVar15 - dVar76 * dVar104) + dVar10 * dVar64 + dVar63 +
                     *(double *)param_3[3];
            dVar63 = (dVar62 * dVar81 - dVar62 * dVar81) + dVar100 * dVar62 + dVar48 +
                     *(double *)(param_3[3] + 8);
          }
          else {
            dVar65 = dVar75 * dVar80;
            dVar97 = auVar50._8_8_ * dVar97;
            dVar15 = *(double *)*param_3;
            dVar76 = *(double *)(*param_3 + 8);
            dVar77 = *(double *)param_3[1];
            dVar81 = dVar76 + dVar76;
            dVar87 = dVar77 + dVar77;
            dVar10 = dVar15 * (dVar15 + dVar15);
            local_1a8 = (1.0 - (dVar10 + dVar76 * dVar81)) * dVar80;
            dVar104 = *(double *)*param_3 * dVar87;
            dVar100 = *(double *)(param_3[1] + 8);
            dVar69 = dVar87 * dVar100;
            dVar84 = (dVar15 + dVar15) * *(double *)(param_3[1] + 8);
            dVar100 = dVar81 * dVar100;
            local_1b8 = (dVar100 + dVar104) * dVar80;
            dStack_1b0 = (dVar87 * dVar76 - dVar84) * dVar80;
            dVar13 = dVar49 * dVar74;
            dVar14 = dVar61 * dVar82;
            local_1f8 = (1.0 - (dVar77 * dVar87 + dVar76 * dVar81)) * dVar74;
            dStack_1f0 = (dVar81 * dVar15 + dVar69) * dVar74;
            local_1c8 = (dVar87 * dVar76 + dVar84) * dVar82;
            local_1e8 = (dVar104 - dVar100) * dVar74;
            dStack_1e0 = 0.0;
            local_1d8._8_8_ = (1.0 - (dVar77 * dVar87 + dVar10)) * dVar82;
            local_1d8._0_8_ = (dVar81 * dVar15 - dVar69) * dVar82;
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            local_198 = *(undefined8 *)param_3[2];
            uStack_190 = *(undefined8 *)(param_3[2] + 8);
            local_188 = *(undefined8 *)param_3[3];
            uStack_180 = 0x3ff0000000000000;
            dVar74 = dVar62 + dVar62;
            dVar82 = dVar48 + dVar48;
            dVar80 = dVar94 * (dVar94 + dVar94);
            local_228 = (1.0 - (dVar80 + dVar62 * dVar74)) * dVar75;
            dVar100 = (dVar94 + dVar94) * dVar64;
            local_238 = (dVar74 * dVar64 + dVar94 * dVar82) * dVar75;
            local_258 = (dVar74 * dVar94 - dVar82 * dVar64) * dVar61;
            dStack_230 = (dVar82 * dVar62 - dVar100) * dVar75;
            local_278 = ((double)DAT_149934d80 - (dVar48 * dVar82 + dVar62 * dVar74)) * dVar49;
            dStack_250 = (DAT_149934d80._8_8_ - (dVar48 * dVar82 + dVar80)) * dVar61;
            dStack_270 = (dVar74 * dVar94 + dVar82 * dVar64) * dVar49;
            local_248 = (dVar82 * dVar62 + dVar100) * dVar61;
            local_268 = (dVar94 * dVar82 - dVar74 * dVar64) * dVar49;
            dStack_260 = 0.0;
            uStack_240 = 0;
            uStack_220 = 0;
            local_208._8_4_ = 0;
            local_208._0_8_ = dVar63;
            local_208._12_4_ = 0x3ff00000;
            _local_318 = *(undefined1 (*) [16])(lVar30 + 0x50);
            local_2c8 = dVar65;
            dStack_2c0 = dVar97;
            local_218 = dVar93;
            dStack_210 = dVar98;
            FUN_1447fea8d(&local_178,&local_278,&local_1f8);
            FUN_144a1c686(&local_178,0x3e45798ee0000000);
            auVar59._8_8_ = -(ulonglong)(0.0 <= dVar14);
            auVar59._0_8_ = -(ulonglong)(0.0 <= dVar13);
            auVar96 = blendvpd(_DAT_149936790,auVar67,auVar59);
            dVar49 = (double)(~-(ulonglong)(0.0 <= dVar65) & 0xbff0000000000000 |
                             -(ulonglong)(0.0 <= dVar65) & 0x3ff0000000000000);
            dVar75 = auVar96._0_8_;
            uStack_168 = uStack_168 * dVar75;
            local_170 = local_170 * dVar75;
            local_178 = (undefined **)((double)local_178 * dVar75);
            dVar75 = auVar96._8_8_;
            local_148 = local_148 * dVar75;
            local_150 = (undefined ***)((double)local_150 * dVar75);
            local_158 = dVar75 * local_158;
            dStack_128 = dStack_128 * dVar49;
            uStack_130 = uStack_130 * dVar49;
            uStack_138 = dVar49 * uStack_138;
            FUN_14481fd10(&local_298,&local_178);
            dVar49 = local_288 * local_288 + local_298 * local_298;
            dVar75 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
            auVar79._0_8_ = dVar49 + dVar75;
            auVar79._8_8_ = dVar49 + dVar75;
            auVar60._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar79._8_8_);
            auVar60._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar79._0_8_);
            auVar96 = sqrtpd(auVar79,auVar79);
            auVar96 = divpd(auVar67,auVar96);
            auVar103._0_8_ = auVar96._0_8_ * local_288;
            auVar103._8_8_ = auVar96._8_8_ * dStack_280;
            dVar87 = (double)((ulonglong)(local_298 * auVar96._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar79._0_8_));
            dVar69 = (double)((ulonglong)(dStack_290 * auVar96._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar79._8_8_));
            auVar71 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar103,auVar60);
            dVar49 = (double)CONCAT44(fStack_114,fStack_118);
            dVar61 = (double)CONCAT44(uStack_10c,fStack_110);
            dVar63 = 0.0;
            dVar75 = local_108;
          }
        }
        *(double *)(lVar31 + 0x30) = dVar87;
        *(double *)(lVar31 + 0x38) = dVar69;
        *(undefined1 (*) [16])(lVar31 + 0x40) = auVar71;
        *(double *)(lVar31 + 0x50) = dVar49;
        *(double *)(lVar31 + 0x58) = dVar61;
        *(double *)(lVar31 + 0x60) = dVar75;
        *(double *)(lVar31 + 0x68) = dVar63;
        auVar11._8_4_ = SUB84(dVar14,0);
        auVar11._0_8_ = dVar13;
        auVar11._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
        *(undefined1 (*) [16])(lVar31 + 0x70) = auVar11;
        auVar7._8_4_ = SUB84(dVar97,0);
        auVar7._0_8_ = dVar65;
        auVar7._12_4_ = (int)((ulonglong)dVar97 >> 0x20);
        *(undefined1 (*) [16])(lVar31 + 0x80) = auVar7;
        lVar30 = lVar30 + 0xa0;
        lVar32 = lVar32 + -0xa0;
        dVar49 = local_170;
      } while (lVar32 != 0);
    }
  }
  local_170._4_4_ = (undefined4)((ulonglong)dVar49 >> 0x20);
  if (0 < (int)local_320[0xd]) {
    plVar43 = local_320 + 0xc;
    if ((char)*param_4 == '\x01') {
      local_178 = (undefined **)0x14af22d6c;
      local_170._0_4_ = 0x41;
      FUN_1446e940c(&local_1f8,&local_178);
      local_178 = (undefined **)0x14af21230;
      local_170._0_4_ = 0x29;
      FUN_1446e940c(&local_278,&local_178);
      FUN_140208bae(&local_178,&local_278,&local_1f8,
                    L"TransformSimpleCollisionShapes: Cannot transform Skinned Level Sets");
      FUN_143ba9449(param_6,2,&local_178);
      if (local_178 != (undefined **)0x0) {
        (**(code **)(*local_178 + 0x10))();
      }
      dVar49 = (double)CONCAT44(local_170._4_4_,local_170._0_4_);
    }
    local_170 = dVar49;
    FUN_14058b938(param_1 + 0xc,plVar43);
    *param_5 = 0;
    dVar49 = local_170;
  }
  if ((local_f0 ^ (ulonglong)auStack_348) != DAT_14c707940) {
    local_170 = dVar49;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148567615 FUN_148567615 body=1092 status=ok
// SIG undefined FUN_148567615(void)

void FUN_148567615(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined1 auStack_2d8 [40];
  undefined4 local_2b0;
  undefined8 *local_2a8;
  undefined8 local_298;
  undefined8 *local_290;
  undefined8 local_288;
  undefined8 **local_280;
  undefined1 local_278;
  undefined8 local_270;
  int local_268;
  undefined1 local_264;
  undefined4 local_260;
  double local_258;
  double local_250;
  undefined1 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined2 local_230;
  undefined4 local_22c;
  longlong local_228;
  undefined8 uStack_220;
  longlong local_218;
  undefined8 uStack_210;
  undefined8 *local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  ulonglong uStack_1f0;
  undefined8 local_1e0;
  undefined8 local_1d8;
  ulonglong uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [80];
  undefined1 local_148 [128];
  code *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  local_1b8 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b0 = DAT_14c846510;
  uStack_1a8 = DAT_14c846518;
  local_1a0 = DAT_14c846520;
  memset(local_198,0,0xc9);
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_1e0 = param_1;
  FUN_142984024(&local_1e0);
  uVar1 = uStack_1d0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_208 = (undefined8 *)0x0;
  uStack_200 = 0;
  if ((int)uStack_1d0 == 1) {
    uStack_200 = 1;
    FUN_148474b36(&local_208,0);
    *local_208 = param_1;
  }
  else {
    FUN_146bcf452(&local_1f8,uStack_1d0 & 0xffffffff,1);
    FUN_148567a5a(&local_208,uVar1 & 0xffffffff);
    local_c0 = &local_298;
    local_2a8 = &local_b8;
    local_b8 = 0;
    local_b0 = 0;
    local_c8 = FUN_143bb2f5e;
    local_2b0 = 0;
    local_298 = param_1;
    local_290 = &local_1e0;
    local_288 = &local_1f8;
    local_280 = &local_208;
    FUN_1401f8d10(L"ParallelFor Task",uVar1 & 0xffffffff,1);
  }
  local_298 = CONCAT44(local_298._4_4_,0x1010101);
  local_290 = (undefined8 *)0x0;
  local_288 = (longlong *)CONCAT71(local_288._1_7_,1);
  local_288 = (longlong *)CONCAT44(0x32,(undefined4)local_288);
  local_280 = (undefined8 **)0x3ff0000000000000;
  local_278 = 0;
  local_270 = 0x3ff0000000000000;
  local_268 = 1;
  local_264 = 1;
  local_260 = 0x3f000000;
  local_258 = 0.0;
  local_250 = 0.1;
  local_248 = 0;
  local_240 = 0x4008000000000000;
  local_238 = 0x4024000000000000;
  local_230 = 1;
  local_22c = 10;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  FUN_14838e08a(&local_298,&local_208);
  local_298 = CONCAT53(local_298._3_5_,*(undefined3 *)(param_3 + 2));
  local_290 = (undefined8 *)(double)*(float *)(param_3 + 8);
  switch(*(undefined1 *)(param_3 + 1)) {
  case 0:
    FUN_14838e3ce(&local_298,local_198);
    break;
  case 1:
    FUN_14838e48c(&local_298,local_198,0);
    break;
  case 2:
    FUN_14838e55e(&local_298,local_198);
    break;
  case 3:
    FUN_14838e61c(&local_298,local_198);
    break;
  case 4:
    local_288 = (longlong *)CONCAT71(local_288._1_7_,*(undefined1 *)(param_3 + 0xc));
    local_288 = (longlong *)CONCAT44(*(undefined4 *)(param_3 + 0x10),(undefined4)local_288);
    if (*(int *)(param_3 + 0x14) < 2) {
      FUN_14838e6da(&local_298,local_198,0);
    }
    else {
      local_260 = *(undefined4 *)(param_3 + 0x18);
      local_258 = (double)*(float *)(param_3 + 0x1c);
      local_250 = (double)*(float *)(param_3 + 0x20);
      local_268 = *(int *)(param_3 + 0x14);
      FUN_14838e7ac(&local_298,local_198,0);
    }
    break;
  case 5:
    local_288 = (longlong *)CONCAT71(local_288._1_7_,*(undefined1 *)(param_3 + 0xc));
    local_280 = (undefined8 **)(double)*(float *)(param_3 + 0x24);
    FUN_14838e87e(&local_298,local_198,*(undefined1 *)(param_3 + 0x28));
    break;
  case 6:
    FUN_14838ea22(&local_298,local_198);
    break;
  case 7:
    FUN_14838e950(&local_298,local_198,0);
  }
  if ((1 < (int)uStack_1d0 & *(byte *)(param_3 + 0x29)) == 1) {
    FUN_14838eae0(local_198);
  }
  if ((0 < *(int *)(param_3 + 0x2c)) && (*(int *)(param_3 + 0x2c) < (int)uStack_1d0)) {
    FUN_1483942cc(local_198);
  }
  FUN_148508386(&local_1c8);
  FUN_1401842de(param_2);
  FUN_14058b698(param_2,local_148);
  if (local_218 != 0) {
    FUN_1400020a8();
  }
  if (local_228 != 0) {
    FUN_1400020a8();
  }
  if (local_208 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1461a8f9d(local_1f8,uStack_1f0 & 0xffffffff);
  if (local_1f8 != 0) {
    FUN_1400020a8();
  }
  FUN_146be9400(&local_1d8);
  FUN_1400d7d10(local_148);
  FUN_14838fe66(local_198);
  if ((local_60 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148567a5a FUN_148567a5a body=118 status=ok
// SIG undefined FUN_148567a5a(void)

void FUN_148567a5a(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148474b36(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_148581c18(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148567ad2 FUN_148567ad2 body=91 status=ok
// SIG undefined FUN_148567ad2(void)

void FUN_148567ad2(longlong *param_1,undefined8 *param_2)

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
    FUN_147c64082(param_1,iVar2);
  }
  FUN_1478581e5((longlong)iVar2 * 0x70 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 148567b2e FUN_148567b2e body=91 status=ok
// SIG undefined FUN_148567b2e(void)

void FUN_148567b2e(longlong *param_1,undefined8 *param_2)

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
    FUN_148581cb4(param_1,iVar2);
  }
  FUN_1478583e7((longlong)iVar2 * 0x38 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 148567b8a FUN_148567b8a body=242 status=ok
// SIG undefined FUN_148567b8a(void)

void FUN_148567b8a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_1 != 0) goto LAB_148567c6d;
  plVar3 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14af3def0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_148567c6d;
    param_1[1] = 0;
LAB_148567bf4:
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
    if (plVar3 == (longlong *)0x0) goto LAB_148567c6d;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)(plVar3 + 2);
    plVar4 = (longlong *)param_1[1];
    if (plVar3 == plVar4) {
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
    else {
      param_1[1] = (longlong)plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_148567bf4;
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
LAB_148567c6d:
  FUN_146ba22a4(*param_1);
  return;
}



// FUNCTION 148567c7c FUN_148567c7c body=71 status=ok
// SIG undefined FUN_148567c7c(void)

void FUN_148567c7c(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146305590();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_145c0da42();
      return;
    }
  }
  return;
}



// FUNCTION 148567cc4 FUN_148567cc4 body=143 status=ok
// SIG undefined FUN_148567cc4(void)

void FUN_148567cc4(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar3 = (int)param_2[1];
  iVar4 = (int)param_1[1];
  FUN_14051b394(param_1,iVar4 + iVar3,1);
  FUN_1400bd09c(param_1 + 2,iVar4 + iVar3,1);
  if (0 < (longlong)iVar3) {
    lVar8 = (longlong)iVar4 * 0x18;
    lVar9 = 0;
    do {
      lVar5 = *param_2;
      lVar6 = *param_1;
      *(undefined8 *)(lVar6 + 0x10 + lVar8) = *(undefined8 *)(lVar5 + 0x10 + lVar9 * 4);
      puVar1 = (undefined8 *)(lVar5 + lVar9 * 4);
      uVar7 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      *(undefined8 *)(lVar9 + param_1[2] + (longlong)iVar4 * 8) =
           *(undefined8 *)(*param_2 + 0x18 + lVar9 * 4);
      lVar9 = lVar9 + 8;
      lVar8 = lVar8 + 0x18;
    } while ((longlong)iVar3 * 8 != lVar9);
  }
  return;
}



// FUNCTION 148567d62 FUN_148567d62 body=661 status=ok
// SIG undefined FUN_148567d62(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148567d62(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  longlong local_40 [4];
  
  local_40[3] = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_40[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40 + 2);
  }
  local_40[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40 + 1);
  }
  plVar3 = local_40 + 1;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_40[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  plVar2 = local_40;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_68 = 2;
  uStack_60 = 0x3fe0000000000000;
  local_58 = 0;
  uStack_50 = 0x3fb999999999999a;
  local_48 = 0;
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
  lVar1 = local_40[2];
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_68;
  uStack_94 = uStack_64;
  uStack_90 = (undefined4)uStack_60;
  uStack_8c = uStack_60._4_4_;
  local_88 = (undefined4)local_58;
  uStack_84 = local_58._4_4_;
  uStack_80 = (undefined4)uStack_50;
  uStack_7c = uStack_50._4_4_;
  local_78 = CONCAT44(uStack_44,local_48);
  local_a8 = local_70;
  FUN_148567ff8(local_40[2],*plVar3,plVar2);
  *param_3 = lVar1;
  if ((DAT_14c950c29 == '\x01') && (*plVar2 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_40[3] ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148567ff8 FUN_148567ff8 body=596 status=ok
// SIG undefined FUN_148567ff8(void)

longlong FUN_148567ff8(longlong param_1,longlong param_2,longlong *param_3,wchar_t *param_4,
                      undefined8 param_5)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  undefined1 auStack_298 [32];
  undefined1 local_278;
  undefined1 local_270 [4];
  undefined1 local_26c [4];
  wchar_t *local_268;
  wchar_t **local_260;
  wchar_t *local_258;
  undefined4 local_250;
  int local_e8;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_298;
  if (param_1 == 0) {
    local_258 = L"ComputeMeshConvexDecomposition_InvalidInput";
    local_250 = 0x2b;
    FUN_1446e940c(&local_268,&local_258);
    local_258 = L"UGeometryScriptLibrary_MeshContainmentFunctions";
    local_250 = 0x2f;
    FUN_1446e940c(local_26c,&local_258);
    pwVar2 = L"ComputeMeshConvexDecomposition: TargetMesh is Null";
  }
  else {
    if (param_2 != 0) {
      *param_3 = param_2;
      local_278 = 0;
      FUN_1411b354a(&local_258,0,0,0);
      local_268 = param_4;
      local_260 = &local_258;
      FUN_143bb3b2e(&local_268,*(undefined8 *)(param_1 + 0x98));
      if (local_e8 == 0) {
        local_268 = L"ComputeMeshConvexDecomposition_Failed";
        local_260._0_4_ = 0x25;
        FUN_1446e940c(local_26c,&local_268);
        local_268 = L"UGeometryScriptLibrary_MeshContainmentFunctions";
        local_260 = (wchar_t **)CONCAT44(local_260._4_4_,0x2f);
        FUN_1446e940c(local_270,&local_268);
        FUN_140208bae(&local_268,local_270,local_26c,
                      L"ComputeMeshConvexDecomposition: Hull Computation Failed");
        FUN_143ba90d7(param_5,3,&local_268);
        if (local_268 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_268 + 0x10))();
        }
        FUN_1484b82b0(param_2);
      }
      else {
        if (*(int *)(local_50 + 0x38) < 1) {
          uVar1 = 0;
        }
        else {
          uVar1 = **(undefined8 **)(local_50 + 0x30);
        }
        FUN_146c39b56(uVar1);
        FUN_1484b1fb6(param_2,&local_258);
      }
      FUN_141082778(&local_258);
      goto LAB_148568135;
    }
    local_258 = L"ComputeMeshConvexDecomposition_InvalidInput2";
    local_250 = 0x2c;
    FUN_1446e940c(&local_268,&local_258);
    local_258 = L"UGeometryScriptLibrary_MeshContainmentFunctions";
    local_250 = 0x2f;
    FUN_1446e940c(local_26c,&local_258);
    pwVar2 = L"ComputeMeshConvexDecomposition: CopyToMesh is Null";
  }
  FUN_140208bae(&local_258,local_26c,&local_268,pwVar2);
  FUN_143ba90d7(param_5,2,&local_258);
  if (local_258 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_258 + 0x10))();
  }
LAB_148568135:
  if ((local_38 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856824e FUN_14856824e body=742 status=ok
// SIG undefined FUN_14856824e(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14856824e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  longlong *local_48;
  longlong local_40 [4];
  
  local_40[3] = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_40[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40 + 2);
  }
  local_40[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40 + 1);
  }
  plVar4 = local_40 + 1;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_40[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  plVar3 = local_40;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  FUN_148568536(&local_50);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_5c = CONCAT31(local_5c._1_3_,1);
  uStack_58 = 0x80;
  uStack_54 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  lVar2 = local_40[2];
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = CONCAT44(uStack_58,local_5c);
  local_70 = uStack_54;
  local_88 = local_50;
  local_80 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  local_90 = local_68;
  local_98 = &local_78;
  FUN_14856863a(local_40[2],*plVar4,plVar3,&local_88);
  *param_3 = lVar2;
  if ((DAT_14c950c29 == '\x01') && (*plVar3 != 0)) {
    FUN_1456cec3c();
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if ((local_40[3] ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148568536 FUN_148568536 body=259 status=ok
// SIG undefined FUN_148568536(void)

longlong * FUN_148568536(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar5 = (longlong *)FUN_14001cc68(0x68,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14af3ded0;
  plVar5[7] = 0;
  plVar5[8] = 0;
  plVar5[9] = 0;
  plVar5[10] = 0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[0xb] = 0;
  plVar5[0xc] = 0;
  plVar5[2] = (longlong)&DAT_100000004;
  plVar5[3] = 0;
  plVar5[4] = 0;
  *(undefined4 *)((longlong)plVar5 + 0x44) = 0x80;
  *(undefined4 *)(plVar5 + 9) = 0xffffffff;
  if (plVar5 == (longlong *)0x0) {
    *param_1 = 0x10;
    goto LAB_1485685e2;
  }
  LOCK();
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_1[1];
  *param_1 = (longlong)(plVar5 + 2);
  if (plVar5 == plVar4) {
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar5;
joined_r0x00014856860f:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_1[1] = (longlong)plVar5;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x00014856860f;
      }
    }
  }
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
LAB_1485685e2:
  *(undefined1 **)*param_1 = &DAT_100000004;
  return param_1;
}



// FUNCTION 14856863a FUN_14856863a body=617 status=ok
// SIG undefined FUN_14856863a(void)

longlong FUN_14856863a(longlong param_1,longlong param_2,longlong *param_3,wchar_t *param_4,
                      undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  undefined1 auStack_2b8 [32];
  undefined1 local_298;
  undefined1 local_284 [4];
  wchar_t *local_280;
  undefined8 local_278;
  wchar_t **local_270;
  undefined1 local_264 [4];
  wchar_t *local_260;
  undefined4 local_258;
  int local_f0;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  if (param_1 == 0) {
    local_260 = L"ComputeMeshConvexHull_InvalidInput";
    local_258 = 0x22;
    FUN_1446e940c(&local_280,&local_260);
    local_260 = L"UGeometryScriptLibrary_MeshContainmentFunctions";
    local_258 = 0x2f;
    FUN_1446e940c(local_264,&local_260);
    pwVar4 = L"ComputeMeshConvexHull: TargetMesh is Null";
  }
  else {
    if (param_2 != 0) {
      *param_3 = param_2;
      local_298 = 0;
      FUN_1411b354a(&local_260,0,0,0);
      local_278 = param_5;
      local_280 = param_4;
      local_270 = &local_260;
      FUN_143bb38b6(&local_280,*(undefined8 *)(param_1 + 0x98));
      if (local_f0 == 0) {
        local_280 = L"ComputeMeshConvexHull_Failed";
        local_278._0_4_ = 0x1c;
        FUN_1446e940c(local_264,&local_280);
        local_280 = L"UGeometryScriptLibrary_MeshContainmentFunctions";
        local_278 = CONCAT44(local_278._4_4_,0x2f);
        FUN_1446e940c(local_284,&local_280);
        FUN_140208bae(&local_280,local_284,local_264,
                      L"ComputeMeshConvexHull: Hull Computation Failed");
        FUN_143ba90d7(param_6,3,&local_280);
        if (local_280 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_280 + 0x10))();
        }
        FUN_1484b82b0(param_2);
      }
      else {
        FUN_1484b1fb6(param_2,&local_260);
      }
      FUN_141082778(&local_260);
      goto LAB_148568769;
    }
    local_260 = L"ComputeMeshConvexHull_InvalidInput2";
    local_258 = 0x23;
    FUN_1446e940c(&local_280,&local_260);
    local_260 = L"UGeometryScriptLibrary_MeshContainmentFunctions";
    local_258 = 0x2f;
    FUN_1446e940c(local_264,&local_260);
    pwVar4 = L"ComputeMeshConvexHull: CopyToMesh is Null";
  }
  FUN_140208bae(&local_260,local_264,&local_280,pwVar4);
  FUN_143ba90d7(param_6,2,&local_260);
  if (local_260 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_260 + 0x10))();
  }
LAB_148568769:
  plVar3 = *(longlong **)(param_4 + 4);
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
  if ((local_40 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485688a4 FUN_1485688a4 body=846 status=ok
// SIG undefined FUN_1485688a4(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1485688a4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_178 [32];
  undefined4 *local_158;
  undefined8 local_150;
  undefined8 local_148 [12];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 uStack_bc;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48 [4];
  
  local_48[3] = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_48[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 1);
  }
  plVar6 = local_48 + 1;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
  }
  local_48[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar5 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0x3ff00000;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  local_c0 = CONCAT31(local_c0._1_3_,1);
  uStack_bc = 0x3c23d70a00000080;
  uStack_b4 = CONCAT31(uStack_b4._1_3_,1);
  local_b0 = 0x3dcccccd3dcccccd;
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
  local_150 = local_c8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_158 = &local_e8;
  local_e8 = local_c0;
  uStack_e4 = (undefined4)uStack_bc;
  uStack_e0 = uStack_bc._4_4_;
  uStack_dc = uStack_b4;
  local_d8 = local_b0;
  puVar3 = local_a8;
  puVar4 = local_148;
  for (lVar2 = 0xc; lVar1 = local_48[2], lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_148568bf4(local_48[2],*plVar6,plVar5);
  *param_3 = lVar1;
  if ((DAT_14c950c29 == '\x01') && (*plVar5 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_48[3] ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148568bf4 FUN_148568bf4 body=567 status=ok
// SIG undefined FUN_148568bf4(void)

longlong FUN_148568bf4(longlong param_1,longlong param_2,longlong *param_3,wchar_t *param_4,
                      undefined8 param_5,undefined8 param_6)

{
  wchar_t *pwVar1;
  undefined1 auStack_2a8 [32];
  undefined1 local_288;
  undefined1 local_27c [4];
  wchar_t *local_278;
  undefined8 local_270;
  wchar_t **local_268;
  undefined1 local_25c [4];
  wchar_t *local_258;
  undefined4 local_250;
  int local_e8;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  if (param_1 == 0) {
    local_258 = L"ComputeMeshSweptHull_InvalidInput";
    local_250 = 0x21;
    FUN_1446e940c(&local_278,&local_258);
    local_258 = L"UGeometryScriptLibrary_MeshContainmentFunctions";
    local_250 = 0x2f;
    FUN_1446e940c(local_25c,&local_258);
    pwVar1 = L"ComputeMeshSweptHull: TargetMesh is Null";
  }
  else {
    if (param_2 != 0) {
      *param_3 = param_2;
      local_288 = 0;
      FUN_1411b354a(&local_258,0,0,0);
      local_270 = param_5;
      local_278 = param_4;
      local_268 = &local_258;
      FUN_143bb3a3e(&local_278,*(undefined8 *)(param_1 + 0x98));
      if (local_e8 == 0) {
        local_278 = L"ComputeMeshSweptHull_Failed";
        local_270._0_4_ = 0x1b;
        FUN_1446e940c(local_25c,&local_278);
        local_278 = L"UGeometryScriptLibrary_MeshContainmentFunctions";
        local_270 = CONCAT44(local_270._4_4_,0x2f);
        FUN_1446e940c(local_27c,&local_278);
        FUN_140208bae(&local_278,local_27c,local_25c,
                      L"ComputeMeshSweptHull: Hull Computation Failed");
        FUN_143ba90d7(param_6,3,&local_278);
        if (local_278 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_278 + 0x10))();
        }
        FUN_1484b82b0(param_2);
      }
      else {
        FUN_1484b1fb6(param_2,&local_258);
      }
      FUN_141082778(&local_258);
      goto LAB_148568d1b;
    }
    local_258 = L"ComputeMeshSweptHulll_InvalidInput2";
    local_250 = 0x23;
    FUN_1446e940c(&local_278,&local_258);
    local_258 = L"UGeometryScriptLibrary_MeshContainmentFunctions";
    local_250 = 0x2f;
    FUN_1446e940c(local_25c,&local_258);
    pwVar1 = L"ComputeMeshSweptHull: CopyToMesh is Null";
  }
  FUN_140208bae(&local_258,local_25c,&local_278,pwVar1);
  FUN_143ba90d7(param_6,2,&local_258);
  if (local_258 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_258 + 0x10))();
  }
LAB_148568d1b:
  if ((local_38 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148568e32 FUN_148568e32 body=22 status=ok
// SIG undefined FUN_148568e32(void)

void FUN_148568e32(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = *param_2;
  FUN_1484d24e8(puVar1 + 1,param_2 + 1);
  return;
}



// FUNCTION 148568e48 FUN_148568e48 body=91 status=ok
// SIG undefined FUN_148568e48(void)

void FUN_148568e48(longlong param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  longlong *plVar3;
  
  iVar2 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar2 + 1U) {
    FUN_148581b5e((longlong *)(param_1 + 0x28),iVar2);
  }
  puVar1 = (undefined2 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar2 * 0x18);
  *puVar1 = *param_2;
  plVar3 = *(longlong **)(param_2 + 4);
  *(longlong **)(puVar1 + 4) = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(param_2 + 8);
  return;
}



// FUNCTION 148568ea4 FUN_148568ea4 body=248 status=ok
// SIG undefined FUN_148568ea4(void)

void FUN_148568ea4(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_1 != 0) goto LAB_148568f89;
  plVar3 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14af3df10;
  plVar3[2] = 0;
  plVar3[3] = 0;
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_148568f89;
    param_1[1] = 0;
LAB_148568f0e:
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
    if (plVar3 == (longlong *)0x0) goto LAB_148568f89;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)(plVar3 + 2);
    plVar4 = (longlong *)param_1[1];
    if (plVar3 == plVar4) {
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
    else {
      param_1[1] = (longlong)plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_148568f0e;
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
LAB_148568f89:
  FUN_1482685ca(*param_1,param_2);
  return;
}



// FUNCTION 148568f9c FUN_148568f9c body=276 status=ok
// SIG undefined FUN_148568f9c(void)

void FUN_148568f9c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38;
  uStack_44 = uStack_34;
  uStack_40 = uStack_30;
  uStack_3c = uStack_2c;
  FUN_1485690b2(puVar4);
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485690b2 FUN_1485690b2 body=111 status=ok
// SIG undefined FUN_1485690b2(void)

void FUN_1485690b2(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  
  lVar3 = *param_1;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (lVar3 != 0) {
    uVar5 = *(undefined4 *)(lVar3 + 8);
  }
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
  FUN_14856e04a(param_1,0);
  FUN_144750f1c(*param_1,param_2,uVar5);
  return;
}



// FUNCTION 148569122 FUN_148569122 body=280 status=ok
// SIG undefined FUN_148569122(void)

void FUN_148569122(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined1 local_30 [8];
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30[0] = 0;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  puVar4 = local_30;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14856923c(puVar4,local_34);
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856923c FUN_14856923c body=150 status=ok
// SIG undefined FUN_14856923c(void)

void FUN_14856923c(undefined1 *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(param_1 + 8);
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (lVar3 != 0) {
    uVar5 = *(undefined4 *)(lVar3 + 8);
  }
  local_24 = param_2;
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
  FUN_14856da48(param_1,*param_1,0);
  FUN_1448156a8(*(undefined8 *)(param_1 + 8),&local_24,uVar5);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485692d4 FUN_1485692d4 body=278 status=ok
// SIG undefined FUN_1485692d4(void)

void FUN_1485692d4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
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
  local_30 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485693ec(puVar4,local_30);
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485693ec FUN_1485693ec body=147 status=ok
// SIG undefined FUN_1485693ec(void)

void FUN_1485693ec(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *param_1;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (lVar3 != 0) {
    uVar5 = *(undefined4 *)(lVar3 + 8);
  }
  local_28 = param_2;
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
  FUN_14856dcec(param_1,0);
  FUN_146bfae00(*param_1,&local_28,uVar5);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148569480 FUN_148569480 body=276 status=ok
// SIG undefined FUN_148569480(void)

void FUN_148569480(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38;
  uStack_44 = uStack_34;
  uStack_40 = uStack_30;
  uStack_3c = uStack_2c;
  FUN_148569596(puVar4);
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148569596 FUN_148569596 body=111 status=ok
// SIG undefined FUN_148569596(void)

void FUN_148569596(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  
  lVar3 = *param_1;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (lVar3 != 0) {
    uVar5 = *(undefined4 *)(lVar3 + 8);
  }
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
  FUN_14856deea(param_1,0);
  FUN_147031ed6(*param_1,param_2,uVar5);
  return;
}



// FUNCTION 148569606 FUN_148569606 body=285 status=ok
// SIG undefined FUN_148569606(void)

void FUN_148569606(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_30;
  local_58 = local_40;
  uStack_54 = uStack_3c;
  uStack_50 = uStack_38;
  uStack_4c = uStack_34;
  FUN_148569724(puVar4);
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148569724 FUN_148569724 body=111 status=ok
// SIG undefined FUN_148569724(void)

void FUN_148569724(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  
  lVar3 = *param_1;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (lVar3 != 0) {
    uVar5 = *(undefined4 *)(lVar3 + 8);
  }
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
  FUN_14856dde4(param_1,0);
  FUN_1447a8a24(*param_1,param_2,uVar5);
  return;
}



// FUNCTION 148569794 FUN_148569794 body=322 status=ok
// SIG undefined FUN_148569794(void)

void FUN_148569794(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar4 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar3 = &local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14856e04a(puVar3,0);
  FUN_14856dfe2(*puVar3,plVar4);
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
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485698d8 FUN_1485698d8 body=386 status=ok
// SIG undefined FUN_1485698d8(void)

void FUN_1485698d8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  undefined1 auStack_78 [39];
  undefined1 local_51;
  undefined1 local_50 [8];
  undefined8 local_48;
  longlong *plStack_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar4 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_50[0] = 0;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar3 = local_50;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  local_51 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_51);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_51);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148569a5c(plVar4,puVar3,local_51);
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
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148569a5c FUN_148569a5c body=118 status=ok
// SIG undefined FUN_148569a5c(void)

void FUN_148569a5c(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_14856da48(param_2,param_3,0);
  uVar1 = *(uint *)(param_1 + 1);
  if ((longlong)(int)uVar1 != 0) {
    plVar3 = *(longlong **)(param_2 + 8);
    iVar2 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)plVar3 + 0xc) - iVar2) < uVar1) {
      FUN_1446f48e2(plVar3,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 4 + *plVar3),(void *)*param_1,(longlong)(int)uVar1 << 2);
    return;
  }
  return;
}



// FUNCTION 148569ad2 FUN_148569ad2 body=305 status=ok
// SIG undefined FUN_148569ad2(void)

void FUN_148569ad2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar4 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar3 = &local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148569c04(plVar4,puVar3);
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
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148569c04 FUN_148569c04 body=113 status=ok
// SIG undefined FUN_148569c04(void)

void FUN_148569c04(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  
  FUN_14856dcec(param_2,0);
  uVar1 = *(uint *)(param_1 + 1);
  if ((longlong)(int)uVar1 != 0) {
    param_2 = (longlong *)*param_2;
    iVar2 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar2) < uVar1) {
      FUN_144941252(param_2,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 8 + *param_2),(void *)*param_1,(longlong)(int)uVar1 << 3);
    return;
  }
  return;
}



// FUNCTION 148569c76 FUN_148569c76 body=322 status=ok
// SIG undefined FUN_148569c76(void)

void FUN_148569c76(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar4 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar3 = &local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14856dbf4(puVar3,0);
  FUN_14856db8c(*puVar3,plVar4);
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
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148569dba FUN_148569dba body=322 status=ok
// SIG undefined FUN_148569dba(void)

void FUN_148569dba(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar4 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar3 = &local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14856deea(puVar3,0);
  FUN_14702e4fe(*puVar3,plVar4);
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
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148569efe FUN_148569efe body=322 status=ok
// SIG undefined FUN_148569efe(void)

void FUN_148569efe(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar4 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar3 = &local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14856dde4(puVar3,0);
  FUN_14070416c(*puVar3,plVar4);
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
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856a042 FUN_14856a042 body=315 status=ok
// SIG undefined FUN_14856a042(void)

void FUN_14856a042(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong local_38 [3];
  longlong *plStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[2] = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar3 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38[2];
  local_40 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_14856a17e(&local_48,plVar3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856a17e FUN_14856a17e body=106 status=ok
// SIG undefined FUN_14856a17e(void)

void FUN_14856a17e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_144750f90(param_2,0);
  }
  if (*param_1 != 0) {
    FUN_14856dfe2(param_2);
  }
  plVar3 = (longlong *)param_1[1];
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
                    /* WARNING: Could not recover jumptable at 0x00014856a1d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14856a1e8 FUN_14856a1e8 body=328 status=ok
// SIG undefined FUN_14856a1e8(void)

void FUN_14856a1e8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined8 local_48;
  longlong *local_40;
  longlong local_38 [2];
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28[0] = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar3 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50[0] = local_28[0];
  local_48 = local_20;
  local_40 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_18 + 1) = (int)plStack_18[1] + 1;
    UNLOCK();
  }
  FUN_14856a332(local_50,plVar3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_18)(plStack_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856a332 FUN_14856a332 body=178 status=ok
// SIG undefined FUN_14856a332(void)

void FUN_14856a332(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_14481578e(param_2,0);
  }
  puVar5 = *(undefined8 **)(param_1 + 8);
  if (puVar5 != (undefined8 *)0x0) {
    uVar3 = *(uint *)(puVar5 + 1);
    if ((longlong)(int)uVar3 != 0) {
      iVar4 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar4 + uVar3;
      if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar4) < uVar3) {
        FUN_1446f48e2(param_2,iVar4);
      }
      memcpy((void *)((longlong)iVar4 * 4 + *param_2),(void *)*puVar5,(longlong)(int)uVar3 << 2);
    }
  }
  plVar6 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x00014856a3d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14856a3e4 FUN_14856a3e4 body=315 status=ok
// SIG undefined FUN_14856a3e4(void)

void FUN_14856a3e4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong local_38 [3];
  longlong *plStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[2] = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar3 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38[2];
  local_40 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_14856a520(&local_48,plVar3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856a520 FUN_14856a520 body=177 status=ok
// SIG undefined FUN_14856a520(void)

void FUN_14856a520(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_140cb0586(param_2,0);
  }
  puVar5 = (undefined8 *)*param_1;
  if (puVar5 != (undefined8 *)0x0) {
    uVar3 = *(uint *)(puVar5 + 1);
    if ((longlong)(int)uVar3 != 0) {
      iVar4 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar4 + uVar3;
      if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar4) < uVar3) {
        FUN_144941252(param_2,iVar4);
      }
      memcpy((void *)((longlong)iVar4 * 8 + *param_2),(void *)*puVar5,(longlong)(int)uVar3 << 3);
    }
  }
  plVar6 = (longlong *)param_1[1];
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
                    /* WARNING: Could not recover jumptable at 0x00014856a5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14856a5d2 FUN_14856a5d2 body=315 status=ok
// SIG undefined FUN_14856a5d2(void)

void FUN_14856a5d2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong local_38 [3];
  longlong *plStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[2] = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar3 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38[2];
  local_40 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_14856a70e(&local_48,plVar3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856a70e FUN_14856a70e body=108 status=ok
// SIG undefined FUN_14856a70e(void)

void FUN_14856a70e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_146ea3024(param_2,0);
  }
  if (*param_1 != 0) {
    FUN_14856db8c(param_2);
  }
  plVar3 = (longlong *)param_1[1];
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
                    /* WARNING: Could not recover jumptable at 0x00014856a758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14856a77a FUN_14856a77a body=315 status=ok
// SIG undefined FUN_14856a77a(void)

void FUN_14856a77a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong local_38 [3];
  longlong *plStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[2] = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar3 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38[2];
  local_40 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_14856a8b6(&local_48,plVar3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856a8b6 FUN_14856a8b6 body=106 status=ok
// SIG undefined FUN_14856a8b6(void)

void FUN_14856a8b6(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_1408652ee(param_2,0);
  }
  if (*param_1 != 0) {
    FUN_14702e4fe(param_2);
  }
  plVar3 = (longlong *)param_1[1];
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
                    /* WARNING: Could not recover jumptable at 0x00014856a90a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14856a920 FUN_14856a920 body=315 status=ok
// SIG undefined FUN_14856a920(void)

void FUN_14856a920(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong local_38 [3];
  longlong *plStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[2] = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar3 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38[2];
  local_40 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_14856aa5c(&local_48,plVar3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856aa5c FUN_14856aa5c body=104 status=ok
// SIG undefined FUN_14856aa5c(void)

void FUN_14856aa5c(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_1447a8aa0(param_2,0);
  }
  if (*param_1 != 0) {
    FUN_14070416c(param_2);
  }
  plVar3 = (longlong *)param_1[1];
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
                    /* WARNING: Could not recover jumptable at 0x00014856aab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14856aac4 FUN_14856aac4 body=339 status=ok
// SIG undefined FUN_14856aac4(void)

void FUN_14856aac4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_28;
  local_40 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_14856ac18(&local_48,puVar4);
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
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856ac18 FUN_14856ac18 body=86 status=ok
// SIG undefined FUN_14856ac18(void)

void FUN_14856ac18(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14856e04a(param_2,0);
  FUN_14479f9aa(*param_2,*param_1);
  plVar3 = (longlong *)param_1[1];
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
                    /* WARNING: Could not recover jumptable at 0x00014856ac62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14856ac6e FUN_14856ac6e body=357 status=ok
// SIG undefined FUN_14856ac6e(void)

void FUN_14856ac6e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  longlong *local_48;
  undefined1 local_40 [8];
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28[0] = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_40[0] = 0;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar4 = local_40;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58[0] = local_28[0];
  local_50 = local_20;
  local_48 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_18 + 1) = (int)plStack_18[1] + 1;
    UNLOCK();
  }
  FUN_14856add4(local_58,puVar4);
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
  plVar3 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_18)(plStack_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856add4 FUN_14856add4 body=91 status=ok
// SIG undefined FUN_14856add4(void)

void FUN_14856add4(undefined1 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14856da48(param_2,*param_1,0);
  FUN_14054c6c4(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_1 + 8));
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
                    /* WARNING: Could not recover jumptable at 0x00014856ae23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14856ae30 FUN_14856ae30 body=339 status=ok
// SIG undefined FUN_14856ae30(void)

void FUN_14856ae30(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_28;
  local_40 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_14856af84(&local_48,puVar4);
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
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856af84 FUN_14856af84 body=86 status=ok
// SIG undefined FUN_14856af84(void)

void FUN_14856af84(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14856dcec(param_2,0);
  FUN_1408fdf38(*param_2,*param_1);
  plVar3 = (longlong *)param_1[1];
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
                    /* WARNING: Could not recover jumptable at 0x00014856afce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14856afda FUN_14856afda body=339 status=ok
// SIG undefined FUN_14856afda(void)

void FUN_14856afda(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_28;
  local_40 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_14856b12e(&local_48,puVar4);
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
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856b12e FUN_14856b12e body=86 status=ok
// SIG undefined FUN_14856b12e(void)

void FUN_14856b12e(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14856deea(param_2,0);
  FUN_144721cf4(*param_2,*param_1);
  plVar3 = (longlong *)param_1[1];
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
                    /* WARNING: Could not recover jumptable at 0x00014856b178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14856b184 FUN_14856b184 body=339 status=ok
// SIG undefined FUN_14856b184(void)

void FUN_14856b184(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_28;
  local_40 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_14856b2d8(&local_48,puVar4);
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
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856b2d8 FUN_14856b2d8 body=86 status=ok
// SIG undefined FUN_14856b2d8(void)

void FUN_14856b2d8(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14856dde4(param_2,0);
  FUN_1405b70a4(*param_2,*param_1);
  plVar3 = (longlong *)param_1[1];
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
                    /* WARNING: Could not recover jumptable at 0x00014856b322. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14856b32e FUN_14856b32e body=440 status=ok
// SIG undefined FUN_14856b32e(void)

void FUN_14856b32e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_28;
  local_48 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_143baefd2(&local_50,puVar4,local_3c);
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
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856b4e8 FUN_14856b4e8 body=607 status=ok
// SIG undefined FUN_14856b4e8(void)

void FUN_14856b4e8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_58;
  longlong *local_50;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_28;
  local_50 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  local_68 = local_44;
  FUN_143baf0f6(&local_58,puVar4,local_3c,local_40);
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
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856b74e FUN_14856b74e body=394 status=ok
// SIG undefined FUN_14856b74e(void)

void FUN_14856b74e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_2d = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2d);
  }
  puVar4 = &local_2d;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_28;
  local_48 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_14856b8da(&local_40,&local_50,local_2c,puVar4);
  plVar3 = plStack_20;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856b8da FUN_14856b8da body=121 status=ok
// SIG undefined FUN_14856b8da(void)

undefined4 * FUN_14856b8da(undefined4 *param_1,longlong *param_2,uint param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  *param_4 = 0;
  if (((int)param_3 < 0 || *param_2 == 0) || (*(int *)(*param_2 + 8) <= (int)param_3)) {
    uVar5 = 0x3f800000;
    uVar6 = 0x3f800000;
    uVar7 = 0x3f800000;
    uVar8 = 0x3f800000;
  }
  else {
    *param_4 = 1;
    puVar3 = (undefined4 *)(*(longlong *)*param_2 + (ulonglong)param_3 * 0x10);
    uVar5 = *puVar3;
    uVar6 = puVar3[1];
    uVar7 = puVar3[2];
    uVar8 = puVar3[3];
  }
  *param_1 = uVar5;
  param_1[1] = uVar6;
  param_1[2] = uVar7;
  param_1[3] = uVar8;
  plVar4 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 14856b954 FUN_14856b954 body=269 status=ok
// SIG undefined FUN_14856b954(void)

void FUN_14856b954(undefined8 param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar3 = plStack_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  if (local_38 == 0) {
    iVar4 = -1;
  }
  else {
    iVar4 = *(int *)(local_38 + 8) + -1;
  }
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
  plVar3 = plStack_30;
  *param_3 = iVar4;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856ba62 FUN_14856ba62 body=264 status=ok
// SIG undefined FUN_14856ba62(void)

void FUN_14856ba62(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar3 = plStack_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  if (local_38 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(local_38 + 8);
  }
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
  plVar3 = plStack_30;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856bb72 FUN_14856bb72 body=394 status=ok
// SIG undefined FUN_14856bb72(void)

void FUN_14856bb72(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined8 local_48;
  longlong *local_40;
  undefined1 local_35;
  undefined4 local_34;
  undefined1 local_30 [8];
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30[0] = 0;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
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
  local_35 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_35);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_35);
  }
  puVar5 = &local_35;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50[0] = local_30[0];
  local_48 = local_28;
  local_40 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_14856bcfe(local_50,local_34,puVar5);
  plVar3 = plStack_20;
  *param_3 = uVar4;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856bcfe FUN_14856bcfe body=105 status=ok
// SIG undefined FUN_14856bcfe(void)

undefined4 FUN_14856bcfe(longlong param_1,uint param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  *param_3 = 0;
  uVar4 = 0xffffffff;
  if ((-1 < (int)param_2 && *(longlong *)(param_1 + 8) != 0) &&
     ((int)param_2 < *(int *)(*(longlong *)(param_1 + 8) + 8))) {
    *param_3 = 1;
    uVar4 = *(undefined4 *)(**(longlong **)(param_1 + 8) + (ulonglong)param_2 * 4);
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return uVar4;
}



// FUNCTION 14856bd68 FUN_14856bd68 body=274 status=ok
// SIG undefined FUN_14856bd68(void)

void FUN_14856bd68(undefined8 param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  longlong local_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar3 = plStack_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_28 + 1) = (int)plStack_28[1] + 1;
    UNLOCK();
  }
  if (local_30 == 0) {
    iVar4 = -1;
  }
  else {
    iVar4 = *(int *)(local_30 + 8) + -1;
  }
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_28)(plStack_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_28;
  *param_3 = iVar4;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_28)(plStack_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856be7c FUN_14856be7c body=269 status=ok
// SIG undefined FUN_14856be7c(void)

void FUN_14856be7c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  longlong local_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar3 = plStack_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_28 + 1) = (int)plStack_28[1] + 1;
    UNLOCK();
  }
  if (local_30 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(local_30 + 8);
  }
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_28)(plStack_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_28;
  *param_3 = uVar4;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_28)(plStack_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856bf90 FUN_14856bf90 body=383 status=ok
// SIG undefined FUN_14856bf90(void)

void FUN_14856bf90(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_2d = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2d);
  }
  puVar5 = &local_2d;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_28;
  local_38 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  uVar3 = FUN_14856c110(&local_40,local_2c,puVar5);
  plVar4 = plStack_20;
  *param_3 = uVar3;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856c110 FUN_14856c110 body=112 status=ok
// SIG undefined FUN_14856c110(void)

undefined8 FUN_14856c110(longlong *param_1,uint param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_3 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if ((-1 < (int)param_2 && *param_1 != 0) && ((int)param_2 < *(int *)(*param_1 + 8))) {
    *param_3 = 1;
    uVar3 = *(undefined8 *)(*(longlong *)*param_1 + (ulonglong)param_2 * 8);
    uVar5 = (undefined4)uVar3;
    uVar6 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  plVar4 = (longlong *)param_1[1];
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
  return CONCAT44(uVar6,uVar5);
}



// FUNCTION 14856c180 FUN_14856c180 body=269 status=ok
// SIG undefined FUN_14856c180(void)

void FUN_14856c180(undefined8 param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar3 = plStack_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  if (local_38 == 0) {
    iVar4 = -1;
  }
  else {
    iVar4 = *(int *)(local_38 + 8) + -1;
  }
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
  plVar3 = plStack_30;
  *param_3 = iVar4;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856c28e FUN_14856c28e body=264 status=ok
// SIG undefined FUN_14856c28e(void)

void FUN_14856c28e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar3 = plStack_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  if (local_38 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(local_38 + 8);
  }
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
  plVar3 = plStack_30;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856c39e FUN_14856c39e body=400 status=ok
// SIG undefined FUN_14856c39e(void)

void FUN_14856c39e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_3c;
  undefined4 local_34;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_2d = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2d);
  }
  puVar4 = &local_2d;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_28;
  local_48 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_14856c530(&local_3c,&local_50,local_2c,puVar4);
  plVar3 = plStack_20;
  *(undefined4 *)(param_3 + 1) = local_34;
  *param_3 = local_3c;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856c530 FUN_14856c530 body=139 status=ok
// SIG undefined FUN_14856c530(void)

undefined8 * FUN_14856c530(undefined8 *param_1,longlong *param_2,uint param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  *param_4 = 0;
  if (((int)param_3 < 0 || *param_2 == 0) || (*(int *)(*param_2 + 8) <= (int)param_3)) {
    *(undefined4 *)(param_1 + 1) = DAT_14cb4e158;
    uVar5 = DAT_14cb4e150;
  }
  else {
    *param_4 = 1;
    lVar3 = *(longlong *)*param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar3 + 8 + (ulonglong)param_3 * 0xc);
    uVar5 = *(undefined8 *)(lVar3 + (ulonglong)param_3 * 0xc);
  }
  *param_1 = uVar5;
  plVar4 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 14856c5bc FUN_14856c5bc body=277 status=ok
// SIG undefined FUN_14856c5bc(void)

void FUN_14856c5bc(undefined8 param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar3 = plStack_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  if (local_38 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 1;
    if (1 < *(int *)(local_38 + 8)) {
      iVar4 = *(int *)(local_38 + 8);
    }
    iVar4 = iVar4 + -1;
  }
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
  plVar3 = plStack_30;
  *param_3 = iVar4;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856c6d2 FUN_14856c6d2 body=264 status=ok
// SIG undefined FUN_14856c6d2(void)

void FUN_14856c6d2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar3 = plStack_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  if (local_38 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(local_38 + 8);
  }
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
  plVar3 = plStack_30;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856c7e2 FUN_14856c7e2 body=394 status=ok
// SIG undefined FUN_14856c7e2(void)

void FUN_14856c7e2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_2d = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2d);
  }
  puVar4 = &local_2d;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_28;
  local_48 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_14856c96e(&local_40,&local_50,local_2c,puVar4);
  plVar3 = plStack_20;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856c96e FUN_14856c96e body=121 status=ok
// SIG undefined FUN_14856c96e(void)

undefined4 * FUN_14856c96e(undefined4 *param_1,longlong *param_2,uint param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  *param_4 = 0;
  uVar5 = (undefined4)DAT_14c8463f0;
  uVar6 = DAT_14c8463f0._4_4_;
  uVar7 = (undefined4)DAT_14c8463f8;
  uVar8 = DAT_14c8463f8._4_4_;
  if ((-1 < (int)param_3 && *param_2 != 0) && ((int)param_3 < *(int *)(*param_2 + 8))) {
    *param_4 = 1;
    puVar3 = (undefined4 *)(*(longlong *)*param_2 + (ulonglong)param_3 * 0x10);
    uVar5 = *puVar3;
    uVar6 = puVar3[1];
    uVar7 = puVar3[2];
    uVar8 = puVar3[3];
  }
  *param_1 = uVar5;
  param_1[1] = uVar6;
  param_1[2] = uVar7;
  param_1[3] = uVar8;
  plVar4 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 14856c9e8 FUN_14856c9e8 body=269 status=ok
// SIG undefined FUN_14856c9e8(void)

void FUN_14856c9e8(undefined8 param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar3 = plStack_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  if (local_38 == 0) {
    iVar4 = -1;
  }
  else {
    iVar4 = *(int *)(local_38 + 8) + -1;
  }
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
  plVar3 = plStack_30;
  *param_3 = iVar4;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856caf6 FUN_14856caf6 body=264 status=ok
// SIG undefined FUN_14856caf6(void)

void FUN_14856caf6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar3 = plStack_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  if (local_38 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(local_38 + 8);
  }
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
  plVar3 = plStack_30;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856cc06 FUN_14856cc06 body=402 status=ok
// SIG undefined FUN_14856cc06(void)

void FUN_14856cc06(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_2d = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2d);
  }
  puVar4 = &local_2d;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_28;
  local_50 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_14856cd9a(&local_48,&local_58,local_2c,puVar4);
  plVar3 = plStack_20;
  *(undefined8 *)(param_3 + 4) = local_38;
  *param_3 = local_48;
  param_3[1] = uStack_44;
  param_3[2] = uStack_40;
  param_3[3] = uStack_3c;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856cd9a FUN_14856cd9a body=141 status=ok
// SIG undefined FUN_14856cd9a(void)

undefined4 * FUN_14856cd9a(undefined4 *param_1,longlong *param_2,uint param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  *param_4 = 0;
  if (((int)param_3 < 0 || *param_2 == 0) || (*(int *)(*param_2 + 8) <= (int)param_3)) {
    *(undefined8 *)(param_1 + 4) = DAT_14c8464f0;
    uVar6 = (undefined4)DAT_14c8464e0;
    uVar7 = DAT_14c8464e0._4_4_;
    uVar8 = (undefined4)DAT_14c8464e8;
    uVar9 = DAT_14c8464e8._4_4_;
  }
  else {
    *param_4 = 1;
    lVar4 = *(longlong *)*param_2;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(lVar4 + 0x10 + (ulonglong)param_3 * 0x18);
    puVar3 = (undefined4 *)(lVar4 + (ulonglong)param_3 * 0x18);
    uVar6 = *puVar3;
    uVar7 = puVar3[1];
    uVar8 = puVar3[2];
    uVar9 = puVar3[3];
  }
  *param_1 = uVar6;
  param_1[1] = uVar7;
  param_1[2] = uVar8;
  param_1[3] = uVar9;
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
  return param_1;
}



// FUNCTION 14856ce28 FUN_14856ce28 body=269 status=ok
// SIG undefined FUN_14856ce28(void)

void FUN_14856ce28(undefined8 param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar3 = plStack_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  if (local_38 == 0) {
    iVar4 = -1;
  }
  else {
    iVar4 = *(int *)(local_38 + 8) + -1;
  }
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
  plVar3 = plStack_30;
  *param_3 = iVar4;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856cf36 FUN_14856cf36 body=264 status=ok
// SIG undefined FUN_14856cf36(void)

void FUN_14856cf36(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar3 = plStack_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  if (local_38 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(local_38 + 8);
  }
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
  plVar3 = plStack_30;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856d046 FUN_14856d046 body=501 status=ok
// SIG undefined FUN_14856d046(void)

void FUN_14856d046(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_3c;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar7 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  local_3c = 0;
  FUN_144a7452c();
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
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_4d = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4d);
  }
  iVar4 = local_3c;
  puVar5 = &local_4d;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_4c;
  uStack_64 = uStack_48;
  uStack_60 = uStack_44;
  uStack_5c = uStack_40;
  lVar6 = (longlong)local_3c;
  *puVar5 = 0;
  if (((-1 < lVar6) && (*plVar7 != 0)) && (iVar4 < *(int *)(*plVar7 + 8))) {
    *puVar5 = 1;
    puVar3 = (undefined4 *)(*(longlong *)*plVar7 + lVar6 * 0x10);
    *puVar3 = local_4c;
    puVar3[1] = uStack_48;
    puVar3[2] = uStack_44;
    puVar3[3] = uStack_40;
  }
  plVar7 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856d242 FUN_14856d242 body=501 status=ok
// SIG undefined FUN_14856d242(void)

void FUN_14856d242(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  undefined4 local_40;
  int local_3c;
  undefined1 local_38 [8];
  undefined8 local_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_41 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  iVar5 = local_3c;
  uVar4 = local_40;
  puVar7 = &local_41;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar7 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar8 = (longlong)local_3c;
  puVar9 = local_38;
  if (puVar3 != (undefined1 *)0x0) {
    puVar9 = puVar3;
  }
  *puVar7 = 0;
  if (((-1 < lVar8) && (*(longlong *)(puVar9 + 8) != 0)) &&
     (iVar5 < *(int *)(*(longlong *)(puVar9 + 8) + 8))) {
    *puVar7 = 1;
    *(undefined4 *)(**(longlong **)(puVar9 + 8) + lVar8 * 4) = uVar4;
  }
  plVar6 = plStack_28;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_28)(plStack_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856d43e FUN_14856d43e body=498 status=ok
// SIG undefined FUN_14856d43e(void)

void FUN_14856d43e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined8 local_48;
  int local_3c;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar7 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_48 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_49 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  iVar4 = local_3c;
  uVar3 = local_48;
  puVar5 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar6 = (longlong)local_3c;
  *puVar5 = 0;
  if (((-1 < lVar6) && (*plVar7 != 0)) && (iVar4 < *(int *)(*plVar7 + 8))) {
    *puVar5 = 1;
    *(undefined8 *)(*(longlong *)*plVar7 + lVar6 * 8) = uVar3;
  }
  plVar7 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856d638 FUN_14856d638 body=501 status=ok
// SIG undefined FUN_14856d638(void)

void FUN_14856d638(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_51;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int local_3c;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar7 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  local_3c = 0;
  FUN_144a7452c();
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
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_51 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_51);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_51);
  }
  iVar4 = local_3c;
  puVar5 = &local_51;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_50;
  uStack_64 = uStack_4c;
  uStack_60 = uStack_48;
  uStack_5c = uStack_44;
  lVar6 = (longlong)local_3c;
  *puVar5 = 0;
  if (((-1 < lVar6) && (*plVar7 != 0)) && (iVar4 < *(int *)(*plVar7 + 8))) {
    *puVar5 = 1;
    puVar3 = (undefined4 *)(*(longlong *)*plVar7 + lVar6 * 0x10);
    *puVar3 = local_50;
    puVar3[1] = uStack_4c;
    puVar3[2] = uStack_48;
    puVar3[3] = uStack_44;
  }
  plVar7 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856d834 FUN_14856d834 body=527 status=ok
// SIG undefined FUN_14856d834(void)

void FUN_14856d834(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined1 local_59;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  int local_3c;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar8 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x38);
  }
  local_3c = 0;
  FUN_144a7452c();
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_59);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_59);
  }
  iVar5 = local_3c;
  puVar6 = &local_59;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_48;
  local_78 = local_58;
  uStack_74 = uStack_54;
  uStack_70 = uStack_50;
  uStack_6c = uStack_4c;
  lVar7 = (longlong)local_3c;
  *puVar6 = 0;
  if (((-1 < lVar7) && (*plVar8 != 0)) && (iVar5 < *(int *)(*plVar8 + 8))) {
    *puVar6 = 1;
    lVar4 = *(longlong *)*plVar8;
    *(undefined8 *)(lVar4 + 0x10 + lVar7 * 0x18) = local_48;
    puVar3 = (undefined4 *)(lVar4 + lVar7 * 0x18);
    *puVar3 = local_58;
    puVar3[1] = uStack_54;
    puVar3[2] = uStack_50;
    puVar3[3] = uStack_4c;
  }
  plVar8 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856da48 FUN_14856da48 body=281 status=ok
// SIG undefined FUN_14856da48(void)

void FUN_14856da48(undefined1 *param_1,undefined1 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 8) != 0) goto LAB_14856da62;
  plVar3 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14aee5340;
  plVar3[2] = 0;
  plVar3[3] = 0;
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = 0x10;
    plVar4 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == (longlong *)0x0) goto LAB_14856da62;
    *(undefined8 *)(param_1 + 0x10) = 0;
LAB_14856dad1:
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
    if (plVar3 == (longlong *)0x0) goto LAB_14856da62;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 8) = plVar3 + 2;
    plVar4 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == plVar4) {
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
    else {
      *(longlong **)(param_1 + 0x10) = plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_14856dad1;
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
LAB_14856da62:
  FUN_144a9ff88(*(undefined8 *)(param_1 + 8),param_3);
  *param_1 = param_2;
  return;
}



// FUNCTION 14856db62 FUN_14856db62 body=41 status=ok
// SIG undefined FUN_14856db62(void)

void FUN_14856db62(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_146ea3024();
  return;
}



// FUNCTION 14856db8c FUN_14856db8c body=104 status=ok
// SIG undefined FUN_14856db8c(void)

void FUN_14856db8c(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_146ddc768(param_1,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 0xc + *param_1),(void *)*param_2,(longlong)(int)uVar1 * 0xc);
    return;
  }
  return;
}



// FUNCTION 14856dbf4 FUN_14856dbf4 body=248 status=ok
// SIG undefined FUN_14856dbf4(void)

void FUN_14856dbf4(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_1 != 0) goto LAB_14856dcd9;
  plVar3 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14af3b7b0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14856dcd9;
    param_1[1] = 0;
LAB_14856dc5e:
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
    if (plVar3 == (longlong *)0x0) goto LAB_14856dcd9;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)(plVar3 + 2);
    plVar4 = (longlong *)param_1[1];
    if (plVar3 == plVar4) {
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
    else {
      param_1[1] = (longlong)plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_14856dc5e;
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
LAB_14856dcd9:
  FUN_14856db62(*param_1,param_2);
  return;
}



// FUNCTION 14856dcec FUN_14856dcec body=248 status=ok
// SIG undefined FUN_14856dcec(void)

void FUN_14856dcec(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_1 != 0) goto LAB_14856ddd1;
  plVar3 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14af3b7d0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14856ddd1;
    param_1[1] = 0;
LAB_14856dd56:
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
    if (plVar3 == (longlong *)0x0) goto LAB_14856ddd1;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)(plVar3 + 2);
    plVar4 = (longlong *)param_1[1];
    if (plVar3 == plVar4) {
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
    else {
      param_1[1] = (longlong)plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_14856dd56;
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
LAB_14856ddd1:
  FUN_147e7779c(*param_1,param_2);
  return;
}



// FUNCTION 14856dde4 FUN_14856dde4 body=261 status=ok
// SIG undefined FUN_14856dde4(void)

void FUN_14856dde4(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_1 != 0) goto LAB_14856ddf8;
  plVar3 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14af3b7f0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14856ddf8;
    param_1[1] = 0;
LAB_14856de5e:
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
    if (plVar3 == (longlong *)0x0) goto LAB_14856ddf8;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)(plVar3 + 2);
    plVar4 = (longlong *)param_1[1];
    if (plVar3 == plVar4) {
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
    else {
      param_1[1] = (longlong)plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_14856de5e;
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
LAB_14856ddf8:
  FUN_1417247dc(*param_1,param_2);
  return;
}



// FUNCTION 14856deea FUN_14856deea body=248 status=ok
// SIG undefined FUN_14856deea(void)

void FUN_14856deea(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_1 != 0) goto LAB_14856dfcf;
  plVar3 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14af3b810;
  plVar3[2] = 0;
  plVar3[3] = 0;
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14856dfcf;
    param_1[1] = 0;
LAB_14856df54:
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
    if (plVar3 == (longlong *)0x0) goto LAB_14856dfcf;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)(plVar3 + 2);
    plVar4 = (longlong *)param_1[1];
    if (plVar3 == plVar4) {
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
    else {
      param_1[1] = (longlong)plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_14856df54;
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
LAB_14856dfcf:
  FUN_14847370c(*param_1,param_2);
  return;
}



// FUNCTION 14856dfe2 FUN_14856dfe2 body=103 status=ok
// SIG undefined FUN_14856dfe2(void)

void FUN_14856dfe2(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1467ff840(param_1,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 0x10 + *param_1),(void *)*param_2,(longlong)(int)uVar1 << 4);
    return;
  }
  return;
}



// FUNCTION 14856e04a FUN_14856e04a body=248 status=ok
// SIG undefined FUN_14856e04a(void)

void FUN_14856e04a(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_1 != 0) goto LAB_14856e12f;
  plVar3 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14af3b830;
  plVar3[2] = 0;
  plVar3[3] = 0;
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14856e12f;
    param_1[1] = 0;
LAB_14856e0b4:
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
    if (plVar3 == (longlong *)0x0) goto LAB_14856e12f;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)(plVar3 + 2);
    plVar4 = (longlong *)param_1[1];
    if (plVar3 == plVar4) {
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
    else {
      param_1[1] = (longlong)plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_14856e0b4;
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
LAB_14856e12f:
  FUN_147b5b31c(*param_1,param_2);
  return;
}



// FUNCTION 14856e1bc FUN_14856e1bc body=398 status=ok
// SIG undefined FUN_14856e1bc(void)

void FUN_14856e1bc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_31;
  uint local_30;
  undefined4 uStack_2c;
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
  local_30 = local_30 & 0xffffff00;
  uStack_2c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
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
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar3 = &local_31;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_14856e34c(local_28,CONCAT44(uStack_2c,local_30),puVar3,local_40);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856e34c FUN_14856e34c body=281 status=ok
// SIG undefined FUN_14856e34c(void)

bool FUN_14856e34c(longlong param_1,longlong param_2,undefined1 *param_3,undefined8 param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_3 = 1;
  if (param_1 == 0) {
    local_38 = L"CheckStaticMeshHasAvailableLOD_InvalidInput1";
    local_30 = 0x2c;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"UGeometryScriptLibrary_MeshAssetFunctions";
    local_30 = 0x29;
    FUN_1446e940c(local_40,&local_38);
    FUN_140208bae(&local_38,local_40,local_3c,
                  L"CheckStaticMeshHasAvailableLOD: FromStaticMeshAsset is Null");
    FUN_143ba90d7(param_4,2,&local_38);
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 0x10))();
    }
  }
  else if ((char)param_2 == '\x03') {
    if (param_2 < 0) {
      bVar3 = true;
    }
    else {
      iVar1 = FUN_14370c356(param_1);
      bVar3 = iVar1 <= (int)((ulonglong)param_2 >> 0x20);
    }
    *param_3 = bVar3;
    bVar2 = true;
    if ((*(byte *)(param_1 + 0x195) & 2) != 0) {
      bVar2 = bVar3;
    }
    *param_3 = bVar2;
    bVar3 = bVar2 == false;
    goto LAB_14856e43e;
  }
  bVar3 = false;
LAB_14856e43e:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856e466 FUN_14856e466 body=352 status=ok
// SIG undefined FUN_14856e466(void)

void FUN_14856e466(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_b8 [32];
  longlong local_98 [4];
  undefined1 local_78 [64];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98[2] = 0;
  local_98[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98 + 2);
  }
  plVar1 = local_98 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_98[0] = 0;
  local_98[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  plVar2 = local_98;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143baf282(local_78,plVar1,plVar2);
  FUN_148580688(param_3,local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_148580778(local_78);
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856e5c8 FUN_14856e5c8 body=468 status=ok
// SIG undefined FUN_14856e5c8(void)

void FUN_14856e5c8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  longlong local_98 [8];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = 0;
  local_50 = 0;
  local_98[4] = 0;
  local_98[5] = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98 + 4);
  }
  plVar2 = local_98 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_98[2] = 0;
  local_98[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98 + 2);
  }
  plVar1 = local_98 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_98[0] = 0;
  local_98[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = local_98;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14856e79e(plVar2,plVar1,plVar3);
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98[2] != 0) {
    FUN_1400020a8();
  }
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_148580778(local_98 + 4);
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856e79e FUN_14856e79e body=373 status=ok
// SIG undefined FUN_14856e79e(void)

void FUN_14856e79e(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
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
  FUN_1485718c2(param_2,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  FUN_140ee6e62(param_3,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar5 = (int)param_1[5];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = param_1;
  if ((iStack_54 != iVar5) || (uStack_60 != plVar1)) {
    do {
      uVar3 = *(undefined8 *)(*local_90 + (longlong)iStack_74 * 0x18);
      uVar4 = *(undefined8 *)(*local_90 + 8 + (longlong)iStack_74 * 0x18);
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_144769b64(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = uVar4;
      iVar2 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
        FUN_1446f84a2(param_3,iVar2);
      }
      *(undefined8 *)(*param_3 + (longlong)iVar2 * 8) = uVar3;
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != param_1 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || iStack_74 != iVar5));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856e914 FUN_14856e914 body=563 status=ok
// SIG undefined FUN_14856e914(void)

void FUN_14856e914(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined1 local_41;
  uint local_40;
  undefined4 uStack_3c;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  local_34 = 0x1010101;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_40 = local_40 & 0xffffff00;
  uStack_3c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_41 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar2 = local_30;
  local_68 = &local_41;
  if (puVar1 != (undefined1 *)0x0) {
    local_68 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_50;
  FUN_14856eb48(local_28,local_30,local_34,CONCAT44(uStack_3c,local_40));
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856eb48 FUN_14856eb48 body=441 status=ok
// SIG undefined FUN_14856eb48(void)

longlong FUN_14856eb48(longlong param_1,longlong param_2,undefined4 param_3,ulonglong param_4,
                      undefined1 *param_5,undefined8 param_6)

{
  char cVar1;
  wchar_t *pwVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_5 = 0;
  if (param_1 == 0) {
    local_40 = L"CopyMeshFromSkeletalMesh_InvalidInput1";
    local_38 = 0x26;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"UGeometryScriptLibrary_MeshAssetFunctions";
    local_38 = 0x29;
    FUN_1446e940c(local_48,&local_40);
    pwVar2 = L"CopyMeshFromSkeletalMesh: FromSkeletalMeshAsset is Null";
  }
  else if (param_2 == 0) {
    local_40 = L"CopyMeshFromSkeletalMesh_InvalidInput2";
    local_38 = 0x26;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"UGeometryScriptLibrary_MeshAssetFunctions";
    local_38 = 0x29;
    FUN_1446e940c(local_48,&local_40);
    pwVar2 = L"CopyMeshFromSkeletalMesh: ToDynamicMesh is Null";
  }
  else {
    if ((char)param_4 == '\x03') {
      local_58 = param_6;
      cVar1 = FUN_1485718ed(param_1,param_3,param_4 >> 0x20,param_2);
      if (cVar1 != '\0') {
        *param_5 = 1;
      }
      goto LAB_14856ec60;
    }
    local_40 = L"CopyMeshFromSkeletalMesh_SourceMesh_EditorOnly";
    local_38 = 0x2e;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"UGeometryScriptLibrary_MeshAssetFunctions";
    local_38 = 0x29;
    FUN_1446e940c(local_48,&local_40);
    pwVar2 = L"CopyMeshFromSkeletalMesh: Source Meshes are not available at Runtime";
  }
  FUN_140208bae(&local_40,local_48,local_44,pwVar2);
  FUN_143ba90d7(param_6,2,&local_40);
  if (local_40 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_40 + 0x10))();
  }
LAB_14856ec60:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856ed02 FUN_14856ed02 body=568 status=ok
// SIG undefined FUN_14856ed02(void)

void FUN_14856ed02(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_41;
  uint local_40;
  undefined4 uStack_3c;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  local_34 = 0x1010101;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_40 = local_40 & 0xffffff00;
  uStack_3c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_41 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar2 = local_30;
  local_68 = &local_41;
  if (puVar1 != (undefined1 *)0x0) {
    local_68 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_50;
  local_60 = 1;
  FUN_14856f1ca(local_28,local_30,local_34,CONCAT44(uStack_3c,local_40));
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856ef42 FUN_14856ef42 body=646 status=ok
// SIG undefined FUN_14856ef42(void)

void FUN_14856ef42(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_58;
  int local_50;
  undefined1 local_49;
  uint local_48;
  undefined4 uStack_44;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0x1010101;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_48 = local_48 & 0xffffff00;
  uStack_44 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_49 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_50 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  iVar2 = local_50;
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  uVar3 = local_38;
  local_78 = &local_49;
  if (puVar1 != (undefined1 *)0x0) {
    local_78 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = iVar2 != 0;
  local_68 = local_58;
  FUN_14856f1ca(local_30,local_38,local_3c,CONCAT44(uStack_44,local_48));
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856f1ca FUN_14856f1ca body=588 status=ok
// SIG undefined FUN_14856f1ca(void)

longlong FUN_14856f1ca(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined1 *param_5,undefined1 param_6,undefined8 param_7)

{
  char cVar1;
  byte bVar2;
  wchar_t *pwVar3;
  undefined1 auStack_2c8 [32];
  byte local_2a8;
  undefined4 local_2a0;
  undefined1 local_298;
  longlong local_288;
  wchar_t *local_280 [2];
  byte local_270;
  byte local_26f;
  byte local_26e;
  byte local_26d;
  undefined1 local_26c;
  undefined1 local_26b;
  wchar_t *local_268;
  undefined4 local_260;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  *param_5 = 0;
  if (param_1 == 0) {
    local_268 = L"CopyMeshFromAsset_InvalidInput1";
    local_260 = 0x1f;
    FUN_1446e940c(local_280,&local_268);
    local_268 = L"UGeometryScriptLibrary_MeshAssetFunctions";
    local_260 = 0x29;
    FUN_1446e940c(&local_270,&local_268);
    pwVar3 = L"CopyMeshFromStaticMesh: FromStaticMeshAsset is Null";
  }
  else {
    if (param_2 != 0) {
      bVar2 = 3;
      if ((byte)param_4 < 3) {
        bVar2 = (byte)param_4;
      }
      local_270 = (byte)param_3 & 1;
      local_26f = (byte)((ulonglong)param_3 >> 8) & 1;
      local_26e = (byte)((ulonglong)param_3 >> 0x10) & 1;
      local_26d = (byte)((ulonglong)param_3 >> 0x18) & 1;
      local_26c = param_6;
      local_26b = 1;
      local_288 = param_2;
      FUN_144a5dc74(local_280);
      local_2a8 = 0;
      FUN_1411b354a(&local_268,0,0,0);
      local_298 = 1;
      local_2a0 = (undefined4)((ulonglong)param_4 >> 0x20);
      local_2a8 = bVar2;
      cVar1 = FUN_1484ce2aa(param_1,&local_268,local_280,&local_270);
      param_2 = local_288;
      if (cVar1 == '\0') {
        FUN_143ba90d7(param_7,2,local_280);
        param_2 = local_288;
      }
      else {
        FUN_1484b1fb6(local_288,&local_268);
        *param_5 = 1;
      }
      FUN_141082778(&local_268);
      goto LAB_14856f359;
    }
    local_268 = L"CopyMeshFromAsset_InvalidInput2";
    local_260 = 0x1f;
    FUN_1446e940c(local_280,&local_268);
    local_268 = L"UGeometryScriptLibrary_MeshAssetFunctions";
    local_260 = 0x29;
    FUN_1446e940c(&local_270,&local_268);
    pwVar3 = L"CopyMeshFromStaticMesh: ToDynamicMesh is Null";
  }
  FUN_140208bae(&local_268,&local_270,local_280,pwVar3);
  FUN_143ba90d7(param_7,2,&local_268);
  local_280[0] = local_268;
LAB_14856f359:
  if (local_280[0] != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_280[0] + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856f418 FUN_14856f418 body=870 status=ok
// SIG undefined FUN_14856f418(void)

void FUN_14856f418(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_198 [32];
  undefined1 *local_178;
  undefined8 local_170;
  undefined1 local_168 [128];
  undefined8 local_e8;
  undefined1 local_d9;
  uint local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined1 local_ca;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined1 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined2 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_d0 = 0;
  local_cc = 0x100;
  local_ca = 0;
  local_a4 = 1;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0x42c80000;
  local_98 = 8;
  local_94 = 0xffffffff80000000;
  uStack_8c = 0xffffffff;
  local_84 = 0x3f800000;
  local_7c = 0;
  local_78 = DAT_14c761520;
  local_74 = DAT_14c761524;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  local_d8 = local_d8 & 0xffffff00;
  uStack_d4 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  local_d9 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d9);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_e8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  uVar3 = local_e8;
  puVar5 = &local_d9;
  if (puVar1 != (undefined1 *)0x0) {
    puVar5 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = CONCAT44(uStack_d4,local_d8);
  FUN_14856fa00(local_168,&local_d0);
  uVar4 = local_48;
  local_170 = uVar3;
  local_178 = puVar5;
  FUN_14856f800(local_48,local_50,local_168,uVar2);
  *param_3 = uVar4;
  FUN_14856faca(&local_d0);
  if ((local_40 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856f800 FUN_14856f800 body=510 status=ok
// SIG undefined FUN_14856f800(void)

longlong FUN_14856f800(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                      undefined1 *param_5,undefined8 param_6)

{
  wchar_t *pwVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_5 = 0;
  if (param_1 == 0) {
    local_48 = L"CopyMeshToSkeletalMesh_InvalidInput1";
    local_40 = 0x24;
    FUN_1446e940c(local_4c,&local_48);
    local_48 = L"UGeometryScriptLibrary_MeshAssetFunctions";
    local_40 = 0x29;
    FUN_1446e940c(local_50,&local_48);
    pwVar1 = L"CopyMeshToSkeletalMesh: FromDynamicMesh is Null";
  }
  else if (param_2 == 0) {
    local_48 = L"CopyMeshToSkeletalMesh_InvalidInput2";
    local_40 = 0x24;
    FUN_1446e940c(local_4c,&local_48);
    local_48 = L"UGeometryScriptLibrary_MeshAssetFunctions";
    local_40 = 0x29;
    FUN_1446e940c(local_50,&local_48);
    pwVar1 = L"CopyMeshToSkeletalMesh: ToSkeletalMeshAsset is Null";
  }
  else if ((param_4 & 1) == 0) {
    local_48 = L"CopyMeshToSkeletalMesh_EditorOnly";
    local_40 = 0x21;
    FUN_1446e940c(local_4c,&local_48);
    local_48 = L"UGeometryScriptLibrary_MeshAssetFunctions";
    local_40 = 0x29;
    FUN_1446e940c(local_50,&local_48);
    pwVar1 = L"CopyMeshToSkeletalMesh: Not currently supported at Runtime";
  }
  else {
    local_48 = L"CopyMeshToSkeletalMesh_Unsupported";
    local_40 = 0x22;
    FUN_1446e940c(local_4c,&local_48);
    local_48 = L"UGeometryScriptLibrary_MeshAssetFunctions";
    local_40 = 0x29;
    FUN_1446e940c(local_50,&local_48);
    pwVar1 = L"CopyMeshToSkeletalMesh: Writing HiResSource LOD is not yet supported";
  }
  FUN_140208bae(&local_48,local_50,local_4c,pwVar1);
  FUN_143ba90d7(param_6,2,&local_48);
  if (local_48 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_48 + 0x10))();
  }
  FUN_14856faca(param_3);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856fa00 FUN_14856fa00 body=201 status=ok
// SIG undefined FUN_14856fa00(void)

undefined4 * FUN_14856fa00(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *param_2;
  *(undefined4 *)((longlong)param_1 + 3) = *(undefined4 *)((longlong)param_2 + 3);
  *param_1 = uVar1;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar2 = param_2[4];
  uVar3 = *(undefined8 *)(param_2 + 2);
  param_1[4] = iVar2;
  if (iVar2 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_140c99534(param_1 + 2,iVar2,0);
    FUN_140c994e3(*(undefined8 *)(param_1 + 2),uVar3,iVar2);
  }
  *(undefined8 *)(param_1 + 6) = 0;
  iVar2 = param_2[8];
  _Src = *(void **)(param_2 + 6);
  param_1[8] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_1401b309e(param_1 + 6,iVar2,0);
    memcpy(*(void **)(param_1 + 6),_Src,(longlong)iVar2 << 3);
  }
  uVar1 = param_2[0xb];
  uVar4 = param_2[0xc];
  uVar5 = param_2[0xd];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  param_1[0xc] = uVar4;
  param_1[0xd] = uVar5;
  FUN_148580806(param_1 + 0xe,param_2 + 0xe);
  *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)(param_2 + 0x1e);
  return param_1;
}



// FUNCTION 14856faca FUN_14856faca body=62 status=ok
// SIG undefined FUN_14856faca(void)

void FUN_14856faca(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14856fb10 FUN_14856fb10 body=932 status=ok
// SIG undefined FUN_14856fb10(void)

void FUN_14856fb10(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined1 local_160 [128];
  undefined8 local_e0;
  undefined4 local_d8;
  undefined1 local_d1;
  undefined1 local_d0 [4];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined1 local_c2;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined8 local_7c;
  undefined1 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_c8 = 0;
  local_c4 = 0x100;
  local_c2 = 0;
  local_9c = 1;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0x42c80000;
  local_90 = 8;
  local_8c = 0xffffffff80000000;
  uStack_84 = 0xffffffff;
  local_7c = 0x3f800000;
  local_74 = 0;
  local_70 = DAT_14c761520;
  local_6c = DAT_14c761524;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  local_d0[0] = 0;
  local_cc = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d0);
  }
  local_d1 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d1);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_d8 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  local_e0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  uVar2 = local_e0;
  puVar4 = &local_d1;
  if (puVar1 != (undefined1 *)0x0) {
    puVar4 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14856fa00(local_160,&local_c8);
  uVar3 = local_40;
  local_168 = uVar2;
  FUN_14856feb6(local_40,local_48,local_160,puVar4);
  *param_3 = uVar3;
  FUN_14856faca(&local_c8);
  if ((local_38 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14856feb6 FUN_14856feb6 body=410 status=ok
// SIG undefined FUN_14856feb6(void)

longlong FUN_14856feb6(longlong param_1,longlong param_2,undefined8 param_3,undefined1 *param_4,
                      undefined8 param_5)

{
  wchar_t *pwVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_4 = 0;
  if (param_1 == 0) {
    local_48 = L"CopyMeshToAsset_InvalidInput1";
    local_40 = 0x1d;
    FUN_1446e940c(local_4c,&local_48);
    local_48 = L"UGeometryScriptLibrary_MeshAssetFunctions";
    local_40 = 0x29;
    FUN_1446e940c(local_50,&local_48);
    pwVar1 = L"CopyMeshToStaticMesh: FromDynamicMesh is Null";
  }
  else if (param_2 == 0) {
    local_48 = L"CopyMeshToAsset_InvalidInput2";
    local_40 = 0x1d;
    FUN_1446e940c(local_4c,&local_48);
    local_48 = L"UGeometryScriptLibrary_MeshAssetFunctions";
    local_40 = 0x29;
    FUN_1446e940c(local_50,&local_48);
    pwVar1 = L"CopyMeshToStaticMesh: ToStaticMeshAsset is Null";
  }
  else {
    local_48 = L"CopyMeshToAsset_EditorOnly";
    local_40 = 0x1a;
    FUN_1446e940c(local_4c,&local_48);
    local_48 = L"UGeometryScriptLibrary_MeshAssetFunctions";
    local_40 = 0x29;
    FUN_1446e940c(local_50,&local_48);
    pwVar1 = L"CopyMeshToStaticMesh: Not currently supported at Runtime";
  }
  FUN_140208bae(&local_48,local_50,local_4c,pwVar1);
  FUN_143ba90d7(param_5,2,&local_48);
  if (local_48 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_48 + 0x10))();
  }
  FUN_14856faca(param_3);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148570052 FUN_148570052 body=618 status=ok
// SIG undefined FUN_148570052(void)

void FUN_148570052(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_45;
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined2 local_3b;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  local_38 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3b = 0x100;
  local_39 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3b);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3b);
  }
  local_44[0] = 0;
  local_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_44);
  }
  local_45 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_45);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_45);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar2 = local_28;
  puVar3 = &local_45;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485702be(local_28,local_30,puVar3,local_50);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485702be FUN_1485702be body=387 status=ok
// SIG undefined FUN_1485702be(void)

longlong FUN_1485702be(longlong param_1,longlong param_2,undefined1 *param_3,undefined8 param_4)

{
  wchar_t *pwVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_3 = 0;
  if (param_2 == 0) {
    local_40 = L"CopyMorphTargetToSkeletalMesh_InvalidInput1";
    local_38 = 0x2b;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"UGeometryScriptLibrary_MeshAssetFunctions";
    local_38 = 0x29;
    FUN_1446e940c(local_48,&local_40);
    pwVar1 = L"CopyMorphTargetToSkeletalMesh: ToSkeletalMeshAsset is Null";
  }
  else if (param_1 == 0) {
    local_40 = L"CopyMorphTargetToSkeletalMesh_InvalidInput2";
    local_38 = 0x2b;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"UGeometryScriptLibrary_MeshAssetFunctions";
    local_38 = 0x29;
    FUN_1446e940c(local_48,&local_40);
    pwVar1 = L"CopyMorphTargetToSkeletalMesh: FromDynamicMesh is Null";
  }
  else {
    local_40 = L"CopyMorphTargetToSkeletalMesh_EditorOnly";
    local_38 = 0x28;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"UGeometryScriptLibrary_MeshAssetFunctions";
    local_38 = 0x29;
    FUN_1446e940c(local_48,&local_40);
    pwVar1 = L"CopyMorphTargetToSkeletalMesh: Not currently supported at Runtime";
  }
  FUN_140208bae(&local_40,local_48,local_44,pwVar1);
  FUN_143ba90d7(param_4,2,&local_40);
  if (local_40 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_40 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148570442 FUN_148570442 body=689 status=ok
// SIG undefined FUN_148570442(void)

void FUN_148570442(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_4d;
  undefined1 local_4c [4];
  undefined4 local_48;
  undefined2 local_43;
  undefined1 local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  local_38 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_43 = 0x101;
  local_41 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_43);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_43);
  }
  local_4c[0] = 0;
  local_48 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_4c);
  }
  local_4d = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4d);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  uVar2 = local_28;
  puVar3 = &local_4d;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485706f4(local_28,local_30,puVar3,local_58);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485706f4 FUN_1485706f4 body=387 status=ok
// SIG undefined FUN_1485706f4(void)

longlong FUN_1485706f4(longlong param_1,longlong param_2,undefined1 *param_3,undefined8 param_4)

{
  wchar_t *pwVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_3 = 0;
  if (param_2 == 0) {
    local_40 = L"CopySkinWeightProfileToSkeletalMesh_InvalidInput1";
    local_38 = 0x31;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"UGeometryScriptLibrary_MeshAssetFunctions";
    local_38 = 0x29;
    FUN_1446e940c(local_48,&local_40);
    pwVar1 = L"CopySkinWeightProfileToSkeletalMesh: ToSkeletalMeshAsset is Null";
  }
  else if (param_1 == 0) {
    local_40 = L"CopySkinWeightProfileToSkeletalMesh_InvalidInput2";
    local_38 = 0x31;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"UGeometryScriptLibrary_MeshAssetFunctions";
    local_38 = 0x29;
    FUN_1446e940c(local_48,&local_40);
    pwVar1 = L"CopySkinWeightProfileToSkeletalMesh: FromDynamicMesh is Null";
  }
  else {
    local_40 = L"CopySkinWeightProfileToSkeletalMesh_EditorOnly";
    local_38 = 0x2e;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"UGeometryScriptLibrary_MeshAssetFunctions";
    local_38 = 0x29;
    FUN_1446e940c(local_48,&local_40);
    pwVar1 = L"CopySkinWeightProfileToSkeletalMesh: Not currently supported at Runtime";
  }
  FUN_140208bae(&local_40,local_48,local_44,pwVar1);
  FUN_143ba90d7(param_4,2,&local_40);
  if (local_40 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_40 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148570878 FUN_148570878 body=642 status=ok
// SIG undefined FUN_148570878(void)

void FUN_148570878(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_59;
  longlong local_58 [6];
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28[0] = 0;
  local_24 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar1 = (undefined8 *)(param_2 + 0x38);
  local_58[4] = 0;
  local_58[5] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 4);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_59 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_59);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_59);
  }
  puVar2 = &local_59;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148570afc(local_20,puVar2,local_68);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (local_58[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148570afc FUN_148570afc body=282 status=ok
// SIG undefined FUN_148570afc(void)

void FUN_148570afc(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  wchar_t *pwVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  if (param_1 == 0) {
    local_38 = L"GetLODMaterialListFromSkeletalMesh_InvalidInput1";
    local_30 = 0x30;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"UGeometryScriptLibrary_MeshAssetFunctions";
    local_30 = 0x29;
    FUN_1446e940c(local_40,&local_38);
    pwVar1 = L"GetLODMaterialListFromSkeletalMesh: FromSkeletalMeshAsset is Null";
  }
  else {
    local_38 = L"GetLODMaterialListFromSkeletalMesh_EditorOnly";
    local_30 = 0x2d;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"UGeometryScriptLibrary_MeshAssetFunctions";
    local_30 = 0x29;
    FUN_1446e940c(local_40,&local_38);
    pwVar1 = L"GetLODMaterialListFromSkeletalMesh: Not available at Runtime";
  }
  FUN_140208bae(&local_38,local_40,local_3c,pwVar1);
  FUN_143ba90d7(param_3,2,&local_38);
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148570c18 FUN_148570c18 body=437 status=ok
// SIG undefined FUN_148570c18(void)

void FUN_148570c18(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48 [6];
  
  local_48[5] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[4] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 4);
  }
  local_48[2] = 0;
  local_48[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  plVar2 = local_48 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148570dce(local_48[4],plVar2,plVar1,local_50);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[5] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148570dce FUN_148570dce body=362 status=ok
// SIG undefined FUN_148570dce(void)

void FUN_148570dce(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 == (longlong *)0x0) {
    local_50 = L"GetMaterialListFromSkeletalMesh_InvalidInput1";
    local_48 = 0x2d;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshAssetFunctions";
    local_48 = 0x29;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,
                  L"GetMaterialListFromSkeletalMesh: FromSkeletalMeshAsset is Null");
    FUN_143ba90d7(param_4,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x3b0))();
    FUN_1485718c2(param_2,(int)plVar4[1]);
    FUN_140ee6e62(param_3,(int)plVar4[1]);
    if (0 < (int)plVar4[1]) {
      lVar6 = 0;
      lVar5 = 0;
      do {
        uVar2 = *(undefined8 *)(*plVar4 + lVar6);
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_144769b64(param_2,iVar1);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
        lVar3 = *plVar4;
        iVar1 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_1446f84a2(param_3,iVar1);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar3 + 8 + lVar6);
        lVar5 = lVar5 + 1;
        lVar6 = lVar6 + 0x28;
      } while (lVar5 < (int)plVar4[1]);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148570f3a FUN_148570f3a body=437 status=ok
// SIG undefined FUN_148570f3a(void)

void FUN_148570f3a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48 [6];
  
  local_48[5] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[4] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 4);
  }
  local_48[2] = 0;
  local_48[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  plVar2 = local_48 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485710f0(local_48[4],plVar2,plVar1,local_50);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[5] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485710f0 FUN_1485710f0 body=373 status=ok
// SIG undefined FUN_1485710f0(void)

void FUN_1485710f0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 == 0) {
    local_50 = L"GetMaterialListFromStaticMesh_InvalidInput1";
    local_48 = 0x2b;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshAssetFunctions";
    local_48 = 0x29;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,
                  L"GetMaterialListFromStaticMesh: FromStaticMeshAsset is Null");
    FUN_143ba90d7(param_4,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    FUN_1485718c2(param_2,*(undefined4 *)(param_1 + 0x160));
    FUN_140ee6e62(param_3,*(undefined4 *)(param_1 + 0x160));
    if (0 < *(int *)(param_1 + 0x160)) {
      lVar5 = 0;
      lVar4 = 0;
      do {
        uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x158) + lVar5);
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_144769b64(param_2,iVar1);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
        lVar3 = *(longlong *)(param_1 + 0x158);
        iVar1 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_1446f84a2(param_3,iVar1);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar3 + 8 + lVar5);
        lVar4 = lVar4 + 1;
        lVar5 = lVar5 + 0x30;
      } while (lVar4 < *(int *)(param_1 + 0x160));
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148571266 FUN_148571266 body=267 status=ok
// SIG undefined FUN_148571266(void)

void FUN_148571266(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [39];
  char local_21;
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
  local_21 = '\0';
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = 0;
  if ((local_21 == '\x03' && local_20 != 0) && ((*(byte *)(local_20 + 0x195) & 2) != 0)) {
    uVar1 = FUN_14370c356();
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148571372 FUN_148571372 body=765 status=ok
// SIG undefined FUN_148571372(void)

void FUN_148571372(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined1 local_79;
  longlong local_78 [7];
  uint local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = local_40 & 0xffffff00;
  uStack_3c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar1 = (undefined8 *)(param_2 + 0x38);
  local_78[4] = 0;
  local_78[5] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 4);
  }
  plVar3 = local_78 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_78[2] = 0;
  local_78[3] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 2);
  }
  plVar2 = local_78 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_78[0] = 0;
  local_78[1] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  plVar5 = local_78;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_79 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_79);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_79);
  }
  puVar4 = &local_79;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_88 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_88;
  local_a8 = plVar5;
  local_a0 = puVar4;
  FUN_148571670(local_38,CONCAT44(uStack_3c,local_40),plVar3,plVar2);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78[2] != 0) {
    FUN_1400020a8();
  }
  if (local_78[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148571670 FUN_148571670 body=589 status=ok
// SIG undefined FUN_148571670(void)

void FUN_148571670(longlong param_1,char param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,undefined1 *param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_6 = 0;
  if (param_1 == 0) {
    local_58 = L"GetSectionMaterialListFromStaticMesh_InvalidInput1";
    local_50 = 0x32;
    FUN_1446e940c(local_5c,&local_58);
    local_58 = L"UGeometryScriptLibrary_MeshAssetFunctions";
    local_50 = 0x29;
    FUN_1446e940c(local_60,&local_58);
    pwVar5 = L"GetSectionMaterialListFromStaticMesh: FromStaticMeshAsset is Null";
  }
  else {
    if (param_2 == '\x03') {
      *(undefined4 *)(param_3 + 1) = 0;
      if (*(int *)((longlong)param_3 + 0xc) < 0) {
        FUN_1448831cc(param_3,0);
      }
      *(undefined4 *)(param_4 + 1) = 0;
      if (*(int *)((longlong)param_4 + 0xc) < 0) {
        FUN_14481578e(param_4,0);
      }
      *(undefined4 *)(param_5 + 1) = 0;
      if (*(int *)((longlong)param_5 + 0xc) < 0) {
        FUN_1402191ca(param_5,0);
      }
      if (0 < *(int *)(param_1 + 0x160)) {
        lVar6 = 0;
        lVar4 = 0;
        do {
          uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x158) + lVar6);
          iVar1 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
            FUN_144769b64(param_3,iVar1);
          }
          *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) = uVar2;
          iVar1 = (int)param_4[1];
          *(uint *)(param_4 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_4 + 0xc) < iVar1 + 1U) {
            FUN_1446f48e2(param_4,iVar1);
          }
          *(int *)(*param_4 + (longlong)iVar1 * 4) = (int)lVar4;
          lVar3 = *(longlong *)(param_1 + 0x158);
          iVar1 = (int)param_5[1];
          *(uint *)(param_5 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_5 + 0xc) < iVar1 + 1U) {
            FUN_1446f84a2(param_5,iVar1);
          }
          *(undefined8 *)(*param_5 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar3 + 8 + lVar6);
          lVar4 = lVar4 + 1;
          lVar6 = lVar6 + 0x30;
        } while (lVar4 < *(int *)(param_1 + 0x160));
      }
      *param_6 = 1;
      goto LAB_148571841;
    }
    local_58 = L"GetSectionMaterialListFromStaticMesh_EditorOnly";
    local_50 = 0x2f;
    FUN_1446e940c(local_5c,&local_58);
    local_58 = L"UGeometryScriptLibrary_MeshAssetFunctions";
    local_50 = 0x29;
    FUN_1446e940c(local_60,&local_58);
    pwVar5 = L"GetSectionMaterialListFromStaticMesh: Source Models are not available at Runtime";
  }
  FUN_140208bae(&local_58,local_60,local_5c,pwVar5);
  FUN_143ba90d7(param_7,2,&local_58);
  if (local_58 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_58 + 0x10))();
  }
LAB_148571841:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485718c2 FUN_1485718c2 body=42 status=ok
// SIG undefined FUN_1485718c2(void)

void FUN_1485718c2(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_1448831cc();
    return;
  }
  return;
}



// FUNCTION 1485718ed FUN_1485718ed body=478 status=ok
// SIG undefined FUN_1485718ed(void)

undefined8
FUN_1485718ed(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
             )

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  undefined1 auStack_2a8 [32];
  undefined1 local_288;
  uint local_280;
  undefined2 local_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined1 local_25c [4];
  wchar_t *local_258;
  undefined4 local_250;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x388))();
  if (plVar1 == (longlong *)0x0) {
    local_258 = L"CopyMeshFromSkeletalMesh_RenderDataNotAvailable";
    local_250 = 0x2f;
    FUN_1446e940c(&local_280,&local_258);
    local_258 = L"UGeometryScriptLibrary_MeshAssetFunctions";
    local_250 = 0x29;
    FUN_1446e940c(local_25c,&local_258);
    pwVar4 = L"CopyMeshFromSkeletalMesh: Renderdata is not available";
  }
  else {
    if (param_3 < (int)plVar1[1]) {
      uVar3 = *(undefined8 *)(*plVar1 + (longlong)param_3 * 8);
      local_288 = 0;
      FUN_1411b354a(&local_258,0,0,0);
      local_27c = 0x101;
      local_278 = (undefined4)DAT_14c846510;
      uStack_274 = DAT_14c846510._4_4_;
      uStack_270 = (undefined4)DAT_14c846518;
      uStack_26c = DAT_14c846518._4_4_;
      local_268 = DAT_14c846520;
      local_280 = CONCAT22(0x101,CONCAT11((char)((ulonglong)param_2 >> 8),1)) & 0xffff01ff;
      uVar2 = (**(code **)(*param_1 + 0x310))(param_1);
      FUN_1484aae24(uVar3,uVar2,&local_280,&local_258);
      FUN_1484b1fb6(param_4,&local_258);
      FUN_141082778(&local_258);
      uVar3 = 1;
      goto LAB_148571a4d;
    }
    local_258 = L"CopyMeshFromSkeletalMesh_RenderDataLDONotAvailable";
    local_250 = 0x32;
    FUN_1446e940c(&local_280,&local_258);
    local_258 = L"UGeometryScriptLibrary_MeshAssetFunctions";
    local_250 = 0x29;
    FUN_1446e940c(local_25c,&local_258);
    pwVar4 = L"CopyMeshFromSkeletalMesh: Renderdata for specified LOD is not available";
  }
  FUN_140208bae(&local_258,local_25c,&local_280,pwVar4);
  FUN_143ba90d7(param_5,2,&local_258);
  if (local_258 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_258 + 0x10))();
  }
  uVar3 = 0;
LAB_148571a4d:
  if ((local_38 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148571b56 FUN_148571b56 body=1446 status=ok
// SIG undefined FUN_148571b56(void)

void FUN_148571b56(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_2c8 [32];
  undefined8 local_2a8;
  undefined8 *local_2a0;
  longlong *local_298;
  longlong *local_290;
  undefined2 *local_288;
  undefined8 local_280;
  undefined8 local_278 [12];
  undefined8 local_218 [13];
  longlong local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a4;
  undefined2 local_1a0;
  undefined1 local_19e;
  longlong local_198;
  undefined8 local_190;
  undefined1 local_188;
  longlong local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined2 local_168;
  undefined1 local_166;
  longlong local_160;
  uint local_158;
  undefined4 uStack_154;
  undefined1 local_150;
  longlong local_148;
  ulonglong uStack_140;
  longlong local_138;
  undefined4 local_130;
  undefined1 local_12c;
  undefined8 local_128 [2];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8 [2];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3ff00000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0x3ff0000000000000;
  uStack_70 = 0x3ff0000000000000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  local_bc = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_bc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_bc);
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
  local_128[0] = 0;
  local_128[1] = 0;
  local_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0x3ff00000;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0x3ff0000000000000;
  uStack_e0 = 0x3ff0000000000000;
  local_d8 = 0x3ff0000000000000;
  uStack_d0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_128);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_128);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_138);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_138);
  }
  local_148 = 0;
  uStack_140 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_148);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_148);
  }
  plVar6 = &local_148;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
  }
  local_168 = 4;
  local_166 = 0;
  local_160 = 0;
  local_158 = local_158 & 0xffffff00;
  uStack_154 = 0x40400000;
  local_150 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_168);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_168);
  }
  local_170 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_170);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_170);
  }
  uVar1 = local_170;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1a0 = local_168;
  local_19e = local_166;
  local_198 = local_160;
  if ((local_160 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_188 = local_150;
  local_190 = CONCAT44(uStack_154,local_158);
  local_1b0 = local_138;
  if ((local_138 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_298 = &local_1b0;
  local_1a4 = local_12c;
  local_1a8 = local_130;
  local_2a0 = local_218;
  puVar4 = local_128;
  puVar5 = local_2a0;
  for (lVar3 = 0xc; uVar2 = local_bc, local_2a8 = local_c8, lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = local_b8;
  puVar5 = local_278;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_280 = uVar1;
  local_288 = &local_1a0;
  local_290 = plVar6;
  FUN_1485720fe(&local_180,local_58,local_278,uVar2);
  if (&local_180 == param_3) {
    if (local_180 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_180;
    local_180 = 0;
    *(undefined4 *)(param_3 + 1) = local_178;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_174;
  }
  FUN_148582756(local_148,uStack_140 & 0xffffffff);
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485720fe FUN_1485720fe body=477 status=ok
// SIG undefined FUN_1485720fe(void)

undefined8 *
FUN_1485720fe(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
             undefined8 param_5,undefined8 *param_6,longlong *param_7,undefined8 param_8,
             undefined2 *param_9,longlong param_10)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 *local_170;
  longlong *local_168;
  undefined8 local_160;
  undefined2 *local_158;
  longlong local_150;
  undefined8 local_148 [12];
  undefined8 local_e8 [13];
  longlong local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined2 local_70;
  undefined1 local_6e;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar3 = param_10 + 0x28;
  if (param_10 == 0) {
    lVar3 = 0;
  }
  local_70 = *param_9;
  local_6e = *(undefined1 *)(param_9 + 1);
  local_68 = *(longlong *)(param_9 + 4);
  if ((local_68 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_58 = *(undefined1 *)(param_9 + 0xc);
  local_60 = *(undefined8 *)(param_9 + 8);
  local_80 = *param_7;
  if ((local_80 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_74 = *(undefined1 *)((longlong)param_7 + 0xc);
  local_168 = &local_80;
  local_78 = (undefined4)param_7[1];
  local_170 = local_e8;
  puVar2 = local_170;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_6;
    param_6 = param_6 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar2 = local_148;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  local_158 = &local_70;
  local_160 = param_8;
  local_178 = param_5;
  local_150 = lVar3;
  FUN_148576408(&local_50,param_2,local_148,param_4);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_148576d54(local_50,*(undefined1 *)((longlong)param_9 + 1),param_1);
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_198);
  }
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1485722dc FUN_1485722dc body=1108 status=ok
// SIG undefined FUN_1485722dc(void)

void FUN_1485722dc(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_298 [32];
  void **local_278;
  void **local_270;
  undefined8 local_268;
  undefined8 local_258 [13];
  void *local_1f0;
  int local_1e8;
  undefined4 local_1e4;
  void *local_1e0;
  int local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined1 uStack_1b0;
  undefined4 uStack_1af;
  undefined4 uStack_1ab;
  undefined1 local_1a0 [144];
  undefined8 local_110;
  void *local_108;
  ulonglong uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 uStack_e0;
  undefined1 uStack_df;
  undefined1 uStack_de;
  undefined1 uStack_dd;
  undefined4 uStack_dc;
  undefined1 local_d8;
  undefined4 uStack_d7;
  undefined4 uStack_d3;
  void *local_c8;
  ulonglong uStack_c0;
  undefined4 local_ac;
  undefined8 local_a8 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_298;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0x3ff00000;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  local_ac = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ac);
  }
  local_c8 = (void *)0x0;
  uStack_c0 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  local_108 = (void *)0x0;
  uStack_100 = 0;
  local_f8 = CONCAT31(local_f8._1_3_,4);
  uStack_f0 = 0x4046800000000000;
  local_e8 = 0x3ff0000000000000;
  uStack_e0 = 4;
  uStack_df = 0;
  uStack_de = 0;
  uStack_dc = 0;
  local_d8 = 1;
  uStack_d7 = 0x101;
  uStack_d3 = 0x1010100;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_108);
  }
  local_110 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_110);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_110);
  }
  pvVar2 = local_108;
  uVar1 = local_110;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1e0 = (void *)0x0;
  lVar5 = (longlong)(int)uStack_100;
  local_1d8 = (int)uStack_100;
  if (lVar5 == 0) {
    local_1d4 = 0;
  }
  else {
    FUN_148581400(&local_1e0,uStack_100 & 0xffffffff,0);
    memcpy(local_1e0,pvVar2,lVar5 * 0x48);
  }
  pvVar2 = local_c8;
  uStack_1b8 = CONCAT13(uStack_dd,CONCAT12(uStack_de,CONCAT11(uStack_df,uStack_e0)));
  uStack_1b0 = local_d8;
  uStack_1af = uStack_d7;
  uStack_1ab = uStack_d3;
  uStack_1c0 = (undefined4)local_e8;
  uStack_1bc = local_e8._4_4_;
  uStack_1b4 = uStack_dc;
  local_1d0 = local_f8;
  uStack_1cc = uStack_f4;
  uStack_1c8 = (undefined4)uStack_f0;
  uStack_1c4 = uStack_f0._4_4_;
  local_1f0 = (void *)0x0;
  lVar5 = (longlong)(int)uStack_c0;
  local_1e8 = (int)uStack_c0;
  if (lVar5 == 0) {
    local_1e4 = 0;
  }
  else {
    FUN_1457242e8(&local_1f0,uStack_c0 & 0xffffffff,0);
    memcpy(local_1f0,pvVar2,lVar5 << 3);
  }
  uVar3 = local_ac;
  puVar4 = local_a8;
  puVar6 = local_258;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  local_268 = uVar1;
  local_270 = &local_1e0;
  local_278 = &local_1f0;
  FUN_143baf690(local_1a0,local_40,local_258,uVar3);
  FUN_148572732(param_3,local_1a0);
  if (local_108 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148572732 FUN_148572732 body=475 status=ok
// SIG undefined FUN_148572732(void)

longlong * FUN_148572732(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  *(char *)(param_1 + 1) = (char)param_2[1];
  lVar2 = param_2[2];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[2];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[2] = lVar2;
  *(char *)(param_1 + 3) = (char)param_2[3];
  lVar2 = param_2[4];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[4];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[4] = lVar2;
  *(char *)(param_1 + 5) = (char)param_2[5];
  lVar2 = param_2[6];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[6];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[6] = lVar2;
  *(char *)(param_1 + 7) = (char)param_2[7];
  lVar2 = param_2[8];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[8];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[8] = lVar2;
  *(char *)(param_1 + 9) = (char)param_2[9];
  lVar2 = param_2[10];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[10];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[10] = lVar2;
  *(char *)(param_1 + 0xb) = (char)param_2[0xb];
  lVar2 = param_2[0xc];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[0xc];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[0xc] = lVar2;
  *(char *)(param_1 + 0xd) = (char)param_2[0xd];
  lVar2 = param_2[0xe];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[0xe];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[0xe] = lVar2;
  *(char *)(param_1 + 0xf) = (char)param_2[0xf];
  lVar2 = param_2[0x10];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[0x10];
    }
  }
  param_1[0x10] = lVar2;
  *(char *)(param_1 + 0x11) = (char)param_2[0x11];
  return param_1;
}



// FUNCTION 14857290e FUN_14857290e body=1594 status=ok
// SIG undefined FUN_14857290e(void)

void FUN_14857290e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_388 [32];
  undefined8 *local_368;
  longlong *local_360;
  undefined1 *local_358;
  undefined8 *local_350;
  undefined8 local_348;
  undefined8 local_338 [12];
  undefined8 local_2d8 [13];
  longlong local_270;
  undefined4 local_268;
  undefined1 local_264;
  undefined1 local_260 [8];
  undefined1 local_258;
  undefined8 local_250;
  longlong local_248;
  undefined1 local_240;
  undefined8 local_238;
  longlong local_230;
  undefined1 local_228;
  undefined8 local_220;
  longlong local_218;
  undefined1 local_210;
  undefined8 local_208;
  longlong local_200;
  undefined1 local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  uint local_1d8;
  undefined8 local_1d0;
  undefined2 local_1c4;
  undefined2 uStack_1c2;
  undefined4 uStack_1c0;
  uint local_1bc;
  undefined1 local_1b8 [8];
  undefined1 local_1b0;
  undefined8 local_1a8;
  longlong lStack_1a0;
  undefined1 local_198;
  undefined8 local_190;
  longlong lStack_188;
  undefined1 local_180;
  undefined8 local_178;
  longlong lStack_170;
  undefined1 local_168;
  undefined8 local_160;
  longlong lStack_158;
  undefined1 local_150;
  undefined8 local_148;
  longlong lStack_140;
  longlong local_138;
  undefined4 local_130;
  undefined1 local_12c;
  undefined8 local_128 [2];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8 [2];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_388;
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3ff00000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0x3ff0000000000000;
  uStack_70 = 0x3ff0000000000000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  local_bc = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_bc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_bc);
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
  local_128[0] = 0;
  local_128[1] = 0;
  local_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0x3ff00000;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0x3ff0000000000000;
  uStack_e0 = 0x3ff0000000000000;
  local_d8 = 0x3ff0000000000000;
  uStack_d0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_128);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_128);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_138);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_138);
  }
  local_1b8[0] = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  lStack_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  lStack_188 = 0;
  local_180 = 0;
  local_178 = 0;
  lStack_170 = 0;
  local_168 = 0;
  local_160 = 0;
  lStack_158 = 0;
  local_150 = 0;
  local_148 = 0;
  lStack_140 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1b8);
  }
  local_1c4 = 0;
  uStack_1c0 = 0x40400000;
  local_1bc = local_1bc & 0xffffff00;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c4);
  }
  local_1d0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1d0);
  }
  uVar1 = local_1d0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1e0 = CONCAT44(uStack_1c0,CONCAT22(uStack_1c2,local_1c4));
  local_1d8 = local_1bc;
  local_260[0] = local_1b8[0];
  local_258 = local_1b0;
  local_250 = local_1a8;
  local_248 = lStack_1a0;
  if (lStack_1a0 != 0) {
    LOCK();
    *(int *)(lStack_1a0 + 8) = *(int *)(lStack_1a0 + 8) + 1;
    UNLOCK();
  }
  local_240 = local_198;
  local_238 = local_190;
  local_230 = lStack_188;
  if (lStack_188 != 0) {
    LOCK();
    *(int *)(lStack_188 + 8) = *(int *)(lStack_188 + 8) + 1;
    UNLOCK();
  }
  local_228 = local_180;
  local_220 = local_178;
  local_218 = lStack_170;
  if (lStack_170 != 0) {
    LOCK();
    *(int *)(lStack_170 + 8) = *(int *)(lStack_170 + 8) + 1;
    UNLOCK();
  }
  local_210 = local_168;
  local_208 = local_160;
  local_200 = lStack_158;
  if (lStack_158 != 0) {
    LOCK();
    *(int *)(lStack_158 + 8) = *(int *)(lStack_158 + 8) + 1;
    UNLOCK();
  }
  local_1f8 = local_150;
  local_1f0 = local_148;
  local_1e8 = lStack_140;
  if (lStack_140 != 0) {
    LOCK();
    *(int *)(lStack_140 + 8) = *(int *)(lStack_140 + 8) + 1;
    UNLOCK();
  }
  local_270 = local_138;
  if ((local_138 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_360 = &local_270;
  local_264 = local_12c;
  local_268 = local_130;
  local_368 = local_2d8;
  puVar6 = local_128;
  puVar7 = local_368;
  for (lVar5 = 0xc; uVar3 = local_bc, uVar2 = local_c8, lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar6 = local_b8;
  puVar7 = local_338;
  for (lVar5 = 0xc; uVar4 = local_58, lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_348 = uVar1;
  local_350 = &local_1e0;
  local_358 = local_260;
  FUN_148572f4a(local_58,local_338,uVar3,uVar2);
  *param_3 = uVar4;
  FUN_148573142(local_1b8);
  if ((local_50 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148572f4a FUN_148572f4a body=338 status=ok
// SIG undefined FUN_148572f4a(void)

undefined8
FUN_148572f4a(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,longlong *param_6,undefined8 param_7,undefined8 *param_8,
             longlong param_9)

{
  longlong lVar1;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  longlong *local_118;
  undefined1 *local_110;
  undefined8 *local_108;
  longlong local_100;
  longlong local_f0;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined1 local_e0 [128];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar1 = param_9 + 0x28;
  if (param_9 == 0) {
    lVar1 = 0;
  }
  local_60 = *param_8;
  local_58 = *(undefined4 *)(param_8 + 1);
  FUN_14857309e(local_e0,param_7);
  local_f0 = *param_6;
  if ((local_f0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_e4 = *(undefined1 *)((longlong)param_6 + 0xc);
  local_118 = &local_f0;
  local_e8 = (undefined4)param_6[1];
  local_108 = &local_60;
  local_120 = param_5;
  local_128 = param_4;
  local_110 = local_e0;
  local_100 = lVar1;
  FUN_148576ee9(&local_50,param_1,param_2,param_3);
  FUN_148577a24(local_50,param_7,param_1);
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,1);
  }
  FUN_148573142(param_7);
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857309e FUN_14857309e body=163 status=ok
// SIG undefined FUN_14857309e(void)

void FUN_14857309e(undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  param_1[8] = param_2[8];
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  lVar1 = *(longlong *)(param_2 + 0x18);
  *(longlong *)(param_1 + 0x18) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0x20] = param_2[0x20];
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  lVar1 = *(longlong *)(param_2 + 0x30);
  *(longlong *)(param_1 + 0x30) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0x38] = param_2[0x38];
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  lVar1 = *(longlong *)(param_2 + 0x48);
  *(longlong *)(param_1 + 0x48) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0x50] = param_2[0x50];
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  lVar1 = *(longlong *)(param_2 + 0x60);
  *(longlong *)(param_1 + 0x60) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0x68] = param_2[0x68];
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  lVar1 = *(longlong *)(param_2 + 0x78);
  *(longlong *)(param_1 + 0x78) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 148573142 FUN_148573142 body=214 status=ok
// SIG undefined FUN_148573142(void)

void FUN_148573142(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x78);
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
  plVar3 = *(longlong **)(param_1 + 0x60);
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
  plVar3 = *(longlong **)(param_1 + 0x48);
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
                    /* WARNING: Could not recover jumptable at 0x00014857320c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148573218 FUN_148573218 body=167 status=ok
// SIG undefined FUN_148573218(void)

void FUN_148573218(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [47];
  byte local_19;
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
  uVar1 = 0x100;
  if ((ulonglong)local_19 < 10) {
    uVar1 = (&DAT_14af3e808)[local_19];
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485732c0 FUN_1485732c0 body=442 status=ok
// SIG undefined FUN_1485732c0(void)

void FUN_1485732c0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_40 [16];
  longlong *local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_28;
  FUN_14857347c(local_40,local_1c,local_20,local_24);
  FUN_1485735e2(param_3,local_40);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857347c FUN_14857347c body=357 status=ok
// SIG undefined FUN_14857347c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_14857347c(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 7;
  plVar5 = (longlong *)FUN_14001cc68(0x28,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14af3e310;
  *(undefined4 *)(plVar5 + 2) = 0x10;
  *(undefined8 *)((longlong)plVar5 + 0x14) = 0x4334000000000000;
  *(undefined8 *)((longlong)plVar5 + 0x1c) = 0x41700000;
  if (plVar5 == (longlong *)0x0) {
    _DAT_0000001c = param_5;
    _DAT_00000010 = param_2;
    _DAT_00000014 = param_3;
    _DAT_00000018 = param_4;
    *(undefined8 *)(param_1 + 8) = 0x10;
    return param_1;
  }
  LOCK();
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  UNLOCK();
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  *(undefined4 *)(plVar5 + 2) = param_2;
  *(undefined4 *)((longlong)plVar5 + 0x14) = param_3;
  *(undefined4 *)(plVar5 + 3) = param_4;
  *(undefined4 *)((longlong)plVar5 + 0x1c) = param_5;
  LOCK();
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  UNLOCK();
  plVar4 = *(longlong **)(param_1 + 0x10);
  *(longlong **)(param_1 + 8) = plVar5 + 2;
  if (plVar5 == plVar4) {
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1485735c2;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    *(longlong **)(param_1 + 0x10) = plVar5;
    if (plVar4 == (longlong *)0x0) goto LAB_1485735c2;
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) goto LAB_1485735c2;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_1485735c2:
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return param_1;
}



// FUNCTION 1485735e2 FUN_1485735e2 body=103 status=ok
// SIG undefined FUN_1485735e2(void)

undefined1 * FUN_1485735e2(undefined1 *param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = *param_2;
  if (param_1 != param_2) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    plVar2 = *(longlong **)(param_2 + 0x10);
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar2 != plVar3) {
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(longlong **)(param_1 + 0x10) = plVar2;
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
    }
  }
  return param_1;
}



// FUNCTION 14857364a FUN_14857364a body=435 status=ok
// SIG undefined FUN_14857364a(void)

void FUN_14857364a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40 [16];
  longlong *local_30;
  undefined1 local_25;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_25;
  FUN_1485737fe(local_40,local_1c,local_20,local_24);
  FUN_1485735e2(param_3,local_40);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485737fe FUN_1485737fe body=341 status=ok
// SIG undefined FUN_1485737fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1485737fe(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 4;
  plVar5 = (longlong *)FUN_14001cc68(0x28,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14af3e310;
  *(undefined4 *)(plVar5 + 2) = 0x10;
  *(undefined8 *)((longlong)plVar5 + 0x14) = 0x4334000000000000;
  *(undefined8 *)((longlong)plVar5 + 0x1c) = 0x41700000;
  if (plVar5 == (longlong *)0x0) {
    DAT_00000020 = param_5;
    _DAT_00000010 = param_2;
    _DAT_00000014 = param_3;
    _DAT_00000018 = param_4;
    *(undefined8 *)(param_1 + 8) = 0x10;
    return param_1;
  }
  LOCK();
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  UNLOCK();
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  *(undefined4 *)(plVar5 + 2) = param_2;
  *(undefined4 *)((longlong)plVar5 + 0x14) = param_3;
  *(undefined4 *)(plVar5 + 3) = param_4;
  *(undefined1 *)(plVar5 + 4) = param_5;
  LOCK();
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  UNLOCK();
  plVar4 = *(longlong **)(param_1 + 0x10);
  *(longlong **)(param_1 + 8) = plVar5 + 2;
  if (plVar5 == plVar4) {
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_148573934;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    *(longlong **)(param_1 + 0x10) = plVar5;
    if (plVar4 == (longlong *)0x0) goto LAB_148573934;
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) goto LAB_148573934;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_148573934:
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return param_1;
}



// FUNCTION 148573954 FUN_148573954 body=210 status=ok
// SIG undefined FUN_148573954(void)

void FUN_148573954(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  longlong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_148573a28(local_38,local_1c);
  FUN_1485735e2(param_3,local_38);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148573a28 FUN_148573a28 body=270 status=ok
// SIG undefined FUN_148573a28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_148573a28(undefined1 *param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 0xc;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14af3e3b0;
  *(undefined4 *)(plVar5 + 2) = 0;
  if (plVar5 == (longlong *)0x0) {
    _DAT_00000010 = param_2;
    *(undefined8 *)(param_1 + 8) = 0x10;
    return param_1;
  }
  LOCK();
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  UNLOCK();
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  *(undefined4 *)(plVar5 + 2) = param_2;
  LOCK();
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  UNLOCK();
  plVar4 = *(longlong **)(param_1 + 0x10);
  *(longlong **)(param_1 + 8) = plVar5 + 2;
  if (plVar5 == plVar4) {
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_148573b17;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    *(longlong **)(param_1 + 0x10) = plVar5;
    if (plVar4 == (longlong *)0x0) goto LAB_148573b17;
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) goto LAB_148573b17;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_148573b17:
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return param_1;
}



// FUNCTION 148573b36 FUN_148573b36 body=502 status=ok
// SIG undefined FUN_148573b36(void)

void FUN_148573b36(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_40 [16];
  longlong *local_30;
  undefined1 local_25;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_24;
  FUN_148573d2e(local_40,local_19,local_1a,local_20);
  FUN_1485735e2(param_3,local_40);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148573d2e FUN_148573d2e body=339 status=ok
// SIG undefined FUN_148573d2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_148573d2e(undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
             undefined4 param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 6;
  plVar5 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14af3e330;
  plVar5[2] = 0;
  plVar5[3] = 0;
  *(undefined4 *)((longlong)plVar5 + 0x14) = 0x3f800000;
  if (plVar5 == (longlong *)0x0) {
    _DAT_00000018 = param_5;
    DAT_00000010 = param_2;
    DAT_00000011 = param_3;
    _DAT_00000014 = param_4;
    *(undefined8 *)(param_1 + 8) = 0x10;
    return param_1;
  }
  LOCK();
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  UNLOCK();
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  *(undefined1 *)(plVar5 + 2) = param_2;
  *(undefined1 *)((longlong)plVar5 + 0x11) = param_3;
  *(undefined4 *)((longlong)plVar5 + 0x14) = param_4;
  *(undefined4 *)(plVar5 + 3) = param_5;
  LOCK();
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  UNLOCK();
  plVar4 = *(longlong **)(param_1 + 0x10);
  *(longlong **)(param_1 + 8) = plVar5 + 2;
  if (plVar5 == plVar4) {
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_148573e62;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    *(longlong **)(param_1 + 0x10) = plVar5;
    if (plVar4 == (longlong *)0x0) goto LAB_148573e62;
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) goto LAB_148573e62;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_148573e62:
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return param_1;
}



// FUNCTION 148573e82 FUN_148573e82 body=128 status=ok
// SIG undefined FUN_148573e82(void)

void FUN_148573e82(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  local_28[0] = 3;
  FUN_1485735e2(param_3,local_28);
  plVar3 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_18)(plStack_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


