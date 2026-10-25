// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145ec8688 FUN_145ec8688 body=123 status=ok
// SIG undefined FUN_145ec8688(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ec8688(void)

{
  _DAT_14c9e1690 = L"BASE";
  DAT_14c9e16ba = 4;
  _DAT_14c9e1698 = FUN_140b35ae4();
  _DAT_14c9e16a0 = DAT_14c9dd4a8;
  _DAT_14c9e16a8 = &LAB_14682652b;
  DAT_14c9dd4a8 = &DAT_14c9e1690;
  DAT_14c9dd4fd = DAT_14c9dd4fd + '\x01';
  _DAT_14c9e16b0 = 0x100000000;
  if (*(char *)(_DAT_14c9e1698 + 100) != '\0') {
    DAT_14c9dd4fe = DAT_14c9dd4fe + '\x01';
  }
  return;
}



// FUNCTION 145ec8704 FUN_145ec8704 body=154 status=ok
// SIG undefined FUN_145ec8704(void)

void FUN_145ec8704(undefined8 param_1)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined1 local_50 [56];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145ec887a(local_50,param_1);
  FUN_145ec87a0(local_50,param_1);
  FUN_14126834e(&DAT_14cb10ae8,local_58,local_50);
  FUN_1401cb1ee(local_50);
  FUN_145ec87a0(local_50,param_1);
  FUN_14126834e(&DAT_14cb10a38,local_58,local_50);
  FUN_1401cb1ee(local_50);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec87a0 FUN_145ec87a0 body=218 status=ok
// SIG undefined FUN_145ec87a0(void)

LPCRITICAL_SECTION FUN_145ec87a0(LPCRITICAL_SECTION param_1,undefined8 param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3cb240;
  LOCK();
  UNLOCK();
  p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar2 = DAT_14c758608 + 1;
  if (p_Var3 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  (p_Var1->ProcessLocksList).Flink = p_Var3;
  *(undefined ***)p_Var1 = &PTR_FUN_14a509090;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  FUN_14485c47a(&(p_Var1->ProcessLocksList).Blink,param_2);
  *(code **)&p_Var1->EntryCount = FUN_140f0afcc;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 145ec887a FUN_145ec887a body=239 status=ok
// SIG undefined FUN_145ec887a(void)

undefined8 FUN_145ec887a(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_LAB_14a1c8660;
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
  *local_30 = &PTR_FUN_14a509020;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = &LAB_140f0afc6;
  FUN_140aa43ac(&DAT_14cb10a20,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec8972 FUN_145ec8972 body=227 status=ok
// SIG undefined FUN_145ec8972(void)

undefined8 * FUN_145ec8972(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140e3eac6();
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  *param_1 = &PTR_FUN_14ad731a0;
  local_48 = DAT_14c8461b4;
  param_1[6] = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_1 + 7) = 1;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  uVar1 = FUN_144830b78((longlong)param_1 + 0x44,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar1;
  param_1[6] = &PTR_FUN_14ad6b4b0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x3f80000000000000;
  FUN_145ec8a56(param_1 + 6,&local_48);
  param_1[0xc] = 0;
  uVar1 = FUN_144830b78(param_1 + 0xd,&DAT_14cb42160);
  *(undefined4 *)(param_1 + 0xd) = uVar1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec8a56 FUN_145ec8a56 body=172 status=ok
// SIG undefined FUN_145ec8a56(void)

void FUN_145ec8a56(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 8) = 2;
  uVar1 = *param_2;
  local_30 = (undefined8 *)0x0;
  local_28 = 2;
  FUN_1401f7a02(&local_30,2,0);
  *local_30 = uVar1;
  local_30[1] = uVar1;
  if ((undefined8 **)(param_1 + 0x18) == &local_30) {
    if (local_30 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 **)(param_1 + 0x18) = local_30;
    *(undefined4 *)(param_1 + 0x20) = local_28;
    *(undefined4 *)(param_1 + 0x24) = local_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec8b04 FUN_145ec8b04 body=55 status=ok
// SIG undefined FUN_145ec8b04(void)

void FUN_145ec8b04(longlong *param_1)

{
  FUN_145ec8b3c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ec8b3c FUN_145ec8b3c body=352 status=ok
// SIG undefined FUN_145ec8b3c(void)

void FUN_145ec8b3c(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      if (*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1446f4a44(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145ec8c9e FUN_145ec8c9e body=265 status=ok
// SIG undefined FUN_145ec8c9e(void)

void FUN_145ec8c9e(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14bccf130;
  if (((param_1[1] != 0) && (param_1[2] != 0)) && (0 < *(int *)(param_1[2] + 8))) {
    FUN_1401cb356();
    local_28 = param_1[1];
    local_20 = param_1[2];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    plVar3 = (longlong *)param_1[2];
    param_1[1] = 0;
    param_1[2] = 0;
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
  plVar3 = (longlong *)param_1[0x10];
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
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_145ec8da8(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec8da8 FUN_145ec8da8 body=53 status=ok
// SIG undefined FUN_145ec8da8(void)

void FUN_145ec8da8(longlong *param_1)

{
  FUN_145ec8dde();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ec8dde FUN_145ec8dde body=90 status=ok
// SIG undefined FUN_145ec8dde(void)

void FUN_145ec8dde(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145ec8e38 FUN_145ec8e38 body=251 status=ok
// SIG undefined FUN_145ec8e38(void)

void FUN_145ec8e38(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  uint local_40;
  int local_3c;
  uint *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_2;
  local_3c = param_3;
  if (*(int *)(param_1 + 0x3c0) != *(int *)(param_1 + 0x3ec)) {
    lVar2 = param_1 + 0x3f0;
    if (*(longlong *)(param_1 + 0x3f8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x3f8);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x400) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x3b8);
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x10;
        if (*(uint *)(lVar2 + (longlong)iVar3 * 0x10) == param_2) {
          if (((int *)(lVar1 + 4) != (int *)0x0 && lVar1 != 0) && (*(int *)(lVar1 + 4) == param_3))
          goto LAB_145ec8ea3;
          break;
        }
        iVar3 = *(int *)(lVar1 + 8);
      } while (iVar3 != -1);
    }
  }
  local_38 = &local_40;
  local_30 = &local_3c;
  FUN_145ec8fe0((longlong *)(param_1 + 0x3b8),local_24);
  FUN_145ec8f34(param_1 + 0x270,local_40,local_3c);
LAB_145ec8ea3:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ec8f34 FUN_145ec8f34 body=171 status=ok
// SIG undefined FUN_145ec8f34(void)

void FUN_145ec8f34(longlong *param_1,undefined4 param_2,undefined4 param_3)

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
        goto LAB_145ec8fc9;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145ec8fc9:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145ec8fe0 FUN_145ec8fe0 body=297 status=ok
// SIG undefined FUN_145ec8fe0(void)

undefined4 * FUN_145ec8fe0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145ec91a2(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_40 = uVar4;
  local_40[1] = *puVar1;
  local_40[2] = 0xffffffff;
  local_4c = local_48[0];
  local_58 = 0;
  cVar2 = FUN_145ec910a(param_1,uVar4,local_40);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[3] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[2] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_145ec9288(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec910a FUN_145ec910a body=152 status=ok
// SIG undefined FUN_145ec910a(void)

void FUN_145ec910a(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar4 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar4 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_146062ad4(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          break;
        }
        iVar4 = *(int *)(puVar1 + 1);
        uVar2 = 0;
      } while (iVar4 != -1);
      goto LAB_145ec912e;
    }
  }
  uVar2 = 0;
LAB_145ec912e:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 145ec91a2 FUN_145ec91a2 body=230 status=ok
// SIG undefined FUN_145ec91a2(void)

int * FUN_145ec91a2(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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



// FUNCTION 145ec9288 FUN_145ec9288 body=431 status=ok
// SIG undefined FUN_145ec9288(void)

void FUN_145ec9288(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
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



// FUNCTION 145ec9438 FUN_145ec9438 body=245 status=ok
// SIG undefined FUN_145ec9438(void)

void FUN_145ec9438(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_38;
  uVar1 = FUN_14477b664(uStack_30);
  local_58 = FUN_14477b664(uVar1);
  local_50 = local_28;
  FUN_145ec952e(local_48,&local_60);
  FUN_140008f88(param_3,local_48);
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec952e FUN_145ec952e body=265 status=ok
// SIG undefined FUN_145ec952e(void)

longlong * FUN_145ec952e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = param_2[1];
  if (lVar5 == 0) {
    uVar3 = FUN_140da11f2();
    lVar5 = FUN_14477b664(uVar3);
    param_2[1] = lVar5;
  }
  lVar4 = param_2[2];
  if (lVar4 != 0) {
LAB_145ec95b2:
    plVar1 = *(longlong **)(lVar4 + 0x18);
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar4 + 0x20);
    goto LAB_145ec95ca;
  }
  if ((lVar5 != 0) && (*param_2 != 0)) {
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 != '\0') {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,param_2);
        param_2[2] = lVar4;
        if (lVar4 != 0) goto LAB_145ec95b2;
        goto LAB_145ec95f4;
      }
    }
    param_2[2] = 0;
  }
LAB_145ec95f4:
  FUN_140056680(local_30,L"Missing UI Name");
  FUN_140233b1a(param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
LAB_145ec95ca:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec9638 FUN_145ec9638 body=428 status=ok
// SIG undefined FUN_145ec9638(void)

void FUN_145ec9638(void)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  ulonglong local_30;
  
  uVar1 = DAT_14ca8527c;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  if (DAT_14ca8527c != uVar2) {
    puVar5 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar6 = puVar5 + 3;
    DAT_14ca8527c = uVar2;
    if (DAT_14ca85108 < puVar6) {
      FUN_140023dd8(&DAT_14ca85100,0x20);
      puVar5 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar6 = puVar5 + 3;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar6;
    *DAT_14ca85130 = puVar5;
    uVar2 = DAT_14ca8527c;
    DAT_14ca85130 = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_FUN_14a1fb2c0;
    *(uint *)(puVar5 + 2) = uVar2;
  }
  FUN_145ec97e6(&DAT_14ca85100);
  uVar3 = FUN_14003f496();
  uVar4 = FUN_144a89c34();
  local_38 = &DAT_14ca85100;
  FUN_1415840b8(uVar3,&local_38);
  FUN_1415840b8(uVar4,&local_38);
  if (DAT_14ca8527c != uVar1) {
    puVar5 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar6 = puVar5 + 3;
    DAT_14ca8527c = uVar1;
    if (DAT_14ca85108 < puVar6) {
      FUN_140023dd8(&DAT_14ca85100,0x20);
      puVar5 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar6 = puVar5 + 3;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar6;
    *DAT_14ca85130 = puVar5;
    uVar1 = DAT_14ca8527c;
    DAT_14ca85130 = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_FUN_14a1fb2c0;
    *(uint *)(puVar5 + 2) = uVar1;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec97e6 FUN_145ec97e6 body=18 status=ok
// SIG undefined FUN_145ec97e6(void)

void FUN_145ec97e6(undefined8 param_1)

{
  if (DAT_14ca83900 != 0) {
    FUN_14002049c(param_1,1);
    return;
  }
  return;
}



// FUNCTION 145ec9804 FUN_145ec9804 body=193 status=ok
// SIG undefined FUN_145ec9804(void)

undefined8 * FUN_145ec9804(undefined8 *param_1)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a75f800;
  local_38 = L"DefaultedText";
  local_30 = 0xd;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"TextPropertyTest";
  local_30 = 0x10;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(param_1 + 5,local_40,local_3c,L"DefaultValue");
  FUN_144a5dc74(param_1 + 7);
  FUN_144a5dc74(param_1 + 9);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec98d2 FUN_145ec98d2 body=193 status=ok
// SIG undefined FUN_145ec98d2(void)

undefined8 * FUN_145ec98d2(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14a9f3150;
  FUN_1446f470e(&local_20,L"SceneComp",1);
  uVar1 = FUN_144a799b0();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x39] = lVar2;
  *(undefined1 *)(lVar2 + 0x1fb) = 0;
  FUN_1405bab3a(param_1,1);
  FUN_1403121a6(param_1,0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ec9994 FUN_145ec9994 body=156 status=ok
// SIG undefined FUN_145ec9994(void)

void FUN_145ec9994(longlong param_1)

{
  char cVar1;
  int iVar2;
  wchar_t *_Str;
  size_t sVar3;
  
  iVar2 = *(int *)(param_1 + 8) + -1;
  if (*(int *)(param_1 + 8) == 0) {
    iVar2 = 0;
  }
  _Str = AK::StreamMgr::GetCurrentLanguage();
  sVar3 = wcslen(_Str);
  if (0xfffffffffffffefb < (sVar3 + (longlong)iVar2) - 0x103) {
    FUN_144a787a6(&DAT_14cb25968,param_1);
    cVar1 = FUN_144a38768(&DAT_14cb25968,&DAT_149e065c6,1,1);
    if (cVar1 == '\0') {
      FUN_1400020e8(&DAT_14cb25968,&DAT_149e065c6,1);
    }
    FUN_145ec9a30(&DAT_14cb25968);
    return;
  }
  return;
}



// FUNCTION 145ec9a30 FUN_145ec9a30 body=49 status=ok
// SIG undefined FUN_145ec9a30(void)

void FUN_145ec9a30(undefined8 *param_1)

{
  longlong *plVar1;
  undefined2 *puVar2;
  
  plVar1 = (longlong *)FUN_14054d1d4();
  if (*(int *)(param_1 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x000145ec9a5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x50))(plVar1,puVar2,*(code **)(*plVar1 + 0x50));
  return;
}



// FUNCTION 145ec9a62 FUN_145ec9a62 body=53 status=ok
// SIG undefined FUN_145ec9a62(void)

void FUN_145ec9a62(longlong *param_1)

{
  FUN_145ec9a98();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ec9a98 FUN_145ec9a98 body=356 status=ok
// SIG undefined FUN_145ec9a98(void)

void FUN_145ec9a98(longlong *param_1)

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
      plVar4 = *(longlong **)(*local_70 + 8 + (longlong)iStack_54 * 0x10);
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
    FUN_14474875a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ec9bfe FUN_145ec9bfe body=37 status=ok
// SIG undefined FUN_145ec9bfe(void)

void FUN_145ec9bfe(undefined8 param_1,void *param_2)

{
  memset(param_2,0,200);
  FUN_145ec9c24(param_2);
  return;
}



// FUNCTION 145ec9c24 FUN_145ec9c24 body=168 status=ok
// SIG undefined FUN_145ec9c24(void)

void FUN_145ec9c24(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 0xc) = 0x44870000461c4000;
  *(undefined4 *)(param_1 + 0x14) = 0x41a00000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0x3f00000040400000;
  *(undefined4 *)(param_1 + 0x34) = 2;
  param_1[0x38] = 1;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x79) = 0;
  *(undefined8 *)(param_1 + 0x81) = 0;
  *(undefined1 **)(param_1 + 0x8c) = &DAT_3f8000003f800000;
  *(undefined8 *)(param_1 + 0x94) = 0x3f0000003f800000;
  *(undefined8 *)(param_1 + 0x9c) = 0x3f8000003e800000;
  *(undefined8 *)(param_1 + 0xa4) = 0x3dcccccd3f800000;
  *(undefined4 *)(param_1 + 0xac) = 0x3e4ccccd;
  *(undefined8 *)(param_1 + 0xb0) = 0xbfe0000000000000;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0x43fa0000;
  return;
}



// FUNCTION 145ec9ccc FUN_145ec9ccc body=43 status=ok
// SIG undefined FUN_145ec9ccc(void)

undefined8 FUN_145ec9ccc(undefined8 param_1,int param_2)

{
  FUN_145ec9cf8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x7f8);
  }
  return param_1;
}



// FUNCTION 145ec9cf8 FUN_145ec9cf8 body=162 status=ok
// SIG undefined FUN_145ec9cf8(void)

void FUN_145ec9cf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8ad640;
  if (param_1[0xfa] != 0) {
    FUN_1400020a8();
  }
  FUN_141321572(param_1 + 0xeb);
  if (param_1[0xe8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe2] != 0) {
    FUN_1400020a8();
  }
  FUN_145a5bc32(param_1 + 0xd4);
  FUN_14587bf12(param_1 + 0xc4);
  if (param_1[0xc1] != 0) {
    FUN_1400020a8();
  }
  FUN_1458ec81e(param_1);
  return;
}



// FUNCTION 145ec9d9a FUN_145ec9d9a body=25 status=ok
// SIG undefined FUN_145ec9d9a(void)

undefined8 FUN_145ec9d9a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145ec9dc8 FUN_145ec9dc8 body=160 status=ok
// SIG undefined FUN_145ec9dc8(void)

void FUN_145ec9dc8(longlong *param_1,undefined4 param_2)

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
        goto LAB_145ec9e53;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145ec9e53:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145ec9e68 FUN_145ec9e68 body=26 status=ok
// SIG undefined FUN_145ec9e68(void)

void FUN_145ec9e68(undefined8 param_1)

{
  switchD_143c3d4dc::caseD_1d();
  FUN_145ec9e82(param_1);
  return;
}



// FUNCTION 145ec9e82 FUN_145ec9e82 body=179 status=ok
// SIG undefined FUN_145ec9e82(void)

void FUN_145ec9e82(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  
  lVar1 = param_1 + 0x130;
  cVar3 = FUN_144729dda(lVar1);
  if (cVar3 == '\0') {
    return;
  }
  lVar2 = FUN_14479d2ce(lVar1);
  FUN_140457ffc(lVar2 + 0xb8,param_1);
  lVar2 = FUN_14479d2ce(lVar1);
  FUN_140457ffc(lVar2 + 0xd0,param_1);
  lVar2 = FUN_14479d2ce(lVar1);
  FUN_140457ffc(lVar2 + 0xe8,param_1);
  lVar2 = FUN_14479d2ce(lVar1);
  FUN_140457ffc(lVar2 + 0x100,param_1);
  lVar2 = FUN_14479d2ce(lVar1);
  FUN_140457ffc(lVar2 + 0x118,param_1);
  lVar1 = FUN_14479d2ce(lVar1);
  FUN_140457ffc(lVar1 + 0x130,param_1);
  return;
}



// FUNCTION 145ec9f3e FUN_145ec9f3e body=197 status=ok
// SIG undefined FUN_145ec9f3e(void)

undefined8 * FUN_145ec9f3e(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14bd30e00;
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
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x38d1b717;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 1;
  param_1[0x12] = 0x3ff0000000000000;
  param_1[0x13] = 0x3ff0000000000000;
  param_1[0x14] = 0x4000000000000000;
  param_1[0x15] = 0x403e000000000000;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0x3fe0000000000000;
  param_1[0x18] = 0x3f80000000000000;
  param_1[0x19] = 0x3f80000000000000;
  param_1[0x1a] = &DAT_3f8000003f800000;
  param_1[0x1b] = 0x3f80000000000000;
  *(undefined2 *)(param_1 + 0x1c) = 0xc10;
  return param_1;
}



// FUNCTION 145eca004 FUN_145eca004 body=40 status=ok
// SIG undefined FUN_145eca004(void)

undefined8 FUN_145eca004(undefined8 param_1,int param_2)

{
  FUN_145eca02c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145eca02c FUN_145eca02c body=165 status=ok
// SIG undefined FUN_145eca02c(void)

void FUN_145eca02c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd878f0;
  param_1[5] = &PTR_FUN_14bd87c80;
  param_1[0x13] = &PTR_FUN_14bd87ca0;
  param_1[0x14] = &PTR_FUN_14bd87cc0;
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  FUN_1411412f4(param_1);
  return;
}



// FUNCTION 145eca0da FUN_145eca0da body=197 status=ok
// SIG undefined FUN_145eca0da(void)

undefined8 * FUN_145eca0da(undefined8 *param_1)

{
  FUN_1458de9a4();
  *param_1 = &PTR_FUN_14bd95760;
  param_1[5] = &PTR_FUN_14bd95b20;
  param_1[0x13] = &PTR_FUN_14bd95b40;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  FUN_1457e37e0(param_1 + 0x20);
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  return param_1;
}



// FUNCTION 145eca1a0 FUN_145eca1a0 body=40 status=ok
// SIG undefined FUN_145eca1a0(void)

undefined8 FUN_145eca1a0(undefined8 param_1,int param_2)

{
  FUN_145eca1c8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145eca1c8 FUN_145eca1c8 body=308 status=ok
// SIG undefined FUN_145eca1c8(void)

void FUN_145eca1c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc51230;
  if (*(char *)(param_1 + 0x7e) == '\x01') {
    *(undefined1 *)(param_1 + 0x7e) = 0;
  }
  if (*(char *)(param_1 + 0x70) == '\x01') {
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  if (*(char *)(param_1 + 0x62) == '\x01') {
    *(undefined1 *)(param_1 + 0x62) = 0;
  }
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_140fed6e2(param_1 + 0x4f);
  FUN_140fed6e2(param_1 + 0x4b);
  FUN_145eca2fc(param_1 + 0x3c);
  FUN_145eca3a4(param_1 + 0x2d);
  FUN_145936a30(param_1 + 0x1e);
  FUN_140fed6e2(param_1 + 0x1a);
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140fed60e(param_1);
  return;
}



// FUNCTION 145eca2fc FUN_145eca2fc body=111 status=ok
// SIG undefined FUN_145eca2fc(void)

void FUN_145eca2fc(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    plVar2 = *(longlong **)(param_1 + 0x70);
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
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145eca36c(param_1);
  return;
}



// FUNCTION 145eca36c FUN_145eca36c body=55 status=ok
// SIG undefined FUN_145eca36c(void)

void FUN_145eca36c(longlong *param_1)

{
  FUN_145eca5c8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145eca3a4 FUN_145eca3a4 body=111 status=ok
// SIG undefined FUN_145eca3a4(void)

void FUN_145eca3a4(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    plVar2 = *(longlong **)(param_1 + 0x70);
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
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145eca414(param_1);
  return;
}



// FUNCTION 145eca414 FUN_145eca414 body=55 status=ok
// SIG undefined FUN_145eca414(void)

void FUN_145eca414(longlong *param_1)

{
  FUN_145eca44c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145eca44c FUN_145eca44c body=378 status=ok
// SIG undefined FUN_145eca44c(void)

void FUN_145eca44c(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      FUN_14934dace((longlong)iStack_54 * 0x48 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1403af08a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145eca5c8 FUN_145eca5c8 body=378 status=ok
// SIG undefined FUN_145eca5c8(void)

void FUN_145eca5c8(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      FUN_14934db0c((longlong)iStack_54 * 0x48 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1403af08a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145eca744 FUN_145eca744 body=1617 status=ok
// SIG undefined FUN_145eca744(void)

void FUN_145eca744(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  longlong local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined2 local_13c;
  undefined2 uStack_13a;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined2 local_120;
  undefined1 local_11e;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined2 local_f8;
  undefined1 local_f0;
  char local_e8;
  ushort local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined4 local_bf;
  undefined1 local_bb;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined2 local_78;
  undefined1 local_70;
  char local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1414d706e();
  local_c0 = 0;
  local_c8 = 0;
  local_b8 = DAT_14c8464e0;
  uStack_b0 = DAT_14c8464e8;
  local_a8 = DAT_14c8464f0;
  local_a0 = 0;
  local_9e = 0;
  local_90 = (undefined4)DAT_14c8464f8;
  uStack_8c = DAT_14c8464f8._4_4_;
  uStack_88 = (undefined4)DAT_14c846500;
  uStack_84 = DAT_14c846500._4_4_;
  local_80 = DAT_14c846508;
  local_98 = 0;
  local_78 = 0x18;
  local_70 = 5;
  local_68 = ((DAT_14c9a8ab4 & 0x20) == 0) * '\x05';
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_bb = 0;
  local_bf = 0;
  local_5f = 1;
  *(undefined8 *)(param_1 + 0x540) = *(undefined8 *)(param_1 + 0x10);
  uVar3 = DAT_14cbcaaa0;
  uVar1 = FUN_1408d77e6();
  lVar2 = FUN_140c48046(param_1 + 0x80,uVar1,uVar3,0);
  if (lVar2 != 0) {
    local_148 = 0;
    uVar3 = FUN_140c4880e();
    lVar4 = FUN_140c47e50(lVar2,uVar3,&local_148);
    if (lVar4 != 0) {
      FUN_144983130(lVar4 + 0x88,param_1 + 0x198);
      *(undefined1 *)(lVar4 + 0x80) = *(undefined1 *)(param_1 + 0x2c3);
      local_140 = *(undefined4 *)(param_1 + 0x2c4);
      local_148 = 0;
      local_128 = CONCAT62(local_128._2_6_,4);
      local_120 = CONCAT11(local_120._1_1_,3);
      local_118 = CONCAT71(local_118._1_7_,((DAT_14c9a8874 & 0x20) == 0) * '\x03');
      FUN_1403719a4(lVar4 + 200,&local_148);
      FUN_144a2da94(&local_148);
      FUN_140c48b0c(lVar4,*(undefined1 *)(param_1 + 0x2c2));
    }
    uVar3 = FUN_140a48832();
    lVar4 = FUN_140c483dc(lVar2,uVar3,&DAT_14cbcaac0,0);
    if (lVar4 != 0) {
      *(undefined1 *)(lVar4 + 0x1c) = *(undefined1 *)(param_1 + 0x2c8);
      local_148 = 0;
      uVar3 = FUN_140ffa760();
      lVar5 = FUN_140c47e50(lVar4,uVar3,&local_148);
      if (lVar5 != 0) {
        FUN_144955a78(lVar5 + 0x98,&local_c8);
        *(undefined4 *)(lVar5 + 0x19c) = 1;
        FUN_14054d68c(lVar5 + 0x1e8,param_1 + 0x2d0);
        *(undefined1 *)(lVar5 + 0x460) = 0;
      }
      local_148 = 0;
      uVar3 = FUN_140c4800c();
      lVar4 = FUN_140c47e50(lVar4,uVar3,&local_148);
      if (lVar4 != 0) {
        FUN_144983130(lVar4 + 0x80,param_1 + 0x198);
        local_150 = (longlong)&local_128 + 4;
        local_148 = DAT_14cb72618;
        local_140 = CONCAT31(local_140._1_3_,*(char *)(param_1 + 0x2c9) == '\x01');
        local_13c = (undefined2)DAT_14cb72620;
        uStack_13a = (undefined2)((ulonglong)DAT_14cb72620 >> 0x10);
        uStack_138 = (undefined4)((ulonglong)DAT_14cb72620 >> 0x20);
        uStack_134 = CONCAT31(uStack_134._1_3_,*(undefined1 *)(param_1 + 0x2ca));
        uStack_130 = DAT_14cb72628;
        local_128 = CONCAT71(local_128._1_7_,*(undefined1 *)(param_1 + 0x2cb));
        local_158 = &local_148;
        FUN_140c482d4(lVar4);
      }
    }
    uVar3 = FUN_140a48832();
    lVar4 = FUN_140c483dc(lVar2,uVar3,&DAT_14cbcaad8,0);
    if (lVar4 != 0) {
      local_148 = 0;
      uVar3 = FUN_140c4800c();
      plVar6 = (longlong *)FUN_140c47e50(lVar4,uVar3,&local_148);
      if (plVar6 != (longlong *)0x0) {
        FUN_144983130(plVar6 + 0x10,param_1 + 0x198);
        *(undefined1 *)(plVar6 + 0x54) = 1;
        FUN_144983130(plVar6 + 0x4d,param_1 + 0x1d8);
        FUN_141584160(plVar6,2);
        *(undefined1 *)(plVar6 + 0x3b) = 1;
        FUN_144983130(plVar6 + 0x1d,param_1 + 0x1d8);
        FUN_144983130(plVar6 + 0x2b,param_1 + 0x210);
        *(undefined1 *)(plVar6 + 0x32) = *(undefined1 *)(param_1 + 0x248);
        *(undefined1 *)(plVar6 + 0x3a) = *(undefined1 *)(param_1 + 0x2c0);
        FUN_144983130(plVar6 + 0x33,param_1 + 0x288);
        *(undefined1 *)(plVar6 + 0x44) = *(undefined1 *)(param_1 + 0x249);
        FUN_144983130(plVar6 + 0x45,param_1 + 0x250);
        (**(code **)(*plVar6 + 0x90))(plVar6);
      }
      local_148 = 0;
      uVar3 = FUN_140c4829a();
      lVar4 = FUN_140c47e50(lVar4,uVar3,&local_148);
      if (lVar4 != 0) {
        *(undefined1 *)(lVar4 + 0x1c) = *(undefined1 *)(param_1 + 0x2c1);
        FUN_144983130(lVar4 + 0x80,param_1 + 0x198);
        if (*(longlong *)(param_1 + 0x1d0) == 0) {
          local_140 = 0;
        }
        else {
          local_140 = *(undefined4 *)(*(longlong *)(param_1 + 0x1d0) + 0x10c);
        }
        local_148 = 0;
        local_128 = CONCAT62(local_128._2_6_,4);
        local_120 = CONCAT11(local_120._1_1_,3);
        local_118 = CONCAT71(local_118._1_7_,((DAT_14c9a8874 & 0x20) == 0) * '\x03');
        FUN_1403719a4(lVar4 + 0xb8,&local_148);
        FUN_144a2da94(&local_148);
      }
    }
    uVar3 = FUN_140a48832();
    lVar2 = FUN_140c483dc(lVar2,uVar3,&DAT_14cbcaae0,0);
    if (lVar2 != 0) {
      local_148 = 0;
      uVar3 = FUN_145ecad96();
      lVar2 = FUN_140c47e50(lVar2,uVar3,&local_148);
      if (lVar2 != 0) {
        *(undefined4 *)(lVar2 + 0x19c) = 1;
        FUN_144983130(lVar2 + 0x1e8,param_1 + 0x198);
        lVar4 = *(longlong *)(param_1 + 0x1d0);
        if (DAT_14c950c29 == '\x01') {
          if (lVar4 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar4 = *(longlong *)(param_1 + 0x1d0);
          }
        }
        *(longlong *)(lVar2 + 0x220) = lVar4;
        *(undefined1 *)(lVar2 + 0x228) = *(undefined1 *)(param_1 + 0x2c1);
        *(byte *)(lVar2 + 0x229) = *(byte *)(param_1 + 0x548) ^ 1;
        if (*(char *)(param_1 + 0x548) == '\x01') {
          lVar4 = *(longlong *)(param_1 + 0x1d0);
          if (lVar4 == 0) {
            uVar7 = 0;
            uVar8 = 0;
          }
          else {
            uVar8 = *(undefined4 *)(lVar4 + 0x104);
            uVar7 = *(undefined4 *)(lVar4 + 0x10c);
          }
          local_148 = 0;
          local_140 = 0x1000100;
          local_13c = 1;
          uStack_138 = (undefined4)DAT_14c8464e0;
          uStack_134 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
          uStack_130 = DAT_14c8464e8;
          local_128 = DAT_14c8464f0;
          local_120 = 0;
          local_11e = 0;
          local_110 = (undefined4)DAT_14c8464f8;
          uStack_10c = DAT_14c8464f8._4_4_;
          uStack_108 = (undefined4)DAT_14c846500;
          uStack_104 = DAT_14c846500._4_4_;
          local_100 = DAT_14c846508;
          local_118 = 0;
          local_f8 = 0x18;
          local_f0 = 5;
          local_e8 = ((DAT_14c9a8ab4 & 0x20) == 0) * '\x05';
          local_e0 = 0x100;
          local_d8 = 0;
          local_d0 = 0;
          FUN_1437fe536(&local_148,uVar7,uVar8,0);
          local_e0 = local_e0 & 0xff;
          FUN_144955a78(lVar2 + 0x98,&local_148);
          FUN_144a2da94(&local_118);
        }
      }
    }
  }
  FUN_144a2da94(&local_98);
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ecad96 FUN_145ecad96 body=57 status=ok
// SIG undefined FUN_145ecad96(void)

void FUN_145ecad96(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0c50 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0c50 = FUN_140002ddd(FUN_1465abfab,uVar1,L"GbxBrainAspectSettings_Charge");
  }
  return;
}



// FUNCTION 145ecadd0 FUN_145ecadd0 body=76 status=ok
// SIG undefined FUN_145ecadd0(void)

void FUN_145ecadd0(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar3 = 1;
  }
  else {
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
  FUN_1410ff6f8(param_1);
  return;
}



// FUNCTION 145ecae1c FUN_145ecae1c body=205 status=ok
// SIG undefined FUN_145ecae1c(void)

void FUN_145ecae1c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar7 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        iVar5 = (int)uVar7;
        if (iVar3 < iVar5) {
          lVar6 = (longlong)iVar5 * 0x68;
          iVar5 = *(int *)(lVar2 + lVar6);
          iVar1 = *(int *)(lVar2 + 4 + lVar6);
          uVar7 = (ulonglong)iVar1;
          if (uVar7 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar7 * 0x68) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x68) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar7 = (ulonglong)*(uint *)(lVar2 + 4 + (longlong)iVar5 * 0x68);
        }
      } while ((int)uVar7 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar4) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144a6134a(param_1 + 2,iVar4,(int)param_1[5] - iVar4);
    iVar5 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) != iVar5) {
    FUN_14059f004(param_1,iVar5);
    return;
  }
  return;
}



// FUNCTION 145ecaeea FUN_145ecaeea body=284 status=ok
// SIG undefined FUN_145ecaeea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ecaeea(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca52120) {
    FUN_144b3d300(&DAT_14ca52120);
    if (DAT_14ca52120 == -1) {
      FUN_145ecb006();
      FUN_140db5666(&DAT_14ca52078,0,&DAT_14ca52010,L"TModulatedShadowProjection<1>",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472f0a36,
                    FUN_1472f0b04,&LAB_1472f0b94,&LAB_1472f0bda,&LAB_14712ac0c,&LAB_14712ac08,0x150,
                    0);
      _DAT_14ca52078 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049c0a);
      _Init_thread_footer(&DAT_14ca52120);
    }
  }
  return &DAT_14ca52078;
}



// FUNCTION 145ecb006 FUN_145ecb006 body=210 status=ok
// SIG undefined FUN_145ecb006(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecb006(void)

{
  if ((DAT_14ca52077 & 2) == 0) {
    DAT_14ca52077 = DAT_14ca52077 | 2;
    _DAT_14ca52018 = L"TModulatedShadowProjection<1>";
    _DAT_14ca52030 = FUN_146826540;
    _DAT_14ca52038 = FUN_146825d77;
    _DAT_14ca52040 = FUN_146825fd6;
    _DAT_14ca52048 = FUN_1407e02ea;
    _DAT_14ca52050 = FUN_146826273;
    _DAT_14ca52028 = FUN_1472f0fc8;
    _DAT_14ca52068 = 0xffffffff00000150;
    _DAT_14ca52070 = 8;
    DAT_14ca52074 = 0;
    _DAT_14ca52058 = &LAB_1472f0ff4;
    FUN_145ecb3aa();
    FUN_145ecb0d8();
    FUN_1407e00cc(&DAT_14ca52010);
    return;
  }
  return;
}



// FUNCTION 145ecb0d8 FUN_145ecb0d8 body=133 status=ok
// SIG undefined FUN_145ecb0d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecb0d8(void)

{
  _DAT_14ca58b90 = L"BASE";
  DAT_14ca58bba = 4;
  FUN_145ecb15e();
  _DAT_14ca58ba0 = DAT_14ca52020;
  _DAT_14ca58b98 = &DAT_14ca51fa0;
  _DAT_14ca58ba8 = &LAB_14682652b;
  DAT_14ca52020 = &DAT_14ca58b90;
  DAT_14ca52075 = DAT_14ca52075 + '\x01';
  _DAT_14ca58bb0 = 0x100000000;
  if (DAT_14ca52004 != '\0') {
    DAT_14ca52076 = DAT_14ca52076 + '\x01';
  }
  return;
}



// FUNCTION 145ecb15e FUN_145ecb15e body=210 status=ok
// SIG undefined FUN_145ecb15e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecb15e(void)

{
  if ((DAT_14ca52007 & 2) == 0) {
    DAT_14ca52007 = DAT_14ca52007 | 2;
    _DAT_14ca51fa8 = L"FShadowModulatedProjectionPS1";
    _DAT_14ca51fc0 = FUN_146826540;
    _DAT_14ca51fc8 = FUN_146825d77;
    _DAT_14ca51fd0 = FUN_146825fd6;
    _DAT_14ca51fd8 = FUN_1407e02ea;
    _DAT_14ca51fe0 = FUN_146826273;
    _DAT_14ca51fb8 = FUN_1472f0f98;
    _DAT_14ca51ff8 = 0xffffffff00000148;
    _DAT_14ca52000 = 8;
    DAT_14ca52004 = 0;
    _DAT_14ca51fe8 = &LAB_1472f0fc4;
    FUN_145ecb230();
    FUN_145ecb324();
    FUN_1407e00cc(&DAT_14ca51fa0);
    return;
  }
  return;
}



// FUNCTION 145ecb230 FUN_145ecb230 body=121 status=ok
// SIG undefined FUN_145ecb230(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecb230(void)

{
  FUN_145ecb2aa();
  _DAT_14ca58aa0 = L"ProjectionParameters";
  DAT_14ca58aca = FUN_140850cc5();
  _DAT_14ca58aa8 = FUN_14142e7bc();
  _DAT_14ca58ab8 = &LAB_14682652b;
  _DAT_14ca58ac0 = 0x1000000e0;
  _DAT_14ca58ac8 = 0;
  _DAT_14ca58ab0 = DAT_14ca51fb0;
  DAT_14ca51fb0 = &DAT_14ca58aa0;
  return;
}



// FUNCTION 145ecb2aa FUN_145ecb2aa body=121 status=ok
// SIG undefined FUN_145ecb2aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecb2aa(void)

{
  FUN_145ecb482();
  _DAT_14ca58ad0 = L"ShadowFadeFraction";
  DAT_14ca58afa = FUN_140850cc5();
  _DAT_14ca58ad8 = FUN_140ec6960();
  _DAT_14ca58ae8 = &LAB_14682652b;
  _DAT_14ca58af0 = 0x100000130;
  _DAT_14ca58af8 = 0;
  _DAT_14ca58ae0 = DAT_14ca51fb0;
  DAT_14ca51fb0 = &DAT_14ca58ad0;
  return;
}



// FUNCTION 145ecb324 FUN_145ecb324 body=133 status=ok
// SIG undefined FUN_145ecb324(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecb324(void)

{
  _DAT_14ca58b60 = L"BASE";
  DAT_14ca58b8a = 4;
  FUN_1411c95a0();
  _DAT_14ca58b70 = DAT_14ca51fb0;
  _DAT_14ca58b68 = &DAT_14ca4ff98;
  _DAT_14ca58b78 = &LAB_14682652b;
  DAT_14ca51fb0 = &DAT_14ca58b60;
  DAT_14ca52005 = DAT_14ca52005 + '\x01';
  _DAT_14ca58b80 = 0x100000000;
  if (DAT_14ca4fffc != '\0') {
    DAT_14ca52006 = DAT_14ca52006 + '\x01';
  }
  return;
}



// FUNCTION 145ecb3aa FUN_145ecb3aa body=216 status=ok
// SIG undefined FUN_145ecb3aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecb3aa(void)

{
  _DAT_14ca51f70 = L"MobileBasePassUniformBuffer";
  DAT_14ca51f9a = FUN_140850cc5();
  _DAT_14ca51f78 = FUN_14106a12a();
  _DAT_14ca51f88 = &LAB_14682652b;
  _DAT_14ca51f90 = 0x10000014e;
  _DAT_14ca51f98 = 0;
  _DAT_14ca51f80 = DAT_14ca52020;
  DAT_14ca52020 = &DAT_14ca51f70;
  _DAT_14ca51f40 = L"ModulatedShadowColorParameter";
  DAT_14ca51f6a = FUN_140850cc5();
  _DAT_14ca51f48 = FUN_140ec6960();
  _DAT_14ca51f58 = &LAB_14682652b;
  _DAT_14ca51f60 = 0x100000148;
  _DAT_14ca51f68 = 0;
  _DAT_14ca51f50 = DAT_14ca52020;
  DAT_14ca52020 = &DAT_14ca51f40;
  return;
}



// FUNCTION 145ecb482 FUN_145ecb482 body=216 status=ok
// SIG undefined FUN_145ecb482(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecb482(void)

{
  _DAT_14ca58b30 = L"LightPosition";
  DAT_14ca58b5a = FUN_140850cc5();
  _DAT_14ca58b38 = FUN_140ec6960();
  _DAT_14ca58b48 = &LAB_14682652b;
  _DAT_14ca58b50 = 0x10000013c;
  _DAT_14ca58b58 = 0;
  _DAT_14ca58b40 = DAT_14ca51fb0;
  DAT_14ca51fb0 = &DAT_14ca58b30;
  _DAT_14ca58b00 = L"ShadowSharpen";
  DAT_14ca58b2a = FUN_140850cc5();
  _DAT_14ca58b08 = FUN_140ec6960();
  _DAT_14ca58b18 = &LAB_14682652b;
  _DAT_14ca58b20 = 0x100000136;
  _DAT_14ca58b28 = 0;
  _DAT_14ca58b10 = DAT_14ca51fb0;
  DAT_14ca51fb0 = &DAT_14ca58b00;
  return;
}



// FUNCTION 145ecb55a FUN_145ecb55a body=284 status=ok
// SIG undefined FUN_145ecb55a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ecb55a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca52318) {
    FUN_144b3d300(&DAT_14ca52318);
    if (DAT_14ca52318 == -1) {
      FUN_145ecb676();
      FUN_140db5666(&DAT_14ca52270,0,&DAT_14ca52208,L"TModulatedShadowProjection<2>",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472f0ff8,
                    FUN_1472f10c6,&LAB_1472f1156,&LAB_1472f119c,&LAB_14712ac0c,&LAB_14712ac08,0x150,
                    0);
      _DAT_14ca52270 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049c16);
      _Init_thread_footer(&DAT_14ca52318);
    }
  }
  return &DAT_14ca52270;
}



// FUNCTION 145ecb676 FUN_145ecb676 body=210 status=ok
// SIG undefined FUN_145ecb676(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecb676(void)

{
  if ((DAT_14ca5226f & 2) == 0) {
    DAT_14ca5226f = DAT_14ca5226f | 2;
    _DAT_14ca52210 = L"TModulatedShadowProjection<2>";
    _DAT_14ca52228 = FUN_146826540;
    _DAT_14ca52230 = FUN_146825d77;
    _DAT_14ca52238 = FUN_146825fd6;
    _DAT_14ca52240 = FUN_1407e02ea;
    _DAT_14ca52248 = FUN_146826273;
    _DAT_14ca52220 = FUN_1472f158a;
    _DAT_14ca52260 = 0xffffffff00000150;
    _DAT_14ca52268 = 8;
    DAT_14ca5226c = 0;
    _DAT_14ca52250 = &LAB_1472f15b6;
    FUN_145ecba1a();
    FUN_145ecb748();
    FUN_1407e00cc(&DAT_14ca52208);
    return;
  }
  return;
}



// FUNCTION 145ecb748 FUN_145ecb748 body=133 status=ok
// SIG undefined FUN_145ecb748(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecb748(void)

{
  _DAT_14ca58cb0 = L"BASE";
  DAT_14ca58cda = 4;
  FUN_145ecb7ce();
  _DAT_14ca58cc0 = DAT_14ca52218;
  _DAT_14ca58cb8 = &DAT_14ca52198;
  _DAT_14ca58cc8 = &LAB_14682652b;
  DAT_14ca52218 = &DAT_14ca58cb0;
  DAT_14ca5226d = DAT_14ca5226d + '\x01';
  _DAT_14ca58cd0 = 0x100000000;
  if (DAT_14ca521fc != '\0') {
    DAT_14ca5226e = DAT_14ca5226e + '\x01';
  }
  return;
}



// FUNCTION 145ecb7ce FUN_145ecb7ce body=210 status=ok
// SIG undefined FUN_145ecb7ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecb7ce(void)

{
  if ((DAT_14ca521ff & 2) == 0) {
    DAT_14ca521ff = DAT_14ca521ff | 2;
    _DAT_14ca521a0 = L"FShadowModulatedProjectionPS2";
    _DAT_14ca521b8 = FUN_146826540;
    _DAT_14ca521c0 = FUN_146825d77;
    _DAT_14ca521c8 = FUN_146825fd6;
    _DAT_14ca521d0 = FUN_1407e02ea;
    _DAT_14ca521d8 = FUN_146826273;
    _DAT_14ca521b0 = FUN_1472f155a;
    _DAT_14ca521f0 = 0xffffffff00000148;
    _DAT_14ca521f8 = 8;
    DAT_14ca521fc = 0;
    _DAT_14ca521e0 = &LAB_1472f1586;
    FUN_145ecb8a0();
    FUN_145ecb994();
    FUN_1407e00cc(&DAT_14ca52198);
    return;
  }
  return;
}



// FUNCTION 145ecb8a0 FUN_145ecb8a0 body=121 status=ok
// SIG undefined FUN_145ecb8a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecb8a0(void)

{
  FUN_145ecb91a();
  _DAT_14ca58bc0 = L"ProjectionParameters";
  DAT_14ca58bea = FUN_140850cc5();
  _DAT_14ca58bc8 = FUN_14142e7bc();
  _DAT_14ca58bd8 = &LAB_14682652b;
  _DAT_14ca58be0 = 0x1000000e0;
  _DAT_14ca58be8 = 0;
  _DAT_14ca58bd0 = DAT_14ca521a8;
  DAT_14ca521a8 = &DAT_14ca58bc0;
  return;
}



// FUNCTION 145ecb91a FUN_145ecb91a body=121 status=ok
// SIG undefined FUN_145ecb91a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecb91a(void)

{
  FUN_145ecbaf2();
  _DAT_14ca58bf0 = L"ShadowFadeFraction";
  DAT_14ca58c1a = FUN_140850cc5();
  _DAT_14ca58bf8 = FUN_140ec6960();
  _DAT_14ca58c08 = &LAB_14682652b;
  _DAT_14ca58c10 = 0x100000130;
  _DAT_14ca58c18 = 0;
  _DAT_14ca58c00 = DAT_14ca521a8;
  DAT_14ca521a8 = &DAT_14ca58bf0;
  return;
}



// FUNCTION 145ecb994 FUN_145ecb994 body=133 status=ok
// SIG undefined FUN_145ecb994(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecb994(void)

{
  _DAT_14ca58c80 = L"BASE";
  DAT_14ca58caa = 4;
  FUN_1411c95a0();
  _DAT_14ca58c90 = DAT_14ca521a8;
  _DAT_14ca58c88 = &DAT_14ca4ff98;
  _DAT_14ca58c98 = &LAB_14682652b;
  DAT_14ca521a8 = &DAT_14ca58c80;
  DAT_14ca521fd = DAT_14ca521fd + '\x01';
  _DAT_14ca58ca0 = 0x100000000;
  if (DAT_14ca4fffc != '\0') {
    DAT_14ca521fe = DAT_14ca521fe + '\x01';
  }
  return;
}



// FUNCTION 145ecba1a FUN_145ecba1a body=216 status=ok
// SIG undefined FUN_145ecba1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecba1a(void)

{
  _DAT_14ca52168 = L"MobileBasePassUniformBuffer";
  DAT_14ca52192 = FUN_140850cc5();
  _DAT_14ca52170 = FUN_14106a12a();
  _DAT_14ca52180 = &LAB_14682652b;
  _DAT_14ca52188 = 0x10000014e;
  _DAT_14ca52190 = 0;
  _DAT_14ca52178 = DAT_14ca52218;
  DAT_14ca52218 = &DAT_14ca52168;
  _DAT_14ca52138 = L"ModulatedShadowColorParameter";
  DAT_14ca52162 = FUN_140850cc5();
  _DAT_14ca52140 = FUN_140ec6960();
  _DAT_14ca52150 = &LAB_14682652b;
  _DAT_14ca52158 = 0x100000148;
  _DAT_14ca52160 = 0;
  _DAT_14ca52148 = DAT_14ca52218;
  DAT_14ca52218 = &DAT_14ca52138;
  return;
}



// FUNCTION 145ecbaf2 FUN_145ecbaf2 body=216 status=ok
// SIG undefined FUN_145ecbaf2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecbaf2(void)

{
  _DAT_14ca58c50 = L"LightPosition";
  DAT_14ca58c7a = FUN_140850cc5();
  _DAT_14ca58c58 = FUN_140ec6960();
  _DAT_14ca58c68 = &LAB_14682652b;
  _DAT_14ca58c70 = 0x10000013c;
  _DAT_14ca58c78 = 0;
  _DAT_14ca58c60 = DAT_14ca521a8;
  DAT_14ca521a8 = &DAT_14ca58c50;
  _DAT_14ca58c20 = L"ShadowSharpen";
  DAT_14ca58c4a = FUN_140850cc5();
  _DAT_14ca58c28 = FUN_140ec6960();
  _DAT_14ca58c38 = &LAB_14682652b;
  _DAT_14ca58c40 = 0x100000136;
  _DAT_14ca58c48 = 0;
  _DAT_14ca58c30 = DAT_14ca521a8;
  DAT_14ca521a8 = &DAT_14ca58c20;
  return;
}



// FUNCTION 145ecbbca FUN_145ecbbca body=284 status=ok
// SIG undefined FUN_145ecbbca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ecbbca(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca52510) {
    FUN_144b3d300(&DAT_14ca52510);
    if (DAT_14ca52510 == -1) {
      FUN_145ecbce6();
      FUN_140db5666(&DAT_14ca52468,0,&DAT_14ca52400,L"TModulatedShadowProjection<3>",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472f15ba,
                    FUN_1472f1688,&LAB_1472f1718,&LAB_1472f175e,&LAB_14712ac0c,&LAB_14712ac08,0x150,
                    0);
      _DAT_14ca52468 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049c22);
      _Init_thread_footer(&DAT_14ca52510);
    }
  }
  return &DAT_14ca52468;
}



// FUNCTION 145ecbce6 FUN_145ecbce6 body=210 status=ok
// SIG undefined FUN_145ecbce6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecbce6(void)

{
  if ((DAT_14ca52467 & 2) == 0) {
    DAT_14ca52467 = DAT_14ca52467 | 2;
    _DAT_14ca52408 = L"TModulatedShadowProjection<3>";
    _DAT_14ca52420 = FUN_146826540;
    _DAT_14ca52428 = FUN_146825d77;
    _DAT_14ca52430 = FUN_146825fd6;
    _DAT_14ca52438 = FUN_1407e02ea;
    _DAT_14ca52440 = FUN_146826273;
    _DAT_14ca52418 = FUN_1472f1b4c;
    _DAT_14ca52458 = 0xffffffff00000150;
    _DAT_14ca52460 = 8;
    DAT_14ca52464 = 0;
    _DAT_14ca52448 = &LAB_1472f1b78;
    FUN_145ecc08a();
    FUN_145ecbdb8();
    FUN_1407e00cc(&DAT_14ca52400);
    return;
  }
  return;
}



// FUNCTION 145ecbdb8 FUN_145ecbdb8 body=133 status=ok
// SIG undefined FUN_145ecbdb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecbdb8(void)

{
  _DAT_14ca58dd0 = L"BASE";
  DAT_14ca58dfa = 4;
  FUN_145ecbe3e();
  _DAT_14ca58de0 = DAT_14ca52410;
  _DAT_14ca58dd8 = &DAT_14ca52390;
  _DAT_14ca58de8 = &LAB_14682652b;
  DAT_14ca52410 = &DAT_14ca58dd0;
  DAT_14ca52465 = DAT_14ca52465 + '\x01';
  _DAT_14ca58df0 = 0x100000000;
  if (DAT_14ca523f4 != '\0') {
    DAT_14ca52466 = DAT_14ca52466 + '\x01';
  }
  return;
}



// FUNCTION 145ecbe3e FUN_145ecbe3e body=210 status=ok
// SIG undefined FUN_145ecbe3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecbe3e(void)

{
  if ((DAT_14ca523f7 & 2) == 0) {
    DAT_14ca523f7 = DAT_14ca523f7 | 2;
    _DAT_14ca52398 = L"FShadowModulatedProjectionPS3";
    _DAT_14ca523b0 = FUN_146826540;
    _DAT_14ca523b8 = FUN_146825d77;
    _DAT_14ca523c0 = FUN_146825fd6;
    _DAT_14ca523c8 = FUN_1407e02ea;
    _DAT_14ca523d0 = FUN_146826273;
    _DAT_14ca523a8 = FUN_1472f1b1c;
    _DAT_14ca523e8 = 0xffffffff00000148;
    _DAT_14ca523f0 = 8;
    DAT_14ca523f4 = 0;
    _DAT_14ca523d8 = &LAB_1472f1b48;
    FUN_145ecbf10();
    FUN_145ecc004();
    FUN_1407e00cc(&DAT_14ca52390);
    return;
  }
  return;
}



// FUNCTION 145ecbf10 FUN_145ecbf10 body=121 status=ok
// SIG undefined FUN_145ecbf10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecbf10(void)

{
  FUN_145ecbf8a();
  _DAT_14ca58ce0 = L"ProjectionParameters";
  DAT_14ca58d0a = FUN_140850cc5();
  _DAT_14ca58ce8 = FUN_14142e7bc();
  _DAT_14ca58cf8 = &LAB_14682652b;
  _DAT_14ca58d00 = 0x1000000e0;
  _DAT_14ca58d08 = 0;
  _DAT_14ca58cf0 = DAT_14ca523a0;
  DAT_14ca523a0 = &DAT_14ca58ce0;
  return;
}



// FUNCTION 145ecbf8a FUN_145ecbf8a body=121 status=ok
// SIG undefined FUN_145ecbf8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecbf8a(void)

{
  FUN_145ecc162();
  _DAT_14ca58d10 = L"ShadowFadeFraction";
  DAT_14ca58d3a = FUN_140850cc5();
  _DAT_14ca58d18 = FUN_140ec6960();
  _DAT_14ca58d28 = &LAB_14682652b;
  _DAT_14ca58d30 = 0x100000130;
  _DAT_14ca58d38 = 0;
  _DAT_14ca58d20 = DAT_14ca523a0;
  DAT_14ca523a0 = &DAT_14ca58d10;
  return;
}



// FUNCTION 145ecc004 FUN_145ecc004 body=133 status=ok
// SIG undefined FUN_145ecc004(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecc004(void)

{
  _DAT_14ca58da0 = L"BASE";
  DAT_14ca58dca = 4;
  FUN_1411c95a0();
  _DAT_14ca58db0 = DAT_14ca523a0;
  _DAT_14ca58da8 = &DAT_14ca4ff98;
  _DAT_14ca58db8 = &LAB_14682652b;
  DAT_14ca523a0 = &DAT_14ca58da0;
  DAT_14ca523f5 = DAT_14ca523f5 + '\x01';
  _DAT_14ca58dc0 = 0x100000000;
  if (DAT_14ca4fffc != '\0') {
    DAT_14ca523f6 = DAT_14ca523f6 + '\x01';
  }
  return;
}



// FUNCTION 145ecc08a FUN_145ecc08a body=216 status=ok
// SIG undefined FUN_145ecc08a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecc08a(void)

{
  _DAT_14ca52360 = L"MobileBasePassUniformBuffer";
  DAT_14ca5238a = FUN_140850cc5();
  _DAT_14ca52368 = FUN_14106a12a();
  _DAT_14ca52378 = &LAB_14682652b;
  _DAT_14ca52380 = 0x10000014e;
  _DAT_14ca52388 = 0;
  _DAT_14ca52370 = DAT_14ca52410;
  DAT_14ca52410 = &DAT_14ca52360;
  _DAT_14ca52330 = L"ModulatedShadowColorParameter";
  DAT_14ca5235a = FUN_140850cc5();
  _DAT_14ca52338 = FUN_140ec6960();
  _DAT_14ca52348 = &LAB_14682652b;
  _DAT_14ca52350 = 0x100000148;
  _DAT_14ca52358 = 0;
  _DAT_14ca52340 = DAT_14ca52410;
  DAT_14ca52410 = &DAT_14ca52330;
  return;
}



// FUNCTION 145ecc162 FUN_145ecc162 body=216 status=ok
// SIG undefined FUN_145ecc162(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecc162(void)

{
  _DAT_14ca58d70 = L"LightPosition";
  DAT_14ca58d9a = FUN_140850cc5();
  _DAT_14ca58d78 = FUN_140ec6960();
  _DAT_14ca58d88 = &LAB_14682652b;
  _DAT_14ca58d90 = 0x10000013c;
  _DAT_14ca58d98 = 0;
  _DAT_14ca58d80 = DAT_14ca523a0;
  DAT_14ca523a0 = &DAT_14ca58d70;
  _DAT_14ca58d40 = L"ShadowSharpen";
  DAT_14ca58d6a = FUN_140850cc5();
  _DAT_14ca58d48 = FUN_140ec6960();
  _DAT_14ca58d58 = &LAB_14682652b;
  _DAT_14ca58d60 = 0x100000136;
  _DAT_14ca58d68 = 0;
  _DAT_14ca58d50 = DAT_14ca523a0;
  DAT_14ca523a0 = &DAT_14ca58d40;
  return;
}



// FUNCTION 145ecc23a FUN_145ecc23a body=284 status=ok
// SIG undefined FUN_145ecc23a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ecc23a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca52708) {
    FUN_144b3d300(&DAT_14ca52708);
    if (DAT_14ca52708 == -1) {
      FUN_145ecc356();
      FUN_140db5666(&DAT_14ca52660,0,&DAT_14ca525f8,L"TModulatedShadowProjection<4>",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472f1b7c,
                    FUN_1472f1c4a,&LAB_1472f1cda,&LAB_1472f1d20,&LAB_14712ac0c,&LAB_14712ac08,0x150,
                    0);
      _DAT_14ca52660 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049c2e);
      _Init_thread_footer(&DAT_14ca52708);
    }
  }
  return &DAT_14ca52660;
}



// FUNCTION 145ecc356 FUN_145ecc356 body=210 status=ok
// SIG undefined FUN_145ecc356(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecc356(void)

{
  if ((DAT_14ca5265f & 2) == 0) {
    DAT_14ca5265f = DAT_14ca5265f | 2;
    _DAT_14ca52600 = L"TModulatedShadowProjection<4>";
    _DAT_14ca52618 = FUN_146826540;
    _DAT_14ca52620 = FUN_146825d77;
    _DAT_14ca52628 = FUN_146825fd6;
    _DAT_14ca52630 = FUN_1407e02ea;
    _DAT_14ca52638 = FUN_146826273;
    _DAT_14ca52610 = FUN_1472f210e;
    _DAT_14ca52650 = 0xffffffff00000150;
    _DAT_14ca52658 = 8;
    DAT_14ca5265c = 0;
    _DAT_14ca52640 = &LAB_1472f213a;
    FUN_145ecc6fa();
    FUN_145ecc428();
    FUN_1407e00cc(&DAT_14ca525f8);
    return;
  }
  return;
}



// FUNCTION 145ecc428 FUN_145ecc428 body=133 status=ok
// SIG undefined FUN_145ecc428(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecc428(void)

{
  _DAT_14ca58ef0 = L"BASE";
  DAT_14ca58f1a = 4;
  FUN_145ecc4ae();
  _DAT_14ca58f00 = DAT_14ca52608;
  _DAT_14ca58ef8 = &DAT_14ca52588;
  _DAT_14ca58f08 = &LAB_14682652b;
  DAT_14ca52608 = &DAT_14ca58ef0;
  DAT_14ca5265d = DAT_14ca5265d + '\x01';
  _DAT_14ca58f10 = 0x100000000;
  if (DAT_14ca525ec != '\0') {
    DAT_14ca5265e = DAT_14ca5265e + '\x01';
  }
  return;
}



// FUNCTION 145ecc4ae FUN_145ecc4ae body=210 status=ok
// SIG undefined FUN_145ecc4ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecc4ae(void)

{
  if ((DAT_14ca525ef & 2) == 0) {
    DAT_14ca525ef = DAT_14ca525ef | 2;
    _DAT_14ca52590 = L"FShadowModulatedProjectionPS4";
    _DAT_14ca525a8 = FUN_146826540;
    _DAT_14ca525b0 = FUN_146825d77;
    _DAT_14ca525b8 = FUN_146825fd6;
    _DAT_14ca525c0 = FUN_1407e02ea;
    _DAT_14ca525c8 = FUN_146826273;
    _DAT_14ca525a0 = FUN_1472f20de;
    _DAT_14ca525e0 = 0xffffffff00000148;
    _DAT_14ca525e8 = 8;
    DAT_14ca525ec = 0;
    _DAT_14ca525d0 = &LAB_1472f210a;
    FUN_145ecc580();
    FUN_145ecc674();
    FUN_1407e00cc(&DAT_14ca52588);
    return;
  }
  return;
}



// FUNCTION 145ecc580 FUN_145ecc580 body=121 status=ok
// SIG undefined FUN_145ecc580(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecc580(void)

{
  FUN_145ecc5fa();
  _DAT_14ca58e00 = L"ProjectionParameters";
  DAT_14ca58e2a = FUN_140850cc5();
  _DAT_14ca58e08 = FUN_14142e7bc();
  _DAT_14ca58e18 = &LAB_14682652b;
  _DAT_14ca58e20 = 0x1000000e0;
  _DAT_14ca58e28 = 0;
  _DAT_14ca58e10 = DAT_14ca52598;
  DAT_14ca52598 = &DAT_14ca58e00;
  return;
}



// FUNCTION 145ecc5fa FUN_145ecc5fa body=121 status=ok
// SIG undefined FUN_145ecc5fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecc5fa(void)

{
  FUN_145ecc7d2();
  _DAT_14ca58e30 = L"ShadowFadeFraction";
  DAT_14ca58e5a = FUN_140850cc5();
  _DAT_14ca58e38 = FUN_140ec6960();
  _DAT_14ca58e48 = &LAB_14682652b;
  _DAT_14ca58e50 = 0x100000130;
  _DAT_14ca58e58 = 0;
  _DAT_14ca58e40 = DAT_14ca52598;
  DAT_14ca52598 = &DAT_14ca58e30;
  return;
}



// FUNCTION 145ecc674 FUN_145ecc674 body=133 status=ok
// SIG undefined FUN_145ecc674(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecc674(void)

{
  _DAT_14ca58ec0 = L"BASE";
  DAT_14ca58eea = 4;
  FUN_1411c95a0();
  _DAT_14ca58ed0 = DAT_14ca52598;
  _DAT_14ca58ec8 = &DAT_14ca4ff98;
  _DAT_14ca58ed8 = &LAB_14682652b;
  DAT_14ca52598 = &DAT_14ca58ec0;
  DAT_14ca525ed = DAT_14ca525ed + '\x01';
  _DAT_14ca58ee0 = 0x100000000;
  if (DAT_14ca4fffc != '\0') {
    DAT_14ca525ee = DAT_14ca525ee + '\x01';
  }
  return;
}



// FUNCTION 145ecc6fa FUN_145ecc6fa body=216 status=ok
// SIG undefined FUN_145ecc6fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecc6fa(void)

{
  _DAT_14ca52558 = L"MobileBasePassUniformBuffer";
  DAT_14ca52582 = FUN_140850cc5();
  _DAT_14ca52560 = FUN_14106a12a();
  _DAT_14ca52570 = &LAB_14682652b;
  _DAT_14ca52578 = 0x10000014e;
  _DAT_14ca52580 = 0;
  _DAT_14ca52568 = DAT_14ca52608;
  DAT_14ca52608 = &DAT_14ca52558;
  _DAT_14ca52528 = L"ModulatedShadowColorParameter";
  DAT_14ca52552 = FUN_140850cc5();
  _DAT_14ca52530 = FUN_140ec6960();
  _DAT_14ca52540 = &LAB_14682652b;
  _DAT_14ca52548 = 0x100000148;
  _DAT_14ca52550 = 0;
  _DAT_14ca52538 = DAT_14ca52608;
  DAT_14ca52608 = &DAT_14ca52528;
  return;
}



// FUNCTION 145ecc7d2 FUN_145ecc7d2 body=216 status=ok
// SIG undefined FUN_145ecc7d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecc7d2(void)

{
  _DAT_14ca58e90 = L"LightPosition";
  DAT_14ca58eba = FUN_140850cc5();
  _DAT_14ca58e98 = FUN_140ec6960();
  _DAT_14ca58ea8 = &LAB_14682652b;
  _DAT_14ca58eb0 = 0x10000013c;
  _DAT_14ca58eb8 = 0;
  _DAT_14ca58ea0 = DAT_14ca52598;
  DAT_14ca52598 = &DAT_14ca58e90;
  _DAT_14ca58e60 = L"ShadowSharpen";
  DAT_14ca58e8a = FUN_140850cc5();
  _DAT_14ca58e68 = FUN_140ec6960();
  _DAT_14ca58e78 = &LAB_14682652b;
  _DAT_14ca58e80 = 0x100000136;
  _DAT_14ca58e88 = 0;
  _DAT_14ca58e70 = DAT_14ca52598;
  DAT_14ca52598 = &DAT_14ca58e60;
  return;
}



// FUNCTION 145ecc8aa FUN_145ecc8aa body=284 status=ok
// SIG undefined FUN_145ecc8aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ecc8aa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca52900) {
    FUN_144b3d300(&DAT_14ca52900);
    if (DAT_14ca52900 == -1) {
      FUN_145ecc9c6();
      FUN_140db5666(&DAT_14ca52858,0,&DAT_14ca527f0,L"TModulatedShadowProjection<5>",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472f213e,
                    FUN_1472f220c,&LAB_1472f229c,&LAB_1472f22e2,&LAB_14712ac0c,&LAB_14712ac08,0x150,
                    0);
      _DAT_14ca52858 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049c3a);
      _Init_thread_footer(&DAT_14ca52900);
    }
  }
  return &DAT_14ca52858;
}



// FUNCTION 145ecc9c6 FUN_145ecc9c6 body=210 status=ok
// SIG undefined FUN_145ecc9c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecc9c6(void)

{
  if ((DAT_14ca52857 & 2) == 0) {
    DAT_14ca52857 = DAT_14ca52857 | 2;
    _DAT_14ca527f8 = L"TModulatedShadowProjection<5>";
    _DAT_14ca52810 = FUN_146826540;
    _DAT_14ca52818 = FUN_146825d77;
    _DAT_14ca52820 = FUN_146825fd6;
    _DAT_14ca52828 = FUN_1407e02ea;
    _DAT_14ca52830 = FUN_146826273;
    _DAT_14ca52808 = FUN_1472f26d0;
    _DAT_14ca52848 = 0xffffffff00000150;
    _DAT_14ca52850 = 8;
    DAT_14ca52854 = 0;
    _DAT_14ca52838 = &LAB_1472f26fc;
    FUN_145eccd6a();
    FUN_145ecca98();
    FUN_1407e00cc(&DAT_14ca527f0);
    return;
  }
  return;
}



// FUNCTION 145ecca98 FUN_145ecca98 body=133 status=ok
// SIG undefined FUN_145ecca98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecca98(void)

{
  _DAT_14ca59010 = L"BASE";
  DAT_14ca5903a = 4;
  FUN_145eccb1e();
  _DAT_14ca59020 = DAT_14ca52800;
  _DAT_14ca59018 = &DAT_14ca52780;
  _DAT_14ca59028 = &LAB_14682652b;
  DAT_14ca52800 = &DAT_14ca59010;
  DAT_14ca52855 = DAT_14ca52855 + '\x01';
  _DAT_14ca59030 = 0x100000000;
  if (DAT_14ca527e4 != '\0') {
    DAT_14ca52856 = DAT_14ca52856 + '\x01';
  }
  return;
}



// FUNCTION 145eccb1e FUN_145eccb1e body=210 status=ok
// SIG undefined FUN_145eccb1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eccb1e(void)

{
  if ((DAT_14ca527e7 & 2) == 0) {
    DAT_14ca527e7 = DAT_14ca527e7 | 2;
    _DAT_14ca52788 = L"FShadowModulatedProjectionPS5";
    _DAT_14ca527a0 = FUN_146826540;
    _DAT_14ca527a8 = FUN_146825d77;
    _DAT_14ca527b0 = FUN_146825fd6;
    _DAT_14ca527b8 = FUN_1407e02ea;
    _DAT_14ca527c0 = FUN_146826273;
    _DAT_14ca52798 = FUN_1472f26a0;
    _DAT_14ca527d8 = 0xffffffff00000148;
    _DAT_14ca527e0 = 8;
    DAT_14ca527e4 = 0;
    _DAT_14ca527c8 = &LAB_1472f26cc;
    FUN_145eccbf0();
    FUN_145eccce4();
    FUN_1407e00cc(&DAT_14ca52780);
    return;
  }
  return;
}



// FUNCTION 145eccbf0 FUN_145eccbf0 body=121 status=ok
// SIG undefined FUN_145eccbf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eccbf0(void)

{
  FUN_145eccc6a();
  _DAT_14ca58f20 = L"ProjectionParameters";
  DAT_14ca58f4a = FUN_140850cc5();
  _DAT_14ca58f28 = FUN_14142e7bc();
  _DAT_14ca58f38 = &LAB_14682652b;
  _DAT_14ca58f40 = 0x1000000e0;
  _DAT_14ca58f48 = 0;
  _DAT_14ca58f30 = DAT_14ca52790;
  DAT_14ca52790 = &DAT_14ca58f20;
  return;
}



// FUNCTION 145eccc6a FUN_145eccc6a body=121 status=ok
// SIG undefined FUN_145eccc6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eccc6a(void)

{
  FUN_145ecce42();
  _DAT_14ca58f50 = L"ShadowFadeFraction";
  DAT_14ca58f7a = FUN_140850cc5();
  _DAT_14ca58f58 = FUN_140ec6960();
  _DAT_14ca58f68 = &LAB_14682652b;
  _DAT_14ca58f70 = 0x100000130;
  _DAT_14ca58f78 = 0;
  _DAT_14ca58f60 = DAT_14ca52790;
  DAT_14ca52790 = &DAT_14ca58f50;
  return;
}



// FUNCTION 145eccce4 FUN_145eccce4 body=133 status=ok
// SIG undefined FUN_145eccce4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eccce4(void)

{
  _DAT_14ca58fe0 = L"BASE";
  DAT_14ca5900a = 4;
  FUN_1411c95a0();
  _DAT_14ca58ff0 = DAT_14ca52790;
  _DAT_14ca58fe8 = &DAT_14ca4ff98;
  _DAT_14ca58ff8 = &LAB_14682652b;
  DAT_14ca52790 = &DAT_14ca58fe0;
  DAT_14ca527e5 = DAT_14ca527e5 + '\x01';
  _DAT_14ca59000 = 0x100000000;
  if (DAT_14ca4fffc != '\0') {
    DAT_14ca527e6 = DAT_14ca527e6 + '\x01';
  }
  return;
}



// FUNCTION 145eccd6a FUN_145eccd6a body=216 status=ok
// SIG undefined FUN_145eccd6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eccd6a(void)

{
  _DAT_14ca52750 = L"MobileBasePassUniformBuffer";
  DAT_14ca5277a = FUN_140850cc5();
  _DAT_14ca52758 = FUN_14106a12a();
  _DAT_14ca52768 = &LAB_14682652b;
  _DAT_14ca52770 = 0x10000014e;
  _DAT_14ca52778 = 0;
  _DAT_14ca52760 = DAT_14ca52800;
  DAT_14ca52800 = &DAT_14ca52750;
  _DAT_14ca52720 = L"ModulatedShadowColorParameter";
  DAT_14ca5274a = FUN_140850cc5();
  _DAT_14ca52728 = FUN_140ec6960();
  _DAT_14ca52738 = &LAB_14682652b;
  _DAT_14ca52740 = 0x100000148;
  _DAT_14ca52748 = 0;
  _DAT_14ca52730 = DAT_14ca52800;
  DAT_14ca52800 = &DAT_14ca52720;
  return;
}



// FUNCTION 145ecce42 FUN_145ecce42 body=216 status=ok
// SIG undefined FUN_145ecce42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecce42(void)

{
  _DAT_14ca58fb0 = L"LightPosition";
  DAT_14ca58fda = FUN_140850cc5();
  _DAT_14ca58fb8 = FUN_140ec6960();
  _DAT_14ca58fc8 = &LAB_14682652b;
  _DAT_14ca58fd0 = 0x10000013c;
  _DAT_14ca58fd8 = 0;
  _DAT_14ca58fc0 = DAT_14ca52790;
  DAT_14ca52790 = &DAT_14ca58fb0;
  _DAT_14ca58f80 = L"ShadowSharpen";
  DAT_14ca58faa = FUN_140850cc5();
  _DAT_14ca58f88 = FUN_140ec6960();
  _DAT_14ca58f98 = &LAB_14682652b;
  _DAT_14ca58fa0 = 0x100000136;
  _DAT_14ca58fa8 = 0;
  _DAT_14ca58f90 = DAT_14ca52790;
  DAT_14ca52790 = &DAT_14ca58f80;
  return;
}



// FUNCTION 145eccf1a FUN_145eccf1a body=503 status=ok
// SIG undefined FUN_145eccf1a(void)

void FUN_145eccf1a(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_128 [40];
  undefined1 local_100 [192];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_140e8fbe2();
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    lVar4 = (**(code **)(*param_2 + 8))();
    lVar11 = FUN_145ecd15c();
    if ((lVar11 != 0) && (*(int *)(lVar11 + 0x38) <= *(int *)(lVar4 + 0x38))) {
      plVar8 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
          lVar11 + 0x30) {
        plVar8 = param_2;
      }
      goto LAB_145eccf8a;
    }
  }
  plVar8 = (longlong *)0x0;
LAB_145eccf8a:
  *(longlong **)(param_1 + 0x2560) = plVar8;
  local_40 = (undefined1 *)0x0;
  local_38 = 0x1800000000;
  FUN_145ecd206(param_1 + -0x400,local_100);
  if (0 < (int)local_38) {
    uVar10 = 0;
    iVar3 = (int)local_38;
    do {
      puVar9 = local_40;
      if (local_40 == (undefined1 *)0x0) {
        puVar9 = local_100;
      }
      lVar4 = *(longlong *)(puVar9 + uVar10 * 8);
      if (lVar4 != 0) {
        puVar5 = (undefined8 *)FUN_145ecd127(uVar10 & 0xffffffff);
        *(undefined8 *)(lVar4 + 0x6e0) = *puVar5;
        iVar3 = (int)local_38;
      }
      uVar10 = uVar10 + 1;
    } while ((longlong)uVar10 < (longlong)iVar3);
  }
  iVar3 = *(int *)(param_1 + 0x2590);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x2588);
    lVar11 = 0;
    do {
      if (*(longlong *)(lVar4 + 8 + lVar11) != 0) {
        lVar6 = FUN_145869874();
        lVar7 = *(longlong *)(lVar4 + 8 + lVar11);
        if (lVar7 != 0) {
          if ((((lVar6 == 0) || (lVar2 = *(longlong *)(lVar7 + 0x10), lVar2 == 0)) ||
              (*(int *)(lVar2 + 0x38) < *(int *)(lVar6 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
              lVar6 + 0x30)) {
            lVar7 = FUN_1403126c0();
            plVar8 = *(longlong **)(lVar4 + 8 + lVar11);
            if (((plVar8 != (longlong *)0x0) && (lVar7 != 0)) && (lVar6 = plVar8[2], lVar6 != 0)) {
              iVar1 = *(int *)(lVar7 + 0x38);
              if ((iVar1 <= *(int *)(lVar6 + 0x38)) &&
                 (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar1 * 8) == lVar7 + 0x30))
              {
                (**(code **)(*plVar8 + 0x330))(plVar8,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
                if (plVar8[0x72] != 0) {
                  FUN_14045627c(plVar8[0x72],0,1);
                }
              }
            }
          }
          else {
            FUN_145ecd112(lVar7,0);
          }
        }
      }
      lVar11 = lVar11 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar11);
  }
  FUN_145ecd194(param_1 + -0x400);
  if (local_40 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ecd112 FUN_145ecd112 body=21 status=ok
// SIG undefined FUN_145ecd112(void)

void FUN_145ecd112(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x390) != 0) {
    FUN_14045627c(*(longlong *)(param_1 + 0x390),param_2,1);
    return;
  }
  return;
}



// FUNCTION 145ecd127 FUN_145ecd127 body=52 status=ok
// SIG undefined FUN_145ecd127(void)

undefined * FUN_145ecd127(int param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_14cbcb060;
  if (DAT_14cbcb090 != (undefined *)0x0) {
    puVar1 = DAT_14cbcb090;
  }
  puVar1 = puVar1 + (longlong)param_1 * 8;
  if (DAT_14cbcb098 <= param_1) {
    puVar1 = &DAT_14cbcb0a0;
  }
  if (param_1 < 0) {
    puVar1 = &DAT_14cbcb0a0;
  }
  return puVar1;
}



// FUNCTION 145ecd15c FUN_145ecd15c body=55 status=ok
// SIG undefined FUN_145ecd15c(void)

void FUN_145ecd15c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9ffc8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9ffc8 = FUN_140002ddd(FUN_1465a7f9a,uVar1,L"CharacterSelectStationObjectDef");
  }
  return;
}



// FUNCTION 145ecd194 FUN_145ecd194 body=114 status=ok
// SIG undefined FUN_145ecd194(void)

void FUN_145ecd194(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x2960);
  if (((lVar2 != 0) && (*(char *)(lVar2 + 0x4c4) == '\x01')) &&
     (lVar3 = *(longlong *)(param_1 + 0x3270), lVar3 != 0)) {
    uVar1 = *(undefined4 *)(lVar2 + 0x4d0);
    uVar4 = *(undefined8 *)(lVar2 + 0x4c8);
    *(undefined1 *)(lVar3 + 0x910) = 1;
    FUN_14477b16e(lVar3 + 0x50,param_1 + 0x29b0);
    *(undefined8 *)(lVar3 + 0x944) = uVar4;
    *(undefined4 *)(lVar3 + 0x934) = uVar1;
  }
  return;
}



// FUNCTION 145ecd206 FUN_145ecd206 body=135 status=ok
// SIG undefined FUN_145ecd206(void)

void FUN_145ecd206(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 200) = 0;
  if (*(int *)(param_2 + 0xcc) < 0) {
    FUN_148e11a44(param_2);
  }
  local_20 = FUN_145abc86c();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  FUN_145ecd28e(param_1,&local_20,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ecd28e FUN_145ecd28e body=206 status=ok
// SIG undefined FUN_145ecd28e(void)

void FUN_145ecd28e(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_144a78d6a();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_145ecd2dc;
    }
  }
  lVar2 = 0;
LAB_145ecd2dc:
  lVar1 = FUN_144a78d6a();
  local_30 = *param_2;
  if (lVar2 == lVar1) {
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_145ecd372(param_1,&local_30,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ecd372 FUN_145ecd372 body=483 status=ok
// SIG undefined FUN_145ecd372(void)

void FUN_145ecd372(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
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
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x268);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar8) || (uStack_60 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_90 + (longlong)iStack_74 * 0x10);
      if (lVar4 != 0) {
        lVar6 = *param_2;
        if ((lVar6 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_145ecd450:
          lVar5 = FUN_144a78d6a();
          if ((lVar5 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar5 + 0x38))) goto LAB_145ecd52b;
          lVar7 = 0;
          if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30) {
            lVar7 = lVar6;
          }
        }
        else {
          if (lVar6 != 0) goto LAB_145ecd450;
LAB_145ecd52b:
          lVar7 = 0;
        }
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          iVar3 = *(int *)(param_3 + 200);
          *(uint *)(param_3 + 200) = iVar3 + 1U;
          if (*(uint *)(param_3 + 0xcc) < iVar3 + 1U) {
            FUN_148e11c7e(param_3,iVar3);
          }
          lVar6 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar6 = param_3;
          }
          *(longlong *)(lVar6 + (longlong)iVar3 * 8) = lVar4;
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar8));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ecd556 FUN_145ecd556 body=120 status=ok
// SIG undefined FUN_145ecd556(void)

void FUN_145ecd556(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145ecd5d0();
  local_18 = DAT_14c761215 == '\x01';
  if ((bool)local_18) {
    local_20 = CONCAT44(DAT_14c76121c,DAT_14c761218);
  }
  FUN_14158452c(*(undefined8 *)(param_1 + 0x38));
  FUN_145ecd5d6(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ecd5d0 FUN_145ecd5d0 body=5 status=ok
// SIG undefined FUN_145ecd5d0(void)

void FUN_145ecd5d0(longlong param_1)

{
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 1;
  return;
}



// FUNCTION 145ecd5d6 FUN_145ecd5d6 body=8 status=ok
// SIG undefined FUN_145ecd5d6(void)

void FUN_145ecd5d6(longlong param_1)

{
  FUN_145ecd5de(param_1,*(undefined1 *)(param_1 + 0x30));
  return;
}



// FUNCTION 145ecd5de FUN_145ecd5de body=116 status=ok
// SIG undefined FUN_145ecd5de(void)

void FUN_145ecd5de(longlong *param_1,ulonglong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_144a126be();
  if (lVar2 != 0) {
    if (((param_2 & 2) == 0 & *(byte *)(lVar2 + 0x153) >> 6) == 1) {
      (**(code **)(*param_1 + 0x2b8))(param_1);
    }
    bVar1 = FUN_140e50f4a(lVar2);
    if (((param_2 & 4) == 0 & bVar1) == 1) {
                    /* WARNING: Could not recover jumptable at 0x000145ecd64f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x2c0))(param_1,lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145ecd652 FUN_145ecd652 body=1079 status=ok
// SIG undefined FUN_145ecd652(void)

void FUN_145ecd652(longlong param_1,longlong param_2)

{
  int *piVar1;
  double dVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 unaff_RBP;
  ulonglong uVar13;
  bool bVar14;
  float fVar15;
  undefined1 auStack_258 [32];
  double *local_238;
  undefined8 *local_230;
  longlong local_228;
  undefined4 local_220;
  undefined8 local_218;
  double local_210;
  double local_208;
  double local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  double local_1e8;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  undefined8 local_198;
  longlong local_190;
  int local_188;
  undefined4 uStack_184;
  longlong local_178;
  double local_168;
  double local_160;
  double local_158;
  byte local_bb;
  undefined1 local_b0 [72];
  char local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  param_1 = param_1 + 8;
  cVar4 = FUN_144729dda(param_1);
  if (cVar4 == '\0') {
    lVar7 = 0;
  }
  else {
    uVar6 = FUN_14479d2ce(param_1);
    lVar7 = FUN_1447210f0(uVar6);
  }
  if (param_2 != 0) {
    lVar8 = FUN_14082ce84(param_2 + 0x1a0);
    cVar4 = FUN_144729dda(param_1);
    if (((lVar8 != 0) && (lVar7 != 0)) && (cVar4 != '\0')) {
      lVar9 = FUN_14479d2ce(param_1);
      if (*(longlong *)(lVar9 + 0x11e8) == 0) {
        uVar13 = 0;
      }
      else {
        lVar9 = FUN_14479d2ce(param_1);
        uVar13 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),
                          (&DAT_00001100)[*(longlong *)(lVar9 + 0x11e8)] != '\x01');
      }
      uVar6 = FUN_14479d2ce(param_1);
      fVar15 = (float)FUN_145ecda8a(param_2,uVar13 & 0xffffffff,uVar6);
      local_1a8 = DAT_14c8464f0;
      local_1b8 = DAT_14c8464e0;
      uStack_1b0 = DAT_14c8464e8;
      local_1c8 = DAT_14c846508;
      local_1d8 = (undefined4)DAT_14c8464f8;
      uStack_1d4 = DAT_14c8464f8._4_4_;
      uStack_1d0 = (undefined4)DAT_14c846500;
      uStack_1cc = DAT_14c846500._4_4_;
      uVar6 = FUN_14479d2ce(param_1);
      FUN_141313b0e(uVar6,&local_1b8,&local_1d8);
      local_1e8 = local_1a8;
      local_1f8 = (undefined4)local_1b8;
      uStack_1f4 = local_1b8._4_4_;
      uStack_1f0 = (undefined4)uStack_1b0;
      uStack_1ec = uStack_1b0._4_4_;
      FUN_144a76660(&local_1d8,&local_168);
      dVar2 = (double)fVar15;
      local_200 = local_158 * dVar2 + local_1e8;
      local_208 = local_160 * dVar2 + (double)CONCAT44(uStack_1ec,uStack_1f0);
      local_210 = dVar2 * local_168 + (double)CONCAT44(uStack_1f4,local_1f8);
      uVar6 = FUN_14479d2ce(param_1);
      local_238 = &local_210;
      FUN_145b03366(&local_168,1,uVar6,&local_1f8);
      if ((local_68 == '\x01') && ((local_bb & 3) == 1)) {
        plVar10 = (longlong *)FUN_14485cccc(local_b0);
        if (plVar10 != (longlong *)0x0) {
          uVar6 = FUN_144a7b040();
          plVar10 = (longlong *)(**(code **)(*plVar10 + 0x288))(plVar10,uVar6);
          if (plVar10 != (longlong *)0x0) {
            uVar6 = FUN_144a7b040();
            plVar11 = (longlong *)FUN_144718840(plVar10,uVar6);
            if (((plVar10 != plVar11) && (plVar11 != (longlong *)0x0)) &&
               (lVar9 = (**(code **)(*plVar11 + 0x20))(plVar11), lVar9 != 0)) goto LAB_145ecd82d;
          }
        }
        FUN_1407f7f84(&local_190,lVar7);
        plVar10 = (longlong *)CONCAT44(uStack_184,local_188);
        if (plVar10 != (longlong *)0x0) {
          iVar5 = (int)plVar10[1];
          do {
            if (iVar5 == 0) {
              plVar10 = (longlong *)0x0;
              break;
            }
            LOCK();
            iVar3 = (int)plVar10[1];
            bVar14 = iVar5 == iVar3;
            if (bVar14) {
              *(int *)(plVar10 + 1) = iVar5 + 1;
              iVar3 = iVar5;
            }
            iVar5 = iVar3;
            UNLOCK();
          } while (!bVar14);
          LOCK();
          piVar1 = (int *)((longlong)CONCAT44(uStack_184,local_188) + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*(longlong *)CONCAT44(uStack_184,local_188) + 0x10))();
          }
          lVar7 = local_190;
          if (plVar10 != (longlong *)0x0) {
            if (local_190 != 0) {
              if (*(int *)(param_2 + 0x200) == 0x3d418293) {
                local_220 = 0;
                local_228 = FUN_14479d2ce(param_1);
                local_198 = *(undefined8 *)(lVar8 + 0x18);
                FUN_1446dcdd4(&local_190);
                local_218 = FUN_14187c428(&local_190);
                if (local_178 != 0) {
                  FUN_1400020a8();
                }
                FUN_141125464((longlong *)(param_2 + 0x1f8),&local_190,&local_228);
                lVar8 = 0;
                if (local_188 != 0x4fc71eb4) {
                  lVar8 = local_190;
                }
                if (local_190 != 0) {
                  lVar8 = local_190;
                }
                bVar14 = local_188 - 1U < 0xfffffffe;
              }
              else {
                lVar8 = *(longlong *)(param_2 + 0x1f8);
                bVar14 = true;
              }
              if ((lVar8 != 0) && (bVar14)) {
                uVar6 = FUN_14479d2ce(param_1);
                local_228 = lVar8;
                FUN_1446dcdd4(&local_190);
                uVar12 = FUN_141880288(&local_190);
                local_230 = &DAT_14cb7bc40;
                local_238 = (double *)CONCAT71(local_238._1_7_,1);
                FUN_1408f24ec(lVar7,uVar12,uVar6,&local_168);
                if (local_178 != 0) {
                  FUN_1400020a8();
                }
              }
            }
            LOCK();
            plVar11 = plVar10 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
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
        }
      }
    }
  }
LAB_145ecd82d:
  if ((local_60 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ecda8a FUN_145ecda8a body=103 status=ok
// SIG undefined FUN_145ecda8a(void)

undefined8 FUN_145ecda8a(longlong param_1,char param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x210) == '\x01') {
    lVar2 = param_1 + 200;
    if (param_2 == '\0') {
      lVar2 = param_1 + 0x38;
    }
    uVar3 = FUN_141313966(lVar2,param_3);
    return uVar3;
  }
  lVar2 = FUN_14082ce84(param_1 + 0x188);
  if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x348), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145ecdac7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar1 + 0x18))(plVar1,param_3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 145ecdafc FUN_145ecdafc body=236 status=ok
// SIG undefined FUN_145ecdafc(void)

undefined8 * FUN_145ecdafc(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a651830;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caead38) {
    FUN_144b3d300(&DAT_14caead38);
    if (DAT_14caead38 == -1) {
      FUN_141584aa0();
      atexit((_func_5014 *)&LAB_14356d827);
      _Init_thread_footer(&DAT_14caead38);
    }
  }
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0x3f80000000000000;
  return param_1;
}



// FUNCTION 145ecdbf0 FUN_145ecdbf0 body=198 status=ok
// SIG undefined FUN_145ecdbf0(void)

undefined8 * FUN_145ecdbf0(undefined8 *param_1)

{
  FUN_145a3619c();
  *param_1 = &PTR_FUN_14aeb0130;
  param_1[5] = &PTR_FUN_14aeb0410;
  param_1[7] = &PTR_FUN_14aeb0430;
  param_1[8] = &PTR_FUN_14aeb0470;
  param_1[0x14] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x16] = &PTR_LAB_14aeb6a30;
  param_1[0x17] = &LAB_14841c6f6;
  param_1[0x12] = FUN_146bd3274;
  param_1[0x1c] = 0;
  param_1[0x1e] = &PTR_LAB_14aeb57a0;
  param_1[0x1f] = &LAB_14841c704;
  param_1[0x1a] = &LAB_14841c708;
  *(undefined1 *)(param_1 + 0x22) = 0;
  return param_1;
}



// FUNCTION 145ecdcbe FUN_145ecdcbe body=154 status=ok
// SIG undefined FUN_145ecdcbe(void)

undefined8 * FUN_145ecdcbe(undefined8 *param_1)

{
  undefined1 auStack_58 [40];
  code *local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1406eddc8();
  *param_1 = &PTR_FUN_14b074f00;
  param_1[0x72] = &PTR_FUN_14b075550;
  memset(param_1 + 0x87,0,0x98);
  local_30 = FUN_140498314;
  local_28 = 0;
  FUN_145ecdd5a(&local_20,param_1);
  param_1[0x97] = local_20;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ecdd5a FUN_145ecdd5a body=248 status=ok
// SIG undefined FUN_145ecdd5a(void)

undefined8 FUN_145ecdd5a(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  *local_40 = &PTR_LAB_14a1ca3a0;
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
  *local_40 = &PTR_FUN_14b3e56d0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140ea1bb6(&DAT_14cb0a930,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ecde54 FUN_145ecde54 body=43 status=ok
// SIG undefined FUN_145ecde54(void)

undefined8 FUN_145ecde54(undefined8 param_1,int param_2)

{
  FUN_145ecde80();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x208);
  }
  return param_1;
}



// FUNCTION 145ecde80 FUN_145ecde80 body=163 status=ok
// SIG undefined FUN_145ecde80(void)

void FUN_145ecde80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8c1520;
  FUN_140fe7f98(param_1 + 0x2e);
  FUN_140fe7ede(param_1 + 0x21);
  FUN_145b05dea(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x1d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1d] + 0x10))();
  }
  if ((longlong *)param_1[0x1b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1b] + 0x10))();
  }
  if ((longlong *)param_1[0x19] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x19] + 0x10))();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145ecdf24 FUN_145ecdf24 body=38 status=ok
// SIG undefined FUN_145ecdf24(void)

undefined8 FUN_145ecdf24(undefined8 param_1,int param_2)

{
  FUN_145ecdf4a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ecdf4a FUN_145ecdf4a body=168 status=ok
// SIG undefined FUN_145ecdf4a(void)

void FUN_145ecdf4a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8cb970;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_145a1d468(param_1 + 0x1c);
  FUN_145a1d3e7(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_145a1d3e7(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145ecdff2 FUN_145ecdff2 body=39 status=ok
// SIG undefined FUN_145ecdff2(void)

void FUN_145ecdff2(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x990,0x10);
  FUN_145ece01a(uVar1,param_1);
  return;
}



// FUNCTION 145ece01a FUN_145ece01a body=167 status=ok
// SIG undefined FUN_145ece01a(void)

undefined8 * FUN_145ece01a(undefined8 *param_1)

{
  FUN_140e14124();
  *param_1 = &PTR_FUN_14bb611d0;
  param_1[0x119] = 0;
  *(undefined4 *)(param_1 + 0x11a) = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8dc) = 0;
  param_1[0x11d] = 0;
  *(undefined4 *)(param_1 + 0x11e) = 0;
  param_1[0x123] = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  *(undefined8 *)((longlong)param_1 + 0x924) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x92c) = 0;
  param_1[0x127] = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  return param_1;
}



// FUNCTION 145ece0c6 FUN_145ece0c6 body=287 status=ok
// SIG undefined FUN_145ece0c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ece0c6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc176a8) {
    FUN_144b3d300(&DAT_14cc176a8);
    if (DAT_14cc176a8 == -1) {
      FUN_145ece1e6();
      FUN_140db5666(&DAT_14cc17600,5,&DAT_14cc17598,L"FComputeKernelShader",
                    L"/Plugin/ComputeFramework/Private/ComputeKernel.usf",&DAT_14bcd9d62,5,1,
                    FUN_149457d7c,FUN_149457d26,&LAB_149457d22,&LAB_149457d1e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,0);
      _DAT_14cc17600 = &PTR_FUN_14bcdbf50;
      atexit((_func_5014 *)&LAB_144523d47);
      _Init_thread_footer(&DAT_14cc176a8);
    }
  }
  return &DAT_14cc17600;
}



// FUNCTION 145ece1e6 FUN_145ece1e6 body=205 status=ok
// SIG undefined FUN_145ece1e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ece1e6(void)

{
  if ((DAT_14cc175ff & 2) == 0) {
    DAT_14cc175ff = DAT_14cc175ff | 2;
    _DAT_14cc175a0 = L"FComputeKernelShader";
    _DAT_14cc175b8 = FUN_146826540;
    _DAT_14cc175c0 = FUN_146825d77;
    _DAT_14cc175c8 = FUN_146825fd6;
    _DAT_14cc175d0 = FUN_1407e02ea;
    _DAT_14cc175d8 = FUN_146826273;
    _DAT_14cc175b0 = FUN_149457cf0;
    _DAT_14cc175f0 = 0xffffffff000000e0;
    _DAT_14cc175f8 = 8;
    DAT_14cc175fc = 0;
    _DAT_14cc175e0 = &LAB_149457d1a;
    FUN_145ece2b4();
    FUN_1407e00cc(&DAT_14cc17598);
    return;
  }
  return;
}



// FUNCTION 145ece2b4 FUN_145ece2b4 body=123 status=ok
// SIG undefined FUN_145ece2b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ece2b4(void)

{
  _DAT_14cc1ad28 = L"BASE";
  DAT_14cc1ad52 = 4;
  _DAT_14cc1ad30 = FUN_145cc1382();
  _DAT_14cc1ad38 = DAT_14cc175a8;
  _DAT_14cc1ad40 = &LAB_14682652b;
  DAT_14cc175a8 = &DAT_14cc1ad28;
  DAT_14cc175fd = DAT_14cc175fd + '\x01';
  _DAT_14cc1ad48 = 0x100000000;
  if (*(char *)(_DAT_14cc1ad30 + 100) != '\0') {
    DAT_14cc175fe = DAT_14cc175fe + '\x01';
  }
  return;
}



// FUNCTION 145ece330 FUN_145ece330 body=226 status=ok
// SIG undefined FUN_145ece330(void)

longlong * FUN_145ece330(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14630d70a;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ece418 FUN_145ece418 body=144 status=ok
// SIG undefined FUN_145ece418(void)

code * FUN_145ece418(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1413d6116();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"InstanceCullingDrawParams";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FInstanceCullingDrawParams";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x4000000537;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14630d822;
}



// FUNCTION 145ece4a8 FUN_145ece4a8 body=146 status=ok
// SIG undefined FUN_145ece4a8(void)

code * FUN_145ece4a8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_141584c4a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SingleLayerWater";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSingleLayerWaterPassUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb000000539;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca5c6e0;
  return FUN_14630d792;
}



// FUNCTION 145ece53a FUN_145ece53a body=226 status=ok
// SIG undefined FUN_145ece53a(void)

longlong * FUN_145ece53a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14630b228;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ece61e FUN_145ece61e body=138 status=ok
// SIG undefined FUN_145ece61e(void)

code * FUN_145ece61e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"bSeparateMainDirLightLuminance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x740000052a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147318974;
}



// FUNCTION 145ece6a8 FUN_145ece6a8 body=138 status=ok
// SIG undefined FUN_145ece6a8(void)

code * FUN_145ece6a8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SceneDepthWithoutSingleLayerWaterSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000521;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147318cb0;
}



// FUNCTION 145ece732 FUN_145ece732 body=138 status=ok
// SIG undefined FUN_145ece732(void)

code * FUN_145ece732(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DistortionParams";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000526;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147318a88;
}



// FUNCTION 145ece7bc FUN_145ece7bc body=285 status=ok
// SIG undefined FUN_145ece7bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ece7bc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca03e28) {
    FUN_144b3d300(&DAT_14ca03e28);
    if (DAT_14ca03e28 == -1) {
      FUN_145ecea24();
      FUN_145ece8da();
      FUN_140db5666(&DAT_14ca03d80,0,&DAT_14ca03d18,L"FLumenVisualizeCompactRaysIndirectArgsCS",
                    L"/Engine/Private/Lumen/LumenVisualizeHardwareRayTracing.usf",
                    L"FLumenVisualizeCompactRaysIndirectArgsCS",5,1,FUN_1472260d8,FUN_147226078,
                    &LAB_1462e7456,&LAB_147226074,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca06c48)
      ;
      _DAT_14ca03d80 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dc8db4);
      _Init_thread_footer(&DAT_14ca03e28);
    }
  }
  return &DAT_14ca03d80;
}



// FUNCTION 145ece8da FUN_145ece8da body=205 status=ok
// SIG undefined FUN_145ece8da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ece8da(void)

{
  if ((DAT_14ca03d7f & 2) == 0) {
    DAT_14ca03d7f = DAT_14ca03d7f | 2;
    _DAT_14ca03d20 = L"FLumenVisualizeCompactRaysIndirectArgsCS";
    _DAT_14ca03d38 = FUN_146826540;
    _DAT_14ca03d40 = FUN_146825d77;
    _DAT_14ca03d48 = FUN_146825fd6;
    _DAT_14ca03d50 = FUN_1407e02ea;
    _DAT_14ca03d58 = FUN_146826273;
    _DAT_14ca03d30 = FUN_147226046;
    _DAT_14ca03d70 = 0xffffffff000000e0;
    _DAT_14ca03d78 = 8;
    DAT_14ca03d7c = 0;
    _DAT_14ca03d60 = &LAB_147226070;
    FUN_145ece9a8();
    FUN_1407e00cc(&DAT_14ca03d18);
    return;
  }
  return;
}



// FUNCTION 145ece9a8 FUN_145ece9a8 body=123 status=ok
// SIG undefined FUN_145ece9a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ece9a8(void)

{
  _DAT_14ca07fc8 = L"BASE";
  DAT_14ca07ff2 = 4;
  _DAT_14ca07fd0 = FUN_140b35ae4();
  _DAT_14ca07fd8 = DAT_14ca03d28;
  _DAT_14ca07fe0 = &LAB_14682652b;
  DAT_14ca03d28 = &DAT_14ca07fc8;
  DAT_14ca03d7d = DAT_14ca03d7d + '\x01';
  _DAT_14ca07fe8 = 0x100000000;
  if (*(char *)(_DAT_14ca07fd0 + 100) != '\0') {
    DAT_14ca03d7e = DAT_14ca03d7e + '\x01';
  }
  return;
}



// FUNCTION 145ecea24 FUN_145ecea24 body=261 status=ok
// SIG undefined FUN_145ecea24(void)

void FUN_145ecea24(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca06cc8) {
    FUN_144b3d300(&DAT_14ca06cc8);
    if (DAT_14ca06cc8 == -1) {
      FUN_145eceb2a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0xf2;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca06c48,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd3ad3);
      _Init_thread_footer(&DAT_14ca06cc8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eceb2a FUN_145eceb2a body=226 status=ok
// SIG undefined FUN_145eceb2a(void)

longlong * FUN_145eceb2a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462ea910;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ecec12 FUN_145ecec12 body=132 status=ok
// SIG undefined FUN_145ecec12(void)

undefined1 * FUN_145ecec12(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RayAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145ecec0e;
}



// FUNCTION 145ecec96 FUN_145ecec96 body=285 status=ok
// SIG undefined FUN_145ecec96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ecec96(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca04078) {
    FUN_144b3d300(&DAT_14ca04078);
    if (DAT_14ca04078 == -1) {
      FUN_145eceefe();
      FUN_145ecedb4();
      FUN_140db5666(&DAT_14ca03fd0,0,&DAT_14ca03f68,
                    L"FLumenVisualizeBucketRaysByMaterialIdIndirectArgsCS",
                    L"/Engine/Private/Lumen/LumenVisualizeHardwareRayTracing.usf",
                    L"FLumenVisualizeBucketRaysByMaterialIdIndirectArgsCS",5,1,FUN_147226264,
                    FUN_147226204,&LAB_1462e746a,&LAB_147226200,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca06d58);
      _DAT_14ca03fd0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dc8dcc);
      _Init_thread_footer(&DAT_14ca04078);
    }
  }
  return &DAT_14ca03fd0;
}



// FUNCTION 145ecedb4 FUN_145ecedb4 body=205 status=ok
// SIG undefined FUN_145ecedb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecedb4(void)

{
  if ((DAT_14ca03fcf & 2) == 0) {
    DAT_14ca03fcf = DAT_14ca03fcf | 2;
    _DAT_14ca03f70 = L"FLumenVisualizeBucketRaysByMaterialIdIndirectArgsCS";
    _DAT_14ca03f88 = FUN_146826540;
    _DAT_14ca03f90 = FUN_146825d77;
    _DAT_14ca03f98 = FUN_146825fd6;
    _DAT_14ca03fa0 = FUN_1407e02ea;
    _DAT_14ca03fa8 = FUN_146826273;
    _DAT_14ca03f80 = FUN_1472261d2;
    _DAT_14ca03fc0 = 0xffffffff000000e0;
    _DAT_14ca03fc8 = 8;
    DAT_14ca03fcc = 0;
    _DAT_14ca03fb0 = &LAB_1472261fc;
    FUN_145ecee82();
    FUN_1407e00cc(&DAT_14ca03f68);
    return;
  }
  return;
}



// FUNCTION 145ecee82 FUN_145ecee82 body=123 status=ok
// SIG undefined FUN_145ecee82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecee82(void)

{
  _DAT_14ca08028 = L"BASE";
  DAT_14ca08052 = 4;
  _DAT_14ca08030 = FUN_140b35ae4();
  _DAT_14ca08038 = DAT_14ca03f78;
  _DAT_14ca08040 = &LAB_14682652b;
  DAT_14ca03f78 = &DAT_14ca08028;
  DAT_14ca03fcd = DAT_14ca03fcd + '\x01';
  _DAT_14ca08048 = 0x100000000;
  if (*(char *)(_DAT_14ca08030 + 100) != '\0') {
    DAT_14ca03fce = DAT_14ca03fce + '\x01';
  }
  return;
}



// FUNCTION 145eceefe FUN_145eceefe body=261 status=ok
// SIG undefined FUN_145eceefe(void)

void FUN_145eceefe(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca06dd8) {
    FUN_144b3d300(&DAT_14ca06dd8);
    if (DAT_14ca06dd8 == -1) {
      FUN_145ecf004(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x13b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca06d58,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd3aeb);
      _Init_thread_footer(&DAT_14ca06dd8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ecf004 FUN_145ecf004 body=226 status=ok
// SIG undefined FUN_145ecf004(void)

longlong * FUN_145ecf004(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462eaaa8;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ecf0ec FUN_145ecf0ec body=132 status=ok
// SIG undefined FUN_145ecf0ec(void)

undefined1 * FUN_145ecf0ec(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RayAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145ecf0e8;
}



// FUNCTION 145ecf170 FUN_145ecf170 body=205 status=ok
// SIG undefined FUN_145ecf170(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecf170(void)

{
  if ((DAT_14c9f8a77 & 2) == 0) {
    DAT_14c9f8a77 = DAT_14c9f8a77 | 2;
    _DAT_14c9f8a18 = L"FInitializeCardTileIndirectArgsCS";
    _DAT_14c9f8a30 = FUN_146826540;
    _DAT_14c9f8a38 = FUN_146825d77;
    _DAT_14c9f8a40 = FUN_146825fd6;
    _DAT_14c9f8a48 = FUN_1407e02ea;
    _DAT_14c9f8a50 = FUN_146826273;
    _DAT_14c9f8a28 = FUN_1472049cc;
    _DAT_14c9f8a68 = 0xffffffff000000e0;
    _DAT_14c9f8a70 = 8;
    DAT_14c9f8a74 = 0;
    _DAT_14c9f8a58 = &LAB_1472049f6;
    FUN_145ecf23e();
    FUN_1407e00cc(&DAT_14c9f8a10);
    return;
  }
  return;
}



// FUNCTION 145ecf23e FUN_145ecf23e body=123 status=ok
// SIG undefined FUN_145ecf23e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecf23e(void)

{
  _DAT_14c9ffb58 = L"BASE";
  DAT_14c9ffb82 = 4;
  _DAT_14c9ffb60 = FUN_140b35ae4();
  _DAT_14c9ffb68 = DAT_14c9f8a20;
  _DAT_14c9ffb70 = &LAB_14682652b;
  DAT_14c9f8a20 = &DAT_14c9ffb58;
  DAT_14c9f8a75 = DAT_14c9f8a75 + '\x01';
  _DAT_14c9ffb78 = 0x100000000;
  if (*(char *)(_DAT_14c9ffb60 + 100) != '\0') {
    DAT_14c9f8a76 = DAT_14c9f8a76 + '\x01';
  }
  return;
}



// FUNCTION 145ecf2ba FUN_145ecf2ba body=226 status=ok
// SIG undefined FUN_145ecf2ba(void)

longlong * FUN_145ecf2ba(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e1ada;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ecf3a2 FUN_145ecf3a2 body=132 status=ok
// SIG undefined FUN_145ecf3a2(void)

undefined1 * FUN_145ecf3a2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWDispatchCardTilesIndirectArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145ecf39e;
}



// FUNCTION 145ecf426 FUN_145ecf426 body=205 status=ok
// SIG undefined FUN_145ecf426(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecf426(void)

{
  if ((DAT_14c9fce37 & 2) == 0) {
    DAT_14c9fce37 = DAT_14c9fce37 | 2;
    _DAT_14c9fcdd8 = L"FSetupAdaptiveProbeIndirectArgsCS";
    _DAT_14c9fcdf0 = FUN_146826540;
    _DAT_14c9fcdf8 = FUN_146825d77;
    _DAT_14c9fce00 = FUN_146825fd6;
    _DAT_14c9fce08 = FUN_1407e02ea;
    _DAT_14c9fce10 = FUN_146826273;
    _DAT_14c9fcde8 = FUN_147208efe;
    _DAT_14c9fce28 = 0xffffffff000000e0;
    _DAT_14c9fce30 = 8;
    DAT_14c9fce34 = 0;
    _DAT_14c9fce18 = &LAB_147208f28;
    FUN_145ecf4f4();
    FUN_1407e00cc(&DAT_14c9fcdd0);
    return;
  }
  return;
}



// FUNCTION 145ecf4f4 FUN_145ecf4f4 body=123 status=ok
// SIG undefined FUN_145ecf4f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecf4f4(void)

{
  _DAT_14ca005e8 = L"BASE";
  DAT_14ca00612 = 4;
  _DAT_14ca005f0 = FUN_140b35ae4();
  _DAT_14ca005f8 = DAT_14c9fcde0;
  _DAT_14ca00600 = &LAB_14682652b;
  DAT_14c9fcde0 = &DAT_14ca005e8;
  DAT_14c9fce35 = DAT_14c9fce35 + '\x01';
  _DAT_14ca00608 = 0x100000000;
  if (*(char *)(_DAT_14ca005f0 + 100) != '\0') {
    DAT_14c9fce36 = DAT_14c9fce36 + '\x01';
  }
  return;
}



// FUNCTION 145ecf570 FUN_145ecf570 body=226 status=ok
// SIG undefined FUN_145ecf570(void)

longlong * FUN_145ecf570(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e602a;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ecf658 FUN_145ecf658 body=132 status=ok
// SIG undefined FUN_145ecf658(void)

undefined1 * FUN_145ecf658(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWScreenProbeIndirectArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 700;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145ecf654;
}



// FUNCTION 145ecf6dc FUN_145ecf6dc body=205 status=ok
// SIG undefined FUN_145ecf6dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecf6dc(void)

{
  if ((DAT_14ca1ca77 & 2) == 0) {
    DAT_14ca1ca77 = DAT_14ca1ca77 | 2;
    _DAT_14ca1ca18 = L"FOITSortTriangleIndex_AllocateCS";
    _DAT_14ca1ca30 = FUN_146826540;
    _DAT_14ca1ca38 = FUN_146825d77;
    _DAT_14ca1ca40 = FUN_146825fd6;
    _DAT_14ca1ca48 = FUN_1407e02ea;
    _DAT_14ca1ca50 = FUN_146826273;
    _DAT_14ca1ca28 = FUN_147271034;
    _DAT_14ca1ca68 = 0xffffffff000000e0;
    _DAT_14ca1ca70 = 8;
    DAT_14ca1ca74 = 0;
    _DAT_14ca1ca58 = &LAB_147271060;
    FUN_145ecf7aa();
    FUN_1407e00cc(&DAT_14ca1ca10);
    return;
  }
  return;
}



// FUNCTION 145ecf7aa FUN_145ecf7aa body=123 status=ok
// SIG undefined FUN_145ecf7aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecf7aa(void)

{
  _DAT_14ca246f0 = L"BASE";
  DAT_14ca2471a = 4;
  _DAT_14ca246f8 = FUN_140b35ae4();
  _DAT_14ca24700 = DAT_14ca1ca20;
  _DAT_14ca24708 = &LAB_14682652b;
  DAT_14ca1ca20 = &DAT_14ca246f0;
  DAT_14ca1ca75 = DAT_14ca1ca75 + '\x01';
  _DAT_14ca24710 = 0x100000000;
  if (*(char *)(_DAT_14ca246f8 + 100) != '\0') {
    DAT_14ca1ca76 = DAT_14ca1ca76 + '\x01';
  }
  return;
}



// FUNCTION 145ecf826 FUN_145ecf826 body=226 status=ok
// SIG undefined FUN_145ecf826(void)

longlong * FUN_145ecf826(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f5720;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ecf90e FUN_145ecf90e body=132 status=ok
// SIG undefined FUN_145ecf90e(void)

undefined1 * FUN_145ecf90e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SliceCounterBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1fb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145ecf90a;
}



// FUNCTION 145ecf992 FUN_145ecf992 body=205 status=ok
// SIG undefined FUN_145ecf992(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecf992(void)

{
  if ((DAT_14ca271f7 & 2) == 0) {
    DAT_14ca271f7 = DAT_14ca271f7 | 2;
    _DAT_14ca27198 = L"FCopyEyeAdaptationToTextureCS";
    _DAT_14ca271b0 = FUN_146826540;
    _DAT_14ca271b8 = FUN_146825d77;
    _DAT_14ca271c0 = FUN_146825fd6;
    _DAT_14ca271c8 = FUN_1407e02ea;
    _DAT_14ca271d0 = FUN_146826273;
    _DAT_14ca271a8 = FUN_14728b566;
    _DAT_14ca271e8 = 0xffffffff000000e0;
    _DAT_14ca271f0 = 8;
    DAT_14ca271f4 = 0;
    _DAT_14ca271d8 = &LAB_14728b592;
    FUN_145ecfa60();
    FUN_1407e00cc(&DAT_14ca27190);
    return;
  }
  return;
}



// FUNCTION 145ecfa60 FUN_145ecfa60 body=123 status=ok
// SIG undefined FUN_145ecfa60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ecfa60(void)

{
  _DAT_14ca2c120 = L"BASE";
  DAT_14ca2c14a = 4;
  _DAT_14ca2c128 = FUN_140b35ae4();
  _DAT_14ca2c130 = DAT_14ca271a0;
  _DAT_14ca2c138 = &LAB_14682652b;
  DAT_14ca271a0 = &DAT_14ca2c120;
  DAT_14ca271f5 = DAT_14ca271f5 + '\x01';
  _DAT_14ca2c140 = 0x100000000;
  if (*(char *)(_DAT_14ca2c128 + 100) != '\0') {
    DAT_14ca271f6 = DAT_14ca271f6 + '\x01';
  }
  return;
}



// FUNCTION 145ecfadc FUN_145ecfadc body=226 status=ok
// SIG undefined FUN_145ecfadc(void)

longlong * FUN_145ecfadc(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462fa34a;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ecfbc4 FUN_145ecfbc4 body=132 status=ok
// SIG undefined FUN_145ecfbc4(void)

undefined1 * FUN_145ecfbc4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"EyeAdaptationBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x24f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145ecfbc0;
}



// FUNCTION 145ecfc48 FUN_145ecfc48 body=9 status=ok
// SIG undefined FUN_145ecfc48(void)

void FUN_145ecfc48(longlong param_1)

{
  FUN_145ecfc52(param_1 + 0x10);
  return;
}



// FUNCTION 145ecfc52 FUN_145ecfc52 body=178 status=ok
// SIG undefined FUN_145ecfc52(void)

void FUN_145ecfc52(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x17));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_145ecfd04(param_1 + 5);
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
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ecfd04 FUN_145ecfd04 body=53 status=ok
// SIG undefined FUN_145ecfd04(void)

void FUN_145ecfd04(longlong *param_1)

{
  FUN_145ecfd3a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ecfd3a FUN_145ecfd3a body=378 status=ok
// SIG undefined FUN_145ecfd3a(void)

void FUN_145ecfd3a(longlong *param_1)

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
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
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
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ecfec0 FUN_145ecfec0 body=237 status=ok
// SIG undefined FUN_145ecfec0(void)

undefined8 * FUN_145ecfec0(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a666df0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb4a8) {
    FUN_144b3d300(&DAT_14caeb4a8);
    if (DAT_14caeb4a8 == -1) {
      FUN_141585696();
      atexit((_func_5014 *)&LAB_14356e0d7);
      _Init_thread_footer(&DAT_14caeb4a8);
    }
  }
  *(undefined4 *)(param_1 + 0x1b) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x21) = 0x3d23d70a;
  return param_1;
}



// FUNCTION 145ecffae FUN_145ecffae body=55 status=ok
// SIG undefined FUN_145ecffae(void)

void FUN_145ecffae(longlong *param_1)

{
  FUN_145ecffe6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ecffe6 FUN_145ecffe6 body=356 status=ok
// SIG undefined FUN_145ecffe6(void)

void FUN_145ecffe6(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      if (*(longlong *)(*local_70 + 0x28 + (longlong)iStack_54 * 0x58) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140e91948(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ed014c FUN_145ed014c body=345 status=ok
// SIG undefined FUN_145ed014c(void)

undefined4 * FUN_145ed014c(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
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
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145ed0496(param_1,local_48);
  FUN_145ed02a6(param_3,local_40);
  *(undefined4 *)(local_40 + 0x11) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar4 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar5 = (uint)uVar1 & 0xffff;
  uVar4 = FUN_144a78877(((uint)uVar1 << 0x10 | uVar5) + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar5 >> 4),
                        *(undefined4 *)(local_40 + 1));
  cVar3 = FUN_145ed03e8(param_1,uVar4,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x8c) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x11) =
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
      FUN_145ed0592(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed02a6 FUN_145ed02a6 body=170 status=ok
// SIG undefined FUN_145ed02a6(void)

undefined8 * FUN_145ed02a6(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [32];
  undefined **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = &PTR_FUN_14a1701c0;
  local_48 = 0;
  local_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_3c = 0xffffffff00000080;
  local_34 = 0;
  local_28 = 0;
  local_20 = 0;
  puVar1 = (undefined8 *)*param_1;
  *param_2 = *puVar1;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar1 + 1);
  param_2[2] = 0;
  FUN_145ed0352(param_2 + 3,&local_88);
  FUN_14122c31a(&local_88);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed0352 FUN_145ed0352 body=149 status=ok
// SIG undefined FUN_145ed0352(void)

undefined8 * FUN_145ed0352(undefined8 *param_1,longlong param_2)

{
  *param_1 = &DAT_14a171d50;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  FUN_1406022fe(param_1 + 2,param_2 + 0x10);
  *param_1 = &PTR_FUN_14a1701c0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  FUN_140d188f2(param_1 + 4,param_2 + 0x20);
  FUN_14087dfa2(param_2 + 0x20,0);
  return param_1;
}



// FUNCTION 145ed03e8 FUN_145ed03e8 body=173 status=ok
// SIG undefined FUN_145ed03e8(void)

undefined8 FUN_145ed03e8(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar3 * 0x90;
        _Dst = (void *)(lVar1 + lVar4);
        if ((*(longlong *)(lVar1 + lVar4) == *param_3) &&
           (*(int *)(lVar1 + 8 + lVar4) == (int)param_3[1])) {
          FUN_14122c31a((longlong)_Dst + 0x18);
          memmove(_Dst,param_3,0x88);
          FUN_1487b825a(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)_Dst + 0x88);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 145ed0496 FUN_145ed0496 body=251 status=ok
// SIG undefined FUN_145ed0496(void)

int * FUN_145ed0496(longlong *param_1,int *param_2)

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
      FUN_140f20a84(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x90);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x90) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x90 + *param_1;
  return param_2;
}



// FUNCTION 145ed0592 FUN_145ed0592 body=511 status=ok
// SIG undefined FUN_145ed0592(void)

void FUN_145ed0592(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x90;
        uVar4 = *(undefined8 *)(lVar3 + lVar10);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar9 = (uint)uVar4 & 0xffff;
        iVar6 = FUN_144a78877(((uint)uVar4 << 0x10 | uVar9) + (int)((ulonglong)uVar4 >> 0x20) +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4),
                              *(undefined4 *)(lVar3 + 8 + lVar10));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x8c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x88 + lVar10) =
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



// FUNCTION 145ed0792 FUN_145ed0792 body=40 status=ok
// SIG undefined FUN_145ed0792(void)

undefined8 FUN_145ed0792(undefined8 param_1,int param_2)

{
  FUN_145ed07ba();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ed07ba FUN_145ed07ba body=649 status=ok
// SIG undefined FUN_145ed07ba(void)

void FUN_145ed07ba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14acb0850;
  FUN_144760e21(param_1[0x8d],*(undefined4 *)(param_1 + 0x8e));
  if (param_1[0x8d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x88] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x86] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x59) = 0;
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  FUN_145ed0a44(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_145ed0a7a(param_1 + 0x43);
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x3d],*(undefined4 *)(param_1 + 0x3e));
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x39],*(undefined4 *)(param_1 + 0x3a));
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x2f);
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_14062c7dc(param_1 + 0x22);
  FUN_145ed0ae5(param_1[0x20],*(undefined4 *)(param_1 + 0x21));
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_145ed0ab0(param_1 + 0xc);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ed0a44 FUN_145ed0a44 body=53 status=ok
// SIG undefined FUN_145ed0a44(void)

void FUN_145ed0a44(longlong *param_1)

{
  FUN_145ed0b24();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ed0a7a FUN_145ed0a7a body=53 status=ok
// SIG undefined FUN_145ed0a7a(void)

void FUN_145ed0a7a(longlong *param_1)

{
  FUN_145ed0cb8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ed0ab0 FUN_145ed0ab0 body=53 status=ok
// SIG undefined FUN_145ed0ab0(void)

void FUN_145ed0ab0(longlong *param_1)

{
  FUN_145ed0b7c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ed0ae5 FUN_145ed0ae5 body=62 status=ok
// SIG undefined FUN_145ed0ae5(void)

void FUN_145ed0ae5(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145ed0b24 FUN_145ed0b24 body=88 status=ok
// SIG undefined FUN_145ed0b24(void)

void FUN_145ed0b24(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145ed0b7c FUN_145ed0b7c body=314 status=ok
// SIG undefined FUN_145ed0b7c(void)

void FUN_145ed0b7c(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed0cb8 FUN_145ed0cb8 body=340 status=ok
// SIG undefined FUN_145ed0cb8(void)

void FUN_145ed0cb8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c;
      if (*(longlong *)(lVar2 + 0x10 + lVar3 * 0x28) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar3 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed0e0e FUN_145ed0e0e body=40 status=ok
// SIG undefined FUN_145ed0e0e(void)

undefined8 FUN_145ed0e0e(undefined8 param_1,int param_2)

{
  FUN_145ed0e36();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ed0e36 FUN_145ed0e36 body=158 status=ok
// SIG undefined FUN_145ed0e36(void)

void FUN_145ed0e36(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4cbfa0;
  plVar3 = (longlong *)param_1[0x1d];
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
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_145ed0ed4(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145ed0f0a(param_1 + 8);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ed0ed4 FUN_145ed0ed4 body=53 status=ok
// SIG undefined FUN_145ed0ed4(void)

void FUN_145ed0ed4(longlong *param_1)

{
  FUN_145ed0f40();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ed0f0a FUN_145ed0f0a body=53 status=ok
// SIG undefined FUN_145ed0f0a(void)

void FUN_145ed0f0a(longlong *param_1)

{
  FUN_145ed109c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ed0f40 FUN_145ed0f40 body=346 status=ok
// SIG undefined FUN_145ed0f40(void)

void FUN_145ed0f40(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_1476641e4(*local_68 + (longlong)iStack_4c * 0x168 + 0x10);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14062c0ca(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ed109c FUN_145ed109c body=382 status=ok
// SIG undefined FUN_145ed109c(void)

void FUN_145ed109c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_14766429c(lVar2 + lVar3 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ed121c FUN_145ed121c body=232 status=ok
// SIG undefined FUN_145ed121c(void)

int FUN_145ed121c(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 auStack_98 [44];
  int local_6c;
  code *local_68 [2];
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_6c = 0;
  local_68[0] = (code *)0x0;
  local_58 = (longlong *)FUN_14001cc68(0x28,8);
  *local_58 = (longlong)&PTR_FUN_14b4211d0;
  local_58[1] = (longlong)&local_6c;
  local_58[2] = param_3;
  local_58[3] = param_2;
  local_58[4] = param_1;
  if (local_58 + 1 != (longlong *)0x0) {
    local_68[0] = FUN_143e0c704;
  }
  FUN_14158573c(param_2,local_68);
  if (local_68[0] != (code *)0x0) {
    plVar1 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar1 = local_48;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (0 < local_6c) {
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
    *(char *)(param_1 + 0xc0) = *(char *)(param_1 + 0xc0) + '\x01';
    FUN_1410cebe2(param_1 + 0x60,param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return local_6c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed1306 FUN_145ed1306 body=161 status=ok
// SIG undefined FUN_145ed1306(void)

void FUN_145ed1306(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [44];
  undefined8 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(byte *)(*param_1 + 0x29) & 2) == 0) && (lVar2 = param_2[1], (longlong)(int)lVar2 != 0)) {
    lVar1 = *param_2;
    lVar3 = 0;
    do {
      local_3c = 0;
      (**(code **)(*(longlong *)*param_1 + 0x160))((longlong *)*param_1,&local_3c);
      local_34 = FUN_14170f73a(param_1);
      *(undefined8 *)(lVar1 + lVar3) = local_3c;
      *(undefined4 *)(lVar1 + 8 + lVar3) = local_34;
      lVar3 = lVar3 + 0xc;
    } while ((longlong)(int)lVar2 * 0xc != lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ed13a8 FUN_145ed13a8 body=180 status=ok
// SIG undefined FUN_145ed13a8(void)

void FUN_145ed13a8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(byte *)(*param_1 + 0x29) & 2) == 0) && ((longlong)(int)param_2[1] != 0)) {
    plVar5 = (longlong *)*param_2;
    plVar4 = plVar5 + (longlong)(int)param_2[1] * 2;
    do {
      local_68 = 0;
      uStack_60 = 0;
      FUN_14021219d(*param_1,&local_68);
      lVar1 = local_68;
      uVar2 = (undefined4)uStack_60;
      uVar3 = uStack_60._4_4_;
      if (*plVar5 != 0) {
        FUN_1400020a8();
      }
      *plVar5 = lVar1;
      *(undefined4 *)(plVar5 + 1) = uVar2;
      *(undefined4 *)((longlong)plVar5 + 0xc) = uVar3;
      plVar5 = plVar5 + 2;
    } while (plVar5 != plVar4);
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed145e FUN_145ed145e body=115 status=ok
// SIG undefined FUN_145ed145e(void)

undefined8 * FUN_145ed145e(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  plVar1 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x160))();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x160))(plVar1,param_2 + 1);
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x160))(plVar1,param_2 + 4);
  (**(code **)(*plVar1 + 0x160))(plVar1,param_2 + 3);
  return param_2;
}



// FUNCTION 145ed14d2 FUN_145ed14d2 body=226 status=ok
// SIG undefined FUN_145ed14d2(void)

longlong * FUN_145ed14d2(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f1a38;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed15ba FUN_145ed15ba body=132 status=ok
// SIG undefined FUN_145ed15ba(void)

undefined1 * FUN_145ed15ba(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWVisiblePatchesArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer< uint >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4c0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145ed15b6;
}



// FUNCTION 145ed163e FUN_145ed163e body=226 status=ok
// SIG undefined FUN_145ed163e(void)

longlong * FUN_145ed163e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f1ce2;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed1726 FUN_145ed1726 body=132 status=ok
// SIG undefined FUN_145ed1726(void)

undefined1 * FUN_145ed1726(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutRasterBinMeta";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<FNaniteRasterBinMeta>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x517;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145ed1722;
}



// FUNCTION 145ed17aa FUN_145ed17aa body=38 status=ok
// SIG undefined FUN_145ed17aa(void)

undefined8 FUN_145ed17aa(undefined8 param_1,int param_2)

{
  FUN_145ed17d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ed17d0 FUN_145ed17d0 body=169 status=ok
// SIG undefined FUN_145ed17d0(void)

void FUN_145ed17d0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5aaae0;
  FUN_1449db362(param_1 + 9);
  FUN_1449db362(param_1 + 7);
  plVar3 = (longlong *)param_1[6];
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
  plVar3 = (longlong *)param_1[4];
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
                    /* WARNING: Could not recover jumptable at 0x000145ed1875. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145ed1884 FUN_145ed1884 body=195 status=ok
// SIG undefined FUN_145ed1884(void)

undefined8 * FUN_145ed1884(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145a6efa2();
  *param_1 = &PTR_FUN_14a73dfa0;
  param_1[0x74] = 0;
  FUN_1446f470e(&local_20,L"NewSceneCaptureComponent2D",1);
  uVar1 = FUN_140bf2008();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x74] = lVar2;
  FUN_140486fc4(lVar2,param_1[0x39],0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed1954 FUN_145ed1954 body=195 status=ok
// SIG undefined FUN_145ed1954(void)

undefined8 * FUN_145ed1954(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145a6efa2();
  *param_1 = &PTR_FUN_14a73e5e0;
  param_1[0x74] = 0;
  FUN_1446f470e(&local_20,L"NewSceneCaptureComponentCube",1);
  uVar1 = FUN_145959776();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x74] = lVar2;
  FUN_140486fc4(lVar2,param_1[0x39],0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed1a24 FUN_145ed1a24 body=196 status=ok
// SIG undefined FUN_145ed1a24(void)

undefined8 * FUN_145ed1a24(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a7d54d0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  return param_1;
}



// FUNCTION 145ed1ae8 FUN_145ed1ae8 body=40 status=ok
// SIG undefined FUN_145ed1ae8(void)

undefined8 FUN_145ed1ae8(undefined8 param_1,int param_2)

{
  FUN_145ed1b10();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ed1b10 FUN_145ed1b10 body=167 status=ok
// SIG undefined FUN_145ed1b10(void)

void FUN_145ed1b10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a84a420;
  param_1[5] = &PTR_FUN_14a84a9c0;
  param_1[6] = &PTR_LAB_14a84aa00;
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 145ed1bb8 FUN_145ed1bb8 body=40 status=ok
// SIG undefined FUN_145ed1bb8(void)

undefined8 FUN_145ed1bb8(undefined8 param_1,int param_2)

{
  FUN_145ed1be0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ed1be0 FUN_145ed1be0 body=167 status=ok
// SIG undefined FUN_145ed1be0(void)

void FUN_145ed1be0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0696e0;
  FUN_140134bd1(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_140134bd1(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_14588b30a(param_1 + 7);
  return;
}



// FUNCTION 145ed1c88 FUN_145ed1c88 body=26 status=ok
// SIG undefined FUN_145ed1c88(void)

void FUN_145ed1c88(undefined8 param_1)

{
  FUN_145ed1ca2();
  FUN_140cef0ca(param_1);
  return;
}



// FUNCTION 145ed1ca2 FUN_145ed1ca2 body=181 status=ok
// SIG undefined FUN_145ed1ca2(void)

void FUN_145ed1ca2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined8 **)(param_1 + 0x6c);
  iVar1 = FUN_145ed1d58((uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30);
  lVar2 = (longlong)iVar1 * 0x20 + DAT_14cb85a50;
  if (lVar2 != 0 && iVar1 != -1) {
    local_38 = 0;
    FUN_14485c47a(&local_38,param_1);
    local_30 = &local_38;
    FUN_1488f24e2(lVar2 + 8);
    if (*(int *)(lVar2 + 0x10) == 0) {
      FUN_1488f2622(*(undefined8 *)(param_1 + 0x6c));
    }
  }
  *(undefined8 *)(param_1 + 0x6c) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed1d58 FUN_145ed1d58 body=205 status=ok
// SIG undefined FUN_145ed1d58(void)

int FUN_145ed1d58(uint param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb85a58 != DAT_14cb85a84) {
    puVar2 = &DAT_14cb85a88;
    if (DAT_14cb85a90 != (undefined *)0x0) {
      puVar2 = DAT_14cb85a90;
    }
    iVar3 = *(int *)(puVar2 + (ulonglong)(DAT_14cb85a98 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        local_40 = *param_2;
        local_38 = *(undefined8 *)(DAT_14cb85a50 + (longlong)iVar3 * 0x20);
        cVar1 = FUN_140d09c9e(&local_38,&local_40);
        if (cVar1 != '\0') goto LAB_145ed1d85;
        iVar3 = *(int *)(DAT_14cb85a50 + 0x18 + (longlong)iVar3 * 0x20);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_145ed1d85:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 145ed1e26 FUN_145ed1e26 body=152 status=ok
// SIG undefined FUN_145ed1e26(void)

void FUN_145ed1e26(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  FUN_1407cbe30();
  uVar3 = FUN_1411fcbf4();
  *(undefined4 *)(param_1 + 0x298) = uVar3;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    uVar2 = FUN_145ed1ebe();
    FUN_144a2e342(lVar1,param_1 + 0x160,uVar2);
    if (*(longlong *)(param_1 + 0x160) == 0) {
      puVar4 = &DAT_14c9a1308;
    }
    else {
      puVar4 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbdc400);
    }
    uVar3 = FUN_140b963dc(puVar4,0x40000000);
    *(undefined4 *)(param_1 + 0x2a4) = uVar3;
    FUN_140ac6c96(&DAT_14cbdc3d8,param_1 + 0x2b0);
    return;
  }
  return;
}



// FUNCTION 145ed1ebe FUN_145ed1ebe body=55 status=ok
// SIG undefined FUN_145ed1ebe(void)

void FUN_145ed1ebe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbc8e8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbc8e8 = FUN_140002ddd(FUN_14660b518,uVar1,L"OakWidgetData_XPBar");
  }
  return;
}



// FUNCTION 145ed1f00 FUN_145ed1f00 body=195 status=ok
// SIG undefined FUN_145ed1f00(void)

undefined8 * FUN_145ed1f00(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14bc5d4b0;
  FUN_144a5dc74(param_1 + 5);
  FUN_144a5dc74(param_1 + 7);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_140056680(local_48,L"Variant Set");
  FUN_140233b1a(local_38,local_48);
  FUN_140008f88(param_1 + 7,local_38);
  if (local_38[0] != (longlong *)0x0) {
    (**(code **)(*local_38[0] + 0x10))();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(param_1 + 9) = 1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed1fc4 FUN_145ed1fc4 body=40 status=ok
// SIG undefined FUN_145ed1fc4(void)

undefined8 FUN_145ed1fc4(undefined8 param_1,int param_2)

{
  FUN_145ed1fec();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ed1fec FUN_145ed1fec body=150 status=ok
// SIG undefined FUN_145ed1fec(void)

void FUN_145ed1fec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcc9e40;
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x19);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_145ed2082(param_1 + 0xf);
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_145ed20b8(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ed2082 FUN_145ed2082 body=53 status=ok
// SIG undefined FUN_145ed2082(void)

void FUN_145ed2082(longlong *param_1)

{
  FUN_145ed20ee();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ed20b8 FUN_145ed20b8 body=53 status=ok
// SIG undefined FUN_145ed20b8(void)

void FUN_145ed20b8(longlong *param_1)

{
  FUN_145ed2260();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ed20ee FUN_145ed20ee body=368 status=ok
// SIG undefined FUN_145ed20ee(void)

void FUN_145ed20ee(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
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
      plVar2 = (longlong *)(*local_70 + (longlong)iStack_54 * 0x98);
      FUN_1494412da(plVar2 + 2);
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140f776e6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ed2260 FUN_145ed2260 body=369 status=ok
// SIG undefined FUN_145ed2260(void)

void FUN_145ed2260(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
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
      plVar2 = (longlong *)(*local_70 + (longlong)iStack_54 * 0x50);
      FUN_14944163a(plVar2 + 2);
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e9549c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ed23d2 FUN_145ed23d2 body=40 status=ok
// SIG undefined FUN_145ed23d2(void)

undefined8 FUN_145ed23d2(undefined8 param_1,int param_2)

{
  FUN_145ed23fa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ed23fa FUN_145ed23fa body=167 status=ok
// SIG undefined FUN_145ed23fa(void)

void FUN_145ed23fa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd7ed10;
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_140e36c74(param_1);
  return;
}



// FUNCTION 145ed24a2 FUN_145ed24a2 body=40 status=ok
// SIG undefined FUN_145ed24a2(void)

undefined8 FUN_145ed24a2(undefined8 param_1,int param_2)

{
  FUN_145ed24ca();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ed24ca FUN_145ed24ca body=167 status=ok
// SIG undefined FUN_145ed24ca(void)

void FUN_145ed24ca(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14bda2f40;
  param_1[5] = &PTR_FUN_14bda32f0;
  param_1[0x13] = &PTR_FUN_14bda3310;
  param_1[0x16] = &PTR_FUN_14bda3340;
  FUN_14008cd94(param_1 + 0x34);
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  lVar3 = param_1[0x31];
  if (lVar3 != 0) {
    (**(code **)(lVar3 + -0x10))(lVar3 + -0x10);
  }
  plVar4 = (longlong *)param_1[0x1d];
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
  thunk_FUN_1411412f4(param_1);
  return;
}



// FUNCTION 145ed2572 FUN_145ed2572 body=178 status=ok
// SIG undefined FUN_145ed2572(void)

void FUN_145ed2572(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_145ed264a(param_1 + 0x48);
  FUN_145ed268e(param_1 + 0x98);
  puVar2 = *(undefined8 **)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x140) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  lVar4 = FUN_144a2383e();
  if (lVar4 != 0) {
    FUN_140457ffc(lVar4 + 0x580,param_1);
  }
  iVar1 = *(int *)(param_1 + 0x108);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x100);
    lVar5 = 0;
    do {
      if ((*(longlong *)(lVar4 + lVar5) != 0) &&
         (lVar3 = *(longlong *)(lVar4 + 8 + lVar5), lVar3 != 0)) {
        FUN_14480f766(lVar3 + 0xf8);
        *(undefined8 *)(lVar4 + lVar5) = 0;
      }
      lVar5 = lVar5 + 0x50;
    } while ((longlong)iVar1 * 0x50 != lVar5);
  }
  return;
}



// FUNCTION 145ed2624 FUN_145ed2624 body=38 status=ok
// SIG undefined FUN_145ed2624(void)

undefined8 FUN_145ed2624(undefined8 param_1,int param_2)

{
  FUN_145ed26d2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ed264a FUN_145ed264a body=67 status=ok
// SIG undefined FUN_145ed264a(void)

void FUN_145ed264a(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_14574fab6(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_140869a1c(param_1);
    return;
  }
  FUN_145ed286e(param_1);
  FUN_14574fab6(param_1,0);
  return;
}



// FUNCTION 145ed268e FUN_145ed268e body=67 status=ok
// SIG undefined FUN_145ed268e(void)

void FUN_145ed268e(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145ed2728(param_1);
    FUN_1458c9128(param_1,0);
    return;
  }
  FUN_1458c9128(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1458f6260(param_1);
  return;
}



// FUNCTION 145ed26d2 FUN_145ed26d2 body=85 status=ok
// SIG undefined FUN_145ed26d2(void)

void FUN_145ed26d2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9d6900;
  if (*(char *)(param_1 + 0x38) == '\x01') {
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_1457b7d70(param_1);
  return;
}



// FUNCTION 145ed2728 FUN_145ed2728 body=325 status=ok
// SIG undefined FUN_145ed2728(void)

void FUN_145ed2728(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 145ed286e FUN_145ed286e body=325 status=ok
// SIG undefined FUN_145ed286e(void)

void FUN_145ed286e(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x44 + (longlong)iVar4 * 0x48) * 4) =
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



// FUNCTION 145ed29b4 FUN_145ed29b4 body=144 status=ok
// SIG undefined FUN_145ed29b4(void)

void FUN_145ed29b4(longlong *param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)((longlong)param_1 + 0x459) == '\0') {
    pcVar1 = (code *)param_1[0x80];
    if (pcVar1 != (code *)0x0) {
      plVar4 = param_1 + 0x84;
      if ((longlong *)param_1[0x82] != (longlong *)0x0) {
        plVar4 = (longlong *)param_1[0x82];
      }
      local_28 = param_2;
      uVar3 = (**(code **)(*plVar4 + 8))();
      cVar2 = (*pcVar1)(uVar3,&local_28);
      if (cVar2 == '\0') goto LAB_145ed2a26;
    }
    *(undefined1 *)((longlong)param_1 + 0x459) = 1;
    (**(code **)(*param_1 + 0x5c8))(param_1,0);
  }
LAB_145ed2a26:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed2a46 FUN_145ed2a46 body=290 status=ok
// SIG undefined FUN_145ed2a46(void)

void FUN_145ed2a46(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_145ed2b6a(param_1 + 0x3a8);
  local_98 = *(longlong *)(param_1 + 0x400);
  uStack_50 = *(undefined8 *)(param_1 + 0x408);
  local_88 = *(longlong **)(param_1 + 0x410);
  uStack_40 = *(undefined8 *)(param_1 + 0x418);
  local_38 = *(undefined8 *)(param_1 + 0x420);
  uStack_30 = *(undefined8 *)(param_1 + 0x428);
  local_28 = *(undefined8 *)(param_1 + 0x430);
  uStack_20 = *(undefined8 *)(param_1 + 0x438);
  uVar5 = local_28;
  uVar6 = uStack_20;
  uVar3 = local_38;
  uVar4 = uStack_30;
  local_48 = local_88;
  uVar2 = uStack_40;
  local_58 = local_98;
  uVar1 = uStack_50;
  *(ulonglong *)(param_1 + 0x430) = CONCAT44(uStack_64,local_68);
  *(ulonglong *)(param_1 + 0x438) = CONCAT44(uStack_5c,uStack_60);
  *(ulonglong *)(param_1 + 0x420) = CONCAT44(uStack_74,local_78);
  *(ulonglong *)(param_1 + 0x428) = CONCAT44(uStack_6c,uStack_70);
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(ulonglong *)(param_1 + 0x418) = CONCAT44(uStack_7c,uStack_80);
  *(undefined8 *)(param_1 + 0x400) = 0;
  *(ulonglong *)(param_1 + 0x408) = CONCAT44(uStack_8c,uStack_90);
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
  uStack_50 = uVar1;
  uStack_40 = uVar2;
  local_38 = uVar3;
  uStack_30 = uVar4;
  local_28 = uVar5;
  uStack_20 = uVar6;
  if (local_98 != 0) {
    plVar7 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  FUN_140d5f028(param_1,param_2);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed2b6a FUN_145ed2b6a body=67 status=ok
// SIG undefined FUN_145ed2b6a(void)

void FUN_145ed2b6a(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145ed2bae(param_1);
    FUN_145afdab6(param_1,0);
    return;
  }
  FUN_145afdab6(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1457149cc(param_1);
  return;
}



// FUNCTION 145ed2bae FUN_145ed2bae body=325 status=ok
// SIG undefined FUN_145ed2bae(void)

void FUN_145ed2bae(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
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



// FUNCTION 145ed2cf4 FUN_145ed2cf4 body=112 status=ok
// SIG undefined FUN_145ed2cf4(void)

void FUN_145ed2cf4(void)

{
  FUN_141585c60(&DAT_14cae3b08,L"TGPUSkinVertexFactoryDefault",
                L"/Engine/Private/GpuSkinVertexFactory.ush",0x20ca,FUN_143518f9a,FUN_143518f7d,
                &LAB_143518f5f,FUN_143518ca8,FUN_1401fb960);
  atexit((_func_5014 *)&LAB_143518fc0);
  return;
}



// FUNCTION 145ed2d64 FUN_145ed2d64 body=132 status=ok
// SIG undefined FUN_145ed2d64(void)

void FUN_145ed2d64(longlong param_1,int param_2)

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



// FUNCTION 145ed2dea FUN_145ed2dea body=40 status=ok
// SIG undefined FUN_145ed2dea(void)

undefined8 FUN_145ed2dea(undefined8 param_1,int param_2)

{
  FUN_145ed2e12();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ed2e12 FUN_145ed2e12 body=106 status=ok
// SIG undefined FUN_145ed2e12(void)

void FUN_145ed2e12(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e8f040;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_1 + 0xf);
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_145ed2e7c(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ed2e7c FUN_145ed2e7c body=55 status=ok
// SIG undefined FUN_145ed2e7c(void)

void FUN_145ed2e7c(longlong *param_1)

{
  FUN_145ed2eb4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ed2eb4 FUN_145ed2eb4 body=420 status=ok
// SIG undefined FUN_145ed2eb4(void)

void FUN_145ed2eb4(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
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
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar5 = (longlong)iStack_64 * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar5) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar5) != 0) {
        FUN_1400020a8();
      }
      FUN_140bb2a1a(lVar2 + lVar5 + 8);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1448fc38a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar4 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar3 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ed305a FUN_145ed305a body=292 status=ok
// SIG undefined FUN_145ed305a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ed305a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ccdc8) {
    FUN_144b3d300(&DAT_14c9ccdc8);
    if (DAT_14c9ccdc8 == -1) {
      FUN_145ed32c8();
      FUN_145ed317e();
      FUN_140db5666(&DAT_14c9ccd20,0,&DAT_14c9cccb8,L"FGlobalDistanceFieldAccumulateUpdatedPagesCS",
                    L"/Engine/Private/DistanceField/GlobalDistanceFieldDebug.usf",
                    L"GlobalDistanceFieldAccumulateUpdatedPagesCS",5,1,FUN_14715b366,FUN_14715b306,
                    &LAB_1462c2060,&LAB_14715b302,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9ced10)
      ;
      _DAT_14c9ccd20 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c03e88);
      _Init_thread_footer(&DAT_14c9ccdc8);
    }
  }
  return &DAT_14c9ccd20;
}



// FUNCTION 145ed317e FUN_145ed317e body=205 status=ok
// SIG undefined FUN_145ed317e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ed317e(void)

{
  if ((DAT_14c9ccd1f & 2) == 0) {
    DAT_14c9ccd1f = DAT_14c9ccd1f | 2;
    _DAT_14c9cccc0 = L"FGlobalDistanceFieldAccumulateUpdatedPagesCS";
    _DAT_14c9cccd8 = FUN_146826540;
    _DAT_14c9ccce0 = FUN_146825d77;
    _DAT_14c9ccce8 = FUN_146825fd6;
    _DAT_14c9cccf0 = FUN_1407e02ea;
    _DAT_14c9cccf8 = FUN_146826273;
    _DAT_14c9cccd0 = FUN_14715b2d4;
    _DAT_14c9ccd10 = 0xffffffff000000e0;
    _DAT_14c9ccd18 = 8;
    DAT_14c9ccd1c = 0;
    _DAT_14c9ccd00 = &LAB_14715b2fe;
    FUN_145ed324c();
    FUN_1407e00cc(&DAT_14c9cccb8);
    return;
  }
  return;
}



// FUNCTION 145ed324c FUN_145ed324c body=123 status=ok
// SIG undefined FUN_145ed324c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ed324c(void)

{
  _DAT_14c9cf6d0 = L"BASE";
  DAT_14c9cf6fa = 4;
  _DAT_14c9cf6d8 = FUN_140b35ae4();
  _DAT_14c9cf6e0 = DAT_14c9cccc8;
  _DAT_14c9cf6e8 = &LAB_14682652b;
  DAT_14c9cccc8 = &DAT_14c9cf6d0;
  DAT_14c9ccd1d = DAT_14c9ccd1d + '\x01';
  _DAT_14c9cf6f0 = 0x100000000;
  if (*(char *)(_DAT_14c9cf6d8 + 100) != '\0') {
    DAT_14c9ccd1e = DAT_14c9ccd1e + '\x01';
  }
  return;
}



// FUNCTION 145ed32c8 FUN_145ed32c8 body=261 status=ok
// SIG undefined FUN_145ed32c8(void)

void FUN_145ed32c8(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ced90) {
    FUN_144b3d300(&DAT_14c9ced90);
    if (DAT_14c9ced90 == -1) {
      FUN_145ed33ce(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x7dd;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ced10,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c1e2a0);
      _Init_thread_footer(&DAT_14c9ced90);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed33ce FUN_145ed33ce body=226 status=ok
// SIG undefined FUN_145ed33ce(void)

longlong * FUN_145ed33ce(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c5034;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed34b6 FUN_145ed34b6 body=132 status=ok
// SIG undefined FUN_145ed34b6(void)

undefined1 * FUN_145ed34b6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWPageStatsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7de;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145ed34b2;
}



// FUNCTION 145ed353a FUN_145ed353a body=292 status=ok
// SIG undefined FUN_145ed353a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ed353a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d6880) {
    FUN_144b3d300(&DAT_14c9d6880);
    if (DAT_14c9d6880 == -1) {
      FUN_145ed37a8();
      FUN_145ed365e();
      FUN_140db5666(&DAT_14c9d67d8,0,&DAT_14c9d6770,L"FHairStrandsClearTransmittanceMaskCS",
                    L"/Engine/Private/HairStrands/HairStrandsDeepTransmittanceMask.usf",L"MainCS",5,
                    1,FUN_14717eec6,FUN_14717ee66,&LAB_1462ca3d2,&LAB_14717ee62,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9da1b8);
      _DAT_14c9d67d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c60a43);
      _Init_thread_footer(&DAT_14c9d6880);
    }
  }
  return &DAT_14c9d67d8;
}



// FUNCTION 145ed365e FUN_145ed365e body=205 status=ok
// SIG undefined FUN_145ed365e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ed365e(void)

{
  if ((DAT_14c9d67d7 & 2) == 0) {
    DAT_14c9d67d7 = DAT_14c9d67d7 | 2;
    _DAT_14c9d6778 = L"FHairStrandsClearTransmittanceMaskCS";
    _DAT_14c9d6790 = FUN_146826540;
    _DAT_14c9d6798 = FUN_146825d77;
    _DAT_14c9d67a0 = FUN_146825fd6;
    _DAT_14c9d67a8 = FUN_1407e02ea;
    _DAT_14c9d67b0 = FUN_146826273;
    _DAT_14c9d6788 = FUN_14717ee34;
    _DAT_14c9d67c8 = 0xffffffff000000e0;
    _DAT_14c9d67d0 = 8;
    DAT_14c9d67d4 = 0;
    _DAT_14c9d67b8 = &LAB_14717ee5e;
    FUN_145ed372c();
    FUN_1407e00cc(&DAT_14c9d6770);
    return;
  }
  return;
}



// FUNCTION 145ed372c FUN_145ed372c body=123 status=ok
// SIG undefined FUN_145ed372c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ed372c(void)

{
  _DAT_14c9db948 = L"BASE";
  DAT_14c9db972 = 4;
  _DAT_14c9db950 = FUN_140b35ae4();
  _DAT_14c9db958 = DAT_14c9d6780;
  _DAT_14c9db960 = &LAB_14682652b;
  DAT_14c9d6780 = &DAT_14c9db948;
  DAT_14c9d67d5 = DAT_14c9d67d5 + '\x01';
  _DAT_14c9db968 = 0x100000000;
  if (*(char *)(_DAT_14c9db950 + 100) != '\0') {
    DAT_14c9d67d6 = DAT_14c9d67d6 + '\x01';
  }
  return;
}



// FUNCTION 145ed37a8 FUN_145ed37a8 body=261 status=ok
// SIG undefined FUN_145ed37a8(void)

void FUN_145ed37a8(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9da238) {
    FUN_144b3d300(&DAT_14c9da238);
    if (DAT_14c9da238 == -1) {
      FUN_145ed38ae(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x7c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9da1b8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c70486);
      _Init_thread_footer(&DAT_14c9da238);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed38ae FUN_145ed38ae body=226 status=ok
// SIG undefined FUN_145ed38ae(void)

longlong * FUN_145ed38ae(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462cb098;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed3996 FUN_145ed3996 body=132 status=ok
// SIG undefined FUN_145ed3996(void)

undefined1 * FUN_145ed3996(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ElementCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145ed3992;
}



// FUNCTION 145ed3a1a FUN_145ed3a1a body=292 status=ok
// SIG undefined FUN_145ed3a1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ed3a1a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d7300) {
    FUN_144b3d300(&DAT_14c9d7300);
    if (DAT_14c9d7300 == -1) {
      FUN_145ed3c88();
      FUN_145ed3b3e();
      FUN_140db5666(&DAT_14c9d7258,0,&DAT_14c9d71f0,L"FHairLightSampleClearVS",
                    L"/Engine/Private/HairStrands/HairStrandsLightSample.usf",L"MainVS",0,1,
                    FUN_147181270,FUN_147181210,&LAB_1462ca404,&LAB_14718120c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9da4e8);
      _DAT_14c9d7258 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c647a8);
      _Init_thread_footer(&DAT_14c9d7300);
    }
  }
  return &DAT_14c9d7258;
}



// FUNCTION 145ed3b3e FUN_145ed3b3e body=205 status=ok
// SIG undefined FUN_145ed3b3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ed3b3e(void)

{
  if ((DAT_14c9d7257 & 2) == 0) {
    DAT_14c9d7257 = DAT_14c9d7257 | 2;
    _DAT_14c9d71f8 = L"FHairLightSampleClearVS";
    _DAT_14c9d7210 = FUN_146826540;
    _DAT_14c9d7218 = FUN_146825d77;
    _DAT_14c9d7220 = FUN_146825fd6;
    _DAT_14c9d7228 = FUN_1407e02ea;
    _DAT_14c9d7230 = FUN_146826273;
    _DAT_14c9d7208 = FUN_1471811de;
    _DAT_14c9d7248 = 0xffffffff000000e0;
    _DAT_14c9d7250 = 8;
    DAT_14c9d7254 = 0;
    _DAT_14c9d7238 = &LAB_147181208;
    FUN_145ed3c0c();
    FUN_1407e00cc(&DAT_14c9d71f0);
    return;
  }
  return;
}


