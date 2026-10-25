// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1489f80d6 FUN_1489f80d6 body=66 status=ok
// SIG undefined FUN_1489f80d6(void)

void FUN_1489f80d6(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14b4677f0;
  FUN_144a5dc74(param_2 + 3);
  *param_2 = &PTR_FUN_14b4677d0;
  FUN_144a5dc74(param_2 + 5);
  return;
}



// FUNCTION 1489f812e FUN_1489f812e body=54 status=ok
// SIG undefined FUN_1489f812e(void)

undefined1 FUN_1489f812e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489f8246(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 1489f818c FUN_1489f818c body=59 status=ok
// SIG undefined FUN_1489f818c(void)

undefined8 FUN_1489f818c(longlong *param_1)

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



// FUNCTION 1489f81d2 FUN_1489f81d2 body=57 status=ok
// SIG undefined FUN_1489f81d2(void)

void FUN_1489f81d2(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 7) == '\x01') {
    *param_2 = &PTR_FUN_14b4677d0;
    if ((longlong *)param_2[5] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[5] + 0x10))();
    }
    FUN_140f4522c(param_2);
    *(undefined1 *)(param_2 + 7) = 0;
  }
  return;
}



// FUNCTION 1489f8246 FUN_1489f8246 body=77 status=ok
// SIG undefined FUN_1489f8246(void)

longlong FUN_1489f8246(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_1489f8080();
  plVar1 = *(longlong **)(param_2 + 0x28);
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x28) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  return param_1;
}



// FUNCTION 1489f8312 FUN_1489f8312 body=91 status=ok
// SIG undefined FUN_1489f8312(void)

undefined8 FUN_1489f8312(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      FUN_141289ada(param_2 + -0x28,param_3 + -0x28);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1489f8396 FUN_1489f8396 body=59 status=ok
// SIG undefined FUN_1489f8396(void)

undefined8 FUN_1489f8396(longlong *param_1)

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



// FUNCTION 1489f83dc FUN_1489f83dc body=34 status=ok
// SIG undefined FUN_1489f83dc(void)

void FUN_1489f83dc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1489f84b0(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1489f8450 FUN_1489f8450 body=38 status=ok
// SIG undefined FUN_1489f8450(void)

undefined8 FUN_1489f8450(undefined8 param_1,int param_2)

{
  FUN_1489f84b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489f8476 FUN_1489f8476 body=57 status=ok
// SIG undefined FUN_1489f8476(void)

void FUN_1489f8476(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb91ee0 == 0) {
    uVar1 = FUN_14580b51a();
    DAT_14cb91ee0 = FUN_140002ddd(FUN_14656b617,uVar1,L"GbxUIDisplayDataDef_Image");
  }
  return;
}



// FUNCTION 1489f84b0 FUN_1489f84b0 body=59 status=ok
// SIG undefined FUN_1489f84b0(void)

void FUN_1489f84b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b467500;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1489f84ec FUN_1489f84ec body=55 status=ok
// SIG undefined FUN_1489f84ec(void)

void FUN_1489f84ec(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14b4677f0;
  FUN_144a5dc74(param_2 + 3);
  *param_2 = &PTR_FUN_14b467690;
  return;
}



// FUNCTION 1489f853a FUN_1489f853a body=54 status=ok
// SIG undefined FUN_1489f853a(void)

undefined1 FUN_1489f853a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489f8080(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 1489f8598 FUN_1489f8598 body=59 status=ok
// SIG undefined FUN_1489f8598(void)

undefined8 FUN_1489f8598(longlong *param_1)

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



// FUNCTION 1489f85de FUN_1489f85de body=32 status=ok
// SIG undefined FUN_1489f85de(void)

void FUN_1489f85de(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_140f4522c(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1489f863a FUN_1489f863a body=31 status=ok
// SIG undefined FUN_1489f863a(void)

undefined8 FUN_1489f863a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489f8676 FUN_1489f8676 body=93 status=ok
// SIG undefined FUN_1489f8676(void)

void FUN_1489f8676(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4676b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489f86d4 FUN_1489f86d4 body=126 status=ok
// SIG undefined FUN_1489f86d4(void)

void FUN_1489f86d4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4676b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489f8743. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489f8752 FUN_1489f8752 body=21 status=ok
// SIG undefined FUN_1489f8752(void)

undefined8 FUN_1489f8752(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1489f8768 FUN_1489f8768 body=29 status=ok
// SIG undefined FUN_1489f8768(void)

undefined8 FUN_1489f8768(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489f87a0 FUN_1489f87a0 body=29 status=ok
// SIG undefined FUN_1489f87a0(void)

bool FUN_1489f87a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1489f87be FUN_1489f87be body=26 status=ok
// SIG undefined FUN_1489f87be(void)

bool FUN_1489f87be(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1489f87d8 FUN_1489f87d8 body=24 status=ok
// SIG undefined FUN_1489f87d8(void)

bool FUN_1489f87d8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1489f87f0 FUN_1489f87f0 body=93 status=ok
// SIG undefined FUN_1489f87f0(void)

void FUN_1489f87f0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b467760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489f884e FUN_1489f884e body=93 status=ok
// SIG undefined FUN_1489f884e(void)

void FUN_1489f884e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b467760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489f88ac FUN_1489f88ac body=126 status=ok
// SIG undefined FUN_1489f88ac(void)

void FUN_1489f88ac(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b467760;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489f891b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489f892a FUN_1489f892a body=35 status=ok
// SIG undefined FUN_1489f892a(void)

void FUN_1489f892a(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001489f8949. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 1489f894e FUN_1489f894e body=130 status=ok
// SIG undefined FUN_1489f894e(void)

bool FUN_1489f894e(longlong param_1)

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
    FUN_1400841de(param_1 + 0x18,&local_28);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489f89f0 FUN_1489f89f0 body=494 status=ok
// SIG undefined FUN_1489f89f0(void)

void FUN_1489f89f0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  int local_4c;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
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
  local_30 = 0x7012;
  local_28 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = 0;
  uStack_40 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
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
  iVar1 = local_4c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_48;
  if ((local_48 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  local_58 = uStack_40;
  local_78 = local_38;
  local_70 = local_30;
  local_68 = 0;
  FUN_148a00070(local_20,&local_78,&local_60,iVar1 != 0);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489f8bfe FUN_1489f8bfe body=45 status=ok
// SIG undefined FUN_1489f8bfe(void)

void FUN_1489f8bfe(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1410293e6();
  FUN_1406fa324(param_3,uVar1);
  return;
}



// FUNCTION 1489f8c2c FUN_1489f8c2c body=45 status=ok
// SIG undefined FUN_1489f8c2c(void)

void FUN_1489f8c2c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14102937c();
  FUN_1406fa324(param_3,uVar1);
  return;
}



// FUNCTION 1489f8caf FUN_1489f8caf body=55 status=ok
// SIG undefined FUN_1489f8caf(void)

void FUN_1489f8caf(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb92260 == 0) {
    uVar1 = FUN_140e19277();
    DAT_14cb92260 = FUN_14171c317(FUN_14656c702,uVar1,L"ETagAggregationType");
  }
  return;
}



// FUNCTION 1489f8d50 FUN_1489f8d50 body=45 status=ok
// SIG undefined FUN_1489f8d50(void)

longlong FUN_1489f8d50(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145853554(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489f8da6 FUN_1489f8da6 body=101 status=ok
// SIG undefined FUN_1489f8da6(void)

undefined1 FUN_1489f8da6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
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



// FUNCTION 1489f8e34 FUN_1489f8e34 body=59 status=ok
// SIG undefined FUN_1489f8e34(void)

undefined8 FUN_1489f8e34(longlong *param_1)

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



// FUNCTION 1489f8efe FUN_1489f8efe body=94 status=ok
// SIG undefined FUN_1489f8efe(void)

undefined8 FUN_1489f8efe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar3);
      lVar2 = param_2 + 8 + lVar3;
      *(undefined8 *)(lVar2 + -8) = *puVar1;
      FUN_148687156(lVar2,puVar1 + 1);
      *(undefined1 *)(lVar2 + 0x18) = *(undefined1 *)(puVar1 + 4);
      lVar3 = lVar3 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1489f8f84 FUN_1489f8f84 body=59 status=ok
// SIG undefined FUN_1489f8f84(void)

undefined8 FUN_1489f8f84(longlong *param_1)

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



// FUNCTION 1489f90d4 FUN_1489f90d4 body=59 status=ok
// SIG undefined FUN_1489f90d4(void)

undefined8 FUN_1489f90d4(longlong *param_1)

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



// FUNCTION 1489f919a FUN_1489f919a body=75 status=ok
// SIG undefined FUN_1489f919a(void)

undefined8 FUN_1489f919a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_1486fec9e();
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1489f920e FUN_1489f920e body=59 status=ok
// SIG undefined FUN_1489f920e(void)

undefined8 FUN_1489f920e(longlong *param_1)

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



// FUNCTION 1489f9328 FUN_1489f9328 body=54 status=ok
// SIG undefined FUN_1489f9328(void)

undefined1 FUN_1489f9328(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489f94a2(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 1489f9386 FUN_1489f9386 body=59 status=ok
// SIG undefined FUN_1489f9386(void)

undefined8 FUN_1489f9386(longlong *param_1)

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



// FUNCTION 1489f93cc FUN_1489f93cc body=32 status=ok
// SIG undefined FUN_1489f93cc(void)

void FUN_1489f93cc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_1418b7592(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1489f943a FUN_1489f943a body=38 status=ok
// SIG undefined FUN_1489f943a(void)

undefined8 FUN_1489f943a(undefined8 param_1,int param_2)

{
  FUN_1418b7592();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489f9460 FUN_1489f9460 body=55 status=ok
// SIG undefined FUN_1489f9460(void)

void FUN_1489f9460(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb91f98 == 0) {
    uVar1 = FUN_140e19277();
    DAT_14cb91f98 = FUN_140002ddd(FUN_14656bb95,uVar1,L"GbxSkillComponentUIHandlerData");
  }
  return;
}



// FUNCTION 1489f94a2 FUN_1489f94a2 body=90 status=ok
// SIG undefined FUN_1489f94a2(void)

longlong FUN_1489f94a2(longlong param_1,longlong param_2)

{
  FUN_1489f94fc(param_1 + 8,param_2 + 8);
  FUN_1489f9550(param_1 + 0x20,param_2 + 0x20);
  FUN_1489f95a0(param_1 + 0x30,param_2 + 0x30);
  FUN_1489f95f0(param_1 + 0x40,param_2 + 0x40);
  FUN_1489f9640(param_1 + 0x50,param_2 + 0x50);
  return param_1;
}



// FUNCTION 1489f94fc FUN_1489f94fc body=84 status=ok
// SIG undefined FUN_1489f94fc(void)

longlong * FUN_1489f94fc(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1489f9550 FUN_1489f9550 body=79 status=ok
// SIG undefined FUN_1489f9550(void)

undefined8 * FUN_1489f9550(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1489f9690(param_1,iVar1);
      FUN_1489f96f2(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1489f95a0 FUN_1489f95a0 body=79 status=ok
// SIG undefined FUN_1489f95a0(void)

undefined8 * FUN_1489f95a0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1489f974a(param_1,iVar1);
      FUN_1489f97bd(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1489f95f0 FUN_1489f95f0 body=79 status=ok
// SIG undefined FUN_1489f95f0(void)

undefined8 * FUN_1489f95f0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1489f97fe(param_1,iVar1);
      FUN_1489f9860(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1489f9640 FUN_1489f9640 body=79 status=ok
// SIG undefined FUN_1489f9640(void)

undefined8 * FUN_1489f9640(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1489f98ec(param_1,iVar1);
      FUN_1489f995f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1489f9690 FUN_1489f9690 body=98 status=ok
// SIG undefined FUN_1489f9690(void)

void FUN_1489f9690(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1489f96f2 FUN_1489f96f2 body=88 status=ok
// SIG undefined FUN_1489f96f2(void)

void FUN_1489f96f2(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
      lVar1 = *(longlong *)(param_2 + 8 + lVar3);
      *(longlong *)(param_1 + 8 + lVar3) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_14689c22e();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1489f974a FUN_1489f974a body=115 status=ok
// SIG undefined FUN_1489f974a(void)

void FUN_1489f974a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1489f97bd FUN_1489f97bd body=64 status=ok
// SIG undefined FUN_1489f97bd(void)

void FUN_1489f97bd(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
      *(undefined8 *)(param_1 + 8 + lVar1) = *(undefined8 *)(param_2 + 8 + lVar1);
      *(undefined4 *)(param_1 + 0x10 + lVar1) = *(undefined4 *)(param_2 + 0x10 + lVar1);
      *(undefined8 *)(param_1 + 0x18 + lVar1) = 0;
      *(undefined1 *)(param_1 + 0x20 + lVar1) = *(undefined1 *)(param_2 + 0x20 + lVar1);
      lVar1 = lVar1 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1489f97fe FUN_1489f97fe body=98 status=ok
// SIG undefined FUN_1489f97fe(void)

void FUN_1489f97fe(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1489f9860 FUN_1489f9860 body=68 status=ok
// SIG undefined FUN_1489f9860(void)

void FUN_1489f9860(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_1 + -8) = *(undefined8 *)(param_2 + -8);
      FUN_1489f98a4(param_1,param_2);
      param_1 = param_1 + 0x20;
      param_2 = param_2 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1489f98a4 FUN_1489f98a4 body=71 status=ok
// SIG undefined FUN_1489f98a4(void)

undefined8 * FUN_1489f98a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1489f98ec FUN_1489f98ec body=115 status=ok
// SIG undefined FUN_1489f98ec(void)

void FUN_1489f98ec(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1489f995f FUN_1489f995f body=74 status=ok
// SIG undefined FUN_1489f995f(void)

void FUN_1489f995f(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_1 + -8) = *(undefined8 *)(param_2 + -8);
      FUN_1486f6272(param_1,param_2);
      *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
      param_1 = param_1 + 0x28;
      param_2 = param_2 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1489f99aa FUN_1489f99aa body=72 status=ok
// SIG undefined FUN_1489f99aa(void)

void FUN_1489f99aa(undefined8 param_1,undefined8 *param_2)

{
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1413ea01e(param_2);
  *param_2 = &PTR_FUN_14b4735a0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  return;
}



// FUNCTION 1489f99f2 FUN_1489f99f2 body=39 status=ok
// SIG undefined FUN_1489f99f2(void)

void FUN_1489f99f2(undefined8 param_1,undefined8 *param_2)

{
  FUN_1413ea01e(param_2);
  *param_2 = &PTR_FUN_14b4735a0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  return;
}



// FUNCTION 1489f9a3e FUN_1489f9a3e body=87 status=ok
// SIG undefined FUN_1489f9a3e(void)

undefined1 FUN_1489f9a3e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148704de0(param_2,param_3);
    FUN_1489f9b9a(param_2 + 0x50,param_3 + 0x50);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 1489f9abe FUN_1489f9abe body=59 status=ok
// SIG undefined FUN_1489f9abe(void)

undefined8 FUN_1489f9abe(longlong *param_1)

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



// FUNCTION 1489f9b04 FUN_1489f9b04 body=34 status=ok
// SIG undefined FUN_1489f9b04(void)

void FUN_1489f9b04(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_1458072b0(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1489f9b74 FUN_1489f9b74 body=38 status=ok
// SIG undefined FUN_1489f9b74(void)

undefined8 FUN_1489f9b74(undefined8 param_1,int param_2)

{
  FUN_1458072b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489f9b9a FUN_1489f9b9a body=93 status=ok
// SIG undefined FUN_1489f9b9a(void)

undefined8 * FUN_1489f9b9a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14110c090(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1489f9bf8(param_1,iVar1);
      FUN_1489f9c5a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1489f9bf8 FUN_1489f9bf8 body=98 status=ok
// SIG undefined FUN_1489f9bf8(void)

void FUN_1489f9bf8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1489f9c5a FUN_1489f9c5a body=45 status=ok
// SIG undefined FUN_1489f9c5a(void)

void FUN_1489f9c5a(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1489f9cce FUN_1489f9cce body=133 status=ok
// SIG undefined FUN_1489f9cce(void)

undefined1 FUN_1489f9cce(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      lVar1 = param_2 + lVar6;
      lVar2 = param_3 + lVar6;
      FUN_144a787a6(lVar1 + 8,lVar2 + 8);
      uVar3 = *(undefined4 *)(lVar2 + 0x1c);
      uVar4 = *(undefined4 *)(lVar2 + 0x20);
      uVar5 = *(undefined4 *)(lVar2 + 0x24);
      *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(lVar2 + 0x18);
      *(undefined4 *)(lVar1 + 0x1c) = uVar3;
      *(undefined4 *)(lVar1 + 0x20) = uVar4;
      *(undefined4 *)(lVar1 + 0x24) = uVar5;
      FUN_1401f3db8(param_2 + lVar6 + 0x28,param_3 + lVar6 + 0x28);
      FUN_1401f3db8(param_2 + lVar6 + 0x40,param_3 + lVar6 + 0x40);
      lVar6 = lVar6 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1489f9d7c FUN_1489f9d7c body=59 status=ok
// SIG undefined FUN_1489f9d7c(void)

undefined8 FUN_1489f9d7c(longlong *param_1)

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



// FUNCTION 1489f9dc2 FUN_1489f9dc2 body=32 status=ok
// SIG undefined FUN_1489f9dc2(void)

void FUN_1489f9dc2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_1489f9e8e(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1489f9e30 FUN_1489f9e30 body=38 status=ok
// SIG undefined FUN_1489f9e30(void)

undefined8 FUN_1489f9e30(undefined8 param_1,int param_2)

{
  FUN_1489f9e8e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489f9e56 FUN_1489f9e56 body=55 status=ok
// SIG undefined FUN_1489f9e56(void)

void FUN_1489f9e56(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb91fc8 == 0) {
    uVar1 = FUN_140e19277();
    DAT_14cb91fc8 = FUN_140002ddd(FUN_14656bcf3,uVar1,L"GbxSkillComponentData_UIItemEx");
  }
  return;
}



// FUNCTION 1489f9e8e FUN_1489f9e8e body=133 status=ok
// SIG undefined FUN_1489f9e8e(void)

void FUN_1489f9e8e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4701a0;
  plVar3 = (longlong *)param_1[9];
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
  *param_1 = &PTR_FUN_14b23dd30;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1489f9f14 FUN_1489f9f14 body=51 status=ok
// SIG undefined FUN_1489f9f14(void)

void FUN_1489f9f14(undefined8 param_1,undefined8 *param_2)

{
  FUN_1411b9bf0(param_2);
  *param_2 = &PTR_FUN_14b470310;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  return;
}



// FUNCTION 1489f9f6c FUN_1489f9f6c body=133 status=ok
// SIG undefined FUN_1489f9f6c(void)

undefined1 FUN_1489f9f6c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      lVar1 = param_2 + lVar6;
      lVar2 = param_3 + lVar6;
      FUN_146130eee(lVar1 + 8,lVar2 + 8);
      uVar3 = *(undefined4 *)(lVar2 + 0x24);
      uVar4 = *(undefined4 *)(lVar2 + 0x28);
      uVar5 = *(undefined4 *)(lVar2 + 0x2c);
      *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar2 + 0x20);
      *(undefined4 *)(lVar1 + 0x24) = uVar3;
      *(undefined4 *)(lVar1 + 0x28) = uVar4;
      *(undefined4 *)(lVar1 + 0x2c) = uVar5;
      FUN_1489fa0d0(param_2 + lVar6 + 0x30,param_3 + lVar6 + 0x30);
      FUN_1401f3db8(param_2 + lVar6 + 0x40,param_3 + lVar6 + 0x40);
      lVar6 = lVar6 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1489fa01a FUN_1489fa01a body=59 status=ok
// SIG undefined FUN_1489fa01a(void)

undefined8 FUN_1489fa01a(longlong *param_1)

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



// FUNCTION 1489fa060 FUN_1489fa060 body=34 status=ok
// SIG undefined FUN_1489fa060(void)

void FUN_1489fa060(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_14583d9fc(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1489fa0d0 FUN_1489fa0d0 body=93 status=ok
// SIG undefined FUN_1489fa0d0(void)

undefined8 * FUN_1489fa0d0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1411f3761(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1489fa12e(param_1,iVar1);
      FUN_1489fa19d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1489fa12e FUN_1489fa12e body=111 status=ok
// SIG undefined FUN_1489fa12e(void)

void FUN_1489fa12e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x58,8);
    iVar2 = (int)(uVar1 / 0x58);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x58,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1489fa19d FUN_1489fa19d body=52 status=ok
// SIG undefined FUN_1489fa19d(void)

void FUN_1489fa19d(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1489fa1d2(param_1,param_2);
    param_1 = param_1 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return;
}



// FUNCTION 1489fa1d2 FUN_1489fa1d2 body=156 status=ok
// SIG undefined FUN_1489fa1d2(void)

undefined8 * FUN_1489fa1d2(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = &PTR_FUN_14b23dd30;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  _Src = *(void **)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  *param_1 = &PTR_FUN_14b4701a0;
  FUN_1401f3da4(param_1 + 5,param_2 + 0x28);
  FUN_1401f3da4(param_1 + 8,param_2 + 0x40);
  return param_1;
}



// FUNCTION 1489fa2ac FUN_1489fa2ac body=139 status=ok
// SIG undefined FUN_1489fa2ac(void)

undefined8 FUN_1489fa2ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      lVar1 = param_2 + lVar3;
      lVar2 = param_3 + lVar3;
      FUN_141289ada(lVar1 + 8,lVar2 + 8);
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
      *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar2 + 0x20);
      FUN_144a787a6(param_2 + lVar3 + 0x28,param_3 + lVar3 + 0x28);
      FUN_144a787a6(param_2 + lVar3 + 0x38,param_3 + lVar3 + 0x38);
      lVar3 = lVar3 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1489fa360 FUN_1489fa360 body=59 status=ok
// SIG undefined FUN_1489fa360(void)

undefined8 FUN_1489fa360(longlong *param_1)

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



// FUNCTION 1489fa3a6 FUN_1489fa3a6 body=32 status=ok
// SIG undefined FUN_1489fa3a6(void)

void FUN_1489fa3a6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1489fa40c(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1489fa40c FUN_1489fa40c body=73 status=ok
// SIG undefined FUN_1489fa40c(void)

void FUN_1489fa40c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4704a0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1489fa456 FUN_1489fa456 body=104 status=ok
// SIG undefined FUN_1489fa456(void)

undefined8 FUN_1489fa456(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_148a07ecc(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489fa4c0 FUN_1489fa4c0 body=28 status=ok
// SIG undefined FUN_1489fa4c0(void)

undefined8 FUN_1489fa4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1489fa53c FUN_1489fa53c body=62 status=ok
// SIG undefined FUN_1489fa53c(void)

undefined1 FUN_1489fa53c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 1489fa5a2 FUN_1489fa5a2 body=59 status=ok
// SIG undefined FUN_1489fa5a2(void)

undefined8 FUN_1489fa5a2(longlong *param_1)

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



// FUNCTION 1489fa5e8 FUN_1489fa5e8 body=43 status=ok
// SIG undefined FUN_1489fa5e8(void)

void FUN_1489fa5e8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 1489fa666 FUN_1489fa666 body=52 status=ok
// SIG undefined FUN_1489fa666(void)

undefined8 * FUN_1489fa666(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489fa69a FUN_1489fa69a body=55 status=ok
// SIG undefined FUN_1489fa69a(void)

void FUN_1489fa69a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb920c0 == 0) {
    uVar1 = FUN_140e19277();
    DAT_14cb920c0 = FUN_140002ddd(FUN_14656bbc4,uVar1,L"GbxUIDisplayDataDef_Skill");
  }
  return;
}



// FUNCTION 1489fa740 FUN_1489fa740 body=59 status=ok
// SIG undefined FUN_1489fa740(void)

undefined8 FUN_1489fa740(longlong *param_1)

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



// FUNCTION 1489fa868 FUN_1489fa868 body=59 status=ok
// SIG undefined FUN_1489fa868(void)

undefined8 FUN_1489fa868(longlong *param_1)

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



// FUNCTION 1489fa9dc FUN_1489fa9dc body=63 status=ok
// SIG undefined FUN_1489fa9dc(void)

undefined1 FUN_1489fa9dc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fab06(param_2,param_3);
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 1489faa44 FUN_1489faa44 body=59 status=ok
// SIG undefined FUN_1489faa44(void)

undefined8 FUN_1489faa44(longlong *param_1)

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



// FUNCTION 1489faa90 FUN_1489faa90 body=40 status=ok
// SIG undefined FUN_1489faa90(void)

void FUN_1489faa90(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_1457bbd94(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 1489fab06 FUN_1489fab06 body=115 status=ok
// SIG undefined FUN_1489fab06(void)

longlong FUN_1489fab06(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_1489fab7a();
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  if (param_2 != param_1) {
    FUN_140d9aada(param_1 + 0x28,param_2 + 0x28);
    FUN_140d9aada(param_1 + 0x40,param_2 + 0x40);
    FUN_140d9aada(param_1 + 0x58,param_2 + 0x58);
    FUN_140d9aada(param_1 + 0x70,param_2 + 0x70);
    FUN_1401b31d8(param_1 + 0x88,param_2 + 0x88);
  }
  return param_1;
}



// FUNCTION 1489fab7a FUN_1489fab7a body=93 status=ok
// SIG undefined FUN_1489fab7a(void)

undefined8 * FUN_1489fab7a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e91ad4(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1489fabd8(param_1,iVar1);
      FUN_1489fac47(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1489fabd8 FUN_1489fabd8 body=111 status=ok
// SIG undefined FUN_1489fabd8(void)

void FUN_1489fabd8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x78,8);
    iVar2 = (int)(uVar1 / 0x78);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x78,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1489fac47 FUN_1489fac47 body=151 status=ok
// SIG undefined FUN_1489fac47(void)

void FUN_1489fac47(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_1 + -8) = *(undefined8 *)(param_2 + -8);
      FUN_1418b75e8(param_1,param_2);
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x44) = 0xffffffff00000080;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      FUN_140d188f2(param_1 + 0x18,param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
      param_1 = param_1 + 0x78;
      param_2 = param_2 + 0x78;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1489fad56 FUN_1489fad56 body=150 status=ok
// SIG undefined FUN_1489fad56(void)

undefined8 FUN_1489fad56(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      lVar1 = param_2 + lVar3;
      lVar2 = param_3 + lVar3;
      FUN_141289ada(lVar1 + 8,lVar2 + 8);
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
      *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar2 + 0x20);
      lVar1 = param_2 + 0x28 + lVar3;
      FUN_144a787a6(lVar1,param_3 + lVar3 + 0x28);
      *(undefined1 *)(lVar1 + 0x10) = *(undefined1 *)(param_3 + lVar3 + 0x38);
      FUN_148618b04(param_2 + lVar3 + 0x40,param_3 + lVar3 + 0x40);
      lVar3 = lVar3 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1489fae14 FUN_1489fae14 body=59 status=ok
// SIG undefined FUN_1489fae14(void)

undefined8 FUN_1489fae14(longlong *param_1)

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



// FUNCTION 1489fae5a FUN_1489fae5a body=34 status=ok
// SIG undefined FUN_1489fae5a(void)

void FUN_1489fae5a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_14586ba2a(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1489faec2 FUN_1489faec2 body=57 status=ok
// SIG undefined FUN_1489faec2(void)

void FUN_1489faec2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb92138 == 0) {
    uVar1 = FUN_140e19277();
    DAT_14cb92138 = FUN_140002ddd(FUN_14656c2aa,uVar1,L"GbxUIPageDef");
  }
  return;
}



// FUNCTION 1489faefc FUN_1489faefc body=28 status=ok
// SIG undefined FUN_1489faefc(void)

undefined8 FUN_1489faefc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1489faf48 FUN_1489faf48 body=63 status=ok
// SIG undefined FUN_1489faf48(void)

undefined1 FUN_1489faf48(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fb120(param_2,param_3);
    param_3 = param_3 + 0x150;
    param_2 = param_2 + 0x150;
  }
  return 1;
}



// FUNCTION 1489fafb0 FUN_1489fafb0 body=59 status=ok
// SIG undefined FUN_1489fafb0(void)

undefined8 FUN_1489fafb0(longlong *param_1)

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



// FUNCTION 1489faffc FUN_1489faffc body=38 status=ok
// SIG undefined FUN_1489faffc(void)

void FUN_1489faffc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x150) == '\x01') {
    FUN_14107e6dc(param_2);
    *(undefined1 *)(param_2 + 0x150) = 0;
  }
  return;
}



// FUNCTION 1489fb120 FUN_1489fb120 body=198 status=ok
// SIG undefined FUN_1489fb120(void)

longlong FUN_1489fb120(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_1446dcc2e(param_1 + 0x18,param_2 + 0x18);
  FUN_148618b04(param_1 + 0x28,param_2 + 0x28);
  FUN_144a787a6(param_1 + 0x38,param_2 + 0x38);
  FUN_1489fb1e6(param_1 + 0x48,param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 100);
  uVar2 = *(undefined4 *)(param_2 + 0x68);
  uVar3 = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  *(undefined8 *)(param_1 + 0x6e) = *(undefined8 *)(param_2 + 0x6e);
  FUN_1489fb23a(param_1 + 0x78,param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  uVar1 = *(undefined4 *)(param_2 + 0x94);
  uVar2 = *(undefined4 *)(param_2 + 0x98);
  uVar3 = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  *(undefined4 *)(param_1 + 0x9c) = uVar3;
  FUN_144a787a6(param_1 + 0xa0,param_2 + 0xa0);
  FUN_140d188f2(param_1 + 0xb0,param_2 + 0xb0);
  FUN_1489fb2e8(param_1 + 0x100,param_2 + 0x100);
  return param_1;
}



// FUNCTION 1489fb1e6 FUN_1489fb1e6 body=84 status=ok
// SIG undefined FUN_1489fb1e6(void)

longlong * FUN_1489fb1e6(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1489fb23a FUN_1489fb23a body=84 status=ok
// SIG undefined FUN_1489fb23a(void)

undefined8 * FUN_1489fb23a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1489fb28e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1489fb28e FUN_1489fb28e body=90 status=ok
// SIG undefined FUN_1489fb28e(void)

void FUN_1489fb28e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_144a3809e((longlong)param_2,1);
    iVar2 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  if (param_3 < iVar2) {
    FUN_1446f8d3c(param_1,0,iVar2,1,1);
    param_3 = iVar2;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1489fb2e8 FUN_1489fb2e8 body=122 status=ok
// SIG undefined FUN_1489fb2e8(void)

longlong FUN_1489fb2e8(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_1489fb362(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1489fb362 FUN_1489fb362 body=257 status=ok
// SIG undefined FUN_1489fb362(void)

longlong * FUN_1489fb362(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14107e862(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar5 = 0;
      uVar6 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar5) = *(undefined4 *)(lVar2 + lVar5);
          *(undefined4 *)(lVar3 + 4 + lVar5) = *(undefined4 *)(lVar2 + 4 + lVar5);
        }
        else {
          *(undefined8 *)(lVar3 + lVar5) = *(undefined8 *)(lVar2 + lVar5);
          FUN_1418b75e8(lVar5 + lVar3 + 8,lVar2 + 8 + lVar5);
          *(undefined8 *)(lVar3 + 0x20 + lVar5) = *(undefined8 *)(lVar2 + 0x20 + lVar5);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x28;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 1489fb464 FUN_1489fb464 body=28 status=ok
// SIG undefined FUN_1489fb464(void)

undefined8 FUN_1489fb464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1489fb4ca FUN_1489fb4ca body=101 status=ok
// SIG undefined FUN_1489fb4ca(void)

undefined1 FUN_1489fb4ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
          FUN_14689c22e();
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



// FUNCTION 1489fb558 FUN_1489fb558 body=59 status=ok
// SIG undefined FUN_1489fb558(void)

undefined8 FUN_1489fb558(longlong *param_1)

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



// FUNCTION 1489fb5fa FUN_1489fb5fa body=37 status=ok
// SIG undefined FUN_1489fb5fa(void)

void FUN_1489fb5fa(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xb0);
  FUN_1408f3f9e(param_2);
  return;
}



// FUNCTION 1489fb64c FUN_1489fb64c body=63 status=ok
// SIG undefined FUN_1489fb64c(void)

undefined1 FUN_1489fb64c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fb7d2(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 1489fb6b4 FUN_1489fb6b4 body=59 status=ok
// SIG undefined FUN_1489fb6b4(void)

undefined8 FUN_1489fb6b4(longlong *param_1)

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



// FUNCTION 1489fb700 FUN_1489fb700 body=38 status=ok
// SIG undefined FUN_1489fb700(void)

void FUN_1489fb700(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_140fe7f26(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 1489fb774 FUN_1489fb774 body=38 status=ok
// SIG undefined FUN_1489fb774(void)

undefined8 FUN_1489fb774(undefined8 param_1,int param_2)

{
  FUN_140fe7f26();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489fb79a FUN_1489fb79a body=55 status=ok
// SIG undefined FUN_1489fb79a(void)

void FUN_1489fb79a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb92248 == 0) {
    uVar1 = FUN_140e19277();
    DAT_14cb92248 = FUN_140002ddd(FUN_1418b752f,uVar1,L"GbxUIWidgetDataBase");
  }
  return;
}



// FUNCTION 1489fb7d2 FUN_1489fb7d2 body=184 status=ok
// SIG undefined FUN_1489fb7d2(void)

longlong FUN_1489fb7d2(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  FUN_144a787a6(param_1 + 0x28,param_2 + 0x28);
  FUN_144a787a6(param_1 + 0x38,param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  uVar5 = *(undefined4 *)(param_2 + 0x4c);
  uVar6 = *(undefined4 *)(param_2 + 0x50);
  uVar7 = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  *(undefined4 *)(param_1 + 0x50) = uVar6;
  *(undefined4 *)(param_1 + 0x54) = uVar7;
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  lVar3 = *(longlong *)(param_2 + 0x68);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  *(longlong *)(param_1 + 0x68) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  uVar8 = *(undefined8 *)(param_2 + 0x78);
  uVar9 = *(undefined8 *)(param_2 + 0x80);
  uVar10 = *(undefined8 *)(param_2 + 0x88);
  uVar11 = *(undefined8 *)(param_2 + 0x90);
  uVar12 = *(undefined8 *)(param_2 + 0x98);
  uVar13 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = uVar13;
  *(undefined8 *)(param_1 + 0x90) = uVar11;
  *(undefined8 *)(param_1 + 0x98) = uVar12;
  *(undefined8 *)(param_1 + 0x80) = uVar9;
  *(undefined8 *)(param_1 + 0x88) = uVar10;
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  *(undefined8 *)(param_1 + 0x78) = uVar8;
  return param_1;
}



// FUNCTION 1489fb8aa FUN_1489fb8aa body=63 status=ok
// SIG undefined FUN_1489fb8aa(void)

undefined1 FUN_1489fb8aa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fbae8(param_2,param_3);
    param_3 = param_3 + 0x268;
    param_2 = param_2 + 0x268;
  }
  return 1;
}



// FUNCTION 1489fb912 FUN_1489fb912 body=59 status=ok
// SIG undefined FUN_1489fb912(void)

undefined8 FUN_1489fb912(longlong *param_1)

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



// FUNCTION 1489fb95e FUN_1489fb95e body=38 status=ok
// SIG undefined FUN_1489fb95e(void)

void FUN_1489fb95e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x268) == '\x01') {
    FUN_140cc81b0(param_2);
    *(undefined1 *)(param_2 + 0x268) = 0;
  }
  return;
}



// FUNCTION 1489fb9be FUN_1489fb9be body=297 status=ok
// SIG undefined FUN_1489fb9be(void)

undefined8 * FUN_1489fb9be(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b471330;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  memset(param_1 + 9,0,0xa1);
  *(undefined4 *)((longlong)param_1 + 0xec) = 3;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined2 *)(param_1 + 0x36) = 0;
  *(undefined8 *)((longlong)param_1 + 0x213) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21b) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  return param_1;
}



// FUNCTION 1489fbae8 FUN_1489fbae8 body=317 status=ok
// SIG undefined FUN_1489fbae8(void)

longlong FUN_1489fbae8(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  FUN_1403de7ba(param_1 + 0x20,param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  FUN_1489fbc26(param_1 + 0x48,param_2 + 0x48);
  FUN_144a787a6(param_1 + 0x60,param_2 + 0x60);
  FUN_1489fbc7a(param_1 + 0x70,param_2 + 0x70);
  FUN_1403de7ba(param_1 + 0x88,param_2 + 0x88);
  FUN_1403de7ba(param_1 + 0xa8,param_2 + 0xa8);
  FUN_1403de7ba(param_1 + 200,param_2 + 200);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  FUN_1411c9b4c(param_1 + 0xf0,param_2 + 0xf0);
  FUN_1489fbde6(param_1 + 0x100,param_2 + 0x100);
  FUN_145eff776(param_1 + 0x150,param_2 + 0x150);
  FUN_1489fbcce(param_1 + 0x1a0,param_2 + 0x1a0);
  *(undefined2 *)(param_1 + 0x1b0) = *(undefined2 *)(param_2 + 0x1b0);
  FUN_1489fbd2c(param_1 + 0x1b8,param_2 + 0x1b8);
  FUN_1489fbd8e(param_1 + 0x238,param_2 + 0x238);
  FUN_144a787a6(param_1 + 0x248,param_2 + 0x248);
  FUN_148618b04(param_1 + 600,param_2 + 600);
  return param_1;
}



// FUNCTION 1489fbc26 FUN_1489fbc26 body=84 status=ok
// SIG undefined FUN_1489fbc26(void)

longlong * FUN_1489fbc26(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1489fbc7a FUN_1489fbc7a body=84 status=ok
// SIG undefined FUN_1489fbc7a(void)

longlong * FUN_1489fbc7a(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1489fbcce FUN_1489fbcce body=93 status=ok
// SIG undefined FUN_1489fbcce(void)

undefined8 * FUN_1489fbcce(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140cc8428(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1489fbfa6(param_1,iVar1);
      FUN_1489fc019(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1489fbd2c FUN_1489fbd2c body=97 status=ok
// SIG undefined FUN_1489fbd2c(void)

undefined8 * FUN_1489fbd2c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_1403de7ba(param_1 + 1,param_2 + 1);
  FUN_1403de7ba(param_1 + 5,param_2 + 5);
  FUN_1403de7ba(param_1 + 9,param_2 + 9);
  *(undefined2 *)(param_1 + 0xd) = *(undefined2 *)(param_2 + 0xd);
  *(undefined1 *)((longlong)param_1 + 0x6a) = *(undefined1 *)((longlong)param_2 + 0x6a);
  FUN_1446dcc2e(param_1 + 0xe,param_2 + 0xe);
  return param_1;
}



// FUNCTION 1489fbd8e FUN_1489fbd8e body=88 status=ok
// SIG undefined FUN_1489fbd8e(void)

undefined8 * FUN_1489fbd8e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1489fc0a0(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1489fbde6 FUN_1489fbde6 body=122 status=ok
// SIG undefined FUN_1489fbde6(void)

longlong FUN_1489fbde6(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_1489fbe60(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1489fbe60 FUN_1489fbe60 body=211 status=ok
// SIG undefined FUN_1489fbe60(void)

undefined8 * FUN_1489fbe60(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140cc85ea(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447030e2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_1489fbf34(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 0xc) = *(undefined8 *)(puVar4 + 0xc);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0xe;
        puVar6 = puVar6 + 0xe;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1489fbf34 FUN_1489fbf34 body=114 status=ok
// SIG undefined FUN_1489fbf34(void)

undefined8 * FUN_1489fbf34(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  _Src = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1489fbfa6 FUN_1489fbfa6 body=115 status=ok
// SIG undefined FUN_1489fbfa6(void)

void FUN_1489fbfa6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1489fc019 FUN_1489fc019 body=134 status=ok
// SIG undefined FUN_1489fc019(void)

void FUN_1489fc019(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar5[-3] = *param_2;
      uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar3 = *(undefined4 *)(param_2 + 2);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      *puVar5 = 0;
      iVar1 = *(int *)(param_2 + 4);
      _Src = (void *)param_2[3];
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 5;
      puVar5 = puVar5 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1489fc0a0 FUN_1489fc0a0 body=98 status=ok
// SIG undefined FUN_1489fc0a0(void)

void FUN_1489fc0a0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1489fc104 FUN_1489fc104 body=104 status=ok
// SIG undefined FUN_1489fc104(void)

undefined8 FUN_1489fc104(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_148a0133c(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489fc1a2 FUN_1489fc1a2 body=94 status=ok
// SIG undefined FUN_1489fc1a2(void)

undefined8 FUN_1489fc1a2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar3);
      lVar2 = param_2 + 8 + lVar3;
      *(undefined8 *)(lVar2 + -8) = *puVar1;
      FUN_144a787a6(lVar2,puVar1 + 1);
      *(undefined8 *)(lVar2 + 0x10) = puVar1[3];
      lVar3 = lVar3 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1489fc228 FUN_1489fc228 body=59 status=ok
// SIG undefined FUN_1489fc228(void)

undefined8 FUN_1489fc228(longlong *param_1)

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



// FUNCTION 1489fc26e FUN_1489fc26e body=38 status=ok
// SIG undefined FUN_1489fc26e(void)

void FUN_1489fc26e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1489fc2fe FUN_1489fc2fe body=63 status=ok
// SIG undefined FUN_1489fc2fe(void)

undefined1 FUN_1489fc2fe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fc49a(param_2,param_3);
    param_3 = param_3 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return 1;
}



// FUNCTION 1489fc366 FUN_1489fc366 body=59 status=ok
// SIG undefined FUN_1489fc366(void)

undefined8 FUN_1489fc366(longlong *param_1)

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



// FUNCTION 1489fc3b2 FUN_1489fc3b2 body=38 status=ok
// SIG undefined FUN_1489fc3b2(void)

void FUN_1489fc3b2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_1489fc41a(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 1489fc41a FUN_1489fc41a body=128 status=ok
// SIG undefined FUN_1489fc41a(void)

void FUN_1489fc41a(longlong param_1)

{
  FUN_140d4f835(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1489fc49a FUN_1489fc49a body=131 status=ok
// SIG undefined FUN_1489fc49a(void)

undefined8 * FUN_1489fc49a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_1489fc51e(param_1 + 1,param_2 + 1);
  FUN_1489fc572(param_1 + 4,param_2 + 4);
  FUN_144a787a6(param_1 + 7,param_2 + 7);
  FUN_144a787a6(param_1 + 9,param_2 + 9);
  param_1[0xb] = param_2[0xb];
  FUN_144a787a6(param_1 + 0xc,param_2 + 0xc);
  FUN_140bee9ec(param_1 + 0xe,param_2 + 0xe);
  FUN_1489fc5c6(param_1 + 0x10,param_2 + 0x10);
  return param_1;
}



// FUNCTION 1489fc51e FUN_1489fc51e body=84 status=ok
// SIG undefined FUN_1489fc51e(void)

longlong * FUN_1489fc51e(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1489fc572 FUN_1489fc572 body=84 status=ok
// SIG undefined FUN_1489fc572(void)

longlong * FUN_1489fc572(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1489fc5c6 FUN_1489fc5c6 body=93 status=ok
// SIG undefined FUN_1489fc5c6(void)

undefined8 * FUN_1489fc5c6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d4f835(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1489fc624(param_1,iVar1);
      FUN_1489fc686(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1489fc624 FUN_1489fc624 body=98 status=ok
// SIG undefined FUN_1489fc624(void)

void FUN_1489fc624(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1489fc686 FUN_1489fc686 body=52 status=ok
// SIG undefined FUN_1489fc686(void)

void FUN_1489fc686(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1489fc6ba(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 1489fc6ba FUN_1489fc6ba body=113 status=ok
// SIG undefined FUN_1489fc6ba(void)

undefined8 * FUN_1489fc6ba(undefined8 *param_1,undefined8 *param_2)

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
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 1489fc752 FUN_1489fc752 body=105 status=ok
// SIG undefined FUN_1489fc752(void)

undefined1 FUN_1489fc752(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fc49a(param_2,param_3);
    FUN_1489fc898(param_2 + 0x90,param_3 + 0x90);
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 1489fc7e4 FUN_1489fc7e4 body=59 status=ok
// SIG undefined FUN_1489fc7e4(void)

undefined8 FUN_1489fc7e4(longlong *param_1)

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



// FUNCTION 1489fc830 FUN_1489fc830 body=38 status=ok
// SIG undefined FUN_1489fc830(void)

void FUN_1489fc830(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_140d4f790(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 1489fc898 FUN_1489fc898 body=93 status=ok
// SIG undefined FUN_1489fc898(void)

undefined8 * FUN_1489fc898(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d4f864(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1489fc8f6(param_1,iVar1);
      FUN_1489fc969(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1489fc8f6 FUN_1489fc8f6 body=115 status=ok
// SIG undefined FUN_1489fc8f6(void)

void FUN_1489fc8f6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x90,8);
    iVar2 = (int)(uVar1 / 0x90);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x90,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1489fc969 FUN_1489fc969 body=60 status=ok
// SIG undefined FUN_1489fc969(void)

void FUN_1489fc969(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1489fc9a6(param_1,param_2);
    param_1 = param_1 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return;
}



// FUNCTION 1489fc9a6 FUN_1489fc9a6 body=436 status=ok
// SIG undefined FUN_1489fc9a6(void)

undefined8 * FUN_1489fc9a6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  FUN_1489fcb5a(param_1 + 1,param_2 + 1);
  FUN_14593ec7a(param_1 + 4,param_2 + 4);
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 8);
  pvVar2 = (void *)param_2[7];
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 10);
  pvVar2 = (void *)param_2[9];
  *(int *)(param_1 + 10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 9,iVar1,0);
    memcpy((void *)param_1[9],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0xd);
  pvVar2 = (void *)param_2[0xc];
  *(int *)(param_1 + 0xd) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xc,iVar1,0);
    memcpy((void *)param_1[0xc],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xe] = 0;
  iVar1 = *(int *)(param_2 + 0xf);
  uVar3 = param_2[0xe];
  *(int *)(param_1 + 0xf) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    FUN_140b856de(param_1 + 0xe,iVar1,0);
    FUN_140b8566a(param_1[0xe],uVar3,iVar1);
  }
  param_1[0x10] = 0;
  iVar1 = *(int *)(param_2 + 0x11);
  uVar3 = param_2[0x10];
  *(int *)(param_1 + 0x11) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  }
  else {
    FUN_1489fc624(param_1 + 0x10,iVar1,0);
    FUN_1489fc686(param_1[0x10],uVar3,iVar1);
  }
  return param_1;
}



// FUNCTION 1489fcb5a FUN_1489fcb5a body=71 status=ok
// SIG undefined FUN_1489fcb5a(void)

undefined8 * FUN_1489fcb5a(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1489fcbcc FUN_1489fcbcc body=83 status=ok
// SIG undefined FUN_1489fcbcc(void)

undefined8 FUN_1489fcbcc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      FUN_1489fcd3a(param_2 + -0x10,param_3 + -0x10);
      FUN_1489fc5c6(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1489fcc48 FUN_1489fcc48 body=59 status=ok
// SIG undefined FUN_1489fcc48(void)

undefined8 FUN_1489fcc48(longlong *param_1)

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



// FUNCTION 1489fcc8e FUN_1489fcc8e body=32 status=ok
// SIG undefined FUN_1489fcc8e(void)

void FUN_1489fcc8e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1489fccf0(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1489fccf0 FUN_1489fccf0 body=73 status=ok
// SIG undefined FUN_1489fccf0(void)

void FUN_1489fccf0(longlong param_1)

{
  FUN_140d4f835(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_140f6e90b(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1489fcd3a FUN_1489fcd3a body=93 status=ok
// SIG undefined FUN_1489fcd3a(void)

undefined8 * FUN_1489fcd3a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140f6e90b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1489fcd98(param_1,iVar1);
      FUN_1489fce0b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1489fcd98 FUN_1489fcd98 body=115 status=ok
// SIG undefined FUN_1489fcd98(void)

void FUN_1489fcd98(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xa0,8);
    iVar2 = (int)(uVar1 / 0xa0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xa0,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1489fce0b FUN_1489fce0b body=60 status=ok
// SIG undefined FUN_1489fce0b(void)

void FUN_1489fce0b(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1489fce48(param_1,param_2);
    param_1 = param_1 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return;
}



// FUNCTION 1489fce48 FUN_1489fce48 body=113 status=ok
// SIG undefined FUN_1489fce48(void)

longlong FUN_1489fce48(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_1489fc9a6();
  *(undefined8 *)(param_1 + 0x90) = 0;
  iVar1 = *(int *)(param_2 + 0x98);
  uVar2 = *(undefined8 *)(param_2 + 0x90);
  *(int *)(param_1 + 0x98) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  else {
    FUN_1489fc8f6((undefined8 *)(param_1 + 0x90),iVar1,0);
    FUN_1489fc969(*(undefined8 *)(param_1 + 0x90),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1489fceba FUN_1489fceba body=63 status=ok
// SIG undefined FUN_1489fceba(void)

void FUN_1489fceba(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x260);
  FUN_1489fb9be(param_2);
  *param_2 = &PTR_FUN_14b471a50;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0;
  *(undefined1 *)(param_2 + 8) = 1;
  return;
}



// FUNCTION 1489fcf10 FUN_1489fcf10 body=105 status=ok
// SIG undefined FUN_1489fcf10(void)

undefined1 FUN_1489fcf10(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fbae8(param_2,param_3);
    FUN_1489fd0a8(param_2 + 0x268,param_3 + 0x268);
    param_3 = param_3 + 0x278;
    param_2 = param_2 + 0x278;
  }
  return 1;
}



// FUNCTION 1489fcfa2 FUN_1489fcfa2 body=59 status=ok
// SIG undefined FUN_1489fcfa2(void)

undefined8 FUN_1489fcfa2(longlong *param_1)

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



// FUNCTION 1489fcfee FUN_1489fcfee body=38 status=ok
// SIG undefined FUN_1489fcfee(void)

void FUN_1489fcfee(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x278) == '\x01') {
    FUN_1489fd066(param_2);
    *(undefined1 *)(param_2 + 0x278) = 0;
  }
  return;
}



// FUNCTION 1489fd066 FUN_1489fd066 body=66 status=ok
// SIG undefined FUN_1489fd066(void)

void FUN_1489fd066(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b471a50;
  FUN_140fd13c6(param_1[0x4d],*(undefined4 *)(param_1 + 0x4e));
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  FUN_140cc81b0(param_1);
  return;
}



// FUNCTION 1489fd0a8 FUN_1489fd0a8 body=93 status=ok
// SIG undefined FUN_1489fd0a8(void)

undefined8 * FUN_1489fd0a8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140fd13c6(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1489fd106(param_1,iVar1);
      FUN_1489fd179(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1489fd106 FUN_1489fd106 body=115 status=ok
// SIG undefined FUN_1489fd106(void)

void FUN_1489fd106(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1489fd179 FUN_1489fd179 body=52 status=ok
// SIG undefined FUN_1489fd179(void)

void FUN_1489fd179(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1489fd1ae(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 1489fd1ae FUN_1489fd1ae body=162 status=ok
// SIG undefined FUN_1489fd1ae(void)

undefined8 * FUN_1489fd1ae(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  uVar2 = param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1489fcd98(param_1 + 1,iVar1,0);
    FUN_1489fce0b(param_1[1],uVar2,iVar1);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  uVar2 = param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1489fc624(param_1 + 3,iVar1,0);
    FUN_1489fc686(param_1[3],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1489fd29e FUN_1489fd29e body=54 status=ok
// SIG undefined FUN_1489fd29e(void)

undefined1 FUN_1489fd29e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fd41e(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 1489fd2fc FUN_1489fd2fc body=59 status=ok
// SIG undefined FUN_1489fd2fc(void)

undefined8 FUN_1489fd2fc(longlong *param_1)

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



// FUNCTION 1489fd342 FUN_1489fd342 body=32 status=ok
// SIG undefined FUN_1489fd342(void)

void FUN_1489fd342(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1489fd39c(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1489fd39c FUN_1489fd39c body=129 status=ok
// SIG undefined FUN_1489fd39c(void)

void FUN_1489fd39c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b471bd0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[5];
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
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1489fd41e FUN_1489fd41e body=115 status=ok
// SIG undefined FUN_1489fd41e(void)

longlong FUN_1489fd41e(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  FUN_1446dcc2e(param_1 + 0x20,param_2 + 0x20);
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
  FUN_144a787a6(param_1 + 0x58,param_2 + 0x58);
  *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(param_2 + 0x68);
  *(undefined1 *)(param_1 + 0x6a) = *(undefined1 *)(param_2 + 0x6a);
  return param_1;
}



// FUNCTION 1489fd492 FUN_1489fd492 body=28 status=ok
// SIG undefined FUN_1489fd492(void)

undefined8 FUN_1489fd492(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1489fd4c0 FUN_1489fd4c0 body=37 status=ok
// SIG undefined FUN_1489fd4c0(void)

void FUN_1489fd4c0(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xb0);
  FUN_1415a78b6(param_2);
  return;
}



// FUNCTION 1489fd50c FUN_1489fd50c body=63 status=ok
// SIG undefined FUN_1489fd50c(void)

undefined1 FUN_1489fd50c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fd634(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 1489fd574 FUN_1489fd574 body=59 status=ok
// SIG undefined FUN_1489fd574(void)

undefined8 FUN_1489fd574(longlong *param_1)

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



// FUNCTION 1489fd5c0 FUN_1489fd5c0 body=38 status=ok
// SIG undefined FUN_1489fd5c0(void)

void FUN_1489fd5c0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_140716244(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 1489fd634 FUN_1489fd634 body=328 status=ok
// SIG undefined FUN_1489fd634(void)

undefined4 * FUN_1489fd634(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  plVar1 = *(longlong **)(param_2 + 4);
  plVar2 = *(longlong **)(param_1 + 4);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 4) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  param_1[6] = param_2[6];
  plVar1 = *(longlong **)(param_2 + 8);
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  param_1[10] = param_2[10];
  plVar1 = *(longlong **)(param_2 + 0xc);
  plVar2 = *(longlong **)(param_1 + 0xc);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xc) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  param_1[0xe] = param_2[0xe];
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x14,param_2 + 0x14);
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  FUN_144a787a6(param_1 + 0x1c,param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  FUN_1489fd77c(param_1 + 0x22,param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_2 + 0x26);
  FUN_1489fd7da(param_1 + 0x28,param_2 + 0x28);
  return param_1;
}



// FUNCTION 1489fd77c FUN_1489fd77c body=93 status=ok
// SIG undefined FUN_1489fd77c(void)

undefined8 * FUN_1489fd77c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1407ccdd0(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1415eee28(param_1,iVar1);
      FUN_1415eed97(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1489fd7da FUN_1489fd7da body=95 status=ok
// SIG undefined FUN_1489fd7da(void)

undefined8 * FUN_1489fd7da(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1456d172d(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_141340a86(param_1,iVar1);
      FUN_145903fdb(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1489fd88e FUN_1489fd88e body=89 status=ok
// SIG undefined FUN_1489fd88e(void)

undefined8 FUN_1489fd88e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_3 + -0x20);
      FUN_1407161be(param_2 + -0x10,param_3 + -0x10);
      FUN_1489fd77c(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1489fd910 FUN_1489fd910 body=59 status=ok
// SIG undefined FUN_1489fd910(void)

undefined8 FUN_1489fd910(longlong *param_1)

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



// FUNCTION 1489fd956 FUN_1489fd956 body=32 status=ok
// SIG undefined FUN_1489fd956(void)

void FUN_1489fd956(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_1407ccd86(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1489fd9c6 FUN_1489fd9c6 body=37 status=ok
// SIG undefined FUN_1489fd9c6(void)

void FUN_1489fd9c6(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1a0);
  FUN_145965434(param_2);
  return;
}



// FUNCTION 1489fda18 FUN_1489fda18 body=63 status=ok
// SIG undefined FUN_1489fda18(void)

undefined1 FUN_1489fda18(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fdb7c(param_2,param_3);
    param_3 = param_3 + 0x1a0;
    param_2 = param_2 + 0x1a0;
  }
  return 1;
}



// FUNCTION 1489fda80 FUN_1489fda80 body=59 status=ok
// SIG undefined FUN_1489fda80(void)

undefined8 FUN_1489fda80(longlong *param_1)

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



// FUNCTION 1489fdacc FUN_1489fdacc body=40 status=ok
// SIG undefined FUN_1489fdacc(void)

void FUN_1489fdacc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_1457debcc(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 1489fdb42 FUN_1489fdb42 body=57 status=ok
// SIG undefined FUN_1489fdb42(void)

void FUN_1489fdb42(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb923f8 == 0) {
    uVar1 = FUN_140e19277();
    DAT_14cb923f8 = FUN_140002ddd(FUN_14656cc47,uVar1,L"GbxUIData_ListMenu");
  }
  return;
}



// FUNCTION 1489fdb7c FUN_1489fdb7c body=238 status=ok
// SIG undefined FUN_1489fdb7c(void)

longlong FUN_1489fdb7c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  FUN_1489fb7d2();
  plVar1 = *(longlong **)(param_2 + 0xb0);
  plVar2 = *(longlong **)(param_1 + 0xb0);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xb0) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  FUN_1407161be(param_1 + 0xc0,param_2 + 0xc0);
  uVar3 = *(undefined8 *)(param_2 + 0xd5);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xd5) = uVar3;
  FUN_144a787a6(param_1 + 0xe0,param_2 + 0xe0);
  FUN_1489fdc6a(param_1 + 0xf0,param_2 + 0xf0);
  if (*(int *)(param_1 + 0x198) != *(int *)(param_2 + 0x198) || *(int *)(param_1 + 0x198) == 0) {
    *(int *)(param_1 + 0x198) = *(int *)(param_2 + 0x198);
    FUN_140bee9ec(param_1 + 0x188,param_2 + 0x188);
  }
  return param_1;
}



// FUNCTION 1489fdc6a FUN_1489fdc6a body=389 status=ok
// SIG undefined FUN_1489fdc6a(void)

longlong FUN_1489fdc6a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_144a787a6();
  plVar1 = *(longlong **)(param_2 + 0x10);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x10) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  plVar1 = *(longlong **)(param_2 + 0x20);
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x20) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  plVar1 = *(longlong **)(param_2 + 0x30);
  plVar2 = *(longlong **)(param_1 + 0x30);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x30) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  plVar1 = *(longlong **)(param_2 + 0x40);
  plVar2 = *(longlong **)(param_1 + 0x40);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x40) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  FUN_144a787a6(param_1 + 0x50,param_2 + 0x50);
  plVar1 = *(longlong **)(param_2 + 0x60);
  plVar2 = *(longlong **)(param_1 + 0x60);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x60) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  FUN_1489fddf0(param_1 + 0x70,param_2 + 0x70);
  FUN_1489fde4e(param_1 + 0x80,param_2 + 0x80);
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  return param_1;
}



// FUNCTION 1489fddf0 FUN_1489fddf0 body=93 status=ok
// SIG undefined FUN_1489fddf0(void)

undefined8 * FUN_1489fddf0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140fe8054(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1489fdeac(param_1,iVar1);
      FUN_1489fdf1f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1489fde4e FUN_1489fde4e body=93 status=ok
// SIG undefined FUN_1489fde4e(void)

undefined8 * FUN_1489fde4e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140f9c02e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1489fdf72(param_1,iVar1);
      FUN_1489fdfd4(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1489fdeac FUN_1489fdeac body=115 status=ok
// SIG undefined FUN_1489fdeac(void)

void FUN_1489fdeac(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1489fdf1f FUN_1489fdf1f body=83 status=ok
// SIG undefined FUN_1489fdf1f(void)

void FUN_1489fdf1f(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined1 *)(param_1 + lVar2) = *(undefined1 *)(param_2 + lVar2);
      plVar1 = *(longlong **)(param_2 + 8 + lVar2);
      *(longlong **)(param_1 + 8 + lVar2) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 0x10 + lVar2) = *(undefined4 *)(param_2 + 0x10 + lVar2);
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1489fdf72 FUN_1489fdf72 body=98 status=ok
// SIG undefined FUN_1489fdf72(void)

void FUN_1489fdf72(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1489fdfd4 FUN_1489fdfd4 body=52 status=ok
// SIG undefined FUN_1489fdfd4(void)

void FUN_1489fdfd4(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14656d756(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 1489fe00a FUN_1489fe00a body=55 status=ok
// SIG undefined FUN_1489fe00a(void)

void FUN_1489fe00a(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1400b22c2(param_2,&DAT_149e02088);
  FUN_1400b22c2(param_2 + 2,&DAT_149e02088);
  return;
}



// FUNCTION 1489fe042 FUN_1489fe042 body=48 status=ok
// SIG undefined FUN_1489fe042(void)

void FUN_1489fe042(undefined8 param_1,longlong param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  FUN_1400b22c2(param_2 + 0x10,&DAT_149e02088);
  return;
}



// FUNCTION 1489fe072 FUN_1489fe072 body=47 status=ok
// SIG undefined FUN_1489fe072(void)

void FUN_1489fe072(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1489fe0b8 FUN_1489fe0b8 body=67 status=ok
// SIG undefined FUN_1489fe0b8(void)

undefined1 FUN_1489fe0b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 1489fe124 FUN_1489fe124 body=59 status=ok
// SIG undefined FUN_1489fe124(void)

undefined8 FUN_1489fe124(longlong *param_1)

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



// FUNCTION 1489fe1c2 FUN_1489fe1c2 body=51 status=ok
// SIG undefined FUN_1489fe1c2(void)

void FUN_1489fe1c2(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 1489fe1f6 FUN_1489fe1f6 body=62 status=ok
// SIG undefined FUN_1489fe1f6(void)

void FUN_1489fe1f6(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_2[1] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_2 + 2) = (int)plVar2[1];
  return;
}



// FUNCTION 1489fe234 FUN_1489fe234 body=51 status=ok
// SIG undefined FUN_1489fe234(void)

void FUN_1489fe234(undefined8 param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_2 = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_2 + 8) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_2 + 0x10) = (int)plVar2[1];
  return;
}



// FUNCTION 1489fe290 FUN_1489fe290 body=113 status=ok
// SIG undefined FUN_1489fe290(void)

undefined8 FUN_1489fe290(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      *(undefined1 *)(param_2 + lVar3) = *(undefined1 *)(param_3 + lVar3);
      plVar1 = *(longlong **)(param_3 + 8 + lVar3);
      plVar2 = *(longlong **)(param_2 + 8 + lVar3);
      if (plVar2 != plVar1) {
        *(longlong **)(param_2 + 8 + lVar3) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)(param_2 + 0x10 + lVar3) = *(undefined4 *)(param_3 + 0x10 + lVar3);
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1489fe32a FUN_1489fe32a body=59 status=ok
// SIG undefined FUN_1489fe32a(void)

undefined8 FUN_1489fe32a(longlong *param_1)

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



// FUNCTION 1489fe370 FUN_1489fe370 body=39 status=ok
// SIG undefined FUN_1489fe370(void)

void FUN_1489fe370(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong **)(param_2 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 8) + 0x10))();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1489fe3e8 FUN_1489fe3e8 body=37 status=ok
// SIG undefined FUN_1489fe3e8(void)

void FUN_1489fe3e8(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x98);
  FUN_1413f03d2(param_2);
  return;
}



// FUNCTION 1489fe434 FUN_1489fe434 body=63 status=ok
// SIG undefined FUN_1489fe434(void)

undefined1 FUN_1489fe434(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fdc6a(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 1489fe49c FUN_1489fe49c body=59 status=ok
// SIG undefined FUN_1489fe49c(void)

undefined8 FUN_1489fe49c(longlong *param_1)

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



// FUNCTION 1489fe4e8 FUN_1489fe4e8 body=38 status=ok
// SIG undefined FUN_1489fe4e8(void)

void FUN_1489fe4e8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_140fe7f98(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 1489fe55e FUN_1489fe55e body=37 status=ok
// SIG undefined FUN_1489fe55e(void)

void FUN_1489fe55e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,200);
  FUN_1489fe6d4(param_2);
  return;
}



// FUNCTION 1489fe5aa FUN_1489fe5aa body=63 status=ok
// SIG undefined FUN_1489fe5aa(void)

undefined1 FUN_1489fe5aa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fe81c(param_2,param_3);
    param_3 = param_3 + 200;
    param_2 = param_2 + 200;
  }
  return 1;
}



// FUNCTION 1489fe612 FUN_1489fe612 body=59 status=ok
// SIG undefined FUN_1489fe612(void)

undefined8 FUN_1489fe612(longlong *param_1)

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



// FUNCTION 1489fe65e FUN_1489fe65e body=40 status=ok
// SIG undefined FUN_1489fe65e(void)

void FUN_1489fe65e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_1489fe760(param_2);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 1489fe6d4 FUN_1489fe6d4 body=140 status=ok
// SIG undefined FUN_1489fe6d4(void)

undefined8 * FUN_1489fe6d4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_144a5dc74(param_1 + 2);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0xffffffffff6c757e;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8f) = 0;
  FUN_140056680(param_1 + 0x13,&DAT_149dfb77a);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return param_1;
}



// FUNCTION 1489fe760 FUN_1489fe760 body=187 status=ok
// SIG undefined FUN_1489fe760(void)

void FUN_1489fe760(longlong *param_1)

{
  FUN_1407ccdd0(param_1[0x15],(int)param_1[0x16]);
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
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
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
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



// FUNCTION 1489fe81c FUN_1489fe81c body=272 status=ok
// SIG undefined FUN_1489fe81c(void)

longlong FUN_1489fe81c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_14054c6c4();
  plVar1 = *(longlong **)(param_2 + 0x10);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x10) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  FUN_144a787a6(param_1 + 0x60,param_2 + 0x60);
  FUN_144a787a6(param_1 + 0x70,param_2 + 0x70);
  FUN_144a787a6(param_1 + 0x80,param_2 + 0x80);
  *(undefined2 *)(param_1 + 0x90) = *(undefined2 *)(param_2 + 0x90);
  *(undefined1 *)(param_1 + 0x92) = *(undefined1 *)(param_2 + 0x92);
  FUN_144a787a6(param_1 + 0x98,param_2 + 0x98);
  FUN_1489fd77c(param_1 + 0xa8,param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  return param_1;
}



// FUNCTION 1489fe94c FUN_1489fe94c body=46 status=ok
// SIG undefined FUN_1489fe94c(void)

void FUN_1489fe94c(undefined8 param_1,longlong param_2)

{
  FUN_141091201(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1489fe990 FUN_1489fe990 body=68 status=ok
// SIG undefined FUN_1489fe990(void)

undefined8 FUN_1489fe990(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_1489fea98(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1489fe9fc FUN_1489fe9fc body=59 status=ok
// SIG undefined FUN_1489fe9fc(void)

undefined8 FUN_1489fe9fc(longlong *param_1)

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



// FUNCTION 1489fea98 FUN_1489fea98 body=93 status=ok
// SIG undefined FUN_1489fea98(void)

undefined8 * FUN_1489fea98(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141091201(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1489feaf6(param_1,iVar1);
      FUN_1489feb6c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1489feaf6 FUN_1489feaf6 body=118 status=ok
// SIG undefined FUN_1489feaf6(void)

void FUN_1489feaf6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 200,8);
    iVar2 = (int)(uVar1 / 200);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,200,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1489feb6c FUN_1489feb6c body=60 status=ok
// SIG undefined FUN_1489feb6c(void)

void FUN_1489feb6c(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1489feba8(param_1,param_2);
    param_1 = param_1 + 200;
    param_2 = param_2 + 200;
  }
  return;
}



// FUNCTION 1489feba8 FUN_1489feba8 body=833 status=ok
// SIG undefined FUN_1489feba8(void)

undefined8 * FUN_1489feba8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_144a06ca8(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 << 2);
  }
  plVar3 = (longlong *)param_2[2];
  param_1[2] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 10);
  pvVar2 = (void *)param_2[9];
  *(int *)(param_1 + 10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 9,iVar1,0);
    memcpy((void *)param_1[9],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0xd);
  pvVar2 = (void *)param_2[0xc];
  *(int *)(param_1 + 0xd) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xc,iVar1,0);
    memcpy((void *)param_1[0xc],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xe] = 0;
  iVar1 = *(int *)(param_2 + 0xf);
  pvVar2 = (void *)param_2[0xe];
  *(int *)(param_1 + 0xf) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xe,iVar1,0);
    memcpy((void *)param_1[0xe],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x10] = 0;
  iVar1 = *(int *)(param_2 + 0x11);
  pvVar2 = (void *)param_2[0x10];
  *(int *)(param_1 + 0x11) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x10,iVar1,0);
    memcpy((void *)param_1[0x10],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)((longlong)param_1 + 0x92) = *(undefined1 *)((longlong)param_2 + 0x92);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
  param_1[0x13] = 0;
  iVar1 = *(int *)(param_2 + 0x14);
  pvVar2 = (void *)param_2[0x13];
  *(int *)(param_1 + 0x14) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x13,iVar1,0);
    memcpy((void *)param_1[0x13],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x15] = 0;
  iVar1 = *(int *)(param_2 + 0x16);
  uVar4 = param_2[0x15];
  *(int *)(param_1 + 0x16) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  }
  else {
    FUN_1415eee28(param_1 + 0x15,iVar1,0);
    FUN_1415eed97(param_1[0x15],uVar4,iVar1);
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  param_1[0x17] = param_2[0x17];
  return param_1;
}



// FUNCTION 1489feeea FUN_1489feeea body=50 status=ok
// SIG undefined FUN_1489feeea(void)

void FUN_1489feeea(longlong param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_141091201(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1489fef1c FUN_1489fef1c body=68 status=ok
// SIG undefined FUN_1489fef1c(void)

void FUN_1489fef1c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,200);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b4735f0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xbf800000;
  return;
}



// FUNCTION 1489fef60 FUN_1489fef60 body=52 status=ok
// SIG undefined FUN_1489fef60(void)

void FUN_1489fef60(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b4735f0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xbf800000;
  return;
}



// FUNCTION 1489fefb8 FUN_1489fefb8 body=101 status=ok
// SIG undefined FUN_1489fefb8(void)

undefined1 FUN_1489fefb8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fb7d2(param_2,param_3);
    FUN_1489ff106(param_2 + 0xb0,param_3 + 0xb0);
    *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(param_3 + 0xc0);
    param_2 = param_2 + 200;
    param_3 = param_3 + 200;
  }
  return 1;
}



// FUNCTION 1489ff046 FUN_1489ff046 body=59 status=ok
// SIG undefined FUN_1489ff046(void)

undefined8 FUN_1489ff046(longlong *param_1)

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



// FUNCTION 1489ff092 FUN_1489ff092 body=38 status=ok
// SIG undefined FUN_1489ff092(void)

void FUN_1489ff092(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_145a24368(param_2);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 1489ff106 FUN_1489ff106 body=93 status=ok
// SIG undefined FUN_1489ff106(void)

undefined8 * FUN_1489ff106(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1410911c3(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1489ff164(param_1,iVar1);
      FUN_1489ff1d7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1489ff164 FUN_1489ff164 body=115 status=ok
// SIG undefined FUN_1489ff164(void)

void FUN_1489ff164(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1489ff1d7 FUN_1489ff1d7 body=52 status=ok
// SIG undefined FUN_1489ff1d7(void)

void FUN_1489ff1d7(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_143eaf378(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}


