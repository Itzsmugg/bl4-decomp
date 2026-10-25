// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147e1859a FUN_147e1859a body=21 status=ok
// SIG undefined FUN_147e1859a(void)

undefined8 FUN_147e1859a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147e185d2 FUN_147e185d2 body=93 status=ok
// SIG undefined FUN_147e185d2(void)

void FUN_147e185d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab4a150;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab4a0e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e18630 FUN_147e18630 body=93 status=ok
// SIG undefined FUN_147e18630(void)

void FUN_147e18630(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab4a150;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab4a0e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e1868e FUN_147e1868e body=123 status=ok
// SIG undefined FUN_147e1868e(void)

void FUN_147e1868e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ab4a150;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab4a0e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e18714 FUN_147e18714 body=20 status=ok
// SIG undefined FUN_147e18714(void)

undefined8 FUN_147e18714(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 147e18748 FUN_147e18748 body=93 status=ok
// SIG undefined FUN_147e18748(void)

void FUN_147e18748(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab4a230;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab4a1c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e187a6 FUN_147e187a6 body=93 status=ok
// SIG undefined FUN_147e187a6(void)

void FUN_147e187a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab4a230;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab4a1c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e18804 FUN_147e18804 body=123 status=ok
// SIG undefined FUN_147e18804(void)

void FUN_147e18804(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ab4a230;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab4a1c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e18880 FUN_147e18880 body=19 status=ok
// SIG undefined FUN_147e18880(void)

undefined8 FUN_147e18880(longlong param_1,undefined4 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 147e188b8 FUN_147e188b8 body=93 status=ok
// SIG undefined FUN_147e188b8(void)

void FUN_147e188b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab4a310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab4a2a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e18916 FUN_147e18916 body=93 status=ok
// SIG undefined FUN_147e18916(void)

void FUN_147e18916(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab4a310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab4a2a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e18974 FUN_147e18974 body=123 status=ok
// SIG undefined FUN_147e18974(void)

void FUN_147e18974(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ab4a310;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab4a2a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e189fa FUN_147e189fa body=19 status=ok
// SIG undefined FUN_147e189fa(void)

undefined8 FUN_147e189fa(longlong param_1,undefined4 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 147e18a10 FUN_147e18a10 body=39 status=ok
// SIG undefined FUN_147e18a10(void)

void FUN_147e18a10(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x20))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147e18a38 FUN_147e18a38 body=39 status=ok
// SIG undefined FUN_147e18a38(void)

void FUN_147e18a38(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x10))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147e18a60 FUN_147e18a60 body=39 status=ok
// SIG undefined FUN_147e18a60(void)

void FUN_147e18a60(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x18))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147e18ac2 FUN_147e18ac2 body=285 status=ok
// SIG undefined FUN_147e18ac2(void)

void FUN_147e18ac2(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  undefined8 local_38;
  undefined8 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_2c = 0;
  local_24 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar2 = &local_2c;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147e1da8c(local_50,puVar2,local_38);
  FUN_14133b4a8(param_3,local_50);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e18be0 FUN_147e18be0 body=314 status=ok
// SIG undefined FUN_147e18be0(void)

void FUN_147e18be0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  undefined8 local_38;
  undefined8 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_2c = 0;
  local_24 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar1 = &local_2c;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
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
  FUN_145c15146(&local_50,puVar1,local_38);
  if ((*param_3 != local_50) || ((int)param_3[1] != local_48)) {
    *param_3 = local_50;
    *(int *)(param_3 + 1) = local_48;
    param_3[2] = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e18d1c FUN_147e18d1c body=285 status=ok
// SIG undefined FUN_147e18d1c(void)

void FUN_147e18d1c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  undefined8 local_38;
  undefined8 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_2c = 0;
  local_24 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar2 = &local_2c;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147e1da8c(local_50,puVar2,local_38);
  FUN_14133b4a8(param_3,local_50);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e18e3a FUN_147e18e3a body=139 status=ok
// SIG undefined FUN_147e18e3a(void)

void FUN_147e18e3a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147e1de68(&local_28);
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



// FUNCTION 147e18ecc FUN_147e18ecc body=380 status=ok
// SIG undefined FUN_147e18ecc(void)

void FUN_147e18ecc(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_4c;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48[2] = 0;
  local_48[3] = 0;
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
  FUN_147e1e464(&local_60,plVar1,local_4c != 0);
  if (&local_60 == param_3) {
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_60;
    local_60 = 0;
    *(undefined4 *)(param_3 + 1) = local_58;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_54;
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1904a FUN_147e1904a body=117 status=ok
// SIG undefined FUN_147e1904a(void)

void FUN_147e1904a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147e1dca8(&local_28);
  FUN_1410e5bda(param_3,&local_28);
  FUN_1447a1747(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e190c0 FUN_147e190c0 body=406 status=ok
// SIG undefined FUN_147e190c0(void)

void FUN_147e190c0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_34 = 0;
  local_2c = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_1446e6c6a();
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
  uVar2 = local_60;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_58;
  puVar4 = &local_34;
  if (puVar1 != (undefined8 *)0x0) {
    puVar4 = puVar1;
  }
  uVar3 = FUN_14477b664(uStack_50);
  local_70 = FUN_14477b664(uVar3);
  local_68 = local_48;
  FUN_147e1daf8(puVar4,&local_78,uVar2);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e19258 FUN_147e19258 body=379 status=ok
// SIG undefined FUN_147e19258(void)

void FUN_147e19258(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_2c = 0;
  local_24 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_48 = 0;
  local_40 = 0x4000;
  local_38 = 0;
  FUN_1446ef920();
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
  puVar2 = &local_2c;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_48;
  local_60 = local_40;
  local_58 = 0;
  FUN_147e1db8a(puVar2,&local_68,local_50);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e193de FUN_147e193de body=309 status=ok
// SIG undefined FUN_147e193de(void)

void FUN_147e193de(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48 [6];
  
  local_48[5] = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1403de7ba(&local_68,local_48);
  uVar1 = FUN_147e1ef78(local_48[4],&local_68);
  *param_3 = uVar1;
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[5] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e19528 FUN_147e19528 body=180 status=ok
// SIG undefined FUN_147e19528(void)

void FUN_147e19528(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147e1f084(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e195f6 FUN_147e195f6 body=301 status=ok
// SIG undefined FUN_147e195f6(void)

void FUN_147e195f6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  local_38 = 0x4000;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_58 = 0;
  local_50 = 0x4000;
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar2 = &local_40;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147e22dda(puVar2,puVar3);
  *param_3 = uVar1;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1972a FUN_147e1972a body=1154 status=ok
// SIG undefined FUN_147e1972a(void)

void FUN_147e1972a(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined1 local_e8;
  longlong *local_e0;
  undefined4 *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  uint local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong lStack_78;
  longlong local_70;
  int local_68;
  undefined8 local_64;
  uint local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_40 = 0;
  local_38 = 0x4000;
  local_30 = 0;
  FUN_1446ef920();
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
  FUN_1446f4b16();
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
  local_64 = 0x4461000000000000;
  local_5c = local_5c & 0xffffff00;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  local_68 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  iVar1 = local_68;
  local_70 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  plVar2 = &local_70;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_88 = 0xffffffffffffffff;
  uStack_80 = 0;
  lStack_78 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = (undefined4)local_88;
  uStack_a4 = local_88._4_4_;
  uStack_a0 = (undefined4)uStack_80;
  uStack_9c = uStack_80._4_4_;
  local_98 = lStack_78;
  if ((lStack_78 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_f0 = &local_b8;
  local_b0 = local_5c;
  local_b8 = local_64;
  local_d0 = local_40;
  local_c8 = local_38;
  local_c0 = 0;
  local_e8 = iVar1 != 0;
  local_d8 = &local_a8;
  local_f8 = local_58;
  local_e0 = plVar2;
  FUN_147e228d4(local_28,&local_d0,local_48,local_50);
  if ((DAT_14c950c29 == 1) && (*plVar2 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e19bbc FUN_147e19bbc body=148 status=ok
// SIG undefined FUN_147e19bbc(void)

void FUN_147e19bbc(undefined8 param_1,longlong param_2)

{
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
  FUN_147e22a52(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e19c52 FUN_147e19c52 body=148 status=ok
// SIG undefined FUN_147e19c52(void)

void FUN_147e19c52(undefined8 param_1,longlong param_2)

{
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
  FUN_147e22b14(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e19ce8 FUN_147e19ce8 body=201 status=ok
// SIG undefined FUN_147e19ce8(void)

void FUN_147e19ce8(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147e22c7c(&local_38,local_20);
  if ((*param_3 != local_38) || ((int)param_3[1] != local_30)) {
    *param_3 = local_38;
    *(int *)(param_3 + 1) = local_30;
    param_3[2] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e19db2 FUN_147e19db2 body=201 status=ok
// SIG undefined FUN_147e19db2(void)

void FUN_147e19db2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147e22c7c(&local_38,local_20);
  if ((*param_3 != local_38) || ((int)param_3[1] != local_30)) {
    *param_3 = local_38;
    *(int *)(param_3 + 1) = local_30;
    param_3[2] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e19e7c FUN_147e19e7c body=156 status=ok
// SIG undefined FUN_147e19e7c(void)

void FUN_147e19e7c(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_147e22c5e(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e19f1a FUN_147e19f1a body=156 status=ok
// SIG undefined FUN_147e19f1a(void)

void FUN_147e19f1a(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_147e22bd6(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e19fb8 FUN_147e19fb8 body=156 status=ok
// SIG undefined FUN_147e19fb8(void)

void FUN_147e19fb8(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_145758774(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1a05c FUN_147e1a05c body=264 status=ok
// SIG undefined FUN_147e1a05c(void)

void FUN_147e1a05c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
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
  local_38 = 0;
  local_30 = 0x4000;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar2 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147e22df2(local_20,puVar2);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1a16c FUN_147e1a16c body=362 status=ok
// SIG undefined FUN_147e1a16c(void)

void FUN_147e1a16c(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  undefined8 local_40;
  undefined4 local_38;
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
  local_40 = 0;
  local_38 = 0x4000;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
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
  puVar3 = &local_40;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  puVar4 = &local_41;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_147e22df2(local_28,puVar3);
  *puVar4 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1a2e6 FUN_147e1a2e6 body=37 status=ok
// SIG undefined FUN_147e1a2e6(void)

void FUN_147e1a2e6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147e22fdc();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147e1a310 FUN_147e1a310 body=37 status=ok
// SIG undefined FUN_147e1a310(void)

void FUN_147e1a310(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_140d0050e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147e1a33a FUN_147e1a33a body=37 status=ok
// SIG undefined FUN_147e1a33a(void)

void FUN_147e1a33a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1437ea93c();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147e1a3aa FUN_147e1a3aa body=75 status=ok
// SIG undefined FUN_147e1a3aa(void)

void FUN_147e1a3aa(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1417ff916(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1a3f6 FUN_147e1a3f6 body=45 status=ok
// SIG undefined FUN_147e1a3f6(void)

longlong FUN_147e1a3f6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_14006e79a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e1a424 FUN_147e1a424 body=26 status=ok
// SIG undefined FUN_147e1a424(void)

undefined8 * FUN_147e1a424(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = &DAT_14c846480;
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_2;
}



// FUNCTION 147e1a50a FUN_147e1a50a body=59 status=ok
// SIG undefined FUN_147e1a50a(void)

undefined8 FUN_147e1a50a(longlong *param_1)

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



// FUNCTION 147e1a556 FUN_147e1a556 body=38 status=ok
// SIG undefined FUN_147e1a556(void)

void FUN_147e1a556(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x108) == '\x01') {
    FUN_1403d7d90(param_2);
    *(undefined1 *)(param_2 + 0x108) = 0;
  }
  return;
}



// FUNCTION 147e1a5ea FUN_147e1a5ea body=63 status=ok
// SIG undefined FUN_147e1a5ea(void)

undefined1 FUN_147e1a5ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e1a790(param_2,param_3);
    param_3 = param_3 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return 1;
}



// FUNCTION 147e1a652 FUN_147e1a652 body=59 status=ok
// SIG undefined FUN_147e1a652(void)

undefined8 FUN_147e1a652(longlong *param_1)

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



// FUNCTION 147e1a69e FUN_147e1a69e body=38 status=ok
// SIG undefined FUN_147e1a69e(void)

void FUN_147e1a69e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_140753ab6(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 147e1a704 FUN_147e1a704 body=57 status=ok
// SIG undefined FUN_147e1a704(void)

void FUN_147e1a704(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1a370 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1a370 = FUN_140002ddd(FUN_1417fe1d2,uVar1,L"GbxActorDef");
  }
  return;
}



// FUNCTION 147e1a790 FUN_147e1a790 body=109 status=ok
// SIG undefined FUN_147e1a790(void)

longlong FUN_147e1a790(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x1f);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1f) = uVar1;
  FUN_1401f3db8(param_1 + 0x28,param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x47);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x47) = uVar1;
  FUN_1403de7ba(param_1 + 0x50,param_2 + 0x50);
  FUN_1403de7ba(param_1 + 0x70,param_2 + 0x70);
  return param_1;
}



// FUNCTION 147e1a852 FUN_147e1a852 body=97 status=ok
// SIG undefined FUN_147e1a852(void)

undefined8 FUN_147e1a852(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_4 != 0) {
    lVar5 = 0x10;
    do {
      uVar2 = *(undefined8 *)(param_3 + -8 + lVar5);
      lVar3 = *(longlong *)(param_3 + lVar5);
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
        UNLOCK();
      }
      plVar4 = *(longlong **)(param_2 + lVar5);
      *(undefined8 *)(param_2 + -8 + lVar5) = uVar2;
      *(longlong *)(param_2 + lVar5) = lVar3;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
      lVar5 = lVar5 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147e1a8dc FUN_147e1a8dc body=59 status=ok
// SIG undefined FUN_147e1a8dc(void)

undefined8 FUN_147e1a8dc(longlong *param_1)

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



// FUNCTION 147e1a922 FUN_147e1a922 body=55 status=ok
// SIG undefined FUN_147e1a922(void)

void FUN_147e1a922(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14ab50b00;
    plVar2 = (longlong *)param_2[2];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 147e1a9a8 FUN_147e1a9a8 body=64 status=ok
// SIG undefined FUN_147e1a9a8(void)

undefined8 * FUN_147e1a9a8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ab50b00;
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



// FUNCTION 147e1a9e8 FUN_147e1a9e8 body=55 status=ok
// SIG undefined FUN_147e1a9e8(void)

void FUN_147e1a9e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1a388 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1a388 = FUN_140002ddd(FUN_146417683,uVar1,L"GbxActorInstanceData");
  }
  return;
}



// FUNCTION 147e1ab16 FUN_147e1ab16 body=59 status=ok
// SIG undefined FUN_147e1ab16(void)

undefined8 FUN_147e1ab16(longlong *param_1)

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



// FUNCTION 147e1abfa FUN_147e1abfa body=54 status=ok
// SIG undefined FUN_147e1abfa(void)

undefined1 FUN_147e1abfa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e1ad12(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 147e1ac58 FUN_147e1ac58 body=59 status=ok
// SIG undefined FUN_147e1ac58(void)

undefined8 FUN_147e1ac58(longlong *param_1)

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



// FUNCTION 147e1ac9e FUN_147e1ac9e body=37 status=ok
// SIG undefined FUN_147e1ac9e(void)

void FUN_147e1ac9e(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[5] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 147e1ad12 FUN_147e1ad12 body=76 status=ok
// SIG undefined FUN_147e1ad12(void)

longlong FUN_147e1ad12(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147e1ad5e();
  lVar1 = *(longlong *)(param_2 + 0x10);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x10);
    }
  }
  *(longlong *)(param_1 + 0x10) = lVar1;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  return param_1;
}



// FUNCTION 147e1ad5e FUN_147e1ad5e body=79 status=ok
// SIG undefined FUN_147e1ad5e(void)

undefined8 * FUN_147e1ad5e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147e1adae(param_1,iVar1);
      FUN_147e1ae10(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147e1adae FUN_147e1adae body=98 status=ok
// SIG undefined FUN_147e1adae(void)

void FUN_147e1adae(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147e1ae10 FUN_147e1ae10 body=82 status=ok
// SIG undefined FUN_147e1ae10(void)

void FUN_147e1ae10(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 147e1aed8 FUN_147e1aed8 body=156 status=ok
// SIG undefined FUN_147e1aed8(void)

void FUN_147e1aed8(undefined8 param_1,longlong param_2)

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
  FUN_147e24086(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1af92 FUN_147e1af92 body=319 status=ok
// SIG undefined FUN_147e1af92(void)

void FUN_147e1af92(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
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
  FUN_147e24058(param_1,&local_38,local_21,local_28 != 0);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1b0d2 FUN_147e1b0d2 body=158 status=ok
// SIG undefined FUN_147e1b0d2(void)

void FUN_147e1b0d2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
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
  uVar1 = FUN_147e23da6(param_1,local_21);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1b172 FUN_147e1b172 body=158 status=ok
// SIG undefined FUN_147e1b172(void)

void FUN_147e1b172(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
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
  uVar1 = FUN_147e23cf0(param_1,local_21);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1b212 FUN_147e1b212 body=37 status=ok
// SIG undefined FUN_147e1b212(void)

void FUN_147e1b212(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147e23c54();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147e1b25a FUN_147e1b25a body=158 status=ok
// SIG undefined FUN_147e1b25a(void)

void FUN_147e1b25a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
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
  uVar1 = FUN_147e23c40(param_1,local_21);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1b2fe FUN_147e1b2fe body=37 status=ok
// SIG undefined FUN_147e1b2fe(void)

void FUN_147e1b2fe(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147e227a0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147e1b328 FUN_147e1b328 body=37 status=ok
// SIG undefined FUN_147e1b328(void)

void FUN_147e1b328(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147e22746();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147e1b358 FUN_147e1b358 body=274 status=ok
// SIG undefined FUN_147e1b358(void)

void FUN_147e1b358(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [44];
  int local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0x4000;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147e23e76(param_1,puVar2,local_3c != 0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1b46c FUN_147e1b46c body=464 status=ok
// SIG undefined FUN_147e1b46c(void)

void FUN_147e1b46c(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong lStack_48;
  undefined1 local_39;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0;
  local_30 = 0x4000;
  local_28 = 0;
  FUN_1446ef920();
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
  local_58 = 0xffffffffffffffff;
  uStack_50 = 0;
  lStack_48 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_68 = lStack_48;
  if ((lStack_48 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar2 = &local_39;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  local_90 = local_38;
  local_88 = local_30;
  local_80 = 0;
  FUN_147e23fa6(param_1,&local_90,puVar2,&local_78);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1b662 FUN_147e1b662 body=319 status=ok
// SIG undefined FUN_147e1b662(void)

void FUN_147e1b662(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
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
  FUN_1412b3ab6(param_1,&local_38,local_21,local_28 != 0);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1b7a2 FUN_147e1b7a2 body=158 status=ok
// SIG undefined FUN_147e1b7a2(void)

void FUN_147e1b7a2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
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
  uVar1 = FUN_145f9d8de(param_1,local_21);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1b842 FUN_147e1b842 body=158 status=ok
// SIG undefined FUN_147e1b842(void)

void FUN_147e1b842(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
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
  uVar1 = FUN_147e23dba(param_1,local_21);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1b8e2 FUN_147e1b8e2 body=158 status=ok
// SIG undefined FUN_147e1b8e2(void)

void FUN_147e1b8e2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
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
  uVar1 = FUN_147e23d04(param_1,local_21);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1b982 FUN_147e1b982 body=37 status=ok
// SIG undefined FUN_147e1b982(void)

void FUN_147e1b982(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147e23c68();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147e1b9a8 FUN_147e1b9a8 body=139 status=ok
// SIG undefined FUN_147e1b9a8(void)

void FUN_147e1b9a8(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147e246c6(&local_28);
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



// FUNCTION 147e1ba3a FUN_147e1ba3a body=158 status=ok
// SIG undefined FUN_147e1ba3a(void)

void FUN_147e1ba3a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
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
  uVar1 = FUN_1401c00e8(param_1,local_21);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1bade FUN_147e1bade body=37 status=ok
// SIG undefined FUN_147e1bade(void)

void FUN_147e1bade(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147e23bc0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147e1bb08 FUN_147e1bb08 body=37 status=ok
// SIG undefined FUN_147e1bb08(void)

void FUN_147e1bb08(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1437ea946();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147e1bb4a FUN_147e1bb4a body=264 status=ok
// SIG undefined FUN_147e1bb4a(void)

void FUN_147e1bb4a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [44];
  int local_2c;
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
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1410d99c0(param_1,puVar2,local_2c != 0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1bc5a FUN_147e1bc5a body=373 status=ok
// SIG undefined FUN_147e1bc5a(void)

void FUN_147e1bc5a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [44];
  int local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar3 = &local_48;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1417ffa7c(param_1,puVar2,puVar3,local_4c != 0);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1bdd4 FUN_147e1bdd4 body=158 status=ok
// SIG undefined FUN_147e1bdd4(void)

void FUN_147e1bdd4(undefined8 param_1,longlong param_2)

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
  FUN_140af95c6(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1be7a FUN_147e1be7a body=274 status=ok
// SIG undefined FUN_147e1be7a(void)

void FUN_147e1be7a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [44];
  int local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0x4000;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147e23e88(param_1,puVar2,local_3c != 0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1bf92 FUN_147e1bf92 body=158 status=ok
// SIG undefined FUN_147e1bf92(void)

void FUN_147e1bf92(undefined8 param_1,longlong param_2)

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
  FUN_1437ea9f8(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1c04c FUN_147e1c04c body=75 status=ok
// SIG undefined FUN_147e1c04c(void)

void FUN_147e1c04c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1417ffd3c(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1c188 FUN_147e1c188 body=45 status=ok
// SIG undefined FUN_147e1c188(void)

longlong FUN_147e1c188(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1408102c0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e1c1bc FUN_147e1c1bc body=48 status=ok
// SIG undefined FUN_147e1c1bc(void)

longlong FUN_147e1c1bc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_1408102c0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e1c1f4 FUN_147e1c1f4 body=48 status=ok
// SIG undefined FUN_147e1c1f4(void)

longlong FUN_147e1c1f4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_1408102c0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e1c22c FUN_147e1c22c body=48 status=ok
// SIG undefined FUN_147e1c22c(void)

longlong FUN_147e1c22c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_1408102c0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e1c290 FUN_147e1c290 body=104 status=ok
// SIG undefined FUN_147e1c290(void)

undefined1 FUN_147e1c290(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined4 *)(param_2 + 8 + lVar3) = *(undefined4 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147e1c324 FUN_147e1c324 body=59 status=ok
// SIG undefined FUN_147e1c324(void)

undefined8 FUN_147e1c324(longlong *param_1)

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



// FUNCTION 147e1c3fc FUN_147e1c3fc body=105 status=ok
// SIG undefined FUN_147e1c3fc(void)

undefined1 FUN_147e1c3fc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined4 *)(param_2 + lVar3) = *(undefined4 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 8 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147e1c48e FUN_147e1c48e body=59 status=ok
// SIG undefined FUN_147e1c48e(void)

undefined8 FUN_147e1c48e(longlong *param_1)

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



// FUNCTION 147e1c530 FUN_147e1c530 body=53 status=ok
// SIG undefined FUN_147e1c530(void)

void FUN_147e1c530(undefined8 param_1,undefined8 *param_2)

{
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14044066a(param_2,10,1);
  param_2[7] = 0;
  return;
}



// FUNCTION 147e1c566 FUN_147e1c566 body=35 status=ok
// SIG undefined FUN_147e1c566(void)

void FUN_147e1c566(undefined8 param_1,longlong param_2)

{
  FUN_14044066a(param_2,10,1);
  *(undefined8 *)(param_2 + 0x38) = 0;
  return;
}



// FUNCTION 147e1c5a8 FUN_147e1c5a8 body=91 status=ok
// SIG undefined FUN_147e1c5a8(void)

undefined1 FUN_147e1c5a8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144983130(param_2,param_3);
    lVar1 = *(longlong *)(param_3 + 0x38);
    if (DAT_14c950c29 == '\x01') {
      if (lVar1 == 0) {
        lVar1 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar1 = *(longlong *)(param_3 + 0x38);
      }
    }
    param_3 = param_3 + 0x40;
    *(longlong *)(param_2 + 0x38) = lVar1;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 147e1c62c FUN_147e1c62c body=59 status=ok
// SIG undefined FUN_147e1c62c(void)

undefined8 FUN_147e1c62c(longlong *param_1)

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



// FUNCTION 147e1c672 FUN_147e1c672 body=32 status=ok
// SIG undefined FUN_147e1c672(void)

void FUN_147e1c672(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_144a2da94(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147e1c718 FUN_147e1c718 body=54 status=ok
// SIG undefined FUN_147e1c718(void)

undefined1 FUN_147e1c718(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e1c816(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 147e1c776 FUN_147e1c776 body=59 status=ok
// SIG undefined FUN_147e1c776(void)

undefined8 FUN_147e1c776(longlong *param_1)

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



// FUNCTION 147e1c816 FUN_147e1c816 body=90 status=ok
// SIG undefined FUN_147e1c816(void)

undefined1 * FUN_147e1c816(undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  lVar1 = *(longlong *)(param_2 + 8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 8);
    }
  }
  *(longlong *)(param_1 + 8) = lVar1;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  FUN_140862116(param_1 + 0x18,param_2 + 0x18);
  param_1[0x30] = param_2[0x30];
  return param_1;
}



// FUNCTION 147e1c882 FUN_147e1c882 body=56 status=ok
// SIG undefined FUN_147e1c882(void)

void FUN_147e1c882(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000147e1c8af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147e1c8d0 FUN_147e1c8d0 body=94 status=ok
// SIG undefined FUN_147e1c8d0(void)

undefined1 FUN_147e1c8d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + lVar1) = *(undefined1 *)(param_3 + lVar1);
      FUN_1401f3db8();
      FUN_1458df988(param_2 + lVar1 + 0x20,param_3 + lVar1 + 0x20);
      lVar1 = lVar1 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147e1c956 FUN_147e1c956 body=59 status=ok
// SIG undefined FUN_147e1c956(void)

undefined8 FUN_147e1c956(longlong *param_1)

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



// FUNCTION 147e1c99c FUN_147e1c99c body=64 status=ok
// SIG undefined FUN_147e1c99c(void)

void FUN_147e1c99c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x38) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x10);
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
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 147e1ca76 FUN_147e1ca76 body=62 status=ok
// SIG undefined FUN_147e1ca76(void)

undefined1 FUN_147e1ca76(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_141289ada(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147e1cadc FUN_147e1cadc body=59 status=ok
// SIG undefined FUN_147e1cadc(void)

undefined8 FUN_147e1cadc(longlong *param_1)

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



// FUNCTION 147e1cb22 FUN_147e1cb22 body=43 status=ok
// SIG undefined FUN_147e1cb22(void)

void FUN_147e1cb22(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 147e1cba0 FUN_147e1cba0 body=57 status=ok
// SIG undefined FUN_147e1cba0(void)

undefined8 * FUN_147e1cba0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 147e1cbda FUN_147e1cbda body=55 status=ok
// SIG undefined FUN_147e1cbda(void)

void FUN_147e1cbda(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1a9d8 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1a9d8 = FUN_140002ddd(FUN_146419307,uVar1,L"SpawnerStyleDef");
  }
  return;
}



// FUNCTION 147e1cc12 FUN_147e1cc12 body=32 status=ok
// SIG undefined FUN_147e1cc12(void)

undefined8 FUN_147e1cc12(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Invalid");
  return param_2;
}



// FUNCTION 147e1cc32 FUN_147e1cc32 body=51 status=ok
// SIG undefined FUN_147e1cc32(void)

undefined8 FUN_147e1cc32(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
  return 0;
}



// FUNCTION 147e1cc72 FUN_147e1cc72 body=104 status=ok
// SIG undefined FUN_147e1cc72(void)

undefined8 FUN_147e1cc72(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_147e24b7e(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1ccdc FUN_147e1ccdc body=28 status=ok
// SIG undefined FUN_147e1ccdc(void)

undefined8 FUN_147e1ccdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 147e1cd36 FUN_147e1cd36 body=63 status=ok
// SIG undefined FUN_147e1cd36(void)

undefined1 FUN_147e1cd36(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e1cfd2(param_2,param_3);
    param_3 = param_3 + 0x160;
    param_2 = param_2 + 0x160;
  }
  return 1;
}



// FUNCTION 147e1cd9e FUN_147e1cd9e body=59 status=ok
// SIG undefined FUN_147e1cd9e(void)

undefined8 FUN_147e1cd9e(longlong *param_1)

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



// FUNCTION 147e1cdea FUN_147e1cdea body=38 status=ok
// SIG undefined FUN_147e1cdea(void)

void FUN_147e1cdea(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x160) == '\x01') {
    FUN_140ced502(param_2);
    *(undefined1 *)(param_2 + 0x160) = 0;
  }
  return;
}



// FUNCTION 147e1ce62 FUN_147e1ce62 body=336 status=ok
// SIG undefined FUN_147e1ce62(void)

undefined8 * FUN_147e1ce62(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14ab5d380;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 7) = 4;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined1 *)(param_1 + 8) = 2;
  *(byte *)(param_1 + 9) = (byte)~DAT_14c9a8754 >> 4 & 2;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xe) = 4;
  *(undefined4 *)(param_1 + 0xb) = 1;
  *(undefined1 *)(param_1 + 0xf) = 2;
  *(byte *)(param_1 + 0x10) = (byte)~DAT_14c9a8754 >> 4 & 2;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x16) = 4;
  *(undefined4 *)(param_1 + 0x13) = 1;
  *(undefined1 *)(param_1 + 0x17) = 2;
  *(byte *)(param_1 + 0x18) = (byte)~DAT_14c9a8754 >> 4 & 2;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  *(undefined2 *)(param_1 + 0x1e) = 4;
  *(undefined4 *)(param_1 + 0x1b) = 0x45fa0000;
  *(undefined1 *)(param_1 + 0x1f) = 3;
  *(char *)(param_1 + 0x20) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined2 *)(param_1 + 0x27) = 4;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x28) = 3;
  *(char *)(param_1 + 0x29) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x2a) = 1;
  FUN_1446f470e((longlong)param_1 + 0x154,L"Default",1);
  return param_1;
}



// FUNCTION 147e1cfb2 FUN_147e1cfb2 body=32 status=ok
// SIG undefined FUN_147e1cfb2(void)

undefined8 FUN_147e1cfb2(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Bunch");
  return param_2;
}



// FUNCTION 147e1cfd2 FUN_147e1cfd2 body=179 status=ok
// SIG undefined FUN_147e1cfd2(void)

longlong FUN_147e1cfd2(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_144983130(param_1 + 0x18,param_2 + 0x18);
  FUN_144983130(param_1 + 0x50,param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 0x88);
  FUN_144983130(param_1 + 0x90,param_2 + 0x90);
  *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_2 + 200);
  FUN_144983130(param_1 + 0xd0,param_2 + 0xd0);
  FUN_14053cb00(param_1 + 0x108,param_2 + 0x108);
  FUN_144983130(param_1 + 0x118,param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
  return param_1;
}



// FUNCTION 147e1d0fc FUN_147e1d0fc body=59 status=ok
// SIG undefined FUN_147e1d0fc(void)

undefined8 FUN_147e1d0fc(longlong *param_1)

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



// FUNCTION 147e1d142 FUN_147e1d142 body=43 status=ok
// SIG undefined FUN_147e1d142(void)

void FUN_147e1d142(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 147e1d1bc FUN_147e1d1bc body=32 status=ok
// SIG undefined FUN_147e1d1bc(void)

undefined8 FUN_147e1d1bc(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Single");
  return param_2;
}



// FUNCTION 147e1d210 FUN_147e1d210 body=63 status=ok
// SIG undefined FUN_147e1d210(void)

undefined1 FUN_147e1d210(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e1d54c(param_2,param_3);
    param_3 = param_3 + 0x210;
    param_2 = param_2 + 0x210;
  }
  return 1;
}



// FUNCTION 147e1d278 FUN_147e1d278 body=59 status=ok
// SIG undefined FUN_147e1d278(void)

undefined8 FUN_147e1d278(longlong *param_1)

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



// FUNCTION 147e1d2c4 FUN_147e1d2c4 body=38 status=ok
// SIG undefined FUN_147e1d2c4(void)

void FUN_147e1d2c4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x210) == '\x01') {
    FUN_140db8b6a(param_2);
    *(undefined1 *)(param_2 + 0x210) = 0;
  }
  return;
}



// FUNCTION 147e1d33c FUN_147e1d33c body=495 status=ok
// SIG undefined FUN_147e1d33c(void)

undefined8 * FUN_147e1d33c(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14ab5d3e0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 8) = 4;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined1 *)(param_1 + 9) = 2;
  *(byte *)(param_1 + 10) = (byte)~DAT_14c9a8754 >> 4 & 2;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xf) = 4;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined1 *)(param_1 + 0x10) = 2;
  *(byte *)(param_1 + 0x11) = (byte)~DAT_14c9a8754 >> 4 & 2;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x16) = 4;
  *(undefined4 *)(param_1 + 0x13) = 1;
  *(undefined1 *)(param_1 + 0x17) = 2;
  *(byte *)(param_1 + 0x18) = (byte)~DAT_14c9a8754 >> 4 & 2;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  *(undefined2 *)(param_1 + 0x1e) = 4;
  *(undefined4 *)(param_1 + 0x1b) = 1;
  *(undefined1 *)(param_1 + 0x1f) = 2;
  *(byte *)(param_1 + 0x20) = (byte)~DAT_14c9a8754 >> 4 & 2;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  *(undefined2 *)(param_1 + 0x26) = 4;
  *(undefined4 *)(param_1 + 0x23) = 0x45fa0000;
  *(undefined1 *)(param_1 + 0x27) = 3;
  *(char *)(param_1 + 0x28) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined2 *)(param_1 + 0x2f) = 4;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x30) = 3;
  *(char *)(param_1 + 0x31) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x32] = 0;
  *(undefined2 *)(param_1 + 0x36) = 4;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined1 *)(param_1 + 0x37) = 3;
  *(char *)(param_1 + 0x38) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x39] = 0;
  *(undefined2 *)(param_1 + 0x3d) = 4;
  *(undefined4 *)(param_1 + 0x3a) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x3e) = 3;
  *(char *)(param_1 + 0x3f) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x40) = 1;
  FUN_1446f470e((longlong)param_1 + 0x204,L"Default",1);
  return param_1;
}



// FUNCTION 147e1d52c FUN_147e1d52c body=32 status=ok
// SIG undefined FUN_147e1d52c(void)

undefined8 FUN_147e1d52c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Waves");
  return param_2;
}



// FUNCTION 147e1d54c FUN_147e1d54c body=236 status=ok
// SIG undefined FUN_147e1d54c(void)

longlong FUN_147e1d54c(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  FUN_144983130(param_1 + 0x20,param_2 + 0x20);
  FUN_144983130(param_1 + 0x58,param_2 + 0x58);
  FUN_144983130(param_1 + 0x90,param_2 + 0x90);
  *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_2 + 200);
  FUN_144983130(param_1 + 0xd0,param_2 + 0xd0);
  *(undefined1 *)(param_1 + 0x108) = *(undefined1 *)(param_2 + 0x108);
  FUN_144983130(param_1 + 0x110,param_2 + 0x110);
  FUN_14053cb00(param_1 + 0x148,param_2 + 0x148);
  FUN_144983130(param_1 + 0x158,param_2 + 0x158);
  FUN_144983130(param_1 + 400,param_2 + 400);
  FUN_144983130(param_1 + 0x1c8,param_2 + 0x1c8);
  *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_2 + 0x200);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
  return param_1;
}



// FUNCTION 147e1d672 FUN_147e1d672 body=37 status=ok
// SIG undefined FUN_147e1d672(void)

void FUN_147e1d672(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147e26a5e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147e1d6b2 FUN_147e1d6b2 body=158 status=ok
// SIG undefined FUN_147e1d6b2(void)

void FUN_147e1d6b2(undefined8 param_1,longlong param_2)

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
  FUN_147e26a74(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1d764 FUN_147e1d764 body=37 status=ok
// SIG undefined FUN_147e1d764(void)

void FUN_147e1d764(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1437ed382();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147e1d7a0 FUN_147e1d7a0 body=156 status=ok
// SIG undefined FUN_147e1d7a0(void)

void FUN_147e1d7a0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147e26dc8(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1d846 FUN_147e1d846 body=37 status=ok
// SIG undefined FUN_147e1d846(void)

void FUN_147e1d846(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147e26e34();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147e1d8d2 FUN_147e1d8d2 body=176 status=ok
// SIG undefined FUN_147e1d8d2(void)

undefined8 FUN_147e1d8d2(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0xd8);
  if (plVar4 == (longlong *)0x0) {
    lVar3 = *(longlong *)(param_1 + 0x60);
    if (lVar3 == 0) {
      uVar2 = FUN_140927942();
      lVar3 = FUN_14477b664(uVar2);
      *(longlong *)(param_1 + 0x60) = lVar3;
    }
    plVar4 = *(longlong **)(param_1 + 0x68);
    if (plVar4 == (longlong *)0x0) {
      if ((lVar3 != 0) && (*(longlong *)(param_1 + 0x58) != 0)) {
        plVar4 = *(longlong **)(lVar3 + 0xb8);
        if ((plVar4 != (longlong *)0x0) &&
           (cVar1 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar1 != '\0')) {
          uVar2 = (**(code **)(*plVar4 + 0x110))(plVar4);
          plVar4 = (longlong *)FUN_144aff482(uVar2,(longlong *)(param_1 + 0x58));
          *(longlong **)(param_1 + 0x68) = plVar4;
          if (plVar4 == (longlong *)0x0) {
            return 0;
          }
          goto LAB_147e1d8e8;
        }
        *(undefined8 *)(param_1 + 0x68) = 0;
      }
      return 0;
    }
  }
LAB_147e1d8e8:
                    /* WARNING: Could not recover jumptable at 0x000147e1d8f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar4 + 0xe0))();
  return uVar2;
}



// FUNCTION 147e1d982 FUN_147e1d982 body=53 status=ok
// SIG undefined FUN_147e1d982(void)

undefined8 FUN_147e1d982(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (DAT_14cb1aeb8 != 0) {
    plVar1 = (longlong *)FUN_14030fc70(DAT_14cb1aeb8,param_1);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e1d9a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0xe0))(plVar1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 147e1d9c0 FUN_147e1d9c0 body=69 status=ok
// SIG undefined FUN_147e1d9c0(void)

undefined8 FUN_147e1d9c0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  lVar1 = (**(code **)(*param_1 + 0x18))();
  if (lVar1 == 0) {
LAB_147e1da01:
    uVar4 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x110);
    if (lVar2 == 0) {
      FUN_140aa6c08(lVar1);
      lVar2 = *(longlong *)(lVar1 + 0x110);
      if (lVar2 == 0) goto LAB_147e1da01;
    }
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(lVar2 + 99)) & 0xffffffffffffff08
    ;
    uVar4 = CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 3);
  }
  return uVar4;
}



// FUNCTION 147e1da0a FUN_147e1da0a body=102 status=ok
// SIG undefined FUN_147e1da0a(void)

longlong FUN_147e1da0a(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0 && param_2 != 0) {
    do {
      puVar2 = *(undefined4 **)(param_1 + 8);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = &DAT_14c9485f0;
      }
      cVar1 = FUN_14030fc16(param_2,puVar2);
      if (cVar1 != '\0') {
        return param_1;
      }
    } while ((DAT_14cb1aeb8 != 0) && (param_1 = FUN_14030fc70(DAT_14cb1aeb8,param_1), param_1 != 0))
    ;
  }
  return 0;
}



// FUNCTION 147e1da8c FUN_147e1da8c body=107 status=ok
// SIG undefined FUN_147e1da8c(void)

undefined8 * FUN_147e1da8c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145c1524e(&local_30,param_2,param_3,1);
  *param_1 = local_30;
  uVar1 = FUN_14477b664(local_28);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = local_20;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1daf8 FUN_147e1daf8 body=144 status=ok
// SIG undefined FUN_147e1daf8(void)

void FUN_147e1daf8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_2[1];
  if (lVar2 == 0) {
    lVar2 = FUN_140927942();
  }
  uVar4 = *param_2;
  uVar3 = FUN_14477b664(lVar2);
  uVar1 = param_2[2];
  local_48 = uVar4;
  uVar4 = FUN_14477b664(uVar3);
  local_40 = FUN_14477b664(uVar4);
  local_38 = uVar1;
  FUN_1470dfb6e(param_1,&local_48,param_3);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1db8a FUN_147e1db8a body=285 status=ok
// SIG undefined FUN_147e1db8a(void)

void FUN_147e1db8a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_1400d690e(param_2);
  uVar2 = FUN_140927942();
  FUN_14477b664(uVar2);
  lVar3 = FUN_140927942();
  uVar2 = FUN_140927942();
  FUN_1402d1bfa(&local_40,uVar2,uVar1);
  lVar4 = FUN_140927942();
  if (lVar3 != 0) {
    if (lVar4 == 0) {
      lVar4 = 0;
      goto LAB_147e1dc18;
    }
    if ((*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
        lVar4 + 0x30)) goto LAB_147e1dc18;
  }
  lVar4 = lVar3;
LAB_147e1dc18:
  uVar2 = FUN_14477b664(lVar4);
  lVar3 = FUN_14477b664(uVar2);
  lVar4 = lVar3;
  if (lVar3 == 0) {
    lVar4 = FUN_140927942(0);
  }
  uVar2 = FUN_14477b664(lVar4);
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  local_58 = local_40;
  if (local_40 == 0) {
    uVar1 = 0;
  }
  uVar2 = FUN_14477b664(uVar2);
  local_50 = FUN_14477b664(uVar2);
  local_48 = uVar1;
  FUN_1470dfb6e(param_1,&local_58,param_3);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1dca8 FUN_147e1dca8 body=108 status=ok
// SIG undefined FUN_147e1dca8(void)

undefined8 * FUN_147e1dca8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  code *local_20;
  undefined8 **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  local_18 = &local_28;
  local_20 = FUN_1437e940a;
  local_28 = param_1;
  FUN_147e1dd16();
  FUN_140e836da(*param_1,*(undefined4 *)(param_1 + 1),param_3,&local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e1dd16 FUN_147e1dd16 body=336 status=ok
// SIG undefined FUN_147e1dd16(void)

void FUN_147e1dd16(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  longlong local_a8 [3];
  longlong local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_70;
  ulonglong local_60;
  
  lVar2 = DAT_14cb1aeb8;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (DAT_14cb1aeb8 != 0) {
    FUN_144a884d2(&local_88,"Char_Enemy",0);
    lVar4 = FUN_144837462(lVar2,&local_88);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    local_88 = 0;
    uStack_80 = 0;
    FUN_145706b18(lVar2,&local_88);
    lVar2 = local_88;
    lVar7 = (longlong)(int)uStack_80;
    if (lVar7 != 0) {
      lVar6 = 0;
      do {
        lVar1 = *(longlong *)(lVar2 + lVar6);
        puVar5 = *(undefined4 **)(lVar1 + 8);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = &DAT_14c9485f0;
        }
        local_a8[0] = 0;
        local_a8[1] = 0;
        FUN_1400b2348(puVar5,local_a8,1);
        if (lVar4 != 0) {
          puVar5 = *(undefined4 **)(lVar4 + 8);
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = &DAT_14c9485f0;
          }
          cVar3 = FUN_14030fc16(lVar1,puVar5);
          if (cVar3 != '\0') {
            local_90 = lVar1;
            (*(code *)*param_1)(param_1[1],&local_90);
          }
        }
        if (local_a8[0] != 0) {
          FUN_1400020a8();
        }
        lVar6 = lVar6 + 8;
      } while (lVar7 * 8 != lVar6);
    }
    if (local_88 != 0) {
      FUN_1400020a8(local_88);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e1de68 FUN_147e1de68 body=1531 status=ok
// SIG undefined FUN_147e1de68(void)

longlong * FUN_147e1de68(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  code *pcVar10;
  code **ppcVar11;
  code *pcVar12;
  int iVar13;
  int iVar14;
  code *pcVar15;
  ulonglong uVar16;
  code *pcVar17;
  code *pcVar18;
  code *pcVar19;
  code *pcVar20;
  int iVar21;
  code *pcVar22;
  bool bVar23;
  float fVar24;
  undefined1 auStack_3a8 [32];
  code **local_388;
  int local_37c;
  longlong *local_378;
  code *local_370;
  code *local_368;
  code *local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  *param_1 = 0;
  param_1[1] = 0;
  local_360 = (code *)&local_68;
  ppcVar11 = &local_368;
  local_368 = FUN_1437e9486;
  local_68 = param_1;
  FUN_147e1dd16(ppcVar11);
  iVar9 = (int)param_1[1];
  if (1 < (longlong)iVar9) {
    pcVar19 = (code *)*param_1;
    local_378 = param_1;
    memset(local_358,0,0x2f0);
    local_360 = pcVar19 + (longlong)iVar9 * 0x18 + -0x18;
    local_368 = pcVar19;
    fVar24 = logf((float)iVar9);
    local_358[0] = (int)(longlong)(fVar24 + fVar24);
    do {
      pcVar17 = *ppcVar11;
      pcVar15 = ppcVar11[1];
      iVar9 = *(int *)(ppcVar11 + 2);
      iVar7 = (int)((ulonglong)((longlong)pcVar15 - (longlong)pcVar17) >> 3) * -0x55555555;
      uVar16 = (ulonglong)(iVar7 + 1);
      pcVar19 = pcVar15;
      pcVar18 = pcVar17;
      pcVar12 = pcVar17;
      local_388 = ppcVar11;
      if (iVar9 != 0) {
LAB_147e1df46:
        if (8 < (int)(uint)uVar16) {
          uVar16 = (ulonglong)((uint)uVar16 >> 1);
          local_58 = *(undefined8 *)(pcVar18 + (uVar16 * 3 + 2) * 8);
          uVar2 = *(undefined8 *)(pcVar18 + uVar16 * 0x18);
          uVar3 = *(undefined8 *)(pcVar18 + uVar16 * 0x18 + 8);
          *(undefined8 *)(pcVar18 + (uVar16 * 3 + 2) * 8) = *(undefined8 *)(pcVar18 + 0x10);
          uVar4 = *(undefined8 *)(pcVar18 + 8);
          *(undefined8 *)(pcVar18 + uVar16 * 0x18) = *(undefined8 *)pcVar18;
          *(undefined8 *)(pcVar18 + uVar16 * 0x18 + 8) = uVar4;
          *(undefined8 *)(pcVar18 + 0x10) = local_58;
          local_68._0_4_ = (undefined4)uVar2;
          local_68._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar3;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          *(undefined4 *)pcVar18 = (undefined4)local_68;
          *(undefined4 *)(pcVar18 + 4) = local_68._4_4_;
          *(undefined4 *)(pcVar18 + 8) = (undefined4)uStack_60;
          *(undefined4 *)(pcVar18 + 0xc) = uStack_60._4_4_;
          pcVar22 = pcVar19 + 0x18;
          pcVar12 = pcVar18;
          local_37c = iVar9;
          local_370 = pcVar17;
          local_68 = (longlong *)uVar2;
          uStack_60 = uVar3;
          do {
            pcVar17 = pcVar12 + 0x18;
            pcVar20 = pcVar12 + 0x18;
            do {
              pcVar12 = pcVar20;
              pcVar8 = pcVar17;
              if (pcVar19 < pcVar12) break;
              cVar6 = FUN_1437e9542(pcVar18,pcVar12);
              pcVar17 = pcVar8 + 0x18;
              pcVar20 = pcVar12 + 0x18;
            } while (cVar6 == '\0');
            pcVar17 = pcVar22 + -0x30;
            do {
              pcVar20 = pcVar22;
              pcVar10 = pcVar17;
              pcVar22 = pcVar20 + -0x18;
              if (pcVar22 <= pcVar18) break;
              cVar6 = FUN_1437e9542(pcVar22,pcVar18);
              pcVar17 = pcVar10 + -0x18;
            } while (cVar6 == '\0');
            if (pcVar22 < pcVar12) goto LAB_147e1e04b;
            local_58 = *(undefined8 *)(pcVar12 + 0x10);
            uVar2 = *(undefined8 *)pcVar12;
            uVar3 = *(undefined8 *)(pcVar12 + 8);
            *(undefined8 *)(pcVar12 + 0x10) = *(undefined8 *)(pcVar20 + -8);
            uVar4 = *(undefined8 *)(pcVar20 + -0x10);
            *(undefined8 *)pcVar12 = *(undefined8 *)pcVar22;
            *(undefined8 *)(pcVar12 + 8) = uVar4;
            *(undefined8 *)(pcVar20 + -8) = local_58;
            local_68._0_4_ = (undefined4)uVar2;
            local_68._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            uStack_60._0_4_ = (undefined4)uVar3;
            uStack_60._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            *(undefined4 *)pcVar22 = (undefined4)local_68;
            *(undefined4 *)(pcVar20 + -0x14) = local_68._4_4_;
            *(undefined4 *)(pcVar20 + -0x10) = (undefined4)uStack_60;
            *(undefined4 *)(pcVar20 + -0xc) = uStack_60._4_4_;
            local_68 = (longlong *)uVar2;
            uStack_60 = uVar3;
          } while( true );
        }
        for (; ppcVar11 = local_388, pcVar15 = pcVar18, pcVar17 = pcVar18, pcVar18 < pcVar19;
            pcVar19 = pcVar19 + -0x18) {
          while (pcVar12 = pcVar15, pcVar17 = pcVar17 + 0x18, pcVar17 <= pcVar19) {
            cVar6 = FUN_1437e9542(pcVar12,pcVar17);
            pcVar15 = pcVar17;
            if (cVar6 == '\0') {
              pcVar15 = pcVar12;
            }
          }
          local_58 = *(undefined8 *)(pcVar12 + 0x10);
          local_68 = *(longlong **)pcVar12;
          uStack_60 = *(undefined8 *)(pcVar12 + 8);
          plVar5 = local_68;
          uVar3 = uStack_60;
          *(undefined8 *)(pcVar12 + 0x10) = *(undefined8 *)(pcVar19 + 0x10);
          uVar2 = *(undefined8 *)(pcVar19 + 8);
          *(undefined8 *)pcVar12 = *(undefined8 *)pcVar19;
          *(undefined8 *)(pcVar12 + 8) = uVar2;
          *(undefined8 *)(pcVar19 + 0x10) = local_58;
          local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
          *(undefined4 *)pcVar19 = (undefined4)local_68;
          *(undefined4 *)(pcVar19 + 4) = local_68._4_4_;
          *(undefined4 *)(pcVar19 + 8) = (undefined4)uStack_60;
          *(undefined4 *)(pcVar19 + 0xc) = uStack_60._4_4_;
          local_68 = plVar5;
          uStack_60 = uVar3;
        }
        goto LAB_147e1e418;
      }
LAB_147e1e13b:
      iVar9 = (int)uVar16;
      ppcVar11 = local_388;
      if (iVar9 != 0) {
        iVar7 = (iVar7 - (iVar7 + -1 >> 0x1f)) + -1 >> 1;
        iVar14 = iVar7;
joined_r0x000147e1e15f:
        do {
          iVar13 = iVar7 * 2 + 1;
          if (iVar13 < iVar9) {
            iVar21 = iVar7 * 2 + 2;
            if ((iVar21 < iVar9) &&
               (cVar6 = FUN_1437e9542(pcVar12 + (longlong)iVar21 * 0x18,
                                      pcVar12 + (longlong)iVar13 * 0x18), cVar6 == '\0')) {
              iVar13 = iVar21;
            }
            pcVar19 = pcVar12 + (longlong)iVar7 * 0x18;
            pcVar17 = pcVar12 + (longlong)iVar13 * 0x18;
            cVar6 = FUN_1437e9542(pcVar19,pcVar17);
            if (cVar6 != '\0') {
              local_58 = *(undefined8 *)(pcVar19 + 0x10);
              local_68 = *(longlong **)pcVar19;
              uStack_60 = *(undefined8 *)(pcVar19 + 8);
              plVar5 = local_68;
              uVar3 = uStack_60;
              *(undefined8 *)(pcVar19 + 0x10) = *(undefined8 *)(pcVar17 + 0x10);
              uVar2 = *(undefined8 *)(pcVar17 + 8);
              *(undefined8 *)pcVar19 = *(undefined8 *)pcVar17;
              *(undefined8 *)(pcVar19 + 8) = uVar2;
              *(undefined8 *)(pcVar17 + 0x10) = local_58;
              local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
              uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
              *(undefined4 *)pcVar17 = (undefined4)local_68;
              *(undefined4 *)(pcVar17 + 4) = local_68._4_4_;
              *(undefined4 *)(pcVar17 + 8) = (undefined4)uStack_60;
              *(undefined4 *)(pcVar17 + 0xc) = uStack_60._4_4_;
              iVar7 = iVar13;
              local_68 = plVar5;
              uStack_60 = uVar3;
              goto joined_r0x000147e1e15f;
            }
          }
          bVar23 = iVar14 != 0;
          iVar7 = iVar14 + -1;
          iVar14 = iVar7;
        } while (bVar23);
        ppcVar11 = local_388;
        if (1 < iVar9) {
          uVar16 = uVar16 - 1;
          local_58 = *(undefined8 *)(pcVar12 + 0x10);
          local_68 = *(longlong **)pcVar12;
          uStack_60 = *(undefined8 *)(pcVar12 + 8);
          plVar5 = local_68;
          uVar3 = uStack_60;
          *(undefined8 *)(pcVar12 + 0x10) = *(undefined8 *)(pcVar12 + (uVar16 * 3 + 2) * 8);
          uVar2 = *(undefined8 *)(pcVar12 + uVar16 * 0x18 + 8);
          *(undefined8 *)pcVar12 = *(undefined8 *)(pcVar12 + uVar16 * 0x18);
          *(undefined8 *)(pcVar12 + 8) = uVar2;
          *(undefined8 *)(pcVar12 + (uVar16 * 3 + 2) * 8) = local_58;
          local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
          pcVar19 = pcVar12 + uVar16 * 0x18;
          *(undefined4 *)pcVar19 = (undefined4)local_68;
          *(undefined4 *)(pcVar19 + 4) = local_68._4_4_;
          *(undefined4 *)(pcVar19 + 8) = (undefined4)uStack_60;
          *(undefined4 *)(pcVar19 + 0xc) = uStack_60._4_4_;
          local_68 = plVar5;
          uStack_60 = uVar3;
          if (iVar9 != 2) {
            do {
              iVar9 = 0;
              iVar14 = 1;
              iVar7 = 0;
              do {
                iVar9 = iVar9 + 2;
                iVar13 = iVar14;
                if (((longlong)iVar9 < (longlong)uVar16) &&
                   (cVar6 = FUN_1437e9542(pcVar12 + (longlong)iVar9 * 0x18,
                                          pcVar12 + (longlong)iVar14 * 0x18), cVar6 == '\0')) {
                  iVar13 = iVar9;
                }
                pcVar19 = pcVar12 + (longlong)iVar7 * 0x18;
                pcVar17 = pcVar12 + (longlong)iVar13 * 0x18;
                cVar6 = FUN_1437e9542(pcVar19,pcVar17);
                if (cVar6 == '\0') break;
                local_58 = *(undefined8 *)(pcVar19 + 0x10);
                plVar5 = *(longlong **)pcVar19;
                uVar2 = *(undefined8 *)(pcVar19 + 8);
                *(undefined8 *)(pcVar19 + 0x10) = *(undefined8 *)(pcVar17 + 0x10);
                uVar3 = *(undefined8 *)(pcVar17 + 8);
                *(undefined8 *)pcVar19 = *(undefined8 *)pcVar17;
                *(undefined8 *)(pcVar19 + 8) = uVar3;
                *(undefined8 *)(pcVar17 + 0x10) = local_58;
                local_68._0_4_ = SUB84(plVar5,0);
                local_68._4_4_ = (undefined4)((ulonglong)plVar5 >> 0x20);
                uStack_60._0_4_ = (undefined4)uVar2;
                uStack_60._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
                *(undefined4 *)pcVar17 = (undefined4)local_68;
                *(undefined4 *)(pcVar17 + 4) = local_68._4_4_;
                *(undefined4 *)(pcVar17 + 8) = (undefined4)uStack_60;
                *(undefined4 *)(pcVar17 + 0xc) = uStack_60._4_4_;
                iVar9 = iVar13 * 2;
                iVar14 = iVar13 * 2 + 1;
                local_68 = plVar5;
                uStack_60 = uVar2;
                iVar7 = iVar13;
              } while ((longlong)iVar14 < (longlong)uVar16);
              uVar1 = uVar16 - 1;
              local_58 = *(undefined8 *)(pcVar12 + 0x10);
              local_68 = *(longlong **)pcVar12;
              uStack_60 = *(undefined8 *)(pcVar12 + 8);
              plVar5 = local_68;
              uVar3 = uStack_60;
              *(undefined8 *)(pcVar12 + 0x10) = *(undefined8 *)(pcVar12 + (uVar1 * 3 + 2) * 8);
              uVar2 = *(undefined8 *)(pcVar12 + uVar1 * 0x18 + 8);
              *(undefined8 *)pcVar12 = *(undefined8 *)(pcVar12 + uVar1 * 0x18);
              *(undefined8 *)(pcVar12 + 8) = uVar2;
              *(undefined8 *)(pcVar12 + (uVar1 * 3 + 2) * 8) = local_58;
              local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
              uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
              pcVar19 = pcVar12 + uVar1 * 0x18;
              *(undefined4 *)pcVar19 = (undefined4)local_68;
              *(undefined4 *)(pcVar19 + 4) = local_68._4_4_;
              *(undefined4 *)(pcVar19 + 8) = (undefined4)uStack_60;
              *(undefined4 *)(pcVar19 + 0xc) = uStack_60._4_4_;
              bVar23 = 2 < uVar16;
              ppcVar11 = local_388;
              uVar16 = uVar1;
              local_68 = plVar5;
              uStack_60 = uVar3;
            } while (bVar23);
          }
        }
      }
LAB_147e1e418:
      ppcVar11 = ppcVar11 + -3;
      param_1 = local_378;
    } while (&local_368 <= ppcVar11);
  }
  if ((local_48 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
LAB_147e1e04b:
  local_58 = *(undefined8 *)(pcVar18 + 0x10);
  local_68 = *(longlong **)pcVar18;
  uStack_60 = *(undefined8 *)(pcVar18 + 8);
  plVar5 = local_68;
  uVar3 = uStack_60;
  *(undefined8 *)(pcVar18 + 0x10) = *(undefined8 *)(pcVar20 + -8);
  uVar2 = *(undefined8 *)(pcVar20 + -0x10);
  *(undefined8 *)pcVar18 = *(undefined8 *)pcVar22;
  *(undefined8 *)(pcVar18 + 8) = uVar2;
  *(undefined8 *)(pcVar20 + -8) = local_58;
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  *(undefined4 *)pcVar22 = (undefined4)local_68;
  *(undefined4 *)(pcVar20 + -0x14) = local_68._4_4_;
  *(undefined4 *)(pcVar20 + -0x10) = (undefined4)uStack_60;
  *(undefined4 *)(pcVar20 + -0xc) = uStack_60._4_4_;
  iVar9 = local_37c + -1;
  pcVar20 = pcVar20 + -0x30;
  local_68 = plVar5;
  uStack_60 = uVar3;
  if ((longlong)pcVar10 - (longlong)local_370 < (longlong)pcVar15 - (longlong)pcVar8) {
    ppcVar11 = local_388;
    if (pcVar12 < pcVar19) {
      *local_388 = pcVar12;
      local_388[1] = pcVar19;
      *(int *)(local_388 + 2) = iVar9;
      ppcVar11 = local_388 + 3;
    }
    pcVar15 = pcVar10;
    pcVar12 = pcVar18;
    if (pcVar22 <= pcVar18 + 0x18) goto LAB_147e1e418;
  }
  else {
    if (pcVar18 + 0x18 < pcVar22) {
      *local_388 = pcVar18;
      local_388[1] = pcVar20;
      *(int *)(local_388 + 2) = iVar9;
      local_388 = local_388 + 3;
    }
    ppcVar11 = local_388;
    pcVar15 = pcVar19;
    pcVar18 = pcVar8;
    pcVar20 = pcVar19;
    if (pcVar19 <= pcVar12) goto LAB_147e1e418;
  }
  local_388 = ppcVar11;
  iVar7 = (int)((ulonglong)((longlong)pcVar15 - (longlong)pcVar18) >> 3) * -0x55555555;
  uVar16 = (ulonglong)(iVar7 + 1);
  pcVar17 = pcVar18;
  pcVar19 = pcVar20;
  pcVar18 = pcVar12;
  if (iVar9 == 0) goto LAB_147e1e13b;
  goto LAB_147e1df46;
}



// FUNCTION 147e1e464 FUN_147e1e464 body=2418 status=ok
// SIG undefined FUN_147e1e464(void)

longlong * FUN_147e1e464(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  code *pcVar9;
  void *pvVar10;
  void *pvVar11;
  void ***pppvVar12;
  void **ppvVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  void **ppvVar17;
  void ***pppvVar18;
  longlong lVar19;
  void **ppvVar20;
  longlong *plVar21;
  int iVar22;
  int iVar23;
  void **ppvVar24;
  uint uVar25;
  void **ppvVar26;
  void **ppvVar27;
  void **ppvVar28;
  void **ppvVar29;
  void **ppvVar30;
  ulonglong uVar31;
  bool bVar32;
  float fVar33;
  undefined1 auStack_488 [40];
  void ***local_460;
  int local_454;
  longlong *local_450;
  void **local_448;
  void *local_440;
  int local_438;
  undefined4 local_434;
  undefined1 local_42a;
  undefined1 local_429;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_408;
  undefined4 local_400;
  undefined8 local_3fc;
  undefined4 local_3f4;
  longlong local_3e8;
  undefined4 local_3e0;
  void *local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3b8;
  undefined4 local_3b0;
  undefined8 local_3ac;
  undefined4 local_3a4;
  longlong local_398;
  undefined4 local_390;
  void **local_388;
  void **local_380;
  undefined1 *local_378;
  undefined8 local_370;
  undefined1 *local_368;
  undefined8 *local_360;
  longlong *local_358;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_488;
  local_3b8 = 0;
  local_3b0 = 0;
  local_3d8 = (void *)0x0;
  uStack_3d0 = 0;
  local_3ac = 0xffffffff00000080;
  local_3a4 = 0;
  local_398 = 0;
  local_390 = 0;
  local_440 = (void *)0x0;
  local_438 = *(int *)(DAT_14cb1ae38 + 1);
  lVar19 = (longlong)local_438;
  pvVar2 = (void *)*DAT_14cb1ae38;
  local_450 = param_1;
  local_429 = param_3;
  if (lVar19 == 0) {
    local_434 = 0;
  }
  else {
    FUN_1446dd670(&local_440,local_438,0);
    memcpy(local_440,pvVar2,lVar19 * 2);
  }
  plVar21 = local_450;
  local_360 = &local_428;
  local_408 = 0;
  local_400 = 0;
  local_428 = 0;
  uStack_420 = 0;
  local_3fc = 0xffffffff00000080;
  local_3f4 = 0;
  local_3e8 = 0;
  local_3e0 = 0;
  *local_450 = 0;
  local_450[1] = 0;
  local_388 = &local_440;
  uStack_80 = &local_388;
  local_380 = &local_3d8;
  local_378 = &local_42a;
  local_368 = &local_429;
  local_358 = local_450;
  local_88 = FUN_1437e9662;
  local_370 = param_2;
  FUN_147e1dd16();
  uVar25 = *(uint *)(plVar21 + 1);
  if (uVar25 == 0) {
    FUN_147e1edd8(&local_428);
    uVar25 = *(uint *)(plVar21 + 1);
  }
  if (1 < (int)uVar25) {
    ppvVar28 = (void **)*plVar21;
    memset(&local_378,0,0x2f0);
    local_380 = ppvVar28 + (ulonglong)uVar25 * 7 + -7;
    local_388 = ppvVar28;
    fVar33 = logf((float)(int)uVar25);
    local_378 = (undefined1 *)CONCAT44(local_378._4_4_,(int)(longlong)(fVar33 + fVar33));
    pppvVar18 = &local_388;
    do {
      ppvVar20 = *pppvVar18;
      ppvVar24 = pppvVar18[1];
      iVar16 = *(int *)(pppvVar18 + 2);
      iVar15 = (int)((ulonglong)((longlong)ppvVar24 - (longlong)ppvVar20) >> 3) * -0x49249249;
      uVar25 = iVar15 + 1;
      ppvVar27 = ppvVar20;
      ppvVar28 = ppvVar24;
      local_460 = pppvVar18;
      if (iVar16 != 0) {
LAB_147e1e642:
        if (8 < (int)uVar25) {
          uVar31 = (ulonglong)(uVar25 >> 1);
          local_58 = ppvVar20[uVar31 * 7 + 6];
          pvVar2 = ppvVar20[uVar31 * 7];
          pvVar3 = (ppvVar20 + uVar31 * 7)[1];
          local_78 = ppvVar20[uVar31 * 7 + 2];
          uStack_70 = (ppvVar20 + uVar31 * 7 + 2)[1];
          local_68 = ppvVar20[uVar31 * 7 + 4];
          uStack_60 = (ppvVar20 + uVar31 * 7 + 4)[1];
          ppvVar20[uVar31 * 7 + 6] = ppvVar20[6];
          pvVar4 = *ppvVar20;
          pvVar5 = ppvVar20[1];
          pvVar6 = ppvVar20[2];
          pvVar7 = ppvVar20[3];
          pvVar8 = ppvVar20[5];
          ppvVar20[uVar31 * 7 + 4] = ppvVar20[4];
          (ppvVar20 + uVar31 * 7 + 4)[1] = pvVar8;
          ppvVar20[uVar31 * 7 + 2] = pvVar6;
          (ppvVar20 + uVar31 * 7 + 2)[1] = pvVar7;
          ppvVar20[uVar31 * 7] = pvVar4;
          (ppvVar20 + uVar31 * 7)[1] = pvVar5;
          ppvVar20[6] = local_58;
          local_88._0_4_ = SUB84(pvVar2,0);
          local_88._4_4_ = (undefined4)((ulonglong)pvVar2 >> 0x20);
          uStack_80._0_4_ = SUB84(pvVar3,0);
          uStack_80._4_4_ = (undefined4)((ulonglong)pvVar3 >> 0x20);
          ppvVar20[4] = local_68;
          ppvVar20[5] = uStack_60;
          ppvVar20[2] = local_78;
          ppvVar20[3] = uStack_70;
          *(undefined4 *)ppvVar20 = (undefined4)local_88;
          *(undefined4 *)((longlong)ppvVar20 + 4) = local_88._4_4_;
          *(undefined4 *)(ppvVar20 + 1) = (undefined4)uStack_80;
          *(undefined4 *)((longlong)ppvVar20 + 0xc) = uStack_80._4_4_;
          ppvVar30 = ppvVar28 + 7;
          ppvVar26 = ppvVar20;
          local_454 = iVar16;
          local_448 = ppvVar27;
          local_88 = pvVar2;
          uStack_80 = pvVar3;
          do {
            ppvVar13 = ppvVar26 + 7;
            ppvVar29 = ppvVar26 + 7;
            do {
              ppvVar26 = ppvVar29;
              ppvVar27 = ppvVar13;
              if (ppvVar28 < ppvVar26) break;
              cVar14 = FUN_1437e9c1a(ppvVar20,ppvVar26);
              ppvVar13 = ppvVar27 + 7;
              ppvVar29 = ppvVar26 + 7;
            } while (cVar14 == '\0');
            ppvVar13 = ppvVar30 + -0xe;
            do {
              ppvVar29 = ppvVar30;
              ppvVar17 = ppvVar13;
              ppvVar30 = ppvVar29 + -7;
              if (ppvVar30 <= ppvVar20) break;
              cVar14 = FUN_1437e9c1a(ppvVar30,ppvVar20);
              ppvVar13 = ppvVar17 + -7;
            } while (cVar14 == '\0');
            if (ppvVar30 < ppvVar26) goto LAB_147e1e7cf;
            local_58 = ppvVar26[6];
            pvVar2 = *ppvVar26;
            pvVar3 = ppvVar26[1];
            local_78 = ppvVar26[2];
            uStack_70 = ppvVar26[3];
            local_68 = ppvVar26[4];
            uStack_60 = ppvVar26[5];
            ppvVar26[6] = ppvVar29[-1];
            pvVar4 = *ppvVar30;
            pvVar5 = ppvVar29[-6];
            pvVar6 = ppvVar29[-5];
            pvVar7 = ppvVar29[-4];
            pvVar8 = ppvVar29[-2];
            ppvVar26[4] = ppvVar29[-3];
            ppvVar26[5] = pvVar8;
            ppvVar26[2] = pvVar6;
            ppvVar26[3] = pvVar7;
            *ppvVar26 = pvVar4;
            ppvVar26[1] = pvVar5;
            ppvVar29[-1] = local_58;
            local_88._0_4_ = SUB84(pvVar2,0);
            local_88._4_4_ = (undefined4)((ulonglong)pvVar2 >> 0x20);
            uStack_80._0_4_ = SUB84(pvVar3,0);
            uStack_80._4_4_ = (undefined4)((ulonglong)pvVar3 >> 0x20);
            ppvVar29[-3] = local_68;
            ppvVar29[-2] = uStack_60;
            ppvVar29[-5] = local_78;
            ppvVar29[-4] = uStack_70;
            *(undefined4 *)ppvVar30 = (undefined4)local_88;
            *(undefined4 *)((longlong)ppvVar29 + -0x34) = local_88._4_4_;
            *(undefined4 *)(ppvVar29 + -6) = (undefined4)uStack_80;
            *(undefined4 *)((longlong)ppvVar29 + -0x2c) = uStack_80._4_4_;
            local_88 = pvVar2;
            uStack_80 = pvVar3;
          } while( true );
        }
        for (; pppvVar18 = local_460, ppvVar27 = ppvVar20, ppvVar24 = ppvVar20, ppvVar20 < ppvVar28;
            ppvVar28 = ppvVar28 + -7) {
          while (ppvVar30 = ppvVar27, ppvVar24 = ppvVar24 + 7, ppvVar24 <= ppvVar28) {
            cVar14 = FUN_1437e9c1a(ppvVar30,ppvVar24);
            ppvVar27 = ppvVar24;
            if (cVar14 == '\0') {
              ppvVar27 = ppvVar30;
            }
          }
          local_58 = ppvVar30[6];
          local_88 = *ppvVar30;
          uStack_80 = ppvVar30[1];
          local_78 = ppvVar30[2];
          uStack_70 = ppvVar30[3];
          local_68 = ppvVar30[4];
          uStack_60 = ppvVar30[5];
          pcVar9 = local_88;
          pppvVar18 = uStack_80;
          ppvVar30[6] = ppvVar28[6];
          pvVar2 = *ppvVar28;
          pvVar3 = ppvVar28[1];
          pvVar4 = ppvVar28[2];
          pvVar5 = ppvVar28[3];
          pvVar6 = ppvVar28[5];
          ppvVar30[4] = ppvVar28[4];
          ppvVar30[5] = pvVar6;
          ppvVar30[2] = pvVar4;
          ppvVar30[3] = pvVar5;
          *ppvVar30 = pvVar2;
          ppvVar30[1] = pvVar3;
          ppvVar28[6] = local_58;
          local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
          uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
          ppvVar28[4] = local_68;
          ppvVar28[5] = uStack_60;
          ppvVar28[2] = local_78;
          ppvVar28[3] = uStack_70;
          *(undefined4 *)ppvVar28 = (undefined4)local_88;
          *(undefined4 *)((longlong)ppvVar28 + 4) = local_88._4_4_;
          *(undefined4 *)(ppvVar28 + 1) = (undefined4)uStack_80;
          *(undefined4 *)((longlong)ppvVar28 + 0xc) = uStack_80._4_4_;
          local_88 = pcVar9;
          uStack_80 = pppvVar18;
        }
        goto LAB_147e1ed2c;
      }
LAB_147e1e901:
      pppvVar18 = local_460;
      if (uVar25 != 0) {
        iVar16 = (iVar15 - (iVar15 + -1 >> 0x1f)) + -1 >> 1;
        iVar15 = iVar16;
joined_r0x000147e1e924:
        do {
          iVar23 = iVar16 * 2 + 1;
          if (iVar23 < (int)uVar25) {
            iVar22 = iVar16 * 2 + 2;
            if ((iVar22 < (int)uVar25) &&
               (cVar14 = FUN_1437e9c1a(ppvVar20 + (longlong)iVar22 * 7,
                                       ppvVar20 + (longlong)iVar23 * 7), cVar14 == '\0')) {
              iVar23 = iVar22;
            }
            ppvVar24 = ppvVar20 + (longlong)iVar16 * 7;
            ppvVar28 = ppvVar20 + (longlong)iVar23 * 7;
            cVar14 = FUN_1437e9c1a(ppvVar24,ppvVar28);
            if (cVar14 != '\0') {
              local_58 = ppvVar24[6];
              local_88 = *ppvVar24;
              uStack_80 = ppvVar24[1];
              local_78 = ppvVar24[2];
              uStack_70 = ppvVar24[3];
              local_68 = ppvVar24[4];
              uStack_60 = ppvVar24[5];
              pcVar9 = local_88;
              pppvVar18 = uStack_80;
              ppvVar24[6] = ppvVar28[6];
              pvVar2 = *ppvVar28;
              pvVar3 = ppvVar28[1];
              pvVar4 = ppvVar28[2];
              pvVar5 = ppvVar28[3];
              pvVar6 = ppvVar28[5];
              ppvVar24[4] = ppvVar28[4];
              ppvVar24[5] = pvVar6;
              ppvVar24[2] = pvVar4;
              ppvVar24[3] = pvVar5;
              *ppvVar24 = pvVar2;
              ppvVar24[1] = pvVar3;
              ppvVar28[6] = local_58;
              local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
              uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
              ppvVar28[4] = local_68;
              ppvVar28[5] = uStack_60;
              ppvVar28[2] = local_78;
              ppvVar28[3] = uStack_70;
              *(undefined4 *)ppvVar28 = (undefined4)local_88;
              *(undefined4 *)((longlong)ppvVar28 + 4) = local_88._4_4_;
              *(undefined4 *)(ppvVar28 + 1) = (undefined4)uStack_80;
              *(undefined4 *)((longlong)ppvVar28 + 0xc) = uStack_80._4_4_;
              iVar16 = iVar23;
              local_88 = pcVar9;
              uStack_80 = pppvVar18;
              goto joined_r0x000147e1e924;
            }
          }
          bVar32 = iVar15 != 0;
          iVar16 = iVar15 + -1;
          iVar15 = iVar16;
        } while (bVar32);
        pppvVar18 = local_460;
        if (1 < (int)uVar25) {
          uVar31 = (ulonglong)uVar25 - 1;
          local_58 = ppvVar20[6];
          local_88 = *ppvVar20;
          uStack_80 = ppvVar20[1];
          local_78 = ppvVar20[2];
          uStack_70 = ppvVar20[3];
          local_68 = ppvVar20[4];
          uStack_60 = ppvVar20[5];
          pvVar10 = local_68;
          pvVar11 = uStack_60;
          pvVar7 = local_78;
          pvVar8 = uStack_70;
          pcVar9 = local_88;
          pppvVar12 = uStack_80;
          ppvVar20[6] = ppvVar20[uVar31 * 7 + 6];
          pvVar2 = ppvVar20[uVar31 * 7];
          pvVar3 = (ppvVar20 + uVar31 * 7)[1];
          pvVar4 = ppvVar20[uVar31 * 7 + 2];
          pvVar5 = (ppvVar20 + uVar31 * 7 + 2)[1];
          pvVar6 = (ppvVar20 + uVar31 * 7 + 4)[1];
          ppvVar20[4] = ppvVar20[uVar31 * 7 + 4];
          ppvVar20[5] = pvVar6;
          ppvVar20[2] = pvVar4;
          ppvVar20[3] = pvVar5;
          *ppvVar20 = pvVar2;
          ppvVar20[1] = pvVar3;
          ppvVar20[uVar31 * 7 + 6] = local_58;
          local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
          uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
          local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
          ppvVar28 = ppvVar20 + uVar31 * 7 + 4;
          *(undefined4 *)ppvVar28 = (undefined4)local_68;
          *(undefined4 *)((longlong)ppvVar28 + 4) = local_68._4_4_;
          *(undefined4 *)(ppvVar28 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)ppvVar28 + 0xc) = uStack_60._4_4_;
          ppvVar28 = ppvVar20 + uVar31 * 7 + 2;
          *(undefined4 *)ppvVar28 = (undefined4)local_78;
          *(undefined4 *)((longlong)ppvVar28 + 4) = local_78._4_4_;
          *(undefined4 *)(ppvVar28 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)ppvVar28 + 0xc) = uStack_70._4_4_;
          ppvVar28 = ppvVar20 + uVar31 * 7;
          *(undefined4 *)ppvVar28 = (undefined4)local_88;
          *(undefined4 *)((longlong)ppvVar28 + 4) = local_88._4_4_;
          *(undefined4 *)(ppvVar28 + 1) = (undefined4)uStack_80;
          *(undefined4 *)((longlong)ppvVar28 + 0xc) = uStack_80._4_4_;
          local_88 = pcVar9;
          uStack_80 = pppvVar12;
          local_78 = pvVar7;
          uStack_70 = pvVar8;
          local_68 = pvVar10;
          uStack_60 = pvVar11;
          if (uVar25 != 2) {
            do {
              iVar16 = 0;
              iVar23 = 1;
              iVar15 = 0;
              do {
                iVar16 = iVar16 + 2;
                iVar22 = iVar23;
                if (((longlong)iVar16 < (longlong)uVar31) &&
                   (cVar14 = FUN_1437e9c1a(ppvVar20 + (longlong)iVar16 * 7,
                                           ppvVar20 + (longlong)iVar23 * 7), cVar14 == '\0')) {
                  iVar22 = iVar16;
                }
                ppvVar24 = ppvVar20 + (longlong)iVar15 * 7;
                ppvVar28 = ppvVar20 + (longlong)iVar22 * 7;
                cVar14 = FUN_1437e9c1a(ppvVar24,ppvVar28);
                if (cVar14 == '\0') break;
                local_58 = ppvVar24[6];
                pcVar9 = *ppvVar24;
                pppvVar18 = ppvVar24[1];
                pvVar2 = ppvVar24[2];
                pvVar3 = ppvVar24[3];
                pvVar4 = ppvVar24[4];
                pvVar5 = ppvVar24[5];
                ppvVar24[6] = ppvVar28[6];
                pvVar6 = *ppvVar28;
                pvVar7 = ppvVar28[1];
                pvVar8 = ppvVar28[2];
                pvVar10 = ppvVar28[3];
                pvVar11 = ppvVar28[5];
                ppvVar24[4] = ppvVar28[4];
                ppvVar24[5] = pvVar11;
                ppvVar24[2] = pvVar8;
                ppvVar24[3] = pvVar10;
                *ppvVar24 = pvVar6;
                ppvVar24[1] = pvVar7;
                ppvVar28[6] = local_58;
                local_88._0_4_ = SUB84(pcVar9,0);
                local_88._4_4_ = (undefined4)((ulonglong)pcVar9 >> 0x20);
                uStack_80._0_4_ = SUB84(pppvVar18,0);
                uStack_80._4_4_ = (undefined4)((ulonglong)pppvVar18 >> 0x20);
                local_78._0_4_ = SUB84(pvVar2,0);
                local_78._4_4_ = (undefined4)((ulonglong)pvVar2 >> 0x20);
                uStack_70._0_4_ = SUB84(pvVar3,0);
                uStack_70._4_4_ = (undefined4)((ulonglong)pvVar3 >> 0x20);
                local_68._0_4_ = SUB84(pvVar4,0);
                local_68._4_4_ = (undefined4)((ulonglong)pvVar4 >> 0x20);
                uStack_60._0_4_ = SUB84(pvVar5,0);
                uStack_60._4_4_ = (undefined4)((ulonglong)pvVar5 >> 0x20);
                *(undefined4 *)(ppvVar28 + 4) = (undefined4)local_68;
                *(undefined4 *)((longlong)ppvVar28 + 0x24) = local_68._4_4_;
                *(undefined4 *)(ppvVar28 + 5) = (undefined4)uStack_60;
                *(undefined4 *)((longlong)ppvVar28 + 0x2c) = uStack_60._4_4_;
                *(undefined4 *)(ppvVar28 + 2) = (undefined4)local_78;
                *(undefined4 *)((longlong)ppvVar28 + 0x14) = local_78._4_4_;
                *(undefined4 *)(ppvVar28 + 3) = (undefined4)uStack_70;
                *(undefined4 *)((longlong)ppvVar28 + 0x1c) = uStack_70._4_4_;
                *(undefined4 *)ppvVar28 = (undefined4)local_88;
                *(undefined4 *)((longlong)ppvVar28 + 4) = local_88._4_4_;
                *(undefined4 *)(ppvVar28 + 1) = (undefined4)uStack_80;
                *(undefined4 *)((longlong)ppvVar28 + 0xc) = uStack_80._4_4_;
                iVar16 = iVar22 * 2;
                iVar23 = iVar22 * 2 + 1;
                local_88 = pcVar9;
                uStack_80 = pppvVar18;
                local_78 = pvVar2;
                uStack_70 = pvVar3;
                local_68 = pvVar4;
                uStack_60 = pvVar5;
                iVar15 = iVar22;
              } while ((longlong)iVar23 < (longlong)uVar31);
              uVar1 = uVar31 - 1;
              local_58 = ppvVar20[6];
              local_88 = *ppvVar20;
              uStack_80 = ppvVar20[1];
              local_78 = ppvVar20[2];
              uStack_70 = ppvVar20[3];
              local_68 = ppvVar20[4];
              uStack_60 = ppvVar20[5];
              pvVar10 = local_68;
              pvVar11 = uStack_60;
              pvVar7 = local_78;
              pvVar8 = uStack_70;
              pcVar9 = local_88;
              pppvVar12 = uStack_80;
              ppvVar20[6] = ppvVar20[uVar1 * 7 + 6];
              pvVar2 = ppvVar20[uVar1 * 7];
              pvVar3 = (ppvVar20 + uVar1 * 7)[1];
              pvVar4 = ppvVar20[uVar1 * 7 + 2];
              pvVar5 = (ppvVar20 + uVar1 * 7 + 2)[1];
              pvVar6 = (ppvVar20 + uVar1 * 7 + 4)[1];
              ppvVar20[4] = ppvVar20[uVar1 * 7 + 4];
              ppvVar20[5] = pvVar6;
              ppvVar20[2] = pvVar4;
              ppvVar20[3] = pvVar5;
              *ppvVar20 = pvVar2;
              ppvVar20[1] = pvVar3;
              ppvVar20[uVar1 * 7 + 6] = local_58;
              local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
              uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
              local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
              uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
              local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
              uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
              ppvVar28 = ppvVar20 + uVar1 * 7 + 4;
              *(undefined4 *)ppvVar28 = (undefined4)local_68;
              *(undefined4 *)((longlong)ppvVar28 + 4) = local_68._4_4_;
              *(undefined4 *)(ppvVar28 + 1) = (undefined4)uStack_60;
              *(undefined4 *)((longlong)ppvVar28 + 0xc) = uStack_60._4_4_;
              ppvVar28 = ppvVar20 + uVar1 * 7 + 2;
              *(undefined4 *)ppvVar28 = (undefined4)local_78;
              *(undefined4 *)((longlong)ppvVar28 + 4) = local_78._4_4_;
              *(undefined4 *)(ppvVar28 + 1) = (undefined4)uStack_70;
              *(undefined4 *)((longlong)ppvVar28 + 0xc) = uStack_70._4_4_;
              ppvVar28 = ppvVar20 + uVar1 * 7;
              *(undefined4 *)ppvVar28 = (undefined4)local_88;
              *(undefined4 *)((longlong)ppvVar28 + 4) = local_88._4_4_;
              *(undefined4 *)(ppvVar28 + 1) = (undefined4)uStack_80;
              *(undefined4 *)((longlong)ppvVar28 + 0xc) = uStack_80._4_4_;
              bVar32 = 2 < uVar31;
              pppvVar18 = local_460;
              uVar31 = uVar1;
              local_88 = pcVar9;
              uStack_80 = pppvVar12;
              local_78 = pvVar7;
              uStack_70 = pvVar8;
              local_68 = pvVar10;
              uStack_60 = pvVar11;
            } while (bVar32);
          }
        }
      }
LAB_147e1ed2c:
      pppvVar18 = pppvVar18 + -3;
      plVar21 = local_450;
    } while (&local_388 <= pppvVar18);
  }
  local_3e0 = 0;
  if (local_3e8 != 0) {
    FUN_1400020a8();
  }
  FUN_147e20a64(&local_428);
  if (local_440 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_390 = 0;
  if (local_398 != 0) {
    FUN_1400020a8();
  }
  FUN_147e218f0(&local_3d8);
  if ((local_48 ^ (ulonglong)auStack_488) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar21;
LAB_147e1e7cf:
  local_58 = ppvVar20[6];
  local_88 = *ppvVar20;
  uStack_80 = ppvVar20[1];
  local_78 = ppvVar20[2];
  uStack_70 = ppvVar20[3];
  local_68 = ppvVar20[4];
  uStack_60 = ppvVar20[5];
  pcVar9 = local_88;
  pppvVar18 = uStack_80;
  ppvVar20[6] = ppvVar29[-1];
  pvVar2 = *ppvVar30;
  pvVar3 = ppvVar29[-6];
  pvVar4 = ppvVar29[-5];
  pvVar5 = ppvVar29[-4];
  pvVar6 = ppvVar29[-2];
  ppvVar20[4] = ppvVar29[-3];
  ppvVar20[5] = pvVar6;
  ppvVar20[2] = pvVar4;
  ppvVar20[3] = pvVar5;
  *ppvVar20 = pvVar2;
  ppvVar20[1] = pvVar3;
  ppvVar29[-1] = local_58;
  local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  ppvVar29[-3] = local_68;
  ppvVar29[-2] = uStack_60;
  ppvVar29[-5] = local_78;
  ppvVar29[-4] = uStack_70;
  *(undefined4 *)ppvVar30 = (undefined4)local_88;
  *(undefined4 *)((longlong)ppvVar29 + -0x34) = local_88._4_4_;
  *(undefined4 *)(ppvVar29 + -6) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)ppvVar29 + -0x2c) = uStack_80._4_4_;
  iVar16 = local_454 + -1;
  ppvVar29 = ppvVar29 + -0xe;
  local_88 = pcVar9;
  uStack_80 = pppvVar18;
  if ((longlong)ppvVar17 - (longlong)local_448 < (longlong)ppvVar24 - (longlong)ppvVar27) {
    pppvVar18 = local_460;
    if (ppvVar26 < ppvVar28) {
      *local_460 = ppvVar26;
      local_460[1] = ppvVar28;
      *(int *)(local_460 + 2) = iVar16;
      pppvVar18 = local_460 + 3;
    }
    ppvVar27 = ppvVar20;
    ppvVar24 = ppvVar17;
    if (ppvVar30 <= ppvVar20 + 7) goto LAB_147e1ed2c;
  }
  else {
    if (ppvVar20 + 7 < ppvVar30) {
      *local_460 = ppvVar20;
      local_460[1] = ppvVar29;
      *(int *)(local_460 + 2) = iVar16;
      local_460 = local_460 + 3;
    }
    pppvVar18 = local_460;
    ppvVar20 = ppvVar26;
    ppvVar29 = ppvVar28;
    ppvVar24 = ppvVar28;
    if (ppvVar28 <= ppvVar26) goto LAB_147e1ed2c;
  }
  local_460 = pppvVar18;
  iVar15 = (int)((ulonglong)((longlong)ppvVar24 - (longlong)ppvVar27) >> 3) * -0x49249249;
  uVar25 = iVar15 + 1;
  ppvVar28 = ppvVar29;
  if (iVar16 == 0) goto LAB_147e1e901;
  goto LAB_147e1e642;
}



// FUNCTION 147e1edd8 FUN_147e1edd8 body=405 status=ok
// SIG undefined FUN_147e1edd8(void)

void FUN_147e1edd8(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
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
  iVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar8) {
    FUN_147e223fc(param_2);
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
      iVar7 = iStack_5c;
      lVar2 = *local_78;
      iVar8 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar8 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
        FUN_147e2236c(param_2,iVar8);
      }
      lVar2 = lVar2 + (longlong)iVar7 * 0x48;
      lVar3 = *param_2;
      lVar9 = (longlong)iVar8 * 0x38;
      *(undefined2 *)(lVar3 + 4 + lVar9) = *(undefined2 *)(lVar2 + 0xc);
      *(undefined4 *)(lVar3 + lVar9) = *(undefined4 *)(lVar2 + 8);
      *(undefined8 *)(lVar3 + 8 + lVar9) = *(undefined8 *)(lVar2 + 0x10);
      *(undefined4 *)(lVar3 + 0x10 + lVar9) = *(undefined4 *)(lVar2 + 0x18);
      *(undefined8 *)(lVar3 + 0x18 + lVar9) = 0;
      uVar4 = *(undefined4 *)(lVar2 + 0x2c);
      uVar5 = *(undefined4 *)(lVar2 + 0x30);
      uVar6 = *(undefined4 *)(lVar2 + 0x34);
      puVar1 = (undefined4 *)(lVar3 + 0x20 + lVar9);
      *puVar1 = *(undefined4 *)(lVar2 + 0x28);
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      *(undefined8 *)(lVar3 + 0x30 + lVar9) = *(undefined8 *)(lVar2 + 0x38);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e1ef70 FUN_147e1ef70 body=7 status=ok
// SIG undefined FUN_147e1ef70(void)

longlong FUN_147e1ef70(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x2a) = param_2;
  return param_1;
}



// FUNCTION 147e1ef78 FUN_147e1ef78 body=267 status=ok
// SIG undefined FUN_147e1ef78(void)

ulonglong FUN_147e1ef78(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_1401b0f18();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1401b0f18();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        lVar4 = (**(code **)(*plVar3 + 0x28))(plVar3);
        uVar5 = CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
        if ((longlong)(int)param_2[1] != 0) {
          plVar3 = (longlong *)*param_2;
          plVar2 = plVar3 + (int)param_2[1];
          do {
            if (*(int *)(lVar4 + 0x80) != 0) {
              lVar6 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar4 + 0x78) + lVar6) == *plVar3)
                goto LAB_147e1f075;
                lVar6 = lVar6 + 8;
              } while ((longlong)*(int *)(lVar4 + 0x80) << 3 != lVar6);
            }
            if (*(int *)(lVar4 + 0x90) == 0) goto LAB_147e1efcb;
            lVar6 = 0;
            while (*(longlong *)(*(longlong *)(lVar4 + 0x88) + lVar6) != *plVar3) {
              lVar6 = lVar6 + 8;
              if ((longlong)*(int *)(lVar4 + 0x90) << 3 == lVar6) goto LAB_147e1efcb;
            }
LAB_147e1f075:
            plVar3 = plVar3 + 1;
          } while (plVar3 != plVar2);
        }
        goto LAB_147e1efcd;
      }
    }
  }
LAB_147e1efcb:
  uVar5 = 0;
LAB_147e1efcd:
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 147e1f084 FUN_147e1f084 body=1 status=ok
// SIG undefined FUN_147e1f084(void)

void FUN_147e1f084(void)

{
  return;
}



// FUNCTION 147e1f086 FUN_147e1f086 body=45 status=ok
// SIG undefined FUN_147e1f086(void)

longlong FUN_147e1f086(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e79a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e1f0b4 FUN_147e1f0b4 body=45 status=ok
// SIG undefined FUN_147e1f0b4(void)

longlong FUN_147e1f0b4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14028f724(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e1f0e8 FUN_147e1f0e8 body=48 status=ok
// SIG undefined FUN_147e1f0e8(void)

longlong FUN_147e1f0e8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14028f724(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e1f120 FUN_147e1f120 body=48 status=ok
// SIG undefined FUN_147e1f120(void)

longlong FUN_147e1f120(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14028f724(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e1f158 FUN_147e1f158 body=48 status=ok
// SIG undefined FUN_147e1f158(void)

longlong FUN_147e1f158(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14028f724(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e1f190 FUN_147e1f190 body=45 status=ok
// SIG undefined FUN_147e1f190(void)

longlong FUN_147e1f190(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_14006e79a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e1f1be FUN_147e1f1be body=37 status=ok
// SIG undefined FUN_147e1f1be(void)

void FUN_147e1f1be(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xb8);
  FUN_145e4783c(param_2);
  return;
}



// FUNCTION 147e1f210 FUN_147e1f210 body=63 status=ok
// SIG undefined FUN_147e1f210(void)

undefined1 FUN_147e1f210(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e1f39c(param_2,param_3);
    param_3 = param_3 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return 1;
}



// FUNCTION 147e1f278 FUN_147e1f278 body=59 status=ok
// SIG undefined FUN_147e1f278(void)

undefined8 FUN_147e1f278(longlong *param_1)

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



// FUNCTION 147e1f2c4 FUN_147e1f2c4 body=40 status=ok
// SIG undefined FUN_147e1f2c4(void)

void FUN_147e1f2c4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_145a0bb16(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 147e1f33e FUN_147e1f33e body=38 status=ok
// SIG undefined FUN_147e1f33e(void)

undefined8 FUN_147e1f33e(undefined8 param_1,int param_2)

{
  FUN_145a0bb16();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e1f364 FUN_147e1f364 body=55 status=ok
// SIG undefined FUN_147e1f364(void)

void FUN_147e1f364(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1aa88 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1aa88 = FUN_140002ddd(FUN_146419975,uVar1,L"SpawnGlobals");
  }
  return;
}



// FUNCTION 147e1f39c FUN_147e1f39c body=243 status=ok
// SIG undefined FUN_147e1f39c(void)

longlong FUN_147e1f39c(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar3 = *(longlong *)(param_2 + 0x28);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(longlong *)(param_1 + 0x28) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  uVar8 = *(undefined8 *)(param_2 + 0x38);
  uVar5 = *(undefined4 *)(param_2 + 0x44);
  uVar6 = *(undefined4 *)(param_2 + 0x48);
  uVar7 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  *(undefined4 *)(param_1 + 0x48) = uVar6;
  *(undefined4 *)(param_1 + 0x4c) = uVar7;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar8;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  uVar5 = *(undefined4 *)(param_2 + 100);
  uVar6 = *(undefined4 *)(param_2 + 0x68);
  uVar7 = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = uVar5;
  *(undefined4 *)(param_1 + 0x68) = uVar6;
  *(undefined4 *)(param_1 + 0x6c) = uVar7;
  FUN_144a787a6(param_1 + 0x70,param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  FUN_145c7a522(param_1 + 0x88,param_2 + 0x88);
  if ((*(longlong *)(param_1 + 0x98) != *(longlong *)(param_2 + 0x98)) ||
     (*(int *)(param_1 + 0xa0) != *(int *)(param_2 + 0xa0))) {
    *(longlong *)(param_1 + 0x98) = *(longlong *)(param_2 + 0x98);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0xb0);
  return param_1;
}



// FUNCTION 147e1f494 FUN_147e1f494 body=28 status=ok
// SIG undefined FUN_147e1f494(void)

undefined8 FUN_147e1f494(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 147e1f4c2 FUN_147e1f4c2 body=42 status=ok
// SIG undefined FUN_147e1f4c2(void)

void FUN_147e1f4c2(undefined8 param_1,undefined8 *param_2)

{
  FUN_1404e2388(param_2);
  *param_2 = &PTR_FUN_14ab620b0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  return;
}



// FUNCTION 147e1f502 FUN_147e1f502 body=105 status=ok
// SIG undefined FUN_147e1f502(void)

undefined1 FUN_147e1f502(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e1a790(param_2,param_3);
    FUN_147e1f67c(param_2 + 0x90,param_3 + 0x90);
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 147e1f594 FUN_147e1f594 body=59 status=ok
// SIG undefined FUN_147e1f594(void)

undefined8 FUN_147e1f594(longlong *param_1)

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



// FUNCTION 147e1f5e0 FUN_147e1f5e0 body=38 status=ok
// SIG undefined FUN_147e1f5e0(void)

void FUN_147e1f5e0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_147e1f63a(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 147e1f63a FUN_147e1f63a body=66 status=ok
// SIG undefined FUN_147e1f63a(void)

void FUN_147e1f63a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab620b0;
  FUN_14034c5df(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_140753ab6(param_1);
  return;
}



// FUNCTION 147e1f67c FUN_147e1f67c body=93 status=ok
// SIG undefined FUN_147e1f67c(void)

undefined8 * FUN_147e1f67c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14034c5df(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147e1f6da(param_1,iVar1);
      FUN_14034cb40(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147e1f6da FUN_147e1f6da body=118 status=ok
// SIG undefined FUN_147e1f6da(void)

void FUN_147e1f6da(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xf8,8);
    iVar2 = (int)(uVar1 / 0xf8);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xf8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147e1f752 FUN_147e1f752 body=57 status=ok
// SIG undefined FUN_147e1f752(void)

void FUN_147e1f752(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x480);
  *(undefined4 *)((longlong)param_2 + 0x40c) = 0x20;
  *(undefined8 *)((longlong)param_2 + 0x424) = 0xffffffff00000020;
  return;
}



// FUNCTION 147e1f7ce FUN_147e1f7ce body=48 status=ok
// SIG undefined FUN_147e1f7ce(void)

void FUN_147e1f7ce(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x478) = 0;
  if (*(longlong *)(param_2 + 0x470) != 0) {
    FUN_1400020a8();
  }
  FUN_140b3d076(param_2);
  return;
}



// FUNCTION 147e1f814 FUN_147e1f814 body=63 status=ok
// SIG undefined FUN_147e1f814(void)

undefined1 FUN_147e1f814(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e1f958(param_2,param_3);
    param_3 = param_3 + 0x480;
    param_2 = param_2 + 0x480;
  }
  return 1;
}



// FUNCTION 147e1f87c FUN_147e1f87c body=59 status=ok
// SIG undefined FUN_147e1f87c(void)

undefined8 FUN_147e1f87c(longlong *param_1)

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



// FUNCTION 147e1f8c8 FUN_147e1f8c8 body=65 status=ok
// SIG undefined FUN_147e1f8c8(void)

void FUN_147e1f8c8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x480) == '\x01') {
    *(undefined4 *)(param_2 + 0x478) = 0;
    if (*(longlong *)(param_2 + 0x470) != 0) {
      FUN_1400020a8();
    }
    FUN_140b3d076(param_2);
    *(undefined1 *)(param_2 + 0x480) = 0;
  }
  return;
}



// FUNCTION 147e1f958 FUN_147e1f958 body=140 status=ok
// SIG undefined FUN_147e1f958(void)

longlong FUN_147e1f958(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x478);
    FUN_1400bf6d8((void *)(param_1 + 0x430),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x430);
      if (*(void **)(param_1 + 0x470) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x470);
      }
      _Src = (void *)(param_2 + 0x430);
      if (*(void **)(param_2 + 0x470) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x470);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x478) = iVar1;
    FUN_147e1f9e4(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147e1f9e4 FUN_147e1f9e4 body=170 status=ok
// SIG undefined FUN_147e1f9e4(void)

void * FUN_147e1f9e4(void *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)((longlong)param_2 + 0x408);
    FUN_140b3d0b4(param_1,uVar1);
    iVar2 = *(int *)((longlong)param_1 + 0x408);
    *(uint *)((longlong)param_1 + 0x408) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0x40c) - iVar2) < uVar1) {
      FUN_1467c2d2a(param_1);
    }
    *(undefined4 *)((longlong)param_1 + 0x428) = *(undefined4 *)((longlong)param_2 + 0x428);
    *(undefined4 *)((longlong)param_1 + 0x42c) = *(undefined4 *)((longlong)param_2 + 0x42c);
    FUN_1470c60fc((longlong)param_1 + 0x410,(longlong)param_2 + 0x410);
    if (uVar1 != 0) {
      _Src = *(void **)((longlong)param_2 + 0x400);
      if (*(void **)((longlong)param_2 + 0x400) == (void *)0x0) {
        _Src = param_2;
      }
      _Dst = *(void **)((longlong)param_1 + 0x400);
      if (*(void **)((longlong)param_1 + 0x400) == (void *)0x0) {
        _Dst = param_1;
      }
      memcpy(_Dst,_Src,(longlong)(int)uVar1 << 5);
    }
  }
  return param_1;
}



// FUNCTION 147e1faf8 FUN_147e1faf8 body=59 status=ok
// SIG undefined FUN_147e1faf8(void)

undefined8 FUN_147e1faf8(longlong *param_1)

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



// FUNCTION 147e1fb98 FUN_147e1fb98 body=29 status=ok
// SIG undefined FUN_147e1fb98(void)

undefined8 FUN_147e1fb98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e1fbb6 FUN_147e1fbb6 body=55 status=ok
// SIG undefined FUN_147e1fbb6(void)

void FUN_147e1fbb6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1ab00 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1ab00 = FUN_140002ddd(FUN_1464199a4,uVar1,L"SpawnModifier");
  }
  return;
}



// FUNCTION 147e1fc10 FUN_147e1fc10 body=91 status=ok
// SIG undefined FUN_147e1fc10(void)

undefined8 FUN_147e1fc10(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1478990ac(param_2,param_3);
    memcpy((void *)(param_2 + 0x1d0),(void *)(param_3 + 0x1d0),0x88);
    param_2 = param_2 + 0x260;
    param_3 = param_3 + 0x260;
  }
  return 1;
}



// FUNCTION 147e1fc94 FUN_147e1fc94 body=59 status=ok
// SIG undefined FUN_147e1fc94(void)

undefined8 FUN_147e1fc94(longlong *param_1)

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



// FUNCTION 147e1fce0 FUN_147e1fce0 body=38 status=ok
// SIG undefined FUN_147e1fce0(void)

void FUN_147e1fce0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x260) == '\x01') {
    FUN_140595c52(param_2);
    *(undefined1 *)(param_2 + 0x260) = 0;
  }
  return;
}



// FUNCTION 147e1fdb6 FUN_147e1fdb6 body=91 status=ok
// SIG undefined FUN_147e1fdb6(void)

undefined8 FUN_147e1fdb6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
    do {
      FUN_140862116(param_2 + -0x30,param_3 + -0x30);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147e1fe3a FUN_147e1fe3a body=59 status=ok
// SIG undefined FUN_147e1fe3a(void)

undefined8 FUN_147e1fe3a(longlong *param_1)

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



// FUNCTION 147e1fe80 FUN_147e1fe80 body=48 status=ok
// SIG undefined FUN_147e1fe80(void)

void FUN_147e1fe80(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 9) == '\x01') {
    *param_2 = &PTR_FUN_14ab64e90;
    if (param_2[7] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 9) = 0;
  }
  return;
}



// FUNCTION 147e1fefe FUN_147e1fefe body=57 status=ok
// SIG undefined FUN_147e1fefe(void)

undefined8 * FUN_147e1fefe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab64e90;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e1ff38 FUN_147e1ff38 body=55 status=ok
// SIG undefined FUN_147e1ff38(void)

void FUN_147e1ff38(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1ac60 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1ac60 = FUN_140002ddd(FUN_14641a1ad,uVar1,L"SpawnerReclaimedActorInfo");
  }
  return;
}



// FUNCTION 147e1ffe4 FUN_147e1ffe4 body=59 status=ok
// SIG undefined FUN_147e1ffe4(void)

undefined8 FUN_147e1ffe4(longlong *param_1)

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



// FUNCTION 147e200d4 FUN_147e200d4 body=75 status=ok
// SIG undefined FUN_147e200d4(void)

undefined1 FUN_147e200d4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      FUN_14053cb00();
      lVar6 = lVar6 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147e20148 FUN_147e20148 body=59 status=ok
// SIG undefined FUN_147e20148(void)

undefined8 FUN_147e20148(longlong *param_1)

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



// FUNCTION 147e2018e FUN_147e2018e body=38 status=ok
// SIG undefined FUN_147e2018e(void)

void FUN_147e2018e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 147e20224 FUN_147e20224 body=48 status=ok
// SIG undefined FUN_147e20224(void)

void FUN_147e20224(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147e2026a FUN_147e2026a body=73 status=ok
// SIG undefined FUN_147e2026a(void)

undefined1 FUN_147e2026a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + lVar1) = *(undefined1 *)(param_3 + lVar1);
      FUN_1403de7ba();
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147e202dc FUN_147e202dc body=59 status=ok
// SIG undefined FUN_147e202dc(void)

undefined8 FUN_147e202dc(longlong *param_1)

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



// FUNCTION 147e2037a FUN_147e2037a body=52 status=ok
// SIG undefined FUN_147e2037a(void)

void FUN_147e2037a(longlong param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147e203cc FUN_147e203cc body=63 status=ok
// SIG undefined FUN_147e203cc(void)

undefined1 FUN_147e203cc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e20594(param_2,param_3);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 147e20434 FUN_147e20434 body=59 status=ok
// SIG undefined FUN_147e20434(void)

undefined8 FUN_147e20434(longlong *param_1)

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



// FUNCTION 147e20480 FUN_147e20480 body=42 status=ok
// SIG undefined FUN_147e20480(void)

void FUN_147e20480(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_144a2da94(param_2 + 0xb8);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 147e204ec FUN_147e204ec body=167 status=ok
// SIG undefined FUN_147e204ec(void)

void FUN_147e204ec(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0x4000;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0x3f800000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0xf00000d0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf00000d0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  param_1[0x17] = 0;
  *(undefined2 *)(param_1 + 0x1b) = 4;
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(bool *)(param_1 + 0x1d) = (DAT_14c9a8634 & 0x20) == 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0xf4) = 0;
  return;
}



// FUNCTION 147e20594 FUN_147e20594 body=124 status=ok
// SIG undefined FUN_147e20594(void)

longlong * FUN_147e20594(longlong *param_1,longlong *param_2)

{
  if ((*param_1 != *param_2) || ((int)param_1[1] != (int)param_2[1])) {
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    param_1[2] = 0;
  }
  FUN_140d02432(param_1 + 3,param_2 + 3);
  FUN_140d02432(param_1 + 0xd,param_2 + 0xd);
  FUN_144983130(param_1 + 0x17,param_2 + 0x17);
  *(int *)(param_1 + 0x1e) = (int)param_2[0x1e];
  *(undefined2 *)((longlong)param_1 + 0xf4) = *(undefined2 *)((longlong)param_2 + 0xf4);
  return param_1;
}



// FUNCTION 147e2066c FUN_147e2066c body=85 status=ok
// SIG undefined FUN_147e2066c(void)

undefined1 FUN_147e2066c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_141289ada(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined1 *)(param_2 + 0x18 + lVar1) = *(undefined1 *)(param_3 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147e206ea FUN_147e206ea body=59 status=ok
// SIG undefined FUN_147e206ea(void)

undefined8 FUN_147e206ea(longlong *param_1)

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



// FUNCTION 147e20730 FUN_147e20730 body=43 status=ok
// SIG undefined FUN_147e20730(void)

void FUN_147e20730(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 147e207a2 FUN_147e207a2 body=52 status=ok
// SIG undefined FUN_147e207a2(void)

undefined8 * FUN_147e207a2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e207d6 FUN_147e207d6 body=55 status=ok
// SIG undefined FUN_147e207d6(void)

void FUN_147e207d6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1ad20 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1ad20 = FUN_140002ddd(FUN_14641a49c,uVar1,L"TaggedAnimDef");
  }
  return;
}



// FUNCTION 147e20812 FUN_147e20812 body=28 status=ok
// SIG undefined FUN_147e20812(void)

undefined8 FUN_147e20812(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 147e2089e FUN_147e2089e body=85 status=ok
// SIG undefined FUN_147e2089e(void)

undefined1 FUN_147e2089e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_141289ada(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined1 *)(param_2 + 0x18 + lVar1) = *(undefined1 *)(param_3 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147e2091c FUN_147e2091c body=59 status=ok
// SIG undefined FUN_147e2091c(void)

undefined8 FUN_147e2091c(longlong *param_1)

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



// FUNCTION 147e20962 FUN_147e20962 body=43 status=ok
// SIG undefined FUN_147e20962(void)

void FUN_147e20962(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 147e209e0 FUN_147e209e0 body=52 status=ok
// SIG undefined FUN_147e209e0(void)

undefined8 * FUN_147e209e0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e20a14 FUN_147e20a14 body=55 status=ok
// SIG undefined FUN_147e20a14(void)

void FUN_147e20a14(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1ad50 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1ad50 = FUN_140002ddd(FUN_14641a52d,uVar1,L"TaggedAnimDef_GbxSpawn");
  }
  return;
}



// FUNCTION 147e20a64 FUN_147e20a64 body=52 status=ok
// SIG undefined FUN_147e20a64(void)

void FUN_147e20a64(longlong *param_1)

{
  FUN_147e20a98();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147e20a98 FUN_147e20a98 body=91 status=ok
// SIG undefined FUN_147e20a98(void)

void FUN_147e20a98(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1403af08a(param_1,0);
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



// FUNCTION 147e20af4 FUN_147e20af4 body=31 status=ok
// SIG undefined FUN_147e20af4(void)

undefined8 FUN_147e20af4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e20b28 FUN_147e20b28 body=85 status=ok
// SIG undefined FUN_147e20b28(void)

void FUN_147e20b28(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab65300;
  return;
}



// FUNCTION 147e20b7e FUN_147e20b7e body=118 status=ok
// SIG undefined FUN_147e20b7e(void)

void FUN_147e20b7e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab65300;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e20be5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e20bf4 FUN_147e20bf4 body=105 status=ok
// SIG undefined FUN_147e20bf4(void)

undefined8 FUN_147e20bf4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14603c1f4(param_1 + 0x18,local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e20c5e FUN_147e20c5e body=24 status=ok
// SIG undefined FUN_147e20c5e(void)

void FUN_147e20c5e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e20c72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 147e20c76 FUN_147e20c76 body=29 status=ok
// SIG undefined FUN_147e20c76(void)

undefined8 FUN_147e20c76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e20c94 FUN_147e20c94 body=107 status=ok
// SIG undefined FUN_147e20c94(void)

/* WARNING: Removing unreachable block (ram,0x000147e20cc6) */
/* WARNING: Removing unreachable block (ram,0x000147e20ca2) */
/* WARNING: Removing unreachable block (ram,0x000147e20cb8) */
/* WARNING: Removing unreachable block (ram,0x000147e20cd1) */
/* WARNING: Removing unreachable block (ram,0x000147e20cba) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e20c94(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb1ad90;
  LOCK();
  UNLOCK();
  DAT_14cb1ad90 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb1ad98 = _DAT_14cb1ad98 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cb1ad98 = _DAT_14cb1ad98 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147e20d00 FUN_147e20d00 body=110 status=ok
// SIG undefined FUN_147e20d00(void)

void FUN_147e20d00(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x18;
    if (0x18 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 3)) {
        uVar2 = uVar1 >> 3 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xcc)) {
    *(int *)(param_1 + 0xcc) = (int)uVar2;
    FUN_147e20d6e(param_1,*(undefined4 *)(param_1 + 200),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 147e20d6e FUN_147e20d6e body=142 status=ok
// SIG undefined FUN_147e20d6e(void)

void FUN_147e20d6e(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 0x19) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,param_4);
  return;
}



// FUNCTION 147e20dfc FUN_147e20dfc body=643 status=ok
// SIG undefined FUN_147e20dfc(void)

void FUN_147e20dfc(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar10 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar10;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar9 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar9) || (uStack_130 != lVar10)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        iVar2 = *(int *)(param_3 + 200);
        *(uint *)(param_3 + 200) = iVar2 + 1U;
        if (*(uint *)(param_3 + 0xcc) < iVar2 + 1U) {
          FUN_147e214d8(param_3,iVar2);
        }
        lVar7 = *(longlong *)(param_3 + 0xc0);
        if (*(longlong *)(param_3 + 0xc0) == 0) {
          lVar7 = param_3;
        }
        *(longlong **)(lVar7 + (longlong)iVar2 * 8) = plVar3;
        lVar7 = FUN_144a7f016();
        if (((*(int *)(lVar7 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
             == lVar7 + 0x30)) &&
           (lVar7 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar7 != 0)) {
          lVar11 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_118;
          }
          *(longlong *)(puVar8 + lVar11 * 8) = lVar7;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar10 || iStack_144 != iVar9));
    lVar10 = (longlong)(int)local_50;
    puVar8 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar8 = local_58;
    }
    if (lVar10 != 0) {
      lVar7 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar8 + lVar7);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_147e20dfc(uVar4,&local_168,param_3);
        lVar7 = lVar7 + 8;
      } while (lVar10 * 8 != lVar7);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e21080 FUN_147e21080 body=336 status=ok
// SIG undefined FUN_147e21080(void)

void FUN_147e21080(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
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
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar6 = *(int *)(param_1 + 0x268);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar6) || (uStack_58 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
      if (lVar4 != 0) {
        iVar3 = *(int *)(param_3 + 200);
        *(uint *)(param_3 + 200) = iVar3 + 1U;
        if (*(uint *)(param_3 + 0xcc) < iVar3 + 1U) {
          FUN_147e214d8(param_3,iVar3);
        }
        lVar5 = *(longlong *)(param_3 + 0xc0);
        if (*(longlong *)(param_3 + 0xc0) == 0) {
          lVar5 = param_3;
        }
        *(longlong *)(lVar5 + (longlong)iVar3 * 8) = lVar4;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar6));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e211d2 FUN_147e211d2 body=772 status=ok
// SIG undefined FUN_147e211d2(void)

void FUN_147e211d2(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar12 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar12;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar11 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar11) || (uStack_130 != lVar12)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        lVar8 = *param_2;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_147e212f6:
          lVar7 = FUN_144a78d6a();
          if ((lVar7 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38))) goto LAB_147e2130e;
          lVar9 = 0;
          if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30) {
            lVar9 = lVar8;
          }
        }
        else {
          if (lVar8 != 0) goto LAB_147e212f6;
LAB_147e2130e:
          lVar9 = 0;
        }
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
            lVar9 + 0x30)) {
          iVar2 = *(int *)(param_3 + 200);
          *(uint *)(param_3 + 200) = iVar2 + 1U;
          if (*(uint *)(param_3 + 0xcc) < iVar2 + 1U) {
            FUN_147e214d8(param_3,iVar2);
          }
          lVar8 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar8 = param_3;
          }
          *(longlong **)(lVar8 + (longlong)iVar2 * 8) = plVar3;
        }
        lVar8 = FUN_144a7f016();
        if (((*(int *)(lVar8 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
             == lVar8 + 0x30)) &&
           (lVar8 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar8 != 0)) {
          lVar7 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_118;
          }
          *(longlong *)(puVar10 + lVar7 * 8) = lVar8;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar12 || iStack_144 != iVar11));
    lVar12 = (longlong)(int)local_50;
    puVar10 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar10 = local_58;
    }
    if (lVar12 != 0) {
      lVar8 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar10 + lVar8);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_147e211d2(uVar4,&local_168,param_3);
        lVar8 = lVar8 + 8;
      } while (lVar12 * 8 != lVar8);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e214d8 FUN_147e214d8 body=125 status=ok
// SIG undefined FUN_147e214d8(void)

void FUN_147e214d8(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x18;
    if (0x18 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x18 < *(uint *)(param_1 + 0xcc)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xcc) = (int)uVar4;
    FUN_147e20d6e(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147e21556 FUN_147e21556 body=116 status=ok
// SIG undefined FUN_147e21556(void)

void FUN_147e21556(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x4c) = (int)uVar4;
    FUN_147e215cc(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147e215cc FUN_147e215cc body=133 status=ok
// SIG undefined FUN_147e215cc(void)

void FUN_147e215cc(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,param_4);
  return;
}



// FUNCTION 147e21652 FUN_147e21652 body=109 status=ok
// SIG undefined FUN_147e21652(void)

void FUN_147e21652(longlong *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  
  uVar1 = *(uint *)((longlong)param_2 + 0x48);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1403de658(param_1,iVar2);
    }
    _Src = *(void **)((longlong)param_2 + 0x40);
    if (*(void **)((longlong)param_2 + 0x40) == (void *)0x0) {
      _Src = param_2;
    }
    memcpy((void *)((longlong)iVar2 * 8 + *param_1),_Src,(longlong)(int)uVar1 << 3);
    return;
  }
  return;
}



// FUNCTION 147e216c0 FUN_147e216c0 body=125 status=ok
// SIG undefined FUN_147e216c0(void)

void FUN_147e216c0(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x10;
    if (0x10 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x8c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x8c) = (int)uVar4;
    FUN_147e2173e(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147e2173e FUN_147e2173e body=142 status=ok
// SIG undefined FUN_147e2173e(void)

void FUN_147e2173e(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 147e217cc FUN_147e217cc body=144 status=ok
// SIG undefined FUN_147e217cc(void)

void FUN_147e217cc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  lVar5 = (longlong)(int)param_1[1];
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if ((*(longlong *)(lVar2 + uVar4) == *param_2) &&
         (*(int *)(lVar2 + 8 + uVar4) == (int)param_2[1])) {
        if ((int)(uVar4 >> 3) * -0x55555555 != -1) {
          return;
        }
        break;
      }
      lVar1 = lVar2 + uVar4;
      uVar4 = uVar4 + 0x18;
    } while (lVar1 + 0x18 != lVar2 + lVar5 * 0x18);
  }
  uVar3 = (int)param_1[1] + 1;
  *(uint *)(param_1 + 1) = uVar3;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar3) {
    FUN_147e2185c(param_1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar5 * 0x18) = *param_2;
  *(int *)(lVar2 + 8 + lVar5 * 0x18) = (int)param_2[1];
  *(undefined8 *)(lVar2 + 0x10 + lVar5 * 0x18) = 0;
  return;
}



// FUNCTION 147e2185c FUN_147e2185c body=147 status=ok
// SIG undefined FUN_147e2185c(void)

void FUN_147e2185c(longlong param_1,int param_2)

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



// FUNCTION 147e218f0 FUN_147e218f0 body=52 status=ok
// SIG undefined FUN_147e218f0(void)

void FUN_147e218f0(longlong *param_1)

{
  FUN_147e21924();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147e21924 FUN_147e21924 body=89 status=ok
// SIG undefined FUN_147e21924(void)

void FUN_147e21924(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
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



// FUNCTION 147e2197e FUN_147e2197e body=326 status=ok
// SIG undefined FUN_147e2197e(void)

undefined4 *
FUN_147e2197e(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147e21ac6(param_1,local_50);
  uVar5 = *param_3;
  *local_48 = uVar5;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_68 = param_4;
  cVar2 = FUN_147e21bac(param_1,uVar3,local_48,&local_54);
  uVar1 = local_54;
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
      *(uint *)((longlong)local_48 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_147e21ca8(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e21ac6 FUN_147e21ac6 body=229 status=ok
// SIG undefined FUN_147e21ac6(void)

int * FUN_147e21ac6(longlong *param_1,int *param_2)

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



// FUNCTION 147e21bac FUN_147e21bac body=138 status=ok
// SIG undefined FUN_147e21bac(void)

void FUN_147e21bac(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *plVar2 = *param_3;
          FUN_147e21c36(param_1,*param_4);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_147e21c17;
        }
        iVar3 = (int)plVar2[1];
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_147e21c17:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 147e21c36 FUN_147e21c36 body=114 status=ok
// SIG undefined FUN_147e21c36(void)

void FUN_147e21c36(longlong *param_1,int param_2)

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



// FUNCTION 147e21ca8 FUN_147e21ca8 body=477 status=ok
// SIG undefined FUN_147e21ca8(void)

void FUN_147e21ca8(longlong *param_1)

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



// FUNCTION 147e21e86 FUN_147e21e86 body=331 status=ok
// SIG undefined FUN_147e21e86(void)

undefined4 * FUN_147e21e86(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_147e21fd2(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar7 = *(uint *)*param_3;
  *local_40 = uVar7;
  local_40[2] = *puVar1;
  *(short *)(local_40 + 3) = (short)puVar1[1];
  *(undefined8 *)(local_40 + 4) = *(undefined8 *)(puVar1 + 2);
  local_40[6] = puVar1[4];
  local_40[8] = 0;
  local_40[9] = 0;
  uVar6 = puVar1[9];
  uVar2 = puVar1[10];
  uVar3 = puVar1[0xb];
  local_40[10] = puVar1[8];
  local_40[0xb] = uVar6;
  local_40[0xc] = uVar2;
  local_40[0xd] = uVar3;
  *(undefined8 *)(local_40 + 0xe) = *(undefined8 *)(puVar1 + 0xc);
  local_40[0x10] = 0xffffffff;
  local_4c = local_48[0];
  cVar5 = FUN_147e220b8(param_1,uVar7,local_40,&local_4c);
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
      local_40[0x11] = uVar7;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      local_40[0x10] =
           *(uint *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_147e221c8(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e21fd2 FUN_147e21fd2 body=230 status=ok
// SIG undefined FUN_147e21fd2(void)

int * FUN_147e21fd2(longlong *param_1,int *param_2)

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
      FUN_14021b4e8(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x48);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x48) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x48 + *param_1;
  return param_2;
}



// FUNCTION 147e220b8 FUN_147e220b8 body=158 status=ok
// SIG undefined FUN_147e220b8(void)

undefined8 FUN_147e220b8(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  int iVar18;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar17 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar17 = (longlong *)param_1[8];
    }
    iVar18 = *(int *)((longlong)plVar17 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar18 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar18 * 0x48);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          iVar10 = param_3[8];
          iVar11 = param_3[9];
          iVar12 = param_3[10];
          iVar13 = param_3[0xb];
          iVar14 = param_3[0xd];
          iVar15 = param_3[0xe];
          iVar16 = param_3[0xf];
          piVar1[0xc] = param_3[0xc];
          piVar1[0xd] = iVar14;
          piVar1[0xe] = iVar15;
          piVar1[0xf] = iVar16;
          piVar1[8] = iVar10;
          piVar1[9] = iVar11;
          piVar1[10] = iVar12;
          piVar1[0xb] = iVar13;
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_147e22156(iVar2,*param_4);
          *param_4 = iVar18;
          return 1;
        }
        iVar18 = piVar1[0x10];
      } while (iVar18 != -1);
    }
  }
  return 0;
}



// FUNCTION 147e22156 FUN_147e22156 body=114 status=ok
// SIG undefined FUN_147e22156(void)

void FUN_147e22156(longlong *param_1,int param_2)

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



// FUNCTION 147e221c8 FUN_147e221c8 body=419 status=ok
// SIG undefined FUN_147e221c8(void)

void FUN_147e221c8(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x48);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x44 + lVar6 * 0x48) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x40 + lVar6 * 0x48) =
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



// FUNCTION 147e2236c FUN_147e2236c body=143 status=ok
// SIG undefined FUN_147e2236c(void)

void FUN_147e2236c(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}


