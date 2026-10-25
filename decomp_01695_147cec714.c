// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147cec714 FUN_147cec714 body=223 status=ok
// SIG undefined FUN_147cec714(void)

void FUN_147cec714(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_1412dd960(param_1[5],0,0);
  lVar1 = param_1[5];
  *(undefined4 *)(lVar1 + 0x370) = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(byte *)(lVar1 + 0x34d) = *(byte *)(lVar1 + 0x34d) & 0xf3 | 8;
  *(undefined4 *)(param_1[5] + 0x36c) = *(undefined4 *)(param_1 + 3);
  *(int *)(param_1[5] + 0x3b4) = *(int *)(param_1 + 2) * 2;
  *(float *)(param_1[5] + 0x100) =
       (float)*(int *)((longlong)param_1 + 0x14) / (float)*(int *)((longlong)param_1 + 0x1c);
  *(float *)(param_1[5] + 0x108) = (float)*(int *)(param_1 + 2);
  lVar1 = param_1[5];
  if (*(longlong *)(lVar1 + 0x3b8) != 0) {
    FUN_1400020a8();
    *(undefined8 *)(param_1[5] + 0x3b8) = 0;
    lVar1 = param_1[5];
  }
  uVar2 = FUN_14001cc68((longlong)*(int *)(lVar1 + 0x3b4),0);
  *(undefined8 *)(param_1[5] + 0x3b8) = uVar2;
  memcpy(*(void **)(param_1[5] + 0x3b8),(void *)*param_1,(longlong)*(int *)(param_1[5] + 0x3b4));
  return;
}



// FUNCTION 147cec7f4 FUN_147cec7f4 body=130 status=ok
// SIG undefined FUN_147cec7f4(void)

undefined8 *
FUN_147cec7f4(undefined8 *param_1,undefined8 param_2,undefined1 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 2),4000);
  lVar1 = *param_4;
  param_1[8] = lVar1;
  param_1[10] = 0;
  if (lVar1 != 0) {
    plVar2 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_4[2];
    }
    (**(code **)*plVar2)(plVar2,param_1 + 10);
  }
  if (*param_4 != 0) {
    plVar2 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return param_1;
}



// FUNCTION 147cec876 FUN_147cec876 body=101 status=ok
// SIG undefined FUN_147cec876(void)

void FUN_147cec876(longlong *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 2);
  EnterCriticalSection(lpCriticalSection);
  EnterCriticalSection(lpCriticalSection);
  *(undefined1 *)(*param_1 + 0x30) = 5;
  LeaveCriticalSection(lpCriticalSection);
  LeaveCriticalSection(lpCriticalSection);
  if (param_1[8] != 0) {
    plVar1 = param_1 + 0xc;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[10];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  DeleteCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 147cec8dc FUN_147cec8dc body=705 status=ok
// SIG undefined FUN_147cec8dc(void)

void FUN_147cec8dc(longlong *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong *local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  code *local_a8 [2];
  undefined8 *local_98;
  longlong local_68;
  longlong *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  switch((char)param_1[1]) {
  case '\0':
    lVar2 = *param_1;
    if (*(longlong *)(lVar2 + 0x28) == 0) goto LAB_147cecb43;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
    *(undefined1 *)(*param_1 + 0x30) = 1;
    FUN_147cec714(*param_1);
    *(undefined1 *)(*param_1 + 0x30) = 3;
    break;
  case '\x01':
    lVar2 = *param_1;
    if (*(longlong *)(lVar2 + 0x28) == 0) goto LAB_147cecb43;
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 2);
    EnterCriticalSection(lpCriticalSection);
    *(undefined1 *)(*param_1 + 0x30) = 1;
    FUN_147cec714(*param_1);
    LeaveCriticalSection(lpCriticalSection);
    EnterCriticalSection(lpCriticalSection);
LAB_147cec967:
    *(undefined1 *)(*param_1 + 0x30) = 2;
    FUN_14369f644(*param_1);
    break;
  case '\x02':
    lVar2 = *param_1;
    if (*(longlong *)(lVar2 + 0x28) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
      goto LAB_147cec967;
    }
LAB_147cecb43:
    *(undefined1 *)(lVar2 + 0x30) = 4;
    goto LAB_147cecb47;
  case '\x03':
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
    *(undefined1 *)(*param_1 + 0x30) = 2;
    FUN_14369f780(*param_1);
    break;
  default:
    goto switchD_147cec917_default;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
switchD_147cec917_default:
  if (*(longlong *)(*param_1 + 0x28) == 0) {
    local_b8 = 0;
  }
  else {
    cVar1 = FUN_146269f19();
    if (cVar1 != '\0') {
      FUN_147d404c6(*(undefined8 *)(*param_1 + 0x28),2);
    }
    local_b8 = *(longlong *)(*param_1 + 0x28);
    if (*(longlong *)(local_b8 + 0x3b8) != 0) {
      FUN_1400020a8();
      *(undefined8 *)(*(longlong *)(*param_1 + 0x28) + 0x3b8) = 0;
      local_b8 = *(longlong *)(*param_1 + 0x28);
    }
  }
  local_f8 = param_1[8];
  local_68 = local_f8;
  local_58 = (longlong *)param_1[10];
  param_1[10] = 0;
  local_38 = (int)param_1[0xe];
  uStack_34 = *(undefined4 *)((longlong)param_1 + 0x74);
  uStack_30 = (int)param_1[0xf];
  uStack_2c = *(undefined4 *)((longlong)param_1 + 0x7c);
  local_48 = (int)param_1[0xc];
  uStack_44 = *(undefined4 *)((longlong)param_1 + 100);
  uStack_40 = (int)param_1[0xd];
  uStack_3c = *(undefined4 *)((longlong)param_1 + 0x6c);
  if (local_f8 == 0) {
    local_f8 = 0;
    local_e8 = (longlong *)0x0;
  }
  else {
    param_1[8] = 0;
    local_e8 = (longlong *)0x0;
    plVar3 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar3 = (longlong *)&local_48;
    }
    (**(code **)*plVar3)();
  }
  local_a8[0] = (code *)0x0;
  local_98 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *local_98 = &PTR_LAB_14aa81140;
  local_98[2] = local_f8;
  local_98[4] = local_e8;
  local_e8 = (longlong *)0x0;
  *(undefined4 *)(local_98 + 8) = local_c8;
  *(undefined4 *)((longlong)local_98 + 0x44) = uStack_c4;
  *(undefined4 *)(local_98 + 9) = uStack_c0;
  *(undefined4 *)((longlong)local_98 + 0x4c) = uStack_bc;
  *(undefined4 *)(local_98 + 6) = local_d8;
  *(undefined4 *)((longlong)local_98 + 0x34) = uStack_d4;
  *(undefined4 *)(local_98 + 7) = uStack_d0;
  *(undefined4 *)((longlong)local_98 + 0x3c) = uStack_cc;
  if (local_f8 != 0) {
    local_f8 = 0;
  }
  local_98[10] = local_b8;
  if (local_98 != (undefined8 *)&DAT_fffffffffffffff0) {
    local_a8[0] = FUN_1436a8886;
  }
  FUN_1407461b0(1,local_a8);
  if (local_f8 != 0) {
    plVar3 = local_e8;
    if (local_e8 == (longlong *)0x0) {
      plVar3 = (longlong *)&local_d8;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (local_68 != 0) {
    plVar3 = (longlong *)&local_48;
    if (local_58 != (longlong *)0x0) {
      plVar3 = local_58;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_147cecb47:
  if ((local_20 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cecb9e FUN_147cecb9e body=643 status=ok
// SIG undefined FUN_147cecb9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cecb9e(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  int *piVar1;
  void *_Src;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  void *local_b0;
  uint local_a8;
  undefined1 local_99;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  longlong *local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140056680(&local_b0);
  _Src = local_b0;
  local_90 = (void *)0x0;
  local_88 = CONCAT44(local_88._4_4_,local_a8);
  local_98 = param_1;
  if ((longlong)(int)local_a8 == 0) {
    local_88 = (ulonglong)local_a8;
  }
  else {
    FUN_1446dd670(&local_90,local_a8,0);
    memcpy(local_90,_Src,(longlong)(int)local_a8 * 2);
  }
  local_78 = *param_4;
  local_68[0] = (longlong *)0x0;
  local_80 = param_3;
  if (local_78 != 0) {
    plVar3 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_4[2];
    }
    (**(code **)*plVar3)(plVar3,local_68);
  }
  puVar2 = (undefined8 *)(**(code **)(*DAT_14c872d28 + 0x28))(DAT_14c872d28,0x110,0x10);
  FUN_144a23e74(puVar2,2,1);
  *puVar2 = &PTR_FUN_14aa81170;
  local_b8 = 0;
  FUN_144a24082(puVar2,L".\\Runtime/Engine/Private/SaveGameSystem.cpp(18)",1,0);
  puVar2[0x16] = local_98;
  puVar2[0x17] = local_90;
  local_90 = (void *)0x0;
  *(undefined4 *)(puVar2 + 0x18) = (undefined4)local_88;
  *(undefined4 *)((longlong)puVar2 + 0xc4) = local_88._4_4_;
  local_88 = 0;
  *(undefined4 *)(puVar2 + 0x19) = local_80;
  puVar2[0x1a] = local_78;
  puVar2[0x1c] = local_68[0];
  local_68[0] = (longlong *)0x0;
  *(undefined4 *)(puVar2 + 0x20) = local_48;
  *(undefined4 *)((longlong)puVar2 + 0x104) = uStack_44;
  *(undefined4 *)(puVar2 + 0x21) = uStack_40;
  *(undefined4 *)((longlong)puVar2 + 0x10c) = uStack_3c;
  *(undefined4 *)(puVar2 + 0x1e) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0xf4) = uStack_54;
  *(undefined4 *)(puVar2 + 0x1f) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0xfc) = uStack_4c;
  if (local_78 != 0) {
    local_78 = 0;
  }
  *puVar2 = &PTR_FUN_14aa81160;
  LOCK();
  _DAT_14cb02720 = _DAT_14cb02720 + 1;
  UNLOCK();
  LOCK();
  *(int *)((longlong)puVar2 + 0xc) = *(int *)((longlong)puVar2 + 0xc) + 1;
  UNLOCK();
  puVar2[2] = &DAT_14cb02718;
  FUN_144a23f14((ulonglong)puVar2[0x10] >> 0x3b & 0xffffffffffffff07,
                *(undefined4 *)((longlong)puVar2 + 0x1c));
  local_99 = 1;
  FUN_1447439e4(puVar2);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_78 != 0) {
    plVar3 = local_68[0];
    if (local_68[0] == (longlong *)0x0) {
      plVar3 = (longlong *)&local_58;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (local_90 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_b0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*param_4 != 0) {
    plVar3 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cece22 FUN_147cece22 body=759 status=ok
// SIG undefined FUN_147cece22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cece22(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 *param_5,longlong *param_6)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  void *local_d0;
  uint local_c8;
  undefined1 local_b9;
  undefined8 local_b8;
  undefined1 local_b0;
  void *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_78;
  undefined8 local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_140056680(&local_d0,param_3);
  _Src = local_d0;
  local_a8 = (void *)0x0;
  local_a0 = CONCAT44(local_a0._4_4_,local_c8);
  local_b8 = param_1;
  local_b0 = param_2;
  if ((longlong)(int)local_c8 == 0) {
    local_a0 = (ulonglong)local_c8;
  }
  else {
    FUN_1446dd670(&local_a8,local_c8,0);
    memcpy(local_a8,_Src,(longlong)(int)local_c8 * 2);
  }
  local_90 = *param_5;
  local_88 = param_5[1];
  if (local_88 != 0) {
    LOCK();
    *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
    UNLOCK();
  }
  local_78 = *param_6;
  local_68[0] = 0;
  local_98 = param_4;
  if (local_78 != 0) {
    plVar4 = param_6 + 4;
    if ((longlong *)param_6[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_6[2];
    }
    (**(code **)*plVar4)(plVar4,local_68);
  }
  puVar3 = (undefined8 *)(**(code **)(*DAT_14c872d28 + 0x28))(DAT_14c872d28,0x130,0x10);
  FUN_144a23e74(puVar3,2,1);
  *puVar3 = &PTR_FUN_14aa811b0;
  local_d8 = 1;
  FUN_144a24082(puVar3,L".\\Runtime/Engine/Private/SaveGameSystem.cpp(45)",1,0);
  *(undefined1 *)(puVar3 + 0x17) = local_b0;
  puVar3[0x16] = local_b8;
  puVar3[0x18] = local_a8;
  local_a8 = (void *)0x0;
  *(undefined4 *)(puVar3 + 0x19) = (undefined4)local_a0;
  *(undefined4 *)((longlong)puVar3 + 0xcc) = local_a0._4_4_;
  local_a0 = 0;
  *(undefined4 *)(puVar3 + 0x1a) = local_98;
  puVar3[0x1b] = local_90;
  puVar3[0x1c] = local_88;
  if (local_88 != 0) {
    LOCK();
    *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
    UNLOCK();
  }
  puVar3[0x1e] = local_78;
  puVar3[0x20] = local_68[0];
  local_68[0] = 0;
  *(undefined4 *)(puVar3 + 0x24) = local_48;
  *(undefined4 *)((longlong)puVar3 + 0x124) = uStack_44;
  *(undefined4 *)(puVar3 + 0x25) = uStack_40;
  *(undefined4 *)((longlong)puVar3 + 300) = uStack_3c;
  *(undefined4 *)(puVar3 + 0x22) = local_58;
  *(undefined4 *)((longlong)puVar3 + 0x114) = uStack_54;
  *(undefined4 *)(puVar3 + 0x23) = uStack_50;
  *(undefined4 *)((longlong)puVar3 + 0x11c) = uStack_4c;
  if (local_78 != 0) {
    local_78 = 0;
  }
  *puVar3 = &PTR_FUN_14aa811a0;
  LOCK();
  _DAT_14cb02720 = _DAT_14cb02720 + 1;
  UNLOCK();
  LOCK();
  *(int *)((longlong)puVar3 + 0xc) = *(int *)((longlong)puVar3 + 0xc) + 1;
  UNLOCK();
  puVar3[2] = &DAT_14cb02718;
  FUN_144a23f14((ulonglong)puVar3[0x10] >> 0x3b & 0xffffffffffffff07,
                *(undefined4 *)((longlong)puVar3 + 0x1c));
  local_b9 = 1;
  FUN_1447439e4(puVar3);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  FUN_14369f928(&local_b8);
  if (local_d0 != (void *)0x0) {
    FUN_1400020a8();
  }
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
  if (*param_6 != 0) {
    plVar4 = param_6 + 4;
    if ((longlong *)param_6[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_6[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ced11a FUN_147ced11a body=679 status=ok
// SIG undefined FUN_147ced11a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147ced11a(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined4 param_4,
                  longlong *param_5)

{
  int *piVar1;
  void *_Src;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  void *local_c0;
  uint local_b8;
  undefined1 local_a9;
  undefined8 local_a8;
  undefined1 local_a0;
  void *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_78;
  longlong *local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_140056680(&local_c0,param_3);
  _Src = local_c0;
  local_98 = (void *)0x0;
  local_90 = CONCAT44(local_90._4_4_,local_b8);
  local_a8 = param_1;
  local_a0 = param_2;
  if ((longlong)(int)local_b8 == 0) {
    local_90 = (ulonglong)local_b8;
  }
  else {
    FUN_1446dd670(&local_98,local_b8,0);
    memcpy(local_98,_Src,(longlong)(int)local_b8 * 2);
  }
  local_78 = *param_5;
  local_68[0] = (longlong *)0x0;
  local_88 = param_4;
  if (local_78 != 0) {
    plVar3 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_5[2];
    }
    (**(code **)*plVar3)(plVar3,local_68);
  }
  puVar2 = (undefined8 *)(**(code **)(*DAT_14c872d28 + 0x28))(DAT_14c872d28,0x120,0x10);
  FUN_144a23e74(puVar2,2,1);
  *puVar2 = &PTR_FUN_14aa811f0;
  local_c8 = 0;
  FUN_144a24082(puVar2,L".\\Runtime/Engine/Private/SaveGameSystem.cpp(75)",1,0);
  *(undefined1 *)(puVar2 + 0x17) = local_a0;
  puVar2[0x16] = local_a8;
  puVar2[0x18] = local_98;
  local_98 = (void *)0x0;
  *(undefined4 *)(puVar2 + 0x19) = (undefined4)local_90;
  *(undefined4 *)((longlong)puVar2 + 0xcc) = local_90._4_4_;
  local_90 = 0;
  *(undefined4 *)(puVar2 + 0x1a) = local_88;
  puVar2[0x1c] = local_78;
  puVar2[0x1e] = local_68[0];
  local_68[0] = (longlong *)0x0;
  *(undefined4 *)(puVar2 + 0x22) = local_48;
  *(undefined4 *)((longlong)puVar2 + 0x114) = uStack_44;
  *(undefined4 *)(puVar2 + 0x23) = uStack_40;
  *(undefined4 *)((longlong)puVar2 + 0x11c) = uStack_3c;
  *(undefined4 *)(puVar2 + 0x20) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x104) = uStack_54;
  *(undefined4 *)(puVar2 + 0x21) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x10c) = uStack_4c;
  if (local_78 != 0) {
    local_78 = 0;
  }
  *puVar2 = &PTR_FUN_14aa811e0;
  LOCK();
  _DAT_14cb02720 = _DAT_14cb02720 + 1;
  UNLOCK();
  LOCK();
  *(int *)((longlong)puVar2 + 0xc) = *(int *)((longlong)puVar2 + 0xc) + 1;
  UNLOCK();
  puVar2[2] = &DAT_14cb02718;
  FUN_144a23f14((ulonglong)puVar2[0x10] >> 0x3b & 0xffffffffffffff07,
                *(undefined4 *)((longlong)puVar2 + 0x1c));
  local_a9 = 1;
  FUN_1447439e4(puVar2);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_78 != 0) {
    plVar3 = local_68[0];
    if (local_68[0] == (longlong *)0x0) {
      plVar3 = (longlong *)&local_58;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_c0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*param_5 != 0) {
    plVar3 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ced3c2 FUN_147ced3c2 body=679 status=ok
// SIG undefined FUN_147ced3c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147ced3c2(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined4 param_4,
                  longlong *param_5)

{
  int *piVar1;
  void *_Src;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  void *local_c0;
  uint local_b8;
  undefined1 local_a9;
  undefined8 local_a8;
  undefined1 local_a0;
  void *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_78;
  longlong *local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_140056680(&local_c0,param_3);
  _Src = local_c0;
  local_98 = (void *)0x0;
  local_90 = CONCAT44(local_90._4_4_,local_b8);
  local_a8 = param_1;
  local_a0 = param_2;
  if ((longlong)(int)local_b8 == 0) {
    local_90 = (ulonglong)local_b8;
  }
  else {
    FUN_1446dd670(&local_98,local_b8,0);
    memcpy(local_98,_Src,(longlong)(int)local_b8 * 2);
  }
  local_78 = *param_5;
  local_68[0] = (longlong *)0x0;
  local_88 = param_4;
  if (local_78 != 0) {
    plVar3 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_5[2];
    }
    (**(code **)*plVar3)(plVar3,local_68);
  }
  puVar2 = (undefined8 *)(**(code **)(*DAT_14c872d28 + 0x28))(DAT_14c872d28,0x120,0x10);
  FUN_144a23e74(puVar2,2,1);
  *puVar2 = &PTR_FUN_14aa81230;
  local_c8 = 0;
  FUN_144a24082(puVar2,L".\\Runtime/Engine/Private/SaveGameSystem.cpp(103)",1,0);
  *(undefined1 *)(puVar2 + 0x17) = local_a0;
  puVar2[0x16] = local_a8;
  puVar2[0x18] = local_98;
  local_98 = (void *)0x0;
  *(undefined4 *)(puVar2 + 0x19) = (undefined4)local_90;
  *(undefined4 *)((longlong)puVar2 + 0xcc) = local_90._4_4_;
  local_90 = 0;
  *(undefined4 *)(puVar2 + 0x1a) = local_88;
  puVar2[0x1c] = local_78;
  puVar2[0x1e] = local_68[0];
  local_68[0] = (longlong *)0x0;
  *(undefined4 *)(puVar2 + 0x22) = local_48;
  *(undefined4 *)((longlong)puVar2 + 0x114) = uStack_44;
  *(undefined4 *)(puVar2 + 0x23) = uStack_40;
  *(undefined4 *)((longlong)puVar2 + 0x11c) = uStack_3c;
  *(undefined4 *)(puVar2 + 0x20) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x104) = uStack_54;
  *(undefined4 *)(puVar2 + 0x21) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x10c) = uStack_4c;
  if (local_78 != 0) {
    local_78 = 0;
  }
  *puVar2 = &PTR_FUN_14aa81220;
  LOCK();
  _DAT_14cb02720 = _DAT_14cb02720 + 1;
  UNLOCK();
  LOCK();
  *(int *)((longlong)puVar2 + 0xc) = *(int *)((longlong)puVar2 + 0xc) + 1;
  UNLOCK();
  puVar2[2] = &DAT_14cb02718;
  FUN_144a23f14((ulonglong)puVar2[0x10] >> 0x3b & 0xffffffffffffff07,
                *(undefined4 *)((longlong)puVar2 + 0x1c));
  local_a9 = 1;
  FUN_1447439e4(puVar2);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_78 != 0) {
    plVar3 = local_68[0];
    if (local_68[0] == (longlong *)0x0) {
      plVar3 = (longlong *)&local_58;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_c0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*param_5 != 0) {
    plVar3 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ced66a FUN_147ced66a body=309 status=ok
// SIG undefined FUN_147ced66a(void)

void FUN_147ced66a(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  longlong local_a8;
  longlong *local_98 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  code *local_68 [2];
  undefined8 *local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_4 != 0) {
    local_98[0] = (longlong *)0x0;
    plVar1 = (longlong *)param_4[2];
    if ((longlong *)param_4[2] == (longlong *)0x0) {
      plVar1 = param_4 + 4;
    }
    local_b8 = param_3;
    local_a8 = *param_4;
    (**(code **)*plVar1)(plVar1,local_98);
    local_68[0] = (code *)0x0;
    local_58 = (undefined8 *)FUN_14001cc68(0x60,0x10);
    *local_58 = &PTR_FUN_14aa812a0;
    *(undefined4 *)(local_58 + 2) = local_b8;
    local_58[4] = local_a8;
    local_58[6] = local_98[0];
    local_98[0] = (longlong *)0x0;
    *(undefined4 *)(local_58 + 10) = local_78;
    *(undefined4 *)((longlong)local_58 + 0x54) = uStack_74;
    *(undefined4 *)(local_58 + 0xb) = uStack_70;
    *(undefined4 *)((longlong)local_58 + 0x5c) = uStack_6c;
    *(undefined4 *)(local_58 + 8) = local_88;
    *(undefined4 *)((longlong)local_58 + 0x44) = uStack_84;
    *(undefined4 *)(local_58 + 9) = uStack_80;
    *(undefined4 *)((longlong)local_58 + 0x4c) = uStack_7c;
    if (local_a8 != 0) {
      local_a8 = 0;
    }
    if (local_58 != (undefined8 *)&DAT_fffffffffffffff0) {
      local_68[0] = FUN_1436aa4fa;
    }
    FUN_147ced7a0(local_68);
    if (local_a8 != 0) {
      plVar1 = local_98[0];
      if (local_98[0] == (longlong *)0x0) {
        plVar1 = (longlong *)&local_88;
      }
      (**(code **)(*plVar1 + 0x10))();
    }
    if (*param_4 != 0) {
      plVar1 = param_4 + 4;
      if ((longlong *)param_4[2] != (longlong *)0x0) {
        plVar1 = (longlong *)param_4[2];
      }
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ced7a0 FUN_147ced7a0 body=442 status=ok
// SIG undefined FUN_147ced7a0(void)

void FUN_147ced7a0(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  longlong local_78;
  longlong *local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar5 = FUN_1401cb356();
  lVar2 = *param_1;
  lVar3 = param_1[2];
  param_1[2] = 0;
  local_48 = param_1[6];
  uStack_40 = param_1[7];
  local_58 = (undefined4)param_1[4];
  uStack_54 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_50 = (undefined4)param_1[5];
  uStack_4c = *(undefined4 *)((longlong)param_1 + 0x2c);
  if (lVar2 != 0) {
    *param_1 = 0;
  }
  local_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_78 = lVar2;
  FUN_1446efa72(&local_98,0,6,0x10);
  local_90 = 6;
  *local_98 = &PTR_LAB_149e02020;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_98[2] = lVar6;
  *local_98 = &PTR_FUN_14aa812c0;
  local_98[4] = lVar2;
  local_98[6] = lVar3;
  local_68 = (longlong *)0x0;
  *(undefined4 *)(local_98 + 10) = (undefined4)local_48;
  *(undefined4 *)((longlong)local_98 + 0x54) = local_48._4_4_;
  *(undefined4 *)(local_98 + 0xb) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)local_98 + 0x5c) = uStack_40._4_4_;
  *(undefined4 *)(local_98 + 8) = local_58;
  *(undefined4 *)((longlong)local_98 + 0x44) = uStack_54;
  *(undefined4 *)(local_98 + 9) = uStack_50;
  *(undefined4 *)((longlong)local_98 + 0x4c) = uStack_4c;
  if (lVar2 != 0) {
    local_78 = 0;
  }
  local_a8 = 0;
  FUN_1405f67fc(uVar5,local_88,&local_98,L"ISaveGameSystem_OnAsyncComplete_Lambda");
  if (local_80 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_80 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
  }
  FUN_1449db362(&local_98);
  if (local_78 != 0) {
    plVar7 = (longlong *)&local_58;
    if (local_68 != (longlong *)0x0) {
      plVar7 = local_68;
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if (*param_1 != 0) {
    plVar7 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ced95b FUN_147ced95b body=1082 status=ok
// SIG undefined FUN_147ced95b(void)

int FUN_147ced95b(undefined8 param_1,float param_2,float param_3)

{
  void *_Src;
  uint uVar1;
  undefined2 *puVar2;
  float *pfVar3;
  wchar_t *_Str;
  ulonglong uVar4;
  float *pfVar5;
  ushort uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  float *pfVar11;
  ushort uVar12;
  longlong lVar13;
  bool bVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined2 *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined2 *local_a0;
  int local_98;
  float local_90 [4];
  float *local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  fVar17 = param_2;
  if (param_3 <= param_2) {
    fVar17 = param_3;
  }
  local_80 = (float *)0x0;
  local_90[0] = 20.0;
  local_90[1] = 50.0;
  local_78 = 0x400000003;
  local_90[2] = 70.0;
  if (DAT_14c872ce0 == 0) {
    bVar14 = true;
    pfVar3 = local_90;
    pfVar11 = local_90 + 3;
  }
  else {
    FUN_140056680(&local_b8,L"PerfIndexThresholds_");
    FUN_144a7dea0(&local_a0,&local_b8,param_1);
    if (local_b8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    local_b8 = (undefined8 *)0x0;
    uStack_b0 = 0;
    puVar2 = local_a0;
    if (local_98 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    local_d8 = &DAT_14c872ac8;
    FUN_140ffc60a(DAT_14c872ce0,L"ScalabilitySettings",puVar2);
    fVar16 = fVar17;
    if (1 < (int)uStack_b0) {
      local_c8 = (undefined2 *)0x0;
      local_c0 = *(int *)(local_b8 + 1);
      lVar8 = (longlong)local_c0;
      _Src = (void *)*local_b8;
      if (lVar8 == 0) {
        local_bc = 0;
        puVar2 = &DAT_149dfb77a;
        iVar7 = 0;
      }
      else {
        FUN_1446dd670(&local_c8,local_c0,0);
        memcpy(local_c8,_Src,lVar8 * 2);
        puVar2 = &DAT_149dfb77a;
        iVar7 = local_c0;
        if (local_c0 != 0) {
          puVar2 = local_c8;
        }
      }
      lVar8 = 0;
      while( true ) {
        uVar12 = *(ushort *)((longlong)puVar2 + lVar8);
        uVar4 = (ulonglong)uVar12;
        uVar6 = *(ushort *)((longlong)&DAT_14a819e16 + lVar8);
        fVar16 = param_2;
        if (uVar12 != uVar6) break;
        if (uVar12 == 0) goto LAB_147cedbf1;
LAB_147cedaf8:
        lVar8 = lVar8 + 2;
      }
      if ((uVar6 | uVar12) < 0x80) {
        uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
        uVar9 = (ulonglong)uVar6;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar9]) goto LAB_147cedaf8;
      }
      if (uVar12 != uVar6) {
        puVar2 = local_c8;
        if (iVar7 == 0) {
          puVar2 = &DAT_149dfb77a;
        }
        lVar8 = 0;
        goto LAB_147cedb3b;
      }
LAB_147cedbf1:
      bVar14 = (longlong)local_78 < 0;
      local_78 = local_78 & 0xffffffff00000000;
      if (bVar14) {
        FUN_147d0ae4e(local_90);
      }
      if (1 < (int)uStack_b0) {
        lVar8 = 1;
        lVar13 = 0x18;
        do {
          _Str = L"";
          if (*(int *)((longlong)local_b8 + lVar13) != 0) {
            _Str = *(wchar_t **)((longlong)local_b8 + lVar13 + -8);
          }
          dVar15 = _wtof(_Str);
          uVar4 = local_78;
          lVar10 = (longlong)(int)local_78;
          uVar1 = (int)local_78 + 1;
          local_78 = CONCAT44(local_78._4_4_,uVar1);
          if (local_78._4_4_ < uVar1) {
            FUN_147d0add8(local_90,uVar4 & 0xffffffff);
          }
          pfVar3 = local_80;
          if (local_80 == (float *)0x0) {
            pfVar3 = local_90;
          }
          pfVar3[lVar10] = (float)dVar15;
          lVar8 = lVar8 + 1;
          lVar13 = lVar13 + 0x10;
        } while (lVar8 < (int)uStack_b0);
      }
LAB_147cedca3:
      if (local_c8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_1447a1747(local_b8,(int)uStack_b0);
    if (local_b8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (local_a0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    bVar14 = local_80 == (float *)0x0;
    pfVar3 = local_90;
    if (!bVar14) {
      pfVar3 = local_80;
    }
    if ((longlong)(int)local_78 == 0) {
      iVar7 = 0;
      goto LAB_147cedd2f;
    }
    pfVar11 = pfVar3 + (int)local_78;
    fVar17 = fVar16;
  }
  iVar7 = 0;
  do {
    pfVar5 = pfVar3 + 1;
    iVar7 = (uint)(*pfVar3 <= fVar17) + iVar7;
    if (fVar17 < *pfVar3) break;
    pfVar3 = pfVar5;
  } while (pfVar5 != pfVar11);
LAB_147cedd2f:
  if (!bVar14) {
    FUN_1400020a8(local_80);
  }
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar7;
LAB_147cedb3b:
  uVar12 = *(ushort *)((longlong)puVar2 + lVar8);
  uVar4 = (ulonglong)uVar12;
  uVar6 = *(ushort *)((longlong)&DAT_14a915eb6 + lVar8);
  fVar16 = param_3;
  if (uVar12 != uVar6) {
    if ((uVar6 | uVar12) < 0x80) {
      uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
      uVar9 = (ulonglong)uVar6;
      uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
      if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar9]) goto LAB_147cedb53;
    }
    if (uVar12 != uVar6) {
      lVar8 = 0;
      goto LAB_147cedb8a;
    }
    goto LAB_147cedbf1;
  }
  if (uVar12 == 0) goto LAB_147cedbf1;
LAB_147cedb53:
  lVar8 = lVar8 + 2;
  goto LAB_147cedb3b;
LAB_147cedb8a:
  uVar12 = *(ushort *)((longlong)puVar2 + lVar8);
  uVar4 = (ulonglong)uVar12;
  uVar6 = *(ushort *)((longlong)&DAT_14a3d4668 + lVar8);
  if (uVar12 != uVar6) {
    if ((uVar6 | uVar12) < 0x80) {
      uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
      uVar9 = (ulonglong)uVar6;
      uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
      if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar9]) goto LAB_147cedba2;
    }
    fVar16 = fVar17;
    if (uVar12 != uVar6) goto LAB_147cedca3;
    goto LAB_147cedbf1;
  }
  fVar16 = fVar17;
  if (uVar12 == 0) goto LAB_147cedbf1;
LAB_147cedba2:
  lVar8 = lVar8 + 2;
  goto LAB_147cedb8a;
}



// FUNCTION 147cedd96 FUN_147cedd96 body=123 status=ok
// SIG undefined FUN_147cedd96(void)

undefined4 FUN_147cedd96(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(local_30,L"ResolutionQuality");
  uVar1 = FUN_147ced95b(local_30,0,param_1);
  uVar1 = FUN_14129217a(uVar1,0);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cede12 FUN_147cede12 body=689 status=ok
// SIG undefined FUN_147cede12(void)

undefined4 * FUN_147cede12(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_1 + 0xc) = 0xbf800000bf800000;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  FUN_141292034(0,1);
  uVar1 = FUN_147cedd96(param_3);
  *param_1 = uVar1;
  FUN_140056680(local_50,L"ViewDistanceQuality");
  uVar1 = FUN_147ced95b(local_50,param_2,param_3);
  param_1[1] = uVar1;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_50,L"AntiAliasingQuality");
  uVar1 = FUN_147ced95b(local_50,param_2,param_3);
  param_1[2] = uVar1;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_50,L"ShadowQuality");
  uVar1 = FUN_147ced95b(local_50,param_2,param_3);
  param_1[3] = uVar1;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_50,L"GlobalIlluminationQuality");
  uVar1 = FUN_147ced95b(local_50,param_2,param_3);
  param_1[4] = uVar1;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_50,L"ReflectionQuality");
  uVar1 = FUN_147ced95b(local_50,param_2,param_3);
  param_1[5] = uVar1;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_50,L"PostProcessQuality");
  uVar1 = FUN_147ced95b(local_50,param_2,param_3);
  param_1[6] = uVar1;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_50,L"TextureQuality");
  uVar1 = FUN_147ced95b(local_50,param_2,param_3);
  param_1[7] = uVar1;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_50,L"EffectsQuality");
  uVar1 = FUN_147ced95b(local_50,param_2,param_3);
  param_1[8] = uVar1;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_50,L"FoliageQuality");
  uVar1 = FUN_147ced95b(local_50,param_2,param_3);
  param_1[9] = uVar1;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_50,L"ShadingQuality");
  uVar1 = FUN_147ced95b(local_50,param_2,param_3);
  param_1[10] = uVar1;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_50,L"LandscapeQuality");
  uVar1 = FUN_147ced95b(local_50,param_2,param_3);
  param_1[0xb] = uVar1;
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  param_1[0xc] = param_2;
  param_1[0xd] = param_3;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cee0c4 FUN_147cee0c4 body=51 status=ok
// SIG undefined FUN_147cee0c4(void)

void FUN_147cee0c4(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*DAT_14cb02878 + 0xb0))();
  iVar1 = iVar2 + -1;
  if (param_2 < iVar2 + -1) {
    iVar1 = param_2;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 4) = iVar2;
  return;
}



// FUNCTION 147cee0f8 FUN_147cee0f8 body=51 status=ok
// SIG undefined FUN_147cee0f8(void)

void FUN_147cee0f8(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*DAT_14cb02890 + 0xb0))();
  iVar1 = iVar2 + -1;
  if (param_2 < iVar2 + -1) {
    iVar1 = param_2;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 8) = iVar2;
  return;
}



// FUNCTION 147cee12c FUN_147cee12c body=51 status=ok
// SIG undefined FUN_147cee12c(void)

void FUN_147cee12c(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*DAT_14cb028a8 + 0xb0))();
  iVar1 = iVar2 + -1;
  if (param_2 < iVar2 + -1) {
    iVar1 = param_2;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 147cee160 FUN_147cee160 body=51 status=ok
// SIG undefined FUN_147cee160(void)

void FUN_147cee160(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*DAT_14cb028c0 + 0xb0))();
  iVar1 = iVar2 + -1;
  if (param_2 < iVar2 + -1) {
    iVar1 = param_2;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 0x10) = iVar2;
  return;
}



// FUNCTION 147cee194 FUN_147cee194 body=51 status=ok
// SIG undefined FUN_147cee194(void)

void FUN_147cee194(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*DAT_14cb028d8 + 0xb0))();
  iVar1 = iVar2 + -1;
  if (param_2 < iVar2 + -1) {
    iVar1 = param_2;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



// FUNCTION 147cee1c8 FUN_147cee1c8 body=51 status=ok
// SIG undefined FUN_147cee1c8(void)

void FUN_147cee1c8(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*DAT_14cb028f0 + 0xb0))();
  iVar1 = iVar2 + -1;
  if (param_2 < iVar2 + -1) {
    iVar1 = param_2;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 0x18) = iVar2;
  return;
}



// FUNCTION 147cee1fc FUN_147cee1fc body=51 status=ok
// SIG undefined FUN_147cee1fc(void)

void FUN_147cee1fc(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*DAT_14cb02908 + 0xb0))();
  iVar1 = iVar2 + -1;
  if (param_2 < iVar2 + -1) {
    iVar1 = param_2;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 0x1c) = iVar2;
  return;
}



// FUNCTION 147cee230 FUN_147cee230 body=51 status=ok
// SIG undefined FUN_147cee230(void)

void FUN_147cee230(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*DAT_14cb02920 + 0xb0))();
  iVar1 = iVar2 + -1;
  if (param_2 < iVar2 + -1) {
    iVar1 = param_2;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 0x20) = iVar2;
  return;
}



// FUNCTION 147cee264 FUN_147cee264 body=51 status=ok
// SIG undefined FUN_147cee264(void)

void FUN_147cee264(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*DAT_14cb02938 + 0xb0))();
  iVar1 = iVar2 + -1;
  if (param_2 < iVar2 + -1) {
    iVar1 = param_2;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 0x24) = iVar2;
  return;
}



// FUNCTION 147cee298 FUN_147cee298 body=51 status=ok
// SIG undefined FUN_147cee298(void)

void FUN_147cee298(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*DAT_14cb02950 + 0xb0))();
  iVar1 = iVar2 + -1;
  if (param_2 < iVar2 + -1) {
    iVar1 = param_2;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 0x28) = iVar2;
  return;
}



// FUNCTION 147cee2cb FUN_147cee2cb body=17 status=ok
// SIG undefined FUN_147cee2cb(void)

undefined4 FUN_147cee2cb(byte param_1)

{
  return *(undefined4 *)(DAT_14cb02820 + (ulonglong)(param_1 ^ 1) * 4);
}



// FUNCTION 147cee2e4 FUN_147cee2e4 body=87 status=ok
// SIG undefined FUN_147cee2e4(void)

float FUN_147cee2e4(float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1[1];
  if ((((((fVar1 == param_1[2]) && (fVar1 == param_1[3])) && (fVar1 == param_1[4])) &&
       ((fVar1 == param_1[5] && (fVar1 == param_1[6])))) &&
      ((fVar1 == param_1[7] && ((fVar1 == param_1[8] && (fVar1 == param_1[9])))))) &&
     (fVar1 == param_1[10])) {
    fVar2 = (float)FUN_14129217a(fVar1,0);
    if ((fVar2 == *param_1) && (!NAN(fVar2) && !NAN(*param_1))) {
      return fVar1;
    }
  }
  return -NAN;
}



// FUNCTION 147cee33b FUN_147cee33b body=205 status=ok
// SIG undefined FUN_147cee33b(void)

undefined4 FUN_147cee33b(void)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb02a38) {
    FUN_144b3d300(&DAT_14cb02a38);
    if (DAT_14cb02a38 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar4 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Mobile.PlanarReflectionMode",1)
      ;
      if (plVar4 == (longlong *)0x0) {
        DAT_14cb02a30 = 0;
      }
      else {
        DAT_14cb02a30 = (**(code **)(*plVar4 + 0x68))(plVar4);
      }
      _Init_thread_footer(&DAT_14cb02a38);
    }
  }
  lVar1 = DAT_14cb02a30;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  return *(undefined4 *)(lVar1 + uVar3 * 4);
}



// FUNCTION 147cee408 FUN_147cee408 body=205 status=ok
// SIG undefined FUN_147cee408(void)

undefined4 FUN_147cee408(void)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb02a48) {
    FUN_144b3d300(&DAT_14cb02a48);
    if (DAT_14cb02a48 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar4 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.Mobile.PixelProjectedReflectionQuality",1);
      if (plVar4 == (longlong *)0x0) {
        DAT_14cb02a40 = 0;
      }
      else {
        DAT_14cb02a40 = (**(code **)(*plVar4 + 0x68))(plVar4);
      }
      _Init_thread_footer(&DAT_14cb02a48);
    }
  }
  lVar1 = DAT_14cb02a40;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  return *(undefined4 *)(lVar1 + uVar3 * 4);
}



// FUNCTION 147cee4d5 FUN_147cee4d5 body=32 status=ok
// SIG undefined FUN_147cee4d5(void)

bool FUN_147cee4d5(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  cVar1 = FUN_14583c036();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    iVar3 = FUN_147cee408();
    bVar2 = 0 < iVar3;
  }
  return bVar2;
}



// FUNCTION 147cee4f6 FUN_147cee4f6 body=558 status=ok
// SIG undefined FUN_147cee4f6(void)

undefined1 * FUN_147cee4f6(undefined1 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb02a58) {
    FUN_144b3d300(&DAT_14cb02a58);
    if (DAT_14cb02a58 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar7 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.DefaultFeature.AutoExposure.ExtendDefaultLuminanceRange"
                          ,1);
      if (plVar7 == (longlong *)0x0) {
        DAT_14cb02a50 = 0;
      }
      else {
        DAT_14cb02a50 = (**(code **)(*plVar7 + 0x68))(plVar7);
      }
      _Init_thread_footer(&DAT_14cb02a58);
    }
  }
  lVar4 = DAT_14cb02a50;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar3 + 0xc60) == 0x40000002) {
    uVar6 = 0;
  }
  else {
    bVar5 = FUN_144a61b4f();
    uVar6 = (ulonglong)(bVar5 ^ 1);
  }
  iVar2 = *(int *)(lVar4 + uVar6 * 4);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb02a68) {
    FUN_144b3d300(&DAT_14cb02a68);
    if (DAT_14cb02a68 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar7 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.DefaultFeature.AutoExposure.Bias",1);
      if (plVar7 == (longlong *)0x0) {
        DAT_14cb02a60 = 0;
      }
      else {
        DAT_14cb02a60 = (**(code **)(*plVar7 + 0x70))(plVar7);
      }
      _Init_thread_footer(&DAT_14cb02a68);
    }
  }
  lVar4 = DAT_14cb02a60;
  if (*(int *)(lVar3 + 0xc60) == 0x40000002) {
    uVar6 = 0;
  }
  else {
    bVar5 = FUN_144a61b4f();
    uVar6 = (ulonglong)(bVar5 ^ 1);
  }
  uVar1 = *(undefined4 *)(lVar4 + uVar6 * 4);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0x42b4000041200000;
  if (iVar2 == 1) {
    uVar8 = 0x41a00000;
    uVar11 = 0xc1200000;
    uVar10 = 0xc1200000;
    uVar9 = 0x41a00000;
  }
  else {
    uVar9 = 0x40800000;
    uVar10 = 0xc1000000;
    uVar8 = 0x41000000;
    uVar11 = 0x3cf5c28f;
  }
  *(undefined4 *)(param_1 + 0xc) = uVar11;
  *(undefined4 *)(param_1 + 0x10) = uVar8;
  *(undefined4 *)(param_1 + 0x30) = uVar10;
  *(undefined4 *)(param_1 + 0x34) = uVar9;
  *(undefined8 *)(param_1 + 0x14) = 0x3f80000040400000;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = 0x41900000;
  param_1[0x3c] = param_1[0x3c] & 0xfe;
  return param_1;
}



// FUNCTION 147cee73c FUN_147cee73c body=183 status=ok
// SIG undefined FUN_147cee73c(void)

void FUN_147cee73c(longlong param_1)

{
  longlong lVar1;
  char in_stack_00000038;
  
  lVar1 = param_1 + 0x2b0;
  if (in_stack_00000038 == '\0') {
    lVar1 = param_1 + 0x10;
  }
  FUN_14797cb3e(lVar1);
  return;
}



// FUNCTION 147cee7f4 FUN_147cee7f4 body=88 status=ok
// SIG undefined FUN_147cee7f4(void)

void FUN_147cee7f4(longlong param_1)

{
  longlong lVar1;
  char in_stack_00000028;
  
  lVar1 = param_1 + 0x2b0;
  if (in_stack_00000028 == '\0') {
    lVar1 = param_1 + 0x10;
  }
  FUN_14095857a(lVar1);
  return;
}



// FUNCTION 147cee84c FUN_147cee84c body=88 status=ok
// SIG undefined FUN_147cee84c(void)

void FUN_147cee84c(longlong param_1)

{
  longlong lVar1;
  char in_stack_00000028;
  
  lVar1 = param_1 + 0x2b0;
  if (in_stack_00000028 == '\0') {
    lVar1 = param_1 + 0x10;
  }
  FUN_14797c64a(lVar1);
  return;
}



// FUNCTION 147cee8a4 FUN_147cee8a4 body=54 status=ok
// SIG undefined FUN_147cee8a4(void)

void FUN_147cee8a4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  char param_5)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x2b0;
  if (param_5 == '\0') {
    lVar1 = param_1 + 0x10;
  }
  FUN_14797c942(lVar1,param_2,param_4,param_3,*(undefined4 *)(param_1 + 0x550));
  return;
}



// FUNCTION 147cee8da FUN_147cee8da body=86 status=ok
// SIG undefined FUN_147cee8da(void)

void FUN_147cee8da(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x560);
  *(uint *)(param_1 + 0x560) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x564) < iVar1 + 1U) {
    FUN_14716616c((longlong *)(param_1 + 0x558),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x558) + (longlong)iVar1 * 8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000147cee921. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_2)(param_2,&DAT_14ca85100);
  return;
}



// FUNCTION 147cee930 FUN_147cee930 body=127 status=ok
// SIG undefined FUN_147cee930(void)

longlong FUN_147cee930(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined1 param_5)

{
  FUN_144b26f56(param_1,param_2,param_3,3);
  *(undefined8 *)(param_1 + 0x148) = param_4;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x19c) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined1 *)(param_1 + 0x1c0) = param_5;
  return param_1;
}



// FUNCTION 147cee9b0 FUN_147cee9b0 body=84 status=ok
// SIG undefined FUN_147cee9b0(void)

void FUN_147cee9b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x158);
  *(uint *)(param_1 + 0x158) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x15c) < iVar1 + 1U) {
    FUN_147b4e3c6((longlong *)(param_1 + 0x150),iVar1);
  }
  FUN_147d0af10((longlong)iVar1 * 0x80 + *(longlong *)(param_1 + 0x150),param_2);
  FUN_1472aaabe(param_2);
  return;
}



// FUNCTION 147ceea04 FUN_147ceea04 body=84 status=ok
// SIG undefined FUN_147ceea04(void)

void FUN_147ceea04(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [4];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  if (*(char *)(param_1 + 0x1c0) == '\x01') {
    FUN_1447cbafe(param_1 + 0x170,local_10,&local_c,0);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ceea5a FUN_147ceea5a body=152 status=ok
// SIG undefined FUN_147ceea5a(void)

void FUN_147ceea5a(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  iVar1 = *(int *)(param_1 + 0x168);
  *(uint *)(param_1 + 0x168) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x16c) < iVar1 + 1U) {
    FUN_147d0afb4((longlong *)(param_1 + 0x160),iVar1);
  }
  plVar4 = (longlong *)(*(longlong *)(param_1 + 0x160) + (longlong)iVar1 * 0x80);
  *plVar4 = 0;
  *plVar4 = *param_2;
  *param_2 = 0;
  *(int *)(plVar4 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)plVar4 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  plVar3 = param_2 + 2;
  plVar4 = plVar4 + 2;
  for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
    *plVar4 = *plVar3;
    plVar3 = plVar3 + 1;
    plVar4 = plVar4 + 1;
  }
  FUN_140064c53(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147ceeaf2 FUN_147ceeaf2 body=926 status=ok
// SIG undefined FUN_147ceeaf2(void)

void FUN_147ceeaf2(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,double *param_7,undefined8 param_8,
                  byte param_9,byte param_10,byte param_11,byte param_12,undefined8 *param_13)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined1 auStack_588 [32];
  undefined8 local_568;
  undefined8 local_560;
  undefined1 local_558 [4];
  undefined8 local_554;
  undefined4 local_54c;
  undefined4 local_53c;
  float local_3ec;
  undefined4 local_3cc;
  undefined4 local_3bc;
  undefined4 local_3ac;
  undefined4 local_39c;
  undefined4 local_37c;
  undefined4 local_36c;
  float local_368;
  float local_364;
  float local_360;
  float local_35c;
  float local_358;
  float local_354;
  float local_350;
  float local_34c;
  undefined4 local_33c;
  undefined8 local_32c;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined1 local_2d8 [224];
  undefined8 local_1f8 [16];
  undefined8 local_178 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  float local_c8;
  undefined4 local_c4;
  uint local_c0;
  undefined8 local_bc;
  undefined2 local_b4;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_588;
  local_568 = param_1;
  local_560 = param_2;
  memset(local_558,0,0x4d0);
  FUN_144a8b74e(local_558);
  local_c0 = local_c0 & 0xfffff800;
  local_3cc = 0;
  local_3bc = 0;
  local_320 = 0xffffff00ffffff00;
  local_39c = 0;
  local_3ac = 0xffffffff;
  local_54c = 0xffffffff;
  local_53c = 0xffffffff;
  local_37c = 0xffffffff;
  local_36c = 0xffffffff;
  local_318 = 0xffffffff00ffffff;
  local_2f0 = 0xffffffff;
  local_554 = 0xffffffff;
  local_33c = 0xffffffff;
  local_32c = 0;
  local_2f8 = 0;
  memset(local_2d8,0,0x90);
  local_bc = 0;
  local_b4 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  puVar4 = local_1f8;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_c4 = 0xfe0701;
  puVar4 = local_178;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *param_4;
    param_4 = param_4 + 1;
    puVar4 = puVar4 + 1;
  }
  local_d0 = param_5[2];
  local_e0 = *param_5;
  uStack_d8 = param_5[1];
  local_e8 = param_6[2];
  local_f8 = *param_6;
  uStack_f0 = param_6[1];
  local_c8 = (float)(double)param_6[6];
  local_3ec = (float)(double)param_6[3];
  local_35c = (float)(double)param_6[4];
  local_34c = (float)(double)param_6[5];
  local_360 = (float)(param_7[2] - param_7[5]);
  local_364 = (float)(param_7[1] - param_7[4]);
  local_368 = (float)(*param_7 - param_7[3]);
  local_350 = (float)(param_7[2] + param_7[5]);
  local_354 = (float)(param_7[1] + param_7[4]);
  local_358 = (float)(*param_7 + param_7[3]);
  lVar2 = FUN_147cbb9da(local_558,param_8);
  uVar1 = *(uint *)(lVar2 + 0x494);
  uVar3 = (uint)param_11 * 0x20 + (uint)param_10 * 8 | (uint)param_12 << 7;
  *(uint *)(lVar2 + 0x494) = uVar3 | uVar1 & 0xffffff57;
  if (param_13 == (undefined8 *)0x0) {
    memset((void *)(lVar2 + 0x280),0,0x90);
    uVar3 = uVar3 | uVar1 & 0xfffeff57;
  }
  else {
    iVar5 = 0x24;
    if (*(int *)(param_13 + 1) < 0x24) {
      iVar5 = *(int *)(param_13 + 1);
    }
    memcpy((void *)(lVar2 + 0x280),(void *)*param_13,(ulonglong)(uint)(iVar5 << 2));
    uVar3 = *(uint *)(lVar2 + 0x494) | 0x10000;
  }
  *(uint *)(lVar2 + 0x494) = uVar3;
  *(byte *)(lVar2 + 0x4a5) = param_9 & 1;
  FUN_1417ed2e8(local_568,local_560,lVar2);
  if ((local_80 ^ (ulonglong)auStack_588) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ceee92 FUN_147ceee92 body=116 status=ok
// SIG undefined FUN_147ceee92(void)

void FUN_147ceee92(void)

{
  FUN_147ceeaf2();
  return;
}



// FUNCTION 147ceef06 FUN_147ceef06 body=245 status=ok
// SIG undefined FUN_147ceef06(void)

undefined8 *
FUN_147ceef06(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
             char param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_144b13b96();
  *(undefined4 *)(param_1 + 0x17) = 2;
  *(char *)(param_1 + 0x15) = param_9;
  *(undefined4 *)((longlong)param_1 + 0xac) = 2;
  if (param_9 == '\0') {
    param_1[0x14] = param_2[1];
    uVar1 = param_5[5];
    uVar2 = param_5[6];
    uVar3 = param_5[7];
    param_1[0xc] = param_5[4];
    param_1[0xd] = uVar1;
    param_1[0xe] = uVar2;
    param_1[0xf] = uVar3;
    uVar1 = param_6[5];
    uVar2 = param_6[6];
    uVar3 = param_6[7];
    param_1[0x10] = param_6[4];
    param_1[0x11] = uVar1;
    param_1[0x12] = uVar2;
    param_1[0x13] = uVar3;
  }
  else {
    param_1[8] = *param_2;
    param_1[9] = param_3;
    param_1[10] = param_4;
    uVar1 = param_5[1];
    uVar2 = param_5[2];
    uVar3 = param_5[3];
    *param_1 = *param_5;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    uVar1 = param_6[1];
    uVar2 = param_6[2];
    uVar3 = param_6[3];
    param_1[4] = *param_6;
    param_1[5] = uVar1;
    param_1[6] = uVar2;
    param_1[7] = uVar3;
  }
  uVar1 = param_7[1];
  param_1[0x18] = *param_7;
  param_1[0x19] = uVar1;
  uVar1 = param_8[1];
  param_1[0x1a] = *param_8;
  param_1[0x1b] = uVar1;
  return param_1;
}



// FUNCTION 147ceeffc FUN_147ceeffc body=201 status=ok
// SIG undefined FUN_147ceeffc(void)

undefined8 *
FUN_147ceeffc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,char param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_144b13b96();
  *(undefined4 *)(param_1 + 0x17) = 2;
  *(char *)(param_1 + 0x15) = param_7;
  *(undefined4 *)((longlong)param_1 + 0xac) = 2;
  param_1[0x16] = param_2;
  if (param_7 == '\0') {
    uVar1 = param_3[4];
    uVar2 = param_3[5];
    uVar3 = param_3[7];
    param_1[0xe] = param_3[6];
    param_1[0xf] = uVar3;
    param_1[0xc] = uVar1;
    param_1[0xd] = uVar2;
    uVar1 = param_4[5];
    uVar2 = param_4[6];
    uVar3 = param_4[7];
    param_1[0x10] = param_4[4];
    param_1[0x11] = uVar1;
    param_1[0x12] = uVar2;
    param_1[0x13] = uVar3;
  }
  else {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_3[3];
    param_1[2] = param_3[2];
    param_1[3] = uVar3;
    *param_1 = uVar1;
    param_1[1] = uVar2;
    uVar1 = param_4[1];
    uVar2 = param_4[2];
    uVar3 = param_4[3];
    param_1[4] = *param_4;
    param_1[5] = uVar1;
    param_1[6] = uVar2;
    param_1[7] = uVar3;
  }
  uVar1 = param_5[1];
  param_1[0x18] = *param_5;
  param_1[0x19] = uVar1;
  uVar1 = param_6[1];
  param_1[0x1a] = *param_6;
  param_1[0x1b] = uVar1;
  return param_1;
}



// FUNCTION 147cef0c6 FUN_147cef0c6 body=925 status=ok
// SIG undefined FUN_147cef0c6(void)

void FUN_147cef0c6(void *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *(undefined8 *)((longlong)param_1 + 0xcd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcd8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0xcc0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0xcf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcf8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0xce0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xce8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0xd10) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd18) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0xd00) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd08) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0xd30) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd38) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0xd20) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd28) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0xd50) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd58) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0xd40) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd48) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0xd70) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd78) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0xd60) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd68) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0xd90) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd98) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0xd80) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd88) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0xdb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdb8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0xda0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xda8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0xdd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdd8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0xdc0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0xdf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdf8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0xde0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xde8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1190) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1198) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1180) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1188) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x11b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11b8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x11a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11a8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x11d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11d8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x11c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x11f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11f8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x11e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11e8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1210) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1218) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1200) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1208) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1230) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1238) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1220) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1228) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1250) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1258) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1240) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1248) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1278) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1268) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1290) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1298) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1288) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x12b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12b8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x12a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12a8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x12d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12d8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x12c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12c8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x12f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12f8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x12e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12e8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1310) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1318) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1308) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1330) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1338) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1320) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1328) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1550) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1558) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1540) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1548) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1570) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1578) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1560) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1568) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1590) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1598) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1580) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1588) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x15b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15b8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x15a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15a8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x15d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15d8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x15c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x15e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15e8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1608) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1610) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1618) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1630) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1638) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1620) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1628) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1650) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1658) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1640) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1648) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1670) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1678) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1660) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1668) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x16a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16a8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1690) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1698) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x16c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x16d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16d8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x16e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16e8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1720) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1728) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1710) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1718) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1750) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1758) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1740) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1748) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 6000) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1778) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1760) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1768) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1800) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1808) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x17f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17f8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1820) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1828) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1810) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1818) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1830) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1838) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1840) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1848) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18b8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1940) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1948) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1930) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1938) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1950) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1958) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1970) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1978) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x19e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19e8) = 0x3f80000000000000;
  lVar2 = 0x1a70;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0x10);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    ((undefined8 *)((longlong)param_1 + lVar2))[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x1af0);
  *(undefined8 *)((longlong)param_1 + 0x1b10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b18) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1b00) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b08) = 0x3f80000000000000;
  lVar2 = 0x1b6c;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0xc);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x1bcc);
  lVar2 = 0x1bcc;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0xc);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x1c2c);
  lVar2 = 0x1c2c;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0xc);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x1c8c);
  lVar2 = 0x1c8c;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0xc);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x1cec);
  *(undefined8 *)((longlong)param_1 + 0x1e30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e38) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1e20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e28) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1e60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e68) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1e80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e88) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1ea0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ea8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1ec0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1ed0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ed8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1ee0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ee8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x2150) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2158) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x2140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2148) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x2170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2178) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x2160) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2168) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x2190) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2198) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x2180) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2188) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x21b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21b8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x21a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21a8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x21d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21d8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x21c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x21f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21f8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x21e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21e8) = 0x3f80000000000000;
  memset(param_1,0,0x2230);
  return;
}



// FUNCTION 147cef464 FUN_147cef464 body=131 status=ok
// SIG undefined FUN_147cef464(void)

undefined8 FUN_147cef464(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [176];
  longlong local_48;
  int local_40;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_147cef4e8(param_1,local_f8,param_2);
  if (((local_40 == 2) && (local_48 != 0)) && (*(char *)(local_48 + 0x168) == '\0')) {
    lVar2 = FUN_1448463c0();
    uVar1 = *(undefined4 *)(lVar2 + 0x88);
    *param_3 = uVar1;
    uVar3 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
  else {
    uVar3 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cef4e8 FUN_147cef4e8 body=71 status=ok
// SIG undefined FUN_147cef4e8(void)

longlong FUN_147cef4e8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 9) == '\x01') {
    FUN_144b13b96(param_2);
    *(undefined4 *)(param_2 + 0xb8) = 1;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x10);
    if (plVar1 == (longlong *)0x0) {
      FUN_144b13b96(param_2);
    }
    else {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
  }
  return param_2;
}



// FUNCTION 147cef530 FUN_147cef530 body=201 status=ok
// SIG undefined FUN_147cef530(void)

undefined8 * FUN_147cef530(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar1 = *(char *)(param_1 + 9);
  *(undefined4 *)(param_2 + 6) = 0;
  if (cVar1 == '\x01') {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    *(undefined4 *)(param_2 + 10) = 1;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    *(undefined4 *)(param_2 + 10) = 0;
    plVar2 = *(longlong **)(param_1 + 0x10);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,local_88);
      puVar4 = local_88;
      puVar5 = param_2;
      for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      if (*(int *)(param_2 + 10) != 0) goto LAB_147cef577;
    }
    plVar2 = *(longlong **)(param_1 + 0x18);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,local_88);
      puVar4 = local_88;
      puVar5 = param_2;
      for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
  }
LAB_147cef577:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147cef5fa FUN_147cef5fa body=228 status=ok
// SIG undefined FUN_147cef5fa(void)

byte FUN_147cef5fa(void)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong *plVar4;
  bool bVar5;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb02e28) {
    FUN_144b3d300(&DAT_14cb02e28);
    if (DAT_14cb02e28 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar4 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Mobile.UseHWsRGBEncoding",1);
      if (plVar4 == (longlong *)0x0) {
        DAT_14cb02e20 = 0;
      }
      else {
        DAT_14cb02e20 = (**(code **)(*plVar4 + 0x68))(plVar4);
      }
      _Init_thread_footer(&DAT_14cb02e28);
    }
  }
  lVar1 = DAT_14cb02e20;
  if (DAT_14cb02e20 == 0) {
    bVar5 = false;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar3 = 0;
    }
    else {
      bVar2 = FUN_144a61b4f();
      uVar3 = (ulonglong)(bVar2 ^ 1);
    }
    bVar5 = *(int *)(lVar1 + uVar3 * 4) == 1;
  }
  return (DAT_14c760e14 ^ 1) & bVar5;
}



// FUNCTION 147cef6de FUN_147cef6de body=249 status=ok
// SIG undefined FUN_147cef6de(void)

ulonglong FUN_147cef6de(undefined8 param_1,char param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  uVar4 = (ulonglong)DAT_14cb02e18;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < (int)DAT_14cb02e18) &&
     (uVar4 = FUN_144b3d300(&DAT_14cb02e18), DAT_14cb02e18 == 0xffffffff)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Mobile.TonemapSubpass",1);
    if (plVar5 == (longlong *)0x0) {
      DAT_14cb02e10 = 0;
    }
    else {
      DAT_14cb02e10 = (**(code **)(*plVar5 + 0x68))(plVar5);
    }
    uVar4 = _Init_thread_footer(&DAT_14cb02e18);
  }
  lVar1 = DAT_14cb02e10;
  if (DAT_14cb02e10 == 0) {
    if (param_2 == '\0') {
      return 0;
    }
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar3 = 0;
    }
    else {
      bVar2 = FUN_144a61b4f();
      uVar3 = (ulonglong)(bVar2 ^ 1);
    }
    uVar4 = 0;
    if (*(int *)(lVar1 + uVar3 * 4) != 1 && param_2 == '\0') {
      return 0;
    }
  }
  if (DAT_14c760e14 != '\x01') {
    return 0;
  }
  return CONCAT71((int7)(uVar4 >> 8),DAT_14ca964f0) ^ 1;
}



// FUNCTION 147cef7d7 FUN_147cef7d7 body=71 status=ok
// SIG undefined FUN_147cef7d7(void)

undefined8 FUN_147cef7d7(ulonglong param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_147cef6de();
  if ((cVar1 == '\0') ||
     (*(longlong *)(&DAT_14ca814b0 + (param_1 & 0xffff) * 0x3c) != DAT_14ca81498)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(&DAT_14ca814b0 + (param_1 & 0xffff) * 0x3c) >>
                           8),param_3 < 2 | DAT_14ca8507e);
  }
  return uVar2;
}



// FUNCTION 147cef81e FUN_147cef81e body=44 status=ok
// SIG undefined FUN_147cef81e(void)

bool FUN_147cef81e(ushort param_1)

{
  bool bVar1;
  int iVar2;
  
  if ((&DAT_14ca814b8)[(ulonglong)param_1 * 0xf] == 1) {
    iVar2 = FUN_1467b7d4e();
    bVar1 = 0 < iVar2;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



// FUNCTION 147cef84a FUN_147cef84a body=8 status=ok
// SIG undefined FUN_147cef84a(void)

void FUN_147cef84a(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x28) = param_2;
  *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + 1;
  return;
}



// FUNCTION 147cef852 FUN_147cef852 body=718 status=ok
// SIG undefined FUN_147cef852(void)

undefined8 FUN_147cef852(double *param_1,float *param_2,float *param_3,float param_4,byte param_5)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  byte bVar13;
  ulonglong uVar14;
  double dVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  
  lVar11 = DAT_14cb03458;
  if (param_1 != (double *)0x0) {
    lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(int *)(lVar10 + 0xc60) == 0x40000002) {
      uVar14 = 0;
    }
    else {
      bVar13 = FUN_144a61b4f();
      uVar14 = (ulonglong)(bVar13 ^ 1);
    }
    lVar12 = DAT_14cb03470;
    if (*(char *)(lVar11 + uVar14) == '\x01') {
      dVar3 = param_1[0xe];
      dVar4 = param_1[6];
      dVar5 = param_1[10];
      dVar15 = dVar3 * dVar3 + dVar4 * dVar4 + dVar5 * dVar5;
      if (9.99999993922529e-09 < dVar15) {
        dVar15 = 1.0 / SQRT(dVar15);
        dVar4 = dVar4 * dVar15;
        dVar5 = dVar5 * dVar15;
        dVar3 = dVar3 * dVar15;
      }
      fVar1 = *param_3;
      fVar2 = *param_2;
      dVar15 = param_1[0x4e];
      dVar17 = param_1[0x4f];
      dVar6 = param_1[0x50];
      if (SQRT(dVar6 * dVar6 + dVar15 * dVar15 + dVar17 * dVar17) <= 0.0) {
        if (*(int *)(lVar10 + 0xc60) == 0x40000002) {
          uVar14 = 0;
        }
        else {
          bVar13 = FUN_144a61b4f();
          uVar14 = (ulonglong)(bVar13 ^ 1);
        }
        if ((*(byte *)(lVar12 + uVar14) & param_5) == 0) {
          dVar15 = param_1[2];
          fVar16 = 0.0;
        }
        else {
          dVar15 = param_1[2];
          dVar17 = dVar15;
          if ((double)param_4 <= dVar15) {
            dVar17 = (double)param_4;
          }
          fVar16 = ABS((float)(dVar17 * dVar3));
        }
        dVar17 = (double)(fVar16 + *param_2);
        *param_1 = dVar4 * dVar17 + *param_1;
        param_1[1] = dVar5 * dVar17 + param_1[1];
        param_1[2] = dVar3 * dVar17 + dVar15;
      }
      else {
        dVar7 = param_1[2];
        dVar8 = *param_1;
        dVar9 = param_1[1];
        dVar18 = (double)fVar2;
        dVar4 = dVar4 * dVar18 + dVar15 + dVar8;
        *param_1 = dVar4;
        dVar5 = dVar5 * dVar18 + dVar17 + dVar9;
        param_1[1] = dVar5;
        dVar3 = dVar3 * dVar18 + dVar6 + dVar7;
        param_1[2] = dVar3;
        param_1[0x4e] = (dVar15 + dVar8) - dVar4;
        param_1[0x4f] = (dVar17 + dVar9) - dVar5;
        param_1[0x50] = (dVar6 + dVar7) - dVar3;
      }
      fVar16 = DAT_14cb03430;
      *param_2 = DAT_14cb03430;
      *param_3 = (fVar1 - fVar2) + fVar16;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 147cefb20 FUN_147cefb20 body=411 status=ok
// SIG undefined FUN_147cefb20(void)

undefined8 FUN_147cefb20(longlong param_1,undefined1 param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  float local_38;
  float local_34;
  ulonglong local_30;
  
  lVar3 = DAT_14cb03458;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (1.0 < *(double *)(param_1 + 0x118) || *(double *)(param_1 + 0x118) == 1.0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar5 = 0;
    }
    else {
      bVar4 = FUN_144a61b4f();
      uVar5 = (ulonglong)(bVar4 ^ 1);
    }
    if (*(char *)(lVar3 + uVar5) == '\x01') {
      dVar1 = *(double *)(param_1 + 0xf0);
      if ((dVar1 != 0.0) || (NAN(dVar1))) {
        dVar2 = *(double *)(param_1 + 0xf8);
        if ((dVar1 != dVar2) || (NAN(dVar1) || NAN(dVar2))) {
          local_34 = (float)((double)(float)(*(double *)(param_1 + 0x118) -
                                            *(double *)(param_1 + 0x110)) / (dVar1 - dVar2));
          local_38 = -1.0 / (float)dVar1 + local_34;
          if ((local_38 - local_34 != 0.0) || (NAN(local_38 - local_34))) {
            fVar7 = (float)*(double *)(param_1 + 0xa0);
            if ((fVar7 != 0.0) || (NAN(fVar7))) {
              local_48 = param_2;
              FUN_147cef852(param_1,&local_34,&local_38,1.0 / fVar7);
              fVar7 = 1.0 / (local_38 - local_34);
              *(double *)(param_1 + 0xf0) = (double)-fVar7;
              *(double *)(param_1 + 0x110) = (double)(local_34 * fVar7 + 1.0);
              uVar6 = 1;
              goto LAB_147cefb4f;
            }
          }
        }
      }
    }
  }
  uVar6 = 0;
LAB_147cefb4f:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cefcbc FUN_147cefcbc body=292 status=ok
// SIG undefined FUN_147cefcbc(void)

void FUN_147cefcbc(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = *(undefined8 *)(param_1 + 0x10b0);
  local_48 = *(undefined8 *)(param_1 + 0x10a0);
  uStack_40 = *(undefined8 *)(param_1 + 0x10a8);
  local_58 = *(undefined8 *)(param_1 + 0x10c8);
  local_68 = *(undefined4 *)(param_1 + 0x10b8);
  uStack_64 = *(undefined4 *)(param_1 + 0x10bc);
  uStack_60 = *(undefined4 *)(param_1 + 0x10c0);
  uStack_5c = *(undefined4 *)(param_1 + 0x10c4);
  plVar1 = *(longlong **)(DAT_14cb0d2b0 + 0xfd0);
  if ((plVar1 != (longlong *)0x0) && (*(int *)(param_1 + 0x1dd0) != 0)) {
    local_78 = &local_48;
    (**(code **)(*plVar1 + 0x58))
              (plVar1,*(undefined4 *)(param_1 + 0x1dd4),&local_68,*(undefined4 *)(param_1 + 0x1108))
    ;
    *(undefined8 *)(param_1 + 0x10b0) = local_38;
    *(undefined8 *)(param_1 + 0x10a0) = local_48;
    *(undefined8 *)(param_1 + 0x10a8) = uStack_40;
    *(undefined8 *)(param_1 + 0x10c8) = local_58;
    *(undefined4 *)(param_1 + 0x10b8) = local_68;
    *(undefined4 *)(param_1 + 0x10bc) = uStack_64;
    *(undefined4 *)(param_1 + 0x10c0) = uStack_60;
    *(undefined4 *)(param_1 + 0x10c4) = uStack_5c;
  }
  FUN_1436a30e4((void *)(param_1 + 0x500),&local_48,&local_68);
  FUN_144920f26(param_1 + 8000,param_1 + 0xab0,0);
  memcpy((void *)(param_1 + 0x1180),(void *)(param_1 + 0x500),0xba0);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cefde2 FUN_147cefde2 body=1422 status=ok
// SIG undefined FUN_147cefde2(void)

void FUN_147cefde2(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  double *pdVar15;
  undefined8 *puVar16;
  double *pdVar17;
  undefined4 uVar18;
  undefined1 auStack_368 [40];
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined1 local_298 [16];
  double local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 local_200;
  undefined8 local_1f8 [15];
  undefined8 local_180;
  double local_178 [4];
  double local_158;
  double dStack_150;
  double local_148;
  double local_138;
  double dStack_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_368;
  FUN_1447fea8d(local_1f8,param_3,param_2 + 0x9b0);
  puVar14 = (undefined8 *)(param_1 + 0x6b0);
  puVar13 = local_1f8;
  puVar16 = puVar14;
  for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar16 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar16 = puVar16 + 1;
  }
  *(undefined8 *)(param_1 + 0x720) = 0;
  *(undefined8 *)(param_1 + 0x710) = 0;
  *(undefined8 *)(param_1 + 0x718) = 0;
  *(undefined8 *)(param_1 + 0x728) = local_180;
  FUN_14007522e(local_178,local_1f8);
  dVar10 = DAT_14c8464f0 * local_138 + DAT_14c8464e8 * local_158 + DAT_14c8464e0 * local_178[0] +
           local_118;
  dVar11 = DAT_14c8464f0 * dStack_130 + DAT_14c8464e8 * dStack_150 + DAT_14c8464e0 * local_178[1] +
           dStack_110;
  uVar18 = (undefined4)((ulonglong)dVar11 >> 0x20);
  dVar8 = DAT_14c8464e0 * local_178[2] + DAT_14c8464e8 * local_148 + DAT_14c8464f0 * local_128 +
          local_108;
  auVar9._8_4_ = SUB84(dVar11,0);
  auVar9._0_8_ = dVar10;
  auVar9._12_4_ = uVar18;
  *(undefined1 (*) [16])(param_1 + 0xb48) = auVar9;
  *(double *)(param_1 + 0xb58) = dVar8;
  local_208 = -dVar8;
  local_218 = -dVar10;
  dStack_210 = -dVar11;
  *(double *)(param_1 + 0xb30) = local_218;
  *(double *)(param_1 + 0xb38) = dStack_210;
  *(double *)(param_1 + 0xb40) = local_208;
  local_278 = 0x3ff0000000000000;
  local_270 = 0;
  uStack_268 = 0;
  local_260 = 0;
  uStack_258 = 0;
  local_250 = 0x3ff0000000000000;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0x3ff0000000000000;
  local_220 = 0;
  local_200 = 0x3ff0000000000000;
  FUN_1447fea8d(local_178,&local_278,puVar14);
  pdVar15 = local_178;
  pdVar17 = (double *)(param_1 + 0x4b0);
  for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
    *pdVar17 = *pdVar15;
    pdVar15 = pdVar15 + 1;
    pdVar17 = pdVar17 + 1;
  }
  local_300 = *(undefined8 *)(param_1 + 0x6b0);
  local_308 = *(undefined8 *)(param_1 + 0x6d0);
  local_310 = *(undefined8 *)(param_1 + 0x6f0);
  local_318 = *(undefined8 *)(param_1 + 0x710);
  local_320 = *(undefined8 *)(param_1 + 0x6b8);
  local_328 = *(undefined8 *)(param_1 + 0x6d8);
  local_330 = *(undefined8 *)(param_1 + 0x6f8);
  local_338 = *(undefined8 *)(param_1 + 0x718);
  local_340 = *(undefined8 *)(param_1 + 0x6c0);
  uVar1 = *(undefined8 *)(param_1 + 0x6e0);
  uVar2 = *(undefined8 *)(param_1 + 0x700);
  uVar3 = *(undefined8 *)(param_1 + 0x720);
  uVar4 = *(undefined8 *)(param_1 + 0x6c8);
  uVar5 = *(undefined8 *)(param_1 + 0x6e8);
  uVar6 = *(undefined8 *)(param_1 + 0x708);
  uVar7 = *(undefined8 *)(param_1 + 0x728);
  local_2f8 = 0x3ff0000000000000;
  local_2f0 = 0;
  uStack_2e8 = 0;
  local_2e0 = 0;
  uStack_2d8 = 0;
  local_2d0 = 0x3ff0000000000000;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2a8 = 0x3ff0000000000000;
  local_2a0 = 0;
  local_298._8_4_ = SUB84(dVar11,0);
  local_298._0_8_ = dVar10;
  local_298._12_4_ = uVar18;
  local_280 = 0x3ff0000000000000;
  local_288 = dVar8;
  local_278 = local_300;
  local_270 = local_308;
  uStack_268 = local_310;
  local_260 = local_318;
  uStack_258 = local_320;
  local_250 = local_328;
  local_248 = local_330;
  uStack_240 = local_338;
  local_238 = local_340;
  uStack_230 = uVar1;
  local_228 = uVar2;
  local_220 = uVar3;
  local_218 = (double)uVar4;
  dStack_210 = (double)uVar5;
  local_208 = (double)uVar6;
  local_200 = uVar7;
  FUN_1447fea8d(local_178,&local_278);
  pdVar15 = local_178;
  pdVar17 = (double *)(param_1 + 0x530);
  for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
    *pdVar17 = *pdVar15;
    pdVar15 = pdVar15 + 1;
    pdVar17 = pdVar17 + 1;
  }
  FUN_1447fea8d(local_178,(double *)(param_1 + 0x4b0),param_1 + 0x330);
  pdVar15 = local_178;
  pdVar17 = (double *)(param_1 + 0x5b0);
  for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
    *pdVar17 = *pdVar15;
    pdVar15 = pdVar15 + 1;
    pdVar17 = pdVar17 + 1;
  }
  FUN_1447fea8d(local_178,param_1 + 0x430,(double *)(param_1 + 0x530));
  pdVar15 = local_178;
  pdVar17 = (double *)(param_1 + 0x630);
  for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
    *pdVar17 = *pdVar15;
    pdVar15 = pdVar15 + 1;
    pdVar17 = pdVar17 + 1;
  }
  puVar13 = puVar14;
  puVar16 = (undefined8 *)(param_1 + 0x730);
  for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar16 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar16 = puVar16 + 1;
  }
  puVar13 = (undefined8 *)(param_1 + 0x830);
  for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar13 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar13 = puVar13 + 1;
  }
  *(undefined8 *)(param_1 + 0x7b0) = local_300;
  *(undefined8 *)(param_1 + 0x7b8) = local_308;
  *(undefined8 *)(param_1 + 0x7c0) = local_310;
  *(undefined8 *)(param_1 + 0x7c8) = local_318;
  *(undefined8 *)(param_1 + 2000) = local_320;
  *(undefined8 *)(param_1 + 0x7d8) = local_328;
  *(undefined8 *)(param_1 + 0x7e0) = local_330;
  *(undefined8 *)(param_1 + 0x7e8) = local_338;
  *(undefined8 *)(param_1 + 0x7f0) = local_340;
  *(undefined8 *)(param_1 + 0x7f8) = uVar1;
  *(undefined8 *)(param_1 + 0x800) = uVar2;
  *(undefined8 *)(param_1 + 0x808) = uVar3;
  *(undefined8 *)(param_1 + 0x810) = uVar4;
  *(undefined8 *)(param_1 + 0x818) = uVar5;
  *(undefined8 *)(param_1 + 0x820) = uVar6;
  *(undefined8 *)(param_1 + 0x828) = uVar7;
  puVar14 = (undefined8 *)(param_1 + 0x7b0);
  puVar13 = (undefined8 *)(param_1 + 0x8b0);
  for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar13 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar13 = puVar13 + 1;
  }
  FUN_1447fea8d(local_178,(undefined8 *)(param_1 + 0x730),param_1 + 0x330);
  pdVar15 = local_178;
  pdVar17 = (double *)(param_1 + 0x930);
  for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
    *pdVar17 = *pdVar15;
    pdVar15 = pdVar15 + 1;
    pdVar17 = pdVar17 + 1;
  }
  FUN_1447fea8d(local_178,param_1 + 0x430,(undefined8 *)(param_1 + 0x7b0));
  pdVar15 = local_178;
  pdVar17 = (double *)(param_1 + 0x9b0);
  for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
    *pdVar17 = *pdVar15;
    pdVar15 = pdVar15 + 1;
    pdVar17 = pdVar17 + 1;
  }
  if ((local_f0 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cf0372 FUN_147cf0372 body=76 status=ok
// SIG undefined FUN_147cf0372(void)

void FUN_147cf0372(longlong param_1)

{
  FUN_147cefde2((void *)(param_1 + 0x500));
  FUN_144920f26(param_1 + 8000,param_1 + 0xab0,0);
  memcpy((void *)(param_1 + 0x1180),(void *)(param_1 + 0x500),0xba0);
  return;
}



// FUNCTION 147cf03be FUN_147cf03be body=219 status=ok
// SIG undefined FUN_147cf03be(void)

byte FUN_147cf03be(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  
  dVar1 = param_2[3];
  if ((dVar1 != 0.0) || (NAN(dVar1))) {
    dVar2 = (double)(&DAT_149931160)[0.0 < dVar1];
    dVar3 = param_2[1];
    iVar4 = *(int *)(param_1 + 0x4dc);
    iVar5 = *(int *)(param_1 + 0x4e4);
    *param_3 = (double)(*(int *)(param_1 + 0x4e0) - *(int *)(param_1 + 0x4d8)) *
               ((double)(float)(dVar2 / dVar1) * *param_2 * 0.5 + 0.5) +
               (double)*(int *)(param_1 + 0x4d8);
    param_3[1] = (double)((float)(iVar5 - iVar4) *
                          ((float)dVar3 * -0.5 * (float)(dVar2 / dVar1) + 0.5) + (float)iVar4);
  }
  return -(dVar1 != 0.0) & 1;
}



// FUNCTION 147cf049a FUN_147cf049a body=171 status=ok
// SIG undefined FUN_147cf049a(void)

void FUN_147cf049a(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar3;
  undefined1 auStack_48 [32];
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  ulonglong local_8;
  double dVar2;
  double dVar4;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  dVar1 = param_2[1];
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  dVar4 = param_2[2];
  local_28 = *(double *)(param_1 + 0xaf0) * dVar3 +
             *(double *)(param_1 + 0xad0) * dVar1 + *(double *)(param_1 + 0xab0) * *param_2 +
             *(double *)(param_1 + 0xb10);
  dStack_20 = *(double *)(param_1 + 0xaf8) * dVar4 +
              *(double *)(param_1 + 0xad8) * dVar2 + *(double *)(param_1 + 0xab8) * *param_2 +
              *(double *)(param_1 + 0xb18);
  local_18 = dVar3 * *(double *)(param_1 + 0xb00) +
             dVar1 * *(double *)(param_1 + 0xae0) + *param_2 * *(double *)(param_1 + 0xac0) +
             *(double *)(param_1 + 0xb20);
  dStack_10 = dVar4 * *(double *)(param_1 + 0xb08) +
              dVar2 * *(double *)(param_1 + 0xae8) + *param_2 * *(double *)(param_1 + 0xac8) +
              *(double *)(param_1 + 0xb28);
  FUN_147cf03be();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cf0546 FUN_147cf0546 body=209 status=ok
// SIG undefined FUN_147cf0546(void)

double * FUN_147cf0546(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar2;
  double dVar4;
  double dVar6;
  
  dVar1 = *param_3;
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar4 = param_3[1];
  dVar5 = param_3[2];
  dVar6 = param_3[2];
  dVar9 = *(double *)(param_1 + 0xab8);
  dVar10 = *(double *)(param_1 + 0xac0);
  dVar11 = *(double *)(param_1 + 0xad8);
  dVar12 = *(double *)(param_1 + 0xae0);
  dVar13 = *(double *)(param_1 + 0xaf8);
  dVar14 = *(double *)(param_1 + 0xb00);
  dVar8 = *(double *)(param_1 + 0xb18);
  dVar7 = *(double *)(param_1 + 0xb20);
  dVar16 = dVar6 * *(double *)(param_1 + 0xb08) +
           dVar4 * *(double *)(param_1 + 0xae8) + dVar2 * *(double *)(param_1 + 0xac8) +
           *(double *)(param_1 + 0xb28);
  uVar15 = -(ulonglong)(dVar16 == 0.0);
  dVar17 = (double)(uVar15 & 0x3f1a36e2e0000000 | ~uVar15 & (ulonglong)dVar16);
  dVar16 = (double)(float)(1.0 / dVar17);
  *param_2 = (*(double *)(param_1 + 0xaf0) * dVar5 +
              *(double *)(param_1 + 0xad0) * dVar3 + *(double *)(param_1 + 0xab0) * dVar1 +
             *(double *)(param_1 + 0xb10)) * dVar16;
  param_2[1] = (dVar13 * dVar6 + dVar11 * dVar4 + dVar9 * dVar2 + dVar8) * dVar16;
  param_2[2] = (dVar5 * dVar14 + dVar3 * dVar12 + dVar1 * dVar10 + dVar7) * dVar16;
  param_2[3] = dVar17;
  return param_2;
}



// FUNCTION 147cf0618 FUN_147cf0618 body=120 status=ok
// SIG undefined FUN_147cf0618(void)

void FUN_147cf0618(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_98 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar2 = (undefined8 *)(param_1 + 0xb30);
  puVar3 = local_98;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_a8 = param_4;
  FUN_147cf0692(param_2,param_1 + 0x4d8,local_98,param_3);
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cf0692 FUN_147cf0692 body=691 status=ok
// SIG undefined FUN_147cf0692(void)

void FUN_147cf0692(ulonglong *param_1,int *param_2,double *param_3,double *param_4,double *param_5)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *param_1;
  auVar6 = roundpd(auVar6,auVar6,3);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_1[1];
  auVar9 = roundpd(auVar9,auVar9,3);
  fVar3 = ((float)auVar6._0_8_ - (float)*param_2) / (float)(param_2[2] - *param_2) + -0.5;
  fVar10 = (1.0 - ((float)auVar9._0_8_ - (float)param_2[1]) / (float)(param_2[3] - param_2[1])) +
           -0.5;
  dVar7 = (double)(fVar10 + fVar10);
  dVar4 = (double)(fVar3 + fVar3);
  dVar14 = param_3[4] * dVar7 + *param_3 * dVar4;
  dVar15 = param_3[5] * dVar7 + param_3[1] * dVar4;
  dVar11 = dVar7 * param_3[6] + dVar4 * param_3[2];
  dVar13 = dVar7 * param_3[7] + dVar4 * param_3[3];
  dVar4 = param_3[8] + dVar14 + param_3[0xc];
  dVar7 = param_3[9] + dVar15 + param_3[0xd];
  dVar12 = param_3[10] + dVar11 + param_3[0xe];
  dVar8 = param_3[0xb] + dVar13 + param_3[0xf];
  bVar1 = NAN(dVar8);
  bVar2 = dVar8 == 0.0;
  dVar8 = 1.0 / dVar8;
  dVar5 = dVar12 * dVar8;
  if ((bVar2) && (!bVar1)) {
    dVar5 = dVar12;
  }
  dVar12 = dVar7 * dVar8;
  if ((bVar2) && (!bVar1)) {
    dVar12 = dVar7;
  }
  dVar14 = param_3[0xc] + param_3[8] * 0.009999999776482582 + dVar14;
  dVar15 = param_3[0xd] + param_3[9] * 0.009999999776482582 + dVar15;
  dVar11 = param_3[0xe] + param_3[10] * 0.009999999776482582 + dVar11;
  dVar7 = param_3[0xf] + param_3[0xb] * 0.009999999776482582 + dVar13;
  dVar8 = dVar8 * dVar4;
  if ((bVar2) && (!bVar1)) {
    dVar8 = dVar4;
  }
  bVar1 = NAN(dVar7);
  bVar2 = dVar7 == 0.0;
  dVar7 = 1.0 / dVar7;
  dVar4 = dVar11 * dVar7;
  if ((bVar2) && (!bVar1)) {
    dVar4 = dVar11;
  }
  dVar11 = dVar15 * dVar7;
  if ((bVar2) && (!bVar1)) {
    dVar11 = dVar15;
  }
  dVar7 = dVar7 * dVar14;
  if ((bVar2) && (!bVar1)) {
    dVar7 = dVar14;
  }
  dVar4 = dVar4 - dVar5;
  dVar11 = dVar11 - dVar12;
  dVar7 = dVar7 - dVar8;
  dVar14 = dVar4 * dVar4 + dVar7 * dVar7 + dVar11 * dVar11;
  if (((dVar14 != 1.0) || (dVar16 = dVar11, dVar15 = dVar4, dVar13 = dVar7, NAN(dVar14))) &&
     (dVar16 = DAT_14c8464e8, dVar15 = DAT_14c8464f0, dVar13 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar14)) {
    dVar14 = 1.0 / SQRT(dVar14);
    dVar16 = dVar11 * dVar14;
    dVar15 = dVar4 * dVar14;
    dVar13 = dVar7 * dVar14;
  }
  *param_4 = dVar8;
  param_4[1] = dVar12;
  param_4[2] = dVar5;
  *param_5 = dVar13;
  param_5[1] = dVar16;
  param_5[2] = dVar15;
  return;
}



// FUNCTION 147cf0946 FUN_147cf0946 body=1088 status=ok
// SIG undefined FUN_147cf0946(void)

void FUN_147cf0946(double *param_1,int *param_2,double *param_3,double *param_4,
                  undefined1 (*param_5) [16],double *param_6)

{
  bool bVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  fVar6 = (float)((int)(longlong)*param_1 - *param_2) / (float)(param_2[2] - *param_2) + -0.5;
  fVar9 = (1.0 - (float)((int)(longlong)param_1[1] - param_2[1]) / (float)(param_2[3] - param_2[1]))
          + -0.5;
  dVar8 = (double)(fVar9 + fVar9);
  dVar7 = (double)(fVar6 + fVar6);
  dVar17 = param_4[4] * dVar8 + *param_4 * dVar7;
  dVar5 = param_4[5] * dVar8 + param_4[1] * dVar7;
  dVar14 = dVar8 * param_4[6] + dVar7 * param_4[2];
  dVar16 = dVar8 * param_4[7] + dVar7 * param_4[3];
  dVar12 = param_4[8] + dVar17 + param_4[0xc];
  dVar15 = param_4[9] + dVar5 + param_4[0xd];
  dVar7 = param_4[10] + dVar14 + param_4[0xe];
  dVar8 = param_4[0xb] + dVar16 + param_4[0xf];
  bVar1 = NAN(dVar8);
  bVar2 = dVar8 == 0.0;
  dVar8 = 1.0 / dVar8;
  dVar10 = dVar15 * dVar8;
  if ((bVar2) && (!bVar1)) {
    dVar10 = dVar15;
  }
  dVar15 = dVar12 * dVar8;
  if ((bVar2) && (!bVar1)) {
    dVar15 = dVar12;
  }
  dVar18 = param_4[0xc] + param_4[8] * 0.009999999776482582 + dVar17;
  dVar5 = param_4[0xd] + param_4[9] * 0.009999999776482582 + dVar5;
  dVar12 = param_4[0xe] + param_4[10] * 0.009999999776482582 + dVar14;
  dVar17 = param_4[0xf] + param_4[0xb] * 0.009999999776482582 + dVar16;
  dVar8 = dVar8 * dVar7;
  if ((bVar2) && (!bVar1)) {
    dVar8 = dVar7;
  }
  bVar1 = NAN(dVar17);
  bVar2 = dVar17 == 0.0;
  dVar17 = 1.0 / dVar17;
  dVar7 = dVar12 * dVar17;
  if ((bVar2) && (!bVar1)) {
    dVar7 = dVar12;
  }
  dVar12 = dVar5 * dVar17;
  if ((bVar2) && (!bVar1)) {
    dVar12 = dVar5;
  }
  dVar17 = dVar17 * dVar18;
  if ((bVar2) && (!bVar1)) {
    dVar17 = dVar18;
  }
  dVar7 = dVar7 - dVar8;
  dVar12 = dVar12 - dVar10;
  dVar17 = dVar17 - dVar15;
  dVar5 = dVar7 * dVar7 + dVar17 * dVar17 + dVar12 * dVar12;
  if (((dVar5 != 1.0) || (dVar16 = dVar7, dVar18 = dVar17, dVar14 = dVar12, NAN(dVar5))) &&
     (dVar16 = DAT_14c8464f0, dVar18 = DAT_14c8464e0, dVar14 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar5)) {
    dVar5 = 1.0 / SQRT(dVar5);
    dVar16 = dVar7 * dVar5;
    dVar18 = dVar17 * dVar5;
    dVar14 = dVar12 * dVar5;
  }
  dVar4 = dVar8 * param_3[9] + dVar10 * param_3[5] + dVar15 * param_3[1] + param_3[0xd];
  dVar7 = param_3[6];
  dVar12 = param_3[2];
  dVar17 = param_3[10];
  dVar5 = param_3[0xe];
  dVar11 = param_3[0xc] * 0.0 + dVar16 * param_3[8] + dVar14 * param_3[4] + dVar18 * *param_3;
  dVar13 = param_3[0xd] * 0.0 + dVar16 * param_3[9] + dVar14 * param_3[5] + dVar18 * param_3[1];
  dVar14 = dVar16 * dVar17 + dVar18 * dVar12 + dVar14 * dVar7 + dVar5 * 0.0;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = dVar8 * param_3[8] + dVar10 * param_3[4] + dVar15 * *param_3 + param_3[0xc];
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *param_5 = auVar3;
  *(double *)param_5[1] = dVar8 * dVar17 + dVar15 * dVar12 + dVar10 * dVar7 + dVar5;
  dVar7 = dVar14 * dVar14 + dVar11 * dVar11 + dVar13 * dVar13;
  if (((dVar7 != 1.0) || (dVar8 = dVar14, dVar12 = dVar11, dVar15 = dVar13, NAN(dVar7))) &&
     (dVar8 = DAT_14c8464f0, dVar12 = DAT_14c8464e0, dVar15 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar7)) {
    dVar7 = 1.0 / SQRT(dVar7);
    dVar8 = dVar14 * dVar7;
    dVar12 = dVar11 * dVar7;
    dVar15 = dVar13 * dVar7;
  }
  *param_6 = dVar12;
  param_6[1] = dVar15;
  param_6[2] = dVar8;
  return;
}



// FUNCTION 147cf0d86 FUN_147cf0d86 body=267 status=ok
// SIG undefined FUN_147cf0d86(void)

void FUN_147cf0d86(longlong param_1,longlong param_2,float param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((param_3 <= 0.99607843) && (*(int *)(param_1 + 0xa18) != 0)) {
    lVar5 = param_1 + 0x990;
    uVar2 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0xa10);
      if (*(longlong *)(param_1 + 0xa10) == 0) {
        lVar3 = lVar5;
      }
      *(float *)(lVar3 + (longlong)(int)uVar2 * 0x10) =
           *(float *)(lVar3 + (longlong)(int)uVar2 * 0x10) * (1.0 - param_3);
      uVar2 = uVar2 + 1;
      uVar1 = *(uint *)(param_1 + 0xa18);
    } while (uVar2 < uVar1);
    if (uVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0xa10);
      if (*(longlong *)(param_1 + 0xa10) == 0) {
        lVar3 = lVar5;
      }
      uVar2 = 0;
      do {
        lVar4 = (longlong)(int)uVar2 * 0x10;
        if (*(longlong *)(lVar3 + 8 + lVar4) == param_2) {
          *(float *)(lVar3 + lVar4) = param_3 + *(float *)(lVar3 + lVar4);
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar1 != uVar2);
    }
    *(uint *)(param_1 + 0xa18) = uVar1 + 1;
    if (*(uint *)(param_1 + 0xa1c) < uVar1 + 1) {
      FUN_147d0a340(lVar5,uVar1);
    }
    if (*(longlong *)(param_1 + 0xa10) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xa10);
    }
    *(float *)(lVar5 + (longlong)(int)uVar1 * 0x10) = param_3;
    *(longlong *)(lVar5 + 8 + (longlong)(int)uVar1 * 0x10) = param_2;
    return;
  }
  FUN_147d0a254(param_1,param_2);
  return;
}



// FUNCTION 147cf0e92 FUN_147cf0e92 body=172 status=ok
// SIG undefined FUN_147cf0e92(void)

longlong * FUN_147cf0e92(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(lVar2 + 0x10);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  iVar3 = 0;
  if (iVar1 != 0) {
    FUN_147d0b83a(param_2);
    lVar2 = *(longlong *)(param_1 + 8);
    iVar3 = *(int *)(lVar2 + 0x10);
  }
  if (*(int *)(param_1 + 0x1dd8) + 1 < iVar3) {
    lVar4 = (longlong)*(int *)(param_1 + 0x1dd8) + 1;
    do {
      lVar2 = *(longlong *)(lVar2 + 8);
      if (*(int *)(*(longlong *)(lVar2 + lVar4 * 8) + 0x1dd0) != 2) {
        return param_2;
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_144928a2e(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + lVar4 * 8);
      lVar4 = lVar4 + 1;
      lVar2 = *(longlong *)(param_1 + 8);
    } while (lVar4 < *(int *)(lVar2 + 0x10));
  }
  return param_2;
}



// FUNCTION 147cf0f40 FUN_147cf0f40 body=318 status=ok
// SIG undefined FUN_147cf0f40(void)

ulonglong FUN_147cf0f40(longlong *param_1,longlong param_2)

{
  code *pcVar1;
  undefined1 extraout_AL;
  undefined1 extraout_AL_00;
  undefined7 uVar3;
  undefined8 uVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_78 [40];
  longlong *local_50;
  undefined1 local_42;
  byte local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)(int)param_1[4] != 0) {
    lVar5 = (longlong)(int)param_1[4] * 0x50;
    plVar6 = (longlong *)(param_1[3] + 0x30);
    do {
      pcVar1 = (code *)plVar6[-4];
      if (pcVar1 != (code *)0x0) {
        plVar4 = (longlong *)plVar6[-2];
        if ((longlong *)plVar6[-2] == (longlong *)0x0) {
          plVar4 = plVar6;
        }
        local_50 = param_1;
        uVar2 = (**(code **)(*plVar4 + 8))();
        uVar2 = (*pcVar1)(&local_42,uVar2,&local_50,param_2);
        if ((local_41 & 1) != 0) {
          uVar3 = (undefined7)((ulonglong)uVar2 >> 8);
          goto LAB_147cf0f85;
        }
      }
      plVar6 = plVar6 + 10;
      lVar5 = lVar5 + -0x50;
    } while (lVar5 != 0);
  }
  pcVar1 = *(code **)(*param_1 + 200);
  uVar3 = (undefined7)((ulonglong)*param_1 >> 8);
  local_42 = 1;
  if (pcVar1 != (code *)&LAB_144b13d16) {
    if (pcVar1 == FUN_147cf1080) {
      if ((*(longlong *)(param_2 + 8) == 0) ||
         (plVar6 = *(longlong **)(*(longlong *)(param_2 + 8) + 0x30), plVar6 == (longlong *)0x0)) {
        if (*(longlong **)(param_2 + 0x10) == (longlong *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x3d0))();
        }
      }
      else {
        uVar2 = (**(code **)(*plVar6 + 0x30))();
      }
      FUN_1447ffd82(param_1 + 5,uVar2);
      local_42 = extraout_AL;
      uVar3 = extraout_var;
    }
    else {
      (*pcVar1)(param_1,param_2);
      local_42 = extraout_AL_00;
      uVar3 = extraout_var_00;
    }
  }
LAB_147cf0f85:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar3,local_42) & 0xffffffffffffff01;
}



// FUNCTION 147cf1080 FUN_147cf1080 body=76 status=ok
// SIG undefined FUN_147cf1080(void)

void FUN_147cf1080(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_2 + 8) == 0) ||
     (plVar1 = *(longlong **)(*(longlong *)(param_2 + 8) + 0x30), plVar1 == (longlong *)0x0)) {
    if (*(longlong **)(param_2 + 0x10) == (longlong *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x3d0))();
    }
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x30))();
  }
  FUN_1447ffd82(param_1 + 0x28,uVar2);
  return;
}



// FUNCTION 147cf10cc FUN_147cf10cc body=42 status=ok
// SIG undefined FUN_147cf10cc(void)

void FUN_147cf10cc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 147cf1102 FUN_147cf1102 body=39 status=ok
// SIG undefined FUN_147cf1102(void)

void FUN_147cf1102(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147d0a44e(uVar1,param_1);
  return;
}



// FUNCTION 147cf112a FUN_147cf112a body=51 status=ok
// SIG undefined FUN_147cf112a(void)

longlong FUN_147cf112a(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  return lVar1;
}



// FUNCTION 147cf115e FUN_147cf115e body=42 status=ok
// SIG undefined FUN_147cf115e(void)

void FUN_147cf115e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 147cf1190 FUN_147cf1190 body=39 status=ok
// SIG undefined FUN_147cf1190(void)

void FUN_147cf1190(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147d0a44e(uVar1,param_1);
  return;
}



// FUNCTION 147cf11b8 FUN_147cf11b8 body=51 status=ok
// SIG undefined FUN_147cf11b8(void)

longlong FUN_147cf11b8(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  return lVar1;
}



// FUNCTION 147cf11ec FUN_147cf11ec body=42 status=ok
// SIG undefined FUN_147cf11ec(void)

void FUN_147cf11ec(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 147cf121e FUN_147cf121e body=39 status=ok
// SIG undefined FUN_147cf121e(void)

void FUN_147cf121e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147d0a44e(uVar1,param_1);
  return;
}



// FUNCTION 147cf1246 FUN_147cf1246 body=51 status=ok
// SIG undefined FUN_147cf1246(void)

longlong FUN_147cf1246(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  return lVar1;
}



// FUNCTION 147cf127a FUN_147cf127a body=42 status=ok
// SIG undefined FUN_147cf127a(void)

void FUN_147cf127a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 147cf12b0 FUN_147cf12b0 body=39 status=ok
// SIG undefined FUN_147cf12b0(void)

void FUN_147cf12b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147d0a4b0(uVar1,param_1);
  return;
}



// FUNCTION 147cf12d8 FUN_147cf12d8 body=51 status=ok
// SIG undefined FUN_147cf12d8(void)

longlong FUN_147cf12d8(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  return lVar1;
}



// FUNCTION 147cf130c FUN_147cf130c body=42 status=ok
// SIG undefined FUN_147cf130c(void)

void FUN_147cf130c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 147cf1342 FUN_147cf1342 body=39 status=ok
// SIG undefined FUN_147cf1342(void)

void FUN_147cf1342(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147d0a512(uVar1,param_1);
  return;
}



// FUNCTION 147cf136a FUN_147cf136a body=51 status=ok
// SIG undefined FUN_147cf136a(void)

longlong FUN_147cf136a(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  return lVar1;
}



// FUNCTION 147cf139e FUN_147cf139e body=42 status=ok
// SIG undefined FUN_147cf139e(void)

void FUN_147cf139e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf0);
  return;
}



// FUNCTION 147cf13d4 FUN_147cf13d4 body=39 status=ok
// SIG undefined FUN_147cf13d4(void)

void FUN_147cf13d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf0,0x10);
  FUN_147d0a574(uVar1,param_1);
  return;
}



// FUNCTION 147cf13fc FUN_147cf13fc body=56 status=ok
// SIG undefined FUN_147cf13fc(void)

longlong FUN_147cf13fc(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xf0,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe6) = 0;
  return lVar1;
}



// FUNCTION 147cf1434 FUN_147cf1434 body=42 status=ok
// SIG undefined FUN_147cf1434(void)

void FUN_147cf1434(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf0);
  return;
}



// FUNCTION 147cf146a FUN_147cf146a body=39 status=ok
// SIG undefined FUN_147cf146a(void)

void FUN_147cf146a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf0,0x10);
  FUN_147d0a5fc(uVar1,param_1);
  return;
}



// FUNCTION 147cf1492 FUN_147cf1492 body=56 status=ok
// SIG undefined FUN_147cf1492(void)

longlong FUN_147cf1492(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xf0,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe6) = 0;
  return lVar1;
}



// FUNCTION 147cf14ca FUN_147cf14ca body=42 status=ok
// SIG undefined FUN_147cf14ca(void)

void FUN_147cf14ca(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147cf1500 FUN_147cf1500 body=39 status=ok
// SIG undefined FUN_147cf1500(void)

void FUN_147cf1500(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 147cf1528 FUN_147cf1528 body=31 status=ok
// SIG undefined FUN_147cf1528(void)

void FUN_147cf1528(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e26(uVar1);
  return;
}



// FUNCTION 147cf1548 FUN_147cf1548 body=42 status=ok
// SIG undefined FUN_147cf1548(void)

void FUN_147cf1548(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 147cf157e FUN_147cf157e body=39 status=ok
// SIG undefined FUN_147cf157e(void)

void FUN_147cf157e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147d0a684(uVar1,param_1);
  return;
}



// FUNCTION 147cf15a6 FUN_147cf15a6 body=51 status=ok
// SIG undefined FUN_147cf15a6(void)

longlong FUN_147cf15a6(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  return lVar1;
}



// FUNCTION 147cf15da FUN_147cf15da body=219 status=ok
// SIG undefined FUN_147cf15da(void)

void FUN_147cf15da(longlong param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_2 < *(int *)(param_1 + 0x30)) {
    local_38 = 0;
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x28) + 8 + (ulonglong)param_2 * 0x10);
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)param_2 * 0x10);
    local_30 = iVar1;
    if (iVar1 == 0) {
      local_2c = 0;
    }
    else {
      FUN_14788fcba(&local_38,iVar1,0);
      FUN_14788fd1c(local_38,uVar2,iVar1);
      if (0 < local_30) {
        lVar4 = 0;
        lVar6 = 0;
        do {
          lVar5 = local_38 + lVar4;
          cVar3 = FUN_14113f0c0(lVar5);
          if (cVar3 != '\0') {
            FUN_14788c754(lVar5,param_3);
          }
          lVar6 = lVar6 + 1;
          lVar4 = lVar4 + 0x10;
        } while (lVar6 < local_30);
      }
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cf16b6 FUN_147cf16b6 body=241 status=ok
// SIG undefined FUN_147cf16b6(void)

longlong * FUN_147cf16b6(void)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  undefined2 *local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb03fd8 == (longlong *)0x0) {
    local_28 = (undefined2 *)0x0;
    uStack_20 = 0;
    local_38 = &DAT_14c872ce8;
    FUN_1449da20c(DAT_14c872ce0,L"PlatformInterface",L"InGameAdManagerClassName",&local_28);
    puVar3 = local_28;
    if ((int)uStack_20 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    uVar1 = FUN_145b3d476();
    local_30 = 0;
    local_38 = (undefined8 *)((ulonglong)local_38 & 0xffffffff00000000);
    lVar2 = FUN_141433b6f(uVar1,0,puVar3,0);
    if (lVar2 == 0) {
      lVar2 = FUN_145b3d476();
    }
    DAT_14cb03fd8 = (longlong *)FUN_147cf19c9(DAT_14c951640,lVar2);
    (**(code **)(*DAT_14cb03fd8 + 0x2b0))(DAT_14cb03fd8);
    if (local_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cb03fd8;
}



// FUNCTION 147cf17a8 FUN_147cf17a8 body=245 status=ok
// SIG undefined FUN_147cf17a8(void)

void FUN_147cf17a8(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  plVar1 = (longlong *)(param_1 + 0x28);
  iVar3 = *(int *)(param_1 + 0x30);
  if (0 < (param_2 + 1) - iVar3 && iVar3 <= param_2) {
    iVar5 = 0;
    do {
      *(uint *)(param_1 + 0x30) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x34) < iVar3 + 1U) {
        FUN_147d0bca4(plVar1,iVar3);
      }
      iVar5 = iVar5 + 1;
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar3 * 0x10);
      *puVar2 = 0;
      puVar2[1] = 0;
      iVar3 = *(int *)(param_1 + 0x30);
    } while (iVar5 < (param_2 + 1) - iVar3);
  }
  lVar6 = (longlong)param_2 * 0x10;
  iVar3 = FUN_147cf189e(*plVar1 + lVar6,param_3);
  if (iVar3 == -1) {
    lVar4 = *plVar1;
    iVar3 = *(int *)(lVar4 + 8 + lVar6);
    *(uint *)(lVar4 + 8 + lVar6) = iVar3 + 1U;
    if (*(uint *)(lVar4 + 0xc + lVar6) < iVar3 + 1U) {
      FUN_147d0bd2a((longlong *)(lVar4 + lVar6),iVar3);
    }
    lVar6 = *(longlong *)(lVar4 + lVar6);
    lVar4 = (longlong)iVar3 * 0x10;
    *(undefined8 *)(lVar6 + lVar4) = 0;
    ((undefined8 *)(lVar6 + lVar4))[1] = 0;
    *(undefined8 *)(lVar6 + lVar4) = *param_3;
    *(undefined8 *)(lVar6 + 8 + lVar4) = param_3[1];
  }
  return;
}



// FUNCTION 147cf189e FUN_147cf189e body=172 status=ok
// SIG undefined FUN_147cf189e(void)

int FUN_147cf189e(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar5 = -1;
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    piVar3 = (int *)*param_1;
    lVar6 = (longlong)*(int *)(param_1 + 1) << 4;
    iVar4 = 0;
    do {
      local_48 = *param_2;
      lVar1 = param_2[1];
      if ((((*piVar3 == (int)local_48) && (piVar3[1] == (int)((ulonglong)local_48 >> 0x20))) ||
          ((cVar2 = FUN_144729dda(piVar3), cVar2 == '\0' &&
           (cVar2 = FUN_144729dda(&local_48), cVar2 == '\0')))) &&
         (iVar5 = iVar4, *(longlong *)(piVar3 + 2) == lVar1)) break;
      piVar3 = piVar3 + 4;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + -0x10;
      iVar5 = -1;
    } while (lVar6 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 147cf194c FUN_147cf194c body=125 status=ok
// SIG undefined FUN_147cf194c(void)

void FUN_147cf194c(longlong param_1,int param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  if (param_2 < *(int *)(param_1 + 0x30)) {
    lVar4 = (longlong)param_2 * 0x10;
    iVar2 = FUN_147cf189e(*(longlong *)(param_1 + 0x28) + lVar4,param_3);
    if (iVar2 != -1) {
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x28) + lVar4);
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x28) + 8 + lVar4);
      iVar5 = iVar3 - (iVar2 + 1);
      if (iVar5 != 0) {
        memmove((void *)(*plVar1 + (longlong)iVar2 * 0x10),
                (void *)(*plVar1 + (longlong)iVar2 * 0x10 + 0x10),(longlong)iVar5 << 4);
        iVar3 = (int)plVar1[1];
      }
      *(int *)(plVar1 + 1) = iVar3 + -1;
      FUN_147d0bdb0(plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 147cf19c9 FUN_147cf19c9 body=185 status=ok
// SIG undefined FUN_147cf19c9(void)

undefined8 FUN_147cf19c9(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cf1a86 FUN_147cf1a86 body=228 status=ok
// SIG undefined FUN_147cf1a86(void)

undefined8 FUN_147cf1a86(longlong param_1)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined1 local_58;
  undefined7 uStack_57;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_44;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)FUN_14054d1d4();
  FUN_14170204c(&local_58);
  if ((int)local_50 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)CONCAT71(uStack_57,local_58);
  }
  local_68 = 1;
  local_78 = 1;
  local_70 = 0;
  (**(code **)(*plVar1 + 0x80))(plVar1,param_1 + 0x38,puVar2,&DAT_149e14148);
  if (CONCAT71(uStack_57,local_58) != 0) {
    FUN_1400020a8();
  }
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    local_44 = 0;
    local_50 = 0;
    local_48 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_58 = 1;
    FUN_147cf15da(param_1,3,&local_58);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cf1b76 FUN_147cf1b76 body=59 status=ok
// SIG undefined FUN_147cf1b76(void)

undefined8 FUN_147cf1b76(longlong param_1,undefined8 param_2,int param_3)

{
  if (param_3 < *(int *)(param_1 + 0x40)) {
    FUN_144a06ecc(param_2,(longlong)param_3 * 0x10 + *(longlong *)(param_1 + 0x38));
  }
  else {
    FUN_140056680(param_2,&DAT_149dfb77a);
  }
  return param_2;
}



// FUNCTION 147cf1bb2 FUN_147cf1bb2 body=230 status=ok
// SIG undefined FUN_147cf1bb2(void)

int FUN_147cf1bb2(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14170204c(local_48);
  FUN_144a7dea0(&local_38,local_48,param_2);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  iVar2 = *(int *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x40) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x44) < iVar2 + 1U) {
    FUN_1447a1bd6((longlong *)(param_1 + 0x38),iVar2);
  }
  _Src = local_38;
  lVar3 = *(longlong *)(param_1 + 0x38);
  lVar4 = (longlong)iVar2 * 0x10;
  puVar1 = (undefined8 *)(lVar3 + lVar4);
  *(undefined8 *)(lVar3 + lVar4) = 0;
  *(int *)(lVar3 + 8 + lVar4) = local_30;
  if ((longlong)local_30 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar1,local_30,0);
    memcpy((void *)*puVar1,_Src,(longlong)local_30 * 2);
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cf1c9a FUN_147cf1c9a body=231 status=ok
// SIG undefined FUN_147cf1c9a(void)

ulonglong FUN_147cf1c9a(longlong param_1,int param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined1 local_50;
  int local_4c;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  undefined7 uVar5;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_3 == '\0') && (param_2 < *(int *)(param_1 + 0x40))) {
    plVar1 = (longlong *)FUN_14054d1d4();
    if (*(int *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)param_2 * 0x10) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = *(undefined2 **)(*(longlong *)(param_1 + 0x38) + (longlong)param_2 * 0x10);
    }
    lVar2 = (**(code **)(*plVar1 + 0x108))(plVar1,puVar3);
    if (lVar2 != -1) {
      uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
      uVar4 = CONCAT71(uVar5,1);
      if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
        local_48 = 0;
        local_58 = 0;
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
        uVar4 = CONCAT71(uVar5,1);
        local_60[0] = 1;
        local_50 = 1;
        local_4c = param_2;
        FUN_147cf15da(param_1,4,local_60);
        if (local_40 != 0) {
          FUN_1400020a8();
        }
      }
      goto LAB_147cf1d53;
    }
  }
  uVar4 = 0;
LAB_147cf1d53:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cf1d82 FUN_147cf1d82 body=98 status=ok
// SIG undefined FUN_147cf1d82(void)

undefined8 * FUN_147cf1d82(longlong param_1,undefined8 *param_2,int param_3,char param_4)

{
  undefined2 *puVar1;
  
  if ((param_4 == '\0') && (param_3 < *(int *)(param_1 + 0x40))) {
    *param_2 = 0;
    param_2[1] = 0;
    if (*(int *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)param_3 * 0x10) == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    else {
      puVar1 = *(undefined2 **)(*(longlong *)(param_1 + 0x38) + (longlong)param_3 * 0x10);
    }
    FUN_140f7cb10(param_2,puVar1,0,0);
  }
  else {
    FUN_140056680(param_2,&DAT_149dfb77a);
  }
  return param_2;
}



// FUNCTION 147cf1de4 FUN_147cf1de4 body=116 status=ok
// SIG undefined FUN_147cf1de4(void)

void FUN_147cf1de4(longlong param_1,int param_2,longlong param_3,char param_4)

{
  undefined2 *puVar1;
  
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) != 0) {
    FUN_144893a1c(param_3,0);
  }
  if ((param_4 == '\0') && (param_2 < *(int *)(param_1 + 0x40))) {
    if (*(int *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)param_2 * 0x10) == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    else {
      puVar1 = *(undefined2 **)(*(longlong *)(param_1 + 0x38) + (longlong)param_2 * 0x10);
    }
    FUN_14158b496(param_3,puVar1,0);
    return;
  }
  return;
}



// FUNCTION 147cf1e58 FUN_147cf1e58 body=140 status=ok
// SIG undefined FUN_147cf1e58(void)

bool FUN_147cf1e58(longlong param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48;
  int local_44;
  undefined4 local_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x40);
  if ((param_2 < iVar1) && ((*(byte *)(param_1 + 0x48) & 1) == 0)) {
    local_40 = 0;
    local_50 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_58[0] = 1;
    local_48 = 1;
    local_44 = param_2;
    FUN_147cf15da(0,5,local_58);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cf1ee6 FUN_147cf1ee6 body=156 status=ok
// SIG undefined FUN_147cf1ee6(void)

undefined8 FUN_147cf1ee6(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 < *(int *)(param_1 + 0x40)) {
    uVar1 = FUN_14054d1d4();
    if (*(int *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)param_2 * 0x10) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = *(undefined2 **)(*(longlong *)(param_1 + 0x38) + (longlong)param_2 * 0x10);
    }
    local_30 = *param_3;
    local_28 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      local_28 = 0;
    }
    local_38 = 0;
    uVar1 = FUN_1415d54ec(&local_30,puVar2,0,uVar1);
  }
  else {
    uVar1 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cf1f84 FUN_147cf1f84 body=137 status=ok
// SIG undefined FUN_147cf1f84(void)

undefined8 FUN_147cf1f84(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 < *(int *)(param_1 + 0x40)) {
    uVar1 = FUN_14054d1d4();
    if (*(int *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)param_2 * 0x10) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = *(undefined2 **)(*(longlong *)(param_1 + 0x38) + (longlong)param_2 * 0x10);
    }
    local_30 = *param_3;
    local_28 = (longlong)*(int *)(param_3 + 1);
    uVar1 = FUN_146810d90(&local_30,puVar2,uVar1,0);
  }
  else {
    uVar1 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cf200e FUN_147cf200e body=589 status=ok
// SIG undefined FUN_147cf200e(void)

bool FUN_147cf200e(longlong *param_1,undefined4 param_2,longlong *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  ushort uVar2;
  ushort uVar3;
  ulonglong *puVar4;
  undefined **ppuVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_1c8 [40];
  undefined **local_1a0 [17];
  undefined ***local_118;
  undefined ***local_110;
  undefined2 local_108;
  undefined **local_100;
  int local_f8;
  undefined4 uStack_f4;
  byte local_d6;
  undefined ***local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58 [2];
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_44 = param_4;
  (**(code **)(*param_1 + 0x2d8))(param_1,&local_100);
  ppuVar5 = local_100;
  if (local_f8 == 0) {
    ppuVar5 = (undefined **)&DAT_149dfb77a;
  }
  lVar6 = 0;
  while( true ) {
    uVar2 = *(ushort *)((longlong)ppuVar5 + lVar6);
    uVar8 = (uint)uVar2;
    uVar3 = *(ushort *)((longlong)&DAT_149dfb77a + lVar6);
    uVar7 = (uint)uVar3;
    if (uVar2 != uVar3) {
      if ((uVar3 | uVar2) < 0x80) {
        uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
        uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar3];
        if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_147cf208e;
      }
      iVar9 = uVar8 - uVar7;
      goto LAB_147cf20ba;
    }
    if (uVar2 == 0) break;
LAB_147cf208e:
    lVar6 = lVar6 + 2;
  }
  iVar9 = 0;
LAB_147cf20ba:
  if (local_100 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  if (iVar9 != 0) {
    local_58[0] = 0;
    local_58[1] = 0;
    memset(&local_100,0,0x90);
    FUN_144869430(&local_100);
    local_70 = 0;
    local_100 = &PTR_FUN_149e1e590;
    local_60 = 0;
    local_68 = local_58;
    FUN_144a69558(&local_100,1);
    (*(code *)local_100[0x1e])(&local_100,0);
    local_100 = &PTR_FUN_149e1e330;
    puVar4 = (ulonglong *)CONCAT44(uStack_f4,local_f8);
    puVar1 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar1) {
      if ((local_d6 & 2) == 0) {
        FUN_144a2420a(&local_100,&local_44,4);
      }
      else {
        FUN_14572512c(&local_100,&local_44);
      }
    }
    else {
      local_44 = *(undefined4 *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
    }
    FUN_1407134c4(local_1a0,&local_100);
    local_118 = local_78;
    local_1a0[0] = &PTR_FUN_149eae6c0;
    local_108 = 0;
    local_110 = &local_100;
    local_78 = local_1a0;
    (**(code **)(*param_3 + 0xd8))(param_3,local_1a0);
    (**(code **)(*param_1 + 0x318))(param_1,param_2,local_58);
    FUN_14041e0ea(local_1a0);
    FUN_144a7fc42(&local_100);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return iVar9 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cf227c FUN_147cf227c body=32 status=ok
// SIG undefined FUN_147cf227c(void)

undefined8 FUN_147cf227c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 147cf22b2 FUN_147cf22b2 body=437 status=ok
// SIG undefined FUN_147cf22b2(void)

void FUN_147cf22b2(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  uint local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  longlong *local_70;
  undefined2 local_68;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x60);
  local_58 = param_1 + 0x70;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_1449c0562(&local_60);
  }
  local_88 = local_50;
  iStack_84 = iStack_4c;
  local_80 = local_48;
  local_7c = local_44;
  local_98 = local_60;
  local_90 = local_58;
  local_68 = 0;
  local_a0 = plVar1;
  local_78 = plVar1;
  local_70 = plVar1;
  if (iStack_4c < *(int *)(local_58 + 0x18)) {
    iVar4 = 0;
    do {
      if (*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x94) <= iVar4) break;
      if (param_2 == iVar4) {
        iVar2 = *(int *)(*local_a0 + 8 + (longlong)iStack_84 * 0x28);
        iVar3 = iVar2 + -1;
        if (iVar2 == 0) {
          iVar3 = 0;
        }
        FUN_1402980a2(param_3,*(undefined8 *)(*local_a0 + (longlong)iStack_84 * 0x28),iVar3);
        iVar2 = *(int *)(*local_a0 + 0x18 + (longlong)iStack_84 * 0x28);
        iVar3 = iVar2 + -1;
        if (iVar2 == 0) {
          iVar3 = 0;
        }
        FUN_1402980a2(param_4,*(undefined8 *)(*local_a0 + 0x10 + (longlong)iStack_84 * 0x28),iVar3);
      }
      local_88 = local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
      iVar4 = iVar4 + 1;
    } while (iStack_84 < *(int *)(local_90 + 0x18));
    if (((local_68 & 1) != 0) && (local_68._1_1_ == '\x01')) {
      FUN_147a6fb2a(local_70,(int)local_70[1] - *(int *)((longlong)local_70 + 0x34),1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cf2468 FUN_147cf2468 body=191 status=ok
// SIG undefined FUN_147cf2468(void)

undefined8 * FUN_147cf2468(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  void *_Src;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 *puVar5;
  
  iVar4 = *(int *)(param_3 + 1);
  if (iVar4 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_3;
  }
  iVar2 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar2,puVar5);
  iVar4 = FUN_1457511aa((longlong *)(param_1 + 0x60),uVar3,param_3);
  if (iVar4 != -1) {
    lVar1 = *(longlong *)(param_1 + 0x60);
    if ((lVar1 + (longlong)iVar4 * 0x28 + 0x10U & 0xffffffffffffffef) != 0) {
      lVar1 = lVar1 + (longlong)iVar4 * 0x28;
      *param_2 = 0;
      iVar4 = *(int *)(lVar1 + 0x18);
      _Src = *(void **)(lVar1 + 0x10);
      *(int *)(param_2 + 1) = iVar4;
      if ((longlong)iVar4 != 0) {
        FUN_1446dd670(param_2,iVar4,0);
        memcpy((void *)*param_2,_Src,(longlong)iVar4 * 2);
        return param_2;
      }
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      return param_2;
    }
  }
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 147cf2544 FUN_147cf2544 body=324 status=ok
// SIG undefined FUN_147cf2544(void)

longlong FUN_147cf2544(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0404c) && (FUN_144b3d300(&DAT_14cb0404c), DAT_14cb0404c == -1)) {
    FUN_1456c1f72(&DAT_14cb04048,L"Kismet",L"bEnableInheritableComponents",&DAT_14c872ce8);
    _Init_thread_footer(&DAT_14cb0404c);
  }
  if ((DAT_14cb04048 == '\x01') &&
     (lVar3 = *(longlong *)(param_1 + 0x20), *(longlong *)(param_2 + 0x2b8) != lVar3)) {
    FUN_147af1772(local_50,param_1);
    while( true ) {
      lVar1 = FUN_14797dbe8(param_2,0);
      if (lVar1 == 0) {
        lVar1 = 0;
      }
      else {
        lVar1 = FUN_147af16c8(lVar1,local_50);
      }
      param_2 = *(longlong *)(param_2 + 0x40);
      if (param_2 == 0) break;
      lVar2 = FUN_14043ab18();
      if ((((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
           (lVar1 != 0)) ||
          (*(longlong *)
            (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar2 + 0x38) * 8) != lVar2 + 0x30)) ||
         (*(longlong *)(param_2 + 0x2b8) == lVar3)) break;
    }
  }
  else {
    lVar1 = 0;
  }
  lVar3 = param_1 + 0x38;
  if (lVar1 != 0) {
    lVar3 = lVar1;
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 147cf268a FUN_147cf268a body=248 status=ok
// SIG undefined FUN_147cf268a(void)

longlong * FUN_147cf268a(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  void *local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_147d0be4c(param_2,0);
  *(longlong *)*param_2 = param_1;
  if (0 < *(int *)(param_1 + 0xa8)) {
    lVar2 = 0;
    do {
      FUN_147cf268a(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + lVar2 * 8),&local_48);
      lVar3 = (longlong)(int)local_40;
      if (lVar3 != 0) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + local_40;
        if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar1) < local_40) {
          FUN_147d0be4c(param_2,iVar1);
        }
        memmove((void *)((longlong)iVar1 * 8 + *param_2),local_48,lVar3 << 3);
        local_40 = 0;
      }
      if (local_48 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0xa8));
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cf2784 FUN_147cf2784 body=336 status=ok
// SIG undefined FUN_147cf2784(void)

void FUN_147cf2784(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(uint *)(param_1 + 8) >> 10 & 1) != 0) {
    lVar3 = FUN_144b00dc8(param_1);
    FUN_1427ff290(lVar3 + 0x240,param_1);
  }
  if (((*(longlong *)(param_1 + 0x30) != 0) &&
      ((*(uint *)(*(longlong *)(param_1 + 0x30) + 8) >> 10 & 1) != 0)) &&
     (lVar3 = FUN_144b00dc8(), lVar3 != 0)) {
    lVar3 = FUN_144b00dc8(*(undefined8 *)(param_1 + 0x30));
    FUN_1427ff290(lVar3 + 0x240,*(undefined8 *)(param_1 + 0x30));
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    FUN_14086ecde(*(undefined8 *)(param_1 + 0x30),&local_48,1,0x200000);
    lVar3 = local_48;
    lVar5 = (longlong)(int)uStack_40;
    if (lVar5 != 0) {
      lVar6 = 0;
      do {
        lVar1 = *(longlong *)(lVar3 + lVar6);
        if (((*(uint *)(lVar1 + 8) >> 0x13 & 1) != 0) && (lVar4 = FUN_144b00dc8(lVar1), lVar4 != 0))
        {
          FUN_1427ff290(lVar4 + 0x240,lVar1);
        }
        lVar6 = lVar6 + 8;
      } while (lVar5 * 8 != lVar6);
    }
    if (local_48 != 0) {
      FUN_1400020a8(local_48);
    }
  }
  iVar2 = *(int *)(param_1 + 0xa8);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xa0) + lVar3 * 8) != 0) {
        FUN_147cf2784();
        iVar2 = *(int *)(param_1 + 0xa8);
      }
      lVar3 = lVar3 + 1;
    } while ((int)lVar3 < iVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cf28d6 FUN_147cf28d6 body=12 status=ok
// SIG undefined FUN_147cf28d6(void)

void FUN_147cf28d6(longlong param_1)

{
  FUN_147d0c934(param_1 + 0x90);
  return;
}



// FUNCTION 147cf28e2 FUN_147cf28e2 body=12 status=ok
// SIG undefined FUN_147cf28e2(void)

void FUN_147cf28e2(longlong param_1)

{
  FUN_147d0c92c(param_1 + 0x90);
  return;
}



// FUNCTION 147cf28ee FUN_147cf28ee body=171 status=ok
// SIG undefined FUN_147cf28ee(void)

void FUN_147cf28ee(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*param_1 + 0x18))(param_1);
    if ((int)param_1[0x2d] != iVar2) {
      if (iVar2 == 0) {
        lVar3 = FUN_141589436();
        local_38[0] = 0;
        local_38[1] = 0;
        FUN_147965cf0(lVar3 + 0x28,local_38);
        if (local_38[0] != 0) {
          FUN_1400020a8();
        }
      }
      *(int *)(param_1 + 0x2d) = iVar2;
      FUN_1479595a4(param_1[0x35],iVar2);
    }
  }
  FUN_147d0c92c(param_1 + 0x12);
  (**(code **)(*param_1 + 0x18))(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cf299a FUN_147cf299a body=349 status=ok
// SIG undefined FUN_147cf299a(void)

void FUN_147cf299a(longlong *param_1,uint param_2,ulonglong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_98 [40];
  uint *local_70;
  ulonglong local_68;
  char local_5c;
  char local_5b;
  double local_58;
  char local_50;
  uint local_44;
  uint *local_40;
  uint **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_44 = param_2;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar4 * 0x38;
        if (*(uint *)(*param_1 + (longlong)iVar4 * 0x38) == param_2) {
          if (lVar1 + 8 != 0 && lVar1 != 0) {
            FUN_147cf2af8(&local_70,param_3);
            if (local_5c == '\x01') {
              local_5c = *(char *)(lVar1 + 0x1c);
            }
            else {
              local_5c = '\0';
            }
            cVar2 = '\x01';
            bVar5 = local_5b == '\0';
            local_5b = '\x01';
            if (bVar5) {
              local_5b = *(char *)(lVar1 + 0x1d);
            }
            if (*(double *)(lVar1 + 0x20) <= local_58) {
              local_58 = *(double *)(lVar1 + 0x20);
            }
            if (local_50 == '\0') {
              cVar2 = *(char *)(lVar1 + 0x28);
            }
            local_50 = cVar2;
            FUN_147cf2b60(&local_70,lVar1 + 8);
            local_40 = &local_44;
            local_38 = &local_70;
            FUN_147d0c0b0(param_1,local_2c);
            FUN_144b25a0f(local_70,local_68 & 0xffffffff);
            if (local_70 != (uint *)0x0) {
              FUN_1400020a8();
            }
            goto LAB_147cf2a00;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x30);
      } while (iVar4 != -1);
    }
  }
  local_70 = &local_44;
  local_68 = param_3;
  FUN_147d0c0b0(param_1,&local_40,&local_70);
LAB_147cf2a00:
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cf2af8 FUN_147cf2af8 body=103 status=ok
// SIG undefined FUN_147cf2af8(void)

undefined8 * FUN_147cf2af8(undefined8 *param_1,undefined8 *param_2)

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
    FUN_147d0a6e6(param_1,iVar1);
    FUN_147d0a73f(*param_1,uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x14);
  *(undefined8 *)((longlong)param_1 + 0x19) = *(undefined8 *)((longlong)param_2 + 0x19);
  *(undefined8 *)((longlong)param_1 + 0x14) = uVar2;
  return param_1;
}



// FUNCTION 147cf2b60 FUN_147cf2b60 body=94 status=ok
// SIG undefined FUN_147cf2b60(void)

void FUN_147cf2b60(longlong *param_1,undefined8 *param_2)

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
    FUN_147d0c02a(param_1,iVar2);
  }
  FUN_147d0a73f((longlong)iVar2 * 8 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 147cf2bbe FUN_147cf2bbe body=91 status=ok
// SIG undefined FUN_147cf2bbe(void)

void FUN_147cf2bbe(LPCRITICAL_SECTION param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)&param_1[0xb].OwningThread = 0;
  lVar1._0_4_ = param_1[0xb].LockCount;
  lVar1._4_4_ = param_1[0xb].RecursionCount;
  if (lVar1 != 0) {
    FUN_1400020a8();
  }
  FUN_147d0a796(&param_1[9].LockSemaphore);
  lVar2._0_4_ = param_1[9].LockCount;
  lVar2._4_4_ = param_1[9].RecursionCount;
  if (lVar2 != 0) {
    FUN_1400020a8();
  }
  FUN_147d0a760(param_1 + 1);
  DeleteCriticalSection(param_1);
  return;
}



// FUNCTION 147cf2c1a FUN_147cf2c1a body=38 status=ok
// SIG undefined FUN_147cf2c1a(void)

undefined8 FUN_147cf2c1a(undefined8 param_1,int param_2)

{
  FUN_144734340();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cf2c6a FUN_147cf2c6a body=65 status=ok
// SIG undefined FUN_147cf2c6a(void)

undefined8 * FUN_147cf2c6a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa71480;
  FUN_144725486(param_1 + 1);
  FUN_14006f2ae(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cf2cc0 FUN_147cf2cc0 body=138 status=ok
// SIG undefined FUN_147cf2cc0(void)

code * FUN_147cf2cc0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ToAP0";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000132;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf2d4a;
}



// FUNCTION 147cf2d4a FUN_147cf2d4a body=138 status=ok
// SIG undefined FUN_147cf2d4a(void)

code * FUN_147cf2d4a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FromAP1";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc000000131;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145deab6e;
}



// FUNCTION 147cf2dd4 FUN_147cf2dd4 body=38 status=ok
// SIG undefined FUN_147cf2dd4(void)

undefined8 FUN_147cf2dd4(undefined8 param_1,int param_2)

{
  FUN_147cf2e28();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cf2e28 FUN_147cf2e28 body=65 status=ok
// SIG undefined FUN_147cf2e28(void)

void FUN_147cf2e28(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aa7c280;
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 147cf2e6a FUN_147cf2e6a body=138 status=ok
// SIG undefined FUN_147cf2e6a(void)

code * FUN_147cf2e6a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightmapVirtualTexturePageTable0";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x70000002f6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf2ef4;
}



// FUNCTION 147cf2ef4 FUN_147cf2ef4 body=138 status=ok
// SIG undefined FUN_147cf2ef4(void)

code * FUN_147cf2ef4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"StaticShadowTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x68000002f5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf2f7e;
}



// FUNCTION 147cf2f7e FUN_147cf2f7e body=138 status=ok
// SIG undefined FUN_147cf2f7e(void)

code * FUN_147cf2f7e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"AOMaterialMaskSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000002f4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463fe8b6;
}



// FUNCTION 147cf3008 FUN_147cf3008 body=138 status=ok
// SIG undefined FUN_147cf3008(void)

code * FUN_147cf3008(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightMapSampler_1";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000002f2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf3092;
}



// FUNCTION 147cf3092 FUN_147cf3092 body=138 status=ok
// SIG undefined FUN_147cf3092(void)

code * FUN_147cf3092(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightMapSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000002f1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fcd1cc;
}



// FUNCTION 147cf311c FUN_147cf311c body=138 status=ok
// SIG undefined FUN_147cf311c(void)

code * FUN_147cf311c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VTAOMaterialMaskTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x38000002ef;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf31a6;
}



// FUNCTION 147cf31a6 FUN_147cf31a6 body=138 status=ok
// SIG undefined FUN_147cf31a6(void)

code * FUN_147cf31a6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VTSkyOcclusionTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000002ee;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf3230;
}



// FUNCTION 147cf3230 FUN_147cf3230 body=138 status=ok
// SIG undefined FUN_147cf3230(void)

code * FUN_147cf3230(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VTLightMapTexture_1";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000002ed;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf32ba;
}



// FUNCTION 147cf32ba FUN_147cf32ba body=138 status=ok
// SIG undefined FUN_147cf32ba(void)

code * FUN_147cf32ba(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VTLightMapTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000002ec;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf3344;
}



// FUNCTION 147cf3344 FUN_147cf3344 body=138 status=ok
// SIG undefined FUN_147cf3344(void)

code * FUN_147cf3344(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"StaticShadowTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000002eb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fcd2e0;
}



// FUNCTION 147cf33ce FUN_147cf33ce body=132 status=ok
// SIG undefined FUN_147cf33ce(void)

undefined1 * FUN_147cf33ce(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightMapTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2e8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147cf3452;
}



// FUNCTION 147cf3456 FUN_147cf3456 body=138 status=ok
// SIG undefined FUN_147cf3456(void)

code * FUN_147cf3456(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000453;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146025df6;
}



// FUNCTION 147cf34e4 FUN_147cf34e4 body=138 status=ok
// SIG undefined FUN_147cf34e4(void)

code * FUN_147cf34e4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InkMapTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000002b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf356e;
}



// FUNCTION 147cf356e FUN_147cf356e body=138 status=ok
// SIG undefined FUN_147cf356e(void)

code * FUN_147cf356e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CustomColorTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7800000027;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf35f8;
}



// FUNCTION 147cf35f8 FUN_147cf35f8 body=138 status=ok
// SIG undefined FUN_147cf35f8(void)

code * FUN_147cf35f8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CustomStencilTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000024;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463fea4e;
}



// FUNCTION 147cf3682 FUN_147cf3682 body=138 status=ok
// SIG undefined FUN_147cf3682(void)

code * FUN_147cf3682(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScreenSpaceAOTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000020;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf370c;
}



// FUNCTION 147cf370c FUN_147cf370c body=138 status=ok
// SIG undefined FUN_147cf370c(void)

code * FUN_147cf370c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GBufferVelocityTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x580000001d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf3796;
}



// FUNCTION 147cf3796 FUN_147cf3796 body=138 status=ok
// SIG undefined FUN_147cf3796(void)

code * FUN_147cf3796(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GBufferFTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000001c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456cf8f8;
}



// FUNCTION 147cf3820 FUN_147cf3820 body=138 status=ok
// SIG undefined FUN_147cf3820(void)

code * FUN_147cf3820(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GBufferDTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000001a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456cf86e;
}



// FUNCTION 147cf38aa FUN_147cf38aa body=138 status=ok
// SIG undefined FUN_147cf38aa(void)

code * FUN_147cf38aa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GBufferBTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000018;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf3934;
}



// FUNCTION 147cf3934 FUN_147cf3934 body=138 status=ok
// SIG undefined FUN_147cf3934(void)

code * FUN_147cf3934(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GBufferATexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000017;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf39be;
}



// FUNCTION 147cf39be FUN_147cf39be body=138 status=ok
// SIG undefined FUN_147cf39be(void)

code * FUN_147cf39be(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GbxCompositeDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000014;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf3a48;
}



// FUNCTION 147cf3a48 FUN_147cf3a48 body=138 status=ok
// SIG undefined FUN_147cf3a48(void)

code * FUN_147cf3a48(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GbxForegroundDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000013;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf3ad2;
}



// FUNCTION 147cf3ad2 FUN_147cf3ad2 body=138 status=ok
// SIG undefined FUN_147cf3ad2(void)

code * FUN_147cf3ad2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScenePartialDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000012;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf3b5c;
}



// FUNCTION 147cf3b5c FUN_147cf3b5c body=138 status=ok
// SIG undefined FUN_147cf3b5c(void)

code * FUN_147cf3b5c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000011;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf3be6;
}



// FUNCTION 147cf3be6 FUN_147cf3be6 body=132 status=ok
// SIG undefined FUN_147cf3be6(void)

undefined1 * FUN_147cf3be6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColorTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1456cf86a;
}



// FUNCTION 147cf3c6a FUN_147cf3c6a body=138 status=ok
// SIG undefined FUN_147cf3c6a(void)

code * FUN_147cf3c6a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GBufferDTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc80000004c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf3cf4;
}



// FUNCTION 147cf3cf4 FUN_147cf3cf4 body=138 status=ok
// SIG undefined FUN_147cf3cf4(void)

code * FUN_147cf3cf4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GBufferCTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000004b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf3d7e;
}



// FUNCTION 147cf3d7e FUN_147cf3d7e body=138 status=ok
// SIG undefined FUN_147cf3d7e(void)

code * FUN_147cf3d7e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GBufferBTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb80000004a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463feb5e;
}



// FUNCTION 147cf3e08 FUN_147cf3e08 body=138 status=ok
// SIG undefined FUN_147cf3e08(void)

code * FUN_147cf3e08(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LocalLightTextureB";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa800000048;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf3e92;
}



// FUNCTION 147cf3e92 FUN_147cf3e92 body=138 status=ok
// SIG undefined FUN_147cf3e92(void)

code * FUN_147cf3e92(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LocalLightTextureA";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000047;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf3f1c;
}



// FUNCTION 147cf3f1c FUN_147cf3f1c body=138 status=ok
// SIG undefined FUN_147cf3f1c(void)

code * FUN_147cf3f1c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneDepthAuxTextureArray";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DArray";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9800000046;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf3fa6;
}



// FUNCTION 147cf3fa6 FUN_147cf3fa6 body=138 status=ok
// SIG undefined FUN_147cf3fa6(void)

code * FUN_147cf3fa6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneDepthAuxTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000045;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf4030;
}



// FUNCTION 147cf4030 FUN_147cf4030 body=138 status=ok
// SIG undefined FUN_147cf4030(void)

code * FUN_147cf4030(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GBufferDTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8800000044;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf40ba;
}



// FUNCTION 147cf40ba FUN_147cf40ba body=138 status=ok
// SIG undefined FUN_147cf40ba(void)

code * FUN_147cf40ba(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GBufferCTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000043;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf4144;
}



// FUNCTION 147cf4144 FUN_147cf4144 body=138 status=ok
// SIG undefined FUN_147cf4144(void)

code * FUN_147cf4144(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GBufferBTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7800000042;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf41ce;
}



// FUNCTION 147cf41ce FUN_147cf41ce body=138 status=ok
// SIG undefined FUN_147cf41ce(void)

code * FUN_147cf41ce(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GBufferATexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000041;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf4258;
}



// FUNCTION 147cf4258 FUN_147cf4258 body=138 status=ok
// SIG undefined FUN_147cf4258(void)

code * FUN_147cf4258(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneVelocityTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x680000003f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf42e2;
}



// FUNCTION 147cf42e2 FUN_147cf42e2 body=138 status=ok
// SIG undefined FUN_147cf42e2(void)

code * FUN_147cf42e2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneVelocityTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x600000003e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145b2401c;
}



// FUNCTION 147cf436c FUN_147cf436c body=138 status=ok
// SIG undefined FUN_147cf436c(void)

code * FUN_147cf436c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CustomStencilTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000003c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf43f6;
}



// FUNCTION 147cf43f6 FUN_147cf43f6 body=138 status=ok
// SIG undefined FUN_147cf43f6(void)

code * FUN_147cf43f6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CustomDepthTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x480000003b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf4480;
}



// FUNCTION 147cf4480 FUN_147cf4480 body=138 status=ok
// SIG undefined FUN_147cf4480(void)

code * FUN_147cf4480(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CustomDepthTextureArray";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DArray";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000003a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf450a;
}



// FUNCTION 147cf450a FUN_147cf450a body=138 status=ok
// SIG undefined FUN_147cf450a(void)

code * FUN_147cf450a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CustomDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000039;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145b24130;
}



// FUNCTION 147cf4594 FUN_147cf4594 body=138 status=ok
// SIG undefined FUN_147cf4594(void)

code * FUN_147cf4594(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScenePartialDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000037;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145b240a6;
}



// FUNCTION 147cf461e FUN_147cf461e body=138 status=ok
// SIG undefined FUN_147cf461e(void)

code * FUN_147cf461e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneDepthTextureArray";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DArray";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000035;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463febe6;
}



// FUNCTION 147cf46a8 FUN_147cf46a8 body=138 status=ok
// SIG undefined FUN_147cf46a8(void)

code * FUN_147cf46a8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColorTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000033;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf4732;
}



// FUNCTION 147cf4732 FUN_147cf4732 body=132 status=ok
// SIG undefined FUN_147cf4732(void)

undefined1 * FUN_147cf4732(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColorTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x32;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147cf47b6;
}



// FUNCTION 147cf47ba FUN_147cf47ba body=138 status=ok
// SIG undefined FUN_147cf47ba(void)

code * FUN_147cf47ba(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CustomPrimitiveData";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000004b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 9;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf4844;
}



// FUNCTION 147cf4844 FUN_147cf4844 body=138 status=ok
// SIG undefined FUN_147cf4844(void)

code * FUN_147cf4844(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VisibilityFlags";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2740000004a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf48ce;
}



// FUNCTION 147cf48ce FUN_147cf48ce body=138 status=ok
// SIG undefined FUN_147cf48ce(void)

code * FUN_147cf48ce(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CustomStencilValueAndMask";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x27000000049;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463fec6e;
}



// FUNCTION 147cf4958 FUN_147cf4958 body=138 status=ok
// SIG undefined FUN_147cf4958(void)

code * FUN_147cf4958(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NaniteRayTracingDataOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x26800000047;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf49e2;
}



// FUNCTION 147cf49e2 FUN_147cf49e2 body=138 status=ok
// SIG undefined FUN_147cf49e2(void)

code * FUN_147cf49e2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshPaintTextureDescriptor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x26000000046;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf4a6c;
}



// FUNCTION 147cf4a6c FUN_147cf4a6c body=138 status=ok
// SIG undefined FUN_147cf4a6c(void)

code * FUN_147cf4a6c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaterialDisplacementFadeOutSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x25800000045;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf4af6;
}



// FUNCTION 147cf4af6 FUN_147cf4af6 body=138 status=ok
// SIG undefined FUN_147cf4af6(void)

code * FUN_147cf4af6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PixelProgrammableDistanceSquared";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x25400000044;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e0c312;
}



// FUNCTION 147cf4b80 FUN_147cf4b80 body=138 status=ok
// SIG undefined FUN_147cf4b80(void)

code * FUN_147cf4b80(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceDrawDistanceMinMaxSquared";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x24800000042;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf4c0a;
}



// FUNCTION 147cf4c0a FUN_147cf4c0a body=138 status=ok
// SIG undefined FUN_147cf4c0a(void)

code * FUN_147cf4c0a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PersistentPrimitiveIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x24400000041;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf4c94;
}



// FUNCTION 147cf4c94 FUN_147cf4c94 body=138 status=ok
// SIG undefined FUN_147cf4c94(void)

code * FUN_147cf4c94(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PackedNaniteFlags";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x24000000040;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf4d1e;
}



// FUNCTION 147cf4d1e FUN_147cf4d1e body=138 status=ok
// SIG undefined FUN_147cf4d1e(void)

code * FUN_147cf4d1e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WireframeAndPrimitiveColor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2380000003f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e0c288;
}



// FUNCTION 147cf4da8 FUN_147cf4da8 body=138 status=ok
// SIG undefined FUN_147cf4da8(void)

code * FUN_147cf4da8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstancePayloadDataStride";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x22c0000003d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf4e32;
}



// FUNCTION 147cf4e32 FUN_147cf4e32 body=138 status=ok
// SIG undefined FUN_147cf4e32(void)

code * FUN_147cf4e32(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceLocalBoundsExtent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2200000003c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf4ebc;
}



// FUNCTION 147cf4ebc FUN_147cf4ebc body=138 status=ok
// SIG undefined FUN_147cf4ebc(void)

code * FUN_147cf4ebc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstancePayloadDataOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x21c0000003b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf4f46;
}



// FUNCTION 147cf4f46 FUN_147cf4f46 body=138 status=ok
// SIG undefined FUN_147cf4f46(void)

code * FUN_147cf4f46(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceLocalBoundsCenter";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2100000003a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf4fd0;
}



// FUNCTION 147cf4fd0 FUN_147cf4fd0 body=138 status=ok
// SIG undefined FUN_147cf4fd0(void)

code * FUN_147cf4fd0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ObjectBoundsZ";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20c00000039;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf505a;
}



// FUNCTION 147cf505a FUN_147cf505a body=138 status=ok
// SIG undefined FUN_147cf505a(void)

code * FUN_147cf505a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LocalObjectBoundsMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000038;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf50e4;
}



// FUNCTION 147cf50e4 FUN_147cf50e4 body=138 status=ok
// SIG undefined FUN_147cf50e4(void)

code * FUN_147cf50e4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ObjectBoundsY";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1fc00000037;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf516e;
}



// FUNCTION 147cf516e FUN_147cf516e body=138 status=ok
// SIG undefined FUN_147cf516e(void)

code * FUN_147cf516e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LocalObjectBoundsMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f000000036;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf51f8;
}



// FUNCTION 147cf51f8 FUN_147cf51f8 body=138 status=ok
// SIG undefined FUN_147cf51f8(void)

code * FUN_147cf51f8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NaniteHierarchyOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1ec00000035;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e0c200;
}



// FUNCTION 147cf5282 FUN_147cf5282 body=138 status=ok
// SIG undefined FUN_147cf5282(void)

code * FUN_147cf5282(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NaniteResourceID";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1dc00000033;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf530c;
}



// FUNCTION 147cf530c FUN_147cf530c body=138 status=ok
// SIG undefined FUN_147cf530c(void)

code * FUN_147cf530c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PreSkinnedLocalBoundsMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1d000000032;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf5396;
}



// FUNCTION 147cf5396 FUN_147cf5396 body=138 status=ok
// SIG undefined FUN_147cf5396(void)

code * FUN_147cf5396(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NonUniformScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c000000031;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf5420;
}



// FUNCTION 147cf5420 FUN_147cf5420 body=138 status=ok
// SIG undefined FUN_147cf5420(void)

code * FUN_147cf5420(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightmapDataIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1bc00000030;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf54aa;
}



// FUNCTION 147cf54aa FUN_147cf54aa body=138 status=ok
// SIG undefined FUN_147cf54aa(void)

code * FUN_147cf54aa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ObjectOrientation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b00000002f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf5534;
}



// FUNCTION 147cf5534 FUN_147cf5534 body=138 status=ok
// SIG undefined FUN_147cf5534(void)

code * FUN_147cf5534(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightmapUVIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1ac0000002e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf55be;
}



// FUNCTION 147cf55be FUN_147cf55be body=138 status=ok
// SIG undefined FUN_147cf55be(void)

code * FUN_147cf55be(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ActorWorldPositionLow";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a00000002d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf5648;
}



// FUNCTION 147cf5648 FUN_147cf5648 body=138 status=ok
// SIG undefined FUN_147cf5648(void)

code * FUN_147cf5648(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxMaterialDisplacement";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x19c0000002c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf56d2;
}



// FUNCTION 147cf56d2 FUN_147cf56d2 body=138 status=ok
// SIG undefined FUN_147cf56d2(void)

code * FUN_147cf56d2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ActorWorldPositionHigh";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1900000002b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf575c;
}



// FUNCTION 147cf575c FUN_147cf575c body=138 status=ok
// SIG undefined FUN_147cf575c(void)

code * FUN_147cf575c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MinMaterialDisplacement";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18c0000002a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf57e6;
}



// FUNCTION 147cf57e6 FUN_147cf57e6 body=138 status=ok
// SIG undefined FUN_147cf57e6(void)

code * FUN_147cf57e6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ObjectWorldPositionLow";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000029;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf5870;
}



// FUNCTION 147cf5870 FUN_147cf5870 body=138 status=ok
// SIG undefined FUN_147cf5870(void)

code * FUN_147cf5870(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ObjectWorldPositionHighAndRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x17000000028;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf58fa;
}



// FUNCTION 147cf58fa FUN_147cf58fa body=138 status=ok
// SIG undefined FUN_147cf58fa(void)

code * FUN_147cf58fa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ObjectBoundsX";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x16c00000027;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf5984;
}



// FUNCTION 147cf5984 FUN_147cf5984 body=138 status=ok
// SIG undefined FUN_147cf5984(void)

code * FUN_147cf5984(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InvNonUniformScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x16000000026;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf5a0e;
}



// FUNCTION 147cf5a0e FUN_147cf5a0e body=138 status=ok
// SIG undefined FUN_147cf5a0e(void)

code * FUN_147cf5a0e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WorldToPreviousWorld";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12000000025;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf5a98;
}



// FUNCTION 147cf5a98 FUN_147cf5a98 body=138 status=ok
// SIG undefined FUN_147cf5a98(void)

code * FUN_147cf5a98(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PreviousRelativeWorldToLocal";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe000000024;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf5b22;
}



// FUNCTION 147cf5b22 FUN_147cf5b22 body=138 status=ok
// SIG undefined FUN_147cf5b22(void)

code * FUN_147cf5b22(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PreviousLocalToRelativeWorld";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000023;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf5bac;
}



// FUNCTION 147cf5bac FUN_147cf5bac body=138 status=ok
// SIG undefined FUN_147cf5bac(void)

code * FUN_147cf5bac(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RelativeWorldToLocal";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000022;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf5c36;
}



// FUNCTION 147cf5c36 FUN_147cf5c36 body=138 status=ok
// SIG undefined FUN_147cf5c36(void)

code * FUN_147cf5c36(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LocalToRelativeWorld";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000021;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf5cc0;
}



// FUNCTION 147cf5cc0 FUN_147cf5cc0 body=138 status=ok
// SIG undefined FUN_147cf5cc0(void)

code * FUN_147cf5cc0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PrimitiveComponentId";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c00000020;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf5d4a;
}



// FUNCTION 147cf5d4a FUN_147cf5d4a body=138 status=ok
// SIG undefined FUN_147cf5d4a(void)

code * FUN_147cf5d4a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PositionHigh";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000001f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf5dd4;
}



// FUNCTION 147cf5dd4 FUN_147cf5dd4 body=138 status=ok
// SIG undefined FUN_147cf5dd4(void)

code * FUN_147cf5dd4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SingleCaptureIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000001e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf5e5e;
}



// FUNCTION 147cf5e5e FUN_147cf5e5e body=138 status=ok
// SIG undefined FUN_147cf5e5e(void)

code * FUN_147cf5e5e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumInstanceSceneDataEntries";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000001d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf5ee8;
}



// FUNCTION 147cf5ee8 FUN_147cf5ee8 body=138 status=ok
// SIG undefined FUN_147cf5ee8(void)

code * FUN_147cf5ee8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceSceneDataOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000001c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf5f72;
}



// FUNCTION 147cf5f72 FUN_147cf5f72 body=132 status=ok
// SIG undefined FUN_147cf5f72(void)

undefined1 * FUN_147cf5f72(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Flags";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147cf5ff6;
}



// FUNCTION 147cf5ffa FUN_147cf5ffa body=138 status=ok
// SIG undefined FUN_147cf5ffa(void)

code * FUN_147cf5ffa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GbxCustomColorPrimData";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000015;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 1;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ef1a5c;
}



// FUNCTION 147cf6084 FUN_147cf6084 body=138 status=ok
// SIG undefined FUN_147cf6084(void)

code * FUN_147cf6084(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PackedRealTime";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000010;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463fed7e;
}



// FUNCTION 147cf610e FUN_147cf610e body=138 status=ok
// SIG undefined FUN_147cf610e(void)

code * FUN_147cf610e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NaniteMaterialInteriorInkDisableBitMask";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000000c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf6198;
}



// FUNCTION 147cf6198 FUN_147cf6198 body=132 status=ok
// SIG undefined FUN_147cf6198(void)

undefined1 * FUN_147cf6198(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NaniteMaterialEdgeDetectionDisableBitMask";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147cf621c;
}



// FUNCTION 147cf6220 FUN_147cf6220 body=138 status=ok
// SIG undefined FUN_147cf6220(void)

code * FUN_147cf6220(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GbxGIMesh_GlobalDistanceFieldPageTableTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x195000000522;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf62aa;
}



// FUNCTION 147cf62aa FUN_147cf62aa body=138 status=ok
// SIG undefined FUN_147cf62aa(void)

code * FUN_147cf62aa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TLASPreViewTranslationLow";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x19400000051f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf6334;
}



// FUNCTION 147cf6334 FUN_147cf6334 body=138 status=ok
// SIG undefined FUN_147cf6334(void)

code * FUN_147cf6334(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TLASPreViewTranslationHigh";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x19300000051e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463fee8e;
}



// FUNCTION 147cf63be FUN_147cf63be body=138 status=ok
// SIG undefined FUN_147cf63be(void)

code * FUN_147cf63be(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VTFeedbackBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x191800000519;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 7;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf6448;
}



// FUNCTION 147cf6448 FUN_147cf6448 body=138 status=ok
// SIG undefined FUN_147cf6448(void)

code * FUN_147cf6448(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LandscapePerComponentData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x191000000517;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf64d2;
}



// FUNCTION 147cf64d2 FUN_147cf64d2 body=138 status=ok
// SIG undefined FUN_147cf64d2(void)

code * FUN_147cf64d2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LandscapeIndirection";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x190800000516;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456cc1a6;
}



// FUNCTION 147cf655c FUN_147cf655c body=138 status=ok
// SIG undefined FUN_147cf655c(void)

code * FUN_147cf655c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IESAtlasSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18f800000513;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf65e6;
}



// FUNCTION 147cf65e6 FUN_147cf65e6 body=138 status=ok
// SIG undefined FUN_147cf65e6(void)

code * FUN_147cf65e6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IESAtlasTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DArray<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18f000000512;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf6670;
}



// FUNCTION 147cf6670 FUN_147cf6670 body=138 status=ok
// SIG undefined FUN_147cf6670(void)

code * FUN_147cf6670(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IESAtlasSizeAndInvSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18e000000511;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf66fa;
}



// FUNCTION 147cf66fa FUN_147cf66fa body=138 status=ok
// SIG undefined FUN_147cf66fa(void)

code * FUN_147cf66fa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RectLightAtlasSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18d00000050f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf6784;
}



// FUNCTION 147cf6784 FUN_147cf6784 body=138 status=ok
// SIG undefined FUN_147cf6784(void)

code * FUN_147cf6784(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RectLightAtlasTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18c80000050e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456cc11c;
}



// FUNCTION 147cf680e FUN_147cf680e body=138 status=ok
// SIG undefined FUN_147cf680e(void)

code * FUN_147cf680e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RectLightAtlasSizeAndInvSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18b00000050c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf6898;
}



// FUNCTION 147cf6898 FUN_147cf6898 body=138 status=ok
// SIG undefined FUN_147cf6898(void)

code * FUN_147cf6898(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WaterInfoTextureViewIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18a00000050a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf6922;
}



// FUNCTION 147cf6922 FUN_147cf6922 body=138 status=ok
// SIG undefined FUN_147cf6922(void)

code * FUN_147cf6922(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WaterData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x189800000509;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456cc092;
}



// FUNCTION 147cf69ac FUN_147cf69ac body=138 status=ok
// SIG undefined FUN_147cf69ac(void)

code * FUN_147cf69ac(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SpecularProfileSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x188800000506;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf6a36;
}



// FUNCTION 147cf6a36 FUN_147cf6a36 body=138 status=ok
// SIG undefined FUN_147cf6a36(void)

code * FUN_147cf6a36(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SpecularProfileTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DArray";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x188000000505;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf6ac0;
}



// FUNCTION 147cf6ac0 FUN_147cf6ac0 body=138 status=ok
// SIG undefined FUN_147cf6ac0(void)

code * FUN_147cf6ac0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SSProfilesPreIntegratedSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x187800000503;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf6b4a;
}



// FUNCTION 147cf6b4a FUN_147cf6b4a body=138 status=ok
// SIG undefined FUN_147cf6b4a(void)

code * FUN_147cf6b4a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SSProfilesPreIntegratedTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DArray";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x187000000502;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf6bd4;
}



// FUNCTION 147cf6bd4 FUN_147cf6bd4 body=138 status=ok
// SIG undefined FUN_147cf6bd4(void)

code * FUN_147cf6bd4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SSProfilesTransmissionSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x186800000501;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463fef16;
}



// FUNCTION 147cf6c5e FUN_147cf6c5e body=138 status=ok
// SIG undefined FUN_147cf6c5e(void)

code * FUN_147cf6c5e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SSProfilesTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1858000004ff;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf6ce8;
}



// FUNCTION 147cf6ce8 FUN_147cf6ce8 body=138 status=ok
// SIG undefined FUN_147cf6ce8(void)

code * FUN_147cf6ce8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SimpleVolumeEnvTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1850000004fd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf6d72;
}



// FUNCTION 147cf6d72 FUN_147cf6d72 body=138 status=ok
// SIG undefined FUN_147cf6d72(void)

code * FUN_147cf6d72(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SimpleVolumeEnvTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1848000004fc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf6dfc;
}



// FUNCTION 147cf6dfc FUN_147cf6dfc body=138 status=ok
// SIG undefined FUN_147cf6dfc(void)

code * FUN_147cf6dfc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SimpleVolumeTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1840000004fb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf6e86;
}



// FUNCTION 147cf6e86 FUN_147cf6e86 body=138 status=ok
// SIG undefined FUN_147cf6e86(void)

code * FUN_147cf6e86(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SimpleVolumeTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1838000004fa;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf6f10;
}



// FUNCTION 147cf6f10 FUN_147cf6f10 body=138 status=ok
// SIG undefined FUN_147cf6f10(void)

code * FUN_147cf6f10(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GlintSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1830000004f8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf6f9a;
}



// FUNCTION 147cf6f9a FUN_147cf6f9a body=138 status=ok
// SIG undefined FUN_147cf6f9a(void)

code * FUN_147cf6f9a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GlintTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DArray<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1828000004f7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf7024;
}


