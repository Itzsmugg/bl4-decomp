// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143cafe74 FUN_143cafe74 body=93 status=ok
// SIG undefined FUN_143cafe74(void)

void FUN_143cafe74(longlong param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_14b3eca60;
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143cafed2 FUN_143cafed2 body=126 status=ok
// SIG undefined FUN_143cafed2(void)

void FUN_143cafed2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined **)p_Var1 = &DAT_149efe500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3eca60;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143caff41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143caff6c FUN_143caff6c body=29 status=ok
// SIG undefined FUN_143caff6c(void)

undefined8 FUN_143caff6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143caff9e FUN_143caff9e body=93 status=ok
// SIG undefined FUN_143caff9e(void)

void FUN_143caff9e(longlong param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_14b3ecad0;
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143cafffc FUN_143cafffc body=93 status=ok
// SIG undefined FUN_143cafffc(void)

void FUN_143cafffc(longlong param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_14b3ecad0;
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143cb005a FUN_143cb005a body=126 status=ok
// SIG undefined FUN_143cb005a(void)

void FUN_143cb005a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined **)p_Var1 = &DAT_149efe500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ecad0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143cb00c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143cb00f4 FUN_143cb00f4 body=29 status=ok
// SIG undefined FUN_143cb00f4(void)

undefined8 FUN_143cb00f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cb0126 FUN_143cb0126 body=93 status=ok
// SIG undefined FUN_143cb0126(void)

void FUN_143cb0126(longlong param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_14b3ecb40;
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143cb0184 FUN_143cb0184 body=93 status=ok
// SIG undefined FUN_143cb0184(void)

void FUN_143cb0184(longlong param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_14b3ecb40;
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143cb01e2 FUN_143cb01e2 body=126 status=ok
// SIG undefined FUN_143cb01e2(void)

void FUN_143cb01e2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined **)p_Var1 = &DAT_149efe500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ecb40;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143cb0251. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143cb0276 FUN_143cb0276 body=29 status=ok
// SIG undefined FUN_143cb0276(void)

undefined8 FUN_143cb0276(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cb02a8 FUN_143cb02a8 body=93 status=ok
// SIG undefined FUN_143cb02a8(void)

void FUN_143cb02a8(longlong param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_14b3ecbb0;
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143cb0306 FUN_143cb0306 body=93 status=ok
// SIG undefined FUN_143cb0306(void)

void FUN_143cb0306(longlong param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_14b3ecbb0;
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143cb0364 FUN_143cb0364 body=126 status=ok
// SIG undefined FUN_143cb0364(void)

void FUN_143cb0364(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined **)p_Var1 = &DAT_149efe500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ecbb0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143cb03d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143cb03f8 FUN_143cb03f8 body=29 status=ok
// SIG undefined FUN_143cb03f8(void)

undefined8 FUN_143cb03f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cb042a FUN_143cb042a body=93 status=ok
// SIG undefined FUN_143cb042a(void)

void FUN_143cb042a(longlong param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_14b3ecc20;
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143cb0488 FUN_143cb0488 body=93 status=ok
// SIG undefined FUN_143cb0488(void)

void FUN_143cb0488(longlong param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_14b3ecc20;
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143cb04e6 FUN_143cb04e6 body=126 status=ok
// SIG undefined FUN_143cb04e6(void)

void FUN_143cb04e6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined **)p_Var1 = &DAT_149efe500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ecc20;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143cb0555. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143cb057a FUN_143cb057a body=29 status=ok
// SIG undefined FUN_143cb057a(void)

undefined8 FUN_143cb057a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cb05ac FUN_143cb05ac body=93 status=ok
// SIG undefined FUN_143cb05ac(void)

void FUN_143cb05ac(longlong param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_14b3ecc90;
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143cb060a FUN_143cb060a body=93 status=ok
// SIG undefined FUN_143cb060a(void)

void FUN_143cb060a(longlong param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_14b3ecc90;
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143cb0668 FUN_143cb0668 body=126 status=ok
// SIG undefined FUN_143cb0668(void)

void FUN_143cb0668(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined **)p_Var1 = &DAT_149efe500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ecc90;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143cb06d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143cb06fb FUN_143cb06fb body=3299 status=ok
// SIG undefined FUN_143cb06fb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cb06fb(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  char *local_50;
  int local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb71830 = (ulonglong)uVar3;
  _DAT_14cb71840 = &LAB_143ca5de8;
  _DAT_14cb71848 = 0x45004000;
  DAT_14cb7184c = 1;
  DAT_14cb71838 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb71838;
  atexit((_func_5014 *)&LAB_143ca5ded);
  DAT_14cb71858 = 0;
  atexit((_func_5014 *)&LAB_143ca5e21);
  _DAT_14cb71918 = &LAB_143ca5e39;
  _DAT_14cb71920 = 0x45004000;
  DAT_14cb71924 = 1;
  DAT_14cb71910 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb71910;
  atexit((_func_5014 *)&LAB_143ca5e3e);
  _DAT_14cb71930 = 0x47efffffe0000000;
  _DAT_14cb71938 = 0x47efffffe0000000;
  _DAT_14cb71940 = 0x47efffffe0000000;
  _DAT_14cb71948 = 0x47efffffe0000000;
  _DAT_14cb71950 = 0x47efffffe0000000;
  _DAT_14cb71958 = 0x47efffffe0000000;
  _DAT_14cb71960 = 0x47efffffe0000000;
  _DAT_14cb71968 = 0x47efffffe0000000;
  _DAT_14cb71970 = 0xffffffff;
  _DAT_14cb71974 = 0;
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_50,&DAT_14cb71978);
  if (cVar2 == '\0') {
    _DAT_14cb71978 = 0;
    uRam000000014cb71980 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&DAT_14cb71988,L"AINode",1);
  FUN_1446f470e(&DAT_14cb71990,L"AINodePerchSpawn",1);
  _DAT_14cb71998 = 0;
  _DAT_14cb719a0 = 0;
  _DAT_14cb719a8 = 0;
  _DAT_14cb719b0 = 0;
  _DAT_14cb719b8 = 0;
  _DAT_14cb719c0 = 0;
  _DAT_14cb719c8 = 0;
  _DAT_14cb719d0 = 0;
  _DAT_14cb719d8 = 0;
  _DAT_14cb719e0 = 0;
  _DAT_14cb719e8 = 0;
  _DAT_14cb719f0 = 0;
  FUN_1446f470e(&DAT_14cb719f8,L"OakStanceData",1);
  FUN_1446f470e(&DAT_14cb71a00,L"OakStanceData_Default",1);
  FUN_1446f470e(&DAT_14cb71a08,L"OakStanceData_Aggro",1);
  FUN_1446f470e(&DAT_14cb71a10,L"OakNodeStance",1);
  _DAT_14cb71a1c = 0;
  FUN_14052b5e0(&DAT_14cb71a18,"PlayerAwareness",0);
  _DAT_14cb71a28 = "PlayerAwareness";
  local_50 = "game_session_phase_guid";
  local_48 = 0x17;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  FUN_1446f470e(&local_50,L"game_session",1);
  _DAT_14cb71a38 = 0;
  local_50 = "game_session_phase";
  local_48 = 0x12;
  local_44 = 0;
  DAT_14cb71a30 = (ulonglong)uVar3;
  uVar3 = FUN_14001a6c0(&local_50,1);
  FUN_1446f470e(&local_50,L"game_session",1);
  _DAT_14cb71a48 = 0;
  local_50 = "game_session_host_configuration";
  local_48 = 0x1f;
  local_44 = 0;
  DAT_14cb71a40 = (ulonglong)uVar3;
  uVar3 = FUN_14001a6c0(&local_50,1);
  FUN_1446f470e(&local_50,L"game_session",1);
  _DAT_14cb71a58 = 0;
  local_50 = "game_session_host_configuration_guid";
  local_48 = 0x24;
  local_44 = 0;
  DAT_14cb71a50 = (ulonglong)uVar3;
  uVar3 = FUN_14001a6c0(&local_50,1);
  FUN_1446f470e(&local_50,L"game_session",1);
  _DAT_14cb71a68 = 0;
  local_50 = "game_session_world_index";
  local_48 = 0x18;
  local_44 = 0;
  DAT_14cb71a60 = (ulonglong)uVar3;
  uVar3 = FUN_14001a6c0(&local_50,1);
  FUN_1446f470e(&local_50,L"game_session",1);
  _DAT_14cb71a78 = 0;
  local_50 = "game_session_server_type";
  local_48 = 0x18;
  local_44 = 0;
  DAT_14cb71a70 = (ulonglong)uVar3;
  uVar3 = FUN_14001a6c0(&local_50,1);
  FUN_1446f470e(&local_50,L"game_session",1);
  _DAT_14cb71a88 = 0;
  local_50 = "game_session_game_mode";
  local_48 = 0x16;
  local_44 = 0;
  DAT_14cb71a80 = (ulonglong)uVar3;
  uVar3 = FUN_14001a6c0(&local_50,1);
  FUN_1446f470e(&local_50,L"game_session",1);
  _DAT_14cb71a98 = 0;
  local_50 = "game_session_start_time";
  local_48 = 0x17;
  local_44 = 0;
  DAT_14cb71a90 = (ulonglong)uVar3;
  uVar3 = FUN_14001a6c0(&local_50,1);
  FUN_1446f470e(&local_50,L"game_session",1);
  _DAT_14cb71aa8 = 0;
  local_50 = "game_session_event_time";
  local_48 = 0x17;
  local_44 = 0;
  DAT_14cb71aa0 = (ulonglong)uVar3;
  uVar3 = FUN_14001a6c0(&local_50,1);
  FUN_1446f470e(&local_50,L"game_session",1);
  _DAT_14cb71ab8 = 0;
  local_50 = "game_session_event_duration";
  local_48 = 0x1b;
  local_44 = 0;
  DAT_14cb71ab0 = (ulonglong)uVar3;
  uVar3 = FUN_14001a6c0(&local_50,1);
  FUN_1446f470e(&local_50,L"game_session",1);
  _DAT_14cb71ac8 = 0;
  local_50 = "game_session_num_local_players";
  local_48 = 0x1e;
  local_44 = 0;
  DAT_14cb71ac0 = (ulonglong)uVar3;
  uVar3 = FUN_14001a6c0(&local_50,1);
  FUN_1446f470e(&local_50,L"game_session",1);
  _DAT_14cb71ad8 = 0;
  local_50 = "game_session_num_remote_players";
  local_48 = 0x1f;
  local_44 = 0;
  DAT_14cb71ad0 = (ulonglong)uVar3;
  uVar3 = FUN_14001a6c0(&local_50,1);
  FUN_1446f470e(&local_50,L"game_session",1);
  _DAT_14cb71ae8 = 0;
  local_50 = "game_session_num_bots";
  local_48 = 0x15;
  local_44 = 0;
  DAT_14cb71ae0 = (ulonglong)uVar3;
  uVar3 = FUN_14001a6c0(&local_50,1);
  FUN_1446f470e(&local_50,L"game_session",1);
  _DAT_14cb71af8 = 0;
  local_50 = "game_session_num_spectators";
  local_48 = 0x1b;
  local_44 = 0;
  DAT_14cb71af0 = (ulonglong)uVar3;
  uVar3 = FUN_14001a6c0(&local_50,1);
  FUN_1446f470e(&local_50,L"game_session",1);
  _DAT_14cb71b08 = 0;
  local_68._0_4_ = 0;
  DAT_14cb71b00 = (ulonglong)uVar3;
  FUN_1415c789c(&DAT_14cb71b20,L"gbx.analytics.game_session.heartbeat",&DAT_14c763850,
                L"Heartbeat rate in seconds");
  atexit(FUN_143ca632d);
  local_68 = (char **)((ulonglong)local_68._4_4_ << 0x20);
  FUN_1415c789c(&DAT_14cb71b30,L"gbx.analytics.game_session.idle_seconds",&DAT_14c763854,
                L"Idle detection threshold in seconds");
  atexit(FUN_143ca6372);
  local_50 = "game_session_event_guid";
  local_48 = 0x17;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  FUN_141544bf8(&DAT_14cb71b68,uVar4,&DAT_149dfb77a,0x53);
  _DAT_14cb71b68 = &PTR_FUN_14b3ec198;
  atexit((_func_5014 *)&LAB_143ca63e8);
  local_50 = "game_session_guid";
  local_48 = 0x11;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  FUN_141544bf8(&DAT_14cb71bb0,uVar4,&DAT_149dfb77a,0x53);
  _DAT_14cb71bb0 = &PTR_FUN_14b3ec1c0;
  atexit((_func_5014 *)&LAB_143ca63f4);
  local_50 = "game_session";
  local_48 = 0xc;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  FUN_14147d486(&DAT_14cb71db0,uVar4,3);
  _DAT_14cb71db0 = &PTR_FUN_14b3ea610;
  FUN_145ca1a9c();
  atexit((_func_5014 *)&LAB_143ca6400);
  local_50 = (char *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_50 + 0x10) = lVar5;
  *(undefined ***)local_50 = &PTR_FUN_14b3ec8b0;
  local_60 = 0;
  local_68 = &local_50;
  FUN_14171ec12(&DAT_14cb71c00,L"a.gbx.Manager.Enabled",&DAT_14cb71bf8,
                L"Whether the GbxAnimManager is enabled. True / False.");
  if (local_48 != 0) {
    if (local_50 == (char *)0x0) goto LAB_143cb0ff5;
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_143cb0ff5:
  atexit(FUN_143ca84c2);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cb71c10,L"a.gbx.Manager.PostUpdateWork",&DAT_14c763858,
                L"If false, the manager will apply the work in the PostPhysics Tick Group. If true, then anim work will be applied in the PostUpdateWork Tick Group. This will only work when \'gbx.UseCameraTickFunction\' is also enabled."
               );
  atexit(FUN_143ca8507);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cb71c20,L"a.gbx.Manager.IgnoreShadows",&DAT_14c763888,
                L"Whether shadows are considered when deciding if a Skeletal Mesh Component is rendered. 0 = Shadows are considered. 1 = Shadows are not considered."
               );
  atexit(FUN_143ca854c);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cb71c30,L"a.gbx.Manager.AsyncKinematicUpdate",&DAT_14c763859,
                L"If true, the GbxAnimManager apply the kinematic updates asynchronously. This only works if both \'a.gbx.Manager.NewTasks\' and \'p.Chaos.EnableAsyncInitBody\' are also enabled."
               );
  atexit(FUN_143ca8591);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb71c40,L"a.gbx.Manager.MaterialCurveMaxLODOffset",&DAT_14c76388c,
                L"Determines when material anim curves are applied. If < 0, they are always applied.If >= 0, it will only apply when the offset between the current LOD and the min LOD is greater than this valueSo if this is 0 and min LOD is 1, they will applied when the current LOD is 1 but not when it is 2."
               );
  atexit(FUN_143ca85d6);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cb71c50,L"a.gbx.Manager.TempConcurrentTest",&DAT_14cb71f68,
                L"Enables concurrent updates for a variety of anim instance locations. This is meant as a temp failsafe in case any of those locations don\'t work out."
               );
  atexit(FUN_143ca861b);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  local_60 = 0x200;
  FUN_1412c7f16(&DAT_14cb71c60,L"TaskGraph.TaskPriorities.GbxAnimManager_WorkerTask",
                L"Task and thread priority for GbxAnimManagerTasks::WorkerTask",0x400);
  atexit(FUN_143ca8660);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cb71ca0,L"a.gbx.Gestalt.GroupRenderParts",&DAT_14c76385a,
                L"If enabled, then rendering aspect of gestalt parts will be grouped based on their skeleton and batch-updated, sharing the Mesh Object\'s dynamic data. 0 for disabled, non-zero for enabled."
               );
  atexit(FUN_143ca86ca);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cb71cb8,L"a.gbx.Throttle.Enable",&DAT_14cb71cb0,
                L"If true, the GbxAnimManager will throttle animations based on significance.");
  atexit(FUN_143ca870f);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cb71cc8,L"a.gbx.Throttle.MaxFrameBudget",&DAT_14c76385c,
                L"The time in milliseconds that we allocate for skeletal mesh work to be performed."
               );
  atexit(FUN_143ca8754);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cb71cd8,L"a.gbx.Throttle.TimeSmoothingSpeed",&DAT_14c763878,
                L"The speed at which the average component game time unit converges on the measured amount."
               );
  atexit(FUN_143ca8799);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cb71ce8,L"a.gbx.Throttle.DefaultTime",&DAT_14c76387c,
                L"If a component hasn\'t run yet, assume its game thread time will take this many ms."
               );
  atexit(FUN_143ca87de);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cb71cf8,L"a.gbx.Throttle.InterpTickRatio",&DAT_14c763860,
                L"Controls the expected value an amortized interpolated tick will take compared to a \'normal\' tick."
               );
  atexit(FUN_143ca8823);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb71d08,L"a.gbx.Throttle.MaxInterpRate",&DAT_14c763864,
                L"Controls the rate at which ticks happen when interpolating.");
  atexit(FUN_143ca8868);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cb71d18,L"a.gbx.Throttle.MinInterpScreenSize",&DAT_14c763868,
                L"If an on-screen component is smaller than this, it will throttle instead of interpolate."
               );
  atexit(FUN_143ca88ad);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb71d28,L"a.gbx.Throttle.MaxThrottleRate",&DAT_14c76386c,
                L"When throttling components that are on-screen, the throttle rate can never go above this."
               );
  atexit(FUN_143ca88f2);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb71d38,L"a.gbx.Throttle.MaxThrottleRate_OffScreen",&DAT_14c763870,
                L"When throttling components that are off-screen, the throttle rate can never go above this."
               );
  atexit(FUN_143ca8937);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cb71d48,L"a.gbx.Throttle.MaxDistance",&DAT_14c763884,
                L"When sorting non-visible components for significance, any beyond this distance will be considered the same."
               );
  atexit(FUN_143ca897c);
  local_68 = (char **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cb71d58,L"a.gbx.Throttle.MaxScreenSize",&DAT_14c763880,
                L"When sorting visible components for significance, any larger than this will be at max significance for visible components."
               );
  atexit(FUN_143ca89c1);
  _DAT_14cb71d68 = 0x3ff0000000000000;
  _DAT_14cb71d70 = 0x3ff0000000000000;
  DAT_14cb71d78 = 0x3ff0000000000000;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cb13e0 FUN_143cb13e0 body=906 status=ok
// SIG undefined FUN_143cb13e0(void)

longlong * FUN_143cb13e0(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_158 [40];
  longlong local_130;
  longlong local_128;
  undefined8 local_120;
  longlong *local_118;
  uint local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *param_2 = 0;
  param_2[1] = 0;
  local_130 = param_1;
  local_128 = param_3;
  local_120 = param_4;
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar11 = *(longlong *)(param_1 + 0x30);
    lVar7 = (longlong)*(int *)(param_1 + 0x38) * 0x90;
    do {
      local_98 = 0;
      local_90 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_8c = 0xffffffff00000080;
      local_84 = 0;
      local_78 = 0;
      local_70 = 0;
      FUN_140535930(&local_b8,local_128);
      FUN_140534a4c(lVar11,&local_118,&local_b8,local_120);
      lVar8 = (longlong)(int)local_110;
      if (lVar8 != 0) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + local_110;
        if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar1) < local_110) {
          FUN_140535bba(param_2,iVar1);
        }
        memmove((void *)((longlong)iVar1 * 8 + *param_2),local_118,lVar8 << 3);
        local_110 = 0;
      }
      if (local_118 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      lVar11 = lVar11 + 0x90;
      lVar7 = lVar7 + -0x90;
    } while (lVar7 != 0);
  }
  if (DAT_14cb71fe8 != DAT_14cb72014) {
    lVar11 = *(longlong *)(local_130 + 0x18);
    uVar2 = (uint)((ulonglong)lVar11 >> 0x10);
    uVar5 = (uint)lVar11 & 0xffff;
    puVar6 = &DAT_14cb72018;
    if (DAT_14cb72020 != (undefined *)0x0) {
      puVar6 = DAT_14cb72020;
    }
    iVar1 = *(int *)(puVar6 + (ulonglong)
                              (DAT_14cb72028 - 1U &
                              (int)((ulonglong)lVar11 >> 0x20) + ((uint)lVar11 << 0x10 | uVar5) +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    while (iVar1 != -1) {
      lVar7 = DAT_14cb71fe0 + (longlong)iVar1 * 0x20;
      if (*(longlong *)(DAT_14cb71fe0 + (longlong)iVar1 * 0x20) == lVar11) {
        if (((lVar7 + 8U & 0xfffffffffffffff7) != 0) && ((longlong)*(int *)(lVar7 + 0x10) != 0)) {
          lVar8 = *(longlong *)(lVar7 + 8);
          lVar11 = lVar8 + (longlong)*(int *)(lVar7 + 0x10) * 0x28;
          local_130 = lVar11;
          do {
            lVar7 = FUN_143cb8af0(lVar8);
            if (lVar7 != 0) {
              plVar3 = (longlong *)FUN_143cb8af0(lVar8);
              local_e8 = 0;
              local_e0 = 0;
              local_108 = 0;
              uStack_100 = 0;
              local_dc = 0xffffffff00000080;
              local_d4 = 0;
              local_c8 = 0;
              local_c0 = 0;
              FUN_140535930(&local_108,local_128);
              (**(code **)(*plVar3 + 0x2a0))(plVar3,&local_118,&local_108,local_120);
              if ((longlong)(int)local_110 != 0) {
                plVar10 = local_118 + (int)local_110;
                lVar7 = *param_2;
                plVar3 = local_118;
                do {
                  lVar11 = *plVar3;
                  iVar1 = (int)param_2[1];
                  lVar9 = (longlong)iVar1;
                  if (lVar9 != 0) {
                    uVar4 = 0;
                    do {
                      if (*(longlong *)(lVar7 + uVar4) == lVar11) {
                        if ((~uVar4 & 0x7fffffff8) != 0) goto LAB_143cb16e1;
                        break;
                      }
                      uVar4 = uVar4 + 8;
                    } while (lVar9 * 8 - uVar4 != 0);
                  }
                  *(uint *)(param_2 + 1) = iVar1 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
                    FUN_140535bba(param_2,iVar1);
                    lVar7 = *param_2;
                  }
                  *(longlong *)(lVar7 + lVar9 * 8) = lVar11;
                  lVar7 = *param_2;
LAB_143cb16e1:
                  plVar3 = plVar3 + 1;
                  lVar11 = local_130;
                } while (plVar3 != plVar10);
              }
              if (local_118 != (longlong *)0x0) {
                FUN_1400020a8(local_118);
              }
            }
            lVar8 = lVar8 + 0x28;
          } while (lVar8 != lVar11);
        }
        break;
      }
      iVar1 = *(int *)(lVar7 + 0x18);
    }
  }
  *(undefined4 *)(local_128 + 0x48) = 0;
  if (*(longlong *)(local_128 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140535736(local_128);
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cb176c FUN_143cb176c body=127 status=ok
// SIG undefined FUN_143cb176c(void)

void FUN_143cb176c(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = (uint)((ulonglong)param_1 >> 0x10);
  uVar3 = (uint)param_1 & 0xffff;
  local_18 = param_1;
  uVar2 = FUN_143cb8c6e(&DAT_14cb71fe0,
                        ((uint)param_1 << 0x10 | uVar3) + (int)((ulonglong)param_1 >> 0x20) +
                        (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4));
  FUN_143cb9476(uVar2,param_2);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cb17ec FUN_143cb17ec body=470 status=ok
// SIG undefined FUN_143cb17ec(void)

void FUN_143cb17ec(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  
  if (DAT_14cb71fe8 != DAT_14cb72014) {
    uVar6 = (uint)((ulonglong)param_1 >> 0x10);
    uVar7 = (uint)param_1 & 0xffff;
    puVar8 = &DAT_14cb72018;
    if (DAT_14cb72020 != (undefined *)0x0) {
      puVar8 = DAT_14cb72020;
    }
    iVar4 = *(int *)(puVar8 + (ulonglong)
                              (DAT_14cb72028 - 1U &
                              (int)((ulonglong)param_1 >> 0x20) + ((uint)param_1 << 0x10 | uVar7) +
                              (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar7 >> 4)) * 4);
    while (iVar4 != -1) {
      lVar1 = DAT_14cb71fe0 + (longlong)iVar4 * 0x20;
      if (*(longlong *)(DAT_14cb71fe0 + (longlong)iVar4 * 0x20) == param_1) {
        lVar12 = lVar1 + 8;
        if (lVar12 == 0 || lVar1 == 0) {
          return;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
        if ((longlong)iVar4 == 0) {
          return;
        }
        lVar5 = *(longlong *)(lVar1 + 8);
        iVar9 = (int)param_2[3];
        lVar10 = lVar5;
        goto LAB_143cb18d1;
      }
      iVar4 = *(int *)(lVar1 + 0x18);
    }
  }
  return;
LAB_143cb18d1:
  if ((*(longlong *)(lVar10 + 8) == *param_2) && (*(longlong *)(lVar10 + 0x10) == param_2[1])) {
    if (*(int *)(lVar10 + 0x20) == iVar9) {
      if (1 < iVar9) {
        lVar11 = 0;
        do {
          uVar2 = *(ushort *)(*(longlong *)(lVar10 + 0x18) + lVar11);
          uVar3 = *(ushort *)(param_2[2] + lVar11);
          if (uVar2 == uVar3) {
            if (uVar2 == 0) break;
          }
          else {
            if (0x7f < (uVar3 | uVar2)) {
              iVar13 = (uint)uVar2 - (uint)uVar3;
              goto LAB_143cb194d;
            }
            if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3]) goto code_r0x000143cb194a;
          }
          lVar11 = lVar11 + 2;
        } while( true );
      }
      goto LAB_143cb1967;
    }
    if (*(int *)(lVar10 + 0x20) + iVar9 == 1) goto LAB_143cb1967;
  }
  goto LAB_143cb18d7;
code_r0x000143cb194a:
  iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_143cb194d:
  if (iVar13 == 0) {
LAB_143cb1967:
    iVar9 = (int)((ulonglong)(lVar10 - lVar5) >> 3) * -0x33333333;
    if (iVar9 < 0) {
      return;
    }
    if (iVar4 <= iVar9) {
      return;
    }
    FUN_143cb9756(lVar12);
    FUN_143cb97b0(lVar12);
    if (*(int *)(lVar1 + 0x10) != 0) {
      return;
    }
    FUN_143cb9936(&DAT_14cb71fe0,param_1);
    return;
  }
LAB_143cb18d7:
  lVar10 = lVar10 + 0x28;
  if (lVar10 == lVar5 + (longlong)iVar4 * 0x28) {
    return;
  }
  goto LAB_143cb18d1;
}



// FUNCTION 143cb19c2 FUN_143cb19c2 body=565 status=ok
// SIG undefined FUN_143cb19c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cb19c2(void)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  DAT_14cb72028 = 0;
  if (DAT_14cb72020 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb72008 == 0) {
    uVar8 = 0;
    uVar12 = 1;
    iVar9 = 0;
    iVar2 = 0;
  }
  else {
    puVar6 = &DAT_14cb71ff0;
    if (DAT_14cb72000 != (uint *)0x0) {
      puVar6 = DAT_14cb72000;
    }
    uVar7 = *puVar6;
    if (uVar7 == 0) {
      iVar2 = DAT_14cb72008 + 0x1e;
      if (-1 < DAT_14cb72008 + -1) {
        iVar2 = DAT_14cb72008 + -1;
      }
      uVar8 = 0;
      uVar12 = (ulonglong)(uint)(iVar2 >> 5);
      if (iVar2 >> 5 < 1) {
        uVar12 = uVar8;
      }
      iVar9 = 0;
      do {
        if (uVar12 == uVar8) goto LAB_143cb1b53;
        iVar9 = iVar9 + 0x20;
        uVar7 = puVar6[uVar8 + 1];
        uVar8 = uVar8 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar8 = 0;
      iVar9 = 0;
    }
    uVar12 = (ulonglong)(-uVar7 & uVar7);
    uVar1 = uVar12 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar2 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (DAT_14cb72008 <= iVar2) {
      iVar2 = DAT_14cb72008;
    }
  }
  if (iVar2 < DAT_14cb72008) {
    uVar7 = 0xffffffff;
    do {
      lVar10 = DAT_14cb71fe0;
      lVar11 = (longlong)iVar2 * 0x20;
      FUN_143cb8499(*(undefined8 *)(DAT_14cb71fe0 + 8 + lVar11),
                    *(undefined4 *)(DAT_14cb71fe0 + 0x10 + lVar11));
      if (*(longlong *)(lVar10 + 8 + lVar11) != 0) {
        FUN_1400020a8();
      }
      uVar7 = uVar7 & ~(uint)uVar12;
      puVar6 = DAT_14cb72000;
      if (DAT_14cb72000 == (uint *)0x0) {
        puVar6 = &DAT_14cb71ff0;
      }
      iVar2 = (int)uVar8;
      lVar10 = (longlong)iVar2;
      uVar3 = puVar6[lVar10] & uVar7;
      if (uVar3 == 0) {
        iVar4 = DAT_14cb72008 + 0x1e;
        if (-1 < DAT_14cb72008 + -1) {
          iVar4 = DAT_14cb72008 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar2) {
          iVar5 = iVar2;
        }
        if (iVar4 <= iVar2) break;
        lVar11 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar3 = puVar6[lVar10 + lVar11 + 1];
          if (uVar3 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar5 - lVar10 == lVar11) goto LAB_143cb1b53;
        }
        uVar8 = (ulonglong)(iVar2 + (int)lVar11 + 1);
        uVar7 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar3 & uVar3);
      uVar1 = uVar12 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar2 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar2 < DAT_14cb72008);
  }
LAB_143cb1b53:
  DAT_14cb71fe8 = 0;
  if (DAT_14cb71fec != 0) {
    FUN_1446f4a44(&DAT_14cb71fe0,0);
  }
  _DAT_14cb72010 = 0xffffffff;
  DAT_14cb72008 = 0;
  if (0x80 < DAT_14cb7200c) {
    DAT_14cb7200c = 0x80;
    FUN_1446efbd8(&DAT_14cb71ff0,0);
  }
  if (DAT_14cb72000 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (DAT_14cb71fe0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143cb1c30 FUN_143cb1c30 body=73 status=ok
// SIG undefined FUN_143cb1c30(void)

void FUN_143cb1c30(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x880);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x878);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0xd0))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 143cb1c79 FUN_143cb1c79 body=69 status=ok
// SIG undefined FUN_143cb1c79(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cb1c79(void)

{
  _DAT_14cb72058 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143cb1cbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb72060,1);
  return;
}



// FUNCTION 143cb1cbe FUN_143cb1cbe body=69 status=ok
// SIG undefined FUN_143cb1cbe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cb1cbe(void)

{
  _DAT_14cb72070 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143cb1d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb72078,1);
  return;
}



// FUNCTION 143cb1d04 FUN_143cb1d04 body=1344 status=ok
// SIG undefined FUN_143cb1d04(void)

void FUN_143cb1d04(longlong param_1,longlong param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    iVar8 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x38) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar8 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar8 = *(int *)(lVar15 + 0x10);
      bVar16 = iVar8 == 0;
      if (bVar16) {
        *(int *)(lVar15 + 0x10) = iVar13;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar16) {
        iVar8 = iVar13;
      }
    }
  }
  *(int *)(param_1 + 0x3c) = iVar8;
  *(undefined8 *)(param_1 + 0x88) = DAT_14c872be0;
  FUN_140816ffa(param_1 + 0x118,param_2 + 0xd50);
  FUN_140816ffa(param_1 + 0x128,param_2 + 0xd60);
  lVar15 = *(longlong *)(param_2 + 0x11b8);
  if (lVar15 == 0) {
    uVar11 = FUN_14058f0dc();
    lVar15 = FUN_14477b664(uVar11);
    *(longlong *)(param_2 + 0x11b8) = lVar15;
  }
  lVar12 = *(longlong *)(param_2 + 0x11c0);
  if (((lVar12 == 0) && (lVar12 = 0, lVar15 != 0)) && (*(longlong *)(param_2 + 0x11b0) != 0)) {
    plVar9 = *(longlong **)(lVar15 + 0xb8);
    if ((plVar9 == (longlong *)0x0) ||
       (cVar7 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar7 == '\0')) {
      lVar12 = 0;
    }
    else {
      uVar11 = (**(code **)(*plVar9 + 0x110))(plVar9);
      lVar12 = FUN_144aff482(uVar11,(longlong *)(param_2 + 0x11b0));
    }
    *(longlong *)(param_2 + 0x11c0) = lVar12;
  }
  puVar14 = (undefined8 *)(lVar12 + 0x18);
  if (lVar12 == 0) {
    puVar14 = (undefined8 *)(param_2 + 0x1198);
  }
  *(undefined4 *)(param_1 + 0x50) = 1;
  puVar10 = (undefined8 *)(param_1 + 0x70);
  if (puVar10 != puVar14) {
    iVar8 = *(int *)(puVar14 + 1);
    pvVar2 = (void *)*puVar14;
    *(int *)(param_1 + 0x78) = iVar8;
    if (iVar8 == 0 && *(int *)(param_1 + 0x7c) == 0) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    else {
      FUN_1447c510a(puVar10,iVar8);
      if (iVar8 != 0) {
        memcpy((void *)*puVar10,pvVar2,(longlong)iVar8 << 2);
      }
    }
  }
  *(undefined2 *)(param_1 + 0x80) = *(undefined2 *)(puVar14 + 2);
  *(undefined1 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x38);
    uVar6 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_143cb1eb3;
    plVar9 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar9 != (longlong *)0x0) &&
       (((((int)plVar9[2] == *(int *)(param_1 + 0x3c) && ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)
          ) && (*plVar9 != 0)) &&
        (plVar9 = *(longlong **)(*plVar9 + 0xa8), plVar9 != (longlong *)0x0)))) {
      if (DAT_14caf64b8 == 0) {
        local_60 = &local_40;
        local_40 = FUN_141030f22;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_142b4754c;
        local_68 = &LAB_147c45ce0;
        local_70 = &LAB_1463f1ff4;
        local_78 = &DAT_149e063b2;
        local_80 = 0x4000000000;
        local_88 = 0x10000004;
        local_90 = 8;
        local_98 = 0x428;
        FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
      }
      if ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(plVar9[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) ==
          DAT_14caf64b8 + 0x30)) {
        uVar6 = (**(code **)(*plVar9 + 0x700))(plVar9);
        goto LAB_143cb1eb3;
      }
    }
  }
  uVar6 = 0;
LAB_143cb1eb3:
  *(undefined1 *)(param_1 + 8) = uVar6;
  *(undefined4 *)(param_1 + 0xc) = DAT_14c76387c;
  puVar14 = (undefined8 *)(param_1 + 400);
  if (puVar14 != (undefined8 *)(param_2 + 0xb58)) {
    iVar8 = *(int *)(param_2 + 0xb60);
    pvVar2 = *(void **)(param_2 + 0xb58);
    *(int *)(param_1 + 0x198) = iVar8;
    if (iVar8 == 0 && *(int *)(param_1 + 0x19c) == 0) {
      *(undefined4 *)(param_1 + 0x19c) = 0;
    }
    else {
      FUN_1447563a6(puVar14,iVar8);
      if (iVar8 != 0) {
        memcpy((void *)*puVar14,pvVar2,(longlong)iVar8 << 4);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x1a0) = *(undefined1 *)(param_2 + 0xb68);
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_2 + 0xb70);
  uVar3 = *(undefined4 *)(param_2 + 0xb2c);
  uVar4 = *(undefined4 *)(param_2 + 0xb30);
  uVar5 = *(undefined4 *)(param_2 + 0xb34);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0xb28);
  *(undefined4 *)(param_1 + 0x1b4) = uVar3;
  *(undefined4 *)(param_1 + 0x1b8) = uVar4;
  *(undefined4 *)(param_1 + 0x1bc) = uVar5;
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_2 + 0xb38);
  puVar14 = (undefined8 *)(param_1 + 0x1c8);
  if (puVar14 != (undefined8 *)(param_2 + 0xb18)) {
    iVar8 = *(int *)(param_2 + 0xb20);
    pvVar2 = *(void **)(param_2 + 0xb18);
    *(int *)(param_1 + 0x1d0) = iVar8;
    if (iVar8 == 0 && *(int *)(param_1 + 0x1d4) == 0) {
      *(undefined4 *)(param_1 + 0x1d4) = 0;
    }
    else {
      FUN_144756262(puVar14,iVar8);
      if (iVar8 != 0) {
        memcpy((void *)*puVar14,pvVar2,(longlong)iVar8 * 0x60);
      }
    }
  }
  lVar15 = (longlong)*(int *)(param_2 + 0x714) * 0x10 + param_2;
  puVar10 = (undefined8 *)(lVar15 + 0x6d0);
  puVar14 = (undefined8 *)(param_1 + 0x108);
  if (puVar14 != puVar10) {
    iVar8 = *(int *)(lVar15 + 0x6d8);
    pvVar2 = (void *)*puVar10;
    *(int *)(param_1 + 0x110) = iVar8;
    if (iVar8 == 0 && *(int *)(param_1 + 0x114) == 0) {
      *(undefined4 *)(param_1 + 0x114) = 0;
    }
    else {
      FUN_144756262(puVar14,iVar8);
      if (iVar8 != 0) {
        memcpy((void *)*puVar14,pvVar2,(longlong)iVar8 * 0x60);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x11c9);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    FUN_1406c492a(param_2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cb2246 FUN_143cb2246 body=2450 status=ok
// SIG undefined FUN_143cb2246(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cb2246(undefined1 *param_1,float param_2)

{
  int *piVar1;
  double *pdVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined1 uVar6;
  byte bVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong lVar11;
  undefined8 uVar12;
  double *pdVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  code *local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((((*(int *)(param_1 + 0x3c) == 0) || (uVar18 = *(uint *)(param_1 + 0x38), (int)uVar18 < 0))
       || (DAT_14c9647dc <= (int)uVar18)) ||
      ((plVar15 = (longlong *)
                  ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8)),
       plVar15 == (longlong *)0x0 || ((int)plVar15[2] != *(int *)(param_1 + 0x3c))))) ||
     (((*(uint *)(plVar15 + 1) & 0x10200000) != 0 ||
      (plVar15 = (longlong *)*plVar15, plVar15 == (longlong *)0x0)))) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    goto LAB_143cb28ac;
  }
  if (param_1[0x91] == '\x01') {
    FUN_143cb1d04(param_1,plVar15);
    param_1[0x91] = 0;
  }
  lVar11 = plVar15[0x16];
  if ((lVar11 == 0) && (lVar11 = FUN_1448abda6(plVar15), lVar11 == 0)) {
    fVar25 = -1.0;
    bVar5 = true;
    lVar11 = 0;
  }
  else {
    fVar25 = (float)*(double *)(lVar11 + 0x6d0) + -1.0;
    bVar5 = false;
  }
  if (plVar15[0x15] == 0) {
    fVar21 = 1.0;
  }
  else {
    fVar21 = *(float *)(plVar15[0x15] + 0x74);
  }
  if (DAT_14c763888 == '\x01') {
    if ((*(int *)((longlong)plVar15 + 0x3d4) < 0) &&
       ((lVar19 = plVar15[0x16], lVar19 != 0 || (lVar19 = FUN_1448abda6(plVar15), lVar19 != 0)))) {
LAB_143cb2380:
      fVar20 = (float)*(double *)(lVar19 + 0x6d0);
    }
    else {
      fVar20 = *(float *)(plVar15 + 0x79);
    }
  }
  else {
    if ((*(int *)((longlong)plVar15 + 0x3d4) < 0) &&
       ((lVar19 = plVar15[0x16], lVar19 != 0 || (lVar19 = FUN_1448abda6(plVar15), lVar19 != 0))))
    goto LAB_143cb2380;
    fVar20 = *(float *)((longlong)plVar15 + 0x3c4);
  }
  *(byte *)((longlong)plVar15 + 0x89f) =
       *(byte *)((longlong)plVar15 + 0x89f) & 0xbf | (fVar25 < fVar20) << 6;
  *(undefined1 *)((longlong)plVar15 + 0x117c) = 1;
  (**(code **)(*plVar15 + 0xb20))(plVar15);
  lVar19 = plVar15[0xcb];
  if (lVar19 == 0) {
    lVar19 = plVar15[0xcc];
    if ((DAT_14c950c29 == '\x01') && (lVar19 != 0)) goto LAB_143cb2b60;
    if (lVar19 != 0) goto LAB_143cb23e5;
LAB_143cb2410:
    lVar19 = 0;
  }
  else {
    if (DAT_14c950c29 == '\x01') {
LAB_143cb2b60:
      FUN_1456cec3c(lVar19);
    }
LAB_143cb23e5:
    if (DAT_14cb06da8 == 0) {
      local_a0 = &local_88;
      local_88 = FUN_1449e2820;
      local_90 = FUN_14081d0ea;
      local_98 = &LAB_1464003b0;
      local_a8 = &LAB_147d17bdf;
      local_b0 = &LAB_1417edf22;
      local_b8 = L"Engine";
      local_c0 = 0;
      local_c8 = 0x10000000;
      local_d0 = 8;
      local_d8 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30)) goto LAB_143cb2410;
  }
  *(longlong *)(param_1 + 0xb8) = lVar19;
  *(longlong *)(param_1 + 0xc0) = plVar15[0x15d];
  uVar12 = (**(code **)(*plVar15 + 0xb98))(plVar15);
  *(undefined8 *)(param_1 + 200) = uVar12;
  uVar6 = (**(code **)(*plVar15 + 0xcb8))(plVar15);
  param_1[0x92] = uVar6;
  fVar25 = 0.0;
  if ((((*(int *)(param_1 + 0x3c) != 0) && (uVar18 = *(uint *)(param_1 + 0x38), -1 < (int)uVar18))
      && ((int)uVar18 < DAT_14c9647dc)) &&
     (((plVar16 = (longlong *)
                  ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8)),
       plVar16 != (longlong *)0x0 && ((int)plVar16[2] == *(int *)(param_1 + 0x3c))) &&
      (((*(uint *)(plVar16 + 1) & 0x10200000) == 0 && (lVar19 = *plVar16, lVar19 != 0)))))) {
    lVar14 = *(longlong *)(lVar19 + 0xb0);
    if (lVar14 == 0) {
      lVar14 = FUN_1448abda6(lVar19);
      fVar25 = 0.0;
      if (lVar14 == 0) goto LAB_143cb25ca;
    }
    fVar25 = 2.0;
    if ((param_1[8] == '\0') && (*(char *)(lVar19 + 0x11e0) == '\0')) {
      if ((*(byte *)(lVar19 + 0x89f) & 0x40) == 0) {
        if ((longlong)*(int *)(lVar14 + 0x130) == 0) {
          fVar25 = 3.4028235e+38;
        }
        else {
          pdVar13 = *(double **)(lVar14 + 0x128);
          pdVar2 = pdVar13 + (longlong)*(int *)(lVar14 + 0x130) * 3;
          fVar25 = 3.4028235e+38;
          do {
            dVar22 = *pdVar13 - *(double *)(lVar19 + 0x260);
            dVar24 = pdVar13[1] - *(double *)(lVar19 + 0x268);
            dVar23 = pdVar13[2] - *(double *)(lVar19 + 0x270);
            fVar20 = (float)(dVar23 * dVar23 + dVar24 * dVar24 + dVar22 * dVar22);
            if (fVar20 <= fVar25) {
              fVar25 = fVar20;
            }
            pdVar13 = pdVar13 + 3;
          } while (pdVar13 != pdVar2);
        }
        fVar25 = 1.0 - fVar25 / (DAT_14c763884 * DAT_14c763884);
        if (1.0 <= fVar25) {
          fVar25 = 1.0;
        }
        if (fVar25 <= 0.0) {
          fVar25 = 0.0;
        }
      }
      else {
        fVar25 = *(float *)(lVar19 + 0x858) / _DAT_14c763880;
        if (1.0 <= fVar25) {
          fVar25 = 1.0;
        }
        if (fVar25 <= 0.0) {
          fVar25 = 0.0;
        }
        fVar25 = fVar25 + 1.0;
      }
    }
  }
LAB_143cb25ca:
  *(float *)(param_1 + 4) = fVar25;
  fVar25 = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x18) +
           *(float *)(param_1 + 0x1c);
  if (0.0 < DAT_14c763878) {
    fVar20 = fVar25 - *(float *)(param_1 + 0xc);
    if (1e-08 <= fVar20 * fVar20) {
      fVar25 = DAT_14c763878 * *(float *)(param_1 + 0x48);
      if (1.0 <= fVar25) {
        fVar25 = 1.0;
      }
      if (fVar25 <= 0.0) {
        fVar25 = 0.0;
      }
      fVar25 = *(float *)(param_1 + 0xc) + fVar20 * fVar25;
    }
  }
  *(float *)(param_1 + 0xc) = fVar25;
  param_1[0x20] = 0;
  *(undefined8 *)(param_1 + 0x40) = DAT_14c872be0;
  uVar18 = 0;
  if ((((*(int *)(param_1 + 0x3c) != 0) && (uVar8 = *(uint *)(param_1 + 0x38), -1 < (int)uVar8)) &&
      ((int)uVar8 < DAT_14c9647dc)) &&
     (((((plVar16 = (longlong *)
                    ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
         plVar16 != (longlong *)0x0 && ((int)plVar16[2] == *(int *)(param_1 + 0x3c))) &&
        (((*(uint *)(plVar16 + 1) & 0x10200000) == 0 &&
         ((lVar19 = *plVar16, lVar19 != 0 && (*(longlong *)(param_1 + 0xb8) != 0)))))) &&
       (plVar16 = *(longlong **)(param_1 + 0xc0), plVar16 != (longlong *)0x0)) &&
      ((*(int *)(lVar19 + 0x6d8 + (longlong)*(int *)(lVar19 + 0x714) * 0x10) != 0 &&
       ((*(byte *)(lVar19 + 0xc70) & 0x10) == 0)))))) {
    lVar14 = plVar16[4];
    if (lVar14 != 0) {
      if (DAT_14cad2858 == 0) {
        local_a0 = &local_88;
        local_88 = FUN_144a7958c;
        local_90 = FUN_14081d0ea;
        local_98 = &LAB_146395584;
        local_a8 = &LAB_147a0ba80;
        local_b0 = &LAB_14575ccce;
        local_b8 = L"Engine";
        local_c0 = 0x40000000000;
        local_c8 = 0x10000004;
        local_d0 = 0x10;
        local_d8 = 0x1180;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      lVar14 = *(longlong *)(lVar14 + 0x10);
      if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar14 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8)
          == DAT_14cad2858 + 0x30)) {
        if ((DAT_14c86a9f8 == '\x01') &&
           (iVar3 = *(int *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0xc60), iVar3 != 2)) {
          if (iVar3 == 1) {
            DVar9 = FUN_140ad26c0();
            DVar10 = GetCurrentThreadId();
            if (DVar9 == DVar10) goto LAB_143cb2bc6;
          }
        }
        else {
LAB_143cb2bc6:
          FUN_14036294a(plVar16[4],1,1);
        }
      }
    }
    lVar14 = plVar16[0x7c];
    if (lVar14 == 0) {
      lVar14 = (**(code **)(*plVar16 + 0x350))(plVar16);
      plVar16[0x7c] = lVar14;
    }
    lVar14 = *(longlong *)(lVar14 + 0x6a0);
    if (((((*(int *)(lVar14 + 0x34) != 0) && (uVar8 = *(uint *)(lVar14 + 0x30), -1 < (int)uVar8)) &&
         ((int)uVar8 < DAT_14c9647dc)) &&
        ((lVar17 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8), lVar17 != 0 &&
         (*(int *)(lVar17 + 0x10) == *(int *)(lVar14 + 0x34))))) &&
       (((*(uint *)(lVar17 + 8) & 0x10200000) == 0 &&
        ((*(longlong *)(lVar14 + 0x48) != 0 && (0 < *(int *)(lVar14 + 8))))))) {
      if ((param_1[0x92] == '\0') &&
         ((*(char *)(lVar19 + 0x11e0) == '\0' &&
          (*(longlong *)(param_1 + 0x40) != *(longlong *)(param_1 + 0x88))))) {
        if (((*(byte *)(lVar19 + 0x4a) & 2) != 0) &&
           (uVar18 = 3, (*(byte *)(lVar19 + 0x89f) & 0x40) == 0)) {
          plVar16 = (longlong *)FUN_143ce2e98(lVar19);
          if (plVar16 == (longlong *)0x0) {
            uVar18 = 0;
          }
          else {
            bVar7 = (**(code **)(*plVar16 + 0x10))(plVar16);
            uVar18 = (uint)bVar7;
          }
          if (*(char *)(lVar19 + 0x89c) == '\x01') {
            uVar18 = 2;
          }
          else if (*(char *)(lVar19 + 0x89c) == '\0') {
            uVar18 = 3;
          }
          if ((plVar16 != (longlong *)0x0) &&
             (uVar8 = (**(code **)(*plVar16 + 0x18))(plVar16,*(undefined8 *)(param_1 + 0xc0)),
             (int)uVar18 < (int)uVar8)) {
            uVar18 = uVar8;
          }
          if ((int)uVar18 < (int)*(uint *)(param_1 + 0x148)) {
            uVar18 = *(uint *)(param_1 + 0x148);
          }
        }
      }
      else {
        uVar18 = 3;
      }
    }
  }
  *(uint *)(param_1 + 0x4c) = uVar18;
  fVar25 = 0.0;
  if (0.0 <= fVar21 * param_2) {
    fVar25 = fVar21 * param_2;
  }
  *(float *)(param_1 + 0x48) = fVar25;
  *param_1 = 0;
  lVar19 = 0;
  do {
    puVar4 = *(undefined8 **)(param_1 + lVar19 + 0x98);
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + lVar19 + 0x98) = 0;
      LOCK();
      piVar1 = (int *)(puVar4 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    lVar19 = lVar19 + 8;
  } while (lVar19 != 0x18);
  *(undefined4 *)(param_1 + 0xb0) = 0x7f7fffff;
  if ((!bVar5) && ((longlong)*(int *)(lVar11 + 0x130) != 0)) {
    dVar22 = (double)plVar15[0x4e];
    pdVar13 = *(double **)(lVar11 + 0x128);
    pdVar2 = pdVar13 + (longlong)*(int *)(lVar11 + 0x130) * 3;
    dVar23 = (double)plVar15[0x4c];
    dVar24 = (double)plVar15[0x4d];
    fVar25 = 3.4028235e+38;
    do {
      fVar21 = (float)((pdVar13[2] - dVar22) * (pdVar13[2] - dVar22) +
                      (pdVar13[1] - dVar24) * (pdVar13[1] - dVar24) +
                      (*pdVar13 - dVar23) * (*pdVar13 - dVar23));
      if (fVar21 <= fVar25) {
        fVar25 = fVar21;
      }
      *(float *)(param_1 + 0xb0) = fVar25;
      pdVar13 = pdVar13 + 3;
    } while (pdVar13 != pdVar2);
  }
LAB_143cb28ac:
  if ((local_80 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cb2bda FUN_143cb2bda body=1172 status=ok
// SIG undefined FUN_143cb2bda(void)

void FUN_143cb2bda(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
LAB_143cb2ead:
    lVar14 = 0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x38);
    lVar14 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      plVar13 = (longlong *)
                ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((plVar13 == (longlong *)0x0) ||
         (((int)plVar13[2] != *(int *)(param_1 + 0x3c) ||
          ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_143cb2ead;
      lVar14 = *plVar13;
    }
  }
  if (*(int *)(param_1 + 0x54) < 1) {
    if (*(int *)(param_1 + 0x144) < 0) {
      *(undefined4 *)(param_1 + 0x140) = 0;
      FUN_1487d77c8(param_1 + 0x138);
    }
    else {
      *(undefined4 *)(param_1 + 0x140) = 0;
    }
    *(undefined4 *)(param_1 + 0x148) = 0;
    if (*(char *)(param_1 + 0x188) == '\x01') {
      if (*(longlong *)(param_1 + 0x170) != 0) {
        FUN_1400020a8();
      }
      if (*(char *)(param_1 + 0x16c) == '\x01') {
        *(undefined1 *)(param_1 + 0x16c) = 0;
      }
      *(undefined1 *)(param_1 + 0x188) = 0;
    }
    iVar9 = *(int *)(param_1 + 0x4c);
    if (1 < iVar9) {
      lVar12 = *(longlong *)(param_1 + 0xc0);
      if (((((lVar12 != 0) && (*(int *)(param_1 + 0x3c) != 0)) &&
           (uVar4 = *(uint *)(param_1 + 0x38), -1 < (int)uVar4)) &&
          (((int)uVar4 < DAT_14c9647dc &&
           (plVar13 = (longlong *)
                      ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
           plVar13 != (longlong *)0x0)))) &&
         (((int)plVar13[2] == *(int *)(param_1 + 0x3c) &&
          ((uVar4 = *(uint *)(plVar13 + 1), (uVar4 & 0x10200000) == 0 &&
           (plVar13 = (longlong *)*plVar13, plVar13 != (longlong *)0x0)))))) {
        bVar2 = *(byte *)((longlong)plVar13 + 0xc71);
        bVar3 = *(byte *)(lVar12 + 0x31);
        *(byte *)(lVar12 + 0x31) = bVar3 | 1;
        if (*(code **)(*plVar13 + 0xb08) == FUN_14348ddc2) {
          FUN_14348ddc2(plVar13,uVar4,0);
        }
        else {
          (**(code **)(*plVar13 + 0xb08))
                    (plVar13,*(float *)(param_1 + 0x48) + *(float *)(param_1 + 0x5c),0);
        }
        *(byte *)(*(longlong *)(param_1 + 0xc0) + 0x31) =
             *(byte *)(*(longlong *)(param_1 + 0xc0) + 0x31) & 0xfe | bVar3 & 1;
        if ((bVar2 & 0x20) == 0) {
          if ((*(byte *)((longlong)plVar13 + 0xc71) & 0x20) == 0) {
            FUN_14072916a(plVar13,*(undefined4 *)((longlong)plVar13 + 0x854));
          }
          FUN_140816ffa(param_1 + 0x118,plVar13 + 0x1aa);
          FUN_140816ffa(param_1 + 0x128,plVar13 + 0x1ac);
          uVar6 = *(undefined4 *)((longlong)plVar13 + 0xb2c);
          lVar12 = plVar13[0x166];
          uVar7 = *(undefined4 *)((longlong)plVar13 + 0xb34);
          *(int *)(param_1 + 0x1b0) = (int)plVar13[0x165];
          *(undefined4 *)(param_1 + 0x1b4) = uVar6;
          *(int *)(param_1 + 0x1b8) = (int)lVar12;
          *(undefined4 *)(param_1 + 0x1bc) = uVar7;
          *(longlong *)(param_1 + 0x1c0) = plVar13[0x167];
          plVar1 = (longlong *)(param_1 + 0x1c8);
          if (plVar1 != plVar13 + 0x163) {
            iVar9 = (int)plVar13[0x164];
            pvVar5 = (void *)plVar13[0x163];
            *(int *)(param_1 + 0x1d0) = iVar9;
            if (iVar9 == 0 && *(int *)(param_1 + 0x1d4) == 0) {
              *(undefined4 *)(param_1 + 0x1d4) = 0;
            }
            else {
              FUN_144756262(plVar1,iVar9);
              if (iVar9 != 0) {
                memcpy((void *)*plVar1,pvVar5,(longlong)iVar9 * 0x60);
              }
            }
          }
          plVar1 = (longlong *)(param_1 + 0x108);
          if (plVar1 != plVar13 + (longlong)*(int *)((longlong)plVar13 + 0x714) * 2 + 0xda) {
            iVar9 = (int)plVar13[(longlong)*(int *)((longlong)plVar13 + 0x714) * 2 + 0xdb];
            pvVar5 = (void *)plVar13[(longlong)*(int *)((longlong)plVar13 + 0x714) * 2 + 0xda];
            *(int *)(param_1 + 0x110) = iVar9;
            if (iVar9 == 0 && *(int *)(param_1 + 0x114) == 0) {
              *(undefined4 *)(param_1 + 0x114) = 0;
            }
            else {
              FUN_144756262(plVar1,iVar9);
              if (iVar9 != 0) {
                memcpy((void *)*plVar1,pvVar5,(longlong)iVar9 * 0x60);
              }
            }
          }
        }
        else {
          cVar8 = FUN_14489aeae(plVar13);
          if (cVar8 == '\0') {
            FUN_147a0bc9e(plVar13);
          }
        }
        *(undefined4 *)(plVar13 + 0x16c) = 0;
        if (*(int *)((longlong)plVar13 + 0xb64) < 0) {
          FUN_140507fc4(plVar13 + 0x16b,0);
        }
        *(undefined1 *)(plVar13 + 0x16d) = 0;
        plVar1 = (longlong *)(param_1 + 400);
        if (plVar1 != plVar13 + 0x16b) {
          iVar9 = (int)plVar13[0x16c];
          pvVar5 = (void *)plVar13[0x16b];
          *(int *)(param_1 + 0x198) = iVar9;
          if (iVar9 == 0 && *(int *)(param_1 + 0x19c) == 0) {
            *(undefined4 *)(param_1 + 0x19c) = 0;
          }
          else {
            FUN_1447563a6(plVar1,iVar9);
            if (iVar9 != 0) {
              memcpy((void *)*plVar1,pvVar5,(longlong)iVar9 << 4);
            }
          }
        }
        *(char *)(param_1 + 0x1a0) = (char)plVar13[0x16d];
        *(longlong *)(param_1 + 0x1a8) = plVar13[0x16e];
        iVar9 = *(int *)(param_1 + 0x4c);
      }
      if ((2 < iVar9) && (lVar12 = *(longlong *)(param_1 + 0xc0), lVar12 != 0)) {
        if (((*(byte *)(lVar12 + 0x430) & 1) == 0) && (DAT_14c86a9f8 == '\x01')) {
          iVar9 = *(int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0xc60);
          if (iVar9 != 2) {
            if (iVar9 != 1) goto LAB_143cb2e60;
            DVar10 = FUN_140ad26c0();
            DVar11 = GetCurrentThreadId();
            if (DVar10 != DVar11) goto LAB_143cb2e60;
            lVar12 = *(longlong *)(param_1 + 0xc0);
          }
        }
        FUN_144926950(lVar12);
      }
    }
  }
LAB_143cb2e60:
  if (*(char *)(lVar14 + 0x1179) == '\0') {
    *(undefined1 *)(lVar14 + 0x1179) = 1;
  }
  return;
}



// FUNCTION 143cb306e FUN_143cb306e body=937 status=ok
// SIG undefined FUN_143cb306e(void)

void FUN_143cb306e(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  LARGE_INTEGER LVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  LARGE_INTEGER *local_50;
  undefined1 *local_48;
  code *local_40;
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x54) < 1) {
    QueryPerformanceCounter(&local_38);
    LVar3 = local_38;
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      FUN_1447eee1e(*(longlong *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0x48));
      (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x310))
                (*(longlong **)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0x48));
      if (1 < *(int *)(param_1 + 0x4c)) {
        plVar2 = *(longlong **)(param_1 + 0xc0);
        if (plVar2 == (longlong *)0x0) {
          uVar6 = 0;
          plVar4 = (longlong *)0x0;
        }
        else {
          lVar5 = plVar2[4];
          if (lVar5 != 0) {
            if (DAT_14cad2858 == 0) {
              local_38.QuadPart = (LONGLONG)FUN_144a7958c;
              local_40 = FUN_14081d0ea;
              local_48 = &LAB_146395584;
              local_58 = &LAB_147a0ba80;
              local_60 = &LAB_14575ccce;
              local_68 = L"Engine";
              local_70 = 0x40000000000;
              local_78 = 0x10000004;
              local_80 = 0x10;
              local_88 = 0x1180;
              local_50 = &local_38;
              FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe)
              ;
            }
            lVar5 = *(longlong *)(lVar5 + 0x10);
            iVar1 = *(int *)(DAT_14cad2858 + 0x38);
            if ((iVar1 <= *(int *)(lVar5 + 0x38)) &&
               (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) ==
                DAT_14cad2858 + 0x30)) {
              FUN_14036294a(plVar2[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
            }
          }
          plVar4 = (longlong *)plVar2[0x7c];
          if (plVar4 == (longlong *)0x0) {
            plVar4 = (longlong *)(**(code **)(*plVar2 + 0x350))(plVar2);
            plVar2[0x7c] = (longlong)plVar4;
          }
          uVar6 = *(undefined8 *)(param_1 + 0xc0);
        }
        (**(code **)(*plVar4 + 0x18))(plVar4,uVar6,*(undefined4 *)(param_1 + 0x48));
        if (2 < *(int *)(param_1 + 0x4c)) {
          plVar2 = *(longlong **)(param_1 + 0xc0);
          if (plVar2 == (longlong *)0x0) {
            uVar6 = 0;
            plVar4 = (longlong *)0x0;
          }
          else {
            lVar5 = plVar2[4];
            if (lVar5 != 0) {
              if (DAT_14cad2858 == 0) {
                local_38.QuadPart = (LONGLONG)FUN_144a7958c;
                local_40 = FUN_14081d0ea;
                local_48 = &LAB_146395584;
                local_58 = &LAB_147a0ba80;
                local_60 = &LAB_14575ccce;
                local_68 = L"Engine";
                local_70 = 0x40000000000;
                local_78 = 0x10000004;
                local_80 = 0x10;
                local_88 = 0x1180;
                local_50 = &local_38;
                FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,
                              FUN_1463bcebe);
              }
              lVar5 = *(longlong *)(lVar5 + 0x10);
              iVar1 = *(int *)(DAT_14cad2858 + 0x38);
              if ((iVar1 <= *(int *)(lVar5 + 0x38)) &&
                 (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) ==
                  DAT_14cad2858 + 0x30)) {
                FUN_14036294a(plVar2[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
              }
            }
            plVar4 = (longlong *)plVar2[0x7c];
            if (plVar4 == (longlong *)0x0) {
              plVar4 = (longlong *)(**(code **)(*plVar2 + 0x350))(plVar2);
              plVar2[0x7c] = (longlong)plVar4;
            }
            uVar6 = *(undefined8 *)(param_1 + 0xc0);
          }
          (**(code **)(*plVar4 + 0x38))(plVar4,uVar6);
        }
      }
    }
    QueryPerformanceCounter(&local_38);
    lVar5 = local_38.QuadPart - (longlong)LVar3;
    auVar7._8_4_ = (int)((ulonglong)lVar5 >> 0x20);
    auVar7._0_8_ = lVar5;
    auVar7._12_4_ = 0x45300000;
    *(float *)(param_1 + 0x10) =
         (float)((((double)CONCAT44(0x43300000,(int)lVar5) - 4503599627370496.0) +
                 (auVar7._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 * 1000.0);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cb3418 FUN_143cb3418 body=537 status=ok
// SIG undefined FUN_143cb3418(void)

undefined8 FUN_143cb3418(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x3c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x38);
    uVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_143cb353e;
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar3 != (longlong *)0x0) &&
       (((((int)plVar3[2] == *(int *)(param_1 + 0x3c) && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)
          ) && (plVar3 = (longlong *)*plVar3, plVar3 != (longlong *)0x0)) &&
        (cVar2 = (**(code **)(*plVar3 + 0xce0))(plVar3), cVar2 != '\0')))) {
      lVar5 = plVar3[0xcb];
      if (lVar5 == 0) {
        lVar5 = plVar3[0xcc];
        if ((DAT_14c950c29 == '\x01') && (lVar5 != 0)) goto LAB_143cb3625;
        if (lVar5 != 0) goto LAB_143cb34cb;
      }
      else {
        if (DAT_14c950c29 == '\x01') {
LAB_143cb3625:
          FUN_1456cec3c(lVar5);
        }
LAB_143cb34cb:
        if (DAT_14cb06da8 == 0) {
          local_40 = &local_28;
          local_28 = FUN_1449e2820;
          local_30 = FUN_14081d0ea;
          local_38 = &LAB_1464003b0;
          local_48 = &LAB_147d17bdf;
          local_50 = &LAB_1417edf22;
          local_58 = L"Engine";
          local_60 = 0;
          local_68 = 0x10000000;
          local_70 = 8;
          local_78 = 0x588;
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
        }
        if (((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
              (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) &&
           ((plVar3[0x1ca] != 0 || (*(char *)((longlong)plVar3 + 0x1174) == '\x01')))) {
          if ((*(byte *)((longlong)plVar3 + 0x89c) < 4) ||
             ((*(byte *)((longlong)plVar3 + 0x89f) & 0x40) != 0)) {
            if (((*(byte *)((longlong)plVar3 + 0xc62) & 4) == 0) ||
               ((*(float *)(param_1 + 0x48) != 0.0 || (NAN(*(float *)(param_1 + 0x48)))))) {
              uVar4 = CONCAT71((int7)((ulonglong)(DAT_14cb06da8 + 0x30) >> 8),1);
              goto LAB_143cb353e;
            }
          }
          else {
            *(undefined1 *)((longlong)plVar3 + 0xc5e) = 2;
          }
        }
      }
    }
  }
  uVar4 = 0;
LAB_143cb353e:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 143cb3632 FUN_143cb3632 body=990 status=ok
// SIG undefined FUN_143cb3632(void)

void FUN_143cb3632(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined7 uVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((((((*(int *)(param_1 + 0x4c) < 3) || (*(int *)(param_1 + 0x3c) == 0)) ||
        (uVar2 = *(uint *)(param_1 + 0x38), (int)uVar2 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar2 ||
        (plVar9 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
        plVar9 == (longlong *)0x0)))) ||
      (((int)plVar9[2] != *(int *)(param_1 + 0x3c) ||
       (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 || (lVar3 = *plVar9, lVar3 == 0)))))) ||
     (((*(byte *)(lVar3 + 0xc72) & 2) != 0 && (1 < *(int *)(param_1 + 0x50))))) goto LAB_143cb38d6;
  uVar10 = (undefined7)((ulonglong)plVar9 >> 8);
  if (*(int *)(lVar3 + 0xd78) < 1 && -1 < (char)*(byte *)(lVar3 + 0xc70)) goto LAB_143cb38d6;
  if ((*(byte *)(lVar3 + 0xc70) & 4) == 0) {
    if ((((*(int *)(lVar3 + 0x554) == 0) || (uVar2 = *(uint *)(lVar3 + 0x550), (int)uVar2 < 0)) ||
        (DAT_14c9647dc <= (int)uVar2)) ||
       (((plVar9 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(lVar3 + 0x554))) ||
        (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 || (lVar8 = *plVar9, lVar8 == 0)))))) {
LAB_143cb378f:
      lVar8 = lVar3;
LAB_143cb3792:
      if (*(char *)(lVar8 + 0x427) == '\x02') goto LAB_143cb379f;
    }
    else if ((*(longlong *)(lVar8 + 0xa8) == 0) ||
            ((*(byte *)(*(longlong *)(lVar8 + 0xa8) + 0x65) & 1) != 0)) {
      if (DAT_14cad2858 == 0) {
        local_50 = &local_38;
        local_38 = FUN_144a7958c;
        local_40 = FUN_14081d0ea;
        local_48 = &LAB_146395584;
        local_58 = &LAB_147a0ba80;
        local_60 = &LAB_14575ccce;
        local_68 = L"Engine";
        local_70 = 0x40000000000;
        local_78 = 0x10000004;
        local_80 = 0x10;
        local_88 = 0x1180;
        uVar10 = 0x1463bce;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30))
      goto LAB_143cb378f;
      goto LAB_143cb3792;
    }
LAB_143cb38ae:
    local_88 = 0;
    FUN_143631de4(lVar3,param_1 + 0x108,0,CONCAT71(uVar10,1));
  }
  else {
LAB_143cb379f:
    if ((DAT_14c992a90 != '\x01') || ((DAT_14c763859 & 1) == 0)) goto LAB_143cb38ae;
    lVar8 = *(longlong *)(lVar3 + 0xb0);
    if ((lVar8 != 0) || (lVar8 = FUN_1448abda6(lVar3), lVar8 != 0)) {
      uVar4 = DAT_14cb71f80;
      if (DAT_14c9a7d10 == (undefined8 *)0x0) {
        DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
        *DAT_14c9a7d10 = 0;
        DAT_14c9a7d10[1] = 0;
        DAT_14c9a7d10[2] = 0;
        DAT_14c9a7d10[3] = 0;
      }
      FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,lVar8);
      plVar9 = local_30;
      pcVar5 = local_38;
      if ((local_38 == (code *)0x0) || (local_30 == (longlong *)0x0)) {
        plVar9 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
        UNLOCK();
        LOCK();
        plVar11 = local_30 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_30 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
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
      if (plVar9 != (longlong *)0x0) {
        iVar7 = (int)plVar9[1];
        do {
          plVar11 = (longlong *)0x0;
          if (iVar7 == 0) break;
          LOCK();
          iVar6 = (int)plVar9[1];
          bVar12 = iVar7 == iVar6;
          if (bVar12) {
            *(int *)(plVar9 + 1) = iVar7 + 1;
            iVar6 = iVar7;
          }
          iVar7 = iVar6;
          UNLOCK();
          plVar11 = plVar9;
        } while (!bVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
        if (plVar11 != (longlong *)0x0) {
          if (pcVar5 != (code *)0x0) {
            FUN_144af6ee4(pcVar5,lVar3,0,1);
          }
          LOCK();
          plVar9 = plVar11 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
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
      }
    }
  }
  FUN_143633016(lVar3);
LAB_143cb38d6:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cb3a22 FUN_143cb3a22 body=3700 status=ok
// SIG undefined FUN_143cb3a22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cb3a22(char *param_1,undefined8 param_2)

{
  int *piVar1;
  ulonglong uVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 **ppuVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  int iVar17;
  longlong *plVar18;
  longlong lVar19;
  undefined8 *puVar20;
  byte bVar21;
  uint *puVar22;
  longlong lVar23;
  undefined8 *puVar24;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8 [4];
  undefined8 **local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [32];
  undefined1 *local_88;
  undefined4 local_80;
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  iVar5 = DAT_14cb720b0;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar14 = (longlong)(int)DAT_14cb720b0;
  if (0 < lVar14) {
    puVar16 = DAT_14cb720a8;
    if (DAT_14cb720a8 == (undefined8 *)0x0) {
      puVar16 = &DAT_14cb72088;
    }
    lVar19 = 0;
    do {
      if (*(char **)((longlong)puVar16 + lVar19) == param_1) goto LAB_143cb3ace;
      lVar19 = lVar19 + 8;
    } while (lVar14 * 8 - lVar19 != 0);
  }
  DAT_14cb720b0 = DAT_14cb720b0 + 1;
  if (DAT_14cb720b4 < DAT_14cb720b0) {
    FUN_1487d77f8(&DAT_14cb72088,iVar5);
  }
  puVar16 = &DAT_14cb72088;
  if (DAT_14cb720a8 != (undefined8 *)0x0) {
    puVar16 = DAT_14cb720a8;
  }
  puVar16[lVar14] = param_1;
  puVar16 = *(undefined8 **)(param_1 + 0x98);
  if (puVar16 == (undefined8 *)0x0) {
    if (((1 < *(int *)(param_1 + 0x4c)) && (*(longlong *)(param_1 + 0xc0) != 0)) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xc0) + 0x31) & 1) != 0)) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0x400000000;
      iVar5 = *(int *)(param_1 + 0x140);
      if (0 < iVar5) {
        uVar13 = 0;
        do {
          lVar14 = *(longlong *)(param_1 + 0x138);
          lVar19 = (ulonglong)uVar13 * 0x10;
          iVar17 = *(int *)(lVar14 + 4 + lVar19);
          puVar22 = (uint *)(lVar14 + lVar19);
          if (((((iVar17 == 0) || (uVar9 = *puVar22, (int)uVar9 < 0)) ||
               ((DAT_14c9647dc <= (int)uVar9 ||
                ((plVar18 = (longlong *)
                            ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
                 plVar18 == (longlong *)0x0 || ((int)plVar18[2] != iVar17)))))) ||
              ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)) || (*plVar18 == 0)) {
            iVar17 = ~uVar13 + iVar5;
            if (iVar17 != 0) {
LAB_143cb3cb3:
              memmove(puVar22,puVar22 + 4,(longlong)iVar17 << 4);
              iVar5 = *(int *)(param_1 + 0x140);
            }
LAB_143cb3cbe:
            *(int *)(param_1 + 0x140) = iVar5 + -1;
            FUN_14186dec8(param_1 + 0x138);
            uVar13 = uVar13 - 1;
          }
          else {
            pcVar6 = (char *)FUN_141868222(param_2);
            *(char **)(puVar22 + 2) = pcVar6;
            if ((pcVar6 == param_1 || pcVar6 == (char *)0x0) || (*(int *)(pcVar6 + 0x4c) < 2)) {
              iVar5 = *(int *)(param_1 + 0x140);
              iVar17 = ~uVar13 + iVar5;
              if (iVar17 != 0) {
                puVar22 = (uint *)(*(longlong *)(param_1 + 0x138) + lVar19);
                goto LAB_143cb3cb3;
              }
              goto LAB_143cb3cbe;
            }
            FUN_143cb3a22(pcVar6,param_2);
            uVar15 = local_50;
            lVar14 = *(longlong *)(puVar22 + 2);
            lVar19 = *(longlong *)(lVar14 + 0x98);
            if (lVar19 != 0) {
              lVar23 = (longlong)(int)local_50;
              uVar9 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,uVar9);
              if (local_50._4_4_ < uVar9) {
                FUN_14476a5c8(local_78,uVar15 & 0xffffffff);
                lVar19 = *(longlong *)(lVar14 + 0x98);
                puVar10 = local_58;
                if (local_58 == (undefined1 *)0x0) {
                  puVar10 = local_78;
                }
                *(longlong *)(puVar10 + lVar23 * 8) = lVar19;
                if (lVar19 == 0) goto LAB_143cb3cd0;
              }
              else {
                puVar10 = local_58;
                if (local_58 == (undefined1 *)0x0) {
                  puVar10 = local_78;
                }
                *(longlong *)(puVar10 + lVar23 * 8) = lVar19;
              }
              LOCK();
              *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
              UNLOCK();
            }
          }
LAB_143cb3cd0:
          uVar13 = uVar13 + 1;
          iVar5 = *(int *)(param_1 + 0x140);
        } while ((int)uVar13 < iVar5);
      }
      puVar11 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar22 = (uint *)*puVar11;
      if (puVar22 != (uint *)0x0) goto LAB_143cb3d9b;
LAB_143cb3d1d:
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_143cb9f4c);
      }
      lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar7 = *(undefined4 **)(lVar14 + 0x310);
      *(undefined8 *)(lVar14 + 0x310) = 0;
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar7 = 0xffffffff;
      *(undefined4 **)(puVar7 + 0x10) = puVar7 + 0x16;
      puVar7[0x12] = 0;
      *puVar11 = puVar7;
      FUN_140217a48(puVar11);
      puVar22 = (uint *)*puVar11;
LAB_143cb3d9b:
      uVar15 = *(longlong *)(puVar22 + 0x10) + 7;
      uVar13 = puVar22[0x12];
      do {
        puVar16 = (undefined8 *)(uVar15 & 0xfffffffffffffff8);
        if (puVar16 + 0x16 <= puVar22 + 0x4000) {
          *(undefined8 **)(puVar22 + 0x10) = puVar16 + 0x16;
          puVar22[0x12] = uVar13 + 1;
          FUN_1447247dc(puVar16,local_78);
          *puVar16 = &PTR_FUN_14b3edd48;
          puVar16[0x15] = param_1;
          uVar13 = DAT_14cb71c98;
          if (((DAT_14cb71c90 != 0x400) || (DAT_14c7585d8 != 0)) &&
             ((DAT_14cb71c90 != 0x800 || (DAT_14c7585dc != 0)))) {
            uVar13 = DAT_14cb71c90 | _DAT_14cb71c94;
          }
          uVar9 = uVar13 >> 10 & 3;
          if ((uVar13 >> 9 & 1) == 0 || uVar9 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar9];
          }
          else {
            uVar15 = 2;
          }
          if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
          }
          puVar16[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar16[9] = puVar16;
          puVar16[10] = puVar16;
          lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          lVar19 = *(longlong *)(lVar14 + 0x2b8);
          if (lVar19 == 0) {
            uVar2 = 1;
            if ((char)uVar15 != '\x06') {
              uVar2 = uVar15;
            }
            uVar15 = uVar2;
            uVar8 = 0;
          }
          else {
            if ((char)uVar15 == '\x06') {
              uVar15 = *(ulonglong *)(lVar19 + 0x38) >> 0x3b;
            }
            uVar8 = *(undefined8 *)(lVar19 + 0x30);
          }
          puVar16[0xf] = uVar8;
          puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
          *(undefined4 *)((longlong)puVar16 + 0x1c) = 0;
          if (puVar16 == (undefined8 *)0x0) {
            local_a8[0] = 1;
            FUN_1447439e4(0);
            puVar24 = *(undefined8 **)(param_1 + 0x98);
            if (puVar24 != (undefined8 *)0x0) {
              param_1[0x98] = '\0';
              param_1[0x99] = '\0';
              param_1[0x9a] = '\0';
              param_1[0x9b] = '\0';
              param_1[0x9c] = '\0';
              param_1[0x9d] = '\0';
              param_1[0x9e] = '\0';
              param_1[0x9f] = '\0';
              goto LAB_143cb3fec;
            }
LAB_143cb47a1:
            if (*(int *)(param_1 + 0x4c) < 3) {
              puVar16 = (undefined8 *)0x0;
              goto LAB_143cb400e;
            }
          }
          else {
            LOCK();
            *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
            UNLOCK();
            local_a8[0] = 1;
            FUN_1447439e4(puVar16);
            LOCK();
            *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
            UNLOCK();
            puVar24 = *(undefined8 **)(param_1 + 0x98);
            if (puVar24 != puVar16) {
              *(undefined8 **)(param_1 + 0x98) = puVar16;
              LOCK();
              *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
              UNLOCK();
LAB_143cb3fec:
              if (puVar24 != (undefined8 *)0x0) {
                LOCK();
                piVar1 = (int *)(puVar24 + 1);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)*puVar24)(puVar24,1);
                }
              }
              if (puVar16 == (undefined8 *)0x0) goto LAB_143cb47a1;
            }
            LOCK();
            piVar1 = (int *)(puVar16 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar16)(puVar16,1);
            }
            if (*(int *)(param_1 + 0x4c) < 3) goto LAB_143cb400e;
            LOCK();
            *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
            UNLOCK();
          }
          local_88 = (undefined1 *)0x0;
          local_80 = 1;
          local_d8[0] = puVar16;
          FUN_144727e94(local_a8,1,0);
          puVar10 = local_88;
          if (local_88 == (undefined1 *)0x0) {
            puVar10 = local_a8;
          }
          FUN_144727e6e(puVar10,local_d8,1);
          if (local_d8[0] != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_d8[0] + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*local_d8[0])(local_d8[0],1);
            }
          }
          plVar18 = (longlong *)(lVar14 + 0x2b8);
          puVar22 = (uint *)*puVar11;
          if (puVar22 != (uint *)0x0) goto LAB_143cb413c;
          goto LAB_143cb40be;
        }
        *(uint **)(puVar22 + 0x10) = puVar22 + 0x4000;
        LOCK();
        uVar9 = *puVar22;
        *puVar22 = *puVar22 + uVar13 + 1;
        UNLOCK();
        if ((uVar9 ^ uVar13) != 0xffffffff) goto LAB_143cb3d1d;
        puVar22 = (uint *)*puVar11;
        *puVar22 = 0xffffffff;
        *(uint **)(puVar22 + 0x10) = puVar22 + 0x16;
        puVar22[0x12] = 0;
        *puVar11 = puVar22;
        uVar15 = (longlong)puVar22 + 0x5f;
        uVar13 = 0;
      } while( true );
    }
  }
  else {
    LOCK();
    *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
    UNLOCK();
LAB_143cb3a9b:
    LOCK();
    piVar1 = (int *)(puVar16 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar16)(puVar16,1);
    }
  }
LAB_143cb3ac8:
  DAT_14cb720b0 = DAT_14cb720b0 - 1;
LAB_143cb3ace:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_143cb40be:
  uVar13 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x318);
  if ((uVar13 & 1) == 0) {
    *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
             ) = uVar13 | 1;
    __tlregdtor(&LAB_143cb9f4c);
  }
  lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar7 = *(undefined4 **)(lVar14 + 0x310);
  *(undefined8 *)(lVar14 + 0x310) = 0;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = _aligned_malloc(0x10000,0x10000);
  }
  *puVar7 = 0xffffffff;
  *(undefined4 **)(puVar7 + 0x10) = puVar7 + 0x16;
  puVar7[0x12] = 0;
  *puVar11 = puVar7;
  FUN_140217a48(puVar11);
  puVar22 = (uint *)*puVar11;
LAB_143cb413c:
  uVar15 = *(longlong *)(puVar22 + 0x10) + 7;
  uVar13 = puVar22[0x12];
  do {
    puVar24 = (undefined8 *)(uVar15 & 0xfffffffffffffff8);
    if (puVar24 + 0x16 <= puVar22 + 0x4000) {
      *(undefined8 **)(puVar22 + 0x10) = puVar24 + 0x16;
      puVar22[0x12] = uVar13 + 1;
      FUN_1447247dc(puVar24,local_a8);
      *puVar24 = &PTR_FUN_14b3edd58;
      puVar24[0x15] = param_1;
      if (*(code **)(puVar24[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar24[0xe] + 0x18))(puVar24 + 0xe,puVar24 + 9);
      }
      puVar24[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar24[9] = puVar24;
      puVar24[10] = puVar24;
      lVar14 = *plVar18;
      if (lVar14 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)(lVar14 + 0x30);
      }
      puVar24[0xf] = uVar8;
      puVar24[0x10] = 0xe80000527800b400;
      *(undefined4 *)((longlong)puVar24 + 0x1c) = 3;
      if (puVar24 == (undefined8 *)0x0) {
        local_d8[0] = (undefined8 *)CONCAT71(local_d8[0]._1_7_,1);
        FUN_1447439e4(0);
        puVar20 = *(undefined8 **)(param_1 + 0xa0);
        if (puVar20 != (undefined8 *)0x0) {
          param_1[0xa0] = '\0';
          param_1[0xa1] = '\0';
          param_1[0xa2] = '\0';
          param_1[0xa3] = '\0';
          param_1[0xa4] = '\0';
          param_1[0xa5] = '\0';
          param_1[0xa6] = '\0';
          param_1[0xa7] = '\0';
          goto LAB_143cb42ef;
        }
      }
      else {
        LOCK();
        *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
        UNLOCK();
        local_d8[0] = (undefined8 *)CONCAT71(local_d8[0]._1_7_,1);
        FUN_1447439e4(puVar24);
        LOCK();
        *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
        UNLOCK();
        puVar20 = *(undefined8 **)(param_1 + 0xa0);
        if (puVar20 != puVar24) {
          *(undefined8 **)(param_1 + 0xa0) = puVar24;
          LOCK();
          *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
          UNLOCK();
LAB_143cb42ef:
          if (puVar20 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar20 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar20)(puVar20,1);
            }
          }
          if (puVar24 == (undefined8 *)0x0) goto LAB_143cb4308;
        }
        LOCK();
        piVar1 = (int *)(puVar24 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar24)(puVar24,1);
        }
      }
LAB_143cb4308:
      cVar4 = FUN_143cb3418(param_1);
      *param_1 = cVar4;
      if (cVar4 == '\0') goto LAB_143cb4316;
      if (puVar24 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
        UNLOCK();
      }
      local_b8 = (undefined8 **)0x0;
      local_b0 = 1;
      local_e8 = plVar18;
      local_e0 = puVar24;
      FUN_144727e94(local_d8,1,0);
      ppuVar12 = local_b8;
      if (local_b8 == (undefined8 **)0x0) {
        ppuVar12 = local_d8;
      }
      FUN_144727e6e(ppuVar12,&local_e0,1);
      if (local_e0 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_e0 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_e0)(local_e0,1);
        }
      }
      puVar22 = (uint *)*puVar11;
      if (puVar22 != (uint *)0x0) goto LAB_143cb446c;
      break;
    }
    *(uint **)(puVar22 + 0x10) = puVar22 + 0x4000;
    LOCK();
    uVar9 = *puVar22;
    *puVar22 = *puVar22 + uVar13 + 1;
    UNLOCK();
    if ((uVar9 ^ uVar13) != 0xffffffff) goto LAB_143cb40be;
    puVar22 = (uint *)*puVar11;
    *puVar22 = 0xffffffff;
    *(uint **)(puVar22 + 0x10) = puVar22 + 0x16;
    puVar22[0x12] = 0;
    *puVar11 = puVar22;
    uVar15 = (longlong)puVar22 + 0x5f;
    uVar13 = 0;
  } while( true );
LAB_143cb43ee:
  uVar13 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x318);
  if ((uVar13 & 1) == 0) {
    *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
             ) = uVar13 | 1;
    __tlregdtor(&LAB_143cb9f4c);
  }
  lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar7 = *(undefined4 **)(lVar14 + 0x310);
  *(undefined8 *)(lVar14 + 0x310) = 0;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = _aligned_malloc(0x10000,0x10000);
  }
  *puVar7 = 0xffffffff;
  *(undefined4 **)(puVar7 + 0x10) = puVar7 + 0x16;
  puVar7[0x12] = 0;
  *puVar11 = puVar7;
  FUN_140217a48(puVar11);
  puVar22 = (uint *)*puVar11;
LAB_143cb446c:
  uVar15 = *(longlong *)(puVar22 + 0x10) + 7;
  uVar13 = puVar22[0x12];
LAB_143cb4489:
  puVar20 = (undefined8 *)(uVar15 & 0xfffffffffffffff8);
  if (puVar20 + 0x16 <= puVar22 + 0x4000) {
    *(undefined8 **)(puVar22 + 0x10) = puVar20 + 0x16;
    puVar22[0x12] = uVar13 + 1;
    FUN_1447247dc(puVar20,local_d8);
    *puVar20 = &PTR_FUN_14b3edd68;
    puVar20[0x15] = param_1;
    uVar13 = DAT_14cb71c98;
    if (((DAT_14cb71c90 != 0x400) || (DAT_14c7585d8 != 0)) &&
       ((DAT_14cb71c90 != 0x800 || (DAT_14c7585dc != 0)))) {
      uVar13 = DAT_14cb71c90 | _DAT_14cb71c94;
    }
    uVar9 = uVar13 >> 10 & 3;
    if ((uVar13 >> 9 & 1) == 0 || uVar9 < 2) {
      bVar21 = (&DAT_149e38edc)[uVar9];
    }
    else {
      bVar21 = 2;
    }
    if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
    }
    puVar20[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar20[9] = puVar20;
    puVar20[10] = puVar20;
    lVar14 = *local_e8;
    if (lVar14 == 0) {
      bVar3 = 1;
      if (bVar21 != 6) {
        bVar3 = bVar21;
      }
      bVar21 = bVar3;
      uVar8 = 0;
    }
    else {
      if (bVar21 == 6) {
        bVar21 = (byte)((ulonglong)*(undefined8 *)(lVar14 + 0x38) >> 0x3b);
      }
      uVar8 = *(undefined8 *)(lVar14 + 0x30);
    }
    puVar20[0xf] = uVar8;
    puVar20[0x10] = (ulonglong)(bVar21 & 7) << 0x3b | 0xc00000527800b400;
    *(undefined4 *)((longlong)puVar20 + 0x1c) = 0;
    if (puVar20 == (undefined8 *)0x0) {
      local_e0 = (undefined8 *)CONCAT71(local_e0._1_7_,1);
      FUN_1447439e4(0);
      puVar11 = *(undefined8 **)(param_1 + 0xa8);
      if (puVar11 != (undefined8 *)0x0) {
        param_1[0xa8] = '\0';
        param_1[0xa9] = '\0';
        param_1[0xaa] = '\0';
        param_1[0xab] = '\0';
        param_1[0xac] = '\0';
        param_1[0xad] = '\0';
        param_1[0xae] = '\0';
        param_1[0xaf] = '\0';
        goto LAB_143cb46c1;
      }
    }
    else {
      LOCK();
      *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
      UNLOCK();
      local_e0 = (undefined8 *)CONCAT71(local_e0._1_7_,1);
      FUN_1447439e4(puVar20);
      LOCK();
      *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
      UNLOCK();
      puVar11 = *(undefined8 **)(param_1 + 0xa8);
      if (puVar11 != puVar20) {
        *(undefined8 **)(param_1 + 0xa8) = puVar20;
        LOCK();
        *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
        UNLOCK();
LAB_143cb46c1:
        if (puVar11 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar11 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar11)(puVar11,1);
          }
        }
        if (puVar20 == (undefined8 *)0x0) goto LAB_143cb46da;
      }
      LOCK();
      piVar1 = (int *)(puVar20 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar20)(puVar20,1);
      }
    }
LAB_143cb46da:
    ppuVar12 = local_d8;
    if (local_b8 != (undefined8 **)0x0) {
      ppuVar12 = local_b8;
    }
    FUN_144717c65(ppuVar12,local_b0);
    if (local_b8 != (undefined8 **)0x0) {
      FUN_1400020a8();
    }
    if (puVar20 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar20 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar20)(puVar20,1);
      }
    }
LAB_143cb4316:
    if (puVar24 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar24 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar24)(puVar24,1);
      }
    }
    puVar10 = local_a8;
    if (local_88 != (undefined1 *)0x0) {
      puVar10 = local_88;
    }
    FUN_144717c65(puVar10,local_80);
    if (local_88 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
LAB_143cb400e:
    puVar10 = local_78;
    if (local_58 != (undefined1 *)0x0) {
      puVar10 = local_58;
    }
    FUN_144717c65(puVar10,local_50 & 0xffffffff);
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (puVar16 != (undefined8 *)0x0) goto LAB_143cb3a9b;
    goto LAB_143cb3ac8;
  }
  *(uint **)(puVar22 + 0x10) = puVar22 + 0x4000;
  LOCK();
  uVar9 = *puVar22;
  *puVar22 = *puVar22 + uVar13 + 1;
  UNLOCK();
  if ((uVar9 ^ uVar13) == 0xffffffff) goto code_r0x000143cb44ab;
  goto LAB_143cb43ee;
code_r0x000143cb44ab:
  puVar22 = (uint *)*puVar11;
  *puVar22 = 0xffffffff;
  *(uint **)(puVar22 + 0x10) = puVar22 + 0x16;
  puVar22[0x12] = 0;
  *puVar11 = puVar22;
  uVar15 = (longlong)puVar22 + 0x5f;
  uVar13 = 0;
  goto LAB_143cb4489;
}



// FUNCTION 143cb4898 FUN_143cb4898 body=8379 status=ok
// SIG undefined FUN_143cb4898(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cb4898(double *param_1,double *param_2)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  float fVar9;
  double *pdVar10;
  double *pdVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  double dVar15;
  float fVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  double dVar40;
  double dVar41;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  double local_158;
  float local_14c;
  undefined8 local_148;
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 local_118;
  double dStack_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (((((((param_1[0x8b] - DAT_14caddeb0 != 0.0) || (NAN(param_1[0x8b] - DAT_14caddeb0))) ||
         (param_1[0x8c] - _DAT_14caddeb8 != 0.0)) ||
        ((NAN(param_1[0x8c] - _DAT_14caddeb8) || (param_1[0x8d] - DAT_14caddec0 != 0.0)))) ||
       (NAN(param_1[0x8d] - DAT_14caddec0))) &&
      (((param_1[0x8e] - DAT_14caddeb0 != 0.0 || (NAN(param_1[0x8e] - DAT_14caddeb0))) ||
       ((param_1[0x8f] - _DAT_14caddeb8 != 0.0 ||
        (((NAN(param_1[0x8f] - _DAT_14caddeb8) || (param_1[0x90] - DAT_14caddec0 != 0.0)) ||
         (NAN(param_1[0x90] - DAT_14caddec0))))))))) &&
     ((-1 < *(int *)(param_1 + 0x1a) && (*(int *)((longlong)param_1 + 0xd4) != -1)))) {
    dVar30 = param_1[0x3c] - DAT_14caddeb0;
    if ((dVar30 != 0.0) ||
       (((NAN(dVar30) || (dVar30 = param_1[0x3d] - _DAT_14caddeb8, dVar30 != 0.0)) ||
        ((NAN(dVar30) ||
         ((param_1[0x3e] - DAT_14caddec0 != 0.0 || (NAN(param_1[0x3e] - DAT_14caddec0))))))))) {
      dVar30 = param_2[0x30];
      dVar34 = param_2[0x31];
      dVar15 = param_2[0x32];
      dVar40 = (double)((float)(param_1[0x3e] * dVar15 +
                               param_1[0x3c] * dVar30 + param_1[0x3d] * dVar34) -
                       (float)(param_1[0x2a] * dVar15 +
                              param_1[0x28] * dVar30 + param_1[0x29] * dVar34));
      param_1[0x28] = dVar30 * dVar40 + param_1[0x28];
      param_1[0x29] = dVar34 * dVar40 + param_1[0x29];
      param_1[0x2a] = dVar15 * dVar40 + param_1[0x2a];
      param_1[0x2b] = 0.0;
    }
  }
  if (((param_1[0x91] == 0.0) || (fVar25 = *(float *)(param_1 + 0x92), fVar25 < -1e-08)) ||
     (*(char *)(param_2 + 0x2e) == '\0')) {
LAB_143cb4d8f:
    *(undefined4 *)((longlong)param_1 + 0x494) = 0;
  }
  else {
    if (*(char *)(param_1 + 0x18) == '\x01') {
      fVar14 = *(float *)((longlong)param_1 + 0x494);
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x494) = 0;
      fVar14 = 0.0;
    }
    dVar21 = param_1[0x28];
    dVar41 = param_1[0x29];
    dVar17 = param_1[0x2a];
    dVar27 = param_2[8] * dVar21;
    dVar28 = param_2[9] * dVar41;
    dVar22 = dVar17 * param_2[10];
    dVar30 = param_2[3];
    dVar15 = *param_2;
    dVar40 = param_2[1];
    dVar32 = param_2[2];
    dVar31 = dVar28 * dVar15 - dVar27 * dVar40;
    dVar33 = dVar22 * dVar40 - dVar28 * dVar32;
    dVar34 = dVar27 * dVar32 - dVar15 * dVar22;
    dVar33 = dVar33 + dVar33;
    dVar34 = dVar34 + dVar34;
    dVar31 = dVar31 + dVar31;
    dVar27 = (dVar31 * dVar40 - dVar34 * dVar32) + dVar30 * dVar33 + dVar27 + param_2[4];
    dVar28 = (dVar32 * dVar33 - dVar15 * dVar31) + param_2[3] * dVar34 + dVar28 + param_2[5];
    dVar31 = dVar31 * dVar30 + dVar22 + (dVar34 * dVar15 - dVar33 * dVar40) + param_2[6];
    dVar32 = dVar27 - param_2[0x26];
    dVar35 = dVar28 - param_2[0x27];
    dVar30 = dVar31 - param_2[0x28];
    dVar36 = -param_2[0x22];
    dVar37 = -param_2[0x23];
    dVar22 = param_2[0x24] * -1.0;
    dVar33 = param_2[0x25] * 1.0;
    dVar40 = dVar32 * dVar22 - dVar36 * dVar30;
    dVar34 = dVar35 * dVar36 - dVar37 * dVar32;
    dVar15 = dVar30 * dVar37 - dVar22 * dVar35;
    dVar15 = dVar15 + dVar15;
    dVar40 = dVar40 + dVar40;
    dVar34 = dVar34 + dVar34;
    dVar30 = dVar33 * dVar34 + dVar30 + (dVar40 * dVar36 - dVar15 * dVar37);
    dVar32 = (dVar34 * dVar37 - dVar40 * dVar22) + dVar33 * dVar15 + dVar32;
    dVar34 = param_2[0x22] * dVar34 + dVar22 * dVar15 + dVar33 * dVar40 + dVar35;
    if (((fVar14 < 0.0001) && (fVar25 < *(float *)(param_1 + 0x22))) ||
       ((0.9999 < fVar14 &&
        ((fVar25 < *(float *)((longlong)param_1 + 0x114) ||
          fVar25 == *(float *)((longlong)param_1 + 0x114) &&
         (SQRT((param_1[0x95] - dVar30) * (param_1[0x95] - dVar30) +
               (param_1[0x94] - dVar34) * (param_1[0x94] - dVar34) +
               (param_1[0x93] - dVar32) * (param_1[0x93] - dVar32)) <=
          (double)*(float *)((longlong)param_1 + 0x11c))))))) {
      if (0.9999 < fVar14) goto LAB_143cb5ed5;
      *(undefined4 *)((longlong)param_1 + 0x494) = 0x3f800000;
      param_1[0x93] = dVar32;
      param_1[0x94] = dVar34;
      param_1[0x95] = dVar30;
      param_1[0x96] = dVar27;
      param_1[0x97] = dVar28;
      param_1[0x98] = dVar31;
      fVar14 = 1.0;
    }
    else {
      if (0.0001 <= fVar14) {
        fVar25 = *(float *)(param_1 + 0x23);
        if ((fVar25 == 0.0) && (!NAN(fVar25))) goto LAB_143cb4d8f;
        fVar16 = 0.0 - fVar14;
        fVar9 = 0.0;
        if (1e-08 <= fVar16 * fVar16) {
          fVar25 = (1.0 / fVar25) * *(float *)((longlong)param_2 + 0xc4);
          if (fVar25 <= fVar16) {
            fVar16 = fVar25;
          }
          if (fVar16 <= -fVar25) {
            fVar16 = -fVar25;
          }
          fVar9 = fVar14 + fVar16;
        }
        fVar14 = fVar9;
        *(float *)((longlong)param_1 + 0x494) = fVar14;
      }
LAB_143cb5ed5:
      if (fVar14 < 0.0001) goto LAB_143cb4d99;
      dVar32 = param_1[0x93];
      dVar34 = param_1[0x94];
      dVar30 = param_1[0x95];
    }
    dVar40 = param_2[0x22];
    dVar31 = param_2[0x23];
    dVar22 = param_2[0x24];
    dVar15 = param_2[0x25];
    dVar33 = dVar32 * dVar22 - dVar40 * dVar30;
    dVar27 = dVar34 * dVar40 - dVar32 * dVar31;
    dVar28 = dVar30 * dVar31 - dVar34 * dVar22;
    dVar28 = dVar28 + dVar28;
    dVar33 = dVar33 + dVar33;
    dVar27 = dVar27 + dVar27;
    dVar32 = (dVar27 * dVar31 - dVar33 * dVar22) + dVar15 * dVar28 + dVar32 + param_2[0x26];
    dVar22 = (dVar22 * dVar28 - dVar40 * dVar27) + param_2[0x25] * dVar33 + dVar34 + param_2[0x27];
    dVar40 = dVar27 * dVar15 + dVar30 + (dVar33 * dVar40 - dVar28 * dVar31) + param_2[0x28];
    param_1[0x96] = dVar32;
    param_1[0x97] = dVar22;
    param_1[0x98] = dVar40;
    dVar30 = dVar17;
    dVar34 = dVar21;
    dVar15 = dVar41;
    if (1e-08 <= fVar14) {
      dVar32 = dVar32 - param_2[4];
      dVar22 = dVar22 - param_2[5];
      dVar40 = dVar40 - param_2[6];
      auVar24 = *(undefined1 (*) [16])(param_2 + 8);
      dVar30 = -*param_2;
      dVar31 = -param_2[1];
      dVar15 = param_2[2] * -1.0;
      dVar35 = param_2[3] * 1.0;
      dVar33 = dVar32 * dVar15 - dVar30 * dVar40;
      dVar27 = dVar22 * dVar30 - dVar31 * dVar32;
      dVar28 = dVar40 * dVar31 - dVar15 * dVar22;
      dVar28 = dVar28 + dVar28;
      dVar33 = dVar33 + dVar33;
      dVar27 = dVar27 + dVar27;
      auVar20._8_8_ = 0x3ff0000000000000;
      auVar20._0_8_ = param_2[10];
      auVar29 = divpd(_DAT_149934d80,auVar24);
      auVar20 = divpd(ZEXT816(0x3ff0000000000000),auVar20);
      dVar34 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar24._0_8_)) & auVar29._0_8_) *
               ((dVar27 * dVar31 - dVar33 * dVar15) + dVar35 * dVar28 + dVar32);
      dVar15 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar24._8_8_)) & auVar29._8_8_) *
               (dVar27 * *param_2 + dVar15 * dVar28 + dVar35 * dVar33 + dVar22);
      dVar30 = (dVar35 * dVar27 + dVar40 + (dVar33 * dVar30 - dVar28 * dVar31)) *
               (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_2[10])) & auVar20._0_8_);
      if (fVar14 <= 1.0) {
        dVar40 = (double)fVar14;
        dVar30 = dVar17 + (dVar30 - dVar17) * dVar40;
        dVar34 = (dVar34 - dVar21) * dVar40 + dVar21;
        dVar15 = (dVar15 - dVar41) * dVar40 + dVar41;
      }
    }
    param_1[0x28] = dVar34;
    param_1[0x29] = dVar15;
    param_1[0x2a] = dVar30;
    param_1[0x2b] = 0.0;
  }
LAB_143cb4d99:
  pdVar1 = param_1 + 0x5f;
  pdVar10 = param_2 + 0x1a;
  if (*(char *)(param_2 + 0x20) != '\x01') {
    pdVar10 = pdVar1;
  }
  pdVar11 = pdVar10;
  if ((*(char *)((longlong)param_2 + 0xcc) != '\x02') && (*(char *)(param_1 + 0x55) == '\x01')) {
    pdVar2 = param_1 + 0x4d;
    cVar4 = *(char *)(param_1 + 0x53);
    pdVar11 = pdVar2;
    if (cVar4 == '\x02') {
      pdVar11 = pdVar10;
    }
    if ((((*(char *)((longlong)param_2 + 0xcc) != '\x01') && (-1 < *(int *)(param_1 + 0x1e))) &&
        (*(int *)((longlong)param_1 + 0xf4) != -1)) && (*(char *)(param_1 + 0x5e) == '\x01')) {
      pdVar3 = param_1 + 0x56;
      cVar5 = *(char *)(param_1 + 0x5c);
      if (cVar5 != '\x02') {
        pdVar10 = pdVar3;
      }
      if (cVar4 != '\x02') {
        pdVar10 = pdVar2;
      }
      pdVar11 = pdVar10;
      if (cVar4 != '\x02' && cVar5 != '\x02') {
        if (cVar4 == '\x01') {
          pdVar11 = pdVar2;
          if (cVar5 == '\0') goto LAB_143cb4efa;
        }
        else {
          pdVar11 = pdVar3;
          if ((cVar5 == '\x01') || (pdVar11 = pdVar2, cVar4 == '\0' && cVar5 == '\0'))
          goto LAB_143cb4efa;
        }
        dVar30 = param_1[0x4d];
        dVar34 = param_1[0x4e];
        dVar15 = param_1[0x56];
        dVar40 = param_1[0x57];
        dVar21 = param_1[0x4f];
        dVar41 = param_1[0x58];
        if (ABS(dVar21 * dVar41 + dVar30 * dVar15 + dVar34 * dVar40) < 0.999845027923584) {
          dVar17 = param_1[0x52];
          dVar32 = param_1[0x5b];
          local_158 = param_1[0x50];
          dVar31 = param_1[0x51];
          dVar22 = param_1[0x5a];
          dVar27 = param_1[0x59];
          dVar36 = dVar15 * (dVar31 - dVar22) - (local_158 - dVar27) * dVar40;
          dVar28 = dVar41 * (local_158 - dVar27) - (dVar17 - dVar32) * dVar15;
          dVar33 = dVar40 * (dVar17 - dVar32) - (dVar31 - dVar22) * dVar41;
          dVar35 = ((dVar36 * dVar15 - dVar41 * dVar33) + dVar22) - dVar22;
          dVar41 = ((dVar28 * dVar41 - dVar36 * dVar40) + dVar27) - dVar27;
          dVar40 = ((dVar33 * dVar40 - dVar15 * dVar28) + dVar32) - dVar32;
          dVar30 = ((dVar17 * dVar21 + local_158 * dVar30 + dVar34 * dVar31) -
                   (dVar32 * dVar21 + dVar27 * dVar30 + dVar34 * dVar22)) /
                   (dVar21 * dVar40 + dVar30 * dVar41 + dVar34 * dVar35);
          dVar15 = dVar41 * dVar30 + dVar27;
          dVar34 = local_158;
          if (dVar27 <= local_158) {
            dVar34 = dVar27;
          }
          if (dVar34 < dVar15 + 1.0) {
            dVar34 = local_158;
            if (local_158 <= dVar27) {
              dVar34 = dVar27;
            }
            if (dVar15 + -1.0 < dVar34) {
              dVar21 = dVar35 * dVar30 + dVar22;
              dVar34 = dVar31;
              if (dVar22 <= dVar31) {
                dVar34 = dVar22;
              }
              if (dVar34 < dVar21 + 1.0) {
                dVar34 = dVar31;
                if (dVar31 <= dVar22) {
                  dVar34 = dVar22;
                }
                if (dVar21 + -1.0 < dVar34) {
                  dVar34 = dVar40 * dVar30 + dVar32;
                  dVar30 = dVar17;
                  if (dVar32 <= dVar17) {
                    dVar30 = dVar32;
                  }
                  if (dVar30 < dVar34 + 1.0) {
                    fVar25 = (float)((dVar17 - dVar34) * (dVar17 - dVar34) +
                                    (dVar31 - dVar21) * (dVar31 - dVar21) +
                                    (local_158 - dVar15) * (local_158 - dVar15));
                    fVar14 = (float)((dVar32 - dVar34) * (dVar32 - dVar34) +
                                    (dVar22 - dVar21) * (dVar22 - dVar21) +
                                    (dVar27 - dVar15) * (dVar27 - dVar15));
                    fVar16 = fVar25 - fVar14;
                    pdVar11 = pdVar3;
                    if (0.0 < fVar16) {
                      pdVar11 = pdVar2;
                    }
                    if ((fVar25 + fVar14) * 0.01 < ABS(fVar16)) goto LAB_143cb4efa;
                  }
                }
              }
            }
          }
        }
        else {
          dVar17 = param_1[0x52];
          dVar32 = param_1[0x5b];
        }
        pdVar11 = pdVar3;
        if (dVar32 + -9.99999993922529e-09 < dVar17) {
          pdVar11 = pdVar2;
        }
      }
    }
  }
LAB_143cb4efa:
  dVar30 = *pdVar11;
  dVar34 = pdVar11[1];
  dVar15 = pdVar11[2];
  dVar40 = pdVar11[3];
  dVar21 = pdVar11[4];
  dVar41 = pdVar11[5];
  dVar17 = pdVar11[7];
  param_1[0x65] = pdVar11[6];
  param_1[0x66] = dVar17;
  param_1[99] = dVar21;
  param_1[100] = dVar41;
  param_1[0x61] = dVar15;
  param_1[0x62] = dVar40;
  *pdVar1 = dVar30;
  param_1[0x60] = dVar34;
  fVar25 = 1.5707964 - *(float *)((longlong)param_1 + 0x104);
  dVar30 = param_1[0x5f];
  dVar34 = param_1[0x60];
  dVar21 = dVar30 * dVar30 + dVar34 * dVar34;
  dVar15 = param_1[0x61];
  local_118 = (double)CONCAT44(local_118._4_4_,(float)SQRT(dVar15 * dVar15 + dVar21));
  dVar40 = 0.0;
  if (((dVar30 != 0.0) || (NAN(dVar30))) || ((dVar34 != 0.0 || (NAN(dVar34))))) {
    dVar40 = atan2(dVar34,dVar30);
    dVar15 = param_1[0x61];
    dVar21 = param_1[0x5f] * param_1[0x5f] + param_1[0x60] * param_1[0x60];
  }
  local_118 = (double)CONCAT44((float)dVar40,(undefined4)local_118);
  dVar21 = SQRT(dVar21);
  dVar30 = 0.0;
  if ((((dVar15 != 0.0) || (NAN(dVar15))) || (dVar21 != 0.0)) || (NAN(dVar21))) {
    dVar30 = atan2(dVar15,dVar21);
  }
  if ((float)dVar30 < fVar25) {
    dStack_110 = (double)CONCAT44(dStack_110._4_4_,fVar25);
    FUN_14072f652(&local_118,&local_f8);
    param_1[0x61] = local_e8;
    *pdVar1 = local_f8;
    param_1[0x60] = dStack_f0;
  }
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(char *)(param_1 + 0x65) == '\x01') {
      bVar7 = false;
    }
    else {
      bVar7 = *(float *)((longlong)param_1 + 0x374) <= 0.9999 &&
              *(float *)((longlong)param_1 + 0x374) != 0.9999;
    }
    fVar25 = *(float *)(param_2 + 0x33);
    if ((bVar7) || (fVar25 < 0.9999)) {
      dVar30 = param_2[0x1c];
      if (ABS(dVar30) < 9.99999993922529e-09) {
        dVar15 = param_2[0x1a];
        dVar34 = param_2[0x1b];
        dVar41 = pdVar11[5];
        dVar40 = pdVar11[3];
        dVar21 = pdVar11[4];
        dVar17 = 0.0;
      }
      else {
        dVar15 = param_2[0x1a];
        dVar34 = param_2[0x1b];
        dVar40 = pdVar11[3];
        dVar21 = pdVar11[4];
        dVar41 = pdVar11[5];
        dVar17 = (double)(float)(((param_2[0x1f] * dVar30 +
                                  param_2[0x1d] * dVar15 + param_2[0x1e] * dVar34) -
                                 (dVar41 * dVar30 + dVar40 * dVar15 + dVar34 * dVar21)) / dVar30);
      }
      dVar41 = dVar41 + dVar17;
      local_f8 = param_2[0x20];
      dStack_f0 = param_2[0x21];
      dVar21 = dVar21 + 0.0;
      dVar40 = dVar40 + 0.0;
      if (bVar7) {
        fVar14 = *(float *)((longlong)param_1 + 0x374);
        if (fVar14 < 0.0001) {
          param_1[0x5f] = dVar15;
          param_1[0x60] = dVar34;
          param_1[0x61] = dVar30;
          param_1[0x62] = dVar40;
          param_1[99] = dVar21;
          param_1[100] = dVar41;
          param_1[0x65] = local_f8;
          param_1[0x66] = dStack_f0;
          *(undefined1 *)(param_1 + 0x65) = 0;
        }
        else {
          if (fVar14 < 1e-08) {
            param_1[0x62] = dVar40;
            param_1[99] = dVar21;
            param_1[100] = dVar41;
            dVar17 = dVar30;
            dVar32 = dVar15;
            dVar31 = dVar34;
          }
          else if (1.0 < fVar14) {
            dVar17 = param_1[0x61];
            dVar32 = param_1[0x5f];
            dVar31 = param_1[0x60];
          }
          else {
            dVar31 = (double)fVar14;
            param_1[0x62] = (param_1[0x62] - dVar40) * dVar31 + dVar40;
            param_1[99] = (param_1[99] - dVar21) * dVar31 + dVar21;
            param_1[100] = (param_1[100] - dVar41) * dVar31 + dVar41;
            dVar17 = (param_1[0x61] - dVar30) * dVar31 + dVar30;
            dVar32 = (param_1[0x5f] - dVar15) * dVar31 + dVar15;
            dVar31 = (param_1[0x60] - dVar34) * dVar31 + dVar34;
          }
          param_1[0x5f] = dVar32;
          param_1[0x60] = dVar31;
          param_1[0x61] = dVar17;
        }
      }
      if (fVar25 < 0.9999) {
        fVar25 = *(float *)(param_2 + 0x33);
        if (0.0001 <= fVar25) {
          if (1e-08 <= fVar25) {
            if (fVar25 <= 1.0) {
              dVar17 = (double)fVar25;
              dVar41 = dVar41 + (param_1[100] - dVar41) * dVar17;
              dVar21 = dVar21 + (param_1[99] - dVar21) * dVar17;
              dVar40 = dVar40 + (param_1[0x62] - dVar40) * dVar17;
            }
            else {
              dVar40 = param_1[0x62];
              dVar21 = param_1[99];
              dVar41 = param_1[100];
            }
          }
          param_1[0x62] = dVar40;
          param_1[99] = dVar21;
          param_1[100] = dVar41;
          fVar25 = *(float *)(param_2 + 0x33);
          if (1e-08 <= fVar25) {
            if (fVar25 <= 1.0) {
              dVar40 = (double)fVar25;
              dVar30 = dVar30 + (param_1[0x61] - dVar30) * dVar40;
              dVar34 = dVar34 + (param_1[0x60] - dVar34) * dVar40;
              dVar15 = dVar15 + (param_1[0x5f] - dVar15) * dVar40;
            }
            else {
              dVar15 = param_1[0x5f];
              dVar34 = param_1[0x60];
              dVar30 = param_1[0x61];
            }
          }
          param_1[0x5f] = dVar15;
          param_1[0x60] = dVar34;
          param_1[0x61] = dVar30;
          *(undefined1 *)(param_1 + 0x65) = 1;
        }
        else {
          param_1[0x5f] = dVar15;
          param_1[0x60] = dVar34;
          param_1[0x61] = dVar30;
          param_1[0x62] = dVar40;
          param_1[99] = dVar21;
          param_1[100] = dVar41;
          param_1[0x65] = local_f8;
          param_1[0x66] = dStack_f0;
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    dVar15 = param_1[0x5f];
    dVar40 = param_1[0x60];
    dVar21 = *param_2;
    dVar41 = param_2[1];
    dVar17 = param_2[2];
    dVar30 = param_2[3];
    dVar34 = param_2[3];
    dVar32 = dVar40 * dVar21 - dVar15 * dVar41;
    dVar31 = param_1[0x61] * dVar41 - dVar40 * dVar17;
    dVar22 = dVar15 * dVar17 - param_1[0x61] * dVar21;
    dVar31 = dVar31 + dVar31;
    dVar22 = dVar22 + dVar22;
    dVar32 = dVar32 + dVar32;
    local_e8 = dVar32 * dVar30 + param_1[0x61] + (dVar22 * dVar21 - dVar31 * dVar41);
    local_f8 = (dVar32 * dVar41 - dVar22 * dVar17) + dVar30 * dVar31 + dVar15;
    dStack_f0 = (dVar17 * dVar31 - dVar21 * dVar32) + dVar34 * dVar22 + dVar40;
    dVar15 = param_1[0x6a];
    dVar40 = param_1[0x6b];
    dVar32 = dVar40 * dVar21 - dVar41 * dVar15;
    dVar31 = param_1[0x6c] * dVar41 - dVar17 * dVar40;
    dVar22 = dVar15 * dVar17 - dVar21 * param_1[0x6c];
    dVar31 = dVar31 + dVar31;
    dVar22 = dVar22 + dVar22;
    dVar32 = dVar32 + dVar32;
    local_108 = dVar32 * dVar30 + param_1[0x6c] + (dVar22 * dVar21 - dVar31 * dVar41);
    local_118 = (dVar32 * dVar41 - dVar22 * dVar17) + dVar30 * dVar31 + dVar15;
    dStack_110 = (dVar17 * dVar31 - dVar21 * dVar32) + dVar34 * dVar22 + dVar40;
    if (((9.999999747378752e-05 < ABS(local_118 - local_f8)) ||
        (9.999999747378752e-05 < ABS(dStack_110 - dStack_f0))) ||
       (9.999999747378752e-05 < ABS(local_108 - local_e8))) {
      if (*(char *)((longlong)param_1 + 0x37c) == '\x01') {
        FUN_144829af8(param_1 + 0x7e,&local_138,&local_f8,(longlong)param_2 + 0xc4);
        dVar30 = param_1[0x86];
        dVar34 = param_1[0x84];
        dVar15 = param_1[0x85];
      }
      else {
        local_168 = *(undefined4 *)((longlong)param_1 + 900);
        FUN_1467f873c(&local_138,&local_118,&local_f8);
        dVar30 = local_128;
        dVar34 = local_138;
        dVar15 = dStack_130;
      }
      dVar41 = param_2[0xc];
      dVar17 = param_2[0xd];
      dVar32 = param_2[0xe];
      dVar40 = param_2[0xf];
      dVar21 = param_2[0xf];
      dVar27 = dVar34 * dVar32 - dVar41 * dVar30;
      dVar31 = dVar15 * dVar41 - dVar34 * dVar17;
      dVar22 = dVar30 * dVar17 - dVar15 * dVar32;
      dVar22 = dVar22 + dVar22;
      dVar27 = dVar27 + dVar27;
      dVar31 = dVar31 + dVar31;
      param_1[0x6a] = (dVar31 * dVar17 - dVar27 * dVar32) + dVar40 * dVar22 + dVar34;
      param_1[0x6b] = (dVar32 * dVar22 - dVar41 * dVar31) + dVar21 * dVar27 + dVar15;
      param_1[0x6c] = dVar31 * dVar40 + dVar30 + (dVar27 * dVar41 - dVar22 * dVar17);
    }
    if (((9.999999747378752e-05 < ABS(param_1[0x67] - param_1[0x62])) ||
        (9.999999747378752e-05 < ABS(param_1[0x68] - param_1[99]))) ||
       (9.999999747378752e-05 < ABS(param_1[0x69] - param_1[100]))) {
      if (*(char *)((longlong)param_1 + 0x37c) == '\x01') {
        FUN_144829af8(param_1 + 0x72,&local_138,param_1 + 0x62,(longlong)param_2 + 0xc4);
        param_1[0x69] = param_1[0x7a];
        local_138 = param_1[0x78];
        dStack_130 = param_1[0x79];
      }
      else {
        local_168 = *(undefined4 *)(param_1 + 0x70);
        FUN_1405a186c(&local_138,param_1 + 0x67,param_1 + 0x62);
        param_1[0x69] = local_128;
      }
      param_1[0x67] = local_138;
      param_1[0x68] = dStack_130;
    }
    if (*(char *)(param_1 + 0x65) == '\x01') {
      fVar14 = 1.0;
    }
    else {
      fVar14 = 0.0;
    }
    fVar25 = *(float *)(param_1 + 0x6d);
    if (0.0001 < ABS(fVar25 - fVar14)) {
      fVar16 = fVar14 - fVar25;
      if (1e-08 <= fVar16 * fVar16) {
        fVar14 = *(float *)((longlong)param_2 + 0xc4) * *(float *)(param_1 + 0x71);
        if (fVar14 <= fVar16) {
          fVar16 = fVar14;
        }
        if (fVar16 <= -fVar14) {
          fVar16 = -fVar14;
        }
        fVar14 = fVar25 + fVar16;
      }
      fVar25 = fVar14;
      *(float *)(param_1 + 0x6d) = fVar25;
    }
  }
  else {
    param_1[0x69] = param_1[100];
    param_1[0x67] = param_1[0x62];
    param_1[0x68] = param_1[99];
    param_1[0x6a] = *pdVar1;
    param_1[0x6b] = param_1[0x60];
    param_1[0x6c] = param_1[0x61];
    if (*(char *)(param_1 + 0x65) == '\x01') {
      fVar25 = 1.0;
    }
    else {
      fVar25 = 0.0;
    }
    *(float *)(param_1 + 0x6d) = fVar25;
    param_1[0x7a] = param_1[100];
    param_1[0x78] = param_1[0x62];
    param_1[0x79] = param_1[99];
    *(undefined1 *)((longlong)param_1 + 0x399) = 0;
    *(undefined4 *)((longlong)param_1 + 0x39c) = 0;
    param_1[0x7b] = 0.0;
    param_1[0x7c] = 0.0;
    param_1[0x7d] = 0.0;
    dVar15 = param_1[0x6a];
    dVar40 = param_1[0x6b];
    dVar21 = *param_2;
    dVar41 = param_2[1];
    dVar17 = param_2[2];
    dVar30 = param_2[3];
    dVar34 = param_2[3];
    dVar32 = dVar40 * dVar21 - dVar15 * dVar41;
    dVar31 = param_1[0x6c] * dVar41 - dVar40 * dVar17;
    dVar22 = dVar15 * dVar17 - dVar21 * param_1[0x6c];
    dVar31 = dVar31 + dVar31;
    dVar22 = dVar22 + dVar22;
    dVar32 = dVar32 + dVar32;
    param_1[0x84] = (dVar32 * dVar41 - dVar22 * dVar17) + dVar30 * dVar31 + dVar15;
    param_1[0x85] = (dVar17 * dVar31 - dVar21 * dVar32) + dVar34 * dVar22 + dVar40;
    param_1[0x86] = dVar32 * dVar30 + param_1[0x6c] + (dVar22 * dVar21 - dVar31 * dVar41);
    *(undefined1 *)((longlong)param_1 + 0x3f9) = 0;
    *(undefined4 *)((longlong)param_1 + 0x3fc) = 0;
    param_1[0x89] = 0.0;
    param_1[0x87] = 0.0;
    param_1[0x88] = 0.0;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  dVar30 = param_2[0x32];
  dVar34 = 0.0;
  if ((dVar30 != 0.0) || (NAN(dVar30))) {
    dVar34 = (double)(float)(-param_2[0x30] / dVar30);
  }
  dVar40 = param_1[0x28];
  param_1[0x47] = dVar40;
  param_1[0x48] = param_1[0x29];
  dVar21 = dVar34 * dVar40 + (double)*(float *)(param_2 + 0x18);
  param_1[0x49] = dVar21;
  local_14c = *(float *)(param_1 + 0x43);
  dVar15 = (double)local_14c;
  local_158 = param_2[0x32] * dVar15;
  local_140 = param_2[0x31] * dVar15;
  dVar30 = param_2[0x30];
  param_1[0x4a] = dVar15 * dVar30;
  param_1[0x4b] = local_140;
  param_1[0x4c] = local_158;
  dVar34 = param_1[0x6c];
  if (9.99999993922529e-09 <= ABS(dVar34)) {
    dVar41 = param_1[0x6a];
    uVar38 = SUB84(dVar41,0);
    uVar39 = (undefined4)((ulonglong)dVar41 >> 0x20);
    dVar17 = param_1[0x6b];
    dVar40 = (double)(float)(((param_1[0x69] * dVar34 +
                              param_1[0x67] * dVar41 + param_1[0x68] * dVar17) -
                             (dVar21 * dVar34 + dVar40 * dVar41 + param_1[0x29] * dVar17)) / dVar34)
    ;
  }
  else {
    uVar38 = SUB84(param_1[0x6a],0);
    uVar39 = (undefined4)((ulonglong)param_1[0x6a] >> 0x20);
    dVar17 = param_1[0x6b];
    dVar40 = 0.0;
  }
  fVar14 = *(float *)(param_1 + 0x1f);
  if (1.0 <= fVar25) {
    dVar21 = param_2[0x30];
    dVar41 = param_2[0x31];
    dVar32 = param_2[0x32];
    dVar28 = dVar32 * dVar34 + dVar21 * (double)CONCAT44(uVar39,uVar38) + dVar17 * dVar41 + 1.0;
    dVar31 = (double)CONCAT44(uVar39,uVar38);
    dVar22 = dVar34;
    dVar27 = dVar17;
    if (dVar28 < 9.999999974752427e-07) {
      if ((ABS(dVar21) <= ABS(dVar41)) || (ABS(dVar21) <= ABS(dVar32))) {
        dVar28 = 0.0;
        dVar31 = -DAT_14c8463a0;
        dVar22 = -DAT_14c8463b0;
        dVar27 = -DAT_14c8463a8;
      }
      else {
        dVar28 = 0.0;
        dVar31 = DAT_14c846388;
        dVar22 = DAT_14c846398;
        dVar27 = DAT_14c846390;
      }
    }
    dVar33 = dVar21 * dVar27 - dVar31 * dVar41;
    dVar31 = dVar32 * dVar31 - dVar22 * dVar21;
    dVar32 = dVar41 * dVar22 - dVar27 * dVar32;
    dVar21 = dVar33 * dVar33 + dVar32 * dVar32;
    dVar41 = dVar28 * dVar28 + dVar31 * dVar31;
    auVar18._0_8_ = dVar21 + dVar41;
    auVar18._8_8_ = dVar21 + dVar41;
    auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar18._8_8_);
    auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_);
    auVar24 = sqrtpd(auVar18,auVar18);
    auVar24 = divpd(_DAT_149934d80,auVar24);
    auVar19._0_8_ = auVar24._0_8_ * dVar33;
    auVar19._8_8_ = auVar24._8_8_ * dVar28;
    dVar21 = (double)((ulonglong)(dVar32 * auVar24._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_));
    dVar41 = (double)((ulonglong)(dVar31 * auVar24._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar18._8_8_));
    auVar24 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar19,auVar29);
  }
  else {
    dVar21 = param_1[0x44];
    dVar41 = param_1[0x45];
    dVar32 = param_1[0x46];
    dVar22 = (double)((1.0 - fVar25) * *(float *)(param_1 + 0x20) * 0.017453292) * 0.5;
    dVar31 = sin(dVar22);
    local_148 = CONCAT44(uVar39,uVar38);
    dVar22 = cos(dVar22);
    dVar21 = dVar21 * dVar31;
    dVar41 = dVar41 * dVar31;
    auVar24._0_8_ = dVar32 * dVar31;
    uVar38 = (undefined4)local_148;
    uVar39 = (undefined4)((ulonglong)local_148 >> 0x20);
    auVar24._8_8_ = dVar22;
  }
  dVar32 = (double)(local_14c + fVar14);
  dVar15 = (0.0 - dVar15 * dVar30) + (double)CONCAT44(uVar39,uVar38) * dVar32;
  dVar17 = (0.0 - local_140) + dVar17 * dVar32;
  dVar30 = dVar34 * dVar32 + (dVar40 - local_158);
  *param_1 = dVar21;
  param_1[1] = dVar41;
  *(undefined1 (*) [16])(param_1 + 2) = auVar24;
  param_1[4] = dVar15;
  param_1[5] = dVar17;
  param_1[6] = dVar30;
  param_1[7] = 0.0;
  auVar20 = _DAT_149934d80;
  *(undefined1 (*) [16])(param_1 + 8) = _DAT_149934d80;
  param_1[10] = 1.0;
  param_1[0xb] = 0.0;
  fVar25 = *(float *)(param_1 + 0x6e);
  auVar12 = ZEXT816(0);
  if (0.0 < fVar25) {
    dVar34 = (param_1[0x2a] - param_1[0x4c]) - param_1[0x49];
    uVar6 = (uint)((ulonglong)dVar34 >> 0x20);
    auVar12._0_4_ =
         ((float)dVar34 - (*(float *)((longlong)param_1 + 0x36c) - fVar25)) / (fVar25 + fVar25);
    auVar12._4_4_ = uVar6;
    auVar12._8_8_ = 0;
    if (1.0 <= auVar12._0_4_) {
      auVar12._8_8_ = 0;
      auVar12._0_4_ = 1.0;
    }
    if (auVar12._0_4_ <= 0.0) {
      auVar8._12_4_ = 0;
      auVar8._0_12_ = auVar12._4_12_;
      auVar12 = auVar8 << 0x20;
    }
  }
  fVar25 = 1.0 - auVar12._0_4_;
  if (1e-08 <= fVar25) {
    if (fVar25 <= 1.0) {
      dVar34 = auVar24._8_8_ * DAT_14c8463e8 +
               DAT_14c8463e0 * auVar24._0_8_ + dVar41 * DAT_14c8463d8 + DAT_14c8463d0 * dVar21;
      dVar40 = dVar34 * (double)(&DAT_149931160)[0.0 <= dVar34];
      dVar32 = 1.0 - (double)fVar25;
      dVar34 = (double)(&DAT_149931160)[0.0 <= dVar34] * (double)fVar25;
      if (dVar40 < 0.9999) {
        dVar30 = dVar40;
        if (1.0 <= dVar40) {
          dVar30 = 1.0;
        }
        dVar30 = acos((double)(-(ulonglong)(dVar40 < -1.0) & 0xbff0000000000000 |
                              ~-(ulonglong)(dVar40 < -1.0) & (ulonglong)dVar30));
        dVar15 = sin(dVar30);
        dVar32 = sin(dVar32 * dVar30);
        dVar32 = dVar32 * (1.0 / dVar15);
        dVar34 = sin(dVar34 * dVar30);
        dVar34 = dVar34 * (1.0 / dVar15);
        dVar15 = param_1[4];
        dVar17 = param_1[5];
        dVar30 = param_1[6];
      }
      dVar31 = DAT_14c8463e8 * dVar32 + auVar24._8_8_ * dVar34;
      dVar40 = DAT_14c8463e0 * dVar32 + auVar24._0_8_ * dVar34;
      dVar41 = DAT_14c8463d8 * dVar32 + dVar41 * dVar34;
      dVar34 = DAT_14c8463d0 * dVar32 + dVar34 * dVar21;
      dVar21 = dVar40 * dVar40 + dVar34 * dVar34;
      dVar32 = dVar31 * dVar31 + dVar41 * dVar41;
      auVar23._0_8_ = dVar21 + dVar32;
      auVar23._8_8_ = dVar21 + dVar32;
      auVar13._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_);
      auVar13._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_);
      auVar24 = sqrtpd(auVar23,auVar23);
      auVar24 = divpd(auVar20,auVar24);
      auVar26._0_8_ = auVar24._0_8_ * dVar40;
      auVar26._8_8_ = auVar24._8_8_ * dVar31;
      dVar21 = (double)((ulonglong)(dVar34 * auVar24._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_));
      dVar41 = (double)((ulonglong)(dVar41 * auVar24._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_));
      auVar24 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar26,auVar13);
    }
  }
  else {
    auVar24._8_8_ = DAT_14c8463e8;
    auVar24._0_8_ = DAT_14c8463e0;
    dVar21 = DAT_14c8463d0;
    dVar41 = DAT_14c8463d8;
  }
  *param_1 = dVar21;
  param_1[1] = dVar41;
  *(undefined1 (*) [16])(param_1 + 2) = auVar24;
  dVar34 = auVar24._8_8_;
  dVar40 = param_1[0x24];
  dVar32 = param_1[0x25];
  dVar31 = param_1[0x26];
  dVar22 = param_1[0x27];
  dVar27 = auVar24._0_8_;
  param_1[0xc] = dVar32 * dVar27 * -1.0 + dVar31 * dVar41 + dVar21 * dVar22 * 1.0 + dVar34 * dVar40;
  param_1[0xd] = dVar40 * dVar27 * 1.0 + dVar22 * dVar41 + dVar21 * dVar31 * -1.0 + dVar34 * dVar32;
  param_1[0xe] = dVar22 * dVar27 * 1.0 +
                 ((dVar21 * dVar32 * 1.0 + dVar34 * dVar31) - dVar41 * dVar40);
  param_1[0xf] = dVar31 * dVar27 * -1.0 +
                 ((dVar21 * dVar40 * -1.0 + dVar34 * dVar22) - dVar41 * dVar32);
  param_1[0x10] = dVar15 + param_1[0x28];
  param_1[0x11] = dVar17 + param_1[0x29];
  param_1[0x12] = dVar30 + param_1[0x2a];
  param_1[0x13] = 0.0;
  *(undefined1 (*) [16])(param_1 + 0x14) = auVar20;
  param_1[0x16] = 1.0;
  param_1[0x17] = 0.0;
  if ((local_e0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cb695a FUN_143cb695a body=1213 status=ok
// SIG undefined FUN_143cb695a(void)

void FUN_143cb695a(longlong param_1,longlong param_2)

{
  uint uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  byte bVar27;
  longlong lVar28;
  longlong lVar29;
  longlong *plVar30;
  longlong lVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  undefined1 uVar34;
  longlong lVar35;
  undefined4 uVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((param_2 != 0) && (lVar28 = *(longlong *)(param_2 + 0x638), lVar28 != 0)) &&
     (lVar28 = (**(code **)(*(longlong *)(lVar28 + 0x1108) + 0x10))(lVar28 + 0x1108), lVar28 != 0))
  {
    *(byte *)(param_1 + 0x118) = ~*(byte *)(lVar28 + 0xe0) & *(char *)(lVar28 + 200) == '\x01';
    *(undefined1 *)(param_1 + 0x4dc) = *(undefined1 *)(lVar28 + 0xd8);
    local_a8 = *(undefined8 *)(param_1 + 0x514);
    uVar36 = *(undefined4 *)(lVar28 + 0x98);
    uVar10 = *(undefined4 *)(lVar28 + 0x9c);
    uVar11 = *(undefined4 *)(lVar28 + 0xa0);
    uVar12 = *(undefined4 *)(lVar28 + 0xa4);
    uVar13 = *(undefined8 *)(lVar28 + 0xa8);
    uVar14 = *(undefined8 *)(lVar28 + 0xb0);
    uVar15 = *(undefined8 *)(lVar28 + 0xb8);
    uVar16 = *(undefined8 *)(lVar28 + 0xc0);
    uVar17 = *(undefined4 *)(lVar28 + 0xcc);
    uVar18 = *(undefined4 *)(lVar28 + 0xd0);
    uVar19 = *(undefined4 *)(lVar28 + 0xd4);
    *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(lVar28 + 200);
    *(undefined4 *)(param_1 + 0x514) = uVar17;
    *(undefined4 *)(param_1 + 0x518) = uVar18;
    *(undefined4 *)(param_1 + 0x51c) = uVar19;
    *(undefined8 *)(param_1 + 0x500) = uVar15;
    *(undefined8 *)(param_1 + 0x508) = uVar16;
    *(undefined8 *)(param_1 + 0x4f0) = uVar13;
    *(undefined8 *)(param_1 + 0x4f8) = uVar14;
    *(undefined4 *)(param_1 + 0x4e0) = uVar36;
    *(undefined4 *)(param_1 + 0x4e4) = uVar10;
    *(undefined4 *)(param_1 + 0x4e8) = uVar11;
    *(undefined4 *)(param_1 + 0x4ec) = uVar12;
    if (((((*(int *)(param_1 + 0x518) == 0) || (uVar1 = *(uint *)(param_1 + 0x514), (int)uVar1 < 0))
         || ((DAT_14c9647dc <= (int)uVar1 ||
             ((plVar30 = (longlong *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
              plVar30 == (longlong *)0x0 || ((int)plVar30[2] != *(int *)(param_1 + 0x518))))))) ||
        ((*(uint *)(plVar30 + 1) & 0x10200000) != 0)) || (*plVar30 == 0)) {
      if (*(char *)(param_1 + 0x580) == '\x01') {
        *(undefined1 *)(param_1 + 0x580) = 0;
      }
      bVar27 = 0;
    }
    else {
      puVar32 = (undefined8 *)(*plVar30 + 0x240);
      if (puVar32 != (undefined8 *)(param_1 + 0x520)) {
        puVar33 = (undefined8 *)(param_1 + 0x520);
        for (lVar29 = 0xc; lVar29 != 0; lVar29 = lVar29 + -1) {
          *puVar33 = *puVar32;
          puVar32 = puVar32 + 1;
          puVar33 = puVar33 + 1;
        }
        *(undefined1 *)(param_1 + 0x580) = 1;
      }
      bVar27 = FUN_143cb6e18(&local_a8);
      bVar27 = bVar27 ^ 1;
    }
    *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(lVar28 + 0x60);
    uVar36 = 0;
    if (*(char *)(lVar28 + 0x108) == '\0') {
      uVar36 = 0x3f800000;
    }
    *(undefined4 *)(param_1 + 0x4d8) = uVar36;
    if ((longlong)*(int *)(param_1 + 0x140) != 0) {
      lVar29 = *(longlong *)(param_1 + 0x138);
      lVar31 = (longlong)*(int *)(param_1 + 0x140) * 0x4d0 + lVar29;
      do {
        if ((bVar27 != 0) &&
           (0.0001 < *(float *)(lVar29 + 0x494) || *(float *)(lVar29 + 0x494) == 0.0001)) {
          dVar4 = *(double *)(lVar29 + 0x4b0) - *(double *)(param_1 + 0x540);
          dVar5 = *(double *)(lVar29 + 0x4b8) - *(double *)(param_1 + 0x548);
          dVar2 = *(double *)(lVar29 + 0x4c0) - *(double *)(param_1 + 0x550);
          dVar6 = -*(double *)(param_1 + 0x520);
          dVar7 = -*(double *)(param_1 + 0x528);
          dVar37 = *(double *)(param_1 + 0x530) * -1.0;
          dVar38 = *(double *)(param_1 + 0x538) * 1.0;
          dVar39 = dVar4 * dVar37 - dVar6 * dVar2;
          dVar8 = dVar5 * dVar6 - dVar4 * dVar7;
          dVar9 = dVar2 * dVar7 - dVar5 * dVar37;
          dVar9 = dVar9 + dVar9;
          dVar39 = dVar39 + dVar39;
          dVar8 = dVar8 + dVar8;
          dVar5 = *(double *)(param_1 + 0x520) * dVar8 + dVar37 * dVar9 + dVar38 * dVar39 + dVar5;
          auVar3._8_4_ = SUB84(dVar5,0);
          auVar3._0_8_ = (dVar8 * dVar7 - dVar39 * dVar37) + dVar38 * dVar9 + dVar4;
          auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
          *(undefined1 (*) [16])(lVar29 + 0x498) = auVar3;
          *(double *)(lVar29 + 0x4a8) = dVar38 * dVar8 + dVar2 + (dVar39 * dVar6 - dVar9 * dVar7);
        }
        if (((-1 < *(int *)(lVar29 + 0xe0)) && (*(int *)(lVar29 + 0xe4) != -1)) &&
           ((longlong)*(int *)(lVar28 + 0x90) != 0)) {
          plVar30 = (longlong *)(*(longlong *)(lVar28 + 0x88) + 0x10);
          lVar35 = 0;
          do {
            if (*plVar30 == *(longlong *)(lVar29 + 0xd8)) {
              lVar35 = *(longlong *)(lVar28 + 0x88) - lVar35;
              if (lVar35 != 0) {
                if ((longlong *)(lVar35 + 0x68) != (longlong *)(lVar29 + 0x268)) {
                  if ((char)plVar30[0x13] == '\x01') {
                    lVar20 = plVar30[0xb];
                    lVar21 = plVar30[0xc];
                    lVar22 = plVar30[0xd];
                    lVar23 = plVar30[0xe];
                    lVar24 = plVar30[0xf];
                    lVar25 = plVar30[0x10];
                    lVar26 = plVar30[0x12];
                    *(longlong *)(lVar29 + 0x298) = plVar30[0x11];
                    *(longlong *)(lVar29 + 0x2a0) = lVar26;
                    *(longlong *)(lVar29 + 0x288) = lVar24;
                    *(longlong *)(lVar29 + 0x290) = lVar25;
                    *(longlong *)(lVar29 + 0x278) = lVar22;
                    *(longlong *)(lVar29 + 0x280) = lVar23;
                    *(longlong *)(lVar29 + 0x268) = lVar20;
                    *(longlong *)(lVar29 + 0x270) = lVar21;
                    uVar34 = 1;
                  }
                  else {
                    if (*(char *)(lVar29 + 0x2a8) != '\x01') goto LAB_143cb6d3e;
                    uVar34 = 0;
                  }
                  *(undefined1 *)(lVar29 + 0x2a8) = uVar34;
                }
LAB_143cb6d3e:
                if ((longlong *)(lVar35 + 0xb0) != (longlong *)(lVar29 + 0x2b0)) {
                  if ((char)plVar30[0x1c] == '\x01') {
                    lVar35 = plVar30[0x14];
                    lVar20 = plVar30[0x15];
                    lVar21 = plVar30[0x16];
                    lVar22 = plVar30[0x17];
                    lVar23 = plVar30[0x18];
                    lVar24 = plVar30[0x19];
                    lVar25 = plVar30[0x1b];
                    *(longlong *)(lVar29 + 0x2e0) = plVar30[0x1a];
                    *(longlong *)(lVar29 + 0x2e8) = lVar25;
                    *(longlong *)(lVar29 + 0x2d0) = lVar23;
                    *(longlong *)(lVar29 + 0x2d8) = lVar24;
                    *(longlong *)(lVar29 + 0x2c0) = lVar21;
                    *(longlong *)(lVar29 + 0x2c8) = lVar22;
                    *(longlong *)(lVar29 + 0x2b0) = lVar35;
                    *(longlong *)(lVar29 + 0x2b8) = lVar20;
                    uVar34 = 1;
                  }
                  else {
                    if (*(char *)(lVar29 + 0x2f0) != '\x01') goto LAB_143cb6da8;
                    uVar34 = 0;
                  }
                  *(undefined1 *)(lVar29 + 0x2f0) = uVar34;
                }
LAB_143cb6da8:
                *(undefined4 *)(lVar29 + 0x218) = *(undefined4 *)((longlong)plVar30 + 0x4c);
              }
              break;
            }
            plVar30 = plVar30 + 0x27;
            lVar35 = lVar35 + -0x138;
          } while ((longlong)*(int *)(lVar28 + 0x90) * -0x138 - lVar35 != 0);
        }
        lVar29 = lVar29 + 0x4d0;
      } while (lVar29 != lVar31);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cb6e18 FUN_143cb6e18 body=318 status=ok
// SIG undefined FUN_143cb6e18(void)

bool FUN_143cb6e18(uint *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  if (param_2 == 0) {
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 0xc);
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar3 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar6 + 0x10);
      bVar7 = uVar3 == 0;
      if (bVar7) {
        *(uint *)(lVar6 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar3 = uVar5;
      }
    }
  }
  uVar5 = *param_1;
  uVar1 = param_1[1];
  bVar7 = true;
  if ((uVar5 != uVar4) || (uVar1 != uVar3)) {
    if ((uVar1 == 0) ||
       (((((int)uVar5 < 0 || (DAT_14c9647dc <= (int)uVar5)) ||
         (lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar6 == 0)) ||
        ((*(uint *)(lVar6 + 0x10) != uVar1 || ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)))))) {
      if ((uVar3 != 0) &&
         (((-1 < (int)uVar4 && ((int)uVar4 < DAT_14c9647dc)) &&
          ((lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar6 != 0 &&
           (*(uint *)(lVar6 + 0x10) == uVar3)))))) {
        bVar7 = (*(uint *)(lVar6 + 8) & 0x10200000) != 0;
      }
    }
    else {
      bVar7 = false;
    }
  }
  return bVar7;
}



// FUNCTION 143cb6f56 FUN_143cb6f56 body=1297 status=ok
// SIG undefined FUN_143cb6f56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cb6f56(longlong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined1 auVar15 [16];
  ulonglong uVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined4 uVar21;
  undefined1 auVar20 [16];
  float fVar22;
  undefined1 auVar23 [12];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar28 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar29 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar30 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  longlong lVar34;
  undefined1 auVar35 [16];
  longlong lVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar45 [16];
  
  if (*(longlong *)(param_1 + 0x110) == 0) {
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  else {
    if (*(char *)(param_1 + 0x118) == '\0') {
      auVar23 = ZEXT812(0);
    }
    else {
      auVar23 = ZEXT812(0x3f800000);
    }
    auVar25._0_4_ = auVar23._0_4_ - *(float *)(param_1 + 0x11c);
    auVar25._4_8_ = auVar23._4_8_;
    auVar25._12_4_ = 0;
    auVar14._4_8_ = 0;
    auVar14._0_4_ = auVar23._8_4_;
    auVar26._0_4_ = auVar25._0_4_ * auVar25._0_4_;
    auVar26._4_8_ = SUB128(auVar14 << 0x40,4);
    auVar26._12_4_ = 0;
    auVar27._0_12_ = ZEXT812(0x322bcc77);
    auVar27._12_4_ = 0;
    if (1e-08 <= auVar26._0_4_) {
      fVar22 = *(float *)(param_2 + 0x28) * *(float *)(param_1 + 0x120);
      auVar26._0_4_ = -fVar22;
      auVar26._4_4_ = 0x80000000;
      auVar26._8_4_ = 0x80000000;
      auVar26._12_4_ = 0x80000000;
      if (fVar22 <= auVar25._0_4_) {
        auVar25._0_4_ = fVar22;
        auVar25._12_4_ = 0;
      }
      if (auVar25._0_4_ <= auVar26._0_4_) {
        auVar25._0_4_ = auVar26._0_4_;
      }
      auVar23._4_8_ = 0;
      auVar23._0_4_ = *(float *)(param_1 + 0x11c) + auVar25._0_4_;
    }
    *(float *)(param_1 + 0x11c) = auVar23._0_4_;
    auVar15 = _DAT_149931e80;
    auVar24._0_4_ = auVar23._0_4_ * *(float *)(param_1 + 0x2c);
    auVar24._4_8_ = auVar23._4_8_;
    auVar24._12_4_ = 0;
    if (auVar24._0_4_ <= 1e-05) {
      if ((longlong)*(int *)(param_1 + 0x140) != 0) {
        uVar16 = (longlong)*(int *)(param_1 + 0x140) * 0x4d0 - 0x4d0;
        auVar28._8_8_ = 0;
        auVar28._0_8_ = uVar16;
        uVar19 = SUB164(auVar28 * ZEXT816(0x6a63bd81a98ef607),8);
        uVar21 = (undefined4)(uVar16 / 0x268000000);
        auVar29._0_8_ = CONCAT44(uVar21,uVar19);
        auVar29._8_4_ = uVar19;
        auVar29._12_4_ = uVar21;
        auVar20._0_8_ = auVar29._0_8_ >> 9;
        auVar20._8_8_ = auVar29._8_8_ >> 9;
        puVar17 = (undefined1 *)(*(longlong *)(param_1 + 0x138) + 0x48f0);
        uVar18 = 0;
        auVar24 = pmovsxbq(auVar24,0xf0e);
        auVar25 = pmovsxbq(auVar25,0xd0c);
        auVar26 = pmovsxbq(auVar26,0xb0a);
        auVar27 = pmovsxbq(auVar27,0x908);
        auVar28 = pmovsxbq(in_XMM5,0x706);
        auVar29 = pmovsxbq(unaff_XMM6,0x504);
        auVar30 = pmovsxbq(unaff_XMM7,0x302);
        auVar31 = pmovsxbq(unaff_XMM8,0x100);
        do {
          auVar32._8_4_ = (int)uVar18;
          auVar32._0_8_ = uVar18;
          auVar32._12_4_ = (int)(uVar18 >> 0x20);
          auVar35 = auVar20 | auVar15;
          auVar37 = (auVar32 | auVar31) ^ auVar15;
          lVar34 = auVar35._0_8_;
          auVar38._0_8_ = -(ulonglong)(lVar34 < auVar37._0_8_);
          lVar36 = auVar35._8_8_;
          auVar38._8_8_ = -(ulonglong)(lVar36 < auVar37._8_8_);
          auVar45 = pshuflw(unaff_XMM14,auVar38,0xe8);
          auVar37._8_4_ = 0xffffffff;
          auVar37._0_8_ = 0xffffffffffffffff;
          auVar37._12_4_ = 0xffffffff;
          auVar37 = packssdw(auVar45 ^ auVar37,auVar45 ^ auVar37);
          if ((auVar37._0_4_ & 1) != 0) {
            puVar17[-0x4830] = 0;
          }
          auVar38 = packssdw(auVar38,auVar38);
          auVar45._8_4_ = 0xffffffff;
          auVar45._0_8_ = 0xffffffffffffffff;
          auVar45._12_4_ = 0xffffffff;
          auVar38 = packssdw(auVar38 ^ auVar45,auVar38 ^ auVar45);
          auVar38 = packsswb(auVar38,auVar38);
          if ((auVar38[1] & 1) != 0) {
            puVar17[-0x4360] = 0;
          }
          auVar38 = (auVar32 | auVar30) ^ auVar15;
          auVar39._0_8_ = -(ulonglong)(lVar34 < auVar38._0_8_);
          auVar39._8_8_ = -(ulonglong)(lVar36 < auVar38._8_8_);
          auVar37 = packssdw(auVar37,auVar39);
          auVar1._8_4_ = 0xffffffff;
          auVar1._0_8_ = 0xffffffffffffffff;
          auVar1._12_4_ = 0xffffffff;
          auVar37 = packssdw(auVar37 ^ auVar1,auVar37 ^ auVar1);
          auVar37 = packsswb(auVar37,auVar37);
          if ((auVar37[2] & 1) != 0) {
            puVar17[-0x3e90] = 0;
          }
          auVar38 = pshufhw(auVar39,auVar39,0x84);
          auVar2._8_4_ = 0xffffffff;
          auVar2._0_8_ = 0xffffffffffffffff;
          auVar2._12_4_ = 0xffffffff;
          auVar38 = packssdw(auVar38 ^ auVar2,auVar38 ^ auVar2);
          auVar38 = packsswb(auVar38,auVar38);
          if ((auVar38[3] & 1) != 0) {
            puVar17[-0x39c0] = 0;
          }
          auVar38 = (auVar32 | auVar29) ^ auVar15;
          auVar40._0_8_ = -(ulonglong)(lVar34 < auVar38._0_8_);
          auVar40._8_8_ = -(ulonglong)(lVar36 < auVar38._8_8_);
          auVar37 = pshuflw(auVar37,auVar40,0xe8);
          auVar3._8_4_ = 0xffffffff;
          auVar3._0_8_ = 0xffffffffffffffff;
          auVar3._12_4_ = 0xffffffff;
          auVar37 = packssdw(auVar37 ^ auVar3,auVar37 ^ auVar3);
          auVar37 = packsswb(auVar37,auVar37);
          if ((auVar37[4] & 1) != 0) {
            puVar17[-0x34f0] = 0;
          }
          auVar38 = packssdw(auVar40,auVar40);
          auVar4._8_4_ = 0xffffffff;
          auVar4._0_8_ = 0xffffffffffffffff;
          auVar4._12_4_ = 0xffffffff;
          auVar38 = packssdw(auVar38 ^ auVar4,auVar38 ^ auVar4);
          auVar38 = packsswb(auVar38,auVar38);
          if ((auVar38[5] & 1) != 0) {
            puVar17[-0x3020] = 0;
          }
          auVar38 = (auVar32 | auVar28) ^ auVar15;
          auVar41._0_8_ = -(ulonglong)(lVar34 < auVar38._0_8_);
          auVar41._8_8_ = -(ulonglong)(lVar36 < auVar38._8_8_);
          auVar37 = packssdw(auVar37,auVar41);
          auVar5._8_4_ = 0xffffffff;
          auVar5._0_8_ = 0xffffffffffffffff;
          auVar5._12_4_ = 0xffffffff;
          auVar37 = packssdw(auVar37 ^ auVar5,auVar37 ^ auVar5);
          auVar37 = packsswb(auVar37,auVar37);
          if ((auVar37[6] & 1) != 0) {
            puVar17[-0x2b50] = 0;
          }
          auVar38 = pshufhw(auVar41,auVar41,0x84);
          auVar6._8_4_ = 0xffffffff;
          auVar6._0_8_ = 0xffffffffffffffff;
          auVar6._12_4_ = 0xffffffff;
          auVar38 = packssdw(auVar38 ^ auVar6,auVar38 ^ auVar6);
          auVar38 = packsswb(auVar38,auVar38);
          if ((auVar38[7] & 1) != 0) {
            puVar17[-0x2680] = 0;
          }
          auVar38 = (auVar32 | auVar27) ^ auVar15;
          auVar42._0_8_ = -(ulonglong)(lVar34 < auVar38._0_8_);
          auVar42._8_8_ = -(ulonglong)(lVar36 < auVar38._8_8_);
          auVar37 = pshuflw(auVar37,auVar42,0xe8);
          auVar7._8_4_ = 0xffffffff;
          auVar7._0_8_ = 0xffffffffffffffff;
          auVar7._12_4_ = 0xffffffff;
          auVar37 = packssdw(auVar37 ^ auVar7,auVar37 ^ auVar7);
          auVar37 = packsswb(auVar37,auVar37);
          if ((auVar37[8] & 1) != 0) {
            puVar17[-0x21b0] = 0;
          }
          auVar38 = packssdw(auVar42,auVar42);
          auVar8._8_4_ = 0xffffffff;
          auVar8._0_8_ = 0xffffffffffffffff;
          auVar8._12_4_ = 0xffffffff;
          auVar38 = packssdw(auVar38 ^ auVar8,auVar38 ^ auVar8);
          auVar38 = packsswb(auVar38,auVar38);
          if ((auVar38[9] & 1) != 0) {
            puVar17[-0x1ce0] = 0;
          }
          auVar38 = (auVar32 | auVar26) ^ auVar15;
          auVar43._0_8_ = -(ulonglong)(lVar34 < auVar38._0_8_);
          auVar43._8_8_ = -(ulonglong)(lVar36 < auVar38._8_8_);
          auVar37 = packssdw(auVar37,auVar43);
          auVar9._8_4_ = 0xffffffff;
          auVar9._0_8_ = 0xffffffffffffffff;
          auVar9._12_4_ = 0xffffffff;
          auVar37 = packssdw(auVar37 ^ auVar9,auVar37 ^ auVar9);
          auVar37 = packsswb(auVar37,auVar37);
          if ((auVar37[10] & 1) != 0) {
            puVar17[-0x1810] = 0;
          }
          auVar38 = pshufhw(auVar43,auVar43,0x84);
          auVar10._8_4_ = 0xffffffff;
          auVar10._0_8_ = 0xffffffffffffffff;
          auVar10._12_4_ = 0xffffffff;
          auVar38 = packssdw(auVar38 ^ auVar10,auVar38 ^ auVar10);
          auVar38 = packsswb(auVar38,auVar38);
          if ((auVar38[0xb] & 1) != 0) {
            puVar17[-0x1340] = 0;
          }
          auVar38 = (auVar32 | auVar25) ^ auVar15;
          auVar44._0_8_ = -(ulonglong)(lVar34 < auVar38._0_8_);
          auVar44._8_8_ = -(ulonglong)(lVar36 < auVar38._8_8_);
          auVar37 = pshuflw(auVar37,auVar44,0xe8);
          auVar11._8_4_ = 0xffffffff;
          auVar11._0_8_ = 0xffffffffffffffff;
          auVar11._12_4_ = 0xffffffff;
          auVar37 = packssdw(auVar37 ^ auVar11,auVar37 ^ auVar11);
          unaff_XMM14 = packsswb(auVar37,auVar37);
          if ((unaff_XMM14[0xc] & 1) != 0) {
            puVar17[-0xe70] = 0;
          }
          auVar37 = packssdw(auVar44,auVar44);
          auVar12._8_4_ = 0xffffffff;
          auVar12._0_8_ = 0xffffffffffffffff;
          auVar12._12_4_ = 0xffffffff;
          auVar37 = packssdw(auVar37 ^ auVar12,auVar37 ^ auVar12);
          auVar37 = packsswb(auVar37,auVar37);
          if ((auVar37[0xd] & 1) != 0) {
            puVar17[-0x9a0] = 0;
          }
          auVar37 = (auVar32 | auVar24) ^ auVar15;
          auVar33._0_8_ = -(ulonglong)(lVar34 < auVar37._0_8_);
          auVar33._8_8_ = -(ulonglong)(lVar36 < auVar37._8_8_);
          auVar37 = packssdw(auVar35,auVar33);
          auVar35._8_4_ = 0xffffffff;
          auVar35._0_8_ = 0xffffffffffffffff;
          auVar35._12_4_ = 0xffffffff;
          auVar37 = packssdw(auVar37 ^ auVar35,auVar37 ^ auVar35);
          auVar37 = packsswb(auVar37,auVar37);
          if ((auVar37[0xe] & 1) != 0) {
            puVar17[-0x4d0] = 0;
          }
          auVar37 = pshufhw(auVar33,auVar33,0x84);
          auVar13._8_4_ = 0xffffffff;
          auVar13._0_8_ = 0xffffffffffffffff;
          auVar13._12_4_ = 0xffffffff;
          auVar37 = packssdw(auVar37 ^ auVar13,auVar37 ^ auVar13);
          auVar37 = packsswb(auVar37,auVar37);
          if ((auVar37[0xf] & 1) != 0) {
            *puVar17 = 0;
          }
          uVar18 = uVar18 + 0x10;
          puVar17 = puVar17 + 0x4d00;
        } while ((uVar16 / 0x4d0 + 0x10 & 0xfffffffffffffff0) != uVar18);
      }
      *(undefined1 *)(param_1 + 0x210) = 0;
    }
  }
  return;
}



// FUNCTION 143cb7468 FUN_143cb7468 body=338 status=ok
// SIG undefined FUN_143cb7468(void)

void FUN_143cb7468(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(longlong *)(param_1 + 0x110) != 0) && (1e-05 < *(float *)(param_1 + 0x11c))) &&
     (*(int *)(param_1 + 0x100) == *(int *)(param_1 + 0x140))) {
    FUN_14186b5e0(param_1);
    FUN_144a30d46(param_1,param_2);
    if ((longlong)*(int *)(param_1 + 0x140) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x138);
      lVar1 = (longlong)*(int *)(param_1 + 0x140) * 0x4d0;
      do {
        if ((-1 < *(int *)(lVar2 + 0xe0)) && (*(int *)(lVar2 + 0xe4) != -1)) {
          FUN_143cb4898(lVar2,param_1 + 0x410);
        }
        lVar2 = lVar2 + 0x4d0;
        lVar1 = lVar1 + -0x4d0;
      } while (lVar1 != 0);
    }
    FUN_14082df5c(param_1,param_2);
    FUN_1403d6874(param_1,param_2);
    FUN_143293ee6(param_1,param_2,param_3);
    if (*(int *)(param_3 + 1) != 0) {
      local_48 = *param_3;
      local_40 = *(int *)(param_3 + 1);
      FUN_1447d4b66(param_2 + 0x20,&local_48,
                    *(float *)(param_1 + 0x2c) * *(float *)(param_1 + 0x11c) *
                    *(float *)(param_1 + 0x5a8));
      *(undefined4 *)(param_3 + 1) = 0;
      if (*(int *)((longlong)param_3 + 0xc) < 0) {
        FUN_1403d6c30(param_3,0);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cb75bc FUN_143cb75bc body=162 status=ok
// SIG undefined FUN_143cb75bc(void)

undefined8 FUN_143cb75bc(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar6 * 0x28);
        if (*plVar4 == lVar1) goto LAB_143cb7638;
        iVar6 = (int)plVar4[4];
      } while (iVar6 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_143cb7638:
  plVar3 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 != (longlong *)0x0) {
    param_3[2] = plVar3[2];
    lVar1 = plVar3[1];
    *param_3 = *plVar3;
    param_3[1] = lVar1;
  }
  return CONCAT71((int7)((ulonglong)plVar3 >> 8),plVar3 != (longlong *)0x0);
}



// FUNCTION 143cb76b6 FUN_143cb76b6 body=769 status=ok
// SIG undefined FUN_143cb76b6(void)

void FUN_143cb76b6(undefined8 *param_1,double *param_2,double *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar7 = *param_3;
  dVar3 = param_3[1];
  dVar5 = param_3[2];
  if (((9.999999747378752e-05 < ABS(dVar7)) || (9.999999747378752e-05 < ABS(dVar3))) ||
     (9.999999747378752e-05 < ABS(dVar5))) {
    dVar2 = dVar5 * dVar5 + dVar7 * dVar7 + dVar3 * dVar3;
    if (((dVar2 != 1.0) || (dVar6 = dVar3, dVar8 = dVar7, dVar4 = dVar5, NAN(dVar2))) &&
       (dVar6 = DAT_14c8464e8, dVar8 = DAT_14c8464e0, dVar4 = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar2)) {
      dVar2 = 1.0 / SQRT(dVar2);
      dVar6 = dVar3 * dVar2;
      dVar8 = dVar7 * dVar2;
      dVar4 = dVar5 * dVar2;
    }
    pdVar1 = (double *)*param_1;
    dVar7 = dVar8 * pdVar1[1] - *pdVar1 * dVar6;
    dVar3 = dVar4 * *pdVar1 - pdVar1[2] * dVar8;
    dVar5 = pdVar1[2] * dVar6 - pdVar1[1] * dVar4;
    if (((9.999999747378752e-05 < ABS(dVar5)) || (9.999999747378752e-05 < ABS(dVar3))) ||
       (9.999999747378752e-05 < ABS(dVar7))) {
      dVar2 = dVar5 * dVar6 - dVar8 * dVar3;
      dVar5 = dVar7 * dVar8 - dVar4 * dVar5;
      dVar4 = dVar3 * dVar4 - dVar6 * dVar7;
      dVar7 = dVar2 * dVar2 + dVar4 * dVar4 + dVar5 * dVar5;
      if ((dVar7 != 1.0) || (dVar6 = dVar4, dVar8 = dVar2, dVar3 = dVar5, NAN(dVar7))) {
LAB_143cb792f:
        dVar6 = DAT_14c8464e0;
        dVar8 = DAT_14c8464f0;
        dVar3 = DAT_14c8464e8;
        if (9.99999993922529e-09 <= dVar7) {
          dVar7 = 1.0 / SQRT(dVar7);
          dVar6 = dVar4 * dVar7;
          dVar8 = dVar2 * dVar7;
          dVar3 = dVar5 * dVar7;
        }
      }
      dVar2 = dVar8;
      dVar4 = dVar6;
      if (dVar2 < 0.0) {
        dVar2 = -dVar2;
        dVar3 = -dVar3;
        dVar4 = -dVar4;
      }
    }
    else {
      if (0.999845027923584 <=
          ABS(DAT_14c8462d0 * dVar4 + DAT_14c8462c0 * dVar8 + DAT_14c8462c8 * dVar6))
      goto LAB_143cb7726;
      dVar2 = dVar8 * dVar8 + dVar6 * dVar6;
      dVar5 = -dVar6 * dVar4;
      dVar4 = -dVar8 * dVar4;
      dVar7 = dVar2 * dVar2 + dVar4 * dVar4 + dVar5 * dVar5;
      if ((dVar7 != 1.0) || (dVar3 = dVar5, NAN(dVar7))) goto LAB_143cb792f;
    }
    *param_2 = dVar4;
    param_2[1] = dVar3;
    param_2[2] = dVar2;
  }
  else {
LAB_143cb7726:
    param_2[2] = DAT_14c8462d0;
    dVar7 = DAT_14c8462c8;
    *param_2 = DAT_14c8462c0;
    param_2[1] = dVar7;
  }
  return;
}



// FUNCTION 143cb79b7 FUN_143cb79b7 body=69 status=ok
// SIG undefined FUN_143cb79b7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cb79b7(void)

{
  _DAT_14cb72138 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143cb79f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb72140,1);
  return;
}



// FUNCTION 143cb7aa8 FUN_143cb7aa8 body=1612 status=ok
// SIG undefined FUN_143cb7aa8(void)

void FUN_143cb7aa8(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  double *pdVar2;
  double dVar3;
  double dVar5;
  double dVar7;
  double dVar9;
  double dVar11;
  int iVar13;
  int iVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  byte bVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  int *piVar30;
  undefined8 *puVar31;
  longlong lVar32;
  double dVar33;
  double dVar34;
  undefined1 auStack_238 [32];
  undefined4 local_218;
  undefined4 local_210;
  double *local_208;
  longlong local_200;
  longlong local_1f8;
  longlong *local_1f0;
  undefined4 *local_1e8;
  undefined8 *local_1e0;
  undefined4 *local_1d8;
  undefined4 *local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  int local_168;
  undefined4 local_164;
  byte local_160;
  undefined4 local_15c;
  char local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  char local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_108;
  double dStack_100;
  char local_f8;
  ulonglong local_e0;
  double dVar4;
  double dVar6;
  double dVar8;
  double dVar10;
  double dVar12;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1f8 = param_2;
  if ((*(char *)(param_1 + 0x150) == '\x01') &&
     (lVar32 = *(longlong *)(param_1 + 0x108), lVar32 != 0)) {
    lVar29 = (longlong)*(int *)(param_1 + 0xf0);
    if (lVar29 != -1) {
      dVar16 = *(double *)(lVar32 + 0x20) * -1.0;
      dVar17 = *(double *)(lVar32 + 0x28) * 1.0;
      dVar18 = *(double *)(param_1 + 0x130);
      dVar19 = *(double *)(param_1 + 0x138);
      dVar20 = *(double *)(param_1 + 0x140);
      dVar21 = *(double *)(param_1 + 0x148);
      dVar3 = *(double *)(lVar32 + 0x10);
      dVar4 = *(double *)(lVar32 + 0x10);
      dVar5 = *(double *)(lVar32 + 0x18);
      dVar6 = *(double *)(lVar32 + 0x18);
      plVar1 = (longlong *)(param_2 + 0x20);
      if (*(char *)(*(longlong *)(param_2 + 0x38) + lVar29) == '\0') {
        FUN_1447d5d8e(plVar1,*(int *)(param_1 + 0xf0));
      }
      lVar32 = *plVar1;
      lVar29 = lVar29 * 0x60;
      lVar28 = (longlong)*(char *)(param_1 + 0xf5) * 0xc0;
      pdVar2 = (double *)(&DAT_14cadc270 + lVar28 + (longlong)*(char *)(param_1 + 0xf4) * 0x480);
      dVar22 = *pdVar2;
      dVar23 = pdVar2[1];
      pdVar2 = (double *)
               (&DAT_14cadc270 + lVar28 + 0x10 + (longlong)*(char *)(param_1 + 0xf4) * 0x480);
      dVar24 = *pdVar2;
      dVar25 = pdVar2[1];
      pdVar2 = (double *)(lVar32 + 0x18 + lVar29);
      dVar7 = *pdVar2;
      dVar8 = *pdVar2;
      pdVar2 = (double *)(lVar32 + 8 + lVar29);
      dVar9 = *pdVar2;
      dVar10 = *pdVar2;
      dVar11 = *(double *)(lVar32 + lVar29);
      dVar12 = *(double *)(lVar32 + lVar29);
      pdVar2 = (double *)(lVar32 + 0x10 + lVar29);
      dVar33 = *pdVar2;
      dVar34 = *pdVar2;
      local_188 = dVar23 * dVar33 * -1.0 + dVar24 * dVar9 + dVar11 * dVar25 * 1.0 + dVar7 * dVar22;
      dStack_180 = dVar22 * dVar34 * 1.0 + dVar25 * dVar10 + dVar12 * dVar24 * -1.0 + dVar8 * dVar23
      ;
      local_178 = dVar25 * dVar33 * 1.0 +
                  ((dVar11 * dVar23 * 1.0 + dVar7 * dVar24) - dVar9 * dVar22);
      dStack_170 = dVar24 * dVar34 * -1.0 +
                   ((dVar12 * dVar22 * -1.0 + dVar8 * dVar25) - dVar10 * dVar23);
      if ((longlong)*(int *)(param_1 + 0x100) != 0) {
        dVar7 = dVar18 * dVar16 * 1.0 + ((dVar19 * dVar17 - dVar4 * dVar20 * -1.0) - dVar21 * dVar6)
        ;
        dVar4 = dVar20 * dVar16 * -1.0 + dVar6 * dVar19 + (dVar17 * dVar21 - dVar4 * dVar18 * -1.0);
        local_1d0 = (undefined4 *)(param_1 + 0x130);
        lVar32 = *(longlong *)(param_1 + 0xf8);
        local_1e0 = (undefined8 *)(param_1 + 0x178);
        local_1d8 = (undefined4 *)(param_1 + 0x198);
        local_1e8 = (undefined4 *)(param_1 + 0x1b0);
        lVar29 = (longlong)*(int *)(param_1 + 0x100) * 0x24;
        local_1f0 = param_3;
        do {
          iVar13 = *(int *)(lVar32 + 0xc);
          lVar28 = (longlong)iVar13;
          if (lVar28 != -1) {
            iVar14 = *(int *)(*(longlong *)(*(longlong *)(local_1f8 + 0x30) + 0x90) + lVar28 * 4);
            if (*(char *)(*(longlong *)(local_1f8 + 0x38) + (longlong)iVar14) == '\0') {
              FUN_1447d5d8e(plVar1,iVar14);
            }
            lVar15 = *plVar1;
            if ((*(char *)(param_1 + 0xe0) == '\x01') && (*(char *)(param_1 + 0x168) == '\x01')) {
              bVar26 = 1;
              lVar27 = lVar15;
              if (*(char *)(*(longlong *)(local_1f8 + 0x38) + lVar28) == '\0') {
                FUN_1447d5d8e(plVar1,iVar13);
                lVar27 = *plVar1;
                bVar26 = *(byte *)(param_1 + 0x168);
                param_3 = local_1f0;
              }
              puVar31 = (undefined8 *)(lVar27 + 0x20 + lVar28 * 0x60);
              local_1c8 = *puVar31;
              uStack_1c0 = puVar31[1];
              local_1b8 = *(undefined8 *)(lVar27 + 0x30 + lVar28 * 0x60);
              local_168 = *(int *)(param_1 + 0x160);
              if ((bVar26 & 1) != 0) {
                local_164 = *(undefined4 *)(param_1 + 0x164);
              }
              local_158 = *(char *)(param_1 + 0x170);
              if (local_158 == '\x01') {
                local_15c = *(undefined4 *)(param_1 + 0x16c);
              }
              local_138 = *(char *)(param_1 + 400);
              if (local_138 == '\x01') {
                local_140 = local_1e0[2];
                local_150 = *local_1e0;
                uStack_148 = local_1e0[1];
              }
              local_120 = *(undefined8 *)(local_1d8 + 4);
              local_130 = *local_1d8;
              uStack_12c = local_1d8[1];
              uStack_128 = local_1d8[2];
              uStack_124 = local_1d8[3];
              local_f8 = *(char *)(param_1 + 0x1d0);
              if (local_f8 == '\x01') {
                local_118 = *local_1e8;
                uStack_114 = local_1e8[1];
                uStack_110 = local_1e8[2];
                uStack_10c = local_1e8[3];
                local_108 = *(double *)(local_1e8 + 4);
                dStack_100 = *(double *)(local_1e8 + 6);
              }
              if (&local_118 != local_1d0) {
                local_118 = *local_1d0;
                uStack_114 = local_1d0[1];
                uStack_110 = local_1d0[2];
                uStack_10c = local_1d0[3];
                local_108 = *(double *)(local_1d0 + 4);
                dStack_100 = *(double *)(local_1d0 + 6);
                local_f8 = '\x01';
              }
              local_160 = bVar26;
              FUN_1400b8b40(&local_168,&local_1c8);
              lVar28 = *(longlong *)(param_1 + 0x108);
              dVar33 = *(double *)(lVar28 + 0x20) * -1.0;
              dVar34 = *(double *)(lVar28 + 0x28) * 1.0;
              dVar11 = (double)CONCAT44(uStack_114,local_118);
              dVar12 = (double)CONCAT44(uStack_10c,uStack_110);
              dVar6 = *(double *)(lVar28 + 0x18);
              dVar8 = *(double *)(lVar28 + 0x18);
              dVar9 = *(double *)(lVar28 + 0x10);
              dVar10 = *(double *)(lVar28 + 0x10);
              local_1a8._8_8_ =
                   dVar11 * dVar33 * 1.0 +
                   ((dVar12 * dVar34 - dVar10 * local_108 * -1.0) - dStack_100 * dVar8);
              local_1a8._0_8_ =
                   dVar12 * dVar33 * -1.0 +
                   ((dVar11 * dVar34 - dVar9 * dStack_100 * 1.0) - local_108 * dVar6);
              local_198._8_8_ =
                   local_108 * dVar33 * -1.0 +
                   dVar8 * dVar12 + (dVar34 * dStack_100 - dVar10 * dVar11 * -1.0);
              local_198._0_8_ =
                   dStack_100 * dVar33 * 1.0 +
                   dVar6 * dVar11 + (dVar34 * local_108 - dVar9 * dVar12 * 1.0);
            }
            else {
              local_1a8._8_4_ = SUB84(dVar7,0);
              local_1a8._0_8_ =
                   dVar19 * dVar16 * -1.0 +
                   ((dVar18 * dVar17 - dVar3 * dVar21 * 1.0) - dVar20 * dVar5);
              local_1a8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
              local_198._8_4_ = SUB84(dVar4,0);
              local_198._0_8_ =
                   dVar21 * dVar16 * 1.0 + dVar5 * dVar18 + (dVar17 * dVar20 - dVar3 * dVar19 * 1.0)
              ;
              local_198._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
            }
            local_200 = lVar15 + (longlong)iVar14 * 0x60;
            local_208 = &local_188;
            local_210 = 0x3f800000;
            local_218 = 0x3f800000;
            FUN_1407dbdda(lVar32,&local_168,local_1f8,local_1a8);
            if (local_168 != -1) {
              iVar13 = (int)param_3[1];
              *(uint *)(param_3 + 1) = iVar13 + 1U;
              if (*(uint *)((longlong)param_3 + 0xc) < iVar13 + 1U) {
                FUN_1400c28ea(param_3,iVar13);
              }
              piVar30 = &local_168;
              puVar31 = (undefined8 *)((longlong)iVar13 * 0x70 + *param_3);
              for (lVar28 = 0xe; lVar28 != 0; lVar28 = lVar28 + -1) {
                *puVar31 = *(undefined8 *)piVar30;
                piVar30 = piVar30 + 2;
                puVar31 = puVar31 + 1;
              }
            }
          }
          lVar32 = lVar32 + 0x24;
          lVar29 = lVar29 + -0x24;
        } while (lVar29 != 0);
      }
      FUN_1449449dd(*param_3,(int)param_3[1]);
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cb80f6 FUN_143cb80f6 body=385 status=ok
// SIG undefined FUN_143cb80f6(void)

void FUN_143cb80f6(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  double dVar1;
  double dVar3;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  double local_88;
  double dStack_80;
  undefined1 local_78 [16];
  ulonglong local_60;
  double dVar2;
  double dVar4;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = *(longlong *)(param_1 + 0x108);
  if ((lVar5 != 0) && (*(char *)(param_1 + 0x120) == '\x01')) {
    dVar11 = *(double *)(lVar5 + 0x20) * -1.0;
    dVar12 = *(double *)(lVar5 + 0x28) * 1.0;
    dVar6 = *(double *)(param_1 + 0x130);
    dVar7 = *(double *)(param_1 + 0x138);
    dVar8 = *(double *)(param_1 + 0x140);
    dVar9 = *(double *)(param_1 + 0x148);
    dVar1 = *(double *)(lVar5 + 0x18);
    dVar2 = *(double *)(lVar5 + 0x18);
    dVar10 = dVar8 * dVar1;
    dVar3 = *(double *)(lVar5 + 0x10);
    dVar4 = *(double *)(lVar5 + 0x10);
    local_88 = dVar7 * dVar11 * -1.0 + ((dVar12 * dVar6 - dVar3 * dVar9 * 1.0) - dVar10);
    dStack_80 = dVar6 * dVar11 * 1.0 + ((dVar12 * dVar7 - dVar4 * dVar8 * -1.0) - dVar9 * dVar2);
    dVar2 = dVar8 * dVar11 * -1.0 + dVar2 * dVar7 + (dVar12 * dVar9 - dVar4 * dVar6 * -1.0);
    local_78._8_4_ = SUB84(dVar2,0);
    local_78._0_8_ = dVar9 * dVar11 * 1.0 + dVar1 * dVar6 + (dVar12 * dVar8 - dVar3 * dVar7 * 1.0);
    local_78._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    local_98 = param_3;
    FUN_1487d8d8a(param_1 + 0xe0,dVar10,&local_88,0x3f800000);
    FUN_1449449dd(*param_3,*(undefined4 *)(param_3 + 1));
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cb8284 FUN_143cb8284 body=87 status=ok
// SIG undefined FUN_143cb8284(void)

longlong FUN_143cb8284(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  do {
    lVar2 = param_1;
    if ((*(byte *)(lVar2 + 0x7e8) & 2) == 0) {
      cVar1 = *(char *)(lVar2 + 0x3b0);
      if ((-1 < cVar1) && ((int)cVar1 < *(int *)(lVar2 + 0x288))) {
        return lVar2 + 0xd8 + (longlong)(int)cVar1 * 0x48;
      }
      break;
    }
    param_1 = *(longlong *)(lVar2 + 0xd0);
  } while (*(longlong *)(lVar2 + 0xd0) != 0);
  return lVar2 + (longlong)(*(int *)(lVar2 + 0x288) + -1) * 0x48 + 0xd8;
}



// FUNCTION 143cb82dc FUN_143cb82dc body=333 status=ok
// SIG undefined FUN_143cb82dc(void)

void FUN_143cb82dc(longlong param_1)

{
  double dVar1;
  double dVar3;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar2;
  double dVar4;
  
  uVar11 = DAT_14c8463e8;
  if (*(char *)(param_1 + 0x580) == '\0') {
    if (*(char *)(param_1 + 0x440) == '\x01') {
      dVar12 = *(double *)(param_1 + 0x430) * -1.0;
      dVar13 = *(double *)(param_1 + 0x438) * 1.0;
      dVar7 = *(double *)(param_1 + 0x3c0);
      dVar8 = *(double *)(param_1 + 0x3c8);
      dVar9 = *(double *)(param_1 + 0x3d0);
      dVar10 = *(double *)(param_1 + 0x3d8);
      dVar1 = *(double *)(param_1 + 0x428);
      dVar2 = *(double *)(param_1 + 0x428);
      dVar3 = *(double *)(param_1 + 0x420);
      dVar4 = *(double *)(param_1 + 0x420);
      dVar6 = dVar9 * dVar12 * -1.0 + dVar2 * dVar8 + (dVar13 * dVar10 - dVar4 * dVar7 * -1.0);
      *(double *)(param_1 + 0x560) =
           dVar8 * dVar12 * -1.0 + ((dVar7 * dVar13 - dVar3 * dVar10 * 1.0) - dVar9 * dVar1);
      *(double *)(param_1 + 0x568) =
           dVar7 * dVar12 * 1.0 + ((dVar8 * dVar13 - dVar4 * dVar9 * -1.0) - dVar10 * dVar2);
      auVar5._8_4_ = SUB84(dVar6,0);
      auVar5._0_8_ = dVar10 * dVar12 * 1.0 + dVar1 * dVar7 + (dVar13 * dVar9 - dVar3 * dVar8 * 1.0);
      auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x570) = auVar5;
    }
    else {
      if ((undefined8 *)(param_1 + 0x560) == &DAT_14c8463d0) {
        return;
      }
      *(undefined8 *)(param_1 + 0x570) = DAT_14c8463e0;
      *(undefined8 *)(param_1 + 0x578) = uVar11;
      uVar11 = DAT_14c8463d8;
      *(undefined8 *)(param_1 + 0x560) = DAT_14c8463d0;
      *(undefined8 *)(param_1 + 0x568) = uVar11;
    }
    *(undefined1 *)(param_1 + 0x580) = 1;
  }
  return;
}



// FUNCTION 143cb8436 FUN_143cb8436 body=57 status=ok
// SIG undefined FUN_143cb8436(void)

void FUN_143cb8436(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62b20 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62b20 = FUN_140002ddd(FUN_1464fa00b,uVar1,L"GbxRotationChannel");
  }
  return;
}



// FUNCTION 143cb8499 FUN_143cb8499 body=47 status=ok
// SIG undefined FUN_143cb8499(void)

void FUN_143cb8499(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143cb84c8 FUN_143cb84c8 body=460 status=ok
// SIG undefined FUN_143cb84c8(void)

void FUN_143cb84c8(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float *param_8)

{
  char cVar1;
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
  
  param_1 = param_1 - param_7;
  param_4 = param_4 - param_7;
  param_6 = param_6 - param_7;
  fVar9 = param_1 * param_4 - param_2 * param_2;
  fVar10 = param_3 * param_2 - param_1 * param_5;
  fVar8 = param_2 * param_5 - param_4 * param_3;
  fVar2 = param_1 * param_5 - param_3 * param_2;
  fVar4 = param_3 * param_3 - param_6 * param_1;
  fVar5 = param_2 * param_6 - param_5 * param_3;
  fVar11 = param_5 * param_3 - param_2 * param_6;
  fVar7 = param_6 * param_4 - param_5 * param_5;
  fVar12 = fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8;
  fVar3 = fVar2 * fVar2 + fVar5 * fVar5 + fVar4 * fVar4;
  fVar13 = fVar7 * fVar7 + fVar11 * fVar11 + fVar8 * fVar8;
  fVar6 = fVar3;
  if (fVar3 <= fVar12) {
    fVar6 = fVar12;
  }
  cVar1 = '\x02';
  if (fVar13 <= fVar6) {
    cVar1 = fVar12 < fVar3;
  }
  fVar6 = fVar8;
  if ((cVar1 != '\0') &&
     (fVar9 = fVar2, fVar12 = fVar3, fVar10 = fVar4, fVar6 = fVar5, cVar1 != '\x01')) {
    fVar9 = fVar8;
    fVar12 = fVar13;
    fVar10 = fVar11;
    fVar6 = fVar7;
  }
  fVar12 = 1.0 / SQRT(fVar12);
  *param_8 = fVar12 * fVar6;
  param_8[1] = fVar10 * fVar12;
  param_8[2] = fVar9 * fVar12;
  return;
}



// FUNCTION 143cb8694 FUN_143cb8694 body=1115 status=ok
// SIG undefined FUN_143cb8694(void)

void FUN_143cb8694(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float *param_7,float param_8,float *param_9)

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
  
  fVar2 = *param_7;
  fVar10 = param_7[1];
  fVar7 = param_7[2];
  if (ABS(fVar2) <= ABS(fVar10)) {
    fVar1 = 1.0 / SQRT(fVar10 * fVar10 + fVar7 * fVar7);
    fVar11 = -fVar10;
    fVar3 = fVar11 * fVar1;
    fVar1 = fVar1 * fVar7;
    fVar9 = -fVar7;
    fVar6 = 0.0;
  }
  else {
    fVar6 = 1.0 / SQRT(fVar2 * fVar2 + fVar7 * fVar7);
    fVar3 = fVar2 * fVar6;
    fVar9 = -fVar7;
    fVar6 = fVar9 * fVar6;
    fVar11 = -fVar10;
    fVar1 = 0.0;
  }
  fVar4 = fVar2 * fVar1 + fVar11 * fVar6;
  fVar5 = fVar7 * fVar6 - fVar3 * fVar2;
  fVar11 = fVar10 * fVar3 + fVar9 * fVar1;
  fVar7 = param_6 * fVar4 + param_3 * fVar11 + fVar5 * param_5;
  fVar8 = param_5 * fVar4 + param_2 * fVar11 + param_4 * fVar5;
  fVar9 = param_3 * fVar4 + param_1 * fVar11 + fVar5 * param_2;
  fVar2 = fVar3 * fVar7 + fVar6 * fVar9 + fVar1 * fVar8;
  fVar10 = ((param_6 * fVar3 + param_3 * fVar6 + fVar1 * param_5) * fVar3 +
           (param_3 * fVar3 + param_1 * fVar6 + fVar1 * param_2) * fVar6 +
           (param_5 * fVar3 + param_2 * fVar6 + fVar1 * param_4) * fVar1) - param_8;
  param_8 = (fVar7 * fVar4 + fVar9 * fVar11 + fVar8 * fVar5) - param_8;
  fVar9 = ABS(fVar10);
  fVar7 = ABS(fVar2);
  fVar8 = ABS(param_8);
  if (fVar9 < fVar8) {
    fVar10 = fVar8;
    if (fVar8 <= fVar7) {
      fVar10 = fVar7;
    }
    if (fVar10 <= 0.0) goto LAB_143cb898d;
    if (fVar8 < fVar7) {
      param_8 = param_8 / fVar2;
      fVar10 = 1.0 / SQRT(param_8 * param_8 + 1.0);
      fVar2 = param_8 * fVar10;
    }
    else {
      param_8 = fVar2 / param_8;
      fVar2 = 1.0 / SQRT(param_8 * param_8 + 1.0);
      fVar10 = param_8 * fVar2;
    }
    fVar3 = fVar3 * fVar2 - fVar4 * fVar10;
    fVar1 = fVar1 * fVar2 - fVar5 * fVar10;
  }
  else {
    fVar8 = fVar9;
    if (fVar9 <= fVar7) {
      fVar8 = fVar7;
    }
    if (fVar8 <= 0.0) goto LAB_143cb898d;
    if (fVar9 < fVar7) {
      fVar10 = fVar10 / fVar2;
      fVar2 = 1.0 / SQRT(fVar10 * fVar10 + 1.0);
      fVar10 = fVar10 * fVar2;
    }
    else {
      fVar2 = fVar2 / fVar10;
      fVar10 = 1.0 / SQRT(fVar2 * fVar2 + 1.0);
      fVar2 = fVar2 * fVar10;
    }
    fVar3 = fVar3 * fVar2 - fVar4 * fVar10;
    fVar1 = fVar1 * fVar2 - fVar5 * fVar10;
  }
  fVar6 = fVar6 * fVar2 - fVar11 * fVar10;
LAB_143cb898d:
  *param_9 = fVar6;
  param_9[1] = fVar1;
  param_9[2] = fVar3;
  return;
}



// FUNCTION 143cb8af0 FUN_143cb8af0 body=382 status=ok
// SIG undefined FUN_143cb8af0(void)

longlong FUN_143cb8af0(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  
  if (((((param_1[1] != 0) && (uVar3 = *param_1, -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc))
      && ((plVar6 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar6 != (longlong *)0x0 && (*(uint *)(plVar6 + 2) == param_1[1])))) &&
     (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar5 = *plVar6, lVar5 != 0))))
  goto LAB_143cb8b42;
  if (*(longlong *)(param_1 + 2) == 0) {
    return 0;
  }
  lVar5 = FUN_140007850();
  cVar2 = (*(code *)PTR_FUN_14c758760)();
  if ((lVar5 == 0) || (cVar2 == '\0')) {
    if (lVar5 == 0) {
      param_1[0] = 0;
      param_1[1] = 0;
      return 0;
    }
    uVar3 = *(uint *)(lVar5 + 0xc);
LAB_143cb8bd5:
    *param_1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar7 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar7);
      }
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar8 = uVar3 == 0;
      if (bVar8) {
        *(uint *)(lVar4 + 0x10) = uVar7;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar8) {
        uVar3 = uVar7;
      }
    }
    param_1[1] = uVar3;
  }
  else {
    uVar3 = *(uint *)(lVar5 + 0xc);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) goto LAB_143cb8bd5;
  }
  if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) {
    return 0;
  }
LAB_143cb8b42:
  lVar4 = FUN_141247688();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar5;
  }
  return 0;
}



// FUNCTION 143cb8c6e FUN_143cb8c6e body=192 status=ok
// SIG undefined FUN_143cb8c6e(void)

longlong FUN_143cb8c6e(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
          if (lVar3 != 0) goto LAB_143cb8d11;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_143cb8d30(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_143cb8d11:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 143cb8d30 FUN_143cb8d30 body=1725 status=ok
// SIG undefined FUN_143cb8d30(void)

void FUN_143cb8d30(longlong *param_1,int *param_2,uint param_3,undefined8 *param_4,char *param_5)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  int iVar15;
  longlong *plVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  char cVar24;
  uint uVar25;
  uint uVar26;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar18 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar18 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar18) {
      FUN_1447711aa(param_1,iVar18);
    }
    iVar20 = (int)param_1[5];
    if (iVar20 == 0) {
      iVar11 = -1;
    }
    else {
      iVar11 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar11 = iVar20 + -1;
      }
      iVar11 = iVar11 >> 5;
    }
    plVar16 = param_1 + 2;
    iVar12 = iVar20 + 1;
    iVar15 = iVar20 + 0x1f;
    if (-1 < iVar20) {
      iVar15 = iVar20;
    }
    if (iVar15 >> 5 == iVar11) {
      *(int *)(param_1 + 5) = iVar12;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar20) {
        iVar11 = iVar20;
        if (iVar20 + 0x20U < 0xa0) {
          iVar12 = 0x80;
        }
        else {
          uVar25 = iVar20 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar25) {
              uVar7 = uVar25;
            }
          }
          else {
            uVar7 = uVar25 + (uVar25 * 3 >> 3) + 0x10;
          }
          uVar14 = (ulonglong)(uVar7 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar26 = (uint)(uVar14 + 0xf);
              if (uVar7 < 0x1ffd) {
                uVar14 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar14 + 0xf >> 4]];
              }
              else {
                uVar17 = (ulonglong)(uVar26 & 0xfffffff0);
                if (uVar17 < 0x7ff1) {
                  bVar10 = (&DAT_14c841e00)[uVar26 >> 4];
                  uVar21 = 0x32;
                  if (0x32 < bVar10) {
                    uVar21 = (ulonglong)bVar10;
                  }
                  uVar22 = 0x32 - (ulonglong)bVar10;
                  do {
                    uVar14 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar22 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar22 & 0xffffffff] & 0xf) == 0) goto LAB_143cb92ff;
                    lVar19 = uVar21 + 1 + uVar22;
                    uVar22 = uVar22 - 1;
                  } while (lVar19 != 0x33);
                }
                uVar14 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar14 = (ulonglong)DAT_14c841df8;
                }
                uVar14 = -uVar14 & (uVar17 + uVar14) - 1;
              }
            }
            else {
              uVar14 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar14,0);
              iVar11 = (int)param_1[5];
            }
          }
LAB_143cb92ff:
          iVar8 = (int)(uVar14 >> 2);
          iVar12 = -0x20;
          if ((int)uVar25 <= iVar8) {
            iVar12 = iVar8 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar12;
        FUN_1446efbd8(plVar16,iVar11);
        iVar12 = (int)param_1[5] + 1;
      }
      iVar11 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar11 = iVar12;
      }
      *(int *)(param_1 + 5) = iVar12;
      if (iVar12 % 0x20 != 0) {
        plVar9 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar9 = plVar16;
        }
        bVar10 = -(char)(iVar12 % 0x20);
        *(uint *)((longlong)plVar9 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar9 + (longlong)(iVar11 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
      }
    }
    lVar19 = (longlong)iVar18;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar16 = (longlong *)param_1[4];
    }
    bVar10 = (byte)iVar20 & 0x1f;
    puVar1 = (uint *)((longlong)plVar16 + (longlong)(iVar15 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
  }
  else {
    iVar18 = (int)param_1[6];
    lVar19 = (longlong)iVar18;
    iVar20 = *(int *)(*param_1 + 4 + lVar19 * 0x20);
    *(int *)(param_1 + 6) = iVar20;
    iVar11 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar20 * 0x20) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  puVar13 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar13 = puVar1;
  }
  iVar20 = iVar18 + 0x1f;
  if (-1 < iVar18) {
    iVar20 = iVar18;
  }
  puVar13[iVar20 >> 5] = puVar13[iVar20 >> 5] | 1 << ((byte)iVar18 & 0x1f);
  lVar23 = *param_1;
  lVar19 = lVar19 * 0x20;
  plVar16 = (longlong *)(lVar23 + lVar19);
  *(undefined8 *)(lVar23 + lVar19) = *(undefined8 *)*param_4;
  puVar3 = (undefined8 *)(lVar23 + 8 + lVar19);
  *puVar3 = 0;
  puVar3[1] = 0;
  cVar24 = '\0';
  FUN_143cb8499(0,0);
  *(undefined4 *)(lVar23 + 0x18 + lVar19) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar9 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar9 = (longlong *)param_1[8];
      }
      iVar20 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
      if (iVar20 != -1) {
        do {
          puVar2 = (undefined4 *)(*param_1 + (longlong)iVar20 * 0x20);
          if (*(longlong *)(*param_1 + (longlong)iVar20 * 0x20) == *plVar16) {
            FUN_143cb8499(*(undefined8 *)(puVar2 + 2),puVar2[4]);
            if (*(longlong *)(puVar2 + 2) != 0) {
              FUN_1400020a8();
            }
            lVar19 = *plVar16;
            uVar5 = *(undefined4 *)((longlong)plVar16 + 4);
            lVar23 = plVar16[1];
            uVar6 = *(undefined4 *)((longlong)plVar16 + 0xc);
            *(longlong *)(puVar2 + 4) = plVar16[2];
            *puVar2 = (int)lVar19;
            puVar2[1] = uVar5;
            puVar2[2] = (int)lVar23;
            puVar2[3] = uVar6;
            FUN_143cb93ee(param_1,iVar18,1);
            cVar24 = '\x01';
            goto LAB_143cb8ec4;
          }
          iVar20 = puVar2[6];
        } while (iVar20 != -1);
      }
    }
    cVar24 = '\0';
  }
LAB_143cb8ec4:
  if (param_5 != (char *)0x0) {
    *param_5 = cVar24;
  }
  if (cVar24 != '\0') goto LAB_143cb904c;
  uVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  uVar25 = 1;
  if (3 < uVar7) {
    uVar14 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
    lVar19 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    uVar25 = 1 << ((byte)lVar19 & 0x1f);
  }
  if (((int)uVar7 < 1) || ((int)uVar25 <= (int)param_1[9])) {
    param_3 = (int)param_1[9] - 1U & param_3;
    *(uint *)((longlong)plVar16 + 0x1c) = param_3;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(plVar16 + 3) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4);
    plVar16 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar16 = param_1 + 7;
    }
    *(int *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4) =
         iVar18;
    goto LAB_143cb904c;
  }
  *(uint *)(param_1 + 9) = uVar25;
  plVar16 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar16,0,0,4);
    uVar25 = *(uint *)(param_1 + 9);
  }
  if (uVar25 == 0) goto LAB_143cb904c;
  plVar9 = param_1 + 7;
  if (uVar25 == 1) {
    if (*plVar16 != 0) {
      FUN_1446efa72(plVar16,0,0,4);
    }
LAB_143cb8f52:
    uVar7 = 0;
    do {
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = plVar9;
      }
      *(undefined4 *)((longlong)plVar16 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
           0xffffffff;
      uVar7 = uVar7 + 1;
    } while (uVar25 != uVar7);
  }
  else {
    FUN_1446efa72(plVar16,0,uVar25,4);
    if (0 < (int)uVar25) goto LAB_143cb8f52;
  }
  iVar20 = (int)param_1[5];
  if (iVar20 == 0) {
    uVar14 = 0;
    uVar17 = 1;
    iVar12 = 0;
    iVar11 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar25 = *puVar13;
    if (uVar25 == 0) {
      iVar11 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar11 = iVar20 + -1;
      }
      uVar14 = 0;
      uVar17 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar17 = uVar14;
      }
      iVar12 = 0;
      do {
        if (uVar17 == uVar14) goto LAB_143cb904c;
        iVar12 = iVar12 + 0x20;
        uVar25 = puVar13[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar25 == 0);
    }
    else {
      uVar14 = 0;
      iVar12 = 0;
    }
    uVar17 = (ulonglong)(-uVar25 & uVar25);
    uVar21 = uVar17 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    iVar11 = (iVar12 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    if (iVar20 <= iVar11) {
      iVar11 = iVar20;
    }
  }
  if (iVar11 < iVar20) {
    uVar25 = 0xffffffff;
    do {
      lVar19 = *param_1;
      lVar23 = (longlong)iVar11 * 0x20;
      uVar4 = *(undefined8 *)(lVar19 + lVar23);
      uVar7 = (uint)((ulonglong)uVar4 >> 0x10);
      uVar26 = (uint)uVar4 & 0xffff;
      uVar21 = (longlong)
               (int)(((uint)uVar4 << 0x10 | uVar26) + (int)((ulonglong)uVar4 >> 0x20) +
                     (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar26 >> 4)) &
               (longlong)(int)param_1[9] - 1U;
      iVar20 = (int)uVar21;
      *(int *)(lVar19 + 0x1c + lVar23) = iVar20;
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = plVar9;
      }
      *(undefined4 *)(lVar19 + 0x18 + lVar23) =
           *(undefined4 *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & uVar21) * 4);
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = plVar9;
      }
      *(int *)((longlong)plVar16 + ((longlong)iVar20 & (longlong)(int)param_1[9] - 1U) * 4) = iVar11
      ;
      uVar25 = ~(uint)uVar17 & uVar25;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puVar1;
      }
      iVar20 = (int)param_1[5];
      iVar11 = (int)uVar14;
      lVar19 = (longlong)iVar11;
      uVar7 = puVar13[lVar19] & uVar25;
      if (uVar7 == 0) {
        iVar15 = iVar20 + 0x1e;
        if (-1 < iVar20 + -1) {
          iVar15 = iVar20 + -1;
        }
        iVar15 = iVar15 >> 5;
        iVar8 = iVar15;
        if (iVar15 < iVar11) {
          iVar8 = iVar11;
        }
        if (iVar15 <= iVar11) break;
        lVar23 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar7 = puVar13[lVar19 + lVar23 + 1];
          if (uVar7 != 0) break;
          lVar23 = lVar23 + 1;
          if (iVar8 - lVar19 == lVar23) goto LAB_143cb904c;
        }
        uVar14 = (ulonglong)(iVar11 + (int)lVar23 + 1);
        uVar25 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar7 & uVar7);
      uVar21 = uVar17 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar11 = (iVar12 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    } while (iVar11 < iVar20);
  }
LAB_143cb904c:
  *param_2 = iVar18;
  return;
}



// FUNCTION 143cb93ee FUN_143cb93ee body=136 status=ok
// SIG undefined FUN_143cb93ee(void)

void FUN_143cb93ee(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 143cb9476 FUN_143cb9476 body=371 status=ok
// SIG undefined FUN_143cb9476(void)

int FUN_143cb9476(longlong *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  void *_Src;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  undefined8 *puVar14;
  
  lVar9 = *param_1;
  iVar4 = (int)param_1[1];
  lVar12 = (longlong)iVar4;
  if (lVar12 == 0) {
LAB_143cb955f:
    *(uint *)(param_1 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
      FUN_143cb95ea(param_1,iVar4);
      lVar9 = *param_1;
    }
    *(undefined8 *)(lVar9 + lVar12 * 0x28) = *param_2;
    uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar6 = *(undefined4 *)(param_2 + 2);
    uVar7 = *(undefined4 *)((longlong)param_2 + 0x14);
    puVar1 = (undefined4 *)(lVar9 + 8 + lVar12 * 0x28);
    *puVar1 = *(undefined4 *)(param_2 + 1);
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    *(undefined8 *)(lVar9 + 0x18 + lVar12 * 0x28) = 0;
    iVar8 = *(int *)(param_2 + 4);
    _Src = (void *)param_2[3];
    *(int *)(lVar9 + 0x20 + lVar12 * 0x28) = iVar8;
    if ((longlong)iVar8 == 0) {
      *(undefined4 *)(lVar9 + lVar12 * 0x28 + 0x24) = 0;
    }
    else {
      puVar14 = (undefined8 *)(lVar9 + lVar12 * 0x28 + 0x18);
      FUN_1446dd670(puVar14,iVar8,0);
      memcpy((void *)*puVar14,_Src,(longlong)iVar8 * 2);
    }
    return iVar4;
  }
  iVar8 = *(int *)(param_2 + 4);
  lVar10 = lVar9;
LAB_143cb94b7:
  if ((*(longlong *)(lVar10 + 8) == param_2[1]) && (*(longlong *)(lVar10 + 0x10) == param_2[2])) {
    if (*(int *)(lVar10 + 0x20) == iVar8) {
      if (1 < iVar8) {
        lVar11 = 0;
        do {
          uVar2 = *(ushort *)(*(longlong *)(lVar10 + 0x18) + lVar11);
          uVar3 = *(ushort *)(param_2[3] + lVar11);
          if (uVar2 == uVar3) {
            if (uVar2 == 0) break;
          }
          else {
            if (0x7f < (uVar3 | uVar2)) {
              iVar13 = (uint)uVar2 - (uint)uVar3;
              goto LAB_143cb9533;
            }
            if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3]) goto code_r0x000143cb9530;
          }
          lVar11 = lVar11 + 2;
        } while( true );
      }
    }
    else if (*(int *)(lVar10 + 0x20) + iVar8 != 1) goto LAB_143cb94bd;
    goto LAB_143cb954d;
  }
  goto LAB_143cb94bd;
code_r0x000143cb9530:
  iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_143cb9533:
  if (iVar13 == 0) {
LAB_143cb954d:
    iVar8 = (int)((ulonglong)(lVar10 - lVar9) >> 3) * -0x33333333;
    if (iVar8 != -1) {
      return iVar8;
    }
    goto LAB_143cb955f;
  }
LAB_143cb94bd:
  lVar10 = lVar10 + 0x28;
  if (lVar10 == lVar9 + lVar12 * 0x28) goto LAB_143cb955f;
  goto LAB_143cb94b7;
}



// FUNCTION 143cb95ea FUN_143cb95ea body=363 status=ok
// SIG undefined FUN_143cb95ea(void)

void FUN_143cb95ea(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x28;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143cb9680;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_143cb9680:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 143cb9756 FUN_143cb9756 body=90 status=ok
// SIG undefined FUN_143cb9756(void)

void FUN_143cb9756(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x18 + (longlong)(int)param_2 * 0x28) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x28);
    memmove(_Dst,(void *)((longlong)_Dst + 0x28),(longlong)(int)(~param_2 + iVar2) * 0x28);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 143cb97b0 FUN_143cb97b0 body=389 status=ok
// SIG undefined FUN_143cb97b0(void)

ulonglong FUN_143cb97b0(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar8 = (ulonglong)uVar3;
  iVar10 = *(int *)(param_1 + 0xc);
  uVar5 = iVar10 - uVar3;
  uVar6 = (ulonglong)uVar5;
  if (((0x3fff < (ulonglong)((longlong)(int)uVar5 * 0x28)) || ((int)(uVar3 * 3) < iVar10 * 2)) &&
     (uVar6 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),(int)uVar5 < 0x41),
     uVar3 == 0 || (int)uVar5 >= 0x41)) {
    if (0 < (int)uVar3) {
      uVar8 = uVar8 * 0x28;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar6 = uVar8 + 0xf;
          if (uVar3 < 0x333) {
            uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
          }
          else {
            if ((uVar6 & 0x3ffffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar9 = 0x32 - (ulonglong)bVar2;
              do {
                uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_143cb9860;
                lVar1 = uVar7 + 1 + uVar9;
                uVar9 = uVar9 - 1;
              } while (lVar1 != 0x33);
            }
            uVar8 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar8 = (ulonglong)DAT_14c841df8;
            }
            uVar8 = -uVar8 & ((uVar6 & 0x3ffffffff0) + uVar8) - 1;
          }
        }
        else {
          uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,8);
          iVar10 = *(int *)(param_1 + 0xc);
        }
      }
LAB_143cb9860:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar8;
      uVar6 = SUB168(auVar4 * ZEXT816(0xcccccccccccccccd),0);
      uVar8 = uVar8 / 0x28;
    }
    if ((int)uVar8 != iVar10) {
      *(int *)(param_1 + 0xc) = (int)uVar8;
      uVar6 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar8,0x28,8);
    }
  }
  return uVar6;
}



// FUNCTION 143cb9936 FUN_143cb9936 body=158 status=ok
// SIG undefined FUN_143cb9936(void)

undefined8 FUN_143cb9936(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_143cb99d4(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 143cb99d4 FUN_143cb99d4 body=96 status=ok
// SIG undefined FUN_143cb99d4(void)

void FUN_143cb99d4(longlong *param_1,int param_2)

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
  FUN_143cb9a34(param_1,param_2,1);
  return;
}



// FUNCTION 143cb9a34 FUN_143cb9a34 body=99 status=ok
// SIG undefined FUN_143cb9a34(void)

void FUN_143cb9a34(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)((longlong)param_2 * 0x20 + *param_1 + 8);
    iVar1 = param_3;
    do {
      FUN_143cb8499(*plVar2,(int)plVar2[1]);
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      plVar2 = plVar2 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_143cb93ee(param_1,param_2,param_3);
  return;
}



// FUNCTION 143cb9a98 FUN_143cb9a98 body=31 status=ok
// SIG undefined FUN_143cb9a98(void)

undefined8 FUN_143cb9a98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cb9b06 FUN_143cb9b06 body=31 status=ok
// SIG undefined FUN_143cb9b06(void)

undefined8 FUN_143cb9b06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cb9b74 FUN_143cb9b74 body=36 status=ok
// SIG undefined FUN_143cb9b74(void)

void FUN_143cb9b74(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  FUN_1404233de(param_3 + 0x3f0,*param_1);
  *(undefined1 *)(param_3 + 0x361) = 1;
  return;
}



// FUNCTION 143cb9b98 FUN_143cb9b98 body=500 status=ok
// SIG undefined FUN_143cb9b98(void)

void FUN_143cb9b98(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  lVar2 = *param_1;
  plVar1 = (longlong *)(lVar2 + 0xae8);
  uVar3 = (uint)((ulonglong)local_48 >> 0x10);
  uVar6 = (uint)local_48 & 0xffff;
  if (*(int *)(lVar2 + 0xaf0) != *(int *)(lVar2 + 0xb1c)) {
    lVar4 = lVar2 + 0xb20;
    if (*(longlong *)(lVar2 + 0xb28) != 0) {
      lVar4 = *(longlong *)(lVar2 + 0xb28);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(lVar2 + 0xb30) - 1U &
                             ((uint)local_48 << 0x10 | uVar6) + (int)((ulonglong)local_48 >> 0x20) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar7 = (longlong *)(*plVar1 + (longlong)iVar5 * 0x18);
        if (*plVar7 == local_48) {
          if (plVar7 != (longlong *)0x0) goto LAB_143cb9c87;
          break;
        }
        iVar5 = (int)plVar7[2];
      } while (iVar5 != -1);
    }
  }
  local_40 = &local_48;
  FUN_14186d8fc(plVar1,&local_34);
  plVar7 = (longlong *)(*plVar1 + (longlong)local_34 * 0x18);
LAB_143cb9c87:
  plVar7 = plVar7 + 1;
  if (*plVar7 == 0) {
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    FUN_1400702d4(DAT_14caa8580,&local_40,local_48,0);
    plVar1 = local_40;
    lVar4 = FUN_1404d6126(*(undefined8 *)param_1[1],local_40);
    *plVar7 = lVar4;
    if (lVar4 == 0) {
      lVar4 = FUN_14001cc68(0x2d8,0x10);
      FUN_141500e0c(lVar4);
      *plVar7 = lVar4;
      *(longlong **)(lVar4 + 0x200) = plVar1;
      *(undefined1 *)(lVar4 + 0x2a0) = *(undefined1 *)param_1[2];
      if (plVar1 == DAT_14c9abbf0) {
        *(longlong *)param_1[3] = lVar4;
        if ((*(longlong *)(lVar2 + 0xae0) != 0) && (*(char *)param_1[2] == '\x01')) {
          *(longlong *)(lVar4 + 0x2b8) = *(longlong *)(lVar2 + 0xae0);
        }
      }
      else {
        plVar1 = (longlong *)param_1[4];
        iVar5 = (int)plVar1[1];
        *(uint *)(plVar1 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)plVar1 + 0xc) < iVar5 + 1U) {
          FUN_1404d62be(plVar1,iVar5);
        }
        *(longlong *)(*plVar1 + (longlong)iVar5 * 8) = *plVar7;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cb9d8e FUN_143cb9d8e body=445 status=ok
// SIG undefined FUN_143cb9d8e(void)

void FUN_143cb9d8e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  lVar3 = *param_1;
  plVar1 = (longlong *)(lVar3 + 0xae8);
  uVar2 = (uint)((ulonglong)local_40 >> 0x10);
  uVar6 = (uint)local_40 & 0xffff;
  if (*(int *)(lVar3 + 0xaf0) != *(int *)(lVar3 + 0xb1c)) {
    lVar5 = lVar3 + 0xb20;
    if (*(longlong *)(lVar3 + 0xb28) != 0) {
      lVar5 = *(longlong *)(lVar3 + 0xb28);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(lVar3 + 0xb30) - 1U &
                             ((uint)local_40 << 0x10 | uVar6) + (int)((ulonglong)local_40 >> 0x20) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar7 = (longlong *)(*plVar1 + (longlong)iVar4 * 0x18);
        if (*plVar7 == local_40) {
          if (plVar7 != (longlong *)0x0) goto LAB_143cb9e7a;
          break;
        }
        iVar4 = (int)plVar7[2];
      } while (iVar4 != -1);
    }
  }
  local_38 = &local_40;
  FUN_14186d8fc(plVar1,&local_2c);
  plVar7 = (longlong *)(*plVar1 + (longlong)local_2c * 0x18);
LAB_143cb9e7a:
  plVar7 = plVar7 + 1;
  if (*plVar7 == 0) {
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    FUN_1400702d4(DAT_14caa8580,&local_38,local_40,0);
    plVar1 = local_38;
    lVar3 = FUN_1404d6126(*(undefined8 *)param_1[1],local_38);
    *plVar7 = lVar3;
    if (lVar3 == 0) {
      lVar3 = FUN_14001cc68(0x2d8,0x10);
      FUN_141500e0c(lVar3);
      *plVar7 = lVar3;
      *(longlong **)(lVar3 + 0x200) = plVar1;
      *(undefined1 *)(lVar3 + 0x2a0) = *(undefined1 *)param_1[2];
      plVar1 = (longlong *)param_1[3];
      iVar4 = (int)plVar1[1];
      *(uint *)(plVar1 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)plVar1 + 0xc) < iVar4 + 1U) {
        FUN_1404d62be(plVar1,iVar4);
      }
      *(longlong *)(*plVar1 + (longlong)iVar4 * 8) = *plVar7;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cb9f74 FUN_143cb9f74 body=282 status=ok
// SIG undefined FUN_143cb9f74(void)

undefined8 * FUN_143cb9f74(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143cb9f4c);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143cba08e FUN_143cba08e body=282 status=ok
// SIG undefined FUN_143cba08e(void)

undefined8 * FUN_143cba08e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143cb9f4c);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143cba1a8 FUN_143cba1a8 body=282 status=ok
// SIG undefined FUN_143cba1a8(void)

undefined8 * FUN_143cba1a8(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143cb9f4c);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143cba2c2 FUN_143cba2c2 body=513 status=ok
// SIG undefined FUN_143cba2c2(void)

void FUN_143cba2c2(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  PSRWLOCK SRWLock;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar3 = param_1[0x15];
  SRWLock = *(PSRWLOCK *)(lVar3 + 0x28);
  AcquireSRWLockShared(SRWLock);
  if ((((((*(char *)(lVar3 + 0x20) != '\0') || (*(int *)(lVar3 + 0x3c) == 0)) ||
        (uVar2 = *(uint *)(lVar3 + 0x38), (int)uVar2 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar2 ||
        (plVar5 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
        plVar5 == (longlong *)0x0)))) ||
      (((int)plVar5[2] != *(int *)(lVar3 + 0x3c) ||
       (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar3 = *plVar5, lVar3 == 0)))))) ||
     (*(longlong **)(lVar3 + 0xe50) == (longlong *)0x0)) goto LAB_143cba3af;
  cVar4 = (**(code **)(**(longlong **)(lVar3 + 0xe50) + 0xe0))();
  if (*(longlong *)(lVar3 + 0x658) == 0) {
    if ((DAT_14c950c29 == '\x01') && (*(longlong *)(lVar3 + 0x660) != 0)) goto LAB_143cba4ba;
    if (*(longlong *)(lVar3 + 0x660) != 0) goto LAB_143cba38d;
  }
  else {
    if (DAT_14c950c29 == '\x01') {
LAB_143cba4ba:
      FUN_1456cec3c();
    }
LAB_143cba38d:
    if (DAT_14cb06da8 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1464003b0;
      local_58 = &LAB_147d17bdf;
      local_60 = &LAB_1417edf22;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
  }
  if (cVar4 != '\0') {
    (**(code **)(**(longlong **)(lVar3 + 0xe50) + 0x40))
              (*(longlong **)(lVar3 + 0xe50),*(undefined8 *)(lVar3 + 0xe58));
  }
LAB_143cba3af:
  ReleaseSRWLockShared(SRWLock);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cba4c4 FUN_143cba4c4 body=390 status=ok
// SIG undefined FUN_143cba4c4(void)

void FUN_143cba4c4(float *param_1,float *param_2,float *param_3,float *param_4)

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
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar8 = fVar2 + 0.0;
  fVar3 = *param_2;
  fVar4 = *param_3;
  fVar5 = param_3[1];
  fVar7 = (fVar3 - (fVar1 + 0.0)) * fVar4 - fVar5 * fVar8;
  fVar6 = *param_4;
  fVar11 = fVar6 * 0.5;
  fVar10 = fVar7 * fVar11 + fVar2;
  fVar9 = (fVar3 - (fVar8 * fVar11 + fVar1)) * fVar4 - fVar5 * fVar10;
  fVar12 = fVar11 * fVar9 + fVar2;
  fVar11 = (fVar3 - (fVar10 * fVar11 + fVar1)) * fVar4 - fVar5 * fVar12;
  fVar9 = fVar9 + fVar11;
  fVar11 = fVar11 * fVar6 + fVar2;
  *param_1 = (fVar10 + fVar12 + fVar10 + fVar12 + fVar8 + fVar11) * 0.16666667 * fVar6 + fVar1;
  param_1[1] = (fVar9 + fVar9 + fVar7 +
               ((fVar3 - (fVar12 * fVar6 + fVar1)) * fVar4 - fVar5 * fVar11)) * 0.16666667 *
               *param_4 + fVar2;
  return;
}



// FUNCTION 143cba65a FUN_143cba65a body=111 status=ok
// SIG undefined FUN_143cba65a(void)

void FUN_143cba65a(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = *param_1;
  FUN_143cbb0ca(param_2,local_28);
  FUN_140ee032e(uVar2,local_28);
  if (local_20 != 0) {
    LOCK();
    piVar1 = (int *)(local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cba71c FUN_143cba71c body=167 status=ok
// SIG undefined FUN_143cba71c(void)

void FUN_143cba71c(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  code *local_40;
  undefined8 *local_38;
  code **local_30;
  code *local_28;
  code ***local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_2 + 0x7e8) & 2) != 0) {
    uVar1 = *param_1;
    FUN_1400bc8c2(param_2 + 0x798,uVar1);
    if (*(char *)(param_2 + 0x798) == '\0') {
      *(char *)(param_2 + 0x7e9) = '\x02' - *(char *)(param_2 + 0x7c0);
    }
    local_38 = &local_48;
    local_30 = &local_40;
    local_40 = FUN_143cba71c;
    local_20 = &local_30;
    local_28 = FUN_14061a336;
    local_48 = uVar1;
    FUN_1448fef12(param_2,3);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cba7dc FUN_143cba7dc body=334 status=ok
// SIG undefined FUN_143cba7dc(void)

void FUN_143cba7dc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  longlong local_68;
  int local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined2 local_34;
  undefined1 local_32;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *param_1;
  cVar3 = (**(code **)(*param_2 + 0x28))(param_2);
  if (cVar3 != '\0') {
    local_60 = CONCAT31(local_60._1_3_,1);
    local_5c = 0x43340000;
    local_54 = 0;
    local_50 = 0x3f0000003f000000;
    local_48 = 0x3e4ccccd;
    local_34 = 0;
    local_32 = 0;
    local_44 = 0;
    uStack_40 = 0x42b40000;
    uStack_3c = 0;
    uStack_38 = 0x42960000;
    local_68 = *(longlong *)(lVar1 + 0x5d0);
    cVar3 = FUN_14186e0a2(param_2);
    if (cVar3 != '\0') {
      FUN_140273082(param_2,&local_30);
      iVar2 = local_28 + -1;
      if (local_28 == 0) {
        iVar2 = 0;
      }
      FUN_1446f82e2(local_70,iVar2,local_30,1);
      if (local_30 != 0) {
        FUN_1400020a8();
      }
      FUN_14056efae(lVar1 + 0x5d0,local_70,&local_68);
      goto LAB_143cba909;
    }
  }
  FUN_140273082(param_2,&local_68);
  iVar2 = local_60 + -1;
  if (local_60 == 0) {
    iVar2 = 0;
  }
  FUN_1446f82e2(&local_30,iVar2,local_68,1);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_14056e94c(lVar1 + 0x5d0,&local_30);
LAB_143cba909:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cba92b FUN_143cba92b body=935 status=ok
// SIG undefined FUN_143cba92b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cba92b(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  char *local_58;
  undefined4 uStack_50;
  uint uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400b22c2(&local_58,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_58,&DAT_14cb71f84);
  if (cVar1 == '\0') {
    _DAT_14cb71f84 = 0;
    uRam000000014cb71f8c = 0;
  }
  if (local_58 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_58 = "bone";
  uStack_50 = 4;
  uStack_4c = uStack_4c & 0xffffff00;
  FUN_14001a6c0(&local_58,1);
  local_58 = "AssetRegistry";
  uStack_50 = 0xd;
  uStack_4c = uStack_4c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cb71f98 = (ulonglong)uVar2;
  _DAT_14cb71fa0 = 0x47efffffe0000000;
  _DAT_14cb71fa8 = 0x47efffffe0000000;
  _DAT_14cb71fb0 = 0x47efffffe0000000;
  _DAT_14cb71fb8 = 0x47efffffe0000000;
  _DAT_14cb71fc0 = 0x47efffffe0000000;
  _DAT_14cb71fc8 = 0x47efffffe0000000;
  _DAT_14cb71fd0 = 0x47efffffe0000000;
  _DAT_14cb71fd8 = 0x47efffffe0000000;
  DAT_14cb72000 = 0;
  DAT_14cb72008 = 0;
  DAT_14cb71fe0 = 0;
  _DAT_14cb71fe8 = 0;
  _DAT_14cb7200c = 0xffffffff00000080;
  DAT_14cb72014 = 0;
  DAT_14cb72020 = 0;
  DAT_14cb72028 = 0;
  atexit(FUN_143cb19c2);
  local_58 = "AnimUpdateRateParams_Default";
  uStack_50 = 0x1c;
  uStack_4c = uStack_4c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_58,1);
  DAT_14cb72198 = (ulonglong)uVar2;
  _DAT_14cb72038 = &LAB_143cb1bf7;
  _DAT_14cb72040 = 0x45004000;
  DAT_14cb72044 = 1;
  DAT_14cb72030 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb72030;
  atexit((_func_5014 *)&LAB_143cb1bfc);
  FUN_1446f470e(&DAT_14cb72050,L"IdleTurn",1);
  local_58._0_4_ = 2;
  local_68 = 0;
  FUN_14078dbce(&DAT_14cb72058,L"a.gbx.ForwardDynamics.AutoPopulateForwardDynamics",&local_58,
                L"Whether or not to populate dynamically inserted forward dynamics nodes before (1) or after (2) the dynamically inserted bone mod node. A value other than 1 or 2 disabled auto population of nodes."
               );
  atexit(FUN_143cb1c79);
  local_58._0_4_ = 1;
  local_68 = 0;
  FUN_14078dbce(&DAT_14cb72070,L"a.gbx.Insertion.Enable",&local_58,
                L"Whether to use Insertion nodes to insert Forward Dynamics and BoneMod nodes");
  atexit(FUN_143cb1cbe);
  DAT_14cb720a8 = 0;
  _DAT_14cb720b0 = 0x400000000;
  atexit((_func_5014 *)&LAB_143cb3a11);
  DAT_14cb720d8 = 0;
  DAT_14cb720e0 = 0;
  DAT_14cb720b8 = 0;
  _DAT_14cb720c0 = 0;
  _DAT_14cb720e4 = 0xffffffff00000080;
  DAT_14cb720ec = 0;
  DAT_14cb720f8 = 0;
  DAT_14cb72100 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cb72108);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cb72108,4000);
  atexit((_func_5014 *)&LAB_143cb6954);
  FUN_1446f470e(&DAT_14cb72130,L"BLUEPRINT",1);
  local_58 = (char *)CONCAT44(local_58._4_4_,1);
  local_68 = 0;
  FUN_14078dbce(&DAT_14cb72138,L"a.gbx.SlopeWarping.TickManager",&local_58,
                L"Whether the GbxSlopeWarpingManager ticks. 0 for disabled, non-zero for enabled.");
  atexit(FUN_143cb79b7);
  FUN_1446f470e(&DAT_14cb72150,L"OFF_GROUND",1);
  FUN_1446f470e(&DAT_14cb72158,L"LOD_NONE",1);
  FUN_1446f470e(&DAT_14cb72160,L"Replication",1);
  local_58 = (char *)0xabbd41c7ed32c813;
  uStack_50 = 0x85a1883f;
  uStack_4c = 0xd27d6ff2;
  _DAT_14cb72168 = 0xed32c813;
  uRam000000014cb7216c = 0xabbd41c7;
  uRam000000014cb72170 = 0x85a1883f;
  uRam000000014cb72174 = 0xd27d6ff2;
  FUN_141005458(&local_58,0,L"GbxRotationChannelSettings",0);
  atexit((_func_5014 *)&LAB_143cb8429);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cbae28 FUN_143cbae28 body=179 status=ok
// SIG undefined FUN_143cbae28(void)

void FUN_143cbae28(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [44];
  char local_6c [4];
  undefined8 local_68;
  undefined1 local_60 [72];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x5d0);
    if (lVar1 == DAT_14cb72618) {
      local_6c[0] = '\0';
    }
    else {
      local_6c[0] = '\x01';
      if (lVar1 != DAT_14cb72620) {
        local_6c[0] = (lVar1 == DAT_14cb725f8 || lVar1 == DAT_14cb72628) + '\x01';
      }
    }
    local_68 = 0;
    FUN_14070d2c0(local_60,*param_1,local_6c,*(undefined8 *)param_1[1]);
    FUN_1406ebff6(param_2,1,local_60);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cbaedc FUN_143cbaedc body=69 status=ok
// SIG undefined FUN_143cbaedc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cbaedc(void)

{
  _DAT_14cb72238 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143cbaf1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb72240,1);
  return;
}



// FUNCTION 143cbaf21 FUN_143cbaf21 body=69 status=ok
// SIG undefined FUN_143cbaf21(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cbaf21(void)

{
  _DAT_14cb72250 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143cbaf63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb72258,1);
  return;
}



// FUNCTION 143cbaf66 FUN_143cbaf66 body=197 status=ok
// SIG undefined FUN_143cbaf66(void)

void FUN_143cbaf66(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 7) = 2;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x105) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *param_1 = &PTR_FUN_14b0db3b0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 2;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x172) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17a) = 0;
  return;
}



// FUNCTION 143cbb02c FUN_143cbb02c body=86 status=ok
// SIG undefined FUN_143cbb02c(void)

void FUN_143cbb02c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined1 *local_20;
  undefined8 **local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = &local_10;
  local_18 = &local_28;
  local_20 = &LAB_143cbc926;
  local_10 = param_3;
  FUN_1400b7536();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cbb0bc FUN_143cbb0bc body=14 status=ok
// SIG undefined FUN_143cbb0bc(void)

void FUN_143cbb0bc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 8) = 4;
  return;
}



// FUNCTION 143cbb0ca FUN_143cbb0ca body=97 status=ok
// SIG undefined FUN_143cbb0ca(void)

longlong * FUN_143cbb0ca(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x118);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
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
  lVar4 = param_1 + 0x50;
  if (param_1 == 0) {
    lVar4 = 0;
  }
  *param_2 = lVar4;
  param_2[1] = (longlong)plVar3;
  return param_2;
}



// FUNCTION 143cbb13e FUN_143cbb13e body=438 status=ok
// SIG undefined FUN_143cbb13e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cbb13e(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar10 [16];
  
  dVar2 = (double)*(float *)(*(longlong *)(param_1 + 0x48) + 0x3c);
  dVar1 = (double)*(float *)(*(longlong *)(param_1 + 0x48) + 0x38);
  auVar10._8_4_ = SUB84(dVar2,0);
  auVar10._0_8_ = dVar1;
  auVar10._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar9 = divpd(auVar10,_DAT_1499387d0);
  auVar9 = roundpd(auVar9,auVar9,3);
  auVar10 = roundpd(in_XMM2,ZEXT816(0),3);
  dVar6 = (dVar1 - auVar9._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar7 = (dVar2 - auVar9._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar1 = (0.0 - auVar10._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar2 = (0.0 - auVar10._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar3 = sin(dVar6);
  dVar4 = sin(dVar7);
  dVar5 = sin(dVar1);
  sin(dVar2);
  dVar6 = cos(dVar6);
  dVar7 = cos(dVar7);
  dVar8 = cos(dVar1);
  cos(dVar2);
  dVar1 = dVar4 * dVar3 * dVar5 + dVar7 * dVar6 * dVar8;
  *(double *)(param_1 + 0x70) = dVar3 * dVar4 * dVar8 - dVar6 * dVar7 * dVar5;
  *(double *)(param_1 + 0x78) = -(dVar3 * dVar7 * dVar8) - dVar6 * dVar4 * dVar5;
  auVar9._8_4_ = SUB84(dVar1,0);
  auVar9._0_8_ = -(dVar7 * dVar3 * dVar5) + dVar4 * dVar6 * dVar8;
  auVar9._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x80) = auVar9;
  return;
}



// FUNCTION 143cbb31c FUN_143cbb31c body=50 status=ok
// SIG undefined FUN_143cbb31c(void)

void FUN_143cbb31c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (*param_2 == 0) {
    param_1[0x1d] = DAT_14caa8578;
    lVar1 = param_2[1];
  }
  else {
    param_1[0x1d] = *param_2;
    lVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000143cbb337. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1a8))(param_1,lVar1);
  return;
}



// FUNCTION 143cbb34e caseD_10 body=151 status=ok
// SIG undefined caseD_10(void)

void switchD_143c3d4dc::caseD_10(longlong param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,0x1427dd501,0,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
      return;
    }
  }
  return;
}



// FUNCTION 143cbb3e5 FUN_143cbb3e5 body=41 status=ok
// SIG undefined FUN_143cbb3e5(void)

void FUN_143cbb3e5(void)

{
  DAT_14cb72338 = 0;
  if (DAT_14cb72330 != 0) {
    FUN_1400020a8();
  }
  FUN_145d649f4();
  return;
}



// FUNCTION 143cbb490 FUN_143cbb490 body=41 status=ok
// SIG undefined FUN_143cbb490(void)

void FUN_143cbb490(void)

{
  DAT_14cb724c0 = 0;
  if (DAT_14cb724b8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d64a92();
  return;
}



// FUNCTION 143cbb52a FUN_143cbb52a body=365 status=ok
// SIG undefined FUN_143cbb52a(void)

void FUN_143cbb52a(longlong param_1,undefined4 *param_2,undefined1 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_3 = 0;
  *param_2 = 0;
  if (param_1 != 0) {
    if (DAT_14cb5b388 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_146431698;
      local_48 = &LAB_1486775cb;
      local_50 = &LAB_1464cee35;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000005;
      local_70 = 0x10;
      local_78 = 0x3a20;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) {
      plVar2 = *(longlong **)(param_1 + 0x35d0);
      puVar3 = *(undefined8 **)(param_1 + 0x35d8);
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
        UNLOCK();
      }
      if (plVar2 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar2 + 0x78))();
        *param_2 = uVar4;
        *param_3 = 1;
      }
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar3)(puVar3);
          LOCK();
          piVar1 = (int *)((longlong)puVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
          }
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



// FUNCTION 143cbb6ac FUN_143cbb6ac body=289 status=ok
// SIG undefined FUN_143cbb6ac(void)

void FUN_143cbb6ac(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [4];
  undefined8 local_ac;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 local_8c;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined2 local_1f;
  undefined1 local_1d;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = *(longlong *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(lVar2 + 0x38);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(lVar2 + 0x40);
  FUN_1447715ec(param_1 + 0x60,lVar2 + 0x48);
  local_b0[0] = 0;
  local_ac = 0;
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0;
  uStack_94 = 0;
  local_8c = 0;
  local_80 = 0xc69c4000;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_1f = 1;
  local_1d = 0;
  local_1c = 0;
  uVar1 = FUN_1405f939e(param_1);
  lVar2 = FUN_140149a73(uVar1,0);
  if (lVar2 == 0) {
    local_1c = 2;
  }
  else {
    FUN_140983ba6(param_1 + 0x50,lVar2,local_b0);
  }
  FUN_140114204(param_1 + 0x50);
  FUN_1409838b8(local_b0);
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cbb7ce FUN_143cbb7ce body=299 status=ok
// SIG undefined FUN_143cbb7ce(void)

void FUN_143cbb7ce(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [4];
  undefined8 local_b4;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28;
  undefined2 local_27;
  undefined1 local_25;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = *(longlong *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(lVar2 + 0x38);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(lVar2 + 0x40);
  FUN_1447715ec(param_1 + 0x60,lVar2 + 0x48);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(lVar2 + 0x70);
  local_b8[0] = 0;
  local_b4 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a4 = 0;
  uStack_9c = 0;
  local_94 = 0;
  local_88 = 0xc69c4000;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_27 = 1;
  local_25 = 0;
  local_24 = 0;
  uVar1 = FUN_1405f939e(param_1);
  lVar2 = FUN_140149a73(uVar1,0);
  if (lVar2 == 0) {
    local_24 = 2;
  }
  else {
    FUN_140983ba6(param_1 + 0x50,lVar2,local_b8);
  }
  FUN_140114204(param_1 + 0x50);
  FUN_1409838b8(local_b8);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cbb8fa FUN_143cbb8fa body=289 status=ok
// SIG undefined FUN_143cbb8fa(void)

void FUN_143cbb8fa(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [4];
  undefined8 local_ac;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 local_8c;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined2 local_1f;
  undefined1 local_1d;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = *(longlong *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(lVar2 + 0x38);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(lVar2 + 0x40);
  FUN_1447715ec(param_1 + 0x60,lVar2 + 0x48);
  local_b0[0] = 0;
  local_ac = 0;
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0;
  uStack_94 = 0;
  local_8c = 0;
  local_80 = 0xc69c4000;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_1f = 1;
  local_1d = 0;
  local_1c = 0;
  uVar1 = FUN_1405f939e(param_1);
  lVar2 = FUN_140149a73(uVar1,0);
  if (lVar2 == 0) {
    local_1c = 2;
  }
  else {
    FUN_140983ba6(param_1 + 0x50,lVar2,local_b0);
  }
  FUN_140114204(param_1 + 0x50);
  FUN_1409838b8(local_b0);
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cbba1c FUN_143cbba1c body=159 status=ok
// SIG undefined FUN_143cbba1c(void)

void FUN_143cbba1c(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_24 = 0;
  local_1c = 0;
  uVar4 = FUN_1405f939e();
  lVar5 = FUN_140149a73(uVar4,0);
  if (lVar5 != 0) {
    FUN_14039fc7b(param_1 + 0x50,local_28,lVar5,0);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cbbabc FUN_143cbbabc body=267 status=ok
// SIG undefined FUN_143cbbabc(void)

void FUN_143cbbabc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined1 local_d8 [32];
  longlong local_b8;
  longlong *local_a8;
  longlong local_98 [4];
  longlong local_78;
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar1 = *(longlong *)(param_1 + 0x48);
  FUN_1487dda5e(param_1 + 0x188);
  if (*(int *)(lVar1 + 0x40) != 0) {
    lVar2 = FUN_1405f939e(param_1);
    if (lVar2 != 0) {
      memset(local_d8,0,0xa0);
      uVar3 = FUN_1405f939e(param_1);
      uVar3 = FUN_1406f625c(uVar3);
      uVar4 = FUN_140d84280(param_1 + 0x178);
      local_e8 = param_1 + 0x188;
      FUN_140d84456(uVar4,lVar1 + 0x38,uVar3,local_d8);
      if (local_78 != 0) {
        if (local_68 == (longlong *)0x0) {
          local_68 = local_58;
        }
        (**(code **)(*local_68 + 0x10))();
      }
      if (local_b8 != 0) {
        if (local_a8 == (longlong *)0x0) {
          local_a8 = local_98;
        }
        (**(code **)(*local_a8 + 0x10))();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cbbbc8 FUN_143cbbbc8 body=337 status=ok
// SIG undefined FUN_143cbbbc8(void)

void FUN_143cbbbc8(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [4];
  undefined8 local_b4;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28;
  undefined2 local_27;
  undefined1 local_25;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = *(longlong *)(param_1 + 0x48);
  FUN_1487de22c(param_1 + 0x178,param_1);
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(lVar2 + 0x58);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(lVar2 + 0x50);
  FUN_1447715ec(param_1 + 0x198,lVar2 + 0x60);
  FUN_1406fa324(param_1 + 0x1c0,lVar2 + 0x88);
  local_b8[0] = 0;
  local_b4 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a4 = 0;
  uStack_9c = 0;
  local_94 = 0;
  local_88 = 0xc69c4000;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_27 = 1;
  local_25 = 0;
  local_24 = 0;
  uVar1 = FUN_1405f939e(param_1);
  lVar2 = FUN_140149a73(uVar1,0);
  if (lVar2 == 0) {
    local_24 = 2;
  }
  else {
    FUN_140983ba6(param_1 + 0x188,lVar2,local_b8);
  }
  FUN_140114204(param_1 + 0x188);
  FUN_1409838b8(local_b8);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cbbd1a FUN_143cbbd1a body=250 status=ok
// SIG undefined FUN_143cbbd1a(void)

void FUN_143cbbd1a(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [4];
  undefined8 local_b4;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28;
  undefined2 local_27;
  undefined1 local_25;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar3 = *(longlong *)(param_1 + 0x48);
  FUN_1487de71e(param_1 + 0x198,param_1);
  local_b8[0] = 0;
  local_b4 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a4 = 0;
  uStack_9c = 0;
  local_94 = 0;
  local_88 = 0xc69c4000;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_27 = 1;
  local_25 = 0;
  local_24 = 0;
  FUN_1401aa3da((longlong)&uStack_9c + 4,param_1 + 0x198);
  uVar1 = FUN_1405f939e(param_1);
  lVar3 = lVar3 + 0x38;
  lVar2 = FUN_140149a73(uVar1,0);
  if (lVar2 == 0) {
    local_24 = 2;
  }
  else {
    FUN_140983ba6(lVar3,lVar2,local_b8);
  }
  FUN_140114204(lVar3);
  FUN_1409838b8(local_b8);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cbbe16 FUN_143cbbe16 body=1404 status=ok
// SIG undefined FUN_143cbbe16(void)

double * FUN_143cbbe16(longlong param_1,double *param_2,double *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  bool bVar14;
  double *pdVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = (undefined4 *)0x0;
  uStack_b0 = 0;
  if ((longlong)*(int *)(param_1 + 0x628) == 0) {
    uVar19 = *(undefined4 *)(param_3 + 4);
    uVar21 = *(undefined4 *)((longlong)param_3 + 0x24);
    uVar18 = *(undefined4 *)(param_3 + 5);
    uVar20 = *(undefined4 *)((longlong)param_3 + 0x2c);
    uVar31 = SUB84(param_3[6],0);
    uVar32 = (undefined4)((ulonglong)param_3[6] >> 0x20);
    uStack_b0 = 1;
    dVar2 = 0.0;
LAB_143cbc1e8:
    FUN_1403e3958(&local_b8);
  }
  else {
    plVar12 = *(longlong **)(param_1 + 0x620);
    plVar13 = plVar12 + (longlong)*(int *)(param_1 + 0x628) * 6;
    fVar30 = 0.0;
    do {
      if (*plVar12 != 0) {
        if ((longlong)(int)plVar12[4] != 0) {
          pdVar15 = (double *)plVar12[3];
          pdVar1 = pdVar15 + (longlong)(int)plVar12[4] * 3;
          do {
            dVar22 = *pdVar15 * param_3[8];
            dVar24 = pdVar15[1] * param_3[9];
            dVar25 = pdVar15[2] * param_3[10];
            dVar3 = *param_3;
            dVar6 = param_3[1];
            dVar7 = param_3[2];
            dVar2 = param_3[3];
            dVar26 = dVar24 * dVar3 - dVar22 * dVar6;
            dVar28 = dVar25 * dVar6 - dVar24 * dVar7;
            dVar29 = dVar22 * dVar7 - dVar3 * dVar25;
            dVar28 = dVar28 + dVar28;
            dVar29 = dVar29 + dVar29;
            dVar26 = dVar26 + dVar26;
            dVar23 = param_3[4];
            dVar27 = (dVar7 * dVar28 - dVar3 * dVar26) + param_3[3] * dVar29 + dVar24 + param_3[5];
            dVar24 = param_3[6];
            lVar16 = (longlong)(int)(uint)uStack_b0;
            uVar9 = (uint)uStack_b0 + 1;
            uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar9);
            if (uStack_b0._4_4_ < uVar9) {
              FUN_1403e3958(&local_b8);
            }
            auVar5._8_4_ = SUB84(dVar27,0);
            auVar5._0_8_ = (dVar26 * dVar6 - dVar29 * dVar7) + dVar2 * dVar28 + dVar22 + dVar23;
            auVar5._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
            *(undefined1 (*) [16])(local_b8 + lVar16 * 6) = auVar5;
            *(double *)(local_b8 + lVar16 * 6 + 4) =
                 dVar26 * dVar2 + dVar25 + (dVar29 * dVar3 - dVar28 * dVar6) + dVar24;
            pdVar15 = pdVar15 + 3;
          } while (pdVar15 != pdVar1);
        }
        lVar16 = plVar12[1];
        if (lVar16 == 0) {
          uVar10 = FUN_145cd7f46();
          lVar16 = FUN_14477b664(uVar10);
          plVar12[1] = lVar16;
        }
        lVar17 = plVar12[2];
        if (lVar17 == 0) {
          if ((lVar16 != 0) && (*plVar12 != 0)) {
            plVar4 = *(longlong **)(lVar16 + 0xb8);
            if ((plVar4 == (longlong *)0x0) ||
               (cVar8 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar8 == '\0')) {
              plVar12[2] = 0;
            }
            else {
              uVar10 = (**(code **)(*plVar4 + 0x110))(plVar4);
              lVar17 = FUN_144aff482(uVar10);
              plVar12[2] = lVar17;
              if (lVar17 != 0) {
                lVar16 = plVar12[1];
                goto LAB_143cbbfe7;
              }
            }
          }
        }
        else {
LAB_143cbbfe7:
          if (lVar16 == 0) {
            uVar10 = FUN_145cd7f46();
            lVar16 = FUN_14477b664(uVar10);
            plVar12[1] = lVar16;
            lVar17 = plVar12[2];
            if (lVar17 == 0) {
              if (lVar16 == 0) {
                lVar17 = 0;
              }
              else {
                lVar17 = 0;
                if (*plVar12 != 0) {
                  plVar4 = *(longlong **)(lVar16 + 0xb8);
                  if ((plVar4 == (longlong *)0x0) ||
                     (cVar8 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar8 == '\0')) {
                    lVar17 = 0;
                  }
                  else {
                    uVar10 = (**(code **)(*plVar4 + 0x110))(plVar4);
                    lVar17 = FUN_144aff482(uVar10);
                  }
                  plVar12[2] = lVar17;
                }
              }
            }
          }
          lVar16 = *(longlong *)(lVar17 + 0x20);
          if (lVar16 == 0) {
            uVar10 = FUN_140067708();
            lVar16 = FUN_14477b664(uVar10);
            *(longlong *)(lVar17 + 0x20) = lVar16;
          }
          lVar11 = *(longlong *)(lVar17 + 0x28);
          if (lVar11 == 0) {
            if ((lVar16 != 0) && (*(longlong *)(lVar17 + 0x18) != 0)) {
              plVar4 = *(longlong **)(lVar16 + 0xb8);
              if ((plVar4 == (longlong *)0x0) ||
                 (cVar8 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar8 == '\0')) {
                *(undefined8 *)(lVar17 + 0x28) = 0;
              }
              else {
                uVar10 = (**(code **)(*plVar4 + 0x110))(plVar4);
                lVar11 = FUN_144aff482(uVar10);
                *(longlong *)(lVar17 + 0x28) = lVar11;
                if (lVar11 != 0) goto LAB_143cbc013;
              }
            }
          }
          else {
LAB_143cbc013:
            if (fVar30 < *(float *)(lVar11 + 0x4c)) {
              fVar30 = *(float *)(lVar11 + 0x4c);
            }
          }
        }
      }
      plVar12 = plVar12 + 6;
    } while (plVar12 != plVar13);
    dVar2 = (double)fVar30;
    if ((uint)uStack_b0 != 0) goto LAB_143cbc207;
    uVar19 = *(undefined4 *)(param_3 + 4);
    uVar21 = *(undefined4 *)((longlong)param_3 + 0x24);
    uVar18 = *(undefined4 *)(param_3 + 5);
    uVar20 = *(undefined4 *)((longlong)param_3 + 0x2c);
    uVar31 = SUB84(param_3[6],0);
    uVar32 = (undefined4)((ulonglong)param_3[6] >> 0x20);
    uStack_b0 = CONCAT44(uStack_b0._4_4_,1);
    if (uStack_b0._4_4_ == 0) goto LAB_143cbc1e8;
  }
  *local_b8 = uVar19;
  local_b8[1] = uVar21;
  local_b8[2] = uVar18;
  local_b8[3] = uVar20;
  *(ulonglong *)(local_b8 + 4) = CONCAT44(uVar32,uVar31);
LAB_143cbc207:
  if ((int)(uint)uStack_b0 < 1) {
    dVar24 = 0.0;
    dVar23 = 0.0;
    dVar26 = 0.0;
    uVar19 = 0;
    uVar21 = 0;
    dVar27 = 0.0;
    dVar25 = 0.0;
  }
  else {
    bVar14 = true;
    uVar31 = 0;
    uVar32 = 0;
    lVar16 = 0;
    dVar23 = 0.0;
    dVar26 = 0.0;
    dVar27 = 0.0;
    dVar25 = 0.0;
    uVar18 = 0;
    uVar20 = 0;
    do {
      dVar24 = *(double *)((longlong)local_b8 + lVar16);
      uVar19 = SUB84(dVar24,0);
      uVar21 = (undefined4)((ulonglong)dVar24 >> 0x20);
      if (bVar14) {
        dVar23 = *(double *)((longlong)local_b8 + lVar16 + 8);
        dVar25 = *(double *)((longlong)local_b8 + lVar16 + 0x10);
        dVar26 = dVar25;
        dVar27 = dVar23;
        uVar31 = uVar19;
        uVar32 = uVar21;
      }
      else {
        if (dVar24 <= (double)CONCAT44(uVar32,uVar31)) {
          uVar31 = uVar19;
          uVar32 = uVar21;
        }
        dVar29 = *(double *)((longlong)local_b8 + lVar16 + 8);
        dVar3 = *(double *)((longlong)local_b8 + lVar16 + 0x10);
        if (dVar29 <= dVar23) {
          dVar23 = dVar29;
        }
        if (dVar3 <= dVar26) {
          dVar26 = dVar3;
        }
        if ((double)CONCAT44(uVar20,uVar18) <= dVar24) {
          uVar18 = uVar19;
          uVar20 = uVar21;
        }
        if (dVar27 <= dVar29) {
          dVar27 = dVar29;
        }
        if (dVar25 <= dVar3) {
          dVar25 = dVar3;
        }
        dVar24 = (double)CONCAT44(uVar32,uVar31);
        uVar19 = uVar18;
        uVar21 = uVar20;
      }
      lVar16 = lVar16 + 0x18;
      bVar14 = false;
      uVar18 = uVar19;
      uVar20 = uVar21;
    } while ((ulonglong)(uint)uStack_b0 * 0x18 != lVar16);
  }
  dVar29 = ((dVar25 + dVar2) - (dVar26 - dVar2)) * 0.5;
  dVar27 = ((dVar27 + dVar2) - (dVar23 - dVar2)) * 0.5;
  dVar25 = (((double)CONCAT44(uVar21,uVar19) + dVar2) - (dVar24 - dVar2)) * 0.5;
  *param_2 = (dVar24 - dVar2) + dVar25;
  param_2[1] = (dVar23 - dVar2) + dVar27;
  param_2[2] = (dVar26 - dVar2) + dVar29;
  param_2[3] = dVar25;
  param_2[4] = dVar27;
  param_2[5] = dVar29;
  param_2[6] = SQRT(dVar29 * dVar29 + dVar25 * dVar25 + dVar27 * dVar27);
  if (local_b8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143cbc393 FUN_143cbc393 body=91 status=ok
// SIG undefined FUN_143cbc393(void)

void FUN_143cbc393(void)

{
  if (DAT_14cb72608 != 0) {
    if (DAT_14cb72600 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb72600)(DAT_14cb72600,0);
    FUN_1446efa72(&DAT_14cb72600,0,0,0x10);
    DAT_14cb72608 = 0;
  }
  if (DAT_14cb72600 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143cbc3ee FUN_143cbc3ee body=57 status=ok
// SIG undefined FUN_143cbc3ee(void)

void FUN_143cbc3ee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62c10 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62c10 = FUN_140002ddd(FUN_1464fa3f9,uVar1,L"GbxRotationChannelSettings_Child");
  }
  return;
}



// FUNCTION 143cbc428 FUN_143cbc428 body=31 status=ok
// SIG undefined FUN_143cbc428(void)

undefined8 FUN_143cbc428(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cbc44c FUN_143cbc44c body=182 status=ok
// SIG undefined FUN_143cbc44c(void)

void FUN_143cbc44c(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [44];
  char local_6c [4];
  undefined8 local_68;
  undefined1 local_60 [72];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x5d0);
    if (lVar1 == DAT_14cb72618) {
      local_6c[0] = '\0';
    }
    else {
      local_6c[0] = '\x01';
      if (lVar1 != DAT_14cb72620) {
        local_6c[0] = (lVar1 == DAT_14cb725f8 || lVar1 == DAT_14cb72628) + '\x01';
      }
    }
    local_68 = 0;
    FUN_14070d2c0(local_60,*(undefined8 *)*param_1,local_6c,
                  *(undefined8 *)((undefined8 *)*param_1)[1]);
    FUN_1406ebff6(param_2,1,local_60);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cbc504 FUN_143cbc504 body=169 status=ok
// SIG undefined FUN_143cbc504(void)

void FUN_143cbc504(longlong *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar2 = *param_2;
  lVar3 = *param_1;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar4 = *piVar1;
  if (iVar4 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar4 = *piVar1;
  }
  if ((iVar4 == 0x60000000) || (iVar4 == 0)) {
    *piVar1 = 0x40000002;
  }
  lVar3 = (**(code **)(**(longlong **)(*(longlong *)(lVar3 + 0x58) + 8 + (longlong)iVar2 * 0x10) +
                      0x10))();
  FUN_1447c5244(lVar3,*(undefined4 *)param_1[1]);
  if (*(char *)(lVar3 + 0x181) == '\x03') {
    LOCK();
    *(undefined1 *)param_1[2] = 1;
    UNLOCK();
  }
  if ((iVar4 == 0x60000000) || (iVar4 == 0)) {
    *piVar1 = iVar4;
  }
  return;
}



// FUNCTION 143cbc5ae FUN_143cbc5ae body=64 status=ok
// SIG undefined FUN_143cbc5ae(void)

undefined8 * FUN_143cbc5ae(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3eeef0;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cbc5f2 FUN_143cbc5f2 body=81 status=ok
// SIG undefined FUN_143cbc5f2(void)

undefined8 FUN_143cbc5f2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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



// FUNCTION 143cbc64a FUN_143cbc64a body=89 status=ok
// SIG undefined FUN_143cbc64a(void)

bool FUN_143cbc64a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_143cbc695;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_143cbc695:
  return lVar6 == param_2;
}



// FUNCTION 143cbc6c0 FUN_143cbc6c0 body=118 status=ok
// SIG undefined FUN_143cbc6c0(void)

void FUN_143cbc6c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aba0be0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3eeef0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143cbc736 FUN_143cbc736 body=118 status=ok
// SIG undefined FUN_143cbc736(void)

void FUN_143cbc736(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aba0be0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3eeef0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143cbc7ac FUN_143cbc7ac body=156 status=ok
// SIG undefined FUN_143cbc7ac(void)

void FUN_143cbc7ac(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aba0be0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3eeef0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143cbc838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143cbc848 FUN_143cbc848 body=98 status=ok
// SIG undefined FUN_143cbc848(void)

void FUN_143cbc848(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000143cbc891. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143cbc8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 143cbc8aa FUN_143cbc8aa body=94 status=ok
// SIG undefined FUN_143cbc8aa(void)

ulonglong FUN_143cbc8aa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_143cbc8fd:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_143cbc8fd;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 143cbc988 FUN_143cbc988 body=165 status=ok
// SIG undefined FUN_143cbc988(void)

void FUN_143cbc988(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x18);
    if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(*param_1 + 0x78))) &&
       (plVar2 = *(longlong **)(*(longlong *)(*param_1 + 0x70) + (longlong)iVar1 * 8),
       plVar2 != (longlong *)0x0)) {
      lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
      if (DAT_14cb62b20 == 0) {
        uVar4 = FUN_140325e72();
        DAT_14cb62b20 = FUN_140002ddd(FUN_1464fa00b,uVar4,L"GbxRotationChannel");
        if (DAT_14cb62b20 == 0) {
          return;
        }
      }
      if ((*(int *)(DAT_14cb62b20 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cb62b20 + 0x38) * 8)
          == DAT_14cb62b20 + 0x30)) {
        UNRECOVERED_JUMPTABLE = *(code **)param_1[1];
                    /* WARNING: Could not recover jumptable at 0x000143cbca01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(((undefined8 *)param_1[1])[1],plVar2,UNRECOVERED_JUMPTABLE);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143cbca2e FUN_143cbca2e body=178 status=ok
// SIG undefined FUN_143cbca2e(void)

void FUN_143cbca2e(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x18);
    if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(*param_1 + 0x78))) &&
       (plVar2 = *(longlong **)(*(longlong *)(*param_1 + 0x70) + (longlong)iVar1 * 8),
       plVar2 != (longlong *)0x0)) {
      lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
      if (DAT_14cb62b20 == 0) {
        uVar4 = FUN_140325e72();
        DAT_14cb62b20 = FUN_140002ddd(FUN_1464fa00b,uVar4,L"GbxRotationChannel");
        if (DAT_14cb62b20 == 0) {
          return;
        }
      }
      if ((*(int *)(DAT_14cb62b20 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cb62b20 + 0x38) * 8)
          == DAT_14cb62b20 + 0x30)) {
        UNRECOVERED_JUMPTABLE = *(code **)param_1[1];
                    /* WARNING: Could not recover jumptable at 0x000143cbcab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(((undefined8 *)param_1[1])[1],plVar2,param_3,UNRECOVERED_JUMPTABLE)
        ;
        return;
      }
    }
  }
  return;
}



// FUNCTION 143cbcbd0 FUN_143cbcbd0 body=31 status=ok
// SIG undefined FUN_143cbcbd0(void)

undefined8 FUN_143cbcbd0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cbcce6 FUN_143cbcce6 body=194 status=ok
// SIG undefined FUN_143cbcce6(void)

void FUN_143cbcce6(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar4 = FUN_143e49148();
  plVar5 = (longlong *)FUN_1409fe326(uVar4);
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x40);
  lVar6 = *(longlong *)(lVar1 + 0x40);
  if (lVar6 == 0) {
    uVar4 = FUN_1409ff8bc();
    lVar6 = FUN_14477b664(uVar4);
    *(longlong *)(lVar1 + 0x40) = lVar6;
  }
  lVar7 = *(longlong *)(lVar1 + 0x48);
  if (((lVar7 != 0) || (lVar7 = 0, lVar6 == 0)) || (*(longlong *)(lVar1 + 0x38) == 0))
  goto LAB_143cbcd7d;
  plVar2 = *(longlong **)(lVar6 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_143cbcda4:
    lVar7 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (cVar3 == '\0') goto LAB_143cbcda4;
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar7 = FUN_144aff482(uVar4,(longlong *)(lVar1 + 0x38));
  }
  *(longlong *)(lVar1 + 0x48) = lVar7;
LAB_143cbcd7d:
                    /* WARNING: Could not recover jumptable at 0x000143cbcd96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x10))(plVar5,lVar7,0,0);
  return;
}



// FUNCTION 143cbcdb0 FUN_143cbcdb0 body=29 status=ok
// SIG undefined FUN_143cbcdb0(void)

undefined8 FUN_143cbcdb0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cbcde2 FUN_143cbcde2 body=101 status=ok
// SIG undefined FUN_143cbcde2(void)

void FUN_143cbcde2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar3 = (undefined8 *)*param_2;
  *puVar3 = &PTR_LAB_14a78e0f0;
  puVar3[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar3 = &PTR_FUN_14b3ef100;
  puVar2 = (undefined8 *)(param_1 + 0x18);
  puVar3 = puVar3 + 3;
  for (lVar1 = 0xb; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 143cbce48 FUN_143cbce48 body=101 status=ok
// SIG undefined FUN_143cbce48(void)

void FUN_143cbce48(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar3 = (undefined8 *)*param_2;
  *puVar3 = &PTR_LAB_14a78e0f0;
  puVar3[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar3 = &PTR_FUN_14b3ef100;
  puVar2 = (undefined8 *)(param_1 + 0x18);
  puVar3 = puVar3 + 3;
  for (lVar1 = 0xb; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 143cbceae FUN_143cbceae body=137 status=ok
// SIG undefined FUN_143cbceae(void)

void FUN_143cbceae(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 *puVar3;
  _LIST_ENTRY **pp_Var4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 7) {
    FUN_1446efa72(param_2 + 1,0,7,0x10);
    param_2[1].LockCount = 7;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a78e0f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3ef100;
  puVar3 = (undefined8 *)(param_1 + 0x18);
  pp_Var4 = &(p_Var1->ProcessLocksList).Blink;
  for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pp_Var4 = (_LIST_ENTRY *)*puVar3;
    puVar3 = puVar3 + 1;
    pp_Var4 = pp_Var4 + 1;
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143cbcf27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143cbcf44 FUN_143cbcf44 body=23 status=ok
// SIG undefined FUN_143cbcf44(void)

undefined1 FUN_143cbcf44(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143cbcf5c(param_1 + 0x18,param_3);
  return 1;
}



// FUNCTION 143cbcf5c FUN_143cbcf5c body=2482 status=ok
// SIG undefined FUN_143cbcf5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cbcf5c(longlong *param_1,uint *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  byte bVar15;
  uint uVar16;
  undefined4 *puVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  byte bVar23;
  bool bVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  
  if (param_2[1] == 0) {
    return;
  }
  uVar4 = *param_2;
  if ((int)uVar4 < 0) {
    return;
  }
  if (DAT_14c9647dc <= (int)uVar4) {
    return;
  }
  lVar22 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
  if (lVar22 == 0) {
    return;
  }
  if (*(uint *)(lVar22 + 0x10) != param_2[1]) {
    return;
  }
  lVar5 = *param_1;
  if ((*(uint *)(lVar22 + 8) & 0x10200000) != 0) {
    return;
  }
  uVar4 = param_2[0x4e];
  if ((int)uVar4 < 1) {
    bVar23 = *(byte *)(param_1 + 10);
    uVar33 = 0;
    uVar34 = 0;
    uVar35 = 0;
    uVar36 = 0;
    uVar26 = 0;
    uVar27 = 0;
LAB_143cbd13b:
    uVar18 = 0;
    bVar24 = false;
  }
  else {
    lVar22 = *(longlong *)(param_2 + 0x4c);
    uVar26 = (undefined4)*(undefined8 *)(lVar22 + 0x28);
    uVar27 = (undefined4)((ulonglong)*(undefined8 *)(lVar22 + 0x28) >> 0x20);
    uVar35 = (undefined4)*(undefined8 *)(lVar22 + 0x30);
    uVar36 = (undefined4)((ulonglong)*(undefined8 *)(lVar22 + 0x30) >> 0x20);
    uVar33 = (undefined4)*(undefined8 *)(lVar22 + 0x38);
    uVar34 = (undefined4)((ulonglong)*(undefined8 *)(lVar22 + 0x38) >> 0x20);
    bVar23 = *(byte *)(param_1 + 10);
    if (*(int *)(lVar22 + 0xb4) == 0) goto LAB_143cbd13b;
    uVar16 = *(uint *)(lVar22 + 0xb0);
    uVar18 = 0;
    bVar24 = false;
    if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
      puVar19 = (ulonglong *)
                ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
      if ((puVar19 == (ulonglong *)0x0) ||
         (((int)puVar19[2] != *(int *)(lVar22 + 0xb4) || ((puVar19[1] & 0x10200000) != 0))))
      goto LAB_143cbd13b;
      uVar18 = *puVar19;
      bVar24 = uVar18 != 0;
      if ((bVar24 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(uVar18);
      }
      if ((~DAT_14c950c29 & 1) == 0 && uVar18 != 0) {
        FUN_1456cec3c(uVar18);
      }
      if ((~DAT_14c950c29 & 1) == 0 && uVar18 != 0) {
        FUN_1456cec3c(uVar18);
      }
      if ((uVar18 != 0) && ((DAT_14c950c29 & 1) != 0)) {
        FUN_1456cec3c(uVar18);
        bVar24 = true;
      }
    }
  }
  if (*(int *)(lVar5 + 0x18) != *(int *)(lVar5 + 0x44)) {
    uVar16 = ((uint)(uVar18 >> 0x14) & 0xffff ^ (uint)(uVar18 >> 4)) * -0x7a143595;
    uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
    lVar22 = lVar5 + 0x48;
    if (*(longlong *)(lVar5 + 0x50) != 0) {
      lVar22 = *(longlong *)(lVar5 + 0x50);
    }
    iVar21 = *(int *)(lVar22 + (ulonglong)(*(int *)(lVar5 + 0x58) - 1U & (uVar16 >> 0x10 ^ uVar16))
                               * 4);
    if (iVar21 != -1) {
      lVar22 = 0;
      bVar15 = DAT_14c950c29;
      do {
        if ((bVar24 & bVar15) == 1) {
          FUN_1456cec3c(uVar18);
          bVar15 = DAT_14c950c29;
        }
        lVar20 = (longlong)iVar21;
        uVar6 = *(ulonglong *)(*(longlong *)(lVar5 + 0x10) + lVar20 * 0x18);
        if (((bVar15 & 1) != 0) && (uVar6 != 0)) {
          FUN_1456cec3c(uVar6);
          bVar15 = DAT_14c950c29;
        }
        if ((bVar24 & bVar15) == 1) {
          FUN_1456cec3c(uVar18);
          bVar15 = DAT_14c950c29;
        }
        if (uVar6 == uVar18) {
          lVar22 = *(longlong *)(lVar5 + 0x10) + lVar20 * 0x18;
          break;
        }
        iVar21 = *(int *)(*(longlong *)(lVar5 + 0x10) + 0x10 + lVar20 * 0x18);
      } while (iVar21 != -1);
      goto LAB_143cbd214;
    }
  }
  lVar22 = 0;
LAB_143cbd214:
  puVar17 = (undefined4 *)(lVar22 + 8);
  if (lVar22 == 0) {
    puVar17 = (undefined4 *)0x0;
  }
  uVar32 = 0;
  if ((0 < (int)uVar4) && (puVar17 != (undefined4 *)0x0)) {
    uVar32 = *puVar17;
  }
  if ((int)uVar4 < 1) {
    uVar26 = (undefined4)param_1[4];
    uVar27 = (undefined4)((ulonglong)param_1[4] >> 0x20);
  }
  dVar10 = (double)CONCAT44(uVar27,uVar26) - (double)param_1[1];
  if ((int)uVar4 < 1) {
    uVar35 = (undefined4)param_1[5];
    uVar36 = (undefined4)((ulonglong)param_1[5] >> 0x20);
  }
  dVar11 = (double)CONCAT44(uVar36,uVar35) - (double)param_1[2];
  if ((int)uVar4 < 1) {
    uVar33 = (undefined4)param_1[6];
    uVar34 = (undefined4)((ulonglong)param_1[6] >> 0x20);
  }
  dVar8 = (double)CONCAT44(uVar34,uVar33) - (double)param_1[3];
  dVar1 = (double)param_1[7];
  dVar2 = (double)param_1[8];
  dVar3 = (double)param_1[9];
  uVar18 = (ulonglong)bVar23;
  dVar10 = (double)(float)SQRT(dVar10 * dVar10 + dVar11 * dVar11 + dVar8 * dVar8);
  if ((int)(uint)bVar23 < *(int *)(lVar5 + 0x2c8)) {
    lVar22 = lVar5 + 0x130;
    if (*(longlong *)(lVar5 + 0x2c0) != 0) {
      lVar22 = *(longlong *)(lVar5 + 0x2c0);
    }
    FUN_144af7c28(lVar22 + uVar18 * 0x28,
                  (float)((*(double *)(DAT_14cb72588 + 0x10 + uVar18 * 0x18) * dVar3 +
                          *(double *)(DAT_14cb72588 + uVar18 * 0x18) * dVar1 +
                          *(double *)(DAT_14cb72588 + 8 + uVar18 * 0x18) * dVar2) * dVar10),uVar32,
                  0 < (int)uVar4);
  }
  if ((bVar23 & 0xfb) == 2) {
    if (bVar23 == 2) {
      fVar25 = 0.0;
      if ((int)uVar4 < 1) {
        fVar25 = 0.100000024;
      }
      *(float *)(lVar5 + 0x2d4) = *(float *)(lVar5 + 0x2d4) * 0.9 + fVar25;
    }
  }
  else {
    dVar14 = *(double *)(lVar5 + 0x2e0);
    dVar30 = *(double *)(lVar5 + 0x2f0);
    dVar11 = *(double *)(lVar5 + 0x2e8);
    uVar18 = DAT_149931e80;
    dVar7 = dVar14 * 0.0 - dVar11;
    dVar29 = dVar30 + dVar14 * -0.0;
    dVar31 = dVar11 * 0.0 + dVar30 * -0.0;
    dVar7 = dVar7 + dVar7;
    dVar29 = dVar29 + dVar29;
    dVar31 = dVar31 + dVar31;
    dVar8 = *(double *)(lVar5 + 0x2f8);
    dVar13 = (dVar30 * dVar31 - dVar14 * dVar7) + dVar8 * dVar29 + 0.0;
    dVar28 = (dVar11 * dVar7 - dVar29 * dVar30) + dVar8 * dVar31 + 1.0;
    dVar9 = dVar28 * dVar28 + dVar13 * dVar13;
    uVar33 = (undefined4)DAT_14c8464f0;
    uVar34 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    if ((dVar9 != 1.0) || (NAN(dVar9))) {
      uVar26 = uVar33;
      uVar27 = uVar34;
      dVar29 = DAT_14c8464e0;
      dVar7 = DAT_14c8464e8;
      if (9.99999993922529e-09 <= dVar9) {
        uVar26 = 0;
        uVar27 = 0;
        dVar29 = dVar28 * (1.0 / SQRT(dVar9));
        dVar7 = dVar13 * (1.0 / SQRT(dVar9));
      }
    }
    else {
      dVar7 = dVar29 * dVar14 + dVar31 * (double)((ulonglong)dVar11 ^ uVar18) + dVar7 * dVar8 + 0.0;
      uVar6 = -(ulonglong)(dVar7 == 0.0) & (ulonglong)dVar7;
      uVar26 = (int)uVar6;
      uVar27 = (int)(uVar6 >> 0x20);
      dVar29 = dVar28;
      dVar7 = dVar13;
    }
    dVar9 = dVar14 - dVar11 * 0.0;
    dVar28 = dVar30 * 0.0 + dVar14 * -0.0;
    dVar12 = dVar11 * 0.0 + (double)((ulonglong)dVar30 ^ uVar18);
    dVar9 = dVar9 + dVar9;
    dVar28 = dVar28 + dVar28;
    dVar12 = dVar12 + dVar12;
    dVar13 = dVar30 * dVar12 + (double)((ulonglong)dVar14 ^ uVar18) * dVar9 + dVar8 * dVar28 + 1.0;
    dVar31 = dVar11 * dVar9 + (double)((ulonglong)dVar30 ^ uVar18) * dVar28 + dVar8 * dVar12 + 0.0;
    dVar30 = dVar31 * dVar31 + dVar13 * dVar13;
    if ((dVar30 != 1.0) || (NAN(dVar30))) {
      dVar11 = DAT_14c8464e8;
      dVar8 = DAT_14c8464e0;
      if (9.99999993922529e-09 <= dVar30) {
        uVar33 = 0;
        uVar34 = 0;
        dVar11 = dVar13 * (1.0 / SQRT(dVar30));
        dVar8 = dVar31 * (1.0 / SQRT(dVar30));
      }
    }
    else {
      dVar11 = dVar28 * dVar14 + dVar12 * (double)((ulonglong)dVar11 ^ uVar18) + dVar8 * dVar9 + 0.0
      ;
      uVar6 = -(ulonglong)(dVar11 == 0.0) & (ulonglong)dVar11;
      uVar33 = (undefined4)uVar6;
      uVar34 = (undefined4)(uVar6 >> 0x20);
      dVar11 = dVar13;
      dVar8 = dVar31;
    }
    lVar22 = lVar5 + 0x80;
    dVar31 = (double)_DAT_14cb72580;
    dVar9 = (double)CONCAT44(uVar27,uVar26) * dVar3 + dVar29 * dVar1 + dVar2 * dVar7;
    if (dVar31 <= dVar9) {
      lVar20 = *(longlong *)(lVar5 + 0x120);
      if (*(longlong *)(lVar5 + 0x120) == 0) {
        lVar20 = lVar22;
      }
      FUN_144af7c28(lVar20 + 0x28,(float)(dVar9 * dVar10),uVar32,0 < (int)uVar4);
      dVar31 = (double)_DAT_14cb72580;
    }
    dVar9 = (double)CONCAT44(uVar34,uVar33) * dVar3 + dVar8 * dVar1 + dVar2 * dVar11;
    if (dVar31 <= dVar9) {
      lVar20 = *(longlong *)(lVar5 + 0x120);
      if (*(longlong *)(lVar5 + 0x120) == 0) {
        lVar20 = lVar22;
      }
      FUN_144af7c28(lVar20,(float)(dVar9 * dVar10),uVar32,0 < (int)uVar4);
      dVar31 = (double)_DAT_14cb72580;
    }
    dVar7 = (double)(CONCAT44(uVar27,uVar26) ^ uVar18) * dVar3 +
            (double)((ulonglong)dVar29 ^ uVar18) * dVar1 +
            (double)((ulonglong)dVar7 ^ uVar18) * dVar2;
    if (dVar31 <= dVar7) {
      lVar20 = *(longlong *)(lVar5 + 0x120);
      if (*(longlong *)(lVar5 + 0x120) == 0) {
        lVar20 = lVar22;
      }
      FUN_144af7c28(lVar20 + 0x78,(float)(dVar7 * dVar10),uVar32,0 < (int)uVar4);
      dVar31 = (double)_DAT_14cb72580;
    }
    dVar11 = (double)(CONCAT44(uVar34,uVar33) ^ uVar18) * dVar3 +
             (double)(uVar18 ^ (ulonglong)dVar8) * dVar1 +
             dVar2 * (double)((ulonglong)dVar11 ^ uVar18);
    if (dVar31 <= dVar11) {
      if (*(longlong *)(lVar5 + 0x120) != 0) {
        lVar22 = *(longlong *)(lVar5 + 0x120);
      }
      FUN_144af7c28(lVar22 + 0x50,(float)(dVar11 * dVar10),uVar32,0 < (int)uVar4);
      return;
    }
  }
                    /* WARNING: Read-only address (ram,0x000149931e80) is written */
  return;
}



// FUNCTION 143cbd95a FUN_143cbd95a body=31 status=ok
// SIG undefined FUN_143cbd95a(void)

undefined8 FUN_143cbd95a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cbd979 FUN_143cbd979 body=5438 status=ok
// SIG undefined FUN_143cbd979(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cbd979(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  void *pvVar9;
  double *pdVar10;
  char cVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  double local_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double dStack_180;
  double local_178;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 local_148;
  double dStack_140;
  double local_138;
  double local_130;
  undefined **ppuStack_128;
  undefined1 *local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_148 = "RotationChannel.Body";
  dStack_140._0_5_ = 0x14;
  uVar12 = FUN_14001a6c0(&local_148,1);
  _DAT_14cb721a0 = (ulonglong)uVar12;
  local_148 = "RotationChannel.Aim";
  dStack_140._0_5_ = 0x13;
  uVar12 = FUN_14001a6c0(&local_148,1);
  _DAT_14cb721a8 = (ulonglong)uVar12;
  local_148 = "RotationChannel.Head";
  dStack_140._0_5_ = 0x14;
  uVar12 = FUN_14001a6c0(&local_148,1);
  _DAT_14cb721b0 = (ulonglong)uVar12;
  local_148 = "RotationChannel.Eye";
  dStack_140._0_5_ = 0x13;
  uVar12 = FUN_14001a6c0(&local_148,1);
  _DAT_14cb721b8 = (ulonglong)uVar12;
  local_148 = "AssetRegistry";
  dStack_140 = (double)CONCAT35(dStack_140._5_3_,0xd);
  uVar12 = FUN_14001a6c0(&local_148,1);
  _DAT_14cb721c0 = (ulonglong)uVar12;
  DAT_14cb72618 = 0;
  DAT_14cb72620 = 0;
  DAT_14cb72628 = 0;
  DAT_14cb725f8 = 0;
  FUN_1400b22c2(&local_148,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar11 = FUN_140b10a34(&local_148,&DAT_14cb721c8);
  if (cVar11 == '\0') {
    _DAT_14cb721c8 = 0;
    uRam000000014cb721d0 = 0;
  }
  if (local_148 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_148 = &DAT_14a19662d;
  dStack_140 = (double)CONCAT35(dStack_140._5_3_,4);
  FUN_14001a6c0(&local_148,1);
  _DAT_14cb721d8 = 0x47efffffe0000000;
  _DAT_14cb721e0 = 0x47efffffe0000000;
  _DAT_14cb721e8 = 0x47efffffe0000000;
  _DAT_14cb721f0 = 0x47efffffe0000000;
  _DAT_14cb721f8 = 0x47efffffe0000000;
  _DAT_14cb72200 = 0x47efffffe0000000;
  _DAT_14cb72208 = 0x47efffffe0000000;
  _DAT_14cb72210 = 0x47efffffe0000000;
  FUN_1446f470e(&DAT_14cb72218,L"UnknownAnimNotify",1);
  local_148._0_4_ = 0x5c8a4e31;
  local_148._4_4_ = 0xe61e4d36;
  dStack_140 = -3.6683982862159125e+47;
  _DAT_14cb72220 = 0x5c8a4e31;
  uRam000000014cb72224 = 0xe61e4d36;
  uRam000000014cb72228 = 0xad60351c;
  uRam000000014cb7222c = 0xc9d0106a;
  FUN_141005458(&local_148,0,L"GbxAnimNotifyState_RootMotionType",0);
  atexit((_func_5014 *)&LAB_143cbae1b);
  FUN_1446f470e(&DAT_14cb72230,L"ai_target",1);
  local_148._0_4_ = 1;
  local_1f8 = 0;
  FUN_14078dbce(&DAT_14cb72238,L"a.gbx.Rotation.TickManager",&local_148,
                L"Whether the GbxRotationManager ticks. 0 for disabled, non-zero for enabled.");
  atexit(FUN_143cbaedc);
  local_148 = (char *)CONCAT44(local_148._4_4_,1);
  local_1f8 = 0;
  FUN_14078dbce(&DAT_14cb72250,L"a.gbx.Rotation.ParallelManager",&local_148,
                L"Whether the GbxRotationManager uses parallel-for. 0 for disabled, non-zero for enabled."
               );
  atexit(FUN_143cbaf21);
  FUN_1446f470e(&DAT_14cb72268,L"Stance",1);
  _DAT_14cb72278 = &LAB_143cbb083;
  _DAT_14cb72280 = 0x45000000;
  DAT_14cb72284 = 1;
  DAT_14cb72270 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb72270;
  atexit((_func_5014 *)&LAB_143cbb088);
  _DAT_14cb72290 = 0x47efffffe0000000;
  _DAT_14cb72298 = 0x47efffffe0000000;
  _DAT_14cb722a0 = 0x47efffffe0000000;
  _DAT_14cb722b0 = 0x47efffffe0000000;
  _DAT_14cb722b8 = 0x47efffffe0000000;
  _DAT_14cb722c0 = 0x47efffffe0000000;
  _DAT_14cb722c8 = 0x47efffffe0000000;
  _DAT_14cb722d0 = 0x47efffffe0000000;
  _DAT_14cb722d8 = 0x47efffffe0000000;
  _DAT_14cb722e0 = 0x47efffffe0000000;
  DAT_14cb72348 = 0;
  uRam000000014cb72350 = 0;
  local_138 = 0.0;
  ppuStack_128 = &PTR_LAB_14a1795c0;
  local_120 = &LAB_143cbcbca;
  local_148 = &DAT_14011fc1e;
  FUN_1460e232c(&local_148);
  atexit((_func_5014 *)&LAB_143cbb40e);
  _DAT_14cb723e8 = &LAB_143cbb413;
  _DAT_14cb723f0 = 0x454e4000;
  DAT_14cb723f4 = 1;
  DAT_14cb723e0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb723e0;
  atexit((_func_5014 *)&LAB_143cbb418);
  _DAT_14cb72404 = 0;
  FUN_14052b5e0(&DAT_14cb72400,"PlayerAwareness",0);
  _DAT_14cb72410 = "PlayerAwareness";
  FUN_140056680(&DAT_14cb72418,L"GoreStump_");
  atexit((_func_5014 *)&LAB_143cbb44c);
  FUN_140056680(&DAT_14cb72428,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_143cbb45d);
  FUN_140056680(&DAT_14cb72438,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_143cbb46e);
  FUN_140056680(&DAT_14cb72448,L"GoreFX_");
  atexit((_func_5014 *)&LAB_143cbb47f);
  FUN_1446f470e(&DAT_14cb72458,L"LIMB_GORED",1);
  _DAT_14cb72460 = 0x4072c00000000000;
  _DAT_14cb72468 = 0x4082c00000000000;
  DAT_14cb724d0 = 0;
  uRam000000014cb724d8 = 0;
  local_138 = 0.0;
  ppuStack_128 = &PTR_LAB_14a1795c0;
  local_120 = &LAB_143cbccde;
  local_148 = &DAT_14011fc1e;
  FUN_1460e2ac2(&local_148);
  atexit((_func_5014 *)&LAB_143cbb4b9);
  _DAT_14cb72568 = &LAB_143cbb4be;
  _DAT_14cb72570 = 0x454e5000;
  DAT_14cb72574 = 1;
  DAT_14cb72560 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb72560;
  atexit((_func_5014 *)&LAB_143cbb4c3);
  _DAT_14cb72580 = 0xb33bbd2e;
  local_148 = (char *)DAT_14c846290;
  dStack_140 = DAT_14c846298;
  local_138 = DAT_14c8462a0;
  local_130 = DAT_14c8462a8;
  ppuStack_128 = (undefined **)DAT_14c8462b0;
  local_120 = (undefined1 *)DAT_14c8462b8;
  local_118 = DAT_14c8462c0;
  dStack_110 = DAT_14c8462c8;
  local_108 = DAT_14c8462d0;
  local_100 = DAT_14c8462d8;
  dStack_f8 = DAT_14c8462e0;
  local_f0 = DAT_14c8462e8;
  dVar17 = DAT_14c8462e0 + DAT_14c846298;
  dVar2 = DAT_14c8462d8 + DAT_14c846290;
  dVar1 = dVar2 * dVar2 + dVar17 * dVar17;
  uVar14 = SUB84(DAT_14c8464f0,0);
  uVar16 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  if ((dVar1 != 1.0) || (NAN(dVar1))) {
    uVar13 = uVar14;
    uVar15 = uVar16;
    local_1f0 = DAT_14c8464e8;
    dVar18 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar1) {
      uVar13 = 0;
      uVar15 = 0;
      local_1f0 = dVar17 * (1.0 / SQRT(dVar1));
      dVar18 = dVar2 * (1.0 / SQRT(dVar1));
    }
    dVar2 = dVar18;
    local_1e8 = (double)CONCAT44(uVar15,uVar13);
  }
  else {
    local_1e8 = (double)(-(ulonglong)(DAT_14c8462e8 + DAT_14c8462a0 == 0.0) &
                        (ulonglong)(DAT_14c8462e8 + DAT_14c8462a0));
    local_1f0 = dVar17;
  }
  uStack_1e0 = 0;
  dVar17 = DAT_14c8462e0 + DAT_14c8462b0;
  dVar18 = DAT_14c8462d8 + DAT_14c8462a8;
  dVar1 = dVar18 * dVar18 + dVar17 * dVar17;
  if ((dVar1 != 1.0) || (NAN(dVar1))) {
    uVar13 = uVar14;
    uVar15 = uVar16;
    dVar19 = DAT_14c8464e8;
    dVar3 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar1) {
      uVar13 = 0;
      uVar15 = 0;
      dVar19 = dVar17 * (1.0 / SQRT(dVar1));
      dVar3 = dVar18 * (1.0 / SQRT(dVar1));
    }
  }
  else {
    uVar6 = -(ulonglong)(DAT_14c8462e8 + DAT_14c8462b8 == 0.0) &
            (ulonglong)(DAT_14c8462e8 + DAT_14c8462b8);
    uVar13 = (int)uVar6;
    uVar15 = (int)(uVar6 >> 0x20);
    dVar19 = dVar17;
    dVar3 = dVar18;
  }
  local_158 = DAT_14c846300;
  local_168 = DAT_14c8462f0;
  dStack_160 = DAT_14c8462f8;
  local_188 = DAT_14c846308;
  dStack_180 = DAT_14c846310;
  local_178 = DAT_14c846318;
  dVar1 = DAT_14c846298 + DAT_14c846310;
  dVar17 = DAT_14c846290 + DAT_14c846308;
  dVar18 = dVar17 * dVar17 + dVar1 * dVar1;
  if ((dVar18 != 1.0) || (NAN(dVar18))) {
    uVar20 = uVar14;
    uVar21 = uVar16;
    dVar4 = DAT_14c8464e8;
    dVar5 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar18) {
      uVar20 = 0;
      uVar21 = 0;
      dVar4 = dVar1 * (1.0 / SQRT(dVar18));
      dVar5 = dVar17 * (1.0 / SQRT(dVar18));
    }
  }
  else {
    uVar6 = -(ulonglong)(DAT_14c846318 + DAT_14c8462a0 == 0.0) &
            (ulonglong)(DAT_14c846318 + DAT_14c8462a0);
    uVar20 = (int)uVar6;
    uVar21 = (int)(uVar6 >> 0x20);
    dVar4 = dVar1;
    dVar5 = dVar17;
  }
  dVar17 = DAT_14c8462b0 + DAT_14c846310;
  dVar18 = DAT_14c8462a8 + DAT_14c846308;
  dVar1 = dVar18 * dVar18 + dVar17 * dVar17;
  if ((dVar1 != 1.0) || (NAN(dVar1))) {
    dVar7 = DAT_14c8464e8;
    dVar8 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar1) {
      uVar14 = 0;
      uVar16 = 0;
      dVar7 = dVar17 * (1.0 / SQRT(dVar1));
      dVar8 = dVar18 * (1.0 / SQRT(dVar1));
    }
  }
  else {
    uVar6 = -(ulonglong)(DAT_14c846318 + DAT_14c8462b8 == 0.0) &
            (ulonglong)(DAT_14c846318 + DAT_14c8462b8);
    uVar14 = (undefined4)uVar6;
    uVar16 = (undefined4)(uVar6 >> 0x20);
    dVar7 = dVar17;
    dVar8 = dVar18;
  }
  DAT_14cb72588 = (void *)0x0;
  _DAT_14cb72590 = 10;
  FUN_1405b70fe(&DAT_14cb72588,10,0);
  pvVar9 = DAT_14cb72588;
  memcpy(DAT_14cb72588,&local_148,0x60);
  *(double *)((longlong)pvVar9 + 0x60) = dVar2;
  *(double *)((longlong)pvVar9 + 0x68) = local_1f0;
  *(double *)((longlong)pvVar9 + 0x70) = local_1e8;
  *(double *)((longlong)pvVar9 + 0x78) = dVar3;
  *(double *)((longlong)pvVar9 + 0x80) = dVar19;
  *(ulonglong *)((longlong)pvVar9 + 0x88) = CONCAT44(uVar15,uVar13);
  *(double *)((longlong)pvVar9 + 0x90) = local_168;
  *(double *)((longlong)pvVar9 + 0x98) = dStack_160;
  *(double *)((longlong)pvVar9 + 0xa0) = local_158;
  *(double *)((longlong)pvVar9 + 0xb8) = local_178;
  *(double *)((longlong)pvVar9 + 0xa8) = local_188;
  *(double *)((longlong)pvVar9 + 0xb0) = dStack_180;
  *(double *)((longlong)pvVar9 + 0xc0) = dVar5;
  *(double *)((longlong)pvVar9 + 200) = dVar4;
  *(ulonglong *)((longlong)pvVar9 + 0xd0) = CONCAT44(uVar21,uVar20);
  *(double *)((longlong)pvVar9 + 0xd8) = dVar8;
  *(double *)((longlong)pvVar9 + 0xe0) = dVar7;
  *(ulonglong *)((longlong)pvVar9 + 0xe8) = CONCAT44(uVar16,uVar14);
  atexit((_func_5014 *)&LAB_143cbb4f7);
  uVar13 = SUB84(DAT_14c846290,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c846290 >> 0x20);
  uVar14 = SUB84(DAT_14c846298,0);
  uVar16 = (undefined4)((ulonglong)DAT_14c846298 >> 0x20);
  if ((((DAT_14c846290 != 0.0) || (NAN(DAT_14c846290))) || (DAT_14c846298 != 0.0)) ||
     (NAN(DAT_14c846298))) {
    local_1f0 = atan2(DAT_14c846298,DAT_14c846290);
    local_1f0 = local_1f0 * 57.29577951308232;
    uVar13 = SUB84(DAT_14c846290,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c846290 >> 0x20);
    uVar14 = SUB84(DAT_14c846298,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c846298 >> 0x20);
  }
  else {
    local_1f0 = 0.0;
  }
  dVar2 = SQRT((double)CONCAT44(uVar15,uVar13) * (double)CONCAT44(uVar15,uVar13) +
               (double)CONCAT44(uVar16,uVar14) * (double)CONCAT44(uVar16,uVar14));
  dVar1 = 0.0;
  if (((DAT_14c8462a0 != 0.0) || (NAN(DAT_14c8462a0))) || ((dVar2 != 0.0 || (NAN(dVar2))))) {
    dVar1 = atan2(DAT_14c8462a0,dVar2);
    dVar1 = dVar1 * 57.29577951308232;
  }
  uVar13 = SUB84(DAT_14c8462a8,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c8462a8 >> 0x20);
  uVar14 = SUB84(DAT_14c8462b0,0);
  uVar16 = (undefined4)((ulonglong)DAT_14c8462b0 >> 0x20);
  if (((DAT_14c8462a8 != 0.0) || (NAN(DAT_14c8462a8))) ||
     ((DAT_14c8462b0 != 0.0 || (NAN(DAT_14c8462b0))))) {
    local_1c8 = atan2(DAT_14c8462b0,DAT_14c8462a8);
    local_1c8 = local_1c8 * 57.29577951308232;
    uVar13 = SUB84(DAT_14c8462a8,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c8462a8 >> 0x20);
    uVar14 = SUB84(DAT_14c8462b0,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c8462b0 >> 0x20);
  }
  else {
    local_1c8 = 0.0;
  }
  dVar17 = SQRT((double)CONCAT44(uVar15,uVar13) * (double)CONCAT44(uVar15,uVar13) +
                (double)CONCAT44(uVar16,uVar14) * (double)CONCAT44(uVar16,uVar14));
  dVar2 = 0.0;
  if ((((DAT_14c8462b8 != 0.0) || (NAN(DAT_14c8462b8))) || (dVar17 != 0.0)) || (NAN(dVar17))) {
    dVar2 = atan2(DAT_14c8462b8,dVar17);
    dVar2 = dVar2 * 57.29577951308232;
  }
  uVar13 = SUB84(DAT_14c8462c0,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c8462c0 >> 0x20);
  uVar14 = SUB84(DAT_14c8462c8,0);
  uVar16 = (undefined4)((ulonglong)DAT_14c8462c8 >> 0x20);
  if (((DAT_14c8462c0 != 0.0) || (NAN(DAT_14c8462c0))) ||
     ((DAT_14c8462c8 != 0.0 || (NAN(DAT_14c8462c8))))) {
    local_1d0 = atan2(DAT_14c8462c8,DAT_14c8462c0);
    local_1d0 = local_1d0 * 57.29577951308232;
    uVar13 = SUB84(DAT_14c8462c0,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c8462c0 >> 0x20);
    uVar14 = SUB84(DAT_14c8462c8,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c8462c8 >> 0x20);
  }
  else {
    local_1d0 = 0.0;
  }
  dVar17 = SQRT((double)CONCAT44(uVar15,uVar13) * (double)CONCAT44(uVar15,uVar13) +
                (double)CONCAT44(uVar16,uVar14) * (double)CONCAT44(uVar16,uVar14));
  local_198 = 0.0;
  if (((DAT_14c8462d0 != 0.0) || (NAN(DAT_14c8462d0))) || ((dVar17 != 0.0 || (NAN(dVar17))))) {
    local_198 = atan2(DAT_14c8462d0,dVar17);
    local_198 = local_198 * 57.29577951308232;
  }
  uVar14 = SUB84(DAT_14c8462d8,0);
  uVar16 = (undefined4)((ulonglong)DAT_14c8462d8 >> 0x20);
  uVar13 = SUB84(DAT_14c8462e0,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c8462e0 >> 0x20);
  if ((((DAT_14c8462d8 != 0.0) || (NAN(DAT_14c8462d8))) || (DAT_14c8462e0 != 0.0)) ||
     (NAN(DAT_14c8462e0))) {
    local_1d8 = atan2(DAT_14c8462e0,DAT_14c8462d8);
    local_1d8 = local_1d8 * 57.29577951308232;
    uVar14 = SUB84(DAT_14c8462d8,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c8462d8 >> 0x20);
    uVar13 = SUB84(DAT_14c8462e0,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c8462e0 >> 0x20);
  }
  else {
    local_1d8 = 0.0;
  }
  dVar17 = SQRT((double)CONCAT44(uVar16,uVar14) * (double)CONCAT44(uVar16,uVar14) +
                (double)CONCAT44(uVar15,uVar13) * (double)CONCAT44(uVar15,uVar13));
  local_1a0 = 0.0;
  if (((DAT_14c8462e8 != 0.0) || (NAN(DAT_14c8462e8))) || ((dVar17 != 0.0 || (NAN(dVar17))))) {
    local_1a0 = atan2(DAT_14c8462e8,dVar17);
    local_1a0 = local_1a0 * 57.29577951308232;
    uVar13 = SUB84(DAT_14c8462e0,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c8462e0 >> 0x20);
    uVar14 = SUB84(DAT_14c8462d8,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c8462d8 >> 0x20);
  }
  dVar19 = (double)CONCAT44(uVar15,uVar13) + DAT_14c846298;
  dVar18 = (double)CONCAT44(uVar16,uVar14) + DAT_14c846290;
  dVar17 = dVar18 * dVar18 + dVar19 * dVar19;
  if ((dVar17 != 1.0) || (NAN(dVar17))) {
    dVar3 = DAT_14c8464e8;
    dVar4 = DAT_14c8464e0;
    dVar5 = DAT_14c8464f0;
    if (9.99999993922529e-09 <= dVar17) {
      dVar3 = dVar19 * (1.0 / SQRT(dVar17));
      dVar4 = dVar18 * (1.0 / SQRT(dVar17));
      dVar5 = 0.0;
    }
  }
  else {
    dVar17 = DAT_14c8462e8 + DAT_14c8462a0;
    dVar3 = dVar19;
    dVar4 = dVar18;
    dVar5 = 0.0;
    if ((dVar17 == 0.0) && (dVar5 = 0.0, !NAN(dVar17))) {
      dVar5 = dVar17;
    }
  }
  local_1a8 = 0.0;
  if ((((dVar3 != 0.0) || (NAN(dVar3))) || (dVar4 != 0.0)) || (NAN(dVar4))) {
    local_1a8 = atan2(dVar3,dVar4);
    local_1a8 = local_1a8 * 57.29577951308232;
  }
  dVar17 = SQRT(dVar4 * dVar4 + dVar3 * dVar3);
  local_1b0 = 0.0;
  if (((dVar5 != 0.0) || (NAN(dVar5))) || ((dVar17 != 0.0 || (NAN(dVar17))))) {
    local_1b0 = atan2(dVar5,dVar17);
    local_1b0 = local_1b0 * 57.29577951308232;
  }
  dVar17 = DAT_14c8462e0 + DAT_14c8462b0;
  dVar18 = DAT_14c8462d8 + DAT_14c8462a8;
  dVar19 = dVar18 * dVar18 + dVar17 * dVar17;
  if ((dVar19 != 1.0) || (NAN(dVar19))) {
    if (9.99999993922529e-09 <= dVar19) {
      dVar17 = dVar17 * (1.0 / SQRT(dVar19));
      dVar18 = dVar18 * (1.0 / SQRT(dVar19));
      uVar14 = 0;
      uVar16 = 0;
    }
    else {
      uVar14 = SUB84(DAT_14c8464f0,0);
      uVar16 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      dVar17 = DAT_14c8464e8;
      dVar18 = DAT_14c8464e0;
    }
  }
  else {
    dVar19 = DAT_14c8462e8 + DAT_14c8462b8;
    uVar14 = 0;
    uVar16 = 0;
    if ((dVar19 == 0.0) && (!NAN(dVar19))) {
      uVar14 = SUB84(dVar19,0);
      uVar16 = (undefined4)((ulonglong)dVar19 >> 0x20);
    }
  }
  local_1b8 = 0.0;
  if ((((dVar17 != 0.0) || (NAN(dVar17))) || (dVar18 != 0.0)) || (NAN(dVar18))) {
    local_1b8 = atan2(dVar17,dVar18);
    local_1b8 = local_1b8 * 57.29577951308232;
  }
  dVar17 = SQRT(dVar18 * dVar18 + dVar17 * dVar17);
  local_1c0 = 0.0;
  if ((((double)CONCAT44(uVar16,uVar14) != 0.0) || (NAN((double)CONCAT44(uVar16,uVar14)))) ||
     ((dVar17 != 0.0 || (NAN(dVar17))))) {
    local_1c0 = atan2((double)CONCAT44(uVar16,uVar14),dVar17);
    local_1c0 = local_1c0 * 57.29577951308232;
  }
  uVar13 = SUB84(DAT_14c8462f0,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c8462f0 >> 0x20);
  uVar14 = SUB84(DAT_14c8462f8,0);
  uVar16 = (undefined4)((ulonglong)DAT_14c8462f8 >> 0x20);
  dVar17 = 0.0;
  local_1e8 = dVar1;
  if (((DAT_14c8462f0 != 0.0) || (NAN(DAT_14c8462f0))) ||
     ((DAT_14c8462f8 != 0.0 || (NAN(DAT_14c8462f8))))) {
    dVar17 = atan2(DAT_14c8462f8,DAT_14c8462f0);
    dVar17 = dVar17 * 57.29577951308232;
    uVar13 = SUB84(DAT_14c8462f0,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c8462f0 >> 0x20);
    uVar14 = SUB84(DAT_14c8462f8,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c8462f8 >> 0x20);
  }
  dVar18 = SQRT((double)CONCAT44(uVar15,uVar13) * (double)CONCAT44(uVar15,uVar13) +
                (double)CONCAT44(uVar16,uVar14) * (double)CONCAT44(uVar16,uVar14));
  dVar1 = 0.0;
  if ((((DAT_14c846300 != 0.0) || (NAN(DAT_14c846300))) || (dVar18 != 0.0)) || (NAN(dVar18))) {
    dVar1 = atan2(DAT_14c846300,dVar18);
    dVar1 = dVar1 * 57.29577951308232;
  }
  uVar14 = SUB84(DAT_14c846308,0);
  uVar16 = (undefined4)((ulonglong)DAT_14c846308 >> 0x20);
  uVar13 = SUB84(DAT_14c846310,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c846310 >> 0x20);
  dVar18 = 0.0;
  local_190 = dVar2;
  if (((DAT_14c846308 != 0.0) || (NAN(DAT_14c846308))) ||
     ((DAT_14c846310 != 0.0 || (NAN(DAT_14c846310))))) {
    dVar18 = atan2(DAT_14c846310,DAT_14c846308);
    dVar18 = dVar18 * 57.29577951308232;
    uVar14 = SUB84(DAT_14c846308,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c846308 >> 0x20);
    uVar13 = SUB84(DAT_14c846310,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c846310 >> 0x20);
  }
  dVar19 = SQRT((double)CONCAT44(uVar16,uVar14) * (double)CONCAT44(uVar16,uVar14) +
                (double)CONCAT44(uVar15,uVar13) * (double)CONCAT44(uVar15,uVar13));
  dVar2 = 0.0;
  if (((DAT_14c846318 != 0.0) || (NAN(DAT_14c846318))) || ((dVar19 != 0.0 || (NAN(dVar19))))) {
    dVar2 = atan2(DAT_14c846318,dVar19);
    dVar2 = dVar2 * 57.29577951308232;
    uVar13 = SUB84(DAT_14c846310,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c846310 >> 0x20);
    uVar14 = SUB84(DAT_14c846308,0);
    uVar16 = (undefined4)((ulonglong)DAT_14c846308 >> 0x20);
  }
  dVar4 = (double)CONCAT44(uVar15,uVar13) + DAT_14c846298;
  dVar3 = (double)CONCAT44(uVar16,uVar14) + DAT_14c846290;
  dVar19 = dVar3 * dVar3 + dVar4 * dVar4;
  if ((dVar19 != 1.0) || (NAN(dVar19))) {
    if (9.99999993922529e-09 <= dVar19) {
      dVar4 = dVar4 * (1.0 / SQRT(dVar19));
      dVar3 = dVar3 * (1.0 / SQRT(dVar19));
      uVar14 = 0;
      uVar16 = 0;
    }
    else {
      uVar14 = SUB84(DAT_14c8464f0,0);
      uVar16 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      dVar4 = DAT_14c8464e8;
      dVar3 = DAT_14c8464e0;
    }
  }
  else {
    dVar19 = DAT_14c846318 + DAT_14c8462a0;
    uVar14 = 0;
    uVar16 = 0;
    if ((dVar19 == 0.0) && (!NAN(dVar19))) {
      uVar14 = SUB84(dVar19,0);
      uVar16 = (undefined4)((ulonglong)dVar19 >> 0x20);
    }
  }
  dVar19 = 0.0;
  if ((((dVar4 != 0.0) || (NAN(dVar4))) || (dVar3 != 0.0)) || (NAN(dVar3))) {
    dVar19 = atan2(dVar4,dVar3);
    dVar19 = dVar19 * 57.29577951308232;
  }
  dVar4 = SQRT(dVar3 * dVar3 + dVar4 * dVar4);
  dVar3 = 0.0;
  if ((((double)CONCAT44(uVar16,uVar14) != 0.0) || (NAN((double)CONCAT44(uVar16,uVar14)))) ||
     ((dVar4 != 0.0 || (NAN(dVar4))))) {
    dVar3 = atan2((double)CONCAT44(uVar16,uVar14),dVar4);
    dVar3 = dVar3 * 57.29577951308232;
  }
  dVar5 = DAT_14c846310 + DAT_14c8462b0;
  dVar7 = DAT_14c846308 + DAT_14c8462a8;
  dVar4 = dVar7 * dVar7 + dVar5 * dVar5;
  if ((dVar4 != 1.0) || (NAN(dVar4))) {
    if (9.99999993922529e-09 <= dVar4) {
      dVar5 = dVar5 * (1.0 / SQRT(dVar4));
      dVar7 = dVar7 * (1.0 / SQRT(dVar4));
      uVar14 = 0;
      uVar16 = 0;
    }
    else {
      uVar14 = SUB84(DAT_14c8464f0,0);
      uVar16 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      dVar5 = DAT_14c8464e8;
      dVar7 = DAT_14c8464e0;
    }
  }
  else {
    dVar4 = DAT_14c846318 + DAT_14c8462b8;
    uVar14 = 0;
    uVar16 = 0;
    if ((dVar4 == 0.0) && (!NAN(dVar4))) {
      uVar14 = SUB84(dVar4,0);
      uVar16 = (undefined4)((ulonglong)dVar4 >> 0x20);
    }
  }
  dVar4 = 0.0;
  if ((((dVar5 != 0.0) || (NAN(dVar5))) || (dVar7 != 0.0)) || (NAN(dVar7))) {
    dVar4 = atan2(dVar5,dVar7);
    dVar4 = dVar4 * 57.29577951308232;
  }
  dVar7 = SQRT(dVar7 * dVar7 + dVar5 * dVar5);
  dVar5 = 0.0;
  if ((((double)CONCAT44(uVar16,uVar14) != 0.0) || (NAN((double)CONCAT44(uVar16,uVar14)))) ||
     ((dVar7 != 0.0 || (NAN(dVar7))))) {
    dVar5 = atan2((double)CONCAT44(uVar16,uVar14),dVar7);
    dVar5 = dVar5 * 57.29577951308232;
  }
  DAT_14cb72598 = (double *)0x0;
  _DAT_14cb725a0 = 10;
  FUN_1464bf958(&DAT_14cb72598,10,0);
  pdVar10 = DAT_14cb72598;
  *DAT_14cb72598 = local_1e8;
  pdVar10[1] = local_1f0;
  pdVar10[2] = 0.0;
  pdVar10[3] = local_190;
  pdVar10[4] = local_1c8;
  pdVar10[5] = 0.0;
  pdVar10[6] = local_198;
  pdVar10[7] = local_1d0;
  pdVar10[8] = 0.0;
  pdVar10[9] = local_1a0;
  pdVar10[10] = local_1d8;
  pdVar10[0xb] = 0.0;
  pdVar10[0xc] = local_1b0;
  pdVar10[0xd] = local_1a8;
  pdVar10[0xe] = 0.0;
  pdVar10[0xf] = local_1c0;
  pdVar10[0x10] = local_1b8;
  pdVar10[0x11] = 0.0;
  pdVar10[0x12] = dVar1;
  pdVar10[0x13] = dVar17;
  pdVar10[0x14] = 0.0;
  pdVar10[0x15] = dVar2;
  pdVar10[0x16] = dVar18;
  pdVar10[0x17] = 0.0;
  pdVar10[0x18] = dVar3;
  pdVar10[0x19] = dVar19;
  pdVar10[0x1a] = 0.0;
  pdVar10[0x1b] = dVar5;
  pdVar10[0x1c] = dVar4;
  pdVar10[0x1d] = 0.0;
  atexit((_func_5014 *)&LAB_143cbb508);
  FUN_1446f470e(&DAT_14cb725a8,L"GbxAcousticTrace",1);
  FUN_1446f470e(&DAT_14cb725b0,L"Then",1);
  FUN_1446f470e(&DAT_14cb725b8,L"Else",1);
  FUN_1446f470e(&DAT_14cb725c0,&DAT_149e0617a,1);
  FUN_1446f470e(&DAT_14cb725c8,L"False",1);
  FUN_1446f470e(&DAT_14cb725d0,L"StateMachineName",1);
  FUN_1446f470e(&DAT_14cb725d8,L"FactValues",1);
  FUN_1446f470e(&DAT_14cb725e0,L"DefaultState",1);
  FUN_1446f470e(&DAT_14cb725e8,L"CurrentState",1);
  FUN_1446f470e(&DAT_14cb725f0,L"AudioGraphSwitch",1);
  if ((local_e0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cbeeb8 FUN_143cbeeb8 body=41 status=ok
// SIG undefined FUN_143cbeeb8(void)

void FUN_143cbeeb8(void)

{
  DAT_14cb72688 = 0;
  if (DAT_14cb72680 != 0) {
    FUN_1400020a8();
  }
  FUN_145d64b30();
  return;
}



// FUNCTION 143cbef20 FUN_143cbef20 body=463 status=ok
// SIG undefined FUN_143cbef20(void)

undefined4 FUN_143cbef20(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = *(longlong *)(param_1 + 0x58);
  if (lVar6 == 0) {
    uVar5 = FUN_140067708();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x58) = lVar6;
  }
  plVar1 = (longlong *)(param_1 + 0x50);
  lVar7 = *(longlong *)(param_1 + 0x60);
  if (lVar7 == 0) {
    if (lVar6 == 0) {
      return 0x3f800000;
    }
    if (*plVar1 == 0) {
      return 0x3f800000;
    }
    plVar2 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x60) = 0;
      return 0x3f800000;
    }
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar7 = FUN_144aff482(uVar5,plVar1);
    *(longlong *)(param_1 + 0x60) = lVar7;
    if (lVar7 == 0) {
      return 0x3f800000;
    }
    lVar6 = *(longlong *)(param_1 + 0x58);
  }
  if (lVar6 == 0) {
    uVar5 = FUN_140067708();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x58) = lVar6;
    lVar7 = *(longlong *)(param_1 + 0x60);
    if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar7 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar7 = FUN_144aff482(uVar5,plVar1);
      }
      *(longlong *)(param_1 + 0x60) = lVar7;
    }
  }
  iVar4 = _finite((double)*(float *)(lVar7 + 0x4c));
  if (iVar4 != 0) {
    if (0.0001 < *(float *)(lVar7 + 0x4c)) {
      lVar6 = *(longlong *)(param_1 + 0x58);
      if (lVar6 == 0) {
        uVar5 = FUN_140067708();
        lVar6 = FUN_14477b664(uVar5);
        *(longlong *)(param_1 + 0x58) = lVar6;
      }
      lVar7 = *(longlong *)(param_1 + 0x60);
      if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*plVar1 != 0)) {
        plVar2 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          lVar7 = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar7 = FUN_144aff482(uVar5,plVar1);
        }
        *(longlong *)(param_1 + 0x60) = lVar7;
      }
      return *(undefined4 *)(lVar7 + 0x4c);
    }
    return 0x3f800000;
  }
  return 0x3f800000;
}



// FUNCTION 143cbf0f0 FUN_143cbf0f0 body=14553 status=ok
// SIG undefined FUN_143cbf0f0(void)

void FUN_143cbf0f0(longlong param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  void *pvVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  byte bVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  longlong *plVar16;
  uint *puVar17;
  longlong lVar18;
  longlong **pplVar19;
  longlong lVar20;
  uint *puVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  ulonglong *puVar24;
  byte bVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  undefined **ppuVar29;
  longlong *plVar30;
  longlong *plVar31;
  longlong lVar32;
  longlong lVar33;
  uint uVar34;
  longlong *plVar35;
  ulonglong uVar36;
  double *pdVar37;
  int *piVar38;
  int iVar39;
  longlong *plVar40;
  undefined8 *puVar41;
  longlong *plVar42;
  longlong lVar43;
  double *pdVar44;
  undefined8 *puVar45;
  uint uVar46;
  int iVar47;
  longlong *plVar48;
  ulonglong uVar49;
  int iVar50;
  longlong lVar51;
  longlong *plVar52;
  double dVar53;
  longlong *plVar54;
  ulonglong uVar55;
  ulonglong uVar56;
  bool bVar57;
  float fVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  float fVar64;
  double dVar65;
  float fVar66;
  double dVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  float fVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  undefined4 uVar84;
  undefined4 uVar85;
  undefined1 auStack_558 [32];
  ulonglong local_538;
  longlong local_530;
  longlong *local_528;
  longlong *local_520;
  longlong *local_518;
  longlong *local_510;
  longlong *local_508;
  float local_4fc;
  longlong *local_4f8;
  LPCRITICAL_SECTION local_4f0;
  double local_4e8;
  double local_4e0;
  float local_4d4;
  uint local_4d0;
  int local_4cc;
  undefined1 local_4c8 [16];
  longlong local_4b0;
  ulonglong local_4a8;
  uint *local_4a0;
  ulonglong *local_498;
  ulonglong local_490;
  undefined1 local_488 [16];
  double local_478;
  ulonglong local_470;
  longlong local_468;
  longlong local_460;
  longlong local_458;
  ulonglong local_450;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  longlong local_430 [2];
  longlong *local_420;
  undefined8 *local_418;
  undefined8 uStack_410;
  longlong *local_408;
  undefined8 uStack_400;
  longlong *local_3f8;
  undefined8 uStack_3f0;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined8 local_3e0;
  longlong lStack_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  longlong local_3b8 [4];
  longlong local_398;
  longlong *local_388;
  longlong local_378 [4];
  undefined4 local_358;
  undefined1 local_350 [96];
  longlong local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined8 local_2e0;
  undefined4 local_2d8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_558;
  local_498 = (ulonglong *)(param_1 + 0x1c0);
  plVar16 = (longlong *)FUN_1401c6a1e();
  local_530 = param_1;
  if (plVar16 != (longlong *)0x0) {
    local_468 = param_1 + 0x140;
    local_4f0 = (LPCRITICAL_SECTION)(param_1 + 0x300);
    local_4f8 = (longlong *)(param_1 + 0x328);
    local_528 = (longlong *)(param_1 + 0x380);
    local_4b0 = param_1 + 0x360;
    local_4a0 = (uint *)(param_1 + 0x338);
    local_470 = param_1 + 0x250;
    uVar68 = 0;
    uVar70 = 0;
    uVar59 = 0;
    uVar60 = 0x3ff00000;
    do {
      if (param_1 != 0) {
        puVar21 = (uint *)(plVar16 + 0xc);
        iVar15 = (int)plVar16[0xf];
        local_518 = plVar16;
        if (iVar15 == 0) {
          uVar56 = 1;
          iVar39 = 0;
          uVar55 = 0;
          iVar26 = 0;
        }
        else {
          puVar17 = (uint *)plVar16[0xe];
          if ((uint *)plVar16[0xe] == (uint *)0x0) {
            puVar17 = puVar21;
          }
          uVar14 = *puVar17;
          if (uVar14 == 0) {
            iVar26 = iVar15 + 0x1e;
            if (-1 < iVar15 + -1) {
              iVar26 = iVar15 + -1;
            }
            uVar55 = 0;
            uVar56 = (ulonglong)(uint)(iVar26 >> 5);
            if (iVar26 >> 5 < 1) {
              uVar56 = uVar55;
            }
            iVar39 = 0;
            do {
              if (uVar56 == uVar55) goto LAB_143cbf2c8;
              iVar39 = iVar39 + 0x20;
              uVar14 = puVar17[uVar55 + 1];
              uVar55 = uVar55 + 1;
            } while (uVar14 == 0);
          }
          else {
            iVar39 = 0;
            uVar55 = 0;
          }
          uVar56 = (ulonglong)(-uVar14 & uVar14);
          uVar36 = uVar56 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar36 != 0) {
            for (; uVar36 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar26 = (iVar39 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
          if (iVar15 <= iVar26) {
            iVar26 = iVar15;
          }
        }
        if (iVar26 != iVar15) {
          uVar14 = 0xffffffff;
          iVar47 = iVar15;
          do {
            if (*(char *)(*(longlong *)(plVar16[10] + (longlong)iVar26 * 0x18) + 0x28) == '\x01') {
              FUN_140b46e0e();
              iVar47 = (int)local_518[0xf];
              plVar16 = local_518;
            }
            uVar14 = uVar14 & ~(uint)uVar56;
            puVar17 = (uint *)plVar16[0xe];
            if ((uint *)plVar16[0xe] == (uint *)0x0) {
              puVar17 = puVar21;
            }
            iVar26 = (int)uVar55;
            lVar18 = (longlong)iVar26;
            uVar27 = puVar17[lVar18] & uVar14;
            if (uVar27 == 0) {
              iVar50 = iVar47 + 0x1e;
              if (-1 < iVar47 + -1) {
                iVar50 = iVar47 + -1;
              }
              iVar50 = iVar50 >> 5;
              iVar39 = iVar39 + 0x20;
              iVar28 = iVar50;
              if (iVar50 < iVar26) {
                iVar28 = iVar26;
              }
              if (iVar26 < iVar50) {
                lVar32 = 0;
                do {
                  uVar27 = puVar17[lVar18 + lVar32 + 1];
                  if (uVar27 != 0) {
                    uVar55 = (ulonglong)(iVar26 + (int)lVar32 + 1);
                    uVar14 = 0xffffffff;
                    goto LAB_143cbf85d;
                  }
                  iVar39 = iVar39 + 0x20;
                  lVar32 = lVar32 + 1;
                } while (iVar28 - lVar18 != lVar32);
                uVar14 = 0xffffffff;
                iVar26 = iVar28;
              }
              uVar55 = (ulonglong)(iVar26 + 1);
              plVar16 = local_518;
              param_1 = local_530;
              iVar26 = iVar47;
            }
            else {
LAB_143cbf85d:
              uVar56 = (ulonglong)(-uVar27 & uVar27);
              uVar36 = uVar56 * 2 + 1;
              lVar18 = 0x3f;
              if (uVar36 != 0) {
                for (; uVar36 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              iVar26 = (iVar39 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
              if (iVar47 <= iVar26) {
                iVar26 = iVar47;
              }
            }
          } while (iVar26 != iVar15);
        }
LAB_143cbf2c8:
        iVar15 = (int)plVar16[0x18];
        if (iVar15 == 0) {
          EnterCriticalSection(local_4f0);
          lVar18 = local_518[0x16];
          if (lVar18 == 0) {
            lVar18 = FUN_145cd7f46();
          }
          plVar16 = local_518 + 0x15;
          lVar32 = *plVar16;
          uVar55 = FUN_14477b664(lVar18);
          uVar14 = ((uint)(uVar55 >> 0x14) & 0xffff ^ (uint)(uVar55 >> 4)) * -0x7a143595;
          uVar27 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
          uVar27 = uVar27 >> 0x10 ^ uVar27;
          uVar14 = (uint)((ulonglong)lVar32 >> 0x10);
          uVar34 = (uint)lVar32 & 0xffff;
          uVar14 = uVar27 >> 0xd ^
                   (((uint)lVar32 << 0x10 | uVar34) + (int)((ulonglong)lVar32 >> 0x20) +
                    (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar34 >> 4)) - uVar27;
          uVar34 = uVar14 << 8 ^ (-0x61c88647 - uVar27) - uVar14;
          uVar46 = uVar34 >> 0xd ^ (uVar27 - uVar14) - uVar34;
          uVar14 = uVar46 >> 0xc ^ (uVar14 - uVar34) - uVar46;
          uVar27 = uVar14 << 0x10 ^ (uVar34 - uVar46) - uVar14;
          uVar46 = uVar27 >> 5 ^ (uVar46 - uVar14) - uVar27;
          uVar34 = uVar46 >> 3 ^ (uVar14 - uVar27) - uVar46;
          uVar14 = uVar34 << 10 ^ (uVar27 - uVar46) - uVar34;
          iVar15 = FUN_141870826(local_4f8,uVar14 >> 0xf ^ uVar46 - (uVar34 + uVar14),plVar16);
          if ((iVar15 != -1) &&
             (lVar18 = (longlong)iVar15 * 0x30 + *local_4f8, plVar16 = (longlong *)(lVar18 + 0x18),
             plVar16 != (longlong *)0x0 && lVar18 != 0)) {
            lVar18 = *plVar16;
            if ((*(int *)(local_530 + 0x2c) == 0) ||
               (uVar14 = *(uint *)(local_530 + 0x28), (int)uVar14 < 0)) {
LAB_143cc23e9:
              lVar32 = 0;
            }
            else {
              lVar32 = 0;
              if ((int)uVar14 < DAT_14c9647dc) {
                plVar16 = (longlong *)
                          ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
                if (((plVar16 == (longlong *)0x0) || ((int)plVar16[2] != *(int *)(local_530 + 0x2c))
                    ) || ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)) goto LAB_143cc23e9;
                lVar32 = *plVar16;
              }
            }
            if (((*(longlong *)(lVar18 + 0xc0) == 0) ||
                ((*(byte *)(*(longlong *)(lVar18 + 0xc0) + 0x10) & 1) == 0)) &&
               ((lVar32 != 0 && (*(int *)(lVar18 + 0xb8) != 0)))) {
              memset(&local_3f8,0,0xa0);
              FUN_144a7a8f6(&local_3f8);
              FUN_144a7a8f6((longlong)&uStack_3f0 + 4);
              local_3c8 = (longlong *)0x0;
              local_398 = 0;
              local_388 = (longlong *)0x0;
              local_3e0 = 0;
              lStack_3d8 = 0;
              local_538 = local_470;
              FUN_1411cff2e(lVar18 + 0xc0,lVar18 + 0xb0,lVar32,&local_3f8);
              if (local_398 != 0) {
                plVar16 = local_388;
                if (local_388 == (longlong *)0x0) {
                  plVar16 = local_378;
                }
                (**(code **)(*plVar16 + 0x10))();
              }
              if (lStack_3d8 != 0) {
                plVar16 = local_3c8;
                if (local_3c8 == (longlong *)0x0) {
                  plVar16 = local_3b8;
                }
                (**(code **)(*plVar16 + 0x10))();
              }
            }
          }
LAB_143cc22fc:
          LeaveCriticalSection(local_4f0);
          plVar16 = local_518;
          param_1 = local_530;
        }
        else if (iVar15 == 1) {
          iVar15 = *(int *)(param_1 + 0x2c);
          if (((((iVar15 != 0) && (uVar14 = *(uint *)(param_1 + 0x28), -1 < (int)uVar14)) &&
               ((int)uVar14 < DAT_14c9647dc)) &&
              ((lVar18 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8), lVar18 != 0
               && (*(int *)(lVar18 + 0x10) == iVar15)))) &&
             ((*(uint *)(lVar18 + 8) & 0x10200000) == 0)) {
            *(undefined8 *)(param_1 + 0x248) = 0;
            puVar21 = (uint *)(plVar16 + 2);
            uVar14 = *(uint *)(plVar16 + 5);
            if (uVar14 == 0) {
              uVar55 = 1;
              uVar56 = 0;
              iVar26 = 0;
              uVar27 = 0;
            }
            else {
              puVar17 = (uint *)plVar16[4];
              if ((uint *)plVar16[4] == (uint *)0x0) {
                puVar17 = puVar21;
              }
              uVar27 = *puVar17;
              if (uVar27 == 0) {
                iVar26 = uVar14 + 0x1e;
                if (-1 < (int)(uVar14 - 1)) {
                  iVar26 = uVar14 - 1;
                }
                uVar56 = 0;
                uVar55 = (ulonglong)(uint)(iVar26 >> 5);
                if (iVar26 >> 5 < 1) {
                  uVar55 = uVar56;
                }
                iVar26 = 0;
                do {
                  if (uVar55 == uVar56) goto LAB_143cbfd6b;
                  iVar26 = iVar26 + 0x20;
                  uVar27 = puVar17[uVar56 + 1];
                  uVar56 = uVar56 + 1;
                } while (uVar27 == 0);
              }
              else {
                uVar56 = 0;
                iVar26 = 0;
              }
              uVar55 = (ulonglong)(-uVar27 & uVar27);
              uVar36 = uVar55 * 2 + 1;
              lVar18 = 0x3f;
              if (uVar36 != 0) {
                for (; uVar36 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              uVar27 = (iVar26 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
              if ((int)uVar14 <= (int)uVar27) {
                uVar27 = uVar14;
              }
            }
            if (uVar27 != uVar14) {
              uVar34 = 0xffffffff;
              local_510 = (longlong *)(ulonglong)uVar14;
              do {
                lVar18 = *(longlong *)(*plVar16 + (longlong)(int)uVar27 * 0x18);
                lVar32 = *(longlong *)(lVar18 + 0x48);
                iVar15 = *(int *)(lVar32 + 0xd8);
                *(uint *)(lVar32 + 0xd8) = iVar15 + 1U;
                if (*(uint *)(lVar32 + 0xdc) < iVar15 + 1U) {
                  FUN_1418702d2((longlong *)(lVar32 + 0xd0),iVar15);
                  plVar16 = local_518;
                }
                *(longlong *)(*(longlong *)(lVar32 + 0xd0) + (longlong)iVar15 * 8) = lVar18;
                uVar34 = uVar34 & ~(uint)uVar55;
                puVar17 = (uint *)plVar16[4];
                if ((uint *)plVar16[4] == (uint *)0x0) {
                  puVar17 = puVar21;
                }
                uVar14 = *(uint *)(plVar16 + 5);
                iVar15 = (int)uVar56;
                lVar18 = (longlong)iVar15;
                uVar27 = puVar17[lVar18] & uVar34;
                if (uVar27 == 0) {
                  iVar39 = uVar14 + 0x1e;
                  if (-1 < (int)(uVar14 - 1)) {
                    iVar39 = uVar14 - 1;
                  }
                  iVar39 = iVar39 >> 5;
                  iVar26 = iVar26 + 0x20;
                  iVar47 = iVar39;
                  if (iVar39 < iVar15) {
                    iVar47 = iVar15;
                  }
                  if (iVar15 < iVar39) {
                    lVar32 = 0;
                    do {
                      uVar27 = puVar17[lVar18 + lVar32 + 1];
                      if (uVar27 != 0) {
                        uVar56 = (ulonglong)(iVar15 + (int)lVar32 + 1);
                        uVar34 = 0xffffffff;
                        goto LAB_143cbfd11;
                      }
                      iVar26 = iVar26 + 0x20;
                      lVar32 = lVar32 + 1;
                    } while (iVar47 - lVar18 != lVar32);
                    uVar34 = 0xffffffff;
                    iVar15 = iVar47;
                  }
                  uVar56 = (ulonglong)(iVar15 + 1);
                  plVar16 = local_518;
                  uVar27 = uVar14;
                }
                else {
LAB_143cbfd11:
                  uVar55 = (ulonglong)(-uVar27 & uVar27);
                  uVar36 = uVar55 * 2 + 1;
                  lVar18 = 0x3f;
                  if (uVar36 != 0) {
                    for (; uVar36 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                    }
                  }
                  uVar27 = (iVar26 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
                  if ((int)uVar14 <= (int)uVar27) {
                    uVar27 = uVar14;
                  }
                }
              } while (uVar27 != (uint)local_510);
              iVar15 = *(int *)(local_530 + 0x2c);
            }
LAB_143cbfd6b:
            lVar18 = local_530;
            if (iVar15 == 0) {
              lVar32 = 0;
            }
            else {
              uVar14 = *(uint *)(local_530 + 0x28);
              if ((int)uVar14 < 0) {
LAB_143cc23fc:
                lVar32 = 0;
              }
              else {
                lVar32 = 0;
                if ((int)uVar14 < DAT_14c9647dc) {
                  plVar16 = (longlong *)
                            ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
                  if (((plVar16 == (longlong *)0x0) || ((int)plVar16[2] != iVar15)) ||
                     ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)) goto LAB_143cc23fc;
                  lVar32 = *plVar16;
                }
              }
            }
            local_4d4 = (float)*(double *)(lVar32 + 0x6d0);
            fVar78 = local_4d4 - *(float *)(local_530 + 0x460);
            EnterCriticalSection(local_4f0);
            uVar14 = *(uint *)(lVar18 + 0x350);
            if (uVar14 == 0) {
              uVar56 = 1;
              uVar55 = 0;
              iVar15 = 0;
              uVar27 = 0;
            }
            else {
              puVar21 = *(uint **)(lVar18 + 0x348);
              if (*(uint **)(lVar18 + 0x348) == (uint *)0x0) {
                puVar21 = local_4a0;
              }
              uVar27 = *puVar21;
              if (uVar27 == 0) {
                iVar15 = uVar14 + 0x1e;
                if (-1 < (int)(uVar14 - 1)) {
                  iVar15 = uVar14 - 1;
                }
                uVar55 = 0;
                uVar56 = (ulonglong)(uint)(iVar15 >> 5);
                if (iVar15 >> 5 < 1) {
                  uVar56 = uVar55;
                }
                iVar15 = 0;
                do {
                  if (uVar56 == uVar55) goto LAB_143cbfe7f;
                  iVar15 = iVar15 + 0x20;
                  uVar27 = puVar21[uVar55 + 1];
                  uVar55 = uVar55 + 1;
                } while (uVar27 == 0);
              }
              else {
                uVar55 = 0;
                iVar15 = 0;
              }
              uVar56 = (ulonglong)(-uVar27 & uVar27);
              uVar36 = uVar56 * 2 + 1;
              lVar32 = 0x3f;
              if (uVar36 != 0) {
                for (; uVar36 >> lVar32 == 0; lVar32 = lVar32 + -1) {
                }
              }
              uVar27 = (iVar15 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
              if ((int)uVar14 <= (int)uVar27) {
                uVar27 = uVar14;
              }
            }
            if (uVar27 != uVar14) {
              uVar34 = 0xffffffff;
              local_4fc = fVar78;
              local_4a8 = (ulonglong)uVar14;
              local_448 = uVar68;
              uStack_444 = uVar70;
              uStack_440 = uVar59;
              uStack_43c = uVar60;
              do {
                local_458 = *local_4f8;
                local_460 = (longlong)(int)uVar27 * 0x30;
                lVar18 = *(longlong *)(local_458 + 0x18 + local_460);
                local_4d0 = uVar34;
                local_4cc = iVar15;
                local_490 = uVar56;
                local_450 = uVar55;
                if (*(char *)(lVar18 + 0xa2) == '\x01') {
                  iVar15 = *(int *)(lVar18 + 0xd8);
                  if (1 < (longlong)iVar15) {
                    plVar16 = *(longlong **)(lVar18 + 0xd0);
                    memset(&local_3e8,0,0x2f0);
                    uStack_3f0 = plVar16 + (longlong)iVar15 + -1;
                    local_3f8 = plVar16;
                    fVar58 = logf((float)iVar15);
                    local_3e8 = (int)(longlong)(fVar58 + fVar58);
                    pplVar19 = &local_3f8;
                    do {
                      plVar31 = *pplVar19;
                      plVar42 = pplVar19[1];
                      iVar15 = *(int *)(pplVar19 + 2);
                      iVar26 = (int)((ulonglong)((longlong)plVar42 - (longlong)plVar31) >> 3);
                      uVar55 = (ulonglong)(iVar26 + 1);
                      plVar35 = plVar31;
                      plVar16 = plVar42;
                      if (iVar15 != 0) {
LAB_143cbffa4:
                        if (8 < (int)(uint)uVar55) {
                          uVar14 = (uint)uVar55 >> 1;
                          lVar32 = plVar31[uVar14];
                          plVar31[uVar14] = *plVar31;
                          *plVar31 = lVar32;
                          plVar52 = plVar16 + 1;
                          plVar30 = plVar31;
                          do {
                            plVar11 = plVar30 + 1;
                            plVar48 = plVar30 + 1;
                            do {
                              plVar30 = plVar48;
                              plVar54 = plVar11;
                              if (plVar16 < plVar30) break;
                              plVar11 = plVar54 + 1;
                              plVar48 = plVar30 + 1;
                            } while (*(float *)(*plVar30 + 0x24) < *(float *)(*plVar31 + 0x24) ||
                                     *(float *)(*plVar30 + 0x24) == *(float *)(*plVar31 + 0x24));
                            plVar11 = plVar52 + -2;
                            do {
                              plVar48 = plVar52;
                              plVar40 = plVar11;
                              plVar52 = plVar48 + -1;
                              if (plVar52 <= plVar31) break;
                              plVar11 = plVar40 + -1;
                            } while (*(float *)(*plVar31 + 0x24) < *(float *)(*plVar52 + 0x24) ||
                                     *(float *)(*plVar31 + 0x24) == *(float *)(*plVar52 + 0x24));
                            if (plVar52 < plVar30) goto LAB_143cc0039;
                            lVar32 = *plVar30;
                            *plVar30 = *plVar52;
                            *plVar52 = lVar32;
                          } while( true );
                        }
                        if (plVar31 < plVar16) {
                          do {
                            plVar42 = plVar31;
                            if (plVar31 + 1 <= plVar16) {
                              plVar35 = plVar31 + 1;
                              lVar32 = *plVar31;
                              do {
                                fVar58 = *(float *)(*plVar35 + 0x24);
                                lVar33 = *plVar35;
                                plVar52 = plVar35;
                                if (fVar58 < *(float *)(lVar32 + 0x24) ||
                                    fVar58 == *(float *)(lVar32 + 0x24)) {
                                  lVar33 = lVar32;
                                  plVar52 = plVar42;
                                }
                                plVar42 = plVar52;
                                plVar35 = plVar35 + 1;
                                lVar32 = lVar33;
                              } while (plVar35 <= plVar16);
                            }
                            lVar32 = *plVar42;
                            *plVar42 = *plVar16;
                            *plVar16 = lVar32;
                            plVar16 = plVar16 + -1;
                          } while (plVar31 < plVar16);
                        }
                        goto LAB_143cc026f;
                      }
LAB_143cc00cc:
                      iVar15 = (int)uVar55;
                      if (iVar15 != 0) {
                        iVar26 = (iVar26 - (iVar26 + -1 >> 0x1f)) + -1 >> 1;
                        iVar39 = iVar26;
joined_r0x000143cc00ef:
                        do {
                          iVar47 = iVar26 * 2 + 1;
                          if (iVar47 < iVar15) {
                            iVar50 = iVar26 * 2 + 2;
                            if ((iVar50 < iVar15) &&
                               (*(float *)(plVar31[iVar47] + 0x24) <
                                *(float *)(plVar31[iVar50] + 0x24) ||
                                *(float *)(plVar31[iVar47] + 0x24) ==
                                *(float *)(plVar31[iVar50] + 0x24))) {
                              iVar47 = iVar50;
                            }
                            lVar32 = plVar31[iVar26];
                            fVar58 = *(float *)(plVar31[iVar47] + 0x24);
                            pfVar1 = (float *)(lVar32 + 0x24);
                            if (*pfVar1 <= fVar58 && fVar58 != *pfVar1) {
                              plVar31[iVar26] = plVar31[iVar47];
                              plVar31[iVar47] = lVar32;
                              iVar26 = iVar47;
                              goto joined_r0x000143cc00ef;
                            }
                          }
                          bVar57 = iVar39 != 0;
                          iVar26 = iVar39 + -1;
                          iVar39 = iVar26;
                        } while (bVar57);
                        if (1 < iVar15) {
                          lVar32 = *plVar31;
                          *plVar31 = plVar31[uVar55 - 1];
                          plVar31[uVar55 - 1] = lVar32;
                          if (iVar15 != 2) {
                            do {
                              uVar56 = uVar55 - 1;
                              iVar15 = 0;
                              iVar39 = 1;
                              iVar26 = 0;
                              do {
                                iVar15 = iVar15 + 2;
                                iVar47 = iVar39;
                                if (((longlong)iVar15 < (longlong)uVar56) &&
                                   (*(float *)(plVar31[iVar39] + 0x24) <
                                    *(float *)(plVar31[iVar15] + 0x24) ||
                                    *(float *)(plVar31[iVar39] + 0x24) ==
                                    *(float *)(plVar31[iVar15] + 0x24))) {
                                  iVar47 = iVar15;
                                }
                                lVar32 = plVar31[iVar26];
                                fVar58 = *(float *)(plVar31[iVar47] + 0x24);
                                pfVar1 = (float *)(lVar32 + 0x24);
                                if (fVar58 < *pfVar1 || fVar58 == *pfVar1) break;
                                plVar31[iVar26] = plVar31[iVar47];
                                plVar31[iVar47] = lVar32;
                                iVar15 = iVar47 * 2;
                                iVar39 = iVar47 * 2 + 1;
                                iVar26 = iVar47;
                              } while ((longlong)iVar39 < (longlong)uVar56);
                              lVar32 = *plVar31;
                              *plVar31 = plVar31[uVar55 - 2];
                              plVar31[uVar55 - 2] = lVar32;
                              uVar55 = uVar56;
                            } while (2 < uVar56);
                          }
                        }
                      }
LAB_143cc026f:
                      pplVar19 = pplVar19 + -3;
                    } while (&local_3f8 <= pplVar19);
                  }
                }
                iVar15 = *(int *)(lVar18 + 0xd8);
                *(int *)(lVar18 + 0x8c) = iVar15;
                if ((longlong)iVar15 < 1 || *(char *)(lVar18 + 0xa1) != '\x01') {
                  if (*(char *)(lVar18 + 0xa1) != '\0') goto LAB_143cc02ce;
                  if ((*(char *)(lVar18 + 0xa2) == '\x01') && (*(char *)(lVar18 + 0xa0) == '\x01'))
                  {
                    local_508 = (longlong *)(longlong)*(int *)(lVar18 + 0x90);
                  }
                  else {
                    local_508 = (longlong *)&DAT_00000010;
                    if (*(char *)(lVar18 + 0xa3) == '\0') goto LAB_143cc02ce;
                  }
                }
                else {
                  *(float *)(lVar18 + 0x9c) = *(float *)(lVar18 + 0x9c) - fVar78;
LAB_143cc02ce:
                  local_508 = (longlong *)0x7fffffff;
                }
                bVar12 = 1;
                if ((*(longlong *)(lVar18 + 0xc0) != 0) &&
                   (*(int *)(*(longlong *)(lVar18 + 0xc0) + 0x38) != 0)) {
                  bVar12 = FUN_140a262da(lVar18 + 0xc0);
                }
                local_510 = (longlong *)(lVar18 + 0xd0);
                if (0 < iVar15) {
                  lVar32 = 0;
                  do {
                    if ((*(char *)(lVar18 + 0xa1) == '\x01') &&
                       ((0.0 < *(float *)(lVar18 + 0x9c) ||
                        ((*(char *)(lVar18 + 0xa0) == '\x01' &&
                         (*(int *)(lVar18 + 0x90) <= *(int *)(lVar18 + 0x88))))))) break;
                    if (*(char *)(lVar18 + 0xa2) == '\0') {
                      uVar14 = (uint)lVar32;
                      iVar26 = ~uVar14 + iVar15;
                      if (-1 < iVar26) {
                        uVar27 = rand();
                        iVar39 = (int)((float)(int)(iVar15 - uVar14) *
                                      ((float)(uVar27 & 0x7fff) / 32767.0));
                        if (iVar39 < iVar26) {
                          iVar26 = iVar39;
                        }
                        if (iVar26 != 0) {
                          lVar33 = *local_510;
                          uVar23 = *(undefined8 *)(lVar33 + lVar32 * 8);
                          *(undefined8 *)(lVar33 + lVar32 * 8) =
                               *(undefined8 *)(lVar33 + (longlong)(int)(iVar26 + uVar14) * 8);
                          *(undefined8 *)(lVar33 + (longlong)(int)(iVar26 + uVar14) * 8) = uVar23;
                        }
                      }
                    }
                    puVar45 = *(undefined8 **)(*local_510 + lVar32 * 8);
                    lVar33 = *(longlong *)(local_530 + 0x380);
                    plVar16 = *(longlong **)(local_530 + 0x388);
                    if (plVar16 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
                      UNLOCK();
                    }
                    if ((lVar32 < (longlong)local_508 & bVar12) == 0) {
                      if (*(char *)(puVar45 + 5) != '\0') {
                        FUN_140b46e0e(puVar45);
                      }
LAB_143cc09d2:
                      if (plVar16 != (longlong *)0x0) {
LAB_143cc09d7:
                        LOCK();
                        plVar31 = plVar16 + 1;
                        *(int *)plVar31 = (int)*plVar31 + -1;
                        UNLOCK();
                        if ((int)*plVar31 == 0) {
                          (**(code **)*plVar16)(plVar16);
                          LOCK();
                          piVar38 = (int *)((longlong)plVar16 + 0xc);
                          *piVar38 = *piVar38 + -1;
                          UNLOCK();
                          if (*piVar38 == 0) {
                            (**(code **)(*plVar16 + 0x10))(plVar16);
                          }
                        }
                      }
                    }
                    else {
                      if ((*(char *)(puVar45 + 5) != '\0') ||
                         (cVar13 = FUN_144904448(puVar45), cVar13 != '\0')) goto LAB_143cc09d2;
                      lVar51 = puVar45[9];
                      if ((*(char *)(lVar51 + 0xa0) == '\x01') &&
                         (*(int *)(lVar51 + 0x90) <= *(int *)(lVar51 + 0x88))) goto LAB_143cc09d2;
                      if (*(char *)(lVar51 + 0xa1) != '\x01') {
                        if (*(char *)(lVar51 + 0xa1) == '\0') {
LAB_143cc0731:
                          if ((*(char *)(lVar51 + 0xa3) == '\0') &&
                             (*(char *)(lVar51 + 0xa4) != '\x01')) goto LAB_143cc0492;
                          plVar31 = (longlong *)(lVar51 + 0xf0);
                          if (*(int *)(lVar51 + 0x124) == 0) {
                            uVar14 = *(uint *)(lVar51 + 0xf8);
                            plVar42 = (longlong *)(ulonglong)uVar14;
                            *(uint *)(lVar51 + 0xf8) = uVar14 + 1;
                            if (*(uint *)(lVar51 + 0xfc) == uVar14) {
                              local_4c8._0_8_ = plVar31;
                              FUN_1446efaca(plVar31,uVar14);
                              plVar31 = (longlong *)local_4c8._0_8_;
                            }
                            uVar14 = *(uint *)(lVar51 + 0x118);
                            dVar53 = (double)(ulonglong)uVar14;
                            if (uVar14 == 0) {
                              iVar26 = -1;
                            }
                            else {
                              iVar26 = uVar14 + 0x1e;
                              if (-1 < (int)(uVar14 - 1)) {
                                iVar26 = uVar14 - 1;
                              }
                              iVar26 = iVar26 >> 5;
                            }
                            lVar33 = lVar51 + 0x100;
                            iVar39 = uVar14 + 1;
                            uVar27 = uVar14 + 0x1f;
                            if (-1 < (int)uVar14) {
                              uVar27 = uVar14;
                            }
                            iVar47 = (int)uVar27 >> 5;
                            local_520 = plVar42;
                            if (iVar47 == iVar26) {
                              *(int *)(lVar51 + 0x118) = iVar39;
                            }
                            else {
                              local_488._0_4_ = iVar47;
                              if (*(int *)(lVar51 + 0x11c) <= (int)uVar14) {
                                local_4c8._0_8_ = plVar31;
                                local_4e0 = dVar53;
                                if (uVar14 + 0x20 < 0xa0) {
                                  iVar26 = 0x80;
                                }
                                else {
                                  uVar27 = uVar14 + 0x20 >> 5;
                                  local_4e8 = (double)(ulonglong)uVar27;
                                  if (*(int *)(lVar51 + 0x11c) + 0x1fU < 0xa0) {
                                    uVar34 = 4;
                                    if (4 < uVar27) {
                                      uVar34 = uVar27;
                                    }
                                  }
                                  else {
                                    uVar34 = uVar27 + (uVar27 * 3 >> 3) + 0x10;
                                  }
                                  uVar55 = (ulonglong)(uVar34 * 4);
                                  if (DAT_14c872d28 != (longlong *)0x0) {
                                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8)
                                    {
                                      uVar27 = (uint)(uVar55 + 0xf);
                                      if (uVar34 < 0x1ffd) {
                                        uVar55 = (ulonglong)
                                                 (ushort)(&DAT_14c841d90)
                                                         [0x32 - (byte)(&DAT_14c841e00)
                                                                       [uVar55 + 0xf >> 4]];
                                      }
                                      else {
                                        uVar56 = (ulonglong)(uVar27 & 0xfffffff0);
                                        if (uVar56 < 0x7ff1) {
                                          bVar25 = (&DAT_14c841e00)[uVar27 >> 4];
                                          uVar36 = 0x32;
                                          if (0x32 < bVar25) {
                                            uVar36 = (ulonglong)bVar25;
                                          }
                                          uVar49 = 0x32 - (ulonglong)bVar25;
                                          do {
                                            uVar55 = (ulonglong)
                                                     (ushort)(&DAT_14c841d90)[uVar49 & 0xffffffff];
                                            if (((&DAT_14c841d90)[uVar49 & 0xffffffff] & 0xf) == 0)
                                            goto LAB_143cc0b75;
                                            lVar43 = uVar36 + 1 + uVar49;
                                            uVar49 = uVar49 - 1;
                                          } while (lVar43 != 0x33);
                                        }
                                        uVar55 = (ulonglong)DAT_14c841df8;
                                        if (DAT_14c841df8 < 0x11) {
                                          uVar55 = 0x10;
                                        }
                                        uVar55 = -uVar55 & (uVar56 + uVar55) - 1;
                                      }
                                    }
                                    else {
                                      uVar55 = (**(code **)(*DAT_14c872d28 + 0x60))
                                                         (DAT_14c872d28,uVar55,0);
                                      uVar14 = *(uint *)(lVar51 + 0x118);
                                    }
                                  }
LAB_143cc0b75:
                                  iVar39 = (int)(uVar55 >> 2);
                                  iVar26 = iVar39 << 5;
                                  if (iVar39 < local_4e8._0_4_) {
                                    iVar26 = -0x20;
                                  }
                                }
                                *(int *)(lVar51 + 0x11c) = iVar26;
                                FUN_1446efbd8(lVar33,uVar14);
                                iVar39 = *(int *)(lVar51 + 0x118) + 1;
                                dVar53 = local_4e0;
                                plVar31 = (longlong *)local_4c8._0_8_;
                                iVar47 = local_488._0_4_;
                              }
                              iVar26 = iVar39 + 0x1f;
                              if (-1 < iVar39) {
                                iVar26 = iVar39;
                              }
                              *(int *)(lVar51 + 0x118) = iVar39;
                              if (iVar39 % 0x20 != 0) {
                                lVar43 = *(longlong *)(lVar51 + 0x110);
                                if (*(longlong *)(lVar51 + 0x110) == 0) {
                                  lVar43 = lVar33;
                                }
                                bVar25 = -(char)(iVar39 % 0x20);
                                *(uint *)(lVar43 + (longlong)(iVar26 >> 5) * 4) =
                                     (uint)(*(int *)(lVar43 + (longlong)(iVar26 >> 5) * 4) <<
                                           (bVar25 & 0x1f)) >> (bVar25 & 0x1f);
                                iVar47 = local_488._0_4_;
                              }
                            }
                            lVar43 = (longlong)(int)local_520;
                            if (*(longlong *)(lVar51 + 0x110) != 0) {
                              lVar33 = *(longlong *)(lVar51 + 0x110);
                            }
                            bVar25 = SUB81(dVar53,0) & 0x1f;
                            puVar21 = (uint *)(lVar33 + (longlong)iVar47 * 4);
                            *puVar21 = *puVar21 & (-2 << bVar25 | 0xfffffffeU >> 0x20 - bVar25);
                          }
                          else {
                            local_520 = (longlong *)(ulonglong)*(uint *)(lVar51 + 0x120);
                            lVar43 = (longlong)(int)*(uint *)(lVar51 + 0x120);
                            iVar26 = *(int *)(*(longlong *)(lVar51 + 0xf0) + 4 + lVar43 * 0x10);
                            *(int *)(lVar51 + 0x120) = iVar26;
                            iVar39 = *(int *)(lVar51 + 0x124) + -1;
                            *(int *)(lVar51 + 0x124) = iVar39;
                            if (iVar39 != 0) {
                              *(undefined4 *)
                               (*(longlong *)(lVar51 + 0xf0) + (longlong)iVar26 * 0x10) = 0xffffffff
                              ;
                            }
                          }
                          iVar26 = (int)local_520;
                          lVar33 = lVar51 + 0x100;
                          if (*(longlong *)(lVar51 + 0x110) != 0) {
                            lVar33 = *(longlong *)(lVar51 + 0x110);
                          }
                          iVar39 = iVar26 + 0x1f;
                          if (-1 < iVar26) {
                            iVar39 = iVar26;
                          }
                          puVar21 = (uint *)(lVar33 + (longlong)(iVar39 >> 5) * 4);
                          *puVar21 = *puVar21 | 1 << ((byte)local_520 & 0x1f);
                          lVar33 = *(longlong *)(lVar51 + 0xf0);
                          lVar43 = lVar43 * 0x10;
                          *(undefined8 **)(lVar33 + lVar43) = puVar45;
                          *(undefined4 *)(lVar33 + 8 + lVar43) = 0xffffffff;
                          uVar14 = ((uint)((ulonglong)puVar45 >> 0x14) & 0xffff ^
                                   (uint)((ulonglong)puVar45 >> 4)) * -0x7a143595;
                          uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
                          uVar14 = uVar14 >> 0x10 ^ uVar14;
                          uVar27 = *(int *)(lVar51 + 0xf8) - *(int *)(lVar51 + 0x124);
                          if ((uVar27 != 0) && (uVar27 != 1)) {
                            lVar20 = lVar51 + 0x128;
                            if (*(longlong *)(lVar51 + 0x130) != 0) {
                              lVar20 = *(longlong *)(lVar51 + 0x130);
                            }
                            iVar39 = *(int *)(lVar20 + (ulonglong)
                                                       (*(int *)(lVar51 + 0x138) - 1U & uVar14) * 4)
                            ;
                            if (iVar39 != -1) {
                              do {
                                puVar24 = (ulonglong *)(*plVar31 + (longlong)iVar39 * 0x10);
                                if (*(undefined8 **)(*plVar31 + (longlong)iVar39 * 0x10) == puVar45)
                                {
                                  *puVar24 = (ulonglong)puVar45;
                                  FUN_140b4704c(plVar31,local_520);
                                  goto LAB_143cc09c7;
                                }
                                iVar39 = (int)puVar24[1];
                              } while (iVar39 != -1);
                            }
                          }
                          if (uVar27 < 4) {
                            iVar39 = 1;
                          }
                          else {
                            uVar55 = (ulonglong)(uVar27 & 0xfffffffe) + 0xf;
                            lVar20 = 0x3f;
                            if (uVar55 != 0) {
                              for (; uVar55 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                              }
                            }
                            iVar39 = 1 << ((byte)lVar20 & 0x1f);
                          }
                          if (((int)uVar27 < 1) || (iVar39 <= *(int *)(lVar51 + 0x138))) {
                            uVar14 = *(int *)(lVar51 + 0x138) - 1U & uVar14;
                            *(uint *)(lVar33 + lVar43 + 0xc) = uVar14;
                            lVar20 = *(longlong *)(lVar51 + 0x130);
                            if (*(longlong *)(lVar51 + 0x130) == 0) {
                              lVar20 = lVar51 + 0x128;
                            }
                            *(undefined4 *)(lVar33 + lVar43 + 8) =
                                 *(undefined4 *)
                                  (lVar20 + ((longlong)*(int *)(lVar51 + 0x138) - 1U &
                                            (longlong)(int)uVar14) * 4);
                            lVar33 = *(longlong *)(lVar51 + 0x130);
                            if (*(longlong *)(lVar51 + 0x130) == 0) {
                              lVar33 = lVar51 + 0x128;
                            }
                            *(int *)(lVar33 + ((longlong)*(int *)(lVar51 + 0x138) - 1U &
                                              (longlong)(int)uVar14) * 4) = iVar26;
                          }
                          else {
                            *(int *)(lVar51 + 0x138) = iVar39;
                            FUN_1401c6718(plVar31);
                          }
LAB_143cc09c7:
                          *(undefined1 *)(lVar51 + 0x160) = 1;
                          *(undefined1 *)(puVar45 + 5) = 1;
                        }
                        goto LAB_143cc09d2;
                      }
                      if ((0.0 < *(float *)(lVar51 + 0x9c)) || (*(char *)(puVar45 + 4) == '\0'))
                      goto LAB_143cc09d2;
                      fVar58 = *(float *)(lVar51 + 0x94);
                      fVar64 = *(float *)(lVar51 + 0x98);
                      uVar14 = rand();
                      *(float *)(lVar51 + 0x9c) =
                           ((float)(uVar14 & 0x7fff) / 32767.0) * (fVar64 - fVar58) + fVar58;
                      lVar51 = puVar45[9];
                      if (*(char *)(lVar51 + 0xa1) == '\0') goto LAB_143cc0731;
LAB_143cc0492:
                      if (plVar16 != (longlong *)0x0) {
                        LOCK();
                        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
                        UNLOCK();
                      }
                      if (lVar33 != 0) {
                        FUN_1400b22c2(&local_3f8,"Opp_Audio");
                        local_538 = local_538 & 0xffffffffffffff00;
                        FUN_14084a140(lVar33,&local_408,&local_3f8,0);
                        if (local_3f8 != (longlong *)0x0) {
                          FUN_1400020a8();
                        }
                        plVar31 = local_408;
                        if (local_408 != (longlong *)0x0) {
                          lVar51 = puVar45[6];
                          lVar43 = puVar45[7];
                          lVar33 = puVar45[8];
                          plVar42 = local_408 + 0x28;
                          uVar14 = *(uint *)((longlong)local_408 + 0x1d4);
                          plVar35 = (longlong *)0x0;
                          *(undefined4 *)(local_408 + 0x3a) = 0;
                          if ((int)uVar14 < 0) {
                            FUN_147f80112(plVar42,0);
                            plVar35 = (longlong *)(ulonglong)*(uint *)(plVar31 + 0x3a);
                            uVar14 = *(uint *)((longlong)plVar31 + 0x1d4);
                          }
                          *(undefined1 *)((longlong)plVar31 + 0x26c) = 0;
                          uVar27 = (int)plVar35 + 1;
                          *(uint *)(plVar31 + 0x3a) = uVar27;
                          if (uVar14 < uVar27) {
                            local_520 = plVar35;
                            FUN_140089f7a(plVar42,plVar35);
                            plVar35 = local_520;
                          }
                          if ((longlong *)plVar31[0x38] != (longlong *)0x0) {
                            plVar42 = (longlong *)plVar31[0x38];
                          }
                          lVar20 = (longlong)(int)plVar35;
                          plVar42[lVar20 * 0x10] = 0;
                          (plVar42 + lVar20 * 0x10)[1] = 0;
                          plVar35 = plVar42 + lVar20 * 0x10 + 2;
                          *(undefined4 *)plVar35 = uVar68;
                          *(undefined4 *)((longlong)plVar35 + 4) = uVar70;
                          *(undefined4 *)(plVar35 + 1) = uVar59;
                          *(undefined4 *)((longlong)plVar35 + 0xc) = uVar60;
                          plVar42[lVar20 * 0x10 + 4] = lVar51;
                          (plVar42 + lVar20 * 0x10 + 4)[1] = lVar43;
                          plVar42[lVar20 * 0x10 + 6] = lVar33;
                          (plVar42 + lVar20 * 0x10 + 6)[1] = 0;
                          plVar35 = plVar42 + lVar20 * 0x10 + 8;
                          *(undefined4 *)plVar35 = 0;
                          *(undefined4 *)((longlong)plVar35 + 4) = 0x3ff00000;
                          *(undefined4 *)(plVar35 + 1) = 0;
                          *(undefined4 *)((longlong)plVar35 + 0xc) = 0x3ff00000;
                          plVar42[lVar20 * 0x10 + 10] = 0x3ff0000000000000;
                          (plVar42 + lVar20 * 0x10 + 10)[1] = 0;
                          plVar42[lVar20 * 0x10 + 0xc] = 0x3f800000;
                          *(undefined2 *)(plVar42 + lVar20 * 0x10 + 0xd) = 0;
                          *(undefined8 *)((longlong)plVar42 + lVar20 * 0x80 + 0x6c) = 0;
                          FUN_1447906c0(plVar31,0);
                          local_538 = local_538 & 0xffffffff00000000;
                          FUN_14071ab80(local_408,&local_3f8);
                          plVar31 = local_3f8;
                          *puVar45 = local_3f8;
                          puVar45[1] = uStack_3f0;
                          puVar45[2] = CONCAT44(uStack_3e4,local_3e8);
                          *(bool *)(puVar45 + 5) = CONCAT44(uStack_3e4,local_3e8) != 0;
                          if ((uStack_3f0 != (longlong *)0xffffffffffffffff &&
                               local_3f8 != (longlong *)0x0) &&
                             ((longlong *)*local_3f8 == uStack_3f0)) {
                            *(int *)(local_3f8 + 0x21) = (int)local_3f8[0x21] + 1;
                            plVar42 = local_3f8 + 4;
                            if ((int)local_3f8[5] != 2) {
                              FUN_1446efa72(plVar42,0);
                              *(undefined4 *)(plVar31 + 5) = 2;
                            }
                            puVar41 = (undefined8 *)*plVar42;
                            *puVar41 = &PTR_LAB_14acb8d40;
                            LOCK();
                            UNLOCK();
                            lVar51 = DAT_14c758608 + 1;
                            lVar33 = DAT_14c758608 + 1;
                            if (lVar51 == 0) {
                              LOCK();
                              UNLOCK();
                              lVar51 = DAT_14c758608 + 2;
                              lVar33 = DAT_14c758608 + 2;
                            }
                            DAT_14c758608 = lVar33;
                            puVar41[2] = lVar51;
                            *puVar41 = &PTR_FUN_14b3f0040;
                            puVar41[3] = puVar45;
                            *(int *)(plVar31 + 0x21) = (int)plVar31[0x21] + -1;
                            if (((int)plVar31[0x26] < 1) &&
                               (FUN_1400847bc(plVar31 + 0x17,0), (int)plVar31[0x21] == 0)) {
                              FUN_140087e46(plVar31);
                              if (*plVar31 != -1) {
                                if (DAT_14cb259f8 == 0) goto LAB_143cc06a0;
                                FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar31);
                              }
                              if (DAT_14cb259f8 != 0) {
                                FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar31);
                              }
                            }
                          }
LAB_143cc06a0:
                          plVar31 = local_408;
                          *(int *)(puVar45[9] + 0x88) = *(int *)(puVar45[9] + 0x88) + 1;
                          if (((local_408 != (longlong *)0x0) &&
                              (*(int *)(local_408 + 0x21) = (int)local_408[0x21] + -1,
                              (int)local_408[0x26] < 1)) &&
                             (FUN_1400847bc(local_408 + 0x17,0), (int)plVar31[0x21] == 0)) {
                            FUN_140087e46(plVar31);
                            if (*plVar31 != -1) {
                              if (DAT_14cb259f8 == 0) goto LAB_143cc06e1;
                              FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar31);
                            }
                            if (DAT_14cb259f8 != 0) {
                              FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar31);
                            }
                          }
                        }
                      }
LAB_143cc06e1:
                      if (plVar16 != (longlong *)0x0) {
                        LOCK();
                        plVar31 = plVar16 + 1;
                        *(int *)plVar31 = (int)*plVar31 + -1;
                        UNLOCK();
                        if ((int)*plVar31 == 0) {
                          (**(code **)*plVar16)(plVar16);
                          LOCK();
                          piVar38 = (int *)((longlong)plVar16 + 0xc);
                          *piVar38 = *piVar38 + -1;
                          UNLOCK();
                          if (*piVar38 == 0) {
                            (**(code **)(*plVar16 + 0x10))(plVar16);
                          }
                        }
                        goto LAB_143cc09d7;
                      }
                    }
                    lVar32 = lVar32 + 1;
                  } while (lVar32 != iVar15);
                }
                if (*(char *)(lVar18 + 0x160) == '\x01') {
                  if (*(char *)(lVar18 + 0xa3) == '\x01') {
                    if (*(int *)(lVar18 + 0xf8) == *(int *)(lVar18 + 0x124)) {
                      cVar13 = FUN_144904448(lVar18 + 0x148);
                      if (cVar13 != '\0') {
                        FUN_14072d42a(lVar18 + 0x148,0);
                      }
                      if ((*(longlong **)(lVar18 + 0x140) != (longlong *)0x0) &&
                         (**(longlong **)(lVar18 + 0x140) != -1)) {
                        FUN_140b3e76a(lVar18 + 0x140);
                      }
                    }
                    else {
                      plVar16 = (longlong *)(lVar18 + 0x140);
                      plVar31 = *(longlong **)(lVar18 + 0x140);
                      if ((plVar31 == (longlong *)0x0) || (*plVar31 == -1)) {
                        lVar32 = *local_528;
                        if (lVar32 == 0) {
                          local_3f8 = (longlong *)0x0;
                        }
                        else {
                          FUN_1400b22c2(local_430,"Opp_Audio_MultiLocation");
                          local_538 = local_538 & 0xffffffffffffff00;
                          FUN_14084a140(lVar32,&local_3f8,local_430,0);
                        }
                        FUN_1403c75f4(plVar16,&local_3f8);
                        plVar31 = local_3f8;
                        if (local_3f8 != (longlong *)0x0) {
                          *(int *)(local_3f8 + 0x21) = (int)local_3f8[0x21] + -1;
                          if (((int)local_3f8[0x26] < 1) &&
                             (FUN_1400847bc(local_3f8 + 0x17,0), (int)plVar31[0x21] == 0)) {
                            FUN_140087e46(plVar31);
                            if (*plVar31 != -1) {
                              if (DAT_14cb259f8 == 0) goto LAB_143cc180c;
                              FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar31);
                            }
                            if (DAT_14cb259f8 != 0) {
                              FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar31);
                            }
                          }
LAB_143cc180c:
                          local_3f8 = (longlong *)0x0;
                        }
                        if ((lVar32 != 0) && (local_430[0] != 0)) {
                          FUN_1400020a8();
                        }
                        plVar31 = (longlong *)*plVar16;
                        if ((plVar31 == (longlong *)0x0) || (*plVar31 == -1)) goto LAB_143cc1477;
                      }
                      local_408 = (longlong *)0x0;
                      uStack_400 = 0;
                      iVar15 = *(int *)(lVar18 + 0x118);
                      local_508 = plVar16;
                      if (iVar15 == 0) {
                        uVar55 = 1;
                        uVar56 = 0;
                        iVar26 = 0;
                        iVar39 = 0;
                      }
                      else {
                        puVar21 = *(uint **)(lVar18 + 0x110);
                        if (*(uint **)(lVar18 + 0x110) == (uint *)0x0) {
                          puVar21 = (uint *)(lVar18 + 0x100);
                        }
                        uVar14 = *puVar21;
                        if (uVar14 == 0) {
                          iVar26 = iVar15 + 0x1e;
                          if (-1 < iVar15 + -1) {
                            iVar26 = iVar15 + -1;
                          }
                          uVar56 = 0;
                          uVar55 = (ulonglong)(uint)(iVar26 >> 5);
                          if (iVar26 >> 5 < 1) {
                            uVar55 = uVar56;
                          }
                          iVar39 = 0;
                          do {
                            if (uVar55 == uVar56) goto LAB_143cc1443;
                            iVar39 = iVar39 + 0x20;
                            uVar14 = puVar21[uVar56 + 1];
                            uVar56 = uVar56 + 1;
                          } while (uVar14 == 0);
                        }
                        else {
                          uVar56 = 0;
                          iVar39 = 0;
                        }
                        uVar55 = (ulonglong)(-uVar14 & uVar14);
                        uVar36 = uVar55 * 2 + 1;
                        lVar32 = 0x3f;
                        if (uVar36 != 0) {
                          for (; uVar36 >> lVar32 == 0; lVar32 = lVar32 + -1) {
                          }
                        }
                        iVar26 = (iVar39 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
                        if (iVar15 <= iVar26) {
                          iVar26 = iVar15;
                        }
                      }
                      if (iVar26 != iVar15) {
                        uVar14 = 0xffffffff;
                        do {
                          uVar36 = uStack_400;
                          lVar32 = *(longlong *)
                                    (*(longlong *)(lVar18 + 0xf0) + (longlong)iVar26 * 0x10);
                          lVar33 = *(longlong *)(lVar32 + 0x30);
                          lVar51 = *(longlong *)(lVar32 + 0x38);
                          lVar32 = *(longlong *)(lVar32 + 0x40);
                          lVar43 = (longlong)(int)uStack_400;
                          uVar27 = (int)uStack_400 + 1;
                          uStack_400 = CONCAT44(uStack_400._4_4_,uVar27);
                          if (uStack_400._4_4_ < uVar27) {
                            FUN_144796b16(&local_408,uVar36 & 0xffffffff);
                          }
                          local_408[lVar43 * 0x10] = 0;
                          (local_408 + lVar43 * 0x10)[1] = 0;
                          plVar16 = local_408 + lVar43 * 0x10 + 2;
                          *(undefined4 *)plVar16 = uVar68;
                          *(undefined4 *)((longlong)plVar16 + 4) = uVar70;
                          *(undefined4 *)(plVar16 + 1) = uVar59;
                          *(undefined4 *)((longlong)plVar16 + 0xc) = uVar60;
                          local_408[lVar43 * 0x10 + 4] = lVar33;
                          (local_408 + lVar43 * 0x10 + 4)[1] = lVar51;
                          local_408[lVar43 * 0x10 + 6] = lVar32;
                          (local_408 + lVar43 * 0x10 + 6)[1] = 0;
                          plVar16 = local_408 + lVar43 * 0x10 + 8;
                          *(undefined4 *)plVar16 = 0;
                          *(undefined4 *)((longlong)plVar16 + 4) = 0x3ff00000;
                          *(undefined4 *)(plVar16 + 1) = 0;
                          *(undefined4 *)((longlong)plVar16 + 0xc) = 0x3ff00000;
                          local_408[lVar43 * 0x10 + 10] = 0x3ff0000000000000;
                          (local_408 + lVar43 * 0x10 + 10)[1] = 0;
                          local_408[lVar43 * 0x10 + 0xc] = 0x3f800000;
                          *(undefined2 *)(local_408 + lVar43 * 0x10 + 0xd) = 0;
                          *(undefined8 *)((longlong)local_408 + lVar43 * 0x80 + 0x6c) = 0;
                          uVar14 = uVar14 & ~(uint)uVar55;
                          puVar21 = *(uint **)(lVar18 + 0x110);
                          if (*(uint **)(lVar18 + 0x110) == (uint *)0x0) {
                            puVar21 = (uint *)(lVar18 + 0x100);
                          }
                          iVar47 = *(int *)(lVar18 + 0x118);
                          iVar26 = (int)uVar56;
                          lVar32 = (longlong)iVar26;
                          uVar27 = puVar21[lVar32] & uVar14;
                          if (uVar27 == 0) {
                            iVar50 = iVar47 + 0x1e;
                            if (-1 < iVar47 + -1) {
                              iVar50 = iVar47 + -1;
                            }
                            iVar50 = iVar50 >> 5;
                            iVar39 = iVar39 + 0x20;
                            iVar28 = iVar50;
                            if (iVar50 < iVar26) {
                              iVar28 = iVar26;
                            }
                            if (iVar26 < iVar50) {
                              lVar33 = 0;
                              do {
                                uVar27 = puVar21[lVar32 + lVar33 + 1];
                                if (uVar27 != 0) {
                                  uVar56 = (ulonglong)(iVar26 + (int)lVar33 + 1);
                                  uVar14 = 0xffffffff;
                                  goto LAB_143cc0f54;
                                }
                                iVar39 = iVar39 + 0x20;
                                lVar33 = lVar33 + 1;
                              } while (iVar28 - lVar32 != lVar33);
                              uVar14 = 0xffffffff;
                              iVar26 = iVar28;
                            }
                            uVar56 = (ulonglong)(iVar26 + 1);
                            iVar26 = iVar47;
                          }
                          else {
LAB_143cc0f54:
                            uVar55 = (ulonglong)(-uVar27 & uVar27);
                            uVar36 = uVar55 * 2 + 1;
                            lVar32 = 0x3f;
                            if (uVar36 != 0) {
                              for (; uVar36 >> lVar32 == 0; lVar32 = lVar32 + -1) {
                              }
                            }
                            iVar26 = (iVar39 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
                            if (iVar47 <= iVar26) {
                              iVar26 = iVar47;
                            }
                          }
                        } while (iVar26 != iVar15);
                        plVar31 = (longlong *)*local_508;
                      }
LAB_143cc1443:
                      FUN_144904532(plVar31,&local_408);
                      cVar13 = FUN_144904448(lVar18 + 0x148);
                      if (cVar13 == '\0') {
                        local_538 = local_538 & 0xffffffff00000000;
                        FUN_14071ab80(*(undefined8 *)(lVar18 + 0x140),&local_3f8,lVar18 + 0x50,0);
                        *(longlong **)(lVar18 + 0x148) = local_3f8;
                        *(longlong **)(lVar18 + 0x150) = uStack_3f0;
                        *(ulonglong *)(lVar18 + 0x158) = CONCAT44(uStack_3e4,local_3e8);
                      }
LAB_143cc1465:
                      if (local_408 != (longlong *)0x0) {
                        FUN_1400020a8();
                      }
                    }
                  }
                  else if (*(char *)(lVar18 + 0xa4) == '\x01') {
                    fVar58 = *(float *)(lVar18 + 0xa8);
                    if (ABS(fVar58) <= 1e-08) {
                      if (*local_528 != 0) {
                        plVar16 = (longlong *)(lVar18 + 0xe0);
                        iVar15 = *(int *)(lVar18 + 0xd8);
                        if (*(int *)(lVar18 + 0xe8) == 0) {
                          if ((iVar15 == 0) ||
                             (FUN_146546b62(plVar16), *(int *)(lVar18 + 0xe8) == 0))
                          goto LAB_143cc1477;
                          iVar15 = *(int *)(lVar18 + 0xd8);
                        }
                        pdVar44 = (double *)*plVar16;
                        if (iVar15 == 0) {
                          FUN_14072d42a(pdVar44 + 5,*(undefined4 *)(*local_528 + 0x304));
                          if (((longlong *)pdVar44[4] != (longlong *)0x0) &&
                             (*(longlong *)pdVar44[4] != -1)) {
                            FUN_1401c6d5c(*local_528 + 0x308);
                            FUN_140b3e76a(pdVar44 + 4);
                          }
                          FUN_1401c61c3(*(undefined8 *)(lVar18 + 0xe0),
                                        *(undefined4 *)(lVar18 + 0xe8));
                          *(undefined4 *)(lVar18 + 0xe8) = 0;
                          if (*(int *)(lVar18 + 0xec) != 0) {
                            FUN_1456d92ca(plVar16);
                          }
                        }
                        else {
                          lVar32 = 0;
                          uVar72 = 0xe0000000;
                          uVar74 = 0x47efffff;
                          uVar69 = 0xe0000000;
                          uVar71 = 0xc7efffff;
                          dVar63 = DAT_14c8464f0;
                          dVar65 = DAT_14c8464e0;
                          uVar75 = uVar69;
                          uVar77 = uVar71;
                          uVar76 = uVar72;
                          uVar80 = uVar74;
                          uVar81 = uVar69;
                          uVar82 = uVar71;
                          uVar83 = uVar72;
                          uVar85 = uVar74;
                          dVar53 = DAT_14c8464e8;
                          do {
                            lVar33 = *(longlong *)(*local_510 + lVar32);
                            dVar67 = *(double *)(lVar33 + 0x30);
                            dVar62 = *(double *)(lVar33 + 0x38);
                            dVar65 = dVar65 + dVar67;
                            dVar53 = dVar53 + dVar62;
                            dVar3 = *(double *)(lVar33 + 0x40);
                            dVar63 = dVar63 + dVar3;
                            uVar73 = (undefined4)((ulonglong)dVar3 >> 0x20);
                            if (dVar3 <= (double)CONCAT44(uVar74,uVar72)) {
                              uVar72 = SUB84(dVar3,0);
                              uVar74 = uVar73;
                            }
                            uVar79 = (undefined4)((ulonglong)dVar62 >> 0x20);
                            if (dVar62 <= (double)CONCAT44(uVar80,uVar76)) {
                              uVar76 = SUB84(dVar62,0);
                              uVar80 = uVar79;
                            }
                            uVar84 = (undefined4)((ulonglong)dVar67 >> 0x20);
                            if (dVar67 <= (double)CONCAT44(uVar85,uVar83)) {
                              uVar83 = SUB84(dVar67,0);
                              uVar85 = uVar84;
                            }
                            if ((double)CONCAT44(uVar71,uVar69) <= dVar3) {
                              uVar69 = SUB84(dVar3,0);
                              uVar71 = uVar73;
                            }
                            if ((double)CONCAT44(uVar77,uVar75) <= dVar62) {
                              uVar75 = SUB84(dVar62,0);
                              uVar77 = uVar79;
                            }
                            if ((double)CONCAT44(uVar82,uVar81) <= dVar67) {
                              uVar81 = SUB84(dVar67,0);
                              uVar82 = uVar84;
                            }
                            lVar32 = lVar32 + 8;
                          } while ((longlong)iVar15 * 8 != lVar32);
                          dVar67 = 1.0 / (double)iVar15;
                          *pdVar44 = dVar65 * dVar67;
                          pdVar44[1] = dVar53 * dVar67;
                          pdVar44[2] = dVar67 * dVar63;
                          lVar32 = *(longlong *)(lVar18 + 0x58);
                          if (lVar32 == 0) {
                            uVar23 = FUN_140067708();
                            lVar32 = FUN_14477b664(uVar23);
                            *(longlong *)(lVar18 + 0x58) = lVar32;
                          }
                          plVar16 = (longlong *)(lVar18 + 0x50);
                          lVar33 = *(longlong *)(lVar18 + 0x60);
                          if (lVar33 == 0) {
                            if (lVar32 == 0) {
                              lVar33 = 0;
                            }
                            else {
                              lVar33 = 0;
                              if (*plVar16 != 0) {
                                plVar31 = *(longlong **)(lVar32 + 0xb8);
                                if ((plVar31 == (longlong *)0x0) ||
                                   (cVar13 = (**(code **)(*plVar31 + 0x108))(), cVar13 == '\0')) {
                                  lVar33 = 0;
                                }
                                else {
                                  uVar23 = (**(code **)(*plVar31 + 0x110))(plVar31);
                                  lVar33 = FUN_144aff482(uVar23,plVar16);
                                }
                                *(longlong *)(lVar18 + 0x60) = lVar33;
                              }
                            }
                          }
                          fVar78 = local_4fc;
                          fVar58 = *(float *)(lVar33 + 0x4c) * *(float *)(lVar33 + 0x4c);
                          if (1e-08 < ABS(fVar58)) {
                            dVar65 = (double)CONCAT44(uVar82,uVar81) -
                                     (double)CONCAT44(uVar85,uVar83);
                            dVar63 = (double)CONCAT44(uVar77,uVar75) -
                                     (double)CONCAT44(uVar80,uVar76);
                            dVar53 = (double)CONCAT44(uVar71,uVar69) -
                                     (double)CONCAT44(uVar74,uVar72);
                            *(float *)(pdVar44 + 3) =
                                 (float)((dVar53 * dVar53 + dVar63 * dVar63 + dVar65 * dVar65) /
                                         (double)fVar58 + 1.0);
                          }
                          pdVar37 = pdVar44 + 4;
                          if (((longlong *)pdVar44[4] == (longlong *)0x0) ||
                             (*(longlong *)pdVar44[4] == -1)) {
                            lVar32 = *local_528;
                            FUN_1400b22c2(&local_3f8,"Opp_Audio_Cluster");
                            local_538 = local_538 & 0xffffffffffffff00;
                            FUN_14084a140(lVar32,&local_408,&local_3f8,0);
                            FUN_1403c75f4(pdVar37,&local_408);
                            plVar31 = local_408;
                            if (local_408 != (longlong *)0x0) {
                              *(int *)(local_408 + 0x21) = (int)local_408[0x21] + -1;
                              if (((int)local_408[0x26] < 1) &&
                                 (FUN_1400847bc(local_408 + 0x17,0), (int)plVar31[0x21] == 0)) {
                                FUN_140087e46(plVar31);
                                if (*plVar31 != -1) {
                                  fVar78 = local_4fc;
                                  if (DAT_14cb259f8 == 0) goto LAB_143cc1fc5;
                                  FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar31);
                                }
                                fVar78 = local_4fc;
                                if (DAT_14cb259f8 != 0) {
                                  FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar31);
                                }
                              }
LAB_143cc1fc5:
                              local_408 = (longlong *)0x0;
                            }
                            if (local_3f8 != (longlong *)0x0) {
                              FUN_1400020a8();
                            }
                            if (((longlong *)*pdVar37 == (longlong *)0x0) ||
                               (*(longlong *)*pdVar37 == -1)) goto LAB_143cc1477;
                          }
                          FUN_1414591ce(*local_528,pdVar37,pdVar44,*(undefined4 *)(pdVar44 + 3));
                          if (*(char *)(pdVar44 + 8) == '\0') {
                            local_538 = local_538 & 0xffffffff00000000;
                            FUN_14071ab80(pdVar44[4],&local_3f8,plVar16,0);
                            pdVar44[5] = (double)local_3f8;
                            pdVar44[6] = (double)uStack_3f0;
                            pdVar44[7] = (double)CONCAT44(uStack_3e4,local_3e8);
                            *(undefined1 *)(pdVar44 + 8) = 1;
                          }
                        }
                      }
                    }
                    else if (*local_528 != 0) {
                      lVar32 = *(longlong *)(lVar18 + 0x58);
                      if (lVar32 == 0) {
                        uVar23 = FUN_140067708();
                        lVar32 = FUN_14477b664(uVar23);
                        *(longlong *)(lVar18 + 0x58) = lVar32;
                      }
                      local_520 = (longlong *)(lVar18 + 0x50);
                      lVar33 = *(longlong *)(lVar18 + 0x60);
                      if (lVar33 == 0) {
                        if (lVar32 == 0) {
                          lVar33 = 0;
                        }
                        else {
                          lVar33 = 0;
                          if (*local_520 != 0) {
                            plVar16 = *(longlong **)(lVar32 + 0xb8);
                            if ((plVar16 == (longlong *)0x0) ||
                               (cVar13 = (**(code **)(*plVar16 + 0x108))(), cVar13 == '\0')) {
                              lVar33 = 0;
                            }
                            else {
                              uVar23 = (**(code **)(*plVar16 + 0x110))(plVar16);
                              lVar33 = FUN_144aff482(uVar23,local_520);
                            }
                            *(longlong *)(lVar18 + 0x60) = lVar33;
                          }
                        }
                      }
                      fVar58 = fVar58 * fVar58;
                      fVar78 = *(float *)(lVar33 + 0x4c);
                      local_408 = (longlong *)0x0;
                      uVar14 = *(uint *)(lVar18 + 0xd8);
                      pvVar6 = *(void **)(lVar18 + 0xd0);
                      uStack_400 = CONCAT44(uStack_400._4_4_,uVar14);
                      if ((longlong)(int)uVar14 == 0) {
                        uStack_400 = (ulonglong)uVar14;
                        local_418 = (undefined8 *)0x0;
                        uStack_410 = 0;
                      }
                      else {
                        FUN_141870482(&local_408,uVar14);
                        memcpy(local_408,pvVar6,(longlong)(int)uVar14 << 3);
                        local_418 = (undefined8 *)0x0;
                        uStack_410 = 0;
                        if ((int)uStack_400 != 0) {
                          fVar78 = fVar78 * fVar78;
                          local_508 = (longlong *)(double)fVar58;
                          local_4e0 = (double)fVar78;
                          local_4c8 = ZEXT416((uint)fVar58);
                          local_488 = ZEXT416((uint)ABS(fVar78));
                          do {
                            uVar55 = uStack_410;
                            lVar32 = (longlong)(int)uStack_410;
                            uVar14 = (int)uStack_410 + 1;
                            uStack_410 = CONCAT44(uStack_410._4_4_,uVar14);
                            if (uStack_410._4_4_ < uVar14) {
                              FUN_1418705e6(&local_418,uVar55 & 0xffffffff);
                            }
                            puVar45 = local_418;
                            pdVar44 = (double *)(local_418 + lVar32 * 6);
                            FUN_143cccfb7(pdVar44);
                            lVar33 = local_408[(longlong)(int)uStack_400 + -1];
                            uStack_400 = CONCAT44(uStack_400._4_4_,(int)uStack_400 + -1);
                            FUN_1418706fa(&local_408);
                            plVar16 = puVar45 + lVar32 * 6 + 4;
                            iVar15 = *(int *)(puVar45 + lVar32 * 6 + 5);
                            *(uint *)(puVar45 + lVar32 * 6 + 5) = iVar15 + 1U;
                            if (*(uint *)((longlong)puVar45 + lVar32 * 0x30 + 0x2c) < iVar15 + 1U) {
                              FUN_1403e3958(plVar16,iVar15);
                            }
                            dVar53 = pdVar44[4];
                            *(undefined8 *)((longlong)dVar53 + 0x10 + (longlong)iVar15 * 0x18) =
                                 *(undefined8 *)(lVar33 + 0x40);
                            uVar23 = *(undefined8 *)(lVar33 + 0x38);
                            puVar45 = (undefined8 *)((longlong)dVar53 + (longlong)iVar15 * 0x18);
                            *puVar45 = *(undefined8 *)(lVar33 + 0x30);
                            puVar45[1] = uVar23;
                            iVar15 = *(int *)(pdVar44 + 5);
                            dVar65 = DAT_14c8464e0;
                            dVar53 = DAT_14c8464e8;
                            dVar63 = DAT_14c8464f0;
                            if (iVar15 < 1) {
                              uVar68 = 0xe0000000;
                              uVar70 = 0xc7efffff;
                              uVar59 = 0xe0000000;
                              uVar60 = 0x47efffff;
                              dVar67 = 3.4028234663852886e+38;
                              uVar69 = uVar68;
                              uVar71 = uVar70;
                              uVar72 = uVar68;
                              uVar74 = uVar70;
                              uVar75 = uVar59;
                              uVar77 = uVar60;
                            }
                            else {
                              lVar32 = 0;
                              uVar59 = 0xe0000000;
                              uVar60 = 0x47efffff;
                              dVar67 = 3.4028234663852886e+38;
                              uVar68 = 0xe0000000;
                              uVar70 = 0xc7efffff;
                              uVar69 = uVar68;
                              uVar71 = uVar70;
                              uVar72 = uVar68;
                              uVar74 = uVar70;
                              uVar75 = uVar59;
                              uVar77 = uVar60;
                              do {
                                lVar33 = *plVar16;
                                dVar62 = *(double *)(lVar33 + lVar32 * 0x18);
                                uVar80 = (undefined4)((ulonglong)dVar62 >> 0x20);
                                dVar3 = *(double *)(lVar33 + 8 + lVar32 * 0x18);
                                uVar76 = (undefined4)((ulonglong)dVar3 >> 0x20);
                                dVar4 = *(double *)(lVar33 + 0x10 + lVar32 * 0x18);
                                if (0 < (longlong)(int)uStack_400) {
                                  iVar15 = -(int)uStack_400;
                                  uVar55 = (longlong)(int)uStack_400;
                                  do {
                                    lVar33 = local_408[uVar55 - 1];
                                    dVar7 = *(double *)(lVar33 + 0x30) - dVar62;
                                    dVar61 = *(double *)(lVar33 + 0x38) - dVar3;
                                    dVar8 = *(double *)(lVar33 + 0x40) - dVar4;
                                    if (dVar8 * dVar8 + dVar61 * dVar61 + dVar7 * dVar7 <=
                                        (double)local_508) {
                                      iVar26 = *(int *)(pdVar44 + 5);
                                      *(uint *)(pdVar44 + 5) = iVar26 + 1U;
                                      local_4e8 = dVar65;
                                      local_478 = dVar67;
                                      if (*(uint *)((longlong)pdVar44 + 0x2c) < iVar26 + 1U) {
                                        FUN_1403e3958(plVar16,iVar26);
                                      }
                                      lVar51 = *plVar16;
                                      *(undefined8 *)(lVar51 + 0x10 + (longlong)iVar26 * 0x18) =
                                           *(undefined8 *)(lVar33 + 0x40);
                                      uVar81 = *(undefined4 *)(lVar33 + 0x34);
                                      uVar82 = *(undefined4 *)(lVar33 + 0x38);
                                      uVar83 = *(undefined4 *)(lVar33 + 0x3c);
                                      puVar2 = (undefined4 *)(lVar51 + (longlong)iVar26 * 0x18);
                                      *puVar2 = *(undefined4 *)(lVar33 + 0x30);
                                      puVar2[1] = uVar81;
                                      puVar2[2] = uVar82;
                                      puVar2[3] = uVar83;
                                      if (uVar55 != (uStack_400 & 0xffffffff)) {
                                        iVar26 = (int)uStack_400 + iVar15;
                                        if (0 < (int)uStack_400 + iVar15) {
                                          iVar26 = 1;
                                        }
                                        memmove(local_408 + (uVar55 - 1),
                                                local_408 + ((int)uStack_400 - iVar26),
                                                (longlong)iVar26 << 3);
                                      }
                                      uStack_400 = CONCAT44(uStack_400._4_4_,(int)uStack_400 + -1);
                                      FUN_1418706fa(&local_408);
                                      dVar65 = local_4e8;
                                      dVar67 = local_478;
                                    }
                                    iVar15 = iVar15 + 1;
                                    bVar57 = 1 < uVar55;
                                    uVar55 = uVar55 - 1;
                                  } while (bVar57);
                                  iVar15 = *(int *)(pdVar44 + 5);
                                }
                                dVar65 = dVar65 + dVar62;
                                dVar53 = dVar53 + dVar3;
                                dVar63 = dVar63 + dVar4;
                                if (dVar4 <= dVar67) {
                                  dVar67 = dVar4;
                                }
                                if (dVar3 <= (double)CONCAT44(uVar60,uVar59)) {
                                  uVar59 = SUB84(dVar3,0);
                                  uVar60 = uVar76;
                                }
                                if (dVar62 <= (double)CONCAT44(uVar77,uVar75)) {
                                  uVar75 = SUB84(dVar62,0);
                                  uVar77 = uVar80;
                                }
                                if ((double)CONCAT44(uVar74,uVar72) <= dVar4) {
                                  uVar72 = SUB84(dVar4,0);
                                  uVar74 = (int)((ulonglong)dVar4 >> 0x20);
                                }
                                if ((double)CONCAT44(uVar70,uVar68) <= dVar3) {
                                  uVar68 = SUB84(dVar3,0);
                                  uVar70 = uVar76;
                                }
                                if ((double)CONCAT44(uVar71,uVar69) <= dVar62) {
                                  uVar69 = SUB84(dVar62,0);
                                  uVar71 = uVar80;
                                }
                                lVar32 = lVar32 + 1;
                              } while (lVar32 < iVar15);
                            }
                            dVar62 = 1.0 / (double)iVar15;
                            *pdVar44 = dVar62 * dVar65;
                            pdVar44[1] = dVar53 * dVar62;
                            pdVar44[2] = dVar63 * dVar62;
                            if (1e-08 < (float)local_488._0_4_) {
                              dVar63 = (double)CONCAT44(uVar71,uVar69) -
                                       (double)CONCAT44(uVar77,uVar75);
                              dVar53 = (double)CONCAT44(uVar70,uVar68) -
                                       (double)CONCAT44(uVar60,uVar59);
                              dVar67 = (double)CONCAT44(uVar74,uVar72) - dVar67;
                              *(float *)(pdVar44 + 3) =
                                   (float)((dVar67 * dVar67 + dVar53 * dVar53 + dVar63 * dVar63) /
                                           local_4e0 + 1.0);
                            }
                            fVar58 = (float)local_4c8._0_4_;
                            uVar68 = local_448;
                            uVar70 = uStack_444;
                            uVar59 = uStack_440;
                            uVar60 = uStack_43c;
                          } while ((int)uStack_400 != 0);
                        }
                      }
                      fVar78 = local_4fc;
                      plVar16 = (longlong *)(lVar18 + 0xe0);
                      lVar32 = (longlong)*(int *)(lVar18 + 0xe8);
                      if (0 < (longlong)*(int *)(lVar18 + 0xe8)) {
                        do {
                          puVar45 = local_418;
                          lVar33 = lVar32 + -1;
                          pdVar44 = (double *)(lVar33 * 0x48 + *plVar16);
                          if ((longlong)(int)uStack_410 < 1) {
LAB_143cc1aa3:
                            FUN_14072d42a(pdVar44 + 5,*(undefined4 *)(*local_528 + 0x304));
                            if (((longlong *)pdVar44[4] != (longlong *)0x0) &&
                               (*(longlong *)pdVar44[4] != -1)) {
                              FUN_1401c6d5c(*local_528 + 0x308);
                              FUN_140b3e76a(pdVar44 + 4);
                            }
                            pvVar6 = (void *)(*plVar16 + (longlong)(int)(uint)lVar33 * 0x48);
                            *(undefined8 *)((longlong)pvVar6 + 0x28) = 0;
                            *(undefined8 *)((longlong)pvVar6 + 0x30) = 0xffffffffffffffff;
                            plVar31 = *(longlong **)((longlong)pvVar6 + 0x20);
                            if (plVar31 != (longlong *)0x0) {
                              *(int *)(plVar31 + 0x21) = (int)plVar31[0x21] + -1;
                              if (((int)plVar31[0x26] < 1) &&
                                 (FUN_1400847bc(plVar31 + 0x17,0), (int)plVar31[0x21] == 0)) {
                                FUN_140087e46(plVar31);
                                if (*plVar31 != -1) {
                                  if (DAT_14cb259f8 == 0) goto LAB_143cc1b3f;
                                  FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40));
                                }
                                if (DAT_14cb259f8 != 0) {
                                  FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30));
                                }
                              }
LAB_143cc1b3f:
                              *(undefined8 *)((longlong)pvVar6 + 0x20) = 0;
                            }
                            iVar15 = *(int *)(lVar18 + 0xe8);
                            iVar26 = ~(uint)lVar33 + iVar15;
                            if (iVar26 != 0) {
                              memmove(pvVar6,(void *)((longlong)pvVar6 + 0x48),
                                      (longlong)iVar26 * 0x48);
                              iVar15 = *(int *)(lVar18 + 0xe8);
                            }
                            *(int *)(lVar18 + 0xe8) = iVar15 + -1;
                            FUN_145845570(plVar16);
                          }
                          else {
                            pdVar37 = (double *)(local_418 + 2);
                            uVar55 = 0xffffffff;
                            uVar56 = 0;
                            fVar64 = 3.4e+38;
                            do {
                              fVar66 = (float)((*pdVar37 - pdVar44[2]) * (*pdVar37 - pdVar44[2]) +
                                              (pdVar37[-1] - pdVar44[1]) *
                                              (pdVar37[-1] - pdVar44[1]) +
                                              (pdVar37[-2] - *pdVar44) * (pdVar37[-2] - *pdVar44));
                              uVar36 = uVar56 & 0xffffffff;
                              if (fVar58 * 0.8 <= fVar66 || fVar64 <= fVar66) {
                                fVar66 = fVar64;
                                uVar36 = uVar55;
                              }
                              uVar55 = uVar36;
                              uVar56 = uVar56 + 1;
                              pdVar37 = pdVar37 + 6;
                              fVar64 = fVar66;
                            } while ((longlong)(int)uStack_410 != uVar56);
                            uVar14 = (uint)uVar55;
                            if (uVar14 == 0xffffffff) goto LAB_143cc1aa3;
                            lVar51 = (longlong)(int)uVar14;
                            pdVar44[2] = (double)local_418[lVar51 * 6 + 2];
                            dVar53 = (double)(local_418 + lVar51 * 6)[1];
                            *pdVar44 = (double)local_418[lVar51 * 6];
                            pdVar44[1] = dVar53;
                            *(undefined4 *)(pdVar44 + 3) =
                                 *(undefined4 *)(local_418 + lVar51 * 6 + 3);
                            if (local_418[lVar51 * 6 + 4] != 0) {
                              FUN_1400020a8();
                            }
                            if (~uVar14 + (int)uStack_410 != 0) {
                              memmove(puVar45 + lVar51 * 6,puVar45 + lVar51 * 6 + 6,
                                      (longlong)(int)(~uVar14 + (int)uStack_410) * 0x30);
                            }
                            uStack_410 = CONCAT44(uStack_410._4_4_,(int)uStack_410 + -1);
                            FUN_141870788(&local_418);
                          }
                          bVar57 = 1 < lVar32;
                          lVar32 = lVar33;
                        } while (bVar57);
                      }
                      if ((longlong)(int)uStack_410 != 0) {
                        puVar41 = local_418 + (longlong)(int)uStack_410 * 6;
                        puVar45 = local_418;
                        do {
                          puVar22 = (undefined8 *)FUN_14583ed5c(plVar16);
                          uVar23 = puVar45[1];
                          *puVar22 = *puVar45;
                          puVar22[1] = uVar23;
                          puVar22[2] = puVar45[2];
                          *(undefined4 *)(puVar22 + 3) = *(undefined4 *)(puVar45 + 3);
                          puVar45 = puVar45 + 6;
                        } while (puVar45 != puVar41);
                      }
                      if ((longlong)*(int *)(lVar18 + 0xe8) != 0) {
                        lVar32 = (longlong)*(int *)(lVar18 + 0xe8) * 0x48;
                        plVar16 = (longlong *)(*(longlong *)(lVar18 + 0xe0) + 0x20);
                        do {
                          if (((longlong *)*plVar16 == (longlong *)0x0) ||
                             (*(longlong *)*plVar16 == -1)) {
                            lVar33 = *local_528;
                            FUN_1400b22c2(&local_3f8,"Opp_Audio_Cluster");
                            local_538 = local_538 & 0xffffffffffffff00;
                            FUN_14084a140(lVar33,&local_420,&local_3f8,0);
                            FUN_1403c75f4(plVar16,&local_420);
                            plVar31 = local_420;
                            if (local_420 != (longlong *)0x0) {
                              *(int *)(local_420 + 0x21) = (int)local_420[0x21] + -1;
                              if (((int)local_420[0x26] < 1) &&
                                 (FUN_1400847bc(local_420 + 0x17,0), (int)plVar31[0x21] == 0)) {
                                FUN_140087e46(plVar31);
                                if (*plVar31 != -1) {
                                  if (DAT_14cb259f8 == 0) goto LAB_143cc1cdc;
                                  FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar31);
                                }
                                if (DAT_14cb259f8 != 0) {
                                  FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar31);
                                }
                              }
LAB_143cc1cdc:
                              local_420 = (longlong *)0x0;
                            }
                            if (local_3f8 != (longlong *)0x0) {
                              FUN_1400020a8();
                            }
                            if (((longlong *)*plVar16 != (longlong *)0x0) &&
                               (*(longlong *)*plVar16 != -1)) goto LAB_143cc1d08;
                          }
                          else {
LAB_143cc1d08:
                            FUN_1414591ce(*local_528,plVar16,plVar16 + -4,(int)plVar16[-1]);
                            if ((char)plVar16[4] == '\0') {
                              local_538 = local_538 & 0xffffffff00000000;
                              FUN_14071ab80(*plVar16,&local_3f8,local_520);
                              plVar16[1] = (longlong)local_3f8;
                              plVar16[2] = (longlong)uStack_3f0;
                              plVar16[3] = CONCAT44(uStack_3e4,local_3e8);
                              *(undefined1 *)(plVar16 + 4) = 1;
                            }
                          }
                          plVar16 = plVar16 + 9;
                          lVar32 = lVar32 + -0x48;
                        } while (lVar32 != 0);
                      }
                      FUN_1418705b4(local_418,uStack_410 & 0xffffffff);
                      if (local_418 != (undefined8 *)0x0) {
                        FUN_1400020a8();
                      }
                      goto LAB_143cc1465;
                    }
                  }
LAB_143cc1477:
                  *(undefined1 *)(lVar18 + 0x160) = 0;
                }
                *(undefined4 *)(lVar18 + 0xd8) = 0;
                if (*(int *)(lVar18 + 0xdc) != 0) {
                  FUN_141870452(local_510);
                }
                plVar16 = (longlong *)(local_458 + local_460 + 0x18);
                *(int *)(local_530 + 0x24c) =
                     *(int *)(local_530 + 0x24c) + *(int *)(*plVar16 + 0x88);
                *(int *)(local_530 + 0x248) =
                     *(int *)(local_530 + 0x248) + *(int *)(*plVar16 + 0x8c);
                uVar34 = local_4d0 & ~(uint)local_490;
                puVar21 = *(uint **)(local_530 + 0x348);
                if (*(uint **)(local_530 + 0x348) == (uint *)0x0) {
                  puVar21 = local_4a0;
                }
                uVar14 = *(uint *)(local_530 + 0x350);
                iVar26 = (int)local_450;
                lVar18 = (longlong)iVar26;
                uVar27 = puVar21[lVar18] & uVar34;
                uVar55 = local_450;
                iVar15 = local_4cc;
                if (uVar27 == 0) {
                  iVar39 = uVar14 + 0x1e;
                  if (-1 < (int)(uVar14 - 1)) {
                    iVar39 = uVar14 - 1;
                  }
                  iVar39 = iVar39 >> 5;
                  iVar15 = local_4cc + 0x20;
                  iVar47 = iVar39;
                  if (iVar39 < iVar26) {
                    iVar47 = iVar26;
                  }
                  if (iVar26 < iVar39) {
                    lVar32 = 0;
                    do {
                      uVar27 = puVar21[lVar18 + lVar32 + 1];
                      if (uVar27 != 0) {
                        uVar55 = (ulonglong)(iVar26 + (int)lVar32 + 1);
                        uVar34 = 0xffffffff;
                        goto LAB_143cc1586;
                      }
                      iVar15 = iVar15 + 0x20;
                      lVar32 = lVar32 + 1;
                    } while (iVar47 - lVar18 != lVar32);
                    uVar34 = 0xffffffff;
                    iVar26 = iVar47;
                  }
                  uVar55 = (ulonglong)(iVar26 + 1);
                  uVar56 = local_490;
                  uVar27 = uVar14;
                }
                else {
LAB_143cc1586:
                  uVar56 = (ulonglong)(-uVar27 & uVar27);
                  uVar36 = uVar56 * 2 + 1;
                  lVar18 = 0x3f;
                  if (uVar36 != 0) {
                    for (; uVar36 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                    }
                  }
                  uVar27 = (iVar15 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
                  if ((int)uVar14 <= (int)uVar27) {
                    uVar27 = uVar14;
                  }
                }
                lVar18 = local_530;
              } while (uVar27 != (uint)local_4a8);
            }
LAB_143cbfe7f:
            *(undefined1 *)(lVar18 + 0x45d) = 0;
            *(float *)(lVar18 + 0x460) = local_4d4;
            goto LAB_143cc22fc;
          }
        }
        else if ((iVar15 == 2) && ((char)plVar16[0x14] == '\x01')) {
          EnterCriticalSection(local_4f0);
          lVar18 = local_518[0x16];
          if (lVar18 == 0) {
            lVar18 = FUN_145cd7f46();
          }
          plVar16 = local_518 + 0x15;
          lVar32 = *plVar16;
          uVar55 = FUN_14477b664(lVar18);
          uVar14 = ((uint)(uVar55 >> 0x14) & 0xffff ^ (uint)(uVar55 >> 4)) * -0x7a143595;
          uVar27 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
          uVar27 = uVar27 >> 0x10 ^ uVar27;
          uVar14 = (uint)((ulonglong)lVar32 >> 0x10);
          uVar34 = (uint)lVar32 & 0xffff;
          uVar14 = uVar27 >> 0xd ^
                   (((uint)lVar32 << 0x10 | uVar34) + (int)((ulonglong)lVar32 >> 0x20) +
                    (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar34 >> 4)) - uVar27;
          uVar34 = uVar14 << 8 ^ (-0x61c88647 - uVar27) - uVar14;
          uVar46 = uVar34 >> 0xd ^ (uVar27 - uVar14) - uVar34;
          uVar14 = uVar46 >> 0xc ^ (uVar14 - uVar34) - uVar46;
          uVar27 = uVar14 << 0x10 ^ (uVar34 - uVar46) - uVar14;
          uVar46 = uVar27 >> 5 ^ (uVar46 - uVar14) - uVar27;
          uVar34 = uVar46 >> 3 ^ (uVar14 - uVar27) - uVar46;
          uVar14 = uVar34 << 10 ^ (uVar27 - uVar46) - uVar34;
          local_508 = plVar16;
          iVar15 = FUN_141870826(local_4f8,uVar14 >> 0xf ^ uVar46 - (uVar34 + uVar14),plVar16);
          if ((((iVar15 != -1) &&
               (lVar18 = (longlong)iVar15 * 0x30 + *local_4f8, plVar16 = (longlong *)(lVar18 + 0x18)
               , plVar16 != (longlong *)0x0 && lVar18 != 0)) &&
              (lVar18 = *plVar16, *(int *)(lVar18 + 8) == *(int *)(lVar18 + 0x34))) &&
             (FUN_1401c5dde(lVar18,local_528),
             *(int *)(local_530 + 0x330) != *(int *)(local_530 + 0x35c))) {
            lVar18 = local_518[0x16];
            if (lVar18 == 0) {
              lVar18 = FUN_145cd7f46();
            }
            lVar32 = *local_508;
            uVar55 = FUN_14477b664(lVar18);
            uVar14 = ((uint)(uVar55 >> 0x14) & 0xffff ^ (uint)(uVar55 >> 4)) * -0x7a143595;
            uVar27 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
            uVar27 = uVar27 >> 0x10 ^ uVar27;
            uVar14 = (uint)((ulonglong)lVar32 >> 0x10);
            uVar34 = (uint)lVar32 & 0xffff;
            uVar14 = uVar27 >> 0xd ^
                     (((uint)lVar32 << 0x10 | uVar34) + (int)((ulonglong)lVar32 >> 0x20) +
                      (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar34 >> 4)) - uVar27;
            uVar34 = uVar14 << 8 ^ (-0x61c88647 - uVar27) - uVar14;
            uVar46 = uVar34 >> 0xd ^ (uVar27 - uVar14) - uVar34;
            uVar14 = uVar46 >> 0xc ^ (uVar14 - uVar34) - uVar46;
            uVar27 = uVar14 << 0x10 ^ (uVar34 - uVar46) - uVar14;
            uVar34 = uVar27 >> 5 ^ (uVar46 - uVar14) - uVar27;
            uVar46 = uVar34 >> 3 ^ (uVar14 - uVar27) - uVar34;
            uVar14 = uVar46 << 10 ^ (uVar27 - uVar34) - uVar46;
            lVar18 = *(longlong *)(local_530 + 0x368);
            if (*(longlong *)(local_530 + 0x368) == 0) {
              lVar18 = local_4b0;
            }
            uVar55 = (longlong)(int)(uVar14 >> 0xf ^ uVar34 - (uVar46 + uVar14)) &
                     (longlong)*(int *)(local_530 + 0x370) - 1U;
            iVar15 = *(int *)(lVar18 + uVar55 * 4);
            if (iVar15 != -1) {
              plVar16 = (longlong *)(lVar18 + uVar55 * 4);
LAB_143cbf586:
              plVar31 = (longlong *)(*local_4f8 + (longlong)iVar15 * 0x30);
              if (*(longlong *)(*local_4f8 + 8 + (longlong)iVar15 * 0x30) == 0) {
                uVar23 = FUN_145cd7f46();
                lVar18 = FUN_14477b664(uVar23);
                plVar31[1] = lVar18;
              }
              lVar18 = local_518[0x16];
              if (lVar18 == 0) {
                lVar18 = FUN_145cd7f46();
              }
              local_510 = (longlong *)*local_508;
              lVar18 = FUN_14477b664(lVar18);
              iVar15 = 0;
              if ((lVar18 != 0) &&
                 (plVar42 = *(longlong **)(lVar18 + 0xb8), plVar42 != (longlong *)0x0)) {
                lVar32 = *plVar42;
                pcVar5 = *(code **)(lVar32 + 0x108);
                if (pcVar5 != (code *)&LAB_14478342e && pcVar5 != (code *)&LAB_144783422) {
                  cVar13 = (*pcVar5)(plVar42);
                  iVar15 = 0;
                  if (cVar13 == '\0') goto LAB_143cbf63f;
                  lVar32 = *plVar42;
                }
                pcVar5 = *(code **)(lVar32 + 0x110);
                ppuVar29 = &PTR_PTR_14c763408;
                if ((pcVar5 != (code *)&LAB_144783426) &&
                   (ppuVar29 = &PTR_PTR_14c75f798, pcVar5 != (code *)&LAB_144783432)) {
                  ppuVar29 = (undefined **)(*pcVar5)(plVar42);
                }
                iVar15 = FUN_144aff48c(ppuVar29);
              }
LAB_143cbf63f:
              plVar42 = (longlong *)*plVar31;
              lVar32 = plVar31[1];
              iVar26 = 0;
              if ((lVar32 != 0) &&
                 (plVar35 = *(longlong **)(lVar32 + 0xb8), plVar35 != (longlong *)0x0)) {
                lVar33 = *plVar35;
                pcVar5 = *(code **)(lVar33 + 0x108);
                if (pcVar5 != (code *)&LAB_14478342e && pcVar5 != (code *)&LAB_144783422) {
                  cVar13 = (*pcVar5)(plVar35);
                  iVar26 = 0;
                  if (cVar13 == '\0') goto LAB_143cbf6a8;
                  lVar33 = *plVar35;
                }
                pcVar5 = *(code **)(lVar33 + 0x110);
                ppuVar29 = &PTR_PTR_14c763408;
                if ((pcVar5 != (code *)&LAB_144783426) &&
                   (ppuVar29 = &PTR_PTR_14c75f798, pcVar5 != (code *)&LAB_144783432)) {
                  ppuVar29 = (undefined **)(*pcVar5)(plVar35);
                }
                iVar26 = FUN_144aff48c(ppuVar29);
              }
LAB_143cbf6a8:
              if ((iVar26 != iVar15) || (plVar42 != local_510)) goto LAB_143cbf6b8;
              if (lVar32 != lVar18) {
                if ((lVar18 != 0) && (lVar32 != 0)) {
                  iVar15 = *(int *)(lVar18 + 0x38);
                  iVar26 = *(int *)(lVar32 + 0x38);
                  if (((iVar15 <= iVar26) &&
                      (*(longlong *)(*(longlong *)(lVar32 + 0x30) + (longlong)iVar15 * 8) ==
                       lVar18 + 0x30)) ||
                     ((iVar26 <= iVar15 &&
                      (*(longlong *)(*(longlong *)(lVar18 + 0x30) + (longlong)iVar26 * 8) ==
                       lVar32 + 0x30)))) goto LAB_143cc228c;
                }
                goto LAB_143cbf6b8;
              }
LAB_143cc228c:
              iVar15 = (int)*plVar16;
              lVar32 = (longlong)iVar15 * 0x30;
              lVar18 = *(longlong *)(local_530 + 0x368);
              if (*(longlong *)(local_530 + 0x368) == 0) {
                lVar18 = local_4b0;
              }
              lVar33 = *(longlong *)(local_530 + 0x328);
              lVar51 = (longlong)*(int *)(lVar33 + 0x2c + lVar32);
              iVar26 = *(int *)(lVar18 + lVar51 * 4);
              if (iVar26 == iVar15) {
                piVar38 = (int *)(lVar18 + lVar51 * 4);
              }
              else {
                do {
                  piVar38 = (int *)((longlong)iVar26 * 0x30 + lVar33 + 0x28);
                  iVar26 = *piVar38;
                } while (iVar26 != iVar15);
              }
              *piVar38 = *(int *)(lVar33 + lVar32 + 0x28);
              plVar16 = *(longlong **)(*local_4f8 + 0x20 + lVar32);
              if (plVar16 != (longlong *)0x0) {
                LOCK();
                plVar31 = plVar16 + 1;
                *(int *)plVar31 = (int)*plVar31 + -1;
                UNLOCK();
                if ((int)*plVar31 == 0) {
                  (**(code **)*plVar16)(plVar16);
                  LOCK();
                  piVar38 = (int *)((longlong)plVar16 + 0xc);
                  *piVar38 = *piVar38 + -1;
                  UNLOCK();
                  if (*piVar38 == 0) {
                    (**(code **)(*plVar16 + 0x10))(plVar16);
                  }
                }
              }
              FUN_143cccfc6(local_4f8,iVar15);
            }
          }
          goto LAB_143cc22fc;
        }
      }
      FUN_1401c594a(local_468,plVar16);
      pcVar5 = DAT_14cb72ad0;
      if (DAT_14cb72ad0 != (code *)0x0) {
        local_3f8 = (longlong *)((ulonglong)local_3f8 & 0xffffffffffffff00);
        plVar16 = DAT_14cb72ae0;
        if (DAT_14cb72ae0 == (longlong *)0x0) {
          plVar16 = &DAT_14cb72af0;
        }
        uVar23 = (**(code **)(*plVar16 + 8))();
        cVar13 = (*pcVar5)(uVar23,&local_3f8);
        if (cVar13 != '\0') break;
      }
      plVar16 = (longlong *)FUN_1401c6a1e();
    } while (plVar16 != (longlong *)0x0);
  }
  puVar24 = (ulonglong *)0x0;
  local_3f8 = (longlong *)*local_498;
  if (((ulonglong)local_3f8 & 0x3ffffff) != 0) {
    puVar24 = (ulonglong *)
              ((ulonglong)(((uint)local_3f8 & 0x3fff) * 0x18) +
              *(longlong *)(&DAT_14c833b00 + (ulonglong)(((uint)local_3f8 & 0x3ffffff) >> 0xe) * 8))
    ;
  }
  local_408 = (longlong *)*puVar24;
  if (((((ulonglong)local_408 & 0x3ffffff) != 0) || (*(int *)(param_1 + 0x2c) == 0)) ||
     ((uVar14 = *(uint *)(param_1 + 0x28), (int)uVar14 < 0 ||
      (((((DAT_14c9647dc <= (int)uVar14 ||
          (lVar18 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8), lVar18 == 0)) ||
         (*(int *)(lVar18 + 0x10) != *(int *)(param_1 + 0x2c))) ||
        (((*(uint *)(lVar18 + 8) & 0x10200000) != 0 || (*(char *)(param_1 + 0x45d) != '\0')))) ||
       (*(longlong *)(param_1 + 0x240) == 0)))))) goto LAB_143cc2741;
  uVar55 = *(ulonglong *)(param_1 + 0x28);
  lVar18 = FUN_1418712b8(param_1 + 0x40);
  FUN_14186f77a(lVar18);
  if (lVar18 == 0) goto LAB_143cc2741;
  *(undefined1 *)(param_1 + 0x45d) = 1;
  cVar13 = *(char *)(param_1 + 0x45c);
  *(undefined4 *)(lVar18 + 0xa0) = 2;
  if ((((uVar55 >> 0x20 != 0) && (uVar14 = (uint)uVar55, -1 < (int)uVar14)) &&
      (((int)uVar14 < DAT_14c9647dc &&
       (((lVar32 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0xd & 0x3fff8)), lVar32 != 0
         && (*(int *)(lVar32 + 0x10) == (int)(uVar55 >> 0x20))) &&
        ((*(uint *)(lVar32 + 8) & 0x10200000) == 0)))))) && (DAT_14cb259f8 != 0)) {
    if (DAT_14cb25ab0 == '\x01') {
      local_3f8 = (longlong *)0x0;
      uStack_3f0 = (longlong *)0x0;
      lVar32 = (longlong)*(int *)(*(longlong *)(DAT_14cb259f8 + 0x40) + 0x18);
      if (lVar32 == 0) goto LAB_143cc299d;
      plVar16 = *(longlong **)(*(longlong *)(DAT_14cb259f8 + 0x40) + 0x10);
      plVar31 = plVar16 + lVar32 * 2;
      do {
        plVar35 = uStack_3f0;
        lVar32 = *plVar16;
        plVar42 = (longlong *)plVar16[1];
        if (plVar42 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar42 + 1) = (int)plVar42[1] + 1;
          UNLOCK();
        }
        if ((lVar32 != 0) && ((*(longlong *)(lVar32 + 0xf0) != 0 || (cVar13 == '\0')))) {
          if (plVar42 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar42 + 1) = (int)plVar42[1] + 1;
            UNLOCK();
          }
          lVar33 = (longlong)(int)uStack_3f0;
          uVar14 = (int)uStack_3f0 + 1;
          uStack_3f0 = (longlong *)CONCAT44(uStack_3f0._4_4_,uVar14);
          local_510 = plVar31;
          if (uStack_3f0._4_4_ < uVar14) {
            FUN_144796c16(&local_3f8,(ulonglong)plVar35 & 0xffffffff);
          }
          local_3f8[lVar33 * 2] = lVar32;
          local_3f8[lVar33 * 2 + 1] = (longlong)plVar42;
          plVar31 = local_510;
        }
        if (plVar42 != (longlong *)0x0) {
          LOCK();
          plVar35 = plVar42 + 1;
          *(int *)plVar35 = (int)*plVar35 + -1;
          UNLOCK();
          if ((int)*plVar35 == 0) {
            (**(code **)*plVar42)(plVar42);
            LOCK();
            piVar38 = (int *)((longlong)plVar42 + 0xc);
            *piVar38 = *piVar38 + -1;
            UNLOCK();
            if (*piVar38 == 0) {
              (**(code **)(*plVar42 + 0x10))(plVar42);
            }
          }
        }
        plVar42 = local_3f8;
        plVar16 = plVar16 + 2;
      } while (plVar16 != plVar31);
      lVar32 = (longlong)(int)uStack_3f0;
      if (lVar32 == 0) goto LAB_143cc29a0;
      iVar15 = *(int *)(lVar18 + 0x110);
      lVar33 = 0;
      do {
        lVar51 = *(longlong *)((longlong)plVar42 + lVar33);
        if (lVar51 != 0) {
          uVar9 = *(undefined8 *)(lVar51 + 0xb0);
          uVar10 = *(undefined8 *)(lVar51 + 0xb8);
          uVar23 = *(undefined8 *)(lVar51 + 0xc0);
          *(uint *)(lVar18 + 0x110) = iVar15 + 1U;
          if (*(uint *)(lVar18 + 0x114) < iVar15 + 1U) {
            FUN_1487f4fa4(lVar18 + 0xa8,iVar15);
          }
          lVar51 = *(longlong *)(lVar18 + 0x108);
          if (*(longlong *)(lVar18 + 0x108) == 0) {
            lVar51 = lVar18 + 0xa8;
          }
          puVar45 = (undefined8 *)(lVar51 + (longlong)iVar15 * 0x18);
          *puVar45 = uVar9;
          puVar45[1] = uVar10;
          *(undefined8 *)(lVar51 + 0x10 + (longlong)iVar15 * 0x18) = uVar23;
          iVar15 = *(int *)(lVar18 + 0x110);
        }
      } while ((iVar15 < 5) &&
              (bVar57 = lVar32 * 0x10 + -0x10 != lVar33, lVar33 = lVar33 + 0x10, bVar57));
      uVar55 = (ulonglong)uStack_3f0 & 0xffffffff;
    }
    else {
LAB_143cc299d:
      uStack_3f0 = (longlong *)0x0;
      local_3f8 = (longlong *)0x0;
LAB_143cc29a0:
      uVar55 = 0;
    }
    FUN_144796acb(local_3f8,uVar55);
    param_1 = local_530;
    if (local_3f8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_140b3f7c6(&local_3f8,lVar18);
  if (*(int *)(lVar18 + 0x120) != 0x15) {
    FUN_1446efa72((longlong *)(lVar18 + 0x118),0,0x15,0x10);
    *(undefined4 *)(lVar18 + 0x120) = 0x15;
  }
  puVar45 = *(undefined8 **)(lVar18 + 0x118);
  *puVar45 = &PTR_LAB_14b3f01a0;
  LOCK();
  UNLOCK();
  lVar33 = DAT_14c758608 + 1;
  lVar32 = DAT_14c758608 + 1;
  if (lVar33 == 0) {
    LOCK();
    UNLOCK();
    lVar33 = DAT_14c758608 + 2;
    lVar32 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar32;
  puVar45[2] = lVar33;
  *puVar45 = &PTR_FUN_14b3f0210;
  puVar45[4] = local_3f8;
  puVar45[5] = uStack_3f0;
  puVar45[6] = 0;
  puVar45[7] = 0;
  puVar45[8] = 0;
  puVar45[6] = CONCAT44(uStack_3e4,local_3e8);
  uVar23 = FUN_14477b664(local_3e0);
  uVar23 = FUN_14477b664(uVar23);
  puVar45[7] = uVar23;
  puVar45[8] = lStack_3d8;
  puVar45[9] = local_3d0;
  *(undefined4 *)(puVar45 + 10) = (undefined4)local_3c8;
  *(undefined4 *)((longlong)puVar45 + 0x54) = local_3c8._4_4_;
  puVar45[0xb] = local_3c0;
  plVar16 = local_3b8;
  plVar31 = puVar45 + 0xc;
  for (lVar32 = 0xc; lVar32 != 0; lVar32 = lVar32 + -1) {
    *plVar31 = *plVar16;
    plVar16 = plVar16 + 1;
    plVar31 = plVar31 + 1;
  }
  *(undefined4 *)(puVar45 + 0x18) = local_358;
  if (local_2f0 == 0) {
    memmove(puVar45 + 0x19,local_350,0x60);
  }
  puVar45[0x25] = local_2f0;
  *(undefined4 *)(puVar45 + 0x26) = local_2e8;
  *(undefined4 *)((longlong)puVar45 + 0x134) = local_2e4;
  puVar45[0x27] = local_2e0;
  *(undefined4 *)(puVar45 + 0x28) = local_2d8;
  FUN_1418713fe(param_1 + 0xc0,lVar18);
  (**(code **)(**(longlong **)(param_1 + 0x240) + 0x10))();
LAB_143cc2741:
  if ((local_f0 ^ (ulonglong)auStack_558) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_143cc0039:
  lVar32 = *plVar31;
  *plVar31 = *plVar52;
  *plVar52 = lVar32;
  iVar15 = iVar15 + -1;
  plVar48 = plVar48 + -2;
  if ((longlong)plVar40 - (longlong)plVar35 < (longlong)plVar42 - (longlong)plVar54) {
    if (plVar30 < plVar16) {
      *pplVar19 = plVar30;
      pplVar19[1] = plVar16;
      *(int *)(pplVar19 + 2) = iVar15;
      pplVar19 = pplVar19 + 3;
    }
    plVar54 = plVar31;
    if (plVar52 <= plVar31 + 1) goto LAB_143cc026f;
  }
  else {
    if (plVar31 + 1 < plVar52) {
      *pplVar19 = plVar31;
      pplVar19[1] = plVar48;
      *(int *)(pplVar19 + 2) = iVar15;
      pplVar19 = pplVar19 + 3;
    }
    plVar31 = plVar30;
    plVar40 = plVar16;
    plVar48 = plVar16;
    if (plVar16 <= plVar30) goto LAB_143cc026f;
  }
  iVar26 = (int)((ulonglong)((longlong)plVar40 - (longlong)plVar54) >> 3);
  uVar55 = (ulonglong)(iVar26 + 1);
  plVar42 = plVar40;
  plVar35 = plVar54;
  plVar16 = plVar48;
  if (iVar15 == 0) goto LAB_143cc00cc;
  goto LAB_143cbffa4;
LAB_143cbf6b8:
  iVar15 = (int)plVar31[5];
  plVar16 = plVar31 + 5;
  if (iVar15 == -1) goto LAB_143cc22fc;
  goto LAB_143cbf586;
}



// FUNCTION 143cc29ca FUN_143cc29ca body=106 status=ok
// SIG undefined FUN_143cc29ca(void)

undefined8 FUN_143cc29ca(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0x45d) == '\0') {
    plVar1 = (longlong *)0x0;
    uVar3 = (uint)*(ulonglong *)(param_1 + 0x1c0);
    if ((*(ulonglong *)(param_1 + 0x1c0) & 0x3ffffff) != 0) {
      plVar1 = (longlong *)
               ((ulonglong)((uVar3 & 0x3fff) * 0x18) +
               *(longlong *)(&DAT_14c833b00 + (ulonglong)((uVar3 & 0x3ffffff) >> 0xe) * 8));
    }
    uVar2 = CONCAT71((int7)((ulonglong)(*plVar1 << 0x26) >> 8),*plVar1 << 0x26 != 0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143cc2a34 FUN_143cc2a34 body=5521 status=ok
// SIG undefined FUN_143cc2a34(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143cc2a34(longlong param_1,double *param_2,longlong *param_3,double *param_4)

{
  longlong *plVar1;
  int *piVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  char cVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined8 uVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong *plVar32;
  void *_Dst;
  byte bVar33;
  uint uVar34;
  int iVar35;
  ulonglong uVar36;
  undefined1 uVar37;
  uint uVar38;
  longlong *plVar39;
  ulonglong uVar40;
  int iVar41;
  longlong *plVar42;
  longlong lVar43;
  uint uVar44;
  uint uVar45;
  ulonglong uVar46;
  double *pdVar47;
  undefined4 uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  undefined1 auStack_4998 [32];
  undefined4 *local_4978;
  undefined1 *local_4970;
  longlong *local_4968;
  longlong local_4960;
  longlong *local_4958;
  double *local_4950;
  undefined4 local_4944;
  LPCRITICAL_SECTION local_4940;
  undefined4 local_4938;
  undefined4 uStack_4934;
  undefined4 uStack_4930;
  undefined4 uStack_492c;
  longlong local_4928;
  undefined8 local_4920;
  undefined8 uStack_4918;
  double local_4910;
  double local_4908;
  longlong *local_4900;
  longlong *local_48f8;
  undefined8 local_48e8;
  undefined8 uStack_48e0;
  longlong local_48d8;
  undefined8 local_48d0;
  undefined4 local_48c8;
  undefined4 uStack_48c4;
  undefined4 uStack_48c0;
  undefined4 uStack_48bc;
  double local_48b8;
  undefined8 local_48b0;
  undefined1 local_48a0 [18432];
  undefined8 local_a0;
  undefined8 local_98;
  ulonglong local_90;
  undefined8 uStack_48;
  
  uStack_48 = 0x143cc2a4a;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_4998;
  lVar29 = param_3[1];
  if (lVar29 == 0) {
    uVar27 = FUN_145cd7f46();
    lVar29 = FUN_14477b664(uVar27);
    param_3[1] = lVar29;
  }
  lVar28 = param_3[2];
  if (lVar28 == 0) {
    if ((lVar29 == 0) || (*param_3 == 0)) goto LAB_143cc39bb;
    plVar42 = *(longlong **)(lVar29 + 0xb8);
    if ((plVar42 == (longlong *)0x0) ||
       (cVar21 = (**(code **)(*plVar42 + 0x108))(plVar42), cVar21 == '\0')) {
      lVar28 = 0;
    }
    else {
      uVar27 = (**(code **)(*plVar42 + 0x110))(plVar42);
      lVar28 = FUN_144aff482(uVar27,param_3);
    }
    param_3[2] = lVar28;
  }
  if ((lVar28 == 0) || ((int)param_3[4] == 0)) goto LAB_143cc39bb;
  lVar29 = *(longlong *)(lVar28 + 0x20);
  if (lVar29 == 0) {
    uVar27 = FUN_140067708();
    lVar29 = FUN_14477b664(uVar27);
    *(longlong *)(lVar28 + 0x20) = lVar29;
  }
  lVar31 = *(longlong *)(lVar28 + 0x28);
  if (lVar31 == 0) {
    if ((lVar29 == 0) || (*(longlong *)(lVar28 + 0x18) == 0)) goto LAB_143cc39bb;
    plVar42 = *(longlong **)(lVar29 + 0xb8);
    if ((plVar42 == (longlong *)0x0) ||
       (cVar21 = (**(code **)(*plVar42 + 0x108))(plVar42), cVar21 == '\0')) {
      *(undefined8 *)(lVar28 + 0x28) = 0;
      goto LAB_143cc39bb;
    }
    uVar27 = (**(code **)(*plVar42 + 0x110))(plVar42);
    lVar31 = FUN_144aff482(uVar27,(longlong *)(lVar28 + 0x18));
    *(longlong *)(lVar28 + 0x28) = lVar31;
    if (lVar31 == 0) goto LAB_143cc39bb;
  }
  cVar21 = *(char *)(lVar28 + 0x58);
  if (cVar21 == '\x01') {
    if ((((*(float *)(lVar28 + 0x74) <= *(float *)(lVar28 + 0x70) &&
           *(float *)(lVar28 + 0x70) != *(float *)(lVar28 + 0x74)) ||
         (*(char *)(lVar31 + 0x40) != '\x01')) ||
        (iVar22 = _finite((double)*(float *)(lVar31 + 0x48)), iVar22 == 0)) ||
       (*(char *)(lVar31 + 0x41) != '\0')) goto LAB_143cc39bb;
    cVar21 = *(char *)(lVar28 + 0x58);
  }
  if (((cVar21 == '\0') && (iVar22 = _finite((double)*(float *)(lVar31 + 0x48)), iVar22 != 0)) &&
     (*(char *)(lVar31 + 0x41) != '\x01')) goto LAB_143cc39bb;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x300);
  EnterCriticalSection(lpCriticalSection);
  plVar42 = (longlong *)(param_1 + 0x328);
  lVar29 = param_3[1];
  if (lVar29 == 0) {
    lVar29 = FUN_145cd7f46();
  }
  lVar28 = *param_3;
  uVar30 = FUN_14477b664(lVar29);
  uVar23 = ((uint)(uVar30 >> 0x14) & 0xffff ^ (uint)(uVar30 >> 4)) * -0x7a143595;
  uVar34 = (uVar23 >> 0xd ^ uVar23) * -0x3d4d51cb;
  uVar34 = uVar34 >> 0x10 ^ uVar34;
  uVar23 = (uint)((ulonglong)lVar28 >> 0x10);
  uVar38 = (uint)lVar28 & 0xffff;
  uVar23 = uVar34 >> 0xd ^
           (((uint)lVar28 << 0x10 | uVar38) + (int)((ulonglong)lVar28 >> 0x20) +
            (uVar23 << 0x13 | uVar23 & 0xffff) + (uVar38 >> 4)) - uVar34;
  uVar38 = uVar23 << 8 ^ (-0x61c88647 - uVar34) - uVar23;
  uVar44 = uVar38 >> 0xd ^ (uVar34 - uVar23) - uVar38;
  uVar23 = uVar44 >> 0xc ^ (uVar23 - uVar38) - uVar44;
  uVar34 = uVar23 << 0x10 ^ (uVar38 - uVar44) - uVar23;
  uVar44 = uVar34 >> 5 ^ (uVar44 - uVar23) - uVar34;
  uVar38 = uVar44 >> 3 ^ (uVar23 - uVar34) - uVar44;
  uVar23 = uVar38 << 10 ^ (uVar34 - uVar44) - uVar38;
  iVar22 = FUN_141870826(plVar42,uVar23 >> 0xf ^ uVar44 - (uVar38 + uVar23),param_3);
  local_4960 = param_1;
  local_4958 = param_3;
  local_4940 = lpCriticalSection;
  if (iVar22 == -1) {
LAB_143cc2d37:
    lVar29 = param_3[1];
    if (lVar29 == 0) {
      uVar27 = FUN_145cd7f46();
      lVar29 = FUN_14477b664(uVar27);
      param_3[1] = lVar29;
    }
    lVar28 = param_3[2];
    if (((lVar28 == 0) && (lVar28 = 0, lVar29 != 0)) && (*param_3 != 0)) {
      plVar32 = *(longlong **)(lVar29 + 0xb8);
      if ((plVar32 == (longlong *)0x0) ||
         (cVar21 = (**(code **)(*plVar32 + 0x108))(plVar32), cVar21 == '\0')) {
        lVar28 = 0;
      }
      else {
        uVar27 = (**(code **)(*plVar32 + 0x110))(plVar32);
        lVar28 = FUN_144aff482(uVar27,param_3);
      }
      param_3[2] = lVar28;
    }
    local_4968 = plVar42;
    plVar32 = (longlong *)FUN_14001cc68(0x178,0x10);
    plVar32[1] = (longlong)&DAT_100000001;
    *plVar32 = (longlong)&PTR_FUN_14b3f00d0;
    plVar42 = plVar32 + 2;
    plVar32[6] = 0;
    *(undefined4 *)(plVar32 + 7) = 0;
    plVar32[2] = 0;
    plVar32[3] = 0;
    *(undefined8 *)((longlong)plVar32 + 0x3c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)plVar32 + 0x44) = 0;
    plVar32[10] = 0;
    *(undefined4 *)(plVar32 + 0xb) = 0;
    plVar32[0xc] = 0;
    plVar32[0xd] = 0;
    plVar32[0xe] = 0;
    plVar32[0xc] = *(longlong *)(lVar28 + 0x18);
    uVar27 = FUN_14477b664(*(undefined8 *)(lVar28 + 0x20));
    lVar29 = FUN_14477b664(uVar27);
    plVar32[0xd] = lVar29;
    plVar32[0xe] = *(longlong *)(lVar28 + 0x28);
    plVar32[0x11] = 0;
    plVar32[0xf] = 0;
    plVar32[0x10] = 0;
    plVar32[0xf] = *(longlong *)(lVar28 + 0x30);
    uVar27 = FUN_14477b664(*(undefined8 *)(lVar28 + 0x38));
    lVar29 = FUN_14477b664(uVar27);
    plVar32[0x10] = lVar29;
    plVar32[0x11] = *(longlong *)(lVar28 + 0x40);
    fVar51 = *(float *)(lVar28 + 0x74);
    fVar49 = (float)FUN_143cbef20(plVar42);
    fVar49 = fVar49 * fVar51;
    fVar51 = *(float *)(lVar28 + 0x70);
    fVar50 = (float)FUN_143cbef20(plVar42);
    fVar50 = fVar50 * fVar51;
    *(float *)(plVar32 + 0x12) = fVar50 * fVar50;
    *(float *)((longlong)plVar32 + 0x94) = fVar49 * fVar49;
    plVar32[0x13] = 0;
    *(undefined4 *)(plVar32 + 0x14) = *(undefined4 *)(lVar28 + 100);
    *(undefined4 *)((longlong)plVar32 + 0xa4) = *(undefined4 *)(lVar28 + 0x68);
    *(undefined4 *)(plVar32 + 0x15) = *(undefined4 *)(lVar28 + 0x6c);
    *(undefined4 *)((longlong)plVar32 + 0xac) = 0;
    *(undefined1 *)(plVar32 + 0x16) = *(undefined1 *)(lVar28 + 0x62);
    cVar21 = *(char *)(lVar28 + 0x58);
    *(char *)((longlong)plVar32 + 0xb1) = cVar21;
    uVar37 = 1;
    if (*(char *)(lVar28 + 0x60) == '\0') {
      uVar37 = *(undefined1 *)(lVar28 + 0x61);
    }
    *(undefined1 *)((longlong)plVar32 + 0xb2) = uVar37;
    bVar33 = *(byte *)(lVar28 + 0x59) ^ 1;
    if (*(char *)(lVar28 + 0x61) == '\0') {
      bVar33 = 0;
    }
    *(byte *)((longlong)plVar32 + 0xb3) = bVar33;
    *(undefined1 *)((longlong)plVar32 + 0xb4) = *(undefined1 *)(lVar28 + 0x59);
    *(undefined4 *)(plVar32 + 0x17) = *(undefined4 *)(lVar28 + 0x5c);
    plVar32[0x18] = 0;
    iVar22 = *(int *)(lVar28 + 0x50);
    uVar27 = *(undefined8 *)(lVar28 + 0x48);
    *(int *)(plVar32 + 0x19) = iVar22;
    if (iVar22 == 0) {
      *(undefined4 *)((longlong)plVar32 + 0xcc) = 0;
    }
    else {
      FUN_14055313c(plVar32 + 0x18,iVar22,0);
      FUN_140553097(plVar32[0x18],uVar27,iVar22);
      cVar21 = *(char *)((longlong)plVar32 + 0xb1);
    }
    plVar32[0x24] = 0;
    *(undefined4 *)(plVar32 + 0x25) = 0;
    plVar32[0x1a] = 0;
    plVar32[0x1b] = 0;
    plVar32[0x1c] = 0;
    plVar32[0x1d] = 0;
    plVar32[0x1e] = 0;
    plVar32[0x1f] = 0;
    plVar32[0x20] = 0;
    plVar32[0x21] = 0;
    *(undefined8 *)((longlong)plVar32 + 300) = 0xffffffff00000080;
    *(undefined4 *)((longlong)plVar32 + 0x134) = 0;
    plVar32[0x28] = 0;
    *(undefined4 *)(plVar32 + 0x29) = 0;
    plVar32[0x2a] = 0;
    plVar32[0x2b] = 0;
    plVar32[0x2c] = -1;
    plVar32[0x2d] = 0;
    *(undefined1 *)(plVar32 + 0x2e) = 0;
    if (cVar21 == '\x01') {
      fVar51 = *(float *)((longlong)plVar32 + 0xa4);
      fVar49 = *(float *)(plVar32 + 0x15);
      uVar23 = rand();
      *(float *)((longlong)plVar32 + 0xac) =
           ((float)(uVar23 & 0x7fff) / 32767.0) * (fVar49 - fVar51) + fVar51;
    }
    lVar29 = local_4960;
    local_4950 = param_2;
    if (*(int *)(local_4960 + 0x35c) == 0) {
      uVar23 = *(uint *)(local_4960 + 0x330);
      *(uint *)(local_4960 + 0x330) = uVar23 + 1;
      if (*(uint *)(local_4960 + 0x334) == uVar23) {
        FUN_140044672(local_4968,uVar23);
      }
      iVar22 = *(int *)(lVar29 + 0x350);
      if (iVar22 == 0) {
        iVar41 = -1;
      }
      else {
        iVar41 = iVar22 + 0x1e;
        if (-1 < iVar22 + -1) {
          iVar41 = iVar22 + -1;
        }
        iVar41 = iVar41 >> 5;
      }
      lVar28 = lVar29 + 0x338;
      iVar24 = iVar22 + 1;
      iVar35 = iVar22 + 0x1f;
      if (-1 < iVar22) {
        iVar35 = iVar22;
      }
      if (iVar35 >> 5 == iVar41) {
        *(int *)(lVar29 + 0x350) = iVar24;
      }
      else {
        if (*(int *)(lVar29 + 0x354) <= iVar22) {
          iVar41 = iVar22;
          if (iVar22 + 0x20U < 0xa0) {
            iVar24 = 0x80;
          }
          else {
            uVar34 = iVar22 + 0x20U >> 5;
            if (*(int *)(lVar29 + 0x354) + 0x1fU < 0xa0) {
              uVar38 = 4;
              if (4 < uVar34) {
                uVar38 = uVar34;
              }
            }
            else {
              uVar38 = uVar34 + (uVar34 * 3 >> 3) + 0x10;
            }
            uVar30 = (ulonglong)(uVar38 * 4);
            if (DAT_14c872d28 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar44 = (uint)(uVar30 + 0xf);
                if (uVar38 < 0x1ffd) {
                  uVar30 = (ulonglong)
                           (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar44 >> 4]];
                }
                else {
                  uVar36 = uVar30 + 0xf & 0xfffffffffffffff0;
                  if (uVar36 < 0x7ff1) {
                    bVar33 = (&DAT_14c841e00)[uVar44 >> 4];
                    uVar40 = 0x32;
                    if (0x32 < bVar33) {
                      uVar40 = (ulonglong)bVar33;
                    }
                    uVar46 = 0x32 - (ulonglong)bVar33;
                    do {
                      uVar30 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar46 & 0xffffffff];
                      if (((&DAT_14c841d90)[uVar46 & 0xffffffff] & 0xf) == 0) goto LAB_143cc3d1d;
                      lVar29 = uVar40 + 1 + uVar46;
                      uVar46 = uVar46 - 1;
                    } while (lVar29 != 0x33);
                  }
                  uVar30 = 0x10;
                  if (0x10 < DAT_14c841df8) {
                    uVar30 = (ulonglong)DAT_14c841df8;
                  }
                  uVar30 = -uVar30 & (uVar36 + uVar30) - 1;
                }
              }
              else {
                uVar30 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar30,0);
                iVar41 = *(int *)(local_4960 + 0x350);
              }
            }
LAB_143cc3d1d:
            iVar26 = (int)(uVar30 >> 2);
            iVar24 = -0x20;
            if ((int)uVar34 <= iVar26) {
              iVar24 = iVar26 << 5;
            }
          }
          lVar29 = local_4960;
          *(int *)(local_4960 + 0x354) = iVar24;
          FUN_1446efbd8(lVar28,iVar41);
          iVar24 = *(int *)(lVar29 + 0x350) + 1;
        }
        iVar41 = iVar24 + 0x1f;
        if (-1 < iVar24) {
          iVar41 = iVar24;
        }
        *(int *)(lVar29 + 0x350) = iVar24;
        if (iVar24 % 0x20 != 0) {
          lVar31 = *(longlong *)(lVar29 + 0x348);
          if (*(longlong *)(lVar29 + 0x348) == 0) {
            lVar31 = lVar28;
          }
          bVar33 = -(char)(iVar24 % 0x20);
          *(uint *)(lVar31 + (longlong)(iVar41 >> 5) * 4) =
               (uint)(*(int *)(lVar31 + (longlong)(iVar41 >> 5) * 4) << (bVar33 & 0x1f)) >>
               (bVar33 & 0x1f);
        }
      }
      lVar31 = (longlong)(int)uVar23;
      if (*(longlong *)(lVar29 + 0x348) != 0) {
        lVar28 = *(longlong *)(lVar29 + 0x348);
      }
      bVar33 = (byte)iVar22 & 0x1f;
      puVar4 = (uint *)(lVar28 + (longlong)(iVar35 >> 5) * 4);
      *puVar4 = *puVar4 & (-2 << bVar33 | 0xfffffffeU >> 0x20 - bVar33);
    }
    else {
      uVar23 = *(uint *)(local_4960 + 0x358);
      lVar31 = (longlong)(int)uVar23;
      iVar22 = *(int *)(*(longlong *)(local_4960 + 0x328) + 4 + lVar31 * 0x30);
      *(int *)(local_4960 + 0x358) = iVar22;
      iVar41 = *(int *)(local_4960 + 0x35c) + -1;
      *(int *)(local_4960 + 0x35c) = iVar41;
      if (iVar41 != 0) {
        *(undefined4 *)(*(longlong *)(local_4960 + 0x328) + (longlong)iVar22 * 0x30) = 0xffffffff;
      }
    }
    plVar39 = local_4958;
    lVar28 = lVar29 + 0x338;
    if (*(longlong *)(lVar29 + 0x348) != 0) {
      lVar28 = *(longlong *)(lVar29 + 0x348);
    }
    uVar34 = uVar23 + 0x1f;
    if (-1 < (int)uVar23) {
      uVar34 = uVar23;
    }
    puVar4 = (uint *)(lVar28 + (longlong)((int)uVar34 >> 5) * 4);
    *puVar4 = *puVar4 | 1 << ((byte)uVar23 & 0x1f);
    lVar29 = *(longlong *)(lVar29 + 0x328);
    lVar31 = lVar31 * 0x30;
    puVar3 = (undefined8 *)(lVar29 + lVar31);
    *(undefined8 *)(lVar29 + lVar31) = 0;
    ((undefined8 *)(lVar29 + lVar31))[1] = 0;
    *(undefined8 *)(lVar29 + 0x10 + lVar31) = 0;
    *(longlong *)(lVar29 + lVar31) = *local_4958;
    uVar27 = FUN_14477b664(local_4958[1]);
    lVar28 = FUN_14477b664(uVar27);
    lVar43 = local_4960;
    *(longlong *)(lVar29 + 8 + lVar31) = lVar28;
    *(longlong *)(lVar29 + 0x10 + lVar31) = plVar39[2];
    *(longlong **)(lVar29 + 0x18 + lVar31) = plVar42;
    *(longlong **)(lVar29 + 0x20 + lVar31) = plVar32;
    if (plVar32 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar32 + 1) = (int)plVar32[1] + 1;
      UNLOCK();
      lVar28 = puVar3[1];
    }
    *(undefined4 *)(puVar3 + 5) = 0xffffffff;
    if (lVar28 == 0) {
      lVar28 = FUN_145cd7f46();
    }
    uVar27 = *puVar3;
    uVar30 = FUN_14477b664(lVar28);
    uVar34 = ((uint)(uVar30 >> 0x14) & 0xffff ^ (uint)(uVar30 >> 4)) * -0x7a143595;
    uVar38 = (uVar34 >> 0xd ^ uVar34) * -0x3d4d51cb;
    uVar38 = uVar38 >> 0x10 ^ uVar38;
    uVar34 = (uint)((ulonglong)uVar27 >> 0x10);
    uVar44 = (uint)uVar27 & 0xffff;
    uVar34 = uVar38 >> 0xd ^
             (((uint)uVar27 << 0x10 | uVar44) + (int)((ulonglong)uVar27 >> 0x20) +
              (uVar34 << 0x13 | uVar34 & 0xffff) + (uVar44 >> 4)) - uVar38;
    uVar44 = uVar34 << 8 ^ (-0x61c88647 - uVar38) - uVar34;
    uVar45 = uVar44 >> 0xd ^ (uVar38 - uVar34) - uVar44;
    uVar34 = uVar45 >> 0xc ^ (uVar34 - uVar44) - uVar45;
    uVar38 = uVar34 << 0x10 ^ (uVar44 - uVar45) - uVar34;
    uVar44 = uVar38 >> 5 ^ (uVar45 - uVar34) - uVar38;
    uVar34 = uVar44 >> 3 ^ (uVar34 - uVar38) - uVar44;
    uVar38 = uVar34 << 10 ^ (uVar38 - uVar44) - uVar34;
    uVar34 = uVar38 >> 0xf ^ uVar44 - (uVar34 + uVar38);
    iVar22 = 1;
    if (*(int *)(lVar43 + 0x330) - *(int *)(lVar43 + 0x35c) == 1) {
      uVar38 = 1;
LAB_143cc3255:
      uVar44 = uVar23;
      if (((int)uVar38 < 1) || (iVar22 <= *(int *)(lVar43 + 0x370))) {
        uVar34 = *(int *)(lVar43 + 0x370) - 1U & uVar34;
        *(uint *)((longlong)puVar3 + 0x2c) = uVar34;
        lVar29 = *(longlong *)(lVar43 + 0x368);
        if (*(longlong *)(lVar43 + 0x368) == 0) {
          lVar29 = lVar43 + 0x360;
        }
        *(undefined4 *)(puVar3 + 5) =
             *(undefined4 *)
              (lVar29 + ((longlong)*(int *)(lVar43 + 0x370) - 1U & (longlong)(int)uVar34) * 4);
        lVar29 = *(longlong *)(lVar43 + 0x368);
        if (*(longlong *)(lVar43 + 0x368) == 0) {
          lVar29 = lVar43 + 0x360;
        }
        *(uint *)(lVar29 + ((longlong)*(int *)(lVar43 + 0x370) - 1U & (longlong)(int)uVar34) * 4) =
             uVar23;
      }
      else {
        *(int *)(lVar43 + 0x370) = iVar22;
        FUN_141870ad2(local_4968);
      }
    }
    else {
      uVar44 = FUN_141870826(local_4968,uVar34,puVar3);
      if (uVar44 == 0xffffffff) {
        uVar38 = *(int *)(lVar43 + 0x330) - *(int *)(lVar43 + 0x35c);
        if (3 < uVar38) {
          uVar30 = (ulonglong)(uVar38 & 0xfffffffe) + 0xf;
          lVar29 = 0x3f;
          if (uVar30 != 0) {
            for (; uVar30 >> lVar29 == 0; lVar29 = lVar29 + -1) {
            }
          }
          iVar22 = 1 << ((byte)lVar29 & 0x1f);
        }
        goto LAB_143cc3255;
      }
      plVar39 = (longlong *)(ulonglong)uVar44;
      puVar5 = (undefined4 *)(*local_4968 + (longlong)(int)uVar44 * 0x30);
      plVar42 = *(longlong **)(*local_4968 + 0x20 + (longlong)(int)uVar44 * 0x30);
      if (plVar42 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar42 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar42)(plVar42);
          LOCK();
          piVar2 = (int *)((longlong)plVar42 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar42 + 0x10))(plVar42);
          }
        }
      }
      uVar48 = *(undefined4 *)puVar3;
      uVar14 = *(undefined4 *)((longlong)puVar3 + 4);
      uVar15 = *(undefined4 *)(puVar3 + 1);
      uVar16 = *(undefined4 *)((longlong)puVar3 + 0xc);
      uVar17 = *(undefined4 *)(puVar3 + 2);
      uVar18 = *(undefined4 *)((longlong)puVar3 + 0x14);
      uVar19 = *(undefined4 *)(puVar3 + 3);
      uVar20 = *(undefined4 *)((longlong)puVar3 + 0x1c);
      *(undefined8 *)(puVar5 + 8) = puVar3[4];
      puVar5[4] = uVar17;
      puVar5[5] = uVar18;
      puVar5[6] = uVar19;
      puVar5[7] = uVar20;
      *puVar5 = uVar48;
      puVar5[1] = uVar14;
      puVar5[2] = uVar15;
      puVar5[3] = uVar16;
      FUN_143cccfc6(local_4968,uVar23);
    }
    plVar42 = (longlong *)(*local_4968 + (longlong)(int)uVar44 * 0x30 + 0x18);
    if (plVar32 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar32 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar32)(plVar32);
        LOCK();
        piVar2 = (int *)((longlong)plVar32 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar32 + 0x10))(plVar32);
        }
      }
    }
    uVar48 = (undefined4)CONCAT71((int7)((ulonglong)plVar39 >> 8),1);
    param_2 = local_4950;
    if (plVar42 != (longlong *)0x0) goto LAB_143cc330f;
  }
  else {
    if (*plVar42 + (longlong)iVar22 * 0x30 == 0) goto LAB_143cc2d37;
    uVar48 = 0;
    plVar42 = (longlong *)(*plVar42 + (longlong)iVar22 * 0x30 + 0x18);
LAB_143cc330f:
    plVar32 = (longlong *)*plVar42;
    uVar23 = FUN_1447addd0(param_2,0x10);
    iVar22 = FUN_143ccd040(plVar32,uVar23,param_2);
    local_4968 = plVar42;
    local_4944 = uVar48;
    if (iVar22 == -1) {
LAB_143cc3343:
      if (*(int *)((longlong)plVar32 + 0x34) == 0) {
        iVar22 = (int)plVar32[1];
        *(int *)(plVar32 + 1) = iVar22 + 1;
        if (*(int *)((longlong)plVar32 + 0xc) == iVar22) {
          FUN_140549c28(plVar32,iVar22);
        }
        iVar41 = (int)plVar32[5];
        if (iVar41 == 0) {
          iVar24 = -1;
        }
        else {
          iVar24 = iVar41 + 0x1e;
          if (-1 < iVar41 + -1) {
            iVar24 = iVar41 + -1;
          }
          iVar24 = iVar24 >> 5;
        }
        plVar42 = plVar32 + 2;
        iVar35 = iVar41 + 1;
        iVar26 = iVar41 + 0x1f;
        if (-1 < iVar41) {
          iVar26 = iVar41;
        }
        if (iVar26 >> 5 == iVar24) {
          *(int *)(plVar32 + 5) = iVar35;
        }
        else {
          if (*(int *)((longlong)plVar32 + 0x2c) <= iVar41) {
            iVar24 = iVar41;
            if (iVar41 + 0x20U < 0xa0) {
              iVar35 = 0x80;
            }
            else {
              uVar34 = iVar41 + 0x20U >> 5;
              local_4950 = (double *)(ulonglong)uVar34;
              if (*(int *)((longlong)plVar32 + 0x2c) + 0x1fU < 0xa0) {
                uVar38 = 4;
                if (4 < uVar34) {
                  uVar38 = uVar34;
                }
              }
              else {
                uVar38 = uVar34 + (uVar34 * 3 >> 3) + 0x10;
              }
              uVar30 = (ulonglong)(uVar38 * 4);
              if (DAT_14c872d28 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                  uVar34 = (uint)(uVar30 + 0xf);
                  if (uVar38 < 0x1ffd) {
                    uVar30 = (ulonglong)
                             (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar34 >> 4]];
                  }
                  else {
                    uVar36 = uVar30 + 0xf & 0xfffffffffffffff0;
                    if (uVar36 < 0x7ff1) {
                      bVar33 = (&DAT_14c841e00)[uVar34 >> 4];
                      uVar40 = 0x32;
                      if (0x32 < bVar33) {
                        uVar40 = (ulonglong)bVar33;
                      }
                      uVar46 = 0x32 - (ulonglong)bVar33;
                      do {
                        uVar30 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar46 & 0xffffffff];
                        if (((&DAT_14c841d90)[uVar46 & 0xffffffff] & 0xf) == 0) goto LAB_143cc3c5e;
                        lVar29 = uVar40 + 1 + uVar46;
                        uVar46 = uVar46 - 1;
                      } while (lVar29 != 0x33);
                    }
                    uVar30 = 0x10;
                    if (0x10 < DAT_14c841df8) {
                      uVar30 = (ulonglong)DAT_14c841df8;
                    }
                    uVar30 = -uVar30 & (uVar36 + uVar30) - 1;
                  }
                }
                else {
                  uVar30 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar30,0);
                  iVar24 = (int)plVar32[5];
                }
              }
LAB_143cc3c5e:
              iVar25 = (int)(uVar30 >> 2);
              iVar35 = -0x20;
              if ((int)local_4950 <= iVar25) {
                iVar35 = iVar25 << 5;
              }
            }
            *(int *)((longlong)plVar32 + 0x2c) = iVar35;
            FUN_1446efbd8(plVar42,iVar24);
            iVar35 = (int)plVar32[5] + 1;
          }
          iVar24 = iVar35 + 0x1f;
          if (-1 < iVar35) {
            iVar24 = iVar35;
          }
          *(int *)(plVar32 + 5) = iVar35;
          if (iVar35 % 0x20 != 0) {
            plVar39 = (longlong *)plVar32[4];
            if ((longlong *)plVar32[4] == (longlong *)0x0) {
              plVar39 = plVar42;
            }
            bVar33 = -(char)(iVar35 % 0x20);
            *(uint *)((longlong)plVar39 + (longlong)(iVar24 >> 5) * 4) =
                 (uint)(*(int *)((longlong)plVar39 + (longlong)(iVar24 >> 5) * 4) << (bVar33 & 0x1f)
                       ) >> (bVar33 & 0x1f);
          }
        }
        lVar29 = (longlong)iVar22;
        if ((longlong *)plVar32[4] != (longlong *)0x0) {
          plVar42 = (longlong *)plVar32[4];
        }
        bVar33 = (byte)iVar41 & 0x1f;
        puVar4 = (uint *)((longlong)plVar42 + (longlong)(iVar26 >> 5) * 4);
        *puVar4 = *puVar4 & (-2 << bVar33 | 0xfffffffeU >> 0x20 - bVar33);
      }
      else {
        iVar22 = (int)plVar32[6];
        lVar29 = (longlong)iVar22;
        iVar41 = *(int *)(*plVar32 + 4 + lVar29 * 0x28);
        *(int *)(plVar32 + 6) = iVar41;
        iVar24 = *(int *)((longlong)plVar32 + 0x34) + -1;
        *(int *)((longlong)plVar32 + 0x34) = iVar24;
        if (iVar24 != 0) {
          *(undefined4 *)(*plVar32 + (longlong)iVar41 * 0x28) = 0xffffffff;
        }
      }
      plVar42 = plVar32 + 2;
      if ((longlong *)plVar32[4] != (longlong *)0x0) {
        plVar42 = (longlong *)plVar32[4];
      }
      iVar41 = iVar22 + 0x1f;
      if (-1 < iVar22) {
        iVar41 = iVar22;
      }
      puVar4 = (uint *)((longlong)plVar42 + (longlong)(iVar41 >> 5) * 4);
      *puVar4 = *puVar4 | 1 << ((byte)iVar22 & 0x1f);
      iVar41 = 1;
      pdVar47 = (double *)(*plVar32 + lVar29 * 0x28);
      dVar6 = param_2[1];
      *pdVar47 = *param_2;
      pdVar47[1] = dVar6;
      pdVar47[2] = 0.0;
      pdVar47[3] = 0.0;
      FUN_1401c6438(0,0);
      *(undefined4 *)(pdVar47 + 4) = 0xffffffff;
      uVar34 = (int)plVar32[1] - *(int *)((longlong)plVar32 + 0x34);
      if (uVar34 == 1) {
LAB_143cc34d5:
        if (((int)uVar34 < 1) || (iVar41 <= (int)plVar32[9])) {
          uVar23 = (int)plVar32[9] - 1U & uVar23;
          *(uint *)((longlong)pdVar47 + 0x24) = uVar23;
          plVar42 = (longlong *)plVar32[8];
          if ((longlong *)plVar32[8] == (longlong *)0x0) {
            plVar42 = plVar32 + 7;
          }
          *(undefined4 *)(pdVar47 + 4) =
               *(undefined4 *)
                ((longlong)plVar42 + ((longlong)(int)plVar32[9] - 1U & (longlong)(int)uVar23) * 4);
          plVar42 = (longlong *)plVar32[8];
          if ((longlong *)plVar32[8] == (longlong *)0x0) {
            plVar42 = plVar32 + 7;
          }
          *(int *)((longlong)plVar42 + ((longlong)(int)plVar32[9] - 1U & (longlong)(int)uVar23) * 4)
               = iVar22;
        }
        else {
          *(int *)(plVar32 + 9) = iVar41;
          FUN_1401c6486(plVar32);
        }
      }
      else {
        iVar24 = FUN_143ccd040(plVar32,uVar23,pdVar47);
        if (iVar24 == -1) {
          if (3 < uVar34) {
            uVar30 = (ulonglong)(uVar34 & 0xfffffffe) + 0xf;
            lVar29 = 0x3f;
            if (uVar30 != 0) {
              for (; uVar30 >> lVar29 == 0; lVar29 = lVar29 + -1) {
              }
            }
            iVar41 = 1 << ((byte)lVar29 & 0x1f);
          }
          goto LAB_143cc34d5;
        }
        puVar5 = (undefined4 *)(*plVar32 + (longlong)iVar24 * 0x28);
        FUN_1401c6438(*(undefined8 *)(puVar5 + 4),puVar5[6]);
        if (*(longlong *)(puVar5 + 4) != 0) {
          FUN_1400020a8();
        }
        uVar48 = *(undefined4 *)pdVar47;
        uVar14 = *(undefined4 *)((longlong)pdVar47 + 4);
        uVar15 = *(undefined4 *)(pdVar47 + 1);
        uVar16 = *(undefined4 *)((longlong)pdVar47 + 0xc);
        uVar17 = *(undefined4 *)((longlong)pdVar47 + 0x14);
        uVar18 = *(undefined4 *)(pdVar47 + 3);
        uVar19 = *(undefined4 *)((longlong)pdVar47 + 0x1c);
        puVar5[4] = *(undefined4 *)(pdVar47 + 2);
        puVar5[5] = uVar17;
        puVar5[6] = uVar18;
        puVar5[7] = uVar19;
        *puVar5 = uVar48;
        puVar5[1] = uVar14;
        puVar5[2] = uVar15;
        puVar5[3] = uVar16;
        FUN_143ccd0b0(plVar32,iVar22);
      }
      lVar29 = *plVar32 + (longlong)iVar22 * 0x28;
    }
    else {
      if (*plVar32 + (longlong)iVar22 * 0x28 == 0) goto LAB_143cc3343;
      lVar29 = *plVar32 + (longlong)iVar22 * 0x28;
    }
    if ((longlong)(int)local_4958[4] != 0) {
      pdVar47 = (double *)local_4958[3];
      local_4950 = pdVar47 + (longlong)(int)local_4958[4] * 3;
      lVar28 = local_4960 + 0x390;
      do {
        dVar52 = *pdVar47 * param_4[8];
        dVar53 = pdVar47[1] * param_4[9];
        dVar8 = pdVar47[2] * param_4[10];
        dVar11 = *param_4;
        dVar12 = param_4[1];
        dVar13 = param_4[2];
        dVar6 = param_4[3];
        dVar54 = dVar53 * dVar11 - dVar52 * dVar12;
        dVar55 = dVar8 * dVar12 - dVar53 * dVar13;
        dVar56 = dVar52 * dVar13 - dVar11 * dVar8;
        dVar55 = dVar55 + dVar55;
        dVar56 = dVar56 + dVar56;
        dVar54 = dVar54 + dVar54;
        dVar7 = param_4[4];
        dVar10 = (dVar13 * dVar55 - dVar11 * dVar54) + param_4[3] * dVar56 + dVar53 + param_4[5];
        dVar53 = param_4[6];
        plVar32 = (longlong *)FUN_14001cc68(0x68);
        plVar32[1] = (longlong)&DAT_100000001;
        *plVar32 = (longlong)&PTR_FUN_14b3f00f0;
        lVar31 = *local_4968;
        plVar42 = (longlong *)local_4968[1];
        if (plVar42 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar42 + 1) = (int)plVar42[1] + 1;
          UNLOCK();
        }
        plVar32[2] = 0;
        plVar32[3] = -1;
        plVar32[4] = 0;
        plVar32[5] = -1;
        *(undefined1 *)(plVar32 + 6) = 0;
        *(undefined4 *)((longlong)plVar32 + 0x34) = 0;
        *(undefined1 *)(plVar32 + 7) = 0;
        auVar9._8_4_ = SUB84(dVar10,0);
        auVar9._0_8_ = (dVar54 * dVar12 - dVar56 * dVar13) + dVar6 * dVar55 + dVar52 + dVar7;
        auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        *(undefined1 (*) [16])(plVar32 + 8) = auVar9;
        plVar32[10] = (longlong)
                      (dVar54 * dVar6 + dVar8 + (dVar56 * dVar11 - dVar55 * dVar12) + dVar53);
        plVar32[0xb] = lVar31;
        plVar32[0xc] = (longlong)plVar42;
        if (plVar42 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar42 + 1) = (int)plVar42[1] + 1;
          UNLOCK();
          LOCK();
          plVar39 = plVar42 + 1;
          *(int *)plVar39 = (int)*plVar39 + -1;
          UNLOCK();
          if ((int)*plVar39 == 0) {
            (**(code **)*plVar42)(plVar42);
            LOCK();
            piVar2 = (int *)((longlong)plVar42 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar42 + 0x10))(plVar42);
            }
          }
        }
        iVar22 = *(int *)(lVar29 + 0x18);
        uVar23 = iVar22 + 1;
        *(uint *)(lVar29 + 0x18) = uVar23;
        if (*(uint *)(lVar29 + 0x1c) < uVar23) {
          FUN_141870e1e((longlong *)(lVar29 + 0x10));
        }
        local_4900 = plVar32 + 2;
        lVar31 = *(longlong *)(lVar29 + 0x10);
        lVar43 = (longlong)iVar22 * 0x10;
        *(longlong **)(lVar31 + lVar43) = local_4900;
        *(longlong **)(lVar31 + 8 + lVar43) = plVar32;
        if (plVar32 == (longlong *)0x0) {
          LOCK();
          *(int *)(local_4960 + 0x378) = *(int *)(local_4960 + 0x378) + 1;
          UNLOCK();
          local_48f8 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar32 + 1) = (int)plVar32[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(local_4960 + 0x378) = *(int *)(local_4960 + 0x378) + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar32 + 1) = (int)plVar32[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar32 + 1) = (int)plVar32[1] + 1;
          UNLOCK();
          local_48f8 = plVar32;
        }
        fVar51 = (float)FUN_143cbef20(plVar32[0xb]);
        local_4920 = (double)fVar51;
        local_4938 = (undefined4)local_4900[6];
        uStack_4934 = *(undefined4 *)((longlong)local_4900 + 0x34);
        uStack_4930 = (undefined4)local_4900[7];
        uStack_492c = *(undefined4 *)((longlong)local_4900 + 0x3c);
        local_4928 = local_4900[8];
        uStack_4918 = local_4920;
        local_4910 = local_4920;
        local_4908 = local_4920;
        if (plVar32 != (longlong *)0x0) {
          LOCK();
          plVar42 = plVar32 + 1;
          *(int *)plVar42 = (int)*plVar42 + -1;
          UNLOCK();
          if ((int)*plVar42 == 0) {
            (**(code **)*plVar32)(plVar32);
            LOCK();
            piVar2 = (int *)((longlong)plVar32 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar32 + 0x10))(plVar32);
            }
          }
        }
        local_a0 = 0;
        local_98 = 0x10000000000;
        local_48e8 = CONCAT44(uStack_4934,local_4938);
        uStack_48e0 = CONCAT44(uStack_492c,uStack_4930);
        local_48d8 = local_4928;
        local_48c8 = (undefined4)local_4920;
        uStack_48c4 = local_4920._4_4_;
        uStack_48c0 = (undefined4)uStack_4918;
        uStack_48bc = uStack_4918._4_4_;
        local_48b8 = local_4910;
        local_48b0 = 0;
        local_48d0 = 0;
        local_4978 = &local_4938;
        local_4970 = local_48a0;
        FUN_14136691a(lVar28,0,lVar28,&local_48e8);
        FUN_1402b7462(local_48a0);
        plVar42 = local_48f8;
        if (local_48f8 != (longlong *)0x0) {
          LOCK();
          plVar39 = local_48f8 + 1;
          *(int *)plVar39 = (int)*plVar39 + -1;
          UNLOCK();
          if ((int)*plVar39 == 0) {
            (**(code **)*local_48f8)(local_48f8);
            LOCK();
            piVar2 = (int *)((longlong)plVar42 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar42 + 0x10))(plVar42);
            }
          }
        }
        if (plVar32 != (longlong *)0x0) {
          LOCK();
          plVar42 = plVar32 + 1;
          *(int *)plVar42 = (int)*plVar42 + -1;
          UNLOCK();
          if ((int)*plVar42 == 0) {
            (**(code **)*plVar32)(plVar32);
            LOCK();
            piVar2 = (int *)((longlong)plVar32 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar32 + 0x10))(plVar32);
            }
          }
        }
        pdVar47 = pdVar47 + 3;
      } while (pdVar47 != local_4950);
    }
    lVar29 = local_4960;
    if ((char)local_4944 != '\0') {
      _Dst = (void *)FUN_141870f2c(local_4960 + 0x140);
      memset(_Dst,0,200);
      plVar42 = local_4958;
      *(undefined8 *)((longlong)_Dst + 0x2c) = 0xffffffff00000080;
      *(undefined8 *)((longlong)_Dst + 0x50) = 0;
      *(undefined8 *)((longlong)_Dst + 0x58) = 0;
      *(undefined8 *)((longlong)_Dst + 0x7c) = 0xffffffff00000080;
      *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
      *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
      *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
      if (_Dst != (void *)0x0) {
        *(longlong *)((longlong)_Dst + 0xa8) = *local_4958;
        if (local_4958[1] != 0) {
          *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
        }
        uVar27 = FUN_14477b664();
        uVar27 = FUN_14477b664(uVar27);
        *(undefined8 *)((longlong)_Dst + 0xb0) = uVar27;
        *(longlong *)((longlong)_Dst + 0xb8) = plVar42[2];
        FUN_141871072(lVar29 + 0x1c0,_Dst);
      }
    }
  }
  LeaveCriticalSection(local_4940);
LAB_143cc39bb:
  if ((local_90 ^ (ulonglong)auStack_4998) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cc3fc6 FUN_143cc3fc6 body=1772 status=ok
// SIG undefined FUN_143cc3fc6(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143cc3fc6(longlong param_1,int *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  void *_Dst;
  undefined8 uVar8;
  uint uVar9;
  longlong *plVar10;
  int *piVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 auStack_48c8 [40];
  longlong local_48a0;
  longlong *local_4898;
  longlong local_4890;
  longlong local_4888;
  int *local_4880;
  LPCRITICAL_SECTION local_4878;
  longlong *local_4870;
  longlong local_4868;
  longlong *local_4860;
  undefined1 local_4858 [18432];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_48c8;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x300);
  EnterCriticalSection(lpCriticalSection);
  lVar13 = param_3[1];
  if (lVar13 == 0) {
    lVar13 = FUN_145cd7f46();
  }
  lVar16 = *param_3;
  uVar6 = FUN_14477b664(lVar13);
  uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar9 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar9 = uVar9 >> 0x10 ^ uVar9;
  uVar3 = (uint)((ulonglong)lVar16 >> 0x10);
  uVar12 = (uint)lVar16 & 0xffff;
  uVar3 = uVar9 >> 0xd ^
          (((uint)lVar16 << 0x10 | uVar12) + (int)((ulonglong)lVar16 >> 0x20) +
           (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar12 >> 4)) - uVar9;
  uVar12 = uVar3 << 8 ^ (-0x61c88647 - uVar9) - uVar3;
  uVar17 = uVar12 >> 0xd ^ (uVar9 - uVar3) - uVar12;
  uVar3 = uVar17 >> 0xc ^ (uVar3 - uVar12) - uVar17;
  uVar9 = uVar3 << 0x10 ^ (uVar12 - uVar17) - uVar3;
  uVar17 = uVar9 >> 5 ^ (uVar17 - uVar3) - uVar9;
  uVar12 = uVar17 >> 3 ^ (uVar3 - uVar9) - uVar17;
  uVar3 = uVar12 << 10 ^ (uVar9 - uVar17) - uVar12;
  iVar4 = FUN_141870826((longlong *)(param_1 + 0x328),uVar3 >> 0xf ^ uVar17 - (uVar12 + uVar3),
                        param_3);
  if ((iVar4 != -1) &&
     (lVar13 = (longlong)iVar4 * 0x30 + *(longlong *)(param_1 + 0x328),
     plVar14 = (longlong *)(lVar13 + 0x18), plVar14 != (longlong *)0x0 && lVar13 != 0)) {
    plVar10 = (longlong *)*plVar14;
    local_4898 = plVar14;
    local_4870 = param_3;
    uVar5 = FUN_1447addd0(param_2,0x10);
    iVar4 = FUN_143ccd040(plVar10,uVar5,param_2);
    if (iVar4 != -1) {
      lVar13 = *plVar10;
      if ((lVar13 + (longlong)iVar4 * 0x28 + 0x10U & 0xffffffffffffffef) != 0) {
        lVar13 = lVar13 + (longlong)iVar4 * 0x28;
        if ((longlong)*(int *)(lVar13 + 0x18) == 0) {
          iVar4 = 0;
        }
        else {
          plVar14 = *(longlong **)(lVar13 + 0x10);
          local_4860 = plVar14 + (longlong)*(int *)(lVar13 + 0x18) * 2;
          local_4868 = param_1 + 0x260;
          local_4890 = param_1 + 0x390;
          local_48a0 = param_1;
          local_4888 = lVar13;
          local_4880 = param_2;
          local_4878 = lpCriticalSection;
          do {
            lVar16 = local_48a0;
            FUN_144a89f12(local_4868,local_4858,plVar14);
            uVar6 = *(ulonglong *)(*plVar14 + 0x18);
            lVar15 = (longlong)(int)uVar6;
            lVar19 = lVar15 * 0x4810;
            lVar13 = *(longlong *)(*(longlong *)(lVar16 + 0x410) + 0x4800 + lVar19);
            lVar16 = *(longlong *)(lVar16 + 0x410) + lVar19;
            if (lVar13 == 0) {
              lVar13 = lVar16;
            }
            lVar7 = (longlong)uVar6 >> 0x20;
            plVar10 = *(longlong **)(lVar13 + 0x40 + lVar7 * 0x48);
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar10 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
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
            iVar4 = *(int *)(lVar16 + 0x4808);
            uVar3 = (uint)(uVar6 >> 0x20);
            iVar18 = ~uVar3 + iVar4;
            if (iVar18 != 0) {
              if (0 < iVar18) {
                iVar18 = 1;
              }
              memmove((void *)(lVar13 + lVar7 * 0x48),
                      (void *)(lVar13 + (longlong)(iVar4 - iVar18) * 0x48),(longlong)iVar18 * 0x48);
              iVar4 = *(int *)(lVar16 + 0x4808);
            }
            *(int *)(lVar16 + 0x4808) = iVar4 + -1;
            if ((int)uVar3 < *(int *)(*(longlong *)(local_48a0 + 0x410) + 0x4808 + lVar19)) {
              lVar19 = *(longlong *)(local_48a0 + 0x410) + lVar19;
              lVar13 = *(longlong *)(lVar19 + 0x4800);
              if (lVar13 != 0) {
                lVar19 = lVar13;
              }
              *(ulonglong *)(*(longlong *)(lVar19 + 0x38 + lVar7 * 0x48) + 0x18) = uVar6;
            }
            piVar2 = (int *)(*(longlong *)(local_48a0 + 0x3f0) + 4 + lVar15 * 8);
            *piVar2 = *piVar2 + -1;
            lVar13 = *(longlong *)(local_48a0 + 0x3f0);
            uVar20 = 0xffffffff;
            if (*(uint *)(lVar13 + 4 + lVar15 * 8) < 7) {
              uVar20 = uVar6 & 0xffffffff;
            }
            uVar3 = (uint)uVar20;
            if ((int)uVar6 != 0) {
              do {
                uVar3 = *(uint *)(*(longlong *)(local_48a0 + 0x400) +
                                 (ulonglong)((int)uVar6 - 1U >> 3) * 4);
                uVar6 = (ulonglong)(int)uVar3;
                piVar2 = (int *)(lVar13 + 4 + uVar6 * 8);
                *piVar2 = *piVar2 + -1;
                lVar13 = *(longlong *)(local_48a0 + 0x3f0);
                if (*(uint *)(lVar13 + 4 + uVar6 * 8) < 7) {
                  uVar20 = (ulonglong)uVar3;
                }
                uVar3 = (uint)uVar20;
              } while (uVar6 != 0);
            }
            if ((uVar3 != 0xffffffff) &&
               (lVar16 = (longlong)(int)uVar3, *(int *)(lVar13 + lVar16 * 8) != -1)) {
              lVar19 = lVar16 * 0x4810;
              uVar9 = *(uint *)(lVar13 + 4 + lVar16 * 8);
              if (*(int *)(*(longlong *)(local_48a0 + 0x410) + 0x4808 + lVar19) < (int)uVar9) {
                local_58 = 0;
                local_50 = 0x10000000000;
                if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1456afac4(uVar9);
                }
                if (0x100 < uVar9) {
                  FUN_1487f4d1c(local_4858);
                }
                FUN_1487f4e0a(local_4890,uVar3);
                lVar13 = local_48a0;
                FUN_1487f4ada(*(longlong *)(local_48a0 + 0x410) + lVar19);
                lVar13 = *(longlong *)(lVar13 + 0x410);
                if (0 < *(int *)(lVar13 + 0x4808 + lVar19)) {
                  uVar6 = (ulonglong)uVar3;
                  lVar16 = 0x38;
                  lVar15 = 0;
                  do {
                    lVar7 = *(longlong *)(lVar13 + lVar19 + 0x4800);
                    if (lVar7 == 0) {
                      lVar7 = lVar13 + lVar19;
                    }
                    *(ulonglong *)(*(longlong *)(lVar7 + lVar16) + 0x18) = uVar6;
                    lVar15 = lVar15 + 1;
                    lVar13 = *(longlong *)(local_48a0 + 0x410);
                    lVar16 = lVar16 + 0x48;
                    uVar6 = uVar6 + 0x100000000;
                  } while (lVar15 < *(int *)(lVar13 + 0x4808 + lVar19));
                }
                FUN_1402b7462(local_4858);
              }
            }
            plVar14 = plVar14 + 2;
          } while (plVar14 != local_4860);
          iVar4 = *(int *)(local_4888 + 0x18);
          param_1 = local_48a0;
          lpCriticalSection = local_4878;
          param_2 = local_4880;
        }
        LOCK();
        *(int *)(param_1 + 0x378) = *(int *)(param_1 + 0x378) - iVar4;
        UNLOCK();
        plVar14 = (longlong *)*local_4898;
        if ((int)plVar14[1] != *(int *)((longlong)plVar14 + 0x34)) {
          iVar4 = FUN_1447addd0(param_2,0x10);
          plVar10 = plVar14 + 7;
          if ((longlong *)plVar14[8] != (longlong *)0x0) {
            plVar10 = (longlong *)plVar14[8];
          }
          iVar4 = *(int *)((longlong)plVar10 +
                          ((longlong)iVar4 & (longlong)(int)plVar14[9] - 1U) * 4);
          if (iVar4 != -1) {
            lVar13 = *plVar14;
LAB_143cc44c7:
            lVar16 = (longlong)iVar4;
            piVar2 = (int *)(lVar13 + lVar16 * 0x28);
            if ((((*piVar2 != *param_2) || (*(int *)(lVar13 + 4 + lVar16 * 0x28) != param_2[1])) ||
                (*(int *)(lVar13 + 8 + lVar16 * 0x28) != param_2[2])) ||
               (*(int *)(lVar13 + 0xc + lVar16 * 0x28) != param_2[3])) goto LAB_143cc44ec;
            iVar18 = *(int *)((longlong)plVar10 + (longlong)piVar2[9] * 4);
            if (iVar18 == iVar4) {
              piVar11 = (int *)((longlong)plVar10 + (longlong)piVar2[9] * 4);
            }
            else {
              do {
                piVar11 = (int *)(lVar13 + (longlong)iVar18 * 0x28 + 0x20);
                iVar18 = *piVar11;
              } while (iVar18 != iVar4);
            }
            *piVar11 = piVar2[8];
            lVar13 = *plVar14;
            FUN_1401c6438(*(undefined8 *)(lVar13 + 0x10 + lVar16 * 0x28),
                          *(undefined4 *)(lVar13 + 0x18 + lVar16 * 0x28));
            if (*(longlong *)(lVar13 + 0x10 + lVar16 * 0x28) != 0) {
              FUN_1400020a8();
            }
            FUN_143ccd0b0(plVar14);
          }
        }
      }
    }
LAB_143cc4540:
    _Dst = (void *)FUN_141870f2c(param_1 + 0x140);
    memset(_Dst,0,200);
    plVar14 = local_4870;
    *(undefined8 *)((longlong)_Dst + 0x2c) = 0xffffffff00000080;
    *(undefined8 *)((longlong)_Dst + 0x50) = 0;
    *(undefined8 *)((longlong)_Dst + 0x58) = 0;
    *(undefined8 *)((longlong)_Dst + 0x7c) = 0xffffffff00000080;
    *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
    *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
    *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
    if (_Dst != (void *)0x0) {
      iVar18 = *(int *)(*local_4898 + 8);
      iVar4 = *(int *)(*local_4898 + 0x34);
      *(undefined4 *)((longlong)_Dst + 0xc0) = 2;
      lVar13 = *local_4870;
      if (lVar13 != 0) {
        *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
      }
      *(longlong *)((longlong)_Dst + 0xa8) = lVar13;
      if (local_4870[1] != 0) {
        *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
      }
      uVar8 = FUN_14477b664();
      uVar8 = FUN_14477b664(uVar8);
      *(undefined8 *)((longlong)_Dst + 0xb0) = uVar8;
      *(longlong *)((longlong)_Dst + 0xb8) = plVar14[2];
      FUN_144af8bc2((longlong)_Dst + 0x50,param_1 + 0x260);
      *(bool *)((longlong)_Dst + 0xa0) = iVar18 == iVar4;
      FUN_141871072(param_1 + 0x1c0,_Dst);
    }
    if (*(int *)(param_1 + 0x268) != *(int *)(param_1 + 0x294)) {
      FUN_1401c70ce(param_1 + 0x260);
      FUN_1448c5284(param_1 + 0x260);
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  if ((local_48 ^ (ulonglong)auStack_48c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143cc44ec:
  iVar4 = piVar2[8];
  if (iVar4 == -1) goto LAB_143cc4540;
  goto LAB_143cc44c7;
}



// FUNCTION 143cc46b4 FUN_143cc46b4 body=2993 status=ok
// SIG undefined FUN_143cc46b4(void)

void FUN_143cc46b4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  void *pvVar3;
  int iVar4;
  void *pvVar5;
  uint *puVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  uint *puVar19;
  uint uVar20;
  longlong *plVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined1 auStack_158 [32];
  longlong *local_138;
  longlong local_128;
  longlong *local_120;
  void *local_118;
  longlong *local_110;
  int local_104;
  ulonglong local_100;
  longlong *local_f8;
  uint *local_f0;
  longlong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  longlong local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  uint local_90;
  uint uStack_8c;
  int local_88;
  int iStack_84;
  undefined8 local_80;
  longlong local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((((*(int *)(param_1 + 0x2c) != 0) && (uVar20 = *(uint *)(param_1 + 0x28), -1 < (int)uVar20))
       && ((int)uVar20 < DAT_14c9647dc)) &&
      ((lVar22 = (ulonglong)((uVar20 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8), lVar22 != 0 &&
       (*(int *)(lVar22 + 0x10) == *(int *)(param_1 + 0x2c))))) &&
     (((*(uint *)(lVar22 + 8) & 0x10200000) == 0 && (*(longlong *)(param_1 + 0x380) != 0)))) {
    local_120 = (longlong *)(param_1 + 0x260);
    local_110 = (longlong *)(param_1 + 0x2b0);
    plVar16 = local_110;
    plVar21 = &local_b8;
    for (lVar22 = 10; lVar22 != 0; lVar22 = lVar22 + -1) {
      *plVar21 = *plVar16;
      plVar16 = plVar16 + 1;
      plVar21 = plVar21 + 1;
    }
    plVar16 = local_120;
    plVar21 = local_110;
    for (lVar22 = 10; lVar22 != 0; lVar22 = lVar22 + -1) {
      *plVar21 = *plVar16;
      plVar16 = plVar16 + 1;
      plVar21 = plVar21 + 1;
    }
    plVar16 = &local_b8;
    plVar21 = local_120;
    for (lVar22 = 10; lVar22 != 0; lVar22 = lVar22 + -1) {
      *plVar21 = *plVar16;
      plVar16 = plVar16 + 1;
      plVar21 = plVar21 + 1;
    }
    plVar16 = (longlong *)param_2[0xc];
    if ((longlong *)param_2[0xc] == (longlong *)0x0) {
      plVar16 = param_2;
    }
    local_128 = param_1;
    if ((longlong)(int)param_2[0xd] != 0) {
      plVar21 = plVar16 + (longlong)(int)param_2[0xd] * 3;
      do {
        local_b8 = *plVar16;
        uStack_b0 = plVar16[1];
        local_a8 = plVar16[2];
        uStack_a0 = 0;
        local_98 = (undefined8 *)&DAT_3ff0000000000000;
        local_90 = 0;
        uStack_8c = 0x3ff00000;
        local_88 = 0;
        iStack_84 = 0x3ff00000;
        local_80 = 0;
        local_c0 = plVar16[2];
        local_d0 = (undefined4)*plVar16;
        uStack_cc = *(undefined4 *)((longlong)plVar16 + 4);
        uStack_c8 = (undefined4)plVar16[1];
        uStack_c4 = *(undefined4 *)((longlong)plVar16 + 0xc);
        local_138 = &local_d8;
        local_d8 = local_128;
        FUN_143ccd122(param_1 + 0x390,0,param_1 + 0x390,&local_b8);
        plVar16 = plVar16 + 3;
      } while (plVar16 != plVar21);
    }
    lVar22 = local_128;
    pvVar5 = (void *)FUN_141870f2c(local_128 + 0x140);
    memset(pvVar5,0,200);
    *(undefined8 *)((longlong)pvVar5 + 0x2c) = 0xffffffff00000080;
    *(undefined8 *)((longlong)pvVar5 + 0x50) = 0;
    *(undefined8 *)((longlong)pvVar5 + 0x58) = 0;
    *(undefined8 *)((longlong)pvVar5 + 0x7c) = 0xffffffff00000080;
    *(undefined8 *)((longlong)pvVar5 + 0xa8) = 0;
    *(undefined8 *)((longlong)pvVar5 + 0xb0) = 0;
    *(undefined8 *)((longlong)pvVar5 + 0xb8) = 0;
    if (pvVar5 != (void *)0x0) {
      *(undefined4 *)((longlong)pvVar5 + 0xc0) = 1;
      FUN_144af8bc2(pvVar5,local_110);
      local_98 = (undefined8 *)0x0;
      local_90 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      uStack_8c = 0x80;
      local_88 = -1;
      iStack_84 = 0;
      local_78 = 0;
      local_70 = 0;
      uVar20 = *(int *)(lVar22 + 0x268) - *(int *)(lVar22 + 0x294);
      if (uVar20 != 0) {
        if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456acd4b((longlong)(int)uVar20);
        }
        FUN_144727cd0(&local_b8);
        iVar4 = (int)uStack_b0;
        lVar22 = (longlong)(int)uStack_b0;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,(int)uStack_b0 + uVar20);
        if ((uint)(uStack_b0._4_4_ - iVar4) < uVar20) {
          FUN_14482b872(&local_b8);
        }
        if (iVar4 < (int)uVar20) {
          piVar12 = (int *)(local_b8 + (ulonglong)uVar20 * 0x18 + -0x14);
          uVar18 = (ulonglong)uVar20;
          do {
            uVar25 = uVar18 - 1;
            if (iStack_84 == 0) {
              iVar4 = (int)uVar18 + -1;
            }
            else {
              *(int *)(local_b8 + (longlong)local_88 * 0x18) = (int)uVar18 + -1;
              iVar4 = (int)uVar25;
            }
            piVar12[-1] = -1;
            iVar15 = -1;
            if (0 < iStack_84) {
              iVar15 = local_88;
            }
            *piVar12 = iVar15;
            iStack_84 = iStack_84 + 1;
            piVar12 = piVar12 + -6;
            uVar18 = uVar25;
            local_88 = iVar4;
          } while (lVar22 < (longlong)uVar25);
        }
        uVar23 = uVar20 + 0x1f >> 5;
        puVar17 = local_98;
        local_90 = uVar20;
        if (uStack_8c + 0x1f >> 5 < uVar23) {
          puVar17 = (undefined8 *)0x0;
          if (local_98 != (undefined8 *)0x0 || 0x80 < uVar20) {
            if (0x80 < uVar20) {
              puVar17 = (undefined8 *)(ulonglong)uVar23;
            }
            FUN_1446efa72(&local_98,0,puVar17,4);
            puVar17 = local_98;
          }
          uStack_8c = uVar20 + 0x1f & 0xffffffe0;
        }
        if (puVar17 == (undefined8 *)0x0) {
          puVar17 = &local_a8;
        }
        if (uVar20 < 0x101) {
          uVar23 = uVar23 + (uVar23 == 0);
        }
        memset(puVar17,0,(ulonglong)(uVar23 << 2));
        uVar23 = local_90 + 0x1f;
        if (-1 < (int)local_90) {
          uVar23 = local_90;
        }
        if ((int)local_90 % 0x20 != 0) {
          puVar17 = &local_a8;
          if (local_98 != (undefined8 *)0x0) {
            puVar17 = local_98;
          }
          bVar7 = -(char)((int)local_90 % 0x20);
          *(uint *)((longlong)puVar17 + (longlong)((int)uVar23 >> 5) * 4) =
               (uint)(*(int *)((longlong)puVar17 + (longlong)((int)uVar23 >> 5) * 4) <<
                     (bVar7 & 0x1f)) >> (bVar7 & 0x1f);
        }
        if (uVar20 < 4) {
          iVar4 = 1;
        }
        else {
          uVar20 = (uVar20 | 1) + 0xe;
          iVar4 = 0x1f;
          if (uVar20 != 0) {
            for (; uVar20 >> iVar4 == 0; iVar4 = iVar4 + -1) {
            }
          }
          iVar4 = 1 << ((byte)iVar4 & 0x1f);
        }
        if ((local_70 == 0) || (lVar22 = local_128, local_70 < iVar4)) {
          local_70 = iVar4;
          FUN_1414d6c70();
          lVar22 = local_128;
        }
      }
      local_f8 = (longlong *)((longlong)pvVar5 + 0x50);
      puVar19 = (uint *)(lVar22 + 0x270);
      iVar4 = *(int *)(lVar22 + 0x288);
      local_118 = pvVar5;
      if (iVar4 == 0) {
        uVar25 = 1;
        uVar18 = 0;
        iVar8 = 0;
        iVar15 = 0;
      }
      else {
        puVar6 = *(uint **)(lVar22 + 0x280);
        if (*(uint **)(lVar22 + 0x280) == (uint *)0x0) {
          puVar6 = puVar19;
        }
        uVar20 = *puVar6;
        if (uVar20 == 0) {
          iVar15 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar15 = iVar4 + -1;
          }
          uVar18 = 0;
          uVar25 = (ulonglong)(uint)(iVar15 >> 5);
          if (iVar15 >> 5 < 1) {
            uVar25 = uVar18;
          }
          iVar15 = 0;
          do {
            if (uVar25 == uVar18) goto LAB_143cc4ebd;
            iVar15 = iVar15 + 0x20;
            uVar20 = puVar6[uVar18 + 1];
            uVar18 = uVar18 + 1;
          } while (uVar20 == 0);
        }
        else {
          uVar18 = 0;
          iVar15 = 0;
        }
        uVar25 = (ulonglong)(-uVar20 & uVar20);
        uVar24 = uVar25 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar8 = (iVar15 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar8) {
          iVar8 = iVar4;
        }
      }
      if (iVar8 < iVar4) {
        local_e8 = lVar22 + 0x2e8;
        uVar20 = 0xffffffff;
        plVar16 = local_120;
        local_f0 = puVar19;
        do {
          lVar13 = (longlong)iVar8;
          uVar24 = *(ulonglong *)(*plVar16 + lVar13 * 0x18);
          plVar21 = *(longlong **)(*plVar16 + 8 + lVar13 * 0x18);
          local_104 = iVar15;
          local_e0 = uVar18;
          if (plVar21 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
            UNLOCK();
            LOCK();
            plVar2 = plVar21 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar21)(plVar21);
              LOCK();
              piVar12 = (int *)((longlong)plVar21 + 0xc);
              *piVar12 = *piVar12 + -1;
              UNLOCK();
              lVar22 = local_128;
              plVar16 = local_120;
              if (*piVar12 == 0) {
                (**(code **)(*plVar21 + 0x10))(plVar21);
                lVar22 = local_128;
                plVar16 = local_120;
              }
            }
          }
          if (*(int *)(lVar22 + 0x2b8) != *(int *)(lVar22 + 0x2e4)) {
            uVar23 = ((uint)(uVar24 >> 0x14) & 0xffff ^ (uint)(uVar24 >> 4)) * -0x7a143595;
            uVar23 = (uVar23 >> 0xd ^ uVar23) * -0x3d4d51cb;
            lVar14 = *(longlong *)(lVar22 + 0x2f0);
            if (*(longlong *)(lVar22 + 0x2f0) == 0) {
              lVar14 = local_e8;
            }
            iVar4 = *(int *)(lVar14 + (ulonglong)
                                      (*(int *)(lVar22 + 0x2f8) - 1U & (uVar23 >> 0x10 ^ uVar23)) *
                                      4);
            while (iVar4 != -1) {
              if (plVar21 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
                UNLOCK();
              }
              lVar14 = (longlong)iVar4;
              uVar18 = *(ulonglong *)(*local_110 + lVar14 * 0x18);
              plVar2 = *(longlong **)(*local_110 + 8 + lVar14 * 0x18);
              if (plVar2 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
                UNLOCK();
                LOCK();
                plVar1 = plVar2 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  local_100 = uVar18;
                  (**(code **)*plVar2)(plVar2);
                  LOCK();
                  piVar12 = (int *)((longlong)plVar2 + 0xc);
                  *piVar12 = *piVar12 + -1;
                  UNLOCK();
                  uVar18 = local_100;
                  lVar22 = local_128;
                  plVar16 = local_120;
                  if (*piVar12 == 0) {
                    (**(code **)(*plVar2 + 0x10))(plVar2);
                    uVar18 = local_100;
                    lVar22 = local_128;
                    plVar16 = local_120;
                  }
                }
              }
              if (plVar21 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar21 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*plVar21)(plVar21);
                  LOCK();
                  piVar12 = (int *)((longlong)plVar21 + 0xc);
                  *piVar12 = *piVar12 + -1;
                  UNLOCK();
                  lVar22 = local_128;
                  plVar16 = local_120;
                  if (*piVar12 == 0) {
                    (**(code **)(*plVar21 + 0x10))(plVar21);
                    lVar22 = local_128;
                    plVar16 = local_120;
                  }
                }
              }
              puVar19 = local_f0;
              if (uVar18 == uVar24) goto LAB_143cc4d54;
              iVar4 = *(int *)(*local_110 + 0x10 + lVar14 * 0x18);
            }
          }
          iVar4 = -1;
LAB_143cc4d54:
          if (plVar21 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar21 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar21)(plVar21);
              LOCK();
              piVar12 = (int *)((longlong)plVar21 + 0xc);
              *piVar12 = *piVar12 + -1;
              UNLOCK();
              lVar22 = local_128;
              plVar16 = local_120;
              if (*piVar12 == 0) {
                (**(code **)(*plVar21 + 0x10))(plVar21);
                lVar22 = local_128;
                plVar16 = local_120;
              }
            }
          }
          uVar18 = local_e0;
          iVar15 = local_104;
          if (iVar4 == -1) {
            FUN_144a89f12(&local_b8,&local_d8,lVar13 * 0x18 + *plVar16);
            lVar22 = local_128;
            plVar16 = local_120;
          }
          uVar20 = uVar20 & ~(uint)uVar25;
          puVar6 = *(uint **)(lVar22 + 0x280);
          if (*(uint **)(lVar22 + 0x280) == (uint *)0x0) {
            puVar6 = puVar19;
          }
          iVar4 = *(int *)(lVar22 + 0x288);
          iVar8 = (int)uVar18;
          lVar13 = (longlong)iVar8;
          uVar23 = puVar6[lVar13] & uVar20;
          if (uVar23 == 0) {
            iVar9 = iVar4 + 0x1e;
            if (-1 < iVar4 + -1) {
              iVar9 = iVar4 + -1;
            }
            iVar9 = iVar9 >> 5;
            iVar10 = iVar9;
            if (iVar9 < iVar8) {
              iVar10 = iVar8;
            }
            if (iVar9 <= iVar8) break;
            lVar14 = 0;
            while( true ) {
              iVar15 = iVar15 + 0x20;
              uVar23 = puVar6[lVar13 + lVar14 + 1];
              if (uVar23 != 0) break;
              lVar14 = lVar14 + 1;
              if (iVar10 - lVar13 == lVar14) goto LAB_143cc4ebd;
            }
            uVar18 = (ulonglong)(iVar8 + (int)lVar14 + 1);
            uVar20 = 0xffffffff;
          }
          uVar25 = (ulonglong)(-uVar23 & uVar23);
          uVar24 = uVar25 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar8 = (iVar15 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        } while (iVar8 < iVar4);
      }
LAB_143cc4ebd:
      pvVar5 = local_118;
      if (local_f8 == &local_b8) {
        local_70 = 0;
        if (local_78 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        puVar19 = (uint *)((longlong)local_118 + 0x60);
        iVar4 = *(int *)((longlong)local_118 + 0x78);
        if (iVar4 != 0) {
          puVar6 = *(uint **)((longlong)local_118 + 0x70);
          if (*(uint **)((longlong)local_118 + 0x70) == (uint *)0x0) {
            puVar6 = puVar19;
          }
          uVar20 = *puVar6;
          if (uVar20 == 0) {
            iVar15 = iVar4 + 0x1e;
            if (-1 < iVar4 + -1) {
              iVar15 = iVar4 + -1;
            }
            uVar18 = 0;
            uVar25 = (ulonglong)(uint)(iVar15 >> 5);
            if (iVar15 >> 5 < 1) {
              uVar25 = uVar18;
            }
            iVar15 = 0;
            do {
              if (uVar25 == uVar18) goto LAB_143cc4ee9;
              iVar15 = iVar15 + 0x20;
              uVar20 = puVar6[uVar18 + 1];
              uVar18 = uVar18 + 1;
            } while (uVar20 == 0);
          }
          else {
            uVar18 = 0;
            iVar15 = 0;
          }
          uVar24 = (ulonglong)(-uVar20 & uVar20);
          uVar25 = uVar24 * 2 + 1;
          lVar22 = 0x3f;
          if (uVar25 != 0) {
            for (; uVar25 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          iVar8 = (iVar15 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
          if (iVar8 < iVar4) {
            uVar20 = 0xffffffff;
            do {
              plVar16 = *(longlong **)(*local_f8 + 8 + (longlong)iVar8 * 0x18);
              if (plVar16 != (longlong *)0x0) {
                LOCK();
                plVar21 = plVar16 + 1;
                *(int *)plVar21 = (int)*plVar21 + -1;
                UNLOCK();
                if ((int)*plVar21 == 0) {
                  (**(code **)*plVar16)(plVar16);
                  LOCK();
                  piVar12 = (int *)((longlong)plVar16 + 0xc);
                  *piVar12 = *piVar12 + -1;
                  UNLOCK();
                  if (*piVar12 == 0) {
                    (**(code **)(*plVar16 + 0x10))(plVar16);
                  }
                }
              }
              uVar20 = uVar20 & ~(uint)uVar24;
              puVar6 = *(uint **)((longlong)local_118 + 0x70);
              if (*(uint **)((longlong)local_118 + 0x70) == (uint *)0x0) {
                puVar6 = puVar19;
              }
              iVar9 = *(int *)((longlong)local_118 + 0x78);
              iVar8 = (int)uVar18;
              lVar22 = (longlong)iVar8;
              uVar23 = puVar6[lVar22] & uVar20;
              if (uVar23 == 0) {
                iVar10 = iVar9 + 0x1e;
                if (-1 < iVar9 + -1) {
                  iVar10 = iVar9 + -1;
                }
                iVar10 = iVar10 >> 5;
                iVar15 = iVar15 + 0x20;
                iVar11 = iVar10;
                if (iVar10 < iVar8) {
                  iVar11 = iVar8;
                }
                if (iVar8 < iVar10) {
                  lVar13 = 0;
                  do {
                    uVar23 = puVar6[lVar22 + lVar13 + 1];
                    if (uVar23 != 0) {
                      uVar18 = (ulonglong)(iVar8 + (int)lVar13 + 1);
                      uVar20 = 0xffffffff;
                      goto LAB_143cc51e6;
                    }
                    iVar15 = iVar15 + 0x20;
                    lVar13 = lVar13 + 1;
                  } while (iVar11 - lVar22 != lVar13);
                  uVar20 = 0xffffffff;
                  iVar8 = iVar11;
                }
                uVar18 = (ulonglong)(iVar8 + 1);
                iVar8 = iVar9;
              }
              else {
LAB_143cc51e6:
                uVar24 = (ulonglong)(-uVar23 & uVar23);
                uVar25 = uVar24 * 2 + 1;
                lVar22 = 0x3f;
                if (uVar25 != 0) {
                  for (; uVar25 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                  }
                }
                iVar8 = (iVar15 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
                if (iVar9 <= iVar8) {
                  iVar8 = iVar9;
                }
              }
            } while (iVar8 != iVar4);
          }
        }
LAB_143cc4ee9:
        pvVar3 = local_118;
        if (*(longlong *)((longlong)local_118 + 0x50) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)((longlong)pvVar3 + 0x50) = local_b8;
        local_b8 = 0;
        *(int *)((longlong)pvVar3 + 0x58) = (int)uStack_b0;
        *(int *)((longlong)pvVar3 + 0x5c) = uStack_b0._4_4_;
        uStack_b0 = 0;
        if (local_98 == (undefined8 *)0x0) {
          *puVar19 = (uint)local_a8;
          *(undefined4 *)((longlong)pvVar5 + 100) = local_a8._4_4_;
          *(undefined4 *)((longlong)pvVar5 + 0x68) = (undefined4)uStack_a0;
          *(undefined4 *)((longlong)pvVar5 + 0x6c) = uStack_a0._4_4_;
        }
        if (*(longlong *)((longlong)pvVar3 + 0x70) != 0) {
          FUN_1400020a8();
        }
        *(undefined8 **)((longlong)pvVar3 + 0x70) = local_98;
        local_98 = (undefined8 *)0x0;
        *(uint *)((longlong)pvVar3 + 0x78) = local_90;
        *(uint *)((longlong)pvVar3 + 0x7c) = uStack_8c;
        local_90 = 0;
        uStack_8c = 0;
        *(int *)((longlong)pvVar3 + 0x80) = local_88;
        *(int *)((longlong)pvVar3 + 0x84) = iStack_84;
        local_88 = -1;
        iStack_84 = 0;
        if (local_78 == 0) {
          *(undefined4 *)((longlong)pvVar3 + 0x88) = (undefined4)local_80;
        }
        if (*(longlong *)((longlong)pvVar3 + 0x90) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)((longlong)pvVar3 + 0x90) = local_78;
        local_78 = 0;
        *(int *)((longlong)pvVar3 + 0x98) = local_70;
        local_70 = 0;
        pvVar5 = pvVar3;
      }
      FUN_1401c5aac(&local_b8);
      lVar22 = local_128;
      FUN_141871072(local_128 + 0x1c0,pvVar5);
    }
    if (*(int *)(lVar22 + 0x268) != *(int *)(lVar22 + 0x294)) {
      FUN_1401c70ce(local_120);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_158);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cc5289 FUN_143cc5289 body=41 status=ok
// SIG undefined FUN_143cc5289(void)

void FUN_143cc5289(void)

{
  DAT_14cb727a0 = 0;
  if (DAT_14cb72798 != 0) {
    FUN_1400020a8();
  }
  FUN_145d64bce();
  return;
}



// FUNCTION 143cc52f0 FUN_143cc52f0 body=136 status=ok
// SIG undefined FUN_143cc52f0(void)

void FUN_143cc52f0(longlong param_1,byte param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((int)(uint)param_2 < *(int *)(param_1 + 0x148)) {
    lVar3 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x140) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x140);
    }
    uVar1 = *(uint *)(param_3 + 1);
    if ((longlong)(int)uVar1 != 0) {
      plVar4 = (longlong *)(lVar3 + (ulonglong)param_2 * 0x20);
      iVar2 = (int)plVar4[1];
      *(uint *)(plVar4 + 1) = iVar2 + uVar1;
      if ((uint)(*(int *)((longlong)plVar4 + 0xc) - iVar2) < uVar1) {
        FUN_1446f84a2(plVar4,iVar2);
      }
      memcpy((void *)((longlong)iVar2 * 8 + *plVar4),(void *)*param_3,(longlong)(int)uVar1 << 3);
      return;
    }
  }
  return;
}



// FUNCTION 143cc5378 FUN_143cc5378 body=41 status=ok
// SIG undefined FUN_143cc5378(void)

void FUN_143cc5378(void)

{
  DAT_14cb728b0 = 0;
  if (DAT_14cb728a8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d64c6c();
  return;
}



// FUNCTION 143cc53e0 FUN_143cc53e0 body=2436 status=ok
// SIG undefined FUN_143cc53e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cc53e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  uint *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  byte bVar18;
  int iVar19;
  longlong *plVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  int iVar24;
  uint uVar25;
  undefined4 uVar26;
  longlong lVar27;
  ulonglong uVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  longlong *plVar32;
  longlong lVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  uint uVar37;
  int iVar38;
  bool bVar39;
  
  lVar13 = FUN_1449e3f1e();
  if ((lVar13 != 0) && (lVar13 = *(longlong *)(lVar13 + 0x428), lVar13 != 0)) {
    iVar6 = *(int *)(lVar13 + 0x58);
    if (iVar6 == 0) {
      uVar35 = 1;
      uVar36 = 0;
      iVar31 = 0;
      iVar38 = 0;
    }
    else {
      puVar14 = *(uint **)(lVar13 + 0x50);
      if (*(uint **)(lVar13 + 0x50) == (uint *)0x0) {
        puVar14 = (uint *)(lVar13 + 0x40);
      }
      uVar37 = *puVar14;
      if (uVar37 == 0) {
        iVar38 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar38 = iVar6 + -1;
        }
        uVar36 = 0;
        uVar35 = (ulonglong)(uint)(iVar38 >> 5);
        if (iVar38 >> 5 < 1) {
          uVar35 = uVar36;
        }
        iVar31 = 0;
        do {
          if (uVar35 == uVar36) {
            return;
          }
          iVar31 = iVar31 + 0x20;
          uVar37 = puVar14[uVar36 + 1];
          uVar36 = uVar36 + 1;
        } while (uVar37 == 0);
      }
      else {
        uVar36 = 0;
        iVar31 = 0;
      }
      uVar35 = (ulonglong)(-uVar37 & uVar37);
      uVar22 = uVar35 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar38 = (iVar31 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
      if (iVar6 <= iVar38) {
        iVar38 = iVar6;
      }
    }
    if (iVar38 != iVar6) {
      plVar1 = (longlong *)(param_1 + 0x38);
      lVar7 = param_1 + 0x48;
      lVar2 = param_1 + 0x70;
      uVar37 = 0xffffffff;
      do {
        lVar27 = *(longlong *)(lVar13 + 0x30);
        plVar15 = (longlong *)FUN_14001cc68(0x180,0x10);
        plVar15[1] = (longlong)&DAT_100000001;
        *plVar15 = (longlong)&PTR_FUN_14b3f03d0;
        plVar15[0x2a] = 0;
        plVar15[0x2b] = 0x700000000;
        plVar15[2] = 0;
        plVar15[3] = 0;
        plVar15[4] = 0;
        plVar15[5] = 0;
        plVar15[6] = 0;
        plVar15[7] = 0;
        plVar15[8] = 0;
        plVar15[9] = 0;
        *(undefined8 *)((longlong)plVar15 + 0x4a) = 0;
        *(undefined8 *)((longlong)plVar15 + 0x52) = 0;
        plVar15[0xc] = 0;
        plVar15[0xd] = 0;
        *(undefined4 *)((longlong)plVar15 + 0x164) = 0;
        if (param_2 == 0) {
          *(undefined4 *)(plVar15 + 0x2c) = 0;
          iVar9 = 0;
        }
        else {
          uVar30 = *(uint *)(param_2 + 0xc);
          *(uint *)(plVar15 + 0x2c) = uVar30;
          if ((int)uVar30 < DAT_14c9647dc) {
            lVar33 = (ulonglong)((uVar30 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8);
          }
          else {
            lVar33 = 0;
          }
          iVar9 = *(int *)(lVar33 + 0x10);
          if (*(int *)(lVar33 + 0x10) == 0) {
            LOCK();
            iVar9 = DAT_14c964868 + 1;
            UNLOCK();
            iVar11 = DAT_14c964868 + 1;
            bVar39 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar9;
            if (bVar39) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar11);
            }
            LOCK();
            iVar9 = *(int *)(lVar33 + 0x10);
            bVar39 = iVar9 == 0;
            if (bVar39) {
              *(int *)(lVar33 + 0x10) = iVar11;
              iVar9 = 0;
            }
            UNLOCK();
            if (bVar39) {
              iVar9 = iVar11;
            }
          }
        }
        *(int *)((longlong)plVar15 + 0x164) = iVar9;
        plVar15[0x2d] = 0;
        plVar15[0x2e] = 0;
        *(undefined4 *)(plVar15 + 0x2f) = 0;
        plVar32 = plVar15 + 2;
        if ((plVar32 != (longlong *)0x0) &&
           (((*plVar32 == 0 || (plVar15[3] == 0)) || (*(int *)(plVar15[3] + 8) < 1)))) {
          if (plVar15 == (longlong *)0x0) {
            _DAT_00000010 = 0x10;
            plVar16 = (longlong *)&DAT_00000018;
            plVar20 = _DAT_00000018;
            if (_DAT_00000018 != (longlong *)0x0) {
LAB_143cc5645:
              LOCK();
              piVar3 = (int *)((longlong)plVar20 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar20 + 0x10))();
              }
              *plVar16 = (longlong)plVar15;
              if (plVar15 != (longlong *)0x0) goto LAB_143cc5671;
            }
          }
          else {
            LOCK();
            *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
            UNLOCK();
            plVar15[2] = (longlong)plVar32;
            if ((longlong *)plVar15[3] != plVar15) {
              LOCK();
              *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
              UNLOCK();
              if ((longlong *)plVar15[3] != (longlong *)0x0) {
                plVar16 = plVar15 + 3;
                plVar20 = (longlong *)plVar15[3];
                goto LAB_143cc5645;
              }
              plVar15[3] = (longlong)plVar15;
            }
LAB_143cc5671:
            LOCK();
            plVar16 = plVar15 + 1;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)*plVar16 == 0) {
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar3 = (int *)((longlong)plVar15 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
          }
        }
        plVar16 = (longlong *)((longlong)iVar38 * 0x38 + lVar27);
        lVar33 = *plVar16;
        if (*(int *)(param_1 + 0x6c) == 0) {
          iVar9 = *(int *)(param_1 + 0x40);
          *(int *)(param_1 + 0x40) = iVar9 + 1;
          if (*(int *)(param_1 + 0x44) == iVar9) {
            FUN_1447711aa(plVar1,iVar9);
          }
          iVar11 = *(int *)(param_1 + 0x60);
          if (iVar11 == 0) {
            iVar24 = -1;
          }
          else {
            iVar24 = iVar11 + 0x1e;
            if (-1 < iVar11 + -1) {
              iVar24 = iVar11 + -1;
            }
            iVar24 = iVar24 >> 5;
          }
          iVar19 = iVar11 + 1;
          iVar29 = iVar11 + 0x1f;
          if (-1 < iVar11) {
            iVar29 = iVar11;
          }
          if (iVar29 >> 5 == iVar24) {
            *(int *)(param_1 + 0x60) = iVar19;
          }
          else {
            if (*(int *)(param_1 + 100) <= iVar11) {
              iVar24 = iVar11;
              if (iVar11 + 0x20U < 0xa0) {
                iVar19 = 0x80;
              }
              else {
                uVar30 = iVar11 + 0x20U >> 5;
                if (*(int *)(param_1 + 100) + 0x1fU < 0xa0) {
                  uVar10 = 4;
                  if (4 < uVar30) {
                    uVar10 = uVar30;
                  }
                }
                else {
                  uVar10 = uVar30 + (uVar30 * 3 >> 3) + 0x10;
                }
                uVar22 = (ulonglong)(uVar10 * 4);
                if (DAT_14c872d28 != (longlong *)0x0) {
                  if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                    uVar25 = (uint)(uVar22 + 0xf);
                    if (uVar10 < 0x1ffd) {
                      uVar22 = (ulonglong)
                               (ushort)(&DAT_14c841d90)
                                       [0x32 - (byte)(&DAT_14c841e00)[uVar22 + 0xf >> 4]];
                    }
                    else {
                      uVar23 = (ulonglong)(uVar25 & 0xfffffff0);
                      if (uVar23 < 0x7ff1) {
                        bVar18 = (&DAT_14c841e00)[uVar25 >> 4];
                        uVar28 = 0x32;
                        if (0x32 < bVar18) {
                          uVar28 = (ulonglong)bVar18;
                        }
                        uVar34 = 0x32 - (ulonglong)bVar18;
                        do {
                          uVar22 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar34 & 0xffffffff];
                          if (((&DAT_14c841d90)[uVar34 & 0xffffffff] & 0xf) == 0)
                          goto LAB_143cc5c37;
                          lVar21 = uVar28 + 1 + uVar34;
                          uVar34 = uVar34 - 1;
                        } while (lVar21 != 0x33);
                      }
                      uVar22 = (ulonglong)DAT_14c841df8;
                      if (DAT_14c841df8 < 0x11) {
                        uVar22 = 0x10;
                      }
                      uVar22 = -uVar22 & (uVar23 + uVar22) - 1;
                    }
                  }
                  else {
                    uVar22 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar22,0);
                    iVar24 = *(int *)(param_1 + 0x60);
                  }
                }
LAB_143cc5c37:
                iVar12 = (int)(uVar22 >> 2);
                iVar19 = iVar12 << 5;
                if (iVar12 < (int)uVar30) {
                  iVar19 = -0x20;
                }
              }
              *(int *)(param_1 + 100) = iVar19;
              FUN_1446efbd8(lVar7,iVar24);
              iVar19 = *(int *)(param_1 + 0x60) + 1;
            }
            iVar24 = iVar19 + 0x1f;
            if (-1 < iVar19) {
              iVar24 = iVar19;
            }
            *(int *)(param_1 + 0x60) = iVar19;
            if (iVar19 % 0x20 != 0) {
              lVar21 = *(longlong *)(param_1 + 0x58);
              if (*(longlong *)(param_1 + 0x58) == 0) {
                lVar21 = lVar7;
              }
              bVar18 = -(char)(iVar19 % 0x20);
              *(uint *)(lVar21 + (longlong)(iVar24 >> 5) * 4) =
                   (uint)(*(int *)(lVar21 + (longlong)(iVar24 >> 5) * 4) << (bVar18 & 0x1f)) >>
                   (bVar18 & 0x1f);
            }
          }
          lVar17 = (longlong)iVar9;
          lVar21 = *(longlong *)(param_1 + 0x58);
          if (*(longlong *)(param_1 + 0x58) == 0) {
            lVar21 = lVar7;
          }
          bVar18 = (byte)iVar11 & 0x1f;
          puVar14 = (uint *)(lVar21 + (longlong)(iVar29 >> 5) * 4);
          *puVar14 = *puVar14 & (-2 << bVar18 | 0xfffffffeU >> 0x20 - bVar18);
        }
        else {
          iVar9 = *(int *)(param_1 + 0x68);
          lVar17 = (longlong)iVar9;
          iVar11 = *(int *)(*(longlong *)(param_1 + 0x38) + 4 + lVar17 * 0x20);
          *(int *)(param_1 + 0x68) = iVar11;
          iVar24 = *(int *)(param_1 + 0x6c) + -1;
          *(int *)(param_1 + 0x6c) = iVar24;
          if (iVar24 != 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar11 * 0x20) = 0xffffffff;
          }
        }
        uVar30 = 1 << ((byte)iVar9 & 0x1f);
        lVar21 = *(longlong *)(param_1 + 0x58);
        if (*(longlong *)(param_1 + 0x58) == 0) {
          lVar21 = lVar7;
        }
        iVar11 = iVar9 + 0x1f;
        if (-1 < iVar9) {
          iVar11 = iVar9;
        }
        puVar14 = (uint *)(lVar21 + (longlong)(iVar11 >> 5) * 4);
        *puVar14 = *puVar14 | uVar30;
        lVar21 = *(longlong *)(param_1 + 0x38);
        lVar17 = lVar17 * 0x20;
        plVar20 = (longlong *)(lVar21 + lVar17);
        *(longlong *)(lVar21 + lVar17) = lVar33;
        *(longlong **)(lVar21 + 8 + lVar17) = plVar32;
        *(longlong **)(lVar21 + 0x10 + lVar17) = plVar15;
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
          lVar33 = *plVar20;
        }
        *(undefined4 *)(plVar20 + 3) = 0xffffffff;
        uVar10 = (uint)((ulonglong)lVar33 >> 0x10);
        uVar25 = (uint)lVar33 & 0xffff;
        uVar10 = ((uint)lVar33 << 0x10 | uVar25) + (int)((ulonglong)lVar33 >> 0x20) +
                 (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar25 >> 4);
        uVar25 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x6c);
        iVar24 = 1;
        if (uVar25 != 1) {
          if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
            lVar21 = *(longlong *)(param_1 + 0x78);
            if (*(longlong *)(param_1 + 0x78) == 0) {
              lVar21 = lVar2;
            }
            iVar19 = *(int *)(lVar21 + (ulonglong)(*(int *)(param_1 + 0x80) - 1U & uVar10) * 4);
            if (iVar19 != -1) {
              do {
                puVar5 = (undefined4 *)(*plVar1 + (longlong)iVar19 * 0x20);
                if (*(longlong *)(*plVar1 + (longlong)iVar19 * 0x20) == lVar33) {
                  plVar32 = *(longlong **)(puVar5 + 4);
                  if (plVar32 != (longlong *)0x0) {
                    LOCK();
                    plVar4 = plVar32 + 1;
                    *(int *)plVar4 = (int)*plVar4 + -1;
                    UNLOCK();
                    if ((int)*plVar4 == 0) {
                      (**(code **)*plVar32)(plVar32);
                      LOCK();
                      piVar3 = (int *)((longlong)plVar32 + 0xc);
                      *piVar3 = *piVar3 + -1;
                      UNLOCK();
                      if (*piVar3 == 0) {
                        (**(code **)(*plVar32 + 0x10))(plVar32);
                      }
                    }
                  }
                  lVar33 = *plVar20;
                  uVar26 = *(undefined4 *)((longlong)plVar20 + 4);
                  lVar21 = plVar20[1];
                  uVar8 = *(undefined4 *)((longlong)plVar20 + 0xc);
                  *(longlong *)(puVar5 + 4) = plVar20[2];
                  *puVar5 = (int)lVar33;
                  puVar5[1] = uVar26;
                  puVar5[2] = (int)lVar21;
                  puVar5[3] = uVar8;
                  lVar33 = *(longlong *)(param_1 + 0x38);
                  if (*(int *)(param_1 + 0x6c) != 0) {
                    *(int *)(lVar33 + (longlong)*(int *)(param_1 + 0x68) * 0x20) = iVar9;
                  }
                  *(undefined4 *)(lVar33 + (longlong)iVar9 * 0x20) = 0xffffffff;
                  if (*(int *)(param_1 + 0x6c) < 1) {
                    uVar26 = 0xffffffff;
                  }
                  else {
                    uVar26 = *(undefined4 *)(param_1 + 0x68);
                  }
                  *(undefined4 *)(lVar33 + (longlong)iVar9 * 0x20 + 4) = uVar26;
                  *(int *)(param_1 + 0x68) = iVar9;
                  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
                  lVar33 = *(longlong *)(param_1 + 0x58);
                  if (*(longlong *)(param_1 + 0x58) == 0) {
                    lVar33 = lVar7;
                  }
                  puVar14 = (uint *)(lVar33 + (longlong)(iVar11 >> 5) * 4);
                  *puVar14 = *puVar14 & ~uVar30;
                  iVar9 = iVar19;
                  goto LAB_143cc5906;
                }
                iVar19 = puVar5[6];
              } while (iVar19 != -1);
            }
          }
          if (3 < uVar25) {
            uVar22 = (ulonglong)(uVar25 & 0xfffffffe) + 0xf;
            lVar33 = 0x3f;
            if (uVar22 != 0) {
              for (; uVar22 >> lVar33 == 0; lVar33 = lVar33 + -1) {
              }
            }
            iVar24 = 1 << ((byte)lVar33 & 0x1f);
          }
        }
        if (((int)uVar25 < 1) || (iVar24 <= *(int *)(param_1 + 0x80))) {
          uVar10 = *(int *)(param_1 + 0x80) - 1U & uVar10;
          *(uint *)((longlong)plVar20 + 0x1c) = uVar10;
          lVar33 = *(longlong *)(param_1 + 0x78);
          if (*(longlong *)(param_1 + 0x78) == 0) {
            lVar33 = lVar2;
          }
          *(undefined4 *)(plVar20 + 3) =
               *(undefined4 *)
                (lVar33 + ((longlong)*(int *)(param_1 + 0x80) - 1U & (longlong)(int)uVar10) * 4);
          lVar33 = *(longlong *)(param_1 + 0x78);
          if (*(longlong *)(param_1 + 0x78) == 0) {
            lVar33 = lVar2;
          }
          *(int *)(lVar33 + ((longlong)*(int *)(param_1 + 0x80) - 1U & (longlong)(int)uVar10) * 4) =
               iVar9;
        }
        else {
          *(int *)(param_1 + 0x80) = iVar24;
          FUN_143ccde06(plVar1);
        }
LAB_143cc5906:
        lVar33 = *(longlong *)(*plVar1 + 8 + (longlong)iVar9 * 0x20);
        plVar32 = *(longlong **)(*plVar1 + 0x10 + (longlong)iVar9 * 0x20);
        if (plVar32 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar32 + 1) = (int)plVar32[1] + 1;
          UNLOCK();
        }
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar20 = plVar15 + 1;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)*plVar20 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar3 = (int *)((longlong)plVar15 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        if (lVar33 != 0) {
          FUN_145a3886e(lVar33,plVar16,lVar27 + (longlong)iVar38 * 0x38 + 0x18);
        }
        if (plVar32 != (longlong *)0x0) {
          LOCK();
          plVar15 = plVar32 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*plVar32)(plVar32);
            LOCK();
            piVar3 = (int *)((longlong)plVar32 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar32 + 0x10))(plVar32);
            }
          }
        }
        uVar37 = uVar37 & ~(uint)uVar35;
        puVar14 = *(uint **)(lVar13 + 0x50);
        if (*(uint **)(lVar13 + 0x50) == (uint *)0x0) {
          puVar14 = (uint *)(lVar13 + 0x40);
        }
        iVar9 = *(int *)(lVar13 + 0x58);
        iVar38 = (int)uVar36;
        lVar27 = (longlong)iVar38;
        uVar30 = puVar14[lVar27] & uVar37;
        if (uVar30 == 0) {
          iVar11 = iVar9 + 0x1e;
          if (-1 < iVar9 + -1) {
            iVar11 = iVar9 + -1;
          }
          iVar11 = iVar11 >> 5;
          iVar31 = iVar31 + 0x20;
          iVar24 = iVar11;
          if (iVar11 < iVar38) {
            iVar24 = iVar38;
          }
          if (iVar38 < iVar11) {
            lVar33 = 0;
            do {
              uVar30 = puVar14[lVar27 + lVar33 + 1];
              if (uVar30 != 0) {
                uVar36 = (ulonglong)(iVar38 + (int)lVar33 + 1);
                uVar37 = 0xffffffff;
                goto LAB_143cc5a1c;
              }
              iVar31 = iVar31 + 0x20;
              lVar33 = lVar33 + 1;
            } while (iVar24 - lVar27 != lVar33);
            uVar37 = 0xffffffff;
            iVar38 = iVar24;
          }
          uVar36 = (ulonglong)(iVar38 + 1);
          iVar38 = iVar9;
        }
        else {
LAB_143cc5a1c:
          uVar35 = (ulonglong)(-uVar30 & uVar30);
          uVar22 = uVar35 * 2 + 1;
          lVar27 = 0x3f;
          if (uVar22 != 0) {
            for (; uVar22 >> lVar27 == 0; lVar27 = lVar27 + -1) {
            }
          }
          iVar38 = (iVar31 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
          if (iVar9 <= iVar38) {
            iVar38 = iVar9;
          }
        }
      } while (iVar38 != iVar6);
    }
  }
  return;
}



// FUNCTION 143cc5d64 FUN_143cc5d64 body=69 status=ok
// SIG undefined FUN_143cc5d64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cc5d64(void)

{
  _DAT_14cb72970 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143cc5da6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb72978,1);
  return;
}



// FUNCTION 143cc5da9 FUN_143cc5da9 body=41 status=ok
// SIG undefined FUN_143cc5da9(void)

void FUN_143cc5da9(void)

{
  DAT_14cb729d0 = 0;
  if (DAT_14cb729c8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d64d0a();
  return;
}



// FUNCTION 143cc5e32 FUN_143cc5e32 body=1300 status=ok
// SIG undefined FUN_143cc5e32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cc5e32(longlong param_1,float param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  undefined ***pppuVar8;
  longlong *plVar9;
  float fVar10;
  undefined1 auStack_158 [32];
  undefined1 *local_138;
  undefined ***local_128;
  undefined **local_118;
  longlong local_110;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_98 = (longlong)DAT_14cb72af0;
  local_a8 = DAT_14cb72ae0;
  local_b8 = (longlong)DAT_14cb72ad0;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_110 = param_1 + -0x30;
  local_128 = (undefined ***)0x0;
  local_118 = &PTR_LAB_14b3f0430;
  local_138 = &LAB_143cce0ac;
  local_48 = _DAT_14cb72b00;
  uStack_44 = DAT_14cb72b00_4;
  uStack_40 = (undefined4)uRam000000014cb72b08;
  uStack_3c = uRam000000014cb72b08._4_4_;
  local_58 = DAT_14cb72af0._0_4_;
  uStack_54 = DAT_14cb72af0._4_4_;
  uStack_50 = (undefined4)lRam000000014cb72af8;
  uStack_4c = lRam000000014cb72af8._4_4_;
  local_68 = DAT_14cb72ae0;
  uStack_60 = (undefined4)uRam000000014cb72ae8;
  uStack_5c = uRam000000014cb72ae8._4_4_;
  local_78 = DAT_14cb72ad0;
  uStack_70 = (undefined4)uRam000000014cb72ad8;
  uStack_6c = uRam000000014cb72ad8._4_4_;
  uVar3 = CONCAT44(uStack_84,local_88);
  uVar4 = CONCAT44(uStack_7c,uStack_80);
  DAT_14cb72af0 = &PTR_LAB_14b3f0430;
  uVar2 = CONCAT44(uStack_9c,uStack_a0);
  DAT_14cb72ae0 = (longlong *)0x0;
  uVar1 = CONCAT44(uStack_ac,uStack_b0);
  DAT_14cb72ad0 = &LAB_143cce0ac;
  uStack_90 = lRam000000014cb72af8;
  local_88 = _DAT_14cb72b00;
  uStack_84 = DAT_14cb72b00_4;
  uStack_80 = (undefined4)uRam000000014cb72b08;
  uStack_7c = uRam000000014cb72b08._4_4_;
  uStack_a0 = (undefined4)uRam000000014cb72ae8;
  uStack_9c = uRam000000014cb72ae8._4_4_;
  uStack_b0 = (undefined4)uRam000000014cb72ad8;
  uStack_ac = uRam000000014cb72ad8._4_4_;
  uRam000000014cb72ad8 = uVar1;
  uRam000000014cb72ae8 = uVar2;
  lRam000000014cb72af8 = local_110;
  _DAT_14cb72b00 = uVar3;
  uRam000000014cb72b08 = uVar4;
  if (local_b8 != 0) {
    plVar9 = local_a8;
    if (local_a8 == (longlong *)0x0) {
      plVar9 = &local_98;
    }
    (**(code **)(*plVar9 + 0x10))();
    if (local_138 == (undefined1 *)0x0) goto LAB_143cc5f5d;
  }
  pppuVar8 = &local_118;
  if (local_128 != (undefined ***)0x0) {
    pppuVar8 = local_128;
  }
  (*(code *)(*pppuVar8)[2])();
LAB_143cc5f5d:
  plVar9 = *(longlong **)(param_1 + 0x18);
  if (plVar9 != (longlong *)0x0) {
    if ((*(float *)(plVar9 + 6) <= 0.0) ||
       (cVar7 = (**(code **)(*plVar9 + 0x2b8))(plVar9), cVar7 != '\0')) {
      (**(code **)(*plVar9 + 0x2b0))(plVar9);
      *(undefined4 *)((longlong)plVar9 + 0x34) = 0;
    }
    else {
      fVar10 = *(float *)((longlong)plVar9 + 0x34) + param_2;
      *(float *)((longlong)plVar9 + 0x34) = fVar10;
      if (*(float *)(plVar9 + 6) <= fVar10) {
        (**(code **)(*plVar9 + 0x2b0))(plVar9);
        *(float *)((longlong)plVar9 + 0x34) =
             *(float *)((longlong)plVar9 + 0x34) - *(float *)(plVar9 + 6);
      }
    }
  }
  plVar9 = *(longlong **)(param_1 + 0x20);
  if (plVar9 != (longlong *)0x0) {
    if ((*(float *)(plVar9 + 6) <= 0.0) ||
       (cVar7 = (**(code **)(*plVar9 + 0x2b8))(plVar9), cVar7 != '\0')) {
      (**(code **)(*plVar9 + 0x2b0))(plVar9);
      *(undefined4 *)((longlong)plVar9 + 0x34) = 0;
    }
    else {
      fVar10 = *(float *)((longlong)plVar9 + 0x34) + param_2;
      *(float *)((longlong)plVar9 + 0x34) = fVar10;
      if (*(float *)(plVar9 + 6) <= fVar10) {
        (**(code **)(*plVar9 + 0x2b0))(plVar9);
        *(float *)((longlong)plVar9 + 0x34) =
             *(float *)((longlong)plVar9 + 0x34) - *(float *)(plVar9 + 6);
      }
    }
  }
  plVar9 = *(longlong **)(param_1 + 0x28);
  if (plVar9 != (longlong *)0x0) {
    if ((*(float *)(plVar9 + 6) <= 0.0) ||
       (cVar7 = (**(code **)(*plVar9 + 0x2b8))(plVar9), cVar7 != '\0')) {
      (**(code **)(*plVar9 + 0x2b0))(plVar9);
      *(undefined4 *)((longlong)plVar9 + 0x34) = 0;
    }
    else {
      fVar10 = *(float *)((longlong)plVar9 + 0x34) + param_2;
      *(float *)((longlong)plVar9 + 0x34) = fVar10;
      if (*(float *)(plVar9 + 6) <= fVar10) {
        (**(code **)(*plVar9 + 0x2b0))(plVar9);
        *(float *)((longlong)plVar9 + 0x34) =
             *(float *)((longlong)plVar9 + 0x34) - *(float *)(plVar9 + 6);
      }
    }
  }
  plVar9 = *(longlong **)(param_1 + 0x38);
  if (plVar9 != (longlong *)0x0) {
    if ((*(float *)(plVar9 + 6) <= 0.0) ||
       (cVar7 = (**(code **)(*plVar9 + 0x2b8))(plVar9), cVar7 != '\0')) {
      (**(code **)(*plVar9 + 0x2b0))(plVar9);
      *(undefined4 *)((longlong)plVar9 + 0x34) = 0;
    }
    else {
      fVar10 = *(float *)((longlong)plVar9 + 0x34) + param_2;
      *(float *)((longlong)plVar9 + 0x34) = fVar10;
      if (*(float *)(plVar9 + 6) <= fVar10) {
        (**(code **)(*plVar9 + 0x2b0))(plVar9);
        *(float *)((longlong)plVar9 + 0x34) =
             *(float *)((longlong)plVar9 + 0x34) - *(float *)(plVar9 + 6);
      }
    }
  }
  plVar9 = *(longlong **)(param_1 + 0x30);
  if (plVar9 != (longlong *)0x0) {
    if ((*(float *)(plVar9 + 6) <= 0.0) ||
       (cVar7 = (**(code **)(*plVar9 + 0x2b8))(plVar9), cVar7 != '\0')) {
      (**(code **)(*plVar9 + 0x2b0))(plVar9);
      *(undefined4 *)((longlong)plVar9 + 0x34) = 0;
    }
    else {
      fVar10 = *(float *)((longlong)plVar9 + 0x34) + param_2;
      *(float *)((longlong)plVar9 + 0x34) = fVar10;
      if (*(float *)(plVar9 + 6) <= fVar10) {
        (**(code **)(*plVar9 + 0x2b0))(plVar9);
        *(float *)((longlong)plVar9 + 0x34) =
             *(float *)((longlong)plVar9 + 0x34) - *(float *)(plVar9 + 6);
      }
    }
  }
  plVar9 = *(longlong **)(param_1 + 0x40);
  if (plVar9 != (longlong *)0x0) {
    if ((*(float *)(plVar9 + 6) <= 0.0) ||
       (cVar7 = (**(code **)(*plVar9 + 0x2b8))(plVar9), cVar7 != '\0')) {
      (**(code **)(*plVar9 + 0x2b0))(plVar9);
      *(undefined4 *)((longlong)plVar9 + 0x34) = 0;
    }
    else {
      fVar10 = *(float *)((longlong)plVar9 + 0x34) + param_2;
      *(float *)((longlong)plVar9 + 0x34) = fVar10;
      if (*(float *)(plVar9 + 6) <= fVar10) {
        (**(code **)(*plVar9 + 0x2b0))(plVar9);
        *(float *)((longlong)plVar9 + 0x34) =
             *(float *)((longlong)plVar9 + 0x34) - *(float *)(plVar9 + 6);
      }
    }
  }
  plVar9 = *(longlong **)(param_1 + 0x48);
  if (plVar9 != (longlong *)0x0) {
    if ((*(float *)(plVar9 + 6) <= 0.0) ||
       (cVar7 = (**(code **)(*plVar9 + 0x2b8))(plVar9), cVar7 != '\0')) {
      (**(code **)(*plVar9 + 0x2b0))(plVar9);
      *(undefined4 *)((longlong)plVar9 + 0x34) = 0;
    }
    else {
      param_2 = param_2 + *(float *)((longlong)plVar9 + 0x34);
      *(float *)((longlong)plVar9 + 0x34) = param_2;
      if (*(float *)(plVar9 + 6) <= param_2) {
        (**(code **)(*plVar9 + 0x2b0))(plVar9);
        *(float *)((longlong)plVar9 + 0x34) =
             *(float *)((longlong)plVar9 + 0x34) - *(float *)(plVar9 + 6);
      }
    }
  }
  local_68 = DAT_14cb72ae0;
  local_78 = DAT_14cb72ad0;
  uVar3 = CONCAT44(uStack_54,local_58);
  uVar4 = CONCAT44(uStack_4c,uStack_50);
  uVar5 = CONCAT44(uStack_44,local_48);
  uVar6 = CONCAT44(uStack_3c,uStack_40);
  uVar1 = CONCAT44(uStack_6c,uStack_70);
  DAT_14cb72ad0 = (undefined1 *)0x0;
  uVar2 = CONCAT44(uStack_5c,uStack_60);
  DAT_14cb72ae0 = (longlong *)0x0;
  local_48 = _DAT_14cb72b00;
  uStack_44 = DAT_14cb72b00_4;
  uStack_40 = (undefined4)uRam000000014cb72b08;
  uStack_3c = uRam000000014cb72b08._4_4_;
  local_58 = DAT_14cb72af0._0_4_;
  uStack_54 = DAT_14cb72af0._4_4_;
  uStack_50 = (undefined4)lRam000000014cb72af8;
  uStack_4c = lRam000000014cb72af8._4_4_;
  uStack_60 = (undefined4)uRam000000014cb72ae8;
  uStack_5c = uRam000000014cb72ae8._4_4_;
  uStack_70 = (undefined4)uRam000000014cb72ad8;
  uStack_6c = uRam000000014cb72ad8._4_4_;
  uRam000000014cb72ad8 = uVar1;
  uRam000000014cb72ae8 = uVar2;
  DAT_14cb72af0 = (undefined **)uVar3;
  lRam000000014cb72af8 = uVar4;
  _DAT_14cb72b00 = uVar5;
  uRam000000014cb72b08 = uVar6;
  if (local_78 != (undefined1 *)0x0) {
    plVar9 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar9 = (longlong *)&local_58;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cc6396 FUN_143cc6396 body=236 status=ok
// SIG undefined FUN_143cc6396(void)

void FUN_143cc6396(longlong param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x28,0,0);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x30,0,0);
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x38,0,0);
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x48,0,0);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x40,0,0);
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x50,0,0);
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000143cc6477. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x58,0,0);
    return;
  }
  return;
}



// FUNCTION 143cc64a9 FUN_143cc64a9 body=41 status=ok
// SIG undefined FUN_143cc64a9(void)

void FUN_143cc64a9(void)

{
  DAT_14cb72b88 = 0;
  if (DAT_14cb72b80 != 0) {
    FUN_1400020a8();
  }
  FUN_145d64da8();
  return;
}



// FUNCTION 143cc64d7 FUN_143cc64d7 body=41 status=ok
// SIG undefined FUN_143cc64d7(void)

void FUN_143cc64d7(void)

{
  DAT_14cb72c80 = 0;
  if (DAT_14cb72c78 != 0) {
    FUN_1400020a8();
  }
  FUN_145d64e46();
  return;
}



// FUNCTION 143cc6505 FUN_143cc6505 body=41 status=ok
// SIG undefined FUN_143cc6505(void)

void FUN_143cc6505(void)

{
  DAT_14cb72d70 = 0;
  if (DAT_14cb72d68 != 0) {
    FUN_1400020a8();
  }
  FUN_145d64ee4();
  return;
}



// FUNCTION 143cc6533 FUN_143cc6533 body=41 status=ok
// SIG undefined FUN_143cc6533(void)

void FUN_143cc6533(void)

{
  DAT_14cb72e60 = 0;
  if (DAT_14cb72e58 != 0) {
    FUN_1400020a8();
  }
  FUN_145d64f82();
  return;
}



// FUNCTION 143cc6561 FUN_143cc6561 body=41 status=ok
// SIG undefined FUN_143cc6561(void)

void FUN_143cc6561(void)

{
  DAT_14cb72f50 = 0;
  if (DAT_14cb72f48 != 0) {
    FUN_1400020a8();
  }
  FUN_145d65020();
  return;
}



// FUNCTION 143cc658f FUN_143cc658f body=41 status=ok
// SIG undefined FUN_143cc658f(void)

void FUN_143cc658f(void)

{
  DAT_14cb73040 = 0;
  if (DAT_14cb73038 != 0) {
    FUN_1400020a8();
  }
  FUN_145d650be();
  return;
}



// FUNCTION 143cc65bd FUN_143cc65bd body=41 status=ok
// SIG undefined FUN_143cc65bd(void)

void FUN_143cc65bd(void)

{
  DAT_14cb73130 = 0;
  if (DAT_14cb73128 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6515c();
  return;
}



// FUNCTION 143cc65eb FUN_143cc65eb body=41 status=ok
// SIG undefined FUN_143cc65eb(void)

void FUN_143cc65eb(void)

{
  DAT_14cb73220 = 0;
  if (DAT_14cb73218 != 0) {
    FUN_1400020a8();
  }
  FUN_145d651fa();
  return;
}



// FUNCTION 143cc6619 FUN_143cc6619 body=41 status=ok
// SIG undefined FUN_143cc6619(void)

void FUN_143cc6619(void)

{
  DAT_14cb73310 = 0;
  if (DAT_14cb73308 != 0) {
    FUN_1400020a8();
  }
  FUN_145d65298();
  return;
}



// FUNCTION 143cc6647 FUN_143cc6647 body=64 status=ok
// SIG undefined FUN_143cc6647(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cc6647(void)

{
  if (DAT_14cb73400 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cb733f8 = 0;
  if (DAT_14cb733f0 != 0) {
    FUN_1400020a8();
  }
  FUN_1411af278(&DAT_14cb733b0);
  return;
}



// FUNCTION 143cc6688 FUN_143cc6688 body=610 status=ok
// SIG undefined FUN_143cc6688(void)

void FUN_143cc6688(longlong param_1,int *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar4 = -2;
  if (-2 < *param_2) {
    iVar4 = *param_2;
  }
  iVar4 = iVar4 + 2;
  *param_2 = iVar4;
  if ((1 < *(byte *)(param_1 + 0x29)) && (DAT_14cb8a6f8 != (longlong *)0x0)) {
    plVar7 = DAT_14cb8a6f8;
    do {
      if (plVar7[2] == *(longlong *)(param_1 + 0x20)) {
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        local_60 = 0;
        uStack_58 = 0;
        FUN_1447715ec(&local_78,&DAT_14c9485f0);
        local_50 = 0xffffffff;
        (**(code **)(*plVar7 + 0x38))(plVar7,param_1,&local_78);
        if (local_60 != 0) {
          FUN_1400020a8();
        }
        iVar4 = *param_2;
        break;
      }
      plVar7 = (longlong *)plVar7[5];
    } while (plVar7 != (longlong *)0x0);
  }
  if (*(int *)(param_1 + 0x318) != 0) {
    iVar5 = -2;
    if (-2 < iVar4) {
      iVar5 = iVar4;
    }
    iVar5 = iVar5 + 2;
    *param_2 = iVar5;
    iVar4 = *(int *)(param_1 + 0x318);
    if ((longlong)iVar4 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x310);
      lVar6 = 0;
      do {
        lVar2 = *(longlong *)(lVar1 + lVar6);
        if ((*(char *)(lVar2 + 0x328) == '\x01') &&
           (cVar3 = FUN_1487e4df2(param_3,lVar2), cVar3 != '\0')) {
          FUN_143cc6688(lVar2,param_2,param_3);
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar4 * 8 != lVar6);
      iVar5 = *param_2;
    }
    iVar4 = 2;
    if (2 < iVar5) {
      iVar4 = iVar5;
    }
    iVar4 = iVar4 + -2;
    *param_2 = iVar4;
  }
  if (*(int *)(param_1 + 0x2f8) != 0) {
    iVar5 = -2;
    if (-2 < iVar4) {
      iVar5 = iVar4;
    }
    iVar5 = iVar5 + 2;
    *param_2 = iVar5;
    iVar4 = *(int *)(param_1 + 0x2f8);
    if ((longlong)iVar4 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x2f0);
      lVar6 = 0;
      do {
        lVar2 = *(longlong *)(lVar1 + lVar6);
        if ((*(char *)(lVar2 + 0x328) == '\x01') &&
           (cVar3 = FUN_1487e4df2(param_3,lVar2), cVar3 != '\0')) {
          FUN_143cc6688(lVar2,param_2,param_3);
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar4 * 8 != lVar6);
      iVar5 = *param_2;
    }
    iVar4 = 2;
    if (2 < iVar5) {
      iVar4 = iVar5;
    }
    iVar4 = iVar4 + -2;
    *param_2 = iVar4;
  }
  if (*(int *)(param_1 + 0x308) != 0) {
    iVar5 = -2;
    if (-2 < iVar4) {
      iVar5 = iVar4;
    }
    iVar5 = iVar5 + 2;
    *param_2 = iVar5;
    iVar4 = *(int *)(param_1 + 0x308);
    if ((longlong)iVar4 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x300);
      lVar6 = 0;
      do {
        lVar2 = *(longlong *)(lVar1 + lVar6);
        if ((*(char *)(lVar2 + 0x328) == '\x01') &&
           (cVar3 = FUN_1487e4df2(param_3,lVar2), cVar3 != '\0')) {
          FUN_143cc6688(lVar2,param_2,param_3);
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar4 * 8 != lVar6);
      iVar5 = *param_2;
    }
    iVar4 = 2;
    if (2 < iVar5) {
      iVar4 = iVar5;
    }
    iVar4 = iVar4 + -2;
  }
  iVar5 = 2;
  if (2 < iVar4) {
    iVar5 = iVar4;
  }
  *param_2 = iVar5 + -2;
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cc68eb FUN_143cc68eb body=64 status=ok
// SIG undefined FUN_143cc68eb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cc68eb(void)

{
  if (DAT_14cb734e0 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cb734d8 = 0;
  if (DAT_14cb734d0 != 0) {
    FUN_1400020a8();
  }
  FUN_1411af278(&DAT_14cb73490);
  return;
}



// FUNCTION 143cc692b FUN_143cc692b body=64 status=ok
// SIG undefined FUN_143cc692b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cc692b(void)

{
  if (DAT_14cb735c0 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cb735b8 = 0;
  if (DAT_14cb735b0 != 0) {
    FUN_1400020a8();
  }
  FUN_1411af278(&DAT_14cb73570);
  return;
}



// FUNCTION 143cc696b FUN_143cc696b body=64 status=ok
// SIG undefined FUN_143cc696b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cc696b(void)

{
  if (DAT_14cb73470 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cb73468 = 0;
  if (DAT_14cb73460 != 0) {
    FUN_1400020a8();
  }
  FUN_1411af278(&DAT_14cb73420);
  return;
}



// FUNCTION 143cc69ab FUN_143cc69ab body=64 status=ok
// SIG undefined FUN_143cc69ab(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cc69ab(void)

{
  if (DAT_14cb73550 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cb73548 = 0;
  if (DAT_14cb73540 != 0) {
    FUN_1400020a8();
  }
  FUN_1411af278(&DAT_14cb73500);
  return;
}



// FUNCTION 143cc69ec FUN_143cc69ec body=1507 status=ok
// SIG undefined FUN_143cc69ec(void)

void FUN_143cc69ec(longlong param_1,int *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int *piVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  undefined1 auStack_108 [40];
  int *local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar19 = -2;
  if (-2 < *param_2) {
    iVar19 = *param_2;
  }
  *param_2 = iVar19 + 2;
  local_e0 = param_2;
  if ((1 < *(byte *)(param_1 + 0x29)) && (DAT_14cb8a6f8 != (longlong *)0x0)) {
    plVar13 = DAT_14cb8a6f8;
    do {
      if (plVar13[2] == *(longlong *)(param_1 + 0x20)) {
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        local_80 = 0;
        uStack_78 = 0;
        FUN_1447715ec(&local_98,&DAT_14c9485f0);
        local_70 = 0xffffffff;
        (**(code **)(*plVar13 + 0x38))(plVar13,param_1,&local_98);
        if (local_80 != 0) {
          FUN_1400020a8();
        }
        break;
      }
      plVar13 = (longlong *)plVar13[5];
    } while (plVar13 != (longlong *)0x0);
  }
  uVar2 = *(uint *)(param_1 + 200);
  if (uVar2 == 0) {
    uVar16 = 1;
    uVar14 = 0;
    iVar19 = 0;
    uVar4 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0xc0);
    if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0xb0);
    }
    uVar4 = *puVar6;
    if (uVar4 == 0) {
      iVar19 = uVar2 + 0x1e;
      if (-1 < (int)(uVar2 - 1)) {
        iVar19 = uVar2 - 1;
      }
      uVar14 = 0;
      uVar16 = (ulonglong)(uint)(iVar19 >> 5);
      if (iVar19 >> 5 < 1) {
        uVar16 = uVar14;
      }
      iVar19 = 0;
      do {
        if (uVar16 == uVar14) goto LAB_143cc6b36;
        iVar19 = iVar19 + 0x20;
        uVar4 = puVar6[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar4 == 0);
    }
    else {
      uVar14 = 0;
      iVar19 = 0;
    }
    uVar16 = (ulonglong)(-uVar4 & uVar4);
    uVar1 = uVar16 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar4 = (iVar19 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if ((int)uVar2 <= (int)uVar4) {
      uVar4 = uVar2;
    }
  }
  if (uVar4 != uVar2) {
    uVar15 = 0xffffffff;
    local_c0 = (ulonglong)uVar2;
    do {
      lVar8 = *(longlong *)(param_1 + 0xa0);
      lVar18 = (longlong)(int)uVar4 * 0x20;
      lStack_b0 = 0;
      local_a8 = 0;
      local_b8 = *(longlong *)(lVar8 + lVar18);
      uVar7 = FUN_14477b664(*(undefined8 *)(lVar8 + 8 + lVar18));
      lStack_b0 = FUN_14477b664(uVar7);
      local_a8 = *(longlong *)(lVar8 + 0x10 + lVar18);
      if (lStack_b0 == 0) {
        uVar7 = FUN_1464af43e();
        lStack_b0 = FUN_14477b664(uVar7);
      }
      if (local_a8 == 0) {
        local_a8 = 0;
        if ((((lStack_b0 != 0) && (local_b8 != 0)) &&
            (plVar13 = *(longlong **)(lStack_b0 + 0xb8), plVar13 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar3 != '\0')) {
          uVar7 = (**(code **)(*plVar13 + 0x110))(plVar13);
          local_a8 = FUN_144aff482(uVar7,&local_b8);
          if (local_a8 != 0) goto LAB_143cc6bee;
        }
      }
      else {
LAB_143cc6bee:
        if (((*(char *)(local_a8 + 0x40) == '\x01') && (DAT_14cb73f40 != 0)) &&
           ((lVar8 = FUN_1487fdf06(DAT_14cb73f40,local_a8), lVar8 != 0 &&
            (*(char *)(lVar8 + 0x40) == '\x01')))) {
          iVar5 = *local_e0;
          if (iVar5 < -1) {
            iVar5 = -2;
          }
          iVar5 = iVar5 + 2;
          *local_e0 = iVar5;
          if ((1 < *(byte *)(lVar8 + 0x29)) && (DAT_14cb8a6f8 != (longlong *)0x0)) {
            plVar13 = DAT_14cb8a6f8;
            do {
              if (plVar13[2] == *(longlong *)(lVar8 + 0x20)) {
                local_98 = 0;
                uStack_90 = 0;
                local_88 = 0;
                local_80 = 0;
                uStack_78 = 0;
                local_c8 = lVar8;
                FUN_1447715ec(&local_98,&DAT_14c9485f0);
                lVar8 = local_c8;
                local_70 = 0xffffffff;
                (**(code **)(*plVar13 + 0x38))(plVar13,local_c8,&local_98);
                if (local_80 != 0) {
                  FUN_1400020a8();
                }
                iVar5 = *local_e0;
                break;
              }
              plVar13 = (longlong *)plVar13[5];
            } while (plVar13 != (longlong *)0x0);
          }
          piVar12 = local_e0;
          if (*(int *)(lVar8 + 0xe8) != 0) {
            if (iVar5 < -1) {
              iVar5 = -2;
            }
            iVar5 = iVar5 + 2;
            *local_e0 = iVar5;
            if ((longlong)*(int *)(lVar8 + 0xe8) != 0) {
              lVar18 = *(longlong *)(lVar8 + 0xe0);
              lVar11 = (longlong)*(int *)(lVar8 + 0xe8) << 3;
              lVar17 = 0;
              local_d8 = lVar18;
              local_d0 = lVar11;
              local_c8 = lVar8;
              do {
                lVar8 = *(longlong *)(lVar18 + lVar17);
                if ((*(char *)(lVar8 + 0x328) == '\x01') &&
                   (cVar3 = FUN_1487e4df2(param_1,lVar8), lVar18 = local_d8, lVar11 = local_d0,
                   piVar12 = local_e0, cVar3 != '\0')) {
                  FUN_143cc6688(lVar8,local_e0,param_1);
                  lVar18 = local_d8;
                  lVar11 = local_d0;
                  piVar12 = local_e0;
                }
                lVar17 = lVar17 + 8;
              } while (lVar11 != lVar17);
              iVar5 = *piVar12;
              lVar8 = local_c8;
            }
            if (iVar5 < 3) {
              iVar5 = 2;
            }
            iVar5 = iVar5 + -2;
            *piVar12 = iVar5;
          }
          if (*(int *)(lVar8 + 0xd8) != 0) {
            if (iVar5 < -1) {
              iVar5 = -2;
            }
            iVar5 = iVar5 + 2;
            *piVar12 = iVar5;
            if ((longlong)*(int *)(lVar8 + 0xd8) != 0) {
              lVar18 = *(longlong *)(lVar8 + 0xd0);
              lVar8 = (longlong)*(int *)(lVar8 + 0xd8) << 3;
              lVar11 = 0;
              local_d8 = lVar18;
              local_d0 = lVar8;
              do {
                lVar17 = *(longlong *)(lVar18 + lVar11);
                if ((*(char *)(lVar17 + 0x328) == '\x01') &&
                   (cVar3 = FUN_1487e4df2(param_1,lVar17), lVar18 = local_d8, lVar8 = local_d0,
                   piVar12 = local_e0, cVar3 != '\0')) {
                  FUN_143cc6688(lVar17,local_e0,param_1);
                  lVar18 = local_d8;
                  lVar8 = local_d0;
                  piVar12 = local_e0;
                }
                lVar11 = lVar11 + 8;
              } while (lVar8 != lVar11);
              iVar5 = *piVar12;
            }
            if (iVar5 < 3) {
              iVar5 = 2;
            }
            iVar5 = iVar5 + -2;
          }
          if (iVar5 < 3) {
            iVar5 = 2;
          }
          *piVar12 = iVar5 + -2;
        }
      }
      uVar15 = uVar15 & ~(uint)uVar16;
      puVar6 = *(uint **)(param_1 + 0xc0);
      if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 0xb0);
      }
      uVar2 = *(uint *)(param_1 + 200);
      iVar5 = (int)uVar14;
      lVar8 = (longlong)iVar5;
      uVar4 = puVar6[lVar8] & uVar15;
      if (uVar4 == 0) {
        iVar9 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar9 = uVar2 - 1;
        }
        iVar9 = iVar9 >> 5;
        iVar19 = iVar19 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar5) {
          iVar10 = iVar5;
        }
        if (iVar5 < iVar9) {
          lVar18 = 0;
          do {
            uVar4 = puVar6[lVar8 + lVar18 + 1];
            if (uVar4 != 0) {
              uVar14 = (ulonglong)(iVar5 + (int)lVar18 + 1);
              uVar15 = 0xffffffff;
              goto LAB_143cc6d51;
            }
            iVar19 = iVar19 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar10 - lVar8 != lVar18);
          uVar15 = 0xffffffff;
          iVar5 = iVar10;
        }
        uVar14 = (ulonglong)(iVar5 + 1);
        uVar4 = uVar2;
      }
      else {
LAB_143cc6d51:
        uVar16 = (ulonglong)(-uVar4 & uVar4);
        uVar1 = uVar16 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        uVar4 = (iVar19 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
        if ((int)uVar2 <= (int)uVar4) {
          uVar4 = uVar2;
        }
      }
    } while (uVar4 != (uint)local_c0);
  }
LAB_143cc6b36:
  iVar19 = 2;
  if (2 < *local_e0) {
    iVar19 = *local_e0;
  }
  *local_e0 = iVar19 + -2;
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cc6fdc FUN_143cc6fdc body=791 status=ok
// SIG undefined FUN_143cc6fdc(void)

void FUN_143cc6fdc(longlong param_1,char param_2)

{
  ulonglong uVar1;
  uint uVar2;
  void *_Src;
  undefined1 uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  uint *local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = 1;
  if (param_2 == '\0') {
    uVar3 = *(undefined1 *)(param_1 + 0x3b0);
  }
  *(undefined1 *)(param_1 + 0x3b0) = uVar3;
  if ((((*(int *)(param_1 + 0x3ac) != 0) && (uVar2 = *(uint *)(param_1 + 0x3a8), -1 < (int)uVar2))
      && ((int)uVar2 < DAT_14c9647dc)) &&
     (((plVar11 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar11 != (longlong *)0x0 && ((int)plVar11[2] == *(int *)(param_1 + 0x3ac))) &&
      (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 &&
       (plVar11 = (longlong *)*plVar11, plVar11 != (longlong *)0x0)))))) {
    uVar5 = FUN_140f26902();
    lVar6 = (**(code **)(*plVar11 + 0x288))(plVar11,uVar5);
    if (lVar6 != 0) {
      uVar5 = FUN_140f26902();
      lVar7 = FUN_144718840(lVar6,uVar5);
      if (lVar7 != 0 && lVar6 != lVar7) {
        uVar2 = *(uint *)(param_1 + 0x408);
        local_68 = lVar7;
        if (uVar2 == 0) {
          uVar16 = 1;
          uVar13 = 0;
          iVar15 = 0;
          uVar4 = 0;
        }
        else {
          puVar8 = *(uint **)(param_1 + 0x400);
          if (*(uint **)(param_1 + 0x400) == (uint *)0x0) {
            puVar8 = (uint *)(param_1 + 0x3f0);
          }
          uVar4 = *puVar8;
          if (uVar4 == 0) {
            iVar15 = uVar2 + 0x1e;
            if (-1 < (int)(uVar2 - 1)) {
              iVar15 = uVar2 - 1;
            }
            uVar13 = 0;
            uVar16 = (ulonglong)(uint)(iVar15 >> 5);
            if (iVar15 >> 5 < 1) {
              uVar16 = uVar13;
            }
            iVar15 = 0;
            do {
              if (uVar16 == uVar13) goto LAB_143cc7157;
              iVar15 = iVar15 + 0x20;
              uVar4 = puVar8[uVar13 + 1];
              uVar13 = uVar13 + 1;
            } while (uVar4 == 0);
          }
          else {
            uVar13 = 0;
            iVar15 = 0;
          }
          uVar16 = (ulonglong)(-uVar4 & uVar4);
          uVar1 = uVar16 * 2 + 1;
          lVar6 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          uVar4 = (iVar15 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
          if ((int)uVar2 <= (int)uVar4) {
            uVar4 = uVar2;
          }
        }
        if (uVar4 != uVar2) {
          uVar14 = 0xffffffff;
          local_78 = (ulonglong)uVar2;
          local_70 = param_1;
          local_60 = (uint *)(param_1 + 0x3f0);
          do {
            lVar6 = *(longlong *)(local_70 + 0x3e0);
            lVar7 = (longlong)(int)uVar4 * 0x20;
            local_58 = (void *)0x0;
            local_50 = *(int *)(lVar6 + 0x10 + lVar7);
            lVar17 = (longlong)local_50;
            _Src = *(void **)(lVar6 + 8 + lVar7);
            if (lVar17 == 0) {
              local_4c = 0;
            }
            else {
              FUN_1446dd670(&local_58,local_50,0);
              memcpy(local_58,_Src,lVar17 * 2);
              if (1 < local_50) {
                FUN_14594588a(local_68,lVar6 + lVar7,&local_58,0);
              }
            }
            if (local_58 != (void *)0x0) {
              FUN_1400020a8();
            }
            uVar14 = uVar14 & ~(uint)uVar16;
            puVar8 = *(uint **)(local_70 + 0x400);
            if (*(uint **)(local_70 + 0x400) == (uint *)0x0) {
              puVar8 = local_60;
            }
            uVar2 = *(uint *)(local_70 + 0x408);
            iVar12 = (int)uVar13;
            lVar6 = (longlong)iVar12;
            uVar4 = puVar8[lVar6] & uVar14;
            if (uVar4 == 0) {
              iVar9 = uVar2 + 0x1e;
              if (-1 < (int)(uVar2 - 1)) {
                iVar9 = uVar2 - 1;
              }
              iVar9 = iVar9 >> 5;
              iVar15 = iVar15 + 0x20;
              iVar10 = iVar9;
              if (iVar9 < iVar12) {
                iVar10 = iVar12;
              }
              if (iVar12 < iVar9) {
                lVar7 = 0;
                do {
                  uVar4 = puVar8[lVar6 + lVar7 + 1];
                  if (uVar4 != 0) {
                    uVar13 = (ulonglong)(iVar12 + (int)lVar7 + 1);
                    uVar14 = 0xffffffff;
                    goto LAB_143cc72a3;
                  }
                  iVar15 = iVar15 + 0x20;
                  lVar7 = lVar7 + 1;
                } while (iVar10 - lVar6 != lVar7);
                uVar14 = 0xffffffff;
                iVar12 = iVar10;
              }
              uVar13 = (ulonglong)(iVar12 + 1);
              uVar4 = uVar2;
            }
            else {
LAB_143cc72a3:
              uVar16 = (ulonglong)(-uVar4 & uVar4);
              uVar1 = uVar16 * 2 + 1;
              lVar6 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
                }
              }
              uVar4 = (iVar15 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
              if ((int)uVar2 <= (int)uVar4) {
                uVar4 = uVar2;
              }
            }
            param_1 = local_70;
          } while (uVar4 != (uint)local_78);
        }
LAB_143cc7157:
        *(undefined1 *)(param_1 + 0x3b0) = 0;
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cc72f4 FUN_143cc72f4 body=267 status=ok
// SIG undefined FUN_143cc72f4(void)

void FUN_143cc72f4(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x3a8) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x3a8) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar4 + 0x10) = iVar3;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar3;
      }
    }
  }
  *(int *)(param_1 + 0x3ac) = iVar2;
  if (*(char *)(param_1 + 0x3b0) == '\x01') {
    FUN_143cc6fdc(param_1,0);
  }
  local_38 = param_1;
  local_30 = param_2;
  FUN_1447cd2ec(param_1 + 0x398);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cc7400 FUN_143cc7400 body=590 status=ok
// SIG undefined FUN_143cc7400(void)

void FUN_143cc7400(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  void *_Src;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_98 [32];
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  uint *local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = param_2;
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0x20) = 0;
    uVar2 = *(uint *)(param_1 + 0x78);
    if (uVar2 == 0) {
      uVar13 = 1;
      uVar6 = 0;
      iVar8 = 0;
      uVar3 = 0;
    }
    else {
      puVar4 = *(uint **)(param_1 + 0x70);
      if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 0x60);
      }
      uVar3 = *puVar4;
      if (uVar3 == 0) {
        iVar8 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar8 = uVar2 - 1;
        }
        uVar6 = 0;
        uVar13 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar13 = uVar6;
        }
        iVar8 = 0;
        do {
          if (uVar13 == uVar6) goto LAB_143cc74bc;
          iVar8 = iVar8 + 0x20;
          uVar3 = puVar4[uVar6 + 1];
          uVar6 = uVar6 + 1;
        } while (uVar3 == 0);
      }
      else {
        uVar6 = 0;
        iVar8 = 0;
      }
      uVar13 = (ulonglong)(-uVar3 & uVar3);
      uVar1 = uVar13 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar3 = (iVar8 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      if ((int)uVar2 <= (int)uVar3) {
        uVar3 = uVar2;
      }
    }
    if (uVar3 != uVar2) {
      uVar7 = 0xffffffff;
      local_78 = param_1;
      local_70 = (ulonglong)uVar2;
      local_60 = (uint *)(param_1 + 0x60);
      do {
        lVar10 = *(longlong *)(local_78 + 0x50);
        lVar9 = (longlong)(int)uVar3 * 0x20;
        local_58 = (void *)0x0;
        local_50 = *(int *)(lVar10 + 0x10 + lVar9);
        lVar14 = (longlong)local_50;
        _Src = *(void **)(lVar10 + 8 + lVar9);
        if (lVar14 == 0) {
          local_4c = 0;
        }
        else {
          FUN_1446dd670(&local_58,local_50,0);
          memcpy(local_58,_Src,lVar14 * 2);
          if (1 < local_50) {
            FUN_1459b2546(local_68,lVar10 + lVar9,&local_58,0);
          }
        }
        if (local_58 != (void *)0x0) {
          FUN_1400020a8();
        }
        uVar7 = uVar7 & ~(uint)uVar13;
        puVar4 = *(uint **)(local_78 + 0x70);
        if (*(uint **)(local_78 + 0x70) == (uint *)0x0) {
          puVar4 = local_60;
        }
        uVar2 = *(uint *)(local_78 + 0x78);
        iVar5 = (int)uVar6;
        lVar10 = (longlong)iVar5;
        uVar3 = puVar4[lVar10] & uVar7;
        if (uVar3 == 0) {
          iVar11 = uVar2 + 0x1e;
          if (-1 < (int)(uVar2 - 1)) {
            iVar11 = uVar2 - 1;
          }
          iVar11 = iVar11 >> 5;
          iVar8 = iVar8 + 0x20;
          iVar12 = iVar11;
          if (iVar11 < iVar5) {
            iVar12 = iVar5;
          }
          if (iVar5 < iVar11) {
            lVar9 = 0;
            do {
              uVar3 = puVar4[lVar10 + lVar9 + 1];
              if (uVar3 != 0) {
                uVar6 = (ulonglong)(iVar5 + (int)lVar9 + 1);
                uVar7 = 0xffffffff;
                goto LAB_143cc75fb;
              }
              iVar8 = iVar8 + 0x20;
              lVar9 = lVar9 + 1;
            } while (iVar12 - lVar10 != lVar9);
            uVar7 = 0xffffffff;
            lVar10 = (longlong)iVar12;
          }
          uVar6 = lVar10 + 1U & 0xffffffff;
          uVar3 = uVar2;
        }
        else {
LAB_143cc75fb:
          uVar13 = (ulonglong)(-uVar3 & uVar3);
          uVar1 = uVar13 * 2 + 1;
          lVar10 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          uVar3 = (iVar8 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
          if ((int)uVar2 <= (int)uVar3) {
            uVar3 = uVar2;
          }
        }
      } while (uVar3 != (uint)local_70);
    }
  }
LAB_143cc74bc:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cc7650 FUN_143cc7650 body=131 status=ok
// SIG undefined FUN_143cc7650(void)

void FUN_143cc7650(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  
  if (((*(int *)(param_1 + 0x3ac) != 0) && (uVar1 = *(uint *)(param_1 + 0x3a8), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == *(int *)(param_1 + 0x3ac))) &&
       ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)) {
      plVar2 = (longlong *)*plVar2;
      *(undefined8 *)(param_1 + 0x3a8) = 0;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0xb8))();
      }
      goto LAB_143cc76b9;
    }
  }
  *(undefined8 *)(param_1 + 0x3a8) = 0;
LAB_143cc76b9:
  FUN_1487e5e1e(param_1);
  return;
}



// FUNCTION 143cc775e FUN_143cc775e body=738 status=ok
// SIG undefined FUN_143cc775e(void)

void FUN_143cc775e(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  undefined1 auStack_e8 [40];
  int *local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar3 = -2;
  if (-2 < *param_2) {
    iVar3 = *param_2;
  }
  *param_2 = iVar3 + 2;
  local_78 = 0;
  uStack_70 = 0;
  local_c0 = param_2;
  FUN_1449f3ff4(param_1 + 0x10,&local_78);
  if ((longlong)(int)uStack_70 != 0) {
    local_88 = 0;
    uStack_80 = 0;
    lVar5 = (longlong)(int)uStack_70 << 3;
    lVar7 = local_78;
    do {
      FUN_1400021e4(lVar7,&local_a8);
      iVar3 = (int)local_a0;
      iVar2 = ((int)local_a0 == 0) + 1;
      local_98 = local_a8;
      local_a8 = 0;
      iVar1 = local_a0._4_4_;
      uStack_90 = local_a0;
      local_a0 = 0;
      iVar4 = iVar2 + iVar3;
      if (iVar4 < iVar3) goto LAB_143cc7a33;
      if (iVar4 < 0) goto LAB_143cc7a3a;
      if (iVar1 < iVar4) {
        FUN_1446f8c06(&local_98);
      }
      FUN_1400020e8(&local_98,&DAT_149e001d8,1);
      iVar3 = (int)uStack_90 + -1;
      if ((int)uStack_90 == 0) {
        iVar3 = 0;
      }
      FUN_1400020e8(&local_88,local_98,iVar3);
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      lVar7 = lVar7 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  local_88 = 0;
  uStack_80 = 0;
  FUN_1449f3ff4(param_1 + 0x30,&local_88);
  piVar6 = local_c0;
  if ((longlong)(int)uStack_80 != 0) {
    local_98 = 0;
    uStack_90 = 0;
    lVar5 = (longlong)(int)uStack_80 << 3;
    lVar7 = local_88;
    do {
      FUN_1400021e4(lVar7,&local_b8);
      iVar3 = (int)local_b0;
      iVar2 = ((int)local_b0 == 0) + 1;
      local_a8 = local_b8;
      local_b8 = 0;
      iVar1 = local_b0._4_4_;
      local_a0 = local_b0;
      local_b0 = 0;
      iVar4 = iVar2 + iVar3;
      if (iVar4 < iVar3) {
LAB_143cc7a33:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar2);
      }
      if (iVar4 < 0) {
LAB_143cc7a3a:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar4);
      }
      if (iVar1 < iVar4) {
        FUN_1446f8c06(&local_a8);
      }
      FUN_1400020e8(&local_a8,&DAT_149e001d8,1);
      iVar3 = (int)local_a0 + -1;
      if ((int)local_a0 == 0) {
        iVar3 = 0;
      }
      FUN_1400020e8(&local_98,local_a8,iVar3);
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      piVar6 = local_c0;
      lVar7 = lVar7 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_88 != 0) {
    FUN_1400020a8(local_88);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  iVar3 = 2;
  if (2 < *piVar6) {
    iVar3 = *piVar6;
  }
  *piVar6 = iVar3 + -2;
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cc7a4e FUN_143cc7a4e body=322 status=ok
// SIG undefined FUN_143cc7a4e(void)

void FUN_143cc7a4e(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar3 = *param_2;
    if ((int)uVar3 < -1) {
      uVar3 = 0xfffffffe;
    }
    uVar6 = uVar3 + 2;
    *param_2 = uVar6;
    if ((longlong)*(int *)(param_1 + 0x18) != 0) {
      uVar3 = uVar3 + 4;
      lVar8 = (longlong)*(int *)(param_1 + 0x18) * 0xa8;
      plVar7 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x40);
      do {
        *param_2 = uVar3;
        lVar5 = plVar7[1];
        if (lVar5 == 0) {
          uVar4 = FUN_145d6456a();
          lVar5 = FUN_14477b664(uVar4);
          plVar7[1] = lVar5;
        }
        if (plVar7[2] == 0) {
          if ((lVar5 != 0) && (*plVar7 != 0)) {
            plVar1 = *(longlong **)(lVar5 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
              plVar7[2] = 0;
            }
            else {
              uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
              lVar5 = FUN_144aff482(uVar4,plVar7);
              plVar7[2] = lVar5;
              if (lVar5 != 0) goto LAB_143cc7ab9;
            }
          }
        }
        else {
LAB_143cc7ab9:
          uVar3 = *param_2;
          if ((int)uVar3 < 1) {
            uVar3 = 0;
          }
          *param_2 = uVar3;
        }
        uVar3 = *param_2;
        if ((int)plVar7[4] != *(int *)((longlong)plVar7 + 0x4c)) {
          if ((int)uVar3 < -1) {
            uVar3 = 0xfffffffe;
          }
          uVar3 = uVar3 + 2;
          if (uVar3 < 3) {
            uVar3 = 2;
          }
          uVar3 = uVar3 - 2;
        }
        if ((int)uVar3 < 3) {
          uVar3 = 2;
        }
        uVar6 = uVar3 - 2;
        *param_2 = uVar6;
        plVar7 = plVar7 + 0x15;
        lVar8 = lVar8 + -0xa8;
      } while (lVar8 != 0);
    }
    uVar3 = 2;
    if (2 < uVar6) {
      uVar3 = uVar6;
    }
    *param_2 = uVar3 - 2;
  }
  return;
}



// FUNCTION 143cc7d2a FUN_143cc7d2a body=190 status=ok
// SIG undefined FUN_143cc7d2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cc7d2a(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  _DAT_14cb735e0 = &PTR_FUN_14b3e7b10;
  _DAT_14cb736d8 = 0;
  if (DAT_14cb736d0 != 0) {
    FUN_1400020a8();
  }
  FUN_140a1bd72(&DAT_14cb73690);
  _DAT_14cb73688 = 0;
  if (DAT_14cb73680 != 0) {
    FUN_1400020a8();
  }
  FUN_140a1bdaa(&DAT_14cb73640);
  _DAT_14cb735e0 = &PTR_LAB_14b424db0;
  if (DAT_14cb8a6f8 != (undefined *)0x0) {
    puVar1 = DAT_14cb8a6f8;
    if (DAT_14cb8a6f8 == &DAT_14cb735e0) {
      puVar3 = &DAT_14cb8a6f8;
    }
    else {
      do {
        puVar2 = puVar1;
        puVar1 = *(undefined **)(puVar2 + 0x28);
        if (puVar1 == (undefined *)0x0) {
          _DAT_14cb735e0 = &PTR_LAB_14b424db0;
          return;
        }
      } while (puVar1 != &DAT_14cb735e0);
      puVar3 = (undefined8 *)(puVar2 + 0x28);
    }
    *puVar3 = DAT_14cb73608;
    DAT_14cb73608 = 0;
  }
  return;
}



// FUNCTION 143cc7de8 FUN_143cc7de8 body=190 status=ok
// SIG undefined FUN_143cc7de8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cc7de8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  _DAT_14cb73788 = &PTR_FUN_14b3e7b10;
  _DAT_14cb73880 = 0;
  if (DAT_14cb73878 != 0) {
    FUN_1400020a8();
  }
  FUN_140a1bd72(&DAT_14cb73838);
  _DAT_14cb73830 = 0;
  if (DAT_14cb73828 != 0) {
    FUN_1400020a8();
  }
  FUN_140a1bdaa(&DAT_14cb737e8);
  _DAT_14cb73788 = &PTR_LAB_14b424db0;
  if (DAT_14cb8a6f8 != (undefined *)0x0) {
    puVar1 = DAT_14cb8a6f8;
    if (DAT_14cb8a6f8 == &DAT_14cb73788) {
      puVar3 = &DAT_14cb8a6f8;
    }
    else {
      do {
        puVar2 = puVar1;
        puVar1 = *(undefined **)(puVar2 + 0x28);
        if (puVar1 == (undefined *)0x0) {
          _DAT_14cb73788 = &PTR_LAB_14b424db0;
          return;
        }
      } while (puVar1 != &DAT_14cb73788);
      puVar3 = (undefined8 *)(puVar2 + 0x28);
    }
    *puVar3 = DAT_14cb737b0;
    DAT_14cb737b0 = 0;
  }
  return;
}



// FUNCTION 143cc7ec0 FUN_143cc7ec0 body=684 status=ok
// SIG undefined FUN_143cc7ec0(void)

void FUN_143cc7ec0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14affee90;
  FUN_1487e6540(param_1,0);
  if (param_1[0x61] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5f] != 0) {
    FUN_1400020a8();
  }
  FUN_140595ef6(param_1[0x5d],*(undefined4 *)(param_1 + 0x5e));
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5a],*(undefined4 *)(param_1 + 0x5b));
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
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
  *(undefined4 *)(param_1 + 0x53) = 0;
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  FUN_14087e9d8(param_1 + 0x4a);
  *(undefined4 *)(param_1 + 0x49) = 0;
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  FUN_1487f460c(param_1 + 0x40);
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  FUN_14861f76d(param_1[0x2e],*(undefined4 *)(param_1 + 0x2f));
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_14861f76d(param_1[0x2c],*(undefined4 *)(param_1 + 0x2d));
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_1487f4642(param_1 + 0x21);
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1487f4678(param_1 + 6);
  *param_1 = &PTR_FUN_14b082a90;
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
                    /* WARNING: Could not recover jumptable at 0x000143cc8160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143cc816c FUN_143cc816c body=2801 status=ok
// SIG undefined FUN_143cc816c(void)

void FUN_143cc816c(longlong *param_1)

{
  void *pvVar1;
  longlong *plVar2;
  void **ppvVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  uint *puVar16;
  longlong *plVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  longlong *plVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong *plVar25;
  longlong *plVar26;
  uint uVar27;
  bool bVar28;
  float fVar29;
  undefined1 auStack_418 [32];
  uint local_3f8;
  void **local_3f0;
  longlong local_3e8;
  longlong *local_3e0;
  longlong *local_3d8;
  int local_3cc;
  longlong local_3c8;
  longlong *local_3c0;
  longlong *local_3b8;
  undefined2 *local_3b0;
  undefined8 local_3a8;
  longlong local_3a0;
  ulonglong uStack_398;
  undefined8 local_390;
  void *local_388;
  uint local_380;
  undefined4 local_37c;
  longlong local_378;
  undefined8 uStack_370;
  void *local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_418;
  if (*(byte *)(param_1 + 0x18) < 3) {
    FUN_1487e6dfe();
    lVar14 = param_1[5];
    if ((lVar14 != 0) && (*(char *)(lVar14 + 0x30) == '\x01')) {
      FUN_1487ea73e(param_1 + 6,lVar14 + 0x180);
      FUN_1487e6be8(param_1);
      *(undefined1 *)(param_1 + 0x18) = 3;
      local_3b0 = &DAT_14a171d50;
      local_3a0 = 0;
      uStack_398 = 0;
      local_3a8 = *(undefined8 *)(param_1[5] + 0x168);
      FUN_1406022fe();
      if ((longlong)(int)param_1[0x11] != 0) {
        plVar5 = (longlong *)param_1[0x10];
        plVar4 = plVar5 + (int)param_1[0x11];
        local_3e0 = param_1 + 0x1f;
        iVar8 = 0;
        local_3d8 = param_1;
        local_3c0 = plVar4;
        do {
          lVar14 = *plVar5;
          if (lVar14 != 0) {
            local_3c8 = param_1[5];
            *(undefined4 *)(lVar14 + 0x30) = 0;
            local_378 = 0;
            uStack_370 = 0;
            iVar7 = *(int *)(lVar14 + 0x40);
            if ((longlong)iVar7 != 0) {
              lVar12 = *(longlong *)(lVar14 + 0x38);
              lVar9 = 0;
              do {
                plVar4 = *(longlong **)(lVar12 + lVar9);
                if ((plVar4 != (longlong *)0x0) && (*plVar4 != 0)) {
                  *(longlong **)(*plVar4 + 0x270) = plVar4;
                  *(undefined2 *)((longlong)plVar4 + 0x59) = 0x100;
                }
                lVar9 = lVar9 + 8;
              } while ((longlong)iVar7 * 8 != lVar9);
            }
            iVar7 = *(int *)(lVar14 + 0x50);
            if ((longlong)iVar7 != 0) {
              lVar12 = *(longlong *)(lVar14 + 0x48);
              lVar9 = 0;
              do {
                plVar4 = *(longlong **)(lVar12 + lVar9);
                if ((plVar4 != (longlong *)0x0) && (*plVar4 != 0)) {
                  *(longlong **)(*plVar4 + 0x270) = plVar4;
                  *(undefined2 *)((longlong)plVar4 + 0x59) = 0;
                }
                lVar9 = lVar9 + 8;
              } while ((longlong)iVar7 * 8 != lVar9);
            }
            local_388 = (void *)0x0;
            local_380 = *(uint *)(lVar14 + 0x40);
            lVar12 = (longlong)(int)local_380;
            pvVar1 = *(void **)(lVar14 + 0x38);
            local_3e8 = lVar14;
            local_3cc = iVar8;
            local_3b8 = plVar5;
            if (lVar12 == 0) {
              local_37c = 0;
            }
            else {
              FUN_1487fb558(&local_388,local_380);
              memcpy(local_388,pvVar1,lVar12 << 3);
              uVar24 = local_380;
              pvVar1 = local_388;
              lVar12 = (longlong)(int)local_380;
              if (1 < lVar12) {
                memset(&local_358,0,0x2f0);
                local_368 = pvVar1;
                uStack_360 = (longlong)pvVar1 + lVar12 * 8 + -8;
                fVar29 = logf((float)(int)uVar24);
                local_358 = CONCAT44(local_358._4_4_,(int)(longlong)(fVar29 + fVar29));
                ppvVar3 = &local_368;
                do {
                  plVar5 = *ppvVar3;
                  plVar15 = ppvVar3[1];
                  iVar8 = *(int *)(ppvVar3 + 2);
                  iVar7 = (int)((ulonglong)((longlong)plVar15 - (longlong)plVar5) >> 3);
                  uVar11 = (ulonglong)(iVar7 + 1);
                  plVar4 = plVar15;
                  plVar22 = plVar5;
                  if (iVar8 != 0) {
LAB_143cc840d:
                    if (8 < (int)(uint)uVar11) {
                      uVar24 = (uint)uVar11 >> 1;
                      lVar14 = plVar5[uVar24];
                      plVar5[uVar24] = *plVar5;
                      *plVar5 = lVar14;
                      plVar25 = plVar4 + 1;
                      plVar6 = plVar5;
                      do {
                        plVar2 = plVar6 + 1;
                        plVar17 = plVar6 + 1;
                        do {
                          plVar6 = plVar17;
                          plVar26 = plVar2;
                          if (plVar4 < plVar6) break;
                          plVar2 = plVar26 + 1;
                          plVar17 = plVar6 + 1;
                        } while (*(int *)(*plVar6 + 0x68) <= *(int *)(*plVar5 + 0x68));
                        plVar2 = plVar25 + -2;
                        do {
                          plVar17 = plVar25;
                          plVar13 = plVar2;
                          plVar25 = plVar17 + -1;
                          if (plVar25 <= plVar5) break;
                          plVar2 = plVar13 + -1;
                        } while (*(int *)(*plVar5 + 0x68) <= *(int *)(*plVar25 + 0x68));
                        if (plVar25 < plVar6) goto LAB_143cc849e;
                        lVar14 = *plVar6;
                        *plVar6 = *plVar25;
                        *plVar25 = lVar14;
                      } while( true );
                    }
                    if (plVar5 < plVar4) {
                      do {
                        plVar15 = plVar5;
                        if (plVar5 + 1 <= plVar4) {
                          plVar22 = plVar5 + 1;
                          lVar14 = *plVar5;
                          do {
                            lVar12 = *plVar22;
                            plVar25 = plVar22;
                            if (*(int *)(*plVar22 + 0x68) <= *(int *)(lVar14 + 0x68)) {
                              lVar12 = lVar14;
                              plVar25 = plVar15;
                            }
                            plVar15 = plVar25;
                            plVar22 = plVar22 + 1;
                            lVar14 = lVar12;
                          } while (plVar22 <= plVar4);
                        }
                        lVar14 = *plVar15;
                        *plVar15 = *plVar4;
                        *plVar4 = lVar14;
                        plVar4 = plVar4 + -1;
                      } while (plVar5 < plVar4);
                    }
                    goto LAB_143cc86c7;
                  }
LAB_143cc8532:
                  iVar8 = (int)uVar11;
                  if (iVar8 != 0) {
                    iVar7 = (iVar7 - (iVar7 + -1 >> 0x1f)) + -1 >> 1;
                    iVar21 = iVar7;
joined_r0x000143cc8555:
                    do {
                      iVar20 = iVar7 * 2 + 1;
                      if (iVar20 < iVar8) {
                        iVar19 = iVar7 * 2 + 2;
                        if ((iVar19 < iVar8) &&
                           (*(int *)(plVar5[iVar20] + 0x68) <= *(int *)(plVar5[iVar19] + 0x68))) {
                          iVar20 = iVar19;
                        }
                        lVar14 = plVar5[iVar7];
                        if (*(int *)(lVar14 + 0x68) < *(int *)(plVar5[iVar20] + 0x68)) {
                          plVar5[iVar7] = plVar5[iVar20];
                          plVar5[iVar20] = lVar14;
                          iVar7 = iVar20;
                          goto joined_r0x000143cc8555;
                        }
                      }
                      bVar28 = iVar21 != 0;
                      iVar7 = iVar21 + -1;
                      iVar21 = iVar7;
                    } while (bVar28);
                    if (1 < iVar8) {
                      lVar14 = *plVar5;
                      *plVar5 = plVar5[uVar11 - 1];
                      plVar5[uVar11 - 1] = lVar14;
                      if (iVar8 != 2) {
                        do {
                          uVar10 = uVar11 - 1;
                          iVar8 = 0;
                          iVar21 = 1;
                          iVar7 = 0;
                          do {
                            iVar8 = iVar8 + 2;
                            iVar20 = iVar21;
                            if (((longlong)iVar8 < (longlong)uVar10) &&
                               (*(int *)(plVar5[iVar21] + 0x68) <= *(int *)(plVar5[iVar8] + 0x68)))
                            {
                              iVar20 = iVar8;
                            }
                            lVar14 = plVar5[iVar7];
                            if (*(int *)(plVar5[iVar20] + 0x68) <= *(int *)(lVar14 + 0x68)) break;
                            plVar5[iVar7] = plVar5[iVar20];
                            plVar5[iVar20] = lVar14;
                            iVar8 = iVar20 * 2;
                            iVar21 = iVar20 * 2 + 1;
                            iVar7 = iVar20;
                          } while ((longlong)iVar21 < (longlong)uVar10);
                          lVar14 = *plVar5;
                          *plVar5 = plVar5[uVar11 - 2];
                          plVar5[uVar11 - 2] = lVar14;
                          uVar11 = uVar10;
                        } while (2 < uVar10);
                      }
                    }
                  }
LAB_143cc86c7:
                  ppvVar3 = ppvVar3 + -3;
                  lVar14 = local_3e8;
                } while (&local_368 <= ppvVar3);
              }
              if (0 < (int)local_380) {
                uVar10 = (ulonglong)(local_380 - 1);
                uVar11 = (ulonglong)local_380;
                do {
                  lVar12 = *(longlong *)((longlong)local_388 + uVar11 * 8 + -8);
                  if (((lVar12 != 0) && (1 < uVar11)) && (*(char *)(lVar12 + 0x5a) != '\0')) {
                    uVar23 = 0;
                    do {
                      plVar4 = *(longlong **)((longlong)local_388 + uVar23 * 8);
                      if (((plVar4 != (longlong *)0x0) &&
                          (*(char *)((longlong)plVar4 + 0x5a) == '\x01')) &&
                         (((int)plVar4[2] == *(int *)((longlong)plVar4 + 0x3c) &&
                          ((longlong)*(int *)(lVar12 + 0x68) != 0)))) {
                        lVar9 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar12 + 0x60) + lVar9) == *plVar4) {
                            *(undefined1 *)((longlong)plVar4 + 0x5a) = 0;
                            break;
                          }
                          lVar9 = lVar9 + 8;
                        } while ((longlong)*(int *)(lVar12 + 0x68) * 8 != lVar9);
                      }
                      uVar23 = uVar23 + 1;
                    } while (uVar23 != uVar10);
                  }
                  uVar10 = uVar10 - 1;
                  bVar28 = 1 < (longlong)uVar11;
                  uVar11 = uVar11 - 1;
                } while (bVar28);
              }
            }
            FUN_1405dc634(&local_3b0,*(longlong *)(lVar14 + 8) + 0x98);
            local_358 = 0;
            uStack_350 = 0;
            local_368 = (void *)0x0;
            uStack_360 = 0;
            local_3f0 = &local_368;
            local_3f8 = 0;
            FUN_1487efbca(lVar14,local_3c8);
            FUN_1487f0748();
            if ((uint)uStack_360 != 0) {
              uVar27 = 1;
              puVar16 = (uint *)&uStack_360;
              ppvVar3 = &local_368;
              uVar24 = (uint)uStack_360;
              do {
                uVar11 = uStack_370;
                iVar8 = (int)uStack_370;
                lVar14 = (longlong)(int)uStack_370;
                uStack_370 = CONCAT44(uStack_370._4_4_,(int)uStack_370 + uVar24);
                if ((uint)(uStack_370._4_4_ - iVar8) < uVar24) {
                  FUN_1487f8e90(&local_378,uVar11 & 0xffffffff);
                }
                memcpy((void *)(lVar14 * 8 + local_378),*ppvVar3,(longlong)(int)uVar24 << 3);
                uVar11 = (ulonglong)((uVar27 & 1) << 4);
                iVar8 = *(int *)((longlong)&uStack_360 + uVar11);
                if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1456afac4(iVar8);
                }
                ppvVar3 = (void **)((longlong)&local_368 + uVar11);
                *(undefined4 *)((longlong)&uStack_360 + uVar11) = 0;
                if (*(int *)((longlong)&uStack_360 + uVar11 + 4) != iVar8) {
                  FUN_1487f5b60();
                }
                uVar24 = *puVar16;
                if ((longlong)(int)uVar24 != 0) {
                  lVar14 = 0;
                  do {
                    local_3f8 = uVar27;
                    local_3f0 = ppvVar3;
                    FUN_1487efbca(local_3e8,local_3c8,&local_3b0);
                    FUN_1487f0748();
                    lVar14 = lVar14 + 8;
                  } while ((longlong)(int)uVar24 * 8 != lVar14);
                }
                puVar16 = (uint *)((longlong)&uStack_360 + uVar11);
                uVar27 = uVar27 + 1;
                uVar24 = *puVar16;
              } while (uVar24 != 0);
            }
            lVar14 = local_3e8;
            if (0 < *(int *)(local_3e8 + 0x50)) {
              plVar4 = (longlong *)(local_3e8 + 0x48);
              lVar12 = 0;
              iVar8 = 0;
              do {
                plVar5 = *(longlong **)(*plVar4 + lVar12 * 8);
                if (plVar5 != (longlong *)0x0) {
                  if ((*plVar5 == 0) ||
                     (*(undefined8 *)(*plVar5 + 0x270) = 0,
                     *(char *)((longlong)plVar5 + 0x59) != '\x01')) {
                    iVar8 = iVar8 + 1;
                    FUN_1487efb8e(plVar5);
                    FUN_1400020a8();
                    *(undefined8 *)(*plVar4 + lVar12 * 8) = 0;
                  }
                  else {
                    *(undefined1 *)((longlong)plVar5 + 0x5a) = 1;
                  }
                }
                lVar12 = lVar12 + 1;
              } while (lVar12 < *(int *)(lVar14 + 0x50));
              if (0 < iVar8) {
                local_390 = 0;
                FUN_1487f0832();
              }
            }
            lVar12 = (longlong)(int)uStack_370;
            if (lVar12 == 0) {
              iVar8 = 0;
            }
            else {
              lVar9 = 0;
              iVar8 = 0;
              do {
                lVar18 = *(longlong *)(local_378 + lVar9);
                if ((lVar18 != 0) && (*(char *)(lVar18 + 0x40) == '\x01')) {
                  *(undefined4 *)(lVar18 + 0x278) = 0xffffffff;
                  *(undefined8 *)(lVar18 + 0x270) = 0;
                  iVar8 = iVar8 + 1;
                }
                lVar9 = lVar9 + 8;
              } while (lVar12 * 8 - lVar9 != 0);
            }
            iVar7 = *(int *)(lVar14 + 0x40);
            if ((longlong)iVar7 != 0) {
              lVar9 = *(longlong *)(lVar14 + 0x38);
              lVar18 = 0;
              do {
                plVar4 = *(longlong **)(lVar9 + lVar18);
                if ((plVar4 != (longlong *)0x0) && (*plVar4 != 0)) {
                  plVar5 = plVar4;
                  if (*(char *)((longlong)plVar4 + 0x5a) == '\0') {
                    plVar5 = (longlong *)0x0;
                  }
                  *(longlong **)(*plVar4 + 0x270) = plVar5;
                }
                lVar18 = lVar18 + 8;
              } while ((longlong)iVar7 * 8 != lVar18);
            }
            iVar7 = *(int *)(lVar14 + 0x50);
            if ((longlong)iVar7 != 0) {
              lVar14 = *(longlong *)(lVar14 + 0x48);
              lVar9 = 0;
              do {
                plVar4 = *(longlong **)(lVar14 + lVar9);
                if ((plVar4 != (longlong *)0x0) && (*plVar4 != 0)) {
                  plVar5 = plVar4;
                  if (*(char *)((longlong)plVar4 + 0x5a) == '\0') {
                    plVar5 = (longlong *)0x0;
                  }
                  *(longlong **)(*plVar4 + 0x270) = plVar5;
                }
                lVar9 = lVar9 + 8;
              } while ((longlong)iVar7 * 8 != lVar9);
            }
            iVar8 = iVar8 + (int)local_3d8[0x20];
            if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar8);
            }
            if (*(int *)((longlong)local_3d8 + 0x104) < iVar8) {
              FUN_1487f8fc6(local_3e0);
              lVar12 = (longlong)(int)uStack_370;
            }
            lVar14 = local_378;
            if ((int)uStack_370 != 0) {
              lVar9 = 0;
              do {
                lVar18 = *(longlong *)(lVar14 + lVar9);
                if ((lVar18 != 0) && (*(char *)(lVar18 + 0x40) == '\x01')) {
                  plVar4 = (longlong *)FUN_14001cc68(0x40);
                  plVar4[2] = 0;
                  plVar4[3] = 0;
                  plVar4[4] = 0;
                  plVar4[5] = 0;
                  plVar4[6] = 0;
                  plVar4[7] = 0;
                  *plVar4 = 0;
                  plVar4[1] = 0;
                  plVar4[2] = -1;
                  *(undefined2 *)((longlong)plVar4 + 0x1e) = 0xffff;
                  *(undefined2 *)(plVar4 + 4) = 0xffff;
                  *(undefined2 *)((longlong)plVar4 + 0x24) = 0xffff;
                  *(undefined2 *)(plVar4 + 5) = 0xffff;
                  *(undefined2 *)((longlong)plVar4 + 0x2c) = 0xffff;
                  *(undefined2 *)(plVar4 + 6) = 0xffff;
                  *(undefined2 *)((longlong)plVar4 + 0x34) = 0xffff;
                  *(undefined2 *)(plVar4 + 7) = 0x101;
                  plVar4[1] = *(longlong *)(lVar18 + 0x270);
                  iVar8 = (int)local_3d8[0x20];
                  *(short *)(plVar4 + 2) = (short)iVar8;
                  *plVar4 = lVar18;
                  *(uint *)(local_3d8 + 0x20) = iVar8 + 1U;
                  if (*(uint *)((longlong)local_3d8 + 0x104) < iVar8 + 1U) {
                    FUN_1487f9056(local_3e0);
                  }
                  *(longlong **)(*local_3e0 + (longlong)iVar8 * 8) = plVar4;
                  *(undefined8 *)(lVar18 + 0x270) = 0;
                }
                lVar9 = lVar9 + 8;
              } while (lVar12 * 8 != lVar9);
            }
            iVar7 = *(int *)(local_3e8 + 0x30);
            lVar14 = 0x20;
            do {
              if (*(longlong *)((longlong)&local_378 + lVar14) != 0) {
                FUN_1400020a8();
              }
              lVar14 = lVar14 + -0x10;
            } while (lVar14 != 0);
            if (local_388 != (void *)0x0) {
              FUN_1400020a8();
            }
            iVar8 = local_3cc;
            if (local_378 != 0) {
              FUN_1400020a8();
            }
            iVar8 = iVar8 + iVar7;
            plVar5 = local_3b8;
            param_1 = local_3d8;
            plVar4 = local_3c0;
          }
          plVar5 = plVar5 + 1;
        } while (plVar5 != plVar4);
      }
      (**(code **)(*param_1 + 0x70))(param_1);
      local_3b0 = &DAT_14a171d50;
      uVar11 = uStack_398 >> 0x20;
      uStack_398 = uStack_398 & 0xffffffff00000000;
      if ((int)uVar11 != 0) {
        FUN_140115c12(&local_3a0,0);
      }
      local_3a8 = 0;
      if (local_3a0 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_418) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143cc849e:
  lVar14 = *plVar5;
  *plVar5 = *plVar25;
  *plVar25 = lVar14;
  iVar8 = iVar8 + -1;
  plVar17 = plVar17 + -2;
  if ((longlong)plVar13 - (longlong)plVar22 < (longlong)plVar15 - (longlong)plVar26) {
    if (plVar6 < plVar4) {
      *ppvVar3 = plVar6;
      ppvVar3[1] = plVar4;
      *(int *)(ppvVar3 + 2) = iVar8;
      ppvVar3 = ppvVar3 + 3;
    }
    plVar26 = plVar5;
    if (plVar25 <= plVar5 + 1) goto LAB_143cc86c7;
  }
  else {
    if (plVar5 + 1 < plVar25) {
      *ppvVar3 = plVar5;
      ppvVar3[1] = plVar17;
      *(int *)(ppvVar3 + 2) = iVar8;
      ppvVar3 = ppvVar3 + 3;
    }
    plVar5 = plVar6;
    plVar13 = plVar4;
    plVar17 = plVar4;
    if (plVar4 <= plVar6) goto LAB_143cc86c7;
  }
  iVar7 = (int)((ulonglong)((longlong)plVar13 - (longlong)plVar26) >> 3);
  uVar11 = (ulonglong)(iVar7 + 1);
  plVar15 = plVar13;
  plVar4 = plVar17;
  plVar22 = plVar26;
  if (iVar8 == 0) goto LAB_143cc8532;
  goto LAB_143cc840d;
}



// FUNCTION 143cc8c60 FUN_143cc8c60 body=772 status=ok
// SIG undefined FUN_143cc8c60(void)

undefined8 FUN_143cc8c60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char **ppcVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1487e6fea();
  iVar6 = DAT_14c763890;
  if ((3 < *(byte *)(param_1 + 0xc0)) && (*(int *)(param_1 + 0x2f0) != 0)) {
    DAT_14c763890 = DAT_14c763890 + 1;
    local_48 = "Request";
    local_40._0_5_ = 7;
    uVar8 = FUN_14001a6c0(&local_48,1);
    local_48 = "AvatarAssets";
    local_40 = (longlong *)CONCAT35(local_40._5_3_,0xc);
    uVar9 = FUN_14001a6c0(&local_48,1);
    uVar10 = FUN_14050fd64();
    local_50 = 0;
    local_60 = (ulonglong)uVar9;
    local_58 = CONCAT44(iVar6,uVar8);
    FUN_14050f74e(uVar10,&local_48,&local_60,0);
    plVar1 = local_40;
    ppcVar3 = (char **)(param_1 + 0x2b8);
    if (ppcVar3 != &local_48) {
      *(char **)(param_1 + 0x2b8) = local_48;
      local_48 = (char *)0x0;
      plVar4 = *(longlong **)(param_1 + 0x2c0);
      if (local_40 != plVar4) {
        local_40 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x2c0) = plVar1;
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
      }
    }
    plVar1 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_40 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (*ppcVar3 != (char *)0x0) {
      FUN_14050f264(*ppcVar3,DAT_14c9a1ab0);
      FUN_143cca89c(param_1,ppcVar3);
      lVar5 = *(longlong *)(param_1 + 0x2b8);
      if (lVar5 != 0) {
        *(undefined1 *)(param_1 + 0xc0) = 5;
        local_48 = (char *)0x0;
        local_40 = (longlong *)((ulonglong)local_40 & 0xffffffff00000000);
        FUN_1446efa72(&local_48,0,3,0x10);
        local_40 = (longlong *)CONCAT44(local_40._4_4_,3);
        *(undefined ***)local_48 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 1;
        lVar7 = DAT_14c758608 + 1;
        if (lVar11 == 0) {
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 2;
          lVar7 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar7;
        *(longlong *)(local_48 + 0x10) = lVar11;
        *(undefined ***)local_48 = &PTR_FUN_14b3f0550;
        *(longlong *)(local_48 + 0x18) = param_1;
        *(code **)(local_48 + 0x20) = FUN_1487ef8c8;
        local_78 = 0;
        local_70 = 0;
        FUN_14009d848(&local_78,&local_48);
        FUN_140844560(lVar5,&local_68,&local_78);
        *(undefined8 *)(param_1 + 0x2c8) = local_68;
        local_88 = *(undefined8 *)(param_1 + 0x2b8);
        local_80 = *(longlong *)(param_1 + 0x2c0);
        if (local_80 != 0) {
          LOCK();
          *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
          UNLOCK();
        }
        FUN_1407c8466(uVar10,&local_88);
        if ((int)local_40 == 0) {
LAB_143cc8f16:
          if (local_48 != (char *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_48 != (char *)0x0) {
          (*(code *)**(undefined8 **)local_48)(local_48,0);
          FUN_1446efa72(&local_48,0,0,0x10);
          local_40 = (longlong *)((ulonglong)local_40 & 0xffffffff00000000);
          goto LAB_143cc8f16;
        }
        uVar10 = 1;
        goto LAB_143cc8f26;
      }
    }
  }
  uVar10 = 0;
LAB_143cc8f26:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cc8f66 FUN_143cc8f66 body=2081 status=ok
// SIG undefined FUN_143cc8f66(void)

ulonglong FUN_143cc8f66(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  void **ppvVar11;
  ulonglong uVar12;
  byte bVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_228 [32];
  undefined1 local_208;
  undefined1 local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  void *local_1e8;
  ulonglong uStack_1e0;
  longlong *local_1d8;
  longlong local_1c8;
  longlong lStack_1c0;
  undefined1 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined1 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  longlong local_188;
  longlong local_178;
  longlong lStack_170;
  undefined1 local_168;
  undefined8 local_160;
  longlong lStack_158;
  undefined1 local_150;
  void *local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  longlong local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined *local_108;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  longlong local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  longlong local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1487e6540(param_1,0);
  if (param_2 == 0) {
    cVar3 = FUN_140d4c998(param_1[2],DAT_14cb738f8,&DAT_14cb73900);
    uVar12 = 0;
    lVar14 = 0;
    if (cVar3 == '\0') goto LAB_143cc8fe9;
    bVar13 = 1;
  }
  else {
    bVar13 = *(byte *)(param_2 + 3);
    cVar3 = FUN_140d4c998(param_1[2],DAT_14cb738f8,&DAT_14cb73900);
    if (cVar3 == '\0') {
      uVar12 = 0;
      goto LAB_143cc8fe9;
    }
    lVar7 = *(longlong *)(param_2 + 0x38);
    if (*(longlong *)(param_2 + 0x28) == 0) {
      *(undefined4 *)(param_1 + 0x17) = 0;
      iVar4 = 0;
    }
    else {
      uVar2 = *(uint *)(*(longlong *)(param_2 + 0x28) + 0xc);
      *(uint *)(param_1 + 0x17) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar14 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar14 = 0;
      }
      iVar4 = *(int *)(lVar14 + 0x10);
      if (*(int *)(lVar14 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar15 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar15) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar4 = *(int *)(lVar14 + 0x10);
        bVar15 = iVar4 == 0;
        if (bVar15) {
          *(int *)(lVar14 + 0x10) = iVar10;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar15) {
          iVar4 = iVar10;
        }
      }
    }
    bVar13 = bVar13 ^ 1;
    *(int *)((longlong)param_1 + 0xbc) = iVar4;
    if (lVar7 == 0) {
      lVar14 = 0;
    }
    else {
      uVar5 = FUN_1464b041a();
      cVar3 = FUN_1448093f4(lVar7,uVar5);
      lVar14 = 0;
      if (cVar3 != '\0') {
        lVar14 = lVar7;
      }
    }
  }
  (**(code **)(*param_1 + 0x30))(param_1,lVar14);
  *(undefined1 *)(param_1 + 0x18) = 2;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  FUN_1447715ec(&local_98,&DAT_14c9485f0);
  local_70 = 0xffffffff;
  lVar14 = param_1[2];
  local_178 = 0;
  lStack_170 = 0;
  local_168 = 2;
  local_160 = 0;
  lStack_158 = 0;
  local_150 = 2;
  if (lVar14 != 0) {
    FUN_140d4cc24(lVar14,1);
    lStack_170 = *(longlong *)(lVar14 + 0x68);
    local_178 = lVar14;
    if (lStack_170 == 0) {
      lStack_158 = 0;
    }
    else {
      lStack_158 = *(longlong *)(lStack_170 + 0x48);
    }
  }
  local_160 = 0;
  local_168 = 2;
  plVar6 = (longlong *)FUN_140bddbca(&local_178,&DAT_14cb735e0,&local_98);
  if (plVar6 == (longlong *)0x0) {
LAB_143cc9190:
    plVar9 = (longlong *)0x0;
  }
  else {
    lVar14 = (**(code **)(*plVar6 + 8))(plVar6);
    lVar7 = FUN_145d642f2();
    if ((lVar7 == 0) || (*(int *)(lVar14 + 0x38) < *(int *)(lVar7 + 0x38))) goto LAB_143cc9190;
    plVar9 = (longlong *)0x0;
    if (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
        lVar7 + 0x30) {
      plVar9 = plVar6;
    }
  }
  FUN_1487e9124(param_1,plVar9);
  if (param_1[5] == 0) {
    cVar3 = (**(code **)(*param_1 + 0x38))(param_1);
    uVar12 = 0;
    if (cVar3 == '\0') {
      FUN_1487e6540(param_1,0);
    }
  }
  else {
    local_188 = param_1[5] + 400;
    local_198 = 0;
    uStack_190 = 0;
    FUN_140de9ff0(&local_178,&local_198,0);
    FUN_1487e97b4(param_1 + 6,&local_198,param_1[5] + 0x180);
    cVar3 = (**(code **)(*param_1 + 0x38))(param_1);
    if (cVar3 == '\0') {
      uVar12 = 0;
      FUN_1487e6540(param_1,0);
    }
    else {
      local_1c8 = 0;
      lStack_1c0 = 0;
      local_1b8 = 2;
      local_1b0 = 0;
      uStack_1a8 = 0;
      local_1a0 = 2;
      if ((lStack_158 != 0) && (*(longlong *)(lStack_158 + 0x58) != 0)) {
        lStack_1c0 = lStack_158;
        uStack_1a8 = *(undefined8 *)(lStack_158 + 0x48);
        local_1c8 = *(longlong *)(lStack_158 + 0x58);
      }
      FUN_140bdd98c(&local_178);
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      FUN_1447715ec(&local_c8,&DAT_14c9485f0);
      local_a0 = 0xffffffff;
      plVar6 = (longlong *)FUN_140bddbca(&local_178,&DAT_14cb73788,&local_c8);
      if (plVar6 == (longlong *)0x0) {
LAB_143cc93b8:
        local_1f8 = param_1 + 0x13;
        param_1[0x13] = 0;
LAB_143cc93cf:
        local_f8 = 0;
        local_f0 = 0;
        local_118 = 0;
        uStack_110 = 0;
        local_ec = 0xffffffff00000080;
        local_e4 = 0;
        local_d8 = 0;
        local_d0 = 0;
        ppvVar11 = &local_148;
        local_138 = 0;
        local_148 = (void *)0x0;
        uStack_140 = 0;
        local_130 = 0;
        uStack_128 = 0;
        FUN_1447715ec(ppvVar11,&DAT_14c9485f0);
        local_120 = 0xffffffff;
        plVar6 = (longlong *)FUN_140bddbca(&local_1c8,&DAT_14cb73e00,ppvVar11);
        if (plVar6 != (longlong *)0x0) {
          local_1f0 = param_1 + 0x14;
          ppvVar11 = &local_1e8;
          do {
            lVar14 = (**(code **)(*plVar6 + 8))(plVar6);
            lVar7 = FUN_1464af43e();
            if (((lVar7 == 0) || (*(int *)(lVar14 + 0x38) < *(int *)(lVar7 + 0x38))) ||
               (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
                != lVar7 + 0x30)) break;
            local_1d8 = plVar6 + 0x2e;
            local_1e8 = (void *)0x0;
            uStack_1e0 = 0;
            FUN_140de9ff0(&local_1c8,ppvVar11,1);
            if ((char)param_1[0x18] == '\x01') {
              puVar8 = (undefined8 *)FUN_14001cc68(0x20,0x10);
              puVar1 = puVar8 + 1;
              puVar8[1] = 0;
              puVar8[2] = 0;
              puVar8[3] = 0;
              *puVar8 = plVar6;
              FUN_1408348da(puVar1);
              _Src = local_1e8;
              puVar8[1] = 0;
              lVar14 = (longlong)(int)uStack_1e0;
              *(int *)(puVar8 + 2) = (int)uStack_1e0;
              if (lVar14 == 0) {
                *(undefined4 *)((longlong)puVar8 + 0x14) = 0;
              }
              else {
                FUN_1487f79f6(puVar1,uStack_1e0 & 0xffffffff);
                memcpy((void *)*puVar1,_Src,lVar14 << 3);
              }
              puVar8[3] = local_1d8;
              iVar4 = (int)param_1[0x15];
              *(uint *)(param_1 + 0x15) = iVar4 + 1U;
              if (*(uint *)((longlong)param_1 + 0xac) < iVar4 + 1U) {
                FUN_1487f7a50(local_1f0,iVar4);
              }
              *(undefined8 **)(*local_1f0 + (longlong)iVar4 * 8) = puVar8;
            }
            else {
              FUN_1487e97b4(&local_118,ppvVar11,plVar6 + 0x42);
              local_200 = 0;
              local_208 = 0;
              FUN_1487e98ce(param_1,plVar6,&local_118,0);
            }
            FUN_140bdd98c(&local_1c8);
            FUN_1408348da(ppvVar11);
            plVar6 = (longlong *)FUN_140bddbca(&local_1c8,&DAT_14cb73e00,&local_148);
          } while (plVar6 != (longlong *)0x0);
        }
        if (((*local_1f8 != 0 & bVar13) == 1) &&
           (cVar3 = (**(code **)(*param_1 + 0x48))(param_1), cVar3 == '\0')) {
          uVar12 = 0;
          FUN_1487e6540(param_1,0);
        }
        else {
          *(undefined1 *)(param_1 + 4) = 1;
          uVar12 = CONCAT71((int7)((ulonglong)ppvVar11 >> 8),1);
          if (bVar13 != 0) {
            FUN_143cc816c(param_1);
          }
        }
        if (local_130 != 0) {
          FUN_1400020a8();
        }
        local_d0 = 0;
        if (local_d8 != 0) {
          FUN_1400020a8();
        }
        FUN_1487f4678(&local_118);
      }
      else {
        lVar14 = (**(code **)(*plVar6 + 8))(plVar6);
        lVar7 = FUN_145d63e02();
        if (((lVar7 == 0) || (*(int *)(lVar14 + 0x38) < *(int *)(lVar7 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
            lVar7 + 0x30)) goto LAB_143cc93b8;
        param_1[0x13] = (longlong)plVar6;
        local_118 = 0;
        uStack_110 = 0;
        local_108 = &DAT_14cb736e0;
        FUN_140de9ff0(&local_178,&local_118);
        if ((longlong)(int)uStack_110 != 0) {
          lVar14 = 0;
          do {
            lVar7 = *(longlong *)(local_118 + lVar14);
            if ((lVar7 != 0) && (*(longlong *)(lVar7 + 4) == DAT_14cb73780)) {
              if (-1 < *(short *)(lVar7 + 0x30) || *(longlong *)(lVar7 + 0x20) != 0) {
                *(short *)(param_1 + 0x12) = *(short *)(lVar7 + 0x30);
              }
              break;
            }
            lVar14 = lVar14 + 8;
          } while ((longlong)(int)uStack_110 * 8 != lVar14);
        }
        if ((bVar13 == 0) ||
           (cVar3 = (**(code **)(*param_1 + 0x40))(param_1,param_1[0x13]), cVar3 != '\0')) {
          local_1f8 = param_1 + 0x13;
          *(undefined1 *)(param_1 + 0x18) = 1;
          FUN_1408348da(&local_118);
          goto LAB_143cc93cf;
        }
        uVar12 = 0;
        FUN_1487e6540(param_1,0);
        FUN_1408348da(&local_118);
      }
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
    }
    FUN_1408348da(&local_198);
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
LAB_143cc8fe9:
  if ((local_60 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 143cc9788 FUN_143cc9788 body=2413 status=ok
// SIG undefined FUN_143cc9788(void)

ulonglong FUN_143cc9788(longlong param_1,ushort **param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ushort **ppuVar9;
  int iVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  longlong lVar14;
  short *psVar15;
  ushort *puVar16;
  ulonglong uVar17;
  ushort *puVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  ushort *puVar22;
  short sVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  void *pvVar27;
  bool bVar28;
  float fVar29;
  undefined1 auStack_3b8 [40];
  ushort **local_390;
  longlong *local_388;
  short *local_380;
  undefined2 *local_378;
  longlong local_370;
  longlong lStack_368;
  undefined8 local_360;
  void *local_358;
  uint local_350;
  undefined4 local_34c;
  ushort *local_348;
  ushort *local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  local_358 = (void *)0x0;
  local_350 = *(uint *)(param_1 + 0x20);
  lVar26 = (longlong)(int)local_350;
  pvVar27 = *(void **)(param_1 + 0x18);
  local_388 = param_3;
  if (lVar26 == 0) {
    local_34c = 0;
  }
  else {
    FUN_14004d600(&local_358,local_350,0);
    memcpy(local_358,pvVar27,lVar26 * 2);
  }
  uVar8 = *(uint *)(param_1 + 0x40);
  iVar10 = *(int *)(param_1 + 0x68) + uVar8;
  if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar10);
  }
  plVar1 = (longlong *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != iVar10) {
    FUN_140ca8596(plVar1);
    uVar8 = *(uint *)(param_1 + 0x40);
  }
  if (uVar8 != 0) {
    iVar10 = *(int *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = iVar10 + uVar8;
    if ((uint)(*(int *)(param_1 + 0x24) - iVar10) < uVar8) {
      FUN_1405b572a(plVar1,iVar10);
    }
    memcpy((void *)((longlong)iVar10 * 2 + *(longlong *)(param_1 + 0x18)),*(void **)(param_1 + 0x38)
           ,(longlong)(int)uVar8 * 2);
  }
  local_378 = &DAT_14a171d50;
  local_370 = 0;
  lStack_368 = 0;
  local_360 = 0;
  iVar10 = *(int *)(param_1 + 0x60);
  if ((longlong)iVar10 != 0) {
    lVar26 = *(longlong *)(param_1 + 0x58);
    lVar14 = 0;
    do {
      sVar23 = *(short *)(lVar26 + lVar14);
      if (((((-1 < sVar23) && ((int)sVar23 < *(int *)(param_2 + 1))) &&
           (lVar7 = *(longlong *)(*param_2 + (longlong)(int)sVar23 * 4), lVar7 != 0)) &&
          ((*(char *)(lVar7 + 0x39) == '\x01' && (sVar23 = *(short *)(lVar7 + 0x16), -1 < sVar23))))
         && (((int)sVar23 < (int)local_388[1] &&
             (*(longlong *)(*local_388 + (longlong)(int)sVar23 * 8) != 0)))) {
        FUN_1405dc634(&local_378);
      }
      lVar14 = lVar14 + 2;
    } while ((longlong)iVar10 * 2 != lVar14);
  }
  local_390 = param_2;
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    psVar15 = *(short **)(param_1 + 0x48);
    local_380 = psVar15 + *(int *)(param_1 + 0x50);
    do {
      sVar23 = *psVar15;
      if (((-1 < sVar23) && ((int)sVar23 < *(int *)(local_390 + 1))) &&
         ((lVar26 = *(longlong *)(*local_390 + (longlong)(int)sVar23 * 4), lVar26 != 0 &&
          ((*(int *)(lVar26 + 0x18) == 0 || (*(char *)(lVar26 + 0x39) == '\x01')))))) {
        sVar23 = *(short *)(lVar26 + 0x16);
        if ((-1 < sVar23) &&
           ((((int)sVar23 < (int)local_388[1] &&
             (lVar14 = *(longlong *)(*local_388 + (longlong)(int)sVar23 * 8), lVar14 != 0)) &&
            (*(longlong *)(lVar14 + 0x10) == local_370)))) {
          uVar8 = (uint)local_360;
          if ((int)*(uint *)(lVar14 + 0x20) < (int)(uint)local_360) {
            uVar8 = *(uint *)(lVar14 + 0x20);
          }
          if (0 < (int)uVar8) {
            uVar17 = 0;
            do {
              if ((*(ulonglong *)(*(longlong *)(lVar14 + 0x18) + uVar17 * 8) &
                  *(ulonglong *)(lStack_368 + uVar17 * 8)) != 0) goto LAB_143cc9a05;
              uVar17 = uVar17 + 1;
            } while (uVar8 != uVar17);
          }
        }
        if (0 < *(short *)(lVar26 + 0x26)) {
          sVar23 = 0;
          do {
            sVar3 = *(short *)(lVar26 + 0x24);
            iVar10 = *(int *)(param_1 + 0x20);
            uVar8 = iVar10 + 1;
            *(uint *)(param_1 + 0x20) = uVar8;
            if (*(uint *)(param_1 + 0x24) < uVar8) {
              FUN_1405b572a(plVar1);
            }
            *(short *)(*plVar1 + (longlong)iVar10 * 2) = sVar3 + sVar23;
            sVar23 = sVar23 + 1;
          } while (sVar23 < *(short *)(lVar26 + 0x26));
        }
      }
LAB_143cc9a05:
      psVar15 = psVar15 + 1;
    } while (psVar15 != local_380);
  }
  uVar8 = *(uint *)(param_1 + 0x20);
  if (local_350 == uVar8) {
    if (local_350 != 0) {
      pvVar27 = (void *)*plVar1;
      iVar10 = memcmp(local_358,pvVar27,(longlong)(int)local_350 * 2);
      if (iVar10 != 0) goto LAB_143cc9a44;
    }
    uVar17 = 0;
  }
  else {
    pvVar27 = (void *)*plVar1;
LAB_143cc9a44:
    puVar2 = (undefined8 *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x30) = uVar8;
    if (*(int *)(param_1 + 0x34) == 0 && uVar8 == 0) {
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    else {
      FUN_14004d600(puVar2);
      if (uVar8 != 0) {
        memcpy((void *)*puVar2,pvVar27,(longlong)(int)uVar8 * 2);
      }
      uVar8 = *(uint *)(param_1 + 0x30);
    }
    uVar17 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if (1 < (int)uVar8) {
      puVar16 = (ushort *)*puVar2;
      memset(local_338,0,0x2f0);
      local_340 = puVar16 + ((ulonglong)uVar8 - 1);
      local_348 = puVar16;
      fVar29 = logf((float)(int)uVar8);
      local_338[0] = (int)(longlong)(fVar29 + fVar29);
      ppuVar9 = &local_348;
      do {
        puVar12 = *ppuVar9;
        puVar22 = ppuVar9[1];
        iVar10 = *(int *)(ppuVar9 + 2);
        iVar24 = (int)((ulonglong)((longlong)puVar22 - (longlong)puVar12) >> 1);
        uVar8 = iVar24 + 1;
        local_390 = ppuVar9;
        if (iVar10 != 0) {
LAB_143cc9b0c:
          if (8 < (int)uVar8) {
            uVar4 = *(ushort *)((longlong)puVar12 + (ulonglong)(uVar8 & 0xfffffffe));
            *(ushort *)((longlong)puVar12 + (ulonglong)(uVar8 & 0xfffffffe)) = *puVar12;
            *puVar12 = uVar4;
            puVar11 = puVar12;
            puVar18 = puVar22 + 1;
            do {
              puVar11 = puVar11 + 1;
              if (puVar11 <= puVar22) {
                uVar4 = *puVar12;
                do {
                  if ((int)(short)uVar4 < (int)param_4[1] && -1 < (longlong)(short)uVar4) {
                    lVar26 = *(longlong *)(*param_4 + (longlong)(short)uVar4 * 8);
                  }
                  else {
                    lVar26 = 0;
                  }
                  uVar5 = *puVar11;
                } while (((((int)param_4[1] <= (int)(short)uVar5 || (short)uVar5 < 0) ||
                          (lVar26 == 0)) ||
                         ((lVar14 = *(longlong *)(*param_4 + (ulonglong)uVar5 * 8), lVar14 == 0 ||
                          (*(short *)(lVar14 + 0x14) <= *(short *)(lVar26 + 0x14))))) &&
                        (puVar11 = puVar11 + 1, puVar11 <= puVar22));
              }
              puVar13 = puVar18 + -1;
              if (puVar12 < puVar13) {
                uVar4 = *puVar12;
                do {
                  puVar18 = puVar13;
                  uVar5 = *puVar18;
                  if ((int)(short)uVar5 < (int)param_4[1] && -1 < (short)uVar5) {
                    lVar26 = *(longlong *)(*param_4 + (ulonglong)uVar5 * 8);
                  }
                  else {
                    lVar26 = 0;
                  }
                  if ((((int)(short)uVar4 < (int)param_4[1] && -1 < (longlong)(short)uVar4) &&
                      (lVar26 != 0)) &&
                     ((lVar14 = *(longlong *)(*param_4 + (longlong)(short)uVar4 * 8), lVar14 != 0 &&
                      (*(short *)(lVar26 + 0x14) < *(short *)(lVar14 + 0x14))))) {
                    puVar13 = puVar18;
                    puVar18 = puVar18 + 1;
                    break;
                  }
                  puVar13 = puVar18 + -1;
                } while (puVar12 < puVar13);
              }
              if (puVar13 < puVar11) goto LAB_143cc9c43;
              uVar4 = *puVar11;
              *puVar11 = *puVar13;
              *puVar13 = uVar4;
              puVar18 = puVar13;
            } while( true );
          }
          puVar16 = puVar22;
          if (puVar12 < puVar22) {
            do {
              puVar11 = puVar12;
              if (puVar12 + 1 <= puVar22) {
                puVar16 = puVar12;
                puVar18 = puVar12 + 1;
                do {
                  uVar4 = *puVar16;
                  if ((int)(short)uVar4 < (int)param_4[1] && -1 < (short)uVar4) {
                    lVar26 = *(longlong *)(*param_4 + (ulonglong)uVar4 * 8);
                  }
                  else {
                    lVar26 = 0;
                  }
                  uVar4 = *puVar18;
                  puVar11 = puVar16;
                  if (((((int)(short)uVar4 < (int)param_4[1] && -1 < (short)uVar4) && (lVar26 != 0))
                      && (lVar14 = *(longlong *)(*param_4 + (ulonglong)uVar4 * 8), lVar14 != 0)) &&
                     (puVar11 = puVar18, *(short *)(lVar14 + 0x14) <= *(short *)(lVar26 + 0x14))) {
                    puVar11 = puVar16;
                  }
                  puVar18 = puVar18 + 1;
                  puVar16 = puVar11;
                } while (puVar18 <= puVar22);
              }
              uVar4 = *puVar11;
              puVar16 = (ushort *)(ulonglong)*puVar22;
              *puVar11 = *puVar22;
              *puVar22 = uVar4;
              puVar22 = puVar22 + -1;
            } while (puVar12 < puVar22);
          }
          goto LAB_143cca057;
        }
LAB_143cc9ce0:
        if (uVar8 != 0) {
          iVar10 = (iVar24 - (iVar24 + -1 >> 0x1f)) + -1 >> 1;
          iVar24 = iVar10;
joined_r0x000143cc9d05:
          do {
            iVar25 = iVar10 * 2 + 1;
            if (iVar25 < (int)uVar8) {
              iVar20 = iVar10 * 2 + 2;
              iVar6 = (int)param_4[1];
              iVar21 = iVar25;
              if (iVar20 < (int)uVar8) {
                uVar4 = puVar12[iVar20];
                if ((short)uVar4 < iVar6 && -1 < (short)uVar4) {
                  lVar26 = *(longlong *)(*param_4 + (ulonglong)uVar4 * 8);
                }
                else {
                  lVar26 = 0;
                }
                uVar4 = puVar12[iVar25];
                iVar21 = iVar20;
                if ((((short)uVar4 < iVar6 && -1 < (short)uVar4) && (lVar26 != 0)) &&
                   ((lVar14 = *(longlong *)(*param_4 + (ulonglong)uVar4 * 8), lVar14 != 0 &&
                    (iVar21 = iVar25, *(short *)(lVar14 + 0x14) <= *(short *)(lVar26 + 0x14))))) {
                  iVar21 = iVar20;
                }
              }
              uVar4 = puVar12[iVar10];
              if ((short)uVar4 < iVar6 && -1 < (short)uVar4) {
                lVar26 = *(longlong *)(*param_4 + (ulonglong)uVar4 * 8);
              }
              else {
                lVar26 = 0;
              }
              puVar16 = (ushort *)(longlong)iVar21;
              iVar25 = (int)(short)puVar12[(longlong)puVar16];
              if (((-1 < iVar25) && (iVar25 < iVar6)) &&
                 ((lVar26 != 0 &&
                  ((lVar14 = *(longlong *)(*param_4 + (longlong)iVar25 * 8), lVar14 != 0 &&
                   (*(short *)(lVar26 + 0x14) < *(short *)(lVar14 + 0x14))))))) {
                puVar12[iVar10] = puVar12[(longlong)puVar16];
                puVar12[(longlong)puVar16] = uVar4;
                iVar10 = iVar21;
                goto joined_r0x000143cc9d05;
              }
            }
            bVar28 = iVar24 != 0;
            iVar10 = iVar24 + -1;
            iVar24 = iVar10;
          } while (bVar28);
          if (1 < (int)uVar8) {
            uVar17 = (ulonglong)uVar8;
            uVar4 = *puVar12;
            *puVar12 = puVar12[uVar17 - 1];
            puVar12[uVar17 - 1] = uVar4;
            if (uVar8 != 2) {
              do {
                uVar19 = uVar17 - 1;
                iVar10 = 0;
                iVar25 = 1;
                iVar24 = 0;
                do {
                  iVar10 = iVar10 + 2;
                  iVar6 = (int)param_4[1];
                  iVar21 = iVar25;
                  if ((longlong)iVar10 < (longlong)uVar19) {
                    uVar4 = puVar12[iVar10];
                    if ((short)uVar4 < iVar6 && -1 < (short)uVar4) {
                      lVar26 = *(longlong *)(*param_4 + (ulonglong)uVar4 * 8);
                    }
                    else {
                      lVar26 = 0;
                    }
                    uVar4 = puVar12[iVar25];
                    iVar21 = iVar10;
                    if (((((short)uVar4 < iVar6 && -1 < (short)uVar4) && (lVar26 != 0)) &&
                        (lVar14 = *(longlong *)(*param_4 + (ulonglong)uVar4 * 8), lVar14 != 0)) &&
                       (iVar21 = iVar25, *(short *)(lVar14 + 0x14) <= *(short *)(lVar26 + 0x14))) {
                      iVar21 = iVar10;
                    }
                  }
                  uVar4 = puVar12[iVar24];
                  if ((short)uVar4 < iVar6 && -1 < (short)uVar4) {
                    lVar26 = *(longlong *)(*param_4 + (ulonglong)uVar4 * 8);
                  }
                  else {
                    lVar26 = 0;
                  }
                  puVar16 = (ushort *)(longlong)iVar21;
                  uVar5 = puVar12[(longlong)puVar16];
                  if ((((short)uVar5 < 0) || (iVar6 <= (short)uVar5)) ||
                     ((lVar26 == 0 ||
                      ((lVar14 = *(longlong *)(*param_4 + (longlong)(int)(short)uVar5 * 8),
                       lVar14 == 0 || (*(short *)(lVar14 + 0x14) <= *(short *)(lVar26 + 0x14)))))))
                  break;
                  puVar12[iVar24] = uVar5;
                  puVar12[(longlong)puVar16] = uVar4;
                  iVar10 = iVar21 * 2;
                  iVar25 = iVar21 * 2 + 1;
                  puVar16 = (ushort *)(longlong)iVar25;
                  iVar24 = iVar21;
                } while ((longlong)puVar16 < (longlong)uVar19);
                uVar4 = *puVar12;
                *puVar12 = puVar12[uVar17 - 2];
                puVar12[uVar17 - 2] = uVar4;
                uVar17 = uVar19;
              } while (2 < uVar19);
            }
          }
        }
LAB_143cca057:
        ppuVar9 = local_390 + -3;
      } while (&local_348 <= ppuVar9);
      uVar17 = CONCAT71((int7)((ulonglong)puVar16 >> 8),1);
      goto LAB_143cca078;
    }
  }
LAB_143cca078:
  uVar8 = local_360._4_4_;
  local_378 = &DAT_14a171d50;
  local_360 = (ulonglong)local_360._4_4_ << 0x20;
  if (uVar8 != 0) {
    FUN_140115c12(&lStack_368,0);
  }
  local_370 = 0;
  if (lStack_368 != 0) {
    FUN_1400020a8();
  }
  if (local_358 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17 & 0xffffffff;
LAB_143cc9c43:
  uVar4 = *puVar12;
  *puVar12 = *puVar13;
  *puVar13 = uVar4;
  iVar10 = iVar10 + -1;
  puVar18 = puVar18 + -2;
  puVar16 = (ushort *)((longlong)puVar22 - (longlong)puVar11);
  if ((longlong)puVar18 - (longlong)puVar12 < (longlong)puVar16) {
    if (puVar11 < puVar22) {
      *local_390 = puVar11;
      local_390[1] = puVar22;
      *(int *)(local_390 + 2) = iVar10;
      local_390 = local_390 + 3;
    }
    puVar22 = puVar18;
    if (puVar13 <= puVar12 + 1) goto LAB_143cca057;
  }
  else {
    if (puVar12 + 1 < puVar13) {
      *local_390 = puVar12;
      local_390[1] = puVar18;
      *(int *)(local_390 + 2) = iVar10;
      local_390 = local_390 + 3;
    }
    puVar12 = puVar11;
    if (puVar22 <= puVar11) goto LAB_143cca057;
  }
  puVar16 = puVar22;
  iVar24 = (int)((ulonglong)((longlong)puVar16 - (longlong)puVar12) >> 1);
  uVar8 = iVar24 + 1;
  puVar22 = puVar16;
  if (iVar10 == 0) goto LAB_143cc9ce0;
  goto LAB_143cc9b0c;
}



// FUNCTION 143cca0f8 FUN_143cca0f8 body=1905 status=ok
// SIG undefined FUN_143cca0f8(void)

void FUN_143cca0f8(longlong param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong *plVar4;
  short sVar5;
  undefined2 **ppuVar6;
  int iVar7;
  short *psVar8;
  short *psVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  short *psVar15;
  longlong lVar16;
  undefined1 auStack_158 [36];
  uint local_134;
  uint local_130;
  undefined4 local_12c;
  longlong local_128;
  longlong *local_120;
  ulonglong local_118;
  longlong local_110;
  longlong *local_108;
  uint local_fc;
  longlong *local_f8;
  longlong local_f0;
  longlong *local_e8;
  longlong local_e0;
  undefined8 *local_d8;
  short *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined2 local_b2;
  undefined2 *local_b0;
  longlong local_a8;
  longlong lStack_a0;
  ulonglong local_98;
  undefined2 *local_90;
  longlong local_88;
  longlong lStack_80;
  ulonglong local_78;
  undefined2 *local_70;
  undefined8 local_68;
  longlong lStack_60;
  ulonglong local_58;
  undefined2 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  local_70 = &DAT_14a171d50;
  local_68 = 0;
  lStack_60 = 0;
  local_58 = 0;
  iVar7 = *(int *)(param_1 + 0x10);
  local_120 = param_3;
  local_108 = param_2;
  if (iVar7 < 0) {
LAB_143cca862:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  if (*(int *)(param_1 + 0x24) < iVar7) {
    FUN_140ca8596((longlong *)(param_1 + 0x18));
    iVar7 = *(int *)(param_1 + 0x10);
    if (iVar7 < 0) goto LAB_143cca862;
  }
  if (*(int *)(param_1 + 0x54) < iVar7) {
    FUN_140ca8596(param_1 + 0x48);
    iVar7 = *(int *)(param_1 + 0x10);
    if (iVar7 < 0) goto LAB_143cca862;
  }
  if (*(int *)(param_1 + 100) < iVar7) {
    FUN_140ca8596((longlong *)(param_1 + 0x58));
    iVar7 = *(int *)(param_1 + 0x10);
  }
  plVar4 = local_108;
  local_90 = &DAT_14a171d50;
  local_88 = 0;
  lStack_80 = 0;
  local_78 = 0;
  local_b0 = &DAT_14a171d50;
  local_a8 = 0;
  lStack_a0 = 0;
  local_98 = 0;
  uVar13 = 0;
  if (iVar7 != 0) {
    local_d8 = (undefined8 *)(param_1 + 8);
    psVar8 = (short *)*local_d8;
    psVar15 = psVar8 + iVar7;
    local_110 = param_1;
    local_f8 = (longlong *)(param_1 + 0x18);
    local_f0 = param_1 + 0x48;
    local_e8 = (longlong *)(param_1 + 0x58);
    do {
      sVar5 = *psVar8;
      if ((((-1 < sVar5) && ((int)sVar5 < (int)plVar4[1])) &&
          (lVar12 = *(longlong *)(*plVar4 + (longlong)(int)sVar5 * 8), lVar12 != 0)) &&
         ((*(char *)(lVar12 + 0x38) == '\x01' && (sVar5 = *(short *)(lVar12 + 0x2e), 0 < sVar5)))) {
        lVar10 = 0;
        do {
          lVar11 = *(longlong *)(*local_120 + (*(short *)(lVar12 + 0x2c) + lVar10) * 8);
          if (lVar11 != 0) {
            ppuVar6 = &local_b0;
            if (*(int *)(lVar12 + 0x18) == 0) {
              ppuVar6 = &local_90;
            }
            FUN_1405dc634(ppuVar6,lVar11 + 0x30);
            sVar5 = *(short *)(lVar12 + 0x2e);
          }
          lVar10 = lVar10 + 1;
        } while ((int)lVar10 < (int)sVar5);
      }
      psVar8 = psVar8 + 1;
    } while (psVar8 != psVar15);
    if ((longlong)*(int *)(local_110 + 0x10) == 0) {
      uVar13 = 0;
      param_1 = local_110;
    }
    else {
      psVar15 = *(short **)(local_110 + 8);
      local_d0 = psVar15 + *(int *)(local_110 + 0x10);
      local_118 = 0;
      lVar10 = 0;
      psVar8 = local_d0;
      lVar12 = local_110;
      do {
        psVar9 = local_d0;
        param_1 = local_110;
        sVar5 = *psVar15;
        if ((((sVar5 < 0) || ((int)local_108[1] <= (int)sVar5)) ||
            ((lVar11 = *(longlong *)(*local_108 + (longlong)(int)sVar5 * 8), lVar11 == 0 ||
             (*(char *)(lVar11 + 0x38) == '\0')))) ||
           ((uVar1 = *(uint *)(lVar11 + 0x18), uVar1 == 0 && (*(short *)(lVar11 + 0x26) < 1)))) {
LAB_143cca5df:
          *psVar15 = -1;
          lVar10 = 1;
          psVar9 = psVar8;
          param_1 = lVar12;
        }
        else {
          if ((longlong)*(short *)(lVar11 + 0x2e) < 1) {
            local_12c = 0;
            local_130 = 0;
            local_134 = 0;
          }
          else {
            local_c0 = lStack_80;
            local_c8 = lStack_a0;
            lVar12 = 0;
            local_134 = 0;
            local_130 = 0;
            local_12c = 0;
            do {
              lVar16 = *(longlong *)
                        ((longlong)*(short *)(lVar11 + 0x2c) * 8 + *local_120 + lVar12 * 8);
              if (lVar16 != 0) {
                if (local_88 == *(longlong *)(lVar16 + 0x18)) {
                  uVar2 = *(uint *)(lVar16 + 0x28);
                  if ((int)(uint)local_78 < (int)*(uint *)(lVar16 + 0x28)) {
                    uVar2 = (uint)local_78;
                  }
                  if (0 < (int)uVar2) {
                    uVar13 = 0;
                    do {
                      if ((*(ulonglong *)(lStack_80 + uVar13 * 8) &
                          *(ulonglong *)(*(longlong *)(lVar16 + 0x20) + uVar13 * 8)) != 0) {
                        local_12c = (undefined4)CONCAT71((int7)(uVar13 >> 8),1);
                        break;
                      }
                      uVar13 = uVar13 + 1;
                    } while (uVar2 != uVar13);
                  }
                }
                if (local_a8 == *(longlong *)(lVar16 + 0x18)) {
                  uVar2 = *(uint *)(lVar16 + 0x28);
                  if ((int)(uint)local_98 < (int)*(uint *)(lVar16 + 0x28)) {
                    uVar2 = (uint)local_98;
                  }
                  if (0 < (int)uVar2) {
                    uVar13 = 0;
                    do {
                      if ((*(ulonglong *)(lStack_a0 + uVar13 * 8) &
                          *(ulonglong *)(*(longlong *)(lVar16 + 0x20) + uVar13 * 8)) != 0) {
                        local_130 = (uint)CONCAT71((int7)(uVar13 >> 8),1);
                        break;
                      }
                      uVar13 = uVar13 + 1;
                    } while (uVar2 != uVar13);
                  }
                }
                if ((*(longlong *)(lVar16 + 0x38) != 0) && ((longlong)*(int *)(lVar16 + 0x48) != 0))
                {
                  lVar14 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar16 + 0x40) + lVar14) != 0) {
                      local_134 = (uint)CONCAT71((int7)((ulonglong)lVar14 >> 8),1);
                      break;
                    }
                    lVar14 = lVar14 + 8;
                  } while ((longlong)*(int *)(lVar16 + 0x48) * 8 != lVar14);
                }
              }
              lVar12 = lVar12 + 1;
            } while (lVar12 != *(short *)(lVar11 + 0x2e));
          }
          psVar8 = psVar9;
          lVar12 = param_1;
          local_128 = lVar11;
          local_fc = uVar1;
          local_e0 = lVar10;
          if (uVar1 == 0) {
            if ((char)local_12c != '\0') goto LAB_143cca5df;
            if ((char)local_130 == '\0') {
              iVar7 = *(int *)(local_110 + 0x20);
              *(uint *)(local_110 + 0x20) = iVar7 + 1U;
              if (*(uint *)(local_110 + 0x24) < iVar7 + 1U) {
                FUN_1405b572a(local_f8,iVar7);
              }
              *(undefined2 *)(*local_f8 + (longlong)iVar7 * 2) = *(undefined2 *)(local_128 + 0x10);
              *(short *)(local_128 + 0x1c) = *(short *)(local_128 + 0x1c) + 1;
              local_118 = (ulonglong)(uint)((int)local_118 + (int)*(short *)(local_128 + 0x26));
            }
            else {
              iVar7 = *(int *)(local_110 + 0x50);
              *(uint *)(local_110 + 0x50) = iVar7 + 1U;
              if (*(uint *)(local_110 + 0x54) < iVar7 + 1U) {
                FUN_1405b572a(local_f0,iVar7);
              }
              *(undefined2 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar7 * 2) =
                   *(undefined2 *)(local_128 + 0x10);
              *(short *)(local_128 + 0x1c) = *(short *)(local_128 + 0x1c) + 1;
              *(int *)(param_1 + 0x68) =
                   *(int *)(param_1 + 0x68) + (int)*(short *)(local_128 + 0x26);
              sVar5 = *(short *)(local_128 + 0x2e);
              lVar12 = local_128;
              if (0 < sVar5) {
                lVar11 = 0;
                do {
                  lVar16 = *(longlong *)(*local_120 + (*(short *)(lVar12 + 0x2c) + lVar11) * 8);
                  if (lVar16 != 0) {
                    FUN_1405dc634(&local_70,lVar16 + 0x10);
                    sVar5 = *(short *)(local_128 + 0x2e);
                    lVar12 = local_128;
                  }
                  lVar11 = lVar11 + 1;
                } while ((int)lVar11 < (int)sVar5);
              }
              *(undefined2 *)(lVar12 + 0x16) = 0xfffd;
            }
          }
          else {
            if ((*(short *)(lVar11 + 0x26) < 1) || ((char)local_12c != '\0')) {
              bVar3 = false;
            }
            else {
              *(undefined2 *)(lVar11 + 0x16) = 0xfffd;
              *(uint *)(local_110 + 0x6c) = *(uint *)(local_110 + 0x6c) | uVar1;
              iVar7 = *(int *)(local_110 + 0x50);
              *(uint *)(local_110 + 0x50) = iVar7 + 1U;
              if (*(uint *)(local_110 + 0x54) < iVar7 + 1U) {
                FUN_1405b572a(local_f0,iVar7);
              }
              *(undefined2 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar7 * 2) =
                   *(undefined2 *)(local_128 + 0x10);
              *(short *)(local_128 + 0x1c) = *(short *)(local_128 + 0x1c) + 1;
              *(int *)(param_1 + 0x68) =
                   *(int *)(param_1 + 0x68) + (int)*(short *)(local_128 + 0x26);
              bVar3 = true;
              lVar11 = local_128;
              if (((local_130 & 1) != 0) && (sVar5 = *(short *)(local_128 + 0x2e), 0 < sVar5)) {
                lVar16 = 0;
                do {
                  lVar14 = *(longlong *)(*local_120 + (*(short *)(lVar11 + 0x2c) + lVar16) * 8);
                  if (lVar14 != 0) {
                    FUN_1405dc634(&local_70,lVar14 + 0x10);
                    sVar5 = *(short *)(local_128 + 0x2e);
                    lVar11 = local_128;
                  }
                  lVar16 = lVar16 + 1;
                } while ((int)lVar16 < (int)sVar5);
              }
            }
            if ((local_134 & 1) == 0) {
              if (!bVar3) goto LAB_143cca5df;
            }
            else {
              *(undefined2 *)(lVar11 + 0x16) = 0xfffd;
              *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | *(uint *)(lVar11 + 0x18);
              iVar7 = *(int *)(param_1 + 0x60);
              *(uint *)(param_1 + 0x60) = iVar7 + 1U;
              if (*(uint *)(param_1 + 100) < iVar7 + 1U) {
                FUN_1405b572a(local_e8,iVar7);
                lVar11 = local_128;
              }
              *(undefined2 *)(*local_e8 + (longlong)iVar7 * 2) = *(undefined2 *)(lVar11 + 0x10);
            }
          }
        }
        psVar15 = psVar15 + 1;
        psVar8 = psVar9;
        lVar12 = param_1;
      } while (psVar15 != psVar9);
      if (lVar10 != 0) {
        local_50 = &local_b2;
        local_b2 = 0xffff;
        FUN_147cd202a(local_d8);
      }
      uVar13 = local_118;
      if ((int)local_118 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(local_118 & 0xffffffff);
      }
    }
  }
  if (*(int *)(param_1 + 0x44) < (int)uVar13) {
    FUN_140ca8596(param_1 + 0x38,uVar13 & 0xffffffff);
  }
  local_b0 = &DAT_14a171d50;
  uVar13 = local_98 >> 0x20;
  local_98 = local_98 & 0xffffffff00000000;
  if ((int)uVar13 != 0) {
    FUN_140115c12(&lStack_a0,0);
  }
  local_a8 = 0;
  if (lStack_a0 != 0) {
    FUN_1400020a8();
  }
  local_90 = &DAT_14a171d50;
  uVar13 = local_78 >> 0x20;
  local_78 = local_78 & 0xffffffff00000000;
  if ((int)uVar13 != 0) {
    FUN_140115c12(&lStack_80,0);
  }
  local_88 = 0;
  if (lStack_80 != 0) {
    FUN_1400020a8();
  }
  local_70 = &DAT_14a171d50;
  uVar13 = local_58 >> 0x20;
  local_58 = local_58 & 0xffffffff00000000;
  if ((int)uVar13 != 0) {
    FUN_140115c12(&lStack_60,0);
  }
  local_68 = 0;
  if (lStack_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cca86b FUN_143cca86b body=49 status=ok
// SIG undefined FUN_143cca86b(void)

void FUN_143cca86b(void)

{
  FUN_1487fa349(DAT_14cb73ca8,DAT_14cb73cb0);
  if (DAT_14cb73ca8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143cca89c FUN_143cca89c body=471 status=ok
// SIG undefined FUN_143cca89c(void)

void FUN_143cca89c(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar5 = (longlong *)*param_2;
  if ((plVar5 != (longlong *)0x0) && (3 < *(byte *)(param_1 + 0x18))) {
    local_58 = 0;
    uStack_50 = 0;
    if ((longlong)(int)param_1[0x5e] != 0) {
      puVar6 = (undefined8 *)param_1[0x5d];
      puVar8 = puVar6 + (longlong)(int)param_1[0x5e] * 5;
      local_88 = param_2;
      do {
        local_80 = *puVar6;
        local_78 = *(undefined4 *)(puVar6 + 1);
        uStack_74 = *(undefined4 *)((longlong)puVar6 + 0xc);
        uStack_70 = *(undefined4 *)(puVar6 + 2);
        uStack_6c = *(undefined4 *)((longlong)puVar6 + 0x14);
        local_68 = (void *)0x0;
        local_60 = *(int *)(puVar6 + 4);
        lVar9 = (longlong)local_60;
        pvVar2 = (void *)puVar6[3];
        if (lVar9 == 0) {
          local_5c = 0;
        }
        else {
          FUN_1446dd670(&local_68,local_60,0);
          memcpy(local_68,pvVar2,lVar9 * 2);
        }
        uVar3 = uStack_50;
        lVar9 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_1406f071e(&local_58,uVar3 & 0xffffffff);
        }
        pvVar2 = local_68;
        lVar9 = lVar9 * 0x20;
        puVar1 = (undefined4 *)(local_58 + lVar9);
        *puVar1 = local_78;
        puVar1[1] = uStack_74;
        puVar1[2] = uStack_70;
        puVar1[3] = uStack_6c;
        *(undefined8 *)(local_58 + 0x10 + lVar9) = 0;
        lVar7 = (longlong)local_60;
        *(int *)(local_58 + 0x18 + lVar9) = local_60;
        if (lVar7 == 0) {
          *(undefined4 *)(local_58 + lVar9 + 0x1c) = 0;
        }
        else {
          puVar10 = (undefined8 *)(lVar9 + local_58 + 0x10);
          FUN_1446dd670(puVar10,local_60,0);
          memcpy((void *)*puVar10,pvVar2,lVar7 * 2);
        }
        if (local_68 != (void *)0x0) {
          FUN_1400020a8();
        }
        puVar6 = puVar6 + 5;
      } while (puVar6 != puVar8);
      plVar5 = (longlong *)*local_88;
      param_2 = local_88;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5,&local_58,0,0);
    (**(code **)(*param_1 + 0x88))(param_1,param_2);
    FUN_140861e20(local_58,uStack_50 & 0xffffffff);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ccaa74 FUN_143ccaa74 body=138 status=ok
// SIG undefined FUN_143ccaa74(void)

void FUN_143ccaa74(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x40);
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
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
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
                    /* WARNING: Could not recover jumptable at 0x000143ccaaf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143ccaafe FUN_143ccaafe body=1234 status=ok
// SIG undefined FUN_143ccaafe(void)

void FUN_143ccaafe(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  byte bVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  byte bVar16;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar12 = FUN_1487f096a();
  if (lVar12 == 0) goto LAB_143ccab38;
  lVar15 = *param_2;
  if (lVar15 == 0) {
    local_80 = *(longlong *)(param_1 + 0x38);
    FUN_1487e64b2(&local_70,lVar12 + 0x20);
    plVar1 = local_68;
    *param_2 = local_70;
    local_70 = 0;
    plVar5 = (longlong *)param_2[1];
    if (local_68 == plVar5) {
LAB_143ccac09:
      plVar5 = local_68;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_68 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_68)(local_68);
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
    else {
      local_68 = (longlong *)0x0;
      param_2[1] = (longlong)plVar1;
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
        goto LAB_143ccac09;
      }
    }
    lVar15 = *param_2;
    if (lVar15 == 0) {
      *(undefined1 *)(lVar12 + 0x18) = 1;
      if ((*(longlong *)(param_1 + 0x68) != 0) &&
         (lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x148), lVar15 != 0)) {
        FUN_140705884(lVar15,lVar12);
      }
      if (*(longlong *)(param_1 + 0x10) != 0) {
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        plVar5 = *(longlong **)(param_1 + 0x18);
        if (plVar5 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x18) = 0;
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
        FUN_14020fad6(param_1 + 0x20,&DAT_149dfb77a);
      }
      if (*(longlong *)(param_1 + 0x38) != 0) {
        *(undefined8 *)(param_1 + 0x58) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        plVar5 = *(longlong **)(param_1 + 0x40);
        if (plVar5 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x40) = 0;
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
        FUN_14020fad6(param_1 + 0x48,&DAT_149dfb77a);
      }
      if (local_80 != 0) {
        *(undefined2 *)(param_1 + 0x60) = 3;
      }
      goto LAB_143ccab38;
    }
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    plVar5 = *(longlong **)(param_1 + 0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
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
    *(undefined8 *)(param_1 + 0x30) = 0;
    FUN_14020fad6(param_1 + 0x20,&DAT_149dfb77a);
    lVar15 = *param_2;
  }
  lVar14 = param_2[1];
  if (lVar14 != 0) {
    LOCK();
    *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x18);
  *(longlong *)(param_1 + 0x10) = lVar15;
  *(longlong *)(param_1 + 0x18) = lVar14;
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
  iVar11 = *(int *)(lVar12 + 0x28) + -1;
  if (*(int *)(lVar12 + 0x28) == 0) {
    iVar11 = 0;
  }
  FUN_1402980a2(param_1 + 0x20,*(undefined8 *)(lVar12 + 0x20),iVar11);
  local_70 = CONCAT71(local_70._1_7_,4);
  FUN_1487e6d6c(*(undefined8 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 4) = 0;
  lVar15 = *(longlong *)(param_1 + 0x68);
  if ((((((lVar15 == 0) || (*(longlong **)(lVar15 + 0x140) == (longlong *)0x0)) ||
        (*(int *)(lVar15 + 0x13c) == 0)) ||
       ((uVar4 = *(uint *)(lVar15 + 0x138), (int)uVar4 < 0 || (DAT_14c9647dc <= (int)uVar4)))) ||
      ((lVar14 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar14 == 0 ||
       ((*(int *)(lVar14 + 0x10) != *(int *)(lVar15 + 0x13c) ||
        ((*(uint *)(lVar14 + 8) & 0x10200000) != 0)))))) ||
     (cVar8 = (**(code **)(**(longlong **)(lVar15 + 0x140) + 0x40))(), cVar8 == '\0')) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar12 + 0x30);
    FUN_1487ec1d6(*(undefined8 *)(param_1 + 0x10),lVar12 + 0x38);
  }
  else {
    if (((param_3 != 0) && (local_78 = DAT_14cb73f40, DAT_14cb73f40 != 0)) &&
       ((longlong)*(int *)(param_3 + 0x30) != 0)) {
      lVar15 = *(longlong *)(param_3 + 0x28);
      lVar14 = (longlong)*(int *)(param_3 + 0x30) * 0x38;
      bVar16 = 0;
      do {
        local_80 = lVar14;
        if ((*(int *)(lVar15 + 8) == 0) || (*(int *)(lVar15 + 0xc) == 0)) {
          uVar13 = 0;
        }
        else {
          uVar13 = 0;
          if (*(int *)(lVar15 + 8) != DAT_14c948000) {
            uVar13 = FUN_1487fdc08(local_78,lVar15 + 8);
          }
        }
        uVar6 = *(undefined8 *)(param_1 + 0x10);
        uVar3 = *(undefined4 *)(lVar15 + 0x30);
        uVar10 = FUN_1487ebd3a(uVar6,uVar13,lVar15);
        bVar9 = FUN_1487ec10a(uVar6,uVar10,uVar3,0);
        bVar16 = bVar16 | bVar9;
        lVar15 = lVar15 + 0x38;
        lVar14 = local_80 + -0x38;
      } while (lVar14 != 0);
      if ((bVar16 & 1) != 0) {
        FUN_1487ebfa0(*(undefined8 *)(param_1 + 0x10));
      }
    }
    lVar15 = *(longlong *)(param_1 + 0x10);
    FUN_1487ec096((longlong *)(lVar12 + 0x38),*(undefined4 *)(lVar15 + 0x2a0));
    iVar11 = *(int *)(lVar15 + 0x2a0);
    if (0 < iVar11) {
      lVar14 = 0;
      do {
        lVar7 = *(longlong *)(*(longlong *)(lVar15 + 0x1c0) + lVar14 * 8);
        if (lVar7 != 0) {
          *(undefined2 *)(*(longlong *)(lVar12 + 0x38) + lVar14 * 2) = *(undefined2 *)(lVar7 + 0x28)
          ;
          iVar11 = *(int *)(lVar15 + 0x2a0);
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 < iVar11);
    }
    *(undefined4 *)(lVar12 + 0x30) = *(undefined4 *)(lVar15 + 0x2a8);
    if ((*(longlong *)(param_1 + 0x68) != 0) &&
       (lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x148), lVar15 != 0)) {
      FUN_140705884(lVar15,lVar12);
    }
  }
  if (param_4 != '\0') {
    FUN_1487f0e78(param_1);
  }
LAB_143ccab38:
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
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ccafd2 FUN_143ccafd2 body=364 status=ok
// SIG undefined FUN_143ccafd2(void)

void FUN_143ccafd2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    plVar3 = *(longlong **)(param_1 + 0x40);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x40) = 0;
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
    FUN_14020fad6(param_1 + 0x48,&DAT_149dfb77a);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  lVar5 = *(longlong *)(param_1 + 0x18);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  *(longlong *)(param_1 + 0x40) = lVar5;
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
  iVar6 = *(int *)(param_1 + 0x28) + -1;
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar6 = 0;
  }
  FUN_1402980a2(param_1 + 0x48,*(undefined8 *)(param_1 + 0x20),iVar6);
  *(undefined8 *)(param_1 + 0x10) = 0;
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
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
  FUN_14020fad6(param_1 + 0x20,&DAT_149dfb77a);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1487f0acc(*(longlong *)(param_1 + 0x38) + 0x2d0,&local_28,param_1,FUN_1487f0bc4);
    *(undefined8 *)(param_1 + 0x58) = local_28;
  }
  *(undefined2 *)(param_1 + 0x60) = 3;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_1487f0d88(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ccb140 FUN_143ccb140 body=1035 status=ok
// SIG undefined FUN_143ccb140(void)

longlong * FUN_143ccb140(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  void *_Src;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  longlong *local_c8;
  undefined1 local_c0;
  undefined7 uStack_bf;
  longlong *local_b8;
  undefined **local_b0;
  undefined1 local_a8;
  longlong *local_a0;
  char local_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined ***local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_4 == (longlong *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_f8);
  }
  lVar7 = *param_4;
  if ((lVar7 != 0) && (lVar3 = (longlong)*(int *)(lVar7 + 0x28), 0 < lVar3)) {
    plVar6 = *(longlong **)(lVar7 + 0x20);
    do {
      if (*plVar6 == *param_3) goto LAB_143ccb1a5;
      plVar6 = plVar6 + 0xb;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  plVar6 = (longlong *)0x0;
LAB_143ccb1a5:
  local_58 = &local_b0;
  local_b0 = &PTR_FUN_14b3efd20;
  local_98 = '\0';
  local_a8 = (undefined1)param_4[3];
  local_90 = 0x1010100;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0xf;
  local_68 = 0;
  local_60 = 0;
  local_8c = DAT_14cb738f8;
  local_a0 = plVar6;
  FUN_1401d7e14(&local_88,&DAT_14cb73900);
  *param_1 = 0;
  param_1[1] = 0;
  if ((int)param_2[1] < 2) {
    if (plVar6 == (longlong *)0x0) goto LAB_143ccb3a2;
    if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
      local_98 = '\x01';
    }
    lVar7 = 0;
  }
  else {
    FUN_141173b16(&local_c0,param_2,&local_90,0);
    plVar5 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      *param_1 = CONCAT71(uStack_bf,local_c0);
      plVar8 = (longlong *)param_1[1];
      if (plVar8 != (longlong *)0x0) {
        param_1[1] = 0;
LAB_143ccb299:
        LOCK();
        plVar5 = plVar8 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar4 = *piVar1;
          UNLOCK();
joined_r0x000143ccb2cb:
          if (iVar4 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
      UNLOCK();
      *param_1 = CONCAT71(uStack_bf,local_c0);
      plVar8 = (longlong *)param_1[1];
      if (local_b8 == plVar8) {
        LOCK();
        plVar8 = local_b8 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_b8)(local_b8);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar4 = *piVar1;
          UNLOCK();
          plVar8 = plVar5;
          goto joined_r0x000143ccb2cb;
        }
      }
      else {
        param_1[1] = (longlong)local_b8;
        if (plVar8 != (longlong *)0x0) goto LAB_143ccb299;
      }
    }
    plVar5 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_b8 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    lVar7 = *param_1;
  }
  if (plVar6 == (longlong *)0x0 || lVar7 != 0) {
LAB_143ccb312:
    if (((lVar7 != 0) && (*(char *)(lVar7 + 0xc0) == '\x01')) && (*(longlong *)(lVar7 + 0x98) != 0))
    {
      local_c0 = 2;
      cVar2 = FUN_1487e6d6c(lVar7);
      if ((cVar2 == '\0') || (cVar2 = FUN_1409e3c80(lVar7,param_2,0), cVar2 == '\0')) {
        *param_1 = 0;
        plVar6 = (longlong *)param_1[1];
        if (plVar6 == (longlong *)0x0) goto LAB_143ccb3a2;
        param_1[1] = 0;
        LOCK();
        plVar5 = plVar6 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
    }
  }
  else if (local_98 == '\x01') {
    FUN_1487fbed8(plVar6 + 8,&local_c0);
    plVar5 = (longlong *)CONCAT71(uStack_bf,local_c0);
    if (plVar5 == (longlong *)0x0) {
      if (plVar6 + 6 == param_2) goto LAB_143ccb44e;
      iVar4 = (int)plVar6[7];
      _Src = (void *)plVar6[6];
      *(int *)(param_2 + 1) = iVar4;
      if (iVar4 != 0 || *(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1446dd670(param_2,iVar4);
        if (iVar4 != 0) {
          memcpy((void *)*param_2,_Src,(longlong)iVar4 * 2);
        }
        goto LAB_143ccb44e;
      }
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      (**(code **)(*plVar5 + 0x10))(plVar5,param_2,plVar6,param_4);
LAB_143ccb44e:
      iVar4 = (int)param_2[1];
    }
    if (1 < iVar4) {
      local_a0 = (longlong *)0x0;
      FUN_141173b16(&local_d0,param_2,&local_90,0);
      plVar6 = local_c8;
      if (local_c8 == (longlong *)0x0) {
        *param_1 = local_d0;
        plVar5 = (longlong *)param_1[1];
        if (plVar5 != (longlong *)0x0) {
          param_1[1] = 0;
LAB_143ccb4b7:
          LOCK();
          plVar6 = plVar5 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar4 = *piVar1;
            UNLOCK();
joined_r0x000143ccb4f0:
            if (iVar4 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
        UNLOCK();
        *param_1 = local_d0;
        plVar5 = (longlong *)param_1[1];
        if (local_c8 == plVar5) {
          LOCK();
          plVar5 = local_c8 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*local_c8)(local_c8);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar4 = *piVar1;
            UNLOCK();
            plVar5 = plVar6;
            goto joined_r0x000143ccb4f0;
          }
        }
        else {
          param_1[1] = (longlong)local_c8;
          if (plVar5 != (longlong *)0x0) goto LAB_143ccb4b7;
        }
      }
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_c8 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_c8)(local_c8);
          LOCK();
          piVar1 = (int *)((longlong)local_c8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_c8 + 0x10))(local_c8);
          }
        }
      }
    }
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_b8 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)local_b8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_b8 + 0x10))(local_b8);
        }
      }
    }
    lVar7 = *param_1;
    goto LAB_143ccb312;
  }
  if (*param_1 != 0) {
    *(undefined8 *)(*param_1 + 0xb0) = 0;
  }
LAB_143ccb3a2:
  FUN_14151bfc4(&local_90);
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ccb552 FUN_143ccb552 body=851 status=ok
// SIG undefined FUN_143ccb552(void)

void FUN_143ccb552(char *param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint *puVar15;
  longlong *plVar16;
  int iVar17;
  uint uVar18;
  undefined1 auStack_a8 [32];
  char *local_88;
  longlong *local_78;
  uint *local_70;
  longlong local_68;
  char local_59;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = param_2;
  local_68 = param_3;
  if ((param_2 != (longlong *)0x0) && (*param_1 == '\0')) {
    *param_1 = '\x01';
    puVar15 = (uint *)(param_1 + 0x18);
    iVar3 = *(int *)(param_1 + 0x30);
    if (iVar3 == 0) {
      uVar12 = 1;
      uVar13 = 0;
      iVar17 = 0;
      iVar5 = 0;
    }
    else {
      puVar6 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar6 = puVar15;
      }
      uVar18 = *puVar6;
      if (uVar18 == 0) {
        iVar5 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar5 = iVar3 + -1;
        }
        uVar13 = 0;
        uVar12 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar12 = uVar13;
        }
        iVar17 = 0;
        do {
          if (uVar12 == uVar13) goto LAB_143ccb613;
          iVar17 = iVar17 + 0x20;
          uVar18 = puVar6[uVar13 + 1];
          uVar13 = uVar13 + 1;
        } while (uVar18 == 0);
      }
      else {
        uVar13 = 0;
        iVar17 = 0;
      }
      uVar12 = (ulonglong)(-uVar18 & uVar18);
      uVar2 = uVar12 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar5 = (iVar17 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar3 <= iVar5) {
        iVar5 = iVar3;
      }
    }
    if (iVar5 != iVar3) {
      uVar18 = 0xffffffff;
      local_70 = puVar15;
      do {
        plVar16 = (longlong *)((longlong)iVar5 * 0x48 + *(longlong *)(param_1 + 8));
        lVar14 = *local_78;
        if (lVar14 == 0) {
LAB_143ccb691:
          plVar11 = plVar16 + 3;
          FUN_143ccb140(&local_58,plVar11,plVar16,local_78);
          if (local_68 != 0) {
            local_59 = '\0';
            local_88 = &local_59;
            FUN_1487fc03e(local_68,local_78[2],*plVar16,&local_58);
            if (local_59 == '\x01') {
              if (local_58 == 0) {
                *(undefined4 *)(plVar16 + 4) = 0;
                if (*(int *)((longlong)plVar16 + 0x24) != 0) {
                  FUN_1446f8c06(plVar11,0);
                }
              }
              else {
                FUN_1409e3c80(local_58,plVar11,0);
              }
            }
          }
          if (local_58 == 0) {
            lVar14 = 0;
          }
          else {
            local_59 = '\x04';
            FUN_1487e6d6c(local_58,&local_59);
            *(undefined8 *)(local_58 + 0xb0) = 0;
            lVar14 = local_58;
          }
          if (local_50 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_50 + 1) = (int)local_50[1] + 1;
            UNLOCK();
          }
          plVar11 = (longlong *)plVar16[2];
          plVar16[1] = lVar14;
          plVar16[2] = (longlong)local_50;
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar16 = plVar11 + 1;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)*plVar16 == 0) {
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
          plVar16 = local_50;
          puVar15 = local_70;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_50 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar1 = (int *)((longlong)plVar16 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              puVar15 = local_70;
              if (*piVar1 == 0) {
                (**(code **)(*plVar16 + 0x10))(plVar16);
                puVar15 = local_70;
              }
            }
          }
        }
        else {
          lVar9 = (longlong)*(int *)(lVar14 + 0x28);
          if (0 < lVar9) {
            plVar11 = *(longlong **)(lVar14 + 0x20);
            do {
              if (*plVar11 == *plVar16) {
                if (plVar11 != (longlong *)0x0) goto LAB_143ccb691;
                break;
              }
              plVar11 = plVar11 + 0xb;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
          }
          if (*(char *)(lVar14 + 0x30) != '\0') goto LAB_143ccb691;
          *(undefined1 *)((longlong)plVar16 + 0x2c) = 1;
        }
        uVar18 = uVar18 & ~(uint)uVar12;
        puVar6 = *(uint **)(param_1 + 0x28);
        if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
          puVar6 = puVar15;
        }
        iVar4 = *(int *)(param_1 + 0x30);
        iVar5 = (int)uVar13;
        lVar14 = (longlong)iVar5;
        uVar10 = puVar6[lVar14] & uVar18;
        if (uVar10 == 0) {
          iVar7 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar7 = iVar4 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar17 = iVar17 + 0x20;
          iVar8 = iVar7;
          if (iVar7 < iVar5) {
            iVar8 = iVar5;
          }
          if (iVar5 < iVar7) {
            lVar9 = 0;
            do {
              uVar10 = puVar6[lVar14 + lVar9 + 1];
              if (uVar10 != 0) {
                uVar13 = (ulonglong)(iVar5 + (int)lVar9 + 1);
                uVar18 = 0xffffffff;
                goto LAB_143ccb7c1;
              }
              iVar17 = iVar17 + 0x20;
              lVar9 = lVar9 + 1;
            } while (iVar8 - lVar14 != lVar9);
            uVar18 = 0xffffffff;
            iVar5 = iVar8;
          }
          uVar13 = (ulonglong)(iVar5 + 1);
          puVar15 = local_70;
          iVar5 = iVar4;
        }
        else {
LAB_143ccb7c1:
          uVar12 = (ulonglong)(-uVar10 & uVar10);
          uVar2 = uVar12 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar5 = (iVar17 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar5) {
            iVar5 = iVar4;
          }
        }
      } while (iVar5 != iVar3);
    }
  }
LAB_143ccb613:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ccb8a6 FUN_143ccb8a6 body=855 status=ok
// SIG undefined FUN_143ccb8a6(void)

void FUN_143ccb8a6(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong *plVar18;
  
  if ((((((*(longlong *)(param_1 + 0x148) != 0) &&
         (*(longlong **)(param_1 + 0x140) != (longlong *)0x0)) && (*(int *)(param_1 + 0x13c) != 0))
       && ((uVar17 = *(uint *)(param_1 + 0x138), -1 < (int)uVar17 && ((int)uVar17 < DAT_14c9647dc)))
       ) && ((lVar14 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8), lVar14 != 0
             && ((*(int *)(lVar14 + 0x10) == *(int *)(param_1 + 0x13c) &&
                 ((*(uint *)(lVar14 + 8) & 0x10200000) == 0)))))) &&
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x40))(), cVar4 != '\0')) {
    if ((param_2 != 0) && (lVar14 = *(longlong *)(param_2 + 0x68), lVar14 != 0)) {
      iVar2 = *(int *)(lVar14 + 0x30);
      if (iVar2 == 0) {
        uVar16 = 1;
        uVar15 = 0;
        iVar12 = 0;
        iVar5 = 0;
      }
      else {
        puVar6 = *(uint **)(lVar14 + 0x28);
        if (*(uint **)(lVar14 + 0x28) == (uint *)0x0) {
          puVar6 = (uint *)(lVar14 + 0x18);
        }
        uVar17 = *puVar6;
        if (uVar17 == 0) {
          iVar5 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar5 = iVar2 + -1;
          }
          uVar15 = 0;
          uVar16 = (ulonglong)(uint)(iVar5 >> 5);
          if (iVar5 >> 5 < 1) {
            uVar16 = uVar15;
          }
          iVar12 = 0;
          do {
            if (uVar16 == uVar15) goto LAB_143ccb9ea;
            iVar12 = iVar12 + 0x20;
            uVar17 = puVar6[uVar15 + 1];
            uVar15 = uVar15 + 1;
          } while (uVar17 == 0);
        }
        else {
          uVar15 = 0;
          iVar12 = 0;
        }
        uVar16 = (ulonglong)(-uVar17 & uVar17);
        uVar1 = uVar16 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar5 = (iVar12 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar5) {
          iVar5 = iVar2;
        }
      }
      if (iVar5 != iVar2) {
        uVar17 = 0xffffffff;
        do {
          plVar18 = (longlong *)((longlong)iVar5 * 0x48 + *(longlong *)(lVar14 + 8));
          lVar7 = *(longlong *)(param_1 + 0x148);
          if ((lVar7 != 0) && ((longlong)*(int *)(lVar7 + 0x118) != 0)) {
            lVar13 = *(longlong *)(lVar7 + 0x110);
            lVar11 = (longlong)*(int *)(lVar7 + 0x118) * 0x58;
            do {
              if (*(longlong *)(lVar13 + 0xc) == *plVar18) {
                if (lVar13 != 0) goto LAB_143ccbab3;
                break;
              }
              lVar13 = lVar13 + 0x58;
              lVar11 = lVar11 + -0x58;
            } while (lVar11 != 0);
          }
          lVar7 = FUN_145ab920e(lVar7 + 0x110);
          *(longlong *)(lVar7 + 0xc) = *plVar18;
          *(int *)(lVar7 + 0x48) = *(int *)(*(longlong *)(param_1 + 0x148) + 0x118) + -1;
          lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x148) + 0x110) +
                   (longlong)*(int *)(*(longlong *)(param_1 + 0x148) + 0x118) * 0x58 + -0x58;
LAB_143ccbab3:
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          iVar5 = (int)plVar18[4] + -1;
          if ((int)plVar18[4] == 0) {
            iVar5 = 0;
          }
          FUN_1402980a2(lVar13 + 0x20,plVar18[3],iVar5);
          *(int *)(lVar13 + 0x14) = (int)plVar18[5];
          FUN_140705884(*(undefined8 *)(param_1 + 0x148),lVar13);
          uVar17 = uVar17 & ~(uint)uVar16;
          puVar6 = *(uint **)(lVar14 + 0x28);
          if (*(uint **)(lVar14 + 0x28) == (uint *)0x0) {
            puVar6 = (uint *)(lVar14 + 0x18);
          }
          iVar3 = *(int *)(lVar14 + 0x30);
          iVar5 = (int)uVar15;
          lVar7 = (longlong)iVar5;
          uVar10 = puVar6[lVar7] & uVar17;
          if (uVar10 == 0) {
            iVar8 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar8 = iVar3 + -1;
            }
            iVar8 = iVar8 >> 5;
            iVar12 = iVar12 + 0x20;
            iVar9 = iVar8;
            if (iVar8 < iVar5) {
              iVar9 = iVar5;
            }
            if (iVar5 < iVar8) {
              lVar13 = 0;
              do {
                uVar10 = puVar6[lVar7 + lVar13 + 1];
                if (uVar10 != 0) {
                  uVar15 = (ulonglong)(iVar5 + (int)lVar13 + 1);
                  uVar17 = 0xffffffff;
                  goto LAB_143ccbb67;
                }
                iVar12 = iVar12 + 0x20;
                lVar13 = lVar13 + 1;
              } while (iVar9 - lVar7 != lVar13);
              uVar17 = 0xffffffff;
              iVar5 = iVar9;
            }
            uVar15 = (ulonglong)(iVar5 + 1);
            iVar5 = iVar3;
          }
          else {
LAB_143ccbb67:
            uVar16 = (ulonglong)(-uVar10 & uVar10);
            uVar1 = uVar16 * 2 + 1;
            lVar7 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
              }
            }
            iVar5 = (iVar12 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
            if (iVar3 <= iVar5) {
              iVar5 = iVar3;
            }
          }
        } while (iVar5 != iVar2);
      }
    }
LAB_143ccb9ea:
    if (*(int *)(*(longlong *)(param_1 + 0x148) + 0x118) == 0) {
      lVar14 = FUN_145ab920e(*(longlong *)(param_1 + 0x148) + 0x110);
      *(undefined8 *)(lVar14 + 0xc) = 0;
      *(undefined4 *)(lVar14 + 0x48) = 0;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      FUN_140705884(*(undefined8 *)(param_1 + 0x148),lVar14);
      return;
    }
  }
  return;
}



// FUNCTION 143ccbbfe FUN_143ccbbfe body=691 status=ok
// SIG undefined FUN_143ccbbfe(void)

void FUN_143ccbbfe(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(char *)(param_1 + 0x19) == '\0') && (*(longlong *)(param_1 + 0x50) == 0)) &&
     (*(longlong *)(param_1 + 0x58) != 0)) {
    local_38 = (undefined8 *)0x0;
    local_30 = 0;
    FUN_1446efa72(&local_38,0,3,0x10);
    local_30 = 3;
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_143ccbdd5:
      *local_38 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      local_38[2] = lVar8;
      *local_38 = &PTR_FUN_14b3f06a0;
      local_38[3] = 0;
      local_38[4] = 0;
      local_38[5] = FUN_141268d0a;
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_143ccbdd5;
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar9 = iVar6 == iVar4;
        if (bVar9) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar9);
      uVar7 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *local_38 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      local_38[2] = lVar8;
      *local_38 = &PTR_FUN_14b3f06a0;
      local_38[3] = uVar7;
      local_38[4] = plVar3;
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      local_38[5] = FUN_141268d0a;
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
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    local_50 = 0;
    local_48 = 0;
    FUN_14009d848(&local_50,&local_38);
    FUN_140844560(uVar7,&local_40,&local_50);
    *(undefined8 *)(param_1 + 0x50) = local_40;
    uVar7 = FUN_14050fd64();
    local_60 = *(undefined8 *)(param_1 + 0x58);
    local_58 = *(longlong *)(param_1 + 0x60);
    if (local_58 != 0) {
      LOCK();
      *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
      UNLOCK();
    }
    FUN_1407c8466(uVar7,&local_60);
    if (local_30 != 0) {
      if (local_38 == (undefined8 *)0x0) goto LAB_143ccbdb4;
      (**(code **)*local_38)(local_38,0);
      FUN_1446efa72(&local_38,0,0,0x10);
      local_30 = 0;
    }
    if (local_38 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143ccbdb4:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ccbeb2 FUN_143ccbeb2 body=144 status=ok
// SIG undefined FUN_143ccbeb2(void)

void FUN_143ccbeb2(longlong param_1,longlong *param_2)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x19) == '\x01') {
    if (((int)param_2[1] != 0) && (*param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
    }
  }
  else {
    local_28 = 0;
    local_20 = 0;
    FUN_14009d848(&local_28);
    FUN_1448b6402(param_1 + 0x20,local_30,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ccbf54 FUN_143ccbf54 body=52 status=ok
// SIG undefined FUN_143ccbf54(void)

undefined8 FUN_143ccbf54(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x20))();
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1487f11c4(lVar1,param_2,param_3);
  return uVar2;
}



// FUNCTION 143ccbf88 FUN_143ccbf88 body=1421 status=ok
// SIG undefined FUN_143ccbf88(void)

void FUN_143ccbf88(longlong *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 **ppuVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  longlong *plVar22;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  uint *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar7 = (**(code **)(*param_1 + 0x20))();
  if ((lVar7 == 0) || (lVar15 = *(longlong *)(lVar7 + 0x148), lVar15 == 0)) goto LAB_143ccbfe9;
  bVar3 = *(byte *)(lVar7 + 0x1c);
  if (bVar3 != 0) {
    if (bVar3 < 3) {
      *(undefined1 *)(lVar7 + 0x1bb) = 1;
      *(undefined1 *)(lVar7 + 0x1c) = 2;
      goto LAB_143ccbfe9;
    }
    if (4 < bVar3) {
      *(undefined2 *)(lVar7 + 0x1ba) = 1;
      local_90 = (longlong *)(lVar7 + 0x168);
      local_88 = (uint *)(lVar7 + 0x178);
      iVar21 = *(int *)(lVar7 + 400);
      if (iVar21 == 0) {
        uVar14 = 1;
        uVar12 = 0;
        iVar10 = 0;
        iVar16 = 0;
      }
      else {
        puVar9 = *(uint **)(lVar7 + 0x188);
        if (*(uint **)(lVar7 + 0x188) == (uint *)0x0) {
          puVar9 = local_88;
        }
        uVar18 = *puVar9;
        if (uVar18 == 0) {
          iVar16 = iVar21 + 0x1e;
          if (-1 < iVar21 + -1) {
            iVar16 = iVar21 + -1;
          }
          uVar12 = 0;
          uVar14 = (ulonglong)(uint)(iVar16 >> 5);
          if (iVar16 >> 5 < 1) {
            uVar14 = uVar12;
          }
          iVar10 = 0;
          do {
            if (uVar14 == uVar12) goto LAB_143ccc1d1;
            iVar10 = iVar10 + 0x20;
            uVar18 = puVar9[uVar12 + 1];
            uVar12 = uVar12 + 1;
          } while (uVar18 == 0);
        }
        else {
          uVar12 = 0;
          iVar10 = 0;
        }
        uVar14 = (ulonglong)(-uVar18 & uVar18);
        uVar2 = uVar14 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar16 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar21 <= iVar16) {
          iVar16 = iVar21;
        }
      }
      if (iVar16 != iVar21) {
        uVar18 = 0xffffffff;
        iVar20 = iVar21;
        do {
          lVar15 = *(longlong *)(*local_90 + 8 + (longlong)iVar16 * 0x18);
          if (lVar15 != 0) {
            *(undefined4 *)(lVar15 + 0x70) = 0xffffffff;
            iVar20 = *(int *)(lVar7 + 400);
          }
          uVar18 = uVar18 & ~(uint)uVar14;
          puVar9 = *(uint **)(lVar7 + 0x188);
          if (*(uint **)(lVar7 + 0x188) == (uint *)0x0) {
            puVar9 = local_88;
          }
          iVar16 = (int)uVar12;
          lVar15 = (longlong)iVar16;
          uVar6 = puVar9[lVar15] & uVar18;
          if (uVar6 == 0) {
            iVar11 = iVar20 + 0x1e;
            if (-1 < iVar20 + -1) {
              iVar11 = iVar20 + -1;
            }
            iVar11 = iVar11 >> 5;
            iVar10 = iVar10 + 0x20;
            iVar17 = iVar11;
            if (iVar11 < iVar16) {
              iVar17 = iVar16;
            }
            if (iVar16 < iVar11) {
              lVar13 = 0;
              do {
                uVar6 = puVar9[lVar15 + lVar13 + 1];
                if (uVar6 != 0) {
                  uVar12 = (ulonglong)(iVar16 + (int)lVar13 + 1);
                  uVar18 = 0xffffffff;
                  goto LAB_143ccc17d;
                }
                iVar10 = iVar10 + 0x20;
                lVar13 = lVar13 + 1;
              } while (iVar17 - lVar15 != lVar13);
              uVar18 = 0xffffffff;
              lVar15 = (longlong)iVar17;
            }
            uVar12 = lVar15 + 1U & 0xffffffff;
            iVar16 = iVar20;
          }
          else {
LAB_143ccc17d:
            uVar14 = (ulonglong)(-uVar6 & uVar6);
            uVar2 = uVar14 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            iVar16 = (iVar10 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
            if (iVar20 <= iVar16) {
              iVar16 = iVar20;
            }
          }
        } while (iVar16 != iVar21);
        lVar15 = *(longlong *)(lVar7 + 0x148);
        iVar21 = iVar20;
      }
LAB_143ccc1d1:
      if (0 < *(int *)(lVar15 + 0x118)) {
        lVar13 = 0xc;
        lVar19 = 0;
        do {
          lVar4 = *(longlong *)(lVar15 + 0x110);
          if (*(longlong *)(lVar4 + lVar13) != 0) {
            local_80 = (undefined8 *)0x0;
            puVar8 = *(undefined8 **)(lVar4 + 0x44 + lVar13);
            if (puVar8 == (undefined8 *)0x0) {
              puVar1 = (undefined8 *)(lVar13 + lVar4);
              local_80 = (undefined8 *)FUN_1487f158a(lVar7,puVar1);
              if (local_80 != (undefined8 *)0x0) {
                *(undefined8 **)(lVar4 + 0x44 + lVar13) = local_80;
                puVar8 = local_80;
                goto LAB_143ccc21b;
              }
              puVar8 = *(undefined8 **)(lVar4 + 0x44 + lVar13);
              if (puVar8 != (undefined8 *)0x0) goto LAB_143ccc21b;
              local_80 = (undefined8 *)FUN_14001cc68(0x78,0x10);
              *local_80 = 0;
              local_80[1] = 0;
              local_80[2] = 0;
              local_80[3] = 0;
              local_80[4] = 0;
              local_80[5] = 0;
              local_80[6] = 0;
              local_80[7] = 0;
              local_80[8] = 0;
              local_80[9] = 0;
              local_80[10] = 0;
              local_80[0xb] = 0;
              local_80[0xc] = 0;
              local_80[0xd] = 0;
              local_80[0xe] = 0;
              *(undefined4 *)(local_80 + 0xe) = 0xffffffff;
              local_80[1] = *puVar1;
              local_80[0xd] = lVar7;
              *(int *)(local_80 + 0xe) = (int)lVar19;
              local_78 = puVar1;
              uStack_70 = &local_80;
              FUN_1487fc5b8(local_90,local_64,&local_78);
            }
            else {
LAB_143ccc21b:
              *(int *)(puVar8 + 0xe) = (int)lVar19;
            }
            lVar15 = *(longlong *)(lVar7 + 0x148);
          }
          lVar19 = lVar19 + 1;
          lVar13 = lVar13 + 0x58;
        } while (lVar19 < *(int *)(lVar15 + 0x118));
        iVar21 = *(int *)(lVar7 + 400);
      }
      local_78 = (undefined8 *)0x0;
      uStack_70 = (undefined8 **)0x0;
      if (iVar21 == 0) {
        uVar12 = 0;
        uVar14 = 1;
        iVar10 = 0;
        iVar16 = 0;
      }
      else {
        puVar9 = *(uint **)(lVar7 + 0x188);
        if (*(uint **)(lVar7 + 0x188) == (uint *)0x0) {
          puVar9 = local_88;
        }
        uVar18 = *puVar9;
        if (uVar18 == 0) {
          iVar16 = iVar21 + 0x1e;
          if (-1 < iVar21 + -1) {
            iVar16 = iVar21 + -1;
          }
          uVar12 = 0;
          uVar14 = (ulonglong)(uint)(iVar16 >> 5);
          if (iVar16 >> 5 < 1) {
            uVar14 = uVar12;
          }
          iVar10 = 0;
          do {
            if (uVar14 == uVar12) goto LAB_143ccc4e2;
            iVar10 = iVar10 + 0x20;
            uVar18 = puVar9[uVar12 + 1];
            uVar12 = uVar12 + 1;
          } while (uVar18 == 0);
        }
        else {
          uVar12 = 0;
          iVar10 = 0;
        }
        uVar14 = (ulonglong)(-uVar18 & uVar18);
        uVar2 = uVar14 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar16 = (iVar10 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar21 <= iVar16) {
          iVar16 = iVar21;
        }
      }
      if (iVar16 != iVar21) {
        uVar18 = 0xffffffff;
        plVar22 = local_90;
        do {
          ppuVar5 = uStack_70;
          lVar15 = *(longlong *)(*plVar22 + 8 + (longlong)iVar16 * 0x18);
          if (lVar15 != 0) {
            if (*(int *)(lVar15 + 0x70) < 0) {
              lVar13 = (longlong)(int)uStack_70;
              uVar6 = (int)uStack_70 + 1;
              uStack_70 = (undefined8 **)CONCAT44(uStack_70._4_4_,uVar6);
              if (uStack_70._4_4_ < uVar6) {
                FUN_1487fc8e0(&local_78,(ulonglong)ppuVar5 & 0xffffffff);
              }
              local_78[lVar13] = lVar15;
              plVar22 = local_90;
            }
            else {
              FUN_1487f0cde(lVar15);
            }
          }
          puVar8 = local_78;
          uVar18 = uVar18 & ~(uint)uVar14;
          puVar9 = *(uint **)(lVar7 + 0x188);
          if (*(uint **)(lVar7 + 0x188) == (uint *)0x0) {
            puVar9 = local_88;
          }
          iVar20 = *(int *)(lVar7 + 400);
          iVar16 = (int)uVar12;
          lVar15 = (longlong)iVar16;
          uVar6 = puVar9[lVar15] & uVar18;
          if (uVar6 == 0) {
            iVar11 = iVar20 + 0x1e;
            if (-1 < iVar20 + -1) {
              iVar11 = iVar20 + -1;
            }
            iVar11 = iVar11 >> 5;
            iVar10 = iVar10 + 0x20;
            iVar17 = iVar11;
            if (iVar11 < iVar16) {
              iVar17 = iVar16;
            }
            if (iVar16 < iVar11) {
              lVar13 = 0;
              do {
                uVar6 = puVar9[lVar15 + lVar13 + 1];
                if (uVar6 != 0) {
                  uVar12 = (ulonglong)(iVar16 + (int)lVar13 + 1);
                  uVar18 = 0xffffffff;
                  goto LAB_143ccc43c;
                }
                iVar10 = iVar10 + 0x20;
                lVar13 = lVar13 + 1;
              } while (iVar17 - lVar15 != lVar13);
              uVar18 = 0xffffffff;
              iVar16 = iVar17;
            }
            uVar12 = (ulonglong)(iVar16 + 1);
            plVar22 = local_90;
            iVar16 = iVar20;
          }
          else {
LAB_143ccc43c:
            uVar14 = (ulonglong)(-uVar6 & uVar6);
            uVar2 = uVar14 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            iVar16 = (iVar10 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
            if (iVar20 <= iVar16) {
              iVar16 = iVar20;
            }
          }
        } while (iVar16 != iVar21);
        lVar15 = (longlong)(int)uStack_70;
        if (lVar15 != 0) {
          lVar13 = 0;
          do {
            lVar19 = *(longlong *)((longlong)puVar8 + lVar13);
            if (lVar19 != 0) {
              FUN_1487fc966(local_90,*(undefined8 *)(lVar19 + 8));
              FUN_143ccaa74(lVar19);
              FUN_1400020a8(lVar19);
            }
            lVar13 = lVar13 + 8;
          } while (lVar15 * 8 != lVar13);
        }
      }
LAB_143ccc4e2:
      FUN_143ccca3a(lVar7,1);
      if (local_78 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143ccbfe9;
    }
  }
  *(undefined1 *)(lVar7 + 0x1bb) = 1;
LAB_143ccbfe9:
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ccc516 FUN_143ccc516 body=1316 status=ok
// SIG undefined FUN_143ccc516(void)

void FUN_143ccc516(longlong param_1,char param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  
  if (param_2 == '\0') {
    if (((1 < *(byte *)(param_1 + 0x1c)) && (*(longlong *)(param_1 + 0x148) != 0)) &&
       (*(int *)(*(longlong *)(param_1 + 0x148) + 0x118) != 0)) {
      *(undefined1 *)(param_1 + 0x1bb) = 1;
    }
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x168);
    puVar2 = (uint *)(param_1 + 0x178);
    iVar8 = *(int *)(param_1 + 400);
    iVar3 = iVar8;
    if (iVar8 == 0) {
      uVar13 = 1;
      uVar16 = 0;
      iVar10 = 0;
      iVar6 = 0;
    }
    else {
      puVar4 = *(uint **)(param_1 + 0x188);
      if (*(uint **)(param_1 + 0x188) == (uint *)0x0) {
        puVar4 = puVar2;
      }
      uVar15 = *puVar4;
      if (uVar15 == 0) {
        iVar6 = iVar8 + 0x1e;
        if (-1 < iVar8 + -1) {
          iVar6 = iVar8 + -1;
        }
        uVar16 = 0;
        uVar13 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar13 = uVar16;
        }
        iVar10 = 0;
        do {
          if (uVar13 == uVar16) goto LAB_143ccc61a;
          iVar10 = iVar10 + 0x20;
          uVar15 = puVar4[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar15 == 0);
      }
      else {
        uVar16 = 0;
        iVar10 = 0;
      }
      uVar13 = (ulonglong)(-uVar15 & uVar15);
      uVar14 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if (iVar8 <= iVar6) {
        iVar6 = iVar8;
      }
    }
    if (iVar6 != iVar8) {
      uVar15 = 0xffffffff;
      do {
        lVar12 = *plVar1;
        lVar5 = *(longlong *)(lVar12 + 8 + (longlong)iVar6 * 0x18);
        if (lVar5 != 0) {
          FUN_143ccaa74(lVar5);
          FUN_1400020a8(lVar5);
          *(undefined8 *)(lVar12 + (longlong)iVar6 * 0x18 + 8) = 0;
          iVar3 = *(int *)(param_1 + 400);
        }
        uVar15 = uVar15 & ~(uint)uVar13;
        puVar4 = *(uint **)(param_1 + 0x188);
        if (*(uint **)(param_1 + 0x188) == (uint *)0x0) {
          puVar4 = puVar2;
        }
        iVar6 = (int)uVar16;
        lVar12 = (longlong)iVar6;
        uVar9 = puVar4[lVar12] & uVar15;
        if (uVar9 == 0) {
          iVar11 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar11 = iVar3 + -1;
          }
          iVar11 = iVar11 >> 5;
          iVar10 = iVar10 + 0x20;
          iVar7 = iVar11;
          if (iVar11 < iVar6) {
            iVar7 = iVar6;
          }
          if (iVar6 < iVar11) {
            lVar5 = 0;
            do {
              uVar9 = puVar4[lVar12 + lVar5 + 1];
              if (uVar9 != 0) {
                uVar16 = (ulonglong)(iVar6 + (int)lVar5 + 1);
                uVar15 = 0xffffffff;
                goto LAB_143ccc7d1;
              }
              iVar10 = iVar10 + 0x20;
              lVar5 = lVar5 + 1;
            } while (iVar7 - lVar12 != lVar5);
            uVar15 = 0xffffffff;
            iVar6 = iVar7;
          }
          uVar16 = (ulonglong)(iVar6 + 1);
          iVar6 = iVar3;
        }
        else {
LAB_143ccc7d1:
          uVar13 = (ulonglong)(-uVar9 & uVar9);
          uVar14 = uVar13 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar6) {
            iVar6 = iVar3;
          }
        }
      } while (iVar6 != iVar8);
    }
LAB_143ccc61a:
    iVar8 = *(int *)(param_1 + 0x1b0);
    if (iVar8 < 2) {
      lVar12 = param_1 + 0x1a0;
      if (*(longlong *)(param_1 + 0x1a8) != 0) {
        lVar12 = *(longlong *)(param_1 + 0x1a8);
      }
      iVar6 = iVar8 + 3;
      if (-1 < iVar8) {
        iVar6 = iVar8;
      }
      if (*(int *)(param_1 + 0x170) - *(int *)(param_1 + 0x19c) < iVar6 >> 2) {
        if (iVar3 != 0) {
          puVar4 = *(uint **)(param_1 + 0x188);
          if (*(uint **)(param_1 + 0x188) == (uint *)0x0) {
            puVar4 = puVar2;
          }
          uVar15 = *puVar4;
          if (uVar15 == 0) {
            iVar8 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar8 = iVar3 + -1;
            }
            uVar13 = 0;
            uVar16 = (ulonglong)(uint)(iVar8 >> 5);
            if (iVar8 >> 5 < 1) {
              uVar16 = uVar13;
            }
            iVar8 = 0;
            do {
              if (uVar16 == uVar13) goto LAB_143ccc66c;
              iVar8 = iVar8 + 0x20;
              uVar15 = puVar4[uVar13 + 1];
              uVar13 = uVar13 + 1;
            } while (uVar15 == 0);
          }
          else {
            uVar13 = 0;
            iVar8 = 0;
          }
          uVar14 = (ulonglong)(-uVar15 & uVar15);
          uVar16 = uVar14 * 2 + 1;
          lVar5 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          iVar6 = (iVar8 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
          if (iVar6 < iVar3) {
            uVar15 = 0xffffffff;
            do {
              *(undefined4 *)
               (lVar12 + (longlong)
                         *(int *)(*(longlong *)(param_1 + 0x168) + 0x14 + (longlong)iVar6 * 0x18) *
                         4) = 0xffffffff;
              uVar15 = ~(uint)uVar14 & uVar15;
              puVar4 = *(uint **)(param_1 + 0x188);
              if (*(uint **)(param_1 + 0x188) == (uint *)0x0) {
                puVar4 = puVar2;
              }
              iVar10 = *(int *)(param_1 + 400);
              iVar6 = (int)uVar13;
              lVar5 = (longlong)iVar6;
              uVar9 = puVar4[lVar5] & uVar15;
              if (uVar9 == 0) {
                iVar11 = iVar10 + 0x1e;
                if (-1 < iVar10 + -1) {
                  iVar11 = iVar10 + -1;
                }
                iVar11 = iVar11 >> 5;
                iVar8 = iVar8 + 0x20;
                iVar7 = iVar11;
                if (iVar11 < iVar6) {
                  iVar7 = iVar6;
                }
                if (iVar6 < iVar11) {
                  lVar17 = 0;
                  do {
                    uVar9 = puVar4[lVar5 + lVar17 + 1];
                    if (uVar9 != 0) {
                      uVar13 = (ulonglong)(iVar6 + (int)lVar17 + 1);
                      uVar15 = 0xffffffff;
                      goto LAB_143ccc9c5;
                    }
                    iVar8 = iVar8 + 0x20;
                    lVar17 = lVar17 + 1;
                  } while (iVar7 - lVar5 != lVar17);
                  uVar15 = 0xffffffff;
                  iVar6 = iVar7;
                }
                uVar13 = (ulonglong)(iVar6 + 1);
                iVar6 = iVar10;
              }
              else {
LAB_143ccc9c5:
                uVar14 = (ulonglong)(-uVar9 & uVar9);
                uVar16 = uVar14 * 2 + 1;
                lVar5 = 0x3f;
                if (uVar16 != 0) {
                  for (; uVar16 >> lVar5 == 0; lVar5 = lVar5 + -1) {
                  }
                }
                iVar6 = (iVar8 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
                if (iVar10 <= iVar6) {
                  iVar6 = iVar10;
                }
              }
            } while (iVar6 != iVar3);
          }
        }
      }
      else if (iVar8 == 1) {
        lVar5 = 0;
        do {
          *(undefined4 *)(lVar12 + lVar5 * 4) = 0xffffffff;
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)(param_1 + 0x1b0));
      }
LAB_143ccc66c:
      FUN_143c34d56(plVar1,0);
    }
    else {
      FUN_143c34d56(plVar1,0);
      *(undefined4 *)(param_1 + 0x1b0) = 1;
      FUN_1487fc336(plVar1);
    }
  }
  lVar12 = *(longlong *)(param_1 + 0x20);
  if (lVar12 != 0) {
    *(undefined4 *)(lVar12 + 0x50) = 0;
    if (*(longlong *)(lVar12 + 0x48) != 0) {
      FUN_1400020a8();
    }
    FUN_140e74610(lVar12 + 8);
    FUN_1400020a8(lVar12);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 0x1b8) = 0;
  *(undefined1 *)(param_1 + 0x1ba) = 0;
  if (((param_2 != '\0') && (lVar12 = *(longlong *)(param_1 + 0x148), lVar12 != 0)) &&
     (*(int *)(lVar12 + 0x118) != 0)) {
    FUN_1409deebc(*(undefined8 *)(lVar12 + 0x110));
    *(undefined4 *)(lVar12 + 0x118) = 0;
    if (*(int *)(lVar12 + 0x11c) != 0) {
      FUN_146547e4c(lVar12 + 0x110);
    }
    lVar12 = *(longlong *)(param_1 + 0x148);
    FUN_1407058ce(lVar12);
    FUN_140705914(lVar12);
    *(undefined8 *)(lVar12 + 0x104) = 0xffffffffffffffff;
  }
  return;
}



// FUNCTION 143ccca3a FUN_143ccca3a body=447 status=ok
// SIG undefined FUN_143ccca3a(void)

void FUN_143ccca3a(longlong param_1,byte param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((byte)(*(byte *)(param_1 + 0x1ba) ^ 1 | param_2) == 1) {
    *(undefined1 *)(param_1 + 0x1ba) = 0;
    *(undefined2 *)(param_1 + 0x1b8) = 0;
    plVar1 = (longlong *)(param_1 + 0x168);
    lVar2 = param_1 + 0x178;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar8 = 0;
    local_48 = lVar2;
    if (*(int *)(param_1 + 400) != 0) {
      FUN_1449c0562(&local_50);
      iVar8 = *(int *)(param_1 + 400);
    }
    local_60 = local_40;
    uVar5 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_70 = local_50;
    local_68 = local_48;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar7 = local_60._4_4_;
    local_78 = plVar1;
    if ((local_60._4_4_ != iVar8) || (local_60 = uVar5, local_48 != lVar2)) {
      do {
        local_60 = uVar5;
        lVar3 = *local_78;
        lVar4 = *(longlong *)(lVar3 + 8 + (longlong)iVar7 * 0x18);
        if (lVar4 != 0) {
          *(ushort *)(param_1 + 0x1b8) = *(ushort *)(param_1 + 0x1b8) | *(ushort *)(lVar4 + 0x60);
          *(undefined2 *)(*(longlong *)(lVar3 + (longlong)iVar7 * 0x18 + 8) + 0x60) = 0;
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar7 = local_60._4_4_;
        uVar5 = local_60;
      } while (((local_60._4_4_ != iVar8) || (local_68 != lVar2)) || (local_78 != plVar1));
    }
    if (*(short *)(param_1 + 0x1b8) != 0) {
      if (((*(longlong *)(param_1 + 0x140) != 0) &&
          (cVar6 = FUN_144729dda(param_1 + 0x138), cVar6 != '\0')) &&
         (plVar1 = *(longlong **)(param_1 + 0x140), plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x48))(plVar1,*(undefined2 *)(param_1 + 0x1b8));
        FUN_1487fc510(param_1 + 0x150,plVar1);
      }
      *(undefined2 *)(param_1 + 0x1b8) = 0;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cccc34 FUN_143cccc34 body=120 status=ok
// SIG undefined FUN_143cccc34(void)

void FUN_143cccc34(longlong param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = -2;
  if (-2 < *param_2) {
    iVar1 = *param_2;
  }
  *param_2 = iVar1 + 2;
  FUN_1487f2b60(param_1 + 0x18,local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  iVar1 = 2;
  if (2 < *param_2) {
    iVar1 = *param_2;
  }
  *param_2 = iVar1 + -2;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cccd91 FUN_143cccd91 body=69 status=ok
// SIG undefined FUN_143cccd91(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cccd91(void)

{
  _DAT_14cb73d90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143cccdd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb73d98,1);
  return;
}



// FUNCTION 143ccce16 FUN_143ccce16 body=29 status=ok
// SIG undefined FUN_143ccce16(void)

undefined8 FUN_143ccce16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ccce48 FUN_143ccce48 body=93 status=ok
// SIG undefined FUN_143ccce48(void)

void FUN_143ccce48(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14acb8d40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f0040;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143cccea6 FUN_143cccea6 body=93 status=ok
// SIG undefined FUN_143cccea6(void)

void FUN_143cccea6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14acb8d40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f0040;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143cccf04 FUN_143cccf04 body=126 status=ok
// SIG undefined FUN_143cccf04(void)

void FUN_143cccf04(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14acb8d40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f0040;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143cccf73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143cccfb7 FUN_143cccfb7 body=15 status=ok
// SIG undefined FUN_143cccfb7(void)

void FUN_143cccfb7(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 143cccfc6 FUN_143cccfc6 body=122 status=ok
// SIG undefined FUN_143cccfc6(void)

void FUN_143cccfc6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 143ccd040 FUN_143ccd040 body=112 status=ok
// SIG undefined FUN_143ccd040(void)

int FUN_143ccd040(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1;
        if ((((*(int *)(lVar2 + lVar4 * 0x28) == *param_3) &&
             (*(int *)(lVar2 + 4 + lVar4 * 0x28) == param_3[1])) &&
            (*(int *)(lVar2 + 8 + lVar4 * 0x28) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4 * 0x28) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + lVar4 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 143ccd0b0 FUN_143ccd0b0 body=114 status=ok
// SIG undefined FUN_143ccd0b0(void)

void FUN_143ccd0b0(longlong *param_1,int param_2)

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



// FUNCTION 143ccd122 FUN_143ccd122 body=986 status=ok
// SIG undefined FUN_143ccd122(void)

void FUN_143ccd122(longlong param_1,int param_2,double *param_3,double *param_4,longlong *param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  double *pdVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong lVar24;
  float fVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar30;
  undefined1 auVar29 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auStack_138 [32];
  longlong *local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  double local_c8;
  double local_c0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar13 = *(longlong *)(param_1 + 0x60);
  lVar19 = (longlong)param_2;
  if (*(int *)(lVar13 + 4 + lVar19 * 8) != 0) {
    lVar23 = *(longlong *)(param_1 + 0x80);
    pdVar17 = (double *)(lVar19 * 0x4810);
    lVar24 = *(longlong *)(lVar23 + 0x4800 + (longlong)pdVar17);
    lVar21 = lVar23 + (longlong)pdVar17;
    if (lVar24 != 0) {
      lVar21 = lVar24;
    }
    iVar14 = *(int *)(lVar23 + 0x4808 + (longlong)pdVar17);
    uVar15 = (ulonglong)iVar14;
    if (uVar15 != 0) {
      plVar12 = (longlong *)(uVar15 * 9);
      lVar13 = uVar15 * 0x48;
      plVar22 = (longlong *)(lVar21 + 0x38);
      do {
        lVar23 = -(ulonglong)
                  ((double)plVar22[-3] + param_4[5] < ABS((double)plVar22[-6] - param_4[1]));
        auVar35._8_4_ = (int)lVar23;
        auVar35._0_8_ =
             -(ulonglong)((double)plVar22[-4] + param_4[4] < ABS((double)plVar22[-7] - *param_4));
        auVar35._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
        uVar10 = movmskpd((int)plVar12,auVar35);
        auVar7._8_8_ = -(ulonglong)(param_4[7] + 0.0 < ABS(0.0 - param_4[3]));
        auVar7._0_8_ = -(ulonglong)
                        ((double)plVar22[-2] + param_4[6] < ABS((double)plVar22[-5] - param_4[2]));
        iVar14 = movmskpd((int)uVar15,auVar7);
        uVar10 = iVar14 << 2 | uVar10;
        uVar15 = (ulonglong)uVar10;
        if (uVar10 == 0) {
          dVar33 = (double)param_5[2] - (double)plVar22[-6];
          dVar6 = (double)param_5[1] - (double)plVar22[-7];
          fVar25 = (float)(((double)param_5[3] - (double)plVar22[-5]) *
                           ((double)param_5[3] - (double)plVar22[-5]) +
                          dVar6 * dVar6 + dVar33 * dVar33);
          uVar15 = *param_5 + 0x2b0;
          *(float *)(*plVar22 + 0x24) = fVar25;
          lVar23 = *(longlong *)(*plVar22 + 0x48);
          fVar1 = *(float *)(lVar23 + 0x84);
          fVar2 = *(float *)(lVar23 + 0x80);
          *(char *)(*plVar22 + 0x20) = fVar25 <= fVar1 & -(fVar2 <= fVar1 && fVar2 <= fVar25);
          pdVar17 = &local_108;
          FUN_144a89f12(uVar15,&local_108,plVar22);
        }
        iVar14 = (int)uVar15;
        plVar12 = plVar22 + 2;
        plVar22 = plVar22 + 9;
      } while (plVar12 != (longlong *)(lVar21 + lVar13));
      lVar13 = *(longlong *)(param_1 + 0x60);
    }
    iVar3 = *(int *)(lVar13 + lVar19 * 8);
    if (iVar3 != -1) {
      dVar31 = SUB168(*(undefined1 (*) [16])(param_3 + 2),0);
      dVar32 = SUB168(*(undefined1 (*) [16])(param_3 + 2),8);
      dVar33 = param_3[8];
      dVar6 = param_3[8];
      auVar34._8_8_ = dVar6;
      auVar34._0_8_ = dVar33;
      dVar30 = param_3[9];
      dVar26 = param_3[9];
      lVar19 = -(ulonglong)((param_3[1] + dVar26) - dVar6 < param_4[1] + param_4[5]);
      lVar23 = -(ulonglong)((dVar32 + dVar26) - dVar6 < param_4[3] + param_4[7]);
      auVar27._8_8_ = -(ulonglong)(param_4[1] - param_4[5] <= (param_3[1] - dVar26) + dVar6);
      auVar27._0_8_ = -(ulonglong)(*param_4 - param_4[4] <= (*param_3 - dVar30) + dVar33);
      lVar24 = -(ulonglong)(param_4[3] - param_4[7] <= (dVar32 - dVar26) + dVar6);
      auVar8._8_4_ = (int)lVar19;
      auVar8._0_8_ = -(ulonglong)((*param_3 + dVar30) - dVar33 < *param_4 + param_4[4]);
      auVar8._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
      iVar11 = movmskpd((int)lVar13,auVar8);
      auVar9._8_4_ = (int)lVar23;
      auVar9._0_8_ = -(ulonglong)((dVar31 + dVar30) - dVar33 < param_4[2] + param_4[6]);
      auVar9._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
      uVar10 = movmskpd(iVar14,auVar9);
      iVar14 = movmskpd(uVar10 & 1,auVar27);
      auVar4._8_4_ = (int)lVar24;
      auVar4._0_8_ = -(ulonglong)(param_4[2] - param_4[6] <= (dVar31 - dVar30) + dVar33);
      auVar4._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
      iVar16 = movmskpd((int)pdVar17,auVar4);
      uVar18 = 0;
      auVar35 = pmovsxbd(auVar34,0x8040201);
      iVar20 = 0;
      do {
        if ((uVar18 ^ 0xffffffc7 | iVar16 * 0x20 + iVar14 * 8 | iVar11 + (uVar10 & 1) * 4) ==
            0xffffffff) {
          auVar28._4_4_ = iVar20;
          auVar28._0_4_ = iVar20;
          auVar28._8_4_ = iVar20;
          auVar28._12_4_ = iVar20;
          auVar28 = auVar28 & auVar35;
          dVar33 = param_3[9];
          dVar6 = param_3[9];
          dVar31 = (double)(float)-(uint)(auVar28._0_4_ == auVar35._0_4_);
          dVar32 = (double)(float)-(uint)(auVar28._4_4_ == auVar35._4_4_);
          dVar26 = (double)(float)-(uint)(auVar28._8_4_ == auVar35._8_4_);
          dVar30 = (double)(float)-(uint)(auVar28._12_4_ == auVar35._12_4_);
          uVar15 = (ulonglong)dVar6 & (ulonglong)dVar30;
          auVar29._0_8_ = ~(ulonglong)dVar26 & (ulonglong)-dVar33;
          auVar29._8_8_ = ~(ulonglong)dVar30 & (ulonglong)-dVar6;
          auVar5._8_4_ = (int)uVar15;
          auVar5._0_8_ = (ulonglong)dVar33 & (ulonglong)dVar26;
          auVar5._12_4_ = (int)(uVar15 >> 0x20);
          local_108 = (double)(~(ulonglong)dVar31 & (ulonglong)-dVar33 |
                              (ulonglong)dVar33 & (ulonglong)dVar31) + *param_3;
          dStack_100 = (double)(~(ulonglong)dVar32 & (ulonglong)-dVar6 |
                               (ulonglong)dVar6 & (ulonglong)dVar32) + param_3[1];
          local_f8 = (SUB168(auVar29 | auVar5,0) + param_3[2]) * 1.0;
          dStack_f0 = (SUB168(auVar29 | auVar5,8) + param_3[3]) * 0.0;
          local_c0 = param_3[8];
          local_e8._8_4_ = SUB84(local_c0,0);
          local_e8._0_8_ = local_c0;
          local_e8._12_4_ = (int)((ulonglong)local_c0 >> 0x20);
          local_d8._8_4_ = SUB84(local_c0 * 0.0,0);
          local_d8._0_8_ = local_c0 * 1.0;
          local_d8._12_4_ = (int)((ulonglong)(local_c0 * 0.0) >> 0x20);
          local_c8 = local_c0 * 0.5 * 1.0625;
          local_c0 = local_c0 - local_c8;
          local_118 = param_5;
          FUN_143ccd122(param_1,iVar3 + iVar20,&local_108,param_4);
        }
        iVar20 = iVar20 + 1;
        uVar18 = uVar18 + 9;
      } while (iVar20 != 8);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ccd4fe FUN_143ccd4fe body=8 status=ok
// SIG undefined FUN_143ccd4fe(void)

void FUN_143ccd4fe(undefined8 *param_1)

{
  FUN_1407a401a(*param_1);
  return;
}



// FUNCTION 143ccd50a FUN_143ccd50a body=5 status=ok
// SIG undefined FUN_143ccd50a(void)

longlong FUN_143ccd50a(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143ccd510 FUN_143ccd510 body=12 status=ok
// SIG undefined FUN_143ccd510(void)

void FUN_143ccd510(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ccd519. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ccd51c FUN_143ccd51c body=29 status=ok
// SIG undefined FUN_143ccd51c(void)

undefined8 FUN_143ccd51c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ccd53a FUN_143ccd53a body=29 status=ok
// SIG undefined FUN_143ccd53a(void)

undefined8 FUN_143ccd53a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ccd56c FUN_143ccd56c body=93 status=ok
// SIG undefined FUN_143ccd56c(void)

void FUN_143ccd56c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f01a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f0130;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143ccd5ca FUN_143ccd5ca body=93 status=ok
// SIG undefined FUN_143ccd5ca(void)

void FUN_143ccd5ca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f01a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f0130;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143ccd628 FUN_143ccd628 body=126 status=ok
// SIG undefined FUN_143ccd628(void)

void FUN_143ccd628(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f01a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f0130;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ccd697. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ccd6ac FUN_143ccd6ac body=153 status=ok
// SIG undefined FUN_143ccd6ac(void)

undefined8 * FUN_143ccd6ac(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b3f0210;
  plVar1 = param_1 + 0x27;
  if (*(int *)(param_1 + 0x28) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143ccd706;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143ccd706:
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ccd75a FUN_143ccd75a body=100 status=ok
// SIG undefined FUN_143ccd75a(void)

void FUN_143ccd75a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 0x15) {
    FUN_1446efa72(param_2,0,0x15,0x10);
    *(undefined4 *)(param_2 + 1) = 0x15;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f01a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f0210;
  FUN_140b3f7c6(puVar1 + 4,param_1 + 0x20);
  return;
}



// FUNCTION 143ccd7be FUN_143ccd7be body=100 status=ok
// SIG undefined FUN_143ccd7be(void)

void FUN_143ccd7be(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 0x15) {
    FUN_1446efa72(param_2,0,0x15,0x10);
    *(undefined4 *)(param_2 + 1) = 0x15;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f01a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f0210;
  FUN_140b3f7c6(puVar1 + 4,param_1 + 0x20);
  return;
}



// FUNCTION 143ccd822 FUN_143ccd822 body=134 status=ok
// SIG undefined FUN_143ccd822(void)

void FUN_143ccd822(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 0x15) {
    FUN_1446efa72(param_2 + 1,0,0x15,0x10);
    param_2[1].LockCount = 0x15;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f01a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f0210;
  FUN_140b3f7c6(&p_Var1->EntryCount,param_1 + 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ccd899. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ccd8cc FUN_143ccd8cc body=45 status=ok
// SIG undefined FUN_143ccd8cc(void)

undefined8 FUN_143ccd8cc(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (*(int *)(param_1 + 0x130) < 5)) {
    FUN_143cc46b4(param_2,param_1 + 200);
  }
  return 1;
}



// FUNCTION 143ccd8fa FUN_143ccd8fa body=29 status=ok
// SIG undefined FUN_143ccd8fa(void)

undefined8 FUN_143ccd8fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ccd92c FUN_143ccd92c body=93 status=ok
// SIG undefined FUN_143ccd92c(void)

void FUN_143ccd92c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f01a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f0280;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143ccd98a FUN_143ccd98a body=93 status=ok
// SIG undefined FUN_143ccd98a(void)

void FUN_143ccd98a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f01a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f0280;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143ccd9e8 FUN_143ccd9e8 body=126 status=ok
// SIG undefined FUN_143ccd9e8(void)

void FUN_143ccd9e8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f01a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f0280;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ccda57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ccda66 FUN_143ccda66 body=86 status=ok
// SIG undefined FUN_143ccda66(void)

void FUN_143ccda66(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_2 != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x18);
    local_18 = *puVar1;
    uStack_14 = puVar1[1];
    uStack_10 = puVar1[2];
    uStack_c = puVar1[3];
    FUN_143cc2a34(param_2,&local_18,puVar1 + 4,puVar1 + 0x10);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ccdabe FUN_143ccdabe body=88 status=ok
// SIG undefined FUN_143ccdabe(void)

undefined8 FUN_143ccdabe(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_2 != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x18);
    local_18 = *puVar1;
    uStack_14 = puVar1[1];
    uStack_10 = puVar1[2];
    uStack_c = puVar1[3];
    FUN_143cc2a34(param_2,&local_18,puVar1 + 4,puVar1 + 0x10);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ccdb18 FUN_143ccdb18 body=29 status=ok
// SIG undefined FUN_143ccdb18(void)

undefined8 FUN_143ccdb18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ccdb4a FUN_143ccdb4a body=93 status=ok
// SIG undefined FUN_143ccdb4a(void)

void FUN_143ccdb4a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f01a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f02f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143ccdba8 FUN_143ccdba8 body=93 status=ok
// SIG undefined FUN_143ccdba8(void)

void FUN_143ccdba8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f01a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f02f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143ccdc06 FUN_143ccdc06 body=126 status=ok
// SIG undefined FUN_143ccdc06(void)

void FUN_143ccdc06(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f01a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f02f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ccdc75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ccdc84 FUN_143ccdc84 body=82 status=ok
// SIG undefined FUN_143ccdc84(void)

void FUN_143ccdc84(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_2 != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x18);
    local_18 = *puVar1;
    uStack_14 = puVar1[1];
    uStack_10 = puVar1[2];
    uStack_c = puVar1[3];
    FUN_143cc3fc6(param_2,&local_18,puVar1 + 4);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ccdcd8 FUN_143ccdcd8 body=84 status=ok
// SIG undefined FUN_143ccdcd8(void)

undefined8 FUN_143ccdcd8(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_2 != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x18);
    local_18 = *puVar1;
    uStack_14 = puVar1[1];
    uStack_10 = puVar1[2];
    uStack_c = puVar1[3];
    FUN_143cc3fc6(param_2,&local_18,puVar1 + 4);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ccdd34 FUN_143ccdd34 body=68 status=ok
// SIG undefined FUN_143ccdd34(void)

undefined8 * FUN_143ccdd34(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3f0360;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ccdd7e FUN_143ccdd7e body=105 status=ok
// SIG undefined FUN_143ccdd7e(void)

void FUN_143ccdd7e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_145832a32(param_1 + 0x70);
  FUN_14108e087(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143ccdddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 143ccdde8 FUN_143ccdde8 body=29 status=ok
// SIG undefined FUN_143ccdde8(void)

undefined8 FUN_143ccdde8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ccde06 FUN_143ccde06 body=671 status=ok
// SIG undefined FUN_143ccde06(void)

void FUN_143ccde06(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 0) {
    return;
  }
  plVar1 = param_1 + 7;
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_143ccde83;
  }
  uVar3 = 0;
  do {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar10 != uVar3);
LAB_143ccde83:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar5 = 0;
    iVar15 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar15 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar15 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar14 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar14 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar10 = puVar13[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar8 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar15) {
      iVar15 = iVar7;
    }
  }
  if (iVar15 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar16 = (longlong)iVar15 * 0x20;
      uVar2 = *(undefined8 *)(lVar9 + lVar16);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x1c + lVar16) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x18 + lVar16) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar15;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar15 = (int)uVar4;
      lVar9 = (longlong)iVar15;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar15) {
          iVar12 = iVar15;
        }
        if (iVar11 <= iVar15) {
          return;
        }
        lVar16 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar16 + 1];
          if (uVar3 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar12 - lVar9 == lVar16) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar15 + (int)lVar16 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar7);
  }
  return;
}



// FUNCTION 143cce0d8 FUN_143cce0d8 body=12 status=ok
// SIG undefined FUN_143cce0d8(void)

void FUN_143cce0d8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143cce0e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143cce0e4 FUN_143cce0e4 body=29 status=ok
// SIG undefined FUN_143cce0e4(void)

undefined8 FUN_143cce0e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cce102 FUN_143cce102 body=29 status=ok
// SIG undefined FUN_143cce102(void)

undefined8 FUN_143cce102(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cce29e FUN_143cce29e body=93 status=ok
// SIG undefined FUN_143cce29e(void)

void FUN_143cce29e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9b40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f0450;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143cce2fc FUN_143cce2fc body=93 status=ok
// SIG undefined FUN_143cce2fc(void)

void FUN_143cce2fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9b40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f0450;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143cce35a FUN_143cce35a body=126 status=ok
// SIG undefined FUN_143cce35a(void)

void FUN_143cce35a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9b40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f0450;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143cce3c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143cce3e6 FUN_143cce3e6 body=270 status=ok
// SIG undefined FUN_143cce3e6(void)

undefined8 FUN_143cce3e6(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143cce4ee;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143cce4ee;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143cce4ee:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143cce4a2;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x638))();
      uVar6 = 1;
      goto LAB_143cce4a2;
    }
  }
  uVar6 = 0;
LAB_143cce4a2:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cce52c FUN_143cce52c body=68 status=ok
// SIG undefined FUN_143cce52c(void)

undefined8 * FUN_143cce52c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3f06a0;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cce58c FUN_143cce58c body=94 status=ok
// SIG undefined FUN_143cce58c(void)

void FUN_143cce58c(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  if ((*(char *)(param_2 + 0x30) == '\x01') && (*(char *)(param_2 + 0x31) == '\0')) {
    cVar3 = FUN_140d1d704(param_2 + 0x38,*param_1,*(undefined1 *)param_1[1]);
    if (cVar3 != '\0') {
      plVar2 = (longlong *)param_1[2];
      iVar1 = (int)plVar2[1];
      *(uint *)(plVar2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
        FUN_1487fcd60(plVar2,iVar1);
      }
      *(longlong *)(*plVar2 + (longlong)iVar1 * 8) = param_2;
    }
  }
  return;
}



// FUNCTION 143cce5ea FUN_143cce5ea body=29 status=ok
// SIG undefined FUN_143cce5ea(void)

undefined8 FUN_143cce5ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cce61c FUN_143cce61c body=85 status=ok
// SIG undefined FUN_143cce61c(void)

void FUN_143cce61c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f0710;
  return;
}



// FUNCTION 143cce672 FUN_143cce672 body=85 status=ok
// SIG undefined FUN_143cce672(void)

void FUN_143cce672(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f0710;
  return;
}



// FUNCTION 143cce6c8 FUN_143cce6c8 body=118 status=ok
// SIG undefined FUN_143cce6c8(void)

void FUN_143cce6c8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a177500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f0710;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143cce72f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143cce746 FUN_143cce746 body=19 status=ok
// SIG undefined FUN_143cce746(void)

undefined1 FUN_143cce746(undefined8 param_1,undefined8 param_2)

{
  FUN_143cce75a(param_2);
  return 1;
}



// FUNCTION 143cce75a FUN_143cce75a body=204 status=ok
// SIG undefined FUN_143cce75a(void)

void FUN_143cce75a(longlong *param_1)

{
  void *_Src;
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  lVar1 = DAT_14cb73d88;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb73d88 != 0) {
    if ((int)param_1[1] < 1) {
      FUN_140056680(&local_38,&DAT_149dfb77a);
    }
    else {
      local_38 = (void *)0x0;
      local_30 = *(int *)((undefined8 *)*param_1 + 1);
      lVar2 = (longlong)local_30;
      _Src = *(void **)*param_1;
      if (lVar2 == 0) {
        local_2c = 0;
      }
      else {
        FUN_1446dd670(&local_38,local_30,0);
        memcpy(local_38,_Src,lVar2 * 2);
      }
    }
    FUN_1487f3fce(lVar1,&local_38);
    if (local_38 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cce827 FUN_143cce827 body=8904 status=ok
// SIG undefined FUN_143cce827(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cce827(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  undefined8 *puVar9;
  void *pvVar10;
  double *pdVar11;
  char cVar12;
  uint uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_228 [32];
  undefined8 local_208;
  undefined2 local_200;
  double local_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double dStack_180;
  double local_178;
  double local_168;
  double dStack_160;
  double local_158;
  char *local_148;
  double dStack_140;
  double local_138;
  double local_130;
  undefined **ppuStack_128;
  undefined1 *local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_148 = "AssetRegistry";
  dStack_140 = (double)CONCAT35(dStack_140._5_3_,0xd);
  uVar13 = FUN_14001a6c0(&local_148,1);
  _DAT_14cb72630 = (ulonglong)uVar13;
  DAT_14cb72698 = (undefined8 *)0x0;
  _DAT_14cb726a0 = 0;
  puVar14 = (undefined8 *)FUN_140595974(0x4000,0);
  lVar17 = 0x7f;
  puVar9 = puVar14;
  do {
    puVar16 = puVar9 + 0x10;
    *puVar9 = puVar16;
    lVar17 = lVar17 + -1;
    puVar9 = puVar16;
  } while (lVar17 != 0);
  *puVar16 = DAT_14cb72698;
  _DAT_14cb726a0 = _DAT_14cb726a0 + 0x80;
  local_138 = 0.0;
  ppuStack_128 = &PTR_LAB_14a1795c0;
  local_120 = &LAB_143ccce10;
  local_148 = &DAT_14011fc1e;
  DAT_14cb72698 = puVar14;
  FUN_1460e3258(&local_148);
  atexit((_func_5014 *)&LAB_143cbeee1);
  _DAT_14cb72738 = &LAB_143cbeee6;
  _DAT_14cb72740 = 0x461c4400;
  DAT_14cb72744 = 1;
  DAT_14cb72730 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb72730;
  atexit((_func_5014 *)&LAB_143cbeeeb);
  DAT_14cb727b0 = (longlong *)0x0;
  _DAT_14cb727b8 = 0;
  plVar15 = (longlong *)FUN_140595974(0x78,0);
  *plVar15 = (longlong)(plVar15 + 5);
  plVar15[5] = (longlong)(plVar15 + 10);
  plVar15[10] = (longlong)DAT_14cb727b0;
  _DAT_14cb727b8 = _DAT_14cb727b8 + 3;
  local_138 = 0.0;
  ppuStack_128 = &PTR_LAB_14a1795c0;
  local_120 = &LAB_143ccdd2e;
  local_148 = &DAT_14011fc1e;
  DAT_14cb727b0 = plVar15;
  FUN_1460e39ee(&local_148);
  atexit((_func_5014 *)&LAB_143cc52b2);
  _DAT_14cb72848 = &LAB_143cc52b7;
  _DAT_14cb72850 = 0x461c4c00;
  DAT_14cb72854 = 1;
  DAT_14cb72840 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb72840;
  atexit((_func_5014 *)&LAB_143cc52bc);
  DAT_14cb728c0 = (longlong *)0x0;
  _DAT_14cb728c8 = 0;
  plVar15 = (longlong *)FUN_140595974(0x198,0);
  *plVar15 = (longlong)(plVar15 + 0x11);
  plVar15[0x11] = (longlong)(plVar15 + 0x22);
  plVar15[0x22] = (longlong)DAT_14cb728c0;
  _DAT_14cb728c8 = _DAT_14cb728c8 + 3;
  local_138 = 0.0;
  ppuStack_128 = &PTR_LAB_14a1795c0;
  local_120 = &LAB_143ccdd78;
  local_148 = &DAT_14011fc1e;
  DAT_14cb728c0 = plVar15;
  FUN_1460e4184(&local_148);
  atexit((_func_5014 *)&LAB_143cc53a1);
  _DAT_14cb72958 = &LAB_143cc53a6;
  _DAT_14cb72960 = 0x461c4800;
  DAT_14cb72964 = 1;
  DAT_14cb72950 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb72950;
  atexit((_func_5014 *)&LAB_143cc53ab);
  local_148 = (char *)0x0;
  dStack_140 = (double)((ulonglong)dStack_140 & 0xffffffff00000000);
  FUN_1446efa72(&local_148,0,2,0x10);
  dStack_140._0_4_ = 2;
  *(undefined ***)local_148 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar18 = DAT_14c758608 + 1;
  lVar17 = DAT_14c758608 + 1;
  if (lVar18 == 0) {
    LOCK();
    UNLOCK();
    lVar18 = DAT_14c758608 + 2;
    lVar17 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar17;
  *(longlong *)(local_148 + 0x10) = lVar18;
  *(undefined ***)local_148 = &PTR_FUN_14a380e50;
  *(code **)(local_148 + 0x18) = FUN_1487e1df3;
  local_208 = (undefined *)((ulonglong)local_208._4_4_ << 0x20);
  FUN_14156bb10(&DAT_14cb72970,0x14b3ef9dc,0x14b3ef982,&local_148);
  if (dStack_140._0_4_ == 0) {
LAB_143ccebf8:
    if (local_148 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_148 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_148)(local_148,0);
    FUN_1446efa72(&local_148,0,0,0x10);
    dStack_140._0_4_ = 0;
    goto LAB_143ccebf8;
  }
  atexit(FUN_143cc5d64);
  DAT_14cb729e0 = 0;
  uRam000000014cb729e8 = 0;
  local_138 = 0.0;
  ppuStack_128 = &PTR_LAB_14a1795c0;
  local_120 = &LAB_143cce0a6;
  local_148 = &DAT_14011fc1e;
  FUN_1460e491a(&local_148);
  atexit((_func_5014 *)&LAB_143cc5dd2);
  _DAT_14cb72a78 = &LAB_143cc5dd7;
  _DAT_14cb72a80 = 0x434a0000;
  DAT_14cb72a84 = 1;
  DAT_14cb72a70 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb72a70;
  atexit((_func_5014 *)&LAB_143cc5ddc);
  _DAT_14cb72a90 = 0xb33bbd2e;
  local_148 = DAT_14c846290;
  dStack_140 = DAT_14c846298;
  local_138 = DAT_14c8462a0;
  local_130 = DAT_14c8462a8;
  ppuStack_128 = (undefined **)DAT_14c8462b0;
  local_120 = (undefined1 *)DAT_14c8462b8;
  local_118 = DAT_14c8462c0;
  dStack_110 = DAT_14c8462c8;
  local_108 = DAT_14c8462d0;
  local_100 = DAT_14c8462d8;
  dStack_f8 = DAT_14c8462e0;
  local_f0 = DAT_14c8462e8;
  dVar23 = DAT_14c8462e0 + DAT_14c846298;
  dVar2 = DAT_14c8462d8 + (double)DAT_14c846290;
  dVar1 = dVar2 * dVar2 + dVar23 * dVar23;
  uVar20 = SUB84(DAT_14c8464f0,0);
  uVar22 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  if ((dVar1 != 1.0) || (NAN(dVar1))) {
    uVar19 = uVar20;
    uVar21 = uVar22;
    local_1f0 = DAT_14c8464e8;
    dVar24 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar1) {
      uVar19 = 0;
      uVar21 = 0;
      local_1f0 = dVar23 * (1.0 / SQRT(dVar1));
      dVar24 = dVar2 * (1.0 / SQRT(dVar1));
    }
    dVar2 = dVar24;
    local_1e8 = (double)CONCAT44(uVar21,uVar19);
  }
  else {
    local_1e8 = (double)(-(ulonglong)(DAT_14c8462e8 + DAT_14c8462a0 == 0.0) &
                        (ulonglong)(DAT_14c8462e8 + DAT_14c8462a0));
    local_1f0 = dVar23;
  }
  uStack_1e0 = 0;
  dVar23 = DAT_14c8462e0 + DAT_14c8462b0;
  dVar24 = DAT_14c8462d8 + DAT_14c8462a8;
  dVar1 = dVar24 * dVar24 + dVar23 * dVar23;
  if ((dVar1 != 1.0) || (NAN(dVar1))) {
    uVar19 = uVar20;
    uVar21 = uVar22;
    dVar25 = DAT_14c8464e8;
    dVar3 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar1) {
      uVar19 = 0;
      uVar21 = 0;
      dVar25 = dVar23 * (1.0 / SQRT(dVar1));
      dVar3 = dVar24 * (1.0 / SQRT(dVar1));
    }
  }
  else {
    uVar6 = -(ulonglong)(DAT_14c8462e8 + DAT_14c8462b8 == 0.0) &
            (ulonglong)(DAT_14c8462e8 + DAT_14c8462b8);
    uVar19 = (int)uVar6;
    uVar21 = (int)(uVar6 >> 0x20);
    dVar25 = dVar23;
    dVar3 = dVar24;
  }
  local_158 = DAT_14c846300;
  local_168 = DAT_14c8462f0;
  dStack_160 = DAT_14c8462f8;
  local_188 = DAT_14c846308;
  dStack_180 = DAT_14c846310;
  local_178 = DAT_14c846318;
  dVar1 = DAT_14c846298 + DAT_14c846310;
  dVar23 = (double)DAT_14c846290 + DAT_14c846308;
  dVar24 = dVar23 * dVar23 + dVar1 * dVar1;
  if ((dVar24 != 1.0) || (NAN(dVar24))) {
    uVar26 = uVar20;
    uVar27 = uVar22;
    dVar4 = DAT_14c8464e8;
    dVar5 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar24) {
      uVar26 = 0;
      uVar27 = 0;
      dVar4 = dVar1 * (1.0 / SQRT(dVar24));
      dVar5 = dVar23 * (1.0 / SQRT(dVar24));
    }
  }
  else {
    uVar6 = -(ulonglong)(DAT_14c846318 + DAT_14c8462a0 == 0.0) &
            (ulonglong)(DAT_14c846318 + DAT_14c8462a0);
    uVar26 = (int)uVar6;
    uVar27 = (int)(uVar6 >> 0x20);
    dVar4 = dVar1;
    dVar5 = dVar23;
  }
  dVar23 = DAT_14c8462b0 + DAT_14c846310;
  dVar24 = DAT_14c8462a8 + DAT_14c846308;
  dVar1 = dVar24 * dVar24 + dVar23 * dVar23;
  if ((dVar1 != 1.0) || (NAN(dVar1))) {
    dVar7 = DAT_14c8464e8;
    dVar8 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar1) {
      uVar20 = 0;
      uVar22 = 0;
      dVar7 = dVar23 * (1.0 / SQRT(dVar1));
      dVar8 = dVar24 * (1.0 / SQRT(dVar1));
    }
  }
  else {
    uVar6 = -(ulonglong)(DAT_14c846318 + DAT_14c8462b8 == 0.0) &
            (ulonglong)(DAT_14c846318 + DAT_14c8462b8);
    uVar20 = (undefined4)uVar6;
    uVar22 = (undefined4)(uVar6 >> 0x20);
    dVar7 = dVar23;
    dVar8 = dVar24;
  }
  DAT_14cb72a98 = (void *)0x0;
  _DAT_14cb72aa0 = 10;
  FUN_1405b70fe(&DAT_14cb72a98,10,0);
  pvVar10 = DAT_14cb72a98;
  memcpy(DAT_14cb72a98,&local_148,0x60);
  *(double *)((longlong)pvVar10 + 0x60) = dVar2;
  *(double *)((longlong)pvVar10 + 0x68) = local_1f0;
  *(double *)((longlong)pvVar10 + 0x70) = local_1e8;
  *(double *)((longlong)pvVar10 + 0x78) = dVar3;
  *(double *)((longlong)pvVar10 + 0x80) = dVar25;
  *(ulonglong *)((longlong)pvVar10 + 0x88) = CONCAT44(uVar21,uVar19);
  *(double *)((longlong)pvVar10 + 0x90) = local_168;
  *(double *)((longlong)pvVar10 + 0x98) = dStack_160;
  *(double *)((longlong)pvVar10 + 0xa0) = local_158;
  *(double *)((longlong)pvVar10 + 0xb8) = local_178;
  *(double *)((longlong)pvVar10 + 0xa8) = local_188;
  *(double *)((longlong)pvVar10 + 0xb0) = dStack_180;
  *(double *)((longlong)pvVar10 + 0xc0) = dVar5;
  *(double *)((longlong)pvVar10 + 200) = dVar4;
  *(ulonglong *)((longlong)pvVar10 + 0xd0) = CONCAT44(uVar27,uVar26);
  *(double *)((longlong)pvVar10 + 0xd8) = dVar8;
  *(double *)((longlong)pvVar10 + 0xe0) = dVar7;
  *(ulonglong *)((longlong)pvVar10 + 0xe8) = CONCAT44(uVar22,uVar20);
  atexit((_func_5014 *)&LAB_143cc5e10);
  uVar19 = SUB84(DAT_14c846290,0);
  uVar21 = (undefined4)((ulonglong)DAT_14c846290 >> 0x20);
  uVar20 = SUB84(DAT_14c846298,0);
  uVar22 = (undefined4)((ulonglong)DAT_14c846298 >> 0x20);
  if (((((double)DAT_14c846290 != 0.0) || (NAN((double)DAT_14c846290))) || (DAT_14c846298 != 0.0))
     || (NAN(DAT_14c846298))) {
    local_1f0 = atan2(DAT_14c846298,(double)DAT_14c846290);
    local_1f0 = local_1f0 * 57.29577951308232;
    uVar19 = SUB84(DAT_14c846290,0);
    uVar21 = (undefined4)((ulonglong)DAT_14c846290 >> 0x20);
    uVar20 = SUB84(DAT_14c846298,0);
    uVar22 = (undefined4)((ulonglong)DAT_14c846298 >> 0x20);
  }
  else {
    local_1f0 = 0.0;
  }
  dVar2 = SQRT((double)CONCAT44(uVar21,uVar19) * (double)CONCAT44(uVar21,uVar19) +
               (double)CONCAT44(uVar22,uVar20) * (double)CONCAT44(uVar22,uVar20));
  dVar1 = 0.0;
  if (((DAT_14c8462a0 != 0.0) || (NAN(DAT_14c8462a0))) || ((dVar2 != 0.0 || (NAN(dVar2))))) {
    dVar1 = atan2(DAT_14c8462a0,dVar2);
    dVar1 = dVar1 * 57.29577951308232;
  }
  uVar19 = SUB84(DAT_14c8462a8,0);
  uVar21 = (undefined4)((ulonglong)DAT_14c8462a8 >> 0x20);
  uVar20 = SUB84(DAT_14c8462b0,0);
  uVar22 = (undefined4)((ulonglong)DAT_14c8462b0 >> 0x20);
  if (((DAT_14c8462a8 != 0.0) || (NAN(DAT_14c8462a8))) ||
     ((DAT_14c8462b0 != 0.0 || (NAN(DAT_14c8462b0))))) {
    local_1c8 = atan2(DAT_14c8462b0,DAT_14c8462a8);
    local_1c8 = local_1c8 * 57.29577951308232;
    uVar19 = SUB84(DAT_14c8462a8,0);
    uVar21 = (undefined4)((ulonglong)DAT_14c8462a8 >> 0x20);
    uVar20 = SUB84(DAT_14c8462b0,0);
    uVar22 = (undefined4)((ulonglong)DAT_14c8462b0 >> 0x20);
  }
  else {
    local_1c8 = 0.0;
  }
  dVar23 = SQRT((double)CONCAT44(uVar21,uVar19) * (double)CONCAT44(uVar21,uVar19) +
                (double)CONCAT44(uVar22,uVar20) * (double)CONCAT44(uVar22,uVar20));
  dVar2 = 0.0;
  if ((((DAT_14c8462b8 != 0.0) || (NAN(DAT_14c8462b8))) || (dVar23 != 0.0)) || (NAN(dVar23))) {
    dVar2 = atan2(DAT_14c8462b8,dVar23);
    dVar2 = dVar2 * 57.29577951308232;
  }
  uVar19 = SUB84(DAT_14c8462c0,0);
  uVar21 = (undefined4)((ulonglong)DAT_14c8462c0 >> 0x20);
  uVar20 = SUB84(DAT_14c8462c8,0);
  uVar22 = (undefined4)((ulonglong)DAT_14c8462c8 >> 0x20);
  if (((DAT_14c8462c0 != 0.0) || (NAN(DAT_14c8462c0))) ||
     ((DAT_14c8462c8 != 0.0 || (NAN(DAT_14c8462c8))))) {
    local_1d0 = atan2(DAT_14c8462c8,DAT_14c8462c0);
    local_1d0 = local_1d0 * 57.29577951308232;
    uVar19 = SUB84(DAT_14c8462c0,0);
    uVar21 = (undefined4)((ulonglong)DAT_14c8462c0 >> 0x20);
    uVar20 = SUB84(DAT_14c8462c8,0);
    uVar22 = (undefined4)((ulonglong)DAT_14c8462c8 >> 0x20);
  }
  else {
    local_1d0 = 0.0;
  }
  dVar23 = SQRT((double)CONCAT44(uVar21,uVar19) * (double)CONCAT44(uVar21,uVar19) +
                (double)CONCAT44(uVar22,uVar20) * (double)CONCAT44(uVar22,uVar20));
  local_198 = 0.0;
  if (((DAT_14c8462d0 != 0.0) || (NAN(DAT_14c8462d0))) || ((dVar23 != 0.0 || (NAN(dVar23))))) {
    local_198 = atan2(DAT_14c8462d0,dVar23);
    local_198 = local_198 * 57.29577951308232;
  }
  uVar20 = SUB84(DAT_14c8462d8,0);
  uVar22 = (undefined4)((ulonglong)DAT_14c8462d8 >> 0x20);
  uVar19 = SUB84(DAT_14c8462e0,0);
  uVar21 = (undefined4)((ulonglong)DAT_14c8462e0 >> 0x20);
  if ((((DAT_14c8462d8 != 0.0) || (NAN(DAT_14c8462d8))) || (DAT_14c8462e0 != 0.0)) ||
     (NAN(DAT_14c8462e0))) {
    local_1d8 = atan2(DAT_14c8462e0,DAT_14c8462d8);
    local_1d8 = local_1d8 * 57.29577951308232;
    uVar20 = SUB84(DAT_14c8462d8,0);
    uVar22 = (undefined4)((ulonglong)DAT_14c8462d8 >> 0x20);
    uVar19 = SUB84(DAT_14c8462e0,0);
    uVar21 = (undefined4)((ulonglong)DAT_14c8462e0 >> 0x20);
  }
  else {
    local_1d8 = 0.0;
  }
  dVar23 = SQRT((double)CONCAT44(uVar22,uVar20) * (double)CONCAT44(uVar22,uVar20) +
                (double)CONCAT44(uVar21,uVar19) * (double)CONCAT44(uVar21,uVar19));
  local_1a0 = 0.0;
  if (((DAT_14c8462e8 != 0.0) || (NAN(DAT_14c8462e8))) || ((dVar23 != 0.0 || (NAN(dVar23))))) {
    local_1a0 = atan2(DAT_14c8462e8,dVar23);
    local_1a0 = local_1a0 * 57.29577951308232;
    uVar19 = SUB84(DAT_14c8462e0,0);
    uVar21 = (undefined4)((ulonglong)DAT_14c8462e0 >> 0x20);
    uVar20 = SUB84(DAT_14c8462d8,0);
    uVar22 = (undefined4)((ulonglong)DAT_14c8462d8 >> 0x20);
  }
  dVar25 = (double)CONCAT44(uVar21,uVar19) + DAT_14c846298;
  dVar24 = (double)CONCAT44(uVar22,uVar20) + (double)DAT_14c846290;
  dVar23 = dVar24 * dVar24 + dVar25 * dVar25;
  if ((dVar23 != 1.0) || (NAN(dVar23))) {
    dVar3 = DAT_14c8464e8;
    dVar4 = DAT_14c8464e0;
    dVar5 = DAT_14c8464f0;
    if (9.99999993922529e-09 <= dVar23) {
      dVar3 = dVar25 * (1.0 / SQRT(dVar23));
      dVar4 = dVar24 * (1.0 / SQRT(dVar23));
      dVar5 = 0.0;
    }
  }
  else {
    dVar23 = DAT_14c8462e8 + DAT_14c8462a0;
    dVar3 = dVar25;
    dVar4 = dVar24;
    dVar5 = 0.0;
    if ((dVar23 == 0.0) && (dVar5 = 0.0, !NAN(dVar23))) {
      dVar5 = dVar23;
    }
  }
  local_1a8 = 0.0;
  if ((((dVar3 != 0.0) || (NAN(dVar3))) || (dVar4 != 0.0)) || (NAN(dVar4))) {
    local_1a8 = atan2(dVar3,dVar4);
    local_1a8 = local_1a8 * 57.29577951308232;
  }
  dVar23 = SQRT(dVar4 * dVar4 + dVar3 * dVar3);
  local_1b0 = 0.0;
  if (((dVar5 != 0.0) || (NAN(dVar5))) || ((dVar23 != 0.0 || (NAN(dVar23))))) {
    local_1b0 = atan2(dVar5,dVar23);
    local_1b0 = local_1b0 * 57.29577951308232;
  }
  dVar23 = DAT_14c8462e0 + DAT_14c8462b0;
  dVar24 = DAT_14c8462d8 + DAT_14c8462a8;
  dVar25 = dVar24 * dVar24 + dVar23 * dVar23;
  if ((dVar25 != 1.0) || (NAN(dVar25))) {
    if (9.99999993922529e-09 <= dVar25) {
      dVar23 = dVar23 * (1.0 / SQRT(dVar25));
      dVar24 = dVar24 * (1.0 / SQRT(dVar25));
      uVar20 = 0;
      uVar22 = 0;
    }
    else {
      uVar20 = SUB84(DAT_14c8464f0,0);
      uVar22 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      dVar23 = DAT_14c8464e8;
      dVar24 = DAT_14c8464e0;
    }
  }
  else {
    dVar25 = DAT_14c8462e8 + DAT_14c8462b8;
    uVar20 = 0;
    uVar22 = 0;
    if ((dVar25 == 0.0) && (!NAN(dVar25))) {
      uVar20 = SUB84(dVar25,0);
      uVar22 = (undefined4)((ulonglong)dVar25 >> 0x20);
    }
  }
  local_1b8 = 0.0;
  if ((((dVar23 != 0.0) || (NAN(dVar23))) || (dVar24 != 0.0)) || (NAN(dVar24))) {
    local_1b8 = atan2(dVar23,dVar24);
    local_1b8 = local_1b8 * 57.29577951308232;
  }
  dVar23 = SQRT(dVar24 * dVar24 + dVar23 * dVar23);
  local_1c0 = 0.0;
  if ((((double)CONCAT44(uVar22,uVar20) != 0.0) || (NAN((double)CONCAT44(uVar22,uVar20)))) ||
     ((dVar23 != 0.0 || (NAN(dVar23))))) {
    local_1c0 = atan2((double)CONCAT44(uVar22,uVar20),dVar23);
    local_1c0 = local_1c0 * 57.29577951308232;
  }
  uVar19 = SUB84(DAT_14c8462f0,0);
  uVar21 = (undefined4)((ulonglong)DAT_14c8462f0 >> 0x20);
  uVar20 = SUB84(DAT_14c8462f8,0);
  uVar22 = (undefined4)((ulonglong)DAT_14c8462f8 >> 0x20);
  dVar23 = 0.0;
  local_1e8 = dVar1;
  if (((DAT_14c8462f0 != 0.0) || (NAN(DAT_14c8462f0))) ||
     ((DAT_14c8462f8 != 0.0 || (NAN(DAT_14c8462f8))))) {
    dVar23 = atan2(DAT_14c8462f8,DAT_14c8462f0);
    dVar23 = dVar23 * 57.29577951308232;
    uVar19 = SUB84(DAT_14c8462f0,0);
    uVar21 = (undefined4)((ulonglong)DAT_14c8462f0 >> 0x20);
    uVar20 = SUB84(DAT_14c8462f8,0);
    uVar22 = (undefined4)((ulonglong)DAT_14c8462f8 >> 0x20);
  }
  dVar24 = SQRT((double)CONCAT44(uVar21,uVar19) * (double)CONCAT44(uVar21,uVar19) +
                (double)CONCAT44(uVar22,uVar20) * (double)CONCAT44(uVar22,uVar20));
  dVar1 = 0.0;
  if ((((DAT_14c846300 != 0.0) || (NAN(DAT_14c846300))) || (dVar24 != 0.0)) || (NAN(dVar24))) {
    dVar1 = atan2(DAT_14c846300,dVar24);
    dVar1 = dVar1 * 57.29577951308232;
  }
  uVar20 = SUB84(DAT_14c846308,0);
  uVar22 = (undefined4)((ulonglong)DAT_14c846308 >> 0x20);
  uVar19 = SUB84(DAT_14c846310,0);
  uVar21 = (undefined4)((ulonglong)DAT_14c846310 >> 0x20);
  dVar24 = 0.0;
  local_190 = dVar2;
  if (((DAT_14c846308 != 0.0) || (NAN(DAT_14c846308))) ||
     ((DAT_14c846310 != 0.0 || (NAN(DAT_14c846310))))) {
    dVar24 = atan2(DAT_14c846310,DAT_14c846308);
    dVar24 = dVar24 * 57.29577951308232;
    uVar20 = SUB84(DAT_14c846308,0);
    uVar22 = (undefined4)((ulonglong)DAT_14c846308 >> 0x20);
    uVar19 = SUB84(DAT_14c846310,0);
    uVar21 = (undefined4)((ulonglong)DAT_14c846310 >> 0x20);
  }
  dVar25 = SQRT((double)CONCAT44(uVar22,uVar20) * (double)CONCAT44(uVar22,uVar20) +
                (double)CONCAT44(uVar21,uVar19) * (double)CONCAT44(uVar21,uVar19));
  dVar2 = 0.0;
  if (((DAT_14c846318 != 0.0) || (NAN(DAT_14c846318))) || ((dVar25 != 0.0 || (NAN(dVar25))))) {
    dVar2 = atan2(DAT_14c846318,dVar25);
    dVar2 = dVar2 * 57.29577951308232;
    uVar19 = SUB84(DAT_14c846310,0);
    uVar21 = (undefined4)((ulonglong)DAT_14c846310 >> 0x20);
    uVar20 = SUB84(DAT_14c846308,0);
    uVar22 = (undefined4)((ulonglong)DAT_14c846308 >> 0x20);
  }
  dVar4 = (double)CONCAT44(uVar21,uVar19) + DAT_14c846298;
  dVar3 = (double)CONCAT44(uVar22,uVar20) + (double)DAT_14c846290;
  dVar25 = dVar3 * dVar3 + dVar4 * dVar4;
  if ((dVar25 != 1.0) || (NAN(dVar25))) {
    if (9.99999993922529e-09 <= dVar25) {
      dVar4 = dVar4 * (1.0 / SQRT(dVar25));
      dVar3 = dVar3 * (1.0 / SQRT(dVar25));
      uVar20 = 0;
      uVar22 = 0;
    }
    else {
      uVar20 = SUB84(DAT_14c8464f0,0);
      uVar22 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      dVar4 = DAT_14c8464e8;
      dVar3 = DAT_14c8464e0;
    }
  }
  else {
    dVar25 = DAT_14c846318 + DAT_14c8462a0;
    uVar20 = 0;
    uVar22 = 0;
    if ((dVar25 == 0.0) && (!NAN(dVar25))) {
      uVar20 = SUB84(dVar25,0);
      uVar22 = (undefined4)((ulonglong)dVar25 >> 0x20);
    }
  }
  dVar25 = 0.0;
  if ((((dVar4 != 0.0) || (NAN(dVar4))) || (dVar3 != 0.0)) || (NAN(dVar3))) {
    dVar25 = atan2(dVar4,dVar3);
    dVar25 = dVar25 * 57.29577951308232;
  }
  dVar4 = SQRT(dVar3 * dVar3 + dVar4 * dVar4);
  dVar3 = 0.0;
  if ((((double)CONCAT44(uVar22,uVar20) != 0.0) || (NAN((double)CONCAT44(uVar22,uVar20)))) ||
     ((dVar4 != 0.0 || (NAN(dVar4))))) {
    dVar3 = atan2((double)CONCAT44(uVar22,uVar20),dVar4);
    dVar3 = dVar3 * 57.29577951308232;
  }
  dVar5 = DAT_14c846310 + DAT_14c8462b0;
  dVar7 = DAT_14c846308 + DAT_14c8462a8;
  dVar4 = dVar7 * dVar7 + dVar5 * dVar5;
  if ((dVar4 != 1.0) || (NAN(dVar4))) {
    if (9.99999993922529e-09 <= dVar4) {
      dVar5 = dVar5 * (1.0 / SQRT(dVar4));
      dVar7 = dVar7 * (1.0 / SQRT(dVar4));
      uVar20 = 0;
      uVar22 = 0;
    }
    else {
      uVar20 = SUB84(DAT_14c8464f0,0);
      uVar22 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      dVar5 = DAT_14c8464e8;
      dVar7 = DAT_14c8464e0;
    }
  }
  else {
    dVar4 = DAT_14c846318 + DAT_14c8462b8;
    uVar20 = 0;
    uVar22 = 0;
    if ((dVar4 == 0.0) && (!NAN(dVar4))) {
      uVar20 = SUB84(dVar4,0);
      uVar22 = (undefined4)((ulonglong)dVar4 >> 0x20);
    }
  }
  dVar4 = 0.0;
  if ((((dVar5 != 0.0) || (NAN(dVar5))) || (dVar7 != 0.0)) || (NAN(dVar7))) {
    dVar4 = atan2(dVar5,dVar7);
    dVar4 = dVar4 * 57.29577951308232;
  }
  dVar7 = SQRT(dVar7 * dVar7 + dVar5 * dVar5);
  dVar5 = 0.0;
  if ((((double)CONCAT44(uVar22,uVar20) != 0.0) || (NAN((double)CONCAT44(uVar22,uVar20)))) ||
     ((dVar7 != 0.0 || (NAN(dVar7))))) {
    dVar5 = atan2((double)CONCAT44(uVar22,uVar20),dVar7);
    dVar5 = dVar5 * 57.29577951308232;
  }
  DAT_14cb72aa8 = (double *)0x0;
  _DAT_14cb72ab0 = 10;
  FUN_1464bf958(&DAT_14cb72aa8,10,0);
  pdVar11 = DAT_14cb72aa8;
  *DAT_14cb72aa8 = local_1e8;
  pdVar11[1] = local_1f0;
  pdVar11[2] = 0.0;
  pdVar11[3] = local_190;
  pdVar11[4] = local_1c8;
  pdVar11[5] = 0.0;
  pdVar11[6] = local_198;
  pdVar11[7] = local_1d0;
  pdVar11[8] = 0.0;
  pdVar11[9] = local_1a0;
  pdVar11[10] = local_1d8;
  pdVar11[0xb] = 0.0;
  pdVar11[0xc] = local_1b0;
  pdVar11[0xd] = local_1a8;
  pdVar11[0xe] = 0.0;
  pdVar11[0xf] = local_1c0;
  pdVar11[0x10] = local_1b8;
  pdVar11[0x11] = 0.0;
  pdVar11[0x12] = dVar1;
  pdVar11[0x13] = dVar23;
  pdVar11[0x14] = 0.0;
  pdVar11[0x15] = dVar2;
  pdVar11[0x16] = dVar24;
  pdVar11[0x17] = 0.0;
  pdVar11[0x18] = dVar3;
  pdVar11[0x19] = dVar25;
  pdVar11[0x1a] = 0.0;
  pdVar11[0x1b] = dVar5;
  pdVar11[0x1c] = dVar4;
  pdVar11[0x1d] = 0.0;
  atexit((_func_5014 *)&LAB_143cc5e21);
  local_208 = (undefined *)CONCAT44(local_208._4_4_,0x3fc00000);
  FUN_1412cc41e(&DAT_14cb72ab8,L"FGbxWorldAudioManager",0,1);
  DAT_14cb72ad0 = 0;
  DAT_14cb72ae0 = 0;
  atexit((_func_5014 *)&LAB_143cc6482);
  local_148 = "nexus";
  dStack_140 = (double)CONCAT35(dStack_140._5_3_,5);
  uVar13 = FUN_14001a6c0(&local_148,1);
  _DAT_14cb72b10 = (ulonglong)uVar13;
  FUN_1400b22c2(&local_148,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar12 = FUN_140b10a34(&local_148,&DAT_14cb72b18);
  if (cVar12 == '\0') {
    _DAT_14cb72b18 = 0;
    uRam000000014cb72b20 = 0;
  }
  if (local_148 != (char *)0x0) {
    FUN_1400020a8();
  }
  ram0x00014cb72b2c = 0;
  FUN_14052b5e0(&DAT_14cb72b28,"paramremaps",0);
  DAT_14cb72b98 = (undefined8 *)0x0;
  _DAT_14cb72ba0 = 0;
  puVar14 = (undefined8 *)FUN_140595974(0x1400,0);
  lVar17 = 0x3f;
  puVar9 = puVar14;
  do {
    puVar16 = puVar9 + 10;
    *puVar9 = puVar16;
    lVar17 = lVar17 + -1;
    puVar9 = puVar16;
  } while (lVar17 != 0);
  _DAT_14cb72ba0 = _DAT_14cb72ba0 + 0x40;
  *puVar16 = DAT_14cb72b98;
  DAT_14cb72b98 = puVar14;
  local_138 = 0.0;
  ppuStack_128 = &PTR_LAB_14a1795c0;
  local_120 = &LAB_143cce4f6;
  local_148 = &DAT_14011fc1e;
  FUN_1460e50b0();
  atexit((_func_5014 *)&LAB_143cc64d2);
  DAT_14cb72c90 = (undefined8 *)0x0;
  _DAT_14cb72c98 = 0;
  puVar14 = (undefined8 *)FUN_140595974(0x19800,0);
  lVar17 = 0x7f;
  puVar9 = puVar14;
  do {
    puVar16 = puVar9 + 0x66;
    *puVar9 = puVar16;
    lVar17 = lVar17 + -1;
    puVar9 = puVar16;
  } while (lVar17 != 0);
  _DAT_14cb72c98 = _DAT_14cb72c98 + 0x80;
  *puVar16 = DAT_14cb72c90;
  DAT_14cb72c90 = puVar14;
  local_138 = 0.0;
  ppuStack_128 = &PTR_LAB_14a1795c0;
  local_120 = &LAB_143cce4fc;
  local_148 = &DAT_14011fc1e;
  FUN_1460e5846();
  atexit((_func_5014 *)&LAB_143cc6500);
  DAT_14cb72d80 = (undefined8 *)0x0;
  _DAT_14cb72d88 = 0;
  puVar14 = (undefined8 *)FUN_140595974(0x1500,0);
  lVar17 = 0xf;
  puVar9 = puVar14;
  do {
    puVar16 = puVar9 + 0x2a;
    *puVar9 = puVar16;
    lVar17 = lVar17 + -1;
    puVar9 = puVar16;
  } while (lVar17 != 0);
  _DAT_14cb72d88 = _DAT_14cb72d88 + 0x10;
  *puVar16 = DAT_14cb72d80;
  DAT_14cb72d80 = puVar14;
  local_138 = 0.0;
  ppuStack_128 = &PTR_LAB_14a1795c0;
  local_120 = &LAB_143cce502;
  local_148 = &DAT_14011fc1e;
  FUN_1460e5fdc();
  atexit((_func_5014 *)&LAB_143cc652e);
  DAT_14cb72e70 = (undefined8 *)0x0;
  _DAT_14cb72e78 = 0;
  puVar14 = (undefined8 *)FUN_140595974(0x1c0,0);
  lVar17 = 7;
  puVar9 = puVar14;
  do {
    puVar16 = puVar9 + 7;
    *puVar9 = puVar16;
    lVar17 = lVar17 + -1;
    puVar9 = puVar16;
  } while (lVar17 != 0);
  _DAT_14cb72e78 = _DAT_14cb72e78 + 8;
  *puVar16 = DAT_14cb72e70;
  DAT_14cb72e70 = puVar14;
  local_138 = 0.0;
  ppuStack_128 = &PTR_LAB_14a1795c0;
  local_120 = &LAB_143cce508;
  local_148 = &DAT_14011fc1e;
  FUN_1460e6772();
  atexit((_func_5014 *)&LAB_143cc655c);
  DAT_14cb72f60 = (undefined8 *)0x0;
  _DAT_14cb72f68 = 0;
  puVar14 = (undefined8 *)FUN_140595974(0x1380,0);
  lVar17 = 7;
  puVar9 = puVar14;
  do {
    puVar16 = puVar9 + 0x4e;
    *puVar9 = puVar16;
    lVar17 = lVar17 + -1;
    puVar9 = puVar16;
  } while (lVar17 != 0);
  _DAT_14cb72f68 = _DAT_14cb72f68 + 8;
  *puVar16 = DAT_14cb72f60;
  DAT_14cb72f60 = puVar14;
  local_138 = 0.0;
  ppuStack_128 = &PTR_LAB_14a1795c0;
  local_120 = &LAB_143cce50e;
  local_148 = &DAT_14011fc1e;
  FUN_1460e6f08();
  atexit((_func_5014 *)&LAB_143cc658a);
  DAT_14cb73050 = (undefined8 *)0x0;
  _DAT_14cb73058 = 0;
  puVar14 = (undefined8 *)FUN_140595974(0x1700,0);
  lVar17 = 0x1f;
  puVar9 = puVar14;
  do {
    puVar16 = puVar9 + 0x17;
    *puVar9 = puVar16;
    lVar17 = lVar17 + -1;
    puVar9 = puVar16;
  } while (lVar17 != 0);
  _DAT_14cb73058 = _DAT_14cb73058 + 0x20;
  *puVar16 = DAT_14cb73050;
  DAT_14cb73050 = puVar14;
  local_138 = 0.0;
  ppuStack_128 = &PTR_LAB_14a1795c0;
  local_120 = &LAB_143cce514;
  local_148 = &DAT_14011fc1e;
  FUN_1460e769e();
  atexit((_func_5014 *)&LAB_143cc65b8);
  DAT_14cb73140 = (undefined8 *)0x0;
  _DAT_14cb73148 = 0;
  puVar14 = (undefined8 *)FUN_140595974(0x540,0);
  lVar17 = 7;
  puVar9 = puVar14;
  do {
    puVar16 = puVar9 + 0x15;
    *puVar9 = puVar16;
    lVar17 = lVar17 + -1;
    puVar9 = puVar16;
  } while (lVar17 != 0);
  _DAT_14cb73148 = _DAT_14cb73148 + 8;
  *puVar16 = DAT_14cb73140;
  DAT_14cb73140 = puVar14;
  local_138 = 0.0;
  ppuStack_128 = &PTR_LAB_14a1795c0;
  local_120 = &LAB_143cce51a;
  local_148 = &DAT_14011fc1e;
  FUN_1460e7e34();
  atexit((_func_5014 *)&LAB_143cc65e6);
  DAT_14cb73230 = (undefined8 *)0x0;
  _DAT_14cb73238 = 0;
  puVar14 = (undefined8 *)FUN_140595974(0x1c0,0);
  lVar17 = 7;
  puVar9 = puVar14;
  do {
    puVar16 = puVar9 + 7;
    *puVar9 = puVar16;
    lVar17 = lVar17 + -1;
    puVar9 = puVar16;
  } while (lVar17 != 0);
  _DAT_14cb73238 = _DAT_14cb73238 + 8;
  *puVar16 = DAT_14cb73230;
  DAT_14cb73230 = puVar14;
  local_138 = 0.0;
  ppuStack_128 = &PTR_LAB_14a1795c0;
  local_120 = &LAB_143cce520;
  local_148 = &DAT_14011fc1e;
  FUN_1460e85ca();
  atexit((_func_5014 *)&LAB_143cc6614);
  DAT_14cb73320 = (undefined8 *)0x0;
  _DAT_14cb73328 = 0;
  puVar14 = (undefined8 *)FUN_140595974(0x400,0);
  lVar17 = 0xf;
  puVar9 = puVar14;
  do {
    puVar16 = puVar9 + 8;
    *puVar9 = puVar16;
    lVar17 = lVar17 + -1;
    puVar9 = puVar16;
  } while (lVar17 != 0);
  _DAT_14cb73328 = _DAT_14cb73328 + 0x10;
  *puVar16 = DAT_14cb73320;
  DAT_14cb73320 = puVar14;
  local_138 = 0.0;
  ppuStack_128 = &PTR_LAB_14a1795c0;
  local_120 = &LAB_143cce526;
  local_148 = &DAT_14011fc1e;
  FUN_1460e8d60(&local_148);
  atexit((_func_5014 *)&LAB_143cc6642);
  _DAT_14cb733d0 = 0;
  _DAT_14cb733d8 = 0;
  _DAT_14cb733b0 = 0;
  uRam000000014cb733b8 = 0;
  _DAT_14cb733dc = 0xffffffff00000080;
  _DAT_14cb733e4 = 0;
  DAT_14cb733f0 = 0;
  _DAT_14cb733f8 = 0;
  DAT_14cb73400 = 0;
  uRam000000014cb73408 = 0;
  _DAT_14cb73410 = 0;
  InitializeSRWLock((PSRWLOCK)&DAT_14cb73418);
  atexit(FUN_143cc6647);
  _DAT_14cb734b0 = 0;
  _DAT_14cb734b8 = 0;
  _DAT_14cb73490 = 0;
  uRam000000014cb73498 = 0;
  _DAT_14cb734bc = 0xffffffff00000080;
  _DAT_14cb734c4 = 0;
  DAT_14cb734d0 = 0;
  _DAT_14cb734d8 = 0;
  DAT_14cb734e0 = 0;
  uRam000000014cb734e8 = 0;
  _DAT_14cb734f0 = 0;
  InitializeSRWLock((PSRWLOCK)&DAT_14cb734f8);
  atexit(FUN_143cc68eb);
  _DAT_14cb73590 = 0;
  _DAT_14cb73598 = 0;
  _DAT_14cb73570 = 0;
  uRam000000014cb73578 = 0;
  _DAT_14cb7359c = 0xffffffff00000080;
  _DAT_14cb735a4 = 0;
  DAT_14cb735b0 = 0;
  _DAT_14cb735b8 = 0;
  DAT_14cb735c0 = 0;
  uRam000000014cb735c8 = 0;
  _DAT_14cb735d0 = 0;
  InitializeSRWLock((PSRWLOCK)&DAT_14cb735d8);
  atexit(FUN_143cc692b);
  _DAT_14cb73440 = 0;
  _DAT_14cb73448 = 0;
  _DAT_14cb73420 = 0;
  _DAT_14cb73428 = 0;
  _DAT_14cb7344c = 0xffffffff00000080;
  _DAT_14cb73454 = 0;
  DAT_14cb73460 = 0;
  _DAT_14cb73468 = 0;
  DAT_14cb73470 = 0;
  uRam000000014cb73478 = 0;
  _DAT_14cb73480 = 0;
  InitializeSRWLock((PSRWLOCK)&DAT_14cb73488);
  atexit(FUN_143cc696b);
  _DAT_14cb73520 = 0;
  _DAT_14cb73528 = 0;
  _DAT_14cb73500 = 0;
  uRam000000014cb73508 = 0;
  _DAT_14cb7352c = 0xffffffff00000080;
  _DAT_14cb73534 = 0;
  DAT_14cb73540 = 0;
  _DAT_14cb73548 = 0;
  DAT_14cb73550 = 0;
  uRam000000014cb73558 = 0;
  _DAT_14cb73560 = 0;
  InitializeSRWLock((PSRWLOCK)&DAT_14cb73568);
  atexit(FUN_143cc69ab);
  _DAT_14cb73700 = 0;
  _DAT_14cb73708 = 0;
  _DAT_14cb736e0 = 0;
  uRam000000014cb736e8 = 0;
  _DAT_14cb7370c = 0xffffffff00000080;
  _DAT_14cb73714 = 0;
  _DAT_14cb73720 = 0;
  _DAT_14cb73728 = 0;
  _DAT_14cb73750 = 0;
  _DAT_14cb73758 = 0;
  _DAT_14cb73730 = 0;
  uRam000000014cb73738 = 0;
  _DAT_14cb7375c = 0xffffffff00000080;
  _DAT_14cb73764 = 0;
  _DAT_14cb73770 = 0;
  _DAT_14cb73778 = 0;
  atexit((_func_5014 *)&LAB_143cc6fd0);
  local_148 = "rseed";
  dStack_140._0_5_ = 5;
  uVar13 = FUN_14001a6c0(&local_148,1);
  DAT_14cb73780 = (ulonglong)uVar13;
  FUN_1460b1e5a(&DAT_14cb736e0,&DAT_14cb73780,1);
  FUN_1446f470e(&DAT_14cb73888,L"RootComponent",1);
  _DAT_14cb73890 = 0;
  uRam000000014cb73898 = 0;
  _DAT_14cb738a0 = 0;
  DAT_14cb738a8 = 0;
  uRam000000014cb738b0 = 0;
  FUN_1446ddda2(&DAT_14cb73890,"channel",0);
  atexit((_func_5014 *)&LAB_143cc774a);
  local_148 = "default";
  dStack_140._0_5_ = 7;
  uVar13 = FUN_14001a6c0(&local_148,1);
  DAT_14cb738b8 = (ulonglong)uVar13;
  local_148 = "display_tags";
  dStack_140._0_5_ = 0xc;
  uVar13 = FUN_14001a6c0(&local_148,1);
  DAT_14cb738c0 = (ulonglong)uVar13;
  local_148 = "display_switch";
  dStack_140._0_5_ = 0xe;
  uVar13 = FUN_14001a6c0(&local_148,1);
  DAT_14cb738c8 = (ulonglong)uVar13;
  local_148 = "materials";
  dStack_140._0_5_ = 9;
  uVar13 = FUN_14001a6c0(&local_148,1);
  DAT_14cb738d0 = (ulonglong)uVar13;
  local_148 = "parameters";
  dStack_140._0_5_ = 10;
  uVar13 = FUN_14001a6c0(&local_148,1);
  DAT_14cb738d8 = (ulonglong)uVar13;
  local_148 = "presets";
  dStack_140 = (double)CONCAT35(dStack_140._5_3_,7);
  uVar13 = FUN_14001a6c0(&local_148,1);
  DAT_14cb738e0 = (ulonglong)uVar13;
  DAT_14cb738e8 = DAT_14cb738b8;
  DAT_14cb73dc0 = DAT_14cb738c0;
  DAT_14cb738f0 = DAT_14cb738c8;
  DAT_14cb73dc8 = DAT_14cb738d0;
  DAT_14cb73dd0 = DAT_14cb738d8;
  local_200 = 0;
  local_208 = &DAT_14b3efcb0;
  DAT_14cb73dd8 = DAT_14cb738e0;
  FUN_14655db90(&DAT_14cb738f8,FUN_1487e6406,"FAvatarSerialNumber",2);
  atexit((_func_5014 *)&LAB_143cc7d12);
  FUN_14655da9e(&DAT_14cb73e00,"avatar_part",1,1);
  atexit((_func_5014 *)&LAB_143cc7d1e);
  FUN_145ac34fe(&DAT_14cb735e0,"avatar_form",1);
  atexit(FUN_143cc7d2a);
  FUN_145ac34fe(&DAT_14cb73788,"avatar_arch",1);
  atexit(FUN_143cc7de8);
  local_138 = (double)((ulonglong)local_138 & 0xffffffff00000000);
  local_148 = (char *)0x0;
  dStack_140 = 0.0;
  local_130 = 0.0;
  ppuStack_128 = (undefined **)0x0;
  FUN_1446ddda2(&local_148,"no_form",0);
  FUN_1460296a6(&local_148);
  if (local_130 != 0.0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143cc7ea6);
  _DAT_14cb73be0 = DAT_14cb73610;
  DAT_14cb73610 = &DAT_14cb73bd8;
  _DAT_14cb73988 = DAT_14cb735f0;
  _DAT_14cb73990 = 0x10101;
  _DAT_14cb73bd8 = &DAT_14cb73968;
  local_148 = (char *)0x0;
  dStack_140 = 0.0;
  local_138 = (double)((ulonglong)local_138 & 0xffffffff00000000);
  local_130 = 0.0;
  ppuStack_128 = (undefined **)0x0;
  FUN_1446ddda2(&local_148,"no_arch",0);
  FUN_146547a06(&local_148);
  if (local_130 != 0.0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143cc7eb2);
  _DAT_14cb73c98 = DAT_14cb737b8;
  DAT_14cb737b8 = &DAT_14cb73c90;
  _DAT_14cb73c08 = DAT_14cb73798;
  _DAT_14cb73c10 = 0x10101;
  _DAT_14cb73c90 = &DAT_14cb73be8;
  _DAT_14cb73cc0 = 0;
  FUN_14052b5e0(&DAT_14cb73cbc,"no_form",0);
  _DAT_14cb73ccc = 0;
  FUN_14052b5e0(&DAT_14cb73cc8,"no_part",0);
  _DAT_14cb73cd8 = 0;
  FUN_14052b5e0(&DAT_14cb73cd4,"no_choice",0);
  _DAT_14cb73ce4 = 0;
  FUN_14052b5e0(&DAT_14cb73ce0,"no_arch",0);
  local_148 = "_any";
  dStack_140._0_5_ = 4;
  uVar13 = FUN_14001a6c0(&local_148,1);
  DAT_14cb73ca0 = (ulonglong)uVar13;
  local_148 = "skel_mesh";
  dStack_140._0_5_ = 9;
  uVar13 = FUN_14001a6c0(&local_148,1);
  DAT_14cb73cf0 = (ulonglong)uVar13;
  local_148 = "skel_mesh_bundle";
  dStack_140._0_5_ = 0x10;
  uVar13 = FUN_14001a6c0(&local_148,1);
  DAT_14cb73cf8 = (ulonglong)uVar13;
  local_148 = "attachable_body";
  dStack_140._0_5_ = 0xf;
  uVar13 = FUN_14001a6c0(&local_148,1);
  DAT_14cb73d00 = (ulonglong)uVar13;
  local_148 = "forward_dynamics";
  dStack_140 = (double)CONCAT35(dStack_140._5_3_,0x10);
  uVar13 = FUN_14001a6c0(&local_148,1);
  _DAT_14cb73d08 = (ulonglong)uVar13;
  DAT_14cb73de0 = DAT_14cb73cf0;
  DAT_14cb73de8 = DAT_14cb73cf8;
  DAT_14cb73df0 = DAT_14cb73d00;
  _DAT_14cb73d18 = &LAB_143ccccad;
  _DAT_14cb73d20 = 0x42de4ccd;
  DAT_14cb73d24 = 1;
  DAT_14cb73d10 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb73d10;
  DAT_14cb73df8 = _DAT_14cb73d08;
  atexit((_func_5014 *)&LAB_143ccccb2);
  _DAT_14cb73d38 = &LAB_143cccce6;
  _DAT_14cb73d40 = 0x42de3852;
  DAT_14cb73d44 = 1;
  DAT_14cb73d30 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb73d30;
  atexit((_func_5014 *)&LAB_143cccceb);
  _DAT_14cb73d58 = &LAB_143cccd1f;
  _DAT_14cb73d60 = 0x42de4a3d;
  DAT_14cb73d64 = 1;
  DAT_14cb73d50 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb73d50;
  atexit((_func_5014 *)&LAB_143cccd24);
  _DAT_14cb73d78 = &LAB_143cccd58;
  _DAT_14cb73d80 = 0x42de47ae;
  DAT_14cb73d84 = 1;
  DAT_14cb73d70 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb73d70;
  atexit((_func_5014 *)&LAB_143cccd5d);
  local_148 = (char *)0x0;
  dStack_140 = (double)((ulonglong)dStack_140 & 0xffffffff00000000);
  FUN_1446efa72(&local_148,0,2,0x10);
  dStack_140._0_4_ = 2;
  *(undefined ***)local_148 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar18 = DAT_14c758608 + 1;
  lVar17 = DAT_14c758608 + 1;
  if (lVar18 == 0) {
    LOCK();
    UNLOCK();
    lVar18 = DAT_14c758608 + 2;
    lVar17 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar17;
  *(longlong *)(local_148 + 0x10) = lVar18;
  *(undefined ***)local_148 = &PTR_FUN_14b3f0710;
  local_208 = (undefined *)((ulonglong)local_208 & 0xffffffff00000000);
  FUN_14156bb10(&DAT_14cb73d90,L"gbx.Avatar.DumpForms",L"Dump info about Avatar Nexus Types",
                &local_148);
  if (dStack_140._0_4_ != 0) {
    if (local_148 == (char *)0x0) goto LAB_143cd099f;
    (*(code *)**(undefined8 **)local_148)(local_148,0);
    FUN_1446efa72(&local_148,0,0,0x10);
    dStack_140._0_4_ = 0;
  }
  if (local_148 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_143cd099f:
  atexit(FUN_143cccd91);
  _DAT_14cb73da8 = &LAB_143cccdd6;
  _DAT_14cb73db0 = 0x42de3d71;
  DAT_14cb73db4 = 1;
  DAT_14cb73da0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb73da0;
  atexit((_func_5014 *)&LAB_143cccddb);
  if ((local_e0 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cd0b2a FUN_143cd0b2a body=4901 status=ok
// SIG undefined FUN_143cd0b2a(void)

void FUN_143cd0b2a(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  undefined8 uVar10;
  int iVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  uint *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong *plVar26;
  ulonglong uVar27;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined8 local_e0;
  longlong *local_d0;
  uint *local_c8;
  ulonglong local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  longlong *local_90;
  ulonglong local_88;
  longlong *local_80;
  longlong *local_78;
  uint *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((DAT_14c9a1ab0 != 0) && (*(longlong *)(param_1 + 0x368) != 0)) {
    FUN_14480f766(DAT_14c9a1ab0 + 0x5b0);
  }
  *(undefined8 *)(param_1 + 0x368) = 0;
  FUN_141501dc0(&DAT_14cb73e00);
  puVar23 = (uint *)(param_1 + 0x2f8);
  uVar8 = *(uint *)(param_1 + 0x310);
  plVar14 = (longlong *)(ulonglong)uVar8;
  local_c8 = puVar23;
  if (uVar8 == 0) {
    uVar25 = 1;
    iVar15 = 0;
    uVar24 = 0;
    uVar5 = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x308);
    if (*(uint **)(param_1 + 0x308) == (uint *)0x0) {
      puVar9 = puVar23;
    }
    uVar5 = *puVar9;
    if (uVar5 == 0) {
      iVar15 = uVar8 + 0x1e;
      if (-1 < (int)(uVar8 - 1)) {
        iVar15 = uVar8 - 1;
      }
      uVar24 = 0;
      uVar25 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar25 = uVar24;
      }
      iVar15 = 0;
      do {
        if (uVar25 == uVar24) goto LAB_143cd0c29;
        iVar15 = iVar15 + 0x20;
        uVar5 = puVar9[uVar24 + 1];
        uVar24 = uVar24 + 1;
      } while (uVar5 == 0);
    }
    else {
      iVar15 = 0;
      uVar24 = 0;
    }
    uVar25 = (ulonglong)(-uVar5 & uVar5);
    uVar22 = uVar25 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar5 = (iVar15 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if ((int)uVar8 <= (int)uVar5) {
      uVar5 = uVar8;
    }
  }
  if (uVar5 != uVar8) {
    uVar6 = 0xffffffff;
    local_b8 = plVar14;
    do {
      lVar18 = *(longlong *)(param_1 + 0x2e8);
      lVar19 = *(longlong *)(lVar18 + 0x10 + (longlong)(int)uVar5 * 0x20);
      if ((lVar19 != 0) && (plVar26 = *(longlong **)(lVar19 + 0x30), plVar26 != (longlong *)0x0)) {
        local_98 = (**(code **)(*plVar26 + 8))(plVar26);
        lVar19 = FUN_1464af53c();
        plVar14 = local_b8;
        puVar23 = local_c8;
        if ((lVar19 != 0) &&
           (((*(int *)(lVar19 + 0x38) <= *(int *)(local_98 + 0x38) &&
             (*(longlong *)(*(longlong *)(local_98 + 0x30) + (longlong)*(int *)(lVar19 + 0x38) * 8)
              == lVar19 + 0x30)) && ((char)plVar26[8] == '\x01')))) {
          FUN_1487e5444(plVar26);
          plVar12 = (longlong *)0x0;
          if (*(char *)((longlong)plVar26 + 0x41) == '\0') {
            if (*(char *)((longlong)plVar26 + 0x29) == '\0') {
              plVar12 = (longlong *)0x0;
            }
            else {
              puVar13 = &DAT_14cb73e00;
              FUN_140a90a66(&DAT_14cb73e00,plVar26);
              plVar12 = (longlong *)CONCAT71((int7)((ulonglong)puVar13 >> 8),1);
            }
          }
          lVar18 = *(longlong *)(lVar18 + (longlong)(int)uVar5 * 0x20 + 0x10);
          local_70 = (uint *)(lVar18 + 0x80);
          uVar8 = *(uint *)(lVar18 + 0x98);
          plVar14 = local_b8;
          puVar23 = local_c8;
          local_d0 = plVar12;
          if (uVar8 == 0) {
            uVar27 = 1;
            local_a0 = (longlong *)((ulonglong)local_a0._4_4_ << 0x20);
            uVar22 = 0;
            uVar5 = 0;
          }
          else {
            puVar9 = *(uint **)(lVar18 + 0x90);
            if (*(uint **)(lVar18 + 0x90) == (uint *)0x0) {
              puVar9 = local_70;
            }
            uVar5 = *puVar9;
            if (uVar5 == 0) {
              iVar21 = uVar8 + 0x1e;
              if (-1 < (int)(uVar8 - 1)) {
                iVar21 = uVar8 - 1;
              }
              uVar22 = 0;
              uVar27 = (ulonglong)(uint)(iVar21 >> 5);
              if (iVar21 >> 5 < 1) {
                uVar27 = uVar22;
              }
              local_a0 = (longlong *)((ulonglong)local_a0 & 0xffffffff00000000);
              do {
                if (uVar27 == uVar22) goto LAB_143cd0cd2;
                local_a0 = (longlong *)CONCAT44(local_a0._4_4_,(int)local_a0 + 0x20);
                uVar5 = puVar9[uVar22 + 1];
                uVar22 = uVar22 + 1;
              } while (uVar5 == 0);
            }
            else {
              uVar22 = 0;
              local_a0 = (longlong *)((ulonglong)local_a0._4_4_ << 0x20);
            }
            uVar27 = (ulonglong)(-uVar5 & uVar5);
            uVar20 = uVar27 * 2 + 1;
            lVar19 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            uVar5 = ((int)local_a0 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
            if ((int)uVar8 <= (int)uVar5) {
              uVar5 = uVar8;
            }
          }
          if (uVar5 != uVar8) {
            uVar20 = 0xffffffff;
            local_88 = (ulonglong)uVar8;
            do {
              uVar8 = (uint)uVar20;
              plVar26 = *(longlong **)
                         (*(longlong *)
                           (*(longlong *)(lVar18 + 0x70) + 0x10 + (longlong)(int)uVar5 * 0x20) +
                         0x30);
              local_98 = uVar22;
              if (plVar26 != (longlong *)0x0) {
                local_c0 = CONCAT44(local_c0._4_4_,uVar8);
                local_b0 = (longlong *)(**(code **)(*plVar26 + 8))(plVar26);
                lVar19 = FUN_1464af43e();
                uVar8 = (uint)local_c0;
                plVar14 = local_b8;
                puVar23 = local_c8;
                if (((lVar19 != 0) && (*(int *)(lVar19 + 0x38) <= (int)local_b0[7])) &&
                   ((*(longlong *)(local_b0[6] + (longlong)*(int *)(lVar19 + 0x38) * 8) ==
                     lVar19 + 0x30 && ((char)plVar26[8] == '\x01')))) {
                  FUN_1487e47ba(plVar26);
                  uVar8 = (uint)local_c0;
                  plVar14 = local_b8;
                  puVar23 = local_c8;
                  if ((((char)local_d0 != '\0') && (*(char *)((longlong)plVar26 + 0x41) == '\0')) &&
                     (*(char *)((longlong)plVar26 + 0x29) != '\0')) {
                    FUN_140a90a66(&DAT_14cb73e00,plVar26);
                    uVar8 = (uint)local_c0;
                    plVar14 = local_b8;
                    puVar23 = local_c8;
                  }
                }
              }
              uVar8 = uVar8 & ~(uint)uVar27;
              puVar9 = *(uint **)(lVar18 + 0x90);
              if (*(uint **)(lVar18 + 0x90) == (uint *)0x0) {
                puVar9 = local_70;
              }
              uVar16 = *(uint *)(lVar18 + 0x98);
              iVar21 = (int)local_98;
              lVar19 = (longlong)iVar21;
              local_c0 = CONCAT44(local_c0._4_4_,uVar8);
              uVar5 = puVar9[lVar19] & uVar8;
              if (uVar5 == 0) {
                iVar11 = uVar16 + 0x1e;
                if (-1 < (int)(uVar16 - 1)) {
                  iVar11 = uVar16 - 1;
                }
                iVar11 = iVar11 >> 5;
                local_a0 = (longlong *)CONCAT44(local_a0._4_4_,(int)local_a0 + 0x20);
                iVar7 = iVar11;
                if (iVar11 < iVar21) {
                  iVar7 = iVar21;
                }
                plVar14 = local_b8;
                if (iVar21 < iVar11) {
                  lVar17 = 0;
                  do {
                    uVar5 = puVar9[lVar19 + lVar17 + 1];
                    if (uVar5 != 0) {
                      uVar20 = 0xffffffff;
                      uVar22 = (ulonglong)(iVar21 + (int)lVar17 + 1);
                      goto LAB_143cd0fac;
                    }
                    local_a0 = (longlong *)CONCAT44(local_a0._4_4_,(int)local_a0 + 0x20);
                    lVar17 = lVar17 + 1;
                  } while (iVar7 - lVar19 != lVar17);
                  local_c0 = CONCAT44(local_c0._4_4_,0xffffffff);
                  iVar21 = iVar7;
                }
                uVar22 = (ulonglong)(iVar21 + 1);
                uVar20 = local_c0 & 0xffffffff;
                puVar23 = local_c8;
                uVar5 = uVar16;
              }
              else {
                uVar20 = (ulonglong)uVar8;
                uVar22 = local_98;
LAB_143cd0fac:
                uVar27 = (ulonglong)(-uVar5 & uVar5);
                uVar2 = uVar27 * 2 + 1;
                lVar19 = 0x3f;
                if (uVar2 != 0) {
                  for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                  }
                }
                uVar5 = ((int)local_a0 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
                if ((int)uVar16 <= (int)uVar5) {
                  uVar5 = uVar16;
                }
              }
            } while (uVar5 != (uint)local_88);
          }
        }
      }
LAB_143cd0cd2:
      uVar6 = uVar6 & ~(uint)uVar25;
      puVar9 = *(uint **)(param_1 + 0x308);
      if (*(uint **)(param_1 + 0x308) == (uint *)0x0) {
        puVar9 = puVar23;
      }
      uVar8 = *(uint *)(param_1 + 0x310);
      iVar21 = (int)uVar24;
      lVar18 = (longlong)iVar21;
      uVar5 = puVar9[lVar18] & uVar6;
      if (uVar5 == 0) {
        iVar11 = uVar8 + 0x1e;
        if (-1 < (int)(uVar8 - 1)) {
          iVar11 = uVar8 - 1;
        }
        iVar11 = iVar11 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar7 = iVar11;
        if (iVar11 < iVar21) {
          iVar7 = iVar21;
        }
        if (iVar21 < iVar11) {
          lVar19 = 0;
          do {
            uVar5 = (puVar9 + lVar18 + 1)[lVar19];
            if (uVar5 != 0) {
              uVar24 = (ulonglong)(iVar21 + (int)lVar19 + 1);
              uVar6 = 0xffffffff;
              goto LAB_143cd0d52;
            }
            iVar15 = iVar15 + 0x20;
            lVar19 = lVar19 + 1;
          } while (iVar7 - lVar18 != lVar19);
          uVar6 = 0xffffffff;
          iVar21 = iVar7;
        }
        uVar24 = (ulonglong)(iVar21 + 1);
        puVar23 = local_c8;
        uVar5 = uVar8;
      }
      else {
LAB_143cd0d52:
        uVar25 = (ulonglong)(-uVar5 & uVar5);
        uVar22 = uVar25 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar5 = (iVar15 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if ((int)uVar8 <= (int)uVar5) {
          uVar5 = uVar8;
        }
      }
    } while (uVar5 != (uint)plVar14);
  }
LAB_143cd0c29:
  uVar5 = uVar8;
  if (uVar8 == 0) {
    uVar25 = 1;
    uVar24 = 0;
    iVar15 = 0;
    uVar6 = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x308);
    if (*(uint **)(param_1 + 0x308) == (uint *)0x0) {
      puVar9 = puVar23;
    }
    uVar6 = *puVar9;
    if (uVar6 == 0) {
      iVar15 = uVar8 + 0x1e;
      if (-1 < (int)(uVar8 - 1)) {
        iVar15 = uVar8 - 1;
      }
      uVar24 = 0;
      uVar25 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar25 = uVar24;
      }
      iVar15 = 0;
      do {
        if (uVar25 == uVar24) goto LAB_143cd1112;
        iVar15 = iVar15 + 0x20;
        uVar6 = puVar9[uVar24 + 1];
        uVar24 = uVar24 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar24 = 0;
      iVar15 = 0;
    }
    uVar25 = (ulonglong)(-uVar6 & uVar6);
    uVar22 = uVar25 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar6 = (iVar15 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if ((int)uVar8 <= (int)uVar6) {
      uVar6 = uVar8;
    }
  }
  if (uVar6 != uVar8) {
    uVar16 = 0xffffffff;
    do {
      lVar18 = *(longlong *)(param_1 + 0x2e8);
      lVar19 = *(longlong *)(lVar18 + 0x10 + (longlong)(int)uVar6 * 0x20);
      if ((lVar19 != 0) && (plVar14 = *(longlong **)(lVar19 + 0x30), plVar14 != (longlong *)0x0)) {
        local_b8 = plVar14;
        local_98 = (**(code **)(*plVar14 + 8))();
        lVar19 = FUN_1464af53c();
        puVar23 = local_c8;
        if (((lVar19 != 0) &&
            (((*(int *)(lVar19 + 0x38) <= *(int *)(local_98 + 0x38) &&
              (*(longlong *)(*(longlong *)(local_98 + 0x30) + (longlong)*(int *)(lVar19 + 0x38) * 8)
               == lVar19 + 0x30)) && ((char)local_b8[8] == '\x01')))) &&
           (*(char *)((longlong)local_b8 + 0x41) == '\0')) {
          local_c0 = *(ulonglong *)(lVar18 + (longlong)(int)uVar6 * 0x20 + 0x10);
          local_70 = (uint *)(local_c0 + 0x80);
          uVar5 = *(uint *)(local_c0 + 0x98);
          if (uVar5 == 0) {
            uVar27 = 1;
            uVar22 = 0;
            local_a0 = (longlong *)((ulonglong)local_a0._4_4_ << 0x20);
            uVar6 = 0;
          }
          else {
            puVar9 = *(uint **)(local_c0 + 0x90);
            if (*(uint **)(local_c0 + 0x90) == (uint *)0x0) {
              puVar9 = local_70;
            }
            uVar6 = *puVar9;
            if (uVar6 == 0) {
              iVar21 = uVar5 + 0x1e;
              if (-1 < (int)(uVar5 - 1)) {
                iVar21 = uVar5 - 1;
              }
              uVar22 = 0;
              uVar27 = (ulonglong)(uint)(iVar21 >> 5);
              if (iVar21 >> 5 < 1) {
                uVar27 = uVar22;
              }
              local_a0 = (longlong *)((ulonglong)local_a0 & 0xffffffff00000000);
              do {
                if (uVar27 == uVar22) goto LAB_143cd11bb;
                local_a0 = (longlong *)CONCAT44(local_a0._4_4_,(int)local_a0 + 0x20);
                uVar6 = puVar9[uVar22 + 1];
                uVar22 = uVar22 + 1;
              } while (uVar6 == 0);
            }
            else {
              uVar22 = 0;
              local_a0 = (longlong *)((ulonglong)local_a0._4_4_ << 0x20);
            }
            uVar27 = (ulonglong)(-uVar6 & uVar6);
            uVar20 = uVar27 * 2 + 1;
            lVar18 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            uVar6 = ((int)local_a0 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
            if ((int)uVar5 <= (int)uVar6) {
              uVar6 = uVar5;
            }
          }
          if (uVar6 != uVar5) {
            local_78 = local_b8 + 0x20;
            local_60 = local_b8 + 0x27;
            local_90 = local_b8 + 0x1e;
            local_68 = local_b8 + 0x1c;
            local_80 = local_b8 + 0x1a;
            local_98 = CONCAT44(local_98._4_4_,0xffffffff);
            local_88 = (ulonglong)uVar5;
            do {
              plVar14 = *(longlong **)
                         (*(longlong *)
                           (*(longlong *)(local_c0 + 0x70) + 0x10 + (longlong)(int)uVar6 * 0x20) +
                         0x30);
              if (plVar14 != (longlong *)0x0) {
                local_b0 = plVar14;
                local_d0 = (longlong *)(**(code **)(*plVar14 + 8))();
                lVar18 = FUN_1464af43e();
                puVar23 = local_c8;
                if (((lVar18 != 0) && (*(int *)(lVar18 + 0x38) <= (int)local_d0[7])) &&
                   ((*(longlong *)(local_d0[6] + (longlong)*(int *)(lVar18 + 0x38) * 8) ==
                     lVar18 + 0x30 &&
                    (((char)local_b0[8] == '\x01' && (*(char *)((longlong)local_b0 + 0x41) == '\0'))
                    )))) {
                  local_a8 = (longlong *)local_b0[0x4b];
                  plVar14 = (longlong *)local_b0[0x4c];
                  if (plVar14 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
                    UNLOCK();
                    LOCK();
                    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
                    UNLOCK();
                    LOCK();
                    plVar26 = plVar14 + 1;
                    *(int *)plVar26 = (int)*plVar26 + -1;
                    UNLOCK();
                    local_d0 = plVar14;
                    if ((int)*plVar26 == 0) {
                      (**(code **)*plVar14)(plVar14);
                      LOCK();
                      piVar1 = (int *)((longlong)local_d0 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*local_d0 + 0x10))(local_d0);
                      }
                    }
                    LOCK();
                    plVar14 = local_d0 + 1;
                    *(int *)plVar14 = (int)*plVar14 + -1;
                    UNLOCK();
                    if ((int)*plVar14 == 0) {
                      (**(code **)*local_d0)(local_d0);
                      LOCK();
                      piVar1 = (int *)((longlong)local_d0 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*local_d0 + 0x10))();
                      }
                    }
                  }
                  if ((local_a8 != (longlong *)0x0) && (lVar18 = local_a8[1], lVar18 != 0)) {
                    if ((int)local_b8[0x21] != *(int *)((longlong)local_b8 + 0x134)) {
                      uVar5 = (uint)((ulonglong)lVar18 >> 0x10);
                      uVar6 = (uint)lVar18 & 0xffff;
                      plVar14 = (longlong *)local_b8[0x28];
                      if ((longlong *)local_b8[0x28] == (longlong *)0x0) {
                        plVar14 = local_60;
                      }
                      iVar21 = *(int *)((longlong)plVar14 +
                                       (ulonglong)
                                       ((int)local_b8[0x29] - 1U &
                                       (int)((ulonglong)lVar18 >> 0x20) +
                                       ((uint)lVar18 << 0x10 | uVar6) +
                                       (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar6 >> 4)) * 4);
                      if (iVar21 != -1) {
                        do {
                          lVar19 = *local_78 + (longlong)iVar21 * 0x20;
                          if (*(longlong *)(*local_78 + (longlong)iVar21 * 0x20) == lVar18) {
                            if ((lVar19 != 0) &&
                               (plVar14 = (longlong *)(lVar19 + 8), plVar14 != (longlong *)0x0)) {
                              uVar5 = *(uint *)(lVar19 + 0x10);
                              *(uint *)(lVar19 + 0x10) = uVar5 + 1;
                              if (*(uint *)(lVar19 + 0x14) < uVar5 + 1) {
                                local_d0 = (longlong *)(ulonglong)uVar5;
                                local_a8 = plVar14;
                                FUN_1487f8e90(plVar14,(longlong *)(ulonglong)uVar5);
                                uVar5 = (uint)local_d0;
                                plVar14 = local_a8;
                              }
                              goto LAB_143cd178f;
                            }
                            break;
                          }
                          iVar21 = *(int *)(lVar19 + 0x18);
                        } while (iVar21 != -1);
                      }
                    }
                    local_58 = local_a8 + 1;
                    FUN_14880c600(local_78,&local_4c,&local_58);
                    lVar18 = *local_78 + (longlong)local_4c * 0x20;
                    plVar14 = (longlong *)(lVar18 + 8);
                    uVar5 = *(uint *)(lVar18 + 0x10);
                    local_d0 = (longlong *)(ulonglong)uVar5;
                    *(uint *)(lVar18 + 0x10) = uVar5 + 1;
                    if (*(uint *)(lVar18 + 0x14) < uVar5 + 1) {
                      local_a8 = plVar14;
                      FUN_1487f8e90(plVar14,local_d0);
                      uVar5 = (uint)local_d0;
                      plVar14 = local_a8;
                    }
LAB_143cd178f:
                    *(longlong **)(*plVar14 + (longlong)(int)uVar5 * 8) = local_b0;
                  }
                  lVar18 = local_b0[10];
                  if (lVar18 == 0) {
                    uVar10 = FUN_1464af43e();
                    lVar18 = FUN_14477b664(uVar10);
                    local_b0[10] = lVar18;
                  }
                  lVar19 = local_b0[0xb];
                  if (lVar19 == 0) {
                    if ((lVar18 != 0) && (local_a8 = local_b0 + 9, *local_a8 != 0)) {
                      plVar14 = *(longlong **)(lVar18 + 0xb8);
                      if ((plVar14 == (longlong *)0x0) ||
                         (local_d0 = plVar14, cVar4 = (**(code **)(*plVar14 + 0x108))(plVar14),
                         cVar4 == '\0')) {
                        local_b0[0xb] = 0;
                      }
                      else {
                        uVar10 = (**(code **)(*local_d0 + 0x110))();
                        lVar19 = FUN_144aff482(uVar10,local_a8);
                        local_b0[0xb] = lVar19;
                        if (lVar19 != 0) goto LAB_143cd17af;
                      }
                    }
                    if ((char)local_b0[0xc] == '\x02') {
                      local_d0 = (longlong *)(longlong)(int)local_b8[0x1d];
                      uVar5 = (int)local_b8[0x1d] + 1;
                      *(uint *)(local_b8 + 0x1d) = uVar5;
                      if (*(uint *)((longlong)local_b8 + 0xec) < uVar5) {
                        FUN_1487f8e90(local_68,local_d0);
                      }
                      *(longlong **)(*local_68 + (longlong)local_d0 * 8) = local_b0;
                      puVar23 = local_c8;
                      if ((char)local_b0[0x1c] == '\x01') {
                        uVar5 = *(uint *)(local_b8 + 0x1f);
                        *(uint *)(local_b8 + 0x1f) = uVar5 + 1;
                        plVar14 = local_90;
                        if (*(uint *)((longlong)local_b8 + 0xfc) < uVar5 + 1) goto LAB_143cd1a12;
                        goto LAB_143cd198e;
                      }
                    }
                    else {
                      puVar23 = local_c8;
                      if ((char)local_b0[0xc] == '\x01') {
                        uVar5 = *(uint *)(local_b8 + 0x1b);
                        *(uint *)(local_b8 + 0x1b) = uVar5 + 1;
                        plVar14 = local_80;
                        if (*(uint *)((longlong)local_b8 + 0xdc) < uVar5 + 1) {
                          local_d0 = (longlong *)(ulonglong)uVar5;
                          FUN_1487f8e90(local_80);
                          uVar5 = (uint)local_d0;
                          plVar14 = local_80;
                        }
                        goto LAB_143cd198e;
                      }
                    }
                  }
                  else {
LAB_143cd17af:
                    cVar4 = (char)local_b0[0xc];
                    if (cVar4 == '\x02') {
                      local_d0 = (longlong *)(lVar19 + 0x310);
                      local_a8 = (longlong *)(longlong)*(int *)(lVar19 + 0x318);
                      uVar5 = *(int *)(lVar19 + 0x318) + 1;
                      *(uint *)(lVar19 + 0x318) = uVar5;
                      if (*(uint *)(lVar19 + 0x31c) < uVar5) {
                        FUN_1487f8e90(local_d0,local_a8);
                      }
                      *(longlong **)(*local_d0 + (longlong)local_a8 * 8) = local_b0;
                      puVar23 = local_c8;
                      if ((char)local_b0[0x1c] != '\x01') goto LAB_143cd1418;
                      uVar5 = *(uint *)(local_b8 + 0x1f);
                      *(uint *)(local_b8 + 0x1f) = uVar5 + 1;
                      plVar14 = local_90;
                      if (*(uint *)((longlong)local_b8 + 0xfc) < uVar5 + 1) {
LAB_143cd1a12:
                        local_d0 = (longlong *)(ulonglong)uVar5;
                        FUN_1487f8e90(local_90);
                        uVar5 = (uint)local_d0;
                        plVar14 = local_90;
                      }
                    }
                    else if (cVar4 == '\x01') {
                      plVar14 = (longlong *)(lVar19 + 0x2f0);
                      uVar5 = *(uint *)(lVar19 + 0x2f8);
                      *(uint *)(lVar19 + 0x2f8) = uVar5 + 1;
                      if (*(uint *)(lVar19 + 0x2fc) < uVar5 + 1) {
LAB_143cd18dc:
                        local_d0 = (longlong *)(ulonglong)uVar5;
                        local_a8 = plVar14;
                        FUN_1487f8e90(plVar14,local_d0);
                        uVar5 = (uint)local_d0;
                        plVar14 = local_a8;
                      }
                    }
                    else {
                      puVar23 = local_c8;
                      if (cVar4 != '\0') goto LAB_143cd1418;
                      plVar14 = (longlong *)(lVar19 + 0x300);
                      uVar5 = *(uint *)(lVar19 + 0x308);
                      *(uint *)(lVar19 + 0x308) = uVar5 + 1;
                      if (*(uint *)(lVar19 + 0x30c) < uVar5 + 1) goto LAB_143cd18dc;
                    }
LAB_143cd198e:
                    *(longlong **)(*plVar14 + (longlong)(int)uVar5 * 8) = local_b0;
                    puVar23 = local_c8;
                  }
                }
              }
LAB_143cd1418:
              uVar5 = (uint)local_98 & ~(uint)uVar27;
              puVar9 = *(uint **)(local_c0 + 0x90);
              if (*(uint **)(local_c0 + 0x90) == (uint *)0x0) {
                puVar9 = local_70;
              }
              uVar3 = *(uint *)(local_c0 + 0x98);
              iVar21 = (int)uVar22;
              lVar18 = (longlong)iVar21;
              uVar6 = puVar9[lVar18] & uVar5;
              local_98 = CONCAT44(local_98._4_4_,uVar5);
              if (uVar6 == 0) {
                iVar11 = uVar3 + 0x1e;
                if (-1 < (int)(uVar3 - 1)) {
                  iVar11 = uVar3 - 1;
                }
                iVar11 = iVar11 >> 5;
                local_a0 = (longlong *)CONCAT44(local_a0._4_4_,(int)local_a0 + 0x20);
                iVar7 = iVar11;
                if (iVar11 < iVar21) {
                  iVar7 = iVar21;
                }
                if (iVar21 < iVar11) {
                  lVar19 = 0;
                  do {
                    uVar6 = puVar9[lVar18 + lVar19 + 1];
                    if (uVar6 != 0) {
                      uVar22 = (ulonglong)(iVar21 + (int)lVar19 + 1);
                      local_98 = CONCAT44(local_98._4_4_,0xffffffff);
                      goto LAB_143cd14b5;
                    }
                    local_a0 = (longlong *)CONCAT44(local_a0._4_4_,(int)local_a0 + 0x20);
                    lVar19 = lVar19 + 1;
                  } while (iVar7 - lVar18 != lVar19);
                  local_98 = CONCAT44(local_98._4_4_,0xffffffff);
                  iVar21 = iVar7;
                }
                uVar22 = (ulonglong)(iVar21 + 1);
                puVar23 = local_c8;
                uVar6 = uVar3;
              }
              else {
LAB_143cd14b5:
                uVar27 = (ulonglong)(-uVar6 & uVar6);
                uVar20 = uVar27 * 2 + 1;
                lVar18 = 0x3f;
                if (uVar20 != 0) {
                  for (; uVar20 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                  }
                }
                uVar6 = ((int)local_a0 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
                if ((int)uVar3 <= (int)uVar6) {
                  uVar6 = uVar3;
                }
              }
            } while (uVar6 != (uint)local_88);
          }
        }
      }
LAB_143cd11bb:
      uVar16 = uVar16 & ~(uint)uVar25;
      puVar9 = *(uint **)(param_1 + 0x308);
      if (*(uint **)(param_1 + 0x308) == (uint *)0x0) {
        puVar9 = puVar23;
      }
      uVar5 = *(uint *)(param_1 + 0x310);
      iVar21 = (int)uVar24;
      lVar18 = (longlong)iVar21;
      uVar6 = puVar9[lVar18] & uVar16;
      if (uVar6 == 0) {
        iVar11 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar11 = uVar5 - 1;
        }
        iVar11 = iVar11 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar7 = iVar11;
        if (iVar11 < iVar21) {
          iVar7 = iVar21;
        }
        if (iVar21 < iVar11) {
          lVar19 = 0;
          do {
            uVar6 = (puVar9 + lVar18 + 1)[lVar19];
            if (uVar6 != 0) {
              uVar24 = (ulonglong)(iVar21 + (int)lVar19 + 1);
              uVar16 = 0xffffffff;
              goto LAB_143cd123e;
            }
            iVar15 = iVar15 + 0x20;
            lVar19 = lVar19 + 1;
          } while (iVar7 - lVar18 != lVar19);
          uVar16 = 0xffffffff;
          iVar21 = iVar7;
        }
        uVar24 = (ulonglong)(iVar21 + 1);
        puVar23 = local_c8;
        uVar6 = uVar5;
      }
      else {
LAB_143cd123e:
        uVar25 = (ulonglong)(-uVar6 & uVar6);
        uVar22 = uVar25 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar6 = (iVar15 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if ((int)uVar5 <= (int)uVar6) {
          uVar6 = uVar5;
        }
      }
    } while (uVar6 != uVar8);
  }
LAB_143cd1112:
  if (uVar5 == 0) {
    uVar25 = 1;
    uVar24 = 0;
    iVar15 = 0;
    uVar8 = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x308);
    if (*(uint **)(param_1 + 0x308) == (uint *)0x0) {
      puVar9 = puVar23;
    }
    uVar8 = *puVar9;
    if (uVar8 == 0) {
      iVar15 = uVar5 + 0x1e;
      if (-1 < (int)(uVar5 - 1)) {
        iVar15 = uVar5 - 1;
      }
      uVar24 = 0;
      uVar25 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar25 = uVar24;
      }
      iVar15 = 0;
      do {
        if (uVar25 == uVar24) goto LAB_143cd1b74;
        iVar15 = iVar15 + 0x20;
        uVar8 = puVar9[uVar24 + 1];
        uVar24 = uVar24 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar24 = 0;
      iVar15 = 0;
    }
    uVar25 = (ulonglong)(-uVar8 & uVar8);
    uVar22 = uVar25 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar8 = (iVar15 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if ((int)uVar5 <= (int)uVar8) {
      uVar8 = uVar5;
    }
  }
  if (uVar8 != uVar5) {
    uVar6 = 0xffffffff;
    do {
      lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x2e8) + 0x10 + (longlong)(int)uVar8 * 0x20);
      if ((lVar18 != 0) && (plVar14 = *(longlong **)(lVar18 + 0x30), plVar14 != (longlong *)0x0)) {
        lVar18 = (**(code **)(*plVar14 + 8))(plVar14);
        lVar19 = FUN_1464af53c();
        puVar23 = local_c8;
        if ((lVar19 != 0) &&
           ((((*(int *)(lVar19 + 0x38) <= *(int *)(lVar18 + 0x38) &&
              (*(longlong *)(*(longlong *)(lVar18 + 0x30) + (longlong)*(int *)(lVar19 + 0x38) * 8)
               == lVar19 + 0x30)) && ((char)plVar14[8] == '\x01')) &&
            (*(char *)((longlong)plVar14 + 0x41) == '\0')))) {
          FUN_1487f5bc0(plVar14[0x1a],(int)plVar14[0x1b]);
          local_b8 = (longlong *)(longlong)(int)plVar14[0x1b];
          if (local_b8 != (longlong *)0x0) {
            local_98 = plVar14[0x1a];
            local_a0 = plVar14 + 0xb;
            local_b8 = (longlong *)((longlong)local_b8 << 3);
            lVar18 = 0;
            do {
              local_e0 = 0;
              local_e8 = 0xffffffff;
              FUN_1487e4850(*(undefined8 *)(local_98 + lVar18),local_a0,2,1);
              lVar18 = lVar18 + 8;
            } while (local_b8 != (longlong *)lVar18);
          }
          FUN_1487f5bc0(plVar14[0x1c],(int)plVar14[0x1d]);
          local_b8 = (longlong *)(longlong)(int)plVar14[0x1d];
          puVar23 = local_c8;
          if (local_b8 != (longlong *)0x0) {
            local_98 = plVar14[0x1c];
            local_b8 = (longlong *)((longlong)local_b8 << 3);
            plVar26 = (longlong *)0x0;
            do {
              local_e0 = 0;
              local_e8 = 0xffffffff;
              FUN_1487e4850(*(undefined8 *)(local_98 + (longlong)plVar26),plVar14 + 0xb,2,1);
              plVar26 = plVar26 + 1;
              puVar23 = local_c8;
            } while (local_b8 != plVar26);
          }
        }
      }
      uVar6 = uVar6 & ~(uint)uVar25;
      puVar9 = *(uint **)(param_1 + 0x308);
      if (*(uint **)(param_1 + 0x308) == (uint *)0x0) {
        puVar9 = puVar23;
      }
      uVar16 = *(uint *)(param_1 + 0x310);
      iVar21 = (int)uVar24;
      lVar18 = (longlong)iVar21;
      uVar8 = puVar9[lVar18] & uVar6;
      if (uVar8 == 0) {
        iVar11 = uVar16 + 0x1e;
        if (-1 < (int)(uVar16 - 1)) {
          iVar11 = uVar16 - 1;
        }
        iVar11 = iVar11 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar7 = iVar11;
        if (iVar11 < iVar21) {
          iVar7 = iVar21;
        }
        if (iVar21 < iVar11) {
          lVar19 = 0;
          do {
            uVar8 = puVar9[lVar18 + lVar19 + 1];
            if (uVar8 != 0) {
              uVar24 = (ulonglong)(iVar21 + (int)lVar19 + 1);
              uVar6 = 0xffffffff;
              goto LAB_143cd1c6a;
            }
            iVar15 = iVar15 + 0x20;
            lVar19 = lVar19 + 1;
          } while (iVar7 - lVar18 != lVar19);
          uVar6 = 0xffffffff;
          iVar21 = iVar7;
        }
        uVar24 = (ulonglong)(iVar21 + 1);
        puVar23 = local_c8;
        uVar8 = uVar16;
      }
      else {
LAB_143cd1c6a:
        uVar25 = (ulonglong)(-uVar8 & uVar8);
        uVar22 = uVar25 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar8 = (iVar15 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if ((int)uVar16 <= (int)uVar8) {
          uVar8 = uVar16;
        }
      }
    } while (uVar8 != uVar5);
  }
LAB_143cd1b74:
  DAT_14cb73e22 = 1;
  for (puVar13 = DAT_14cb73e30; puVar13 != (undefined8 *)0x0; puVar13 = (undefined8 *)puVar13[1]) {
    (**(code **)(DAT_14cb73e00 + 0x10))(&DAT_14cb73e00,*puVar13);
  }
  DAT_14cb73e22 = 0;
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cd1ec2 FUN_143cd1ec2 body=27 status=ok
// SIG undefined FUN_143cd1ec2(void)

undefined1 FUN_143cd1ec2(longlong *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x48))();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(lVar2 + 8);
  }
  return uVar1;
}



// FUNCTION 143cd1ede FUN_143cd1ede body=27 status=ok
// SIG undefined FUN_143cd1ede(void)

undefined1 FUN_143cd1ede(longlong *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x48))();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(lVar2 + 9);
  }
  return uVar1;
}



// FUNCTION 143cd1efa FUN_143cd1efa body=1513 status=ok
// SIG undefined FUN_143cd1efa(void)

float * FUN_143cd1efa(longlong param_1,float *param_2,undefined8 param_3,longlong param_4)

{
  code *pcVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  float fVar11;
  float _Y;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_118 [40];
  float local_f0;
  undefined4 uStack_ec;
  ushort local_d8;
  byte local_d0;
  float local_c8;
  undefined4 uStack_c4;
  ushort local_b0;
  byte local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  pfVar9 = &local_f0;
  FUN_1448729ea(param_1 + 8,pfVar9,param_4);
  if (local_d0 == 3) {
    fVar12 = local_f0;
    bVar3 = 3;
  }
  else {
    pfVar8 = &local_c8;
    FUN_1400b56fe(pfVar8,&local_f0,3);
    fVar12 = 0.0;
    if (local_a8 != 0) {
      fVar12 = local_c8;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_b0) {
        pfVar8 = (float *)CONCAT44(uStack_c4,local_c8);
      }
      (*pcVar1)(pfVar8);
    }
    bVar3 = local_d0;
    if (0x18 < local_b0) {
      FUN_1400020a8(CONCAT44(uStack_c4,local_c8));
      bVar3 = local_d0;
    }
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_d8) {
      pfVar9 = (float *)CONCAT44(uStack_ec,local_f0);
    }
    (*pcVar1)(pfVar9);
  }
  if (0x18 < local_d8) {
    FUN_1400020a8(CONCAT44(uStack_ec,local_f0));
  }
  pfVar9 = &local_f0;
  FUN_1448729ea(param_1 + 0x58,pfVar9,param_4);
  if (local_d0 == 3) {
    fVar11 = local_f0;
    bVar3 = 3;
  }
  else {
    pfVar8 = &local_c8;
    FUN_1400b56fe(pfVar8,&local_f0,3);
    fVar11 = 0.0;
    if (local_a8 != 0) {
      fVar11 = local_c8;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_b0) {
        pfVar8 = (float *)CONCAT44(uStack_c4,local_c8);
      }
      (*pcVar1)(pfVar8);
    }
    bVar3 = local_d0;
    if (0x18 < local_b0) {
      FUN_1400020a8(CONCAT44(uStack_c4,local_c8));
      bVar3 = local_d0;
    }
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_d8) {
      pfVar9 = (float *)CONCAT44(uStack_ec,local_f0);
    }
    (*pcVar1)(pfVar9);
  }
  if (0x18 < local_d8) {
    FUN_1400020a8(CONCAT44(uStack_ec,local_f0));
  }
  pfVar9 = &local_f0;
  FUN_1448729ea(param_1 + 0xa8,pfVar9,param_4);
  if (local_d0 == 3) {
    _Y = local_f0;
    bVar3 = 3;
  }
  else {
    pfVar8 = &local_c8;
    FUN_1400b56fe(pfVar8,&local_f0,3);
    _Y = 0.0;
    if (local_a8 != 0) {
      _Y = local_c8;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_b0) {
        pfVar8 = (float *)CONCAT44(uStack_c4,local_c8);
      }
      (*pcVar1)(pfVar8);
    }
    bVar3 = local_d0;
    if (0x18 < local_b0) {
      FUN_1400020a8(CONCAT44(uStack_c4,local_c8));
      bVar3 = local_d0;
    }
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_d8) {
      pfVar9 = (float *)CONCAT44(uStack_ec,local_f0);
    }
    (*pcVar1)(pfVar9);
  }
  if (0x18 < local_d8) {
    FUN_1400020a8(CONCAT44(uStack_ec,local_f0));
  }
  pfVar9 = &local_f0;
  FUN_1448729ea(param_1 + 0xf8,pfVar9,param_4);
  if (local_d0 == 3) {
    uVar4 = 3;
    fVar13 = local_f0;
  }
  else {
    pfVar8 = &local_c8;
    FUN_1400b56fe(pfVar8,&local_f0,3);
    fVar13 = 0.0;
    if (local_a8 != 0) {
      fVar13 = local_c8;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_b0) {
        pfVar8 = (float *)CONCAT44(uStack_c4,local_c8);
      }
      (*pcVar1)(pfVar8);
    }
    if (0x18 < local_b0) {
      FUN_1400020a8(CONCAT44(uStack_c4,local_c8));
    }
    uVar4 = (uint)local_d0;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar4 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_d8) {
      pfVar9 = (float *)CONCAT44(uStack_ec,local_f0);
    }
    (*pcVar1)(pfVar9);
  }
  if (0x18 < local_d8) {
    FUN_1400020a8(CONCAT44(uStack_ec,local_f0));
  }
  pfVar9 = &local_f0;
  FUN_1448729ea(param_1 + 0x148,pfVar9,param_4);
  if (local_d0 == 3) {
    uVar4 = 3;
    fVar14 = local_f0;
  }
  else {
    pfVar8 = &local_c8;
    FUN_1400b56fe(pfVar8,&local_f0,3);
    fVar14 = 0.0;
    if (local_a8 != 0) {
      fVar14 = local_c8;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_b0) {
        pfVar8 = (float *)CONCAT44(uStack_c4,local_c8);
      }
      (*pcVar1)(pfVar8);
    }
    if (0x18 < local_b0) {
      FUN_1400020a8(CONCAT44(uStack_c4,local_c8));
    }
    uVar4 = (uint)local_d0;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar4 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_d8) {
      pfVar9 = (float *)CONCAT44(uStack_ec,local_f0);
    }
    (*pcVar1)(pfVar9);
  }
  if (0x18 < local_d8) {
    FUN_1400020a8(CONCAT44(uStack_ec,local_f0));
  }
  fVar15 = 0.0;
  if ((longlong)*(int *)(param_4 + 0x28) != 0) {
    lVar5 = (longlong)*(int *)(param_4 + 0x28) * 0x10;
    lVar7 = (longlong)*(int *)(DAT_14c9a3da0 + -8 + lVar5);
    if (lVar7 != 0) {
      lVar5 = *(longlong *)(DAT_14c9a3da0 + -0x10 + lVar5);
      lVar10 = 0;
      do {
        lVar2 = *(longlong *)(lVar5 + lVar10);
        uVar6 = FUN_1417392fc();
        bVar3 = FUN_1448093f4(lVar2,uVar6);
        if ((lVar2 != 0 & bVar3) == 1) {
          if (*(char *)(lVar2 + 8) == '\0') {
            fVar15 = 0.0;
          }
          else {
            fVar15 = 1.0;
          }
          break;
        }
        lVar10 = lVar10 + 0x10;
      } while (lVar7 * 0x10 != lVar10);
    }
  }
  fVar11 = fVar11 + fVar15;
  if ((_Y != 1.0) || (NAN(_Y))) {
    fVar11 = powf(fVar11,_Y);
  }
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = fVar14 * fVar12 * (fVar13 + fVar11);
  *(undefined1 *)(param_2 + 8) = 3;
  if ((local_a0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143cd24ea FUN_143cd24ea body=88 status=ok
// SIG undefined FUN_143cd24ea(void)

ulonglong FUN_143cd24ea(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x38) != 0) && (*(longlong **)(param_1 + 0x30) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x38) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x30);
      }
                    /* WARNING: Could not recover jumptable at 0x000143cd2531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_2,param_3 & 0xffffffff);
      return uVar2;
    }
  }
  return param_3 & 0xffffffff;
}



// FUNCTION 143cd2593 FUN_143cd2593 body=69 status=ok
// SIG undefined FUN_143cd2593(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cd2593(void)

{
  _DAT_14cb740e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143cd25d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb740e8,1);
  return;
}



// FUNCTION 143cd25d8 FUN_143cd25d8 body=1378 status=ok
// SIG undefined FUN_143cd25d8(void)

void FUN_143cd25d8(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  code *pcVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ushort uVar11;
  ulonglong uVar12;
  ushort uVar13;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar10 = param_1[4];
  if (lVar10 == 0) {
LAB_143cd2748:
    if (((((*(int *)((longlong)param_1 + 0x34) != 0) &&
          (uVar1 = *(uint *)(param_1 + 6), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) &&
        ((plVar6 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)((longlong)param_1 + 0x34))))) &&
       ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
        lVar10 = *plVar6;
      }
      else {
        lVar10 = 0;
      }
      if (*(char *)(lVar10 + 0x48) == '\0') {
        if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
          lVar10 = *plVar6;
        }
        else {
          lVar10 = 0;
        }
        local_50 = (code *)0x0;
        local_48 = 0;
        FUN_1446efa72(&local_50,0,3,0x10);
        pcVar5 = local_50;
        local_48 = 3;
        *(undefined ***)local_50 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 1;
        lVar15 = DAT_14c758608 + 1;
        if (lVar7 == 0) {
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 2;
          lVar15 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar15;
        *(longlong *)(local_50 + 0x10) = lVar7;
        *(undefined ***)local_50 = &PTR_FUN_14b3f2460;
        *(longlong *)(local_50 + 0x18) = 0;
        iVar8 = 0;
        if (param_1 != (longlong *)0x0) {
          uVar1 = *(uint *)((longlong)param_1 + 0xc);
          *(uint *)(local_50 + 0x18) = uVar1;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar15 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar15 = 0;
          }
          iVar8 = *(int *)(lVar15 + 0x10);
          if (*(int *)(lVar15 + 0x10) == 0) {
            LOCK();
            iVar8 = DAT_14c964868 + 1;
            UNLOCK();
            iVar4 = DAT_14c964868 + 1;
            bVar16 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar8;
            if (bVar16) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar4);
            }
            LOCK();
            iVar8 = *(int *)(lVar15 + 0x10);
            bVar16 = iVar8 == 0;
            if (bVar16) {
              *(int *)(lVar15 + 0x10) = iVar4;
              iVar8 = 0;
            }
            UNLOCK();
            if (bVar16) {
              iVar8 = iVar4;
            }
          }
        }
        *(int *)(pcVar5 + 0x1c) = iVar8;
        *(longlong **)(pcVar5 + 0x20) = param_1;
        if (((local_48 == 0) || (local_50 == (code *)0x0)) ||
           (cVar3 = (**(code **)(*(longlong *)local_50 + 0x30))(), cVar3 == '\0')) {
          if (local_48 == 0) goto LAB_143cd29a1;
          if (local_50 == (code *)0x0) goto LAB_143cd29ab;
          (*(code *)**(undefined8 **)local_50)(local_50,0);
          FUN_1446efa72(&local_50,0,0,0x10);
        }
        else {
          plVar6 = (longlong *)(lVar10 + 0x30);
          if (*(int *)(lVar10 + 0x44) < 1) {
            iVar8 = *(int *)(lVar10 + 0x38);
            iVar4 = *(int *)(lVar10 + 0x40) + -1;
            *(int *)(lVar10 + 0x40) = iVar4;
            if (iVar4 <= iVar8) {
              iVar4 = iVar8;
              if (0 < iVar8) {
                iVar9 = 0;
                do {
                  if (((*(int *)(*plVar6 + 8 + (longlong)iVar9 * 0x10) == 0) ||
                      (plVar2 = *(longlong **)(*plVar6 + (longlong)iVar9 * 0x10),
                      plVar2 == (longlong *)0x0)) ||
                     (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
                    FUN_14005b288(plVar6,iVar9);
                    FUN_14005b248(plVar6);
                  }
                  else {
                    iVar9 = iVar9 + 1;
                  }
                  iVar4 = *(int *)(lVar10 + 0x38);
                } while (iVar9 < iVar4);
              }
              iVar9 = 2;
              if (2 < iVar4 * 2) {
                iVar9 = iVar4 * 2;
              }
              *(int *)(lVar10 + 0x40) = iVar9;
              if ((iVar9 < iVar8) && (*(int *)(lVar10 + 0x3c) != iVar4)) {
                FUN_14045812c();
              }
            }
          }
          if ((local_48 != 0) && (local_50 != (code *)0x0)) {
            (**(code **)(*(longlong *)local_50 + 0x38))(local_50,&local_40);
          }
          iVar8 = *(int *)(lVar10 + 0x38);
          *(uint *)(lVar10 + 0x38) = iVar8 + 1U;
          if (*(uint *)(lVar10 + 0x3c) < iVar8 + 1U) {
            FUN_1447a71f6(plVar6,iVar8);
          }
          lVar10 = *plVar6;
          lVar15 = (longlong)iVar8 * 0x10;
          *(undefined8 *)(lVar10 + lVar15) = 0;
          *(undefined4 *)(lVar10 + 8 + lVar15) = 0;
          *(code **)(lVar10 + lVar15) = local_50;
          local_50 = (code *)0x0;
          *(int *)(lVar10 + 8 + lVar15) = local_48;
        }
        local_48 = 0;
        goto LAB_143cd29a1;
      }
    }
    FUN_143cd2b3c(param_1);
  }
  else {
    if (DAT_14cb10130 == 0) {
      local_70 = &local_50;
      local_50 = FUN_140754f84;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_147da9a76;
      local_80 = FUN_1409f3105;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000000;
      local_a0 = 8;
      local_a8 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30)) goto LAB_143cd2748;
    if (((*(byte *)(lVar10 + 0x154) & 0x20) != 0) ||
       (cVar3 = (**(code **)(*param_1 + 0x2d8))(param_1,*(undefined1 *)(lVar10 + 0x152)),
       cVar3 == '\0')) goto LAB_143cd29ab;
    local_40 = *(undefined8 *)(lVar10 + 0x18);
    FUN_1400021e4(&local_40,&local_50);
    pcVar5 = (code *)&DAT_149dfb77a;
    if (local_48 != 0) {
      pcVar5 = local_50;
    }
    lVar10 = 0;
    while( true ) {
      uVar11 = *(ushort *)(pcVar5 + lVar10);
      uVar12 = (ulonglong)uVar11;
      uVar13 = *(ushort *)((longlong)L"Untitled" + lVar10);
      if (uVar11 != uVar13) break;
      if (uVar11 == 0) goto LAB_143cd29a1;
LAB_143cd26bd:
      lVar10 = lVar10 + 2;
    }
    if ((uVar13 | uVar11) < 0x80) {
      uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
      uVar14 = (ulonglong)uVar13;
      uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
      if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar14]) goto LAB_143cd26bd;
    }
    if (uVar11 != uVar13) {
      lVar10 = 0;
      goto LAB_143cd26f6;
    }
LAB_143cd29a1:
    if (local_50 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143cd29ab:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143cd26f6:
  uVar11 = *(ushort *)(pcVar5 + lVar10);
  uVar12 = (ulonglong)uVar11;
  uVar13 = *(ushort *)((longlong)L"Loader" + lVar10);
  if (uVar11 != uVar13) {
    if ((uVar13 | uVar11) < 0x80) {
      uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
      uVar14 = (ulonglong)uVar13;
      uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
      if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar14]) goto LAB_143cd270f;
    }
    if (uVar11 != uVar13) {
      if (local_50 != (code *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143cd2748;
    }
    goto LAB_143cd29a1;
  }
  if (uVar11 == 0) goto LAB_143cd29a1;
LAB_143cd270f:
  lVar10 = lVar10 + 2;
  goto LAB_143cd26f6;
}



// FUNCTION 143cd2b3c FUN_143cd2b3c body=6742 status=ok
// SIG undefined FUN_143cd2b3c(void)

void FUN_143cd2b3c(longlong param_1)

{
  code **ppcVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  undefined1 uVar10;
  double dVar11;
  double *pdVar12;
  void *pvVar13;
  double dVar14;
  double dVar15;
  void *pvVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined1 *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint *puVar23;
  byte bVar24;
  int iVar25;
  longlong *plVar26;
  ulonglong uVar27;
  code *pcVar28;
  int iVar29;
  int iVar30;
  longlong *plVar31;
  longlong *plVar32;
  longlong lVar33;
  uint uVar34;
  int iVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  int iVar38;
  longlong lVar39;
  ulonglong *puVar40;
  ulonglong *puVar41;
  double *pdVar42;
  longlong lVar43;
  ulonglong uVar44;
  double *pdVar45;
  double *pdVar46;
  double dVar47;
  undefined1 auStack_478 [32];
  undefined4 local_458;
  undefined4 local_450;
  undefined8 *local_448;
  undefined8 local_440;
  wchar_t *local_438;
  code *local_430;
  undefined1 *local_428;
  code **local_420;
  code *local_418;
  code *local_410;
  ulonglong *local_400;
  longlong *local_3f8;
  longlong *local_3f0;
  ulonglong local_3e8;
  longlong local_3e0;
  longlong *local_3d8;
  ulonglong uStack_3d0;
  longlong local_3c8;
  undefined8 uStack_3c0;
  longlong *local_3b8;
  undefined8 uStack_3b0;
  longlong local_3a8 [2];
  undefined1 local_394 [12];
  ulonglong *local_388;
  ulonglong uStack_380;
  longlong local_378;
  code *local_370;
  code **local_368;
  undefined8 local_360;
  undefined4 local_358;
  undefined4 local_34f;
  undefined3 uStack_34b;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 local_32c;
  undefined4 uStack_328;
  undefined8 uStack_324;
  void *local_318;
  int local_310;
  undefined4 local_30c;
  double local_308;
  double local_300;
  double dStack_2f8;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  void *local_2e0;
  int local_2d8;
  undefined4 local_2d4;
  code *local_2c8;
  code **ppcStack_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 local_2ac;
  undefined4 uStack_2a8;
  undefined8 uStack_2a4;
  void *local_298;
  int local_290;
  undefined4 local_28c;
  double local_288;
  double *local_280;
  double dStack_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  void *local_260;
  int local_258;
  undefined4 local_254;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  void *local_218;
  int local_210;
  undefined4 local_20c;
  double local_208;
  double local_200;
  double dStack_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  void *local_1e0;
  int local_1d8;
  undefined4 local_1d4;
  code *local_1c8;
  code **ppcStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  void *local_198;
  double local_190;
  double local_188;
  double *local_180;
  double dStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  void *local_160;
  int local_158;
  undefined4 local_154;
  longlong local_148;
  undefined8 uStack_140;
  uint local_138 [4];
  uint *local_128;
  int local_120;
  undefined8 local_11c;
  int local_114;
  undefined1 local_110 [8];
  undefined1 *local_108;
  int local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_478;
  plVar32 = (longlong *)(param_1 + 0x38);
  FUN_1465482dc(plVar32);
  lVar39 = *(longlong *)(param_1 + 0x20);
  uStack_1b0 = (longlong **)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0);
  if (lVar39 != 0) {
    if (DAT_14cb10130 == 0) {
      local_420 = &local_1c8;
      local_1c8 = FUN_140754f84;
      local_410 = FUN_14081d0ea;
      local_418 = FUN_14081d0ea;
      local_428 = &LAB_147da9a76;
      local_430 = FUN_1409f3105;
      local_438 = L"Engine";
      local_440 = 0;
      local_448 = (undefined8 *)CONCAT44(local_448._4_4_,0x10000000);
      local_450 = 8;
      local_458 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    uStack_1b0 = (longlong **)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0);
    if ((((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar39 + 0x10) + 0x38)) &&
         (uStack_1b0 = (longlong **)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0),
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar39 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) &&
        (uStack_1b0 = (longlong **)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0),
        *(int *)(param_1 + 0x34) != 0)) &&
       (((uVar19 = *(uint *)(param_1 + 0x30),
         uStack_1b0 = (longlong **)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0),
         -1 < (int)uVar19 &&
         (uStack_1b0 = (longlong **)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0),
         (int)uVar19 < DAT_14c9647dc)) &&
        ((plVar26 = (longlong *)
                    ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
         uStack_1b0 = (longlong **)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0),
         plVar26 != (longlong *)0x0 &&
         ((uStack_1b0 = (longlong **)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0),
          (int)plVar26[2] == *(int *)(param_1 + 0x34) &&
          (uStack_1b0 = (longlong **)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0),
          (*(uint *)(plVar26 + 1) & 0x10200000) == 0)))))))) {
      if ((*(uint *)(plVar26 + 1) & 0x10200000) == 0) {
        lVar22 = *plVar26;
      }
      else {
        lVar22 = 0;
      }
      local_388 = (ulonglong *)0x0;
      uStack_380 = 0;
      local_378 = param_1;
      FUN_146548128(lVar39,&local_388);
      uVar37 = uStack_380 & 0xffffffff;
      if ((longlong)*(int *)(lVar22 + 0x58) != 0) {
        plVar26 = *(longlong **)(lVar22 + 0x50);
        plVar31 = plVar26 + (longlong)*(int *)(lVar22 + 0x58) * 2;
        uVar37 = uStack_380 & 0xffffffff;
        do {
          lVar33 = *plVar26;
          if (lVar33 != 0) {
            if (DAT_14cb740f8 != 0) {
              if ((longlong)*(int *)(lVar33 + 0x100) != 0) {
                lVar43 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar33 + 0xf8) + lVar43) == DAT_14cb740f8)
                  goto LAB_143cd2d91;
                  lVar43 = lVar43 + 8;
                } while ((longlong)*(int *)(lVar33 + 0x100) * 8 != lVar43);
              }
              if ((longlong)*(int *)(lVar33 + 0x110) != 0) {
                lVar43 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar33 + 0x108) + lVar43) == DAT_14cb740f8)
                  goto LAB_143cd2d91;
                  lVar43 = lVar43 + 8;
                } while ((longlong)*(int *)(lVar33 + 0x110) * 8 != lVar43);
              }
            }
            uVar37 = (ulonglong)(uint)((int)uVar37 + *(int *)(lVar33 + 0x90));
          }
LAB_143cd2d91:
          plVar26 = plVar26 + 2;
        } while (plVar26 != plVar31);
      }
      iVar38 = (int)uVar37;
      if (iVar38 != 0) {
        if (iVar38 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar37);
        }
        local_3e0 = lVar22;
        if (*(int *)(param_1 + 0x44) < iVar38) {
          FUN_1465487bc(plVar32);
        }
        plVar31 = (longlong *)0x0;
        local_128 = (uint *)0x0;
        local_120 = 0;
        local_148 = 0;
        uStack_140 = 0;
        plVar26 = (longlong *)0xffffffff00000080;
        local_11c = 0xffffffff00000080;
        local_114 = 0;
        local_108 = (undefined1 *)0x0;
        local_100 = 0;
        local_3f0 = plVar32;
        if ((int)uStack_380 == 0) {
          pdVar46 = (double *)0x0;
          dVar14 = 0.0;
          dVar15 = 0.0;
          pvVar16 = (void *)0x0;
        }
        else {
          puVar40 = local_388 + (int)uStack_380;
          pvVar16 = (void *)0x0;
          plVar31 = (longlong *)0x0;
          dVar15 = 0.0;
          dVar14 = 0.0;
          pdVar46 = (double *)0x0;
          puVar41 = local_388;
          local_400 = puVar40;
          do {
            uVar37 = *puVar41;
            if (uVar37 != 0) {
              cVar9 = *(char *)(uVar37 + 0x40);
              uVar19 = *(uint *)(param_1 + 0x40);
              local_3f8 = plVar31;
              if (*(uint *)(param_1 + 0x44) != uVar19) {
                dVar7 = *(double *)(uVar37 + 0x18);
                dVar8 = *(double *)(uVar37 + 0x20);
                dVar47 = dVar8 + -25.0;
                pvVar13 = (void *)(dVar7 + -25.0);
                pdVar42 = (double *)(dVar47 + 50.0);
                dVar11 = (double)pvVar13 + 50.0;
                if (((ulonglong)plVar31 & 1) == 0) {
                  pdVar46 = pdVar42;
                  local_3f8 = (longlong *)CONCAT71((int7)((ulonglong)plVar26 >> 8),1);
                }
                else {
                  if ((double)pvVar13 <= (double)pvVar16) {
                    pvVar16 = pvVar13;
                  }
                  pvVar13 = pvVar16;
                  if (dVar47 <= dVar15) {
                    dVar15 = dVar47;
                  }
                  dVar47 = dVar15;
                  if (dVar14 <= dVar11) {
                    dVar14 = dVar11;
                  }
                  dVar11 = dVar14;
                  if ((double)pdVar46 <= (double)pdVar42) {
                    pdVar46 = pdVar42;
                  }
                }
                uVar6 = *(undefined8 *)(uVar37 + 0x28);
                uVar10 = *(undefined1 *)(uVar37 + 0x41);
                *(uint *)(param_1 + 0x40) = uVar19 + 1;
                if (*(uint *)(param_1 + 0x44) < uVar19 + 1) {
                  FUN_14880c236(local_3f0,uVar19);
                  puVar40 = local_400;
                }
                uVar21 = uStack_140;
                lVar22 = *local_3f0;
                plVar26 = (longlong *)((longlong)(int)uVar19 * 0x38);
                *(ulonglong *)(lVar22 + (longlong)plVar26) = uVar37;
                *(double *)(lVar22 + 8 + (longlong)plVar26) = dVar7;
                *(double *)(lVar22 + 0x10 + (longlong)plVar26) = dVar8;
                *(undefined8 *)(lVar22 + 0x18 + (longlong)plVar26) = uVar6;
                *(bool *)(lVar22 + 0x20 + (longlong)plVar26) = cVar9 != '\0';
                *(bool *)(lVar22 + 0x21 + (longlong)plVar26) = cVar9 != '\x02';
                *(undefined1 *)(lVar22 + 0x22 + (longlong)plVar26) = uVar10;
                *(undefined1 *)(lVar22 + 0x23 + (longlong)plVar26) = 1;
                puVar5 = (undefined8 *)(lVar22 + 0x28 + (longlong)plVar26);
                *puVar5 = 0;
                puVar5[1] = 0;
                plVar31 = local_3f8;
                dVar14 = dVar11;
                dVar15 = dVar47;
                pvVar16 = pvVar13;
                if (lVar22 + (longlong)plVar26 != 0) {
                  if (local_114 == 0) {
                    iVar30 = (int)uStack_140;
                    uStack_140 = CONCAT44(uStack_140._4_4_,(int)uStack_140 + 1);
                    if (uStack_140._4_4_ == iVar30) {
                      FUN_14482b872(&local_148,uVar21 & 0xffffffff);
                      puVar40 = local_400;
                    }
                    iVar38 = local_120;
                    if (local_120 == 0) {
                      iVar35 = -1;
                    }
                    else {
                      iVar35 = local_120 + 0x1e;
                      if (-1 < local_120 + -1) {
                        iVar35 = local_120 + -1;
                      }
                      iVar35 = iVar35 >> 5;
                    }
                    iVar25 = local_120 + 1;
                    iVar29 = local_120 + 0x1f;
                    if (-1 < local_120) {
                      iVar29 = local_120;
                    }
                    if (iVar29 >> 5 == iVar35) {
                      local_120 = iVar25;
                    }
                    else {
                      if ((int)local_11c <= local_120) {
                        if (local_120 + 0x20U < 0xa0) {
                          iVar35 = 0x80;
                        }
                        else {
                          uVar19 = local_120 + 0x20U >> 5;
                          local_3e8 = (ulonglong)uVar19;
                          if ((int)local_11c + 0x1fU < 0xa0) {
                            uVar34 = 4;
                            if (4 < uVar19) {
                              uVar34 = uVar19;
                            }
                          }
                          else {
                            uVar34 = uVar19 + (uVar19 * 3 >> 3) + 0x10;
                          }
                          uVar21 = (ulonglong)(uVar34 * 4);
                          if (DAT_14c872d28 != (longlong *)0x0) {
                            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                              uVar19 = (uint)(uVar21 + 0xf);
                              if (uVar34 < 0x1ffd) {
                                uVar21 = (ulonglong)
                                         (ushort)(&DAT_14c841d90)
                                                 [0x32 - (byte)(&DAT_14c841e00)[uVar21 + 0xf >> 4]];
                              }
                              else {
                                uVar44 = (ulonglong)(uVar19 & 0xfffffff0);
                                if (uVar44 < 0x7ff1) {
                                  bVar24 = (&DAT_14c841e00)[uVar19 >> 4];
                                  uVar27 = 0x32;
                                  if (0x32 < bVar24) {
                                    uVar27 = (ulonglong)bVar24;
                                  }
                                  uVar36 = 0x32 - (ulonglong)bVar24;
                                  do {
                                    uVar21 = (ulonglong)
                                             (ushort)(&DAT_14c841d90)[uVar36 & 0xffffffff];
                                    if (((&DAT_14c841d90)[uVar36 & 0xffffffff] & 0xf) == 0)
                                    goto LAB_143cd338e;
                                    lVar33 = uVar27 + 1 + uVar36;
                                    uVar36 = uVar36 - 1;
                                  } while (lVar33 != 0x33);
                                }
                                uVar21 = (ulonglong)DAT_14c841df8;
                                if (DAT_14c841df8 < 0x11) {
                                  uVar21 = 0x10;
                                }
                                uVar21 = -uVar21 & (uVar44 + uVar21) - 1;
                              }
                            }
                            else {
                              uVar21 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar21,0);
                            }
                          }
LAB_143cd338e:
                          iVar25 = (int)(uVar21 >> 2);
                          iVar35 = iVar25 << 5;
                          if (iVar25 < (int)local_3e8) {
                            iVar35 = -0x20;
                          }
                        }
                        local_11c = CONCAT44(local_11c._4_4_,iVar35);
                        FUN_1446efbd8(local_138,local_120);
                        iVar25 = local_120 + 1;
                        puVar40 = local_400;
                      }
                      iVar35 = iVar25 + 0x1f;
                      if (-1 < iVar25) {
                        iVar35 = iVar25;
                      }
                      local_120 = iVar25;
                      if (iVar25 % 0x20 != 0) {
                        puVar23 = local_128;
                        if (local_128 == (uint *)0x0) {
                          puVar23 = local_138;
                        }
                        bVar24 = -(char)(iVar25 % 0x20);
                        puVar23[iVar35 >> 5] =
                             (puVar23[iVar35 >> 5] << (bVar24 & 0x1f)) >> (bVar24 & 0x1f);
                      }
                    }
                    lVar33 = (longlong)iVar30;
                    puVar23 = local_128;
                    if (local_128 == (uint *)0x0) {
                      puVar23 = local_138;
                    }
                    bVar24 = (byte)iVar38 & 0x1f;
                    puVar23[iVar29 >> 5] =
                         puVar23[iVar29 >> 5] & (-2 << bVar24 | 0xfffffffeU >> 0x20 - bVar24);
                  }
                  else {
                    iVar30 = local_11c._4_4_;
                    lVar33 = (longlong)local_11c._4_4_;
                    iVar38 = *(int *)(local_148 + 4 + lVar33 * 0x18);
                    local_11c = CONCAT44(iVar38,(int)local_11c);
                    local_114 = local_114 + -1;
                    puVar40 = local_400;
                    if (local_114 != 0) {
                      *(undefined4 *)(local_148 + (longlong)iVar38 * 0x18) = 0xffffffff;
                    }
                  }
                  plVar31 = local_3f8;
                  puVar23 = local_128;
                  if (local_128 == (uint *)0x0) {
                    puVar23 = local_138;
                  }
                  iVar38 = iVar30 + 0x1f;
                  if (-1 < iVar30) {
                    iVar38 = iVar30;
                  }
                  puVar23[iVar38 >> 5] = puVar23[iVar38 >> 5] | 1 << ((byte)iVar30 & 0x1f);
                  puVar2 = (ulonglong *)(local_148 + lVar33 * 0x18);
                  *puVar2 = uVar37;
                  puVar2[1] = lVar22 + (longlong)plVar26;
                  *(undefined4 *)(puVar2 + 2) = 0xffffffff;
                  uVar19 = ((uint)(uVar37 >> 0x14) & 0xffff ^ (uint)(uVar37 >> 4)) * -0x7a143595;
                  uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
                  uVar19 = uVar19 >> 0x10 ^ uVar19;
                  uVar34 = (int)uStack_140 - local_114;
                  if ((uVar34 != 0) && (uVar34 != 1)) {
                    puVar20 = local_108;
                    if (local_108 == (undefined1 *)0x0) {
                      puVar20 = local_110;
                    }
                    iVar38 = *(int *)(puVar20 + (ulonglong)(local_100 - 1U & uVar19) * 4);
                    while (iVar38 != -1) {
                      puVar3 = (ulonglong *)(local_148 + (longlong)iVar38 * 0x18);
                      if (*puVar3 == uVar37) {
                        uVar17 = *(undefined4 *)((longlong)puVar2 + 4);
                        uVar37 = puVar2[1];
                        uVar18 = *(undefined4 *)((longlong)puVar2 + 0xc);
                        *(int *)puVar3 = (int)*puVar2;
                        *(undefined4 *)((longlong)puVar3 + 4) = uVar17;
                        *(int *)(puVar3 + 1) = (int)uVar37;
                        *(undefined4 *)((longlong)puVar3 + 0xc) = uVar18;
                        plVar26 = &local_148;
                        FUN_14880dae0(plVar26,iVar30);
                        puVar40 = local_400;
                        goto LAB_143cd320f;
                      }
                      iVar38 = (int)puVar3[2];
                    }
                  }
                  if (uVar34 < 4) {
                    iVar38 = 1;
                  }
                  else {
                    uVar37 = (ulonglong)(uVar34 & 0xfffffffe) + 0xf;
                    lVar22 = 0x3f;
                    if (uVar37 != 0) {
                      for (; uVar37 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                      }
                    }
                    iVar38 = 1 << ((byte)lVar22 & 0x1f);
                  }
                  if (((int)uVar34 < 1) || (iVar38 <= local_100)) {
                    uVar19 = local_100 - 1U & uVar19;
                    *(uint *)((longlong)puVar2 + 0x14) = uVar19;
                    puVar20 = local_108;
                    if (local_108 == (undefined1 *)0x0) {
                      puVar20 = local_110;
                    }
                    plVar26 = (longlong *)(longlong)(int)uVar19;
                    *(undefined4 *)(puVar2 + 2) =
                         *(undefined4 *)
                          (puVar20 + ((longlong)local_100 - 1U & (ulonglong)plVar26) * 4);
                    puVar20 = local_108;
                    if (local_108 == (undefined1 *)0x0) {
                      puVar20 = local_110;
                    }
                    *(int *)(puVar20 + ((longlong)local_100 - 1U & (ulonglong)plVar26) * 4) = iVar30
                    ;
                  }
                  else {
                    plVar26 = &local_148;
                    local_100 = iVar38;
                    FUN_141873d90(plVar26);
                    puVar40 = local_400;
                  }
                }
              }
            }
LAB_143cd320f:
            puVar41 = puVar41 + 1;
          } while (puVar41 != puVar40);
        }
        local_248 = *(double *)(lVar39 + 0x18);
        FUN_1400021e4(&local_248,&local_1c8);
        local_394._4_8_ = 0;
        pcVar28 = local_1c8;
        if ((int)ppcStack_1c0 == 0) {
          pcVar28 = (code *)&DAT_149dfb77a;
        }
        FUN_1405f0d29(local_394,pcVar28,0);
        if (local_1c8 != (code *)0x0) {
          FUN_1400020a8();
        }
        FUN_1415e44b6(&local_148,local_3a8);
        plVar32 = local_3f0;
        uStack_1b0._0_4_ = SUB84(local_3f0,0);
        uStack_1b0._4_4_ = (undefined4)((ulonglong)local_3f0 >> 0x20);
        local_248 = 0.0;
        uStack_240 = (double)((ulonglong)uStack_240._4_4_ << 0x20);
        local_2c8 = FUN_143cda5fa;
        ppcStack_2c0 = &local_1c8;
        local_450 = 0;
        local_448 = &local_248;
        local_1c8 = (code *)local_3a8;
        ppcStack_1c0 = (code **)local_394;
        local_1b8 = &local_148;
        FUN_1401f8d10(L"ParallelFor Task",(int)uStack_140 - local_114,1);
        local_3b8 = (longlong *)0x0;
        uStack_3b0 = 0;
        local_3c8 = 0;
        uStack_3c0 = 0;
        if ((longlong)*(int *)(local_3e0 + 0x58) != 0) {
          puVar40 = *(ulonglong **)(local_3e0 + 0x50);
          puVar41 = puVar40 + (longlong)*(int *)(local_3e0 + 0x58) * 2;
          local_400 = puVar41;
          do {
            uVar37 = *puVar40;
            if (uVar37 != 0) {
              if (DAT_14cb740f8 != 0) {
                if ((longlong)*(int *)(uVar37 + 0x100) != 0) {
                  lVar39 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(uVar37 + 0xf8) + lVar39) == DAT_14cb740f8)
                    goto LAB_143cd3f0e;
                    lVar39 = lVar39 + 8;
                  } while ((longlong)*(int *)(uVar37 + 0x100) * 8 != lVar39);
                }
                if ((longlong)*(int *)(uVar37 + 0x110) != 0) {
                  lVar39 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(uVar37 + 0x108) + lVar39) == DAT_14cb740f8)
                    goto LAB_143cd3f0e;
                    lVar39 = lVar39 + 8;
                  } while ((longlong)*(int *)(uVar37 + 0x110) * 8 != lVar39);
                }
              }
              if ((longlong)*(int *)(uVar37 + 0x90) != 0) {
                pdVar42 = *(double **)(uVar37 + 0x88);
                pdVar45 = pdVar42 + (longlong)*(int *)(uVar37 + 0x90) * 0x12;
                do {
                  uVar19 = *(uint *)(param_1 + 0x40);
                  if (*(uint *)(param_1 + 0x44) != uVar19) {
                    dVar7 = *pdVar42;
                    dVar8 = pdVar42[1];
                    dVar11 = dVar8 + -25.0;
                    pvVar13 = (void *)(dVar7 + -25.0);
                    pdVar12 = (double *)(dVar11 + 50.0);
                    dVar47 = (double)pvVar13 + 50.0;
                    if (((ulonglong)plVar31 & 1) == 0) {
                      plVar31 = (longlong *)CONCAT71((int7)((ulonglong)plVar31 >> 8),1);
                      pvVar16 = pvVar13;
                      dVar15 = dVar11;
                      dVar14 = dVar47;
                      pdVar46 = pdVar12;
                    }
                    else {
                      if ((double)pvVar13 <= (double)pvVar16) {
                        pvVar16 = pvVar13;
                      }
                      if (dVar11 <= dVar15) {
                        dVar15 = dVar11;
                      }
                      if (dVar14 <= dVar47) {
                        dVar14 = dVar47;
                      }
                      if ((double)pdVar46 <= (double)pdVar12) {
                        pdVar46 = pdVar12;
                      }
                    }
                    dVar11 = pdVar42[2];
                    *(uint *)(param_1 + 0x40) = uVar19 + 1;
                    if (*(uint *)(param_1 + 0x44) < uVar19 + 1) {
                      FUN_14880c236(plVar32,uVar19);
                    }
                    uVar37 = uStack_3b0;
                    lVar39 = *plVar32;
                    lVar22 = (longlong)(int)uVar19 * 0x38;
                    *(undefined8 *)(lVar39 + lVar22) = 0;
                    *(double *)(lVar39 + 8 + lVar22) = dVar7;
                    *(double *)(lVar39 + 0x10 + lVar22) = dVar8;
                    *(double *)(lVar39 + 0x18 + lVar22) = dVar11;
                    *(undefined4 *)(lVar39 + 0x20 + lVar22) = 0x2000100;
                    puVar5 = (undefined8 *)(lVar39 + 0x28 + lVar22);
                    *puVar5 = 0;
                    puVar5[1] = 0;
                    lVar39 = lVar39 + lVar22;
                    if (lVar39 != 0) {
                      lVar22 = (longlong)(int)uStack_3b0;
                      uVar19 = (int)uStack_3b0 + 1;
                      uStack_3b0 = CONCAT44(uStack_3b0._4_4_,uVar19);
                      if (uStack_3b0._4_4_ < uVar19) {
                        FUN_141873fdc(&local_3b8,uVar37 & 0xffffffff);
                      }
                      uVar37 = uStack_3c0;
                      local_3b8[lVar22] = lVar39;
                      lVar22 = (longlong)(int)uStack_3c0;
                      uVar19 = (int)uStack_3c0 + 1;
                      uStack_3c0 = CONCAT44(uStack_3c0._4_4_,uVar19);
                      if (uStack_3c0._4_4_ < uVar19) {
                        FUN_141873fdc(&local_3c8,uVar37 & 0xffffffff);
                      }
                      *(longlong *)(local_3c8 + lVar22 * 8) = lVar39;
                    }
                  }
                  pdVar42 = pdVar42 + 0x12;
                } while (pdVar42 != pdVar45);
                uVar37 = *puVar40;
              }
              if ((longlong)*(int *)(uVar37 + 0xb0) != 0) {
                pdVar42 = *(double **)(uVar37 + 0xa8);
                pdVar45 = pdVar42 + (longlong)*(int *)(uVar37 + 0xb0) * 0xf;
                local_3f8 = plVar31;
                do {
                  uVar19 = *(uint *)(pdVar42 + 10);
                  if (((((int)uVar19 < (int)uStack_3b0 && -1 < (int)uVar19) &&
                       (local_3b8[uVar19] != 0)) &&
                      (uVar19 = *(uint *)(pdVar42 + 0xc),
                      (int)uVar19 < (int)uStack_3b0 && -1 < (int)uVar19)) &&
                     (local_3b8[uVar19] != 0)) {
                    local_1c8 = (code *)*pdVar42;
                    ppcStack_1c0 = (code **)pdVar42[1];
                    local_1b8 = (longlong *)pdVar42[2];
                    uStack_1b0._0_4_ = *(undefined4 *)(pdVar42 + 3);
                    uStack_1b0._4_4_ = *(undefined4 *)((longlong)pdVar42 + 0x1c);
                    uStack_1a8 = *(undefined4 *)(pdVar42 + 4);
                    uStack_1a4 = *(undefined4 *)((longlong)pdVar42 + 0x24);
                    uStack_1a0 = *(undefined4 *)(pdVar42 + 5);
                    local_198 = (void *)0x0;
                    uVar19 = *(uint *)(pdVar42 + 7);
                    pvVar13 = (void *)pdVar42[6];
                    local_190 = (double)CONCAT44(local_190._4_4_,uVar19);
                    if ((longlong)(int)uVar19 == 0) {
                      local_190 = (double)(ulonglong)uVar19;
                    }
                    else {
                      FUN_14064debc(&local_198,uVar19,0);
                      memcpy(local_198,pvVar13,(longlong)(int)uVar19 * 0x58);
                    }
                    local_188 = pdVar42[8];
                    local_180 = (double *)pdVar42[9];
                    dStack_178 = pdVar42[10];
                    local_170 = pdVar42[0xb];
                    uStack_168 = pdVar42[0xc];
                    local_160 = (void *)0x0;
                    local_158 = *(int *)(pdVar42 + 0xe);
                    lVar39 = (longlong)local_158;
                    pvVar13 = (void *)pdVar42[0xd];
                    if (lVar39 == 0) {
                      local_154 = 0;
                    }
                    else {
                      FUN_14880c328(&local_160,local_158,0);
                      memcpy(local_160,pvVar13,lVar39 << 3);
                    }
                    local_248 = *pdVar42;
                    uStack_240 = pdVar42[1];
                    local_238 = pdVar42[2];
                    uStack_230 = *(undefined4 *)(pdVar42 + 3);
                    uStack_22c = *(undefined4 *)((longlong)pdVar42 + 0x1c);
                    uStack_228 = *(undefined4 *)(pdVar42 + 4);
                    uStack_224 = *(undefined4 *)((longlong)pdVar42 + 0x24);
                    uStack_220 = *(undefined4 *)(pdVar42 + 5);
                    local_218 = (void *)0x0;
                    local_210 = *(int *)(pdVar42 + 7);
                    lVar39 = (longlong)local_210;
                    pvVar13 = (void *)pdVar42[6];
                    if (lVar39 == 0) {
                      local_20c = 0;
                    }
                    else {
                      FUN_14064debc(&local_218,local_210,0);
                      memcpy(local_218,pvVar13,lVar39 * 0x58);
                    }
                    local_208 = pdVar42[8];
                    local_200 = pdVar42[9];
                    dStack_1f8 = pdVar42[10];
                    local_1f0 = *(undefined4 *)(pdVar42 + 0xb);
                    uStack_1ec = *(undefined4 *)((longlong)pdVar42 + 0x5c);
                    uStack_1e8 = *(undefined4 *)(pdVar42 + 0xc);
                    uStack_1e4 = *(undefined4 *)((longlong)pdVar42 + 100);
                    local_1e0 = (void *)0x0;
                    local_1d8 = *(int *)(pdVar42 + 0xe);
                    lVar39 = (longlong)local_1d8;
                    pvVar13 = (void *)pdVar42[0xd];
                    if (lVar39 == 0) {
                      local_1d4 = 0;
                    }
                    else {
                      FUN_14880c328(&local_1e0,local_1d8,0);
                      memcpy(local_1e0,pvVar13,lVar39 << 3);
                    }
                    pvVar13 = local_198;
                    uStack_2a4 = CONCAT44(uStack_1a0,uStack_1a4);
                    uStack_2b8 = (undefined4)local_1b8;
                    uStack_2b4 = local_1b8._4_4_;
                    uStack_2b0 = (undefined4)uStack_1b0;
                    _local_2ac = CONCAT44(uStack_1a8,uStack_1b0._4_4_);
                    local_2c8 = local_1c8;
                    ppcStack_2c0 = ppcStack_1c0;
                    local_298 = (void *)0x0;
                    lVar39 = (longlong)local_190._0_4_;
                    local_290 = local_190._0_4_;
                    if (lVar39 == 0) {
                      local_28c = 0;
                    }
                    else {
                      FUN_14064debc(local_1c8._0_4_,(ulonglong)local_190 & 0xffffffff,0);
                      memcpy(local_298,pvVar13,lVar39 * 0x58);
                    }
                    pvVar13 = local_160;
                    local_288 = local_188;
                    local_280 = local_180;
                    dStack_278 = dStack_178;
                    local_270 = (undefined4)local_170;
                    uStack_26c = local_170._4_4_;
                    uStack_268 = (undefined4)uStack_168;
                    uStack_264 = uStack_168._4_4_;
                    local_260 = (void *)0x0;
                    lVar39 = (longlong)local_158;
                    local_258 = local_158;
                    if (lVar39 == 0) {
                      local_254 = 0;
                    }
                    else {
                      FUN_14880c328(&local_260,local_158,0);
                      memcpy(local_260,pvVar13,lVar39 << 3);
                    }
                    if ((longlong)(int)uStack_3b0 != 0) {
                      lVar39 = (longlong)(int)uStack_3b0 << 3;
                      plVar32 = local_3b8;
                      do {
                        lVar22 = *plVar32;
                        if (lVar22 != 0) {
                          if ((*local_280 == *(double *)(lVar22 + 8)) &&
                             (!NAN(*local_280) && !NAN(*(double *)(lVar22 + 8)))) {
                            if ((local_280[1] == *(double *)(lVar22 + 0x10)) &&
                               (!NAN(local_280[1]) && !NAN(*(double *)(lVar22 + 0x10)))) {
                              if ((local_280[2] == *(double *)(lVar22 + 0x18)) &&
                                 (!NAN(local_280[2]) && !NAN(*(double *)(lVar22 + 0x18))))
                              goto LAB_143cd3b60;
                            }
                          }
                        }
                        plVar32 = plVar32 + 1;
                        lVar39 = lVar39 + -8;
                      } while (lVar39 != 0);
                    }
                    plVar32 = (longlong *)0x0;
LAB_143cd3b60:
                    if (local_260 != (void *)0x0) {
                      FUN_1400020a8();
                    }
                    if (local_298 != (void *)0x0) {
                      FUN_1400020a8();
                    }
                    pvVar13 = local_218;
                    uStack_324 = CONCAT44(uStack_220,uStack_224);
                    uStack_338 = (undefined4)local_238;
                    uStack_334 = local_238._4_4_;
                    uStack_330 = uStack_230;
                    _local_32c = CONCAT44(uStack_228,uStack_22c);
                    local_348 = (undefined4)local_248;
                    uStack_344 = local_248._4_4_;
                    uStack_340 = (undefined4)uStack_240;
                    uStack_33c = uStack_240._4_4_;
                    local_318 = (void *)0x0;
                    lVar39 = (longlong)local_210;
                    local_310 = local_210;
                    if (lVar39 == 0) {
                      local_30c = 0;
                    }
                    else {
                      FUN_14064debc(&local_318,local_210,0);
                      memcpy(local_318,pvVar13,lVar39 * 0x58);
                    }
                    pvVar13 = local_1e0;
                    local_308 = local_208;
                    local_300 = local_200;
                    dStack_2f8 = dStack_1f8;
                    local_2f0 = local_1f0;
                    uStack_2ec = uStack_1ec;
                    uStack_2e8 = uStack_1e8;
                    uStack_2e4 = uStack_1e4;
                    local_2e0 = (void *)0x0;
                    lVar39 = (longlong)local_1d8;
                    local_2d8 = local_1d8;
                    if (lVar39 == 0) {
                      local_2d4 = 0;
                    }
                    else {
                      FUN_14880c328(&local_2e0,local_1d8,0);
                      memcpy(local_2e0,pvVar13,lVar39 << 3);
                    }
                    if ((longlong)(int)uStack_3b0 != 0) {
                      pdVar12 = (double *)CONCAT44(uStack_2ec,local_2f0);
                      lVar39 = (longlong)(int)uStack_3b0 << 3;
                      plVar26 = local_3b8;
                      do {
                        lVar22 = *plVar26;
                        if (lVar22 != 0) {
                          if ((*pdVar12 == *(double *)(lVar22 + 8)) &&
                             (!NAN(*pdVar12) && !NAN(*(double *)(lVar22 + 8)))) {
                            if ((pdVar12[1] == *(double *)(lVar22 + 0x10)) &&
                               (!NAN(pdVar12[1]) && !NAN(*(double *)(lVar22 + 0x10)))) {
                              if ((pdVar12[2] == *(double *)(lVar22 + 0x18)) &&
                                 (!NAN(pdVar12[2]) && !NAN(*(double *)(lVar22 + 0x18))))
                              goto LAB_143cd3cca;
                            }
                          }
                        }
                        plVar26 = plVar26 + 1;
                        lVar39 = lVar39 + -8;
                      } while (lVar39 != 0);
                    }
                    plVar26 = (longlong *)0x0;
LAB_143cd3cca:
                    if (local_2e0 != (void *)0x0) {
                      FUN_1400020a8();
                    }
                    if (local_318 != (void *)0x0) {
                      FUN_1400020a8();
                    }
                    if (plVar26 != (longlong *)0x0 && plVar32 != (longlong *)0x0) {
                      lVar39 = *plVar32;
                      lVar22 = *plVar26;
                      if (lVar22 != 0 && lVar39 != 0) {
                        iVar38 = *(int *)(lVar39 + 0x30);
                        *(uint *)(lVar39 + 0x30) = iVar38 + 1U;
                        if (*(uint *)(lVar39 + 0x34) < iVar38 + 1U) {
                          FUN_141873c2e((longlong *)(lVar39 + 0x28),iVar38);
                        }
                        *(longlong *)(*(longlong *)(lVar39 + 0x28) + (longlong)iVar38 * 8) = lVar22;
                        iVar38 = *(int *)(lVar22 + 0x30);
                        *(uint *)(lVar22 + 0x30) = iVar38 + 1U;
                        if (*(uint *)(lVar22 + 0x34) < iVar38 + 1U) {
                          FUN_141873c2e((longlong *)(lVar22 + 0x28),iVar38);
                        }
                        *(longlong *)(*(longlong *)(lVar22 + 0x28) + (longlong)iVar38 * 8) = lVar39;
                      }
                    }
                    if (local_1e0 != (void *)0x0) {
                      FUN_1400020a8();
                    }
                    plVar31 = local_3f8;
                    if (local_218 != (void *)0x0) {
                      FUN_1400020a8();
                    }
                    if (local_160 != (void *)0x0) {
                      FUN_1400020a8();
                    }
                    if (local_198 != (void *)0x0) {
                      FUN_1400020a8();
                    }
                  }
                  pdVar42 = pdVar42 + 0xf;
                } while (pdVar42 != pdVar45);
              }
              uVar37 = uStack_3b0 >> 0x20;
              uStack_3b0 = uStack_3b0 & 0xffffffff00000000;
              puVar41 = local_400;
              plVar32 = local_3f0;
              if ((int)uVar37 != 0) {
                FUN_1400ee040(&local_3b8,0);
                puVar41 = local_400;
                plVar32 = local_3f0;
              }
            }
LAB_143cd3f0e:
            puVar40 = puVar40 + 2;
          } while (puVar40 != puVar41);
        }
        ppcVar1 = (code **)(param_1 + 0x48);
        if (*(char *)(param_1 + 0xb8) == '\0') {
          local_1c8 = (code *)0x0;
          ppcStack_1c0 = (code **)0x0;
          dStack_178 = (double)CONCAT44(CONCAT31(uStack_34b,local_34f._3_1_),
                                        (int)CONCAT41(local_34f,(char)plVar31));
          uStack_168 = ((double)pdVar46 + dVar15) * 0.5;
          local_170 = (dVar14 + (double)pvVar16) * 0.5;
          local_160 = (void *)CONCAT35(local_160._5_3_,0x42c80000);
          local_1b8 = (longlong *)0x0;
          uStack_1b0._0_4_ = 0;
          uStack_1b0._4_4_ = 0;
          uStack_1a8 = 0;
          uStack_1a4 = 0;
          uStack_1a0 = 0;
          uStack_19c = 0;
          local_198 = pvVar16;
          local_190 = dVar15;
          local_188 = dVar14;
          local_180 = pdVar46;
          if (&local_1c8 != ppcVar1) {
            FUN_145c90466(ppcVar1,&local_1c8);
          }
          FUN_14031ec32(&local_1c8);
        }
        iVar38 = local_120;
        if (local_120 == 0) {
          uVar44 = 1;
          uVar37 = 0;
          iVar30 = 0;
          iVar35 = 0;
        }
        else {
          puVar23 = local_128;
          if (local_128 == (uint *)0x0) {
            puVar23 = local_138;
          }
          uVar19 = *puVar23;
          if (uVar19 == 0) {
            iVar30 = local_120 + 0x1e;
            if (-1 < local_120 + -1) {
              iVar30 = local_120 + -1;
            }
            uVar37 = 0;
            uVar21 = (ulonglong)(uint)(iVar30 >> 5);
            if (iVar30 >> 5 < 1) {
              uVar21 = uVar37;
            }
            iVar30 = 0;
            do {
              if (uVar21 == uVar37) goto LAB_143cd4095;
              iVar30 = iVar30 + 0x20;
              uVar19 = puVar23[uVar37 + 1];
              uVar37 = uVar37 + 1;
            } while (uVar19 == 0);
          }
          else {
            uVar37 = 0;
            iVar30 = 0;
          }
          uVar44 = (ulonglong)(-uVar19 & uVar19);
          uVar21 = uVar44 * 2 + 1;
          lVar39 = 0x3f;
          if (uVar21 != 0) {
            for (; uVar21 >> lVar39 == 0; lVar39 = lVar39 + -1) {
            }
          }
          iVar35 = (iVar30 - ((uint)lVar39 ^ 0x3f)) + 0x3e;
          if (local_120 <= iVar35) {
            iVar35 = local_120;
          }
        }
        uStack_1b0 = (longlong **)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0);
        if (iVar35 != local_120) {
          uVar19 = 0xffffffff;
          do {
            local_248 = *(double *)(local_148 + 8 + (longlong)iVar35 * 0x18);
            ppcStack_1c0 = (code **)(*(double *)((longlong)local_248 + 0x10) + -25.0);
            local_1c8 = (code *)(*(double *)((longlong)local_248 + 8) + -25.0);
            local_1b8 = (longlong *)((double)local_1c8 + 50.0);
            uStack_1b0 = (longlong **)((double)ppcStack_1c0 + 50.0);
            uStack_1a8 = CONCAT31(uStack_1a8._1_3_,1);
            FUN_143cda8bc(ppcVar1,&local_248,&local_1c8);
            uVar19 = ~(uint)uVar44 & uVar19;
            puVar23 = local_128;
            if (local_128 == (uint *)0x0) {
              puVar23 = local_138;
            }
            iVar35 = (int)uVar37;
            lVar39 = (longlong)iVar35;
            uVar34 = puVar23[lVar39] & uVar19;
            if (uVar34 == 0) {
              iVar25 = local_120 + 0x1e;
              if (-1 < local_120 + -1) {
                iVar25 = local_120 + -1;
              }
              iVar25 = iVar25 >> 5;
              iVar30 = iVar30 + 0x20;
              iVar29 = iVar25;
              if (iVar25 < iVar35) {
                iVar29 = iVar35;
              }
              if (iVar35 < iVar25) {
                lVar22 = 0;
                do {
                  uVar34 = puVar23[lVar39 + lVar22 + 1];
                  if (uVar34 != 0) {
                    uVar37 = (ulonglong)(iVar35 + (int)lVar22 + 1);
                    uVar19 = 0xffffffff;
                    goto LAB_143cd4495;
                  }
                  iVar30 = iVar30 + 0x20;
                  lVar22 = lVar22 + 1;
                } while (iVar29 - lVar39 != lVar22);
                uVar19 = 0xffffffff;
                iVar35 = iVar29;
              }
              uVar37 = (ulonglong)(iVar35 + 1);
              iVar35 = local_120;
            }
            else {
LAB_143cd4495:
              uVar44 = (ulonglong)(-uVar34 & uVar34);
              uVar21 = uVar44 * 2 + 1;
              lVar39 = 0x3f;
              if (uVar21 != 0) {
                for (; uVar21 >> lVar39 == 0; lVar39 = lVar39 + -1) {
                }
              }
              iVar35 = (iVar30 - ((uint)lVar39 ^ 0x3f)) + 0x3e;
              if (local_120 <= iVar35) {
                iVar35 = local_120;
              }
            }
          } while (iVar35 != iVar38);
        }
LAB_143cd4095:
        lVar39 = local_3c8;
        lVar22 = (longlong)(int)uStack_3c0;
        uVar37 = 0;
        if (lVar22 != 0) {
          lVar33 = 0;
          do {
            local_248 = *(double *)(lVar39 + lVar33);
            ppcStack_1c0 = (code **)(*(double *)((longlong)local_248 + 0x10) + -25.0);
            local_1c8 = (code *)(*(double *)((longlong)local_248 + 8) + -25.0);
            local_1b8 = (longlong *)((double)local_1c8 + 50.0);
            uStack_1b0 = (longlong **)((double)ppcStack_1c0 + 50.0);
            uStack_1a8 = CONCAT31(uStack_1a8._1_3_,1);
            FUN_143cda8bc(ppcVar1,&local_248);
            lVar33 = lVar33 + 8;
          } while (lVar22 * 8 != lVar33);
          uVar37 = 0;
          if ((longlong)(int)uStack_3c0 != 0) {
            lVar39 = 0;
            do {
              *(undefined1 *)(*(longlong *)(local_3c8 + lVar39) + 0x20) = 1;
              lVar39 = lVar39 + 8;
            } while ((longlong)(int)uStack_3c0 << 3 != lVar39);
            uVar37 = uStack_3c0 & 0xffffffff;
          }
        }
        local_3d8 = (longlong *)0x0;
        uStack_3d0 = 0;
        local_238 = 0.0;
        local_248 = 0.0;
        uStack_240 = 0.0;
        FUN_1414efb36(&local_3d8,&local_248,uVar37);
        local_1c8 = (code *)&local_3c8;
        ppcStack_1c0 = (code **)&local_378;
        local_1b8 = local_3f0;
        local_448 = &local_360;
        local_360 = 0;
        local_358 = 0;
        local_370 = FUN_143cdaf24;
        local_368 = &local_1c8;
        local_450 = 0;
        uStack_1b0 = &local_3d8;
        FUN_1401f8d10(L"ParallelFor Task",uStack_3c0 & 0xffffffff,1);
        if ((longlong)(int)uStack_3d0 != 0) {
          local_3f8 = local_3d8 + (longlong)(int)uStack_3d0 * 3;
          plVar32 = local_3d8;
          do {
            if ((plVar32[2] != 0) && (lVar39 = plVar32[1], (longlong)(int)lVar39 != 0)) {
              lVar22 = *plVar32;
              lVar33 = 0;
              do {
                iVar38 = *(int *)(lVar22 + lVar33);
                if (((-1 < (longlong)iVar38) && (iVar38 < *(int *)(param_1 + 0x40))) &&
                   (lVar43 = plVar32[2], lVar43 != 0)) {
                  lVar4 = *local_3f0 + (longlong)iVar38 * 0x38;
                  iVar38 = *(int *)(lVar4 + 0x30);
                  uVar19 = iVar38 + 1;
                  *(uint *)(lVar4 + 0x30) = uVar19;
                  if (*(uint *)(lVar4 + 0x34) < uVar19) {
                    FUN_141873c2e((longlong *)(lVar4 + 0x28));
                  }
                  *(longlong *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar38 * 8) = lVar43;
                }
                lVar33 = lVar33 + 4;
              } while ((longlong)(int)lVar39 * 4 != lVar33);
            }
            plVar32 = plVar32 + 3;
          } while (plVar32 != local_3f8);
        }
        iVar38 = *(int *)(param_1 + 0x40);
        if ((longlong)iVar38 != 0) {
          lVar39 = *(longlong *)(param_1 + 0x38);
          lVar22 = 0;
          do {
            *(byte *)(lVar39 + 0x20 + lVar22) = *(byte *)(lVar39 + 0x21 + lVar22) ^ 1;
            lVar22 = lVar22 + 0x38;
          } while ((longlong)iVar38 * 0x38 - lVar22 != 0);
        }
        FUN_1414efbdb(local_3d8,uStack_3d0 & 0xffffffff);
        if (local_3d8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (local_3c8 != 0) {
          FUN_1400020a8();
        }
        if (local_3b8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (local_3a8[0] != 0) {
          FUN_1400020a8();
        }
        local_100 = 0;
        if (local_108 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        FUN_145c276da(&local_148);
      }
      if (local_388 != (ulonglong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_478) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cd4594 FUN_143cd4594 body=158 status=ok
// SIG undefined FUN_143cd4594(void)

void FUN_143cd4594(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  lVar3 = FUN_145a31346(param_2);
  if (lVar3 == 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar3 + 0xc);
    *(uint *)(param_1 + 0x30) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar3 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar3 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar4;
      }
    }
  }
  *(int *)(param_1 + 0x34) = iVar2;
  return;
}



// FUNCTION 143cd4632 FUN_143cd4632 body=7546 status=ok
// SIG undefined FUN_143cd4632(void)

/* WARNING: Type propagation algorithm not settling */

longlong ***
FUN_143cd4632(longlong param_1,double *param_2,float param_3,longlong param_4,undefined8 param_5,
             undefined8 param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  longlong **pplVar5;
  longlong **pplVar6;
  longlong **pplVar7;
  longlong **pplVar8;
  longlong **pplVar9;
  longlong **pplVar10;
  char cVar11;
  int iVar12;
  longlong ***ppplVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  longlong ***ppplVar17;
  double *pdVar18;
  ulonglong uVar19;
  longlong *****ppppplVar20;
  longlong ****pppplVar21;
  longlong ****pppplVar22;
  longlong ****pppplVar23;
  DWORD DVar24;
  ulonglong uVar25;
  int iVar26;
  longlong ****pppplVar27;
  longlong lVar28;
  longlong ****pppplVar29;
  int iVar30;
  ulonglong uVar31;
  longlong ***ppplVar32;
  uint uVar33;
  longlong lVar34;
  longlong ****pppplVar35;
  int iVar36;
  longlong ****pppplVar37;
  int iVar38;
  code *pcVar39;
  longlong ****pppplVar40;
  longlong ****pppplVar41;
  longlong ***ppplVar42;
  longlong lVar43;
  int iVar44;
  longlong ****pppplVar45;
  bool bVar46;
  float fVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined1 auStack_528 [32];
  undefined8 local_508;
  undefined4 local_500;
  code **local_4f8;
  undefined8 local_4f0;
  wchar_t *local_4e8;
  code *local_4e0;
  undefined1 *local_4d8;
  code **local_4d0;
  code *local_4c8;
  code *local_4c0;
  DWORD local_4ac;
  longlong *****local_4a8;
  longlong ****local_4a0;
  DWORD local_494;
  longlong ****local_490;
  double *local_488;
  longlong local_480;
  longlong ****local_478;
  longlong ****pppplStack_470;
  double local_460;
  double local_458;
  double local_450;
  double local_448;
  longlong ****local_438;
  ulonglong uStack_430;
  longlong local_420;
  code *local_418;
  longlong *****local_410;
  longlong ****local_408;
  undefined8 uStack_400;
  longlong *local_3f8;
  double *local_3f0;
  longlong local_3e8;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_528;
  local_420 = param_4;
  if (*(char *)(param_1 + 0xb8) != '\x01') {
    ppplVar32 = (longlong ***)0x0;
    goto LAB_143cd5af9;
  }
  local_438 = (longlong ****)0x0;
  uStack_430 = 0;
  dVar49 = (double)param_3;
  local_458 = param_2[1] - dVar49;
  local_460 = *param_2 - dVar49;
  local_448 = local_458 + dVar49 + dVar49;
  local_450 = dVar49 + dVar49 + local_460;
  local_488 = param_2;
  local_480 = param_1;
  FUN_1400ede88(param_1 + 0x48,&local_460,&local_438);
  uVar33 = (uint)uStack_430;
  if (0 < (int)(uint)uStack_430) {
    iVar30 = -1;
    lVar34 = 0;
    do {
      ppplVar32 = local_438[lVar34];
      if ((ppplVar32 != (longlong ***)0x0) &&
         ((*(char *)(ppplVar32 + 4) != '\0' || (*(int *)(ppplVar32 + 6) < 1)))) {
        iVar36 = uVar33 + iVar30;
        if (iVar36 != 0) {
          if (0 < iVar36) {
            iVar36 = 1;
          }
          memmove(local_438 + lVar34,local_438 + (int)(uVar33 - iVar36),(longlong)iVar36 << 3);
          uVar33 = (uint)uStack_430;
        }
        uStack_430 = CONCAT44(uStack_430._4_4_,uVar33 - 1);
        FUN_14023cee2(&local_438);
        uVar33 = (uint)uStack_430;
      }
      lVar34 = lVar34 + 1;
      iVar30 = iVar30 + -1;
    } while (lVar34 < (int)uVar33);
  }
  pppplVar21 = local_438;
  if (uVar33 == 0) {
LAB_143cd5ae5:
    ppplVar32 = (longlong ***)0x0;
  }
  else {
    if ((int)uVar33 < 2) {
LAB_143cd5a8b:
      if ((int)uVar33 < 1) goto LAB_143cd5ae5;
    }
    else {
      dVar49 = *local_488;
      dVar3 = local_488[1];
      dVar4 = local_488[2];
      memset(&local_3f8,0,0x2f0);
      local_408 = pppplVar21;
      uStack_400 = pppplVar21 + ((ulonglong)uVar33 - 1);
      fVar47 = logf((float)(int)uVar33);
      local_3f8 = (longlong *)CONCAT44(local_3f8._4_4_,(int)(longlong)(fVar47 + fVar47));
      piVar1 = (int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      ppppplVar20 = &local_408;
      pcVar39 = GetCurrentThreadId_exref;
      do {
        pppplVar23 = *ppppplVar20;
        pppplVar21 = ppppplVar20[1];
        DVar24 = *(DWORD *)(ppppplVar20 + 2);
        iVar30 = (int)((ulonglong)((longlong)pppplVar21 - (longlong)pppplVar23) >> 3);
        uVar25 = (ulonglong)(iVar30 + 1);
        pppplVar41 = pppplVar21;
        pppplVar29 = pppplVar23;
        pppplVar40 = pppplVar23;
        if (DVar24 != 0) {
LAB_143cd48a2:
          if (8 < (int)(uint)uVar25) {
            uVar33 = (uint)uVar25 >> 1;
            ppplVar32 = pppplVar29[uVar33];
            pppplVar29[uVar33] = *pppplVar29;
            *pppplVar29 = ppplVar32;
            pppplVar22 = pppplVar21 + 1;
            pppplVar40 = pppplVar29;
            local_4a0 = pppplVar23;
            do {
              pppplVar23 = pppplVar40 + 1;
              pppplVar27 = pppplVar40 + 1;
              do {
                pppplVar40 = pppplVar27;
                pppplVar37 = pppplVar23;
                lVar34 = DAT_14cb740f0;
                if (pppplVar21 < pppplVar40) break;
                ppplVar32 = *pppplVar40;
                ppplVar13 = *pppplVar29;
                pplVar5 = ppplVar13[1];
                pplVar6 = ppplVar13[2];
                pplVar7 = ppplVar13[3];
                pplVar8 = ppplVar32[1];
                pplVar9 = ppplVar32[2];
                pplVar10 = ppplVar32[3];
                dVar15 = 1.0;
                if (200.0 < ABS((double)pplVar7 - dVar4)) {
                  iVar30 = *piVar1;
                  if (iVar30 == 0x40000002) {
                    uVar25 = 0;
                  }
                  else {
                    bVar46 = true;
                    if ((DAT_14c86a9f8 == '\x01') && (iVar30 != 2)) {
                      if (iVar30 == 1) {
                        local_4ac = DVar24;
                        local_4a8 = ppppplVar20;
                        local_490 = pppplVar41;
                        local_494 = FUN_140ad26c0();
                        DVar24 = (*pcVar39)();
                        bVar46 = local_494 == DVar24;
                        ppppplVar20 = local_4a8;
                        pppplVar41 = local_490;
                        DVar24 = local_4ac;
                      }
                      else {
                        bVar46 = false;
                      }
                    }
                    uVar25 = (ulonglong)(bVar46 ^ 1);
                  }
                  dVar15 = (double)*(float *)(lVar34 + uVar25 * 4);
                }
                lVar34 = DAT_14cb740f0;
                dVar14 = 1.0;
                if (200.0 < ABS((double)pplVar10 - dVar4)) {
                  iVar30 = *piVar1;
                  if (iVar30 == 0x40000002) {
                    uVar25 = 0;
                  }
                  else {
                    bVar46 = true;
                    if ((DAT_14c86a9f8 == '\x01') && (iVar30 != 2)) {
                      if (iVar30 == 1) {
                        local_4ac = DVar24;
                        local_4a8 = ppppplVar20;
                        local_490 = pppplVar41;
                        local_494 = FUN_140ad26c0();
                        DVar24 = (*pcVar39)();
                        bVar46 = local_494 == DVar24;
                        ppppplVar20 = local_4a8;
                        pppplVar41 = local_490;
                        DVar24 = local_4ac;
                      }
                      else {
                        bVar46 = false;
                      }
                    }
                    uVar25 = (ulonglong)(bVar46 ^ 1);
                  }
                  dVar14 = (double)*(float *)(lVar34 + uVar25 * 4);
                }
                dVar48 = dVar4 - (double)pplVar7;
                dVar50 = dVar4 - (double)pplVar10;
                pppplVar23 = pppplVar37 + 1;
                pppplVar27 = pppplVar40 + 1;
              } while ((float)(dVar50 * dVar50 * dVar14 +
                              (dVar3 - (double)pplVar9) * (dVar3 - (double)pplVar9) +
                              (dVar49 - (double)pplVar8) * (dVar49 - (double)pplVar8)) <=
                       (float)(dVar48 * dVar48 * dVar15 +
                              (dVar3 - (double)pplVar6) * (dVar3 - (double)pplVar6) +
                              (dVar49 - (double)pplVar5) * (dVar49 - (double)pplVar5)));
              pppplVar23 = pppplVar22 + -2;
              do {
                pppplVar27 = pppplVar22;
                pppplVar35 = pppplVar23;
                lVar34 = DAT_14cb740f0;
                pppplVar22 = pppplVar27 + -1;
                if (pppplVar22 <= pppplVar29) break;
                ppplVar32 = *pppplVar29;
                ppplVar13 = *pppplVar22;
                pplVar5 = ppplVar13[1];
                pplVar6 = ppplVar13[2];
                pplVar7 = ppplVar13[3];
                pplVar8 = ppplVar32[1];
                pplVar9 = ppplVar32[2];
                pplVar10 = ppplVar32[3];
                dVar15 = 1.0;
                if (200.0 < ABS((double)pplVar7 - dVar4)) {
                  iVar30 = *piVar1;
                  if (iVar30 == 0x40000002) {
                    uVar25 = 0;
                  }
                  else {
                    bVar46 = true;
                    if ((DAT_14c86a9f8 == '\x01') && (iVar30 != 2)) {
                      if (iVar30 == 1) {
                        local_4ac = DVar24;
                        local_4a8 = ppppplVar20;
                        local_490 = pppplVar41;
                        local_494 = FUN_140ad26c0();
                        DVar24 = GetCurrentThreadId();
                        bVar46 = local_494 == DVar24;
                        pcVar39 = GetCurrentThreadId_exref;
                        ppppplVar20 = local_4a8;
                        pppplVar41 = local_490;
                        DVar24 = local_4ac;
                      }
                      else {
                        bVar46 = false;
                      }
                    }
                    uVar25 = (ulonglong)(bVar46 ^ 1);
                  }
                  dVar15 = (double)*(float *)(lVar34 + uVar25 * 4);
                }
                lVar34 = DAT_14cb740f0;
                dVar14 = 1.0;
                if (200.0 < ABS((double)pplVar10 - dVar4)) {
                  iVar30 = *piVar1;
                  if (iVar30 == 0x40000002) {
                    uVar25 = 0;
                  }
                  else {
                    bVar46 = true;
                    if ((DAT_14c86a9f8 == '\x01') && (iVar30 != 2)) {
                      if (iVar30 == 1) {
                        local_4ac = DVar24;
                        local_4a8 = ppppplVar20;
                        local_490 = pppplVar41;
                        local_494 = FUN_140ad26c0();
                        DVar24 = GetCurrentThreadId();
                        bVar46 = local_494 == DVar24;
                        pcVar39 = GetCurrentThreadId_exref;
                        ppppplVar20 = local_4a8;
                        pppplVar41 = local_490;
                        DVar24 = local_4ac;
                      }
                      else {
                        bVar46 = false;
                      }
                    }
                    uVar25 = (ulonglong)(bVar46 ^ 1);
                  }
                  dVar14 = (double)*(float *)(lVar34 + uVar25 * 4);
                }
                dVar48 = dVar4 - (double)pplVar7;
                dVar50 = dVar4 - (double)pplVar10;
                pppplVar23 = pppplVar35 + -1;
              } while ((float)(dVar50 * dVar50 * dVar14 +
                              (dVar3 - (double)pplVar9) * (dVar3 - (double)pplVar9) +
                              (dVar49 - (double)pplVar8) * (dVar49 - (double)pplVar8)) <=
                       (float)(dVar48 * dVar48 * dVar15 +
                              (dVar3 - (double)pplVar6) * (dVar3 - (double)pplVar6) +
                              (dVar49 - (double)pplVar5) * (dVar49 - (double)pplVar5)));
              if (pppplVar22 < pppplVar40) goto LAB_143cd4d9a;
              ppplVar32 = *pppplVar40;
              *pppplVar40 = *pppplVar22;
              *pppplVar22 = ppplVar32;
            } while( true );
          }
          for (; pppplVar40 = pppplVar29, lVar34 = DAT_14cb740f0, pppplVar41 = local_4a0,
              pppplVar23 = pppplVar29, pppplVar29 < pppplVar21; pppplVar21 = pppplVar21 + -1) {
            while (pppplVar22 = pppplVar40, pppplVar23 = pppplVar23 + 1, DAT_14cb740f0 = lVar34,
                  pppplVar23 <= pppplVar21) {
              ppplVar32 = *pppplVar23;
              ppplVar13 = *pppplVar22;
              pplVar5 = ppplVar13[1];
              pplVar6 = ppplVar13[2];
              pplVar7 = ppplVar13[3];
              pplVar8 = ppplVar32[1];
              local_4a0 = (longlong ****)ppplVar32[2];
              uVar52 = SUB84(local_4a0,0);
              uVar53 = (undefined4)((ulonglong)local_4a0 >> 0x20);
              pplVar9 = ppplVar32[3];
              dVar15 = 1.0;
              if (200.0 < ABS((double)pplVar7 - dVar4)) {
                iVar30 = *piVar1;
                if (iVar30 == 0x40000002) {
                  uVar25 = 0;
                  local_4a0 = pppplVar41;
                }
                else {
                  bVar46 = true;
                  if ((DAT_14c86a9f8 == '\x01') && (iVar30 != 2)) {
                    if (iVar30 == 1) {
                      local_4a8 = ppppplVar20;
                      local_4ac = FUN_140ad26c0();
                      DVar24 = (*pcVar39)();
                      uVar52 = SUB84(local_4a0,0);
                      uVar53 = (undefined4)((ulonglong)local_4a0 >> 0x20);
                      bVar46 = local_4ac == DVar24;
                      ppppplVar20 = local_4a8;
                      pppplVar41 = local_4a0;
                    }
                    else {
                      bVar46 = false;
                    }
                  }
                  local_4a0 = pppplVar41;
                  uVar25 = (ulonglong)(bVar46 ^ 1);
                }
                dVar15 = (double)*(float *)(lVar34 + uVar25 * 4);
                pppplVar41 = local_4a0;
              }
              local_4a0 = pppplVar41;
              lVar34 = DAT_14cb740f0;
              dVar14 = 1.0;
              if (200.0 < ABS((double)pplVar9 - dVar4)) {
                iVar30 = *piVar1;
                if (iVar30 == 0x40000002) {
                  uVar25 = 0;
                }
                else {
                  bVar46 = true;
                  if ((DAT_14c86a9f8 == '\x01') && (iVar30 != 2)) {
                    if (iVar30 == 1) {
                      local_4a0 = (longlong ****)CONCAT44(uVar53,uVar52);
                      local_4a8 = ppppplVar20;
                      local_4ac = FUN_140ad26c0();
                      DVar24 = (*pcVar39)();
                      uVar52 = SUB84(local_4a0,0);
                      uVar53 = (undefined4)((ulonglong)local_4a0 >> 0x20);
                      bVar46 = local_4ac == DVar24;
                      ppppplVar20 = local_4a8;
                    }
                    else {
                      bVar46 = false;
                    }
                  }
                  uVar25 = (ulonglong)(bVar46 ^ 1);
                }
                dVar14 = (double)*(float *)(lVar34 + uVar25 * 4);
              }
              dVar48 = dVar4 - (double)pplVar7;
              dVar51 = dVar3 - (double)CONCAT44(uVar53,uVar52);
              dVar50 = dVar4 - (double)pplVar9;
              pppplVar40 = pppplVar23;
              lVar34 = DAT_14cb740f0;
              pppplVar41 = local_4a0;
              if ((float)(dVar50 * dVar50 * dVar14 +
                         dVar51 * dVar51 + (dVar49 - (double)pplVar8) * (dVar49 - (double)pplVar8))
                  <= (float)(dVar48 * dVar48 * dVar15 +
                            (dVar3 - (double)pplVar6) * (dVar3 - (double)pplVar6) +
                            (dVar49 - (double)pplVar5) * (dVar49 - (double)pplVar5))) {
                pppplVar40 = pppplVar22;
              }
            }
            ppplVar32 = *pppplVar22;
            *pppplVar22 = *pppplVar21;
            *pppplVar21 = ppplVar32;
            local_4a0 = pppplVar41;
          }
          goto LAB_143cd5a5c;
        }
LAB_143cd4e2c:
        iVar36 = (int)uVar25;
        if (iVar36 != 0) {
          iVar30 = (iVar30 - (iVar30 + -1 >> 0x1f)) + -1 >> 1;
          lVar34 = DAT_14cb740f0;
          pppplVar21 = local_4a0;
          iVar26 = iVar30;
joined_r0x000143cd4e4b:
          do {
            iVar38 = iVar30 * 2 + 1;
            DAT_14cb740f0 = lVar34;
            local_4a0 = pppplVar21;
            if (iVar38 < iVar36) {
              iVar44 = iVar30 * 2 + 2;
              if (iVar44 < iVar36) {
                ppplVar32 = pppplVar40[iVar38];
                ppplVar13 = pppplVar40[iVar44];
                pplVar5 = ppplVar13[1];
                pplVar6 = ppplVar13[2];
                pplVar7 = ppplVar13[3];
                pplVar8 = ppplVar32[1];
                local_4a0 = (longlong ****)ppplVar32[2];
                uVar52 = SUB84(local_4a0,0);
                uVar53 = (undefined4)((ulonglong)local_4a0 >> 0x20);
                pplVar9 = ppplVar32[3];
                dVar15 = 1.0;
                if (200.0 < ABS((double)pplVar7 - dVar4)) {
                  iVar12 = *piVar1;
                  if (iVar12 == 0x40000002) {
                    uVar31 = 0;
                    local_4a0 = pppplVar21;
                  }
                  else {
                    bVar46 = true;
                    if ((DAT_14c86a9f8 == '\x01') && (iVar12 != 2)) {
                      if (iVar12 == 1) {
                        local_4a8 = ppppplVar20;
                        local_4ac = FUN_140ad26c0();
                        DVar24 = GetCurrentThreadId();
                        uVar52 = SUB84(local_4a0,0);
                        uVar53 = (undefined4)((ulonglong)local_4a0 >> 0x20);
                        bVar46 = local_4ac == DVar24;
                        pcVar39 = GetCurrentThreadId_exref;
                        ppppplVar20 = local_4a8;
                        pppplVar21 = local_4a0;
                      }
                      else {
                        bVar46 = false;
                      }
                    }
                    local_4a0 = pppplVar21;
                    uVar31 = (ulonglong)(bVar46 ^ 1);
                  }
                  dVar15 = (double)*(float *)(lVar34 + uVar31 * 4);
                  pppplVar21 = local_4a0;
                }
                local_4a0 = pppplVar21;
                lVar34 = DAT_14cb740f0;
                dVar14 = 1.0;
                if (200.0 < ABS((double)pplVar9 - dVar4)) {
                  iVar12 = *piVar1;
                  if (iVar12 == 0x40000002) {
                    uVar31 = 0;
                  }
                  else {
                    bVar46 = true;
                    if ((DAT_14c86a9f8 == '\x01') && (iVar12 != 2)) {
                      if (iVar12 == 1) {
                        local_4a0 = (longlong ****)CONCAT44(uVar53,uVar52);
                        local_4a8 = ppppplVar20;
                        local_4ac = FUN_140ad26c0();
                        DVar24 = GetCurrentThreadId();
                        uVar52 = SUB84(local_4a0,0);
                        uVar53 = (undefined4)((ulonglong)local_4a0 >> 0x20);
                        bVar46 = local_4ac == DVar24;
                        pcVar39 = GetCurrentThreadId_exref;
                        ppppplVar20 = local_4a8;
                      }
                      else {
                        bVar46 = false;
                      }
                    }
                    uVar31 = (ulonglong)(bVar46 ^ 1);
                  }
                  dVar14 = (double)*(float *)(lVar34 + uVar31 * 4);
                }
                dVar48 = dVar4 - (double)pplVar7;
                dVar51 = dVar3 - (double)CONCAT44(uVar53,uVar52);
                dVar50 = dVar4 - (double)pplVar9;
                if ((float)(dVar50 * dVar50 * dVar14 +
                           dVar51 * dVar51 + (dVar49 - (double)pplVar8) * (dVar49 - (double)pplVar8)
                           ) <=
                    (float)(dVar48 * dVar48 * dVar15 +
                           (dVar3 - (double)pplVar6) * (dVar3 - (double)pplVar6) +
                           (dVar49 - (double)pplVar5) * (dVar49 - (double)pplVar5))) {
                  iVar38 = iVar44;
                }
              }
              lVar34 = DAT_14cb740f0;
              ppplVar32 = pppplVar40[iVar38];
              ppplVar13 = pppplVar40[iVar30];
              pplVar5 = ppplVar13[1];
              pplVar6 = ppplVar13[2];
              pplVar7 = ppplVar13[3];
              pplVar8 = ppplVar32[1];
              pppplVar21 = (longlong ****)ppplVar32[2];
              uVar52 = SUB84(pppplVar21,0);
              uVar53 = (undefined4)((ulonglong)pppplVar21 >> 0x20);
              pplVar9 = ppplVar32[3];
              dVar15 = 1.0;
              if (200.0 < ABS((double)pplVar7 - dVar4)) {
                iVar44 = *piVar1;
                if (iVar44 == 0x40000002) {
                  uVar31 = 0;
                }
                else {
                  bVar46 = true;
                  if ((DAT_14c86a9f8 == '\x01') && (iVar44 != 2)) {
                    if (iVar44 == 1) {
                      local_4a8 = ppppplVar20;
                      local_4a0 = pppplVar21;
                      local_4ac = FUN_140ad26c0();
                      DVar24 = GetCurrentThreadId();
                      uVar52 = SUB84(local_4a0,0);
                      uVar53 = (undefined4)((ulonglong)local_4a0 >> 0x20);
                      bVar46 = local_4ac == DVar24;
                      pcVar39 = GetCurrentThreadId_exref;
                      ppppplVar20 = local_4a8;
                    }
                    else {
                      bVar46 = false;
                    }
                  }
                  uVar31 = (ulonglong)(bVar46 ^ 1);
                }
                dVar15 = (double)*(float *)(lVar34 + uVar31 * 4);
              }
              lVar34 = DAT_14cb740f0;
              dVar14 = 1.0;
              if (200.0 < ABS((double)pplVar9 - dVar4)) {
                iVar44 = *piVar1;
                if (iVar44 == 0x40000002) {
                  uVar31 = 0;
                }
                else {
                  bVar46 = true;
                  if ((DAT_14c86a9f8 == '\x01') && (iVar44 != 2)) {
                    if (iVar44 == 1) {
                      local_4a0 = (longlong ****)CONCAT44(uVar53,uVar52);
                      local_4a8 = ppppplVar20;
                      local_4ac = FUN_140ad26c0();
                      DVar24 = GetCurrentThreadId();
                      uVar52 = SUB84(local_4a0,0);
                      uVar53 = (undefined4)((ulonglong)local_4a0 >> 0x20);
                      bVar46 = local_4ac == DVar24;
                      pcVar39 = GetCurrentThreadId_exref;
                      ppppplVar20 = local_4a8;
                    }
                    else {
                      bVar46 = false;
                    }
                  }
                  uVar31 = (ulonglong)(bVar46 ^ 1);
                }
                dVar14 = (double)*(float *)(lVar34 + uVar31 * 4);
              }
              dVar48 = dVar4 - (double)pplVar7;
              dVar51 = dVar3 - (double)CONCAT44(uVar53,uVar52);
              dVar50 = dVar4 - (double)pplVar9;
              if ((float)(dVar48 * dVar48 * dVar15 +
                         (dVar3 - (double)pplVar6) * (dVar3 - (double)pplVar6) +
                         (dVar49 - (double)pplVar5) * (dVar49 - (double)pplVar5)) <
                  (float)(dVar50 * dVar50 * dVar14 +
                         dVar51 * dVar51 + (dVar49 - (double)pplVar8) * (dVar49 - (double)pplVar8)))
              {
                ppplVar32 = pppplVar40[iVar30];
                pppplVar40[iVar30] = pppplVar40[iVar38];
                pppplVar40[iVar38] = ppplVar32;
                lVar34 = DAT_14cb740f0;
                pppplVar21 = local_4a0;
                iVar30 = iVar38;
                goto joined_r0x000143cd4e4b;
              }
            }
            bVar46 = iVar26 != 0;
            iVar30 = iVar26 + -1;
            lVar34 = DAT_14cb740f0;
            pppplVar21 = local_4a0;
            iVar26 = iVar30;
          } while (bVar46);
          if (1 < iVar36) {
            ppplVar32 = *pppplVar40;
            *pppplVar40 = pppplVar40[uVar25 - 1];
            pppplVar40[uVar25 - 1] = ppplVar32;
            if (iVar36 != 2) {
              do {
                uVar31 = uVar25 - 1;
                iVar30 = 0;
                iVar26 = 1;
                iVar36 = 0;
                do {
                  lVar34 = DAT_14cb740f0;
                  iVar30 = iVar30 + 2;
                  iVar38 = iVar26;
                  if ((longlong)iVar30 < (longlong)uVar31) {
                    ppplVar32 = pppplVar40[iVar26];
                    ppplVar13 = pppplVar40[iVar30];
                    pplVar5 = ppplVar13[1];
                    pplVar6 = ppplVar13[2];
                    pplVar7 = ppplVar13[3];
                    pplVar8 = ppplVar32[1];
                    pppplVar21 = (longlong ****)ppplVar32[2];
                    uVar52 = SUB84(pppplVar21,0);
                    uVar53 = (undefined4)((ulonglong)pppplVar21 >> 0x20);
                    pplVar9 = ppplVar32[3];
                    dVar15 = 1.0;
                    if (200.0 < ABS((double)pplVar7 - dVar4)) {
                      iVar26 = *piVar1;
                      if (iVar26 == 0x40000002) {
                        uVar19 = 0;
                      }
                      else {
                        bVar46 = true;
                        if ((DAT_14c86a9f8 == '\x01') && (iVar26 != 2)) {
                          if (iVar26 == 1) {
                            local_4a8 = ppppplVar20;
                            local_4a0 = pppplVar21;
                            local_4ac = FUN_140ad26c0();
                            DVar24 = (*pcVar39)();
                            uVar52 = SUB84(local_4a0,0);
                            uVar53 = (undefined4)((ulonglong)local_4a0 >> 0x20);
                            bVar46 = local_4ac == DVar24;
                            ppppplVar20 = local_4a8;
                          }
                          else {
                            bVar46 = false;
                          }
                        }
                        uVar19 = (ulonglong)(bVar46 ^ 1);
                      }
                      dVar15 = (double)*(float *)(lVar34 + uVar19 * 4);
                    }
                    lVar34 = DAT_14cb740f0;
                    dVar14 = 1.0;
                    if (200.0 < ABS((double)pplVar9 - dVar4)) {
                      iVar26 = *piVar1;
                      if (iVar26 == 0x40000002) {
                        uVar19 = 0;
                      }
                      else {
                        bVar46 = true;
                        if ((DAT_14c86a9f8 == '\x01') && (iVar26 != 2)) {
                          if (iVar26 == 1) {
                            local_4a0 = (longlong ****)CONCAT44(uVar53,uVar52);
                            local_4a8 = ppppplVar20;
                            local_4ac = FUN_140ad26c0();
                            DVar24 = (*pcVar39)();
                            uVar52 = SUB84(local_4a0,0);
                            uVar53 = (undefined4)((ulonglong)local_4a0 >> 0x20);
                            bVar46 = local_4ac == DVar24;
                            ppppplVar20 = local_4a8;
                          }
                          else {
                            bVar46 = false;
                          }
                        }
                        uVar19 = (ulonglong)(bVar46 ^ 1);
                      }
                      dVar14 = (double)*(float *)(lVar34 + uVar19 * 4);
                    }
                    dVar48 = dVar4 - (double)pplVar7;
                    dVar51 = dVar3 - (double)CONCAT44(uVar53,uVar52);
                    dVar50 = dVar4 - (double)pplVar9;
                    if ((float)(dVar50 * dVar50 * dVar14 +
                               dVar51 * dVar51 +
                               (dVar49 - (double)pplVar8) * (dVar49 - (double)pplVar8)) <=
                        (float)(dVar48 * dVar48 * dVar15 +
                               (dVar3 - (double)pplVar6) * (dVar3 - (double)pplVar6) +
                               (dVar49 - (double)pplVar5) * (dVar49 - (double)pplVar5))) {
                      iVar38 = iVar30;
                    }
                  }
                  lVar34 = DAT_14cb740f0;
                  ppplVar32 = pppplVar40[iVar38];
                  ppplVar13 = pppplVar40[iVar36];
                  pplVar5 = ppplVar13[1];
                  pplVar6 = ppplVar13[2];
                  pplVar7 = ppplVar13[3];
                  pplVar8 = ppplVar32[1];
                  pppplVar21 = (longlong ****)ppplVar32[2];
                  uVar52 = SUB84(pppplVar21,0);
                  uVar53 = (undefined4)((ulonglong)pppplVar21 >> 0x20);
                  pplVar9 = ppplVar32[3];
                  dVar15 = 1.0;
                  if (200.0 < ABS((double)pplVar7 - dVar4)) {
                    iVar30 = *piVar1;
                    if (iVar30 == 0x40000002) {
                      uVar19 = 0;
                    }
                    else {
                      bVar46 = true;
                      if ((DAT_14c86a9f8 == '\x01') && (iVar30 != 2)) {
                        if (iVar30 == 1) {
                          local_4a8 = ppppplVar20;
                          local_4a0 = pppplVar21;
                          local_4ac = FUN_140ad26c0();
                          DVar24 = (*pcVar39)();
                          uVar52 = SUB84(local_4a0,0);
                          uVar53 = (undefined4)((ulonglong)local_4a0 >> 0x20);
                          bVar46 = local_4ac == DVar24;
                          ppppplVar20 = local_4a8;
                        }
                        else {
                          bVar46 = false;
                        }
                      }
                      uVar19 = (ulonglong)(bVar46 ^ 1);
                    }
                    dVar15 = (double)*(float *)(lVar34 + uVar19 * 4);
                  }
                  lVar34 = DAT_14cb740f0;
                  dVar14 = 1.0;
                  if (200.0 < ABS((double)pplVar9 - dVar4)) {
                    iVar30 = *piVar1;
                    if (iVar30 == 0x40000002) {
                      uVar19 = 0;
                    }
                    else {
                      bVar46 = true;
                      if ((DAT_14c86a9f8 == '\x01') && (iVar30 != 2)) {
                        if (iVar30 == 1) {
                          local_4a0 = (longlong ****)CONCAT44(uVar53,uVar52);
                          local_4a8 = ppppplVar20;
                          local_4ac = FUN_140ad26c0();
                          DVar24 = (*pcVar39)();
                          uVar52 = SUB84(local_4a0,0);
                          uVar53 = (undefined4)((ulonglong)local_4a0 >> 0x20);
                          bVar46 = local_4ac == DVar24;
                          ppppplVar20 = local_4a8;
                        }
                        else {
                          bVar46 = false;
                        }
                      }
                      uVar19 = (ulonglong)(bVar46 ^ 1);
                    }
                    dVar14 = (double)*(float *)(lVar34 + uVar19 * 4);
                  }
                  dVar48 = dVar4 - (double)pplVar7;
                  dVar51 = dVar3 - (double)CONCAT44(uVar53,uVar52);
                  dVar50 = dVar4 - (double)pplVar9;
                  if ((float)(dVar50 * dVar50 * dVar14 +
                             dVar51 * dVar51 +
                             (dVar49 - (double)pplVar8) * (dVar49 - (double)pplVar8)) <=
                      (float)(dVar48 * dVar48 * dVar15 +
                             (dVar3 - (double)pplVar6) * (dVar3 - (double)pplVar6) +
                             (dVar49 - (double)pplVar5) * (dVar49 - (double)pplVar5))) break;
                  ppplVar32 = pppplVar40[iVar36];
                  pppplVar40[iVar36] = pppplVar40[iVar38];
                  pppplVar40[iVar38] = ppplVar32;
                  iVar30 = iVar38 * 2;
                  iVar26 = iVar38 * 2 + 1;
                  iVar36 = iVar38;
                } while ((longlong)iVar26 < (longlong)uVar31);
                ppplVar32 = *pppplVar40;
                *pppplVar40 = pppplVar40[uVar25 - 2];
                pppplVar40[uVar25 - 2] = ppplVar32;
                uVar25 = uVar31;
              } while (2 < uVar31);
            }
          }
        }
LAB_143cd5a5c:
        ppppplVar20 = ppppplVar20 + -3;
      } while (&local_408 <= ppppplVar20);
      uVar33 = (uint)uStack_430;
      if ((int)(uint)uStack_430 < 0x10) goto LAB_143cd5a8b;
      uStack_430 = CONCAT44(uStack_430._4_4_,0xf);
      uVar33 = 0xf;
    }
    pppplVar21 = local_438;
    lVar34 = 0;
    do {
      cVar11 = *(char *)(*(longlong *)((longlong)local_438 + lVar34) + 0x22);
      if (cVar11 != '\0') break;
      bVar46 = (ulonglong)uVar33 * 8 + -8 != lVar34;
      lVar34 = lVar34 + 8;
    } while (bVar46);
    if (local_420 == 0) {
      local_438 = (longlong ****)0x0;
      uStack_430 = 0;
      ppplVar32 = *pppplVar21;
      if (pppplVar21 == (longlong ****)0x0) goto LAB_143cd5af9;
    }
    else {
      local_478 = (longlong ****)0x0;
      pppplStack_470 = (longlong ****)0x0;
      local_408 = (longlong ****)0x0;
      uStack_400 = (longlong ****)CONCAT44(uStack_400._4_4_,0x7f7fffff);
      FUN_1487ff4fe(&local_478,&local_408,uVar33);
      uStack_400 = (longlong ****)&local_438;
      local_3f8 = &local_420;
      local_3f0 = local_488;
      local_3e8 = local_480;
      local_108 = (code *)0x0;
      uStack_100 = (longlong ***)((ulonglong)uStack_100 & 0xffffffff00000000);
      local_418 = FUN_143cda544;
      local_500 = 0;
      local_4f8 = (code **)&local_108;
      local_410 = &local_408;
      local_408 = (longlong ****)&local_478;
      FUN_1401f8d10(L"ParallelFor Task",uStack_430 & 0xffffffff,1);
      pppplVar21 = local_478;
      local_408 = (longlong ****)0x0;
      uStack_400 = (longlong ****)0x0;
      lVar34 = (longlong)(int)pppplStack_470;
      if (lVar34 != 0) {
        lVar28 = 0;
        do {
          if ((*(longlong *)((longlong)pppplVar21 + lVar28) != 0) &&
             (0.0 < *(float *)((longlong)pppplVar21 + lVar28 + 8))) {
            lVar43 = (longlong)(int)uStack_400;
            uVar33 = (int)uStack_400 + 1;
            uStack_400 = (longlong ****)CONCAT44(uStack_400._4_4_,uVar33);
            if (uStack_400._4_4_ < uVar33) {
              FUN_14880cb72(&local_408);
            }
            puVar2 = (undefined4 *)((longlong)pppplVar21 + lVar28);
            uVar52 = puVar2[1];
            uVar53 = puVar2[2];
            uVar16 = puVar2[3];
            pppplVar23 = local_408 + lVar43 * 2;
            *(undefined4 *)pppplVar23 = *puVar2;
            *(undefined4 *)((longlong)pppplVar23 + 4) = uVar52;
            *(undefined4 *)(pppplVar23 + 1) = uVar53;
            *(undefined4 *)((longlong)pppplVar23 + 0xc) = uVar16;
          }
          lVar28 = lVar28 + 0x10;
        } while (lVar34 * 0x10 != lVar28);
      }
      if (local_478 != (longlong ****)0x0) {
        FUN_1400020a8(local_478);
      }
      pppplVar21 = local_408;
      local_478 = local_408;
      iVar30 = (int)uStack_400;
      uVar25 = (ulonglong)uStack_400 & 0xffffffff;
      pppplStack_470 = uStack_400;
      if (uVar25 == 0) {
        ppplVar32 = (longlong ***)0x0;
      }
      else {
        ppplVar13 = *local_408;
        ppplVar42 = ppplVar13;
        if ((1 < (int)uStack_400) && (cVar11 == '\0')) {
          memset(&local_3f8,0,0x2f0);
          uStack_400 = pppplVar21 + uVar25 * 2 + -2;
          local_408 = pppplVar21;
          fVar47 = logf((float)iVar30);
          local_3f8 = (longlong *)CONCAT44(local_3f8._4_4_,(int)(longlong)(fVar47 + fVar47));
          ppppplVar20 = &local_408;
          do {
            pppplVar23 = *ppppplVar20;
            pppplVar21 = ppppplVar20[1];
            iVar30 = *(int *)(ppppplVar20 + 2);
            iVar36 = (int)((ulonglong)((longlong)pppplVar21 - (longlong)pppplVar23) >> 4);
            uVar33 = iVar36 + 1;
            pppplVar29 = pppplVar23;
            pppplVar41 = pppplVar21;
            if (iVar30 != 0) {
LAB_143cd5d90:
              if (8 < (int)uVar33) {
                ppplVar32 = pppplVar23[(ulonglong)(uVar33 >> 1) * 2];
                ppplVar42 = (pppplVar23 + (ulonglong)(uVar33 >> 1) * 2)[1];
                ppplVar17 = pppplVar23[1];
                pppplVar23[(ulonglong)(uVar33 >> 1) * 2] = *pppplVar23;
                (pppplVar23 + (ulonglong)(uVar33 >> 1) * 2)[1] = ppplVar17;
                *pppplVar23 = ppplVar32;
                pppplVar23[1] = ppplVar42;
                pppplVar40 = pppplVar21 + 2;
                pppplVar22 = pppplVar23;
                do {
                  pppplVar27 = pppplVar22 + 2;
                  pppplVar37 = pppplVar22 + 2;
                  do {
                    pppplVar22 = pppplVar37;
                    pppplVar35 = pppplVar27;
                    if (pppplVar21 < pppplVar22) break;
                    pppplVar27 = pppplVar35 + 2;
                    pppplVar37 = pppplVar22 + 2;
                  } while (*(float *)(pppplVar22 + 1) < *(float *)(pppplVar23 + 1) ||
                           *(float *)(pppplVar22 + 1) == *(float *)(pppplVar23 + 1));
                  pppplVar27 = pppplVar40 + -4;
                  do {
                    pppplVar37 = pppplVar40;
                    pppplVar45 = pppplVar27;
                    pppplVar40 = pppplVar37 + -2;
                    if (pppplVar40 <= pppplVar23) break;
                    pppplVar27 = pppplVar45 + -2;
                  } while (*(float *)(pppplVar23 + 1) < *(float *)(pppplVar37 + -1) ||
                           *(float *)(pppplVar23 + 1) == *(float *)(pppplVar37 + -1));
                  if (pppplVar40 < pppplVar22) goto LAB_143cd5e3f;
                  ppplVar32 = *pppplVar22;
                  ppplVar42 = pppplVar22[1];
                  ppplVar17 = pppplVar37[-1];
                  *pppplVar22 = *pppplVar40;
                  pppplVar22[1] = ppplVar17;
                  *pppplVar40 = ppplVar32;
                  pppplVar37[-1] = ppplVar42;
                } while( true );
              }
              for (; pppplVar41 = pppplVar23, pppplVar29 = pppplVar23, pppplVar23 < pppplVar21;
                  pppplVar21 = pppplVar21 + -2) {
                while (pppplVar40 = pppplVar41, pppplVar29 = pppplVar29 + 2,
                      pppplVar29 <= pppplVar21) {
                  pppplVar41 = pppplVar29;
                  if (*(float *)(pppplVar29 + 1) < *(float *)(pppplVar40 + 1) ||
                      *(float *)(pppplVar29 + 1) == *(float *)(pppplVar40 + 1)) {
                    pppplVar41 = pppplVar40;
                  }
                }
                local_108 = (code *)*pppplVar40;
                uStack_100 = pppplVar40[1];
                ppplVar42 = (longlong ***)local_108;
                ppplVar17 = uStack_100;
                ppplVar32 = pppplVar21[1];
                *pppplVar40 = *pppplVar21;
                pppplVar40[1] = ppplVar32;
                local_108._4_4_ = (undefined4)((ulonglong)local_108 >> 0x20);
                uStack_100._4_4_ = (undefined4)((ulonglong)uStack_100 >> 0x20);
                *(undefined4 *)pppplVar21 = (undefined4)local_108;
                *(undefined4 *)((longlong)pppplVar21 + 4) = local_108._4_4_;
                *(int *)(pppplVar21 + 1) = (int)uStack_100;
                *(undefined4 *)((longlong)pppplVar21 + 0xc) = uStack_100._4_4_;
                local_108 = (code *)ppplVar42;
                uStack_100 = ppplVar17;
              }
              goto LAB_143cd6118;
            }
LAB_143cd5ee8:
            if (uVar33 != 0) {
              iVar30 = (iVar36 - (iVar36 + -1 >> 0x1f)) + -1 >> 1;
              iVar36 = iVar30;
joined_r0x000143cd5f0b:
              do {
                iVar26 = iVar30 * 2 + 1;
                if (iVar26 < (int)uVar33) {
                  iVar38 = iVar30 * 2 + 2;
                  if ((iVar38 < (int)uVar33) &&
                     (*(float *)(pppplVar23 + (longlong)iVar26 * 2 + 1) <
                      *(float *)(pppplVar23 + (longlong)iVar38 * 2 + 1) ||
                      *(float *)(pppplVar23 + (longlong)iVar26 * 2 + 1) ==
                      *(float *)(pppplVar23 + (longlong)iVar38 * 2 + 1))) {
                    iVar26 = iVar38;
                  }
                  if (*(float *)(pppplVar23 + (longlong)iVar30 * 2 + 1) <=
                      *(float *)(pppplVar23 + (longlong)iVar26 * 2 + 1) &&
                      *(float *)(pppplVar23 + (longlong)iVar26 * 2 + 1) !=
                      *(float *)(pppplVar23 + (longlong)iVar30 * 2 + 1)) {
                    pppplVar21 = pppplVar23 + (longlong)iVar30 * 2;
                    pppplVar29 = pppplVar23 + (longlong)iVar26 * 2;
                    local_108 = (code *)*pppplVar21;
                    uStack_100 = pppplVar21[1];
                    ppplVar42 = (longlong ***)local_108;
                    ppplVar17 = uStack_100;
                    ppplVar32 = pppplVar29[1];
                    *pppplVar21 = *pppplVar29;
                    pppplVar21[1] = ppplVar32;
                    local_108._4_4_ = (undefined4)((ulonglong)local_108 >> 0x20);
                    uStack_100._4_4_ = (undefined4)((ulonglong)uStack_100 >> 0x20);
                    *(undefined4 *)pppplVar29 = (undefined4)local_108;
                    *(undefined4 *)((longlong)pppplVar29 + 4) = local_108._4_4_;
                    *(int *)(pppplVar29 + 1) = (int)uStack_100;
                    *(undefined4 *)((longlong)pppplVar29 + 0xc) = uStack_100._4_4_;
                    iVar30 = iVar26;
                    local_108 = (code *)ppplVar42;
                    uStack_100 = ppplVar17;
                    goto joined_r0x000143cd5f0b;
                  }
                }
                bVar46 = iVar36 != 0;
                iVar30 = iVar36 + -1;
                iVar36 = iVar30;
              } while (bVar46);
              if (1 < (int)uVar33) {
                uVar25 = (ulonglong)uVar33 - 1;
                local_108 = (code *)*pppplVar23;
                uStack_100 = pppplVar23[1];
                ppplVar42 = (longlong ***)local_108;
                ppplVar17 = uStack_100;
                ppplVar32 = (pppplVar23 + uVar25 * 2)[1];
                *pppplVar23 = pppplVar23[uVar25 * 2];
                pppplVar23[1] = ppplVar32;
                local_108._4_4_ = (undefined4)((ulonglong)local_108 >> 0x20);
                uStack_100._4_4_ = (undefined4)((ulonglong)uStack_100 >> 0x20);
                pppplVar21 = pppplVar23 + uVar25 * 2;
                *(undefined4 *)pppplVar21 = (undefined4)local_108;
                *(undefined4 *)((longlong)pppplVar21 + 4) = local_108._4_4_;
                *(int *)(pppplVar21 + 1) = (int)uStack_100;
                *(undefined4 *)((longlong)pppplVar21 + 0xc) = uStack_100._4_4_;
                local_108 = (code *)ppplVar42;
                uStack_100 = ppplVar17;
                if (uVar33 != 2) {
                  do {
                    iVar30 = 0;
                    iVar26 = 1;
                    iVar36 = 0;
                    do {
                      iVar30 = iVar30 + 2;
                      iVar38 = iVar26;
                      if (((longlong)iVar30 < (longlong)uVar25) &&
                         (*(float *)(pppplVar23 + (longlong)iVar26 * 2 + 1) <
                          *(float *)(pppplVar23 + (longlong)iVar30 * 2 + 1) ||
                          *(float *)(pppplVar23 + (longlong)iVar26 * 2 + 1) ==
                          *(float *)(pppplVar23 + (longlong)iVar30 * 2 + 1))) {
                        iVar38 = iVar30;
                      }
                      if (*(float *)(pppplVar23 + (longlong)iVar38 * 2 + 1) <
                          *(float *)(pppplVar23 + (longlong)iVar36 * 2 + 1) ||
                          *(float *)(pppplVar23 + (longlong)iVar38 * 2 + 1) ==
                          *(float *)(pppplVar23 + (longlong)iVar36 * 2 + 1)) break;
                      pppplVar21 = pppplVar23 + (longlong)iVar36 * 2;
                      pppplVar29 = pppplVar23 + (longlong)iVar38 * 2;
                      ppplVar32 = *pppplVar21;
                      ppplVar42 = pppplVar21[1];
                      ppplVar17 = pppplVar29[1];
                      *pppplVar21 = *pppplVar29;
                      pppplVar21[1] = ppplVar17;
                      *pppplVar29 = ppplVar32;
                      pppplVar29[1] = ppplVar42;
                      iVar30 = iVar38 * 2;
                      iVar26 = iVar38 * 2 + 1;
                      iVar36 = iVar38;
                    } while ((longlong)iVar26 < (longlong)uVar25);
                    uVar31 = uVar25 - 1;
                    local_108 = (code *)*pppplVar23;
                    uStack_100 = pppplVar23[1];
                    ppplVar42 = (longlong ***)local_108;
                    ppplVar17 = uStack_100;
                    ppplVar32 = (pppplVar23 + uVar31 * 2)[1];
                    *pppplVar23 = pppplVar23[uVar31 * 2];
                    pppplVar23[1] = ppplVar32;
                    local_108._4_4_ = (undefined4)((ulonglong)local_108 >> 0x20);
                    uStack_100._4_4_ = (undefined4)((ulonglong)uStack_100 >> 0x20);
                    pppplVar21 = pppplVar23 + uVar31 * 2;
                    *(undefined4 *)pppplVar21 = (undefined4)local_108;
                    *(undefined4 *)((longlong)pppplVar21 + 4) = local_108._4_4_;
                    *(int *)(pppplVar21 + 1) = (int)uStack_100;
                    *(undefined4 *)((longlong)pppplVar21 + 0xc) = uStack_100._4_4_;
                    bVar46 = 2 < uVar25;
                    uVar25 = uVar31;
                    local_108 = (code *)ppplVar42;
                    uStack_100 = ppplVar17;
                  } while (bVar46);
                }
              }
            }
LAB_143cd6118:
            ppppplVar20 = ppppplVar20 + -3;
          } while (&local_408 <= ppppplVar20);
          ppplVar42 = *local_478;
        }
        lVar28 = local_480;
        local_408 = (longlong ****)0x0;
        uStack_400 = (longlong ****)0x0;
        lVar34 = *(longlong *)(local_480 + 0x20);
        if (lVar34 == 0) {
LAB_143cd639e:
          lVar34 = 0;
        }
        else {
          if (DAT_14cb10130 == 0) {
            local_108 = FUN_140754f84;
            local_4c0 = FUN_14081d0ea;
            local_4c8 = FUN_14081d0ea;
            local_4d8 = &LAB_147da9a76;
            local_4e0 = FUN_1409f3105;
            local_4e8 = L"Engine";
            local_4f0 = 0;
            local_4f8 = (code **)CONCAT44(local_4f8._4_4_,0x10000000);
            local_500 = 8;
            local_508 = CONCAT44(local_508._4_4_,0x990);
            local_4d0 = (code **)&local_108;
            FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
          }
          if ((*(int *)(*(longlong *)(lVar34 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar34 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30))
          goto LAB_143cd639e;
        }
        pdVar18 = local_488;
        local_508 = param_6;
        FUN_143d44916(local_488,ppplVar13 + 1,&local_408,lVar34);
        local_108 = (code *)0x0;
        uStack_100 = (longlong ***)0x0;
        lVar34 = *(longlong *)(lVar28 + 0x20);
        if (lVar34 == 0) {
LAB_143cd63a6:
          lVar34 = 0;
        }
        else {
          if (DAT_14cb10130 == 0) {
            local_418 = FUN_140754f84;
            local_4c0 = FUN_14081d0ea;
            local_4c8 = FUN_14081d0ea;
            local_4d0 = &local_418;
            local_4d8 = &LAB_147da9a76;
            local_4e0 = FUN_1409f3105;
            local_4e8 = L"Engine";
            local_4f0 = 0;
            local_4f8 = (code **)CONCAT44(local_4f8._4_4_,0x10000000);
            local_500 = 8;
            local_508 = CONCAT44(local_508._4_4_,0x990);
            FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
          }
          if ((*(int *)(*(longlong *)(lVar34 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar34 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30))
          goto LAB_143cd63a6;
        }
        local_508 = param_6;
        FUN_143d44916(pdVar18,ppplVar42 + 1,&local_108,lVar34);
        ppplVar32 = ppplVar42;
        if ((int)uStack_100 == 0) {
          ppplVar32 = ppplVar13;
        }
        if (ppplVar42 == (longlong ***)0x0) {
          ppplVar32 = ppplVar13;
        }
        if ((longlong ***)local_108 != (longlong ***)0x0) {
          FUN_1400020a8();
        }
        if (local_408 != (longlong ****)0x0) {
          FUN_1400020a8();
        }
      }
      pppplVar21 = local_478;
      if (local_478 == (longlong ****)0x0) goto LAB_143cd5ae7;
    }
    FUN_1400020a8(pppplVar21);
  }
LAB_143cd5ae7:
  if (local_438 != (longlong ****)0x0) {
    FUN_1400020a8();
  }
LAB_143cd5af9:
  if ((local_f0 ^ (ulonglong)auStack_528) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return ppplVar32;
LAB_143cd4d9a:
  ppplVar32 = *pppplVar29;
  *pppplVar29 = *pppplVar22;
  *pppplVar22 = ppplVar32;
  DVar24 = DVar24 - 1;
  pppplVar27 = pppplVar27 + -2;
  if ((longlong)pppplVar35 - (longlong)local_4a0 < (longlong)pppplVar41 - (longlong)pppplVar37) {
    if (pppplVar40 < pppplVar21) {
      *ppppplVar20 = pppplVar40;
      ppppplVar20[1] = pppplVar21;
      *(DWORD *)(ppppplVar20 + 2) = DVar24;
      ppppplVar20 = ppppplVar20 + 3;
    }
    pppplVar40 = pppplVar29;
    if (pppplVar22 <= pppplVar29 + 1) goto LAB_143cd5a5c;
  }
  else {
    if (pppplVar29 + 1 < pppplVar22) {
      *ppppplVar20 = pppplVar29;
      ppppplVar20[1] = pppplVar27;
      *(DWORD *)(ppppplVar20 + 2) = DVar24;
      ppppplVar20 = ppppplVar20 + 3;
    }
    pppplVar27 = pppplVar21;
    pppplVar29 = pppplVar37;
    pppplVar35 = pppplVar21;
    if (pppplVar21 <= pppplVar40) goto LAB_143cd5a5c;
  }
  iVar30 = (int)((ulonglong)((longlong)pppplVar35 - (longlong)pppplVar29) >> 3);
  uVar25 = (ulonglong)(iVar30 + 1);
  pppplVar21 = pppplVar27;
  pppplVar23 = pppplVar29;
  pppplVar41 = pppplVar35;
  pppplVar29 = pppplVar40;
  if (DVar24 == 0) goto LAB_143cd4e2c;
  goto LAB_143cd48a2;
LAB_143cd5e3f:
  local_108 = (code *)*pppplVar23;
  uStack_100 = pppplVar23[1];
  ppplVar42 = (longlong ***)local_108;
  ppplVar17 = uStack_100;
  ppplVar32 = pppplVar37[-1];
  *pppplVar23 = *pppplVar40;
  pppplVar23[1] = ppplVar32;
  local_108._4_4_ = (undefined4)((ulonglong)local_108 >> 0x20);
  uStack_100._4_4_ = (undefined4)((ulonglong)uStack_100 >> 0x20);
  *(undefined4 *)pppplVar40 = (undefined4)local_108;
  *(undefined4 *)((longlong)pppplVar37 + -0xc) = local_108._4_4_;
  *(int *)(pppplVar37 + -1) = (int)uStack_100;
  *(undefined4 *)((longlong)pppplVar37 + -4) = uStack_100._4_4_;
  iVar30 = iVar30 + -1;
  pppplVar37 = pppplVar37 + -4;
  local_108 = (code *)ppplVar42;
  uStack_100 = ppplVar17;
  if ((longlong)pppplVar45 - (longlong)pppplVar29 < (longlong)pppplVar41 - (longlong)pppplVar35) {
    if (pppplVar22 < pppplVar21) {
      *ppppplVar20 = pppplVar22;
      ppppplVar20[1] = pppplVar21;
      *(int *)(ppppplVar20 + 2) = iVar30;
      ppppplVar20 = ppppplVar20 + 3;
    }
    pppplVar35 = pppplVar23;
    if (pppplVar40 <= pppplVar23 + 2) goto LAB_143cd6118;
  }
  else {
    if (pppplVar23 + 2 < pppplVar40) {
      *ppppplVar20 = pppplVar23;
      ppppplVar20[1] = pppplVar37;
      *(int *)(ppppplVar20 + 2) = iVar30;
      ppppplVar20 = ppppplVar20 + 3;
    }
    pppplVar23 = pppplVar22;
    pppplVar37 = pppplVar21;
    pppplVar45 = pppplVar21;
    if (pppplVar21 <= pppplVar22) goto LAB_143cd6118;
  }
  iVar36 = (int)((ulonglong)((longlong)pppplVar45 - (longlong)pppplVar35) >> 4);
  uVar33 = iVar36 + 1;
  pppplVar29 = pppplVar35;
  pppplVar21 = pppplVar37;
  pppplVar41 = pppplVar45;
  if (iVar30 == 0) goto LAB_143cd5ee8;
  goto LAB_143cd5d90;
}



// FUNCTION 143cd63ad FUN_143cd63ad body=69 status=ok
// SIG undefined FUN_143cd63ad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cd63ad(void)

{
  _DAT_14cb74100 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143cd63ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb74108,1);
  return;
}


