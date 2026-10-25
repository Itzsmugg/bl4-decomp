// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148a293aa FUN_148a293aa body=134 status=ok
// SIG undefined FUN_148a293aa(void)

void FUN_148a293aa(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_1;
  local_20 = param_1[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_148a2b018(&local_28);
  puVar2 = (undefined8 *)param_1[1];
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



// FUNCTION 148a29442 FUN_148a29442 body=785 status=ok
// SIG undefined FUN_148a29442(void)

void FUN_148a29442(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  int local_c4;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d0 = (longlong *)(param_1 + 0x50);
  local_c0 = param_1 + 0x60;
  local_b8 = (longlong *)&DAT_100000000;
  local_a8 = 0xffffffff;
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  uStack_b0 = local_c0;
  if (*(int *)(param_1 + 0x78) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_b8);
    iVar5 = *(int *)(param_1 + 0x78);
  }
  local_78 = local_a8;
  lVar1 = local_78;
  uStack_70 = uStack_a0;
  local_88 = (undefined4)local_b8;
  uStack_84 = local_b8._4_4_;
  uStack_80 = (undefined4)uStack_b0;
  uStack_7c = uStack_b0._4_4_;
  local_90 = local_d0;
  local_78._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
  if ((local_78._4_4_ != iVar5) || (uStack_b0 != local_c0)) {
    iVar3 = local_78._4_4_;
    local_c4 = iVar5;
    local_78 = lVar1;
    do {
      lVar2 = *local_90;
      lVar1 = lVar2 + (longlong)iVar3 * 0x60;
      lVar8 = lVar1 + 0x18;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_60 = lVar8;
      if (*(int *)(lVar1 + 0x30) != 0) {
        FUN_1449c0562(&local_68);
      }
      lVar2 = lVar2 + (longlong)iVar3 * 0x60;
      plVar6 = (longlong *)(lVar2 + 8);
      uStack_a0 = local_58;
      local_98 = local_50;
      local_94 = local_4c;
      uStack_b0 = local_68;
      local_a8 = local_60;
      uVar4 = *(uint *)(lVar2 + 0x30);
      local_68 = CONCAT44(1 << ((byte)uVar4 & 0x1f),(int)uVar4 >> 5);
      local_58 = CONCAT44(uVar4,-1 << ((byte)uVar4 & 0x1f));
      local_50 = uVar4 & 0xffffffe0;
      local_b8 = plVar6;
      local_60 = lVar8;
      if (*(uint *)(lVar2 + 0x30) != uVar4) {
        FUN_1449c0562(&local_68);
        uVar4 = local_58._4_4_;
      }
      lVar1 = local_60;
      uVar7 = uStack_a0._4_4_;
      if ((local_b8 != plVar6 || local_a8 != local_60) || uStack_a0._4_4_ != uVar4) {
        do {
          lVar2 = *local_b8;
          iVar5 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
            FUN_148a2b292(param_2,iVar5);
          }
          lVar2 = lVar2 + (longlong)(int)uVar7 * 0x28;
          lVar8 = *param_2;
          *(undefined8 *)(lVar8 + (longlong)iVar5 * 0x10) = *(undefined8 *)(lVar2 + 0x10);
          lVar2 = *(longlong *)(lVar2 + 0x18);
          *(longlong *)(lVar8 + 8 + (longlong)iVar5 * 0x10) = lVar2;
          if (lVar2 != 0) {
            LOCK();
            *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            UNLOCK();
          }
          uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 & ~uStack_b0._4_4_);
          FUN_1449c0562(&uStack_b0);
          uVar7 = uStack_a0._4_4_;
        } while (local_b8 != plVar6 || (local_a8 != lVar1 || uStack_a0._4_4_ != uVar4));
      }
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
      FUN_1449c0562(&local_88);
      iVar3 = local_78._4_4_;
      lVar1 = local_78;
    } while (local_90 != local_d0 ||
             (CONCAT44(uStack_7c,uStack_80) != local_c0 || local_78._4_4_ != local_c4));
  }
  local_78 = lVar1;
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a29754 FUN_148a29754 body=753 status=ok
// SIG undefined FUN_148a29754(void)

void FUN_148a29754(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = (longlong *)(param_1 + 0x50);
  lVar2 = param_1 + 0x60;
  local_b8 = (longlong *)&DAT_100000000;
  local_a8 = 0xffffffff;
  local_a0 = local_a0 & 0xffffffff00000000;
  iVar6 = 0;
  local_b0 = lVar2;
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_1449c0562(&local_b8);
    iVar6 = *(int *)(param_1 + 0x78);
  }
  local_78 = local_a8;
  lVar7 = local_78;
  local_70 = (uint)local_a0;
  local_6c = local_a0._4_4_;
  local_88 = local_b8;
  local_80 = local_b0;
  local_78._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
  local_c0 = param_1;
  local_90 = plVar1;
  if ((local_78._4_4_ != iVar6) || (local_b0 != lVar2)) {
    iVar3 = local_78._4_4_;
    local_78 = lVar7;
    do {
      lVar7 = *local_90;
      lVar4 = (longlong)iVar3 * 0x60 + 0x18 + lVar7;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_60 = lVar4;
      if (*(int *)(lVar4 + 0x18) != 0) {
        FUN_1449c0562(&local_68);
      }
      lVar7 = lVar7 + (longlong)iVar3 * 0x60;
      plVar8 = (longlong *)(lVar7 + 8);
      local_a0 = local_58;
      local_98 = local_50;
      local_94 = local_4c;
      local_b0 = local_68;
      local_a8 = local_60;
      uVar5 = *(uint *)(lVar7 + 0x30);
      local_68 = CONCAT44(1 << ((byte)uVar5 & 0x1f),(int)uVar5 >> 5);
      local_58 = CONCAT44(uVar5,-1 << ((byte)uVar5 & 0x1f));
      local_50 = uVar5 & 0xffffffe0;
      local_b8 = plVar8;
      local_60 = lVar4;
      if (*(uint *)(lVar7 + 0x30) != uVar5) {
        FUN_1449c0562(&local_68);
        uVar5 = local_58._4_4_;
      }
      lVar7 = local_60;
      if ((local_b8 != plVar8 || local_a8 != local_60) || local_a0._4_4_ != uVar5) {
        do {
          (**(code **)(**(longlong **)(*local_b8 + 0x10 + (longlong)(int)local_a0._4_4_ * 0x28) + 8)
          )();
          local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~local_b0._4_4_);
          FUN_1449c0562(&local_b0);
        } while (local_b8 != plVar8 || (local_a8 != lVar7 || local_a0._4_4_ != uVar5));
      }
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
      FUN_1449c0562(&local_88);
      iVar3 = local_78._4_4_;
      lVar7 = local_78;
    } while (local_90 != plVar1 || (local_80 != lVar2 || local_78._4_4_ != iVar6));
  }
  local_78 = lVar7;
  lVar2 = local_c0;
  *(undefined4 *)(local_c0 + 0x98) = 0;
  if (*(longlong *)(local_c0 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_148a29b22(plVar1);
  *(undefined4 *)(lVar2 + 0x48) = 0;
  if (*(longlong *)(lVar2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_148a29e40(lVar2);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a29a46 FUN_148a29a46 body=100 status=ok
// SIG undefined FUN_148a29a46(void)

void FUN_148a29a46(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148a29a9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148a29aaa FUN_148a29aaa body=120 status=ok
// SIG undefined FUN_148a29aaa(void)

undefined8 * FUN_148a29aaa(undefined8 *param_1)

{
  if (*(char *)(param_1 + 3) != '\x04') {
    param_1 = &DAT_14cb95250;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb95260) {
      FUN_144b3d300(&DAT_14cb95260);
      if (DAT_14cb95260 == -1) {
        DAT_14cb95250 = 0;
        uRam000000014cb95258 = 0;
        atexit((_func_5014 *)&LAB_143ecc142);
        _Init_thread_footer(&DAT_14cb95260);
      }
    }
  }
  return param_1;
}



// FUNCTION 148a29b22 FUN_148a29b22 body=52 status=ok
// SIG undefined FUN_148a29b22(void)

void FUN_148a29b22(longlong *param_1)

{
  FUN_148a29b56();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a29b56 FUN_148a29b56 body=349 status=ok
// SIG undefined FUN_148a29b56(void)

void FUN_148a29b56(longlong *param_1)

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
      FUN_148a29cb4(lVar2 + lVar3 + 8);
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a29cb4 FUN_148a29cb4 body=52 status=ok
// SIG undefined FUN_148a29cb4(void)

void FUN_148a29cb4(longlong *param_1)

{
  FUN_148a29ce8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a29ce8 FUN_148a29ce8 body=343 status=ok
// SIG undefined FUN_148a29ce8(void)

void FUN_148a29ce8(longlong *param_1)

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



// FUNCTION 148a29e40 FUN_148a29e40 body=52 status=ok
// SIG undefined FUN_148a29e40(void)

void FUN_148a29e40(longlong *param_1)

{
  FUN_148a29e74();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a29e74 FUN_148a29e74 body=318 status=ok
// SIG undefined FUN_148a29e74(void)

void FUN_148a29e74(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
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
      puVar2 = *(undefined8 **)(*local_68 + 8 + (longlong)iStack_4c * 0x20);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
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



// FUNCTION 148a29fba FUN_148a29fba body=36 status=ok
// SIG undefined FUN_148a29fba(void)

undefined8 FUN_148a29fba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148a29ffa FUN_148a29ffa body=93 status=ok
// SIG undefined FUN_148a29ffa(void)

void FUN_148a29ffa(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4ac110;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a2a058 FUN_148a2a058 body=123 status=ok
// SIG undefined FUN_148a2a058(void)

void FUN_148a2a058(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ac110;
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



// FUNCTION 148a2a0d4 FUN_148a2a0d4 body=21 status=ok
// SIG undefined FUN_148a2a0d4(void)

undefined8 FUN_148a2a0d4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148a2a13c FUN_148a2a13c body=188 status=ok
// SIG undefined FUN_148a2a13c(void)

longlong FUN_148a2a13c(longlong *param_1,uint param_2,char *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  char *local_28;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(char *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar3 != 0) goto LAB_148a2a1db;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_148a2a1fa(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_148a2a1db:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 148a2a1fa FUN_148a2a1fa body=266 status=ok
// SIG undefined FUN_148a2a1fa(void)

undefined4 * FUN_148a2a1fa(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148a2a306(param_1,local_48);
  FUN_148a2a4aa(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_148a2a3f4(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar2 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x5c) = param_3;
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x58) =
           *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4);
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_148a2a81c(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2a306 FUN_148a2a306 body=238 status=ok
// SIG undefined FUN_148a2a306(void)

int * FUN_148a2a306(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 148a2a3f4 FUN_148a2a3f4 body=182 status=ok
// SIG undefined FUN_148a2a3f4(void)

undefined8 FUN_148a2a3f4(longlong *param_1,uint param_2,char *param_3,int *param_4)

{
  void *_Dst;
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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(char *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_148a29cb4((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_148a2a75e(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 148a2a4aa FUN_148a2a4aa body=147 status=ok
// SIG undefined FUN_148a2a4aa(void)

undefined1 * FUN_148a2a4aa(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_40 = 0x8000000000;
  local_38 = 0xffffffff;
  *param_2 = *(undefined1 *)*param_1;
  FUN_148a2a53e(param_2 + 8,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_148a29cb4(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2a53e FUN_148a2a53e body=123 status=ok
// SIG undefined FUN_148a2a53e(void)

undefined8 * FUN_148a2a53e(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_148a2a5ba();
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



// FUNCTION 148a2a5ba FUN_148a2a5ba body=419 status=ok
// SIG undefined FUN_148a2a5ba(void)

longlong * FUN_148a2a5ba(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_50 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar10 = (int)param_1[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68 = local_48;
    uVar8 = local_68;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar9 = local_68._4_4_;
    local_80 = param_1;
    if ((local_68._4_4_ != iVar10) || (local_68 = uVar8, uStack_50 != plVar1)) {
      do {
        local_68 = uVar8;
        plVar4 = *(longlong **)(*local_80 + 0x18 + (longlong)iVar9 * 0x28);
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
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
        FUN_1449c0562(&local_78);
        iVar9 = local_68._4_4_;
        uVar8 = local_68;
      } while (local_80 != param_1 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || local_68._4_4_ != iVar10));
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
      uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar7 = param_2[3];
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
      *(int *)(param_1 + 3) = (int)lVar7;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
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
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2a75e FUN_148a2a75e body=122 status=ok
// SIG undefined FUN_148a2a75e(void)

void FUN_148a2a75e(longlong *param_1,int param_2)

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



// FUNCTION 148a2a7d8 FUN_148a2a7d8 body=68 status=ok
// SIG undefined FUN_148a2a7d8(void)

void FUN_148a2a7d8(longlong param_1,uint param_2)

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
  FUN_148a2a81c(param_1);
  return;
}



// FUNCTION 148a2a81c FUN_148a2a81c body=414 status=ok
// SIG undefined FUN_148a2a81c(void)

void FUN_148a2a81c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
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
        lVar6 = (longlong)iVar4 * 0x60;
        uVar8 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar2 + lVar6);
        *(uint *)(lVar2 + 0x5c + lVar6) = uVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x58 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 148a2a9bc FUN_148a2a9bc body=435 status=ok
// SIG undefined FUN_148a2a9bc(void)

undefined4 * FUN_148a2a9bc(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148a2ab70(param_1,local_40);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  *(undefined4 *)local_38 = *puVar1;
  *(undefined4 *)((longlong)local_38 + 4) = uVar5;
  *(undefined4 *)(local_38 + 1) = uVar6;
  *(undefined4 *)((longlong)local_38 + 0xc) = uVar7;
  local_38[2] = *puVar2;
  lVar13 = puVar2[1];
  local_38[3] = lVar13;
  if (lVar13 != 0) {
    LOCK();
    *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_38 + 4) = 0xffffffff;
  local_44 = local_40[0];
  uVar3 = *local_38;
  uVar4 = local_38[1];
  uVar9 = (uint)((ulonglong)uVar3 >> 0x10);
  uVar14 = (uint)uVar3 & 0xffff;
  uVar14 = ((uint)uVar3 << 0x10 | uVar14) + (int)((ulonglong)uVar3 >> 0x20) +
           (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar14 >> 4);
  uVar9 = (uint)((ulonglong)uVar4 >> 0x10);
  uVar11 = (uint)uVar4 & 0xffff;
  uVar14 = (uVar14 >> 2) +
           ((uint)uVar4 << 0x10 | uVar11) + (int)((ulonglong)uVar4 >> 0x20) +
           (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar11 >> 4) + uVar14 * 0x40 + 0x9e3779b9 ^ uVar14;
  cVar8 = FUN_148a2ac56(param_1,uVar14,local_38,&local_44);
  uVar5 = local_44;
  if (cVar8 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar12 = 1;
    if (3 < uVar9) {
      uVar10 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar13 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar13 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar12 <= *(int *)(param_1 + 0x48))) {
      uVar14 = *(int *)(param_1 + 0x48) - 1U & uVar14;
      *(uint *)((longlong)local_38 + 0x24) = uVar14;
      lVar13 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar13 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 4) =
           *(undefined4 *)
            (lVar13 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar14) * 4);
      lVar13 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar13 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar13 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar14) * 4) = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar12;
      FUN_148a2add4(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2ab70 FUN_148a2ab70 body=230 status=ok
// SIG undefined FUN_148a2ab70(void)

int * FUN_148a2ab70(longlong *param_1,int *param_2)

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



// FUNCTION 148a2ac56 FUN_148a2ac56 body=199 status=ok
// SIG undefined FUN_148a2ac56(void)

undefined8 FUN_148a2ac56(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar12 != -1) {
      do {
        plVar11 = (longlong *)(*param_1 + (longlong)iVar12 * 0x28);
        if ((*plVar11 == *param_3) &&
           (*(longlong *)(*param_1 + 8 + (longlong)iVar12 * 0x28) == param_3[1])) {
          plVar3 = (longlong *)plVar11[3];
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
          lVar8 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar9 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar10 = param_3[3];
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar11 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar11 + 0x14) = uVar6;
          *(int *)(plVar11 + 3) = (int)lVar10;
          *(undefined4 *)((longlong)plVar11 + 0x1c) = uVar7;
          *(int *)plVar11 = (int)lVar8;
          *(undefined4 *)((longlong)plVar11 + 4) = uVar4;
          *(int *)(plVar11 + 1) = (int)lVar9;
          *(undefined4 *)((longlong)plVar11 + 0xc) = uVar5;
          FUN_148a2ad1e(param_1,*param_4);
          *param_4 = iVar12;
          return 1;
        }
        iVar12 = (int)plVar11[4];
      } while (iVar12 != -1);
    }
  }
  return 0;
}



// FUNCTION 148a2ad1e FUN_148a2ad1e body=114 status=ok
// SIG undefined FUN_148a2ad1e(void)

void FUN_148a2ad1e(longlong *param_1,int param_2)

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



// FUNCTION 148a2ad90 FUN_148a2ad90 body=68 status=ok
// SIG undefined FUN_148a2ad90(void)

void FUN_148a2ad90(longlong param_1,uint param_2)

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
  FUN_148a2add4(param_1);
  return;
}



// FUNCTION 148a2add4 FUN_148a2add4 body=578 status=ok
// SIG undefined FUN_148a2add4(void)

void FUN_148a2add4(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
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
      iVar6 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar7 = (longlong)iVar6;
        uVar4 = *(undefined8 *)(lVar3 + lVar7 * 0x28);
        uVar5 = *(undefined8 *)(lVar3 + 8 + lVar7 * 0x28);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar9 = (uint)uVar4 & 0xffff;
        uVar9 = ((uint)uVar4 << 0x10 | uVar9) + (int)((ulonglong)uVar4 >> 0x20) +
                (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4);
        uVar2 = (uint)((ulonglong)uVar5 >> 0x10);
        uVar12 = (uint)uVar5 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar5 << 0x10 | uVar12) + (int)((ulonglong)uVar5 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar12 >> 4) + uVar9 * 0x40 +
                       (uVar9 >> 2) + 0x9e3779b9 ^ uVar9) & (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar3 + 0x24 + lVar7 * 0x28) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar7 * 0x28) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
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



// FUNCTION 148a2b018 FUN_148a2b018 body=288 status=ok
// SIG undefined FUN_148a2b018(void)

void FUN_148a2b018(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar6 = (ulonglong)DAT_14cb95220;
  if (0 < (longlong)uVar6) {
    bVar7 = false;
    DAT_14cb9522c = DAT_14cb9522c + 1;
    do {
      lVar8 = uVar6 * 0x10 + -8;
      uVar9 = uVar6;
      while ((*(int *)(DAT_14cb95218 + lVar8) != 0 &&
             (plVar3 = *(longlong **)(DAT_14cb95218 + -8 + lVar8), plVar3 != (longlong *)0x0))) {
        local_40 = *param_1;
        local_38 = param_1[1];
        if (local_38 != 0) {
          LOCK();
          *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
          UNLOCK();
        }
        cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,&local_40);
        if (cVar5 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar4 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar4) {
          DAT_14cb9522c = DAT_14cb9522c + -1;
          if (!bVar7) goto LAB_148a2b0f0;
          goto LAB_148a2b0da;
        }
      }
      uVar6 = uVar9 - 1;
      bVar7 = true;
    } while (1 < uVar9);
    DAT_14cb9522c = DAT_14cb9522c + -1;
LAB_148a2b0da:
    FUN_14474d06a(&DAT_14cb95218,0);
  }
LAB_148a2b0f0:
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a2b13a FUN_148a2b13a body=87 status=ok
// SIG undefined FUN_148a2b13a(void)

void FUN_148a2b13a(longlong *param_1,int param_2)

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
  FUN_148a2b192();
  return;
}



// FUNCTION 148a2b192 FUN_148a2b192 body=78 status=ok
// SIG undefined FUN_148a2b192(void)

void FUN_148a2b192(longlong *param_1,int param_2)

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
  FUN_148a2ad1e(param_1,param_2);
  return;
}



// FUNCTION 148a2b1e0 FUN_148a2b1e0 body=95 status=ok
// SIG undefined FUN_148a2b1e0(void)

void FUN_148a2b1e0(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x5c + (longlong)param_2 * 0x60);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x58 + lVar5 * 0x60);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x60 + 0x58);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x60 + 0x58);
  FUN_148a2b240();
  return;
}



// FUNCTION 148a2b240 FUN_148a2b240 body=82 status=ok
// SIG undefined FUN_148a2b240(void)

void FUN_148a2b240(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x60;
  *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
  if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_148a29cb4(lVar1 + lVar2 + 8);
  FUN_148a2a75e(param_1,param_2);
  return;
}



// FUNCTION 148a2b292 FUN_148a2b292 body=132 status=ok
// SIG undefined FUN_148a2b292(void)

void FUN_148a2b292(longlong param_1,int param_2)

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



// FUNCTION 148a2b318 FUN_148a2b318 body=54 status=ok
// SIG undefined FUN_148a2b318(void)

bool FUN_148a2b318(longlong param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  if ((param_2 - 500U < 0x7ce0d) && (*(longlong *)(param_1 + 0x28) != 0)) {
    iVar1 = FUN_144bc5db8(*(longlong *)(param_1 + 0x28),0xfa2);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 148a2b34e FUN_148a2b34e body=41 status=ok
// SIG undefined FUN_148a2b34e(void)

bool FUN_148a2b34e(longlong param_1,undefined1 param_2)

{
  int iVar1;
  bool bVar2;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_144bc5db8(*(longlong *)(param_1 + 0x28),0xfa6,param_2);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}



// FUNCTION 148a2b378 FUN_148a2b378 body=45 status=ok
// SIG undefined FUN_148a2b378(void)

bool FUN_148a2b378(longlong param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  
  if ((param_2 < 0xb) && (*(longlong *)(param_1 + 0x28) != 0)) {
    iVar1 = FUN_144bc5db8(*(longlong *)(param_1 + 0x28),0xfaa,param_2);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 148a2b3a6 FUN_148a2b3a6 body=31 status=ok
// SIG undefined FUN_148a2b3a6(void)

void FUN_148a2b3a6(longlong param_1)

{
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 148a2b3c6 FUN_148a2b3c6 body=31 status=ok
// SIG undefined FUN_148a2b3c6(void)

void FUN_148a2b3c6(longlong param_1)

{
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 148a2b3e6 FUN_148a2b3e6 body=58 status=ok
// SIG undefined FUN_148a2b3e6(void)

void FUN_148a2b3e6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_14cb953c8;
  if ((*(char *)(param_1 + 8) == '\x01') && (DAT_14cb953c8 != 0)) {
    FUN_148a2c044(DAT_14cb953c8);
    FUN_1400020a8(lVar1);
    DAT_14cb953c8 = 0;
  }
  return;
}



// FUNCTION 148a2b420 FUN_148a2b420 body=271 status=ok
// SIG undefined FUN_148a2b420(void)

longlong *
FUN_148a2b420(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (*(char *)(param_1 + 8) != '\x01') {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  if (DAT_14cb953c8 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_148a2c1ca(DAT_14cb953c8,param_3,param_4,param_5);
  }
  *param_2 = lVar3;
  plVar2 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar2[1] = (longlong)&DAT_100000001;
  *plVar2 = (longlong)&PTR_FUN_14b4ac5c0;
  plVar2[2] = lVar3;
  param_2[1] = (longlong)plVar2;
  if (lVar3 == 0) {
    return param_2;
  }
  if (((*(longlong *)(lVar3 + 8) != 0) && (*(longlong *)(lVar3 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar3 + 0x10) + 8))) {
    return param_2;
  }
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(lVar3 + 8) = lVar3;
    plVar4 = *(longlong **)(lVar3 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      return param_2;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(lVar3 + 8) = lVar3;
    if (*(longlong **)(lVar3 + 0x10) == plVar2) goto LAB_148a2b4f6;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar4 = *(longlong **)(lVar3 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      *(longlong **)(lVar3 + 0x10) = plVar2;
      goto LAB_148a2b4f6;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar4 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  *(longlong **)(lVar3 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return param_2;
  }
LAB_148a2b4f6:
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
  return param_2;
}



// FUNCTION 148a2b530 FUN_148a2b530 body=262 status=ok
// SIG undefined FUN_148a2b530(void)

longlong *
FUN_148a2b530(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5)

{
  int *piVar1;
  undefined8 in_RAX;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(char *)(param_1 + 8) != '\x01') {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  lVar2 = FUN_148a2b636(param_3,param_4,
                        CONCAT71((int7)((ulonglong)in_RAX >> 8),param_5) & 0xffffffff);
  *param_2 = lVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b4ac5e0;
  plVar3[2] = lVar2;
  param_2[1] = (longlong)plVar3;
  if (lVar2 == 0) {
    return param_2;
  }
  if (((*(longlong *)(lVar2 + 8) != 0) && (*(longlong *)(lVar2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar2 + 0x10) + 8))) {
    return param_2;
  }
  if (plVar3 == (longlong *)0x0) {
    *(longlong *)(lVar2 + 8) = lVar2;
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      return param_2;
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong *)(lVar2 + 8) = lVar2;
    if (*(longlong **)(lVar2 + 0x10) == plVar3) goto LAB_148a2b60c;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      *(longlong **)(lVar2 + 0x10) = plVar3;
      goto LAB_148a2b60c;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar4 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  *(longlong **)(lVar2 + 0x10) = plVar3;
  if (plVar3 == (longlong *)0x0) {
    return param_2;
  }
LAB_148a2b60c:
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
  return param_2;
}



// FUNCTION 148a2b636 FUN_148a2b636 body=129 status=ok
// SIG undefined FUN_148a2b636(void)

undefined8 * FUN_148a2b636(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_14b4ac1d0;
  puVar2[3] = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  *(undefined1 *)(puVar2 + 9) = 0;
  cVar1 = FUN_143ecc4fc(puVar2,param_1,param_2,param_3);
  if (cVar1 == '\0') {
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}



// FUNCTION 148a2b6b8 FUN_148a2b6b8 body=255 status=ok
// SIG undefined FUN_148a2b6b8(void)

longlong * FUN_148a2b6b8(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(char *)(param_1 + 8) != '\x01') {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  lVar2 = FUN_148a2b7b8(param_3,param_4);
  *param_2 = lVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b4ac600;
  plVar3[2] = lVar2;
  param_2[1] = (longlong)plVar3;
  if (lVar2 == 0) {
    return param_2;
  }
  if (((*(longlong *)(lVar2 + 8) != 0) && (*(longlong *)(lVar2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar2 + 0x10) + 8))) {
    return param_2;
  }
  if (plVar3 == (longlong *)0x0) {
    *(longlong *)(lVar2 + 8) = lVar2;
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      return param_2;
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong *)(lVar2 + 8) = lVar2;
    if (*(longlong **)(lVar2 + 0x10) == plVar3) goto LAB_148a2b78d;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      *(longlong **)(lVar2 + 0x10) = plVar3;
      goto LAB_148a2b78d;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar4 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  *(longlong **)(lVar2 + 0x10) = plVar3;
  if (plVar3 == (longlong *)0x0) {
    return param_2;
  }
LAB_148a2b78d:
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
  return param_2;
}



// FUNCTION 148a2b7b8 FUN_148a2b7b8 body=121 status=ok
// SIG undefined FUN_148a2b7b8(void)

undefined8 * FUN_148a2b7b8(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_14b4ac220;
  puVar2[3] = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  *(undefined1 *)(puVar2 + 9) = 0;
  cVar1 = FUN_143ecc81c(puVar2,param_1,param_2);
  if (cVar1 == '\0') {
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}



// FUNCTION 148a2b836 FUN_148a2b836 body=357 status=ok
// SIG undefined FUN_148a2b836(void)

undefined8 * FUN_148a2b836(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_14b4ac460;
  FUN_1477b96d4(param_1 + 3);
  uVar1 = FUN_1401cb356();
  FUN_145aa41ca(param_1 + 0x11,L"FVoiceCaptureWindows",0,uVar1);
  *param_1 = &PTR_FUN_14b4ac3a0;
  param_1[0x11] = &PTR_FUN_14b4ac408;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  local_48 = 0x41200000473b8000;
  local_40 = 0x242c80000;
  local_38 = 1;
  local_34 = 0x40a00000;
  FUN_147034930(param_1 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x472c4400;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined1 *)(param_1 + 0x32) = 1;
  lVar2 = FUN_14001cc68(0x90,0x10);
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined4 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0x80) = 0xffffffffffffffff;
  FUN_148a2bad2(lVar2);
  param_1[0x14] = lVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2b99c FUN_148a2b99c body=309 status=ok
// SIG undefined FUN_148a2b99c(void)

void FUN_148a2b99c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_14b4ac3a0;
  param_1[0x11] = &PTR_FUN_14b4ac408;
  lVar3 = param_1[0x14];
  plVar2 = *(longlong **)(lVar3 + 0x28);
  if (((plVar2 != (longlong *)0x0) && (*(int *)(param_1 + 0x16) != 1)) &&
     (*(int *)(param_1 + 0x16) != 4)) {
    (**(code **)(*plVar2 + 0x50))(plVar2);
    *(undefined4 *)(param_1 + 0x16) = 4;
    lVar3 = param_1[0x14];
  }
  FUN_148a2bad2(lVar3);
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (DAT_14cb953c8 != 0) {
    FUN_143eccb84(DAT_14cb953c8,param_1);
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
    param_1[0x14] = 0;
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_145bfbed6(param_1 + 0x11);
  *param_1 = &PTR_LAB_14b4ac460;
  FUN_1477d18f6(param_1 + 3);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148a2ba8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148a2bad2 FUN_148a2bad2 body=140 status=ok
// SIG undefined FUN_148a2bad2(void)

void FUN_148a2bad2(undefined8 *param_1)

{
  if ((HANDLE)param_1[0x10] != (HANDLE)0xffffffffffffffff) {
    CloseHandle((HANDLE)param_1[0x10]);
    param_1[0x10] = 0xffffffffffffffff;
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
    param_1[5] = 0;
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
    param_1[2] = 0;
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return;
}



// FUNCTION 148a2bb5e FUN_148a2bb5e body=42 status=ok
// SIG undefined FUN_148a2bb5e(void)

void FUN_148a2bb5e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x20))();
  FUN_148a2bad2(param_1[0x14]);
  *(undefined4 *)(param_1 + 0x16) = 0;
  return;
}



// FUNCTION 148a2bb88 FUN_148a2bb88 body=62 status=ok
// SIG undefined FUN_148a2bb88(void)

void FUN_148a2bb88(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x28);
  if (((plVar1 != (longlong *)0x0) && (*(int *)(param_1 + 0xb0) != 1)) &&
     (*(int *)(param_1 + 0xb0) != 4)) {
    (**(code **)(*plVar1 + 0x50))();
    *(undefined4 *)(param_1 + 0xb0) = 4;
  }
  return;
}



// FUNCTION 148a2bbea FUN_148a2bbea body=154 status=ok
// SIG undefined FUN_148a2bbea(void)

int FUN_148a2bbea(longlong *param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *_Src;
  
  iVar1 = (int)param_1[2];
  iVar5 = *(int *)((longlong)param_1 + 0x14) % (int)param_1[1];
  *(int *)((longlong)param_1 + 0x14) = iVar5;
  if (iVar1 < iVar5) {
    iVar4 = (int)param_1[1] - iVar5;
    iVar2 = iVar1 + iVar4;
    if (param_3 < iVar1 + iVar4) {
      iVar2 = param_3;
    }
    if (iVar2 == 0) {
      return 0;
    }
    memcpy(param_2,(void *)((longlong)iVar5 * 2 + *param_1),(longlong)iVar4 * 2);
    iVar3 = iVar2 - iVar4;
    _Src = (void *)*param_1;
    param_2 = (void *)((longlong)param_2 + (longlong)iVar4 * 2);
  }
  else {
    iVar3 = iVar1 - iVar5;
    if (param_3 < iVar1 - iVar5) {
      iVar3 = param_3;
    }
    if (iVar3 == 0) {
      return 0;
    }
    _Src = (void *)((longlong)iVar5 * 2 + *param_1);
    iVar2 = iVar3;
  }
  memcpy(param_2,_Src,(longlong)iVar3 * 2);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + iVar2;
  return iVar2;
}



// FUNCTION 148a2bc84 FUN_148a2bc84 body=853 status=ok
// SIG undefined FUN_148a2bc84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_148a2bc84(longlong param_1,void *param_2,uint param_3,uint *param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  float fVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_b8 [32];
  LARGE_INTEGER *local_98;
  undefined1 local_90;
  undefined8 *local_88;
  LARGE_INTEGER local_78 [2];
  undefined4 local_64;
  LARGE_INTEGER local_60 [2];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar3 = *(undefined4 *)(param_1 + 0xb0);
  *param_4 = 0;
  if ((*(int *)(param_1 + 0xb0) == 4) || (uVar6 = uVar3, *(int *)(param_1 + 0xb0) == 2)) {
    uVar4 = *(uint *)(param_1 + 0xc0);
    uVar6 = 5;
    if (uVar4 <= param_3) {
      *param_4 = uVar4;
      memcpy(param_2,*(void **)(param_1 + 0xb8),(ulonglong)uVar4);
      *(undefined4 *)(param_1 + 0xb0) = 3;
      *(undefined4 *)(param_1 + 0xc0) = 0;
      if (*(int *)(param_1 + 0xc4) < 0) {
        FUN_144893a1c(param_1 + 0xb8,0);
      }
      *param_5 = *(undefined8 *)(param_1 + 0xd8);
      uVar6 = uVar3;
    }
  }
  iVar5 = FUN_147038c70(param_1 + 0x18);
  if (0 < iVar5) {
    uVar4 = *param_4;
    puVar1 = (undefined8 *)(param_1 + 0xe8);
    *(undefined4 *)(param_1 + 0xf0) = 0;
    if (*(int *)(param_1 + 0xf4) < 0) {
      FUN_14482f6fa(puVar1,0);
    }
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0xe4);
    *(undefined4 *)(param_1 + 0x104) = 16000;
    FUN_148a2c840(puVar1,param_2,uVar4 >> 1);
    if (1 < *(int *)(param_1 + 0xe4)) {
      FUN_147e0e3c6(puVar1,1);
    }
    FUN_147038dd4(param_1 + 0x18,*puVar1,*(undefined4 *)(param_1 + 0xf8));
  }
  if ((DAT_14cb95330 != 0) && (DAT_14cb0d2b0 != 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb953c0) && (FUN_144b3d300(&DAT_14cb953c0), DAT_14cb953c0 == -1)) {
      QueryPerformanceCounter(local_60);
      _DAT_14cb953b8 = (double)local_60[0].QuadPart * DAT_14c83f420 + 16777216.0;
      _Init_thread_footer(&DAT_14cb953c0);
    }
    QueryPerformanceCounter(local_60);
    if (0.05 < ((double)local_60[0].QuadPart * DAT_14c83f420 + 16777216.0) - _DAT_14cb953b8) {
      fVar2 = *(float *)(param_1 + 0x158);
      FUN_140002266(local_60,L"Mic Amp: %.2f",(double)fVar2);
      iVar5 = (int)ROUND(fVar2 * 32.0 + fVar2 * 32.0 + -0.5) >> 1;
      if (0 < iVar5) {
        do {
          FUN_140002184(local_60,0x7c);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      FUN_1467edc58(local_78,&DAT_149e1dd14,&DAT_149e1dd34,fVar2);
      FUN_1411ab38a(local_78,&local_64);
      local_88 = &DAT_14c846320;
      local_90 = 0;
      local_98 = local_60;
      FUN_147d8078a(DAT_14cb0d2b0,0x1e,0x3d4ccccd,local_64);
      QueryPerformanceCounter(local_78);
      _DAT_14cb953b8 = (double)local_78[0].QuadPart * DAT_14c83f420 + 16777216.0;
      if (local_60[0].QuadPart != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 148a2bfda FUN_148a2bfda body=70 status=ok
// SIG undefined FUN_148a2bfda(void)

void FUN_148a2bfda(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = &local_10;
  local_10 = 0;
  (**(code **)(*param_1 + 0x40))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2c044 FUN_148a2c044 body=108 status=ok
// SIG undefined FUN_148a2c044(void)

void FUN_148a2c044(longlong *param_1)

{
  FUN_148a2c0b0();
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_148a2c35e(param_1 + 0xb);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a2c0b0 FUN_148a2c0b0 body=99 status=ok
// SIG undefined FUN_148a2c0b0(void)

void FUN_148a2c0b0(longlong *param_1)

{
  longlong lVar1;
  
  if (0 < (int)param_1[1]) {
    lVar1 = 0;
    do {
      (**(code **)(**(longlong **)(*param_1 + lVar1 * 8) + 0x10))();
      lVar1 = lVar1 + 1;
    } while (lVar1 < (int)param_1[1]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_148a2d304(param_1);
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
    param_1[3] = 0;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 148a2c114 FUN_148a2c114 body=182 status=ok
// SIG undefined FUN_148a2c114(void)

undefined8 * FUN_148a2c114(void)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb953c8;
  if (DAT_14cb953c8 == (undefined8 *)0x0) {
    DAT_14cb953c8 = (undefined8 *)FUN_14001cc68(0xa8,0x10);
    DAT_14cb953c8[0xf] = 0;
    *(undefined4 *)(DAT_14cb953c8 + 0x10) = 0;
    *DAT_14cb953c8 = 0;
    DAT_14cb953c8[1] = 0;
    *(undefined1 *)(DAT_14cb953c8 + 2) = 0;
    DAT_14cb953c8[3] = 0;
    DAT_14cb953c8[4] = 0;
    DAT_14cb953c8[5] = 0;
    DAT_14cb953c8[6] = 0;
    DAT_14cb953c8[7] = 0;
    DAT_14cb953c8[0xb] = 0;
    DAT_14cb953c8[0xc] = 0;
    *(undefined8 *)((longlong)DAT_14cb953c8 + 0x84) = 0xffffffff00000080;
    *(undefined4 *)((longlong)DAT_14cb953c8 + 0x8c) = 0;
    DAT_14cb953c8[0x13] = 0;
    *(undefined4 *)(DAT_14cb953c8 + 0x14) = 0;
    cVar1 = FUN_143ece692(DAT_14cb953c8);
    puVar2 = DAT_14cb953c8;
    if (cVar1 == '\0') {
      if (DAT_14cb953c8 != (undefined8 *)0x0) {
        FUN_148a2c044(DAT_14cb953c8);
        FUN_1400020a8(puVar2);
        DAT_14cb953c8 = (undefined8 *)0x0;
      }
      puVar2 = (undefined8 *)0x0;
    }
  }
  return puVar2;
}



// FUNCTION 148a2c1ca FUN_148a2c1ca body=128 status=ok
// SIG undefined FUN_148a2c1ca(void)

longlong * FUN_148a2c1ca(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  
  if ((char)param_1[2] == '\x01') {
    plVar3 = (longlong *)FUN_14001cc68(0x198,0x10);
    FUN_148a2b836(plVar3);
    cVar2 = (**(code **)(*plVar3 + 8))(plVar3,param_2,param_3,param_4);
    if (cVar2 != '\0') {
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_148a2d334(param_1,iVar1);
      }
      *(longlong **)(*param_1 + (longlong)iVar1 * 8) = plVar3;
      return plVar3;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 148a2c24a FUN_148a2c24a body=81 status=ok
// SIG undefined FUN_148a2c24a(void)

undefined8 * FUN_148a2c24a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ac1d0;
  FUN_1400020a8(param_1[5]);
  param_1[5] = 0;
  plVar2 = (longlong *)param_1[2];
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



// FUNCTION 148a2c29c FUN_148a2c29c body=81 status=ok
// SIG undefined FUN_148a2c29c(void)

undefined8 * FUN_148a2c29c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ac220;
  FUN_1400020a8(param_1[5]);
  param_1[5] = 0;
  plVar2 = (longlong *)param_1[2];
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



// FUNCTION 148a2c2ee FUN_148a2c2ee body=38 status=ok
// SIG undefined FUN_148a2c2ee(void)

undefined8 FUN_148a2c2ee(undefined8 param_1,int param_2)

{
  FUN_148a2b99c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a2c314 FUN_148a2c314 body=48 status=ok
// SIG undefined FUN_148a2c314(void)

longlong FUN_148a2c314(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x88;
  FUN_148a2b99c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a2c35e FUN_148a2c35e body=52 status=ok
// SIG undefined FUN_148a2c35e(void)

void FUN_148a2c35e(longlong *param_1)

{
  FUN_148a2c392();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a2c392 FUN_148a2c392 body=338 status=ok
// SIG undefined FUN_148a2c392(void)

void FUN_148a2c392(longlong *param_1)

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
      if (*(longlong *)(lVar2 + 0x10 + lVar3 * 0x40) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar3 * 0x40) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
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



// FUNCTION 148a2c4e6 FUN_148a2c4e6 body=40 status=ok
// SIG undefined FUN_148a2c4e6(void)

void FUN_148a2c4e6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14b4ac560;
  return;
}



// FUNCTION 148a2c50e FUN_148a2c50e body=31 status=ok
// SIG undefined FUN_148a2c50e(void)

undefined8 FUN_148a2c50e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a2c54a FUN_148a2c54a body=93 status=ok
// SIG undefined FUN_148a2c54a(void)

void FUN_148a2c54a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4ac4f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a2c5a8 FUN_148a2c5a8 body=123 status=ok
// SIG undefined FUN_148a2c5a8(void)

void FUN_148a2c5a8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ac4f0;
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



// FUNCTION 148a2c630 FUN_148a2c630 body=21 status=ok
// SIG undefined FUN_148a2c630(void)

undefined8 FUN_148a2c630(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148a2c646 FUN_148a2c646 body=29 status=ok
// SIG undefined FUN_148a2c646(void)

undefined8 FUN_148a2c646(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a2c664 FUN_148a2c664 body=24 status=ok
// SIG undefined FUN_148a2c664(void)

void FUN_148a2c664(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a2c678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148a2c67c FUN_148a2c67c body=29 status=ok
// SIG undefined FUN_148a2c67c(void)

undefined8 FUN_148a2c67c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a2c69a FUN_148a2c69a body=24 status=ok
// SIG undefined FUN_148a2c69a(void)

void FUN_148a2c69a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a2c6ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148a2c6b2 FUN_148a2c6b2 body=29 status=ok
// SIG undefined FUN_148a2c6b2(void)

undefined8 FUN_148a2c6b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a2c6d0 FUN_148a2c6d0 body=24 status=ok
// SIG undefined FUN_148a2c6d0(void)

void FUN_148a2c6d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a2c6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148a2c6e8 FUN_148a2c6e8 body=29 status=ok
// SIG undefined FUN_148a2c6e8(void)

undefined8 FUN_148a2c6e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a2c706 FUN_148a2c706 body=108 status=ok
// SIG undefined FUN_148a2c706(void)

void FUN_148a2c706(longlong *param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  
  if (-1 < param_3) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_3) {
      FUN_140ca8596(param_1,param_3);
    }
    for (; param_3 != 0; param_3 = param_3 + -1) {
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1405b572a(param_1,iVar1);
      }
      *(undefined2 *)(*param_1 + (longlong)iVar1 * 2) = *param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_3);
}



// FUNCTION 148a2c774 FUN_148a2c774 body=203 status=ok
// SIG undefined FUN_148a2c774(void)

int FUN_148a2c774(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_148a2c7be:
      lVar10 = (longlong)iVar1 * 0x40;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_148a2c834;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_148a2c834;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_148a2c825;
    }
  }
  return -1;
LAB_148a2c834:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_148a2c825:
  iVar1 = *(int *)(lVar4 + 0x38 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_148a2c7be;
}



// FUNCTION 148a2c840 FUN_148a2c840 body=165 status=ok
// SIG undefined FUN_148a2c840(void)

void FUN_148a2c840(longlong *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  uint local_40;
  longlong local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_3;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_3) {
    FUN_14475e4ac(param_1,iVar1);
  }
  local_38 = (longlong)iVar1 * 4 + *param_1;
  local_48 = param_2;
  local_40 = param_3;
  local_30 = param_3;
  FUN_142af422d();
  iVar2 = param_3 + (int)param_1[2];
  *(int *)(param_1 + 2) = iVar2;
  iVar1 = iVar2 / (int)param_1[3];
  *(int *)((longlong)param_1 + 0x14) = iVar1;
  *(float *)(param_1 + 4) = (float)iVar1 / (float)*(int *)((longlong)param_1 + 0x1c);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68,
                (longlong)iVar2 % (longlong)(int)param_1[3] & 0xffffffff);
}



// FUNCTION 148a2c8e6 FUN_148a2c8e6 body=319 status=ok
// SIG undefined FUN_148a2c8e6(void)

undefined4 * FUN_148a2c8e6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148a2ca26(param_1,local_48);
  FUN_148a2cb9e(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 7) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_148a2cb0c(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x3c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 7) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_148a2ccbe(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2ca26 FUN_148a2ca26 body=229 status=ok
// SIG undefined FUN_148a2ca26(void)

int * FUN_148a2ca26(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 148a2cb0c FUN_148a2cb0c body=146 status=ok
// SIG undefined FUN_148a2cb0c(void)

undefined8 FUN_148a2cb0c(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  longlong *plVar1;
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
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar14 = FUN_148a2c774(), iVar14 != -1)) {
    plVar1 = (longlong *)(*param_1 + (longlong)iVar14 * 0x40);
    if (*(longlong *)(*param_1 + 0x10 + (longlong)iVar14 * 0x40) != 0) {
      FUN_1400020a8();
    }
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[4];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    uVar10 = param_3[8];
    uVar11 = param_3[9];
    uVar12 = param_3[10];
    uVar13 = param_3[0xb];
    plVar1[6] = *(longlong *)(param_3 + 0xc);
    *(undefined4 *)(plVar1 + 4) = uVar10;
    *(undefined4 *)((longlong)plVar1 + 0x24) = uVar11;
    *(undefined4 *)(plVar1 + 5) = uVar12;
    *(undefined4 *)((longlong)plVar1 + 0x2c) = uVar13;
    *(undefined4 *)(plVar1 + 2) = uVar6;
    *(undefined4 *)((longlong)plVar1 + 0x14) = uVar7;
    *(undefined4 *)(plVar1 + 3) = uVar8;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar9;
    *(undefined4 *)plVar1 = uVar2;
    *(undefined4 *)((longlong)plVar1 + 4) = uVar3;
    *(undefined4 *)(plVar1 + 1) = uVar4;
    *(undefined4 *)((longlong)plVar1 + 0xc) = uVar5;
    FUN_148a2cc4c(param_1,*param_4);
    *param_4 = iVar14;
    return 1;
  }
  return 0;
}



// FUNCTION 148a2cb9e FUN_148a2cb9e body=173 status=ok
// SIG undefined FUN_148a2cb9e(void)

undefined8 * FUN_148a2cb9e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
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
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_3 + 4);
  uVar3 = param_3[3];
  param_1[4] = param_3[2];
  param_1[5] = uVar3;
  return param_1;
}



// FUNCTION 148a2cc4c FUN_148a2cc4c body=114 status=ok
// SIG undefined FUN_148a2cc4c(void)

void FUN_148a2cc4c(longlong *param_1,int param_2)

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



// FUNCTION 148a2ccbe FUN_148a2ccbe body=476 status=ok
// SIG undefined FUN_148a2ccbe(void)

void FUN_148a2ccbe(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
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
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
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
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x40;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x3c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2ce9c FUN_148a2ce9c body=319 status=ok
// SIG undefined FUN_148a2ce9c(void)

undefined4 * FUN_148a2ce9c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148a2ca26(param_1,local_48);
  FUN_148a2cfdc(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 7) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_148a2cb0c(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x3c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 7) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_148a2ccbe(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2cfdc FUN_148a2cfdc body=173 status=ok
// SIG undefined FUN_148a2cfdc(void)

undefined8 * FUN_148a2cfdc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
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
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_3 + 4);
  uVar3 = param_3[3];
  param_1[4] = param_3[2];
  param_1[5] = uVar3;
  return param_1;
}



// FUNCTION 148a2d08a FUN_148a2d08a body=322 status=ok
// SIG undefined FUN_148a2d08a(void)

void FUN_148a2d08a(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x3c + (longlong)iVar4 * 0x40) * 4) =
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



// FUNCTION 148a2d1ce FUN_148a2d1ce body=308 status=ok
// SIG undefined FUN_148a2d1ce(void)

void FUN_148a2d1ce(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
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
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
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
      lVar1 = *local_70;
      lVar2 = (longlong)iStack_54;
      if (*(longlong *)(lVar1 + 0x10 + lVar2 * 0x40) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + lVar2 * 0x40) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2d304 FUN_148a2d304 body=48 status=ok
// SIG undefined FUN_148a2d304(void)

void FUN_148a2d304(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148a2d334 FUN_148a2d334 body=132 status=ok
// SIG undefined FUN_148a2d334(void)

void FUN_148a2d334(longlong param_1,int param_2)

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



// FUNCTION 148a2d3ba FUN_148a2d3ba body=62 status=ok
// SIG undefined FUN_148a2d3ba(void)

void FUN_148a2d3ba(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148a2d3f8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 148a2d3f8 FUN_148a2d3f8 body=93 status=ok
// SIG undefined FUN_148a2d3f8(void)

ulonglong FUN_148a2d3f8(uint param_1,uint param_2)

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



// FUNCTION 148a2d46e FUN_148a2d46e body=889 status=ok
// SIG undefined FUN_148a2d46e(void)

void FUN_148a2d46e(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong **pplVar2;
  undefined1 *puVar3;
  longlong **pplVar4;
  longlong **pplVar5;
  undefined1 auStack_d8 [32];
  longlong **local_b8;
  longlong **local_b0;
  longlong **local_a8;
  undefined1 *local_a0;
  undefined1 local_89;
  longlong *local_88 [2];
  longlong *local_78 [2];
  longlong *local_68 [2];
  undefined1 local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
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
  local_50 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_51 = 0;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_51);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_51);
  }
  puVar3 = &local_51;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  FUN_144a5dc74(local_68);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  pplVar2 = local_68;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar2 = *(longlong ***)(param_2 + 0x38);
  }
  FUN_144a5dc74(local_78);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  pplVar4 = local_78;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar4 = *(longlong ***)(param_2 + 0x38);
  }
  FUN_144a5dc74(local_88);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  pplVar5 = local_88;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar5 = *(longlong ***)(param_2 + 0x38);
  }
  local_89 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_89);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_89);
  }
  local_a0 = &local_89;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_a0 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b8 = pplVar2;
  local_b0 = pplVar4;
  local_a8 = pplVar5;
  FUN_148a2d7e8(local_40,local_48,local_50,puVar3);
  if (local_88[0] != (longlong *)0x0) {
    (**(code **)(*local_88[0] + 0x10))();
  }
  if (local_78[0] != (longlong *)0x0) {
    (**(code **)(*local_78[0] + 0x10))();
  }
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2d7e8 FUN_148a2d7e8 body=885 status=ok
// SIG undefined FUN_148a2d7e8(void)

void FUN_148a2d7e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,undefined1 *param_8)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_f8 [40];
  longlong local_d0 [2];
  longlong *local_c0;
  undefined4 local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  longlong *local_a0;
  undefined4 local_98;
  undefined1 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_4 = 0;
  local_50 = param_3;
  plVar5 = (longlong *)FUN_140e82300();
  plVar2 = (longlong *)*plVar5;
  plVar3 = (longlong *)*param_5;
  if (plVar3 != plVar2) {
    *param_5 = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(int *)(param_5 + 1) = (int)plVar5[1];
  plVar5 = (longlong *)FUN_140e82300();
  plVar2 = (longlong *)*plVar5;
  plVar3 = (longlong *)*param_6;
  if (plVar3 != plVar2) {
    *param_6 = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(int *)(param_6 + 1) = (int)plVar5[1];
  plVar5 = (longlong *)FUN_140e82300();
  plVar2 = (longlong *)*plVar5;
  plVar3 = (longlong *)*param_7;
  if (plVar3 != plVar2) {
    *param_7 = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(int *)(param_7 + 1) = (int)plVar5[1];
  *param_8 = 0;
  FUN_148a2deec(&local_70,L"GetCachedAchievementDescription",param_1,0);
  FUN_148a2dfa6(&local_70,param_2);
  if (local_60 != (longlong *)0x0 && local_70 != 0) {
    (**(code **)(*local_60 + 0xa8))(local_60,&local_80);
    if (local_80 == (longlong *)0x0) {
      FUN_1415b7ec4(L"Achievements not supported by Online Subsystem",3,0);
    }
    else {
      FUN_144a5dc74(&local_c0);
      FUN_144a5dc74(&local_b0);
      FUN_144a5dc74(&local_a0);
      local_88 = 0;
      FUN_1400021e4(&local_50,local_d0);
      iVar4 = (**(code **)(*local_80 + 0x30))(local_80,local_d0,&local_c0);
      if (local_d0[0] != 0) {
        FUN_1400020a8();
      }
      if (iVar4 == 0) {
        *param_4 = 1;
        plVar2 = (longlong *)*param_5;
        if (plVar2 != local_c0) {
          *param_5 = (longlong)local_c0;
          if (local_c0 != (longlong *)0x0) {
            (**(code **)(*local_c0 + 8))();
          }
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
        *(undefined4 *)(param_5 + 1) = local_b8;
        plVar2 = (longlong *)*param_6;
        if (plVar2 != local_b0) {
          *param_6 = (longlong)local_b0;
          if (local_b0 != (longlong *)0x0) {
            (**(code **)(*local_b0 + 8))();
          }
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
        *(undefined4 *)(param_6 + 1) = local_a8;
        plVar2 = (longlong *)*param_7;
        if (plVar2 != local_a0) {
          *param_7 = (longlong)local_a0;
          if (local_a0 != (longlong *)0x0) {
            (**(code **)(*local_a0 + 8))();
          }
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
        *(undefined4 *)(param_7 + 1) = local_98;
        *param_8 = local_90;
      }
      if (local_a0 != (longlong *)0x0) {
        (**(code **)(*local_a0 + 0x10))();
      }
      if (local_b0 != (longlong *)0x0) {
        (**(code **)(*local_b0 + 0x10))();
      }
      if (local_c0 != (longlong *)0x0) {
        (**(code **)(*local_c0 + 0x10))();
      }
    }
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_78 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)local_78 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_78 + 0x10))(local_78);
        }
      }
    }
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2db64 FUN_148a2db64 body=485 status=ok
// SIG undefined FUN_148a2db64(void)

void FUN_148a2db64(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined4 local_40;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30;
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
  local_38 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar2 = &local_39;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  local_48 = &local_40;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    local_48 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148a2dd4a(local_28,local_30,local_38,puVar2);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2dd4a FUN_148a2dd4a body=413 status=ok
// SIG undefined FUN_148a2dd4a(void)

void FUN_148a2dd4a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  float *param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  longlong local_88 [2];
  double local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_4 = 0;
  *param_5 = 0.0;
  local_38 = param_3;
  FUN_148a2deec(&local_58,L"GetCachedAchievementProgress",param_1,0);
  FUN_148a2dfa6(&local_58,param_2);
  if (local_48 != (longlong *)0x0 && local_58 != 0) {
    (**(code **)(*local_48 + 0xa8))(local_48,&local_68);
    if (local_68 == (longlong *)0x0) {
      FUN_1415b7ec4(L"Achievements not supported by Online Subsystem",3,0);
    }
    else {
      local_70 = 0;
      local_88[0] = 0;
      local_88[1] = 0;
      FUN_1400021e4(&local_38,local_98);
      iVar3 = (**(code **)(*local_68 + 0x20))(local_68,local_58,local_98,local_88);
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
      if (iVar3 == 0) {
        *param_4 = 1;
        *param_5 = (float)local_78;
      }
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
    }
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
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2deec FUN_148a2deec body=184 status=ok
// SIG undefined FUN_148a2deec(void)

undefined8 *
FUN_148a2deec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  local_28 = param_4;
  FUN_1402ad3be(DAT_14cb0d2b0,param_3,0);
  lVar1 = FUN_1401e3228(&local_28);
  param_1[2] = lVar1;
  param_1[3] = param_2;
  if (lVar1 == 0) {
    FUN_140002266(&local_38,L"%s - Invalid or uninitialized OnlineSubsystem",param_2);
    puVar2 = local_38;
    if (local_30 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_1415b7ec4(puVar2,3,0);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148a2dfa6 FUN_148a2dfa6 body=366 status=ok
// SIG undefined FUN_148a2dfa6(void)

void FUN_148a2dfa6(undefined2 **param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  wchar_t *pwVar5;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = (undefined2 *)0x0;
  plVar2 = (longlong *)param_1[1];
  if (plVar2 != (longlong *)0x0) {
    param_1[1] = (undefined2 *)0x0;
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
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x398) == 0)) {
    puVar4 = param_1[3];
    pwVar5 = L"%s - Invalid player state";
  }
  else {
    FUN_1408e4d18(*(longlong *)(param_2 + 0x398) + 0x3a0,&local_30);
    plVar2 = local_28;
    if (&local_30 != param_1) {
      *param_1 = local_30;
      local_30 = (undefined2 *)0x0;
      plVar3 = (longlong *)param_1[1];
      if (local_28 != plVar3) {
        local_28 = (longlong *)0x0;
        param_1[1] = (undefined2 *)plVar2;
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
    plVar2 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_28 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (*param_1 != (undefined2 *)0x0) goto LAB_148a2e0f6;
    puVar4 = param_1[3];
    pwVar5 = L"%s - Cannot map local player to unique net ID";
  }
  FUN_140002266(&local_30,pwVar5,puVar4);
  puVar4 = local_30;
  if ((int)local_28 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_1415b7ec4(puVar4,3,0);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_148a2e0f6:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a2e116 FUN_148a2e116 body=268 status=ok
// SIG undefined FUN_148a2e116(void)

void FUN_148a2e116(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  uVar2 = local_30;
  uVar1 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = FUN_148a2e334(DAT_14c951640);
  FUN_14485c47a(lVar3 + 0x50,uVar1);
  *(undefined1 *)(lVar3 + 0x58) = 1;
  *(undefined8 *)(lVar3 + 0x60) = uVar2;
  *param_3 = lVar3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2e224 FUN_148a2e224 body=268 status=ok
// SIG undefined FUN_148a2e224(void)

void FUN_148a2e224(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  uVar2 = local_30;
  uVar1 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = FUN_148a2e334(DAT_14c951640);
  FUN_14485c47a(lVar3 + 0x50,uVar1);
  *(undefined1 *)(lVar3 + 0x58) = 0;
  *(undefined8 *)(lVar3 + 0x60) = uVar2;
  *param_3 = lVar3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2e334 FUN_148a2e334 body=148 status=ok
// SIG undefined FUN_148a2e334(void)

undefined8 FUN_148a2e334(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145922904();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2e3ca FUN_148a2e3ca body=470 status=ok
// SIG undefined FUN_148a2e3ca(void)

void FUN_148a2e3ca(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined4 local_58;
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_148a2deec(&local_40,L"CacheAchievements or CacheAchievementDescriptions",
                *(undefined8 *)(param_1 + 0x60),0);
  uVar6 = FUN_14479d2ce(param_1 + 0x50);
  FUN_148a2dfa6(&local_40,uVar6);
  if (local_30 != (longlong *)0x0 && local_40 != 0) {
    (**(code **)(*local_30 + 0xa8))(local_30,&local_50);
    plVar3 = local_50;
    if (local_50 == (longlong *)0x0) {
      FUN_1415b7ec4(L"Achievements not supported by Online Subsystem",3,0);
    }
    else {
      local_60 = (undefined8 *)0x0;
      local_58 = 0;
      FUN_1446efa72(&local_60,0,3,0x10);
      puVar4 = local_60;
      local_58 = 3;
      *local_60 = &PTR_LAB_14b438700;
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
      local_60[2] = lVar7;
      *local_60 = &PTR_FUN_14b4c2000;
      local_60[3] = 0;
      FUN_14485c47a(local_60 + 3,param_1);
      puVar4[4] = &LAB_148a2e5a2;
      (**(code **)(*local_50 + 0x10 + (ulonglong)*(byte *)(param_1 + 0x58) * 8))
                (local_50,local_40,&local_60);
      FUN_1449db362(&local_60);
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
        }
      }
    }
    if (plVar3 != (longlong *)0x0) goto LAB_148a2e531;
  }
  FUN_1447cd2ec(param_1 + 0x40,0);
LAB_148a2e531:
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2e5bb FUN_148a2e5bb body=122 status=ok
// SIG undefined FUN_148a2e5bb(void)

void FUN_148a2e5bb(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  local_38 = param_3;
  local_34 = param_4;
  FUN_1447cd2ec(param_1,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2e636 FUN_148a2e636 body=519 status=ok
// SIG undefined FUN_148a2e636(void)

void FUN_148a2e636(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
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
  local_70 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  local_78 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  uVar3 = local_60;
  uVar4 = local_68;
  uVar2 = local_74;
  uVar1 = local_78;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_70;
  FUN_1400021e4(&local_48,local_58);
  local_88 = uVar1;
  uVar4 = FUN_148a2ea80(uVar3,uVar4,local_58,uVar2);
  *param_3 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2e83e FUN_148a2e83e body=576 status=ok
// SIG undefined FUN_148a2e83e(void)

void FUN_148a2e83e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *_Src;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  void *local_68;
  ulonglong uStack_60;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
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
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  _Src = local_68;
  uVar2 = local_6c;
  uVar1 = local_70;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = (void *)0x0;
  lVar4 = (longlong)(int)uStack_60;
  local_78 = (int)uStack_60;
  if (lVar4 == 0) {
    local_74 = 0;
  }
  else {
    FUN_1446dd670(&local_80,uStack_60 & 0xffffffff,0);
    memcpy(local_80,_Src,lVar4 * 2);
  }
  local_88 = uVar1;
  uVar3 = FUN_148a2ea80(local_48,local_50,&local_80,uVar2);
  *param_3 = uVar3;
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2ea80 FUN_148a2ea80 body=389 status=ok
// SIG undefined FUN_148a2ea80(void)

longlong FUN_148a2ea80(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                      undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  
  lVar4 = FUN_148a2ec08(DAT_14c951640);
  puVar5 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar5[5] = 0;
  *(undefined4 *)(puVar5 + 6) = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *(undefined8 *)((longlong)puVar5 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar5 + 0x3c) = 0;
  puVar5[9] = 0;
  *(undefined4 *)(puVar5 + 10) = 0;
  *puVar5 = &PTR_FUN_14b4391c0;
  *(undefined4 *)(puVar5 + 0xb) = 0;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b4392a0;
  plVar6[2] = (longlong)puVar5;
  *(undefined8 **)(lVar4 + 0x78) = puVar5;
  plVar3 = *(longlong **)(lVar4 + 0x80);
  if (plVar6 == plVar3) {
    if (plVar6 == (longlong *)0x0) goto LAB_148a2eb90;
    LOCK();
    plVar3 = plVar6 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_148a2eb90;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar6;
  }
  else {
    *(longlong **)(lVar4 + 0x80) = plVar6;
    if (plVar3 == (longlong *)0x0) goto LAB_148a2eb90;
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_148a2eb90;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_148a2eb90:
  (**(code **)(**(longlong **)(lVar4 + 0x78) + 8))(*(longlong **)(lVar4 + 0x78),param_3,param_4);
  FUN_14485c47a(lVar4 + 0x70,param_2);
  iVar2 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    iVar2 = 0;
  }
  FUN_1402980a2(lVar4 + 0x88,*param_3,iVar2);
  *(undefined4 *)(lVar4 + 0x98) = param_4;
  *(undefined4 *)(lVar4 + 0x9c) = param_5;
  *(undefined8 *)(lVar4 + 0xa0) = param_1;
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  return lVar4;
}



// FUNCTION 148a2ec08 FUN_148a2ec08 body=148 status=ok
// SIG undefined FUN_148a2ec08(void)

undefined8 FUN_148a2ec08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459229ee();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2ec9e FUN_148a2ec9e body=854 status=ok
// SIG undefined FUN_148a2ec9e(void)

void FUN_148a2ec9e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *_Src;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_d8 [40];
  void *local_b0;
  int local_a8;
  undefined4 local_a4;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_148a2deec(&local_80,L"WriteAchievementObject",*(undefined8 *)(param_1 + 0xa0),0);
  uVar9 = FUN_14479d2ce(param_1 + 0x70);
  FUN_148a2dfa6(&local_80,uVar9);
  if ((local_80 != 0) && (local_70 != (longlong *)0x0)) {
    (**(code **)(*local_70 + 0xa8))(local_70,&local_60);
    plVar5 = local_60;
    if (local_60 == (longlong *)0x0) {
      FUN_1415b7ec4(L"WriteAchievementObject - Achievements not supported by Online Subsystem",3,0);
    }
    else {
      local_90 = *(undefined8 *)(param_1 + 0x78);
      local_88 = *(longlong **)(param_1 + 0x80);
      if (local_88 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_88 + 1) = (int)local_88[1] + 1;
        UNLOCK();
      }
      local_a0 = (undefined8 *)0x0;
      local_98 = 0;
      FUN_1446efa72(&local_a0,0,3,0x10);
      puVar8 = local_a0;
      local_98 = 3;
      *local_a0 = &PTR_LAB_14b438700;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar11 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar11 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar11;
      local_a0[2] = lVar10;
      *local_a0 = &PTR_FUN_14b4c2070;
      local_a0[3] = 0;
      FUN_14485c47a(local_a0 + 3,param_1);
      puVar8[4] = FUN_148a2eff6;
      (**(code **)(*local_60 + 8))(local_60,local_80,&local_90,&local_a0);
      FUN_1449db362(&local_a0);
      plVar7 = local_88;
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_88 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_88)(local_88);
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
    plVar7 = (longlong *)CONCAT44(uStack_54,local_58);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
    if (plVar5 != (longlong *)0x0) goto LAB_148a2ee67;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x9c);
  uVar3 = *(undefined4 *)(param_1 + 0x98);
  local_b0 = (void *)0x0;
  local_a8 = *(int *)(param_1 + 0x90);
  lVar11 = (longlong)local_a8;
  _Src = *(void **)(param_1 + 0x88);
  if (lVar11 == 0) {
    local_a4 = 0;
  }
  else {
    FUN_1446dd670(&local_b0,local_a8,0);
    memcpy(local_b0,_Src,lVar11 * 2);
  }
  FUN_148a2e5bb(param_1 + 0x40,&local_b0,uVar3,uVar4);
  if (local_b0 != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = *(undefined4 *)(param_1 + 0x9c);
  uVar3 = *(undefined4 *)(param_1 + 0x98);
  iVar6 = *(int *)(param_1 + 0x90) + -1;
  if (*(int *)(param_1 + 0x90) == 0) {
    iVar6 = 0;
  }
  FUN_1446f82e2(&local_60,iVar6,*(undefined8 *)(param_1 + 0x88),1);
  local_58 = uVar3;
  uStack_54 = uVar4;
  FUN_1447cd2ec(param_1 + 0x60,&local_60);
  *(undefined8 *)(param_1 + 0x78) = 0;
  plVar5 = *(longlong **)(param_1 + 0x80);
  if (plVar5 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
    LOCK();
    plVar7 = plVar5 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
LAB_148a2ee67:
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_78 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2eff6 FUN_148a2eff6 body=479 status=ok
// SIG undefined FUN_148a2eff6(void)

void FUN_148a2eff6(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *pvVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_a8 [40];
  void *local_80;
  int local_78;
  undefined4 local_74;
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined1 local_60 [8];
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar4 = *(undefined4 *)(param_1 + 0x9c);
  uVar3 = *(undefined4 *)(param_1 + 0x98);
  if (param_3 == '\0') {
    local_80 = (void *)0x0;
    local_78 = *(int *)(param_1 + 0x90);
    lVar8 = (longlong)local_78;
    pvVar5 = *(void **)(param_1 + 0x88);
    if (lVar8 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar5,lVar8 * 2);
    }
    FUN_148a2e5bb(param_1 + 0x40,&local_80,uVar3,uVar4);
    if (local_80 != (void *)0x0) {
      FUN_1400020a8();
    }
    lVar8 = param_1 + 0x60;
  }
  else {
    local_70 = (void *)0x0;
    local_68 = *(int *)(param_1 + 0x90);
    lVar8 = (longlong)local_68;
    pvVar5 = *(void **)(param_1 + 0x88);
    if (lVar8 == 0) {
      local_64 = 0;
    }
    else {
      FUN_1446dd670(&local_70,local_68,0);
      memcpy(local_70,pvVar5,lVar8 * 2);
    }
    FUN_148a2e5bb(param_1 + 0x30,&local_70,uVar3,uVar4);
    if (local_70 != (void *)0x0) {
      FUN_1400020a8();
    }
    lVar8 = param_1 + 0x50;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x9c);
  uVar3 = *(undefined4 *)(param_1 + 0x98);
  iVar7 = *(int *)(param_1 + 0x90) + -1;
  if (*(int *)(param_1 + 0x90) == 0) {
    iVar7 = 0;
  }
  FUN_1446f82e2(local_60,iVar7,*(undefined8 *)(param_1 + 0x88),1);
  local_58 = uVar3;
  local_54 = uVar4;
  FUN_1447cd2ec(lVar8,local_60);
  *(undefined8 *)(param_1 + 0x78) = 0;
  plVar6 = *(longlong **)(param_1 + 0x80);
  if (plVar6 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
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
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2f1d6 FUN_148a2f1d6 body=264 status=ok
// SIG undefined FUN_148a2f1d6(void)

void FUN_148a2f1d6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  uVar2 = local_30;
  uVar1 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = FUN_148a2f401(DAT_14c951640);
  FUN_14485c47a(lVar3 + 0x50,uVar1);
  *(undefined8 *)(lVar3 + 0x70) = uVar2;
  *param_3 = lVar3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2f2e2 FUN_148a2f2e2 body=286 status=ok
// SIG undefined FUN_148a2f2e2(void)

void FUN_148a2f2e2(longlong param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148a2deec(&local_48,L"ConnectToService",*(undefined8 *)(param_1 + 0x70),0);
  uVar3 = FUN_14479d2ce(param_1 + 0x50);
  FUN_148a2dfa6(&local_48,uVar3);
  if (local_38 != (longlong *)0x0 && local_48 != 0) {
    (**(code **)(*local_38 + 0x80))(local_38,&local_58);
    plVar2 = (longlong *)CONCAT44(uStack_54,local_58);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x98))(plVar2,param_2,param_1 + 0x68);
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_50 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
  }
  if (param_3 == '\0') {
    param_1 = param_1 + 0x40;
  }
  else {
    param_1 = param_1 + 0x30;
  }
  local_58 = 0;
  FUN_1447cd2ec(param_1);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2f401 FUN_148a2f401 body=148 status=ok
// SIG undefined FUN_148a2f401(void)

undefined8 FUN_148a2f401(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459978ca();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2f496 FUN_148a2f496 body=498 status=ok
// SIG undefined FUN_148a2f496(void)

void FUN_148a2f496(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  ulonglong local_a8 [6];
  undefined1 local_78;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_148a2deec(&local_58,L"ConnectToService",*(undefined8 *)(param_1 + 0x70),0);
  uVar7 = FUN_14479d2ce(param_1 + 0x50);
  FUN_148a2dfa6(&local_58,uVar7);
  if (local_48 != (longlong *)0x0 && local_58 != 0) {
    (**(code **)(*local_48 + 0x80))(local_48,&local_68);
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      FUN_1415b7ec4(L"Connection control not supported by online subsystem",3,0);
    }
    else {
      lVar8 = FUN_14479d2ce(param_1 + 0x50);
      iVar3 = *(int *)(*(longlong *)(lVar8 + 0x430) + 0xe0);
      lVar8 = local_68[(longlong)iVar3 * 3 + 0x17];
      if ((longlong)(int)lVar8 != 0) {
        lVar4 = local_68[(longlong)iVar3 * 3 + 0x16];
        lVar9 = 0;
        do {
          if (((*(int *)(lVar4 + 8 + lVar9) != 0) &&
              (plVar5 = *(longlong **)(lVar4 + lVar9), plVar5 != (longlong *)0x0)) &&
             (cVar6 = (**(code **)(*plVar5 + 0x20))(plVar5,param_1), cVar6 != '\0'))
          goto LAB_148a2f5de;
          lVar9 = lVar9 + 0x10;
        } while ((longlong)(int)lVar8 * 0x10 != lVar9);
      }
      (**(code **)(*local_68 + 0x90))(local_68,local_a8,iVar3,param_1 + 0x58);
      *(ulonglong *)(param_1 + 0x68) = local_a8[0];
      local_a8[4] = 0;
      local_a8[5] = 0;
      local_a8[2] = 0;
      local_a8[3] = 0;
      local_a8[0] = 0;
      local_a8[1] = 0;
      local_78 = 0;
      (**(code **)(*local_68 + 0x88))(local_68,iVar3,local_a8);
      FUN_1418b4fc2(local_a8);
    }
LAB_148a2f5de:
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_60 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    if (plVar2 != (longlong *)0x0) goto LAB_148a2f621;
  }
  local_a8[0] = local_a8[0] & 0xffffffff00000000;
  FUN_1447cd2ec(param_1 + 0x40);
LAB_148a2f621:
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a2f696 FUN_148a2f696 body=527 status=ok
// SIG undefined FUN_148a2f696(void)

void FUN_148a2f696(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_88 [44];
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  local_54 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_58 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  iVar2 = local_58;
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  uVar5 = local_48;
  uVar4 = local_50;
  uVar3 = local_54;
  iVar1 = local_5c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar6 = FUN_148a2fb47(DAT_14c951640);
  FUN_14485c47a(lVar6 + 0x50,uVar4);
  *(bool *)(lVar6 + 0x8d) = iVar1 != 0;
  *(undefined4 *)(lVar6 + 0x88) = uVar3;
  *(bool *)(lVar6 + 0x8c) = iVar2 != 0;
  *(undefined8 *)(lVar6 + 0x90) = uVar5;
  *param_3 = lVar6;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2f8aa FUN_148a2f8aa body=394 status=ok
// SIG undefined FUN_148a2f8aa(void)

void FUN_148a2f8aa(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148a2deec(&local_40,L"CreateSessionCallback",*(undefined8 *)(param_1 + 0x90),0);
  uVar3 = FUN_14479d2ce(param_1 + 0x50);
  FUN_148a2dfa6(&local_40,uVar3);
  if (local_30 != (longlong *)0x0 && local_40 != 0) {
    (**(code **)(*local_30 + 0x20))(local_30,&local_50);
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x58))(local_50,param_1 + 0x78);
      if (param_3 != '\0') {
        (**(code **)(*local_50 + 0x78))(local_50,&local_58,param_1 + 0x68);
        *(undefined8 *)(param_1 + 0x80) = local_58;
        if (DAT_14c87ead8 == '\0') {
          FUN_140024d3a(&DAT_14c87eb00);
          DAT_14c87ead8 = '\x01';
        }
        (**(code **)(*local_50 + 0x70))(local_50,DAT_14c892fbc);
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
        goto LAB_148a2f9ef;
      }
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
        }
      }
    }
  }
  if (param_3 == '\0') {
    FUN_1447cd2ec(param_1 + 0x40,0);
  }
LAB_148a2f9ef:
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2fa36 FUN_148a2fa36 body=272 status=ok
// SIG undefined FUN_148a2fa36(void)

void FUN_148a2fa36(longlong param_1,undefined8 param_2,byte param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148a2deec(&local_40,L"StartSessionCallback",*(undefined8 *)(param_1 + 0x90),0);
  uVar3 = FUN_14479d2ce(param_1 + 0x50);
  FUN_148a2dfa6(&local_40,uVar3);
  if (local_30 != (longlong *)0x0 && local_40 != 0) {
    (**(code **)(*local_30 + 0x20))(local_30,&local_50);
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x80))(local_50,param_1 + 0x80);
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
        }
      }
    }
  }
  FUN_1447cd2ec((ulonglong)(param_3 ^ 1) * 0x10 + param_1 + 0x30,0);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2fb47 FUN_148a2fb47 body=148 status=ok
// SIG undefined FUN_148a2fb47(void)

undefined8 FUN_148a2fb47(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459979b6();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2fbdc FUN_148a2fbdc body=573 status=ok
// SIG undefined FUN_148a2fbdc(void)

void FUN_148a2fbdc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_168 [32];
  longlong *local_148;
  longlong *local_140;
  longlong local_138;
  longlong *local_130;
  longlong *local_128;
  undefined **local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_148a2deec(&local_138,L"CreateSession",*(undefined8 *)(param_1 + 0x90),0);
  uVar4 = FUN_14479d2ce(param_1 + 0x50);
  FUN_148a2dfa6(&local_138,uVar4);
  if (local_128 != (longlong *)0x0 && local_138 != 0) {
    (**(code **)(*local_128 + 0x20))(local_128,&local_148);
    plVar3 = local_148;
    if (local_148 == (longlong *)0x0) {
      FUN_1415b7ec4(L"Sessions not supported by Online Subsystem",3,0);
    }
    else {
      (**(code **)(*local_148 + 0x50))(local_148,&local_118,param_1 + 0x58);
      *(undefined ***)(param_1 + 0x78) = local_118;
      local_118 = &PTR_FUN_14b4c3b20;
      local_110 = 0;
      uStack_108 = 0;
      local_100 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = FUN_1414a827a();
      local_c0 = 0;
      local_b8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_b4 = 0xffffffff00000080;
      local_ac = 0;
      local_a0 = 0;
      local_98 = 0;
      local_70 = 0;
      local_68 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_64 = 0xffffffff00000080;
      local_5c = 0;
      local_50 = 0;
      local_48 = 0;
      local_110 = CONCAT44(local_110._4_4_,*(undefined4 *)(param_1 + 0x88));
      uStack_108._0_3_ = CONCAT12(*(undefined1 *)(param_1 + 0x8c),0x101);
      uStack_108 = CONCAT26(0x101,(undefined6)uStack_108);
      local_100._0_3_ = CONCAT12(*(undefined1 *)(param_1 + 0x8d),(undefined2)local_100);
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      (**(code **)(*local_148 + 0x40))(local_148,local_138,DAT_14c892fbc,&local_118);
      FUN_14124f074(&local_118);
    }
    if (local_140 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_140 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar2 = (int *)((longlong)local_140 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_140 + 0x10))(local_140);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) goto LAB_148a2fdae;
  }
  FUN_1447cd2ec(param_1 + 0x40,0);
LAB_148a2fdae:
  if (local_130 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_130 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar2 = (int *)((longlong)local_130 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_130 + 0x10))(local_130);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2fe1a FUN_148a2fe1a body=264 status=ok
// SIG undefined FUN_148a2fe1a(void)

void FUN_148a2fe1a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  uVar2 = local_30;
  uVar1 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = FUN_148a30031(DAT_14c951640);
  FUN_14485c47a(lVar3 + 0x50,uVar1);
  *(undefined8 *)(lVar3 + 0x70) = uVar2;
  *param_3 = lVar3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2ff26 FUN_148a2ff26 body=266 status=ok
// SIG undefined FUN_148a2ff26(void)

void FUN_148a2ff26(longlong param_1,undefined8 param_2,byte param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148a2deec(&local_40,L"DestroySessionCallback",*(undefined8 *)(param_1 + 0x70),0);
  uVar3 = FUN_14479d2ce(param_1 + 0x50);
  FUN_148a2dfa6(&local_40,uVar3);
  if (local_30 != (longlong *)0x0 && local_40 != 0) {
    (**(code **)(*local_30 + 0x20))(local_30,&local_50);
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0xf8))(local_50,param_1 + 0x68);
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
        }
      }
    }
  }
  FUN_1447cd2ec((ulonglong)(param_3 ^ 1) * 0x10 + param_1 + 0x30,0);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a30031 FUN_148a30031 body=148 status=ok
// SIG undefined FUN_148a30031(void)

undefined8 FUN_148a30031(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145997aa2();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a300c6 FUN_148a300c6 body=384 status=ok
// SIG undefined FUN_148a300c6(void)

void FUN_148a300c6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_148a2deec(&local_48,L"DestroySession",*(undefined8 *)(param_1 + 0x70),0);
  uVar4 = FUN_14479d2ce(param_1 + 0x50);
  FUN_148a2dfa6(&local_48,uVar4);
  if (local_38 != (longlong *)0x0 && local_48 != 0) {
    (**(code **)(*local_38 + 0x20))(local_38,&local_58);
    plVar3 = local_58;
    if (local_58 == (longlong *)0x0) {
      FUN_1415b7ec4(L"Sessions not supported by Online Subsystem",3,0);
    }
    else {
      (**(code **)(*local_58 + 0xf0))(local_58,&local_68,param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x68) = local_68;
      local_68 = 0;
      uStack_60 = 0;
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      (**(code **)(*local_58 + 0xe8))(local_58,DAT_14c892fbc,&local_68);
      FUN_1449db362(&local_68);
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
    if (plVar3 != (longlong *)0x0) goto LAB_148a301e9;
  }
  FUN_1447cd2ec(param_1 + 0x40,0);
LAB_148a301e9:
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
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a30248 FUN_148a30248 body=654 status=ok
// SIG undefined FUN_148a30248(void)

void FUN_148a30248(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  void *_Src;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  uint local_88;
  void *local_80;
  int local_78;
  undefined4 local_74;
  byte local_6a;
  undefined1 local_69;
  void *local_68;
  ulonglong uStack_60;
  longlong local_58 [5];
  
  local_58[4] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58[3] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 3);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 3);
  }
  local_58[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_140be4ae0();
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
  local_69 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_69);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_69);
  }
  local_6a = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6a);
  }
  _Src = local_68;
  uVar2 = local_69;
  bVar1 = local_6a;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = (void *)0x0;
  lVar4 = (longlong)(int)uStack_60;
  local_78 = (int)uStack_60;
  if (lVar4 == 0) {
    local_74 = 0;
  }
  else {
    FUN_1446dd670(&local_80,uStack_60 & 0xffffffff,0);
    memcpy(local_80,_Src,lVar4 * 2);
  }
  if ((local_58[0] != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_88 = (uint)bVar1;
  uVar3 = FUN_148a304d8(local_58[3],local_58[2],&local_80,uVar2);
  *param_3 = uVar3;
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_58[4] ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a304d8 FUN_148a304d8 body=123 status=ok
// SIG undefined FUN_148a304d8(void)

longlong FUN_148a304d8(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                      undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_148a30556(DAT_14c951640);
  FUN_14485c47a(lVar2 + 0x50,param_2);
  *(undefined8 *)(lVar2 + 0x58) = param_1;
  iVar1 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(lVar2 + 0x68,*param_3,iVar1);
  *(undefined4 *)(lVar2 + 0x78) = param_4;
  *(undefined4 *)(lVar2 + 0x7c) = param_5;
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  return lVar2;
}



// FUNCTION 148a30556 FUN_148a30556 body=148 status=ok
// SIG undefined FUN_148a30556(void)

undefined8 FUN_148a30556(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145997b8e();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a305ec FUN_148a305ec body=759 status=ok
// SIG undefined FUN_148a305ec(void)

void FUN_148a305ec(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *_Src;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 *local_90;
  undefined4 local_88;
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_148a2deec(&local_50,L"EndMatch",*(undefined8 *)(param_1 + 0x58),0);
  uVar6 = FUN_14479d2ce(param_1 + 0x50);
  FUN_148a2dfa6(&local_50,uVar6);
  if (local_40 != (longlong *)0x0 && local_50 != 0) {
    (**(code **)(*local_40 + 0x100))(local_40,&local_60);
    if (local_60 == (longlong *)0x0) {
      FUN_1415b7ec4(L"Turn based games not supported by online subsystem",3,0);
    }
    else {
      local_80 = (void *)0x0;
      local_78 = *(int *)(param_1 + 0x70);
      lVar8 = (longlong)local_78;
      _Src = *(void **)(param_1 + 0x68);
      if (lVar8 == 0) {
        local_74 = 0;
      }
      else {
        FUN_1446dd670(&local_80,local_78,0);
        memcpy(local_80,_Src,lVar8 * 2);
      }
      (**(code **)(*local_60 + 0x38))(local_60,&local_70,&local_80);
      if (local_70 != (longlong *)0x0) {
        local_90 = (undefined8 *)0x0;
        local_88 = 0;
        FUN_1446efa72(&local_90,0,3,0x10);
        puVar5 = local_90;
        local_88 = 3;
        *local_90 = &PTR_LAB_14b4c3ca0;
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 1;
        lVar8 = DAT_14c758608 + 1;
        if (lVar7 == 0) {
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 2;
          lVar8 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar8;
        local_90[2] = lVar7;
        *local_90 = &PTR_FUN_14b4c2230;
        local_90[3] = 0;
        FUN_14485c47a(local_90 + 3,param_1);
        puVar5[4] = FUN_148a308e4;
        uVar3 = *(undefined4 *)(param_1 + 0x78);
        uVar4 = *(undefined4 *)(param_1 + 0x7c);
        local_a0 = 0;
        local_98 = 0;
        FUN_148a41d1a(&local_a0,&local_90);
        (**(code **)(*local_70 + 0x68))(local_70,&local_a0,uVar3,uVar4);
        FUN_1449db362(&local_90);
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_68 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar2 = (int *)((longlong)local_68 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_68 + 0x10))(local_68);
            }
          }
        }
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_58 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
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
        goto LAB_148a30747;
      }
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_68 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar2 = (int *)((longlong)local_68 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_68 + 0x10))(local_68);
          }
        }
      }
    }
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
  }
  FUN_1447cd2ec(param_1 + 0x40,0);
LAB_148a30747:
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
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a308e4 FUN_148a308e4 body=58 status=ok
// SIG undefined FUN_148a308e4(void)

void FUN_148a308e4(longlong param_1,longlong *param_2,byte param_3)

{
  FUN_1447cd2ec(param_1 + (ulonglong)(param_3 ^ 1) * 0x10 + 0x30,0);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a3091e FUN_148a3091e body=517 status=ok
// SIG undefined FUN_148a3091e(void)

void FUN_148a3091e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
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
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_58;
  if ((local_58 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  _Src = local_48;
  local_60 = uStack_50;
  local_78 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_40;
  local_70 = (int)uStack_40;
  if (lVar2 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,uStack_40 & 0xffffffff,0);
    memcpy(local_78,_Src,lVar2 * 2);
  }
  uVar1 = FUN_148a30b24(local_30,local_38,&local_78,&local_68);
  *param_3 = uVar1;
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a30b24 FUN_148a30b24 body=115 status=ok
// SIG undefined FUN_148a30b24(void)

longlong FUN_148a30b24(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_148a30b9a(DAT_14c951640);
  FUN_14485c47a(lVar2 + 0x50,param_2);
  *(undefined8 *)(lVar2 + 0x58) = param_1;
  iVar1 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(lVar2 + 0x60,*param_3,iVar1);
  *(undefined8 *)(lVar2 + 0x70) = *param_4;
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  return lVar2;
}



// FUNCTION 148a30b9a FUN_148a30b9a body=148 status=ok
// SIG undefined FUN_148a30b9a(void)

undefined8 FUN_148a30b9a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145997c7a();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a30c30 FUN_148a30c30 body=914 status=ok
// SIG undefined FUN_148a30c30(void)

void FUN_148a30c30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void *_Src;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined1 auStack_198 [40];
  undefined2 *local_170;
  int local_168;
  undefined8 local_160;
  undefined4 local_158;
  void *local_150;
  int local_148;
  undefined4 local_144;
  longlong *local_140;
  longlong *local_138;
  undefined8 *local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined1 local_120 [144];
  undefined1 local_90 [40];
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_148a2deec(&local_58,L"EndTurn",*(undefined8 *)(param_1 + 0x58),0);
  uVar7 = FUN_14479d2ce(param_1 + 0x50);
  FUN_148a2dfa6(&local_58,uVar7);
  if (local_48 != (longlong *)0x0 && local_58 != 0) {
    (**(code **)(*local_48 + 0x100))(local_48,&local_68);
    plVar3 = local_68;
    if (local_68 == (longlong *)0x0) {
      pwVar9 = L"Turn based games not supported by online subsystem";
LAB_148a30ebd:
      FUN_1415b7ec4(pwVar9,3,0);
    }
    else {
      if (*(longlong *)(param_1 + 0x70) == 0) {
        pwVar9 = L"No match data passed in to End Turn.";
        goto LAB_148a30ebd;
      }
      iVar6 = (**(code **)(*local_68 + 0x58))(local_68);
      FUN_1447400e4(local_120,(longlong)iVar6,0);
      FUN_140b976f4(&local_130,*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x10),0,0);
      FUN_147ce0efe(local_130,*(undefined8 *)(param_1 + 0x70),local_120);
      plVar4 = (longlong *)CONCAT44(uStack_124,local_128);
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
      local_130 = (undefined8 *)0x0;
      local_128 = 0;
      FUN_1446efa72(&local_130,0,3,0x10);
      puVar5 = local_130;
      local_128 = 3;
      *local_130 = &PTR_LAB_14b4c3ca0;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar11 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar11 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar11;
      local_130[2] = lVar8;
      *local_130 = &PTR_FUN_14b4c22a0;
      local_130[3] = 0;
      FUN_14485c47a(local_130 + 3,param_1);
      puVar5[4] = FUN_148a30fc4;
      local_150 = (void *)0x0;
      local_148 = *(int *)(param_1 + 0x68);
      lVar11 = (longlong)local_148;
      _Src = *(void **)(param_1 + 0x60);
      if (lVar11 == 0) {
        local_144 = 0;
      }
      else {
        FUN_1446dd670(&local_150,local_148,0);
        memcpy(local_150,_Src,lVar11 * 2);
      }
      (**(code **)(*local_68 + 0x38))(local_68,&local_140,&local_150);
      if (local_140 == (longlong *)0x0) {
        puVar10 = &DAT_149dfb77a;
        if (*(int *)(param_1 + 0x68) != 0) {
          puVar10 = *(undefined2 **)(param_1 + 0x60);
        }
        FUN_140002266(&local_170,L"Match ID %s not found",puVar10);
        puVar10 = &DAT_149dfb77a;
        if (local_168 != 0) {
          puVar10 = local_170;
        }
        FUN_1415b7ec4(puVar10,3,0);
        if (local_170 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        local_160 = 0;
        local_158 = 0;
        FUN_148a41d1a(&local_160,&local_130);
        (**(code **)(*local_140 + 0x58))(local_140,local_90,0,&local_160);
      }
      if (local_138 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_138 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_138)(local_138);
          LOCK();
          piVar2 = (int *)((longlong)local_138 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_138 + 0x10))(local_138);
          }
        }
      }
      FUN_1449db362(&local_130);
      FUN_144a8b786(local_120);
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_60 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    if (plVar3 != (longlong *)0x0) goto LAB_148a30f04;
  }
  FUN_1447cd2ec(param_1 + 0x40,0);
LAB_148a30f04:
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a30fc4 FUN_148a30fc4 body=58 status=ok
// SIG undefined FUN_148a30fc4(void)

void FUN_148a30fc4(longlong param_1,longlong *param_2,byte param_3)

{
  FUN_1447cd2ec(param_1 + (ulonglong)(param_3 ^ 1) * 0x10 + 0x30,0);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a30ffe FUN_148a30ffe body=107 status=ok
// SIG undefined FUN_148a30ffe(void)

void FUN_148a30ffe(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_148a3106a(&local_28);
  FUN_1447cd2ec(param_1,&local_28);
  FUN_148a420bb(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3106a FUN_148a3106a body=95 status=ok
// SIG undefined FUN_148a3106a(void)

undefined8 * FUN_148a3106a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148a420bb(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148a420e4(param_1,iVar1);
      FUN_148a42157(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148a310d6 FUN_148a310d6 body=527 status=ok
// SIG undefined FUN_148a310d6(void)

void FUN_148a310d6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_88 [44];
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  local_54 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_58 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  iVar2 = local_58;
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  uVar5 = local_48;
  uVar4 = local_50;
  uVar3 = local_54;
  iVar1 = local_5c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar6 = FUN_148a31cc1(DAT_14c951640);
  FUN_14485c47a(lVar6 + 0x50,uVar4);
  *(bool *)(lVar6 + 0x81) = iVar1 != 0;
  *(bool *)(lVar6 + 0x80) = iVar2 != 0;
  *(undefined4 *)(lVar6 + 0x84) = uVar3;
  *(undefined8 *)(lVar6 + 0x88) = uVar5;
  *param_3 = lVar6;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a312e6 FUN_148a312e6 body=402 status=ok
// SIG undefined FUN_148a312e6(void)

void FUN_148a312e6(undefined8 param_1,longlong param_2,int *param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_178 [40];
  undefined **local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined **local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_150 = &PTR_FUN_14b4c3b18;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = &PTR_FUN_14b4c3b20;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = FUN_1414a827a();
  local_d0 = 0;
  local_c8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_c4 = 0xffffffff00000080;
  local_bc = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_80 = 0;
  local_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_74 = 0xffffffff00000080;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 9999;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_150);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_150);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar1 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar1 = &local_150;
  }
  *param_3 = *(int *)(pppuVar1 + 6) - *(int *)((longlong)pppuVar1 + 0x114);
  FUN_14124efea();
  if ((local_30 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3147a FUN_148a3147a body=396 status=ok
// SIG undefined FUN_148a3147a(void)

void FUN_148a3147a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_178 [40];
  undefined **local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined **local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_150 = &PTR_FUN_14b4c3b18;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = &PTR_FUN_14b4c3b20;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = FUN_1414a827a();
  local_d0 = 0;
  local_c8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_c4 = 0xffffffff00000080;
  local_bc = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_80 = 0;
  local_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_74 = 0xffffffff00000080;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 9999;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_150);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_150);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar1 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar1 = &local_150;
  }
  *param_3 = *(undefined4 *)(pppuVar1 + 6);
  FUN_14124efea();
  if ((local_30 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a31608 FUN_148a31608 body=399 status=ok
// SIG undefined FUN_148a31608(void)

void FUN_148a31608(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_178 [40];
  undefined **local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined **local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_150 = &PTR_FUN_14b4c3b18;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = &PTR_FUN_14b4c3b20;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = FUN_1414a827a();
  local_d0 = 0;
  local_c8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_c4 = 0xffffffff00000080;
  local_bc = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_80 = 0;
  local_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_74 = 0xffffffff00000080;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 9999;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_150);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_150);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar1 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar1 = &local_150;
  }
  *param_3 = *(undefined4 *)(pppuVar1 + 0x23);
  FUN_14124efea();
  if ((local_30 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a31798 FUN_148a31798 body=563 status=ok
// SIG undefined FUN_148a31798(void)

void FUN_148a31798(undefined8 param_1,longlong param_2,void **param_3)

{
  undefined **_Src;
  undefined ***pppuVar1;
  longlong lVar2;
  undefined1 auStack_198 [40];
  void *local_170;
  int local_168;
  undefined4 local_164;
  undefined **local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_160 = &PTR_FUN_14b4c3b18;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = &PTR_FUN_14b4c3b20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = FUN_1414a827a();
  local_e0 = 0;
  local_d8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_d4 = 0xffffffff00000080;
  local_cc = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 9999;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_160);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_160);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar1 = &local_160;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar1 = *(undefined ****)(param_2 + 0x38);
  }
  local_170 = (void *)0x0;
  local_168 = *(int *)(pppuVar1 + 4);
  lVar2 = (longlong)local_168;
  _Src = pppuVar1[3];
  if (lVar2 == 0) {
    local_164 = 0;
  }
  else {
    FUN_1446dd670(&local_170,local_168,0);
    memcpy(local_170,_Src,lVar2 * 2);
  }
  if (&local_170 == param_3) {
    if (local_170 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != (void *)0x0) {
      FUN_1400020a8();
    }
    *param_3 = local_170;
    local_170 = (void *)0x0;
    *(int *)(param_3 + 1) = local_168;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_164;
  }
  FUN_14124efea(&local_160);
  if ((local_40 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a319d0 FUN_148a319d0 body=752 status=ok
// SIG undefined FUN_148a319d0(void)

void FUN_148a319d0(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_1e8 [40];
  longlong local_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a0;
  longlong *local_198;
  longlong *local_190;
  undefined **local_180;
  longlong *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined **local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  FUN_148a2deec(&local_1a0,L"FindSessionsCallback",*(undefined8 *)(param_1 + 0x88),0);
  uVar7 = FUN_14479d2ce(param_1 + 0x50);
  FUN_148a2dfa6(&local_1a0,uVar7);
  if (local_190 != (longlong *)0x0 && local_1a0 != 0) {
    (**(code **)(*local_190 + 0x20))(local_190,&local_180);
    if (local_180 != (undefined **)0x0) {
      (**(code **)(*local_180 + 400))(local_180,param_1 + 0x68);
    }
    plVar3 = local_178;
    if (local_178 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_178 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_178)(local_178);
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
  local_1b8 = 0;
  uStack_1b0 = 0;
  lVar8 = 0x40;
  if ((param_2 != '\0') && (lVar9 = *(longlong *)(param_1 + 0x70), lVar9 != 0)) {
    lVar8 = 0x30;
    if ((longlong)*(int *)(lVar9 + 0x10) != 0) {
      lVar8 = *(longlong *)(lVar9 + 8);
      lVar9 = (longlong)*(int *)(lVar9 + 0x10) * 0x120 + lVar8;
      local_1c0 = param_1;
      do {
        local_180 = &PTR_FUN_14b4c3b18;
        local_168 = 0;
        uStack_160 = 0;
        local_178 = (longlong *)0x0;
        uStack_170 = 0;
        local_158 = &PTR_FUN_14b4c3b20;
        local_140 = 0;
        local_150 = 0;
        uStack_148 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_128 = FUN_1414a827a();
        local_100 = 0;
        local_f8 = 0;
        local_120 = 0;
        uStack_118 = 0;
        local_f4 = 0xffffffff00000080;
        local_ec = 0;
        local_e0 = 0;
        local_d8 = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_d0 = 0;
        uStack_c8 = 0;
        local_a4 = 0xffffffff00000080;
        local_9c = 0;
        local_90 = 0;
        local_88 = 0;
        local_70 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_68 = 9999;
        FUN_1461f4a06(&local_180,lVar8);
        uVar5 = uStack_1b0;
        local_68 = *(undefined4 *)(lVar8 + 0x118);
        lVar10 = (longlong)(int)uStack_1b0;
        uVar6 = (int)uStack_1b0 + 1;
        uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uVar6);
        if (uStack_1b0._4_4_ < uVar6) {
          FUN_148a42458(&local_1b8,uVar5 & 0xffffffff);
        }
        lVar4 = local_1b8;
        FUN_14589e2aa(local_1b8 + lVar10 * 0x120,&local_180);
        *(undefined4 *)(lVar4 + 0x118 + lVar10 * 0x120) = local_68;
        FUN_14124efea(&local_180);
        lVar8 = lVar8 + 0x120;
      } while (lVar8 != lVar9);
      lVar8 = 0x30;
      param_1 = local_1c0;
    }
  }
  FUN_148a30ffe(param_1 + lVar8,&local_1b8);
  FUN_148a420bb(local_1b8,uStack_1b0 & 0xffffffff);
  if (local_1b8 != 0) {
    FUN_1400020a8();
  }
  if (local_198 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_198 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_198)(local_198);
      LOCK();
      piVar2 = (int *)((longlong)local_198 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_198 + 0x10))(local_198);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a31cc1 FUN_148a31cc1 body=148 status=ok
// SIG undefined FUN_148a31cc1(void)

undefined8 FUN_148a31cc1(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145997d66();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a31d56 FUN_148a31d56 body=826 status=ok
// SIG undefined FUN_148a31d56(void)

void FUN_148a31d56(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_148a2deec(&local_50,L"FindSessions",*(undefined8 *)(param_1 + 0x88),0);
  uVar6 = FUN_14479d2ce(param_1 + 0x50);
  FUN_148a2dfa6(&local_50,uVar6);
  if ((local_50 != 0) && (local_40 != (longlong *)0x0)) {
    (**(code **)(*local_40 + 0x20))(local_40,&local_68);
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      FUN_1415b7ec4(L"Sessions not supported by Online Subsystem",3,0);
    }
    else {
      (**(code **)(*local_68 + 0x188))(local_68,&local_80,param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x68) = local_80;
      puVar7 = (undefined8 *)FUN_14001cc68(0x88,0x10);
      *puVar7 = &PTR_FUN_14b4c3a80;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0x100000000;
      puVar7[4] = &PTR_FUN_14b4c3a98;
      puVar7[9] = 0;
      *(undefined4 *)(puVar7 + 10) = 0;
      puVar7[5] = 0;
      puVar7[6] = 0;
      *(undefined8 *)((longlong)puVar7 + 0x54) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar7 + 0x5c) = 0;
      puVar7[0xd] = 0;
      *(undefined4 *)(puVar7 + 0xe) = 0;
      *(undefined1 *)(puVar7 + 0xf) = 0;
      *(undefined8 *)((longlong)puVar7 + 0x7c) = 0;
      *(undefined4 *)((longlong)puVar7 + 0x84) = 0;
      plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar8[1] = (longlong)&DAT_100000001;
      *plVar8 = (longlong)&PTR_FUN_14b4c3ac0;
      plVar8[2] = (longlong)puVar7;
      *(undefined8 **)(param_1 + 0x70) = puVar7;
      plVar4 = *(longlong **)(param_1 + 0x78);
      if (plVar8 == plVar4) {
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar8 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar3 = *piVar1;
            UNLOCK();
            plVar4 = plVar8;
            goto joined_r0x000148a31f7f;
          }
        }
      }
      else {
        *(longlong **)(param_1 + 0x78) = plVar8;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar4 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar3 = *piVar1;
            UNLOCK();
joined_r0x000148a31f7f:
            if (iVar3 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x1c) = *(undefined4 *)(param_1 + 0x84);
      *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x78) = *(undefined1 *)(param_1 + 0x80);
      if (*(char *)(param_1 + 0x81) == '\x01') {
        lVar5 = *(longlong *)(param_1 + 0x70);
        local_80 = CONCAT71(local_80._1_7_,1);
        FUN_1446f470e(&local_70,L"LOBBYSEARCH",1);
        FUN_1489b84d8(lVar5 + 0x20,local_70,&local_80,0);
      }
      local_80 = *(undefined8 *)(param_1 + 0x70);
      local_78 = *(longlong **)(param_1 + 0x78);
      if (local_78 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_78 + 1) = (int)local_78[1] + 1;
        UNLOCK();
      }
      (**(code **)(*local_68 + 0x178))(local_68,local_50,&local_80);
      plVar4 = local_78;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_78 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_78)(local_78);
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
    plVar4 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_60 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (plVar2 != (longlong *)0x0) goto LAB_148a31f16;
  }
  local_68 = (longlong *)0x0;
  plStack_60 = (longlong *)0x0;
  FUN_148a30ffe(param_1 + 0x40,&local_68);
  FUN_148a420bb(local_68,(ulonglong)plStack_60 & 0xffffffff);
  if (local_68 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_148a31f16:
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_48 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a32091 FUN_148a32091 body=96 status=ok
// SIG undefined FUN_148a32091(void)

void FUN_148a32091(undefined8 param_1)

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



// FUNCTION 148a320f8 FUN_148a320f8 body=706 status=ok
// SIG undefined FUN_148a320f8(void)

void FUN_148a320f8(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68 [5];
  
  local_68[4] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68[3] = 0;
  local_80 = param_3;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 3);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 3);
  }
  local_68[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 2);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  local_6c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  local_70 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  local_78 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  lVar5 = local_68[0];
  uVar4 = local_6c;
  uVar3 = local_70;
  uVar2 = local_74;
  iVar1 = local_78;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_68[0] != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(local_68[0]);
  }
  lVar7 = local_68[3];
  lVar6 = local_68[2];
  lVar8 = FUN_148a323be(DAT_14c951640);
  FUN_14485c47a(lVar8 + 0x50,lVar6);
  *(longlong *)(lVar8 + 0x58) = lVar7;
  *(undefined4 *)(lVar8 + 0x68) = uVar4;
  *(undefined4 *)(lVar8 + 0x6c) = uVar3;
  *(undefined4 *)(lVar8 + 0x70) = uVar2;
  *(bool *)(lVar8 + 0x74) = iVar1 != 0;
  *(longlong *)(lVar8 + 0x60) = lVar5;
  *local_80 = lVar8;
  if ((local_68[4] ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a323be FUN_148a323be body=148 status=ok
// SIG undefined FUN_148a323be(void)

undefined8 FUN_148a323be(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145997e52();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a32454 FUN_148a32454 body=446 status=ok
// SIG undefined FUN_148a32454(void)

void FUN_148a32454(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [32];
  longlong local_98 [3];
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_148a2deec(&local_40,L"FindTurnBasedMatch",*(undefined8 *)(param_1 + 0x58),0);
  uVar4 = FUN_14479d2ce(param_1 + 0x50);
  FUN_148a2dfa6(&local_40,uVar4);
  if ((local_40 != 0) && (local_30 != (longlong *)0x0)) {
    (**(code **)(*local_30 + 0x100))(local_30,&local_50);
    plVar3 = local_50;
    if (local_50 == (longlong *)0x0) {
      FUN_1415b7ec4(L"Turn based games not supported by online subsystem",3,0);
    }
    else {
      *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x18) = param_1;
      uVar4 = *(undefined8 *)(param_1 + 0x78);
      local_60 = local_50;
      local_58 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_48 + 1) = (int)local_48[1] + 1;
        UNLOCK();
      }
      FUN_148a32614(uVar4,&local_60);
      local_70 = *(undefined8 *)(param_1 + 0x78);
      local_68 = *(longlong *)(param_1 + 0x80);
      if (local_68 != 0) {
        LOCK();
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*local_50 + 8))(local_50,&local_70);
      local_74 = *(undefined1 *)(param_1 + 0x74);
      local_78 = *(undefined4 *)(param_1 + 0x70);
      local_80 = *(undefined8 *)(param_1 + 0x68);
      (**(code **)(*local_50 + 0x10))();
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
        }
      }
    }
    if (plVar3 != (longlong *)0x0) goto LAB_148a32517;
  }
  local_98[0] = 0;
  local_98[1] = 0;
  FUN_148a32091(param_1 + 0x40,local_98);
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
LAB_148a32517:
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a32614 FUN_148a32614 body=124 status=ok
// SIG undefined FUN_148a32614(void)

void FUN_148a32614(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(longlong *)(param_1 + 0x28) = lVar4;
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
                    /* WARNING: Could not recover jumptable at 0x000148a32684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148a32690 FUN_148a32690 body=95 status=ok
// SIG undefined FUN_148a32690(void)

void FUN_148a32690(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    local_28[0] = 0;
    local_28[1] = 0;
    FUN_148a32091(*(longlong *)(param_1 + 0x18) + 0x40,local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a326f0 FUN_148a326f0 body=95 status=ok
// SIG undefined FUN_148a326f0(void)

void FUN_148a326f0(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    local_28[0] = 0;
    local_28[1] = 0;
    FUN_148a32091(*(longlong *)(param_1 + 0x18) + 0x40,local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a32750 FUN_148a32750 body=117 status=ok
// SIG undefined FUN_148a32750(void)

void FUN_148a32750(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  local_30[0] = param_2;
  FUN_148a327c6(&local_28,param_3);
  FUN_1447cd2ec(param_1,local_30);
  FUN_145c0f8b8(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a327c6 FUN_148a327c6 body=95 status=ok
// SIG undefined FUN_148a327c6(void)

undefined8 * FUN_148a327c6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145c0f8b8(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148a424ec(param_1,iVar1);
      FUN_148a4254e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148a32826 FUN_148a32826 body=306 status=ok
// SIG undefined FUN_148a32826(void)

void FUN_148a32826(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined1 local_48;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  uVar1 = local_38;
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_148a33a35(DAT_14c951640);
  FUN_144757f48(uVar2,0x1000000);
  FUN_148a32ae0(uVar2,uVar1,plVar3);
  *param_3 = uVar2;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3295a FUN_148a3295a body=192 status=ok
// SIG undefined FUN_148a3295a(void)

void FUN_148a3295a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  uVar1 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_148a33a35(DAT_14c951640);
  FUN_144757f48(uVar2,0x1000000);
  FUN_148a3347c(uVar2,uVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a32a1c FUN_148a32a1c body=192 status=ok
// SIG undefined FUN_148a32a1c(void)

void FUN_148a32a1c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  uVar1 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_148a33a35(DAT_14c951640);
  FUN_144757f48(uVar2,0x1000000);
  FUN_148a33146(uVar2,uVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a32ae0 FUN_148a32ae0 body=1024 status=ok
// SIG undefined FUN_148a32ae0(void)

void FUN_148a32ae0(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 uVar3;
  longlong *plVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined **local_d8 [3];
  byte local_c0;
  longlong local_b8;
  undefined8 *local_a8;
  longlong *plStack_a0;
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
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined1 *)(param_1 + 0x60) = 1;
  *(undefined8 *)(param_1 + 100) = 0;
  if (param_2 == 0) goto LAB_148a32c43;
  uVar10 = FUN_1447210f0(param_2);
  FUN_14485c47a(param_1 + 100,uVar10);
  if (*(longlong *)(param_2 + 0x398) == 0) {
    pwVar13 = L"UInAppPurchaseCallbackProxy::Trigger - Invalid player state";
LAB_148a32c2b:
    FUN_1415b7ec4(pwVar13,3,0);
  }
  else {
    local_a8 = (undefined8 *)0x0;
    cVar8 = FUN_140a68212(&local_a8);
    if (cVar8 == '\0') {
LAB_148a32c24:
      pwVar13 = L"UInAppPurchaseCallbackProxy::Trigger - Invalid or uninitialized OnlineSubsystem";
      goto LAB_148a32c2b;
    }
    local_d8[0] = (undefined **)0x0;
    plVar11 = (longlong *)FUN_1401e3228();
    if (plVar11 == (longlong *)0x0) goto LAB_148a32c24;
    (**(code **)(*plVar11 + 0x98))(plVar11,&local_a8);
    plVar11 = plStack_a0;
    if ((undefined8 **)(param_1 + 0x90) != &local_a8) {
      *(undefined8 **)(param_1 + 0x90) = local_a8;
      local_a8 = (undefined8 *)0x0;
      plVar4 = *(longlong **)(param_1 + 0x98);
      if (plStack_a0 != plVar4) {
        plStack_a0 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x98) = plVar11;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar4 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
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
    plVar11 = plStack_a0;
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      plVar4 = plStack_a0 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plStack_a0)(plStack_a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    if (*(undefined8 **)(param_1 + 0x90) == (undefined8 *)0x0) {
      pwVar13 = 
      L"UInAppPurchaseCallbackProxy::Trigger - In-App Purchases are not supported by Online Subsystem"
      ;
      goto LAB_148a32c2b;
    }
    *(undefined1 *)(param_1 + 0x60) = 0;
    local_a8 = (undefined8 *)0x0;
    plStack_a0 = (longlong *)((ulonglong)plStack_a0 & 0xffffffff00000000);
    FUN_1446efa72(&local_a8,0,3,0x10);
    puVar6 = local_a8;
    plStack_a0 = (longlong *)CONCAT44(plStack_a0._4_4_,3);
    *local_a8 = &PTR_LAB_14b438ec0;
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 1;
    lVar12 = DAT_14c758608 + 1;
    if (lVar14 == 0) {
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 2;
      lVar12 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar12;
    local_a8[2] = lVar14;
    *local_a8 = &PTR_FUN_14b4c23a0;
    local_a8[3] = 0;
    FUN_14485c47a(local_a8 + 3,param_1);
    puVar6[4] = FUN_148a32ee2;
    FUN_144a450dc(param_1 + 0x48,&local_a8);
    FUN_1449db362(&local_a8);
    local_98 = 0;
    local_68 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_a8 = (undefined8 *)0x0;
    plStack_a0 = (longlong *)0x0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0xffffffff00000000;
    uStack_60 = 0x8000000000;
    local_58 = 0xffffffff;
    uVar3 = *(undefined1 *)(param_3 + 0x10);
    FUN_1400b22c2(local_d8,&DAT_149e02088);
    local_e8 = uVar3;
    FUN_1489b9b62(&local_a8,local_d8,param_3,1);
    if (local_d8[0] != (undefined **)0x0) {
      FUN_1400020a8();
    }
    uVar10 = FUN_144a7ba4c(param_2);
    FUN_147ba2c90(uVar10);
    lVar12 = FUN_14127b0d4(local_d8);
    plVar11 = *(longlong **)(lVar12 + 0x10);
    bVar5 = true;
    if (plVar11 == (longlong *)0x0) {
LAB_148a32dc4:
      uVar10 = 0;
      plVar11 = (longlong *)0x0;
    }
    else {
      iVar9 = (int)plVar11[1];
      do {
        if (iVar9 == 0) goto LAB_148a32dc4;
        LOCK();
        iVar7 = (int)plVar11[1];
        bVar15 = iVar9 == iVar7;
        if (bVar15) {
          *(int *)(plVar11 + 1) = iVar9 + 1;
          iVar7 = iVar9;
        }
        iVar9 = iVar7;
        UNLOCK();
      } while (!bVar15);
      uVar10 = *(undefined8 *)(lVar12 + 8);
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      bVar5 = false;
    }
    *(undefined8 *)(param_1 + 0x80) = uVar10;
    plVar4 = *(longlong **)(param_1 + 0x88);
    if (plVar11 == plVar4) {
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar11 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar9 = *piVar1;
          UNLOCK();
          plVar4 = plVar11;
joined_r0x000148a32e3b:
          if (iVar9 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
    else {
      *(longlong **)(param_1 + 0x88) = plVar11;
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
          iVar9 = *piVar1;
          UNLOCK();
          goto joined_r0x000148a32e3b;
        }
      }
    }
    if (!bVar5) {
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
    local_d8[0] = &PTR_FUN_14a5af930;
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    local_d8[0] = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_c0])();
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x18))
              (*(longlong **)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x80),&local_a8,
               param_1 + 0x48);
    FUN_1489b9c56(&local_a8);
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
    FUN_143ecec66(param_1);
  }
LAB_148a32c43:
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a32ee2 FUN_148a32ee2 body=610 status=ok
// SIG undefined FUN_148a32ee2(void)

void FUN_148a32ee2(longlong param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  bVar1 = param_2[0x38];
  bVar2 = *param_2;
  uVar7 = FUN_148a33824(param_2);
  *(undefined1 *)(param_1 + 0xa0) = uVar7;
  if (((bVar1 == 0 | bVar2) == 1) &&
     (plVar4 = *(longlong **)(param_1 + 0x90), plVar4 != (longlong *)0x0)) {
    if (*(longlong *)(param_1 + 0x80) == 0) {
      FUN_1415b7ec4(L"UInAppPurchaseCallbackProxy::OnCheckoutComplete - Invalid or uninitialized PurchasingPlayer"
                    ,3,0);
    }
    else {
      (**(code **)(*plVar4 + 0x40))(plVar4,*(longlong *)(param_1 + 0x80),&local_58);
      lVar6 = local_58;
      lVar8 = (longlong)(int)uStack_50;
      if (lVar8 != 0) {
        lVar10 = 0;
        do {
          if ((*(byte *)(lVar6 + 0x18 + lVar10) | 4) == 6) {
            FUN_1415b7ec4(L"UInAppPurchaseCallbackProxy::OnCheckoutComplete - FinalizingPurchase",3,
                          0);
            (**(code **)(**(longlong **)(param_1 + 0x90) + 0x28))
                      (*(longlong **)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x80));
            *(undefined1 *)(param_1 + 0x6c) = 1;
          }
          lVar10 = lVar10 + 0x30;
        } while (lVar8 * 0x30 != lVar10);
      }
    }
  }
  FUN_1415b7ec4(L"UInAppPurchaseCallbackProxy::OnCheckoutComplete - Emptying savedreceipts",3,0);
  FUN_145c0f8b8(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_148a42c0a(param_1 + 0x70);
  }
  FUN_1415b7ec4(L"UInAppPurchaseCallbackProxy::OnCheckoutComplete - Iterating OutReceipts",3,0);
  lVar6 = local_58;
  lVar8 = (longlong)(int)uStack_50;
  if (lVar8 != 0) {
    lVar10 = 0;
    do {
      if ((*(byte *)(lVar6 + 0x18 + lVar10) | 4) == 6) {
        lVar9 = FUN_148a339fa(param_1 + 0x70);
        FUN_1415b7ec4(L"UInAppPurchaseCallbackProxy::OnCheckoutComplete - Writing Receipt to savedreceipts"
                      ,3,0);
        lVar5 = *(longlong *)(*(longlong *)(lVar6 + 0x20 + lVar10) + 0x30);
        iVar3 = *(int *)(lVar5 + 0x20);
        iVar11 = iVar3 + -1;
        if (iVar3 == 0) {
          iVar11 = 0;
        }
        FUN_1402980a2(lVar9 + 0x10,*(undefined8 *)(lVar5 + 0x18),iVar11);
        lVar5 = *(longlong *)(*(longlong *)(lVar6 + 0x20 + lVar10) + 0x30);
        iVar3 = *(int *)(lVar5 + 0x10);
        iVar11 = iVar3 + -1;
        if (iVar3 == 0) {
          iVar11 = 0;
        }
        FUN_1402980a2(lVar9,*(undefined8 *)(lVar5 + 8),iVar11);
        FUN_1402980a2(lVar9 + 0x20,
                      *(undefined8 *)
                       (*(longlong *)(*(longlong *)(lVar6 + 0x20 + lVar10) + 0x30) + 0x28));
      }
      lVar10 = lVar10 + 0x30;
    } while (lVar8 * 0x30 != lVar10);
  }
  FUN_1415b7ec4(L"UInAppPurchaseCallbackProxy::OnCheckoutComplete - Calling OnPurchaseCOmplete",3,0)
  ;
  FUN_143ecec66(param_1);
  FUN_145842369(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a33146 FUN_148a33146 body=797 status=ok
// SIG undefined FUN_148a33146(void)

void FUN_148a33146(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  bool bVar12;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined **local_70;
  longlong *local_68;
  byte local_58;
  longlong local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined8 *)(param_1 + 100) = 0;
  if (param_2 == 0) {
LAB_148a3327b:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
  }
  uVar8 = FUN_1447210f0(param_2);
  FUN_14485c47a(param_1 + 100,uVar8);
  if (*(longlong *)(param_2 + 0x398) == 0) goto LAB_148a3327b;
  local_70 = (undefined **)0x0;
  cVar6 = FUN_140a68212(&local_70);
  if (cVar6 == '\0') {
LAB_148a332a6:
    pwVar11 = L"UInAppPurchaseCallbackProxy::Trigger - Invalid or uninitialized OnlineSubsystem";
  }
  else {
    local_78 = 0;
    plVar9 = (longlong *)FUN_1401e3228();
    if (plVar9 == (longlong *)0x0) goto LAB_148a332a6;
    (**(code **)(*plVar9 + 0x98))(plVar9,&local_70);
    plVar9 = local_68;
    if ((undefined ***)(param_1 + 0x90) != &local_70) {
      *(undefined ***)(param_1 + 0x90) = local_70;
      local_70 = (undefined **)0x0;
      plVar3 = *(longlong **)(param_1 + 0x98);
      if (local_68 != plVar3) {
        local_68 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x98) = plVar9;
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
    }
    plVar9 = local_68;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_68 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (*(undefined ***)(param_1 + 0x90) != (undefined **)0x0) {
      uVar8 = FUN_144a7ba4c(param_2);
      FUN_147ba2c90(uVar8);
      lVar10 = FUN_14127b0d4(&local_70);
      plVar9 = *(longlong **)(lVar10 + 0x10);
      bVar4 = true;
      if (plVar9 == (longlong *)0x0) {
LAB_148a33307:
        uVar8 = 0;
        plVar9 = (longlong *)0x0;
      }
      else {
        iVar7 = (int)plVar9[1];
        do {
          if (iVar7 == 0) goto LAB_148a33307;
          LOCK();
          iVar5 = (int)plVar9[1];
          bVar12 = iVar7 == iVar5;
          if (bVar12) {
            *(int *)(plVar9 + 1) = iVar7 + 1;
            iVar5 = iVar7;
          }
          iVar7 = iVar5;
          UNLOCK();
        } while (!bVar12);
        uVar8 = *(undefined8 *)(lVar10 + 8);
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        bVar4 = false;
      }
      *(undefined8 *)(param_1 + 0x80) = uVar8;
      plVar3 = *(longlong **)(param_1 + 0x88);
      if (plVar9 == plVar3) {
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar9 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar7 = *piVar1;
            UNLOCK();
            plVar3 = plVar9;
joined_r0x000148a3337c:
            if (iVar7 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
      }
      else {
        *(longlong **)(param_1 + 0x88) = plVar9;
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
            iVar7 = *piVar1;
            UNLOCK();
            goto joined_r0x000148a3337c;
          }
        }
      }
      if (!bVar4) {
        LOCK();
        plVar3 = plVar9 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      local_70 = &PTR_FUN_14a5af930;
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      local_70 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_58])();
      plVar9 = (longlong *)FUN_14001cc68(0x40,0x10);
      plVar9[1] = (longlong)&DAT_100000001;
      *plVar9 = (longlong)&PTR_FUN_14b4c2410;
      plVar9[2] = (longlong)&PTR_FUN_14b438d60;
      plVar9[3] = 0;
      plVar9[4] = 0;
      *(undefined1 *)(plVar9 + 5) = 0;
      plVar9[6] = 0;
      plVar9[7] = 0;
      FUN_1489b73f8(&local_70,1);
      FUN_148a32ee2(param_1,&local_70);
      FUN_145c8db80(&local_70);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar9 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      goto LAB_148a332b7;
    }
    pwVar11 = 
    L"UInAppPurchaseCallbackProxy::Trigger - In-App Purchases are not supported by Online Subsystem"
    ;
  }
  FUN_1415b7ec4(pwVar11,3,0);
LAB_148a332b7:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3347c FUN_148a3347c body=848 status=ok
// SIG undefined FUN_148a3347c(void)

void FUN_148a3347c(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined ***pppuVar3;
  longlong *plVar4;
  undefined **ppuVar5;
  bool bVar6;
  undefined **ppuVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  undefined *puVar15;
  bool bVar16;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **local_60;
  longlong *local_58 [2];
  byte local_48;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined1 *)(param_1 + 0x60) = 1;
  *(undefined8 *)(param_1 + 100) = 0;
  if (param_2 == 0) goto LAB_148a3361f;
  uVar11 = FUN_1447210f0(param_2);
  FUN_14485c47a(param_1 + 100,uVar11);
  if (*(longlong *)(param_2 + 0x398) == 0) {
    pwVar14 = L"UInAppPurchaseCallbackProxy::Trigger - Invalid player state";
LAB_148a33607:
    FUN_1415b7ec4(pwVar14,3,0);
  }
  else {
    local_60 = (undefined **)0x0;
    cVar9 = FUN_140a68212(&local_60);
    if (cVar9 == '\0') {
LAB_148a33600:
      pwVar14 = L"UInAppPurchaseCallbackProxy::Trigger - Invalid or uninitialized OnlineSubsystem";
      goto LAB_148a33607;
    }
    local_68 = 0;
    plVar12 = (longlong *)FUN_1401e3228();
    if (plVar12 == (longlong *)0x0) goto LAB_148a33600;
    (**(code **)(*plVar12 + 0x98))(plVar12,&local_60);
    plVar12 = local_58[0];
    pppuVar3 = (undefined ***)(param_1 + 0x90);
    if (pppuVar3 != &local_60) {
      *(undefined ***)(param_1 + 0x90) = local_60;
      local_60 = (undefined **)0x0;
      plVar4 = *(longlong **)(param_1 + 0x98);
      if (local_58[0] != plVar4) {
        local_58[0] = (longlong *)0x0;
        *(longlong **)(param_1 + 0x98) = plVar12;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar12 = plVar4 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
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
    plVar12 = local_58[0];
    if (local_58[0] != (longlong *)0x0) {
      LOCK();
      plVar4 = local_58[0] + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_58[0])(local_58[0]);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    if (*pppuVar3 == (undefined **)0x0) {
      pwVar14 = 
      L"UInAppPurchaseCallbackProxy::Trigger - In-App Purchases are not supported by Online Subsystem"
      ;
      goto LAB_148a33607;
    }
    uVar11 = FUN_144a7ba4c(param_2);
    FUN_147ba2c90(uVar11);
    lVar13 = FUN_14127b0d4(&local_60);
    plVar12 = *(longlong **)(lVar13 + 0x10);
    bVar6 = true;
    if (plVar12 == (longlong *)0x0) {
LAB_148a33655:
      uVar11 = 0;
      plVar12 = (longlong *)0x0;
    }
    else {
      iVar10 = (int)plVar12[1];
      do {
        if (iVar10 == 0) goto LAB_148a33655;
        LOCK();
        iVar8 = (int)plVar12[1];
        bVar16 = iVar10 == iVar8;
        if (bVar16) {
          *(int *)(plVar12 + 1) = iVar10 + 1;
          iVar8 = iVar10;
        }
        iVar10 = iVar8;
        UNLOCK();
      } while (!bVar16);
      uVar11 = *(undefined8 *)(lVar13 + 8);
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      bVar6 = false;
    }
    *(undefined8 *)(param_1 + 0x80) = uVar11;
    plVar4 = *(longlong **)(param_1 + 0x88);
    if (plVar12 == plVar4) {
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar12 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar10 = *piVar1;
          UNLOCK();
          plVar4 = plVar12;
          goto joined_r0x000148a336a6;
        }
      }
    }
    else {
      *(longlong **)(param_1 + 0x88) = plVar12;
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
          iVar10 = *piVar1;
          UNLOCK();
joined_r0x000148a336a6:
          if (iVar10 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
    if (!bVar6) {
      LOCK();
      plVar4 = plVar12 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    local_60 = &PTR_FUN_14a5af930;
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    local_60 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_48])(local_58);
    ppuVar5 = *pppuVar3;
    local_60 = (undefined **)0x0;
    local_58[0] = (longlong *)((ulonglong)local_58[0] & 0xffffffff00000000);
    FUN_1446efa72(&local_60,0,3,0x10);
    ppuVar7 = local_60;
    local_58[0] = (longlong *)CONCAT44(local_58[0]._4_4_,3);
    *local_60 = (undefined *)&PTR_LAB_14b4c24a0;
    LOCK();
    UNLOCK();
    puVar15 = (undefined *)(DAT_14c758608 + 1);
    lVar13 = DAT_14c758608 + 1;
    if (puVar15 == (undefined *)0x0) {
      LOCK();
      UNLOCK();
      puVar15 = (undefined *)(DAT_14c758608 + 2);
      lVar13 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar13;
    local_60[2] = puVar15;
    *local_60 = (undefined *)&PTR_FUN_14b4c2430;
    local_60[3] = (undefined *)0x0;
    FUN_14485c47a(local_60 + 3,param_1);
    ppuVar7[4] = FUN_148a337ce;
    (**(code **)(*ppuVar5 + 0x38))(ppuVar5,*(undefined8 *)(param_1 + 0x80),0,&local_60);
    FUN_1449db362(&local_60);
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
    FUN_143ecec66(param_1);
  }
LAB_148a3361f:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a337ce FUN_148a337ce body=86 status=ok
// SIG undefined FUN_148a337ce(void)

void FUN_148a337ce(longlong param_1,byte *param_2)

{
  undefined1 uVar1;
  
  FUN_145c0f8b8(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_148a42c0a(param_1 + 0x70);
  }
  *(byte *)(param_1 + 0x6c) = param_2[0x38] == 0 | *param_2;
  uVar1 = FUN_148a33824(param_2);
  *(undefined1 *)(param_1 + 0xa0) = uVar1;
  FUN_143ecec66(param_1);
  return;
}



// FUNCTION 148a33824 FUN_148a33824 body=468 status=ok
// SIG undefined FUN_148a33824(void)

ulonglong FUN_148a33824(char *param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  bool bVar5;
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  int local_30;
  ulonglong local_28;
  undefined7 uVar4;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar3 = CONCAT71(uVar4,4);
  if (*param_1 == '\0') {
    FUN_140056680(&local_38,L"com.epicgames.purchase.failure");
    pwVar1 = local_38;
    iVar2 = *(int *)(param_1 + 0x20);
    if (iVar2 == local_30) {
      bVar5 = true;
      if (1 < iVar2) {
        iVar2 = wcscmp(*(wchar_t **)(param_1 + 0x18),local_38);
        bVar5 = iVar2 == 0;
      }
    }
    else {
      bVar5 = local_30 + iVar2 == 1;
    }
    if (pwVar1 != (wchar_t *)0x0) {
      FUN_1400020a8(pwVar1);
    }
    uVar3 = CONCAT71(uVar4,1);
    if (!bVar5) {
      FUN_140056680(&local_38,L"com.epicgames.catalog_helper.user_cancelled");
      pwVar1 = local_38;
      iVar2 = *(int *)(param_1 + 0x20);
      if (iVar2 == local_30) {
        bVar5 = true;
        if (1 < iVar2) {
          iVar2 = wcscmp(*(wchar_t **)(param_1 + 0x18),local_38);
          bVar5 = iVar2 == 0;
        }
      }
      else {
        bVar5 = local_30 + iVar2 == 1;
      }
      if (pwVar1 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar1);
      }
      uVar3 = CONCAT71(uVar4,3);
      if (!bVar5) {
        FUN_140056680(&local_38,L"com.epicgames.purchase.deferred");
        pwVar1 = local_38;
        iVar2 = *(int *)(param_1 + 0x20);
        if (iVar2 == local_30) {
          bVar5 = true;
          if (1 < iVar2) {
            iVar2 = wcscmp(*(wchar_t **)(param_1 + 0x18),local_38);
            bVar5 = iVar2 == 0;
          }
        }
        else {
          bVar5 = local_30 + iVar2 == 1;
        }
        if (pwVar1 != (wchar_t *)0x0) {
          FUN_1400020a8(pwVar1);
        }
        uVar3 = CONCAT71(uVar4,2);
        if (!bVar5) {
          FUN_140056680(&local_38,L"com.epicgames.purchase.invalid");
          iVar2 = *(int *)(param_1 + 0x20);
          if (iVar2 == local_30) {
            bVar5 = true;
            if (1 < iVar2) {
              iVar2 = wcscmp(*(wchar_t **)(param_1 + 0x18),local_38);
              bVar5 = iVar2 == 0;
            }
          }
          else {
            bVar5 = local_30 + iVar2 == 1;
          }
          if (local_38 != (wchar_t *)0x0) {
            FUN_1400020a8(local_38);
          }
          uVar3 = CONCAT71(uVar4,bVar5) ^ 1;
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 148a339fa FUN_148a339fa body=59 status=ok
// SIG undefined FUN_148a339fa(void)

longlong FUN_148a339fa(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148a42c4e(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x40 + *param_1;
  FUN_148a42c3a(lVar2);
  return lVar2;
}



// FUNCTION 148a33a35 FUN_148a33a35 body=148 status=ok
// SIG undefined FUN_148a33a35(void)

undefined8 FUN_148a33a35(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1458cc4c0();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a33aca FUN_148a33aca body=111 status=ok
// SIG undefined FUN_148a33aca(void)

void FUN_148a33aca(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_60[0] = param_2;
  FUN_148a33b3a(&local_58,param_3);
  FUN_1447cd2ec(param_1,local_60);
  FUN_148a34282(&local_58);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a33b3a FUN_148a33b3a body=69 status=ok
// SIG undefined FUN_148a33b3a(void)

longlong FUN_148a33b3a(longlong param_1,longlong param_2)

{
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  return param_1;
}



// FUNCTION 148a33b80 FUN_148a33b80 body=306 status=ok
// SIG undefined FUN_148a33b80(void)

void FUN_148a33b80(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined1 local_48;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  uVar1 = local_38;
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_148a342cd(DAT_14c951640);
  FUN_144757f48(uVar2,0x1000000);
  FUN_148a33cb6(uVar2,uVar1,plVar3);
  *param_3 = uVar2;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a33cb6 FUN_148a33cb6 body=912 status=ok
// SIG undefined FUN_148a33cb6(void)

void FUN_148a33cb6(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  longlong local_108 [2];
  undefined8 *local_f8;
  undefined4 local_f0;
  longlong *local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
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
  undefined **local_60;
  uint local_58;
  undefined4 uStack_54;
  byte local_48;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    FUN_148a34282(param_1 + 0x50);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  *(undefined1 *)(param_1 + 0x98) = 1;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_138);
  }
  uVar7 = FUN_1447210f0(param_2);
  FUN_14485c47a(param_1 + 0x48,uVar7);
  if (*(longlong *)(param_2 + 0x398) == 0) {
    pwVar10 = L"UInAppPurchaseCallbackProxy::Trigger - Invalid player state";
LAB_148a33f43:
    FUN_1415b7ec4(pwVar10,3,0);
  }
  else {
    local_d8 = 0;
    cVar6 = FUN_140a68212();
    if (cVar6 == '\0') {
LAB_148a33f3c:
      pwVar10 = L"UInAppPurchaseCallbackProxy::Trigger - Invalid or uninitialized OnlineSubsystem";
      goto LAB_148a33f43;
    }
    local_60 = (undefined **)0x0;
    plVar8 = (longlong *)FUN_1401e3228();
    if (plVar8 == (longlong *)0x0) goto LAB_148a33f3c;
    (**(code **)(*plVar8 + 0x98))(plVar8,&local_e8);
    if (local_e8 == (longlong *)0x0) {
      FUN_1415b7ec4(L"UInAppPurchaseCallbackProxy::Trigger - In-App Purchases are not supported by Online Subsystem"
                    ,3,0);
      bVar3 = true;
    }
    else {
      uVar7 = FUN_144a7ba4c(param_2);
      FUN_147ba2c90(uVar7,&local_60);
      if ((&DAT_149fc1b6e)[local_48] == '\x01') {
        if (((longlong *)CONCAT44(uStack_54,local_58) == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*(longlong *)CONCAT44(uStack_54,local_58) + 0x28))(), cVar6 == '\0'
           )) goto LAB_148a33fc1;
LAB_148a33dcc:
        local_f8 = (undefined8 *)0x0;
        local_f0 = 0;
        FUN_1446efa72(&local_f8,0,3,0x10);
        puVar4 = local_f8;
        local_f0 = 3;
        *local_f8 = &PTR_LAB_14b438ec0;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar5 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar5 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar5;
        local_f8[2] = lVar9;
        *local_f8 = &PTR_FUN_14b4c2580;
        local_f8[3] = 0;
        FUN_14485c47a(local_f8 + 3,param_1);
        puVar4[4] = FUN_148a34062;
        local_c8 = 0;
        local_98 = 0;
        uStack_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        uStack_c0 = 0xffffffff00000000;
        uStack_90 = 0x8000000000;
        local_88 = 0xffffffff;
        uVar2 = *(undefined1 *)(param_3 + 0x10);
        FUN_1400b22c2(local_108,&DAT_149e02088);
        local_118 = uVar2;
        FUN_1489b9b62(&local_d8,local_108,param_3,1);
        if (local_108[0] != 0) {
          FUN_1400020a8();
        }
        uVar7 = FUN_14127b0d4(&local_60);
        (**(code **)(*local_e8 + 0x18))(local_e8,uVar7,&local_d8,&local_f8);
        FUN_1489b9c56(&local_d8);
        FUN_1449db362(&local_f8);
        bVar3 = false;
      }
      else {
        if ((local_58 & 0xffffff) != 0) goto LAB_148a33dcc;
LAB_148a33fc1:
        FUN_1415b7ec4(L"UInAppPurchaseCallbackProxy::Trigger - Invalid player UniqueNetId",3,0);
        bVar3 = true;
      }
      local_60 = &PTR_FUN_14a5af930;
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      local_60 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_48])(&local_58);
    }
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_e0 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar1 = (int *)((longlong)local_e0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_e0 + 0x10))(local_e0);
        }
      }
    }
    if (!bVar3) goto LAB_148a33f55;
  }
  FUN_143ecedfa(param_1);
LAB_148a33f55:
  if ((local_30 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a34062 FUN_148a34062 body=542 status=ok
// SIG undefined FUN_148a34062(void)

void FUN_148a34062(longlong param_1,char *param_2,longlong *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar1 = param_2[0x38];
  cVar2 = *param_2;
  uVar5 = FUN_148a33824(param_2);
  *(undefined1 *)(param_1 + 0x98) = uVar5;
  if ((cVar2 == '\0') && (cVar1 != '\0')) {
    FUN_1415b7ec4(L"UInAppPurchaseCallbackProxy::OnCheckoutComplete - Failure: Emptying saved receipts"
                  ,5,0);
    if (*(char *)(param_1 + 0x90) == '\x01') {
      FUN_148a34282(param_1 + 0x50);
      *(undefined1 *)(param_1 + 0x90) = 0;
    }
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    iVar7 = 0;
    FUN_1415b7ec4(L"UInAppPurchaseCallbackProxy::OnCheckoutComplete - Success: Storing receipt",5,0)
    ;
    lVar4 = *(longlong *)(*(longlong *)(*param_3 + 0x20) + 0x30);
    iVar3 = *(int *)(lVar4 + 0x20);
    iVar6 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar6 = iVar7;
    }
    FUN_1402980a2(&local_78,*(undefined8 *)(lVar4 + 0x18),iVar6);
    lVar4 = *(longlong *)(*(longlong *)(*param_3 + 0x20) + 0x30);
    iVar3 = *(int *)(lVar4 + 0x10);
    iVar6 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar6 = iVar7;
    }
    FUN_1402980a2(&local_88,*(undefined8 *)(lVar4 + 8),iVar6);
    lVar4 = *(longlong *)(*(longlong *)(*param_3 + 0x20) + 0x30);
    iVar3 = *(int *)(lVar4 + 0x30);
    iVar6 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar6 = iVar7;
    }
    FUN_1402980a2(&local_68,*(undefined8 *)(lVar4 + 0x28),iVar6);
    iVar3 = *(int *)(*param_3 + 0x10);
    iVar6 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar6 = iVar7;
    }
    FUN_1402980a2(&local_58,*(undefined8 *)(*param_3 + 8),iVar6);
    if (&local_88 != (undefined8 *)(param_1 + 0x50)) {
      if (*(char *)(param_1 + 0x90) == '\x01') {
        FUN_148a34282();
      }
      *(undefined8 *)(param_1 + 0x50) = local_88;
      local_88 = 0;
      *(undefined4 *)(param_1 + 0x58) = (undefined4)uStack_80;
      *(undefined4 *)(param_1 + 0x5c) = uStack_80._4_4_;
      uStack_80 = 0;
      *(undefined8 *)(param_1 + 0x60) = local_78;
      local_78 = 0;
      *(undefined4 *)(param_1 + 0x68) = (undefined4)uStack_70;
      *(undefined4 *)(param_1 + 0x6c) = uStack_70._4_4_;
      uStack_70 = 0;
      *(undefined8 *)(param_1 + 0x70) = local_68;
      local_68 = 0;
      *(undefined4 *)(param_1 + 0x78) = (undefined4)uStack_60;
      *(undefined4 *)(param_1 + 0x7c) = uStack_60._4_4_;
      uStack_60 = 0;
      *(undefined8 *)(param_1 + 0x80) = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 0x88) = (undefined4)uStack_50;
      *(undefined4 *)(param_1 + 0x8c) = uStack_50._4_4_;
      uStack_50 = 0;
      *(undefined1 *)(param_1 + 0x90) = 1;
    }
    FUN_148a34282(&local_88);
  }
  FUN_143ecedfa(param_1);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a34282 FUN_148a34282 body=75 status=ok
// SIG undefined FUN_148a34282(void)

void FUN_148a34282(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
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



// FUNCTION 148a342cd FUN_148a342cd body=148 status=ok
// SIG undefined FUN_148a342cd(void)

undefined8 FUN_148a342cd(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145987a84();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a34362 FUN_148a34362 body=314 status=ok
// SIG undefined FUN_148a34362(void)

void FUN_148a34362(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_80 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  uVar1 = local_80;
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = &local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_148a3469d(DAT_14c951640);
  FUN_144757f48(uVar2,0x1000000);
  FUN_148a344a0(puVar3,uVar1);
  *param_3 = uVar2;
  FUN_148a34282(&local_78);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a344a0 FUN_148a344a0 body=488 status=ok
// SIG undefined FUN_148a344a0(void)

void FUN_148a344a0(longlong param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  undefined **local_50;
  uint local_48;
  undefined4 uStack_44;
  byte local_38;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x398) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
  }
  local_50 = (undefined **)0x0;
  cVar2 = FUN_140a68212();
  if (cVar2 != '\0') {
    local_60 = (longlong *)0x0;
    plVar3 = (longlong *)FUN_1401e3228();
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x98))(plVar3,&local_60);
      if (local_60 == (longlong *)0x0) {
        FUN_1415b7ec4(L"UInAppPurchaseFinalizeProxy::Trigger - In-App Purchases are not supported by Online Subsystem"
                      ,3,0);
      }
      else {
        uVar4 = FUN_144a7ba4c(param_2);
        FUN_147ba2c90(uVar4,&local_50);
        if ((&DAT_149fc1b6e)[local_38] == '\x01') {
          if (((longlong *)CONCAT44(uStack_44,local_48) == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*(longlong *)CONCAT44(uStack_44,local_48) + 0x28))(),
             cVar2 == '\0')) goto LAB_148a3456a;
LAB_148a34665:
          plVar3 = local_60;
          uVar4 = FUN_14127b0d4(&local_50);
          (**(code **)(*plVar3 + 0x20))(plVar3,uVar4,param_1 + 0x30,param_1 + 0x20);
          pwVar5 = L"UInAppPurchaseFinalizeProxy::Trigger - In-App Purchase finalized";
          uVar4 = 5;
        }
        else {
          if ((local_48 & 0xffffff) != 0) goto LAB_148a34665;
LAB_148a3456a:
          pwVar5 = L"UInAppPurchaseFinalizeProxy::Trigger - Innvalid player UniqueNetId";
          uVar4 = 3;
        }
        FUN_1415b7ec4(pwVar5,uVar4,0);
        local_50 = &PTR_FUN_14a5af930;
        if (local_30 != 0) {
          FUN_1400020a8();
        }
        local_50 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_38])(&local_48);
      }
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_58 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar1 = (int *)((longlong)local_58 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_58 + 0x10))(local_58);
          }
        }
      }
      goto LAB_148a34619;
    }
  }
  FUN_1415b7ec4(L"UInAppPurchaseFinalizeProxy::Trigger - Invalid or uninitialized OnlineSubsystem",3
                ,0);
LAB_148a34619:
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a3469d FUN_148a3469d body=148 status=ok
// SIG undefined FUN_148a3469d(void)

undefined8 FUN_148a3469d(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145987b68();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a34732 FUN_148a34732 body=107 status=ok
// SIG undefined FUN_148a34732(void)

void FUN_148a34732(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_148a3479e(&local_28);
  FUN_1447cd2ec(param_1,&local_28);
  FUN_145c04ea3(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3479e FUN_148a3479e body=95 status=ok
// SIG undefined FUN_148a3479e(void)

undefined8 * FUN_148a3479e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145c04ea3(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148a42f6a(param_1,iVar1);
      FUN_148a42fdc(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148a347fe FUN_148a347fe body=313 status=ok
// SIG undefined FUN_148a347fe(void)

void FUN_148a347fe(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
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
  uVar1 = local_38;
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = &local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_148a350c3(DAT_14c951640);
  FUN_144757f48(uVar2,0x1000000);
  FUN_148a3493c(uVar2,uVar1,plVar3);
  *param_3 = uVar2;
  FUN_1447a1747(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3493c FUN_148a3493c body=768 status=ok
// SIG undefined FUN_148a3493c(void)

void FUN_148a3493c(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined4 local_70;
  longlong *local_68;
  longlong *local_60;
  undefined **local_58;
  uint local_50;
  undefined4 uStack_4c;
  byte local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (param_2 == 0) goto LAB_148a34aec;
  uVar6 = FUN_1447210f0(param_2);
  FUN_14485c47a(param_1 + 0x48,uVar6);
  if (*(longlong *)(param_2 + 0x398) == 0) {
    pwVar8 = L"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - Invalid player state";
LAB_148a34abe:
    FUN_1415b7ec4(pwVar8,3,0);
  }
  else {
    local_58 = (undefined **)0x0;
    cVar5 = FUN_140a68212();
    if (cVar5 == '\0') {
LAB_148a34ab7:
      pwVar8 = 
      L"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - Invalid or uninitialized OnlineSubsystem";
      goto LAB_148a34abe;
    }
    local_68 = (longlong *)0x0;
    plVar7 = (longlong *)FUN_1401e3228();
    if (plVar7 == (longlong *)0x0) goto LAB_148a34ab7;
    (**(code **)(*plVar7 + 0x90))(plVar7,&local_68);
    if (local_68 == (longlong *)0x0) {
      FUN_1415b7ec4(L"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - In App Purchases are not supported by Online Subsystem"
                    ,3,0);
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_60 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
    else {
      FUN_1415b7ec4(L"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - GetUniqueNetIdFromCachedControllerId"
                    ,5,0);
      uVar6 = FUN_144a7ba4c(param_2);
      FUN_147ba2c90(uVar6,&local_58);
      if ((&DAT_149fc1b6e)[local_40] == '\x01') {
        if (((longlong *)CONCAT44(uStack_4c,local_50) == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*(longlong *)CONCAT44(uStack_4c,local_50) + 0x28))(), cVar5 == '\0'
           )) goto LAB_148a34a3b;
LAB_148a34b61:
        FUN_1415b7ec4(L"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - Querying Store Interface",
                      5,0);
        plVar7 = local_68;
        local_78 = (undefined8 *)0x0;
        local_70 = 0;
        FUN_1446efa72(&local_78,0,3,0x10);
        puVar3 = local_78;
        local_70 = 3;
        *local_78 = &PTR_LAB_14b438620;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar4 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar4 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar4;
        local_78[2] = lVar9;
        *local_78 = &PTR_FUN_14b4c2660;
        local_78[3] = 0;
        FUN_14485c47a(local_78 + 3,param_1);
        puVar3[4] = FUN_143ecefc4;
        uVar6 = FUN_14127b0d4(&local_58);
        (**(code **)(*plVar7 + 0x40))(plVar7,uVar6,param_3,&local_78);
        FUN_1449db362(&local_78);
        bVar2 = true;
      }
      else {
        if ((local_50 & 0xffffff) != 0) goto LAB_148a34b61;
LAB_148a34a3b:
        bVar2 = false;
        FUN_1415b7ec4(L"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - Invalid UniqueNetId",3,0);
      }
      local_58 = &PTR_FUN_14a5af930;
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      local_58 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])(&local_50);
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_60 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
      if (bVar2) goto LAB_148a34aec;
    }
  }
  FUN_1415b7ec4(L"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - Failed to even submit",3,0);
  FUN_143ecefc4(param_1,0);
  FUN_1447a1747(0,0);
LAB_148a34aec:
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a34c3e FUN_148a34c3e body=827 status=ok
// SIG undefined FUN_148a34c3e(void)

void FUN_148a34c3e(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_158 [40];
  undefined1 local_130 [16];
  longlong *local_120;
  undefined4 local_118;
  longlong *local_110;
  undefined4 local_108;
  longlong *local_100;
  undefined4 local_f8;
  longlong *local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  longlong *local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined1 local_c0 [16];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_1415b7ec4(L"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - CreateProxyInformation",5,0);
  FUN_145c04ea3(*param_2,(int)param_2[1]);
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    FUN_148a4345e(param_2);
  }
  if ((longlong)(int)param_1[1] != 0) {
    plVar7 = (longlong *)*param_1;
    plVar8 = plVar7 + (longlong)(int)param_1[1] * 2;
    do {
      lVar2 = *plVar7;
      plVar3 = (longlong *)plVar7[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      FUN_1415b7ec4(L"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - CreateProxyInformation In Loop"
                    ,5,0);
      FUN_148a34f7a(local_130);
      iVar6 = *(int *)(lVar2 + 0x10) + -1;
      if (*(int *)(lVar2 + 0x10) == 0) {
        iVar6 = 0;
      }
      FUN_1402980a2(local_130,*(undefined8 *)(lVar2 + 8),iVar6);
      plVar5 = local_120;
      plVar4 = *(longlong **)(lVar2 + 0x18);
      if (local_120 != plVar4) {
        local_120 = plVar4;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      plVar5 = local_110;
      local_118 = *(undefined4 *)(lVar2 + 0x20);
      plVar4 = *(longlong **)(lVar2 + 0x28);
      if (local_110 != plVar4) {
        local_110 = plVar4;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      plVar5 = local_100;
      local_108 = *(undefined4 *)(lVar2 + 0x30);
      plVar4 = *(longlong **)(lVar2 + 0x38);
      if (local_100 != plVar4) {
        local_100 = plVar4;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      plVar5 = local_f0;
      local_f8 = *(undefined4 *)(lVar2 + 0x40);
      plVar4 = *(longlong **)(lVar2 + 0x48);
      if (local_f0 != plVar4) {
        local_f0 = plVar4;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      plVar5 = local_d8;
      local_e8 = *(undefined4 *)(lVar2 + 0x50);
      local_e0 = *(undefined4 *)(lVar2 + 0x58);
      plVar4 = *(longlong **)(lVar2 + 0x60);
      if (local_d8 != plVar4) {
        local_d8 = plVar4;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      local_d0 = *(undefined4 *)(lVar2 + 0x68);
      local_c8 = *(undefined4 *)(lVar2 + 0x70);
      FUN_1402980a2(local_c0,*(undefined8 *)(lVar2 + 0x78));
      local_b0 = *(undefined8 *)(lVar2 + 0x88);
      local_a8 = *(undefined8 *)(lVar2 + 0x90);
      local_a0 = *(undefined1 *)(lVar2 + 0x98);
      FUN_14058acb2(local_98,lVar2 + 0xa0);
      FUN_1415b7ec4(L"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - Adding Product",5,0);
      iVar6 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
        FUN_148a4348e(param_2,iVar6);
      }
      FUN_148a43018((longlong)iVar6 * 0xe8 + *param_2,local_130);
      FUN_1415b7ec4(L"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - Done Adding Product",5,0);
      FUN_148a3501c(local_130);
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
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a34f7a FUN_148a34f7a body=162 status=ok
// SIG undefined FUN_148a34f7a(void)

undefined8 * FUN_148a34f7a(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_144a5dc74(param_1 + 2);
  FUN_144a5dc74(param_1 + 4);
  FUN_144a5dc74(param_1 + 6);
  FUN_144a5dc74(param_1 + 8);
  *(undefined4 *)(param_1 + 10) = 0;
  FUN_144a5dc74(param_1 + 0xb);
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return param_1;
}



// FUNCTION 148a3501c FUN_148a3501c body=167 status=ok
// SIG undefined FUN_148a3501c(void)

void FUN_148a3501c(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x13);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
  }
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x10))();
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a350c3 FUN_148a350c3 body=148 status=ok
// SIG undefined FUN_148a350c3(void)

undefined8 FUN_148a350c3(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145987c4c();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a35158 FUN_148a35158 body=117 status=ok
// SIG undefined FUN_148a35158(void)

void FUN_148a35158(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  local_30[0] = param_2;
  FUN_148a327c6(&local_28,param_3);
  FUN_1447cd2ec(param_1,local_30);
  FUN_145c0f8b8(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a351ce FUN_148a351ce body=192 status=ok
// SIG undefined FUN_148a351ce(void)

void FUN_148a351ce(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  uVar1 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_148a35d17(DAT_14c951640);
  FUN_144757f48(uVar2,0x1000000);
  FUN_148a35490(uVar2,uVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a35290 FUN_148a35290 body=156 status=ok
// SIG undefined FUN_148a35290(void)

void FUN_148a35290(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_148a3532e(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3532e FUN_148a3532e body=61 status=ok
// SIG undefined FUN_148a3532e(void)

undefined8 FUN_148a3532e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_148a35d17(DAT_14c951640);
  FUN_144757f48(uVar1,0x1000000);
  FUN_148a359ce(uVar1,param_1,0);
  return uVar1;
}



// FUNCTION 148a3536c FUN_148a3536c body=156 status=ok
// SIG undefined FUN_148a3536c(void)

void FUN_148a3536c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_148a3540a(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3540a FUN_148a3540a body=61 status=ok
// SIG undefined FUN_148a3540a(void)

undefined8 FUN_148a3540a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_148a35d17(DAT_14c951640);
  FUN_144757f48(uVar1,0x1000000);
  FUN_148a359ce(uVar1,param_1,1);
  return uVar1;
}



// FUNCTION 148a3544a FUN_148a3544a body=69 status=ok
// SIG undefined FUN_148a3544a(void)

void FUN_148a3544a(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x80) = 1;
  FUN_145c0f8b8(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_148a42c0a(param_1 + 0x70);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}



// FUNCTION 148a35490 FUN_148a35490 body=680 status=ok
// SIG undefined FUN_148a35490(void)

void FUN_148a35490(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_d8 [32];
  undefined8 local_b8 [8];
  undefined8 local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *local_60;
  undefined **local_58;
  uint local_50;
  undefined4 uStack_4c;
  byte local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_148a3544a();
  if (param_2 == 0) {
LAB_148a35608:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_d8);
  }
  uVar6 = FUN_1447210f0(param_2);
  FUN_14485c47a(param_1 + 0x60,uVar6);
  if (*(longlong *)(param_2 + 0x398) == 0) goto LAB_148a35608;
  local_b8[0] = 0;
  cVar4 = FUN_140a68212();
  if (cVar4 != '\0') {
    local_58 = (undefined **)0x0;
    plVar7 = (longlong *)FUN_1401e3228();
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x98))(plVar7,&local_68);
      if (local_68 == 0) {
        FUN_1415b7ec4(L"UInAppPurchaseCallbackProxy::Trigger - In-App Purchases are not supported by Online Subsystem"
                      ,3,0);
      }
      else {
        uVar6 = FUN_144a7ba4c(param_2);
        FUN_147ba2c90(uVar6,&local_58);
        if ((&DAT_149fc1b6e)[local_40] == '\x01') {
          if (((longlong *)CONCAT44(uStack_4c,local_50) == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*(longlong *)CONCAT44(uStack_4c,local_50) + 0x28))(),
             cVar4 == '\0')) goto LAB_148a35692;
LAB_148a35587:
          lVar8 = FUN_1408e4caa(&local_58);
          plStack_70 = *(longlong **)(lVar8 + 0x10);
          if (plStack_70 == (longlong *)0x0) {
LAB_148a355a1:
            local_78 = 0;
            plStack_70 = (longlong *)0x0;
            bVar9 = true;
          }
          else {
            iVar5 = (int)plStack_70[1];
            do {
              if (iVar5 == 0) goto LAB_148a355a1;
              LOCK();
              iVar3 = (int)plStack_70[1];
              bVar9 = iVar5 == iVar3;
              if (bVar9) {
                *(int *)(plStack_70 + 1) = iVar5 + 1;
                iVar3 = iVar5;
              }
              iVar5 = iVar3;
              UNLOCK();
            } while (!bVar9);
            local_78 = *(undefined8 *)(lVar8 + 8);
            LOCK();
            *(int *)((longlong)plStack_70 + 0xc) = *(int *)((longlong)plStack_70 + 0xc) + 1;
            UNLOCK();
            bVar9 = false;
          }
          plVar7 = plStack_70;
          FUN_1489b73f8(local_b8,1);
          FUN_148a35752(param_1,local_b8,&local_78);
          FUN_145c8db80(local_b8);
          if (!bVar9) {
            LOCK();
            plVar1 = plVar7 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
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
        }
        else {
          if ((local_50 & 0xffffff) != 0) goto LAB_148a35587;
LAB_148a35692:
          FUN_1415b7ec4(L"UInAppPurchaseCallbackProxy::Trigger - Invalid player UniqueNetId",3,0);
        }
        local_58 = &PTR_FUN_14a5af930;
        if (local_38 != 0) {
          FUN_1400020a8();
        }
        local_58 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])(&local_50);
      }
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_60 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
      goto LAB_148a35648;
    }
  }
  FUN_1415b7ec4(L"UInAppPurchaseCallbackProxy::Trigger - Invalid or uninitialized OnlineSubsystem",3
                ,0);
LAB_148a35648:
  if ((local_28 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a35752 FUN_148a35752 body=634 status=ok
// SIG undefined FUN_148a35752(void)

void FUN_148a35752(longlong param_1,byte *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  undefined4 uVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(byte *)(param_1 + 0x68) = param_2[0x38] == 0 | *param_2;
  uVar6 = FUN_148a33824(param_2);
  *(undefined1 *)(param_1 + 0x80) = uVar6;
  local_58 = (longlong *)0x0;
  cVar7 = FUN_140a68212();
  if (cVar7 != '\0') {
    local_68 = 0;
    plVar9 = (longlong *)FUN_1401e3228();
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x98))(plVar9,&local_58);
      if (local_58 == (longlong *)0x0) {
        pwVar12 = 
        L"UInAppPurchaseCallbackProxy::Trigger - In-App Purchases are not supported by Online Subsystem"
        ;
LAB_148a358a2:
        FUN_1415b7ec4(pwVar12,3,0);
      }
      else {
        plVar9 = (longlong *)param_3[1];
        if (plVar9 == (longlong *)0x0) {
LAB_148a3589b:
          pwVar12 = 
          L"UInAppPurchaseCallbackProxy::OnQueryReceiptsComplete - Unknown PurchaseingPlayer";
          goto LAB_148a358a2;
        }
        iVar8 = (int)plVar9[1];
        do {
          if (iVar8 == 0) goto LAB_148a3589b;
          LOCK();
          iVar5 = (int)plVar9[1];
          bVar15 = iVar8 == iVar5;
          if (bVar15) {
            *(int *)(plVar9 + 1) = iVar8 + 1;
            iVar5 = iVar8;
          }
          iVar8 = iVar5;
          UNLOCK();
        } while (!bVar15);
        if (*param_3 == 0) {
          FUN_1415b7ec4(L"UInAppPurchaseCallbackProxy::OnQueryReceiptsComplete - Unknown PurchaseingPlayer"
                        ,3,0);
        }
        else {
          local_68 = 0;
          uStack_60 = 0;
          (**(code **)(*local_58 + 0x40))(local_58,*param_3,&local_68);
          FUN_1415b7ec4(L"UInAppPurchaseCallbackProxy::OnQueryReceiptsComplete - Storing Receipts",5
                        ,0);
          lVar4 = local_68;
          lVar10 = (longlong)(int)uStack_60;
          uVar13 = 0;
          if (lVar10 != 0) {
            local_70 = param_1 + 0x70;
            lVar3 = local_68 + 8;
            lVar14 = 0;
            do {
              lVar11 = FUN_148a339fa(local_70);
              FUN_144a787a6(lVar11 + 0x10,
                            *(longlong *)(*(longlong *)(lVar4 + 0x20 + lVar14) + 0x30) + 0x18);
              FUN_144a787a6(lVar11,*(longlong *)(*(longlong *)(lVar4 + 0x20 + lVar14) + 0x30) + 8);
              FUN_144a787a6(lVar11 + 0x20,
                            *(longlong *)(*(longlong *)(lVar4 + 0x20 + lVar14) + 0x30) + 0x28);
              FUN_144a787a6(lVar11 + 0x30,lVar14 + lVar3);
              lVar14 = lVar14 + 0x30;
            } while (lVar10 * 0x30 != lVar14);
            uVar13 = (int)uStack_60;
          }
          FUN_145842369(local_68,uVar13);
          if (local_68 != 0) {
            FUN_1400020a8();
          }
        }
        LOCK();
        plVar1 = plVar9 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_50 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
      goto LAB_148a35856;
    }
  }
  FUN_1415b7ec4(L"UInAppPurchaseCallbackProxy::Trigger - Invalid or uninitialized OnlineSubsystem",3
                ,0);
LAB_148a35856:
  FUN_143ecf290(param_1);
  plVar9 = (longlong *)param_3[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar9 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a359ce FUN_148a359ce body=810 status=ok
// SIG undefined FUN_148a359ce(void)

void FUN_148a359ce(longlong param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined4 local_88;
  longlong *local_80;
  longlong *local_78;
  undefined **local_70;
  uint local_68;
  undefined4 uStack_64;
  byte local_58;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_148a3544a();
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
  }
  uVar8 = FUN_1447210f0(param_2);
  FUN_14485c47a(param_1 + 0x60,uVar8);
  if (*(longlong *)(param_2 + 0x398) == 0) {
    pwVar11 = L"UInAppPurchaseCallbackProxy::Trigger - Invalid player state";
LAB_148a35b73:
    FUN_1415b7ec4(pwVar11,3,0);
  }
  else {
    local_70 = (undefined **)0x0;
    cVar6 = FUN_140a68212();
    if (cVar6 == '\0') {
LAB_148a35b6c:
      pwVar11 = L"UInAppPurchaseCallbackProxy::Trigger - Invalid or uninitialized OnlineSubsystem";
      goto LAB_148a35b73;
    }
    local_80 = (longlong *)0x0;
    plVar9 = (longlong *)FUN_1401e3228();
    if (plVar9 == (longlong *)0x0) goto LAB_148a35b6c;
    (**(code **)(*plVar9 + 0x98))(plVar9,&local_80);
    if (local_80 == (longlong *)0x0) {
      FUN_1415b7ec4(L"UInAppPurchaseCallbackProxy::Trigger - In-App Purchases are not supported by Online Subsystem"
                    ,3,0);
      bVar3 = true;
    }
    else {
      uVar8 = FUN_144a7ba4c(param_2);
      FUN_147ba2c90(uVar8,&local_70);
      if ((&DAT_149fc1b6e)[local_58] == '\x01') {
        if (((longlong *)CONCAT44(uStack_64,local_68) == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*(longlong *)CONCAT44(uStack_64,local_68) + 0x28))(), cVar6 == '\0'
           )) goto LAB_148a35abe;
LAB_148a35bdd:
        plVar2 = local_80;
        lVar10 = FUN_1408e4caa(&local_70);
        plVar9 = *(longlong **)(lVar10 + 0x10);
        bVar3 = true;
        if (plVar9 == (longlong *)0x0) {
LAB_148a35c1e:
          uVar8 = 0;
          plVar9 = (longlong *)0x0;
        }
        else {
          iVar7 = (int)plVar9[1];
          do {
            if (iVar7 == 0) goto LAB_148a35c1e;
            LOCK();
            iVar5 = (int)plVar9[1];
            bVar13 = iVar7 == iVar5;
            if (bVar13) {
              *(int *)(plVar9 + 1) = iVar7 + 1;
              iVar5 = iVar7;
            }
            iVar7 = iVar5;
            UNLOCK();
          } while (!bVar13);
          uVar8 = *(undefined8 *)(lVar10 + 8);
          LOCK();
          *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
          UNLOCK();
          bVar3 = false;
        }
        local_90 = (undefined8 *)0x0;
        local_88 = 0;
        FUN_1446efa72(&local_90,0,3,0x10);
        puVar4 = local_90;
        local_88 = 3;
        *local_90 = &PTR_LAB_14b4c27b0;
        local_90[1] = uVar8;
        local_90[2] = plVar9;
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 1;
        lVar10 = DAT_14c758608 + 1;
        if (lVar12 == 0) {
          LOCK();
          UNLOCK();
          lVar12 = DAT_14c758608 + 2;
          lVar10 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar10;
        local_90[3] = lVar12;
        *local_90 = &PTR_FUN_14b4c2740;
        local_90[4] = 0;
        FUN_14485c47a(local_90 + 4,param_1);
        puVar4[5] = FUN_148a35752;
        uVar8 = FUN_14127b0d4(&local_70);
        (**(code **)(*plVar2 + 0x38))(plVar2,uVar8,param_3,&local_90);
        FUN_1449db362(&local_90);
        if (!bVar3) {
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
        bVar3 = false;
      }
      else {
        if ((local_68 & 0xffffff) != 0) goto LAB_148a35bdd;
LAB_148a35abe:
        FUN_1415b7ec4(L"UInAppPurchaseCallbackProxy::Trigger - Invalid player UniqueNetId",3,0);
        bVar3 = true;
      }
      local_70 = &PTR_FUN_14a5af930;
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      local_70 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_58])(&local_68);
    }
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_78 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)local_78 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_78 + 0x10))(local_78);
        }
      }
    }
    if (!bVar3) goto LAB_148a35b85;
  }
  FUN_143ecf290(param_1);
LAB_148a35b85:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a35d17 FUN_148a35d17 body=148 status=ok
// SIG undefined FUN_148a35d17(void)

undefined8 FUN_148a35d17(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1458cc5a4();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a35dac FUN_148a35dac body=117 status=ok
// SIG undefined FUN_148a35dac(void)

void FUN_148a35dac(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  local_30[0] = param_2;
  FUN_148a35e22(&local_28,param_3);
  FUN_1447cd2ec(param_1,local_30);
  FUN_145d024c8(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a35e22 FUN_148a35e22 body=95 status=ok
// SIG undefined FUN_148a35e22(void)

undefined8 * FUN_148a35e22(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145d024c8(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148a4388e(param_1,iVar1);
      FUN_148a43901(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148a35e82 FUN_148a35e82 body=290 status=ok
// SIG undefined FUN_148a35e82(void)

void FUN_148a35e82(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  uVar1 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_148a36527(DAT_14c951640);
  FUN_144757f48(uVar2,0x1000000);
  FUN_148a35fa8(uVar2,uVar1);
  *param_3 = uVar2;
  FUN_148a43a20(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a35fa8 FUN_148a35fa8 body=873 status=ok
// SIG undefined FUN_148a35fa8(void)

void FUN_148a35fa8(longlong param_1,longlong param_2)

{
  undefined ***pppuVar1;
  int *piVar2;
  longlong *plVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined *puVar12;
  wchar_t *pwVar13;
  bool bVar14;
  undefined1 auStack_c8 [32];
  undefined **local_a8 [3];
  byte local_90;
  longlong local_88;
  undefined **local_78;
  longlong *local_70;
  longlong *local_68;
  byte local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  if (param_2 == 0) goto LAB_148a36139;
  uVar9 = FUN_1447210f0(param_2);
  FUN_14485c47a(param_1 + 0x4c,uVar9);
  if (*(longlong *)(param_2 + 0x398) == 0) {
    pwVar13 = L"UInAppPurchaseRestoreCallbackProxy2::Trigger - Invalid player state";
  }
  else {
    local_78 = (undefined **)0x0;
    cVar7 = FUN_140a68212(&local_78);
    if (cVar7 != '\0') {
      local_a8[0] = (undefined **)0x0;
      plVar10 = (longlong *)FUN_1401e3228();
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x98))(plVar10,&local_78);
        plVar10 = local_70;
        pppuVar1 = (undefined ***)(param_1 + 0x68);
        if (pppuVar1 != &local_78) {
          *(undefined ***)(param_1 + 0x68) = local_78;
          local_78 = (undefined **)0x0;
          plVar3 = *(longlong **)(param_1 + 0x70);
          if (local_70 != plVar3) {
            local_70 = (longlong *)0x0;
            *(longlong **)(param_1 + 0x70) = plVar10;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar10 = plVar3 + 1;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)*plVar10 == 0) {
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
        plVar10 = local_70;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_70 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
        if (*pppuVar1 != (undefined **)0x0) {
          uVar9 = FUN_144a7ba4c(param_2);
          FUN_147ba2c90(uVar9,local_a8);
          lVar11 = FUN_14127b0d4(local_a8);
          plVar10 = *(longlong **)(lVar11 + 0x10);
          if (plVar10 == (longlong *)0x0) {
LAB_148a36170:
            plVar10 = (longlong *)0x0;
          }
          else {
            iVar8 = (int)plVar10[1];
            do {
              if (iVar8 == 0) goto LAB_148a36170;
              LOCK();
              iVar6 = (int)plVar10[1];
              bVar14 = iVar8 == iVar6;
              if (bVar14) {
                *(int *)(plVar10 + 1) = iVar8 + 1;
                iVar6 = iVar8;
              }
              iVar8 = iVar6;
              UNLOCK();
            } while (!bVar14);
          }
          local_70 = (longlong *)0x0;
          if (plVar10 != (longlong *)0x0) {
            local_70 = *(longlong **)(lVar11 + 8);
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
          }
          local_60 = 0;
          local_78 = &PTR_FUN_14a5af930;
          local_58 = 0;
          uStack_50 = 0;
          local_68 = plVar10;
          FUN_141238a10(param_1 + 0x78,&local_78);
          local_78 = &PTR_FUN_14a5af930;
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          local_78 = &PTR_FUN_14a184370;
          (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(&local_70);
          if (plVar10 != (longlong *)0x0) {
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
          }
          local_a8[0] = &PTR_FUN_14a5af930;
          if (local_88 != 0) {
            FUN_1400020a8();
          }
          local_a8[0] = &PTR_FUN_14a184370;
          (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_90])();
          ppuVar4 = *pppuVar1;
          local_78 = (undefined **)0x0;
          local_70 = (longlong *)((ulonglong)local_70 & 0xffffffff00000000);
          FUN_1446efa72(&local_78,0,3,0x10);
          ppuVar5 = local_78;
          local_70 = (longlong *)CONCAT44(local_70._4_4_,3);
          *local_78 = (undefined *)&PTR_LAB_14b4c24a0;
          LOCK();
          UNLOCK();
          puVar12 = (undefined *)(DAT_14c758608 + 1);
          lVar11 = DAT_14c758608 + 1;
          if (puVar12 == (undefined *)0x0) {
            LOCK();
            UNLOCK();
            puVar12 = (undefined *)(DAT_14c758608 + 2);
            lVar11 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar11;
          local_78[2] = puVar12;
          *local_78 = (undefined *)&PTR_FUN_14b4c2890;
          local_78[3] = (undefined *)0x0;
          FUN_14485c47a(local_78 + 3,param_1);
          ppuVar5[4] = FUN_148a36312;
          uVar9 = FUN_14127b0d4(param_1 + 0x78);
          (**(code **)(*ppuVar4 + 0x38))(ppuVar4,uVar9,1,&local_78);
          FUN_1449db362(&local_78);
          goto LAB_148a36139;
        }
        pwVar13 = 
        L"UInAppPurchaseRestoreCallbackProxy2::Trigger - In-App Purchases are not supported by Online Subsystem"
        ;
        goto LAB_148a36123;
      }
    }
    pwVar13 = 
    L"UInAppPurchaseRestoreCallbackProxy2::Trigger - Invalid or uninitialized OnlineSubsystem";
  }
LAB_148a36123:
  FUN_1415b7ec4(pwVar13,3,0);
  *(undefined1 *)(param_1 + 0x48) = 0;
  FUN_143ecf424(param_1);
LAB_148a36139:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a36312 FUN_148a36312 body=468 status=ok
// SIG undefined FUN_148a36312(void)

void FUN_148a36312(longlong param_1,byte *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(byte *)(param_1 + 0x48) = param_2[0x38] == 0 | *param_2;
  uVar4 = FUN_148a33824(param_2);
  *(undefined1 *)(param_1 + 0xa8) = uVar4;
  local_58 = 0;
  uStack_50 = 0;
  plVar2 = *(longlong **)(param_1 + 0x68);
  uVar5 = FUN_14127b0d4(param_1 + 0x78);
  (**(code **)(*plVar2 + 0x40))(plVar2,uVar5,&local_58);
  if ((longlong)(int)uStack_50 != 0) {
    lVar8 = 0;
    do {
      if (*(char *)(local_58 + 0x18 + lVar8) == '\x06') {
        *(undefined1 *)(param_1 + 0xa8) = 5;
      }
      lVar8 = lVar8 + 0x30;
    } while ((longlong)(int)uStack_50 * 0x30 != lVar8);
  }
  FUN_145d024c8(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 100) != 0) {
    FUN_148a43cd0(param_1 + 0x58);
  }
  FUN_1415b7ec4(L"UInAppPurchaseRestoreCallbackProxy2::OnQueryReceiptsComplete - Iterating OutReceipts"
                ,5,0);
  lVar8 = local_58;
  lVar6 = (longlong)(int)uStack_50;
  if (lVar6 != 0) {
    lVar9 = 0;
    do {
      if (*(char *)(lVar8 + 0x18 + lVar9) == '\x06') {
        lVar7 = FUN_148a364e8(param_1 + 0x58);
        FUN_1415b7ec4(L"UInAppPurchaseRestoreCallbackProxy2::OnQueryReceiptsComplete - Writing Receipt to savedreceipts"
                      ,5,0);
        lVar3 = *(longlong *)(*(longlong *)(lVar8 + 0x20 + lVar9) + 0x30);
        iVar1 = *(int *)(lVar3 + 0x20);
        iVar10 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar10 = 0;
        }
        FUN_1402980a2(lVar7 + 0x10,*(undefined8 *)(lVar3 + 0x18),iVar10);
        lVar3 = *(longlong *)(*(longlong *)(lVar8 + 0x20 + lVar9) + 0x30);
        iVar1 = *(int *)(lVar3 + 0x10);
        iVar10 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar10 = 0;
        }
        FUN_1402980a2(lVar7,*(undefined8 *)(lVar3 + 8),iVar10);
        FUN_1402980a2(lVar7 + 0x20,
                      *(undefined8 *)
                       (*(longlong *)(*(longlong *)(lVar8 + 0x20 + lVar9) + 0x30) + 0x28));
      }
      lVar9 = lVar9 + 0x30;
    } while (lVar6 * 0x30 != lVar9);
  }
  FUN_143ecf424(param_1);
  FUN_145842369(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a364e8 FUN_148a364e8 body=63 status=ok
// SIG undefined FUN_148a364e8(void)

longlong FUN_148a364e8(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148a43d10(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x30 + *param_1;
  FUN_148a43d00(lVar2);
  return lVar2;
}



// FUNCTION 148a36527 FUN_148a36527 body=148 status=ok
// SIG undefined FUN_148a36527(void)

undefined8 FUN_148a36527(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145987d30();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a365c0 FUN_148a365c0 body=79 status=ok
// SIG undefined FUN_148a365c0(void)

longlong FUN_148a365c0(longlong param_1,int *param_2,undefined4 *param_3)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
  }
  FUN_147be5234(param_1,(double)*param_2,*param_3);
  *(undefined1 *)(param_1 + 0x60) = 1;
  return param_1;
}



// FUNCTION 148a36610 FUN_148a36610 body=340 status=ok
// SIG undefined FUN_148a36610(void)

void FUN_148a36610(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1e70) + 0x18);
  local_28 = *(undefined8 **)(*(longlong *)(param_1 + 0x1e70) + 0x20);
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = *(int *)(local_28 + 1) + 1;
    UNLOCK();
  }
  lVar7 = *param_2;
  local_30 = lVar3;
  if (lVar7 != lVar3 && lVar3 != 0) {
    FUN_143ed02d8(param_1,&local_30);
    if ((*(longlong *)(param_1 + 0x1de8) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x1e70) + 0x4c) != '\x01')) {
      *(undefined8 *)(param_1 + 0x1de8) = 0;
    }
    FUN_14156e3fa(*(longlong *)(param_1 + 0x1e70),1);
    lVar7 = *param_2;
  }
  lVar4 = *(longlong *)(param_1 + 0x1e30);
  if (((lVar4 != lVar3) && (lVar4 != 0)) && (lVar7 != lVar4)) {
    FUN_143ed02d8(param_1,param_1 + 0x1e30);
    lVar7 = *param_2;
  }
  *(longlong *)(param_1 + 0x1de8) = lVar7;
  lVar3 = *param_2;
  lVar7 = param_2[1];
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x1e38);
  *(longlong *)(param_1 + 0x1e30) = lVar3;
  *(longlong *)(param_1 + 0x1e38) = lVar7;
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
  puVar6 = local_28;
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_28 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)puVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a367b2 FUN_148a367b2 body=586 status=ok
// SIG undefined FUN_148a367b2(void)

undefined8 FUN_148a367b2(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  undefined2 *local_90;
  undefined8 local_88;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x58) + 0x3d0))();
  (**(code **)(*plVar4 + 0x90))(plVar4,&local_50);
  plVar4 = *(longlong **)(param_1 + 0x1de8);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x88))(plVar4,local_50);
  }
  uVar5 = FUN_147bcc40d(*(undefined4 *)(param_1 + 0x134));
  if ((&DAT_149fc1b6e)[*(byte *)(param_1 + 0x178)] == '\x01') {
    if ((*(longlong **)(param_1 + 0x168) != (longlong *)0x0) &&
       (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x28))(), cVar3 != '\0')) {
LAB_148a3685e:
      plVar4 = (longlong *)FUN_1408e4caa(param_1 + 0x160);
      (**(code **)(*plVar4 + 0x38))(plVar4,&local_60);
      local_90 = local_60;
      if (local_58 == 0) {
        local_90 = &DAT_149dfb77a;
      }
      bVar2 = true;
      goto LAB_148a3689f;
    }
  }
  else if ((*(uint *)(param_1 + 0x168) & 0xffffff) != 0) goto LAB_148a3685e;
  local_90 = (undefined2 *)&DAT_149e2b65a;
  bVar2 = false;
LAB_148a3689f:
  (**(code **)(*local_50 + 0x80))(local_50,&local_70,1);
  local_98 = local_70;
  if (local_68 == 0) {
    local_98 = &DAT_149dfb77a;
  }
  plVar4 = *(longlong **)(param_1 + 0x110);
  local_88 = uVar5;
  if (plVar4 == (longlong *)0x0) {
    if (*(int *)(param_1 + 0xc0) == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = *(undefined2 **)(param_1 + 0xb8);
    }
    FUN_140002266(param_2,L"url=%s remote=%s local=%s uniqueid=%s state: %s",puVar6,&DAT_149e2b65a);
  }
  else {
    (**(code **)(*plVar4 + 0x80))(plVar4,&local_80,1);
    puVar6 = &DAT_149dfb77a;
    puVar7 = &DAT_149dfb77a;
    if (local_78 != 0) {
      puVar7 = local_80;
    }
    if (*(int *)(param_1 + 0xc0) != 0) {
      puVar6 = *(undefined2 **)(param_1 + 0xb8);
    }
    FUN_140002266(param_2,L"url=%s remote=%s local=%s uniqueid=%s state: %s",puVar6,puVar7);
    if (local_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((bVar2) && (local_60 != (undefined2 *)0x0)) {
    FUN_1400020a8();
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
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148a36a1e FUN_148a36a1e body=63 status=ok
// SIG undefined FUN_148a36a1e(void)

void FUN_148a36a1e(void)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 0;
  FUN_140272950();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a36a62 FUN_148a36a62 body=369 status=ok
// SIG undefined FUN_148a36a62(void)

void FUN_148a36a62(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4,
                  longlong param_5)

{
  undefined4 uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined2 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined2 *local_90;
  int local_88;
  undefined8 local_80;
  code *local_78 [2];
  undefined8 local_68;
  undefined **local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(*(longlong *)(param_2 + 0x1e70) + 0x4c) == '\x01') {
    uVar4 = (ulonglong)(int)param_1[1];
    if (0 < (longlong)uVar4) {
      lVar7 = uVar4 << 4;
      do {
        lVar7 = lVar7 + -0x10;
        if (*(longlong *)(*param_1 + lVar7) != param_4) {
          FUN_148a4507c(param_1,(int)uVar4 + -1);
          FUN_148a450f2(param_1);
        }
        bVar2 = 1 < uVar4;
        uVar4 = uVar4 - 1;
      } while (bVar2);
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_5 + 0x20);
    FUN_148a39666(*(longlong *)(param_2 + 0x1e70) + 8,param_1);
    local_80 = 0;
    FUN_14485c47a(&local_80,param_2);
    uVar3 = local_80;
    FUN_140002266(&local_90,&DAT_149e063bc,uVar1);
    puVar5 = &DAT_149dfb77a;
    puVar6 = &DAT_149dfb77a;
    if (local_88 != 0) {
      puVar6 = local_90;
    }
    if (*(int *)(param_5 + 0x18) != 0) {
      puVar5 = *(undefined2 **)(param_5 + 0x10);
    }
    local_68 = 0;
    local_58 = &PTR_LAB_14b4c2df0;
    local_50 = uVar3;
    local_78[0] = FUN_143edd276;
    local_a0 = 0;
    local_98 = 1;
    local_a8 = 0x89;
    local_48 = param_3;
    local_40 = uVar1;
    (**(code **)(*param_3 + 0x50))(param_3,local_78,puVar5,puVar6);
    if (local_90 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a36bd4 FUN_148a36bd4 body=229 status=ok
// SIG undefined FUN_148a36bd4(void)

void FUN_148a36bd4(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  code *local_78;
  longlong *local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  byte local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = **(longlong **)(param_1 + 0x50);
  if (lVar2 != 0) {
    do {
      pcVar1 = *(code **)(lVar2 + 0x10);
      local_68 = *(longlong **)(lVar2 + 0x20);
      *(undefined8 *)(lVar2 + 0x20) = 0;
      local_48 = *(undefined4 *)(lVar2 + 0x40);
      uStack_44 = *(undefined4 *)(lVar2 + 0x44);
      uStack_40 = *(undefined4 *)(lVar2 + 0x48);
      uStack_3c = *(undefined4 *)(lVar2 + 0x4c);
      local_58 = *(undefined4 *)(lVar2 + 0x30);
      uStack_54 = *(undefined4 *)(lVar2 + 0x34);
      uStack_50 = *(undefined4 *)(lVar2 + 0x38);
      uStack_4c = *(undefined4 *)(lVar2 + 0x3c);
      if (pcVar1 != (code *)0x0) {
        *(undefined8 *)(lVar2 + 0x10) = 0;
      }
      local_38 = 1;
      *(longlong *)(param_1 + 0x50) = lVar2;
      plVar4 = local_68;
      if (local_68 == (longlong *)0x0) {
        plVar4 = (longlong *)&local_58;
      }
      local_78 = pcVar1;
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar1)(uVar3);
      if (((local_38 & 1) != 0) && (local_78 != (code *)0x0)) {
        plVar4 = local_68;
        if (local_68 == (longlong *)0x0) {
          plVar4 = (longlong *)&local_58;
        }
        (**(code **)(*plVar4 + 0x10))();
      }
      lVar2 = **(longlong **)(param_1 + 0x50);
    } while (lVar2 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a36cba FUN_148a36cba body=135 status=ok
// SIG undefined FUN_148a36cba(void)

void FUN_148a36cba(longlong param_1)

{
  bool bVar1;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 4) & 0x7f) == 0) {
    if (*(int *)(param_1 + 0x38) < 1) {
      bVar1 = false;
    }
    else {
      QueryPerformanceCounter(&local_20);
      bVar1 = *(int *)(param_1 + 0x38) <
              (int)((((double)local_20.QuadPart * DAT_14c83f420 + 16777216.0) -
                    *(double *)(param_1 + 0xa0)) * 1000.0);
    }
    *(bool *)(param_1 + 0x43) = bVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a36d42 FUN_148a36d42 body=61 status=ok
// SIG undefined FUN_148a36d42(void)

undefined8 FUN_148a36d42(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x7c0);
  if (plVar1 == (longlong *)0x0) {
    FUN_140056680(param_2,&DAT_149dfb77a);
  }
  else {
    (**(code **)(*plVar1 + 0x80))(plVar1,param_2,1);
  }
  return param_2;
}



// FUNCTION 148a36f26 FUN_148a36f26 body=239 status=ok
// SIG undefined FUN_148a36f26(void)

void FUN_148a36f26(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  wchar_t *_Str;
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (wchar_t *)0x0;
  uStack_40 = 0;
  local_30 = param_2;
  cVar1 = FUN_140ffc744(&local_30,&local_48,0,0);
  if (cVar1 != '\0') {
    _Str = local_48;
    if ((int)uStack_40 == 0) {
      _Str = L"";
    }
    uVar2 = _wtoi(_Str);
    if (uVar2 != 0) {
      FUN_140047918(param_3,L"Pausing Socket Receives for \'%i\' seconds.",uVar2);
      QueryPerformanceCounter(&local_28);
      *(float *)(param_1 + 0x8f8) =
           (float)((double)uVar2 + (double)local_28.QuadPart * DAT_14c83f420 + 16777216.0);
      goto LAB_148a36fe8;
    }
  }
  FUN_1468161aa(param_3,L"Must specify a pause time, in seconds.");
LAB_148a36fe8:
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a37016 FUN_148a37016 body=232 status=ok
// SIG undefined FUN_148a37016(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014b4c3d46) */

void FUN_148a37016(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  wchar_t *pwVar5;
  ulonglong auStack_58 [4];
  wchar_t *local_38;
  undefined8 uStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (wchar_t *)0x0;
  uStack_30 = 0;
  local_20 = param_2;
  cVar1 = FUN_140ffc744(&local_20,&local_38,0,0);
  iVar3 = -1;
  if (cVar1 != '\0') {
    pwVar5 = local_38;
    if ((int)uStack_30 == 0) {
      pwVar5 = L"";
    }
    iVar3 = _wtoi(pwVar5);
  }
  uVar2 = FUN_143ecffb6(param_1,iVar3);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
    pwVar5 = L"NoAction";
    break;
  case 1:
    pwVar5 = L"NotReady";
    break;
  case 2:
    pwVar5 = L"AlreadyInProgress";
    break;
  case 3:
    FUN_1468161aa(param_3,L"Began socket recreation.");
    goto LAB_148a370d2;
  case 4:
    pwVar5 = L"Error";
    break;
  case 5:
    piVar4 = (int *)(auStack_58[0] ^ 0xa5);
    cVar1 = (char)piVar4;
    if ((char)auStack_58[0] != -0x5b) {
      *piVar4 = *piVar4 + (int)piVar4;
      *(char *)piVar4 = (char)*piVar4 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)piVar4 = (char)*piVar4;
    *piVar4 = *piVar4 + (int)piVar4;
    *(char *)piVar4 = (char)*piVar4 + cVar1;
    *(char *)piVar4 = (char)*piVar4 + cVar1;
    *(char *)piVar4 = (char)*piVar4 + cVar1;
    return;
  }
  FUN_140047918(param_3,L"Failed to trigger socket recreation. Result: %s",pwVar5);
LAB_148a370d2:
  if (local_38 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a37100 FUN_148a37100 body=218 status=ok
// SIG undefined FUN_148a37100(void)

undefined8 FUN_148a37100(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_3;
  cVar1 = FUN_140988638(&local_38,L"SOCKETS",1);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
  }
  cVar1 = FUN_140988638(&local_38,L"PauseReceive",1);
  if (cVar1 == '\0') {
    cVar1 = FUN_140988638(&local_38,L"RecreateSocket",1);
    if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
    FUN_148a37016(param_1 + -0x28,local_38,param_4);
  }
  else {
    FUN_148a36f26(param_1 + -0x28,local_38,param_4);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a37210 FUN_148a37210 body=373 status=ok
// SIG undefined FUN_148a37210(void)

void FUN_148a37210(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong local_88;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = *param_2;
  lStack_98 = param_2[1];
  if (lStack_98 != 0) {
    LOCK();
    *(int *)(lStack_98 + 8) = *(int *)(lStack_98 + 8) + 1;
    UNLOCK();
  }
  lVar1 = *param_3;
  lVar2 = param_3[2];
  param_3[2] = 0;
  local_58 = param_3[6];
  uStack_50 = param_3[7];
  local_68 = (undefined4)param_3[4];
  uStack_64 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_60 = (undefined4)param_3[5];
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0x2c);
  if (lVar1 != 0) {
    *param_3 = 0;
  }
  local_a8 = param_1;
  local_88 = lVar1;
  lVar3 = FUN_148a44114(param_1 + 0x30);
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  puVar4 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *(undefined8 **)(lVar3 + 0x20) = puVar4;
  *puVar4 = &PTR_LAB_14b4c2ad0;
  puVar4[2] = local_a8;
  puVar4[3] = local_a0;
  puVar4[4] = lStack_98;
  local_a0 = 0;
  lStack_98 = 0;
  puVar4[6] = lVar1;
  puVar4[8] = lVar2;
  local_78 = 0;
  *(undefined4 *)(puVar4 + 0xc) = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar4 + 100) = local_58._4_4_;
  *(undefined4 *)(puVar4 + 0xd) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar4 + 0x6c) = uStack_50._4_4_;
  *(undefined4 *)(puVar4 + 10) = local_68;
  *(undefined4 *)((longlong)puVar4 + 0x54) = uStack_64;
  *(undefined4 *)(puVar4 + 0xb) = uStack_60;
  *(undefined4 *)((longlong)puVar4 + 0x5c) = uStack_5c;
  if (lVar1 != 0) {
    local_88 = 0;
  }
  if (puVar4 != (undefined8 *)&DAT_fffffffffffffff0) {
    *(code **)(lVar3 + 0x10) = FUN_143edd014;
  }
  **(longlong **)(param_1 + 0x38) = lVar3;
  *(longlong *)(param_1 + 0x38) = lVar3;
  FUN_143ed3e3a(&local_a8);
  if (*param_3 != 0) {
    plVar5 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a37386 FUN_148a37386 body=221 status=ok
// SIG undefined FUN_148a37386(void)

undefined8 * FUN_148a37386(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong unaff_GS_OFFSET;
  
  *param_1 = &PTR_FUN_14b4ba060;
  lVar1 = DAT_14cb95878;
  if (*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  FUN_148a4402a(param_1 + 1,*(undefined4 *)(lVar1 + uVar3 * 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar4 = 0;
  param_1[6] = puVar4;
  param_1[9] = puVar4;
  param_1[8] = puVar4;
  param_1[7] = puVar4;
  param_1[10] = 0;
  puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar4 = 0;
  param_1[10] = puVar4;
  param_1[0xd] = puVar4;
  param_1[0xc] = puVar4;
  param_1[0xb] = puVar4;
  param_1[0xe] = param_2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar5 = (**(code **)(*param_2 + 0x3d0))(param_2);
  param_1[0xf] = uVar5;
  return param_1;
}



// FUNCTION 148a37464 FUN_148a37464 body=180 status=ok
// SIG undefined FUN_148a37464(void)

undefined4 FUN_148a37464(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 < 1) {
    param_3 = 0;
  }
  FUN_144a5eaa2(param_2,param_3,0);
  QueryPerformanceCounter(&local_30);
  *(double *)(param_2 + 0x28) = (double)local_30.QuadPart * DAT_14c83f420 + 16777216.0;
  uVar1 = *(uint *)(param_1 + 0x24);
  uVar3 = uVar1 + 1 & *(uint *)(param_1 + 8);
  uVar2 = *(uint *)(param_1 + 0x20);
  if (uVar3 != uVar2) {
    FUN_148a4093a((longlong)(int)(*(uint *)(param_1 + 8) & uVar1) * 0x30 +
                  *(longlong *)(param_1 + 0x10),param_2);
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x24);
    *(uint *)(param_1 + 0x24) = uVar3;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT31((int3)(uVar1 >> 8),uVar3 != uVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3751a FUN_148a3751a body=229 status=ok
// SIG undefined FUN_148a3751a(void)

void FUN_148a3751a(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  code *local_78;
  longlong *local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  byte local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = **(longlong **)(param_1 + 0x30);
  if (lVar2 != 0) {
    do {
      pcVar1 = *(code **)(lVar2 + 0x10);
      local_68 = *(longlong **)(lVar2 + 0x20);
      *(undefined8 *)(lVar2 + 0x20) = 0;
      local_48 = *(undefined4 *)(lVar2 + 0x40);
      uStack_44 = *(undefined4 *)(lVar2 + 0x44);
      uStack_40 = *(undefined4 *)(lVar2 + 0x48);
      uStack_3c = *(undefined4 *)(lVar2 + 0x4c);
      local_58 = *(undefined4 *)(lVar2 + 0x30);
      uStack_54 = *(undefined4 *)(lVar2 + 0x34);
      uStack_50 = *(undefined4 *)(lVar2 + 0x38);
      uStack_4c = *(undefined4 *)(lVar2 + 0x3c);
      if (pcVar1 != (code *)0x0) {
        *(undefined8 *)(lVar2 + 0x10) = 0;
      }
      local_38 = 1;
      *(longlong *)(param_1 + 0x30) = lVar2;
      plVar4 = local_68;
      if (local_68 == (longlong *)0x0) {
        plVar4 = (longlong *)&local_58;
      }
      local_78 = pcVar1;
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar1)(uVar3);
      if (((local_38 & 1) != 0) && (local_78 != (code *)0x0)) {
        plVar4 = local_68;
        if (local_68 == (longlong *)0x0) {
          plVar4 = (longlong *)&local_58;
        }
        (**(code **)(*plVar4 + 0x10))();
      }
      lVar2 = **(longlong **)(param_1 + 0x30);
    } while (lVar2 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a37600 FUN_148a37600 body=110 status=ok
// SIG undefined FUN_148a37600(void)

void FUN_148a37600(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    lVar3 = FUN_148a44114(param_1 + 0x50);
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(undefined ***)(lVar3 + 0x30) = &PTR_LAB_14b4c2b10;
    *(longlong *)(lVar3 + 0x38) = lVar1;
    *(undefined8 *)(lVar3 + 0x40) = uVar2;
    *(code **)(lVar3 + 0x10) = FUN_143edd1c4;
    **(longlong **)(param_1 + 0x58) = lVar3;
    *(longlong *)(param_1 + 0x58) = lVar3;
  }
  return;
}



// FUNCTION 148a3766e FUN_148a3766e body=74 status=ok
// SIG undefined FUN_148a3766e(void)

void FUN_148a3766e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[3];
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
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a376b8 FUN_148a376b8 body=373 status=ok
// SIG undefined FUN_148a376b8(void)

/* WARNING: Removing unreachable block (ram,0x000148a377f1) */
/* WARNING: Removing unreachable block (ram,0x000148a377fd) */
/* WARNING: Removing unreachable block (ram,0x000148a37801) */

void FUN_148a376b8(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_148a37600();
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar9 = *(longlong **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  *(longlong *)(param_1 + 0x88) = lVar4;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  lVar4 = *param_3;
  uVar3 = local_78;
  uVar6 = local_68;
  if (lVar4 != 0) {
    lVar5 = param_3[2];
    param_3[2] = 0;
    local_48 = param_3[6];
    uStack_40 = param_3[7];
    local_58 = (undefined4)param_3[4];
    uStack_54 = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_50 = (undefined4)param_3[5];
    uStack_4c = *(undefined4 *)((longlong)param_3 + 0x2c);
    *param_3 = 0;
    lVar7 = FUN_148a44114(param_1 + 0x50);
    *(undefined8 *)(lVar7 + 0x10) = 0;
    *(undefined8 *)(lVar7 + 0x20) = 0;
    puVar8 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    *(undefined8 **)(lVar7 + 0x20) = puVar8;
    *puVar8 = &PTR_LAB_14b4c2af0;
    local_68 = 0;
    uVar6 = local_68;
    local_78 = 0;
    uVar3 = local_78;
    puVar8[2] = lVar4;
    puVar8[4] = lVar5;
    *(undefined4 *)(puVar8 + 6) = local_58;
    *(undefined4 *)((longlong)puVar8 + 0x34) = uStack_54;
    *(undefined4 *)(puVar8 + 7) = uStack_50;
    *(undefined4 *)((longlong)puVar8 + 0x3c) = uStack_4c;
    *(undefined4 *)(puVar8 + 8) = (undefined4)local_48;
    *(undefined4 *)((longlong)puVar8 + 0x44) = local_48._4_4_;
    *(undefined4 *)(puVar8 + 9) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)puVar8 + 0x4c) = uStack_40._4_4_;
    if (puVar8 + 2 != (longlong *)0x0) {
      *(code **)(lVar7 + 0x10) = FUN_143edd128;
    }
    **(longlong **)(param_1 + 0x58) = lVar7;
    *(longlong *)(param_1 + 0x58) = lVar7;
    local_68 = 0;
    local_78 = 0;
    if (*param_3 != 0) {
      plVar9 = param_3 + 4;
      if ((longlong *)param_3[2] != (longlong *)0x0) {
        plVar9 = (longlong *)param_3[2];
      }
      (**(code **)(*plVar9 + 0x10))(plVar9);
      uVar3 = local_78;
      uVar6 = local_68;
    }
  }
  local_68 = uVar6;
  local_78 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a3782e FUN_148a3782e body=557 status=ok
// SIG undefined FUN_148a3782e(void)

void FUN_148a3782e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined ***pppuVar2;
  undefined1 auStack_188 [40];
  undefined8 local_160;
  undefined8 local_158;
  undefined **local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined **local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_158 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_158);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_158);
  }
  local_160 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_160);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_160);
  }
  local_150 = &PTR_FUN_14b4c3b18;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = &PTR_FUN_14b4c3b20;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = FUN_1414a827a();
  local_d0 = 0;
  local_c8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_c4 = 0xffffffff00000080;
  local_bc = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_80 = 0;
  local_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_74 = 0xffffffff00000080;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 9999;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_150);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_150);
  }
  pppuVar2 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar2 = &local_150;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148a37a5c(local_158,local_160,pppuVar2);
  *param_3 = uVar1;
  FUN_14124efea(&local_150);
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a37a5c FUN_148a37a5c body=90 status=ok
// SIG undefined FUN_148a37a5c(void)

longlong FUN_148a37a5c(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_148a37ab9(DAT_14c951640);
  FUN_14485c47a(lVar1 + 0x50,param_2);
  FUN_1461f4a06(lVar1 + 0x58,param_3);
  *(undefined4 *)(lVar1 + 0x170) = *(undefined4 *)(param_3 + 0x118);
  *(undefined8 *)(lVar1 + 400) = param_1;
  return lVar1;
}



// FUNCTION 148a37ab9 FUN_148a37ab9 body=148 status=ok
// SIG undefined FUN_148a37ab9(void)

undefined8 FUN_148a37ab9(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145997f44();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a37b4e FUN_148a37b4e body=383 status=ok
// SIG undefined FUN_148a37b4e(void)

void FUN_148a37b4e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_148a2deec(&local_48,L"JoinSession",*(undefined8 *)(param_1 + 400),0);
  uVar4 = FUN_14479d2ce(param_1 + 0x50);
  FUN_148a2dfa6(&local_48,uVar4);
  if (local_38 != (longlong *)0x0 && local_48 != 0) {
    (**(code **)(*local_38 + 0x20))(local_38,&local_58);
    plVar3 = local_58;
    if (local_58 == (longlong *)0x0) {
      FUN_1415b7ec4(L"Sessions not supported by Online Subsystem",3,0);
    }
    else {
      (**(code **)(*local_58 + 0x218))(local_58,&local_60,param_1 + 0x178);
      *(undefined8 *)(param_1 + 0x188) = local_60;
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      (**(code **)(*local_58 + 0x208))(local_58,local_48,DAT_14c892fbc,param_1 + 0x58);
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
    if (plVar3 != (longlong *)0x0) goto LAB_148a37c70;
  }
  FUN_1447cd2ec(param_1 + 0x40,0);
LAB_148a37c70:
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
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a37cd4 FUN_148a37cd4 body=306 status=ok
// SIG undefined FUN_148a37cd4(void)

void FUN_148a37cd4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  FUN_144a63fc8();
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
  uVar1 = FUN_148a37e08(local_20,local_28,local_2c);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a37e08 FUN_148a37e08 body=442 status=ok
// SIG undefined FUN_148a37e08(void)

undefined4 FUN_148a37e08(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_108 [40];
  void *local_e0;
  uint local_d8;
  undefined8 local_d0;
  undefined **local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  void *local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_a0 = 0;
  local_98 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_94 = 0xffffffff00000080;
  local_8c = 0;
  local_80 = 0;
  local_78 = 0;
  local_c8 = &PTR_FUN_14b4c1e50;
  local_70 = 0;
  local_68 = 0;
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  local_50 = (void *)0x0;
  uStack_48 = 0;
  local_d0 = param_2;
  FUN_1400021e4(&local_d0,&local_e0);
  uStack_58 = CONCAT44(uStack_58._4_4_,1);
  FUN_1447a1bd6(&local_60,0);
  puVar2 = local_60;
  pvVar1 = local_e0;
  *local_60 = 0;
  lVar4 = (longlong)(int)local_d8;
  *(uint *)(local_60 + 1) = local_d8;
  if (lVar4 == 0) {
    *(undefined4 *)((longlong)local_60 + 0xc) = 0;
    local_d8 = 0;
  }
  else {
    FUN_1446dd670(local_60,local_d8,0);
    memcpy((void *)*puVar2,pvVar1,lVar4 * 2);
  }
  pvVar1 = local_e0;
  uStack_48 = CONCAT44(uStack_48._4_4_,local_d8);
  if (uStack_48._4_4_ == 0 && local_d8 == 0) {
    uStack_48 = (ulonglong)local_d8;
  }
  else {
    FUN_1446dd670(&local_50,local_d8);
    if (local_d8 != 0) {
      memcpy(local_50,pvVar1,(longlong)(int)local_d8 * 2);
    }
  }
  local_70 = 2;
  local_68 = 0;
  FUN_1489b880a(&local_c8,&local_e0,param_3);
  uVar3 = FUN_148a37fc6(param_1,&local_c8);
  if (local_e0 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_148a38158(&local_c8);
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a37fc6 FUN_148a37fc6 body=401 status=ok
// SIG undefined FUN_148a37fc6(void)

ulonglong FUN_148a37fc6(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_1 == 0) || (lVar2 = *(longlong *)(param_1 + 0x398), lVar2 == 0)) {
    uVar8 = 0;
    FUN_1415b7ec4(L"WriteLeaderboardObject - Invalid player state",3,0);
    goto LAB_148a380d6;
  }
  FUN_1408e4d18(lVar2 + 0x3a0,&local_38);
  if (local_38 == 0) {
    pwVar7 = L"WriteLeaderboardObject - Cannot map local player to unique net ID";
LAB_148a38100:
    bVar9 = false;
    FUN_1415b7ec4(pwVar7,3,0);
  }
  else {
    local_50 = (longlong *)0x0;
    cVar3 = FUN_140a68212();
    if (cVar3 == '\0') {
LAB_148a380f9:
      pwVar7 = L"WriteLeaderboardObject - Invalid or uninitialized OnlineSubsystem";
      goto LAB_148a38100;
    }
    local_40 = 0;
    plVar6 = (longlong *)FUN_1401e3228();
    if (plVar6 == (longlong *)0x0) goto LAB_148a380f9;
    (**(code **)(*plVar6 + 0x60))(plVar6,&local_50);
    bVar9 = local_50 != (longlong *)0x0;
    if (local_50 == (longlong *)0x0) {
      FUN_1415b7ec4(L"WriteLeaderboardObject - Leaderboards not supported by Online Subsystem",3,0);
    }
    else {
      bVar4 = (**(code **)(*local_50 + 0x50))(local_50,lVar2 + 0x3f0,local_38,param_2);
      uVar5 = (**(code **)(*local_50 + 0x58))(local_50,lVar2 + 0x3f0);
      param_2 = (ulonglong)CONCAT31((int3)((uint)uVar5 >> 8),(byte)uVar5 & bVar4);
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_48 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_30 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  uVar8 = CONCAT71((int7)(param_2 >> 8),(byte)param_2 & bVar9);
LAB_148a380d6:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a38158 FUN_148a38158 body=106 status=ok
// SIG undefined FUN_148a38158(void)

void FUN_148a38158(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4c1e50;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b439230;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1411632c2(param_1 + 1);
  return;
}



// FUNCTION 148a381c2 FUN_148a381c2 body=275 status=ok
// SIG undefined FUN_148a381c2(void)

void FUN_148a381c2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  uVar2 = local_30;
  uVar1 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = FUN_148a385a5(DAT_14c951640);
  FUN_144757f48(uVar3,0x1000000);
  FUN_148a382da(uVar3,uVar2,uVar1);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a382da FUN_148a382da body=616 status=ok
// SIG undefined FUN_148a382da(void)

void FUN_148a382da(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined1 *)(param_1 + 0x60) = 1;
  local_28 = param_3;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x398) == 0)) {
    FUN_1415b7ec4(L"ULeaderboardQueryCallbackProxy::TriggerFlush - Invalid player state",3,0);
    goto LAB_148a3848b;
  }
  FUN_1408e4d18(*(longlong *)(param_2 + 0x398) + 0x3a0,&local_38);
  if (local_38 == 0) {
    pwVar7 = 
    L"ULeaderboardFlushCallbackProxy::TriggerFlush - Cannot map local player to unique net ID";
LAB_148a384b7:
    FUN_1415b7ec4(pwVar7,3,0);
  }
  else {
    local_48 = (longlong *)0x0;
    cVar4 = FUN_140a68212();
    if (cVar4 == '\0') {
LAB_148a384b0:
      pwVar7 = 
      L"ULeaderboardFlushCallbackProxy::TriggerFlush - Invalid or uninitialized OnlineSubsystem";
      goto LAB_148a384b7;
    }
    local_58 = (undefined8 *)0x0;
    plVar5 = (longlong *)FUN_1401e3228();
    if (plVar5 == (longlong *)0x0) goto LAB_148a384b0;
    (**(code **)(*plVar5 + 0x60))(plVar5,&local_48);
    if (local_48 == (longlong *)0x0) {
      FUN_1415b7ec4(L"ULeaderboardFlushCallbackProxy::TriggerFlush - Leaderboards not supported by Online Subsystem"
                    ,3,0);
    }
    else {
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,3,0x10);
      puVar2 = local_58;
      local_50 = 3;
      *local_58 = &PTR_LAB_149eae4d0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_58[2] = lVar6;
      *local_58 = &PTR_FUN_14b4c2c10;
      local_58[3] = 0;
      FUN_14485c47a(local_58 + 3,param_1);
      puVar2[4] = FUN_148a38544;
      FUN_144a450dc(param_1 + 0x48,&local_58);
      FUN_1449db362(&local_58);
      (**(code **)(*local_48 + 0x60))(local_48,&local_58,param_1 + 0x48);
      *(undefined8 **)(param_1 + 0x58) = local_58;
      (**(code **)(*local_48 + 0x58))(local_48,&local_28);
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_40 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
        }
      }
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_30 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
LAB_148a3848b:
  lVar3 = local_28;
  if (*(char *)(param_1 + 0x60) == '\x01') {
    FUN_145eeb2f4(param_1);
    local_38 = lVar3;
    FUN_1447cd2ec(param_1 + 0x38);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a38544 FUN_148a38544 body=96 status=ok
// SIG undefined FUN_148a38544(void)

void FUN_148a38544(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145eeb2f4();
  if (param_3 == '\0') {
    param_1 = param_1 + 0x38;
  }
  else {
    param_1 = param_1 + 0x28;
  }
  local_28 = param_2;
  FUN_1447cd2ec(param_1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a385a5 FUN_148a385a5 body=148 status=ok
// SIG undefined FUN_148a385a5(void)

undefined8 FUN_148a385a5(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145987e14();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3863a FUN_148a3863a body=247 status=ok
// SIG undefined FUN_148a3863a(void)

void FUN_148a3863a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
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
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148a38732(local_20,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a38732 FUN_148a38732 body=66 status=ok
// SIG undefined FUN_148a38732(void)

undefined8 FUN_148a38732(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_148a38f87(DAT_14c951640);
  FUN_144757f48(uVar1,0x1000000);
  FUN_148a38778(uVar1,param_1,param_2);
  return uVar1;
}



// FUNCTION 148a38778 FUN_148a38778 body=1252 status=ok
// SIG undefined FUN_148a38778(void)

void FUN_148a38778(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong *local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined1 *)(param_1 + 0x70) = 1;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  else {
    uVar5 = FUN_1447210f0(param_2);
    FUN_14485c47a(param_1 + 0x88,uVar5);
    if (*(longlong *)(param_2 + 0x398) != 0) {
      FUN_1408e4d18(*(longlong *)(param_2 + 0x398) + 0x3a0,&local_48);
      if (local_48 == 0) {
        pwVar9 = 
        L"ULeaderboardQueryCallbackProxy::TriggerQuery - Cannot map local player to unique net ID";
LAB_148a38939:
        FUN_1415b7ec4(pwVar9,3,0);
      }
      else {
        local_58 = (longlong *)0x0;
        cVar4 = FUN_140a68212();
        if (cVar4 == '\0') {
LAB_148a38932:
          pwVar9 = 
          L"ULeaderboardQueryCallbackProxy::TriggerQuery - Invalid or uninitialized OnlineSubsystem"
          ;
          goto LAB_148a38939;
        }
        local_68 = (longlong *)0x0;
        plVar6 = (longlong *)FUN_1401e3228();
        if (plVar6 == (longlong *)0x0) goto LAB_148a38932;
        (**(code **)(*plVar6 + 0x60))(plVar6,&local_58);
        if (local_58 == (longlong *)0x0) {
          FUN_1415b7ec4(L"ULeaderboardQueryCallbackProxy::TriggerQuery - Leaderboards not supported by Online Subsystem"
                        ,3,0);
        }
        else {
          *(undefined1 *)(param_1 + 0x70) = 0;
          FUN_144a787a6(param_1 + 0x78,param_3);
          puVar7 = (undefined8 *)FUN_14001cc68(0x48,0x10);
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7[3] = 0;
          puVar7[4] = 0;
          puVar7[5] = 0;
          puVar7[6] = 0;
          puVar7[7] = 0;
          *(undefined4 *)(puVar7 + 8) = 0;
          plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
          plVar8[1] = (longlong)&DAT_100000001;
          *plVar8 = (longlong)&PTR_FUN_14b4c2c80;
          plVar8[2] = (longlong)puVar7;
          *(undefined8 **)(param_1 + 0x60) = puVar7;
          plVar6 = *(longlong **)(param_1 + 0x68);
          if (plVar8 == plVar6) {
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
                iVar2 = *piVar1;
                UNLOCK();
                plVar6 = plVar8;
                goto joined_r0x000148a389b3;
              }
            }
          }
          else {
            *(longlong **)(param_1 + 0x68) = plVar8;
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
                iVar2 = *piVar1;
                UNLOCK();
joined_r0x000148a389b3:
                if (iVar2 == 0) {
                  (**(code **)(*plVar6 + 0x10))(plVar6);
                }
              }
            }
          }
          FUN_144a787a6(*(undefined8 *)(param_1 + 0x60),param_3);
          FUN_144a787a6(*(longlong *)(param_1 + 0x60) + 0x10,param_3);
          lVar3 = *(longlong *)(param_1 + 0x60);
          iVar2 = *(int *)(lVar3 + 0x28);
          *(uint *)(lVar3 + 0x28) = iVar2 + 1U;
          if (*(uint *)(lVar3 + 0x2c) < iVar2 + 1U) {
            FUN_148a44810((longlong *)(lVar3 + 0x20),iVar2);
          }
          puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar2 * 0x18);
          *puVar7 = 0;
          iVar2 = *(int *)(param_3 + 1);
          _Src = (void *)*param_3;
          *(int *)(puVar7 + 1) = iVar2;
          if ((longlong)iVar2 == 0) {
            *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar7,iVar2,0);
            memcpy((void *)*puVar7,_Src,(longlong)iVar2 * 2);
          }
          *(undefined1 *)(puVar7 + 2) = 1;
          local_68 = (longlong *)0x0;
          uStack_60._0_4_ = 0;
          FUN_1446efa72(&local_68,0,3,0x10);
          plVar6 = local_68;
          uStack_60 = CONCAT44(uStack_60._4_4_,3);
          *local_68 = (longlong)&PTR_LAB_149e06450;
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 1;
          lVar3 = DAT_14c758608 + 1;
          if (lVar10 == 0) {
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 2;
            lVar3 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar3;
          local_68[2] = lVar10;
          *local_68 = (longlong)&PTR_FUN_14b4c2ca0;
          local_68[3] = 0;
          FUN_14485c47a(local_68 + 3,param_1);
          plVar6[4] = (longlong)FUN_148a38c5e;
          FUN_144a450dc(param_1 + 0x48,&local_68);
          FUN_1449db362(&local_68);
          (**(code **)(*local_58 + 0x28))(local_58,&local_68,param_1 + 0x48);
          plVar6 = local_40;
          *(longlong **)(param_1 + 0x58) = local_68;
          local_68 = (longlong *)0x0;
          if (local_40 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_40 + 1) = (int)local_40[1] + 1;
            UNLOCK();
          }
          uStack_60 = 1;
          FUN_1413eac7e(&local_68,0);
          *local_68 = local_48;
          local_68[1] = (longlong)plVar6;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
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
          local_78 = *(undefined8 *)(param_1 + 0x60);
          local_70 = *(longlong **)(param_1 + 0x68);
          if (local_70 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_70 + 1) = (int)local_70[1] + 1;
            UNLOCK();
          }
          (**(code **)(*local_58 + 8))(local_58,&local_68,&local_78);
          plVar6 = local_70;
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_70 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*local_70)(local_70);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
          FUN_14127b1cd(local_68,uStack_60 & 0xffffffff);
          if (local_68 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_50 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)local_50 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_50 + 0x10))(local_50);
            }
          }
        }
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_40 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_40 + 0x10))(local_40);
          }
        }
      }
      goto LAB_148a38903;
    }
  }
  FUN_1415b7ec4(L"ULeaderboardQueryCallbackProxy::TriggerQuery - Invalid player state",3,0);
LAB_148a38903:
  if ((param_2 != 0) && (*(char *)(param_1 + 0x70) != '\0')) {
    FUN_148a38c5e(param_1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a38c5e FUN_148a38c5e body=713 status=ok
// SIG undefined FUN_148a38c5e(void)

void FUN_148a38c5e(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  longlong lVar11;
  bool bVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined4 local_b4;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14603916a();
  local_b4 = 0;
  if (((param_2 == '\0') || (lVar7 = *(longlong *)(param_1 + 0x60), lVar7 == 0)) ||
     (*(int *)(lVar7 + 0x38) < 1)) {
LAB_148a38d6b:
    *(undefined1 *)(param_1 + 0x90) = 0;
    uVar4 = 0;
  }
  else {
    lVar13 = 0;
    bVar12 = false;
    do {
      lVar11 = lVar13 * 0x78 + 0x28;
      while( true ) {
        iVar5 = *(int *)(param_1 + 0x80);
        puVar10 = &DAT_149dfb77a;
        if (iVar5 != 0) {
          puVar10 = *(undefined2 **)(param_1 + 0x78);
        }
        plVar14 = (longlong *)(*(longlong *)(lVar7 + 0x30) + lVar11);
        iVar6 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar6 = 0;
        }
        uVar4 = FUN_144a49b4a(iVar6,puVar10);
        iVar5 = FUN_140dfa800(plVar14,uVar4,param_1 + 0x78);
        if ((iVar5 != -1) &&
           (lVar7 = (longlong)iVar5 * 0x38 + *plVar14, lVar8 = lVar7 + 0x10,
           lVar8 != 0 && lVar7 != 0)) break;
        lVar13 = lVar13 + 1;
        lVar7 = *(longlong *)(param_1 + 0x60);
        lVar11 = lVar11 + 0x78;
        if (*(int *)(lVar7 + 0x38) <= lVar13) {
          if (!bVar12) goto LAB_148a38d6b;
          goto LAB_148a38d5e;
        }
      }
      FUN_143e6b7be(lVar8,&local_b4);
      lVar13 = lVar13 + 1;
      lVar7 = *(longlong *)(param_1 + 0x60);
      bVar12 = true;
    } while (lVar13 < *(int *)(lVar7 + 0x38));
LAB_148a38d5e:
    *(undefined1 *)(param_1 + 0x90) = 1;
    uVar4 = local_b4;
  }
  *(undefined4 *)(param_1 + 0x94) = uVar4;
  lVar7 = FUN_14479d2ce(param_1 + 0x88);
  if (lVar7 != 0) {
    if (*(longlong *)(lVar7 + 0x1f0) == 0) {
      puVar9 = (undefined8 *)(lVar7 + 0x458);
    }
    else {
      puVar9 = (undefined8 *)(*(longlong *)(lVar7 + 0x1f0) + 0xf0);
    }
    uVar3 = *puVar9;
    local_b0 = (undefined8 *)0x0;
    local_a8 = 0;
    FUN_1446efa72(&local_b0,0,3,0x10);
    puVar9 = local_b0;
    local_a8 = 3;
    *local_b0 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar13 == 0) {
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_b0[2] = lVar13;
    *local_b0 = &PTR_FUN_14b4c2d10;
    local_b0[3] = 0;
    FUN_14485c47a(local_b0 + 3,param_1);
    puVar9[4] = FUN_148a38f28;
    local_98 = 0;
    local_90 = 0;
    FUN_14487d8d8(&local_98,&local_b0);
    local_58 = 1;
    local_c8 = local_a0;
    local_a0[0] = 0;
    local_9c = 0xbf800000;
    FUN_1406f4044(uVar3,param_1 + 0x98,&local_98,0x3a83126f);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
    FUN_1449db362(&local_b0);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  plVar14 = *(longlong **)(param_1 + 0x68);
  if (plVar14 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    LOCK();
    plVar1 = plVar14 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a38f28 FUN_148a38f28 body=94 status=ok
// SIG undefined FUN_148a38f28(void)

void FUN_148a38f28(longlong param_1)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    local_c = *(undefined4 *)(param_1 + 0x94);
    param_1 = param_1 + 0x28;
  }
  else {
    param_1 = param_1 + 0x38;
    local_c = 0;
  }
  FUN_1447cd2ec(param_1);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a38f87 FUN_148a38f87 body=148 status=ok
// SIG undefined FUN_148a38f87(void)

undefined8 FUN_148a38f87(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145987ef8();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3901c FUN_148a3901c body=264 status=ok
// SIG undefined FUN_148a3901c(void)

void FUN_148a3901c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  uVar2 = local_30;
  uVar1 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = FUN_148a39128(DAT_14c951640);
  FUN_14485c47a(lVar3 + 0x50,uVar1);
  *(undefined8 *)(lVar3 + 0x60) = uVar2;
  *param_3 = lVar3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a39128 FUN_148a39128 body=148 status=ok
// SIG undefined FUN_148a39128(void)

undefined8 FUN_148a39128(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145998030();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a391be FUN_148a391be body=783 status=ok
// SIG undefined FUN_148a391be(void)

void FUN_148a391be(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1 + 0x50;
  cVar7 = FUN_144729dda(lVar1);
  if (cVar7 == '\0') {
    FUN_1415b7ec4(L"A player controller must be provided in order to show the external login UI.",3,
                  0);
    local_50 = FUN_14479d2ce(lVar1);
    FUN_1447cd2ec(param_1 + 0x40);
    goto LAB_148a39218;
  }
  FUN_148a2deec(&local_50,L"Logout",*(undefined8 *)(param_1 + 0x60),0);
  uVar8 = FUN_14479d2ce(lVar1);
  FUN_148a2dfa6(&local_50,uVar8);
  if (local_40 == (longlong *)0x0) {
    local_60 = (longlong *)FUN_14479d2ce(lVar1);
    FUN_1447cd2ec(param_1 + 0x40);
  }
  else {
    (**(code **)(*local_40 + 0x80))(local_40,&local_60);
    if (local_60 == (longlong *)0x0) {
      pwVar11 = L"Logout: identity functionality not supported by the current online subsystem";
LAB_148a392e8:
      FUN_1415b7ec4(pwVar11,3,0);
      local_78 = (undefined8 *)FUN_14479d2ce(lVar1);
      FUN_1447cd2ec(param_1 + 0x40);
    }
    else {
      lVar9 = FUN_14479d2ce(lVar1);
      if (*(longlong *)(lVar9 + 0x430) == 0) {
LAB_148a392e1:
        pwVar11 = L"Only local players can log out";
        goto LAB_148a392e8;
      }
      lVar10 = FUN_1449db7f2();
      lVar9 = *(longlong *)(lVar9 + 0x430);
      if ((((lVar9 == 0) || (lVar10 == 0)) || (lVar4 = *(longlong *)(lVar9 + 0x10), lVar4 == 0)) ||
         ((*(int *)(lVar4 + 0x38) < *(int *)(lVar10 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
           lVar10 + 0x30)))) goto LAB_148a392e1;
      iVar3 = *(int *)(lVar9 + 0xe0);
      lVar1 = local_60[(longlong)iVar3 * 3 + 0x23];
      if ((longlong)(int)lVar1 != 0) {
        lVar9 = local_60[(longlong)iVar3 * 3 + 0x22];
        lVar10 = 0;
        do {
          if (((*(int *)(lVar9 + 8 + lVar10) != 0) &&
              (plVar5 = *(longlong **)(lVar9 + lVar10), plVar5 != (longlong *)0x0)) &&
             (cVar7 = (**(code **)(*plVar5 + 0x20))(plVar5,param_1), cVar7 != '\0'))
          goto LAB_148a3930e;
          lVar10 = lVar10 + 0x10;
        } while ((longlong)(int)lVar1 * 0x10 != lVar10);
      }
      plVar5 = local_60;
      local_78 = (undefined8 *)0x0;
      local_70 = 0;
      FUN_1446efa72(&local_78,0,3,0x10);
      puVar6 = local_78;
      local_70 = 3;
      *local_78 = &PTR_LAB_14b438ba0;
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar9 == 0) {
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_78[2] = lVar9;
      *local_78 = &PTR_FUN_14b4c2d80;
      local_78[3] = 0;
      FUN_14485c47a(local_78 + 3,param_1);
      puVar6[4] = FUN_148a394ce;
      (**(code **)(*plVar5 + 0xb8))(plVar5,&local_68,iVar3,&local_78);
      *(undefined8 *)(param_1 + 0x58) = local_68;
      FUN_1449db362(&local_78);
      (**(code **)(*local_60 + 0xb0))(local_60,iVar3);
    }
LAB_148a3930e:
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_58 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_48 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
LAB_148a39218:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a394ce FUN_148a394ce body=298 status=ok
// SIG undefined FUN_148a394ce(void)

void FUN_148a394ce(longlong param_1,undefined4 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_148a2deec(&local_50,L"Logout",*(undefined8 *)(param_1 + 0x60),0);
  uVar3 = FUN_14479d2ce(param_1 + 0x50);
  FUN_148a2dfa6(&local_50,uVar3);
  if (local_40 != (longlong *)0x0 && local_50 != 0) {
    (**(code **)(*local_40 + 0x80))(local_40,&local_60);
    if (local_60 != (longlong *)0x0) {
      (**(code **)(*local_60 + 0xc0))(local_60,param_2,param_1 + 0x58);
    }
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
  }
  local_60 = (longlong *)FUN_14479d2ce(param_1 + 0x50);
  if (param_3 == '\0') {
    param_1 = param_1 + 0x40;
  }
  else {
    param_1 = param_1 + 0x30;
  }
  FUN_1447cd2ec(param_1);
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
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a395fa FUN_148a395fa body=108 status=ok
// SIG undefined FUN_148a395fa(void)

undefined8 FUN_148a395fa(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  pcVar3 = (code *)*param_1;
  plVar5 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[2];
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar3)(param_2,uVar4,param_3,param_4);
  plVar5 = *(longlong **)(param_3 + 8);
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
  return param_2;
}



// FUNCTION 148a39666 FUN_148a39666 body=78 status=ok
// SIG undefined FUN_148a39666(void)

longlong * FUN_148a39666(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_141462cfc(*param_1,(int)param_1[1]);
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



// FUNCTION 148a396b8 FUN_148a396b8 body=226 status=ok
// SIG undefined FUN_148a396b8(void)

bool FUN_148a396b8(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  lVar3 = DAT_14cb0d2b0;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x3b8);
  uVar2 = FUN_1447210f0();
  lVar3 = FUN_14375e6ea(lVar3,uVar2,uVar1);
  if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x3a0) = lVar3;
    if (lVar3 == 0) goto LAB_148a3970f;
  }
  else {
    FUN_1456cec3c(lVar3);
    *(longlong *)(param_1 + 0x3a0) = lVar3;
  }
  local_38 = &LAB_148a3989c;
  local_30 = 0;
  FUN_148a3979c(DAT_14cb0d2b0 + 0xec8,&local_28,param_1);
  *(undefined8 *)(param_1 + 0x3b0) = local_28;
  FUN_1478c1472(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x3a0) + 0x200));
LAB_148a3970f:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3979c FUN_148a3979c body=254 status=ok
// SIG undefined FUN_148a3979c(void)

undefined8
FUN_148a3979c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14a90c070;
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
  *local_48 = &PTR_FUN_14b4c2e10;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145afbc56(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a398aa FUN_148a398aa body=32 status=ok
// SIG undefined FUN_148a398aa(void)

void FUN_148a398aa(undefined8 param_1,undefined4 param_2)

{
  FUN_148a398ca();
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 148a398ca FUN_148a398ca body=107 status=ok
// SIG undefined FUN_148a398ca(void)

void FUN_148a398ca(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = DAT_14cb0d2b0;
  lVar1 = *(longlong *)(param_1 + 0x3a0);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x308) == '\x01') {
      *(byte *)(lVar1 + 0x309) = *(byte *)(lVar1 + 0x309) | 1;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x170);
      uVar4 = FUN_1447210f0(param_1);
      FUN_147d80972(uVar3,uVar4,uVar2);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x3a0) + 0x2f8) = 0;
    *(undefined8 *)(param_1 + 0x3a0) = 0;
  }
  return;
}



// FUNCTION 148a3993a FUN_148a3993a body=50 status=ok
// SIG undefined FUN_148a3993a(void)

void FUN_148a3993a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    FUN_14480f766(DAT_14cb0d2b0 + 0xec8);
  }
  FUN_148a398ca(param_1);
  return;
}



// FUNCTION 148a3996c FUN_148a3996c body=50 status=ok
// SIG undefined FUN_148a3996c(void)

void FUN_148a3996c(longlong param_1,undefined8 param_2,longlong param_3)

{
  if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_1);
  }
  *(longlong *)(param_3 + 0x98) = param_1;
  return;
}



// FUNCTION 148a399a6 FUN_148a399a6 body=80 status=ok
// SIG undefined FUN_148a399a6(void)

bool FUN_148a399a6(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x498))();
  lVar2 = (**(code **)(*param_3 + 0x498))(param_3);
  bVar3 = param_1[2] == *(longlong *)(param_2 + 0x10);
  if ((*(byte *)(param_1 + 0xc) & 4) != 0) {
    bVar3 = lVar1 == lVar2;
  }
  return bVar3;
}


