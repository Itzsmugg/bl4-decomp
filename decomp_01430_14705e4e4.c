// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14705e4e4 FUN_14705e4e4 body=264 status=ok
// SIG undefined FUN_14705e4e4(void)

undefined8 * FUN_14705e4e4(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_3 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x30 + (ulonglong)*(byte *)(*param_3 + 0xb) * 8);
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(param_1 + 0x30);
    }
    local_48 = *(longlong *)(param_1 + 0x848);
    local_40 = *(longlong *)(param_1 + 0x850);
    lVar1 = local_48;
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
      lVar1 = *(longlong *)(param_1 + 0x848);
    }
    uVar2 = FUN_14479d2ce(lVar1 + 0x10);
    local_58 = 0;
    uStack_50 = 0;
    local_38 = FUN_1458987e8();
    if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_38);
    }
    FUN_14704f518(uVar2,param_3,&local_38,&local_58);
    FUN_14705fbe6(param_2,&local_58,&local_48,lVar3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705e5f2 FUN_14705e5f2 body=158 status=ok
// SIG undefined FUN_14705e5f2(void)

undefined4 FUN_14705e5f2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = *(longlong **)(param_1 + 0x20);
  local_28 = *(undefined8 *)(param_1 + 0x10);
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 == (longlong *)0x0) {
    local_20 = (longlong *)0x0;
    uVar4 = (**(code **)(*plVar2 + 8))();
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_20 = plVar3;
    uVar4 = (**(code **)(*plVar2 + 8))();
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705e692 FUN_14705e692 body=192 status=ok
// SIG undefined FUN_14705e692(void)

undefined4 FUN_14705e692(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14705e4e4(param_1,&local_40,param_2);
  if ((local_20 == (longlong *)0x0 || local_30 == 0) || (local_38 == 0 || local_40 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*local_20 + 0x10))(local_20,&local_40,param_3);
  }
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
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 0xc) = *(int *)(local_40 + 0xc) + -1;
    UNLOCK();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705e754 FUN_14705e754 body=192 status=ok
// SIG undefined FUN_14705e754(void)

undefined4 FUN_14705e754(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14705e4e4(param_1,&local_40,param_2);
  if ((local_20 == (longlong *)0x0 || local_30 == 0) || (local_38 == 0 || local_40 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*local_20 + 0x18))(local_20,&local_40,param_3);
  }
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
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 0xc) = *(int *)(local_40 + 0xc) + -1;
    UNLOCK();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705e816 FUN_14705e816 body=657 status=ok
// SIG undefined FUN_14705e816(void)

ulonglong FUN_14705e816(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined1 local_ac;
  char local_ab;
  undefined8 local_aa;
  undefined2 local_a2;
  undefined4 local_a0;
  undefined1 local_9c;
  longlong local_98;
  longlong *plStack_90;
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14705e4e4(param_1,&local_98,param_2);
  if (((local_78 == (longlong *)0x0 || local_88 == 0) ||
       (plStack_90 == (longlong *)0x0 || local_98 == 0)) ||
     (cVar3 = (**(code **)(*local_78 + 0x10))(local_78,&local_98,param_3), cVar3 == '\0')) {
    uVar9 = 0;
  }
  else {
    local_68 = local_88;
    plStack_60 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
    }
    uVar5 = (**(code **)(*local_78 + 0x20))(local_78,&local_98,&local_68,param_3);
    uVar9 = (ulonglong)uVar5;
  }
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
  if (local_98 != 0) {
    LOCK();
    *(int *)(local_98 + 0xc) = *(int *)(local_98 + 0xc) + -1;
    UNLOCK();
  }
  if (*(char *)((longlong)param_3 + 5) != '\0') {
    uVar6 = FUN_14479d2ce(*(longlong *)(param_1 + 0x848) + 0x10);
    local_98 = 0;
    plStack_90 = (longlong *)0x0;
    local_68 = FUN_1458d3d9a();
    if ((local_68 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_68);
    }
    FUN_14704f518(uVar6,param_2,&local_68,&local_98);
    if (plStack_90 != (longlong *)0x0 && local_98 != 0) {
      local_9c = *(undefined1 *)(param_3 + 1);
      local_a0 = *param_3;
      local_58 = *(undefined8 *)((longlong)param_3 + 6);
      local_50 = *(undefined2 *)((longlong)param_3 + 0xe);
      cVar3 = *(char *)((longlong)param_3 + 5);
      if (cVar3 == '\x01') {
        cVar3 = '\0';
      }
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
      (**(code **)(*plStack_90 + 0x28))(plStack_90,&local_98,&local_68,1);
      uVar8 = 0;
      if ((longlong)(int)plStack_60 != 0) {
        lVar10 = (longlong)(int)plStack_60 << 3;
        lVar7 = local_68;
        do {
          local_ac = local_9c;
          local_b0 = local_a0;
          local_a2 = local_50;
          local_aa = local_58;
          local_ab = cVar3;
          bVar4 = FUN_14705e816(param_1,lVar7,&local_b0);
          uVar9 = CONCAT71((int7)(uVar9 >> 8),(byte)uVar9 | bVar4);
          lVar7 = lVar7 + 8;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
        uVar8 = (int)plStack_60;
      }
      FUN_147057811(local_68,uVar8);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_98 != 0) {
      LOCK();
      *(int *)(local_98 + 0xc) = *(int *)(local_98 + 0xc) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffffffffff01;
}



// FUNCTION 14705eaa8 FUN_14705eaa8 body=343 status=ok
// SIG undefined FUN_14705eaa8(void)

byte FUN_14705eaa8(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14704fe4e(local_48,*(undefined8 *)(param_1 + 0x848),*(undefined1 *)((longlong)param_3 + 2));
  lVar8 = *(longlong *)(param_1 + 0x848);
  uVar7 = (longlong)(int)param_2[1] + (longlong)*(int *)(lVar8 + 0x70);
  uVar6 = (uint)uVar7;
  if ((uint)(*(int *)(lVar8 + 0x20) - *(int *)(lVar8 + 0x4c)) < uVar6) {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar7);
    }
    FUN_146b7f620(lVar8 + 0x18,uVar7 & 0xffffffff);
    iVar3 = 1;
    if (3 < uVar6) {
      uVar2 = (uVar6 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(lVar8 + 0x60) == 0) || (*(int *)(lVar8 + 0x60) < iVar3)) {
      *(int *)(lVar8 + 0x60) = iVar3;
      FUN_1449809d4(lVar8 + 0x18);
    }
  }
  else if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar7 & 0xffffffff);
  }
  if (*(int *)(lVar8 + 0x74) < (int)uVar6) {
    FUN_14705784a(lVar8 + 0x68,uVar7 & 0xffffffff);
  }
  if ((longlong)(int)param_2[1] == 0) {
    bVar4 = 0;
  }
  else {
    lVar8 = *param_2;
    lVar5 = (longlong)(int)param_2[1] << 3;
    bVar4 = 0;
    do {
      local_58 = *param_3;
      uStack_54 = param_3[1];
      uStack_50 = param_3[2];
      uStack_4c = param_3[3];
      bVar1 = FUN_14705e816(param_1,lVar8,&local_58);
      bVar4 = bVar4 | bVar1;
      lVar8 = lVar8 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  FUN_14704fe68(local_48);
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar4 & 1;
}



// FUNCTION 14705ec02 FUN_14705ec02 body=387 status=ok
// SIG undefined FUN_14705ec02(void)

ulonglong FUN_14705ec02(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined1 *local_78;
  longlong local_70;
  code *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined1 local_49;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14704fe4e(local_48,*(undefined8 *)(param_1 + 0x848),*(undefined1 *)(param_3 + 2));
  local_49 = 0;
  lVar3 = *(longlong *)(param_1 + 0x848);
  uVar8 = (longlong)*(int *)(*param_2 + 0x70) + (longlong)*(int *)(lVar3 + 0x70);
  uVar7 = (uint)uVar8;
  if ((uint)(*(int *)(lVar3 + 0x20) - *(int *)(lVar3 + 0x4c)) < uVar7) {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar8);
    }
    FUN_146b7f620(lVar3 + 0x18,uVar8 & 0xffffffff);
    iVar6 = 1;
    if (3 < uVar7) {
      uVar5 = (uVar7 | 1) + 0xe;
      iVar6 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      iVar6 = 1 << ((byte)iVar6 & 0x1f);
    }
    if ((*(int *)(lVar3 + 0x60) == 0) || (*(int *)(lVar3 + 0x60) < iVar6)) {
      *(int *)(lVar3 + 0x60) = iVar6;
      FUN_1449809d4(lVar3 + 0x18);
    }
  }
  else if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar8 & 0xffffffff);
  }
  if (*(int *)(lVar3 + 0x74) < (int)uVar7) {
    FUN_14705784a(lVar3 + 0x68,uVar8 & 0xffffffff);
  }
  local_58 = 0;
  local_60 = &local_80;
  local_68 = FUN_142afa836;
  local_80 = param_1;
  local_78 = &local_49;
  local_70 = param_3;
  FUN_14704f9aa(*param_2);
  uVar8 = CONCAT71((int7)((ulonglong)&local_49 >> 8),local_49);
  FUN_14704fe68(local_48);
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
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705ed88 FUN_14705ed88 body=657 status=ok
// SIG undefined FUN_14705ed88(void)

ulonglong FUN_14705ed88(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined1 local_ac;
  char local_ab;
  undefined8 local_aa;
  undefined2 local_a2;
  undefined4 local_a0;
  undefined1 local_9c;
  longlong local_98;
  longlong *plStack_90;
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14705e4e4(param_1,&local_98,param_2);
  if (((local_78 == (longlong *)0x0 || local_88 == 0) ||
       (plStack_90 == (longlong *)0x0 || local_98 == 0)) ||
     (cVar3 = (**(code **)(*local_78 + 0x18))(local_78,&local_98,param_3), cVar3 == '\0')) {
    uVar9 = 0;
  }
  else {
    local_68 = local_88;
    plStack_60 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
    }
    uVar5 = (**(code **)(*local_78 + 0x28))(local_78,&local_98,&local_68,param_3);
    uVar9 = (ulonglong)uVar5;
  }
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
  if (local_98 != 0) {
    LOCK();
    *(int *)(local_98 + 0xc) = *(int *)(local_98 + 0xc) + -1;
    UNLOCK();
  }
  if (*(char *)((longlong)param_3 + 5) != '\0') {
    uVar6 = FUN_14479d2ce(*(longlong *)(param_1 + 0x848) + 0x10);
    local_98 = 0;
    plStack_90 = (longlong *)0x0;
    local_68 = FUN_1458d3d9a();
    if ((local_68 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_68);
    }
    FUN_14704f518(uVar6,param_2,&local_68,&local_98);
    if (plStack_90 != (longlong *)0x0 && local_98 != 0) {
      local_9c = *(undefined1 *)(param_3 + 1);
      local_a0 = *param_3;
      local_58 = *(undefined8 *)((longlong)param_3 + 6);
      local_50 = *(undefined2 *)((longlong)param_3 + 0xe);
      cVar3 = *(char *)((longlong)param_3 + 5);
      if (cVar3 == '\x01') {
        cVar3 = '\0';
      }
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
      (**(code **)(*plStack_90 + 0x28))(plStack_90,&local_98,&local_68,0);
      uVar8 = 0;
      if ((longlong)(int)plStack_60 != 0) {
        lVar10 = (longlong)(int)plStack_60 << 3;
        lVar7 = local_68;
        do {
          local_ac = local_9c;
          local_b0 = local_a0;
          local_a2 = local_50;
          local_aa = local_58;
          local_ab = cVar3;
          bVar4 = FUN_14705ed88(param_1,lVar7,&local_b0);
          uVar9 = CONCAT71((int7)(uVar9 >> 8),(byte)uVar9 | bVar4);
          lVar7 = lVar7 + 8;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
        uVar8 = (int)plStack_60;
      }
      FUN_147057811(local_68,uVar8);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_98 != 0) {
      LOCK();
      *(int *)(local_98 + 0xc) = *(int *)(local_98 + 0xc) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffffffffff01;
}



// FUNCTION 14705f01a FUN_14705f01a body=170 status=ok
// SIG undefined FUN_14705f01a(void)

byte FUN_14705f01a(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14704fe4e(local_48,*(undefined8 *)(param_1 + 0x848),*(undefined1 *)((longlong)param_3 + 2));
  if ((longlong)(int)param_2[1] == 0) {
    bVar2 = 0;
  }
  else {
    lVar4 = *param_2;
    lVar3 = (longlong)(int)param_2[1] << 3;
    bVar2 = 0;
    do {
      local_58 = *param_3;
      uStack_54 = param_3[1];
      uStack_50 = param_3[2];
      uStack_4c = param_3[3];
      bVar1 = FUN_14705ed88(param_1,lVar4,&local_58);
      bVar2 = bVar2 | bVar1;
      lVar4 = lVar4 + 8;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  FUN_14704fe68(local_48);
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2 & 1;
}



// FUNCTION 14705f0c6 FUN_14705f0c6 body=208 status=ok
// SIG undefined FUN_14705f0c6(void)

ulonglong FUN_14705f0c6(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined1 *local_70;
  longlong local_68;
  code *local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined1 local_41;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14704fe4e(local_40,*(undefined8 *)(param_1 + 0x848),*(undefined1 *)(param_3 + 2));
  local_70 = &local_41;
  local_41 = 0;
  local_50 = 0;
  local_58 = &local_78;
  local_60 = FUN_142afa88a;
  local_78 = param_1;
  local_68 = param_3;
  FUN_14704f9aa(*param_2);
  uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),local_41);
  FUN_14704fe68(local_40);
  plVar3 = (longlong *)param_2[1];
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705f198 FUN_14705f198 body=137 status=ok
// SIG undefined FUN_14705f198(void)

void FUN_14705f198(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  code *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1470640de(param_2);
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (*(int *)(param_2 + 0x4c) < iVar1) {
    FUN_147064158(param_2);
  }
  local_28 = &local_38;
  local_30 = FUN_14706423a;
  local_38 = param_2;
  FUN_14704f9aa(param_1,&local_30,param_3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705f224 FUN_14705f224 body=53 status=ok
// SIG undefined FUN_14705f224(void)

void FUN_14705f224(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar1 = param_1;
  }
  FUN_147057811(lVar1,*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14705f25a FUN_14705f25a body=84 status=ok
// SIG undefined FUN_14705f25a(void)

void FUN_14705f25a(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  local_28 = *param_2;
  local_20 = *(undefined4 *)(param_2 + 1);
  FUN_14705f2b0(local_18,&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705f2b0 FUN_14705f2b0 body=158 status=ok
// SIG undefined FUN_14705f2b0(void)

byte FUN_14705f2b0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14704fe4e(local_40,*(undefined8 *)(param_1 + 0x848),*(undefined1 *)((longlong)param_3 + 2));
  local_58 = *(undefined4 *)param_3;
  uStack_54 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_50 = *(undefined4 *)(param_3 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_3 + 0xc);
  bVar1 = FUN_14705bcac(param_1);
  local_68 = *param_3;
  uStack_60 = param_3[1];
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  bVar2 = FUN_14705eaa8(param_1);
  FUN_14704fe68(local_40);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return bVar2 | bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705f350 FUN_14705f350 body=216 status=ok
// SIG undefined FUN_14705f350(void)

byte FUN_14705f350(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14704fe4e(local_38,*(undefined8 *)(param_1 + 0x848),*(undefined1 *)((longlong)param_3 + 2));
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  bVar4 = FUN_14705bcac(param_1);
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  local_68 = *param_2;
  local_60 = param_2[1];
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  bVar5 = FUN_14705ec02(param_1,&local_68,&local_58);
  FUN_14704fe68(local_38);
  plVar3 = (longlong *)param_2[1];
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
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return bVar4 | bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705f42a FUN_14705f42a body=167 status=ok
// SIG undefined FUN_14705f42a(void)

undefined4 FUN_14705f42a(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14705e4e4(param_1,&local_40,param_2);
  uVar3 = 0;
  if ((((local_40 != 0) && (local_38 != 0)) && (local_30 != 0)) && (uVar3 = 0, local_20 != 0)) {
    uVar3 = FUN_14705f4d2(&local_40);
  }
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
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 0xc) = *(int *)(local_40 + 0xc) + -1;
    UNLOCK();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705f4d2 FUN_14705f4d2 body=155 status=ok
// SIG undefined FUN_14705f4d2(void)

undefined4 FUN_14705f4d2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = *(longlong **)(param_1 + 0x20);
  local_28 = *(undefined8 *)(param_1 + 0x10);
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 == (longlong *)0x0) {
    local_20 = (longlong *)0x0;
    uVar4 = (**(code **)(*plVar2 + 0x30))();
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_20 = plVar3;
    uVar4 = (**(code **)(*plVar2 + 0x30))();
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705f56e FUN_14705f56e body=182 status=ok
// SIG undefined FUN_14705f56e(void)

undefined8 *
FUN_14705f56e(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14705e4e4(param_1,&local_48);
  if ((((local_48 == 0) || (local_40 == 0)) || (local_38 == 0)) || (local_28 == 0)) {
    *param_2 = 0;
  }
  else {
    FUN_14705f626(&local_48,param_2,param_4);
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
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 0xc) = *(int *)(local_48 + 0xc) + -1;
    UNLOCK();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705f626 FUN_14705f626 body=179 status=ok
// SIG undefined FUN_14705f626(void)

undefined8 FUN_14705f626(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = *(longlong **)(param_1 + 0x20);
  local_28 = *(undefined8 *)(param_1 + 0x10);
  plVar3 = *(longlong **)(param_1 + 0x18);
  local_38 = param_3;
  if (plVar3 == (longlong *)0x0) {
    local_20 = (longlong *)0x0;
    (**(code **)(*plVar2 + 0x38))(plVar2,param_2,param_1);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_20 = plVar3;
    (**(code **)(*plVar2 + 0x38))(plVar2,param_2,param_1);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705f6da FUN_14705f6da body=184 status=ok
// SIG undefined FUN_14705f6da(void)

undefined8 FUN_14705f6da(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined4 *)(param_3 + 1);
  local_28 = *param_3;
  local_38 = *(undefined8 *)(param_1 + 0x848);
  plVar3 = *(longlong **)(param_1 + 0x850);
  if (plVar3 == (longlong *)0x0) {
    local_30 = (longlong *)0x0;
    FUN_14705f794(param_1,param_2,&local_38,&local_28);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_30 = plVar3;
    FUN_14705f794(param_1,param_2,&local_38,&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705f794 FUN_14705f794 body=211 status=ok
// SIG undefined FUN_14705f794(void)

undefined8 *
FUN_14705f794(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = FUN_145c635e4();
  FUN_14704f774(param_2,uVar4);
  local_38 = *param_2;
  local_30 = param_2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  local_48 = *param_3;
  local_40 = param_3[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  FUN_14705f86a(param_1,&local_48,param_4,&local_38);
  plVar3 = (longlong *)param_3[1];
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705f86a FUN_14705f86a body=461 status=ok
// SIG undefined FUN_14705f86a(void)

void FUN_14705f86a(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  longlong *local_58;
  code *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *param_4;
  if (*(int *)(lVar4 + 0x70) != 0) {
    FUN_14704fc6e(lVar4);
    FUN_146f44312(lVar4 + 0x18);
    iVar3 = *(int *)(lVar4 + 0x74);
    FUN_147057811(*(undefined8 *)(lVar4 + 0x68),*(undefined4 *)(lVar4 + 0x70));
    *(undefined4 *)(lVar4 + 0x70) = 0;
    if ((iVar3 < 0) && (*(int *)(lVar4 + 0x74) != 0)) {
      FUN_14705784a(lVar4 + 0x68,0);
    }
    FUN_14704f264(lVar4 + 0x78);
    local_80 = 0;
    FUN_14704fc7e(lVar4,2,&local_80);
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 0xc) = *(int *)(local_80 + 0xc) + -1;
      UNLOCK();
    }
  }
  local_78 = *param_2;
  local_70 = (longlong *)param_2[1];
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
  }
  local_60 = *param_4;
  local_58 = (longlong *)param_4[1];
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
  local_48 = &local_80;
  local_50 = FUN_142afa8de;
  local_80 = param_1;
  local_68 = param_3;
  FUN_14705fa38();
  plVar5 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
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
  plVar5 = (longlong *)param_4[1];
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
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705fa38 FUN_14705fa38 body=246 status=ok
// SIG undefined FUN_14705fa38(void)

void FUN_14705fa38(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  lStack_50 = 0;
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x68);
    lVar1 = lVar4 + (longlong)*(int *)(param_1 + 0x70) * 8;
    do {
      while( true ) {
        uVar3 = FUN_14479d2ce(param_1 + 0x10);
        local_48 = FUN_1458987e8();
        if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(local_48);
        }
        FUN_14704f518(uVar3,lVar4,&local_48,&local_58);
        if ((local_58 == 0) || (lStack_50 == 0)) break;
        cVar2 = (*(code *)*param_2)(param_2[1],&local_58);
        if ((cVar2 == '\0') || (lVar4 = lVar4 + 8, lVar4 == lVar1)) goto LAB_14705faff;
      }
      lVar4 = lVar4 + 8;
    } while (lVar4 != lVar1);
LAB_14705faff:
    if (local_58 != 0) {
      LOCK();
      *(int *)(local_58 + 0xc) = *(int *)(local_58 + 0xc) + -1;
      UNLOCK();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14705fb30 FUN_14705fb30 body=118 status=ok
// SIG undefined FUN_14705fb30(void)

ulonglong FUN_14705fb30(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if ((*param_1 != (int)local_20) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != local_20._4_4_)) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(&local_20);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705fba8 FUN_14705fba8 body=62 status=ok
// SIG undefined FUN_14705fba8(void)

void FUN_14705fba8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x800);
  if (*(longlong *)(param_1 + 0x800) == 0) {
    lVar1 = param_1;
  }
  FUN_147057811(lVar1,*(undefined4 *)(param_1 + 0x808));
  if (*(longlong *)(param_1 + 0x800) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14705fbe6 FUN_14705fbe6 body=126 status=ok
// SIG undefined FUN_14705fbe6(void)

longlong * FUN_14705fbe6(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = *param_2;
  *param_2 = 0;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  param_1[2] = *param_3;
  lVar3 = param_3[1];
  param_1[3] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[4] = param_4;
  if (*param_2 != 0) {
    LOCK();
    piVar1 = (int *)(*param_2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  *param_2 = 0;
  param_2[1] = 0;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
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
  return param_1;
}



// FUNCTION 14705fc64 FUN_14705fc64 body=508 status=ok
// SIG undefined FUN_14705fc64(void)

void FUN_14705fc64(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [8];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_68 = 1;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  FUN_147050064(*(undefined8 *)(param_1 + 0x848),local_70);
  FUN_14704fe4e(local_80,*(undefined8 *)(param_1 + 0x848),0);
  if ((longlong)(int)param_2[1] != 0) {
    lVar8 = (longlong)(int)param_2[1] << 4;
    plVar7 = (longlong *)(*param_2 + 8);
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x848) + 0x70) == 0) break;
      FUN_14705e4e4(param_1,&local_a8,plVar7 + -1);
      if ((local_88 == (longlong *)0x0 || local_98 == 0) || (local_a0 == 0 || local_a8 == 0)) {
LAB_14705fd94:
        lVar3 = plVar7[-1];
        puVar6 = (undefined4 *)(lVar3 + 8);
        if (lVar3 == 0) {
          puVar6 = &DAT_14c99f64c;
        }
        cVar5 = FUN_14704fe7c(*(undefined8 *)(param_1 + 0x848),puVar6);
      }
      else {
        cVar5 = (**(code **)(*local_88 + 0x18))(local_88,&local_a8,&local_68);
        if (cVar5 == '\0') goto LAB_14705fd94;
        local_58 = local_98;
        local_50 = local_90;
        if (local_90 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_90 + 1) = (int)local_90[1] + 1;
          UNLOCK();
        }
        cVar5 = (**(code **)(*local_88 + 0x28))(local_88,&local_a8,&local_58,&local_68);
      }
      plVar4 = local_90;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_90 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      if (local_a8 != 0) {
        LOCK();
        *(int *)(local_a8 + 0xc) = *(int *)(local_a8 + 0xc) + -1;
        UNLOCK();
      }
      if ((cVar5 != '\0') && (*plVar7 != 0)) {
        local_b8 = local_68;
        uStack_b4 = uStack_64;
        uStack_b0 = uStack_60;
        uStack_ac = uStack_5c;
        FUN_14705e816(param_1,plVar7,&local_b8);
      }
      plVar7 = plVar7 + 2;
      lVar8 = lVar8 + -0x10;
    } while (lVar8 != 0);
  }
  FUN_14704fe68(local_80);
  FUN_14704ffdc(local_70);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705fe66 FUN_14705fe66 body=238 status=ok
// SIG undefined FUN_14705fe66(void)

void FUN_14705fe66(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  longlong local_28;
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
  plVar2 = &local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x10))(param_1,&local_38,plVar2);
  FUN_1468c505c(param_3,&local_38);
  FUN_140195631(local_38,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_28 != 0) {
    piVar1 = (int *)(local_28 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705ff56 FUN_14705ff56 body=243 status=ok
// SIG undefined FUN_14705ff56(void)

void FUN_14705ff56(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined1 local_98 [112];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = &local_a0;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x20))(param_1,local_98,plVar2);
  FUN_14128b194(param_3,local_98);
  FUN_14128b0c2(local_98);
  if (local_a0 != 0) {
    piVar1 = (int *)(local_a0 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706004e FUN_14706004e body=144 status=ok
// SIG undefined FUN_14706004e(void)

undefined8 * FUN_14706004e(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  longlong local_78;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  param_2[1] = 0;
  (**(code **)(*param_1 + 0x28))(0,local_88);
  if ((local_88[0] != 0) && (local_78 != 0)) {
    *(undefined4 *)(param_2 + 1) = 1;
    FUN_14171b750(param_2,0);
    FUN_1400e7d28(*param_2,local_88);
  }
  FUN_14128b0c2(local_88);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470600e0 FUN_1470600e0 body=163 status=ok
// SIG undefined FUN_1470600e0(void)

undefined8 * FUN_1470600e0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((longlong *)*param_3 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_3, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_20 = lVar1;
    if (lVar1 != 0) {
      local_21 = 0;
      (**(code **)(*param_1 + 0x18))(param_1,param_2,&local_20);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + -1;
        UNLOCK();
      }
      if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
  }
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 147060184 FUN_147060184 body=195 status=ok
// SIG undefined FUN_147060184(void)

undefined8 * FUN_147060184(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((longlong *)*param_3 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_3, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_20 = lVar1;
    if (lVar1 != 0) {
      (**(code **)(*param_1 + 0x28))(param_1,param_2,&local_20);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_147060227;
    }
  }
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 6) = 0xffffffff;
  param_2[0xc] = 0;
  param_2[0xd] = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0;
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x54) = 0;
LAB_147060227:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706024e FUN_14706024e body=399 status=ok
// SIG undefined FUN_14706024e(void)

void FUN_14706024e(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_78 [44];
  int local_4c;
  longlong local_48;
  ulonglong uStack_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  plVar2 = &local_30;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
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
  plVar3 = &local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x20))(param_1,plVar2,plVar3,local_4c != 0);
  FUN_14704c977(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_30 != 0) {
    piVar1 = (int *)(local_30 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470603e4 FUN_1470603e4 body=309 status=ok
// SIG undefined FUN_1470603e4(void)

void FUN_1470603e4(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  int local_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  plVar2 = &local_30;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
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
  (**(code **)(*param_1 + 0x10))(param_1,&local_40,plVar2,local_34 != 0);
  *param_3 = local_40;
  if (local_30 != 0) {
    piVar1 = (int *)(local_30 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706051e FUN_14706051e body=377 status=ok
// SIG undefined FUN_14706051e(void)

longlong * FUN_14706051e(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  PSRWLOCK SRWLock;
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint *puVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((longlong *)*param_3 != (longlong *)0x0) && (lVar3 = *(longlong *)*param_3, lVar3 != 0)) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
    local_40 = lVar3;
    if (lVar3 != 0) {
      lVar3 = (**(code **)(*param_1 + 0x30))();
      (**(code **)(*param_1 + 0x18))(param_1,&local_48,&local_40,param_4);
      puVar4 = &DAT_14c99f64c;
      if (local_48 != 0) {
        puVar4 = (uint *)(local_48 + 8);
      }
      uVar1 = *puVar4;
      if (uVar1 == DAT_14c99f64c) {
LAB_1470605a9:
        *param_2 = 0;
      }
      else {
        SRWLock = (PSRWLOCK)(lVar3 + 0x28);
        AcquireSRWLockShared(SRWLock);
        if (uVar1 < 0x1000000) {
          ReleaseSRWLockShared(SRWLock);
LAB_14706062b:
          FUN_1415b7ec4(L"Element type ID has not been registered to this registry!",2,0);
          goto LAB_1470605a9;
        }
        plVar2 = *(longlong **)(lVar3 + 0x30 + (ulonglong)((uVar1 >> 0x18) - 1) * 8);
        ReleaseSRWLockShared(SRWLock);
        if (plVar2 == (longlong *)0x0) goto LAB_14706062b;
        (**(code **)(*plVar2 + 0x20))(plVar2,&local_38,*puVar4 & 0xffffff);
        *param_2 = local_38;
        if ((local_38 != 0) && (*(int *)(local_38 + 8) == 0)) {
          FUN_1400020a8();
        }
      }
      if (local_48 != 0) {
        LOCK();
        *(int *)(local_48 + 0xc) = *(int *)(local_48 + 0xc) + -1;
        UNLOCK();
      }
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 0xc) = *(int *)(local_40 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_1470605e6;
    }
  }
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
  *param_2 = 0;
LAB_1470605e6:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147060698 FUN_147060698 body=242 status=ok
// SIG undefined FUN_147060698(void)

void FUN_147060698(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  longlong local_38;
  ulonglong uStack_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_2, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_28 = lVar1;
    if (lVar1 != 0) {
      local_38 = 0;
      uStack_30 = 0;
      (**(code **)(*param_1 + 0x28))(0,&local_28,&local_38);
      uVar2 = (**(code **)(*param_1 + 0x30))(param_1);
      FUN_147051bc5(&local_48,&local_38,uVar2);
      FUN_147049538(param_3,&local_48);
      FUN_14704c977(local_48,local_40);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      FUN_147057811(local_38,uStack_30 & 0xffffffff);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      if (local_28 != 0) {
        LOCK();
        *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + -1;
        UNLOCK();
      }
      if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
}



// FUNCTION 1470607a6 FUN_1470607a6 body=200 status=ok
// SIG undefined FUN_1470607a6(void)

void FUN_1470607a6(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = &local_30;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,plVar3);
  *param_3 = uVar2;
  if (local_30 != 0) {
    piVar1 = (int *)(local_30 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147060870 FUN_147060870 body=200 status=ok
// SIG undefined FUN_147060870(void)

void FUN_147060870(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = &local_30;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0x20))(param_1,plVar3);
  *param_3 = uVar2;
  if (local_30 != 0) {
    piVar1 = (int *)(local_30 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706093c FUN_14706093c body=28 status=ok
// SIG undefined FUN_14706093c(void)

undefined8 FUN_14706093c(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x18))();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
  }
  return uVar2;
}



// FUNCTION 147060958 FUN_147060958 body=136 status=ok
// SIG undefined FUN_147060958(void)

undefined8 FUN_147060958(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_2, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_20 = lVar1;
    if (lVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x18))(param_1,&local_20);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_1470609c0;
    }
  }
  uVar2 = 0;
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
LAB_1470609c0:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470609e2 FUN_1470609e2 body=136 status=ok
// SIG undefined FUN_1470609e2(void)

undefined8 FUN_1470609e2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_2, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_20 = lVar1;
    if (lVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x28))(param_1,&local_20);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_147060a4a;
    }
  }
  uVar2 = 0;
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
LAB_147060a4a:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147060a72 FUN_147060a72 body=406 status=ok
// SIG undefined FUN_147060a72(void)

void FUN_147060a72(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_78 [44];
  int local_4c;
  longlong local_48 [3];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  plVar2 = &local_30;
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
  plVar3 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x10))(param_1,plVar2,plVar3,local_4c != 0);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30 != 0) {
    piVar1 = (int *)(local_30 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147060c10 FUN_147060c10 body=456 status=ok
// SIG undefined FUN_147060c10(void)

void FUN_147060c10(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  plVar2 = &local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
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
  local_30 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
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
  local_48 = local_34 != 0;
  (**(code **)(*param_1 + 0x20))(param_1,plVar2,local_2c,local_30);
  if (local_28 != 0) {
    piVar1 = (int *)(local_28 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147060ddc FUN_147060ddc body=146 status=ok
// SIG undefined FUN_147060ddc(void)

void FUN_147060ddc(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_2, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_18 = lVar1;
    if (lVar1 != 0) {
      local_20 = *(undefined4 *)(param_3 + 1);
      local_28 = *param_3;
      (**(code **)(*param_1 + 0x18))(param_1,&local_18);
      if (local_18 != 0) {
        LOCK();
        *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + -1;
        UNLOCK();
      }
      if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 147060e82 FUN_147060e82 body=136 status=ok
// SIG undefined FUN_147060e82(void)

void FUN_147060e82(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_2, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_18 = lVar1;
    if (lVar1 != 0) {
      local_28 = param_5;
      (**(code **)(*param_1 + 0x28))(param_1,&local_18);
      if (local_18 != 0) {
        LOCK();
        *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + -1;
        UNLOCK();
      }
      if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 147060f44 FUN_147060f44 body=361 status=ok
// SIG undefined FUN_147060f44(void)

void FUN_147060f44(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *plStack_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  plVar4 = &local_30;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
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
  local_58 = local_48;
  local_50 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
  }
  uVar3 = (**(code **)(*param_1 + 0x60))(param_1,plVar4,&local_58);
  plVar4 = plStack_40;
  *param_3 = uVar3;
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
  if (local_30 != 0) {
    piVar2 = (int *)(local_30 + 8);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470610b4 FUN_1470610b4 body=330 status=ok
// SIG undefined FUN_1470610b4(void)

void FUN_1470610b4(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined2 local_44;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar4 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_48 = 0x10100;
  local_44 = 0;
  local_40 = 0;
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
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0x30))(param_1,plVar4,puVar3);
  *param_3 = uVar2;
  if (local_38 != 0) {
    piVar1 = (int *)(local_38 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147061206 FUN_147061206 body=330 status=ok
// SIG undefined FUN_147061206(void)

void FUN_147061206(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined2 local_44;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar4 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_48 = 0x10100;
  local_44 = 0;
  local_40 = 0;
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
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0x20))(param_1,plVar4,puVar3);
  *param_3 = uVar2;
  if (local_38 != 0) {
    piVar1 = (int *)(local_38 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147061358 FUN_147061358 body=480 status=ok
// SIG undefined FUN_147061358(void)

void FUN_147061358(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined8 local_50;
  undefined8 local_48;
  longlong *plStack_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar5 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_58 = 0x10100;
  local_54 = 0;
  local_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar4 = &local_58;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_48;
  local_60 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
  }
  uVar3 = (**(code **)(*param_1 + 0x50))(param_1,plVar5,&local_68,puVar4);
  plVar5 = plStack_40;
  *param_3 = uVar3;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_38 != 0) {
    piVar2 = (int *)(local_38 + 8);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706153a FUN_14706153a body=456 status=ok
// SIG undefined FUN_14706153a(void)

void FUN_14706153a(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined1 local_49;
  undefined8 local_48;
  longlong *plStack_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
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
  plVar3 = &local_30;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_49 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_48;
  local_60 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
  }
  local_78 = local_49;
  (**(code **)(*param_1 + 0x70))(param_1,&local_58,plVar3,&local_68);
  plVar3 = plStack_40;
  *param_3 = local_58;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_30 != 0) {
    piVar2 = (int *)(local_30 + 8);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706170a FUN_14706170a body=470 status=ok
// SIG undefined FUN_14706170a(void)

void FUN_14706170a(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  undefined1 local_54 [4];
  undefined8 local_50;
  undefined8 local_48;
  longlong *plStack_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar5 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_54[0] = 0;
  local_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_54);
  }
  puVar4 = local_54;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_48;
  local_60 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
  }
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,plVar5,&local_68,puVar4);
  plVar5 = plStack_40;
  *param_3 = uVar3;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_38 != 0) {
    piVar2 = (int *)(local_38 + 8);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470618e8 FUN_1470618e8 body=480 status=ok
// SIG undefined FUN_1470618e8(void)

void FUN_1470618e8(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined8 local_50;
  undefined8 local_48;
  longlong *plStack_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar5 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_58 = 0x10100;
  local_54 = 0;
  local_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar4 = &local_58;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_48;
  local_60 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
  }
  uVar3 = (**(code **)(*param_1 + 0x40))(param_1,plVar5,&local_68,puVar4);
  plVar5 = plStack_40;
  *param_3 = uVar3;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_38 != 0) {
    piVar2 = (int *)(local_38 + 8);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147061af2 FUN_147061af2 body=111 status=ok
// SIG undefined FUN_147061af2(void)

undefined8 FUN_147061af2(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *param_3;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    local_18 = 0;
    lVar2 = *param_2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
      UNLOCK();
      local_18 = lVar2;
    }
    uVar3 = FUN_14704fd42(lVar1,&local_18);
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + -1;
      UNLOCK();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147061b62 FUN_147061b62 body=37 status=ok
// SIG undefined FUN_147061b62(void)

undefined8 FUN_147061b62(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  if (*param_3 != 0) {
    puVar2 = &DAT_14c99f64c;
    if (*param_2 != 0) {
      puVar2 = (undefined4 *)(*param_2 + 8);
    }
    uVar1 = FUN_14704fe7c(*param_3,puVar2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 147061b88 FUN_147061b88 body=447 status=ok
// SIG undefined FUN_147061b88(void)

undefined4 FUN_147061b88(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar3 = *(longlong *)*param_2, lVar3 != 0)) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
    local_30 = lVar3;
    if (lVar3 != 0) {
      local_50 = *param_3;
      local_48 = (longlong *)param_3[1];
      if (local_48 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_48 + 1) = (int)local_48[1] + 1;
        UNLOCK();
      }
      FUN_147050e88(&local_40,&local_50);
      plVar4 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_48 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      if (local_40 == 0) {
        uVar5 = 0;
        FUN_1415b7ec4(L"InSelectionSet is in a invalid state.",2,0);
      }
      else {
        local_50 = local_40;
        local_48 = local_38;
        if (local_38 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_38 + 1) = (int)local_38[1] + 1;
          UNLOCK();
        }
        uVar5 = (**(code **)(*param_1 + 0x18))(param_1,&local_30,&local_50,param_4);
        plVar4 = local_48;
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_48 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_48)(local_48);
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
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_38 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar2 = (int *)((longlong)local_38 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_38 + 0x10))(local_38);
          }
        }
      }
      if (local_30 != 0) {
        LOCK();
        *(int *)(local_30 + 0xc) = *(int *)(local_30 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_147061cae;
    }
  }
  uVar5 = 0;
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
LAB_147061cae:
  plVar4 = (longlong *)param_3[1];
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147061d48 FUN_147061d48 body=134 status=ok
// SIG undefined FUN_147061d48(void)

undefined4 FUN_147061d48(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_2, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_20 = lVar1;
    if (lVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x28))(param_1,&local_20);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_147061daf;
    }
  }
  uVar2 = 0;
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
LAB_147061daf:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147061dd0 FUN_147061dd0 body=134 status=ok
// SIG undefined FUN_147061dd0(void)

undefined4 FUN_147061dd0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_2, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_20 = lVar1;
    if (lVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x38))(param_1,&local_20);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_147061e37;
    }
  }
  uVar2 = 0;
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
LAB_147061e37:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147061e58 FUN_147061e58 body=437 status=ok
// SIG undefined FUN_147061e58(void)

undefined4 FUN_147061e58(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar4 = *(longlong *)*param_2, lVar4 != 0)) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
    local_38 = lVar4;
    if (lVar4 != 0) {
      local_58 = *param_3;
      plVar5 = (longlong *)param_3[1];
      if (plVar5 == (longlong *)0x0) {
        local_50 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        local_50 = plVar5;
      }
      FUN_147050e88(&local_48,&local_58);
      plVar3 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      if (local_48 == 0) {
        uVar6 = 0;
        FUN_1415b7ec4(L"InSelectionSet is in a invalid state.",2,0);
      }
      else {
        uVar6 = (**(code **)(*param_1 + 0x48))(param_1,&local_38,&local_48,param_4);
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_40 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
      if (local_38 != 0) {
        LOCK();
        *(int *)(local_38 + 0xc) = *(int *)(local_38 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_147061f98;
    }
  }
  uVar6 = 0;
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
LAB_147061f98:
  plVar5 = (longlong *)param_3[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706200e FUN_14706200e body=437 status=ok
// SIG undefined FUN_14706200e(void)

undefined4 FUN_14706200e(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar4 = *(longlong *)*param_2, lVar4 != 0)) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
    local_38 = lVar4;
    if (lVar4 != 0) {
      local_58 = *param_3;
      plVar5 = (longlong *)param_3[1];
      if (plVar5 == (longlong *)0x0) {
        local_50 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        local_50 = plVar5;
      }
      FUN_147050e88(&local_48,&local_58);
      plVar3 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      if (local_48 == 0) {
        uVar6 = 0;
        FUN_1415b7ec4(L"InSelectionSet is in a invalid state.",2,0);
      }
      else {
        uVar6 = (**(code **)(*param_1 + 0x58))(param_1,&local_38,&local_48,param_4);
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_40 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
      if (local_38 != 0) {
        LOCK();
        *(int *)(local_38 + 0xc) = *(int *)(local_38 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_14706214e;
    }
  }
  uVar6 = 0;
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
LAB_14706214e:
  plVar5 = (longlong *)param_3[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470621c4 FUN_1470621c4 body=435 status=ok
// SIG undefined FUN_1470621c4(void)

undefined4 FUN_1470621c4(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar3 = *(longlong *)*param_2, lVar3 != 0)) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
    local_28 = lVar3;
    if (lVar3 != 0) {
      local_48 = *param_3;
      local_40 = (longlong *)param_3[1];
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      FUN_147050e88(&local_38,&local_48);
      plVar4 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      if (local_38 == 0) {
        uVar5 = 0;
        FUN_1415b7ec4(L"InSelectionSet is in a invalid state.",2,0);
      }
      else {
        local_48 = local_38;
        local_40 = local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
        uVar5 = (**(code **)(*param_1 + 0x68))(param_1,&local_28,&local_48);
        plVar4 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_40 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_40)(local_40);
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
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_30 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      if (local_28 != 0) {
        LOCK();
        *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_1470622e0;
    }
  }
  uVar5 = 0;
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
LAB_1470622e0:
  plVar4 = (longlong *)param_3[1];
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147062378 FUN_147062378 body=710 status=ok
// SIG undefined FUN_147062378(void)

longlong *
FUN_147062378(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK SRWLock;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint *puVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  longlong local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((longlong *)*param_3 != (longlong *)0x0) && (lVar5 = *(longlong *)*param_3, lVar5 != 0)) {
    LOCK();
    *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
    UNLOCK();
    local_50 = lVar5;
    if (lVar5 != 0) {
      local_70 = *param_4;
      local_68 = (longlong *)param_4[1];
      if (local_68 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_68 + 1) = (int)local_68[1] + 1;
        UNLOCK();
      }
      FUN_147050e88(&local_60,&local_70);
      plVar4 = local_68;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_68 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      if (local_60 == 0) {
        FUN_1415b7ec4(L"InCurrentSelection is in a invalid state.",2,0);
        *param_2 = 0;
      }
      else {
        lVar5 = FUN_14479d2ce(local_60 + 0x10);
        local_70 = local_60;
        local_68 = local_58;
        if (local_58 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_58 + 1) = (int)local_58[1] + 1;
          UNLOCK();
        }
        local_88 = param_5;
        (**(code **)(*param_1 + 0x78))(param_1,&local_78,&local_50,&local_70);
        puVar6 = &DAT_14c99f64c;
        if (local_78 != 0) {
          puVar6 = (uint *)(local_78 + 8);
        }
        uVar3 = *puVar6;
        if (uVar3 == DAT_14c99f64c) {
LAB_1470624a3:
          *param_2 = 0;
        }
        else {
          SRWLock = (PSRWLOCK)(lVar5 + 0x28);
          AcquireSRWLockShared(SRWLock);
          if (uVar3 < 0x1000000) {
            ReleaseSRWLockShared(SRWLock);
LAB_1470625d2:
            FUN_1415b7ec4(L"Element type ID has not been registered to this registry!",2,0);
            goto LAB_1470624a3;
          }
          plVar4 = *(longlong **)(lVar5 + 0x30 + (ulonglong)((uVar3 >> 0x18) - 1) * 8);
          ReleaseSRWLockShared(SRWLock);
          if (plVar4 == (longlong *)0x0) goto LAB_1470625d2;
          (**(code **)(*plVar4 + 0x20))(plVar4,&local_48,*puVar6 & 0xffffff);
          *param_2 = local_48;
          if ((local_48 != 0) && (*(int *)(local_48 + 8) == 0)) {
            FUN_1400020a8();
          }
        }
        plVar4 = local_68;
        if (local_78 != 0) {
          LOCK();
          *(int *)(local_78 + 0xc) = *(int *)(local_78 + 0xc) + -1;
          UNLOCK();
        }
        local_78 = 0;
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_68 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_68)(local_68);
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
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_58 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar2 = (int *)((longlong)local_58 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_58 + 0x10))(local_58);
          }
        }
      }
      if (local_50 != 0) {
        LOCK();
        *(int *)(local_50 + 0xc) = *(int *)(local_50 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_14706250e;
    }
  }
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
  *param_2 = 0;
LAB_14706250e:
  plVar4 = (longlong *)param_4[1];
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
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147062640 FUN_147062640 body=45 status=ok
// SIG undefined FUN_147062640(void)

longlong FUN_147062640(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1415397a4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470626f0 FUN_1470626f0 body=59 status=ok
// SIG undefined FUN_1470626f0(void)

undefined8 FUN_1470626f0(longlong *param_1)

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



// FUNCTION 1470627b2 FUN_1470627b2 body=46 status=ok
// SIG undefined FUN_1470627b2(void)

void FUN_1470627b2(undefined8 param_1,longlong param_2)

{
  FUN_147062a3a(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1470627f6 FUN_1470627f6 body=54 status=ok
// SIG undefined FUN_1470627f6(void)

undefined1 FUN_1470627f6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1470628f0(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 147062854 FUN_147062854 body=59 status=ok
// SIG undefined FUN_147062854(void)

undefined8 FUN_147062854(longlong *param_1)

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



// FUNCTION 1470628f0 FUN_1470628f0 body=196 status=ok
// SIG undefined FUN_1470628f0(void)

undefined8 * FUN_1470628f0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != param_1) {
    *param_1 = *param_2;
    plVar1 = param_1 + 1;
    FUN_14705e3f6(plVar1,*(undefined4 *)(param_2 + 2));
    iVar2 = *(int *)(param_2 + 2);
    if ((longlong)iVar2 != 0) {
      lVar4 = param_2[1];
      lVar5 = 0;
      do {
        (**(code **)(**(longlong **)(lVar4 + lVar5) + 8))(*(longlong **)(lVar4 + lVar5),&local_48);
        iVar3 = *(int *)(param_1 + 2);
        *(uint *)(param_1 + 2) = iVar3 + 1U;
        if (*(uint *)((longlong)param_1 + 0x14) < iVar3 + 1U) {
          FUN_147062e7c(plVar1,iVar3);
        }
        *(undefined8 *)(*plVar1 + (longlong)iVar3 * 8) = local_48;
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar2 * 8 != lVar5);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1470629b6 FUN_1470629b6 body=52 status=ok
// SIG undefined FUN_1470629b6(void)

void FUN_1470629b6(longlong param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_147062a3a(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1470629ea FUN_1470629ea body=80 status=ok
// SIG undefined FUN_1470629ea(void)

longlong * FUN_1470629ea(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_147062a3a(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 147062a3a FUN_147062a3a body=52 status=ok
// SIG undefined FUN_147062a3a(void)

void FUN_147062a3a(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 147062a6e FUN_147062a6e body=98 status=ok
// SIG undefined FUN_147062a6e(void)

undefined8 * FUN_147062a6e(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14a155bf0;
  lVar2 = 0x7f8;
  do {
    puVar1 = *(undefined8 **)((longlong)param_1 + lVar2);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    lVar2 = lVar2 + -8;
  } while (lVar2 != 8);
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147062b34 FUN_147062b34 body=59 status=ok
// SIG undefined FUN_147062b34(void)

undefined8 FUN_147062b34(longlong *param_1)

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



// FUNCTION 147062c56 FUN_147062c56 body=59 status=ok
// SIG undefined FUN_147062c56(void)

undefined8 FUN_147062c56(longlong *param_1)

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



// FUNCTION 147062d7a FUN_147062d7a body=59 status=ok
// SIG undefined FUN_147062d7a(void)

undefined8 FUN_147062d7a(longlong *param_1)

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



// FUNCTION 147062e1c FUN_147062e1c body=95 status=ok
// SIG undefined FUN_147062e1c(void)

void FUN_147062e1c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147062e7c FUN_147062e7c body=132 status=ok
// SIG undefined FUN_147062e7c(void)

void FUN_147062e7c(longlong param_1,int param_2)

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



// FUNCTION 147062f02 FUN_147062f02 body=57 status=ok
// SIG undefined FUN_147062f02(void)

void FUN_147062f02(undefined8 *param_1,int param_2)

{
  FUN_147062a3a(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147062e1c(param_1,param_2);
  return;
}



// FUNCTION 147062f3c FUN_147062f3c body=137 status=ok
// SIG undefined FUN_147062f3c(void)

undefined4
FUN_147062f3c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  local_20 = param_3[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  uVar4 = FUN_14706321e(param_2,&local_28,param_4);
  plVar3 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147062fe2 FUN_147062fe2 body=137 status=ok
// SIG undefined FUN_147062fe2(void)

undefined4
FUN_147062fe2(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  local_20 = param_3[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  uVar4 = FUN_1470632d8(param_2,&local_28,param_4);
  plVar3 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706306c FUN_14706306c body=137 status=ok
// SIG undefined FUN_14706306c(void)

undefined4
FUN_14706306c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  local_20 = param_3[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  uVar4 = FUN_147063392(param_2,&local_28,param_4);
  plVar3 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470630f6 FUN_1470630f6 body=134 status=ok
// SIG undefined FUN_1470630f6(void)

undefined4 FUN_1470630f6(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  local_20 = param_3[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  uVar4 = FUN_14706344c(param_2,&local_28);
  plVar3 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706317e FUN_14706317e body=157 status=ok
// SIG undefined FUN_14706317e(void)

undefined8
FUN_14706317e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_4;
  local_20 = param_4[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_147063504(param_3,param_2,&local_28,param_5);
  plVar3 = (longlong *)param_4[1];
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706321e FUN_14706321e body=185 status=ok
// SIG undefined FUN_14706321e(void)

undefined4 FUN_14706321e(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 8);
  local_30 = *param_2;
  local_28 = (longlong *)param_2[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,param_1,&local_30,param_3);
  plVar3 = local_28;
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
      }
    }
  }
  plVar3 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470632d8 FUN_1470632d8 body=185 status=ok
// SIG undefined FUN_1470632d8(void)

undefined4 FUN_1470632d8(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 8);
  local_30 = *param_2;
  local_28 = (longlong *)param_2[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  uVar4 = (**(code **)(*plVar3 + 0x48))(plVar3,param_1,&local_30,param_3);
  plVar3 = local_28;
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
      }
    }
  }
  plVar3 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147063392 FUN_147063392 body=185 status=ok
// SIG undefined FUN_147063392(void)

undefined4 FUN_147063392(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 8);
  local_30 = *param_2;
  local_28 = (longlong *)param_2[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  uVar4 = (**(code **)(*plVar3 + 0x58))(plVar3,param_1,&local_30,param_3);
  plVar3 = local_28;
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
      }
    }
  }
  plVar3 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706344c FUN_14706344c body=182 status=ok
// SIG undefined FUN_14706344c(void)

undefined4 FUN_14706344c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 8);
  local_30 = *param_2;
  local_28 = (longlong *)param_2[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  uVar4 = (**(code **)(*plVar3 + 0x68))(plVar3,param_1,&local_30);
  plVar3 = local_28;
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
      }
    }
  }
  plVar3 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147063504 FUN_147063504 body=192 status=ok
// SIG undefined FUN_147063504(void)

undefined8 FUN_147063504(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 8);
  local_30 = *param_3;
  local_28 = (longlong *)param_3[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_38 = param_4;
  (**(code **)(*plVar3 + 0x78))(plVar3,param_2,param_1,&local_30);
  plVar3 = local_28;
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
      }
    }
  }
  plVar3 = (longlong *)param_3[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470635c6 FUN_1470635c6 body=230 status=ok
// SIG undefined FUN_1470635c6(void)

undefined8 * FUN_1470635c6(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1470636ae FUN_1470636ae body=29 status=ok
// SIG undefined FUN_1470636ae(void)

undefined8 FUN_1470636ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470636e6 FUN_1470636e6 body=29 status=ok
// SIG undefined FUN_1470636e6(void)

bool FUN_1470636e6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147063704 FUN_147063704 body=26 status=ok
// SIG undefined FUN_147063704(void)

bool FUN_147063704(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14706371e FUN_14706371e body=24 status=ok
// SIG undefined FUN_14706371e(void)

bool FUN_14706371e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147063742 FUN_147063742 body=101 status=ok
// SIG undefined FUN_147063742(void)

void FUN_147063742(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a156270;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a156200;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1470637a8 FUN_1470637a8 body=101 status=ok
// SIG undefined FUN_1470637a8(void)

void FUN_1470637a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a156270;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a156200;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14706380e FUN_14706380e body=131 status=ok
// SIG undefined FUN_14706380e(void)

void FUN_14706380e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a156270;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a156200;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147063892 FUN_147063892 body=90 status=ok
// SIG undefined FUN_147063892(void)

void FUN_147063892(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470638ee FUN_1470638ee body=155 status=ok
// SIG undefined FUN_1470638ee(void)

bool FUN_1470638ee(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_38);
    lVar3 = CONCAT44(uStack_34,local_38);
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706398c FUN_14706398c body=230 status=ok
// SIG undefined FUN_14706398c(void)

undefined8 * FUN_14706398c(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 147063a74 FUN_147063a74 body=29 status=ok
// SIG undefined FUN_147063a74(void)

undefined8 FUN_147063a74(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147063aac FUN_147063aac body=29 status=ok
// SIG undefined FUN_147063aac(void)

bool FUN_147063aac(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147063aca FUN_147063aca body=26 status=ok
// SIG undefined FUN_147063aca(void)

bool FUN_147063aca(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147063ae4 FUN_147063ae4 body=24 status=ok
// SIG undefined FUN_147063ae4(void)

bool FUN_147063ae4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147063b08 FUN_147063b08 body=101 status=ok
// SIG undefined FUN_147063b08(void)

void FUN_147063b08(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a156350;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1562e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147063b6e FUN_147063b6e body=101 status=ok
// SIG undefined FUN_147063b6e(void)

void FUN_147063b6e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a156350;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1562e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147063bd4 FUN_147063bd4 body=131 status=ok
// SIG undefined FUN_147063bd4(void)

void FUN_147063bd4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a156350;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1562e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147063c58 FUN_147063c58 body=90 status=ok
// SIG undefined FUN_147063c58(void)

void FUN_147063c58(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147063cb4 FUN_147063cb4 body=155 status=ok
// SIG undefined FUN_147063cb4(void)

bool FUN_147063cb4(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_38);
    lVar3 = CONCAT44(uStack_34,local_38);
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147063d52 FUN_147063d52 body=230 status=ok
// SIG undefined FUN_147063d52(void)

undefined8 * FUN_147063d52(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 147063e3a FUN_147063e3a body=29 status=ok
// SIG undefined FUN_147063e3a(void)

undefined8 FUN_147063e3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147063e72 FUN_147063e72 body=29 status=ok
// SIG undefined FUN_147063e72(void)

bool FUN_147063e72(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147063e90 FUN_147063e90 body=26 status=ok
// SIG undefined FUN_147063e90(void)

bool FUN_147063e90(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147063eaa FUN_147063eaa body=24 status=ok
// SIG undefined FUN_147063eaa(void)

bool FUN_147063eaa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147063ece FUN_147063ece body=101 status=ok
// SIG undefined FUN_147063ece(void)

void FUN_147063ece(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a156430;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1563c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147063f34 FUN_147063f34 body=101 status=ok
// SIG undefined FUN_147063f34(void)

void FUN_147063f34(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a156430;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1563c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147063f9a FUN_147063f9a body=131 status=ok
// SIG undefined FUN_147063f9a(void)

void FUN_147063f9a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a156430;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1563c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14706401e FUN_14706401e body=44 status=ok
// SIG undefined FUN_14706401e(void)

void FUN_14706401e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147064047. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 14706404a FUN_14706404a body=144 status=ok
// SIG undefined FUN_14706404a(void)

bool FUN_14706404a(longlong param_1,undefined8 param_2)

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
    FUN_1400841de(param_1 + 0x18,&local_30);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470640de FUN_1470640de body=59 status=ok
// SIG undefined FUN_1470640de(void)

void FUN_1470640de(longlong param_1)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x4c) < 0) {
    FUN_14706411a(param_1);
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar1 = param_1;
  }
  FUN_147057811(lVar1,*(undefined4 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 14706411a FUN_14706411a body=61 status=ok
// SIG undefined FUN_14706411a(void)

void FUN_14706411a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar1 = param_1;
  }
  FUN_147057811(lVar1,*(undefined4 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) == 0) {
    return;
  }
  FUN_147064158(param_1,0);
  return;
}



// FUNCTION 147064158 FUN_147064158 body=94 status=ok
// SIG undefined FUN_147064158(void)

void FUN_147064158(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar2 = FUN_144a3809e((ulonglong)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x4c)) {
    *(int *)(param_1 + 0x4c) = iVar3;
    FUN_1470641b6(param_1,*(undefined4 *)(param_1 + 0x48));
    return;
  }
  return;
}



// FUNCTION 1470641b6 FUN_1470641b6 body=132 status=ok
// SIG undefined FUN_1470641b6(void)

void FUN_1470641b6(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 14706423a FUN_14706423a body=16 status=ok
// SIG undefined FUN_14706423a(void)

undefined1 FUN_14706423a(void)

{
  FUN_14706424a();
  return 1;
}



// FUNCTION 14706424a FUN_14706424a body=83 status=ok
// SIG undefined FUN_14706424a(void)

void FUN_14706424a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x48);
  *(uint *)(lVar2 + 0x48) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x4c) < iVar1 + 1U) {
    FUN_14706429e(lVar2,iVar1);
  }
  lVar3 = *(longlong *)(lVar2 + 0x40);
  if (*(longlong *)(lVar2 + 0x40) == 0) {
    lVar3 = lVar2;
  }
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 8) = 0;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    *(longlong *)(lVar3 + (longlong)iVar1 * 8) = lVar2;
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14706429e FUN_14706429e body=110 status=ok
// SIG undefined FUN_14706429e(void)

void FUN_14706429e(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_1470641b6(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14706430e FUN_14706430e body=239 status=ok
// SIG undefined FUN_14706430e(void)

void FUN_14706430e(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = *(longlong **)(param_1 + 0x20);
  local_28 = *param_3;
  local_20 = param_3[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  local_38 = *(undefined8 *)(param_1 + 0x10);
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 == (longlong *)0x0) {
    local_30 = (longlong *)0x0;
    local_48 = &local_28;
    (**(code **)(*plVar2 + 0x40))();
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_48 = &local_28;
    local_30 = plVar3;
    (**(code **)(*plVar2 + 0x40))();
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470643fe FUN_1470643fe body=83 status=ok
// SIG undefined FUN_1470643fe(void)

void FUN_1470643fe(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 << 3,0);
  iVar1 = (int)(uVar2 >> 3);
  iVar3 = 0x7fffffff;
  if ((int)param_2 <= iVar1) {
    iVar3 = iVar1;
  }
  if (iVar3 == *(int *)(param_1 + 0x80c)) {
    return;
  }
  *(int *)(param_1 + 0x80c) = iVar3;
  FUN_147064452(param_1,*(undefined4 *)(param_1 + 0x808));
  return;
}



// FUNCTION 147064452 FUN_147064452 body=144 status=ok
// SIG undefined FUN_147064452(void)

void FUN_147064452(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x800);
  if ((uint)param_3 < 0x101) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x800,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x800),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x800,param_2,param_3,8);
  return;
}



// FUNCTION 1470644e2 FUN_1470644e2 body=125 status=ok
// SIG undefined FUN_1470644e2(void)

void FUN_1470644e2(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x808);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x100;
    if (0x100 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x100 < *(uint *)(param_1 + 0x80c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x80c) = iVar5;
    FUN_147064452(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147064560 FUN_147064560 body=164 status=ok
// SIG undefined FUN_147064560(void)

void FUN_147064560(longlong *param_1,undefined8 param_2)

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
        goto LAB_1470645e0;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1470645e0:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 147064604 FUN_147064604 body=31 status=ok
// SIG undefined FUN_147064604(void)

undefined8 FUN_147064604(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147064640 FUN_147064640 body=93 status=ok
// SIG undefined FUN_147064640(void)

void FUN_147064640(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a1564a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14706469e FUN_14706469e body=123 status=ok
// SIG undefined FUN_14706469e(void)

void FUN_14706469e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a1564a0;
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



// FUNCTION 14706471a FUN_14706471a body=21 status=ok
// SIG undefined FUN_14706471a(void)

undefined8 FUN_14706471a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147064730 FUN_147064730 body=8 status=ok
// SIG undefined FUN_147064730(void)

void FUN_147064730(undefined8 param_1)

{
  DAT_14c99f930 = param_1;
  return;
}



// FUNCTION 14706473c FUN_14706473c body=502 status=ok
// SIG undefined FUN_14706473c(void)

void FUN_14706473c(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  int local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != 0) {
    FUN_1400020e8(param_2,&DAT_149e01f60,1);
    local_58 = CONCAT44(local_58._4_4_,0x13a4);
    FUN_147064934(param_2,L"SCVER",&local_58);
    FUN_1470649e6(param_2,L"R4DV",param_1);
    local_58 = 0;
    uStack_50 = 0;
    FUN_147064aa4(param_1 + 8,&local_58);
    if (0 < (int)uStack_50) {
      lVar3 = 0;
      uVar4 = 0;
      do {
        lVar2 = local_58 + lVar3;
        FUN_140002266(&local_68,L"SR%d",uVar4 & 0xffffffff);
        puVar1 = &DAT_149dfb77a;
        if (local_60 != 0) {
          puVar1 = local_68;
        }
        FUN_147064be8(param_2,puVar1,lVar2);
        if (local_68 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 4;
      } while ((longlong)uVar4 < (longlong)(int)uStack_50);
    }
    FUN_147064be8(param_2,L"QMOD",param_1 + 0x58);
    FUN_147064934(param_2,L"CQLT",param_1 + 0x5c);
    FUN_147064be8(param_2,L"ASTH",param_1 + 0x60);
    FUN_1470649e6(param_2,L"INLC",param_1 + 100);
    FUN_147064be8(param_2,L"LCK1",param_1 + 0x68);
    FUN_147064934(param_2,L"CSZE",param_1 + 0x6c);
    FUN_1470649e6(param_2,&DAT_14a156984,param_1 + 0x70);
    FUN_147064934(param_2,&DAT_14a15698c,param_1 + 0x74);
    FUN_147064934(param_2,L"MCSO",param_1 + 0x78);
    FUN_1400020e8(param_2,&DAT_14a15699e,3);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147064934 FUN_147064934 body=177 status=ok
// SIG undefined FUN_147064934(void)

void FUN_147064934(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140002266(&local_40,&DAT_149e063bc,*param_3);
  puVar2 = local_40;
  if (local_38 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_30,L"%s_%s_",param_2,puVar2);
  iVar1 = local_28 + -1;
  if (local_28 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_1,local_30,iVar1);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470649e6 FUN_1470649e6 body=189 status=ok
// SIG undefined FUN_1470649e6(void)

void FUN_1470649e6(undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pwVar2 = L"false";
  if (*param_3 != '\0') {
    pwVar2 = L"true";
  }
  FUN_140056680(&local_40,pwVar2);
  puVar3 = local_40;
  if (local_38 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_30,L"%s_%s_",param_2,puVar3);
  iVar1 = local_28 + -1;
  if (local_28 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_1,local_30,iVar1);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147064aa4 FUN_147064aa4 body=322 status=ok
// SIG undefined FUN_147064aa4(void)

void FUN_147064aa4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
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
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
    FUN_14482f6fa(param_2);
  }
  local_48 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      iVar2 = iStack_5c;
      lVar1 = *local_78;
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_14475e4ac(param_2,iVar3);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar3 * 4) =
           *(undefined4 *)((longlong)iVar2 * 0x10 + lVar1 + 4);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147064be8 FUN_147064be8 body=184 status=ok
// SIG undefined FUN_147064be8(void)

void FUN_147064be8(undefined8 param_1,undefined8 param_2,float *param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140002266(&local_40,&DAT_149e02016,(double)*param_3);
  puVar2 = local_40;
  if (local_38 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_30,L"%s_%s_",param_2,puVar2);
  iVar1 = local_28 + -1;
  if (local_28 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_1,local_30,iVar1);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147064ca1 FUN_147064ca1 body=74 status=ok
// SIG undefined FUN_147064ca1(void)

int FUN_147064ca1(longlong param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = 1;
  if (1 < *(int *)(param_1 + 4)) {
    iVar1 = *(int *)(param_1 + 4);
  }
  fVar2 = (float)(*(int *)(*(longlong *)(param_1 + 0x10) + 8) / iVar1) *
          (*(float *)(param_1 + 0xc) / *(float *)(param_1 + 8));
  return -(((int)ROUND(-0.5 - (fVar2 + fVar2)) >> 1) * iVar1);
}



// FUNCTION 147064cec FUN_147064cec body=44 status=ok
// SIG undefined FUN_147064cec(void)

undefined8 * FUN_147064cec(undefined8 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_14494321d(0x40);
  *puVar1 = 0xbf800000;
  *(undefined8 *)(puVar1 + 2) = 0;
  *param_1 = puVar1;
  return param_1;
}



// FUNCTION 147064d18 FUN_147064d18 body=54 status=ok
// SIG undefined FUN_147064d18(void)

void FUN_147064d18(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 8) != 0) {
      src_delete();
    }
    thunk_FUN_1400020a8(lVar1,0x40);
    return;
  }
  return;
}



// FUNCTION 147064d4e FUN_147064d4e body=13 status=ok
// SIG undefined FUN_147064d4e(void)

void FUN_147064d4e(longlong *param_1,undefined1 param_2,float param_3,int param_4)

{
  undefined8 *puVar1;
  float *pfVar2;
  int iVar3;
  double *pdVar4;
  undefined1 auStack_68 [36];
  undefined1 auStack_44 [4];
  ulonglong uStack_40;
  
  pfVar2 = (float *)*param_1;
  if (pfVar2 == (float *)0x0) {
    return;
  }
  uStack_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = *(undefined8 **)(pfVar2 + 2);
  if (puVar1 == (undefined8 *)0x0) {
LAB_142afaf8d:
    pdVar4 = (double *)src_new(param_2,param_4,auStack_44);
    *(double **)(pfVar2 + 2) = pdVar4;
    if (pdVar4 == (double *)0x0) goto LAB_142afaf63;
  }
  else {
    iVar3 = -7;
    if ((puVar1[5] != 0) && (puVar1[6] != 0)) {
      iVar3 = *(int *)((longlong)puVar1 + 0x14);
    }
    if (iVar3 == param_4) {
      if ((code *)puVar1[7] != (code *)0x0) {
        (*(code *)puVar1[7])(puVar1);
      }
      puVar1[0xc] = 0;
      *(undefined4 *)(puVar1 + 0xb) = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      pdVar4 = *(double **)(pfVar2 + 2);
    }
    else {
      pdVar4 = (double *)src_delete(puVar1);
      *(double **)(pfVar2 + 2) = pdVar4;
    }
    if (pdVar4 == (double *)0x0) goto LAB_142afaf8d;
  }
  if ((((pdVar4[5] != 0.0) && (pdVar4[6] != 0.0)) && (0.00390625 <= param_3)) && (param_3 <= 256.0))
  {
    *pdVar4 = (double)param_3;
  }
LAB_142afaf63:
  *pfVar2 = param_3;
  if ((uStack_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147064d5c FUN_147064d5c body=15 status=ok
// SIG undefined FUN_147064d5c(void)

undefined8
FUN_147064d5c(undefined8 *param_1,undefined8 param_2,float param_3,byte param_4,undefined8 param_5,
             float param_6,float *param_7)

{
  float *pfVar1;
  undefined8 uVar2;
  
  pfVar1 = (float *)*param_1;
  if (pfVar1 == (float *)0x0) {
    return 0;
  }
  uVar2 = 0;
  if (*(longlong *)(pfVar1 + 2) != 0) {
    *(undefined8 *)(pfVar1 + 4) = param_2;
    pfVar1[8] = param_3;
    *(undefined8 *)(pfVar1 + 6) = param_5;
    pfVar1[9] = param_6;
    *(double *)(pfVar1 + 0xe) = (double)*pfVar1;
    pfVar1[0xc] = (float)(uint)param_4;
    uVar2 = src_process(*(longlong *)(pfVar1 + 2),pfVar1 + 4);
    if ((int)uVar2 == 0) {
      *param_7 = pfVar1[0xb];
      uVar2 = 0;
    }
  }
  return uVar2;
}



// FUNCTION 147064df0 FUN_147064df0 body=59 status=ok
// SIG undefined FUN_147064df0(void)

undefined8 FUN_147064df0(longlong *param_1)

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



// FUNCTION 147064e92 FUN_147064e92 body=29 status=ok
// SIG undefined FUN_147064e92(void)

void FUN_147064e92(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14a156cc0;
  return;
}



// FUNCTION 147064eb0 FUN_147064eb0 body=36 status=ok
// SIG undefined FUN_147064eb0(void)

undefined8 FUN_147064eb0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147064ef0 FUN_147064ef0 body=93 status=ok
// SIG undefined FUN_147064ef0(void)

void FUN_147064ef0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a156c50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147064f4e FUN_147064f4e body=123 status=ok
// SIG undefined FUN_147064f4e(void)

void FUN_147064f4e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a156c50;
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



// FUNCTION 147064fd6 FUN_147064fd6 body=21 status=ok
// SIG undefined FUN_147064fd6(void)

undefined8 FUN_147064fd6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147064fec FUN_147064fec body=34 status=ok
// SIG undefined FUN_147064fec(void)

undefined8 FUN_147064fec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 147065014 FUN_147065014 body=55 status=ok
// SIG undefined FUN_147065014(void)

undefined8 * FUN_147065014(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559(".\\Runtime/AudioLink/AudioLinkCore/Public/AudioLinkSettingsAbstract.h",0x26,
                L"Pure virtual not implemented (%s)",L"UAudioLinkSettingsAbstract::GetFactoryName");
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14706504c FUN_14706504c body=226 status=ok
// SIG undefined FUN_14706504c(void)

longlong * FUN_14706504c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[5] == 0) {
    (**(code **)(*param_1 + 0x2b0))(param_1,&local_30);
    plVar1 = local_28;
    if (param_1 + 5 != &local_30) {
      param_1[5] = local_30;
      local_30 = 0;
      plVar3 = (longlong *)param_1[6];
      if (local_28 != plVar3) {
        local_28 = (longlong *)0x0;
        param_1[6] = (longlong)plVar1;
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
      }
    }
    plVar1 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_28 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1 + 5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147065130 FUN_147065130 body=54 status=ok
// SIG undefined FUN_147065130(void)

undefined8 * FUN_147065130(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559(".\\Runtime/AudioLink/AudioLinkCore/Public/AudioLinkSettingsAbstract.h",0x3f,
                L"Pure virtual not implemented (%s)",L"UAudioLinkSettingsAbstract::MakeProxy");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 147065166 FUN_147065166 body=417 status=ok
// SIG undefined FUN_147065166(void)

bool FUN_147065166(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  wchar_t *_Str;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  longlong *local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_1 == (longlong *)0x0) {
    bVar3 = false;
  }
  else {
    (**(code **)(*param_1 + 0x90))(param_1,&local_d8);
    plVar1 = local_d8;
    if (*(int *)(param_2 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)*param_2;
    }
    local_48 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_40 = 0;
      local_38 = 0;
    }
    else {
      sVar5 = wcslen(_Str);
      FUN_1449b853c(&local_c8,_Str,sVar5 & 0xffffffff,1);
    }
    iVar4 = (**(code **)(*param_1 + 0x68))(param_1,local_40,plVar1);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if ((iVar4 == 7) || (iVar4 == 0)) {
      (**(code **)(*local_d8 + 0x80))(local_d8,&local_c8,0);
      if (&local_c8 == param_3) {
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_3 != 0) {
          FUN_1400020a8();
        }
        *param_3 = local_c8;
        local_c8 = 0;
        *(undefined4 *)(param_3 + 1) = local_c0;
        *(undefined4 *)((longlong)param_3 + 0xc) = local_bc;
      }
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
    bVar3 = iVar4 == 0 || iVar4 == 7;
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147065308 FUN_147065308 body=346 status=ok
// SIG undefined FUN_147065308(void)

void FUN_147065308(undefined8 param_1,undefined4 param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  longlong *local_a0;
  undefined1 local_94 [8];
  int local_8c;
  longlong local_88 [2];
  undefined8 local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_8c = 0;
  local_a8 = &DAT_14c872ce8;
  FUN_1414d73b6(DAT_14c872ce0,L"Ping",L"StackSize",&local_8c);
  if (local_8c != 0) {
    iVar3 = 0x200000;
    if (local_8c < 0x200000) {
      iVar3 = local_8c;
    }
    local_8c = 0x8000;
    if (0x8000 < iVar3) {
      local_8c = iVar3;
    }
  }
  FUN_1446f470e(local_94,L"WINDOWS",1);
  uVar1 = FUN_140272950(local_94);
  uVar2 = FUN_14001cc68(0x80,0x10);
  local_88[0] = *param_3;
  local_78[0] = 0;
  if (local_88[0] != 0) {
    plVar4 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_3[2];
    }
    (**(code **)*plVar4)(plVar4,local_78);
  }
  local_a0 = local_88;
  local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,local_8c);
  FUN_147065464(uVar2,uVar1,param_1,param_2);
  if (*param_3 != 0) {
    plVar4 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147065464 FUN_147065464 body=667 status=ok
// SIG undefined FUN_147065464(void)

undefined8 *
FUN_147065464(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
             undefined4 param_5,longlong *param_6)

{
  int *piVar1;
  void *_Src;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  longlong *local_100;
  int local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  code *local_a8 [2];
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar2 = FUN_1401cb356();
  FUN_145aa41ca(param_1,L"FIcmpAsyncResult",0,uVar2);
  *param_1 = &PTR_FUN_14a157308;
  param_1[3] = param_2;
  lVar5 = *param_6;
  param_1[4] = lVar5;
  param_1[6] = 0;
  if (lVar5 != 0) {
    plVar4 = param_6 + 4;
    if ((longlong *)param_6[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_6[2];
    }
    (**(code **)*plVar4)(plVar4,param_1 + 6);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if (param_1[3] == 0) {
    LOCK();
    *(undefined4 *)(param_1 + 0xc) = 1;
    UNLOCK();
  }
  else {
    local_100 = (longlong *)0x0;
    local_f8 = *(int *)(param_3 + 1);
    lVar5 = (longlong)local_f8;
    _Src = (void *)*param_3;
    local_108 = param_1;
    if (lVar5 == 0) {
      local_f4 = 0;
    }
    else {
      FUN_1446dd670(&local_100,local_f8,0);
      memcpy(local_100,_Src,lVar5 * 2);
    }
    local_a8[0] = (code *)0x0;
    local_f0 = param_4;
    plVar3 = (longlong *)FUN_14001cc68(0x28,8);
    plVar4 = local_100;
    *plVar3 = (longlong)&PTR_FUN_14a157320;
    plVar3[1] = (longlong)local_108;
    plVar3[2] = 0;
    lVar5 = (longlong)local_f8;
    *(int *)(plVar3 + 3) = local_f8;
    local_98 = plVar3;
    if (lVar5 == 0) {
      *(undefined4 *)((longlong)plVar3 + 0x1c) = 0;
    }
    else {
      FUN_1446dd670(plVar3 + 2,local_f8,0);
      memcpy((void *)plVar3[2],plVar4,lVar5 * 2);
    }
    *(undefined4 *)(plVar3 + 4) = local_f0;
    if (plVar3 != (longlong *)&DAT_fffffffffffffff8) {
      local_a8[0] = FUN_147067e40;
    }
    if (local_100 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_e8 = 0;
    local_d8 = 0;
    FUN_147067b66(&local_108,local_a8,param_5);
    FUN_147068338(param_1 + 0xd,&local_108);
    plVar4 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_100 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (local_a8[0] != (code *)0x0) {
      plVar4 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar4 = local_88;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if (*param_6 != 0) {
    plVar4 = param_6 + 4;
    if ((longlong *)param_6[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_6[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147065704 FUN_147065704 body=289 status=ok
// SIG undefined FUN_147065704(void)

undefined8 *
FUN_147065704(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14a157220;
  *(undefined4 *)(param_1 + 1) = param_4;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  param_1[4] = param_2;
  param_1[5] = 0;
  iVar1 = *(int *)(param_3 + 1);
  uVar2 = *param_3;
  *(int *)(param_1 + 6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_147068f16(param_1 + 5,iVar1);
    FUN_147068f80(param_1[5],uVar2,iVar1);
  }
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_147068ff8(param_1 + 0x1b,param_5);
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  FUN_14706907c(param_1 + 0x1d,param_6);
  return param_1;
}



// FUNCTION 147065826 FUN_147065826 body=174 status=ok
// SIG undefined FUN_147065826(void)

void FUN_147065826(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a157220;
  FUN_1470658d4();
  FUN_14706912a(param_1 + 0x11);
  FUN_1449db362(param_1 + 0x1d);
  FUN_1449db362(param_1 + 0x1b);
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_147068536(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1470685c4(param_1 + 7);
  FUN_1470690ff(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1470658d4 FUN_1470658d4 body=306 status=ok
// SIG undefined FUN_1470658d4(void)

void FUN_1470658d4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    plVar1 = (longlong *)(param_1 + 0x88);
    lVar2 = param_1 + 0x98;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_50 = lVar2;
    if (*(int *)(param_1 + 0xb0) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = *(int *)(param_1 + 0xb0);
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    uVar4 = local_68;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar5 = local_68._4_4_;
    local_80 = plVar1;
    if ((local_68._4_4_ != iVar6) || (local_68 = uVar4, uStack_50 != lVar2)) {
      do {
        local_68 = uVar4;
        lVar3 = *local_80;
        if (*(longlong *)(lVar3 + 8 + (longlong)iVar5 * 0x18) != 0) {
          (**(code **)(**(longlong **)(param_1 + 0x20) + 0x38))();
          *(undefined8 *)(lVar3 + (longlong)iVar5 * 0x18 + 8) = 0;
        }
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_80 != plVar1 ||
               (CONCAT44(uStack_6c,uStack_70) != lVar2 || local_68._4_4_ != iVar6));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147065a08 FUN_147065a08 body=124 status=ok
// SIG undefined FUN_147065a08(void)

undefined8 FUN_147065a08(longlong param_1)

{
  FUN_147069476(param_1 + 0x38);
  FUN_1470658d4(param_1);
  FUN_14706912a(param_1 + 0x88);
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(double *)(param_1 + 0x18) = (double)DAT_14c99f9c8 / 10000.0;
  FUN_14612afb8(DAT_14c872ce0,L"Ping",L"MinPingSendWaitTimeMs",param_1 + 0x18,&DAT_14c872ce8);
  return 1;
}



// FUNCTION 147065a84 FUN_147065a84 body=568 status=ok
// SIG undefined FUN_147065a84(void)

bool FUN_147065a84(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  void *_Src;
  longlong lVar7;
  undefined1 auStack_148 [32];
  longlong local_128;
  void *local_120;
  int local_118;
  undefined4 local_114;
  int local_110;
  void *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  double dStack_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  void **local_78;
  undefined8 *local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    local_128 = param_1 + 0x38;
    FUN_147069476();
    if ((longlong)*(int *)(param_2 + 1) != 0) {
      puVar4 = (undefined8 *)*param_2;
      lVar7 = (longlong)*(int *)(param_2 + 1) * 0x18;
      iVar6 = 1;
      do {
        local_e8 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        local_d0 = 0;
        local_e0 = 0;
        dStack_d8 = 0.0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_a0 = 0xbf800000;
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        local_c8 = 4;
        FUN_144a787a6(&local_f8,puVar4);
        local_e8 = *(undefined4 *)(puVar4 + 2);
        dStack_d8 = (double)*(float *)(param_1 + 8);
        local_d0 = CONCAT22(local_d0._2_2_,(short)iVar6);
        local_108 = (void *)0x0;
        uStack_100 = 0;
        cVar3 = FUN_147065166(*(undefined8 *)(param_1 + 0x20),puVar4,&local_108);
        if (cVar3 == '\0') {
          local_c8 = 3;
          local_118 = *(int *)(puVar4 + 1);
          _Src = (void *)*puVar4;
        }
        else {
          iVar2 = (int)uStack_100 + -1;
          if ((int)uStack_100 == 0) {
            iVar2 = 0;
          }
          FUN_1402980a2(&local_c0,local_108,iVar2);
          _Src = local_108;
          local_118 = (int)uStack_100;
        }
        local_120 = (void *)0x0;
        lVar5 = (longlong)local_118;
        if (lVar5 == 0) {
          local_114 = 0;
        }
        else {
          FUN_1446dd670(&local_120,local_118,0);
          memcpy(local_120,_Src,lVar5 * 2);
        }
        local_78 = &local_120;
        local_110 = iVar6;
        local_70 = &local_f8;
        FUN_1470697f4(local_128,local_64,&local_78);
        if (local_120 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_108 != (void *)0x0) {
          FUN_1400020a8();
        }
        FUN_147065cc6(&local_f8);
        puVar4 = puVar4 + 3;
        iVar6 = iVar6 + 1;
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != 0);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 != 0;
}



// FUNCTION 147065cc6 FUN_147065cc6 body=102 status=ok
// SIG undefined FUN_147065cc6(void)

void FUN_147065cc6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[0xe];
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
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147065d2c FUN_147065d2c body=412 status=ok
// SIG undefined FUN_147065d2c(void)

ulonglong FUN_147065d2c(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  longlong *local_58;
  ulonglong *local_50;
  longlong **local_48;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    plVar1 = (longlong *)(param_1 + 0x88);
    uVar7 = *param_2;
    iVar5 = FUN_144a788f7(uVar7 & 0xffffffff);
    if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
      lVar8 = param_1 + 0xc0;
      if (*(longlong *)(param_1 + 200) != 0) {
        lVar8 = *(longlong *)(param_1 + 200);
      }
      iVar5 = *(int *)(lVar8 + (ulonglong)
                               (*(int *)(param_1 + 0xd0) - 1U & iVar5 + (int)(uVar7 >> 0x20)) * 4);
      if (iVar5 != -1) {
        do {
          puVar2 = (ulonglong *)(*plVar1 + (longlong)iVar5 * 0x18);
          if (*puVar2 == uVar7) {
            if (puVar2 + 1 != (ulonglong *)0x0 && puVar2 != (ulonglong *)0x0) {
              uVar7 = puVar2[1];
              goto LAB_147065dfe;
            }
            break;
          }
          iVar5 = (int)puVar2[2];
        } while (iVar5 != -1);
      }
    }
    plVar3 = *(longlong **)(param_1 + 0x20);
    FUN_140056680(&local_50,L"UDPPing");
    FUN_1401a700c(&local_3c,0x118);
    local_58 = (longlong *)(ulonglong)local_3c;
    plVar6 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_58,&local_50,param_2);
    if (local_50 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
    if (plVar6 != (longlong *)0x0) {
      cVar4 = (**(code **)(*plVar6 + 0x98))(plVar6,1);
      if (cVar4 != '\0') {
        local_58 = plVar6;
        local_50 = param_2;
        local_48 = &local_58;
        FUN_147069cba(plVar1,&local_3c);
        uVar7 = *(ulonglong *)(*plVar1 + 8 + (longlong)(int)local_3c * 0x18);
        goto LAB_147065dfe;
      }
      (**(code **)(*plVar3 + 0x38))(plVar3,plVar6);
    }
  }
  uVar7 = 0;
LAB_147065dfe:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 147065eca FUN_147065eca body=210 status=ok
// SIG undefined FUN_147065eca(void)

void FUN_147065eca(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    local_58 = *param_2;
    local_50 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_2 + 2) = 0;
    local_48 = param_2[4];
    local_44 = param_2[5];
    *(undefined8 *)(param_2 + 4) = 0;
    local_40 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_2 + 6) = 0;
    local_38 = param_2[8];
    local_34 = param_2[9];
    *(undefined8 *)(param_2 + 8) = 0;
    local_30 = param_2[10];
    local_28 = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_2 + 0xc) = 0;
    local_20 = param_2[0xe];
    local_1c = param_2[0xf];
    *(undefined8 *)(param_2 + 0xe) = 0;
    local_18 = param_2[0x10];
    (**(code **)(*param_1 + 0x60))();
  }
  FUN_14706882e(param_2);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147065f9e FUN_147065f9e body=109 status=ok
// SIG undefined FUN_147065f9e(void)

longlong FUN_147065f9e(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
  FUN_147068482();
  *(undefined8 *)(param_1 + 0x30) = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 0x38) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 0x30),iVar1,0);
    memcpy(*(void **)(param_1 + 0x30),_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_3 + 2);
  return param_1;
}



// FUNCTION 14706600c FUN_14706600c body=122 status=ok
// SIG undefined FUN_14706600c(void)

undefined4 FUN_14706600c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  ushort uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  iVar1 = (int)param_1[1];
  if (iVar1 == (int)param_2[1]) {
    if (1 < iVar1) {
      lVar4 = 0;
      while( true ) {
        uVar5 = *(ushort *)(*param_1 + lVar4);
        uVar6 = (ulonglong)uVar5;
        uVar2 = *(ushort *)(*param_2 + lVar4);
        if (uVar5 != uVar2) break;
        if (uVar5 == 0) goto LAB_14706607a;
LAB_147066044:
        lVar4 = lVar4 + 2;
      }
      if ((uVar2 | uVar5) < 0x80) {
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar3 = (ulonglong)uVar2;
        uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar3]) goto LAB_147066044;
      }
      if (uVar5 != uVar2) {
        return 0;
      }
    }
  }
  else if ((int)param_2[1] + iVar1 != 1) {
    return 0;
  }
LAB_14706607a:
  return CONCAT31((int3)((uint)(int)param_1[2] >> 8),(int)param_1[2] == (int)param_2[2]);
}



// FUNCTION 147066086 FUN_147066086 body=130 status=ok
// SIG undefined FUN_147066086(void)

void FUN_147066086(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  
  *param_1 = &PTR_FUN_14a1572a0;
  lVar4 = param_1[7];
  if (param_1[7] != 0) {
    while( true ) {
      do {
        lVar6 = lVar4;
        lVar4 = 0;
      } while (lVar6 == 0);
      plVar3 = *(longlong **)(lVar6 + 0x70);
      cVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,0xffffffff,0);
      if (cVar5 != '\0') break;
      lVar4 = param_1[7];
    }
  }
  plVar3 = (longlong *)param_1[8];
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
  FUN_1449db362(param_1 + 4);
  FUN_145bfbed6(param_1);
  return;
}



// FUNCTION 147066108 FUN_147066108 body=512 status=ok
// SIG undefined FUN_147066108(void)

ulonglong FUN_147066108(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong *local_f0;
  int local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  code *local_98 [2];
  longlong *local_88;
  longlong local_78 [5];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    LOCK();
    uVar2 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = 1;
    uVar6 = (ulonglong)uVar2;
    UNLOCK();
  }
  else {
    LOCK();
    *(undefined4 *)(param_1 + 0x30) = 0;
    UNLOCK();
    local_f0 = (longlong *)0x0;
    iVar3 = *(int *)(param_2 + 1);
    uVar4 = *param_2;
    local_f8 = param_1;
    local_e8 = iVar3;
    if (iVar3 == 0) {
      local_e4 = 0;
    }
    else {
      FUN_147068f16(&local_f0,iVar3);
      FUN_147068f80(local_f0,uVar4,iVar3);
    }
    local_98[0] = (code *)0x0;
    local_e0 = param_3;
    plVar5 = (longlong *)FUN_14001cc68(0x28,8);
    iVar3 = local_e8;
    plVar7 = local_f0;
    *plVar5 = (longlong)&PTR_FUN_14a157560;
    plVar5[1] = local_f8;
    plVar5[2] = 0;
    *(int *)(plVar5 + 3) = local_e8;
    local_88 = plVar5;
    if (local_e8 == 0) {
      *(undefined4 *)((longlong)plVar5 + 0x1c) = 0;
    }
    else {
      FUN_147068f16(plVar5 + 2,local_e8);
      FUN_147068f80(plVar5[2],plVar7,iVar3);
    }
    *(undefined4 *)(plVar5 + 4) = local_e0;
    if (plVar5 != (longlong *)&DAT_fffffffffffffff8) {
      local_98[0] = FUN_142afd6da;
    }
    FUN_1470690ff(local_f0,local_e8);
    if (local_f0 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_d8 = 0;
    local_c8 = 0;
    FUN_147066309(&local_f8,local_98,param_4);
    uVar6 = FUN_147068748(param_1 + 0x38,&local_f8);
    plVar7 = local_f0;
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_f0 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        uVar6 = (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          uVar6 = (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (local_98[0] != (code *)0x0) {
      plVar7 = local_88;
      if (local_88 == (longlong *)0x0) {
        plVar7 = local_78;
      }
      uVar6 = (**(code **)(*plVar7 + 0x10))();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147066309 FUN_147066309 body=691 status=ok
// SIG undefined FUN_147066309(void)

undefined8 *
FUN_147066309(undefined8 *param_1,longlong *param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 local_e0;
  undefined2 *local_d0;
  int local_c8;
  longlong local_c0;
  longlong *local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined1 local_98;
  longlong local_88 [2];
  longlong *local_78 [2];
  longlong local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_88[0] = *param_2;
  local_78[0] = (longlong *)0x0;
  if (local_88[0] != 0) {
    plVar8 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_2[2];
    }
    (**(code **)*plVar8)(plVar8,local_78);
  }
  FUN_14706a0f4(&local_a8,param_4);
  plVar8 = plStack_a0;
  uVar3 = local_a8;
  local_98 = 1;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
    UNLOCK();
  }
  cVar4 = FUN_144a53f06();
  if (cVar4 == '\0') {
    FUN_14706a049(&local_a8,local_88);
  }
  else {
    FUN_145c3b830(&local_c0);
    puVar6 = (undefined8 *)FUN_14001cc68(0x80,0x10);
    local_b0 = 1;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
      UNLOCK();
    }
    *puVar6 = &PTR_FUN_14a1575a0;
    puVar6[2] = local_88[0];
    puVar6[4] = local_78[0];
    local_78[0] = (longlong *)0x0;
    *(undefined4 *)(puVar6 + 8) = local_58;
    *(undefined4 *)((longlong)puVar6 + 0x44) = uStack_54;
    *(undefined4 *)(puVar6 + 9) = uStack_50;
    *(undefined4 *)((longlong)puVar6 + 0x4c) = uStack_4c;
    puVar6[6] = local_68;
    puVar6[7] = uStack_60;
    if (local_88[0] != 0) {
      local_88[0] = 0;
    }
    puVar6[10] = local_a8;
    puVar6[0xb] = plStack_a0;
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
    *(undefined1 *)(puVar6 + 0xc) = local_98;
    puVar6[0xd] = local_c0;
    puVar6[0xe] = local_b8;
    uVar5 = FUN_146268020();
    FUN_140002266(&local_d0,L"TAsyncThread %d",uVar5);
    puVar9 = local_d0;
    if (local_c8 == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    local_e0 = 0;
    local_e8 = 0xffffffffffffffff;
    uVar7 = FUN_1411b1052(puVar6,puVar9,param_3,0);
    *(undefined8 *)(local_c0 + 0x80) = uVar7;
    FUN_140b576f0();
    if (local_d0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar2 = (int *)((longlong)local_b8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_b8 + 0x10))(local_b8);
        }
      }
    }
  }
  plVar1 = plStack_a0;
  *param_1 = uVar3;
  param_1[1] = plVar8;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_a0 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (local_88[0] != 0) {
    plVar8 = local_78[0];
    if (local_78[0] == (longlong *)0x0) {
      plVar8 = &local_68;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (*param_4 != 0) {
    plVar8 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1470665be FUN_1470665be body=137 status=ok
// SIG undefined FUN_1470665be(void)

void FUN_1470665be(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    local_28 = *param_2;
    *param_2 = 0;
    local_20 = (undefined4)param_2[1];
    local_1c = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    local_18 = (undefined1)param_2[2];
    (**(code **)(*param_1 + 0x60))();
  }
  FUN_147068807(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147066648 FUN_147066648 body=90 status=ok
// SIG undefined FUN_147066648(void)

undefined8 * FUN_147066648(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_14706886c(param_1,iVar1,0);
    FUN_1470688df(*param_1,uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 1470666a2 FUN_1470666a2 body=350 status=ok
// SIG undefined FUN_1470666a2(void)

undefined8 *
FUN_1470666a2(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_198 [32];
  undefined8 **local_178;
  undefined8 **local_170;
  undefined8 *local_168;
  undefined4 local_160;
  undefined8 *local_158;
  undefined4 local_150;
  undefined1 local_148 [248];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_198;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_158 = (undefined8 *)0x0;
  local_150 = 0;
  FUN_1446efa72(&local_158,0,2,0x10);
  puVar1 = local_158;
  local_150 = 2;
  *local_158 = &PTR_LAB_14a157660;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a1575f0;
  puVar1[3] = param_1;
  local_168 = (undefined8 *)0x0;
  local_160 = 0;
  FUN_1446efa72(&local_168,0,2,0x10);
  puVar1 = local_168;
  local_160 = 2;
  *local_168 = &PTR_LAB_14a157740;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a1576d0;
  puVar1[3] = param_1;
  local_178 = &local_158;
  local_170 = &local_168;
  FUN_147065704(local_148,param_2,param_3,param_4);
  FUN_147065a08(local_148);
  FUN_142afb1f2(local_148);
  FUN_147065826(local_148);
  FUN_1449db362(&local_168);
  FUN_1449db362(&local_158);
  if ((local_50 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147066802 FUN_147066802 body=184 status=ok
// SIG undefined FUN_147066802(void)

void FUN_147066802(ulonglong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar4 = *param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99f9e4) {
    FUN_144b3d300(&DAT_14c99f9e4);
    if (DAT_14c99f9e4 == -1) {
      iVar3 = Ordinal_8(1);
      DAT_14c99f9e0 = iVar3 == 1;
      _Init_thread_footer(&DAT_14c99f9e4);
    }
  }
  if (DAT_14c99f9e0 == '\0') {
    uVar1 = Ordinal_8(uVar4 & 0xffffffff);
    uVar2 = Ordinal_8(uVar4 >> 0x20);
    uVar4 = CONCAT44(uVar1,uVar2);
  }
  *param_1 = uVar4;
  uVar1 = Ordinal_8((int)param_1[1]);
  *(undefined4 *)(param_1 + 1) = uVar1;
  uVar1 = Ordinal_8(*(undefined4 *)((longlong)param_1 + 0xc));
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  return;
}



// FUNCTION 1470668ba FUN_1470668ba body=184 status=ok
// SIG undefined FUN_1470668ba(void)

void FUN_1470668ba(ulonglong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar4 = *param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99f9dc) {
    FUN_144b3d300(&DAT_14c99f9dc);
    if (DAT_14c99f9dc == -1) {
      iVar3 = Ordinal_14(1);
      DAT_14c99f9d8 = iVar3 == 1;
      _Init_thread_footer(&DAT_14c99f9dc);
    }
  }
  if (DAT_14c99f9d8 == '\0') {
    uVar1 = Ordinal_14(uVar4 & 0xffffffff);
    uVar2 = Ordinal_14(uVar4 >> 0x20);
    uVar4 = CONCAT44(uVar1,uVar2);
  }
  *param_1 = uVar4;
  uVar1 = Ordinal_14((int)param_1[1]);
  *(undefined4 *)(param_1 + 1) = uVar1;
  uVar1 = Ordinal_14(*(undefined4 *)((longlong)param_1 + 0xc));
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  return;
}



// FUNCTION 147066972 FUN_147066972 body=334 status=ok
// SIG undefined FUN_147066972(void)

void FUN_147066972(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  int local_48 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[0] = 0;
  local_58 = &DAT_14c872ce8;
  FUN_1414d73b6(DAT_14c872ce0,L"Ping",L"StackSize",local_48);
  iVar5 = 0;
  if (local_48[0] != 0) {
    iVar4 = 0x200000;
    if (local_48[0] < 0x200000) {
      iVar4 = local_48[0];
    }
    iVar5 = 0x8000;
    if (0x8000 < iVar4) {
      iVar5 = iVar4;
    }
  }
  FUN_1446f470e(local_48,L"WINDOWS",1);
  uVar1 = FUN_140272950(local_48);
  puVar2 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  uVar3 = FUN_1401cb356();
  FUN_145aa41ca(puVar2,L"FUdpPingManyAsync",0,uVar3);
  *puVar2 = &PTR_FUN_14a1572a0;
  puVar2[3] = uVar1;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  FUN_147069fc6(puVar2 + 4,param_3);
  *(undefined4 *)(puVar2 + 6) = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_147066108(puVar2,param_1,param_2,iVar5);
  }
  FUN_1449db362(param_3);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147066ac1 FUN_147066ac1 body=2232 status=ok
// SIG undefined FUN_147066ac1(void)

undefined4 * FUN_147066ac1(undefined4 *param_1,longlong *param_2,undefined8 *param_3,float param_4)

{
  LARGE_INTEGER *pLVar1;
  longlong *plVar2;
  int *piVar3;
  ushort uVar4;
  ushort uVar5;
  void *_Src;
  double dVar6;
  double dVar7;
  bool bVar8;
  longlong *plVar9;
  undefined2 uVar10;
  char cVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  longlong *plVar15;
  uint uVar16;
  wchar_t *_Str;
  undefined2 *puVar17;
  LARGE_INTEGER *pLVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  ushort *puVar22;
  bool bVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined1 auStack_208 [32];
  LARGE_INTEGER local_1e8;
  undefined4 local_1e0;
  DWORD local_1cc;
  longlong *local_1c8;
  ulonglong local_1c0;
  LARGE_INTEGER local_1b8;
  LARGE_INTEGER local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  LARGE_INTEGER local_1a0;
  longlong *local_198;
  int local_190;
  char local_189;
  LARGE_INTEGER local_188;
  longlong *local_180;
  undefined2 *local_178;
  undefined8 uStack_170;
  void *local_168;
  int local_160;
  undefined4 local_15c;
  undefined8 *local_158;
  ulonglong uStack_150;
  wchar_t *local_148;
  undefined8 uStack_140;
  uint local_12c;
  LARGE_INTEGER local_128;
  undefined6 uStack_120;
  int local_11a;
  int local_116;
  ushort local_108 [4];
  undefined6 uStack_100;
  undefined2 uStack_fa;
  undefined2 uStack_f8;
  undefined4 uStack_f6;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[10] = 0xbf800000;
  *param_1 = 4;
  local_148 = (wchar_t *)0x0;
  uStack_140 = 0;
  local_158 = (undefined8 *)0x0;
  uStack_150 = 0;
  iVar12 = FUN_1403de9f2(param_3,&local_158,&DAT_149e31048,1);
  local_168 = (void *)0x0;
  local_160 = *(int *)(param_3 + 1);
  lVar21 = (longlong)local_160;
  _Src = (void *)*param_3;
  if (lVar21 == 0) {
    local_15c = 0;
  }
  else {
    FUN_1446dd670(&local_168,local_160,0);
    memcpy(local_168,_Src,lVar21 * 2);
  }
  if (iVar12 == 2) {
    iVar12 = *(int *)(local_158 + 1) + -1;
    if (*(int *)(local_158 + 1) == 0) {
      iVar12 = 0;
    }
    FUN_1402980a2(&local_168,*local_158,iVar12);
    iVar12 = *(int *)(local_158 + 3) + -1;
    if (*(int *)(local_158 + 3) == 0) {
      iVar12 = 0;
    }
    FUN_1402980a2(&local_148,local_158[2],iVar12);
  }
  local_178 = (undefined2 *)0x0;
  uStack_170 = 0;
  cVar11 = FUN_147065166(param_2,&local_168);
  if (cVar11 == '\0') {
    *param_1 = 3;
  }
  else {
    _Str = local_148;
    if ((int)uStack_140 == 0) {
      _Str = L"";
    }
    iVar12 = _wtoi(_Str);
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x90))(param_2,&local_188);
      local_189 = '\0';
      puVar17 = local_178;
      if ((int)uStack_170 == 0) {
        puVar17 = &DAT_149dfb77a;
      }
      (**(code **)(*(longlong *)local_188 + 0x10))(local_188.QuadPart,puVar17,&local_189);
      (**(code **)(*(longlong *)local_188 + 0x28))(local_188.QuadPart,iVar12);
      if (local_189 == '\x01') {
        local_108[0] = 0;
        local_108[1] = 0;
        local_108[2] = 0;
        local_108[3] = 0;
        uStack_100 = 0;
        uStack_fa = 0;
        uStack_f8 = 0;
        uStack_f6 = 0;
        iVar12 = (int)uStack_170 + -1;
        if ((int)uStack_170 == 0) {
          iVar12 = 0;
        }
        FUN_1402980a2(param_1 + 2,local_178,iVar12);
        (**(code **)(*(longlong *)local_188 + 0xa8))(local_188.QuadPart,&local_1a0);
        FUN_140056680(&local_128,L"UDPPing");
        FUN_1401a700c(&local_12c,0x118);
        local_1b0.s.HighPart = 0;
        local_1b0.s.LowPart = local_12c;
        plVar15 = (longlong *)
                  (**(code **)(*param_2 + 0x18))(param_2,&local_1b0,&local_128,&local_1a0);
        if (CONCAT26(local_128.s.HighPart._2_2_,
                     CONCAT24(local_128.s.HighPart._0_2_,
                              CONCAT22(local_128.s.LowPart._2_2_,local_128.s.LowPart._0_2_))) != 0)
        {
          FUN_1400020a8();
        }
        if (plVar15 != (longlong *)0x0) {
          pLVar1 = (LARGE_INTEGER *)(param_1 + 6);
          local_1c8 = (longlong *)(param_1 + 2);
          local_1cc = GetCurrentProcessId();
          uVar20 = (ulonglong)DAT_14c99f9d4;
          DAT_14c99f9d4 = DAT_14c99f9d4 + 1;
          local_108[0] = Ordinal_9();
          puVar22 = local_108;
          local_1c0 = uVar20;
          local_108[1] = Ordinal_9(uVar20);
          local_108[2] = 0;
          uVar13 = Ordinal_8(&DAT_aaaaaaaa);
          uStack_fa = (undefined2)uVar13;
          uStack_f8 = (undefined2)((uint)uVar13 >> 0x10);
          uStack_f6 = Ordinal_8(0xbbbbbbbb);
          QueryPerformanceCounter(&local_128);
          local_108[3] = local_128.s.LowPart._0_2_;
          uStack_100 = (undefined6)
                       (CONCAT26(local_128.s.HighPart._2_2_,
                                 CONCAT24(local_128.s.HighPart._0_2_,
                                          CONCAT22(local_128.s.LowPart._2_2_,
                                                   local_128.s.LowPart._0_2_))) >> 0x10);
          uVar14 = 0;
          uVar16 = 0x18;
          do {
            uVar4 = *puVar22;
            puVar22 = puVar22 + 1;
            uVar14 = uVar14 + uVar4;
            uVar16 = uVar16 - 2;
          } while (3 < uVar16);
          iVar12 = (uVar14 & 0xffff) + (uVar14 >> 0x10);
          local_108[2] = ~((short)((uint)iVar12 >> 0x10) + (short)iVar12);
          QueryPerformanceCounter(&local_128);
          dVar6 = (double)CONCAT26(local_128.s.HighPart._2_2_,
                                   CONCAT24(local_128.s.HighPart._0_2_,
                                            CONCAT22(local_128.s.LowPart._2_2_,
                                                     local_128.s.LowPart._0_2_))) * DAT_14c83f420;
          local_12c = 0;
          local_1e8 = local_188;
          cVar11 = (**(code **)(*plVar15 + 0x50))(plVar15,local_108,0x16);
          if (cVar11 != '\0') {
            auVar26._8_4_ = unaff_XMM8_Dc;
            auVar26._0_8_ = (double)param_4;
            auVar26._12_4_ = unaff_XMM8_Dd;
            do {
              auVar25._0_8_ = auVar26._0_8_ * 10000000.0 + 0.5;
              auVar25._8_8_ = 0;
              auVar26 = roundpd(auVar25,auVar25,1);
              cVar11 = (**(code **)(*plVar15 + 0x78))(plVar15,0,(longlong)auVar26._0_8_);
              if (cVar11 == '\0') {
                *param_1 = 1;
                param_1[8] = 0;
                if (param_1[9] != 0) {
                  FUN_1446f8c06(pLVar1,0);
                }
                param_1[10] = param_4;
                break;
              }
              QueryPerformanceCounter(&local_1a0);
              dVar7 = (double)local_1a0.QuadPart * DAT_14c83f420;
              local_190 = 0;
              (**(code **)(*param_2 + 0x90))(param_2,&local_1a0);
              local_1e0 = 0;
              local_1e8.s = local_1a0.s;
              cVar11 = (**(code **)(*plVar15 + 0x60))(plVar15,&local_128,0x16,&local_190);
              bVar8 = true;
              if (cVar11 != '\0') {
                if (local_190 == 0x16) {
                  QueryPerformanceCounter(&local_1b0);
                  local_1b8.s = local_1b0.s;
                  (**(code **)(*(longlong *)local_1a0 + 0x80))(local_1a0.QuadPart,&local_1b0,0);
                  if (pLVar1 == &local_1b0) {
                    if (local_1b0.QuadPart != 0) {
                      FUN_1400020a8();
                    }
                  }
                  else {
                    if (pLVar1->QuadPart != 0) {
                      FUN_1400020a8();
                    }
                    ((LARGE_INTEGER *)(param_1 + 6))->QuadPart = (LONGLONG)local_1b0;
                    local_1b0.QuadPart = 0;
                    param_1[8] = local_1a8;
                    param_1[9] = local_1a4;
                  }
                  uVar10 = local_128.s.HighPart._0_2_;
                  local_128.s.HighPart._0_2_ = 0;
                  uVar14 = 0;
                  uVar16 = 0x18;
                  pLVar18 = &local_128;
                  do {
                    uVar4 = *(ushort *)pLVar18;
                    pLVar18 = (LARGE_INTEGER *)((longlong)pLVar18 + 2);
                    uVar14 = uVar14 + uVar4;
                    uVar16 = uVar16 - 2;
                  } while (3 < uVar16);
                  iVar12 = (uVar14 & 0xffff) + (uVar14 >> 0x10);
                  if ((ushort)(uVar10 ^ (short)((uint)iVar12 >> 0x10) + (short)iVar12) == 0xffff) {
                    local_128.s.LowPart._0_2_ = Ordinal_15(local_128.s.LowPart._0_2_);
                    local_128.s.LowPart._2_2_ = Ordinal_15(local_128.s.LowPart._2_2_);
                    if ((local_11a == -0x55555556) && (local_116 == -0x44444445)) {
                      lVar21 = local_1b8.QuadPart - CONCAT62(uStack_120,local_128.s.HighPart._2_2_);
                      auVar27._8_4_ = (int)((ulonglong)lVar21 >> 0x20);
                      auVar27._0_8_ = lVar21;
                      auVar27._12_4_ = 0x45300000;
                      iVar12 = param_1[8];
                      if (iVar12 == param_1[4]) {
                        bVar23 = true;
                        if (1 < iVar12) {
                          lVar19 = 0;
                          while( true ) {
                            uVar4 = *(ushort *)(pLVar1->QuadPart + lVar19);
                            uVar14 = (uint)uVar4;
                            uVar5 = *(ushort *)(*local_1c8 + lVar19);
                            uVar16 = (uint)uVar5;
                            if (uVar4 != uVar5) {
                              if ((uVar5 | uVar4) < 0x80) {
                                uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                                uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar5];
                                if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5])
                                goto LAB_14706724f;
                              }
                              iVar12 = uVar14 - uVar16;
                              goto LAB_147067362;
                            }
                            if (uVar4 == 0) break;
LAB_14706724f:
                            lVar19 = lVar19 + 2;
                          }
                          iVar12 = 0;
LAB_147067362:
                          bVar23 = iVar12 == 0;
                        }
                      }
                      else {
                        bVar23 = param_1[4] + iVar12 == 1;
                      }
                      if ((((bVar23) && (local_128.s.LowPart._0_2_ == (short)local_1cc)) &&
                          (local_128.s.LowPart._2_2_ == (short)local_1c0)) &&
                         ((dVar24 = (((double)CONCAT44(0x43300000,(int)lVar21) - 4503599627370496.0)
                                    + (auVar27._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418,
                          0.0 <= dVar24 && (dVar24 < 60000.0)))) {
                        param_1[10] = (float)dVar24;
                        *param_1 = 0;
                      }
                    }
                  }
                }
                else {
                  bVar8 = false;
                }
              }
              plVar9 = local_198;
              if (local_198 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_198 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*local_198)(local_198);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar9 + 0xc);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (*piVar3 == 0) {
                    (**(code **)(*plVar9 + 0x10))(plVar9);
                  }
                }
              }
              dVar24 = (double)param_4 - ((dVar7 + 16777216.0) - (dVar6 + 16777216.0));
              dVar7 = 0.0;
              if (0.0 <= dVar24) {
                dVar7 = dVar24;
              }
              auVar26._8_8_ = 0;
              auVar26._0_8_ = dVar7;
            } while (!bVar8);
          }
        }
        (**(code **)(*param_2 + 0x38))(param_2,plVar15);
      }
      if (local_180 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_180 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*local_180)(local_180);
          LOCK();
          piVar3 = (int *)((longlong)local_180 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*local_180 + 0x10))(local_180);
          }
        }
      }
    }
  }
  if (local_178 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_168 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_158,uStack_150 & 0xffffffff);
  if (local_158 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_148 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14706737a FUN_14706737a body=346 status=ok
// SIG undefined FUN_14706737a(void)

void FUN_14706737a(undefined8 param_1,undefined4 param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  longlong *local_a0;
  undefined1 local_94 [8];
  int local_8c;
  longlong local_88 [2];
  undefined8 local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_8c = 0;
  local_a8 = &DAT_14c872ce8;
  FUN_1414d73b6(DAT_14c872ce0,L"Ping",L"StackSize",&local_8c);
  if (local_8c != 0) {
    iVar3 = 0x200000;
    if (local_8c < 0x200000) {
      iVar3 = local_8c;
    }
    local_8c = 0x8000;
    if (0x8000 < iVar3) {
      local_8c = iVar3;
    }
  }
  FUN_1446f470e(local_94,L"WINDOWS",1);
  uVar1 = FUN_140272950(local_94);
  uVar2 = FUN_14001cc68(0x80,0x10);
  local_88[0] = *param_3;
  local_78[0] = 0;
  if (local_88[0] != 0) {
    plVar4 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_3[2];
    }
    (**(code **)*plVar4)(plVar4,local_78);
  }
  local_a0 = local_88;
  local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,local_8c);
  FUN_1470674d6(uVar2,uVar1,param_1,param_2);
  if (*param_3 != 0) {
    plVar4 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470674d6 FUN_1470674d6 body=714 status=ok
// SIG undefined FUN_1470674d6(void)

undefined8 *
FUN_1470674d6(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
             int param_5,longlong *param_6)

{
  int *piVar1;
  void *_Src;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  longlong *local_140;
  int local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 local_e8;
  undefined8 local_d8;
  code *local_a8 [2];
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar2 = FUN_1401cb356();
  FUN_145aa41ca(param_1,L"FUDPPingAsyncResult",0,uVar2);
  *param_1 = &PTR_FUN_14a1573f8;
  param_1[3] = param_2;
  lVar5 = *param_6;
  param_1[4] = lVar5;
  param_1[6] = 0;
  if (lVar5 != 0) {
    plVar4 = param_6 + 4;
    if ((longlong *)param_6[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_6[2];
    }
    (**(code **)*plVar4)(plVar4,param_1 + 6);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if (param_1[3] == 0) {
    LOCK();
    *(undefined4 *)(param_1 + 0xc) = 1;
    UNLOCK();
  }
  else {
    LOCK();
    *(undefined4 *)(param_1 + 0xc) = 0;
    UNLOCK();
    local_140 = (longlong *)0x0;
    local_138 = *(int *)(param_3 + 1);
    lVar5 = (longlong)local_138;
    _Src = (void *)*param_3;
    local_148 = param_1;
    if (lVar5 == 0) {
      local_134 = 0;
    }
    else {
      FUN_1446dd670(&local_140,local_138,0);
      memcpy(local_140,_Src,lVar5 * 2);
    }
    local_a8[0] = (code *)0x0;
    local_130 = param_4;
    plVar3 = (longlong *)FUN_14001cc68(0x28,8);
    plVar4 = local_140;
    *plVar3 = (longlong)&PTR_FUN_14a157410;
    plVar3[1] = (longlong)local_148;
    plVar3[2] = 0;
    lVar5 = (longlong)local_138;
    *(int *)(plVar3 + 3) = local_138;
    local_98 = plVar3;
    if (lVar5 == 0) {
      *(undefined4 *)((longlong)plVar3 + 0x1c) = 0;
    }
    else {
      FUN_1446dd670(plVar3 + 2,local_138,0);
      memcpy((void *)plVar3[2],plVar4,lVar5 * 2);
    }
    *(undefined4 *)(plVar3 + 4) = local_130;
    if (plVar3 != (longlong *)&DAT_fffffffffffffff8) {
      local_a8[0] = FUN_1470689a8;
    }
    if (local_140 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (param_5 == 0) {
      local_e8 = 0;
      local_d8 = 0;
      FUN_142afd28f(&local_148,local_a8);
    }
    else {
      local_128 = 0;
      local_118 = 0;
      FUN_147067b66(&local_148,local_a8,param_5);
    }
    FUN_147068338(param_1 + 0xd,&local_148);
    plVar4 = local_140;
    if (local_140 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_140 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (local_a8[0] != (code *)0x0) {
      plVar4 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar4 = local_88;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if (*param_6 != 0) {
    plVar4 = param_6 + 4;
    if ((longlong *)param_6[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_6[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470677a1 FUN_1470677a1 body=887 status=ok
// SIG undefined FUN_1470677a1(void)

undefined4 * FUN_1470677a1(undefined4 *param_1,undefined8 param_2,undefined8 param_3,float param_4)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  IPAddr DestinationAddress;
  DWORD DVar5;
  size_t sVar6;
  HANDLE IcmpHandle;
  undefined4 uVar7;
  wchar_t *_Str;
  ulonglong uVar8;
  ushort uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ushort uVar12;
  ulonglong uVar13;
  undefined1 local_358 [32];
  longlong local_308;
  undefined4 local_300;
  undefined4 local_2fc;
  wchar_t *local_2f8;
  undefined8 uStack_2f0;
  undefined1 local_2e8 [4];
  uint local_2e4 [31];
  longlong local_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined1 local_88 [40];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)local_358;
  *param_1 = 4;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[10] = 0xbf800000;
  local_2f8 = (wchar_t *)0x0;
  uStack_2f0 = 0;
  cVar4 = FUN_147065166(param_2,param_3);
  if (cVar4 == '\0') {
    *param_1 = 3;
  }
  else {
    iVar3 = (int)uStack_2f0 + -1;
    if ((int)uStack_2f0 == 0) {
      iVar3 = 0;
    }
    FUN_1402980a2(param_1 + 2,local_2f8,iVar3);
    _Str = local_2f8;
    if ((int)uStack_2f0 == 0) {
      _Str = L"";
    }
    local_268 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_260 = 0;
      local_258 = 0;
    }
    else {
      sVar6 = wcslen(_Str);
      FUN_1446fe5a4(local_2e8,_Str,sVar6 & 0xffffffff,1);
    }
    DestinationAddress = Ordinal_11(local_260);
    if (local_268 != 0) {
      FUN_1400020a8();
    }
    if ((DestinationAddress != 0xffffffff) &&
       (IcmpHandle = IcmpCreateFile(), IcmpHandle != (HANDLE)0xffffffffffffffff)) {
      DVar5 = IcmpSendEcho(IcmpHandle,DestinationAddress,">>>>This string is 32 bytes<<<<",0x20,
                           (PIP_OPTION_INFORMATION)0x0,local_2e8,600,(int)(param_4 * 1000.0));
      if (DVar5 != 0) {
        plVar1 = (longlong *)(param_1 + 6);
        *param_1 = 1;
        uVar8 = 0;
LAB_147067970:
        param_1[10] = (float)local_2e4[uVar8 * 7 + 1] / 1000.0;
        InetNtopW(2,local_2e8 + uVar8 * 0x1c,local_88);
        FUN_140056680(&local_308,local_88);
        if (plVar1 == &local_308) {
          if (local_308 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*plVar1 != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(param_1 + 6) = local_308;
          local_308 = 0;
          param_1[8] = local_300;
          param_1[9] = local_2fc;
        }
        uVar2 = local_2e4[uVar8 * 7];
        uVar7 = 2;
        if (uVar2 - 0x2afa < 4) {
LAB_147067a06:
          *param_1 = uVar7;
        }
        else {
          if (uVar2 == 0x2b02) goto LAB_147067a08;
          if (uVar2 != 0) {
            uVar7 = 4;
            goto LAB_147067a06;
          }
          iVar3 = param_1[8];
          if (iVar3 == param_1[4]) {
            uVar7 = 0;
            if (1 < iVar3) {
              lVar11 = 0;
              do {
                uVar9 = *(ushort *)(*plVar1 + lVar11);
                uVar10 = (ulonglong)uVar9;
                uVar12 = *(ushort *)(*(longlong *)(param_1 + 2) + lVar11);
                if (uVar9 == uVar12) {
                  if (uVar9 == 0) break;
                }
                else {
                  if (0x7f < (uVar12 | uVar9)) goto LAB_147067b0b;
                  uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
                  uVar13 = (ulonglong)uVar12;
                  uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
                  if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[uVar13]) goto LAB_147067b0b;
                }
                lVar11 = lVar11 + 2;
              } while( true );
            }
            goto LAB_147067afb;
          }
          if (param_1[4] + iVar3 == 1) {
            uVar7 = 0;
            goto LAB_147067afb;
          }
        }
        goto LAB_147067a08;
      }
      DVar5 = GetLastError();
      uVar7 = 1;
      if (DVar5 == 0x2b02) {
LAB_147067afb:
        *param_1 = uVar7;
      }
LAB_147067afd:
      IcmpCloseHandle(IcmpHandle);
    }
  }
  if (local_2f8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)local_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
LAB_147067b0b:
  if (uVar9 == uVar12) goto LAB_147067afb;
LAB_147067a08:
  uVar8 = uVar8 + 1;
  if (uVar8 == DVar5) goto LAB_147067afd;
  goto LAB_147067970;
}



// FUNCTION 147067b1a FUN_147067b1a body=38 status=ok
// SIG undefined FUN_147067b1a(void)

undefined8 FUN_147067b1a(undefined8 param_1,int param_2)

{
  FUN_147065826();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147067b40 FUN_147067b40 body=38 status=ok
// SIG undefined FUN_147067b40(void)

undefined8 FUN_147067b40(undefined8 param_1,int param_2)

{
  FUN_147066086();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147067b66 FUN_147067b66 body=691 status=ok
// SIG undefined FUN_147067b66(void)

undefined8 *
FUN_147067b66(undefined8 *param_1,longlong *param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 local_e0;
  undefined2 *local_d0;
  int local_c8;
  longlong local_c0;
  longlong *local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined1 local_98;
  longlong local_88 [2];
  longlong *local_78 [2];
  longlong local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_88[0] = *param_2;
  local_78[0] = (longlong *)0x0;
  if (local_88[0] != 0) {
    plVar8 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_2[2];
    }
    (**(code **)*plVar8)(plVar8,local_78);
  }
  FUN_147068062(&local_a8,param_4);
  plVar8 = plStack_a0;
  uVar3 = local_a8;
  local_98 = 1;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
    UNLOCK();
  }
  cVar4 = FUN_144a53f06();
  if (cVar4 == '\0') {
    FUN_147067f7f(&local_a8,local_88);
  }
  else {
    FUN_145c3b830(&local_c0);
    puVar6 = (undefined8 *)FUN_14001cc68(0x80,0x10);
    local_b0 = 1;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
      UNLOCK();
    }
    *puVar6 = &PTR_FUN_14a157380;
    puVar6[2] = local_88[0];
    puVar6[4] = local_78[0];
    local_78[0] = (longlong *)0x0;
    *(undefined4 *)(puVar6 + 8) = local_58;
    *(undefined4 *)((longlong)puVar6 + 0x44) = uStack_54;
    *(undefined4 *)(puVar6 + 9) = uStack_50;
    *(undefined4 *)((longlong)puVar6 + 0x4c) = uStack_4c;
    puVar6[6] = local_68;
    puVar6[7] = uStack_60;
    if (local_88[0] != 0) {
      local_88[0] = 0;
    }
    puVar6[10] = local_a8;
    puVar6[0xb] = plStack_a0;
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
    *(undefined1 *)(puVar6 + 0xc) = local_98;
    puVar6[0xd] = local_c0;
    puVar6[0xe] = local_b8;
    uVar5 = FUN_146268020();
    FUN_140002266(&local_d0,L"TAsyncThread %d",uVar5);
    puVar9 = local_d0;
    if (local_c8 == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    local_e0 = 0;
    local_e8 = 0xffffffffffffffff;
    uVar7 = FUN_1411b1052(puVar6,puVar9,param_3,0);
    *(undefined8 *)(local_c0 + 0x80) = uVar7;
    FUN_140b576f0();
    if (local_d0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar2 = (int *)((longlong)local_b8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_b8 + 0x10))(local_b8);
        }
      }
    }
  }
  plVar1 = plStack_a0;
  *param_1 = uVar3;
  param_1[1] = plVar8;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_a0 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (local_88[0] != 0) {
    plVar8 = local_78[0];
    if (local_78[0] == (longlong *)0x0) {
      plVar8 = &local_68;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (*param_4 != 0) {
    plVar8 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147067e1a FUN_147067e1a body=38 status=ok
// SIG undefined FUN_147067e1a(void)

undefined8 FUN_147067e1a(undefined8 param_1,int param_2)

{
  FUN_147068398();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147067e40 FUN_147067e40 body=48 status=ok
// SIG undefined FUN_147067e40(void)

undefined8 FUN_147067e40(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  FUN_1470677a1(param_1,*(undefined8 *)(lVar1 + 0x18),param_2 + 1,(int)param_2[3]);
  LOCK();
  *(undefined4 *)(lVar1 + 0x60) = 1;
  UNLOCK();
  return param_1;
}



// FUNCTION 147067e70 FUN_147067e70 body=62 status=ok
// SIG undefined FUN_147067e70(void)

void FUN_147067e70(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14a157320;
  FUN_147067f0c(puVar1 + 1,param_1 + 8);
  return;
}



// FUNCTION 147067eb4 FUN_147067eb4 body=29 status=ok
// SIG undefined FUN_147067eb4(void)

void FUN_147067eb4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 147067ed2 FUN_147067ed2 body=57 status=ok
// SIG undefined FUN_147067ed2(void)

undefined8 * FUN_147067ed2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a157320;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147067f0c FUN_147067f0c body=115 status=ok
// SIG undefined FUN_147067f0c(void)

undefined8 * FUN_147067f0c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  return param_1;
}



// FUNCTION 147067f7f FUN_147067f7f body=226 status=ok
// SIG undefined FUN_147067f7f(void)

void FUN_147067f7f(longlong *param_1,undefined8 *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  undefined4 local_50 [2];
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pcVar1 = (code *)*param_2;
  plVar4 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar4 = (longlong *)param_2[2];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(local_50,uVar3);
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + 0x80) = local_50[0];
  *(longlong *)(lVar2 + 0x88) = local_48;
  local_48 = 0;
  *(undefined4 *)(lVar2 + 0x90) = (undefined4)local_40;
  *(undefined4 *)(lVar2 + 0x94) = local_40._4_4_;
  local_40 = 0;
  *(longlong *)(lVar2 + 0x98) = local_38;
  local_38 = 0;
  *(undefined4 *)(lVar2 + 0xa0) = (undefined4)local_30;
  *(undefined4 *)(lVar2 + 0xa4) = local_30._4_4_;
  local_30 = 0;
  *(undefined4 *)(lVar2 + 0xa8) = local_28;
  FUN_140b576f0();
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147068062 FUN_147068062 body=130 status=ok
// SIG undefined FUN_147068062(void)

longlong * FUN_147068062(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0xc0,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a157360;
  FUN_1405d89e4(plVar3 + 2,param_2);
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



// FUNCTION 1470680e4 FUN_1470680e4 body=9 status=ok
// SIG undefined FUN_1470680e4(void)

void FUN_1470680e4(longlong param_1)

{
  FUN_14706810c(param_1 + 0x10);
  return;
}



// FUNCTION 1470680ee FUN_1470680ee body=29 status=ok
// SIG undefined FUN_1470680ee(void)

undefined8 FUN_1470680ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14706810c FUN_14706810c body=62 status=ok
// SIG undefined FUN_14706810c(void)

void FUN_14706810c(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
    if (*(longlong *)(param_1 + 0x98) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x88) != 0) {
      FUN_1400020a8();
    }
  }
  FUN_140788a7e(param_1);
  return;
}



// FUNCTION 14706814a FUN_14706814a body=195 status=ok
// SIG undefined FUN_14706814a(void)

undefined8 FUN_14706814a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_48;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_147067f7f(param_1 + 0x50,param_1 + 0x10);
  lVar3 = *(longlong *)(param_1 + 0x68);
  while ((*(byte *)(lVar3 + 0x78) & 1) == 0) {
    (**(code **)(**(longlong **)(lVar3 + 0x70) + 0x20))(*(longlong **)(lVar3 + 0x70),0xffffffff,0);
  }
  local_78 = *(undefined8 *)(lVar3 + 0x80);
  local_58 = 0;
  local_48 = 0;
  local_70 = param_1;
  FUN_142afce47(local_68);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706820e FUN_14706820e body=38 status=ok
// SIG undefined FUN_14706820e(void)

undefined8 FUN_14706820e(undefined8 param_1,int param_2)

{
  FUN_1470682aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147068234 FUN_147068234 body=66 status=ok
// SIG undefined FUN_147068234(void)

void FUN_147068234(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_1;
  plVar2 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
  }
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014706826c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x28))(plVar2,1);
    return;
  }
  return;
}



// FUNCTION 147068280 FUN_147068280 body=12 status=ok
// SIG undefined FUN_147068280(void)

void FUN_147068280(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147068289. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14706828c FUN_14706828c body=29 status=ok
// SIG undefined FUN_14706828c(void)

undefined8 FUN_14706828c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470682aa FUN_1470682aa body=141 status=ok
// SIG undefined FUN_1470682aa(void)

void FUN_1470682aa(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a157380;
  plVar3 = (longlong *)param_1[0xe];
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
  plVar3 = (longlong *)param_1[0xb];
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
  if (param_1[2] != 0) {
    plVar3 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[4];
    }
                    /* WARNING: Could not recover jumptable at 0x00014706832b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))(plVar3);
    return;
  }
  return;
}



// FUNCTION 147068338 FUN_147068338 body=96 status=ok
// SIG undefined FUN_147068338(void)

undefined8 * FUN_147068338(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 147068398 FUN_147068398 body=149 status=ok
// SIG undefined FUN_147068398(void)

void FUN_147068398(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  
  *param_1 = &PTR_FUN_14a157308;
  lVar3 = param_1[0xd];
  if (param_1[0xd] != 0) {
    while( true ) {
      do {
        lVar5 = lVar3;
        lVar3 = 0;
      } while (lVar5 == 0);
      plVar6 = *(longlong **)(lVar5 + 0x70);
      cVar4 = (**(code **)(*plVar6 + 0x20))(plVar6,0xffffffff,0);
      if (cVar4 != '\0') break;
      lVar3 = param_1[0xd];
    }
  }
  plVar6 = (longlong *)param_1[0xe];
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (param_1[4] != 0) {
    plVar6 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  FUN_145bfbed6(param_1);
  return;
}



// FUNCTION 14706842e FUN_14706842e body=83 status=ok
// SIG undefined FUN_14706842e(void)

void FUN_14706842e(undefined8 *param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = (code *)*param_1;
  plVar3 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[2];
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,param_2);
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147068482 FUN_147068482 body=180 status=ok
// SIG undefined FUN_147068482(void)

undefined4 * FUN_147068482(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  pvVar2 = *(void **)(param_2 + 2);
  param_1[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy(*(void **)(param_1 + 2),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 6) = 0;
  iVar1 = param_2[8];
  pvVar2 = *(void **)(param_2 + 6);
  param_1[8] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy(*(void **)(param_1 + 6),pvVar2,(longlong)iVar1 * 2);
  }
  param_1[10] = param_2[10];
  return param_1;
}



// FUNCTION 147068536 FUN_147068536 body=52 status=ok
// SIG undefined FUN_147068536(void)

void FUN_147068536(longlong *param_1)

{
  FUN_14706856a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14706856a FUN_14706856a body=89 status=ok
// SIG undefined FUN_14706856a(void)

void FUN_14706856a(longlong param_1)

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



// FUNCTION 1470685c4 FUN_1470685c4 body=52 status=ok
// SIG undefined FUN_1470685c4(void)

void FUN_1470685c4(longlong *param_1)

{
  FUN_1470685f8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1470685f8 FUN_1470685f8 body=335 status=ok
// SIG undefined FUN_1470685f8(void)

void FUN_1470685f8(longlong *param_1)

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
      FUN_147065cc6(plVar2 + 3);
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
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147068748 FUN_147068748 body=96 status=ok
// SIG undefined FUN_147068748(void)

undefined8 * FUN_147068748(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 1470687a8 FUN_1470687a8 body=95 status=ok
// SIG undefined FUN_1470687a8(void)

undefined8 * FUN_1470687a8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147068807(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14706886c(param_1,iVar1);
      FUN_1470688df(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147068807 FUN_147068807 body=38 status=ok
// SIG undefined FUN_147068807(void)

void FUN_147068807(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14706882e(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 14706882e FUN_14706882e body=62 status=ok
// SIG undefined FUN_14706882e(void)

void FUN_14706882e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
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



// FUNCTION 14706886c FUN_14706886c body=115 status=ok
// SIG undefined FUN_14706886c(void)

void FUN_14706886c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    iVar2 = (int)(uVar1 / 0x48);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x48,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1470688df FUN_1470688df body=52 status=ok
// SIG undefined FUN_1470688df(void)

void FUN_1470688df(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147068914(param_1,param_2);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return;
}



// FUNCTION 147068914 FUN_147068914 body=110 status=ok
// SIG undefined FUN_147068914(void)

longlong FUN_147068914(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  FUN_147068482();
  *(undefined8 *)(param_1 + 0x30) = 0;
  iVar1 = *(int *)(param_2 + 0x38);
  _Src = *(void **)(param_2 + 0x30);
  *(int *)(param_1 + 0x38) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 0x30),iVar1,0);
    memcpy(*(void **)(param_1 + 0x30),_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  return param_1;
}



// FUNCTION 147068982 FUN_147068982 body=38 status=ok
// SIG undefined FUN_147068982(void)

undefined8 FUN_147068982(undefined8 param_1,int param_2)

{
  FUN_147068bd2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470689a8 FUN_1470689a8 body=48 status=ok
// SIG undefined FUN_1470689a8(void)

undefined8 FUN_1470689a8(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  FUN_147066ac1(param_1,*(undefined8 *)(lVar1 + 0x18),param_2 + 1,(int)param_2[3]);
  LOCK();
  *(undefined4 *)(lVar1 + 0x60) = 1;
  UNLOCK();
  return param_1;
}



// FUNCTION 1470689d8 FUN_1470689d8 body=62 status=ok
// SIG undefined FUN_1470689d8(void)

void FUN_1470689d8(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14a157410;
  FUN_147068a74(puVar1 + 1,param_1 + 8);
  return;
}



// FUNCTION 147068a1c FUN_147068a1c body=29 status=ok
// SIG undefined FUN_147068a1c(void)

void FUN_147068a1c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 147068a3a FUN_147068a3a body=57 status=ok
// SIG undefined FUN_147068a3a(void)

undefined8 * FUN_147068a3a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a157410;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147068a74 FUN_147068a74 body=115 status=ok
// SIG undefined FUN_147068a74(void)

undefined8 * FUN_147068a74(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  return param_1;
}



// FUNCTION 147068ae8 FUN_147068ae8 body=56 status=ok
// SIG undefined FUN_147068ae8(void)

void FUN_147068ae8(longlong *param_1)

{
  FUN_147067f7f(param_1 + 10,param_1 + 2);
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147068b16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147068b22 FUN_147068b22 body=38 status=ok
// SIG undefined FUN_147068b22(void)

undefined8 FUN_147068b22(undefined8 param_1,int param_2)

{
  FUN_147068b48();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147068b48 FUN_147068b48 body=138 status=ok
// SIG undefined FUN_147068b48(void)

void FUN_147068b48(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14a157430;
  plVar4 = (longlong *)param_1[0xb];
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
  if (param_1[2] != 0) {
    plVar4 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  *param_1 = IQueuedWork::vftable;
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147068bc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}



// FUNCTION 147068bd2 FUN_147068bd2 body=149 status=ok
// SIG undefined FUN_147068bd2(void)

void FUN_147068bd2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  
  *param_1 = &PTR_FUN_14a1573f8;
  lVar3 = param_1[0xd];
  if (param_1[0xd] != 0) {
    while( true ) {
      do {
        lVar5 = lVar3;
        lVar3 = 0;
      } while (lVar5 == 0);
      plVar6 = *(longlong **)(lVar5 + 0x70);
      cVar4 = (**(code **)(*plVar6 + 0x20))(plVar6,0xffffffff,0);
      if (cVar4 != '\0') break;
      lVar3 = param_1[0xd];
    }
  }
  plVar6 = (longlong *)param_1[0xe];
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (param_1[4] != 0) {
    plVar6 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  FUN_145bfbed6(param_1);
  return;
}



// FUNCTION 147068c68 FUN_147068c68 body=78 status=ok
// SIG undefined FUN_147068c68(void)

undefined8 * FUN_147068c68(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *puVar1 = IModuleInterface::vftable;
  FUN_14118b488(puVar1 + 1);
  *puVar1 = &PTR_FUN_14a1574d0;
  puVar1[1] = &PTR_FUN_14a157510;
  return puVar1;
}



// FUNCTION 147068cb6 FUN_147068cb6 body=31 status=ok
// SIG undefined FUN_147068cb6(void)

undefined8 FUN_147068cb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147068cf2 FUN_147068cf2 body=93 status=ok
// SIG undefined FUN_147068cf2(void)

void FUN_147068cf2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a157460;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147068d50 FUN_147068d50 body=126 status=ok
// SIG undefined FUN_147068d50(void)

void FUN_147068d50(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a157460;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147068dbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147068dda FUN_147068dda body=21 status=ok
// SIG undefined FUN_147068dda(void)

undefined8 FUN_147068dda(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147068df0 FUN_147068df0 body=42 status=ok
// SIG undefined FUN_147068df0(void)

longlong FUN_147068df0(longlong param_1,int param_2)

{
  FUN_1410c966c(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147068e1a FUN_147068e1a body=39 status=ok
// SIG undefined FUN_147068e1a(void)

longlong FUN_147068e1a(longlong param_1,int param_2)

{
  FUN_1410c966c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -8);
  }
  return param_1 + -8;
}



// FUNCTION 147068e42 FUN_147068e42 body=139 status=ok
// SIG undefined FUN_147068e42(void)

void FUN_147068e42(undefined8 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = (code *)*param_1;
  local_38 = *param_2;
  local_30 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = 0;
  local_28 = param_2[4];
  local_24 = param_2[5];
  *(undefined8 *)(param_2 + 4) = 0;
  local_20 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 6) = 0;
  local_18 = param_2[8];
  local_14 = param_2[9];
  *(undefined8 *)(param_2 + 8) = 0;
  local_10 = param_2[10];
  (*pcVar1)();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147068ef8 FUN_147068ef8 body=29 status=ok
// SIG undefined FUN_147068ef8(void)

undefined8 FUN_147068ef8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147068f16 FUN_147068f16 body=106 status=ok
// SIG undefined FUN_147068f16(void)

undefined8 FUN_147068f16(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x18,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x18)) {
    uVar5 = uVar2 / 0x18 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x18,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 147068f80 FUN_147068f80 body=119 status=ok
// SIG undefined FUN_147068f80(void)

void FUN_147068f80(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_2 + 0x10);
  do {
    *param_1 = 0;
    iVar1 = puVar2[-2];
    _Src = *(void **)(puVar2 + -4);
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
    }
    *(undefined4 *)(param_1 + 2) = *puVar2;
    param_1 = param_1 + 3;
    puVar2 = puVar2 + 6;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 147068ff8 FUN_147068ff8 body=130 status=ok
// SIG undefined FUN_147068ff8(void)

void FUN_147068ff8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706907c FUN_14706907c body=130 status=ok
// SIG undefined FUN_14706907c(void)

void FUN_14706907c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470690ff FUN_1470690ff body=43 status=ok
// SIG undefined FUN_1470690ff(void)

void FUN_1470690ff(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 14706912a FUN_14706912a body=63 status=ok
// SIG undefined FUN_14706912a(void)

void FUN_14706912a(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_14706856a(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1470692ae(param_1);
    return;
  }
  FUN_14706916a(param_1);
  FUN_14706856a(param_1);
  return;
}



// FUNCTION 14706916a FUN_14706916a body=322 status=ok
// SIG undefined FUN_14706916a(void)

void FUN_14706916a(longlong *param_1)

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



// FUNCTION 1470692ae FUN_1470692ae body=455 status=ok
// SIG undefined FUN_1470692ae(void)

void FUN_1470692ae(longlong *param_1)

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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_78;
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
    uVar4 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar5 = local_78._4_4_;
      local_78 = uVar4;
      do {
        lVar3 = *local_90;
        lVar10 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar10 * 0x18);
        iVar6 = FUN_144a788f7();
        uVar7 = (longlong)(iVar6 + (int)((ulonglong)uVar4 >> 0x20)) & (longlong)(int)param_1[9] - 1U
        ;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x14 + lVar10 * 0x18) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar10 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar5 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147069476 FUN_147069476 body=63 status=ok
// SIG undefined FUN_147069476(void)

void FUN_147069476(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1470685f8(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_147069600(param_1);
    return;
  }
  FUN_1470694b6(param_1);
  FUN_1470685f8(param_1);
  return;
}



// FUNCTION 1470694b6 FUN_1470694b6 body=328 status=ok
// SIG undefined FUN_1470694b6(void)

void FUN_1470694b6(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x94 + (longlong)iVar4 * 0x98) * 4) =
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



// FUNCTION 147069600 FUN_147069600 body=499 status=ok
// SIG undefined FUN_147069600(void)

void FUN_147069600(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar13 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar13) * 4)
             = 0xffffffff;
        uVar13 = uVar13 + 1;
      } while (uVar2 != uVar13);
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
      iVar14 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar4 = *local_90;
        lVar12 = (longlong)iVar14 * 0x98;
        iVar7 = *(int *)(lVar4 + 8 + lVar12);
        puVar11 = &DAT_149dfb77a;
        if (iVar7 != 0) {
          puVar11 = *(undefined2 **)(lVar4 + lVar12);
        }
        uVar3 = *(undefined4 *)(lVar4 + 0x10 + lVar12);
        iVar9 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar9 = 0;
        }
        uVar6 = FUN_144a49b4a(iVar9,puVar11);
        iVar7 = FUN_144a78877(uVar6,uVar3);
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar4 + 0x94 + lVar12) = iVar7;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x90 + lVar12) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar14;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar14 = local_78._4_4_;
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



// FUNCTION 1470697f4 FUN_1470697f4 body=340 status=ok
// SIG undefined FUN_1470697f4(void)

undefined4 * FUN_1470697f4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14706994a(param_1,local_48);
  FUN_147069ac2(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 0x12) = 0xffffffff;
  local_4c = local_48[0];
  iVar8 = *(int *)(local_40 + 1);
  uVar1 = *(undefined4 *)(local_40 + 2);
  if (iVar8 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*local_40;
  }
  iVar2 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar2 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar2,puVar9);
  uVar5 = FUN_144a78877(uVar4,uVar1);
  cVar3 = FUN_147069a36(param_1,uVar5,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_40 + 0x94) = uVar5;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x12) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_147069600(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14706994a FUN_14706994a body=235 status=ok
// SIG undefined FUN_14706994a(void)

int * FUN_14706994a(longlong *param_1,int *param_2)

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
      FUN_14125fb0c(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x98);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x98) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x98 + *param_1;
  return param_2;
}



// FUNCTION 147069a36 FUN_147069a36 body=139 status=ok
// SIG undefined FUN_147069a36(void)

undefined8 FUN_147069a36(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar3 = FUN_147069bce(), iVar3 != -1)) {
    lVar2 = *param_1;
    plVar1 = (longlong *)(lVar2 + (longlong)iVar3 * 0x98);
    FUN_147065cc6(plVar1 + 3);
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    memmove((void *)(lVar2 + (longlong)iVar3 * 0x98),param_3,0x90);
    FUN_147069c40(param_1,*param_4);
    *param_4 = iVar3;
    return 1;
  }
  return 0;
}



// FUNCTION 147069ac2 FUN_147069ac2 body=116 status=ok
// SIG undefined FUN_147069ac2(void)

undefined8 * FUN_147069ac2(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  FUN_147069b36(param_1 + 3,param_3);
  return param_1;
}



// FUNCTION 147069b36 FUN_147069b36 body=151 status=ok
// SIG undefined FUN_147069b36(void)

undefined8 * FUN_147069b36(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  uVar3 = *(undefined4 *)(param_2 + 2);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 3);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar7 = *(undefined4 *)(param_2 + 4);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar9 = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar8;
  *(undefined4 *)(param_1 + 5) = uVar9;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 3) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
  FUN_147068482(param_1 + 6,param_2 + 6);
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  lVar2 = param_2[0xe];
  param_1[0xe] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}


