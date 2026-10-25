// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1497c9068 FUN_1497c9068 body=94 status=ok
// SIG undefined FUN_1497c9068(void)

longlong FUN_1497c9068(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x248,param_2 + 0x248);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x268);
  uVar2 = *(undefined8 *)(param_2 + 0x270);
  uVar3 = *(undefined8 *)(param_2 + 0x280);
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_2 + 0x278);
  *(undefined8 *)(param_1 + 0x280) = uVar3;
  *(undefined8 *)(param_1 + 0x268) = uVar1;
  *(undefined8 *)(param_1 + 0x270) = uVar2;
  return param_1;
}



// FUNCTION 1497c90c8 FUN_1497c90c8 body=22 status=ok
// SIG undefined FUN_1497c90c8(void)

undefined8 FUN_1497c90c8(undefined8 param_1)

{
  FUN_1497c90de();
  return param_1;
}



// FUNCTION 1497c90de FUN_1497c90de body=153 status=ok
// SIG undefined FUN_1497c90de(void)

undefined8 * FUN_1497c90de(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x328,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497c9178(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c9178 FUN_1497c9178 body=389 status=ok
// SIG undefined FUN_1497c9178(void)

undefined8 * FUN_1497c9178(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be70ff0;
  puVar1 = param_1 + 0x33;
  FUN_1414db454(puVar1);
  FUN_1414db454(param_1 + 0x49);
  puVar2 = param_1 + 0x5f;
  FUN_1400b22c2(puVar2,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x61,&DAT_149e02088);
  *(undefined2 *)(param_1 + 99) = 0x201;
  *(undefined1 *)((longlong)param_1 + 0x31a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0x3f0000003c23d70a;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0x3c23d70a;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = puVar1;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x49;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = puVar2;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_60 = (undefined8 *)0x0;
  FUN_1496f7d4c(param_1,puVar1,puVar1,&local_60);
  local_60 = (undefined8 *)0x0;
  FUN_1497b99a6(param_1,puVar2,puVar2,&local_60);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c92fe FUN_1497c92fe body=25 status=ok
// SIG undefined FUN_1497c92fe(void)

undefined8 FUN_1497c92fe(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497c9336 FUN_1497c9336 body=22 status=ok
// SIG undefined FUN_1497c9336(void)

undefined8 FUN_1497c9336(undefined8 param_1)

{
  FUN_1497c934c();
  return param_1;
}



// FUNCTION 1497c934c FUN_1497c934c body=153 status=ok
// SIG undefined FUN_1497c934c(void)

undefined8 * FUN_1497c934c(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x288,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497c93e6(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c93e6 FUN_1497c93e6 body=338 status=ok
// SIG undefined FUN_1497c93e6(void)

undefined8 * FUN_1497c93e6(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be715f0;
  puVar1 = param_1 + 0x33;
  FUN_1414db454(puVar1);
  param_1[0x4b] = 0;
  param_1[0x4c] = 0x8000000000;
  uVar2 = DAT_14c75905c;
  *(undefined4 *)(param_1 + 0x4d) = DAT_14c75905c;
  *(undefined4 *)((longlong)param_1 + 0x26c) = uVar2;
  uVar2 = DAT_14c758c60;
  *(undefined4 *)(param_1 + 0x4e) = DAT_14c758c60;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4f) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x27c) = uVar2;
  *(undefined4 *)(param_1 + 0x50) = DAT_14c75905c;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0x3f800000;
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = puVar1;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = param_1 + 0x49;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_58 = (undefined8 *)0x0;
  FUN_1496f7d4c(param_1,puVar1,puVar1,&local_58);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c953a FUN_1497c953a body=25 status=ok
// SIG undefined FUN_1497c953a(void)

undefined8 FUN_1497c953a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497c9572 FUN_1497c9572 body=22 status=ok
// SIG undefined FUN_1497c9572(void)

undefined8 FUN_1497c9572(undefined8 param_1)

{
  FUN_1497c9588();
  return param_1;
}



// FUNCTION 1497c9588 FUN_1497c9588 body=153 status=ok
// SIG undefined FUN_1497c9588(void)

undefined8 * FUN_1497c9588(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x260,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497c9622(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c9622 FUN_1497c9622 body=245 status=ok
// SIG undefined FUN_1497c9622(void)

undefined8 * FUN_1497c9622(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be71310;
  puVar1 = param_1 + 0x33;
  FUN_1414db454(puVar1);
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0x3f800000;
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = puVar1;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = param_1 + 0x49;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_58 = (undefined8 *)0x0;
  FUN_1496f7d4c(param_1,puVar1,puVar1,&local_58);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c9718 FUN_1497c9718 body=25 status=ok
// SIG undefined FUN_1497c9718(void)

undefined8 FUN_1497c9718(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497c9750 FUN_1497c9750 body=31 status=ok
// SIG undefined FUN_1497c9750(void)

undefined8 FUN_1497c9750(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497c978c FUN_1497c978c body=93 status=ok
// SIG undefined FUN_1497c978c(void)

void FUN_1497c978c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be717d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1497c97ea FUN_1497c97ea body=123 status=ok
// SIG undefined FUN_1497c97ea(void)

void FUN_1497c97ea(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14be717d0;
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



// FUNCTION 1497c9866 FUN_1497c9866 body=21 status=ok
// SIG undefined FUN_1497c9866(void)

undefined8 FUN_1497c9866(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1497c9898 FUN_1497c9898 body=293 status=ok
// SIG undefined FUN_1497c9898(void)

void FUN_1497c9898(longlong param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
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
  local_21 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x74) < 0) {
    FUN_1446f8c06((undefined8 *)(param_1 + 0x68),0);
  }
  puVar1 = *(undefined2 **)(param_1 + 0x68);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c99fa FUN_1497c99fa body=137 status=ok
// SIG undefined FUN_1497c99fa(void)

void FUN_1497c99fa(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c9a84 FUN_1497c9a84 body=138 status=ok
// SIG undefined FUN_1497c9a84(void)

void FUN_1497c9a84(undefined8 param_1,longlong param_2)

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
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497c9b12 FUN_1497c9b12 body=5650 status=ok
// SIG undefined FUN_1497c9b12(void)

/* WARNING: Removing unreachable block (ram,0x0001497caff8) */
/* WARNING: Removing unreachable block (ram,0x0001497cadab) */
/* WARNING: Removing unreachable block (ram,0x0001497cac29) */
/* WARNING: Removing unreachable block (ram,0x0001497ca9c2) */
/* WARNING: Removing unreachable block (ram,0x0001497ca75b) */
/* WARNING: Removing unreachable block (ram,0x0001497ca5d9) */
/* WARNING: Removing unreachable block (ram,0x0001497ca372) */
/* WARNING: Removing unreachable block (ram,0x0001497ca073) */
/* WARNING: Removing unreachable block (ram,0x0001497c9ef1) */
/* WARNING: Removing unreachable block (ram,0x0001497c9d6f) */
/* WARNING: Removing unreachable block (ram,0x0001497c9cae) */
/* WARNING: Removing unreachable block (ram,0x0001497c9e30) */
/* WARNING: Removing unreachable block (ram,0x0001497c9fb2) */
/* WARNING: Removing unreachable block (ram,0x0001497ca2b1) */
/* WARNING: Removing unreachable block (ram,0x0001497ca433) */
/* WARNING: Removing unreachable block (ram,0x0001497ca69a) */
/* WARNING: Removing unreachable block (ram,0x0001497ca901) */
/* WARNING: Removing unreachable block (ram,0x0001497caa83) */
/* WARNING: Removing unreachable block (ram,0x0001497cacea) */
/* WARNING: Removing unreachable block (ram,0x0001497caf3e) */
/* WARNING: Removing unreachable block (ram,0x0001497cb0b2) */

void FUN_1497c9b12(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_1c8 [40];
  longlong local_1a0;
  undefined2 local_198;
  undefined1 local_196;
  undefined4 local_194;
  longlong local_190;
  longlong local_188;
  undefined8 uStack_180;
  longlong local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  ulonglong local_158;
  undefined2 local_150;
  undefined8 local_14c;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 uStack_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  undefined2 local_b0;
  undefined8 local_ac;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_c0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_b0 = 0;
  local_ac = 0xffffffffffffffff;
  local_80 = 0;
  local_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_74 = 0xffffffff00000080;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_e8 = DAT_14cc26420;
  local_b8 = 0x16;
  FUN_1446f470e(&local_190,L"Distributed Wwise Event Interface",1);
  local_1a0 = *(longlong *)(param_1 + 0x10);
  if ((local_1a0 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_198 = 1;
  local_196 = 0;
  local_194 = 0xffffffff;
  local_188 = local_190;
  uStack_180._0_4_ = FUN_144830b78(&uStack_180);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Play Audio",1);
  local_188 = local_1a0;
  uStack_180._0_4_ = FUN_144830b78(&uStack_180,&DAT_14cb420e0);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Is Alive",1);
  local_188 = local_1a0;
  uStack_180._0_4_ = FUN_144830b78(&uStack_180,&DAT_14cb420e0);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Existing Source Handle",1);
  local_188 = local_1a0;
  uStack_180._0_4_ = FUN_144830b78(&uStack_180,&DAT_14cb420d0);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Position WS",1);
  local_188 = local_1a0;
  uStack_180._0_4_ = FUN_144830b78(&uStack_180,&DAT_14cb42130);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Rotation WS",1);
  local_188 = local_1a0;
  uStack_180._0_4_ = FUN_144830b78(&uStack_180,&DAT_14cb42140);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Audio Handle",1);
  local_188 = local_1a0;
  uVar4 = FUN_144830b78(&uStack_180,&DAT_14cb420d0);
  uVar2 = uStack_c8;
  uStack_180 = CONCAT44(uStack_180._4_4_,uVar4);
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_c8;
  uVar3 = (int)uStack_c8 + 1;
  uStack_c8 = CONCAT44(uStack_c8._4_4_,uVar3);
  if (uStack_c8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_d0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_d0 + 8 + lVar5 * 0xc) = (undefined4)uStack_180;
  *(longlong *)(local_d0 + lVar5 * 0xc) = local_188;
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_e8);
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_158 = (ulonglong)((uint)local_158 & 0xfffff800 | 0x30);
  local_150 = 0;
  local_14c = 0xffffffffffffffff;
  local_120 = 0;
  local_118 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_114 = 0xffffffff00000080;
  local_10c = 0;
  local_100 = 0;
  local_f8 = 0;
  FUN_1497cb126(&local_e8,&local_188);
  FUN_148060334(&local_188);
  local_e8 = DAT_14cc26428;
  local_b8 = local_b8 & 0xffffffffffffffd8 | 6;
  FUN_1446f470e(&local_190,L"Distributed Wwise Event Interface",1);
  local_1a0 = *(longlong *)(param_1 + 0x10);
  if ((local_1a0 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_198 = 1;
  local_196 = 0;
  local_194 = 0xffffffff;
  local_188 = local_190;
  uVar4 = FUN_144830b78(&uStack_180);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  uStack_180._0_4_ = uVar4;
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Game Parameter Index",1);
  local_188 = local_1a0;
  uStack_180._0_4_ = FUN_144830b78(&uStack_180,&DAT_14cb420d0);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Game Parameter Value",1);
  local_188 = local_1a0;
  uVar4 = FUN_144830b78(&uStack_180,&DAT_14cb420f0);
  uVar2 = uStack_d8;
  uStack_180 = CONCAT44(uStack_180._4_4_,uVar4);
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_e8);
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_158 = (ulonglong)((uint)local_158 & 0xfffff800 | 0x30);
  local_150 = 0;
  local_14c = 0xffffffffffffffff;
  local_120 = 0;
  local_118 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_114 = 0xffffffff00000080;
  local_10c = 0;
  local_100 = 0;
  local_f8 = 0;
  FUN_1497cb126(&local_e8,&local_188);
  FUN_148060334(&local_188);
  local_e8 = DAT_14cc26430;
  local_b8 = local_b8 & 0xffffffffffffffd8 | 6;
  FUN_1446f470e(&local_190,L"Distributed Wwise Event Interface",1);
  local_1a0 = *(longlong *)(param_1 + 0x10);
  if ((local_1a0 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_198 = 1;
  local_196 = 0;
  local_194 = 0xffffffff;
  local_188 = local_190;
  uVar4 = FUN_144830b78(&uStack_180);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  uStack_180._0_4_ = uVar4;
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Existing Source Handle",1);
  local_188 = local_1a0;
  uStack_180._0_4_ = FUN_144830b78(&uStack_180,&DAT_14cb420d0);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Position WS",1);
  local_188 = local_1a0;
  uVar4 = FUN_144830b78(&uStack_180,&DAT_14cb42130);
  uVar2 = uStack_d8;
  uStack_180 = CONCAT44(uStack_180._4_4_,uVar4);
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_e8);
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_158 = (ulonglong)((uint)local_158 & 0xfffff800 | 0x30);
  local_150 = 0;
  local_14c = 0xffffffffffffffff;
  local_120 = 0;
  local_118 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_114 = 0xffffffff00000080;
  local_10c = 0;
  local_100 = 0;
  local_f8 = 0;
  FUN_1497cb126(&local_e8,&local_188);
  FUN_148060334(&local_188);
  local_e8 = DAT_14cc26438;
  local_b8 = local_b8 & 0xffffffffffffffd8 | 6;
  FUN_1446f470e(&local_190,L"Distributed Wwise Event Interface",1);
  local_1a0 = *(longlong *)(param_1 + 0x10);
  if ((local_1a0 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_198 = 1;
  local_196 = 0;
  local_194 = 0xffffffff;
  local_188 = local_190;
  uVar4 = FUN_144830b78(&uStack_180);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  uStack_180._0_4_ = uVar4;
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Existing Source Handle",1);
  local_188 = local_1a0;
  uStack_180._0_4_ = FUN_144830b78(&uStack_180,&DAT_14cb420d0);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Rotation WS",1);
  local_188 = local_1a0;
  uVar4 = FUN_144830b78(&uStack_180,&DAT_14cb42140);
  uVar2 = uStack_d8;
  uStack_180 = CONCAT44(uStack_180._4_4_,uVar4);
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_e8);
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_158 = (ulonglong)((uint)local_158 & 0xfffff800 | 0x30);
  local_150 = 0;
  local_14c = 0xffffffffffffffff;
  local_120 = 0;
  local_118 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_114 = 0xffffffff00000080;
  local_10c = 0;
  local_100 = 0;
  local_f8 = 0;
  FUN_1497cb126(&local_e8,&local_188);
  FUN_148060334(&local_188);
  local_e8 = DAT_14cc26440;
  local_b8 = local_b8 & 0xffffffffffffffd8 | 6;
  FUN_1446f470e(&local_190,L"Distributed Wwise Event Interface",1);
  local_1a0 = *(longlong *)(param_1 + 0x10);
  if ((local_1a0 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_198 = 1;
  local_196 = 0;
  local_194 = 0xffffffff;
  local_188 = local_190;
  uVar4 = FUN_144830b78(&uStack_180);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  uStack_180._0_4_ = uVar4;
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Existing Source Handle",1);
  local_188 = local_1a0;
  uStack_180._0_4_ = FUN_144830b78(&uStack_180,&DAT_14cb420d0);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Gain Value",1);
  local_188 = local_1a0;
  uVar4 = FUN_144830b78(&uStack_180,&DAT_14cb420f0);
  uVar2 = uStack_d8;
  uStack_180 = CONCAT44(uStack_180._4_4_,uVar4);
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_e8);
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_158 = 0x30;
  local_150 = 0;
  local_14c = 0xffffffffffffffff;
  local_120 = 0;
  local_118 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_114 = 0xffffffff00000080;
  local_10c = 0;
  local_100 = 0;
  local_f8 = 0;
  FUN_1497cb126(&local_e8,&local_188);
  FUN_148060334(&local_188);
  local_e8 = DAT_14cc26448;
  local_b8 = local_b8 & 0xffffffffffffffd8 | 6;
  FUN_1446f470e(&local_190,L"Distributed Wwise Event Interface",1);
  local_1a0 = *(longlong *)(param_1 + 0x10);
  if ((local_1a0 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_198 = 1;
  local_196 = 0;
  local_194 = 0xffffffff;
  local_188 = local_190;
  uVar4 = FUN_144830b78(&uStack_180);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  uStack_180._0_4_ = uVar4;
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Existing Source Handle",1);
  local_188 = local_1a0;
  uStack_180._0_4_ = FUN_144830b78(&uStack_180,&DAT_14cb420d0);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Radius Value",1);
  local_188 = local_1a0;
  uVar4 = FUN_144830b78(&uStack_180,&DAT_14cb420f0);
  uVar2 = uStack_d8;
  uStack_180 = CONCAT44(uStack_180._4_4_,uVar4);
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_e8);
  FUN_148060334(&local_e8);
  if ((local_50 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497cb126 FUN_1497cb126 body=122 status=ok
// SIG undefined FUN_1497cb126(void)

undefined8 * FUN_1497cb126(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *param_1 = *param_2;
  FUN_1497d4a54(param_1 + 1,param_2 + 1);
  if (param_1 != param_2) {
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    param_1[3] = param_2[3];
    param_2[3] = 0;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    param_2[4] = 0;
  }
  uVar1 = *(undefined4 *)(param_2 + 5);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar3 = *(undefined4 *)(param_2 + 6);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar5 = *(undefined4 *)(param_2 + 7);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar7 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar6;
  *(undefined4 *)(param_1 + 8) = uVar7;
  *(undefined4 *)(param_1 + 5) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 6) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar4;
  FUN_1485bf85a(param_1 + 9,param_2 + 9);
  return param_1;
}



// FUNCTION 1497cb26c FUN_1497cb26c body=85 status=ok
// SIG undefined FUN_1497cb26c(void)

undefined4 FUN_1497cb26c(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_1497cb2c2();
  if (cVar1 != '\0') {
    if ((*(char *)(param_2 + 0x78) == '\x01') && (*(char *)(param_1 + 0x78) == '\x01')) {
      if (*(longlong *)(param_2 + 0x7c) == *(longlong *)(param_1 + 0x7c)) {
LAB_1497cb2b0:
        return CONCAT31((int3)((uint)*(int *)(param_2 + 0xb8) >> 8),
                        *(int *)(param_2 + 0xb8) == *(int *)(param_1 + 0xb8));
      }
    }
    else if (*(longlong *)(param_2 + 0x88) == *(longlong *)(param_1 + 0x88)) goto LAB_1497cb2b0;
  }
  return 0;
}



// FUNCTION 1497cb2c2 FUN_1497cb2c2 body=97 status=ok
// SIG undefined FUN_1497cb2c2(void)

byte FUN_1497cb2c2(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_1481192e4();
  if (cVar1 != '\0') {
    if ((*(char *)(param_2 + 0x38) == '\x01') && (*(char *)(param_1 + 0x38) == '\x01')) {
      if (*(longlong *)(param_2 + 0x3c) != *(longlong *)(param_1 + 0x3c)) {
        return 0;
      }
    }
    else if (*(longlong *)(param_2 + 0x48) != *(longlong *)(param_1 + 0x48)) {
      return 0;
    }
    if ((*(float *)(param_2 + 0x68) == *(float *)(param_1 + 0x68)) &&
       (!NAN(*(float *)(param_2 + 0x68)) && !NAN(*(float *)(param_1 + 0x68)))) {
      return -(*(float *)(param_1 + 0x6c) == *(float *)(param_2 + 0x6c)) & 1;
    }
  }
  return 0;
}



// FUNCTION 1497cb324 FUN_1497cb324 body=107 status=ok
// SIG undefined FUN_1497cb324(void)

void FUN_1497cb324(undefined8 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 2) = *param_2;
  lVar1 = *(longlong *)(param_2 + 4);
  puVar2[4] = lVar1;
  puVar2[6] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_2 + 0xc);
    if (*(undefined8 **)(param_2 + 8) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_2 + 8);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 6);
  }
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    puVar3 = (undefined8 *)*param_1;
    *param_1 = puVar2;
    UNLOCK();
    LOCK();
    *puVar3 = puVar2;
    UNLOCK();
  }
  return;
}



// FUNCTION 1497cb390 FUN_1497cb390 body=721 status=ok
// SIG undefined FUN_1497cb390(void)

/* WARNING: Removing unreachable block (ram,0x0001497cb5bc) */
/* WARNING: Removing unreachable block (ram,0x0001497cb5cf) */
/* WARNING: Removing unreachable block (ram,0x0001497cb5d3) */

void FUN_1497cb390(undefined8 param_1,byte *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  byte bVar16;
  undefined ***pppuVar17;
  longlong lVar18;
  byte *pbVar19;
  int iVar20;
  undefined1 auStack_1b8 [40];
  undefined4 *local_190 [2];
  int local_180;
  undefined4 *local_178;
  int local_168;
  undefined4 *local_160;
  int local_150;
  int *local_148;
  undefined8 uStack_140;
  int local_138;
  undefined1 local_128 [8];
  longlong local_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined **local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int local_d8 [4];
  code *local_c8;
  undefined8 uStack_c0;
  undefined ***local_b8;
  undefined8 uStack_b0;
  undefined **local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_1448a4298(local_128);
  local_148 = (int *)0x0;
  uStack_140 = 0;
  local_138 = 0;
  FUN_144a98d08(&local_148,param_2);
  FUN_1448a432c(local_190,param_2);
  *(undefined1 *)(local_120 + 0x139) = 1;
  bVar16 = *param_2;
  lVar18 = *(longlong *)(param_2 + 0x80);
  pbVar19 = (byte *)(lVar18 + 0x40);
  if (bVar16 != 0) {
    pbVar19 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar19) {
    iVar20 = 0;
    do {
      uVar14 = uStack_90;
      uVar13 = local_98;
      uVar12 = uStack_9c;
      iVar11 = iStack_a0;
      ppuVar10 = local_a8;
      uVar9 = uStack_b0;
      uVar8 = uStack_c0;
      piVar1 = local_148 + local_138;
      iVar7 = *local_148;
      puVar2 = local_160 + local_150;
      uVar4 = *local_160;
      puVar3 = local_178 + local_168;
      uVar5 = *local_178;
      puVar15 = local_190[0] + local_180;
      local_178 = puVar3;
      local_160 = puVar2;
      local_148 = piVar1;
      if (0 < iVar7) {
        uVar6 = *local_190[0];
        local_d8[0] = iVar7;
        uStack_60 = CONCAT44(uStack_9c,iStack_a0);
        local_58 = local_98;
        uStack_50 = uStack_90;
        local_68 = local_a8;
        local_78 = 0;
        uStack_70 = uStack_b0;
        local_88 = 0;
        uStack_80 = uStack_c0;
        local_98 = CONCAT44(uVar4,uVar5);
        uStack_90 = CONCAT44(uStack_dc,uStack_e0);
        local_a8 = &PTR_LAB_14be783a0;
        iStack_a0 = iVar7;
        uStack_9c = uVar6;
        uStack_b0 = CONCAT44(uStack_fc,uStack_100);
        local_b8 = (undefined ***)0x0;
        uStack_c0 = CONCAT44(uStack_10c,uStack_110);
        local_c8 = FUN_144618400;
        uStack_80._0_4_ = (undefined4)uVar8;
        uStack_110 = (undefined4)uStack_80;
        uStack_80._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
        uStack_10c = uStack_80._4_4_;
        uStack_70._0_4_ = (undefined4)uVar9;
        uStack_100 = (undefined4)uStack_70;
        uStack_70._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
        uStack_fc = uStack_70._4_4_;
        local_58._0_4_ = (undefined4)uVar13;
        local_e8 = (undefined4)local_58;
        local_58._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
        uStack_e4 = local_58._4_4_;
        uStack_50._0_4_ = (undefined4)uVar14;
        uStack_e0 = (undefined4)uStack_50;
        uStack_50._4_4_ = (undefined4)((ulonglong)uVar14 >> 0x20);
        uStack_dc = uStack_50._4_4_;
        local_f8 = ppuVar10;
        iStack_f0 = iVar11;
        uStack_ec = uVar12;
        uStack_50 = uVar14;
        local_58 = uVar13;
        local_68 = ppuVar10;
        uStack_70 = uVar9;
        local_78 = 0;
        uStack_80 = uVar8;
        local_88 = 0;
        local_a8 = &PTR_LAB_14be783a0;
        local_b8 = (undefined ***)0x0;
        local_c8 = FUN_144618400;
        local_108 = 0;
        local_118 = 0;
        local_190[0] = local_190[0] + local_180;
        FUN_1497cb324(local_120 + 0x70,local_d8);
        if (local_c8 != (code *)0x0) {
          pppuVar17 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar17 = &local_a8;
          }
          (*(code *)(*pppuVar17)[2])();
        }
        bVar16 = *param_2;
        lVar18 = *(longlong *)(param_2 + 0x80);
        puVar15 = local_190[0];
      }
      local_190[0] = puVar15;
      iVar20 = iVar20 + 1;
      pbVar19 = (byte *)(lVar18 + 0x40);
      if ((bVar16 & 1) != 0) {
        pbVar19 = param_2 + 0x3c;
      }
    } while (iVar20 < *(int *)pbVar19);
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497cb662 FUN_1497cb662 body=559 status=ok
// SIG undefined FUN_1497cb662(void)

void FUN_1497cb662(char *param_1,uint param_2,float *param_3)

{
  undefined4 *puVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  int iVar8;
  int *piVar9;
  undefined1 auStack_a8 [32];
  double local_88;
  double local_80;
  double local_78;
  float *local_70;
  int local_68;
  float *local_60;
  int local_58;
  float *local_50;
  int local_48;
  undefined4 *local_40;
  int local_38;
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140126eee(local_30,param_1);
  FUN_140126e42(&local_40,param_1);
  FUN_144a76c20(&local_70,param_1);
  FUN_144a76c20(&local_60,param_1);
  FUN_144a76c20(&local_50,param_1);
  if (((int)param_2 < 0) || (*(int *)(local_28 + 0xe0) <= (int)param_2)) {
    piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar9 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar9) {
      iVar8 = 0;
      do {
        puVar1 = local_40 + local_38;
        *local_40 = 0;
        fVar5 = param_3[1];
        fVar6 = param_3[2];
        pfVar2 = local_70 + local_68;
        *local_70 = *param_3;
        pfVar3 = local_60 + local_58;
        *local_60 = fVar5;
        pfVar4 = local_50 + local_48;
        *local_50 = fVar6;
        iVar8 = iVar8 + 1;
        piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar9 = (int *)(param_1 + 0x3c);
        }
        local_70 = pfVar2;
        local_60 = pfVar3;
        local_50 = pfVar4;
        local_40 = puVar1;
      } while (iVar8 < *piVar9);
    }
  }
  else {
    lVar7 = local_28 + 0x38;
    if (*(longlong *)(local_28 + 0xd8) != 0) {
      lVar7 = *(longlong *)(local_28 + 0xd8);
    }
    FUN_144a7b7fe(lVar7 + (ulonglong)param_2 * 0x28,&local_88);
    piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar9 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar9) {
      iVar8 = 0;
      do {
        puVar1 = local_40 + local_38;
        *local_40 = 0xffffffff;
        pfVar2 = local_70 + local_68;
        *local_70 = (float)local_88;
        pfVar3 = local_60 + local_58;
        *local_60 = (float)local_80;
        pfVar4 = local_50 + local_48;
        *local_50 = (float)local_78;
        iVar8 = iVar8 + 1;
        piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar9 = (int *)(param_1 + 0x3c);
        }
        local_70 = pfVar2;
        local_60 = pfVar3;
        local_50 = pfVar4;
        local_40 = puVar1;
      } while (iVar8 < *piVar9);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497cb892 FUN_1497cb892 body=108 status=ok
// SIG undefined FUN_1497cb892(void)

undefined8 FUN_1497cb892(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1481192e4();
  if ((((cVar1 != '\0') && (*(char *)(param_2 + 0x38) == *(char *)(param_1 + 0x38))) &&
      (*(longlong *)(param_1 + 0x40) == *(longlong *)(param_2 + 0x40))) &&
     ((*(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x48) &&
      (*(int *)(param_2 + 0x68) == *(int *)(param_1 + 0x68))))) {
    cVar1 = FUN_1497d6c22(*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_1 + 0x60));
    if (cVar1 != '\0') {
      uVar2 = FUN_144a7afa6(param_2 + 0x78,param_1 + 0x78);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1497cb8fe FUN_1497cb8fe body=1610 status=ok
// SIG undefined FUN_1497cb8fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1497cb8fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_118 [40];
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 *puStack_d0;
  undefined8 local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined8 local_9c;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar6 = (int)param_2[1] + 5;
  if ((int)param_2[1] < -5) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
    FUN_1497d6e70(param_2);
  }
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  lStack_c0 = 0;
  local_d8 = 0;
  puStack_d0 = (undefined8 *)0x0;
  local_a0 = 0;
  local_9c = 0xffffffffffffffff;
  local_70 = 0;
  local_68 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_64 = 0xffffffff00000080;
  local_5c = 0;
  local_50 = 0;
  local_48 = 0;
  local_a8 = 0x14;
  local_f0 = *(undefined **)(param_1 + 0x10);
  if ((local_f0 != (undefined *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e();
  }
  local_e8 = CONCAT53(local_e8._3_5_,1);
  local_e8 = CONCAT44(0xffffffff,(undefined4)local_e8);
  local_c8 = CONCAT44(local_c8._4_4_,1);
  FUN_146469efe(&puStack_d0,0);
  puVar1 = puStack_d0;
  FUN_1446f470e(&local_e0,L"GbxAttribute",1);
  *puVar1 = local_e0;
  uVar4 = FUN_144830b78(puVar1 + 1,&local_f0);
  uVar3 = local_b8;
  *(undefined4 *)(puVar1 + 1) = uVar4;
  puVar1[2] = 0;
  puVar1[3] = 0;
  lVar7 = (longlong)(int)local_b8;
  uVar5 = (int)local_b8 + 1;
  local_b8 = CONCAT44(local_b8._4_4_,uVar5);
  if (local_b8._4_4_ < uVar5) {
    FUN_14024cd4c(&lStack_c0,uVar3 & 0xffffffff);
  }
  lVar2 = lStack_c0;
  FUN_1446f470e(&local_f0,L"Success",1);
  plVar8 = (longlong *)(lVar2 + lVar7 * 0xc);
  plVar10 = plVar8 + 1;
  *plVar8 = (longlong)local_f0;
  uVar4 = FUN_144830b78(plVar10,&DAT_14cb420e0);
  *(undefined4 *)plVar10 = uVar4;
  local_f0 = &DAT_149e3cc53;
  FUN_1497d6ee0(&local_90,&local_e0,&local_f0);
  iVar6 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
    FUN_148d135c0(param_2,iVar6);
  }
  lVar2 = *param_2;
  lVar11 = (longlong)iVar6 * 0x98;
  lVar7 = lVar2 + lVar11;
  FUN_1481cc21c(lVar7,&local_d8);
  FUN_1446ddc76(&local_f0,"GetFloatAttribute",1);
  *(undefined **)(lVar2 + lVar11) = local_f0;
  local_f0 = DAT_14cb420f0;
  if ((DAT_14cb420f0 != (undefined *)0x0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  plVar8 = (longlong *)(lVar2 + lVar11 + 0x18);
  local_e8 = DAT_14cb420f8;
  iVar6 = *(int *)(lVar7 + 0x20);
  *(uint *)(lVar7 + 0x20) = iVar6 + 1U;
  if (*(uint *)(lVar7 + 0x24) < iVar6 + 1U) {
    FUN_14024cd4c(plVar8,iVar6);
  }
  lVar7 = *plVar8;
  FUN_1446f470e(&local_e0,L"Value",1);
  puVar1 = (undefined8 *)(lVar7 + (longlong)iVar6 * 0xc);
  puVar9 = puVar1 + 1;
  *puVar1 = local_e0;
  uVar4 = FUN_144830b78(puVar9,&local_f0);
  *(undefined4 *)puVar9 = uVar4;
  iVar6 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
    FUN_148d135c0(param_2,iVar6);
  }
  lVar2 = *param_2;
  lVar11 = (longlong)iVar6 * 0x98;
  lVar7 = lVar2 + lVar11;
  FUN_1481cc21c(lVar7,&local_d8);
  FUN_1446ddc76(&local_f0,"GetVec3Attribute",1);
  *(undefined **)(lVar2 + lVar11) = local_f0;
  local_f0 = DAT_14cb42140;
  if ((DAT_14cb42140 != (undefined *)0x0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  plVar8 = (longlong *)(lVar2 + lVar11 + 0x18);
  local_e8 = DAT_14cb42148;
  iVar6 = *(int *)(lVar7 + 0x20);
  *(uint *)(lVar7 + 0x20) = iVar6 + 1U;
  if (*(uint *)(lVar7 + 0x24) < iVar6 + 1U) {
    FUN_14024cd4c(plVar8,iVar6);
  }
  lVar7 = *plVar8;
  FUN_1446f470e(&local_e0,L"Value",1);
  puVar1 = (undefined8 *)(lVar7 + (longlong)iVar6 * 0xc);
  puVar9 = puVar1 + 1;
  *puVar1 = local_e0;
  uVar4 = FUN_144830b78(puVar9,&local_f0);
  *(undefined4 *)puVar9 = uVar4;
  iVar6 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
    FUN_148d135c0(param_2,iVar6);
  }
  lVar2 = *param_2;
  lVar11 = (longlong)iVar6 * 0x98;
  lVar7 = lVar2 + lVar11;
  FUN_1481cc21c(lVar7,&local_d8);
  FUN_1446ddc76(&local_f0,"GetColorAttribute",1);
  *(undefined **)(lVar2 + lVar11) = local_f0;
  local_f0 = DAT_14cb42180;
  if ((DAT_14cb42180 != (undefined *)0x0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  plVar8 = (longlong *)(lVar2 + lVar11 + 0x18);
  local_e8 = DAT_14cb42188;
  iVar6 = *(int *)(lVar7 + 0x20);
  *(uint *)(lVar7 + 0x20) = iVar6 + 1U;
  if (*(uint *)(lVar7 + 0x24) < iVar6 + 1U) {
    FUN_14024cd4c(plVar8,iVar6);
  }
  lVar7 = *plVar8;
  FUN_1446f470e(&local_e0,L"Value",1);
  puVar1 = (undefined8 *)(lVar7 + (longlong)iVar6 * 0xc);
  puVar9 = puVar1 + 1;
  *puVar1 = local_e0;
  uVar4 = FUN_144830b78(puVar9,&local_f0);
  *(undefined4 *)puVar9 = uVar4;
  iVar6 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
    FUN_148d135c0(param_2,iVar6);
  }
  lVar2 = *param_2;
  lVar11 = (longlong)iVar6 * 0x98;
  lVar7 = lVar2 + lVar11;
  FUN_1481cc21c(lVar7,&local_d8);
  FUN_1446ddc76(&local_f0,"GetIntAttribute",1);
  *(undefined **)(lVar2 + lVar11) = local_f0;
  local_f0 = DAT_14cb420d0;
  if ((DAT_14cb420d0 != (undefined *)0x0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  plVar8 = (longlong *)(lVar2 + lVar11 + 0x18);
  local_e8 = _DAT_14cb420d8;
  iVar6 = *(int *)(lVar7 + 0x20);
  *(uint *)(lVar7 + 0x20) = iVar6 + 1U;
  if (*(uint *)(lVar7 + 0x24) < iVar6 + 1U) {
    FUN_14024cd4c(plVar8,iVar6);
  }
  lVar7 = *plVar8;
  FUN_1446f470e(&local_e0,L"Value",1);
  puVar1 = (undefined8 *)(lVar7 + (longlong)iVar6 * 0xc);
  puVar9 = puVar1 + 1;
  *puVar1 = local_e0;
  uVar4 = FUN_144830b78(puVar9,&local_f0);
  *(undefined4 *)puVar9 = uVar4;
  iVar6 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
    FUN_148d135c0(param_2,iVar6);
  }
  lVar2 = *param_2;
  lVar11 = (longlong)iVar6 * 0x98;
  lVar7 = lVar2 + lVar11;
  FUN_1481cc21c(lVar7,&local_d8);
  FUN_1446ddc76(&local_f0,"GetBoolAttribute",1);
  *(undefined **)(lVar2 + lVar11) = local_f0;
  local_f0 = DAT_14cb420e0;
  if ((DAT_14cb420e0 != (undefined *)0x0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  plVar8 = (longlong *)(lVar2 + lVar11 + 0x18);
  local_e8 = DAT_14cb420e8;
  iVar6 = *(int *)(lVar7 + 0x20);
  *(uint *)(lVar7 + 0x20) = iVar6 + 1U;
  if (*(uint *)(lVar7 + 0x24) < iVar6 + 1U) {
    FUN_14024cd4c(plVar8,iVar6);
  }
  lVar7 = *plVar8;
  FUN_1446f470e(&local_e0,L"Value",1);
  puVar1 = (undefined8 *)(lVar7 + (longlong)iVar6 * 0xc);
  puVar9 = puVar1 + 1;
  *puVar1 = local_e0;
  uVar4 = FUN_144830b78(puVar9,&local_f0);
  *(undefined4 *)puVar9 = uVar4;
  FUN_148060334(&local_d8);
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497cbf4a FUN_1497cbf4a body=1069 status=ok
// SIG undefined FUN_1497cbf4a(void)

/* WARNING: Removing unreachable block (ram,0x0001497cc1d0) */
/* WARNING: Removing unreachable block (ram,0x0001497cc122) */
/* WARNING: Removing unreachable block (ram,0x0001497cc27e) */

void FUN_1497cbf4a(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_138 [40];
  longlong local_110;
  undefined2 local_108;
  undefined1 local_106;
  undefined4 local_104;
  undefined8 local_100;
  longlong local_f8;
  undefined4 local_f0 [2];
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined8 uStack_c8;
  longlong local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined8 local_9c;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_b0 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = (undefined8 *)0x0;
  uStack_c8 = 0;
  local_a0 = 0;
  local_9c = 0xffffffffffffffff;
  local_70 = 0;
  local_68 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_64 = 0xffffffff00000080;
  local_5c = 0;
  local_50 = 0;
  local_48 = 0;
  local_d8 = DAT_14cc26450;
  local_a8 = 0x16;
  FUN_1446f470e(&local_100,L"One-Shot Wwise Event Interface",1);
  local_110 = *(longlong *)(param_1 + 0x10);
  if ((local_110 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_108 = 1;
  local_106 = 0;
  local_104 = 0xffffffff;
  local_f8 = local_100;
  local_f0[0] = FUN_144830b78(local_f0);
  local_e8 = 0;
  uStack_e0 = 0;
  uStack_c8._0_4_ = 1;
  FUN_146469efe(&local_d0,0);
  *(undefined4 *)(local_d0 + 1) = local_f0[0];
  *local_d0 = local_f8;
  local_d0[2] = 0;
  local_d0[2] = local_e8;
  local_e8 = 0;
  *(undefined4 *)(local_d0 + 3) = (undefined4)uStack_e0;
  *(undefined4 *)((longlong)local_d0 + 0x1c) = uStack_e0._4_4_;
  FUN_1446f470e(&local_110,L"Play Audio",1);
  local_f8 = local_110;
  local_f0[0] = FUN_144830b78(local_f0,&DAT_14cb420e0);
  iVar1 = (int)uStack_c8;
  local_e8 = 0;
  uStack_e0 = 0;
  lVar4 = (longlong)(int)uStack_c8;
  uVar3 = (int)uStack_c8 + 1;
  uStack_c8 = CONCAT44(uStack_c8._4_4_,uVar3);
  if (uStack_c8._4_4_ < uVar3) {
    FUN_146469efe(&local_d0,iVar1);
  }
  *(undefined4 *)(local_d0 + lVar4 * 4 + 1) = local_f0[0];
  local_d0[lVar4 * 4] = local_f8;
  local_d0[lVar4 * 4 + 2] = 0;
  local_d0[lVar4 * 4 + 2] = local_e8;
  *(undefined4 *)(local_d0 + lVar4 * 4 + 3) = (undefined4)uStack_e0;
  *(undefined4 *)((longlong)local_d0 + lVar4 * 0x20 + 0x1c) = uStack_e0._4_4_;
  uStack_e0 = 0;
  local_e8 = 0;
  FUN_1446f470e(&local_110,L"PositionWS",1);
  local_f8 = local_110;
  local_f0[0] = FUN_144830b78(local_f0,&DAT_14cb42130);
  uVar2 = uStack_c8;
  local_e8 = 0;
  uStack_e0 = 0;
  lVar4 = (longlong)(int)uStack_c8;
  uVar3 = (int)uStack_c8 + 1;
  uStack_c8 = CONCAT44(uStack_c8._4_4_,uVar3);
  if (uStack_c8._4_4_ < uVar3) {
    FUN_146469efe(&local_d0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_d0 + lVar4 * 4 + 1) = local_f0[0];
  local_d0[lVar4 * 4] = local_f8;
  local_d0[lVar4 * 4 + 2] = 0;
  local_d0[lVar4 * 4 + 2] = local_e8;
  *(undefined4 *)(local_d0 + lVar4 * 4 + 3) = (undefined4)uStack_e0;
  *(undefined4 *)((longlong)local_d0 + lVar4 * 0x20 + 0x1c) = uStack_e0._4_4_;
  uStack_e0 = 0;
  local_e8 = 0;
  FUN_1446f470e(&local_110,L"RotationWS",1);
  local_f8 = local_110;
  local_f0[0] = FUN_144830b78(local_f0,&DAT_14cb42140);
  uVar2 = uStack_c8;
  local_e8 = 0;
  uStack_e0 = 0;
  lVar4 = (longlong)(int)uStack_c8;
  uVar3 = (int)uStack_c8 + 1;
  uStack_c8 = CONCAT44(uStack_c8._4_4_,uVar3);
  if (uStack_c8._4_4_ < uVar3) {
    FUN_146469efe(&local_d0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_d0 + lVar4 * 4 + 1) = local_f0[0];
  local_d0[lVar4 * 4] = local_f8;
  local_d0[lVar4 * 4 + 2] = 0;
  local_d0[lVar4 * 4 + 2] = local_e8;
  *(undefined4 *)(local_d0 + lVar4 * 4 + 3) = (undefined4)uStack_e0;
  *(undefined4 *)((longlong)local_d0 + lVar4 * 0x20 + 0x1c) = uStack_e0._4_4_;
  uStack_e0 = 0;
  local_e8 = 0;
  FUN_1446f470e(&local_110,L"Success",1);
  local_f8 = local_110;
  local_f0[0] = FUN_144830b78(local_f0,&DAT_14cb420e0);
  uVar2 = uStack_b8;
  local_e8 = 0;
  uStack_e0 = 0;
  lVar4 = (longlong)(int)uStack_b8;
  uVar3 = (int)uStack_b8 + 1;
  uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar3);
  if (uStack_b8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_c0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_c0 + 8 + lVar4 * 0xc) = local_f0[0];
  *(longlong *)(local_c0 + lVar4 * 0xc) = local_f8;
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_d8);
  FUN_148060334(&local_d8);
  if ((local_40 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497cc378 FUN_1497cc378 body=41 status=ok
// SIG undefined FUN_1497cc378(void)

undefined4 FUN_1497cc378(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_1497cb2c2();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)*(int *)(param_2 + 0x78) >> 8),
                     *(int *)(param_2 + 0x78) == *(int *)(param_1 + 0x78));
  }
  return uVar2;
}



// FUNCTION 1497cc3a2 FUN_1497cc3a2 body=6036 status=ok
// SIG undefined FUN_1497cc3a2(void)

/* WARNING: Removing unreachable block (ram,0x0001497cda0a) */
/* WARNING: Removing unreachable block (ram,0x0001497cd7bd) */
/* WARNING: Removing unreachable block (ram,0x0001497cd63b) */
/* WARNING: Removing unreachable block (ram,0x0001497cd3d4) */
/* WARNING: Removing unreachable block (ram,0x0001497cd16d) */
/* WARNING: Removing unreachable block (ram,0x0001497ccfeb) */
/* WARNING: Removing unreachable block (ram,0x0001497ccd84) */
/* WARNING: Removing unreachable block (ram,0x0001497ccc02) */
/* WARNING: Removing unreachable block (ram,0x0001497cc903) */
/* WARNING: Removing unreachable block (ram,0x0001497cc781) */
/* WARNING: Removing unreachable block (ram,0x0001497cc5ff) */
/* WARNING: Removing unreachable block (ram,0x0001497cc53e) */
/* WARNING: Removing unreachable block (ram,0x0001497cc6c0) */
/* WARNING: Removing unreachable block (ram,0x0001497cc842) */
/* WARNING: Removing unreachable block (ram,0x0001497cc9c4) */
/* WARNING: Removing unreachable block (ram,0x0001497cccc3) */
/* WARNING: Removing unreachable block (ram,0x0001497cce45) */
/* WARNING: Removing unreachable block (ram,0x0001497cd0ac) */
/* WARNING: Removing unreachable block (ram,0x0001497cd313) */
/* WARNING: Removing unreachable block (ram,0x0001497cd495) */
/* WARNING: Removing unreachable block (ram,0x0001497cd6fc) */
/* WARNING: Removing unreachable block (ram,0x0001497cd950) */
/* WARNING: Removing unreachable block (ram,0x0001497cdac4) */

void FUN_1497cc3a2(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_1c8 [40];
  longlong local_1a0;
  undefined2 local_198;
  undefined1 local_196;
  undefined4 local_194;
  longlong local_190;
  longlong local_188;
  undefined8 uStack_180;
  longlong local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  ulonglong local_158;
  undefined2 local_150;
  undefined8 local_14c;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 uStack_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  undefined2 local_b0;
  undefined8 local_ac;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_c0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_b0 = 0;
  local_ac = 0xffffffffffffffff;
  local_80 = 0;
  local_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_74 = 0xffffffff00000080;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_e8 = DAT_14cc26458;
  local_b8 = 0x16;
  FUN_1446f470e(&local_190,L"Persistent Wwise Event Interface",1);
  local_1a0 = *(longlong *)(param_1 + 0x10);
  if ((local_1a0 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_198 = 1;
  local_196 = 0;
  local_194 = 0xffffffff;
  local_188 = local_190;
  uStack_180._0_4_ = FUN_144830b78(&uStack_180);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Play Audio",1);
  local_188 = local_1a0;
  uStack_180._0_4_ = FUN_144830b78(&uStack_180,&DAT_14cb420e0);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Is Alive",1);
  local_188 = local_1a0;
  uStack_180._0_4_ = FUN_144830b78(&uStack_180,&DAT_14cb420e0);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Existing Wwise Event Handle",1);
  local_188 = local_1a0;
  uStack_180._0_4_ = FUN_144830b78(&uStack_180,&DAT_14cb420d0);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Position WS",1);
  local_188 = local_1a0;
  uStack_180._0_4_ = FUN_144830b78(&uStack_180,&DAT_14cb42130);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Rotation WS",1);
  local_188 = local_1a0;
  uStack_180._0_4_ = FUN_144830b78(&uStack_180,&DAT_14cb42140);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Fade Out Time",1);
  local_188 = local_1a0;
  uStack_180._0_4_ = FUN_144830b78(&uStack_180,&DAT_14cb420f0);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Audio Handle",1);
  local_188 = local_1a0;
  uVar4 = FUN_144830b78(&uStack_180,&DAT_14cb420d0);
  uVar2 = uStack_c8;
  uStack_180 = CONCAT44(uStack_180._4_4_,uVar4);
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_c8;
  uVar3 = (int)uStack_c8 + 1;
  uStack_c8 = CONCAT44(uStack_c8._4_4_,uVar3);
  if (uStack_c8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_d0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_d0 + 8 + lVar5 * 0xc) = (undefined4)uStack_180;
  *(longlong *)(local_d0 + lVar5 * 0xc) = local_188;
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_e8);
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_158 = (ulonglong)((uint)local_158 & 0xfffff800 | 0x30);
  local_150 = 0;
  local_14c = 0xffffffffffffffff;
  local_120 = 0;
  local_118 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_114 = 0xffffffff00000080;
  local_10c = 0;
  local_100 = 0;
  local_f8 = 0;
  FUN_1497cb126(&local_e8,&local_188);
  FUN_148060334(&local_188);
  local_e8 = DAT_14cc26460;
  local_b8 = local_b8 & 0xffffffffffffffd8 | 6;
  FUN_1446f470e(&local_190,L"Persistent Wwise Event Interface",1);
  local_1a0 = *(longlong *)(param_1 + 0x10);
  if ((local_1a0 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_198 = 1;
  local_196 = 0;
  local_194 = 0xffffffff;
  local_188 = local_190;
  uVar4 = FUN_144830b78(&uStack_180);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  uStack_180._0_4_ = uVar4;
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Existing Wwise Event Handle",1);
  local_188 = local_1a0;
  uStack_180._0_4_ = FUN_144830b78(&uStack_180,&DAT_14cb420d0);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Game Parameter Index",1);
  local_188 = local_1a0;
  uStack_180._0_4_ = FUN_144830b78(&uStack_180,&DAT_14cb420d0);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Game Parameter Value",1);
  local_188 = local_1a0;
  uVar4 = FUN_144830b78(&uStack_180,&DAT_14cb420f0);
  uVar2 = uStack_d8;
  uStack_180 = CONCAT44(uStack_180._4_4_,uVar4);
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_e8);
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_158 = (ulonglong)((uint)local_158 & 0xfffff800 | 0x30);
  local_150 = 0;
  local_14c = 0xffffffffffffffff;
  local_120 = 0;
  local_118 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_114 = 0xffffffff00000080;
  local_10c = 0;
  local_100 = 0;
  local_f8 = 0;
  FUN_1497cb126(&local_e8,&local_188);
  FUN_148060334(&local_188);
  local_e8 = DAT_14cc26468;
  local_b8 = local_b8 & 0xffffffffffffffd8 | 6;
  FUN_1446f470e(&local_190,L"Persistent Wwise Event Interface",1);
  local_1a0 = *(longlong *)(param_1 + 0x10);
  if ((local_1a0 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_198 = 1;
  local_196 = 0;
  local_194 = 0xffffffff;
  local_188 = local_190;
  uVar4 = FUN_144830b78(&uStack_180);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  uStack_180._0_4_ = uVar4;
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Existing Wwise Event Handle",1);
  local_188 = local_1a0;
  uStack_180._0_4_ = FUN_144830b78(&uStack_180,&DAT_14cb420d0);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Position WS",1);
  local_188 = local_1a0;
  uVar4 = FUN_144830b78(&uStack_180,&DAT_14cb42130);
  uVar2 = uStack_d8;
  uStack_180 = CONCAT44(uStack_180._4_4_,uVar4);
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_e8);
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_158 = (ulonglong)((uint)local_158 & 0xfffff800 | 0x30);
  local_150 = 0;
  local_14c = 0xffffffffffffffff;
  local_120 = 0;
  local_118 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_114 = 0xffffffff00000080;
  local_10c = 0;
  local_100 = 0;
  local_f8 = 0;
  FUN_1497cb126(&local_e8,&local_188);
  FUN_148060334(&local_188);
  local_e8 = DAT_14cc26470;
  local_b8 = local_b8 & 0xffffffffffffffd8 | 6;
  FUN_1446f470e(&local_190,L"Persistent Wwise Event Interface",1);
  local_1a0 = *(longlong *)(param_1 + 0x10);
  if ((local_1a0 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_198 = 1;
  local_196 = 0;
  local_194 = 0xffffffff;
  local_188 = local_190;
  uVar4 = FUN_144830b78(&uStack_180);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  uStack_180._0_4_ = uVar4;
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Existing Wwise Event Handle",1);
  local_188 = local_1a0;
  uStack_180._0_4_ = FUN_144830b78(&uStack_180,&DAT_14cb420d0);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Rotation WS",1);
  local_188 = local_1a0;
  uVar4 = FUN_144830b78(&uStack_180,&DAT_14cb42140);
  uVar2 = uStack_d8;
  uStack_180 = CONCAT44(uStack_180._4_4_,uVar4);
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_e8);
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_158 = (ulonglong)((uint)local_158 & 0xfffff800 | 0x30);
  local_150 = 0;
  local_14c = 0xffffffffffffffff;
  local_120 = 0;
  local_118 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_114 = 0xffffffff00000080;
  local_10c = 0;
  local_100 = 0;
  local_f8 = 0;
  FUN_1497cb126(&local_e8,&local_188);
  FUN_148060334(&local_188);
  local_e8 = DAT_14cc26478;
  local_b8 = local_b8 & 0xffffffffffffffd8 | 6;
  FUN_1446f470e(&local_190,L"Persistent Wwise Event Interface",1);
  local_1a0 = *(longlong *)(param_1 + 0x10);
  if ((local_1a0 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_198 = 1;
  local_196 = 0;
  local_194 = 0xffffffff;
  local_188 = local_190;
  uVar4 = FUN_144830b78(&uStack_180);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  uStack_180._0_4_ = uVar4;
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Existing Wwise Event Handle",1);
  local_188 = local_1a0;
  uStack_180._0_4_ = FUN_144830b78(&uStack_180,&DAT_14cb420d0);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Gain Value",1);
  local_188 = local_1a0;
  uVar4 = FUN_144830b78(&uStack_180,&DAT_14cb420f0);
  uVar2 = uStack_d8;
  uStack_180 = CONCAT44(uStack_180._4_4_,uVar4);
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_e8);
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_158 = 0x30;
  local_150 = 0;
  local_14c = 0xffffffffffffffff;
  local_120 = 0;
  local_118 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_114 = 0xffffffff00000080;
  local_10c = 0;
  local_100 = 0;
  local_f8 = 0;
  FUN_1497cb126(&local_e8,&local_188);
  FUN_148060334(&local_188);
  local_e8 = DAT_14cc26480;
  local_b8 = local_b8 & 0xffffffffffffffd8 | 6;
  FUN_1446f470e(&local_190,L"Persistent Wwise Event Interface",1);
  local_1a0 = *(longlong *)(param_1 + 0x10);
  if ((local_1a0 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_198 = 1;
  local_196 = 0;
  local_194 = 0xffffffff;
  local_188 = local_190;
  uVar4 = FUN_144830b78(&uStack_180);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  uStack_180._0_4_ = uVar4;
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Existing Wwise Event Handle",1);
  local_188 = local_1a0;
  uStack_180._0_4_ = FUN_144830b78(&uStack_180,&DAT_14cb420d0);
  uVar2 = uStack_d8;
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  FUN_1446f470e(&local_1a0,L"Radius Value",1);
  local_188 = local_1a0;
  uVar4 = FUN_144830b78(&uStack_180,&DAT_14cb420f0);
  uVar2 = uStack_d8;
  uStack_180 = CONCAT44(uStack_180._4_4_,uVar4);
  local_178 = 0;
  uStack_170 = 0;
  lVar5 = (longlong)(int)uStack_d8;
  uVar3 = (int)uStack_d8 + 1;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar3);
  if (uStack_d8._4_4_ < uVar3) {
    FUN_146469efe(&local_e0,uVar2 & 0xffffffff);
  }
  lVar5 = lVar5 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar5) = (undefined4)uStack_180;
  *(longlong *)(local_e0 + lVar5) = local_188;
  *(undefined8 *)(local_e0 + 0x10 + lVar5) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar5) = local_178;
  *(undefined4 *)(local_e0 + 0x18 + lVar5) = (undefined4)uStack_170;
  *(undefined4 *)(local_e0 + 0x1c + lVar5) = uStack_170._4_4_;
  uStack_170 = 0;
  local_178 = 0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_e8);
  FUN_148060334(&local_e8);
  if ((local_50 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497cdd9c FUN_1497cdd9c body=47 status=ok
// SIG undefined FUN_1497cdd9c(void)

undefined4 FUN_1497cdd9c(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_1497cb2c2();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)*(int *)(param_2 + 0x88) >> 8),
                     *(int *)(param_2 + 0x88) == *(int *)(param_1 + 0x88));
  }
  return uVar2;
}



// FUNCTION 1497cddcc FUN_1497cddcc body=715 status=ok
// SIG undefined FUN_1497cddcc(void)

/* WARNING: Removing unreachable block (ram,0x0001497cdff2) */
/* WARNING: Removing unreachable block (ram,0x0001497ce005) */
/* WARNING: Removing unreachable block (ram,0x0001497ce009) */

void FUN_1497cddcc(undefined8 param_1,byte *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  byte bVar14;
  undefined ***pppuVar15;
  longlong lVar16;
  byte *pbVar17;
  int iVar18;
  undefined1 auStack_1b8 [40];
  undefined4 *local_190 [2];
  int local_180;
  undefined4 *local_178;
  int local_168;
  undefined4 *local_160;
  int local_150;
  int *local_148;
  undefined8 uStack_140;
  int local_138;
  undefined1 local_128 [8];
  longlong local_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined **local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int local_d8 [4];
  code *local_c8;
  undefined8 uStack_c0;
  undefined ***local_b8;
  undefined8 uStack_b0;
  undefined **local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_140a990a6(local_128);
  local_148 = (int *)0x0;
  uStack_140 = 0;
  local_138 = 0;
  FUN_144a98d08(&local_148,param_2);
  FUN_1448a432c(local_190,param_2);
  *(undefined1 *)(local_120 + 0xec) = 1;
  bVar14 = *param_2;
  lVar16 = *(longlong *)(param_2 + 0x80);
  pbVar17 = (byte *)(lVar16 + 0x40);
  if (bVar14 != 0) {
    pbVar17 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar17) {
    iVar18 = 0;
    do {
      uVar12 = uStack_90;
      uVar11 = local_98;
      uVar10 = uStack_a0;
      ppuVar9 = local_a8;
      uVar8 = uStack_b0;
      uVar7 = uStack_c0;
      piVar1 = local_148 + local_138;
      iVar6 = *local_148;
      puVar2 = local_160 + local_150;
      uVar4 = *local_160;
      puVar3 = local_178 + local_168;
      uVar5 = *local_178;
      puVar13 = local_190[0] + local_180;
      local_178 = puVar3;
      local_160 = puVar2;
      local_148 = piVar1;
      if (0 < iVar6) {
        local_d8[0] = iVar6;
        local_58 = local_98;
        uStack_50 = uStack_90;
        local_68 = local_a8;
        uStack_60 = uStack_a0;
        local_78 = 0;
        uStack_70 = uStack_b0;
        local_88 = 0;
        uStack_80 = uStack_c0;
        local_98 = CONCAT44(uStack_e4,uVar4);
        uStack_90 = CONCAT44(uStack_dc,uStack_e0);
        local_a8 = &PTR_LAB_14be786f0;
        uStack_a0 = CONCAT44(uVar5,*local_190[0]);
        uStack_b0 = CONCAT44(uStack_fc,uStack_100);
        local_b8 = (undefined ***)0x0;
        local_c8 = FUN_144619c5e;
        uStack_c0 = CONCAT44(uStack_10c,uStack_110);
        uStack_80._0_4_ = (undefined4)uVar7;
        uStack_110 = (undefined4)uStack_80;
        uStack_80._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
        uStack_10c = uStack_80._4_4_;
        uStack_70._0_4_ = (undefined4)uVar8;
        uStack_100 = (undefined4)uStack_70;
        uStack_70._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
        uStack_fc = uStack_70._4_4_;
        uStack_60._0_4_ = (undefined4)uVar10;
        uStack_f0 = (undefined4)uStack_60;
        uStack_60._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
        uStack_ec = uStack_60._4_4_;
        local_58._0_4_ = (undefined4)uVar11;
        local_e8 = (undefined4)local_58;
        local_58._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
        uStack_e4 = local_58._4_4_;
        uStack_50._0_4_ = (undefined4)uVar12;
        uStack_e0 = (undefined4)uStack_50;
        uStack_50._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
        uStack_dc = uStack_50._4_4_;
        local_f8 = ppuVar9;
        uStack_50 = uVar12;
        local_58 = uVar11;
        uStack_60 = uVar10;
        local_68 = ppuVar9;
        uStack_70 = uVar8;
        local_78 = 0;
        uStack_80 = uVar7;
        local_88 = 0;
        local_a8 = &PTR_LAB_14be786f0;
        local_b8 = (undefined ***)0x0;
        local_c8 = FUN_144619c5e;
        local_108 = 0;
        local_118 = 0;
        local_190[0] = local_190[0] + local_180;
        FUN_1408164d2(local_120 + 0x70,local_d8);
        if (local_c8 != (code *)0x0) {
          pppuVar15 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar15 = &local_a8;
          }
          (*(code *)(*pppuVar15)[2])();
        }
        bVar14 = *param_2;
        lVar16 = *(longlong *)(param_2 + 0x80);
        puVar13 = local_190[0];
      }
      local_190[0] = puVar13;
      iVar18 = iVar18 + 1;
      pbVar17 = (byte *)(lVar16 + 0x40);
      if ((bVar14 & 1) != 0) {
        pbVar17 = param_2 + 0x3c;
      }
    } while (iVar18 < *(int *)pbVar17);
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497ce098 FUN_1497ce098 body=639 status=ok
// SIG undefined FUN_1497ce098(void)

/* WARNING: Removing unreachable block (ram,0x0001497ce26d) */
/* WARNING: Removing unreachable block (ram,0x0001497ce280) */
/* WARNING: Removing unreachable block (ram,0x0001497ce284) */

void FUN_1497ce098(undefined8 param_1,byte *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  byte bVar13;
  undefined ***pppuVar14;
  longlong lVar15;
  byte *pbVar16;
  int iVar17;
  undefined1 auStack_1a8 [32];
  undefined4 *local_188;
  undefined8 uStack_180;
  int local_178;
  int *local_168;
  undefined8 uStack_160;
  int local_158;
  undefined1 local_148 [8];
  longlong local_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined **local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int local_f8 [4];
  code *local_e8;
  undefined8 uStack_e0;
  undefined ***local_d8;
  undefined8 uStack_d0;
  undefined **local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined **local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_140a990a6(local_148);
  local_158 = 0;
  local_168 = (int *)0x0;
  uStack_160 = 0;
  FUN_144a98d08(&local_168,param_2);
  local_178 = 0;
  local_188 = (undefined4 *)0x0;
  uStack_180 = 0;
  FUN_144a98dce(&local_188,param_2);
  *(undefined1 *)(local_140 + 0xec) = 1;
  bVar13 = *param_2;
  lVar15 = *(longlong *)(param_2 + 0x80);
  pbVar16 = (byte *)(lVar15 + 0x40);
  if (bVar13 != 0) {
    pbVar16 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar16) {
    iVar17 = 0;
    do {
      uVar11 = uStack_b0;
      uVar10 = local_b8;
      uVar9 = uStack_bc;
      uVar8 = uStack_c0;
      ppuVar7 = local_c8;
      uVar6 = uStack_d0;
      uVar5 = uStack_e0;
      uVar4 = uStack_10c;
      piVar1 = local_168 + local_158;
      iVar2 = *local_168;
      puVar12 = local_188 + local_178;
      local_168 = piVar1;
      if (0 < iVar2) {
        uVar3 = *local_188;
        local_f8[0] = iVar2;
        uStack_80 = CONCAT44(uStack_bc,uStack_c0);
        local_78 = local_b8;
        uStack_70 = uStack_b0;
        local_88 = local_c8;
        local_98 = 0;
        uStack_90 = uStack_d0;
        local_a8 = 0;
        uStack_a0 = uStack_e0;
        local_b8 = CONCAT44(uStack_104,local_108);
        uStack_b0 = CONCAT44(uStack_fc,uStack_100);
        local_c8 = &PTR_LAB_14be78710;
        uStack_c0 = uVar3;
        uStack_bc = uStack_10c;
        uStack_d0 = CONCAT44(uStack_11c,uStack_120);
        local_d8 = (undefined ***)0x0;
        uStack_e0 = CONCAT44(uStack_12c,uStack_130);
        local_e8 = FUN_144619f5e;
        uStack_a0._0_4_ = (undefined4)uVar5;
        uStack_130 = (undefined4)uStack_a0;
        uStack_a0._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
        uStack_12c = uStack_a0._4_4_;
        uStack_90._0_4_ = (undefined4)uVar6;
        uStack_120 = (undefined4)uStack_90;
        uStack_90._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
        uStack_11c = uStack_90._4_4_;
        local_78._0_4_ = (undefined4)uVar10;
        local_108 = (undefined4)local_78;
        local_78._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
        uStack_104 = local_78._4_4_;
        uStack_70._0_4_ = (undefined4)uVar11;
        uStack_100 = (undefined4)uStack_70;
        uStack_70._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
        uStack_fc = uStack_70._4_4_;
        local_118 = ppuVar7;
        uStack_110 = uVar8;
        uStack_10c = uVar9;
        uStack_70 = uVar11;
        local_78 = uVar10;
        local_88 = ppuVar7;
        uStack_90 = uVar6;
        local_98 = 0;
        uStack_a0 = uVar5;
        local_a8 = 0;
        uStack_bc = uVar4;
        local_c8 = &PTR_LAB_14be78710;
        local_d8 = (undefined ***)0x0;
        local_e8 = FUN_144619f5e;
        local_128 = 0;
        local_138 = 0;
        local_188 = local_188 + local_178;
        FUN_1408164d2(local_140 + 0x70,local_f8);
        if (local_e8 != (code *)0x0) {
          pppuVar14 = local_d8;
          if (local_d8 == (undefined ***)0x0) {
            pppuVar14 = &local_c8;
          }
          (*(code *)(*pppuVar14)[2])();
        }
        bVar13 = *param_2;
        lVar15 = *(longlong *)(param_2 + 0x80);
        puVar12 = local_188;
      }
      local_188 = puVar12;
      iVar17 = iVar17 + 1;
      pbVar16 = (byte *)(lVar15 + 0x40);
      if ((bVar13 & 1) != 0) {
        pbVar16 = param_2 + 0x3c;
      }
    } while (iVar17 < *(int *)pbVar16);
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497ce318 FUN_1497ce318 body=639 status=ok
// SIG undefined FUN_1497ce318(void)

/* WARNING: Removing unreachable block (ram,0x0001497ce4ed) */
/* WARNING: Removing unreachable block (ram,0x0001497ce500) */
/* WARNING: Removing unreachable block (ram,0x0001497ce504) */

void FUN_1497ce318(undefined8 param_1,byte *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  byte bVar13;
  undefined ***pppuVar14;
  longlong lVar15;
  byte *pbVar16;
  int iVar17;
  undefined1 auStack_1a8 [32];
  undefined4 *local_188;
  undefined8 uStack_180;
  int local_178;
  int *local_168;
  undefined8 uStack_160;
  int local_158;
  undefined1 local_148 [8];
  longlong local_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined **local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int local_f8 [4];
  code *local_e8;
  undefined8 uStack_e0;
  undefined ***local_d8;
  undefined8 uStack_d0;
  undefined **local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined **local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_140a990a6(local_148);
  local_158 = 0;
  local_168 = (int *)0x0;
  uStack_160 = 0;
  FUN_144a98d08(&local_168,param_2);
  local_178 = 0;
  local_188 = (undefined4 *)0x0;
  uStack_180 = 0;
  FUN_144a98dce(&local_188,param_2);
  *(undefined1 *)(local_140 + 0xec) = 1;
  bVar13 = *param_2;
  lVar15 = *(longlong *)(param_2 + 0x80);
  pbVar16 = (byte *)(lVar15 + 0x40);
  if (bVar13 != 0) {
    pbVar16 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar16) {
    iVar17 = 0;
    do {
      uVar11 = uStack_b0;
      uVar10 = local_b8;
      uVar9 = uStack_bc;
      uVar8 = uStack_c0;
      ppuVar7 = local_c8;
      uVar6 = uStack_d0;
      uVar5 = uStack_e0;
      uVar4 = uStack_10c;
      piVar1 = local_168 + local_158;
      iVar2 = *local_168;
      puVar12 = local_188 + local_178;
      local_168 = piVar1;
      if (0 < iVar2) {
        uVar3 = *local_188;
        local_f8[0] = iVar2;
        uStack_80 = CONCAT44(uStack_bc,uStack_c0);
        local_78 = local_b8;
        uStack_70 = uStack_b0;
        local_88 = local_c8;
        local_98 = 0;
        uStack_90 = uStack_d0;
        local_a8 = 0;
        uStack_a0 = uStack_e0;
        local_b8 = CONCAT44(uStack_104,local_108);
        uStack_b0 = CONCAT44(uStack_fc,uStack_100);
        local_c8 = &PTR_LAB_14be78730;
        uStack_c0 = uVar3;
        uStack_bc = uStack_10c;
        uStack_d0 = CONCAT44(uStack_11c,uStack_120);
        local_d8 = (undefined ***)0x0;
        uStack_e0 = CONCAT44(uStack_12c,uStack_130);
        local_e8 = FUN_14461a250;
        uStack_a0._0_4_ = (undefined4)uVar5;
        uStack_130 = (undefined4)uStack_a0;
        uStack_a0._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
        uStack_12c = uStack_a0._4_4_;
        uStack_90._0_4_ = (undefined4)uVar6;
        uStack_120 = (undefined4)uStack_90;
        uStack_90._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
        uStack_11c = uStack_90._4_4_;
        local_78._0_4_ = (undefined4)uVar10;
        local_108 = (undefined4)local_78;
        local_78._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
        uStack_104 = local_78._4_4_;
        uStack_70._0_4_ = (undefined4)uVar11;
        uStack_100 = (undefined4)uStack_70;
        uStack_70._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
        uStack_fc = uStack_70._4_4_;
        local_118 = ppuVar7;
        uStack_110 = uVar8;
        uStack_10c = uVar9;
        uStack_70 = uVar11;
        local_78 = uVar10;
        local_88 = ppuVar7;
        uStack_90 = uVar6;
        local_98 = 0;
        uStack_a0 = uVar5;
        local_a8 = 0;
        uStack_bc = uVar4;
        local_c8 = &PTR_LAB_14be78730;
        local_d8 = (undefined ***)0x0;
        local_e8 = FUN_14461a250;
        local_128 = 0;
        local_138 = 0;
        local_188 = local_188 + local_178;
        FUN_1408164d2(local_140 + 0x70,local_f8);
        if (local_e8 != (code *)0x0) {
          pppuVar14 = local_d8;
          if (local_d8 == (undefined ***)0x0) {
            pppuVar14 = &local_c8;
          }
          (*(code *)(*pppuVar14)[2])();
        }
        bVar13 = *param_2;
        lVar15 = *(longlong *)(param_2 + 0x80);
        puVar12 = local_188;
      }
      local_188 = puVar12;
      iVar17 = iVar17 + 1;
      pbVar16 = (byte *)(lVar15 + 0x40);
      if ((bVar13 & 1) != 0) {
        pbVar16 = param_2 + 0x3c;
      }
    } while (iVar17 < *(int *)pbVar16);
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497ce598 FUN_1497ce598 body=327 status=ok
// SIG undefined FUN_1497ce598(void)

undefined8 FUN_1497ce598(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140eab6f8();
  lVar3 = FUN_14479d2ce(param_2);
  if (lVar3 != 0) {
    lVar4 = FUN_1411674f6();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      local_48 = 0;
      FUN_14485c47a(&local_48,lVar3);
      uVar1 = local_48;
      local_40 = (undefined8 *)0x0;
      local_38 = 0;
      FUN_1446efa72(&local_40,0,3,0x10);
      puVar2 = local_40;
      local_38 = 3;
      *local_40 = &PTR_LAB_149e020b0;
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
      *local_40 = &PTR_FUN_14be78750;
      local_40[3] = 0;
      FUN_14485c47a(local_40 + 3,param_1);
      puVar2[4] = param_1;
      puVar2[5] = uVar1;
      FUN_1448b6402(lVar3 + 0x6c8,local_50,&local_40);
      FUN_1449db362(&local_40);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497ce6e0 FUN_1497ce6e0 body=97 status=ok
// SIG undefined FUN_1497ce6e0(void)

void FUN_1497ce6e0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14479d2ce(param_2);
  if (lVar1 != 0) {
    lVar2 = FUN_1411674f6();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_140457ffc(lVar1 + 0x6c8,param_1);
    }
  }
  FUN_140c20282(param_1);
  return;
}



// FUNCTION 1497ce742 FUN_1497ce742 body=172 status=ok
// SIG undefined FUN_1497ce742(void)

float * FUN_1497ce742(undefined8 param_1,float *param_2,longlong param_3,uint param_4)

{
  double dVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  plVar3 = (longlong *)FUN_14479d2ce(*(undefined8 *)(param_3 + 8));
  if (plVar3 != (longlong *)0x0) {
    lVar4 = FUN_1411674f6();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
        (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)) && (lVar4 = (**(code **)(*plVar3 + 0xa98))(plVar3), lVar4 != 0)) {
      lVar4 = *(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x98) + 0x10) + (ulonglong)(param_4 >> 9) * 8);
      uVar5 = (ulonglong)(param_4 & 0x1ff);
      dVar1 = *(double *)(lVar4 + 0x10 + uVar5 * 0x18);
      dVar2 = *(double *)(lVar4 + 8 + uVar5 * 0x18);
      *param_2 = (float)*(double *)(lVar4 + uVar5 * 0x18);
      param_2[1] = (float)dVar2;
      param_2[2] = (float)dVar1;
      return param_2;
    }
  }
  param_2[2] = DAT_14c846338;
  *(undefined8 *)param_2 = DAT_14c846330;
  return param_2;
}



// FUNCTION 1497ce7ee FUN_1497ce7ee body=185 status=ok
// SIG undefined FUN_1497ce7ee(void)

void FUN_1497ce7ee(undefined8 param_1,longlong param_2,uint param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *param_6 = 0;
  *param_5 = 0;
  *param_4 = 0;
  plVar2 = (longlong *)FUN_14479d2ce(*(undefined8 *)(param_2 + 8));
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_1411674f6();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      lVar3 = (**(code **)(*plVar2 + 0xa98))(plVar2);
      if (lVar3 != 0) {
        iVar1 = FUN_1484b5146(lVar3);
        if ((int)param_3 < iVar1) {
          lVar3 = *(longlong *)
                   (*(longlong *)(*(longlong *)(lVar3 + 0x98) + 0x130) +
                   (ulonglong)(param_3 >> 9) * 8);
          uVar4 = (ulonglong)(param_3 & 0x1ff);
          *param_4 = *(undefined4 *)(lVar3 + uVar4 * 0xc);
          *param_5 = *(undefined4 *)(lVar3 + 4 + uVar4 * 0xc);
          *param_6 = *(undefined4 *)(lVar3 + 8 + uVar4 * 0xc);
        }
      }
    }
  }
  return;
}



// FUNCTION 1497ce8ae FUN_1497ce8ae body=108 status=ok
// SIG undefined FUN_1497ce8ae(void)

void FUN_1497ce8ae(undefined8 param_1,longlong *param_2,undefined4 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  
  *param_3 = 0;
  *param_4 = 0;
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_1411674f6();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar1 = (**(code **)(*param_2 + 0xa98))(param_2);
      if (lVar1 != 0) {
        lVar1 = *(longlong *)(lVar1 + 0x98);
        *param_4 = *(undefined4 *)(lVar1 + 0x170);
        *param_3 = *(undefined4 *)(lVar1 + 0x50);
      }
    }
  }
  return;
}



// FUNCTION 1497ce91a FUN_1497ce91a body=517 status=ok
// SIG undefined FUN_1497ce91a(void)

void FUN_1497ce91a(undefined8 param_1,longlong *param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  
  local_48[4] = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != (longlong *)0x0) {
    lVar4 = FUN_1411674f6();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      lVar4 = (**(code **)(*param_2 + 0xa98))(param_2);
      if (lVar4 != 0) {
        lVar6 = *(longlong *)(lVar4 + 0x98);
        uVar9 = *(int *)(lVar6 + 0x128) * 0x200 + *(int *)(lVar6 + 300);
        if (0 < (int)uVar9) {
          local_48[2] = 0;
          local_48[3] = 0;
          FUN_14017c08a(local_48 + 2,uVar9 * 3,1);
          lVar5 = 0;
          uVar7 = 0;
          do {
            uVar8 = uVar7 >> 9 & 0x7fffff;
            lVar3 = (ulonglong)(((uint)uVar7 & 0x1ff) << 2) * 3;
            *(undefined4 *)(local_48[2] + lVar5) =
                 *(undefined4 *)(*(longlong *)(*(longlong *)(lVar6 + 0x130) + uVar8 * 8) + lVar3);
            *(undefined4 *)(local_48[2] + 4 + lVar5) =
                 *(undefined4 *)
                  (*(longlong *)(*(longlong *)(lVar6 + 0x130) + uVar8 * 8) + 4 + lVar3);
            *(undefined4 *)(local_48[2] + 8 + lVar5) =
                 *(undefined4 *)
                  (*(longlong *)(*(longlong *)(lVar6 + 0x130) + uVar8 * 8) + 8 + lVar3);
            uVar7 = uVar7 + 1;
            lVar5 = lVar5 + 0xc;
          } while (uVar9 != uVar7);
          *(undefined1 *)(param_3 + 0x70) = 1;
          FUN_140905aa4(param_3 + 0x40,local_48 + 2,2);
          lVar4 = *(longlong *)(lVar4 + 0x98);
          uVar9 = *(int *)(lVar4 + 8) * 0x200 + *(int *)(lVar4 + 0xc);
          local_48[0] = 0;
          local_48[1] = 0;
          FUN_146bfab7c(local_48,uVar9,1);
          if (0 < (int)uVar9) {
            lVar6 = 8;
            uVar7 = 0;
            do {
              lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (uVar7 >> 9 & 0x7fffff) * 8);
              uVar8 = (ulonglong)((uint)uVar7 & 0x1ff);
              dVar1 = *(double *)(lVar5 + 0x10 + uVar8 * 0x18);
              dVar2 = *(double *)(lVar5 + 8 + uVar8 * 0x18);
              *(float *)(local_48[0] + -8 + lVar6) = (float)*(double *)(lVar5 + uVar8 * 0x18);
              *(float *)(local_48[0] + -4 + lVar6) = (float)dVar2;
              *(float *)(local_48[0] + lVar6) = (float)dVar1;
              uVar7 = uVar7 + 1;
              lVar6 = lVar6 + 0xc;
            } while (uVar9 != uVar7);
          }
          FUN_1409058c0(param_3,local_48,1);
          if (local_48[0] != 0) {
            FUN_1400020a8();
          }
          if (local_48[2] != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
  if ((local_48[4] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497ceb20 FUN_1497ceb20 body=385 status=ok
// SIG undefined FUN_1497ceb20(void)

void FUN_1497ceb20(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_118 [40];
  longlong local_f0;
  undefined2 local_e8;
  undefined1 local_e6;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 *puStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  undefined2 local_a0;
  undefined8 local_9c;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  puStack_d0 = (undefined8 *)0x0;
  local_a8 = 0x30;
  local_a0 = 0;
  local_9c = 0xffffffffffffffff;
  local_70 = 0;
  local_68 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_64 = 0xffffffff00000080;
  local_5c = 0;
  local_50 = 0;
  local_48 = 0;
  local_f0 = *(longlong *)(param_1 + 0x10);
  if ((local_f0 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_e8 = 1;
  local_e6 = 0;
  local_e4 = 0xffffffff;
  local_c8 = CONCAT44(local_c8._4_4_,1);
  FUN_146469efe(&puStack_d0,0);
  puVar1 = puStack_d0;
  FUN_1446f470e(&local_e0,L"Dynamic Mesh",1);
  *puVar1 = local_e0;
  uVar2 = FUN_144830b78(puVar1 + 1,&local_f0);
  *(undefined4 *)(puVar1 + 1) = uVar2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  local_a8 = local_a8 & 0xfffffffffffffffa | 4;
  FUN_1497ceca2(param_2,&local_d8);
  FUN_1497cf1dc(param_2,&local_d8);
  FUN_1497cfa44(param_2,&local_d8);
  FUN_148060334(&local_d8);
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497ceca2 FUN_1497ceca2 body=1337 status=ok
// SIG undefined FUN_1497ceca2(void)

void FUN_1497ceca2(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  uint local_c0;
  uint local_bc;
  longlong local_b8;
  uint local_b0;
  uint local_ac;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_1,iVar1);
  }
  lVar6 = *param_1;
  lVar7 = (longlong)iVar1 * 0x98;
  lVar5 = lVar6 + lVar7;
  FUN_1481cc21c(lVar5,param_2);
  *(undefined8 *)(lVar6 + lVar7) = DAT_14cc26488;
  iVar1 = *(int *)(lVar6 + 0x10 + lVar7);
  *(uint *)(lVar6 + 0x10 + lVar7) = iVar1 + 1U;
  if (*(uint *)(lVar6 + 0x14 + lVar7) < iVar1 + 1U) {
    FUN_146469efe(lVar6 + lVar7 + 8,iVar1);
  }
  lVar6 = *(longlong *)(lVar5 + 8);
  FUN_1446f470e(&local_d0,L"Vertex",1);
  puVar8 = (undefined8 *)((longlong)iVar1 * 0x20 + lVar6);
  *puVar8 = local_d0;
  uVar3 = FUN_144830b78(puVar8 + 1,&DAT_14cb420d0);
  *(undefined4 *)(puVar8 + 1) = uVar3;
  puVar8[2] = 0;
  puVar8[3] = 0;
  iVar1 = *(int *)(lVar5 + 0x20);
  *(uint *)(lVar5 + 0x20) = iVar1 + 1U;
  if (*(uint *)(lVar5 + 0x24) < iVar1 + 1U) {
    FUN_14024cd4c((longlong *)(lVar5 + 0x18),iVar1);
  }
  lVar5 = *(longlong *)(lVar5 + 0x18);
  FUN_1446f470e(&local_d0,L"Valid",1);
  puVar8 = (undefined8 *)(lVar5 + (longlong)iVar1 * 0xc);
  puVar4 = puVar8 + 1;
  *puVar8 = local_d0;
  uVar3 = FUN_144830b78(puVar4,&DAT_14cb420e0);
  *(undefined4 *)puVar4 = uVar3;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_1,iVar1);
  }
  lVar6 = *param_1;
  lVar7 = (longlong)iVar1 * 0x98;
  lVar5 = lVar6 + lVar7;
  FUN_1481cc21c(lVar5,param_2);
  *(undefined8 *)(lVar6 + lVar7) = DAT_14cc26490;
  iVar1 = *(int *)(lVar6 + 0x10 + lVar7);
  *(uint *)(lVar6 + 0x10 + lVar7) = iVar1 + 1U;
  if (*(uint *)(lVar6 + 0x14 + lVar7) < iVar1 + 1U) {
    FUN_146469efe(lVar6 + lVar7 + 8,iVar1);
  }
  lVar6 = *(longlong *)(lVar5 + 8);
  FUN_1446f470e(&local_d0,L"RandomInfo",1);
  puVar8 = (undefined8 *)((longlong)iVar1 * 0x20 + lVar6);
  *puVar8 = local_d0;
  uVar3 = FUN_144830b78(puVar8 + 1,&DAT_14cb3edd0);
  *(undefined4 *)(puVar8 + 1) = uVar3;
  puVar8[2] = 0;
  puVar8[3] = 0;
  iVar1 = *(int *)(lVar5 + 0x20);
  *(uint *)(lVar5 + 0x20) = iVar1 + 1U;
  if (*(uint *)(lVar5 + 0x24) < iVar1 + 1U) {
    FUN_14024cd4c((longlong *)(lVar5 + 0x18),iVar1);
  }
  lVar5 = *(longlong *)(lVar5 + 0x18);
  FUN_1446f470e(&local_d0,L"Vertex",1);
  puVar8 = (undefined8 *)(lVar5 + (longlong)iVar1 * 0xc);
  puVar4 = puVar8 + 1;
  *puVar8 = local_d0;
  uVar3 = FUN_144830b78(puVar4,&DAT_14cb420d0);
  *(undefined4 *)puVar4 = uVar3;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_1,iVar1);
  }
  lVar5 = *param_1;
  FUN_1481cc21c(lVar5 + (longlong)iVar1 * 0x98,param_2);
  puVar8 = (undefined8 *)((longlong)iVar1 * 0x98 + lVar5);
  *puVar8 = DAT_14cc26498;
  iVar1 = *(int *)(puVar8 + 4);
  *(uint *)(puVar8 + 4) = iVar1 + 1U;
  if (*(uint *)((longlong)puVar8 + 0x24) < iVar1 + 1U) {
    FUN_14024cd4c(puVar8 + 3,iVar1);
  }
  lVar5 = puVar8[3];
  FUN_1446f470e(&local_d0,L"Count",1);
  puVar8 = (undefined8 *)(lVar5 + (longlong)iVar1 * 0xc);
  puVar4 = puVar8 + 1;
  *puVar8 = local_d0;
  uVar3 = FUN_144830b78(puVar4,&DAT_14cb420d0);
  *(undefined4 *)puVar4 = uVar3;
  FUN_1481cc21c(&local_d0,param_2);
  uVar2 = local_c0;
  lVar5 = (longlong)(int)local_c0;
  local_c0 = local_c0 + 1;
  if (local_bc < local_c0) {
    FUN_146469efe(&local_c8,uVar2);
  }
  FUN_1446f470e(&local_d8,L"Vertex",1);
  puVar8 = (undefined8 *)(lVar5 * 0x20 + local_c8);
  *puVar8 = local_d8;
  uVar3 = FUN_144830b78(puVar8 + 1,&DAT_14cb420d0);
  uVar2 = local_b0;
  *(undefined4 *)(puVar8 + 1) = uVar3;
  puVar8[2] = 0;
  puVar8[3] = 0;
  lVar5 = (longlong)(int)local_b0;
  local_b0 = local_b0 + 1;
  if (local_ac < local_b0) {
    FUN_14024cd4c(&local_b8,uVar2);
  }
  FUN_1446f470e(&local_d8,L"Position",1);
  puVar8 = (undefined8 *)(local_b8 + lVar5 * 0xc);
  puVar4 = puVar8 + 1;
  *puVar8 = local_d8;
  uVar3 = FUN_144830b78(puVar4,&DAT_14cb42130);
  *(undefined4 *)puVar4 = uVar3;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_1,iVar1);
  }
  lVar5 = *param_1;
  FUN_1481cc21c(lVar5 + (longlong)iVar1 * 0x98,&local_d0);
  *(undefined8 *)(lVar5 + (longlong)iVar1 * 0x98) = DAT_14cc264a0;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_1,iVar1);
  }
  lVar5 = *param_1;
  lVar6 = (longlong)iVar1 * 0x98;
  FUN_1481cc21c(lVar5 + lVar6,&local_d0);
  *(undefined8 *)(lVar5 + lVar6) = DAT_14cc264a8;
  lVar5 = *(longlong *)(lVar5 + 0x18 + lVar6);
  uVar3 = FUN_144830b78(&local_d8,&DAT_14cb42130);
  *(undefined4 *)(lVar5 + 8) = uVar3;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_1,iVar1);
  }
  lVar6 = *param_1;
  lVar7 = (longlong)iVar1 * 0x98;
  lVar5 = lVar6 + lVar7;
  FUN_1481cc21c(lVar5,&local_d0);
  *(undefined8 *)(lVar6 + lVar7) = DAT_14cc264b0;
  iVar1 = *(int *)(lVar6 + 0x10 + lVar7);
  *(uint *)(lVar6 + 0x10 + lVar7) = iVar1 + 1U;
  if (*(uint *)(lVar6 + 0x14 + lVar7) < iVar1 + 1U) {
    FUN_146469efe(lVar6 + lVar7 + 8,iVar1);
  }
  lVar6 = *(longlong *)(lVar5 + 8);
  FUN_1446f470e(&local_d8,L"Interp",1);
  puVar8 = (undefined8 *)((longlong)iVar1 * 0x20 + lVar6);
  *puVar8 = local_d8;
  uVar3 = FUN_144830b78(puVar8 + 1,&DAT_14cb420f0);
  *(undefined4 *)(puVar8 + 1) = uVar3;
  puVar8[2] = 0;
  puVar8[3] = 0;
  lVar5 = *(longlong *)(lVar5 + 0x18);
  uVar3 = FUN_144830b78(&local_d8,&DAT_14cb42130);
  *(undefined4 *)(lVar5 + 8) = uVar3;
  FUN_148060334(&local_d0);
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497cf1dc FUN_1497cf1dc body=2150 status=ok
// SIG undefined FUN_1497cf1dc(void)

void FUN_1497cf1dc(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100 [2];
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  longlong local_e0;
  uint local_d8;
  uint local_d4;
  longlong local_d0;
  uint local_c8;
  uint local_c4;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_148;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_148d135c0(param_1,iVar2);
  }
  lVar6 = *param_1;
  lVar7 = (longlong)iVar2 * 0x98;
  lVar9 = lVar6 + lVar7;
  FUN_1481cc21c(lVar9,param_2);
  *(undefined8 *)(lVar6 + lVar7) = DAT_14cc264c8;
  iVar2 = *(int *)(lVar6 + 0x10 + lVar7);
  *(uint *)(lVar6 + 0x10 + lVar7) = iVar2 + 1U;
  if (*(uint *)(lVar6 + 0x14 + lVar7) < iVar2 + 1U) {
    FUN_146469efe(lVar6 + lVar7 + 8,iVar2);
  }
  lVar6 = *(longlong *)(lVar9 + 8);
  FUN_1446f470e(&local_e8,L"Triangle",1);
  puVar8 = (undefined8 *)((longlong)iVar2 * 0x20 + lVar6);
  *puVar8 = local_e8;
  uVar4 = FUN_144830b78(puVar8 + 1,&DAT_14cb420d0);
  *(undefined4 *)(puVar8 + 1) = uVar4;
  puVar8[2] = 0;
  puVar8[3] = 0;
  iVar2 = *(int *)(lVar9 + 0x20);
  *(uint *)(lVar9 + 0x20) = iVar2 + 1U;
  if (*(uint *)(lVar9 + 0x24) < iVar2 + 1U) {
    FUN_14024cd4c((longlong *)(lVar9 + 0x18),iVar2);
  }
  lVar9 = *(longlong *)(lVar9 + 0x18);
  FUN_1446f470e(&local_e8,L"Valid",1);
  puVar8 = (undefined8 *)(lVar9 + (longlong)iVar2 * 0xc);
  puVar5 = puVar8 + 1;
  *puVar8 = local_e8;
  uVar4 = FUN_144830b78(puVar5,&DAT_14cb420e0);
  *(undefined4 *)puVar5 = uVar4;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_148d135c0(param_1,iVar2);
  }
  lVar6 = *param_1;
  lVar7 = (longlong)iVar2 * 0x98;
  lVar9 = lVar6 + lVar7;
  FUN_1481cc21c(lVar9,param_2);
  *(undefined8 *)(lVar6 + lVar7) = DAT_14cc264d0;
  iVar2 = *(int *)(lVar6 + 0x10 + lVar7);
  *(uint *)(lVar6 + 0x10 + lVar7) = iVar2 + 1U;
  if (*(uint *)(lVar6 + 0x14 + lVar7) < iVar2 + 1U) {
    FUN_146469efe(lVar6 + lVar7 + 8,iVar2);
  }
  lVar6 = *(longlong *)(lVar9 + 8);
  FUN_1446f470e(&local_e8,L"RandomInfo",1);
  puVar8 = (undefined8 *)((longlong)iVar2 * 0x20 + lVar6);
  *puVar8 = local_e8;
  uVar4 = FUN_144830b78(puVar8 + 1,&DAT_14cb3edd0);
  *(undefined4 *)(puVar8 + 1) = uVar4;
  puVar8[2] = 0;
  puVar8[3] = 0;
  plVar1 = (longlong *)(lVar9 + 0x18);
  iVar2 = *(int *)(lVar9 + 0x20);
  *(uint *)(lVar9 + 0x20) = iVar2 + 1U;
  if (*(uint *)(lVar9 + 0x24) < iVar2 + 1U) {
    FUN_14024cd4c(plVar1,iVar2);
  }
  lVar6 = *(longlong *)(lVar9 + 0x18);
  FUN_1446f470e(&local_e8,L"Triangle",1);
  puVar8 = (undefined8 *)(lVar6 + (longlong)iVar2 * 0xc);
  puVar5 = puVar8 + 1;
  *puVar8 = local_e8;
  uVar4 = FUN_144830b78(puVar5,&DAT_14cb420d0);
  *(undefined4 *)puVar5 = uVar4;
  iVar2 = *(int *)(lVar9 + 0x20);
  *(uint *)(lVar9 + 0x20) = iVar2 + 1U;
  if (*(uint *)(lVar9 + 0x24) < iVar2 + 1U) {
    FUN_14024cd4c(plVar1,iVar2);
  }
  lVar9 = *plVar1;
  FUN_1446f470e(&local_e8,L"BaryCoord",1);
  puVar8 = (undefined8 *)(lVar9 + (longlong)iVar2 * 0xc);
  puVar5 = puVar8 + 1;
  *puVar8 = local_e8;
  uVar4 = FUN_144830b78(puVar5,&DAT_14cb42140);
  *(undefined4 *)puVar5 = uVar4;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_148d135c0(param_1,iVar2);
  }
  lVar9 = *param_1;
  FUN_1481cc21c(lVar9 + (longlong)iVar2 * 0x98,param_2);
  puVar8 = (undefined8 *)((longlong)iVar2 * 0x98 + lVar9);
  *puVar8 = DAT_14cc264d8;
  iVar2 = *(int *)(puVar8 + 4);
  *(uint *)(puVar8 + 4) = iVar2 + 1U;
  if (*(uint *)((longlong)puVar8 + 0x24) < iVar2 + 1U) {
    FUN_14024cd4c(puVar8 + 3,iVar2);
  }
  lVar9 = puVar8[3];
  FUN_1446f470e(&local_e8,L"Count",1);
  puVar8 = (undefined8 *)(lVar9 + (longlong)iVar2 * 0xc);
  puVar5 = puVar8 + 1;
  *puVar8 = local_e8;
  uVar4 = FUN_144830b78(puVar5,&DAT_14cb420d0);
  *(undefined4 *)puVar5 = uVar4;
  FUN_1481cc21c(&local_e8,param_2);
  uVar3 = local_d8;
  lVar9 = (longlong)(int)local_d8;
  local_d8 = local_d8 + 1;
  if (local_d4 < local_d8) {
    FUN_146469efe(&local_e0,uVar3);
  }
  lVar6 = local_e0;
  FUN_1446f470e(&local_108,L"Triangle",1);
  puVar8 = (undefined8 *)(lVar9 * 0x20 + lVar6);
  *puVar8 = local_108;
  uVar4 = FUN_144830b78(puVar8 + 1,&DAT_14cb420d0);
  *(undefined4 *)(puVar8 + 1) = uVar4;
  puVar8[2] = 0;
  puVar8[3] = 0;
  FUN_1446f470e(&local_110,L"BaryCoord",1);
  local_108 = local_110;
  local_100[0] = FUN_144830b78(local_100,&DAT_14cb42140);
  uVar3 = local_d8;
  local_f8 = 0;
  uStack_f0 = 0;
  lVar9 = (longlong)(int)local_d8;
  local_d8 = local_d8 + 1;
  if (local_d4 < local_d8) {
    FUN_146469efe(&local_e0,uVar3);
  }
  lVar9 = lVar9 * 0x20;
  *(undefined4 *)(local_e0 + 8 + lVar9) = local_100[0];
  *(undefined8 *)(local_e0 + lVar9) = local_108;
  *(undefined8 *)(local_e0 + 0x10 + lVar9) = 0;
  *(longlong *)(local_e0 + 0x10 + lVar9) = local_f8;
  local_f8 = 0;
  *(undefined4 *)(local_e0 + 0x18 + lVar9) = (undefined4)uStack_f0;
  *(undefined4 *)(local_e0 + 0x1c + lVar9) = uStack_f0._4_4_;
  uStack_f0 = 0;
  local_120 = 0x3eaaaaab3eaaaaab;
  local_118 = 0x3eaaaaab;
  FUN_140121138(local_e0 + lVar9);
  memcpy(*(void **)(local_e0 + 0x10 + lVar9),&local_120,(longlong)*(int *)(local_e0 + 0x18 + lVar9))
  ;
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  uVar3 = local_c8;
  lVar9 = (longlong)(int)local_c8;
  local_c8 = local_c8 + 1;
  if (local_c4 < local_c8) {
    FUN_14024cd4c(&local_d0,uVar3);
  }
  FUN_1446f470e(&local_108,L"Position",1);
  puVar8 = (undefined8 *)(local_d0 + lVar9 * 0xc);
  puVar5 = puVar8 + 1;
  *puVar8 = local_108;
  uVar4 = FUN_144830b78(puVar5,&DAT_14cb42130);
  *(undefined4 *)puVar5 = uVar4;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_148d135c0(param_1,iVar2);
  }
  lVar9 = *param_1;
  FUN_1481cc21c(lVar9 + (longlong)iVar2 * 0x98,&local_e8);
  *(undefined8 *)(lVar9 + (longlong)iVar2 * 0x98) = DAT_14cc264e0;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_148d135c0(param_1,iVar2);
  }
  lVar9 = *param_1;
  lVar6 = (longlong)iVar2 * 0x98;
  FUN_1481cc21c(lVar9 + lVar6,&local_e8);
  *(undefined8 *)(lVar9 + lVar6) = DAT_14cc264e8;
  lVar9 = *(longlong *)(lVar9 + 0x18 + lVar6);
  uVar4 = FUN_144830b78(&local_108,&DAT_14cb42130);
  *(undefined4 *)(lVar9 + 8) = uVar4;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_148d135c0(param_1,iVar2);
  }
  lVar6 = *param_1;
  lVar7 = (longlong)iVar2 * 0x98;
  lVar9 = lVar6 + lVar7;
  FUN_1481cc21c(lVar9,&local_e8);
  *(undefined8 *)(lVar6 + lVar7) = DAT_14cc264f0;
  iVar2 = *(int *)(lVar6 + 0x10 + lVar7);
  *(uint *)(lVar6 + 0x10 + lVar7) = iVar2 + 1U;
  if (*(uint *)(lVar6 + 0x14 + lVar7) < iVar2 + 1U) {
    FUN_146469efe(lVar6 + lVar7 + 8,iVar2);
  }
  lVar6 = *(longlong *)(lVar9 + 8);
  FUN_1446f470e(&local_108,L"Interp",1);
  puVar8 = (undefined8 *)((longlong)iVar2 * 0x20 + lVar6);
  *puVar8 = local_108;
  uVar4 = FUN_144830b78(puVar8 + 1,&DAT_14cb420f0);
  *(undefined4 *)(puVar8 + 1) = uVar4;
  puVar8[2] = 0;
  puVar8[3] = 0;
  lVar9 = *(longlong *)(lVar9 + 0x18);
  uVar4 = FUN_144830b78(&local_108,&DAT_14cb42130);
  *(undefined4 *)(lVar9 + 8) = uVar4;
  FUN_148060334(&local_e8);
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_148d135c0(param_1,iVar2);
  }
  lVar6 = *param_1;
  lVar7 = (longlong)iVar2 * 0x98;
  lVar9 = lVar6 + lVar7;
  FUN_1481cc21c(lVar9,param_2);
  *(undefined8 *)(lVar6 + lVar7) = DAT_14cc26508;
  iVar2 = *(int *)(lVar6 + 0x10 + lVar7);
  *(uint *)(lVar6 + 0x10 + lVar7) = iVar2 + 1U;
  if (*(uint *)(lVar6 + 0x14 + lVar7) < iVar2 + 1U) {
    FUN_146469efe(lVar6 + lVar7 + 8,iVar2);
  }
  lVar6 = *(longlong *)(lVar9 + 8);
  FUN_1446f470e(&local_e8,L"Triangle",1);
  puVar8 = (undefined8 *)((longlong)iVar2 * 0x20 + lVar6);
  *puVar8 = local_e8;
  uVar4 = FUN_144830b78(puVar8 + 1,&DAT_14cb420d0);
  *(undefined4 *)(puVar8 + 1) = uVar4;
  puVar8[2] = 0;
  puVar8[3] = 0;
  plVar1 = (longlong *)(lVar9 + 0x18);
  iVar2 = *(int *)(lVar9 + 0x20);
  *(uint *)(lVar9 + 0x20) = iVar2 + 1U;
  if (*(uint *)(lVar9 + 0x24) < iVar2 + 1U) {
    FUN_14024cd4c(plVar1,iVar2);
  }
  lVar6 = *(longlong *)(lVar9 + 0x18);
  FUN_1446f470e(&local_e8,L"Index0",1);
  puVar8 = (undefined8 *)(lVar6 + (longlong)iVar2 * 0xc);
  puVar5 = puVar8 + 1;
  *puVar8 = local_e8;
  uVar4 = FUN_144830b78(puVar5,&DAT_14cb420d0);
  *(undefined4 *)puVar5 = uVar4;
  iVar2 = *(int *)(lVar9 + 0x20);
  *(uint *)(lVar9 + 0x20) = iVar2 + 1U;
  if (*(uint *)(lVar9 + 0x24) < iVar2 + 1U) {
    FUN_14024cd4c(plVar1,iVar2);
  }
  lVar6 = *(longlong *)(lVar9 + 0x18);
  FUN_1446f470e(&local_e8,L"Index1",1);
  puVar8 = (undefined8 *)(lVar6 + (longlong)iVar2 * 0xc);
  puVar5 = puVar8 + 1;
  *puVar8 = local_e8;
  uVar4 = FUN_144830b78(puVar5,&DAT_14cb420d0);
  *(undefined4 *)puVar5 = uVar4;
  iVar2 = *(int *)(lVar9 + 0x20);
  *(uint *)(lVar9 + 0x20) = iVar2 + 1U;
  if (*(uint *)(lVar9 + 0x24) < iVar2 + 1U) {
    FUN_14024cd4c(plVar1,iVar2);
  }
  lVar9 = *plVar1;
  FUN_1446f470e(&local_e8,L"Index2",1);
  puVar8 = (undefined8 *)(lVar9 + (longlong)iVar2 * 0xc);
  puVar5 = puVar8 + 1;
  *puVar8 = local_e8;
  uVar4 = FUN_144830b78(puVar5,&DAT_14cb420d0);
  *(undefined4 *)puVar5 = uVar4;
  if ((local_50 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497cfa44 FUN_1497cfa44 body=2797 status=ok
// SIG undefined FUN_1497cfa44(void)

void FUN_1497cfa44(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  wchar_t *local_e8;
  undefined4 local_e0;
  wchar_t *local_d8;
  undefined4 local_d0;
  longlong local_c0;
  uint local_b8;
  uint local_b4;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_1,iVar1);
  }
  lVar8 = *param_1;
  FUN_1481cc21c(lVar8 + (longlong)iVar1 * 0x98,param_2);
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x98 + lVar8);
  *puVar5 = DAT_14cc26510;
  iVar1 = *(int *)(puVar5 + 4);
  *(uint *)(puVar5 + 4) = iVar1 + 1U;
  if (*(uint *)((longlong)puVar5 + 0x24) < iVar1 + 1U) {
    FUN_14024cd4c(puVar5 + 3,iVar1);
  }
  lVar8 = puVar5[3];
  FUN_1446f470e(&local_d8,L"Valid",1);
  puVar5 = (undefined8 *)(lVar8 + (longlong)iVar1 * 0xc);
  puVar6 = puVar5 + 1;
  *puVar5 = local_d8;
  uVar4 = FUN_144830b78(puVar6,&DAT_14cb420e0);
  *(undefined4 *)puVar6 = uVar4;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar8 = lVar2 + (longlong)iVar1 * 0x98;
  FUN_1481cc21c(lVar8,param_2);
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x98 + lVar2);
  plVar7 = puVar5 + 3;
  *puVar5 = DAT_14cc26518;
  iVar1 = *(int *)(puVar5 + 4);
  *(uint *)(puVar5 + 4) = iVar1 + 1U;
  if (*(uint *)((longlong)puVar5 + 0x24) < iVar1 + 1U) {
    FUN_14024cd4c(plVar7,iVar1);
  }
  lVar2 = *(longlong *)(lVar8 + 0x18);
  FUN_1446f470e(&local_d8,L"Center",1);
  puVar5 = (undefined8 *)(lVar2 + (longlong)iVar1 * 0xc);
  puVar6 = puVar5 + 1;
  *puVar5 = local_d8;
  uVar4 = FUN_144830b78(puVar6,&DAT_14cb42140);
  *(undefined4 *)puVar6 = uVar4;
  iVar1 = *(int *)(lVar8 + 0x20);
  *(uint *)(lVar8 + 0x20) = iVar1 + 1U;
  if (*(uint *)(lVar8 + 0x24) < iVar1 + 1U) {
    FUN_14024cd4c(plVar7,iVar1);
  }
  lVar2 = *(longlong *)(lVar8 + 0x18);
  FUN_1446f470e(&local_d8,L"ExtentsMin",1);
  puVar5 = (undefined8 *)(lVar2 + (longlong)iVar1 * 0xc);
  puVar6 = puVar5 + 1;
  *puVar5 = local_d8;
  uVar4 = FUN_144830b78(puVar6,&DAT_14cb42140);
  *(undefined4 *)puVar6 = uVar4;
  iVar1 = *(int *)(lVar8 + 0x20);
  *(uint *)(lVar8 + 0x20) = iVar1 + 1U;
  if (*(uint *)(lVar8 + 0x24) < iVar1 + 1U) {
    FUN_14024cd4c(plVar7,iVar1);
  }
  lVar2 = *(longlong *)(lVar8 + 0x18);
  FUN_1446f470e(&local_d8,L"ExtentsMax",1);
  puVar5 = (undefined8 *)(lVar2 + (longlong)iVar1 * 0xc);
  puVar6 = puVar5 + 1;
  *puVar5 = local_d8;
  uVar4 = FUN_144830b78(puVar6,&DAT_14cb42140);
  *(undefined4 *)puVar6 = uVar4;
  iVar1 = *(int *)(lVar8 + 0x20);
  *(uint *)(lVar8 + 0x20) = iVar1 + 1U;
  if (*(uint *)(lVar8 + 0x24) < iVar1 + 1U) {
    FUN_14024cd4c(plVar7,iVar1);
  }
  lVar2 = *(longlong *)(lVar8 + 0x18);
  FUN_1446f470e(&local_d8,L"Extents",1);
  puVar5 = (undefined8 *)(lVar2 + (longlong)iVar1 * 0xc);
  puVar6 = puVar5 + 1;
  *puVar5 = local_d8;
  uVar4 = FUN_144830b78(puVar6,&DAT_14cb42140);
  *(undefined4 *)puVar6 = uVar4;
  iVar1 = *(int *)(lVar8 + 0x20);
  *(uint *)(lVar8 + 0x20) = iVar1 + 1U;
  if (*(uint *)(lVar8 + 0x24) < iVar1 + 1U) {
    FUN_14024cd4c(plVar7,iVar1);
  }
  lVar8 = *plVar7;
  FUN_1446f470e(&local_d8,L"Half Extents",1);
  puVar5 = (undefined8 *)(lVar8 + (longlong)iVar1 * 0xc);
  puVar6 = puVar5 + 1;
  *puVar5 = local_d8;
  uVar4 = FUN_144830b78(puVar6,&DAT_14cb42140);
  *(undefined4 *)puVar6 = uVar4;
  local_d8 = L"GetPreSkinnedLocalBoundsDesc";
  local_d0 = 0x1c;
  FUN_1446e940c(&local_e8,&local_d8);
  local_d8 = L"GbxNiagaraDataInterfaceSampleDynamicMeshBase";
  local_d0 = 0x2c;
  FUN_1446e940c(local_ec,&local_d8);
  FUN_140208bae(&local_d8,local_ec,&local_e8,
                L"Returns the bounding information of the mesh vertices.");
  if (local_d8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_d8 + 0x10))();
  }
  local_d8 = L"PreSkinnedLocalBounds_CenterDesc";
  local_d0 = 0x20;
  FUN_1446e940c(&local_e8,&local_d8);
  local_d8 = L"GbxNiagaraDataInterfaceSampleDynamicMeshBase";
  local_d0 = 0x2c;
  FUN_1446e940c(local_ec,&local_d8);
  FUN_140208bae(&local_d8,local_ec,&local_e8,
                L"Center of the mesh vertices bounding box, i.e. ((max - min) * 0.5) + min");
  if (local_d8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_d8 + 0x10))();
  }
  local_d8 = L"PreSkinnedLocalBounds_ExtentsMinDesc";
  local_d0 = 0x24;
  FUN_1446e940c(&local_e8,&local_d8);
  local_d8 = L"GbxNiagaraDataInterfaceSampleDynamicMeshBase";
  local_d0 = 0x2c;
  FUN_1446e940c(local_ec,&local_d8);
  FUN_140208bae(&local_d8,local_ec,&local_e8,L"Min of the mesh vertices.");
  if (local_d8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_d8 + 0x10))();
  }
  local_d8 = L"PreSkinnedLocalBounds_ExtentsMaxDesc";
  local_d0 = 0x24;
  FUN_1446e940c(&local_e8,&local_d8);
  local_d8 = L"GbxNiagaraDataInterfaceSampleDynamicMeshBase";
  local_d0 = 0x2c;
  FUN_1446e940c(local_ec,&local_d8);
  FUN_140208bae(&local_d8,local_ec,&local_e8,L"Max of the mesh vertices.");
  if (local_d8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_d8 + 0x10))();
  }
  local_d8 = L"PreSkinnedLocalBounds_ExtentsDesc";
  local_d0 = 0x21;
  FUN_1446e940c(&local_e8,&local_d8);
  local_d8 = L"GbxNiagaraDataInterfaceSampleDynamicMeshBase";
  local_d0 = 0x2c;
  FUN_1446e940c(local_ec,&local_d8);
  FUN_140208bae(&local_d8,local_ec,&local_e8,
                L"Extents of the mesh vertices bounding box, i.e. max - min");
  if (local_d8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_d8 + 0x10))();
  }
  local_d8 = L"PreSkinnedLocalBounds_HalfExtentsDesc";
  local_d0 = 0x25;
  FUN_1446e940c(&local_e8,&local_d8);
  local_d8 = L"GbxNiagaraDataInterfaceSampleDynamicMeshBase";
  local_d0 = 0x2c;
  FUN_1446e940c(local_ec,&local_d8);
  FUN_140208bae(&local_d8,local_ec,&local_e8,
                L"Extents * 0.5f of the mesh vertices bounding box, i.e. (max - min) * 0.5");
  if (local_d8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_d8 + 0x10))();
  }
  FUN_1481cc21c(&local_d8,param_2);
  uVar3 = local_b8;
  lVar8 = (longlong)(int)local_b8;
  local_b8 = local_b8 + 1;
  if (local_b4 < local_b8) {
    FUN_14024cd4c(&local_c0,uVar3);
  }
  lVar2 = local_c0;
  FUN_1446f470e(&local_e8,L"Center",1);
  puVar5 = (undefined8 *)(lVar2 + lVar8 * 0xc);
  puVar6 = puVar5 + 1;
  *puVar5 = local_e8;
  uVar4 = FUN_144830b78(puVar6,&DAT_14cb42130);
  uVar3 = local_b8;
  *(undefined4 *)puVar6 = uVar4;
  lVar8 = (longlong)(int)local_b8;
  local_b8 = local_b8 + 1;
  if (local_b4 < local_b8) {
    FUN_14024cd4c(&local_c0,uVar3);
  }
  lVar2 = local_c0;
  FUN_1446f470e(&local_e8,L"ExtentsMin",1);
  puVar5 = (undefined8 *)(lVar2 + lVar8 * 0xc);
  puVar6 = puVar5 + 1;
  *puVar5 = local_e8;
  uVar4 = FUN_144830b78(puVar6,&DAT_14cb42140);
  uVar3 = local_b8;
  *(undefined4 *)puVar6 = uVar4;
  lVar8 = (longlong)(int)local_b8;
  local_b8 = local_b8 + 1;
  if (local_b4 < local_b8) {
    FUN_14024cd4c(&local_c0,uVar3);
  }
  lVar2 = local_c0;
  FUN_1446f470e(&local_e8,L"ExtentsMax",1);
  puVar5 = (undefined8 *)(lVar2 + lVar8 * 0xc);
  puVar6 = puVar5 + 1;
  *puVar5 = local_e8;
  uVar4 = FUN_144830b78(puVar6,&DAT_14cb42140);
  uVar3 = local_b8;
  *(undefined4 *)puVar6 = uVar4;
  lVar8 = (longlong)(int)local_b8;
  local_b8 = local_b8 + 1;
  if (local_b4 < local_b8) {
    FUN_14024cd4c(&local_c0,uVar3);
  }
  lVar2 = local_c0;
  FUN_1446f470e(&local_e8,L"Extents",1);
  puVar5 = (undefined8 *)(lVar2 + lVar8 * 0xc);
  puVar6 = puVar5 + 1;
  *puVar5 = local_e8;
  uVar4 = FUN_144830b78(puVar6,&DAT_14cb42140);
  uVar3 = local_b8;
  *(undefined4 *)puVar6 = uVar4;
  lVar8 = (longlong)(int)local_b8;
  local_b8 = local_b8 + 1;
  if (local_b4 < local_b8) {
    FUN_14024cd4c(&local_c0,uVar3);
  }
  lVar2 = local_c0;
  FUN_1446f470e(&local_e8,L"Half Extents",1);
  puVar5 = (undefined8 *)(lVar2 + lVar8 * 0xc);
  puVar6 = puVar5 + 1;
  *puVar5 = local_e8;
  uVar4 = FUN_144830b78(puVar6,&DAT_14cb42140);
  uVar3 = local_b8;
  *(undefined4 *)puVar6 = uVar4;
  lVar8 = (longlong)(int)local_b8;
  local_b8 = local_b8 + 1;
  if (local_b4 < local_b8) {
    FUN_14024cd4c(&local_c0,uVar3);
  }
  FUN_1446f470e(&local_e8,L"OwnerToMeshVector",1);
  puVar5 = (undefined8 *)(local_c0 + lVar8 * 0xc);
  puVar6 = puVar5 + 1;
  *puVar5 = local_e8;
  uVar4 = FUN_144830b78(puVar6,&DAT_14cb42140);
  *(undefined4 *)puVar6 = uVar4;
  local_e8 = L"GetMeshBounds_MeshComponentOffsetDesc";
  local_e0 = 0x25;
  FUN_1446e940c(local_ec,&local_e8);
  local_e8 = L"GbxNiagaraDataInterfaceSampleDynamicMeshBase";
  local_e0 = 0x2c;
  FUN_1446e940c(local_f0,&local_e8);
  FUN_140208bae(&local_e8,local_f0,local_ec,
                L"Offset vector to the Source Mesh Component from the Niagara instances location.");
  if (local_e8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_e8 + 0x10))();
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_1,iVar1);
  }
  lVar8 = *param_1;
  FUN_1481cc21c(lVar8 + (longlong)iVar1 * 0x98,&local_d8);
  *(undefined8 *)(lVar8 + (longlong)iVar1 * 0x98) = DAT_14cc26520;
  local_e8 = L"GetMeshBoundsDesc";
  local_e0 = 0x11;
  FUN_1446e940c(local_ec,&local_e8);
  local_e8 = L"GbxNiagaraDataInterfaceSampleDynamicMeshBase";
  local_e0 = 0x2c;
  FUN_1446e940c(local_f0,&local_e8);
  FUN_140208bae(&local_e8,local_f0,local_ec,
                L"Returns the bounding information of the mesh in local space.");
  if (local_e8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_e8 + 0x10))();
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_1,iVar1);
  }
  lVar8 = *param_1;
  FUN_1481cc21c(lVar8 + (longlong)iVar1 * 0x98,&local_d8);
  *(undefined8 *)(lVar8 + (longlong)iVar1 * 0x98) = DAT_14cc26528;
  local_e8 = L"GetMeshBoundsWSDesc";
  local_e0 = 0x13;
  FUN_1446e940c(local_ec,&local_e8);
  local_e8 = L"GbxNiagaraDataInterfaceSampleDynamicMeshBase";
  local_e0 = 0x2c;
  FUN_1446e940c(local_f0,&local_e8);
  FUN_140208bae(&local_e8,local_f0,local_ec,
                L"Returns the bounding information of the mesh in world space.");
  if (local_e8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_e8 + 0x10))();
  }
  FUN_148060334(&local_d8);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_1,iVar1);
  }
  lVar8 = *param_1;
  FUN_1481cc21c(lVar8 + (longlong)iVar1 * 0x98,param_2);
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x98 + lVar8);
  *puVar5 = DAT_14cc26530;
  iVar1 = *(int *)(puVar5 + 4);
  *(uint *)(puVar5 + 4) = iVar1 + 1U;
  if (*(uint *)((longlong)puVar5 + 0x24) < iVar1 + 1U) {
    FUN_14024cd4c(puVar5 + 3,iVar1);
  }
  lVar8 = puVar5[3];
  FUN_1446f470e(&local_d8,L"Matrix",1);
  puVar5 = (undefined8 *)(lVar8 + (longlong)iVar1 * 0xc);
  puVar6 = puVar5 + 1;
  *puVar5 = local_d8;
  uVar4 = FUN_144830b78(puVar6,&DAT_14cb41370);
  *(undefined4 *)puVar6 = uVar4;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_1,iVar1);
  }
  lVar8 = *param_1;
  FUN_1481cc21c(lVar8 + (longlong)iVar1 * 0x98,param_2);
  puVar5 = (undefined8 *)(lVar8 + (longlong)iVar1 * 0x98);
  *puVar5 = DAT_14cc26538;
  iVar1 = *(int *)(puVar5 + 4);
  *(uint *)(puVar5 + 4) = iVar1 + 1U;
  if (*(uint *)((longlong)puVar5 + 0x24) < iVar1 + 1U) {
    FUN_14024cd4c(puVar5 + 3,iVar1);
  }
  lVar8 = puVar5[3];
  FUN_1446f470e(&local_d8,L"Matrix",1);
  puVar5 = (undefined8 *)(lVar8 + (longlong)iVar1 * 0xc);
  puVar6 = puVar5 + 1;
  *puVar5 = local_d8;
  uVar4 = FUN_144830b78(puVar6,&DAT_14cb41370);
  *(undefined4 *)puVar6 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497d0532 FUN_1497d0532 body=1996 status=ok
// SIG undefined FUN_1497d0532(void)

void FUN_1497d0532(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined **ppuVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if (lVar1 == DAT_14cc26488) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14be78840;
LAB_1497d05c2:
    local_28 = 2;
    *local_30 = ppuVar2;
    local_30[3] = param_1;
    FUN_144a450dc(param_4,&local_30);
  }
  else {
    if (lVar1 == DAT_14cc26490) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar3 == 0) {
        LOCK();
        UNLOCK();
        lVar3 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar3;
      ppuVar2 = &PTR_FUN_14be788b0;
      goto LAB_1497d05c2;
    }
    if (lVar1 == DAT_14cc26498) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar3 == 0) {
        LOCK();
        UNLOCK();
        lVar3 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar3;
      ppuVar2 = &PTR_FUN_14be78920;
      goto LAB_1497d05c2;
    }
    if (lVar1 == DAT_14cc264a0) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar3 == 0) {
        LOCK();
        UNLOCK();
        lVar3 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar3;
      ppuVar2 = &PTR_FUN_14be78990;
      goto LAB_1497d05c2;
    }
    if (lVar1 == DAT_14cc264a8) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar3 == 0) {
        LOCK();
        UNLOCK();
        lVar3 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar3;
      ppuVar2 = &PTR_FUN_14be78a00;
      goto LAB_1497d05c2;
    }
    if (lVar1 == DAT_14cc264b0) {
      pcVar4 = FUN_1497d0da4;
      goto LAB_1497d0a1a;
    }
    if (lVar1 == DAT_14cc264c8) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar3 == 0) {
        LOCK();
        UNLOCK();
        lVar3 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar3;
      ppuVar2 = &PTR_FUN_14be78ae0;
      goto LAB_1497d05c2;
    }
    if (lVar1 == DAT_14cc264d0) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar3 == 0) {
        LOCK();
        UNLOCK();
        lVar3 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar3;
      ppuVar2 = &PTR_FUN_14be78b50;
      goto LAB_1497d05c2;
    }
    if (lVar1 == DAT_14cc264d8) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar3 == 0) {
        LOCK();
        UNLOCK();
        lVar3 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar3;
      ppuVar2 = &PTR_FUN_14be78bc0;
      goto LAB_1497d05c2;
    }
    if (lVar1 == DAT_14cc264e0) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar3 == 0) {
        LOCK();
        UNLOCK();
        lVar3 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar3;
      ppuVar2 = &PTR_FUN_14be78c30;
      goto LAB_1497d05c2;
    }
    if (lVar1 == DAT_14cc264e8) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar3 == 0) {
        LOCK();
        UNLOCK();
        lVar3 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar3;
      ppuVar2 = &PTR_FUN_14be78ca0;
      goto LAB_1497d05c2;
    }
    if (lVar1 == DAT_14cc264f0) {
      pcVar4 = FUN_1497d11ec;
    }
    else {
      if (lVar1 == DAT_14cc26510) {
        local_30 = (undefined8 *)0x0;
        local_28 = 0;
        FUN_1446efa72(&local_30,0,2,0x10);
        *local_30 = &PTR_LAB_14ad81180;
        LOCK();
        UNLOCK();
        lVar3 = DAT_14c758608 + 1;
        lVar1 = DAT_14c758608 + 1;
        if (lVar3 == 0) {
          LOCK();
          UNLOCK();
          lVar3 = DAT_14c758608 + 2;
          lVar1 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar1;
        local_30[2] = lVar3;
        ppuVar2 = &PTR_FUN_14be78d10;
        goto LAB_1497d05c2;
      }
      if (lVar1 == DAT_14cc26518) {
        pcVar4 = FUN_1497d1854;
      }
      else if (lVar1 == DAT_14cc26520) {
        pcVar4 = FUN_1497d1cac;
      }
      else {
        if (lVar1 != DAT_14cc26528) {
          if (lVar1 == DAT_14cc26530) {
            local_30 = (undefined8 *)0x0;
            local_28 = 0;
            FUN_1446efa72(&local_30,0,2,0x10);
            *local_30 = &PTR_LAB_14ad81180;
            LOCK();
            UNLOCK();
            lVar3 = DAT_14c758608 + 1;
            lVar1 = DAT_14c758608 + 1;
            if (lVar3 == 0) {
              LOCK();
              UNLOCK();
              lVar3 = DAT_14c758608 + 2;
              lVar1 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar1;
            local_30[2] = lVar3;
            ppuVar2 = &PTR_FUN_14be78d80;
          }
          else {
            if (lVar1 != DAT_14cc26538) goto LAB_1497d05e1;
            local_30 = (undefined8 *)0x0;
            local_28 = 0;
            FUN_1446efa72(&local_30,0,2,0x10);
            *local_30 = &PTR_LAB_14ad81180;
            LOCK();
            UNLOCK();
            lVar3 = DAT_14c758608 + 1;
            lVar1 = DAT_14c758608 + 1;
            if (lVar3 == 0) {
              LOCK();
              UNLOCK();
              lVar3 = DAT_14c758608 + 2;
              lVar1 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar1;
            local_30[2] = lVar3;
            ppuVar2 = &PTR_FUN_14be78df0;
          }
          goto LAB_1497d05c2;
        }
        pcVar4 = FUN_1497d233a;
      }
    }
LAB_1497d0a1a:
    FUN_1497d0d00(&local_30,param_1,pcVar4);
    FUN_144a450dc(param_4,&local_30);
  }
  FUN_1449db362(&local_30);
LAB_1497d05e1:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497d0d00 FUN_1497d0d00 body=163 status=ok
// SIG undefined FUN_1497d0d00(void)

longlong * FUN_1497d0d00(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_14ad81180;
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
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14be78a70;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_2);
  puVar1[4] = param_3;
  return param_1;
}



// FUNCTION 1497d0da4 FUN_1497d0da4 body=1094 status=ok
// SIG undefined FUN_1497d0da4(void)

void FUN_1497d0da4(longlong *param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  float local_180;
  float *local_178;
  int local_170;
  float *local_168;
  int local_160;
  float *local_158;
  int local_150;
  float *local_148;
  undefined8 uStack_140;
  int local_138;
  int *local_128;
  undefined8 uStack_120;
  int local_118;
  undefined1 local_110 [8];
  longlong local_108;
  longlong *local_100;
  longlong local_f8;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_1497d3270(local_110);
  local_100 = param_1;
  local_f8 = FUN_14479d2ce(local_108);
  local_118 = 0;
  local_128 = (int *)0x0;
  uStack_120 = 0;
  FUN_144a98d08(&local_128,param_2);
  local_138 = 0;
  local_148 = (float *)0x0;
  uStack_140 = 0;
  FUN_144a98dce(&local_148,param_2);
  FUN_144a76c20(&local_178,param_2);
  FUN_144a76c20(&local_168,param_2);
  FUN_144a76c20(&local_158,param_2);
  fVar5 = DAT_14c846338;
  fVar16 = DAT_14c846330._4_4_;
  fVar4 = (float)DAT_14c846330;
  iVar8 = *(int *)(local_108 + 0x2e4) + -1;
  if (iVar8 == 0) {
    FUN_144a928e2(&local_e8,local_108 + 0x20);
    piVar7 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar7 = (int *)(param_2 + 0x3c);
    }
    if (0 < *piVar7) {
      iVar8 = 0;
      do {
        pfVar1 = local_178 + local_170;
        *local_178 = fVar5 * local_c8 + fVar16 * local_d8 + fVar4 * local_e8 + local_b8;
        pfVar2 = local_168 + local_160;
        *local_168 = fVar5 * fStack_c4 + fVar16 * fStack_d4 + fVar4 * fStack_e4 + fStack_b4;
        pfVar3 = local_158 + local_150;
        *local_158 = fVar5 * fStack_c0 + fVar16 * fStack_d0 + fVar4 * fStack_e0 + fStack_b0;
        iVar8 = iVar8 + 1;
        piVar7 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar7 = (int *)(param_2 + 0x3c);
        }
        local_178 = pfVar1;
        local_168 = pfVar2;
        local_158 = pfVar3;
      } while (iVar8 < *piVar7);
    }
  }
  else {
    piVar7 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar7 = (int *)(param_2 + 0x3c);
    }
    if (0 < *piVar7) {
      iVar10 = 0;
      do {
        fVar4 = *local_148;
        if (local_f8 == 0) {
          local_180 = DAT_14c846338;
          local_188 = CONCAT44(DAT_14c846330._4_4_,(float)DAT_14c846330);
          local_148 = local_148 + local_138;
          local_128 = local_128 + local_118;
        }
        else {
          iVar9 = *local_128;
          if (iVar8 <= *local_128) {
            iVar9 = iVar8;
          }
          if (iVar9 < 1) {
            iVar9 = 0;
          }
          local_148 = local_148 + local_138;
          local_128 = local_128 + local_118;
          (**(code **)(*local_100 + 0x440))(local_100,&local_188,local_110,iVar9);
        }
        fVar13 = local_180;
        fVar16 = (float)local_188;
        fVar5 = local_188._4_4_;
        FUN_144a928e2(&local_e8,local_108 + 0x20);
        fVar6 = local_180;
        fVar11 = fVar13 * local_c8 + fVar5 * local_d8 + fVar16 * local_e8 + local_b8;
        fVar12 = fVar13 * fStack_c4 + fVar5 * fStack_d4 + fVar16 * fStack_e4 + fStack_b4;
        fVar13 = fVar13 * fStack_c0 + fVar5 * fStack_d0 + fVar16 * fStack_e0 + fStack_b0;
        fVar16 = (float)local_188;
        fVar5 = local_188._4_4_;
        FUN_144a928e2(&local_e8,local_108 + 0x120);
        fVar14 = fVar6 * local_c8 + fVar5 * local_d8 + fVar16 * local_e8 + local_b8;
        fVar15 = fVar6 * fStack_c4 + fVar5 * fStack_d4 + fVar16 * fStack_e4 + fStack_b4;
        fVar16 = fVar6 * fStack_c0 + fVar5 * fStack_d0 + fVar16 * fStack_e0 + fStack_b0;
        pfVar1 = local_178 + local_170;
        *local_178 = (fVar11 - fVar14) * fVar4 + fVar14;
        pfVar2 = local_168 + local_160;
        *local_168 = (fVar12 - fVar15) * fVar4 + fVar15;
        pfVar3 = local_158 + local_150;
        *local_158 = (fVar13 - fVar16) * fVar4 + fVar16;
        iVar10 = iVar10 + 1;
        piVar7 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar7 = (int *)(param_2 + 0x3c);
        }
        local_178 = pfVar1;
        local_168 = pfVar2;
        local_158 = pfVar3;
      } while (iVar10 < *piVar7);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497d11ec FUN_1497d11ec body=1638 status=ok
// SIG undefined FUN_1497d11ec(void)

void FUN_1497d11ec(longlong *param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  longlong lVar5;
  undefined4 unaff_EBP;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 unaff_R15D;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_228 [32];
  undefined4 *local_208;
  undefined4 *local_200;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined1 local_1ec [4];
  float *local_1e8;
  int local_1e0;
  float *local_1d8;
  int local_1d0;
  float *local_1c8;
  int local_1c0;
  float *local_1b8;
  undefined8 uStack_1b0;
  int local_1a8;
  float *local_1a0 [2];
  int local_190;
  float *local_188;
  int local_178;
  float *local_170;
  int local_160;
  int *local_158;
  undefined8 uStack_150;
  int local_148;
  undefined1 local_140 [8];
  longlong local_138;
  longlong *local_130;
  longlong local_128;
  undefined8 local_118;
  float fStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1497d3270(local_140);
  local_130 = param_1;
  local_128 = FUN_14479d2ce(local_138);
  local_148 = 0;
  local_158 = (int *)0x0;
  uStack_150 = 0;
  FUN_144a98d08(&local_158,param_2);
  FUN_1448a432c(local_1a0,param_2);
  local_1a8 = 0;
  local_1b8 = (float *)0x0;
  uStack_1b0 = 0;
  FUN_144a98dce(&local_1b8,param_2);
  FUN_144a76c20(&local_1e8,param_2);
  FUN_144a76c20(&local_1d8,param_2);
  FUN_144a76c20(&local_1c8,param_2);
  fVar10 = DAT_14c846338;
  fVar12 = DAT_14c846330._4_4_;
  fVar11 = (float)DAT_14c846330;
  if ((*(int *)(local_138 + 0x2e0) < 1) || (*(int *)(local_138 + 0x2e4) < 1)) {
    FUN_144a928e2(&local_118,local_138 + 0x20);
    fVar9 = fVar11 * (float)local_118;
    fVar13 = fVar11 * local_118._4_4_;
    fVar11 = fVar11 * fStack_110;
    FUN_144a928e2(&local_118,local_138 + 0x120);
    piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar4 = (int *)(param_2 + 0x3c);
    }
    if (0 < *piVar4) {
      iVar7 = 0;
      do {
        pfVar1 = local_1e8 + local_1e0;
        *local_1e8 = fVar10 * local_f8 + fVar12 * local_108 + fVar9 + local_e8;
        pfVar2 = local_1d8 + local_1d0;
        *local_1d8 = fVar10 * fStack_f4 + fVar12 * fStack_104 + fVar13 + fStack_e4;
        pfVar3 = local_1c8 + local_1c0;
        *local_1c8 = fVar10 * fStack_f0 + fVar12 * fStack_100 + fVar11 + fStack_e0;
        iVar7 = iVar7 + 1;
        piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar4 = (int *)(param_2 + 0x3c);
        }
        local_1e8 = pfVar1;
        local_1d8 = pfVar2;
        local_1c8 = pfVar3;
      } while (iVar7 < *piVar4);
    }
  }
  else {
    piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar4 = (int *)(param_2 + 0x3c);
    }
    if (0 < *piVar4) {
      iVar7 = *(int *)(local_138 + 0x2e0) + -1;
      iVar8 = 0;
      do {
        if (local_128 == 0) {
          lVar5 = 0;
          local_158 = local_158 + local_148;
        }
        else {
          iVar6 = *local_158;
          if (iVar7 <= *local_158) {
            iVar6 = iVar7;
          }
          if (iVar6 < 1) {
            iVar6 = 0;
          }
          local_200 = &local_1f4;
          local_208 = &local_1f0;
          local_158 = local_158 + local_148;
          (**(code **)(*local_130 + 0x448))(local_130,local_140,iVar6,local_1ec);
          lVar5 = local_128;
          unaff_EBP = local_1f4;
          unaff_R15D = local_1f0;
        }
        fVar11 = *local_170;
        fVar12 = *local_188;
        fVar10 = *local_1a0[0];
        fVar9 = *local_1b8;
        if (lVar5 == 0) {
          fStack_110 = DAT_14c846338;
          local_118 = CONCAT44(DAT_14c846330._4_4_,(float)DAT_14c846330);
          lVar5 = 0;
          local_1b8 = local_1b8 + local_1a8;
          local_1a0[0] = local_1a0[0] + local_190;
          local_188 = local_188 + local_178;
          local_170 = local_170 + local_160;
        }
        else {
          local_1b8 = local_1b8 + local_1a8;
          local_1a0[0] = local_1a0[0] + local_190;
          local_188 = local_188 + local_178;
          local_170 = local_170 + local_160;
          (**(code **)(*local_130 + 0x440))(local_130,&local_118,local_140);
          lVar5 = local_128;
        }
        fVar13 = fStack_110 * fVar10;
        fVar14 = local_118._4_4_ * fVar10;
        fVar10 = fVar10 * (float)local_118;
        if (lVar5 == 0) {
          fStack_110 = DAT_14c846338;
          local_118 = CONCAT44(DAT_14c846330._4_4_,(float)DAT_14c846330);
          lVar5 = 0;
        }
        else {
          (**(code **)(*local_130 + 0x440))(local_130,&local_118,local_140,unaff_R15D);
          lVar5 = local_128;
        }
        fVar15 = fStack_110 * fVar12;
        fVar17 = local_118._4_4_ * fVar12;
        fVar12 = fVar12 * (float)local_118;
        if (lVar5 == 0) {
          fStack_110 = DAT_14c846338;
          local_118 = CONCAT44(DAT_14c846330._4_4_,(float)DAT_14c846330);
        }
        else {
          (**(code **)(*local_130 + 0x440))(local_130,&local_118,local_140,unaff_EBP);
        }
        fVar12 = fVar11 * (float)local_118 + fVar10 + fVar12;
        fVar16 = local_118._4_4_ * fVar11 + fVar14 + fVar17;
        fVar14 = fStack_110 * fVar11 + fVar13 + fVar15;
        FUN_144a928e2(&local_118,local_138 + 0x20);
        fVar11 = local_f8 * fVar14 + local_108 * fVar16 + (float)local_118 * fVar12 + local_e8;
        fVar10 = fStack_f4 * fVar14 + fStack_104 * fVar16 + local_118._4_4_ * fVar12 + fStack_e4;
        fVar13 = fStack_f0 * fVar14 + fStack_100 * fVar16 + fStack_110 * fVar12 + fStack_e0;
        FUN_144a928e2(&local_118,local_138 + 0x120);
        fVar15 = fVar14 * local_f8 + fVar16 * local_108 + fVar12 * (float)local_118 + local_e8;
        fVar17 = fVar14 * fStack_f4 + fVar16 * fStack_104 + fVar12 * local_118._4_4_ + fStack_e4;
        fVar12 = fVar14 * fStack_f0 + fVar16 * fStack_100 + fVar12 * fStack_110 + fStack_e0;
        pfVar1 = local_1e8 + local_1e0;
        *local_1e8 = (fVar11 - fVar15) * fVar9 + fVar15;
        pfVar2 = local_1d8 + local_1d0;
        *local_1d8 = (fVar10 - fVar17) * fVar9 + fVar17;
        pfVar3 = local_1c8 + local_1c0;
        *local_1c8 = (fVar13 - fVar12) * fVar9 + fVar12;
        iVar8 = iVar8 + 1;
        piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar4 = (int *)(param_2 + 0x3c);
        }
        local_1e8 = pfVar1;
        local_1d8 = pfVar2;
        local_1c8 = pfVar3;
      } while (iVar8 < *piVar4);
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497d1854 FUN_1497d1854 body=1110 status=ok
// SIG undefined FUN_1497d1854(void)

void FUN_1497d1854(undefined8 param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int iVar22;
  int *piVar23;
  undefined1 auStack_1e8 [32];
  float *local_1c8;
  int local_1c0;
  float *local_1b8;
  int local_1b0;
  float *local_1a8;
  int local_1a0;
  float *local_198;
  int local_190;
  float *local_188;
  int local_180;
  float *local_178;
  int local_170;
  float *local_168;
  int local_160;
  float *local_158;
  int local_150;
  float *local_148;
  int local_140;
  float *local_138;
  int local_130;
  float *local_128;
  int local_120;
  float *local_118;
  int local_110;
  float *local_108;
  int local_100;
  float *local_f8;
  int local_f0;
  float *local_e8;
  int local_e0;
  undefined1 local_d8 [8];
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  FUN_1497d3270(local_d8);
  local_c8 = param_1;
  local_c0 = FUN_14479d2ce(local_d0);
  FUN_144a76c20(&local_108,param_2);
  FUN_144a76c20(&local_f8,param_2);
  FUN_144a76c20(&local_e8,param_2);
  FUN_144a76c20(&local_138,param_2);
  FUN_144a76c20(&local_128,param_2);
  FUN_144a76c20(&local_118,param_2);
  FUN_144a76c20(&local_168,param_2);
  FUN_144a76c20(&local_158,param_2);
  FUN_144a76c20(&local_148,param_2);
  FUN_144a76c20(&local_198,param_2);
  FUN_144a76c20(&local_188,param_2);
  FUN_144a76c20(&local_178,param_2);
  FUN_144a76c20(&local_1c8,param_2);
  FUN_144a76c20(&local_1b8,param_2);
  FUN_144a76c20(&local_1a8,param_2);
  piVar23 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar23 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar23) {
    fVar16 = *(float *)(local_d0 + 0x2c4);
    fVar17 = *(float *)(local_d0 + 0x2c8);
    fVar18 = *(float *)(local_d0 + 0x2cc);
    fVar19 = *(float *)(local_d0 + 0x2d0);
    fVar20 = *(float *)(local_d0 + 0x2d4);
    fVar21 = *(float *)(local_d0 + 0x2d8);
    iVar22 = 0;
    do {
      pfVar1 = local_108 + local_100;
      *local_108 = fVar16;
      pfVar2 = local_f8 + local_f0;
      *local_f8 = fVar17;
      pfVar3 = local_e8 + local_e0;
      *local_e8 = fVar18;
      pfVar4 = local_138 + local_130;
      *local_138 = fVar16 - fVar19;
      pfVar5 = local_128 + local_120;
      *local_128 = fVar17 - fVar20;
      pfVar6 = local_118 + local_110;
      *local_118 = fVar18 - fVar21;
      pfVar7 = local_168 + local_160;
      *local_168 = fVar16 + fVar19;
      pfVar8 = local_158 + local_150;
      *local_158 = fVar17 + fVar20;
      pfVar9 = local_148 + local_140;
      *local_148 = fVar18 + fVar21;
      pfVar10 = local_198 + local_190;
      *local_198 = fVar19 + fVar19;
      pfVar11 = local_188 + local_180;
      *local_188 = fVar20 + fVar20;
      pfVar12 = local_178 + local_170;
      *local_178 = fVar21 + fVar21;
      pfVar13 = local_1c8 + local_1c0;
      *local_1c8 = fVar19;
      pfVar14 = local_1b8 + local_1b0;
      *local_1b8 = fVar20;
      pfVar15 = local_1a8 + local_1a0;
      *local_1a8 = fVar21;
      iVar22 = iVar22 + 1;
      piVar23 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar23 = (int *)(param_2 + 0x3c);
      }
      local_1c8 = pfVar13;
      local_1b8 = pfVar14;
      local_1a8 = pfVar15;
      local_198 = pfVar10;
      local_188 = pfVar11;
      local_178 = pfVar12;
      local_168 = pfVar7;
      local_158 = pfVar8;
      local_148 = pfVar9;
      local_138 = pfVar4;
      local_128 = pfVar5;
      local_118 = pfVar6;
      local_108 = pfVar1;
      local_f8 = pfVar2;
      local_e8 = pfVar3;
    } while (iVar22 < *piVar23);
  }
  if ((local_b0 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497d1cac FUN_1497d1cac body=1677 status=ok
// SIG undefined FUN_1497d1cac(void)

void FUN_1497d1cac(undefined8 param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int iVar22;
  int *piVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_2a8 [36];
  float local_284;
  float local_280;
  float local_27c;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  undefined1 local_210;
  undefined4 *local_208;
  int local_200;
  undefined4 *local_1f8;
  int local_1f0;
  undefined4 *local_1e8;
  int local_1e0;
  float *local_1d8;
  int local_1d0;
  float *local_1c8;
  int local_1c0;
  float *local_1b8;
  int local_1b0;
  float *local_1a8;
  int local_1a0;
  float *local_198;
  int local_190;
  float *local_188;
  int local_180;
  float *local_178;
  int local_170;
  float *local_168;
  int local_160;
  float *local_158;
  int local_150;
  float *local_148;
  int local_140;
  float *local_138;
  int local_130;
  float *local_128;
  int local_120;
  float *local_118;
  int local_110;
  float *local_108;
  int local_100;
  float *local_f8;
  int local_f0;
  undefined1 local_e8 [8];
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  FUN_1497d3270(local_e8);
  local_d8 = param_1;
  local_d0 = FUN_14479d2ce(local_e0);
  FUN_144a76c20(&local_118,param_2);
  FUN_144a76c20(&local_108,param_2);
  FUN_144a76c20(&local_f8,param_2);
  FUN_144a76c20(&local_148,param_2);
  FUN_144a76c20(&local_138,param_2);
  FUN_144a76c20(&local_128,param_2);
  FUN_144a76c20(&local_178,param_2);
  FUN_144a76c20(&local_168,param_2);
  FUN_144a76c20(&local_158,param_2);
  FUN_144a76c20(&local_1a8,param_2);
  FUN_144a76c20(&local_198,param_2);
  FUN_144a76c20(&local_188,param_2);
  FUN_144a76c20(&local_1d8,param_2);
  FUN_144a76c20(&local_1c8,param_2);
  FUN_144a76c20(&local_1b8,param_2);
  FUN_144a76c20(&local_208,param_2);
  FUN_144a76c20(&local_1f8,param_2);
  FUN_144a76c20(&local_1e8,param_2);
  local_230 = (double)(*(float *)(local_e0 + 0x2cc) - *(float *)(local_e0 + 0x2d8));
  local_238 = (double)(*(float *)(local_e0 + 0x2c8) - *(float *)(local_e0 + 0x2d4));
  local_240 = (double)(*(float *)(local_e0 + 0x2c4) - *(float *)(local_e0 + 0x2d0));
  local_218 = (double)(*(float *)(local_e0 + 0x2cc) + *(float *)(local_e0 + 0x2d8));
  local_220 = (double)(*(float *)(local_e0 + 0x2c8) + *(float *)(local_e0 + 0x2d4));
  local_228 = (double)(*(float *)(local_e0 + 0x2c4) + *(float *)(local_e0 + 0x2d0));
  local_210 = 1;
  FUN_144b12ece(&local_240,&local_278,local_e0 + 0x20);
  piVar23 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar23 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar23) {
    local_280 = (float)((local_230 + local_218) * 0.5);
    fVar27 = (float)((local_238 + local_220) * 0.5);
    fVar28 = (float)((local_240 + local_228) * 0.5);
    fVar24 = (float)((local_250 - local_268) * 0.5);
    fVar25 = (float)((local_258 - local_270) * 0.5);
    fVar26 = (float)((local_260 - local_278) * 0.5);
    local_27c = fVar24 + fVar24;
    local_284 = fVar25 + fVar25;
    uVar19 = *(undefined4 *)(local_e0 + 8);
    iVar22 = 0;
    uVar20 = *(undefined4 *)(local_e0 + 0xc);
    uVar21 = *(undefined4 *)(local_e0 + 0x10);
    do {
      pfVar1 = local_118 + local_110;
      *local_118 = fVar28;
      pfVar2 = local_108 + local_100;
      *local_108 = fVar27;
      pfVar3 = local_f8 + local_f0;
      *local_f8 = local_280;
      pfVar4 = local_148 + local_140;
      *local_148 = fVar28 - fVar26;
      pfVar5 = local_138 + local_130;
      *local_138 = fVar27 - fVar25;
      pfVar6 = local_128 + local_120;
      *local_128 = local_280 - fVar24;
      pfVar7 = local_178 + local_170;
      *local_178 = fVar28 + fVar26;
      pfVar8 = local_168 + local_160;
      *local_168 = fVar27 + fVar25;
      pfVar9 = local_158 + local_150;
      *local_158 = local_280 + fVar24;
      pfVar10 = local_1a8 + local_1a0;
      *local_1a8 = fVar26 + fVar26;
      pfVar11 = local_198 + local_190;
      *local_198 = local_284;
      pfVar12 = local_188 + local_180;
      *local_188 = local_27c;
      pfVar13 = local_1d8 + local_1d0;
      *local_1d8 = fVar26;
      pfVar14 = local_1c8 + local_1c0;
      *local_1c8 = fVar25;
      pfVar15 = local_1b8 + local_1b0;
      *local_1b8 = fVar24;
      puVar16 = local_208 + local_200;
      *local_208 = uVar19;
      puVar17 = local_1f8 + local_1f0;
      *local_1f8 = uVar20;
      puVar18 = local_1e8 + local_1e0;
      *local_1e8 = uVar21;
      iVar22 = iVar22 + 1;
      piVar23 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar23 = (int *)(param_2 + 0x3c);
      }
      local_208 = puVar16;
      local_1f8 = puVar17;
      local_1e8 = puVar18;
      local_1d8 = pfVar13;
      local_1c8 = pfVar14;
      local_1b8 = pfVar15;
      local_1a8 = pfVar10;
      local_198 = pfVar11;
      local_188 = pfVar12;
      local_178 = pfVar7;
      local_168 = pfVar8;
      local_158 = pfVar9;
      local_148 = pfVar4;
      local_138 = pfVar5;
      local_128 = pfVar6;
      local_118 = pfVar1;
      local_108 = pfVar2;
      local_f8 = pfVar3;
    } while (iVar22 < *piVar23);
  }
  if ((local_c0 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497d233a FUN_1497d233a body=1680 status=ok
// SIG undefined FUN_1497d233a(void)

void FUN_1497d233a(undefined8 param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int iVar22;
  int *piVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_2a8 [36];
  float local_284;
  float local_280;
  float local_27c;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  undefined1 local_210;
  undefined4 *local_208;
  int local_200;
  undefined4 *local_1f8;
  int local_1f0;
  undefined4 *local_1e8;
  int local_1e0;
  float *local_1d8;
  int local_1d0;
  float *local_1c8;
  int local_1c0;
  float *local_1b8;
  int local_1b0;
  float *local_1a8;
  int local_1a0;
  float *local_198;
  int local_190;
  float *local_188;
  int local_180;
  float *local_178;
  int local_170;
  float *local_168;
  int local_160;
  float *local_158;
  int local_150;
  float *local_148;
  int local_140;
  float *local_138;
  int local_130;
  float *local_128;
  int local_120;
  float *local_118;
  int local_110;
  float *local_108;
  int local_100;
  float *local_f8;
  int local_f0;
  undefined1 local_e8 [8];
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  FUN_1497d3270(local_e8);
  local_d8 = param_1;
  local_d0 = FUN_14479d2ce(local_e0);
  FUN_144a76c20(&local_118,param_2);
  FUN_144a76c20(&local_108,param_2);
  FUN_144a76c20(&local_f8,param_2);
  FUN_144a76c20(&local_148,param_2);
  FUN_144a76c20(&local_138,param_2);
  FUN_144a76c20(&local_128,param_2);
  FUN_144a76c20(&local_178,param_2);
  FUN_144a76c20(&local_168,param_2);
  FUN_144a76c20(&local_158,param_2);
  FUN_144a76c20(&local_1a8,param_2);
  FUN_144a76c20(&local_198,param_2);
  FUN_144a76c20(&local_188,param_2);
  FUN_144a76c20(&local_1d8,param_2);
  FUN_144a76c20(&local_1c8,param_2);
  FUN_144a76c20(&local_1b8,param_2);
  FUN_144a76c20(&local_208,param_2);
  FUN_144a76c20(&local_1f8,param_2);
  FUN_144a76c20(&local_1e8,param_2);
  local_230 = (double)(*(float *)(local_e0 + 0x2cc) - *(float *)(local_e0 + 0x2d8));
  local_238 = (double)(*(float *)(local_e0 + 0x2c8) - *(float *)(local_e0 + 0x2d4));
  local_240 = (double)(*(float *)(local_e0 + 0x2c4) - *(float *)(local_e0 + 0x2d0));
  local_218 = (double)(*(float *)(local_e0 + 0x2cc) + *(float *)(local_e0 + 0x2d8));
  local_220 = (double)(*(float *)(local_e0 + 0x2c8) + *(float *)(local_e0 + 0x2d4));
  local_228 = (double)(*(float *)(local_e0 + 0x2c4) + *(float *)(local_e0 + 0x2d0));
  local_210 = 1;
  FUN_144b12ece(&local_240,&local_278,local_e0 + 0x20);
  piVar23 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar23 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar23) {
    local_280 = (float)((local_268 + local_250) * 0.5);
    fVar27 = (float)((local_270 + local_258) * 0.5);
    fVar28 = (float)((local_278 + local_260) * 0.5);
    fVar24 = (float)((local_250 - local_268) * 0.5);
    fVar25 = (float)((local_258 - local_270) * 0.5);
    fVar26 = (float)((local_260 - local_278) * 0.5);
    local_27c = fVar24 + fVar24;
    local_284 = fVar25 + fVar25;
    uVar19 = *(undefined4 *)(local_e0 + 8);
    iVar22 = 0;
    uVar20 = *(undefined4 *)(local_e0 + 0xc);
    uVar21 = *(undefined4 *)(local_e0 + 0x10);
    do {
      pfVar1 = local_118 + local_110;
      *local_118 = fVar28;
      pfVar2 = local_108 + local_100;
      *local_108 = fVar27;
      pfVar3 = local_f8 + local_f0;
      *local_f8 = local_280;
      pfVar4 = local_148 + local_140;
      *local_148 = fVar28 - fVar26;
      pfVar5 = local_138 + local_130;
      *local_138 = fVar27 - fVar25;
      pfVar6 = local_128 + local_120;
      *local_128 = local_280 - fVar24;
      pfVar7 = local_178 + local_170;
      *local_178 = fVar28 + fVar26;
      pfVar8 = local_168 + local_160;
      *local_168 = fVar27 + fVar25;
      pfVar9 = local_158 + local_150;
      *local_158 = local_280 + fVar24;
      pfVar10 = local_1a8 + local_1a0;
      *local_1a8 = fVar26 + fVar26;
      pfVar11 = local_198 + local_190;
      *local_198 = local_284;
      pfVar12 = local_188 + local_180;
      *local_188 = local_27c;
      pfVar13 = local_1d8 + local_1d0;
      *local_1d8 = fVar26;
      pfVar14 = local_1c8 + local_1c0;
      *local_1c8 = fVar25;
      pfVar15 = local_1b8 + local_1b0;
      *local_1b8 = fVar24;
      puVar16 = local_208 + local_200;
      *local_208 = uVar19;
      puVar17 = local_1f8 + local_1f0;
      *local_1f8 = uVar20;
      puVar18 = local_1e8 + local_1e0;
      *local_1e8 = uVar21;
      iVar22 = iVar22 + 1;
      piVar23 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar23 = (int *)(param_2 + 0x3c);
      }
      local_208 = puVar16;
      local_1f8 = puVar17;
      local_1e8 = puVar18;
      local_1d8 = pfVar13;
      local_1c8 = pfVar14;
      local_1b8 = pfVar15;
      local_1a8 = pfVar10;
      local_198 = pfVar11;
      local_188 = pfVar12;
      local_178 = pfVar7;
      local_168 = pfVar8;
      local_158 = pfVar9;
      local_148 = pfVar4;
      local_138 = pfVar5;
      local_128 = pfVar6;
      local_118 = pfVar1;
      local_108 = pfVar2;
      local_f8 = pfVar3;
    } while (iVar22 < *piVar23);
  }
  if ((local_c0 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497d29cc FUN_1497d29cc body=108 status=ok
// SIG undefined FUN_1497d29cc(void)

undefined8 FUN_1497d29cc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  undefined7 extraout_var;
  
  cVar2 = FUN_1481192e4();
  if (((cVar2 != '\0') && (*(char *)(param_2 + 0x38) == *(char *)(param_1 + 0x38))) &&
     (uVar3 = FUN_144a7afa6(param_2 + 0x58,param_1 + 0x58), (char)uVar3 != '\0')) {
    lVar1 = *(longlong *)(param_1 + 0x78);
    uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(lVar1);
      uVar4 = extraout_var;
    }
    if (*(longlong *)(param_2 + 0x78) == lVar1) {
      return CONCAT71(uVar4,*(char *)(param_2 + 0x80) == *(char *)(param_1 + 0x80));
    }
  }
  return 0;
}



// FUNCTION 1497d2a38 FUN_1497d2a38 body=163 status=ok
// SIG undefined FUN_1497d2a38(void)

undefined8 FUN_1497d2a38(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x10) != *(longlong *)(param_1 + 0x10))) {
    uVar5 = 0;
  }
  else {
    lVar4 = FUN_1404101e2(param_2 + 0x50);
    if (lVar4 != 0) {
      FUN_147a91426(lVar4 + 0x20f,param_2);
    }
    *(undefined1 *)(param_2 + 0x38) = *(undefined1 *)(param_1 + 0x38);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_1 + 0x50);
    uVar1 = *(undefined4 *)(param_1 + 0x5c);
    uVar2 = *(undefined4 *)(param_1 + 0x60);
    uVar3 = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_2 + 0x5c) = uVar1;
    *(undefined4 *)(param_2 + 0x60) = uVar2;
    *(undefined4 *)(param_2 + 100) = uVar3;
    FUN_144a787a6(param_2 + 0x68,param_1 + 0x68);
    lVar4 = *(longlong *)(param_1 + 0x78);
    if (DAT_14c950c29 == '\x01') {
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_14689c22e();
        lVar4 = *(longlong *)(param_1 + 0x78);
      }
    }
    *(longlong *)(param_2 + 0x78) = lVar4;
    *(undefined1 *)(param_2 + 0x80) = *(undefined1 *)(param_1 + 0x80);
    FUN_14461671a(param_2);
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 1497d2adc FUN_1497d2adc body=137 status=ok
// SIG undefined FUN_1497d2adc(void)

void FUN_1497d2adc(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_30 = (undefined4)local_48;
  uStack_2c = local_48._4_4_;
  uStack_28 = (undefined4)uStack_40;
  uStack_24 = uStack_40._4_4_;
  FUN_1402599be(param_1,&local_38);
  bVar1 = FUN_140819c20(param_1 + -0x20f,local_38,&local_30);
  *param_1 = *param_1 | bVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497d2b66 FUN_1497d2b66 body=266 status=ok
// SIG undefined FUN_1497d2b66(void)

void FUN_1497d2b66(undefined8 param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_98 [32];
  int *local_78;
  int local_70;
  int *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined1 local_48 [8];
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1497d3270(local_48);
  local_38 = param_1;
  local_30 = FUN_14479d2ce(local_40);
  local_68 = (int *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_144a98d08(&local_68,param_2);
  FUN_140126e42(&local_78);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = *(int *)(local_40 + 0x2e4);
    iVar4 = 0;
    do {
      piVar3 = local_68 + local_58;
      piVar1 = local_78 + local_70;
      *local_78 = -(uint)(*local_68 < iVar2 && -1 < *local_68);
      iVar4 = iVar4 + 1;
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
      local_78 = piVar1;
      local_68 = piVar3;
    } while (iVar4 < *piVar5);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497d2c72 FUN_1497d2c72 body=713 status=ok
// SIG undefined FUN_1497d2c72(void)

void FUN_1497d2c72(undefined8 param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int *piVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  float fVar15;
  undefined1 auStack_138 [40];
  int *local_110;
  int local_108;
  char *local_100;
  int *local_f8 [2];
  int local_e8;
  int *local_e0;
  int local_d0;
  int *local_c8;
  int local_b8;
  int local_a8;
  int iStack_a4;
  int local_a0;
  undefined1 local_98 [8];
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_1497d3270(local_98);
  local_88 = param_1;
  local_80 = FUN_14479d2ce(local_90);
  local_100 = param_2;
  FUN_1416b93de(local_f8,param_2);
  local_a8 = 0;
  iStack_a4 = 0;
  local_a0 = 0;
  FUN_144a76cd4(&local_110,param_2);
  piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar5 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar5) {
    iVar10 = 1;
    if (1 < *(int *)(local_90 + 0x2e4)) {
      iVar10 = *(int *)(local_90 + 0x2e4);
    }
    lVar13 = 0;
    do {
      pcVar3 = local_100;
      piVar5 = local_f8[0] + local_e8;
      local_a8 = *local_f8[0];
      piVar8 = local_e0 + local_d0;
      iStack_a4 = *local_e0;
      piVar2 = local_c8 + local_b8;
      local_a0 = *local_c8;
      local_f8[0] = piVar5;
      local_e0 = piVar8;
      local_c8 = piVar2;
      if (local_a0 == -1) {
        if (*local_100 == '\0') {
          lVar9 = *(longlong *)(local_100 + 0x80) + 0x88;
        }
        else {
          lVar9 = *(longlong *)(local_100 + 0x58);
        }
        uVar12 = *(int *)(lVar9 + 4) * 0xbb38435 + 0x3619636b;
        *(uint *)(lVar9 + 4) = uVar12;
        fVar15 = (float)(uVar12 >> 9 | 0x3f800000) + -1.0;
      }
      else {
        if (*local_100 == '\0') {
          plVar7 = (longlong *)(*(longlong *)(local_100 + 0x80) + 0x90);
        }
        else {
          plVar7 = *(longlong **)(local_100 + 0x60);
          if (*plVar7 == 0) {
            uVar6 = FUN_14153c902((longlong)*(int *)(local_100 + 0x3c) << 2,0);
            **(undefined8 **)(pcVar3 + 0x60) = uVar6;
            plVar7 = *(longlong **)(pcVar3 + 0x60);
          }
        }
        uVar12 = *(uint *)(*plVar7 + lVar13 * 4);
        *(uint *)(*plVar7 + lVar13 * 4) = uVar12 + 1;
        iVar4 = (local_a0 << 0x10 | uVar12) * 0x19660d;
        iVar11 = iVar4 + 0x3c6ef35f;
        iVar14 = (iStack_a4 * 0x19660d + 0x3c6ef35f) * iVar11 + local_a8 * 0x19660d;
        iVar1 = iVar14 + 0x3c6ef35f;
        iVar11 = iStack_a4 * 0x19660d + iVar11 * iVar1 + 0x3c6ef35f;
        fVar15 = (float)((iVar4 + iVar1 * iVar11 + 0x3c6ef35f) * iVar11 + iVar14 + 0x3c6ef35fU >> 8)
                 * 5.9604645e-08;
      }
      piVar5 = local_110 + local_108;
      *local_110 = (int)(fVar15 * (float)iVar10);
      lVar13 = lVar13 + 1;
      piVar8 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar8 = (int *)(param_2 + 0x3c);
      }
      local_110 = piVar5;
    } while (lVar13 < *piVar8);
  }
  if ((local_70 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497d2f3c FUN_1497d2f3c body=188 status=ok
// SIG undefined FUN_1497d2f3c(void)

void FUN_1497d2f3c(undefined8 param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  int local_50;
  undefined1 local_48 [8];
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1497d3270(local_48);
  local_38 = param_1;
  local_30 = FUN_14479d2ce(local_40);
  FUN_144a76cd4(&local_58);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    uVar2 = *(undefined4 *)(local_40 + 0x2e4);
    iVar4 = 0;
    do {
      puVar1 = local_58 + local_50;
      *local_58 = uVar2;
      iVar4 = iVar4 + 1;
      piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar3 = (int *)(param_2 + 0x3c);
      }
      local_58 = puVar1;
    } while (iVar4 < *piVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497d2ffa FUN_1497d2ffa body=266 status=ok
// SIG undefined FUN_1497d2ffa(void)

void FUN_1497d2ffa(undefined8 param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_98 [32];
  int *local_78;
  int local_70;
  int *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined1 local_48 [8];
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1497d3270(local_48);
  local_38 = param_1;
  local_30 = FUN_14479d2ce(local_40);
  local_68 = (int *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_144a98d08(&local_68,param_2);
  FUN_140126e42(&local_78);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = *(int *)(local_40 + 0x2e0);
    iVar4 = 0;
    do {
      piVar3 = local_68 + local_58;
      piVar1 = local_78 + local_70;
      *local_78 = -(uint)(*local_68 < iVar2 && -1 < *local_68);
      iVar4 = iVar4 + 1;
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
      local_78 = piVar1;
      local_68 = piVar3;
    } while (iVar4 < *piVar5);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497d3106 FUN_1497d3106 body=188 status=ok
// SIG undefined FUN_1497d3106(void)

void FUN_1497d3106(undefined8 param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  int local_50;
  undefined1 local_48 [8];
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1497d3270(local_48);
  local_38 = param_1;
  local_30 = FUN_14479d2ce(local_40);
  FUN_144a76cd4(&local_58);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    uVar2 = *(undefined4 *)(local_40 + 0x2e0);
    iVar4 = 0;
    do {
      puVar1 = local_58 + local_50;
      *local_58 = uVar2;
      iVar4 = iVar4 + 1;
      piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar3 = (int *)(param_2 + 0x3c);
      }
      local_58 = puVar1;
    } while (iVar4 < *piVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497d31c4 FUN_1497d31c4 body=170 status=ok
// SIG undefined FUN_1497d31c4(void)

void FUN_1497d31c4(char *param_1)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_68 [40];
  int *local_40;
  int local_38;
  undefined1 local_30 [8];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1497d3270(local_30,param_1);
  FUN_140126e42(&local_40,param_1);
  piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar2 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar2) {
    iVar4 = 0;
    do {
      bVar1 = FUN_144729dda(local_28);
      piVar2 = local_40 + local_38;
      *local_40 = -(uint)bVar1;
      iVar4 = iVar4 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = (int *)(param_1 + 0x3c);
      }
      local_40 = piVar2;
    } while (iVar4 < *piVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497d3270 FUN_1497d3270 body=148 status=ok
// SIG undefined FUN_1497d3270(void)

void FUN_1497d3270(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*param_2 == '\x01') {
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    iVar5 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = iVar5;
    plVar6 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar5 = *piVar3;
    lVar7 = 0;
    if (iVar5 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar5;
        iVar5 = piVar3[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (iVar5 <= (int)uVar4);
    }
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar7 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar5;
    plVar6 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar6 + (longlong)iVar5 * 8);
  return;
}



// FUNCTION 1497d3304 FUN_1497d3304 body=1014 status=ok
// SIG undefined FUN_1497d3304(void)

void FUN_1497d3304(char *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int *piVar17;
  int iVar18;
  undefined1 auStack_198 [32];
  undefined4 *local_178;
  int local_170;
  undefined4 *local_168;
  int local_160;
  undefined4 *local_158;
  int local_150;
  undefined4 *local_148;
  int local_140;
  undefined4 *local_138;
  int local_130;
  undefined4 *local_128;
  int local_120;
  undefined4 *local_118;
  int local_110;
  undefined4 *local_108;
  int local_100;
  undefined4 *local_f8;
  int local_f0;
  undefined4 *local_e8;
  int local_e0;
  undefined4 *local_d8;
  int local_d0;
  undefined4 *local_c8;
  int local_c0;
  undefined4 *local_b8;
  int local_b0;
  undefined4 *local_a8;
  int local_a0;
  undefined4 *local_98;
  int local_90;
  undefined4 *local_88;
  int local_80;
  undefined1 local_78 [8];
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_1497d3270(local_78,param_1);
  FUN_144a76c20(&local_178,param_1);
  FUN_144a76c20(&local_168,param_1);
  FUN_144a76c20(&local_158,param_1);
  FUN_144a76c20(&local_148,param_1);
  FUN_144a76c20(&local_138,param_1);
  FUN_144a76c20(&local_128,param_1);
  FUN_144a76c20(&local_118,param_1);
  FUN_144a76c20(&local_108,param_1);
  FUN_144a76c20(&local_f8,param_1);
  FUN_144a76c20(&local_e8,param_1);
  FUN_144a76c20(&local_d8,param_1);
  FUN_144a76c20(&local_c8,param_1);
  FUN_144a76c20(&local_b8,param_1);
  FUN_144a76c20(&local_a8,param_1);
  FUN_144a76c20(&local_98,param_1);
  FUN_144a76c20(&local_88,param_1);
  piVar17 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar17 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar17) {
    iVar18 = 0;
    do {
      FUN_144a928e2(&local_68,local_70 + 0x20);
      puVar1 = local_178 + local_170;
      *local_178 = local_68;
      puVar2 = local_168 + local_160;
      *local_168 = local_64;
      puVar3 = local_158 + local_150;
      *local_158 = local_60;
      puVar4 = local_148 + local_140;
      *local_148 = local_5c;
      puVar5 = local_138 + local_130;
      *local_138 = local_58;
      puVar6 = local_128 + local_120;
      *local_128 = local_54;
      puVar7 = local_118 + local_110;
      *local_118 = local_50;
      puVar8 = local_108 + local_100;
      *local_108 = local_4c;
      puVar9 = local_f8 + local_f0;
      *local_f8 = local_48;
      puVar10 = local_e8 + local_e0;
      *local_e8 = local_44;
      puVar11 = local_d8 + local_d0;
      *local_d8 = local_40;
      puVar12 = local_c8 + local_c0;
      *local_c8 = local_3c;
      puVar13 = local_b8 + local_b0;
      *local_b8 = local_38;
      puVar14 = local_a8 + local_a0;
      *local_a8 = local_34;
      puVar15 = local_98 + local_90;
      *local_98 = local_30;
      puVar16 = local_88 + local_80;
      *local_88 = local_2c;
      iVar18 = iVar18 + 1;
      piVar17 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar17 = (int *)(param_1 + 0x3c);
      }
      local_178 = puVar1;
      local_168 = puVar2;
      local_158 = puVar3;
      local_148 = puVar4;
      local_138 = puVar5;
      local_128 = puVar6;
      local_118 = puVar7;
      local_108 = puVar8;
      local_f8 = puVar9;
      local_e8 = puVar10;
      local_d8 = puVar11;
      local_c8 = puVar12;
      local_b8 = puVar13;
      local_a8 = puVar14;
      local_98 = puVar15;
      local_88 = puVar16;
    } while (iVar18 < *piVar17);
  }
  if ((local_28 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497d36fc FUN_1497d36fc body=1023 status=ok
// SIG undefined FUN_1497d36fc(void)

void FUN_1497d36fc(char *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int *piVar17;
  int iVar18;
  undefined1 auStack_1a8 [32];
  undefined4 *local_188;
  int local_180;
  undefined4 *local_178;
  int local_170;
  undefined4 *local_168;
  int local_160;
  undefined4 *local_158;
  int local_150;
  undefined4 *local_148;
  int local_140;
  undefined4 *local_138;
  int local_130;
  undefined4 *local_128;
  int local_120;
  undefined4 *local_118;
  int local_110;
  undefined4 *local_108;
  int local_100;
  undefined4 *local_f8;
  int local_f0;
  undefined4 *local_e8;
  int local_e0;
  undefined4 *local_d8;
  int local_d0;
  undefined4 *local_c8;
  int local_c0;
  undefined4 *local_b8;
  int local_b0;
  undefined4 *local_a8;
  int local_a0;
  undefined4 *local_98;
  int local_90;
  undefined1 local_88 [8];
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_1497d3270(local_88,param_1);
  FUN_144a76c20(&local_188,param_1);
  FUN_144a76c20(&local_178,param_1);
  FUN_144a76c20(&local_168,param_1);
  FUN_144a76c20(&local_158,param_1);
  FUN_144a76c20(&local_148,param_1);
  FUN_144a76c20(&local_138,param_1);
  FUN_144a76c20(&local_128,param_1);
  FUN_144a76c20(&local_118,param_1);
  FUN_144a76c20(&local_108,param_1);
  FUN_144a76c20(&local_f8,param_1);
  FUN_144a76c20(&local_e8,param_1);
  FUN_144a76c20(&local_d8,param_1);
  FUN_144a76c20(&local_c8,param_1);
  FUN_144a76c20(&local_b8,param_1);
  FUN_144a76c20(&local_a8,param_1);
  FUN_144a76c20(&local_98,param_1);
  piVar17 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar17 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar17) {
    iVar18 = 0;
    do {
      FUN_144a928e2(&local_78,local_80 + 0xa0);
      puVar1 = local_188 + local_180;
      *local_188 = local_78;
      puVar2 = local_178 + local_170;
      *local_178 = local_74;
      puVar3 = local_168 + local_160;
      *local_168 = local_70;
      puVar4 = local_158 + local_150;
      *local_158 = local_6c;
      puVar5 = local_148 + local_140;
      *local_148 = local_68;
      puVar6 = local_138 + local_130;
      *local_138 = local_64;
      puVar7 = local_128 + local_120;
      *local_128 = local_60;
      puVar8 = local_118 + local_110;
      *local_118 = local_5c;
      puVar9 = local_108 + local_100;
      *local_108 = local_58;
      puVar10 = local_f8 + local_f0;
      *local_f8 = local_54;
      puVar11 = local_e8 + local_e0;
      *local_e8 = local_50;
      puVar12 = local_d8 + local_d0;
      *local_d8 = local_4c;
      puVar13 = local_c8 + local_c0;
      *local_c8 = local_48;
      puVar14 = local_b8 + local_b0;
      *local_b8 = local_44;
      puVar15 = local_a8 + local_a0;
      *local_a8 = local_40;
      puVar16 = local_98 + local_90;
      *local_98 = local_3c;
      iVar18 = iVar18 + 1;
      piVar17 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar17 = (int *)(param_1 + 0x3c);
      }
      local_188 = puVar1;
      local_178 = puVar2;
      local_168 = puVar3;
      local_158 = puVar4;
      local_148 = puVar5;
      local_138 = puVar6;
      local_128 = puVar7;
      local_118 = puVar8;
      local_108 = puVar9;
      local_f8 = puVar10;
      local_e8 = puVar11;
      local_d8 = puVar12;
      local_c8 = puVar13;
      local_b8 = puVar14;
      local_a8 = puVar15;
      local_98 = puVar16;
    } while (iVar18 < *piVar17);
  }
  if ((local_30 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497d3afc FUN_1497d3afc body=198 status=ok
// SIG undefined FUN_1497d3afc(void)

float * FUN_1497d3afc(undefined8 param_1,float *param_2,longlong param_3,uint param_4)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  ulonglong uVar6;
  uint uVar7;
  
  lVar3 = FUN_14479d2ce(*(undefined8 *)(param_3 + 8));
  if (lVar3 != 0) {
    lVar4 = FUN_1409059be();
    if ((((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) && (-1 < (int)param_4)) && (0 < (int)*(uint *)(lVar3 + 0x670))) {
      piVar5 = (int *)(*(longlong *)(lVar3 + 0x668) + 8);
      uVar6 = 1;
      do {
        uVar7 = param_4 - *piVar5;
        if ((int)param_4 < *piVar5) {
          lVar3 = *(longlong *)(piVar5 + -2);
          lVar4 = (ulonglong)param_4 * 0x98;
          dVar1 = *(double *)(lVar3 + 0x10 + lVar4);
          dVar2 = *(double *)(lVar3 + 8 + lVar4);
          *param_2 = (float)*(double *)(lVar3 + lVar4);
          param_2[1] = (float)dVar2;
          param_2[2] = (float)dVar1;
          return param_2;
        }
        if (*(uint *)(lVar3 + 0x670) <= uVar6) break;
        piVar5 = piVar5 + 0x18;
        uVar6 = uVar6 + 1;
        param_4 = uVar7;
      } while (-1 < (int)uVar7);
    }
  }
  param_2[2] = DAT_14c846338;
  *(undefined8 *)param_2 = DAT_14c846330;
  return param_2;
}



// FUNCTION 1497d3bc2 FUN_1497d3bc2 body=220 status=ok
// SIG undefined FUN_1497d3bc2(void)

void FUN_1497d3bc2(undefined8 param_1,longlong param_2,int param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  
  *param_6 = 0;
  *param_5 = 0;
  *param_4 = 0;
  lVar2 = FUN_14479d2ce(*(undefined8 *)(param_2 + 8));
  if (lVar2 != 0) {
    lVar3 = FUN_1409059be();
    if ((((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) && (-1 < param_3)) && (0 < (int)*(uint *)(lVar2 + 0x670))) {
      plVar4 = (longlong *)(*(longlong *)(lVar2 + 0x668) + 0x10);
      uVar5 = 1;
      do {
        iVar1 = (int)plVar4[1] / 3;
        iVar6 = param_3 - iVar1;
        if (param_3 < iVar1) {
          uVar5 = (ulonglong)(uint)(param_3 * 3);
          *param_4 = *(undefined4 *)(*plVar4 + uVar5 * 4);
          *param_5 = *(undefined4 *)(*plVar4 + 4 + uVar5 * 4);
          *param_6 = *(undefined4 *)(*plVar4 + 8 + uVar5 * 4);
          return;
        }
        if (*(uint *)(lVar2 + 0x670) <= uVar5) {
          return;
        }
        plVar4 = plVar4 + 0xc;
        uVar5 = uVar5 + 1;
        param_3 = iVar6;
      } while (-1 < iVar6);
    }
  }
  return;
}



// FUNCTION 1497d3ca8 FUN_1497d3ca8 body=303 status=ok
// SIG undefined FUN_1497d3ca8(void)

bool FUN_1497d3ca8(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  float fVar5;
  double dVar6;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != (undefined8 *)0x0) {
    param_2[1] = &DAT_3f8000003f800000;
    *param_2 = 0x3f80000000000002;
    lVar2 = FUN_14479d2ce(param_3 + 0x48);
    if ((lVar2 != 0) && (plVar3 = *(longlong **)(lVar2 + 0xa8), plVar3 != (longlong *)0x0)) {
      do {
        lVar2 = (**(code **)(*plVar3 + 0x5d8))(plVar3);
        if (lVar2 != 0) break;
        plVar3 = (longlong *)plVar3[0x2d];
      } while (plVar3 != (longlong *)0x0);
      if (lVar2 != 0) {
        FUN_14039bfee(lVar2,&local_28,&local_24);
        *(float *)(param_2 + 1) = (float)local_28;
        *(float *)((longlong)param_2 + 0xc) = (float)local_24;
        uVar1 = FUN_140540672(lVar2);
        *(undefined4 *)param_2 = uVar1;
        if (*(longlong **)(lVar2 + 0x448) != (longlong *)0x0) {
          uVar4 = (**(code **)(**(longlong **)(lVar2 + 0x448) + 0x860))();
          fVar5 = (float)FUN_144a88582(lVar2,uVar4,uVar1);
          dVar6 = tan((double)(fVar5 * 0.017453292) * 0.5);
          *(float *)((longlong)param_2 + 4) = (float)(dVar6 + dVar6);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2 == (undefined8 *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497d3de6 FUN_1497d3de6 body=1420 status=ok
// SIG undefined FUN_1497d3de6(void)

void FUN_1497d3de6(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_158 [36];
  undefined1 local_134 [4];
  wchar_t *local_130;
  undefined2 local_128;
  undefined1 local_126;
  undefined4 local_124;
  wchar_t *local_120;
  wchar_t *local_118;
  undefined4 local_110 [2];
  longlong local_108;
  undefined8 uStack_100;
  longlong *local_f8 [2];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined2 local_b0;
  undefined8 local_ac;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_c0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_b0 = 0;
  local_ac = 0xffffffffffffffff;
  local_80 = 0;
  local_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_74 = 0xffffffff00000080;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_e8 = DAT_14cc26598;
  local_b8 = 0x34;
  FUN_144a5dc74(local_f8);
  FUN_1446f470e(&local_120,L"ViewportScale interface",1);
  local_130 = *(wchar_t **)(param_1 + 0x10);
  if ((local_130 != (wchar_t *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_128 = 1;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = local_120;
  local_110[0] = FUN_144830b78(local_110);
  local_108 = 0;
  uStack_100 = 0;
  FUN_1480742ba(&local_e8,&local_118,local_f8);
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if (local_f8[0] != (longlong *)0x0) {
    (**(code **)(*local_f8[0] + 0x10))();
  }
  FUN_144a5dc74(local_f8);
  FUN_1446f470e(&local_120,L"ScalingMode",1);
  if (DAT_14cc26340 == (wchar_t *)0x0) {
    uVar4 = FUN_141462ccb();
    DAT_14cc26340 =
         (wchar_t *)FUN_14171c317(FUN_14675bcad,uVar4,L"ENiagaraScreenParticleScalingMode");
  }
  local_130 = DAT_14cc26340;
  if ((DAT_14cc26340 != (wchar_t *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(DAT_14cc26340);
  }
  local_128 = 3;
  local_126 = 0;
  local_124 = 0xffffffff;
  local_118 = local_120;
  local_110[0] = FUN_144830b78(local_110);
  local_108 = 0;
  uStack_100 = 0;
  FUN_1480742ba(&local_e8,&local_118,local_f8);
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if (local_f8[0] != (longlong *)0x0) {
    (**(code **)(*local_f8[0] + 0x10))();
  }
  FUN_144a5dc74(local_f8);
  FUN_1446f470e(&local_130,L"ContentDims",1);
  local_118 = local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb42110);
  local_108 = 0;
  uStack_100 = 0;
  FUN_1480742ba(&local_e8,&local_118,local_f8);
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if (local_f8[0] != (longlong *)0x0) {
    (**(code **)(*local_f8[0] + 0x10))();
  }
  FUN_144a5dc74(local_f8);
  FUN_1446f470e(&local_130,L"ContentDepth",1);
  local_118 = local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  local_108 = 0;
  uStack_100 = 0;
  FUN_1480742ba(&local_e8,&local_118,local_f8);
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if (local_f8[0] != (longlong *)0x0) {
    (**(code **)(*local_f8[0] + 0x10))();
  }
  local_118 = L"ScaleXDescription";
  local_110[0] = 0x11;
  FUN_1446e940c(&local_120,&local_118);
  local_118 = L"GbxNiagaraDataInterfaceViewportScale";
  local_110[0] = 0x24;
  FUN_1446e940c(local_134,&local_118);
  FUN_140208bae(local_f8,local_134,&local_120,
                L"Returns the x scale of the particle to match the screen.");
  FUN_1446f470e(&local_130,L"ScaleX",1);
  local_118 = local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_c8;
  local_108 = 0;
  uStack_100 = 0;
  lVar5 = (longlong)(int)uStack_c8;
  uVar3 = (int)uStack_c8 + 1;
  uStack_c8 = CONCAT44(uStack_c8._4_4_,uVar3);
  if (uStack_c8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_d0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_d0 + 8 + lVar5 * 0xc) = local_110[0];
  *(wchar_t **)(local_d0 + lVar5 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if (local_f8[0] != (longlong *)0x0) {
    (**(code **)(*local_f8[0] + 0x10))();
  }
  local_118 = L"ScaleYDescription";
  local_110[0] = 0x11;
  FUN_1446e940c(&local_120,&local_118);
  local_118 = L"GbxNiagaraDataInterfaceViewportScale";
  local_110[0] = 0x24;
  FUN_1446e940c(local_134,&local_118);
  FUN_140208bae(local_f8,local_134,&local_120,
                L"Returns the y scale of the particle to match the screen.");
  FUN_1446f470e(&local_130,L"ScaleY",1);
  local_118 = local_130;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb420f0);
  uVar2 = uStack_c8;
  local_108 = 0;
  uStack_100 = 0;
  lVar5 = (longlong)(int)uStack_c8;
  uVar3 = (int)uStack_c8 + 1;
  uStack_c8 = CONCAT44(uStack_c8._4_4_,uVar3);
  if (uStack_c8._4_4_ < uVar3) {
    FUN_14024cd4c(&local_d0,uVar2 & 0xffffffff);
  }
  *(undefined4 *)(local_d0 + 8 + lVar5 * 0xc) = local_110[0];
  *(wchar_t **)(local_d0 + lVar5 * 0xc) = local_118;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if (local_f8[0] != (longlong *)0x0) {
    (**(code **)(*local_f8[0] + 0x10))();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_148d135c0(param_2,iVar1);
  }
  FUN_1481cc21c((longlong)iVar1 * 0x98 + *param_2,&local_e8);
  FUN_148060334(&local_e8);
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497d4374 FUN_1497d4374 body=617 status=ok
// SIG undefined FUN_1497d4374(void)

void FUN_1497d4374(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  byte *pbVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_f8 [32];
  float *local_d8;
  int local_d0;
  float *local_c8;
  int local_c0;
  float *local_b8;
  undefined8 uStack_b0;
  int local_a8;
  float *local_98;
  undefined8 uStack_90;
  int local_88;
  float *local_80;
  undefined8 uStack_78;
  int local_70;
  byte *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined1 local_50 [8];
  int *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1497d45de(local_50,param_1);
  iVar11 = 0;
  local_58 = 0;
  local_68 = (byte *)0x0;
  uStack_60 = 0;
  FUN_1497d93fc(&local_68,param_1);
  local_88 = 0;
  local_98 = (float *)0x0;
  uStack_90 = 0;
  FUN_144a98dce(&local_98,param_1);
  local_70 = 0;
  local_80 = (float *)0x0;
  uStack_78 = 0;
  FUN_144a98dce(&local_80,param_1);
  local_a8 = 0;
  local_b8 = (float *)0x0;
  uStack_b0 = 0;
  FUN_144a98dce(&local_b8,param_1);
  FUN_144a76c20(&local_c8,param_1);
  FUN_144a76c20(&local_d8,param_1);
  piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar10 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar10) {
    fVar6 = (float)local_48[1];
    fVar7 = (float)local_48[2];
    fVar8 = (float)local_48[3];
    fVar13 = (float)(~-(uint)(0.0 < fVar8) & 0x3fe39581 |
                    (uint)(fVar7 / fVar8) & -(uint)(0.0 < fVar8));
    iVar9 = *local_48;
    pbVar12 = local_68;
    do {
      pfVar1 = local_80 + local_70;
      pfVar2 = local_98 + local_88;
      pfVar3 = local_b8 + local_a8;
      fVar14 = *local_b8 * fVar6;
      if (iVar9 == 1 || iVar9 == 2 && fVar8 < fVar7) {
        fVar15 = fVar14 / fVar13;
      }
      else {
        fVar15 = fVar14;
        fVar14 = fVar13 * fVar14;
      }
      fVar14 = fVar14 / *local_98;
      fVar15 = fVar15 / *local_80;
      if (*pbVar12 < 6) {
        fVar16 = *local_98 / *local_80;
        switch(*pbVar12) {
        case 0:
switchD_1497d4525_caseD_0:
          fVar15 = fVar14;
          break;
        case 1:
          fVar14 = fVar15;
          break;
        case 2:
          if (fVar16 < fVar13) goto switchD_1497d4525_caseD_0;
          break;
        case 3:
          if (fVar13 < fVar16) goto switchD_1497d4525_caseD_0;
          break;
        case 5:
          if (fVar13 <= fVar16) {
            fVar15 = fVar15 * (fVar13 / fVar16);
          }
          else {
            fVar14 = fVar14 * (fVar16 / fVar13);
          }
        }
      }
      pfVar4 = local_c8 + local_c0;
      *local_c8 = fVar14;
      pfVar5 = local_d8 + local_d0;
      *local_d8 = fVar15;
      iVar11 = iVar11 + 1;
      piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar10 = (int *)(param_1 + 0x3c);
      }
      pbVar12 = pbVar12 + (longlong)local_58 * 4;
      local_d8 = pfVar5;
      local_c8 = pfVar4;
      local_b8 = pfVar3;
      local_98 = pfVar2;
      local_80 = pfVar1;
    } while (iVar11 < *piVar10);
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497d45de FUN_1497d45de body=148 status=ok
// SIG undefined FUN_1497d45de(void)

void FUN_1497d45de(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*param_2 == '\x01') {
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    iVar5 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = iVar5;
    plVar6 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar5 = *piVar3;
    lVar7 = 0;
    if (iVar5 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar5;
        iVar5 = piVar3[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (iVar5 <= (int)uVar4);
    }
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar7 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar5;
    plVar6 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar6 + (longlong)iVar5 * 8);
  return;
}



// FUNCTION 1497d4672 FUN_1497d4672 body=195 status=ok
// SIG undefined FUN_1497d4672(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1497d4672(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar6;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(param_2 + 0x48);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    lVar6 = lVar1 + 0x48;
    if (*(longlong *)(lVar1 + 0x50) != 0) {
      lVar6 = *(longlong *)(lVar1 + 0x50);
    }
    iVar3 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(lVar1 + 0x58) - 1U &
                             (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        lVar6 = *(longlong *)(lVar1 + 0x10) + (longlong)iVar3 * 0x20;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar3 * 0x20) == lVar2)
        goto LAB_1497d46ca;
        iVar3 = *(int *)(lVar6 + 0x18);
      } while (iVar3 != -1);
    }
  }
  lVar6 = 0;
LAB_1497d46ca:
  uVar4 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  uVar5 = (ulonglong)uVar4;
  FUN_14595008a();
  *(uint *)(param_2 + 0x50) = uVar4 + _DAT_14cc26674;
  lVar1 = *(longlong *)(param_2 + 0x38);
  *(undefined4 *)(lVar1 + uVar5) = *(undefined4 *)(lVar6 + 0x10);
  *(undefined4 *)(lVar1 + 4 + uVar5) = *(undefined4 *)(lVar6 + 0x14);
  *(undefined4 *)(lVar1 + 8 + uVar5) = *(undefined4 *)(lVar6 + 0xc);
  *(undefined4 *)(lVar1 + 0x10 + uVar5) = *(undefined4 *)(lVar6 + 8);
  return;
}



// FUNCTION 1497d47b8 FUN_1497d47b8 body=75 status=ok
// SIG undefined FUN_1497d47b8(void)

undefined8 FUN_1497d47b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_140d02432();
      lVar1 = lVar1 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1497d482c FUN_1497d482c body=59 status=ok
// SIG undefined FUN_1497d482c(void)

undefined8 FUN_1497d482c(longlong *param_1)

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



// FUNCTION 1497d4912 FUN_1497d4912 body=93 status=ok
// SIG undefined FUN_1497d4912(void)

undefined1 FUN_1497d4912(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    do {
      lVar1 = *(longlong *)(param_3 + -8);
      if (DAT_14c950c29 == '\x01') {
        if (lVar1 == 0) {
          lVar1 = 0;
        }
        else {
          FUN_14689c22e();
          lVar1 = *(longlong *)(param_3 + -8);
        }
      }
      *param_2 = lVar1;
      FUN_148061742(param_2 + 1,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 3;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1497d4998 FUN_1497d4998 body=59 status=ok
// SIG undefined FUN_1497d4998(void)

undefined8 FUN_1497d4998(longlong *param_1)

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



// FUNCTION 1497d49de FUN_1497d49de body=38 status=ok
// SIG undefined FUN_1497d49de(void)

void FUN_1497d49de(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1497d4a54 FUN_1497d4a54 body=78 status=ok
// SIG undefined FUN_1497d4a54(void)

longlong * FUN_1497d4a54(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1406fc1fc(*param_1,(int)param_1[1]);
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



// FUNCTION 1497d4ab2 FUN_1497d4ab2 body=93 status=ok
// SIG undefined FUN_1497d4ab2(void)

void FUN_1497d4ab2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be77bd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1497d4b10 FUN_1497d4b10 body=93 status=ok
// SIG undefined FUN_1497d4b10(void)

void FUN_1497d4b10(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be77bd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1497d4b6e FUN_1497d4b6e body=126 status=ok
// SIG undefined FUN_1497d4b6e(void)

void FUN_1497d4b6e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be77bd0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001497d4bdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1497d4bec FUN_1497d4bec body=24 status=ok
// SIG undefined FUN_1497d4bec(void)

undefined8 FUN_1497d4bec(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x448))();
  return 1;
}



// FUNCTION 1497d4c14 FUN_1497d4c14 body=93 status=ok
// SIG undefined FUN_1497d4c14(void)

void FUN_1497d4c14(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be77c40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1497d4c72 FUN_1497d4c72 body=93 status=ok
// SIG undefined FUN_1497d4c72(void)

void FUN_1497d4c72(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be77c40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1497d4cd0 FUN_1497d4cd0 body=126 status=ok
// SIG undefined FUN_1497d4cd0(void)

void FUN_1497d4cd0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be77c40;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001497d4d3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1497d4d4e FUN_1497d4d4e body=24 status=ok
// SIG undefined FUN_1497d4d4e(void)

undefined8 FUN_1497d4d4e(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x450))();
  return 1;
}



// FUNCTION 1497d4d76 FUN_1497d4d76 body=93 status=ok
// SIG undefined FUN_1497d4d76(void)

void FUN_1497d4d76(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be77cb0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1497d4dd4 FUN_1497d4dd4 body=93 status=ok
// SIG undefined FUN_1497d4dd4(void)

void FUN_1497d4dd4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be77cb0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1497d4e32 FUN_1497d4e32 body=126 status=ok
// SIG undefined FUN_1497d4e32(void)

void FUN_1497d4e32(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be77cb0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001497d4ea1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1497d4eb0 FUN_1497d4eb0 body=24 status=ok
// SIG undefined FUN_1497d4eb0(void)

undefined8 FUN_1497d4eb0(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x458))();
  return 1;
}



// FUNCTION 1497d4ec8 FUN_1497d4ec8 body=29 status=ok
// SIG undefined FUN_1497d4ec8(void)

undefined8 FUN_1497d4ec8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497d4efa FUN_1497d4efa body=93 status=ok
// SIG undefined FUN_1497d4efa(void)

void FUN_1497d4efa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be77d20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1497d4f58 FUN_1497d4f58 body=93 status=ok
// SIG undefined FUN_1497d4f58(void)

void FUN_1497d4f58(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be77d20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1497d4fb6 FUN_1497d4fb6 body=126 status=ok
// SIG undefined FUN_1497d4fb6(void)

void FUN_1497d4fb6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be77d20;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001497d5025. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1497d5046 FUN_1497d5046 body=24 status=ok
// SIG undefined FUN_1497d5046(void)

undefined8 FUN_1497d5046(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x460))();
  return 1;
}



// FUNCTION 1497d506e FUN_1497d506e body=93 status=ok
// SIG undefined FUN_1497d506e(void)

void FUN_1497d506e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be77d90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1497d50cc FUN_1497d50cc body=93 status=ok
// SIG undefined FUN_1497d50cc(void)

void FUN_1497d50cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be77d90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1497d512a FUN_1497d512a body=126 status=ok
// SIG undefined FUN_1497d512a(void)

void FUN_1497d512a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be77d90;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001497d5199. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1497d51a8 FUN_1497d51a8 body=24 status=ok
// SIG undefined FUN_1497d51a8(void)

undefined8 FUN_1497d51a8(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x468))();
  return 1;
}



// FUNCTION 1497d51d0 FUN_1497d51d0 body=93 status=ok
// SIG undefined FUN_1497d51d0(void)

void FUN_1497d51d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be77e00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1497d522e FUN_1497d522e body=93 status=ok
// SIG undefined FUN_1497d522e(void)

void FUN_1497d522e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be77e00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1497d528c FUN_1497d528c body=126 status=ok
// SIG undefined FUN_1497d528c(void)

void FUN_1497d528c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be77e00;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001497d52fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1497d530a FUN_1497d530a body=24 status=ok
// SIG undefined FUN_1497d530a(void)

undefined8 FUN_1497d530a(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x470))();
  return 1;
}



// FUNCTION 1497d5328 FUN_1497d5328 body=140 status=ok
// SIG undefined FUN_1497d5328(void)

void FUN_1497d5328(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)
           FUN_1497d53b4(param_1 + 0x10,(int)((ulonglong)*param_3 >> 0x20) * 0x17 + (int)*param_3);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *puVar4 = *param_2;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  puVar4[6] = param_2[6];
  *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(param_2 + 4);
  FUN_1447a122a(puVar4 + 8,param_2 + 8);
  puVar4[0xc] = param_2[0xc];
  FUN_1497d5aa6(puVar4 + 0xe,param_2 + 0xe);
  FUN_1401b956c(param_2 + 0xe);
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1497d53b4 FUN_1497d53b4 body=189 status=ok
// SIG undefined FUN_1497d53b4(void)

longlong FUN_1497d53b4(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0xf8;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0xf8) == *param_3) {
          if (lVar3 != 0) goto LAB_1497d5454;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0xf0);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1497d5472(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0xf8 + *param_1;
LAB_1497d5454:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1497d5472 FUN_1497d5472 body=281 status=ok
// SIG undefined FUN_1497d5472(void)

undefined4 * FUN_1497d5472(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1497d558c(param_1,local_48);
  FUN_1497d572c(param_4,local_40);
  *(undefined4 *)(local_40 + 0xf0) = 0xffffffff;
  cVar1 = FUN_1497d567a(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0xf4) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xf0) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1497d58dc(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497d558c FUN_1497d558c body=237 status=ok
// SIG undefined FUN_1497d558c(void)

int * FUN_1497d558c(longlong *param_1,int *param_2)

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
      FUN_1457075e4(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xf8);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xf8) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xf8 + *param_1;
  return param_2;
}



// FUNCTION 1497d567a FUN_1497d567a body=178 status=ok
// SIG undefined FUN_1497d567a(void)

undefined8 FUN_1497d567a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0xf8);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0xf8) == *param_3) {
          FUN_1401b956c((longlong)_Dst + 0x40);
          if (*(longlong *)((longlong)_Dst + 0x28) != 0) {
            FUN_1400020a8();
          }
          memmove(_Dst,param_3,0xf0);
          FUN_1497d5862(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0xf0);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1497d572c FUN_1497d572c body=309 status=ok
// SIG undefined FUN_1497d572c(void)

undefined8 * FUN_1497d572c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 local_110 [2];
  longlong local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined1 local_f0 [160];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  memset(&local_128,0,0xe8);
  local_128 = 0xffffffff;
  uStack_120 = 0;
  uStack_118 = 0;
  local_110[0] = FUN_144830b78(local_110,&DAT_14cb42160);
  local_50 = 0;
  local_48 = 0x400000000;
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = CONCAT44(uStack_124,local_128);
  param_2[2] = uStack_120;
  *(undefined4 *)(param_2 + 4) = local_110[0];
  param_2[3] = uStack_118;
  param_2[5] = 0;
  local_108 = 0;
  param_2[6] = 0;
  uStack_100 = 0;
  *(undefined4 *)(param_2 + 7) = local_f8;
  memcpy(param_2 + 8,local_f0,0xa0);
  param_2[0x1c] = 0;
  local_50 = 0;
  param_2[0x1d] = 0x400000000;
  local_48 = 0x400000000;
  FUN_1401b956c(local_f0);
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497d5862 FUN_1497d5862 body=122 status=ok
// SIG undefined FUN_1497d5862(void)

void FUN_1497d5862(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xf8) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xf8) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xf8 + 4) = uVar5;
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



// FUNCTION 1497d58dc FUN_1497d58dc body=456 status=ok
// SIG undefined FUN_1497d58dc(void)

void FUN_1497d58dc(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0xf8;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xf4 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xf0 + lVar7) =
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



// FUNCTION 1497d5aa6 FUN_1497d5aa6 body=90 status=ok
// SIG undefined FUN_1497d5aa6(void)

longlong FUN_1497d5aa6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    lVar1 = *(longlong *)(param_1 + 0xa0);
    if (*(longlong *)(param_1 + 0xa0) == 0) {
      lVar1 = param_1;
    }
    FUN_1401b95a9(lVar1,*(undefined4 *)(param_1 + 0xa8));
    lVar1 = *(longlong *)(param_2 + 0xa0);
    if (*(longlong *)(param_2 + 0xa0) == 0) {
      lVar1 = param_2;
    }
    FUN_1497d5b00(param_1,lVar1,*(undefined4 *)(param_2 + 0xa8),*(undefined4 *)(param_1 + 0xac));
  }
  return param_1;
}



// FUNCTION 1497d5b00 FUN_1497d5b00 body=95 status=ok
// SIG undefined FUN_1497d5b00(void)

void FUN_1497d5b00(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0xa8) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)(param_1 + 0xac) = 4;
    return;
  }
  FUN_1497d5b60(param_1,param_3,param_4);
  lVar1 = *(longlong *)(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    lVar1 = param_1;
  }
  FUN_148668df9(lVar1,param_2,param_3);
  return;
}



// FUNCTION 1497d5b60 FUN_1497d5b60 body=119 status=ok
// SIG undefined FUN_1497d5b60(void)

void FUN_1497d5b60(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 4;
    if (4 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x28,0);
      iVar2 = (int)(uVar1 / 0x28);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_140b212a2(param_1,0,iVar3,0x28);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xac) = param_3;
  return;
}



// FUNCTION 1497d5be8 FUN_1497d5be8 body=93 status=ok
// SIG undefined FUN_1497d5be8(void)

void FUN_1497d5be8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be77f30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1497d5c46 FUN_1497d5c46 body=93 status=ok
// SIG undefined FUN_1497d5c46(void)

void FUN_1497d5c46(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be77f30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1497d5ca4 FUN_1497d5ca4 body=126 status=ok
// SIG undefined FUN_1497d5ca4(void)

void FUN_1497d5ca4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be77f30;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001497d5d13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1497d5d22 FUN_1497d5d22 body=24 status=ok
// SIG undefined FUN_1497d5d22(void)

undefined8 FUN_1497d5d22(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x448))();
  return 1;
}



// FUNCTION 1497d5d4a FUN_1497d5d4a body=93 status=ok
// SIG undefined FUN_1497d5d4a(void)

void FUN_1497d5d4a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be77fa0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1497d5da8 FUN_1497d5da8 body=93 status=ok
// SIG undefined FUN_1497d5da8(void)

void FUN_1497d5da8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be77fa0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1497d5e06 FUN_1497d5e06 body=126 status=ok
// SIG undefined FUN_1497d5e06(void)

void FUN_1497d5e06(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be77fa0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001497d5e75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1497d5e84 FUN_1497d5e84 body=24 status=ok
// SIG undefined FUN_1497d5e84(void)

undefined8 FUN_1497d5e84(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x448))();
  return 1;
}



// FUNCTION 1497d5e9c FUN_1497d5e9c body=31 status=ok
// SIG undefined FUN_1497d5e9c(void)

undefined8 FUN_1497d5e9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497d5ed0 FUN_1497d5ed0 body=93 status=ok
// SIG undefined FUN_1497d5ed0(void)

void FUN_1497d5ed0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78010;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1497d5f2e FUN_1497d5f2e body=93 status=ok
// SIG undefined FUN_1497d5f2e(void)

void FUN_1497d5f2e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78010;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1497d5f8c FUN_1497d5f8c body=126 status=ok
// SIG undefined FUN_1497d5f8c(void)

void FUN_1497d5f8c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be78010;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001497d5ffb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1497d600a FUN_1497d600a body=24 status=ok
// SIG undefined FUN_1497d600a(void)

undefined8 FUN_1497d600a(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x450))();
  return 1;
}



// FUNCTION 1497d6032 FUN_1497d6032 body=93 status=ok
// SIG undefined FUN_1497d6032(void)

void FUN_1497d6032(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78080;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1497d6090 FUN_1497d6090 body=93 status=ok
// SIG undefined FUN_1497d6090(void)

void FUN_1497d6090(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78080;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1497d60ee FUN_1497d60ee body=126 status=ok
// SIG undefined FUN_1497d60ee(void)

void FUN_1497d60ee(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be78080;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001497d615d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1497d616c FUN_1497d616c body=24 status=ok
// SIG undefined FUN_1497d616c(void)

undefined8 FUN_1497d616c(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x458))();
  return 1;
}



// FUNCTION 1497d6184 FUN_1497d6184 body=29 status=ok
// SIG undefined FUN_1497d6184(void)

undefined8 FUN_1497d6184(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497d61b6 FUN_1497d61b6 body=93 status=ok
// SIG undefined FUN_1497d61b6(void)

void FUN_1497d61b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be780f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1497d6214 FUN_1497d6214 body=93 status=ok
// SIG undefined FUN_1497d6214(void)

void FUN_1497d6214(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be780f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1497d6272 FUN_1497d6272 body=126 status=ok
// SIG undefined FUN_1497d6272(void)

void FUN_1497d6272(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be780f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001497d62e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1497d6302 FUN_1497d6302 body=24 status=ok
// SIG undefined FUN_1497d6302(void)

undefined8 FUN_1497d6302(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x460))();
  return 1;
}



// FUNCTION 1497d631a FUN_1497d631a body=29 status=ok
// SIG undefined FUN_1497d631a(void)

undefined8 FUN_1497d631a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497d634c FUN_1497d634c body=93 status=ok
// SIG undefined FUN_1497d634c(void)

void FUN_1497d634c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78160;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1497d63aa FUN_1497d63aa body=93 status=ok
// SIG undefined FUN_1497d63aa(void)

void FUN_1497d63aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78160;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1497d6408 FUN_1497d6408 body=126 status=ok
// SIG undefined FUN_1497d6408(void)

void FUN_1497d6408(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be78160;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001497d6477. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1497d6498 FUN_1497d6498 body=24 status=ok
// SIG undefined FUN_1497d6498(void)

undefined8 FUN_1497d6498(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x468))();
  return 1;
}



// FUNCTION 1497d64b0 FUN_1497d64b0 body=29 status=ok
// SIG undefined FUN_1497d64b0(void)

undefined8 FUN_1497d64b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497d64e2 FUN_1497d64e2 body=93 status=ok
// SIG undefined FUN_1497d64e2(void)

void FUN_1497d64e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be781d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1497d6540 FUN_1497d6540 body=93 status=ok
// SIG undefined FUN_1497d6540(void)

void FUN_1497d6540(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be781d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1497d659e FUN_1497d659e body=126 status=ok
// SIG undefined FUN_1497d659e(void)

void FUN_1497d659e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be781d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001497d660d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1497d662e FUN_1497d662e body=24 status=ok
// SIG undefined FUN_1497d662e(void)

undefined8 FUN_1497d662e(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x470))();
  return 1;
}



// FUNCTION 1497d664c FUN_1497d664c body=51 status=ok
// SIG undefined FUN_1497d664c(void)

void FUN_1497d664c(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           FUN_1497d6680(param_1 + 0x10,(int)((ulonglong)*param_3 >> 0x20) * 0x17 + (int)*param_3);
  uVar1 = param_2[1];
  *puVar2 = *param_2;
  puVar2[1] = uVar1;
  return;
}



// FUNCTION 1497d6680 FUN_1497d6680 body=181 status=ok
// SIG undefined FUN_1497d6680(void)

longlong FUN_1497d6680(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_1497d6718;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1497d6736(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_1497d6718:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1497d6736 FUN_1497d6736 body=277 status=ok
// SIG undefined FUN_1497d6736(void)

undefined4 * FUN_1497d6736(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1497d684c(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_1497d6932(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1497d6a2e(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497d684c FUN_1497d684c body=229 status=ok
// SIG undefined FUN_1497d684c(void)

int * FUN_1497d684c(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1497d6932 FUN_1497d6932 body=137 status=ok
// SIG undefined FUN_1497d6932(void)

undefined8 FUN_1497d6932(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
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
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_1497d69bc((int)lVar4,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1497d69bc FUN_1497d69bc body=114 status=ok
// SIG undefined FUN_1497d69bc(void)

void FUN_1497d69bc(longlong *param_1,int param_2)

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



// FUNCTION 1497d6a2e FUN_1497d6a2e body=450 status=ok
// SIG undefined FUN_1497d6a2e(void)

void FUN_1497d6a2e(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 1497d6bf1 FUN_1497d6bf1 body=49 status=ok
// SIG undefined FUN_1497d6bf1(void)

void FUN_1497d6bf1(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1497d6c22 FUN_1497d6c22 body=92 status=ok
// SIG undefined FUN_1497d6c22(void)

ulonglong FUN_1497d6c22(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      if ((*(longlong *)(param_1 + lVar3) != *(longlong *)(param_2 + lVar3)) ||
         (cVar1 = FUN_1401b48d6(param_1 + lVar3 + 8,param_2 + lVar3 + 8), cVar1 == '\0')) {
        uVar2 = 0;
        break;
      }
      lVar3 = lVar3 + 0x58;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1497d6c7e FUN_1497d6c7e body=104 status=ok
// SIG undefined FUN_1497d6c7e(void)

void FUN_1497d6c7e(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xf4 + (longlong)param_2 * 0xf8);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0xf0 + lVar5 * 0xf8);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0xf8 + 0xf0);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0xf8 + 0xf0);
  FUN_1497d6ce6();
  return;
}



// FUNCTION 1497d6ce6 FUN_1497d6ce6 body=72 status=ok
// SIG undefined FUN_1497d6ce6(void)

void FUN_1497d6ce6(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1 + (longlong)param_2 * 0xf8;
  FUN_1401b956c(lVar1 + 0x40);
  if (*(longlong *)(lVar1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_1497d5862(param_1,param_2);
  return;
}



// FUNCTION 1497d6d2e FUN_1497d6d2e body=118 status=ok
// SIG undefined FUN_1497d6d2e(void)

void FUN_1497d6d2e(longlong param_1,uint param_2,int param_3)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)(lVar2 + (ulonglong)param_2 * 0x28);
  FUN_1401b95a9(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0xa8);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x28),(longlong)iVar3 * 0x28);
    iVar1 = *(int *)(param_1 + 0xa8);
  }
  *(int *)(param_1 + 0xa8) = iVar1 - param_3;
  return;
}



// FUNCTION 1497d6da4 FUN_1497d6da4 body=73 status=ok
// SIG undefined FUN_1497d6da4(void)

void FUN_1497d6da4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1497d6dee(*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac));
  if (iVar1 == *(int *)(param_1 + 0xac)) {
    return;
  }
  *(int *)(param_1 + 0xac) = iVar1;
  FUN_140b212a2(param_1,*(undefined4 *)(param_1 + 0xa8),iVar1,0x28);
  return;
}



// FUNCTION 1497d6dee FUN_1497d6dee body=129 status=ok
// SIG undefined FUN_1497d6dee(void)

ulonglong FUN_1497d6dee(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 4;
  if (4 < param_1) {
    iVar2 = param_2 - param_1;
    if ((ulonglong)((longlong)iVar2 * 0x28) < 0x4000) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x28,0);
      uVar1 = uVar1 / 0x28;
    }
  }
  return uVar1;
}



// FUNCTION 1497d6e70 FUN_1497d6e70 body=112 status=ok
// SIG undefined FUN_1497d6e70(void)

void FUN_1497d6e70(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x98,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x98)) {
      uVar2 = uVar1 / 0x98 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x98,8);
  }
  return;
}



// FUNCTION 1497d6ee0 FUN_1497d6ee0 body=349 status=ok
// SIG undefined FUN_1497d6ee0(void)

undefined4 * FUN_1497d6ee0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1402ca3ce(param_1,local_48);
  iVar5 = 1;
  FUN_1446ddc76(local_40,*param_3,1);
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar7 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_58 = 0;
  cVar2 = FUN_14090688a(param_1,uVar7,local_40);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x14) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140906920(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497d703e FUN_1497d703e body=629 status=ok
// SIG undefined FUN_1497d703e(void)

void FUN_1497d703e(char *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  int iVar10;
  int *piVar11;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 *local_80;
  int local_78;
  undefined4 *local_70;
  int local_68;
  undefined4 *local_60;
  int local_58;
  undefined4 *local_50;
  int local_48;
  undefined4 *local_40;
  int local_38;
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140126eee(local_30,param_1);
  FUN_140126e42(&local_40,param_1);
  FUN_144a76c20(&local_80,param_1);
  FUN_144a76c20(&local_70,param_1);
  FUN_144a76c20(&local_60,param_1);
  FUN_144a76c20(&local_50,param_1);
  if (((int)param_2 < 0) || (*(int *)(local_28 + 0xe0) <= (int)param_2)) {
    piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar11 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar11) {
      iVar10 = 0;
      do {
        puVar1 = local_40 + local_38;
        *local_40 = 0;
        uVar6 = param_3[1];
        uVar7 = param_3[2];
        uVar8 = param_3[3];
        puVar2 = local_80 + local_78;
        *local_80 = *param_3;
        puVar3 = local_70 + local_68;
        *local_70 = uVar6;
        puVar4 = local_60 + local_58;
        *local_60 = uVar7;
        puVar5 = local_50 + local_48;
        *local_50 = uVar8;
        iVar10 = iVar10 + 1;
        piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar11 = (int *)(param_1 + 0x3c);
        }
        local_80 = puVar2;
        local_70 = puVar3;
        local_60 = puVar4;
        local_50 = puVar5;
        local_40 = puVar1;
      } while (iVar10 < *piVar11);
    }
  }
  else {
    lVar9 = local_28 + 0x38;
    if (*(longlong *)(local_28 + 0xd8) != 0) {
      lVar9 = *(longlong *)(local_28 + 0xd8);
    }
    FUN_140a1ca64(lVar9 + (ulonglong)param_2 * 0x28,&local_90);
    piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar11 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar11) {
      iVar10 = 0;
      do {
        puVar1 = local_40 + local_38;
        *local_40 = 0xffffffff;
        puVar2 = local_80 + local_78;
        *local_80 = local_90;
        puVar3 = local_70 + local_68;
        *local_70 = local_8c;
        puVar4 = local_60 + local_58;
        *local_60 = local_88;
        puVar5 = local_50 + local_48;
        *local_50 = local_84;
        iVar10 = iVar10 + 1;
        piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar11 = (int *)(param_1 + 0x3c);
        }
        local_80 = puVar2;
        local_70 = puVar3;
        local_60 = puVar4;
        local_50 = puVar5;
        local_40 = puVar1;
      } while (iVar10 < *piVar11);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497d72b4 FUN_1497d72b4 body=114 status=ok
// SIG undefined FUN_1497d72b4(void)

void FUN_1497d72b4(longlong *param_1,int param_2)

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



// FUNCTION 1497d7326 FUN_1497d7326 body=81 status=ok
// SIG undefined FUN_1497d7326(void)

void FUN_1497d7326(longlong *param_1,int param_2)

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
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x40) == param_2) {
          FUN_1497d7378(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x40 + *param_1 + 0x38);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1497d7378 FUN_1497d7378 body=113 status=ok
// SIG undefined FUN_1497d7378(void)

void FUN_1497d7378(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong *plVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x40;
  plVar6 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[8];
  }
  lVar3 = (longlong)*(int *)(lVar1 + 0x3c + lVar2);
  iVar5 = *(int *)((longlong)plVar6 + lVar3 * 4);
  if (iVar5 == param_2) {
    puVar4 = (undefined4 *)((longlong)plVar6 + lVar3 * 4);
  }
  else {
    do {
      lVar3 = (longlong)iVar5;
      iVar5 = *(int *)(lVar1 + 0x38 + lVar3 * 0x40);
    } while (iVar5 != param_2);
    puVar4 = (undefined4 *)(lVar1 + lVar3 * 0x40 + 0x38);
  }
  *puVar4 = *(undefined4 *)(lVar1 + lVar2 + 0x38);
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 8 + lVar2) = 0;
  *(undefined8 *)(lVar1 + 0x10 + lVar2) = 0xffffffffffffffff;
  FUN_1497d72b4();
  return;
}



// FUNCTION 1497d73ea FUN_1497d73ea body=712 status=ok
// SIG undefined FUN_1497d73ea(void)

void FUN_1497d73ea(longlong *param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
  undefined4 *local_128;
  int local_120;
  undefined4 *local_118;
  int local_110;
  undefined4 *local_108;
  int local_100;
  int *local_f8;
  undefined8 uStack_f0;
  int local_e8;
  undefined1 local_e0 [8];
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  undefined1 local_b8 [72];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_1497d3270(local_e0);
  local_d0 = param_1;
  local_c8 = FUN_14479d2ce(local_d8);
  local_f8 = (int *)0x0;
  uStack_f0 = 0;
  local_e8 = 0;
  FUN_144a98d08(&local_f8,param_2);
  FUN_144a76c20(&local_128,param_2);
  FUN_144a76c20(&local_118,param_2);
  FUN_144a76c20(&local_108,param_2);
  uVar6 = DAT_14c846338;
  uVar5 = DAT_14c846330._4_4_;
  uVar4 = (undefined4)DAT_14c846330;
  if (*(int *)(local_d8 + 0x2e4) < 1) {
    FUN_144a928e2(local_b8,local_d8 + 0x20);
    piVar7 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar7 = (int *)(param_2 + 0x3c);
    }
    if (0 < *piVar7) {
      iVar8 = 0;
      do {
        puVar1 = local_128 + local_120;
        *local_128 = uVar4;
        puVar2 = local_118 + local_110;
        *local_118 = uVar5;
        puVar3 = local_108 + local_100;
        *local_108 = uVar6;
        iVar8 = iVar8 + 1;
        piVar7 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar7 = (int *)(param_2 + 0x3c);
        }
        local_128 = puVar1;
        local_118 = puVar2;
        local_108 = puVar3;
      } while (iVar8 < *piVar7);
    }
  }
  else {
    piVar7 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar7 = (int *)(param_2 + 0x3c);
    }
    if (0 < *piVar7) {
      iVar8 = *(int *)(local_d8 + 0x2e4) + -1;
      iVar10 = 0;
      do {
        if (local_c8 == 0) {
          local_130 = DAT_14c846338;
          local_138 = CONCAT44(DAT_14c846330._4_4_,(undefined4)DAT_14c846330);
          local_f8 = local_f8 + local_e8;
        }
        else {
          iVar9 = *local_f8;
          if (iVar8 <= *local_f8) {
            iVar9 = iVar8;
          }
          if (iVar9 < 1) {
            iVar9 = 0;
          }
          local_f8 = local_f8 + local_e8;
          (**(code **)(*local_d0 + 0x440))(local_d0,&local_138,local_e0,iVar9);
        }
        uVar6 = local_130;
        uVar4 = (undefined4)local_138;
        uVar5 = local_138._4_4_;
        FUN_144a928e2(local_b8,local_d8 + 0x20);
        puVar1 = local_128 + local_120;
        *local_128 = uVar4;
        puVar2 = local_118 + local_110;
        *local_118 = uVar5;
        puVar3 = local_108 + local_100;
        *local_108 = uVar6;
        iVar10 = iVar10 + 1;
        piVar7 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar7 = (int *)(param_2 + 0x3c);
        }
        local_128 = puVar1;
        local_118 = puVar2;
        local_108 = puVar3;
      } while (iVar10 < *piVar7);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497d76b4 FUN_1497d76b4 body=842 status=ok
// SIG undefined FUN_1497d76b4(void)

void FUN_1497d76b4(longlong *param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  float local_140;
  float *local_138;
  int local_130;
  float *local_128;
  int local_120;
  float *local_118;
  int local_110;
  int *local_108;
  undefined8 uStack_100;
  int local_f8;
  undefined1 local_f0 [8];
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1497d3270(local_f0);
  local_e0 = param_1;
  local_d8 = FUN_14479d2ce(local_e8);
  local_108 = (int *)0x0;
  uStack_100 = 0;
  local_f8 = 0;
  FUN_144a98d08(&local_108,param_2);
  FUN_144a76c20(&local_138,param_2);
  FUN_144a76c20(&local_128,param_2);
  FUN_144a76c20(&local_118,param_2);
  fVar8 = DAT_14c846338;
  fVar7 = DAT_14c846330._4_4_;
  fVar16 = (float)DAT_14c846330;
  if (*(int *)(local_e8 + 0x2e4) < 1) {
    FUN_144a928e2(&local_c8,local_e8 + 0x20);
    piVar9 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar9 = (int *)(param_2 + 0x3c);
    }
    if (0 < *piVar9) {
      iVar10 = 0;
      do {
        pfVar1 = local_138 + local_130;
        *local_138 = fVar8 * local_a8 + fVar7 * local_b8 + fVar16 * local_c8 + local_98;
        pfVar2 = local_128 + local_120;
        *local_128 = fVar8 * fStack_a4 + fVar7 * fStack_b4 + fVar16 * fStack_c4 + fStack_94;
        pfVar3 = local_118 + local_110;
        *local_118 = fVar8 * fStack_a0 + fVar7 * fStack_b0 + fVar16 * fStack_c0 + fStack_90;
        iVar10 = iVar10 + 1;
        piVar9 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar9 = (int *)(param_2 + 0x3c);
        }
        local_138 = pfVar1;
        local_128 = pfVar2;
        local_118 = pfVar3;
      } while (iVar10 < *piVar9);
    }
  }
  else {
    piVar9 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar9 = (int *)(param_2 + 0x3c);
    }
    if (0 < *piVar9) {
      iVar10 = *(int *)(local_e8 + 0x2e4) + -1;
      iVar12 = 0;
      do {
        if (local_d8 == 0) {
          local_140 = DAT_14c846338;
          local_148 = CONCAT44(DAT_14c846330._4_4_,(float)DAT_14c846330);
          local_108 = local_108 + local_f8;
        }
        else {
          iVar11 = *local_108;
          if (iVar10 <= *local_108) {
            iVar11 = iVar10;
          }
          if (iVar11 < 1) {
            iVar11 = 0;
          }
          local_108 = local_108 + local_f8;
          (**(code **)(*local_e0 + 0x440))(local_e0,&local_148,local_f0,iVar11);
        }
        fVar8 = local_140;
        fVar16 = (float)local_148;
        fVar7 = local_148._4_4_;
        FUN_144a928e2(&local_c8,local_e8 + 0x20);
        fVar13 = fVar8 * local_a8 + fVar7 * local_b8 + fVar16 * local_c8 + local_98;
        fVar14 = fVar8 * fStack_a4 + fVar7 * fStack_b4 + fVar16 * fStack_c4 + fStack_94;
        fVar15 = fVar8 * fStack_a0 + fVar7 * fStack_b0 + fVar16 * fStack_c0 + fStack_90;
        fVar16 = fVar8 * fStack_9c + fVar7 * fStack_ac + fVar16 * fStack_bc + fStack_8c;
        pfVar1 = local_138 + local_130;
        *local_138 = fVar13;
        pfVar2 = local_128 + local_120;
        auVar5._4_4_ = fVar14;
        auVar5._0_4_ = fVar13;
        auVar5._8_4_ = fVar15;
        auVar5._12_4_ = fVar16;
        uVar4 = extractps(auVar5,1);
        *(undefined8 *)local_128 = uVar4;
        pfVar3 = local_118 + local_110;
        auVar6._4_4_ = fVar14;
        auVar6._0_4_ = fVar13;
        auVar6._8_4_ = fVar15;
        auVar6._12_4_ = fVar16;
        uVar4 = extractps(auVar6,2);
        *(undefined8 *)local_118 = uVar4;
        iVar12 = iVar12 + 1;
        piVar9 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar9 = (int *)(param_2 + 0x3c);
        }
        local_138 = pfVar1;
        local_128 = pfVar2;
        local_118 = pfVar3;
      } while (iVar12 < *piVar9);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497d7a00 FUN_1497d7a00 body=29 status=ok
// SIG undefined FUN_1497d7a00(void)

undefined8 FUN_1497d7a00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497d7a38 FUN_1497d7a38 body=29 status=ok
// SIG undefined FUN_1497d7a38(void)

bool FUN_1497d7a38(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1497d7a56 FUN_1497d7a56 body=26 status=ok
// SIG undefined FUN_1497d7a56(void)

bool FUN_1497d7a56(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1497d7a70 FUN_1497d7a70 body=24 status=ok
// SIG undefined FUN_1497d7a70(void)

bool FUN_1497d7a70(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1497d7a88 FUN_1497d7a88 body=93 status=ok
// SIG undefined FUN_1497d7a88(void)

void FUN_1497d7a88(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78a70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1497d7ae6 FUN_1497d7ae6 body=93 status=ok
// SIG undefined FUN_1497d7ae6(void)

void FUN_1497d7ae6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78a70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1497d7b44 FUN_1497d7b44 body=126 status=ok
// SIG undefined FUN_1497d7b44(void)

void FUN_1497d7b44(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be78a70;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001497d7bb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1497d7bc2 FUN_1497d7bc2 body=40 status=ok
// SIG undefined FUN_1497d7bc2(void)

void FUN_1497d7bc2(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001497d7be7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1497d7bea FUN_1497d7bea body=152 status=ok
// SIG undefined FUN_1497d7bea(void)

bool FUN_1497d7bea(longlong param_1,undefined8 param_2)

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



// FUNCTION 1497d7c84 FUN_1497d7c84 body=1296 status=ok
// SIG undefined FUN_1497d7c84(void)

void FUN_1497d7c84(undefined8 param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  char *pcVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int *piVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_1a8 [40];
  float *local_180;
  int local_178;
  float *local_170;
  int local_168;
  float *local_160;
  int local_158;
  int *local_150;
  int local_148;
  char *local_140;
  int *local_138 [2];
  int local_128;
  int *local_120;
  int local_110;
  int *local_108;
  int local_f8;
  int local_e8;
  int iStack_e4;
  int local_e0;
  undefined1 local_d8 [8];
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_1497d3270(local_d8);
  local_c8 = param_1;
  local_c0 = FUN_14479d2ce(local_d0);
  local_140 = param_2;
  FUN_1416b93de(local_138,param_2);
  local_e8 = 0;
  iStack_e4 = 0;
  local_e0 = 0;
  FUN_144a76cd4(&local_150,param_2);
  FUN_144a76c20(&local_180,param_2);
  FUN_144a76c20(&local_170,param_2);
  FUN_144a76c20(&local_160,param_2);
  piVar11 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar11 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar11) {
    iVar13 = 1;
    if (1 < *(int *)(local_d0 + 0x2e0)) {
      iVar13 = *(int *)(local_d0 + 0x2e0);
    }
    lVar16 = 0;
    do {
      pcVar7 = local_140;
      piVar11 = local_138[0] + local_128;
      local_e8 = *local_138[0];
      piVar2 = local_120 + local_110;
      iStack_e4 = *local_120;
      piVar3 = local_108 + local_f8;
      local_e0 = *local_108;
      local_138[0] = piVar11;
      local_120 = piVar2;
      local_108 = piVar3;
      if (local_e0 == -1) {
        if (*local_140 == '\0') {
          lVar12 = *(longlong *)(local_140 + 0x80) + 0x88;
        }
        else {
          lVar12 = *(longlong *)(local_140 + 0x58);
        }
        uVar15 = *(int *)(lVar12 + 4) * 0xbb38435 + 0x3619636b;
        *(uint *)(lVar12 + 4) = uVar15;
        fVar19 = (float)(uVar15 >> 9 | 0x3f800000) + -1.0;
      }
      else {
        if (*local_140 == '\0') {
          plVar10 = (longlong *)(*(longlong *)(local_140 + 0x80) + 0x90);
        }
        else {
          plVar10 = *(longlong **)(local_140 + 0x60);
          if (*plVar10 == 0) {
            uVar9 = FUN_14153c902((longlong)*(int *)(local_140 + 0x3c) << 2,0);
            **(undefined8 **)(pcVar7 + 0x60) = uVar9;
            plVar10 = *(longlong **)(pcVar7 + 0x60);
          }
        }
        uVar15 = *(uint *)(*plVar10 + lVar16 * 4);
        *(uint *)(*plVar10 + lVar16 * 4) = uVar15 + 1;
        iVar8 = (local_e0 << 0x10 | uVar15) * 0x19660d;
        iVar14 = iVar8 + 0x3c6ef35f;
        iVar17 = (iStack_e4 * 0x19660d + 0x3c6ef35f) * iVar14 + local_e8 * 0x19660d;
        iVar1 = iVar17 + 0x3c6ef35f;
        iVar14 = iStack_e4 * 0x19660d + iVar14 * iVar1 + 0x3c6ef35f;
        fVar19 = (float)((iVar8 + iVar1 * iVar14 + 0x3c6ef35f) * iVar14 + iVar17 + 0x3c6ef35fU >> 8)
                 * 5.9604645e-08;
      }
      pcVar7 = local_140;
      piVar11 = local_150 + local_148;
      *local_150 = (int)(fVar19 * (float)iVar13);
      local_150 = piVar11;
      if (local_e0 == -1) {
        if (*local_140 == '\0') {
          lVar12 = *(longlong *)(local_140 + 0x80) + 0x88;
        }
        else {
          lVar12 = *(longlong *)(local_140 + 0x58);
        }
        uVar15 = *(int *)(lVar12 + 4) * 0xbb38435 + 0x3619636b;
        *(uint *)(lVar12 + 4) = uVar15;
        fVar19 = (float)(uVar15 >> 9 | 0x3f800000) + -1.0;
        if (*local_140 == '\x01') {
          lVar12 = *(longlong *)(local_140 + 0x58);
        }
        else {
          lVar12 = *(longlong *)(local_140 + 0x80) + 0x88;
        }
        uVar15 = *(int *)(lVar12 + 4) * 0xbb38435 + 0x3619636b;
        *(uint *)(lVar12 + 4) = uVar15;
        fVar20 = (float)(uVar15 >> 9 | 0x3f800000) + -1.0;
      }
      else {
        if (*local_140 == '\0') {
          plVar10 = (longlong *)(*(longlong *)(local_140 + 0x80) + 0x90);
        }
        else {
          plVar10 = *(longlong **)(local_140 + 0x60);
          if (*plVar10 == 0) {
            uVar9 = FUN_14153c902((longlong)*(int *)(local_140 + 0x3c) << 2,0);
            **(undefined8 **)(pcVar7 + 0x60) = uVar9;
            plVar10 = *(longlong **)(pcVar7 + 0x60);
          }
        }
        uVar15 = *(uint *)(*plVar10 + lVar16 * 4);
        *(uint *)(*plVar10 + lVar16 * 4) = uVar15 + 1;
        iVar8 = (local_e0 << 0x10 | uVar15) * 0x19660d;
        iVar14 = iVar8 + 0x3c6ef35f;
        iVar18 = (iStack_e4 * 0x19660d + 0x3c6ef35f) * iVar14 + local_e8 * 0x19660d;
        iVar1 = iVar18 + 0x3c6ef35f;
        iVar17 = iStack_e4 * 0x19660d + iVar14 * iVar1 + 0x3c6ef35f;
        iVar14 = iVar8 + iVar1 * iVar17 + 0x3c6ef35f;
        uVar15 = iVar14 * iVar17 + iVar18 + 0x3c6ef35f;
        fVar20 = (float)(uVar15 >> 8) * 5.9604645e-08;
        fVar19 = (float)(iVar14 * uVar15 + iVar17 >> 8) * 5.9604645e-08;
      }
      if (fVar20 < 0.0) {
        fVar20 = sqrtf(fVar20);
      }
      else {
        fVar20 = SQRT(fVar20);
      }
      pfVar4 = local_180 + local_178;
      *local_180 = 1.0 - fVar20;
      pfVar5 = local_170 + local_168;
      *local_170 = (1.0 - fVar19) * fVar20;
      pfVar6 = local_160 + local_158;
      *local_160 = fVar19 * fVar20;
      lVar16 = lVar16 + 1;
      piVar11 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar11 = (int *)(param_2 + 0x3c);
      }
      local_180 = pfVar4;
      local_170 = pfVar5;
      local_160 = pfVar6;
    } while (lVar16 < *piVar11);
  }
  if ((local_b0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497d8196 FUN_1497d8196 body=1299 status=ok
// SIG undefined FUN_1497d8196(void)

void FUN_1497d8196(longlong *param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  longlong lVar5;
  undefined4 unaff_EBP;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 unaff_R15D;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_208 [32];
  undefined4 *local_1e8;
  undefined4 *local_1e0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined1 local_1c4 [4];
  float *local_1c0;
  int local_1b8;
  float *local_1b0;
  int local_1a8;
  float *local_1a0;
  int local_198;
  float *local_190 [2];
  int local_180;
  float *local_178;
  int local_168;
  float *local_160;
  int local_150;
  int *local_148;
  undefined8 uStack_140;
  int local_138;
  undefined1 local_130 [8];
  longlong local_128;
  longlong *local_120;
  longlong local_118;
  undefined8 local_108;
  float local_100;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_1497d3270(local_130);
  local_120 = param_1;
  local_118 = FUN_14479d2ce(local_128);
  local_148 = (int *)0x0;
  uStack_140 = 0;
  local_138 = 0;
  FUN_144a98d08(&local_148,param_2);
  FUN_1448a432c(local_190,param_2);
  FUN_144a76c20(&local_1c0,param_2);
  FUN_144a76c20(&local_1b0,param_2);
  FUN_144a76c20(&local_1a0,param_2);
  fVar10 = DAT_14c846338;
  fVar11 = DAT_14c846330._4_4_;
  fVar9 = (float)DAT_14c846330;
  if ((*(int *)(local_128 + 0x2e0) < 1) || (*(int *)(local_128 + 0x2e4) < 1)) {
    FUN_144a928e2(&local_108,local_128 + 0x20);
    piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar4 = (int *)(param_2 + 0x3c);
    }
    if (0 < *piVar4) {
      iVar7 = 0;
      do {
        pfVar1 = local_1c0 + local_1b8;
        *local_1c0 = fVar9;
        pfVar2 = local_1b0 + local_1a8;
        *local_1b0 = fVar11;
        pfVar3 = local_1a0 + local_198;
        *local_1a0 = fVar10;
        iVar7 = iVar7 + 1;
        piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar4 = (int *)(param_2 + 0x3c);
        }
        local_1c0 = pfVar1;
        local_1b0 = pfVar2;
        local_1a0 = pfVar3;
      } while (iVar7 < *piVar4);
    }
  }
  else {
    piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar4 = (int *)(param_2 + 0x3c);
    }
    if (0 < *piVar4) {
      iVar7 = *(int *)(local_128 + 0x2e0) + -1;
      iVar8 = 0;
      do {
        if (local_118 == 0) {
          lVar5 = 0;
          local_148 = local_148 + local_138;
        }
        else {
          iVar6 = *local_148;
          if (iVar7 <= *local_148) {
            iVar6 = iVar7;
          }
          if (iVar6 < 1) {
            iVar6 = 0;
          }
          local_1e0 = &local_1cc;
          local_1e8 = &local_1c8;
          local_148 = local_148 + local_138;
          (**(code **)(*local_120 + 0x448))(local_120,local_130,iVar6,local_1c4);
          lVar5 = local_118;
          unaff_EBP = local_1cc;
          unaff_R15D = local_1c8;
        }
        fVar9 = *local_160;
        fVar11 = *local_178;
        fVar10 = *local_190[0];
        if (lVar5 == 0) {
          local_100 = DAT_14c846338;
          local_108 = CONCAT44(DAT_14c846330._4_4_,(float)DAT_14c846330);
          lVar5 = 0;
          local_190[0] = local_190[0] + local_180;
          local_178 = local_178 + local_168;
          local_160 = local_160 + local_150;
        }
        else {
          local_190[0] = local_190[0] + local_180;
          local_178 = local_178 + local_168;
          local_160 = local_160 + local_150;
          (**(code **)(*local_120 + 0x440))(local_120,&local_108,local_130);
          lVar5 = local_118;
        }
        fVar14 = local_100 * fVar10;
        fVar13 = local_108._4_4_ * fVar10;
        fVar10 = fVar10 * (float)local_108;
        if (lVar5 == 0) {
          local_100 = DAT_14c846338;
          local_108 = CONCAT44(DAT_14c846330._4_4_,(float)DAT_14c846330);
          lVar5 = 0;
        }
        else {
          (**(code **)(*local_120 + 0x440))(local_120,&local_108,local_130,unaff_R15D);
          lVar5 = local_118;
        }
        fVar16 = local_100 * fVar11;
        fVar17 = local_108._4_4_ * fVar11;
        fVar11 = fVar11 * (float)local_108;
        if (lVar5 == 0) {
          local_100 = DAT_14c846338;
          local_108 = CONCAT44(DAT_14c846330._4_4_,(float)DAT_14c846330);
        }
        else {
          (**(code **)(*local_120 + 0x440))(local_120,&local_108,local_130,unaff_EBP);
        }
        fVar12 = local_100 * fVar9;
        fVar15 = local_108._4_4_ * fVar9;
        fVar9 = fVar9 * (float)local_108;
        FUN_144a928e2(&local_108,local_128 + 0x20);
        pfVar1 = local_1c0 + local_1b8;
        *local_1c0 = fVar9 + fVar10 + fVar11;
        pfVar2 = local_1b0 + local_1a8;
        *local_1b0 = fVar15 + fVar13 + fVar17;
        pfVar3 = local_1a0 + local_198;
        *local_1a0 = fVar12 + fVar14 + fVar16;
        iVar8 = iVar8 + 1;
        piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar4 = (int *)(param_2 + 0x3c);
        }
        local_1c0 = pfVar1;
        local_1b0 = pfVar2;
        local_1a0 = pfVar3;
      } while (iVar8 < *piVar4);
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497d86aa FUN_1497d86aa body=1428 status=ok
// SIG undefined FUN_1497d86aa(void)

void FUN_1497d86aa(longlong *param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int *piVar7;
  longlong lVar8;
  undefined4 unaff_EBP;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 unaff_R15D;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_208 [32];
  undefined4 *local_1e8;
  undefined4 *local_1e0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined1 local_1c4 [4];
  float *local_1c0;
  int local_1b8;
  float *local_1b0;
  int local_1a8;
  float *local_1a0;
  int local_198;
  float *local_190 [2];
  int local_180;
  float *local_178;
  int local_168;
  float *local_160;
  int local_150;
  int *local_148;
  undefined8 uStack_140;
  int local_138;
  undefined1 local_130 [8];
  longlong local_128;
  longlong *local_120;
  longlong local_118;
  undefined8 local_108;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_1497d3270(local_130);
  local_120 = param_1;
  local_118 = FUN_14479d2ce(local_128);
  local_148 = (int *)0x0;
  uStack_140 = 0;
  local_138 = 0;
  FUN_144a98d08(&local_148,param_2);
  FUN_1448a432c(local_190,param_2);
  FUN_144a76c20(&local_1c0,param_2);
  FUN_144a76c20(&local_1b0,param_2);
  FUN_144a76c20(&local_1a0,param_2);
  fVar12 = DAT_14c846338;
  fVar13 = DAT_14c846330._4_4_;
  fVar14 = (float)DAT_14c846330;
  if ((*(int *)(local_128 + 0x2e0) < 1) || (*(int *)(local_128 + 0x2e4) < 1)) {
    FUN_144a928e2(&local_108,local_128 + 0x20);
    piVar7 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar7 = (int *)(param_2 + 0x3c);
    }
    if (0 < *piVar7) {
      iVar10 = 0;
      do {
        pfVar1 = local_1c0 + local_1b8;
        *local_1c0 = fVar12 * local_e8 + fVar13 * local_f8 + fVar14 * (float)local_108 + local_d8;
        pfVar2 = local_1b0 + local_1a8;
        *local_1b0 = fVar12 * fStack_e4 + fVar13 * fStack_f4 + fVar14 * local_108._4_4_ + fStack_d4;
        pfVar3 = local_1a0 + local_198;
        *local_1a0 = fVar12 * fStack_e0 + fVar13 * fStack_f0 + fVar14 * fStack_100 + fStack_d0;
        iVar10 = iVar10 + 1;
        piVar7 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar7 = (int *)(param_2 + 0x3c);
        }
        local_1c0 = pfVar1;
        local_1b0 = pfVar2;
        local_1a0 = pfVar3;
      } while (iVar10 < *piVar7);
    }
  }
  else {
    piVar7 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar7 = (int *)(param_2 + 0x3c);
    }
    if (0 < *piVar7) {
      iVar10 = *(int *)(local_128 + 0x2e0) + -1;
      iVar11 = 0;
      do {
        if (local_118 == 0) {
          lVar8 = 0;
          local_148 = local_148 + local_138;
        }
        else {
          iVar9 = *local_148;
          if (iVar10 <= *local_148) {
            iVar9 = iVar10;
          }
          if (iVar9 < 1) {
            iVar9 = 0;
          }
          local_1e0 = &local_1cc;
          local_1e8 = &local_1c8;
          local_148 = local_148 + local_138;
          (**(code **)(*local_120 + 0x448))(local_120,local_130,iVar9,local_1c4);
          lVar8 = local_118;
          unaff_EBP = local_1cc;
          unaff_R15D = local_1c8;
        }
        fVar14 = *local_160;
        fVar13 = *local_178;
        fVar12 = *local_190[0];
        if (lVar8 == 0) {
          fStack_100 = DAT_14c846338;
          local_108 = CONCAT44(DAT_14c846330._4_4_,(float)DAT_14c846330);
          lVar8 = 0;
          local_190[0] = local_190[0] + local_180;
          local_178 = local_178 + local_168;
          local_160 = local_160 + local_150;
        }
        else {
          local_190[0] = local_190[0] + local_180;
          local_178 = local_178 + local_168;
          local_160 = local_160 + local_150;
          (**(code **)(*local_120 + 0x440))(local_120,&local_108,local_130);
          lVar8 = local_118;
        }
        fVar15 = fStack_100 * fVar12;
        fVar16 = local_108._4_4_ * fVar12;
        fVar12 = fVar12 * (float)local_108;
        if (lVar8 == 0) {
          fStack_100 = DAT_14c846338;
          local_108 = CONCAT44(DAT_14c846330._4_4_,(float)DAT_14c846330);
          lVar8 = 0;
        }
        else {
          (**(code **)(*local_120 + 0x440))(local_120,&local_108,local_130,unaff_R15D);
          lVar8 = local_118;
        }
        fVar17 = fStack_100 * fVar13;
        fVar18 = local_108._4_4_ * fVar13;
        fVar13 = fVar13 * (float)local_108;
        if (lVar8 == 0) {
          fStack_100 = DAT_14c846338;
          local_108 = CONCAT44(DAT_14c846330._4_4_,(float)DAT_14c846330);
        }
        else {
          (**(code **)(*local_120 + 0x440))(local_120,&local_108,local_130,unaff_EBP);
        }
        fVar13 = fVar14 * (float)local_108 + fVar12 + fVar13;
        fVar18 = local_108._4_4_ * fVar14 + fVar16 + fVar18;
        fVar14 = fStack_100 * fVar14 + fVar15 + fVar17;
        FUN_144a928e2(&local_108,local_128 + 0x20);
        fVar12 = fVar14 * local_e8 + fVar18 * local_f8 + fVar13 * (float)local_108 + local_d8;
        fVar15 = fVar14 * fStack_e4 + fVar18 * fStack_f4 + fVar13 * local_108._4_4_ + fStack_d4;
        fVar16 = fVar14 * fStack_e0 + fVar18 * fStack_f0 + fVar13 * fStack_100 + fStack_d0;
        fVar14 = fVar14 * fStack_dc + fVar18 * fStack_ec + fVar13 * fStack_fc + fStack_cc;
        pfVar1 = local_1c0 + local_1b8;
        *local_1c0 = fVar12;
        pfVar2 = local_1b0 + local_1a8;
        auVar5._4_4_ = fVar15;
        auVar5._0_4_ = fVar12;
        auVar5._8_4_ = fVar16;
        auVar5._12_4_ = fVar14;
        uVar4 = extractps(auVar5,1);
        *(undefined8 *)local_1b0 = uVar4;
        pfVar3 = local_1a0 + local_198;
        auVar6._4_4_ = fVar15;
        auVar6._0_4_ = fVar12;
        auVar6._8_4_ = fVar16;
        auVar6._12_4_ = fVar14;
        uVar4 = extractps(auVar6,2);
        *(undefined8 *)local_1a0 = uVar4;
        iVar11 = iVar11 + 1;
        piVar7 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar7 = (int *)(param_2 + 0x3c);
        }
        local_1c0 = pfVar1;
        local_1b0 = pfVar2;
        local_1a0 = pfVar3;
      } while (iVar11 < *piVar7);
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497d8c40 FUN_1497d8c40 body=138 status=ok
// SIG undefined FUN_1497d8c40(void)

code * FUN_1497d8c40(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshBoundsWSExtents";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1700000003b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1497d8cca;
}



// FUNCTION 1497d8cca FUN_1497d8cca body=138 status=ok
// SIG undefined FUN_1497d8cca(void)

code * FUN_1497d8cca(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshBoundsWSCenter";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1600000003a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14675c4aa;
}



// FUNCTION 1497d8d54 FUN_1497d8d54 body=138 status=ok
// SIG undefined FUN_1497d8d54(void)

code * FUN_1497d8d54(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PreSkinnedLocalBoundsCenter";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14000000038;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1497d8dde;
}



// FUNCTION 1497d8dde FUN_1497d8dde body=138 status=ok
// SIG undefined FUN_1497d8dde(void)

code * FUN_1497d8dde(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstancePreviousRotation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13000000036;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1497d8e68;
}



// FUNCTION 1497d8e68 FUN_1497d8e68 body=138 status=ok
// SIG undefined FUN_1497d8e68(void)

code * FUN_1497d8e68(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstancePreviousTransformInverseTransposed";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf000000035;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1497d8ef2;
}



// FUNCTION 1497d8ef2 FUN_1497d8ef2 body=138 status=ok
// SIG undefined FUN_1497d8ef2(void)

code * FUN_1497d8ef2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstancePreviousTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb000000034;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1497d8f7c;
}



// FUNCTION 1497d8f7c FUN_1497d8f7c body=138 status=ok
// SIG undefined FUN_1497d8f7c(void)

code * FUN_1497d8f7c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceRotation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000033;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1497d9006;
}



// FUNCTION 1497d9006 FUN_1497d9006 body=138 status=ok
// SIG undefined FUN_1497d9006(void)

code * FUN_1497d9006(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceTransformInverseTransposed";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000032;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1497d9090;
}



// FUNCTION 1497d9090 FUN_1497d9090 body=138 status=ok
// SIG undefined FUN_1497d9090(void)

code * FUN_1497d9090(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000031;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1497d911a;
}



// FUNCTION 1497d911a FUN_1497d911a body=138 status=ok
// SIG undefined FUN_1497d911a(void)

code * FUN_1497d911a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InvDeltaSeconds";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000030;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1497d91a4;
}



// FUNCTION 1497d91a4 FUN_1497d91a4 body=138 status=ok
// SIG undefined FUN_1497d91a4(void)

code * FUN_1497d91a4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PositionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000002e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1457446b8;
}



// FUNCTION 1497d922e FUN_1497d922e body=138 status=ok
// SIG undefined FUN_1497d922e(void)

code * FUN_1497d922e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumVertices";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000002c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1497d92b8;
}



// FUNCTION 1497d92b8 FUN_1497d92b8 body=132 status=ok
// SIG undefined FUN_1497d92b8(void)

undefined1 * FUN_1497d92b8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumTriangles";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1457446b4;
}



// FUNCTION 1497d933c FUN_1497d933c body=102 status=ok
// SIG undefined FUN_1497d933c(void)

void FUN_1497d933c(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_1497d93a2(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1497d93a2 FUN_1497d93a2 body=90 status=ok
// SIG undefined FUN_1497d93a2(void)

void FUN_1497d93a2(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_1497d69bc();
  return;
}



// FUNCTION 1497d93fc FUN_1497d93fc body=194 status=ok
// SIG undefined FUN_1497d93fc(void)

void FUN_1497d93fc(longlong *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if (*param_2 == '\x01') {
    *(uint *)(param_1 + 2) =
         (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)*(int *)(param_2 + 0x30));
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = lVar4;
    iVar5 = (int)param_1[2] * *(int *)(param_2 + 0x44);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar3 = uVar1 & 0x7fff;
    *(uint *)(param_1 + 2) = (uint)(uVar1 >> 0xf);
    lVar4 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar1 < 0) {
      lVar4 = (ulonglong)(uVar3 * *(int *)(lVar4 + 0x80)) + *(longlong *)(lVar4 + 0x70);
    }
    else {
      iVar5 = **(int **)(lVar4 + 0x20);
      lVar6 = 0;
      if (iVar5 <= (int)uVar3) {
        do {
          uVar3 = uVar3 - iVar5;
          iVar5 = (*(int **)(lVar4 + 0x20))[lVar6 + 1];
          lVar6 = lVar6 + 1;
        } while (iVar5 <= (int)uVar3);
      }
      lVar4 = (longlong)(int)uVar3 + *(longlong *)(*(longlong *)(lVar4 + 0x18) + lVar6 * 8);
    }
    *param_1 = lVar4;
    iVar5 = (uint)(uVar1 >> 0xf) * *(int *)(*(longlong *)(param_2 + 0x80) + 0x4c);
  }
  lVar4 = lVar4 + (longlong)iVar5 * 4;
  *param_1 = lVar4;
  param_1[1] = lVar4;
  return;
}



// FUNCTION 1497d94be FUN_1497d94be body=31 status=ok
// SIG undefined FUN_1497d94be(void)

undefined8 FUN_1497d94be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497d94fa FUN_1497d94fa body=93 status=ok
// SIG undefined FUN_1497d94fa(void)

void FUN_1497d94fa(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be78f90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1497d9558 FUN_1497d9558 body=126 status=ok
// SIG undefined FUN_1497d9558(void)

void FUN_1497d9558(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14be78f90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001497d95c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1497d95d6 FUN_1497d95d6 body=21 status=ok
// SIG undefined FUN_1497d95d6(void)

undefined8 FUN_1497d95d6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1497d9608 FUN_1497d9608 body=637 status=ok
// SIG undefined FUN_1497d9608(void)

void FUN_1497d9608(longlong *param_1)

{
  char cVar1;
  char cVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58 [2];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (1 < (int)param_1[1]) goto LAB_1497d984b;
  FUN_1400021e4(param_1 + 0xe,local_58);
  FUN_140e64772(local_58,&local_48);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  iVar4 = DAT_14cc267f0 + -1;
  puVar3 = DAT_14cc267e8;
  if (DAT_14cc267f0 == 0) {
    puVar3 = &DAT_149dfb77a;
    iVar4 = 0;
  }
  cVar1 = FUN_144a791f8(&local_48,puVar3,iVar4,1);
  FUN_1400021e4(param_1 + 0xd,&local_68);
  FUN_140e64772(&local_68,local_58);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  cVar2 = FUN_144a791f8(local_58,&DAT_149e065c6,1,1);
  if (cVar2 == '\x01' && cVar1 == '\0') {
    FUN_140474144(local_88,&DAT_14cc267e8,local_58);
    FUN_144a882a8(local_78,local_88,&DAT_149e0635c);
    FUN_144a7dea0(&local_68,local_78,&local_48);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    local_48 = local_68;
    uStack_40 = uStack_60;
    local_68 = 0;
    uStack_60 = 0;
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
LAB_1497d9777:
    local_98 = 1;
    FUN_140807d8e(&local_48,local_78,L"./Game/",&DAT_149e0635c);
    local_98 = 1;
    FUN_1414bc8e4(local_78,&local_68,&DAT_149e065c6,&DAT_149e0635c);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    local_48 = local_68;
    uStack_40 = uStack_60;
    local_68 = 0;
    uStack_60 = 0;
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
  }
  else if (cVar1 != '\0') goto LAB_1497d9777;
  FUN_144a2b0a4(&local_48,&local_68);
  if (&local_68 == param_1) {
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_68;
    local_68 = 0;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_60._4_4_;
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_1497d984b:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497d9886 FUN_1497d9886 body=245 status=ok
// SIG undefined FUN_1497d9886(void)

undefined8 FUN_1497d9886(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar1 = &DAT_149e25dfc;
  if (*(char *)(param_1 + 0xd0) != '\0') {
    puVar1 = &DAT_149e0209e;
  }
  FUN_1497d997c(local_58,param_1 + 0x80);
  FUN_1400021e4(param_1 + 0x78,local_78);
  FUN_1407ec8fc(local_68,param_1,local_78);
  FUN_1401c7f3e(local_48,local_68,local_58);
  FUN_144a882a8(param_2,local_48,puVar1);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497d997c FUN_1497d997c body=524 status=ok
// SIG undefined FUN_1497d997c(void)

/* WARNING: Removing unreachable block (ram,0x0001497d9ae5) */

undefined8 FUN_1497d997c(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((int)param_2[1] == *(int *)((longlong)param_2 + 0x34)) {
    FUN_140056680(param_1,&DAT_149dfb77a);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
  }
  local_68 = 0;
  uStack_60 = 0;
  plVar1 = param_2 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar4 = 0;
  local_50 = plVar1;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_58);
    iVar4 = (int)param_2[5];
  }
  local_78 = local_48;
  iStack_74 = iStack_44;
  local_70 = local_40;
  local_6c = local_3c;
  local_88 = local_58;
  local_80 = local_50;
  local_90 = param_2;
  if ((iStack_44 == iVar4) && (local_50 == plVar1)) {
    lVar6 = 0;
    uVar5 = 0;
  }
  else {
    do {
      FUN_1400021e4((longlong)iStack_74 * 0x10 + *local_90,&local_58);
      uVar2 = uStack_60;
      lVar6 = (longlong)(int)uStack_60;
      uVar3 = (int)uStack_60 + 1;
      uStack_60 = CONCAT44(uStack_60._4_4_,uVar3);
      if (uStack_60._4_4_ < uVar3) {
        FUN_1447a1bd6(&local_68,uVar2 & 0xffffffff);
      }
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(local_68 + lVar6) = 0;
      *(undefined8 *)(local_68 + lVar6) = local_58;
      *(undefined4 *)(local_68 + 8 + lVar6) = (undefined4)local_50;
      *(undefined4 *)(local_68 + 0xc + lVar6) = local_50._4_4_;
      local_50 = (longlong *)0x0;
      local_58 = 0;
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_90 != param_2 || (local_80 != plVar1 || iStack_74 != iVar4));
    lVar6 = local_68;
    uVar5 = (int)uStack_60;
  }
  FUN_140e836da(lVar6,uVar5);
  FUN_144a8b2a0(param_1,&local_68,&DAT_149e19f34);
  FUN_1447a1747(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497d9b8a FUN_1497d9b8a body=242 status=ok
// SIG undefined FUN_1497d9b8a(void)

void FUN_1497d9b8a(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined1 auStack_f8 [32];
  undefined2 *local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined1 local_b0 [136];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1427879d8(local_b0);
  FUN_140c54e34(local_b0,param_1 + 0x78,0x14);
  FUN_1497d9886(param_2,&local_d8);
  iVar2 = local_d0 + -1;
  puVar1 = local_d8;
  if (local_d0 == 0) {
    puVar1 = &DAT_149dfb77a;
    iVar2 = 0;
  }
  FUN_14681a488(local_b0,puVar1,iVar2);
  FUN_140c54d7a(local_b0);
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  FUN_142787a10(local_b0,&local_c8);
  *(undefined4 *)(param_1 + 0x88) = local_b8;
  *(undefined4 *)(param_1 + 0x78) = (undefined4)local_c8;
  *(undefined4 *)(param_1 + 0x7c) = local_c8._4_4_;
  *(undefined4 *)(param_1 + 0x80) = (undefined4)uStack_c0;
  *(undefined4 *)(param_1 + 0x84) = uStack_c0._4_4_;
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1427879f6(local_b0);
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497d9c94 FUN_1497d9c94 body=36 status=ok
// SIG undefined FUN_1497d9c94(void)

undefined8 FUN_1497d9c94(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1459d9a92();
  FUN_14010318a(uVar1,param_2,0);
  return param_2;
}



// FUNCTION 1497d9cb8 FUN_1497d9cb8 body=76 status=ok
// SIG undefined FUN_1497d9cb8(void)

void FUN_1497d9cb8(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xb8);
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x8c) = 0xffffffff00000080;
  *(undefined1 *)((longlong)param_2 + 0xb0) = 0;
  return;
}



// FUNCTION 1497d9d80 FUN_1497d9d80 body=121 status=ok
// SIG undefined FUN_1497d9d80(void)

undefined1 FUN_1497d9d80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_144881636();
      FUN_144881636(param_2 + lVar6 + 0x60,param_3 + lVar6 + 0x60);
      *(undefined1 *)(param_2 + lVar6 + 0xb0) = *(undefined1 *)(param_3 + lVar6 + 0xb0);
      lVar6 = lVar6 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1497d9e22 FUN_1497d9e22 body=59 status=ok
// SIG undefined FUN_1497d9e22(void)

undefined8 FUN_1497d9e22(longlong *param_1)

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



// FUNCTION 1497d9e6e FUN_1497d9e6e body=40 status=ok
// SIG undefined FUN_1497d9e6e(void)

void FUN_1497d9e6e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_1497d9ee4(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 1497d9ee4 FUN_1497d9ee4 body=87 status=ok
// SIG undefined FUN_1497d9ee4(void)

void FUN_1497d9ee4(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0x10);
  return;
}



// FUNCTION 1497d9f6a FUN_1497d9f6a body=132 status=ok
// SIG undefined FUN_1497d9f6a(void)

undefined8 FUN_1497d9f6a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
    FUN_144881636(param_2 + 0x18,param_3 + 0x18);
    uVar1 = *(undefined4 *)(param_3 + 0x6c);
    uVar2 = *(undefined4 *)(param_3 + 0x70);
    uVar3 = *(undefined4 *)(param_3 + 0x74);
    *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_3 + 0x68);
    *(undefined4 *)(param_2 + 0x6c) = uVar1;
    *(undefined4 *)(param_2 + 0x70) = uVar2;
    *(undefined4 *)(param_2 + 0x74) = uVar3;
    *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_3 + 0x78);
    FUN_144881636(param_2 + 0x80,param_3 + 0x80);
    *(undefined1 *)(param_2 + 0xd0) = *(undefined1 *)(param_3 + 0xd0);
    param_2 = param_2 + 0xd8;
    param_3 = param_3 + 0xd8;
  }
  return 1;
}



// FUNCTION 1497da016 FUN_1497da016 body=59 status=ok
// SIG undefined FUN_1497da016(void)

undefined8 FUN_1497da016(longlong *param_1)

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



// FUNCTION 1497da062 FUN_1497da062 body=40 status=ok
// SIG undefined FUN_1497da062(void)

void FUN_1497da062(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_14675c8e8(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 1497da0d8 FUN_1497da0d8 body=110 status=ok
// SIG undefined FUN_1497da0d8(void)

void FUN_1497da0d8(undefined8 *param_1)

{
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  return;
}



// FUNCTION 1497da148 FUN_1497da148 body=48 status=ok
// SIG undefined FUN_1497da148(void)

void FUN_1497da148(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xd8,8);
  }
  return;
}



// FUNCTION 1497da178 FUN_1497da178 body=29 status=ok
// SIG undefined FUN_1497da178(void)

void FUN_1497da178(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14be7bb60;
  return;
}



// FUNCTION 1497da196 FUN_1497da196 body=36 status=ok
// SIG undefined FUN_1497da196(void)

undefined8 FUN_1497da196(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1497da1d6 FUN_1497da1d6 body=93 status=ok
// SIG undefined FUN_1497da1d6(void)

void FUN_1497da1d6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be7baf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1497da234 FUN_1497da234 body=123 status=ok
// SIG undefined FUN_1497da234(void)

void FUN_1497da234(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14be7baf0;
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



// FUNCTION 1497da2bc FUN_1497da2bc body=21 status=ok
// SIG undefined FUN_1497da2bc(void)

undefined8 FUN_1497da2bc(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1497da2d2 FUN_1497da2d2 body=34 status=ok
// SIG undefined FUN_1497da2d2(void)

undefined8 FUN_1497da2d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1497da33e FUN_1497da33e body=64 status=ok
// SIG undefined FUN_1497da33e(void)

void FUN_1497da33e(longlong param_1,char *param_2)

{
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    if (*param_2 == '\x01') {
      FUN_1497db12a(param_1 + 0x48,param_2);
    }
    else if (*param_2 == '\0') {
      FUN_1497db0b2(param_1 + 0x48,param_2);
    }
    param_2[4] = -1;
    param_2[5] = -1;
    param_2[6] = -1;
    param_2[7] = -1;
  }
  return;
}



// FUNCTION 1497da37e FUN_1497da37e body=431 status=ok
// SIG undefined FUN_1497da37e(void)

void FUN_1497da37e(float *param_1,float *param_2,float *param_3,float param_4,float *param_5,
                  float param_6,undefined8 param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  param_1[2] = DAT_14c846338;
  *(undefined8 *)param_1 = DAT_14c846330;
  fVar2 = param_2[2];
  fVar1 = param_3[2] - fVar2;
  fVar6 = *param_2;
  fVar4 = param_2[1];
  fVar3 = param_3[1] - fVar4;
  fVar7 = *param_3 - fVar6;
  fVar5 = (param_5[2] - fVar2) * fVar1 + (*param_5 - fVar6) * fVar7 + (param_5[1] - fVar4) * fVar3;
  fVar8 = fVar1 * fVar1 + fVar7 * fVar7 + fVar3 * fVar3;
  if (fVar8 <= fVar5) {
    fVar5 = fVar8;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  fVar5 = fVar5 / fVar8;
  fVar2 = fVar1 * fVar5 + fVar2;
  fVar4 = fVar3 * fVar5 + fVar4;
  fVar6 = fVar5 * fVar7 + fVar6;
  fVar5 = fVar2 - param_5[2];
  fVar1 = fVar4 - param_5[1];
  fVar3 = fVar6 - *param_5;
  fVar1 = fVar5 * fVar5 + fVar3 * fVar3 + fVar1 * fVar1;
  fVar5 = (param_4 + param_6) * (param_4 + param_6);
  *(bool *)param_7 = fVar1 < fVar5;
  if (fVar1 < fVar5) {
    fVar5 = param_5[2];
    fVar1 = param_5[1];
    *param_1 = (fVar6 + *param_5) * 0.5;
    param_1[1] = (fVar4 + fVar1) * 0.5;
    param_1[2] = (fVar2 + fVar5) * 0.5;
  }
  return;
}



// FUNCTION 1497da52d FUN_1497da52d body=345 status=ok
// SIG undefined FUN_1497da52d(void)

float * FUN_1497da52d(float *param_1,undefined8 param_2,undefined8 param_3,float param_4,
                     undefined8 param_5,undefined8 param_6,float param_7,undefined8 param_8)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_b8 [32];
  float *local_98;
  float *local_90;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_1[2] = DAT_14c846338;
  *(undefined8 *)param_1 = DAT_14c846330;
  local_90 = &local_88;
  local_98 = &local_7c;
  FUN_1497da687(param_2,param_3,param_5,param_6);
  fVar2 = (local_80 - local_74) * (local_80 - local_74) +
          (local_88 - local_7c) * (local_88 - local_7c) +
          (local_84 - local_78) * (local_84 - local_78);
  fVar1 = (param_4 + param_7) * (param_4 + param_7);
  *(bool *)param_8 = fVar2 < fVar1;
  if (fVar2 < fVar1) {
    *param_1 = (local_88 + local_7c) * 0.5;
    param_1[1] = (local_84 + local_78) * 0.5;
    param_1[2] = (local_80 + local_74) * 0.5;
  }
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497da687 FUN_1497da687 body=887 status=ok
// SIG undefined FUN_1497da687(void)

void FUN_1497da687(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar1 = param_1[2];
  fVar13 = param_2[2] - fVar1;
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar9 = param_2[1] - fVar3;
  fVar8 = *param_2 - fVar2;
  fVar4 = param_4[2] - param_3[2];
  fVar6 = param_4[1] - param_3[1];
  fVar5 = *param_4 - *param_3;
  fVar10 = fVar1 - param_3[2];
  fVar15 = fVar3 - param_3[1];
  fVar14 = fVar2 - *param_3;
  fVar12 = fVar13 * fVar13 + fVar8 * fVar8 + fVar9 * fVar9;
  fVar16 = fVar13 * fVar4 + fVar8 * fVar5 + fVar9 * fVar6;
  fVar7 = fVar13 * fVar10 + fVar8 * fVar14 + fVar9 * fVar15;
  fVar11 = fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6;
  fVar10 = fVar10 * fVar4 + fVar14 * fVar5 + fVar15 * fVar6;
  fVar14 = fVar12 * fVar11 - fVar16 * fVar16;
  if (0.0001 <= fVar14) {
    fVar15 = fVar16 * fVar10 - fVar7 * fVar11;
    if (0.0 <= fVar15) {
      if (fVar15 <= fVar14) {
        fVar10 = fVar10 * fVar12 + -fVar16 * fVar7;
        fVar11 = fVar14;
      }
      else {
        fVar10 = fVar10 + fVar16;
        fVar15 = fVar14;
      }
      goto LAB_1497da82b;
    }
  }
  else {
    fVar14 = 1.0;
  }
  fVar15 = 0.0;
LAB_1497da82b:
  if (0.0 <= fVar10) {
    if (fVar11 < fVar10) {
      fVar16 = fVar16 - fVar7;
      fVar15 = 0.0;
      fVar10 = fVar11;
      if ((0.0 <= fVar16) &&
         (fVar15 = (float)(~-(uint)(fVar12 < fVar16) & (uint)fVar16 |
                          -(uint)(fVar12 < fVar16) & (uint)fVar14), fVar16 <= fVar12)) {
        fVar14 = fVar12;
      }
    }
  }
  else {
    fVar10 = 0.0;
    if (fVar7 <= 0.0) {
      fVar7 = -fVar7;
      fVar15 = (float)(~-(uint)(fVar12 < fVar7) & (uint)fVar7 |
                      -(uint)(fVar12 < fVar7) & (uint)fVar14);
      if (fVar7 <= fVar12) {
        fVar14 = fVar12;
      }
    }
    else {
      fVar15 = 0.0;
    }
  }
  fVar14 = (float)(~-(uint)(ABS(fVar15) < 0.0001) & (uint)(fVar15 / fVar14));
  fVar10 = (float)(~-(uint)(ABS(fVar10) < 0.0001) & (uint)(fVar10 / fVar11));
  *param_5 = fVar2 + fVar8 * fVar14;
  param_5[1] = fVar3 + fVar9 * fVar14;
  param_5[2] = fVar1 + fVar13 * fVar14;
  fVar1 = param_3[2];
  fVar2 = param_3[1];
  *param_6 = fVar5 * fVar10 + *param_3;
  param_6[1] = fVar6 * fVar10 + fVar2;
  param_6[2] = fVar4 * fVar10 + fVar1;
  return;
}



// FUNCTION 1497da9fe FUN_1497da9fe body=245 status=ok
// SIG undefined FUN_1497da9fe(void)

void FUN_1497da9fe(float *param_1,float *param_2,float param_3,float *param_4,float param_5,
                  undefined8 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  param_1[2] = DAT_14c846338;
  *(ulonglong *)param_1 = CONCAT44(DAT_14c846330._4_4_,(float)DAT_14c846330);
  fVar1 = param_2[2] - param_4[2];
  fVar3 = param_2[1] - param_4[1];
  fVar5 = *param_2 - *param_4;
  fVar8 = fVar1 * fVar1 + fVar5 * fVar5 + fVar3 * fVar3;
  fVar7 = SQRT(fVar8);
  *(bool *)param_6 = fVar7 < param_5 + param_3;
  if (fVar7 < param_5 + param_3) {
    if (((fVar8 != 1.0) || (fVar2 = fVar1, fVar4 = fVar3, fVar6 = fVar5, NAN(fVar8))) &&
       (fVar2 = DAT_14c846338, fVar4 = DAT_14c846330._4_4_, fVar6 = (float)DAT_14c846330,
       1e-08 <= fVar8)) {
      fVar7 = 1.0 / fVar7;
      fVar2 = fVar1 * fVar7;
      fVar4 = fVar3 * fVar7;
      fVar6 = fVar5 * fVar7;
    }
    fVar1 = param_2[2];
    fVar3 = param_2[1];
    *param_1 = fVar6 * param_3 + *param_2;
    param_1[1] = fVar4 * param_3 + fVar3;
    param_1[2] = fVar2 * param_3 + fVar1;
  }
  return;
}



// FUNCTION 1497daaf3 FUN_1497daaf3 body=171 status=ok
// SIG undefined FUN_1497daaf3(void)

float * FUN_1497daaf3(float *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar4 = *(float *)(param_2 + 0xc);
  fVar6 = *(float *)(param_2 + 4);
  fVar5 = *(float *)(param_2 + 8);
  fVar1 = *(float *)(param_2 + 0x10);
  fVar7 = fVar6;
  if (fVar1 <= fVar6) {
    fVar7 = fVar1;
  }
  fVar2 = *(float *)(param_2 + 0x14);
  fVar8 = fVar5;
  if (fVar2 <= fVar5) {
    fVar8 = fVar2;
  }
  fVar3 = *(float *)(param_2 + 0x18);
  fVar9 = fVar4;
  if (fVar3 <= fVar4) {
    fVar9 = fVar3;
  }
  if (fVar6 <= fVar1) {
    fVar6 = fVar1;
  }
  if (fVar5 <= fVar2) {
    fVar5 = fVar2;
  }
  if (fVar4 <= fVar3) {
    fVar4 = fVar3;
  }
  fVar1 = *(float *)(param_2 + 0x1c);
  *param_1 = fVar7 - fVar1;
  param_1[1] = fVar8 - fVar1;
  param_1[2] = fVar9 - fVar1;
  param_1[3] = fVar6 + fVar1;
  param_1[4] = fVar5 + fVar1;
  param_1[5] = fVar4 + fVar1;
  *(undefined1 *)(param_1 + 6) = 1;
  return param_1;
}



// FUNCTION 1497dab9e FUN_1497dab9e body=356 status=ok
// SIG undefined FUN_1497dab9e(void)

undefined2 * FUN_1497dab9e(undefined2 *param_1,longlong param_2,undefined2 param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar1 = *(double *)(param_2 + 0x40);
  dVar2 = *(double *)(param_2 + 0x38);
  dVar3 = *(double *)(param_2 + 0x30);
  local_68 = *(undefined8 *)(param_2 + 0x58);
  local_78 = *(undefined8 *)(param_2 + 0x48);
  uStack_70 = *(undefined8 *)(param_2 + 0x50);
  local_a8 = (double)(*(float *)(param_2 + 100) * 0.5);
  local_98 = DAT_14c8462d0 * local_a8;
  local_a0 = DAT_14c8462c8 * local_a8;
  local_a8 = local_a8 * DAT_14c8462c0;
  FUN_1401c9a0e(&local_78,&local_90);
  *param_1 = param_3;
  *(float *)(param_1 + 2) = (float)dVar3 + (float)local_90;
  *(float *)(param_1 + 4) = (float)dVar2 + (float)local_88;
  *(float *)(param_1 + 6) = (float)dVar1 + (float)local_80;
  *(float *)(param_1 + 8) = (float)dVar3 - (float)local_90;
  *(float *)(param_1 + 10) = (float)dVar2 - (float)local_88;
  *(float *)(param_1 + 0xc) = (float)dVar1 - (float)local_80;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x60);
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497dad03 FUN_1497dad03 body=221 status=ok
// SIG undefined FUN_1497dad03(void)

void FUN_1497dad03(longlong *param_1,undefined2 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [36];
  undefined2 local_64 [2];
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar3 = 0;
    do {
      local_58 = (float)*(double *)(lVar1 + 0x40 + lVar3);
      local_5c = (float)*(double *)(lVar1 + 0x38 + lVar3);
      local_60 = (float)*(double *)(lVar1 + 0x30 + lVar3);
      local_54 = *(undefined4 *)(lVar1 + 0x48 + lVar3);
      local_48 = DAT_14c846338;
      local_50 = DAT_14c846330;
      local_64[0] = param_2;
      FUN_1497e2c38(param_3,local_64,&local_50);
      lVar3 = lVar3 + 0x50;
    } while ((longlong)(int)lVar2 * 0x50 != lVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497dade1 FUN_1497dade1 body=291 status=ok
// SIG undefined FUN_1497dade1(void)

void FUN_1497dade1(longlong *param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_a8 [40];
  undefined2 local_80 [2];
  float local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong)(int)param_1[1] != 0) {
    lVar1 = *param_1;
    lVar2 = (longlong)(int)param_1[1] * 0x68;
    do {
      if (0.0001 < *(float *)(lVar1 + 100) || *(float *)(lVar1 + 100) == 0.0001) {
        FUN_1497dab9e(local_80,lVar1,param_2);
        local_58 = DAT_14c846338;
        local_60 = DAT_14c846330;
        FUN_1497e2de4(param_3 + 0x20,local_80,&local_60);
      }
      else {
        local_74 = (float)*(double *)(lVar1 + 0x40);
        local_78 = (float)*(double *)(lVar1 + 0x38);
        local_7c = (float)*(double *)(lVar1 + 0x30);
        local_70 = *(undefined4 *)(lVar1 + 0x60);
        local_80[0] = (undefined2)param_2;
        local_58 = DAT_14c846338;
        local_60 = DAT_14c846330;
        FUN_1497e2c38(param_3,local_80,&local_60);
      }
      lVar1 = lVar1 + 0x68;
      lVar2 = lVar2 + -0x68;
    } while (lVar2 != 0);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497daf05 FUN_1497daf05 body=427 status=ok
// SIG undefined FUN_1497daf05(void)

void FUN_1497daf05(longlong *param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar6 = (**(code **)(*param_1 + 0xb98))();
  plVar7 = (longlong *)FUN_144a81888(param_1);
  if (lVar6 != 0 && plVar7 != (longlong *)0x0) {
    local_78 = 0;
    uStack_70 = 0;
    lVar8 = (**(code **)(*plVar7 + 0x308))(plVar7);
    if (0 < *(int *)(lVar8 + 0x28)) {
      lVar8 = 0;
      lVar11 = 0;
      do {
        lVar9 = (**(code **)(*plVar7 + 0x308))(plVar7);
        iVar4 = FUN_144992686(lVar6,*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + lVar8));
        uVar3 = uStack_70;
        if (iVar4 != -1) {
          uVar2 = *(undefined8 *)(*(longlong *)(lVar6 + 0x40) + (longlong)iVar4 * 8);
          lVar9 = (longlong)(int)uStack_70;
          uVar5 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
          if (uStack_70._4_4_ < uVar5) {
            FUN_1497e2ef2(&local_78,uVar3 & 0xffffffff);
          }
          *(short *)(local_78 + lVar9 * 0x10) = (short)lVar11;
          *(undefined8 *)(local_78 + 8 + lVar9 * 0x10) = uVar2;
        }
        lVar11 = lVar11 + 1;
        lVar10 = (**(code **)(*plVar7 + 0x308))(plVar7);
        lVar9 = local_78;
        lVar8 = lVar8 + 0xc;
      } while (lVar11 < *(int *)(lVar10 + 0x28));
      lVar6 = (longlong)(int)uStack_70;
      if (lVar6 != 0) {
        lVar8 = 0;
        do {
          lVar11 = *(longlong *)(lVar9 + 8 + lVar8);
          if (lVar11 != 0) {
            uVar1 = *(undefined2 *)(lVar9 + lVar8);
            local_58 = *(undefined8 *)(lVar11 + 0x38);
            local_50 = *(undefined4 *)(lVar11 + 0x40);
            FUN_1497dad03(&local_58,uVar1,param_2);
            local_68 = *(undefined8 *)(lVar11 + 0x58);
            local_60 = *(undefined4 *)(lVar11 + 0x60);
            FUN_1497dade1(&local_68,uVar1,param_2);
          }
          lVar8 = lVar8 + 0x10;
        } while (lVar6 * 0x10 != lVar8);
      }
      if (local_78 != 0) {
        FUN_1400020a8(local_78);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497db0b2 FUN_1497db0b2 body=118 status=ok
// SIG undefined FUN_1497db0b2(void)

void FUN_1497db0b2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(undefined4 *)(param_2 + 4);
  FUN_1497e2f78(param_1 + 0x70,uVar1);
  FUN_1497e2fea(param_1 + 0xa8,uVar1);
  local_24 = *(undefined4 *)(param_2 + 0xc);
  FUN_1497db56e(param_1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_1497e33fc(param_1 + 0x38);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48,*(undefined4 *)(param_2 + 8));
}



// FUNCTION 1497db12a FUN_1497db12a body=121 status=ok
// SIG undefined FUN_1497db12a(void)

void FUN_1497db12a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(undefined4 *)(param_2 + 4);
  FUN_1497e305c(param_1 + 0xe0,uVar1);
  FUN_1497e2fea(param_1 + 0x118,uVar1);
  local_24 = *(undefined4 *)(param_2 + 0xc);
  FUN_1497db56e(param_1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_1497e33fc(param_1 + 0x38);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48,*(undefined4 *)(param_2 + 8));
}



// FUNCTION 1497db1a4 FUN_1497db1a4 body=969 status=ok
// SIG undefined FUN_1497db1a4(void)

int FUN_1497db1a4(longlong param_1,float *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  
  iVar9 = *(int *)(param_1 + 0x10);
  lVar15 = (longlong)iVar9;
  if (lVar15 == -1) {
    iVar9 = FUN_1497e30ce(param_1);
    *(int *)(param_1 + 0x10) = iVar9;
    lVar15 = *(longlong *)(param_1 + 0x28);
    uVar6 = *(undefined8 *)param_2;
    uVar7 = *(undefined8 *)(param_2 + 2);
    uVar8 = *(undefined8 *)(param_2 + 5);
    puVar1 = (undefined8 *)(lVar15 + 0x24 + (longlong)iVar9 * 0x34);
    *puVar1 = *(undefined8 *)(param_2 + 3);
    puVar1[1] = uVar8;
    puVar1 = (undefined8 *)(lVar15 + 0x18 + (longlong)iVar9 * 0x34);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x10) * 0x34) =
         *param_3;
    iVar10 = *(int *)(param_1 + 0x10);
  }
  else {
    lVar14 = *(longlong *)(param_1 + 0x28);
    if (*(int *)(lVar14 + 0xc + lVar15 * 0x34) != -1) {
      fVar17 = param_2[5];
      fVar18 = param_2[4];
      fVar19 = param_2[3];
      fVar20 = param_2[2];
      fVar21 = *param_2;
      fVar22 = param_2[1];
      do {
        iVar9 = *(int *)(lVar14 + 8 + lVar15 * 0x34);
        lVar13 = (longlong)iVar9 * 0x34;
        fVar3 = *(float *)(lVar14 + 0x2c + lVar13);
        fVar24 = fVar17;
        if (fVar17 <= fVar3) {
          fVar24 = fVar3;
        }
        fVar3 = *(float *)(lVar14 + 0x28 + lVar13);
        fVar26 = fVar18;
        if (fVar18 <= fVar3) {
          fVar26 = fVar3;
        }
        iVar10 = *(int *)(lVar14 + 0xc + lVar15 * 0x34);
        fVar3 = *(float *)(lVar14 + 0x24 + lVar13);
        fVar23 = fVar19;
        if (fVar19 <= fVar3) {
          fVar23 = fVar3;
        }
        fVar3 = *(float *)(lVar14 + 0x20 + lVar13);
        fVar28 = fVar20;
        if (fVar3 <= fVar20) {
          fVar28 = fVar3;
        }
        fVar3 = *(float *)(lVar14 + 0x1c + lVar13);
        fVar29 = fVar22;
        if (fVar3 <= fVar22) {
          fVar29 = fVar3;
        }
        fVar3 = *(float *)(lVar14 + 0x18 + lVar13);
        fVar30 = fVar21;
        if (fVar3 <= fVar21) {
          fVar30 = fVar3;
        }
        lVar15 = (longlong)iVar10 * 0x34;
        fVar3 = *(float *)(lVar14 + 0x2c + lVar15);
        fVar31 = fVar17;
        if (fVar17 <= fVar3) {
          fVar31 = fVar3;
        }
        fVar3 = *(float *)(lVar14 + 0x28 + lVar15);
        fVar27 = fVar18;
        if (fVar18 <= fVar3) {
          fVar27 = fVar3;
        }
        fVar3 = *(float *)(lVar14 + 0x24 + lVar15);
        fVar25 = fVar19;
        if (fVar19 <= fVar3) {
          fVar25 = fVar3;
        }
        fVar3 = *(float *)(lVar14 + 0x20 + lVar15);
        fVar32 = fVar20;
        if (fVar3 <= fVar20) {
          fVar32 = fVar3;
        }
        fVar3 = *(float *)(lVar14 + 0x1c + lVar15);
        fVar33 = fVar22;
        if (fVar3 <= fVar22) {
          fVar33 = fVar3;
        }
        fVar3 = *(float *)(lVar14 + 0x18 + lVar15);
        fVar34 = fVar21;
        if (fVar3 <= fVar21) {
          fVar34 = fVar3;
        }
        if ((fVar25 - fVar34) * (fVar27 - fVar33) * (fVar31 - fVar32) <=
            (fVar23 - fVar30) * (fVar26 - fVar29) * (fVar24 - fVar28)) {
          iVar9 = iVar10;
        }
        lVar15 = (longlong)iVar9;
      } while (*(int *)(lVar14 + 0xc + lVar15 * 0x34) != -1);
    }
    iVar10 = FUN_1497e30ce(param_1);
    lVar14 = *(longlong *)(param_1 + 0x28);
    lVar16 = (longlong)iVar10 * 0x34;
    fVar17 = param_2[1];
    fVar18 = param_2[2];
    fVar19 = param_2[3];
    fVar20 = param_2[3];
    fVar21 = param_2[4];
    fVar22 = param_2[5];
    fVar3 = param_2[6];
    pfVar2 = (float *)(lVar14 + 0x18 + lVar16);
    *pfVar2 = *param_2;
    pfVar2[1] = fVar17;
    pfVar2[2] = fVar18;
    pfVar2[3] = fVar19;
    pfVar2 = (float *)(lVar14 + 0x24 + lVar16);
    *pfVar2 = fVar20;
    pfVar2[1] = fVar21;
    pfVar2[2] = fVar22;
    pfVar2[3] = fVar3;
    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar16) = *param_3;
    iVar11 = FUN_1497e30ce(param_1);
    lVar13 = (longlong)iVar11 * 0x34;
    *(int *)(*(longlong *)(param_1 + 0x28) + 8 + lVar13) = iVar9;
    *(int *)(*(longlong *)(param_1 + 0x28) + 0xc + lVar13) = iVar10;
    lVar14 = *(longlong *)(param_1 + 0x28);
    lVar15 = lVar15 * 0x34;
    fVar17 = *(float *)(lVar14 + 0x2c + lVar15);
    fVar18 = *(float *)(lVar14 + 0x2c + lVar16);
    if (fVar17 <= fVar18) {
      fVar17 = fVar18;
    }
    fVar18 = *(float *)(lVar14 + 0x28 + lVar15);
    fVar19 = *(float *)(lVar14 + 0x28 + lVar16);
    if (fVar18 <= fVar19) {
      fVar18 = fVar19;
    }
    fVar19 = *(float *)(lVar14 + 0x24 + lVar15);
    fVar20 = *(float *)(lVar14 + 0x24 + lVar16);
    if (fVar19 <= fVar20) {
      fVar19 = fVar20;
    }
    fVar20 = *(float *)(lVar14 + 0x20 + lVar15);
    fVar21 = *(float *)(lVar14 + 0x20 + lVar16);
    if (fVar21 <= fVar20) {
      fVar20 = fVar21;
    }
    fVar21 = *(float *)(lVar14 + 0x18 + lVar15);
    fVar22 = *(float *)(lVar14 + 0x1c + lVar15);
    fVar3 = *(float *)(lVar14 + 0x1c + lVar16);
    if (fVar3 <= fVar22) {
      fVar22 = fVar3;
    }
    fVar3 = *(float *)(lVar14 + 0x18 + lVar16);
    if (fVar3 <= fVar21) {
      fVar21 = fVar3;
    }
    *(float *)(lVar14 + 0x18 + lVar13) = fVar21;
    *(float *)(lVar14 + 0x1c + lVar13) = fVar22;
    *(float *)(lVar14 + 0x20 + lVar13) = fVar20;
    *(float *)(lVar14 + 0x24 + lVar13) = fVar19;
    *(float *)(lVar14 + 0x28 + lVar13) = fVar18;
    *(float *)(lVar14 + 0x2c + lVar13) = fVar17;
    *(undefined1 *)(lVar14 + 0x30 + lVar13) = 1;
    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x14 + lVar13) = 1;
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar15);
    *(int *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar15) = iVar11;
    *(int *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar16) = iVar11;
    if ((longlong)iVar4 == -1) {
      *(int *)(param_1 + 0x10) = iVar11;
    }
    else {
      *(int *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar13) = iVar4;
      lVar14 = (longlong)iVar4 * 0x34;
      lVar15 = *(longlong *)(param_1 + 0x28) + lVar14;
      if (*(int *)(*(longlong *)(param_1 + 0x28) + 8 + lVar14) == iVar9) {
        *(int *)(lVar15 + 8) = iVar11;
      }
      else {
        *(int *)(lVar15 + 0xc) = iVar11;
      }
    }
    if (iVar11 != -1) {
      lVar15 = *(longlong *)(param_1 + 0x28);
      do {
        lVar14 = (longlong)iVar11 * 0x34;
        lVar13 = (longlong)*(int *)(lVar15 + 8 + lVar14) * 0x34;
        lVar16 = (longlong)*(int *)(lVar15 + 0xc + lVar14) * 0x34;
        fVar17 = *(float *)(lVar15 + 0x2c + lVar13);
        fVar18 = *(float *)(lVar15 + 0x2c + lVar16);
        if (fVar17 <= fVar18) {
          fVar17 = fVar18;
        }
        fVar18 = *(float *)(lVar15 + 0x28 + lVar13);
        fVar19 = *(float *)(lVar15 + 0x28 + lVar16);
        if (fVar18 <= fVar19) {
          fVar18 = fVar19;
        }
        fVar19 = *(float *)(lVar15 + 0x24 + lVar13);
        fVar20 = *(float *)(lVar15 + 0x24 + lVar16);
        if (fVar19 <= fVar20) {
          fVar19 = fVar20;
        }
        fVar20 = *(float *)(lVar15 + 0x20 + lVar13);
        fVar21 = *(float *)(lVar15 + 0x20 + lVar16);
        if (fVar21 <= fVar20) {
          fVar20 = fVar21;
        }
        fVar21 = *(float *)(lVar15 + 0x1c + lVar13);
        fVar22 = *(float *)(lVar15 + 0x1c + lVar16);
        if (fVar22 <= fVar21) {
          fVar21 = fVar22;
        }
        fVar22 = *(float *)(lVar15 + 0x18 + lVar13);
        fVar3 = *(float *)(lVar15 + 0x18 + lVar16);
        if (fVar3 <= fVar22) {
          fVar22 = fVar3;
        }
        *(float *)(lVar15 + 0x18 + lVar14) = fVar22;
        *(float *)(lVar15 + 0x1c + lVar14) = fVar21;
        *(float *)(lVar15 + 0x20 + lVar14) = fVar20;
        *(float *)(lVar15 + 0x24 + lVar14) = fVar19;
        *(float *)(lVar15 + 0x28 + lVar14) = fVar18;
        *(float *)(lVar15 + 0x2c + lVar14) = fVar17;
        *(undefined1 *)(lVar15 + 0x30 + lVar14) = 1;
        uVar5 = *(uint *)(lVar15 + 0x14 + lVar13);
        uVar12 = *(uint *)(lVar15 + 0x14 + lVar16);
        if (uVar12 < uVar5) {
          uVar12 = uVar5;
        }
        *(uint *)(*(longlong *)(param_1 + 0x28) + 0x14 + lVar14) = uVar12 + 1;
        lVar15 = *(longlong *)(param_1 + 0x28);
        iVar11 = *(int *)(lVar15 + 0x10 + lVar14);
      } while (iVar11 != -1);
    }
  }
  return iVar10;
}



// FUNCTION 1497db56e FUN_1497db56e body=466 status=ok
// SIG undefined FUN_1497db56e(void)

void FUN_1497db56e(longlong param_1,int *param_2)

{
  longlong *plVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  iVar3 = *param_2;
  if (*(int *)(param_1 + 0x10) == iVar3) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    iVar3 = *param_2;
    iVar4 = *(int *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x24) < iVar4 + 1U) {
      FUN_1447808da((longlong *)(param_1 + 0x18),iVar4);
    }
    *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 4) = iVar3;
  }
  else {
    lVar8 = *(longlong *)(param_1 + 0x28);
    iVar4 = *(int *)(lVar8 + 0x10 + (longlong)iVar3 * 0x34);
    uVar12 = (ulonglong)iVar4;
    lVar9 = uVar12 * 0x34;
    iVar3 = *(int *)(lVar8 + lVar9 + 8 + (ulonglong)(*(int *)(lVar8 + 8 + lVar9) == iVar3) * 4);
    iVar5 = *(int *)(lVar8 + 0x10 + lVar9);
    *(int *)(lVar8 + 0x10 + (longlong)iVar3 * 0x34) = iVar5;
    if ((longlong)iVar5 == -1) {
      *(int *)(param_1 + 0x10) = iVar3;
    }
    else {
      lVar9 = (longlong)iVar5 * 0x34;
      lVar8 = *(longlong *)(param_1 + 0x28) + lVar9;
      if (*(int *)(*(longlong *)(param_1 + 0x28) + 8 + lVar9) == iVar4) {
        *(int *)(lVar8 + 8) = iVar3;
      }
      else {
        *(int *)(lVar8 + 0xc) = iVar3;
      }
    }
    iVar3 = *param_2;
    plVar1 = (longlong *)(param_1 + 0x18);
    iVar5 = *(int *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x24) < iVar5 + 1U) {
      FUN_1447808da(plVar1,iVar5);
    }
    *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 4) = iVar3;
    iVar3 = *(int *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x24) < iVar3 + 1U) {
      FUN_1447808da(plVar1,iVar3);
    }
    *(int *)(*plVar1 + (longlong)iVar3 * 4) = iVar4;
    if (iVar4 != -1) {
      lVar8 = *(longlong *)(param_1 + 0x28);
      do {
        lVar9 = (longlong)(int)uVar12 * 0x34;
        lVar10 = (longlong)*(int *)(lVar8 + 8 + lVar9) * 0x34;
        lVar11 = (longlong)*(int *)(lVar8 + 0xc + lVar9) * 0x34;
        fVar13 = *(float *)(lVar8 + 0x2c + lVar10);
        fVar14 = *(float *)(lVar8 + 0x2c + lVar11);
        if (fVar13 <= fVar14) {
          fVar13 = fVar14;
        }
        fVar14 = *(float *)(lVar8 + 0x28 + lVar10);
        fVar15 = *(float *)(lVar8 + 0x28 + lVar11);
        if (fVar14 <= fVar15) {
          fVar14 = fVar15;
        }
        fVar15 = *(float *)(lVar8 + 0x24 + lVar10);
        fVar16 = *(float *)(lVar8 + 0x24 + lVar11);
        if (fVar15 <= fVar16) {
          fVar15 = fVar16;
        }
        fVar16 = *(float *)(lVar8 + 0x20 + lVar10);
        fVar17 = *(float *)(lVar8 + 0x20 + lVar11);
        if (fVar17 <= fVar16) {
          fVar16 = fVar17;
        }
        fVar17 = *(float *)(lVar8 + 0x1c + lVar10);
        fVar18 = *(float *)(lVar8 + 0x1c + lVar11);
        if (fVar18 <= fVar17) {
          fVar17 = fVar18;
        }
        fVar18 = *(float *)(lVar8 + 0x18 + lVar10);
        fVar2 = *(float *)(lVar8 + 0x18 + lVar11);
        if (fVar2 <= fVar18) {
          fVar18 = fVar2;
        }
        *(float *)(lVar8 + 0x18 + lVar9) = fVar18;
        *(float *)(lVar8 + 0x1c + lVar9) = fVar17;
        *(float *)(lVar8 + 0x20 + lVar9) = fVar16;
        *(float *)(lVar8 + 0x24 + lVar9) = fVar15;
        *(float *)(lVar8 + 0x28 + lVar9) = fVar14;
        *(float *)(lVar8 + 0x2c + lVar9) = fVar13;
        *(undefined1 *)(lVar8 + 0x30 + lVar9) = 1;
        uVar6 = *(uint *)(lVar8 + 0x14 + lVar10);
        uVar7 = *(uint *)(lVar8 + 0x14 + lVar11);
        if (uVar7 < uVar6) {
          uVar7 = uVar6;
        }
        *(uint *)(*(longlong *)(param_1 + 0x28) + 0x14 + lVar9) = uVar7 + 1;
        lVar8 = *(longlong *)(param_1 + 0x28);
        uVar6 = *(uint *)(lVar8 + 0x10 + lVar9);
        uVar12 = (ulonglong)uVar6;
      } while (uVar6 != 0xffffffff);
    }
    *param_2 = -1;
  }
  return;
}



// FUNCTION 1497db740 FUN_1497db740 body=164 status=ok
// SIG undefined FUN_1497db740(void)

void FUN_1497db740(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  int local_5c;
  undefined **local_58;
  undefined8 local_50;
  longlong local_48;
  longlong *local_40;
  undefined ***local_38;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = &local_70;
  ppuVar1 = &PTR_LAB_14be80380;
  local_58 = &PTR_LAB_14be80380;
  local_70 = param_1;
  local_68 = param_3;
  local_50 = param_2;
  local_48 = param_1;
  local_38 = &local_58;
  local_20 = &local_58;
  if (*(int *)(param_1 + 0x10) != -1) {
    local_5c = *(int *)(param_1 + 0x10);
    FUN_144621934(&local_58);
    if (local_20 == (undefined ***)0x0) goto LAB_1497db7c1;
    ppuVar1 = *local_20;
  }
  (*(code *)ppuVar1[4])(local_20,local_20 != &local_58);
LAB_1497db7c1:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497db7e6 FUN_1497db7e6 body=164 status=ok
// SIG undefined FUN_1497db7e6(void)

void FUN_1497db7e6(longlong param_1,undefined4 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  undefined4 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40[0] = *(undefined4 *)(param_3 + 0xc);
  FUN_1497db56e();
  FUN_1497e33fc(param_1 + 0x38,*(undefined4 *)(param_3 + 8));
  uVar8 = FUN_1497db1a4(param_1,param_2,param_3);
  FUN_1497e3300(param_1 + 0x38,local_40);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  local_38[3] = param_2[3];
  local_38[4] = uVar5;
  local_38[5] = uVar6;
  local_38[6] = uVar7;
  *local_38 = uVar1;
  local_38[1] = uVar2;
  local_38[2] = uVar3;
  local_38[3] = uVar4;
  *(ulonglong *)(param_3 + 8) = CONCAT44(uVar8,local_40[0]);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497db88c FUN_1497db88c body=173 status=ok
// SIG undefined FUN_1497db88c(void)

longlong * FUN_1497db88c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  param_2[1] = 0;
  plVar1 = *(longlong **)(param_1 + 0x390);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,&local_28);
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
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  FUN_14020fad6(param_2,L"No_GbxVegetationComponent");
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1497db93a FUN_1497db93a body=852 status=ok
// SIG undefined FUN_1497db93a(void)

undefined2 * FUN_1497db93a(undefined2 *param_1,double *param_2,float param_3,float param_4)

{
  double dVar1;
  double dVar2;
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
  double dVar15;
  double dVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar3;
  
  dVar11 = param_2[8];
  dVar1 = param_2[9];
  uVar17 = -(ulonglong)(ABS(dVar11) < ABS(dVar1));
  dVar18 = (double)param_4;
  dVar7 = DAT_14c8462c0 * 0.5 * dVar18 * dVar11;
  dVar8 = DAT_14c8462c8 * 0.5 * dVar18 * param_2[9];
  dVar23 = DAT_14c8462d0 * 0.5 * dVar18 * param_2[10];
  dVar2 = param_2[3];
  dVar3 = param_2[3];
  dVar12 = *param_2;
  dVar13 = param_2[1];
  dVar14 = param_2[2];
  dVar19 = dVar8 * dVar12 - dVar13 * dVar7;
  dVar9 = dVar23 * dVar13 - dVar14 * dVar8;
  dVar10 = dVar7 * dVar14 - dVar23 * dVar12;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar19 = dVar19 + dVar19;
  dVar4 = DAT_14c8462c0 * -0.5 * dVar18 * dVar11;
  dVar5 = DAT_14c8462c8 * -0.5 * dVar18 * param_2[9];
  dVar22 = DAT_14c8462d0 * -0.5 * dVar18 * param_2[10];
  dVar21 = dVar5 * dVar12 - dVar13 * dVar4;
  dVar6 = dVar22 * dVar13 - dVar14 * dVar5;
  dVar20 = dVar4 * dVar14 - dVar12 * dVar22;
  dVar6 = dVar6 + dVar6;
  dVar20 = dVar20 + dVar20;
  dVar21 = dVar21 + dVar21;
  dVar15 = param_2[4];
  dVar16 = param_2[5];
  dVar18 = param_2[6];
  *param_1 = 0;
  *(float *)(param_1 + 2) =
       (float)((dVar19 * dVar13 - dVar10 * dVar14) + dVar2 * dVar9 + dVar7 + dVar15);
  *(float *)(param_1 + 4) =
       (float)((dVar14 * dVar9 - dVar12 * dVar19) + dVar3 * dVar10 + dVar8 + dVar16);
  *(float *)(param_1 + 6) =
       (float)(dVar19 * dVar2 + dVar23 + (dVar10 * dVar12 - dVar9 * dVar13) + dVar18);
  *(float *)(param_1 + 8) =
       (float)((dVar21 * dVar13 - dVar20 * dVar14) + dVar2 * dVar6 + dVar4 + dVar15);
  *(float *)(param_1 + 10) =
       (float)((dVar14 * dVar6 - dVar12 * dVar21) + dVar3 * dVar20 + dVar5 + dVar16);
  *(float *)(param_1 + 0xc) =
       (float)(dVar21 * dVar2 + dVar22 + (dVar20 * dVar12 - dVar6 * dVar13) + dVar18);
  *(float *)(param_1 + 0xe) =
       (float)(double)(~uVar17 & (ulonglong)dVar11 | (ulonglong)dVar1 & uVar17) * param_3;
  return param_1;
}



// FUNCTION 1497dbc8e FUN_1497dbc8e body=2057 status=ok
// SIG undefined FUN_1497dbc8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_1497dbc8e(undefined1 (*param_1) [16],longlong param_2,int param_3)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  undefined8 *puVar22;
  undefined1 (*pauVar23) [16];
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar34;
  double dVar35;
  undefined1 auVar33 [16];
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  double dVar47;
  undefined1 auStack_2d8 [32];
  undefined1 local_2b8 [16];
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
  undefined8 uStack_250;
  undefined1 local_248 [16];
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
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
  double local_160;
  double local_158;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  puVar22 = &DAT_14c846480;
  pauVar23 = param_1;
  for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
    *(undefined8 *)*pauVar23 = *puVar22;
    puVar22 = puVar22 + 1;
    pauVar23 = (undefined1 (*) [16])(*pauVar23 + 8);
  }
  dVar32 = *(double *)*param_1;
  dVar35 = *(double *)(*param_1 + 8);
  auVar29 = param_1[1];
  dVar24 = *(double *)param_1[3];
  dVar27 = *(double *)(param_1[3] + 8);
  dVar6 = *(double *)param_1[5];
  dVar31 = *(double *)(param_1[5] + 8);
  auVar37 = param_1[4];
  dVar28 = *(double *)param_1[2];
  dVar30 = *(double *)(param_1[2] + 8);
  do {
    auVar38 = _DAT_149934d80;
    lVar19 = *(longlong *)(param_2 + 0x30);
    lVar21 = (longlong)param_3 * 0x60;
    pdVar1 = (double *)(lVar19 + lVar21);
    auVar39 = *(undefined1 (*) [16])(lVar19 + 0x40 + lVar21);
    dVar10 = auVar39._0_8_;
    dVar12 = auVar39._8_8_;
    auVar40 = *(undefined1 (*) [16])(lVar19 + 0x50 + lVar21);
    dVar11 = auVar40._0_8_;
    dVar7 = auVar40._8_8_;
    auVar39 = minpd(auVar37,auVar39);
    auVar46._8_8_ = dVar31;
    auVar46._0_8_ = dVar6;
    auVar46 = minpd(auVar46,auVar40);
    auVar40._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
    auVar40._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
    iVar18 = movmskpd((int)lVar19,auVar40);
    auVar39._8_8_ = -(ulonglong)(auVar46._8_8_ < 0.0);
    auVar39._0_8_ = -(ulonglong)(auVar46._0_8_ < 0.0);
    uVar20 = movmskpd((int)lVar21,auVar39);
    dVar42 = auVar29._0_8_;
    dVar43 = auVar29._8_8_;
    local_2a8._0_8_ = auVar37._0_8_;
    local_2a8._8_8_ = auVar37._8_8_;
    local_2a8 = auVar37;
    local_298 = dVar28;
    dStack_290 = dVar30;
    if ((uVar20 & 0x3fffffff) == 0 && iVar18 == 0) {
      local_2b8._8_4_ = SUB84(dVar31,0);
      local_2b8._0_8_ = dVar6;
      local_2b8._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
      dVar15 = *pdVar1;
      dVar34 = pdVar1[1];
      dVar16 = pdVar1[2];
      dVar17 = pdVar1[3];
      dVar8 = pdVar1[3];
      dVar9 = pdVar1[3];
      dVar45 = *pdVar1 * dVar35;
      dVar47 = *pdVar1 * dVar32;
      dVar36 = pdVar1[1];
      dVar31 = pdVar1[1];
      dVar3 = dVar32 * dVar36;
      dVar4 = dVar35 * dVar31;
      dVar14 = pdVar1[2];
      dVar13 = pdVar1[2];
      dVar41 = dVar32 * dVar13;
      dVar32 = dVar35 * dVar14 * -1.0 + dVar42 * dVar36 + dVar43 * *pdVar1 * 1.0 + dVar32 * dVar8;
      dVar35 = dVar41 * 1.0 + dVar43 * dVar31 + dVar42 * *pdVar1 * -1.0 + dVar35 * dVar9;
      dVar28 = dVar28 * dVar10;
      dVar30 = dVar30 * dVar12;
      dVar24 = dVar24 * dVar11;
      dVar27 = dVar27 * dVar7;
      dVar31 = dVar30 * dVar15 - dVar28 * dVar34;
      dVar44 = dVar24 * dVar34 - dVar30 * dVar16;
      dVar41 = dVar28 * dVar16 - dVar24 * dVar15;
      dVar36 = dVar27 * dVar17 - dVar27 * dVar17;
      dVar44 = dVar44 + dVar44;
      dVar41 = dVar41 + dVar41;
      dVar31 = dVar31 + dVar31;
      dVar36 = dVar36 + dVar36;
      dVar28 = (dVar31 * dVar34 - dVar16 * dVar41) + dVar8 * dVar44 + dVar28 + pdVar1[4];
      dVar30 = (dVar44 * dVar16 - dVar31 * dVar15) + dVar9 * dVar41 + dVar30 + pdVar1[5];
      dVar24 = (dVar41 * dVar15 - dVar34 * dVar44) + dVar8 * dVar31 + dVar24 + pdVar1[6];
      dVar27 = (dVar36 * dVar17 - dVar36 * dVar17) + dVar9 * dVar36 + dVar27 + pdVar1[7];
      dVar6 = dVar6 * dVar11;
      dVar31 = (double)local_2b8._8_8_ * dVar7;
      auVar29._8_8_ = dVar42 * dVar13 * -1.0 + ((dVar47 * -1.0 + dVar43 * dVar9) - dVar4);
      auVar29._0_8_ = dVar43 * dVar14 * 1.0 + ((dVar45 * 1.0 + dVar42 * dVar8) - dVar3);
      auVar37._8_8_ = (double)local_2a8._8_8_ * dVar12;
      auVar37._0_8_ = (double)local_2a8._0_8_ * dVar10;
    }
    else {
      local_2b8._8_8_ = dVar31 * dVar7;
      local_2b8._0_8_ = dVar6 * dVar11;
      dVar3 = *pdVar1;
      dVar4 = pdVar1[1];
      dVar15 = pdVar1[2];
      dVar34 = dVar4 + dVar4;
      dVar8 = dVar15 + dVar15;
      dVar7 = dVar3 * (dVar3 + dVar3);
      local_198 = (1.0 - (dVar7 + dVar4 * dVar34)) * dVar11;
      dVar31 = pdVar1[3];
      dVar9 = dVar8 * dVar31;
      dVar36 = (dVar3 + dVar3) * pdVar1[3];
      dVar31 = dVar34 * dVar31;
      dVar27 = (dVar8 * dVar4 - dVar36) * dVar11;
      dVar13 = (double)local_2a8._0_8_ * dVar10;
      dVar14 = (double)local_2a8._8_8_ * dVar12;
      local_1e8 = (1.0 - (dVar15 * dVar8 + dVar4 * dVar34)) * dVar10;
      dVar7 = (1.0 - (dVar15 * dVar8 + dVar7)) * dVar12;
      dStack_1e0 = (dVar34 * dVar3 + dVar9) * dVar10;
      local_1b8 = (dVar8 * dVar4 + dVar36) * dVar12;
      local_1d8 = (*pdVar1 * dVar8 - dVar31) * dVar10;
      uStack_1d0 = 0;
      local_1c8._8_4_ = SUB84(dVar7,0);
      local_1c8._0_8_ = (dVar34 * dVar3 - dVar9) * dVar12;
      local_1c8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      uStack_1b0 = 0;
      local_1a8._8_4_ = SUB84(dVar27,0);
      local_1a8._0_8_ = (dVar31 + *pdVar1 * dVar8) * dVar11;
      local_1a8._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      uStack_190 = 0;
      local_188 = pdVar1[4];
      dStack_180 = pdVar1[5];
      local_178 = pdVar1[6];
      uStack_170 = 0x3ff0000000000000;
      dVar27 = dVar35 + dVar35;
      dVar11 = dVar42 + dVar42;
      dVar31 = dVar32 * (dVar32 + dVar32);
      local_218 = (1.0 - (dVar31 + dVar35 * dVar27)) * dVar6;
      dVar12 = (dVar32 + dVar32) * dVar43;
      dVar10 = (dVar11 * dVar35 - dVar12) * dVar6;
      local_268 = ((double)DAT_149934d80 - (dVar42 * dVar11 + dVar35 * dVar27)) *
                  (double)local_2a8._0_8_;
      dVar31 = (DAT_149934d80._8_8_ - (dVar42 * dVar11 + dVar31)) * (double)local_2a8._8_8_;
      dStack_260 = (dVar27 * dVar32 + dVar11 * dVar43) * (double)local_2a8._0_8_;
      local_238 = (dVar11 * dVar35 + dVar12) * (double)local_2a8._8_8_;
      local_258 = (dVar32 * dVar11 - dVar27 * dVar43) * (double)local_2a8._0_8_;
      uStack_250 = 0;
      local_248._8_4_ = SUB84(dVar31,0);
      local_248._0_8_ = (dVar27 * dVar32 - dVar11 * dVar43) * (double)local_2a8._8_8_;
      local_248._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
      uStack_230 = 0;
      local_228._8_4_ = SUB84(dVar10,0);
      local_228._0_8_ = (dVar27 * dVar43 + dVar32 * dVar11) * dVar6;
      local_228._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      uStack_210 = 0;
      uStack_1f0 = 0x3ff0000000000000;
      local_208 = dVar28;
      dStack_200 = dVar30;
      local_1f8 = dVar24;
      FUN_1447fea8d(&local_168,&local_268,&local_1e8);
      FUN_144a1c686(&local_168,0x3e45798ee0000000);
      auVar25._8_8_ = -(ulonglong)(0.0 <= dVar14);
      auVar25._0_8_ = -(ulonglong)(0.0 <= dVar13);
      auVar29 = blendvpd(_DAT_149936790,auVar38,auVar25);
      dVar6 = (double)local_2b8._0_8_;
      dVar31 = (double)local_2b8._8_8_;
      dVar32 = (double)(~-(ulonglong)(0.0 <= (double)local_2b8._0_8_) & 0xbff0000000000000 |
                       -(ulonglong)(0.0 <= (double)local_2b8._0_8_) & 0x3ff0000000000000);
      dVar35 = auVar29._0_8_;
      local_158 = local_158 * dVar35;
      local_160 = local_160 * dVar35;
      local_168 = local_168 * dVar35;
      dVar35 = auVar29._8_8_;
      local_138 = local_138 * dVar35;
      local_140 = local_140 * dVar35;
      local_148 = dVar35 * local_148;
      local_118 = local_118 * dVar32;
      local_120 = local_120 * dVar32;
      local_128 = dVar32 * local_128;
      FUN_14481fd10(&local_288,&local_168);
      dVar32 = local_278 * local_278 + local_288 * local_288;
      dVar35 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
      auVar33._0_8_ = dVar32 + dVar35;
      auVar33._8_8_ = dVar32 + dVar35;
      auVar26._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_);
      auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_);
      auVar29 = sqrtpd(auVar33,auVar33);
      auVar37 = divpd(auVar38,auVar29);
      auVar38._0_8_ = auVar37._0_8_ * local_278;
      auVar38._8_8_ = auVar37._8_8_ * dStack_270;
      auVar29 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar38,auVar26);
      dVar32 = (double)((ulonglong)(local_288 * auVar37._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_));
      dVar35 = (double)((ulonglong)(dStack_280 * auVar37._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_));
      dVar27 = 0.0;
      auVar37._8_8_ = dVar14;
      auVar37._0_8_ = dVar13;
      dVar24 = local_f8;
      dVar28 = local_108;
      dVar30 = dStack_100;
    }
    param_3 = *(int *)(*(longlong *)(param_2 + 0x20) + 8 + (longlong)param_3 * 0xc);
  } while (param_3 != -1);
  param_1[4] = auVar37;
  auVar5._8_4_ = SUB84(dVar31,0);
  auVar5._0_8_ = dVar6;
  auVar5._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
  param_1[5] = auVar5;
  param_1[1] = auVar29;
  *(double *)param_1[2] = dVar28;
  *(double *)(param_1[2] + 8) = dVar30;
  *(double *)param_1[3] = dVar24;
  *(double *)(param_1[3] + 8) = dVar27;
  auVar2._8_4_ = SUB84(dVar35,0);
  auVar2._0_8_ = dVar32;
  auVar2._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
  *param_1 = auVar2;
  if ((local_e0 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497dc498 FUN_1497dc498 body=145 status=ok
// SIG undefined FUN_1497dc498(void)

longlong FUN_1497dc498(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  local_18 = FUN_144a74fb4();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_18);
  }
  lVar2 = FUN_1478ba2e4(uVar1,&local_18);
  if (lVar2 != 0) {
    lVar3 = FUN_144a74fb4();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) goto LAB_1497dc50a;
  }
  lVar2 = 0;
LAB_1497dc50a:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497dc52a FUN_1497dc52a body=1959 status=ok
// SIG undefined FUN_1497dc52a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1497dc52a(longlong param_1,double *param_2,longlong *param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  longlong lVar17;
  double *pdVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar24;
  double dVar25;
  undefined1 auVar23 [16];
  double dVar26;
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auStack_2f8 [32];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
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
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  if (param_3 != (longlong *)0x0) {
    iVar14 = FUN_144909502(param_3,param_4);
    if (iVar14 != -1) {
      uVar15 = (**(code **)(*param_3 + 0x4a8))(param_3,&local_2d8,param_4,0);
      param_2[6] = 0.0;
      param_2[7] = 0.0;
      param_2[4] = 0.0;
      param_2[5] = 0.0;
      auVar29 = _DAT_149934d80;
      dVar2 = local_298._0_8_;
      dVar6 = local_298._8_8_;
      dVar3 = local_288._0_8_;
      auVar21 = *(undefined1 (*) [16])(param_1 + 0x390);
      dVar4 = auVar21._0_8_;
      dVar7 = auVar21._8_8_;
      auVar1 = *(undefined1 (*) [16])(param_1 + 0x3a0);
      dVar5 = auVar1._0_8_;
      auVar21 = minpd(auVar21,local_298);
      auVar27 = minpd(auVar1,local_288);
      auVar22._8_8_ = -(ulonglong)(auVar21._8_8_ < 0.0);
      auVar22._0_8_ = -(ulonglong)(auVar21._0_8_ < 0.0);
      iVar14 = movmskpd(uVar15,auVar22);
      auVar21._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
      auVar21._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
      uVar16 = movmskpd((int)param_3,auVar21);
      if ((uVar16 & 0x3fffffff) == 0 && iVar14 == 0) {
        dVar11 = *(double *)(param_1 + 0x350);
        dVar12 = *(double *)(param_1 + 0x358);
        dVar13 = *(double *)(param_1 + 0x360);
        dVar28 = *(double *)(param_1 + 0x368);
        dVar32 = *(double *)(param_1 + 0x370) * dVar2;
        dVar33 = *(double *)(param_1 + 0x378) * dVar6;
        dVar24 = *(double *)(param_1 + 0x380) * dVar3;
        dVar9 = *(double *)(param_1 + 0x388) * local_288._8_8_;
        dVar26 = dVar33 * local_2d8 - dStack_2d0 * dVar32;
        dVar25 = dVar24 * dStack_2d0 - local_2c8 * dVar33;
        dVar31 = dVar32 * local_2c8 - local_2d8 * dVar24;
        dVar10 = dVar9 * dStack_2c0 - dStack_2c0 * dVar9;
        dVar25 = dVar25 + dVar25;
        dVar31 = dVar31 + dVar31;
        dVar26 = dVar26 + dVar26;
        dVar10 = dVar10 + dVar10;
        dStack_2b0 = (dVar25 * local_2c8 - dVar26 * local_2d8) + dStack_2c0 * dVar31 + dVar33 +
                     dStack_2b0;
        *param_2 = dVar12 * local_2c8 * -1.0 +
                   dVar13 * dStack_2d0 + dVar28 * local_2d8 * 1.0 + dVar11 * dStack_2c0;
        param_2[1] = dVar11 * local_2c8 * 1.0 +
                     dVar28 * dStack_2d0 + dVar13 * local_2d8 * -1.0 + dVar12 * dStack_2c0;
        param_2[2] = dVar28 * local_2c8 * 1.0 +
                     ((local_2d8 * dVar12 * 1.0 + dVar13 * dStack_2c0) - dVar11 * dStack_2d0);
        param_2[3] = dVar13 * local_2c8 * -1.0 +
                     ((local_2d8 * dVar11 * -1.0 + dVar28 * dStack_2c0) - dVar12 * dStack_2d0);
        auVar29._8_4_ = SUB84(dStack_2b0,0);
        auVar29._0_8_ =
             (dVar26 * dStack_2d0 - local_2c8 * dVar31) + dStack_2c0 * dVar25 + dVar32 + local_2b8;
        auVar29._12_4_ = (int)((ulonglong)dStack_2b0 >> 0x20);
        *(undefined1 (*) [16])(param_2 + 4) = auVar29;
        param_2[6] = (dVar31 * local_2d8 - dStack_2d0 * dVar25) + dStack_2c0 * dVar26 + dVar24 +
                     (double)CONCAT44(uStack_2a4,local_2a8);
        param_2[7] = (dVar10 * dStack_2c0 - dVar10 * dStack_2c0) + dStack_2c0 * dVar10 + dVar9 +
                     dStack_2a0;
      }
      else {
        dVar24 = dStack_2d0 + dStack_2d0;
        dVar26 = local_2c8 + local_2c8;
        dVar31 = local_2d8 * (local_2d8 + local_2d8);
        local_188 = (1.0 - (dVar31 + dStack_2d0 * dVar24)) * dVar3;
        dVar25 = (local_2d8 + local_2d8) * dStack_2c0;
        local_198 = (dVar24 * dStack_2c0 + local_2d8 * dVar26) * dVar3;
        dStack_190 = (dVar26 * dStack_2d0 - dVar25) * dVar3;
        local_1d8 = ((double)DAT_149934d80 - (local_2c8 * dVar26 + dStack_2d0 * dVar24)) * dVar2;
        dVar31 = (DAT_149934d80._8_8_ - (local_2c8 * dVar26 + dVar31)) * dVar6;
        dStack_1d0 = (dVar24 * local_2d8 + dVar26 * dStack_2c0) * dVar2;
        local_1a8 = (dVar26 * dStack_2d0 + dVar25) * dVar6;
        local_1c8 = (local_2d8 * dVar26 - dVar24 * dStack_2c0) * dVar2;
        uStack_1c0 = 0;
        local_1b8._8_4_ = SUB84(dVar31,0);
        local_1b8._0_8_ = (dVar24 * local_2d8 - dVar26 * dStack_2c0) * dVar6;
        local_1b8._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
        uStack_1a0 = 0;
        uStack_180 = 0;
        local_178 = local_2b8;
        dStack_170 = dStack_2b0;
        local_168 = local_2a8;
        uStack_164 = uStack_2a4;
        uStack_160 = 0;
        uStack_15c = 0x3ff00000;
        dVar11 = *(double *)(param_1 + 0x350);
        dVar12 = *(double *)(param_1 + 0x358);
        dVar13 = *(double *)(param_1 + 0x360);
        dVar28 = dVar12 + dVar12;
        dVar25 = dVar13 + dVar13;
        dVar9 = dVar11 * (dVar11 + dVar11);
        local_208 = (1.0 - (dVar9 + dVar12 * dVar28)) * dVar5;
        dVar10 = *(double *)(param_1 + 0x350) * dVar25;
        dVar26 = *(double *)(param_1 + 0x368);
        dVar31 = dVar25 * dVar26;
        dVar24 = (dVar11 + dVar11) * *(double *)(param_1 + 0x368);
        dVar26 = dVar28 * dVar26;
        local_218 = (dVar26 + dVar10) * dVar5;
        local_238 = (dVar28 * dVar11 - dVar31) * dVar7;
        dStack_210 = (dVar25 * dVar12 - dVar24) * dVar5;
        local_258 = ((double)DAT_149934d80 - (dVar13 * dVar25 + dVar12 * dVar28)) * dVar4;
        dStack_230 = (DAT_149934d80._8_8_ - (dVar13 * dVar25 + dVar9)) * dVar7;
        dStack_250 = (dVar28 * dVar11 + dVar31) * dVar4;
        local_228 = (dVar25 * dVar12 + dVar24) * dVar7;
        local_248 = (dVar10 - dVar26) * dVar4;
        uStack_240 = 0;
        uStack_220 = 0;
        uStack_200 = 0;
        local_1f8 = *(undefined8 *)(param_1 + 0x370);
        uStack_1f0 = *(undefined8 *)(param_1 + 0x378);
        local_1e8 = *(undefined8 *)(param_1 + 0x380);
        uStack_1e0 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_158);
        FUN_144a1c686(&local_158,0x3e45798ee0000000);
        auVar27._8_8_ = -(ulonglong)(0.0 <= dVar6 * dVar7);
        auVar27._0_8_ = -(ulonglong)(0.0 <= dVar2 * dVar4);
        auVar21 = blendvpd(_DAT_149936790,auVar29,auVar27);
        uVar19 = -(ulonglong)(0.0 <= dVar3 * dVar5);
        dVar26 = (double)(~uVar19 & 0xbff0000000000000 | uVar19 & 0x3ff0000000000000);
        dVar25 = auVar21._0_8_;
        local_148 = local_148 * dVar25;
        local_150 = local_150 * dVar25;
        local_158 = local_158 * dVar25;
        dVar25 = auVar21._8_8_;
        local_128 = local_128 * dVar25;
        local_130 = local_130 * dVar25;
        local_138 = dVar25 * local_138;
        local_108 = local_108 * dVar26;
        local_110 = local_110 * dVar26;
        local_118 = dVar26 * local_118;
        FUN_14481fd10(&local_278,&local_158);
        dVar26 = local_268 * local_268 + local_278 * local_278;
        dVar25 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
        auVar23._0_8_ = dVar26 + dVar25;
        auVar23._8_8_ = dVar26 + dVar25;
        auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_);
        auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_);
        auVar21 = sqrtpd(auVar23,auVar23);
        auVar29 = divpd(auVar29,auVar21);
        auVar30._0_8_ = auVar29._0_8_ * local_268;
        auVar30._8_8_ = auVar29._8_8_ * dStack_260;
        auVar21 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar30,auVar20);
        *param_2 = (double)((ulonglong)(local_278 * auVar29._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_));
        param_2[1] = (double)((ulonglong)(dStack_270 * auVar29._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_));
        *(undefined1 (*) [16])(param_2 + 2) = auVar21;
        param_2[4] = local_f8;
        param_2[5] = dStack_f0;
        param_2[6] = local_e8;
        param_2[7] = 0.0;
      }
      dVar26 = local_288._8_8_ * auVar1._8_8_;
      auVar8._8_4_ = SUB84(dVar6 * dVar7,0);
      auVar8._0_8_ = dVar2 * dVar4;
      auVar8._12_4_ = (int)((ulonglong)(dVar6 * dVar7) >> 0x20);
      *(undefined1 (*) [16])(param_2 + 8) = auVar8;
      auVar1._8_4_ = SUB84(dVar26,0);
      auVar1._0_8_ = dVar3 * dVar5;
      auVar1._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
      *(undefined1 (*) [16])(param_2 + 10) = auVar1;
      if ((local_d0 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
  }
  pdVar18 = (double *)(param_1 + 0x240);
  for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
    *param_2 = *pdVar18;
    pdVar18 = pdVar18 + 1;
    param_2 = param_2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_2f8);
}



// FUNCTION 1497dccd2 FUN_1497dccd2 body=277 status=ok
// SIG undefined FUN_1497dccd2(void)

void FUN_1497dccd2(longlong param_1,float param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [32];
  double local_78;
  double dStack_70;
  double local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined8 *)(param_1 + 0x2b4);
  uVar2 = FUN_1497dc498();
  FUN_1497dc52a(param_1,local_98,uVar2,uVar1);
  dVar3 = DAT_14c8464f0;
  dVar4 = DAT_14c8464e8;
  dVar5 = DAT_14c8464e0;
  if (0.0001 < param_2) {
    dVar5 = 1.0 / (double)param_2;
    dVar3 = (local_68 - *(double *)(param_1 + 0x2e8)) * dVar5;
    dVar4 = (dStack_70 - *(double *)(param_1 + 0x2e0)) * dVar5;
    dVar5 = dVar5 * (local_78 - *(double *)(param_1 + 0x2d8));
  }
  *(double *)(param_1 + 0x1e0) = dVar5;
  *(double *)(param_1 + 0x1e8) = dVar4;
  *(double *)(param_1 + 0x1f0) = dVar3;
  *(double *)(param_1 + 0x2d8) = local_78;
  *(double *)(param_1 + 0x2e0) = dStack_70;
  *(double *)(param_1 + 0x2e8) = local_68;
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497dcde8 FUN_1497dcde8 body=4904 status=ok
// SIG undefined FUN_1497dcde8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1497dcde8(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  longlong lVar9;
  undefined4 uVar10;
  longlong lVar11;
  double *pdVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar30;
  double dVar31;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar32;
  undefined1 auVar29 [16];
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar38;
  undefined1 auVar37 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auStack_548 [32];
  undefined8 *local_528;
  float local_51c;
  float local_518;
  float local_514;
  longlong *local_510;
  longlong *local_508;
  undefined8 local_500;
  undefined1 local_4f8 [16];
  undefined1 local_4e8 [16];
  undefined1 local_4d8 [16];
  int local_4c8;
  undefined4 uStack_4c4;
  double dStack_4c0;
  undefined1 local_4b8 [16];
  double local_4a8;
  double dStack_4a0;
  double local_498;
  double dStack_490;
  double local_488;
  double dStack_480;
  double local_478;
  double dStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  double local_458;
  double dStack_450;
  double local_448;
  double dStack_440;
  double local_438;
  double dStack_430;
  double local_428;
  double dStack_420;
  undefined8 local_418;
  double dStack_410;
  double local_408;
  double dStack_400;
  longlong *local_3f0;
  longlong local_3e8;
  longlong *local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  undefined1 local_3a8 [16];
  double local_398;
  double dStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  double local_368;
  double dStack_360;
  undefined1 local_358 [16];
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  double local_2f8;
  double dStack_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  undefined8 local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
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
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_548;
  local_500 = param_2;
  lVar9 = FUN_1497dc498();
  lVar11 = param_1[0x58];
  if (lVar9 != 0 && lVar11 != 0) {
    if ((longlong)*(int *)(lVar11 + 0x48) == 0) {
      iVar13 = 0;
    }
    else {
      lVar18 = 0;
      iVar19 = 0;
      iVar13 = 0;
      do {
        lVar20 = *(longlong *)(*(longlong *)(lVar11 + 0x40) + lVar18);
        iVar19 = iVar19 + *(int *)(lVar20 + 0x40);
        iVar13 = iVar13 + *(int *)(lVar20 + 0x60);
        lVar18 = lVar18 + 8;
      } while ((longlong)*(int *)(lVar11 + 0x48) * 8 != lVar18);
      iVar13 = iVar13 + iVar19;
    }
    local_510 = param_1 + 0x59;
    if ((int)param_1[0x5a] != iVar13) {
      FUN_1497de112(local_510);
    }
    (**(code **)(*param_1 + 0x4e0))(param_1,&local_178);
    lVar11 = (longlong)*(int *)(param_1[0x58] + 0x48);
    if (lVar11 != 0) {
      local_514 = (float)local_168;
      local_518 = (float)uStack_170;
      local_51c = (float)local_178;
      plVar17 = *(longlong **)(param_1[0x58] + 0x40);
      local_3f0 = plVar17 + lVar11;
      iVar13 = 0;
      local_508 = param_1;
      local_3e8 = lVar9;
      do {
        lVar11 = *plVar17;
        pdVar12 = &local_2f8;
        FUN_1497dc52a(param_1,pdVar12,local_3e8,*(undefined8 *)(lVar11 + 0x28));
        dVar23 = local_2a8;
        dVar8 = dStack_2b0;
        dVar7 = local_2b8;
        uVar14 = SUB84(pdVar12,0);
        uVar10 = SUB84(param_1,0);
        local_3d8 = 0;
        uStack_3d0 = 0x3ff0000000000000;
        local_3e0 = plVar17;
        if ((longlong)*(int *)(lVar11 + 0x40) != 0) {
          auVar25._8_8_ = dStack_2b0;
          auVar25._0_8_ = local_2b8;
          auVar24._8_8_ = -(ulonglong)(0.0 <= dStack_2b0);
          auVar24._0_8_ = -(ulonglong)(0.0 <= local_2b8);
          local_4e8 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar24);
          fVar21 = (float)(double)(~-(ulonglong)(ABS(local_2b8) < ABS(dStack_2b0)) &
                                   (ulonglong)local_2b8 |
                                  (ulonglong)dStack_2b0 &
                                  -(ulonglong)(ABS(local_2b8) < ABS(dStack_2b0)));
          auVar35._8_8_ = dStack_2a0;
          auVar35._0_8_ = local_2a8;
          if ((double)ABS(fVar21) < ABS(local_2a8)) {
            fVar21 = (float)local_2a8;
          }
          local_4b8 = ZEXT416((uint)fVar21);
          lVar9 = *(longlong *)(lVar11 + 0x38);
          auVar25 = minpd(_DAT_149934d80,auVar25);
          auVar35 = minpd(ZEXT816(0x3ff0000000000000),auVar35);
          auVar26._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
          auVar26._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
          local_4c8 = movmskpd(uVar10,auVar26);
          auVar36._8_8_ = -(ulonglong)(auVar35._8_8_ < 0.0);
          auVar36._0_8_ = -(ulonglong)(auVar35._0_8_ < 0.0);
          iVar19 = movmskpd(uVar14,auVar36);
          local_4c8 = local_4c8 + iVar19 * 4;
          dStack_480 = (double)CONCAT44(uStack_2e4,local_2e8);
          local_4f8._8_8_ = dStack_2d0;
          local_4f8._0_8_ = local_2d8;
          dVar30 = dStack_2f0 + dStack_2f0;
          dVar33 = dStack_480 + dStack_480;
          dVar41 = local_2f8 * (local_2f8 + local_2f8);
          local_458 = ((double)DAT_149934d80 - (dStack_480 * dVar33 + dStack_2f0 * dVar30)) *
                      local_2b8;
          dVar32 = (DAT_149934d80._8_8_ - (dStack_480 * dVar33 + dVar41)) * dStack_2b0;
          local_438 = (1.0 - (dVar41 + dStack_2f0 * dVar30)) * local_2a8;
          dVar38 = (local_2f8 + local_2f8) * dStack_2e0;
          local_428 = dStack_2e0;
          dStack_420 = dStack_2e0;
          dStack_450 = (dVar30 * local_2f8 + dVar33 * dStack_2e0) * local_2b8;
          dVar41 = (dVar33 * dStack_2f0 + dVar38) * dStack_2b0;
          dVar44 = (dVar30 * dStack_2e0 + local_2f8 * dVar33) * local_2a8;
          dVar34 = (dVar30 * local_2f8 - dVar33 * dStack_2e0) * dStack_2b0;
          dVar38 = (dVar33 * dStack_2f0 - dVar38) * local_2a8;
          local_448 = (local_2f8 * dVar33 - dVar30 * dStack_2e0) * local_2b8;
          dStack_430 = 0.0;
          dStack_440 = 0.0;
          local_418 = (double)CONCAT44(uStack_2c4,local_2c8);
          dStack_410 = dStack_2c0;
          local_468 = (double)CONCAT44(uStack_2c4,local_2c8);
          uStack_460 = 0x3ff0000000000000;
          dVar30 = (double)(~-(ulonglong)(0.0 <= local_2a8) & 0xbff0000000000000 |
                           -(ulonglong)(0.0 <= local_2a8) & 0x3ff0000000000000);
          local_4a8 = (double)local_4e8._8_8_;
          dStack_4a0 = (double)local_4e8._8_8_;
          local_478 = local_2f8;
          dStack_470 = dStack_2e0;
          local_498 = local_2f8;
          dStack_490 = dStack_2f0;
          dStack_400 = dStack_2e0;
          local_408 = dStack_480;
          local_488 = dStack_2f0;
          lVar18 = (longlong)iVar13 << 4;
          local_4d8._0_8_ = (longlong)*(int *)(lVar11 + 0x40) * 0x50;
          lVar20 = 0;
          do {
            pdVar12 = (double *)(lVar9 + 0x30 + lVar20);
            dVar39 = *pdVar12;
            dVar40 = pdVar12[1];
            dVar33 = *(double *)(lVar9 + 0x40 + lVar20);
            if (local_4c8 == 0) {
              dVar39 = dVar39 * dVar7;
              dVar40 = dVar40 * dVar8;
              dVar33 = dVar33 * dVar23;
              dVar22 = dVar40 * local_498 - local_488 * dVar39;
              dVar31 = dVar33 * dStack_490 - dStack_480 * dVar40;
              dVar42 = dVar39 * local_408 - local_478 * dVar33;
              dVar31 = dVar31 + dVar31;
              dVar42 = dVar42 + dVar42;
              dVar22 = dVar22 + dVar22;
              dVar39 = (dVar22 * dStack_490 - dStack_480 * dVar42) + local_428 * dVar31 + dVar39 +
                       (double)local_4f8._0_8_;
              dVar40 = (dVar31 * local_408 - dVar22 * local_478) + dStack_420 * dVar42 + dVar40 +
                       (double)local_4f8._8_8_;
              dVar33 = (dVar42 * local_498 - local_488 * dVar31) + local_428 * dVar22 + dVar33 +
                       local_418;
            }
            else {
              local_1f8 = local_458;
              dStack_1f0 = dStack_450;
              local_1e8 = local_448;
              dStack_1e0 = dStack_440;
              local_1d8._8_4_ = SUB84(dVar32,0);
              local_1d8._0_8_ = dVar34;
              local_1d8._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
              uStack_1c0 = 0;
              local_1b8._8_4_ = SUB84(dVar38,0);
              local_1b8._0_8_ = dVar44;
              local_1b8._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
              local_1a8 = local_438;
              dStack_1a0 = dStack_430;
              local_198 = (double)local_4f8._0_8_;
              dStack_190 = (double)local_4f8._8_8_;
              local_188 = local_468;
              uStack_180 = uStack_460;
              local_278 = 1.0;
              dStack_270 = 0.0;
              local_268 = 0.0;
              uStack_260 = 0;
              local_258._8_8_ = uStack_3d0;
              local_258._0_8_ = local_3d8;
              local_238 = 0.0;
              dStack_230 = 0.0;
              local_248 = 0.0;
              uStack_240 = 0;
              local_228 = 1.0;
              uStack_220 = 0;
              uStack_200 = 0x3ff0000000000000;
              local_218 = dVar39;
              dStack_210 = dVar40;
              local_208 = dVar33;
              local_1c8 = dVar41;
              FUN_1447fea8d(&local_178,&local_278,&local_1f8);
              FUN_144a1c686(&local_178,0x3e45798ee0000000);
              local_168 = local_168 * (double)local_4e8._0_8_;
              uStack_170 = uStack_170 * (double)local_4e8._0_8_;
              local_178 = local_178 * (double)local_4e8._0_8_;
              local_148 = local_148 * local_4a8;
              local_150 = local_150 * local_4a8;
              local_158 = local_158 * local_4a8;
              local_128 = local_128 * dVar30;
              local_130 = local_130 * dVar30;
              local_138 = local_138 * dVar30;
              FUN_14481fd10(&local_368,&local_178);
              dVar39 = local_118;
              dVar40 = dStack_110;
              dVar33 = local_108;
            }
            local_528 = &local_278;
            pdVar12 = &local_1f8;
            local_178 = (double)(CONCAT44((float)dVar39,SUB84(local_178,0)) & 0xffffffffffff0000);
            uStack_170 = (double)CONCAT44((float)dVar33,(float)dVar40);
            local_168 = (double)CONCAT44(local_168._4_4_,
                                         *(float *)(lVar9 + 0x48 + lVar20) * (float)local_4b8._0_4_)
            ;
            lVar1 = *local_510;
            local_278 = (double)CONCAT44(local_518,local_51c);
            dStack_270 = (double)CONCAT44(dStack_270._4_4_,local_514);
            puVar16 = (undefined8 *)(lVar1 + lVar18);
            local_308 = *puVar16;
            uStack_300 = puVar16[1];
            puVar16 = &local_308;
            FUN_1497de180(pdVar12,puVar16,local_500,&local_178);
            uVar14 = SUB84(puVar16,0);
            uVar10 = SUB84(pdVar12,0);
            auVar5._8_8_ = dStack_1f0;
            auVar5._0_8_ = local_1f8;
            *(undefined1 (*) [16])(lVar1 + lVar18) = auVar5;
            lVar18 = lVar18 + 0x10;
            iVar13 = iVar13 + 1;
            lVar20 = lVar20 + 0x50;
          } while (local_4d8._0_8_ != lVar20);
        }
        dVar8 = dStack_2b0;
        dVar7 = local_2b8;
        param_1 = local_508;
        if ((longlong)*(int *)(lVar11 + 0x60) != 0) {
          auVar4._8_8_ = dStack_2b0;
          auVar4._0_8_ = local_2b8;
          auVar27._8_8_ = -(ulonglong)(0.0 <= dStack_2b0);
          auVar27._0_8_ = -(ulonglong)(0.0 <= local_2b8);
          local_4f8 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar27);
          local_4c8 = SUB84(local_2a8,0);
          uStack_4c4 = (undefined4)((ulonglong)local_2a8 >> 0x20);
          dStack_4c0 = dStack_2a0;
          fVar21 = (float)(double)(~-(ulonglong)(ABS(local_2b8) < ABS(dStack_2b0)) &
                                   (ulonglong)local_2b8 |
                                  (ulonglong)dStack_2b0 &
                                  -(ulonglong)(ABS(local_2b8) < ABS(dStack_2b0)));
          dVar23 = local_2a8 * 1.0;
          if ((double)ABS(fVar21) < ABS(dVar23)) {
            fVar21 = (float)dVar23;
          }
          local_4d8 = ZEXT416((uint)fVar21);
          auVar25 = minpd(_DAT_149934d80,auVar4);
          auVar2._8_8_ = dStack_2a0;
          auVar2._0_8_ = local_2a8;
          auVar35 = minpd(ZEXT816(0x3ff0000000000000),auVar2);
          auVar28._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
          auVar28._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
          iVar19 = movmskpd(uVar10,auVar28);
          auVar37._8_8_ = -(ulonglong)(auVar35._8_8_ < 0.0);
          auVar37._0_8_ = -(ulonglong)(auVar35._0_8_ < 0.0);
          iVar15 = movmskpd(uVar14,auVar37);
          local_408 = (double)CONCAT44(uStack_2e4,local_2e8);
          dStack_400 = dStack_2e0;
          local_3a8._8_4_ = local_2e8;
          local_3a8._0_8_ = dStack_2f0;
          local_448 = local_2d8;
          dStack_440 = dStack_2d0;
          local_418 = (double)CONCAT44(uStack_2c4,local_2c8);
          dStack_410 = dStack_2c0;
          dVar32 = dStack_2f0 + dStack_2f0;
          dVar34 = local_408 + local_408;
          dVar41 = local_2f8 * (local_2f8 + local_2f8);
          local_498 = ((double)DAT_149934d80 - (local_408 * dVar34 + dStack_2f0 * dVar32)) *
                      local_2b8;
          dStack_420 = (DAT_149934d80._8_8_ - (local_408 * dVar34 + dVar41)) * dStack_2b0;
          local_478 = (1.0 - (dVar41 + dStack_2f0 * dVar32)) * local_2a8;
          local_438 = local_2f8;
          dStack_430 = local_2f8;
          dVar41 = (local_2f8 + local_2f8) * dStack_2e0;
          local_458 = dStack_2e0;
          dStack_450 = dStack_2e0;
          dStack_490 = (dVar32 * local_2f8 + dVar34 * dStack_2e0) * local_2b8;
          local_468 = (dVar34 * dStack_2f0 + dVar41) * dStack_2b0;
          dVar38 = (dVar32 * dStack_2e0 + local_2f8 * dVar34) * local_2a8;
          local_428 = (dVar32 * local_2f8 - dVar34 * dStack_2e0) * dStack_2b0;
          dVar41 = (dVar34 * dStack_2f0 - dVar41) * local_2a8;
          local_488 = (local_2f8 * dVar34 - dVar32 * dStack_2e0) * local_2b8;
          dStack_470 = 0.0;
          dStack_480 = 0.0;
          uStack_460 = 0;
          dVar32 = (double)(~-(ulonglong)(0.0 <= dVar23) & 0xbff0000000000000 |
                           -(ulonglong)(0.0 <= dVar23) & 0x3ff0000000000000);
          local_4a8 = (double)local_4f8._8_8_;
          dStack_4a0 = (double)local_4f8._8_8_;
          local_398 = local_2f8;
          dStack_390 = dStack_2e0;
          local_4e8._8_8_ = dStack_2f0;
          local_4e8._0_8_ = local_2f8;
          local_3a8._12_4_ = uStack_2e4;
          lVar18 = (longlong)iVar13 << 4;
          lVar9 = (longlong)*(int *)(lVar11 + 0x60) * 0x68;
          lVar11 = *(longlong *)(lVar11 + 0x58) + 0x48;
          local_3b8 = dStack_2f0;
          dStack_3b0 = dStack_2f0;
          local_3c8 = (double)CONCAT44(uStack_2e4,local_2e8);
          dStack_3c0 = (double)CONCAT44(uStack_2e4,local_2e8);
          local_4b8._8_4_ = SUB84(dStack_2a0 * 0.0,0);
          local_4b8._0_8_ = dVar23;
          local_4b8._12_4_ = (int)((ulonglong)(dStack_2a0 * 0.0) >> 0x20);
          do {
            FUN_144a7484c(lVar11,&local_178);
            auVar25 = _DAT_149934d80;
            local_348 = 0.0;
            dStack_340 = 0.0;
            if (iVar19 + iVar15 * 4 == 0) {
              local_368 = uStack_170 * local_3c8 * -1.0 +
                          local_168 * local_3b8 +
                          dStack_160 * local_438 * 1.0 + local_178 * local_458;
              dStack_360 = local_178 * dStack_3c0 * 1.0 +
                           dStack_160 * dStack_3b0 +
                           local_168 * dStack_430 * -1.0 + uStack_170 * dStack_450;
              local_358._8_8_ =
                   local_168 * dStack_3c0 * -1.0 +
                   ((local_178 * dStack_430 * -1.0 + dStack_160 * dStack_450) -
                   uStack_170 * dStack_3b0);
              local_358._0_8_ =
                   dStack_160 * local_3c8 * 1.0 +
                   ((uStack_170 * local_438 * 1.0 + local_168 * local_458) - local_178 * local_3b8);
              dVar30 = *(double *)(lVar11 + -0x18) * dVar7;
              dVar33 = *(double *)(lVar11 + -0x10) * dVar8;
              dVar23 = *(double *)(lVar11 + -8) * (double)CONCAT44(uStack_4c4,local_4c8);
              dVar34 = dStack_4c0 * 0.0;
              dVar44 = dVar33 * (double)local_4e8._0_8_ - dVar30 * (double)local_3a8._0_8_;
              dVar39 = dVar23 * (double)local_4e8._8_8_ - dVar33 * (double)local_3a8._8_8_;
              dVar40 = dVar30 * local_408 - dVar23 * local_398;
              dVar22 = dVar34 * dStack_400 - dVar34 * dStack_390;
              dVar39 = dVar39 + dVar39;
              dVar40 = dVar40 + dVar40;
              dVar44 = dVar44 + dVar44;
              dVar22 = dVar22 + dVar22;
              dStack_330 = (dVar22 * dStack_400 - dVar22 * dStack_390) +
                           dStack_450 * dVar22 + dVar34 + dStack_410;
              local_338 = (dVar40 * (double)local_4e8._0_8_ - (double)local_3a8._0_8_ * dVar39) +
                          local_458 * dVar44 + dVar23 + local_418;
              local_348 = (dVar44 * (double)local_4e8._8_8_ - (double)local_3a8._8_8_ * dVar40) +
                          local_458 * dVar39 + dVar30 + local_448;
              dStack_340 = (dVar39 * local_408 - dVar44 * local_398) + dStack_450 * dVar40 + dVar33
                           + dStack_440;
            }
            else {
              local_1f8 = local_498;
              dStack_1f0 = dStack_490;
              local_1e8 = local_488;
              dStack_1e0 = dStack_480;
              local_1d8._8_8_ = dStack_420;
              local_1d8._0_8_ = local_428;
              local_1c8 = local_468;
              uStack_1c0 = uStack_460;
              local_1b8._8_4_ = SUB84(dVar41,0);
              local_1b8._0_8_ = dVar38;
              local_1b8._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
              local_1a8 = local_478;
              dStack_1a0 = dStack_470;
              local_188 = (double)CONCAT44(uStack_2c4,local_2c8);
              local_198 = local_2d8;
              dStack_190 = dStack_2d0;
              uStack_180 = 0x3ff0000000000000;
              dVar30 = uStack_170 + uStack_170;
              dVar34 = local_168 + local_168;
              dVar33 = local_178 * (local_178 + local_178);
              local_278 = (double)DAT_149934d80 - (local_168 * dVar34 + uStack_170 * dVar30);
              dVar23 = DAT_149934d80._8_8_ - (local_168 * dVar34 + dVar33);
              local_228 = 1.0 - (dVar33 + uStack_170 * dVar30);
              dStack_230 = (local_178 + local_178) * dStack_160;
              dStack_270 = dVar30 * local_178 + dVar34 * dStack_160;
              local_248 = dVar34 * uStack_170 + dStack_230;
              dStack_230 = dVar34 * uStack_170 - dStack_230;
              local_238 = dVar30 * dStack_160 + local_178 * dVar34;
              local_268 = local_178 * dVar34 - dVar30 * dStack_160;
              uStack_260 = 0;
              local_258._8_4_ = SUB84(dVar23,0);
              local_258._0_8_ = dVar30 * local_178 - dVar34 * dStack_160;
              local_258._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
              uStack_240 = 0;
              uStack_220 = 0;
              uStack_200 = 0x3ff0000000000000;
              local_218 = *(double *)(lVar11 + -0x18);
              dStack_210 = *(double *)(lVar11 + -0x10);
              local_208 = *(double *)(lVar11 + -8);
              FUN_1447fea8d(&local_178,&local_278,&local_1f8);
              FUN_144a1c686(&local_178,0x3e45798ee0000000);
              local_168 = local_168 * (double)local_4f8._0_8_;
              uStack_170 = uStack_170 * (double)local_4f8._0_8_;
              local_178 = local_178 * (double)local_4f8._0_8_;
              local_148 = local_148 * local_4a8;
              local_150 = local_150 * local_4a8;
              local_158 = local_158 * local_4a8;
              local_128 = local_128 * dVar32;
              local_130 = local_130 * dVar32;
              local_138 = local_138 * dVar32;
              FUN_14481fd10(&local_298,&local_178);
              dVar23 = local_288 * local_288 + local_298 * local_298;
              dVar34 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
              auVar43._0_8_ = dVar23 + dVar34;
              auVar43._8_8_ = dVar23 + dVar34;
              auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_);
              auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_);
              auVar35 = sqrtpd(auVar43,auVar43);
              auVar25 = divpd(auVar25,auVar35);
              auVar45._0_8_ = auVar25._0_8_ * local_288;
              auVar45._8_8_ = auVar25._8_8_ * dStack_280;
              auVar3._8_8_ = uStack_3d0;
              auVar3._0_8_ = local_3d8;
              local_358 = blendvpd(auVar3,auVar45,auVar29);
              local_368 = (double)((ulonglong)(local_298 * auVar25._0_8_) &
                                  -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_));
              dStack_360 = (double)((ulonglong)(dStack_290 * auVar25._8_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_));
              dStack_330 = 0.0;
              local_338 = local_108;
              local_348 = local_118;
              dStack_340 = dStack_110;
            }
            local_318 = local_4b8._0_8_;
            uStack_310 = local_4b8._8_8_;
            if (*(float *)(lVar11 + 0x1c) <= 0.001) {
              local_178 = (double)(CONCAT44((float)local_348,SUB84(local_178,0)) &
                                  0xffffffffffff0000);
              uStack_170 = (double)CONCAT44((float)local_338,(float)dStack_340);
              local_168 = (double)CONCAT44(local_168._4_4_,
                                           *(float *)(lVar11 + 0x18) * (float)local_4d8._0_4_);
              lVar20 = *local_510;
              local_278 = (double)CONCAT44(local_518,local_51c);
              dStack_270 = (double)CONCAT44(dStack_270._4_4_,local_514);
              local_388 = *(undefined8 *)(lVar20 + lVar18);
              uStack_380 = ((undefined8 *)(lVar20 + lVar18))[1];
              local_528 = &local_278;
              FUN_1497de180(&local_1f8,&local_388,local_500,&local_178);
            }
            else {
              FUN_1497db93a(&local_178,&local_368);
              lVar20 = *local_510;
              local_278 = (double)CONCAT44(local_518,local_51c);
              dStack_270 = (double)CONCAT44(dStack_270._4_4_,local_514);
              local_378 = *(undefined8 *)(lVar20 + lVar18);
              uStack_370 = ((undefined8 *)(lVar20 + lVar18))[1];
              local_528 = &local_278;
              FUN_1497de250(&local_1f8,&local_378,local_500,&local_178);
            }
            auVar6._8_8_ = dStack_1f0;
            auVar6._0_8_ = local_1f8;
            *(undefined1 (*) [16])(lVar20 + lVar18) = auVar6;
            iVar13 = iVar13 + 1;
            lVar18 = lVar18 + 0x10;
            lVar11 = lVar11 + 0x68;
            lVar9 = lVar9 + -0x68;
          } while (lVar9 != 0);
        }
        plVar17 = local_3e0 + 1;
      } while (plVar17 != local_3f0);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_548) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497de112 FUN_1497de112 body=109 status=ok
// SIG undefined FUN_1497de112(void)

void FUN_1497de112(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1497e349c(param_1,iVar1);
    }
    FUN_1497e347c((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1497e3522(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1497de180 FUN_1497de180 body=205 status=ok
// SIG undefined FUN_1497de180(void)

undefined4 *
FUN_1497de180(undefined4 *param_1,undefined4 *param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20;
  undefined2 local_1f;
  undefined1 local_1d;
  undefined8 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  if (param_1[1] == -1) {
    if ((*(byte *)(param_3 + 0x40) & 1) == 0) {
      FUN_1497e35be(param_3 + 0x48,&local_20,param_4);
    }
    else {
      local_20 = 2;
      local_1c = 0xffffffffffffffff;
      local_14 = 0xffffffff;
    }
    *(undefined1 *)param_1 = local_20;
    *(undefined2 *)((longlong)param_1 + 1) = local_1f;
    *(undefined1 *)((longlong)param_1 + 3) = local_1d;
    *(undefined8 *)(param_1 + 1) = local_1c;
    param_1[3] = local_14;
  }
  else if ((*(byte *)(param_3 + 0x40) & 1) == 0) {
    FUN_1497e3908(param_3 + 0x48,param_1,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497de250 FUN_1497de250 body=191 status=ok
// SIG undefined FUN_1497de250(void)

undefined4 *
FUN_1497de250(undefined4 *param_1,undefined4 *param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20;
  undefined2 local_1f;
  undefined1 local_1d;
  undefined8 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  if (param_1[1] == -1) {
    if ((*(byte *)(param_3 + 0x40) & 1) == 0) {
      FUN_1497e3aa8(param_3 + 0x48,&local_20,param_4);
    }
    else {
      local_20 = 2;
      local_1c = 0xffffffffffffffff;
      local_14 = 0xffffffff;
    }
    *(undefined1 *)param_1 = local_20;
    *(undefined2 *)((longlong)param_1 + 1) = local_1f;
    *(undefined1 *)((longlong)param_1 + 3) = local_1d;
    *(undefined8 *)(param_1 + 1) = local_1c;
    param_1[3] = local_14;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  FUN_1497e39f4(param_3,param_1,param_4,param_5);
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1497de310 FUN_1497de310 body=701 status=ok
// SIG undefined FUN_1497de310(void)

void FUN_1497de310(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 auStack_158 [32];
  float *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined2 local_118;
  undefined2 uStack_116;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float local_108;
  undefined4 uStack_104;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar6 = param_1[0x16];
  if (lVar6 == 0) {
    lVar6 = FUN_1448abda6(param_1);
    if (lVar6 == 0) goto LAB_1497de363;
  }
  lVar6 = FUN_1497de5ce(lVar6);
  if (lVar6 != 0) {
    uVar2 = *(undefined8 *)((longlong)param_1 + 0x2b4);
    uVar7 = FUN_1497dc498(param_1);
    FUN_1497dc52a(param_1,local_c8,uVar7,uVar2);
    (**(code **)(*param_1 + 0x4e0))(param_1,&local_118);
    cVar1 = (char)param_1[0x55];
    if (cVar1 == '\x02') {
      FUN_1497dcde8(param_1,lVar6);
    }
    else {
      dVar5 = (double)CONCAT44(uStack_104,local_108);
      dVar4 = (double)CONCAT44(fStack_10c,local_110);
      fVar8 = (float)(double)CONCAT44(fStack_114,CONCAT22(uStack_116,local_118));
      if (cVar1 == '\x01') {
        FUN_1497de112(param_1 + 0x59,1);
        FUN_1497db93a(&local_118,local_c8);
        puVar3 = (undefined4 *)param_1[0x59];
        local_138 = &local_e4;
        local_128 = *puVar3;
        uStack_124 = puVar3[1];
        uStack_120 = puVar3[2];
        uStack_11c = puVar3[3];
        local_e4 = fVar8;
        local_e0 = (float)dVar4;
        local_dc = (float)dVar5;
        FUN_1497de250(&local_d8,&local_128,lVar6,&local_118);
        *puVar3 = local_d8;
        puVar3[1] = uStack_d4;
        puVar3[2] = uStack_d0;
        puVar3[3] = uStack_cc;
      }
      else if (cVar1 == '\0') {
        FUN_1497de112(param_1 + 0x59,1);
        local_108 = (float)(double)(~-(ulonglong)(ABS(local_88) < ABS(dStack_80)) &
                                    (ulonglong)local_88 |
                                   (ulonglong)dStack_80 &
                                   -(ulonglong)(ABS(local_88) < ABS(dStack_80)));
        if ((double)ABS(local_108) < ABS(local_78)) {
          local_108 = (float)local_78;
        }
        fStack_10c = (float)local_98;
        local_110 = (float)local_a0;
        fStack_114 = (float)local_a8;
        local_108 = local_108 * *(float *)((longlong)param_1 + 0x2ac);
        local_118 = 0;
        puVar3 = (undefined4 *)param_1[0x59];
        local_138 = &local_e4;
        local_f8 = *puVar3;
        uStack_f4 = puVar3[1];
        uStack_f0 = puVar3[2];
        uStack_ec = puVar3[3];
        local_e4 = fVar8;
        local_e0 = (float)dVar4;
        local_dc = (float)dVar5;
        FUN_1497de180(&local_d8,&local_f8,lVar6);
        *puVar3 = local_d8;
        puVar3[1] = uStack_d4;
        puVar3[2] = uStack_d0;
        puVar3[3] = uStack_cc;
      }
    }
  }
LAB_1497de363:
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497de5ce FUN_1497de5ce body=103 status=ok
// SIG undefined FUN_1497de5ce(void)

void FUN_1497de5ce(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145bb0d9c();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_18);
  }
  FUN_1497e3cac(param_1 + 0x870,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497de636 FUN_1497de636 body=237 status=ok
// SIG undefined FUN_1497de636(void)

ulonglong FUN_1497de636(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (*(char *)(param_1 + 0x2a8) == '\x01') {
    cVar3 = '\x01';
    if (*(int *)(param_1 + 0x2d0) != 1) {
      return 1;
    }
  }
  else {
    if (*(char *)(param_1 + 0x2a8) == '\x02') {
      lVar1 = *(longlong *)(param_1 + 0x2c0);
      iVar6 = 0;
      if (lVar1 == 0) {
        iVar7 = 0;
        lVar4 = 0;
      }
      else {
        iVar7 = 0;
        lVar4 = 0;
        iVar6 = 0;
        if ((longlong)*(int *)(lVar1 + 0x48) != 0) {
          lVar4 = (longlong)*(int *)(lVar1 + 0x48) * 8;
          lVar9 = 0;
          iVar7 = 0;
          iVar6 = 0;
          do {
            lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x40) + lVar9);
            iVar7 = iVar7 + *(int *)(lVar2 + 0x40);
            iVar6 = iVar6 + *(int *)(lVar2 + 0x60);
            lVar9 = lVar9 + 8;
          } while (lVar4 != lVar9);
        }
      }
      if (*(int *)(param_1 + 0x2d0) != iVar7 + iVar6) {
        return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
      }
      iVar8 = 0;
      if (iVar7 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        do {
          uVar5 = (ulonglong)
                  (byte)((byte)uVar5 |
                        *(char *)(*(longlong *)(param_1 + 0x2c8) + (longlong)iVar8 * 0x10) == '\0');
          iVar8 = iVar8 + 1;
        } while (iVar7 != iVar8);
      }
      if (iVar6 == 0) {
        return uVar5;
      }
      do {
        uVar5 = (ulonglong)
                (byte)((byte)uVar5 |
                      *(char *)(*(longlong *)(param_1 + 0x2c8) + (longlong)iVar7 * 0x10) == '\x01');
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      return uVar5;
    }
    if (*(int *)(param_1 + 0x2d0) != 1) {
      return 1;
    }
    cVar3 = '\0';
  }
  return (ulonglong)(**(char **)(param_1 + 0x2c8) == cVar3);
}


