// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148ac981a FUN_148ac981a body=32 status=ok
// SIG undefined FUN_148ac981a(void)

void * FUN_148ac981a(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac9840 FUN_148ac9840 body=32 status=ok
// SIG undefined FUN_148ac9840(void)

void * FUN_148ac9840(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac9866 FUN_148ac9866 body=32 status=ok
// SIG undefined FUN_148ac9866(void)

void * FUN_148ac9866(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ac9886 FUN_148ac9886 body=91 status=ok
// SIG undefined FUN_148ac9886(void)

void FUN_148ac9886(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(param_1 + 8))(local_28);
  FUN_148ac98e8(param_2,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac98e8 FUN_148ac98e8 body=84 status=ok
// SIG undefined FUN_148ac98e8(void)

void FUN_148ac98e8(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x10))();
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1);
  FUN_148ac03f8(param_2,plVar1);
  (**(code **)(*plVar1 + 0x48))(plVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000148ac9938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}



// FUNCTION 148ac993c FUN_148ac993c body=64 status=ok
// SIG undefined FUN_148ac993c(void)

void FUN_148ac993c(void)

{
  if (DAT_14cb98b3c != 0) {
    DAT_14cb98b3c = 0;
    FUN_1446f8d3c(&DAT_14cb98b30,DAT_14cb98b38,0,0x90,8);
  }
  return;
}



// FUNCTION 148ac997c FUN_148ac997c body=253 status=ok
// SIG undefined FUN_148ac997c(void)

void FUN_148ac997c(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  _Src = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_30;
  local_40 = (int)uStack_30;
  if (lVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,uStack_30 & 0xffffffff,0);
    memcpy(local_48,_Src,lVar1 * 2);
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac9a7e FUN_148ac9a7e body=536 status=ok
// SIG undefined FUN_148ac9a7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148ac9a7e(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 (*pauVar2) [16];
  undefined1 *puVar3;
  float *pfVar4;
  undefined1 (*pauVar5) [16];
  double dVar6;
  undefined1 auVar7 [16];
  double dVar10;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar11 [16];
  undefined1 auStack_a8 [44];
  float local_7c;
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  pauVar2 = *(undefined1 (**) [16])(param_2 + 0x38);
  local_7c = 0.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  pauVar5 = (undefined1 (*) [16])local_78;
  if (pauVar2 != (undefined1 (*) [16])0x0) {
    pauVar5 = pauVar2;
  }
  puVar3 = local_60;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  pfVar4 = &local_7c;
  if (*(float **)(param_2 + 0x38) != (float *)0x0) {
    pfVar4 = *(float **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144a7484c(puVar3,&local_48);
  dVar6 = dStack_30;
  if (1.0 <= dStack_30) {
    dVar6 = 1.0;
  }
  dVar6 = acos((double)(~-(ulonglong)(dStack_30 < -1.0) & (ulonglong)dVar6 |
                       -(ulonglong)(dStack_30 < -1.0) & 0xbff0000000000000));
  *pfVar4 = (float)(dVar6 + dVar6);
  dVar6 = local_38 * local_38 + local_48 * local_48;
  dVar10 = dStack_40 * dStack_40 + 0.0;
  auVar8._0_8_ = dVar6 + dVar10;
  auVar8._8_8_ = dVar6 + dVar10;
  auVar7._8_8_ = -(ulonglong)(1e-08 <= auVar8._8_8_);
  auVar7._0_8_ = -(ulonglong)(1e-08 <= auVar8._0_8_);
  auVar9 = sqrtpd(auVar8,auVar8);
  auVar11 = divpd(_DAT_149934d80,auVar9);
  auVar9._8_8_ = dStack_40 * auVar11._8_8_;
  auVar9._0_8_ = local_48 * auVar11._0_8_;
  auVar9 = blendvpd(ZEXT816(0x3ff0000000000000),auVar9,auVar7);
  if ((-(ulonglong)(1e-08 <= auVar8._0_8_) & 1) == 0) {
    dVar6 = 0.0;
  }
  else {
    dVar6 = local_38 * auVar11._0_8_;
  }
  *pauVar5 = auVar9;
  *(double *)pauVar5[1] = dVar6;
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ac9cb4 FUN_148ac9cb4 body=38 status=ok
// SIG undefined FUN_148ac9cb4(void)

void FUN_148ac9cb4(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x18))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148ac9d14 FUN_148ac9d14 body=45 status=ok
// SIG undefined FUN_148ac9d14(void)

longlong FUN_148ac9d14(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140fa437e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ac9d42 FUN_148ac9d42 body=31 status=ok
// SIG undefined FUN_148ac9d42(void)

undefined8 FUN_148ac9d42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ac9d7e FUN_148ac9d7e body=93 status=ok
// SIG undefined FUN_148ac9d7e(void)

void FUN_148ac9d7e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b50a060;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ac9ddc FUN_148ac9ddc body=126 status=ok
// SIG undefined FUN_148ac9ddc(void)

void FUN_148ac9ddc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b50a060;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ac9e4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ac9e5a FUN_148ac9e5a body=21 status=ok
// SIG undefined FUN_148ac9e5a(void)

undefined8 FUN_148ac9e5a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148ac9e8a FUN_148ac9e8a body=29 status=ok
// SIG undefined FUN_148ac9e8a(void)

bool FUN_148ac9e8a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148ac9ea8 FUN_148ac9ea8 body=26 status=ok
// SIG undefined FUN_148ac9ea8(void)

bool FUN_148ac9ea8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148ac9ec2 FUN_148ac9ec2 body=93 status=ok
// SIG undefined FUN_148ac9ec2(void)

void FUN_148ac9ec2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b50a110;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148ac9f20 FUN_148ac9f20 body=126 status=ok
// SIG undefined FUN_148ac9f20(void)

void FUN_148ac9f20(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e6310;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b50a110;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ac9f8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ac9f9e FUN_148ac9f9e body=64 status=ok
// SIG undefined FUN_148ac9f9e(void)

void FUN_148ac9f9e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148ac9fdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148ac9ffa FUN_148ac9ffa body=180 status=ok
// SIG undefined FUN_148ac9ffa(void)

void FUN_148ac9ffa(undefined8 param_1,longlong param_2)

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
  FUN_148aca0b0(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aca0b0 FUN_148aca0b0 body=174 status=ok
// SIG undefined FUN_148aca0b0(void)

void FUN_148aca0b0(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1402191ca(param_2,0);
  }
  lVar3 = *(longlong *)(param_1 + 0x678);
  if (lVar3 == 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(param_2,iVar1);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = 0;
  }
  else {
    iVar1 = *(int *)(lVar3 + 0x40);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(lVar3 + 0x38);
      lVar4 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1446f84a2(param_2,iVar2);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar3 + lVar4);
        lVar4 = lVar4 + 0x1c;
      } while ((longlong)iVar1 * 0x1c != lVar4);
    }
  }
  return;
}



// FUNCTION 148aca162 FUN_148aca162 body=39 status=ok
// SIG undefined FUN_148aca162(void)

void FUN_148aca162(byte *param_1)

{
  param_1[3] = 0xff;
  if (*param_1 < 0x32 && (param_1[1] < 0x32 && param_1[2] < 0x32)) {
    param_1[0] = 0x32;
    param_1[1] = 0x32;
    param_1[2] = 0x32;
    param_1[3] = 0xff;
  }
  return;
}



// FUNCTION 148aca18a FUN_148aca18a body=77 status=ok
// SIG undefined FUN_148aca18a(void)

undefined4 FUN_148aca18a(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (((*(uint *)(param_1 + 2) == 0 && *(uint *)((longlong)param_1 + 0xc) == 0) &&
      *(uint *)((longlong)param_1 + 0x14) == 0) && *(uint *)(param_1 + 3) == 0) {
    if (*param_1 != *param_2) {
      return 0;
    }
    uVar1 = *(uint *)(param_1 + 1);
    uVar2 = uVar1 - (int)param_2[1];
  }
  else {
    uVar1 = *(uint *)((longlong)param_1 + 0x14) ^ *(uint *)((longlong)param_2 + 0x14) |
            *(uint *)(param_1 + 2) ^ *(uint *)(param_2 + 2) |
            *(uint *)((longlong)param_1 + 0xc) ^ *(uint *)((longlong)param_2 + 0xc);
    uVar2 = *(uint *)(param_1 + 3) ^ *(uint *)(param_2 + 3) | uVar1;
  }
  return CONCAT31((int3)(uVar1 >> 8),uVar2 == 0);
}



// FUNCTION 148aca1d8 FUN_148aca1d8 body=143 status=ok
// SIG undefined FUN_148aca1d8(void)

void FUN_148aca1d8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)(param_1 + 0x38);
  local_18 = *(undefined4 *)(param_1 + 0x40);
  FUN_148aca268();
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar3 = 0;
    do {
      *(undefined1 *)(lVar2 + 0xb + lVar3) = 0xff;
      if (((*(byte *)(lVar2 + 10 + lVar3) < 0x32) && (*(byte *)(lVar2 + 9 + lVar3) < 0x32)) &&
         (*(byte *)(lVar2 + 8 + lVar3) < 0x32)) {
        *(undefined4 *)(lVar2 + 8 + lVar3) = 0xff323232;
      }
      lVar3 = lVar3 + 0x1c;
    } while ((longlong)iVar1 * 0x1c != lVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aca268 FUN_148aca268 body=276 status=ok
// SIG undefined FUN_148aca268(void)

void FUN_148aca268(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  if ((longlong)(int)param_1[1] != 0) {
    lVar4 = (longlong)(int)param_1[1] * 0x1c;
    piVar3 = (int *)(*param_1 + 0xc);
    do {
      if (((piVar3[1] == 0 && *piVar3 == 0) && piVar3[2] == 0) && piVar3[3] == 0) {
LAB_148aca30a:
        FUN_1412e3d1e(&local_88);
        *piVar3 = local_88;
        piVar3[1] = iStack_84;
        piVar3[2] = iStack_80;
        piVar3[3] = iStack_7c;
      }
      else {
        uVar1 = FUN_1447addd0(piVar3,0x10);
        iVar2 = FUN_140f5cb3a(&local_78,uVar1,piVar3);
        if (iVar2 != -1) goto LAB_148aca30a;
      }
      FUN_1457adc9c(&local_78,&local_88,piVar3,0);
      piVar3 = piVar3 + 7;
      lVar4 = lVar4 + -0x1c;
    } while (lVar4 != 0);
    local_30 = 0;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_140149fc2(&local_78);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aca37e FUN_148aca37e body=701 status=ok
// SIG undefined FUN_148aca37e(void)

void FUN_148aca37e(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  char cVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  undefined1 auStack_78 [32];
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar8 = *(longlong *)(param_1 + 0x28);
  if (lVar8 != 0) {
    plVar1 = (longlong *)(param_1 + 0x70);
    uVar3 = *(uint *)(param_1 + 0x78);
    if ((longlong)(int)uVar3 == 0) {
      FUN_148aca63c(plVar1);
      iVar16 = *(int *)(param_1 + 0x68);
      if ((longlong)iVar16 != 0) {
        lVar8 = *(longlong *)(param_1 + 0x60);
        lVar12 = 0;
        do {
          if (*(int *)(param_1 + 0x78) <= (int)(uint)*(byte *)(lVar8 + lVar12)) {
            *(undefined1 *)(lVar8 + lVar12) = 0;
          }
          lVar12 = lVar12 + 1;
        } while (iVar16 != lVar12);
      }
    }
    else if ((*(uint *)(lVar8 + 0x40) != uVar3) ||
            (cVar10 = FUN_148acaadb(*(undefined8 *)(lVar8 + 0x38),*plVar1,uVar3), cVar10 == '\0')) {
      local_58 = (void *)0x0;
      uStack_50 = (ulonglong)uVar3;
      FUN_1447403be(&local_58);
      memset(local_58,0,(longlong)(int)uVar3);
      uVar11 = (ulonglong)*(int *)(param_1 + 0x78);
      if (uVar11 != 0) {
        lVar12 = *(longlong *)(param_1 + 0x70);
        lVar14 = uVar11 * 0x1c + lVar12;
        lVar13 = *(longlong *)(lVar8 + 0x38);
        do {
          if (*(int *)(lVar8 + 0x40) != 0) {
            lVar17 = 0;
            do {
              if ((((*(int *)(lVar13 + 0xc + lVar17) == *(int *)(lVar12 + 0xc)) &&
                   (*(int *)(lVar13 + 0x10 + lVar17) == *(int *)(lVar12 + 0x10))) &&
                  (*(int *)(lVar13 + 0x14 + lVar17) == *(int *)(lVar12 + 0x14))) &&
                 (*(int *)(lVar13 + 0x18 + lVar17) == *(int *)(lVar12 + 0x18))) {
                bVar9 = false;
                goto LAB_148aca52b;
              }
              lVar17 = lVar17 + 0x1c;
            } while ((longlong)*(int *)(lVar8 + 0x40) * 0x1c != lVar17);
          }
          lVar12 = lVar12 + 0x1c;
        } while (lVar12 != lVar14);
        bVar9 = true;
LAB_148aca52b:
        if (0 < *(int *)(param_1 + 0x78)) {
          lVar12 = 0;
LAB_148aca53f:
          lVar13 = *plVar1;
          if (bVar9) {
            lVar14 = *(longlong *)(lVar8 + 0x38);
            iVar16 = *(int *)(lVar8 + 0x40);
LAB_148aca550:
            if (iVar16 != 0) {
              lVar17 = 0;
              do {
                if (*(longlong *)(lVar14 + lVar17) == *(longlong *)(lVar13 + lVar12 * 0x1c))
                goto LAB_148aca610;
                lVar17 = lVar17 + 0x1c;
              } while ((longlong)iVar16 * 0x1c != lVar17);
            }
          }
          else {
            lVar14 = lVar12 * 0x1c;
            iVar4 = *(int *)(lVar13 + 0xc + lVar14);
            iVar5 = *(int *)(lVar13 + 0x10 + lVar14);
            iVar6 = *(int *)(lVar13 + 0x14 + lVar14);
            iVar7 = *(int *)(lVar13 + 0x18 + lVar14);
            lVar14 = *(longlong *)(lVar8 + 0x38);
            iVar16 = *(int *)(lVar8 + 0x40);
            if (((iVar5 == 0 && iVar4 == 0) && iVar6 == 0) && iVar7 == 0) goto LAB_148aca550;
            if (iVar16 != 0) {
              lVar17 = 0;
              do {
                if (((*(int *)(lVar14 + 0xc + lVar17) == iVar4) &&
                    (*(int *)(lVar14 + 0x10 + lVar17) == iVar5)) &&
                   ((*(int *)(lVar14 + 0x14 + lVar17) == iVar6 &&
                    (*(int *)(lVar14 + 0x18 + lVar17) == iVar7)))) goto LAB_148aca610;
                lVar17 = lVar17 + 0x1c;
              } while ((longlong)iVar16 * 0x1c != lVar17);
            }
          }
          goto LAB_148aca588;
        }
      }
LAB_148aca463:
      iVar16 = *(int *)(param_1 + 0x68);
      if ((longlong)iVar16 != 0) {
        lVar12 = *(longlong *)(param_1 + 0x60);
        lVar13 = 0;
        do {
          bVar2 = *(byte *)(lVar12 + lVar13);
          if ((int)(uint)bVar2 < (int)uStack_50) {
            *(undefined1 *)(lVar12 + lVar13) =
                 *(undefined1 *)((longlong)local_58 + (ulonglong)bVar2);
          }
          lVar13 = lVar13 + 1;
        } while (iVar16 != lVar13);
      }
      FUN_148aca63c(plVar1,(undefined8 *)(lVar8 + 0x38));
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_148aca610:
  uVar15 = (lVar17 >> 2) * 0x6db6db6db6db6db7;
  if ((uVar15 & 0xffffff00) == 0) {
    *(char *)((longlong)local_58 + lVar12) = (char)uVar15;
    uVar11 = (ulonglong)*(uint *)(param_1 + 0x78);
  }
LAB_148aca588:
  lVar12 = lVar12 + 1;
  if ((int)uVar11 <= lVar12) goto LAB_148aca463;
  goto LAB_148aca53f;
}



// FUNCTION 148aca63c FUN_148aca63c body=92 status=ok
// SIG undefined FUN_148aca63c(void)

undefined8 * FUN_148aca63c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148acaa62(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x1c);
      }
    }
  }
  return param_1;
}



// FUNCTION 148aca698 FUN_148aca698 body=98 status=ok
// SIG undefined FUN_148aca698(void)

void FUN_148aca698(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  *(int *)(local_20 + 0x94) = *(int *)(local_20 + 0x94) + 1;
  FUN_1468be722();
  if (*(longlong *)(*param_2 + 0x10) != 0) {
    FUN_148aca37e(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148aca7aa FUN_148aca7aa body=59 status=ok
// SIG undefined FUN_148aca7aa(void)

undefined8 FUN_148aca7aa(longlong *param_1)

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



// FUNCTION 148aca84c FUN_148aca84c body=107 status=ok
// SIG undefined FUN_148aca84c(void)

/* WARNING: Removing unreachable block (ram,0x000148aca87e) */
/* WARNING: Removing unreachable block (ram,0x000148aca85a) */
/* WARNING: Removing unreachable block (ram,0x000148aca870) */
/* WARNING: Removing unreachable block (ram,0x000148aca889) */
/* WARNING: Removing unreachable block (ram,0x000148aca872) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148aca84c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb98d10;
  LOCK();
  UNLOCK();
  DAT_14cb98d10 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb98d18 = _DAT_14cb98d18 + -1;
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
    _DAT_14cb98d18 = _DAT_14cb98d18 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 148aca8be FUN_148aca8be body=29 status=ok
// SIG undefined FUN_148aca8be(void)

bool FUN_148aca8be(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148aca8dc FUN_148aca8dc body=26 status=ok
// SIG undefined FUN_148aca8dc(void)

bool FUN_148aca8dc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148aca8f6 FUN_148aca8f6 body=93 status=ok
// SIG undefined FUN_148aca8f6(void)

void FUN_148aca8f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b50ce70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148aca954 FUN_148aca954 body=126 status=ok
// SIG undefined FUN_148aca954(void)

void FUN_148aca954(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b50ce70;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148aca9c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148aca9d2 FUN_148aca9d2 body=142 status=ok
// SIG undefined FUN_148aca9d2(void)

bool FUN_148aca9d2(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148acaa62 FUN_148acaa62 body=121 status=ok
// SIG undefined FUN_148acaa62(void)

void FUN_148acaa62(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x1c,4);
    iVar2 = (int)(uVar1 / 0x1c);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x1c,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148acaadb FUN_148acaadb body=59 status=ok
// SIG undefined FUN_148acaadb(void)

void FUN_148acaadb(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  
  do {
    param_3 = param_3 + -1;
    cVar1 = FUN_148aca18a(param_1,param_2);
    if (cVar1 == '\0') {
      return;
    }
    param_1 = param_1 + 0x1c;
    param_2 = param_2 + 0x1c;
  } while (param_3 != 0);
  return;
}



// FUNCTION 148acab16 FUN_148acab16 body=31 status=ok
// SIG undefined FUN_148acab16(void)

undefined8 FUN_148acab16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148acab52 FUN_148acab52 body=93 status=ok
// SIG undefined FUN_148acab52(void)

void FUN_148acab52(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b50d040;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148acabb0 FUN_148acabb0 body=126 status=ok
// SIG undefined FUN_148acabb0(void)

void FUN_148acabb0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b50d040;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148acac1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148acac2e FUN_148acac2e body=21 status=ok
// SIG undefined FUN_148acac2e(void)

undefined8 FUN_148acac2e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148acac44 FUN_148acac44 body=107 status=ok
// SIG undefined FUN_148acac44(void)

/* WARNING: Removing unreachable block (ram,0x000148acac76) */
/* WARNING: Removing unreachable block (ram,0x000148acac52) */
/* WARNING: Removing unreachable block (ram,0x000148acac68) */
/* WARNING: Removing unreachable block (ram,0x000148acac81) */
/* WARNING: Removing unreachable block (ram,0x000148acac6a) */

void FUN_148acac44(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb98d60;
  LOCK();
  UNLOCK();
  DAT_14cb98d60 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    DAT_14cb98d68 = DAT_14cb98d68 + -1;
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
    DAT_14cb98d68 = DAT_14cb98d68 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 148acacb8 FUN_148acacb8 body=45 status=ok
// SIG undefined FUN_148acacb8(void)

void FUN_148acacb8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = 0x3f9ccccd;
  *(undefined4 *)(param_1 + 2) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[3] = DAT_14c8464e0;
  param_1[4] = uVar1;
  param_1[5] = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}



// FUNCTION 148acace6 FUN_148acace6 body=139 status=ok
// SIG undefined FUN_148acace6(void)

void FUN_148acace6(undefined8 *param_1,double *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  float fVar5;
  double dVar6;
  
  pdVar4 = (double *)*param_1;
  dVar6 = 0.0;
  if (*(char *)(pdVar4 + 9) == '\x01') {
    fVar1 = *(float *)((longlong)param_1 + 0xc);
    fVar5 = *(float *)((longlong)pdVar4 + 0x3c);
    if (fVar1 <= fVar5) {
      fVar5 = ((fVar5 - fVar1) * 20.0) / fVar5;
    }
    else {
      fVar5 = (fVar1 - fVar5) * 10.0;
    }
    dVar6 = (double)((fVar5 + 20.0 + -50.0) / 100.0);
  }
  dVar2 = pdVar4[2];
  dVar3 = pdVar4[1];
  *param_2 = dVar6 + *pdVar4;
  param_2[1] = dVar3 + 0.0;
  param_2[2] = dVar2 + 0.0;
  return;
}



// FUNCTION 148acad72 FUN_148acad72 body=654 status=ok
// SIG undefined FUN_148acad72(void)

double * FUN_148acad72(longlong *param_1,double *param_2,undefined8 param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  dVar7 = *param_4;
  dVar8 = param_4[1];
  dVar1 = param_4[2];
  dVar2 = dVar1 * dVar1 + dVar7 * dVar7 + dVar8 * dVar8;
  if (1e-08 <= ABS((float)dVar2)) {
    dVar1 = -dVar1;
    dVar8 = -dVar8;
    dVar7 = -dVar7;
    param_1[3] = (longlong)dVar7;
    param_1[4] = (longlong)dVar8;
    param_1[5] = (longlong)dVar1;
    if (9.99999993922529e-09 < dVar2) {
      dVar10 = 1.0 / SQRT(dVar2);
      dVar7 = dVar7 * dVar10;
      param_1[3] = (longlong)dVar7;
      dVar8 = dVar8 * dVar10;
      param_1[4] = (longlong)dVar8;
      dVar1 = dVar1 * dVar10;
      param_1[5] = (longlong)dVar1;
    }
    lVar3 = *param_1;
    fVar4 = (float)(dVar1 * *(double *)(lVar3 + 0x28) +
                   dVar7 * *(double *)(lVar3 + 0x18) + dVar8 * *(double *)(lVar3 + 0x20));
    fVar5 = fVar4;
    if (1.0 <= fVar4) {
      fVar5 = 1.0;
    }
    fVar5 = asinf((float)(-(uint)(fVar4 < -1.0) & 0xbf800000 | ~-(uint)(fVar4 < -1.0) & (uint)fVar5)
                 );
    fVar4 = (fVar5 * 180.0) / 3.1415927;
    *(float *)((longlong)param_1 + 0xc) = fVar4;
    lVar3 = *param_1;
    fVar12 = *(float *)(param_1 + 2) + *(float *)(lVar3 + 0x34);
    fVar11 = *(float *)(param_1 + 1) * 0.5 * (float)dVar2 * *(float *)(lVar3 + 0x30);
    fVar5 = *(float *)(lVar3 + 0x3c);
    fVar6 = 0.0;
    if (ABS(fVar4 + fVar12) <= fVar5 + fVar5) {
      fVar6 = sinf(((fVar4 + fVar12) * 1.5707964) / fVar5);
      fVar6 = fVar6 + fVar6;
      lVar3 = *param_1;
      fVar4 = *(float *)((longlong)param_1 + 0xc);
      fVar5 = *(float *)(lVar3 + 0x3c);
    }
    fVar4 = (float)(~-(uint)(90.0 < fVar4) & (uint)fVar4 |
                   (uint)(180.0 - fVar4) & -(uint)(90.0 < fVar4));
    fVar5 = ((float)(~-(uint)(fVar4 < -90.0) & (uint)fVar4 |
                    (uint)(-180.0 - fVar4) & -(uint)(fVar4 < -90.0)) + fVar12) /
            (ABS(fVar12) + fVar5);
    dVar10 = (double)(fVar6 * *(float *)(lVar3 + 0x4c) * fVar11);
    dVar7 = *(double *)(lVar3 + 0x28);
    dVar8 = *(double *)(lVar3 + 0x20);
    dVar9 = (double)((fVar5 * fVar5 + 0.05) * *(float *)(lVar3 + 0x50) * fVar11);
    dVar1 = (double)param_1[5];
    dVar2 = (double)param_1[4];
    *param_2 = dVar9 * (double)param_1[3] + dVar10 * *(double *)(lVar3 + 0x18);
    param_2[1] = dVar2 * dVar9 + dVar8 * dVar10;
    param_2[2] = dVar1 * dVar9 + dVar7 * dVar10;
  }
  return param_2;
}



// FUNCTION 148acb000 FUN_148acb000 body=192 status=ok
// SIG undefined FUN_148acb000(void)

float FUN_148acb000(longlong *param_1,float param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = 0.0;
  if (*(char *)((longlong)param_1 + 0x24) == '\x01') {
    plVar1 = (longlong *)*param_1;
    fVar5 = (float)*(ushort *)((longlong)plVar1 + 0x14);
    if (*(ushort *)((longlong)plVar1 + 0x14) != 0 && 1.0 <= ABS(param_2 - fVar5)) {
      if (param_3 != '\0') {
        if (fVar5 <= param_2) {
          param_2 = fVar5;
        }
        if (param_2 <= (float)*(ushort *)((longlong)plVar1 + 0x16)) {
          param_2 = (float)*(ushort *)((longlong)plVar1 + 0x16);
        }
      }
      iVar3 = (int)plVar1[1] + -1;
      fVar5 = fVar5 / (float)iVar3;
      iVar2 = (int)(param_2 / fVar5);
      if (iVar2 < iVar3) {
        fVar5 = (param_2 - (float)iVar2 * fVar5) / fVar5;
        fVar4 = (1.0 - fVar5) * *(float *)(*plVar1 + (longlong)iVar2 * 4) +
                fVar5 * *(float *)(*plVar1 + 4 + (longlong)iVar2 * 4);
      }
      else {
        fVar4 = *(float *)(*plVar1 + -4 + (longlong)(int)plVar1[1] * 4);
      }
      fVar4 = *(float *)(param_1 + 1) * fVar4;
    }
  }
  return fVar4;
}



// FUNCTION 148acb0c0 FUN_148acb0c0 body=247 status=ok
// SIG undefined FUN_148acb0c0(void)

void FUN_148acb0c0(longlong *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (*(char *)((longlong)param_1 + 0x24) == '\x01') {
    fVar1 = *(float *)(param_1 + 5);
    if (*(char *)((longlong)param_1 + 0x25) == '\x01') {
      fVar3 = *(float *)((longlong)param_1 + 0xc);
      fVar2 = (float)FUN_148acb000(param_1,*(undefined4 *)((longlong)param_1 + 0x14),1);
      fVar2 = (fVar2 * fVar3 * param_2) / *(float *)(*param_1 + 0x1c) + fVar1;
      *(float *)(param_1 + 5) = fVar2;
      fVar3 = *(float *)((longlong)param_1 + 0x1c);
      fVar4 = (fVar3 * -0.5 + fVar2) / *(float *)(param_1 + 4);
      fVar2 = fVar2 - fVar4 * fVar4 * *(float *)(*param_1 + 0x20) * param_2;
    }
    else {
      fVar3 = *(float *)((longlong)param_1 + 0x1c);
      fVar2 = (*(float *)(param_1 + 2) - fVar1) * 4.0 * param_2 + fVar1;
    }
    *(float *)(param_1 + 5) = fVar2;
    *(float *)((longlong)param_1 + 0x2c) = (fVar2 - fVar1) / param_2;
    if (fVar2 < fVar3) {
      *(float *)(param_1 + 5) = fVar3;
      fVar2 = fVar3;
    }
    *(float *)((longlong)param_1 + 0x14) = (fVar2 * 30.0) / 3.1415927;
  }
  return;
}



// FUNCTION 148acb1b8 FUN_148acb1b8 body=97 status=ok
// SIG undefined FUN_148acb1b8(void)

float FUN_148acb1b8(double *param_1)

{
  byte bVar1;
  double dVar2;
  
  bVar1 = *(byte *)(param_1 + 3);
  if (bVar1 < 2) {
    return (float)*param_1;
  }
  if (bVar1 == 2) {
    dVar2 = *param_1 * *param_1 + param_1[1] * param_1[1];
  }
  else {
    if (bVar1 != 3) {
      return 0.0;
    }
    dVar2 = param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1];
  }
  return (float)SQRT(dVar2);
}



// FUNCTION 148acb21a FUN_148acb21a body=684 status=ok
// SIG undefined FUN_148acb21a(void)

double * FUN_148acb21a(longlong param_1,double *param_2,float param_3,double *param_4,
                      double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  byte bVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_c8 [32];
  double local_a8;
  double dStack_a0;
  double local_98;
  byte bStack_90;
  undefined3 uStack_8f;
  undefined4 uStack_8c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar5 = *(uint *)(param_5 + 3);
  uStack_8c = *(undefined4 *)((longlong)param_5 + 0x1c);
  dVar4 = *param_5 - *param_4;
  dVar2 = param_5[1] - param_4[1];
  dVar3 = param_5[2] - param_4[2];
  uVar15 = uVar5;
  if ((byte)uVar5 < (byte)*(uint *)(param_4 + 3)) {
    uVar15 = *(uint *)(param_4 + 3);
  }
  bVar14 = (byte)uVar15;
  _bStack_90 = CONCAT31((int3)(uVar5 >> 8),bVar14);
  uVar15 = uVar15 & 0xff;
  if (bVar14 < 2) {
    fVar17 = (float)dVar4;
  }
  else {
    if (uVar15 == 2) {
      dVar1 = dVar4 * dVar4 + dVar2 * dVar2;
    }
    else {
      fVar17 = 0.0;
      if (uVar15 != 3) goto LAB_148acb340;
      dVar1 = dVar3 * dVar3 + dVar4 * dVar4 + dVar2 * dVar2;
    }
    fVar17 = (float)SQRT(dVar1);
  }
LAB_148acb340:
  local_a8 = dVar4;
  dStack_a0 = dVar2;
  local_98 = dVar3;
  fVar16 = (float)FUN_148acb1b8(param_4);
  lVar13 = 0x28;
  if (fVar16 <= 0.0 == 0.0 < fVar17) {
    dVar1 = dVar4;
    if (bVar14 < 2) {
LAB_148acb49d:
      if (((fVar16 == 0.0) && (!NAN(fVar16))) && (((float)dVar1 != 0.0 || (NAN((float)dVar1)))))
      goto LAB_148acb369;
    }
    else {
      if (uVar15 == 3) {
        dVar1 = SQRT(dVar3 * dVar3 + dVar4 * dVar4 + dVar2 * dVar2);
        goto LAB_148acb49d;
      }
      if (uVar15 == 2) {
        dVar1 = SQRT(dVar4 * dVar4 + dVar2 * dVar2);
        goto LAB_148acb49d;
      }
    }
    lVar13 = 0x2c;
  }
LAB_148acb369:
  param_3 = param_3 * *(float *)(param_1 + lVar13);
  fVar17 = -param_3;
  fVar16 = (float)FUN_148acb1b8(&local_a8);
  if (fVar17 <= fVar16) {
    if ((1 < bVar14) || (fVar17 = param_3, fVar16 <= param_3)) goto LAB_148acb3ef;
  }
  else if (1 < bVar14) goto LAB_148acb3ef;
  dVar4 = (double)fVar17;
LAB_148acb3ef:
  uVar6 = *(undefined4 *)((longlong)param_4 + 4);
  uVar7 = *(undefined4 *)(param_4 + 1);
  uVar8 = *(undefined4 *)((longlong)param_4 + 0xc);
  uVar9 = *(undefined4 *)(param_4 + 2);
  uVar10 = *(undefined4 *)((longlong)param_4 + 0x14);
  uVar11 = *(undefined4 *)(param_4 + 3);
  uVar12 = *(undefined4 *)((longlong)param_4 + 0x1c);
  *(undefined4 *)param_2 = *(undefined4 *)param_4;
  *(undefined4 *)((longlong)param_2 + 4) = uVar6;
  *(undefined4 *)(param_2 + 1) = uVar7;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar8;
  *(undefined4 *)(param_2 + 2) = uVar9;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar10;
  *(undefined4 *)(param_2 + 3) = uVar11;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar12;
  *param_2 = dVar4 + *param_2;
  param_2[1] = dVar2 + param_2[1];
  param_2[2] = dVar3 + param_2[2];
  if (bVar14 <= (byte)*(undefined4 *)(param_2 + 3)) {
    bVar14 = (byte)*(undefined4 *)(param_2 + 3);
  }
  *(byte *)(param_2 + 3) = bVar14;
  if ((local_80 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148acb4cc FUN_148acb4cc body=93 status=ok
// SIG undefined FUN_148acb4cc(void)

void FUN_148acb4cc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[2] = DAT_14c8464e0;
  param_1[3] = uVar1;
  param_1[4] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[5] = DAT_14c8464e0;
  param_1[6] = uVar1;
  param_1[7] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 8) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[9] = DAT_14c8464e0;
  param_1[10] = uVar1;
  param_1[0xb] = DAT_14c8464f0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  return;
}



// FUNCTION 148acb52a FUN_148acb52a body=22 status=ok
// SIG undefined FUN_148acb52a(void)

void FUN_148acb52a(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  param_2[2] = *(undefined8 *)(lVar1 + 0x18);
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  *param_2 = *(undefined8 *)(lVar1 + 8);
  param_2[1] = uVar2;
  return;
}



// FUNCTION 148acb540 FUN_148acb540 body=72 status=ok
// SIG undefined FUN_148acb540(void)

void FUN_148acb540(longlong *param_1)

{
  longlong lVar1;
  double dVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  param_1[7] = *(longlong *)(lVar1 + 0x30);
  lVar3 = *(longlong *)(lVar1 + 0x28);
  param_1[5] = *(longlong *)(lVar1 + 0x20);
  param_1[6] = lVar3;
  dVar2 = (double)(*(float *)(param_1 + 1) * *(float *)(lVar1 + 0x4c));
  param_1[2] = (longlong)(dVar2 * (double)param_1[5]);
  param_1[3] = (longlong)((double)param_1[6] * dVar2);
  param_1[4] = (longlong)((double)param_1[7] * dVar2);
  return;
}



// FUNCTION 148acb588 FUN_148acb588 body=83 status=ok
// SIG undefined FUN_148acb588(void)

void FUN_148acb588(longlong *param_1,int param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = *(int *)(lVar1 + 8);
  if (param_2 < *(int *)(lVar1 + 8)) {
    iVar2 = param_2;
  }
  if (iVar2 < -*(int *)(lVar1 + 0x18)) {
    iVar2 = -*(int *)(lVar1 + 0x18);
  }
  *(int *)((longlong)param_1 + 0xc) = iVar2;
  if (iVar2 != (int)param_1[1]) {
    if ((param_3 != '\0') || ((*(float *)(lVar1 + 0x2c) == 0.0 && (!NAN(*(float *)(lVar1 + 0x2c)))))
       ) {
      *(int *)(param_1 + 1) = iVar2;
      return;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar1 + 0x2c);
  }
  return;
}



// FUNCTION 148acb5dc FUN_148acb5dc body=71 status=ok
// SIG undefined FUN_148acb5dc(void)

undefined8 FUN_148acb5dc(longlong *param_1,uint param_2)

{
  uint uVar1;
  float fVar2;
  undefined4 uVar3;
  
  param_1 = (longlong *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  if ((int)param_2 < (int)*(uint *)(param_1 + 1)) {
    uVar1 = param_2;
  }
  if ((int)uVar1 < -(int)param_1[3]) {
    uVar1 = -(int)param_1[3];
  }
  if ((int)uVar1 < 1) {
    fVar2 = 0.0;
    uVar3 = 0;
    if (-1 < (int)uVar1) goto LAB_148acb609;
    uVar3 = 0x80000000;
    fVar2 = -*(float *)(param_1[2] + (ulonglong)~uVar1 * 4);
  }
  else {
    fVar2 = *(float *)(*param_1 + -4 + (ulonglong)uVar1 * 4);
    uVar3 = 0;
  }
  fVar2 = fVar2 * *(float *)(param_1 + 4);
LAB_148acb609:
  return CONCAT44(uVar3,fVar2);
}



// FUNCTION 148acb624 FUN_148acb624 body=242 status=ok
// SIG undefined FUN_148acb624(void)

void FUN_148acb624(longlong *param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *param_1;
  uVar4 = *(uint *)(param_1 + 1);
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  if (uVar4 == uVar3 && *(char *)(lVar2 + 0x34) == '\x01') {
    if ((char)param_1[3] != '\x01') {
      return;
    }
    if ((float)*(uint *)(lVar2 + 0x24) <= *(float *)((longlong)param_1 + 0x14)) {
      uVar5 = -*(int *)(lVar2 + 0x18);
      uVar3 = *(uint *)(lVar2 + 8);
      if (0 < (int)uVar4) goto LAB_148acb6b0;
LAB_148acb69b:
      uVar6 = uVar4 - 1;
    }
    else {
      uVar3 = -uVar4;
      if ((int)-uVar4 < 0) {
        uVar3 = uVar4;
      }
      if ((float)*(uint *)(lVar2 + 0x28) < *(float *)((longlong)param_1 + 0x14)) {
        return;
      }
      if (uVar3 < 2) {
        return;
      }
      uVar5 = -*(int *)(lVar2 + 0x18);
      uVar3 = *(uint *)(lVar2 + 8);
      if (0 < (int)uVar4) goto LAB_148acb69b;
LAB_148acb6b0:
      uVar6 = uVar4 + 1;
    }
    if ((int)uVar6 < (int)uVar3) {
      uVar3 = uVar6;
    }
    if ((int)uVar3 < (int)uVar5) {
      uVar3 = uVar5;
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar3;
    if (uVar3 == uVar4) {
      return;
    }
    if ((*(float *)(lVar2 + 0x2c) == 0.0) && (!NAN(*(float *)(lVar2 + 0x2c)))) goto LAB_148acb712;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar2 + 0x2c);
    uVar4 = 0;
  }
  if (uVar4 == uVar3) {
    return;
  }
  fVar1 = *(float *)(param_1 + 2);
  *(float *)(param_1 + 2) = fVar1 - param_2;
  if (0.0 < fVar1 - param_2) {
    return;
  }
  *(undefined4 *)(param_1 + 2) = 0;
LAB_148acb712:
  *(uint *)(param_1 + 1) = uVar3;
  return;
}



// FUNCTION 148acb716 FUN_148acb716 body=367 status=ok
// SIG undefined FUN_148acb716(void)

float FUN_148acb716(undefined8 *param_1,int param_2,longlong *param_3)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  
  lVar3 = *param_3;
  plVar6 = (longlong *)((longlong)param_2 * 0xe8 + lVar3);
  cVar1 = *(char *)*param_1;
  if ((cVar1 == '\0') || (cVar2 = *(char *)(*plVar6 + 0x3c), cVar2 == '\0')) {
    if (*(char *)((longlong)plVar6 + 0xb) != '\x01') {
      return 0.0;
    }
    if (0 < (longlong)(int)param_3[1]) {
      lVar5 = 0;
      iVar4 = 0;
      do {
        iVar4 = iVar4 + (uint)*(byte *)(lVar3 + 0xb + lVar5);
        lVar5 = lVar5 + 0xe8;
      } while ((longlong)(int)param_3[1] * 0xe8 - lVar5 != 0);
      goto LAB_148acb7f2;
    }
LAB_148acb87d:
    fVar8 = 0.0;
  }
  else {
    if (cVar1 == '\x03') {
      if (cVar2 != '\x02') {
        return 0.0;
      }
      if ((longlong)(int)param_3[1] < 1) goto LAB_148acb87d;
      lVar5 = 0;
      iVar4 = 0;
      do {
        iVar4 = iVar4 + (uint)(*(char *)(*(longlong *)(lVar3 + lVar5) + 0x3c) == '\x02');
        lVar5 = lVar5 + 0xe8;
      } while ((longlong)(int)param_3[1] * 0xe8 - lVar5 != 0);
    }
    else {
      if (cVar1 != '\x02') {
        if (cVar1 != '\x01') {
          return 0.0;
        }
        if ((longlong)(int)param_3[1] < 1) {
          return 0.0;
        }
        fVar7 = *(float *)(param_1 + 1);
        lVar5 = 0;
        iVar4 = 0;
        do {
          iVar4 = iVar4 + (uint)(*(char *)(*(longlong *)(lVar3 + lVar5) + 0x3c) == cVar2);
          lVar5 = lVar5 + 0xe8;
        } while ((longlong)(int)param_3[1] * 0xe8 - lVar5 != 0);
        if (cVar2 == '\x01') {
          fVar7 = 1.0 - fVar7;
        }
        fVar8 = (float)iVar4;
        goto LAB_148acb7ff;
      }
      if (cVar2 != '\x01') {
        return 0.0;
      }
      if ((longlong)(int)param_3[1] < 1) goto LAB_148acb87d;
      lVar5 = 0;
      iVar4 = 0;
      do {
        iVar4 = iVar4 + (uint)(*(char *)(*(longlong *)(lVar3 + lVar5) + 0x3c) == '\x01');
        lVar5 = lVar5 + 0xe8;
      } while ((longlong)(int)param_3[1] * 0xe8 - lVar5 != 0);
    }
LAB_148acb7f2:
    fVar8 = (float)iVar4;
  }
  fVar7 = 1.0;
LAB_148acb7ff:
  return fVar7 / fVar8;
}



// FUNCTION 148acb886 FUN_148acb886 body=1405 status=ok
// SIG undefined FUN_148acb886(void)

void FUN_148acb886(longlong *param_1,float param_2)

{
  float fVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  float fVar9;
  uint uVar11;
  undefined8 uVar10;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_e8 [36];
  float local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  fVar9 = 0.0;
  uVar11 = 0;
  if (0.05 < ABS((float)(double)param_1[10])) {
    uVar10 = FUN_144a7ed88((float)(double)param_1[10],(float)(double)param_1[9]);
    fVar9 = ABS((float)uVar10);
    uVar11 = (uint)((ulonglong)uVar10 >> 0x20) & 0x7fffffff;
    if (1.5707964 < fVar9) {
      fVar9 = 3.1415927 - fVar9;
      uVar11 = 0;
    }
  }
  *(float *)(param_1 + 0x13) = fVar9;
  if ((char)param_1[5] == '\x01') {
    fVar14 = *(float *)(param_1 + 0xe);
    fVar17 = *(float *)((longlong)param_1 + 0x74);
    *(float *)((longlong)param_1 + 0x3c) = fVar14;
    *(float *)(param_1 + 8) = fVar17;
  }
  else if ((char)param_1[5] == '\x02') {
    fVar14 = *(float *)(param_1 + 0xe) + *(float *)((longlong)param_1 + 0x3c);
    *(float *)((longlong)param_1 + 0x3c) = fVar14;
    fVar17 = *(float *)((longlong)param_1 + 0x74) + *(float *)(param_1 + 8);
    *(float *)(param_1 + 8) = fVar17;
    param_1[0xe] = 0;
  }
  else {
    fVar14 = *(float *)((longlong)param_1 + 0x3c);
    fVar17 = *(float *)(param_1 + 8);
  }
  fVar16 = *(float *)((longlong)param_1 + 0x2c);
  fVar19 = fVar14 / fVar16;
  *(float *)(param_1 + 0x15) = fVar19;
  fVar12 = fVar17 / fVar16;
  *(float *)((longlong)param_1 + 0xac) = fVar12;
  fVar18 = *(float *)((longlong)param_1 + 0x44) * *(float *)(param_1 + 0xd) *
           *(float *)(param_1 + 2);
  *(float *)(param_1 + 0x18) = fVar18;
  *(undefined1 *)((longlong)param_1 + 0xe1) = 0;
  if (*(float *)((longlong)param_1 + 0x44) <= 1e-08) {
    fVar9 = *(float *)(*param_1 + 0x90);
    dVar2 = 0.0;
    if (fVar9 <= ABS(*(float *)(param_1 + 6))) {
      fVar14 = 0.0;
    }
    bVar8 = 0;
    dVar4 = 0.0;
  }
  else {
    fVar15 = ABS(fVar14);
    if (((*(char *)((longlong)param_1 + 0xd) == '\x01') && (fVar15 < fVar17)) &&
       (fVar18 < ABS(fVar12))) {
      fVar12 = (float)(~-(uint)(0.0 < fVar12) & (uint)-(fVar18 * 0.98) |
                      (uint)(fVar18 * 0.98) & -(uint)(0.0 < fVar12));
      *(float *)((longlong)param_1 + 0xac) = fVar12;
      if (5.0 < ABS((double)param_1[9])) {
        *(undefined1 *)((longlong)param_1 + 0xe1) = 1;
      }
    }
    fVar14 = 0.0;
    if (((fVar18 < ABS(fVar19)) &&
        (fVar14 = (ABS(fVar19) - fVar18) * fVar16,
        fVar14 = (float)(-(uint)(fVar19 < 0.0) & (uint)-fVar14 |
                        ~-(uint)(fVar19 < 0.0) & (uint)fVar14),
        *(char *)((longlong)param_1 + 0xc) == '\x01')) && (fVar17 <= fVar15)) {
      fVar19 = (float)(~-(uint)(0.0 < fVar19) & (uint)-(fVar18 * 0.98) |
                      (uint)(fVar18 * 0.98) & -(uint)(0.0 < fVar19));
      *(float *)(param_1 + 0x15) = fVar19;
    }
    fVar1 = *(float *)(param_1 + 0x12);
    if (fVar15 < fVar17) {
      fVar13 = (float)(((double)param_1[9] * (double)(fVar1 * 0.4)) / (double)param_2);
      fVar19 = ABS(fVar13);
      fVar13 = (float)((uint)fVar13 | 0x80000000);
      if (fVar19 <= fVar12) {
        fVar12 = fVar19;
      }
      fVar19 = fVar12;
      if (fVar12 <= fVar13) {
        fVar19 = fVar13;
      }
      if (0.0 < (double)param_1[9]) {
        fVar19 = -fVar19;
      }
    }
    dVar2 = (double)param_1[10];
    lVar3 = *param_1;
    if (*(int *)(lVar3 + 0x68) == 0) {
      fVar9 = ABS(fVar9) * *(float *)(param_1 + 3);
    }
    else {
      fVar9 = (float)FUN_140c35dcc(lVar3 + 0x60,CONCAT44(uVar11,fVar9 * 57.295776));
      fVar9 = fVar9 * *(float *)((longlong)param_1 + 0x14);
    }
    fVar12 = ABS((float)(((double)(fVar1 * 0.4) * -dVar2) / (double)param_2));
    if (fVar9 <= fVar12) {
      fVar12 = fVar9;
    }
    if (0.0 < dVar2) {
      fVar12 = -fVar12;
    }
    dVar4 = (double)fVar19;
    param_1[0x19] = (longlong)dVar4;
    dVar2 = (double)fVar12;
    param_1[0x1a] = (longlong)dVar2;
    fVar9 = fVar19 * fVar19 + fVar12 * fVar12;
    *(undefined1 *)(param_1 + 0x1c) = 0;
    if ((fVar9 <= 0.05) || (fVar18 = fVar18 / SQRT(fVar9), 1.0 <= fVar18)) {
      bVar8 = 0;
    }
    else {
      if (fVar17 <= fVar15) {
        bVar8 = 0;
      }
      else {
        bVar8 = *(byte *)((longlong)param_1 + 0xa4) ^ 1;
      }
      *(undefined1 *)(param_1 + 0x1c) = 1;
      dVar4 = (double)(fVar19 * fVar18 * *(float *)(lVar3 + 0x54));
      dVar2 = (double)(fVar12 * fVar18 * *(float *)(lVar3 + 0x54));
    }
    fVar9 = *(float *)(lVar3 + 0x90);
  }
  if (bVar8 == 0) {
    fVar14 = (fVar14 / *(float *)(param_1 + 7)) * param_2;
    if (fVar9 <= fVar14) {
      fVar14 = fVar9;
    }
    if (fVar14 <= -fVar9) {
      fVar14 = -fVar9;
    }
    bVar8 = *(byte *)((longlong)param_1 + 0x9c);
    if (bVar8 == 1) {
      if (fVar16 <= 0.0001) {
        fVar16 = 0.0001;
      }
      fVar14 = fVar14 + ((float)((double)param_1[9] / (double)fVar16) - *(float *)(param_1 + 6)) +
               *(float *)(param_1 + 6);
    }
    else {
      fVar14 = fVar14 + *(float *)(param_1 + 6);
    }
    *(float *)(param_1 + 6) = fVar14;
  }
  else {
    fVar14 = *(float *)(param_1 + 6) * 0.9;
    *(float *)(param_1 + 6) = fVar14;
    bVar8 = *(byte *)((longlong)param_1 + 0x9c);
  }
  fVar9 = modff((fVar14 * param_2 + *(float *)(param_1 + 0xc)) / 6.2831855,&local_c4);
  *(float *)(param_1 + 0xc) = fVar9 * 6.2831855;
  if ((bVar8 & 1) == 0) {
    param_1[0x11] = DAT_14c8464f0;
    uVar7 = DAT_14c8464e8._4_4_;
    uVar6 = (undefined4)DAT_14c8464e8;
    uVar5 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(param_1 + 0xf) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_1 + 0x7c) = uVar5;
    *(undefined4 *)(param_1 + 0x10) = uVar6;
    *(undefined4 *)((longlong)param_1 + 0x84) = uVar7;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_e8);
  }
  param_1[0xf] = (longlong)dVar4;
  param_1[0x10] = (longlong)dVar2;
  if ((local_c0 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148acbeaa FUN_148acbeaa body=59 status=ok
// SIG undefined FUN_148acbeaa(void)

undefined8 FUN_148acbeaa(longlong *param_1)

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



// FUNCTION 148acbf80 FUN_148acbf80 body=117 status=ok
// SIG undefined FUN_148acbf80(void)

undefined1 FUN_148acbf80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined1 *)(param_2 + 8 + lVar3) = *(undefined1 *)(param_3 + 8 + lVar3);
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 0x10 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + 0x10 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 + 0x10) = lVar2;
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148acc01e FUN_148acc01e body=59 status=ok
// SIG undefined FUN_148acc01e(void)

undefined8 FUN_148acc01e(longlong *param_1)

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



// FUNCTION 148acc0f4 FUN_148acc0f4 body=54 status=ok
// SIG undefined FUN_148acc0f4(void)

undefined1 FUN_148acc0f4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148acc20c(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148acc152 FUN_148acc152 body=59 status=ok
// SIG undefined FUN_148acc152(void)

undefined8 FUN_148acc152(longlong *param_1)

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



// FUNCTION 148acc198 FUN_148acc198 body=37 status=ok
// SIG undefined FUN_148acc198(void)

void FUN_148acc198(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 148acc20c FUN_148acc20c body=69 status=ok
// SIG undefined FUN_148acc20c(void)

longlong FUN_148acc20c(longlong param_1,longlong param_2)

{
  if (param_2 != param_1) {
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_148acc30e(param_1);
    }
    if (*(int *)(param_2 + 8) != 0) {
      FUN_148acc252(param_1,param_2);
    }
  }
  return param_1;
}



// FUNCTION 148acc252 FUN_148acc252 body=88 status=ok
// SIG undefined FUN_148acc252(void)

undefined8 * FUN_148acc252(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148acc2aa(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 5);
      }
    }
  }
  return param_1;
}



// FUNCTION 148acc2aa FUN_148acc2aa body=98 status=ok
// SIG undefined FUN_148acc2aa(void)

void FUN_148acc2aa(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148acc30e FUN_148acc30e body=48 status=ok
// SIG undefined FUN_148acc30e(void)

void FUN_148acc30e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 148acc33e FUN_148acc33e body=34 status=ok
// SIG undefined FUN_148acc33e(void)

void FUN_148acc33e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14b50e8b0;
  return;
}



// FUNCTION 148acc360 FUN_148acc360 body=36 status=ok
// SIG undefined FUN_148acc360(void)

undefined8 FUN_148acc360(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148acc3a0 FUN_148acc3a0 body=93 status=ok
// SIG undefined FUN_148acc3a0(void)

void FUN_148acc3a0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b50e840;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148acc3fe FUN_148acc3fe body=123 status=ok
// SIG undefined FUN_148acc3fe(void)

void FUN_148acc3fe(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b50e840;
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



// FUNCTION 148acc486 FUN_148acc486 body=21 status=ok
// SIG undefined FUN_148acc486(void)

undefined8 FUN_148acc486(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148acc49c FUN_148acc49c body=34 status=ok
// SIG undefined FUN_148acc49c(void)

undefined8 FUN_148acc49c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 148acc4c2 FUN_148acc4c2 body=98 status=ok
// SIG undefined FUN_148acc4c2(void)

void FUN_148acc4c2(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148acc528 FUN_148acc528 body=29 status=ok
// SIG undefined FUN_148acc528(void)

void FUN_148acc528(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14b50ed70;
  return;
}



// FUNCTION 148acc546 FUN_148acc546 body=36 status=ok
// SIG undefined FUN_148acc546(void)

undefined8 FUN_148acc546(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148acc586 FUN_148acc586 body=93 status=ok
// SIG undefined FUN_148acc586(void)

void FUN_148acc586(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b50ed00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148acc5e4 FUN_148acc5e4 body=123 status=ok
// SIG undefined FUN_148acc5e4(void)

void FUN_148acc5e4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b50ed00;
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



// FUNCTION 148acc66c FUN_148acc66c body=21 status=ok
// SIG undefined FUN_148acc66c(void)

undefined8 FUN_148acc66c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148acc682 FUN_148acc682 body=34 status=ok
// SIG undefined FUN_148acc682(void)

undefined8 FUN_148acc682(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 148acc6cc FUN_148acc6cc body=156 status=ok
// SIG undefined FUN_148acc6cc(void)

void FUN_148acc6cc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
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
  FUN_148ad536a(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148acc76e FUN_148acc76e body=168 status=ok
// SIG undefined FUN_148acc76e(void)

void FUN_148acc76e(longlong param_1,longlong param_2)

{
  bool bVar1;
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
  bVar1 = local_1c != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)(param_1 + 0x2a0) = bVar1;
  *(bool *)(param_1 + 0x260) = bVar1;
  *(bool *)(param_1 + 0x2f8) = bVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148acc836 FUN_148acc836 body=37 status=ok
// SIG undefined FUN_148acc836(void)

void FUN_148acc836(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148ad5594();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148acc85c FUN_148acc85c body=39 status=ok
// SIG undefined FUN_148acc85c(void)

void FUN_148acc85c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148ad55bc();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148acc884 FUN_148acc884 body=39 status=ok
// SIG undefined FUN_148acc884(void)

void FUN_148acc884(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148ad55c6();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148acc926 FUN_148acc926 body=37 status=ok
// SIG undefined FUN_148acc926(void)

void FUN_148acc926(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148ad55a8();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148acc96e FUN_148acc96e body=37 status=ok
// SIG undefined FUN_148acc96e(void)

void FUN_148acc96e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148ad55b0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148acc9b2 FUN_148acc9b2 body=156 status=ok
// SIG undefined FUN_148acc9b2(void)

void FUN_148acc9b2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
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
  FUN_148ad534a(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148acca54 FUN_148acca54 body=37 status=ok
// SIG undefined FUN_148acca54(void)

void FUN_148acca54(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148ad55e0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148acca94 FUN_148acca94 body=182 status=ok
// SIG undefined FUN_148acca94(void)

void FUN_148acca94(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_44 = param_5;
  local_40 = param_6;
  local_3c = param_7;
  local_38 = param_8;
  local_34 = param_9;
  local_50 = param_2;
  local_4c = param_3;
  local_48 = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cb99148);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_50);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148accb4c FUN_148accb4c body=894 status=ok
// SIG undefined FUN_148accb4c(void)

void FUN_148accb4c(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_50 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_50;
  local_60 = local_4c;
  local_68 = local_48;
  local_70 = local_44;
  local_78 = local_40;
  cVar1 = (**(code **)(*param_1 + 0x5c0))(param_1,local_34,local_38,local_3c);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerUpdateState_Validate");
  }
  else {
    local_58 = local_50;
    local_60 = local_4c;
    local_68 = local_48;
    local_70 = local_44;
    local_78 = local_40;
    (**(code **)(*param_1 + 0x5c8))(param_1,local_34,local_38,local_3c);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148accecc FUN_148accecc body=156 status=ok
// SIG undefined FUN_148accecc(void)

void FUN_148accecc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
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
  FUN_143f7e916(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148accf6e FUN_148accf6e body=158 status=ok
// SIG undefined FUN_148accf6e(void)

void FUN_148accf6e(undefined8 param_1,longlong param_2)

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
  FUN_148ad5570(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148acd012 FUN_148acd012 body=158 status=ok
// SIG undefined FUN_148acd012(void)

void FUN_148acd012(undefined8 param_1,longlong param_2)

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
  FUN_148ad555c(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148acd0b6 FUN_148acd0b6 body=158 status=ok
// SIG undefined FUN_148acd0b6(void)

void FUN_148acd0b6(undefined8 param_1,longlong param_2)

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
  FUN_148ad53dc(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148acd15a FUN_148acd15a body=158 status=ok
// SIG undefined FUN_148acd15a(void)

void FUN_148acd15a(undefined8 param_1,longlong param_2)

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
  FUN_148ad53ee(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148acd1fa FUN_148acd1fa body=156 status=ok
// SIG undefined FUN_148acd1fa(void)

void FUN_148acd1fa(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
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
  FUN_148ad538e(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148acd29c FUN_148acd29c body=158 status=ok
// SIG undefined FUN_148acd29c(void)

void FUN_148acd29c(undefined8 param_1,longlong param_2)

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
  FUN_148ad558c(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148acd33c FUN_148acd33c body=156 status=ok
// SIG undefined FUN_148acd33c(void)

void FUN_148acd33c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
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
  FUN_148ad53a8(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148acd3de FUN_148acd3de body=158 status=ok
// SIG undefined FUN_148acd3de(void)

void FUN_148acd3de(undefined8 param_1,longlong param_2)

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
  FUN_148ad5400(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148acd47e FUN_148acd47e body=156 status=ok
// SIG undefined FUN_148acd47e(void)

void FUN_148acd47e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
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
  FUN_143f7e930(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148acd522 FUN_148acd522 body=239 status=ok
// SIG undefined FUN_148acd522(void)

void FUN_148acd522(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1457828d4(param_1,local_1c,local_20 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148acd612 FUN_148acd612 body=156 status=ok
// SIG undefined FUN_148acd612(void)

void FUN_148acd612(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
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
  FUN_143f7e8fc(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148acd6b4 FUN_148acd6b4 body=158 status=ok
// SIG undefined FUN_148acd6b4(void)

void FUN_148acd6b4(undefined8 param_1,longlong param_2)

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
  FUN_148ad5584(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148acd754 FUN_148acd754 body=156 status=ok
// SIG undefined FUN_148acd754(void)

void FUN_148acd754(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
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
  FUN_148ad53c2(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148acd83c FUN_148acd83c body=75 status=ok
// SIG undefined FUN_148acd83c(void)

void FUN_148acd83c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  thunk_FUN_145ff07a2(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148acd8a0 FUN_148acd8a0 body=39 status=ok
// SIG undefined FUN_148acd8a0(void)

void FUN_148acd8a0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148ada89c();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148acd8c8 FUN_148acd8c8 body=39 status=ok
// SIG undefined FUN_148acd8c8(void)

void FUN_148acd8c8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148ada8ea();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148acd8f0 FUN_148acd8f0 body=39 status=ok
// SIG undefined FUN_148acd8f0(void)

void FUN_148acd8f0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148ada874();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148acd918 FUN_148acd918 body=96 status=ok
// SIG undefined FUN_148acd918(void)

void FUN_148acd918(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148ada9a6(param_1,&local_30);
  *(undefined8 *)(param_3 + 4) = local_20;
  *param_3 = local_30;
  param_3[1] = uStack_2c;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148acd97a FUN_148acd97a body=39 status=ok
// SIG undefined FUN_148acd97a(void)

void FUN_148acd97a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148ada988();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148acd9a2 FUN_148acd9a2 body=39 status=ok
// SIG undefined FUN_148acd9a2(void)

void FUN_148acd9a2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148ada960();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148acd9ca FUN_148acd9ca body=39 status=ok
// SIG undefined FUN_148acd9ca(void)

void FUN_148acd9ca(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148ada938();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148acd9f6 FUN_148acd9f6 body=37 status=ok
// SIG undefined FUN_148acd9f6(void)

void FUN_148acd9f6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148ada9c0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148acda48 FUN_148acda48 body=45 status=ok
// SIG undefined FUN_148acda48(void)

longlong FUN_148acda48(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14584e8de(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148acda76 FUN_148acda76 body=48 status=ok
// SIG undefined FUN_148acda76(void)

longlong FUN_148acda76(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x178;
  FUN_14584e8de(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148acdae6 FUN_148acdae6 body=63 status=ok
// SIG undefined FUN_148acdae6(void)

undefined1 FUN_148acdae6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148acdc10(param_2,param_3);
    param_3 = param_3 + 0x100;
    param_2 = param_2 + 0x100;
  }
  return 1;
}



// FUNCTION 148acdb4e FUN_148acdb4e body=59 status=ok
// SIG undefined FUN_148acdb4e(void)

undefined8 FUN_148acdb4e(longlong *param_1)

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



// FUNCTION 148acdb9a FUN_148acdb9a body=40 status=ok
// SIG undefined FUN_148acdb9a(void)

void FUN_148acdb9a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x100) == '\x01') {
    FUN_148acddac(param_2);
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 148acdc10 FUN_148acdc10 body=205 status=ok
// SIG undefined FUN_148acdc10(void)

longlong FUN_148acdc10(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
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
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  uVar6 = *(undefined4 *)(param_2 + 0x30);
  uVar7 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  FUN_14123bd80(param_1 + 0x40,param_2 + 0x40);
  uVar1 = *(undefined4 *)(param_2 + 0x8c);
  uVar2 = *(undefined4 *)(param_2 + 0x90);
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  uVar4 = *(undefined4 *)(param_2 + 0x98);
  uVar5 = *(undefined4 *)(param_2 + 0x9c);
  uVar6 = *(undefined4 *)(param_2 + 0xa0);
  uVar7 = *(undefined4 *)(param_2 + 0xa4);
  uVar8 = *(undefined4 *)(param_2 + 0xa8);
  uVar9 = *(undefined4 *)(param_2 + 0xac);
  uVar10 = *(undefined4 *)(param_2 + 0xb0);
  uVar11 = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  *(undefined4 *)(param_1 + 0x98) = uVar4;
  *(undefined4 *)(param_1 + 0x9c) = uVar5;
  *(undefined4 *)(param_1 + 0xa0) = uVar6;
  *(undefined4 *)(param_1 + 0xa4) = uVar7;
  *(undefined4 *)(param_1 + 0xa8) = uVar8;
  *(undefined4 *)(param_1 + 0xac) = uVar9;
  *(undefined4 *)(param_1 + 0xb0) = uVar10;
  *(undefined4 *)(param_1 + 0xb4) = uVar11;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  FUN_140d2c6ac(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
  uVar1 = *(undefined4 *)(param_2 + 0xdc);
  uVar2 = *(undefined4 *)(param_2 + 0xe0);
  uVar3 = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = uVar1;
  *(undefined4 *)(param_1 + 0xe0) = uVar2;
  *(undefined4 *)(param_1 + 0xe4) = uVar3;
  FUN_148acdcde(param_1 + 0xe8,param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  return param_1;
}



// FUNCTION 148acdcde FUN_148acdcde body=89 status=ok
// SIG undefined FUN_148acdcde(void)

undefined8 * FUN_148acdcde(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148acdd38(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x14);
      }
    }
  }
  return param_1;
}



// FUNCTION 148acdd38 FUN_148acdd38 body=115 status=ok
// SIG undefined FUN_148acdd38(void)

void FUN_148acdd38(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x14,4);
    iVar2 = (int)(uVar1 / 0x14);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x14,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148acddac FUN_148acddac body=75 status=ok
// SIG undefined FUN_148acddac(void)

void FUN_148acddac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b516720;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_144a659aa(param_1);
  return;
}



// FUNCTION 148acddf8 FUN_148acddf8 body=43 status=ok
// SIG undefined FUN_148acddf8(void)

undefined8 FUN_148acddf8(undefined8 param_1,int param_2)

{
  FUN_148acddac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 148acde24 FUN_148acde24 body=55 status=ok
// SIG undefined FUN_148acde24(void)

void FUN_148acde24(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb98f30 == 0) {
    uVar1 = FUN_140ef4b00();
    DAT_14cb98f30 = FUN_140002ddd(FUN_14658b687,uVar1,L"AnimNode_StageCoachWheelController");
  }
  return;
}



// FUNCTION 148acde90 FUN_148acde90 body=63 status=ok
// SIG undefined FUN_148acde90(void)

undefined1 FUN_148acde90(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148acdfba(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 148acdef8 FUN_148acdef8 body=59 status=ok
// SIG undefined FUN_148acdef8(void)

undefined8 FUN_148acdef8(longlong *param_1)

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



// FUNCTION 148acdf44 FUN_148acdf44 body=40 status=ok
// SIG undefined FUN_148acdf44(void)

void FUN_148acdf44(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_148ace148(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 148acdfba FUN_148acdfba body=191 status=ok
// SIG undefined FUN_148acdfba(void)

longlong FUN_148acdfba(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
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
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  uVar6 = *(undefined4 *)(param_2 + 0x30);
  uVar7 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  FUN_14123bd80(param_1 + 0x40,param_2 + 0x40);
  uVar1 = *(undefined4 *)(param_2 + 0x8c);
  uVar2 = *(undefined4 *)(param_2 + 0x90);
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  uVar4 = *(undefined4 *)(param_2 + 0x98);
  uVar5 = *(undefined4 *)(param_2 + 0x9c);
  uVar6 = *(undefined4 *)(param_2 + 0xa0);
  uVar7 = *(undefined4 *)(param_2 + 0xa4);
  uVar8 = *(undefined4 *)(param_2 + 0xa8);
  uVar9 = *(undefined4 *)(param_2 + 0xac);
  uVar10 = *(undefined4 *)(param_2 + 0xb0);
  uVar11 = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  *(undefined4 *)(param_1 + 0x98) = uVar4;
  *(undefined4 *)(param_1 + 0x9c) = uVar5;
  *(undefined4 *)(param_1 + 0xa0) = uVar6;
  *(undefined4 *)(param_1 + 0xa4) = uVar7;
  *(undefined4 *)(param_1 + 0xa8) = uVar8;
  *(undefined4 *)(param_1 + 0xac) = uVar9;
  *(undefined4 *)(param_1 + 0xb0) = uVar10;
  *(undefined4 *)(param_1 + 0xb4) = uVar11;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  FUN_140d2c6ac(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
  FUN_148ace07a(param_1 + 0xd8,param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  return param_1;
}



// FUNCTION 148ace07a FUN_148ace07a body=89 status=ok
// SIG undefined FUN_148ace07a(void)

undefined8 * FUN_148ace07a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148ace0d4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x14);
      }
    }
  }
  return param_1;
}



// FUNCTION 148ace0d4 FUN_148ace0d4 body=115 status=ok
// SIG undefined FUN_148ace0d4(void)

void FUN_148ace0d4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x14,4);
    iVar2 = (int)(uVar1 / 0x14);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x14,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148ace148 FUN_148ace148 body=75 status=ok
// SIG undefined FUN_148ace148(void)

void FUN_148ace148(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5169b0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_144a659aa(param_1);
  return;
}



// FUNCTION 148ace194 FUN_148ace194 body=43 status=ok
// SIG undefined FUN_148ace194(void)

undefined8 FUN_148ace194(undefined8 param_1,int param_2)

{
  FUN_148ace148();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 148ace1c0 FUN_148ace1c0 body=55 status=ok
// SIG undefined FUN_148ace1c0(void)

void FUN_148ace1c0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb98f48 == 0) {
    uVar1 = FUN_140ef4b00();
    DAT_14cb98f48 = FUN_140002ddd(FUN_14658b719,uVar1,L"AnimNode_WheelController");
  }
  return;
}



// FUNCTION 148ace278 FUN_148ace278 body=59 status=ok
// SIG undefined FUN_148ace278(void)

undefined8 FUN_148ace278(longlong *param_1)

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



// FUNCTION 148ace3ae FUN_148ace3ae body=59 status=ok
// SIG undefined FUN_148ace3ae(void)

undefined8 FUN_148ace3ae(longlong *param_1)

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



// FUNCTION 148ace500 FUN_148ace500 body=59 status=ok
// SIG undefined FUN_148ace500(void)

undefined8 FUN_148ace500(longlong *param_1)

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



// FUNCTION 148ace5a0 FUN_148ace5a0 body=34 status=ok
// SIG undefined FUN_148ace5a0(void)

undefined8 FUN_148ace5a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 148ace6de FUN_148ace6de body=59 status=ok
// SIG undefined FUN_148ace6de(void)

undefined8 FUN_148ace6de(longlong *param_1)

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



// FUNCTION 148ace77e FUN_148ace77e body=34 status=ok
// SIG undefined FUN_148ace77e(void)

undefined8 FUN_148ace77e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 148ace7a2 FUN_148ace7a2 body=75 status=ok
// SIG undefined FUN_148ace7a2(void)

void FUN_148ace7a2(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0x98);
  param_2[1] = 0xffffffffffffffff;
  *(undefined4 *)(param_2 + 2) = 0xffffffff;
  *param_2 = &PTR_FUN_14b517f90;
  memset(param_2 + 3,0,0x8c);
  return;
}



// FUNCTION 148ace848 FUN_148ace848 body=63 status=ok
// SIG undefined FUN_148ace848(void)

undefined1 FUN_148ace848(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14098bcca(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 148ace8b0 FUN_148ace8b0 body=59 status=ok
// SIG undefined FUN_148ace8b0(void)

undefined8 FUN_148ace8b0(longlong *param_1)

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



// FUNCTION 148ace8fc FUN_148ace8fc body=38 status=ok
// SIG undefined FUN_148ace8fc(void)

void FUN_148ace8fc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_1411d537c(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 148ace970 FUN_148ace970 body=43 status=ok
// SIG undefined FUN_148ace970(void)

undefined8 FUN_148ace970(undefined8 param_1,int param_2)

{
  FUN_1411d537c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 148acea36 FUN_148acea36 body=59 status=ok
// SIG undefined FUN_148acea36(void)

undefined8 FUN_148acea36(longlong *param_1)

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



// FUNCTION 148aceb8a FUN_148aceb8a body=59 status=ok
// SIG undefined FUN_148aceb8a(void)

undefined8 FUN_148aceb8a(longlong *param_1)

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



// FUNCTION 148acec84 FUN_148acec84 body=38 status=ok
// SIG undefined FUN_148acec84(void)

undefined8 FUN_148acec84(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined4 *)(param_3 + lVar1);
      puVar4 = (undefined4 *)(param_2 + lVar1);
      for (lVar2 = 0x16; lVar2 != 0; lVar2 = lVar2 + -1) {
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



// FUNCTION 148acecd2 FUN_148acecd2 body=59 status=ok
// SIG undefined FUN_148acecd2(void)

undefined8 FUN_148acecd2(longlong *param_1)

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



// FUNCTION 148acedfe FUN_148acedfe body=59 status=ok
// SIG undefined FUN_148acedfe(void)

undefined8 FUN_148acedfe(longlong *param_1)

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



// FUNCTION 148aceed4 FUN_148aceed4 body=64 status=ok
// SIG undefined FUN_148aceed4(void)

void FUN_148aceed4(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x10) = &DAT_14a176f00;
  if (*(longlong *)(param_2 + 0x80) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_2 + 0x18);
  return;
}



// FUNCTION 148acef2a FUN_148acef2a body=81 status=ok
// SIG undefined FUN_148acef2a(void)

undefined8 FUN_148acef2a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined1 *)(lVar1 + -8) = *(undefined1 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_14115e0ba();
      lVar2 = lVar2 + 0x98;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148acefa4 FUN_148acefa4 body=59 status=ok
// SIG undefined FUN_148acefa4(void)

undefined8 FUN_148acefa4(longlong *param_1)

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



// FUNCTION 148acf048 FUN_148acf048 body=78 status=ok
// SIG undefined FUN_148acf048(void)

void FUN_148acf048(longlong param_1)

{
  if (*(char *)(param_1 + 0x98) == '\x01') {
    *(undefined **)(param_1 + 0x10) = &DAT_14a176f00;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_1400020a8();
    }
    *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a177080;
    FUN_144a78a1a(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  return;
}



// FUNCTION 148acf1da FUN_148acf1da body=68 status=ok
// SIG undefined FUN_148acf1da(void)

undefined8 FUN_148acf1da(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xb0);
      lVar1 = lVar1 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148acf246 FUN_148acf246 body=59 status=ok
// SIG undefined FUN_148acf246(void)

undefined8 FUN_148acf246(longlong *param_1)

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



// FUNCTION 148acf3a8 FUN_148acf3a8 body=185 status=ok
// SIG undefined FUN_148acf3a8(void)

undefined8 FUN_148acf3a8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
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
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  
  if (param_4 != 0) {
    lVar17 = 0;
    do {
      puVar15 = (undefined8 *)(param_3 + lVar17);
      puVar16 = (undefined8 *)(param_2 + lVar17);
      for (lVar14 = 9; lVar14 != 0; lVar14 = lVar14 + -1) {
        *puVar16 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar16 = puVar16 + 1;
      }
      *(undefined8 *)(param_2 + 0x78 + lVar17) = *(undefined8 *)(param_3 + 0x78 + lVar17);
      puVar1 = (undefined4 *)(param_3 + 0x48 + lVar17);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x58 + lVar17);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      uVar9 = puVar1[2];
      uVar10 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x68 + lVar17);
      uVar11 = puVar1[1];
      uVar12 = puVar1[2];
      uVar13 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x68 + lVar17);
      *puVar2 = *puVar1;
      puVar2[1] = uVar11;
      puVar2[2] = uVar12;
      puVar2[3] = uVar13;
      puVar1 = (undefined4 *)(param_2 + 0x58 + lVar17);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1[2] = uVar9;
      puVar1[3] = uVar10;
      puVar1 = (undefined4 *)(param_2 + 0x48 + lVar17);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_144a67f5c((undefined8 *)(param_2 + lVar17) + 0x10,(undefined8 *)(param_3 + lVar17) + 0x10)
      ;
      *(undefined8 *)(param_2 + 0x90 + lVar17) = *(undefined8 *)(param_3 + 0x90 + lVar17);
      *(undefined4 *)(param_2 + 0x98 + lVar17) = *(undefined4 *)(param_3 + 0x98 + lVar17);
      lVar17 = lVar17 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148acf48a FUN_148acf48a body=59 status=ok
// SIG undefined FUN_148acf48a(void)

undefined8 FUN_148acf48a(longlong *param_1)

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



// FUNCTION 148acf4d6 FUN_148acf4d6 body=47 status=ok
// SIG undefined FUN_148acf4d6(void)

void FUN_148acf4d6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    if (*(longlong *)(param_2 + 0x80) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 148acf578 FUN_148acf578 body=965 status=ok
// SIG undefined FUN_148acf578(void)

void FUN_148acf578(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_1e8 [32];
  undefined4 *local_1c8;
  undefined4 *local_1c0;
  longlong *local_1b8;
  longlong local_1a8 [3];
  undefined4 local_190;
  undefined4 local_18c;
  undefined1 local_188 [24];
  undefined1 local_170 [24];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8 [12];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  puVar4 = &DAT_14c846480;
  puVar2 = local_f8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
  }
  local_88 = DAT_14c8464f0;
  local_98 = DAT_14c8464e0;
  uStack_90 = DAT_14c8464e8;
  local_70 = DAT_14c8464f0;
  local_80 = DAT_14c8464e0;
  uStack_78 = DAT_14c8464e8;
  puVar4 = (undefined8 *)(param_2 + 0x38);
  local_68 = 0;
  lStack_60 = 0;
  local_58 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  puVar2 = local_f8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_13c = 0x3ff00000;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_114 = 0x3ff00000;
  uStack_110 = 0;
  uStack_10c = 0x3ff00000;
  local_108 = 0x3ff0000000000000;
  uStack_100 = 0;
  *puVar4 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_158);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_158);
  }
  puVar5 = &local_158;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  *puVar4 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_170);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_170);
  }
  puVar6 = local_170;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *puVar4 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_188);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_188);
  }
  puVar8 = local_188;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar8 = *(undefined1 **)(param_2 + 0x38);
  }
  local_18c = 0;
  *puVar4 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18c);
  }
  puVar7 = &local_18c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar7 = *(undefined4 **)(param_2 + 0x38);
  }
  local_190 = 0;
  *puVar4 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_190);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_190);
  }
  puVar3 = &local_190;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  local_1a8[0] = 0;
  local_1a8[1] = 0;
  *puVar4 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1a8);
  }
  local_1b8 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    local_1b8 = local_1a8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1c8 = puVar7;
  local_1c0 = puVar3;
  FUN_148adba28(puVar2,puVar5,puVar6,puVar8);
  if (local_1a8[0] != 0) {
    FUN_1400020a8();
  }
  if (lStack_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148acf93e FUN_148acf93e body=676 status=ok
// SIG undefined FUN_148acf93e(void)

void FUN_148acf93e(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined4 *local_80;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar3 = (undefined8 *)(param_2 + 0x38);
  local_58 = 0;
  uStack_50 = 0;
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_5c = 0;
  *puVar3 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_60 = 0;
  *puVar3 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  puVar4 = *(undefined4 **)(param_2 + 0x38);
  local_64 = 0;
  *puVar3 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  puVar5 = *(undefined4 **)(param_2 + 0x38);
  local_68 = 0;
  *puVar3 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar6 = *(undefined4 **)(param_2 + 0x38);
  local_6c = 0;
  *puVar3 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  local_88 = &local_68;
  if (puVar6 != (undefined4 *)0x0) {
    local_88 = puVar6;
  }
  puVar6 = &local_64;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = puVar5;
  }
  puVar5 = &local_60;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = puVar4;
  }
  puVar4 = &local_5c;
  if (puVar2 != (undefined4 *)0x0) {
    puVar4 = puVar2;
  }
  puVar3 = &local_58;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  local_80 = &local_6c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    local_80 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148adbb20(puVar3,puVar4,puVar5,puVar6);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148acfc04 FUN_148acfc04 body=2023 status=ok
// SIG undefined FUN_148acfc04(void)

void FUN_148acfc04(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 auStack_1f8 [32];
  undefined4 *local_1d8;
  undefined4 *local_1d0;
  undefined4 *local_1c8;
  undefined1 *local_1c0;
  undefined4 *local_1b8;
  undefined1 *local_1b0;
  undefined4 *local_1a8;
  undefined1 *local_1a0;
  undefined4 *local_198;
  undefined4 *local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined4 *local_178;
  undefined4 *local_170;
  undefined4 *local_168;
  longlong *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined1 local_139;
  undefined4 local_138;
  undefined4 local_134;
  undefined1 local_130 [28];
  undefined4 local_114;
  undefined1 local_10d;
  undefined4 local_10c;
  undefined1 local_105;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  longlong local_f8;
  undefined1 local_f0 [31];
  undefined1 local_d1;
  undefined1 local_d0 [8];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined5 uStack_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_d0[0] = 0;
  local_78 = 0;
  local_98 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_7c = 0;
  uStack_90 = 0x3f800000;
  local_70 = (undefined4)DAT_14c8464e0;
  uStack_6c = DAT_14c8464e0._4_4_;
  uStack_68 = (undefined4)DAT_14c8464e8;
  uStack_64 = DAT_14c8464e8._4_4_;
  local_60 = DAT_14c8464f0;
  local_c8 = (undefined4)DAT_14c8464e0;
  uStack_c4 = DAT_14c8464e0._4_4_;
  uStack_c0 = (undefined4)DAT_14c8464e8;
  uStack_bc = DAT_14c8464e8._4_4_;
  local_b8 = DAT_14c8464f0;
  local_b0 = (undefined4)DAT_14c8464e0;
  uStack_ac = DAT_14c8464e0._4_4_;
  uStack_a8 = (undefined4)DAT_14c8464e8;
  uStack_a4 = DAT_14c8464e8._4_4_;
  local_a0 = DAT_14c8464f0;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  local_58 = 0;
  local_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d0);
  }
  local_148 = local_d0;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_148 = *(undefined1 **)(param_2 + 0x38);
  }
  local_d1 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d1);
  }
  local_150 = &local_d1;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_150 = *(undefined1 **)(param_2 + 0x38);
  }
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f0);
  }
  local_158 = local_f0;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_158 = *(undefined1 **)(param_2 + 0x38);
  }
  local_f8 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f8);
  }
  local_160 = &local_f8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    local_160 = *(longlong **)(param_2 + 0x38);
  }
  local_fc = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_fc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_fc);
  }
  local_168 = &local_fc;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    local_168 = *(undefined4 **)(param_2 + 0x38);
  }
  local_100 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_100);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_100);
  }
  local_170 = &local_100;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    local_170 = *(undefined4 **)(param_2 + 0x38);
  }
  local_104 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_104);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_104);
  }
  local_178 = &local_104;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    local_178 = *(undefined4 **)(param_2 + 0x38);
  }
  local_105 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_105);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_105);
  }
  local_180 = &local_105;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_180 = *(undefined1 **)(param_2 + 0x38);
  }
  local_10c = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_10c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_10c);
  }
  puVar7 = &local_10c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar7 = *(undefined4 **)(param_2 + 0x38);
  }
  local_10d = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_10d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_10d);
  }
  puVar6 = &local_10d;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  local_114 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_114);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_114);
  }
  puVar8 = &local_114;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar8 = *(undefined4 **)(param_2 + 0x38);
  }
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_130);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_130);
  }
  puVar4 = local_130;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_134 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_134);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_134);
  }
  puVar5 = &local_134;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar5 = *(undefined4 **)(param_2 + 0x38);
  }
  local_138 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_138);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_138);
  }
  puVar3 = &local_138;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  local_139 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_139);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_139);
  }
  plVar2 = local_160;
  local_188 = &local_139;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_188 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1c0 = local_180;
  local_1c8 = local_178;
  local_1d0 = local_170;
  local_1d8 = local_168;
  local_1b8 = puVar7;
  local_1b0 = puVar6;
  local_1a8 = puVar8;
  local_1a0 = puVar4;
  local_198 = puVar5;
  local_190 = puVar3;
  FUN_148adb7bc(local_148,local_150,local_158,local_160);
  if ((DAT_14c950c29 == '\x01') && (*plVar2 != 0)) {
    FUN_14689c22e();
  }
  if ((local_48 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad03f0 FUN_148ad03f0 body=154 status=ok
// SIG undefined FUN_148ad03f0(void)

void FUN_148ad03f0(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x9f8) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad0490 FUN_148ad0490 body=154 status=ok
// SIG undefined FUN_148ad0490(void)

void FUN_148ad0490(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x9c0) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad0530 FUN_148ad0530 body=154 status=ok
// SIG undefined FUN_148ad0530(void)

void FUN_148ad0530(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x9c1) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad05cc FUN_148ad05cc body=39 status=ok
// SIG undefined FUN_148ad05cc(void)

void FUN_148ad05cc(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148adb7a0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148ad05f4 FUN_148ad05f4 body=39 status=ok
// SIG undefined FUN_148ad05f4(void)

void FUN_148ad05f4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148adb782();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148ad0636 FUN_148ad0636 body=212 status=ok
// SIG undefined FUN_148ad0636(void)

void FUN_148ad0636(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [144];
  undefined8 local_38;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x678))(param_1,local_c8);
  memcpy(param_3,local_c8,0x90);
  *(undefined8 *)(param_3 + 0x90) = local_38;
  if (local_c8 == param_3) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_3 + 0x98) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_3 + 0x98) = local_30;
    *(undefined4 *)(param_3 + 0xa0) = local_28;
    *(undefined4 *)(param_3 + 0xa4) = local_24;
  }
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad070c FUN_148ad070c body=184 status=ok
// SIG undefined FUN_148ad070c(void)

void FUN_148ad070c(longlong param_1,longlong param_2,void *param_3)

{
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  memcpy(param_3,(void *)((longlong)local_24 * 0x88 + *(longlong *)(param_1 + 0xcb0)),0x88);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad07c6 FUN_148ad07c6 body=953 status=ok
// SIG undefined FUN_148ad07c6(void)

void FUN_148ad07c6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_268 [32];
  undefined4 local_248;
  undefined4 local_240;
  longlong *local_238;
  undefined8 local_228 [12];
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  longlong local_188 [3];
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined8 local_138 [2];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [144];
  undefined8 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_138[0] = 0;
  local_138[1] = 0;
  local_128 = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_11c = 0x3ff00000;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f4 = 0x3ff00000;
  uStack_f0 = 0;
  uStack_ec = 0x3ff00000;
  local_e8 = 0x3ff0000000000000;
  uStack_e0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_138);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_138);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_150);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_150);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_168);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_168);
  }
  local_16c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_16c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_16c);
  }
  local_170 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_170);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_170);
  }
  local_188[0] = 0;
  local_188[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_188);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_188);
  }
  local_248 = local_16c;
  local_240 = local_170;
  local_238 = local_188;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    local_238 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1a8 = local_168;
  uStack_1a0 = uStack_160;
  local_198 = local_158;
  local_1c8 = local_150;
  uStack_1c4 = uStack_14c;
  uStack_1c0 = uStack_148;
  uStack_1bc = uStack_144;
  local_1b8 = local_140;
  puVar2 = local_138;
  puVar3 = local_228;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_148adba94(local_d8);
  memcpy(param_3,local_d8,0x90);
  *(undefined8 *)(param_3 + 0x90) = local_48;
  if (local_d8 == param_3) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_3 + 0x98) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_3 + 0x98) = local_40;
    local_40 = 0;
    *(undefined4 *)(param_3 + 0xa0) = local_38;
    *(undefined4 *)(param_3 + 0xa4) = local_34;
  }
  if (local_188[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad0b80 FUN_148ad0b80 body=524 status=ok
// SIG undefined FUN_148ad0b80(void)

void FUN_148ad0b80(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_1c = 0;
  FUN_144a64e42();
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
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
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
  FUN_148adbb5a(&local_40,local_1c,local_20,local_24);
  param_3[4] = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad0da4 FUN_148ad0da4 body=1553 status=ok
// SIG undefined FUN_148ad0da4(void)

void FUN_148ad0da4(undefined8 param_1,longlong param_2,void *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined1 local_190;
  undefined4 local_188;
  undefined1 local_180;
  undefined4 local_178;
  undefined1 *local_170;
  undefined4 local_168;
  undefined4 local_160;
  undefined1 local_158;
  undefined1 local_148 [140];
  int local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [28];
  undefined4 local_94;
  int local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined1 local_70 [28];
  int local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_54 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  iVar4 = local_54;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_78 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_7c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  local_80 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_84 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  local_88 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  iVar3 = local_88;
  local_8c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  local_90 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  iVar2 = local_90;
  local_94 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_94);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_94);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b0);
  }
  puVar5 = *(undefined1 **)(param_2 + 0x38);
  local_b4 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b4);
  }
  local_b8 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  local_bc = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_bc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_bc);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_158 = local_bc != 0;
  local_170 = local_b0;
  if (puVar5 != (undefined1 *)0x0) {
    local_170 = puVar5;
  }
  puVar5 = local_70;
  if (puVar1 != (undefined1 *)0x0) {
    puVar5 = puVar1;
  }
  local_180 = iVar2 != 0;
  local_190 = iVar3 != 0;
  local_160 = local_b8;
  local_168 = local_b4;
  local_178 = local_94;
  local_188 = local_8c;
  local_198 = local_84;
  local_1a0 = local_80;
  local_1a8 = local_7c;
  FUN_148adb8c4(local_148,iVar4 != 0,puVar5,local_78);
  memcpy(param_3,local_148,0x88);
  if ((local_50 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad13bc FUN_148ad13bc body=239 status=ok
// SIG undefined FUN_148ad13bc(void)

void FUN_148ad13bc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148adc252(param_1,local_1c,local_20 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad14b2 FUN_148ad14b2 body=239 status=ok
// SIG undefined FUN_148ad14b2(void)

void FUN_148ad14b2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148adc2f0(param_1,local_1c,local_20 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad15a8 FUN_148ad15a8 body=239 status=ok
// SIG undefined FUN_148ad15a8(void)

void FUN_148ad15a8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148adc4ca(param_1,local_1c,local_20 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad169e FUN_148ad169e body=239 status=ok
// SIG undefined FUN_148ad169e(void)

void FUN_148ad169e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148adc38e(param_1,local_1c,local_20 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad1794 FUN_148ad1794 body=239 status=ok
// SIG undefined FUN_148ad1794(void)

void FUN_148ad1794(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148adc42c(param_1,local_1c,local_20 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad1884 FUN_148ad1884 body=237 status=ok
// SIG undefined FUN_148ad1884(void)

void FUN_148ad1884(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148adca60(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad1972 FUN_148ad1972 body=156 status=ok
// SIG undefined FUN_148ad1972(void)

void FUN_148ad1972(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
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
  FUN_148adc122(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad1a10 FUN_148ad1a10 body=156 status=ok
// SIG undefined FUN_148ad1a10(void)

void FUN_148ad1a10(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
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
  FUN_148adc090(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad1aae FUN_148ad1aae body=156 status=ok
// SIG undefined FUN_148ad1aae(void)

void FUN_148ad1aae(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
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
  FUN_148adbffe(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad1b4c FUN_148ad1b4c body=237 status=ok
// SIG undefined FUN_148ad1b4c(void)

void FUN_148ad1b4c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148adc9ba(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad1c3a FUN_148ad1c3a body=156 status=ok
// SIG undefined FUN_148ad1c3a(void)

void FUN_148ad1c3a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
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
  FUN_148adbf6c(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad1cd8 FUN_148ad1cd8 body=282 status=ok
// SIG undefined FUN_148ad1cd8(void)

void FUN_148ad1cd8(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_108 [32];
  undefined8 local_e8 [12];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong lStack_50;
  undefined8 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  puVar2 = &DAT_14c846480;
  puVar3 = local_e8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_78 = DAT_14c8464f0;
  local_88 = DAT_14c8464e0;
  uStack_80 = DAT_14c8464e8;
  local_60 = DAT_14c8464f0;
  local_70 = DAT_14c8464e0;
  uStack_68 = DAT_14c8464e8;
  local_58 = 0;
  lStack_50 = 0;
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_e8);
  }
  puVar2 = local_e8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x680))(param_1,puVar2);
  if (lStack_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad1df4 FUN_148ad1df4 body=592 status=ok
// SIG undefined FUN_148ad1df4(void)

void FUN_148ad1df4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_1c = 0;
  FUN_144a64e42();
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
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_30;
  local_40 = local_2c;
  local_48 = local_28;
  FUN_148adcb00(param_1,local_1c,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad2046 FUN_148ad2046 body=232 status=ok
// SIG undefined FUN_148ad2046(void)

void FUN_148ad2046(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148adc91c(param_1,local_19,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad2136 FUN_148ad2136 body=239 status=ok
// SIG undefined FUN_148ad2136(void)

void FUN_148ad2136(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148adc1b4(param_1,local_1c,local_20 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad2226 FUN_148ad2226 body=273 status=ok
// SIG undefined FUN_148ad2226(void)

void FUN_148ad2226(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
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
  local_30 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  FUN_148adbb82(param_1,local_1c,&local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad2338 FUN_148ad2338 body=236 status=ok
// SIG undefined FUN_148ad2338(void)

void FUN_148ad2338(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148adc606(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad2426 FUN_148ad2426 body=236 status=ok
// SIG undefined FUN_148ad2426(void)

void FUN_148ad2426(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148adc7e0(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad2514 FUN_148ad2514 body=236 status=ok
// SIG undefined FUN_148ad2514(void)

void FUN_148ad2514(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148adc742(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad2602 FUN_148ad2602 body=236 status=ok
// SIG undefined FUN_148ad2602(void)

void FUN_148ad2602(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148adc87e(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad26f0 FUN_148ad26f0 body=236 status=ok
// SIG undefined FUN_148ad26f0(void)

void FUN_148ad26f0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148adc568(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad27de FUN_148ad27de body=236 status=ok
// SIG undefined FUN_148ad27de(void)

void FUN_148ad27de(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148adc6a4(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad28ee FUN_148ad28ee body=75 status=ok
// SIG undefined FUN_148ad28ee(void)

void FUN_148ad28ee(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_148adb238(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad293a FUN_148ad293a body=38 status=ok
// SIG undefined FUN_148ad293a(void)

void FUN_148ad293a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148adcfa2();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148ad2968 FUN_148ad2968 body=90 status=ok
// SIG undefined FUN_148ad2968(void)

undefined8 * FUN_148ad2968(undefined8 *param_1)

{
  FUN_140c83e26();
  *param_1 = &PTR_FUN_14b516720;
  *(undefined4 *)(param_1 + 0x1b) = 5;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x41f0000043800000;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x44368000;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  return param_1;
}



// FUNCTION 148ad29c2 FUN_148ad29c2 body=992 status=ok
// SIG undefined FUN_148ad29c2(void)

void FUN_148ad29c2(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined1 auStack_118 [32];
  undefined2 *local_f8;
  undefined2 *local_f0;
  longlong local_e0;
  longlong local_d8;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined2 *local_c0;
  int local_b8;
  undefined2 *local_b0;
  int local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_148ad2da4(param_2,&local_70);
  thunk_FUN_14047a987(&local_70,&DAT_149eb775e,1);
  FUN_1474dc4fe(param_1,&local_70);
  thunk_FUN_14047a987(&local_70,&DAT_149dfbe79,1);
  local_80 = (void *)0x0;
  lVar7 = (longlong)iStack_68;
  pvVar3 = (void *)CONCAT44(uStack_6c,local_70);
  local_78 = iStack_68;
  if (lVar7 == 0) {
    local_74 = 0;
  }
  else {
    FUN_1446dd670(&local_80,iStack_68,0);
    memcpy(local_80,pvVar3,lVar7 * 2);
  }
  FUN_147906d4c(param_2,&local_80,0);
  iVar1 = *(int *)(param_1 + 0xf0);
  local_e0 = param_1;
  if ((longlong)iVar1 != 0) {
    lVar7 = *(longlong *)(param_1 + 0xe8);
    local_d8 = *(longlong *)(param_1 + 0xf8);
    lVar6 = 0;
    do {
      lVar5 = lVar7 + 4 + lVar6;
      if ((~*(uint *)(lVar7 + 0xc + lVar6) & 0x7fffffff) == 0) {
        FUN_1400021e4(lVar5,&local_a0);
        puVar8 = &DAT_149dfb77a;
        if (local_98 != 0) {
          puVar8 = local_a0;
        }
        FUN_140002266(&local_90,L" [Wheel Index : %d] Bone: %s (invalid bone)",
                      *(undefined4 *)(lVar7 + lVar6),puVar8);
        if (CONCAT44(uStack_6c,local_70) != 0) {
          FUN_1400020a8();
        }
        local_70 = (undefined4)local_90;
        uStack_6c = local_90._4_4_;
        iStack_68 = (int)uStack_88;
        uStack_64 = uStack_88._4_4_;
        local_90 = 0;
        uStack_88 = 0;
        if (local_a0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        lVar2 = *(longlong *)(local_d8 + 0x8a8);
        lVar4 = (longlong)*(int *)(lVar7 + lVar6) * 0x38;
        local_f8 = *(undefined2 **)(lVar2 + 0x30 + lVar4);
        FUN_140002266(&local_a0,L"X=%3.3f Y=%3.3f Z=%3.3f",*(undefined8 *)(lVar2 + 0x20 + lVar4),
                      *(undefined8 *)(lVar2 + 0x28 + lVar4));
        puVar8 = &DAT_149dfb77a;
        if (local_98 != 0) {
          puVar8 = local_a0;
        }
        lVar2 = *(longlong *)(local_d8 + 0x8a8);
        lVar4 = (longlong)*(int *)(lVar7 + lVar6) * 0x38;
        local_f8 = *(undefined2 **)(lVar2 + 0x18 + lVar4);
        FUN_140002266(&local_b0,L"P=%f Y=%f R=%f",*(undefined8 *)(lVar2 + 8 + lVar4),
                      *(undefined8 *)(lVar2 + 0x10 + lVar4));
        puVar10 = &DAT_149dfb77a;
        if (local_a8 != 0) {
          puVar10 = local_b0;
        }
        FUN_1400021e4(lVar5,&local_c0);
        puVar9 = &DAT_149dfb77a;
        if (local_b8 != 0) {
          puVar9 = local_c0;
        }
        local_f8 = puVar10;
        local_f0 = puVar8;
        FUN_140002266(&local_90,
                      L" [Wheel Index : %d] Bone: %s , Rotation Offset : %s, Location Offset : %s",
                      *(undefined4 *)(lVar7 + lVar6),puVar9);
        if (CONCAT44(uStack_6c,local_70) != 0) {
          FUN_1400020a8();
        }
        local_70 = (undefined4)local_90;
        uStack_6c = local_90._4_4_;
        iStack_68 = (int)uStack_88;
        uStack_64 = uStack_88._4_4_;
        local_90 = 0;
        uStack_88 = 0;
        if (local_c0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_b0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_a0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      local_d0 = (void *)0x0;
      lVar5 = (longlong)iStack_68;
      pvVar3 = (void *)CONCAT44(uStack_6c,local_70);
      local_c8 = iStack_68;
      if (lVar5 == 0) {
        local_c4 = 0;
      }
      else {
        FUN_1446dd670(&local_d0,iStack_68,0);
        memcpy(local_d0,pvVar3,lVar5 * 2);
      }
      FUN_147906d4c(param_2,&local_d0,0);
      lVar6 = lVar6 + 0x14;
    } while ((longlong)iVar1 * 0x14 != lVar6);
  }
  FUN_147906d38(local_e0 + 0x18,param_2);
  if (CONCAT44(uStack_6c,local_70) != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ad2da4 FUN_148ad2da4 body=208 status=ok
// SIG undefined FUN_148ad2da4(void)

undefined8 FUN_148ad2da4(float *param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = &DAT_149dfb77a;
  if (param_1[8] != 0.0) {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  lVar2 = FUN_14658b650();
  local_48 = *(undefined8 *)(lVar2 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar3 = local_58;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad2ede FUN_148ad2ede body=1639 status=ok
// SIG undefined FUN_148ad2ede(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148ad2ede(longlong param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  undefined8 *puVar22;
  longlong lVar23;
  undefined8 *puVar24;
  int iVar25;
  undefined8 *puVar26;
  bool bVar27;
  float fVar28;
  undefined1 auStack_388 [32];
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  lVar4 = *(longlong *)(param_1 + 0xf8);
  uVar20 = *(uint *)(lVar4 + 0x8b0);
  uVar16 = (ulonglong)uVar20;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar16);
  }
  plVar9 = (longlong *)(param_1 + 0xe8);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(uint *)(param_1 + 0xf4) != uVar20) {
    FUN_148ad78d2(plVar9);
  }
  if (uVar16 != 0) {
    lVar23 = 0;
    uVar12 = 0;
    do {
      iVar19 = *(int *)(param_1 + 0xf0);
      *(uint *)(param_1 + 0xf0) = iVar19 + 1U;
      if (*(uint *)(param_1 + 0xf4) < iVar19 + 1U) {
        FUN_148ad7942(plVar9,iVar19);
      }
      puVar2 = (undefined4 *)(*plVar9 + (longlong)iVar19 * 0x14);
      *(undefined8 *)(puVar2 + 1) = 0;
      *(undefined8 *)(puVar2 + 3) = 0xffffffff7fffffff;
      *puVar2 = (int)uVar12;
      *(undefined8 *)(puVar2 + 1) = *(undefined8 *)(*(longlong *)(lVar4 + 0x8a8) + lVar23);
      FUN_14019c9f2();
      uVar12 = uVar12 + 1;
      lVar23 = lVar23 + 0x38;
    } while (uVar16 != uVar12);
  }
  iVar19 = *(int *)(param_1 + 0xf0);
  if (1 < (longlong)iVar19) {
    lVar4 = *plVar9;
    memset(local_358,0,0x2f0);
    local_360 = lVar4 + (longlong)iVar19 * 0x14 + -0x14;
    local_368 = lVar4;
    fVar28 = logf((float)iVar19);
    local_358[0] = (int)(longlong)(fVar28 + fVar28);
    plVar9 = &local_368;
    do {
      puVar10 = (undefined8 *)*plVar9;
      puVar14 = (undefined8 *)plVar9[1];
      iVar19 = (int)plVar9[2];
      iVar25 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar10) >> 2) * -0x33333333;
      uVar20 = iVar25 + 1;
      puVar15 = puVar10;
      puVar11 = puVar10;
      puVar17 = puVar14;
      if (iVar19 != 0) {
LAB_148ad3042:
        if (8 < (int)uVar20) {
          uVar16 = (ulonglong)(uVar20 >> 1);
          uVar3 = *(undefined4 *)((longlong)puVar11 + uVar16 * 0x14 + 0x10);
          puVar10 = (undefined8 *)((longlong)puVar11 + uVar16 * 0x14);
          uVar5 = *puVar10;
          uVar6 = puVar10[1];
          *(undefined4 *)((longlong)puVar11 + uVar16 * 0x14 + 0x10) = *(undefined4 *)(puVar11 + 2);
          uVar7 = puVar11[1];
          puVar10 = (undefined8 *)((longlong)puVar11 + uVar16 * 0x14);
          *puVar10 = *puVar11;
          puVar10[1] = uVar7;
          *(undefined4 *)(puVar11 + 2) = uVar3;
          *puVar11 = uVar5;
          puVar11[1] = uVar6;
          puVar26 = (undefined8 *)((longlong)puVar17 + 0x14);
          puVar10 = puVar11;
          do {
            puVar8 = (undefined8 *)((longlong)puVar10 + 0x14);
            puVar18 = (undefined8 *)((longlong)puVar10 + 0x14);
            do {
              puVar10 = puVar18;
              puVar24 = puVar8;
              if (puVar17 < puVar10) break;
              puVar8 = (undefined8 *)((longlong)puVar24 + 0x14);
              puVar18 = (undefined8 *)((longlong)puVar10 + 0x14);
            } while (*(int *)((longlong)puVar10 + 0xc) * 2 <= *(int *)((longlong)puVar11 + 0xc) * 2)
            ;
            puVar8 = puVar26 + -5;
            do {
              puVar18 = puVar26;
              puVar22 = puVar8;
              puVar26 = (undefined8 *)((longlong)puVar18 + -0x14);
              if (puVar26 <= puVar11) break;
              puVar8 = (undefined8 *)((longlong)puVar22 + -0x14);
            } while (*(int *)((longlong)puVar11 + 0xc) * 2 <= *(int *)(puVar18 + -1) * 2);
            if (puVar26 < puVar10) goto LAB_148ad3140;
            uVar3 = *(undefined4 *)(puVar10 + 2);
            uVar5 = *puVar10;
            uVar6 = puVar10[1];
            *(undefined4 *)(puVar10 + 2) = *(undefined4 *)((longlong)puVar18 + -4);
            uVar7 = *(undefined8 *)((longlong)puVar18 + -0xc);
            *puVar10 = *puVar26;
            puVar10[1] = uVar7;
            *(undefined4 *)((longlong)puVar18 + -4) = uVar3;
            *puVar26 = uVar5;
            *(undefined8 *)((longlong)puVar18 + -0xc) = uVar6;
          } while( true );
        }
        for (; puVar10 = puVar11, puVar14 = puVar11, puVar11 < puVar17;
            puVar17 = (undefined8 *)((longlong)puVar17 + -0x14)) {
          while (puVar15 = puVar10, puVar10 = (undefined8 *)((longlong)puVar14 + 0x14),
                puVar10 <= puVar17) {
            piVar1 = (int *)(puVar14 + 4);
            puVar14 = puVar10;
            if (*piVar1 * 2 <= *(int *)((longlong)puVar15 + 0xc) * 2) {
              puVar10 = puVar15;
            }
          }
          local_58 = *(undefined4 *)(puVar15 + 2);
          local_68 = *puVar15;
          uStack_60 = puVar15[1];
          uVar6 = local_68;
          uVar7 = uStack_60;
          *(undefined4 *)(puVar15 + 2) = *(undefined4 *)(puVar17 + 2);
          uVar5 = puVar17[1];
          *puVar15 = *puVar17;
          puVar15[1] = uVar5;
          *(undefined4 *)(puVar17 + 2) = local_58;
          local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
          *(undefined4 *)puVar17 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar17 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar17 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar17 + 0xc) = uStack_60._4_4_;
          local_68 = uVar6;
          uStack_60 = uVar7;
        }
        goto LAB_148ad34f4;
      }
LAB_148ad320f:
      if (uVar20 != 0) {
        iVar19 = (iVar25 - (iVar25 + -1 >> 0x1f)) + -1 >> 1;
        iVar25 = iVar19;
joined_r0x000148ad3236:
        do {
          iVar21 = iVar19 * 2 + 1;
          if (iVar21 < (int)uVar20) {
            iVar13 = iVar19 * 2 + 2;
            if ((iVar13 < (int)uVar20) &&
               (*(int *)((longlong)puVar10 + (longlong)iVar21 * 0x14 + 0xc) * 2 <=
                *(int *)((longlong)puVar10 + (longlong)iVar13 * 0x14 + 0xc) * 2)) {
              iVar21 = iVar13;
            }
            if (*(int *)((longlong)puVar10 + (longlong)iVar19 * 0x14 + 0xc) * 2 <
                *(int *)((longlong)puVar10 + (longlong)iVar21 * 0x14 + 0xc) * 2) {
              puVar17 = (undefined8 *)((longlong)puVar10 + (longlong)iVar19 * 0x14);
              puVar14 = (undefined8 *)((longlong)puVar10 + (longlong)iVar21 * 0x14);
              local_58 = *(undefined4 *)(puVar17 + 2);
              local_68 = *puVar17;
              uStack_60 = puVar17[1];
              uVar6 = local_68;
              uVar7 = uStack_60;
              *(undefined4 *)(puVar17 + 2) = *(undefined4 *)(puVar14 + 2);
              uVar5 = puVar14[1];
              *puVar17 = *puVar14;
              puVar17[1] = uVar5;
              *(undefined4 *)(puVar14 + 2) = local_58;
              local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
              uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
              *(undefined4 *)puVar14 = (undefined4)local_68;
              *(undefined4 *)((longlong)puVar14 + 4) = local_68._4_4_;
              *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_60;
              *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_60._4_4_;
              iVar19 = iVar21;
              local_68 = uVar6;
              uStack_60 = uVar7;
              goto joined_r0x000148ad3236;
            }
          }
          bVar27 = iVar25 != 0;
          iVar19 = iVar25 + -1;
          iVar25 = iVar19;
        } while (bVar27);
        if (1 < (int)uVar20) {
          uVar16 = (ulonglong)uVar20 - 1;
          local_58 = *(undefined4 *)(puVar10 + 2);
          local_68 = *puVar10;
          uStack_60 = puVar10[1];
          uVar6 = local_68;
          uVar7 = uStack_60;
          *(undefined4 *)(puVar10 + 2) = *(undefined4 *)((longlong)puVar10 + uVar16 * 0x14 + 0x10);
          puVar17 = (undefined8 *)((longlong)puVar10 + uVar16 * 0x14);
          uVar5 = puVar17[1];
          *puVar10 = *puVar17;
          puVar10[1] = uVar5;
          *(undefined4 *)((longlong)puVar10 + uVar16 * 0x14 + 0x10) = local_58;
          local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
          puVar2 = (undefined4 *)((longlong)puVar10 + uVar16 * 0x14);
          *puVar2 = (undefined4)local_68;
          puVar2[1] = local_68._4_4_;
          puVar2[2] = (undefined4)uStack_60;
          puVar2[3] = uStack_60._4_4_;
          local_68 = uVar6;
          uStack_60 = uVar7;
          if (uVar20 != 2) {
            do {
              iVar19 = 0;
              iVar21 = 1;
              iVar25 = 0;
              do {
                iVar19 = iVar19 + 2;
                iVar13 = iVar21;
                if (((longlong)iVar19 < (longlong)uVar16) &&
                   (*(int *)((longlong)puVar10 + (longlong)iVar21 * 0x14 + 0xc) * 2 <=
                    *(int *)((longlong)puVar10 + (longlong)iVar19 * 0x14 + 0xc) * 2)) {
                  iVar13 = iVar19;
                }
                if (*(int *)((longlong)puVar10 + (longlong)iVar13 * 0x14 + 0xc) * 2 <=
                    *(int *)((longlong)puVar10 + (longlong)iVar25 * 0x14 + 0xc) * 2) break;
                puVar17 = (undefined8 *)((longlong)puVar10 + (longlong)iVar25 * 0x14);
                puVar14 = (undefined8 *)((longlong)puVar10 + (longlong)iVar13 * 0x14);
                uVar3 = *(undefined4 *)(puVar17 + 2);
                uVar5 = *puVar17;
                uVar6 = puVar17[1];
                *(undefined4 *)(puVar17 + 2) = *(undefined4 *)(puVar14 + 2);
                uVar7 = puVar14[1];
                *puVar17 = *puVar14;
                puVar17[1] = uVar7;
                *(undefined4 *)(puVar14 + 2) = uVar3;
                *puVar14 = uVar5;
                puVar14[1] = uVar6;
                iVar19 = iVar13 * 2;
                iVar21 = iVar13 * 2 + 1;
                iVar25 = iVar13;
              } while ((longlong)iVar21 < (longlong)uVar16);
              uVar12 = uVar16 - 1;
              local_58 = *(undefined4 *)(puVar10 + 2);
              local_68 = *puVar10;
              uStack_60 = puVar10[1];
              uVar6 = local_68;
              uVar7 = uStack_60;
              *(undefined4 *)(puVar10 + 2) =
                   *(undefined4 *)((longlong)puVar10 + uVar12 * 0x14 + 0x10);
              puVar17 = (undefined8 *)((longlong)puVar10 + uVar12 * 0x14);
              uVar5 = puVar17[1];
              *puVar10 = *puVar17;
              puVar10[1] = uVar5;
              *(undefined4 *)((longlong)puVar10 + uVar12 * 0x14 + 0x10) = local_58;
              local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
              uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
              puVar2 = (undefined4 *)((longlong)puVar10 + uVar12 * 0x14);
              *puVar2 = (undefined4)local_68;
              puVar2[1] = local_68._4_4_;
              puVar2[2] = (undefined4)uStack_60;
              puVar2[3] = uStack_60._4_4_;
              bVar27 = 2 < uVar16;
              uVar16 = uVar12;
              local_68 = uVar6;
              uStack_60 = uVar7;
            } while (bVar27);
          }
        }
      }
LAB_148ad34f4:
      plVar9 = plVar9 + -3;
    } while (&local_368 <= plVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_148ad3140:
  local_58 = *(undefined4 *)(puVar11 + 2);
  local_68 = *puVar11;
  uStack_60 = puVar11[1];
  uVar6 = local_68;
  uVar7 = uStack_60;
  *(undefined4 *)(puVar11 + 2) = *(undefined4 *)((longlong)puVar18 + -4);
  uVar5 = *(undefined8 *)((longlong)puVar18 + -0xc);
  *puVar11 = *puVar26;
  puVar11[1] = uVar5;
  *(undefined4 *)((longlong)puVar18 + -4) = local_58;
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  *(undefined4 *)puVar26 = (undefined4)local_68;
  *(undefined4 *)(puVar18 + -2) = local_68._4_4_;
  *(undefined4 *)((longlong)puVar18 + -0xc) = (undefined4)uStack_60;
  *(undefined4 *)(puVar18 + -1) = uStack_60._4_4_;
  iVar19 = iVar19 + -1;
  puVar18 = puVar18 + -5;
  local_68 = uVar6;
  uStack_60 = uVar7;
  if ((longlong)puVar22 - (longlong)puVar15 < (longlong)puVar14 - (longlong)puVar24) {
    if (puVar10 < puVar17) {
      *plVar9 = (longlong)puVar10;
      plVar9[1] = (longlong)puVar17;
      *(int *)(plVar9 + 2) = iVar19;
      plVar9 = plVar9 + 3;
    }
    puVar10 = puVar11;
    puVar14 = puVar22;
    if (puVar26 <= (undefined8 *)((longlong)puVar11 + 0x14U)) goto LAB_148ad34f4;
  }
  else {
    if ((undefined8 *)((longlong)puVar11 + 0x14U) < puVar26) {
      *plVar9 = (longlong)puVar11;
      plVar9[1] = (longlong)puVar18;
      *(int *)(plVar9 + 2) = iVar19;
      plVar9 = plVar9 + 3;
    }
    puVar11 = puVar24;
    puVar18 = puVar17;
    puVar14 = puVar17;
    if (puVar17 <= puVar10) goto LAB_148ad34f4;
  }
  iVar25 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar11) >> 2) * -0x33333333;
  uVar20 = iVar25 + 1;
  puVar15 = puVar11;
  puVar11 = puVar10;
  puVar17 = puVar18;
  if (iVar19 == 0) goto LAB_148ad320f;
  goto LAB_148ad3042;
}



// FUNCTION 148ad3582 FUN_148ad3582 body=53 status=ok
// SIG undefined FUN_148ad3582(void)

undefined8 * FUN_148ad3582(undefined8 *param_1)

{
  FUN_140c83e26();
  *param_1 = &PTR_FUN_14b5169b0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  return param_1;
}



// FUNCTION 148ad35b8 FUN_148ad35b8 body=992 status=ok
// SIG undefined FUN_148ad35b8(void)

void FUN_148ad35b8(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined1 auStack_118 [32];
  undefined2 *local_f8;
  undefined2 *local_f0;
  longlong local_e0;
  longlong local_d8;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined2 *local_c0;
  int local_b8;
  undefined2 *local_b0;
  int local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_148ad399a(param_2,&local_70);
  thunk_FUN_14047a987(&local_70,&DAT_149eb775e,1);
  FUN_1474dc4fe(param_1,&local_70);
  thunk_FUN_14047a987(&local_70,&DAT_149dfbe79,1);
  local_80 = (void *)0x0;
  lVar7 = (longlong)iStack_68;
  pvVar3 = (void *)CONCAT44(uStack_6c,local_70);
  local_78 = iStack_68;
  if (lVar7 == 0) {
    local_74 = 0;
  }
  else {
    FUN_1446dd670(&local_80,iStack_68,0);
    memcpy(local_80,pvVar3,lVar7 * 2);
  }
  FUN_147906d4c(param_2,&local_80,0);
  iVar1 = *(int *)(param_1 + 0xe0);
  local_e0 = param_1;
  if ((longlong)iVar1 != 0) {
    lVar7 = *(longlong *)(param_1 + 0xd8);
    local_d8 = *(longlong *)(param_1 + 0xe8);
    lVar6 = 0;
    do {
      lVar5 = lVar7 + 4 + lVar6;
      if ((~*(uint *)(lVar7 + 0xc + lVar6) & 0x7fffffff) == 0) {
        FUN_1400021e4(lVar5,&local_a0);
        puVar8 = &DAT_149dfb77a;
        if (local_98 != 0) {
          puVar8 = local_a0;
        }
        FUN_140002266(&local_90,L" [Wheel Index : %d] Bone: %s (invalid bone)",
                      *(undefined4 *)(lVar7 + lVar6),puVar8);
        if (CONCAT44(uStack_6c,local_70) != 0) {
          FUN_1400020a8();
        }
        local_70 = (undefined4)local_90;
        uStack_6c = local_90._4_4_;
        iStack_68 = (int)uStack_88;
        uStack_64 = uStack_88._4_4_;
        local_90 = 0;
        uStack_88 = 0;
        if (local_a0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        lVar2 = *(longlong *)(local_d8 + 0x8a8);
        lVar4 = (longlong)*(int *)(lVar7 + lVar6) * 0x38;
        local_f8 = *(undefined2 **)(lVar2 + 0x30 + lVar4);
        FUN_140002266(&local_a0,L"X=%3.3f Y=%3.3f Z=%3.3f",*(undefined8 *)(lVar2 + 0x20 + lVar4),
                      *(undefined8 *)(lVar2 + 0x28 + lVar4));
        puVar8 = &DAT_149dfb77a;
        if (local_98 != 0) {
          puVar8 = local_a0;
        }
        lVar2 = *(longlong *)(local_d8 + 0x8a8);
        lVar4 = (longlong)*(int *)(lVar7 + lVar6) * 0x38;
        local_f8 = *(undefined2 **)(lVar2 + 0x18 + lVar4);
        FUN_140002266(&local_b0,L"P=%f Y=%f R=%f",*(undefined8 *)(lVar2 + 8 + lVar4),
                      *(undefined8 *)(lVar2 + 0x10 + lVar4));
        puVar10 = &DAT_149dfb77a;
        if (local_a8 != 0) {
          puVar10 = local_b0;
        }
        FUN_1400021e4(lVar5,&local_c0);
        puVar9 = &DAT_149dfb77a;
        if (local_b8 != 0) {
          puVar9 = local_c0;
        }
        local_f8 = puVar10;
        local_f0 = puVar8;
        FUN_140002266(&local_90,
                      L" [Wheel Index : %d] Bone: %s , Rotation Offset : %s, Location Offset : %s",
                      *(undefined4 *)(lVar7 + lVar6),puVar9);
        if (CONCAT44(uStack_6c,local_70) != 0) {
          FUN_1400020a8();
        }
        local_70 = (undefined4)local_90;
        uStack_6c = local_90._4_4_;
        iStack_68 = (int)uStack_88;
        uStack_64 = uStack_88._4_4_;
        local_90 = 0;
        uStack_88 = 0;
        if (local_c0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_b0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_a0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      local_d0 = (void *)0x0;
      lVar5 = (longlong)iStack_68;
      pvVar3 = (void *)CONCAT44(uStack_6c,local_70);
      local_c8 = iStack_68;
      if (lVar5 == 0) {
        local_c4 = 0;
      }
      else {
        FUN_1446dd670(&local_d0,iStack_68,0);
        memcpy(local_d0,pvVar3,lVar5 * 2);
      }
      FUN_147906d4c(param_2,&local_d0,0);
      lVar6 = lVar6 + 0x14;
    } while ((longlong)iVar1 * 0x14 != lVar6);
  }
  FUN_147906d38(local_e0 + 0x18,param_2);
  if (CONCAT44(uStack_6c,local_70) != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ad399a FUN_148ad399a body=208 status=ok
// SIG undefined FUN_148ad399a(void)

undefined8 FUN_148ad399a(float *param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = &DAT_149dfb77a;
  if (param_1[8] != 0.0) {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  lVar2 = FUN_14658b6e2();
  local_48 = *(undefined8 *)(lVar2 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar3 = local_58;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad3ad4 FUN_148ad3ad4 body=1639 status=ok
// SIG undefined FUN_148ad3ad4(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148ad3ad4(longlong param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  undefined8 *puVar22;
  longlong lVar23;
  undefined8 *puVar24;
  int iVar25;
  undefined8 *puVar26;
  bool bVar27;
  float fVar28;
  undefined1 auStack_388 [32];
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  lVar4 = *(longlong *)(param_1 + 0xe8);
  uVar20 = *(uint *)(lVar4 + 0x8b0);
  uVar16 = (ulonglong)uVar20;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar16);
  }
  plVar9 = (longlong *)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(uint *)(param_1 + 0xe4) != uVar20) {
    FUN_148ad79d6(plVar9);
  }
  if (uVar16 != 0) {
    lVar23 = 0;
    uVar12 = 0;
    do {
      iVar19 = *(int *)(param_1 + 0xe0);
      *(uint *)(param_1 + 0xe0) = iVar19 + 1U;
      if (*(uint *)(param_1 + 0xe4) < iVar19 + 1U) {
        FUN_148ad7a46(plVar9,iVar19);
      }
      puVar2 = (undefined4 *)(*plVar9 + (longlong)iVar19 * 0x14);
      *(undefined8 *)(puVar2 + 1) = 0;
      *(undefined8 *)(puVar2 + 3) = 0xffffffff7fffffff;
      *puVar2 = (int)uVar12;
      *(undefined8 *)(puVar2 + 1) = *(undefined8 *)(*(longlong *)(lVar4 + 0x8a8) + lVar23);
      FUN_14019c9f2();
      uVar12 = uVar12 + 1;
      lVar23 = lVar23 + 0x38;
    } while (uVar16 != uVar12);
  }
  iVar19 = *(int *)(param_1 + 0xe0);
  if (1 < (longlong)iVar19) {
    lVar4 = *plVar9;
    memset(local_358,0,0x2f0);
    local_360 = lVar4 + (longlong)iVar19 * 0x14 + -0x14;
    local_368 = lVar4;
    fVar28 = logf((float)iVar19);
    local_358[0] = (int)(longlong)(fVar28 + fVar28);
    plVar9 = &local_368;
    do {
      puVar10 = (undefined8 *)*plVar9;
      puVar14 = (undefined8 *)plVar9[1];
      iVar19 = (int)plVar9[2];
      iVar25 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar10) >> 2) * -0x33333333;
      uVar20 = iVar25 + 1;
      puVar15 = puVar10;
      puVar11 = puVar10;
      puVar17 = puVar14;
      if (iVar19 != 0) {
LAB_148ad3c38:
        if (8 < (int)uVar20) {
          uVar16 = (ulonglong)(uVar20 >> 1);
          uVar3 = *(undefined4 *)((longlong)puVar11 + uVar16 * 0x14 + 0x10);
          puVar10 = (undefined8 *)((longlong)puVar11 + uVar16 * 0x14);
          uVar5 = *puVar10;
          uVar6 = puVar10[1];
          *(undefined4 *)((longlong)puVar11 + uVar16 * 0x14 + 0x10) = *(undefined4 *)(puVar11 + 2);
          uVar7 = puVar11[1];
          puVar10 = (undefined8 *)((longlong)puVar11 + uVar16 * 0x14);
          *puVar10 = *puVar11;
          puVar10[1] = uVar7;
          *(undefined4 *)(puVar11 + 2) = uVar3;
          *puVar11 = uVar5;
          puVar11[1] = uVar6;
          puVar26 = (undefined8 *)((longlong)puVar17 + 0x14);
          puVar10 = puVar11;
          do {
            puVar8 = (undefined8 *)((longlong)puVar10 + 0x14);
            puVar18 = (undefined8 *)((longlong)puVar10 + 0x14);
            do {
              puVar10 = puVar18;
              puVar24 = puVar8;
              if (puVar17 < puVar10) break;
              puVar8 = (undefined8 *)((longlong)puVar24 + 0x14);
              puVar18 = (undefined8 *)((longlong)puVar10 + 0x14);
            } while (*(int *)((longlong)puVar10 + 0xc) * 2 <= *(int *)((longlong)puVar11 + 0xc) * 2)
            ;
            puVar8 = puVar26 + -5;
            do {
              puVar18 = puVar26;
              puVar22 = puVar8;
              puVar26 = (undefined8 *)((longlong)puVar18 + -0x14);
              if (puVar26 <= puVar11) break;
              puVar8 = (undefined8 *)((longlong)puVar22 + -0x14);
            } while (*(int *)((longlong)puVar11 + 0xc) * 2 <= *(int *)(puVar18 + -1) * 2);
            if (puVar26 < puVar10) goto LAB_148ad3d36;
            uVar3 = *(undefined4 *)(puVar10 + 2);
            uVar5 = *puVar10;
            uVar6 = puVar10[1];
            *(undefined4 *)(puVar10 + 2) = *(undefined4 *)((longlong)puVar18 + -4);
            uVar7 = *(undefined8 *)((longlong)puVar18 + -0xc);
            *puVar10 = *puVar26;
            puVar10[1] = uVar7;
            *(undefined4 *)((longlong)puVar18 + -4) = uVar3;
            *puVar26 = uVar5;
            *(undefined8 *)((longlong)puVar18 + -0xc) = uVar6;
          } while( true );
        }
        for (; puVar10 = puVar11, puVar14 = puVar11, puVar11 < puVar17;
            puVar17 = (undefined8 *)((longlong)puVar17 + -0x14)) {
          while (puVar15 = puVar10, puVar10 = (undefined8 *)((longlong)puVar14 + 0x14),
                puVar10 <= puVar17) {
            piVar1 = (int *)(puVar14 + 4);
            puVar14 = puVar10;
            if (*piVar1 * 2 <= *(int *)((longlong)puVar15 + 0xc) * 2) {
              puVar10 = puVar15;
            }
          }
          local_58 = *(undefined4 *)(puVar15 + 2);
          local_68 = *puVar15;
          uStack_60 = puVar15[1];
          uVar6 = local_68;
          uVar7 = uStack_60;
          *(undefined4 *)(puVar15 + 2) = *(undefined4 *)(puVar17 + 2);
          uVar5 = puVar17[1];
          *puVar15 = *puVar17;
          puVar15[1] = uVar5;
          *(undefined4 *)(puVar17 + 2) = local_58;
          local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
          *(undefined4 *)puVar17 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar17 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar17 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar17 + 0xc) = uStack_60._4_4_;
          local_68 = uVar6;
          uStack_60 = uVar7;
        }
        goto LAB_148ad40ea;
      }
LAB_148ad3e05:
      if (uVar20 != 0) {
        iVar19 = (iVar25 - (iVar25 + -1 >> 0x1f)) + -1 >> 1;
        iVar25 = iVar19;
joined_r0x000148ad3e2c:
        do {
          iVar21 = iVar19 * 2 + 1;
          if (iVar21 < (int)uVar20) {
            iVar13 = iVar19 * 2 + 2;
            if ((iVar13 < (int)uVar20) &&
               (*(int *)((longlong)puVar10 + (longlong)iVar21 * 0x14 + 0xc) * 2 <=
                *(int *)((longlong)puVar10 + (longlong)iVar13 * 0x14 + 0xc) * 2)) {
              iVar21 = iVar13;
            }
            if (*(int *)((longlong)puVar10 + (longlong)iVar19 * 0x14 + 0xc) * 2 <
                *(int *)((longlong)puVar10 + (longlong)iVar21 * 0x14 + 0xc) * 2) {
              puVar17 = (undefined8 *)((longlong)puVar10 + (longlong)iVar19 * 0x14);
              puVar14 = (undefined8 *)((longlong)puVar10 + (longlong)iVar21 * 0x14);
              local_58 = *(undefined4 *)(puVar17 + 2);
              local_68 = *puVar17;
              uStack_60 = puVar17[1];
              uVar6 = local_68;
              uVar7 = uStack_60;
              *(undefined4 *)(puVar17 + 2) = *(undefined4 *)(puVar14 + 2);
              uVar5 = puVar14[1];
              *puVar17 = *puVar14;
              puVar17[1] = uVar5;
              *(undefined4 *)(puVar14 + 2) = local_58;
              local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
              uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
              *(undefined4 *)puVar14 = (undefined4)local_68;
              *(undefined4 *)((longlong)puVar14 + 4) = local_68._4_4_;
              *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_60;
              *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_60._4_4_;
              iVar19 = iVar21;
              local_68 = uVar6;
              uStack_60 = uVar7;
              goto joined_r0x000148ad3e2c;
            }
          }
          bVar27 = iVar25 != 0;
          iVar19 = iVar25 + -1;
          iVar25 = iVar19;
        } while (bVar27);
        if (1 < (int)uVar20) {
          uVar16 = (ulonglong)uVar20 - 1;
          local_58 = *(undefined4 *)(puVar10 + 2);
          local_68 = *puVar10;
          uStack_60 = puVar10[1];
          uVar6 = local_68;
          uVar7 = uStack_60;
          *(undefined4 *)(puVar10 + 2) = *(undefined4 *)((longlong)puVar10 + uVar16 * 0x14 + 0x10);
          puVar17 = (undefined8 *)((longlong)puVar10 + uVar16 * 0x14);
          uVar5 = puVar17[1];
          *puVar10 = *puVar17;
          puVar10[1] = uVar5;
          *(undefined4 *)((longlong)puVar10 + uVar16 * 0x14 + 0x10) = local_58;
          local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
          puVar2 = (undefined4 *)((longlong)puVar10 + uVar16 * 0x14);
          *puVar2 = (undefined4)local_68;
          puVar2[1] = local_68._4_4_;
          puVar2[2] = (undefined4)uStack_60;
          puVar2[3] = uStack_60._4_4_;
          local_68 = uVar6;
          uStack_60 = uVar7;
          if (uVar20 != 2) {
            do {
              iVar19 = 0;
              iVar21 = 1;
              iVar25 = 0;
              do {
                iVar19 = iVar19 + 2;
                iVar13 = iVar21;
                if (((longlong)iVar19 < (longlong)uVar16) &&
                   (*(int *)((longlong)puVar10 + (longlong)iVar21 * 0x14 + 0xc) * 2 <=
                    *(int *)((longlong)puVar10 + (longlong)iVar19 * 0x14 + 0xc) * 2)) {
                  iVar13 = iVar19;
                }
                if (*(int *)((longlong)puVar10 + (longlong)iVar13 * 0x14 + 0xc) * 2 <=
                    *(int *)((longlong)puVar10 + (longlong)iVar25 * 0x14 + 0xc) * 2) break;
                puVar17 = (undefined8 *)((longlong)puVar10 + (longlong)iVar25 * 0x14);
                puVar14 = (undefined8 *)((longlong)puVar10 + (longlong)iVar13 * 0x14);
                uVar3 = *(undefined4 *)(puVar17 + 2);
                uVar5 = *puVar17;
                uVar6 = puVar17[1];
                *(undefined4 *)(puVar17 + 2) = *(undefined4 *)(puVar14 + 2);
                uVar7 = puVar14[1];
                *puVar17 = *puVar14;
                puVar17[1] = uVar7;
                *(undefined4 *)(puVar14 + 2) = uVar3;
                *puVar14 = uVar5;
                puVar14[1] = uVar6;
                iVar19 = iVar13 * 2;
                iVar21 = iVar13 * 2 + 1;
                iVar25 = iVar13;
              } while ((longlong)iVar21 < (longlong)uVar16);
              uVar12 = uVar16 - 1;
              local_58 = *(undefined4 *)(puVar10 + 2);
              local_68 = *puVar10;
              uStack_60 = puVar10[1];
              uVar6 = local_68;
              uVar7 = uStack_60;
              *(undefined4 *)(puVar10 + 2) =
                   *(undefined4 *)((longlong)puVar10 + uVar12 * 0x14 + 0x10);
              puVar17 = (undefined8 *)((longlong)puVar10 + uVar12 * 0x14);
              uVar5 = puVar17[1];
              *puVar10 = *puVar17;
              puVar10[1] = uVar5;
              *(undefined4 *)((longlong)puVar10 + uVar12 * 0x14 + 0x10) = local_58;
              local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
              uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
              puVar2 = (undefined4 *)((longlong)puVar10 + uVar12 * 0x14);
              *puVar2 = (undefined4)local_68;
              puVar2[1] = local_68._4_4_;
              puVar2[2] = (undefined4)uStack_60;
              puVar2[3] = uStack_60._4_4_;
              bVar27 = 2 < uVar16;
              uVar16 = uVar12;
              local_68 = uVar6;
              uStack_60 = uVar7;
            } while (bVar27);
          }
        }
      }
LAB_148ad40ea:
      plVar9 = plVar9 + -3;
    } while (&local_368 <= plVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_148ad3d36:
  local_58 = *(undefined4 *)(puVar11 + 2);
  local_68 = *puVar11;
  uStack_60 = puVar11[1];
  uVar6 = local_68;
  uVar7 = uStack_60;
  *(undefined4 *)(puVar11 + 2) = *(undefined4 *)((longlong)puVar18 + -4);
  uVar5 = *(undefined8 *)((longlong)puVar18 + -0xc);
  *puVar11 = *puVar26;
  puVar11[1] = uVar5;
  *(undefined4 *)((longlong)puVar18 + -4) = local_58;
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  *(undefined4 *)puVar26 = (undefined4)local_68;
  *(undefined4 *)(puVar18 + -2) = local_68._4_4_;
  *(undefined4 *)((longlong)puVar18 + -0xc) = (undefined4)uStack_60;
  *(undefined4 *)(puVar18 + -1) = uStack_60._4_4_;
  iVar19 = iVar19 + -1;
  puVar18 = puVar18 + -5;
  local_68 = uVar6;
  uStack_60 = uVar7;
  if ((longlong)puVar22 - (longlong)puVar15 < (longlong)puVar14 - (longlong)puVar24) {
    if (puVar10 < puVar17) {
      *plVar9 = (longlong)puVar10;
      plVar9[1] = (longlong)puVar17;
      *(int *)(plVar9 + 2) = iVar19;
      plVar9 = plVar9 + 3;
    }
    puVar10 = puVar11;
    puVar14 = puVar22;
    if (puVar26 <= (undefined8 *)((longlong)puVar11 + 0x14U)) goto LAB_148ad40ea;
  }
  else {
    if ((undefined8 *)((longlong)puVar11 + 0x14U) < puVar26) {
      *plVar9 = (longlong)puVar11;
      plVar9[1] = (longlong)puVar18;
      *(int *)(plVar9 + 2) = iVar19;
      plVar9 = plVar9 + 3;
    }
    puVar11 = puVar24;
    puVar18 = puVar17;
    puVar14 = puVar17;
    if (puVar17 <= puVar10) goto LAB_148ad40ea;
  }
  iVar25 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar11) >> 2) * -0x33333333;
  uVar20 = iVar25 + 1;
  puVar15 = puVar11;
  puVar11 = puVar10;
  puVar17 = puVar18;
  if (iVar19 == 0) goto LAB_148ad3e05;
  goto LAB_148ad3c38;
}



// FUNCTION 148ad413e FUN_148ad413e body=34 status=ok
// SIG undefined FUN_148ad413e(void)

void FUN_148ad413e(longlong param_1,undefined8 *param_2)

{
  FUN_141798948();
  *(undefined8 *)(param_1 + 0xe8) = *param_2;
  return;
}



// FUNCTION 148ad4160 FUN_148ad4160 body=145 status=ok
// SIG undefined FUN_148ad4160(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_148ad4160(undefined8 param_1,undefined8 param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb995d8) {
    FUN_144b3d300(&DAT_14cb995d8);
    if (DAT_14cb995d8 == -1) {
      _DAT_14cb995c8 = 0x800000014b51d1c4;
      _DAT_14cb995d0 = FUN_145af9a3a("FChaosVehicleManagerAsyncCallback",0x21);
      DAT_14cb995d4 = 0;
      _Init_thread_footer(&DAT_14cb995d8);
    }
  }
  FUN_1446f57c6(&DAT_14cb995c8,param_2);
  return param_2;
}



// FUNCTION 148ad41f2 FUN_148ad41f2 body=800 status=ok
// SIG undefined FUN_148ad41f2(void)

undefined8 FUN_148ad41f2(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_140bd42e8();
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x18),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x1c),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1c) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x20),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x24),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x24) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x28),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x2c),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x2c) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x30),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x38),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x3c),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x3c) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = (undefined4 *)(param_1 + 0x40);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,puVar2,4);
    }
    else {
      FUN_14572512c(param_2,puVar2);
    }
  }
  else {
    *puVar2 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  *param_4 = 1;
  return 1;
}



// FUNCTION 148ad4592 FUN_148ad4592 body=160 status=ok
// SIG undefined FUN_148ad4592(void)

undefined8 FUN_148ad4592(longlong param_1,undefined8 param_2)

{
  FUN_140002266(param_2,
                L"FNetworkVehicleInputs | Throttle = %f Brake = %f Roll = %f Pitch = %f Yaw = %f Steering = %f Handbrake = %f Gear = %d | VehicleInputs size = %zd | ControlInputs size = %zd | NetworkInputs = %zd"
                ,(double)*(float *)(param_1 + 0x1c),(double)*(float *)(param_1 + 0x20),
                (double)*(float *)(param_1 + 0x28),(double)*(float *)(param_1 + 0x24),
                (double)*(float *)(param_1 + 0x2c),(double)*(float *)(param_1 + 0x18),
                (double)*(float *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x40),0xe0,0x100,0x240)
  ;
  return param_2;
}



// FUNCTION 148ad4632 FUN_148ad4632 body=1085 status=ok
// SIG undefined FUN_148ad4632(void)

undefined8 FUN_148ad4632(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140bd42e8();
  FUN_14480c34d(param_2,param_1 + 0x18);
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xa0),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xa0) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  local_3c = *(int *)(param_1 + 0x38);
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_3c,4);
    }
    else {
      FUN_14572512c(param_2,&local_3c);
    }
  }
  else {
    local_3c = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  local_40 = *(int *)(param_1 + 0x78);
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_40,4);
    }
    else {
      FUN_14572512c(param_2,&local_40);
    }
  }
  else {
    local_40 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FUN_144a84024((longlong *)(param_1 + 0x30),local_3c,1);
    FUN_144a84024(param_1 + 0x40,local_3c,1);
    FUN_144a84024(param_1 + 0x50,local_3c,1);
    FUN_144a84024(param_1 + 0x60,local_3c,1);
    FUN_144a1a59e(param_1 + 0x80,local_3c,1);
    FUN_144a1a59e(param_1 + 0x90,local_3c,1);
    FUN_144a84024((longlong *)(param_1 + 0x70),local_40,1);
  }
  if (0 < local_3c) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x30) + lVar6);
      puVar2 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,puVar4,4);
        }
        else {
          FUN_14572512c(param_2);
        }
      }
      else {
        *puVar4 = *puVar2;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x40) + lVar6);
      puVar2 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,puVar4,4);
        }
        else {
          FUN_14572512c(param_2);
        }
      }
      else {
        *puVar4 = *puVar2;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x50) + lVar6);
      puVar2 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,puVar4,4);
        }
        else {
          FUN_14572512c(param_2);
        }
      }
      else {
        *puVar4 = *puVar2;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x60) + lVar6);
      puVar2 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,puVar4,4);
        }
        else {
          FUN_14572512c(param_2);
        }
      }
      else {
        *puVar4 = *puVar2;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x80) + lVar6);
      puVar2 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,puVar4,4);
        }
        else {
          FUN_14572512c(param_2);
        }
      }
      else {
        *puVar4 = *puVar2;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x90) + lVar6);
      puVar2 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,puVar4,4);
        }
        else {
          FUN_14572512c(param_2);
        }
      }
      else {
        *puVar4 = *puVar2;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 4;
    } while (lVar5 < local_3c);
  }
  if (0 < local_40) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x70) + lVar5);
      puVar2 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,puVar4,4);
        }
        else {
          FUN_14572512c(param_2);
        }
      }
      else {
        *puVar4 = *puVar2;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 4;
    } while (lVar6 < local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 148ad4a70 FUN_148ad4a70 body=760 status=ok
// SIG undefined FUN_148ad4a70(void)

void FUN_148ad4a70(longlong param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  double dVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong *plVar13;
  float fVar14;
  
  iVar9 = (*(int *)(param_1 + 0xc) - *(int *)(param_2 + 0xc)) /
          (*(int *)(param_3 + 0xc) - *(int *)(param_2 + 0xc));
  fVar14 = (float)iVar9;
  dVar2 = *(double *)(param_3 + 0x28);
  dVar3 = *(double *)(param_2 + 0x28);
  dVar4 = *(double *)(param_3 + 0x20);
  dVar5 = *(double *)(param_2 + 0x20);
  dVar7 = (double)iVar9;
  *(double *)(param_1 + 0x18) =
       (*(double *)(param_3 + 0x18) - *(double *)(param_2 + 0x18)) * dVar7 +
       *(double *)(param_2 + 0x18);
  *(double *)(param_1 + 0x20) = (dVar4 - dVar5) * dVar7 + dVar5;
  *(double *)(param_1 + 0x28) = (dVar2 - dVar3) * dVar7 + dVar3;
  *(float *)(param_1 + 0xa0) =
       (*(float *)(param_3 + 0xa0) - *(float *)(param_2 + 0xa0)) * fVar14 +
       *(float *)(param_2 + 0xa0);
  uVar8 = *(uint *)(param_3 + 0x38);
  if ((int)*(uint *)(param_2 + 0x38) < (int)*(uint *)(param_3 + 0x38)) {
    uVar8 = *(uint *)(param_2 + 0x38);
  }
  uVar12 = 0;
  FUN_144a84024((longlong *)(param_1 + 0x30),uVar8,0);
  FUN_144a84024((longlong *)(param_1 + 0x40),uVar8,0);
  FUN_144a84024((longlong *)(param_1 + 0x50),uVar8,0);
  FUN_144a84024((longlong *)(param_1 + 0x60),uVar8,0);
  FUN_144a1a59e((longlong *)(param_1 + 0x80),uVar8,0);
  plVar13 = (longlong *)(param_1 + 0x90);
  FUN_144a1a59e(plVar13,uVar8,0);
  if (0 < (int)uVar8) {
    lVar10 = 0;
    do {
      fVar1 = *(float *)(*(longlong *)(param_2 + 0x30) + lVar10);
      *(float *)(*(longlong *)(param_1 + 0x30) + lVar10) =
           (*(float *)(*(longlong *)(param_3 + 0x30) + lVar10) - fVar1) * fVar14 + fVar1;
      fVar1 = *(float *)(*(longlong *)(param_2 + 0x40) + lVar10);
      *(float *)(*(longlong *)(param_1 + 0x40) + lVar10) =
           (*(float *)(*(longlong *)(param_3 + 0x40) + lVar10) - fVar1) * fVar14 + fVar1;
      fVar1 = *(float *)(*(longlong *)(param_2 + 0x50) + lVar10);
      *(float *)(*(longlong *)(param_1 + 0x50) + lVar10) =
           (*(float *)(*(longlong *)(param_3 + 0x50) + lVar10) - fVar1) * fVar14 + fVar1;
      fVar1 = *(float *)(*(longlong *)(param_2 + 0x60) + lVar10);
      *(float *)(*(longlong *)(param_1 + 0x60) + lVar10) =
           (*(float *)(*(longlong *)(param_3 + 0x60) + lVar10) - fVar1) * fVar14 + fVar1;
      iVar9 = *(int *)(*(longlong *)(param_3 + 0x80) + lVar10);
      iVar6 = *(int *)(*(longlong *)(param_2 + 0x80) + lVar10);
      if (iVar6 < iVar9) {
        iVar9 = iVar6;
      }
      *(int *)(*(longlong *)(param_1 + 0x80) + lVar10) = iVar9;
      iVar9 = *(int *)(*(longlong *)(param_3 + 0x90) + lVar10);
      iVar6 = *(int *)(*(longlong *)(param_2 + 0x90) + lVar10);
      if (iVar6 < iVar9) {
        iVar9 = iVar6;
      }
      *(int *)(*plVar13 + lVar10) = iVar9;
      uVar12 = uVar12 + *(int *)(*plVar13 + lVar10);
      lVar10 = lVar10 + 4;
    } while ((ulonglong)uVar8 << 2 != lVar10);
    FUN_144a84024((longlong *)(param_1 + 0x70),uVar12,0);
    if (0 < (int)uVar12) {
      uVar11 = 0;
      do {
        fVar1 = *(float *)(*(longlong *)(param_2 + 0x70) + uVar11 * 4);
        *(float *)(*(longlong *)(param_1 + 0x70) + uVar11 * 4) =
             (*(float *)(*(longlong *)(param_3 + 0x70) + uVar11 * 4) - fVar1) * fVar14 + fVar1;
        uVar11 = uVar11 + 1;
      } while (uVar12 != uVar11);
    }
    return;
  }
  FUN_144a84024(param_1 + 0x70,0,0);
  return;
}



// FUNCTION 148ad4d68 FUN_148ad4d68 body=45 status=ok
// SIG undefined FUN_148ad4d68(void)

undefined8 FUN_148ad4d68(longlong param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"FNetworkVehicleStates | EngineOmega = %f",
                (double)*(float *)(param_1 + 0xa0));
  return param_2;
}



// FUNCTION 148ad4d97 FUN_148ad4d97 body=422 status=ok
// SIG undefined FUN_148ad4d97(void)

double * FUN_148ad4d97(double *param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_a8 [32];
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    FUN_142a2dbb8(&local_88);
    dVar1 = param_3[2];
    dVar2 = *param_3;
    dVar3 = param_3[1];
    plVar4 = *(longlong **)(param_2 + 0x48);
    dVar11 = 0.0;
    if (plVar4 == (longlong *)0x0) {
      dVar12 = 0.0;
      dVar13 = 0.0;
      dVar8 = 0.0;
      dVar7 = 0.0;
      dVar9 = 0.0;
    }
    else {
      dVar12 = 0.0;
      dVar13 = 0.0;
      dVar8 = 0.0;
      dVar7 = 0.0;
      dVar9 = 0.0;
      if (*(char *)((longlong)plVar4 + 0xc) != '\0') {
        lVar10 = (longlong)(int)plVar4[1] * 0xc;
        lVar5 = *(longlong *)(*plVar4 + 0x278);
        lVar6 = *(longlong *)(*plVar4 + 0x290);
        dVar11 = (double)*(float *)(lVar5 + 8 + lVar10);
        dVar12 = (double)*(float *)(lVar5 + 4 + lVar10);
        dVar13 = (double)*(float *)(lVar5 + lVar10);
        dVar8 = (double)*(float *)(lVar6 + 8 + lVar10);
        dVar7 = (double)*(float *)(lVar6 + 4 + lVar10);
        dVar9 = (double)*(float *)(lVar6 + lVar10);
      }
    }
    *param_1 = dVar13 - ((dVar3 - local_80) * dVar8 - dVar7 * (dVar1 - local_78));
    param_1[1] = dVar12 - ((dVar1 - local_78) * dVar9 - dVar8 * (dVar2 - local_88));
    param_1[2] = dVar11 - ((dVar2 - local_88) * dVar7 - dVar9 * (dVar3 - local_80));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_a8);
  }
  param_1[2] = DAT_14c8464f0;
  dVar1 = DAT_14c8464e8;
  *param_1 = DAT_14c8464e0;
  param_1[1] = dVar1;
  if ((local_70 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148ad4f40 FUN_148ad4f40 body=151 status=ok
// SIG undefined FUN_148ad4f40(void)

void FUN_148ad4f40(longlong param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(undefined8 *)(param_2 + 4);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  iVar2 = *(int *)(param_1 + 0x1e0);
  *(uint *)(param_1 + 0x1e0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1e4) < iVar2 + 1U) {
    FUN_148ad77b8((longlong *)(param_1 + 0x1d8),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x1d8);
  lVar4 = (longlong)iVar2 * 0x20;
  *(undefined8 *)(lVar3 + 0x10 + lVar4) = local_28;
  puVar1 = (undefined4 *)(lVar3 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_34;
  puVar1[2] = uStack_30;
  puVar1[3] = uStack_2c;
  *(uint *)(lVar3 + 0x18 + lVar4) = (param_3 & 0xff) << 2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad4fd8 FUN_148ad4fd8 body=168 status=ok
// SIG undefined FUN_148ad4fd8(void)

void FUN_148ad4fd8(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = param_2[2];
  local_48 = *param_2;
  uStack_40 = param_2[1];
  uStack_30 = *param_3;
  uStack_2c = param_3[1];
  uStack_28 = param_3[2];
  uStack_24 = param_3[3];
  uStack_20 = *(undefined8 *)(param_3 + 4);
  iVar2 = *(int *)(param_1 + 0x1f0);
  *(uint *)(param_1 + 0x1f0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 500) < iVar2 + 1U) {
    FUN_148ad783e((longlong *)(param_1 + 0x1e8),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x1e8);
  lVar4 = (longlong)iVar2 * 0x30;
  puVar1 = (undefined4 *)(lVar3 + 0x20 + lVar4);
  *puVar1 = uStack_28;
  puVar1[1] = uStack_24;
  puVar1[2] = (undefined4)uStack_20;
  puVar1[3] = uStack_20._4_4_;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar4);
  *puVar1 = (undefined4)local_38;
  puVar1[1] = local_38._4_4_;
  puVar1[2] = uStack_30;
  puVar1[3] = uStack_2c;
  puVar1 = (undefined4 *)(lVar3 + lVar4);
  *puVar1 = (undefined4)local_48;
  puVar1[1] = local_48._4_4_;
  puVar1[2] = (undefined4)uStack_40;
  puVar1[3] = uStack_40._4_4_;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad5082 FUN_148ad5082 body=77 status=ok
// SIG undefined FUN_148ad5082(void)

void FUN_148ad5082(longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1a0);
  if ((((*(int *)(lVar1 + 0x20) == 1) && (*(int *)(lVar1 + 0x10) == 1)) && (param_3 != 0)) &&
     ((*(int *)(lVar1 + 0x70) == 1 && (param_2 < *(int *)(lVar1 + 0x40))))) {
    *(longlong *)(*(longlong *)(lVar1 + 0x38) + (longlong)param_2 * 0xe8) = param_3;
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x38) + 0x2c + (longlong)param_2 * 0xe8) =
         *(undefined4 *)(param_3 + 0x1c);
  }
  return;
}



// FUNCTION 148ad50d0 FUN_148ad50d0 body=58 status=ok
// SIG undefined FUN_148ad50d0(void)

void FUN_148ad50d0(longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1a0);
  if ((((*(int *)(lVar1 + 0x20) == 1) && (*(int *)(lVar1 + 0x10) == 1)) && (param_3 != 0)) &&
     ((*(int *)(lVar1 + 0x70) == 1 && (param_2 < *(int *)(lVar1 + 0x50))))) {
    *(longlong *)(*(longlong *)(lVar1 + 0x48) + (longlong)param_2 * 0x88) = param_3;
  }
  return;
}



// FUNCTION 148ad510a FUN_148ad510a body=278 status=ok
// SIG undefined FUN_148ad510a(void)

void FUN_148ad510a(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb99714) {
    FUN_144b3d300(&DAT_14cb99714);
    if (DAT_14cb99714 == -1) {
      FUN_1446f470e(&DAT_14cb9970c,L"Vehicle",1);
      _Init_thread_footer(&DAT_14cb99714);
    }
  }
  if (param_3 != 0) {
    cVar1 = (**(code **)(*param_2 + 0x690))(param_2,&DAT_14cb9970c);
    if (cVar1 != '\0') {
      plVar2 = (longlong *)(**(code **)(*param_1 + 0x5b8))(param_1);
      if (plVar2 != (longlong *)0x0) {
        lVar3 = FUN_144a75eb4();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) {
          cVar1 = (**(code **)(*plVar2 + 0x6c8))(plVar2);
          if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148ad51da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0x668))(param_1,param_3,param_5,param_6);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 148ad5220 thunk_FUN_145ff07a2 body=5 status=ok
// SIG undefined thunk_FUN_145ff07a2(void)

void thunk_FUN_145ff07a2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1d8);
  FUN_145ff07e8();
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x1d8) = lVar1;
  }
  return;
}



// FUNCTION 148ad5226 FUN_148ad5226 body=48 status=ok
// SIG undefined FUN_148ad5226(void)

void FUN_148ad5226(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  *(longlong *)(param_1 + 0x998) = param_2;
  return;
}



// FUNCTION 148ad5262 FUN_148ad5262 body=232 status=ok
// SIG undefined FUN_148ad5262(void)

void FUN_148ad5262(longlong *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  
  if ((char)param_1[0x137] != '\0') {
    return;
  }
  plVar1 = (longlong *)param_1[0x23];
  if (plVar1 != (longlong *)0x0) {
    lVar6 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
    if (lVar6 != 0) {
      cVar5 = FUN_1417e5774(lVar6);
      if (cVar5 != '\0') {
        FUN_1417e5988(lVar6,&DAT_14c8464e0,0,1);
        FUN_1417e59ea(lVar6,&DAT_14c8464e0,0,1);
        FUN_147c47ea4(lVar6,1);
        FUN_147c4802a(lVar6,1);
      }
    }
  }
  param_1[0x27] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x25) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 300) = uVar2;
  *(undefined4 *)(param_1 + 0x26) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x134) = uVar4;
  (**(code **)(*param_1 + 0x4d0))(param_1);
  (**(code **)(param_1[0x2f] + 0xf8))(param_1 + 0x2f);
  (**(code **)(*param_1 + 0x618))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000148ad5343. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x610))(param_1);
  return;
}



// FUNCTION 148ad534a FUN_148ad534a body=32 status=ok
// SIG undefined FUN_148ad534a(void)

void FUN_148ad534a(longlong param_1,float param_2)

{
  param_2 = param_2 + *(float *)(param_1 + 0x390);
  if (1.0 <= param_2) {
    param_2 = 1.0;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  *(float *)(param_1 + 0x390) = param_2;
  return;
}



// FUNCTION 148ad536a FUN_148ad536a body=36 status=ok
// SIG undefined FUN_148ad536a(void)

void FUN_148ad536a(longlong param_1,float param_2)

{
  param_2 = *(float *)(param_1 + 0x390) - param_2;
  if (1.0 <= param_2) {
    param_2 = 1.0;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  *(float *)(param_1 + 0x390) = param_2;
  return;
}



// FUNCTION 148ad538e FUN_148ad538e body=25 status=ok
// SIG undefined FUN_148ad538e(void)

void FUN_148ad538e(longlong param_1,float param_2)

{
  if (1.0 <= param_2) {
    param_2 = 1.0;
  }
  if (param_2 <= -1.0) {
    param_2 = -1.0;
  }
  *(float *)(param_1 + 0x398) = param_2;
  return;
}



// FUNCTION 148ad53a8 FUN_148ad53a8 body=25 status=ok
// SIG undefined FUN_148ad53a8(void)

void FUN_148ad53a8(longlong param_1,float param_2)

{
  if (1.0 <= param_2) {
    param_2 = 1.0;
  }
  if (param_2 <= -1.0) {
    param_2 = -1.0;
  }
  *(float *)(param_1 + 0x39c) = param_2;
  return;
}



// FUNCTION 148ad53c2 FUN_148ad53c2 body=25 status=ok
// SIG undefined FUN_148ad53c2(void)

void FUN_148ad53c2(longlong param_1,float param_2)

{
  if (1.0 <= param_2) {
    param_2 = 1.0;
  }
  if (param_2 <= -1.0) {
    param_2 = -1.0;
  }
  *(float *)(param_1 + 0x3a0) = param_2;
  return;
}



// FUNCTION 148ad53dc FUN_148ad53dc body=17 status=ok
// SIG undefined FUN_148ad53dc(void)

void FUN_148ad53dc(longlong param_1,byte param_2)

{
  *(byte *)(param_1 + 0x314) = *(byte *)(param_1 + 0x314) & 0xfe | param_2;
  return;
}



// FUNCTION 148ad53ee FUN_148ad53ee body=17 status=ok
// SIG undefined FUN_148ad53ee(void)

void FUN_148ad53ee(longlong param_1,byte param_2)

{
  *(byte *)(param_1 + 0x31c) = *(byte *)(param_1 + 0x31c) & 0xfe | param_2;
  return;
}



// FUNCTION 148ad5400 FUN_148ad5400 body=40 status=ok
// SIG undefined FUN_148ad5400(void)

void FUN_148ad5400(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    FUN_148ad54c2();
  }
  else {
    FUN_148ad5428();
  }
  *(bool *)(param_1 + 0x976) = param_2 != '\0';
  return;
}



// FUNCTION 148ad5428 FUN_148ad5428 body=153 status=ok
// SIG undefined FUN_148ad5428(void)

void FUN_148ad5428(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x110) != 0) {
    lVar5 = FUN_144a74fb4();
    lVar1 = *(longlong *)(param_1 + 0x110);
    if (((((lVar1 != 0) && (lVar5 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
        ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30)))) && (0 < *(int *)(lVar1 + 0xd78))) {
      lVar5 = 0;
      do {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 0xd70) + lVar5 * 8);
        cVar4 = FUN_1417e5a4c(uVar3);
        if ((cVar4 == '\0') && (cVar4 = FUN_143605cdc(uVar3), cVar4 != '\0')) {
          FUN_14130b6da(uVar3);
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(lVar1 + 0xd78));
    }
  }
  return;
}



// FUNCTION 148ad54c2 FUN_148ad54c2 body=153 status=ok
// SIG undefined FUN_148ad54c2(void)

void FUN_148ad54c2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x110) != 0) {
    lVar5 = FUN_144a74fb4();
    lVar1 = *(longlong *)(param_1 + 0x110);
    if (((((lVar1 != 0) && (lVar5 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
        ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30)))) && (0 < *(int *)(lVar1 + 0xd78))) {
      lVar5 = 0;
      do {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 0xd70) + lVar5 * 8);
        cVar4 = FUN_1417e5a4c(uVar3);
        if ((cVar4 == '\0') && (cVar4 = FUN_143605cdc(uVar3), cVar4 != '\0')) {
          FUN_1417e5934(uVar3);
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(lVar1 + 0xd78));
    }
  }
  return;
}



// FUNCTION 148ad555c FUN_148ad555c body=19 status=ok
// SIG undefined FUN_148ad555c(void)

void FUN_148ad555c(longlong param_1,char param_2)

{
  *(byte *)(param_1 + 0x314) = *(byte *)(param_1 + 0x314) & 0xfd | param_2 * '\x02';
  return;
}



// FUNCTION 148ad5570 FUN_148ad5570 body=20 status=ok
// SIG undefined FUN_148ad5570(void)

void FUN_148ad5570(longlong param_1,char param_2)

{
  *(byte *)(param_1 + 0x314) = *(byte *)(param_1 + 0x314) & 0xfb | param_2 << 2;
  return;
}



// FUNCTION 148ad5584 FUN_148ad5584 body=7 status=ok
// SIG undefined FUN_148ad5584(void)

void FUN_148ad5584(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x31d) = param_2;
  return;
}



// FUNCTION 148ad558c FUN_148ad558c body=7 status=ok
// SIG undefined FUN_148ad558c(void)

void FUN_148ad558c(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3c0) = param_2;
  return;
}



// FUNCTION 148ad5594 FUN_148ad5594 body=19 status=ok
// SIG undefined FUN_148ad5594(void)

undefined4 FUN_148ad5594(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x980) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x980) + 0x18);
  }
  return 0;
}



// FUNCTION 148ad55a8 FUN_148ad55a8 body=7 status=ok
// SIG undefined FUN_148ad55a8(void)

undefined4 FUN_148ad55a8(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x9ac);
}



// FUNCTION 148ad55b0 FUN_148ad55b0 body=11 status=ok
// SIG undefined FUN_148ad55b0(void)

bool FUN_148ad55b0(longlong param_1)

{
  return *(char *)(param_1 + 0x31d) == '\x01';
}



// FUNCTION 148ad55bc FUN_148ad55bc body=9 status=ok
// SIG undefined FUN_148ad55bc(void)

undefined4 FUN_148ad55bc(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x968);
}



// FUNCTION 148ad55c6 FUN_148ad55c6 body=25 status=ok
// SIG undefined FUN_148ad55c6(void)

float FUN_148ad55c6(longlong param_1)

{
  return (*(float *)(param_1 + 0x968) * 2236.942) / 100000.0;
}



// FUNCTION 148ad55e0 FUN_148ad55e0 body=9 status=ok
// SIG undefined FUN_148ad55e0(void)

byte FUN_148ad55e0(longlong param_1)

{
  return *(byte *)(param_1 + 0x31c) & 1;
}



// FUNCTION 148ad55ea FUN_148ad55ea body=788 status=ok
// SIG undefined FUN_148ad55ea(void)

void FUN_148ad55ea(longlong *param_1,float *param_2)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  undefined4 *local_48;
  longlong local_40;
  undefined1 *local_38;
  undefined4 **local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar5 = (longlong *)param_1[0x23];
  if ((plVar5 == (longlong *)0x0) ||
     (lVar4 = (**(code **)(*plVar5 + 0x7b8))(plVar5,0,1,0xffffffff), lVar4 == 0))
  goto LAB_148ad58c7;
  cVar3 = *(char *)((longlong)param_1 + 0x976);
  bVar2 = FUN_1417e5774(lVar4);
  *(byte *)((longlong)param_1 + 0x976) = bVar2 ^ 1;
  if (((bVar2 ^ 1) == 0) && (cVar3 != '\0')) {
    *(undefined4 *)(param_1 + 0x12f) = 0;
  }
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x5b8))(param_1);
  if (((plVar5 == (longlong *)0x0) ||
      (cVar3 = (**(code **)(*plVar5 + 0x6c8))(plVar5), cVar3 == '\0')) &&
     ((char)param_1[0x137] != '\x01')) {
    if (((DAT_14c763b2c <= *(float *)((longlong)param_1 + 0x364)) ||
        (DAT_14c763b2c <= *(float *)(param_1 + 0x6d))) ||
       ((DAT_14c763b2c <= ABS(*(float *)(param_1 + 0x6c) - *(float *)((longlong)param_1 + 0x9b4)) ||
        ((DAT_14c763b2c <= *(float *)(param_1 + 0x6e) ||
         (DAT_14c763b2c <= *(float *)((longlong)param_1 + 0x36c))))))) goto LAB_148ad5889;
    bVar1 = *(float *)((longlong)param_1 + 0x374) < DAT_14c763b2c;
    *(float *)(param_1 + 0x136) = *param_2;
    *(float *)((longlong)param_1 + 0x9b4) = *(float *)(param_1 + 0x6c);
    if (bVar1) goto LAB_148ad5712;
  }
  else if ((((DAT_14c763b2c <= param_2[1]) || (DAT_14c763b2c <= param_2[2])) ||
           (DAT_14c763b2c <= ABS(*param_2 - *(float *)(param_1 + 0x136)))) ||
          ((DAT_14c763b2c <= param_2[4] || (DAT_14c763b2c <= param_2[3])))) {
LAB_148ad5889:
    *(float *)(param_1 + 0x136) = *param_2;
    *(int *)((longlong)param_1 + 0x9b4) = (int)param_1[0x6c];
  }
  else {
    bVar1 = param_2[5] < DAT_14c763b2c;
    *(float *)(param_1 + 0x136) = *param_2;
    *(int *)((longlong)param_1 + 0x9b4) = (int)param_1[0x6c];
    if (bVar1) {
LAB_148ad5712:
      if (DAT_14c763b24 == '\0') {
        if (((*(char *)((longlong)param_1 + 0x976) == '\0') &&
            (*(char *)((longlong)param_1 + 0x974) == '\x01')) &&
           ((double)*(float *)((longlong)param_1 + 0x23c) < (double)param_1[0x11d])) {
          local_48 = &local_68;
          local_68 = (undefined4)DAT_14c8464e0;
          uStack_64 = DAT_14c8464e0._4_4_;
          uStack_60 = (undefined4)DAT_14c8464e8;
          uStack_5c = DAT_14c8464e8._4_4_;
          local_58 = DAT_14c8464f0;
          local_30 = &local_48;
          local_38 = &LAB_143620340;
          local_40 = lVar4;
          FUN_1448e6002(lVar4 + 0x138);
          if ((float)(local_58 * local_58 +
                     (double)CONCAT44(uStack_64,local_68) * (double)CONCAT44(uStack_64,local_68) +
                     (double)CONCAT44(uStack_5c,uStack_60) * (double)CONCAT44(uStack_5c,uStack_60))
              < *(float *)(param_1 + 0x47) * *(float *)(param_1 + 0x47)) {
            if (DAT_14c763b20 <= (float)(int)param_1[0x12f]) {
              *(undefined1 *)((longlong)param_1 + 0x976) = 1;
              FUN_148ad5428(param_1);
              *(undefined1 *)((longlong)param_1 + 0x976) = 1;
            }
            else {
              *(int *)(param_1 + 0x12f) = (int)param_1[0x12f] + 1;
            }
          }
        }
        goto LAB_148ad58c7;
      }
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x976) = 0;
  *(undefined4 *)(param_1 + 0x12f) = 0;
  FUN_148ad54c2(param_1);
  *(undefined1 *)((longlong)param_1 + 0x976) = 0;
LAB_148ad58c7:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ad5904 FUN_148ad5904 body=366 status=ok
// SIG undefined FUN_148ad5904(void)

void FUN_148ad5904(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  int iVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x3a4) = param_2;
  *(undefined4 *)(param_1 + 0x3a8) = param_3;
  *(undefined4 *)(param_1 + 0x3ac) = param_4;
  *(undefined4 *)(param_1 + 0x3bc) = param_5;
  *(undefined4 *)(param_1 + 0x3b4) = param_7;
  *(undefined4 *)(param_1 + 0x3b0) = param_8;
  *(undefined4 *)(param_1 + 0x3b8) = param_9;
  if ((*(char *)(param_1 + 0x31d) != '\x01') &&
     (((lVar2 = *(longlong *)(param_1 + 0xb0), lVar2 != 0 ||
       (lVar2 = FUN_1448abda6(param_1), lVar2 != 0)) && (iVar1 = FUN_14490d72a(lVar2), iVar1 == 1)))
     ) {
    FUN_1457828d4(param_1,param_6,1);
  }
  *(undefined4 *)(param_1 + 0x360) = param_2;
  *(undefined4 *)(param_1 + 0x364) = param_3;
  *(undefined4 *)(param_1 + 0x368) = param_4;
  *(undefined4 *)(param_1 + 0x378) = param_5;
  *(undefined4 *)(param_1 + 0x37c) = param_6;
  *(undefined4 *)(param_1 + 0x370) = param_7;
  *(undefined4 *)(param_1 + 0x36c) = param_8;
  *(undefined4 *)(param_1 + 0x374) = param_9;
  return;
}



// FUNCTION 148ad5a74 FUN_148ad5a74 body=176 status=ok
// SIG undefined FUN_148ad5a74(void)

undefined8 * FUN_148ad5a74(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar1 = &PTR_FUN_14b520c50;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x980);
  *(undefined8 **)(param_1 + 0x980) = puVar1;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0xe8);
  *puVar2 = &PTR_FUN_14b520c80;
  memset(puVar2 + 1,0,0xd0);
  *(undefined2 *)(puVar2 + 0x1b) = 0x101;
  *(undefined1 *)((longlong)puVar2 + 0xda) = 1;
  *(undefined4 *)((longlong)puVar2 + 0xdc) = 0;
  *(undefined1 *)(puVar2 + 0x1c) = 0;
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 148ad5b24 FUN_148ad5b24 body=170 status=ok
// SIG undefined FUN_148ad5b24(void)

undefined8 *
FUN_148ad5b24(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x128,0x10);
  *puVar1 = &PTR_FUN_14b520c60;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  FUN_140aeaf86(puVar1 + 4);
  puVar1[3] = 0;
  *param_2 = puVar1;
  FUN_140aeb046(param_1,puVar1,param_3,param_4,param_5,param_6,param_7);
  return param_2;
}



// FUNCTION 148ad5bce FUN_148ad5bce body=81 status=ok
// SIG undefined FUN_148ad5bce(void)

undefined8 * FUN_148ad5bce(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar1 = &PTR_FUN_14b520c48;
  *(undefined2 *)(puVar1 + 1) = 0;
  puVar1[2] = &PTR_FUN_14b520c50;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 148ad5c20 FUN_148ad5c20 body=82 status=ok
// SIG undefined FUN_148ad5c20(void)

void FUN_148ad5c20(longlong *param_1)

{
  (**(code **)(*param_1 + 0x618))();
  (**(code **)(*param_1 + 0x490))(param_1);
  (**(code **)(*param_1 + 0x350))(param_1);
  (**(code **)(*param_1 + 0x348))(param_1);
  FUN_1457828d4(param_1,0,1);
  *(undefined4 *)((longlong)param_1 + 0x9ac) = 0;
  return;
}



// FUNCTION 148ad5c72 FUN_148ad5c72 body=326 status=ok
// SIG undefined FUN_148ad5c72(void)

void FUN_148ad5c72(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 *local_50;
  longlong local_48;
  undefined1 *local_40;
  undefined8 **local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
    if (lVar2 != 0) {
      FUN_1447f067c(lVar2,&local_b8,1,0);
      puVar4 = &local_b8;
      puVar5 = param_2;
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      local_b8._0_4_ = (undefined4)DAT_14c8464e0;
      local_b8._4_4_ = DAT_14c8464e0._4_4_;
      uStack_b0 = (undefined4)DAT_14c8464e8;
      uStack_ac = DAT_14c8464e8._4_4_;
      local_a8 = DAT_14c8464f0;
      local_40 = &LAB_143620340;
      local_50 = &local_b8;
      local_48 = lVar2;
      local_38 = &local_50;
      FUN_1448e6002(lVar2 + 0x138,&local_40);
      param_2[0xe] = local_a8;
      param_2[0xc] = CONCAT44(local_b8._4_4_,(undefined4)local_b8);
      param_2[0xd] = CONCAT44(uStack_ac,uStack_b0);
      local_b8._0_4_ = (undefined4)DAT_14c8464e0;
      local_b8._4_4_ = DAT_14c8464e0._4_4_;
      uStack_b0 = (undefined4)DAT_14c8464e8;
      uStack_ac = DAT_14c8464e8._4_4_;
      local_a8 = DAT_14c8464f0;
      local_40 = &LAB_1436203a6;
      local_50 = &local_b8;
      local_38 = &local_50;
      FUN_1448e6002(lVar2 + 0x138,&local_40);
      param_2[0x11] = local_a8;
      *(undefined4 *)(param_2 + 0xf) = (undefined4)local_b8;
      *(undefined4 *)((longlong)param_2 + 0x7c) = local_b8._4_4_;
      *(undefined4 *)(param_2 + 0x10) = uStack_b0;
      *(undefined4 *)((longlong)param_2 + 0x84) = uStack_ac;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ad5dba FUN_148ad5dba body=116 status=ok
// SIG undefined FUN_148ad5dba(void)

void FUN_148ad5dba(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
    if (lVar2 != 0) {
      FUN_1417e5988(lVar2,param_2 + 0x60,0,1);
      FUN_1417e59ea(lVar2,param_2 + 0x78,0,1);
      FUN_140043566(lVar2,param_2,1,1);
      return;
    }
  }
  return;
}



// FUNCTION 148ad5e2e FUN_148ad5e2e body=712 status=ok
// SIG undefined FUN_148ad5e2e(void)

void FUN_148ad5e2e(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 *puVar5;
  
  lVar2 = *(longlong *)(param_1 + 800);
  if (lVar2 == 0) {
    return;
  }
  puVar5 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar5 = &PTR_FUN_14b51f240;
  puVar3 = *(undefined8 **)(lVar2 + 0x178);
  *(undefined8 **)(lVar2 + 0x178) = puVar5;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar5 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar5 = &PTR_FUN_14b51f4d0;
  puVar3 = *(undefined8 **)(lVar2 + 0x180);
  *(undefined8 **)(lVar2 + 0x180) = puVar5;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar5 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  uVar1 = *(ushort *)(lVar2 + 0x188);
  *puVar5 = &PTR_LAB_14b51f3a0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0xffffffff;
  *(undefined4 *)(puVar5 + 5) = 0;
  *(uint *)((longlong)puVar5 + 0x2c) = (uint)uVar1;
  FUN_148ad9206(puVar5 + 2,uVar1,1);
  *puVar5 = &PTR_FUN_14b51f260;
  puVar3 = *(undefined8 **)(lVar2 + 0x130);
  *(undefined8 **)(lVar2 + 0x130) = puVar5;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  if (DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar2);
  }
  *(longlong *)(lVar2 + 0x138) = lVar2;
  puVar5 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  uVar1 = *(ushort *)(lVar2 + 0x18a);
  *puVar5 = &PTR_LAB_14b51f630;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0xffffffff;
  *(undefined4 *)(puVar5 + 5) = 0;
  *(uint *)((longlong)puVar5 + 0x2c) = (uint)uVar1;
  FUN_148ada3f6(puVar5 + 2,uVar1,1);
  *puVar5 = &PTR_FUN_14b51f4f0;
  puVar3 = *(undefined8 **)(lVar2 + 0x140);
  *(undefined8 **)(lVar2 + 0x140) = puVar5;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  if (DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar2);
  }
  *(longlong *)(lVar2 + 0x148) = lVar2;
  puVar5 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar5 = &PTR_LAB_14b51f3a0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0xffffffff;
  puVar5[5] = 0x100000000;
  FUN_148ad9206(puVar5 + 2,1,1);
  *puVar5 = &PTR_FUN_14b51f260;
  puVar3 = *(undefined8 **)(lVar2 + 0x110);
  *(undefined8 **)(lVar2 + 0x110) = puVar5;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  if (DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar2);
  }
  *(longlong *)(lVar2 + 0x118) = lVar2;
  puVar5 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar5 = &PTR_LAB_14b51f630;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0xffffffff;
  puVar5[5] = 0x100000000;
  FUN_148ada3f6(puVar5 + 2,1,1);
  *puVar5 = &PTR_FUN_14b51f4f0;
  puVar3 = *(undefined8 **)(lVar2 + 0x120);
  *(undefined8 **)(lVar2 + 0x120) = puVar5;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  if (DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar2);
  }
  bVar4 = DAT_14c950c29;
  *(longlong *)(lVar2 + 0x128) = lVar2;
  if ((param_1 != 0) && ((bVar4 & 1) != 0)) {
    FUN_14689c22e(param_1);
  }
  *(longlong *)(lVar2 + 400) = param_1;
  FUN_140d08e64(lVar2);
  return;
}



// FUNCTION 148ad60f6 FUN_148ad60f6 body=90 status=ok
// SIG undefined FUN_148ad60f6(void)

undefined8 FUN_148ad60f6(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14001cc68(0x700,0x10);
  FUN_1457f5ee0(uVar2);
  puVar1 = *(undefined8 **)(param_1 + 0x990);
  *(undefined8 *)(param_1 + 0x990) = uVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_148ad5a74(param_1,param_2);
  return param_2;
}


