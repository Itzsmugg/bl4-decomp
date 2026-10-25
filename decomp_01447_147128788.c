// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147128788 FUN_147128788 body=204 status=ok
// SIG undefined FUN_147128788(void)

void FUN_147128788(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_2 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x38);
    if (0 < (int)*(uint *)(param_1 + 0x38)) {
      uVar3 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x30) + uVar3 * 8);
        if (uVar3 == (int)uVar2 - 1) {
          (**(code **)(*plVar1 + 8))(plVar1,param_2);
        }
        else {
          (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,&local_40);
          (**(code **)(*plVar1 + 8))(plVar1,&local_40);
          if (local_40 != (undefined8 *)0x0) {
            (**(code **)*local_40)(local_40,1);
          }
        }
        uVar3 = uVar3 + 1;
        uVar2 = (ulonglong)*(int *)(param_1 + 0x38);
      } while ((longlong)uVar3 < (longlong)uVar2);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147128856 FUN_147128856 body=182 status=ok
// SIG undefined FUN_147128856(void)

void FUN_147128856(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *local_28 = &PTR_FUN_14a1e9548;
  lVar1 = *param_2;
  local_28[2] = lVar1;
  local_28[4] = 0;
  if (lVar1 != 0) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[2];
    }
    (**(code **)*plVar2)(plVar2,local_28 + 4);
  }
  FUN_147128922(param_1,&local_28);
  if (local_28 != (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147128922 FUN_147128922 body=101 status=ok
// SIG undefined FUN_147128922(void)

void FUN_147128922(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  iVar1 = *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar1 + 1U) {
    FUN_147129f9c((longlong *)(param_1 + 0x30),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 8) = *param_2;
  *param_2 = 0;
                    /* WARNING: Could not recover jumptable at 0x000147128974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 147128988 FUN_147128988 body=227 status=ok
// SIG undefined FUN_147128988(void)

undefined4 FUN_147128988(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_d8 [80];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  code *local_68 [2];
  undefined8 *local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar3 = FUN_142b7a072();
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    local_78 = *(undefined8 *)(param_1 + 0x60);
    uStack_70 = *(undefined8 *)(param_1 + 0x68);
    local_88 = *(undefined4 *)(param_1 + 0x50);
    uStack_84 = *(undefined4 *)(param_1 + 0x54);
    uStack_80 = *(undefined4 *)(param_1 + 0x58);
    uStack_7c = *(undefined4 *)(param_1 + 0x5c);
    *(undefined8 *)(param_1 + 0x30) = 0;
    local_68[0] = (code *)0x0;
    local_58 = (undefined8 *)FUN_14001cc68(0x60,0x10);
    *local_58 = &PTR_LAB_14a1e9560;
    *(char *)(local_58 + 2) = (char)uVar3;
    local_58[4] = lVar1;
    local_58[6] = uVar2;
    *(undefined4 *)(local_58 + 10) = (undefined4)local_78;
    *(undefined4 *)((longlong)local_58 + 0x54) = local_78._4_4_;
    *(undefined4 *)(local_58 + 0xb) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)local_58 + 0x5c) = uStack_70._4_4_;
    *(undefined4 *)(local_58 + 8) = local_88;
    *(undefined4 *)((longlong)local_58 + 0x44) = uStack_84;
    *(undefined4 *)(local_58 + 9) = uStack_80;
    *(undefined4 *)((longlong)local_58 + 0x4c) = uStack_7c;
    if (local_58 + 2 != (undefined8 *)0x0) {
      local_68[0] = FUN_142b7b834;
    }
    FUN_1407461b0(1,local_68);
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147128a6c FUN_147128a6c body=203 status=ok
// SIG undefined FUN_147128a6c(void)

void FUN_147128a6c(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [64];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  code *local_58 [2];
  undefined8 *local_48;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    local_68 = *(undefined8 *)(param_1 + 0x60);
    uStack_60 = *(undefined8 *)(param_1 + 0x68);
    local_78 = *(undefined4 *)(param_1 + 0x50);
    uStack_74 = *(undefined4 *)(param_1 + 0x54);
    uStack_70 = *(undefined4 *)(param_1 + 0x58);
    uStack_6c = *(undefined4 *)(param_1 + 0x5c);
    *(undefined8 *)(param_1 + 0x30) = 0;
    local_58[0] = (code *)0x0;
    local_48 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    *local_48 = &PTR_LAB_14a1e9580;
    local_48[2] = lVar1;
    local_48[4] = uVar2;
    *(undefined4 *)(local_48 + 8) = (undefined4)local_68;
    *(undefined4 *)((longlong)local_48 + 0x44) = local_68._4_4_;
    *(undefined4 *)(local_48 + 9) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)local_48 + 0x4c) = uStack_60._4_4_;
    *(undefined4 *)(local_48 + 6) = local_78;
    *(undefined4 *)((longlong)local_48 + 0x34) = uStack_74;
    *(undefined4 *)(local_48 + 7) = uStack_70;
    *(undefined4 *)((longlong)local_48 + 0x3c) = uStack_6c;
    if (local_48 + 2 != (longlong *)0x0) {
      local_58[0] = FUN_142b7b902;
    }
    FUN_1407461b0(1,local_58);
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147128b38 FUN_147128b38 body=172 status=ok
// SIG undefined FUN_147128b38(void)

undefined4 * FUN_147128b38(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  local_30 = 0;
  cVar2 = FUN_147129038();
  cVar4 = '\x02';
  uVar5 = 1;
  if (cVar2 == '\0') {
LAB_147128b8d:
    uVar6 = 0;
    uVar3 = 0;
    uVar7 = 0;
    uVar8 = 0;
    goto LAB_147128b95;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) {
    uVar5 = 5;
LAB_147128bd0:
    cVar4 = '\0';
  }
  else {
    if (iVar1 == 1) {
      uVar5 = 4;
      goto LAB_147128bd0;
    }
    if (iVar1 != 0) goto LAB_147128b8d;
    cVar4 = *(char *)(param_1 + 0x17) * '\x02';
    uVar5 = 1;
  }
  uVar6 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar7 = 1;
  uVar8 = local_28;
LAB_147128b95:
  *param_2 = uVar6;
  param_2[1] = uVar3;
  param_2[2] = uVar7;
  *(undefined1 *)(param_2 + 3) = uVar5;
  *(char *)((longlong)param_2 + 0xd) = cVar4;
  *(undefined8 *)(param_2 + 4) = uVar8;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147128be6 FUN_147128be6 body=92 status=ok
// SIG undefined FUN_147128be6(void)

void FUN_147128be6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x80);
  *(uint *)(param_1 + 0x80) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x84) < iVar1 + 1U) {
    FUN_14712a022((longlong *)(param_1 + 0x78),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x78);
  lVar3 = (longlong)iVar1 * 0x40;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0;
  *(undefined ***)(lVar2 + 0x20 + lVar3) = &PTR_LAB_14a1e95a0;
  *(code **)(lVar2 + lVar3) = FUN_142b7b9ce;
  return;
}



// FUNCTION 147128cbe FUN_147128cbe body=92 status=ok
// SIG undefined FUN_147128cbe(void)

undefined8 FUN_147128cbe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined1 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x20 + lVar6;
      *(undefined1 *)(lVar2 + -0x20) = *puVar1;
      uVar3 = *(undefined4 *)(puVar1 + 8);
      uVar4 = *(undefined4 *)(puVar1 + 0xc);
      uVar5 = *(undefined4 *)(puVar1 + 0x10);
      *(undefined4 *)(lVar2 + -0x1c) = *(undefined4 *)(puVar1 + 4);
      *(undefined4 *)(lVar2 + -0x18) = uVar3;
      *(undefined4 *)(lVar2 + -0x14) = uVar4;
      *(undefined4 *)(lVar2 + -0x10) = uVar5;
      *(undefined2 *)(lVar2 + -8) = *(undefined2 *)(puVar1 + 0x18);
      *(undefined4 *)(lVar2 + -0xc) = *(undefined4 *)(puVar1 + 0x14);
      FUN_147128e0a();
      lVar6 = lVar6 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147128d42 FUN_147128d42 body=59 status=ok
// SIG undefined FUN_147128d42(void)

undefined8 FUN_147128d42(longlong *param_1)

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



// FUNCTION 147128d88 FUN_147128d88 body=52 status=ok
// SIG undefined FUN_147128d88(void)

void FUN_147128d88(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x60) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      plVar1 = (longlong *)(param_2 + 0x40);
      if (*(longlong **)(param_2 + 0x30) != (longlong *)0x0) {
        plVar1 = *(longlong **)(param_2 + 0x30);
      }
      (**(code **)(*plVar1 + 0x10))();
    }
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 147128e0a FUN_147128e0a body=290 status=ok
// SIG undefined FUN_147128e0a(void)

longlong * FUN_147128e0a(longlong *param_1,longlong *param_2)

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



// FUNCTION 147128f34 FUN_147128f34 body=91 status=ok
// SIG undefined FUN_147128f34(void)

void FUN_147128f34(longlong *param_1)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1[5] + 0x80) = 0;
  FUN_140b576f0();
  lVar1 = param_1[3];
  FUN_147128492(lVar1,(int)param_1[2]);
  LOCK();
  *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + -1;
  UNLOCK();
  (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x10))();
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147128f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147128f90 FUN_147128f90 body=38 status=ok
// SIG undefined FUN_147128f90(void)

undefined8 FUN_147128f90(undefined8 param_1,int param_2)

{
  FUN_147128fb6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147128fb6 FUN_147128fb6 body=129 status=ok
// SIG undefined FUN_147128fb6(void)

void FUN_147128fb6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_LAB_14a1e91d0;
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
  puVar4 = (undefined8 *)param_1[4];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  *param_1 = IQueuedWork::vftable;
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014712902c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar4)(puVar4,1);
      return;
    }
  }
  return;
}



// FUNCTION 147129038 FUN_147129038 body=159 status=ok
// SIG undefined FUN_147129038(void)

undefined8 FUN_147129038(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = 0;
  local_38 = 0;
  local_40 = 0;
  (**(code **)(*param_1 + 8))(param_1,&local_38);
  if (local_38 != 0) {
    lVar1 = (ulonglong)*(byte *)((longlong)param_1 + 0x16) *
            (ulonglong)(*(byte *)((longlong)param_1 + 0x15) >> 3) *
            (longlong)*(int *)((longlong)param_1 + 0xc) * (longlong)(int)param_1[1];
    if (local_40 == lVar1) {
      *param_2 = local_38;
      *param_3 = lVar1;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471290d8 FUN_1471290d8 body=134 status=ok
// SIG undefined FUN_1471290d8(void)

void FUN_1471290d8(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_145ee9c2c(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 8 + *param_1),0,(ulonglong)uVar2 << 3);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
    FUN_147129160(param_1);
    return;
  }
  return;
}



// FUNCTION 147129160 FUN_147129160 body=63 status=ok
// SIG undefined FUN_147129160(void)

void FUN_147129160(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1471291a0(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,2);
  }
  return;
}



// FUNCTION 1471291a0 FUN_1471291a0 body=97 status=ok
// SIG undefined FUN_1471291a0(void)

ulonglong FUN_1471291a0(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,2);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147129202 FUN_147129202 body=134 status=ok
// SIG undefined FUN_147129202(void)

undefined8 *
FUN_147129202(undefined8 *param_1,undefined8 *param_2,int param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 *param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_LAB_14a1e9220;
  param_1[1] = *param_2;
  *(int *)(param_1 + 2) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x14) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x15) = param_5;
  *(undefined1 *)((longlong)param_1 + 0x16) = param_6;
  param_1[3] = *param_7;
  lVar3 = param_7[1];
  param_1[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(bool *)((longlong)param_1 + 0x17) = param_3 == 0;
  plVar4 = (longlong *)param_7[1];
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



// FUNCTION 147129288 FUN_147129288 body=38 status=ok
// SIG undefined FUN_147129288(void)

undefined8 FUN_147129288(undefined8 param_1,int param_2)

{
  FUN_147129380();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471292c2 FUN_1471292c2 body=56 status=ok
// SIG undefined FUN_1471292c2(void)

undefined8 * FUN_1471292c2(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x40,0x10);
  FUN_1471293de(uVar1,param_1);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 1471292fa FUN_1471292fa body=132 status=ok
// SIG undefined FUN_1471292fa(void)

undefined8 * FUN_1471292fa(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar3 = &PTR_LAB_14a1e9220;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  puVar3[2] = uVar2;
  puVar3[3] = *(undefined8 *)(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar3[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *puVar3 = &PTR_FUN_14a1e9200;
  puVar3[5] = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar3[6] = *(undefined8 *)(param_1 + 0x30);
  puVar3[7] = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *param_2 = puVar3;
  return param_2;
}



// FUNCTION 147129380 FUN_147129380 body=93 status=ok
// SIG undefined FUN_147129380(void)

void FUN_147129380(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a1e9200;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14a1e9220;
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
                    /* WARNING: Could not recover jumptable at 0x0001471293d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1471293de FUN_1471293de body=145 status=ok
// SIG undefined FUN_1471293de(void)

undefined8 * FUN_1471293de(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = &PTR_LAB_14a1e9220;
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  uVar5 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 2) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  lVar1 = *(longlong *)(param_2 + 0x20);
  param_1[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *param_1 = &PTR_FUN_14a1e9200;
  param_1[5] = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  lVar1 = *(longlong *)(param_2 + 0x30);
  param_1[6] = lVar1;
  if (lVar1 == 0) {
    param_1[7] = 0;
  }
  else {
    FUN_147129470(param_1 + 5,lVar1,0);
    FUN_1471294df(param_1[5],uVar2,lVar1);
  }
  return param_1;
}



// FUNCTION 147129470 FUN_147129470 body=111 status=ok
// SIG undefined FUN_147129470(void)

void FUN_147129470(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e(param_2 * 8,2);
    uVar2 = 0x7fffffffffffffff;
    if (param_2 <= (longlong)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3;
    }
  }
  if ((longlong)param_3 < (longlong)uVar2) {
    FUN_140d2d5e4(param_1,0,uVar2,8,2);
    param_3 = uVar2;
  }
  *(ulonglong *)(param_1 + 0x10) = param_3;
  return;
}



// FUNCTION 1471294df FUN_1471294df body=70 status=ok
// SIG undefined FUN_1471294df(void)

void FUN_1471294df(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1 * 8) = 0;
      *(undefined2 *)(param_1 + lVar1 * 8) = *(undefined2 *)(param_2 + lVar1 * 8);
      *(undefined2 *)(param_1 + 2 + lVar1 * 8) = *(undefined2 *)(param_2 + 2 + lVar1 * 8);
      *(undefined2 *)(param_1 + 4 + lVar1 * 8) = *(undefined2 *)(param_2 + 4 + lVar1 * 8);
      *(undefined2 *)(param_1 + 6 + lVar1 * 8) = *(undefined2 *)(param_2 + 6 + lVar1 * 8);
      lVar1 = lVar1 + 1;
    } while (param_3 != lVar1);
  }
  return;
}



// FUNCTION 147129526 FUN_147129526 body=38 status=ok
// SIG undefined FUN_147129526(void)

undefined8 FUN_147129526(undefined8 param_1,int param_2)

{
  FUN_14712961c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147129560 FUN_147129560 body=56 status=ok
// SIG undefined FUN_147129560(void)

undefined8 * FUN_147129560(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x40,0x10);
  FUN_14712967a(uVar1,param_1);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 147129598 FUN_147129598 body=132 status=ok
// SIG undefined FUN_147129598(void)

undefined8 * FUN_147129598(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar3 = &PTR_LAB_14a1e9220;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  puVar3[2] = uVar2;
  puVar3[3] = *(undefined8 *)(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar3[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *puVar3 = &PTR_FUN_14a1e9240;
  puVar3[5] = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar3[6] = *(undefined8 *)(param_1 + 0x30);
  puVar3[7] = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *param_2 = puVar3;
  return param_2;
}



// FUNCTION 14712961c FUN_14712961c body=93 status=ok
// SIG undefined FUN_14712961c(void)

void FUN_14712961c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a1e9240;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14a1e9220;
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
                    /* WARNING: Could not recover jumptable at 0x00014712966e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14712967a FUN_14712967a body=149 status=ok
// SIG undefined FUN_14712967a(void)

undefined8 * FUN_14712967a(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = &PTR_LAB_14a1e9220;
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  lVar1 = *(longlong *)(param_2 + 0x20);
  param_1[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *param_1 = &PTR_FUN_14a1e9240;
  param_1[5] = 0;
  _Src = *(void **)(param_2 + 0x28);
  lVar1 = *(longlong *)(param_2 + 0x30);
  param_1[6] = lVar1;
  if (lVar1 == 0) {
    param_1[7] = 0;
  }
  else {
    FUN_147129710(param_1 + 5,lVar1,0);
    memcpy((void *)param_1[5],_Src,lVar1 << 4);
  }
  return param_1;
}



// FUNCTION 147129710 FUN_147129710 body=110 status=ok
// SIG undefined FUN_147129710(void)

void FUN_147129710(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e(param_2 << 4,4);
    uVar2 = 0x7fffffffffffffff;
    if (param_2 <= (longlong)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4;
    }
  }
  if ((longlong)param_3 < (longlong)uVar2) {
    FUN_140d2d5e4(param_1,0,uVar2,0x10,4);
    param_3 = uVar2;
  }
  *(ulonglong *)(param_1 + 0x10) = param_3;
  return;
}



// FUNCTION 14712977e FUN_14712977e body=38 status=ok
// SIG undefined FUN_14712977e(void)

undefined8 FUN_14712977e(undefined8 param_1,int param_2)

{
  FUN_147129874();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471297b8 FUN_1471297b8 body=56 status=ok
// SIG undefined FUN_1471297b8(void)

undefined8 * FUN_1471297b8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x40,0x10);
  FUN_1471298d2(uVar1,param_1);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 1471297f0 FUN_1471297f0 body=132 status=ok
// SIG undefined FUN_1471297f0(void)

undefined8 * FUN_1471297f0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar3 = &PTR_LAB_14a1e9220;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  puVar3[2] = uVar2;
  puVar3[3] = *(undefined8 *)(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar3[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *puVar3 = &PTR_FUN_14a1e9260;
  puVar3[5] = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar3[6] = *(undefined8 *)(param_1 + 0x30);
  puVar3[7] = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *param_2 = puVar3;
  return param_2;
}



// FUNCTION 147129874 FUN_147129874 body=93 status=ok
// SIG undefined FUN_147129874(void)

void FUN_147129874(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a1e9260;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14a1e9220;
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
                    /* WARNING: Could not recover jumptable at 0x0001471298c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1471298d2 FUN_1471298d2 body=149 status=ok
// SIG undefined FUN_1471298d2(void)

undefined8 * FUN_1471298d2(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = &PTR_LAB_14a1e9220;
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  lVar1 = *(longlong *)(param_2 + 0x20);
  param_1[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *param_1 = &PTR_FUN_14a1e9260;
  param_1[5] = 0;
  _Src = *(void **)(param_2 + 0x28);
  lVar1 = *(longlong *)(param_2 + 0x30);
  param_1[6] = lVar1;
  if (lVar1 == 0) {
    param_1[7] = 0;
  }
  else {
    FUN_147129968(param_1 + 5,lVar1,0);
    memcpy((void *)param_1[5],_Src,lVar1 << 2);
  }
  return param_1;
}



// FUNCTION 147129968 FUN_147129968 body=111 status=ok
// SIG undefined FUN_147129968(void)

void FUN_147129968(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e(param_2 * 4,4);
    uVar2 = 0x7fffffffffffffff;
    if (param_2 <= (longlong)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2;
    }
  }
  if ((longlong)param_3 < (longlong)uVar2) {
    FUN_140d2d5e4(param_1,0,uVar2,4,4);
    param_3 = uVar2;
  }
  *(ulonglong *)(param_1 + 0x10) = param_3;
  return;
}



// FUNCTION 1471299d8 FUN_1471299d8 body=115 status=ok
// SIG undefined FUN_1471299d8(void)

void FUN_1471299d8(longlong param_1,undefined1 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_14113f0c0();
  if (cVar1 != '\0') {
    local_21 = param_2;
    plVar2 = (longlong *)FUN_14479d2ce(param_1);
    uVar3 = FUN_14477b072(plVar2,*(undefined8 *)(param_1 + 8));
    (**(code **)(*plVar2 + 0x248))(plVar2,uVar3,&local_21);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147129a4c FUN_147129a4c body=56 status=ok
// SIG undefined FUN_147129a4c(void)

void FUN_147129a4c(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000147129a79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147129a84 FUN_147129a84 body=29 status=ok
// SIG undefined FUN_147129a84(void)

undefined8 FUN_147129a84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147129aa2 FUN_147129aa2 body=38 status=ok
// SIG undefined FUN_147129aa2(void)

undefined8 FUN_147129aa2(undefined8 param_1,int param_2)

{
  FUN_147129ac8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147129ac8 FUN_147129ac8 body=120 status=ok
// SIG undefined FUN_147129ac8(void)

void FUN_147129ac8(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a1e93c0;
  FUN_147129b40(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (undefined8 *)param_1[0xe];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[6] != 0) {
    plVar2 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147129b40 FUN_147129b40 body=58 status=ok
// SIG undefined FUN_147129b40(void)

void FUN_147129b40(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x20);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147129b7a FUN_147129b7a body=87 status=ok
// SIG undefined FUN_147129b7a(void)

void FUN_147129b7a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    plVar3 = (longlong *)(param_1 + 0x40);
    if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x30);
    }
    (**(code **)(*plVar3 + 0x10))();
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
                    /* WARNING: Could not recover jumptable at 0x000147129bc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147129bd2 FUN_147129bd2 body=31 status=ok
// SIG undefined FUN_147129bd2(void)

undefined8 FUN_147129bd2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147129c0e FUN_147129c0e body=93 status=ok
// SIG undefined FUN_147129c0e(void)

void FUN_147129c0e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a1e93e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147129c6c FUN_147129c6c body=126 status=ok
// SIG undefined FUN_147129c6c(void)

void FUN_147129c6c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1e93e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147129cdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147129d12 FUN_147129d12 body=147 status=ok
// SIG undefined FUN_147129d12(void)

void FUN_147129d12(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x60,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147129da6 FUN_147129da6 body=94 status=ok
// SIG undefined FUN_147129da6(void)

longlong * FUN_147129da6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0xa0,0x10);
  FUN_147129e04(plVar3);
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



// FUNCTION 147129e04 FUN_147129e04 body=99 status=ok
// SIG undefined FUN_147129e04(void)

undefined8 * FUN_147129e04(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = SharedPointerInternals::TIntrusiveReferenceController<TFutureState<bool>,1>::vftable;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 2),4000);
  param_1[8] = 0;
  param_1[10] = 0;
  uVar1 = FUN_1405d8a54(1);
  param_1[0x10] = uVar1;
  *(undefined1 *)(param_1 + 0x11) = 0;
  return param_1;
}



// FUNCTION 147129e68 FUN_147129e68 body=31 status=ok
// SIG undefined FUN_147129e68(void)

undefined8 FUN_147129e68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147129ea4 FUN_147129ea4 body=93 status=ok
// SIG undefined FUN_147129ea4(void)

void FUN_147129ea4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a1e9490;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147129f02 FUN_147129f02 body=126 status=ok
// SIG undefined FUN_147129f02(void)

void FUN_147129f02(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a1e9490;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147129f71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147129f80 FUN_147129f80 body=21 status=ok
// SIG undefined FUN_147129f80(void)

undefined8 FUN_147129f80(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147129f9c FUN_147129f9c body=132 status=ok
// SIG undefined FUN_147129f9c(void)

void FUN_147129f9c(longlong param_1,int param_2)

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



// FUNCTION 14712a022 FUN_14712a022 body=132 status=ok
// SIG undefined FUN_14712a022(void)

void FUN_14712a022(longlong param_1,int param_2)

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
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14712a0d8 FUN_14712a0d8 body=23 status=ok
// SIG undefined FUN_14712a0d8(void)

undefined8 FUN_14712a0d8(undefined8 param_1,ushort param_2)

{
  return CONCAT71((int7)((ulonglong)param_2 * 0x3c >> 8),
                  (&DAT_14ca814b8)[(ulonglong)param_2 * 0xf] == 1);
}



// FUNCTION 14712a172 FUN_14712a172 body=59 status=ok
// SIG undefined FUN_14712a172(void)

undefined8 FUN_14712a172(longlong *param_1)

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



// FUNCTION 14712a214 FUN_14712a214 body=114 status=ok
// SIG undefined FUN_14712a214(void)

void FUN_14712a214(longlong *param_1,int param_2)

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



// FUNCTION 14712a28c FUN_14712a28c body=281 status=ok
// SIG undefined FUN_14712a28c(void)

void FUN_14712a28c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined6 uStack_40;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  undefined8 uStack_32;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_3a = 0;
  uStack_38 = 0;
  uStack_32 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  puVar3 = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    puVar3 = &local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((DAT_14cb0d2b0 == 0) || (*(longlong **)(DAT_14cb0d2b0 + 0x1000) == (longlong *)0x0)) {
    puVar4 = &local_78;
    if (puVar1 != (undefined8 *)0x0) {
      puVar4 = puVar1;
    }
    puVar4[10] = 0;
    *(undefined8 *)((longlong)puVar3 + 0x3e) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x46) = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0x1000) + 8))();
  }
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14712a3ae FUN_14712a3ae body=287 status=ok
// SIG undefined FUN_14712a3ae(void)

void FUN_14712a3ae(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
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
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined8 uStack_24;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_2c = 0;
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
  puVar2 = &local_98;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((DAT_14cb0d2b0 == 0) || (*(longlong **)(DAT_14cb0d2b0 + 0x1000) == (longlong *)0x0)) {
    *(undefined8 *)((longlong)puVar2 + 0x6c) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x74) = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0x1000) + 0x10))();
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14712a4d2 FUN_14712a4d2 body=71 status=ok
// SIG undefined FUN_14712a4d2(void)

void FUN_14712a4d2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  char cVar1;
  bool bVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((DAT_14cb0d2b0 == 0) || (*(longlong **)(DAT_14cb0d2b0 + 0x1000) == (longlong *)0x0)) {
    bVar2 = false;
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0x1000) + 0x18))();
    bVar2 = cVar1 != '\0';
  }
  *param_3 = bVar2;
  return;
}



// FUNCTION 14712a51e FUN_14712a51e body=66 status=ok
// SIG undefined FUN_14712a51e(void)

void FUN_14712a51e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((DAT_14cb0d2b0 == 0) || (*(longlong **)(DAT_14cb0d2b0 + 0x1000) == (longlong *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0x1000) + 0x20))();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 14712a560 FUN_14712a560 body=172 status=ok
// SIG undefined FUN_14712a560(void)

void FUN_14712a560(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
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
  if ((DAT_14cb0d2b0 != 0) &&
     (puVar1 = *(undefined8 **)(DAT_14cb0d2b0 + 0x1000), puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,local_18);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14712a674 FUN_14712a674 body=39 status=ok
// SIG undefined FUN_14712a674(void)

undefined8 FUN_14712a674(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14712a6c4 FUN_14712a6c4 body=59 status=ok
// SIG undefined FUN_14712a6c4(void)

undefined8 FUN_14712a6c4(longlong *param_1)

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



// FUNCTION 14712a7c6 FUN_14712a7c6 body=39 status=ok
// SIG undefined FUN_14712a7c6(void)

undefined8 FUN_14712a7c6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14712a816 FUN_14712a816 body=59 status=ok
// SIG undefined FUN_14712a816(void)

undefined8 FUN_14712a816(longlong *param_1)

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



// FUNCTION 14712a8c4 FUN_14712a8c4 body=29 status=ok
// SIG undefined FUN_14712a8c4(void)

void FUN_14712a8c4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14a1eb8c0;
  return;
}



// FUNCTION 14712a8e2 FUN_14712a8e2 body=36 status=ok
// SIG undefined FUN_14712a8e2(void)

undefined8 FUN_14712a8e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14712a922 FUN_14712a922 body=93 status=ok
// SIG undefined FUN_14712a922(void)

void FUN_14712a922(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a1eb850;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14712a980 FUN_14712a980 body=123 status=ok
// SIG undefined FUN_14712a980(void)

void FUN_14712a980(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a1eb850;
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



// FUNCTION 14712aa08 FUN_14712aa08 body=21 status=ok
// SIG undefined FUN_14712aa08(void)

undefined8 FUN_14712aa08(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14712aa1e FUN_14712aa1e body=34 status=ok
// SIG undefined FUN_14712aa1e(void)

undefined8 FUN_14712aa1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14712aa40 FUN_14712aa40 body=98 status=ok
// SIG undefined FUN_14712aa40(void)

void FUN_14712aa40(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_1448c2e86();
  FUN_14712aad2(&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014712aa9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,local_28,param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48,local_28);
}



// FUNCTION 14712aaa4 FUN_14712aaa4 body=32 status=ok
// SIG undefined FUN_14712aaa4(void)

undefined8 FUN_14712aaa4(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Default");
  return param_2;
}



// FUNCTION 14712aad2 FUN_14712aad2 body=120 status=ok
// SIG undefined FUN_14712aad2(void)

undefined8 * FUN_14712aad2(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ac3d8) {
    FUN_144b3d300(&DAT_14c9ac3d8);
    if (DAT_14c9ac3d8 == -1) {
      FUN_1446f470e(&DAT_14c9ac3d0,L"EyeTracker",1);
      _Init_thread_footer(&DAT_14c9ac3d8);
    }
  }
  *param_1 = DAT_14c9ac3d0;
  return param_1;
}



// FUNCTION 14712ab7e FUN_14712ab7e body=75 status=ok
// SIG undefined FUN_14712ab7e(void)

void FUN_14712ab7e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  thunk_FUN_1448284b2(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14712abce FUN_14712abce body=54 status=ok
// SIG undefined FUN_14712abce(void)

void FUN_14712abce(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 14712ac14 FUN_14712ac14 body=39 status=ok
// SIG undefined FUN_14712ac14(void)

void FUN_14712ac14(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  return;
}



// FUNCTION 14712ac3c FUN_14712ac3c body=76 status=ok
// SIG undefined FUN_14712ac3c(void)

void * FUN_14712ac3c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x108);
  memset(_Dst,0,0x108);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  return _Dst;
}



// FUNCTION 14712ac88 FUN_14712ac88 body=54 status=ok
// SIG undefined FUN_14712ac88(void)

void FUN_14712ac88(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 14712acc6 FUN_14712acc6 body=39 status=ok
// SIG undefined FUN_14712acc6(void)

void FUN_14712acc6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  return;
}



// FUNCTION 14712acee FUN_14712acee body=76 status=ok
// SIG undefined FUN_14712acee(void)

void * FUN_14712acee(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x108);
  memset(_Dst,0,0x108);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  return _Dst;
}



// FUNCTION 14712ad3a FUN_14712ad3a body=54 status=ok
// SIG undefined FUN_14712ad3a(void)

void FUN_14712ad3a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14712ad78 FUN_14712ad78 body=83 status=ok
// SIG undefined FUN_14712ad78(void)

longlong FUN_14712ad78(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea40c(lVar1,param_1);
  *(undefined2 *)(lVar1 + 0x108) = 0xffff;
  FUN_147440b96(lVar1 + 0x108,*(undefined8 *)(param_1 + 0x28),L"ReflectionCapture",0);
  return lVar1;
}



// FUNCTION 14712adcc FUN_14712adcc body=69 status=ok
// SIG undefined FUN_14712adcc(void)

longlong FUN_14712adcc(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x108) = 0xffff;
  return lVar1;
}



// FUNCTION 14712ae12 FUN_14712ae12 body=54 status=ok
// SIG undefined FUN_14712ae12(void)

void FUN_14712ae12(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14712ae50 FUN_14712ae50 body=39 status=ok
// SIG undefined FUN_14712ae50(void)

void FUN_14712ae50(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_14713bf28(uVar1,param_1);
  return;
}



// FUNCTION 14712ae78 FUN_14712ae78 body=70 status=ok
// SIG undefined FUN_14712ae78(void)

longlong FUN_14712ae78(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  return lVar1;
}



// FUNCTION 14712aebe FUN_14712aebe body=54 status=ok
// SIG undefined FUN_14712aebe(void)

void FUN_14712aebe(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14712aefc FUN_14712aefc body=39 status=ok
// SIG undefined FUN_14712aefc(void)

void FUN_14712aefc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_14713bf28(uVar1,param_1);
  return;
}



// FUNCTION 14712af24 FUN_14712af24 body=70 status=ok
// SIG undefined FUN_14712af24(void)

longlong FUN_14712af24(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  return lVar1;
}



// FUNCTION 14712af6a FUN_14712af6a body=54 status=ok
// SIG undefined FUN_14712af6a(void)

void FUN_14712af6a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14712afa8 FUN_14712afa8 body=39 status=ok
// SIG undefined FUN_14712afa8(void)

void FUN_14712afa8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_14713bf28(uVar1,param_1);
  return;
}



// FUNCTION 14712afd0 FUN_14712afd0 body=70 status=ok
// SIG undefined FUN_14712afd0(void)

longlong FUN_14712afd0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  return lVar1;
}



// FUNCTION 14712b016 FUN_14712b016 body=54 status=ok
// SIG undefined FUN_14712b016(void)

void FUN_14712b016(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14712b054 FUN_14712b054 body=39 status=ok
// SIG undefined FUN_14712b054(void)

void FUN_14712b054(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_14713bf28(uVar1,param_1);
  return;
}



// FUNCTION 14712b07c FUN_14712b07c body=70 status=ok
// SIG undefined FUN_14712b07c(void)

longlong FUN_14712b07c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  return lVar1;
}



// FUNCTION 14712b0c2 FUN_14712b0c2 body=54 status=ok
// SIG undefined FUN_14712b0c2(void)

void FUN_14712b0c2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14712b100 FUN_14712b100 body=39 status=ok
// SIG undefined FUN_14712b100(void)

void FUN_14712b100(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_14713bf28(uVar1,param_1);
  return;
}



// FUNCTION 14712b128 FUN_14712b128 body=70 status=ok
// SIG undefined FUN_14712b128(void)

longlong FUN_14712b128(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  return lVar1;
}



// FUNCTION 14712b16e FUN_14712b16e body=54 status=ok
// SIG undefined FUN_14712b16e(void)

void FUN_14712b16e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14712b1ac FUN_14712b1ac body=39 status=ok
// SIG undefined FUN_14712b1ac(void)

void FUN_14712b1ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_14713bf28(uVar1,param_1);
  return;
}



// FUNCTION 14712b1d4 FUN_14712b1d4 body=70 status=ok
// SIG undefined FUN_14712b1d4(void)

longlong FUN_14712b1d4(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  return lVar1;
}



// FUNCTION 14712b21a FUN_14712b21a body=54 status=ok
// SIG undefined FUN_14712b21a(void)

void FUN_14712b21a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14712b258 FUN_14712b258 body=39 status=ok
// SIG undefined FUN_14712b258(void)

void FUN_14712b258(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_14713bf28(uVar1,param_1);
  return;
}



// FUNCTION 14712b280 FUN_14712b280 body=70 status=ok
// SIG undefined FUN_14712b280(void)

longlong FUN_14712b280(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  return lVar1;
}



// FUNCTION 14712b2c6 FUN_14712b2c6 body=54 status=ok
// SIG undefined FUN_14712b2c6(void)

void FUN_14712b2c6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14712b304 FUN_14712b304 body=39 status=ok
// SIG undefined FUN_14712b304(void)

void FUN_14712b304(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_14713bf28(uVar1,param_1);
  return;
}



// FUNCTION 14712b32c FUN_14712b32c body=70 status=ok
// SIG undefined FUN_14712b32c(void)

longlong FUN_14712b32c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  return lVar1;
}



// FUNCTION 14712b372 FUN_14712b372 body=54 status=ok
// SIG undefined FUN_14712b372(void)

void FUN_14712b372(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x128);
  return;
}



// FUNCTION 14712b3b0 FUN_14712b3b0 body=39 status=ok
// SIG undefined FUN_14712b3b0(void)

void FUN_14712b3b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x128,0x10);
  FUN_14713c004(uVar1,param_1);
  return;
}



// FUNCTION 14712b3d8 FUN_14712b3d8 body=94 status=ok
// SIG undefined FUN_14712b3d8(void)

longlong FUN_14712b3d8(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x128,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  *(undefined2 *)(lVar1 + 0x10c) = 0xffff;
  *(undefined8 *)(lVar1 + 0x10e) = 0;
  *(undefined8 *)(lVar1 + 0x116) = 0;
  *(undefined8 *)(lVar1 + 0x11b) = 0;
  return lVar1;
}



// FUNCTION 14712b436 FUN_14712b436 body=54 status=ok
// SIG undefined FUN_14712b436(void)

void FUN_14712b436(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x128);
  return;
}



// FUNCTION 14712b474 FUN_14712b474 body=39 status=ok
// SIG undefined FUN_14712b474(void)

void FUN_14712b474(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x128,0x10);
  FUN_14713c004(uVar1,param_1);
  return;
}



// FUNCTION 14712b49c FUN_14712b49c body=94 status=ok
// SIG undefined FUN_14712b49c(void)

longlong FUN_14712b49c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x128,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  *(undefined2 *)(lVar1 + 0x10c) = 0xffff;
  *(undefined8 *)(lVar1 + 0x10e) = 0;
  *(undefined8 *)(lVar1 + 0x116) = 0;
  *(undefined8 *)(lVar1 + 0x11b) = 0;
  return lVar1;
}



// FUNCTION 14712b4fa FUN_14712b4fa body=54 status=ok
// SIG undefined FUN_14712b4fa(void)

void FUN_14712b4fa(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x128);
  return;
}



// FUNCTION 14712b538 FUN_14712b538 body=39 status=ok
// SIG undefined FUN_14712b538(void)

void FUN_14712b538(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x128,0x10);
  FUN_14713c004(uVar1,param_1);
  return;
}



// FUNCTION 14712b560 FUN_14712b560 body=94 status=ok
// SIG undefined FUN_14712b560(void)

longlong FUN_14712b560(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x128,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  *(undefined2 *)(lVar1 + 0x10c) = 0xffff;
  *(undefined8 *)(lVar1 + 0x10e) = 0;
  *(undefined8 *)(lVar1 + 0x116) = 0;
  *(undefined8 *)(lVar1 + 0x11b) = 0;
  return lVar1;
}



// FUNCTION 14712b5be FUN_14712b5be body=54 status=ok
// SIG undefined FUN_14712b5be(void)

void FUN_14712b5be(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x128);
  return;
}



// FUNCTION 14712b5fc FUN_14712b5fc body=39 status=ok
// SIG undefined FUN_14712b5fc(void)

void FUN_14712b5fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x128,0x10);
  FUN_14713c004(uVar1,param_1);
  return;
}



// FUNCTION 14712b624 FUN_14712b624 body=94 status=ok
// SIG undefined FUN_14712b624(void)

longlong FUN_14712b624(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x128,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  *(undefined2 *)(lVar1 + 0x10c) = 0xffff;
  *(undefined8 *)(lVar1 + 0x10e) = 0;
  *(undefined8 *)(lVar1 + 0x116) = 0;
  *(undefined8 *)(lVar1 + 0x11b) = 0;
  return lVar1;
}



// FUNCTION 14712b682 FUN_14712b682 body=54 status=ok
// SIG undefined FUN_14712b682(void)

void FUN_14712b682(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14712b6c0 FUN_14712b6c0 body=83 status=ok
// SIG undefined FUN_14712b6c0(void)

longlong FUN_14712b6c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea40c(lVar1,param_1);
  *(undefined2 *)(lVar1 + 0x108) = 0xffff;
  FUN_147440b96(lVar1 + 0x108,*(undefined8 *)(param_1 + 0x28),L"ReflectionCapture",0);
  return lVar1;
}



// FUNCTION 14712b714 FUN_14712b714 body=69 status=ok
// SIG undefined FUN_14712b714(void)

longlong FUN_14712b714(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x108) = 0xffff;
  return lVar1;
}



// FUNCTION 14712b75a FUN_14712b75a body=54 status=ok
// SIG undefined FUN_14712b75a(void)

void FUN_14712b75a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14712b798 FUN_14712b798 body=39 status=ok
// SIG undefined FUN_14712b798(void)

void FUN_14712b798(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14713c2fe(uVar1,param_1);
  return;
}



// FUNCTION 14712b7c0 FUN_14712b7c0 body=80 status=ok
// SIG undefined FUN_14712b7c0(void)

longlong FUN_14712b7c0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  return lVar1;
}



// FUNCTION 14712b810 FUN_14712b810 body=54 status=ok
// SIG undefined FUN_14712b810(void)

void FUN_14712b810(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14712b84e FUN_14712b84e body=39 status=ok
// SIG undefined FUN_14712b84e(void)

void FUN_14712b84e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14713c2fe(uVar1,param_1);
  return;
}



// FUNCTION 14712b876 FUN_14712b876 body=80 status=ok
// SIG undefined FUN_14712b876(void)

longlong FUN_14712b876(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  return lVar1;
}



// FUNCTION 14712b8c6 FUN_14712b8c6 body=54 status=ok
// SIG undefined FUN_14712b8c6(void)

void FUN_14712b8c6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14712b904 FUN_14712b904 body=39 status=ok
// SIG undefined FUN_14712b904(void)

void FUN_14712b904(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14713c2fe(uVar1,param_1);
  return;
}



// FUNCTION 14712b92c FUN_14712b92c body=80 status=ok
// SIG undefined FUN_14712b92c(void)

longlong FUN_14712b92c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  return lVar1;
}



// FUNCTION 14712b97c FUN_14712b97c body=54 status=ok
// SIG undefined FUN_14712b97c(void)

void FUN_14712b97c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14712b9ba FUN_14712b9ba body=39 status=ok
// SIG undefined FUN_14712b9ba(void)

void FUN_14712b9ba(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14713c2fe(uVar1,param_1);
  return;
}



// FUNCTION 14712b9e2 FUN_14712b9e2 body=80 status=ok
// SIG undefined FUN_14712b9e2(void)

longlong FUN_14712b9e2(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  return lVar1;
}



// FUNCTION 14712ba32 FUN_14712ba32 body=54 status=ok
// SIG undefined FUN_14712ba32(void)

void FUN_14712ba32(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14712ba70 FUN_14712ba70 body=39 status=ok
// SIG undefined FUN_14712ba70(void)

void FUN_14712ba70(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14713c2fe(uVar1,param_1);
  return;
}



// FUNCTION 14712ba98 FUN_14712ba98 body=80 status=ok
// SIG undefined FUN_14712ba98(void)

longlong FUN_14712ba98(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  return lVar1;
}



// FUNCTION 14712bae8 FUN_14712bae8 body=54 status=ok
// SIG undefined FUN_14712bae8(void)

void FUN_14712bae8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14712bb26 FUN_14712bb26 body=39 status=ok
// SIG undefined FUN_14712bb26(void)

void FUN_14712bb26(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14713c2fe(uVar1,param_1);
  return;
}



// FUNCTION 14712bb4e FUN_14712bb4e body=80 status=ok
// SIG undefined FUN_14712bb4e(void)

longlong FUN_14712bb4e(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  return lVar1;
}



// FUNCTION 14712bb9e FUN_14712bb9e body=54 status=ok
// SIG undefined FUN_14712bb9e(void)

void FUN_14712bb9e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14712bbdc FUN_14712bbdc body=39 status=ok
// SIG undefined FUN_14712bbdc(void)

void FUN_14712bbdc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14713c2fe(uVar1,param_1);
  return;
}



// FUNCTION 14712bc04 FUN_14712bc04 body=80 status=ok
// SIG undefined FUN_14712bc04(void)

longlong FUN_14712bc04(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  return lVar1;
}



// FUNCTION 14712bc54 FUN_14712bc54 body=54 status=ok
// SIG undefined FUN_14712bc54(void)

void FUN_14712bc54(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14712bc92 FUN_14712bc92 body=39 status=ok
// SIG undefined FUN_14712bc92(void)

void FUN_14712bc92(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14713c2fe(uVar1,param_1);
  return;
}



// FUNCTION 14712bcba FUN_14712bcba body=80 status=ok
// SIG undefined FUN_14712bcba(void)

longlong FUN_14712bcba(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  return lVar1;
}



// FUNCTION 14712bd0a FUN_14712bd0a body=54 status=ok
// SIG undefined FUN_14712bd0a(void)

void FUN_14712bd0a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x130);
  return;
}



// FUNCTION 14712bd48 FUN_14712bd48 body=39 status=ok
// SIG undefined FUN_14712bd48(void)

void FUN_14712bd48(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x130,0x10);
  FUN_14713c448(uVar1,param_1);
  return;
}



// FUNCTION 14712bd70 FUN_14712bd70 body=96 status=ok
// SIG undefined FUN_14712bd70(void)

longlong FUN_14712bd70(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x130,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x110) = 0xffffffff;
  *(undefined8 *)(lVar1 + 0x114) = 0;
  *(undefined8 *)(lVar1 + 0x11c) = 0;
  *(undefined8 *)(lVar1 + 0x121) = 0;
  return lVar1;
}



// FUNCTION 14712bdd0 FUN_14712bdd0 body=54 status=ok
// SIG undefined FUN_14712bdd0(void)

void FUN_14712bdd0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x130);
  return;
}



// FUNCTION 14712be0e FUN_14712be0e body=39 status=ok
// SIG undefined FUN_14712be0e(void)

void FUN_14712be0e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x130,0x10);
  FUN_14713c448(uVar1,param_1);
  return;
}



// FUNCTION 14712be36 FUN_14712be36 body=96 status=ok
// SIG undefined FUN_14712be36(void)

longlong FUN_14712be36(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x130,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x110) = 0xffffffff;
  *(undefined8 *)(lVar1 + 0x114) = 0;
  *(undefined8 *)(lVar1 + 0x11c) = 0;
  *(undefined8 *)(lVar1 + 0x121) = 0;
  return lVar1;
}



// FUNCTION 14712be96 FUN_14712be96 body=54 status=ok
// SIG undefined FUN_14712be96(void)

void FUN_14712be96(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x130);
  return;
}



// FUNCTION 14712bed4 FUN_14712bed4 body=39 status=ok
// SIG undefined FUN_14712bed4(void)

void FUN_14712bed4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x130,0x10);
  FUN_14713c448(uVar1,param_1);
  return;
}



// FUNCTION 14712befc FUN_14712befc body=96 status=ok
// SIG undefined FUN_14712befc(void)

longlong FUN_14712befc(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x130,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x110) = 0xffffffff;
  *(undefined8 *)(lVar1 + 0x114) = 0;
  *(undefined8 *)(lVar1 + 0x11c) = 0;
  *(undefined8 *)(lVar1 + 0x121) = 0;
  return lVar1;
}



// FUNCTION 14712bf5c FUN_14712bf5c body=54 status=ok
// SIG undefined FUN_14712bf5c(void)

void FUN_14712bf5c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x130);
  return;
}



// FUNCTION 14712bf9a FUN_14712bf9a body=39 status=ok
// SIG undefined FUN_14712bf9a(void)

void FUN_14712bf9a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x130,0x10);
  FUN_14713c448(uVar1,param_1);
  return;
}



// FUNCTION 14712bfc2 FUN_14712bfc2 body=96 status=ok
// SIG undefined FUN_14712bfc2(void)

longlong FUN_14712bfc2(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x130,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x110) = 0xffffffff;
  *(undefined8 *)(lVar1 + 0x114) = 0;
  *(undefined8 *)(lVar1 + 0x11c) = 0;
  *(undefined8 *)(lVar1 + 0x121) = 0;
  return lVar1;
}



// FUNCTION 14712c022 FUN_14712c022 body=54 status=ok
// SIG undefined FUN_14712c022(void)

void FUN_14712c022(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14712c060 FUN_14712c060 body=83 status=ok
// SIG undefined FUN_14712c060(void)

longlong FUN_14712c060(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea40c(lVar1,param_1);
  *(undefined2 *)(lVar1 + 0x108) = 0xffff;
  FUN_147440b96(lVar1 + 0x108,*(undefined8 *)(param_1 + 0x28),L"ReflectionCapture",0);
  return lVar1;
}



// FUNCTION 14712c0b4 FUN_14712c0b4 body=69 status=ok
// SIG undefined FUN_14712c0b4(void)

longlong FUN_14712c0b4(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x108) = 0xffff;
  return lVar1;
}



// FUNCTION 14712c0fa FUN_14712c0fa body=54 status=ok
// SIG undefined FUN_14712c0fa(void)

void FUN_14712c0fa(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14712c138 FUN_14712c138 body=39 status=ok
// SIG undefined FUN_14712c138(void)

void FUN_14712c138(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14713c7a0(uVar1,param_1);
  return;
}



// FUNCTION 14712c160 FUN_14712c160 body=80 status=ok
// SIG undefined FUN_14712c160(void)

longlong FUN_14712c160(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  return lVar1;
}



// FUNCTION 14712c1b0 FUN_14712c1b0 body=54 status=ok
// SIG undefined FUN_14712c1b0(void)

void FUN_14712c1b0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14712c1ee FUN_14712c1ee body=39 status=ok
// SIG undefined FUN_14712c1ee(void)

void FUN_14712c1ee(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14713c7a0(uVar1,param_1);
  return;
}



// FUNCTION 14712c216 FUN_14712c216 body=80 status=ok
// SIG undefined FUN_14712c216(void)

longlong FUN_14712c216(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  return lVar1;
}



// FUNCTION 14712c266 FUN_14712c266 body=54 status=ok
// SIG undefined FUN_14712c266(void)

void FUN_14712c266(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14712c2a4 FUN_14712c2a4 body=39 status=ok
// SIG undefined FUN_14712c2a4(void)

void FUN_14712c2a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14713c7a0(uVar1,param_1);
  return;
}



// FUNCTION 14712c2cc FUN_14712c2cc body=80 status=ok
// SIG undefined FUN_14712c2cc(void)

longlong FUN_14712c2cc(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  return lVar1;
}



// FUNCTION 14712c31c FUN_14712c31c body=54 status=ok
// SIG undefined FUN_14712c31c(void)

void FUN_14712c31c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14712c35a FUN_14712c35a body=39 status=ok
// SIG undefined FUN_14712c35a(void)

void FUN_14712c35a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14713c7a0(uVar1,param_1);
  return;
}



// FUNCTION 14712c382 FUN_14712c382 body=80 status=ok
// SIG undefined FUN_14712c382(void)

longlong FUN_14712c382(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  return lVar1;
}



// FUNCTION 14712c3d2 FUN_14712c3d2 body=54 status=ok
// SIG undefined FUN_14712c3d2(void)

void FUN_14712c3d2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14712c410 FUN_14712c410 body=39 status=ok
// SIG undefined FUN_14712c410(void)

void FUN_14712c410(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14713c7a0(uVar1,param_1);
  return;
}



// FUNCTION 14712c438 FUN_14712c438 body=80 status=ok
// SIG undefined FUN_14712c438(void)

longlong FUN_14712c438(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  return lVar1;
}



// FUNCTION 14712c488 FUN_14712c488 body=54 status=ok
// SIG undefined FUN_14712c488(void)

void FUN_14712c488(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14712c4c6 FUN_14712c4c6 body=39 status=ok
// SIG undefined FUN_14712c4c6(void)

void FUN_14712c4c6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14713c7a0(uVar1,param_1);
  return;
}



// FUNCTION 14712c4ee FUN_14712c4ee body=80 status=ok
// SIG undefined FUN_14712c4ee(void)

longlong FUN_14712c4ee(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  return lVar1;
}



// FUNCTION 14712c53e FUN_14712c53e body=54 status=ok
// SIG undefined FUN_14712c53e(void)

void FUN_14712c53e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14712c57c FUN_14712c57c body=39 status=ok
// SIG undefined FUN_14712c57c(void)

void FUN_14712c57c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14713c7a0(uVar1,param_1);
  return;
}



// FUNCTION 14712c5a4 FUN_14712c5a4 body=80 status=ok
// SIG undefined FUN_14712c5a4(void)

longlong FUN_14712c5a4(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  return lVar1;
}



// FUNCTION 14712c5f4 FUN_14712c5f4 body=54 status=ok
// SIG undefined FUN_14712c5f4(void)

void FUN_14712c5f4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14712c632 FUN_14712c632 body=39 status=ok
// SIG undefined FUN_14712c632(void)

void FUN_14712c632(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14713c7a0(uVar1,param_1);
  return;
}



// FUNCTION 14712c65a FUN_14712c65a body=80 status=ok
// SIG undefined FUN_14712c65a(void)

longlong FUN_14712c65a(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  return lVar1;
}



// FUNCTION 14712c6aa FUN_14712c6aa body=54 status=ok
// SIG undefined FUN_14712c6aa(void)

void FUN_14712c6aa(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x130);
  return;
}



// FUNCTION 14712c6e8 FUN_14712c6e8 body=39 status=ok
// SIG undefined FUN_14712c6e8(void)

void FUN_14712c6e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x130,0x10);
  FUN_14713c8ea(uVar1,param_1);
  return;
}



// FUNCTION 14712c710 FUN_14712c710 body=96 status=ok
// SIG undefined FUN_14712c710(void)

longlong FUN_14712c710(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x130,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x110) = 0xffffffff;
  *(undefined8 *)(lVar1 + 0x114) = 0;
  *(undefined8 *)(lVar1 + 0x11c) = 0;
  *(undefined8 *)(lVar1 + 0x121) = 0;
  return lVar1;
}



// FUNCTION 14712c770 FUN_14712c770 body=54 status=ok
// SIG undefined FUN_14712c770(void)

void FUN_14712c770(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x130);
  return;
}



// FUNCTION 14712c7ae FUN_14712c7ae body=39 status=ok
// SIG undefined FUN_14712c7ae(void)

void FUN_14712c7ae(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x130,0x10);
  FUN_14713c8ea(uVar1,param_1);
  return;
}



// FUNCTION 14712c7d6 FUN_14712c7d6 body=96 status=ok
// SIG undefined FUN_14712c7d6(void)

longlong FUN_14712c7d6(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x130,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x110) = 0xffffffff;
  *(undefined8 *)(lVar1 + 0x114) = 0;
  *(undefined8 *)(lVar1 + 0x11c) = 0;
  *(undefined8 *)(lVar1 + 0x121) = 0;
  return lVar1;
}



// FUNCTION 14712c836 FUN_14712c836 body=54 status=ok
// SIG undefined FUN_14712c836(void)

void FUN_14712c836(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x130);
  return;
}



// FUNCTION 14712c874 FUN_14712c874 body=39 status=ok
// SIG undefined FUN_14712c874(void)

void FUN_14712c874(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x130,0x10);
  FUN_14713c8ea(uVar1,param_1);
  return;
}



// FUNCTION 14712c89c FUN_14712c89c body=96 status=ok
// SIG undefined FUN_14712c89c(void)

longlong FUN_14712c89c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x130,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x110) = 0xffffffff;
  *(undefined8 *)(lVar1 + 0x114) = 0;
  *(undefined8 *)(lVar1 + 0x11c) = 0;
  *(undefined8 *)(lVar1 + 0x121) = 0;
  return lVar1;
}



// FUNCTION 14712c8fc FUN_14712c8fc body=54 status=ok
// SIG undefined FUN_14712c8fc(void)

void FUN_14712c8fc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x130);
  return;
}



// FUNCTION 14712c93a FUN_14712c93a body=39 status=ok
// SIG undefined FUN_14712c93a(void)

void FUN_14712c93a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x130,0x10);
  FUN_14713c8ea(uVar1,param_1);
  return;
}



// FUNCTION 14712c962 FUN_14712c962 body=96 status=ok
// SIG undefined FUN_14712c962(void)

longlong FUN_14712c962(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x130,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x110) = 0xffffffff;
  *(undefined8 *)(lVar1 + 0x114) = 0;
  *(undefined8 *)(lVar1 + 0x11c) = 0;
  *(undefined8 *)(lVar1 + 0x121) = 0;
  return lVar1;
}



// FUNCTION 14712c9c2 FUN_14712c9c2 body=54 status=ok
// SIG undefined FUN_14712c9c2(void)

void FUN_14712c9c2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14712c9fc FUN_14712c9fc body=284 status=ok
// SIG undefined FUN_14712c9fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14712c9fc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9af888) {
    FUN_144b3d300(&DAT_14c9af888);
    if (DAT_14c9af888 == -1) {
      FUN_1456c20ee();
      FUN_140db5666(&DAT_14c9af7e0,2,&DAT_14c9af778,L"TBasePassVSFNoLightMapPolicy",
                    L"/Engine/Private/BasePassVertexShader.usf",L"Main",0,1,FUN_14712cb44,
                    FUN_14712cb1c,FUN_14027001e,&LAB_14712cb18,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9af7e0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c40f);
      _Init_thread_footer(&DAT_14c9af888);
    }
  }
  return &DAT_14c9af7e0;
}



// FUNCTION 14712cb1c FUN_14712cb1c body=39 status=ok
// SIG undefined FUN_14712cb1c(void)

void FUN_14712cb1c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_14713cbbc(uVar1,param_1);
  return;
}



// FUNCTION 14712cb44 FUN_14712cb44 body=71 status=ok
// SIG undefined FUN_14712cb44(void)

longlong FUN_14712cb44(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  return lVar1;
}



// FUNCTION 14712cb8c FUN_14712cb8c body=54 status=ok
// SIG undefined FUN_14712cb8c(void)

void FUN_14712cb8c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14712cbc6 FUN_14712cbc6 body=284 status=ok
// SIG undefined FUN_14712cbc6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14712cbc6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9af9b0) {
    FUN_144b3d300(&DAT_14c9af9b0);
    if (DAT_14c9af9b0 == -1) {
      FUN_1456c2242();
      FUN_140db5666(&DAT_14c9af908,2,&DAT_14c9af8a0,L"TBasePassPSFNoLightMapPolicySkylight",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712cd0e,
                    FUN_14712cce6,FUN_14174d9f0,&LAB_14712cce2,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9af908 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c41b);
      _Init_thread_footer(&DAT_14c9af9b0);
    }
  }
  return &DAT_14c9af908;
}



// FUNCTION 14712cce6 FUN_14712cce6 body=39 status=ok
// SIG undefined FUN_14712cce6(void)

void FUN_14712cce6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_14713ccd6(uVar1,param_1);
  return;
}



// FUNCTION 14712cd0e FUN_14712cd0e body=71 status=ok
// SIG undefined FUN_14712cd0e(void)

longlong FUN_14712cd0e(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  return lVar1;
}



// FUNCTION 14712cd56 FUN_14712cd56 body=54 status=ok
// SIG undefined FUN_14712cd56(void)

void FUN_14712cd56(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14712cd90 FUN_14712cd90 body=284 status=ok
// SIG undefined FUN_14712cd90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14712cd90(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9afad8) {
    FUN_144b3d300(&DAT_14c9afad8);
    if (DAT_14c9afad8 == -1) {
      FUN_1456c1f9a();
      FUN_140db5666(&DAT_14c9afa30,2,&DAT_14c9af9c8,L"TBasePassPSFNoLightMapPolicy",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712ced8,
                    FUN_14712ceb0,FUN_14174dd98,&LAB_14712ceac,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9afa30 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c427);
      _Init_thread_footer(&DAT_14c9afad8);
    }
  }
  return &DAT_14c9afa30;
}



// FUNCTION 14712ceb0 FUN_14712ceb0 body=39 status=ok
// SIG undefined FUN_14712ceb0(void)

void FUN_14712ceb0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_14713ccd6(uVar1,param_1);
  return;
}



// FUNCTION 14712ced8 FUN_14712ced8 body=71 status=ok
// SIG undefined FUN_14712ced8(void)

longlong FUN_14712ced8(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  return lVar1;
}



// FUNCTION 14712cf20 FUN_14712cf20 body=54 status=ok
// SIG undefined FUN_14712cf20(void)

void FUN_14712cf20(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14712cf5e FUN_14712cf5e body=39 status=ok
// SIG undefined FUN_14712cf5e(void)

void FUN_14712cf5e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_14713ccd6(uVar1,param_1);
  return;
}



// FUNCTION 14712cf86 FUN_14712cf86 body=71 status=ok
// SIG undefined FUN_14712cf86(void)

longlong FUN_14712cf86(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  return lVar1;
}



// FUNCTION 14712cfce FUN_14712cfce body=54 status=ok
// SIG undefined FUN_14712cfce(void)

void FUN_14712cfce(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14712d00c FUN_14712d00c body=39 status=ok
// SIG undefined FUN_14712d00c(void)

void FUN_14712d00c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_14713ccd6(uVar1,param_1);
  return;
}



// FUNCTION 14712d034 FUN_14712d034 body=71 status=ok
// SIG undefined FUN_14712d034(void)

longlong FUN_14712d034(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  return lVar1;
}



// FUNCTION 14712d07c FUN_14712d07c body=54 status=ok
// SIG undefined FUN_14712d07c(void)

void FUN_14712d07c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14712d0ba FUN_14712d0ba body=39 status=ok
// SIG undefined FUN_14712d0ba(void)

void FUN_14712d0ba(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_14713ccd6(uVar1,param_1);
  return;
}



// FUNCTION 14712d0e2 FUN_14712d0e2 body=71 status=ok
// SIG undefined FUN_14712d0e2(void)

longlong FUN_14712d0e2(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  return lVar1;
}



// FUNCTION 14712d12a FUN_14712d12a body=54 status=ok
// SIG undefined FUN_14712d12a(void)

void FUN_14712d12a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14712d168 FUN_14712d168 body=39 status=ok
// SIG undefined FUN_14712d168(void)

void FUN_14712d168(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_14713ccd6(uVar1,param_1);
  return;
}



// FUNCTION 14712d190 FUN_14712d190 body=71 status=ok
// SIG undefined FUN_14712d190(void)

longlong FUN_14712d190(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  return lVar1;
}



// FUNCTION 14712d1d8 FUN_14712d1d8 body=54 status=ok
// SIG undefined FUN_14712d1d8(void)

void FUN_14712d1d8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14712d216 FUN_14712d216 body=39 status=ok
// SIG undefined FUN_14712d216(void)

void FUN_14712d216(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_14713ccd6(uVar1,param_1);
  return;
}



// FUNCTION 14712d23e FUN_14712d23e body=71 status=ok
// SIG undefined FUN_14712d23e(void)

longlong FUN_14712d23e(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  return lVar1;
}



// FUNCTION 14712d286 FUN_14712d286 body=54 status=ok
// SIG undefined FUN_14712d286(void)

void FUN_14712d286(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14712d2c4 FUN_14712d2c4 body=39 status=ok
// SIG undefined FUN_14712d2c4(void)

void FUN_14712d2c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_14713ccd6(uVar1,param_1);
  return;
}



// FUNCTION 14712d2ec FUN_14712d2ec body=71 status=ok
// SIG undefined FUN_14712d2ec(void)

longlong FUN_14712d2ec(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  return lVar1;
}



// FUNCTION 14712d334 FUN_14712d334 body=54 status=ok
// SIG undefined FUN_14712d334(void)

void FUN_14712d334(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x128);
  return;
}



// FUNCTION 14712d372 FUN_14712d372 body=39 status=ok
// SIG undefined FUN_14712d372(void)

void FUN_14712d372(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x128,0x10);
  FUN_14713cdf0(uVar1,param_1);
  return;
}



// FUNCTION 14712d39a FUN_14712d39a body=95 status=ok
// SIG undefined FUN_14712d39a(void)

longlong FUN_14712d39a(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x128,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined8 *)(lVar1 + 0x112) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x11f) = 0;
  return lVar1;
}



// FUNCTION 14712d3fa FUN_14712d3fa body=54 status=ok
// SIG undefined FUN_14712d3fa(void)

void FUN_14712d3fa(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x128);
  return;
}



// FUNCTION 14712d438 FUN_14712d438 body=39 status=ok
// SIG undefined FUN_14712d438(void)

void FUN_14712d438(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x128,0x10);
  FUN_14713cdf0(uVar1,param_1);
  return;
}



// FUNCTION 14712d460 FUN_14712d460 body=95 status=ok
// SIG undefined FUN_14712d460(void)

longlong FUN_14712d460(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x128,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined8 *)(lVar1 + 0x112) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x11f) = 0;
  return lVar1;
}



// FUNCTION 14712d4c0 FUN_14712d4c0 body=54 status=ok
// SIG undefined FUN_14712d4c0(void)

void FUN_14712d4c0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x128);
  return;
}



// FUNCTION 14712d4fe FUN_14712d4fe body=39 status=ok
// SIG undefined FUN_14712d4fe(void)

void FUN_14712d4fe(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x128,0x10);
  FUN_14713cdf0(uVar1,param_1);
  return;
}



// FUNCTION 14712d526 FUN_14712d526 body=95 status=ok
// SIG undefined FUN_14712d526(void)

longlong FUN_14712d526(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x128,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined8 *)(lVar1 + 0x112) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x11f) = 0;
  return lVar1;
}



// FUNCTION 14712d586 FUN_14712d586 body=54 status=ok
// SIG undefined FUN_14712d586(void)

void FUN_14712d586(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x128);
  return;
}



// FUNCTION 14712d5c4 FUN_14712d5c4 body=39 status=ok
// SIG undefined FUN_14712d5c4(void)

void FUN_14712d5c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x128,0x10);
  FUN_14713cdf0(uVar1,param_1);
  return;
}



// FUNCTION 14712d5ec FUN_14712d5ec body=95 status=ok
// SIG undefined FUN_14712d5ec(void)

longlong FUN_14712d5ec(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x128,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined8 *)(lVar1 + 0x112) = 0;
  *(undefined8 *)(lVar1 + 0x11a) = 0;
  *(undefined8 *)(lVar1 + 0x11f) = 0;
  return lVar1;
}



// FUNCTION 14712d64c FUN_14712d64c body=54 status=ok
// SIG undefined FUN_14712d64c(void)

void FUN_14712d64c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14712d68a FUN_14712d68a body=39 status=ok
// SIG undefined FUN_14712d68a(void)

void FUN_14712d68a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_14713d0b6(uVar1,param_1);
  return;
}



// FUNCTION 14712d6b2 FUN_14712d6b2 body=71 status=ok
// SIG undefined FUN_14712d6b2(void)

longlong FUN_14712d6b2(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  return lVar1;
}



// FUNCTION 14712d6fa FUN_14712d6fa body=54 status=ok
// SIG undefined FUN_14712d6fa(void)

void FUN_14712d6fa(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14712d738 FUN_14712d738 body=39 status=ok
// SIG undefined FUN_14712d738(void)

void FUN_14712d738(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_14713d1d0(uVar1,param_1);
  return;
}



// FUNCTION 14712d760 FUN_14712d760 body=71 status=ok
// SIG undefined FUN_14712d760(void)

longlong FUN_14712d760(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  return lVar1;
}


