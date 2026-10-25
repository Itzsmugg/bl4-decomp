// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1445846ce FUN_1445846ce body=38 status=ok
// SIG undefined FUN_1445846ce(void)

undefined8
FUN_1445846ce(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_146bc96d4(*param_3,*param_4);
  FUN_146c89f40(param_1,uVar1);
  return param_1;
}



// FUNCTION 14458471e FUN_14458471e body=29 status=ok
// SIG undefined FUN_14458471e(void)

undefined8 FUN_14458471e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14458473c FUN_14458473c body=163 status=ok
// SIG undefined FUN_14458473c(void)

void FUN_14458473c(longlong *param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_30;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  (**(code **)(**(longlong **)(*param_1 + 0xa0) + 0x2b8))();
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14458480a FUN_14458480a body=29 status=ok
// SIG undefined FUN_14458480a(void)

undefined8 FUN_14458480a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14458485e FUN_14458485e body=29 status=ok
// SIG undefined FUN_14458485e(void)

undefined8 FUN_14458485e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445848b2 FUN_1445848b2 body=29 status=ok
// SIG undefined FUN_1445848b2(void)

undefined8 FUN_1445848b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144584906 FUN_144584906 body=29 status=ok
// SIG undefined FUN_144584906(void)

undefined8 FUN_144584906(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14458495a FUN_14458495a body=29 status=ok
// SIG undefined FUN_14458495a(void)

undefined8 FUN_14458495a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144584978 FUN_144584978 body=80 status=ok
// SIG undefined FUN_144584978(void)

void FUN_144584978(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [4];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *param_2;
  FUN_1447cbafe(*param_1 + 0x150,local_10,&local_c,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144584a04 FUN_144584a04 body=29 status=ok
// SIG undefined FUN_144584a04(void)

undefined8 FUN_144584a04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144584a5c FUN_144584a5c body=29 status=ok
// SIG undefined FUN_144584a5c(void)

undefined8 FUN_144584a5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144584ab4 FUN_144584ab4 body=29 status=ok
// SIG undefined FUN_144584ab4(void)

undefined8 FUN_144584ab4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144584b0c FUN_144584b0c body=29 status=ok
// SIG undefined FUN_144584b0c(void)

undefined8 FUN_144584b0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144584b64 FUN_144584b64 body=29 status=ok
// SIG undefined FUN_144584b64(void)

undefined8 FUN_144584b64(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144584bbc FUN_144584bbc body=29 status=ok
// SIG undefined FUN_144584bbc(void)

undefined8 FUN_144584bbc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144584c14 FUN_144584c14 body=29 status=ok
// SIG undefined FUN_144584c14(void)

undefined8 FUN_144584c14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144584c6c FUN_144584c6c body=29 status=ok
// SIG undefined FUN_144584c6c(void)

undefined8 FUN_144584c6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144584cc4 FUN_144584cc4 body=29 status=ok
// SIG undefined FUN_144584cc4(void)

undefined8 FUN_144584cc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144584ce2 FUN_144584ce2 body=80 status=ok
// SIG undefined FUN_144584ce2(void)

void FUN_144584ce2(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  (**(code **)(**(longlong **)(*(longlong *)(*param_1 + 0x128) + 0x58) + 0x2a0))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144584d3e FUN_144584d3e body=12 status=ok
// SIG undefined FUN_144584d3e(void)

void FUN_144584d3e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144584d47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144584d4a FUN_144584d4a body=29 status=ok
// SIG undefined FUN_144584d4a(void)

undefined8 FUN_144584d4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144584d68 FUN_144584d68 body=29 status=ok
// SIG undefined FUN_144584d68(void)

undefined8 FUN_144584d68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144584d9a FUN_144584d9a body=93 status=ok
// SIG undefined FUN_144584d9a(void)

void FUN_144584d9a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aefe820;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdd8b30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144584df8 FUN_144584df8 body=93 status=ok
// SIG undefined FUN_144584df8(void)

void FUN_144584df8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aefe820;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdd8b30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144584e56 FUN_144584e56 body=126 status=ok
// SIG undefined FUN_144584e56(void)

void FUN_144584e56(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aefe820;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bdd8b30;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144584ec5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144584ed4 FUN_144584ed4 body=90 status=ok
// SIG undefined FUN_144584ed4(void)

void FUN_144584ed4(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined1 *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)(param_1 + 0x18);
  local_10 = &local_20;
  local_18 = &LAB_144584f8e;
  (**(code **)(**(longlong **)(param_2 + 0x58) + 0x2a0))();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144584f30 FUN_144584f30 body=92 status=ok
// SIG undefined FUN_144584f30(void)

undefined8 FUN_144584f30(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined1 *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)(param_1 + 0x18);
  local_10 = &local_20;
  local_18 = &LAB_144584f8e;
  (**(code **)(**(longlong **)(param_2 + 0x58) + 0x2a0))();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144584f9e FUN_144584f9e body=29 status=ok
// SIG undefined FUN_144584f9e(void)

undefined8 FUN_144584f9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144584fd0 FUN_144584fd0 body=93 status=ok
// SIG undefined FUN_144584fd0(void)

void FUN_144584fd0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba263d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdd8ba0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14458502e FUN_14458502e body=93 status=ok
// SIG undefined FUN_14458502e(void)

void FUN_14458502e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba263d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdd8ba0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14458508c FUN_14458508c body=126 status=ok
// SIG undefined FUN_14458508c(void)

void FUN_14458508c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ba263d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bdd8ba0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445850fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144585164 FUN_144585164 body=535 status=ok
// SIG undefined FUN_144585164(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144585164(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_40,&DAT_14cc21f74);
  if (cVar1 == '\0') {
    _DAT_14cc21f74 = 0;
    uRam000000014cc21f7c = 0;
  }
  if (local_40 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bdcf0f0,3,0);
  local_40 = "SMInstance";
  local_38 = 10;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  _DAT_14cc22020 = (ulonglong)uVar2;
  ppuStack_50 = &PTR_FUN_14bdd0500;
  local_58 = 1;
  local_48 = 3;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bdd0590,3,&PTR_FUN_14bdd0560);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bdd1ea0,3,0);
  FUN_140056680(&DAT_14cc22158,L"UVTransferTool");
  atexit((_func_5014 *)&LAB_14458300b);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bdd2ed0,3,0);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14bdd3f60;
  local_58 = 0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bdd3f80,3,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bdd5110,3,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bdd61c0,3,0);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14bdd79b0;
  local_58 = 0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bdd79d0,4,0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14458537c FUN_14458537c body=102 status=ok
// SIG undefined FUN_14458537c(void)

void FUN_14458537c(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014bdd8c08;
  local_14 = 10;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14674d784(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445853e4 FUN_1445853e4 body=55 status=ok
// SIG undefined FUN_1445853e4(void)

void FUN_1445853e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc22368 == 0) {
    uVar1 = FUN_140fdaba3();
    DAT_14cc22368 = FUN_14171c317(FUN_14674d8df,uVar1,L"EChaosCacheInterpolationMode");
  }
  return;
}



// FUNCTION 14458541c FUN_14458541c body=14452 status=ok
// SIG undefined FUN_14458541c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14458541c(longlong param_1,longlong param_2,double *param_3,longlong param_4,double param_5
                  )

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  undefined ***pppuVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  longlong lVar14;
  undefined ***pppuVar15;
  uint *puVar16;
  longlong lVar17;
  double *pdVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  ulonglong *puVar29;
  undefined ***pppuVar30;
  ulonglong uVar31;
  undefined *puVar32;
  double *pdVar33;
  undefined4 uVar34;
  undefined ***pppuVar35;
  longlong lVar36;
  longlong *plVar37;
  PSRWLOCK SRWLock;
  ulonglong uVar38;
  longlong lVar39;
  ulonglong uVar40;
  undefined ***pppuVar41;
  ulonglong uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined **ppuVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  double dVar76;
  double dVar77;
  double dVar85;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  double dVar86;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  double dVar87;
  double dVar88;
  undefined1 auVar89 [16];
  double dVar92;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  double dVar93;
  undefined ***pppuVar94;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined ***pppuVar97;
  undefined **ppuVar98;
  double dVar99;
  double dVar100;
  undefined1 auVar101 [16];
  double dVar102;
  undefined1 auVar103 [16];
  double dVar104;
  double dVar105;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined **ppuVar108;
  double dVar109;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auStack_5b8 [32];
  undefined1 local_598 [16];
  undefined ***local_588;
  double dStack_580;
  undefined ***local_578;
  undefined **ppuStack_570;
  double local_568;
  undefined ***pppuStack_560;
  undefined1 local_558 [16];
  longlong local_548;
  longlong local_540;
  undefined ***local_538;
  undefined **ppuStack_530;
  undefined **local_528;
  double dStack_520;
  undefined ***local_518;
  undefined ***pppuStack_510;
  double local_508;
  double dStack_500;
  ulonglong *local_4f0;
  double local_4e8;
  double dStack_4e0;
  PSRWLOCK local_4d8;
  double dStack_4d0;
  double local_4c8;
  double dStack_4c0;
  undefined1 local_4b8 [16];
  longlong local_4a8;
  ulonglong local_4a0;
  undefined1 local_498 [16];
  undefined **local_488;
  double dStack_480;
  undefined **local_478;
  double dStack_470;
  undefined **local_468;
  double dStack_460;
  undefined **local_458;
  double dStack_450;
  undefined **local_448;
  double dStack_440;
  undefined1 local_438 [16];
  longlong *local_428;
  longlong local_420;
  undefined1 local_418 [16];
  double local_408;
  undefined ***pppuStack_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  undefined **local_3d8;
  undefined8 uStack_3d0;
  longlong local_3c8;
  undefined8 uStack_3c0;
  double local_3b8 [4];
  double local_398;
  double dStack_390;
  double local_388;
  undefined8 uStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  undefined8 uStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  undefined **local_338;
  undefined8 local_330;
  undefined ***local_328;
  undefined ***local_318;
  double local_310;
  double local_308;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  undefined ***local_2d8;
  undefined **ppuStack_2d0;
  undefined **local_2c8;
  longlong local_248;
  ulonglong uStack_240;
  uint local_238 [4];
  uint *local_228;
  uint local_220;
  uint local_21c;
  undefined4 uStack_218;
  undefined4 local_214;
  longlong local_208;
  int local_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined ***local_198;
  undefined **ppuStack_190;
  undefined **local_188;
  undefined8 uStack_180;
  undefined **local_178;
  double dStack_170;
  undefined **local_168;
  double dStack_160;
  undefined ***local_158;
  undefined **ppuStack_150;
  undefined **local_148;
  double dStack_140;
  undefined **local_138;
  double dStack_130;
  undefined **local_128;
  double dStack_120;
  undefined ***local_118;
  undefined **ppuStack_110;
  undefined **local_108;
  double dStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_5b8;
  uVar31 = *(ulonglong *)(param_2 + 0xa40);
  if ((uVar31 != 0) && (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c))) {
    uVar11 = ((uint)(uVar31 >> 0x14) & 0xffff ^ (uint)(uVar31 >> 4)) * -0x7a143595;
    uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
    lVar14 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x48);
    }
    uVar40 = (ulonglong)(*(int *)(param_1 + 0x50) - 1U & (uVar11 >> 0x10 ^ uVar11));
    iVar20 = *(int *)(lVar14 + uVar40 * 4);
    if (iVar20 != -1) {
      lVar36 = *(longlong *)(param_1 + 8);
      while( true ) {
        if (*(ulonglong *)(lVar36 + (longlong)iVar20 * 0x28) == uVar31) break;
        iVar20 = *(int *)(lVar36 + (longlong)iVar20 * 0x28 + 0x20);
        if (iVar20 == -1) goto LAB_144588b92;
      }
      auVar73 = *(undefined1 (*) [16])(uVar31 + 0xe0);
      auVar81 = *(undefined1 (*) [16])(uVar31 + 0xf0);
      auVar64._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar73._8_8_));
      auVar64._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar73._0_8_));
      iVar20 = movmskpd(iVar20 * 5,auVar64);
      auVar89._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar81._8_8_));
      auVar89._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar81._0_8_));
      uVar11 = movmskpd((int)param_4,auVar89);
      if ((uVar11 & 0x3fffffff) == 0 && iVar20 == 0) {
        pdVar18 = &DAT_14c846480;
        pdVar33 = local_3b8;
        for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
          *pdVar33 = *pdVar18;
          pdVar18 = pdVar18 + 1;
          pdVar33 = pdVar33 + 1;
        }
      }
      else {
        auVar89 = divpd(_DAT_149934d80,auVar73);
        auVar64 = divpd(ZEXT816(0x3ff0000000000000),auVar81);
        local_378 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar73._0_8_)) & auVar89._0_8_
                            );
        dStack_370 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar73._8_8_)) &
                             auVar89._8_8_);
        local_368 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar81._0_8_)) & auVar64._0_8_
                            );
        local_3b8[0] = -*(double *)(uVar31 + 0xa0);
        local_3b8[1] = -*(double *)(uVar31 + 0xa8);
        local_3b8[2] = *(double *)(uVar31 + 0xb0) * -1.0;
        local_3b8[3] = *(double *)(uVar31 + 0xb8) * 1.0;
        dVar87 = *(double *)(uVar31 + 0xc0) * local_378;
        dVar92 = *(double *)(uVar31 + 200) * dStack_370;
        dVar93 = *(double *)(uVar31 + 0xd0) * local_368;
        dVar104 = dVar92 * local_3b8[0] - local_3b8[1] * dVar87;
        dVar105 = dVar93 * local_3b8[1] - local_3b8[2] * dVar92;
        dVar99 = dVar87 * local_3b8[2] - local_3b8[0] * dVar93;
        dVar105 = dVar105 + dVar105;
        dVar99 = dVar99 + dVar99;
        dVar104 = dVar104 + dVar104;
        local_398 = 0.0 - ((dVar104 * local_3b8[1] - dVar99 * local_3b8[2]) +
                          local_3b8[3] * dVar105 + dVar87);
        dStack_390 = 0.0 - (dVar104 * *(double *)(uVar31 + 0xa0) + local_3b8[2] * dVar105 +
                           local_3b8[3] * dVar99 + dVar92);
        local_388 = 0.0 - (local_3b8[3] * dVar104 + dVar93 +
                          (dVar99 * local_3b8[0] - dVar105 * local_3b8[1]));
        uStack_380 = 0;
        uStack_360 = 0;
      }
      iVar20 = *(int *)(lVar14 + uVar40 * 4);
      while (iVar20 != -1) {
        puVar29 = (ulonglong *)(lVar36 + (longlong)iVar20 * 0x28);
        if (*puVar29 == uVar31) goto LAB_144585766;
        iVar20 = (int)puVar29[4];
      }
      puVar29 = (ulonglong *)0x0;
LAB_144585766:
      lVar14 = *(longlong *)(uVar31 + 8);
      ppuVar98 = *(undefined ***)(uVar31 + 0x58);
      plVar37 = *(longlong **)(uVar31 + 0x60);
      if (plVar37 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar37 + 1) = (int)plVar37[1] + 1;
        UNLOCK();
      }
      pppuVar35 = DAT_14c9974a8;
      if ((lVar14 != 0 && ppuVar98 != (undefined **)0x0) &&
         (*(undefined ****)(lVar14 + 0x260) != (undefined ***)0x0)) {
        local_338 = (undefined **)0x149f64774;
        local_330 = (double)CONCAT35(local_330._5_3_,0xb);
        local_588 = *(undefined ****)(lVar14 + 0x260);
        local_4f0 = puVar29;
        local_420 = param_1;
        uVar12 = FUN_14001a6c0(&local_338,1);
        ppuVar58 = ppuVar98;
        local_4a8 = FUN_1401466c8(ppuVar98,uVar12);
        auVar73 = *(undefined1 (*) [16])(param_3 + 8);
        auVar81 = *(undefined1 (*) [16])(param_3 + 10);
        auVar59._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar73._8_8_));
        auVar59._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar73._0_8_));
        iVar20 = movmskpd((int)local_4a8,auVar59);
        auVar65._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar81._8_8_));
        auVar65._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar81._0_8_));
        uVar11 = movmskpd((int)ppuVar58,auVar65);
        if ((uVar11 & 0x3fffffff) == 0 && iVar20 == 0) {
          local_568 = DAT_14c846490;
          pppuStack_560 = DAT_14c846498;
          local_4b8._8_8_ = DAT_14c8464a8;
          local_4b8._0_8_ = DAT_14c8464a0;
          local_558._8_8_ = DAT_14c8464c8;
          local_558._0_8_ = DAT_14c8464c0;
          local_4e8 = DAT_14c8464d0;
          dStack_4e0 = dRam000000014c8464d8;
          ppuVar58 = DAT_14c8464b0;
          dVar87 = DAT_14c8464b8;
          dVar92 = DAT_14c846480;
          dVar93 = DAT_14c846488;
        }
        else {
          auVar89 = divpd(_DAT_149934d80,auVar73);
          auVar64 = divpd(ZEXT816(0x3ff0000000000000),auVar81);
          local_558._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar73._0_8_)) & auVar89._0_8_;
          local_558._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar73._8_8_)) & auVar89._8_8_;
          local_4e8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar81._0_8_)) &
                              auVar64._0_8_);
          local_568 = param_3[2] * -1.0;
          pppuStack_560 = (undefined ***)(param_3[3] * 1.0);
          dVar92 = -*param_3;
          dVar93 = -param_3[1];
          dVar105 = param_3[4] * (double)local_558._0_8_;
          dVar85 = param_3[5] * (double)local_558._8_8_;
          dStack_4e0 = 0.0;
          dVar88 = param_3[6] * local_4e8;
          dVar87 = dVar85 * dVar92 - dVar93 * dVar105;
          dVar99 = dVar88 * dVar93 - local_568 * dVar85;
          dVar104 = dVar105 * local_568 - dVar92 * dVar88;
          dVar99 = dVar99 + dVar99;
          dVar104 = dVar104 + dVar104;
          dVar87 = dVar87 + dVar87;
          local_4b8._0_8_ =
               0.0 - ((dVar87 * dVar93 - dVar104 * local_568) +
                     (double)pppuStack_560 * dVar99 + dVar105);
          local_4b8._8_8_ =
               0.0 - (dVar87 * *param_3 + local_568 * dVar99 +
                     (double)pppuStack_560 * dVar104 + dVar85);
          ppuVar58 = (undefined **)
                     (0.0 - ((double)pppuStack_560 * dVar87 + dVar88 +
                            (dVar104 * dVar92 - dVar99 * dVar93)));
          dVar87 = 0.0;
        }
        lVar14 = *(longlong *)(lVar14 + 0x9c8);
        pppuVar30 = DAT_14c9974a8;
        uVar11 = FUN_1401f66f6(uVar31 + 0x5d0);
        if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar11);
        }
        local_548 = param_4 + 8;
        if (*(int *)(param_4 + 0x14) < (int)uVar11) {
          pppuVar30 = (undefined ***)(ulonglong)uVar11;
          FUN_1496ec534(local_548);
        }
        local_228 = (uint *)0x0;
        local_220 = 0;
        local_248 = 0;
        uStack_240 = 0;
        local_21c = 0x80;
        uStack_218 = 0xffffffff;
        local_214 = 0;
        local_208 = 0;
        local_200 = 0;
        uVar13 = *(uint *)(lVar14 + 0x7c8);
        local_598._0_4_ = uVar11;
        local_540 = param_4;
        local_4a0 = uVar31;
        local_428 = plVar37;
        if ((longlong)(int)uVar13 == 0) {
          local_3c8 = 0;
          uStack_3c0 = 0;
        }
        else {
          if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456acd4b((longlong)(int)uVar13);
          }
          FUN_1400bac10(&local_248,uVar13);
          iVar20 = 1;
          if (3 < uVar13) {
            uVar11 = (uVar13 | 1) + 0xe;
            iVar20 = 0x1f;
            if (uVar11 != 0) {
              for (; uVar11 >> iVar20 == 0; iVar20 = iVar20 + -1) {
              }
            }
            iVar20 = 1 << ((byte)iVar20 & 0x1f);
          }
          if ((local_200 == 0) || (local_200 < iVar20)) {
            local_200 = iVar20;
            FUN_144a56d22();
          }
          pppuVar30 = (undefined ***)(ulonglong)*(uint *)(lVar14 + 0x7c8);
          local_3c8 = 0;
          uStack_3c0 = 0;
          local_528 = ppuVar98;
          if ((int)*(uint *)(lVar14 + 0x7c8) < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(pppuVar30);
          }
          if (pppuVar30 != (undefined ***)0x0) {
            FUN_14481578e(&local_3c8);
            if ((longlong)*(int *)(lVar14 + 0x7c8) != 0) {
              lVar36 = *(longlong *)(lVar14 + 0x7c0);
              local_508 = (double)((longlong)*(int *)(lVar14 + 0x7c8) * 0x98 + lVar36);
              local_4d8 = (PSRWLOCK)(local_588 + 0x50);
              local_518 = local_588 + 0x5c;
              do {
                puVar32 = *(undefined **)(lVar36 + 8);
                SRWLock = (PSRWLOCK)0x0;
                if (DAT_14c992a90 != '\0') {
                  SRWLock = local_4d8;
                }
                if (SRWLock != (PSRWLOCK)0x0) {
                  AcquireSRWLockShared(SRWLock);
                }
                if (*(int *)(local_588 + 0x56) != *(int *)((longlong)local_588 + 0x2dc)) {
                  uVar11 = ((uint)((ulonglong)puVar32 >> 0x14) & 0xffff ^
                           (uint)((ulonglong)puVar32 >> 4)) * -0x7a143595;
                  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
                  pppuVar35 = (undefined ***)local_588[0x5d];
                  if ((undefined ***)local_588[0x5d] == (undefined ***)0x0) {
                    pppuVar35 = local_518;
                  }
                  pppuVar30 = (undefined ***)
                              (ulonglong)
                              (*(int *)(local_588 + 0x5e) - 1U & (uVar11 >> 0x10 ^ uVar11));
                  iVar20 = *(int *)((longlong)pppuVar35 + (longlong)pppuVar30 * 4);
                  if (iVar20 != -1) {
                    do {
                      ppuVar98 = local_588[0x55] + (longlong)iVar20 * 3;
                      if (*ppuVar98 == puVar32) {
                        if (ppuVar98 != (undefined **)0x0) {
                          puVar32 = (undefined *)0x0;
                          if (ppuVar98 + 1 != (undefined **)0x0) {
                            puVar32 = ppuVar98[1];
                          }
                          goto LAB_144585c27;
                        }
                        break;
                      }
                      iVar20 = *(int *)(ppuVar98 + 2);
                    } while (iVar20 != -1);
                  }
                }
                puVar32 = (undefined *)0x0;
LAB_144585c27:
                pppuVar35 = local_588;
                if (SRWLock != (PSRWLOCK)0x0) {
                  ReleaseSRWLockShared(SRWLock);
                }
                ppuVar98 = local_528;
                if (((puVar32 != (undefined *)0x0) && (*(ulonglong *)(lVar36 + 8) == local_4a0)) &&
                   (*(int *)(*(ulonglong *)(lVar36 + 8) + 0x1c) == 2)) {
                  pppuVar35 = (undefined ***)
                              (local_528[0x24] + (longlong)*(int *)(lVar36 + 0x90) * 4);
                  iVar20 = 0;
                  FUN_1447cbafe(&local_248,&local_338,pppuVar35,0);
                  pppuVar30 = (undefined ***)ppuVar98[0x28];
                  lVar14 = (longlong)
                           *(int *)(ppuVar98[0x24] + (longlong)*(int *)(lVar36 + 0x90) * 4);
                  pppuVar94 = pppuVar30 + lVar14 * 10;
                  pppuVar97 = pppuVar30 + lVar14 * 10 + 2;
                  uVar11 = *(uint *)(pppuVar30 + lVar14 * 10 + 5);
                  if (uVar11 == 0) {
                    uVar31 = 1;
                    pppuVar15 = (undefined ***)0x0;
                    uVar40 = 0;
                  }
                  else {
                    pppuVar15 = (undefined ***)pppuVar94[4];
                    if ((undefined ***)pppuVar94[4] == (undefined ***)0x0) {
                      pppuVar15 = pppuVar97;
                    }
                    pppuVar30 = (undefined ***)(ulonglong)*(uint *)pppuVar15;
                    if (*(uint *)pppuVar15 == 0) {
                      uVar13 = uVar11 - 1;
                      pppuVar30 = (undefined ***)(ulonglong)uVar13;
                      uVar27 = uVar11 + 0x1e;
                      if (-1 < (int)uVar13) {
                        uVar27 = uVar13;
                      }
                      uVar40 = 0;
                      uVar31 = (ulonglong)(uint)((int)uVar27 >> 5);
                      if ((int)uVar27 >> 5 < 1) {
                        uVar31 = uVar40;
                      }
                      iVar20 = 0;
                      do {
                        if (uVar31 == uVar40) goto LAB_144585d39;
                        iVar20 = iVar20 + 0x20;
                        uVar13 = *(uint *)((longlong)pppuVar15 + (uVar40 + 1) * 4);
                        pppuVar30 = (undefined ***)(ulonglong)uVar13;
                        uVar40 = uVar40 + 1;
                      } while (uVar13 == 0);
                    }
                    else {
                      iVar20 = 0;
                      uVar40 = 0;
                    }
                    uVar31 = (ulonglong)(-(uint)pppuVar30 & (uint)pppuVar30);
                    uVar38 = uVar31 * 2 + 1;
                    lVar14 = 0x3f;
                    if (uVar38 != 0) {
                      for (; uVar38 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                      }
                    }
                    uVar13 = (iVar20 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
                    if ((int)uVar11 <= (int)uVar13) {
                      uVar13 = uVar11;
                    }
                    pppuVar15 = (undefined ***)(ulonglong)uVar13;
                  }
                  if ((uint)pppuVar15 != uVar11) {
                    uVar13 = 0xffffffff;
                    do {
                      local_338 = (undefined **)
                                  CONCAT44(local_338._4_4_,
                                           *(undefined4 *)
                                            ((longlong)*pppuVar94 + (longlong)(int)pppuVar15 * 0xc))
                      ;
                      FUN_1449e3bb0(&local_3c8,&local_338);
                      uVar13 = ~(uint)uVar31 & uVar13;
                      pppuVar35 = (undefined ***)pppuVar94[4];
                      if ((undefined ***)pppuVar94[4] == (undefined ***)0x0) {
                        pppuVar35 = pppuVar97;
                      }
                      uVar27 = *(uint *)(pppuVar94 + 5);
                      pppuVar15 = (undefined ***)(ulonglong)uVar27;
                      iVar28 = (int)uVar40;
                      lVar14 = (longlong)iVar28;
                      uVar22 = *(uint *)((longlong)pppuVar35 + lVar14 * 4) & uVar13;
                      if (uVar22 == 0) {
                        uVar22 = uVar27 - 1;
                        uVar25 = uVar27 + 0x1e;
                        if (-1 < (int)uVar22) {
                          uVar25 = uVar22;
                        }
                        iVar21 = (int)uVar25 >> 5;
                        iVar20 = iVar20 + 0x20;
                        iVar26 = iVar21;
                        if (iVar21 < iVar28) {
                          iVar26 = iVar28;
                        }
                        if (iVar28 < iVar21) {
                          lVar23 = 0;
                          do {
                            uVar22 = *(uint *)((longlong)pppuVar35 + (lVar14 + lVar23 + 1) * 4);
                            if (uVar22 != 0) {
                              uVar40 = (ulonglong)(iVar28 + (int)lVar23 + 1);
                              uVar13 = 0xffffffff;
                              goto LAB_144585e09;
                            }
                            iVar20 = iVar20 + 0x20;
                            lVar23 = lVar23 + 1;
                          } while (iVar26 - lVar14 != lVar23);
                          uVar13 = 0xffffffff;
                          uVar22 = 0;
                          lVar14 = (longlong)iVar26;
                        }
                        pppuVar30 = (undefined ***)(lVar14 + 1);
                        uVar40 = (ulonglong)pppuVar30 & 0xffffffff;
                        pppuVar35 = (undefined ***)(ulonglong)uVar22;
                      }
                      else {
LAB_144585e09:
                        uVar31 = (ulonglong)(-uVar22 & uVar22);
                        uVar38 = uVar31 * 2 + 1;
                        lVar14 = 0x3f;
                        if (uVar38 != 0) {
                          for (; uVar38 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                          }
                        }
                        uVar22 = (uint)lVar14 ^ 0x3f;
                        pppuVar30 = (undefined ***)(ulonglong)uVar22;
                        uVar22 = (iVar20 - uVar22) + 0x3e;
                        if ((int)uVar27 <= (int)uVar22) {
                          uVar22 = uVar27;
                        }
                        pppuVar15 = (undefined ***)(ulonglong)uVar22;
                        pppuVar35 = pppuVar15;
                      }
                    } while ((uint)pppuVar15 != uVar11);
                  }
                }
LAB_144585d39:
                lVar36 = lVar36 + 0x98;
              } while ((double)lVar36 != local_508);
            }
          }
        }
        uVar31 = local_4a0;
        local_3f8 = local_568;
        dStack_3f0 = local_568;
        pppuStack_400 = pppuStack_560;
        local_418._8_8_ = local_568;
        local_418._0_8_ = dVar93;
        local_4d8 = (PSRWLOCK)local_558._8_8_;
        dStack_4d0 = local_4e8;
        dVar99 = dVar92;
        pppuVar94 = pppuStack_560;
        pppuVar97 = pppuStack_560;
        local_508 = dVar92;
        dStack_500 = dVar92;
        local_408 = dVar92;
        local_3e8 = dVar93;
        dStack_3e0 = dVar93;
        if (local_598._0_4_ != 0) {
          dVar104 = dVar93 + dVar93;
          dVar105 = local_568 + local_568;
          dVar85 = dVar92 * (dVar92 + dVar92);
          local_478 = (undefined **)
                      ((1.0 - (local_568 * dVar105 + dVar93 * dVar104)) * (double)local_558._0_8_);
          ppuStack_530 = (undefined **)
                         ((1.0 - (local_568 * dVar105 + dVar85)) * (double)local_558._8_8_);
          local_458 = (undefined **)((1.0 - (dVar85 + dVar93 * dVar104)) * local_4e8);
          dVar85 = (dVar92 + dVar92) * (double)pppuStack_560;
          dStack_470 = (dVar104 * dVar92 + dVar105 * (double)pppuStack_560) *
                       (double)local_558._0_8_;
          local_448 = (undefined **)((dVar105 * dVar93 + dVar85) * (double)local_558._8_8_);
          local_538 = (undefined ***)
                      ((dVar104 * dVar92 - dVar105 * (double)pppuStack_560) *
                      (double)local_558._8_8_);
          local_468 = (undefined **)
                      ((dVar92 * dVar105 - dVar104 * (double)pppuStack_560) *
                      (double)local_558._0_8_);
          dStack_450 = 0.0;
          dStack_460 = 0.0;
          dStack_440 = 0.0;
          local_438._8_8_ = (dVar105 * dVar93 - dVar85) * local_4e8;
          local_438._0_8_ = (dVar104 * (double)pppuStack_560 + dVar92 * dVar105) * local_4e8;
          dStack_480 = 1.0;
          local_498._0_4_ = (float)param_5;
          pppuVar15 = (undefined ***)&DAT_00000001;
          if (1 < (int)local_598._0_4_) {
            pppuVar15 = (undefined ***)(ulonglong)(uint)local_598._0_4_;
          }
          pppuVar41 = (undefined ***)0x0;
          auVar73 = _DAT_149934d80;
          local_488 = ppuVar58;
          do {
            lVar14 = (longlong)*(int *)(*(longlong *)(uVar31 + 0x410) + (longlong)pppuVar41 * 4);
            if ((lVar14 != -1) &&
               (plVar37 = *(longlong **)(*(longlong *)(uVar31 + 0x340) + lVar14 * 8),
               plVar37 != (longlong *)0x0)) {
              lVar14 = *(longlong *)(*plVar37 + 0x5a8);
              lVar36 = (longlong)(int)plVar37[1] * 0x10;
              pppuVar35 = *(undefined ****)(lVar14 + lVar36);
              pppuVar30 = (undefined ***)CONCAT71((int7)((ulonglong)lVar14 >> 8),1);
              if ((pppuVar35 != (undefined ***)0x0) && (2 < *(byte *)((longlong)pppuVar35 + 0xc))) {
                ppuVar98 = *pppuVar35;
                pppuVar35 = (undefined ***)(longlong)*(int *)(pppuVar35 + 1);
                if ((ppuVar98[0xd0][(longlong)pppuVar35] & 1) != 0) {
                  puVar32 = ppuVar98[0x58];
                  pppuVar35 = (undefined ***)((longlong)pppuVar35 * 0x10);
                  pppuVar30 = (undefined ***)
                              CONCAT71((int7)((ulonglong)puVar32 >> 8),
                                       (puVar32 + 0xd)[(longlong)pppuVar35]);
                }
              }
              uVar34 = SUB84(pppuVar35,0);
              uVar12 = SUB84(pppuVar30,0);
              if (((char)pppuVar30 == '\0') ||
                 (*(char *)(*(longlong *)(*plVar37 + 0x2c0) + 0xd + lVar36) == '\0')) {
                local_528 = ppuVar58;
                dStack_520 = dVar87;
                local_518 = pppuVar94;
                pppuStack_510 = pppuVar97;
                FUN_1496ddf14(local_548);
                lVar14 = *(longlong *)(local_540 + 8);
                lVar24 = (longlong)(*(int *)(local_540 + 0x10) + -1) * 0x90;
                *(int *)(lVar14 + lVar24) = (int)pppuVar41;
                lVar36 = *(longlong *)(local_4a8 + 0x10);
                lVar23 = (longlong)pppuVar41 * 0x60;
                auVar81 = *(undefined1 (*) [16])(lVar36 + 0x40 + lVar23);
                auVar64 = *(undefined1 (*) [16])(lVar36 + 0x50 + lVar23);
                auVar66._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar81._8_8_));
                auVar66._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar81._0_8_));
                iVar20 = movmskpd(uVar12,auVar66);
                auVar67._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar64._8_8_));
                auVar67._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar64._0_8_));
                uVar11 = movmskpd(uVar34,auVar67);
                if ((uVar11 & 0x3fffffff) == 0 && iVar20 == 0) {
                  local_588 = DAT_14c8464c0;
                  dStack_580 = DAT_14c8464c8;
                  local_598._8_8_ = dRam000000014c8464d8;
                  local_598._0_8_ = DAT_14c8464d0;
                  dVar87 = DAT_14c846480;
                  dVar99 = DAT_14c846488;
                  dVar104 = DAT_14c846490;
                  pppuVar94 = DAT_14c846498;
                  ppuVar98 = DAT_14c8464b0;
                  dVar105 = DAT_14c8464b8;
                  pppuVar97 = DAT_14c8464a0;
                  ppuVar58 = DAT_14c8464a8;
                }
                else {
                  pdVar18 = (double *)(lVar36 + lVar23);
                  auVar59 = divpd(_DAT_149934d80,auVar81);
                  auVar89 = divpd(ZEXT816(0x3ff0000000000000),auVar64);
                  local_588 = (undefined ***)
                              (-(ulonglong)(9.99999993922529e-09 < ABS(auVar81._0_8_)) &
                              auVar59._0_8_);
                  dStack_580 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar81._8_8_)) &
                                       auVar59._8_8_);
                  local_598._0_8_ =
                       -(ulonglong)(9.99999993922529e-09 < ABS(auVar64._0_8_)) & auVar89._0_8_;
                  local_598._8_8_ = 0;
                  dVar87 = -*pdVar18;
                  dVar99 = -pdVar18[1];
                  dVar104 = pdVar18[2] * -1.0;
                  pppuVar94 = (undefined ***)(pdVar18[3] * 1.0);
                  dVar77 = pdVar18[4] * (double)local_588;
                  dVar86 = pdVar18[5] * dStack_580;
                  dVar105 = pdVar18[6] * (double)local_598._0_8_;
                  dVar85 = dVar86 * dVar87 - dVar99 * dVar77;
                  dVar88 = dVar105 * dVar99 - dVar104 * dVar86;
                  dVar102 = dVar77 * dVar104 - dVar87 * dVar105;
                  dVar88 = dVar88 + dVar88;
                  dVar102 = dVar102 + dVar102;
                  dVar85 = dVar85 + dVar85;
                  ppuVar98 = (undefined **)
                             (0.0 - ((double)pppuVar94 * dVar85 + dVar105 +
                                    (dVar102 * dVar87 - dVar88 * dVar99)));
                  dVar105 = 0.0;
                  pppuVar97 = (undefined ***)
                              (0.0 - ((dVar85 * dVar99 - dVar102 * dVar104) +
                                     (double)pppuVar94 * dVar88 + dVar77));
                  ppuVar58 = (undefined **)
                             (0.0 - (dVar85 * *pdVar18 + dVar104 * dVar88 +
                                    (double)pppuVar94 * dVar102 + dVar86));
                }
                lVar23 = (longlong)(int)plVar37[1];
                pppuVar30 = (undefined ***)(lVar23 * 3);
                pppuVar35 = *(undefined ****)(*plVar37 + 0x28);
                lVar36 = *(longlong *)(*plVar37 + 0x48);
                lVar39 = lVar23 * 0x10;
                dVar85 = (double)*(float *)(lVar36 + 0xc + lVar39);
                dVar102 = (double)*(float *)(lVar36 + 8 + lVar39);
                dVar88 = (double)*(float *)(lVar36 + 4 + lVar39);
                auVar101._0_8_ = (double)*(float *)(lVar36 + lVar39);
                auVar101._8_8_ = 0;
                auVar95._8_8_ = dVar85;
                auVar95._0_8_ = dVar102;
                local_578 = (undefined ***)pppuVar35[lVar23 * 3];
                ppuStack_570 = (pppuVar35 + lVar23 * 3)[1];
                pppuVar4 = pppuVar35 + lVar23 * 3 + 2;
                auVar81._8_8_ = dStack_580;
                auVar81._0_8_ = local_588;
                auVar73 = minpd(auVar81,auVar73);
                auVar81 = minpd(local_598,ZEXT816(0x3ff0000000000000));
                auVar68._8_8_ = -(ulonglong)(auVar73._8_8_ < 0.0);
                auVar68._0_8_ = -(ulonglong)(auVar73._0_8_ < 0.0);
                iVar20 = movmskpd((int)lVar36,auVar68);
                auVar73._8_8_ = -(ulonglong)(auVar81._8_8_ < 0.0);
                auVar73._0_8_ = -(ulonglong)(auVar81._0_8_ < 0.0);
                uVar11 = movmskpd((int)lVar39,auVar73);
                uVar8 = local_598._0_8_;
                uVar9 = local_598._8_8_;
                local_4c8 = dVar92;
                dStack_4c0 = dVar93;
                if ((uVar11 & 0x3fffffff) == 0 && iVar20 == 0) {
                  dVar93 = dVar99 * dVar102 * -1.0 +
                           dVar104 * dVar88 +
                           (double)pppuVar94 * auVar101._0_8_ * 1.0 + dVar87 * dVar85;
                  dVar77 = dVar87 * dVar102 * 1.0 +
                           (double)pppuVar94 * dVar88 +
                           dVar104 * auVar101._0_8_ * -1.0 + dVar99 * dVar85;
                  auVar106._0_8_ =
                       (double)pppuVar94 * dVar102 * 1.0 +
                       ((auVar101._0_8_ * dVar99 * 1.0 + dVar104 * dVar85) - dVar88 * dVar87);
                  auVar106._8_8_ =
                       dVar104 * dVar102 * -1.0 +
                       ((auVar101._0_8_ * dVar87 * -1.0 + (double)pppuVar94 * dVar85) -
                       dVar88 * dVar99);
                  dVar99 = (double)ppuVar98 * 1.0;
                  dVar105 = dVar105 * 0.0;
                  auVar73 = blendpd(auVar101,auVar95,2);
                  dVar104 = (double)ppuVar58 * auVar101._0_8_ - (double)pppuVar97 * dVar88;
                  dVar86 = dVar99 * dVar88 - (double)ppuVar58 * dVar102;
                  dVar87 = (double)pppuVar97 * dVar102 - dVar99 * auVar73._0_8_;
                  dVar92 = dVar105 * dVar85 - dVar105 * auVar73._8_8_;
                  dVar86 = dVar86 + dVar86;
                  dVar87 = dVar87 + dVar87;
                  dVar104 = dVar104 + dVar104;
                  dVar92 = dVar92 + dVar92;
                  pppuVar94 = (undefined ***)
                              ((double)local_578 +
                              (dVar104 * dVar88 - dVar102 * dVar87) +
                              dVar85 * dVar86 + (double)pppuVar97);
                  ppuVar58 = (undefined **)
                             ((double)ppuStack_570 +
                             (dVar86 * dVar102 - dVar104 * auVar73._0_8_) +
                             dVar85 * dVar87 + (double)ppuVar58);
                  ppuVar98 = (undefined **)
                             ((double)*pppuVar4 +
                             (dVar87 * auVar101._0_8_ - dVar88 * dVar86) + dVar85 * dVar104 + dVar99
                             );
                  dVar87 = (dVar92 * dVar85 - dVar92 * auVar73._8_8_) + dVar85 * dVar92 + dVar105 +
                           0.0;
                  uVar12 = 0;
                }
                else {
                  auVar69._8_4_ = SUB84(dVar88,0);
                  auVar69._0_8_ = auVar101._0_8_;
                  auVar69._12_4_ = (int)((ulonglong)dVar88 >> 0x20);
                  dVar92 = auVar69._8_8_ + dVar88;
                  dVar93 = dVar102 + dVar102;
                  dVar105 = auVar101._0_8_ * (auVar101._0_8_ + auVar101._0_8_);
                  local_178 = (undefined **)(1.0 - (dVar102 * dVar93 + dVar88 * dVar92));
                  ppuStack_150 = (undefined **)(1.0 - (dVar102 * dVar93 + dVar105));
                  local_128 = (undefined **)(1.0 - (dVar105 + dVar88 * dVar92));
                  dStack_130 = (auVar101._0_8_ + auVar101._0_8_) * dVar85;
                  dStack_170 = dVar92 * auVar101._0_8_ + dVar93 * dVar85;
                  local_148 = (undefined **)(dVar93 * dVar88 + dStack_130);
                  local_158 = (undefined ***)(dVar92 * auVar101._0_8_ - dVar93 * dVar85);
                  dStack_130 = dVar93 * dVar88 - dStack_130;
                  local_138 = (undefined **)(auVar101._0_8_ * dVar93 + dVar92 * dVar85);
                  local_168 = (undefined **)(auVar101._0_8_ * dVar93 - dVar92 * dVar85);
                  dStack_160 = 0.0;
                  dStack_140 = 0.0;
                  dStack_120 = 0.0;
                  dStack_100 = 1.0;
                  dVar92 = dVar99 + dVar99;
                  dVar105 = dVar104 + dVar104;
                  dVar93 = dVar87 * (dVar87 + dVar87);
                  local_1f8 = (1.0 - (dVar104 * dVar105 + dVar99 * dVar92)) * (double)local_588;
                  dStack_1d0 = (1.0 - (dVar104 * dVar105 + dVar93)) * dStack_580;
                  dVar104 = (dVar87 + dVar87) * (double)pppuVar94;
                  local_1d8 = (dVar92 * dVar87 - dVar105 * (double)pppuVar94) * dStack_580;
                  dStack_1b0 = (dVar105 * dVar99 - dVar104) * (double)local_598._0_8_;
                  local_1b8 = (dVar92 * (double)pppuVar94 + dVar87 * dVar105) *
                              (double)local_598._0_8_;
                  dStack_1f0 = (dVar92 * dVar87 + dVar105 * (double)pppuVar94) * (double)local_588;
                  local_1c8 = (dVar105 * dVar99 + dVar104) * dStack_580;
                  local_1e8 = (dVar87 * dVar105 - dVar92 * (double)pppuVar94) * (double)local_588;
                  uStack_1e0 = 0;
                  uStack_1c0 = 0;
                  local_1a8 = (1.0 - (dVar93 + dVar99 * dVar92)) * (double)local_598._0_8_;
                  uStack_1a0 = 0;
                  uStack_180 = 0x3ff0000000000000;
                  dVar99 = (double)local_598._0_8_ * 1.0;
                  pppuVar35 = &local_178;
                  local_198 = pppuVar97;
                  ppuStack_190 = ppuVar58;
                  local_188 = ppuVar98;
                  local_118 = local_578;
                  ppuStack_110 = ppuStack_570;
                  local_108 = *pppuVar4;
                  FUN_1447fea8d(&local_338,&local_1f8);
                  auVar73 = _DAT_149934d80;
                  local_598._0_8_ = local_328;
                  dVar87 = (double)local_328 * (double)local_328 +
                           (double)local_338 * (double)local_338 + local_330 * local_330;
                  local_578 = local_318;
                  dVar92 = local_308 * local_308 +
                           (double)local_318 * (double)local_318 + local_310 * local_310;
                  dVar93 = local_2e8 * local_2e8 + local_2f8 * local_2f8 + local_2f0 * local_2f0;
                  uVar40 = -(ulonglong)(0.0 <= dVar87 + -9.99999993922529e-09);
                  dVar87 = (double)(~uVar40 & 0x3ff0000000000000 |
                                   (ulonglong)(1.0 / SQRT(dVar87)) & uVar40);
                  uVar40 = -(ulonglong)(0.0 <= dVar92 + -9.99999993922529e-09);
                  dVar92 = (double)(~uVar40 & 0x3ff0000000000000 |
                                   (ulonglong)(1.0 / SQRT(dVar92)) & uVar40);
                  uVar40 = -(ulonglong)(0.0 <= dVar93 + -9.99999993922529e-09);
                  dVar93 = (double)(~uVar40 & 0x3ff0000000000000 |
                                   (ulonglong)(1.0 / SQRT(dVar93)) & uVar40);
                  auVar43._8_8_ = -(ulonglong)(0.0 <= dStack_580);
                  auVar43._0_8_ = -(ulonglong)(0.0 <= (double)local_588);
                  auVar81 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar43);
                  uVar40 = -(ulonglong)(0.0 <= dVar99);
                  dVar99 = (double)(~uVar40 & 0xbff0000000000000 | uVar40 & 0x3ff0000000000000);
                  dVar104 = auVar81._0_8_;
                  local_338 = (undefined **)((double)local_338 * dVar87 * dVar104);
                  local_330 = local_330 * dVar87 * dVar104;
                  local_328 = (undefined ***)(dVar87 * (double)local_328 * dVar104);
                  dVar87 = auVar81._8_8_;
                  local_308 = dVar92 * local_308 * dVar87;
                  local_310 = local_310 * dVar92 * dVar87;
                  local_318 = (undefined ***)(dVar87 * (double)local_318 * dVar92);
                  local_2e8 = dVar93 * local_2e8 * dVar99;
                  local_2f0 = local_2f0 * dVar93 * dVar99;
                  local_2f8 = dVar99 * local_2f8 * dVar93;
                  uVar12 = SUB84(&local_358,0);
                  pppuVar30 = &local_338;
                  iVar20 = FUN_14481fd10();
                  dVar87 = local_348 * local_348 + local_358 * local_358;
                  dVar92 = dStack_340 * dStack_340 + dStack_350 * dStack_350;
                  auVar60._0_8_ = dVar87 + dVar92;
                  auVar60._8_8_ = dVar87 + dVar92;
                  auVar44._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar60._8_8_);
                  auVar44._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar60._0_8_);
                  auVar81 = sqrtpd(auVar60,auVar60);
                  auVar73 = divpd(auVar73,auVar81);
                  auVar90._0_8_ = auVar73._0_8_ * local_348;
                  auVar90._8_8_ = auVar73._8_8_ * dStack_340;
                  dVar93 = (double)((ulonglong)(local_358 * auVar73._0_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar60._0_8_));
                  dVar77 = (double)((ulonglong)(dStack_350 * auVar73._8_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar60._8_8_));
                  auVar106 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar90,auVar44);
                  dVar87 = 0.0;
                  ppuVar98 = local_2c8;
                  pppuVar94 = local_2d8;
                  ppuVar58 = ppuStack_2d0;
                }
                dVar92 = (double)uVar8 * 1.0;
                dVar99 = (double)uVar9 * 0.0;
                auVar5._8_8_ = dStack_580;
                auVar5._0_8_ = local_588;
                auVar73 = minpd(auVar5,local_558);
                auVar78._8_8_ = dVar99;
                auVar78._0_8_ = dVar92;
                auVar6._8_8_ = dStack_4e0;
                auVar6._0_8_ = local_4e8;
                auVar81 = minpd(auVar78,auVar6);
                auVar45._8_8_ = -(ulonglong)(auVar73._8_8_ < 0.0);
                auVar45._0_8_ = -(ulonglong)(auVar73._0_8_ < 0.0);
                iVar20 = movmskpd(iVar20,auVar45);
                auVar79._8_8_ = -(ulonglong)(auVar81._8_8_ < 0.0);
                auVar79._0_8_ = -(ulonglong)(auVar81._0_8_ < 0.0);
                uVar11 = movmskpd(uVar12,auVar79);
                dVar105 = auVar106._8_8_;
                dVar104 = auVar106._0_8_;
                if ((uVar11 & 0x3fffffff) == 0 && iVar20 == 0) {
                  dVar88 = dVar77 * local_3f8 * -1.0 +
                           local_508 * dVar105 * 1.0 + (double)local_518 * dVar93 +
                           local_3e8 * dVar104;
                  dVar102 = dVar93 * dStack_3f0 * 1.0 +
                            dStack_500 * dVar104 * -1.0 + (double)pppuStack_510 * dVar77 +
                            dStack_3e0 * dVar105;
                  auVar107._0_8_ =
                       dVar105 * local_3f8 * 1.0 +
                       ((local_508 * dVar77 * 1.0 + (double)local_518 * dVar104) -
                       local_3e8 * dVar93);
                  auVar107._8_8_ =
                       dVar104 * dStack_3f0 * -1.0 +
                       ((dStack_500 * dVar93 * -1.0 + (double)pppuStack_510 * dVar105) -
                       dStack_3e0 * dVar77);
                  dVar86 = (double)pppuVar94 * (double)local_558._0_8_;
                  dVar100 = (double)ppuVar58 * (double)local_558._8_8_;
                  dVar85 = (double)ppuVar98 * local_4e8;
                  dVar87 = dVar87 * dStack_4e0;
                  dVar93 = dVar100 * local_4c8 - (double)local_418._0_8_ * dVar86;
                  dVar104 = dVar85 * dStack_4c0 - (double)local_418._8_8_ * dVar100;
                  dVar105 = dVar86 * local_568 - local_408 * dVar85;
                  dVar77 = dVar87 * (double)pppuStack_560 - (double)pppuStack_400 * dVar87;
                  dVar104 = dVar104 + dVar104;
                  dVar105 = dVar105 + dVar105;
                  dVar93 = dVar93 + dVar93;
                  dVar77 = dVar77 + dVar77;
                  auVar48._0_8_ =
                       (dVar93 * dStack_4c0 - (double)local_418._8_8_ * dVar105) +
                       (double)local_518 * dVar104 + dVar86 + (double)local_4b8._0_8_;
                  auVar48._8_8_ =
                       (dVar104 * local_568 - dVar93 * local_408) +
                       (double)pppuStack_510 * dVar105 + dVar100 + (double)local_4b8._8_8_;
                  ppuVar58 = (undefined **)
                             ((dVar105 * local_4c8 - (double)local_418._0_8_ * dVar104) +
                              (double)local_518 * dVar93 + dVar85 + (double)local_528);
                  dVar87 = (dVar77 * (double)pppuStack_560 - dVar77 * (double)pppuStack_400) +
                           (double)pppuStack_510 * dVar77 + dVar87 + dStack_520;
                  pppuVar94 = (undefined ***)((double)local_588 * (double)local_558._0_8_);
                  ppuVar98 = (undefined **)(dStack_580 * (double)local_558._8_8_);
                  dVar92 = dVar92 * local_4e8;
                  dVar99 = dVar99 * dStack_4e0;
                }
                else {
                  local_598._8_8_ = dStack_4e0 * dVar99;
                  local_598._0_8_ = local_4e8 * dVar92;
                  dVar99 = dVar77 + dVar77;
                  dVar85 = dVar104 + dVar104;
                  dVar87 = dVar93 * (dVar93 + dVar93);
                  local_1a8 = (1.0 - (dVar87 + dVar77 * dVar99)) * dVar92;
                  dVar88 = (dVar93 + dVar93) * dVar105;
                  local_1b8 = (dVar99 * dVar105 + dVar93 * dVar85) * dVar92;
                  local_1d8 = (dVar99 * dVar93 - dVar85 * dVar105) * dStack_580;
                  dStack_1b0 = (dVar85 * dVar77 - dVar88) * dVar92;
                  local_578 = (undefined ***)((double)local_558._0_8_ * (double)local_588);
                  ppuStack_570 = (undefined **)((double)local_558._8_8_ * dStack_580);
                  local_1f8 = (1.0 - (dVar104 * dVar85 + dVar77 * dVar99)) * (double)local_588;
                  dStack_1d0 = (1.0 - (dVar104 * dVar85 + dVar87)) * dStack_580;
                  dStack_1f0 = (dVar99 * dVar93 + dVar85 * dVar105) * (double)local_588;
                  local_1c8 = (dVar85 * dVar77 + dVar88) * dStack_580;
                  local_1e8 = (dVar93 * dVar85 - dVar99 * dVar105) * (double)local_588;
                  uStack_1e0 = 0;
                  uStack_1c0 = 0;
                  uStack_1a0 = 0;
                  uStack_180 = 0x3ff0000000000000;
                  local_178 = local_478;
                  dStack_170 = dStack_470;
                  local_168 = local_468;
                  dStack_160 = dStack_460;
                  local_158 = local_538;
                  ppuStack_150 = ppuStack_530;
                  local_148 = local_448;
                  dStack_140 = dStack_440;
                  local_138 = (undefined **)local_438._0_8_;
                  dStack_130 = (double)local_438._8_8_;
                  local_128 = local_458;
                  dStack_120 = dStack_450;
                  local_118 = (undefined ***)local_4b8._0_8_;
                  ppuStack_110 = (undefined **)local_4b8._8_8_;
                  local_108 = local_488;
                  dStack_100 = dStack_480;
                  pppuVar35 = &local_178;
                  local_198 = pppuVar94;
                  ppuStack_190 = ppuVar58;
                  local_188 = ppuVar98;
                  FUN_1447fea8d(&local_338,&local_1f8);
                  ppuVar98 = ppuStack_570;
                  pppuVar94 = local_578;
                  auVar73 = _DAT_149934d80;
                  local_588 = local_328;
                  dVar87 = (double)local_328 * (double)local_328 +
                           (double)local_338 * (double)local_338 + local_330 * local_330;
                  dVar92 = local_308 * local_308 +
                           (double)local_318 * (double)local_318 + local_310 * local_310;
                  dVar99 = local_2e8 * local_2e8 + local_2f8 * local_2f8 + local_2f0 * local_2f0;
                  uVar40 = -(ulonglong)(0.0 <= dVar87 + -9.99999993922529e-09);
                  dVar87 = (double)(~uVar40 & 0x3ff0000000000000 |
                                   (ulonglong)(1.0 / SQRT(dVar87)) & uVar40);
                  uVar40 = -(ulonglong)(0.0 <= dVar92 + -9.99999993922529e-09);
                  dVar93 = (double)(~uVar40 & 0x3ff0000000000000 |
                                   (ulonglong)(1.0 / SQRT(dVar92)) & uVar40);
                  uVar40 = -(ulonglong)(0.0 <= dVar99 + -9.99999993922529e-09);
                  dVar104 = (double)(~uVar40 & 0x3ff0000000000000 |
                                    (ulonglong)(1.0 / SQRT(dVar99)) & uVar40);
                  dVar92 = (double)local_598._0_8_;
                  dVar99 = (double)local_598._8_8_;
                  auVar46._8_8_ = -(ulonglong)(0.0 <= (double)ppuStack_570);
                  auVar46._0_8_ = -(ulonglong)(0.0 <= (double)local_578);
                  auVar81 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar46);
                  dVar105 = (double)(~-(ulonglong)(0.0 <= (double)local_598._0_8_) &
                                     0xbff0000000000000 |
                                    -(ulonglong)(0.0 <= (double)local_598._0_8_) &
                                    0x3ff0000000000000);
                  dVar85 = auVar81._0_8_;
                  local_338 = (undefined **)((double)local_338 * dVar87 * dVar85);
                  local_330 = local_330 * dVar87 * dVar85;
                  local_328 = (undefined ***)(dVar87 * (double)local_328 * dVar85);
                  dVar87 = auVar81._8_8_;
                  local_308 = dVar93 * local_308 * dVar87;
                  local_310 = local_310 * dVar93 * dVar87;
                  local_318 = (undefined ***)(dVar87 * (double)local_318 * dVar93);
                  local_2e8 = dVar104 * local_2e8 * dVar105;
                  local_2f0 = local_2f0 * dVar104 * dVar105;
                  local_2f8 = dVar105 * local_2f8 * dVar104;
                  pppuVar30 = &local_338;
                  FUN_14481fd10(&local_358);
                  dVar87 = local_348 * local_348 + local_358 * local_358;
                  dVar93 = dStack_340 * dStack_340 + dStack_350 * dStack_350;
                  auVar61._0_8_ = dVar87 + dVar93;
                  auVar61._8_8_ = dVar87 + dVar93;
                  auVar47._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar61._8_8_);
                  auVar47._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar61._0_8_);
                  auVar81 = sqrtpd(auVar61,auVar61);
                  auVar73 = divpd(auVar73,auVar81);
                  auVar80._0_8_ = auVar73._0_8_ * local_348;
                  auVar80._8_8_ = auVar73._8_8_ * dStack_340;
                  dVar88 = (double)((ulonglong)(local_358 * auVar73._0_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar61._0_8_));
                  dVar102 = (double)((ulonglong)(dStack_350 * auVar73._8_8_) &
                                    -(ulonglong)(9.99999993922529e-09 <= auVar61._8_8_));
                  auVar107 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar80,auVar47);
                  auVar48._8_8_ = (double)ppuStack_2d0;
                  auVar48._0_8_ = (double)local_2d8;
                  dVar87 = 0.0;
                  ppuVar58 = local_2c8;
                }
                lVar14 = lVar14 + lVar24;
                *(double *)(lVar14 + 0x10) = dVar88;
                *(double *)(lVar14 + 0x18) = dVar102;
                *(undefined1 (*) [16])(lVar14 + 0x20) = auVar107;
                *(undefined1 (*) [16])(lVar14 + 0x30) = auVar48;
                *(undefined ***)(lVar14 + 0x40) = ppuVar58;
                *(double *)(lVar14 + 0x48) = dVar87;
                *(undefined ****)(lVar14 + 0x50) = pppuVar94;
                *(undefined ***)(lVar14 + 0x58) = ppuVar98;
                *(double *)(lVar14 + 0x60) = dVar92;
                *(double *)(lVar14 + 0x68) = dVar99;
                auVar73 = _DAT_149934d80;
                ppuVar58 = local_528;
                dVar87 = dStack_520;
                dVar92 = local_4c8;
                dVar93 = dStack_4c0;
                dVar99 = local_508;
                pppuVar94 = local_518;
                pppuVar97 = pppuStack_510;
              }
              if ((longlong)(int)uStack_3c0 != 0) {
                pppuVar30 = (undefined ***)0x0;
                do {
                  pppuVar35 = (undefined ***)(ulonglong)*(uint *)(local_3c8 + (longlong)pppuVar30);
                  if (pppuVar41 == pppuVar35) {
                    local_338 = &PTR_FUN_14bdde670;
                    local_330._0_5_ = CONCAT14(1,(int)pppuVar41);
                    pppuVar30 = DAT_14cc22418;
                    lVar14 = FUN_1496ec676(local_540);
                    if (*(longlong *)(lVar14 + 8) != 0) {
                      pppuVar35 = &local_338;
                      FUN_1496e5d84(lVar14);
                    }
                    break;
                  }
                  pppuVar30 = (undefined ***)((longlong)pppuVar30 + 4);
                } while ((undefined ***)((longlong)(int)uStack_3c0 * 4) != pppuVar30);
              }
            }
            pppuVar41 = (undefined ***)((longlong)pppuVar41 + 1);
          } while (pppuVar41 != pppuVar15);
        }
        uVar11 = local_220;
        if (local_220 == 0) {
          uVar40 = 1;
          uVar38 = 0;
          pppuVar15 = (undefined ***)0x0;
          iVar20 = 0;
LAB_1445873b8:
          if ((uint)pppuVar15 != local_220) {
            dVar85 = dVar93 + dVar93;
            dVar104 = local_568 + local_568;
            dVar105 = dVar92 * (dVar92 + dVar92);
            local_488 = (undefined **)
                        ((1.0 - (local_568 * dVar104 + dVar93 * dVar85)) * (double)local_558._0_8_);
            local_438._8_8_ = (1.0 - (local_568 * dVar104 + dVar105)) * (double)local_558._8_8_;
            local_468 = (undefined **)((1.0 - (dVar105 + dVar93 * dVar85)) * local_4e8);
            dVar105 = (dVar92 + dVar92) * (double)pppuVar97;
            dStack_480 = (dVar85 * dVar92 + dVar104 * (double)pppuVar94) * (double)local_558._0_8_;
            local_458 = (undefined **)((dVar104 * dVar93 + dVar105) * (double)local_558._8_8_);
            local_448 = (undefined **)((dVar85 * (double)pppuVar94 + dVar99 * dVar104) * local_4e8);
            dStack_440 = (dVar104 * dVar93 - dVar105) * dStack_4d0;
            local_478 = (undefined **)
                        ((dVar99 * dVar104 - dVar85 * (double)pppuVar94) * (double)local_558._0_8_);
            dStack_460 = 0.0;
            dStack_470 = 0.0;
            dStack_450 = 0.0;
            local_438._0_8_ = (dVar85 * dVar92 - dVar104 * (double)pppuVar94) * (double)local_4d8;
            local_498._8_8_ = 0x3ff0000000000000;
            local_498._0_8_ = ppuVar58;
            uVar13 = 0xffffffff;
            dVar99 = local_568;
            pppuVar41 = pppuStack_560;
            do {
              uVar34 = SUB84(pppuVar35,0);
              uVar12 = SUB84(pppuVar30,0);
              iVar28 = *(int *)(local_248 + (longlong)(int)pppuVar15 * 0xc);
              lVar14 = (longlong)iVar28;
              if (((-1 < lVar14) &&
                  (lVar36 = (longlong)*(int *)(*(longlong *)(uVar31 + 0x410) + lVar14 * 4),
                  lVar36 != -1)) &&
                 (plVar37 = *(longlong **)(*(longlong *)(uVar31 + 0x340) + lVar36 * 8),
                 plVar37 != (longlong *)0x0)) {
                local_528 = ppuVar58;
                dStack_520 = dVar87;
                local_518 = pppuVar94;
                pppuStack_510 = pppuVar97;
                local_4c8 = dVar92;
                dStack_4c0 = dVar93;
                FUN_1496ddf14(local_548);
                local_588 = *(undefined ****)(local_540 + 8);
                lVar36 = (longlong)(*(int *)(local_540 + 0x10) + -1);
                local_4d8 = (PSRWLOCK)(lVar36 * 0x90);
                *(int *)(local_588 + lVar36 * 0x12) = iVar28;
                lVar36 = *(longlong *)(local_4a8 + 0x10);
                lVar14 = lVar14 * 0x60;
                auVar73 = *(undefined1 (*) [16])(lVar36 + 0x40 + lVar14);
                auVar81 = *(undefined1 (*) [16])(lVar36 + 0x50 + lVar14);
                auVar70._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar73._8_8_));
                auVar70._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar73._0_8_));
                iVar28 = movmskpd(uVar12,auVar70);
                auVar71._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar81._8_8_));
                auVar71._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar81._0_8_));
                uVar27 = movmskpd(uVar34,auVar71);
                if ((uVar27 & 0x3fffffff) == 0 && iVar28 == 0) {
                  local_578 = DAT_14c8464a0;
                  ppuStack_570 = DAT_14c8464a8;
                  auVar55._8_8_ = dRam000000014c8464d8;
                  auVar55._0_8_ = DAT_14c8464d0;
                  pppuVar35 = DAT_14c8464c0;
                  dVar87 = DAT_14c8464c8;
                  dVar92 = DAT_14c846480;
                  dVar93 = DAT_14c846488;
                  dVar104 = DAT_14c846490;
                  pppuVar30 = DAT_14c846498;
                  ppuVar98 = DAT_14c8464b0;
                  dVar105 = DAT_14c8464b8;
                }
                else {
                  pdVar18 = (double *)(lVar36 + lVar14);
                  auVar89 = divpd(_DAT_149934d80,auVar73);
                  auVar64 = divpd(ZEXT816(0x3ff0000000000000),auVar81);
                  pppuVar35 = (undefined ***)
                              (-(ulonglong)(9.99999993922529e-09 < ABS(auVar73._0_8_)) &
                              auVar89._0_8_);
                  dVar87 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar73._8_8_)) &
                                   auVar89._8_8_);
                  dVar105 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar81._0_8_)) &
                                    auVar64._0_8_);
                  auVar55._8_8_ = 0;
                  auVar55._0_8_ = dVar105;
                  dVar92 = -*pdVar18;
                  dVar93 = -pdVar18[1];
                  dVar104 = pdVar18[2] * -1.0;
                  pppuVar30 = (undefined ***)(pdVar18[3] * 1.0);
                  dVar77 = pdVar18[4] * (double)pppuVar35;
                  dVar86 = pdVar18[5] * dVar87;
                  dVar105 = pdVar18[6] * dVar105;
                  dVar85 = dVar86 * dVar92 - dVar93 * dVar77;
                  dVar88 = dVar105 * dVar93 - dVar104 * dVar86;
                  dVar102 = dVar77 * dVar104 - dVar92 * dVar105;
                  dVar88 = dVar88 + dVar88;
                  dVar102 = dVar102 + dVar102;
                  dVar85 = dVar85 + dVar85;
                  local_578 = (undefined ***)
                              (0.0 - ((dVar85 * dVar93 - dVar102 * dVar104) +
                                     (double)pppuVar30 * dVar88 + dVar77));
                  ppuStack_570 = (undefined **)
                                 (0.0 - (dVar85 * *pdVar18 + dVar104 * dVar88 +
                                        (double)pppuVar30 * dVar102 + dVar86));
                  ppuVar98 = (undefined **)
                             (0.0 - ((double)pppuVar30 * dVar85 + dVar105 +
                                    (dVar102 * dVar92 - dVar88 * dVar93)));
                  dVar105 = 0.0;
                }
                lVar23 = (longlong)(int)plVar37[1];
                lVar14 = *(longlong *)(*plVar37 + 0x28);
                lVar36 = *(longlong *)(*plVar37 + 0x48);
                lVar24 = lVar23 * 0x10;
                dVar85 = (double)*(float *)(lVar36 + 0xc + lVar24);
                dVar102 = (double)*(float *)(lVar36 + 8 + lVar24);
                dVar88 = (double)*(float *)(lVar36 + 4 + lVar24);
                auVar103._0_8_ = (double)*(float *)(lVar36 + lVar24);
                auVar103._8_8_ = 0;
                auVar96._8_8_ = dVar85;
                auVar96._0_8_ = dVar102;
                puVar1 = (undefined8 *)(lVar14 + lVar23 * 0x18);
                local_538 = (undefined ***)*puVar1;
                ppuStack_530 = (undefined **)puVar1[1];
                ppuVar58 = *(undefined ***)(lVar14 + 0x10 + lVar23 * 0x18);
                auVar72._8_8_ = dVar87;
                auVar72._0_8_ = pppuVar35;
                auVar73 = minpd(auVar72,_DAT_149934d80);
                auVar81 = minpd(auVar55,ZEXT816(0x3ff0000000000000));
                auVar74._8_8_ = -(ulonglong)(auVar73._8_8_ < 0.0);
                auVar74._0_8_ = -(ulonglong)(auVar73._0_8_ < 0.0);
                iVar28 = movmskpd((int)lVar36,auVar74);
                auVar82._8_8_ = -(ulonglong)(auVar81._8_8_ < 0.0);
                auVar82._0_8_ = -(ulonglong)(auVar81._0_8_ < 0.0);
                uVar27 = movmskpd((int)lVar24,auVar82);
                local_598._0_8_ = auVar55._0_8_;
                local_598._8_8_ = auVar55._8_8_;
                local_568 = dVar99;
                pppuStack_560 = pppuVar41;
                if ((uVar27 & 0x3fffffff) == 0 && iVar28 == 0) {
                  uStack_3d0 = 0;
                  dVar77 = dVar93 * dVar102 * -1.0 +
                           dVar104 * dVar88 +
                           (double)pppuVar30 * auVar103._0_8_ * 1.0 + dVar92 * dVar85;
                  dVar86 = dVar92 * dVar102 * 1.0 +
                           (double)pppuVar30 * dVar88 +
                           dVar104 * auVar103._0_8_ * -1.0 + dVar93 * dVar85;
                  auVar110._0_8_ =
                       (double)pppuVar30 * dVar102 * 1.0 +
                       ((auVar103._0_8_ * dVar93 * 1.0 + dVar104 * dVar85) - dVar88 * dVar92);
                  auVar110._8_8_ =
                       dVar104 * dVar102 * -1.0 +
                       ((auVar103._0_8_ * dVar92 * -1.0 + (double)pppuVar30 * dVar85) -
                       dVar88 * dVar93);
                  dVar99 = (double)ppuVar98 * 1.0;
                  dVar105 = dVar105 * 0.0;
                  auVar73 = blendpd(auVar103,auVar96,2);
                  dVar104 = (double)ppuStack_570 * auVar103._0_8_ - (double)local_578 * dVar88;
                  dVar100 = dVar99 * dVar88 - (double)ppuStack_570 * dVar102;
                  dVar92 = (double)local_578 * dVar102 - dVar99 * auVar73._0_8_;
                  dVar93 = dVar105 * dVar85 - dVar105 * auVar73._8_8_;
                  dVar100 = dVar100 + dVar100;
                  dVar92 = dVar92 + dVar92;
                  dVar104 = dVar104 + dVar104;
                  dVar93 = dVar93 + dVar93;
                  pppuVar30 = (undefined ***)
                              ((double)local_538 +
                              (dVar104 * dVar88 - dVar102 * dVar92) +
                              dVar85 * dVar100 + (double)local_578);
                  ppuVar108 = (undefined **)
                              ((double)ppuStack_530 +
                              (dVar100 * dVar102 - dVar104 * auVar73._0_8_) +
                              dVar85 * dVar92 + (double)ppuStack_570);
                  ppuVar98 = (undefined **)
                             ((double)ppuVar58 +
                             (dVar92 * auVar103._0_8_ - dVar88 * dVar100) +
                             dVar85 * dVar104 + dVar99);
                  dVar92 = (dVar93 * dVar85 - dVar93 * auVar73._8_8_) + dVar85 * dVar93 + dVar105 +
                           0.0;
                  auVar51._0_8_ = (double)local_598._0_8_ * 1.0;
                  auVar51._8_8_ = (double)local_598._8_8_ * 0.0;
                  uVar12 = 0;
                  local_3d8 = ppuVar58;
                }
                else {
                  auVar75._8_4_ = SUB84(dVar88,0);
                  auVar75._0_8_ = auVar103._0_8_;
                  auVar75._12_4_ = (int)((ulonglong)dVar88 >> 0x20);
                  dVar99 = auVar75._8_8_ + dVar88;
                  dVar105 = dVar102 + dVar102;
                  dVar77 = auVar103._0_8_ * (auVar103._0_8_ + auVar103._0_8_);
                  local_178 = (undefined **)(1.0 - (dVar102 * dVar105 + dVar88 * dVar99));
                  ppuStack_150 = (undefined **)(1.0 - (dVar102 * dVar105 + dVar77));
                  local_128 = (undefined **)(1.0 - (dVar77 + dVar88 * dVar99));
                  dStack_130 = (auVar103._0_8_ + auVar103._0_8_) * dVar85;
                  dStack_170 = dVar99 * auVar103._0_8_ + dVar105 * dVar85;
                  local_148 = (undefined **)(dVar105 * dVar88 + dStack_130);
                  local_158 = (undefined ***)(dVar99 * auVar103._0_8_ - dVar105 * dVar85);
                  dStack_130 = dVar105 * dVar88 - dStack_130;
                  local_138 = (undefined **)(auVar103._0_8_ * dVar105 + dVar99 * dVar85);
                  local_168 = (undefined **)(auVar103._0_8_ * dVar105 - dVar99 * dVar85);
                  dStack_160 = 0.0;
                  dStack_140 = 0.0;
                  dStack_120 = 0.0;
                  dStack_100 = 1.0;
                  dVar99 = dVar93 + dVar93;
                  dVar85 = dVar104 + dVar104;
                  dVar105 = dVar92 * (dVar92 + dVar92);
                  local_1f8 = (1.0 - (dVar104 * dVar85 + dVar93 * dVar99)) * (double)pppuVar35;
                  dStack_1d0 = (1.0 - (dVar104 * dVar85 + dVar105)) * dVar87;
                  dVar104 = (dVar92 + dVar92) * (double)pppuVar30;
                  local_1d8 = (dVar99 * dVar92 - dVar85 * (double)pppuVar30) * dVar87;
                  dStack_1b0 = (dVar85 * dVar93 - dVar104) * (double)local_598._0_8_;
                  local_1b8 = (dVar92 * dVar85 + dVar99 * (double)pppuVar30) *
                              (double)local_598._0_8_;
                  dStack_1f0 = (dVar99 * dVar92 + dVar85 * (double)pppuVar30) * (double)pppuVar35;
                  local_1c8 = (dVar85 * dVar93 + dVar104) * dVar87;
                  local_1e8 = (dVar92 * dVar85 - dVar99 * (double)pppuVar30) * (double)pppuVar35;
                  uStack_1e0 = 0;
                  uStack_1c0 = 0;
                  local_1a8 = (1.0 - (dVar105 + dVar93 * dVar99)) * (double)local_598._0_8_;
                  uStack_1a0 = 0;
                  local_198 = local_578;
                  ppuStack_190 = ppuStack_570;
                  uStack_180 = 0x3ff0000000000000;
                  local_598._8_8_ = (double)local_598._8_8_ * 0.0;
                  local_598._0_8_ = (double)local_598._0_8_ * 1.0;
                  local_188 = ppuVar98;
                  local_118 = local_538;
                  ppuStack_110 = ppuStack_530;
                  local_108 = ppuVar58;
                  FUN_1447fea8d(&local_338,&local_1f8,&local_178);
                  auVar51 = local_598;
                  auVar73 = _DAT_149934d80;
                  local_578 = local_328;
                  dVar92 = (double)local_328 * (double)local_328 +
                           (double)local_338 * (double)local_338 + local_330 * local_330;
                  local_538 = local_318;
                  dVar93 = local_308 * local_308 +
                           (double)local_318 * (double)local_318 + local_310 * local_310;
                  dVar99 = local_2e8 * local_2e8 + local_2f8 * local_2f8 + local_2f0 * local_2f0;
                  uVar42 = -(ulonglong)(0.0 <= dVar92 + -9.99999993922529e-09);
                  dVar92 = (double)(~uVar42 & 0x3ff0000000000000 |
                                   (ulonglong)(1.0 / SQRT(dVar92)) & uVar42);
                  uVar42 = -(ulonglong)(0.0 <= dVar93 + -9.99999993922529e-09);
                  dVar93 = (double)(~uVar42 & 0x3ff0000000000000 |
                                   (ulonglong)(1.0 / SQRT(dVar93)) & uVar42);
                  uVar42 = -(ulonglong)(0.0 <= dVar99 + -9.99999993922529e-09);
                  dVar99 = (double)(~uVar42 & 0x3ff0000000000000 |
                                   (ulonglong)(1.0 / SQRT(dVar99)) & uVar42);
                  auVar49._8_8_ = -(ulonglong)(0.0 <= dVar87);
                  auVar49._0_8_ = -(ulonglong)(0.0 <= (double)pppuVar35);
                  auVar81 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar49);
                  uVar42 = -(ulonglong)(0.0 <= local_598._0_8_);
                  dVar104 = (double)(~uVar42 & 0xbff0000000000000 | uVar42 & 0x3ff0000000000000);
                  dVar105 = auVar81._0_8_;
                  local_338 = (undefined **)((double)local_338 * dVar92 * dVar105);
                  local_330 = local_330 * dVar92 * dVar105;
                  local_328 = (undefined ***)(dVar92 * (double)local_328 * dVar105);
                  dVar92 = auVar81._8_8_;
                  local_308 = dVar93 * local_308 * dVar92;
                  local_310 = local_310 * dVar93 * dVar92;
                  local_318 = (undefined ***)(dVar92 * (double)local_318 * dVar93);
                  local_2e8 = dVar99 * local_2e8 * dVar104;
                  local_2f0 = local_2f0 * dVar99 * dVar104;
                  local_2f8 = dVar104 * local_2f8 * dVar99;
                  pdVar18 = &local_358;
                  iVar28 = FUN_14481fd10(pdVar18,&local_338);
                  uVar12 = SUB84(pdVar18,0);
                  dVar92 = local_348 * local_348 + local_358 * local_358;
                  dVar93 = dStack_340 * dStack_340 + dStack_350 * dStack_350;
                  auVar62._0_8_ = dVar92 + dVar93;
                  auVar62._8_8_ = dVar92 + dVar93;
                  auVar50._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar62._8_8_);
                  auVar50._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar62._0_8_);
                  auVar81 = sqrtpd(auVar62,auVar62);
                  auVar73 = divpd(auVar73,auVar81);
                  auVar91._0_8_ = auVar73._0_8_ * local_348;
                  auVar91._8_8_ = auVar73._8_8_ * dStack_340;
                  dVar77 = (double)((ulonglong)(local_358 * auVar73._0_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar62._0_8_));
                  dVar86 = (double)((ulonglong)(dStack_350 * auVar73._8_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar62._8_8_));
                  auVar110 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar91,auVar50);
                  dVar92 = 0.0;
                  ppuVar98 = local_2c8;
                  pppuVar30 = local_2d8;
                  ppuVar108 = ppuStack_2d0;
                }
                auVar56._8_8_ = dVar87;
                auVar56._0_8_ = pppuVar35;
                dVar93 = local_558._0_8_;
                dVar99 = local_558._8_8_;
                auVar73 = minpd(auVar56,local_558);
                dVar104 = auVar51._0_8_;
                auVar7._8_8_ = dStack_4e0;
                auVar7._0_8_ = local_4e8;
                auVar81 = minpd(auVar51,auVar7);
                auVar57._8_8_ = -(ulonglong)(auVar73._8_8_ < 0.0);
                auVar57._0_8_ = -(ulonglong)(auVar73._0_8_ < 0.0);
                iVar28 = movmskpd(iVar28,auVar57);
                auVar83._8_8_ = -(ulonglong)(auVar81._8_8_ < 0.0);
                auVar83._0_8_ = -(ulonglong)(auVar81._0_8_ < 0.0);
                uVar27 = movmskpd(uVar12,auVar83);
                dVar85 = auVar110._8_8_;
                dVar105 = auVar110._0_8_;
                if ((uVar27 & 0x3fffffff) == 0 && iVar28 == 0) {
                  dVar100 = dVar86 * local_3f8 * -1.0 +
                            local_508 * dVar85 * 1.0 + (double)local_518 * dVar77 +
                            local_3e8 * dVar105;
                  dVar76 = dVar77 * dStack_3f0 * 1.0 +
                           dStack_500 * dVar105 * -1.0 + (double)pppuStack_510 * dVar86 +
                           dStack_3e0 * dVar85;
                  auVar111._0_8_ =
                       dVar85 * local_3f8 * 1.0 +
                       ((local_508 * dVar86 * 1.0 + (double)local_518 * dVar105) -
                       local_3e8 * dVar77);
                  auVar111._8_8_ =
                       dVar105 * dStack_3f0 * -1.0 +
                       ((dStack_500 * dVar77 * -1.0 + (double)pppuStack_510 * dVar85) -
                       dStack_3e0 * dVar86);
                  dVar86 = (double)pppuVar30 * dVar93;
                  dVar109 = (double)ppuVar108 * dVar99;
                  dVar102 = (double)ppuVar98 * local_4e8;
                  dVar92 = dVar92 * dStack_4e0;
                  dVar105 = dVar109 * local_4c8 - (double)local_418._0_8_ * dVar86;
                  dVar85 = dVar102 * dStack_4c0 - (double)local_418._8_8_ * dVar109;
                  dVar88 = dVar86 * local_568 - local_408 * dVar102;
                  dVar77 = dVar92 * (double)pppuStack_560 - (double)pppuStack_400 * dVar92;
                  dVar85 = dVar85 + dVar85;
                  dVar88 = dVar88 + dVar88;
                  dVar105 = dVar105 + dVar105;
                  dVar77 = dVar77 + dVar77;
                  pppuVar30 = (undefined ***)
                              ((dVar105 * dStack_4c0 - (double)local_418._8_8_ * dVar88) +
                               (double)local_518 * dVar85 + dVar86 + (double)local_4b8._0_8_);
                  ppuVar58 = (undefined **)
                             ((dVar85 * local_568 - dVar105 * local_408) +
                              (double)pppuStack_510 * dVar88 + dVar109 + (double)local_4b8._8_8_);
                  auVar54._0_8_ =
                       (dVar88 * local_4c8 - (double)local_418._0_8_ * dVar85) +
                       (double)local_518 * dVar105 + dVar102 + (double)local_528;
                  auVar54._8_8_ =
                       (dVar77 * (double)pppuStack_560 - dVar77 * (double)pppuStack_400) +
                       (double)pppuStack_510 * dVar77 + dVar92 + dStack_520;
                  pppuVar35 = (undefined ***)((double)pppuVar35 * dVar93);
                  ppuVar98 = (undefined **)(dVar87 * dVar99);
                  dVar104 = dVar104 * local_4e8;
                  dVar87 = auVar51._8_8_ * dStack_4e0;
                  local_598 = auVar51;
                }
                else {
                  local_598._8_8_ = dStack_4e0 * auVar51._8_8_;
                  local_598._0_8_ = local_4e8 * dVar104;
                  dVar88 = dVar86 + dVar86;
                  dVar102 = dVar105 + dVar105;
                  dVar92 = dVar77 * (dVar77 + dVar77);
                  local_1a8 = (1.0 - (dVar92 + dVar86 * dVar88)) * dVar104;
                  dVar100 = (dVar77 + dVar77) * dVar85;
                  local_1b8 = (dVar77 * dVar102 + dVar88 * dVar85) * dVar104;
                  local_1d8 = (dVar88 * dVar77 - dVar102 * dVar85) * dVar87;
                  dStack_1b0 = (dVar102 * dVar86 - dVar100) * dVar104;
                  local_578 = (undefined ***)(dVar93 * (double)pppuVar35);
                  ppuStack_570 = (undefined **)(dVar99 * dVar87);
                  local_1f8 = (1.0 - (dVar105 * dVar102 + dVar86 * dVar88)) * (double)pppuVar35;
                  dStack_1d0 = (1.0 - (dVar105 * dVar102 + dVar92)) * dVar87;
                  dStack_1f0 = (dVar88 * dVar77 + dVar102 * dVar85) * (double)pppuVar35;
                  local_1c8 = (dVar102 * dVar86 + dVar100) * dVar87;
                  local_1e8 = (dVar77 * dVar102 - dVar88 * dVar85) * (double)pppuVar35;
                  uStack_1e0 = 0;
                  uStack_1c0 = 0;
                  uStack_1a0 = 0;
                  uStack_180 = 0x3ff0000000000000;
                  local_178 = local_488;
                  dStack_170 = dStack_480;
                  local_168 = local_478;
                  dStack_160 = dStack_470;
                  local_158 = (undefined ***)local_438._0_8_;
                  ppuStack_150 = (undefined **)local_438._8_8_;
                  local_148 = local_458;
                  dStack_140 = dStack_450;
                  local_138 = local_448;
                  dStack_130 = dStack_440;
                  local_128 = local_468;
                  dStack_120 = dStack_460;
                  local_118 = (undefined ***)local_4b8._0_8_;
                  ppuStack_110 = (undefined **)local_4b8._8_8_;
                  local_108 = (undefined **)local_498._0_8_;
                  dStack_100 = (double)local_498._8_8_;
                  local_198 = pppuVar30;
                  ppuStack_190 = ppuVar108;
                  local_188 = ppuVar98;
                  FUN_1447fea8d(&local_338,&local_1f8,&local_178);
                  ppuVar98 = ppuStack_570;
                  pppuVar35 = local_578;
                  auVar73 = _DAT_149934d80;
                  local_538 = local_328;
                  dVar87 = (double)local_328 * (double)local_328 +
                           (double)local_338 * (double)local_338 + local_330 * local_330;
                  dVar93 = local_308 * local_308 +
                           (double)local_318 * (double)local_318 + local_310 * local_310;
                  dVar99 = local_2e8 * local_2e8 + local_2f8 * local_2f8 + local_2f0 * local_2f0;
                  uVar42 = -(ulonglong)(0.0 <= dVar87 + -9.99999993922529e-09);
                  dVar92 = (double)(~uVar42 & 0x3ff0000000000000 |
                                   (ulonglong)(1.0 / SQRT(dVar87)) & uVar42);
                  uVar42 = -(ulonglong)(0.0 <= dVar93 + -9.99999993922529e-09);
                  dVar93 = (double)(~uVar42 & 0x3ff0000000000000 |
                                   (ulonglong)(1.0 / SQRT(dVar93)) & uVar42);
                  uVar42 = -(ulonglong)(0.0 <= dVar99 + -9.99999993922529e-09);
                  dVar99 = (double)(~uVar42 & 0x3ff0000000000000 |
                                   (ulonglong)(1.0 / SQRT(dVar99)) & uVar42);
                  dVar104 = (double)local_598._0_8_;
                  dVar87 = (double)local_598._8_8_;
                  auVar52._8_8_ = -(ulonglong)(0.0 <= (double)ppuStack_570);
                  auVar52._0_8_ = -(ulonglong)(0.0 <= (double)local_578);
                  auVar81 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar52);
                  dVar105 = (double)(~-(ulonglong)(0.0 <= (double)local_598._0_8_) &
                                     0xbff0000000000000 |
                                    -(ulonglong)(0.0 <= (double)local_598._0_8_) &
                                    0x3ff0000000000000);
                  dVar85 = auVar81._0_8_;
                  local_338 = (undefined **)((double)local_338 * dVar92 * dVar85);
                  local_330 = local_330 * dVar92 * dVar85;
                  local_328 = (undefined ***)(dVar92 * (double)local_328 * dVar85);
                  dVar92 = auVar81._8_8_;
                  local_308 = dVar93 * local_308 * dVar92;
                  local_310 = local_310 * dVar93 * dVar92;
                  local_318 = (undefined ***)(dVar92 * (double)local_318 * dVar93);
                  local_2e8 = dVar99 * local_2e8 * dVar105;
                  local_2f0 = local_2f0 * dVar99 * dVar105;
                  local_2f8 = dVar105 * local_2f8 * dVar99;
                  FUN_14481fd10(&local_358,&local_338);
                  dVar92 = local_348 * local_348 + local_358 * local_358;
                  dVar93 = dStack_340 * dStack_340 + dStack_350 * dStack_350;
                  auVar63._0_8_ = dVar92 + dVar93;
                  auVar63._8_8_ = dVar92 + dVar93;
                  auVar53._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar63._8_8_);
                  auVar53._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar63._0_8_);
                  auVar81 = sqrtpd(auVar63,auVar63);
                  auVar73 = divpd(auVar73,auVar81);
                  auVar84._0_8_ = auVar73._0_8_ * local_348;
                  auVar84._8_8_ = auVar73._8_8_ * dStack_340;
                  dVar100 = (double)((ulonglong)(local_358 * auVar73._0_8_) &
                                    -(ulonglong)(9.99999993922529e-09 <= auVar63._0_8_));
                  dVar76 = (double)((ulonglong)(dStack_350 * auVar73._8_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar63._8_8_));
                  auVar111 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar84,auVar53);
                  auVar54._8_8_ = 0.0;
                  auVar54._0_8_ = (double)local_2c8;
                  pppuVar30 = local_2d8;
                  ppuVar58 = ppuStack_2d0;
                }
                *(double *)((longlong)local_588 + (longlong)local_4d8 + 0x10) = dVar100;
                *(double *)((longlong)local_588 + (longlong)local_4d8 + 0x18) = dVar76;
                *(undefined1 (*) [16])((longlong)local_588 + (longlong)local_4d8 + 0x20) = auVar111;
                *(undefined ****)((longlong)local_588 + (longlong)local_4d8 + 0x30) = pppuVar30;
                *(undefined ***)((longlong)local_588 + (longlong)local_4d8 + 0x38) = ppuVar58;
                *(undefined1 (*) [16])((longlong)local_588 + (longlong)local_4d8 + 0x40) = auVar54;
                *(undefined ****)((longlong)local_588 + (longlong)local_4d8 + 0x50) = pppuVar35;
                *(undefined ***)((longlong)local_588 + (longlong)local_4d8 + 0x58) = ppuVar98;
                *(double *)((longlong)local_588 + (longlong)local_4d8 + 0x60) = dVar104;
                *(double *)((longlong)local_588 + (longlong)local_4d8 + 0x68) = dVar87;
                *(undefined1 *)((longlong)local_588 + (longlong)local_4d8 + 0x70) = 1;
                ppuVar58 = local_528;
                dVar87 = dStack_520;
                dVar92 = local_4c8;
                dVar93 = dStack_4c0;
                dVar99 = local_568;
                pppuVar41 = pppuStack_560;
                pppuVar94 = local_518;
                pppuVar97 = pppuStack_510;
              }
              uVar13 = uVar13 & ~(uint)uVar40;
              puVar16 = local_228;
              if (local_228 == (uint *)0x0) {
                puVar16 = local_238;
              }
              pppuVar15 = (undefined ***)(ulonglong)local_220;
              iVar28 = (int)uVar38;
              pppuVar30 = (undefined ***)(longlong)iVar28;
              uVar27 = puVar16[(longlong)pppuVar30] & uVar13;
              pppuVar35 = pppuVar30;
              if (uVar27 == 0) {
                uVar27 = local_220 - 1;
                uVar22 = local_220 + 0x1e;
                if (-1 < (int)uVar27) {
                  uVar22 = uVar27;
                }
                iVar21 = (int)uVar22 >> 5;
                iVar20 = iVar20 + 0x20;
                iVar26 = iVar21;
                if (iVar21 < iVar28) {
                  iVar26 = iVar28;
                }
                if (iVar28 < iVar21) {
                  uVar22 = iVar26 + 1;
                  pppuVar35 = (undefined ***)0x0;
                  do {
                    uVar27 = puVar16[(longlong)
                                     ((longlong)pppuVar30 + (longlong)((longlong)pppuVar35 + 1))];
                    if (uVar27 != 0) {
                      uVar38 = (ulonglong)(iVar28 + (int)pppuVar35 + 1);
                      uVar13 = 0xffffffff;
                      goto LAB_1445877c0;
                    }
                    iVar20 = iVar20 + 0x20;
                    pppuVar35 = (undefined ***)((longlong)pppuVar35 + 1);
                  } while ((undefined ***)((longlong)iVar26 - (longlong)pppuVar30) != pppuVar35);
                  uVar13 = 0xffffffff;
                  uVar27 = 0;
                }
                else {
                  pppuVar35 = (undefined ***)((longlong)pppuVar30 + 1);
                  uVar22 = (uint)pppuVar35;
                }
                uVar38 = (ulonglong)uVar22;
                pppuVar30 = (undefined ***)(ulonglong)uVar27;
              }
              else {
LAB_1445877c0:
                uVar40 = (ulonglong)(-uVar27 & uVar27);
                uVar42 = uVar40 * 2 + 1;
                lVar14 = 0x3f;
                if (uVar42 != 0) {
                  for (; uVar42 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                  }
                }
                uVar27 = (iVar20 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
                if ((int)local_220 <= (int)uVar27) {
                  uVar27 = local_220;
                }
                pppuVar15 = (undefined ***)(ulonglong)uVar27;
                pppuVar30 = pppuVar15;
              }
            } while ((uint)pppuVar15 != uVar11);
          }
        }
        else {
          puVar16 = local_228;
          if (local_228 == (uint *)0x0) {
            puVar16 = local_238;
          }
          uVar13 = *puVar16;
          if (uVar13 != 0) {
            uVar38 = 0;
            iVar20 = 0;
LAB_144587383:
            pppuVar30 = (undefined ***)(ulonglong)uVar13;
            uVar40 = (ulonglong)(-uVar13 & uVar13);
            uVar42 = uVar40 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar42 != 0) {
              for (; uVar42 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            uVar13 = (iVar20 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
            if ((int)local_220 <= (int)uVar13) {
              uVar13 = local_220;
            }
            pppuVar15 = (undefined ***)(ulonglong)uVar13;
            goto LAB_1445873b8;
          }
          iVar20 = local_220 + 0x1e;
          if (-1 < (int)(local_220 - 1)) {
            iVar20 = local_220 - 1;
          }
          uVar38 = 0;
          uVar40 = (ulonglong)(uint)(iVar20 >> 5);
          if (iVar20 >> 5 < 1) {
            uVar40 = uVar38;
          }
          iVar20 = 0;
          while (uVar40 != uVar38) {
            iVar20 = iVar20 + 0x20;
            uVar13 = puVar16[uVar38 + 1];
            uVar38 = uVar38 + 1;
            if (uVar13 != 0) goto LAB_144587383;
          }
        }
        lVar36 = local_420;
        lVar14 = local_540;
        if (((*(char *)(uVar31 + 0x1c0) < '\0') || ((*(byte *)(uVar31 + 0x1c1) & 0x10) != 0)) &&
           ((*(longlong *)(local_420 + 0x58) != 0 &&
            ((plVar37 = (longlong *)local_4f0[1], plVar37 != (longlong *)0x0 &&
             (lVar23 = plVar37[1], (longlong)(int)lVar23 != 0)))))) {
          lVar24 = *plVar37;
          lVar39 = 0;
          do {
            iVar20 = *(int *)(lVar24 + lVar39);
            if ((-1 < (longlong)iVar20) && (iVar20 < (int)(*(longlong **)(lVar36 + 0x58))[1])) {
              lVar19 = **(longlong **)(lVar36 + 0x58);
              lVar17 = (longlong)iVar20 * 0x98;
              iVar20 = *(int *)(lVar19 + 0x90 + lVar17);
              if (-1 < iVar20) {
                FUN_1496ddf4c(&local_338,iVar20,lVar19 + lVar17,local_3b8);
                lVar19 = FUN_1496ece12(lVar14,DAT_14cc22420);
                if (*(longlong *)(lVar19 + 8) != 0) {
                  FUN_1496e5d84(lVar19);
                }
              }
            }
            lVar39 = lVar39 + 4;
          } while ((longlong)(int)lVar23 * 4 != lVar39);
        }
        bVar10 = *(byte *)(uVar31 + 0x1c1);
        if ((((((bVar10 & 0x20) == 0 & (bVar10 ^ 1)) == 0) && (*(longlong *)(lVar36 + 0x60) != 0))
            && (plVar37 = (longlong *)local_4f0[2], plVar37 != (longlong *)0x0)) &&
           (lVar23 = plVar37[1], (longlong)(int)lVar23 != 0)) {
          lVar24 = *plVar37;
          lVar39 = 0;
          do {
            iVar20 = *(int *)(lVar24 + lVar39);
            if ((-1 < (longlong)iVar20) && (iVar20 < (int)(*(longlong **)(lVar36 + 0x60))[1])) {
              FUN_1496de240(&local_338,(longlong)iVar20 * 0x120 + **(longlong **)(lVar36 + 0x60),
                            local_3b8);
              lVar19 = FUN_1496ecfa4(lVar14,DAT_14cc22428);
              if (*(longlong *)(lVar19 + 8) != 0) {
                FUN_1496e5d84(lVar19);
              }
            }
            lVar39 = lVar39 + 4;
          } while ((longlong)(int)lVar23 * 4 != lVar39);
          bVar10 = *(byte *)(uVar31 + 0x1c1);
        }
        if ((((bVar10 & 2) != 0) && (*(longlong *)(lVar36 + 0x68) != 0)) &&
           ((plVar37 = (longlong *)local_4f0[3], plVar37 != (longlong *)0x0 &&
            (lVar23 = plVar37[1], (longlong)(int)lVar23 != 0)))) {
          lVar24 = *plVar37;
          lVar39 = 0;
          do {
            iVar20 = *(int *)(lVar24 + lVar39);
            if ((-1 < (longlong)iVar20) && (iVar20 < (int)(*(longlong **)(lVar36 + 0x68))[1])) {
              lVar19 = **(longlong **)(lVar36 + 0x68);
              lVar17 = (longlong)iVar20 * 0x90;
              iVar20 = *(int *)(lVar19 + 0x88 + lVar17);
              if (-1 < iVar20) {
                FUN_1496de8d8(&local_338,iVar20,lVar19 + lVar17,local_3b8);
                lVar19 = FUN_1496ed136(lVar14,DAT_14cc22430);
                if (*(longlong *)(lVar19 + 8) != 0) {
                  FUN_1496e5d84(lVar19);
                }
              }
            }
            lVar39 = lVar39 + 4;
          } while ((longlong)(int)lVar23 * 4 != lVar39);
        }
        if (*(int *)(lVar14 + 0x14) != *(int *)(lVar14 + 0x10)) {
          FUN_1496ec534(local_548);
        }
        plVar37 = local_428;
        if (local_3c8 != 0) {
          FUN_1400020a8();
        }
        local_200 = 0;
        if (local_208 != 0) {
          FUN_1400020a8();
        }
        uVar31 = uStack_240 >> 0x20;
        uStack_240 = uStack_240 & 0xffffffff00000000;
        if ((int)uVar31 != 0) {
          FUN_1447a08a2(&local_248,0);
        }
        uStack_218 = 0xffffffff;
        local_214 = 0;
        local_220 = 0;
        if (0x80 < local_21c) {
          local_21c = 0x80;
          FUN_1446efbd8(local_238,0);
        }
        if (local_228 != (uint *)0x0) {
          FUN_1400020a8();
        }
        if (local_248 != 0) {
          FUN_1400020a8();
        }
      }
      if (plVar37 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar37 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar37)(plVar37);
          LOCK();
          piVar3 = (int *)((longlong)plVar37 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar37 + 0x10))(plVar37);
          }
        }
      }
    }
  }
LAB_144588b92:
  if ((local_f0 ^ (ulonglong)auStack_5b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144588c92 FUN_144588c92 body=4757 status=ok
// SIG undefined FUN_144588c92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_144588c92(longlong param_1,float *param_2,undefined8 *param_3,float *param_4)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  float *pfVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  float *pfVar24;
  float *pfVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  float *local_130;
  float *local_128;
  float *local_120;
  ulonglong local_118;
  longlong local_110;
  uint *local_108;
  float *local_100;
  float *local_f8;
  float *local_f0;
  ulonglong local_e8;
  float *local_e0;
  undefined4 local_d8 [24];
  longlong local_78;
  undefined4 *local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_f0 = param_4;
  FUN_1496e8e34(param_2);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc22648) && (FUN_144b3d300(&DAT_14cc22648), DAT_14cc22648 == -1)) {
    _DAT_14cc22618 = 0;
    _DAT_14cc22620 = 0;
    _DAT_14cc225f8 = 0;
    uRam000000014cc22600 = 0;
    _DAT_14cc22624 = 0xffffffff00000080;
    _DAT_14cc2262c = 0;
    DAT_14cc22638 = 0;
    _DAT_14cc22640 = 0;
    atexit(FUN_14458ecb1);
    _Init_thread_footer(&DAT_14cc22648);
  }
  if (*(int *)(param_1 + 0x314) == 0) goto LAB_1445899a0;
  *param_2 = ((float *)*param_3)[1] + *(float *)*param_3;
  local_128 = param_2;
  local_110 = param_1;
  if (*(char *)(param_3 + 1) == '\0') {
    bVar1 = *(byte *)((longlong)param_3 + 9);
    if ((((bVar1 == 0) && (*(char *)((longlong)param_3 + 10) == '\0')) &&
        (*(char *)(param_3 + 4) == '\0')) && (*(char *)((longlong)param_3 + 0x21) != '\x01'))
    goto LAB_1445899a0;
    uVar4 = *(uint *)(param_3 + 3);
    uVar3 = *(uint *)(param_1 + 0x50);
    if ((int)uVar4 < 1 || (int)uVar3 <= (int)uVar4) goto LAB_144588e60;
LAB_144588daf:
    pfVar25 = (float *)(ulonglong)uVar4;
    pfVar17 = (float *)(param_1 + 0x50);
    if ((bVar1 & 1) != 0) {
      FUN_1496e8ecc(param_2 + 10,pfVar25);
    }
    local_120 = pfVar25;
    local_100 = pfVar17;
    if (*(char *)(param_3 + 4) == '\x01') {
      local_f8 = (float *)(param_1 + 0x78);
      uVar3 = *(uint *)(param_1 + 0x90);
      local_130 = (float *)CONCAT44(local_130._4_4_,uVar4);
      if (uVar3 == 0) {
        uVar22 = 1;
        iVar21 = 0;
        uVar23 = 0;
        uVar4 = 0;
      }
      else {
        puVar5 = *(uint **)(param_1 + 0x88);
        if (*(uint **)(param_1 + 0x88) == (uint *)0x0) {
          puVar5 = (uint *)local_f8;
        }
        uVar4 = *puVar5;
        if (uVar4 == 0) {
          iVar21 = uVar3 + 0x1e;
          if (-1 < (int)(uVar3 - 1)) {
            iVar21 = uVar3 - 1;
          }
          uVar23 = 0;
          uVar22 = (ulonglong)(uint)(iVar21 >> 5);
          if (iVar21 >> 5 < 1) {
            uVar22 = uVar23;
          }
          iVar21 = 0;
          do {
            if (uVar22 == uVar23) goto LAB_1445895bd;
            iVar21 = iVar21 + 0x20;
            uVar4 = puVar5[uVar23 + 1];
            uVar23 = uVar23 + 1;
          } while (uVar4 == 0);
        }
        else {
          iVar21 = 0;
          uVar23 = 0;
        }
        uVar22 = (ulonglong)(-uVar4 & uVar4);
        uVar15 = uVar22 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar4 = (iVar21 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if ((int)uVar3 <= (int)uVar4) {
          uVar4 = uVar3;
        }
      }
      if (uVar4 != uVar3) {
        local_e0 = param_2 + 0x22;
        uVar8 = 0xffffffff;
        local_118 = (ulonglong)uVar3;
        do {
          local_108 = (uint *)CONCAT44(local_108._4_4_,iVar21);
          lVar13 = *(longlong *)(param_1 + 0x68) + (longlong)(int)uVar4 * 0x20;
          uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)(int)uVar4 * 0x20);
          uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
          uVar4 = (uint)uVar2 & 0xffff;
          local_e8 = uVar23;
          plVar6 = (longlong *)
                   FUN_1496f1934(local_e0,((uint)uVar2 << 0x10 | uVar4) +
                                          (int)((ulonglong)uVar2 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4),lVar13);
          local_d8[0] = 0;
          FUN_1448158c6(plVar6,local_d8,pfVar25);
          pfVar17 = local_120;
          pfVar25 = (float *)0x0;
          do {
            lVar19 = (longlong)*(int *)(param_3[2] + (longlong)pfVar25 * 4);
            uVar27 = FUN_1448c9f94(lVar19 * 0x80 + *(longlong *)(lVar13 + 8),
                                   ((float *)*param_3)[1] + *(float *)*param_3,0);
            *(undefined4 *)(*plVar6 + lVar19 * 4) = uVar27;
            pfVar25 = (float *)((longlong)pfVar25 + 1);
          } while (pfVar17 != pfVar25);
          uVar8 = uVar8 & ~(uint)uVar22;
          pfVar17 = (float *)*(uint **)(local_110 + 0x88);
          if (*(uint **)(local_110 + 0x88) == (uint *)0x0) {
            pfVar17 = local_f8;
          }
          uVar3 = *(uint *)(local_110 + 0x90);
          iVar12 = (int)local_e8;
          lVar13 = (longlong)iVar12;
          uVar4 = (uint)pfVar17[lVar13] & uVar8;
          uVar23 = local_e8;
          iVar21 = (int)local_108;
          if (uVar4 == 0) {
            iVar10 = uVar3 + 0x1e;
            if (-1 < (int)(uVar3 - 1)) {
              iVar10 = uVar3 - 1;
            }
            iVar10 = iVar10 >> 5;
            iVar21 = (int)local_108 + 0x20;
            iVar7 = iVar10;
            if (iVar10 < iVar12) {
              iVar7 = iVar12;
            }
            if (iVar12 < iVar10) {
              lVar19 = 0;
              do {
                uVar4 = (uint)pfVar17[lVar13 + lVar19 + 1];
                if (uVar4 != 0) {
                  uVar8 = 0xffffffff;
                  uVar23 = (ulonglong)(iVar12 + (int)lVar19 + 1);
                  goto LAB_1445897be;
                }
                iVar21 = iVar21 + 0x20;
                lVar19 = lVar19 + 1;
              } while (iVar7 - lVar13 != lVar19);
              uVar8 = 0xffffffff;
              iVar12 = iVar7;
            }
            uVar23 = (ulonglong)(iVar12 + 1);
            uVar4 = uVar3;
          }
          else {
LAB_1445897be:
            uVar22 = (ulonglong)(-uVar4 & uVar4);
            uVar15 = uVar22 * 2 + 1;
            lVar13 = 0x3f;
            if (uVar15 != 0) {
              for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            uVar4 = (iVar21 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
            if ((int)uVar3 <= (int)uVar4) {
              uVar4 = uVar3;
            }
          }
          pfVar25 = (float *)((ulonglong)local_130 & 0xffffffff);
          param_2 = local_128;
          param_1 = local_110;
        } while (uVar4 != (uint)local_118);
      }
LAB_1445895bd:
      local_f8 = (float *)(param_1 + 200);
      uVar3 = *(uint *)(param_1 + 0xe0);
      if (uVar3 == 0) {
        uVar22 = 1;
        uVar23 = 0;
        iVar21 = 0;
        uVar4 = 0;
      }
      else {
        pfVar17 = *(float **)(param_1 + 0xd8);
        if (*(float **)(param_1 + 0xd8) == (float *)0x0) {
          pfVar17 = local_f8;
        }
        fVar26 = *pfVar17;
        if (fVar26 == 0.0) {
          iVar21 = uVar3 + 0x1e;
          if (-1 < (int)(uVar3 - 1)) {
            iVar21 = uVar3 - 1;
          }
          uVar23 = 0;
          uVar22 = (ulonglong)(uint)(iVar21 >> 5);
          if (iVar21 >> 5 < 1) {
            uVar22 = uVar23;
          }
          iVar21 = 0;
          do {
            if (uVar22 == uVar23) goto LAB_144589834;
            iVar21 = iVar21 + 0x20;
            fVar26 = pfVar17[uVar23 + 1];
            uVar23 = uVar23 + 1;
          } while (fVar26 == 0.0);
        }
        else {
          uVar23 = 0;
          iVar21 = 0;
        }
        uVar22 = (ulonglong)(-(int)fVar26 & (uint)fVar26);
        uVar15 = uVar22 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar4 = (iVar21 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if ((int)uVar3 <= (int)uVar4) {
          uVar4 = uVar3;
        }
      }
      if (uVar4 != uVar3) {
        local_e0 = param_2 + 0x22;
        uVar8 = 0xffffffff;
        local_118 = (ulonglong)uVar3;
        do {
          local_108 = (uint *)CONCAT44(local_108._4_4_,iVar21);
          lVar13 = *(longlong *)(param_1 + 0xb8) + (longlong)(int)uVar4 * 0x20;
          uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (longlong)(int)uVar4 * 0x20);
          uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
          uVar4 = (uint)uVar2 & 0xffff;
          local_e8 = uVar23;
          plVar6 = (longlong *)
                   FUN_1496f1934(local_e0,((uint)uVar2 << 0x10 | uVar4) +
                                          (int)((ulonglong)uVar2 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4),lVar13);
          local_d8[0] = 0;
          FUN_1448158c6(plVar6,local_d8,pfVar25);
          pfVar17 = local_120;
          lVar19 = 0;
          pfVar25 = (float *)0x0;
          do {
            uVar27 = FUN_147a43122(*(longlong *)(lVar13 + 8) + lVar19,
                                   ((float *)*param_3)[1] + *(float *)*param_3,0);
            *(undefined4 *)(*plVar6 + (longlong)pfVar25 * 4) = uVar27;
            pfVar25 = (float *)((longlong)pfVar25 + 1);
            lVar19 = lVar19 + 0x18;
          } while (pfVar17 != pfVar25);
          uVar8 = uVar8 & ~(uint)uVar22;
          pfVar17 = *(float **)(local_110 + 0xd8);
          if (*(float **)(local_110 + 0xd8) == (float *)0x0) {
            pfVar17 = local_f8;
          }
          uVar3 = *(uint *)(local_110 + 0xe0);
          iVar12 = (int)local_e8;
          lVar13 = (longlong)iVar12;
          fVar26 = (float)((uint)pfVar17[lVar13] & uVar8);
          uVar23 = local_e8;
          iVar21 = (int)local_108;
          if (fVar26 == 0.0) {
            iVar10 = uVar3 + 0x1e;
            if (-1 < (int)(uVar3 - 1)) {
              iVar10 = uVar3 - 1;
            }
            iVar10 = iVar10 >> 5;
            iVar21 = (int)local_108 + 0x20;
            iVar7 = iVar10;
            if (iVar10 < iVar12) {
              iVar7 = iVar12;
            }
            if (iVar12 < iVar10) {
              lVar19 = 0;
              do {
                fVar26 = pfVar17[lVar13 + lVar19 + 1];
                if (fVar26 != 0.0) {
                  uVar8 = 0xffffffff;
                  uVar23 = (ulonglong)(iVar12 + (int)lVar19 + 1);
                  goto LAB_144589b49;
                }
                iVar21 = iVar21 + 0x20;
                lVar19 = lVar19 + 1;
              } while (iVar7 - lVar13 != lVar19);
              uVar8 = 0xffffffff;
              iVar12 = iVar7;
            }
            uVar23 = (ulonglong)(iVar12 + 1);
            uVar4 = uVar3;
          }
          else {
LAB_144589b49:
            uVar22 = (ulonglong)(-(int)fVar26 & (uint)fVar26);
            uVar15 = uVar22 * 2 + 1;
            lVar13 = 0x3f;
            if (uVar15 != 0) {
              for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            uVar4 = (iVar21 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
            if ((int)uVar3 <= (int)uVar4) {
              uVar4 = uVar3;
            }
          }
          pfVar25 = (float *)((ulonglong)local_130 & 0xffffffff);
          param_2 = local_128;
          param_1 = local_110;
        } while (uVar4 != (uint)local_118);
      }
LAB_144589834:
      pfVar17 = local_100;
      if (0 < *(int *)(param_1 + 0x60)) {
        FUN_14054c6c4(param_2 + 2,param_1 + 0x58);
      }
    }
    local_130 = param_2 + 2;
    lVar13 = 0;
    lVar19 = 0;
    pfVar24 = (float *)0x0;
    pfVar25 = local_120;
    do {
      iVar21 = *(int *)(param_3[2] + (longlong)pfVar24 * 4);
      if ((-1 < (longlong)iVar21) && (iVar21 < (int)*pfVar17)) {
        lVar9 = *(longlong *)(param_2 + 6) + lVar13;
        if (*(char *)(param_3 + 1) == '\0') {
          lVar9 = 0;
        }
        lVar11 = *(longlong *)(param_2 + 10) + lVar19;
        if (*(char *)((longlong)param_3 + 9) == '\0') {
          lVar11 = 0;
        }
        iVar12 = -1;
        if (iVar21 < *(int *)(param_1 + 0x40)) {
          iVar12 = *(int *)(*(longlong *)(local_110 + 0x38) + (longlong)iVar21 * 4);
        }
        fVar26 = param_2[4];
        param_2[4] = (float)((int)fVar26 + 1U);
        if ((uint)param_2[5] < (int)fVar26 + 1U) {
          local_108 = (uint *)CONCAT44(local_108._4_4_,iVar12);
          FUN_1446f48e2(local_130,fVar26);
          iVar12 = (int)local_108;
        }
        param_1 = local_110;
        param_2 = local_128;
        *(int *)(*(longlong *)local_130 + (longlong)(int)fVar26 * 4) = iVar12;
        if (local_f0 == (float *)0x0) {
          lVar18 = 0;
        }
        else {
          lVar18 = 0;
          if (iVar12 != -1) {
            lVar18 = (longlong)iVar12 * 0x60 + *(longlong *)local_f0;
          }
        }
        local_148 = lVar9;
        local_140 = lVar11;
        FUN_1496e4900(local_110,iVar21,*param_3,lVar18);
        pfVar17 = local_100;
        pfVar25 = local_120;
      }
      pfVar24 = (float *)((longlong)pfVar24 + 1);
      lVar19 = lVar19 + 0x50;
      lVar13 = lVar13 + 0x60;
    } while (pfVar25 != pfVar24);
  }
  else {
    uVar4 = *(uint *)(param_3 + 3);
    uVar3 = *(uint *)(param_1 + 0x50);
    if ((int)uVar4 < (int)uVar3 && 0 < (int)uVar4) {
      FUN_146bff40c(param_2 + 6,&DAT_14c846480,uVar4);
      bVar1 = *(byte *)((longlong)param_3 + 9);
      goto LAB_144588daf;
    }
    if ((int)uVar3 < 0) goto LAB_144589f19;
    if ((int)param_2[9] < (int)uVar3) {
      FUN_1401a2688(param_2 + 6,uVar3);
    }
LAB_144588e60:
    if (*(char *)((longlong)param_3 + 9) == '\x01') {
      if ((int)uVar3 < 0) {
LAB_144589f19:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar3);
      }
      if ((int)param_2[0xd] < (int)uVar3) {
        FUN_1496f18c4(param_2 + 10,uVar3);
      }
    }
    if (*(char *)(param_3 + 4) == '\x01') {
      uVar4 = uVar3;
      if ((int)uVar3 < 1) {
        uVar4 = *(uint *)(param_1 + 0x60);
      }
      local_120 = (float *)CONCAT44(local_120._4_4_,uVar4);
      local_108 = (uint *)(param_1 + 0x78);
      uVar8 = *(uint *)(param_1 + 0x90);
      local_e8 = CONCAT44(local_e8._4_4_,uVar3);
      if (uVar8 == 0) {
        uVar23 = 1;
        uVar22 = 0;
        iVar21 = 0;
        uVar3 = 0;
      }
      else {
        puVar5 = *(uint **)(param_1 + 0x88);
        if (*(uint **)(param_1 + 0x88) == (uint *)0x0) {
          puVar5 = local_108;
        }
        uVar3 = *puVar5;
        if (uVar3 == 0) {
          iVar21 = uVar8 + 0x1e;
          if (-1 < (int)(uVar8 - 1)) {
            iVar21 = uVar8 - 1;
          }
          uVar22 = 0;
          uVar23 = (ulonglong)(uint)(iVar21 >> 5);
          if (iVar21 >> 5 < 1) {
            uVar23 = uVar22;
          }
          iVar21 = 0;
          do {
            if (uVar23 == uVar22) goto LAB_144588f36;
            iVar21 = iVar21 + 0x20;
            uVar3 = puVar5[uVar22 + 1];
            uVar22 = uVar22 + 1;
          } while (uVar3 == 0);
        }
        else {
          uVar22 = 0;
          iVar21 = 0;
        }
        uVar23 = (ulonglong)(-uVar3 & uVar3);
        uVar15 = uVar23 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar3 = (iVar21 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if ((int)uVar8 <= (int)uVar3) {
          uVar3 = uVar8;
        }
      }
      if (uVar3 != uVar8) {
        local_f8 = param_2 + 0x22;
        uVar20 = 0xffffffff;
        local_118 = (ulonglong)uVar8;
        do {
          local_100 = (float *)CONCAT44(local_100._4_4_,uVar20);
          local_130 = (float *)CONCAT44(local_130._4_4_,iVar21);
          lVar13 = *(longlong *)(param_1 + 0x68) + (longlong)(int)uVar3 * 0x20;
          uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)(int)uVar3 * 0x20);
          uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
          uVar8 = (uint)uVar2 & 0xffff;
          plVar6 = (longlong *)
                   FUN_1496f1934(local_f8,((uint)uVar2 << 0x10 | uVar8) +
                                          (int)((ulonglong)uVar2 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4),lVar13);
          local_d8[0] = 0;
          iVar21 = (int)local_120;
          FUN_1448158c6(plVar6,local_d8,(ulonglong)local_120 & 0xffffffff);
          if (0 < iVar21) {
            lVar19 = 0;
            uVar15 = 0;
            do {
              uVar27 = FUN_1448c9f94(*(longlong *)(lVar13 + 8) + lVar19,
                                     ((float *)*param_3)[1] + *(float *)*param_3,0);
              *(undefined4 *)(*plVar6 + uVar15 * 4) = uVar27;
              uVar15 = uVar15 + 1;
              lVar19 = lVar19 + 0x80;
            } while (uVar4 != uVar15);
          }
          uVar20 = (uint)local_100 & ~(uint)uVar23;
          puVar5 = *(uint **)(local_110 + 0x88);
          if (*(uint **)(local_110 + 0x88) == (uint *)0x0) {
            puVar5 = local_108;
          }
          uVar8 = *(uint *)(local_110 + 0x90);
          iVar12 = (int)uVar22;
          lVar13 = (longlong)iVar12;
          uVar3 = puVar5[lVar13] & uVar20;
          iVar21 = (int)local_130;
          if (uVar3 == 0) {
            iVar10 = uVar8 + 0x1e;
            if (-1 < (int)(uVar8 - 1)) {
              iVar10 = uVar8 - 1;
            }
            iVar10 = iVar10 >> 5;
            iVar21 = (int)local_130 + 0x20;
            iVar7 = iVar10;
            if (iVar10 < iVar12) {
              iVar7 = iVar12;
            }
            if (iVar12 < iVar10) {
              lVar19 = 0;
              do {
                uVar3 = puVar5[lVar13 + lVar19 + 1];
                if (uVar3 != 0) {
                  uVar22 = (ulonglong)(iVar12 + (int)lVar19 + 1);
                  uVar20 = 0xffffffff;
                  goto LAB_14458913b;
                }
                iVar21 = iVar21 + 0x20;
                lVar19 = lVar19 + 1;
              } while (iVar7 - lVar13 != lVar19);
              uVar20 = 0xffffffff;
              iVar12 = iVar7;
            }
            uVar22 = (ulonglong)(iVar12 + 1);
            uVar3 = uVar8;
          }
          else {
LAB_14458913b:
            uVar23 = (ulonglong)(-uVar3 & uVar3);
            uVar15 = uVar23 * 2 + 1;
            lVar13 = 0x3f;
            if (uVar15 != 0) {
              for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            uVar3 = (iVar21 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
            if ((int)uVar8 <= (int)uVar3) {
              uVar3 = uVar8;
            }
          }
          param_2 = local_128;
          param_1 = local_110;
        } while (uVar3 != (uint)local_118);
      }
LAB_144588f36:
      local_108 = (uint *)(param_1 + 200);
      uVar3 = *(uint *)(param_1 + 0xe0);
      if (uVar3 == 0) {
        uVar23 = 1;
        uVar22 = 0;
        iVar21 = 0;
        uVar4 = 0;
      }
      else {
        puVar5 = *(uint **)(param_1 + 0xd8);
        if (*(uint **)(param_1 + 0xd8) == (uint *)0x0) {
          puVar5 = local_108;
        }
        uVar4 = *puVar5;
        if (uVar4 == 0) {
          iVar21 = uVar3 + 0x1e;
          if (-1 < (int)(uVar3 - 1)) {
            iVar21 = uVar3 - 1;
          }
          uVar22 = 0;
          uVar23 = (ulonglong)(uint)(iVar21 >> 5);
          if (iVar21 >> 5 < 1) {
            uVar23 = uVar22;
          }
          iVar21 = 0;
          do {
            if (uVar23 == uVar22) goto LAB_1445891ae;
            iVar21 = iVar21 + 0x20;
            uVar4 = puVar5[uVar22 + 1];
            uVar22 = uVar22 + 1;
          } while (uVar4 == 0);
        }
        else {
          uVar22 = 0;
          iVar21 = 0;
        }
        uVar23 = (ulonglong)(-uVar4 & uVar4);
        uVar15 = uVar23 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar4 = (iVar21 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if ((int)uVar3 <= (int)uVar4) {
          uVar4 = uVar3;
        }
      }
      if (uVar4 != uVar3) {
        local_f8 = param_2 + 0x22;
        local_130 = (float *)((ulonglong)local_120 & 0xffffffff);
        uVar8 = 0xffffffff;
        local_118 = (ulonglong)uVar3;
        do {
          local_100 = (float *)CONCAT44(local_100._4_4_,iVar21);
          lVar13 = *(longlong *)(param_1 + 0xb8) + (longlong)(int)uVar4 * 0x20;
          uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (longlong)(int)uVar4 * 0x20);
          uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
          uVar4 = (uint)uVar2 & 0xffff;
          plVar6 = (longlong *)
                   FUN_1496f1934(local_f8,((uint)uVar2 << 0x10 | uVar4) +
                                          (int)((ulonglong)uVar2 >> 0x20) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4),lVar13);
          local_d8[0] = 0;
          iVar21 = (int)local_120;
          FUN_1448158c6(plVar6,local_d8,(ulonglong)local_120 & 0xffffffff);
          if (0 < iVar21) {
            lVar19 = 0;
            pfVar17 = (float *)0x0;
            do {
              uVar27 = FUN_147a43122(*(longlong *)(lVar13 + 8) + lVar19,
                                     ((float *)*param_3)[1] + *(float *)*param_3,0);
              *(undefined4 *)(*plVar6 + (longlong)pfVar17 * 4) = uVar27;
              pfVar17 = (float *)((longlong)pfVar17 + 1);
              lVar19 = lVar19 + 0x18;
            } while (local_130 != pfVar17);
          }
          uVar8 = uVar8 & ~(uint)uVar23;
          puVar5 = *(uint **)(local_110 + 0xd8);
          if (*(uint **)(local_110 + 0xd8) == (uint *)0x0) {
            puVar5 = local_108;
          }
          uVar3 = *(uint *)(local_110 + 0xe0);
          iVar12 = (int)uVar22;
          lVar13 = (longlong)iVar12;
          uVar4 = puVar5[lVar13] & uVar8;
          iVar21 = (uint)local_100;
          if (uVar4 == 0) {
            iVar10 = uVar3 + 0x1e;
            if (-1 < (int)(uVar3 - 1)) {
              iVar10 = uVar3 - 1;
            }
            iVar10 = iVar10 >> 5;
            iVar21 = (uint)local_100 + 0x20;
            iVar7 = iVar10;
            if (iVar10 < iVar12) {
              iVar7 = iVar12;
            }
            if (iVar12 < iVar10) {
              lVar19 = 0;
              do {
                uVar4 = puVar5[lVar13 + lVar19 + 1];
                if (uVar4 != 0) {
                  uVar22 = (ulonglong)(iVar12 + (int)lVar19 + 1);
                  uVar8 = 0xffffffff;
                  goto LAB_14458954b;
                }
                iVar21 = iVar21 + 0x20;
                lVar19 = lVar19 + 1;
              } while (iVar7 - lVar13 != lVar19);
              uVar8 = 0xffffffff;
              iVar12 = iVar7;
            }
            uVar22 = (ulonglong)(iVar12 + 1);
            uVar4 = uVar3;
          }
          else {
LAB_14458954b:
            uVar23 = (ulonglong)(-uVar4 & uVar4);
            uVar15 = uVar23 * 2 + 1;
            lVar13 = 0x3f;
            if (uVar15 != 0) {
              for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            uVar4 = (iVar21 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
            if ((int)uVar3 <= (int)uVar4) {
              uVar4 = uVar3;
            }
          }
          param_2 = local_128;
          param_1 = local_110;
        } while (uVar4 != (uint)local_118);
      }
LAB_1445891ae:
      uVar3 = (uint)local_e8;
      if (0 < *(int *)(param_1 + 0x60)) {
        FUN_14054c6c4(param_2 + 2,param_1 + 0x58);
      }
    }
    if (0 < (int)uVar3) {
      local_130 = param_2 + 6;
      local_100 = param_2 + 10;
      local_120 = param_2 + 2;
      lVar13 = 0x10;
      uVar23 = 0;
      do {
        lVar19 = *(longlong *)(param_1 + 0x48);
        fVar26 = ((float *)*param_3)[1] + *(float *)*param_3;
        if (*(float *)(lVar19 + -0x10 + lVar13 * 4) <= fVar26) {
          if (*(char *)(lVar19 + -0xc + lVar13 * 4) == '\x01') {
            lVar9 = (longlong)*(int *)(lVar19 + lVar13 * 4);
            if (lVar9 < 1) {
              fVar28 = 0.0;
            }
            else {
              fVar28 = *(float *)(*(longlong *)(lVar19 + -8 + lVar13 * 4) + -4 + lVar9 * 4);
            }
            if (fVar28 < fVar26) goto LAB_14458923d;
          }
          if (*(char *)(param_3 + 1) == '\x01') {
            fVar26 = param_2[8];
            param_2[8] = (float)((int)fVar26 + 1U);
            if ((uint)param_2[9] < (int)fVar26 + 1U) {
              FUN_144a2c682(local_130,fVar26);
            }
            puVar14 = &DAT_14c846480;
            puVar16 = (undefined8 *)((longlong)(int)fVar26 * 0x60 + *(longlong *)(param_2 + 6));
            for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
              *puVar16 = *puVar14;
              puVar14 = puVar14 + 1;
              puVar16 = puVar16 + 1;
            }
            lVar19 = (longlong)((int)param_2[8] + -1) * 0x60 + *(longlong *)(param_2 + 6);
          }
          else {
            lVar19 = 0;
          }
          if (*(char *)((longlong)param_3 + 9) == '\x01') {
            fVar26 = param_2[0xc];
            param_2[0xc] = (float)((int)fVar26 + 1U);
            if ((uint)param_2[0xd] < (int)fVar26 + 1U) {
              FUN_1496f1b0a(local_100,fVar26);
            }
            lVar9 = *(longlong *)(param_2 + 10);
            lVar11 = (longlong)(int)fVar26 * 0x50;
            *(undefined8 *)(lVar9 + 0x20 + lVar11) = 0;
            *(undefined4 *)(lVar9 + 0x28 + lVar11) = 0;
            *(undefined8 *)(lVar9 + lVar11) = 0;
            ((undefined8 *)(lVar9 + lVar11))[1] = 0;
            *(undefined8 *)(lVar9 + 0x2c + lVar11) = 0xffffffff00000080;
            *(undefined4 *)(lVar9 + 0x34 + lVar11) = 0;
            *(undefined8 *)(lVar9 + 0x40 + lVar11) = 0;
            *(undefined4 *)(lVar9 + 0x48 + lVar11) = 0;
            FUN_140d188f2(lVar9 + lVar11,&DAT_14cc225f8);
            lVar9 = (longlong)((int)param_2[0xc] + -1) * 0x50 + *(longlong *)(param_2 + 10);
          }
          else {
            lVar9 = 0;
          }
          iVar21 = -1;
          if ((longlong)uVar23 < (longlong)*(int *)(local_110 + 0x40)) {
            iVar21 = *(int *)(*(longlong *)(local_110 + 0x38) + uVar23 * 4);
          }
          fVar26 = local_128[4];
          local_128[4] = (float)((int)fVar26 + 1U);
          if ((uint)local_128[5] < (int)fVar26 + 1U) {
            FUN_1446f48e2(local_120,fVar26);
          }
          param_1 = local_110;
          *(int *)(*(longlong *)local_120 + (longlong)(int)fVar26 * 4) = iVar21;
          if (local_f0 == (float *)0x0) {
            lVar11 = 0;
          }
          else {
            lVar11 = 0;
            if (iVar21 != -1) {
              lVar11 = (longlong)iVar21 * 0x60 + *(longlong *)local_f0;
            }
          }
          local_148 = lVar19;
          local_140 = lVar9;
          FUN_1496e4900(local_110,uVar23 & 0xffffffff,*param_3,lVar11);
          param_2 = local_128;
        }
LAB_14458923d:
        uVar23 = uVar23 + 1;
        lVar13 = lVar13 + 0x26;
      } while (uVar3 != uVar23);
    }
  }
  if (*(char *)((longlong)param_3 + 10) == '\x01') {
    pfVar17 = param_2 + 0xe;
    uVar23 = (longlong)*(int *)(param_1 + 0x1c0) - (longlong)*(int *)(param_1 + 0x1ec);
    uVar3 = (uint)uVar23;
    if ((uint)((int)param_2[0x10] - (int)param_2[0x1b]) < uVar3) {
      if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b(uVar23);
      }
      FUN_1496f1b9e(pfVar17,uVar23 & 0xffffffff);
      fVar26 = 1.4013e-45;
      if (3 < uVar3) {
        uVar3 = (uVar3 | 1) + 0xe;
        iVar21 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar21 == 0; iVar21 = iVar21 + -1) {
          }
        }
        fVar26 = (float)(1 << ((byte)iVar21 & 0x1f));
      }
      if ((param_2[0x20] == 0.0) || ((int)param_2[0x20] < (int)fVar26)) {
        param_2[0x20] = fVar26;
        FUN_1496f1d3c(pfVar17);
      }
    }
    FUN_1496e8f6e(param_1,*param_3,pfVar17);
  }
  if (*(char *)((longlong)param_3 + 0x21) == '\x01') {
    local_f0 = local_128 + 0x36;
    FUN_1496f1f1a();
    lVar13 = local_110;
    local_120 = (float *)(local_110 + 0x168);
    uVar3 = *(uint *)(local_110 + 0x180);
    if (uVar3 == 0) {
      uVar22 = 1;
      uVar23 = 0;
      iVar21 = 0;
      uVar4 = 0;
    }
    else {
      pfVar17 = *(float **)(local_110 + 0x178);
      if (*(float **)(local_110 + 0x178) == (float *)0x0) {
        pfVar17 = local_120;
      }
      fVar26 = *pfVar17;
      if (fVar26 == 0.0) {
        iVar21 = uVar3 + 0x1e;
        if (-1 < (int)(uVar3 - 1)) {
          iVar21 = uVar3 - 1;
        }
        uVar23 = 0;
        uVar22 = (ulonglong)(uint)(iVar21 >> 5);
        if (iVar21 >> 5 < 1) {
          uVar22 = uVar23;
        }
        iVar21 = 0;
        do {
          if (uVar22 == uVar23) goto LAB_144589981;
          iVar21 = iVar21 + 0x20;
          fVar26 = pfVar17[uVar23 + 1];
          uVar23 = uVar23 + 1;
        } while (fVar26 == 0.0);
      }
      else {
        uVar23 = 0;
        iVar21 = 0;
      }
      uVar22 = (ulonglong)(-(int)fVar26 & (uint)fVar26);
      uVar15 = uVar22 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      uVar4 = (iVar21 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      if ((int)uVar3 <= (int)uVar4) {
        uVar4 = uVar3;
      }
    }
    if (uVar4 != uVar3) {
      uVar8 = 0xffffffff;
      local_130 = (float *)(ulonglong)uVar3;
      do {
        lVar19 = *(longlong *)(lVar13 + 0x158);
        local_148 = CONCAT71(local_148._1_7_,*(undefined1 *)(lVar13 + 0x30));
        FUN_14458ece0(lVar19 + (longlong)(int)uVar4 * 0x58 + 8,local_d8,
                      ((float *)*param_3)[1] + *(float *)*param_3,0);
        local_78 = lVar19 + (longlong)(int)uVar4 * 0x58;
        local_70 = local_d8;
        FUN_1496f1f5e(local_f0,local_64,&local_78);
        uVar8 = ~(uint)uVar22 & uVar8;
        pfVar17 = *(float **)(lVar13 + 0x178);
        if (*(float **)(lVar13 + 0x178) == (float *)0x0) {
          pfVar17 = local_120;
        }
        uVar3 = *(uint *)(lVar13 + 0x180);
        iVar12 = (int)uVar23;
        lVar19 = (longlong)iVar12;
        fVar26 = (float)((uint)pfVar17[lVar19] & uVar8);
        if (fVar26 == 0.0) {
          iVar10 = uVar3 + 0x1e;
          if (-1 < (int)(uVar3 - 1)) {
            iVar10 = uVar3 - 1;
          }
          iVar10 = iVar10 >> 5;
          iVar21 = iVar21 + 0x20;
          iVar7 = iVar10;
          if (iVar10 < iVar12) {
            iVar7 = iVar12;
          }
          if (iVar12 < iVar10) {
            lVar9 = 0;
            do {
              fVar26 = pfVar17[lVar19 + lVar9 + 1];
              if (fVar26 != 0.0) {
                uVar23 = (ulonglong)(iVar12 + (int)lVar9 + 1);
                uVar8 = 0xffffffff;
                goto LAB_144589e11;
              }
              iVar21 = iVar21 + 0x20;
              lVar9 = lVar9 + 1;
            } while (iVar7 - lVar19 != lVar9);
            uVar8 = 0xffffffff;
            iVar12 = iVar7;
          }
          uVar23 = (ulonglong)(iVar12 + 1);
          uVar4 = uVar3;
        }
        else {
LAB_144589e11:
          uVar22 = (ulonglong)(-(int)fVar26 & (uint)fVar26);
          uVar15 = uVar22 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          uVar4 = (iVar21 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
          if ((int)uVar3 <= (int)uVar4) {
            uVar4 = uVar3;
          }
        }
      } while (uVar4 != (uint)local_130);
    }
  }
LAB_144589981:
  pfVar17 = (float *)*param_3;
  pfVar17[1] = pfVar17[1] + *pfVar17;
  *(undefined4 *)*param_3 = 0;
  param_2 = local_128;
LAB_1445899a0:
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 144589f29 FUN_144589f29 body=55 status=ok
// SIG undefined FUN_144589f29(void)

void FUN_144589f29(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc22488 == 0) {
    uVar1 = FUN_140fdaba3();
    DAT_14cc22488 = FUN_14171c317(FUN_14674dd2a,uVar1,L"ECacheMode");
  }
  return;
}



// FUNCTION 144589f60 FUN_144589f60 body=55 status=ok
// SIG undefined FUN_144589f60(void)

void FUN_144589f60(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc224a0 == 0) {
    uVar1 = FUN_140fdaba3();
    DAT_14cc224a0 = FUN_14171c317(FUN_14674dd59,uVar1,L"EStartMode");
  }
  return;
}



// FUNCTION 144589f98 FUN_144589f98 body=808 status=ok
// SIG undefined FUN_144589f98(void)

void FUN_144589f98(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_30);
            goto LAB_14458a16a;
          }
        }
        _Src = (longlong *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_30) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_30,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_30,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_30,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_30,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
LAB_14458a16a:
  lVar5 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((longlong)*(int *)(param_1 + 0x3b0) != 0) {
    lVar9 = 0;
    do {
      if (*(char *)(*(longlong *)(param_1 + 0x3a8) + 0x91 + lVar9) != '\0') goto LAB_14458a1c7;
      lVar9 = lVar9 + 0x180;
    } while ((longlong)*(int *)(param_1 + 0x3b0) * 0x180 != lVar9);
  }
  if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_30);
  }
  *(longlong *)(param_1 + 0x390) = lVar5;
LAB_14458a1c7:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14458a2c2 FUN_14458a2c2 body=557 status=ok
// SIG undefined FUN_14458a2c2(void)

void FUN_14458a2c2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((*(char *)(param_1 + 0x3a1) == '\0') && (*(longlong *)(param_1 + 0x390) != 0)) &&
     (0 < *(int *)(param_1 + 0x3b0))) {
    lVar10 = 0;
    lVar8 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x3a8);
      lVar1 = lVar10 + lVar2;
      lVar5 = FUN_1496e69c2(lVar1,param_1);
      if (lVar5 != 0) {
        lVar6 = *(longlong *)(lVar2 + 0x170 + lVar10);
        if (lVar6 == 0) {
          local_78 = *(longlong *)(lVar5 + 0x10);
          if ((local_78 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c();
          }
          lVar6 = FUN_1496dd568(&local_78);
          *(longlong *)(lVar2 + 0x170 + lVar10) = lVar6;
        }
        lVar7 = *(longlong *)(lVar2 + 0xa8 + lVar10);
        if (lVar7 == 0) {
          lVar7 = FUN_1496e5194(*(undefined8 *)(param_1 + 0x390),lVar1);
          *(longlong *)(lVar2 + 0xa8 + lVar10) = lVar7;
          lVar6 = *(longlong *)(lVar2 + 0x170 + lVar10);
        }
        if ((((lVar7 != 0) && (lVar6 != 0)) &&
            ((*(float *)(lVar7 + 0x28) != 0.0 || (NAN(*(float *)(lVar7 + 0x28)))))) &&
           ((*(char *)(param_1 + 0x398) == '\x02' || (*(char *)(lVar2 + 0x79 + lVar10) == '\x01'))))
        {
          LOCK();
          *(int *)(lVar7 + 0x314) = *(int *)(lVar7 + 0x314) + 1;
          UNLOCK();
          if (*(int *)(lVar7 + 0x310) == 0) {
            plVar3 = *(longlong **)(lVar2 + 0x170 + lVar10);
            cVar4 = (**(code **)(*plVar3 + 0x88))
                              (plVar3,lVar5,*(undefined8 *)(lVar2 + 0xa8 + lVar10));
            if (cVar4 != '\0') {
              plVar3 = *(longlong **)(lVar2 + 0x170 + lVar10);
              (**(code **)(*plVar3 + 0x48))(plVar3,lVar5,lVar1);
              plVar3 = *(longlong **)(lVar2 + 0x170 + lVar10);
              puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x240);
              if (*(longlong *)(param_1 + 0x1c8) == 0) {
                puVar9 = &DAT_14c846480;
              }
              local_88 = param_2;
              (**(code **)(*plVar3 + 0x40))
                        (plVar3,lVar5,*(undefined8 *)(lVar2 + 0xa8 + lVar10),puVar9);
            }
            lVar1 = *(longlong *)(lVar2 + 0xa8 + lVar10);
            bVar11 = lVar7 != lVar1;
            lVar7 = lVar1;
            if (bVar11) goto LAB_14458a494;
          }
          LOCK();
          *(int *)(lVar7 + 0x314) = *(int *)(lVar7 + 0x314) + -1;
          UNLOCK();
        }
      }
LAB_14458a494:
      lVar8 = lVar8 + 1;
      lVar10 = lVar10 + 0x180;
    } while (lVar8 < *(int *)(param_1 + 0x3b0));
  }
  if ((local_70 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14458a4f0 FUN_14458a4f0 body=6477 status=ok
// SIG undefined FUN_14458a4f0(void)

void FUN_14458a4f0(longlong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  ulonglong *puVar12;
  ulonglong **ppuVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  int iVar21;
  ulonglong *puVar22;
  ulonglong *puVar23;
  longlong lVar24;
  longlong *plVar25;
  longlong lVar26;
  longlong *plVar27;
  undefined8 *puVar28;
  uint uVar29;
  ulonglong *puVar30;
  ulonglong *puVar31;
  ulonglong *puVar32;
  longlong lVar33;
  int iVar34;
  int iVar35;
  ulonglong *puVar36;
  bool bVar37;
  float fVar38;
  undefined1 auStack_4a8 [32];
  undefined4 local_488;
  ulonglong **local_478;
  longlong *local_470;
  longlong *local_468;
  ulonglong local_460;
  undefined8 *local_458;
  longlong local_450;
  int local_444;
  longlong local_440;
  ulonglong *local_438;
  ulonglong *local_430;
  longlong *local_428;
  longlong *local_420;
  longlong *local_418;
  longlong *local_410;
  longlong local_408;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined8 *local_3f0;
  undefined4 local_3e8;
  undefined8 *local_3e0;
  undefined4 local_3d8;
  undefined8 *local_3d0;
  undefined4 local_3c8;
  undefined8 *local_3c0;
  undefined4 local_3b8;
  ulonglong local_3b0;
  ulonglong *local_3a8;
  undefined8 uStack_3a0;
  ulonglong *local_398;
  undefined8 uStack_390;
  longlong local_380;
  int local_378;
  int local_36c;
  ulonglong *local_368;
  ulonglong *local_360;
  undefined4 local_358 [190];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  FUN_14458be64();
  *(bool *)((longlong)param_1 + 0x3a1) = (char)param_1[0x73] != '\0';
  if (param_1[0x72] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_4a8);
  }
  local_470 = param_1;
  (**(code **)(*param_1 + 0x400))(param_1,1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  FUN_145a22648(&DAT_14c8337f0,&local_380,DAT_14cc223b0);
  lVar33 = local_380;
  lVar24 = (longlong)local_378;
  if (lVar24 != 0) {
    lVar16 = 0;
    do {
      (**(code **)(**(longlong **)(lVar33 + lVar16) + 0x30))();
      lVar16 = lVar16 + 8;
    } while (lVar24 * 8 != lVar16);
  }
  local_408 = (longlong)(int)local_470[0x76];
  plVar25 = local_470;
  if (0 < local_408) {
    local_468 = local_470 + 0x77;
    local_420 = local_470 + 0x79;
    local_410 = local_470 + 0x80;
    local_428 = local_470 + 0x83;
    local_418 = local_470 + 0x85;
    lVar33 = 0;
    local_444 = 0;
LAB_14458a673:
    ppuVar13 = &local_368;
    local_458 = (undefined8 *)(lVar33 * 0x180 + plVar25[0x75]);
    local_440 = lVar33;
    lVar24 = FUN_1496e69c2();
    lVar33 = local_380;
    if (lVar24 != 0) {
      local_398 = (ulonglong *)0x0;
      uStack_390 = 0;
      lVar16 = (longlong)local_378;
      local_450 = lVar24;
      if (lVar16 == 0) {
        local_3a8 = (ulonglong *)0x0;
        uStack_3a0 = 0;
      }
      else {
        lVar24 = 0;
        do {
          plVar25 = *(longlong **)(lVar33 + lVar24);
          if ((plVar25 != (longlong *)0x0) &&
             (cVar5 = (**(code **)(*plVar25 + 8))(), cVar5 == '\x01')) {
            lVar26 = (longlong)(int)uStack_390;
            uVar8 = (int)uStack_390 + 1;
            uStack_390 = CONCAT44(uStack_390._4_4_,uVar8);
            if (uStack_390._4_4_ < uVar8) {
              FUN_145a226ce(&local_398);
            }
            local_398[lVar26] = *(ulonglong *)(lVar33 + lVar24);
          }
          lVar26 = local_380;
          lVar24 = lVar24 + 8;
        } while (lVar16 * 8 != lVar24);
        lVar33 = (longlong)local_378;
        local_3a8 = (ulonglong *)0x0;
        uStack_3a0 = 0;
        if (lVar33 != 0) {
          lVar24 = 0;
          do {
            plVar25 = *(longlong **)(lVar26 + lVar24);
            if ((plVar25 != (longlong *)0x0) &&
               (cVar5 = (**(code **)(*plVar25 + 8))(), cVar5 == '\x02')) {
              lVar16 = (longlong)(int)uStack_3a0;
              uVar8 = (int)uStack_3a0 + 1;
              uStack_3a0 = CONCAT44(uStack_3a0._4_4_,uVar8);
              if (uStack_3a0._4_4_ < uVar8) {
                FUN_145a226ce(&local_3a8);
              }
              local_3a8[lVar16] = *(ulonglong *)(lVar26 + lVar24);
            }
            lVar24 = lVar24 + 8;
          } while (lVar33 * 8 != lVar24);
        }
      }
      puVar22 = local_398;
      iVar15 = (int)uStack_390;
      lVar33 = (longlong)(int)uStack_390;
      if (1 < lVar33) {
        memset(local_358,0,0x2f0);
        local_368 = puVar22;
        local_360 = puVar22 + lVar33 + -1;
        fVar38 = logf((float)iVar15);
        local_358[0] = (int)(longlong)(fVar38 + fVar38);
        do {
          puVar30 = *ppuVar13;
          puVar22 = ppuVar13[1];
          iVar15 = *(int *)(ppuVar13 + 2);
          iVar21 = (int)((ulonglong)((longlong)puVar22 - (longlong)puVar30) >> 3);
          uVar8 = iVar21 + 1;
          puVar31 = puVar30;
          puVar32 = puVar30;
          puVar36 = puVar22;
          local_478 = ppuVar13;
          if (iVar15 != 0) {
LAB_14458ac99:
            if (8 < (int)uVar8) {
              local_460 = CONCAT44(local_460._4_4_,iVar15);
              uVar19 = puVar31[uVar8 >> 1];
              puVar31[uVar8 >> 1] = *puVar31;
              *puVar31 = uVar19;
              puVar17 = puVar22 + 1;
              puVar32 = puVar31;
              local_438 = puVar30;
              local_430 = puVar36;
              do {
                puVar30 = puVar32 + 1;
                puVar36 = puVar32 + 1;
                do {
                  puVar32 = puVar36;
                  puVar12 = puVar30;
                  if (puVar22 < puVar32) break;
                  plVar25 = (longlong *)*puVar32;
                  bVar6 = (**(code **)(*(longlong *)*puVar31 + 0x18))();
                  bVar7 = (**(code **)(*plVar25 + 0x18))(plVar25);
                  puVar30 = puVar12 + 1;
                  puVar36 = puVar32 + 1;
                } while (bVar7 <= bVar6);
                puVar30 = puVar17 + -2;
                do {
                  puVar23 = puVar17;
                  puVar36 = puVar30;
                  puVar17 = puVar23 + -1;
                  if (puVar17 <= puVar31) break;
                  plVar25 = (longlong *)*puVar31;
                  bVar6 = (**(code **)(*(longlong *)*puVar17 + 0x18))();
                  bVar7 = (**(code **)(*plVar25 + 0x18))(plVar25);
                  puVar30 = puVar36 + -1;
                } while (bVar7 <= bVar6);
                if (puVar17 < puVar32) goto LAB_14458ad57;
                uVar19 = *puVar32;
                *puVar32 = *puVar17;
                *puVar17 = uVar19;
              } while( true );
            }
            for (; ppuVar13 = local_478, puVar32 = puVar31, puVar30 = puVar31, puVar31 < puVar22;
                puVar22 = puVar22 + -1) {
              while (puVar36 = puVar32, puVar30 = puVar30 + 1, puVar30 <= puVar22) {
                plVar25 = (longlong *)*puVar30;
                bVar6 = (**(code **)(*(longlong *)*puVar36 + 0x18))();
                bVar7 = (**(code **)(*plVar25 + 0x18))(plVar25);
                puVar32 = puVar30;
                if (bVar7 <= bVar6) {
                  puVar32 = puVar36;
                }
              }
              uVar19 = *puVar36;
              *puVar36 = *puVar22;
              *puVar22 = uVar19;
            }
            goto LAB_14458b003;
          }
LAB_14458ae07:
          ppuVar13 = local_478;
          if (uVar8 != 0) {
            uVar9 = (iVar21 - (iVar21 + -1 >> 0x1f)) + -1 >> 1;
            do {
              local_460 = (ulonglong)uVar9;
              uVar19 = local_460;
              while (uVar4 = uVar9 * 2 + 1, (int)uVar4 < (int)uVar8) {
                uVar29 = uVar9 * 2 + 2;
                uVar9 = uVar4;
                if ((int)uVar29 < (int)uVar8) {
                  plVar25 = (longlong *)puVar32[(int)uVar4];
                  bVar6 = (**(code **)(*(longlong *)puVar32[(int)uVar29] + 0x18))();
                  bVar7 = (**(code **)(*plVar25 + 0x18))(plVar25);
                  if (bVar7 <= bVar6) {
                    uVar9 = uVar29;
                  }
                }
                iVar15 = (int)uVar19;
                plVar25 = (longlong *)puVar32[(int)uVar9];
                bVar6 = (**(code **)(*(longlong *)puVar32[iVar15] + 0x18))();
                bVar7 = (**(code **)(*plVar25 + 0x18))(plVar25);
                if (bVar7 <= bVar6) break;
                uVar19 = puVar32[iVar15];
                puVar32[iVar15] = puVar32[(int)uVar9];
                puVar32[(int)uVar9] = uVar19;
                uVar19 = (ulonglong)uVar9;
              }
              uVar9 = (int)local_460 - 1;
            } while ((int)local_460 != 0);
            ppuVar13 = local_478;
            if (1 < (int)uVar8) {
              uVar18 = (ulonglong)uVar8;
              uVar19 = *puVar32;
              *puVar32 = puVar32[uVar18 - 1];
              puVar32[uVar18 - 1] = uVar19;
              if (uVar8 != 2) {
                do {
                  uVar19 = uVar18 - 1;
                  iVar15 = 0;
                  iVar35 = 1;
                  iVar21 = 0;
                  do {
                    iVar15 = iVar15 + 2;
                    iVar34 = iVar35;
                    if ((longlong)iVar15 < (longlong)uVar19) {
                      plVar25 = (longlong *)puVar32[iVar35];
                      bVar6 = (**(code **)(*(longlong *)puVar32[iVar15] + 0x18))();
                      bVar7 = (**(code **)(*plVar25 + 0x18))(plVar25);
                      if (bVar7 <= bVar6) {
                        iVar34 = iVar15;
                      }
                    }
                    plVar25 = (longlong *)puVar32[iVar34];
                    bVar6 = (**(code **)(*(longlong *)puVar32[iVar21] + 0x18))();
                    bVar7 = (**(code **)(*plVar25 + 0x18))(plVar25);
                    if (bVar7 <= bVar6) break;
                    uVar2 = puVar32[iVar21];
                    puVar32[iVar21] = puVar32[iVar34];
                    puVar32[iVar34] = uVar2;
                    iVar15 = iVar34 * 2;
                    iVar35 = iVar34 * 2 + 1;
                    iVar21 = iVar34;
                  } while ((longlong)iVar35 < (longlong)uVar19);
                  uVar2 = *puVar32;
                  *puVar32 = puVar32[uVar18 - 2];
                  puVar32[uVar18 - 2] = uVar2;
                  ppuVar13 = local_478;
                  uVar18 = uVar19;
                } while (2 < uVar19);
              }
            }
          }
LAB_14458b003:
          ppuVar13 = ppuVar13 + -3;
        } while (&local_368 <= ppuVar13);
      }
      puVar22 = local_3a8;
      ppuVar13 = &local_368;
      iVar15 = (int)uStack_3a0;
      lVar33 = (longlong)(int)uStack_3a0;
      if (1 < lVar33) {
        memset(local_358,0,0x2f0);
        local_368 = puVar22;
        local_360 = puVar22 + lVar33 + -1;
        fVar38 = logf((float)iVar15);
        local_358[0] = (int)(longlong)(fVar38 + fVar38);
        do {
          puVar30 = *ppuVar13;
          puVar22 = ppuVar13[1];
          iVar15 = *(int *)(ppuVar13 + 2);
          iVar21 = (int)((ulonglong)((longlong)puVar22 - (longlong)puVar30) >> 3);
          uVar8 = iVar21 + 1;
          puVar31 = puVar30;
          puVar32 = puVar30;
          puVar36 = puVar22;
          local_478 = ppuVar13;
          if (iVar15 != 0) {
LAB_14458a894:
            if (8 < (int)uVar8) {
              local_460 = CONCAT44(local_460._4_4_,iVar15);
              uVar19 = puVar31[uVar8 >> 1];
              puVar31[uVar8 >> 1] = *puVar31;
              *puVar31 = uVar19;
              puVar17 = puVar22 + 1;
              puVar32 = puVar31;
              local_438 = puVar30;
              local_430 = puVar36;
              do {
                puVar30 = puVar32 + 1;
                puVar36 = puVar32 + 1;
                do {
                  puVar32 = puVar36;
                  puVar12 = puVar30;
                  if (puVar22 < puVar32) break;
                  plVar25 = (longlong *)*puVar32;
                  bVar6 = (**(code **)(*(longlong *)*puVar31 + 0x18))();
                  bVar7 = (**(code **)(*plVar25 + 0x18))(plVar25);
                  puVar30 = puVar12 + 1;
                  puVar36 = puVar32 + 1;
                } while (bVar7 <= bVar6);
                puVar30 = puVar17 + -2;
                do {
                  puVar23 = puVar17;
                  puVar36 = puVar30;
                  puVar17 = puVar23 + -1;
                  if (puVar17 <= puVar31) break;
                  plVar25 = (longlong *)*puVar31;
                  bVar6 = (**(code **)(*(longlong *)*puVar17 + 0x18))();
                  bVar7 = (**(code **)(*plVar25 + 0x18))(plVar25);
                  puVar30 = puVar36 + -1;
                } while (bVar7 <= bVar6);
                if (puVar17 < puVar32) goto LAB_14458a952;
                uVar19 = *puVar32;
                *puVar32 = *puVar17;
                *puVar17 = uVar19;
              } while( true );
            }
            for (; ppuVar13 = local_478, puVar32 = puVar31, puVar30 = puVar31, puVar31 < puVar22;
                puVar22 = puVar22 + -1) {
              while (puVar36 = puVar32, puVar30 = puVar30 + 1, puVar30 <= puVar22) {
                plVar25 = (longlong *)*puVar30;
                bVar6 = (**(code **)(*(longlong *)*puVar36 + 0x18))();
                bVar7 = (**(code **)(*plVar25 + 0x18))(plVar25);
                puVar32 = puVar30;
                if (bVar7 <= bVar6) {
                  puVar32 = puVar36;
                }
              }
              uVar19 = *puVar36;
              *puVar36 = *puVar22;
              *puVar22 = uVar19;
            }
            goto LAB_14458abfe;
          }
LAB_14458aa02:
          ppuVar13 = local_478;
          if (uVar8 != 0) {
            uVar9 = (iVar21 - (iVar21 + -1 >> 0x1f)) + -1 >> 1;
            do {
              local_460 = (ulonglong)uVar9;
              uVar19 = local_460;
              while (uVar4 = uVar9 * 2 + 1, (int)uVar4 < (int)uVar8) {
                uVar29 = uVar9 * 2 + 2;
                uVar9 = uVar4;
                if ((int)uVar29 < (int)uVar8) {
                  plVar25 = (longlong *)puVar32[(int)uVar4];
                  bVar6 = (**(code **)(*(longlong *)puVar32[(int)uVar29] + 0x18))();
                  bVar7 = (**(code **)(*plVar25 + 0x18))(plVar25);
                  if (bVar7 <= bVar6) {
                    uVar9 = uVar29;
                  }
                }
                iVar15 = (int)uVar19;
                plVar25 = (longlong *)puVar32[(int)uVar9];
                bVar6 = (**(code **)(*(longlong *)puVar32[iVar15] + 0x18))();
                bVar7 = (**(code **)(*plVar25 + 0x18))(plVar25);
                if (bVar7 <= bVar6) break;
                uVar19 = puVar32[iVar15];
                puVar32[iVar15] = puVar32[(int)uVar9];
                puVar32[(int)uVar9] = uVar19;
                uVar19 = (ulonglong)uVar9;
              }
              uVar9 = (int)local_460 - 1;
            } while ((int)local_460 != 0);
            ppuVar13 = local_478;
            if (1 < (int)uVar8) {
              uVar18 = (ulonglong)uVar8;
              uVar19 = *puVar32;
              *puVar32 = puVar32[uVar18 - 1];
              puVar32[uVar18 - 1] = uVar19;
              if (uVar8 != 2) {
                do {
                  uVar19 = uVar18 - 1;
                  iVar15 = 0;
                  iVar35 = 1;
                  iVar21 = 0;
                  do {
                    iVar15 = iVar15 + 2;
                    iVar34 = iVar35;
                    if ((longlong)iVar15 < (longlong)uVar19) {
                      plVar25 = (longlong *)puVar32[iVar35];
                      bVar6 = (**(code **)(*(longlong *)puVar32[iVar15] + 0x18))();
                      bVar7 = (**(code **)(*plVar25 + 0x18))(plVar25);
                      if (bVar7 <= bVar6) {
                        iVar34 = iVar15;
                      }
                    }
                    plVar25 = (longlong *)puVar32[iVar34];
                    bVar6 = (**(code **)(*(longlong *)puVar32[iVar21] + 0x18))();
                    bVar7 = (**(code **)(*plVar25 + 0x18))(plVar25);
                    if (bVar7 <= bVar6) break;
                    uVar2 = puVar32[iVar21];
                    puVar32[iVar21] = puVar32[iVar34];
                    puVar32[iVar34] = uVar2;
                    iVar15 = iVar34 * 2;
                    iVar35 = iVar34 * 2 + 1;
                    iVar21 = iVar34;
                  } while ((longlong)iVar35 < (longlong)uVar19);
                  uVar2 = *puVar32;
                  *puVar32 = puVar32[uVar18 - 2];
                  puVar32[uVar18 - 2] = uVar2;
                  ppuVar13 = local_478;
                  uVar18 = uVar19;
                } while (2 < uVar19);
              }
            }
          }
LAB_14458abfe:
          ppuVar13 = ppuVar13 + -3;
        } while (&local_368 <= ppuVar13);
      }
      if ((int)uStack_3a0 == 0 && (int)uStack_390 == 0) {
        iVar15 = (int)local_470[0x78];
        *(uint *)(local_470 + 0x78) = iVar15 + 1U;
        if (*(uint *)((longlong)local_470 + 0x3c4) < iVar15 + 1U) {
          FUN_145a226ce(local_468,iVar15);
        }
        *(undefined8 *)(*local_468 + (longlong)iVar15 * 8) = 0;
      }
      else {
        iVar15 = (int)local_470[0x78];
        puVar22 = local_3a8;
        if (0 < (int)uStack_390) {
          puVar22 = local_398;
        }
        *(uint *)(local_470 + 0x78) = iVar15 + 1U;
        if (*(uint *)((longlong)local_470 + 0x3c4) < iVar15 + 1U) {
          FUN_145a226ce(local_468,iVar15);
        }
        *(ulonglong *)(*local_468 + (longlong)iVar15 * 8) = *puVar22;
      }
      plVar25 = local_470;
      *(bool *)((longlong)local_458 + 0x91) = *(char *)((longlong)local_470 + 0x399) == '\0';
      *(undefined4 *)((longlong)local_458 + 0xb4) = 0;
      local_458[0x13] = 0;
      local_458[0x14] = 0;
      local_458[0x15] = 0;
      FUN_14005eae2(local_458 + 0x17);
      if ((char)plVar25[0x73] == '\x02') {
LAB_14458b107:
        plVar3 = *(longlong **)(*local_468 + local_440 * 8);
        local_3b0 = (**(code **)(*plVar3 + 0x28))(plVar3,local_450);
        plVar27 = local_420;
        if (local_3b0 != 0) {
          if ((int)plVar25[0x7a] != *(int *)((longlong)plVar25 + 0x3fc)) {
            uVar8 = ((uint)(local_3b0 >> 0x14) & 0xffff ^ (uint)(local_3b0 >> 4)) * -0x7a143595;
            uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
            plVar14 = (longlong *)plVar25[0x81];
            if ((longlong *)plVar25[0x81] == (longlong *)0x0) {
              plVar14 = local_410;
            }
            iVar15 = *(int *)((longlong)plVar14 +
                             (ulonglong)((int)plVar25[0x82] - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
            if (iVar15 != -1) {
              do {
                lVar33 = *local_420 + (longlong)iVar15 * 0x70;
                if (*(ulonglong *)(*local_420 + (longlong)iVar15 * 0x70) == local_3b0) {
                  if (lVar33 != 0) {
                    plVar27 = (longlong *)(lVar33 + 8);
                    goto LAB_14458b6bc;
                  }
                  break;
                }
                iVar15 = *(int *)(lVar33 + 0x68);
              } while (iVar15 != -1);
            }
          }
          local_368 = &local_3b0;
          FUN_1496edd12(local_420,&local_36c,&local_368);
          uVar19 = local_3b0;
          lVar26 = (longlong)local_36c;
          lVar33 = *plVar27;
          local_3c0 = (undefined8 *)0x0;
          local_3b8 = 0;
          FUN_1446efa72(&local_3c0,0,3,0x10);
          puVar20 = local_3c0;
          local_3b8 = 3;
          *local_3c0 = &PTR_LAB_14bddfc40;
          local_3c0[1] = local_3b0;
          LOCK();
          UNLOCK();
          lVar16 = DAT_14c758608 + 1;
          lVar24 = DAT_14c758608 + 1;
          if (lVar16 == 0) {
            LOCK();
            UNLOCK();
            lVar16 = DAT_14c758608 + 2;
            lVar24 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar24;
          local_3c0[2] = lVar16;
          *local_3c0 = &PTR_FUN_14bddfbd0;
          local_3c0[3] = 0;
          if (local_470 == (longlong *)0x0) {
            iVar15 = 0;
          }
          else {
            uVar8 = *(uint *)((longlong)local_470 + 0xc);
            *(uint *)(local_3c0 + 3) = uVar8;
            if ((int)uVar8 < DAT_14c9647dc) {
              lVar24 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
            }
            else {
              lVar24 = 0;
            }
            iVar15 = *(int *)(lVar24 + 0x10);
            if (*(int *)(lVar24 + 0x10) == 0) {
              LOCK();
              iVar15 = DAT_14c964868 + 1;
              UNLOCK();
              iVar21 = DAT_14c964868 + 1;
              bVar37 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar15;
              if (bVar37) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar21);
              }
              LOCK();
              iVar15 = *(int *)(lVar24 + 0x10);
              bVar37 = iVar15 == 0;
              if (bVar37) {
                *(int *)(lVar24 + 0x10) = iVar21;
                iVar15 = 0;
              }
              UNLOCK();
              if (bVar37) {
                iVar15 = iVar21;
              }
            }
          }
          lVar33 = lVar33 + lVar26 * 0x70;
          plVar27 = (longlong *)(lVar33 + 8);
          *(int *)((longlong)puVar20 + 0x1c) = iVar15;
          puVar20[4] = FUN_1496e6b02;
          FUN_146d8d53a(uVar19,&local_368,&local_3c0);
          uVar19 = local_3b0;
          *plVar27 = (longlong)local_368;
          local_3d0 = (undefined8 *)0x0;
          local_3c8 = 0;
          FUN_1446efa72(&local_3d0,0,3,0x10);
          puVar20 = local_3d0;
          local_3c8 = 3;
          *local_3d0 = &PTR_LAB_14bddfc40;
          local_3d0[1] = local_3b0;
          LOCK();
          UNLOCK();
          lVar16 = DAT_14c758608 + 1;
          lVar24 = DAT_14c758608 + 1;
          if (lVar16 == 0) {
            LOCK();
            UNLOCK();
            lVar16 = DAT_14c758608 + 2;
            lVar24 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar24;
          local_3d0[2] = lVar16;
          *local_3d0 = &PTR_FUN_14bddfbd0;
          local_3d0[3] = 0;
          if (local_470 == (longlong *)0x0) {
            iVar15 = 0;
          }
          else {
            uVar8 = *(uint *)((longlong)local_470 + 0xc);
            *(uint *)(local_3d0 + 3) = uVar8;
            if ((int)uVar8 < DAT_14c9647dc) {
              lVar24 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
            }
            else {
              lVar24 = 0;
            }
            iVar15 = *(int *)(lVar24 + 0x10);
            if (*(int *)(lVar24 + 0x10) == 0) {
              LOCK();
              iVar15 = DAT_14c964868 + 1;
              UNLOCK();
              iVar21 = DAT_14c964868 + 1;
              bVar37 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar15;
              if (bVar37) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar21);
              }
              LOCK();
              iVar15 = *(int *)(lVar24 + 0x10);
              bVar37 = iVar15 == 0;
              if (bVar37) {
                *(int *)(lVar24 + 0x10) = iVar21;
                iVar15 = 0;
              }
              UNLOCK();
              if (bVar37) {
                iVar15 = iVar21;
              }
            }
          }
          *(int *)((longlong)puVar20 + 0x1c) = iVar15;
          puVar20[4] = FUN_1496e6c18;
          FUN_146d8d5c0(uVar19,&local_368,&local_3d0);
          uVar19 = local_3b0;
          *(ulonglong **)(lVar33 + 0x10) = local_368;
          local_3e0 = (undefined8 *)0x0;
          local_3d8 = 0;
          FUN_1446efa72(&local_3e0,0,3,0x10);
          puVar20 = local_3e0;
          local_3d8 = 3;
          *local_3e0 = &PTR_LAB_14bddfc40;
          local_3e0[1] = local_3b0;
          LOCK();
          UNLOCK();
          lVar16 = DAT_14c758608 + 1;
          lVar24 = DAT_14c758608 + 1;
          if (lVar16 == 0) {
            LOCK();
            UNLOCK();
            lVar16 = DAT_14c758608 + 2;
            lVar24 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar24;
          local_3e0[2] = lVar16;
          *local_3e0 = &PTR_FUN_14bddfbd0;
          local_3e0[3] = 0;
          if (local_470 == (longlong *)0x0) {
            iVar15 = 0;
          }
          else {
            uVar8 = *(uint *)((longlong)local_470 + 0xc);
            *(uint *)(local_3e0 + 3) = uVar8;
            if ((int)uVar8 < DAT_14c9647dc) {
              lVar24 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
            }
            else {
              lVar24 = 0;
            }
            iVar15 = *(int *)(lVar24 + 0x10);
            if (*(int *)(lVar24 + 0x10) == 0) {
              LOCK();
              iVar15 = DAT_14c964868 + 1;
              UNLOCK();
              iVar21 = DAT_14c964868 + 1;
              bVar37 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar15;
              if (bVar37) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar21);
              }
              LOCK();
              iVar15 = *(int *)(lVar24 + 0x10);
              bVar37 = iVar15 == 0;
              if (bVar37) {
                *(int *)(lVar24 + 0x10) = iVar21;
                iVar15 = 0;
              }
              UNLOCK();
              if (bVar37) {
                iVar15 = iVar21;
              }
            }
          }
          *(int *)((longlong)puVar20 + 0x1c) = iVar15;
          puVar20[4] = FUN_1496e6d38;
          FUN_146d8d646(uVar19,&local_368,&local_3e0);
          uVar19 = local_3b0;
          *(ulonglong **)(lVar33 + 0x18) = local_368;
          local_3f0 = (undefined8 *)0x0;
          local_3e8 = 0;
          FUN_1446efa72(&local_3f0,0,3,0x10);
          puVar20 = local_3f0;
          local_3e8 = 3;
          *local_3f0 = &PTR_LAB_14bddfd20;
          local_3f0[1] = local_3b0;
          LOCK();
          UNLOCK();
          lVar16 = DAT_14c758608 + 1;
          lVar24 = DAT_14c758608 + 1;
          if (lVar16 == 0) {
            LOCK();
            UNLOCK();
            lVar16 = DAT_14c758608 + 2;
            lVar24 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar24;
          local_3f0[2] = lVar16;
          *local_3f0 = &PTR_FUN_14bddfcb0;
          local_3f0[3] = 0;
          if (local_470 == (longlong *)0x0) {
            iVar15 = 0;
          }
          else {
            uVar8 = *(uint *)((longlong)local_470 + 0xc);
            *(uint *)(local_3f0 + 3) = uVar8;
            if ((int)uVar8 < DAT_14c9647dc) {
              lVar24 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
            }
            else {
              lVar24 = 0;
            }
            iVar15 = *(int *)(lVar24 + 0x10);
            if (*(int *)(lVar24 + 0x10) == 0) {
              LOCK();
              iVar15 = DAT_14c964868 + 1;
              UNLOCK();
              iVar21 = DAT_14c964868 + 1;
              bVar37 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar15;
              if (bVar37) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar21);
              }
              LOCK();
              iVar15 = *(int *)(lVar24 + 0x10);
              bVar37 = iVar15 == 0;
              if (bVar37) {
                *(int *)(lVar24 + 0x10) = iVar21;
                iVar15 = 0;
              }
              UNLOCK();
              if (bVar37) {
                iVar15 = iVar21;
              }
            }
          }
          *(int *)((longlong)puVar20 + 0x1c) = iVar15;
          puVar20[4] = &LAB_1496e6e3e;
          FUN_146286226(uVar19,&local_368,&local_3f0);
          *(ulonglong **)(lVar33 + 0x20) = local_368;
          plVar25 = local_470;
LAB_14458b6bc:
          if (((char)plVar25[0x73] == '\x01') || ((char)plVar25[0x74] == '\0')) {
            lVar33 = FUN_1496e5194(plVar25[0x72],local_458);
            if (lVar33 != 0) {
              LOCK();
              *(int *)(lVar33 + 0x314) = *(int *)(lVar33 + 0x314) + 1;
              UNLOCK();
              if ((*(int *)(lVar33 + 0x310) == 0) &&
                 (cVar5 = (**(code **)(*plVar3 + 0x88))(plVar3,local_450,lVar33), cVar5 != '\0')) {
                if ((char)plVar25[0x73] == '\x01') {
                  iVar15 = (int)plVar27[7];
                  *(uint *)(plVar27 + 7) = iVar15 + 1U;
                  if (*(uint *)((longlong)plVar27 + 0x3c) < iVar15 + 1U) {
                    FUN_1446f48e2(plVar27 + 6,iVar15);
                  }
                  *(int *)(plVar27[6] + (longlong)iVar15 * 4) = (int)local_440;
                  FUN_1496e6e4a(plVar27 + 4);
                  puVar20 = (undefined8 *)(local_470[0x39] + 0x240);
                  if (local_470[0x39] == 0) {
                    puVar20 = &DAT_14c846480;
                  }
                  puVar28 = (undefined8 *)
                            (plVar27[4] + (longlong)((int)plVar27[5] + -1) * 0xc0 + 0x60);
                  for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
                    *puVar28 = *puVar20;
                    puVar20 = puVar20 + 1;
                    puVar28 = puVar28 + 1;
                  }
                  local_458[0x15] = lVar33;
                  puVar20 = (undefined8 *)(local_470[0x39] + 0x240);
                  if (local_470[0x39] == 0) {
                    puVar20 = &DAT_14c846480;
                  }
                  puVar28 = local_458 + 0x22;
                  for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
                    *puVar28 = *puVar20;
                    puVar20 = puVar20 + 1;
                    puVar28 = puVar28 + 1;
                  }
                  *(undefined4 *)((longlong)local_458 + 0xb4) =
                       *(undefined4 *)((longlong)local_470 + 0x39c);
                  iVar15 = (int)local_470[0x86];
                  lVar24 = (longlong)iVar15;
                  *(uint *)(local_470 + 0x86) = iVar15 + 1U;
                  if (*(uint *)((longlong)local_470 + 0x434) < iVar15 + 1U) {
                    FUN_1496ee8be(local_418,iVar15);
                  }
                  plVar25 = local_470;
                  lVar16 = local_470[0x85];
                  *(undefined2 *)(lVar16 + lVar24 * 0x18) = 1;
                  *(longlong *)(lVar16 + 8 + lVar24 * 0x18) = lVar33;
                  *(longlong *)(lVar16 + 0x10 + lVar24 * 0x18) = lVar33;
                  (**(code **)(*plVar3 + 0x60))
                            (plVar3,local_450,local_458,*(undefined4 *)((longlong)local_470 + 0x39c)
                            );
                }
              }
              else {
                LOCK();
                *(int *)(lVar33 + 0x314) = *(int *)(lVar33 + 0x314) + -1;
                UNLOCK();
                local_444 = local_444 + 1;
              }
            }
          }
          else {
            local_368 = (ulonglong *)*local_458;
            if (local_368 == (ulonglong *)0x0) {
              local_368 = (ulonglong *)0x14a1d06fa;
              local_360 = (ulonglong *)CONCAT35(local_360._5_3_,5);
              uVar10 = FUN_14001a6c0(&local_368,1);
              uVar11 = FUN_1459d99ae();
              plVar25 = local_470;
              local_488 = 0;
              FUN_140af9fb2(&local_368,local_470[0x72],uVar11,uVar10);
            }
            lVar33 = FUN_1496e51e8(plVar25[0x72],&local_368);
            puVar20 = (undefined8 *)(plVar25[0x39] + 0x240);
            if (plVar25[0x39] == 0) {
              puVar20 = &DAT_14c846480;
            }
            (**(code **)(*plVar3 + 0x80))(plVar3,&local_400);
            LOCK();
            piVar1 = (int *)(lVar33 + 0x310);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + 1;
            UNLOCK();
            if ((iVar15 == 0) && (*(int *)(lVar33 + 0x314) == 0)) {
              *(undefined8 *)(lVar33 + 0x28) = 0;
              *(undefined8 *)(lVar33 + 0x370) = 0xff7fffff7f7fffff;
              iVar15 = *(int *)(lVar33 + 0x54);
              FUN_145e15321(*(undefined8 *)(lVar33 + 0x48),*(undefined4 *)(lVar33 + 0x50));
              *(undefined4 *)(lVar33 + 0x50) = 0;
              if ((iVar15 < 0) && (*(int *)(lVar33 + 0x54) != 0)) {
                FUN_1496f0d7e(lVar33 + 0x48);
              }
              if (*(int *)(lVar33 + 0x70) != *(int *)(lVar33 + 0x9c)) {
                FUN_1496f0dae(lVar33 + 0x68);
                FUN_1496f0ef2(lVar33 + 0x68);
              }
              if (*(int *)(lVar33 + 0x44) < 0) {
                *(undefined4 *)(lVar33 + 0x40) = 0;
                FUN_14481578e(lVar33 + 0x38,0);
              }
              else {
                *(undefined4 *)(lVar33 + 0x40) = 0;
              }
              if (*(int *)(lVar33 + 100) < 0) {
                *(undefined4 *)(lVar33 + 0x60) = 0;
                FUN_14481578e(lVar33 + 0x58,0);
              }
              else {
                *(undefined4 *)(lVar33 + 0x60) = 0;
              }
              if (*(int *)(lVar33 + 0x110) != *(int *)(lVar33 + 0x13c)) {
                FUN_1496f1026(lVar33 + 0x108);
                FUN_1496f1170(lVar33 + 0x108);
              }
              if (*(int *)(lVar33 + 0x1c0) != *(int *)(lVar33 + 0x1ec)) {
                FUN_1496f12c6(lVar33 + 0x1b8);
                FUN_1496f140a(lVar33 + 0x1b8);
              }
              if (*(int *)(lVar33 + 0x160) != *(int *)(lVar33 + 0x18c)) {
                FUN_1496f1528(lVar33 + 0x158);
                FUN_1496f166c(lVar33 + 0x158);
              }
              FUN_1407058ce(lVar33 + 800);
              do {
                cVar5 = FUN_1496f17a0(lVar33 + 0x300);
              } while (cVar5 != '\0');
              FUN_1496e7c54(lVar33,local_450,puVar20);
              *(undefined4 *)(lVar33 + 0x2e0) = local_400;
              *(undefined4 *)(lVar33 + 0x2e4) = uStack_3fc;
              *(undefined4 *)(lVar33 + 0x2e8) = uStack_3f8;
              *(undefined4 *)(lVar33 + 0x2ec) = uStack_3f4;
              lVar24 = lVar33;
LAB_14458bb8a:
              lVar16 = lVar24;
              lVar24 = lVar16;
              if (*(longlong *)(lVar16 + 0x20) != 0) goto code_r0x00014458bb99;
              goto LAB_14458bbad;
            }
            LOCK();
            *(int *)(lVar33 + 0x310) = *(int *)(lVar33 + 0x310) + -1;
            UNLOCK();
          }
        }
        uVar11 = 0;
        goto LAB_14458b13e;
      }
      if (*(char *)((longlong)local_458 + 0x79) == '\x01') {
        if ((char)plVar25[0x73] != '\0') goto LAB_14458b107;
        uVar11 = 0;
        goto LAB_14458b13e;
      }
      goto LAB_14458b14a;
    }
    iVar15 = (int)plVar25[0x78];
    *(uint *)(plVar25 + 0x78) = iVar15 + 1U;
    if (*(uint *)((longlong)plVar25 + 0x3c4) < iVar15 + 1U) {
      FUN_145a226ce(local_468,iVar15);
    }
    *(undefined8 *)(*local_468 + (longlong)iVar15 * 8) = 0;
    plVar25 = local_470;
    goto LAB_14458b16e;
  }
LAB_14458bdc1:
  if ((char)plVar25[0x73] != '\x02') {
    FUN_14458a2c2(plVar25,(double)*(float *)((longlong)plVar25 + 0x39c));
  }
LAB_14458bdda:
  if (local_380 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_4a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14458ad57:
  uVar19 = *puVar31;
  *puVar31 = *puVar17;
  *puVar17 = uVar19;
  iVar15 = (int)local_460 + -1;
  puVar23 = puVar23 + -2;
  if ((longlong)puVar36 - (longlong)local_438 < (longlong)local_430 - (longlong)puVar12) {
    if (puVar32 < puVar22) {
      *local_478 = puVar32;
      local_478[1] = puVar22;
      *(int *)(local_478 + 2) = iVar15;
      local_478 = local_478 + 3;
    }
    ppuVar13 = local_478;
    puVar32 = puVar31;
    if (puVar17 <= puVar31 + 1) goto LAB_14458b003;
  }
  else {
    ppuVar13 = local_478;
    if (puVar31 + 1 < puVar17) {
      *local_478 = puVar31;
      local_478[1] = puVar23;
      *(int *)(local_478 + 2) = iVar15;
      ppuVar13 = local_478 + 3;
    }
    puVar23 = puVar22;
    puVar31 = puVar12;
    puVar36 = puVar22;
    if (puVar22 <= puVar32) goto LAB_14458b003;
  }
  local_478 = ppuVar13;
  iVar21 = (int)((ulonglong)((longlong)puVar36 - (longlong)puVar31) >> 3);
  uVar8 = iVar21 + 1;
  puVar22 = puVar23;
  puVar30 = puVar31;
  puVar31 = puVar32;
  if (iVar15 == 0) goto LAB_14458ae07;
  goto LAB_14458ac99;
LAB_14458a952:
  uVar19 = *puVar31;
  *puVar31 = *puVar17;
  *puVar17 = uVar19;
  iVar15 = (int)local_460 + -1;
  puVar23 = puVar23 + -2;
  if ((longlong)puVar36 - (longlong)local_438 < (longlong)local_430 - (longlong)puVar12) {
    if (puVar32 < puVar22) {
      *local_478 = puVar32;
      local_478[1] = puVar22;
      *(int *)(local_478 + 2) = iVar15;
      local_478 = local_478 + 3;
    }
    ppuVar13 = local_478;
    puVar32 = puVar31;
    if (puVar17 <= puVar31 + 1) goto LAB_14458abfe;
  }
  else {
    ppuVar13 = local_478;
    if (puVar31 + 1 < puVar17) {
      *local_478 = puVar31;
      local_478[1] = puVar23;
      *(int *)(local_478 + 2) = iVar15;
      ppuVar13 = local_478 + 3;
    }
    puVar23 = puVar22;
    puVar31 = puVar12;
    puVar36 = puVar22;
    if (puVar22 <= puVar32) goto LAB_14458abfe;
  }
  local_478 = ppuVar13;
  iVar21 = (int)((ulonglong)((longlong)puVar36 - (longlong)puVar31) >> 3);
  uVar8 = iVar21 + 1;
  puVar22 = puVar23;
  puVar30 = puVar31;
  puVar31 = puVar32;
  if (iVar15 == 0) goto LAB_14458aa02;
  goto LAB_14458a894;
code_r0x00014458bb99:
  lVar24 = *(longlong *)(lVar16 + 0x20);
  if ((*(uint *)(lVar16 + 8) >> 0x1c & 1) == 0) goto LAB_14458bb8a;
  lVar24 = FUN_142840154(lVar16);
LAB_14458bbad:
  if (lVar24 == 0) {
    lVar24 = *(longlong *)(lVar16 + 0x20);
    goto LAB_14458bb8a;
  }
  FUN_14116d61c(lVar24,1);
  if (lVar33 == 0) {
    uVar11 = 0;
    plVar25 = local_470;
  }
  else {
    iVar15 = (int)plVar27[9];
    *(uint *)(plVar27 + 9) = iVar15 + 1U;
    if (*(uint *)((longlong)plVar27 + 0x4c) < iVar15 + 1U) {
      FUN_1446f48e2(plVar27 + 8,iVar15);
    }
    plVar25 = local_470;
    *(int *)(plVar27[8] + (longlong)iVar15 * 4) = (int)local_440;
    uVar11 = FUN_1496e51e8(local_470[0x72],&local_368);
    local_458[0x15] = uVar11;
    puVar20 = (undefined8 *)(plVar25[0x39] + 0x240);
    if (plVar25[0x39] == 0) {
      puVar20 = &DAT_14c846480;
    }
    puVar28 = local_458 + 0x22;
    for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
      *puVar28 = *puVar20;
      puVar20 = puVar20 + 1;
      puVar28 = puVar28 + 1;
    }
    iVar15 = (int)plVar25[0x84];
    lVar24 = (longlong)iVar15;
    *(uint *)(plVar25 + 0x84) = iVar15 + 1U;
    if (*(uint *)((longlong)plVar25 + 0x424) < iVar15 + 1U) {
      FUN_1496ee8be(local_428,iVar15);
    }
    lVar16 = *local_428;
    *(undefined2 *)(lVar16 + lVar24 * 0x18) = 0x101;
    *(longlong *)(lVar16 + 8 + lVar24 * 0x18) = lVar33;
    *(undefined8 *)(lVar16 + 0x10 + lVar24 * 0x18) = uVar11;
    (**(code **)(*plVar3 + 0x50))(plVar3,local_450,local_458);
    uVar11 = 1;
    plVar25 = local_470;
  }
LAB_14458b13e:
  (**(code **)(*plVar25 + 0x400))(plVar25,uVar11);
LAB_14458b14a:
  if (local_3a8 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  if (local_398 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
LAB_14458b16e:
  lVar33 = local_440 + 1;
  if (lVar33 == local_408) goto LAB_14458bdba;
  goto LAB_14458a673;
LAB_14458bdba:
  if (0 < local_444) goto LAB_14458bdda;
  goto LAB_14458bdc1;
}



// FUNCTION 14458be64 FUN_14458be64 body=1317 status=ok
// SIG undefined FUN_14458be64(void)

void FUN_14458be64(longlong param_1)

{
  int *piVar1;
  char *pcVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  char *pcVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  uint *local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong lStack_c8;
  longlong local_c0;
  longlong lStack_b8;
  longlong local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined1 *)(param_1 + 0x3a1) = 0;
  FUN_14091baa4();
  FUN_1496e6eca(param_1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  FUN_145a22648(&DAT_14c8337f0,&local_70,DAT_14cc223b0);
  lVar20 = local_70;
  if ((longlong)local_68 != 0) {
    lVar18 = 0;
    do {
      (**(code **)(**(longlong **)(lVar20 + lVar18) + 0x38))();
      lVar18 = lVar18 + 8;
    } while ((longlong)local_68 * 8 != lVar18);
  }
  local_e8 = (longlong *)(param_1 + 0x3c8);
  iVar4 = *(int *)(param_1 + 0x3f0);
  if (iVar4 == 0) {
    uVar16 = 1;
    uVar17 = 0;
    iVar15 = 0;
    iVar9 = 0;
  }
  else {
    puVar10 = *(uint **)(param_1 + 1000);
    if (*(uint **)(param_1 + 1000) == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 0x3d8);
    }
    uVar19 = *puVar10;
    if (uVar19 == 0) {
      iVar9 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar9 = iVar4 + -1;
      }
      uVar17 = 0;
      uVar16 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar16 = uVar17;
      }
      iVar15 = 0;
      do {
        if (uVar16 == uVar17) goto LAB_14458bfb8;
        iVar15 = iVar15 + 0x20;
        uVar19 = puVar10[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar19 == 0);
    }
    else {
      uVar17 = 0;
      iVar15 = 0;
    }
    uVar16 = (ulonglong)(-uVar19 & uVar19);
    uVar3 = uVar16 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    iVar9 = (iVar15 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar9) {
      iVar9 = iVar4;
    }
  }
  if (iVar9 != iVar4) {
    uVar19 = 0xffffffff;
    local_e0 = (uint *)(param_1 + 0x3d8);
    do {
      local_d8 = *(longlong *)(*local_e8 + (longlong)iVar9 * 0x70);
      FUN_1496eaff2(&local_d0);
      lVar20 = local_d8;
      if (local_d8 != 0) {
        if (local_c0 != 0) {
          FUN_14480f766(local_d8 + 0x38);
        }
        if (lStack_c8 != 0) {
          FUN_14480f766(lVar20 + 0x20);
        }
        if (local_d0 != 0) {
          FUN_14480f766(lVar20 + 8);
        }
        if (lStack_b8 != 0) {
          FUN_14480f766(lVar20 + 0x50);
        }
        local_c0 = 0;
        lStack_b8 = 0;
        local_d0 = 0;
        lStack_c8 = 0;
      }
      FUN_1496eb23e(&local_d0);
      uVar19 = uVar19 & ~(uint)uVar16;
      puVar10 = *(uint **)(param_1 + 1000);
      if (*(uint **)(param_1 + 1000) == (uint *)0x0) {
        puVar10 = local_e0;
      }
      iVar5 = *(int *)(param_1 + 0x3f0);
      iVar9 = (int)uVar17;
      lVar20 = (longlong)iVar9;
      uVar13 = puVar10[lVar20] & uVar19;
      if (uVar13 == 0) {
        iVar11 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar11 = iVar5 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar9) {
          iVar12 = iVar9;
        }
        if (iVar9 < iVar11) {
          lVar18 = 0;
          do {
            uVar13 = puVar10[lVar20 + lVar18 + 1];
            if (uVar13 != 0) {
              uVar17 = (ulonglong)(iVar9 + (int)lVar18 + 1);
              uVar19 = 0xffffffff;
              goto LAB_14458c2a3;
            }
            iVar15 = iVar15 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar12 - lVar20 != lVar18);
          uVar19 = 0xffffffff;
          iVar9 = iVar12;
        }
        uVar17 = (ulonglong)(iVar9 + 1);
        iVar9 = iVar5;
      }
      else {
LAB_14458c2a3:
        uVar16 = (ulonglong)(-uVar13 & uVar13);
        uVar3 = uVar16 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar9 = (iVar15 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar9) {
          iVar9 = iVar5;
        }
      }
    } while (iVar9 != iVar4);
  }
LAB_14458bfb8:
  plVar8 = local_e8;
  if (*(int *)(param_1 + 0x3d0) != *(int *)(param_1 + 0x3fc)) {
    FUN_1496ee952(local_e8);
    FUN_1496eea96(plVar8);
  }
  if (*(int *)(param_1 + 0x3c4) < 0) {
    *(undefined4 *)(param_1 + 0x3c0) = 0;
    FUN_1496eebb2(param_1 + 0x3b8);
  }
  else {
    *(undefined4 *)(param_1 + 0x3c0) = 0;
  }
  if ((longlong)*(int *)(param_1 + 0x420) != 0) {
    pcVar14 = *(char **)(param_1 + 0x418);
    pcVar2 = pcVar14 + (longlong)*(int *)(param_1 + 0x420) * 0x18;
    do {
      lVar20 = *(longlong *)(pcVar14 + 0x10);
      if (((*pcVar14 == '\x01') && (*(longlong *)(pcVar14 + 8) != 0)) &&
         (*(longlong *)(pcVar14 + 8) == lVar20)) {
        FUN_14458c414(lVar20);
        *pcVar14 = '\0';
        pcVar14[8] = '\0';
        pcVar14[9] = '\0';
        pcVar14[10] = '\0';
        pcVar14[0xb] = '\0';
        pcVar14[0xc] = '\0';
        pcVar14[0xd] = '\0';
        pcVar14[0xe] = '\0';
        pcVar14[0xf] = '\0';
        LOCK();
        *(int *)(lVar20 + 0x310) = *(int *)(lVar20 + 0x310) + -1;
        UNLOCK();
        *(undefined4 *)(lVar20 + 0x2f0) = 1;
      }
      if (*(char *)(lVar20 + 0x1a8) == '\x01') {
        FUN_1496e8694(lVar20,*(undefined4 *)(lVar20 + 0x1ac),*(undefined4 *)(lVar20 + 0x1b0));
      }
      if ((DAT_14c7677e9 == '\x01') && ((longlong)*(int *)(lVar20 + 0x50) != 0)) {
        lVar18 = *(longlong *)(lVar20 + 0x48);
        lVar20 = (longlong)*(int *)(lVar20 + 0x50) * 0x98;
        do {
          FUN_1496e88d0(lVar18);
          lVar18 = lVar18 + 0x98;
          lVar20 = lVar20 + -0x98;
        } while (lVar20 != 0);
      }
      pcVar14 = pcVar14 + 0x18;
    } while (pcVar14 != pcVar2);
  }
  *(undefined4 *)(param_1 + 0x420) = 0;
  if (*(int *)(param_1 + 0x424) < 0) {
    FUN_1496eebe2(param_1 + 0x418);
  }
  iVar4 = *(int *)(param_1 + 0x430);
  if ((longlong)iVar4 != 0) {
    lVar20 = *(longlong *)(param_1 + 0x428);
    lVar18 = 0;
    do {
      lVar6 = *(longlong *)(lVar20 + 8 + lVar18);
      lVar7 = *(longlong *)(lVar20 + 0x10 + lVar18);
      if ((lVar6 == lVar7 & lVar6 != 0 & *(byte *)(lVar20 + lVar18)) == 1) {
        *(undefined1 *)(lVar20 + lVar18) = 0;
        *(undefined8 *)(lVar20 + 8 + lVar18) = 0;
        LOCK();
        piVar1 = (int *)(lVar7 + 0x314);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      lVar18 = lVar18 + 0x18;
    } while ((longlong)iVar4 * 0x18 != lVar18);
  }
  *(undefined4 *)(param_1 + 0x430) = 0;
  if (*(int *)(param_1 + 0x434) < 0) {
    FUN_1496eebe2(param_1 + 0x428);
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14458c38a FUN_14458c38a body=69 status=ok
// SIG undefined FUN_14458c38a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14458c38a(void)

{
  _DAT_14cc225d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014458c3cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc225e0,1);
  return;
}



// FUNCTION 14458c3cf FUN_14458c3cf body=69 status=ok
// SIG undefined FUN_14458c3cf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14458c3cf(void)

{
  _DAT_14cc225e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014458c411. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc225f0,1);
  return;
}



// FUNCTION 14458c414 FUN_14458c414 body=10396 status=ok
// SIG undefined FUN_14458c414(void)

void FUN_14458c414(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  float *pfVar3;
  uint uVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  byte bVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong *plVar25;
  longlong *plVar26;
  longlong lVar27;
  longlong lVar28;
  longlong *plVar29;
  int iVar30;
  ulonglong uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_2d8 [32];
  undefined1 local_2b8;
  int local_2b0;
  longlong *local_2a8;
  ulonglong local_2a0;
  longlong *local_298;
  ulonglong local_290;
  ulonglong local_288;
  ulonglong local_280;
  longlong *local_278;
  longlong *local_270;
  longlong *local_268;
  longlong *local_260;
  uint local_254;
  ulonglong local_250;
  longlong *local_248;
  ulonglong local_240;
  longlong *local_238;
  longlong *local_230;
  longlong *local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  undefined8 *local_208;
  undefined8 *local_200;
  int local_1f4;
  uint local_1f0;
  undefined1 local_1ec [4];
  uint *local_1e8;
  undefined8 ***local_1e0;
  undefined8 **local_1d8;
  uint *puStack_1d0;
  uint local_1c8 [4];
  uint *local_1b8;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  int iStack_1a4;
  longlong lStack_1a0;
  longlong *local_198;
  int local_190;
  float local_188 [2];
  longlong local_180;
  ulonglong uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  longlong local_160;
  undefined8 uStack_158;
  uint local_150 [4];
  uint *local_140;
  int local_138;
  undefined8 local_134;
  undefined4 local_12c;
  undefined8 local_120;
  undefined4 local_118;
  longlong local_110;
  ulonglong uStack_108;
  longlong local_100;
  undefined8 uStack_f8;
  uint local_f0 [4];
  uint *local_e0;
  uint local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c0;
  undefined4 local_b8;
  longlong local_b0;
  undefined8 uStack_a8;
  uint local_a0 [4];
  uint *local_90;
  int local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  local_250 = param_1 + 0x300;
  if ((**(longlong **)(param_1 + 0x308) == 0) || (**(longlong **)(param_1 + 0x308) == -8)) {
LAB_14458ca0d:
    local_140 = (uint *)0x0;
    local_138 = 0;
    local_180 = 0;
    uStack_178 = 0;
    local_170 = 0;
    uStack_168 = 0;
    local_160 = 0;
    uStack_158 = 0;
    local_134 = 0xffffffff00000080;
    local_12c = 0;
    local_120 = 0;
    local_118 = 0;
    local_e0 = (uint *)0x0;
    local_d8 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_d4 = 0xffffffff00000080;
    local_cc = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_90 = (uint *)0x0;
    local_88 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_84 = 0xffffffff00000080;
    local_7c = 0;
    local_70 = 0;
    local_68 = 0;
    cVar6 = FUN_1496e7b56(local_250);
    if (cVar6 == '\0') {
      FUN_145e15580(local_188);
      goto LAB_14458d98f;
    }
    local_238 = (longlong *)(param_1 + 0x68);
    local_240 = param_1 + 0xa0;
    local_260 = (longlong *)(param_1 + 800);
    local_220 = param_1 + 0x358;
    local_270 = (longlong *)(param_1 + 0x58);
    local_268 = (longlong *)(param_1 + 0x38);
    local_278 = (longlong *)(param_1 + 0x48);
    local_228 = (longlong *)(param_1 + 0x1b8);
    local_230 = (longlong *)(param_1 + 0x1f0);
    local_248 = (longlong *)(param_1 + 0x158);
    local_210 = param_1 + 400;
    lVar27 = 0;
    do {
      iVar30 = (int)uStack_178;
      uVar24 = (ulonglong)(int)uStack_178;
      local_2a8 = (longlong *)(uStack_108 & 0xffffffff);
      iVar17 = (int)uStack_108;
      if (0 < (longlong)uVar24) {
        iVar17 = (int)uStack_178;
      }
      local_298 = (longlong *)CONCAT44(local_298._4_4_,iVar17);
      iVar17 = 0;
      uVar18 = 1;
      uVar22 = 0;
      uVar7 = 0;
      local_218 = lVar27;
      if (local_d8 != 0) {
        puVar12 = local_e0;
        if (local_e0 == (uint *)0x0) {
          puVar12 = local_f0;
        }
        uVar7 = *puVar12;
        if (uVar7 == 0) {
          iVar17 = local_d8 + 0x1e;
          if (-1 < (int)(local_d8 - 1)) {
            iVar17 = local_d8 - 1;
          }
          uVar22 = 0;
          uVar18 = (ulonglong)(uint)(iVar17 >> 5);
          if (iVar17 >> 5 < 1) {
            uVar18 = 0;
          }
          iVar17 = 0;
          do {
            if (uVar18 == uVar22) goto LAB_14458d075;
            iVar17 = iVar17 + 0x20;
            uVar7 = puVar12[uVar22 + 1];
            uVar22 = uVar22 + 1;
          } while (uVar7 == 0);
        }
        else {
          iVar17 = 0;
          uVar22 = 0;
        }
        uVar18 = (ulonglong)(-uVar7 & uVar7);
        uVar31 = uVar18 * 2 + 1;
        lVar27 = 0x3f;
        if (uVar31 != 0) {
          for (; uVar31 >> lVar27 == 0; lVar27 = lVar27 + -1) {
          }
        }
        uVar7 = (iVar17 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
        if ((int)local_d8 <= (int)uVar7) {
          uVar7 = local_d8;
        }
      }
      if (uVar7 != local_d8) {
        uVar20 = 0xffffffff;
        plVar26 = local_278;
        local_280 = (ulonglong)local_d8;
        do {
          plVar25 = local_238;
          local_2a0 = CONCAT44(local_2a0._4_4_,iVar17);
          local_290 = uVar18;
          local_288 = uVar22;
          local_254 = uVar20;
          if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
            lVar27 = *(longlong *)(local_100 + (longlong)(int)uVar7 * 0x20);
            uVar20 = (uint)((ulonglong)lVar27 >> 0x10);
            uVar23 = (uint)lVar27 & 0xffff;
            uVar18 = *(ulonglong *)(param_1 + 0xa8);
            if (*(ulonglong *)(param_1 + 0xa8) == 0) {
              uVar18 = local_240;
            }
            iVar17 = *(int *)(uVar18 + (ulonglong)
                                       (*(int *)(param_1 + 0xb0) - 1U &
                                       (int)((ulonglong)lVar27 >> 0x20) +
                                       ((uint)lVar27 << 0x10 | uVar23) +
                                       (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar23 >> 4)) * 4);
            if (iVar17 != -1) {
              do {
                lVar28 = *local_238 + (longlong)iVar17 * 0x20;
                if (*(longlong *)(*local_238 + (longlong)iVar17 * 0x20) == lVar27) {
                  if (lVar28 != 0) {
                    plVar25 = (longlong *)(lVar28 + 8);
                    goto LAB_14458cd30;
                  }
                  break;
                }
                iVar17 = *(int *)(lVar28 + 0x18);
              } while (iVar17 != -1);
            }
          }
          local_1d8 = (undefined8 **)(local_100 + (longlong)(int)uVar7 * 0x20);
          FUN_1496ef524(local_238,&local_1e8,&local_1d8);
          plVar25 = (longlong *)(*plVar25 + (longlong)(int)local_1e8 * 0x20 + 8);
          FUN_1493be3fc(plVar25,(ulonglong)local_298 & 0xffffffff,1);
LAB_14458cd30:
          if (iVar30 < 1) {
            if (0 < (int)local_298) {
              plVar29 = (longlong *)0x0;
              do {
                uVar7 = *(uint *)(local_110 + (longlong)plVar29 * 4);
                local_208 = (undefined8 *)CONCAT44(local_208._4_4_,uVar7);
                if (*(int *)(param_1 + 0x328) != *(int *)(param_1 + 0x354)) {
                  lVar27 = *(longlong *)(param_1 + 0x360);
                  if (*(longlong *)(param_1 + 0x360) == 0) {
                    lVar27 = local_220;
                  }
                  iVar17 = *(int *)(lVar27 + (ulonglong)(*(int *)(param_1 + 0x368) - 1U & uVar7) * 4
                                   );
                  if (iVar17 != -1) {
                    do {
                      lVar27 = *local_260 + (longlong)iVar17 * 0x10;
                      if (*(uint *)(*local_260 + (longlong)iVar17 * 0x10) == uVar7) {
                        if (lVar27 != 0) goto LAB_14458cf21;
                        break;
                      }
                      iVar17 = *(int *)(lVar27 + 8);
                    } while (iVar17 != -1);
                  }
                }
                uVar20 = *(uint *)(param_1 + 0x60);
                *(uint *)(param_1 + 0x60) = uVar20 + 1;
                if (*(uint *)(param_1 + 100) < uVar20 + 1) {
                  FUN_1446f48e2(local_270,uVar20);
                  uVar7 = (uint)local_208;
                }
                plVar5 = local_260;
                *(uint *)(*local_270 + (longlong)(int)uVar20 * 4) = uVar7;
                local_1d8 = &local_208;
                puStack_1d0 = (uint *)local_1ec;
                local_1ec = (undefined1  [4])uVar20;
                FUN_140c0fbee(local_260,&local_1e8,&local_1d8,0);
                lVar27 = *plVar5 + (longlong)(int)local_1e8 * 0x10;
LAB_14458cf21:
                LOCK();
                UNLOCK();
                local_2b0 = DAT_14c761474 + 1;
                local_2b8 = 0;
                DAT_14c761474 = DAT_14c761474 + 1;
                FUN_1406507bc((longlong)*(int *)(lVar27 + 4) * 0x80 + *plVar25,&local_1d8,
                              local_188[0]);
                plVar29 = (longlong *)((longlong)plVar29 + 1);
              } while (plVar29 != local_2a8);
            }
          }
          else if (0 < (int)local_298) {
            uVar18 = 0;
            do {
              plVar29 = local_268;
              iVar17 = *(int *)(local_180 + uVar18 * 0x90);
              lVar27 = *(longlong *)(param_1 + 0x38);
              iVar14 = *(int *)(param_1 + 0x40);
              lVar28 = (longlong)iVar14;
              if (lVar28 != 0) {
                lVar16 = lVar28 * 4;
                lVar9 = 0;
                do {
                  if (*(int *)(lVar27 + lVar9 * 4) == iVar17) {
                    if ((int)lVar9 != -1) goto LAB_14458cd84;
                    break;
                  }
                  lVar9 = lVar9 + 1;
                  lVar16 = lVar16 + -4;
                } while (lVar16 != 0);
              }
              *(uint *)(param_1 + 0x40) = iVar14 + 1U;
              if (*(uint *)(param_1 + 0x44) < iVar14 + 1U) {
                FUN_1446f48e2(local_268,iVar14);
                lVar27 = *plVar29;
                plVar26 = local_278;
              }
              *(int *)(lVar27 + lVar28 * 4) = iVar17;
              lVar9 = FUN_1496efb5e(plVar26);
LAB_14458cd84:
              LOCK();
              UNLOCK();
              local_2b0 = DAT_14c761474 + 1;
              local_2b8 = 0;
              DAT_14c761474 = DAT_14c761474 + 1;
              FUN_1406507bc((longlong)(int)lVar9 * 0x80 + *plVar25,&local_1d8,local_188[0]);
              uVar18 = uVar18 + 1;
            } while (uVar18 != uVar24);
          }
          uVar20 = local_254 & ~(uint)local_290;
          puVar12 = local_e0;
          if (local_e0 == (uint *)0x0) {
            puVar12 = local_f0;
          }
          iVar14 = (int)local_288;
          lVar27 = (longlong)iVar14;
          uVar7 = puVar12[lVar27] & uVar20;
          uVar22 = local_288;
          iVar17 = (uint)local_2a0;
          if (uVar7 == 0) {
            iVar15 = local_d8 + 0x1e;
            if (-1 < (int)(local_d8 - 1)) {
              iVar15 = local_d8 - 1;
            }
            iVar15 = iVar15 >> 5;
            iVar17 = (uint)local_2a0 + 0x20;
            iVar13 = iVar15;
            if (iVar15 < iVar14) {
              iVar13 = iVar14;
            }
            if (iVar14 < iVar15) {
              lVar28 = 0;
              do {
                uVar7 = puVar12[lVar27 + lVar28 + 1];
                if (uVar7 != 0) {
                  uVar20 = 0xffffffff;
                  uVar22 = (ulonglong)(iVar14 + (int)lVar28 + 1);
                  goto LAB_14458d010;
                }
                iVar17 = iVar17 + 0x20;
                lVar28 = lVar28 + 1;
              } while (iVar13 - lVar27 != lVar28);
              uVar20 = 0xffffffff;
              iVar14 = iVar13;
            }
            uVar22 = (ulonglong)(iVar14 + 1);
            uVar18 = local_290;
            plVar26 = local_278;
            uVar7 = local_d8;
          }
          else {
LAB_14458d010:
            uVar18 = (ulonglong)(-uVar7 & uVar7);
            uVar31 = uVar18 * 2 + 1;
            lVar27 = 0x3f;
            if (uVar31 != 0) {
              for (; uVar31 >> lVar27 == 0; lVar27 = lVar27 + -1) {
              }
            }
            uVar7 = (iVar17 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
            if ((int)local_d8 <= (int)uVar7) {
              uVar7 = local_d8;
            }
          }
        } while (uVar7 != (uint)local_280);
        uVar24 = uStack_178 & 0xffffffff;
      }
LAB_14458d075:
      local_288 = CONCAT71(local_288._1_7_,0 < (int)local_298);
      fVar32 = *(float *)(param_1 + 0x370);
      if (local_188[0] <= *(float *)(param_1 + 0x370)) {
        fVar32 = local_188[0];
      }
      *(float *)(param_1 + 0x370) = fVar32;
      fVar32 = *(float *)(param_1 + 0x374);
      if (*(float *)(param_1 + 0x374) <= local_188[0]) {
        fVar32 = local_188[0];
      }
      *(float *)(param_1 + 0x374) = fVar32;
      local_290 = CONCAT71(local_290._1_7_,0 < (int)uVar24);
      if (0 < (int)uVar24) {
        local_2a8 = (longlong *)(uVar24 & 0xffffffff);
        plVar26 = (longlong *)0x0;
        do {
          lVar28 = local_180;
          plVar25 = local_268;
          iVar30 = *(int *)(local_180 + (longlong)plVar26 * 0x90);
          lVar27 = *(longlong *)(param_1 + 0x38);
          iVar17 = *(int *)(param_1 + 0x40);
          lVar16 = (longlong)iVar17;
          if (lVar16 != 0) {
            lVar9 = lVar16 * 4;
            lVar10 = 0;
            do {
              if (*(int *)(lVar27 + lVar10 * 4) == iVar30) {
                plVar29 = local_278;
                if ((int)lVar10 != -1) goto LAB_14458d13d;
                break;
              }
              lVar10 = lVar10 + 1;
              lVar9 = lVar9 + -4;
            } while (lVar9 != 0);
          }
          *(uint *)(param_1 + 0x40) = iVar17 + 1U;
          if (*(uint *)(param_1 + 0x44) < iVar17 + 1U) {
            FUN_1446f48e2(local_268,iVar17);
            lVar27 = *plVar25;
          }
          plVar29 = local_278;
          *(int *)(lVar27 + lVar16 * 4) = iVar30;
          lVar10 = FUN_1496efb5e(local_278);
LAB_14458d13d:
          lVar27 = (longlong)(int)lVar10 * 0x98 + *plVar29;
          lVar28 = lVar28 + (longlong)plVar26 * 0x90;
          cVar6 = FUN_1496f0bfc(lVar27,local_188[0]);
          if ((cVar6 != '\0') && (lVar16 = (longlong)*(int *)(lVar28 + 0x80), lVar16 != 0)) {
            lVar28 = *(longlong *)(lVar28 + 0x78);
            lVar9 = 0;
            do {
              puStack_1d0 = (uint *)CONCAT44(puStack_1d0._4_4_,*(undefined4 *)(lVar28 + 8 + lVar9));
              local_1d8 = *(undefined8 ***)(lVar28 + lVar9);
              uVar7 = (uint)((ulonglong)local_1d8 >> 0x10);
              uVar20 = (uint)local_1d8 & 0xffff;
              uVar11 = FUN_1496efdf0(lVar27 + 0x48,
                                     ((uint)local_1d8 << 0x10 | uVar20) +
                                     (int)((ulonglong)local_1d8 >> 0x20) +
                                     (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar20 >> 4));
              LOCK();
              UNLOCK();
              local_2b0 = DAT_14c761474 + 1;
              local_2b8 = 0;
              DAT_14c761474 = DAT_14c761474 + 1;
              FUN_1406507bc(uVar11,&local_1e8);
              lVar9 = lVar9 + 0xc;
            } while (lVar16 * 0xc != lVar9);
          }
          plVar26 = (longlong *)((longlong)plVar26 + 1);
        } while (plVar26 != local_2a8);
      }
      iVar30 = local_138;
      if (local_138 == 0) {
        plVar26 = (longlong *)&DAT_00000001;
        uVar24 = 0;
        iVar17 = 0;
        iVar14 = 0;
      }
      else {
        puVar12 = local_140;
        if (local_140 == (uint *)0x0) {
          puVar12 = local_150;
        }
        uVar7 = *puVar12;
        if (uVar7 == 0) {
          iVar17 = local_138 + 0x1e;
          if (-1 < local_138 + -1) {
            iVar17 = local_138 + -1;
          }
          uVar24 = 0;
          uVar18 = (ulonglong)(uint)(iVar17 >> 5);
          if (iVar17 >> 5 < 1) {
            uVar18 = uVar24;
          }
          iVar17 = 0;
          do {
            if (uVar18 == uVar24) goto LAB_14458d2dc;
            iVar17 = iVar17 + 0x20;
            uVar7 = puVar12[uVar24 + 1];
            uVar24 = uVar24 + 1;
          } while (uVar7 == 0);
        }
        else {
          uVar24 = 0;
          iVar17 = 0;
        }
        plVar26 = (longlong *)(ulonglong)(-uVar7 & uVar7);
        uVar18 = (longlong)plVar26 * 2 + 1;
        lVar27 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar27 == 0; lVar27 = lVar27 + -1) {
          }
        }
        iVar14 = (iVar17 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
        if (local_138 <= iVar14) {
          iVar14 = local_138;
        }
      }
      if (iVar14 != local_138) {
        uVar7 = 0xffffffff;
        do {
          puVar12 = (uint *)(local_160 + (longlong)iVar14 * 0x48);
          ppuVar2 = *(undefined8 ***)puVar12;
          if (*(int *)(param_1 + 0x1c0) != *(int *)(param_1 + 0x1ec)) {
            uVar20 = (uint)((ulonglong)ppuVar2 >> 0x10);
            uVar23 = (uint)ppuVar2 & 0xffff;
            plVar25 = *(longlong **)(param_1 + 0x1f8);
            if (*(longlong **)(param_1 + 0x1f8) == (longlong *)0x0) {
              plVar25 = local_230;
            }
            iVar14 = *(int *)((longlong)plVar25 +
                             (ulonglong)
                             (*(int *)(param_1 + 0x200) - 1U &
                             (int)((ulonglong)ppuVar2 >> 0x20) + ((uint)ppuVar2 << 0x10 | uVar23) +
                             (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar23 >> 4)) * 4);
            if (iVar14 != -1) {
              do {
                plVar25 = (longlong *)(*local_228 + (longlong)iVar14 * 0x48);
                if ((undefined8 **)*plVar25 == ppuVar2) {
                  if (plVar25 != (longlong *)0x0) goto LAB_14458d516;
                  break;
                }
                iVar14 = (int)plVar25[8];
              } while (iVar14 != -1);
            }
          }
          local_2a0 = CONCAT44(local_2a0._4_4_,uVar7);
          puStack_1d0 = *(uint **)(puVar12 + 4);
          local_2a8 = plVar26;
          local_1d8 = ppuVar2;
          if ((puStack_1d0 != (uint *)0x0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c();
          }
          plVar26 = local_228;
          local_1b8 = (uint *)0x0;
          uStack_1b0 = 0;
          uStack_1ac = 0;
          local_1c8[0] = 0;
          local_1c8[1] = 0;
          local_1c8[2] = 0;
          local_1c8[3] = 0;
          local_1e8 = puVar12;
          local_1e0 = &local_1d8;
          FUN_1496f04d2(local_228,&local_208,&local_1e8);
          plVar25 = (longlong *)(*plVar26 + (longlong)(int)(uint)local_208 * 0x48);
          FUN_1496e5474(&local_1d8);
          plVar26 = local_2a8;
          uVar7 = (uint)local_2a0;
LAB_14458d516:
          FUN_1496e5b70(plVar25 + 1,puVar12 + 2);
          uVar7 = uVar7 & ~(uint)plVar26;
          puVar12 = local_140;
          if (local_140 == (uint *)0x0) {
            puVar12 = local_150;
          }
          iVar14 = (int)uVar24;
          lVar27 = (longlong)iVar14;
          uVar20 = puVar12[lVar27] & uVar7;
          if (uVar20 == 0) {
            iVar15 = local_138 + 0x1e;
            if (-1 < local_138 + -1) {
              iVar15 = local_138 + -1;
            }
            iVar15 = iVar15 >> 5;
            iVar17 = iVar17 + 0x20;
            iVar13 = iVar15;
            if (iVar15 < iVar14) {
              iVar13 = iVar14;
            }
            if (iVar14 < iVar15) {
              lVar28 = 0;
              do {
                uVar20 = puVar12[lVar27 + lVar28 + 1];
                if (uVar20 != 0) {
                  uVar24 = (ulonglong)(iVar14 + (int)lVar28 + 1);
                  uVar7 = 0xffffffff;
                  goto LAB_14458d5aa;
                }
                iVar17 = iVar17 + 0x20;
                lVar28 = lVar28 + 1;
              } while (iVar13 - lVar27 != lVar28);
              uVar7 = 0xffffffff;
              iVar14 = iVar13;
            }
            uVar24 = (ulonglong)(iVar14 + 1);
            iVar14 = local_138;
          }
          else {
LAB_14458d5aa:
            plVar26 = (longlong *)(ulonglong)(-uVar20 & uVar20);
            uVar18 = (longlong)plVar26 * 2 + 1;
            lVar27 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar27 == 0; lVar27 = lVar27 + -1) {
              }
            }
            iVar14 = (iVar17 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
            if (local_138 <= iVar14) {
              iVar14 = local_138;
            }
          }
        } while (iVar14 != iVar30);
      }
LAB_14458d2dc:
      iVar30 = local_88;
      if (local_88 == 0) {
        plVar26 = (longlong *)&DAT_00000001;
        uVar24 = 0;
        iVar17 = 0;
        iVar14 = 0;
      }
      else {
        puVar12 = local_90;
        if (local_90 == (uint *)0x0) {
          puVar12 = local_a0;
        }
        uVar7 = *puVar12;
        if (uVar7 == 0) {
          iVar17 = local_88 + 0x1e;
          if (-1 < local_88 + -1) {
            iVar17 = local_88 + -1;
          }
          uVar24 = 0;
          uVar18 = (ulonglong)(uint)(iVar17 >> 5);
          if (iVar17 >> 5 < 1) {
            uVar18 = uVar24;
          }
          iVar17 = 0;
          do {
            if (uVar18 == uVar24) goto LAB_14458d370;
            iVar17 = iVar17 + 0x20;
            uVar7 = puVar12[uVar24 + 1];
            uVar24 = uVar24 + 1;
          } while (uVar7 == 0);
        }
        else {
          uVar24 = 0;
          iVar17 = 0;
        }
        plVar26 = (longlong *)(ulonglong)(-uVar7 & uVar7);
        uVar18 = (longlong)plVar26 * 2 + 1;
        lVar27 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar27 == 0; lVar27 = lVar27 + -1) {
          }
        }
        iVar14 = (iVar17 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
        if (local_88 <= iVar14) {
          iVar14 = local_88;
        }
      }
      if (iVar14 != local_88) {
        uVar7 = 0xffffffff;
        do {
          plVar25 = local_248;
          puVar12 = (uint *)(local_b0 + (longlong)iVar14 * 0x80);
          if (*(int *)(param_1 + 0x160) != *(int *)(param_1 + 0x18c)) {
            lVar27 = *(longlong *)(local_b0 + (longlong)iVar14 * 0x80);
            uVar20 = (uint)((ulonglong)lVar27 >> 0x10);
            uVar23 = (uint)lVar27 & 0xffff;
            lVar28 = *(longlong *)(param_1 + 0x198);
            if (*(longlong *)(param_1 + 0x198) == 0) {
              lVar28 = local_210;
            }
            iVar14 = *(int *)(lVar28 + (ulonglong)
                                       (*(int *)(param_1 + 0x1a0) - 1U &
                                       (int)((ulonglong)lVar27 >> 0x20) +
                                       ((uint)lVar27 << 0x10 | uVar23) +
                                       (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar23 >> 4)) * 4);
            if (iVar14 != -1) {
              do {
                lVar28 = *local_248 + (longlong)iVar14 * 0x58;
                if (*(longlong *)(*local_248 + (longlong)iVar14 * 0x58) == lVar27) {
                  if (lVar28 != 0) goto LAB_14458d75b;
                  break;
                }
                iVar14 = *(int *)(lVar28 + 0x50);
              } while (iVar14 != -1);
            }
          }
          uStack_1a8 = 0;
          iStack_1a4 = 0;
          lStack_1a0 = 0;
          local_1b8 = (uint *)0x0;
          uStack_1b0 = 0;
          uStack_1ac = 0;
          local_1c8[0] = 0;
          local_1c8[1] = 0;
          local_1c8[2] = 0;
          local_1c8[3] = 0;
          local_1d8 = (undefined8 **)0x0;
          puStack_1d0 = (uint *)0x0;
          local_198 = (longlong *)0x0;
          local_1e0 = &local_1d8;
          local_2a8 = plVar26;
          local_1e8 = puVar12;
          FUN_1496f0628(local_248,&local_208,&local_1e8);
          lVar27 = (longlong)(int)(uint)local_208;
          lVar28 = *plVar25;
          if (lStack_1a0 != 0) {
            FUN_1400020a8();
          }
          lVar28 = lVar28 + lVar27 * 0x58;
          FUN_1478571f4(&local_1d8);
          plVar26 = local_2a8;
LAB_14458d75b:
          FUN_1496f0bfc(lVar28 + 8,local_188[0],0,puVar12 + 4);
          uVar7 = uVar7 & ~(uint)plVar26;
          puVar12 = local_90;
          if (local_90 == (uint *)0x0) {
            puVar12 = local_a0;
          }
          iVar14 = (int)uVar24;
          lVar27 = (longlong)iVar14;
          uVar20 = puVar12[lVar27] & uVar7;
          if (uVar20 == 0) {
            iVar15 = local_88 + 0x1e;
            if (-1 < local_88 + -1) {
              iVar15 = local_88 + -1;
            }
            iVar15 = iVar15 >> 5;
            iVar17 = iVar17 + 0x20;
            iVar13 = iVar15;
            if (iVar15 < iVar14) {
              iVar13 = iVar14;
            }
            if (iVar14 < iVar15) {
              lVar28 = 0;
              do {
                uVar20 = puVar12[lVar27 + lVar28 + 1];
                if (uVar20 != 0) {
                  uVar24 = (ulonglong)(iVar14 + (int)lVar28 + 1);
                  uVar7 = 0xffffffff;
                  goto LAB_14458d7fa;
                }
                iVar17 = iVar17 + 0x20;
                lVar28 = lVar28 + 1;
              } while (iVar13 - lVar27 != lVar28);
              uVar7 = 0xffffffff;
              iVar14 = iVar13;
            }
            uVar24 = (ulonglong)(iVar14 + 1);
            iVar14 = local_88;
          }
          else {
LAB_14458d7fa:
            plVar26 = (longlong *)(ulonglong)(-uVar20 & uVar20);
            uVar18 = (longlong)plVar26 * 2 + 1;
            lVar27 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar27 == 0; lVar27 = lVar27 + -1) {
              }
            }
            iVar14 = (iVar17 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
            if (local_88 <= iVar14) {
              iVar14 = local_88;
            }
          }
        } while (iVar14 != iVar30);
      }
LAB_14458d370:
      bVar19 = (byte)local_218 | (byte)local_290 | (byte)local_288;
      lVar27 = CONCAT71((int7)((ulonglong)local_218 >> 8),bVar19);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      cVar6 = FUN_1496e7b56(local_250);
    } while (cVar6 != '\0');
    FUN_145e15580(local_188);
    if ((bVar19 & 1) == 0) goto LAB_14458d98f;
  }
  else {
    if (**(longlong **)(param_1 + 0x308) == 0) {
      lVar27 = 0;
    }
    else {
      lVar27 = **(longlong **)(param_1 + 0x308) + 8;
    }
    if (*(int *)(lVar27 + 0x10) != 0) goto LAB_14458ca0d;
    if (**(longlong **)(param_1 + 0x308) == 0) {
      lVar27 = 0;
    }
    else {
      lVar27 = **(longlong **)(param_1 + 0x308) + 8;
    }
    if (*(int *)(lVar27 + 0x80) < 1) goto LAB_14458ca0d;
    puVar8 = (undefined8 *)FUN_14001cc68(0x130,0x10);
    *puVar8 = 0;
    FUN_14612409e(puVar8 + 1);
    local_1b8 = (uint *)0x0;
    uStack_1b0 = 0;
    local_1d8 = (undefined8 **)0x0;
    puStack_1d0 = (uint *)0x0;
    uStack_1ac = 0x80;
    uStack_1a8 = 0xffffffff;
    iStack_1a4 = 0;
    local_198 = (longlong *)0x0;
    local_190 = 0;
    local_140 = (uint *)0x0;
    local_138 = 0;
    local_180 = 0;
    uStack_178 = 0;
    local_170 = 0;
    uStack_168 = 0;
    local_160 = 0;
    uStack_158 = 0;
    local_134 = 0xffffffff00000080;
    local_12c = 0;
    local_120 = 0;
    local_118 = 0;
    local_e0 = (uint *)0x0;
    local_d8 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_d4 = 0xffffffff00000080;
    local_cc = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_90 = (uint *)0x0;
    local_88 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_84 = 0xffffffff00000080;
    local_7c = 0;
    local_70 = 0;
    local_68 = 0;
    local_270 = (longlong *)(param_1 + 0x58);
    local_260 = (longlong *)(param_1 + 800);
    local_220 = param_1 + 0x358;
    local_208 = puVar8;
    local_200 = puVar8;
    cVar6 = FUN_1496e7b56(local_250,local_188);
    local_280 = CONCAT71(local_280._1_7_,1);
    if (cVar6 != '\0') {
      local_280 = CONCAT71(local_280._1_7_,1);
      do {
        uVar7 = local_d8;
        if ((int)uStack_178 < 1) {
          iVar30 = (int)uStack_108;
          uVar24 = uStack_108 & 0xffffffff;
          if (local_d8 == 0) {
            uVar31 = 1;
            uVar18 = 0;
            iVar17 = 0;
            uVar20 = 0;
          }
          else {
            puVar12 = local_e0;
            if (local_e0 == (uint *)0x0) {
              puVar12 = local_f0;
            }
            uVar20 = *puVar12;
            if (uVar20 == 0) {
              iVar17 = local_d8 + 0x1e;
              if (-1 < (int)(local_d8 + -1)) {
                iVar17 = local_d8 + -1;
              }
              uVar18 = 0;
              uVar22 = (ulonglong)(uint)(iVar17 >> 5);
              if (iVar17 >> 5 < 1) {
                uVar22 = uVar18;
              }
              iVar17 = 0;
              do {
                if (uVar22 == uVar18) goto LAB_14458c6a9;
                iVar17 = iVar17 + 0x20;
                uVar20 = puVar12[uVar18 + 1];
                uVar18 = uVar18 + 1;
              } while (uVar20 == 0);
            }
            else {
              uVar18 = 0;
              iVar17 = 0;
            }
            uVar31 = (ulonglong)(-uVar20 & uVar20);
            uVar22 = uVar31 * 2 + 1;
            lVar27 = 0x3f;
            if (uVar22 != 0) {
              for (; uVar22 >> lVar27 == 0; lVar27 = lVar27 + -1) {
              }
            }
            uVar20 = (iVar17 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
            if ((int)local_d8 <= (int)uVar20) {
              uVar20 = local_d8;
            }
          }
          if (uVar20 != local_d8) {
            uVar23 = 0xffffffff;
            do {
              if ((int)puStack_1d0 != iStack_1a4) {
                lVar27 = *(longlong *)(local_100 + (longlong)(int)uVar20 * 0x20);
                uVar4 = (uint)((ulonglong)lVar27 >> 0x10);
                uVar21 = (uint)lVar27 & 0xffff;
                plVar26 = local_198;
                if (local_198 == (longlong *)0x0) {
                  plVar26 = &lStack_1a0;
                }
                iVar14 = *(int *)((longlong)plVar26 +
                                 (ulonglong)
                                 (local_190 - 1U &
                                 (int)((ulonglong)lVar27 >> 0x20) + ((uint)lVar27 << 0x10 | uVar21)
                                 + (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar21 >> 4)) * 4);
                while (iVar14 != -1) {
                  plVar26 = (longlong *)((longlong)local_1d8 + (longlong)iVar14 * 0x14);
                  if (*plVar26 == lVar27) {
                    if (plVar26 != (longlong *)0x0) {
                      iVar14 = (int)plVar26[1];
                      plVar26 = plVar26 + 1;
                      goto LAB_14458c937;
                    }
                    break;
                  }
                  iVar14 = *(int *)((longlong)plVar26 + 0xc);
                }
              }
              local_1e8 = (uint *)(local_100 + (longlong)(int)uVar20 * 0x20);
              iVar14 = 0;
              FUN_140818534(&local_1d8,local_1ec,&local_1e8,0);
              plVar26 = (longlong *)((longlong)local_1d8 + (longlong)(int)local_1ec * 0x14 + 8);
              *(undefined4 *)plVar26 = 0;
LAB_14458c937:
              *(int *)plVar26 = iVar14 + 1;
              uVar23 = uVar23 & ~(uint)uVar31;
              puVar12 = local_e0;
              if (local_e0 == (uint *)0x0) {
                puVar12 = local_f0;
              }
              iVar14 = (int)uVar18;
              lVar27 = (longlong)iVar14;
              uVar20 = puVar12[lVar27] & uVar23;
              if (uVar20 == 0) {
                iVar15 = local_d8 + 0x1e;
                if (-1 < (int)(local_d8 + -1)) {
                  iVar15 = local_d8 + -1;
                }
                iVar15 = iVar15 >> 5;
                iVar17 = iVar17 + 0x20;
                iVar13 = iVar15;
                if (iVar15 < iVar14) {
                  iVar13 = iVar14;
                }
                if (iVar14 < iVar15) {
                  lVar28 = 0;
                  do {
                    uVar20 = puVar12[lVar27 + lVar28 + 1];
                    if (uVar20 != 0) {
                      uVar18 = (ulonglong)(iVar14 + (int)lVar28 + 1);
                      uVar23 = 0xffffffff;
                      goto LAB_14458c9c5;
                    }
                    iVar17 = iVar17 + 0x20;
                    lVar28 = lVar28 + 1;
                  } while (iVar13 - lVar27 != lVar28);
                  uVar23 = 0xffffffff;
                  iVar14 = iVar13;
                }
                uVar18 = (ulonglong)(iVar14 + 1);
                uVar20 = local_d8;
              }
              else {
LAB_14458c9c5:
                uVar31 = (ulonglong)(-uVar20 & uVar20);
                uVar22 = uVar31 * 2 + 1;
                lVar27 = 0x3f;
                if (uVar22 != 0) {
                  for (; uVar22 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                  }
                }
                uVar20 = (iVar17 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
                if ((int)local_d8 <= (int)uVar20) {
                  uVar20 = local_d8;
                }
              }
            } while (uVar20 != uVar7);
          }
LAB_14458c6a9:
          if (0 < iVar30) {
            uVar18 = 0;
            do {
              local_1f0 = *(uint *)(local_110 + uVar18 * 4);
              if (((local_280 & 1) != 0) && ((longlong)uVar18 < (longlong)*(int *)(param_1 + 0x60)))
              {
                local_280 = CONCAT71(local_280._1_7_,*(uint *)(*local_270 + uVar18 * 4) == local_1f0
                                    );
              }
              if (*(int *)(param_1 + 0x328) != *(int *)(param_1 + 0x354)) {
                lVar27 = *(longlong *)(param_1 + 0x360);
                if (*(longlong *)(param_1 + 0x360) == 0) {
                  lVar27 = local_220;
                }
                iVar30 = *(int *)(lVar27 + (ulonglong)(*(int *)(param_1 + 0x368) - 1U & local_1f0) *
                                           4);
                if (iVar30 != -1) {
                  do {
                    if (*(uint *)(*local_260 + (longlong)iVar30 * 0x10) == local_1f0)
                    goto LAB_14458c7b2;
                    iVar30 = *(int *)((longlong)iVar30 * 0x10 + *local_260 + 8);
                  } while (iVar30 != -1);
                }
              }
              iVar30 = *(int *)(param_1 + 0x60);
              *(uint *)(param_1 + 0x60) = iVar30 + 1U;
              if (*(uint *)(param_1 + 100) < iVar30 + 1U) {
                FUN_1446f48e2(local_270,iVar30);
              }
              *(uint *)(*local_270 + (longlong)iVar30 * 4) = local_1f0;
              local_1f4 = iVar30;
              local_1e8 = &local_1f0;
              local_1e0 = (undefined8 ***)&local_1f4;
              FUN_140263e2a(local_260,local_1ec);
LAB_14458c7b2:
              uVar18 = uVar18 + 1;
            } while (uVar18 != uVar24);
          }
        }
        puVar8 = (undefined8 *)FUN_14001cc68(0x130,0x10);
        *puVar8 = 0;
        FUN_1496ef2ec(puVar8 + 1,local_188);
        if (puVar8 != (undefined8 *)0x0) {
          *local_208 = puVar8;
          local_208 = puVar8;
        }
        cVar6 = FUN_1496e7b56(local_250,local_188);
      } while (cVar6 != '\0');
      local_2a0 = (ulonglong)uStack_1b0;
      if (uStack_1b0 != 0) {
        local_290 = CONCAT44(local_290._4_4_,*(undefined4 *)(param_1 + 0x60));
        puVar12 = local_1b8;
        if (local_1b8 == (uint *)0x0) {
          puVar12 = local_1c8;
        }
        uVar7 = *puVar12;
        if (uVar7 == 0) {
          iVar30 = uStack_1b0 + 0x1e;
          if (-1 < (int)(uStack_1b0 - 1)) {
            iVar30 = uStack_1b0 - 1;
          }
          uVar24 = 0;
          uVar18 = (ulonglong)(uint)(iVar30 >> 5);
          if (iVar30 >> 5 < 1) {
            uVar18 = uVar24;
          }
          iVar30 = 0;
          do {
            if (uVar18 == uVar24) goto LAB_14458dd7f;
            iVar30 = iVar30 + 0x20;
            uVar7 = puVar12[uVar24 + 1];
            uVar24 = uVar24 + 1;
          } while (uVar7 == 0);
        }
        else {
          uVar24 = 0;
          iVar30 = 0;
        }
        uVar22 = (ulonglong)(-uVar7 & uVar7);
        uVar18 = uVar22 * 2 + 1;
        lVar27 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar27 == 0; lVar27 = lVar27 + -1) {
          }
        }
        uVar7 = (iVar30 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
        if ((int)uVar7 < (int)uStack_1b0) {
          local_2a8 = (longlong *)(param_1 + 0x68);
          local_288 = param_1 + 0xa0;
          uVar20 = 0xffffffff;
          do {
            plVar26 = local_2a8;
            puVar12 = (uint *)((longlong)local_1d8 + (longlong)(int)uVar7 * 0x14);
            if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
              lVar27 = *(longlong *)((longlong)local_1d8 + (longlong)(int)uVar7 * 0x14);
              uVar7 = (uint)((ulonglong)lVar27 >> 0x10);
              uVar23 = (uint)lVar27 & 0xffff;
              uVar18 = *(ulonglong *)(param_1 + 0xa8);
              if (*(ulonglong *)(param_1 + 0xa8) == 0) {
                uVar18 = local_288;
              }
              iVar17 = *(int *)(uVar18 + (ulonglong)
                                         (*(int *)(param_1 + 0xb0) - 1U &
                                         (int)((ulonglong)lVar27 >> 0x20) +
                                         ((uint)lVar27 << 0x10 | uVar23) +
                                         (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar23 >> 4)) * 4);
              if (iVar17 != -1) {
                do {
                  lVar28 = *local_2a8 + (longlong)iVar17 * 0x20;
                  if (*(longlong *)(*local_2a8 + (longlong)iVar17 * 0x20) == lVar27) {
                    if (lVar28 != 0) {
                      plVar26 = (longlong *)(lVar28 + 8);
                      goto LAB_14458dc95;
                    }
                    break;
                  }
                  iVar17 = *(int *)(lVar28 + 0x18);
                } while (iVar17 != -1);
              }
            }
            local_1e8 = puVar12;
            FUN_1496ef524(local_2a8,local_1ec,&local_1e8);
            plVar26 = (longlong *)(*plVar26 + (longlong)(int)local_1ec * 0x20 + 8);
            FUN_1493be3fc(plVar26,local_290 & 0xffffffff,1);
LAB_14458dc95:
            if ((longlong)(int)plVar26[1] != 0) {
              lVar27 = *plVar26;
              lVar28 = (longlong)(int)plVar26[1] << 7;
              do {
                FUN_147a41192(lVar27,puVar12[2] + *(int *)(lVar27 + 0x78));
                lVar27 = lVar27 + 0x80;
                lVar28 = lVar28 + -0x80;
              } while (lVar28 != 0);
            }
            uVar20 = uVar20 & ~(uint)uVar22;
            puVar12 = local_1b8;
            if (local_1b8 == (uint *)0x0) {
              puVar12 = local_1c8;
            }
            iVar17 = (int)uVar24;
            lVar27 = (longlong)iVar17;
            uVar7 = puVar12[lVar27] & uVar20;
            if (uVar7 == 0) {
              iVar14 = uStack_1b0 + 0x1e;
              if (-1 < (int)(uStack_1b0 - 1)) {
                iVar14 = uStack_1b0 - 1;
              }
              iVar14 = iVar14 >> 5;
              iVar30 = iVar30 + 0x20;
              iVar15 = iVar14;
              if (iVar14 < iVar17) {
                iVar15 = iVar17;
              }
              if (iVar17 < iVar14) {
                lVar28 = 0;
                do {
                  uVar7 = puVar12[lVar27 + lVar28 + 1];
                  if (uVar7 != 0) {
                    uVar24 = (ulonglong)(iVar17 + (int)lVar28 + 1);
                    uVar20 = 0xffffffff;
                    goto LAB_14458dd44;
                  }
                  iVar30 = iVar30 + 0x20;
                  lVar28 = lVar28 + 1;
                } while (iVar15 - lVar27 != lVar28);
                uVar20 = 0xffffffff;
                iVar17 = iVar15;
              }
              uVar24 = (ulonglong)(iVar17 + 1);
              uVar7 = uStack_1b0;
            }
            else {
LAB_14458dd44:
              uVar22 = (ulonglong)(-uVar7 & uVar7);
              uVar18 = uVar22 * 2 + 1;
              lVar27 = 0x3f;
              if (uVar18 != 0) {
                for (; uVar18 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                }
              }
              uVar7 = (iVar30 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
              if ((int)uStack_1b0 <= (int)uVar7) {
                uVar7 = uStack_1b0;
              }
            }
          } while (uVar7 != (uint)local_2a0);
        }
      }
    }
LAB_14458dd7f:
    FUN_145e15580(local_188);
    local_190 = 0;
    if (local_198 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_1401ad17c(&local_1d8);
    uVar24 = 0;
    local_140 = (uint *)0x0;
    local_138 = 0;
    local_180 = 0;
    uStack_178 = 0;
    local_170 = 0;
    uStack_168 = 0;
    local_160 = 0;
    uStack_158 = 0;
    local_134 = 0xffffffff00000080;
    local_12c = 0;
    local_120 = 0;
    local_118 = 0;
    local_e0 = (uint *)0x0;
    local_d8 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_d4 = 0xffffffff00000080;
    local_cc = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_90 = (uint *)0x0;
    local_88 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_84 = 0xffffffff00000080;
    local_7c = 0;
    local_70 = 0;
    local_68 = 0;
    cVar6 = FUN_1496efa60(&local_208);
    if (cVar6 != '\0') {
      local_278 = (longlong *)(param_1 + 0x68);
      local_228 = (longlong *)(param_1 + 0xa0);
      local_238 = (longlong *)(param_1 + 0x38);
      local_298 = (longlong *)(param_1 + 0x48);
      local_248 = (longlong *)(param_1 + 0x1b8);
      local_210 = param_1 + 0x1f0;
      local_230 = (longlong *)(param_1 + 0x158);
      local_218 = param_1 + 400;
      uVar24 = 0;
      do {
        iVar30 = (int)uStack_178;
        uVar18 = (ulonglong)(int)uStack_178;
        local_2a8 = (longlong *)(uStack_108 & 0xffffffff);
        iVar17 = (int)uStack_108;
        if (0 < (longlong)uVar18) {
          iVar17 = (int)uStack_178;
        }
        local_268 = (longlong *)CONCAT44(local_268._4_4_,iVar17);
        iVar17 = 0;
        uVar22 = 1;
        uVar31 = 0;
        uVar7 = 0;
        local_250 = uVar24;
        if (local_d8 != 0) {
          puVar12 = local_e0;
          if (local_e0 == (uint *)0x0) {
            puVar12 = local_f0;
          }
          uVar7 = *puVar12;
          if (uVar7 == 0) {
            iVar17 = local_d8 + 0x1e;
            if (-1 < (int)(local_d8 - 1)) {
              iVar17 = local_d8 - 1;
            }
            uVar31 = 0;
            uVar24 = (ulonglong)(uint)(iVar17 >> 5);
            if (iVar17 >> 5 < 1) {
              uVar24 = 0;
            }
            iVar17 = 0;
            do {
              if (uVar24 == uVar31) goto LAB_14458e475;
              iVar17 = iVar17 + 0x20;
              uVar7 = puVar12[uVar31 + 1];
              uVar31 = uVar31 + 1;
            } while (uVar7 == 0);
          }
          else {
            iVar17 = 0;
            uVar31 = 0;
          }
          uVar22 = (ulonglong)(-uVar7 & uVar7);
          uVar24 = uVar22 * 2 + 1;
          lVar27 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar27 == 0; lVar27 = lVar27 + -1) {
            }
          }
          uVar7 = (iVar17 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
          if ((int)local_d8 <= (int)uVar7) {
            uVar7 = local_d8;
          }
        }
        if (uVar7 != local_d8) {
          uVar20 = 0xffffffff;
          plVar26 = local_298;
          local_240 = (ulonglong)local_d8;
          do {
            plVar25 = local_278;
            local_2a0 = CONCAT44(local_2a0._4_4_,iVar17);
            ppuVar2 = (undefined8 **)(local_100 + (longlong)(int)uVar7 * 0x20);
            local_290 = uVar22;
            local_288 = uVar31;
            local_254 = uVar20;
            if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
              lVar27 = *(longlong *)(local_100 + (longlong)(int)uVar7 * 0x20);
              uVar7 = (uint)((ulonglong)lVar27 >> 0x10);
              uVar20 = (uint)lVar27 & 0xffff;
              plVar29 = *(longlong **)(param_1 + 0xa8);
              if (*(longlong **)(param_1 + 0xa8) == (longlong *)0x0) {
                plVar29 = local_228;
              }
              iVar17 = *(int *)((longlong)plVar29 +
                               (ulonglong)
                               (*(int *)(param_1 + 0xb0) - 1U &
                               (int)((ulonglong)lVar27 >> 0x20) + ((uint)lVar27 << 0x10 | uVar20) +
                               (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar20 >> 4)) * 4);
              if (iVar17 != -1) {
                do {
                  lVar28 = *local_278 + (longlong)iVar17 * 0x20;
                  if (*(longlong *)(*local_278 + (longlong)iVar17 * 0x20) == lVar27) {
                    if (lVar28 != 0) {
                      plVar25 = (longlong *)(lVar28 + 8);
                      goto LAB_14458e0b1;
                    }
                    break;
                  }
                  iVar17 = *(int *)(lVar28 + 0x18);
                } while (iVar17 != -1);
              }
            }
            local_1d8 = ppuVar2;
            FUN_1496ef524(local_278,&local_1e8,&local_1d8);
            plVar25 = (longlong *)(*plVar25 + (longlong)(int)local_1e8 * 0x20 + 8);
            FUN_1493be3fc(plVar25,(ulonglong)local_268 & 0xffffffff,1);
LAB_14458e0b1:
            if (iVar30 < 1) {
              if ((local_280 & 1) == 0) {
                if (0 < (int)local_268) {
                  plVar29 = (longlong *)0x0;
                  do {
                    local_1ec = *(undefined1 (*) [4])(local_110 + (longlong)plVar29 * 4);
                    if (*(int *)(param_1 + 0x328) != *(int *)(param_1 + 0x354)) {
                      lVar27 = *(longlong *)(param_1 + 0x360);
                      if (*(longlong *)(param_1 + 0x360) == 0) {
                        lVar27 = local_220;
                      }
                      iVar17 = *(int *)(lVar27 + (ulonglong)
                                                 (*(int *)(param_1 + 0x368) - 1U & (uint)local_1ec)
                                                 * 4);
                      if (iVar17 != -1) {
                        do {
                          lVar27 = *local_260 + (longlong)iVar17 * 0x10;
                          if ((undefined1  [4])*(uint *)(*local_260 + (longlong)iVar17 * 0x10) ==
                              local_1ec) {
                            if (lVar27 != 0) goto LAB_14458e31e;
                            break;
                          }
                          iVar17 = *(int *)(lVar27 + 8);
                        } while (iVar17 != -1);
                      }
                    }
                    uVar7 = *(uint *)(param_1 + 0x60);
                    *(uint *)(param_1 + 0x60) = uVar7 + 1;
                    if (*(uint *)(param_1 + 100) < uVar7 + 1) {
                      FUN_1446f48e2(local_270,uVar7);
                    }
                    plVar5 = local_260;
                    *(undefined1 (*) [4])(*local_270 + (longlong)(int)uVar7 * 4) = local_1ec;
                    local_1d8 = (undefined8 **)local_1ec;
                    puStack_1d0 = &local_1f0;
                    local_1f0 = uVar7;
                    FUN_140c0fbee(local_260,&local_1e8,&local_1d8,0);
                    lVar27 = *plVar5 + (longlong)(int)local_1e8 * 0x10;
LAB_14458e31e:
                    LOCK();
                    UNLOCK();
                    local_2b0 = DAT_14c761474 + 1;
                    local_2b8 = 0;
                    DAT_14c761474 = DAT_14c761474 + 1;
                    FUN_1406507bc((longlong)*(int *)(lVar27 + 4) * 0x80 + *plVar25,&local_1d8,
                                  local_188[0]);
                    plVar29 = (longlong *)((longlong)plVar29 + 1);
                  } while (plVar29 != local_2a8);
                }
              }
              else {
                lVar27 = (longlong)*(int *)(ppuVar2 + 2);
                if (lVar27 != 0) {
                  lVar16 = 0;
                  lVar28 = 0;
                  do {
                    LOCK();
                    UNLOCK();
                    local_2b0 = DAT_14c761474 + 1;
                    local_2b8 = 0;
                    DAT_14c761474 = DAT_14c761474 + 1;
                    FUN_1406507bc(*plVar25 + lVar28,&local_1d8,local_188[0]);
                    lVar28 = lVar28 + 0x80;
                    lVar16 = lVar16 + 4;
                  } while (lVar27 * 4 != lVar16);
                }
              }
            }
            else if (0 < (int)local_268) {
              uVar24 = 0;
              do {
                plVar29 = local_238;
                iVar17 = *(int *)(local_180 + uVar24 * 0x90);
                lVar27 = *(longlong *)(param_1 + 0x38);
                iVar14 = *(int *)(param_1 + 0x40);
                lVar28 = (longlong)iVar14;
                if (lVar28 != 0) {
                  lVar16 = lVar28 * 4;
                  lVar9 = 0;
                  do {
                    if (*(int *)(lVar27 + lVar9 * 4) == iVar17) {
                      if ((int)lVar9 != -1) goto LAB_14458e109;
                      break;
                    }
                    lVar9 = lVar9 + 1;
                    lVar16 = lVar16 + -4;
                  } while (lVar16 != 0);
                }
                *(uint *)(param_1 + 0x40) = iVar14 + 1U;
                if (*(uint *)(param_1 + 0x44) < iVar14 + 1U) {
                  FUN_1446f48e2(local_238,iVar14);
                  lVar27 = *plVar29;
                  plVar26 = local_298;
                }
                *(int *)(lVar27 + lVar28 * 4) = iVar17;
                lVar9 = FUN_1496efb5e(plVar26);
LAB_14458e109:
                LOCK();
                UNLOCK();
                local_2b0 = DAT_14c761474 + 1;
                local_2b8 = 0;
                DAT_14c761474 = DAT_14c761474 + 1;
                FUN_1406507bc((longlong)(int)lVar9 * 0x80 + *plVar25,&local_1d8,local_188[0]);
                uVar24 = uVar24 + 1;
              } while (uVar24 != uVar18);
            }
            uVar20 = local_254 & ~(uint)local_290;
            puVar12 = local_e0;
            if (local_e0 == (uint *)0x0) {
              puVar12 = local_f0;
            }
            iVar14 = (int)local_288;
            lVar27 = (longlong)iVar14;
            uVar7 = puVar12[lVar27] & uVar20;
            uVar31 = local_288;
            iVar17 = (uint)local_2a0;
            if (uVar7 == 0) {
              iVar15 = local_d8 + 0x1e;
              if (-1 < (int)(local_d8 - 1)) {
                iVar15 = local_d8 - 1;
              }
              iVar15 = iVar15 >> 5;
              iVar17 = (uint)local_2a0 + 0x20;
              iVar13 = iVar15;
              if (iVar15 < iVar14) {
                iVar13 = iVar14;
              }
              if (iVar14 < iVar15) {
                lVar28 = 0;
                do {
                  uVar7 = puVar12[lVar28 + lVar27 + 1];
                  if (uVar7 != 0) {
                    uVar20 = 0xffffffff;
                    uVar31 = (ulonglong)(iVar14 + (int)lVar28 + 1);
                    goto LAB_14458e411;
                  }
                  iVar17 = iVar17 + 0x20;
                  lVar28 = lVar28 + 1;
                } while (iVar13 - lVar27 != lVar28);
                uVar20 = 0xffffffff;
                iVar14 = iVar13;
              }
              uVar31 = (ulonglong)(iVar14 + 1);
              plVar26 = local_298;
              uVar22 = local_290;
              uVar7 = local_d8;
            }
            else {
LAB_14458e411:
              uVar22 = (ulonglong)(-uVar7 & uVar7);
              uVar24 = uVar22 * 2 + 1;
              lVar27 = 0x3f;
              if (uVar24 != 0) {
                for (; uVar24 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                }
              }
              uVar7 = (iVar17 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
              if ((int)local_d8 <= (int)uVar7) {
                uVar7 = local_d8;
              }
            }
          } while (uVar7 != (uint)local_240);
          uVar18 = uStack_178 & 0xffffffff;
        }
LAB_14458e475:
        local_2a0 = CONCAT71(local_2a0._1_7_,0 < (int)local_268);
        fVar32 = *(float *)(param_1 + 0x370);
        if (local_188[0] <= *(float *)(param_1 + 0x370)) {
          fVar32 = local_188[0];
        }
        *(float *)(param_1 + 0x370) = fVar32;
        fVar32 = *(float *)(param_1 + 0x374);
        if (*(float *)(param_1 + 0x374) <= local_188[0]) {
          fVar32 = local_188[0];
        }
        *(float *)(param_1 + 0x374) = fVar32;
        local_288 = CONCAT71(local_288._1_7_,0 < (int)uVar18);
        if (0 < (int)uVar18) {
          local_2a8 = (longlong *)(uVar18 & 0xffffffff);
          plVar26 = (longlong *)0x0;
          do {
            lVar28 = local_180;
            plVar25 = local_238;
            iVar30 = *(int *)(local_180 + (longlong)plVar26 * 0x90);
            lVar27 = *(longlong *)(param_1 + 0x38);
            iVar17 = *(int *)(param_1 + 0x40);
            lVar16 = (longlong)iVar17;
            if (lVar16 != 0) {
              lVar9 = lVar16 * 4;
              lVar10 = 0;
              do {
                if (*(int *)(lVar27 + lVar10 * 4) == iVar30) {
                  plVar29 = local_298;
                  if ((int)lVar10 != -1) goto LAB_14458e540;
                  break;
                }
                lVar10 = lVar10 + 1;
                lVar9 = lVar9 + -4;
              } while (lVar9 != 0);
            }
            *(uint *)(param_1 + 0x40) = iVar17 + 1U;
            if (*(uint *)(param_1 + 0x44) < iVar17 + 1U) {
              FUN_1446f48e2(local_238,iVar17);
              lVar27 = *plVar25;
            }
            plVar29 = local_298;
            *(int *)(lVar27 + lVar16 * 4) = iVar30;
            lVar10 = FUN_1496efb5e(local_298);
LAB_14458e540:
            lVar27 = (longlong)(int)lVar10 * 0x98 + *plVar29;
            lVar28 = lVar28 + (longlong)plVar26 * 0x90;
            cVar6 = FUN_1496efb98(lVar27,local_188[0],*(undefined1 *)(lVar28 + 0x70),lVar28 + 0x10);
            if ((cVar6 != '\0') && (iVar30 = *(int *)(lVar28 + 0x80), (longlong)iVar30 != 0)) {
              lVar28 = *(longlong *)(lVar28 + 0x78);
              lVar16 = 0;
              do {
                puStack_1d0 = (uint *)CONCAT44(puStack_1d0._4_4_,
                                               *(undefined4 *)(lVar28 + 8 + lVar16));
                local_1d8 = *(undefined8 ***)(lVar28 + lVar16);
                uVar7 = (uint)((ulonglong)local_1d8 >> 0x10);
                uVar20 = (uint)local_1d8 & 0xffff;
                uVar11 = FUN_1496efdf0(lVar27 + 0x48,
                                       ((uint)local_1d8 << 0x10 | uVar20) +
                                       (int)((ulonglong)local_1d8 >> 0x20) +
                                       (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar20 >> 4));
                LOCK();
                UNLOCK();
                local_2b0 = DAT_14c761474 + 1;
                local_2b8 = 0;
                DAT_14c761474 = DAT_14c761474 + 1;
                FUN_1406507bc(uVar11,&local_1e8);
                lVar16 = lVar16 + 0xc;
              } while ((longlong)iVar30 * 0xc != lVar16);
            }
            plVar26 = (longlong *)((longlong)plVar26 + 1);
          } while (plVar26 != local_2a8);
        }
        iVar30 = local_138;
        if (local_138 == 0) {
          plVar26 = (longlong *)&DAT_00000001;
          uVar24 = 0;
          iVar17 = 0;
          iVar14 = 0;
        }
        else {
          puVar12 = local_140;
          if (local_140 == (uint *)0x0) {
            puVar12 = local_150;
          }
          uVar7 = *puVar12;
          if (uVar7 == 0) {
            iVar17 = local_138 + 0x1e;
            if (-1 < local_138 + -1) {
              iVar17 = local_138 + -1;
            }
            uVar24 = 0;
            uVar18 = (ulonglong)(uint)(iVar17 >> 5);
            if (iVar17 >> 5 < 1) {
              uVar18 = uVar24;
            }
            iVar17 = 0;
            do {
              if (uVar18 == uVar24) goto LAB_14458e6e6;
              iVar17 = iVar17 + 0x20;
              uVar7 = puVar12[uVar24 + 1];
              uVar24 = uVar24 + 1;
            } while (uVar7 == 0);
          }
          else {
            uVar24 = 0;
            iVar17 = 0;
          }
          plVar26 = (longlong *)(ulonglong)(-uVar7 & uVar7);
          uVar18 = (longlong)plVar26 * 2 + 1;
          lVar27 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar27 == 0; lVar27 = lVar27 + -1) {
            }
          }
          iVar14 = (iVar17 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
          if (local_138 <= iVar14) {
            iVar14 = local_138;
          }
        }
        if (iVar14 != local_138) {
          uVar7 = 0xffffffff;
          do {
            puVar12 = (uint *)(local_160 + (longlong)iVar14 * 0x48);
            ppuVar2 = *(undefined8 ***)puVar12;
            if (*(int *)(param_1 + 0x1c0) != *(int *)(param_1 + 0x1ec)) {
              uVar20 = (uint)((ulonglong)ppuVar2 >> 0x10);
              uVar23 = (uint)ppuVar2 & 0xffff;
              lVar27 = *(longlong *)(param_1 + 0x1f8);
              if (*(longlong *)(param_1 + 0x1f8) == 0) {
                lVar27 = local_210;
              }
              iVar14 = *(int *)(lVar27 + (ulonglong)
                                         (*(int *)(param_1 + 0x200) - 1U &
                                         (int)((ulonglong)ppuVar2 >> 0x20) +
                                         ((uint)ppuVar2 << 0x10 | uVar23) +
                                         (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar23 >> 4)) * 4);
              if (iVar14 != -1) {
                do {
                  plVar25 = (longlong *)(*local_248 + (longlong)iVar14 * 0x48);
                  if ((undefined8 **)*plVar25 == ppuVar2) {
                    if (plVar25 != (longlong *)0x0) goto LAB_14458e914;
                    break;
                  }
                  iVar14 = (int)plVar25[8];
                } while (iVar14 != -1);
              }
            }
            puStack_1d0 = *(uint **)(puVar12 + 4);
            local_2a8 = plVar26;
            local_1d8 = ppuVar2;
            if ((puStack_1d0 != (uint *)0x0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c();
            }
            plVar26 = local_248;
            local_1b8 = (uint *)0x0;
            uStack_1b0 = 0;
            uStack_1ac = 0;
            local_1c8[0] = 0;
            local_1c8[1] = 0;
            local_1c8[2] = 0;
            local_1c8[3] = 0;
            local_1e8 = puVar12;
            local_1e0 = &local_1d8;
            FUN_1496f04d2(local_248,local_1ec,&local_1e8);
            plVar25 = (longlong *)(*plVar26 + (longlong)(int)local_1ec * 0x48);
            FUN_1496e5474(&local_1d8);
            plVar26 = local_2a8;
LAB_14458e914:
            FUN_1496e5b70(plVar25 + 1,puVar12 + 2);
            uVar7 = uVar7 & ~(uint)plVar26;
            puVar12 = local_140;
            if (local_140 == (uint *)0x0) {
              puVar12 = local_150;
            }
            iVar14 = (int)uVar24;
            lVar27 = (longlong)iVar14;
            uVar20 = puVar12[lVar27] & uVar7;
            if (uVar20 == 0) {
              iVar15 = local_138 + 0x1e;
              if (-1 < local_138 + -1) {
                iVar15 = local_138 + -1;
              }
              iVar15 = iVar15 >> 5;
              iVar17 = iVar17 + 0x20;
              iVar13 = iVar15;
              if (iVar15 < iVar14) {
                iVar13 = iVar14;
              }
              if (iVar14 < iVar15) {
                lVar28 = 0;
                do {
                  uVar20 = puVar12[lVar27 + lVar28 + 1];
                  if (uVar20 != 0) {
                    uVar24 = (ulonglong)(iVar14 + (int)lVar28 + 1);
                    uVar7 = 0xffffffff;
                    goto LAB_14458e9a6;
                  }
                  iVar17 = iVar17 + 0x20;
                  lVar28 = lVar28 + 1;
                } while (iVar13 - lVar27 != lVar28);
                uVar7 = 0xffffffff;
                iVar14 = iVar13;
              }
              uVar24 = (ulonglong)(iVar14 + 1);
              iVar14 = local_138;
            }
            else {
LAB_14458e9a6:
              plVar26 = (longlong *)(ulonglong)(-uVar20 & uVar20);
              uVar18 = (longlong)plVar26 * 2 + 1;
              lVar27 = 0x3f;
              if (uVar18 != 0) {
                for (; uVar18 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                }
              }
              iVar14 = (iVar17 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
              if (local_138 <= iVar14) {
                iVar14 = local_138;
              }
            }
          } while (iVar14 != iVar30);
        }
LAB_14458e6e6:
        iVar30 = local_88;
        if (local_88 == 0) {
          plVar26 = (longlong *)&DAT_00000001;
          uVar24 = 0;
          iVar17 = 0;
          iVar14 = 0;
        }
        else {
          puVar12 = local_90;
          if (local_90 == (uint *)0x0) {
            puVar12 = local_a0;
          }
          uVar7 = *puVar12;
          if (uVar7 == 0) {
            iVar17 = local_88 + 0x1e;
            if (-1 < local_88 + -1) {
              iVar17 = local_88 + -1;
            }
            uVar24 = 0;
            uVar18 = (ulonglong)(uint)(iVar17 >> 5);
            if (iVar17 >> 5 < 1) {
              uVar18 = uVar24;
            }
            iVar17 = 0;
            do {
              if (uVar18 == uVar24) goto LAB_14458e77d;
              iVar17 = iVar17 + 0x20;
              uVar7 = puVar12[uVar24 + 1];
              uVar24 = uVar24 + 1;
            } while (uVar7 == 0);
          }
          else {
            uVar24 = 0;
            iVar17 = 0;
          }
          plVar26 = (longlong *)(ulonglong)(-uVar7 & uVar7);
          uVar18 = (longlong)plVar26 * 2 + 1;
          lVar27 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar27 == 0; lVar27 = lVar27 + -1) {
            }
          }
          iVar14 = (iVar17 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
          if (local_88 <= iVar14) {
            iVar14 = local_88;
          }
        }
        if (iVar14 != local_88) {
          uVar7 = 0xffffffff;
          do {
            plVar25 = local_230;
            puVar12 = (uint *)(local_b0 + (longlong)iVar14 * 0x80);
            if (*(int *)(param_1 + 0x160) != *(int *)(param_1 + 0x18c)) {
              lVar27 = *(longlong *)(local_b0 + (longlong)iVar14 * 0x80);
              uVar20 = (uint)((ulonglong)lVar27 >> 0x10);
              uVar23 = (uint)lVar27 & 0xffff;
              lVar28 = *(longlong *)(param_1 + 0x198);
              if (*(longlong *)(param_1 + 0x198) == 0) {
                lVar28 = local_218;
              }
              iVar14 = *(int *)(lVar28 + (ulonglong)
                                         (*(int *)(param_1 + 0x1a0) - 1U &
                                         (int)((ulonglong)lVar27 >> 0x20) +
                                         ((uint)lVar27 << 0x10 | uVar23) +
                                         (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar23 >> 4)) * 4);
              if (iVar14 != -1) {
                do {
                  lVar28 = *local_230 + (longlong)iVar14 * 0x58;
                  if (*(longlong *)(*local_230 + (longlong)iVar14 * 0x58) == lVar27) {
                    if (lVar28 != 0) goto LAB_14458eb55;
                    break;
                  }
                  iVar14 = *(int *)(lVar28 + 0x50);
                } while (iVar14 != -1);
              }
            }
            uStack_1a8 = 0;
            iStack_1a4 = 0;
            lStack_1a0 = 0;
            local_1b8 = (uint *)0x0;
            uStack_1b0 = 0;
            uStack_1ac = 0;
            local_1c8[0] = 0;
            local_1c8[1] = 0;
            local_1c8[2] = 0;
            local_1c8[3] = 0;
            local_1d8 = (undefined8 **)0x0;
            puStack_1d0 = (uint *)0x0;
            local_198 = (longlong *)0x0;
            local_1e0 = &local_1d8;
            local_2a8 = plVar26;
            local_1e8 = puVar12;
            FUN_1496f0628(local_230,local_1ec,&local_1e8);
            lVar27 = (longlong)(int)local_1ec;
            lVar28 = *plVar25;
            if (lStack_1a0 != 0) {
              FUN_1400020a8();
            }
            lVar28 = lVar28 + lVar27 * 0x58;
            FUN_1478571f4(&local_1d8);
            plVar26 = local_2a8;
LAB_14458eb55:
            FUN_1496efb98(lVar28 + 8,local_188[0],0,puVar12 + 4);
            uVar7 = uVar7 & ~(uint)plVar26;
            puVar12 = local_90;
            if (local_90 == (uint *)0x0) {
              puVar12 = local_a0;
            }
            iVar14 = (int)uVar24;
            lVar27 = (longlong)iVar14;
            uVar20 = puVar12[lVar27] & uVar7;
            if (uVar20 == 0) {
              iVar15 = local_88 + 0x1e;
              if (-1 < local_88 + -1) {
                iVar15 = local_88 + -1;
              }
              iVar15 = iVar15 >> 5;
              iVar17 = iVar17 + 0x20;
              iVar13 = iVar15;
              if (iVar15 < iVar14) {
                iVar13 = iVar14;
              }
              if (iVar14 < iVar15) {
                lVar28 = 0;
                do {
                  uVar20 = puVar12[lVar27 + lVar28 + 1];
                  if (uVar20 != 0) {
                    uVar24 = (ulonglong)(iVar14 + (int)lVar28 + 1);
                    uVar7 = 0xffffffff;
                    goto LAB_14458ebf3;
                  }
                  iVar17 = iVar17 + 0x20;
                  lVar28 = lVar28 + 1;
                } while (iVar13 - lVar27 != lVar28);
                uVar7 = 0xffffffff;
                iVar14 = iVar13;
              }
              uVar24 = (ulonglong)(iVar14 + 1);
              iVar14 = local_88;
            }
            else {
LAB_14458ebf3:
              plVar26 = (longlong *)(ulonglong)(-uVar20 & uVar20);
              uVar18 = (longlong)plVar26 * 2 + 1;
              lVar27 = 0x3f;
              if (uVar18 != 0) {
                for (; uVar18 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                }
              }
              iVar14 = (iVar17 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
              if (local_88 <= iVar14) {
                iVar14 = local_88;
              }
            }
          } while (iVar14 != iVar30);
        }
LAB_14458e77d:
        uVar24 = CONCAT71((int7)(local_250 >> 8),(byte)local_250 | (byte)local_288 | (byte)local_2a0
                         );
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
        cVar6 = FUN_1496efa60(&local_208);
      } while (cVar6 != '\0');
    }
    FUN_145e15580(local_188);
    while (puVar8 = local_200, local_200 != (undefined8 *)0x0) {
      puVar1 = local_200 + 1;
      local_200 = (undefined8 *)*local_200;
      FUN_145e15580(puVar1);
      FUN_1400020a8(puVar8);
    }
    if ((uVar24 & 1) == 0) goto LAB_14458d98f;
  }
  if ((longlong)*(int *)(param_1 + 0x50) == 0) {
    fVar33 = 3.4028235e+38;
    fVar32 = -3.4028235e+38;
  }
  else {
    fVar32 = -3.4028235e+38;
    fVar33 = 3.4028235e+38;
    lVar27 = 0;
    do {
      lVar28 = (longlong)*(int *)(*(longlong *)(param_1 + 0x48) + 0x40 + lVar27);
      if (lVar28 < 1) {
        fVar34 = 0.0;
        if (0.0 <= fVar33) {
          fVar33 = 0.0;
        }
      }
      else {
        pfVar3 = *(float **)(*(longlong *)(param_1 + 0x48) + 0x38 + lVar27);
        fVar34 = *pfVar3;
        if (fVar34 <= fVar33) {
          fVar33 = fVar34;
        }
        fVar34 = pfVar3[lVar28 + -1];
      }
      if (fVar32 <= fVar34) {
        fVar32 = fVar34;
      }
      lVar27 = lVar27 + 0x98;
    } while ((longlong)*(int *)(param_1 + 0x50) * 0x98 - lVar27 != 0);
  }
  iVar30 = *(int *)(param_1 + 0x90);
  if (iVar30 == 0) {
    uVar18 = 1;
    uVar24 = 0;
    iVar14 = 0;
    iVar17 = 0;
  }
  else {
    puVar12 = *(uint **)(param_1 + 0x88);
    if (*(uint **)(param_1 + 0x88) == (uint *)0x0) {
      puVar12 = (uint *)(param_1 + 0x78);
    }
    uVar7 = *puVar12;
    if (uVar7 == 0) {
      iVar17 = iVar30 + 0x1e;
      if (-1 < iVar30 + -1) {
        iVar17 = iVar30 + -1;
      }
      uVar24 = 0;
      uVar18 = (ulonglong)(uint)(iVar17 >> 5);
      if (iVar17 >> 5 < 1) {
        uVar18 = uVar24;
      }
      iVar14 = 0;
      do {
        if (uVar18 == uVar24) goto LAB_14458d986;
        iVar14 = iVar14 + 0x20;
        uVar7 = puVar12[uVar24 + 1];
        uVar24 = uVar24 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar24 = 0;
      iVar14 = 0;
    }
    uVar18 = (ulonglong)(-uVar7 & uVar7);
    uVar22 = uVar18 * 2 + 1;
    lVar27 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    iVar17 = (iVar14 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
    if (iVar30 <= iVar17) {
      iVar17 = iVar30;
    }
  }
  if (iVar17 != iVar30) {
    puVar12 = (uint *)(param_1 + 0x78);
    if (*(uint **)(param_1 + 0x88) != (uint *)0x0) {
      puVar12 = *(uint **)(param_1 + 0x88);
    }
    iVar15 = iVar30 + 0x1e;
    if (-1 < iVar30 + -1) {
      iVar15 = iVar30 + -1;
    }
    iVar15 = iVar15 >> 5;
    uVar7 = 0xffffffff;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x68) + 0x10 + (longlong)iVar17 * 0x20) != 0) {
        lVar27 = *(longlong *)((longlong)iVar17 * 0x20 + *(longlong *)(param_1 + 0x68) + 8);
        lVar28 = (longlong)*(int *)(lVar27 + 0x78);
        if (lVar28 == 0) {
          fVar34 = 0.0;
          fVar35 = 0.0;
        }
        else {
          lVar27 = *(longlong *)(lVar27 + 0x70);
          fVar34 = *(float *)(lVar27 + 4);
          fVar35 = *(float *)(lVar27 + -0x18 + lVar28 * 0x1c);
        }
        if (fVar34 <= fVar33) {
          fVar33 = fVar34;
        }
        if (fVar32 <= fVar35) {
          fVar32 = fVar35;
        }
      }
      uVar7 = uVar7 & ~(uint)uVar18;
      iVar17 = (int)uVar24;
      lVar27 = (longlong)iVar17;
      uVar20 = puVar12[lVar27] & uVar7;
      if (uVar20 == 0) {
        iVar13 = iVar15;
        if (iVar15 < iVar17) {
          iVar13 = iVar17;
        }
        if (iVar15 <= iVar17) break;
        lVar28 = 0;
        while( true ) {
          iVar14 = iVar14 + 0x20;
          uVar20 = puVar12[lVar27 + lVar28 + 1];
          if (uVar20 != 0) break;
          lVar28 = lVar28 + 1;
          if (iVar13 - lVar27 == lVar28) goto LAB_14458d986;
        }
        uVar24 = (ulonglong)(iVar17 + (int)lVar28 + 1);
        uVar7 = 0xffffffff;
      }
      uVar18 = (ulonglong)(-uVar20 & uVar20);
      uVar22 = uVar18 * 2 + 1;
      lVar27 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      iVar17 = (iVar14 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
    } while (iVar17 < iVar30);
  }
LAB_14458d986:
  *(float *)(param_1 + 0x28) = fVar32 - fVar33;
LAB_14458d98f:
  if ((*(int *)(param_1 + 0x50) == 0) && (*(int *)(param_1 + 0x70) == *(int *)(param_1 + 0x9c))) {
    if (*(float *)(param_1 + 0x370) < *(float *)(param_1 + 0x374)) {
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x374) - *(float *)(param_1 + 0x370);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14458ecb1 FUN_14458ecb1 body=47 status=ok
// SIG undefined FUN_14458ecb1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14458ecb1(void)

{
  _DAT_14cc22640 = 0;
  if (DAT_14cc22638 != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(&DAT_14cc225f8);
  return;
}



// FUNCTION 14458ece0 FUN_14458ece0 body=6525 status=ok
// SIG undefined FUN_14458ece0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_14458ece0(longlong *param_1,undefined1 (*param_2) [16],float param_3,double *param_4,
             char param_5)

{
  float *pfVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  undefined1 auVar12 [16];
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  double *pdVar17;
  undefined8 *puVar18;
  undefined1 (*pauVar19) [16];
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar34;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  double dVar41;
  double dVar42;
  double dVar47;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar48;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar49;
  double dVar50;
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar57;
  double dVar58;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar59;
  ulonglong uVar60;
  undefined1 auVar61 [16];
  double dVar62;
  double dVar63;
  double dVar64;
  undefined8 in_XMM5_Qb;
  double dVar66;
  undefined1 auVar65 [16];
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 uVar67;
  double dVar68;
  undefined1 auVar69 [16];
  float fVar70;
  undefined8 unaff_XMM8_Qb;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  uint uVar80;
  undefined1 auVar79 [16];
  double dVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined8 unaff_XMM14_Qb;
  double dVar84;
  double dVar85;
  double dVar86;
  undefined1 auStack_3b8 [32];
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  double local_378;
  double dStack_370;
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [12];
  uint uStack_2fc;
  double local_2f8;
  double dStack_2f0;
  undefined1 local_2e8 [12];
  undefined4 uStack_2dc;
  double local_2d8;
  double dStack_2d0;
  float local_2c8;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
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
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  uVar14 = *(uint *)(param_1 + 8);
  puVar18 = &DAT_14c846480;
  pauVar19 = param_2;
  for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
    *(undefined8 *)*pauVar19 = *puVar18;
    puVar18 = puVar18 + 1;
    pauVar19 = (undefined1 (*) [16])(*pauVar19 + 8);
  }
  if ((int)uVar14 < 1) goto LAB_14459020c;
  pfVar1 = (float *)param_1[7];
  uVar80 = uVar14 - 1;
  if (pfVar1[uVar80] <= param_3) {
    param_3 = pfVar1[uVar80];
  }
  if (param_3 <= *pfVar1) {
    param_3 = *pfVar1;
  }
  uVar22 = 0;
  uVar20 = (ulonglong)uVar14;
  do {
    uVar20 = uVar20 >> 1;
    uVar21 = (uint)uVar20 + uVar22;
    if (pfVar1[uVar21] <= param_3) {
      uVar22 = uVar21 + (uVar14 & 1);
    }
    bVar3 = 1 < uVar14;
    uVar14 = (uint)uVar20;
  } while (bVar3);
  if ((int)uVar22 < (int)uVar80) {
    uVar80 = uVar22;
  }
  uVar20 = 0;
  if (0 < (int)uVar80) {
    uVar20 = (ulonglong)uVar80;
  }
  uVar14 = 1;
  if (1 < (int)uVar80) {
    uVar14 = uVar80;
  }
  uVar60 = (ulonglong)(uVar14 - 1);
  lVar15 = param_1[2];
  lVar16 = uVar60 * 0x10;
  dVar25 = (double)*(float *)(lVar15 + 0xc + lVar16);
  auVar69._0_8_ = (double)*(float *)(lVar15 + 8 + lVar16);
  dVar35 = (double)*(float *)(lVar15 + 4 + lVar16);
  lVar2 = *param_1;
  auVar71._0_8_ = (double)*(float *)(lVar15 + lVar16);
  auVar71._8_8_ = unaff_XMM8_Qb;
  auVar72._8_8_ = dVar35;
  auVar72._0_8_ = auVar71._0_8_;
  auVar69._8_8_ = dVar25;
  dVar26 = (double)*(float *)(lVar2 + 8 + uVar60 * 0xc);
  dVar36 = (double)*(float *)(lVar2 + 4 + uVar60 * 0xc);
  dVar81 = (double)*(float *)(lVar2 + uVar60 * 0xc);
  lVar16 = uVar20 * 0x10;
  dVar41 = (double)*(float *)(lVar15 + 8 + lVar16);
  dVar62 = (double)*(float *)(lVar15 + lVar16);
  auVar73._8_8_ = (ulonglong)(double)*(float *)(lVar15 + 4 + lVar16);
  auVar73._0_8_ = (ulonglong)dVar62;
  auVar79._8_8_ = (double)*(float *)(lVar15 + 0xc + lVar16);
  auVar79._0_8_ = dVar41;
  dVar37 = (double)*(float *)(lVar2 + 8 + uVar20 * 0xc);
  dVar49 = (double)*(float *)(lVar2 + 4 + uVar20 * 0xc);
  dVar47 = (double)*(float *)(lVar2 + uVar20 * 0xc);
  dVar57 = 0.0;
  dVar63 = 0.0;
  if (param_4 == (double *)0x0) {
    dVar35 = 1.0;
    dVar62 = 1.0;
    dVar50 = 1.0;
    dVar58 = 0.0;
    local_398._8_8_ = 0x3ff0000000000000;
    local_398._0_8_ = 0x3ff0000000000000;
    dVar41 = 1.0;
    dVar25 = 0.0;
  }
  else {
    dStack_370 = 0.0;
    local_368._8_4_ = unaff_XMM6_Dc;
    local_368._0_8_ = dVar41;
    local_368._12_4_ = unaff_XMM6_Dd;
    dStack_2d0 = 0.0;
    local_358._8_4_ = SUB84(dVar49,0);
    local_358._0_8_ = dVar47;
    local_358._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
    local_398 = *(undefined1 (*) [16])(param_4 + 8);
    dVar41 = local_398._0_8_;
    dVar49 = local_398._8_8_;
    auVar72 = *(undefined1 (*) [16])(param_4 + 10);
    dVar47 = auVar72._0_8_;
    auVar82 = minpd(local_398,_DAT_149934d80);
    auVar52 = minpd(auVar72,ZEXT816(0x3ff0000000000000));
    auVar27._8_8_ = -(ulonglong)(auVar82._8_8_ < 0.0);
    auVar27._0_8_ = -(ulonglong)(auVar82._0_8_ < 0.0);
    iVar13 = movmskpd((int)uVar20 * 3,auVar27);
    auVar28._8_8_ = -(ulonglong)(auVar52._8_8_ < 0.0);
    auVar28._0_8_ = -(ulonglong)(auVar52._0_8_ < 0.0);
    uVar14 = movmskpd((int)lVar16,auVar28);
    local_348 = local_398;
    local_318 = auVar79;
    _local_308 = auVar73;
    local_2d8 = dVar37;
    local_2c8 = param_3;
    local_2a8 = dVar62;
    uStack_2a0 = in_XMM5_Qb;
    if ((uVar14 & 0x3fffffff) == 0 && iVar13 == 0) {
      dVar37 = *param_4;
      dVar57 = param_4[1];
      dVar63 = param_4[2];
      dVar62 = param_4[3];
      dVar50 = param_4[4];
      dVar58 = param_4[5];
      dVar41 = param_4[6] * 1.0;
      dVar49 = param_4[7] * 0.0;
      auVar73 = blendpd(auVar71,auVar69,2);
      dVar64 = dVar58 * auVar71._0_8_ - dVar35 * dVar50;
      dVar66 = dVar41 * dVar35 - auVar69._0_8_ * dVar58;
      dVar68 = dVar50 * auVar69._0_8_ - auVar73._0_8_ * dVar41;
      dVar34 = dVar49 * dVar25 - auVar73._8_8_ * dVar49;
      dVar66 = dVar66 + dVar66;
      dVar68 = dVar68 + dVar68;
      dVar64 = dVar64 + dVar64;
      dVar34 = dVar34 + dVar34;
      local_2f8 = dVar57 * auVar69._0_8_ * -1.0 +
                  dVar63 * dVar35 + auVar71._0_8_ * dVar62 * 1.0 + dVar25 * dVar37;
      dStack_2f0 = dVar37 * auVar69._0_8_ * 1.0 +
                   dVar62 * dVar35 + auVar71._0_8_ * dVar63 * -1.0 + dVar25 * dVar57;
      local_328._0_8_ =
           dVar62 * auVar69._0_8_ * 1.0 +
           ((auVar71._0_8_ * dVar57 * 1.0 + dVar25 * dVar63) - dVar35 * dVar37);
      local_328._8_8_ =
           dVar63 * auVar69._0_8_ * -1.0 +
           ((auVar71._0_8_ * dVar37 * -1.0 + dVar25 * dVar62) - dVar35 * dVar57);
      uVar75 = auVar72._0_4_;
      uVar76 = auVar72._4_4_;
      uVar77 = auVar72._8_4_;
      uVar78 = auVar72._12_4_;
      local_338 = dVar81 + (dVar64 * dVar35 - auVar69._0_8_ * dVar68) + dVar25 * dVar66 + dVar50;
      dStack_330 = dVar36 + (dVar66 * auVar69._0_8_ - dVar64 * auVar73._0_8_) +
                            dVar25 * dVar68 + dVar58;
      local_378 = dVar26 + (dVar68 * auVar71._0_8_ - dVar35 * dVar66) + dVar25 * dVar64 + dVar41;
      dStack_370 = (dVar34 * dVar25 - dVar34 * auVar73._8_8_) + dVar25 * dVar34 + dVar49 + 0.0;
      local_388._8_8_ = auVar72._8_8_ * 0.0;
      local_388._0_8_ = dVar47 * 1.0;
      uVar67 = 0;
      _local_2e8 = auVar72;
    }
    else {
      auVar53._8_4_ = SUB84(dVar35,0);
      auVar53._0_8_ = auVar71._0_8_;
      auVar53._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
      dVar57 = auVar53._8_8_ + dVar35;
      dVar63 = auVar69._0_8_ + auVar69._0_8_;
      dVar37 = auVar71._0_8_ * (auVar71._0_8_ + auVar71._0_8_);
      local_1f8 = 1.0 - (auVar69._0_8_ * dVar63 + dVar35 * dVar57);
      dStack_1d0 = 1.0 - (auVar69._0_8_ * dVar63 + dVar37);
      local_1a8 = 1.0 - (dVar37 + dVar35 * dVar57);
      dStack_1b0 = (auVar71._0_8_ + auVar71._0_8_) * dVar25;
      dStack_1f0 = dVar57 * auVar71._0_8_ + dVar63 * dVar25;
      local_1c8 = dVar63 * dVar35 + dStack_1b0;
      local_1d8 = dVar57 * auVar71._0_8_ - dVar63 * dVar25;
      dStack_1b0 = dVar63 * dVar35 - dStack_1b0;
      local_1b8 = auVar71._0_8_ * dVar63 + dVar57 * dVar25;
      local_1e8 = auVar71._0_8_ * dVar63 - dVar57 * dVar25;
      uStack_1e0 = 0;
      uStack_1c0 = 0;
      uStack_1a0 = 0;
      uStack_180 = 0x3ff0000000000000;
      dVar57 = *param_4;
      dVar25 = param_4[1];
      dVar63 = param_4[2];
      dVar35 = dVar25 + dVar25;
      dVar62 = dVar63 + dVar63;
      dVar68 = dVar57 * (dVar57 + dVar57);
      dStack_250 = (1.0 - (dVar63 * dVar62 + dVar68)) * dVar49;
      dVar37 = param_4[3];
      dVar50 = dVar62 * dVar37;
      dVar58 = (dVar57 + dVar57) * param_4[3];
      dVar37 = dVar35 * dVar37;
      local_258 = (dVar35 * dVar57 - dVar50) * dVar49;
      dStack_230 = (dVar62 * dVar25 - dVar58) * dVar47;
      local_238 = (dVar37 + *param_4 * dVar62) * dVar47;
      local_248 = (dVar62 * dVar25 + dVar58) * dVar49;
      local_278._8_8_ = (dVar35 * dVar57 + dVar50) * dVar41;
      local_278._0_8_ = (1.0 - (dVar63 * dVar62 + dVar25 * dVar35)) * dVar41;
      local_268._8_8_ = 0;
      local_268._0_8_ = (*param_4 * dVar62 - dVar37) * dVar41;
      uStack_240 = 0;
      local_228 = (1.0 - (dVar68 + dVar25 * dVar35)) * dVar47;
      uStack_220 = 0;
      local_218 = param_4[4];
      dStack_210 = param_4[5];
      local_208 = param_4[6];
      uStack_200 = 0x3ff0000000000000;
      dVar41 = auVar72._8_8_ * 0.0;
      local_378 = dVar26;
      local_198 = dVar81;
      dStack_190 = dVar36;
      local_188 = dVar26;
      local_398._0_8_ = auVar69._0_8_;
      local_398._8_8_ = unaff_XMM14_Qb;
      FUN_1447fea8d(local_178);
      local_398._0_8_ = local_168._0_8_;
      dVar49 = (double)local_168._0_8_ * (double)local_168._0_8_ +
               (double)local_178._0_8_ * (double)local_178._0_8_ +
               (double)local_178._8_8_ * (double)local_178._8_8_;
      local_378 = local_148;
      dVar37 = local_148 * local_148 + local_158 * local_158 + dStack_150 * dStack_150;
      dVar81 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
      uVar23 = -(ulonglong)(0.0 <= dVar49 + -9.99999993922529e-09);
      dVar49 = (double)(~uVar23 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar49)) & uVar23);
      uVar23 = -(ulonglong)(0.0 <= dVar37 + -9.99999993922529e-09);
      dVar37 = (double)(~uVar23 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar37)) & uVar23);
      uVar23 = -(ulonglong)(0.0 <= dVar81 + -9.99999993922529e-09);
      dVar81 = (double)(~uVar23 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar81)) & uVar23);
      auVar52._8_8_ = -(ulonglong)(0.0 <= (double)local_348._8_8_);
      auVar52._0_8_ = -(ulonglong)(0.0 <= (double)local_348._0_8_);
      auVar72 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar52);
      local_388._8_4_ = SUB84(dVar41,0);
      local_388._0_8_ = dVar47 * 1.0;
      local_388._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
      uVar23 = -(ulonglong)(0.0 <= dVar47 * 1.0);
      dVar41 = (double)(~uVar23 & 0xbff0000000000000 | uVar23 & 0x3ff0000000000000);
      dVar47 = auVar72._0_8_;
      local_178._8_8_ = (double)local_178._8_8_ * dVar49 * dVar47;
      local_178._0_8_ = (double)local_178._0_8_ * dVar49 * dVar47;
      local_168._0_8_ = dVar49 * (double)local_168._0_8_ * dVar47;
      dVar47 = auVar72._8_8_;
      local_148 = dVar37 * local_148 * dVar47;
      dStack_150 = dStack_150 * dVar37 * dVar47;
      local_158 = dVar47 * local_158 * dVar37;
      local_128 = dVar81 * local_128 * dVar41;
      local_130 = local_130 * dVar81 * dVar41;
      local_138 = dVar41 * local_138 * dVar81;
      pdVar17 = &local_298;
      iVar13 = FUN_14481fd10(pdVar17,local_178);
      uVar67 = SUB84(pdVar17,0);
      dVar41 = local_288 * local_288 + local_298 * local_298;
      dVar47 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
      auVar43._0_8_ = dVar41 + dVar47;
      auVar43._8_8_ = dVar41 + dVar47;
      auVar82._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_);
      auVar82._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_);
      auVar72 = sqrtpd(auVar43,auVar43);
      auVar72 = divpd(_DAT_149934d80,auVar72);
      auVar54._0_8_ = auVar72._0_8_ * local_288;
      auVar54._8_8_ = auVar72._8_8_ * dStack_280;
      local_328 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar54,auVar82);
      local_2f8 = (double)((ulonglong)(local_298 * auVar72._0_8_) &
                          -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_));
      dStack_2f0 = (double)((ulonglong)(dStack_290 * auVar72._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_));
      local_338 = local_118;
      dStack_330 = dStack_110;
      dStack_370 = 0.0;
      local_398 = *(undefined1 (*) [16])(param_4 + 8);
      auVar72 = *(undefined1 (*) [16])(param_4 + 10);
      uVar75 = auVar72._0_4_;
      uVar76 = auVar72._4_4_;
      uVar77 = auVar72._8_4_;
      uVar78 = auVar72._12_4_;
      auVar82 = minpd(local_398,_DAT_149934d80);
      auVar52 = minpd(auVar72,ZEXT816(0x3ff0000000000000));
      local_378 = local_108;
    }
    auVar83._8_8_ = -(ulonglong)(auVar82._8_8_ < 0.0);
    auVar83._0_8_ = -(ulonglong)(auVar82._0_8_ < 0.0);
    iVar13 = movmskpd(iVar13,auVar83);
    auVar55._8_8_ = -(ulonglong)(auVar52._8_8_ < 0.0);
    auVar55._0_8_ = -(ulonglong)(auVar52._0_8_ < 0.0);
    uVar14 = movmskpd(uVar67,auVar55);
    dVar41 = local_318._0_8_;
    dVar49 = local_318._8_8_;
    auVar12._8_8_ = uStack_2a0;
    auVar12._0_8_ = local_2a8;
    if ((uVar14 & 0x3fffffff) == 0 && iVar13 == 0) {
      dVar37 = *param_4;
      dVar81 = param_4[1];
      dVar36 = param_4[2];
      dVar26 = param_4[3];
      local_2b8 = param_4[4];
      dStack_2b0 = param_4[5];
      dVar62 = param_4[6] * 1.0;
      dVar50 = param_4[7] * 0.0;
      auVar72 = blendpd(auVar12,local_318,2);
      local_2e8._4_4_ = uVar76;
      local_2e8._0_4_ = uVar75;
      local_2e8._8_4_ = uVar77;
      uStack_2dc = uVar78;
      dVar63 = dStack_2b0 * (double)local_308._0_8_ - stack0xfffffffffffffd00 * local_2b8;
      dVar35 = dVar62 * stack0xfffffffffffffd00 - (double)local_368._0_8_ * dStack_2b0;
      dVar57 = local_2b8 * dVar41 - auVar72._0_8_ * dVar62;
      dVar25 = dVar50 * dVar49 - auVar72._8_8_ * dVar50;
      dVar35 = dVar35 + dVar35;
      dVar57 = dVar57 + dVar57;
      dVar63 = dVar63 + dVar63;
      dVar25 = dVar25 + dVar25;
      dVar47 = (double)local_358._0_8_ +
               (dVar63 * stack0xfffffffffffffd00 - (double)local_368._0_8_ * dVar57) +
               dVar49 * dVar35 + local_2b8;
      dStack_110 = (double)local_358._8_8_ +
                   (dVar35 * dVar41 - dVar63 * auVar72._0_8_) + dVar49 * dVar57 + dStack_2b0;
      local_108 = local_2d8 +
                  (dVar57 * (double)local_308._0_8_ - stack0xfffffffffffffd00 * dVar35) +
                  dVar49 * dVar63 + dVar62;
      dVar63 = dStack_2d0 + (dVar25 * dVar49 - dVar25 * auVar72._8_8_) + dVar49 * dVar25 + dVar50;
      dVar41 = (double)local_2e8._0_8_ * 1.0;
      dVar25 = stack0xfffffffffffffd20 * 0.0;
      auVar73._8_8_ =
           (ulonglong)
           (dVar37 * (double)local_368._0_8_ * 1.0 +
           dVar26 * stack0xfffffffffffffd00 + local_2a8 * dVar36 * -1.0 + dVar49 * dVar81);
      auVar73._0_8_ =
           (ulonglong)
           (dVar81 * (double)local_368._0_8_ * -1.0 +
           dVar36 * stack0xfffffffffffffd00 + local_2a8 * dVar26 * 1.0 + dVar49 * dVar37);
      auVar79._8_8_ =
           dVar36 * (double)local_368._0_8_ * -1.0 +
           ((local_2a8 * dVar37 * -1.0 + dVar49 * dVar26) - stack0xfffffffffffffd00 * dVar81);
      auVar79._0_8_ =
           dVar26 * (double)local_368._0_8_ * 1.0 +
           ((local_2a8 * dVar81 * 1.0 + dVar49 * dVar36) - stack0xfffffffffffffd00 * dVar37);
    }
    else {
      dVar47 = (double)CONCAT44(uVar78,uVar77) * 0.0;
      local_368._8_4_ = SUB84(dVar47,0);
      local_368._0_8_ = (double)CONCAT44(uVar76,uVar75) * 1.0;
      local_368._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
      dVar47 = stack0xfffffffffffffd00 + stack0xfffffffffffffd00;
      dVar37 = dVar41 + dVar41;
      dVar81 = (double)local_308._0_8_ * ((double)local_308._0_8_ + (double)local_308._0_8_);
      local_1f8 = 1.0 - (dVar41 * dVar37 + stack0xfffffffffffffd00 * dVar47);
      dStack_1d0 = 1.0 - (dVar41 * dVar37 + dVar81);
      local_1a8 = 1.0 - (dVar81 + stack0xfffffffffffffd00 * dVar47);
      dStack_1b0 = ((double)local_308._0_8_ + (double)local_308._0_8_) * dVar49;
      dStack_1f0 = dVar47 * (double)local_308._0_8_ + dVar37 * dVar49;
      local_1c8 = dVar37 * stack0xfffffffffffffd00 + dStack_1b0;
      local_1b8 = local_2a8 * dVar37 + dVar47 * dVar49;
      local_1d8 = dVar47 * (double)local_308._0_8_ - dVar37 * dVar49;
      dStack_1b0 = dVar37 * stack0xfffffffffffffd00 - dStack_1b0;
      local_1e8 = local_2a8 * dVar37 - dVar47 * dVar49;
      uStack_1e0 = 0;
      uStack_1c0 = 0;
      uStack_1a0 = 0;
      local_198 = (double)local_358._0_8_;
      dStack_190 = (double)local_358._8_8_;
      local_188 = local_2d8;
      uStack_180 = 0x3ff0000000000000;
      dVar47 = *param_4;
      dVar49 = param_4[1];
      dVar37 = param_4[2];
      dVar81 = dVar49 + dVar49;
      dVar36 = dVar37 + dVar37;
      dVar41 = dVar47 * (dVar47 + dVar47);
      dStack_250 = (1.0 - (dVar37 * dVar36 + dVar41)) * (double)local_398._8_8_;
      local_228 = (1.0 - (dVar41 + dVar49 * dVar81)) * (double)CONCAT44(uVar76,uVar75);
      dVar41 = param_4[3];
      dVar26 = dVar36 * dVar41;
      dVar57 = (dVar47 + dVar47) * param_4[3];
      dVar41 = dVar81 * dVar41;
      local_248 = (dVar36 * dVar49 + dVar57) * (double)local_398._8_8_;
      local_238 = (dVar41 + *param_4 * dVar36) * (double)CONCAT44(uVar76,uVar75);
      local_258 = (dVar81 * dVar47 - dVar26) * (double)local_398._8_8_;
      dStack_230 = (dVar36 * dVar49 - dVar57) * (double)CONCAT44(uVar76,uVar75);
      local_278._8_8_ = (dVar81 * dVar47 + dVar26) * (double)local_398._0_8_;
      local_278._0_8_ = (1.0 - (dVar37 * dVar36 + dVar49 * dVar81)) * (double)local_398._0_8_;
      local_268._8_8_ = 0;
      local_268._0_8_ = (*param_4 * dVar36 - dVar41) * (double)local_398._0_8_;
      uStack_240 = 0;
      uStack_220 = 0;
      local_218 = param_4[4];
      dStack_210 = param_4[5];
      local_208 = param_4[6];
      uStack_200 = 0x3ff0000000000000;
      FUN_1447fea8d(local_178);
      auVar72 = _DAT_149934d80;
      local_358._0_8_ = local_168._0_8_;
      dVar41 = (double)local_168._0_8_ * (double)local_168._0_8_ +
               (double)local_178._0_8_ * (double)local_178._0_8_ +
               (double)local_178._8_8_ * (double)local_178._8_8_;
      dVar37 = local_148 * local_148 + local_158 * local_158 + dStack_150 * dStack_150;
      dVar47 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
      uVar23 = -(ulonglong)(0.0 <= dVar41 + -9.99999993922529e-09);
      dVar49 = (double)(~uVar23 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar41)) & uVar23);
      uVar23 = -(ulonglong)(0.0 <= dVar37 + -9.99999993922529e-09);
      dVar37 = (double)(~uVar23 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar37)) & uVar23);
      uVar23 = -(ulonglong)(0.0 <= dVar47 + -9.99999993922529e-09);
      dVar81 = (double)(~uVar23 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar47)) & uVar23);
      auVar29._8_8_ = -(ulonglong)(0.0 <= (double)local_398._8_8_);
      auVar29._0_8_ = -(ulonglong)(0.0 <= (double)local_398._0_8_);
      dVar41 = (double)local_368._0_8_;
      dVar25 = (double)local_368._8_8_;
      auVar69 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar29);
      dVar47 = (double)(~-(ulonglong)(0.0 <= (double)local_368._0_8_) & 0xbff0000000000000 |
                       -(ulonglong)(0.0 <= (double)local_368._0_8_) & 0x3ff0000000000000);
      dVar36 = auVar69._0_8_;
      local_178._8_8_ = (double)local_178._8_8_ * dVar49 * dVar36;
      local_178._0_8_ = (double)local_178._0_8_ * dVar49 * dVar36;
      local_168._0_8_ = dVar49 * (double)local_168._0_8_ * dVar36;
      dVar49 = auVar69._8_8_;
      local_148 = dVar37 * local_148 * dVar49;
      dStack_150 = dStack_150 * dVar37 * dVar49;
      local_158 = dVar49 * local_158 * dVar37;
      local_128 = dVar81 * local_128 * dVar47;
      local_130 = local_130 * dVar81 * dVar47;
      local_138 = dVar47 * local_138 * dVar81;
      FUN_14481fd10(&local_298,local_178);
      dVar47 = local_288 * local_288 + local_298 * local_298;
      dVar49 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
      auVar44._0_8_ = dVar47 + dVar49;
      auVar44._8_8_ = dVar47 + dVar49;
      auVar30._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_);
      auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_);
      auVar69 = sqrtpd(auVar44,auVar44);
      auVar72 = divpd(auVar72,auVar69);
      auVar56._0_8_ = auVar72._0_8_ * local_288;
      auVar56._8_8_ = auVar72._8_8_ * dStack_280;
      auVar73._0_8_ =
           (ulonglong)(local_298 * auVar72._0_8_) &
           -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_);
      auVar73._8_8_ =
           (ulonglong)(dStack_290 * auVar72._8_8_) &
           -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_);
      auVar79 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar56,auVar30);
      dVar63 = 0.0;
      dVar47 = local_118;
    }
    auVar72._8_8_ = dStack_2f0;
    auVar72._0_8_ = local_2f8;
    auVar69 = local_328;
    dVar49 = dStack_110;
    param_3 = local_2c8;
    dVar35 = (double)local_348._0_8_;
    dVar62 = (double)local_348._8_8_;
    dVar50 = (double)local_388._0_8_;
    dVar58 = (double)local_388._8_8_;
    dVar37 = local_108;
    dVar81 = local_338;
    dVar36 = dStack_330;
    dVar26 = local_378;
    dVar57 = dStack_370;
  }
  auVar27 = _DAT_149934d80;
  auVar71 = _DAT_149931e80;
  uVar75 = (undefined4)((ulonglong)dVar49 >> 0x20);
  uVar67 = (undefined4)((ulonglong)dVar25 >> 0x20);
  if (DAT_14c7677e8 == '\x01') {
    fVar40 = *(float *)(param_1[7] + uVar60 * 4);
    fVar24 = *(float *)(param_1[7] + uVar20 * 4) - fVar40;
    fVar40 = (param_3 - fVar40) / fVar24;
    fVar70 = (float)(-(uint)(0.0 < fVar24) & (uint)fVar40);
    if (param_5 == '\x01') {
      dVar57 = (double)fVar70;
      dVar36 = (dVar49 - dVar36) * dVar57 + dVar36;
      auVar10._8_4_ = SUB84(dVar36,0);
      auVar10._0_8_ = (dVar47 - dVar81) * dVar57 + dVar81;
      auVar10._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
      param_2[2] = auVar10;
      *(double *)param_2[3] = (dVar37 - dVar26) * dVar57 + dVar26;
      *(undefined8 *)(param_2[3] + 8) = 0;
      *(double *)param_2[4] = ((double)local_398._0_8_ - dVar35) * dVar57 + dVar35;
      *(double *)(param_2[4] + 8) = ((double)local_398._8_8_ - dVar62) * dVar57 + dVar62;
      *(double *)param_2[5] = (dVar41 - dVar50) * dVar57 + dVar50;
      *(undefined8 *)(param_2[5] + 8) = 0;
      local_178 = auVar72;
      local_168 = auVar69;
      FUN_1448052ee(local_178,&local_1f8);
      local_178 = auVar73;
      local_168 = auVar79;
      FUN_1448052ee(local_178,local_278);
      dVar49 = ((double)local_268._0_8_ - local_1e8) * dVar57 + local_1e8;
      dVar47 = ((double)local_278._8_8_ - dStack_1f0) * dVar57 + dStack_1f0;
      dVar41 = ((double)local_278._0_8_ - local_1f8) * dVar57 + local_1f8;
      auVar46._8_8_ = dVar47;
      auVar46._0_8_ = dVar41;
      auVar72 = divpd(auVar46,_DAT_1499387d0);
      auVar33._0_8_ = dVar49 / 360.0;
      auVar33._8_8_ = 0;
      auVar69 = roundpd(auVar72,auVar72,3);
      auVar72 = roundpd(auVar33,auVar33,3);
      dVar41 = (dVar41 - auVar69._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
      dVar47 = (dVar47 - auVar69._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
      dVar26 = (dVar49 - auVar72._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
      dVar57 = (0.0 - auVar72._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
      dVar49 = sin(dVar41);
      dVar37 = sin(dVar47);
      dVar81 = sin(dVar26);
      sin(dVar57);
      dVar36 = cos(dVar41);
      dVar47 = cos(dVar47);
      dVar26 = cos(dVar26);
      cos(dVar57);
      dVar41 = dVar37 * dVar49 * dVar81 + dVar47 * dVar36 * dVar26;
      *(double *)*param_2 = dVar49 * dVar37 * dVar26 - dVar36 * dVar47 * dVar81;
      *(double *)(*param_2 + 8) = -(dVar49 * dVar47 * dVar26) - dVar36 * dVar37 * dVar81;
      auVar6._8_4_ = SUB84(dVar41,0);
      auVar6._0_8_ = -(dVar47 * dVar49 * dVar81) + dVar37 * dVar36 * dVar26;
      auVar6._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
      param_2[1] = auVar6;
      goto LAB_14459020c;
    }
    dVar86 = auVar72._8_8_;
    dVar68 = auVar73._0_8_;
    dVar34 = auVar73._8_8_;
    dVar66 = auVar69._0_8_;
    dVar84 = auVar69._8_8_;
    dVar85 = auVar72._0_8_;
    dVar64 = auVar79._0_8_;
    if (param_5 != '\0') {
      local_368._8_4_ = SUB84(dVar25,0);
      local_368._0_8_ = dVar41;
      local_368._12_4_ = uVar67;
      uVar14 = auVar79._4_4_;
      uVar80 = auVar79._8_4_;
      uVar22 = auVar79._12_4_;
      auVar11._4_8_ = dVar34;
      auVar11._0_4_ = uVar14;
      auVar39._0_8_ = auVar11._0_8_ << 0x20;
      auVar39._8_4_ = uVar80;
      auVar39._12_4_ = uVar22;
      local_348._8_8_ = dVar62;
      local_348._0_8_ = dVar35;
      local_388._8_8_ = dVar58;
      local_388._0_8_ = dVar50;
      local_358._8_4_ = SUB84(dVar49,0);
      local_358._0_8_ = dVar47;
      local_358._12_4_ = uVar75;
      _local_308 = auVar73;
      if (dVar84 * auVar39._8_8_ + dVar64 * dVar66 + dVar68 * dVar85 + dVar86 * dVar34 < 0.0) {
        local_308._4_4_ = auVar73._4_4_ ^ DAT_149931e80._4_4_;
        local_308._0_4_ = auVar73._0_4_ ^ (uint)DAT_149931e80;
        local_308._8_4_ = auVar73._8_4_ ^ DAT_149931e80._8_4_;
        uStack_2fc = auVar73._12_4_ ^ DAT_149931e80._12_4_;
        auVar79._0_4_ = auVar79._0_4_ ^ (uint)DAT_149931e80;
        auVar79._4_4_ = uVar14 ^ DAT_149931e80._4_4_;
        auVar79._8_4_ = uVar80 ^ DAT_149931e80._8_4_;
        auVar79._12_4_ = uVar22 ^ DAT_149931e80._12_4_;
      }
      local_1c8 = dVar26 * 0.5;
      dStack_1d0 = dVar36 * 0.5;
      local_1d8 = dVar81 * 0.5;
      local_1e8 = 0.0;
      local_1f8 = 0.0;
      dStack_1f0 = 0.0;
      uStack_1e0 = 0x3ff0000000000000;
      uStack_1c0 = 0;
      local_258 = 0.0;
      dStack_250 = 0.0;
      local_248 = 0.0;
      uStack_240 = 0;
      local_318 = auVar79;
      local_278 = auVar72;
      local_268 = auVar69;
      FUN_147b54764(&local_1f8,local_178,local_278);
      dVar41 = (double)(1.0 - fVar70);
      dVar47 = (double)local_178._0_8_ * dVar41;
      dVar49 = (double)local_178._8_8_ * dVar41;
      dVar36 = (double)local_168._0_8_ * dVar41;
      dVar26 = (double)local_168._8_8_ * dVar41;
      dVar81 = local_158 * dVar41;
      dVar35 = dStack_150 * dVar41;
      dVar57 = dVar41 * local_148;
      dVar41 = dVar41 * dStack_140;
      local_1c8 = dVar37 * 0.5;
      dStack_1d0 = (double)local_358._8_8_ * 0.5;
      local_1d8 = (double)local_358._0_8_ * 0.5;
      local_1e8 = 0.0;
      local_1f8 = 0.0;
      dStack_1f0 = 0.0;
      uStack_1e0 = 0x3ff0000000000000;
      uStack_1c0 = 0;
      local_278 = _local_308;
      local_268 = local_318;
      local_258 = 0.0;
      dStack_250 = 0.0;
      local_248 = 0.0;
      uStack_240 = 0;
      FUN_147b54764(&local_1f8,local_178,local_278);
      dVar63 = (double)fVar70;
      dVar47 = (double)local_178._0_8_ * dVar63 + dVar47;
      dVar49 = (double)local_178._8_8_ * dVar63 + dVar49;
      dVar36 = (double)local_168._0_8_ * dVar63 + dVar36;
      dVar26 = (double)local_168._8_8_ * dVar63 + dVar26;
      dVar25 = 1.0 / SQRT(dVar26 * dVar26 + dVar36 * dVar36 + dVar47 * dVar47 + dVar49 * dVar49);
      dVar47 = dVar47 * dVar25;
      dVar49 = dVar49 * dVar25;
      dVar36 = dVar36 * dVar25;
      dVar26 = dVar26 * dVar25;
      dVar37 = (local_158 * dVar63 + dVar81) * dVar25;
      dVar81 = (dStack_150 * dVar63 + dVar35) * dVar25;
      dVar57 = (dVar63 * local_148 + dVar57) * dVar25;
      dVar25 = (dVar63 * dStack_140 + dVar41) * dVar25;
      dVar50 = ((double)local_398._8_8_ - (double)local_348._8_8_) * dVar63 +
               (double)local_348._8_8_;
      uVar20 = auVar71._0_8_;
      uVar60 = (ulonglong)dVar47 ^ uVar20;
      dVar35 = (double)((ulonglong)dVar49 ^ auVar71._8_8_);
      dVar41 = (double)(uVar20 ^ (ulonglong)dVar36);
      *(double *)*param_2 = dVar47;
      *(double *)(*param_2 + 8) = dVar49;
      *(double *)param_2[1] = dVar36;
      *(double *)(param_2[1] + 8) = dVar26;
      auVar74._8_4_ = (int)uVar60;
      auVar74._0_8_ = dVar35;
      auVar74._12_4_ = (int)(uVar60 >> 0x20);
      dVar62 = dVar57 * dVar35 * -1.0 + dVar41 * dVar81 + (dVar37 * dVar26 * 1.0 - dVar25 * dVar47);
      dVar41 = dVar57 * auVar74._8_8_ * 1.0 +
               dVar26 * dVar81 + (dVar37 * dVar41 * -1.0 - dVar25 * dVar49);
      dVar47 = dVar26 * dVar57 + dVar81 * dVar47 + (dVar35 * dVar37 - dVar25 * dVar36);
      *(double *)param_2[2] = dVar62 + dVar62;
      *(double *)(param_2[2] + 8) = dVar41 + dVar41;
      *(double *)param_2[3] = dVar47 + dVar47;
      *(undefined8 *)(param_2[3] + 8) = 0;
      auVar9._8_4_ = SUB84(dVar50,0);
      auVar9._0_8_ = ((double)local_398._0_8_ - (double)local_348._0_8_) * dVar63 +
                     (double)local_348._0_8_;
      auVar9._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
      param_2[4] = auVar9;
      *(double *)param_2[5] =
           ((double)local_368._0_8_ - (double)local_388._0_8_) * dVar63 + (double)local_388._0_8_;
      *(undefined8 *)(param_2[5] + 8) = 0;
      goto LAB_14459020c;
    }
    if ((0.0 < fVar24) && (1e-05 < ABS(fVar40))) {
      if (ABS(fVar70 + -1.0) <= 1e-05) {
        *param_2 = auVar73;
        param_2[1] = auVar79;
        auVar8._8_4_ = SUB84(dVar49,0);
        auVar8._0_8_ = dVar47;
        auVar8._12_4_ = uVar75;
        param_2[2] = auVar8;
        *(double *)param_2[3] = dVar37;
        *(double *)(param_2[3] + 8) = dVar63;
        *(undefined8 *)param_2[4] = local_398._0_8_;
        *(undefined8 *)(param_2[4] + 8) = local_398._8_8_;
        auVar5._8_4_ = SUB84(dVar25,0);
        auVar5._0_8_ = dVar41;
        auVar5._12_4_ = uVar67;
        param_2[5] = auVar5;
      }
      else {
        dVar51 = (double)fVar70;
        dVar59 = (double)fVar70;
        dVar42 = (double)DAT_149934d80 - dVar51;
        dVar48 = DAT_149934d80._8_8_ - dVar59;
        dVar49 = dVar49 * dVar59 + dVar36 * dVar48;
        auVar7._8_4_ = SUB84(dVar49,0);
        auVar7._0_8_ = dVar47 * dVar51 + dVar81 * dVar42;
        auVar7._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
        param_2[2] = auVar7;
        *(double *)param_2[3] = dVar37 * dVar51 + dVar26 * dVar42;
        *(double *)(param_2[3] + 8) = dVar63 * dVar59 + dVar57 * dVar48;
        dVar47 = dVar25 * dVar59 + dVar58 * dVar48;
        *(double *)param_2[4] = (double)local_398._0_8_ * dVar51 + dVar35 * dVar42;
        *(double *)(param_2[4] + 8) = (double)local_398._8_8_ * dVar59 + dVar62 * dVar48;
        dVar49 = dVar66 * dVar64 + dVar85 * dVar68;
        dVar37 = dVar84 * auVar79._8_8_ + dVar86 * dVar34;
        auVar4._8_4_ = SUB84(dVar47,0);
        auVar4._0_8_ = dVar41 * dVar51 + dVar50 * dVar42;
        auVar4._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
        param_2[5] = auVar4;
        auVar31._8_8_ = -(ulonglong)(0.0 <= dVar49 + dVar37);
        auVar31._0_8_ = -(ulonglong)(0.0 <= dVar49 + dVar37);
        auVar61._0_8_ = 0.0 - dVar85;
        auVar61._8_8_ = 0.0 - dVar86;
        auVar65._0_8_ = 0.0 - dVar66;
        auVar65._8_8_ = 0.0 - dVar84;
        auVar72 = blendvpd(auVar61,auVar72,auVar31);
        auVar69 = blendvpd(auVar65,auVar69,auVar31);
        dVar49 = auVar72._0_8_ * dVar42 + dVar68 * dVar51;
        dVar37 = auVar72._8_8_ * dVar48 + dVar34 * dVar59;
        dVar81 = auVar69._0_8_ * dVar42 + dVar64 * dVar51;
        dVar36 = auVar69._8_8_ * dVar48 + auVar79._8_8_ * dVar59;
        dVar41 = dVar81 * dVar81 + dVar49 * dVar49;
        dVar47 = dVar36 * dVar36 + dVar37 * dVar37;
        auVar45._0_8_ = dVar41 + dVar47;
        auVar45._8_8_ = dVar41 + dVar47;
        auVar32._8_8_ = -(ulonglong)(1e-08 <= auVar45._8_8_);
        auVar32._0_8_ = -(ulonglong)(1e-08 <= auVar45._0_8_);
        auVar72 = sqrtpd(auVar45,auVar45);
        auVar72 = divpd(auVar27,auVar72);
        auVar38._0_8_ = auVar72._0_8_ * dVar81;
        auVar38._8_8_ = auVar72._8_8_ * dVar36;
        auVar69 = blendvpd(_DAT_149935300,auVar38,auVar32);
        *(ulonglong *)*param_2 =
             (ulonglong)(dVar49 * auVar72._0_8_) & -(ulonglong)(1e-08 <= auVar45._0_8_);
        *(ulonglong *)(*param_2 + 8) =
             (ulonglong)(dVar37 * auVar72._8_8_) & -(ulonglong)(1e-08 <= auVar45._8_8_);
        param_2[1] = auVar69;
      }
      goto LAB_14459020c;
    }
  }
  *param_2 = auVar72;
  param_2[1] = auVar69;
  *(double *)param_2[2] = dVar81;
  *(double *)(param_2[2] + 8) = dVar36;
  *(double *)param_2[3] = dVar26;
  *(double *)(param_2[3] + 8) = dVar57;
  *(double *)param_2[4] = dVar35;
  *(double *)(param_2[4] + 8) = dVar62;
  *(double *)param_2[5] = dVar50;
  *(double *)(param_2[5] + 8) = dVar58;
LAB_14459020c:
  if ((local_f0 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14459065e FUN_14459065e body=1281 status=ok
// SIG undefined FUN_14459065e(void)

void FUN_14459065e(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  void *pvVar7;
  longlong lVar8;
  undefined **ppuVar9;
  longlong lVar10;
  longlong *in_stack_00000028;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 local_138;
  longlong local_128;
  longlong lStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  longlong local_e0;
  longlong local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  void *local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 local_8b;
  undefined5 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  undefined7 uStack_57;
  longlong local_50;
  undefined8 uStack_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  local_138 = *(undefined1 *)(param_1 + 0x40);
  local_148 = *(undefined4 *)(param_1 + 0x30);
  uStack_144 = *(undefined4 *)(param_1 + 0x34);
  uStack_140 = *(undefined4 *)(param_1 + 0x38);
  uStack_13c = *(undefined4 *)(param_1 + 0x3c);
  lVar8 = *(longlong *)(param_1 + 0x48);
  if ((lVar8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar8);
  }
  if ((lVar8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar8);
  }
  local_118 = (undefined4)in_stack_00000028[0x24];
  local_128 = in_stack_00000028[0x22];
  lStack_120 = in_stack_00000028[0x23];
  uStack_114 = (undefined4)*(undefined8 *)((longlong)in_stack_00000028 + 0x124);
  uStack_110 = (undefined4)((ulonglong)*(undefined8 *)((longlong)in_stack_00000028 + 0x124) >> 0x20)
  ;
  uStack_10c = (undefined4)*(undefined8 *)((longlong)in_stack_00000028 + 300);
  uStack_108 = (undefined4)((ulonglong)*(undefined8 *)((longlong)in_stack_00000028 + 300) >> 0x20);
  local_100 = (undefined4)in_stack_00000028[0x27];
  uStack_fc = *(undefined4 *)((longlong)in_stack_00000028 + 0x13c);
  uStack_f8 = (undefined4)in_stack_00000028[0x28];
  uStack_f4 = *(undefined4 *)((longlong)in_stack_00000028 + 0x144);
  local_f0 = (undefined4)in_stack_00000028[0x29];
  uStack_ec = *(undefined4 *)((longlong)in_stack_00000028 + 0x14c);
  uStack_e8 = (undefined4)in_stack_00000028[0x2a];
  uStack_e4 = *(undefined4 *)((longlong)in_stack_00000028 + 0x154);
  local_e0 = in_stack_00000028[0x2b];
  local_d0 = (undefined4)in_stack_00000028[0x2d];
  local_d8 = in_stack_00000028[0x2c];
  local_c8 = 0;
  iVar4 = (int)in_stack_00000028[0x2f];
  lVar10 = in_stack_00000028[0x2e];
  local_c0 = CONCAT44(local_c0._4_4_,iVar4);
  if (iVar4 == 0) {
    local_c0 = 0;
  }
  else {
    FUN_14753cf4a(&local_c8,iVar4,0);
    FUN_14753cfbd(local_c8,lVar10,iVar4);
  }
  local_b8 = (void *)0x0;
  uVar5 = *(uint *)(in_stack_00000028 + 0x31);
  pvVar7 = (void *)in_stack_00000028[0x30];
  local_b0 = CONCAT44(local_b0._4_4_,uVar5);
  if ((longlong)(int)uVar5 == 0) {
    local_b0 = (ulonglong)uVar5;
  }
  else {
    FUN_1456c5740(&local_b8,uVar5,0);
    memcpy(local_b8,pvVar7,(longlong)(int)uVar5 << 3);
  }
  local_a8 = (undefined1)in_stack_00000028[0x32];
  local_a0 = (void *)0x0;
  uVar5 = *(uint *)(in_stack_00000028 + 0x34);
  pvVar7 = (void *)in_stack_00000028[0x33];
  local_98 = CONCAT44(local_98._4_4_,uVar5);
  if ((longlong)(int)uVar5 == 0) {
    local_98 = (ulonglong)uVar5;
  }
  else {
    FUN_1447bda9e(&local_a0,uVar5,0);
    memcpy(local_a0,pvVar7,(longlong)(int)uVar5 << 2);
  }
  uStack_88 = (undefined5)((ulonglong)*(undefined8 *)((longlong)in_stack_00000028 + 0x1ad) >> 0x18);
  uStack_90 = (undefined5)in_stack_00000028[0x35];
  local_8b = (undefined3)((ulonglong)in_stack_00000028[0x35] >> 0x28);
  local_40 = local_40 | 3;
  local_80 = &PTR_FUN_14bddfab0;
  uStack_78 = uVar6;
  local_70 = &PTR_FUN_14bdddca8;
  uStack_68 = local_148;
  uStack_64 = uStack_144;
  uStack_60 = uStack_140;
  uStack_5c = uStack_13c;
  uStack_58 = local_138;
  local_50 = lVar8;
  iVar4 = (int)in_stack_00000028[1];
  *(uint *)(in_stack_00000028 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)in_stack_00000028 + 0xc) < iVar4 + 1U) {
    FUN_140ac5684(in_stack_00000028,iVar4);
  }
  lVar8 = *in_stack_00000028;
  lVar10 = (longlong)iVar4 * 0xf0;
  *(undefined4 *)(lVar8 + 0x20 + lVar10) = uStack_108;
  puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar10);
  *puVar1 = CONCAT44(uStack_114,local_118);
  puVar1[1] = CONCAT44(uStack_10c,uStack_110);
  *(longlong *)(lVar8 + lVar10) = local_128;
  ((longlong *)(lVar8 + lVar10))[1] = lStack_120;
  *(longlong *)(lVar8 + 0x48 + lVar10) = local_e0;
  puVar2 = (undefined4 *)(lVar8 + 0x38 + lVar10);
  *puVar2 = local_f0;
  puVar2[1] = uStack_ec;
  puVar2[2] = uStack_e8;
  puVar2[3] = uStack_e4;
  puVar2 = (undefined4 *)(lVar8 + 0x28 + lVar10);
  *puVar2 = local_100;
  puVar2[1] = uStack_fc;
  puVar2[2] = uStack_f8;
  puVar2[3] = uStack_f4;
  *(longlong *)(lVar8 + 0x50 + lVar10) = local_d8;
  *(undefined4 *)(lVar8 + 0x58 + lVar10) = local_d0;
  *(undefined8 *)(lVar8 + 0x60 + lVar10) = 0;
  *(longlong *)(lVar8 + 0x60 + lVar10) = local_c8;
  local_c8 = 0;
  *(undefined4 *)(lVar8 + 0x68 + lVar10) = (undefined4)local_c0;
  *(undefined4 *)(lVar8 + 0x6c + lVar10) = local_c0._4_4_;
  local_c0 = 0;
  *(undefined8 *)(lVar8 + 0x70 + lVar10) = 0;
  *(void **)(lVar8 + 0x70 + lVar10) = local_b8;
  local_b8 = (void *)0x0;
  *(undefined4 *)(lVar8 + 0x78 + lVar10) = (undefined4)local_b0;
  *(undefined4 *)(lVar8 + 0x7c + lVar10) = local_b0._4_4_;
  local_b0 = 0;
  *(undefined1 *)(lVar8 + 0x80 + lVar10) = local_a8;
  *(undefined8 *)(lVar8 + 0x88 + lVar10) = 0;
  *(void **)(lVar8 + 0x88 + lVar10) = local_a0;
  local_a0 = (void *)0x0;
  *(undefined4 *)(lVar8 + 0x90 + lVar10) = (undefined4)local_98;
  *(undefined4 *)(lVar8 + 0x94 + lVar10) = local_98._4_4_;
  local_98 = 0;
  *(ulonglong *)(lVar8 + 0x9d + lVar10) = CONCAT53(uStack_88,local_8b);
  *(ulonglong *)(lVar8 + 0x98 + lVar10) = CONCAT35(local_8b,uStack_90);
  bVar3 = *(byte *)(lVar8 + 0xe8 + lVar10);
  *(byte *)(lVar8 + 0xe8 + lVar10) = bVar3 & 0xfc | 2;
  if ((local_40 & 1) != 0) {
    lVar8 = lVar8 + lVar10;
    *(byte *)(lVar8 + 0xe8) = bVar3 | 3;
    *(byte *)(lVar8 + 0xe8) = *(byte *)(lVar8 + 0xe8) & 0xfd | local_40 & 2;
    *(longlong *)(lVar8 + 0xd8) = local_50;
    *(undefined8 *)(lVar8 + 0xe0) = uStack_48;
    *(ulonglong *)(lVar8 + 200) = CONCAT44(uStack_5c,uStack_60);
    *(ulonglong *)(lVar8 + 0xd0) = CONCAT71(uStack_57,uStack_58);
    *(undefined4 *)(lVar8 + 0xb8) = (undefined4)local_70;
    *(undefined4 *)(lVar8 + 0xbc) = local_70._4_4_;
    *(undefined4 *)(lVar8 + 0xc0) = uStack_68;
    *(undefined4 *)(lVar8 + 0xc4) = uStack_64;
    *(undefined4 *)(lVar8 + 0xa8) = (undefined4)local_80;
    *(undefined4 *)(lVar8 + 0xac) = local_80._4_4_;
    *(undefined4 *)(lVar8 + 0xb0) = (undefined4)uStack_78;
    *(undefined4 *)(lVar8 + 0xb4) = uStack_78._4_4_;
    local_40 = local_40 & 0xfe;
  }
  if ((local_40 & 1) != 0) {
    ppuVar9 = (undefined **)&local_80;
    if ((local_40 & 2) == 0) {
      ppuVar9 = local_80;
    }
    local_40 = local_40 & 0xfe;
    (**(code **)*ppuVar9)(ppuVar9,0);
    if ((local_40 & 2) == 0) {
      FUN_1400020a8(local_80);
    }
  }
  if (local_a0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447bda9c(local_c8,local_c0 & 0xffffffff);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144590c32 FUN_144590c32 body=676 status=ok
// SIG undefined FUN_144590c32(void)

void FUN_144590c32(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  longlong param_5)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong *puVar9;
  float fVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_68;
  undefined **local_60;
  ulonglong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((param_3[1] != 0 || *param_3 != 0) || param_3[2] != 0) || param_3[3] != 0) {
    FUN_1401abe9c(param_5,&local_58,param_3,param_3 + 4);
    if ((longlong)local_50 != 0) {
      local_68 = param_1 + 8;
      puVar9 = local_58;
      do {
        uVar5 = *puVar9;
        if ((((((uVar5 >> 0x20 != 0) && (uVar4 = (uint)uVar5, -1 < (int)uVar4)) &&
              ((int)uVar4 < DAT_14c9647dc)) &&
             ((plVar7 = (longlong *)
                        ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0xd & 0x3fff8))),
              plVar7 != (longlong *)0x0 && ((int)plVar7[2] == (int)(uVar5 >> 0x20))))) &&
            (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 &&
             ((*plVar7 != 0 && (lVar2 = FUN_1496ec46c(), lVar2 != 0)))))) &&
           (lVar8 = *(longlong *)(lVar2 + 0x390), lVar8 != 0)) {
          lVar3 = *(longlong *)(param_1 + 0x30);
          if (lVar3 == 0) {
LAB_144590d6f:
            if ((DAT_14c950c29 & 1) != 0) {
              if (lVar8 == 0) {
                lVar8 = 0;
              }
              else {
                FUN_1456cec3c(lVar8);
                lVar8 = *(longlong *)(lVar2 + 0x390);
              }
            }
            *(longlong *)(param_1 + 0x30) = lVar8;
          }
          else {
            if ((DAT_14c950c29 & 1) != 0) {
              FUN_1456cec3c(lVar8);
              lVar3 = *(longlong *)(param_1 + 0x30);
            }
            if (lVar3 == lVar8) {
              lVar8 = *(longlong *)(lVar2 + 0x390);
              goto LAB_144590d6f;
            }
            if (lVar3 != 0 && (~DAT_14c950c29 & 1) == 0) {
              FUN_1456cec3c();
              lVar3 = *(longlong *)(param_1 + 0x30);
            }
            *(longlong *)(lVar2 + 0x390) = lVar3;
          }
          local_60 = &PTR_FUN_14bddfac0;
          lVar8 = DAT_14cc226c8;
          if (DAT_14cc226c8 == 0) {
            lVar8 = FUN_14570767c(&DAT_14cc226c8,0);
          }
          lVar3 = FUN_14027385c(param_5 + 0x110);
          if (lVar3 != 0) {
            FUN_14027378e(lVar3,lVar2,lVar8,&local_60);
          }
          *(undefined2 *)(lVar2 + 0x398) = 0;
          local_78 = *(undefined8 *)(param_2 + 0x18);
          uVar4 = *(uint *)(param_2 + 0x24);
          uVar5 = 0;
          if (SBORROW4(0,uVar4)) {
            puVar6 = (uint *)(param_2 + 4);
            if (*(int *)(param_2 + 0x20) == 0) {
              puVar6 = (uint *)(param_2 + 0x10);
            }
            uVar4 = *puVar6;
            uVar5 = (ulonglong)puVar6[1];
          }
          lVar8 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x390) + 0x30);
          if (lVar8 == 0) {
            fVar10 = 0.0;
          }
          else {
            fVar10 = 0.0;
            lVar3 = 0;
            do {
              fVar1 = *(float *)(*(longlong *)
                                  (*(longlong *)(*(longlong *)(lVar2 + 0x390) + 0x28) + lVar3) +
                                0x28);
              if (fVar1 <= fVar10) {
                fVar1 = fVar10;
              }
              fVar10 = fVar1;
              lVar3 = lVar3 + 8;
            } while (lVar8 * 8 != lVar3);
          }
          fVar10 = (float)FUN_1475ab43e(local_68,param_1 + 0x10,fVar10,
                                        (ulonglong)uVar4 | uVar5 << 0x20);
          *(float *)(lVar2 + 0x39c) = fVar10;
          FUN_14458a2c2(lVar2,(double)fVar10);
        }
        puVar9 = puVar9 + 1;
      } while (puVar9 != local_58 + local_50);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144590ed8 FUN_144590ed8 body=232 status=ok
// SIG undefined FUN_144590ed8(void)

void FUN_144590ed8(undefined8 *param_1,double *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if ((*param_2 != (double)*(float *)(param_1 + 1)) ||
     (NAN(*param_2) || NAN((double)*(float *)(param_1 + 1)))) {
    if (*(int *)((longlong)param_2 + 0x14) < 0) {
      *(undefined4 *)(param_2 + 2) = 0;
      FUN_146dfc51c(param_2 + 1,0);
    }
    else {
      *(undefined4 *)(param_2 + 2) = 0;
    }
    *param_2 = (double)*(float *)(param_1 + 1);
  }
  param_1 = (undefined8 *)*param_1;
  iVar1 = *(int *)(param_2 + 2);
  *(uint *)(param_2 + 2) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0x14) < iVar1 + 1U) {
    FUN_145765404(param_2 + 1,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)param_2[1] + (longlong)iVar1 * 0x98);
  *(undefined4 *)puVar3 = *(undefined4 *)param_1;
  lVar4 = 0xb;
  puVar5 = param_1;
  puVar6 = puVar3;
  while( true ) {
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
    if (lVar4 == 0) break;
    lVar4 = lVar4 + -1;
    *puVar6 = *puVar5;
  }
  puVar3[0xe] = param_1[0xe];
  uVar2 = param_1[0xd];
  puVar3[0xc] = param_1[0xc];
  puVar3[0xd] = uVar2;
  uVar2 = param_1[0x10];
  puVar3[0xf] = param_1[0xf];
  puVar3[0x10] = uVar2;
  puVar3[0x11] = param_1[0x11];
  *(undefined4 *)(puVar3 + 0x12) = *(undefined4 *)(param_1 + 0x12);
  *(undefined1 *)((longlong)puVar3 + 0x94) = *(undefined1 *)((longlong)param_1 + 0x94);
  return;
}



// FUNCTION 144590fea FUN_144590fea body=29 status=ok
// SIG undefined FUN_144590fea(void)

undefined8 FUN_144590fea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144591008 FUN_144591008 body=209 status=ok
// SIG undefined FUN_144591008(void)

void FUN_144591008(undefined8 *param_1,double *param_2)

{
  int iVar1;
  double dVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if ((*param_2 != (double)*(float *)(param_1 + 1)) ||
     (NAN(*param_2) || NAN((double)*(float *)(param_1 + 1)))) {
    if (*(int *)((longlong)param_2 + 0x14) < 0) {
      *(undefined4 *)(param_2 + 2) = 0;
      FUN_146ea0880(param_2 + 1,0);
    }
    else {
      *(undefined4 *)(param_2 + 2) = 0;
    }
    *param_2 = (double)*(float *)(param_1 + 1);
  }
  param_1 = (undefined8 *)*param_1;
  iVar1 = *(int *)(param_2 + 2);
  *(uint *)(param_2 + 2) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0x14) < iVar1 + 1U) {
    FUN_146287622(param_2 + 1,iVar1);
  }
  dVar2 = param_2[1];
  lVar5 = (longlong)iVar1 * 0x90;
  puVar6 = param_1;
  puVar7 = (undefined8 *)((longlong)dVar2 + lVar5);
  for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined8 *)((longlong)dVar2 + 0x68 + lVar5) = param_1[0xd];
  uVar3 = param_1[0xc];
  puVar6 = (undefined8 *)((longlong)dVar2 + 0x58 + lVar5);
  *puVar6 = param_1[0xb];
  puVar6[1] = uVar3;
  uVar3 = param_1[0xf];
  puVar6 = (undefined8 *)((longlong)dVar2 + 0x70 + lVar5);
  *puVar6 = param_1[0xe];
  puVar6[1] = uVar3;
  *(undefined8 *)((longlong)dVar2 + 0x80 + lVar5) = param_1[0x10];
  *(undefined4 *)((longlong)dVar2 + 0x88 + lVar5) = *(undefined4 *)(param_1 + 0x11);
  return;
}



// FUNCTION 144591104 FUN_144591104 body=29 status=ok
// SIG undefined FUN_144591104(void)

undefined8 FUN_144591104(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144591122 FUN_144591122 body=309 status=ok
// SIG undefined FUN_144591122(void)

void FUN_144591122(undefined8 *param_1,double *param_2)

{
  int iVar1;
  int iVar2;
  void *_Src;
  uint uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*param_2 != (double)*(float *)(param_1 + 1)) ||
     (NAN(*param_2) || NAN((double)*(float *)(param_1 + 1)))) {
    if (*(int *)((longlong)param_2 + 0x14) < 0) {
      *(undefined4 *)(param_2 + 2) = 0;
      FUN_146e9f4f2(param_2 + 1,0);
    }
    else {
      *(undefined4 *)(param_2 + 2) = 0;
    }
    if (*(int *)(param_2 + 5) != *(int *)((longlong)param_2 + 0x54)) {
      FUN_140221dc0(param_2 + 4);
      FUN_140221c28(param_2 + 4);
    }
    *param_2 = (double)*(float *)(param_1 + 1);
  }
  _Src = (void *)*param_1;
  iVar1 = *(int *)(param_2 + 2);
  *(uint *)(param_2 + 2) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0x14) < iVar1 + 1U) {
    FUN_14172debc(param_2 + 1,iVar1);
  }
  memcpy((void *)((longlong)iVar1 * 0x120 + (longlong)param_2[1]),_Src,0x120);
  local_38 = param_1[2];
  uVar3 = ((uint)(local_38 >> 0x14) & 0xffff ^ (uint)(local_38 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  plVar4 = (longlong *)FUN_1496ed2c8(param_2 + 4,uVar3 >> 0x10 ^ uVar3);
  iVar2 = (int)plVar4[1];
  *(uint *)(plVar4 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
    FUN_1446f48e2(plVar4,iVar2);
  }
  *(int *)(*plVar4 + (longlong)iVar2 * 4) = iVar1;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14459128a FUN_14459128a body=29 status=ok
// SIG undefined FUN_14459128a(void)

undefined8 FUN_14459128a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445912fa FUN_1445912fa body=29 status=ok
// SIG undefined FUN_1445912fa(void)

undefined8 FUN_1445912fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144591330 FUN_144591330 body=97 status=ok
// SIG undefined FUN_144591330(void)

void FUN_144591330(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)*param_4;
  uVar2 = *param_2;
  lVar3 = FUN_1496e69c2(param_3,*param_1);
  if (lVar3 != 0) {
    (**(code **)(*plVar1 + 0x78))
              (plVar1,lVar3,uVar2,*(undefined8 *)(param_3 + 0xa0),param_3 + 0xb0,param_1[1] + 0x50);
  }
  return;
}



// FUNCTION 1445913a8 FUN_1445913a8 body=29 status=ok
// SIG undefined FUN_1445913a8(void)

undefined8 FUN_1445913a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445913c6 FUN_1445913c6 body=396 status=ok
// SIG undefined FUN_1445913c6(void)

void FUN_1445913c6(undefined8 *param_1,longlong *param_2,longlong param_3,undefined8 *param_4)

{
  double dVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_188 [32];
  double local_168;
  float local_158 [2];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
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
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  plVar3 = (longlong *)*param_4;
  lVar4 = *param_2;
  lVar5 = FUN_1496e69c2(param_3,*param_1);
  if ((lVar4 != 0 && lVar5 != 0) &&
     (dVar1 = *(double *)(param_3 + 0xa0), (double)*(float *)(lVar4 + 0x28) < dVar1)) {
    local_110 = 0;
    local_108 = 0;
    local_150 = 0;
    uStack_148 = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_104 = 0xffffffff00000080;
    local_fc = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_a4 = 0xffffffff00000080;
    local_9c = 0;
    local_90 = 0;
    local_88 = 0;
    local_60 = 0;
    local_58 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_54 = 0xffffffff00000080;
    local_4c = 0;
    local_40 = 0;
    local_158[0] = (float)dVar1;
    local_38 = 0;
    local_168 = dVar1;
    (**(code **)(*plVar3 + 0x70))(plVar3,lVar5,param_3 + 0x110,local_158);
    puVar6 = (undefined8 *)FUN_14001cc68(0x130,0x10);
    *puVar6 = 0;
    FUN_1496ef2ec(puVar6 + 1,local_158);
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      puVar2 = *(undefined8 **)(lVar4 + 0x300);
      *(undefined8 **)(lVar4 + 0x300) = puVar6;
      UNLOCK();
      LOCK();
      *puVar2 = puVar6;
      UNLOCK();
    }
    FUN_145e15580(local_158);
  }
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14459156a FUN_14459156a body=29 status=ok
// SIG undefined FUN_14459156a(void)

undefined8 FUN_14459156a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445915b7 FUN_1445915b7 body=848 status=ok
// SIG undefined FUN_1445915b7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1445915b7(void)

{
  uint uVar1;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined **ppuStack_80;
  undefined8 local_78;
  char *local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14098d3d2(FUN_1445853e4,L"/Script/ChaosCaching",L"EChaosCacheInterpolationMode",&DAT_14cc22360
               );
  _DAT_14cc22390 = 0xffffffff;
  _DAT_14cc22394 = 0;
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ChaosCaching",&PTR_FUN_14bdd91c0,1,0);
  local_68 = "ChaosCacheAdapter";
  local_60 = 0x11;
  local_5c = 0;
  uVar1 = FUN_14001a6c0(&local_68,1);
  DAT_14cc223b0 = (ulonglong)uVar1;
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 4;
  FUN_14282b410(L"/Script/ChaosCaching",0,0,&PTR_FUN_14bdd9b60);
  local_68 = "GC_Enable";
  local_60 = 9;
  local_5c = 0;
  uVar1 = FUN_14001a6c0(&local_68,1);
  DAT_14cc22418 = (ulonglong)uVar1;
  local_68 = "GC_Breaking";
  local_60 = 0xb;
  local_5c = 0;
  uVar1 = FUN_14001a6c0(&local_68,1);
  DAT_14cc22420 = (ulonglong)uVar1;
  local_68 = "GC_Collision";
  local_60 = 0xc;
  local_5c = 0;
  uVar1 = FUN_14001a6c0(&local_68,1);
  DAT_14cc22428 = (ulonglong)uVar1;
  local_68 = "GC_Trailing";
  local_60 = 0xb;
  local_5c = 0;
  uVar1 = FUN_14001a6c0(&local_68,1);
  DAT_14cc22430 = (ulonglong)uVar1;
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ChaosCaching",&PTR_FUN_14bdda0a0,1,0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/ChaosCaching",0,0,&PTR_FUN_14bdda2c0);
  local_78 = 2;
  ppuStack_80 = &PTR_FUN_14bddbf70;
  local_88 = 1;
  FUN_14282b410(L"/Script/ChaosCaching",&PTR_FUN_14bddbfe0,2,&PTR_FUN_14bddbfb0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 5;
  FUN_14282b410(L"/Script/ChaosCaching",&PTR_FUN_14bddd500,1,&PTR_FUN_14bddd430);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cc225d8,L"p.Chaos.Cache.UseInterpolation",&DAT_14c7677e8,
                L"When enabled, cache interpolates between keys.[def: true]");
  atexit(FUN_14458c38a);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cc225e8,L"p.Chaos.Cache.CompressTracksAfterRecording",&DAT_14c7677e9,
                L"When enabled, cache will compress the transform tracks after recording is done.[def: true]"
               );
  atexit(FUN_14458c3cf);
  local_68 = (char *)0x800000014bddd6fe;
  local_54 = 0xc;
  local_60 = FUN_14577453c();
  local_5c = 1;
  FUN_14674e3c2(&local_68);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ChaosCaching",&PTR_FUN_14bdddc80,1,&PTR_FUN_14bdddc50);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/ChaosCaching",0,0,&PTR_FUN_14bddded0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ChaosCaching",&PTR_FUN_14bdde420,1,0);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144591908 FUN_144591908 body=219 status=ok
// SIG undefined FUN_144591908(void)

void FUN_144591908(void)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxSmartAsset",&PTR_FUN_14bde06f0,1,0);
  FUN_1446f470e(&DAT_14cc22700,L"GetActorType",1);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxSmartAsset",&PTR_FUN_14bde0b90,1,0);
  local_48 = 0x800000014bde0bb8;
  local_34 = 0xd;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_14674eb30(&local_48);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445919e4 FUN_1445919e4 body=102 status=ok
// SIG undefined FUN_1445919e4(void)

void FUN_1445919e4(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014bde0c90;
  local_14 = 0xd;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14674ec72(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144591a4c FUN_144591a4c body=47 status=ok
// SIG undefined FUN_144591a4c(void)

longlong FUN_144591a4c(void)

{
  if (DAT_14cc22748 == 0) {
    FUN_14073dd9a(&DAT_14cc22748,&PTR_LAB_14bde14e0);
  }
  return DAT_14cc22748;
}



// FUNCTION 144591a7b FUN_144591a7b body=47 status=ok
// SIG undefined FUN_144591a7b(void)

longlong FUN_144591a7b(void)

{
  if (DAT_14cc22730 == 0) {
    FUN_14000fc22(&DAT_14cc22730,&PTR_FUN_14bde0dd8);
  }
  return DAT_14cc22730;
}



// FUNCTION 144591aaa FUN_144591aaa body=599 status=ok
// SIG undefined FUN_144591aaa(void)

void FUN_144591aaa(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *_Src;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar3 = *(code **)(*plVar8 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar8 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar8);
          if (cVar6 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar4,local_38);
            goto LAB_144591c5a;
          }
        }
        _Src = (longlong *)(lVar4 + *(int *)((longlong)plVar8 + 0x44));
        if (_Src != local_38) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,local_38,_Src,(int)plVar8[6]);
          }
          else {
            memcpy(local_38,_Src,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_40 = (undefined4)plVar8[6];
        local_48 = 0;
        FUN_1400746b0(plVar8,local_38,lVar4,1);
      }
      else {
        (*pcVar3)(plVar8,local_38,lVar4);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar7;
        puVar7 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar8);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38[0] = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_38);
    }
  }
LAB_144591c5a:
  plVar8 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar8 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445e337a(param_1,plVar8);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144591d02 FUN_144591d02 body=47 status=ok
// SIG undefined FUN_144591d02(void)

longlong FUN_144591d02(void)

{
  if (DAT_14cc22738 == 0) {
    FUN_14000fc22(&DAT_14cc22738,&PTR_FUN_14bde0e18);
  }
  return DAT_14cc22738;
}



// FUNCTION 144591d50 FUN_144591d50 body=34 status=ok
// SIG undefined FUN_144591d50(void)

void FUN_144591d50(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144591d78();
  FUN_14069c8d6(uVar1,&PTR_s_Connect_14bde0e60,2);
  return;
}



// FUNCTION 144591d78 FUN_144591d78 body=227 status=ok
// SIG undefined FUN_144591d78(void)

longlong FUN_144591d78(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc22740 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_143564180;
    local_28 = &LAB_14115fc28;
    local_38 = &LAB_144591e5c;
    local_40 = FUN_144591e5f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x158;
    FUN_14081cfa3(L"/Script/DiscordPartnerSDK",L"DiscordLocalPlayerSubsystem",&DAT_14cc22740,
                  FUN_144591d50);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc22740;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144591e5f FUN_144591e5f body=74 status=ok
// SIG undefined FUN_144591e5f(void)

void FUN_144591e5f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14bde1520;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *(undefined4 *)(puVar1 + 0xe) = 0;
  memset(puVar1 + 0xf,0,0xe0);
  return;
}



// FUNCTION 144591eae FUN_144591eae body=47 status=ok
// SIG undefined FUN_144591eae(void)

longlong FUN_144591eae(void)

{
  if (DAT_14cc22d50 == 0) {
    FUN_14000fc22(&DAT_14cc22d50,&PTR_FUN_14bde9fc8);
  }
  return DAT_14cc22d50;
}



// FUNCTION 144591edd FUN_144591edd body=47 status=ok
// SIG undefined FUN_144591edd(void)

longlong FUN_144591edd(void)

{
  if (DAT_14cc22e50 == 0) {
    FUN_14000fc22(&DAT_14cc22e50,&PTR_FUN_14bdebf40);
  }
  return DAT_14cc22e50;
}



// FUNCTION 144591f0c FUN_144591f0c body=47 status=ok
// SIG undefined FUN_144591f0c(void)

longlong FUN_144591f0c(void)

{
  if (DAT_14cc22e60 == 0) {
    FUN_14000fc22(&DAT_14cc22e60,&PTR_FUN_14bdec0c0);
  }
  return DAT_14cc22e60;
}



// FUNCTION 144591f3b FUN_144591f3b body=47 status=ok
// SIG undefined FUN_144591f3b(void)

longlong FUN_144591f3b(void)

{
  if (DAT_14cc22dc0 == 0) {
    FUN_14000fc22(&DAT_14cc22dc0,&PTR_FUN_14bdeae58);
  }
  return DAT_14cc22dc0;
}



// FUNCTION 144591f6a FUN_144591f6a body=47 status=ok
// SIG undefined FUN_144591f6a(void)

longlong FUN_144591f6a(void)

{
  if (DAT_14cc22e10 == 0) {
    FUN_14000fc22(&DAT_14cc22e10,&PTR_FUN_14bdeb828);
  }
  return DAT_14cc22e10;
}



// FUNCTION 144591f99 FUN_144591f99 body=47 status=ok
// SIG undefined FUN_144591f99(void)

longlong FUN_144591f99(void)

{
  if (DAT_14cc22dd0 == 0) {
    FUN_14000fc22(&DAT_14cc22dd0,&PTR_FUN_14bdeafe8);
  }
  return DAT_14cc22dd0;
}



// FUNCTION 144591fc8 FUN_144591fc8 body=47 status=ok
// SIG undefined FUN_144591fc8(void)

longlong FUN_144591fc8(void)

{
  if (DAT_14cc22de0 == 0) {
    FUN_14000fc22(&DAT_14cc22de0,&PTR_FUN_14bdeb218);
  }
  return DAT_14cc22de0;
}



// FUNCTION 144591ff7 FUN_144591ff7 body=47 status=ok
// SIG undefined FUN_144591ff7(void)

longlong FUN_144591ff7(void)

{
  if (DAT_14cc22e00 == 0) {
    FUN_14000fc22(&DAT_14cc22e00,&PTR_FUN_14bdeb698);
  }
  return DAT_14cc22e00;
}



// FUNCTION 144592026 FUN_144592026 body=47 status=ok
// SIG undefined FUN_144592026(void)

longlong FUN_144592026(void)

{
  if (DAT_14cc22df0 == 0) {
    FUN_14000fc22(&DAT_14cc22df0,&PTR_FUN_14bdeb458);
  }
  return DAT_14cc22df0;
}



// FUNCTION 144592055 FUN_144592055 body=47 status=ok
// SIG undefined FUN_144592055(void)

longlong FUN_144592055(void)

{
  if (DAT_14cc22d00 == 0) {
    FUN_14000fc22(&DAT_14cc22d00,&PTR_FUN_14bde93c8);
  }
  return DAT_14cc22d00;
}



// FUNCTION 144592084 FUN_144592084 body=47 status=ok
// SIG undefined FUN_144592084(void)

longlong FUN_144592084(void)

{
  if (DAT_14cc22d20 == 0) {
    FUN_14000fc22(&DAT_14cc22d20,&PTR_FUN_14bde9790);
  }
  return DAT_14cc22d20;
}



// FUNCTION 1445920b3 FUN_1445920b3 body=47 status=ok
// SIG undefined FUN_1445920b3(void)

longlong FUN_1445920b3(void)

{
  if (DAT_14cc22d10 == 0) {
    FUN_14000fc22(&DAT_14cc22d10,&PTR_FUN_14bde9600);
  }
  return DAT_14cc22d10;
}



// FUNCTION 1445920e2 FUN_1445920e2 body=47 status=ok
// SIG undefined FUN_1445920e2(void)

longlong FUN_1445920e2(void)

{
  if (DAT_14cc22b80 == 0) {
    FUN_14000fc22(&DAT_14cc22b80,&PTR_FUN_14bde5d00);
  }
  return DAT_14cc22b80;
}



// FUNCTION 144592111 FUN_144592111 body=47 status=ok
// SIG undefined FUN_144592111(void)

longlong FUN_144592111(void)

{
  if (DAT_14cc22ec0 == 0) {
    FUN_14000fc22(&DAT_14cc22ec0,&PTR_FUN_14bdecbd8);
  }
  return DAT_14cc22ec0;
}



// FUNCTION 144592140 FUN_144592140 body=47 status=ok
// SIG undefined FUN_144592140(void)

longlong FUN_144592140(void)

{
  if (DAT_14cc22f00 == 0) {
    FUN_14000fc22(&DAT_14cc22f00,&PTR_FUN_14bded3a0);
  }
  return DAT_14cc22f00;
}



// FUNCTION 14459216f FUN_14459216f body=47 status=ok
// SIG undefined FUN_14459216f(void)

longlong FUN_14459216f(void)

{
  if (DAT_14cc22760 == 0) {
    FUN_140f50038(&DAT_14cc22760,&PTR_s__Script_DiscordPartnerSDK_14bde1cd0);
  }
  return DAT_14cc22760;
}



// FUNCTION 14459219e FUN_14459219e body=47 status=ok
// SIG undefined FUN_14459219e(void)

longlong FUN_14459219e(void)

{
  if (DAT_14cc22a88 == 0) {
    FUN_14000fc22(&DAT_14cc22a88,&PTR_FUN_14bde3db0);
  }
  return DAT_14cc22a88;
}



// FUNCTION 1445921cd FUN_1445921cd body=47 status=ok
// SIG undefined FUN_1445921cd(void)

longlong FUN_1445921cd(void)

{
  if (DAT_14cc22a90 == 0) {
    FUN_14000fc22(&DAT_14cc22a90,&PTR_FUN_14bde3ec0);
  }
  return DAT_14cc22a90;
}



// FUNCTION 1445921fc FUN_1445921fc body=47 status=ok
// SIG undefined FUN_1445921fc(void)

longlong FUN_1445921fc(void)

{
  if (DAT_14cc22a98 == 0) {
    FUN_14000fc22(&DAT_14cc22a98,&PTR_FUN_14bde3fe0);
  }
  return DAT_14cc22a98;
}



// FUNCTION 14459222b FUN_14459222b body=47 status=ok
// SIG undefined FUN_14459222b(void)

longlong FUN_14459222b(void)

{
  if (DAT_14cc22aa0 == 0) {
    FUN_14000fc22(&DAT_14cc22aa0,&PTR_FUN_14bde40f0);
  }
  return DAT_14cc22aa0;
}



// FUNCTION 14459225a FUN_14459225a body=47 status=ok
// SIG undefined FUN_14459225a(void)

longlong FUN_14459225a(void)

{
  if (DAT_14cc22aa8 == 0) {
    FUN_14000fc22(&DAT_14cc22aa8,&PTR_FUN_14bde42e0);
  }
  return DAT_14cc22aa8;
}



// FUNCTION 144592289 FUN_144592289 body=47 status=ok
// SIG undefined FUN_144592289(void)

longlong FUN_144592289(void)

{
  if (DAT_14cc22ab0 == 0) {
    FUN_14000fc22(&DAT_14cc22ab0,&PTR_FUN_14bde44c0);
  }
  return DAT_14cc22ab0;
}



// FUNCTION 1445922b8 FUN_1445922b8 body=47 status=ok
// SIG undefined FUN_1445922b8(void)

longlong FUN_1445922b8(void)

{
  if (DAT_14cc22a78 == 0) {
    FUN_14000fc22(&DAT_14cc22a78,&PTR_FUN_14bde3bd0);
  }
  return DAT_14cc22a78;
}



// FUNCTION 1445922e7 FUN_1445922e7 body=47 status=ok
// SIG undefined FUN_1445922e7(void)

longlong FUN_1445922e7(void)

{
  if (DAT_14cc22a80 == 0) {
    FUN_14000fc22(&DAT_14cc22a80,&PTR_FUN_14bde3c98);
  }
  return DAT_14cc22a80;
}



// FUNCTION 144592316 FUN_144592316 body=47 status=ok
// SIG undefined FUN_144592316(void)

longlong FUN_144592316(void)

{
  if (DAT_14cc22e28 == 0) {
    FUN_14000fc22(&DAT_14cc22e28,&PTR_FUN_14bdebaf8);
  }
  return DAT_14cc22e28;
}



// FUNCTION 144592345 FUN_144592345 body=47 status=ok
// SIG undefined FUN_144592345(void)

longlong FUN_144592345(void)

{
  if (DAT_14cc22e30 == 0) {
    FUN_14000fc22(&DAT_14cc22e30,&PTR_FUN_14bdebc08);
  }
  return DAT_14cc22e30;
}



// FUNCTION 144592374 FUN_144592374 body=47 status=ok
// SIG undefined FUN_144592374(void)

longlong FUN_144592374(void)

{
  if (DAT_14cc22e48 == 0) {
    FUN_14000fc22(&DAT_14cc22e48,&PTR_FUN_14bdebe78);
  }
  return DAT_14cc22e48;
}



// FUNCTION 1445923a3 FUN_1445923a3 body=47 status=ok
// SIG undefined FUN_1445923a3(void)

longlong FUN_1445923a3(void)

{
  if (DAT_14cc22e58 == 0) {
    FUN_14000fc22(&DAT_14cc22e58,&PTR_FUN_14bdec000);
  }
  return DAT_14cc22e58;
}



// FUNCTION 1445923d2 FUN_1445923d2 body=47 status=ok
// SIG undefined FUN_1445923d2(void)

longlong FUN_1445923d2(void)

{
  if (DAT_14cc22e68 == 0) {
    FUN_14000fc22(&DAT_14cc22e68,&PTR_FUN_14bdec1f0);
  }
  return DAT_14cc22e68;
}



// FUNCTION 144592401 FUN_144592401 body=47 status=ok
// SIG undefined FUN_144592401(void)

longlong FUN_144592401(void)

{
  if (DAT_14cc22e70 == 0) {
    FUN_14000fc22(&DAT_14cc22e70,&PTR_FUN_14bdec310);
  }
  return DAT_14cc22e70;
}



// FUNCTION 144592430 FUN_144592430 body=47 status=ok
// SIG undefined FUN_144592430(void)

longlong FUN_144592430(void)

{
  if (DAT_14cc22bc8 == 0) {
    FUN_14000fc22(&DAT_14cc22bc8,&PTR_FUN_14bde6ab8);
  }
  return DAT_14cc22bc8;
}



// FUNCTION 14459245f FUN_14459245f body=47 status=ok
// SIG undefined FUN_14459245f(void)

longlong FUN_14459245f(void)

{
  if (DAT_14cc22bd0 == 0) {
    FUN_14000fc22(&DAT_14cc22bd0,&PTR_FUN_14bde6c08);
  }
  return DAT_14cc22bd0;
}



// FUNCTION 14459248e FUN_14459248e body=47 status=ok
// SIG undefined FUN_14459248e(void)

longlong FUN_14459248e(void)

{
  if (DAT_14cc22c28 == 0) {
    FUN_14000fc22(&DAT_14cc22c28,&PTR_FUN_14bde7b20);
  }
  return DAT_14cc22c28;
}



// FUNCTION 1445924bd FUN_1445924bd body=47 status=ok
// SIG undefined FUN_1445924bd(void)

longlong FUN_1445924bd(void)

{
  if (DAT_14cc22c30 == 0) {
    FUN_14000fc22(&DAT_14cc22c30,&PTR_FUN_14bde7bb0);
  }
  return DAT_14cc22c30;
}



// FUNCTION 1445924ec FUN_1445924ec body=47 status=ok
// SIG undefined FUN_1445924ec(void)

longlong FUN_1445924ec(void)

{
  if (DAT_14cc22c08 == 0) {
    FUN_14000fc22(&DAT_14cc22c08,&PTR_FUN_14bde7878);
  }
  return DAT_14cc22c08;
}



// FUNCTION 14459251b FUN_14459251b body=47 status=ok
// SIG undefined FUN_14459251b(void)

longlong FUN_14459251b(void)

{
  if (DAT_14cc22c10 == 0) {
    FUN_14000fc22(&DAT_14cc22c10,&PTR_FUN_14bde7900);
  }
  return DAT_14cc22c10;
}



// FUNCTION 14459254a FUN_14459254a body=47 status=ok
// SIG undefined FUN_14459254a(void)

longlong FUN_14459254a(void)

{
  if (DAT_14cc22d58 == 0) {
    FUN_14000fc22(&DAT_14cc22d58,&PTR_FUN_14bdea0e8);
  }
  return DAT_14cc22d58;
}



// FUNCTION 144592579 FUN_144592579 body=47 status=ok
// SIG undefined FUN_144592579(void)

longlong FUN_144592579(void)

{
  if (DAT_14cc22d60 == 0) {
    FUN_14000fc22(&DAT_14cc22d60,&PTR_FUN_14bdea208);
  }
  return DAT_14cc22d60;
}



// FUNCTION 1445925a8 FUN_1445925a8 body=47 status=ok
// SIG undefined FUN_1445925a8(void)

longlong FUN_1445925a8(void)

{
  if (DAT_14cc22c78 == 0) {
    FUN_14000fc22(&DAT_14cc22c78,&PTR_FUN_14bde8288);
  }
  return DAT_14cc22c78;
}



// FUNCTION 1445925d7 FUN_1445925d7 body=47 status=ok
// SIG undefined FUN_1445925d7(void)

longlong FUN_1445925d7(void)

{
  if (DAT_14cc22c80 == 0) {
    FUN_14000fc22(&DAT_14cc22c80,&PTR_FUN_14bde8358);
  }
  return DAT_14cc22c80;
}



// FUNCTION 144592606 FUN_144592606 body=47 status=ok
// SIG undefined FUN_144592606(void)

longlong FUN_144592606(void)

{
  if (DAT_14cc22b58 == 0) {
    FUN_14000fc22(&DAT_14cc22b58,&PTR_FUN_14bde5840);
  }
  return DAT_14cc22b58;
}



// FUNCTION 144592635 FUN_144592635 body=47 status=ok
// SIG undefined FUN_144592635(void)

longlong FUN_144592635(void)

{
  if (DAT_14cc22b60 == 0) {
    FUN_14000fc22(&DAT_14cc22b60,&PTR_FUN_14bde59d0);
  }
  return DAT_14cc22b60;
}



// FUNCTION 144592664 FUN_144592664 body=47 status=ok
// SIG undefined FUN_144592664(void)

longlong FUN_144592664(void)

{
  if (DAT_14cc22c88 == 0) {
    FUN_14000fc22(&DAT_14cc22c88,&PTR_FUN_14bde8420);
  }
  return DAT_14cc22c88;
}



// FUNCTION 144592693 FUN_144592693 body=47 status=ok
// SIG undefined FUN_144592693(void)

longlong FUN_144592693(void)

{
  if (DAT_14cc22c90 == 0) {
    FUN_14000fc22(&DAT_14cc22c90,&PTR_FUN_14bde84f0);
  }
  return DAT_14cc22c90;
}



// FUNCTION 1445926c2 FUN_1445926c2 body=47 status=ok
// SIG undefined FUN_1445926c2(void)

longlong FUN_1445926c2(void)

{
  if (DAT_14cc22af8 == 0) {
    FUN_14000fc22(&DAT_14cc22af8,&PTR_FUN_14bde4d78);
  }
  return DAT_14cc22af8;
}



// FUNCTION 1445926f1 FUN_1445926f1 body=47 status=ok
// SIG undefined FUN_1445926f1(void)

longlong FUN_1445926f1(void)

{
  if (DAT_14cc22b00 == 0) {
    FUN_14000fc22(&DAT_14cc22b00,&PTR_FUN_14bde4df8);
  }
  return DAT_14cc22b00;
}



// FUNCTION 144592720 FUN_144592720 body=47 status=ok
// SIG undefined FUN_144592720(void)

longlong FUN_144592720(void)

{
  if (DAT_14cc22b08 == 0) {
    FUN_14000fc22(&DAT_14cc22b08,&PTR_FUN_14bde4e70);
  }
  return DAT_14cc22b08;
}



// FUNCTION 14459274f FUN_14459274f body=47 status=ok
// SIG undefined FUN_14459274f(void)

longlong FUN_14459274f(void)

{
  if (DAT_14cc22b10 == 0) {
    FUN_14000fc22(&DAT_14cc22b10,&PTR_FUN_14bde4ef0);
  }
  return DAT_14cc22b10;
}



// FUNCTION 14459277e FUN_14459277e body=47 status=ok
// SIG undefined FUN_14459277e(void)

longlong FUN_14459277e(void)

{
  if (DAT_14cc22bd8 == 0) {
    FUN_14000fc22(&DAT_14cc22bd8,&PTR_FUN_14bde6e68);
  }
  return DAT_14cc22bd8;
}



// FUNCTION 1445927ad FUN_1445927ad body=47 status=ok
// SIG undefined FUN_1445927ad(void)

longlong FUN_1445927ad(void)

{
  if (DAT_14cc22be0 == 0) {
    FUN_14000fc22(&DAT_14cc22be0,&PTR_FUN_14bde7088);
  }
  return DAT_14cc22be0;
}



// FUNCTION 1445927dc FUN_1445927dc body=47 status=ok
// SIG undefined FUN_1445927dc(void)

longlong FUN_1445927dc(void)

{
  if (DAT_14cc22be8 == 0) {
    FUN_14000fc22(&DAT_14cc22be8,&PTR_FUN_14bde71d8);
  }
  return DAT_14cc22be8;
}



// FUNCTION 14459280b FUN_14459280b body=47 status=ok
// SIG undefined FUN_14459280b(void)

longlong FUN_14459280b(void)

{
  if (DAT_14cc22bf0 == 0) {
    FUN_14000fc22(&DAT_14cc22bf0,&PTR_FUN_14bde7330);
  }
  return DAT_14cc22bf0;
}



// FUNCTION 14459283a FUN_14459283a body=47 status=ok
// SIG undefined FUN_14459283a(void)

longlong FUN_14459283a(void)

{
  if (DAT_14cc22b18 == 0) {
    FUN_14000fc22(&DAT_14cc22b18,&PTR_FUN_14bde4fc8);
  }
  return DAT_14cc22b18;
}



// FUNCTION 144592869 FUN_144592869 body=47 status=ok
// SIG undefined FUN_144592869(void)

longlong FUN_144592869(void)

{
  if (DAT_14cc22b20 == 0) {
    FUN_14000fc22(&DAT_14cc22b20,&PTR_FUN_14bde5098);
  }
  return DAT_14cc22b20;
}



// FUNCTION 144592898 FUN_144592898 body=47 status=ok
// SIG undefined FUN_144592898(void)

longlong FUN_144592898(void)

{
  if (DAT_14cc22b28 == 0) {
    FUN_14000fc22(&DAT_14cc22b28,&PTR_FUN_14bde5168);
  }
  return DAT_14cc22b28;
}



// FUNCTION 1445928c7 FUN_1445928c7 body=47 status=ok
// SIG undefined FUN_1445928c7(void)

longlong FUN_1445928c7(void)

{
  if (DAT_14cc22b30 == 0) {
    FUN_14000fc22(&DAT_14cc22b30,&PTR_FUN_14bde5238);
  }
  return DAT_14cc22b30;
}



// FUNCTION 1445928f6 FUN_1445928f6 body=47 status=ok
// SIG undefined FUN_1445928f6(void)

longlong FUN_1445928f6(void)

{
  if (DAT_14cc22ed8 == 0) {
    FUN_14000fc22(&DAT_14cc22ed8,&PTR_FUN_14bdecf40);
  }
  return DAT_14cc22ed8;
}



// FUNCTION 144592925 FUN_144592925 body=47 status=ok
// SIG undefined FUN_144592925(void)

longlong FUN_144592925(void)

{
  if (DAT_14cc22ee0 == 0) {
    FUN_14000fc22(&DAT_14cc22ee0,&PTR_FUN_14bded060);
  }
  return DAT_14cc22ee0;
}



// FUNCTION 144592954 FUN_144592954 body=47 status=ok
// SIG undefined FUN_144592954(void)

longlong FUN_144592954(void)

{
  if (DAT_14cc22d68 == 0) {
    FUN_14000fc22(&DAT_14cc22d68,&PTR_FUN_14bdea368);
  }
  return DAT_14cc22d68;
}



// FUNCTION 144592983 FUN_144592983 body=47 status=ok
// SIG undefined FUN_144592983(void)

longlong FUN_144592983(void)

{
  if (DAT_14cc22d70 == 0) {
    FUN_14000fc22(&DAT_14cc22d70,&PTR_FUN_14bdea4c0);
  }
  return DAT_14cc22d70;
}



// FUNCTION 1445929b2 FUN_1445929b2 body=47 status=ok
// SIG undefined FUN_1445929b2(void)

longlong FUN_1445929b2(void)

{
  if (DAT_14cc22b38 == 0) {
    FUN_14000fc22(&DAT_14cc22b38,&PTR_FUN_14bde5350);
  }
  return DAT_14cc22b38;
}



// FUNCTION 1445929e1 FUN_1445929e1 body=47 status=ok
// SIG undefined FUN_1445929e1(void)

longlong FUN_1445929e1(void)

{
  if (DAT_14cc22b40 == 0) {
    FUN_14000fc22(&DAT_14cc22b40,&PTR_FUN_14bde5468);
  }
  return DAT_14cc22b40;
}



// FUNCTION 144592a10 FUN_144592a10 body=47 status=ok
// SIG undefined FUN_144592a10(void)

longlong FUN_144592a10(void)

{
  if (DAT_14cc22c98 == 0) {
    FUN_14000fc22(&DAT_14cc22c98,&PTR_FUN_14bde8658);
  }
  return DAT_14cc22c98;
}



// FUNCTION 144592a3f FUN_144592a3f body=47 status=ok
// SIG undefined FUN_144592a3f(void)

longlong FUN_144592a3f(void)

{
  if (DAT_14cc22ca0 == 0) {
    FUN_14000fc22(&DAT_14cc22ca0,&PTR_FUN_14bde87b0);
  }
  return DAT_14cc22ca0;
}



// FUNCTION 144592a6e FUN_144592a6e body=47 status=ok
// SIG undefined FUN_144592a6e(void)

longlong FUN_144592a6e(void)

{
  if (DAT_14cc22b48 == 0) {
    FUN_14000fc22(&DAT_14cc22b48,&PTR_FUN_14bde5570);
  }
  return DAT_14cc22b48;
}



// FUNCTION 144592a9d FUN_144592a9d body=47 status=ok
// SIG undefined FUN_144592a9d(void)

longlong FUN_144592a9d(void)

{
  if (DAT_14cc22b50 == 0) {
    FUN_14000fc22(&DAT_14cc22b50,&PTR_FUN_14bde5688);
  }
  return DAT_14cc22b50;
}



// FUNCTION 144592acc FUN_144592acc body=47 status=ok
// SIG undefined FUN_144592acc(void)

longlong FUN_144592acc(void)

{
  if (DAT_14cc22d78 == 0) {
    FUN_14000fc22(&DAT_14cc22d78,&PTR_FUN_14bdea618);
  }
  return DAT_14cc22d78;
}



// FUNCTION 144592afb FUN_144592afb body=47 status=ok
// SIG undefined FUN_144592afb(void)

longlong FUN_144592afb(void)

{
  if (DAT_14cc22d80 == 0) {
    FUN_14000fc22(&DAT_14cc22d80,&PTR_FUN_14bdea768);
  }
  return DAT_14cc22d80;
}



// FUNCTION 144592b2a FUN_144592b2a body=47 status=ok
// SIG undefined FUN_144592b2a(void)

longlong FUN_144592b2a(void)

{
  if (DAT_14cc22e18 == 0) {
    FUN_14000fc22(&DAT_14cc22e18,&PTR_FUN_14bdeb908);
  }
  return DAT_14cc22e18;
}



// FUNCTION 144592b59 FUN_144592b59 body=47 status=ok
// SIG undefined FUN_144592b59(void)

longlong FUN_144592b59(void)

{
  if (DAT_14cc22e20 == 0) {
    FUN_14000fc22(&DAT_14cc22e20,&PTR_FUN_14bdeb9d8);
  }
  return DAT_14cc22e20;
}



// FUNCTION 144592b88 FUN_144592b88 body=47 status=ok
// SIG undefined FUN_144592b88(void)

longlong FUN_144592b88(void)

{
  if (DAT_14cc22d88 == 0) {
    FUN_14000fc22(&DAT_14cc22d88,&PTR_FUN_14bdea888);
  }
  return DAT_14cc22d88;
}



// FUNCTION 144592bb7 FUN_144592bb7 body=47 status=ok
// SIG undefined FUN_144592bb7(void)

longlong FUN_144592bb7(void)

{
  if (DAT_14cc22d90 == 0) {
    FUN_14000fc22(&DAT_14cc22d90,&PTR_FUN_14bdea998);
  }
  return DAT_14cc22d90;
}



// FUNCTION 144592be6 FUN_144592be6 body=47 status=ok
// SIG undefined FUN_144592be6(void)

longlong FUN_144592be6(void)

{
  if (DAT_14cc22d98 == 0) {
    FUN_14000fc22(&DAT_14cc22d98,&PTR_FUN_14bdeaa60);
  }
  return DAT_14cc22d98;
}



// FUNCTION 144592c15 FUN_144592c15 body=47 status=ok
// SIG undefined FUN_144592c15(void)

longlong FUN_144592c15(void)

{
  if (DAT_14cc22da0 == 0) {
    FUN_14000fc22(&DAT_14cc22da0,&PTR_FUN_14bdeab28);
  }
  return DAT_14cc22da0;
}



// FUNCTION 144592c44 FUN_144592c44 body=47 status=ok
// SIG undefined FUN_144592c44(void)

longlong FUN_144592c44(void)

{
  if (DAT_14cc22da8 == 0) {
    FUN_14000fc22(&DAT_14cc22da8,&PTR_FUN_14bdeabf8);
  }
  return DAT_14cc22da8;
}



// FUNCTION 144592c73 FUN_144592c73 body=47 status=ok
// SIG undefined FUN_144592c73(void)

longlong FUN_144592c73(void)

{
  if (DAT_14cc22db0 == 0) {
    FUN_14000fc22(&DAT_14cc22db0,&PTR_FUN_14bdeacc8);
  }
  return DAT_14cc22db0;
}



// FUNCTION 144592ca2 FUN_144592ca2 body=47 status=ok
// SIG undefined FUN_144592ca2(void)

longlong FUN_144592ca2(void)

{
  if (DAT_14cc22ac8 == 0) {
    FUN_14000fc22(&DAT_14cc22ac8,&PTR_FUN_14bde48a0);
  }
  return DAT_14cc22ac8;
}



// FUNCTION 144592cd1 FUN_144592cd1 body=47 status=ok
// SIG undefined FUN_144592cd1(void)

longlong FUN_144592cd1(void)

{
  if (DAT_14cc22ad0 == 0) {
    FUN_14000fc22(&DAT_14cc22ad0,&PTR_FUN_14bde49b0);
  }
  return DAT_14cc22ad0;
}



// FUNCTION 144592d00 FUN_144592d00 body=47 status=ok
// SIG undefined FUN_144592d00(void)

longlong FUN_144592d00(void)

{
  if (DAT_14cc22db8 == 0) {
    FUN_14000fc22(&DAT_14cc22db8,&PTR_FUN_14bdead90);
  }
  return DAT_14cc22db8;
}



// FUNCTION 144592d2f FUN_144592d2f body=47 status=ok
// SIG undefined FUN_144592d2f(void)

longlong FUN_144592d2f(void)

{
  if (DAT_14cc22dc8 == 0) {
    FUN_14000fc22(&DAT_14cc22dc8,&PTR_FUN_14bdeaf20);
  }
  return DAT_14cc22dc8;
}



// FUNCTION 144592d5e FUN_144592d5e body=47 status=ok
// SIG undefined FUN_144592d5e(void)

longlong FUN_144592d5e(void)

{
  if (DAT_14cc22dd8 == 0) {
    FUN_14000fc22(&DAT_14cc22dd8,&PTR_FUN_14bdeb100);
  }
  return DAT_14cc22dd8;
}



// FUNCTION 144592d8d FUN_144592d8d body=47 status=ok
// SIG undefined FUN_144592d8d(void)

longlong FUN_144592d8d(void)

{
  if (DAT_14cc22de8 == 0) {
    FUN_14000fc22(&DAT_14cc22de8,&PTR_FUN_14bdeb338);
  }
  return DAT_14cc22de8;
}



// FUNCTION 144592dbc FUN_144592dbc body=47 status=ok
// SIG undefined FUN_144592dbc(void)

longlong FUN_144592dbc(void)

{
  if (DAT_14cc22df8 == 0) {
    FUN_14000fc22(&DAT_14cc22df8,&PTR_FUN_14bdeb578);
  }
  return DAT_14cc22df8;
}



// FUNCTION 144592deb FUN_144592deb body=47 status=ok
// SIG undefined FUN_144592deb(void)

longlong FUN_144592deb(void)

{
  if (DAT_14cc22e08 == 0) {
    FUN_14000fc22(&DAT_14cc22e08,&PTR_FUN_14bdeb760);
  }
  return DAT_14cc22e08;
}



// FUNCTION 144592e1a FUN_144592e1a body=47 status=ok
// SIG undefined FUN_144592e1a(void)

longlong FUN_144592e1a(void)

{
  if (DAT_14cc22d28 == 0) {
    FUN_14000fc22(&DAT_14cc22d28,&PTR_FUN_14bde98f0);
  }
  return DAT_14cc22d28;
}



// FUNCTION 144592e49 FUN_144592e49 body=47 status=ok
// SIG undefined FUN_144592e49(void)

longlong FUN_144592e49(void)

{
  if (DAT_14cc22d30 == 0) {
    FUN_14000fc22(&DAT_14cc22d30,&PTR_FUN_14bde9a40);
  }
  return DAT_14cc22d30;
}



// FUNCTION 144592e78 FUN_144592e78 body=47 status=ok
// SIG undefined FUN_144592e78(void)

longlong FUN_144592e78(void)

{
  if (DAT_14cc22cf8 == 0) {
    FUN_14000fc22(&DAT_14cc22cf8,&PTR_FUN_14bde9300);
  }
  return DAT_14cc22cf8;
}



// FUNCTION 144592ea7 FUN_144592ea7 body=47 status=ok
// SIG undefined FUN_144592ea7(void)

longlong FUN_144592ea7(void)

{
  if (DAT_14cc22d08 == 0) {
    FUN_14000fc22(&DAT_14cc22d08,&PTR_FUN_14bde94f0);
  }
  return DAT_14cc22d08;
}



// FUNCTION 144592ed6 FUN_144592ed6 body=47 status=ok
// SIG undefined FUN_144592ed6(void)

longlong FUN_144592ed6(void)

{
  if (DAT_14cc22d18 == 0) {
    FUN_14000fc22(&DAT_14cc22d18,&PTR_FUN_14bde96c8);
  }
  return DAT_14cc22d18;
}



// FUNCTION 144592f05 FUN_144592f05 body=47 status=ok
// SIG undefined FUN_144592f05(void)

longlong FUN_144592f05(void)

{
  if (DAT_14cc22b78 == 0) {
    FUN_14000fc22(&DAT_14cc22b78,&PTR_FUN_14bde5c38);
  }
  return DAT_14cc22b78;
}



// FUNCTION 144592f34 FUN_144592f34 body=47 status=ok
// SIG undefined FUN_144592f34(void)

longlong FUN_144592f34(void)

{
  if (DAT_14cc22d48 == 0) {
    FUN_14000fc22(&DAT_14cc22d48,&PTR_FUN_14bde9de0);
  }
  return DAT_14cc22d48;
}



// FUNCTION 144592f63 FUN_144592f63 body=47 status=ok
// SIG undefined FUN_144592f63(void)

longlong FUN_144592f63(void)

{
  if (DAT_14cc22d38 == 0) {
    FUN_14000fc22(&DAT_14cc22d38,&PTR_FUN_14bde9b20);
  }
  return DAT_14cc22d38;
}



// FUNCTION 144592f92 FUN_144592f92 body=47 status=ok
// SIG undefined FUN_144592f92(void)

longlong FUN_144592f92(void)

{
  if (DAT_14cc22d40 == 0) {
    FUN_14000fc22(&DAT_14cc22d40,&PTR_FUN_14bde9c00);
  }
  return DAT_14cc22d40;
}



// FUNCTION 144592fc1 FUN_144592fc1 body=47 status=ok
// SIG undefined FUN_144592fc1(void)

longlong FUN_144592fc1(void)

{
  if (DAT_14cc22cd8 == 0) {
    FUN_14000fc22(&DAT_14cc22cd8,&PTR_FUN_14bde8f30);
  }
  return DAT_14cc22cd8;
}



// FUNCTION 144592ff0 FUN_144592ff0 body=47 status=ok
// SIG undefined FUN_144592ff0(void)

longlong FUN_144592ff0(void)

{
  if (DAT_14cc22ce0 == 0) {
    FUN_14000fc22(&DAT_14cc22ce0,&PTR_FUN_14bde9000);
  }
  return DAT_14cc22ce0;
}



// FUNCTION 14459301f FUN_14459301f body=47 status=ok
// SIG undefined FUN_14459301f(void)

longlong FUN_14459301f(void)

{
  if (DAT_14cc22ad8 == 0) {
    FUN_14000fc22(&DAT_14cc22ad8,&PTR_FUN_14bde4a80);
  }
  return DAT_14cc22ad8;
}



// FUNCTION 14459304e FUN_14459304e body=47 status=ok
// SIG undefined FUN_14459304e(void)

longlong FUN_14459304e(void)

{
  if (DAT_14cc22ae0 == 0) {
    FUN_14000fc22(&DAT_14cc22ae0,&PTR_FUN_14bde4b50);
  }
  return DAT_14cc22ae0;
}



// FUNCTION 14459307d FUN_14459307d body=47 status=ok
// SIG undefined FUN_14459307d(void)

longlong FUN_14459307d(void)

{
  if (DAT_14cc22cc8 == 0) {
    FUN_14000fc22(&DAT_14cc22cc8,&PTR_FUN_14bde8dd0);
  }
  return DAT_14cc22cc8;
}



// FUNCTION 1445930ac FUN_1445930ac body=47 status=ok
// SIG undefined FUN_1445930ac(void)

longlong FUN_1445930ac(void)

{
  if (DAT_14cc22cd0 == 0) {
    FUN_14000fc22(&DAT_14cc22cd0,&PTR_FUN_14bde8e60);
  }
  return DAT_14cc22cd0;
}



// FUNCTION 1445930db FUN_1445930db body=47 status=ok
// SIG undefined FUN_1445930db(void)

longlong FUN_1445930db(void)

{
  if (DAT_14cc22eb8 == 0) {
    FUN_14000fc22(&DAT_14cc22eb8,&PTR_FUN_14bdecab8);
  }
  return DAT_14cc22eb8;
}



// FUNCTION 14459310a FUN_14459310a body=47 status=ok
// SIG undefined FUN_14459310a(void)

longlong FUN_14459310a(void)

{
  if (DAT_14cc22ec8 == 0) {
    FUN_14000fc22(&DAT_14cc22ec8,&PTR_FUN_14bdeccf8);
  }
  return DAT_14cc22ec8;
}



// FUNCTION 144593139 FUN_144593139 body=47 status=ok
// SIG undefined FUN_144593139(void)

longlong FUN_144593139(void)

{
  if (DAT_14cc22ed0 == 0) {
    FUN_14000fc22(&DAT_14cc22ed0,&PTR_FUN_14bdece18);
  }
  return DAT_14cc22ed0;
}



// FUNCTION 144593168 FUN_144593168 body=47 status=ok
// SIG undefined FUN_144593168(void)

longlong FUN_144593168(void)

{
  if (DAT_14cc22ee8 == 0) {
    FUN_14000fc22(&DAT_14cc22ee8,&PTR_FUN_14bded138);
  }
  return DAT_14cc22ee8;
}



// FUNCTION 144593197 FUN_144593197 body=47 status=ok
// SIG undefined FUN_144593197(void)

longlong FUN_144593197(void)

{
  if (DAT_14cc22ef0 == 0) {
    FUN_14000fc22(&DAT_14cc22ef0,&PTR_FUN_14bded210);
  }
  return DAT_14cc22ef0;
}



// FUNCTION 1445931c6 FUN_1445931c6 body=47 status=ok
// SIG undefined FUN_1445931c6(void)

longlong FUN_1445931c6(void)

{
  if (DAT_14cc22c18 == 0) {
    FUN_14000fc22(&DAT_14cc22c18,&PTR_FUN_14bde79c8);
  }
  return DAT_14cc22c18;
}



// FUNCTION 1445931f5 FUN_1445931f5 body=47 status=ok
// SIG undefined FUN_1445931f5(void)

longlong FUN_1445931f5(void)

{
  if (DAT_14cc22c20 == 0) {
    FUN_14000fc22(&DAT_14cc22c20,&PTR_FUN_14bde7a90);
  }
  return DAT_14cc22c20;
}



// FUNCTION 144593224 FUN_144593224 body=47 status=ok
// SIG undefined FUN_144593224(void)

longlong FUN_144593224(void)

{
  if (DAT_14cc22e38 == 0) {
    FUN_14000fc22(&DAT_14cc22e38,&PTR_FUN_14bdebcd8);
  }
  return DAT_14cc22e38;
}



// FUNCTION 144593253 FUN_144593253 body=47 status=ok
// SIG undefined FUN_144593253(void)

longlong FUN_144593253(void)

{
  if (DAT_14cc22e40 == 0) {
    FUN_14000fc22(&DAT_14cc22e40,&PTR_FUN_14bdebda8);
  }
  return DAT_14cc22e40;
}



// FUNCTION 144593282 FUN_144593282 body=47 status=ok
// SIG undefined FUN_144593282(void)

longlong FUN_144593282(void)

{
  if (DAT_14cc22ea8 == 0) {
    FUN_14000fc22(&DAT_14cc22ea8,&PTR_FUN_14bdec8b0);
  }
  return DAT_14cc22ea8;
}



// FUNCTION 1445932b1 FUN_1445932b1 body=47 status=ok
// SIG undefined FUN_1445932b1(void)

longlong FUN_1445932b1(void)

{
  if (DAT_14cc22eb0 == 0) {
    FUN_14000fc22(&DAT_14cc22eb0,&PTR_FUN_14bdec980);
  }
  return DAT_14cc22eb0;
}



// FUNCTION 1445932e0 FUN_1445932e0 body=47 status=ok
// SIG undefined FUN_1445932e0(void)

longlong FUN_1445932e0(void)

{
  if (DAT_14cc22ce8 == 0) {
    FUN_14000fc22(&DAT_14cc22ce8,&PTR_FUN_14bde9120);
  }
  return DAT_14cc22ce8;
}



// FUNCTION 14459330f FUN_14459330f body=47 status=ok
// SIG undefined FUN_14459330f(void)

longlong FUN_14459330f(void)

{
  if (DAT_14cc22cf0 == 0) {
    FUN_14000fc22(&DAT_14cc22cf0,&PTR_FUN_14bde9238);
  }
  return DAT_14cc22cf0;
}



// FUNCTION 14459333e FUN_14459333e body=47 status=ok
// SIG undefined FUN_14459333e(void)

longlong FUN_14459333e(void)

{
  if (DAT_14cc22b68 == 0) {
    FUN_14000fc22(&DAT_14cc22b68,&PTR_FUN_14bde5a98);
  }
  return DAT_14cc22b68;
}



// FUNCTION 14459336d FUN_14459336d body=47 status=ok
// SIG undefined FUN_14459336d(void)

longlong FUN_14459336d(void)

{
  if (DAT_14cc22b70 == 0) {
    FUN_14000fc22(&DAT_14cc22b70,&PTR_FUN_14bde5b60);
  }
  return DAT_14cc22b70;
}



// FUNCTION 14459339c FUN_14459339c body=47 status=ok
// SIG undefined FUN_14459339c(void)

longlong FUN_14459339c(void)

{
  if (DAT_14cc22b88 == 0) {
    FUN_14000fc22(&DAT_14cc22b88,&PTR_FUN_14bde5dc8);
  }
  return DAT_14cc22b88;
}



// FUNCTION 1445933cb FUN_1445933cb body=47 status=ok
// SIG undefined FUN_1445933cb(void)

longlong FUN_1445933cb(void)

{
  if (DAT_14cc22b90 == 0) {
    FUN_14000fc22(&DAT_14cc22b90,&PTR_FUN_14bde5e98);
  }
  return DAT_14cc22b90;
}



// FUNCTION 1445933fa FUN_1445933fa body=47 status=ok
// SIG undefined FUN_1445933fa(void)

longlong FUN_1445933fa(void)

{
  if (DAT_14cc22bf8 == 0) {
    FUN_14000fc22(&DAT_14cc22bf8,&PTR_FUN_14bde7598);
  }
  return DAT_14cc22bf8;
}



// FUNCTION 144593429 FUN_144593429 body=47 status=ok
// SIG undefined FUN_144593429(void)

longlong FUN_144593429(void)

{
  if (DAT_14cc22c00 == 0) {
    FUN_14000fc22(&DAT_14cc22c00,&PTR_FUN_14bde77f8);
  }
  return DAT_14cc22c00;
}



// FUNCTION 144593458 FUN_144593458 body=47 status=ok
// SIG undefined FUN_144593458(void)

longlong FUN_144593458(void)

{
  if (DAT_14cc22c38 == 0) {
    FUN_14000fc22(&DAT_14cc22c38,&PTR_FUN_14bde7c30);
  }
  return DAT_14cc22c38;
}



// FUNCTION 144593487 FUN_144593487 body=47 status=ok
// SIG undefined FUN_144593487(void)

longlong FUN_144593487(void)

{
  if (DAT_14cc22c40 == 0) {
    FUN_14000fc22(&DAT_14cc22c40,&PTR_FUN_14bde7cb8);
  }
  return DAT_14cc22c40;
}



// FUNCTION 1445934b6 FUN_1445934b6 body=47 status=ok
// SIG undefined FUN_1445934b6(void)

longlong FUN_1445934b6(void)

{
  if (DAT_14cc22c48 == 0) {
    FUN_14000fc22(&DAT_14cc22c48,&PTR_FUN_14bde7d90);
  }
  return DAT_14cc22c48;
}



// FUNCTION 1445934e5 FUN_1445934e5 body=47 status=ok
// SIG undefined FUN_1445934e5(void)

longlong FUN_1445934e5(void)

{
  if (DAT_14cc22c50 == 0) {
    FUN_14000fc22(&DAT_14cc22c50,&PTR_FUN_14bde7e68);
  }
  return DAT_14cc22c50;
}



// FUNCTION 144593514 FUN_144593514 body=47 status=ok
// SIG undefined FUN_144593514(void)

longlong FUN_144593514(void)

{
  if (DAT_14cc22ab8 == 0) {
    FUN_14000fc22(&DAT_14cc22ab8,&PTR_FUN_14bde4630);
  }
  return DAT_14cc22ab8;
}



// FUNCTION 144593543 FUN_144593543 body=47 status=ok
// SIG undefined FUN_144593543(void)

longlong FUN_144593543(void)

{
  if (DAT_14cc22ac0 == 0) {
    FUN_14000fc22(&DAT_14cc22ac0,&PTR_FUN_14bde4790);
  }
  return DAT_14cc22ac0;
}



// FUNCTION 144593572 FUN_144593572 body=47 status=ok
// SIG undefined FUN_144593572(void)

longlong FUN_144593572(void)

{
  if (DAT_14cc22c58 == 0) {
    FUN_14000fc22(&DAT_14cc22c58,&PTR_FUN_14bde7f48);
  }
  return DAT_14cc22c58;
}



// FUNCTION 1445935a1 FUN_1445935a1 body=47 status=ok
// SIG undefined FUN_1445935a1(void)

longlong FUN_1445935a1(void)

{
  if (DAT_14cc22c60 == 0) {
    FUN_14000fc22(&DAT_14cc22c60,&PTR_FUN_14bde8028);
  }
  return DAT_14cc22c60;
}



// FUNCTION 1445935d0 FUN_1445935d0 body=47 status=ok
// SIG undefined FUN_1445935d0(void)

longlong FUN_1445935d0(void)

{
  if (DAT_14cc22e98 == 0) {
    FUN_14000fc22(&DAT_14cc22e98,&PTR_FUN_14bdec710);
  }
  return DAT_14cc22e98;
}



// FUNCTION 1445935ff FUN_1445935ff body=47 status=ok
// SIG undefined FUN_1445935ff(void)

longlong FUN_1445935ff(void)

{
  if (DAT_14cc22ea0 == 0) {
    FUN_14000fc22(&DAT_14cc22ea0,&PTR_FUN_14bdec7e0);
  }
  return DAT_14cc22ea0;
}



// FUNCTION 14459362e FUN_14459362e body=47 status=ok
// SIG undefined FUN_14459362e(void)

longlong FUN_14459362e(void)

{
  if (DAT_14cc22e88 == 0) {
    FUN_14000fc22(&DAT_14cc22e88,&PTR_FUN_14bdec570);
  }
  return DAT_14cc22e88;
}



// FUNCTION 14459365d FUN_14459365d body=47 status=ok
// SIG undefined FUN_14459365d(void)

longlong FUN_14459365d(void)

{
  if (DAT_14cc22e90 == 0) {
    FUN_14000fc22(&DAT_14cc22e90,&PTR_FUN_14bdec640);
  }
  return DAT_14cc22e90;
}



// FUNCTION 14459368c FUN_14459368c body=47 status=ok
// SIG undefined FUN_14459368c(void)

longlong FUN_14459368c(void)

{
  if (DAT_14cc22e78 == 0) {
    FUN_14000fc22(&DAT_14cc22e78,&PTR_FUN_14bdec3d8);
  }
  return DAT_14cc22e78;
}



// FUNCTION 1445936bb FUN_1445936bb body=47 status=ok
// SIG undefined FUN_1445936bb(void)

longlong FUN_1445936bb(void)

{
  if (DAT_14cc22e80 == 0) {
    FUN_14000fc22(&DAT_14cc22e80,&PTR_FUN_14bdec4a0);
  }
  return DAT_14cc22e80;
}



// FUNCTION 1445936ea FUN_1445936ea body=47 status=ok
// SIG undefined FUN_1445936ea(void)

longlong FUN_1445936ea(void)

{
  if (DAT_14cc22c68 == 0) {
    FUN_14000fc22(&DAT_14cc22c68,&PTR_FUN_14bde80f0);
  }
  return DAT_14cc22c68;
}



// FUNCTION 144593719 FUN_144593719 body=47 status=ok
// SIG undefined FUN_144593719(void)

longlong FUN_144593719(void)

{
  if (DAT_14cc22c70 == 0) {
    FUN_14000fc22(&DAT_14cc22c70,&PTR_FUN_14bde81b8);
  }
  return DAT_14cc22c70;
}



// FUNCTION 144593748 FUN_144593748 body=47 status=ok
// SIG undefined FUN_144593748(void)

longlong FUN_144593748(void)

{
  if (DAT_14cc22ae8 == 0) {
    FUN_14000fc22(&DAT_14cc22ae8,&PTR_FUN_14bde4c28);
  }
  return DAT_14cc22ae8;
}



// FUNCTION 144593777 FUN_144593777 body=47 status=ok
// SIG undefined FUN_144593777(void)

longlong FUN_144593777(void)

{
  if (DAT_14cc22af0 == 0) {
    FUN_14000fc22(&DAT_14cc22af0,&PTR_FUN_14bde4d00);
  }
  return DAT_14cc22af0;
}



// FUNCTION 1445937a6 FUN_1445937a6 body=47 status=ok
// SIG undefined FUN_1445937a6(void)

longlong FUN_1445937a6(void)

{
  if (DAT_14cc22bb8 == 0) {
    FUN_14000fc22(&DAT_14cc22bb8,&PTR_FUN_14bde67b8);
  }
  return DAT_14cc22bb8;
}



// FUNCTION 1445937d5 FUN_1445937d5 body=47 status=ok
// SIG undefined FUN_1445937d5(void)

longlong FUN_1445937d5(void)

{
  if (DAT_14cc22bc0 == 0) {
    FUN_14000fc22(&DAT_14cc22bc0,&PTR_FUN_14bde6958);
  }
  return DAT_14cc22bc0;
}



// FUNCTION 144593804 FUN_144593804 body=47 status=ok
// SIG undefined FUN_144593804(void)

longlong FUN_144593804(void)

{
  if (DAT_14cc22ba8 == 0) {
    FUN_14000fc22(&DAT_14cc22ba8,&PTR_FUN_14bde63e8);
  }
  return DAT_14cc22ba8;
}



// FUNCTION 144593833 FUN_144593833 body=47 status=ok
// SIG undefined FUN_144593833(void)

longlong FUN_144593833(void)

{
  if (DAT_14cc22bb0 == 0) {
    FUN_14000fc22(&DAT_14cc22bb0,&PTR_FUN_14bde6618);
  }
  return DAT_14cc22bb0;
}



// FUNCTION 144593862 FUN_144593862 body=47 status=ok
// SIG undefined FUN_144593862(void)

longlong FUN_144593862(void)

{
  if (DAT_14cc22ca8 == 0) {
    FUN_14000fc22(&DAT_14cc22ca8,&PTR_FUN_14bde8920);
  }
  return DAT_14cc22ca8;
}



// FUNCTION 144593891 FUN_144593891 body=47 status=ok
// SIG undefined FUN_144593891(void)

longlong FUN_144593891(void)

{
  if (DAT_14cc22cb0 == 0) {
    FUN_14000fc22(&DAT_14cc22cb0,&PTR_FUN_14bde8a80);
  }
  return DAT_14cc22cb0;
}



// FUNCTION 1445938c0 FUN_1445938c0 body=47 status=ok
// SIG undefined FUN_1445938c0(void)

longlong FUN_1445938c0(void)

{
  if (DAT_14cc22cb8 == 0) {
    FUN_14000fc22(&DAT_14cc22cb8,&PTR_FUN_14bde8be0);
  }
  return DAT_14cc22cb8;
}



// FUNCTION 1445938ef FUN_1445938ef body=47 status=ok
// SIG undefined FUN_1445938ef(void)

longlong FUN_1445938ef(void)

{
  if (DAT_14cc22cc0 == 0) {
    FUN_14000fc22(&DAT_14cc22cc0,&PTR_FUN_14bde8d40);
  }
  return DAT_14cc22cc0;
}



// FUNCTION 14459391e FUN_14459391e body=47 status=ok
// SIG undefined FUN_14459391e(void)

longlong FUN_14459391e(void)

{
  if (DAT_14cc22ef8 == 0) {
    FUN_14000fc22(&DAT_14cc22ef8,&PTR_FUN_14bded2d8);
  }
  return DAT_14cc22ef8;
}



// FUNCTION 14459394d FUN_14459394d body=47 status=ok
// SIG undefined FUN_14459394d(void)

longlong FUN_14459394d(void)

{
  if (DAT_14cc22b98 == 0) {
    FUN_14000fc22(&DAT_14cc22b98,&PTR_FUN_14bde6010);
  }
  return DAT_14cc22b98;
}



// FUNCTION 14459397c FUN_14459397c body=47 status=ok
// SIG undefined FUN_14459397c(void)

longlong FUN_14459397c(void)

{
  if (DAT_14cc22ba0 == 0) {
    FUN_14000fc22(&DAT_14cc22ba0,&PTR_FUN_14bde6178);
  }
  return DAT_14cc22ba0;
}



// FUNCTION 1445939ab FUN_1445939ab body=47 status=ok
// SIG undefined FUN_1445939ab(void)

longlong FUN_1445939ab(void)

{
  if (DAT_14cc227a0 == 0) {
    FUN_14086a14e(&DAT_14cc227a0,&PTR_FUN_14bde2088);
  }
  return DAT_14cc227a0;
}



// FUNCTION 1445939da FUN_1445939da body=47 status=ok
// SIG undefined FUN_1445939da(void)

longlong FUN_1445939da(void)

{
  if (DAT_14cc22790 == 0) {
    FUN_14073dd9a(&DAT_14cc22790,&PTR_LAB_14bde1ff0);
  }
  return DAT_14cc22790;
}



// FUNCTION 144593a09 FUN_144593a09 body=47 status=ok
// SIG undefined FUN_144593a09(void)

longlong FUN_144593a09(void)

{
  if (DAT_14cc22770 == 0) {
    FUN_14000fc22(&DAT_14cc22770,&PTR_FUN_14bde1d70);
  }
  return DAT_14cc22770;
}



// FUNCTION 144593a38 FUN_144593a38 body=108 status=ok
// SIG undefined FUN_144593a38(void)

void FUN_144593a38(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445e3ba6(&local_28,param_1 + 0x38,&local_19);
  if (local_19 == '\0') {
    local_28 = 0;
  }
  *param_3 = local_28;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144593aa5 FUN_144593aa5 body=47 status=ok
// SIG undefined FUN_144593aa5(void)

longlong FUN_144593aa5(void)

{
  if (DAT_14cc22778 == 0) {
    FUN_14000fc22(&DAT_14cc22778,&PTR_FUN_14bde1e08);
  }
  return DAT_14cc22778;
}



// FUNCTION 144593ad4 FUN_144593ad4 body=108 status=ok
// SIG undefined FUN_144593ad4(void)

void FUN_144593ad4(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445e3ba6(&local_28,param_1 + 0x38,&local_19);
  if (local_19 == '\0') {
    local_28 = 0;
  }
  *param_3 = local_28;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144593b41 FUN_144593b41 body=47 status=ok
// SIG undefined FUN_144593b41(void)

longlong FUN_144593b41(void)

{
  if (DAT_14cc22780 == 0) {
    FUN_14000fc22(&DAT_14cc22780,&PTR_FUN_14bde1ea0);
  }
  return DAT_14cc22780;
}



// FUNCTION 144593b70 FUN_144593b70 body=139 status=ok
// SIG undefined FUN_144593b70(void)

void FUN_144593b70(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445e3b52(param_1,&local_28);
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



// FUNCTION 144593bfc FUN_144593bfc body=34 status=ok
// SIG undefined FUN_144593bfc(void)

void FUN_144593bfc(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144593c24();
  FUN_14069c8d6(uVar1,&PTR_s_GetApplicationId_14bde1ee0,3);
  return;
}



// FUNCTION 144593c24 FUN_144593c24 body=227 status=ok
// SIG undefined FUN_144593c24(void)

longlong FUN_144593c24(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc22788 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_144593d08;
    local_40 = &LAB_144593d0b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/DiscordPartnerSDK",L"DiscordPartnerSDKSettings",&DAT_14cc22788,
                  FUN_144593bfc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc22788;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144593d14 FUN_144593d14 body=55 status=ok
// SIG undefined FUN_144593d14(void)

void FUN_144593d14(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc227a8 == 0) {
    uVar1 = FUN_14459216f();
    DAT_14cc227a8 = FUN_140002ddd(FUN_1445939ab,uVar1,L"DiscordUniqueID");
  }
  return;
}



// FUNCTION 144593d4c FUN_144593d4c body=48 status=ok
// SIG undefined FUN_144593d4c(void)

void FUN_144593d4c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14be06f70;
  return;
}



// FUNCTION 144593d7c FUN_144593d7c body=47 status=ok
// SIG undefined FUN_144593d7c(void)

longlong FUN_144593d7c(void)

{
  if (DAT_14cc227e0 == 0) {
    FUN_14073dd9a(&DAT_14cc227e0,&PTR_LAB_14bde2690);
  }
  return DAT_14cc227e0;
}



// FUNCTION 144593dab FUN_144593dab body=47 status=ok
// SIG undefined FUN_144593dab(void)

longlong FUN_144593dab(void)

{
  if (DAT_14cc227b8 == 0) {
    FUN_14000fc22(&DAT_14cc227b8,&PTR_FUN_14bde2180);
  }
  return DAT_14cc227b8;
}



// FUNCTION 144593dda FUN_144593dda body=655 status=ok
// SIG undefined FUN_144593dda(void)

void FUN_144593dda(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_30);
            goto LAB_144593f8e;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_30) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_30,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_30,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = (undefined4)plVar4[6];
        local_58 = 0;
        FUN_1400746b0(plVar4,&local_30,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_30,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
LAB_144593f8e:
  puVar8 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar8 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445e3eda(puVar8,&local_40);
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14459406f FUN_14459406f body=47 status=ok
// SIG undefined FUN_14459406f(void)

longlong FUN_14459406f(void)

{
  if (DAT_14cc227c0 == 0) {
    FUN_14000fc22(&DAT_14cc227c0,&PTR_FUN_14bde22c8);
  }
  return DAT_14cc227c0;
}



// FUNCTION 14459409e FUN_14459409e body=1115 status=ok
// SIG undefined FUN_14459409e(void)

void FUN_14459409e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *_Src;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar8 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar8);
          if (cVar5 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar3,&local_40);
            goto LAB_14459423a;
          }
        }
        plVar9 = (longlong *)(lVar3 + *(int *)((longlong)plVar8 + 0x44));
        if (plVar9 != &local_40) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,&local_40,plVar9,(int)plVar8[6]);
          }
          else {
            memcpy(&local_40,plVar9,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_50 = (undefined4)plVar8[6];
        local_58 = 0;
        FUN_1400746b0(plVar8,&local_40,lVar3,1);
      }
      else {
        (*pcVar2)(plVar8,&local_40,lVar3);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar8);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
    }
LAB_14459423a:
    pbVar7 = *(byte **)(param_2 + 0x20);
    plVar8 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_40);
      goto LAB_14459423a;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_40);
      goto LAB_14459423a;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_40);
      goto LAB_14459423a;
    }
    local_40 = *(longlong *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
    plVar8 = (longlong *)0x0;
  }
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar7 == (byte *)0x0) {
    plVar9 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar9[3];
    if ((*(byte *)((longlong)plVar9 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar9 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar9 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar9 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar9);
          if (cVar5 != '\0') {
            (**(code **)(*plVar9 + 0xa0))(plVar9,lVar3,&local_48);
            goto LAB_1445943f6;
          }
        }
        _Src = (longlong *)(lVar3 + *(int *)((longlong)plVar9 + 0x44));
        if (_Src != &local_48) {
          if ((*(byte *)((longlong)plVar9 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar9 + 0x100))(plVar9,&local_48,_Src,(int)plVar9[6]);
          }
          else {
            memcpy(&local_48,_Src,
                   (longlong)(int)plVar9[6] * (longlong)*(int *)((longlong)plVar9 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_50 = (undefined4)plVar9[6];
        local_58 = 0;
        FUN_1400746b0(plVar9,&local_48,lVar3,1);
      }
      else {
        (*pcVar2)(plVar9,&local_48,lVar3);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar9);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_48);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_48);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_48 = *(longlong *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_48);
    }
  }
LAB_1445943f6:
  plVar9 = &local_40;
  if (plVar8 != (longlong *)0x0) {
    plVar9 = plVar8;
  }
  plVar8 = &local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = *plVar9 == *plVar8;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445944ff FUN_1445944ff body=47 status=ok
// SIG undefined FUN_1445944ff(void)

longlong FUN_1445944ff(void)

{
  if (DAT_14cc227c8 == 0) {
    FUN_14000fc22(&DAT_14cc227c8,&PTR_FUN_14bde2410);
  }
  return DAT_14cc227c8;
}



// FUNCTION 14459452e FUN_14459452e body=1115 status=ok
// SIG undefined FUN_14459452e(void)

void FUN_14459452e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *_Src;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar8 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar8);
          if (cVar5 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar3,&local_40);
            goto LAB_1445946ca;
          }
        }
        plVar9 = (longlong *)(lVar3 + *(int *)((longlong)plVar8 + 0x44));
        if (plVar9 != &local_40) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,&local_40,plVar9,(int)plVar8[6]);
          }
          else {
            memcpy(&local_40,plVar9,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_50 = (undefined4)plVar8[6];
        local_58 = 0;
        FUN_1400746b0(plVar8,&local_40,lVar3,1);
      }
      else {
        (*pcVar2)(plVar8,&local_40,lVar3);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar8);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
    }
LAB_1445946ca:
    pbVar7 = *(byte **)(param_2 + 0x20);
    plVar8 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_40);
      goto LAB_1445946ca;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_40);
      goto LAB_1445946ca;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_40);
      goto LAB_1445946ca;
    }
    local_40 = *(longlong *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
    plVar8 = (longlong *)0x0;
  }
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar7 == (byte *)0x0) {
    plVar9 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar9[3];
    if ((*(byte *)((longlong)plVar9 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar9 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar2 = *(code **)(*plVar9 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar9 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar9);
          if (cVar5 != '\0') {
            (**(code **)(*plVar9 + 0xa0))(plVar9,lVar3,&local_48);
            goto LAB_144594886;
          }
        }
        _Src = (longlong *)(lVar3 + *(int *)((longlong)plVar9 + 0x44));
        if (_Src != &local_48) {
          if ((*(byte *)((longlong)plVar9 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar9 + 0x100))(plVar9,&local_48,_Src,(int)plVar9[6]);
          }
          else {
            memcpy(&local_48,_Src,
                   (longlong)(int)plVar9[6] * (longlong)*(int *)((longlong)plVar9 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_50 = (undefined4)plVar9[6];
        local_58 = 0;
        FUN_1400746b0(plVar9,&local_48,lVar3,1);
      }
      else {
        (*pcVar2)(plVar9,&local_48,lVar3);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar9);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_48);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_48);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_48 = *(longlong *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_48);
    }
  }
LAB_144594886:
  plVar9 = &local_40;
  if (plVar8 != (longlong *)0x0) {
    plVar9 = plVar8;
  }
  plVar8 = &local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = *plVar9 != *plVar8;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14459498f FUN_14459498f body=47 status=ok
// SIG undefined FUN_14459498f(void)

longlong FUN_14459498f(void)

{
  if (DAT_14cc227d0 == 0) {
    FUN_14000fc22(&DAT_14cc227d0,&PTR_FUN_14bde2568);
  }
  return DAT_14cc227d0;
}



// FUNCTION 1445949be FUN_1445949be body=1766 status=ok
// SIG undefined FUN_1445949be(void)

void FUN_1445949be(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  byte *pbVar7;
  longlong *_Src;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined1 local_51;
  undefined8 uStack_50;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48[0] = 0;
  local_48[1] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_140dafe7a;
      local_70 = 0;
      local_78 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,local_48);
            goto LAB_144594b6e;
          }
        }
        _Src = (longlong *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (_Src != local_48) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,local_48,_Src,(int)plVar3[6]);
          }
          else {
            memcpy(local_48,_Src,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar3[6]);
        local_78 = local_78 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,local_48,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,local_48,lVar4);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar10 = (undefined8 *)*puVar8;
        puVar8 = puVar10 + 2;
      } while ((longlong *)*puVar10 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar10[1];
    }
LAB_144594b6e:
    pbVar7 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_48);
      goto LAB_144594b6e;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_48);
      goto LAB_144594b6e;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_48);
      goto LAB_144594b6e;
    }
    local_48[0] = *(longlong *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
  }
  uStack_50._0_7_ = 0;
  uStack_50._7_1_ = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar7 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&uStack_50);
            goto LAB_144594ce7;
          }
        }
        puVar8 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar8 != &uStack_50) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&uStack_50,puVar8,(int)plVar3[6]);
          }
          else {
            memcpy(&uStack_50,puVar8,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar3[6]);
        local_78 = local_78 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&uStack_50,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&uStack_50,lVar4);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar10 = (undefined8 *)*puVar8;
        puVar8 = puVar10 + 2;
      } while ((longlong *)*puVar10 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar10[1];
    }
LAB_144594ce7:
    pbVar7 = *(byte **)(param_2 + 0x20);
    puVar8 = *(undefined8 **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&uStack_50);
      goto LAB_144594ce7;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&uStack_50);
      goto LAB_144594ce7;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&uStack_50);
      goto LAB_144594ce7;
    }
    uVar1 = *(undefined8 *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
    uStack_50._0_7_ = (undefined7)uVar1;
    uStack_50._7_1_ = (undefined1)((ulonglong)uVar1 >> 0x38);
    puVar8 = (undefined8 *)0x0;
  }
  puVar10 = &uStack_50;
  if (puVar8 != (undefined8 *)0x0) {
    puVar10 = puVar8;
  }
  local_51 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar7 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_51);
            goto LAB_144594ec1;
          }
        }
        puVar9 = (undefined1 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar9 != &local_51) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_51,puVar9,(int)plVar3[6]);
          }
          else {
            memcpy(&local_51,puVar9,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar3[6]);
        local_78 = local_78 & 0xffffffff00000000;
        FUN_1400746b0(plVar3,&local_51,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_51,lVar4);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_51);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_51);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
      local_51 = (undefined1)uVar1;
      uStack_50._0_7_ = (undefined7)((ulonglong)uVar1 >> 8);
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_51);
    }
  }
LAB_144594ec1:
  puVar9 = &local_51;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar9 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1445e3ba6(local_48 + 2,local_48,puVar9);
  *puVar10 = local_48[2];
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445950a6 FUN_1445950a6 body=34 status=ok
// SIG undefined FUN_1445950a6(void)

void FUN_1445950a6(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1445950ce();
  FUN_14069c8d6(uVar1,&PTR_s_Conv_DiscordUniqueIDToString_14bde25b0,4);
  return;
}



// FUNCTION 1445950ce FUN_1445950ce body=227 status=ok
// SIG undefined FUN_1445950ce(void)

longlong FUN_1445950ce(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc227d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140cf07f0;
    local_38 = &LAB_1445951b2;
    local_40 = FUN_1445951b5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/DiscordPartnerSDK",L"DiscordUniqueIDFunctionLibrary",&DAT_14cc227d8,
                  FUN_1445950a6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc227d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445951b5 FUN_1445951b5 body=35 status=ok
// SIG undefined FUN_1445951b5(void)

void FUN_1445951b5(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bde26d0;
  return;
}



// FUNCTION 1445951d8 FUN_1445951d8 body=55 status=ok
// SIG undefined FUN_1445951d8(void)

void FUN_1445951d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc227f8 == 0) {
    uVar1 = FUN_14459216f();
    DAT_14cc227f8 = FUN_14171c317(FUN_14459520f,uVar1,L"EDiscordActivityActionTypes");
  }
  return;
}



// FUNCTION 14459520f FUN_14459520f body=47 status=ok
// SIG undefined FUN_14459520f(void)

longlong FUN_14459520f(void)

{
  if (DAT_14cc227f0 == 0) {
    FUN_1409ce572(&DAT_14cc227f0,&PTR_FUN_14bde2a20);
  }
  return DAT_14cc227f0;
}



// FUNCTION 14459523e FUN_14459523e body=55 status=ok
// SIG undefined FUN_14459523e(void)

void FUN_14459523e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc22810 == 0) {
    uVar1 = FUN_14459216f();
    DAT_14cc22810 = FUN_14171c317(FUN_144595275,uVar1,L"EDiscordActivityPartyPrivacy");
  }
  return;
}



// FUNCTION 144595275 FUN_144595275 body=47 status=ok
// SIG undefined FUN_144595275(void)

longlong FUN_144595275(void)

{
  if (DAT_14cc22808 == 0) {
    FUN_1409ce572(&DAT_14cc22808,&PTR_FUN_14bde2a90);
  }
  return DAT_14cc22808;
}



// FUNCTION 1445952a4 FUN_1445952a4 body=55 status=ok
// SIG undefined FUN_1445952a4(void)

void FUN_1445952a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc22828 == 0) {
    uVar1 = FUN_14459216f();
    DAT_14cc22828 = FUN_14171c317(FUN_1445952db,uVar1,L"EDiscordActivityTypes");
  }
  return;
}



// FUNCTION 1445952db FUN_1445952db body=47 status=ok
// SIG undefined FUN_1445952db(void)

longlong FUN_1445952db(void)

{
  if (DAT_14cc22820 == 0) {
    FUN_1409ce572(&DAT_14cc22820,&PTR_FUN_14bde2b50);
  }
  return DAT_14cc22820;
}



// FUNCTION 14459530a FUN_14459530a body=55 status=ok
// SIG undefined FUN_14459530a(void)

void FUN_14459530a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc22840 == 0) {
    uVar1 = FUN_14459216f();
    DAT_14cc22840 = FUN_14171c317(FUN_144595341,uVar1,L"EDiscordStatusDisplayTypes");
  }
  return;
}



// FUNCTION 144595341 FUN_144595341 body=47 status=ok
// SIG undefined FUN_144595341(void)

longlong FUN_144595341(void)

{
  if (DAT_14cc22838 == 0) {
    FUN_1409ce572(&DAT_14cc22838,&PTR_FUN_14bde2bd0);
  }
  return DAT_14cc22838;
}



// FUNCTION 144595370 FUN_144595370 body=55 status=ok
// SIG undefined FUN_144595370(void)

void FUN_144595370(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc22858 == 0) {
    uVar1 = FUN_14459216f();
    DAT_14cc22858 = FUN_14171c317(FUN_1445953a7,uVar1,L"EDiscordActivityGamePlatforms");
  }
  return;
}


