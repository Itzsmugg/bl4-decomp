// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1477b2e24 FUN_1477b2e24 body=36 status=ok
// SIG undefined FUN_1477b2e24(void)

undefined8 FUN_1477b2e24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1477b2e64 FUN_1477b2e64 body=93 status=ok
// SIG undefined FUN_1477b2e64(void)

void FUN_1477b2e64(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a566c20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1477b2ec2 FUN_1477b2ec2 body=123 status=ok
// SIG undefined FUN_1477b2ec2(void)

void FUN_1477b2ec2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a566c20;
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



// FUNCTION 1477b2f4a FUN_1477b2f4a body=21 status=ok
// SIG undefined FUN_1477b2f4a(void)

undefined8 FUN_1477b2f4a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1477b2f60 FUN_1477b2f60 body=34 status=ok
// SIG undefined FUN_1477b2f60(void)

undefined8 FUN_1477b2f60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1477b2f86 FUN_1477b2f86 body=132 status=ok
// SIG undefined FUN_1477b2f86(void)

void FUN_1477b2f86(longlong param_1,int param_2)

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



// FUNCTION 1477b3014 FUN_1477b3014 body=273 status=ok
// SIG undefined FUN_1477b3014(void)

void FUN_1477b3014(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = FUN_144a61b4f();
  if (cVar2 != '\0') {
    FUN_1477b3c50(&local_30);
    uVar6 = (ulonglong)local_20;
    lVar4 = local_30;
    iVar3 = local_28;
    if ((int)local_20 < local_28 && -1 < (int)local_20) {
      do {
        lVar1 = *(longlong *)(lVar4 + (uVar6 & 0xffffffff) * 8);
        uVar5 = (uint)uVar6;
        if (lVar1 != 0) {
          FUN_1477b3340(param_1,(ulonglong)*(uint *)(lVar1 + 0xc) | 0xffffffff00000000);
          lVar4 = local_30;
          iVar3 = local_28;
          uVar5 = local_20;
        }
        uVar6 = (longlong)(int)uVar5;
        do {
          uVar7 = uVar6;
          uVar6 = uVar7 + 1;
          local_20 = (uint)uVar6;
          if ((longlong)iVar3 <= (longlong)uVar6) break;
        } while (*(longlong *)(lVar4 + uVar6 * 8) == 0);
      } while ((-2 < (longlong)uVar7) && ((int)local_20 < iVar3));
    }
    if (lVar4 != 0) {
      FUN_1400020a8();
    }
    iVar3 = *(int *)(param_1 + 0x3c);
    FUN_145caaaad(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
    if ((iVar3 < 0) && (*(int *)(param_1 + 0x3c) != 0)) {
      FUN_1477cbe34(param_1 + 0x30);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477b3126 FUN_1477b3126 body=398 status=ok
// SIG undefined FUN_1477b3126(void)

void FUN_1477b3126(longlong param_1,ulonglong param_2,undefined4 param_3,undefined1 param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  undefined4 local_d0;
  undefined1 local_cc;
  ulonglong local_c8;
  ulonglong *local_c0;
  ulonglong *local_b8;
  undefined1 local_ac [4];
  undefined1 *local_a8;
  undefined8 local_98;
  undefined **local_88;
  longlong local_80;
  ulonglong local_78;
  undefined4 local_70;
  undefined1 local_6c;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_38;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c8 = param_2;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    lVar3 = FUN_147d67a16(param_1);
    if (lVar3 != 0) {
      local_98 = 0;
      local_88 = &PTR_LAB_14a570230;
      local_a8 = &LAB_143350868;
      local_80 = param_1;
      local_78 = param_2;
      local_70 = param_3;
      local_6c = param_4;
      FUN_1477b32b6(lVar3);
    }
  }
  else {
    if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
      uVar6 = (uint)param_2;
      iVar2 = (int)(param_2 >> 0x20);
      lVar3 = param_1 + 0x78;
      if (*(longlong *)(param_1 + 0x80) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x80);
      }
      iVar4 = *(int *)(lVar3 + (ulonglong)
                               (*(int *)(param_1 + 0x88) - 1U &
                               (uVar6 * 0x40 + iVar2 + ((uint)(param_2 >> 2) & 0x3fffffff) +
                                0x9e3779b9 ^ uVar6)) * 4);
      if (iVar4 != -1) {
        lVar3 = *(longlong *)(param_1 + 0x40);
        do {
          lVar5 = (longlong)iVar4 * 0x20;
          if ((*(uint *)(lVar3 + lVar5) == uVar6) && (*(int *)(lVar3 + 4 + lVar5) == iVar2))
          goto LAB_1477b3254;
          iVar4 = *(int *)(lVar5 + lVar3 + 0x18);
        } while (iVar4 != -1);
      }
    }
    local_b8 = &local_d8;
    local_c0 = &local_c8;
    local_d8 = param_2;
    local_d0 = param_3;
    local_cc = param_4;
    FUN_1477cb5ec((longlong *)(param_1 + 0x40),local_ac);
    local_58 = 0;
    local_48 = &PTR_LAB_14a570210;
    local_38 = local_c8;
    local_68 = FUN_143350800;
    local_40 = param_1;
    local_30 = param_3;
    local_2c = param_4;
    FUN_1415826cc();
  }
LAB_1477b3254:
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b32b6 FUN_1477b32b6 body=137 status=ok
// SIG undefined FUN_1477b32b6(void)

void FUN_1477b32b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  
  puVar10 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar10 = 0;
  lVar2 = *param_2;
  puVar10[2] = lVar2;
  puVar10[4] = param_2[2];
  param_2[2] = 0;
  lVar7 = param_2[4];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
  lVar8 = param_2[5];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x34);
  lVar9 = param_2[7];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(int *)(puVar10 + 8) = (int)param_2[6];
  *(undefined4 *)((longlong)puVar10 + 0x44) = uVar5;
  *(int *)(puVar10 + 9) = (int)lVar9;
  *(undefined4 *)((longlong)puVar10 + 0x4c) = uVar6;
  *(int *)(puVar10 + 6) = (int)lVar7;
  *(undefined4 *)((longlong)puVar10 + 0x34) = uVar3;
  *(int *)(puVar10 + 7) = (int)lVar8;
  *(undefined4 *)((longlong)puVar10 + 0x3c) = uVar4;
  if (lVar2 != 0) {
    *param_2 = 0;
  }
  LOCK();
  puVar1 = *(undefined8 **)(param_1 + 0xe30);
  *(undefined8 **)(param_1 + 0xe30) = puVar10;
  UNLOCK();
  *puVar1 = puVar10;
  if (*param_2 != 0) {
    plVar11 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar11 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x0001477b3333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar11 + 0x10))(plVar11);
    return;
  }
  return;
}



// FUNCTION 1477b3340 FUN_1477b3340 body=329 status=ok
// SIG undefined FUN_1477b3340(void)

void FUN_1477b3340(longlong param_1,ulonglong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_c8 [40];
  ulonglong local_a0;
  undefined1 *local_98;
  undefined8 local_88;
  undefined **local_78;
  longlong local_70;
  ulonglong local_68;
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  ulonglong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = param_2;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    lVar3 = FUN_147d67a16(param_1);
    if (lVar3 != 0) {
      local_88 = 0;
      local_78 = &PTR_LAB_14a570270;
      local_98 = &LAB_143350930;
      local_70 = param_1;
      local_68 = param_2;
      FUN_1477b32b6(lVar3);
    }
  }
  else if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
    uVar4 = (uint)param_2;
    iVar2 = (int)(param_2 >> 0x20);
    lVar3 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x80);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x88) - 1U &
                             (uVar4 * 0x40 + iVar2 + ((uint)(param_2 >> 2) & 0x3fffffff) +
                              0x9e3779b9 ^ uVar4)) * 4);
    if (iVar5 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x40);
      do {
        lVar6 = (longlong)iVar5 * 0x20;
        if ((*(uint *)(lVar3 + lVar6) == uVar4) && (*(int *)(lVar3 + 4 + lVar6) == iVar2)) {
          FUN_1477cbae4((longlong *)(param_1 + 0x40),&local_a0);
          local_48 = 0;
          local_38 = &PTR_LAB_14a570250;
          local_58 = FUN_1433508d0;
          local_30 = param_1;
          local_28 = param_2;
          FUN_1415826cc();
          break;
        }
        iVar5 = *(int *)(lVar6 + lVar3 + 0x18);
      } while (iVar5 != -1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477b348a FUN_1477b348a body=233 status=ok
// SIG undefined FUN_1477b348a(void)

byte FUN_1477b348a(longlong param_1,ulonglong param_2)

{
  uint *puVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  uint uVar7;
  byte bVar8;
  
  cVar2 = FUN_144a61b4f();
  uVar7 = (uint)param_2;
  if (cVar2 == '\0') {
    lVar3 = FUN_147d67a6c(param_1);
    bVar8 = (byte)param_1;
    if (lVar3 != 0) {
      if ((longlong)*(int *)(lVar3 + 400) == 0) {
        bVar8 = 0;
      }
      else {
        puVar5 = *(uint **)(lVar3 + 0x188);
        puVar1 = puVar5 + (longlong)*(int *)(lVar3 + 400) * 2;
        do {
          bVar8 = puVar5[1] == 0xffffffff && *puVar5 == uVar7;
          if ((bool)bVar8) break;
          puVar5 = puVar5 + 2;
        } while (puVar5 != puVar1);
      }
    }
    bVar8 = lVar3 != 0 & bVar8;
  }
  else {
    if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
      lVar3 = param_1 + 0x78;
      if (*(longlong *)(param_1 + 0x80) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x80);
      }
      iVar4 = *(int *)(lVar3 + (ulonglong)
                               (*(int *)(param_1 + 0x88) - 1U &
                               (uVar7 * 0x40 + ((uint)(param_2 >> 2) & 0x3fffffff) + 0x9e3779b8 ^
                               uVar7)) * 4);
      if (iVar4 != -1) {
        lVar3 = *(longlong *)(param_1 + 0x40);
        do {
          lVar6 = (longlong)iVar4 * 0x20;
          if (*(int *)(lVar3 + 4 + lVar6) == -1 && *(uint *)(lVar3 + lVar6) == uVar7) {
            return 1;
          }
          iVar4 = *(int *)(lVar6 + lVar3 + 0x18);
        } while (iVar4 != -1);
        return 0;
      }
    }
    bVar8 = 0;
  }
  return bVar8;
}



// FUNCTION 1477b3574 FUN_1477b3574 body=255 status=ok
// SIG undefined FUN_1477b3574(void)

undefined8 *
FUN_1477b3574(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 local_60 [24];
  undefined1 local_48 [8];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = FUN_147d679b2();
  lVar4 = FUN_147d67a16(param_1);
  if (lVar4 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
  }
  local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x3f800000);
  FUN_1477b3674(lVar4,local_48,param_4,param_5);
  FUN_147038394(param_2,local_48);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  FUN_1470383c2(local_60,param_2);
  local_68 = local_60;
  FUN_1477b3736(uVar3,param_3,param_5,0);
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1477b3674 FUN_1477b3674 body=193 status=ok
// SIG undefined FUN_1477b3674(void)

longlong *
FUN_1477b3674(longlong param_1,longlong *param_2,int param_3,int param_4,undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0xe10) + 0x220);
  iVar4 = iVar3;
  if (param_3 < iVar3) {
    iVar4 = param_3;
  }
  iVar6 = param_4 * param_3 * DAT_14c7610ec;
  plVar5 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a136b70;
  FUN_147037f74(plVar5 + 2,iVar6 * ((param_3 + -1 + iVar3) / iVar4),param_5);
  *param_2 = (longlong)(plVar5 + 2);
  param_2[1] = (longlong)plVar5;
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
  return param_2;
}



// FUNCTION 1477b3736 FUN_1477b3736 body=219 status=ok
// SIG undefined FUN_1477b3736(void)

void FUN_1477b3736(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [24];
  byte local_50;
  undefined5 local_48;
  undefined3 uStack_43;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1470383f0(local_68,param_5);
  local_50 = 0;
  local_48 = (undefined5)param_2;
  uStack_43 = (undefined3)((ulonglong)param_2 >> 0x28);
  local_40 = param_3;
  local_3c = param_4;
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,8);
  *puVar2 = 0;
  *(byte *)(puVar2 + 4) = local_50;
  (*(code *)(&PTR_LAB_14a56f480)[local_50])(puVar2 + 1,local_68);
  *(ulonglong *)((longlong)puVar2 + 0x2d) = CONCAT17(local_3c,CONCAT43(local_40,uStack_43));
  puVar2[5] = CONCAT35(uStack_43,local_48);
  LOCK();
  puVar1 = *(undefined8 **)(param_1 + 0x2b0);
  *(undefined8 **)(param_1 + 0x2b0) = puVar2;
  UNLOCK();
  *puVar1 = puVar2;
  (*(code *)(&PTR_LAB_14a56f490)[local_50])(local_68);
  FUN_145be9032(param_5);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b3812 FUN_1477b3812 body=206 status=ok
// SIG undefined FUN_1477b3812(void)

undefined8 *
FUN_1477b3812(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_147d679b2();
  lVar2 = FUN_147d67a16(param_1);
  if (lVar2 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  local_48 = (undefined8 *)CONCAT44(local_48._4_4_,param_6);
  FUN_1477b3674(lVar2,param_2,param_4,param_5);
  local_40 = *param_2;
  local_38 = param_2[1];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  local_48 = &local_40;
  FUN_1477b38e2(uVar1,param_3,param_5,0);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1477b38e2 FUN_1477b38e2 body=241 status=ok
// SIG undefined FUN_1477b38e2(void)

void FUN_1477b38e2(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  byte local_70;
  undefined5 local_68;
  undefined3 uStack_63;
  undefined4 local_60;
  undefined1 local_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar5 = *param_5;
  uVar6 = param_5[1];
  *param_5 = 0;
  param_5[1] = 0;
  local_70 = 1;
  local_68 = (undefined5)param_2;
  uStack_63 = (undefined3)((ulonglong)param_2 >> 0x28);
  local_60 = param_3;
  local_5c = param_4;
  puVar7 = (undefined8 *)FUN_14001cc68(0x38,8);
  *puVar7 = 0;
  *(undefined1 *)(puVar7 + 4) = 1;
  puVar7[1] = uVar5;
  puVar7[2] = uVar6;
  local_88 = 0;
  uStack_80 = 0;
  *(ulonglong *)((longlong)puVar7 + 0x2d) = CONCAT17(local_5c,CONCAT43(local_60,uStack_63));
  puVar7[5] = CONCAT35(uStack_63,local_68);
  LOCK();
  puVar3 = *(undefined8 **)(param_1 + 0x2b0);
  *(undefined8 **)(param_1 + 0x2b0) = puVar7;
  UNLOCK();
  *puVar3 = puVar7;
  (*(code *)(&PTR_LAB_14a56f490)[local_70])(&local_88);
  plVar4 = (longlong *)param_5[1];
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
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b39d4 FUN_1477b39d4 body=303 status=ok
// SIG undefined FUN_1477b39d4(void)

void FUN_1477b39d4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [3];
  longlong local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1477b3b04(param_1,&local_60,param_2);
  lVar3 = local_60;
  if ((longlong)local_58 != 0) {
    uVar2 = FUN_147d679b2(param_1);
    lVar4 = 0;
    do {
      cVar1 = *(char *)(local_60 + 0x18 + lVar4);
      if (cVar1 == '\x01') {
        local_88 = *(undefined8 *)(local_60 + lVar4);
        local_80 = *(undefined8 *)(local_60 + 8 + lVar4);
        *(undefined8 *)(local_60 + lVar4) = 0;
        ((undefined8 *)(local_60 + lVar4))[1] = 0;
        local_98 = &local_88;
        FUN_1477b38e2(uVar2,*(undefined8 *)(local_60 + 0x20 + lVar4),
                      *(undefined4 *)(local_60 + 0x2c + lVar4),
                      *(undefined1 *)(local_60 + 0x30 + lVar4));
      }
      else if (cVar1 == '\0') {
        FUN_1470383f0(local_78);
        local_98 = local_78;
        FUN_1477b3736(uVar2,*(undefined8 *)(local_60 + 0x20 + lVar4),
                      *(undefined4 *)(local_60 + 0x2c + lVar4),
                      *(undefined1 *)(local_60 + 0x30 + lVar4));
      }
      lVar4 = lVar4 + 0x38;
      lVar3 = local_60;
    } while ((longlong)local_58 * 0x38 - lVar4 != 0);
  }
  FUN_1477cbc26(lVar3,local_58);
  if (lVar3 != 0) {
    FUN_1400020a8(lVar3);
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477b3b04 FUN_1477b3b04 body=267 status=ok
// SIG undefined FUN_1477b3b04(void)

undefined8 * FUN_1477b3b04(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe0));
  if (*(int *)(param_1 + 0x98) != *(int *)(param_1 + 0xc4)) {
    lVar2 = param_1 + 200;
    if (*(longlong *)(param_1 + 0xd0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xd0);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0xd8) - 1U &
                             (int)param_3 + (int)((ulonglong)param_3 >> 0x20) * 0x17) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x90) + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar1 * 0x20) == param_3) {
          if (lVar2 + 8 != 0 && lVar2 != 0) {
            *param_2 = *(undefined8 *)(lVar2 + 8);
            *(undefined8 *)(lVar2 + 8) = 0;
            *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar2 + 0x10);
            *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(lVar2 + 0x14);
            *(undefined8 *)(lVar2 + 0x10) = 0;
            FUN_1477cbc26(0,0);
            *(undefined4 *)(lVar2 + 0x10) = 0;
            if (*(int *)(lVar2 + 0x14) != 0) {
              FUN_1477cbd62(lVar2 + 8);
            }
            goto LAB_1477b3b3c;
          }
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1477b3b3c:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe0));
  return param_2;
}



// FUNCTION 1477b3c10 FUN_1477b3c10 body=64 status=ok
// SIG undefined FUN_1477b3c10(void)

void FUN_1477b3c10(longlong param_1,undefined8 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe0));
  FUN_1477cbc58(param_1 + 0x90,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001477b3c49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe0));
  return;
}



// FUNCTION 1477b3c50 FUN_1477b3c50 body=107 status=ok
// SIG undefined FUN_1477b3c50(void)

longlong * FUN_1477b3c50(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_141155828();
  FUN_14123d74c(uVar2,param_1,1,0x10,uVar1 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 1477b3cbb FUN_1477b3cbb body=105 status=ok
// SIG undefined FUN_1477b3cbb(void)

void FUN_1477b3cbb(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  local_30[0] = param_2;
  FUN_144a787a6(local_28,param_3);
  FUN_1447cd2ec(param_1,local_30);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b3d25 FUN_1477b3d25 body=104 status=ok
// SIG undefined FUN_1477b3d25(void)

void FUN_1477b3d25(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a787a6(local_38);
  local_28 = param_3;
  FUN_1447cd2ec(param_1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b3d8e FUN_1477b3d8e body=96 status=ok
// SIG undefined FUN_1477b3d8e(void)

void FUN_1477b3d8e(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a787a6(local_28);
  FUN_1447cd2ec(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b3df6 FUN_1477b3df6 body=217 status=ok
// SIG undefined FUN_1477b3df6(void)

void FUN_1477b3df6(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_1407d9874(param_1 + 0x38,0);
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_1407d9874(param_1 + 0x60,0);
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_1407d9874(param_1 + 0x88,0);
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_1407d9874(param_1 + 0xb0,0);
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(int *)(param_1 + 0xe4) != 0) {
    FUN_1407d9874(param_1 + 0xd8,0);
  }
  FUN_1448a8284(param_1 + 0x48);
  FUN_1448a8284(param_1 + 0x70);
  FUN_1448a8284(param_1 + 0x98);
  FUN_1448a8284(param_1 + 0xc0);
  FUN_1448a8284(param_1 + 0xe8);
  return;
}



// FUNCTION 1477b3ed0 FUN_1477b3ed0 body=357 status=ok
// SIG undefined FUN_1477b3ed0(void)

void FUN_1477b3ed0(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  void *pvVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined8 local_70;
  code *local_68 [2];
  undefined8 *local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_70 = 0;
  FUN_14485c47a(&local_70,param_1 + -0x30);
  local_90 = local_70;
  local_80 = (void *)0x0;
  local_78 = *(int *)(param_3 + 1);
  lVar3 = (longlong)local_78;
  pvVar1 = (void *)*param_3;
  local_88 = param_2;
  if (lVar3 == 0) {
    local_74 = 0;
  }
  else {
    FUN_1446dd670(&local_80,local_78,0);
    memcpy(local_80,pvVar1,lVar3 * 2);
  }
  local_68[0] = (code *)0x0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,8);
  pvVar1 = local_80;
  *puVar2 = &PTR_LAB_14a570290;
  *(undefined4 *)(puVar2 + 2) = local_88;
  puVar2[1] = local_90;
  puVar2[3] = 0;
  lVar3 = (longlong)local_78;
  *(int *)(puVar2 + 4) = local_78;
  local_58 = puVar2;
  if (lVar3 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 3,local_78,0);
    memcpy((void *)puVar2[3],pvVar1,lVar3 * 2);
  }
  if (puVar2 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_68[0] = FUN_143350988;
  }
  FUN_1407461b0(1,local_68);
  if (local_80 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b4036 FUN_1477b4036 body=357 status=ok
// SIG undefined FUN_1477b4036(void)

void FUN_1477b4036(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  void *pvVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined8 local_70;
  code *local_68 [2];
  undefined8 *local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_70 = 0;
  FUN_14485c47a(&local_70,param_1 + -0x30);
  local_90 = local_70;
  local_80 = (void *)0x0;
  local_78 = *(int *)(param_3 + 1);
  lVar3 = (longlong)local_78;
  pvVar1 = (void *)*param_3;
  local_88 = param_2;
  if (lVar3 == 0) {
    local_74 = 0;
  }
  else {
    FUN_1446dd670(&local_80,local_78,0);
    memcpy(local_80,pvVar1,lVar3 * 2);
  }
  local_68[0] = (code *)0x0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,8);
  pvVar1 = local_80;
  *puVar2 = &PTR_LAB_14a5702b0;
  *(undefined4 *)(puVar2 + 2) = local_88;
  puVar2[1] = local_90;
  puVar2[3] = 0;
  lVar3 = (longlong)local_78;
  *(int *)(puVar2 + 4) = local_78;
  local_58 = puVar2;
  if (lVar3 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 3,local_78,0);
    memcpy((void *)puVar2[3],pvVar1,lVar3 * 2);
  }
  if (puVar2 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_68[0] = FUN_143350ba8;
  }
  FUN_1407461b0(1,local_68);
  if (local_80 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b419c FUN_1477b419c body=321 status=ok
// SIG undefined FUN_1477b419c(void)

void FUN_1477b419c(longlong param_1,undefined8 *param_2,char param_3)

{
  void *pvVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined8 local_70;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined8 local_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_3 != '\0') {
    iVar3 = 0;
    local_70 = 0;
    FUN_14485c47a(&local_70,param_1 + -0x30);
    local_88 = local_70;
    local_80 = (void *)0x0;
    local_78 = *(int *)(param_2 + 1);
    lVar2 = (longlong)local_78;
    pvVar1 = (void *)*param_2;
    if (lVar2 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar1,lVar2 * 2);
      iVar3 = local_78;
    }
    pvVar1 = local_80;
    local_68 = (code *)0x0;
    local_58 = 0;
    local_48 = &PTR_LAB_14a5702d0;
    local_38 = (void *)0x0;
    local_40 = local_88;
    local_30 = iVar3;
    if (iVar3 == 0) {
      local_2c = 0;
    }
    else {
      FUN_1446dd670(&local_38,iVar3,0);
      memcpy(local_38,pvVar1,(longlong)iVar3 * 2);
    }
    local_68 = FUN_143350dc8;
    FUN_1407461b0(1);
    if (local_80 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b42de FUN_1477b42de body=321 status=ok
// SIG undefined FUN_1477b42de(void)

void FUN_1477b42de(longlong param_1,undefined8 *param_2,char param_3)

{
  void *pvVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined8 local_70;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined8 local_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_3 != '\0') {
    iVar3 = 0;
    local_70 = 0;
    FUN_14485c47a(&local_70,param_1 + -0x30);
    local_88 = local_70;
    local_80 = (void *)0x0;
    local_78 = *(int *)(param_2 + 1);
    lVar2 = (longlong)local_78;
    pvVar1 = (void *)*param_2;
    if (lVar2 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar1,lVar2 * 2);
      iVar3 = local_78;
    }
    pvVar1 = local_80;
    local_68 = (code *)0x0;
    local_58 = 0;
    local_48 = &PTR_LAB_14a5702f0;
    local_38 = (void *)0x0;
    local_40 = local_88;
    local_30 = iVar3;
    if (iVar3 == 0) {
      local_2c = 0;
    }
    else {
      FUN_1446dd670(&local_38,iVar3,0);
      memcpy(local_38,pvVar1,(longlong)iVar3 * 2);
    }
    local_68 = FUN_143350fc4;
    FUN_1407461b0(1);
    if (local_80 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b4420 FUN_1477b4420 body=377 status=ok
// SIG undefined FUN_1477b4420(void)

void FUN_1477b4420(longlong param_1,undefined8 *param_2,undefined4 param_3,char param_4)

{
  void *pvVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_80;
  code *local_78 [2];
  undefined8 *local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_4 != '\0') {
    local_80 = 0;
    FUN_14485c47a(&local_80,param_1 + -0x30);
    local_a0 = local_80;
    local_98 = (void *)0x0;
    local_90 = *(int *)(param_2 + 1);
    lVar3 = (longlong)local_90;
    pvVar1 = (void *)*param_2;
    if (lVar3 == 0) {
      local_8c = 0;
    }
    else {
      FUN_1446dd670(&local_98,local_90,0);
      memcpy(local_98,pvVar1,lVar3 * 2);
    }
    local_78[0] = (code *)0x0;
    local_88 = param_3;
    puVar2 = (undefined8 *)FUN_14001cc68(0x28,8);
    pvVar1 = local_98;
    *puVar2 = &PTR_LAB_14a570310;
    puVar2[1] = local_a0;
    puVar2[2] = 0;
    lVar3 = (longlong)local_90;
    *(int *)(puVar2 + 3) = local_90;
    local_68 = puVar2;
    if (lVar3 == 0) {
      *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
    }
    else {
      FUN_1446dd670(puVar2 + 2,local_90,0);
      memcpy((void *)puVar2[2],pvVar1,lVar3 * 2);
    }
    *(undefined4 *)(puVar2 + 4) = local_88;
    if (puVar2 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_78[0] = FUN_1433511c0;
    }
    FUN_1407461b0(1,local_78);
    if (local_98 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b459a FUN_1477b459a body=308 status=ok
// SIG undefined FUN_1477b459a(void)

void FUN_1477b459a(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined8 local_70;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined8 local_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar2 = 0;
  local_70 = 0;
  FUN_14485c47a(&local_70,param_1);
  local_88 = local_70;
  local_80 = (void *)0x0;
  local_78 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_78;
  pvVar1 = (void *)*param_2;
  if (lVar3 == 0) {
    local_74 = 0;
  }
  else {
    FUN_1446dd670(&local_80,local_78,0);
    memcpy(local_80,pvVar1,lVar3 * 2);
    iVar2 = local_78;
  }
  pvVar1 = local_80;
  local_68 = (code *)0x0;
  local_58 = 0;
  local_48 = &PTR_LAB_14a570330;
  local_38 = (void *)0x0;
  local_40 = local_88;
  local_30 = iVar2;
  if (iVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,iVar2,0);
    memcpy(local_38,pvVar1,(longlong)iVar2 * 2);
  }
  local_68 = FUN_1433513e8;
  FUN_1407461b0(1);
  if (local_80 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b46e1 FUN_1477b46e1 body=140 status=ok
// SIG undefined FUN_1477b46e1(void)

void FUN_1477b46e1(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1477b476e(&local_38);
  plVar1 = (longlong *)FUN_14479d2ce(param_1);
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_38);
  FUN_1477cc5f9(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b476e FUN_1477b476e body=95 status=ok
// SIG undefined FUN_1477b476e(void)

undefined8 * FUN_1477b476e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1477cc5f9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1477cc620(param_1,iVar1);
      FUN_1477cc693(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1477b47cd FUN_1477b47cd body=129 status=ok
// SIG undefined FUN_1477b47cd(void)

void FUN_1477b47cd(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a787a6(local_38);
  plVar1 = (longlong *)FUN_14479d2ce(param_1);
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b484f FUN_1477b484f body=186 status=ok
// SIG undefined FUN_1477b484f(void)

void FUN_1477b484f(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  longlong local_58 [4];
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_38 = 2;
  FUN_144a787a6(local_58);
  FUN_144a787a6(local_58 + 2,param_2 + 0x10);
  local_38 = *(undefined1 *)(param_2 + 0x20);
  plVar1 = (longlong *)FUN_14479d2ce(param_1);
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,local_58);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b490a FUN_1477b490a body=230 status=ok
// SIG undefined FUN_1477b490a(void)

void FUN_1477b490a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
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
  FUN_14333f96a(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b49f2 FUN_1477b49f2 body=380 status=ok
// SIG undefined FUN_1477b49f2(void)

void FUN_1477b49f2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  uint local_38;
  longlong local_30;
  uint local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  local_30 = 0;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_30;
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_38 = local_28 & 1;
  FUN_14333fa54(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b4b70 FUN_1477b4b70 body=307 status=ok
// SIG undefined FUN_1477b4b70(void)

void FUN_1477b4b70(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
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
  uVar1 = FUN_1477b4ca4(local_20,local_28,local_30);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b4ca4 FUN_1477b4ca4 body=260 status=ok
// SIG undefined FUN_1477b4ca4(void)

undefined4 FUN_1477b4ca4(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  undefined4 local_40 [2];
  undefined8 local_38;
  float local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = 0;
  if (param_2 != 0 && param_3 != 0) {
    lVar4 = FUN_147972568();
    if (lVar4 != 0) {
      local_38 = 0;
      local_40[0] = *(undefined4 *)(lVar4 + 0x90);
      local_30 = (float)*(int *)(lVar4 + 0x74);
      local_2c = *(undefined4 *)(param_3 + 0xc);
      FUN_1477b89fa(&local_50,local_40,param_3);
      LOCK();
      *(undefined4 *)(local_50 + 0x5c) = 1;
      UNLOCK();
      local_60 = local_50;
      local_58 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_48 + 1) = (int)local_48[1] + 1;
        UNLOCK();
      }
      uVar3 = FUN_1433436e0(lVar4,param_2,&local_60);
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_48 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar2 = (int *)((longlong)local_48 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_48 + 0x10))(local_48);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b4daa FUN_1477b4daa body=163 status=ok
// SIG undefined FUN_1477b4daa(void)

void FUN_1477b4daa(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_147972568(local_18);
  if (lVar1 != 0) {
    FUN_1477bced8(lVar1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b4e4e FUN_1477b4e4e body=334 status=ok
// SIG undefined FUN_1477b4e4e(void)

void FUN_1477b4e4e(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined8 local_30;
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
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  uVar2 = local_30;
  uVar1 = local_34;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar3 = (longlong *)FUN_147972568(local_28);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x1a8))(plVar3,uVar2,uVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b4f9e FUN_1477b4f9e body=242 status=ok
// SIG undefined FUN_1477b4f9e(void)

void FUN_1477b4f9e(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
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
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_147972568(local_18);
  if (lVar2 != 0) {
    FUN_1477b9060(lVar2,uVar1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b5092 FUN_1477b5092 body=324 status=ok
// SIG undefined FUN_1477b5092(void)

void FUN_1477b5092(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1400b22c2(local_78,&DAT_149e02088);
  FUN_1400b22c2(local_68,&DAT_149e02088);
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = (local_38 & 0xfc) + 1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  puVar1 = local_78;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477b51d8(&local_88,puVar1);
  if (&local_88 == param_3) {
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_88;
    local_88 = 0;
    *(undefined4 *)(param_3 + 1) = local_80;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_7c;
  }
  FUN_1477b532c(local_78);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b51d8 FUN_1477b51d8 body=338 status=ok
// SIG undefined FUN_1477b51d8(void)

undefined8 FUN_1477b51d8(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined2 *local_68;
  uint local_60;
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  bVar1 = *(byte *)(param_2 + 8);
  FUN_1477b89a8(&local_50,*(undefined1 *)(param_2 + 5));
  puVar4 = &DAT_149dfb77a;
  local_68 = &DAT_149dfb77a;
  if (local_48 != 0) {
    local_68 = local_50;
  }
  puVar5 = &DAT_149dfb77a;
  if (*(int *)(param_2 + 3) != 0) {
    puVar5 = (undefined2 *)param_2[2];
  }
  local_60 = bVar1 & 1;
  local_78 = *(undefined4 *)(param_2 + 4);
  local_70 = *(undefined4 *)((longlong)param_2 + 0x24);
  if (*(int *)(param_2 + 1) != 0) {
    puVar4 = (undefined2 *)*param_2;
  }
  FUN_140002266(param_1,
                L"Device Name: %s, \nDevice Id: %s, \nNum Channels: %u, \nSample Rate: %u, \nFormat: %s,  \nIs System Default: %u, \n"
                ,puVar4,puVar5);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  thunk_FUN_14047a987(param_1,"Output Channel Array: \n",0x17);
  iVar2 = *(int *)(param_2 + 4);
  if (0 < iVar2) {
    uVar6 = 0;
    do {
      if ((longlong)uVar6 < (longlong)*(int *)(param_2 + 7)) {
        uVar3 = FUN_1477b89dd(CONCAT71((int7)(int3)((uint)*(int *)(param_2 + 7) >> 8),
                                       *(undefined1 *)(param_2[6] + uVar6)));
        FUN_140002266(&local_50,L"\t%d: %s \n",uVar6 & 0xffffffff,uVar3);
        iVar2 = local_48 + -1;
        if (local_48 == 0) {
          iVar2 = 0;
        }
        FUN_1400020e8(param_1,local_50,iVar2);
        if (local_50 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        iVar2 = *(int *)(param_2 + 4);
      }
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 < (longlong)iVar2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1477b532c FUN_1477b532c body=61 status=ok
// SIG undefined FUN_1477b532c(void)

void FUN_1477b532c(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1477b536a FUN_1477b536a body=252 status=ok
// SIG undefined FUN_1477b536a(void)

void FUN_1477b536a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
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
  local_38 = *puVar1;
  local_30 = puVar1[1];
  FUN_1477b5468(local_18);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b5468 FUN_1477b5468 body=1577 status=ok
// SIG undefined FUN_1477b5468(void)

void FUN_1477b5468(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  ushort uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  ushort uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 auStack_208 [40];
  undefined8 local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  byte local_1a0;
  longlong local_198;
  ulonglong uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_168;
  undefined8 uStack_160;
  uint local_14c;
  longlong local_148;
  undefined8 uStack_140;
  undefined8 local_130;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  code *local_e8 [2];
  undefined8 *local_d8;
  undefined1 *local_a8;
  undefined8 local_98;
  undefined **local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  cVar4 = FUN_14113f0c0(param_2);
  if (cVar4 != '\0') {
    cVar4 = FUN_146269f19();
    if (cVar4 == '\0') {
      local_78 = *(undefined4 *)param_2;
      uStack_74 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_70 = *(undefined4 *)(param_2 + 1);
      uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
      local_98 = 0;
      local_88 = &PTR_LAB_14a5703f0;
      local_a8 = &LAB_1433518ae;
      local_80 = param_1;
      FUN_1415826cc();
    }
    else {
      local_148 = 0;
      uStack_140 = 0;
      lVar6 = FUN_147972568(param_1);
      if ((lVar6 != 0) && (plVar1 = *(longlong **)(lVar6 + 0xb68), plVar1 != (longlong *)0x0)) {
        plVar7 = (longlong *)(**(code **)(*plVar1 + 0x118))(plVar1);
        if (plVar7 == (longlong *)0x0) {
          local_14c = 0;
          (**(code **)(*plVar1 + 0x60))(plVar1,&local_14c);
          if ((int)local_14c < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(local_14c);
          }
          if ((int)uStack_140._4_4_ < (int)local_14c) {
            FUN_1477ccd0c(&local_148);
          }
          (**(code **)(*plVar1 + 0xc0))(plVar1,&local_198);
          FUN_1477b8882(&local_130,&local_198);
          FUN_147041ad4(&local_198);
          if (local_14c != 0) {
            uVar12 = 0;
            do {
              local_188 = 0;
              uStack_180 = 0;
              local_198 = 0;
              uStack_190 = 0;
              local_168 = 0;
              uStack_160 = 0;
              FUN_147042096(&local_198);
              (**(code **)(*plVar1 + 0x68))(plVar1,uVar12);
              FUN_1477b8882(&local_1e0,&local_198);
              uVar11 = uStack_140;
              if ((int)local_1c8 == (int)local_118) {
                if (1 < (int)local_1c8) {
                  lVar6 = 0;
                  while( true ) {
                    uVar9 = *(ushort *)(local_1d0 + lVar6);
                    uVar10 = (ulonglong)uVar9;
                    uVar14 = *(ushort *)(local_120 + lVar6);
                    if (uVar9 != uVar14) break;
                    if (uVar9 == 0) goto LAB_1477b57fe;
LAB_1477b57b3:
                    lVar6 = lVar6 + 2;
                  }
                  if ((uVar14 | uVar9) < 0x80) {
                    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
                    uVar15 = (ulonglong)uVar14;
                    uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                    if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar15]) goto LAB_1477b57b3;
                  }
                  if (uVar9 != uVar14) goto LAB_1477b57f6;
                }
LAB_1477b57fe:
                bVar8 = 2;
              }
              else {
                if ((int)local_118 + (int)local_1c8 == 1) goto LAB_1477b57fe;
LAB_1477b57f6:
                bVar8 = 0;
              }
              local_1a0 = local_1a0 & 0xfd | bVar8;
              lVar6 = (longlong)(int)uStack_140;
              uVar5 = (int)uStack_140 + 1;
              uStack_140 = CONCAT44(uStack_140._4_4_,uVar5);
              if (uStack_140._4_4_ < uVar5) {
                FUN_1477ccd7c(&local_148,uVar11 & 0xffffffff);
              }
              *(undefined8 *)(local_148 + lVar6 * 0x48) = 0;
              *(undefined8 *)(local_148 + lVar6 * 0x48) = local_1e0;
              local_1e0 = 0;
              *(undefined4 *)(local_148 + 8 + lVar6 * 0x48) = (undefined4)local_1d8;
              *(undefined4 *)(local_148 + 0xc + lVar6 * 0x48) = local_1d8._4_4_;
              local_1d8 = 0;
              *(undefined8 *)(local_148 + 0x10 + lVar6 * 0x48) = 0;
              *(longlong *)(local_148 + 0x10 + lVar6 * 0x48) = local_1d0;
              local_1d0 = 0;
              *(int *)(local_148 + 0x18 + lVar6 * 0x48) = (int)local_1c8;
              *(undefined4 *)(local_148 + 0x1c + lVar6 * 0x48) = local_1c8._4_4_;
              local_1c8 = 0;
              *(undefined1 *)(local_148 + 0x28 + lVar6 * 0x48) = local_1b8;
              *(undefined8 *)(local_148 + 0x20 + lVar6 * 0x48) = local_1c0;
              *(undefined8 *)(local_148 + 0x30 + lVar6 * 0x48) = 0;
              *(undefined8 *)(local_148 + 0x30 + lVar6 * 0x48) = local_1b0;
              local_1b0 = 0;
              *(undefined4 *)(local_148 + 0x38 + lVar6 * 0x48) = (undefined4)local_1a8;
              *(undefined4 *)(local_148 + 0x3c + lVar6 * 0x48) = local_1a8._4_4_;
              local_1a8 = 0;
              *(byte *)(local_148 + 0x40 + lVar6 * 0x48) = local_1a0;
              FUN_1477b532c(&local_1e0);
              FUN_147041ad4(&local_198);
              uVar12 = uVar12 + 1;
            } while (uVar12 < local_14c);
          }
          FUN_1477b532c(&local_130);
        }
        else {
          (**(code **)(*plVar7 + 0x10))(plVar7,&local_198);
          uVar11 = 0;
          if ((longlong)(int)uStack_190 != 0) {
            lVar6 = (longlong)(int)uStack_190 * 0x48;
            lVar13 = local_198;
            do {
              FUN_1477b8882(&local_130,lVar13);
              uVar11 = uStack_140;
              lVar16 = (longlong)(int)uStack_140;
              uVar12 = (int)uStack_140 + 1;
              uStack_140 = CONCAT44(uStack_140._4_4_,uVar12);
              if (uStack_140._4_4_ < uVar12) {
                FUN_1477ccd7c(&local_148,uVar11 & 0xffffffff);
              }
              *(undefined8 *)(local_148 + lVar16 * 0x48) = 0;
              *(undefined8 *)(local_148 + lVar16 * 0x48) = local_130;
              local_130 = 0;
              *(undefined4 *)(local_148 + 8 + lVar16 * 0x48) = (undefined4)local_128;
              *(undefined4 *)(local_148 + 0xc + lVar16 * 0x48) = local_128._4_4_;
              local_128 = 0;
              *(undefined8 *)(local_148 + 0x10 + lVar16 * 0x48) = 0;
              *(longlong *)(local_148 + 0x10 + lVar16 * 0x48) = local_120;
              local_120 = 0;
              *(int *)(local_148 + 0x18 + lVar16 * 0x48) = (int)local_118;
              *(undefined4 *)(local_148 + 0x1c + lVar16 * 0x48) = local_118._4_4_;
              local_118 = 0;
              *(undefined1 *)(local_148 + 0x28 + lVar16 * 0x48) = local_108;
              *(undefined8 *)(local_148 + 0x20 + lVar16 * 0x48) = local_110;
              *(undefined8 *)(local_148 + 0x30 + lVar16 * 0x48) = 0;
              *(undefined8 *)(local_148 + 0x30 + lVar16 * 0x48) = local_100;
              local_100 = 0;
              *(undefined4 *)(local_148 + 0x38 + lVar16 * 0x48) = (undefined4)local_f8;
              *(undefined4 *)(local_148 + 0x3c + lVar16 * 0x48) = local_f8._4_4_;
              local_f8 = 0;
              *(undefined1 *)(local_148 + 0x40 + lVar16 * 0x48) = local_f0;
              FUN_1477b532c(&local_130);
              lVar13 = lVar13 + 0x48;
              lVar6 = lVar6 + -0x48;
            } while (lVar6 != 0);
            uVar11 = uStack_190 & 0xffffffff;
          }
          FUN_1477ccce6(local_198,uVar11);
          if (local_198 != 0) {
            FUN_1400020a8();
          }
        }
      }
      uVar11 = uStack_140;
      lVar6 = local_148;
      local_130 = *param_2;
      local_128 = param_2[1];
      local_120 = 0;
      local_118 = CONCAT44(local_118._4_4_,(int)uStack_140);
      if ((int)uStack_140 == 0) {
        local_118 = uStack_140 & 0xffffffff;
      }
      else {
        FUN_1477cc620(&local_120,uStack_140 & 0xffffffff,0);
        FUN_1477cc693(local_120,lVar6,uVar11 & 0xffffffff);
      }
      local_e8[0] = (code *)0x0;
      local_d8 = (undefined8 *)FUN_14001cc68(0x28,8);
      lVar6 = local_120;
      *local_d8 = &PTR_LAB_14a570410;
      local_120 = 0;
      uVar2 = (int)local_118;
      uVar3 = local_118._4_4_;
      local_118 = 0;
      local_d8[1] = local_130;
      local_d8[2] = local_128;
      local_d8[3] = lVar6;
      *(undefined4 *)(local_d8 + 4) = uVar2;
      *(undefined4 *)((longlong)local_d8 + 0x24) = uVar3;
      if (local_d8 + 1 != (undefined8 *)0x0) {
        local_e8[0] = FUN_1433518f2;
      }
      FUN_1434130f2(local_e8);
      FUN_1477cc5f9(local_120,local_118 & 0xffffffff);
      if (local_120 != 0) {
        FUN_1400020a8();
      }
      FUN_1477cc5f9(local_148,uStack_140 & 0xffffffff);
      if (local_148 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477b5a94 FUN_1477b5a94 body=252 status=ok
// SIG undefined FUN_1477b5a94(void)

void FUN_1477b5a94(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
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
  local_38 = *puVar1;
  local_30 = puVar1[1];
  FUN_1477b5b92(local_18);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b5b92 FUN_1477b5b92 body=447 status=ok
// SIG undefined FUN_1477b5b92(void)

void FUN_1477b5b92(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  uint local_b0;
  code *local_a8 [2];
  undefined8 *local_98;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  cVar5 = FUN_14113f0c0(param_2);
  if (cVar5 != '\0') {
    cVar5 = FUN_146269f19();
    if (cVar5 == '\0') {
      local_38 = *(undefined4 *)param_2;
      uStack_34 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_30 = *(undefined4 *)(param_2 + 1);
      uStack_2c = *(undefined4 *)((longlong)param_2 + 0xc);
      local_58 = 0;
      local_48 = &PTR_LAB_14a570430;
      local_68 = &LAB_1433519e6;
      local_40 = param_1;
      FUN_1415826cc();
    }
    else {
      lVar6 = FUN_147972568(param_1);
      if ((lVar6 != 0) && (plVar1 = *(longlong **)(lVar6 + 0xb68), plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x70))(plVar1,&local_b8);
        pvVar2 = local_b8;
        local_d8 = *param_2;
        local_d0 = param_2[1];
        local_c8 = (void *)0x0;
        local_c0 = CONCAT44(local_c0._4_4_,local_b0);
        if ((longlong)(int)local_b0 == 0) {
          local_c0 = (ulonglong)local_b0;
        }
        else {
          FUN_1446dd670(&local_c8,local_b0,0);
          memcpy(local_c8,pvVar2,(longlong)(int)local_b0 * 2);
        }
        local_a8[0] = (code *)0x0;
        local_98 = (undefined8 *)FUN_14001cc68(0x28,8);
        pvVar2 = local_c8;
        *local_98 = &PTR_LAB_14a570450;
        local_c8 = (void *)0x0;
        uVar3 = (undefined4)local_c0;
        uVar4 = local_c0._4_4_;
        local_c0 = 0;
        local_98[1] = local_d8;
        local_98[2] = local_d0;
        local_98[3] = pvVar2;
        *(undefined4 *)(local_98 + 4) = uVar3;
        *(undefined4 *)((longlong)local_98 + 0x24) = uVar4;
        if (local_98 + 1 != (undefined8 *)0x0) {
          local_a8[0] = FUN_143351a2a;
        }
        FUN_1434130f2(local_a8);
        if (local_c8 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_b8 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      FUN_1477cc5f9(0,0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b5d52 FUN_1477b5d52 body=237 status=ok
// SIG undefined FUN_1477b5d52(void)

void FUN_1477b5d52(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  uVar1 = FUN_143340502(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b5e46 FUN_1477b5e46 body=237 status=ok
// SIG undefined FUN_1477b5e46(void)

void FUN_1477b5e46(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  uVar1 = FUN_143340f18(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b5f34 FUN_1477b5f34 body=524 status=ok
// SIG undefined FUN_1477b5f34(void)

void FUN_1477b5f34(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  FUN_144a7452c();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_2c;
  local_58 = local_28;
  FUN_1477b6142(&local_40,local_1c,local_20,local_24);
  if (&local_40 == param_3) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_40;
    *(undefined4 *)(param_3 + 1) = local_38;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_34;
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b6142 FUN_1477b6142 body=362 status=ok
// SIG undefined FUN_1477b6142(void)

longlong *
FUN_1477b6142(longlong *param_1,int param_2,float param_3,float param_4,int param_5,int param_6)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  iVar6 = 10000;
  if (param_2 < 10000) {
    iVar6 = param_2;
  }
  iVar4 = 0;
  iVar5 = 0;
  if (0 < iVar6) {
    iVar5 = iVar6;
  }
  if (20000.0 <= param_3) {
    param_3 = 20000.0;
  }
  if (param_3 <= 20.0) {
    param_3 = 20.0;
  }
  if (9999 < param_5) {
    param_5 = 10000;
  }
  if (20000.0 <= param_4) {
    param_4 = 20000.0;
  }
  if (param_5 < 1) {
    param_5 = 0;
  }
  if (param_4 <= param_3) {
    param_4 = param_3;
  }
  iVar3 = 10000;
  if (param_6 < 10000) {
    iVar3 = param_6;
  }
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  fVar7 = logf(param_4 / param_3);
  fVar7 = fVar7 / 0.6931472;
  if (fVar7 <= 0.01) {
    fVar7 = 0.01;
  }
  fVar7 = (float)iVar5 / fVar7;
  fVar9 = fVar7;
  if (fVar7 <= 0.01) {
    fVar9 = 0.01;
  }
  fVar9 = (float)exp2f(1.0 / fVar9);
  *param_1 = 0;
  param_1[1] = 0;
  if (0 < param_2) {
    do {
      uVar8 = FUN_14702ff8a(iVar4,param_3,fVar7);
      iVar5 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
        FUN_1477cc9a0(param_1,iVar5);
      }
      lVar1 = *param_1;
      lVar2 = (longlong)iVar5 * 0x10;
      *(undefined4 *)(lVar1 + lVar2) = uVar8;
      *(int *)(lVar1 + 4 + lVar2) = param_5;
      *(int *)(lVar1 + 8 + lVar2) = iVar3;
      *(float *)(lVar1 + 0xc + lVar2) = 1.0 / (fVar9 + -1.0);
      iVar4 = iVar4 + 1;
    } while (iVar6 != iVar4);
  }
  return param_1;
}



// FUNCTION 1477b62ac FUN_1477b62ac body=519 status=ok
// SIG undefined FUN_1477b62ac(void)

void FUN_1477b62ac(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_1d;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_1d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1d);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a7452c();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_2c;
  local_58 = local_28;
  FUN_1477b64b4(&local_40,local_1c,local_1d,local_24);
  if (&local_40 == param_3) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_40;
    *(undefined4 *)(param_3 + 1) = local_38;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_34;
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b64b4 FUN_1477b64b4 body=286 status=ok
// SIG undefined FUN_1477b64b4(void)

longlong *
FUN_1477b64b4(longlong *param_1,int param_2,byte param_3,int param_4,int param_5,int param_6)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  
  iVar6 = 10000;
  if (param_2 < 10000) {
    iVar6 = param_2;
  }
  iVar5 = 10;
  if (param_4 < 10) {
    iVar5 = param_4;
  }
  iVar2 = -1;
  if (-1 < iVar5) {
    iVar2 = iVar5;
  }
  if (9999 < param_5) {
    param_5 = 10000;
  }
  iVar5 = 0;
  if (param_5 < 1) {
    param_5 = 0;
  }
  iVar4 = 10000;
  if (param_6 < 10000) {
    iVar4 = param_6;
  }
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  fVar7 = (float)exp2f((float)(int)((param_3 - 0x39) + iVar2 * 0xc) / 12.0);
  *param_1 = 0;
  param_1[1] = 0;
  if (0 < param_2) {
    do {
      uVar8 = FUN_14702ff8a(iVar5,fVar7 * 440.0,0x41400000);
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_1477cc9a0(param_1,iVar2);
      }
      lVar1 = *param_1;
      lVar3 = (longlong)iVar2 * 0x10;
      *(undefined4 *)(lVar1 + lVar3) = uVar8;
      *(int *)(lVar1 + 4 + lVar3) = param_5;
      *(int *)(lVar1 + 8 + lVar3) = iVar4;
      *(undefined4 *)(lVar1 + 0xc + lVar3) = 0x41868981;
      iVar5 = iVar5 + 1;
    } while (iVar6 != iVar5);
  }
  return param_1;
}



// FUNCTION 1477b65d2 FUN_1477b65d2 body=499 status=ok
// SIG undefined FUN_1477b65d2(void)

void FUN_1477b65d2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  byte local_19;
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
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_19 < 4) {
    uVar1 = *(undefined4 *)(&DAT_14a5713e8 + (ulonglong)local_19 * 4);
    uVar2 = *(undefined4 *)(&DAT_14a5713f8 + (ulonglong)local_19 * 4);
  }
  else {
    uVar2 = 0x469c4000;
    uVar1 = 0x41a00000;
  }
  local_40 = local_28;
  local_48 = local_24;
  FUN_1477b6142(&local_38,local_20,uVar1,uVar2);
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
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b67c6 FUN_1477b67c6 body=153 status=ok
// SIG undefined FUN_1477b67c6(void)

void FUN_1477b67c6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_18 != 0) {
    FUN_147d33010();
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b6860 FUN_1477b6860 body=237 status=ok
// SIG undefined FUN_1477b6860(void)

void FUN_1477b6860(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
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
  local_28 = 0;
  uStack_20 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (undefined4)local_28;
  uStack_34 = local_28._4_4_;
  uStack_30 = (undefined4)uStack_20;
  uStack_2c = uStack_20._4_4_;
  FUN_1433414ce(local_18);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b694e FUN_1477b694e body=321 status=ok
// SIG undefined FUN_1477b694e(void)

void FUN_1477b694e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
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
  FUN_1433415b4(local_18,local_20,local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b6a90 FUN_1477b6a90 body=320 status=ok
// SIG undefined FUN_1477b6a90(void)

void FUN_1477b6a90(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
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
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143341cb0(local_18,local_20,local_24);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b6bd2 FUN_1477b6bd2 body=324 status=ok
// SIG undefined FUN_1477b6bd2(void)

void FUN_1477b6bd2(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
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
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  uVar2 = local_28;
  lVar1 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = FUN_147972568(local_20);
  if (lVar3 != 0) {
    FUN_1477b8b94(lVar3,uVar2,*(undefined4 *)(lVar1 + 0xc));
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b6d18 FUN_1477b6d18 body=321 status=ok
// SIG undefined FUN_1477b6d18(void)

void FUN_1477b6d18(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [44];
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
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  uVar2 = local_28;
  uVar1 = local_2c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = FUN_147972568(local_20);
  if (lVar3 != 0) {
    FUN_1477b8ce0(lVar3,uVar2,uVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b6e5a FUN_1477b6e5a body=324 status=ok
// SIG undefined FUN_1477b6e5a(void)

void FUN_1477b6e5a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
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
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  uVar2 = local_28;
  lVar1 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = FUN_147972568(local_20);
  if (lVar3 != 0) {
    FUN_1477b8b94(lVar3,uVar2,*(undefined4 *)(lVar1 + 0xc));
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b6fa0 FUN_1477b6fa0 body=321 status=ok
// SIG undefined FUN_1477b6fa0(void)

void FUN_1477b6fa0(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [44];
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
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  uVar2 = local_28;
  uVar1 = local_2c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = FUN_147972568(local_20);
  if (lVar3 != 0) {
    FUN_1477b8ce0(lVar3,uVar2,uVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b70e2 FUN_1477b70e2 body=375 status=ok
// SIG undefined FUN_1477b70e2(void)

void FUN_1477b70e2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_24;
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
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
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
  FUN_1477b73d2(local_18,local_20,local_24,local_30);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b725a FUN_1477b725a body=375 status=ok
// SIG undefined FUN_1477b725a(void)

void FUN_1477b725a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_24;
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
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
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
  FUN_1477b73d2(local_18,local_20,local_24,local_30);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b73d2 FUN_1477b73d2 body=260 status=ok
// SIG undefined FUN_1477b73d2(void)

void FUN_1477b73d2(undefined8 param_1,longlong param_2,undefined4 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  float local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0 && param_4 != 0) {
    lVar3 = FUN_147972568();
    if (lVar3 != 0) {
      local_48[0] = 0xffffffff;
      local_40 = 0;
      local_34 = 0xffffffff;
      local_38 = (float)*(int *)(lVar3 + 0x74);
      FUN_1477b89fa(&local_58,local_48,param_4);
      LOCK();
      *(undefined4 *)(local_58 + 0x5c) = 1;
      UNLOCK();
      local_68 = local_58;
      local_60 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
      }
      FUN_1477b8e2c(lVar3,param_2,param_3,&local_68);
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
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b74de FUN_1477b74de body=406 status=ok
// SIG undefined FUN_1477b74de(void)

void FUN_1477b74de(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  int local_28;
  undefined4 local_24;
  undefined8 local_20;
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
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
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
  FUN_143342322(local_18,local_20,local_24,local_28 != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b7676 FUN_1477b7676 body=484 status=ok
// SIG undefined FUN_1477b7676(void)

void FUN_1477b7676(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined4 local_5c;
  void *local_58;
  ulonglong uStack_50;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_58 = (void *)0x0;
  uStack_50 = 0;
  FUN_1446e6bbc();
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
  _Src = local_58;
  uVar1 = local_5c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_50;
  local_68 = (int)uStack_50;
  if (lVar2 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1477cc7c4(&local_70,uStack_50 & 0xffffffff);
    memcpy(local_70,_Src,lVar2 << 3);
  }
  FUN_1477b785c(local_38,local_40,&local_70,uVar1);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b785c FUN_1477b785c body=462 status=ok
// SIG undefined FUN_1477b785c(void)

void FUN_1477b785c(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong *local_98;
  undefined4 local_90 [2];
  undefined8 local_88;
  float local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar7 = (longlong *)FUN_147972568();
  if (plVar7 != (longlong *)0x0) {
    local_78 = 0;
    uStack_70 = 0;
    lVar4 = param_3[1];
    uVar8 = 0;
    if ((longlong)(int)lVar4 != 0) {
      lVar3 = *param_3;
      lVar10 = 0;
      do {
        if (*(longlong *)(lVar3 + lVar10) != 0) {
          local_88 = 0;
          local_90[0] = (undefined4)plVar7[0x12];
          local_80 = (float)*(int *)((longlong)plVar7 + 0x74);
          local_7c = *(undefined4 *)(*(longlong *)(lVar3 + lVar10) + 0xc);
          FUN_1477b89fa(&local_a0,local_90);
          uVar8 = uStack_70;
          LOCK();
          *(undefined4 *)(local_a0 + 0x5c) = 1;
          UNLOCK();
          lVar9 = (longlong)(int)uStack_70;
          uVar6 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
          if (uStack_70._4_4_ < uVar6) {
            FUN_1477cc91a(&local_78,uVar8 & 0xffffffff);
          }
          plVar5 = local_98;
          *(longlong *)(local_78 + lVar9 * 0x10) = local_a0;
          *(longlong **)(local_78 + 8 + lVar9 * 0x10) = local_98;
          if (local_98 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_98 + 1) = (int)local_98[1] + 1;
            UNLOCK();
            if (local_98 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_98 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_98)(local_98);
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
        }
        lVar10 = lVar10 + 8;
      } while ((longlong)(int)lVar4 * 8 != lVar10);
      uVar8 = uStack_70 & 0xffffffff;
      if (0 < (int)uStack_70) {
        (**(code **)(*plVar7 + 0x1a0))(plVar7,param_2,&local_78,param_4);
        uVar8 = uStack_70 & 0xffffffff;
      }
    }
    FUN_1477cc8d1(local_78,uVar8);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b7a2c FUN_1477b7a2c body=651 status=ok
// SIG undefined FUN_1477b7a2c(void)

void FUN_1477b7a2c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined1 local_29;
  undefined4 local_28;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  local_22 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_22);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_22);
  }
  local_23 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_23);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_23);
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
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_29;
  local_40 = local_28;
  local_48 = local_23;
  FUN_143342408(local_18,local_20,local_21,local_22);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b7cb8 FUN_1477b7cb8 body=230 status=ok
// SIG undefined FUN_1477b7cb8(void)

void FUN_1477b7cb8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
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
  FUN_1433424b0(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b7da0 FUN_1477b7da0 body=230 status=ok
// SIG undefined FUN_1477b7da0(void)

void FUN_1477b7da0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
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
  FUN_143343282(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b7e88 FUN_1477b7e88 body=715 status=ok
// SIG undefined FUN_1477b7e88(void)

void FUN_1477b7e88(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  void *local_68;
  ulonglong uStack_60;
  longlong local_58 [3];
  undefined1 local_39;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_39 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_68 = (void *)0x0;
  uStack_60 = 0;
  FUN_144a49f24();
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  _Src = local_68;
  uVar1 = local_70;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_60;
  local_80 = (int)uStack_60;
  if (lVar2 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,uStack_60 & 0xffffffff,0);
    memcpy(local_88,_Src,lVar2 * 2);
  }
  local_98 = uVar1;
  uVar1 = FUN_1433432c4(local_38,local_39,local_58,&local_88);
  *param_3 = uVar1;
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b8154 FUN_1477b8154 body=343 status=ok
// SIG undefined FUN_1477b8154(void)

void FUN_1477b8154(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28 [4];
  
  local_28[3] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
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
  puVar1 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = *puVar1;
  local_40 = puVar1[1];
  FUN_1477b82ac(local_28[2],local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[3] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b82ac FUN_1477b82ac body=893 status=ok
// SIG undefined FUN_1477b82ac(void)

void FUN_1477b82ac(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_1a8 [32];
  longlong local_188 [4];
  undefined1 local_168;
  undefined8 local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined8 local_110;
  void *local_108;
  int local_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  code *local_c8 [2];
  undefined8 *local_b8;
  undefined1 *local_88 [2];
  undefined8 *local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  cVar3 = FUN_14113f0c0(param_3);
  if (cVar3 != '\0') {
    cVar3 = FUN_146269f19();
    if (cVar3 == '\0') {
      local_108 = (void *)0x0;
      local_100 = *(int *)(param_2 + 1);
      lVar6 = (longlong)local_100;
      pvVar1 = (void *)*param_2;
      local_110 = param_1;
      if (lVar6 == 0) {
        uStack_fc = 0;
      }
      else {
        FUN_1446dd670(&local_108,local_100,0);
        memcpy(local_108,pvVar1,lVar6 * 2);
      }
      local_f8 = *param_3;
      local_f0 = param_3[1];
      local_88[0] = (undefined1 *)0x0;
      puVar5 = (undefined8 *)FUN_14001cc68(0x30,8);
      pvVar1 = local_108;
      *puVar5 = &PTR_LAB_14a570470;
      puVar5[1] = local_110;
      puVar5[2] = 0;
      lVar6 = (longlong)local_100;
      *(int *)(puVar5 + 3) = local_100;
      local_78 = puVar5;
      if (lVar6 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0x1c) = 0;
      }
      else {
        FUN_1446dd670(puVar5 + 2,local_100,0);
        memcpy((void *)puVar5[2],pvVar1,lVar6 * 2);
      }
      puVar5[4] = local_f8;
      puVar5[5] = local_f0;
      if (puVar5 != (undefined8 *)&DAT_fffffffffffffff8) {
        local_88[0] = &LAB_143351b12;
      }
      FUN_1415826cc(local_88);
      if (local_108 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      lVar6 = FUN_147972568(param_1);
      if ((lVar6 != 0) && (plVar2 = *(longlong **)(lVar6 + 0xb68), plVar2 != (longlong *)0x0)) {
        uVar4 = (**(code **)(*plVar2 + 0xb8))
                          (plVar2,param_2,0,L"UAudioMixerBlueprintLibrary::SwapAudioOutputDevice");
        (**(code **)(*plVar2 + 0xc0))(plVar2,&local_158);
        FUN_1477b8882(&local_110,&local_158);
        FUN_147041ad4(&local_158);
        local_188[2] = 0;
        local_188[3] = 0;
        local_188[0] = 0;
        local_188[1] = 0;
        local_168 = 2;
        iVar7 = (int)local_f8 + -1;
        if ((int)local_f8 == 0) {
          iVar7 = 0;
        }
        FUN_1402980a2(local_188,CONCAT44(uStack_fc,local_100),iVar7);
        FUN_144a787a6(local_188 + 2,param_2);
        local_158 = *param_3;
        local_150 = param_3[1];
        local_168 = uVar4;
        FUN_1477b9256(&local_148,local_188);
        local_c8[0] = (code *)0x0;
        local_b8 = (undefined8 *)FUN_14001cc68(0x40,8);
        *local_b8 = &PTR_LAB_14a570490;
        local_b8[1] = local_158;
        local_b8[2] = local_150;
        local_b8[3] = local_148;
        local_148 = 0;
        *(undefined4 *)(local_b8 + 4) = (undefined4)local_140;
        *(undefined4 *)((longlong)local_b8 + 0x24) = local_140._4_4_;
        local_140 = 0;
        local_b8[5] = local_138;
        local_138 = 0;
        *(undefined4 *)(local_b8 + 6) = (undefined4)local_130;
        *(undefined4 *)((longlong)local_b8 + 0x34) = local_130._4_4_;
        local_130 = 0;
        *(undefined1 *)(local_b8 + 7) = local_128;
        if (local_b8 + 1 != (undefined8 *)0x0) {
          local_c8[0] = FUN_143351b88;
        }
        FUN_1434130f2(local_c8);
        if (local_138 != 0) {
          FUN_1400020a8();
        }
        if (local_148 != 0) {
          FUN_1400020a8();
        }
        if (local_188[2] != 0) {
          FUN_1400020a8();
        }
        if (local_188[0] != 0) {
          FUN_1400020a8();
        }
        FUN_1477b532c(&local_110);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b862a FUN_1477b862a body=272 status=ok
// SIG undefined FUN_1477b862a(void)

void FUN_1477b862a(undefined8 param_1,longlong param_2,float *param_3)

{
  float fVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_48 [44];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
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
  fVar1 = local_1c * 1024.0 * 1024.0;
  uVar2 = (ulonglong)fVar1;
  lVar3 = FUN_140083894();
  uVar4 = (**(code **)(**(longlong **)(lVar3 + 0x38) + 0xb8))
                    (*(longlong **)(lVar3 + 0x38),
                     (longlong)(fVar1 - 9.223372e+18) & (longlong)uVar2 >> 0x3f | uVar2);
  auVar5._8_4_ = (int)((ulonglong)uVar4 >> 0x20);
  auVar5._0_8_ = uVar4;
  auVar5._12_4_ = 0x45300000;
  *param_3 = (float)((((double)CONCAT44(0x43300000,(int)uVar4) - 4503599627370496.0) +
                     (auVar5._8_8_ - 1.9342813113834067e+25)) * 0.0009765625 * 0.0009765625);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b873c FUN_1477b873c body=321 status=ok
// SIG undefined FUN_1477b873c(void)

void FUN_1477b873c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
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
  FUN_14334357c(local_18,local_20,local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b8882 FUN_1477b8882 body=294 status=ok
// SIG undefined FUN_1477b8882(void)

undefined8 * FUN_1477b8882(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_1 = 0;
  iVar2 = *(int *)(param_2 + 1);
  pvVar4 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar2,0);
    memcpy((void *)*param_1,pvVar4,(longlong)iVar2 * 2);
  }
  param_1[2] = 0;
  iVar2 = *(int *)(param_2 + 3);
  pvVar4 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar2,0);
    memcpy((void *)param_1[2],pvVar4,(longlong)iVar2 * 2);
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 5);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)((longlong)param_2 + 0x2c);
  param_1[6] = 0;
  param_1[7] = 0;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfc | *(byte *)(param_2 + 8) & 1;
  iVar2 = *(int *)(param_2 + 7);
  if ((longlong)iVar2 != 0) {
    lVar5 = param_2[6];
    lVar6 = 0;
    do {
      uVar1 = *(undefined1 *)(lVar5 + lVar6);
      iVar3 = *(int *)(param_1 + 7);
      *(uint *)(param_1 + 7) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0x3c) < iVar3 + 1U) {
        FUN_1477cc81e(param_1 + 6,iVar3);
      }
      *(undefined1 *)(param_1[6] + (longlong)iVar3) = uVar1;
      lVar6 = lVar6 + 4;
    } while ((longlong)iVar2 * 4 != lVar6);
  }
  return param_1;
}



// FUNCTION 1477b89a8 FUN_1477b89a8 body=53 status=ok
// SIG undefined FUN_1477b89a8(void)

undefined8 FUN_1477b89a8(undefined8 param_1,byte param_2)

{
  char *pcVar1;
  
  if (param_2 < 4) {
    pcVar1 = (&PTR_s_Unknown_14a571408)[param_2];
  }
  else {
    pcVar1 = "Invalid Format Type";
  }
  FUN_1400b22c2(param_1,pcVar1);
  return param_1;
}



// FUNCTION 1477b89dd FUN_1477b89dd body=28 status=ok
// SIG undefined FUN_1477b89dd(void)

wchar_t * FUN_1477b89dd(byte param_1)

{
  if (param_1 < 0x13) {
    return (wchar_t *)(&PTR_u_FrontLeft_14a571428)[param_1];
  }
  return L"UNSUPPORTED";
}



// FUNCTION 1477b89fa FUN_1477b89fa body=256 status=ok
// SIG undefined FUN_1477b89fa(void)

undefined8 * FUN_1477b89fa(undefined8 *param_1,undefined4 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar6 = (longlong *)(**(code **)(*param_3 + 0x2c0))(param_3);
  FUN_14485c47a((longlong)plVar6 + 0x4c,param_3);
  *(undefined4 *)((longlong)plVar6 + 0x54) = param_2[5];
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(plVar6 + 0xe) = *param_2;
  *(undefined4 *)((longlong)plVar6 + 0x74) = uVar3;
  *(undefined4 *)(plVar6 + 0xf) = uVar4;
  *(undefined4 *)((longlong)plVar6 + 0x7c) = uVar5;
  plVar6[0x10] = *(longlong *)(param_2 + 4);
  (**(code **)(*plVar6 + 0x48))(plVar6,param_2);
  *param_1 = plVar6;
  local_30 = (longlong *)FUN_14001cc68(0x18,0x10);
  local_30[1] = (longlong)&DAT_100000001;
  *local_30 = (longlong)&PTR_FUN_14a5712d0;
  local_30[2] = (longlong)plVar6;
  param_1[1] = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  local_38 = plVar6;
  FUN_147d346c4(param_3,&local_38);
  plVar6 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b8afc FUN_1477b8afc body=134 status=ok
// SIG undefined FUN_1477b8afc(void)

void FUN_1477b8afc(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_1477bcd18(param_1,&local_28);
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b8b94 FUN_1477b8b94 body=331 status=ok
// SIG undefined FUN_1477b8b94(void)

/* WARNING: Removing unreachable block (ram,0x0001477b8c8b) */
/* WARNING: Removing unreachable block (ram,0x0001477b8c97) */
/* WARNING: Removing unreachable block (ram,0x0001477b8c9b) */

void FUN_1477b8b94(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1433438ce(param_1,&local_78,param_2);
  if (local_70 != (longlong *)0x0) {
    iVar5 = (int)local_70[1];
    do {
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_70[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(local_70 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar7 = local_70;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)local_70 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      if (local_78 != 0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        local_48 = &PTR_LAB_14a570620;
        uStack_40 = local_78;
        local_38 = plVar7;
        uStack_30 = param_3;
        puVar6 = (undefined8 *)FUN_14001cc68(0x50,0x10);
        *puVar6 = 0;
        puVar6[2] = &LAB_143352488;
        puVar6[4] = 0;
        local_58 = 0;
        *(undefined4 *)(puVar6 + 6) = (undefined4)local_48;
        *(undefined4 *)((longlong)puVar6 + 0x34) = local_48._4_4_;
        *(undefined4 *)(puVar6 + 7) = (undefined4)uStack_40;
        *(undefined4 *)((longlong)puVar6 + 0x3c) = uStack_40._4_4_;
        *(undefined4 *)(puVar6 + 8) = (undefined4)local_38;
        *(undefined4 *)((longlong)puVar6 + 0x44) = local_38._4_4_;
        *(undefined4 *)(puVar6 + 9) = uStack_30;
        *(undefined4 *)((longlong)puVar6 + 0x4c) = uStack_2c;
        local_68 = 0;
        if (puVar6 != (undefined8 *)0x0) {
          puVar3 = *(undefined8 **)(param_1 + 0xe20);
          *(undefined8 **)(param_1 + 0xe20) = puVar6;
          *puVar3 = puVar6;
        }
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
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b8ce0 FUN_1477b8ce0 body=331 status=ok
// SIG undefined FUN_1477b8ce0(void)

/* WARNING: Removing unreachable block (ram,0x0001477b8dd7) */
/* WARNING: Removing unreachable block (ram,0x0001477b8de3) */
/* WARNING: Removing unreachable block (ram,0x0001477b8de7) */

void FUN_1477b8ce0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1433438ce(param_1,&local_78,param_2);
  if (local_70 != (longlong *)0x0) {
    iVar5 = (int)local_70[1];
    do {
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_70[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(local_70 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar7 = local_70;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)local_70 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      if (local_78 != 0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        local_48 = &PTR_LAB_14a570640;
        uStack_40 = local_78;
        local_38 = plVar7;
        uStack_30 = param_3;
        puVar6 = (undefined8 *)FUN_14001cc68(0x50,0x10);
        *puVar6 = 0;
        puVar6[2] = &LAB_14335252c;
        puVar6[4] = 0;
        local_58 = 0;
        *(undefined4 *)(puVar6 + 6) = (undefined4)local_48;
        *(undefined4 *)((longlong)puVar6 + 0x34) = local_48._4_4_;
        *(undefined4 *)(puVar6 + 7) = (undefined4)uStack_40;
        *(undefined4 *)((longlong)puVar6 + 0x3c) = uStack_40._4_4_;
        *(undefined4 *)(puVar6 + 8) = (undefined4)local_38;
        *(undefined4 *)((longlong)puVar6 + 0x44) = local_38._4_4_;
        *(undefined4 *)(puVar6 + 9) = uStack_30;
        *(undefined4 *)((longlong)puVar6 + 0x4c) = uStack_2c;
        local_68 = 0;
        if (puVar6 != (undefined8 *)0x0) {
          puVar3 = *(undefined8 **)(param_1 + 0xe20);
          *(undefined8 **)(param_1 + 0xe20) = puVar6;
          *puVar3 = puVar6;
        }
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
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b8e2c FUN_1477b8e2c body=562 status=ok
// SIG undefined FUN_1477b8e2c(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff98 : 0x0001477b8fce */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1477b8e2c(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  code *pcVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *plStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  longlong lStack_98;
  code *local_88;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1433438ce(param_1,&local_b8,param_2);
  if (plStack_b0 != (longlong *)0x0) {
    iVar6 = (int)plStack_b0[1];
    do {
      if (iVar6 == 0) {
        plVar9 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar5 = (int)plStack_b0[1];
      bVar13 = iVar6 == iVar5;
      if (bVar13) {
        *(int *)(plStack_b0 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
      plVar9 = plStack_b0;
    } while (!bVar13);
    LOCK();
    piVar1 = (int *)((longlong)plStack_b0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_b0 + 0x10))();
    }
    if (plVar9 != (longlong *)0x0) {
      if (local_b8 != 0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        uVar3 = *param_4;
        lStack_98 = param_4[1];
        if (lStack_98 == 0) {
          lVar11 = 0;
        }
        else {
          LOCK();
          *(int *)(lStack_98 + 8) = *(int *)(lStack_98 + 8) + 1;
          UNLOCK();
          lVar11 = lStack_98;
        }
        local_88 = (code *)0x0;
        plStack_b0 = plVar9;
        local_a8 = param_3;
        local_a0 = uVar3;
        puVar7 = (undefined8 *)FUN_14001cc68(0x30,8);
        plVar2 = plStack_b0;
        lVar4 = local_b8;
        *puVar7 = &PTR_FUN_14a570660;
        local_b8 = 0;
        plStack_b0 = (longlong *)0x0;
        local_a0 = 0;
        lStack_98 = 0;
        plVar12 = puVar7 + 1;
        *plVar12 = lVar4;
        puVar7[2] = plVar2;
        *(undefined4 *)(puVar7 + 3) = param_3;
        puVar7[4] = uVar3;
        puVar7[5] = lVar11;
        if (plVar12 == (longlong *)0x0) {
          pcVar10 = (code *)0x0;
        }
        else {
          pcVar10 = FUN_1433525d0;
          local_88 = FUN_1433525d0;
        }
        puVar8 = (undefined8 *)FUN_14001cc68(0x50,0x10);
        *puVar8 = 0;
        puVar8[2] = pcVar10;
        puVar8[4] = puVar7;
        local_78 = 0;
        *(undefined4 *)(puVar8 + 8) = local_58;
        *(undefined4 *)((longlong)puVar8 + 0x44) = uStack_54;
        *(undefined4 *)(puVar8 + 9) = uStack_50;
        *(undefined4 *)((longlong)puVar8 + 0x4c) = uStack_4c;
        *(undefined4 *)(puVar8 + 6) = local_68;
        *(undefined4 *)((longlong)puVar8 + 0x34) = uStack_64;
        *(undefined4 *)(puVar8 + 7) = uStack_60;
        *(undefined4 *)((longlong)puVar8 + 0x3c) = uStack_5c;
        if (plVar12 != (longlong *)0x0) {
          local_88 = (code *)0x0;
        }
        if (puVar8 != (undefined8 *)0x0) {
          puVar7 = *(undefined8 **)(param_1 + 0xe20);
          *(undefined8 **)(param_1 + 0xe20) = puVar8;
          *puVar7 = puVar8;
          if (local_88 != (code *)0x0) {
            (**(code **)(CONCAT44(uStack_64,local_68) + 0x10))();
          }
        }
        FUN_1433489f8(&local_b8);
      }
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  plVar9 = (longlong *)param_4[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b9060 FUN_1477b9060 body=316 status=ok
// SIG undefined FUN_1477b9060(void)

/* WARNING: Removing unreachable block (ram,0x0001477b914c) */
/* WARNING: Removing unreachable block (ram,0x0001477b9158) */
/* WARNING: Removing unreachable block (ram,0x0001477b915c) */

void FUN_1477b9060(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1433438ce(param_1,&local_68,param_2);
  if (local_60 != (longlong *)0x0) {
    iVar5 = (int)local_60[1];
    do {
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_60[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(local_60 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar7 = local_60;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)local_60 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      if (local_68 != 0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        local_38 = &PTR_LAB_14a570680;
        uStack_30 = local_68;
        local_28 = plVar7;
        puVar6 = (undefined8 *)FUN_14001cc68(0x50,0x10);
        *puVar6 = 0;
        puVar6[2] = &LAB_14335273a;
        puVar6[4] = 0;
        local_48 = 0;
        *(undefined4 *)(puVar6 + 6) = (undefined4)local_38;
        *(undefined4 *)((longlong)puVar6 + 0x34) = local_38._4_4_;
        *(undefined4 *)(puVar6 + 7) = (undefined4)uStack_30;
        *(undefined4 *)((longlong)puVar6 + 0x3c) = uStack_30._4_4_;
        *(undefined4 *)(puVar6 + 8) = (undefined4)local_28;
        *(undefined4 *)((longlong)puVar6 + 0x44) = local_28._4_4_;
        *(undefined4 *)(puVar6 + 9) = uStack_20;
        *(undefined4 *)((longlong)puVar6 + 0x4c) = uStack_1c;
        local_58 = 0;
        if (puVar6 != (undefined8 *)0x0) {
          puVar3 = *(undefined8 **)(param_1 + 0xe20);
          *(undefined8 **)(param_1 + 0xe20) = puVar6;
          *puVar3 = puVar6;
        }
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
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b919e FUN_1477b919e body=79 status=ok
// SIG undefined FUN_1477b919e(void)

undefined8 * FUN_1477b919e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1477cca26(param_1,iVar1);
      FUN_1477cca88(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1477b91ee FUN_1477b91ee body=103 status=ok
// SIG undefined FUN_1477b91ee(void)

void FUN_1477b91ee(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145b399f6();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1477ccc9a(param_1 + 0x218,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b9256 FUN_1477b9256 body=166 status=ok
// SIG undefined FUN_1477b9256(void)

undefined8 * FUN_1477b9256(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 1477b92fc FUN_1477b92fc body=141 status=ok
// SIG undefined FUN_1477b92fc(void)

void FUN_1477b92fc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  
  *param_1 = &PTR_FUN_14a56cd70;
  if (*(char *)(param_1 + 4) == '\x01') {
    if (*(int *)(param_1 + 3) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)param_1[2];
    }
    FUN_140033559(".\\Runtime/AudioMixer/Private/AudioMixerBuffer.cpp",0x23,
                  L"Can\'t free resource \'%s\' as it was allocated in permanent pool.",puVar2);
  }
  puVar1 = (undefined8 *)param_1[7];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[7] = 0;
  }
  if (*(int *)(param_1 + 8) == 1) {
    if (*(char *)(param_1 + 0xc) != '\x01') goto LAB_1477b9373;
  }
  else if (*(int *)(param_1 + 8) != 0) goto LAB_1477b9373;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
LAB_1477b9373:
  FUN_14795ae66(param_1);
  return;
}



// FUNCTION 1477b938a FUN_1477b938a body=75 status=ok
// SIG undefined FUN_1477b938a(void)

int FUN_1477b938a(longlong param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  iVar2 = 0;
  if (uVar1 < 2) {
    iVar2 = *(int *)(param_1 + 0x58);
  }
  else if (uVar1 == 2) {
    if (*(longlong **)(param_1 + 0x38) == (longlong *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
    }
    iVar2 = *(int *)(param_1 + 0xc) * 0x2580 + iVar2;
  }
  else if (uVar1 == 3) {
    iVar2 = *(int *)(param_1 + 0xc) * 0x2580;
  }
  return iVar2;
}



// FUNCTION 1477b9402 FUN_1477b9402 body=71 status=ok
// SIG undefined FUN_1477b9402(void)

ulonglong FUN_1477b9402(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 8))();
    if (cVar2 == '\0') {
      uVar3 = 0;
    }
    else {
      puVar1 = *(undefined8 **)(param_1 + 0x30);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1477b966a FUN_1477b966a body=106 status=ok
// SIG undefined FUN_1477b966a(void)

undefined8 *
FUN_1477b966a(undefined8 *param_1,longlong param_2,undefined1 param_3,undefined4 param_4)

{
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
  *(undefined4 *)(param_1 + 10) = 1;
  *(undefined4 *)((longlong)param_1 + 0x54) = param_4;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x220);
  param_1[0xc] = param_2;
  FUN_145afe678(param_1 + 0xd);
  FUN_1477b96d4(param_1 + 0x22);
  *(undefined1 *)(param_1 + 0x30) = param_3;
  FUN_1477b9738(param_1,*(undefined4 *)((longlong)param_1 + 0x54));
  return param_1;
}



// FUNCTION 1477b96d4 FUN_1477b96d4 body=99 status=ok
// SIG undefined FUN_1477b96d4(void)

undefined8 * FUN_1477b96d4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 2),4000);
  param_1[7] = 0;
  param_1[8] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 9),4000);
  return param_1;
}



// FUNCTION 1477b9738 FUN_1477b9738 body=172 status=ok
// SIG undefined FUN_1477b9738(void)

void FUN_1477b9738(longlong param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x54) = param_2;
  lVar8 = (longlong)param_2 * (longlong)*(int *)(param_1 + 0x58);
  lVar5 = 0;
  bVar3 = true;
  do {
    bVar6 = bVar3;
    plVar1 = (longlong *)(param_1 + 0x30 + lVar5 * 0x10);
    iVar4 = *(int *)(param_1 + 0x3c + lVar5 * 0x10);
    iVar7 = 0;
    if (iVar4 < 0) {
      *(undefined4 *)(plVar1 + 1) = 0;
      FUN_1470345fa(plVar1);
      iVar7 = (int)plVar1[1];
      iVar4 = *(int *)((longlong)plVar1 + 0xc);
    }
    uVar2 = (uint)lVar8;
    *(uint *)(plVar1 + 1) = iVar7 + uVar2;
    if ((uint)(iVar4 - iVar7) < uVar2) {
      FUN_145ca0cd4(plVar1);
    }
    memset((void *)((longlong)iVar7 * 4 + *plVar1),0,lVar8 * 4);
    lVar5 = 1;
    bVar3 = false;
  } while (bVar6);
  return;
}



// FUNCTION 1477b97e4 FUN_1477b97e4 body=123 status=ok
// SIG undefined FUN_1477b97e4(void)

void FUN_1477b97e4(longlong param_1,byte param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = (ulonglong)param_2 * 0x10;
  lVar2 = *(longlong *)(param_1 + 0x10 + lVar3);
  iVar1 = *(int *)(param_1 + 0x18 + lVar3);
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    lVar5 = 0;
    do {
      if (*(int *)(lVar2 + lVar5) == *param_3) {
        *(int *)(lVar2 + 4 + lVar5) = param_3[1];
        return;
      }
      lVar5 = lVar5 + 8;
    } while (lVar4 * 8 - lVar5 != 0);
  }
  param_1 = param_1 + lVar3;
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_1477cce10((longlong *)(param_1 + 0x10),iVar1);
    lVar2 = *(longlong *)(param_1 + 0x10);
  }
  *(undefined8 *)(lVar2 + lVar4 * 8) = *(undefined8 *)param_3;
  return;
}



// FUNCTION 1477b9860 FUN_1477b9860 body=143 status=ok
// SIG undefined FUN_1477b9860(void)

undefined8 FUN_1477b9860(longlong param_1,byte param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  
  lVar2 = param_1 + (ulonglong)param_2 * 0x10;
  uVar5 = *(uint *)(lVar2 + 0x18);
  uVar6 = (ulonglong)uVar5;
  iVar9 = -1;
  uVar8 = uVar6;
  do {
    if ((int)uVar8 < 1) goto LAB_1477b98c8;
    uVar1 = uVar8 - 1;
    lVar4 = *(longlong *)(lVar2 + 0x10);
    iVar9 = iVar9 + 1;
    lVar3 = uVar8 * 8;
    uVar8 = uVar1;
  } while (*(int *)(lVar4 + -8 + lVar3) != param_3);
  if (iVar9 != 0) {
    iVar10 = 1;
    if (iVar9 < 1) {
      iVar10 = iVar9;
    }
    memmove((void *)(lVar4 + uVar1 * 8),(void *)(lVar4 + (longlong)(int)(uVar5 - iVar10) * 8),
            (longlong)iVar10 << 3);
    uVar5 = *(uint *)(lVar2 + 0x18);
  }
  uVar6 = (ulonglong)(uVar5 - 1);
  *(uint *)(lVar2 + 0x18) = uVar5 - 1;
LAB_1477b98c8:
  if (((*(char *)(param_1 + 0x180) == '\x01') && (*(int *)(param_1 + 8) == 0)) &&
     (*(int *)(param_1 + 0x18) == 0)) {
    uVar7 = CONCAT71((int7)(uVar6 >> 8),*(int *)(param_1 + 0x28) == 0);
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 1477b98f0 FUN_1477b98f0 body=628 status=ok
// SIG undefined FUN_1477b98f0(void)

void FUN_1477b98f0(longlong param_1)

{
  int *piVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  ulonglong uVar13;
  int *piVar14;
  bool bVar15;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong local_b0;
  int local_a8;
  int local_a4;
  longlong local_a0;
  longlong local_98;
  int local_90;
  undefined8 local_88;
  int local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a4 = *(int *)(param_1 + 0x54) * *(int *)(param_1 + 0x58);
  local_a8 = *(int *)(*(longlong *)(param_1 + 0x60) + 0x220);
  uVar5 = *(undefined8 *)(param_1 + 0x30 + (longlong)*(int *)(param_1 + 0x50) * 0x10);
  bVar12 = false;
  FUN_1470386d8(param_1 + 0x68,uVar5,local_a4,0);
  local_a0 = param_1 + 0x10;
  lVar8 = 0;
  bVar15 = true;
  do {
    lVar9 = (longlong)*(int *)(local_a0 + 8 + lVar8 * 0x10);
    if (lVar9 != 0) {
      piVar14 = *(int **)(local_a0 + lVar8 * 0x10);
      piVar1 = piVar14 + lVar9 * 2;
      do {
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x118);
        lVar9 = (longlong)*piVar14 * 0x540;
        if (*(int *)(lVar8 + 0xe0 + lVar9) == -1) {
          bVar3 = *(byte *)(lVar8 + 0x520 + lVar9);
          if (bVar12) {
            if ((bVar3 & 0x30) == 0) {
              lVar8 = *(longlong *)(lVar8 + lVar9 + 0x50);
LAB_1477b99ee:
              if (lVar8 != 0) {
                lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x118);
                iVar4 = *(int *)(lVar6 + 0x524 + (longlong)*piVar14 * 0x540);
                if (iVar4 == *(int *)(param_1 + 0x54)) {
                  local_90 = iVar4 * local_a8;
                  local_98 = lVar8;
                  local_88 = uVar5;
                  local_80 = local_90;
                  FUN_142af2795(&local_98,&local_88,piVar14[1]);
                }
                else {
                  local_78 = 0;
                  uStack_70 = 0;
                  lVar11 = (longlong)*piVar14 * 0x540;
                  uVar13 = CONCAT71((int7)((ulonglong)lVar9 >> 8),
                                    *(undefined1 *)(lVar6 + 0x520 + lVar11)) & 0xffffffffffffff02;
                  uVar10 = CONCAT71((int7)(int3)((uint)*piVar14 >> 8),
                                    *(undefined1 *)(lVar6 + 0x522 + lVar11)) & 0xffffffffffffff08;
                  local_b8 = &local_78;
                  FUN_143343e04(CONCAT71((int7)(uVar10 >> 8),(byte)uVar10 >> 3),
                                *(undefined4 *)(lVar6 + 0x524 + lVar11),*(int *)(param_1 + 0x54),
                                CONCAT71((int7)(uVar13 >> 8),(byte)uVar13 >> 1));
                  if ((longlong)(int)uStack_70 != 0) {
                    fVar2 = (float)piVar14[1];
                    lVar9 = 0;
                    do {
                      *(float *)(local_78 + lVar9) = *(float *)(local_78 + lVar9) * fVar2;
                      lVar9 = lVar9 + 4;
                    } while ((longlong)(int)uStack_70 * 4 != lVar9);
                  }
                  local_b0 = local_78;
                  local_b8 = (longlong *)CONCAT44(local_b8._4_4_,local_a8);
                  FUN_14702f521(iVar4,*(undefined4 *)(param_1 + 0x54),lVar8,uVar5);
                  if (local_78 != 0) {
                    FUN_1400020a8();
                  }
                }
              }
            }
          }
          else if ((bVar3 & 0x30) == 0) {
            lVar8 = *(longlong *)(lVar8 + lVar9 + 0x40);
            goto LAB_1477b99ee;
          }
        }
        else if (*piVar14 < *(int *)(*(longlong *)(param_1 + 0x60) + 0x120)) {
          lVar8 = FUN_1477c8502();
          goto LAB_1477b99ee;
        }
        piVar14 = piVar14 + 2;
      } while (piVar14 != piVar1);
    }
    lVar8 = 1;
    bVar12 = true;
    bVar7 = !bVar15;
    bVar15 = false;
    if (bVar7) {
      FUN_147038dd4(param_1 + 0x110,uVar5,local_a4);
      if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 1477b9b66 FUN_1477b9b66 body=154 status=ok
// SIG undefined FUN_1477b9b66(void)

void FUN_1477b9b66(longlong param_1,int param_2,int param_3,byte param_4)

{
  byte bVar1;
  undefined1 auStack_38 [36];
  int local_14;
  int local_10;
  undefined1 local_c;
  byte local_b;
  byte local_a;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (0xfffffff7 < param_3 - 9U && 0xfffffff7 < param_2 - 9U) {
    local_c = 0;
    bVar1 = (byte)*(undefined4 *)(param_1 + 0xc34);
    local_b = 1;
    if (bVar1 < 3) {
      local_b = bVar1;
    }
    local_14 = param_2;
    local_10 = param_3;
    local_a = param_4;
    FUN_14702fb8f(&local_14,
                  (ulonglong)((param_2 + param_3 * 8 + (uint)param_4 * 0x40) - 9) * 0x10 +
                  DAT_14cabafa0);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b9c02 FUN_1477b9c02 body=288 status=ok
// SIG undefined FUN_1477b9c02(void)

void FUN_1477b9c02(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (DAT_14cabafa8 == 0) {
    DAT_14cabafa8 = 0x80;
    if (DAT_14cabafac < 0x80) {
      FUN_146d8b2f2(&DAT_14cabafa0);
    }
    memset(DAT_14cabafa0,0,0x800);
    iVar5 = DAT_14cabafb8;
    lVar6 = (longlong)DAT_14cabafb8;
    iVar3 = DAT_14cabafb8 + 8;
    uVar4 = DAT_14cabafbc - DAT_14cabafb8;
    DAT_14cabafb8 = iVar3;
    if (uVar4 < 8) {
      FUN_146d8b2f2(&DAT_14cabafb0,iVar5);
    }
    lVar2 = DAT_14cabafb0;
    lVar6 = lVar6 * 0x10;
    puVar1 = (undefined8 *)(DAT_14cabafb0 + 0x70 + lVar6);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x60 + lVar6);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x50 + lVar6);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x40 + lVar6);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x30 + lVar6);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar6);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar6);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar2 + lVar6) = 0;
    ((undefined8 *)(lVar2 + lVar6))[1] = 0;
    uVar7 = 1;
    do {
      iVar5 = 1;
      do {
        FUN_1477b9b66(param_1,iVar5,uVar7 & 0xffffffff,1);
        FUN_1477b9b66(param_1,iVar5,uVar7 & 0xffffffff,0);
        iVar5 = iVar5 + 1;
      } while (iVar5 != 9);
      FUN_14702fc04(uVar7 & 0xffffffff,0,DAT_14cabafb0 + uVar7 * 0x10 + -0x10);
      uVar7 = uVar7 + 1;
    } while (uVar7 != 9);
  }
  return;
}



// FUNCTION 1477b9d22 FUN_1477b9d22 body=193 status=ok
// SIG undefined FUN_1477b9d22(void)

void FUN_1477b9d22(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined4 *local_38;
  longlong local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = param_2;
  local_30 = param_3;
  if (DAT_14cabafe0 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
    local_38 = &local_3c;
    FUN_1477ccf7c(param_1,local_24);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  }
  else {
    local_38 = &local_3c;
    FUN_1477ccf7c(param_1,local_24);
  }
  plVar3 = *(longlong **)(param_3 + 8);
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477b9de4 FUN_1477b9de4 body=303 status=ok
// SIG undefined FUN_1477b9de4(void)

undefined8 * FUN_1477b9de4(longlong *param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if (DAT_14cabafe0 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar2 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar2 = (longlong *)param_1[8];
      }
      iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
      if (iVar3 != -1) {
        do {
          lVar1 = *param_1 + (longlong)iVar3 * 0x20;
          if (*(uint *)(*param_1 + (longlong)iVar3 * 0x20) == param_3) {
            if (lVar1 != 0) {
              *param_2 = *(undefined8 *)(lVar1 + 8);
              lVar1 = *(longlong *)(lVar1 + 0x10);
              param_2[1] = lVar1;
              if (lVar1 != 0) {
                LOCK();
                *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
                UNLOCK();
              }
              goto LAB_1477b9e39;
            }
            break;
          }
          iVar3 = *(int *)(lVar1 + 0x18);
        } while (iVar3 != -1);
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
LAB_1477b9e39:
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  }
  else {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar2 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar2 = (longlong *)param_1[8];
      }
      iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
      if (iVar3 != -1) {
        do {
          lVar1 = *param_1 + (longlong)iVar3 * 0x20;
          if (*(uint *)(*param_1 + (longlong)iVar3 * 0x20) == param_3) {
            if (lVar1 != 0) {
              *param_2 = *(undefined8 *)(lVar1 + 8);
              lVar1 = *(longlong *)(lVar1 + 0x10);
              param_2[1] = lVar1;
              if (lVar1 == 0) {
                return param_2;
              }
              LOCK();
              *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
              UNLOCK();
              return param_2;
            }
            break;
          }
          iVar3 = *(int *)(lVar1 + 0x18);
        } while (iVar3 != -1);
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_2;
}



// FUNCTION 1477b9f14 FUN_1477b9f14 body=78 status=ok
// SIG undefined FUN_1477b9f14(void)

void FUN_1477b9f14(longlong param_1,undefined4 param_2)

{
  if (DAT_14cabafe0 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
    FUN_1477cd46a(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001477b9f4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
    return;
  }
  FUN_1477cd46a(param_1,param_2);
  return;
}



// FUNCTION 1477b9f62 FUN_1477b9f62 body=110 status=ok
// SIG undefined FUN_1477b9f62(void)

void FUN_1477b9f62(longlong param_1)

{
  if (DAT_14cabafe0 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
    if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
      FUN_1477cd57a(param_1);
      FUN_1477cd6be(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x0001477b9fa1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
    return;
  }
  if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0x34)) {
    return;
  }
  FUN_1477cd57a(param_1);
  FUN_1477cd6be(param_1);
  return;
}



// FUNCTION 1477b9fd0 FUN_1477b9fd0 body=195 status=ok
// SIG undefined FUN_1477b9fd0(void)

undefined8 * FUN_1477b9fd0(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  longlong local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  local_68 = 0;
  uStack_60 = 0;
  FUN_1477ba094(param_1);
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  local_50 = local_68;
  local_48 = (undefined4)uStack_60;
  FUN_146f44354(param_2);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477ba094 FUN_1477ba094 body=310 status=ok
// SIG undefined FUN_1477ba094(void)

void FUN_1477ba094(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
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
  iVar2 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar2) {
    FUN_14480809c(param_2);
  }
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar3 = (longlong)iStack_54;
      lVar1 = *local_70;
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1447808da(param_2,iVar2);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar2 * 4) = *(undefined4 *)(lVar3 * 0x20 + lVar1);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477ba1cc FUN_1477ba1cc body=1515 status=ok
// SIG undefined FUN_1477ba1cc(void)

void FUN_1477ba1cc(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  wchar_t *pwVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 *****pppppuVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  wchar_t *local_160;
  undefined8 local_150;
  longlong local_148;
  longlong *local_140;
  undefined8 local_138;
  uint *local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_114;
  undefined8 ****local_110;
  uint *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  longlong local_e8;
  int local_e0;
  uint local_d8 [6];
  int local_c0;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_140047918(param_2,L"AudioDevice=%d, Device Instance=0x%p",*(undefined4 *)(param_1 + 0x90),
                param_1);
  if ((longlong)*(int *)(param_3 + 1) != 0) {
    puVar14 = (undefined8 *)*param_3;
    lVar15 = (longlong)*(int *)(param_3 + 1) << 4;
    do {
      puVar8 = &DAT_149dfb77a;
      if (*(int *)(puVar14 + 1) != 0) {
        puVar8 = (undefined2 *)*puVar14;
      }
      cVar5 = FUN_14054d46e(puVar8,L"Instances");
      if (cVar5 != '\0') {
        if ((puVar14 != (undefined8 *)0x0) &&
           (FUN_1468161aa(param_2,L"[Instance Hierarchy]"), 0 < *(int *)(param_1 + 0xb40))) {
          lVar16 = 0;
          lVar15 = 0;
          do {
            pwVar10 = L"Unknown";
            if ((byte)lVar15 < 5) {
              pwVar10 = (wchar_t *)(&PTR_u_ERequiredSubmixes_Main_14a5714c0)[(uint)lVar15 & 7];
            }
            FUN_140047918(param_2,L"SlotName=[%s]",pwVar10);
            FUN_143344922(*(undefined8 *)(*(longlong *)(param_1 + 0xb48) + lVar16),1,param_2);
            lVar15 = lVar15 + 1;
            lVar16 = lVar16 + 0x10;
          } while (lVar15 < *(int *)(param_1 + 0xb40));
        }
        break;
      }
      puVar14 = puVar14 + 2;
      lVar15 = lVar15 + -0x10;
    } while (lVar15 != 0);
    if ((longlong)*(int *)(param_3 + 1) != 0) {
      puVar14 = (undefined8 *)*param_3;
      lVar15 = (longlong)*(int *)(param_3 + 1) << 4;
      do {
        puVar8 = &DAT_149dfb77a;
        if (*(int *)(puVar14 + 1) != 0) {
          puVar8 = (undefined2 *)*puVar14;
        }
        cVar5 = FUN_14054d46e(puVar8,&DAT_149e3a952);
        if (cVar5 != '\0') {
          if (puVar14 != (undefined8 *)0x0) {
            FUN_1468161aa(param_2,L"[Map of UObject -> SubmixPtrs]");
            local_78 = 0;
            local_70 = 0;
            local_98 = 0;
            uStack_90 = 0;
            local_6c = 0xffffffff00000080;
            local_64 = 0;
            local_58 = (undefined1 *)0x0;
            local_50 = 0;
            FUN_1477ba7b8(&local_e8);
            uVar11 = (ulonglong)local_d8[0];
            if ((-1 < (int)local_d8[0]) && ((int)local_d8[0] < local_e0)) {
              do {
                local_110 = *(undefined8 *****)(local_e8 + (uVar11 & 0xffffffff) * 8);
                local_114 = *(undefined4 *)((longlong)local_110 + 0xc);
                local_140 = (longlong *)&local_114;
                local_138 = &local_110;
                FUN_1477cd7f6(&local_98,&local_f0,&local_140);
                uVar11 = (longlong)(int)local_d8[0];
                do {
                  uVar12 = uVar11;
                  uVar11 = uVar12 + 1;
                  local_d8[0] = (uint)uVar11;
                  if ((longlong)local_e0 <= (longlong)uVar11) break;
                } while (*(longlong *)(local_e8 + uVar11 * 8) == 0);
              } while ((-2 < (longlong)uVar12) && ((int)local_d8[0] < local_e0));
            }
            if (local_e8 != 0) {
              FUN_1400020a8();
            }
            FUN_1477b9fd0(param_1 + 0xce0,&local_e8);
            local_110 = (undefined8 ****)&DAT_100000000;
            local_100 = 0xffffffff;
            local_f8 = 0;
            iVar9 = 0;
            local_108 = local_d8;
            if (local_c0 != 0) {
              FUN_1449c0562(&local_110);
              iVar9 = local_c0;
            }
            local_128 = local_100;
            uVar4 = local_128;
            local_120 = local_f8;
            local_11c = local_f4;
            local_138 = (undefined8 *****)local_110;
            local_130 = local_108;
            local_140 = &local_e8;
            local_128._4_4_ = (int)((ulonglong)local_100 >> 0x20);
            if ((local_128._4_4_ != iVar9) || (local_108 != local_d8)) {
              iVar6 = local_128._4_4_;
              local_128 = uVar4;
              do {
                uVar2 = *(uint *)(*local_140 + (longlong)iVar6 * 0xc);
                if ((int)uStack_90 != local_64) {
                  puVar7 = local_58;
                  if (local_58 == (undefined1 *)0x0) {
                    puVar7 = local_60;
                  }
                  uVar3 = *(uint *)(puVar7 + (ulonglong)(local_50 - 1U & uVar2) * 4);
                  while (uVar3 != 0xffffffff) {
                    puVar1 = (uint *)(local_98 + (longlong)(int)uVar3 * 0x18);
                    if (*puVar1 == uVar2) {
                      if (puVar1 + 2 != (uint *)0x0 && puVar1 != (uint *)0x0) {
                        lVar15 = *(longlong *)(puVar1 + 2);
                        if (lVar15 == 0) {
                          FUN_140056680(&local_110,&DAT_149e01fe8);
                        }
                        else {
                          local_f0 = *(undefined8 *)(lVar15 + 0x18);
                          FUN_1400021e4(&local_f0,&local_110);
                        }
                        pppppuVar13 = (undefined8 *****)&DAT_149dfb77a;
                        if ((int)local_108 != 0) {
                          pppppuVar13 = (undefined8 *****)local_110;
                        }
                        FUN_140047918(param_2,L"%u -> %s",uVar2,pppppuVar13);
                        if ((undefined8 *****)local_110 != (undefined8 *****)0x0) {
                          FUN_1400020a8();
                        }
                        goto LAB_1477ba69a;
                      }
                      break;
                    }
                    uVar3 = puVar1[4];
                  }
                }
                FUN_140047918(param_2,L"%u -> %s",uVar2,L"Not found");
LAB_1477ba69a:
                local_128 = CONCAT44(local_128._4_4_,(uint)local_128 & ~local_138._4_4_);
                FUN_1449c0562(&local_138);
                iVar6 = local_128._4_4_;
                uVar4 = local_128;
              } while (local_140 != &local_e8 || (local_130 != local_d8 || local_128._4_4_ != iVar9)
                      );
            }
            local_128 = uVar4;
            local_a0 = 0;
            if (local_a8 != 0) {
              FUN_1400020a8();
            }
            FUN_1401bc218(&local_e8);
            local_50 = 0;
            if (local_58 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
            FUN_1477c8d34(&local_98);
          }
          break;
        }
        puVar14 = puVar14 + 2;
        lVar15 = lVar15 + -0x10;
      } while (lVar15 != 0);
    }
  }
  FUN_1468161aa(param_2,L"[Map of UObject Hierarchy]");
  if (0 < *(int *)(param_1 + 0xb40)) {
    lVar16 = 8;
    lVar15 = 0;
    do {
      pwVar10 = L"Unknown";
      if ((byte)lVar15 < 5) {
        pwVar10 = (wchar_t *)(&PTR_u_ERequiredSubmixes_Main_14a5714c0)[(uint)lVar15 & 7];
      }
      FUN_140047918(param_2,L"SlotName=[%s]",pwVar10);
      local_150 = *(undefined8 *)(*(longlong *)(param_1 + 0xb48) + -8 + lVar16);
      local_148 = *(longlong *)(*(longlong *)(param_1 + 0xb48) + lVar16);
      if (local_148 != 0) {
        LOCK();
        *(int *)(local_148 + 8) = *(int *)(local_148 + 8) + 1;
        UNLOCK();
      }
      local_160 = L"In Slot";
      local_168 = param_2;
      FUN_143344ba7(*(undefined8 *)(*(longlong *)(param_1 + 0xb38) + lVar15 * 8),&local_150,param_1,
                    1);
      lVar15 = lVar15 + 1;
      lVar16 = lVar16 + 0x10;
    } while (lVar15 < *(int *)(param_1 + 0xb40));
  }
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477ba7b8 FUN_1477ba7b8 body=107 status=ok
// SIG undefined FUN_1477ba7b8(void)

longlong * FUN_1477ba7b8(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_14113d362();
  FUN_14123d74c(uVar2,param_1,1,0x10,uVar1 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 1477ba824 FUN_1477ba824 body=920 status=ok
// SIG undefined FUN_1477ba824(void)

undefined8 * FUN_1477ba824(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14795deac();
  param_1[0x14c] = &PTR__purecall_14a56ffd0;
  *(undefined1 *)(param_1 + 0x14d) = 0;
  param_1[0x14e] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 0x14f) = 0;
  FUN_1405bceb4(param_1 + 0x14e);
  *param_1 = &PTR_FUN_14a56d990;
  param_1[0x14c] = &PTR_FUN_14a56dbe0;
  param_1[0x14e] = &PTR_FUN_14a56dbf0;
  FUN_1477e3f5c(param_1 + 0x150,param_1);
  param_1[0x15e] = 0;
  param_1[0x15f] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x160));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x160),4000);
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = param_2;
  lVar1 = 0xb7c;
  do {
    *(undefined4 *)((longlong)param_1 + lVar1 + -0xc) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + -8) = 0;
    *(undefined4 *)((longlong)param_1 + lVar1) = 0x3f800000;
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0xc2c);
  param_1[0x184] = 0;
  param_1[0x185] = 0;
  param_1[0x187] = 0x400ffffffff;
  *(undefined4 *)(param_1 + 0x188) = 1;
  param_1[0x189] = 0;
  *(undefined4 *)(param_1 + 0x18a) = 0xac44;
  *(undefined1 *)((longlong)param_1 + 0xc54) = 0;
  *(undefined4 *)(param_1 + 0x18b) = 0;
  param_1[0x18c] = 0;
  param_1[0x18d] = 0;
  *(undefined4 *)(param_1 + 0x18e) = 0xbf800000;
  param_1[399] = 0;
  param_1[400] = 0;
  param_1[0x191] = 0;
  param_1[0x192] = 0x3fa999999999999a;
  param_1[0x193] = 0;
  param_1[0x194] = 0;
  param_1[0x195] = 0;
  param_1[0x196] = 0;
  param_1[0x199] = 0;
  param_1[0x19a] = 0;
  FUN_147042096(param_1 + 0x193);
  param_1[0x1a0] = 0;
  *(undefined4 *)(param_1 + 0x1a1) = 0;
  param_1[0x19c] = 0;
  param_1[0x19d] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd14) = 0;
  param_1[0x1a4] = 0;
  *(undefined4 *)(param_1 + 0x1a5) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a6));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1a6),4000);
  param_1[0x1ab] = 0;
  param_1[0x1ac] = 0;
  param_1[0x1ad] = 0;
  param_1[0x1ae] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1af));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1af),4000);
  param_1[0x1b4] = 0;
  param_1[0x1b5] = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  param_1[0x1b7] = puVar2;
  param_1[0x1b6] = puVar2;
  param_1[0x1bc] = 0;
  *(undefined4 *)(param_1 + 0x1bd) = 0;
  param_1[0x1b8] = 0;
  param_1[0x1b9] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdf4) = 0;
  param_1[0x1c0] = 0;
  *(undefined4 *)(param_1 + 0x1c1) = 0;
  param_1[0x1c2] = 0;
  param_1[0x1c3] = 0xffffffffffffffff;
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar2 = 0;
  puVar2[2] = 0;
  puVar2[4] = 0;
  param_1[0x1c5] = puVar2;
  param_1[0x1c4] = puVar2;
  param_1[0x1c6] = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar2 = 0;
  param_1[0x1c6] = puVar2;
  param_1[0x1c7] = puVar2;
  param_1[0x1c8] = 0;
  *(undefined2 *)(param_1 + 0x1c9) = 0x100;
  *(byte *)((longlong)param_1 + 0x592) = *(byte *)((longlong)param_1 + 0x592) | 0x20;
  uVar3 = FUN_14001cc68(0x2c0,0x10);
  FUN_1477c4f7e(uVar3,param_1);
  lVar1 = param_1[0x1c2];
  param_1[0x1c2] = uVar3;
  if (lVar1 != 0) {
    FUN_1477c518a(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_1477b2c98(&local_60);
  if (0 < local_58) {
    uVar3 = FUN_1477b2d5a(*local_60);
    param_1[0x1c8] = uVar3;
  }
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477babbe FUN_1477babbe body=566 status=ok
// SIG undefined FUN_1477babbe(void)

void FUN_1477babbe(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14a56d990;
  param_1[0x14c] = &PTR_FUN_14a56dbe0;
  param_1[0x14e] = &PTR_FUN_14a56dbf0;
  FUN_1477e42b8(param_1 + 0x150);
  plVar3 = (longlong *)param_1[0x16d];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,1);
  }
  FUN_1477badf4(param_1 + 0x1c6);
  FUN_14585d2b6(param_1 + 0x1c4);
  lVar4 = param_1[0x1c2];
  if (lVar4 != 0) {
    FUN_1477c518a(lVar4);
    FUN_1400020a8(lVar4);
  }
  *(undefined4 *)(param_1 + 0x1c1) = 0;
  if (param_1[0x1c0] != 0) {
    FUN_1400020a8();
  }
  FUN_1477c9382(param_1 + 0x1b8);
  while ((undefined8 *)param_1[0x1b7] != (undefined8 *)0x0) {
    param_1[0x1b7] = *(undefined8 *)param_1[0x1b7];
    FUN_1400020a8();
  }
  if (param_1[0x1b4] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1af));
  FUN_1477cdc92(param_1[0x1ad],*(undefined4 *)(param_1 + 0x1ae));
  if (param_1[0x1ad] != 0) {
    FUN_1400020a8();
  }
  FUN_1477cdc92(param_1[0x1ab],*(undefined4 *)(param_1 + 0x1ac));
  if (param_1[0x1ab] != 0) {
    FUN_1400020a8();
  }
  FUN_1477bae52(param_1 + 0x19c);
  FUN_147041ad4(param_1 + 0x193);
  if (param_1[0x184] != 0) {
    FUN_1400020a8();
  }
  FUN_145caaaad(param_1[0x16b],*(undefined4 *)(param_1 + 0x16c));
  if (param_1[0x16b] != 0) {
    FUN_1400020a8();
  }
  FUN_1477cdc92(param_1[0x169],*(undefined4 *)(param_1 + 0x16a));
  if (param_1[0x169] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x167] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x165] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x160));
  plVar3 = (longlong *)param_1[0x15f];
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
  FUN_1458ec406(param_1 + 0x150);
  param_1[0x14e] = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1 + 0x14e);
  FUN_14795e458(param_1);
  return;
}



// FUNCTION 1477badf4 FUN_1477badf4 body=93 status=ok
// SIG undefined FUN_1477badf4(void)

void FUN_1477badf4(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 8);
  FUN_1400020a8();
  while (puVar3 != (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 8) = puVar3;
    puVar1 = (undefined8 *)*puVar3;
    if (puVar3[2] != 0) {
      plVar2 = puVar3 + 6;
      if ((longlong *)puVar3[4] != (longlong *)0x0) {
        plVar2 = (longlong *)puVar3[4];
      }
      (**(code **)(*plVar2 + 0x10))(plVar2);
      puVar3 = *(undefined8 **)(param_1 + 8);
    }
    FUN_1400020a8(puVar3);
    puVar3 = puVar1;
  }
  return;
}



// FUNCTION 1477bae52 FUN_1477bae52 body=52 status=ok
// SIG undefined FUN_1477bae52(void)

void FUN_1477bae52(longlong param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1477c94f0(param_1);
  return;
}



// FUNCTION 1477bae88 FUN_1477bae88 body=351 status=ok
// SIG undefined FUN_1477bae88(void)

void FUN_1477bae88(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined ***pppuVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_2 + 1);
  lVar4 = (longlong)local_70;
  pvVar1 = (void *)*param_2;
  local_80 = param_1;
  if (lVar4 == 0) {
    local_6c = 0;
    iVar3 = 0;
  }
  else {
    FUN_144756262(&local_78,local_70,0);
    memcpy(local_78,pvVar1,lVar4 * 0x60);
    iVar3 = local_70;
  }
  pvVar1 = local_78;
  local_68[0] = (code *)0x0;
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_FUN_14a571220;
  local_38 = (void *)0x0;
  local_40 = local_80;
  local_30 = iVar3;
  if (iVar3 == 0) {
    local_2c = 0;
  }
  else {
    FUN_144756262(&local_38,iVar3,0);
    memcpy(local_38,pvVar1,(longlong)iVar3 * 0x60);
  }
  local_68[0] = FUN_14335845e;
  FUN_14334e164(param_1,local_68,"SetListenerTransforms()",0);
  if (local_68[0] != (code *)0x0) {
    pppuVar2 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar2 = &local_48;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477bb002 FUN_1477bb002 body=1121 status=ok
// SIG undefined FUN_1477bb002(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1477bb002(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  _func_5014 *p_Var3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_c8 [32];
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
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar4 = (undefined8 *)0x0;
  if (param_2 - 1U < 8) {
    puVar1 = (undefined8 *)(param_1 + 0xb70);
    switch(param_2) {
    case 1:
      puVar4 = &DAT_14cabb080;
      if (DAT_14cabb090 <=
          *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110)) goto switchD_1477bb045_caseD_3;
      puVar5 = &DAT_14cabb090;
      FUN_144b3d300(&DAT_14cabb090);
      if (DAT_14cabb090 != -1) goto switchD_1477bb045_caseD_3;
      DAT_14cabb080 = (undefined4 *)0x0;
      puVar4 = &DAT_14cabb080;
      _DAT_14cabb088 = 1;
      FUN_14635ffce(&DAT_14cabb080,1,0);
      puVar2 = DAT_14cabb080;
      *DAT_14cabb080 = 2;
      *(undefined8 *)(puVar2 + 1) = 0;
      puVar2[3] = 0x3f800000;
      p_Var3 = (_func_5014 *)&LAB_1433450ca;
      break;
    case 2:
      puVar4 = &DAT_14cabb098;
      if (DAT_14cabb0a8 <=
          *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110)) goto switchD_1477bb045_caseD_3;
      puVar5 = &DAT_14cabb0a8;
      FUN_144b3d300(&DAT_14cabb0a8);
      if (DAT_14cabb0a8 != -1) goto switchD_1477bb045_caseD_3;
      local_a8 = *puVar1;
      uStack_a0 = *(undefined8 *)(param_1 + 0xb78);
      local_98 = *(undefined8 *)(param_1 + 0xb80);
      uStack_90 = *(undefined8 *)(param_1 + 0xb88);
      DAT_14cabb098 = (undefined8 *)0x0;
      puVar4 = &DAT_14cabb098;
      _DAT_14cabb0a0 = 2;
      FUN_14635ffce(&DAT_14cabb098,2,0);
      puVar1 = DAT_14cabb098;
      DAT_14cabb098[2] = local_98;
      puVar1[3] = uStack_90;
      *puVar1 = local_a8;
      puVar1[1] = uStack_a0;
      p_Var3 = (_func_5014 *)&LAB_1433450db;
      break;
    default:
      goto switchD_1477bb045_caseD_3;
    case 4:
      puVar4 = &DAT_14cabb0b0;
      if (DAT_14cabb0c0 <=
          *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110)) goto switchD_1477bb045_caseD_3;
      puVar5 = &DAT_14cabb0c0;
      FUN_144b3d300(&DAT_14cabb0c0);
      if (DAT_14cabb0c0 != -1) goto switchD_1477bb045_caseD_3;
      local_a8 = *puVar1;
      uStack_a0 = *(undefined8 *)(param_1 + 0xb78);
      local_98 = *(undefined8 *)(param_1 + 0xb80);
      uStack_90 = *(undefined8 *)(param_1 + 0xb88);
      local_88 = *(undefined8 *)(param_1 + 0xc00);
      uStack_80 = *(undefined8 *)(param_1 + 0xc08);
      local_78 = *(undefined8 *)(param_1 + 0xc10);
      uStack_70 = *(undefined8 *)(param_1 + 0xc18);
      DAT_14cabb0b0 = (undefined8 *)0x0;
      puVar4 = &DAT_14cabb0b0;
      _DAT_14cabb0b8 = 4;
      FUN_14635ffce(&DAT_14cabb0b0,4,0);
      puVar1 = DAT_14cabb0b0;
      DAT_14cabb0b0[6] = local_78;
      puVar1[7] = uStack_70;
      puVar1[4] = local_88;
      puVar1[5] = uStack_80;
      puVar1[2] = local_98;
      puVar1[3] = uStack_90;
      *puVar1 = local_a8;
      puVar1[1] = uStack_a0;
      p_Var3 = (_func_5014 *)&LAB_1433450ec;
      break;
    case 6:
      puVar4 = &DAT_14cabb0c8;
      if (DAT_14cabb0d8 <=
          *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110)) goto switchD_1477bb045_caseD_3;
      puVar5 = &DAT_14cabb0d8;
      FUN_144b3d300(&DAT_14cabb0d8);
      if (DAT_14cabb0d8 != -1) goto switchD_1477bb045_caseD_3;
      local_a8 = *puVar1;
      uStack_a0 = *(undefined8 *)(param_1 + 0xb78);
      local_98 = *(undefined8 *)(param_1 + 0xb80);
      uStack_90 = *(undefined8 *)(param_1 + 0xb88);
      local_88 = *(undefined8 *)(param_1 + 0xb90);
      uStack_80 = *(undefined8 *)(param_1 + 0xb98);
      local_78 = *(undefined8 *)(param_1 + 0xba0);
      uStack_70 = *(undefined8 *)(param_1 + 0xba8);
      local_68 = *(undefined8 *)(param_1 + 0xc00);
      uStack_60 = *(undefined8 *)(param_1 + 0xc08);
      local_58 = *(undefined8 *)(param_1 + 0xc10);
      uStack_50 = *(undefined8 *)(param_1 + 0xc18);
      DAT_14cabb0c8 = (void *)0x0;
      puVar4 = &DAT_14cabb0c8;
      _DAT_14cabb0d0 = 6;
      FUN_14635ffce(&DAT_14cabb0c8,6,0);
      memcpy(DAT_14cabb0c8,&local_a8,0x60);
      p_Var3 = (_func_5014 *)&LAB_1433450fd;
      break;
    case 8:
      puVar4 = &DAT_14cabb0e0;
      if (DAT_14cabb0f0 <=
          *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110)) goto switchD_1477bb045_caseD_3;
      puVar5 = &DAT_14cabb0f0;
      FUN_144b3d300(&DAT_14cabb0f0);
      if (DAT_14cabb0f0 != -1) goto switchD_1477bb045_caseD_3;
      local_a8 = *puVar1;
      uStack_a0 = *(undefined8 *)(param_1 + 0xb78);
      local_98 = *(undefined8 *)(param_1 + 0xb80);
      uStack_90 = *(undefined8 *)(param_1 + 0xb88);
      local_88 = *(undefined8 *)(param_1 + 0xb90);
      uStack_80 = *(undefined8 *)(param_1 + 0xb98);
      local_78 = *(undefined8 *)(param_1 + 0xba0);
      uStack_70 = *(undefined8 *)(param_1 + 0xba8);
      local_68 = *(undefined8 *)(param_1 + 0xbb0);
      uStack_60 = *(undefined8 *)(param_1 + 3000);
      local_58 = *(undefined8 *)(param_1 + 0xbc0);
      uStack_50 = *(undefined8 *)(param_1 + 0xbc8);
      local_48 = *(undefined8 *)(param_1 + 0xc00);
      uStack_40 = *(undefined8 *)(param_1 + 0xc08);
      local_38 = *(undefined4 *)(param_1 + 0xc10);
      uStack_34 = *(undefined4 *)(param_1 + 0xc14);
      uStack_30 = *(undefined4 *)(param_1 + 0xc18);
      uStack_2c = *(undefined4 *)(param_1 + 0xc1c);
      DAT_14cabb0e0 = (void *)0x0;
      puVar4 = &DAT_14cabb0e0;
      _DAT_14cabb0e8 = 8;
      FUN_14635ffce(&DAT_14cabb0e0,8,0);
      memcpy(DAT_14cabb0e0,&local_a8,0x80);
      p_Var3 = (_func_5014 *)&LAB_14334510e;
    }
    atexit(p_Var3);
    _Init_thread_footer(puVar5);
  }
switchD_1477bb045_caseD_3:
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477bb464 FUN_1477bb464 body=92 status=ok
// SIG undefined FUN_1477bb464(void)

undefined8 FUN_1477bb464(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_145b5adf2();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      return CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),1);
    }
    lVar1 = FUN_145b5aedc();
    if (*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) {
      return CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),
                      *(longlong *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
                       (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30);
    }
  }
  return 0;
}



// FUNCTION 1477bb4c0 FUN_1477bb4c0 body=27 status=ok
// SIG undefined FUN_1477bb4c0(void)

void FUN_1477bb4c0(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_147960398();
  *(undefined4 *)(param_1 + 0x5ac) = uVar1;
  return;
}



// FUNCTION 1477bb4dc FUN_1477bb4dc body=357 status=ok
// SIG undefined FUN_1477bb4dc(void)

void FUN_1477bb4dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_d8 [32];
  void *local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((((*(longlong **)(param_1 + 0xb68) != (longlong *)0x0) &&
       (cVar4 = (**(code **)(**(longlong **)(param_1 + 0xb68) + 0x58))(), cVar4 != '\0')) &&
      (cVar4 = (**(code **)(**(longlong **)(param_1 + 0xb68) + 0x60))
                         (*(longlong **)(param_1 + 0xb68),&local_64), cVar4 != '\0')) &&
     (local_64 != 0)) {
    uVar5 = 0;
    do {
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = (void *)0x0;
      uStack_b0 = 0;
      local_88 = 0;
      uStack_80 = 0;
      FUN_147042096(&local_b8);
      cVar4 = (**(code **)(**(longlong **)(param_1 + 0xb68) + 0x68))
                        (*(longlong **)(param_1 + 0xb68),uVar5,&local_b8);
      if (cVar4 != '\0') {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1447a1bd6(param_2,iVar2);
        }
        _Src = local_b8;
        lVar3 = *param_2;
        lVar7 = (longlong)iVar2 * 0x10;
        puVar1 = (undefined8 *)(lVar3 + lVar7);
        *(undefined8 *)(lVar3 + lVar7) = 0;
        lVar6 = (longlong)(int)uStack_b0;
        *(int *)(lVar3 + 8 + lVar7) = (int)uStack_b0;
        if (lVar6 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar1,uStack_b0 & 0xffffffff,0);
          memcpy((void *)*puVar1,_Src,lVar6 * 2);
        }
      }
      FUN_147041ad4(&local_b8);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_64);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477bb642 FUN_1477bb642 body=193 status=ok
// SIG undefined FUN_1477bb642(void)

longlong * FUN_1477bb642(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 == param_2) {
    lVar3 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar3;
  }
  else {
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
    uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
    lVar3 = param_2[5];
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x2c);
    *(int *)(param_1 + 4) = (int)param_2[4];
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
    *(int *)(param_1 + 5) = (int)lVar3;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar2;
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = param_2[6];
    param_2[6] = 0;
    *(int *)(param_1 + 7) = (int)param_2[7];
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
    param_2[7] = 0;
  }
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfe | *(byte *)(param_2 + 8) & 1;
  return param_1;
}



// FUNCTION 1477bb728 FUN_1477bb728 body=358 status=ok
// SIG undefined FUN_1477bb728(void)

void FUN_1477bb728(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a61b4f();
  if ((*(byte *)((longlong)param_1 + 0x599) & 4) != 0) {
    FUN_1477bb890(&local_30);
    uVar2 = (ulonglong)local_20;
    if ((-1 < (int)local_20) && ((int)local_20 < local_28)) {
      do {
        (**(code **)(*param_1 + 0x80))
                  (param_1,*(undefined8 *)(local_30 + (uVar2 & 0xffffffff) * 8),1);
        uVar2 = (longlong)(int)local_20;
        do {
          uVar3 = uVar2;
          uVar2 = uVar3 + 1;
          local_20 = (uint)uVar2;
          if ((longlong)local_28 <= (longlong)uVar2) break;
        } while (*(longlong *)(local_30 + uVar2 * 8) == 0);
      } while ((-2 < (longlong)uVar3) && ((int)local_20 < local_28));
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    FUN_1477c4de4((int)param_1[0x12]);
  }
  if (param_1[0x16d] != 0) {
    FUN_14334693e(param_1[0x1c2]);
    (**(code **)(*(longlong *)(param_1[0x16d] + 0x10) + 0x10))(param_1[0x16d] + 0x10);
    (**(code **)(*(longlong *)param_1[0x16d] + 0xa8))();
    (**(code **)(*(longlong *)param_1[0x16d] + 0x98))();
    (**(code **)(*(longlong *)param_1[0x16d] + 0x50))();
  }
  iVar1 = *(int *)((longlong)param_1 + 0xb54);
  FUN_1477cdc92(param_1[0x169],(int)param_1[0x16a]);
  *(undefined4 *)(param_1 + 0x16a) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0xb54) != 0)) {
    FUN_1477cdcdc(param_1 + 0x169);
  }
  FUN_1477b9f62(param_1 + 0x19c);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477bb890 FUN_1477bb890 body=107 status=ok
// SIG undefined FUN_1477bb890(void)

longlong * FUN_1477bb890(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_14105a990();
  FUN_14123d74c(uVar2,param_1,1,0x10,uVar1 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 1477bb8fc FUN_1477bb8fc body=126 status=ok
// SIG undefined FUN_1477bb8fc(void)

void FUN_1477bb8fc(longlong param_1)

{
  double dVar1;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  dVar1 = *(double *)(param_1 + 0xc60);
  QueryPerformanceCounter(&local_38);
  *(double *)(param_1 + 0xc80) =
       (((double)local_38.QuadPart * DAT_14c83f420 + 16777216.0) - *(double *)(param_1 + 0xc78)) +
       dVar1;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477bb97c FUN_1477bb97c body=346 status=ok
// SIG undefined FUN_1477bb97c(void)

void FUN_1477bb97c(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_148 [32];
  longlong local_128 [2];
  longlong *local_118;
  longlong local_108 [4];
  char local_e8;
  code *local_d8;
  longlong *local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  code *local_98 [2];
  longlong *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  char local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1477be7b4(param_1 + 0xe30,local_98);
  if (local_58 == '\x01') {
    do {
      plVar3 = local_88;
      pcVar1 = local_98[0];
      local_d8 = local_98[0];
      local_c8 = local_88;
      local_88 = (longlong *)0x0;
      local_a8 = local_68;
      uStack_a4 = uStack_64;
      uStack_a0 = uStack_60;
      uStack_9c = uStack_5c;
      local_b8 = local_78;
      uStack_b4 = uStack_74;
      uStack_b0 = uStack_70;
      uStack_ac = uStack_6c;
      if (local_98[0] != (code *)0x0) {
        local_98[0] = (code *)0x0;
      }
      if (plVar3 == (longlong *)0x0) {
        plVar3 = (longlong *)&local_b8;
      }
      uVar2 = (**(code **)(*plVar3 + 8))();
      (*pcVar1)(uVar2);
      FUN_1477be7b4(param_1 + 0xe30,local_128);
      FUN_1477be824(local_98,local_128);
      if ((local_e8 == '\x01') && (local_128[0] != 0)) {
        plVar3 = local_118;
        if (local_118 == (longlong *)0x0) {
          plVar3 = local_108;
        }
        (**(code **)(*plVar3 + 0x10))();
      }
      if (local_d8 != (code *)0x0) {
        plVar3 = local_c8;
        if (local_c8 == (longlong *)0x0) {
          plVar3 = (longlong *)&local_b8;
        }
        (**(code **)(*plVar3 + 0x10))();
      }
    } while (local_58 != '\0');
  }
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477bbad8 FUN_1477bbad8 body=135 status=ok
// SIG undefined FUN_1477bbad8(void)

void FUN_1477bbad8(undefined8 param_1,undefined4 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14a571240;
  local_58[0] = FUN_143358592;
  local_30 = param_1;
  local_28 = param_2;
  FUN_14334e164(param_1,local_58,"UpdateDeviceChannelCount()",0);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477bbb8a FUN_1477bbb8a body=212 status=ok
// SIG undefined FUN_1477bbb8a(void)

double FUN_1477bbb8a(double *param_1,double param_2,double param_3)

{
  double dVar1;
  undefined1 auStack_88 [32];
  LARGE_INTEGER local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0.0 < *param_1) {
    QueryPerformanceCounter(&local_68);
    dVar1 = (((double)local_68.QuadPart * DAT_14c83f420 + 16777216.0) - *param_1) / param_3;
    if (1.0 <= dVar1) {
      dVar1 = 1.0;
    }
    if (dVar1 <= 0.0) {
      dVar1 = 0.0;
    }
    param_2 = param_2 + ((param_2 + param_3) - param_2) * dVar1;
  }
  if ((local_60 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477bbc60 FUN_1477bbc60 body=187 status=ok
// SIG undefined FUN_1477bbc60(void)

undefined8 * FUN_1477bbc60(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x2d8,0x10);
  FUN_147974366(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a56dd80;
  puVar1[0x4b] = 0;
  *(undefined4 *)(puVar1 + 0x4c) = 0;
  puVar1[0x47] = 0;
  puVar1[0x48] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x264) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x26c) = 0;
  puVar1[0x4f] = 0;
  *(undefined4 *)(puVar1 + 0x50) = 0;
  puVar1[0x51] = 0;
  puVar1[0x52] = 0;
  *(undefined4 *)(puVar1 + 0x53) = 0x7f7fffff;
  *(undefined2 *)((longlong)puVar1 + 0x29c) = 0x404;
  puVar1[0x46] = &DAT_14a176f00;
  puVar1[0x54] = 0;
  puVar1[0x55] = 0;
  puVar1[0x56] = 0;
  puVar1[0x57] = 0;
  puVar1[0x58] = 0;
  puVar1[0x59] = 0;
  puVar1[0x5a] = 0;
  return puVar1;
}



// FUNCTION 1477bbd1c FUN_1477bbd1c body=39 status=ok
// SIG undefined FUN_1477bbd1c(void)

void FUN_1477bbd1c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x2b0,0x10);
  FUN_1477bbd44(uVar1,param_1);
  return;
}



// FUNCTION 1477bbd44 FUN_1477bbd44 body=585 status=ok
// SIG undefined FUN_1477bbd44(void)

undefined8 * FUN_1477bbd44(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  FUN_1477c0d58();
  *param_1 = &PTR_FUN_14a56e090;
  param_1[0x13] = &PTR_FUN_14a56e140;
  param_1[0x14] = param_2;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe9) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x22));
  param_1[0x23] = 0xbf800000;
  param_1[0x26] = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  param_1[0x24] = DAT_14c8464e0;
  param_1[0x25] = uVar2;
  uVar2 = DAT_14c8463e8;
  param_1[0x2a] = DAT_14c8463e0;
  param_1[0x2b] = uVar2;
  uVar2 = DAT_14c8463d8;
  param_1[0x28] = DAT_14c8463d0;
  param_1[0x29] = uVar2;
  param_1[0x2e] = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  param_1[0x2c] = DAT_14c8464e0;
  param_1[0x2d] = uVar2;
  param_1[0x31] = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  param_1[0x2f] = DAT_14c8464e0;
  param_1[0x30] = uVar2;
  uVar2 = DAT_14c8463e8;
  param_1[0x34] = DAT_14c8463e0;
  param_1[0x35] = uVar2;
  uVar2 = DAT_14c8463d8;
  param_1[0x32] = DAT_14c8463d0;
  param_1[0x33] = uVar2;
  uVar2 = DAT_14c8463e8;
  param_1[0x38] = DAT_14c8463e0;
  param_1[0x39] = uVar2;
  uVar2 = DAT_14c8463d8;
  param_1[0x36] = DAT_14c8463d0;
  param_1[0x37] = uVar2;
  param_1[0x3c] = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  param_1[0x3a] = DAT_14c8464e0;
  param_1[0x3b] = uVar2;
  param_1[0x3f] = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  param_1[0x3d] = DAT_14c8464e0;
  param_1[0x3e] = uVar2;
  *(undefined1 *)(param_1 + 0x44) = 0;
  param_1[0x42] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  uVar1 = *(uint *)((longlong)param_1 + 0x2ac);
  *(uint *)((longlong)param_1 + 0x2ac) = uVar1 & 0xfffffff0;
  *(uint *)((longlong)param_1 + 0x2ac) = (uVar1 & 0xffffff80) + (*(byte *)(param_2 + 0x592) & 8) * 2
  ;
  return param_1;
}



// FUNCTION 1477bbfe8 FUN_1477bbfe8 body=179 status=ok
// SIG undefined FUN_1477bbfe8(void)

void FUN_1477bbfe8(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  code *local_68 [2];
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = (code *)0x0;
  local_58 = (longlong *)0x0;
  cVar2 = FUN_1403c1b2e(param_1 + 0xe20,local_68);
  if (cVar2 != '\0') {
    do {
      pcVar1 = local_68[0];
      plVar4 = local_58;
      if (local_58 == (longlong *)0x0) {
        plVar4 = local_48;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar1)(uVar3);
      cVar2 = FUN_1403c1b2e(param_1 + 0xe20,local_68);
    } while (cVar2 != '\0');
  }
  if (local_68[0] != (code *)0x0) {
    plVar4 = local_48;
    if (local_58 != (longlong *)0x0) {
      plVar4 = local_58;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477bc09c FUN_1477bc09c body=160 status=ok
// SIG undefined FUN_1477bc09c(void)

void FUN_1477bc09c(longlong param_1)

{
  float fVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (0 < *(int *)(param_1 + 0x21c)) {
    lVar5 = 0x521;
    uVar6 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x118);
      if (((*(byte *)(lVar3 + lVar5) & 0x40) == 0) &&
         (bVar2 = *(byte *)(lVar3 + -1 + lVar5), (char)bVar2 < '\0')) {
        fVar1 = *(float *)(lVar3 + -0x3f9 + lVar5);
        if ((fVar1 == 0.0) && (!NAN(fVar1))) {
          *(byte *)(lVar3 + -1 + lVar5) = bVar2 & 0x7f;
          *(byte *)(lVar3 + lVar5) = *(byte *)(lVar3 + lVar5) | 0x40;
          (**(code **)(**(longlong **)(lVar3 + -0x511 + lVar5) + 0x18))();
          plVar4 = *(longlong **)(lVar3 + -0x11 + lVar5);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x18))(plVar4,uVar6 & 0xffffffff);
          }
        }
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x540;
    } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x21c));
  }
  return;
}



// FUNCTION 1477bc13c FUN_1477bc13c body=541 status=ok
// SIG undefined FUN_1477bc13c(void)

void FUN_1477bc13c(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  
  uVar1 = *(uint *)(param_1 + 0xc3c);
  uVar7 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xcb8);
  uVar3 = iVar2 - 1U;
  if ((int)DAT_14cabb038 < (int)(iVar2 - 1U)) {
    uVar3 = DAT_14cabb038;
  }
  uVar5 = 0;
  if (0 < (int)uVar3) {
    uVar5 = uVar3;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cabb148) && (FUN_144b3d300(&DAT_14cabb148), DAT_14cabb148 == -1)) {
    FUN_1470398a4(&DAT_14cabb120,*(undefined4 *)(param_1 + 0xcc0),DAT_14c7610e8,DAT_14c7610e4,0);
    _Init_thread_footer(&DAT_14cabb148);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cabb178) && (FUN_144b3d300(&DAT_14cabb178), DAT_14cabb178 == -1)) {
    FUN_1470398a4(&DAT_14cabb150,*(undefined4 *)(param_1 + 0xcc0),DAT_14c7610e8 * 0.5,DAT_14c7610e4,
                  0);
    _Init_thread_footer(&DAT_14cabb178);
  }
  FUN_1470398e0(&DAT_14cabb120,DAT_14c7610e8);
  FUN_1470399d4(&DAT_14cabb120,DAT_14c7610e4);
  if (DAT_14cabb010 == 0) {
    FUN_1470398e0(&DAT_14cabb150,DAT_14c7610e8 * 0.5);
    FUN_1470399d4(&DAT_14cabb150,DAT_14c7610e4);
  }
  if (0 < (int)uVar1) {
    lVar6 = 0;
    do {
      fVar8 = (float)FUN_1470399da(&DAT_14cabb120);
      lVar4 = *param_2 + (ulonglong)uVar5 * 4;
      *(float *)(lVar6 + lVar4) = fVar8 + *(float *)(lVar6 + lVar4);
      if (((DAT_14cabb010 == 0) && (1 < iVar2)) && (DAT_14cabb038 == 0)) {
        fVar8 = (float)FUN_1470399da(&DAT_14cabb150);
        *(float *)(*param_2 + 4 + lVar6) = fVar8 + *(float *)(*param_2 + 4 + lVar6);
      }
      lVar6 = lVar6 + (longlong)iVar2 * 4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 1477bc35a FUN_1477bc35a body=262 status=ok
// SIG undefined FUN_1477bc35a(void)

void FUN_1477bc35a(longlong param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  
  uVar1 = *(uint *)(param_1 + 0xc3c);
  uVar2 = *(uint *)(param_1 + 0xcb8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cabb11c) {
    FUN_144b3d300();
    if (DAT_14cabb11c == -1) {
      FUN_147038f52(&DAT_14cabb114);
      _Init_thread_footer();
    }
  }
  if (0 < (int)uVar1) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      lVar5 = lVar3;
      uVar6 = (ulonglong)uVar2;
      if (0 < (int)uVar2) {
        do {
          DAT_14cabb118 = DAT_14cabb118 * 0xbb38435 + 0x3619636b;
          fVar7 = (float)(DAT_14cabb118 >> 9 | 0x3f800000) + -1.0;
          *(float *)(*param_2 + lVar5) =
               (fVar7 + fVar7 + -1.0) * DAT_14c7610e4 + 0.0 + *(float *)(*param_2 + lVar5);
          lVar5 = lVar5 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + (ulonglong)uVar2 * 4;
    } while (uVar4 != uVar1);
  }
  return;
}



// FUNCTION 1477bc460 FUN_1477bc460 body=51 status=ok
// SIG undefined FUN_1477bc460(void)

void FUN_1477bc460(longlong param_1)

{
  FUN_1433473a6(*(undefined8 *)(param_1 + 0x3b0));
  FUN_1433473a6(*(undefined8 *)(param_1 + 0x3b0));
  FUN_1477bc494(*(undefined8 *)(param_1 + 0x3b0),1);
  return;
}



// FUNCTION 1477bc494 FUN_1477bc494 body=119 status=ok
// SIG undefined FUN_1477bc494(void)

ulonglong FUN_1477bc494(longlong param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  LOCK();
  bVar1 = *(byte *)(param_1 + 0x240);
  *(byte *)(param_1 + 0x240) = 4;
  uVar3 = (ulonglong)bVar1;
  UNLOCK();
  uVar4 = (ulonglong)*(int *)(param_1 + 0x1b0);
  if (0 < (longlong)uVar4) {
    lVar5 = uVar4 << 4;
    do {
      uVar3 = uVar4;
      lVar5 = lVar5 + -0x10;
      if (param_2 == '\0') {
        cVar2 = FUN_1477c22f8(*(undefined8 *)(*(longlong *)(param_1 + 0x1a8) + lVar5));
        if (cVar2 != '\0') goto LAB_1477bc4d8;
      }
      else {
        FUN_1477c468e();
LAB_1477bc4d8:
        FUN_1477d2652((longlong *)(param_1 + 0x1a8),(int)uVar3 + -1);
      }
      uVar4 = uVar3 - 1;
    } while (1 < uVar3);
  }
  return uVar3;
}



// FUNCTION 1477bc50b FUN_1477bc50b body=183 status=ok
// SIG undefined FUN_1477bc50b(void)

undefined8 FUN_1477bc50b(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_14105a990();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
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



// FUNCTION 1477bc5c4 FUN_1477bc5c4 body=511 status=ok
// SIG undefined FUN_1477bc5c4(void)

void FUN_1477bc5c4(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1433438ce(param_1,&local_50,param_2);
  if (local_48 == (longlong *)0x0) {
LAB_1477bc67f:
    bVar10 = true;
    plVar8 = (longlong *)0x0;
LAB_1477bc684:
    uVar3 = *(uint *)(param_2 + 0xc);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    FUN_1447f71cc(lVar7,0x40000000);
    plVar6 = (longlong *)FUN_14001cc68(0x5d0,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_14a570540;
    plVar2 = plVar6 + 2;
    FUN_1477d49de(plVar2,param_1);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    plVar9 = (longlong *)0x0;
    if (plVar6 == plVar8) {
      plVar9 = plVar6;
    }
    if (!bVar10 && plVar6 != plVar8) {
      LOCK();
      plVar9 = plVar8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar5 = *piVar1;
        UNLOCK();
joined_r0x0001477bc73f:
        if (iVar5 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    else if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar9 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar5 = *piVar1;
        UNLOCK();
        plVar8 = plVar6;
        goto joined_r0x0001477bc73f;
      }
    }
    local_60 = plVar2;
    if (plVar6 == (longlong *)0x0) {
      local_58 = (longlong *)0x0;
      FUN_1477b9d22(param_1 + 0xce0,*(undefined4 *)(param_2 + 0xc));
      goto LAB_1477bc659;
    }
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
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    local_58 = plVar6;
    FUN_1477b9d22(param_1 + 0xce0,*(undefined4 *)(param_2 + 0xc));
    plVar8 = plVar6;
  }
  else {
    iVar5 = (int)local_48[1];
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_48[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(local_48 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar8 = local_48;
    } while (!bVar10);
    LOCK();
    piVar1 = (int *)((longlong)local_48 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
    if (plVar8 == (longlong *)0x0) goto LAB_1477bc67f;
    if (local_50 == 0) {
      bVar10 = false;
      goto LAB_1477bc684;
    }
  }
  LOCK();
  plVar2 = plVar8 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
LAB_1477bc659:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477bc7c4 FUN_1477bc7c4 body=654 status=ok
// SIG undefined FUN_1477bc7c4(void)

void FUN_1477bc7c4(longlong param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd78));
  if (param_2 != 0) {
    lVar6 = FUN_145b5ad08();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
         ) != lVar6 + 0x30)) {
      lVar6 = FUN_145b5aedc();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) goto LAB_1477bc7f7;
      lVar6 = *param_3;
      uVar7 = FUN_147d3f47c(param_2);
    }
    else {
      lVar6 = *param_3;
      uVar7 = FUN_147d3f032(param_2);
    }
    FUN_1477d8232(lVar6,uVar7);
  }
LAB_1477bc7f7:
  plVar2 = (longlong *)(param_1 + 0xd58);
  lVar6 = *param_3;
  if ((longlong)*(int *)(param_1 + 0xd60) != 0) {
    lVar8 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xd58) + lVar8) == lVar6) {
        FUN_1477be908(plVar2,param_3);
        lVar6 = *param_3;
        break;
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0xd60) * 0x10 != lVar8);
  }
  plVar3 = (longlong *)(param_1 + 0xd68);
  if ((longlong)*(int *)(param_1 + 0xd70) != 0) {
    lVar8 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xd68) + lVar8) == lVar6) {
        FUN_1477be908(plVar3,param_3);
        lVar6 = *param_3;
        break;
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0xd70) * 0x10 != lVar8);
  }
  FUN_1477d51a8(lVar6,param_2,param_4);
  cVar5 = FUN_1477bb464(param_2);
  lVar6 = *param_3;
  if (cVar5 == '\0') {
LAB_1477bc868:
    if (*(longlong *)(lVar6 + 0x28) != 0) {
LAB_1477bc86d:
      if ((*(longlong *)(lVar6 + 0x30) != 0) && (0 < *(int *)(*(longlong *)(lVar6 + 0x30) + 8)))
      goto LAB_1477bc8c8;
    }
    if ((*(longlong *)(lVar6 + 0x220) == 0) && (*(longlong *)(lVar6 + 0x218) == 0))
    goto LAB_1477bc8c8;
    iVar4 = *(int *)(param_1 + 0xd70);
    *(uint *)(param_1 + 0xd70) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0xd74) < iVar4 + 1U) {
      FUN_1477cdd92(plVar3,iVar4);
    }
    lVar6 = *plVar3;
  }
  else {
    if (((*(longlong *)(lVar6 + 0x28) != 0) && (*(longlong *)(lVar6 + 0x30) != 0)) &&
       (0 < *(int *)(*(longlong *)(lVar6 + 0x30) + 8))) goto LAB_1477bc86d;
    if ((*(longlong *)(lVar6 + 0x220) != 0) || (*(longlong *)(lVar6 + 0x218) != 0))
    goto LAB_1477bc868;
    iVar4 = *(int *)(param_1 + 0xd60);
    *(uint *)(param_1 + 0xd60) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0xd64) < iVar4 + 1U) {
      FUN_1477cdd92(plVar2,iVar4);
    }
    lVar6 = *plVar2;
  }
  *(longlong *)(lVar6 + (longlong)iVar4 * 0x10) = *param_3;
  lVar8 = param_3[1];
  *(longlong *)(lVar6 + 8 + (longlong)iVar4 * 0x10) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
LAB_1477bc8c8:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd78));
  plVar2 = (longlong *)param_3[1];
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
                    /* WARNING: Could not recover jumptable at 0x0001477bc902. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477bca52 FUN_1477bca52 body=63 status=ok
// SIG undefined FUN_1477bca52(void)

void FUN_1477bca52(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  FUN_1477be746(param_1 + 0xe20);
  if (*param_2 != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x0001477bca86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1477bca92 FUN_1477bca92 body=536 status=ok
// SIG undefined FUN_1477bca92(void)

void FUN_1477bca92(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = FUN_1459e9f38();
  if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar6 + 0x38)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
      lVar6 + 0x30)) goto LAB_1477bcad3;
  FUN_147d3e9a8(param_2,&local_30,*(undefined4 *)(param_1 + 0x90));
  if (local_30 == 0) {
    cVar4 = (**(code **)(*param_2 + 0x2b8))(param_2,1);
    if (cVar4 != '\0') goto LAB_1477bcad3;
    plVar8 = *(longlong **)(param_1 + 0xb48);
    lVar6 = plVar8[2];
    if (*param_3 == lVar6) {
      plVar7 = (longlong *)plVar8[1];
      if (plVar7 == (longlong *)0x0) goto LAB_1477bcad3;
      lVar6 = *plVar8;
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      iVar5 = (int)plVar7[1];
      do {
        plVar8 = (longlong *)0x0;
        if (iVar5 == 0) break;
        LOCK();
        iVar3 = (int)plVar7[1];
        bVar9 = iVar5 == iVar3;
        if (bVar9) {
          *(int *)(plVar7 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
        plVar8 = plVar7;
      } while (!bVar9);
    }
    else {
      if (lVar6 == 0) {
        plVar7 = (longlong *)plVar8[1];
        if (plVar7 == (longlong *)0x0) goto LAB_1477bcad3;
        lVar6 = *plVar8;
      }
      else {
        plVar7 = (longlong *)plVar8[3];
        if (plVar7 == (longlong *)0x0) goto LAB_1477bcad3;
      }
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      iVar5 = (int)plVar7[1];
      do {
        plVar8 = (longlong *)0x0;
        if (iVar5 == 0) break;
        LOCK();
        iVar3 = (int)plVar7[1];
        bVar9 = iVar5 == iVar3;
        if (bVar9) {
          *(int *)(plVar7 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
        plVar8 = plVar7;
      } while (!bVar9);
    }
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    if (plVar8 == (longlong *)0x0) goto LAB_1477bcad3;
  }
  else {
    FUN_1433438ce(param_1,&local_40);
    if (local_38 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
      lVar6 = 0;
    }
    else {
      iVar5 = (int)local_38[1];
      do {
        if (iVar5 == 0) {
          plVar8 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_38[1];
        bVar9 = iVar5 == iVar3;
        if (bVar9) {
          *(int *)(local_38 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
        plVar8 = local_38;
      } while (!bVar9);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
      lVar6 = 0;
      if (plVar8 != (longlong *)0x0) {
        lVar6 = local_40;
      }
    }
  }
  if (lVar6 != 0) {
    lVar2 = *param_3;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
      UNLOCK();
    }
    local_50 = lVar6;
    local_48 = plVar8;
    FUN_1477d593a(lVar2,&local_50);
    local_60 = *param_3;
    local_58 = param_3[1];
    if (local_58 != 0) {
      LOCK();
      *(int *)(local_58 + 0xc) = *(int *)(local_58 + 0xc) + 1;
      UNLOCK();
    }
    FUN_1477d5c34(lVar6,&local_60);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
LAB_1477bcad3:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477bccac FUN_1477bccac body=107 status=ok
// SIG undefined FUN_1477bccac(void)

longlong * FUN_1477bccac(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_14113d362();
  FUN_14123d74c(uVar2,param_1,1,0x10,uVar1 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 1477bcd18 FUN_1477bcd18 body=255 status=ok
// SIG undefined FUN_1477bcd18(void)

/* WARNING: Removing unreachable block (ram,0x0001477bcdbe) */
/* WARNING: Removing unreachable block (ram,0x0001477bcdca) */
/* WARNING: Removing unreachable block (ram,0x0001477bcdce) */

void FUN_1477bcd18(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = *param_2;
  uStack_20 = param_2[1];
  if (uStack_20 != 0) {
    LOCK();
    *(int *)(uStack_20 + 8) = *(int *)(uStack_20 + 8) + 1;
    UNLOCK();
  }
  local_38 = &PTR_LAB_14a5705a0;
  uStack_30 = param_1;
  puVar5 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar5 = 0;
  puVar5[2] = FUN_143352168;
  puVar5[4] = 0;
  local_48 = 0;
  *(undefined4 *)(puVar5 + 6) = (undefined4)local_38;
  *(undefined4 *)((longlong)puVar5 + 0x34) = local_38._4_4_;
  *(undefined4 *)(puVar5 + 7) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)puVar5 + 0x3c) = uStack_30._4_4_;
  *(undefined4 *)(puVar5 + 8) = (undefined4)local_28;
  *(undefined4 *)((longlong)puVar5 + 0x44) = local_28._4_4_;
  *(undefined4 *)(puVar5 + 9) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)puVar5 + 0x4c) = uStack_20._4_4_;
  local_58 = 0;
  if (puVar5 != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0xe20);
    *(undefined8 **)(param_1 + 0xe20) = puVar5;
    *puVar3 = puVar5;
  }
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
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477bce18 FUN_1477bce18 body=190 status=ok
// SIG undefined FUN_1477bce18(void)

/* WARNING: Removing unreachable block (ram,0x0001477bcea4) */
/* WARNING: Removing unreachable block (ram,0x0001477bceb0) */
/* WARNING: Removing unreachable block (ram,0x0001477bceb4) */

void FUN_1477bce18(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = &PTR_LAB_14a5705c0;
  uStack_30 = param_1;
  local_28 = param_2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar2 = 0;
  puVar2[2] = &LAB_143352264;
  puVar2[4] = 0;
  local_48 = 0;
  *(undefined4 *)(puVar2 + 6) = (undefined4)local_38;
  *(undefined4 *)((longlong)puVar2 + 0x34) = local_38._4_4_;
  *(undefined4 *)(puVar2 + 7) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = uStack_30._4_4_;
  *(undefined4 *)(puVar2 + 8) = local_28;
  *(undefined4 *)((longlong)puVar2 + 0x44) = uStack_24;
  *(undefined4 *)(puVar2 + 9) = uStack_20;
  *(undefined4 *)((longlong)puVar2 + 0x4c) = uStack_1c;
  local_58 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0xe20);
    *(undefined8 **)(param_1 + 0xe20) = puVar2;
    *puVar1 = puVar2;
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477bced8 FUN_1477bced8 body=186 status=ok
// SIG undefined FUN_1477bced8(void)

/* WARNING: Removing unreachable block (ram,0x0001477bcf60) */
/* WARNING: Removing unreachable block (ram,0x0001477bcf6c) */
/* WARNING: Removing unreachable block (ram,0x0001477bcf70) */

void FUN_1477bced8(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = &PTR_LAB_14a5705e0;
  uStack_30 = param_1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar2 = 0;
  puVar2[2] = &LAB_1433522c4;
  puVar2[4] = 0;
  local_48 = 0;
  *(undefined4 *)(puVar2 + 6) = (undefined4)local_38;
  *(undefined4 *)((longlong)puVar2 + 0x34) = local_38._4_4_;
  *(undefined4 *)(puVar2 + 7) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = uStack_30._4_4_;
  *(undefined4 *)(puVar2 + 8) = local_28;
  *(undefined4 *)((longlong)puVar2 + 0x44) = uStack_24;
  *(undefined4 *)(puVar2 + 9) = uStack_20;
  *(undefined4 *)((longlong)puVar2 + 0x4c) = uStack_1c;
  local_58 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0xe20);
    *(undefined8 **)(param_1 + 0xe20) = puVar2;
    *puVar1 = puVar2;
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477bcf94 FUN_1477bcf94 body=623 status=ok
// SIG undefined FUN_1477bcf94(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff88 : 0x0001477bd14f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1477bcf94(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  bool bVar10;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 *local_98;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1433438ce(param_1,&local_c8,param_2);
  if (plStack_c0 != (longlong *)0x0) {
    iVar5 = (int)plStack_c0[1];
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)plStack_c0[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(plStack_c0 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar8 = plStack_c0;
    } while (!bVar10);
    LOCK();
    piVar1 = (int *)((longlong)plStack_c0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_c0 + 0x10))();
    }
    if (plVar8 != (longlong *)0x0) {
      if (local_c8 != 0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        local_b8 = 0;
        iVar5 = *(int *)(param_3 + 1);
        uVar3 = *param_3;
        local_b0 = iVar5;
        if (iVar5 == 0) {
          local_ac = 0;
          plStack_c0 = plVar8;
        }
        else {
          plStack_c0 = plVar8;
          FUN_1477cde40(&local_b8,iVar5,0);
          FUN_1477cdea2(local_b8,uVar3,iVar5);
        }
        local_98 = (undefined1 *)0x0;
        local_a8 = param_4;
        puVar6 = (undefined8 *)FUN_14001cc68(0x30,8);
        iVar5 = local_b0;
        uVar3 = local_b8;
        *puVar6 = &PTR_FUN_14a5706a0;
        puVar6[1] = local_c8;
        puVar6[2] = plStack_c0;
        local_c8 = 0;
        plStack_c0 = (longlong *)0x0;
        puVar6[3] = 0;
        *(int *)(puVar6 + 4) = local_b0;
        if (local_b0 == 0) {
          *(undefined4 *)((longlong)puVar6 + 0x24) = 0;
        }
        else {
          FUN_1477cde40(puVar6 + 3,local_b0,0);
          FUN_1477cdea2(puVar6[3],uVar3,iVar5);
        }
        *(undefined4 *)(puVar6 + 5) = local_a8;
        if (puVar6 == (undefined8 *)&DAT_fffffffffffffff8) {
          puVar9 = (undefined1 *)0x0;
        }
        else {
          puVar9 = &LAB_1433527d2;
          local_98 = &LAB_1433527d2;
        }
        puVar7 = (undefined8 *)FUN_14001cc68(0x50,0x10);
        *puVar7 = 0;
        puVar7[2] = puVar9;
        puVar7[4] = puVar6;
        local_88 = 0;
        *(undefined4 *)(puVar7 + 8) = local_68;
        *(undefined4 *)((longlong)puVar7 + 0x44) = uStack_64;
        *(undefined4 *)(puVar7 + 9) = uStack_60;
        *(undefined4 *)((longlong)puVar7 + 0x4c) = uStack_5c;
        *(undefined4 *)(puVar7 + 6) = local_78;
        *(undefined4 *)((longlong)puVar7 + 0x34) = uStack_74;
        *(undefined4 *)(puVar7 + 7) = uStack_70;
        *(undefined4 *)((longlong)puVar7 + 0x3c) = uStack_6c;
        if (puVar6 != (undefined8 *)&DAT_fffffffffffffff8) {
          local_98 = (undefined1 *)0x0;
        }
        if (puVar7 != (undefined8 *)0x0) {
          puVar6 = *(undefined8 **)(param_1 + 0xe20);
          *(undefined8 **)(param_1 + 0xe20) = puVar7;
          *puVar6 = puVar7;
          if (local_98 != (undefined1 *)0x0) {
            (**(code **)(CONCAT44(uStack_74,local_78) + 0x10))();
          }
        }
        FUN_143348a5c(&local_c8);
      }
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477bd204 FUN_1477bd204 body=347 status=ok
// SIG undefined FUN_1477bd204(void)

/* WARNING: Removing unreachable block (ram,0x0001477bd304) */
/* WARNING: Removing unreachable block (ram,0x0001477bd310) */
/* WARNING: Removing unreachable block (ram,0x0001477bd314) */

void FUN_1477bd204(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1433438ce(param_1,&local_88,param_2);
  if (local_80 != (longlong *)0x0) {
    iVar5 = (int)local_80[1];
    do {
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_80[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(local_80 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar7 = local_80;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)local_80 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      if (local_88 != 0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        local_58 = &PTR_LAB_14a5706c0;
        uStack_50 = local_88;
        local_48 = plVar7;
        uStack_40 = param_3;
        puVar6 = (undefined8 *)FUN_14001cc68(0x50,0x10);
        *puVar6 = 0;
        puVar6[2] = &LAB_143352922;
        puVar6[4] = 0;
        local_68 = 0;
        *(undefined4 *)(puVar6 + 6) = (undefined4)local_58;
        *(undefined4 *)((longlong)puVar6 + 0x34) = local_58._4_4_;
        *(undefined4 *)(puVar6 + 7) = (undefined4)uStack_50;
        *(undefined4 *)((longlong)puVar6 + 0x3c) = uStack_50._4_4_;
        *(undefined4 *)(puVar6 + 8) = (undefined4)local_48;
        *(undefined4 *)((longlong)puVar6 + 0x44) = local_48._4_4_;
        *(undefined4 *)(puVar6 + 9) = uStack_40;
        *(undefined4 *)((longlong)puVar6 + 0x4c) = uStack_3c;
        local_78 = 0;
        if (puVar6 != (undefined8 *)0x0) {
          puVar3 = *(undefined8 **)(param_1 + 0xe20);
          *(undefined8 **)(param_1 + 0xe20) = puVar6;
          *puVar3 = puVar6;
        }
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
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477bd360 FUN_1477bd360 body=517 status=ok
// SIG undefined FUN_1477bd360(void)

void FUN_1477bd360(longlong param_1,uint param_2,undefined8 *param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 *local_98;
  int local_90;
  undefined4 local_8c;
  undefined1 local_88;
  uint local_80;
  undefined1 local_7c [4];
  code *local_78 [2];
  undefined8 *local_68;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_80 = param_2;
  if (*(int *)(param_1 + 0xdc8) != *(int *)(param_1 + 0xdf4)) {
    lVar5 = param_1 + 0xdf8;
    if (*(longlong *)(param_1 + 0xe00) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xe00);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0xe08) - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 0xdc0);
      do {
        lVar1 = lVar5 + (longlong)iVar4 * 0x20;
        if (*(uint *)(lVar5 + (longlong)iVar4 * 0x20) == param_2) {
          if (lVar1 + 8 != 0 && lVar1 != 0) {
            FUN_1477b919e(lVar1 + 8,param_3);
            goto LAB_1477bd3ee;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x18);
      } while (iVar4 != -1);
    }
  }
  local_a0 = &local_80;
  local_98 = param_3;
  FUN_1477cded0((longlong *)(param_1 + 0xdc0),local_7c);
  param_2 = local_80;
LAB_1477bd3ee:
  local_a0 = (uint *)CONCAT44(param_2,*(undefined4 *)(param_1 + 0x90));
  local_98 = (undefined8 *)0x0;
  iVar4 = *(int *)(param_3 + 1);
  uVar2 = *param_3;
  local_90 = iVar4;
  if (iVar4 == 0) {
    local_8c = 0;
  }
  else {
    FUN_1477cca26(&local_98,iVar4,0);
    FUN_1477cca88(local_98,uVar2,iVar4);
  }
  local_78[0] = (code *)0x0;
  local_88 = param_4;
  puVar6 = (undefined8 *)FUN_14001cc68(0x28,8);
  iVar4 = local_90;
  puVar3 = local_98;
  *puVar6 = &PTR_LAB_14a5706e0;
  puVar6[1] = local_a0;
  puVar6[2] = 0;
  *(int *)(puVar6 + 3) = local_90;
  local_68 = puVar6;
  if (local_90 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x1c) = 0;
  }
  else {
    FUN_1477cca26(puVar6 + 2,local_90,0);
    FUN_1477cca88(puVar6[2],puVar3,iVar4);
  }
  *(undefined1 *)(puVar6 + 4) = local_88;
  if (puVar6 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_78[0] = FUN_1433529cc;
  }
  FUN_1415826cc(local_78);
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477bd570 FUN_1477bd570 body=600 status=ok
// SIG undefined FUN_1477bd570(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff38 : 0x0001477bd791 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1477bd570(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  bool bVar10;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong *local_f0;
  undefined1 *local_e8;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  code *local_a8 [2];
  undefined8 *local_98;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  cVar3 = FUN_146269f19();
  if (cVar3 == '\0') {
    local_a8[0] = (code *)0x0;
    local_98 = (undefined8 *)FUN_14001cc68(0x28,8);
    *local_98 = &PTR_LAB_14a570700;
    local_98[1] = param_1;
    local_98[2] = param_2;
    *(undefined4 *)(local_98 + 3) = param_3;
    *(undefined4 *)((longlong)local_98 + 0x1c) = param_4;
    *(undefined4 *)(local_98 + 4) = param_5;
    if (local_98 + 1 != (longlong *)0x0) {
      local_a8[0] = FUN_143352a82;
    }
    FUN_1415826cc(local_a8);
  }
  else {
    FUN_1433438ce(param_1,&local_f8,param_2);
    if (local_f0 != (longlong *)0x0) {
      iVar4 = (int)local_f0[1];
      do {
        if (iVar4 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar2 = (int)local_f0[1];
        bVar10 = iVar4 == iVar2;
        if (bVar10) {
          *(int *)(local_f0 + 1) = iVar4 + 1;
          iVar2 = iVar4;
        }
        iVar4 = iVar2;
        UNLOCK();
        plVar7 = local_f0;
      } while (!bVar10);
      LOCK();
      piVar1 = (int *)((longlong)local_f0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_f0 + 0x10))();
      }
      if (plVar7 != (longlong *)0x0) {
        if (local_f8 != 0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          local_e8 = (undefined1 *)0x0;
          puVar5 = (undefined8 *)FUN_14001cc68(0x28,8);
          *puVar5 = &PTR_FUN_14a570720;
          plVar8 = puVar5 + 1;
          *plVar8 = local_f8;
          puVar5[2] = plVar7;
          *(undefined4 *)(puVar5 + 3) = param_3;
          *(undefined4 *)((longlong)puVar5 + 0x1c) = param_4;
          *(undefined4 *)(puVar5 + 4) = param_5;
          if (plVar8 == (longlong *)0x0) {
            puVar9 = (undefined1 *)0x0;
          }
          else {
            puVar9 = &LAB_143352afc;
            local_e8 = &LAB_143352afc;
          }
          puVar6 = (undefined8 *)FUN_14001cc68(0x50,0x10);
          *puVar6 = 0;
          puVar6[2] = puVar9;
          puVar6[4] = puVar5;
          local_d8 = 0;
          *(undefined4 *)(puVar6 + 8) = local_b8;
          *(undefined4 *)((longlong)puVar6 + 0x44) = uStack_b4;
          *(undefined4 *)(puVar6 + 9) = uStack_b0;
          *(undefined4 *)((longlong)puVar6 + 0x4c) = uStack_ac;
          *(undefined4 *)(puVar6 + 6) = local_c8;
          *(undefined4 *)((longlong)puVar6 + 0x34) = uStack_c4;
          *(undefined4 *)(puVar6 + 7) = uStack_c0;
          *(undefined4 *)((longlong)puVar6 + 0x3c) = uStack_bc;
          if (plVar8 != (longlong *)0x0) {
            local_e8 = (undefined1 *)0x0;
          }
          if (puVar6 != (undefined8 *)0x0) {
            puVar5 = *(undefined8 **)(param_1 + 0xe20);
            *(undefined8 **)(param_1 + 0xe20) = puVar6;
            *puVar5 = puVar6;
            if (local_e8 != (undefined1 *)0x0) {
              (**(code **)(CONCAT44(uStack_c4,local_c8) + 0x10))();
            }
          }
        }
        LOCK();
        plVar8 = plVar7 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477bd7ca FUN_1477bd7ca body=427 status=ok
// SIG undefined FUN_1477bd7ca(void)

/* WARNING: Removing unreachable block (ram,0x0001477bd936) */
/* WARNING: Removing unreachable block (ram,0x0001477bd942) */
/* WARNING: Removing unreachable block (ram,0x0001477bd946) */

void FUN_1477bd7ca(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar5 = FUN_146269f19();
  if (cVar5 == '\0') {
    local_68 = 0;
    local_58 = &PTR_LAB_14a570740;
    local_78 = &LAB_143352c26;
    local_50 = param_1;
    local_48 = param_2;
    local_40 = param_3;
    FUN_1415826cc();
  }
  else {
    FUN_1433438ce(param_1,&local_c8,param_2);
    if (local_c0 != (longlong *)0x0) {
      iVar6 = (int)local_c0[1];
      do {
        if (iVar6 == 0) {
          plVar8 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar4 = (int)local_c0[1];
        bVar9 = iVar6 == iVar4;
        if (bVar9) {
          *(int *)(local_c0 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
        plVar8 = local_c0;
      } while (!bVar9);
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c0 + 0x10))();
      }
      if (plVar8 != (longlong *)0x0) {
        if (local_c8 != 0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          local_98 = &PTR_LAB_14a570760;
          uStack_90 = local_c8;
          local_88 = plVar8;
          uStack_80 = param_3;
          puVar7 = (undefined8 *)FUN_14001cc68(0x50,0x10);
          *puVar7 = 0;
          puVar7[2] = &LAB_143352c76;
          puVar7[4] = 0;
          local_a8 = 0;
          *(undefined4 *)(puVar7 + 6) = (undefined4)local_98;
          *(undefined4 *)((longlong)puVar7 + 0x34) = local_98._4_4_;
          *(undefined4 *)(puVar7 + 7) = (undefined4)uStack_90;
          *(undefined4 *)((longlong)puVar7 + 0x3c) = uStack_90._4_4_;
          *(undefined4 *)(puVar7 + 8) = (undefined4)local_88;
          *(undefined4 *)((longlong)puVar7 + 0x44) = local_88._4_4_;
          *(undefined4 *)(puVar7 + 9) = uStack_80;
          *(undefined4 *)((longlong)puVar7 + 0x4c) = uStack_7c;
          local_b8 = 0;
          if (puVar7 != (undefined8 *)0x0) {
            puVar3 = *(undefined8 **)(param_1 + 0xe20);
            *(undefined8 **)(param_1 + 0xe20) = puVar7;
            *puVar3 = puVar7;
          }
        }
        LOCK();
        plVar2 = plVar8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    }
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477bd976 FUN_1477bd976 body=427 status=ok
// SIG undefined FUN_1477bd976(void)

/* WARNING: Removing unreachable block (ram,0x0001477bdae2) */
/* WARNING: Removing unreachable block (ram,0x0001477bdaee) */
/* WARNING: Removing unreachable block (ram,0x0001477bdaf2) */

void FUN_1477bd976(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar5 = FUN_146269f19();
  if (cVar5 == '\0') {
    local_68 = 0;
    local_58 = &PTR_LAB_14a570780;
    local_78 = &LAB_143352d30;
    local_50 = param_1;
    local_48 = param_2;
    local_40 = param_3;
    FUN_1415826cc();
  }
  else {
    FUN_1433438ce(param_1,&local_c8,param_2);
    if (local_c0 != (longlong *)0x0) {
      iVar6 = (int)local_c0[1];
      do {
        if (iVar6 == 0) {
          plVar8 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar4 = (int)local_c0[1];
        bVar9 = iVar6 == iVar4;
        if (bVar9) {
          *(int *)(local_c0 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
        plVar8 = local_c0;
      } while (!bVar9);
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c0 + 0x10))();
      }
      if (plVar8 != (longlong *)0x0) {
        if (local_c8 != 0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          local_98 = &PTR_LAB_14a5707a0;
          uStack_90 = local_c8;
          local_88 = plVar8;
          uStack_80 = param_3;
          puVar7 = (undefined8 *)FUN_14001cc68(0x50,0x10);
          *puVar7 = 0;
          puVar7[2] = &LAB_143352d80;
          puVar7[4] = 0;
          local_a8 = 0;
          *(undefined4 *)(puVar7 + 6) = (undefined4)local_98;
          *(undefined4 *)((longlong)puVar7 + 0x34) = local_98._4_4_;
          *(undefined4 *)(puVar7 + 7) = (undefined4)uStack_90;
          *(undefined4 *)((longlong)puVar7 + 0x3c) = uStack_90._4_4_;
          *(undefined4 *)(puVar7 + 8) = (undefined4)local_88;
          *(undefined4 *)((longlong)puVar7 + 0x44) = local_88._4_4_;
          *(undefined4 *)(puVar7 + 9) = uStack_80;
          *(undefined4 *)((longlong)puVar7 + 0x4c) = uStack_7c;
          local_b8 = 0;
          if (puVar7 != (undefined8 *)0x0) {
            puVar3 = *(undefined8 **)(param_1 + 0xe20);
            *(undefined8 **)(param_1 + 0xe20) = puVar7;
            *puVar3 = puVar7;
          }
        }
        LOCK();
        plVar2 = plVar8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    }
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477bdb22 FUN_1477bdb22 body=427 status=ok
// SIG undefined FUN_1477bdb22(void)

/* WARNING: Removing unreachable block (ram,0x0001477bdc8e) */
/* WARNING: Removing unreachable block (ram,0x0001477bdc9a) */
/* WARNING: Removing unreachable block (ram,0x0001477bdc9e) */

void FUN_1477bdb22(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar5 = FUN_146269f19();
  if (cVar5 == '\0') {
    local_68 = 0;
    local_58 = &PTR_LAB_14a5707c0;
    local_78 = &LAB_143352e3a;
    local_50 = param_1;
    local_48 = param_2;
    local_40 = param_3;
    FUN_1415826cc();
  }
  else {
    FUN_1433438ce(param_1,&local_c8,param_2);
    if (local_c0 != (longlong *)0x0) {
      iVar6 = (int)local_c0[1];
      do {
        if (iVar6 == 0) {
          plVar8 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar4 = (int)local_c0[1];
        bVar9 = iVar6 == iVar4;
        if (bVar9) {
          *(int *)(local_c0 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
        plVar8 = local_c0;
      } while (!bVar9);
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c0 + 0x10))();
      }
      if (plVar8 != (longlong *)0x0) {
        if (local_c8 != 0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          local_98 = &PTR_LAB_14a5707e0;
          uStack_90 = local_c8;
          local_88 = plVar8;
          uStack_80 = param_3;
          puVar7 = (undefined8 *)FUN_14001cc68(0x50,0x10);
          *puVar7 = 0;
          puVar7[2] = &LAB_143352e8a;
          puVar7[4] = 0;
          local_a8 = 0;
          *(undefined4 *)(puVar7 + 6) = (undefined4)local_98;
          *(undefined4 *)((longlong)puVar7 + 0x34) = local_98._4_4_;
          *(undefined4 *)(puVar7 + 7) = (undefined4)uStack_90;
          *(undefined4 *)((longlong)puVar7 + 0x3c) = uStack_90._4_4_;
          *(undefined4 *)(puVar7 + 8) = (undefined4)local_88;
          *(undefined4 *)((longlong)puVar7 + 0x44) = local_88._4_4_;
          *(undefined4 *)(puVar7 + 9) = uStack_80;
          *(undefined4 *)((longlong)puVar7 + 0x4c) = uStack_7c;
          local_b8 = 0;
          if (puVar7 != (undefined8 *)0x0) {
            puVar3 = *(undefined8 **)(param_1 + 0xe20);
            *(undefined8 **)(param_1 + 0xe20) = puVar7;
            *puVar3 = puVar7;
          }
        }
        LOCK();
        plVar2 = plVar8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    }
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477bdcce FUN_1477bdcce body=411 status=ok
// SIG undefined FUN_1477bdcce(void)

/* WARNING: Removing unreachable block (ram,0x0001477bde2a) */
/* WARNING: Removing unreachable block (ram,0x0001477bde36) */
/* WARNING: Removing unreachable block (ram,0x0001477bde3a) */

void FUN_1477bdcce(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar5 = FUN_146269f19();
  if (cVar5 == '\0') {
    local_58 = 0;
    local_48 = &PTR_LAB_14a570800;
    local_68 = &LAB_143352f44;
    local_40 = param_1;
    local_38 = param_2;
    local_30 = param_3;
    FUN_1415826cc();
  }
  else {
    FUN_1433438ce(param_1,&local_b8,param_2);
    if (local_b0 != (longlong *)0x0) {
      iVar6 = (int)local_b0[1];
      do {
        if (iVar6 == 0) {
          plVar8 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar4 = (int)local_b0[1];
        bVar9 = iVar6 == iVar4;
        if (bVar9) {
          *(int *)(local_b0 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
        plVar8 = local_b0;
      } while (!bVar9);
      LOCK();
      piVar1 = (int *)((longlong)local_b0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_b0 + 0x10))();
      }
      if (plVar8 != (longlong *)0x0) {
        if (local_b8 != 0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          local_88 = &PTR_LAB_14a570820;
          uStack_80 = local_b8;
          uStack_70 = CONCAT31(uStack_70._1_3_,param_3);
          local_78 = plVar8;
          puVar7 = (undefined8 *)FUN_14001cc68(0x50,0x10);
          *puVar7 = 0;
          puVar7[2] = &LAB_143352f94;
          puVar7[4] = 0;
          local_98 = 0;
          *(undefined4 *)(puVar7 + 6) = (undefined4)local_88;
          *(undefined4 *)((longlong)puVar7 + 0x34) = local_88._4_4_;
          *(undefined4 *)(puVar7 + 7) = (undefined4)uStack_80;
          *(undefined4 *)((longlong)puVar7 + 0x3c) = uStack_80._4_4_;
          *(undefined4 *)(puVar7 + 8) = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar7 + 0x44) = local_78._4_4_;
          *(undefined4 *)(puVar7 + 9) = uStack_70;
          *(undefined4 *)((longlong)puVar7 + 0x4c) = uStack_6c;
          local_a8 = 0;
          if (puVar7 != (undefined8 *)0x0) {
            puVar3 = *(undefined8 **)(param_1 + 0xe20);
            *(undefined8 **)(param_1 + 0xe20) = puVar7;
            *puVar3 = puVar7;
          }
        }
        LOCK();
        plVar2 = plVar8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    }
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477bde6a FUN_1477bde6a body=427 status=ok
// SIG undefined FUN_1477bde6a(void)

/* WARNING: Removing unreachable block (ram,0x0001477bdfd6) */
/* WARNING: Removing unreachable block (ram,0x0001477bdfe2) */
/* WARNING: Removing unreachable block (ram,0x0001477bdfe6) */

void FUN_1477bde6a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar5 = FUN_146269f19();
  if (cVar5 == '\0') {
    local_68 = 0;
    local_58 = &PTR_LAB_14a570840;
    local_78 = &LAB_143353046;
    local_50 = param_1;
    local_48 = param_2;
    local_40 = param_3;
    FUN_1415826cc();
  }
  else {
    FUN_1433438ce(param_1,&local_c8,param_2);
    if (local_c0 != (longlong *)0x0) {
      iVar6 = (int)local_c0[1];
      do {
        if (iVar6 == 0) {
          plVar8 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar4 = (int)local_c0[1];
        bVar9 = iVar6 == iVar4;
        if (bVar9) {
          *(int *)(local_c0 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
        plVar8 = local_c0;
      } while (!bVar9);
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c0 + 0x10))();
      }
      if (plVar8 != (longlong *)0x0) {
        if (local_c8 != 0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          local_98 = &PTR_LAB_14a570860;
          uStack_90 = local_c8;
          local_88 = plVar8;
          uStack_80 = param_3;
          puVar7 = (undefined8 *)FUN_14001cc68(0x50,0x10);
          *puVar7 = 0;
          puVar7[2] = &LAB_143353096;
          puVar7[4] = 0;
          local_a8 = 0;
          *(undefined4 *)(puVar7 + 6) = (undefined4)local_98;
          *(undefined4 *)((longlong)puVar7 + 0x34) = local_98._4_4_;
          *(undefined4 *)(puVar7 + 7) = (undefined4)uStack_90;
          *(undefined4 *)((longlong)puVar7 + 0x3c) = uStack_90._4_4_;
          *(undefined4 *)(puVar7 + 8) = (undefined4)local_88;
          *(undefined4 *)((longlong)puVar7 + 0x44) = local_88._4_4_;
          *(undefined4 *)(puVar7 + 9) = uStack_80;
          *(undefined4 *)((longlong)puVar7 + 0x4c) = uStack_7c;
          local_b8 = 0;
          if (puVar7 != (undefined8 *)0x0) {
            puVar3 = *(undefined8 **)(param_1 + 0xe20);
            *(undefined8 **)(param_1 + 0xe20) = puVar7;
            *puVar3 = puVar7;
          }
        }
        LOCK();
        plVar2 = plVar8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    }
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477be016 FUN_1477be016 body=1104 status=ok
// SIG undefined FUN_1477be016(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffe48 : 0x0001477be43c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1477be016(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 auStack_218 [40];
  longlong local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  code *local_1d8;
  undefined8 local_1c8;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 local_154;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  code *local_98 [2];
  undefined8 *local_88;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_1e0 = 0;
  FUN_14485c47a();
  cVar5 = FUN_146269f19();
  if (cVar5 == '\0') {
    local_198 = *(undefined4 *)(param_1 + 0x90);
    uStack_194 = (undefined4)local_1e0;
    uStack_190 = (undefined4)((ulonglong)local_1e0 >> 0x20);
    local_168 = 0;
    local_160 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_15c = 0xffffffff00000080;
    local_154 = 0;
    local_148 = 0;
    local_140 = 0;
    FUN_1477ce3e2(&local_188,param_3);
    local_118 = 0;
    local_110 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_10c = 0xffffffff00000080;
    local_104 = 0;
    local_f8 = 0;
    local_f0 = 0;
    FUN_1477ce3e2(&local_138,param_4);
    local_c8 = 0;
    local_c0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_bc = 0xffffffff00000080;
    local_b4 = 0;
    local_a8 = 0;
    local_a0 = 0;
    FUN_1477ce3e2(&local_e8,param_5);
    local_98[0] = (code *)0x0;
    puVar7 = (undefined8 *)FUN_14001cc68(0x108,8);
    *puVar7 = &PTR_LAB_14a570880;
    *(undefined4 *)(puVar7 + 2) = uStack_190;
    puVar7[1] = CONCAT44(uStack_194,local_198);
    local_88 = puVar7;
    FUN_1477ce544(puVar7 + 3,&local_188);
    FUN_1477ce544(puVar7 + 0xd,&local_138);
    FUN_1477ce544(puVar7 + 0x17,&local_e8);
    if (puVar7 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_98[0] = FUN_143353142;
    }
    FUN_1415826cc(local_98);
    FUN_143348ab2(&local_198);
  }
  else if (((*(byte *)(param_1 + 0x598) & 0x20) != 0) && (*(longlong *)(param_1 + 0x110) != 0)) {
    FUN_1433438ce(param_1,&local_1f0,param_2);
    cVar5 = FUN_144729dda(&local_1e0);
    plVar3 = local_1e8;
    if (cVar5 != '\0') {
      if (DAT_14c7610f0 == 0) {
        local_198 = (undefined4)local_1f0;
        uStack_194 = (undefined4)((ulonglong)local_1f0 >> 0x20);
        uStack_190 = SUB84(local_1e8,0);
        uStack_18c = (undefined4)((ulonglong)local_1e8 >> 0x20);
        if (local_1e8 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_1e8 + 0xc) = *(int *)((longlong)local_1e8 + 0xc) + 1;
          UNLOCK();
        }
        pcVar9 = (code *)0x0;
        local_168 = 0;
        local_160 = 0;
        local_188 = 0;
        uStack_180 = 0;
        local_15c = 0xffffffff00000080;
        local_154 = 0;
        local_148 = 0;
        local_140 = 0;
        FUN_1477ce3e2(&local_188,param_3);
        local_118 = 0;
        local_110 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_10c = 0xffffffff00000080;
        local_104 = 0;
        local_f8 = 0;
        local_f0 = 0;
        FUN_1477ce3e2(&local_138,param_4);
        local_c8 = 0;
        local_c0 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        local_bc = 0xffffffff00000080;
        local_b4 = 0;
        local_a8 = 0;
        local_a0 = 0;
        FUN_1477ce3e2(&local_e8,param_5);
        local_1d8 = (code *)0x0;
        puVar7 = (undefined8 *)FUN_14001cc68(0x108,8);
        *puVar7 = &PTR_FUN_14a5708a0;
        puVar7[1] = CONCAT44(uStack_194,local_198);
        puVar7[2] = CONCAT44(uStack_18c,uStack_190);
        local_198 = 0;
        uStack_194 = 0;
        uStack_190 = 0;
        uStack_18c = 0;
        FUN_1477ce544(puVar7 + 3,&local_188);
        FUN_1477ce544(puVar7 + 0xd,&local_138);
        FUN_1477ce544(puVar7 + 0x17,&local_e8);
        if (puVar7 != (undefined8 *)&DAT_fffffffffffffff8) {
          pcVar9 = FUN_1433532ac;
          local_1d8 = FUN_1433532ac;
        }
        puVar8 = (undefined8 *)FUN_14001cc68(0x50,0x10);
        *puVar8 = 0;
        puVar8[2] = pcVar9;
        puVar8[4] = puVar7;
        local_1c8 = 0;
        *(undefined4 *)(puVar8 + 8) = local_1a8;
        *(undefined4 *)((longlong)puVar8 + 0x44) = uStack_1a4;
        *(undefined4 *)(puVar8 + 9) = uStack_1a0;
        *(undefined4 *)((longlong)puVar8 + 0x4c) = uStack_19c;
        *(undefined4 *)(puVar8 + 6) = local_1b8;
        *(undefined4 *)((longlong)puVar8 + 0x34) = uStack_1b4;
        *(undefined4 *)(puVar8 + 7) = uStack_1b0;
        *(undefined4 *)((longlong)puVar8 + 0x3c) = uStack_1ac;
        if (puVar7 != (undefined8 *)&DAT_fffffffffffffff8) {
          local_1d8 = (code *)0x0;
        }
        if (puVar8 != (undefined8 *)0x0) {
          puVar7 = *(undefined8 **)(param_1 + 0xe20);
          *(undefined8 **)(param_1 + 0xe20) = puVar8;
          *puVar7 = puVar8;
          if (local_1d8 != (code *)0x0) {
            (**(code **)(CONCAT44(uStack_1b4,local_1b8) + 0x10))();
          }
        }
        FUN_143348b34(&local_198);
      }
      else if (local_1e8 != (longlong *)0x0) {
        iVar6 = (int)local_1e8[1];
        do {
          if (iVar6 == 0) goto LAB_1477be12d;
          LOCK();
          iVar4 = (int)local_1e8[1];
          bVar10 = iVar6 == iVar4;
          if (bVar10) {
            *(int *)(local_1e8 + 1) = iVar6 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          UNLOCK();
        } while (!bVar10);
        if (local_1f0 != 0) {
          FUN_1477d913e(local_1f0,param_3,param_4,param_5);
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
    }
LAB_1477be12d:
    if (local_1e8 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)local_1e8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1e8 + 0x10))();
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477be468 FUN_1477be468 body=593 status=ok
// SIG undefined FUN_1477be468(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff38 : 0x0001477be682 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1477be468(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  bool bVar11;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong *local_f0;
  undefined1 *local_e8;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  code *local_a8;
  undefined8 local_98;
  undefined **local_88;
  undefined4 local_80;
  longlong local_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  cVar4 = FUN_146269f19();
  if (cVar4 == '\0') {
    local_f8 = 0;
    FUN_14485c47a(&local_f8,param_2);
    local_80 = *(undefined4 *)(param_1 + 0x90);
    local_98 = 0;
    local_88 = &PTR_LAB_14a5708c0;
    local_7c = local_f8;
    local_6c = param_5;
    local_a8 = FUN_143353510;
    local_74 = param_3;
    local_70 = param_4;
    FUN_1415826cc();
  }
  else {
    FUN_1433438ce(param_1,&local_f8,param_2);
    if (local_f0 != (longlong *)0x0) {
      iVar5 = (int)local_f0[1];
      do {
        if (iVar5 == 0) {
          plVar8 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_f0[1];
        bVar11 = iVar5 == iVar3;
        if (bVar11) {
          *(int *)(local_f0 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
        plVar8 = local_f0;
      } while (!bVar11);
      LOCK();
      piVar1 = (int *)((longlong)local_f0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_f0 + 0x10))();
      }
      lVar2 = local_f8;
      if (plVar8 != (longlong *)0x0) {
        if (local_f8 != 0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          local_e8 = (undefined1 *)0x0;
          puVar6 = (undefined8 *)FUN_14001cc68(0x28,8);
          *puVar6 = &PTR_FUN_14a5708e0;
          plVar9 = puVar6 + 1;
          *plVar9 = lVar2;
          puVar6[2] = plVar8;
          *(undefined4 *)(puVar6 + 3) = param_3;
          *(undefined4 *)((longlong)puVar6 + 0x1c) = param_4;
          *(undefined4 *)(puVar6 + 4) = param_5;
          if (plVar9 == (longlong *)0x0) {
            puVar10 = (undefined1 *)0x0;
          }
          else {
            puVar10 = &LAB_1433535e8;
            local_e8 = &LAB_1433535e8;
          }
          puVar7 = (undefined8 *)FUN_14001cc68(0x50,0x10);
          *puVar7 = 0;
          puVar7[2] = puVar10;
          puVar7[4] = puVar6;
          local_d8 = 0;
          *(undefined4 *)(puVar7 + 8) = local_b8;
          *(undefined4 *)((longlong)puVar7 + 0x44) = uStack_b4;
          *(undefined4 *)(puVar7 + 9) = uStack_b0;
          *(undefined4 *)((longlong)puVar7 + 0x4c) = uStack_ac;
          *(undefined4 *)(puVar7 + 6) = local_c8;
          *(undefined4 *)((longlong)puVar7 + 0x34) = uStack_c4;
          *(undefined4 *)(puVar7 + 7) = uStack_c0;
          *(undefined4 *)((longlong)puVar7 + 0x3c) = uStack_bc;
          if (plVar9 != (longlong *)0x0) {
            local_e8 = (undefined1 *)0x0;
          }
          if (puVar7 != (undefined8 *)0x0) {
            puVar6 = *(undefined8 **)(param_1 + 0xe20);
            *(undefined8 **)(param_1 + 0xe20) = puVar7;
            *puVar6 = puVar7;
            if (local_e8 != (undefined1 *)0x0) {
              (**(code **)(CONCAT44(uStack_c4,local_c8) + 0x10))();
            }
          }
        }
        LOCK();
        plVar9 = plVar8 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477be6ba FUN_1477be6ba body=139 status=ok
// SIG undefined FUN_1477be6ba(void)

bool FUN_1477be6ba(longlong param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0xdc8) != *(int *)(param_1 + 0xdf4)) {
    lVar2 = param_1 + 0xdf8;
    if (*(longlong *)(param_1 + 0xe00) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xe00);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xe08) - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0xdc0) + (longlong)iVar1 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 0xdc0) + (longlong)iVar1 * 0x20) == param_2)
        goto LAB_1477be6cf;
        iVar1 = *(int *)(lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  lVar2 = 0;
LAB_1477be6cf:
  lVar3 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  if (lVar3 != 0) {
    FUN_1477b919e(param_3,lVar3);
  }
  return lVar3 != 0;
}



// FUNCTION 1477be746 FUN_1477be746 body=109 status=ok
// SIG undefined FUN_1477be746(void)

bool FUN_1477be746(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar6 = 0;
  lVar1 = *param_2;
  puVar6[2] = lVar1;
  puVar6[4] = param_2[2];
  param_2[2] = 0;
  lVar3 = param_2[4];
  lVar4 = param_2[5];
  lVar5 = param_2[7];
  puVar6[8] = param_2[6];
  puVar6[9] = lVar5;
  puVar6[6] = lVar3;
  puVar6[7] = lVar4;
  if (lVar1 != 0) {
    *param_2 = 0;
  }
  if (puVar6 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*param_1;
    *param_1 = puVar6;
    *puVar2 = puVar6;
  }
  return puVar6 != (undefined8 *)0x0;
}



// FUNCTION 1477be7b4 FUN_1477be7b4 body=111 status=ok
// SIG undefined FUN_1477be7b4(void)

longlong * FUN_1477be7b4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 == 0) {
    *(undefined1 *)(param_2 + 8) = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    *param_2 = lVar2;
    param_2[2] = *(longlong *)(lVar1 + 0x20);
    *(undefined8 *)(lVar1 + 0x20) = 0;
    uVar3 = *(undefined4 *)(lVar1 + 0x30);
    uVar4 = *(undefined4 *)(lVar1 + 0x34);
    uVar5 = *(undefined4 *)(lVar1 + 0x38);
    uVar6 = *(undefined4 *)(lVar1 + 0x3c);
    uVar7 = *(undefined4 *)(lVar1 + 0x44);
    uVar8 = *(undefined4 *)(lVar1 + 0x48);
    uVar9 = *(undefined4 *)(lVar1 + 0x4c);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(lVar1 + 0x40);
    *(undefined4 *)((longlong)param_2 + 0x34) = uVar7;
    *(undefined4 *)(param_2 + 7) = uVar8;
    *(undefined4 *)((longlong)param_2 + 0x3c) = uVar9;
    *(undefined4 *)(param_2 + 4) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0x24) = uVar4;
    *(undefined4 *)(param_2 + 5) = uVar5;
    *(undefined4 *)((longlong)param_2 + 0x2c) = uVar6;
    if (lVar2 != 0) {
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    *(undefined1 *)(param_2 + 8) = 1;
    FUN_1400020a8(*(undefined8 *)(param_1 + 8));
    *(longlong *)(param_1 + 8) = lVar1;
  }
  return param_2;
}



// FUNCTION 1477be824 FUN_1477be824 body=75 status=ok
// SIG undefined FUN_1477be824(void)

longlong * FUN_1477be824(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if (param_2 != param_1) {
    if ((char)param_2[8] == '\x01') {
      FUN_1477ce652(param_1);
    }
    else if ((char)param_1[8] == '\x01') {
      if (*param_1 != 0) {
        plVar1 = param_1 + 4;
        if ((longlong *)param_1[2] != (longlong *)0x0) {
          plVar1 = (longlong *)param_1[2];
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      *(undefined1 *)(param_1 + 8) = 0;
    }
  }
  return param_1;
}



// FUNCTION 1477be870 FUN_1477be870 body=152 status=ok
// SIG undefined FUN_1477be870(void)

void FUN_1477be870(longlong param_1,ulonglong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x599) & 4) != 0) {
    param_2 = param_2 & 0xffffffff;
    cVar1 = FUN_144a53f06();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0xb68) + 0xf0))();
      if (cVar1 == '\0') {
        uVar2 = *(undefined8 *)(param_1 + 0xe10);
        goto LAB_1477be8be;
      }
    }
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0xb68) + 0xf0))();
  if (cVar1 == '\0') {
    FUN_1477bbfe8(param_1);
    FUN_1433473a6(*(undefined8 *)(param_1 + 0xe10));
    FUN_1433473a6(*(undefined8 *)(param_1 + 0xe10));
    FUN_1477bc494(*(undefined8 *)(param_1 + 0xe10),1);
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0xe10);
  param_2 = 1;
LAB_1477be8be:
  FUN_143348bd4(uVar2,param_2);
  return;
}



// FUNCTION 1477be908 FUN_1477be908 body=106 status=ok
// SIG undefined FUN_1477be908(void)

void FUN_1477be908(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < 1) {
    return;
  }
  uVar3 = 0;
  bVar1 = false;
  do {
    uVar3 = (ulonglong)(int)uVar3;
    plVar4 = (longlong *)(uVar3 * 0x10 + *param_1);
    while (*plVar4 != *param_2) {
      uVar3 = uVar3 + 1;
      plVar4 = plVar4 + 2;
      if ((longlong)iVar2 <= (longlong)uVar3) {
        if (!bVar1) {
          return;
        }
        goto LAB_1477be963;
      }
    }
    FUN_1477ce6fe(param_1,uVar3 & 0xffffffff);
    iVar2 = (int)param_1[1];
    bVar1 = true;
  } while ((int)uVar3 < iVar2);
LAB_1477be963:
  FUN_1477ce6c0(param_1);
  return;
}



// FUNCTION 1477bee40 FUN_1477bee40 body=97 status=ok
// SIG undefined FUN_1477bee40(void)

undefined8 FUN_1477bee40(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = (longlong *)param_1[1];
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
    if (*param_1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_1477d2eec();
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
  return uVar6;
}



// FUNCTION 1477beeb0 FUN_1477beeb0 body=1484 status=ok
// SIG undefined FUN_1477beeb0(void)

void FUN_1477beeb0(longlong param_1,int param_2,longlong param_3,float param_4,float param_5,
                  longlong *param_6,float param_7,longlong *param_8)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint *puVar10;
  uint *puVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  
  if ((*(byte *)(param_3 + 0xce) & 1) != 0) {
    if (param_2 == 2) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cabb110) && (FUN_144b3d300(&DAT_14cabb110), DAT_14cabb110 == -1))
      {
        DAT_14cabb10c = 0x3f3504f3;
        _Init_thread_footer(&DAT_14cabb110);
      }
      iVar4 = (int)param_8[1];
      *(uint *)(param_8 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_8 + 0xc) < iVar4 + 1U) {
        FUN_145ca0cd4(param_8,iVar4);
      }
      uVar16 = DAT_14cabb10c;
      *(undefined4 *)(*param_8 + (longlong)iVar4 * 4) = DAT_14cabb10c;
      iVar4 = (int)param_8[1];
      *(uint *)(param_8 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_8 + 0xc) < iVar4 + 1U) {
        FUN_145ca0cd4(param_8,iVar4);
        uVar16 = DAT_14cabb10c;
      }
      *(undefined4 *)(*param_8 + (longlong)iVar4 * 4) = uVar16;
      return;
    }
    iVar4 = *(int *)(param_1 + 0xcd0);
    if ((longlong)iVar4 == 0) {
      return;
    }
    lVar8 = *(longlong *)(param_1 + 0xcc8);
    lVar12 = 0;
    do {
      uVar16 = 0x3f800000;
      if (*(int *)(lVar8 + lVar12) != 2) {
        uVar16 = 0;
      }
      iVar3 = (int)param_8[1];
      *(uint *)(param_8 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_8 + 0xc) < iVar3 + 1U) {
        FUN_145ca0cd4(param_8,iVar3);
      }
      *(undefined4 *)(*param_8 + (longlong)iVar3 * 4) = uVar16;
      lVar12 = lVar12 + 4;
    } while ((longlong)iVar4 * 4 != lVar12);
    return;
  }
  uVar2 = *(uint *)(param_1 + 0xc28);
  puVar7 = *(uint **)(param_1 + 0xc20);
  if (0 < (longlong)(int)uVar2) {
    uVar9 = (ulonglong)uVar2;
    uVar6 = 0;
    puVar11 = puVar7;
    do {
      fVar15 = (float)puVar11[1];
      if (param_4 <= fVar15) {
        if (uVar6 != 0) {
          uVar9 = uVar6 & 0xffffffff;
        }
        puVar10 = puVar7 + uVar9 * 4 + -4;
        if (puVar10 != (uint *)0x0) goto LAB_1477bef4c;
        break;
      }
      uVar6 = uVar6 + 1;
      puVar11 = puVar11 + 4;
    } while (uVar9 != uVar6);
  }
  puVar10 = puVar7 + (longlong)(int)uVar2 * 4 + -4;
  fVar15 = (float)puVar7[1];
  puVar11 = puVar7;
LAB_1477bef4c:
  fVar13 = (float)puVar10[1];
  fVar15 = ((float)(~-(uint)(param_4 < fVar13) & (uint)param_4 |
                   (uint)(param_4 + 360.0) & -(uint)(param_4 < fVar13)) - fVar13) /
           ((float)(~-(uint)(fVar15 < fVar13) & (uint)fVar15 |
                   (uint)(fVar15 + 360.0) & -(uint)(fVar15 < fVar13)) - fVar13);
  if (*(char *)(param_1 + 0xc35) != '\x01') {
    fVar13 = 1.0 - fVar15;
    goto LAB_1477bf189;
  }
  fVar15 = fVar15 * 0.5 * 3.1415927;
  fVar15 = (float)(longlong)
                  (fVar15 * 0.15915494 + *(float *)(&DAT_14a184448 + (ulonglong)(fVar15 < 0.0) * 4))
           * -6.2831855 + fVar15;
  if (fVar15 <= 1.5707964) {
    if (fVar15 < -1.5707964) {
      fVar13 = -3.1415927;
      goto LAB_1477bf00a;
    }
    fVar13 = 1.0;
  }
  else {
    fVar13 = 3.1415927;
LAB_1477bf00a:
    fVar15 = fVar13 - fVar15;
    fVar13 = -1.0;
  }
  fVar14 = fVar15 * fVar15;
  fVar15 = (((((fVar14 * -2.3889859e-08 + 2.7525562e-06) * fVar14 + -0.00019840874) * fVar14 +
             0.008333331) * fVar14 + -0.16666667) * fVar14 + 1.0) * fVar15;
  fVar13 = (((((fVar14 * -2.6051615e-07 + 2.4760495e-05) * fVar14 + -0.0013888378) * fVar14 +
             0.041666638) * fVar14 + -0.5) * fVar14 + 1.0) * fVar13;
  if (1.0 <= fVar15) {
    fVar15 = 1.0;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  if (1.0 <= fVar13) {
    fVar13 = 1.0;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
LAB_1477bf189:
  puVar7 = *(uint **)(param_1 + 0xcc8);
  iVar4 = *(int *)(param_1 + 0xcd0);
  if (param_5 <= 0.0) {
    if (iVar4 != 0) {
      lVar8 = 0;
      do {
        uVar2 = *(uint *)((longlong)puVar7 + lVar8);
        if (uVar2 == 3) {
          fVar14 = *(float *)(param_3 + 0xc0);
        }
        else {
          fVar14 = fVar13;
          if ((((uVar2 != *puVar10) && (fVar14 = fVar15, uVar2 != *puVar11)) &&
              (fVar14 = 0.0, uVar2 == 2)) && (fVar14 = *(float *)(param_3 + 0xb4), fVar14 <= 0.0)) {
            fVar14 = 0.0;
          }
        }
        iVar3 = (int)param_8[1];
        *(uint *)(param_8 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_8 + 0xc) < iVar3 + 1U) {
          FUN_145ca0cd4(param_8,iVar3);
        }
        *(float *)(*param_8 + (longlong)iVar3 * 4) = fVar14;
        lVar8 = lVar8 + 4;
      } while ((longlong)iVar4 * 4 != lVar8);
    }
  }
  else if (iVar4 != 0) {
    puVar1 = puVar7 + iVar4;
    do {
      uVar2 = *puVar7;
      fVar14 = param_7;
      if ((param_6 != (longlong *)0x0) && ((int)param_6[1] != *(int *)((longlong)param_6 + 0x34))) {
        plVar5 = (longlong *)param_6[8];
        if ((longlong *)param_6[8] == (longlong *)0x0) {
          plVar5 = param_6 + 7;
        }
        iVar4 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_6[9] - 1U & uVar2) * 4);
        if (iVar4 != -1) {
          do {
            lVar8 = *param_6 + (longlong)iVar4 * 0x10;
            if (*(uint *)(*param_6 + (longlong)iVar4 * 0x10) == uVar2) {
              if ((float *)(lVar8 + 4) != (float *)0x0 && lVar8 != 0) {
                fVar14 = *(float *)(lVar8 + 4);
              }
              break;
            }
            iVar4 = *(int *)(lVar8 + 8);
          } while (iVar4 != -1);
        }
      }
      if (uVar2 == 3) {
        fVar14 = *(float *)(param_3 + 0xc0);
      }
      else if (uVar2 == *puVar10) {
        fVar14 = (fVar14 - fVar13) * param_5 + fVar13;
      }
      else if (uVar2 == *puVar11) {
        fVar14 = (fVar14 - fVar15) * param_5 + fVar15;
      }
      else {
        fVar17 = fVar14 * param_5 + 0.0;
        fVar14 = fVar17;
        if ((uVar2 == 2) &&
           (fVar14 = *(float *)(param_3 + 0xb4), *(float *)(param_3 + 0xb4) <= fVar17)) {
          fVar14 = fVar17;
        }
      }
      iVar4 = (int)param_8[1];
      *(uint *)(param_8 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_8 + 0xc) < iVar4 + 1U) {
        FUN_145ca0cd4(param_8,iVar4);
      }
      *(float *)(*param_8 + (longlong)iVar4 * 4) = fVar14;
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar1);
  }
  return;
}



// FUNCTION 1477bf47c FUN_1477bf47c body=357 status=ok
// SIG undefined FUN_1477bf47c(void)

undefined8 FUN_1477bf47c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1433438ce(param_1,&local_48,param_2);
  if (local_40 == (longlong *)0x0) {
LAB_1477bf505:
    bVar8 = true;
    plVar6 = (longlong *)0x0;
LAB_1477bf50a:
    plVar2 = (longlong *)(*(undefined8 **)(param_1 + 0xb48))[1];
    if (plVar2 == (longlong *)0x0) {
      uVar5 = FUN_1477d84e4(0,param_3,param_4);
    }
    else {
      uVar5 = **(undefined8 **)(param_1 + 0xb48);
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      iVar4 = (int)plVar2[1];
      do {
        plVar7 = (longlong *)0x0;
        if (iVar4 == 0) break;
        LOCK();
        iVar3 = (int)plVar2[1];
        bVar9 = iVar4 == iVar3;
        if (bVar9) {
          *(int *)(plVar2 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar7 = plVar2;
      } while (!bVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      if (plVar7 == (longlong *)0x0) {
        uVar5 = 0;
      }
      uVar5 = FUN_1477d84e4(uVar5,param_3,param_4);
      if (plVar7 != (longlong *)0x0) {
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
    if (bVar8) goto LAB_1477bf5b4;
  }
  else {
    iVar4 = (int)local_40[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_40[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(local_40 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_40;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)local_40 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
    if (plVar6 == (longlong *)0x0) goto LAB_1477bf505;
    if (local_48 == 0) {
      bVar8 = false;
      goto LAB_1477bf50a;
    }
    uVar5 = FUN_1477d84e4(local_48,param_3,param_4);
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
LAB_1477bf5b4:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1477bf5e2 FUN_1477bf5e2 body=156 status=ok
// SIG undefined FUN_1477bf5e2(void)

void FUN_1477bf5e2(longlong *param_1,longlong *param_2)

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
          return;
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
        FUN_1477ce958(param_1);
        return;
      }
      lVar3 = lVar3 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 << 3 != lVar6);
  }
  return;
}



// FUNCTION 1477bf67e FUN_1477bf67e body=339 status=ok
// SIG undefined FUN_1477bf67e(void)

void FUN_1477bf67e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1433438ce(param_1,&local_40,param_2);
  if (local_38 == (longlong *)0x0) {
LAB_1477bf702:
    bVar8 = true;
    plVar7 = (longlong *)0x0;
LAB_1477bf707:
    plVar3 = (longlong *)(*(undefined8 **)(param_1 + 0xb48))[1];
    if (plVar3 == (longlong *)0x0) {
LAB_1477bf75e:
      FUN_14335c73c(0,param_3,param_4);
    }
    else {
      uVar4 = **(undefined8 **)(param_1 + 0xb48);
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_1477bf75e;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar9 = iVar6 == iVar5;
        if (bVar9) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar9);
      FUN_14335c73c(uVar4,param_3,param_4);
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
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    if (bVar8) goto LAB_1477bf7bd;
  }
  else {
    iVar6 = (int)local_38[1];
    do {
      if (iVar6 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar5 = (int)local_38[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(local_38 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
      plVar7 = local_38;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)local_38 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    if (plVar7 == (longlong *)0x0) goto LAB_1477bf702;
    if (local_40 == 0) {
      bVar8 = false;
      goto LAB_1477bf707;
    }
    FUN_14335c73c(local_40,param_3,param_4);
  }
  LOCK();
  plVar3 = plVar7 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
  }
LAB_1477bf7bd:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477bf7e6 FUN_1477bf7e6 body=339 status=ok
// SIG undefined FUN_1477bf7e6(void)

void FUN_1477bf7e6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1433438ce(param_1,&local_40,param_2);
  if (local_38 == (longlong *)0x0) {
LAB_1477bf86a:
    bVar8 = true;
    plVar7 = (longlong *)0x0;
LAB_1477bf86f:
    plVar3 = (longlong *)(*(undefined8 **)(param_1 + 0xb48))[1];
    if (plVar3 == (longlong *)0x0) {
LAB_1477bf8c6:
      FUN_14335c852(0,param_3,param_4);
    }
    else {
      uVar4 = **(undefined8 **)(param_1 + 0xb48);
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_1477bf8c6;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar9 = iVar6 == iVar5;
        if (bVar9) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar9);
      FUN_14335c852(uVar4,param_3,param_4);
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
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    if (bVar8) goto LAB_1477bf925;
  }
  else {
    iVar6 = (int)local_38[1];
    do {
      if (iVar6 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar5 = (int)local_38[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(local_38 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
      plVar7 = local_38;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)local_38 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    if (plVar7 == (longlong *)0x0) goto LAB_1477bf86a;
    if (local_40 == 0) {
      bVar8 = false;
      goto LAB_1477bf86f;
    }
    FUN_14335c852(local_40,param_3,param_4);
  }
  LOCK();
  plVar3 = plVar7 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
  }
LAB_1477bf925:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477bf966 FUN_1477bf966 body=201 status=ok
// SIG undefined FUN_1477bf966(void)

undefined8 *
FUN_1477bf966(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  DWORD DVar3;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  DVar3 = GetCurrentThreadId();
  if (DVar3 != *(DWORD *)(param_1 + 0xe1c)) {
    *param_2 = 0;
    param_2[1] = 0;
LAB_1477bf9f2:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
  }
  FUN_14334905a(param_1,&local_50,param_3);
  if (local_50 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_14335aaaa(local_50,param_2,param_4);
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
        goto LAB_1477bf9f2;
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1477bfa30 FUN_1477bfa30 body=4 status=ok
// SIG undefined FUN_1477bfa30(void)

undefined4 FUN_1477bfa30(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}



// FUNCTION 1477bfa34 FUN_1477bfa34 body=8 status=ok
// SIG undefined FUN_1477bfa34(void)

undefined8 FUN_1477bfa34(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xe10);
}



// FUNCTION 1477bfa3c FUN_1477bfa3c body=8 status=ok
// SIG undefined FUN_1477bfa3c(void)

undefined8 FUN_1477bfa3c(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xe10);
}



// FUNCTION 1477bfa44 FUN_1477bfa44 body=167 status=ok
// SIG undefined FUN_1477bfa44(void)

void FUN_1477bfa44(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a56dd80;
  plVar3 = (longlong *)param_1[0x5a];
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
  plVar3 = (longlong *)param_1[0x58];
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
  param_1[0x46] = &DAT_14a176f00;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  param_1[0x46] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x47);
  return;
}



// FUNCTION 1477bfaed FUN_1477bfaed body=253 status=ok
// SIG undefined FUN_1477bfaed(void)

void FUN_1477bfaed(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_3;
  if (*(char *)(param_1 + 0x14) == '\x01') {
    pcVar1 = *(code **)(param_1 + 0xa0);
    plVar3 = *(longlong **)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xb0) == (longlong *)0x0) {
      plVar3 = (longlong *)(param_1 + 0xc0);
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2,param_2);
    pcVar1 = *(code **)(param_1 + 0xa0);
    plVar3 = *(longlong **)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xb0) == (longlong *)0x0) {
      plVar3 = (longlong *)(param_1 + 0xc0);
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2,&local_38);
  }
  pcVar1 = *(code **)(param_1 + 0x20);
  plVar3 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x30);
  }
  local_34 = local_38;
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,param_2,&local_34);
  if (*(char *)(param_1 + 0x14) == '\x01') {
    pcVar1 = *(code **)(param_1 + 0x60);
    plVar3 = (longlong *)(param_1 + 0x80);
    if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x70);
    }
    uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
    (*pcVar1)(uVar2,param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477bfbeb FUN_1477bfbeb body=794 status=ok
// SIG undefined FUN_1477bfbeb(void)

undefined8 *
FUN_1477bfbeb(undefined8 *param_1,char *param_2,undefined4 *param_3,char *param_4,
             undefined4 *param_5,longlong param_6,undefined8 param_7,undefined8 *param_8)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined1 local_80 [64];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  uVar3 = param_7;
  local_98 = &param_6;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = param_8;
  local_88 = param_7;
  cVar2 = *param_2;
  if (cVar2 == '\x01') {
    cVar2 = *param_4;
    if (cVar2 == '\x01') {
      if (param_6 != 0) {
        param_3 = (undefined4 *)(*(code *)*param_8)(param_8[1]);
        *(undefined4 *)param_1 = *param_3;
        param_3 = param_3 + 2;
        param_1[5] = 0;
        *(undefined4 *)(param_1 + 6) = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
        *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
        param_1[9] = 0;
        *(undefined4 *)(param_1 + 10) = 0;
        goto LAB_1477bfe69;
      }
    }
    else {
      if (cVar2 == '\x02') {
        *(undefined4 *)param_1 = *param_5;
        param_3 = param_5 + 2;
        param_1[5] = 0;
        *(undefined4 *)(param_1 + 6) = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
        *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
        param_1[9] = 0;
        *(undefined4 *)(param_1 + 10) = 0;
LAB_1477bfe69:
        FUN_1477ce3e2(param_1 + 1,param_3);
        goto LAB_1477bfc96;
      }
      if (cVar2 == '\x03') {
        *(undefined4 *)param_1 = *param_5;
        param_1[5] = 0;
        *(undefined4 *)(param_1 + 6) = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
        *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
        param_1[9] = 0;
        *(undefined4 *)(param_1 + 10) = 0;
        FUN_1477ce3e2(param_1 + 1,param_5 + 2);
        goto LAB_1477bfe1b;
      }
    }
  }
  else {
    if (cVar2 == '\x02') {
      *(undefined4 *)param_1 = *param_3;
      param_3 = param_3 + 2;
      param_1[5] = 0;
      *(undefined4 *)(param_1 + 6) = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
      param_1[9] = 0;
      *(undefined4 *)(param_1 + 10) = 0;
      goto LAB_1477bfe69;
    }
    if (cVar2 == '\x03') {
      *(undefined4 *)param_1 = *param_3;
      puVar1 = param_1 + 1;
      param_1[5] = 0;
      *(undefined4 *)(param_1 + 6) = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
      param_1[9] = 0;
      *(undefined4 *)(param_1 + 10) = 0;
      FUN_1477ce3e2(puVar1,param_3 + 2);
      cVar2 = *param_4;
      if (cVar2 != '\x01') {
        if (cVar2 == '\x02') {
          FUN_1477bfaed(uVar3,param_1,*param_5);
          FUN_1477bff06(puVar1,local_80,param_5 + 2);
          FUN_1477c0152(puVar1,local_80);
          local_38 = 0;
          if (local_40 != 0) {
            FUN_1400020a8();
          }
          FUN_14117d2fe(local_80);
          goto LAB_1477bfc96;
        }
        if (cVar2 != '\x03') goto LAB_1477bfc96;
        FUN_1477bfaed(uVar3,param_1,*param_5);
        FUN_1477bff06(puVar1,local_80,param_5 + 2);
        FUN_1477c0152(puVar1,local_80);
        local_38 = 0;
        if (local_40 != 0) {
          FUN_1400020a8();
        }
        FUN_14117d2fe(local_80);
      }
LAB_1477bfe1b:
      FUN_14334b256(&local_98,param_1);
      goto LAB_1477bfc96;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  *(undefined4 *)param_1 = 0x3f800000;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
LAB_1477bfc96:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477bff06 FUN_1477bff06 body=585 status=ok
// SIG undefined FUN_1477bff06(void)

undefined8 * FUN_1477bff06(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  uVar2 = ((int)param_3[1] - *(int *)((longlong)param_3 + 0x34)) +
          ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar2);
    }
    FUN_1477cebfc(param_2,uVar2);
    iVar1 = 1;
    if (3 < uVar2) {
      uVar2 = (uVar2 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) < iVar1)) {
      *(int *)(param_2 + 9) = iVar1;
      FUN_1477cedaa(param_2);
    }
  }
  local_50 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      FUN_1477cefaa(param_2,&local_58,(longlong)iStack_64 * 0x10 + *local_80,0);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  local_50 = param_3 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  if ((int)param_3[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_3;
  if (iStack_44 < (int)local_50[3]) {
    do {
      FUN_1477cefaa(param_2,&local_58,(longlong)iStack_64 * 0x10 + *local_80,0);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c0152 FUN_1477c0152 body=93 status=ok
// SIG undefined FUN_1477c0152(void)

longlong FUN_1477c0152(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_1477ce5c0(param_1);
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



// FUNCTION 1477c01af FUN_1477c01af body=300 status=ok
// SIG undefined FUN_1477c01af(void)

void FUN_1477c01af(char *param_1,undefined4 *param_2,char *param_3,undefined4 *param_4,
                  longlong param_5,undefined8 param_6,undefined8 *param_7)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = *param_1;
  uVar3 = 0x3f800000;
  if (cVar1 == '\x01') {
    cVar1 = *param_3;
    if (cVar1 == '\x01') {
      if (param_5 != 0) {
        puVar2 = (undefined4 *)(*(code *)*param_7)(0x3f800000,param_5);
        uVar3 = *puVar2;
      }
    }
    else if (cVar1 == '\x02') {
      uVar3 = *param_4;
    }
    else if ((cVar1 == '\x03') && (local_24 = *param_4, uVar3 = local_24, param_5 != 0)) {
      puVar2 = (undefined4 *)(*(code *)*param_7)(param_7[1],param_5);
      FUN_1477bfaed(param_6,&local_24,*puVar2);
      uVar3 = local_24;
    }
    goto LAB_1477c0239;
  }
  if (cVar1 == '\x02') {
    uVar3 = *param_2;
    goto LAB_1477c0239;
  }
  if (cVar1 != '\x03') goto LAB_1477c0239;
  local_24 = *param_2;
  cVar1 = *param_3;
  if (cVar1 == '\x01') {
LAB_1477c0224:
    uVar3 = local_24;
    if (param_5 == 0) goto LAB_1477c0239;
    param_4 = (undefined4 *)(*(code *)*param_7)(param_7[1],param_5);
  }
  else if (cVar1 != '\x02') {
    uVar3 = local_24;
    if (cVar1 != '\x03') goto LAB_1477c0239;
    FUN_1477bfaed(param_6,&local_24,*param_4);
    goto LAB_1477c0224;
  }
  FUN_1477bfaed(param_6,&local_24,*param_4);
  uVar3 = local_24;
LAB_1477c0239:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uVar3);
  }
  return;
}



// FUNCTION 1477c02dc FUN_1477c02dc body=235 status=ok
// SIG undefined FUN_1477c02dc(void)

undefined8 FUN_1477c02dc(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 **local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_59;
  undefined1 *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_50 = &local_59;
  local_58 = &LAB_143354676;
  local_70 = param_1;
  FUN_1446ddc76(&local_68,"Volume",1);
  uVar2 = thunk_FUN_147044b04(local_68);
  local_90 = FUN_1478b3f8a(param_4);
  uVar1 = local_70;
  if (*(longlong *)(param_2 + 8) != 0) {
    local_90 = *(longlong *)(param_2 + 8);
  }
  local_98 = param_3 + 0x198;
  local_88 = uVar2;
  local_80 = &local_58;
  FUN_1477bfbeb(local_70,param_4 + 0x948,param_4 + 0x7e8,param_3 + 0x2f8);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c03c8 FUN_1477c03c8 body=218 status=ok
// SIG undefined FUN_1477c03c8(void)

void FUN_1477c03c8(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  undefined1 **local_78;
  undefined8 local_68;
  undefined1 local_59;
  undefined1 *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = &local_59;
  local_58 = &LAB_14335467c;
  FUN_1446ddc76(&local_68,"Volume",1);
  uVar1 = thunk_FUN_147044b04(local_68);
  local_88 = FUN_1478b3f8a(param_3);
  if (*(longlong *)(param_1 + 8) != 0) {
    local_88 = *(longlong *)(param_1 + 8);
  }
  local_80 = uVar1;
  local_78 = &local_58;
  FUN_1477c01af(param_3 + 0x948,param_3 + 0x7e8,param_2 + 0x2f8,param_2 + 0x198);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c04a3 FUN_1477c04a3 body=239 status=ok
// SIG undefined FUN_1477c04a3(void)

undefined8 FUN_1477c04a3(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 **local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_59;
  undefined1 *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_50 = &local_59;
  local_58 = &LAB_143354682;
  local_70 = param_1;
  FUN_1446ddc76(&local_68,"Pitch",1);
  uVar2 = thunk_FUN_147044b04(local_68);
  local_90 = FUN_1478b3f8a(param_4);
  uVar1 = local_70;
  if (*(longlong *)(param_2 + 8) != 0) {
    local_90 = *(longlong *)(param_2 + 8);
  }
  local_98 = param_3 + 0x1f0;
  local_88 = uVar2;
  local_80 = &local_58;
  FUN_1477bfbeb(local_70,param_4 + 0x949,param_4 + 0x840,param_3 + 0x2f9);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c0593 FUN_1477c0593 body=218 status=ok
// SIG undefined FUN_1477c0593(void)

void FUN_1477c0593(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  undefined1 **local_78;
  undefined8 local_68;
  undefined1 local_59;
  undefined1 *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = &local_59;
  local_58 = &LAB_14335468a;
  FUN_1446ddc76(&local_68,"Pitch",1);
  uVar1 = thunk_FUN_147044b04(local_68);
  local_88 = FUN_1478b3f8a(param_3);
  if (*(longlong *)(param_1 + 8) != 0) {
    local_88 = *(longlong *)(param_1 + 8);
  }
  local_80 = uVar1;
  local_78 = &local_58;
  FUN_1477c01af(param_3 + 0x949,param_3 + 0x840,param_2 + 0x2f9,param_2 + 0x1f0);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c066e FUN_1477c066e body=239 status=ok
// SIG undefined FUN_1477c066e(void)

undefined8 FUN_1477c066e(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 **local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_59;
  undefined1 *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_50 = &local_59;
  local_58 = &LAB_143354692;
  local_70 = param_1;
  FUN_1446ddc76(&local_68,"HPFCutoffFrequency",1);
  uVar2 = thunk_FUN_147044b04(local_68);
  local_90 = FUN_1478b3f8a(param_4);
  uVar1 = local_70;
  if (*(longlong *)(param_2 + 8) != 0) {
    local_90 = *(longlong *)(param_2 + 8);
  }
  local_98 = param_3 + 0x248;
  local_88 = uVar2;
  local_80 = &local_58;
  FUN_1477bfbeb(local_70,param_4 + 0x94a,param_4 + 0x898,param_3 + 0x2fa);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c075e FUN_1477c075e body=218 status=ok
// SIG undefined FUN_1477c075e(void)

void FUN_1477c075e(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  undefined1 **local_78;
  undefined8 local_68;
  undefined1 local_59;
  undefined1 *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = &local_59;
  local_58 = &LAB_14335469a;
  FUN_1446ddc76(&local_68,"HPFCutoffFrequency",1);
  uVar1 = thunk_FUN_147044b04(local_68);
  local_88 = FUN_1478b3f8a(param_3);
  if (*(longlong *)(param_1 + 8) != 0) {
    local_88 = *(longlong *)(param_1 + 8);
  }
  local_80 = uVar1;
  local_78 = &local_58;
  FUN_1477c01af(param_3 + 0x94a,param_3 + 0x898,param_2 + 0x2fa,param_2 + 0x248);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c0839 FUN_1477c0839 body=239 status=ok
// SIG undefined FUN_1477c0839(void)

undefined8 FUN_1477c0839(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 **local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_59;
  undefined1 *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_50 = &local_59;
  local_58 = &LAB_1433546a2;
  local_70 = param_1;
  FUN_1446ddc76(&local_68,"LPFCutoffFrequency",1);
  uVar2 = thunk_FUN_147044b04(local_68);
  local_90 = FUN_1478b3f8a(param_4);
  uVar1 = local_70;
  if (*(longlong *)(param_2 + 8) != 0) {
    local_90 = *(longlong *)(param_2 + 8);
  }
  local_98 = param_3 + 0x2a0;
  local_88 = uVar2;
  local_80 = &local_58;
  FUN_1477bfbeb(local_70,param_4 + 0x94b,param_4 + 0x8f0,param_3 + 0x2fb);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c0929 FUN_1477c0929 body=218 status=ok
// SIG undefined FUN_1477c0929(void)

void FUN_1477c0929(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  undefined1 **local_78;
  undefined8 local_68;
  undefined1 local_59;
  undefined1 *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = &local_59;
  local_58 = &LAB_1433546aa;
  FUN_1446ddc76(&local_68,"LPFCutoffFrequency",1);
  uVar1 = thunk_FUN_147044b04(local_68);
  local_88 = FUN_1478b3f8a(param_3);
  if (*(longlong *)(param_1 + 8) != 0) {
    local_88 = *(longlong *)(param_1 + 8);
  }
  local_80 = uVar1;
  local_78 = &local_58;
  FUN_1477c01af(param_3 + 0x94b,param_3 + 0x8f0,param_2 + 0x2fb,param_2 + 0x2a0);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c0a04 FUN_1477c0a04 body=425 status=ok
// SIG undefined FUN_1477c0a04(void)

undefined4 *
FUN_1477c0a04(undefined4 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88 [2];
  undefined1 local_80 [64];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1458d7850();
  if (param_4 != 0) {
    FUN_1477c02dc(local_88,param_2,param_3,param_4);
    *param_1 = local_88[0];
    FUN_1477c0152(param_1 + 2,local_80);
    local_38 = 0;
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    FUN_14117d2fe(local_80);
    FUN_1477c04a3(local_88,param_2,param_3,param_4);
    param_1[0x16] = local_88[0];
    FUN_1477c0152(param_1 + 0x18,local_80);
    local_38 = 0;
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    FUN_14117d2fe(local_80);
    FUN_1477c066e(local_88,param_2,param_3,param_4);
    param_1[0x2c] = local_88[0];
    FUN_1477c0152(param_1 + 0x2e,local_80);
    local_38 = 0;
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    FUN_14117d2fe(local_80);
    FUN_1477c0839(local_88,param_2,param_3,param_4);
    param_1[0x42] = local_88[0];
    FUN_1477c0152(param_1 + 0x44,local_80);
    local_38 = 0;
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    FUN_14117d2fe(local_80);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c0bae FUN_1477c0bae body=425 status=ok
// SIG undefined FUN_1477c0bae(void)

undefined4 *
FUN_1477c0bae(undefined4 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88 [2];
  undefined1 local_80 [64];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1458d7830();
  if (param_4 != 0) {
    FUN_1477c02dc(local_88,param_2,param_3,param_4);
    *param_1 = local_88[0];
    FUN_1477c0152(param_1 + 2,local_80);
    local_38 = 0;
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    FUN_14117d2fe(local_80);
    FUN_1477c04a3(local_88,param_2,param_3,param_4);
    param_1[0x16] = local_88[0];
    FUN_1477c0152(param_1 + 0x18,local_80);
    local_38 = 0;
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    FUN_14117d2fe(local_80);
    FUN_1477c066e(local_88,param_2,param_3,param_4);
    param_1[0x2c] = local_88[0];
    FUN_1477c0152(param_1 + 0x2e,local_80);
    local_38 = 0;
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    FUN_14117d2fe(local_80);
    FUN_1477c0839(local_88,param_2,param_3,param_4);
    param_1[0x42] = local_88[0];
    FUN_1477c0152(param_1 + 0x44,local_80);
    local_38 = 0;
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    FUN_14117d2fe(local_80);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c0d58 FUN_1477c0d58 body=117 status=ok
// SIG undefined FUN_1477c0d58(void)

void FUN_1477c0d58(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_LAB_14a56ffe0;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[4] = 0x469c40003f000000;
  param_1[5] = 0x469c400041a00000;
  param_1[6] = 0x41a00000;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000000;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xc0 | 0x10;
  *(byte *)((longlong)param_1 + 0x94) = *(byte *)((longlong)param_1 + 0x94) & 0xfe;
  return;
}



// FUNCTION 1477c0dce FUN_1477c0dce body=253 status=ok
// SIG undefined FUN_1477c0dce(void)

void FUN_1477c0dce(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a56e090;
  param_1[0x13] = &PTR_FUN_14a56e140;
  FUN_14334b30a();
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_1477cf484(param_1 + 0x4b);
  FUN_1477cf42a(param_1[0x49],*(undefined4 *)(param_1 + 0x4a));
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x1c];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x1a];
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
  plVar3 = (longlong *)param_1[0x17];
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
  return;
}



// FUNCTION 1477c0eca FUN_1477c0eca body=233 status=ok
// SIG undefined FUN_1477c0eca(void)

undefined8 * FUN_1477c0eca(undefined8 *param_1)

{
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xffffffff;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0x42c8000041200000;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_1458d7850(param_1 + 0x17);
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined1 *)(param_1 + 0x47) = 0x11;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0x1003f800000;
  *(undefined1 *)((longlong)param_1 + 0x244) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0xffffffff;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0xffffffff;
  return param_1;
}



// FUNCTION 1477c0fb4 FUN_1477c0fb4 body=159 status=ok
// SIG undefined FUN_1477c0fb4(void)

ulonglong FUN_1477c0fb4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  longlong *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = *(int *)(param_1 + 0x84);
  FUN_14795f152(*(undefined8 *)(param_1 + 0xa0),local_40);
  if ((local_28 < iVar3) || ((*(byte *)(*(longlong *)(param_1 + 8) + 0x598) & 2) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),
                     *(int *)(*(longlong *)(param_1 + 0x10) + 0xd0) == 1);
  }
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c1054 FUN_1477c1054 body=135 status=ok
// SIG undefined FUN_1477c1054(void)

undefined4 * FUN_1477c1054(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_1477c0152(param_1 + 2,param_2 + 2);
  param_1[0x16] = param_2[0x16];
  FUN_1477c0152(param_1 + 0x18,param_2 + 0x18);
  param_1[0x2c] = param_2[0x2c];
  FUN_1477c0152(param_1 + 0x2e,param_2 + 0x2e);
  param_1[0x42] = param_2[0x42];
  FUN_1477c0152(param_1 + 0x44,param_2 + 0x44);
  return param_1;
}



// FUNCTION 1477c10dc FUN_1477c10dc body=141 status=ok
// SIG undefined FUN_1477c10dc(void)

undefined4 * FUN_1477c10dc(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  param_1[2] = uVar7;
  param_1[3] = uVar8;
  uVar3 = *(undefined8 *)(param_2 + 4);
  lVar4 = *(longlong *)(param_2 + 6);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 6);
  *(undefined8 *)(param_1 + 4) = uVar3;
  *(longlong *)(param_1 + 6) = lVar4;
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
  uVar3 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x25) = *(undefined8 *)((longlong)param_2 + 0x25);
  *(undefined8 *)(param_1 + 8) = uVar3;
  FUN_1477c97c2(param_1 + 0xc,param_2 + 0xc);
  FUN_1477c97c2(param_1 + 0x10,param_2 + 0x10);
  param_1[0x14] = param_2[0x14];
  return param_1;
}



// FUNCTION 1477c116a FUN_1477c116a body=294 status=ok
// SIG undefined FUN_1477c116a(void)

void FUN_1477c116a(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = 0;
  bVar2 = true;
  do {
    bVar5 = bVar2;
    lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x30 + lVar7 * 0x10);
    if (lVar4 != 0) {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28 + lVar7 * 0x10);
      lVar4 = lVar4 * 0xb8;
      do {
        lVar3 = *(longlong *)(lVar6 + 8);
        local_50 = param_1;
        if (lVar3 != 0) {
          lVar1 = *(longlong *)(lVar3 + 0x3f8);
          if (lVar1 == 0) {
            local_58 = *(int *)(lVar3 + 0x36c);
          }
          else {
            local_58 = *(byte *)(lVar1 + 0x30) + 1;
            lVar3 = lVar1;
          }
          local_68 = *(undefined4 *)(lVar3 + 0xc);
          local_60 = param_3;
          FUN_14334c54c(&local_50,param_2,lVar6,lVar7);
        }
        lVar3 = *(longlong *)(lVar6 + 0x10);
        if (lVar3 != 0) {
          local_68 = *(undefined4 *)(lVar3 + 0xc);
          local_58 = *(byte *)(lVar3 + 0x30) + 1;
          local_60 = param_3;
          FUN_14334c54c(&local_50,param_2,lVar6,lVar7);
        }
        lVar6 = lVar6 + 0xb8;
        lVar4 = lVar4 + -0xb8;
      } while (lVar4 != 0);
    }
    lVar7 = 1;
    bVar2 = false;
  } while (bVar5);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477c1292 FUN_1477c1292 body=160 status=ok
// SIG undefined FUN_1477c1292(void)

ulonglong FUN_1477c1292(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  longlong *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = *(int *)(param_1 + 0x84);
  FUN_14795f152(*(undefined8 *)(param_1 + 0xa0),local_40);
  if ((local_28 < iVar3) || ((*(byte *)(*(longlong *)(param_1 + 8) + 0x598) & 2) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),
                     *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xd8) != 0);
  }
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c1334 FUN_1477c1334 body=254 status=ok
// SIG undefined FUN_1477c1334(void)

void FUN_1477c1334(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x288);
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
  FUN_1477c9968(param_1 + 0x218);
  FUN_145821914(param_1 + 0xb8);
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  lVar4 = 0x38;
  do {
    if (*(longlong *)(param_1 + lVar4) != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != 0x18);
  FUN_1477c99d7(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
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
                    /* WARNING: Could not recover jumptable at 0x0001477c1426. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477c1432 FUN_1477c1432 body=161 status=ok
// SIG undefined FUN_1477c1432(void)

void FUN_1477c1432(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [360];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar2 = plVar1[0xc];
  if ((*(byte *)(lVar2 + 0x19c) & 0x40) != 0) {
    if (*plVar1 == 0) {
      FUN_1477d458e(*(undefined8 *)(param_1 + 0xc0),lVar2 + 0x7e8);
    }
    else {
      FUN_1477c0bae(local_188,plVar1,*plVar1,lVar2);
      FUN_1477d458e(*(undefined8 *)(param_1 + 0xc0),local_188);
      FUN_145821914(local_188);
    }
  }
  *(byte *)(lVar2 + 0x19c) = *(byte *)(lVar2 + 0x19c) & 0xbf;
  if ((local_20 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c14d4 FUN_1477c14d4 body=167 status=ok
// SIG undefined FUN_1477c14d4(void)

void FUN_1477c14d4(longlong param_1)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x60);
  fVar2 = (float)FUN_14795bfec();
  *(float *)(param_1 + 0x38) = fVar2;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xcd) & 0x20) == 0) {
    fVar2 = fVar2 * *(float *)(*(longlong *)(param_1 + 8) + 0x174);
    *(float *)(param_1 + 0x38) = fVar2;
  }
  fVar2 = (float)FUN_14795bff6(*(longlong *)(param_1 + 8),fVar2);
  *(float *)(param_1 + 0x38) = fVar2;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    fVar2 = fVar2 * ((float)*(int *)(*(longlong *)(param_1 + 0xa8) + 0x44) /
                    (float)*(int *)(*(longlong *)(param_1 + 8) + 0x74));
    *(float *)(param_1 + 0x38) = fVar2;
    FUN_1477d4414(*(undefined8 *)(param_1 + 0xc0),fVar2);
  }
  uVar3 = FUN_1477c0593(*(undefined8 **)(param_1 + 0x10),**(undefined8 **)(param_1 + 0x10),uVar1);
  FUN_1477d450a(*(undefined8 *)(param_1 + 0xc0),uVar3);
  return;
}



// FUNCTION 1477c157c FUN_1477c157c body=254 status=ok
// SIG undefined FUN_1477c157c(void)

void FUN_1477c157c(longlong param_1)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  uVar5 = FUN_14795c3b8(*(undefined8 *)(param_1 + 0x10));
  FUN_1477d4460(uVar2,uVar5);
  cVar4 = FUN_147963546(*(undefined8 *)(param_1 + 8));
  fVar8 = 0.0;
  if (cVar4 == '\0') {
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60) + 0x19a) & 8) == 0) {
      fVar8 = *(float *)(*(longlong *)(param_1 + 8) + 0x170);
    }
    else {
      fVar8 = 1.0;
    }
    fVar1 = *(float *)(*(longlong *)(param_1 + 8) + 0x498);
    fVar6 = (float)FUN_14795b558();
    fVar7 = (float)FUN_14795c3ca(*(undefined8 *)(param_1 + 0x10));
    fVar7 = fVar7 * fVar6 * fVar8 * fVar1;
    if (*(char *)(param_1 + 0xf0) == '\x01') {
      fVar8 = (float)FUN_1477c2860(param_1);
      fVar7 = fVar7 * fVar8;
    }
    fVar8 = (float)FUN_1433fc358(param_1,fVar7);
    if (4.0 <= fVar8) {
      fVar8 = 4.0;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_1477c03c8(puVar3,*puVar3,puVar3[0xc]);
    FUN_1477d44de(*(undefined8 *)(param_1 + 0xc0),uVar5);
  }
  FUN_1477d443a(*(undefined8 *)(param_1 + 0xc0),fVar8);
  return;
}



// FUNCTION 1477c167a FUN_1477c167a body=207 status=ok
// SIG undefined FUN_1477c167a(void)

void FUN_1477c167a(longlong param_1)

{
  uint uVar1;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [264];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_148 = *(undefined4 *)(param_1 + 400);
  uStack_144 = *(undefined4 *)(param_1 + 0x194);
  uStack_140 = *(undefined4 *)(param_1 + 0x198);
  uStack_13c = *(undefined4 *)(param_1 + 0x19c);
  local_138 = *(undefined4 *)(param_1 + 0x1a0);
  uStack_134 = *(undefined4 *)(param_1 + 0x1a4);
  uStack_130 = *(undefined4 *)(param_1 + 0x1a8);
  uStack_12c = *(undefined4 *)(param_1 + 0x1ac);
  FUN_14795baec(local_148,local_128);
  memcpy((void *)(param_1 + 0x120),local_128,0xf8);
  *(undefined4 *)(param_1 + 0x1c0) = local_138;
  *(undefined4 *)(param_1 + 0x1c4) = uStack_134;
  *(undefined4 *)(param_1 + 0x1c8) = uStack_130;
  *(undefined4 *)(param_1 + 0x1cc) = uStack_12c;
  *(undefined4 *)(param_1 + 0x1b0) = local_148;
  *(undefined4 *)(param_1 + 0x1b4) = uStack_144;
  *(undefined4 *)(param_1 + 0x1b8) = uStack_140;
  *(undefined4 *)(param_1 + 0x1bc) = uStack_13c;
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0xcc);
  if ((uVar1 >> 9 & 1) != 0 && DAT_14c7612fc != 0 || (uVar1 >> 0x13 & 1) != 0) {
    FUN_1477d45ee(*(undefined8 *)(param_1 + 0xc0),(void *)(param_1 + 0x120));
  }
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c174a FUN_1477c174a body=1826 status=ok
// SIG undefined FUN_1477c174a(void)

void FUN_1477c174a(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 uVar13;
  float fVar14;
  undefined1 auStack_198 [40];
  undefined8 local_170;
  longlong *local_168;
  longlong *local_160;
  undefined8 local_158;
  undefined1 *local_150;
  uint local_148;
  int iStack_144;
  undefined4 local_140;
  undefined4 local_13c;
  longlong local_138;
  longlong *local_130;
  undefined8 local_128;
  longlong local_120;
  longlong local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined1 *local_100;
  uint local_f8;
  int iStack_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e8 [2];
  undefined1 local_d8 [24];
  int local_c0;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  longlong *plStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_14795b6b6();
  if ((*(float *)(param_1 + 0x2c) != *(float *)(param_1 + 0x24)) ||
     (NAN(*(float *)(param_1 + 0x2c)) || NAN(*(float *)(param_1 + 0x24)))) {
    FUN_1477d4486(*(undefined8 *)(param_1 + 0xc0));
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x24);
  }
  if ((*(float *)(param_1 + 0x30) != *(float *)(param_1 + 0x28)) ||
     (NAN(*(float *)(param_1 + 0x30)) || NAN(*(float *)(param_1 + 0x28)))) {
    FUN_1477d44b2(*(undefined8 *)(param_1 + 0xc0));
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x28);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  uVar3 = *puVar2;
  uVar5 = puVar2[0xc];
  uVar13 = FUN_1477c075e(puVar2,uVar3,uVar5);
  FUN_1477d4536(*(undefined8 *)(param_1 + 0xc0),uVar13);
  uVar13 = FUN_1477c0929(*(undefined8 *)(param_1 + 0x10),uVar3,uVar5);
  FUN_1477d4562(*(undefined8 *)(param_1 + 0xc0),uVar13);
  lVar11 = *(longlong *)(param_1 + 0x10);
  if ((*(byte *)(lVar11 + 0xcd) & 0x80) != 0) {
    if ((((*(int *)(param_1 + 0x84) - 1U < 2) &&
         ((*(byte *)(*(longlong *)(param_1 + 8) + 0x598) & 8) != 0)) &&
        (*(longlong *)(lVar11 + 0xe8) != 0)) &&
       (plVar7 = *(longlong **)(*(longlong *)(param_1 + 8) + 0xf0), plVar7 != (longlong *)0x0)) {
      uVar3 = *(undefined8 *)(param_1 + 0xa0);
      uVar5 = (**(code **)(*plVar7 + 0x40))();
      FUN_1433438ce(uVar3,&local_98,uVar5);
      if (plStack_90 != (longlong *)0x0) {
        iVar8 = (int)plStack_90[1];
        do {
          if (iVar8 == 0) {
            plVar7 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar10 = (int)plStack_90[1];
          bVar12 = iVar8 == iVar10;
          if (bVar12) {
            *(int *)(plStack_90 + 1) = iVar8 + 1;
            iVar10 = iVar8;
          }
          iVar8 = iVar10;
          UNLOCK();
          plVar7 = plStack_90;
        } while (!bVar12);
        LOCK();
        piVar1 = (int *)((longlong)plStack_90 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plStack_90 + 0x10))();
        }
        if (plVar7 != (longlong *)0x0) {
          if (local_98 != 0) {
            uVar3 = *(undefined8 *)(param_1 + 0xc0);
            uVar13 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x15c);
            local_118 = local_98;
            LOCK();
            *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
            UNLOCK();
            local_110 = plVar7;
            FUN_1477d464a(uVar3,&local_118,uVar13,0);
          }
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
      }
    }
    uVar3 = *(undefined8 *)(param_1 + 0xc0);
    uVar13 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x15c);
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0xb48);
    local_128 = *(undefined8 *)(lVar11 + 0x20);
    local_120 = *(longlong *)(lVar11 + 0x28);
    if (local_120 != 0) {
      LOCK();
      *(int *)(local_120 + 0xc) = *(int *)(local_120 + 0xc) + 1;
      UNLOCK();
    }
    FUN_1477d464a(uVar3,&local_128,uVar13,0);
    lVar11 = *(longlong *)(param_1 + 0x10);
  }
  iVar8 = 0;
  iVar10 = 0;
  if (*(longlong *)(lVar11 + 0x10) != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98);
    iVar8 = (int)local_98;
    iVar10 = local_98._4_4_;
  }
  bVar12 = true;
  if (iVar8 == *(int *)(param_1 + 0xe8)) {
    bVar12 = iVar10 != *(int *)(param_1 + 0xec);
  }
  lVar11 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(lVar11 + 0x10) == 0) {
    if (((*(longlong *)(param_1 + 0xd8) == 0) || (*(longlong *)(param_1 + 0xe0) == 0)) ||
       (*(int *)(*(longlong *)(param_1 + 0xe0) + 8) < 1)) goto LAB_1477c1951;
LAB_1477c1973:
    uVar6 = *(uint *)(lVar11 + 0xcc);
  }
  else {
    if (((*(longlong *)(param_1 + 0xd8) == 0) || (*(longlong *)(param_1 + 0xe0) == 0)) ||
       (*(int *)(*(longlong *)(param_1 + 0xe0) + 8) < 1)) goto LAB_1477c1973;
LAB_1477c1951:
    uVar6 = *(uint *)(lVar11 + 0xcc);
    if (!(bool)((uVar6 >> 1 & 1) != *(uint *)(param_1 + 0xf8) | bVar12)) goto LAB_1477c1a91;
  }
  if (*(longlong *)(lVar11 + 0x10) == 0) {
    if ((uVar6 >> 0x15 & 1) == 0) {
      plVar7 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0xb48);
      lVar11 = plVar7[2];
      if (lVar11 == 0) {
        lVar11 = *plVar7;
        plVar7 = (longlong *)plVar7[1];
      }
      else {
        plVar7 = (longlong *)plVar7[3];
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        goto LAB_1477c19cd;
      }
    }
    else {
      lVar11 = 0;
    }
    plVar7 = (longlong *)0x0;
  }
  else {
    FUN_1433438ce(*(undefined8 *)(param_1 + 0xa0),&local_98);
    plVar7 = plStack_90;
    lVar11 = local_98;
  }
LAB_1477c19cd:
  fVar14 = (float)(*(uint *)(*(longlong *)(param_1 + 0x10) + 0xcc) >> 1 & 1);
  uVar3 = *(undefined8 *)(param_1 + 0xc0);
  local_138 = lVar11;
  local_130 = plVar7;
  if (plVar7 == (longlong *)0x0) {
    FUN_1477d464a(uVar3,&local_138,fVar14,0);
    *(uint *)(param_1 + 0xf8) = *(uint *)(*(longlong *)(param_1 + 0x10) + 0xcc) >> 1 & 1;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    FUN_1477d464a(uVar3,&local_138,fVar14,0);
    *(uint *)(param_1 + 0xf8) = *(uint *)(*(longlong *)(param_1 + 0x10) + 0xcc) >> 1 & 1;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0xe0);
  *(longlong *)(param_1 + 0xd8) = lVar11;
  *(longlong **)(param_1 + 0xe0) = plVar7;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  *(ulonglong *)(param_1 + 0xe8) = CONCAT44(iVar10,iVar8);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
LAB_1477c1a91:
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_1477cfc76(&local_98,local_e8,param_1 + 0xd8);
  lVar11 = *(longlong *)(param_1 + 0x10);
  if ((longlong)*(int *)(lVar11 + 0x170) != 0) {
    lVar9 = *(longlong *)(lVar11 + 0x168);
    lVar11 = (longlong)*(int *)(lVar11 + 0x170) * 0xb0;
    do {
      FUN_1477c2d06(param_1,lVar9,0,&local_98);
      lVar9 = lVar9 + 0xb0;
      lVar11 = lVar11 + -0xb0;
    } while (lVar11 != 0);
    lVar11 = *(longlong *)(param_1 + 0x10);
  }
  if ((longlong)*(int *)(lVar11 + 0x20) != 0) {
    lVar9 = *(longlong *)(lVar11 + 0x18);
    lVar11 = (longlong)*(int *)(lVar11 + 0x20) * 0xb8;
    do {
      FUN_1477c2d06(param_1,lVar9,*(char *)(lVar9 + 0xb0) == '\x01',&local_98);
      lVar9 = lVar9 + 0xb8;
      lVar11 = lVar11 + -0xb8;
    } while (lVar11 != 0);
  }
  FUN_1477c2ee6(param_1 + 600,local_e8,&local_98);
  FUN_1477c3126(param_1 + 600,&local_98);
  local_108 = 0x100000000;
  local_f8 = 0xffffffff;
  iStack_f4 = 0;
  local_f0 = 0;
  iVar8 = 0;
  local_100 = local_d8;
  if (local_c0 != 0) {
    FUN_1449c0562(&local_108);
    iVar8 = local_c0;
  }
  local_148 = local_f8;
  iStack_144 = iStack_f4;
  local_140 = local_f0;
  local_13c = local_ec;
  local_158 = local_108;
  local_150 = local_100;
  local_160 = local_e8;
  if ((iStack_f4 != iVar8) || (local_100 != local_d8)) {
    do {
      local_170 = *(undefined8 *)(*local_160 + (longlong)iStack_144 * 0x18);
      plVar7 = *(longlong **)(*local_160 + 8 + (longlong)iStack_144 * 0x18);
      if (plVar7 == (longlong *)0x0) {
        local_168 = (longlong *)0x0;
        FUN_1477d4876(*(undefined8 *)(param_1 + 0xc0),&local_170);
      }
      else {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        uVar3 = *(undefined8 *)(param_1 + 0xc0);
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        local_168 = plVar7;
        FUN_1477d4876(uVar3,&local_170);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      local_148 = local_148 & ~local_158._4_4_;
      FUN_1449c0562(&local_158);
    } while (local_160 != local_e8 || (local_150 != local_d8 || iStack_144 != iVar8));
  }
  uVar6 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0xcc);
  FUN_1477d4978(*(undefined8 *)(param_1 + 0xc0),uVar6 & 0xffffff01,(uVar6 & 2) >> 1,(uVar6 & 4) >> 2
               );
  FUN_1477d45a2(*(undefined8 *)(param_1 + 0xc0),*(longlong *)(param_1 + 0x10) + 0x70,
                *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x80));
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_1477cf484(local_e8);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1477cf484(&local_98);
  if ((local_40 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477c1e6e FUN_1477c1e6e body=879 status=ok
// SIG undefined FUN_1477c1e6e(void)

void FUN_1477c1e6e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  int local_a8;
  undefined4 local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1477c116a(param_1,0,1);
  uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x60);
  cVar5 = FUN_1478b425e(uVar6);
  if (((cVar5 != '\0') || ((*(uint *)(param_1 + 0x2ac) & 0x20) != 0)) ||
     (*(int *)(param_1 + 0x250) != 0)) {
    if (cVar5 != '\0') {
      puVar7 = (undefined8 *)FUN_1478b4266(uVar6);
      local_b0 = 0;
      iVar1 = *(int *)(puVar7 + 1);
      uVar3 = *puVar7;
      local_a8 = iVar1;
      if (iVar1 == 0) {
        local_a4 = 0;
      }
      else {
        FUN_1477d0614(&local_b0,iVar1,0);
        FUN_1477d0687(local_b0,uVar3,iVar1);
        lVar2 = local_b0;
        lVar8 = (longlong)local_a8;
        if (lVar8 != 0) {
          lVar9 = 0;
          do {
            lVar4 = *(longlong *)(lVar2 + 0x10 + lVar9);
            if (lVar4 != 0) {
              FUN_1477d49a6(*(undefined8 *)(param_1 + 0xc0),*(undefined1 *)(lVar2 + lVar9),
                            *(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar2 + 0x20 + lVar9));
              *(byte *)(param_1 + 0x2ac) = *(byte *)(param_1 + 0x2ac) | 0x20;
            }
            lVar4 = *(longlong *)(lVar2 + 0x18 + lVar9);
            if (lVar4 != 0) {
              FUN_1477d49a6(*(undefined8 *)(param_1 + 0xc0),*(undefined1 *)(lVar2 + lVar9),
                            *(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar2 + 0x20 + lVar9));
              *(byte *)(param_1 + 0x2ac) = *(byte *)(param_1 + 0x2ac) | 0x20;
            }
            lVar9 = lVar9 + 0xc0;
          } while (lVar8 * 0xc0 != lVar9);
        }
      }
      FUN_1478b426e(uVar6);
      FUN_1477d0770(local_b0,local_a8);
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
    }
    iVar1 = *(int *)(param_1 + 0x250);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x248);
      lVar8 = 0;
      do {
        cVar5 = *(char *)(lVar2 + 8 + lVar8);
        if (cVar5 == '\x02') {
          fVar12 = *(float *)(lVar2 + lVar8);
LAB_1477c1f62:
          if (1.0 <= fVar12) {
            fVar12 = 1.0;
          }
          if (fVar12 <= 0.0) {
            fVar12 = 0.0;
          }
        }
        else {
          dVar10 = (double)*(float *)(lVar2 + 0x14 + lVar8);
          dVar11 = (double)*(float *)(lVar2 + 0x18 + lVar8) - dVar10;
          if (dVar11 <= 1.0) {
            dVar11 = 1.0;
          }
          dVar11 = ((double)*(float *)(*(longlong *)(param_1 + 0x10) + 0x14c) - dVar10) /
                   (double)(float)dVar11;
          if (1.0 <= dVar11) {
            dVar11 = 1.0;
          }
          if (dVar11 <= 0.0) {
            dVar11 = 0.0;
          }
          if (cVar5 != '\0') {
            uVar6 = FUN_1401e2d36(lVar2 + 0x20 + lVar8);
            fVar12 = (float)FUN_1448c9f94(uVar6,(float)dVar11,0);
            goto LAB_1477c1f62;
          }
          dVar10 = (double)*(float *)(lVar2 + 0xc + lVar8);
          dVar10 = ((double)*(float *)(lVar2 + 0x10 + lVar8) - dVar10) * (double)(float)dVar11 +
                   dVar10;
          if (1.0 <= dVar10) {
            dVar10 = 1.0;
          }
          if (dVar10 <= 0.0) {
            dVar10 = 0.0;
          }
          fVar12 = (float)dVar10;
        }
        if ((1e-08 < ABS(fVar12 - *(float *)(lVar2 + lVar8))) ||
           (*(uint *)(param_1 + 0xf4) != (*(uint *)(*(longlong *)(param_1 + 0x10) + 0xcc) & 1))) {
          *(float *)(lVar2 + lVar8) = fVar12;
          *(undefined1 *)(lVar2 + 0xa8 + lVar8) = 0;
          FUN_1477d49a6(*(undefined8 *)(param_1 + 0xc0),*(undefined1 *)(lVar2 + 9 + lVar8),
                        *(undefined4 *)(lVar2 + 4 + lVar8));
          *(uint *)(param_1 + 0xf4) = *(uint *)(*(longlong *)(param_1 + 0x10) + 0xcc) & 1;
        }
        lVar8 = lVar8 + 0xb0;
      } while ((longlong)iVar1 * 0xb0 - lVar8 != 0);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477c21de FUN_1477c21de body=186 status=ok
// SIG undefined FUN_1477c21de(void)

void FUN_1477c21de(longlong param_1)

{
  PSRWLOCK SRWLock;
  char cVar1;
  
  FUN_14795b68a();
  SRWLock = (PSRWLOCK)(param_1 + 0x110);
  AcquireSRWLockExclusive(SRWLock);
  cVar1 = FUN_1477c31a0(param_1,*(undefined4 *)(param_1 + 0x84),param_1 + 0x100);
  ReleaseSRWLockExclusive(SRWLock);
  if (cVar1 != '\0') {
    AcquireSRWLockShared(SRWLock);
    FUN_1477d45ba(*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0x84),param_1 + 0x100,
                  (*(uint *)(param_1 + 0x2ac) & 2) >> 1,
                  (byte)((uint)*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xcc) >> 0x10) & 1);
    ReleaseSRWLockShared(SRWLock);
  }
  *(uint *)(param_1 + 0x2ac) =
       *(uint *)(param_1 + 0x2ac) & 0xffffffbf | (uint)(DAT_14c7612fc != 0) << 6;
  return;
}



// FUNCTION 1477c2298 FUN_1477c2298 body=95 status=ok
// SIG undefined FUN_1477c2298(void)

undefined8 * FUN_1477c2298(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145aa5488(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1477cf956(param_1,iVar1);
      FUN_1477cf9c9(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1477c22f8 FUN_1477c22f8 body=66 status=ok
// SIG undefined FUN_1477c22f8(void)

ulonglong FUN_1477c22f8(longlong param_1)

{
  uint uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
  if (*(longlong **)(param_1 + 0x70) == (longlong *)0x0) {
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 8))();
    uVar2 = (ulonglong)uVar1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
  return uVar2 & 0xffffffff;
}



// FUNCTION 1477c233a FUN_1477c233a body=823 status=ok
// SIG undefined FUN_1477c233a(void)

/* WARNING: Removing unreachable block (ram,0x0001477c265f) */
/* WARNING: Removing unreachable block (ram,0x0001477c266a) */
/* WARNING: Removing unreachable block (ram,0x0001477c267d) */

undefined8 FUN_1477c233a(longlong param_1,longlong *param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  byte bVar9;
  BOOL BVar10;
  undefined8 uVar11;
  uint uVar12;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar13;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  undefined1 uStack_47;
  byte bStack_46;
  undefined1 uStack_45;
  undefined4 uStack_44;
  undefined1 uStack_40;
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar4 = *(int *)(param_1 + 0x84);
  uVar12 = iVar4 * 0x12c0;
  lVar13 = (longlong)param_3 * 0x10;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + lVar13);
  *(undefined4 *)(lVar6 + 8) = 0;
  if (*(int *)(lVar6 + 0xc) < 0) {
    FUN_1470345fa(lVar6,0);
  }
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + lVar13);
  iVar5 = *(int *)(lVar6 + 8);
  *(uint *)(lVar6 + 8) = iVar5 + uVar12;
  if ((uint)(*(int *)(lVar6 + 0xc) - iVar5) < uVar12) {
    FUN_145ca0cd4();
  }
  bVar9 = (byte)*(uint *)(param_1 + 0x118);
  if ((*(uint *)(param_1 + 0x118) & 0x20) == 0) {
    uVar12 = *(uint *)(param_1 + 0x88);
    if ((uVar12 & 0xfffffffe) != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
    }
    if (param_2 != (longlong *)0x0) {
      cVar8 = (**(code **)(*param_2 + 0x68))(param_2);
      if (cVar8 != '\0') {
        memset((void *)**(undefined8 **)(*(longlong *)(param_1 + 0x28) + lVar13),0,
               (longlong)iVar4 * 0x4b00);
        lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 200);
        BVar10 = TryEnterCriticalSection(lpCriticalSection);
        if (BVar10 == 0) {
          *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 0x102;
          goto LAB_1477c2462;
        }
        if (*(longlong *)(param_1 + 0x58) != 0) {
          pbVar3 = (byte *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x3e0) + 0xe4);
          *pbVar3 = *pbVar3 | 0x40;
        }
        *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 0x102;
        goto LAB_1477c245c;
      }
      uVar12 = *(uint *)(param_1 + 0x88);
      bVar9 = (byte)*(undefined4 *)(param_1 + 0x118);
    }
    local_68 = **(longlong **)(*(longlong *)(param_1 + 0x28) + lVar13);
    local_58 = (longlong *)CONCAT44(*(undefined4 *)(param_1 + 0x84),uVar12);
    uStack_48 = *(int *)(param_1 + 0x80) != 0;
    uStack_47 = param_4 == '\x01';
    uStack_4c = 0x12c0;
    uStack_50 = *(undefined4 *)(param_1 + 0x8c);
    bStack_46 = bVar9 >> 7;
    plStack_60 = param_2;
    QueryPerformanceCounter(&local_38);
    *(LARGE_INTEGER *)(param_1 + 0xb8) = local_38;
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xf0);
    EnterCriticalSection(lpCriticalSection);
    uVar11 = FUN_14001cc68(0x10,0x10);
    FUN_1477c4b58(uVar11,&local_68);
    *(undefined8 *)(param_1 + 0x70) = uVar11;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 200);
    BVar10 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar10 == 0) goto LAB_1477c2462;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      uStack_40 = 0;
      local_58 = (longlong *)0x0;
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
      plVar7 = *(longlong **)(param_1 + 0x60);
      lVar6 = *(longlong *)(param_1 + 0x58);
      if (plVar7 != (longlong *)0x0) {
        local_58 = *(longlong **)(param_1 + 0x68);
        lVar6 = local_68;
        plStack_60 = plVar7;
        if (local_58 == (longlong *)0x0) {
          local_58 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(local_58 + 1) = (int)local_58[1] + 1;
          UNLOCK();
        }
      }
      local_68 = lVar6;
      uVar11 = **(undefined8 **)(*(longlong *)(param_1 + 0x28) + lVar13);
      uStack_50 = (undefined4)uVar11;
      uStack_4c = (undefined4)((ulonglong)uVar11 >> 0x20);
      uStack_48 = (undefined1)uVar12;
      uStack_47 = (undefined1)(uVar12 >> 8);
      bStack_46 = (byte)(uVar12 >> 0x10);
      uStack_45 = (undefined1)(uVar12 >> 0x18);
      uStack_44 = *(undefined4 *)(param_1 + 0x84);
      QueryPerformanceCounter(&local_38);
      *(LARGE_INTEGER *)(param_1 + 0xb8) = local_38;
      uVar11 = FUN_1477c450f(*(undefined4 *)(param_1 + 0x90),&local_68);
      plVar7 = local_58;
      *(undefined8 *)(param_1 + 0x70) = uVar11;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_58 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
  }
LAB_1477c245c:
  LeaveCriticalSection(lpCriticalSection);
LAB_1477c2462:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c2698 FUN_1477c2698 body=57 status=ok
// SIG undefined FUN_1477c2698(void)

void FUN_1477c2698(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 0x22c) == 0)) {
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      FUN_1477d4602();
    }
    *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | 8;
  }
  return;
}



// FUNCTION 1477c26d2 FUN_1477c26d2 body=150 status=ok
// SIG undefined FUN_1477c26d2(void)

ulonglong FUN_1477c26d2(longlong param_1)

{
  undefined8 unaff_RSI;
  ulonglong uVar1;
  
  if ((*(byte *)(param_1 + 0x90) & 8) == 0) {
    uVar1 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (*(char *)(param_1 + 0x220) == '\0') goto LAB_1477c26fa;
    if (*(char *)(param_1 + 0x220) != '\x01') {
      if ((*(longlong *)(param_1 + 0x10) == 0) || (*(longlong *)(param_1 + 0xc0) == 0))
      goto LAB_1477c26fa;
      if ((*(int *)(param_1 + 0x234) != 0) && (*(int *)(param_1 + 0x238) != 0)) {
        FUN_1433fc2e4(*(undefined8 *)(param_1 + 0x10),0);
        LOCK();
        *(undefined4 *)(param_1 + 0x22c) = 0;
        UNLOCK();
        goto LAB_1477c26fa;
      }
      if (*(int *)(param_1 + 0x230) != 0) {
        uVar1 = 0;
        if (*(int *)(*(longlong *)(param_1 + 0x10) + 0xc4) == 1) {
          FUN_1433fc2e4(*(longlong *)(param_1 + 0x10),0);
          LOCK();
          *(undefined4 *)(param_1 + 0x230) = 0;
          UNLOCK();
        }
        goto LAB_1477c26fa;
      }
    }
  }
  uVar1 = 0;
LAB_1477c26fa:
  return uVar1 & 0xffffffff;
}



// FUNCTION 1477c2768 FUN_1477c2768 body=130 status=ok
// SIG undefined FUN_1477c2768(void)

float FUN_1477c2768(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  
  if (*(char *)(param_1 + 0x220) == '\x02') {
    fVar3 = 1.0;
    if ((*(longlong *)(param_1 + 0xc0) != 0) && (0 < *(int *)(param_1 + 0x7c))) {
      iVar1 = *(int *)(param_1 + 0x80);
      lVar2 = FUN_1477d4626(0x3f800000);
      fVar3 = (float)(lVar2 + iVar1) / (float)*(int *)(param_1 + 0x7c);
      *(float *)(param_1 + 0x11c) = fVar3;
      if (*(int *)(*(longlong *)(param_1 + 0x10) + 0xc4) == 0) {
        if (1.0 <= fVar3) {
          fVar3 = 1.0;
        }
        *(float *)(param_1 + 0x11c) = fVar3;
      }
    }
  }
  else {
    fVar3 = *(float *)(param_1 + 0x11c);
  }
  return fVar3;
}



// FUNCTION 1477c2860 FUN_1477c2860 body=1188 status=ok
// SIG undefined FUN_1477c2860(void)

float FUN_1477c2860(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  float fVar15;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined1 local_70 [16];
  longlong *local_60;
  byte local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    fVar15 = 1.0;
  }
  else {
    FUN_14795f152(*(longlong *)(param_1 + 0xa0),local_70);
    if ((local_54 & 1) == 0) {
      fVar15 = 1.0;
    }
    else {
      local_88 = 0;
      uStack_80 = 0;
      lVar10 = *(longlong *)(param_1 + 0xa0);
      if ((local_54 & 4) != 0) {
        if (lVar10 == 0) {
          lVar10 = 0;
        }
        else {
          plVar11 = *(longlong **)(lVar10 + 0xf0);
          if (plVar11 != (longlong *)0x0) {
            lVar12 = (**(code **)(*plVar11 + 0x40))(plVar11);
            lVar10 = *(longlong *)(param_1 + 0xa0);
            if (lVar12 != 0) {
              FUN_1433438ce(lVar10,&local_98,lVar12);
              if (local_90 != (longlong *)0x0) {
                iVar6 = (int)local_90[1];
                do {
                  if (iVar6 == 0) goto LAB_1477c2ce3;
                  LOCK();
                  iVar4 = (int)local_90[1];
                  bVar14 = iVar6 == iVar4;
                  if (bVar14) {
                    *(int *)(local_90 + 1) = iVar6 + 1;
                    iVar4 = iVar6;
                  }
                  iVar6 = iVar4;
                  UNLOCK();
                } while (!bVar14);
                plVar11 = local_90;
                if (local_98 != 0) {
                  lVar10 = local_98;
                  while (cVar5 = FUN_1477d75a6(lVar10), uVar3 = uStack_80, cVar5 != '\0') {
                    uVar2 = *(undefined4 *)(lVar10 + 0x20);
                    lVar12 = (longlong)(int)uStack_80;
                    uVar7 = (int)uStack_80 + 1;
                    uStack_80 = CONCAT44(uStack_80._4_4_,uVar7);
                    if (uStack_80._4_4_ < uVar7) {
                      FUN_1447808da(&local_88,uVar3 & 0xffffffff);
                    }
                    *(undefined4 *)(local_88 + lVar12 * 4) = uVar2;
                    local_98 = *(longlong *)(lVar10 + 0x28);
                    plVar13 = *(longlong **)(lVar10 + 0x30);
                    if (plVar13 != (longlong *)0x0) {
                      LOCK();
                      *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
                      UNLOCK();
                    }
                    if (local_90 != (longlong *)0x0) {
                      LOCK();
                      piVar1 = (int *)((longlong)local_90 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        lVar10 = *local_90;
                        local_90 = plVar13;
                        (**(code **)(lVar10 + 0x10))();
                        plVar13 = local_90;
                      }
                    }
                    local_90 = plVar13;
                    lVar10 = local_98;
                    if (local_90 == (longlong *)0x0) {
LAB_1477c2bd2:
                      plVar13 = (longlong *)0x0;
                    }
                    else {
                      iVar6 = (int)local_90[1];
                      do {
                        if (iVar6 == 0) goto LAB_1477c2bd2;
                        LOCK();
                        iVar4 = (int)local_90[1];
                        bVar14 = iVar6 == iVar4;
                        if (bVar14) {
                          *(int *)(local_90 + 1) = iVar6 + 1;
                          iVar4 = iVar6;
                        }
                        iVar6 = iVar4;
                        UNLOCK();
                        plVar13 = local_90;
                      } while (!bVar14);
                    }
                    if (plVar13 == plVar11) {
                      if (plVar11 == (longlong *)0x0) {
                        plVar8 = (longlong *)0x0;
                      }
                      else {
                        LOCK();
                        plVar9 = plVar13 + 1;
                        *(int *)plVar9 = (int)*plVar9 + -1;
                        UNLOCK();
                        plVar8 = plVar11;
                        if ((int)*plVar9 == 0) {
                          (**(code **)*plVar13)(plVar13);
                          LOCK();
                          piVar1 = (int *)((longlong)plVar13 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          iVar6 = *piVar1;
                          UNLOCK();
                          plVar11 = plVar13;
                          goto joined_r0x0001477c2c49;
                        }
                      }
                    }
                    else {
                      plVar8 = plVar13;
                      if (plVar11 != (longlong *)0x0) {
                        LOCK();
                        plVar9 = plVar11 + 1;
                        *(int *)plVar9 = (int)*plVar9 + -1;
                        UNLOCK();
                        if ((int)*plVar9 == 0) {
                          (**(code **)*plVar11)(plVar11);
                          LOCK();
                          piVar1 = (int *)((longlong)plVar11 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          iVar6 = *piVar1;
                          UNLOCK();
joined_r0x0001477c2c49:
                          if (iVar6 == 0) {
                            (**(code **)(*plVar11 + 0x10))();
                          }
                        }
                      }
                    }
                    plVar11 = plVar8;
                    if ((plVar13 == (longlong *)0x0) || (lVar10 == 0)) break;
                  }
                }
                if (plVar11 != (longlong *)0x0) {
                  LOCK();
                  plVar13 = plVar11 + 1;
                  *(int *)plVar13 = (int)*plVar13 + -1;
                  UNLOCK();
                  if ((int)*plVar13 == 0) {
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
LAB_1477c2ce3:
                if (local_90 != (longlong *)0x0) {
                  LOCK();
                  piVar1 = (int *)((longlong)local_90 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*local_90 + 0x10))();
                  }
                }
              }
              lVar10 = *(longlong *)(param_1 + 0xa0);
            }
          }
        }
      }
      FUN_1433438ce(lVar10,&local_98);
      if (local_90 == (longlong *)0x0) {
        fVar15 = 1.0;
      }
      else {
        iVar6 = (int)local_90[1];
        fVar15 = 1.0;
        do {
          if (iVar6 == 0) goto LAB_1477c2ca0;
          LOCK();
          iVar4 = (int)local_90[1];
          bVar14 = iVar6 == iVar4;
          if (bVar14) {
            *(int *)(local_90 + 1) = iVar6 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          UNLOCK();
        } while (!bVar14);
        fVar15 = 1.0;
        plVar11 = local_90;
        lVar10 = local_98;
        plVar13 = local_90;
        if (local_98 != 0) {
          while (cVar5 = FUN_1477d75a6(lVar10), plVar13 = plVar11, cVar5 != '\0') {
            if ((local_54 & 4) != 0) {
              if ((longlong)(int)uStack_80 != 0) {
                lVar12 = 0;
                do {
                  if (*(int *)(local_88 + lVar12) == *(int *)(lVar10 + 0x20)) goto LAB_1477c2c7c;
                  lVar12 = lVar12 + 4;
                } while ((longlong)(int)uStack_80 * 4 != lVar12);
              }
            }
            plVar8 = (longlong *)FUN_1477d9182(lVar10);
            plVar9 = (longlong *)FUN_1477d918a(lVar10);
            if (plVar8 != (longlong *)0x0) {
              fVar15 = fVar15 * *(float *)(*plVar8 + 4);
            }
            if (plVar9 != (longlong *)0x0) {
              fVar15 = fVar15 * *(float *)(*plVar9 + 4);
            }
            local_98 = *(longlong *)(lVar10 + 0x28);
            plVar8 = *(longlong **)(lVar10 + 0x30);
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
              UNLOCK();
            }
            if (local_90 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)local_90 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                lVar10 = *local_90;
                local_90 = plVar8;
                (**(code **)(lVar10 + 0x10))();
                plVar8 = local_90;
              }
            }
            local_90 = plVar8;
            lVar10 = local_98;
            if (local_90 == (longlong *)0x0) {
LAB_1477c2a19:
              plVar8 = (longlong *)0x0;
            }
            else {
              iVar6 = (int)local_90[1];
              do {
                if (iVar6 == 0) goto LAB_1477c2a19;
                LOCK();
                iVar4 = (int)local_90[1];
                bVar14 = iVar6 == iVar4;
                if (bVar14) {
                  *(int *)(local_90 + 1) = iVar6 + 1;
                  iVar4 = iVar6;
                }
                iVar6 = iVar4;
                UNLOCK();
                plVar8 = local_90;
              } while (!bVar14);
            }
            if (plVar8 == plVar11) {
              if (plVar11 == (longlong *)0x0) {
                plVar13 = (longlong *)0x0;
              }
              else {
                LOCK();
                plVar9 = plVar8 + 1;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)*plVar9 == 0) {
                  (**(code **)*plVar8)(plVar8);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar8 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  iVar6 = *piVar1;
                  UNLOCK();
                  plVar9 = plVar8;
                  goto joined_r0x0001477c2ac6;
                }
              }
            }
            else {
              plVar13 = plVar8;
              if (plVar11 != (longlong *)0x0) {
                LOCK();
                plVar9 = plVar11 + 1;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)*plVar9 == 0) {
                  (**(code **)*plVar11)(plVar11);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar11 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  iVar6 = *piVar1;
                  UNLOCK();
                  plVar9 = plVar11;
                  plVar11 = plVar8;
joined_r0x0001477c2ac6:
                  plVar13 = plVar11;
                  if (iVar6 == 0) {
                    (**(code **)(*plVar9 + 0x10))();
                  }
                }
              }
            }
            if ((plVar8 == (longlong *)0x0) || (plVar11 = plVar13, lVar10 == 0)) break;
          }
        }
LAB_1477c2c7c:
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar13 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
        }
LAB_1477c2ca0:
        if (local_90 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_90 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_90 + 0x10))();
          }
        }
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_60 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_60 + 0x10))(local_60);
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return fVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c2d06 FUN_1477c2d06 body=478 status=ok
// SIG undefined FUN_1477c2d06(void)

void FUN_1477c2d06(longlong param_1,char *param_2,undefined4 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  float fVar3;
  double dVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_70;
  undefined1 local_64 [4];
  undefined8 local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1433438ce(*(undefined8 *)(param_1 + 0xa0),&local_60);
    FUN_1477cfc76(param_4,local_64,&local_60);
    fVar3 = 0.0;
    if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xcc) & 4) != 0) {
      if (*param_2 == '\x02') {
        fVar3 = *(float *)(param_2 + 0x10);
        if (param_2[0x14] == '\0') {
          if (1.0 <= fVar3) {
            fVar3 = 1.0;
          }
          if (fVar3 <= 0.0) {
            fVar3 = 0.0;
          }
        }
      }
      else {
        dVar4 = (double)*(float *)(param_2 + 0x24) - (double)*(float *)(param_2 + 0x20);
        if (dVar4 <= 1.0) {
          dVar4 = 1.0;
        }
        dVar4 = ((double)*(float *)(*(longlong *)(param_1 + 0x10) + 0x14c) -
                (double)*(float *)(param_2 + 0x20)) / (double)(float)dVar4;
        if (1.0 <= dVar4) {
          dVar4 = 1.0;
        }
        if (dVar4 <= 0.0) {
          dVar4 = 0.0;
        }
        if (*param_2 == '\0') {
          dVar4 = ((double)*(float *)(param_2 + 0x1c) - (double)*(float *)(param_2 + 0x18)) *
                  (double)(float)dVar4 + (double)*(float *)(param_2 + 0x18);
          if (1.0 <= dVar4) {
            dVar4 = 1.0;
          }
          if (dVar4 <= 0.0) {
            dVar4 = 0.0;
          }
          fVar3 = (float)dVar4;
        }
        else {
          uVar2 = FUN_1401e2d36(param_2 + 0x28);
          fVar3 = (float)FUN_1448c9f94(uVar2,(float)dVar4,0);
          if (1.0 <= fVar3) {
            fVar3 = 1.0;
          }
          if (fVar3 <= 0.0) {
            fVar3 = 0.0;
          }
        }
      }
    }
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    local_78 = local_60;
    local_70 = local_58;
    if (local_58 == (longlong *)0x0) {
      FUN_1477d464a(uVar2,&local_78,fVar3,param_3);
    }
    else {
      LOCK();
      *(int *)((longlong)local_58 + 0xc) = *(int *)((longlong)local_58 + 0xc) + 1;
      UNLOCK();
      FUN_1477d464a(uVar2,&local_78,fVar3,param_3);
      if (local_58 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_58 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_58 + 0x10))(local_58);
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477c2ee6 FUN_1477c2ee6 body=573 status=ok
// SIG undefined FUN_1477c2ee6(void)

undefined8 * FUN_1477c2ee6(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar4 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_1477d039e(param_2,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) < iVar3)) {
      *(int *)(param_2 + 9) = iVar3;
      FUN_1477d01a6(param_2);
    }
  }
  local_58 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_60);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = param_1;
  if (iStack_4c < (int)local_58[3]) {
    do {
      uVar2 = *(ulonglong *)(*local_88 + (longlong)iStack_6c * 0x18);
      local_90 = *(longlong **)(*local_88 + 8 + (longlong)iStack_6c * 0x18);
      local_98 = uVar2;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_90 + 0xc) = *(int *)((longlong)local_90 + 0xc) + 1;
        UNLOCK();
        if (local_90 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_90 + 0xc) = *(int *)((longlong)local_90 + 0xc) + 1;
          UNLOCK();
          LOCK();
          piVar1 = (int *)((longlong)local_90 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_90 + 0x10))();
          }
        }
      }
      uVar4 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      iVar3 = FUN_1477cffc8(param_3,uVar4 >> 0x10 ^ uVar4,&local_98);
      if (local_90 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_90 + 0x10))();
        }
      }
      if (iVar3 == -1) {
        FUN_1477cfc76(param_2,&local_60,(longlong)iStack_6c * 0x18 + *local_88);
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < (int)local_78[3]);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1477c3126 FUN_1477c3126 body=122 status=ok
// SIG undefined FUN_1477c3126(void)

longlong FUN_1477c3126(longlong param_1,longlong param_2)

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
    FUN_1477d053a(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1477c31a0 FUN_1477c31a0 body=114 status=ok
// SIG undefined FUN_1477c31a0(void)

bool FUN_1477c31a0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 uVar1;
  bool bVar2;
  
  if ((int)param_2 == 1) {
    uVar1 = FUN_14334d242(param_1,param_3);
    return (bool)uVar1;
  }
  if ((int)param_2 == 2) {
    uVar1 = FUN_1477c3212(param_1,param_3);
    return (bool)uVar1;
  }
  bVar2 = *(int *)(param_3 + 8) == 0;
  if (bVar2) {
    FUN_143343e04((*(uint *)(param_1 + 0x2ac) & 8) >> 3,param_2,
                  *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0xcb8),
                  *(uint *)(*(longlong *)(param_1 + 0x10) + 0xcc) >> 0x10 & 1,param_3);
  }
  return bVar2;
}



// FUNCTION 1477c3212 FUN_1477c3212 body=1642 status=ok
// SIG undefined FUN_1477c3212(void)

ulonglong FUN_1477c3212(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 unaff_RBX;
  ulonglong uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar15;
  undefined *puVar16;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  if (((DAT_14c7612fc == 0) || ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xcd) & 2) == 0)) ||
     ((ABS(*(float *)(*(longlong *)(param_1 + 0x10) + 0x154) - *(float *)(param_1 + 0x118)) <= 0.01
      && (*(char *)(*(longlong *)(**(longlong **)(param_1 + 0xc0) + 0x1d8) +
                   (longlong)*(int *)((longlong)*(longlong **)(param_1 + 0xc0) + 0x9c)) != '\x01')))
     ) {
LAB_1477c3246:
    if (*(int *)(param_2 + 8) == 0) {
      uVar6 = *(uint *)(param_1 + 0x2ac);
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x2ac);
      if (((uVar6 & 0x40) == 0) != (DAT_14c7612fc != 0)) {
        uVar9 = 0;
        goto LAB_1477c32a8;
      }
    }
    FUN_143343e04((uVar6 & 8) >> 3,2,*(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0xcb8),
                  *(uint *)(*(longlong *)(param_1 + 0x10) + 0xcc) >> 0x10 & 1,param_2);
  }
  else {
    if (*(int *)(param_1 + 0x84) == 2) {
      FUN_14795b7c4(param_1);
    }
    bVar4 = FUN_1477c0fb4(param_1);
    plVar3 = *(longlong **)(param_1 + 0xc0);
    if (plVar3 != (longlong *)0x0) {
      if ((longlong)*(int *)((longlong)plVar3 + 0x9c) == -1) {
        bVar5 = 1;
      }
      else {
        bVar5 = *(byte *)(*(longlong *)(*plVar3 + 0x1f8) +
                         (longlong)*(int *)((longlong)plVar3 + 0x9c));
      }
      bVar4 = bVar4 & bVar5;
    }
    if (bVar4 != 0) goto LAB_1477c3246;
    fVar14 = *(float *)(*(longlong *)(param_1 + 0x10) + 0x14c + (ulonglong)(DAT_14cabb190 == 0) * 4)
    ;
    if (fVar14 <= 0.0001) {
      uVar6 = 0x42b40000;
      fVar14 = 270.0;
    }
    else {
      fVar11 = atanf((*(float *)(*(longlong *)(param_1 + 0x10) + 0x144) * 0.5) / fVar14);
      fVar14 = *(float *)(*(longlong *)(param_1 + 0x10) + 0x154);
      fVar13 = fVar14 - fVar11 * 57.295776;
      uVar6 = ~-(uint)(fVar13 < 0.0) & (uint)fVar13 | (uint)(fVar13 + 360.0) & -(uint)(fVar13 < 0.0)
      ;
      fVar14 = fVar11 * 57.295776 + fVar14;
      if (360.0 < fVar14) {
        fVar14 = fVar14 + -360.0;
      }
    }
    *(undefined4 *)(param_2 + 8) = 0;
    if (*(int *)(param_2 + 0xc) < 0) {
      FUN_1470345fa(param_2,0);
    }
    iVar2 = *(int *)(*(longlong *)(param_1 + 0xa0) + 0xcb8);
    cVar1 = *(char *)(*(longlong *)(param_1 + 0x10) + 0x140);
    if (cVar1 == '\x01') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cabb1f8) && (FUN_144b3d300(&DAT_14cabb1f8), DAT_14cabb1f8 == -1))
      {
        FUN_14334d3e4();
        atexit(FUN_14334d480);
        _Init_thread_footer(&DAT_14cabb1f8);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cabb250) && (FUN_144b3d300(&DAT_14cabb250), DAT_14cabb250 == -1))
      {
        FUN_14334d4b0();
        atexit(FUN_14334d54f);
        _Init_thread_footer(&DAT_14cabb250);
      }
      uVar10 = CONCAT44(uVar12,*(undefined4 *)(param_1 + 0x20c));
      FUN_1477beeb0(*(undefined8 *)(param_1 + 0xa0),iVar2,*(undefined8 *)(param_1 + 0x10),uVar6,
                    uVar10,&DAT_14cabb1a8,0,param_2);
      uVar15 = (undefined4)((ulonglong)uVar10 >> 0x20);
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      uVar7 = *(undefined8 *)(param_1 + 0xa0);
      uVar12 = *(undefined4 *)(param_1 + 0x20c);
      fVar11 = 0.0;
      puVar16 = &DAT_14cabb200;
    }
    else {
      if (cVar1 != '\0') {
        uVar9 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
        if (iVar2 == 8) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cabb358) && (FUN_144b3d300(&DAT_14cabb358), DAT_14cabb358 == -1)) {
            FUN_14334d78a();
            atexit(FUN_14334d85f);
            _Init_thread_footer(&DAT_14cabb358);
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cabb3b0) && (FUN_144b3d300(&DAT_14cabb3b0), DAT_14cabb3b0 == -1)) {
            FUN_14334d88e();
            atexit(FUN_14334d967);
            _Init_thread_footer(&DAT_14cabb3b0);
          }
          FUN_1477beeb0(*(undefined8 *)(param_1 + 0xa0),8,*(undefined8 *)(param_1 + 0x10),uVar6,
                        CONCAT44(uVar12,*(undefined4 *)(param_1 + 0x20c)),&DAT_14cabb308,0,param_2);
          uVar10 = *(undefined8 *)(param_1 + 0x10);
          uVar7 = *(undefined8 *)(param_1 + 0xa0);
          uVar12 = *(undefined4 *)(param_1 + 0x20c);
          puVar16 = &DAT_14cabb360;
          uVar8 = 8;
        }
        else {
          if (iVar2 != 6) goto LAB_1477c32a8;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cabb2a8) && (FUN_144b3d300(&DAT_14cabb2a8), DAT_14cabb2a8 == -1)) {
            FUN_14334d57e();
            atexit(FUN_14334d653);
            _Init_thread_footer(&DAT_14cabb2a8);
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cabb300) && (FUN_144b3d300(&DAT_14cabb300), DAT_14cabb300 == -1)) {
            FUN_14334d682();
            atexit(FUN_14334d75b);
            _Init_thread_footer(&DAT_14cabb300);
          }
          FUN_1477beeb0(*(undefined8 *)(param_1 + 0xa0),6,*(undefined8 *)(param_1 + 0x10),uVar6,
                        CONCAT44(uVar12,*(undefined4 *)(param_1 + 0x20c)),&DAT_14cabb258,0,param_2);
          uVar10 = *(undefined8 *)(param_1 + 0x10);
          uVar7 = *(undefined8 *)(param_1 + 0xa0);
          uVar12 = *(undefined4 *)(param_1 + 0x20c);
          puVar16 = &DAT_14cabb2b0;
          uVar8 = 6;
        }
        FUN_1477beeb0(uVar7,uVar8,uVar10,fVar14,uVar12,puVar16,0,param_2);
        goto LAB_1477c32a8;
      }
      fVar11 = 1.0 / (float)iVar2;
      uVar10 = CONCAT44(uVar12,*(undefined4 *)(param_1 + 0x20c));
      FUN_1477beeb0(*(longlong *)(param_1 + 0xa0),iVar2,*(longlong *)(param_1 + 0x10),uVar6,uVar10,0
                    ,fVar11,param_2);
      uVar15 = (undefined4)((ulonglong)uVar10 >> 0x20);
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      uVar7 = *(undefined8 *)(param_1 + 0xa0);
      uVar12 = *(undefined4 *)(param_1 + 0x20c);
      puVar16 = (undefined *)0x0;
    }
    unaff_RBX = 0;
    FUN_1477beeb0(uVar7,iVar2,uVar10,fVar14,CONCAT44(uVar15,uVar12),puVar16,fVar11,param_2);
  }
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
LAB_1477c32a8:
  return uVar9 & 0xffffffff;
}



// FUNCTION 1477c387c FUN_1477c387c body=247 status=ok
// SIG undefined FUN_1477c387c(void)

undefined4 FUN_1477c387c(longlong *param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  void *_Dst;
  ulonglong uVar4;
  uint uVar5;
  
  _Dst = (void *)*param_2;
  lVar1 = *param_1;
  uVar3 = (ulonglong)param_3;
  if (*(int *)((longlong)param_1 + 0xc) == -1) {
    if (param_3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar5 = *(uint *)(param_1 + 2);
      uVar4 = 0;
      uVar2 = 0;
      do {
        *(uint *)(param_1 + 2) = uVar5 + 1;
        *(float *)((longlong)_Dst + uVar4 * 4) =
             (float)(int)*(short *)(lVar1 + (ulonglong)uVar5 * 2) * 3.0517578e-05;
        uVar5 = *(uint *)(param_1 + 2);
        if (*(uint *)((longlong)param_1 + 0x14) <= uVar5) {
          *(undefined4 *)(param_1 + 2) = 0;
          uVar2 = 1;
          uVar5 = 0;
        }
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
    }
  }
  else {
    if (*(uint *)(param_1 + 2) < *(uint *)((longlong)param_1 + 0x14)) {
      uVar4 = 0;
      if (param_3 != 0) {
        do {
          uVar5 = *(uint *)(param_1 + 2);
          if (*(uint *)((longlong)param_1 + 0x14) <= uVar5) goto LAB_1477c38e7;
          *(uint *)(param_1 + 2) = uVar5 + 1;
          *(float *)((longlong)_Dst + uVar4 * 4) =
               (float)(int)*(short *)(lVar1 + (ulonglong)uVar5 * 2) * 3.0517578e-05;
          uVar4 = uVar4 + 1;
        } while (uVar3 != uVar4);
        uVar4 = (ulonglong)param_3;
      }
LAB_1477c38e7:
      uVar3 = (ulonglong)(param_3 - (int)uVar4);
      _Dst = (void *)((longlong)_Dst + (uVar4 & 0xffffffff) * 4);
    }
    memset(_Dst,0,uVar3 << 2);
    uVar2 = CONCAT31((int3)(*(uint *)(param_1 + 2) >> 8),
                     *(uint *)((longlong)param_1 + 0x14) <= *(uint *)(param_1 + 2));
  }
  return uVar2;
}



// FUNCTION 1477c3974 FUN_1477c3974 body=985 status=ok
// SIG undefined FUN_1477c3974(void)

undefined8 * FUN_1477c3974(undefined8 *param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  float local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined1 local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_1 = &PTR_FUN_14a56e170;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  param_1[9] = puVar8;
  param_1[8] = puVar8;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = *(undefined8 *)(param_2 + 10);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = param_2[0xc];
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(*(longlong *)(param_2 + 8) + 0xc);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(*(longlong *)(param_2 + 8) + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)(*(longlong *)(param_2 + 10) + 0x3b0);
  *(undefined4 *)(param_1 + 0x12) = *param_2;
  param_1[0x13] = *(undefined8 *)(param_2 + 4);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = *(undefined8 *)(*(longlong *)(param_2 + 10) + 0x18);
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x19));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x19),4000);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1e),4000);
  uVar4 = *(uint *)(param_1 + 0x23);
  *(uint *)(param_1 + 0x23) = uVar4 & 0xfffffff8;
  uVar4 = (uVar4 & 0xffffffe0) + (uint)*(byte *)(param_2 + 0xe) * 8;
  *(uint *)(param_1 + 0x23) = uVar4;
  uVar10 = (*(uint *)(*(longlong *)(param_2 + 10) + 0x34c) & 1) << 5;
  *(uint *)(param_1 + 0x23) = uVar4 & 0xffffffc8 | uVar10;
  uVar11 = (*(uint *)(*(longlong *)(param_2 + 10) + 0x34c) & 4) << 4;
  *(uint *)(param_1 + 0x23) = uVar4 & 0xffffff88 | uVar10 | uVar11;
  *(uint *)(param_1 + 0x23) =
       uVar4 & 0xfffffe08 | uVar10 | uVar11 | (uint)*(byte *)((longlong)param_2 + 0x39) << 7;
  local_a8 = param_1;
  FUN_147d40a0e(*(undefined8 *)(param_2 + 10));
  if ((*(byte *)(param_1 + 0x23) & 0x20) != 0) {
    local_78 = 0;
    uStack_70 = 0;
    local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,*param_2);
    local_a0 = *(undefined8 *)(param_2 + 2);
    local_98 = (float)(int)param_2[6];
    local_94 = param_2[7];
    local_90 = *(undefined4 *)((longlong)param_1 + 0x84);
    local_8c = 0x12c0;
    local_88 = *(undefined8 *)(param_2 + 4);
    local_80 = *(undefined1 *)((longlong)param_2 + 0x3a);
    local_68 = param_2[0xd];
    (**(code **)(**(longlong **)(param_2 + 10) + 0x358))
              (*(longlong **)(param_2 + 10),&local_b8,&local_a8,param_3);
    plVar1 = local_b0;
    if (param_1 + 0xc != &local_b8) {
      param_1[0xc] = local_b8;
      local_b8 = 0;
      plVar9 = (longlong *)param_1[0xd];
      if (local_b0 != plVar9) {
        local_b0 = (longlong *)0x0;
        param_1[0xd] = plVar1;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar9 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar3 = (int *)((longlong)plVar9 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
      }
    }
    plVar1 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_b0 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  iVar5 = *(int *)((longlong)param_1 + 0x84);
  plVar1 = param_1 + 5;
  lVar12 = 0;
  do {
    plVar9 = (longlong *)FUN_14001cc68(0x28,0x10);
    plVar9[1] = (longlong)&DAT_100000001;
    *plVar9 = (longlong)&PTR_FUN_14a570bf0;
    plVar9[2] = 0;
    plVar9[3] = 0;
    plVar9[4] = 0;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    iVar6 = *(int *)(param_1 + 6);
    *(uint *)(param_1 + 6) = iVar6 + 1U;
    if (*(uint *)((longlong)param_1 + 0x34) < iVar6 + 1U) {
      FUN_1477d0874(plVar1,iVar6);
    }
    lVar7 = *plVar1;
    *(longlong **)(lVar7 + (longlong)iVar6 * 0x10) = plVar9 + 2;
    *(longlong **)(lVar7 + 8 + (longlong)iVar6 * 0x10) = plVar9;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar3 = (int *)((longlong)plVar9 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    FUN_14702dc6a(*(undefined8 *)(*plVar1 + lVar12),iVar5 * 0x12c0);
    *(undefined1 *)(*(longlong *)(*plVar1 + lVar12) + 0x14) = 1;
    *(undefined4 *)(*(longlong *)(*plVar1 + lVar12) + 0x10) = 0;
    lVar12 = lVar12 + 0x10;
  } while (lVar12 != 0x30);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c3d4e FUN_1477c3d4e body=258 status=ok
// SIG undefined FUN_1477c3d4e(void)

void FUN_1477c3d4e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14a56e170;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x19);
  EnterCriticalSection(lpCriticalSection);
  FUN_1477c3e52(param_1);
  puVar3 = (undefined8 *)param_1[0xf];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
    param_1[0xf] = 0;
  }
  if (param_1[0xb] != 0) {
    local_28 = param_1;
    FUN_147d40aa2();
  }
  LeaveCriticalSection(lpCriticalSection);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e));
  DeleteCriticalSection(lpCriticalSection);
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0xd];
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
  FUN_1477c3f48(param_1 + 8);
  FUN_1477d07ff(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c3e52 FUN_1477c3e52 body=245 status=ok
// SIG undefined FUN_1477c3e52(void)

void FUN_1477c3e52(longlong param_1)

{
  longlong *plVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1477c468e();
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  if (BVar2 != 0) {
    if (*(longlong **)(param_1 + 0x60) == (longlong *)0x0) {
      if ((*(longlong **)(param_1 + 0x58) != (longlong *)0x0) &&
         ((~*(uint *)(param_1 + 0x118) & 0x21) == 0)) {
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x3b0))();
      }
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x60) + 0x20))();
      plVar1 = *(longlong **)(param_1 + 0x58);
      if (plVar1 != (longlong *)0x0) {
        local_28 = *(undefined8 *)(param_1 + 0x60);
        local_20 = *(longlong *)(param_1 + 0x68);
        if (local_20 != 0) {
          LOCK();
          *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
          UNLOCK();
        }
        (**(code **)(*plVar1 + 0x3a8))(plVar1,&local_28);
      }
      if ((DAT_14cace0c0 != 0) && (*(int *)(DAT_14cace0c0 + 400) == 2)) {
        lVar3 = FUN_147973140(DAT_14cace0c0,*(undefined4 *)(param_1 + 0x90));
        if (lVar3 != 0) {
          uVar4 = FUN_1477b91ee(lVar3);
          FUN_1477b3c10(uVar4,*(undefined8 *)(param_1 + 0x98));
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c3f48 FUN_1477c3f48 body=89 status=ok
// SIG undefined FUN_1477c3f48(void)

void FUN_1477c3f48(longlong param_1)

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



// FUNCTION 1477c3fa2 FUN_1477c3fa2 body=51 status=ok
// SIG undefined FUN_1477c3fa2(void)

undefined8 FUN_1477c3fa2(longlong param_1)

{
  *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 0x118) | 1;
  if (*(uint *)(param_1 + 0x88) - 2 < 2) {
    FUN_1477c40ee();
  }
  else if (*(uint *)(param_1 + 0x88) < 2) {
    FUN_1477c3fd6();
  }
  return 1;
}



// FUNCTION 1477c3fd6 FUN_1477c3fd6 body=279 status=ok
// SIG undefined FUN_1477c3fd6(void)

void FUN_1477c3fd6(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x18) >> 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(uint *)(param_1 + 0x18) != 0 && *(longlong *)(param_1 + 0x10) != 0) {
    *(uint *)(param_1 + 0x1c) = -(uint)(*(int *)(param_1 + 0x80) != 0);
    iVar1 = *(int *)(param_1 + 0x84);
    uVar5 = (longlong)iVar1 * 0x12c0;
    uVar4 = (uint)uVar5;
    FUN_14702dc6a(**(undefined8 **)(param_1 + 0x28));
    plVar3 = (longlong *)**(longlong **)(param_1 + 0x28);
    iVar2 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar2 + uVar4;
    if ((uint)(*(int *)((longlong)plVar3 + 0xc) - iVar2) < uVar4) {
      FUN_145ca0cd4(plVar3);
    }
    memset((void *)((longlong)iVar2 * 4 + *plVar3),0,(longlong)iVar1 * 0x4b00);
    FUN_1477c387c(param_1 + 0x10,**(undefined8 **)(param_1 + 0x28),uVar5 & 0xffffffff);
    local_40 = **(undefined8 **)(param_1 + 0x28);
    local_38 = (*(undefined8 **)(param_1 + 0x28))[1];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    FUN_1477c448a(param_1,&local_40);
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c40ee FUN_1477c40ee body=426 status=ok
// SIG undefined FUN_1477c40ee(void)

void FUN_1477c40ee(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)(param_1 + 0x50) = 0;
  uVar1 = *(uint *)(param_1 + 0x118);
  *(uint *)(param_1 + 0x118) = uVar1 & 0xfffffffb;
  if (((uVar1 & 8) == 0) && (0 < *(int *)(param_1 + 0xa8))) {
    *(uint *)(param_1 + 0x118) = uVar1 | 4;
    uVar8 = (longlong)*(int *)(param_1 + 0x84) * (longlong)*(int *)(param_1 + 0x8c);
    lVar9 = 0;
    bVar6 = true;
    do {
      bVar7 = bVar6;
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + lVar9 * 0x10);
      *(undefined4 *)(lVar3 + 8) = 0;
      if (*(int *)(lVar3 + 0xc) < 0) {
        FUN_1470345fa();
      }
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x28) + lVar9 * 0x10);
      iVar2 = (int)plVar4[1];
      uVar1 = (uint)uVar8;
      *(uint *)(plVar4 + 1) = iVar2 + uVar1;
      if ((uint)(*(int *)((longlong)plVar4 + 0xc) - iVar2) < uVar1) {
        FUN_145ca0cd4(plVar4);
      }
      memset((void *)((longlong)iVar2 * 4 + *plVar4),0,uVar8 * 4);
      lVar9 = 1;
      bVar6 = false;
    } while (bVar7);
    lVar9 = *(longlong *)(param_1 + 0xa0);
    uVar5 = *(undefined8 *)(*(undefined8 **)(param_1 + 0x28))[2];
    FUN_1421c5070(lVar9,*(undefined8 *)**(undefined8 **)(param_1 + 0x28),uVar8 & 0xffffffff);
    FUN_1421c5070((ulonglong)(uVar1 * 2) + lVar9,uVar5,uVar8 & 0xffffffff);
    local_48 = **(undefined8 **)(param_1 + 0x28);
    local_40 = (*(undefined8 **)(param_1 + 0x28))[1];
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    FUN_1477c448a(param_1,&local_48);
    local_58 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10);
    local_50 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18);
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
    FUN_1477c448a(param_1,&local_58);
    *(undefined4 *)(param_1 + 0x50) = 2;
  }
  else if ((uVar1 & 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c42ae FUN_1477c42ae body=155 status=ok
// SIG undefined FUN_1477c42ae(void)

void FUN_1477c42ae(longlong param_1)

{
  uint uVar1;
  BOOL BVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar3;
  bool bVar4;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  if (BVar2 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 200);
  }
  uVar1 = *(uint *)(param_1 + 0x118);
  if ((uVar1 & 0x20) == 0) {
    bVar3 = *(longlong *)(param_1 + 0x78) == 0;
    bVar4 = false;
  }
  else {
    bVar4 = *(longlong *)(param_1 + 0x58) == 0;
    bVar3 = false;
  }
  if (((lpCriticalSection == (LPCRITICAL_SECTION)0x0 ||
        ((byte)((uVar1 & 2) >> 1) & *(int *)(param_1 + 8) == 0) != 0) || (bVar4)) || (bVar3)) {
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      return;
    }
  }
  else if ((uVar1 >> 8 & 1) == 0) {
    FUN_14334d996(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001477c4339. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1477c434a FUN_1477c434a body=81 status=ok
// SIG undefined FUN_1477c434a(void)

undefined8 * FUN_1477c434a(longlong param_1,undefined8 *param_2)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  if (BVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    FUN_1477c439c(param_1 + 0x40,param_2);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  }
  return param_2;
}



// FUNCTION 1477c439c FUN_1477c439c body=238 status=ok
// SIG undefined FUN_1477c439c(void)

void FUN_1477c439c(longlong param_1,undefined8 *param_2)

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
      return;
    }
  }
  return;
}



// FUNCTION 1477c448a FUN_1477c448a body=133 status=ok
// SIG undefined FUN_1477c448a(void)

void FUN_1477c448a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar6 = 0;
  puVar6[1] = *param_2;
  lVar3 = param_2[1];
  puVar6[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if (puVar6 != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_1 + 0x40);
    *(undefined8 **)(param_1 + 0x40) = puVar6;
    *puVar4 = puVar6;
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
                    /* WARNING: Could not recover jumptable at 0x0001477c4503. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477c450f FUN_1477c450f body=129 status=ok
// SIG undefined FUN_1477c450f(void)

undefined8 FUN_1477c450f(int param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (DAT_14cabb3e0 == 0) {
    if (*(longlong **)(param_2 + 8) != (longlong *)0x0) {
      iVar1 = (**(code **)(**(longlong **)(param_2 + 8) + 0x38))();
      if (iVar1 != 0) goto LAB_1477c4556;
    }
    uVar2 = FUN_14001cc68(0x10,0x10);
    FUN_1477c4a1a(uVar2,param_2);
  }
  else {
LAB_1477c4556:
    iVar1 = (**(code **)(**(longlong **)(param_2 + 8) + 0x38))();
    if (iVar1 != 0) {
      param_1 = iVar1;
    }
    uVar2 = FUN_14001cc68(0x18,0x10);
    FUN_1477c4840(uVar2,param_2,param_1);
  }
  return uVar2;
}



// FUNCTION 1477c4590 FUN_1477c4590 body=144 status=ok
// SIG undefined FUN_1477c4590(void)

void FUN_1477c4590(longlong param_1,char param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_2 != '\0') {
    if (*(int *)(param_1 + 0x80) == 0) {
      uVar2 = 2;
    }
    else {
      if (*(int *)(param_1 + 0x80) != 1) goto LAB_1477c45c8;
      uVar2 = 0x10;
    }
    *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | uVar2;
  }
LAB_1477c45c8:
  lVar3 = (longlong)*(int *)(param_1 + 0x50) * 0x10;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + lVar3);
  if (0 < *(int *)(lVar1 + 8)) {
    local_10 = *(longlong *)(*(longlong *)(param_1 + 0x28) + lVar3 + 8);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    local_18 = lVar1;
    FUN_1477c448a(param_1,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c4622 FUN_1477c4622 body=108 status=ok
// SIG undefined FUN_1477c4622(void)

ulonglong FUN_1477c4622(longlong param_1)

{
  undefined8 *puVar1;
  BOOL BVar2;
  undefined8 unaff_RDI;
  ulonglong uVar3;
  bool bVar4;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  if (BVar2 == 0) {
    uVar3 = 0;
  }
  else {
    bVar4 = *(longlong *)(param_1 + 0x58) != 0;
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar4);
    if (bVar4) {
      FUN_1477c468e(param_1);
      puVar1 = *(undefined8 **)(param_1 + 0x78);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        *(undefined8 *)(param_1 + 0x78) = 0;
      }
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1477c468e FUN_1477c468e body=83 status=ok
// SIG undefined FUN_1477c468e(void)

void FUN_1477c468e(longlong param_1)

{
  undefined8 *puVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x20))();
    puVar1 = *(undefined8 **)(param_1 + 0x70);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001477c46da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
  return;
}



// FUNCTION 1477c46e6 FUN_1477c46e6 body=99 status=ok
// SIG undefined FUN_1477c46e6(void)

void FUN_1477c46e6(longlong param_1)

{
  undefined8 *puVar1;
  BOOL BVar2;
  
  FUN_1477c468e();
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  if (BVar2 != 0) {
    if (*(longlong *)(param_1 + 0x58) != 0) {
      puVar1 = *(undefined8 **)(param_1 + 0x78);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        *(undefined8 *)(param_1 + 0x78) = 0;
      }
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x0001477c473a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
    return;
  }
  return;
}



// FUNCTION 1477c474a FUN_1477c474a body=148 status=ok
// SIG undefined FUN_1477c474a(void)

void FUN_1477c474a(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  float fVar2;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x70);
  *(bool *)((longlong)param_2 + 0xc) = lVar1 != 0;
  *param_2 = *(undefined8 *)(param_1 + 0xb0);
  *(byte *)((longlong)param_2 + 0xd) = *(byte *)(param_1 + 0x118) >> 5 & 1;
  if (lVar1 == 0) {
    fVar2 = 0.0;
  }
  else {
    QueryPerformanceCounter(&local_28);
    fVar2 = (float)((double)(local_28.s.LowPart - *(int *)(param_1 + 0xb8)) * DAT_14c83f420);
  }
  *(float *)(param_2 + 1) = fVar2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c47e0 FUN_1477c47e0 body=96 status=ok
// SIG undefined FUN_1477c47e0(void)

void FUN_1477c47e0(longlong param_1)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  if (BVar1 != 0) {
    if (*(longlong **)(param_1 + 0x60) == (longlong *)0x0) {
      if ((*(longlong **)(param_1 + 0x58) != (longlong *)0x0) &&
         ((*(byte *)(param_1 + 0x118) & 0x20) != 0)) {
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x3a0))();
      }
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))();
    }
                    /* WARNING: Could not recover jumptable at 0x0001477c4814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
    return;
  }
  return;
}



// FUNCTION 1477c4840 FUN_1477c4840 body=473 status=ok
// SIG undefined FUN_1477c4840(void)

undefined8 * FUN_1477c4840(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  longlong *plVar7;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14a570090;
  *(undefined4 *)(param_1 + 2) = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0xd0,0x10);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_149e06640;
  *(undefined4 *)(puVar3 + 2) = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  *(undefined2 *)(puVar3 + 5) = 3;
  puVar3[6] = 0xffffffffffffffff;
  puVar3[7] = 0;
  *puVar3 = &PTR_FUN_14a570110;
  FUN_1477ca1fc(puVar3 + 9,param_2);
  param_1[1] = puVar3;
  *(undefined4 *)(param_1 + 2) = param_3;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cabb438);
  if (DAT_14cabb3f0 != DAT_14cabb41c) {
    puVar6 = &DAT_14cabb420;
    if (DAT_14cabb428 != (undefined *)0x0) {
      puVar6 = DAT_14cabb428;
    }
    iVar2 = *(int *)(puVar6 + (ulonglong)(DAT_14cabb430 - 1U & *(uint *)(param_1 + 2)) * 4);
    while (iVar2 != -1) {
      lVar1 = DAT_14cabb3e8 + (longlong)iVar2 * 0x20;
      if (*(uint *)(DAT_14cabb3e8 + (longlong)iVar2 * 0x20) == *(uint *)(param_1 + 2)) {
        plVar7 = (longlong *)(lVar1 + 8);
        if (plVar7 != (longlong *)0x0 && lVar1 != 0) {
          iVar2 = *(int *)(lVar1 + 0x10);
          *(uint *)(lVar1 + 0x10) = iVar2 + 1U;
          if (*(uint *)(lVar1 + 0x14) < iVar2 + 1U) {
            FUN_1477ca2e8(plVar7,iVar2);
          }
          *(undefined8 *)(*plVar7 + (longlong)iVar2 * 8) = param_1[1];
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cabb438);
          return param_1;
        }
        break;
      }
      iVar2 = *(int *)(lVar1 + 0x18);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cabb438);
  *(undefined4 *)(param_1 + 2) = 0;
  if ((DAT_14cabb3c8 == 0) && (*(char *)(param_2 + 0x28) != '\x01')) {
    uVar4 = param_1[1];
    uVar5 = 0;
  }
  else {
    uVar4 = param_1[1];
    uVar5 = 1;
  }
  FUN_1402a8900(uVar4,uVar5,DAT_14c8442c0,3,0,0xffffffffffffffff,0);
  return param_1;
}



// FUNCTION 1477c4a1a FUN_1477c4a1a body=191 status=ok
// SIG undefined FUN_1477c4a1a(void)

undefined8 * FUN_1477c4a1a(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14a570150;
  puVar1 = (undefined8 *)FUN_14001cc68(0xd0,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_149e06640;
  *(undefined4 *)(puVar1 + 2) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined2 *)(puVar1 + 5) = 3;
  puVar1[6] = 0xffffffffffffffff;
  puVar1[7] = 0;
  *puVar1 = &PTR_FUN_14a570110;
  lVar2 = param_2;
  FUN_1477ca1fc(puVar1 + 9,param_2);
  param_1[1] = puVar1;
  FUN_1402a8900(puVar1,CONCAT71((int7)((ulonglong)lVar2 >> 8),
                                DAT_14cabb3c8 != 0 | *(byte *)(param_2 + 0x28)) & 0xffffffffffffff01
                ,DAT_14c8442c0,3,0,0xffffffffffffffff,0);
  return param_1;
}



// FUNCTION 1477c4ada FUN_1477c4ada body=125 status=ok
// SIG undefined FUN_1477c4ada(void)

undefined8 * FUN_1477c4ada(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14a570190;
  uVar1 = FUN_14001cc68(0xd0,0x10);
  FUN_1433506a6(uVar1,param_2);
  param_1[1] = uVar1;
  FUN_1402a8900(uVar1,DAT_14cabb3c8 != 0,DAT_14c8442c0,3,0,0xffffffffffffffff,0);
  return param_1;
}



// FUNCTION 1477c4b58 FUN_1477c4b58 body=329 status=ok
// SIG undefined FUN_1477c4b58(void)

undefined8 * FUN_1477c4b58(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14a5701d0;
  puVar9 = (undefined8 *)FUN_14001cc68(0xd0,0x10);
  puVar9[1] = 0;
  *puVar9 = &PTR_FUN_149e06640;
  *(undefined4 *)(puVar9 + 2) = 0;
  puVar9[3] = 0;
  puVar9[4] = 0;
  *(undefined2 *)(puVar9 + 5) = 3;
  puVar9[6] = 0xffffffffffffffff;
  puVar9[7] = 0;
  *puVar9 = &PTR_FUN_14a570110;
  puVar9[9] = 0;
  puVar9[10] = 0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  *(undefined4 *)(puVar9 + 0xb) = *param_2;
  *(undefined4 *)((longlong)puVar9 + 0x5c) = uVar1;
  *(undefined4 *)(puVar9 + 0xc) = uVar2;
  *(undefined4 *)((longlong)puVar9 + 100) = uVar3;
  *(undefined4 *)(puVar9 + 0xd) = uVar4;
  *(undefined4 *)((longlong)puVar9 + 0x6c) = uVar5;
  *(undefined4 *)(puVar9 + 0xe) = uVar6;
  *(undefined4 *)((longlong)puVar9 + 0x74) = uVar7;
  puVar9[0xf] = *(undefined8 *)(param_2 + 8);
  *(undefined1 *)(puVar9 + 0x10) = 0;
  *(undefined4 *)(puVar9 + 0x17) = 0;
  *(undefined1 *)((longlong)puVar9 + 0xbc) = 0;
  puVar9[0x11] = 0;
  puVar9[0x12] = 0;
  puVar9[0x13] = 0;
  puVar9[0x14] = 0;
  *(undefined8 *)((longlong)puVar9 + 0xa1) = 0;
  *(undefined8 *)((longlong)puVar9 + 0xa9) = 0;
  puVar9[0x18] = 0x23f800000;
  *(undefined4 *)(puVar9 + 0x19) = 0;
  param_1[1] = puVar9;
  if ((DAT_14cabb3c8 == 0) && (*(char *)((longlong)param_2 + 0x22) != '\x01')) {
    cVar8 = FUN_14795d817();
    puVar9 = (undefined8 *)param_1[1];
    puVar12 = &DAT_14c8442c0;
    if (cVar8 != '\0') {
      puVar12 = &DAT_14c842738;
    }
    uVar11 = *puVar12;
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
    uVar11 = DAT_14c8442c0;
  }
  FUN_1402a8900(puVar9,uVar10,uVar11,3,0,0xffffffffffffffff,0);
  return param_1;
}



// FUNCTION 1477c4ca2 FUN_1477c4ca2 body=320 status=ok
// SIG undefined FUN_1477c4ca2(void)

void FUN_1477c4ca2(uint param_1)

{
  int iVar1;
  undefined *puVar2;
  longlong lVar3;
  undefined1 auStack_48 [36];
  uint local_24;
  uint *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cabb438);
  if (DAT_14cabb3f0 != DAT_14cabb41c) {
    puVar2 = &DAT_14cabb420;
    if (DAT_14cabb428 != (undefined *)0x0) {
      puVar2 = DAT_14cabb428;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)(DAT_14cabb430 - 1U & param_1) * 4);
    while (iVar1 != -1) {
      lVar3 = DAT_14cabb3e8 + (longlong)iVar1 * 0x20;
      if (*(uint *)(DAT_14cabb3e8 + (longlong)iVar1 * 0x20) == param_1) {
        if ((lVar3 != 0) && (lVar3 != -8)) goto LAB_1477c4d65;
        break;
      }
      iVar1 = *(int *)(lVar3 + 0x18);
    }
  }
  local_20 = &local_24;
  FUN_1477ca7a6();
  if (DAT_14cabb3f0 != DAT_14cabb41c) {
    puVar2 = &DAT_14cabb420;
    if (DAT_14cabb428 != (undefined *)0x0) {
      puVar2 = DAT_14cabb428;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)(DAT_14cabb430 - 1U & local_24) * 4);
    while (iVar1 != -1) {
      lVar3 = DAT_14cabb3e8 + (longlong)iVar1 * 0x20;
      if (*(uint *)(DAT_14cabb3e8 + (longlong)iVar1 * 0x20) == local_24) goto LAB_1477c4d44;
      iVar1 = *(int *)(lVar3 + 0x18);
    }
  }
  lVar3 = 0;
LAB_1477c4d44:
  if (*(int *)(lVar3 + 0x14) < 0x80) {
    FUN_1477cacda(lVar3 + 8,0x80);
  }
LAB_1477c4d65:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cabb438);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c4de4 FUN_1477c4de4 body=147 status=ok
// SIG undefined FUN_1477c4de4(void)

void FUN_1477c4de4(uint param_1)

{
  longlong lVar1;
  int iVar2;
  undefined *puVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cabb438);
  if (DAT_14cabb3f0 != DAT_14cabb41c) {
    puVar3 = &DAT_14cabb420;
    if (DAT_14cabb428 != (undefined *)0x0) {
      puVar3 = DAT_14cabb428;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)(DAT_14cabb430 - 1U & param_1) * 4);
    while (iVar2 != -1) {
      lVar1 = DAT_14cabb3e8 + (longlong)iVar2 * 0x20;
      if (*(uint *)(DAT_14cabb3e8 + (longlong)iVar2 * 0x20) == param_1) {
        if ((lVar1 + 8U & 0xfffffffffffffff7) != 0) {
          FUN_1477cad3a(param_1);
        }
        break;
      }
      iVar2 = *(int *)(lVar1 + 0x18);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001477c4e12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cabb438);
  return;
}



// FUNCTION 1477c4e78 FUN_1477c4e78 body=262 status=ok
// SIG undefined FUN_1477c4e78(void)

void FUN_1477c4e78(uint param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  longlong lVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cabb438);
  if (DAT_14cabb3f0 != DAT_14cabb41c) {
    puVar4 = &DAT_14cabb420;
    if (DAT_14cabb428 != (undefined *)0x0) {
      puVar4 = DAT_14cabb428;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(DAT_14cabb430 - 1U & param_1) * 4);
    while (iVar2 != -1) {
      lVar1 = DAT_14cabb3e8 + (longlong)iVar2 * 0x20;
      if (*(uint *)(DAT_14cabb3e8 + (longlong)iVar2 * 0x20) == param_1) {
        if (lVar1 + 8 != 0 && lVar1 != 0) {
          iVar2 = *(int *)(lVar1 + 0x10);
          if ((longlong)iVar2 != 0) {
            lVar3 = *(longlong *)(lVar1 + 8);
            lVar5 = 0;
            do {
              FUN_1402a8900(*(undefined8 *)(lVar3 + lVar5),0,DAT_14c8442c0,3,0,0xffffffffffffffff,0)
              ;
              lVar5 = lVar5 + 8;
            } while ((longlong)iVar2 * 8 != lVar5);
          }
          *(undefined4 *)(lVar1 + 0x10) = 0;
          if (*(int *)(lVar1 + 0x14) != 0) {
            FUN_1477cacda(lVar1 + 8,0);
          }
        }
        break;
      }
      iVar2 = *(int *)(lVar1 + 0x18);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001477c4eb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cabb438);
  return;
}



// FUNCTION 1477c4f7e FUN_1477c4f7e body=524 status=ok
// SIG undefined FUN_1477c4f7e(void)

undefined4 * FUN_1477c4f7e(undefined4 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  *param_1 = 0xffffffff;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 2),4000);
  *(undefined8 *)(param_1 + 0xc) = param_2;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 1;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  param_1[0x2c] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x30),4000);
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70);
  *puVar1 = 0;
  *(undefined8 **)(param_1 + 0x3e) = puVar1;
  *(undefined8 **)(param_1 + 0x40) = puVar1;
  *(undefined8 *)(param_1 + 0x56) = 0;
  param_1[0x58] = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x59) = 0xffffffff00000080;
  param_1[0x5b] = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  param_1[0x60] = 0;
  memset(param_1 + 0x62,0,0xa0);
  param_1[0x8a] = 4;
  param_1[0x8b] = 0;
  *(byte *)(param_1 + 0x8c) = *(byte *)(param_1 + 0x8c) & 0xf8;
  param_1[0x8d] = 0;
  *(undefined8 *)(param_1 + 0x8e) = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x92));
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xa6) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x38,8);
  *puVar1 = 0;
  *(undefined8 **)(param_1 + 0xac) = puVar1;
  *(undefined8 **)(param_1 + 0xae) = puVar1;
  plVar2 = (longlong *)FUN_1405d8a54(1);
  *(longlong **)(param_1 + 0x2e) = plVar2;
  (**(code **)(*plVar2 + 0x10))(plVar2);
  iVar3 = 10000;
  if (DAT_14c761104 < 10000) {
    iVar3 = DAT_14c761104;
  }
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  if ((int)param_1[0x25] < iVar3) {
    FUN_1477d0c72(param_1 + 0x22);
  }
  return param_1;
}



// FUNCTION 1477c518a FUN_1477c518a body=574 status=ok
// SIG undefined FUN_1477c518a(void)

void FUN_1477c518a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar2 = (longlong *)(param_1 + 0x198);
  if (0 < *(int *)(param_1 + 0x1a0)) {
    lVar5 = 0;
    do {
      lVar3 = *plVar2;
      plVar4 = *(longlong **)(lVar3 + lVar5 * 8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4,1);
        lVar3 = *plVar2;
      }
      *(undefined8 *)(lVar3 + lVar5 * 8) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x1a0));
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    if (*(int *)(param_1 + 0x1a4) < 0) {
      FUN_1477d0ce2(plVar2);
    }
  }
  FUN_14018802a(*(undefined8 *)(param_1 + 0xb8));
  FUN_1477c53c8(param_1 + 0x2b0);
  if (*(longlong *)(param_1 + 0x250) != 0) {
    plVar4 = (longlong *)(param_1 + 0x270);
    if (*(longlong **)(param_1 + 0x260) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0x260);
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  FUN_14334dfe8(param_1 + 0x1b8);
  FUN_1477d0c29(*(undefined8 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1b0));
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1400020a8();
  }
  if (*plVar2 != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x180) = 0;
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_1400020a8();
  }
  FUN_1477cae2e(param_1 + 0x138);
  FUN_1477d0c00(*(undefined8 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 0x130));
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1400020a8();
  }
  FUN_1477d0933(*(undefined8 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x120));
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  FUN_1477c541c(param_1 + 0xf8);
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
  lVar5 = 0;
  do {
    FUN_1477d08f9(*(undefined8 *)(param_1 + 0xa0 + lVar5),*(undefined4 *)(param_1 + 0xa8 + lVar5));
    if (*(longlong *)(param_1 + 0xa0 + lVar5) != 0) {
      FUN_1400020a8();
    }
    lVar5 = lVar5 + -0x18;
  } while (lVar5 != -0x30);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 0x60);
  if (plVar2 != (longlong *)0x0) {
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x48);
  if (plVar2 != (longlong *)0x0) {
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001477c53c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 1477c53c8 FUN_1477c53c8 body=84 status=ok
// SIG undefined FUN_1477c53c8(void)

void FUN_1477c53c8(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)**(undefined8 **)(param_1 + 8);
  FUN_1400020a8();
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 8) = puVar1;
    puVar2 = (undefined8 *)*puVar1;
    (*(code *)(&PTR_LAB_14a56f490)[*(byte *)(puVar1 + 4)])(puVar1 + 1);
    FUN_1400020a8(*(undefined8 *)(param_1 + 8));
    puVar1 = puVar2;
  }
  return;
}



// FUNCTION 1477c541c FUN_1477c541c body=93 status=ok
// SIG undefined FUN_1477c541c(void)

void FUN_1477c541c(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 8);
  FUN_1400020a8();
  while (puVar3 != (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 8) = puVar3;
    puVar1 = (undefined8 *)*puVar3;
    if (puVar3[2] != 0) {
      plVar2 = puVar3 + 6;
      if ((longlong *)puVar3[4] != (longlong *)0x0) {
        plVar2 = (longlong *)puVar3[4];
      }
      (**(code **)(*plVar2 + 0x10))(plVar2);
      puVar3 = *(undefined8 **)(param_1 + 8);
    }
    FUN_1400020a8(puVar3);
    puVar3 = puVar1;
  }
  return;
}



// FUNCTION 1477c547a FUN_1477c547a body=113 status=ok
// SIG undefined FUN_1477c547a(void)

void FUN_1477c547a(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_3) {
    FUN_1477d0d12(param_1,param_3);
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1477d0d72(param_1,iVar1);
    }
    *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = *param_2;
  }
  return;
}



// FUNCTION 1477c54ec FUN_1477c54ec body=65 status=ok
// SIG undefined FUN_1477c54ec(void)

void FUN_1477c54ec(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1477d0ee4(param_1,iVar1);
  }
  FUN_1477d0ebb((longlong)iVar1 * 0x540 + *param_1,param_2);
  return;
}



// FUNCTION 1477c552e FUN_1477c552e body=122 status=ok
// SIG undefined FUN_1477c552e(void)

undefined8 * FUN_1477c552e(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = *param_2;
  if (param_1 != param_2) {
    param_1[1] = param_2[1];
    param_2[1] = 0;
    plVar2 = (longlong *)param_2[2];
    plVar3 = (longlong *)param_1[2];
    if (plVar2 != plVar3) {
      param_2[2] = 0;
      param_1[2] = plVar2;
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
  *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  return param_1;
}



// FUNCTION 1477c55a8 FUN_1477c55a8 body=335 status=ok
// SIG undefined FUN_1477c55a8(void)

void FUN_1477c55a8(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  undefined8 local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  lVar3 = *(longlong *)(param_1 + 0x118);
  lVar4 = (longlong)param_2 * 0x540;
  lVar1 = lVar3 + lVar4;
  iVar2 = *(int *)(lVar3 + 0x1e0 + lVar4);
  if (iVar2 != 0) {
    local_50 = *(undefined8 *)(lVar1 + 0x1d8);
    local_44 = *(undefined4 *)(lVar1 + 0x1e4);
    *(undefined8 *)(lVar1 + 0x1d8) = 0;
    *(undefined8 *)(lVar1 + 0x1e0) = 0;
    local_68 = 0;
    local_58 = &PTR_LAB_14a570ec0;
    local_78 = FUN_143354f48;
    local_48 = iVar2;
    FUN_1407461b0(1);
    FUN_1477cb5a3(0,0);
    iVar2 = *(int *)(lVar1 + 0x1e4);
    FUN_1477cb5a3(*(undefined8 *)(lVar1 + 0x1d8),*(undefined4 *)(lVar1 + 0x1e0));
    *(undefined4 *)(lVar1 + 0x1e0) = 0;
    if ((iVar2 < 0) && (*(int *)(lVar1 + 0x1e4) != 0)) {
      FUN_1477d17de(lVar3 + lVar4 + 0x1d8);
    }
  }
  if (*(int *)(lVar1 + 500) < 0) {
    *(undefined4 *)(lVar1 + 0x1f0) = 0;
    FUN_1477d180e(lVar1 + 0x1e8);
  }
  else {
    *(undefined4 *)(lVar1 + 0x1f0) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c56f8 FUN_1477c56f8 body=316 status=ok
// SIG undefined FUN_1477c56f8(void)

void FUN_1477c56f8(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  lVar6 = param_3[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar4 = *param_3;
    lVar8 = 0;
    do {
      if (*(longlong *)(lVar4 + lVar8) != 0) {
        *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(*(longlong *)(lVar4 + lVar8) + 0xc);
        FUN_1477c5836(&local_58,param_2,*(undefined8 *)(lVar4 + lVar8));
        LOCK();
        *(uint *)(local_58 + 0x5c) = ~*(uint *)(lVar4 + 8 + lVar8) & 1;
        UNLOCK();
        iVar3 = (int)param_4[1];
        *(uint *)(param_4 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
          FUN_1477d1758(param_4,iVar3);
        }
        plVar7 = local_50;
        lVar5 = *param_4;
        *(longlong *)(lVar5 + (longlong)iVar3 * 0x10) = local_58;
        *(longlong **)(lVar5 + 8 + (longlong)iVar3 * 0x10) = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_50 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar2 = (int *)((longlong)plVar7 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
              }
            }
          }
        }
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)(int)lVar6 * 0x10 != lVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x0001477c5818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 1477c5836 FUN_1477c5836 body=268 status=ok
// SIG undefined FUN_1477c5836(void)

undefined8 * FUN_1477c5836(undefined8 *param_1,undefined4 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar7 = (longlong *)(**(code **)(*param_3 + 0x2c0))(param_3);
  FUN_14485c47a((longlong)plVar7 + 0x4c,param_3);
  iVar3 = param_2[4];
  *(int *)((longlong)plVar7 + 0x54) = iVar3;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *(undefined4 *)(plVar7 + 0xe) = *param_2;
  *(undefined4 *)((longlong)plVar7 + 0x74) = uVar4;
  *(undefined4 *)(plVar7 + 0xf) = uVar5;
  *(undefined4 *)((longlong)plVar7 + 0x7c) = uVar6;
  plVar7[0x10] = *(longlong *)(param_2 + 4);
  if (iVar3 != -1) {
    *(int *)(plVar7 + 0x10) = iVar3;
  }
  (**(code **)(*plVar7 + 0x18))(plVar7,plVar7 + 0xe);
  *param_1 = plVar7;
  local_30 = (longlong *)FUN_14001cc68(0x18,0x10);
  local_30[1] = (longlong)&DAT_100000001;
  *local_30 = (longlong)&PTR_FUN_14a570ea0;
  local_30[2] = (longlong)plVar7;
  param_1[1] = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  local_38 = plVar7;
  FUN_147d346c4(param_3,&local_38);
  plVar7 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477c5944 FUN_1477c5944 body=94 status=ok
// SIG undefined FUN_1477c5944(void)

bool FUN_1477c5944(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c0);
  if ((longlong)iVar1 != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x1b8) + -4 + (longlong)iVar1 * 4);
    *(int *)(param_1 + 0x1c0) = iVar1 + -1;
    FUN_14479f406(param_1 + 0x1b8);
    *param_2 = iVar2;
    *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x1c8) + (longlong)*param_2) = 1;
  }
  return iVar1 != 0;
}


