// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14955127e FUN_14955127e body=45 status=ok
// SIG undefined FUN_14955127e(void)

void FUN_14955127e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = &PTR_FUN_14bd3d7a0;
  puVar1[1] = &PTR_FUN_14bd3d7e0;
  return;
}



// FUNCTION 1495512ac FUN_1495512ac body=31 status=ok
// SIG undefined FUN_1495512ac(void)

undefined8 FUN_1495512ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1495512e8 FUN_1495512e8 body=60 status=ok
// SIG undefined FUN_1495512e8(void)

void FUN_1495512e8(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14bd3d730;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 149551324 FUN_149551324 body=111 status=ok
// SIG undefined FUN_149551324(void)

void FUN_149551324(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  EnterCriticalSection(param_2);
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28,param_2 + 1);
  *puVar2 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14bd3d730;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
  }
  return;
}



// FUNCTION 149551394 Unwind@149551394 body=41 status=ok
// SIG undefined Unwind@149551394(void)

void Unwind_149551394(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) != 0) {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x20));
  }
  return;
}



// FUNCTION 1495513be Unwind@1495513be body=21 status=ok
// SIG undefined Unwind@1495513be(void)

void Unwind_1495513be(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1495513e0 FUN_1495513e0 body=21 status=ok
// SIG undefined FUN_1495513e0(void)

undefined8 FUN_1495513e0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1495513f6 FUN_1495513f6 body=29 status=ok
// SIG undefined FUN_1495513f6(void)

undefined8 FUN_1495513f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149551414 FUN_149551414 body=95 status=ok
// SIG undefined FUN_149551414(void)

void FUN_149551414(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_1448c2e86();
  FUN_145c85d54(&local_28);
  (**(code **)(*plVar1 + 0x28))(plVar1,local_28,param_1 + 0x10);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149551474 FUN_149551474 body=95 status=ok
// SIG undefined FUN_149551474(void)

void FUN_149551474(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_1448c2e86();
  FUN_145c85d54(&local_28);
  (**(code **)(*plVar1 + 0x30))(plVar1,local_28,param_1 + 0x10);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495514d4 FUN_1495514d4 body=29 status=ok
// SIG undefined FUN_1495514d4(void)

undefined8 FUN_1495514d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1495514f2 FUN_1495514f2 body=66 status=ok
// SIG undefined FUN_1495514f2(void)

undefined8 * FUN_1495514f2(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x60,0x10);
  FUN_14954a85e(uVar1);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 149551534 Unwind@149551534 body=32 status=ok
// SIG undefined Unwind@149551534(void)

void Unwind_149551534(undefined8 param_1,longlong param_2)

{
  FUN_1400020a8(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 149551554 FUN_149551554 body=90 status=ok
// SIG undefined FUN_149551554(void)

void FUN_149551554(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14bd3ca50;
  puVar1 = (undefined8 *)param_1[0xb];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  if (param_1[2] != 0) {
    plVar2 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return;
}



// FUNCTION 1495515ae Unwind@1495515ae body=20 status=ok
// SIG undefined Unwind@1495515ae(void)

void Unwind_1495515ae(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1495515ca FUN_1495515ca body=172 status=ok
// SIG undefined FUN_1495515ca(void)

void FUN_1495515ca(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  puVar2 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149551678(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149551678 FUN_149551678 body=186 status=ok
// SIG undefined FUN_149551678(void)

undefined4 FUN_149551678(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  uVar1 = FUN_149548f26(param_1 + 0xa8,&local_58,0xffffffff);
  if ((char)uVar1 != '\0') {
    puVar2 = local_58;
    if ((int)uStack_50 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_60,puVar2,1);
    *param_2 = local_60;
    *(undefined4 *)(param_2 + 1) = local_38;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_34;
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 149551738 FUN_149551738 body=44 status=ok
// SIG undefined FUN_149551738(void)

void FUN_149551738(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14954901c(param_1 + 0xa8);
  *param_3 = uVar1;
  return;
}



// FUNCTION 149551764 FUN_149551764 body=63 status=ok
// SIG undefined FUN_149551764(void)

void FUN_149551764(longlong param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_14954900a(param_1 + 0xa8);
  if (cVar1 != '\0') {
    FUN_149548fe6(param_1 + 0xa8);
    return;
  }
  return;
}



// FUNCTION 1495517a4 FUN_1495517a4 body=63 status=ok
// SIG undefined FUN_1495517a4(void)

void FUN_1495517a4(longlong param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_14954900a(param_1 + 0xa8);
  if (cVar1 != '\0') {
    FUN_149548ff8(param_1 + 0xa8);
    return;
  }
  return;
}



// FUNCTION 1495517ef FUN_1495517ef body=140 status=ok
// SIG undefined FUN_1495517ef(void)

void FUN_1495517ef(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  FUN_14955187c(&local_38);
  plVar1 = (longlong *)FUN_14479d2ce(param_1);
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_38);
  FUN_1495523e1(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14955187c FUN_14955187c body=95 status=ok
// SIG undefined FUN_14955187c(void)

undefined8 * FUN_14955187c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1495523e1(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14955241e(param_1,iVar1);
      FUN_149552491(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1495518dc FUN_1495518dc body=396 status=ok
// SIG undefined FUN_1495518dc(void)

void FUN_1495518dc(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  uint local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_60 [2];
  longlong local_50 [2];
  undefined8 local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1400b22c2(local_60,&DAT_149e02088);
  FUN_1400b22c2(local_50,&DAT_149e02088);
  local_40 = 0;
  local_38 = local_38 | 1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  plVar1 = local_60;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar2 = &DAT_149dfb77a;
  puVar3 = &DAT_149dfb77a;
  if ((int)plVar1[3] != 0) {
    puVar3 = (undefined2 *)plVar1[2];
  }
  local_78 = *(byte *)(plVar1 + 5) & 1;
  local_88 = (undefined4)plVar1[4];
  local_80 = *(undefined4 *)((longlong)plVar1 + 0x24);
  if ((int)plVar1[1] != 0) {
    puVar2 = (undefined2 *)*plVar1;
  }
  FUN_140002266(&local_70,
                L"Device Name: %s, \nDevice Id: %s, \nNum Channels: %u, \nSample Rate: %u, \nSupports Hardware AEC: %u, \n"
                ,puVar2,puVar3);
  if (&local_70 == param_3) {
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_70;
    local_70 = 0;
    *(undefined4 *)(param_3 + 1) = local_68;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_64;
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149551a6a FUN_149551a6a body=252 status=ok
// SIG undefined FUN_149551a6a(void)

void FUN_149551a6a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = *puVar1;
  local_30 = puVar1[1];
  FUN_149551b68(local_18);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149551b68 FUN_149551b68 body=532 status=ok
// SIG undefined FUN_149551b68(void)

/* WARNING: Removing unreachable block (ram,0x000149551cff) */
/* WARNING: Removing unreachable block (ram,0x000149551d0e) */

void FUN_149551b68(undefined8 param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  longlong local_d8;
  ulonglong uStack_d0;
  undefined1 local_c0 [8];
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 *local_a8;
  undefined8 local_98;
  undefined **local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  cVar6 = FUN_146269f19();
  if (cVar6 == '\0') {
    local_78 = *param_2;
    uStack_74 = param_2[1];
    uStack_70 = param_2[2];
    uStack_6c = param_2[3];
    local_98 = 0;
    local_88 = &PTR_LAB_14bd3fab0;
    local_a8 = &LAB_144546a00;
    local_80 = param_1;
    FUN_1415826cc();
  }
  else {
    local_b8 = 0;
    uStack_b0 = 0;
    FUN_14158ed7c(local_c0);
    local_d8 = 0;
    uStack_d0 = 0;
    FUN_149548f08(local_c0,&local_d8);
    if (0 < (int)uStack_d0) {
      lVar9 = 0;
      iVar8 = 0;
      uVar2 = local_108;
      uVar3 = local_100;
      uVar4 = local_f8;
      uVar5 = local_f0;
      do {
        local_f0 = uVar5;
        local_f8 = uVar4;
        local_100 = uVar3;
        local_108 = uVar2;
        FUN_149551f3c(&local_108,local_d8 + lVar9);
        uVar1 = uStack_b0;
        lVar10 = (longlong)(int)uStack_b0;
        uVar7 = (int)uStack_b0 + 1;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar7);
        if (uStack_b0._4_4_ < uVar7) {
          FUN_1495526a2(&local_b8,uVar1 & 0xffffffff);
        }
        lVar10 = lVar10 * 0x30;
        *(undefined8 *)(local_b8 + lVar10) = 0;
        *(undefined8 *)(local_b8 + lVar10) = local_108;
        *(undefined4 *)(local_b8 + 8 + lVar10) = (undefined4)local_100;
        *(undefined4 *)(local_b8 + 0xc + lVar10) = local_100._4_4_;
        *(undefined8 *)(local_b8 + 0x10 + lVar10) = 0;
        *(undefined8 *)(local_b8 + 0x10 + lVar10) = local_f8;
        *(undefined4 *)(local_b8 + 0x18 + lVar10) = (undefined4)local_f0;
        *(undefined4 *)(local_b8 + 0x1c + lVar10) = local_f0._4_4_;
        *(undefined1 *)(local_b8 + 0x28 + lVar10) = local_e0;
        *(undefined8 *)(local_b8 + 0x20 + lVar10) = local_e8;
        local_f0 = 0;
        uVar5 = local_f0;
        local_f8 = 0;
        uVar4 = local_f8;
        local_100 = 0;
        uVar3 = local_100;
        local_108 = 0;
        uVar2 = local_108;
        local_f0 = 0;
        local_f8 = 0;
        local_100 = 0;
        local_108 = 0;
        iVar8 = iVar8 + 1;
        lVar9 = lVar9 + 0x30;
      } while (iVar8 < (int)uStack_d0);
    }
    FUN_1495517ef(param_2,&local_b8);
    FUN_1495511b4(local_d8,uStack_d0 & 0xffffffff);
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    FUN_14599c02e(local_c0);
    FUN_1495523e1(local_b8,uStack_b0 & 0xffffffff);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149551d84 FUN_149551d84 body=287 status=ok
// SIG undefined FUN_149551d84(void)

undefined8 FUN_149551d84(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [32];
  longlong local_a8 [4];
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_6c [4];
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 *local_58 [2];
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = param_1 + 0xa8;
  cVar2 = FUN_14954900a(lVar1);
  if (cVar2 == '\0') {
    local_6c[0] = 0;
    local_68 = 0xffffffffffffffff;
    local_60 = 0xffffffff;
    local_5c = 6;
    local_58[0] = &LAB_1445469a6;
    local_48 = 0;
    local_38 = &PTR_LAB_14bd3f9e0;
    local_30 = param_1;
    cVar2 = FUN_149548f3c(lVar1,local_6c,local_58,0x400);
    if (cVar2 != '\0') {
      local_a8[2] = 0;
      local_a8[3] = 0;
      local_a8[0] = 0;
      local_a8[1] = 0;
      cVar2 = FUN_149548f26(lVar1,local_a8,0xffffffff);
      if (cVar2 != '\0') {
        FUN_1477dd988(param_1,local_84,local_88);
        if (local_a8[2] != 0) {
          FUN_1400020a8();
        }
        if (local_a8[0] != 0) {
          FUN_1400020a8();
        }
        uVar3 = 1;
        goto LAB_149551e80;
      }
      if (local_a8[2] != 0) {
        FUN_1400020a8();
      }
      if (local_a8[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  uVar3 = 0;
LAB_149551e80:
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149551ea4 FUN_149551ea4 body=148 status=ok
// SIG undefined FUN_149551ea4(void)

undefined8 FUN_149551ea4(undefined8 param_1)

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
  uVar1 = FUN_14599bf06();
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



// FUNCTION 149551f3c FUN_149551f3c body=183 status=ok
// SIG undefined FUN_149551f3c(void)

undefined8 * FUN_149551f3c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
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
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe | *(byte *)(param_2 + 5);
  return param_1;
}



// FUNCTION 149551ff4 FUN_149551ff4 body=171 status=ok
// SIG undefined FUN_149551ff4(void)

uint FUN_149551ff4(longlong param_1)

{
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x9b0) = 0;
  *(undefined4 *)(param_1 + 0x9c0) = 0;
  iVar1 = *(int *)(param_1 + 0x9ac);
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x9a8) = 0;
    FUN_14482f6fa(param_1 + 0x9a0,0);
    iVar1 = *(int *)(param_1 + 0x9ac);
  }
  *(undefined4 *)(param_1 + 0x9a8) = 0;
  if (iVar1 != 480000) {
    FUN_14482f6fa(param_1 + 0x9a0,480000);
  }
  uVar2 = (uint)*(byte *)(param_1 + 0x9b6);
  if (*(byte *)(param_1 + 0x9b6) == 0) {
    uVar2 = FUN_14954902e(param_1 + 0x918);
    *(char *)(param_1 + 0x9b6) = (char)uVar2;
  }
  if ((char)uVar2 != '\0') {
    FUN_14954911e(param_1 + 0x918);
    LOCK();
    uVar2 = *(uint *)(param_1 + 0x9c8);
    *(uint *)(param_1 + 0x9c8) = 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x9bc) = 0;
  }
  return uVar2;
}



// FUNCTION 1495520a0 FUN_1495520a0 body=45 status=ok
// SIG undefined FUN_1495520a0(void)

longlong FUN_1495520a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c8cd10(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14955213a FUN_14955213a body=59 status=ok
// SIG undefined FUN_14955213a(void)

undefined8 FUN_14955213a(longlong *param_1)

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



// FUNCTION 1495521dc FUN_1495521dc body=58 status=ok
// SIG undefined FUN_1495521dc(void)

void FUN_1495521dc(undefined8 param_1,longlong param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  FUN_1400b22c2(param_2 + 0x10,&DAT_149e02088);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(byte *)(param_2 + 0x28) = *(byte *)(param_2 + 0x28) | 1;
  return;
}



// FUNCTION 149552216 FUN_149552216 body=58 status=ok
// SIG undefined FUN_149552216(void)

void FUN_149552216(undefined8 param_1,longlong param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  FUN_1400b22c2(param_2 + 0x10,&DAT_149e02088);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(byte *)(param_2 + 0x28) = *(byte *)(param_2 + 0x28) | 1;
  return;
}



// FUNCTION 149552250 FUN_149552250 body=47 status=ok
// SIG undefined FUN_149552250(void)

void FUN_149552250(undefined8 param_1,longlong *param_2)

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



// FUNCTION 149552296 FUN_149552296 body=81 status=ok
// SIG undefined FUN_149552296(void)

undefined8 FUN_149552296(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
    *(undefined1 *)(param_2 + 0x28) = *(undefined1 *)(param_3 + 0x28);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 149552310 FUN_149552310 body=59 status=ok
// SIG undefined FUN_149552310(void)

undefined8 FUN_149552310(longlong *param_1)

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



// FUNCTION 1495523ae FUN_1495523ae body=51 status=ok
// SIG undefined FUN_1495523ae(void)

void FUN_1495523ae(longlong *param_1)

{
  if ((char)param_1[6] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  return;
}



// FUNCTION 1495523e1 FUN_1495523e1 body=61 status=ok
// SIG undefined FUN_1495523e1(void)

void FUN_1495523e1(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14955241e FUN_14955241e body=115 status=ok
// SIG undefined FUN_14955241e(void)

void FUN_14955241e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 149552491 FUN_149552491 body=52 status=ok
// SIG undefined FUN_149552491(void)

void FUN_149552491(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1495524c6(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 1495524c6 FUN_1495524c6 body=174 status=ok
// SIG undefined FUN_1495524c6(void)

undefined8 * FUN_1495524c6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
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
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = param_2[4];
  return param_1;
}



// FUNCTION 149552574 FUN_149552574 body=31 status=ok
// SIG undefined FUN_149552574(void)

undefined8 FUN_149552574(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1495525b0 FUN_1495525b0 body=93 status=ok
// SIG undefined FUN_1495525b0(void)

void FUN_1495525b0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bd3fa00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14955260e FUN_14955260e body=126 status=ok
// SIG undefined FUN_14955260e(void)

void FUN_14955260e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bd3fa00;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014955267d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14955268c FUN_14955268c body=21 status=ok
// SIG undefined FUN_14955268c(void)

undefined8 FUN_14955268c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1495526a2 FUN_1495526a2 body=147 status=ok
// SIG undefined FUN_1495526a2(void)

void FUN_1495526a2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149552736 FUN_149552736 body=170 status=ok
// SIG undefined FUN_149552736(void)

ulonglong FUN_149552736(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 unaff_RBX;
  undefined1 auStack_68 [40];
  undefined1 local_40 [7];
  undefined1 local_39;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_1400dbadc();
  plVar3 = (longlong *)FUN_1415bdc84(uVar2);
  (**(code **)(*plVar3 + 200))(plVar3,local_38,param_1);
  local_39 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cc1ea00);
  FUN_14482b35e(&DAT_14cc1ea28,local_40,local_38,&local_39);
  uVar1 = local_39;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cc1ea00);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return (CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) ^ 1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495527e2 FUN_1495527e2 body=141 status=ok
// SIG undefined FUN_1495527e2(void)

void FUN_1495527e2(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_1400dbadc();
  plVar2 = (longlong *)FUN_1415bdc84(uVar1);
  (**(code **)(*plVar2 + 200))(plVar2,local_28,param_1);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cc1ea00);
  FUN_1411a58b4(&DAT_14cc1ea28,local_28);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cc1ea00);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149552870 FUN_149552870 body=831 status=ok
// SIG undefined FUN_149552870(void)

undefined8
FUN_149552870(undefined8 param_1,char *param_2,undefined8 *param_3,byte param_4,undefined4 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  size_t sVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_178 [40];
  longlong local_150;
  int local_148;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  param_3[2] = 0;
  param_3[3] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[4] = 0;
  uVar2 = FUN_1400dbadc();
  plVar3 = (longlong *)FUN_1415bdc84(uVar2);
  if (param_2 == (char *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc1eb38) && (FUN_144b3d300(&DAT_14cc1eb38), DAT_14cc1eb38 == -1)) {
      FUN_145c838ee(&local_150);
      FUN_1412cfe60(&DAT_14cc1eb28,&local_150,(local_148 == 0) + '\a');
      FUN_1401aebe8(&DAT_14cc1eb28,L"SQLite",6);
      if (local_150 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144546b75);
      _Init_thread_footer(&DAT_14cc1eb38);
    }
    puVar6 = &DAT_149dfb77a;
    if (DAT_14cc1eb30 != 0) {
      puVar6 = DAT_14cc1eb28;
    }
    (**(code **)(*plVar3 + 0x110))(plVar3,puVar6);
    puVar6 = &DAT_149dfb77a;
    if (DAT_14cc1eb30 != 0) {
      puVar6 = DAT_14cc1eb28;
    }
    FUN_146818d70(param_3 + 2,puVar6,&DAT_149dfb77a,L".tmp");
  }
  else {
    local_50 = 0;
    sVar4 = strlen(param_2);
    FUN_1446e6fe8(&local_150,param_2,sVar4 & 0xffffffff,1);
    FUN_140056680(param_3 + 2,local_48);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if (*(int *)(param_3 + 3) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)param_3[2];
  }
  cVar1 = (**(code **)(*plVar3 + 0x78))(plVar3,puVar6);
  if (cVar1 == '\0') {
    if ((param_4 & 4) != 0) goto LAB_14955297e;
  }
  else if ((param_4 & 0x10) == 0) {
LAB_14955297e:
    if (*(int *)(param_3 + 3) == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)param_3[2];
    }
    cVar1 = (**(code **)(*plVar3 + 0x98))(plVar3,puVar6);
    *(char *)((longlong)param_3 + 0x25) = cVar1;
    if (cVar1 == '\0') {
      if (*(int *)(param_3 + 3) == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      else {
        puVar6 = (undefined2 *)param_3[2];
      }
      uVar2 = (**(code **)(*plVar3 + 0x100))(plVar3,puVar6,1,1);
      param_3[1] = uVar2;
    }
    else if ((param_4 & 1) != 0) {
      if (*(int *)(param_3 + 3) == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      else {
        puVar6 = (undefined2 *)param_3[2];
      }
      cVar1 = FUN_149552736(puVar6);
      if (cVar1 != '\0') {
        if (*(int *)(param_3 + 3) == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        else {
          puVar6 = (undefined2 *)param_3[2];
        }
        lVar5 = (**(code **)(*plVar3 + 0xe8))(plVar3,puVar6,0);
        param_3[1] = lVar5;
        if (lVar5 == 0) {
          if (*(int *)(param_3 + 3) == 0) {
            puVar6 = &DAT_149dfb77a;
          }
          else {
            puVar6 = (undefined2 *)param_3[2];
          }
          FUN_1495527e2(puVar6);
        }
      }
    }
    plVar3 = (longlong *)param_3[1];
    if (plVar3 != (longlong *)0x0) {
      uVar2 = 0;
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
      *param_3 = &DAT_14bd3faf0;
      *(byte *)((longlong)param_3 + 0x24) = param_4 >> 3 & 1;
      if ((param_5 != (undefined4 *)0x0) && (*(char *)((longlong)param_3 + 0x25) == '\x01')) {
        *param_5 = 1;
      }
      goto LAB_149552957;
    }
  }
  uVar2 = 10;
  if (param_3[2] != 0) {
    FUN_1400020a8();
  }
LAB_149552957:
  if ((local_38 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 149552bb0 FUN_149552bb0 body=348 status=ok
// SIG undefined FUN_149552bb0(void)

undefined8 FUN_149552bb0(undefined8 param_1,char *param_2)

{
  char cVar1;
  size_t sVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined1 auStack_168 [40];
  undefined2 *local_140;
  int local_138;
  undefined1 local_130 [256];
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_30 = 0;
  if (param_2 == (char *)0x0) {
    local_28 = 0;
    local_20 = 0;
  }
  else {
    sVar2 = strlen(param_2);
    FUN_1446e6fe8(local_130,param_2,sVar2 & 0xffffffff,1);
  }
  FUN_140056680(&local_140,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  uVar3 = FUN_1400dbadc();
  plVar4 = (longlong *)FUN_1415bdc84(uVar3);
  puVar5 = &DAT_149dfb77a;
  if (local_138 != 0) {
    puVar5 = local_140;
  }
  cVar1 = (**(code **)(*plVar4 + 0x78))(plVar4,puVar5);
  puVar5 = &DAT_149dfb77a;
  if (local_138 != 0) {
    puVar5 = local_140;
  }
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*plVar4 + 0x108))(plVar4,puVar5);
    if (cVar1 != '\0') {
      puVar5 = local_140;
      if (local_138 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      cVar1 = (**(code **)(*plVar4 + 0x118))(plVar4,puVar5);
      goto LAB_149552c76;
    }
  }
  else {
    cVar1 = (**(code **)(*plVar4 + 0x88))(plVar4,puVar5);
LAB_149552c76:
    uVar3 = 0xa0a;
    if (cVar1 == '\0') goto LAB_149552ca2;
  }
  uVar3 = 0;
LAB_149552ca2:
  if (local_140 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 149552d0e FUN_149552d0e body=298 status=ok
// SIG undefined FUN_149552d0e(void)

undefined8 FUN_149552d0e(undefined8 param_1,char *param_2,int param_3,uint *param_4)

{
  uint uVar1;
  size_t sVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined1 auStack_178 [40];
  undefined2 *local_150;
  int local_148;
  undefined1 local_140 [32];
  byte local_120;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_40 = 0;
  if (param_2 == (char *)0x0) {
    local_38 = 0;
    local_30 = 0;
  }
  else {
    sVar2 = strlen(param_2);
    FUN_1446e6fe8(local_140,param_2,sVar2 & 0xffffffff,1);
  }
  FUN_140056680(&local_150,local_38);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  uVar3 = FUN_1400dbadc();
  plVar4 = (longlong *)FUN_1415bdc84(uVar3);
  puVar5 = local_150;
  if (local_148 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  (**(code **)(*plVar4 + 0x120))(plVar4,local_140,puVar5);
  if (param_3 == 1) {
    uVar1 = (uint)((local_120 & 6) == 4);
  }
  else {
    uVar1 = local_120 >> 2 & 1;
  }
  *param_4 = uVar1;
  if (local_150 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 149552e3a FUN_149552e3a body=402 status=ok
// SIG undefined FUN_149552e3a(void)

undefined8 FUN_149552e3a(undefined8 param_1,char *param_2,int param_3,char *param_4)

{
  longlong lVar1;
  size_t sVar2;
  wchar_t *_Str;
  undefined1 auStack_188 [40];
  longlong local_160 [2];
  wchar_t *local_150;
  int local_148;
  undefined1 local_140 [128];
  longlong local_c0;
  char *local_b8;
  undefined4 local_b0;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_40 = 0;
  if (param_2 == (char *)0x0) {
    local_38 = 0;
    local_30 = 0;
  }
  else {
    sVar2 = strlen(param_2);
    FUN_1446e6fe8(local_140,param_2,sVar2 & 0xffffffff,1);
  }
  FUN_140056680(local_160,local_38);
  FUN_140aa5ef8(&local_150,local_160);
  if (local_160[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  _Str = local_150;
  if (local_148 == 0) {
    _Str = L"";
  }
  local_c0 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_b8 = (char *)0x0;
    local_b0 = 0;
  }
  else {
    sVar2 = wcslen(_Str);
    FUN_1446fe5a4(local_140,_Str,sVar2 & 0xffffffff,1);
  }
  lVar1 = local_c0;
  sVar2 = (size_t)param_3;
  strncpy(param_4,local_b8,sVar2);
  param_4[sVar2 - 1] = '\0';
  if (lVar1 != 0) {
    FUN_1400020a8(lVar1);
  }
  param_4[sVar2 - 1] = '\0';
  if (local_150 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 149552fce FUN_149552fce body=139 status=ok
// SIG undefined FUN_149552fce(void)

ulonglong FUN_149552fce(undefined8 param_1,uint param_2,void *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  size_t _Size;
  undefined1 auStack_68 [44];
  int local_3c;
  ulonglong local_38;
  ulonglong uVar4;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (0 < (int)param_2) {
    iVar1 = rand();
    uVar4 = (ulonglong)param_2;
    do {
      iVar1 = iVar1 * 0xbb38435 + 0x3619636b;
      uVar2 = (uint)uVar4;
      _Size = 4;
      if (uVar2 < 4) {
        _Size = uVar4;
      }
      local_3c = iVar1;
      memcpy(param_3,&local_3c,_Size);
      param_3 = (void *)((longlong)param_3 + _Size);
      uVar3 = uVar2 - (int)_Size;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 != 0 && (int)_Size <= (int)uVar2);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return (ulonglong)param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14955305a FUN_14955305a body=64 status=ok
// SIG undefined FUN_14955305a(void)

int FUN_14955305a(undefined8 param_1,int param_2)

{
  FUN_14000f986((float)param_2 / 1e+06);
  return (int)(((float)param_2 / 1e+06) * 1e+06);
}



// FUNCTION 14955309a FUN_14955309a body=154 status=ok
// SIG undefined FUN_14955309a(void)

undefined8 FUN_14955309a(undefined8 param_1,double *param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1402160b8(&local_20);
  *param_2 = (double)(local_20 % 864000000000) / 864000000000.0 +
             (double)(int)(local_20 / 864000000000) + 1721425.5;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149553136 FUN_149553136 body=196 status=ok
// SIG undefined FUN_149553136(void)

undefined8 FUN_149553136(undefined8 param_1,uint param_2,char *param_3)

{
  size_t sVar1;
  ulonglong _Count;
  undefined1 auStack_8e8 [40];
  undefined1 local_8c0 [128];
  longlong local_840;
  char *local_838;
  wchar_t local_828 [1024];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_8e8;
  if (0 < (int)param_2) {
    FUN_14682f6b8(local_828,0x400,0);
    local_840 = 0;
    sVar1 = wcslen(local_828);
    FUN_1446fe5a4(local_8c0,local_828,sVar1 & 0xffffffff,1);
    _Count = (ulonglong)param_2;
    strncpy(param_3,local_838,_Count);
    param_3[_Count - 1] = '\0';
    if (local_840 != 0) {
      FUN_1400020a8();
    }
    param_3[_Count - 1] = '\0';
  }
  if ((local_28 ^ (ulonglong)auStack_8e8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495531fc FUN_1495531fc body=166 status=ok
// SIG undefined FUN_1495531fc(void)

undefined8 FUN_1495531fc(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1402160b8(&local_20);
  *param_2 = (longlong)
             (((double)(local_20 % 864000000000) / 864000000000.0 +
              (double)(int)(local_20 / 864000000000) + 1721425.5) * 86400000.0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495532a4 FUN_1495532a4 body=132 status=ok
// SIG undefined FUN_1495532a4(void)

undefined8 FUN_1495532a4(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  
  if (*(char *)(param_1 + 0x25) == '\x01') {
    if (*(int *)(param_1 + 0x18) == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = *(undefined2 **)(param_1 + 0x10);
    }
    FUN_1495527e2(puVar4);
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(char *)(param_1 + 0x24) == '\x01') {
    uVar2 = FUN_1400dbadc();
    plVar3 = (longlong *)FUN_1415bdc84(uVar2);
    if (*(int *)(param_1 + 0x18) == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = *(undefined2 **)(param_1 + 0x10);
    }
    (**(code **)(*plVar3 + 0x88))(plVar3,puVar4);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  return 0;
}



// FUNCTION 149553328 FUN_149553328 body=157 status=ok
// SIG undefined FUN_149553328(void)

int FUN_149553328(longlong param_1,void *param_2,int param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  memset(param_2,0,(longlong)param_3);
  lVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x50))();
  iVar2 = 0x20a;
  if (param_4 < lVar3) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),param_4);
    iVar2 = 0x160a;
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
                        (*(longlong **)(param_1 + 8),param_2,(longlong)param_3);
      iVar2 = 0;
      if (cVar1 == '\0') {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 8))();
        lVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x50))();
        iVar2 = (uint)(lVar4 <= lVar3) * 0x100 + 0x10a;
      }
    }
  }
  return iVar2;
}



// FUNCTION 1495533c6 FUN_1495533c6 body=76 status=ok
// SIG undefined FUN_1495533c6(void)

undefined8 FUN_1495533c6(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),param_4);
  uVar2 = 0x160a;
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                      (*(longlong **)(param_1 + 8),param_2,(longlong)param_3);
    uVar2 = 0x30a;
    if (cVar1 != '\0') {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// FUNCTION 149553412 FUN_149553412 body=31 status=ok
// SIG undefined FUN_149553412(void)

undefined8 FUN_149553412(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))();
  uVar2 = 0x60a;
  if (cVar1 != '\0') {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 149553432 FUN_149553432 body=40 status=ok
// SIG undefined FUN_149553432(void)

undefined8 FUN_149553432(longlong param_1,uint param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))
                    (*(longlong **)(param_1 + 8),(param_2 & 0xf) == 3);
  uVar2 = 0x40a;
  if (cVar1 != '\0') {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14955345a FUN_14955345a body=29 status=ok
// SIG undefined FUN_14955345a(void)

undefined8 FUN_14955345a(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x50))();
  *param_2 = uVar1;
  return 0;
}



// FUNCTION 1495534d8 FUN_1495534d8 body=47 status=ok
// SIG undefined FUN_1495534d8(void)

int * FUN_1495534d8(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  piVar1 = (int *)FUN_14001cc68((longlong)(param_1 + 0x10),0);
  if (piVar1 != (int *)0x0) {
    *piVar1 = param_1;
    piVar2 = piVar1 + 4;
  }
  return piVar2;
}



// FUNCTION 149553518 FUN_149553518 body=59 status=ok
// SIG undefined FUN_149553518(void)

int * FUN_149553518(longlong param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1 != 0) {
    param_1 = param_1 + -0x10;
  }
  piVar2 = (int *)0x0;
  piVar1 = (int *)FUN_14001fdce(param_1,(longlong)(param_2 + 0x10),0);
  if (piVar1 != (int *)0x0) {
    *piVar1 = param_2;
    piVar2 = piVar1 + 4;
  }
  return piVar2;
}



// FUNCTION 149553560 FUN_149553560 body=25 status=ok
// SIG undefined FUN_149553560(void)

int FUN_149553560(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_144a3809e((longlong)(param_1 + 0x10),0);
  return iVar1 + -0x10;
}



// FUNCTION 14955357a FUN_14955357a body=24 status=ok
// SIG undefined FUN_14955357a(void)

char FUN_14955357a(LPCRITICAL_SECTION param_1)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection(param_1);
  return (BVar1 == 0) * '\x05';
}



// FUNCTION 14955359e FUN_14955359e body=36 status=ok
// SIG undefined FUN_14955359e(void)

undefined8 FUN_14955359e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1495535de FUN_1495535de body=93 status=ok
// SIG undefined FUN_1495535de(void)

void FUN_1495535de(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bd3fc60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14955363c FUN_14955363c body=123 status=ok
// SIG undefined FUN_14955363c(void)

void FUN_14955363c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bd3fc60;
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



// FUNCTION 1495536b8 FUN_1495536b8 body=21 status=ok
// SIG undefined FUN_1495536b8(void)

undefined8 FUN_1495536b8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1495536cd FUN_1495536cd body=112 status=ok
// SIG undefined FUN_1495536cd(void)

void FUN_1495536cd(undefined8 param_1,longlong *param_2)

{
  if (param_2 == (longlong *)0x0) {
    return;
  }
  FUN_149586165(param_1,param_2[7]);
  if (*param_2 != 0) {
    FUN_14955d65a(param_1);
  }
  if (param_2[1] != 0) {
    FUN_14955d65a(param_1);
  }
  if (param_2[3] != 0) {
    FUN_14958288e(param_1);
  }
  FUN_149582cb1(param_1,param_2[4]);
  FUN_14955d65a(param_1,param_2);
  return;
}



// FUNCTION 14955373d FUN_14955373d body=236 status=ok
// SIG undefined FUN_14955373d(void)

void FUN_14955373d(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_149569891(*(undefined8 *)(param_2 + 0x98),(uint)*(ushort *)(param_2 + 0xc0) * 2);
  puVar2 = *(undefined8 **)(param_2 + 0x118);
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)puVar2[5];
    FUN_149569928(param_1,*puVar2,*(undefined4 *)(puVar2 + 1));
    FUN_14955d65a(param_1,puVar2);
    puVar2 = puVar1;
  }
  if (*(int *)(param_2 + 0x24) != 0x16bceaa5) {
    FUN_149569891(*(undefined8 *)(param_2 + 0x80),(int)*(short *)(param_2 + 0x20));
    if (*(longlong *)(param_2 + 0xb0) != 0) {
      FUN_14955d65a(param_1);
    }
    if (*(longlong *)(param_2 + 0xf8) != 0) {
      FUN_14955d65a(param_1);
    }
  }
  FUN_149569928(param_1,*(undefined8 *)(param_2 + 0x88),*(undefined4 *)(param_2 + 0x90));
  if (*(longlong *)(param_2 + 0x98) != 0) {
    FUN_14955d65a(param_1);
  }
  if (*(longlong *)(param_2 + 0xf0) != 0) {
    FUN_14955d65a(param_1);
    return;
  }
  return;
}



// FUNCTION 149553829 FUN_149553829 body=133 status=ok
// SIG undefined FUN_149553829(void)

longlong FUN_149553829(char *param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  bVar1 = true;
  if (DAT_14c765cfc != '\0') {
    lVar3 = (*DAT_14c765d68)(2);
    if (lVar3 != 0) {
      (*DAT_14c765d78)(lVar3);
      bVar1 = false;
      goto LAB_149553862;
    }
  }
  lVar3 = 0;
LAB_149553862:
  lVar4 = DAT_14cc1eb90;
  if (DAT_14cc1eb90 != 0 && param_1 != (char *)0x0) {
    do {
      iVar2 = strcmp(param_1,*(char **)(lVar4 + 0x18));
      if (iVar2 == 0) goto LAB_149553894;
      lVar4 = *(longlong *)(lVar4 + 0x10);
    } while (lVar4 != 0);
    lVar4 = 0;
  }
LAB_149553894:
  if (!bVar1) {
    (*DAT_14c765d88)(lVar3);
  }
  return lVar4;
}



// FUNCTION 1495538ae FUN_1495538ae body=168 status=ok
// SIG undefined FUN_1495538ae(void)

void FUN_1495538ae(longlong param_1)

{
  longlong lVar1;
  
  if (DAT_14cc1eb98 != 0) {
    (*DAT_14c765d78)();
  }
  if (param_1 < 0) {
    lVar1 = DAT_14cc1eb98;
    if (DAT_14cc1eb98 != 0) {
LAB_149553935:
                    /* WARNING: Could not recover jumptable at 0x00014955393d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14c765d88)(lVar1);
      return;
    }
  }
  else {
    DAT_14cc1eba0 = param_1;
    if (DAT_14cc1eba8 < param_1) {
      DAT_14cc1eba0 = DAT_14cc1eba8;
    }
    if (param_1 == 0) {
      DAT_14cc1eba0 = DAT_14cc1eba8;
    }
    if (DAT_14cc1eba8 < 1) {
      DAT_14cc1eba0 = param_1;
    }
    DAT_14cc1ebb0 = (uint)(DAT_14cc1eba0 <= DAT_14cc1eb40 && 0 < DAT_14cc1eba0);
    if (DAT_14cc1eb98 != 0) {
      (*DAT_14c765d88)();
      lVar1 = DAT_14cc1eb98;
      if (DAT_14cc1eb98 != 0) {
        (*DAT_14c765d78)(DAT_14cc1eb98);
        goto LAB_149553935;
      }
    }
  }
  return;
}



// FUNCTION 149553956 FUN_149553956 body=94 status=ok
// SIG undefined FUN_149553956(void)

void FUN_149553956(longlong param_1)

{
  if (DAT_14cc1eb98 != 0) {
    (*DAT_14c765d78)();
  }
  DAT_14cc1eba8 = param_1;
  if (param_1 < DAT_14cc1eba0 || DAT_14cc1eba0 == 0) {
    DAT_14cc1eba0 = param_1;
  }
  if (DAT_14cc1eb98 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001495539a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14c765d88)();
    return;
  }
  return;
}



// FUNCTION 1495539bb FUN_1495539bb body=416 status=ok
// SIG undefined FUN_1495539bb(void)

longlong FUN_1495539bb(longlong param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    lVar3 = FUN_145e3bd67(param_2);
    return lVar3;
  }
  if (param_2 == 0) {
    FUN_145e3b961(param_1);
  }
  else if (param_2 < 0x7fffff00) {
    iVar1 = (*DAT_14c765d30)(param_1);
    iVar2 = (*DAT_14c765d38)(param_2 & 0xffffffff);
    if (iVar2 == iVar1) {
      return param_1;
    }
    if (DAT_14c765cf8 != 0) {
      if (DAT_14cc1eb98 != 0) {
        (*DAT_14c765d78)();
      }
      if ((longlong)DAT_14cc1eb78 < (longlong)param_2) {
        DAT_14cc1eb78 = param_2;
      }
      if ((((iVar2 - iVar1 != 0 && iVar1 <= iVar2) && (0 < DAT_14cc1eba0)) &&
          ((longlong)(DAT_14cc1eba0 - (ulonglong)(uint)(iVar2 - iVar1)) <= DAT_14cc1eb40)) &&
         ((DAT_14cc1eb98 != 0 && ((*DAT_14c765d88)(), DAT_14cc1eb98 != 0)))) {
        (*DAT_14c765d78)();
      }
      lVar3 = (*DAT_14c765d28)(param_1,iVar2);
      if ((lVar3 == 0) && (0 < DAT_14cc1eba0)) {
        if ((DAT_14cc1eb98 != 0) && ((*DAT_14c765d88)(), DAT_14cc1eb98 != 0)) {
          (*DAT_14c765d78)();
        }
        lVar3 = (*DAT_14c765d28)(param_1,iVar2);
      }
      if (lVar3 != 0) {
        iVar2 = (*DAT_14c765d30)(lVar3);
        DAT_14cc1eb40 = (iVar2 - iVar1) + DAT_14cc1eb40;
        if (DAT_14cc1eb60 < DAT_14cc1eb40) {
          DAT_14cc1eb60 = DAT_14cc1eb40;
        }
      }
      if (DAT_14cc1eb98 == 0) {
        return lVar3;
      }
      (*DAT_14c765d88)();
      return lVar3;
    }
                    /* WARNING: Could not recover jumptable at 0x000149553b39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*DAT_14c765d28)(param_1,iVar2);
    return lVar3;
  }
  return 0;
}



// FUNCTION 149553b5b FUN_149553b5b body=6533 status=ok
// SIG undefined FUN_149553b5b(void)

void FUN_149553b5b(longlong *param_1,byte *param_2,double *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined8 *puVar4;
  int *piVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  void *pvVar11;
  undefined7 uVar16;
  size_t sVar12;
  double dVar13;
  byte *pbVar14;
  undefined *puVar15;
  byte bVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  char *pcVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  byte bVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  int iVar29;
  double *pdVar30;
  double *pdVar31;
  byte *pbVar32;
  undefined *puVar33;
  byte *pbVar34;
  longlong *plVar35;
  int iVar36;
  bool bVar37;
  bool bVar38;
  char cVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined1 auStack_1c8 [47];
  byte local_199;
  longlong *local_198;
  undefined8 local_190;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  ulonglong local_178;
  byte *local_170;
  int *local_168;
  byte *local_160;
  double *local_158;
  byte *local_150;
  uint local_144;
  ulonglong local_140;
  byte local_138 [72];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_199 = *(byte *)((longlong)param_1 + 0x1d);
  if ((local_199 & 2) == 0) {
    local_168 = (int *)0x0;
  }
  else {
    local_168 = (int *)*param_3;
    param_3 = param_3 + 1;
  }
  pbVar34 = (byte *)0x0;
  local_198 = param_1;
  do {
    pbVar32 = param_2;
    if (*param_2 == 0x25) {
      pvVar11 = (void *)0x0;
      local_170 = pbVar34;
    }
    else {
      if (*param_2 == 0) goto switchD_14955416c_default;
      pvVar11 = (void *)0x0;
      lVar27 = 0;
      do {
        lVar27 = lVar27 + 0x100000000;
        pbVar34 = pbVar32 + 1;
        pbVar32 = pbVar32 + 1;
        uVar7 = (int)pvVar11 - 1;
        pvVar11 = (void *)(ulonglong)uVar7;
        if (*pbVar34 == 0x25) break;
      } while (*pbVar34 != 0);
      uVar21 = *(uint *)(local_198 + 3);
      uVar19 = uVar21 - uVar7;
      if (uVar19 < *(uint *)(local_198 + 2)) {
        if (uVar7 != 0) {
          *(uint *)(local_198 + 3) = uVar19;
          pvVar11 = memcpy((void *)((ulonglong)uVar21 + local_198[1]),param_2,lVar27 >> 0x20);
        }
      }
      else {
        pvVar11 = (void *)FUN_1495557b3(local_198,param_2,-uVar7);
      }
      local_170 = param_2;
      if (*pbVar32 == 0) goto switchD_14955416c_default;
    }
    piVar5 = local_168;
    uVar23 = CONCAT71((int7)((ulonglong)pvVar11 >> 8),pbVar32[1]);
    if (pbVar32[1] == 0) {
      uVar7 = *(uint *)(local_198 + 3);
      uVar21 = uVar7 + 1;
      if (uVar21 < *(uint *)(local_198 + 2)) {
        *(uint *)(local_198 + 3) = uVar21;
        *(undefined1 *)(local_198[1] + (ulonglong)uVar7) = 0x25;
      }
      else {
        FUN_1495557b3(local_198,&DAT_149f215a3,1);
      }
switchD_14955416c_default:
      if ((local_f0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    pbVar32 = pbVar32 + 1;
    uVar26 = 0xffffffff;
    local_184 = 0;
    local_150 = (byte *)((ulonglong)local_150 & 0xffffffff00000000);
    uVar44 = 0;
    local_17c = 0;
    local_178 = 0;
    uVar43 = 0;
    uVar7 = 0;
    do {
      cVar6 = (char)uVar23;
      uVar21 = (uint)cVar6;
      uVar16 = (undefined7)(uVar23 >> 8);
      pdVar30 = param_3;
      switch(cVar6) {
      case ' ':
      case '+':
        local_178 = uVar23;
        break;
      case '!':
        uVar44 = 1;
        break;
      case '\"':
      case '$':
      case '%':
      case '&':
      case '\'':
      case '(':
      case ')':
      case '/':
        goto LAB_149554d59;
      case '#':
        uVar23 = CONCAT71(uVar16,1);
        local_17c = (undefined4)uVar23;
        break;
      case '*':
        if ((local_199 & 2) == 0) {
          uVar7 = *(uint *)param_3;
          param_3 = param_3 + 1;
        }
        else {
          iVar18 = piVar5[1];
          if (iVar18 < *piVar5) {
            piVar5[1] = iVar18 + 1;
            uVar7 = FUN_149558f85(*(undefined8 *)(*(longlong *)(piVar5 + 2) + (longlong)iVar18 * 8))
            ;
          }
          else {
            uVar7 = 0;
          }
        }
        uVar21 = -uVar7;
        if (SBORROW4(0,uVar7)) {
          uVar21 = 0;
        }
        if ((int)uVar7 < 0) {
          uVar43 = 1;
          uVar7 = uVar21;
        }
        bVar17 = pbVar32[1];
        uVar23 = 0;
        if ((bVar17 != 0x2e) && (bVar17 != 0x6c)) {
          uVar23 = (ulonglong)(uint)(int)(char)bVar17;
          pbVar32 = pbVar32 + 1;
          local_180 = uVar43;
LAB_1495547dc:
          uVar19 = (uint)uVar23;
          local_190 = (double)CONCAT44(local_190._4_4_,uVar44);
          goto LAB_149554127;
        }
        break;
      case ',':
        uVar23 = CONCAT71(uVar16,0x2c);
        local_184 = (undefined4)uVar23;
        break;
      case '-':
        uVar43 = 1;
        break;
      case '.':
        bVar17 = pbVar32[1];
        uVar23 = (ulonglong)(uint)(int)(char)bVar17;
        if ((int)(char)bVar17 == 0x2a) {
          if ((local_199 & 2) == 0) {
            uVar19 = *(uint *)param_3;
            param_3 = param_3 + 1;
          }
          else {
            iVar18 = piVar5[1];
            if (iVar18 < *piVar5) {
              piVar5[1] = iVar18 + 1;
              uVar19 = FUN_149558f85(*(undefined8 *)
                                      (*(longlong *)(piVar5 + 2) + (longlong)iVar18 * 8));
            }
            else {
              uVar19 = 0;
            }
          }
          uVar21 = -uVar19;
          if (SBORROW4(0,uVar19)) {
            uVar21 = 0xffffffff;
          }
          if (-1 < (int)uVar19) {
            uVar21 = uVar19;
          }
          uVar23 = (ulonglong)(uint)(int)(char)pbVar32[2];
          pbVar32 = pbVar32 + 2;
        }
        else {
          pbVar32 = pbVar32 + 1;
          uVar21 = 0;
          if ((byte)(bVar17 - 0x30) < 10) {
            uVar21 = 0;
            do {
              uVar21 = ((int)uVar23 + uVar21 * 10) - 0x30;
              pbVar34 = pbVar32 + 1;
              uVar23 = (ulonglong)(uint)(int)(char)*pbVar34;
              pbVar32 = pbVar32 + 1;
            } while ((byte)(*pbVar34 - 0x30) < 10);
          }
          uVar21 = uVar21 & 0x7fffffff;
        }
        uVar26 = (ulonglong)uVar21;
        if ((int)uVar23 != 0x6c) {
          local_180 = uVar43;
          goto LAB_1495547dc;
        }
        pbVar32 = pbVar32 + -1;
        break;
      case '0':
        uVar23 = CONCAT71(uVar16,1);
        local_150 = (byte *)CONCAT44(local_150._4_4_,(int)uVar23);
        break;
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
        bVar17 = pbVar32[1];
        while( true ) {
          uVar19 = (uint)(char)bVar17;
          uVar23 = (ulonglong)uVar19;
          param_2 = pbVar32 + 1;
          if (9 < (byte)(bVar17 - 0x30)) break;
          uVar21 = uVar19 + (uVar21 - 0x30) * 10;
          bVar17 = param_2[1];
          pbVar32 = param_2;
        }
        uVar7 = uVar21 - 0x30 & 0x7fffffff;
        if ((bVar17 != 0x2e) && (bVar17 != 0x6c)) {
          local_190 = (double)CONCAT44(local_190._4_4_,uVar44);
          cVar6 = '\0';
          local_180 = uVar43;
          goto LAB_14955412a;
        }
        break;
      default:
        local_190 = (double)CONCAT44(local_190._4_4_,uVar44);
        if (cVar6 != 'l') {
LAB_149554d59:
          local_190 = (double)CONCAT44(local_190._4_4_,uVar44);
          local_180 = uVar43;
          uVar19 = uVar21;
          goto LAB_149554127;
        }
        bVar17 = pbVar32[1];
        if (bVar17 == 0x6c) {
          bVar17 = pbVar32[2];
          param_2 = pbVar32 + 2;
          cVar6 = '\x02';
        }
        else {
          param_2 = pbVar32 + 1;
          cVar6 = '\x01';
        }
        uVar19 = (uint)(char)bVar17;
        local_180 = uVar43;
        goto LAB_14955412a;
      }
      pbVar34 = pbVar32 + 1;
      uVar23 = CONCAT71((int7)(uVar23 >> 8),*pbVar34);
      pbVar32 = pbVar32 + 1;
    } while (*pbVar34 != 0);
    local_190 = (double)CONCAT44(local_190._4_4_,uVar44);
    uVar19 = 0;
    local_180 = uVar43;
LAB_149554127:
    cVar6 = '\0';
    pdVar30 = param_3;
    param_2 = pbVar32;
LAB_14955412a:
    pbVar34 = local_170;
    plVar35 = local_198;
    uVar21 = (uint)uVar26;
    lVar27 = 5;
    while (uVar19 != (int)"3.31.1"[lVar27 + 3]) {
      lVar27 = lVar27 + 6;
      if (lVar27 == 0x8f) goto switchD_14955416c_default;
    }
    bVar17 = "3.31.1"[lVar27 + 6];
    cVar39 = SUB81(local_190,0);
    param_3 = pdVar30;
    switch(bVar17) {
    case 0:
    case 0xf:
      goto switchD_14955416c_caseD_0;
    case 1:
    case 2:
    case 3:
      if ((local_199 & 2) == 0) {
        dVar13 = *pdVar30;
        param_3 = pdVar30 + 1;
      }
      else {
        iVar18 = local_168[1];
        dVar13 = 0.0;
        if (iVar18 < *local_168) {
          local_168[1] = iVar18 + 1;
          pdVar30 = *(double **)(*(longlong *)(local_168 + 2) + (longlong)iVar18 * 8);
          dVar42 = pdVar30[1];
          if (((ulonglong)dVar42 & 8) == 0) {
            if (((ulonglong)dVar42 & 0x24) == 0) {
              if (((ulonglong)dVar42 & 0x12) != 0) {
                dVar13 = (double)FUN_14956c08d();
              }
            }
            else {
              dVar13 = (double)(longlong)*pdVar30;
            }
          }
          else {
            dVar13 = *pdVar30;
          }
        }
      }
      if ((int)uVar21 < 0) {
        uVar21 = 6;
      }
      dVar42 = -dVar13;
      uVar43 = SUB84(dVar13,0);
      uVar44 = (undefined4)((ulonglong)dVar42 >> 0x20);
      uVar19 = (uint)local_178 & 0xff;
      if (dVar13 < dVar42) {
        uVar19 = 0x2d;
      }
      uVar21 = uVar21 - (0 < (int)uVar21 && bVar17 == 3);
      uVar9 = uVar21 & 0xfff;
      dVar40 = *(double *)
                (&DAT_14bd3fed0 + (ulonglong)(uVar9 + (uVar9 / 5 & 0xfffffffe) * -5 & 0xffff) * 8);
      if (9 < uVar9) {
        uVar9 = uVar9 + 10;
        do {
          dVar40 = dVar40 * 1e-10;
          uVar9 = uVar9 - 10;
        } while (0x13 < uVar9);
      }
      if (dVar42 <= dVar13) {
        uVar44 = (undefined4)((ulonglong)dVar13 >> 0x20);
      }
      dVar13 = (double)CONCAT44(uVar44,uVar43);
      if (bVar17 == 1) {
        if ((int)((int)((short)(((ushort)((uint)uVar44 >> 0x14) & 0x7ff) - 0x3ff) / 3) + uVar21) <
            0xf) {
          dVar40 = dVar40 + (double)CONCAT44(uVar44,uVar43) * 3e-16;
        }
        dVar13 = (double)CONCAT44(uVar44,uVar43) + dVar40;
      }
      uVar23 = 0;
      bVar37 = (~(ulonglong)dVar13 & 0x7ff0000000000000) == 0;
      uVar26 = CONCAT71((int7)(~(ulonglong)dVar13 >> 8),bVar37);
      if (bVar37 && ((ulonglong)dVar13 & 0xfffffffffffff) != 0) {
        uVar23 = 3;
        pbVar34 = &DAT_14bd3ff20;
        goto LAB_1495547b1;
      }
      uVar24 = 0;
      bVar25 = (byte)uVar19;
      if (0.0 < dVar13) {
        uVar23 = 0xffffff9c;
        uVar24 = 0xffffffff;
        dVar42 = 1.0;
        uVar9 = 0xfffffff6;
        do {
          uVar8 = uVar9;
          uVar26 = uVar24;
          dVar41 = dVar42;
          if (dVar13 < dVar42 * 1e+100) break;
          uVar20 = (int)uVar23 + 100;
          uVar23 = (ulonglong)uVar20;
          uVar24 = (ulonglong)((int)uVar24 + 100);
          dVar42 = dVar42 * 1e+100;
          uVar9 = uVar8 + 100;
        } while (uVar20 < 0x15f);
        do {
          dVar42 = dVar41;
          uVar24 = uVar26;
          uVar26 = uVar24;
          if (dVar13 < dVar42 * 10000000000.0) break;
          uVar8 = uVar8 + 10;
          uVar26 = (ulonglong)((int)uVar24 + 10);
          dVar41 = dVar42 * 10000000000.0;
        } while (uVar8 < 0x15f);
        do {
          dVar41 = dVar42;
          uVar9 = (int)uVar24 + 1;
          uVar24 = (ulonglong)uVar9;
          dVar42 = dVar41 * 10.0;
          if (dVar13 < dVar42) break;
        } while (uVar9 < 0x15f);
        for (dVar13 = dVar13 / dVar41; dVar13 < 1e-08; dVar13 = dVar13 * 100000000.0) {
          uVar24 = (ulonglong)((int)uVar24 - 8);
        }
        for (; dVar13 < 1.0; dVar13 = dVar13 * 10.0) {
          uVar24 = (ulonglong)((int)uVar24 - 1);
        }
        if (0x15e < (int)uVar24) {
          local_138[0] = bVar25;
          pbVar34 = local_138 + (bVar25 != 0);
          pbVar34[0] = 0x49;
          pbVar34[1] = 0x6e;
          pbVar34[2] = 0x66;
          pbVar34[3] = 0;
          uVar23 = (ulonglong)((bVar25 != 0) + 3);
          goto LAB_149554a2e;
        }
      }
      uVar9 = (uint)CONCAT71((int7)(uVar23 >> 8),1);
      if (bVar17 != 1) {
        dVar40 = dVar40 + dVar13;
        dVar13 = dVar40 * 0.1;
        if (dVar40 < 10.0) {
          dVar13 = dVar40;
        }
        uVar8 = ((int)uVar24 + 1) - (uint)(dVar40 < 10.0);
        uVar24 = (ulonglong)uVar8;
        if (bVar17 == 3) {
          cVar39 = (char)local_17c == '\0';
          uVar9 = (int)CONCAT71((int7)(uVar26 >> 8),(int)uVar21 < (int)uVar8 || (int)uVar8 < -4) + 1
          ;
          if ((int)uVar21 < (int)uVar8 || (int)uVar8 < -4) {
            uVar8 = 0;
          }
          uVar21 = uVar21 - uVar8;
        }
        else {
          uVar9 = (uint)bVar17;
        }
      }
      local_184 = CONCAT31(local_184._1_3_,cVar39);
      local_178 = CONCAT44(local_178._4_4_,uVar9);
      uVar23 = uVar24;
      if ((char)uVar9 == '\x02') {
        uVar23 = 0;
      }
      iVar18 = (int)uVar23;
      uVar26 = 0;
      if (0 < iVar18) {
        uVar26 = uVar23;
      }
      lVar28 = (ulonglong)uVar7 + (longlong)(int)uVar21 + uVar26;
      if (lVar28 < 0x38) {
        local_160 = (byte *)0x0;
        local_170 = local_138;
      }
      else {
        lVar28 = lVar28 + 0xf;
        local_170 = (byte *)FUN_1495554e1(local_198,lVar28);
        local_160 = local_170;
        if (local_170 == (byte *)0x0) goto switchD_14955416c_default;
      }
      pbVar14 = local_170;
      if (bVar25 != 0) {
        pbVar14 = local_170 + 1;
        *local_170 = bVar25;
      }
      iVar36 = ((uint)(byte)local_190 + (uint)(byte)local_190 * 4) * 2 + 0x10;
      if (iVar18 < 0) {
        *pbVar14 = 0x30;
        pbVar14 = pbVar14 + 1;
        uVar23 = uVar24;
      }
      else {
        iVar18 = iVar18 + 1;
        do {
          if (iVar36 < 1) {
            bVar17 = 0x30;
          }
          else {
            iVar29 = (int)dVar13;
            iVar36 = iVar36 + -1;
            dVar13 = (dVar13 - (double)(int)dVar13) * 10.0;
            bVar17 = (char)iVar29 + 0x30;
          }
          *pbVar14 = bVar17;
          pbVar14 = pbVar14 + 1;
          iVar18 = iVar18 + -1;
        } while (0 < iVar18);
        uVar23 = 0xffffffff;
      }
      bVar17 = (byte)local_17c | (byte)local_190 | 0 < (int)uVar21;
      uVar43 = CONCAT31((int3)((uint)local_17c >> 8),bVar17);
      if (bVar17 != 0) {
        *pbVar14 = 0x2e;
        pbVar14 = pbVar14 + 1;
      }
      uVar9 = uVar21;
      local_144 = uVar19;
      if ((int)uVar23 < -1) {
        uVar26 = (ulonglong)(-(int)uVar23 - 2);
        local_17c = uVar43;
        local_158 = param_3;
        local_140 = uVar23;
        memset(pbVar14,(int)CONCAT71((int7)((ulonglong)lVar28 >> 8),0x30),uVar26 + 1);
        pbVar14 = pbVar14 + uVar26 + 1;
        uVar23 = local_140;
        param_3 = local_158;
        uVar9 = uVar21 + (int)local_140 + 1;
        uVar43 = local_17c;
      }
      pbVar34 = local_170;
      plVar35 = local_198;
      if (0 < (int)uVar9) {
        iVar18 = (int)uVar23;
        if (-2 < iVar18) {
          iVar18 = -1;
        }
        uVar21 = uVar21 + iVar18 + 2;
        do {
          if (iVar36 < 1) {
            bVar17 = 0x30;
          }
          else {
            iVar18 = (int)dVar13;
            iVar36 = iVar36 + -1;
            dVar13 = (dVar13 - (double)(int)dVar13) * 10.0;
            bVar17 = (char)iVar18 + 0x30;
          }
          *pbVar14 = bVar17;
          pbVar14 = pbVar14 + 1;
          uVar21 = uVar21 - 1;
        } while (1 < uVar21);
      }
      pcVar22 = "0123456789ABCDEF0123456789abcdef";
      if (((byte)local_184 != '\0') && ((char)uVar43 != '\0')) {
        while( true ) {
          pbVar32 = pbVar14 + -1;
          if (*pbVar32 != 0x30) break;
          *pbVar32 = 0;
          pbVar14 = pbVar32;
        }
        if (*pbVar32 == 0x2e) {
          if ((byte)local_190 == 0) {
            *pbVar32 = 0;
            pbVar14 = pbVar32;
          }
          else {
            *pbVar14 = 0x30;
            pbVar14 = pbVar14 + 1;
          }
        }
      }
      if ((char)local_178 == '\x02') {
        *pbVar14 = "0123456789ABCDEF0123456789abcdef"[(byte)(&UNK_14bd3fdff)[lVar27]];
        uVar23 = (ulonglong)(uint)-(int)uVar24;
        if (-(int)uVar24 < 0) {
          uVar23 = uVar24;
        }
        pbVar14[1] = (char)(uVar24 >> 0x1f) * '\x02' + 0x2b;
        uVar21 = (uint)uVar23;
        if (uVar21 < 100) {
          pbVar14 = pbVar14 + 2;
        }
        else {
          pbVar14[2] = (char)(uVar23 / 100) + 0x30;
          pbVar14 = pbVar14 + 3;
          uVar21 = uVar21 + (int)(uVar23 / 100) * -100;
        }
        uVar19 = (uVar21 & 0xff) / 10;
        pcVar22 = (char *)((ulonglong)uVar19 | 0x30);
        *pbVar14 = (byte)pcVar22;
        pbVar14[1] = (char)uVar21 + (char)uVar19 * -10 | 0x30;
        pbVar14 = pbVar14 + 2;
      }
      *pbVar14 = 0;
      uVar21 = (uint)pbVar14 - (int)local_170;
      uVar23 = (ulonglong)uVar21;
      pbVar32 = local_160;
      if ((((char)local_150 != '\0') && ((char)local_180 == '\0')) &&
         (uVar7 - uVar21 != 0 && (int)uVar21 <= (int)uVar7)) {
        if (-1 < (int)uVar21) {
          lVar27 = (longlong)(int)uVar7 + 1;
          pcVar22 = (char *)(longlong)(int)uVar21;
          do {
            local_170[lVar27 + -1] = local_170[(longlong)pcVar22];
            lVar27 = lVar27 + -1;
            pcVar22 = pcVar22 + -1;
          } while ((int)(uVar7 - uVar21) < lVar27);
        }
        if (uVar7 != uVar21) {
          memset(local_170 + ((char)local_144 != '\0'),
                 (int)CONCAT71((int7)((ulonglong)pcVar22 >> 8),0x30),
                 (ulonglong)(~(uint)pbVar14 + uVar7 + (int)local_170) + 1);
        }
        uVar23 = (ulonglong)uVar7;
        pbVar32 = local_160;
      }
      break;
    case 4:
      if ((local_199 & 2) == 0) {
        *(int *)*pdVar30 = (int)local_198[3];
        param_3 = pdVar30 + 1;
      }
      goto LAB_149554bb3;
    case 5:
    case 6:
      if ((local_199 & 2) == 0) {
        pbVar34 = (byte *)*pdVar30;
        param_3 = pdVar30 + 1;
        if (pbVar34 == (byte *)0x0) {
LAB_149554aed:
          pdVar30 = param_3;
          pbVar34 = &DAT_149e02088;
          goto LAB_149554af7;
        }
        if (bVar17 != 6) {
          pbVar32 = (byte *)0x0;
          goto LAB_149554afc;
        }
        pbVar32 = pbVar34;
        if (((((int)local_198[3] != 0) || (*(int *)((longlong)local_198 + 0x14) == 0)) ||
            (uVar7 != 0)) || (-1 < (int)uVar21)) goto LAB_149554afc;
        if (*(char *)((longlong)local_198 + 0x1c) == '\0') {
          local_198[1] = (longlong)pbVar34;
          lVar27 = *local_198;
          if ((lVar27 == 0) || (*(byte **)(lVar27 + 0x1c8) <= pbVar34)) {
LAB_1495554a9:
            uVar7 = (*DAT_14c765d30)(pbVar34);
          }
          else {
            uVar7 = 0x80;
            if (pbVar34 < *(byte **)(lVar27 + 0x1b8)) {
              if (pbVar34 < *(byte **)(lVar27 + 0x1c0)) goto LAB_1495554a9;
              uVar7 = (uint)*(ushort *)(lVar27 + 0x17e);
            }
          }
          *(uint *)(plVar35 + 2) = uVar7;
          sVar12 = strlen((char *)pbVar34);
          *(uint *)(plVar35 + 3) = (uint)sVar12 & 0x7fffffff;
          *(byte *)((longlong)plVar35 + 0x1d) = *(byte *)((longlong)plVar35 + 0x1d) | 4;
          goto LAB_1495549e0;
        }
      }
      else {
        iVar18 = local_168[1];
        if (*local_168 <= iVar18) goto LAB_149554aed;
        local_168[1] = iVar18 + 1;
        pbVar32 = (byte *)FUN_149558f28(*(undefined8 *)
                                         (*(longlong *)(local_168 + 2) + (longlong)iVar18 * 8));
        pbVar34 = &DAT_149e02088;
        if (pbVar32 != (byte *)0x0) {
          pbVar34 = pbVar32;
        }
LAB_149554af7:
        cVar39 = SUB81(local_190,0);
        param_3 = pdVar30;
        pbVar32 = (byte *)0x0;
LAB_149554afc:
        if (-1 < (int)uVar21) {
          plVar35 = local_198;
          if (cVar39 != '\0') {
            pbVar14 = pbVar34;
            if (uVar21 != 0) {
              do {
                if (*pbVar14 == 0) break;
                if (*pbVar14 < 0xc0) {
                  pbVar14 = pbVar14 + 1;
                }
                else {
                  do {
                    pbVar1 = pbVar14 + 1;
                    pbVar14 = pbVar14 + 1;
                  } while (SBORROW1('\0',*pbVar1 & 0xc0));
                }
                iVar18 = (int)uVar26;
                uVar26 = (ulonglong)(iVar18 - 1);
              } while (1 < iVar18);
            }
            uVar23 = (ulonglong)(uint)((int)pbVar14 - (int)pbVar34);
            goto LAB_149554b1c;
          }
          uVar24 = 0;
          uVar23 = 0;
          if (uVar21 != 0) {
            do {
              uVar23 = uVar24;
              if (pbVar34[uVar24] == 0) break;
              uVar24 = uVar24 + 1;
              uVar23 = uVar26;
            } while (uVar26 != uVar24);
          }
          break;
        }
      }
      plVar35 = local_198;
      sVar12 = strlen((char *)pbVar34);
      uVar23 = (ulonglong)((uint)sVar12 & 0x7fffffff);
      goto LAB_149554278;
    case 7:
      local_138[0] = 0x25;
      uVar23 = 1;
LAB_149554a2e:
      pbVar34 = local_138;
LAB_1495547b1:
      pbVar32 = (byte *)0x0;
      plVar35 = local_198;
      break;
    case 8:
      if ((local_199 & 2) == 0) {
        uVar19 = *(uint *)pdVar30;
        pdVar30 = pdVar30 + 1;
        bVar17 = (byte)uVar19;
        if (uVar19 < 0x80) {
          local_138[0] = bVar17;
          goto LAB_149554e7b;
        }
        param_3 = pdVar30;
        if (uVar19 < 0x800) {
          local_138[0] = (byte)(uVar19 >> 6) | 0xc0;
          local_138[1] = bVar17 & 0x3f | 0x80;
          uVar23 = 2;
        }
        else if (uVar19 < 0x10000) {
          local_138[0] = (byte)(uVar19 >> 0xc) | 0xe0;
          local_138[1] = (byte)(uVar19 >> 6) & 0x3f | 0x80;
          local_138[2] = bVar17 & 0x3f | 0x80;
          uVar23 = 3;
        }
        else {
          local_138[0] = (byte)(uVar19 >> 0x12) & 7 | 0xf0;
          local_138[1] = (byte)(uVar19 >> 0xc) & 0x3f | 0x80;
          local_138[2] = (byte)(uVar19 >> 6) & 0x3f | 0x80;
          local_138[3] = bVar17 & 0x3f | 0x80;
          uVar23 = 4;
        }
      }
      else {
        iVar18 = local_168[1];
        if (iVar18 < *local_168) {
          local_168[1] = iVar18 + 1;
          pbVar34 = (byte *)FUN_149558f28(*(undefined8 *)
                                           (*(longlong *)(local_168 + 2) + (longlong)iVar18 * 8));
          if (pbVar34 != (byte *)0x0) {
            local_138[0] = *pbVar34;
            uVar23 = 1;
            if (0xbf < *pbVar34) {
              uVar26 = 1;
              do {
                if (!SBORROW1('\0',pbVar34[uVar26] & 0xc0)) {
                  uVar23 = uVar26 & 0xffffffff;
                  break;
                }
                local_138[uVar26] = pbVar34[uVar26];
                uVar26 = uVar26 + 1;
                uVar23 = 4;
              } while (uVar26 != 4);
            }
            goto LAB_149554e85;
          }
        }
        local_138[0] = 0;
LAB_149554e7b:
        uVar23 = 1;
        param_3 = pdVar30;
      }
LAB_149554e85:
      plVar35 = local_198;
      cVar39 = '\x01';
      if ((int)uVar21 < 2) {
        pbVar32 = (byte *)0x0;
        pbVar34 = local_138;
      }
      else {
        iVar18 = uVar7 - uVar21;
        uVar7 = iVar18 + 1;
        if ((1 < (int)uVar7) && ((char)local_180 == '\0')) {
          FUN_149555569(local_198,iVar18);
          uVar7 = 0;
        }
        uVar21 = uVar21 + 1;
        do {
          uVar19 = *(uint *)(plVar35 + 3);
          uVar9 = uVar19 + (int)uVar23;
          if (uVar9 < *(uint *)(plVar35 + 2)) {
            *(uint *)(plVar35 + 3) = uVar9;
            memcpy((void *)((ulonglong)uVar19 + plVar35[1]),local_138,uVar23);
          }
          else {
            FUN_1495557b3(plVar35,local_138);
          }
          uVar21 = uVar21 - 1;
        } while (2 < uVar21);
        pbVar32 = (byte *)0x0;
        pbVar34 = local_138;
LAB_149554b1c:
        cVar39 = '\x01';
      }
      goto LAB_149554278;
    case 9:
    case 10:
    case 0xe:
      if ((local_199 & 2) == 0) {
        puVar15 = (undefined *)*pdVar30;
        pdVar30 = pdVar30 + 1;
      }
      else {
        iVar18 = local_168[1];
        if (iVar18 < *local_168) {
          local_168[1] = iVar18 + 1;
          puVar15 = (undefined *)
                    FUN_149558f28(*(undefined8 *)
                                   (*(longlong *)(local_168 + 2) + (longlong)iVar18 * 8));
        }
        else {
          puVar15 = (undefined *)0x0;
        }
      }
      bVar25 = (bVar17 != 0xe) * '\x05' + 0x22;
      puVar33 = &DAT_14bd3ff24;
      if (bVar17 == 10) {
        puVar33 = &DAT_14a179998;
      }
      if (puVar15 != (undefined *)0x0) {
        puVar33 = puVar15;
      }
      if (uVar21 == 0) {
        uVar21 = 0;
        iVar18 = 0;
      }
      else {
        iVar18 = 0;
        uVar21 = 0;
        do {
          bVar2 = puVar33[(int)uVar21];
          if (bVar2 == 0) break;
          if ((SUB81(local_190,0) != '\0') && (0xbf < bVar2)) {
            pbVar34 = puVar33 + (longlong)(int)uVar21 + 1;
            uVar21 = uVar21 - 1;
            do {
              bVar3 = *pbVar34;
              uVar21 = uVar21 + 1;
              pbVar34 = pbVar34 + 1;
            } while (SBORROW1('\0',bVar3 & 0xc0));
          }
          iVar18 = iVar18 + (uint)(bVar2 == bVar25);
          uVar21 = uVar21 + 1;
          uVar19 = (int)uVar26 - 1;
          uVar26 = (ulonglong)uVar19;
        } while (uVar19 != 0);
      }
      bVar37 = bVar17 == 10;
      bVar38 = puVar15 != (undefined *)0x0;
      local_158 = pdVar30;
      if ((int)(iVar18 + uVar21 + 3) < 0x47) {
        pbVar34 = local_138;
        pbVar32 = (byte *)0x0;
      }
      else {
        pbVar34 = (byte *)FUN_1495554e1(local_198);
        pbVar32 = pbVar34;
        if (pbVar34 == (byte *)0x0) goto switchD_14955416c_default;
      }
      if (bVar37 && bVar38) {
        *pbVar34 = 0x27;
      }
      uVar19 = (uint)(bVar37 && bVar38);
      if ((int)uVar21 < 1) {
        uVar23 = (ulonglong)uVar19;
      }
      else {
        uVar26 = 0;
        do {
          bVar17 = puVar33[uVar26];
          pbVar34[(int)uVar19] = bVar17;
          uVar23 = (longlong)(int)uVar19 + 1;
          if (bVar17 == bVar25) {
            pbVar34[uVar23] = bVar25;
            uVar23 = (ulonglong)(uVar19 + 2);
          }
          uVar26 = uVar26 + 1;
          uVar19 = (uint)uVar23;
        } while (uVar21 != uVar26);
      }
      if (bVar37 && bVar38) {
        iVar18 = (int)uVar23;
        uVar23 = (ulonglong)(iVar18 + 1);
        pbVar34[iVar18] = 0x27;
      }
      cVar39 = SUB81(local_190,0);
      pbVar34[(int)uVar23] = 0;
      param_3 = local_158;
      plVar35 = local_198;
LAB_149554278:
      if (((cVar39 != '\0') && (0 < (int)uVar7)) && (0 < (int)uVar23)) {
        uVar26 = (uVar23 & 0xffffffff) + 1;
        do {
          uVar7 = uVar7 + SBORROW1('\0',pbVar34[uVar26 - 2] & 0xc0);
          uVar26 = uVar26 - 1;
        } while (1 < uVar26);
      }
      break;
    case 0xb:
      if ((*(byte *)((longlong)local_198 + 0x1d) & 1) != 0) {
        puVar4 = (undefined8 *)*pdVar30;
        param_3 = pdVar30 + 1;
        if (puVar4 != (undefined8 *)0x0) {
          iVar18 = *(int *)(puVar4 + 1);
          if ((longlong)iVar18 == 0) {
            uVar7 = 0;
            uVar23 = 0;
            pbVar32 = (byte *)0x0;
            break;
          }
          pvVar11 = (void *)*puVar4;
          uVar7 = *(uint *)(local_198 + 3);
          uVar21 = uVar7 + iVar18;
          if (uVar21 < *(uint *)(local_198 + 2)) {
            *(uint *)(local_198 + 3) = uVar21;
            memcpy((void *)((ulonglong)uVar7 + local_198[1]),pvVar11,(longlong)iVar18);
          }
          else {
            FUN_1495557b3(local_198);
          }
LAB_1495549e0:
          param_3 = pdVar30 + 1;
          uVar7 = 0;
          uVar23 = 0;
          pbVar32 = (byte *)0x0;
          break;
        }
        goto LAB_149554bb3;
      }
      goto switchD_14955416c_default;
    case 0xc:
      if ((*(byte *)((longlong)local_198 + 0x1d) & 1) == 0) goto switchD_14955416c_default;
      dVar13 = *pdVar30;
      uVar7 = *(uint *)(pdVar30 + 1);
      if (*(longlong *)((longlong)dVar13 + 0x10U + (longlong)(int)uVar7 * 0x70) != 0) {
        FUN_1495555b8(local_198);
        uVar21 = *(uint *)(plVar35 + 3);
        uVar19 = uVar21 + 1;
        if (uVar19 < *(uint *)(plVar35 + 2)) {
          *(uint *)(plVar35 + 3) = uVar19;
          *(undefined1 *)(plVar35[1] + (ulonglong)uVar21) = 0x2e;
        }
        else {
          FUN_1495557b3(plVar35,L".Preview");
        }
      }
      FUN_1495555b8(plVar35,*(undefined8 *)((longlong)dVar13 + (longlong)(int)uVar7 * 0x70 + 0x18));
      param_3 = pdVar30 + 2;
LAB_149554bb3:
      uVar7 = 0;
      uVar23 = 0;
      pbVar34 = local_170;
      pbVar32 = (byte *)0x0;
      break;
    case 0xd:
      cVar6 = '\x02';
switchD_14955416c_caseD_0:
      local_184 = 0;
switchD_14955416c_caseD_10:
      if (("3.31.1"[lVar27 + 5] & 1U) == 0) {
        if ((local_199 & 2) == 0) {
          if ((cVar6 == '\0') || (cVar6 != '\x02')) {
            local_190 = (double)(ulonglong)*(uint *)pdVar30;
          }
          else {
            local_190 = *pdVar30;
          }
          uVar23 = 0;
          pdVar30 = pdVar30 + 1;
        }
        else {
          iVar18 = local_168[1];
          if (iVar18 < *local_168) {
            local_168[1] = iVar18 + 1;
            local_190 = (double)FUN_149558f85(*(undefined8 *)
                                               (*(longlong *)(local_168 + 2) + (longlong)iVar18 * 8)
                                             );
            uVar23 = 0;
          }
          else {
            uVar23 = 0;
            local_190 = 0.0;
          }
        }
      }
      else {
        if ((local_199 & 2) == 0) {
          pdVar31 = pdVar30 + 1;
          bVar25 = (byte)local_178;
          if ((cVar6 == '\0') || (cVar6 != '\x02')) {
            dVar13 = (double)(longlong)(int)*(uint *)pdVar30;
          }
          else {
            dVar13 = *pdVar30;
          }
LAB_149554d2d:
          uVar23 = (ulonglong)bVar25;
          pdVar30 = pdVar31;
          if ((longlong)dVar13 < 0) {
            uVar23 = 0x2d;
          }
        }
        else {
          iVar18 = local_168[1];
          if (iVar18 < *local_168) {
            local_168[1] = iVar18 + 1;
            dVar13 = (double)FUN_149558f85(*(undefined8 *)
                                            (*(longlong *)(local_168 + 2) + (longlong)iVar18 * 8));
            bVar25 = (byte)local_178;
            pdVar31 = pdVar30;
            goto LAB_149554d2d;
          }
          dVar13 = 0.0;
          uVar23 = local_178;
        }
        local_190 = (double)-(longlong)dVar13;
        if (-(longlong)dVar13 < 0) {
          local_190 = dVar13;
        }
      }
      if ((char)local_150 != '\0') {
        uVar19 = (uVar7 - 1) + (uint)((char)uVar23 == '\0');
        if ((int)uVar19 < (int)uVar21) {
          uVar19 = uVar21;
        }
        uVar26 = (ulonglong)uVar19;
      }
      iVar18 = (int)uVar26;
      if (iVar18 < 0x25) {
        pbVar32 = (byte *)0x46;
        pbVar14 = local_138;
        local_160 = (byte *)0x0;
        pbVar34 = local_160;
      }
      else {
        pbVar32 = (byte *)(ulonglong)(iVar18 + 10);
        if ((byte)local_184 != '\0') {
          pbVar32 = pbVar32 + uVar26 / 3;
        }
        pbVar14 = (byte *)FUN_1495554e1(local_198);
        pbVar34 = pbVar14;
        if (pbVar14 == (byte *)0x0) goto switchD_14955416c_default;
      }
      local_160 = pbVar34;
      iVar36 = (int)pbVar32;
      pbVar34 = pbVar14 + (longlong)iVar36 + -1;
      if (bVar17 == 0xf) {
        uVar26 = (ulonglong)local_190 % 10;
        if (((ulonglong)local_190 / 10) % 10 == 1) {
          uVar26 = 0;
        }
        if (3 < (ulonglong)local_190 % 10) {
          uVar26 = 0;
        }
        pbVar34 = pbVar14 + (longlong)iVar36 + -3;
        *(undefined2 *)(pbVar14 + (longlong)iVar36 + -3) = *(undefined2 *)("thstndrd" + uVar26 * 2);
      }
      bVar17 = (&UNK_14bd3fdff)[lVar27];
      dVar42 = (double)(ulonglong)(byte)"3.31.1"[lVar27 + 4];
      iVar29 = (iVar18 + (uint)pbVar34) - iVar36;
      local_150._0_4_ = (int)pbVar14;
      uVar21 = iVar29 - (int)local_150;
      lVar28 = 0;
      dVar13 = local_190;
      do {
        pbVar34[lVar28 + -1] =
             "0123456789ABCDEF0123456789abcdef"
             [(ulonglong)dVar13 % (ulonglong)dVar42 + (ulonglong)bVar17];
        lVar28 = lVar28 + -1;
        uVar21 = uVar21 - 1;
        bVar37 = (ulonglong)dVar42 <= (ulonglong)dVar13;
        dVar13 = (double)((ulonglong)dVar13 / (ulonglong)dVar42);
      } while (bVar37);
      iVar10 = (~(uint)pbVar34 + iVar36 + (int)local_150) - (int)lVar28;
      local_178 = uVar23;
      local_170 = pbVar32;
      local_158 = pdVar30;
      local_150 = pbVar14;
      if (iVar10 < iVar18) {
        iVar29 = iVar29 - (int)local_150;
        pbVar34 = pbVar34 + (lVar28 - (ulonglong)uVar21) + -1;
        memset(pbVar34,(int)CONCAT71((int7)((ulonglong)pbVar14 >> 8),0x30),
               (ulonglong)(uint)((int)lVar28 + iVar29) + 1);
        iVar10 = iVar18;
      }
      else {
        pbVar34 = pbVar34 + lVar28;
      }
      if ((byte)local_184 != 0) {
        uVar23 = (ulonglong)(uint)((int)(iVar10 - 1U) / 3);
        pbVar34 = pbVar34 + -uVar23;
        if (3 < iVar10) {
          iVar18 = (iVar10 - 1U) % 3 + 1;
          iVar29 = 0;
          do {
            pbVar34[iVar29] = pbVar34[(int)uVar23 + iVar29];
            iVar18 = iVar18 + -1;
            if (iVar18 == 0) {
              pbVar34[(longlong)iVar29 + 1] = (byte)local_184;
              iVar29 = iVar29 + 1;
              uVar23 = (ulonglong)((int)uVar23 - 1);
              iVar18 = 3;
            }
            iVar29 = iVar29 + 1;
          } while (0 < (int)uVar23);
        }
      }
      if ((byte)local_178 != 0) {
        pbVar34[-1] = (byte)local_178;
        pbVar34 = pbVar34 + -1;
      }
      if ((char)local_17c != '\0' && local_190 != 0.0) {
        bVar17 = (&DAT_14bd3fe00)[lVar27];
        if ((6 < bVar17) || ((0x49U >> (bVar17 & 0x1f) & 1) == 0)) {
          pbVar32 = &DAT_14bd3fec1 + bVar17;
          bVar17 = *pbVar32;
          do {
            pbVar32 = pbVar32 + 1;
            pbVar34[-1] = bVar17;
            pbVar34 = pbVar34 + -1;
            bVar17 = *pbVar32;
          } while (bVar17 != 0);
        }
      }
      uVar23 = (ulonglong)(uint)((int)(pbVar14 + (longlong)iVar36 + -1) - (int)pbVar34);
      param_3 = local_158;
      pbVar32 = local_160;
      plVar35 = local_198;
      break;
    case 0x10:
      goto switchD_14955416c_caseD_10;
    default:
      goto switchD_14955416c_default;
    }
    iVar18 = (int)uVar23;
    iVar36 = uVar7 - iVar18;
    if (iVar36 == 0 || (int)uVar7 < iVar18) {
      uVar7 = *(uint *)(plVar35 + 3);
      uVar21 = uVar7 + iVar18;
      if (uVar21 < *(uint *)(plVar35 + 2)) {
        if (iVar18 != 0) {
          *(uint *)(plVar35 + 3) = uVar21;
          pvVar11 = (void *)((ulonglong)uVar7 + plVar35[1]);
LAB_149553dcf:
          memcpy(pvVar11,pbVar34,(longlong)iVar18);
        }
      }
      else {
        FUN_1495557b3(plVar35,pbVar34);
      }
    }
    else if ((char)local_180 == '\0') {
      FUN_149555569(plVar35,iVar36);
      uVar7 = *(uint *)(plVar35 + 3);
      uVar21 = uVar7 + iVar18;
      if (uVar21 < *(uint *)(plVar35 + 2)) {
        if (iVar18 != 0) {
          *(uint *)(plVar35 + 3) = uVar21;
          pvVar11 = (void *)((ulonglong)uVar7 + plVar35[1]);
          goto LAB_149553dcf;
        }
      }
      else {
        FUN_1495557b3(plVar35,pbVar34);
      }
    }
    else {
      uVar7 = *(uint *)(plVar35 + 3);
      uVar21 = uVar7 + iVar18;
      if (uVar21 < *(uint *)(plVar35 + 2)) {
        if (iVar18 != 0) {
          *(uint *)(plVar35 + 3) = uVar21;
          memcpy((void *)((ulonglong)uVar7 + plVar35[1]),pbVar34,(longlong)iVar18);
        }
      }
      else {
        FUN_1495557b3(plVar35,pbVar34);
      }
      FUN_149555569(plVar35,iVar36);
    }
    if (pbVar32 != (byte *)0x0) {
      FUN_14955d65a(*plVar35,pbVar32);
    }
    param_2 = param_2 + 1;
  } while( true );
}



// FUNCTION 1495554e1 FUN_1495554e1 body=136 status=ok
// SIG undefined FUN_1495554e1(void)

longlong FUN_1495554e1(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  if (*(char *)((longlong)param_1 + 0x1c) == '\0') {
    if (((longlong)(ulonglong)*(uint *)(param_1 + 2) < (longlong)param_2) &&
       (*(uint *)((longlong)param_1 + 0x14) < param_2)) {
      *(undefined1 *)((longlong)param_1 + 0x1c) = 0x12;
      if (*(uint *)((longlong)param_1 + 0x14) != 0) {
        FUN_1495557eb(param_1);
      }
      if ((*param_1 != 0) && (lVar1 = *(longlong *)(*param_1 + 0x138), lVar1 != 0)) {
        *(undefined4 *)(lVar1 + 0x18) = 0x12;
        *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + 1;
      }
    }
    else {
      if (*param_1 == 0) {
        lVar1 = FUN_145e3bd67(param_2);
      }
      else {
        lVar1 = FUN_14955d750();
      }
      if (lVar1 != 0) {
        return lVar1;
      }
      *(undefined1 *)((longlong)param_1 + 0x1c) = 7;
      if (*(int *)((longlong)param_1 + 0x14) != 0) {
        FUN_1495557eb(param_1);
      }
    }
  }
  return 0;
}



// FUNCTION 149555569 FUN_149555569 body=79 status=ok
// SIG undefined FUN_149555569(void)

void FUN_149555569(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((longlong)(ulonglong)*(uint *)(param_1 + 0x10) <=
      (longlong)((longlong)param_2 + (ulonglong)*(uint *)(param_1 + 0x18))) {
    param_2 = FUN_14955562c(param_1);
  }
  if (0 < param_2) {
    uVar2 = param_2 + 1;
    do {
      uVar1 = *(uint *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      *(undefined1 *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1) = 0x20;
      uVar2 = uVar2 - 1;
    } while (1 < uVar2);
  }
  return;
}



// FUNCTION 1495555b8 FUN_1495555b8 body=116 status=ok
// SIG undefined FUN_1495555b8(void)

void FUN_1495555b8(longlong param_1,char *param_2)

{
  uint uVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 == (char *)0x0) {
    if (*(uint *)(param_1 + 0x10) <= *(uint *)(param_1 + 0x18)) {
      uVar4 = 0;
      goto LAB_14955561b;
    }
  }
  else {
    sVar2 = strlen(param_2);
    uVar4 = (uint)sVar2 & 0x3fffffff;
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar3 = uVar1 + uVar4;
    if (*(uint *)(param_1 + 0x10) <= uVar3) {
LAB_14955561b:
      FUN_1495557b3(param_1,param_2,uVar4);
      return;
    }
    if ((sVar2 & 0x3fffffff) != 0) {
      *(uint *)(param_1 + 0x18) = uVar3;
      memcpy((void *)((ulonglong)uVar1 + *(longlong *)(param_1 + 8)),param_2,
             (ulonglong)((uint)sVar2 & 0x3fffffff));
      return;
    }
  }
  return;
}



// FUNCTION 14955562c FUN_14955562c body=391 status=ok
// SIG undefined FUN_14955562c(void)

int FUN_14955562c(longlong *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  void *_Dst;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (*(char *)((longlong)param_1 + 0x1c) != '\0') {
    return 0;
  }
  uVar2 = (ulonglong)*(uint *)((longlong)param_1 + 0x14);
  if (uVar2 == 0) {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0x12;
    if ((*param_1 != 0) && (lVar4 = *(longlong *)(*param_1 + 0x138), lVar4 != 0)) {
      *(undefined4 *)(lVar4 + 0x18) = 0x12;
      *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + 1;
    }
    return ~*(uint *)(param_1 + 3) + (int)param_1[2];
  }
  if ((*(byte *)((longlong)param_1 + 0x1d) & 4) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1[1];
  }
  uVar3 = (longlong)param_2 + (ulonglong)*(uint *)(param_1 + 3) * 2 + 1;
  uVar5 = (longlong)param_2 + (ulonglong)*(uint *)(param_1 + 3) + 1;
  if ((longlong)uVar3 <= (longlong)uVar2) {
    uVar5 = uVar3;
  }
  if ((longlong)uVar2 < (longlong)uVar5) {
    FUN_1495557eb(param_1);
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0x12;
    if (*(int *)((longlong)param_1 + 0x14) != 0) {
      FUN_1495557eb(param_1);
    }
    if (*param_1 == 0) {
      return 0;
    }
    lVar4 = *(longlong *)(*param_1 + 0x138);
    if (lVar4 == 0) {
      return 0;
    }
    *(undefined4 *)(lVar4 + 0x18) = 0x12;
    *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + 1;
    return 0;
  }
  *(int *)(param_1 + 2) = (int)uVar5;
  if (*param_1 == 0) {
    _Dst = (void *)FUN_1495539bb(lVar4,uVar5 & 0xffffffff);
  }
  else {
    _Dst = (void *)FUN_14955d6fd();
  }
  if (_Dst == (void *)0x0) {
    FUN_1495557eb(param_1);
    *(undefined1 *)((longlong)param_1 + 0x1c) = 7;
    if (*(int *)((longlong)param_1 + 0x14) == 0) {
      return 0;
    }
    FUN_1495557eb(param_1);
    return 0;
  }
  if (((*(byte *)((longlong)param_1 + 0x1d) & 4) == 0) && ((ulonglong)*(uint *)(param_1 + 3) != 0))
  {
    memcpy(_Dst,(void *)param_1[1],(ulonglong)*(uint *)(param_1 + 3));
  }
  param_1[1] = (longlong)_Dst;
  lVar4 = *param_1;
  if ((lVar4 != 0) && (_Dst < *(void **)(lVar4 + 0x1c8))) {
    uVar1 = 0x80;
    if (*(void **)(lVar4 + 0x1b8) <= _Dst) goto LAB_14955576a;
    if (*(void **)(lVar4 + 0x1c0) <= _Dst) {
      uVar1 = (uint)*(ushort *)(lVar4 + 0x17e);
      goto LAB_14955576a;
    }
  }
  uVar1 = (*DAT_14c765d30)(_Dst);
LAB_14955576a:
  *(uint *)(param_1 + 2) = uVar1;
  *(byte *)((longlong)param_1 + 0x1d) = *(byte *)((longlong)param_1 + 0x1d) | 4;
  return param_2;
}



// FUNCTION 1495557b3 FUN_1495557b3 body=56 status=ok
// SIG undefined FUN_1495557b3(void)

void FUN_1495557b3(longlong param_1,void *param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_14955562c(param_1,param_3);
  if (0 < (int)uVar1) {
    memcpy((void *)((ulonglong)*(uint *)(param_1 + 0x18) + *(longlong *)(param_1 + 8)),param_2,
           (ulonglong)uVar1);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + uVar1;
  }
  return;
}



// FUNCTION 1495557eb FUN_1495557eb body=64 status=ok
// SIG undefined FUN_1495557eb(void)

void FUN_1495557eb(undefined8 *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x1d);
  if ((bVar1 & 4) != 0) {
    if (param_1[1] != 0) {
      FUN_14955d65a(*param_1);
      bVar1 = *(byte *)((longlong)param_1 + 0x1d);
    }
    *(byte *)((longlong)param_1 + 0x1d) = bVar1 & 0xfb;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 14955582b FUN_14955582b body=167 status=ok
// SIG undefined FUN_14955582b(void)

undefined1 * FUN_14955582b(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_68;
  uint local_60;
  ushort local_5c;
  undefined1 local_58 [72];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = local_58;
  local_78 = 0;
  local_68 = 0x3b9aca0000000046;
  local_60 = 0;
  local_5c = 0;
  FUN_149553b5b(&local_78,param_1,param_2);
  if (local_70 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    local_70[local_60] = 0;
    puVar1 = local_70;
    if ((local_68._4_4_ != 0) && ((local_5c & 0x400) == 0)) {
      puVar1 = (undefined1 *)FUN_14955d93a(&local_78);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495558d3 FUN_1495558d3 body=75 status=ok
// SIG undefined FUN_1495558d3(void)

void FUN_1495558d3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_38 [40];
  undefined8 *local_10;
  ulonglong local_8;
  
  local_10 = &local_res10;
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_14955582b(param_1,local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14955591f FUN_14955591f body=126 status=ok
// SIG undefined FUN_14955591f(void)

longlong FUN_14955591f(int param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res20;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined8 local_38;
  longlong local_30;
  int local_28;
  ulonglong local_24;
  undefined2 local_1c;
  ulonglong local_18;
  
  local_40 = &local_res20;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_res20 = param_4;
  if (0 < param_1) {
    local_38 = 0;
    local_24 = 0;
    local_1c = 0;
    local_30 = param_2;
    local_28 = param_1;
    FUN_149553b5b(&local_38,param_3,local_40);
    *(undefined1 *)(param_2 + (local_24 >> 0x20)) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14955599e FUN_14955599e body=229 status=ok
// SIG undefined FUN_14955599e(void)

void FUN_14955599e(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_158 [40];
  undefined8 *local_130;
  undefined8 local_128;
  undefined1 *local_120;
  undefined4 local_118;
  ulonglong local_114;
  ushort local_10c;
  undefined1 local_108 [224];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_res18 = param_3;
  local_res20 = param_4;
  if (DAT_14c765e70 != (code *)0x0) {
    local_130 = &local_res18;
    local_120 = local_108;
    local_128 = 0;
    local_118 = 0xd2;
    local_114 = 0;
    local_10c = 0;
    FUN_149553b5b(&local_128);
    pcVar1 = DAT_14c765e70;
    puVar2 = (undefined1 *)0x0;
    if (local_120 != (undefined1 *)0x0) {
      local_120[local_114 >> 0x20] = 0;
      puVar2 = local_120;
      if (((int)local_114 != 0) && ((local_10c & 0x400) == 0)) {
        puVar2 = (undefined1 *)FUN_14955d93a(&local_128);
      }
    }
    (*pcVar1)(DAT_14c765e78,param_1,puVar2);
  }
  if ((local_28 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149555a84 FUN_149555a84 body=71 status=ok
// SIG undefined FUN_149555a84(void)

void FUN_149555a84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_38 [40];
  undefined8 *local_10;
  ulonglong local_8;
  
  local_10 = &local_res18;
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_149553b5b(param_1,param_2,local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149555acc FUN_149555acc body=580 status=ok
// SIG undefined FUN_149555acc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149555acc(int param_1,longlong param_2)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  undefined1 auStack_158 [32];
  int local_138 [64];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (DAT_14c765cfc == '\0') {
    if (param_1 < 1 || param_2 == 0) {
LAB_149555b6d:
      DAT_14cc1ebb8 = '\0';
      goto LAB_149555b74;
    }
LAB_149555bad:
    bVar2 = true;
    lVar5 = 0;
  }
  else {
    lVar5 = (*DAT_14c765d68)(5);
    if (lVar5 == 0) {
      if (param_2 == 0 || param_1 < 1) goto LAB_149555b6d;
      goto LAB_149555bad;
    }
    (*DAT_14c765d78)(lVar5);
    if (param_2 == 0 || param_1 < 1) {
      DAT_14cc1ebb8 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_158);
    }
    bVar2 = false;
  }
  if (DAT_14cc1ebb8 == '\0') {
    _DAT_14cc1ebb9 = 0;
    lVar7 = DAT_14cc1eb90;
    if ((DAT_14c765cfc != '\0') && (lVar6 = (*DAT_14c765d68)(2), lVar7 = DAT_14cc1eb90, lVar6 != 0))
    {
      (*DAT_14c765d78)(lVar6);
      lVar7 = DAT_14cc1eb90;
      (*DAT_14c765d88)(lVar6);
    }
    iVar3 = DAT_14c765e9c;
    if (DAT_14c765e9c == 0) {
      (**(code **)(lVar7 + 0x68))(lVar7,0x100,local_138);
    }
    else {
      memset(local_138,0,0x100);
      local_138[0] = iVar3;
    }
    cVar8 = '\0';
    cVar9 = '\x01';
    cVar10 = '\x02';
    cVar11 = '\x03';
    cVar12 = '\x04';
    cVar13 = '\x05';
    cVar14 = '\x06';
    cVar15 = '\a';
    cVar16 = '\b';
    cVar17 = '\t';
    cVar18 = '\n';
    cVar19 = '\v';
    cVar20 = '\f';
    cVar21 = '\r';
    cVar22 = '\x0e';
    cVar23 = '\x0f';
    lVar7 = 0;
    do {
      (&DAT_14cc1ebbb)[lVar7] = cVar8;
      (&DAT_14cc1ebbc)[lVar7] = cVar9;
      *(char *)(lVar7 + 0x14cc1ebbd) = cVar10;
      *(char *)(lVar7 + 0x14cc1ebbe) = cVar11;
      *(char *)(lVar7 + 0x14cc1ebbf) = cVar12;
      *(char *)(lVar7 + 0x14cc1ebc0) = cVar13;
      *(char *)(lVar7 + 0x14cc1ebc1) = cVar14;
      *(char *)(lVar7 + 0x14cc1ebc2) = cVar15;
      *(char *)(lVar7 + 0x14cc1ebc3) = cVar16;
      *(char *)(lVar7 + 0x14cc1ebc4) = cVar17;
      *(char *)(lVar7 + 0x14cc1ebc5) = cVar18;
      *(char *)(lVar7 + 0x14cc1ebc6) = cVar19;
      *(char *)(lVar7 + 0x14cc1ebc7) = cVar20;
      *(char *)(lVar7 + 0x14cc1ebc8) = cVar21;
      *(char *)(lVar7 + 0x14cc1ebc9) = cVar22;
      *(char *)(lVar7 + 0x14cc1ebca) = cVar23;
      lVar7 = lVar7 + 0x10;
      cVar8 = cVar8 + '\x10';
      cVar9 = cVar9 + '\x10';
      cVar10 = cVar10 + '\x10';
      cVar11 = cVar11 + '\x10';
      cVar12 = cVar12 + '\x10';
      cVar13 = cVar13 + '\x10';
      cVar14 = cVar14 + '\x10';
      cVar15 = cVar15 + '\x10';
      cVar16 = cVar16 + '\x10';
      cVar17 = cVar17 + '\x10';
      cVar18 = cVar18 + '\x10';
      cVar19 = cVar19 + '\x10';
      cVar20 = cVar20 + '\x10';
      cVar21 = cVar21 + '\x10';
      cVar22 = cVar22 + '\x10';
      cVar23 = cVar23 + '\x10';
    } while (lVar7 != 0x100);
    lVar7 = 0;
    bVar4 = DAT_14cc1ebba;
    do {
      bVar4 = bVar4 + (&DAT_14cc1ebbb)[lVar7] + *(char *)((longlong)local_138 + lVar7);
      uVar1 = (&DAT_14cc1ebbb)[bVar4];
      (&DAT_14cc1ebbb)[bVar4] = (&DAT_14cc1ebbb)[lVar7];
      (&DAT_14cc1ebbb)[lVar7] = uVar1;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x100);
    DAT_14cc1ebb8 = '\x01';
  }
  else {
    bVar4 = DAT_14cc1ebba;
  }
  lVar7 = 0;
  do {
    DAT_14cc1ebb9 = DAT_14cc1ebb9 + 1;
    cVar8 = (&DAT_14cc1ebbb)[DAT_14cc1ebb9];
    bVar4 = bVar4 + cVar8;
    (&DAT_14cc1ebbb)[DAT_14cc1ebb9] = (&DAT_14cc1ebbb)[bVar4];
    (&DAT_14cc1ebbb)[bVar4] = cVar8;
    *(undefined1 *)(param_2 + lVar7) =
         (&DAT_14cc1ebbb)[(byte)(cVar8 + (&DAT_14cc1ebbb)[DAT_14cc1ebb9])];
    lVar7 = lVar7 + 1;
  } while (param_1 != (int)lVar7);
  _DAT_14cc1ebb9 = CONCAT11(bVar4,DAT_14cc1ebb9);
  if (!bVar2) {
    (*DAT_14c765d88)(lVar5);
  }
LAB_149555b74:
  if ((local_38 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149555d2a FUN_149555d2a body=176 status=ok
// SIG undefined FUN_149555d2a(void)

uint FUN_149555d2a(longlong param_1,longlong param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  
  uVar3 = 0xffffffff;
  if ((param_2 != 0) && (uVar3 = *(int *)(param_1 + 0x28) - 1, 0 < *(int *)(param_1 + 0x28))) {
    plVar6 = (longlong *)((ulonglong)uVar3 * 0x20 + *(longlong *)(param_1 + 0x20));
    uVar5 = uVar3;
    do {
      if (*plVar6 != 0) {
        lVar4 = 0;
        do {
          bVar1 = *(byte *)(*plVar6 + lVar4);
          if (bVar1 == *(byte *)(param_2 + lVar4)) {
            if ((ulonglong)bVar1 == 0) {
              return uVar5;
            }
          }
          else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[*(byte *)(param_2 + lVar4)]) break;
          lVar4 = lVar4 + 1;
        } while( true );
      }
      if (uVar5 == 0) {
        lVar4 = 0;
        do {
          bVar1 = (&DAT_14b9cdc79)[lVar4];
          if (bVar1 == *(byte *)(param_2 + lVar4)) {
            if ((ulonglong)bVar1 == 0) {
              return 0;
            }
          }
          else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[*(byte *)(param_2 + lVar4)]) break;
          lVar4 = lVar4 + 1;
        } while( true );
      }
      plVar6 = plVar6 + -4;
      bVar2 = 0 < (int)uVar5;
      uVar5 = uVar5 - 1;
      uVar3 = 0xffffffff;
    } while (bVar2);
  }
  return uVar3;
}



// FUNCTION 149555dda FUN_149555dda body=3849 status=ok
// SIG undefined FUN_149555dda(void)

uint FUN_149555dda(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  void *_Dst;
  ushort uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  size_t sVar15;
  longlong lVar16;
  byte bVar17;
  int iVar18;
  int iVar19;
  longlong *plVar20;
  ulonglong uVar21;
  char *pcVar22;
  uint uVar23;
  int iVar24;
  char *pcVar25;
  longlong *plVar26;
  wchar_t *pwVar27;
  undefined1 *puVar28;
  int iVar29;
  char cVar30;
  uint uVar31;
  void **_Str1;
  byte *pbVar32;
  longlong lVar33;
  ulonglong uVar34;
  undefined1 auStack_218 [32];
  void **local_1f8;
  undefined8 local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  int local_1d4;
  longlong local_1d0;
  longlong local_1c8;
  int local_1bc;
  longlong local_1b8;
  undefined8 *local_1b0;
  longlong *local_1a8;
  longlong local_1a0;
  longlong local_198;
  void *local_190;
  double local_188;
  char *local_180;
  uint local_178;
  undefined8 local_174;
  ushort local_16c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if (param_1 == (longlong *)0x0) {
    pcVar22 = "API called with NULL prepared statement";
  }
  else {
    lVar16 = *param_1;
    if (lVar16 != 0) {
      local_1c8 = lVar16;
      if (*(longlong *)(lVar16 + 0x18) != 0) {
        (*DAT_14c765d78)();
      }
      *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0xef;
      puVar14 = (undefined8 *)((longlong)param_1 + 0xd4);
      local_1a8 = param_1 + 0x17;
      iVar24 = 0;
      uVar23 = 7;
LAB_149555e65:
      if (*(int *)((longlong)param_1 + 0x24) != 0x2df20da3) {
        FUN_149558d2c(param_1);
      }
      puVar2 = (undefined8 *)*param_1;
      uVar31 = uVar23;
      if (*(char *)((longlong)puVar2 + 0x61) != '\0') goto LAB_1495565d7;
      uVar31 = *(uint *)(param_1 + 0x19);
      if (*(int *)((longlong)param_1 + 0x34) < 0) {
        if ((uVar31 & 3) == 0) {
          if (*(int *)(puVar2 + 0x19) == 0) {
            *(undefined4 *)(puVar2 + 0x2e) = 0;
          }
          if ((((*(byte *)(puVar2 + 0xd) & 0x82) != 0) &&
              (*(char *)((longlong)puVar2 + 0xb5) == '\0')) && (param_1[0x1e] != 0)) {
            piVar1 = (int *)*puVar2;
            if ((*piVar1 < 2) || (*(code **)(piVar1 + 0x22) == (code *)0x0)) {
              (**(code **)(piVar1 + 0x1e))(piVar1,&local_188);
              *local_1a8 = (longlong)(local_188 * 86400000.0);
            }
            else {
              (**(code **)(piVar1 + 0x22))(piVar1,local_1a8);
            }
          }
          *(int *)(puVar2 + 0x19) = *(int *)(puVar2 + 0x19) + 1;
          uVar31 = *(uint *)(param_1 + 0x19);
          if ((uVar31 >> 8 & 1) == 0) {
            *(int *)(puVar2 + 0x1a) = *(int *)(puVar2 + 0x1a) + 1;
            uVar31 = *(uint *)(param_1 + 0x19);
          }
          if ((uVar31 >> 9 & 1) != 0) {
            *(int *)((longlong)puVar2 + 0xcc) = *(int *)((longlong)puVar2 + 0xcc) + 1;
            uVar31 = *(uint *)(param_1 + 0x19);
          }
          *(undefined4 *)((longlong)param_1 + 0x34) = 0;
          goto LAB_149556223;
        }
        *(undefined4 *)(param_1 + 7) = 0x11;
        uVar31 = 1;
LAB_149555ea5:
        if (*(char *)((longlong)param_1 + 0xc4) < '\0') {
          uVar31 = FUN_14956a14b(param_1);
        }
      }
      else {
LAB_149556223:
        local_1d4 = iVar24;
        local_1b0 = puVar14;
        if ((uVar31 & 0xc) == 0) {
          *(int *)((longlong)puVar2 + 0xd4) = *(int *)((longlong)puVar2 + 0xd4) + 1;
          uVar12 = FUN_14956c880(param_1);
          *(int *)((longlong)puVar2 + 0xd4) = *(int *)((longlong)puVar2 + 0xd4) + -1;
          uVar31 = 100;
          if (uVar12 != 100) goto LAB_14955623a;
        }
        else {
          lVar16 = *param_1;
          bVar17 = 1;
          if ((uVar31 & 0xc) != 4) {
            bVar17 = *(byte *)(lVar16 + 0x33) & 1;
          }
          local_1d0 = CONCAT71(local_1d0._1_7_,bVar17);
          lVar33 = param_1[0xd];
          plVar26 = (longlong *)(lVar33 + 0x38);
          FUN_149569891(plVar26,8);
          param_1[0x14] = 0;
          if ((int)param_1[7] == 7) {
            uVar12 = 1;
            if ((*(char *)(lVar16 + 0x61) == '\0') && (*(char *)(lVar16 + 0x62) == '\0')) {
              *(undefined1 *)(lVar16 + 0x61) = 1;
              if (0 < *(int *)(lVar16 + 0xd4)) {
                *(undefined4 *)(lVar16 + 0x170) = 1;
              }
              *(int *)(lVar16 + 0x178) = *(int *)(lVar16 + 0x178) + 1;
              *(undefined2 *)(lVar16 + 0x17c) = 0;
              if (*(longlong *)(lVar16 + 0x138) != 0) {
                *(undefined4 *)(*(longlong *)(lVar16 + 0x138) + 0x18) = 7;
              }
            }
          }
          else {
            iVar24 = (int)param_1[0x12];
            if ((char)local_1d0 == '\0') {
              local_1b8 = 0;
LAB_149556601:
              puVar14 = (undefined8 *)0x0;
              uVar34 = 0;
            }
            else {
              lVar3 = param_1[0xd];
              local_1b8 = lVar3 + 0x1f8;
              if ((*(byte *)(lVar3 + 0x200) & 0x10) == 0) goto LAB_149556601;
              uVar31 = *(int *)(lVar3 + 0x204) >> 3;
              uVar34 = (ulonglong)uVar31;
              puVar14 = *(undefined8 **)(lVar3 + 0x208);
              if (0 < (int)uVar31) {
                uVar21 = 0;
                do {
                  iVar24 = iVar24 + *(int *)(puVar14[uVar21] + 8);
                  uVar21 = uVar21 + 1;
                } while (uVar34 != uVar21);
              }
            }
            iVar19 = *(int *)((longlong)param_1 + 0x34);
            *(int *)((longlong)param_1 + 0x34) = iVar19 + 1;
            local_1a0 = lVar33;
            local_198 = lVar16;
            if (iVar19 < iVar24) {
              local_1e0 = param_1 + 0x11;
              cVar30 = (char)local_1d0;
              do {
                lVar16 = local_1b8;
                iVar29 = iVar19 - (int)param_1[0x12];
                plVar20 = local_1e0;
                iVar18 = iVar19;
                if ((int)param_1[0x12] <= iVar19) {
                  plVar20 = (longlong *)*puVar14;
                  iVar19 = (int)plVar20[1];
                  iVar18 = iVar29;
                  puVar10 = puVar14;
                  if (iVar19 <= iVar29) {
                    do {
                      iVar29 = iVar29 - iVar19;
                      plVar20 = (longlong *)puVar10[1];
                      iVar19 = (int)plVar20[1];
                      iVar18 = iVar29;
                      puVar10 = puVar10 + 1;
                    } while (iVar19 <= iVar29);
                  }
                }
                pbVar32 = (byte *)((longlong)iVar18 * 0x18 + *plVar20);
                if ((cVar30 != '\0') && (pbVar32[1] == 0xfc)) {
                  iVar19 = (int)uVar34;
                  if (iVar19 < 1) {
                    uVar21 = 0;
LAB_14955615a:
                    if ((int)uVar21 != iVar19) goto LAB_14955615f;
                  }
                  else {
                    uVar21 = 0;
                    do {
                      if (puVar14[uVar21] == *(longlong *)(pbVar32 + 0x10)) goto LAB_14955615a;
                      uVar21 = uVar21 + 1;
                    } while (uVar34 != uVar21);
                  }
                  local_1bc = iVar19 * 8 + 8;
                  local_1e8 = plVar26;
                  iVar29 = FUN_14956b6c8(local_1b8,local_1bc,iVar19 != 0);
                  *(int *)(param_1 + 7) = iVar29;
                  if (iVar29 == 0) {
                    puVar14 = *(undefined8 **)(lVar16 + 0x10);
                    uVar34 = (ulonglong)(iVar19 + 1);
                    puVar14[iVar19] = *(undefined8 *)(pbVar32 + 0x10);
                    *(byte *)(lVar16 + 8) = *(byte *)(lVar16 + 8) | 0x10;
                    *(int *)(lVar16 + 0xc) = local_1bc;
                    iVar24 = iVar24 + *(int *)(*(longlong *)(pbVar32 + 0x10) + 8);
                    plVar26 = local_1e8;
                    cVar30 = (char)local_1d0;
                    goto LAB_14955615f;
                  }
LAB_1495569b4:
                  uVar12 = 1;
                  goto LAB_14955623a;
                }
LAB_14955615f:
                lVar16 = local_1a0;
                if ((*(byte *)(param_1 + 0x19) & 8) == 0) {
LAB_149556636:
                  if (*(int *)(local_198 + 0x170) != 0) {
                    *(undefined4 *)(param_1 + 7) = 9;
                    FUN_14956b132(param_1,"interrupted");
                    goto LAB_1495569b4;
                  }
                  if ((*(uint *)(param_1 + 0x19) & 0xc) == 4) {
                    *(undefined2 *)(local_1a0 + 0x40) = 4;
                    *(longlong *)(local_1a0 + 0x38) = (longlong)iVar18;
                    *(undefined2 *)(local_1a0 + 0x78) = 0xa02;
                    pcVar22 = (&PTR_s_Savepoint_14bd40a70)[*pbVar32];
                    *(char **)(local_1a0 + 0x80) = pcVar22;
                    sVar15 = strlen(pcVar22);
                    *(uint *)(lVar16 + 0x7c) = (uint)sVar15 & 0x3fffffff;
                    *(undefined1 *)(lVar16 + 0x7a) = 1;
                    plVar26 = (longlong *)(lVar16 + 0xa8);
                  }
                  *(undefined2 *)(plVar26 + 1) = 4;
                  *plVar26 = (longlong)*(int *)(pbVar32 + 4);
                  *(undefined2 *)(plVar26 + 8) = 4;
                  plVar26[7] = (longlong)*(int *)(pbVar32 + 8);
                  *(undefined2 *)(plVar26 + 0xf) = 4;
                  plVar26[0xe] = (longlong)*(int *)(pbVar32 + 0xc);
                  plVar20 = plVar26 + 0x15;
                  uVar31 = *(uint *)(plVar26 + 0x19);
                  if ((int)uVar31 < 100) {
                    iVar24 = FUN_14956b6c8(plVar20,100,0);
                    uVar12 = 1;
                    if (iVar24 != 0) goto LAB_14955623a;
                    uVar31 = *(uint *)(plVar26 + 0x19);
                    pcVar22 = (char *)plVar26[0x17];
                  }
                  else {
                    pcVar22 = (char *)plVar26[0x18];
                    plVar26[0x17] = (longlong)pcVar22;
                  }
                  *(undefined2 *)(plVar26 + 0x16) = 0x202;
                  local_188 = 0.0;
                  local_174 = 0;
                  local_16c = 0;
                  pcVar25 = pcVar22;
                  local_180 = pcVar22;
                  local_178 = uVar31;
                  switch(pbVar32[1]) {
                  case 0xef:
                  case 0xfb:
                    goto switchD_14955673f_caseD_ef;
                  case 0xf0:
                    pcVar22 = *(char **)(*(longlong *)(pbVar32 + 0x10) + 8);
                    goto LAB_149556c64;
                  case 0xf1:
                    puVar5 = *(uint **)(pbVar32 + 0x10);
                    uVar31 = *puVar5;
                    if ((int)uVar31 < 1) {
                      uVar31 = 0;
                      local_1e8 = plVar26;
                    }
                    else {
                      lVar16 = 1;
                      local_1e8 = plVar26;
                      local_1e0 = plVar20;
                      do {
                        FUN_149555a84(&local_188,&DAT_14bd41512,puVar5[lVar16]);
                        lVar16 = lVar16 + 1;
                      } while ((ulonglong)uVar31 + 1 != lVar16);
                      plVar20 = local_1e0;
                      uVar31 = local_174._4_4_;
                    }
                    plVar26 = local_1e8;
                    *pcVar22 = '[';
                    if (uVar31 + 1 < local_178) {
                      local_174 = CONCAT44(uVar31 + 1,(int)local_174);
                      local_180[uVar31] = ']';
                    }
                    else {
                      FUN_1495557b3(&local_188,L"]Right Bracket",1);
                    }
                    goto LAB_149556753;
                  case 0xf2:
                    puVar14 = *(undefined8 **)(pbVar32 + 0x10);
                    goto LAB_149556b04;
                  case 0xf3:
                    puVar14 = *(undefined8 **)(pbVar32 + 0x10);
LAB_149556ade:
                    FUN_149555a84(&local_188,"%.16g",*puVar14);
                    goto LAB_149556753;
                  case 0xf4:
                    uVar13 = *(undefined8 *)(*(longlong *)(pbVar32 + 0x10) + 0x10);
                    pcVar22 = "vtab:%p";
                    break;
                  case 0xf5:
                    puVar14 = *(undefined8 **)(pbVar32 + 0x10);
                    uVar11 = *(ushort *)(puVar14 + 1);
                    if ((uVar11 & 2) != 0) {
                      pcVar25 = (char *)puVar14[2];
                      goto LAB_149556753;
                    }
                    if ((uVar11 & 0x24) == 0) {
                      if ((uVar11 & 8) != 0) goto LAB_149556ade;
                      pcVar25 = "NULL";
                      if ((uVar11 & 1) == 0) {
                        pcVar25 = "(blob)";
                      }
                      goto LAB_149556753;
                    }
LAB_149556b04:
                    uVar13 = *puVar14;
                    pcVar22 = "%lld";
                    break;
                  default:
                    pcVar25 = *(char **)(pbVar32 + 0x10);
                    if (*(char **)(pbVar32 + 0x10) == (char *)0x0) {
switchD_14955673f_caseD_ef:
                      *pcVar22 = '\0';
                      pcVar25 = pcVar22;
                    }
                    goto LAB_149556753;
                  case 0xf7:
                    lVar16 = *(longlong *)(pbVar32 + 0x10);
                    local_1e8 = plVar26;
                    local_1e0 = plVar20;
                    FUN_149555a84(&local_188,&DAT_14bd414d7,*(undefined2 *)(lVar16 + 6));
                    if (*(short *)(lVar16 + 6) != 0) {
                      uVar34 = 0;
                      local_1d0 = lVar16;
                      do {
                        lVar16 = local_1d0;
                        _Str1 = (void **)&DAT_149e02088;
                        puVar14 = *(undefined8 **)(local_1d0 + 0x20 + uVar34 * 8);
                        if (puVar14 != (undefined8 *)0x0) {
                          _Str1 = (void **)*puVar14;
                        }
                        iVar24 = strcmp((char *)_Str1,"BINARY");
                        if (iVar24 == 0) {
                          _Str1 = (void **)&DAT_149e4b430;
                        }
                        bVar17 = *(byte *)(*(longlong *)(lVar16 + 0x18) + uVar34);
                        puVar28 = &DAT_14bd414e3;
                        if ((bVar17 & 2) == 0) {
                          puVar28 = &DAT_149e02088;
                        }
                        pwVar27 = L"-`[Left Bracket";
                        if ((bVar17 & 1) == 0) {
                          pwVar27 = L"";
                        }
                        local_1f8 = _Str1;
                        FUN_149555a84(&local_188,",%s%s%s",pwVar27,puVar28);
                        uVar34 = uVar34 + 1;
                      } while (uVar34 < *(ushort *)(local_1d0 + 6));
                    }
                    uVar34 = (ulonglong)local_174._4_4_;
                    if (local_174._4_4_ + 1 < local_178) {
                      local_174 = CONCAT44(local_174._4_4_ + 1,(int)local_174);
                      local_180[uVar34] = ')';
                      plVar26 = local_1e8;
                      plVar20 = local_1e0;
                    }
                    else {
                      FUN_1495557b3(&local_188,&DAT_149dfbe79,1);
                      plVar26 = local_1e8;
                      plVar20 = local_1e0;
                    }
LAB_149556753:
                    if (local_180 != (char *)0x0) {
                      local_180[local_174 >> 0x20] = '\0';
                      if (((int)local_174 != 0) && ((local_16c & 0x400) == 0)) {
                        FUN_14955d93a(&local_188);
                      }
                    }
                    if (pcVar25 == (char *)plVar26[0x17]) {
                      if (pcVar25 == (char *)0x0) {
                        uVar31 = 0;
                      }
                      else {
                        sVar15 = strlen((char *)plVar26[0x17]);
                        uVar31 = (uint)sVar15 & 0x3fffffff;
                      }
                      *(uint *)((longlong)plVar26 + 0xb4) = uVar31;
                      *(undefined1 *)((longlong)plVar26 + 0xb2) = 1;
                    }
                    else {
                      *(undefined4 *)((longlong)plVar26 + 0xb4) = 0;
                      local_1f8 = (void **)0x0;
                      FUN_14955916b(plVar20,pcVar25,0xffffffff,1);
                    }
                    uVar11 = (ushort)*(uint *)(param_1 + 0x19);
                    if ((*(uint *)(param_1 + 0x19) & 0xc) == 4) {
                      if (3 < (int)plVar26[0x20]) {
                        lVar16 = plVar26[0x1f];
                        plVar26[0x1e] = lVar16;
LAB_149556a5a:
                        *(undefined2 *)(plVar26 + 0x1d) = 0x202;
                        *(undefined4 *)((longlong)plVar26 + 0xec) = 2;
                        FUN_14955591f(3,lVar16,&DAT_14bd40a63,*(undefined2 *)(pbVar32 + 2));
                        *(undefined1 *)((longlong)plVar26 + 0xea) = 1;
                        *(undefined2 *)(plVar26 + 0x24) = 1;
                        uVar11 = (ushort)(int)param_1[0x19];
                        goto LAB_1495567bf;
                      }
                      iVar24 = FUN_14956b6c8(plVar26 + 0x1c,4,0);
                      uVar12 = 1;
                      if (iVar24 == 0) {
                        lVar16 = plVar26[0x1e];
                        goto LAB_149556a5a;
                      }
                      goto LAB_14955623a;
                    }
LAB_1495567bf:
                    *(ushort *)(param_1 + 0x18) = ~uVar11 & 0xc;
                    param_1[0x14] = param_1[0xd] + 0x38;
                    *(undefined4 *)(param_1 + 7) = 0;
                    uVar31 = 100;
                    goto LAB_149556254;
                  case 0xf8:
                    pcVar22 = *(char **)(pbVar32 + 0x10);
LAB_149556c64:
                    FUN_149555a84(&local_188,"%s(%d)",*(undefined8 *)(pcVar22 + 0x38),(int)*pcVar22)
                    ;
                    goto LAB_149556753;
                  case 0xfa:
                    uVar13 = **(undefined8 **)(pbVar32 + 0x10);
                    pcVar22 = "%s";
                    break;
                  case 0xfc:
                    FUN_149555a84(&local_188,"program");
                    goto LAB_149556753;
                  case 0xfd:
                    FUN_149555a84(&local_188,&DAT_149dfc0ac,*(undefined4 *)(pbVar32 + 0x10));
                    goto LAB_149556753;
                  case 0xfe:
                    uVar13 = **(undefined8 **)(pbVar32 + 0x10);
                    pcVar22 = "(%.20s)";
                  }
                  FUN_149555a84(&local_188,pcVar22,uVar13);
                  goto LAB_149556753;
                }
                if (*pbVar32 == 0x3e) {
                  iVar19 = *(int *)((longlong)param_1 + 0x34);
                  if (1 < iVar19) goto LAB_149556636;
                }
                else {
                  if (*pbVar32 == 0xae) goto LAB_149556636;
                  iVar19 = *(int *)((longlong)param_1 + 0x34);
                }
                *(int *)((longlong)param_1 + 0x34) = iVar19 + 1;
              } while (iVar19 < iVar24);
            }
            *(undefined4 *)(param_1 + 7) = 0;
            uVar12 = 0x65;
          }
LAB_14955623a:
          if (0 < param_1[0x17]) {
            FUN_149558c53(puVar2,param_1);
          }
          uVar31 = uVar12;
          if ((uVar12 == 0x65) && (uVar31 = 0x65, *(char *)((longlong)puVar2 + 0x5f) != '\0')) {
            if (*(int *)(puVar2 + 5) < 1) {
              *(undefined4 *)(param_1 + 7) = 0;
            }
            else {
              lVar16 = 0;
              lVar33 = 0;
              iVar24 = 0;
              do {
                lVar3 = *(longlong *)(puVar2[4] + 8 + lVar16);
                if (lVar3 != 0) {
                  if ((*(char *)(lVar3 + 0x11) != '\0') &&
                     (*(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1,
                     *(char *)(lVar3 + 0x12) == '\0')) {
                    FUN_14956624a(lVar3);
                  }
                  lVar4 = *(longlong *)(**(longlong **)(lVar3 + 8) + 0x120);
                  if (lVar4 == 0) {
                    iVar19 = 0;
                  }
                  else {
                    iVar19 = *(int *)(lVar4 + 0x18);
                    *(undefined4 *)(lVar4 + 0x18) = 0;
                  }
                  if (*(char *)(lVar3 + 0x11) != '\0') {
                    piVar1 = (int *)(lVar3 + 0x14);
                    *piVar1 = *piVar1 + -1;
                    if (*piVar1 == 0) {
                      FUN_1495662d2(lVar3);
                    }
                  }
                  if ((0 < iVar19) && (iVar24 == 0 && (code *)puVar2[0x28] != (code *)0x0)) {
                    iVar24 = (*(code *)puVar2[0x28])
                                       (puVar2[0x29],puVar2,*(undefined8 *)(puVar2[4] + lVar16),
                                        iVar19);
                  }
                }
                lVar33 = lVar33 + 1;
                lVar16 = lVar16 + 0x20;
              } while (lVar33 < *(int *)(puVar2 + 5));
              *(int *)(param_1 + 7) = iVar24;
              uVar31 = 1;
              if (iVar24 != 0) goto LAB_149556254;
            }
            uVar31 = 0x65;
          }
        }
LAB_149556254:
        *(uint *)(puVar2 + 10) = uVar31;
        if ((*(uint *)(param_1 + 7) == 0xc0a) || (*(char *)(*param_1 + 0x61) != '\0')) {
          FUN_149569b34();
LAB_149556849:
          *(undefined4 *)(param_1 + 7) = 7;
        }
        else if ((*(uint *)(param_1 + 7) & *(uint *)(*param_1 + 0x54)) == 7) goto LAB_149556849;
        puVar14 = local_1b0;
        iVar24 = local_1d4;
        if (uVar31 - 0x66 < 0xfffffffe) goto LAB_149555ea5;
      }
      uVar31 = uVar31 & *(uint *)((longlong)puVar2 + 0x54);
      if (uVar31 != 0x11) goto LAB_1495562a1;
      if (iVar24 == 0x32) {
        uVar31 = 0x11;
        goto LAB_1495562a1;
      }
      iVar19 = *(int *)((longlong)param_1 + 0x34);
      lVar16 = *param_1;
      local_1f8 = &local_190;
      local_1f0 = 0;
      uVar31 = FUN_14955ba6b(lVar16,param_1[0x1e],*(undefined1 *)((longlong)param_1 + 0xc4),param_1)
      ;
      _Dst = local_190;
      lVar33 = local_1c8;
      if (uVar31 == 0) {
        memcpy(&local_188,local_190,0x128);
        memcpy(_Dst,param_1,0x128);
        memcpy(param_1,&local_188,0x128);
        lVar16 = *(longlong *)((longlong)_Dst + 0x10);
        *(longlong *)((longlong)_Dst + 0x10) = param_1[2];
        param_1[2] = lVar16;
        lVar16 = *(longlong *)((longlong)_Dst + 8);
        *(longlong *)((longlong)_Dst + 8) = param_1[1];
        param_1[1] = lVar16;
        lVar16 = *(longlong *)((longlong)_Dst + 0xf0);
        *(longlong *)((longlong)_Dst + 0xf0) = param_1[0x1e];
        param_1[0x1e] = lVar16;
        *(undefined4 *)((longlong)param_1 + 0x114) = *(undefined4 *)((longlong)_Dst + 0x114);
        *(undefined1 *)((longlong)param_1 + 0xc4) = *(undefined1 *)((longlong)_Dst + 0xc4);
        uVar13 = *(undefined8 *)((longlong)_Dst + 0xd4);
        uVar6 = *(undefined8 *)((longlong)_Dst + 0xdc);
        uVar7 = *(undefined4 *)((longlong)_Dst + 0xe4);
        uVar8 = *(undefined4 *)((longlong)_Dst + 0xe8);
        uVar9 = *(undefined4 *)((longlong)_Dst + 0xec);
        *(undefined4 *)((longlong)puVar14 + 0xc) = *(undefined4 *)((longlong)_Dst + 0xe0);
        *(undefined4 *)(puVar14 + 2) = uVar7;
        *(undefined4 *)((longlong)puVar14 + 0x14) = uVar8;
        *(undefined4 *)(puVar14 + 3) = uVar9;
        *puVar14 = uVar13;
        puVar14[1] = uVar6;
        *(int *)(param_1 + 0x1d) = (int)param_1[0x1d] + 1;
        FUN_1495598bc(_Dst,param_1);
        *(undefined4 *)((longlong)_Dst + 0x38) = 0;
        if ((*(int *)((longlong)_Dst + 0x24) == 0x319c2973) ||
           (*(int *)((longlong)_Dst + 0x24) == 0x2df20da3)) {
          FUN_149558ddf(_Dst);
        }
        iVar24 = iVar24 + 1;
        FUN_149569ad7(_Dst);
        FUN_149558d2c(param_1);
        if (-1 < iVar19) {
          *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 0x10;
        }
        goto LAB_149555e65;
      }
      if (((uVar31 == 7) && (*(char *)(lVar16 + 0x61) == '\0')) &&
         (*(char *)(lVar16 + 0x62) == '\0')) {
        *(undefined1 *)(lVar16 + 0x61) = 1;
        if (0 < *(int *)(lVar16 + 0xd4)) {
          *(undefined4 *)(lVar16 + 0x170) = 1;
        }
        *(int *)(lVar16 + 0x178) = *(int *)(lVar16 + 0x178) + 1;
        *(undefined2 *)(lVar16 + 0x17c) = 0;
        if (*(longlong *)(lVar16 + 0x138) != 0) {
          *(undefined4 *)(*(longlong *)(lVar16 + 0x138) + 0x18) = 7;
        }
      }
      uVar13 = FUN_149558f28(*(undefined8 *)(local_1c8 + 0x168));
      if (param_1[0x15] != 0) {
        FUN_14955d65a(lVar33);
      }
      if (*(char *)(lVar33 + 0x61) == '\0') {
        lVar16 = FUN_149559683(lVar33,uVar13);
        param_1[0x15] = lVar16;
        if ((uVar31 == 0xc0a) || (*(char *)(lVar33 + 0x61) != '\0')) {
          FUN_149569b34(lVar33);
          uVar31 = uVar23;
        }
        else {
          uVar31 = uVar31 & *(uint *)(lVar33 + 0x54);
        }
      }
      else {
        param_1[0x15] = 0;
        uVar31 = uVar23;
      }
LAB_1495565d7:
      *(uint *)(param_1 + 7) = uVar31;
LAB_1495562a1:
      if (*(longlong *)(local_1c8 + 0x18) != 0) {
        (*DAT_14c765d88)();
      }
      goto LAB_1495562b5;
    }
    pcVar22 = "API called with finalized prepared statement";
  }
  uVar31 = 0x15;
  FUN_14955599e(0x15,pcVar22);
  local_1f8 = (void **)0x14bd4063a;
  FUN_14955599e(0x15,"%s at line %d of [%.10s]","misuse",0x14546);
LAB_1495562b5:
  if ((local_60 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return uVar31;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149556ce4 FUN_149556ce4 body=219 status=ok
// SIG undefined FUN_149556ce4(void)

uint FUN_149556ce4(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1 != (longlong *)0x0) {
    lVar1 = *param_1;
    if (lVar1 == 0) {
      uVar2 = 0x15;
      FUN_14955599e(0x15,"API called with finalized prepared statement");
      FUN_14955599e(0x15,"%s at line %d of [%.10s]","misuse",0x142bd,
                    "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6");
    }
    else {
      if (*(longlong *)(lVar1 + 0x18) != 0) {
        (*DAT_14c765d78)();
      }
      if (0 < param_1[0x17]) {
        FUN_149558c53(lVar1,param_1);
      }
      if ((*(int *)((longlong)param_1 + 0x24) == 0x319c2973) ||
         (uVar2 = 0, *(int *)((longlong)param_1 + 0x24) == 0x2df20da3)) {
        uVar2 = FUN_149558ddf(param_1);
      }
      FUN_149569ad7(param_1);
      if ((uVar2 == 0xc0a) || (*(char *)(lVar1 + 0x61) != '\0')) {
        FUN_149569b34(lVar1);
        uVar2 = 7;
      }
      else {
        uVar2 = uVar2 & *(uint *)(lVar1 + 0x54);
      }
      FUN_14955894a(lVar1);
    }
  }
  return uVar2;
}



// FUNCTION 149556dbf FUN_149556dbf body=256 status=ok
// SIG undefined FUN_149556dbf(void)

void FUN_149556dbf(longlong *param_1,uint param_2,longlong param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_res20;
  undefined1 auStack_58 [32];
  undefined *local_38;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(uint *)(param_1 + 10) = param_2;
  local_res20 = param_4;
  if ((param_2 & 0xfb) == 10 && param_2 != 0xc0a) {
    pcVar1 = *(code **)(*param_1 + 0x80);
    if (pcVar1 == (code *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*pcVar1)(*param_1,0,0);
    }
    *(undefined4 *)(param_1 + 0xb) = uVar2;
  }
  if (param_3 == 0) {
    *(uint *)(param_1 + 10) = param_2;
    if ((param_2 != 0) || (param_1[0x2d] != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  else {
    if (param_1[0x2d] == 0) {
      lVar3 = FUN_14955c570(param_1);
      param_1[0x2d] = lVar3;
      if (lVar3 == 0) goto LAB_149556e2f;
    }
    local_28 = &local_res20;
    uVar4 = FUN_14955dd50(param_1,param_3);
    if (param_1[0x2d] != 0) {
      local_38 = &DAT_1495539b4;
      FUN_14955916b(param_1[0x2d],uVar4,0xffffffff,1);
    }
  }
LAB_149556e2f:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149556ed1 FUN_149556ed1 body=1568 status=ok
// SIG undefined FUN_149556ed1(void)

void FUN_149556ed1(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1[4] + 0x18) != 0) {
    (*DAT_14c765d78)();
  }
  lVar14 = param_1[5];
  if ((*(char *)(lVar14 + 0x11) != '\0') &&
     (*(int *)(lVar14 + 0x14) = *(int *)(lVar14 + 0x14) + 1, *(char *)(lVar14 + 0x12) == '\0')) {
    FUN_14956624a();
  }
  if ((*param_1 != 0) && (*(longlong *)(*param_1 + 0x18) != 0)) {
    (*DAT_14c765d78)();
  }
  if ((6 < *(uint *)(param_1 + 6)) || ((0x61U >> (*(uint *)(param_1 + 6) & 0x1f) & 1) == 0))
  goto LAB_1495570b3;
  lVar14 = param_1[5];
  lVar4 = **(longlong **)(lVar14 + 8);
  local_70 = **(longlong **)(param_1[1] + 8);
  if ((*param_1 == 0) || (*(char *)((longlong)*(longlong **)(lVar14 + 8) + 0x24) != '\x02')) {
    iVar10 = 0;
    bVar15 = *(char *)(lVar14 + 0x10) == '\0';
    bVar5 = !bVar15;
    if (bVar15) {
      iVar10 = FUN_1495574f2(lVar14,0,0);
    }
    iVar8 = *(int *)((longlong)param_1 + 0x14);
    if (iVar8 == 0 && iVar10 == 0) {
      iVar8 = FUN_14955d2a6(param_1[1],*(undefined4 *)(*(longlong *)(param_1[5] + 8) + 0x30),
                            0xffffffff,0);
      iVar10 = 7;
      if (iVar8 != 7) {
        iVar8 = *(int *)((longlong)param_1 + 0x14);
        goto LAB_149556fa4;
      }
    }
    else if (iVar10 == 0) {
LAB_149556fa4:
      iVar10 = 0;
      if ((iVar8 == 0) && (iVar10 = FUN_1495574f2(param_1[1],2,param_1 + 2), iVar10 == 0)) {
        *(undefined4 *)((longlong)param_1 + 0x14) = 1;
        iVar10 = 0;
      }
    }
  }
  else {
    bVar5 = true;
    iVar10 = 5;
  }
  iVar8 = *(int *)(*(longlong *)(param_1[5] + 8) + 0x30);
  local_60 = (ulonglong)iVar8;
  iVar3 = (int)(*(longlong **)(param_1[1] + 8))[6];
  local_58 = (ulonglong)iVar3;
  cVar2 = *(char *)(**(longlong **)(param_1[1] + 8) + 9);
  iVar13 = 0x7fffffff;
  uVar9 = *(uint *)(*(longlong *)(param_1[5] + 8) + 0x3c) & 0x7fffffff;
  local_78 = (longlong *)CONCAT71(local_78._1_7_,cVar2);
  iVar8 = (uint)(iVar8 != iVar3) << 3;
  if (cVar2 != '\x05') {
    iVar8 = iVar10;
  }
  if (iVar10 != 0) {
    iVar8 = iVar10;
  }
  uVar12 = *(uint *)(param_1 + 3);
  do {
    if ((uVar9 < uVar12) || (iVar8 != 0)) break;
    iVar8 = 0;
    if (uVar12 != (int)(0x40000000 / (ulonglong)*(uint *)(*(longlong *)(param_1[5] + 8) + 0x30)) +
                  1U) {
      iVar8 = (**(code **)(lVar4 + 0x108))(lVar4,uVar12,&local_50,2);
      if ((iVar8 == 0) &&
         (iVar8 = FUN_149557d43(param_1,uVar12,*(undefined8 *)(local_50 + 8),0), local_50 != 0)) {
        FUN_14955db91();
      }
      uVar12 = *(uint *)(param_1 + 3);
    }
    uVar12 = uVar12 + 1;
    *(uint *)(param_1 + 3) = uVar12;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  if (iVar8 == 0) {
    *(uint *)(param_1 + 7) = uVar9;
    *(uint *)((longlong)param_1 + 0x34) = (uVar9 - uVar12) + 1;
    if (uVar9 < uVar12) goto LAB_149557175;
    iVar8 = 0;
    if (*(int *)((longlong)param_1 + 0x3c) == 0) {
      lVar14 = **(longlong **)(param_1[5] + 8);
      param_1[8] = *(longlong *)(lVar14 + 0x70);
      *(longlong **)(lVar14 + 0x70) = param_1;
      *(undefined4 *)((longlong)param_1 + 0x3c) = 1;
    }
  }
  else if (iVar8 == 0x65) {
LAB_149557175:
    if (uVar9 == 0) {
      lVar14 = param_1[1];
      if ((*(char *)(lVar14 + 0x11) != '\0') &&
         (*(int *)(lVar14 + 0x14) = *(int *)(lVar14 + 0x14) + 1, *(char *)(lVar14 + 0x12) == '\0'))
      {
        FUN_14956624a(lVar14);
      }
      *(undefined4 *)(*(longlong *)(lVar14 + 8) + 0x3c) = 0;
      iVar8 = FUN_1495662f7(*(undefined8 *)(lVar14 + 8));
      if (*(char *)(lVar14 + 0x11) != '\0') {
        piVar1 = (int *)(lVar14 + 0x14);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1495662d2(lVar14);
        }
      }
      uVar9 = 1;
      if ((iVar8 != 0x65) && (iVar8 != 0)) goto LAB_149557099;
    }
    iVar8 = FUN_149557edb(param_1[1],1,(int)param_1[2] + 1);
    if (iVar8 == 0) {
      if (*param_1 != 0) {
        FUN_149557f5c();
      }
      lVar14 = local_70;
      if (((char)local_78 != '\x05') || (iVar8 = FUN_149558033(param_1[1],2), iVar8 == 0)) {
        iVar8 = (int)local_60;
        iVar10 = (int)local_58;
        if (iVar8 < iVar10) {
          iVar10 = (int)((longlong)
                         ((ulonglong)(uint)(iVar10 >> 0x1f) << 0x20 | local_58 & 0xffffffff) /
                        (longlong)iVar8);
          iVar10 = (int)(uVar9 + iVar10 + -1) / iVar10;
          uVar12 = iVar10 - (uint)(iVar10 ==
                                  (int)(0x40000000 /
                                       (ulonglong)*(uint *)(*(longlong *)(param_1[1] + 8) + 0x30)) +
                                  1);
          local_68 = uVar9 * local_60;
          local_78 = *(longlong **)(lVar14 + 0x48);
          uVar9 = *(uint *)(lVar14 + 0x1c);
          if (uVar9 < uVar12) {
LAB_14955745d:
            lVar11 = local_68;
            iVar8 = FUN_149558107(lVar14,0,1);
          }
          else {
            do {
              iVar8 = 0;
              if (((uVar12 != (int)(0x40000000 /
                                   (ulonglong)*(uint *)(*(longlong *)(param_1[1] + 8) + 0x30)) + 1U)
                  && (iVar8 = (**(code **)(lVar14 + 0x108))(lVar14,uVar12,&local_50,0), iVar8 == 0))
                 && (iVar8 = FUN_1495580c6(local_50), local_50 != 0)) {
                FUN_14955db91();
              }
              uVar12 = uVar12 + 1;
            } while ((uVar12 <= uVar9) && (iVar8 == 0));
            lVar11 = local_68;
            if (iVar8 == 0) goto LAB_14955745d;
          }
          uVar7 = local_60;
          lVar14 = local_58 + 0x40000000;
          if (lVar11 < (longlong)(local_58 + 0x40000000)) {
            lVar14 = lVar11;
          }
          bVar15 = iVar8 == 0;
          if ((bVar15) && (lVar11 = local_60 + 0x40000000, lVar11 < lVar14)) {
            do {
              local_50 = 0;
              iVar8 = (**(code **)(lVar4 + 0x108))
                                (lVar4,(int)(lVar11 / (longlong)uVar7) + 1,&local_50,0);
              if (iVar8 == 0) {
                iVar8 = (**(code **)(*local_78 + 0x18))
                                  (local_78,*(undefined8 *)(local_50 + 8),uVar7 & 0xffffffff);
              }
              if (local_50 != 0) {
                FUN_14955db91();
              }
              bVar15 = iVar8 == 0;
            } while ((bVar15) && (lVar11 = lVar11 + uVar7, lVar11 < lVar14));
          }
          plVar6 = local_78;
          if (((!bVar15) ||
              (iVar8 = (**(code **)(*local_78 + 0x30))(local_78,&local_50), iVar8 != 0)) ||
             ((local_68 < local_50 && (iVar8 = (**(code **)(*plVar6 + 0x20))(plVar6), iVar8 != 0))))
          goto LAB_149557099;
          iVar8 = FUN_149558315(local_70,0);
        }
        else {
          *(uint *)(lVar14 + 0x1c) =
               (int)((longlong)((ulonglong)(uint)(iVar8 >> 0x1f) << 0x20 | local_60 & 0xffffffff) /
                    (longlong)iVar10) * uVar9;
          iVar8 = FUN_149558107(lVar14,0,0);
        }
        if (iVar8 == 0) {
          iVar10 = FUN_149558366(param_1[1],0);
          iVar8 = 0x65;
          if (iVar10 != 0) {
            iVar8 = iVar10;
          }
        }
      }
    }
  }
LAB_149557099:
  if (!bVar5) {
    FUN_1495584a5(param_1[5],0);
    FUN_149558366(param_1[5],0);
  }
  iVar10 = 7;
  if (iVar8 != 0xc0a) {
    iVar10 = iVar8;
  }
  *(int *)(param_1 + 6) = iVar10;
LAB_1495570b3:
  if ((*param_1 != 0) && (*(longlong *)(*param_1 + 0x18) != 0)) {
    (*DAT_14c765d88)();
  }
  if (*(char *)(param_1[5] + 0x11) != '\0') {
    piVar1 = (int *)(param_1[5] + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1495662d2();
    }
  }
  if (*(longlong *)(param_1[4] + 0x18) != 0) {
    (*DAT_14c765d88)();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495574f2 FUN_1495574f2 body=2128 status=ok
// SIG undefined FUN_1495574f2(void)

uint FUN_1495574f2(longlong *param_1,int param_2,uint *param_3)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  uint *puVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  short sVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 (*pauVar18) [16];
  uint uVar19;
  undefined1 *puVar20;
  uint uVar21;
  longlong lVar22;
  undefined1 auStack_a8 [32];
  char *local_88;
  uint *local_80;
  longlong local_78;
  longlong *local_70;
  int local_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar5 = (longlong *)param_1[1];
  if ((*(char *)((longlong)param_1 + 0x11) != '\0') &&
     (*(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1,
     *(char *)((longlong)param_1 + 0x12) == '\0')) {
    FUN_14956624a(param_1);
  }
  if (((char)param_1[2] == '\x02') || (param_2 == 0 && (char)param_1[2] == '\x01')) {
LAB_1495578e8:
    if (param_3 != (uint *)0x0) {
      uVar11 = *(uint *)(*(longlong *)(plVar5[3] + 0x50) + 0x28);
      *param_3 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18
      ;
    }
    uVar11 = 0;
    if (((param_2 != 0) && (*(int *)(*plVar5 + 0x80) < *(int *)(*param_1 + 700))) &&
       (*(char *)(*plVar5 + 10) != '\0')) {
      uVar11 = FUN_149566e33();
    }
    goto LAB_14955791e;
  }
  if (((*(byte *)(*param_1 + 0x33) & 2) != 0) && (*(char *)(*plVar5 + 0x12) == '\0')) {
    *(byte *)((longlong)plVar5 + 0x26) = *(byte *)((longlong)plVar5 + 0x26) & 0xfe;
  }
  uVar2 = *(ushort *)((longlong)plVar5 + 0x26);
  uVar11 = 8;
  if ((param_2 != 0) && ((uVar2 & 1) != 0)) goto LAB_14955791e;
  if (param_2 == 0) {
    if ((char)uVar2 < '\0') goto LAB_1495575af;
  }
  else if (((char)uVar2 < '\0') || (*(char *)((longlong)plVar5 + 0x24) == '\x02')) {
LAB_1495575af:
    plVar14 = (longlong *)plVar5[0xf];
LAB_1495575b3:
    uVar11 = 0x106;
    if (*plVar14 != 0) goto LAB_14955791e;
  }
  else if (1 < param_2) {
    for (puVar13 = (undefined8 *)plVar5[0xe]; puVar13 != (undefined8 *)0x0;
        puVar13 = (undefined8 *)puVar13[2]) {
      plVar14 = (longlong *)*puVar13;
      if (plVar14 != param_1) goto LAB_1495575b3;
    }
  }
  if (*(char *)((longlong)param_1 + 0x11) != '\0') {
    lVar16 = param_1[1];
    if ((*(longlong **)(lVar16 + 0x78) != param_1) &&
       (uVar11 = 0x106, (*(byte *)(lVar16 + 0x26) & 0x40) != 0)) {
LAB_14955791e:
      if (*(char *)((longlong)param_1 + 0x11) != '\0') {
        piVar1 = (int *)((longlong)param_1 + 0x14);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1495662d2(param_1);
        }
      }
      if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
        return uVar11;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    for (puVar13 = *(undefined8 **)(lVar16 + 0x70); puVar13 != (undefined8 *)0x0;
        puVar13 = (undefined8 *)puVar13[2]) {
      if ((((longlong *)*puVar13 != param_1) && (*(int *)(puVar13 + 1) == 1)) &&
         (*(char *)((longlong)puVar13 + 0xc) != '\x01')) {
        uVar11 = 0x106;
        goto LAB_14955791e;
      }
    }
  }
  *(ushort *)((longlong)plVar5 + 0x26) = uVar2 & 0xffef;
  if (*(int *)((longlong)plVar5 + 0x3c) == 0) {
    *(ushort *)((longlong)plVar5 + 0x26) = uVar2 | 0x10;
  }
  auVar7 = s_TSQLite_format_3_14bd3fd5f._1_16_;
  local_70 = plVar5 + 6;
  uVar11 = 0;
  do {
    puVar8 = param_3;
    if (plVar5[3] == 0) {
      do {
        local_80 = puVar8;
        param_3 = local_80;
        uVar11 = FUN_1495663ec(*plVar5);
        if ((uVar11 != 0) ||
           (uVar11 = (**(code **)(*plVar5 + 0x108))(*plVar5,1,&local_68,0), uVar11 != 0))
        goto LAB_14955764f;
        lVar22 = CONCAT44(uStack_64,local_68);
        lVar16 = *(longlong *)(lVar22 + 0x10);
        if (*(int *)(lVar16 + 4) == 1) {
          pauVar18 = *(undefined1 (**) [16])(lVar16 + 0x50);
        }
        else {
          pauVar18 = *(undefined1 (**) [16])(lVar22 + 8);
          *(undefined1 (**) [16])(lVar16 + 0x50) = pauVar18;
          *(longlong *)(lVar16 + 0x70) = lVar22;
          *(longlong **)(lVar16 + 0x48) = plVar5;
          *(undefined4 *)(lVar16 + 4) = 1;
          *(undefined1 *)(lVar16 + 9) = 100;
        }
        uVar11 = *(uint *)(pauVar18[1] + 0xc);
        uVar3 = *(uint *)(*plVar5 + 0x1c);
        uVar21 = uVar3;
        if ((uVar11 != 0) && (*(int *)(pauVar18[1] + 8) == *(int *)(pauVar18[5] + 0xc))) {
          uVar21 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                   uVar11 << 0x18;
        }
        if ((*(byte *)(plVar5[1] + 0x33) & 2) != 0) {
          uVar21 = 0;
        }
        if (uVar21 != 0) {
          uVar15 = 0x1a;
          uVar11 = uVar15;
          if (*pauVar18 == auVar7) {
            if (2 < (byte)pauVar18[1][2]) {
              *(byte *)((longlong)plVar5 + 0x26) = *(byte *)((longlong)plVar5 + 0x26) | 1;
            }
            if ((byte)pauVar18[1][3] < 3) {
              if ((pauVar18[1][3] == 2) && ((*(byte *)((longlong)plVar5 + 0x26) & 0x20) == 0)) {
                local_68 = 0;
                local_78 = lVar16;
                uVar11 = FUN_14956699d(*plVar5,&local_68);
                lVar16 = local_78;
                if (uVar11 == 0) {
                  if (local_68 != 0) goto LAB_149557754;
                  lVar16 = *(longlong *)(*(longlong *)(local_78 + 0x70) + 0x28);
                  FUN_14955dbdc();
                  if (*(int *)(*(longlong *)(lVar16 + 0x118) + 0x18) == 0) {
                    FUN_149562b50(lVar16);
                  }
LAB_149557ab4:
                  lVar16 = plVar5[3];
                  goto LAB_149557869;
                }
              }
              else {
LAB_149557754:
                uVar11 = uVar15;
                if (pauVar18[1][7] == ' ' && *(short *)(pauVar18[1] + 5) == 0x2040) {
                  uVar6 = (uint)(byte)pauVar18[1][0] * 0x100;
                  uVar17 = (uint)(byte)pauVar18[1][1] * 0x10000;
                  if ((0xffff00ff < (uVar17 + uVar6) - 0x10001) &&
                     (uVar19 = uVar17 | uVar6, ((uVar6 + uVar17) - 1 & uVar19) == 0)) {
                    *(byte *)((longlong)plVar5 + 0x26) = *(byte *)((longlong)plVar5 + 0x26) | 2;
                    bVar9 = pauVar18[1][4];
                    uVar17 = uVar19 - bVar9;
                    if (uVar19 != *(uint *)(plVar5 + 6)) {
                      lVar16 = *(longlong *)(*(longlong *)(lVar16 + 0x70) + 0x28);
                      FUN_14955dbdc();
                      if (*(int *)(*(longlong *)(lVar16 + 0x118) + 0x18) == 0) {
                        FUN_149562b50(lVar16);
                      }
                      *(uint *)((longlong)plVar5 + 0x34) = uVar17;
                      *(uint *)(plVar5 + 6) = uVar19;
                      if (plVar5[0x10] != 0) {
                        plVar5[0x10] = plVar5[0x10] + -4;
                        FUN_14956234e();
                        plVar5[0x10] = 0;
                      }
                      uVar11 = FUN_14955ef5f(*plVar5,local_70,(uint)bVar9);
                      param_3 = local_80;
                      if (uVar11 == 0) goto LAB_149557ab4;
                      goto LAB_14955764f;
                    }
                    if (((*(uint *)(plVar5[1] + 0x30) & 0x10000001) == 1) || (uVar21 <= uVar3)) {
                      if (0x1df < uVar17) {
                        *(uint *)(plVar5 + 6) = uVar19;
                        *(uint *)((longlong)plVar5 + 0x34) = uVar17;
                        *(bool *)((longlong)plVar5 + 0x21) = *(int *)(pauVar18[3] + 4) != 0;
                        *(bool *)((longlong)plVar5 + 0x22) = *(int *)pauVar18[4] != 0;
                        goto LAB_149557806;
                      }
                    }
                    else {
                      local_88 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
                      uVar11 = 0xb;
                      FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption");
                    }
                  }
                }
              }
            }
          }
          lVar16 = *(longlong *)(*(longlong *)(lVar16 + 0x70) + 0x28);
          FUN_14955dbdc();
          if (*(int *)(*(longlong *)(lVar16 + 0x118) + 0x18) == 0) {
            FUN_149562b50(lVar16);
          }
          plVar5[3] = 0;
          param_3 = local_80;
          goto LAB_14955764f;
        }
        uVar17 = *(uint *)((longlong)plVar5 + 0x34);
LAB_149557806:
        iVar10 = (uVar17 * 0x40 - 0x300) / 0xff - 0x17;
        *(ushort *)(plVar5 + 5) = (ushort)iVar10;
        sVar12 = (short)((uVar17 * 0x20 - 0x180) / 0xff) + -0x17;
        *(short *)((longlong)plVar5 + 0x2a) = sVar12;
        *(short *)((longlong)plVar5 + 0x2c) = (short)uVar17 + -0x23;
        if (0x7e < (ushort)iVar10) {
          iVar10 = 0x7f;
        }
        *(short *)((longlong)plVar5 + 0x2e) = sVar12;
        *(char *)((longlong)plVar5 + 0x25) = (char)iVar10;
        plVar5[3] = lVar16;
        *(uint *)((longlong)plVar5 + 0x3c) = uVar21;
LAB_149557869:
        puVar8 = local_80;
      } while (lVar16 == 0);
      uVar11 = 0;
      param_3 = local_80;
    }
    if ((param_2 == 0) || (uVar11 != 0)) {
LAB_149557647:
      if (uVar11 == 0) {
        if (((char)param_1[2] == '\0') &&
           (*(int *)(plVar5 + 7) = (int)plVar5[7] + 1, *(char *)((longlong)param_1 + 0x11) != '\0'))
        {
          *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
          param_1[8] = plVar5[0xe];
          plVar5[0xe] = (longlong)(param_1 + 6);
        }
        bVar9 = 2 - (param_2 == 0);
        *(byte *)(param_1 + 2) = bVar9;
        if (*(byte *)((longlong)plVar5 + 0x24) < bVar9) {
          *(byte *)((longlong)plVar5 + 0x24) = bVar9;
        }
        if (param_2 == 0) goto LAB_1495578e8;
        lVar16 = plVar5[3];
        plVar5[0xf] = (longlong)param_1;
        *(ushort *)((longlong)plVar5 + 0x26) =
             (ushort)(1 < param_2) << 6 | *(ushort *)((longlong)plVar5 + 0x26) & 0xffbf;
        uVar11 = *(uint *)(*(longlong *)(lVar16 + 0x50) + 0x1c);
        if (*(uint *)((longlong)plVar5 + 0x3c) ==
            (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18))
        goto LAB_1495578e8;
        uVar11 = FUN_1495580c6(*(undefined8 *)(lVar16 + 0x70));
        if (uVar11 == 0) {
          uVar11 = *(uint *)((longlong)plVar5 + 0x3c);
          *(uint *)(*(longlong *)(lVar16 + 0x50) + 0x1c) =
               uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
          goto LAB_1495578e8;
        }
        goto LAB_14955791e;
      }
    }
    else {
      if ((*(byte *)((longlong)plVar5 + 0x26) & 1) != 0) {
LAB_149557d18:
        FUN_1495663a3(plVar5);
        uVar11 = 8;
        goto LAB_14955791e;
      }
      lVar16 = *plVar5;
      uVar11 = *(uint *)(lVar16 + 0x2c);
      if (uVar11 == 0) {
        *(bool *)(lVar16 + 0x19) = *(char *)(*param_1 + 0x60) == '\x02';
        if (*(char *)(lVar16 + 0x14) == '\x01') {
          lVar22 = *(longlong *)(lVar16 + 0x120);
          if (lVar22 == 0) {
            bVar9 = *(byte *)(lVar16 + 0x15);
            if ((bVar9 < 6) && ((0x23U >> (bVar9 & 0x1f) & 1) != 0)) {
              if (*(char *)(lVar16 + 0x11) == '\0') {
                uVar11 = (**(code **)(**(longlong **)(lVar16 + 0x48) + 0x38))();
                if (uVar11 != 0) goto LAB_149557cd1;
                bVar9 = *(byte *)(lVar16 + 0x15);
              }
              if (bVar9 != 5) {
                *(undefined1 *)(lVar16 + 0x15) = 2;
              }
            }
            if ((1 < param_2) && (uVar11 = FUN_1495622e4(lVar16), uVar11 != 0)) goto LAB_149557cd1;
          }
          else {
            if ((*(char *)(lVar16 + 8) != '\0') && (*(char *)(lVar22 + 0x3f) == '\0')) {
              if ((*(byte *)(lVar16 + 0x15) < 4) || (*(byte *)(lVar16 + 0x15) == 5)) {
                if (*(char *)(lVar16 + 0x11) == '\0') {
                  uVar11 = (**(code **)(**(longlong **)(lVar16 + 0x48) + 0x38))
                                     (*(longlong **)(lVar16 + 0x48),4);
                  if (uVar11 != 0) goto LAB_149557cd1;
                  lVar22 = *(longlong *)(lVar16 + 0x120);
                }
                *(undefined1 *)(lVar16 + 0x15) = 4;
                puVar20 = (undefined1 *)(lVar22 + 0x3f);
                if (*(char *)(lVar22 + 0x3f) == '\0') goto LAB_149557c2a;
              }
              else {
                puVar20 = (undefined1 *)(lVar22 + 0x3f);
LAB_149557c2a:
                (**(code **)(**(longlong **)(lVar22 + 8) + 0x70))
                          (*(longlong **)(lVar22 + 8),*(short *)(lVar22 + 0x3c) + 3,1);
              }
              *puVar20 = 1;
              lVar22 = *(longlong *)(lVar16 + 0x120);
            }
            if (*(char *)(lVar22 + 0x42) != '\0') goto LAB_149557d18;
            if ((*(char *)(lVar22 + 0x3f) == '\0') &&
               (uVar11 = (**(code **)(**(longlong **)(lVar22 + 8) + 0x70))
                                   (*(longlong **)(lVar22 + 8),0,1), uVar11 != 0))
            goto LAB_149557cd1;
            *(undefined1 *)(lVar22 + 0x40) = 1;
            iVar10 = memcmp((void *)(lVar22 + 0x48),(void *)**(undefined8 **)(lVar22 + 0x30),0x30);
            if (iVar10 != 0) {
              if (*(char *)(lVar22 + 0x3f) == '\0') {
                (**(code **)(**(longlong **)(lVar22 + 8) + 0x70))(*(longlong **)(lVar22 + 8),0,1);
              }
              *(undefined1 *)(lVar22 + 0x40) = 0;
              goto LAB_149557cdd;
            }
          }
          *(undefined1 *)(lVar16 + 0x14) = 2;
          uVar4 = *(undefined4 *)(lVar16 + 0x1c);
          *(undefined4 *)(lVar16 + 0x28) = uVar4;
          *(undefined4 *)(lVar16 + 0x24) = uVar4;
          *(undefined4 *)(lVar16 + 0x20) = uVar4;
          *(undefined8 *)(lVar16 + 0x60) = 0;
        }
        uVar11 = FUN_1495662f7(plVar5);
        goto LAB_149557647;
      }
LAB_149557cd1:
      if (uVar11 == 0x205) {
LAB_149557cdd:
        uVar11 = (uint)(*(char *)((longlong)plVar5 + 0x24) != '\0') << 9 | 5;
      }
    }
LAB_14955764f:
    FUN_1495663a3(plVar5);
    if ((((char)uVar11 != '\x05') || (*(char *)((longlong)plVar5 + 0x24) != '\0')) ||
       (iVar10 = FUN_14955eefa(plVar5), iVar10 == 0)) goto LAB_14955791e;
  } while( true );
}



// FUNCTION 149557d43 FUN_149557d43 body=407 status=ok
// SIG undefined FUN_149557d43(void)

int FUN_149557d43(longlong param_1,uint param_2,longlong param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  void *_Dst;
  longlong lVar10;
  undefined1 auStack_98 [44];
  int local_6c;
  longlong local_68;
  size_t local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 8) + 8);
  lVar4 = *plVar3;
  iVar9 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 8) + 0x30);
  lVar6 = (longlong)iVar9;
  iVar1 = (int)plVar3[6];
  lVar8 = (longlong)iVar1;
  iVar7 = 0;
  iVar5 = iVar1;
  if (iVar9 < iVar1) {
    iVar5 = iVar9;
  }
  if (iVar9 != iVar1) {
    iVar7 = (uint)(*(char *)(lVar4 + 0x10) != '\0') << 3;
  }
  if ((0 < iVar9) && (local_6c = param_4, local_68 = lVar6, local_58 = param_3, iVar7 == 0)) {
    lVar10 = (ulonglong)param_2 * lVar6 - lVar6;
    local_60 = (size_t)iVar5;
    do {
      local_50 = 0;
      iVar7 = 0;
      iVar9 = (int)(lVar10 / lVar8);
      if ((int)(0x40000000 /
               (ulonglong)*(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x30)) != iVar9)
      {
        iVar7 = (**(code **)(lVar4 + 0x108))(lVar4,iVar9 + 1,&local_50,0);
        if ((iVar7 == 0) && (iVar7 = FUN_1495580c6(local_50), iVar7 == 0)) {
          _Dst = (void *)(lVar10 % lVar8 + *(longlong *)(local_50 + 8));
          memcpy(_Dst,(void *)(lVar10 % local_68 + local_58),local_60);
          iVar7 = 0;
          **(undefined1 **)(local_50 + 0x10) = 0;
          if ((local_6c == 0) && (lVar10 == 0)) {
            uVar2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 8) + 0x3c);
            *(uint *)((longlong)_Dst + 0x1c) =
                 (uVar2 & 0x7fffffff) >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                 uVar2 << 0x18;
          }
        }
        if (local_50 != 0) {
          FUN_14955db91();
        }
      }
    } while ((iVar7 == 0) &&
            (lVar10 = lVar10 + lVar8, lVar10 < (longlong)((ulonglong)param_2 * lVar6)));
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar7;
}



// FUNCTION 149557edb FUN_149557edb body=129 status=ok
// SIG undefined FUN_149557edb(void)

int FUN_149557edb(longlong param_1,int param_2,uint param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0')) {
    FUN_14956624a(param_1);
  }
  lVar3 = *(longlong *)(lVar2 + 0x18);
  lVar4 = *(longlong *)(lVar3 + 0x50);
  iVar5 = FUN_1495580c6(*(undefined8 *)(lVar3 + 0x70));
  if ((iVar5 == 0) &&
     (*(uint *)(lVar4 + 0x24 + (longlong)param_2 * 4) =
           param_3 >> 0x18 | (param_3 & 0xff0000) >> 8 | (param_3 & 0xff00) << 8 | param_3 << 0x18,
     param_2 == 7)) {
    *(char *)(lVar2 + 0x22) = (char)param_3;
  }
  if (*(char *)(param_1 + 0x11) != '\0') {
    piVar1 = (int *)(param_1 + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1495662d2(param_1);
    }
  }
  return iVar5;
}



// FUNCTION 149557f5c FUN_149557f5c body=215 status=ok
// SIG undefined FUN_149557f5c(void)

void FUN_149557f5c(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x69) == '\0') {
    FUN_14955dca3(param_1);
  }
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar4 = 0x18;
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar4);
      if (lVar2 != 0) {
        if (*(int *)(param_1 + 0x48) == 0) {
          FUN_149578912();
        }
        else {
          pbVar1 = (byte *)(lVar2 + 0x72);
          *pbVar1 = *pbVar1 | 8;
        }
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x20;
    } while (lVar3 < *(int *)(param_1 + 0x28));
  }
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) & 0xee;
  lVar3 = *(longlong *)(param_1 + 0x220);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x220) = 0;
    for (lVar4 = *(longlong *)(param_1 + 8); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x10)) {
      *(uint *)(lVar4 + 200) = (*(uint *)(lVar4 + 200) & 0xfffffffc) + 1;
    }
    do {
      lVar3 = *(longlong *)(lVar3 + 0x28);
      FUN_149569a63();
    } while (lVar3 != 0);
  }
  if (*(char *)(param_1 + 0x69) == '\0') {
    FUN_14955dd00(param_1);
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    FUN_149585d8e(param_1);
    return;
  }
  return;
}



// FUNCTION 149558033 FUN_149558033 body=147 status=ok
// SIG undefined FUN_149558033(void)

undefined8 FUN_149558033(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  *(ushort *)(lVar1 + 0x26) = (ushort)(param_2 == 1) << 5 | *(ushort *)(lVar1 + 0x26) & 0xffdf;
  uVar3 = FUN_1495574f2(param_1,0,0);
  if ((int)uVar3 == 0) {
    lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x50);
    cVar4 = (char)param_2;
    if ((*(char *)(lVar2 + 0x12) != cVar4) ||
       (uVar3 = 0, *(char *)(lVar2 + 0x13) != *(char *)(lVar2 + 0x12))) {
      uVar3 = FUN_1495574f2(param_1,2,0);
      if ((int)uVar3 == 0) {
        uVar3 = FUN_1495580c6(*(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x70));
        if ((int)uVar3 == 0) {
          *(char *)(lVar2 + 0x12) = cVar4;
          *(char *)(lVar2 + 0x13) = cVar4;
          uVar3 = 0;
        }
      }
    }
  }
  *(byte *)(lVar1 + 0x26) = *(byte *)(lVar1 + 0x26) & 0xdf;
  return uVar3;
}



// FUNCTION 1495580c6 FUN_1495580c6 body=65 status=ok
// SIG undefined FUN_1495580c6(void)

ulonglong FUN_1495580c6(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_78 [36];
  int iStack_54;
  longlong lStack_50;
  ulonglong uStack_48;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (((*(byte *)(param_1 + 0x34) & 4) == 0) ||
     (*(uint *)(lVar1 + 0x1c) < *(uint *)(param_1 + 0x30))) {
    uVar4 = *(uint *)(lVar1 + 0x2c);
    if (uVar4 == 0) {
      if (*(uint *)(lVar1 + 0xb8) <= *(uint *)(lVar1 + 0xbc)) {
        uVar6 = FUN_14956711f();
        return uVar6;
      }
      uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
      lVar1 = *(longlong *)(param_1 + 0x28);
      uVar4 = *(uint *)(lVar1 + 0x1c);
      uVar3 = *(uint *)(lVar1 + 0xb8) / *(uint *)(lVar1 + 0xbc);
      *(byte *)(lVar1 + 0x18) = *(byte *)(lVar1 + 0x18) | 4;
      uVar9 = *(uint *)(param_1 + 0x30);
      uVar10 = -uVar3 & uVar9 - 1;
      if (uVar4 < uVar9) {
        uVar9 = uVar9 - uVar10;
      }
      else {
        uVar9 = uVar4 - uVar10;
        if (uVar3 + uVar10 <= uVar4) {
          uVar9 = uVar3;
        }
      }
      if ((int)uVar9 < 1) {
        uVar6 = 0;
      }
      else {
        iStack_54 = uVar10 + 1;
        bVar2 = false;
        iVar8 = 1;
        do {
          iVar11 = iVar8 + uVar10;
          if (((iVar11 == *(int *)(param_1 + 0x30)) || (*(longlong *)(lVar1 + 0x40) == 0)) ||
             (iVar5 = FUN_1495602ed(), iVar5 == 0)) {
            uVar6 = 0;
            if (iVar11 != (int)(0x40000000 / (longlong)*(int *)(lVar1 + 0xbc)) + 1) {
              uVar4 = (**(code **)(lVar1 + 0x108))(lVar1,iVar11,&lStack_50,0);
              if (uVar4 == 0) {
                uVar4 = FUN_14956711f(lStack_50);
                uVar6 = (ulonglong)uVar4;
                if ((*(ushort *)(lStack_50 + 0x34) & 8) != 0) {
                  bVar2 = true;
                }
                goto LAB_14956706c;
              }
              uVar6 = (ulonglong)uVar4;
              goto LAB_149567075;
            }
          }
          else {
            lStack_50 = FUN_14956295c(lVar1);
            uVar6 = 0;
            if (lStack_50 != 0) {
              if ((*(ushort *)(lStack_50 + 0x34) & 8) != 0) {
                bVar2 = true;
              }
LAB_14956706c:
              FUN_14955db91(lStack_50);
            }
          }
        } while ((iVar8 < (int)uVar9) && (iVar8 = iVar8 + 1, (int)uVar6 == 0));
        if (((int)uVar6 == 0) && (bVar2)) {
          uVar6 = 0;
          iVar8 = iStack_54;
          do {
            lVar7 = FUN_14956295c(lVar1,iVar8);
            if (lVar7 != 0) {
              *(byte *)(lVar7 + 0x34) = *(byte *)(lVar7 + 0x34) | 8;
              FUN_14955db91(lVar7);
            }
            iVar8 = iVar8 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
      }
LAB_149567075:
      *(byte *)(lVar1 + 0x18) = *(byte *)(lVar1 + 0x18) & 0xfb;
      if ((uStack_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return uVar6;
    }
  }
  else {
    uVar4 = 0;
    if (*(int *)(lVar1 + 0x80) != 0) {
      uVar6 = FUN_14955f4ab();
      return uVar6;
    }
  }
  return (ulonglong)uVar4;
}



// FUNCTION 149558107 FUN_149558107 body=525 status=ok
// SIG undefined FUN_149558107(void)

int FUN_149558107(longlong param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar6 = *(int *)(param_1 + 0x2c);
  if (iVar6 != 0) goto LAB_149558127;
  if (DAT_14c765e88 != (code *)0x0) {
    iVar3 = (*DAT_14c765e88)(400);
    iVar6 = 10;
    if (iVar3 != 0) goto LAB_149558127;
  }
  if (2 < *(byte *)(param_1 + 0x14)) {
    iVar6 = FUN_149564829(param_1,1);
    if (iVar6 == 0) {
      for (lVar4 = *(longlong *)(param_1 + 0x70); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x40)) {
        *(undefined4 *)(lVar4 + 0x18) = 1;
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x120) == 0) {
        iVar6 = FUN_1495674bb(param_1);
        if (((iVar6 != 0) || (iVar6 = FUN_149567570(param_1,param_2), iVar6 != 0)) ||
           (iVar6 = FUN_14955fedf(param_1,0), iVar6 != 0)) goto LAB_149558127;
        uVar5 = FUN_149564278(*(undefined8 *)(param_1 + 0x118));
        iVar6 = FUN_149560109(param_1,uVar5);
        if (iVar6 != 0) goto LAB_149558127;
        plVar2 = *(longlong **)(param_1 + 0x118);
        while (*plVar2 != 0) {
          FUN_1495602a2();
        }
        uVar1 = *(uint *)(param_1 + 0x1c);
        if ((*(uint *)(param_1 + 0x24) < uVar1) &&
           (iVar6 = FUN_149564636(param_1,uVar1 - (uVar1 == (int)(0x40000000 /
                                                                 (longlong)*(int *)(param_1 + 0xbc))
                                                            + 1U)), iVar6 != 0)) goto LAB_149558127;
        if (param_3 != 0) goto LAB_149558213;
        iVar6 = FUN_149558315(param_1,param_2);
      }
      else {
        local_38 = 0;
        lVar4 = FUN_149564278(*(undefined8 *)(param_1 + 0x118));
        if (lVar4 == 0) {
          iVar6 = (**(code **)(param_1 + 0x108))(param_1,1,&local_38,0);
          *(undefined8 *)(local_38 + 0x20) = 0;
          lVar4 = local_38;
          if (local_38 != 0) goto LAB_149558240;
        }
        else {
LAB_149558240:
          iVar6 = FUN_14955f6c0(param_1,lVar4,*(undefined4 *)(param_1 + 0x1c),1);
          if (local_38 != 0) {
            FUN_14955db91();
          }
        }
        if (iVar6 == 0) {
          plVar2 = *(longlong **)(param_1 + 0x118);
          while (*plVar2 != 0) {
            FUN_1495602a2();
          }
        }
      }
      if (iVar6 != 0) goto LAB_149558127;
    }
LAB_149558213:
    if (*(longlong *)(param_1 + 0x120) == 0) {
      *(undefined1 *)(param_1 + 0x14) = 5;
    }
  }
  iVar6 = 0;
LAB_149558127:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar6;
}



// FUNCTION 149558315 FUN_149558315 body=81 status=ok
// SIG undefined FUN_149558315(void)

undefined8 FUN_149558315(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = **(longlong **)(param_1 + 0x48);
  if (lVar1 != 0) {
    uVar2 = (**(code **)(lVar1 + 0x50))(*(longlong **)(param_1 + 0x48),0x15,param_2);
    if (((int)uVar2 != 0xc) && ((int)uVar2 != 0)) {
      return uVar2;
    }
  }
  if ((*(char *)(param_1 + 0xb) == '\0') && (*(char *)(param_1 + 0xe) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x000149558363. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x28))();
    return uVar2;
  }
  return 0;
}



// FUNCTION 149558366 FUN_149558366 body=319 status=ok
// SIG undefined FUN_149558366(void)

uint FUN_149558366(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  code *pcVar7;
  
  cVar5 = *(char *)(param_1 + 0x10);
  if (cVar5 == '\0') {
    return 0;
  }
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0')) {
    FUN_14956624a(param_1);
    cVar5 = *(char *)(param_1 + 0x10);
  }
  if (cVar5 == '\x02') {
    plVar3 = *(longlong **)(param_1 + 8);
    lVar4 = *plVar3;
    uVar6 = *(uint *)(lVar4 + 0x2c);
    if (uVar6 == 0) {
      *(int *)(lVar4 + 0x84) = *(int *)(lVar4 + 0x84) + 1;
      if (((*(char *)(lVar4 + 0x14) != '\x02') || (*(char *)(lVar4 + 8) == '\0')) ||
         (*(char *)(lVar4 + 9) != '\x01')) {
        uVar6 = FUN_149562c6b(lVar4,*(undefined1 *)(lVar4 + 0x17),1);
        if (((char)uVar6 == '\r') || ((uVar6 & 0xff) == 10)) {
          *(uint *)(lVar4 + 0x2c) = uVar6;
          *(undefined1 *)(lVar4 + 0x14) = 6;
          if (uVar6 == 0) {
            if (*(char *)(lVar4 + 0x1a) == '\0') {
              pcVar7 = FUN_149562686;
            }
            else {
              pcVar7 = FUN_149562436;
            }
            *(code **)(lVar4 + 0x108) = pcVar7;
            goto LAB_1495583eb;
          }
          *(undefined1 **)(lVar4 + 0x108) = &LAB_14956242b;
        }
        goto LAB_1495583a6;
      }
      *(undefined1 *)(lVar4 + 0x14) = 1;
    }
    else {
LAB_1495583a6:
      if ((param_2 == 0) && (uVar6 != 0)) {
        if (*(char *)(param_1 + 0x11) == '\0') {
          return uVar6;
        }
        piVar1 = (int *)(param_1 + 0x14);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        goto joined_r0x00014955841c;
      }
    }
LAB_1495583eb:
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    *(undefined1 *)((longlong)plVar3 + 0x24) = 1;
    FUN_149563c27(plVar3[0xb]);
    plVar3[0xb] = 0;
  }
  FUN_149567744(param_1);
  if (*(char *)(param_1 + 0x11) == '\0') {
    return 0;
  }
  uVar6 = 0;
  piVar1 = (int *)(param_1 + 0x14);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
joined_r0x00014955841c:
  if (iVar2 == 0) {
    FUN_1495662d2(param_1);
  }
  return uVar6;
}



// FUNCTION 1495584a5 FUN_1495584a5 body=579 status=ok
// SIG undefined FUN_1495584a5(void)

int FUN_1495584a5(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  bool bVar10;
  
  if (*(char *)(param_1 + 0x10) != '\x02') {
    return 0;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0')) {
    FUN_14956624a(param_1);
  }
  if (*(char *)((longlong)plVar2 + 0x21) != '\0') {
    lVar7 = *plVar2;
    for (lVar6 = plVar2[2]; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x28)) {
      *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) & 0xfb;
    }
    if (*(char *)((longlong)plVar2 + 0x22) == '\0') {
      uVar9 = *(uint *)((longlong)plVar2 + 0x3c);
      uVar4 = 0;
      if (1 < uVar9) {
        iVar3 = (uVar9 - 2) - (uVar9 - 2) % (*(uint *)((longlong)plVar2 + 0x34) / 5 + 1);
        uVar4 = iVar3 + (uint)(iVar3 + 1 == (int)(0x40000000 / (ulonglong)*(uint *)(plVar2 + 6))) +
                2;
      }
      if ((uVar4 == uVar9) || (uVar9 == (int)(0x40000000 / (ulonglong)*(uint *)(plVar2 + 6)) + 1U))
      {
        uVar8 = 0x109b4;
      }
      else {
        uVar4 = *(uint *)(*(longlong *)(plVar2[3] + 0x50) + 0x24);
        uVar5 = FUN_14956781b(plVar2,uVar9,
                              uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                              uVar4 << 0x18);
        if (uVar5 <= uVar9) {
          if (uVar5 < uVar9) {
            if (plVar2[2] != 0) {
              bVar10 = false;
              iVar3 = FUN_149567c17(plVar2[2],0,0);
              if (iVar3 != 0) goto LAB_14955867e;
            }
            do {
              iVar3 = FUN_14956791f(plVar2,uVar5,uVar9,1);
              uVar9 = uVar9 - 1;
              bVar10 = iVar3 == 0;
              if (uVar9 <= uVar5) break;
            } while (iVar3 == 0);
          }
          else {
            bVar10 = true;
            iVar3 = 0;
          }
LAB_14955867e:
          if ((uVar4 != 0) && (iVar3 == 0x65 || bVar10)) {
            iVar3 = FUN_1495580c6();
            *(undefined4 *)(*(longlong *)(plVar2[3] + 0x50) + 0x20) = 0;
            *(undefined4 *)(*(longlong *)(plVar2[3] + 0x50) + 0x24) = 0;
            *(uint *)(*(longlong *)(plVar2[3] + 0x50) + 0x1c) =
                 uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
            *(undefined1 *)((longlong)plVar2 + 0x23) = 1;
            *(uint *)((longlong)plVar2 + 0x3c) = uVar5;
          }
          if (iVar3 != 0) {
            FUN_149562b94(lVar7);
            goto LAB_149558516;
          }
          goto LAB_1495584f7;
        }
        uVar8 = 0x109b9;
      }
      iVar3 = 0xb;
      FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",uVar8,
                    "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6");
      goto LAB_149558516;
    }
  }
LAB_1495584f7:
  lVar7 = *plVar2;
  if (*(char *)((longlong)plVar2 + 0x23) != '\0') {
    *(undefined4 *)(lVar7 + 0x1c) = *(undefined4 *)((longlong)plVar2 + 0x3c);
    lVar7 = *plVar2;
  }
  iVar3 = FUN_149558107(lVar7,param_2,0);
LAB_149558516:
  if (*(char *)(param_1 + 0x11) != '\0') {
    piVar1 = (int *)(param_1 + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1495662d2(param_1);
    }
  }
  return iVar3;
}



// FUNCTION 1495586e8 FUN_1495586e8 body=276 status=ok
// SIG undefined FUN_1495586e8(void)

int FUN_1495586e8(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = param_1[4];
    if (*(longlong *)(lVar2 + 0x18) != 0) {
      (*DAT_14c765d78)();
    }
    lVar3 = param_1[5];
    if ((*(char *)(lVar3 + 0x11) != '\0') &&
       (*(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1, *(char *)(lVar3 + 0x12) == '\0')) {
      FUN_14956624a();
    }
    if ((*param_1 != 0) &&
       ((*(longlong *)(*param_1 + 0x18) == 0 || ((*DAT_14c765d78)(), *param_1 != 0)))) {
      *(int *)(param_1[5] + 0x18) = *(int *)(param_1[5] + 0x18) + -1;
    }
    if (*(int *)((longlong)param_1 + 0x3c) != 0) {
      plVar5 = (longlong *)(**(longlong **)(param_1[5] + 8) + 0x70);
      do {
        plVar6 = plVar5;
        plVar4 = (longlong *)*plVar6;
        plVar5 = plVar4 + 8;
      } while (plVar4 != param_1);
      *plVar6 = param_1[8];
    }
    FUN_1495587fc(param_1[1],0,0);
    iVar7 = (int)param_1[6];
    if ((int)param_1[6] == 0x65) {
      iVar7 = 0;
    }
    lVar3 = *param_1;
    if (lVar3 != 0) {
      *(int *)(lVar3 + 0x50) = iVar7;
      if ((iVar7 != 0) || (*(longlong *)(lVar3 + 0x168) != 0)) {
        FUN_14955de40(lVar3,iVar7);
      }
      FUN_14955894a(*param_1);
    }
    if (*(char *)(param_1[5] + 0x11) != '\0') {
      piVar1 = (int *)(param_1[5] + 0x14);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_1495662d2();
      }
    }
    if (*param_1 != 0) {
      FUN_145e3b961(param_1);
    }
    FUN_14955894a(lVar2);
    return iVar7;
  }
  return 0;
}



// FUNCTION 1495587fc FUN_1495587fc body=333 status=ok
// SIG undefined FUN_1495587fc(void)

void FUN_1495587fc(longlong param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = *(longlong **)(param_1 + 8);
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0')) {
    FUN_14956624a(param_1);
  }
  if (param_2 == 0) {
    if (plVar2[2] == 0) goto LAB_149558863;
    param_3 = 0;
    param_2 = FUN_149567c17(plVar2[2],0,0);
    if (param_2 == 0) goto LAB_149558863;
  }
  FUN_1495697cd(param_1,param_2,param_3);
LAB_149558863:
  if (*(char *)(param_1 + 0x10) == '\x02') {
    FUN_149562b94(*plVar2);
    iVar4 = (**(code **)(*plVar2 + 0x108))(*plVar2,1,&local_30,0);
    if (iVar4 == 0) {
      lVar3 = *(longlong *)(local_30 + 0x10);
      if (*(int *)(lVar3 + 4) == 1) {
        lVar6 = *(longlong *)(lVar3 + 0x50);
      }
      else {
        lVar6 = *(longlong *)(local_30 + 8);
        *(longlong *)(lVar3 + 0x50) = lVar6;
        *(longlong *)(lVar3 + 0x70) = local_30;
        *(longlong **)(lVar3 + 0x48) = plVar2;
        *(undefined4 *)(lVar3 + 4) = 1;
        *(undefined1 *)(lVar3 + 9) = 100;
      }
      uVar5 = *(uint *)(lVar6 + 0x1c);
      if (uVar5 == 0) {
        uVar5 = *(uint *)(*plVar2 + 0x1c);
      }
      else {
        uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      }
      *(uint *)((longlong)plVar2 + 0x3c) = uVar5;
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x70) + 0x28);
      FUN_14955dbdc();
      if (*(int *)(*(longlong *)(lVar3 + 0x118) + 0x18) == 0) {
        FUN_149562b50(lVar3);
      }
    }
    *(undefined1 *)((longlong)plVar2 + 0x24) = 1;
    FUN_149563c27(plVar2[0xb]);
    plVar2[0xb] = 0;
  }
  FUN_149567744(param_1);
  if (*(char *)(param_1 + 0x11) != '\0') {
    piVar1 = (int *)(param_1 + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1495662d2(param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14955894a FUN_14955894a body=777 status=ok
// SIG undefined FUN_14955894a(void)

void FUN_14955894a(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  if ((*(int *)(param_1 + 0x70) == 0x64cffc7f) && (*(longlong *)(param_1 + 8) == 0)) {
    if (0 < (longlong)*(int *)(param_1 + 0x28)) {
      lVar4 = 0;
      do {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + lVar4);
        if ((lVar5 != 0) && (*(int *)(lVar5 + 0x18) != 0)) goto LAB_149558968;
        lVar4 = lVar4 + 0x20;
      } while ((longlong)*(int *)(param_1 + 0x28) * 0x20 != lVar4);
    }
    FUN_14956a24e(param_1,0);
    while (*(longlong *)(param_1 + 0x2b0) != 0) {
      *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + 0x18);
      FUN_14955d65a(param_1);
    }
    *(undefined8 *)(param_1 + 700) = 0;
    *(undefined1 *)(param_1 + 0x67) = 0;
    if (0 < *(int *)(param_1 + 0x28)) {
      lVar5 = 8;
      lVar4 = 0;
      do {
        lVar1 = *(longlong *)(param_1 + 0x20);
        if (*(longlong *)(lVar1 + lVar5) != 0) {
          FUN_14956aacb();
          *(undefined8 *)(lVar1 + lVar5) = 0;
          if (lVar4 != 1) {
            *(undefined8 *)(lVar1 + 0x10 + lVar5) = 0;
          }
        }
        lVar4 = lVar4 + 1;
        lVar5 = lVar5 + 0x20;
      } while (lVar4 < *(int *)(param_1 + 0x28));
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) != 0) {
      FUN_149578912();
    }
    lVar4 = *(longlong *)(param_1 + 0x220);
    if (lVar4 != 0) {
      *(undefined8 *)(param_1 + 0x220) = 0;
      for (lVar5 = *(longlong *)(param_1 + 8); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x10)) {
        *(uint *)(lVar5 + 200) = (*(uint *)(lVar5 + 200) & 0xfffffffc) + 1;
      }
      do {
        lVar4 = *(longlong *)(lVar4 + 0x28);
        FUN_149569a63();
      } while (lVar4 != 0);
    }
    FUN_149585d8e(param_1);
    for (puVar6 = *(undefined8 **)(param_1 + 0x230); puVar6 != (undefined8 *)0x0;
        puVar6 = (undefined8 *)*puVar6) {
      lVar4 = puVar6[2];
      do {
        piVar2 = *(int **)(lVar4 + 0x40);
        if ((piVar2 != (int *)0x0) && (*piVar2 = *piVar2 + -1, *piVar2 == 0)) {
          (**(code **)(piVar2 + 2))(*(undefined8 *)(piVar2 + 4));
          FUN_14955d65a(param_1);
        }
        lVar5 = *(longlong *)(lVar4 + 0x10);
        if (lVar4 != 0) {
          FUN_14955d65a(param_1);
        }
        lVar4 = lVar5;
      } while (lVar5 != 0);
    }
    FUN_149581789(param_1 + 0x228);
    for (puVar6 = *(undefined8 **)(param_1 + 0x248); puVar6 != (undefined8 *)0x0;
        puVar6 = (undefined8 *)*puVar6) {
      lVar4 = puVar6[2];
      lVar5 = 0x20;
      do {
        if (*(code **)(lVar4 + lVar5) != (code *)0x0) {
          (**(code **)(lVar4 + lVar5))(*(undefined8 *)(lVar4 + -0x10 + lVar5));
        }
        lVar5 = lVar5 + 0x28;
      } while (lVar5 != 0x98);
      if (lVar4 != 0) {
        FUN_14955d65a(param_1);
      }
    }
    FUN_149581789(param_1 + 0x240);
    for (puVar6 = *(undefined8 **)(param_1 + 0x200); puVar6 != (undefined8 *)0x0;
        puVar6 = (undefined8 *)*puVar6) {
      lVar4 = puVar6[2];
      FUN_149585621(param_1);
      piVar2 = (int *)(lVar4 + 0x10);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        if (*(code **)(lVar4 + 0x20) != (code *)0x0) {
          (**(code **)(lVar4 + 0x20))(*(undefined8 *)(lVar4 + 0x18));
        }
        if (lVar4 != 0) {
          FUN_14955d65a(param_1);
        }
      }
    }
    FUN_149581789(param_1 + 0x1f8);
    *(undefined4 *)(param_1 + 0x50) = 0;
    if (*(longlong *)(param_1 + 0x168) == 0) {
      uVar3 = 0;
    }
    else {
      FUN_14955de40(param_1,0);
      uVar3 = *(undefined8 *)(param_1 + 0x168);
    }
    FUN_149559090(uVar3);
    *(undefined4 *)(param_1 + 0x70) = 0xb5357930;
    if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) != 0) {
      FUN_14955d65a(param_1);
    }
    if (*(longlong *)(param_1 + 0x18) == 0) {
      *(undefined4 *)(param_1 + 0x70) = 0x9f3c2d33;
    }
    else {
      (*DAT_14c765d88)();
      *(undefined4 *)(param_1 + 0x70) = 0x9f3c2d33;
      if (*(longlong *)(param_1 + 0x18) != 0) {
        (*DAT_14c765d70)();
      }
    }
    if (*(char *)(param_1 + 0x180) != '\0') {
      FUN_145e3b961(*(undefined8 *)(param_1 + 0x1c0));
    }
    FUN_145e3b961(param_1);
    return;
  }
LAB_149558968:
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014955897c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_14c765d88)();
  return;
}



// FUNCTION 149558c53 FUN_149558c53 body=216 status=ok
// SIG undefined FUN_149558c53(void)

void FUN_149558c53(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  piVar1 = (int *)*param_1;
  if ((*piVar1 < 2) || (*(code **)(piVar1 + 0x22) == (code *)0x0)) {
    (**(code **)(piVar1 + 0x1e))(piVar1,&local_28);
    local_30 = (longlong)(local_28 * 86400000.0);
  }
  else {
    (**(code **)(piVar1 + 0x22))(piVar1,&local_30);
  }
  local_28 = (double)((local_30 - *(longlong *)(param_2 + 0xb8)) * 1000000);
  if ((code *)param_1[0x1f] != (code *)0x0) {
    (*(code *)param_1[0x1f])(param_1[0x20],*(undefined8 *)(param_2 + 0xf0));
  }
  if ((*(byte *)(param_1 + 0xd) & 2) != 0) {
    (*(code *)param_1[0x1d])(2,param_1[0x1e],param_2,&local_28);
  }
  *(undefined8 *)(param_2 + 0xb8) = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149558d2c FUN_149558d2c body=179 status=ok
// SIG undefined FUN_149558d2c(void)

uint FUN_149558d2c(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1 != (longlong *)0x0) {
    lVar1 = *param_1;
    if (*(longlong *)(lVar1 + 0x18) != 0) {
      (*DAT_14c765d78)();
    }
    if (0 < param_1[0x17]) {
      FUN_149558c53(lVar1,param_1);
    }
    uVar2 = FUN_149558ddf(param_1);
    *(undefined4 *)((longlong)param_1 + 0x24) = 0x2df20da3;
    *(undefined4 *)(param_1 + 7) = 0;
    *(undefined2 *)((longlong)param_1 + 0xc2) = 0xff02;
    *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
    param_1[6] = -0xffffffff;
    param_1[10] = 0;
    if ((uVar2 == 0xc0a) || (*(char *)(lVar1 + 0x61) != '\0')) {
      FUN_149569b34(lVar1);
      uVar2 = 7;
    }
    else {
      uVar2 = uVar2 & *(uint *)(lVar1 + 0x54);
    }
    if (*(longlong *)(lVar1 + 0x18) != 0) {
      (*DAT_14c765d88)();
    }
  }
  return uVar2;
}



// FUNCTION 149558ddf FUN_149558ddf body=153 status=ok
// SIG undefined FUN_149558ddf(void)

uint FUN_149558ddf(longlong *param_1)

{
  longlong lVar1;
  undefined *puVar2;
  
  lVar1 = *param_1;
  FUN_149569b7c();
  if (*(int *)((longlong)param_1 + 0x34) < 0) {
    if (((int)param_1[7] != 0) && ((*(byte *)(param_1 + 0x19) & 3) != 0)) {
      puVar2 = &DAT_149dfbe46;
      if (param_1[0x15] == 0) {
        puVar2 = (undefined *)0x0;
      }
      FUN_149556dbf(lVar1,(int)param_1[7],puVar2);
    }
  }
  else {
    FUN_14956a14b(param_1);
    if ((*(uint *)(param_1 + 0x19) & 0x40) != 0) {
      *(uint *)(param_1 + 0x19) = (*(uint *)(param_1 + 0x19) & 0xfffffffc) + 1;
    }
  }
  if (param_1[0x15] != 0) {
    FUN_14955d65a(lVar1);
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x48fa9f76;
  return *(uint *)(lVar1 + 0x54) & *(uint *)(param_1 + 7);
}



// FUNCTION 149558e78 FUN_149558e78 body=84 status=ok
// SIG undefined FUN_149558e78(void)

undefined8 FUN_149558e78(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = *(ushort *)(param_1 + 8);
  if ((uVar1 & 0x12) == 0) {
    uVar3 = FUN_149558f28(param_1);
    return uVar3;
  }
  if ((uVar1 >> 0xe & 1) != 0) {
    iVar2 = FUN_149558ecc(param_1);
    if (iVar2 != 0) {
      return 0;
    }
    uVar1 = *(ushort *)(param_1 + 8);
  }
  *(ushort *)(param_1 + 8) = uVar1 | 0x10;
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 149558ecc FUN_149558ecc body=92 status=ok
// SIG undefined FUN_149558ecc(void)

undefined8 FUN_149558ecc(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_1 + param_1[3];
  if (iVar1 == 0 || SCARRY4(*param_1,param_1[3]) != iVar1 < 0) {
    if ((*(byte *)(param_1 + 2) & 0x10) == 0) {
      return 0;
    }
    iVar1 = 1;
  }
  iVar1 = FUN_14956b6c8(param_1,iVar1,1);
  uVar2 = 7;
  if (iVar1 == 0) {
    uVar2 = 0;
    memset((void *)((longlong)param_1[3] + *(longlong *)(param_1 + 4)),0,(longlong)*param_1);
    param_1[3] = param_1[3] + *param_1;
    *(byte *)((longlong)param_1 + 9) = *(byte *)((longlong)param_1 + 9) & 0xbd;
  }
  return uVar2;
}



// FUNCTION 149558f28 FUN_149558f28 body=45 status=ok
// SIG undefined FUN_149558f28(void)

undefined8 FUN_149558f28(longlong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    uVar2 = ~*(uint *)(param_1 + 8);
    if (((uVar2 & 0x202) == 0) && (*(char *)(param_1 + 10) == '\x01')) {
      return *(undefined8 *)(param_1 + 0x10);
    }
    if ((*(uint *)(param_1 + 8) & 1) == 0) {
      uVar1 = FUN_14956b88d(param_1,CONCAT71((uint7)(uint3)(uVar2 >> 8),1));
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 149558f55 FUN_149558f55 body=48 status=ok
// SIG undefined FUN_149558f55(void)

int FUN_149558f55(int *param_1)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(ushort *)(param_1 + 2);
  if (((uVar1 & 2) != 0) && (*(char *)((longlong)param_1 + 10) == '\x01')) {
    return param_1[3];
  }
  if ((uVar1 & 0x10) == 0) {
    iVar2 = 0;
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_14956b88d(param_1,CONCAT71((uint7)(byte)(uVar1 >> 8),1));
      if (lVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = param_1[3];
      }
      return iVar2;
    }
  }
  else {
    iVar2 = param_1[3];
    if ((uVar1 >> 0xe & 1) != 0) {
      return iVar2 + *param_1;
    }
  }
  return iVar2;
}



// FUNCTION 149558f85 FUN_149558f85 body=44 status=ok
// SIG undefined FUN_149558f85(void)

undefined8 FUN_149558f85(undefined8 *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ushort *)(param_1 + 1);
  if ((uVar1 & 0x24) != 0) {
    return *param_1;
  }
  if ((uVar1 & 8) == 0) {
    if (((uVar1 & 0x12) != 0) && (param_1[2] != 0)) {
      uVar2 = FUN_14956c5ce();
      return uVar2;
    }
    return 0;
  }
  uVar2 = FUN_14956c5a2(*param_1);
  return uVar2;
}



// FUNCTION 149558fb1 FUN_149558fb1 body=138 status=ok
// SIG undefined FUN_149558fb1(void)

undefined8 * FUN_149558fb1(undefined4 *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  
  if ((param_1 != (undefined4 *)0x0) &&
     (puVar6 = (undefined8 *)FUN_145e3bd67(), puVar6 != (undefined8 *)0x0)) {
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[6] = 0;
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    *(undefined4 *)puVar6 = *param_1;
    *(undefined4 *)((longlong)puVar6 + 4) = uVar2;
    *(undefined4 *)(puVar6 + 1) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0xc) = uVar4;
    puVar6[2] = *(undefined8 *)(param_1 + 4);
    uVar1 = *(ushort *)(puVar6 + 1);
    *(ushort *)(puVar6 + 1) = uVar1 & 0xfbff;
    puVar6[5] = 0;
    if ((uVar1 & 0x12) == 0) {
      return puVar6;
    }
    *(ushort *)(puVar6 + 1) = uVar1 & 0xe3ff | 0x1000;
    iVar5 = FUN_14955903b(puVar6);
    if (iVar5 == 0) {
      return puVar6;
    }
    FUN_149559090(puVar6);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14955903b FUN_14955903b body=85 status=ok
// SIG undefined FUN_14955903b(void)

undefined8 FUN_14955903b(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(ushort *)(param_1 + 8) & 0x12) != 0) {
    if (((*(ushort *)(param_1 + 8) >> 0xe & 1) != 0) && (iVar1 = FUN_149558ecc(param_1), iVar1 != 0)
       ) {
      return 7;
    }
    if (((*(int *)(param_1 + 0x20) == 0) ||
        (*(longlong *)(param_1 + 0x10) != *(longlong *)(param_1 + 0x18))) &&
       (uVar2 = FUN_14956c03a(param_1), (int)uVar2 != 0)) {
      return uVar2;
    }
  }
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xef;
  return 0;
}



// FUNCTION 149559090 FUN_149559090 body=56 status=ok
// SIG undefined FUN_149559090(void)

void FUN_149559090(longlong param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (((*(byte *)(param_1 + 9) & 0x24) != 0) || (*(int *)(param_1 + 0x20) != 0)) {
    FUN_14956b588(param_1);
  }
  FUN_14955d65a(*(undefined8 *)(param_1 + 0x28),param_1);
  return;
}



// FUNCTION 1495590c8 FUN_1495590c8 body=79 status=ok
// SIG undefined FUN_1495590c8(void)

void FUN_1495590c8(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_14955916b(*param_1);
  if (iVar1 == 0x12) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0x12;
    FUN_14955916b(*param_1,"string or blob too big",0xffffffff,1,0);
  }
  return;
}



// FUNCTION 149559117 FUN_149559117 body=84 status=ok
// SIG undefined FUN_149559117(void)

void FUN_149559117(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  if (param_3 >> 0x1f == 0) {
    FUN_1495590c8();
  }
  else if (param_1 != (undefined8 *)0x0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0x12;
    FUN_14955916b(*param_1,"string or blob too big",0xffffffff,1,0);
  }
  return;
}



// FUNCTION 14955916b FUN_14955916b body=750 status=ok
// SIG undefined FUN_14955916b(void)

undefined8 FUN_14955916b(longlong param_1,char *param_2,int param_3,char param_4,undefined *param_5)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  void *_Dst;
  undefined1 uVar7;
  int iVar8;
  ulonglong uVar9;
  size_t sVar10;
  uint uVar11;
  short sVar12;
  
  if (param_2 == (char *)0x0) {
    if ((*(byte *)(param_1 + 9) & 0x24) == 0) {
      *(undefined2 *)(param_1 + 8) = 1;
    }
    else {
      FUN_14956b5ca(param_1);
    }
    return 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (lVar3 == 0) {
    iVar8 = 1000000000;
  }
  else {
    iVar8 = *(int *)(lVar3 + 0x7c);
  }
  uVar4 = 2;
  if (param_4 == '\0') {
    uVar4 = 0x10;
  }
  if (param_3 < 0) {
    if (param_4 == '\x01') {
      sVar10 = strlen(param_2);
      uVar9 = (ulonglong)((uint)sVar10 & 0x7fffffff);
    }
    else {
      uVar9 = 0;
      if (-1 < iVar8) {
        do {
          if (param_2[uVar9 + 1] == '\0' && param_2[uVar9] == '\0') break;
          uVar9 = uVar9 + 2;
        } while ((int)uVar9 <= iVar8);
      }
    }
    param_3 = (int)uVar9;
    uVar4 = uVar4 | 0x200;
  }
  sVar12 = (short)uVar4;
  if (param_5 == (undefined *)0xffffffffffffffff) {
    iVar5 = 0;
    if (uVar4 >> 9 != 0) {
      iVar5 = (param_4 != '\x01') + 1;
    }
    if (iVar8 < param_3) {
      if (lVar3 == 0) {
        return 0x12;
      }
      lVar3 = *(longlong *)(lVar3 + 0x138);
      if (lVar3 == 0) {
        return 0x12;
      }
      *(undefined4 *)(lVar3 + 0x18) = 0x12;
      *(int *)(lVar3 + 0x30) = *(int *)(lVar3 + 0x30) + 1;
      return 0x12;
    }
    uVar11 = iVar5 + param_3;
    uVar4 = 0x20;
    if (0x20 < uVar11) {
      uVar4 = uVar11;
    }
    if (*(int *)(param_1 + 0x20) < (int)uVar4) {
      iVar5 = FUN_14956b6c8(param_1,uVar4,0);
      if (iVar5 != 0) {
        return 7;
      }
      _Dst = *(void **)(param_1 + 0x10);
    }
    else {
      _Dst = *(void **)(param_1 + 0x18);
      *(void **)(param_1 + 0x10) = _Dst;
      *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) & 0x2d;
    }
    memcpy(_Dst,param_2,(ulonglong)uVar11);
  }
  else {
    if (((*(byte *)(param_1 + 9) & 0x24) != 0) || (*(int *)(param_1 + 0x20) != 0)) {
      FUN_14956b588(param_1);
    }
    *(char **)(param_1 + 0x10) = param_2;
    if (param_5 == &DAT_1495539b4) {
      *(char **)(param_1 + 0x18) = param_2;
      lVar3 = *(longlong *)(param_1 + 0x28);
      if ((lVar3 == 0) || (*(char **)(lVar3 + 0x1c8) <= param_2)) {
LAB_14955934c:
        uVar4 = (*DAT_14c765d30)(param_2);
      }
      else {
        uVar4 = 0x80;
        if (param_2 < *(char **)(lVar3 + 0x1b8)) {
          if (param_2 < *(char **)(lVar3 + 0x1c0)) goto LAB_14955934c;
          uVar4 = (uint)*(ushort *)(lVar3 + 0x17e);
        }
      }
      *(uint *)(param_1 + 0x20) = uVar4;
    }
    else {
      *(undefined **)(param_1 + 0x30) = param_5;
      sVar12 = (ushort)(param_5 == (undefined *)0x0) * 0x400 + sVar12 + 0x400;
    }
  }
  *(int *)(param_1 + 0xc) = param_3;
  *(short *)(param_1 + 8) = sVar12;
  if (param_4 == '\0') {
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x5e);
  }
  else {
    *(char *)(param_1 + 10) = param_4;
    if ((param_4 != '\x01') && (1 < param_3)) {
      cVar1 = **(char **)(param_1 + 0x10);
      cVar2 = (*(char **)(param_1 + 0x10))[1];
      if (cVar2 == -2 && cVar1 == -1) {
        uVar7 = 2;
      }
      else {
        if (cVar2 != -1 || cVar1 != -2) goto LAB_1495592fe;
        uVar7 = 3;
      }
      iVar5 = FUN_14955903b(param_1);
      if (iVar5 != 0) {
        return 7;
      }
      sVar10 = (longlong)*(int *)(param_1 + 0xc) - 2;
      *(int *)(param_1 + 0xc) = (int)sVar10;
      memmove(*(void **)(param_1 + 0x10),(void *)((longlong)*(void **)(param_1 + 0x10) + 2),sVar10);
      *(undefined1 *)(*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 0xc)) = 0;
      *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 1 + (longlong)*(int *)(param_1 + 0xc)) = 0;
      *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 2;
      *(undefined1 *)(param_1 + 10) = uVar7;
    }
  }
LAB_1495592fe:
  uVar6 = 0x12;
  if (param_3 <= iVar8) {
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 149559459 FUN_149559459 body=104 status=ok
// SIG undefined FUN_149559459(void)

void FUN_149559459(undefined8 *param_1,undefined8 param_2,ulonglong param_3,code *param_4)

{
  if (param_3 >> 0x1f == 0) {
    FUN_1495590c8(param_1,param_2,param_3,1,param_4);
  }
  else {
    if ((code *)0x1 < param_4 + 1) {
      (*param_4)(param_2);
    }
    if (param_1 != (undefined8 *)0x0) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0x12;
      FUN_14955916b(*param_1,"string or blob too big",0xffffffff,1,0);
    }
  }
  return;
}



// FUNCTION 1495594c1 FUN_1495594c1 body=100 status=ok
// SIG undefined FUN_1495594c1(void)

undefined8 FUN_1495594c1(undefined4 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  undefined8 uVar6;
  
  if ((*(byte *)((longlong)param_1 + 9) & 0x24) != 0) {
    FUN_14956b5ca(param_1);
  }
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar1 = *(ushort *)(param_1 + 2);
  uVar5 = uVar1 & 0xfbff;
  *(ushort *)(param_1 + 2) = uVar5;
  if (((uVar1 & 0x12) != 0) && ((*(byte *)((longlong)param_2 + 9) & 8) == 0)) {
    *(ushort *)(param_1 + 2) = uVar5 | 0x1000;
    uVar6 = FUN_14955903b(param_1);
    return uVar6;
  }
  return 0;
}



// FUNCTION 149559525 FUN_149559525 body=89 status=ok
// SIG undefined FUN_149559525(void)

void FUN_149559525(longlong *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  if (param_2 <= (ulonglong)(longlong)*(int *)(*(longlong *)(piVar1 + 10) + 0x7c)) {
    if (((*(byte *)((longlong)piVar1 + 9) & 0x24) != 0) || (piVar1[8] != 0)) {
      FUN_14956b588(piVar1);
    }
    *(undefined2 *)(piVar1 + 2) = 0x4010;
    iVar2 = (int)param_2;
    if (iVar2 < 1) {
      iVar2 = 0;
    }
    piVar1[3] = 0;
    *piVar1 = iVar2;
    *(undefined1 *)((longlong)piVar1 + 10) = 1;
    piVar1[4] = 0;
    piVar1[5] = 0;
  }
  return;
}



// FUNCTION 14955957e FUN_14955957e body=140 status=ok
// SIG undefined FUN_14955957e(void)

void FUN_14955957e(longlong *param_1,uint param_2)

{
  char *pcVar1;
  
  *(uint *)((longlong)param_1 + 0x24) = -(uint)(param_2 == 0) | param_2;
  if ((*(byte *)(*param_1 + 8) & 1) != 0) {
    if (param_2 == 0x204) {
      pcVar1 = "abort due to ROLLBACK";
    }
    else if (param_2 == 0x65) {
      pcVar1 = "no more rows available";
    }
    else if (param_2 == 100) {
      pcVar1 = "another row available";
    }
    else {
      param_2 = param_2 & 0xff;
      pcVar1 = "unknown error";
      if ((param_2 < 0x1d) && ((0x1410004UL >> ((ulonglong)param_2 & 0x3f) & 1) == 0)) {
        pcVar1 = (&PTR_s_not_an_error_14bd49c10)[param_2];
      }
    }
    FUN_14955916b(*param_1,pcVar1,0xffffffff,1,0);
  }
  return;
}



// FUNCTION 14955960a FUN_14955960a body=121 status=ok
// SIG undefined FUN_14955960a(void)

void FUN_14955960a(longlong *param_1)

{
  longlong lVar1;
  
  if ((*(byte *)(*param_1 + 9) & 0x24) == 0) {
    *(undefined2 *)(*param_1 + 8) = 1;
  }
  else {
    FUN_14956b5ca();
  }
  *(undefined4 *)((longlong)param_1 + 0x24) = 7;
  lVar1 = *(longlong *)(*param_1 + 0x28);
  if ((*(char *)(lVar1 + 0x61) == '\0') && (*(char *)(lVar1 + 0x62) == '\0')) {
    *(undefined1 *)(lVar1 + 0x61) = 1;
    if (0 < *(int *)(lVar1 + 0xd4)) {
      *(undefined4 *)(lVar1 + 0x170) = 1;
    }
    *(int *)(lVar1 + 0x178) = *(int *)(lVar1 + 0x178) + 1;
    *(undefined2 *)(lVar1 + 0x17c) = 0;
    if (*(longlong *)(lVar1 + 0x138) != 0) {
      *(undefined4 *)(*(longlong *)(lVar1 + 0x138) + 0x18) = 7;
    }
  }
  return;
}



// FUNCTION 149559683 FUN_149559683 body=94 status=ok
// SIG undefined FUN_149559683(void)

void * FUN_149559683(longlong param_1,char *param_2)

{
  size_t sVar1;
  void *pvVar2;
  
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    sVar1 = sVar1 + 1;
    if (param_1 == 0) {
      pvVar2 = (void *)FUN_145e3bd67(sVar1);
    }
    else {
      pvVar2 = (void *)FUN_14955d750(param_1,sVar1);
    }
    if (pvVar2 != (void *)0x0) {
      pvVar2 = memcpy(pvVar2,param_2,sVar1);
      return pvVar2;
    }
  }
  return (void *)0x0;
}



// FUNCTION 1495596e1 FUN_1495596e1 body=126 status=ok
// SIG undefined FUN_1495596e1(void)

undefined8 FUN_1495596e1(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  void *_Dst;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if ((int)param_2 < 1) {
    if ((*(byte *)((longlong)puVar1 + 9) & 0x24) == 0) {
      *(undefined2 *)(puVar1 + 1) = 1;
    }
    else {
      FUN_14956b5ca(puVar1);
    }
    puVar1[2] = 0;
  }
  else {
    if (*(int *)(puVar1 + 4) < (int)param_2) {
      FUN_14956b6c8(puVar1,(ulonglong)param_2,0);
      _Dst = (void *)puVar1[2];
    }
    else {
      _Dst = (void *)puVar1[3];
      puVar1[2] = _Dst;
    }
    *(undefined2 *)(puVar1 + 1) = 0x2000;
    *puVar1 = *(undefined8 *)(param_1 + 8);
    if (_Dst != (void *)0x0) {
      memset(_Dst,0,(ulonglong)param_2);
      return puVar1[2];
    }
  }
  return 0;
}



// FUNCTION 14955975f FUN_14955975f body=110 status=ok
// SIG undefined FUN_14955975f(void)

undefined * FUN_14955975f(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined *puVar2;
  
  puVar2 = &DAT_14bd420a0;
  if (param_1 != (longlong *)0x0) {
    if (*(longlong *)(*param_1 + 0x18) != 0) {
      (*DAT_14c765d78)();
    }
    if ((param_1[0x14] == 0) || (*(ushort *)(param_1 + 0x18) <= param_2)) {
      lVar1 = *param_1;
      *(undefined4 *)(lVar1 + 0x50) = 0x19;
      FUN_14955de40(lVar1,0x19);
    }
    else {
      puVar2 = (undefined *)(param_1[0x14] + (ulonglong)param_2 * 0x38);
    }
  }
  return puVar2;
}



// FUNCTION 1495597cd FUN_1495597cd body=81 status=ok
// SIG undefined FUN_1495597cd(void)

void FUN_1495597cd(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = *param_1;
    if ((*(uint *)(param_1 + 7) == 0xc0a) || (*(char *)(lVar2 + 0x61) != '\0')) {
      FUN_149569b34();
      lVar2 = *param_1;
      uVar1 = 7;
    }
    else {
      uVar1 = *(uint *)(param_1 + 7) & *(uint *)(lVar2 + 0x54);
    }
    *(uint *)(param_1 + 7) = uVar1;
    if (*(longlong *)(lVar2 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000149559801. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14c765d88)();
      return;
    }
  }
  return;
}



// FUNCTION 14955981e FUN_14955981e body=158 status=ok
// SIG undefined FUN_14955981e(void)

undefined8 FUN_14955981e(longlong *param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  
  if ((param_1 == (longlong *)0x0) || (*(ushort *)(param_1 + 0x18) <= param_2)) {
    uVar4 = 0;
  }
  else {
    lVar2 = *param_1;
    if (*(longlong *)(lVar2 + 0x18) != 0) {
      (*DAT_14c765d78)();
    }
    uVar4 = FUN_149558f28((ulonglong)param_2 * 0x38 + param_1[0x13]);
    if (*(char *)(lVar2 + 0x61) != '\0') {
      if (*(int *)(lVar2 + 0xd4) == 0) {
        *(undefined1 *)(lVar2 + 0x61) = 0;
        *(undefined4 *)(lVar2 + 0x170) = 0;
        piVar1 = (int *)(lVar2 + 0x178);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          uVar3 = *(undefined2 *)(lVar2 + 0x17e);
        }
        else {
          uVar3 = 0;
        }
        *(undefined2 *)(lVar2 + 0x17c) = uVar3;
      }
      uVar4 = 0;
    }
    if (*(longlong *)(lVar2 + 0x18) != 0) {
      (*DAT_14c765d88)();
    }
  }
  return uVar4;
}



// FUNCTION 1495598bc FUN_1495598bc body=211 status=ok
// SIG undefined FUN_1495598bc(void)

void FUN_1495598bc(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (*(longlong *)(*param_2 + 0x18) != 0) {
    (*DAT_14c765d78)();
  }
  if (0 < *(short *)(param_1 + 0x20)) {
    lVar12 = 0;
    lVar13 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x80);
      lVar4 = param_2[0x10];
      puVar1 = (undefined4 *)(lVar4 + lVar12);
      if (((*(byte *)(lVar4 + 9 + lVar12) & 0x24) != 0) || (*(int *)(lVar4 + 0x20 + lVar12) != 0)) {
        FUN_14956b588(puVar1);
      }
      puVar2 = (undefined4 *)(lVar3 + lVar12);
      *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(puVar2 + 0xc);
      uVar5 = *puVar2;
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      uVar9 = *(undefined8 *)(puVar2 + 4);
      uVar10 = *(undefined8 *)(puVar2 + 6);
      uVar11 = *(undefined8 *)(puVar2 + 10);
      *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(puVar2 + 8);
      *(undefined8 *)(puVar1 + 10) = uVar11;
      *(undefined8 *)(puVar1 + 4) = uVar9;
      *(undefined8 *)(puVar1 + 6) = uVar10;
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      *(undefined2 *)(lVar3 + 8 + lVar12) = 1;
      *(undefined4 *)(lVar3 + 0x20 + lVar12) = 0;
      lVar13 = lVar13 + 1;
      lVar12 = lVar12 + 0x38;
    } while (lVar13 < *(short *)(param_1 + 0x20));
  }
  if (*(longlong *)(*param_2 + 0x18) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000149559979. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_14c765d88)();
  return;
}



// FUNCTION 14955998f FUN_14955998f body=1473 status=ok
// SIG undefined FUN_14955998f(void)

undefined1 * FUN_14955998f(longlong *param_1,char *param_2)

{
  char *pcVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  size_t sVar6;
  undefined1 *puVar7;
  char *pcVar8;
  wchar_t *pwVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  longlong lStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 *local_e8;
  uint local_e0;
  int local_dc;
  uint local_d8;
  ushort local_d4;
  int local_d0;
  int local_cc;
  undefined1 local_c8 [104];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_d0 = 0;
  lVar15 = *param_1;
  local_dc = *(int *)(lVar15 + 0x7c);
  local_e8 = local_c8;
  local_f0 = 0;
  local_e0 = 100;
  local_d8 = 0;
  local_d4 = 0;
  if (*(int *)(lVar15 + 0xd4) < 2) {
    if ((short)param_1[4] == 0) {
      sVar6 = strlen(param_2);
      uVar10 = (uint)sVar6 & 0x3fffffff;
      if (uVar10 < 100) {
        if ((sVar6 & 0x3fffffff) != 0) {
          local_d8 = uVar10;
          memcpy(local_c8,param_2,(ulonglong)((uint)sVar6 & 0x3fffffff));
        }
      }
      else {
        FUN_1495557b3(&local_f0,param_2);
      }
    }
    else {
      local_130 = lVar15;
      if (*param_2 != '\0') {
        iVar13 = 1;
        do {
          iVar14 = 0;
          pcVar8 = param_2;
          do {
            iVar4 = FUN_149584865(pcVar8,&local_cc);
            if (local_cc == 0x99) goto LAB_149559b55;
            iVar14 = iVar14 + iVar4;
            pcVar1 = pcVar8 + iVar4;
            pcVar8 = pcVar8 + iVar4;
          } while (*pcVar1 != '\0');
          iVar4 = 0;
LAB_149559b55:
          uVar5 = (ulonglong)local_d8;
          if (local_d8 + iVar14 < local_e0) {
            if (iVar14 != 0) {
              local_d8 = local_d8 + iVar14;
              memcpy(local_e8 + uVar5,param_2,(longlong)iVar14);
            }
          }
          else {
            FUN_1495557b3(&local_f0,param_2,iVar14);
          }
          if (iVar4 == 0) break;
          param_2 = param_2 + iVar14;
          if (*param_2 == '?') {
            if (1 < iVar4) {
              FUN_149581ec6(param_2 + 1,&local_d0);
              iVar13 = local_d0;
            }
          }
          else {
            iVar13 = 0;
            if (param_2 != (char *)0x0) {
              iVar13 = FUN_1495847ef(param_1[0x16],param_2,iVar4);
            }
          }
          local_d0 = iVar13;
          iVar13 = local_d0;
          uVar2 = *(ushort *)(param_1[0x10] + -0x30 + (longlong)local_d0 * 0x38);
          if ((uVar2 & 1) == 0) {
            lVar15 = param_1[0x10] + (longlong)local_d0 * 0x38;
            if ((uVar2 & 0x24) == 0) {
              if ((uVar2 & 8) == 0) {
                if ((uVar2 & 2) == 0) {
                  if ((uVar2 >> 0xe & 1) == 0) {
                    if (local_d8 + 2 < local_e0) {
                      *(undefined2 *)(local_e8 + local_d8) = 0x2778;
                      local_d8 = local_d8 + 2;
                    }
                    else {
                      FUN_1495557b3(&local_f0,&DAT_14bd420f0,2);
                    }
                    iVar14 = *(int *)(lVar15 + -0x2c);
                    if (0 < (longlong)iVar14) {
                      lVar12 = 0;
                      do {
                        FUN_149555a84(&local_f0,&DAT_14bd420f3,
                                      *(undefined1 *)(*(longlong *)(lVar15 + -0x28) + lVar12));
                        lVar12 = lVar12 + 1;
                      } while (iVar14 != lVar12);
                    }
                    if (local_e0 <= local_d8 + 1) {
                      pwVar9 = L"\'Saturday";
                      uVar11 = 1;
                      goto LAB_149559d1a;
                    }
                    local_e8[local_d8] = 0x27;
                    local_d8 = local_d8 + 1;
                  }
                  else {
                    FUN_149555a84(&local_f0,"zeroblob(%d)",*(undefined4 *)(lVar15 + -0x38));
                  }
                }
                else if (*(char *)(local_130 + 0x5e) == '\x01') {
                  FUN_149555a84(&local_f0,"\'%.*q\'",*(undefined4 *)(lVar15 + -0x2c),
                                *(undefined8 *)(lVar15 + -0x28));
                }
                else {
                  local_108 = 0;
                  local_118 = 0;
                  uStack_110 = 0;
                  local_128 = 0;
                  uStack_120 = 0;
                  local_f8 = 0;
                  lStack_100 = local_130;
                  local_138 = 0;
                  FUN_14955916b(&local_128,*(undefined8 *)(lVar15 + -0x28),
                                *(undefined4 *)(lVar15 + -0x2c));
                  if ((((uStack_120 & 2) != 0) && (uStack_120._2_1_ != '\x01')) &&
                     (iVar14 = FUN_14956ba6f(&local_128,1), iVar14 == 7)) {
                    local_d4 = CONCAT11(local_d4._1_1_,7);
                    local_e0 = 0;
                  }
                  FUN_149555a84(&local_f0,"\'%.*q\'",uStack_120._4_4_,local_118);
                  if (((uStack_120 & 0x2400) != 0) || ((int)local_108 != 0)) {
                    FUN_14956b588(&local_128);
                  }
                }
              }
              else {
                FUN_149555a84(&local_f0,"%!.15g",*(undefined8 *)(lVar15 + -0x38));
              }
            }
            else {
              FUN_149555a84(&local_f0,&DAT_149e1d7c3,*(undefined8 *)(lVar15 + -0x38));
            }
          }
          else if (local_d8 + 4 < local_e0) {
            *(undefined4 *)(local_e8 + local_d8) = 0x4c4c554e;
            local_d8 = local_d8 + 4;
          }
          else {
            pwVar9 = 
            L"啎䱌䘀佌彗䅍彐佃偍䍁T䅔G湩慶楬⁤捳湡敮r浥瑰⁹捳湡敮r䅙䱍甀歮潮湷琠歯湥椀汬来污映潬⁷湥d汩敬慧\x206c汢捯\x206b湥牴y汩敬慧\x206c慭⁰敫y汩敬慧\x206c慭⁰慶畬e慣湮瑯猠瑥稠牥\x206f湩敤瑮瑡潩\x206e潦⁲⁡汢捯\x206b捳污牡甀敮灸捥整⁤档牡捡整⁲湩戠潬正猠慣慬r湥⁤景猠煥敵据⁥潮⁴潦湵d湥⁤景猠煥敵据⁥汦睯渠瑯映畯摮攀摮漠\x2066慭⁰潮⁴潦湵d湥⁤景洠灡映潬⁷潮⁴潦湵d"
            ;
            uVar11 = 4;
LAB_149559d1a:
            FUN_1495557b3(&local_f0,pwVar9,uVar11);
          }
          param_2 = param_2 + iVar4;
          iVar13 = iVar13 + 1;
        } while (*param_2 != '\0');
      }
    }
  }
  else {
    cVar3 = *param_2;
    if (cVar3 != '\0') {
      do {
        lVar15 = 0x100000000;
        iVar13 = -1;
        pcVar8 = param_2;
        do {
          iVar14 = iVar13;
          lVar12 = lVar15;
          pcVar8 = pcVar8 + 1;
          if (cVar3 == '\n') break;
          cVar3 = *pcVar8;
          lVar15 = lVar12 + 0x100000000;
          iVar13 = iVar14 + -1;
        } while (cVar3 != '\0');
        if (local_d8 + 3 < local_e0) {
          local_e8[(ulonglong)local_d8 + 2] = 0x20;
          *(undefined2 *)(local_e8 + local_d8) = 0x2d2d;
          local_d8 = local_d8 + 3;
        }
        else {
          FUN_1495557b3(&local_f0,&DAT_14bd420d8,3);
        }
        uVar5 = (ulonglong)local_d8;
        if (local_d8 - iVar14 < local_e0) {
          if (iVar14 != 0) {
            local_d8 = local_d8 - iVar14;
            memcpy(local_e8 + uVar5,param_2,lVar12 >> 0x20);
          }
        }
        else {
          FUN_1495557b3(&local_f0,param_2,-iVar14);
        }
        cVar3 = *pcVar8;
        param_2 = pcVar8;
      } while (cVar3 != '\0');
    }
  }
  if ((char)local_d4 == '\0') {
    if (local_e8 != (undefined1 *)0x0) {
      local_e8[local_d8] = 0;
      puVar7 = local_e8;
      if ((local_dc != 0) && ((local_d4 & 0x400) == 0)) {
        puVar7 = (undefined1 *)FUN_14955d93a(&local_f0);
      }
      goto LAB_149559ed4;
    }
  }
  else if (((local_d4 & 0x400) != 0) && (local_e8 != (undefined1 *)0x0)) {
    FUN_14955d65a(local_f0);
  }
  puVar7 = (undefined1 *)0x0;
LAB_149559ed4:
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar7;
}



// FUNCTION 149559f51 FUN_149559f51 body=314 status=ok
// SIG undefined FUN_149559f51(void)

void FUN_149559f51(double *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  ushort uVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  undefined1 auStack_68 [32];
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*(undefined1 *)((longlong)param_1 + 10));
  uVar1 = *(undefined4 *)((longlong)param_1 + 0xc);
  dVar4 = param_1[2];
  iVar2 = FUN_14956c0e2(dVar4,&local_48,uVar1,uVar6 & 0xffffffff);
  if (iVar2 < 1) goto LAB_14955a020;
  if (iVar2 == 1) {
    dVar3 = (double)(longlong)local_48;
    if (((local_48 == 0.0) && (!NAN(local_48))) ||
       ((0xffe < (uint)((ulonglong)((longlong)dVar3 + -0x8000000000000) >> 0x34) &&
        (local_48 == (double)(longlong)dVar3)))) {
      *param_1 = dVar3;
    }
    else {
      iVar2 = FUN_14956c622(dVar4,param_1,uVar1,uVar6 & 0xffffffff);
      if (iVar2 != 0) goto LAB_14955a006;
    }
    uVar5 = (ushort)*(undefined4 *)(param_1 + 1) | 4;
  }
  else {
LAB_14955a006:
    *param_1 = local_48;
    uVar1 = *(undefined4 *)(param_1 + 1);
    uVar5 = (ushort)uVar1 | 8;
    if (param_2 != 0) {
      dVar4 = (double)FUN_14956c5a2(SUB84(local_48,0));
      if ((longlong)dVar4 + 0x7fffffffffffffffU < 0xfffffffffffffffe &&
          local_48 == (double)(longlong)dVar4) {
        *param_1 = dVar4;
        uVar5 = (ushort)uVar1 & 0x3e40 | 4;
      }
    }
  }
  *(ushort *)(param_1 + 1) = uVar5 & 0xfffd;
LAB_14955a020:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14955a08c FUN_14955a08c body=727 status=ok
// SIG undefined FUN_14955a08c(void)

longlong FUN_14955a08c(longlong *param_1,ulonglong param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  char *pcVar8;
  char cVar9;
  char *pcVar10;
  char cVar11;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *param_1;
  if (((*(byte *)(lVar1 + 0x2c) & 0x10) != 0) || (iVar2 = FUN_14958537a(param_1), iVar2 == 0)) {
    lVar3 = FUN_14955d004(lVar1,param_3,param_4);
    if (lVar3 == 0) {
      if (*(char *)((longlong)param_1 + 0x25) == '\0') {
        lVar3 = FUN_14958201d(lVar1 + 0x1f8,param_3,0);
        plVar5 = *(longlong **)(lVar3 + 0x10);
        if (plVar5 == (longlong *)0x0) {
          if (param_3 != (longlong *)0x0) {
            lVar3 = 0;
            do {
              if ((ulonglong)*(byte *)((longlong)param_3 + lVar3) == 0) {
                cVar11 = (&DAT_14bd3ff30)[(byte)(&DAT_14bd42507)[lVar3]];
                cVar9 = '\0';
LAB_14955a20b:
                if (cVar9 != cVar11) goto LAB_14955a145;
                break;
              }
              cVar9 = (&DAT_14bd3ff30)[*(byte *)((longlong)param_3 + lVar3)];
              cVar11 = (&DAT_14bd3ff30)[(byte)(&DAT_14bd42507)[lVar3]];
              if (cVar9 != cVar11) goto LAB_14955a20b;
              lVar3 = lVar3 + 1;
            } while (lVar3 != 7);
            plVar5 = (longlong *)FUN_1495853c2(lVar1,param_3);
            if (plVar5 != (longlong *)0x0) goto LAB_14955a188;
          }
        }
        else {
LAB_14955a188:
          lVar1 = *plVar5;
          local_50 = 0;
          lVar3 = plVar5[5];
          if (lVar3 != 0) goto LAB_14955a0ce;
          lVar3 = *param_1;
          if ((*(longlong *)(lVar1 + 8) == 0) ||
             (*(longlong *)(lVar1 + 8) == *(longlong *)(lVar1 + 0x10))) {
            if (lVar3 == 0) {
              plVar4 = (longlong *)FUN_145e3bd67(0x80);
            }
            else {
              plVar4 = (longlong *)FUN_14955d750(lVar3,0x80);
            }
            if (plVar4 != (longlong *)0x0) {
              plVar4[0xe] = 0;
              plVar4[0xf] = 0;
              plVar4[0xc] = 0;
              plVar4[0xd] = 0;
              plVar4[10] = 0;
              plVar4[0xb] = 0;
              plVar4[8] = 0;
              plVar4[9] = 0;
              plVar4[6] = 0;
              plVar4[7] = 0;
              plVar4[4] = 0;
              plVar4[5] = 0;
              plVar4[2] = 0;
              plVar4[3] = 0;
              *plVar4 = 0;
              plVar4[1] = 0;
              lVar6 = FUN_149559683(lVar3,plVar5[1]);
              *plVar4 = lVar6;
              if (lVar6 == 0) {
                FUN_14955d65a(lVar3,plVar4);
              }
              else {
                plVar5[5] = (longlong)plVar4;
                *(undefined4 *)((longlong)plVar4 + 0x3c) = 1;
                plVar4[0xe] = *(longlong *)(*(longlong *)(lVar3 + 0x20) + 0x18);
                *(undefined2 *)((longlong)plVar4 + 0x44) = 0xffff;
                uVar7 = FUN_149559683(lVar3,*plVar4);
                FUN_149585d03(param_1,plVar4,uVar7);
                FUN_149585d03(param_1,plVar4,0);
                uVar7 = FUN_149559683(lVar3,*plVar4);
                FUN_149585d03(param_1,plVar4,uVar7);
                local_58 = &local_50;
                iVar2 = FUN_149584380(lVar3,plVar4,plVar5,*(undefined8 *)(lVar1 + 0x10));
                lVar1 = local_50;
                if (iVar2 == 0) {
                  lVar3 = plVar5[5];
                  goto LAB_14955a0ce;
                }
                FUN_14955a364(param_1,&DAT_149dfbe46,local_50);
                if (lVar1 != 0) {
                  FUN_14955d65a(lVar3,lVar1);
                }
                FUN_149585621(lVar3,plVar5);
              }
            }
          }
        }
      }
LAB_14955a145:
      if ((param_2 & 2) != 0) goto LAB_14955a0cc;
      *(undefined1 *)((longlong)param_1 + 0x1d) = 1;
    }
    else if ((*(int *)(lVar3 + 0x54) == 0) || (*(char *)((longlong)param_1 + 0x25) == '\0'))
    goto LAB_14955a0ce;
    pcVar10 = "no such view";
    if ((param_2 & 1) == 0) {
      pcVar10 = "no such table";
    }
    if (param_4 == (longlong *)0x0) {
      pcVar8 = "%s: %s";
      param_4 = param_3;
    }
    else {
      pcVar8 = "%s: %s.%s";
      local_58 = param_3;
    }
    FUN_14955a364(param_1,pcVar8,pcVar10,param_4);
  }
LAB_14955a0cc:
  lVar3 = 0;
LAB_14955a0ce:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 14955a364 FUN_14955a364 body=157 status=ok
// SIG undefined FUN_14955a364(void)

void FUN_14955a364(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_28 = &local_res18;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_1;
  local_res18 = param_3;
  local_res20 = param_4;
  lVar2 = FUN_14955dd50(lVar1,param_2,local_28);
  if (*(char *)(lVar1 + 0x65) == '\0') {
    *(int *)(param_1 + 6) = (int)param_1[6] + 1;
    if (param_1[1] != 0) {
      FUN_14955d65a(lVar1);
    }
    param_1[1] = lVar2;
    *(undefined4 *)(param_1 + 3) = 1;
    param_1[0x31] = 0;
  }
  else if (lVar2 != 0) {
    FUN_14955d65a(lVar1,lVar2);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14955a402 FUN_14955a402 body=71 status=ok
// SIG undefined FUN_14955a402(void)

void FUN_14955a402(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_38 [40];
  undefined8 *local_10;
  ulonglong local_8;
  
  local_10 = &local_res18;
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_14955dd50(param_1,param_2,local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14955a44a FUN_14955a44a body=158 status=ok
// SIG undefined FUN_14955a44a(void)

longlong * FUN_14955a44a(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  plVar2 = (longlong *)FUN_14955d750(lVar1);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = 0;
    memset(plVar2 + 0x11,0,0xa0);
    *plVar2 = lVar1;
    if (*(longlong *)(lVar1 + 8) != 0) {
      *(longlong **)(*(longlong *)(lVar1 + 8) + 8) = plVar2;
      lVar3 = *(longlong *)(lVar1 + 8);
    }
    plVar2[2] = lVar3;
    plVar2[1] = 0;
    *(longlong **)(lVar1 + 8) = plVar2;
    *(undefined4 *)((longlong)plVar2 + 0x24) = 0x16bceaa5;
    plVar2[3] = (longlong)param_1;
    param_1[2] = (longlong)plVar2;
    FUN_149584f48(plVar2,0x3e,0,1,0);
  }
  return plVar2;
}



// FUNCTION 14955a4e8 FUN_14955a4e8 body=206 status=ok
// SIG undefined FUN_14955a4e8(void)

undefined1 * FUN_14955a4e8(longlong param_1,int param_2,longlong param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x90);
  if (*(int *)(param_1 + 0x94) < iVar4 + param_2) {
    iVar4 = FUN_149584fe6(param_1);
    if (iVar4 != 0) {
      return (undefined1 *)0x0;
    }
    iVar4 = *(int *)(param_1 + 0x90);
  }
  puVar1 = (undefined1 *)((longlong)iVar4 * 0x18 + *(longlong *)(param_1 + 0x88));
  lVar2 = 0;
  puVar3 = puVar1;
  do {
    *puVar3 = *(undefined1 *)(param_3 + lVar2 * 4);
    *(int *)(puVar3 + 4) = (int)*(char *)(param_3 + 1 + lVar2 * 4);
    iVar4 = (int)*(char *)(param_3 + 2 + lVar2 * 4);
    *(int *)(puVar3 + 8) = iVar4;
    if ((((&DAT_14bd423c0)[*(byte *)(param_3 + lVar2 * 4)] & 1) != 0) &&
       ('\0' < *(char *)(param_3 + 2 + lVar2 * 4))) {
      *(int *)(puVar3 + 8) = iVar4 + *(int *)(param_1 + 0x90);
    }
    *(int *)(puVar3 + 0xc) = (int)*(char *)(param_3 + 3 + lVar2 * 4);
    puVar3[1] = 0;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined2 *)(puVar3 + 2) = 0;
    puVar3 = puVar3 + 0x18;
    lVar2 = lVar2 + 1;
  } while (param_2 != (int)lVar2);
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + param_2;
  return puVar1;
}



// FUNCTION 14955a5b6 FUN_14955a5b6 body=116 status=ok
// SIG undefined FUN_14955a5b6(void)

void FUN_14955a5b6(longlong *param_1,int param_2,char *param_3,uint param_4)

{
  size_t sVar1;
  void *_Dst;
  longlong lVar2;
  ulonglong _Size;
  
  if (*(char *)(*param_1 + 0x61) != '\0') {
    if (param_4 == 0xfffffff4) {
      return;
    }
    FUN_149569985(*param_1,param_4);
    return;
  }
  if (param_2 < 0) {
    param_2 = (int)param_1[0x12] + -1;
  }
  lVar2 = (longlong)param_2 * 0x18 + param_1[0x11];
  if (((int)param_4 < 0) && (*(char *)(lVar2 + 1) == '\0')) {
    if (param_4 == 0xfffffffd) {
      *(int *)(lVar2 + 0x10) = (int)param_3;
      *(undefined1 *)(lVar2 + 1) = 0xfd;
      return;
    }
    if (param_3 == (char *)0x0) {
      return;
    }
    *(char **)(lVar2 + 0x10) = param_3;
    *(char *)(lVar2 + 1) = (char)param_4;
    if (param_4 != 0xfffffff4) {
      return;
    }
    *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
    return;
  }
  if (*(char *)(lVar2 + 1) != 0) {
    FUN_149569985(*param_1,(int)*(char *)(lVar2 + 1),*(undefined8 *)(lVar2 + 0x10));
    *(undefined1 *)(lVar2 + 1) = 0;
    *(undefined8 *)(lVar2 + 0x10) = 0;
  }
  if ((int)param_4 < 0) {
    FUN_14955a5b6(param_1,(int)((ulonglong)(lVar2 - param_1[0x11]) >> 3) * -0x55555555,param_3,
                  param_4);
    return;
  }
  if (param_4 == 0) {
    if (param_3 != (char *)0x0) {
      sVar1 = strlen(param_3);
      param_4 = (uint)sVar1 & 0x3fffffff;
      goto LAB_149585195;
    }
  }
  else if (param_3 != (char *)0x0) {
LAB_149585195:
    _Size = (ulonglong)param_4;
    _Dst = (void *)FUN_14955d750(*param_1,_Size + 1);
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,param_3,_Size);
      *(undefined1 *)((longlong)_Dst + _Size) = 0;
      goto LAB_149585123;
    }
  }
  _Dst = (void *)0x0;
LAB_149585123:
  *(void **)(lVar2 + 0x10) = _Dst;
  *(undefined1 *)(lVar2 + 1) = 0xf9;
  return;
}



// FUNCTION 14955a62a FUN_14955a62a body=1070 status=ok
// SIG undefined FUN_14955a62a(void)

void FUN_14955a62a(longlong *param_1,longlong param_2)

{
  short sVar1;
  longlong lVar2;
  size_t sVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  size_t _Size;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined **ppuVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  bool bVar25;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  short local_7a;
  longlong local_78;
  int local_6c;
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *param_1;
  sVar1 = *(short *)(param_2 + 0x110);
  local_6c = *(int *)(param_2 + 0x34);
  local_68 = (longlong)local_6c;
  bVar25 = local_68 == 0;
  local_4c = *(int *)(param_2 + 0x80);
  iVar14 = *(int *)(param_2 + 0x38) + local_6c;
  lVar7 = (longlong)((int)param_1[0x12] * 0x18);
  lVar24 = param_1[0x11] + lVar7;
  iVar6 = *(int *)(param_2 + 0x3c);
  FUN_1495851c5(param_1);
  if (*(char *)(param_2 + 0x20) == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)(*(char *)(param_2 + 0x21) != '\0') << 7;
  }
  iVar14 = iVar14 + (uint)(0 < iVar14 && bVar25);
  uVar22 = iVar6 - lVar7 & 0xfffffffffffffff8;
  uVar5 = *(uint *)(param_1 + 0x19) & 0xffffff7f | uVar5;
  *(uint *)(param_1 + 0x19) = uVar5;
  lVar7 = (longlong)sVar1;
  local_7a = sVar1;
  if (*(char *)(param_2 + 0x113) != '\0') {
    bVar25 = *(char *)(param_2 + 0x113) == '\x02';
    uVar16 = (ulonglong)((uint)bVar25 * 8);
    uVar10 = (ulonglong)bVar25 * 4 + 8;
    local_78 = param_2;
    local_60 = (longlong)sVar1;
    FUN_1495852e4(param_1,!bVar25 * '\x04' + '\x04');
    ppuVar21 = &PTR_DAT_14bd42470 + (ulonglong)bVar25 * 8;
    lVar7 = 0;
    local_58 = uVar10;
    do {
      if (*(char *)(*param_1 + 0x61) == '\0') {
        local_88 = 0;
        FUN_14955916b(param_1[0x13] + lVar7,*ppuVar21,0xffffffff,1);
        uVar10 = local_58;
      }
      uVar16 = uVar16 + 1;
      ppuVar21 = ppuVar21 + 1;
      lVar7 = lVar7 + 0x38;
    } while (uVar16 < uVar10);
    if (iVar14 < 0xb) {
      iVar14 = 10;
    }
    uVar5 = *(uint *)(param_1 + 0x19);
    lVar7 = local_60;
    param_2 = local_78;
  }
  lVar4 = local_68;
  *(uint *)(param_1 + 0x19) = uVar5 & 0xfffffffc;
  lVar8 = (longlong)iVar14;
  lVar15 = lVar8 * 0x38;
  lVar12 = 0;
  uVar10 = uVar22 + lVar8 * -0x38;
  lVar13 = lVar24 + uVar10;
  lVar9 = 0;
  if ((longlong)uVar22 < lVar15) {
    lVar13 = lVar12;
    uVar10 = uVar22;
    lVar9 = lVar15;
  }
  param_1[0xd] = lVar13;
  lVar23 = lVar7 * 0x38;
  uVar22 = uVar10 + lVar7 * -0x38;
  lVar17 = lVar24 + uVar22;
  lVar13 = 0;
  if ((longlong)uVar10 < lVar23) {
    lVar17 = lVar12;
    uVar22 = uVar10;
    lVar13 = lVar23;
  }
  param_1[0x10] = lVar17;
  lVar19 = (longlong)local_4c;
  lVar20 = lVar19 * 8;
  uVar10 = uVar22 + lVar19 * -8;
  lVar18 = lVar24 + uVar10;
  lVar17 = 0;
  if ((longlong)uVar22 < lVar20) {
    lVar18 = lVar12;
    uVar10 = uVar22;
    lVar17 = lVar20;
  }
  param_1[0xe] = lVar18;
  _Size = local_68 * 8;
  lVar24 = lVar24 + uVar10 + local_68 * -8;
  sVar3 = 0;
  if ((longlong)uVar10 < (longlong)_Size) {
    lVar24 = lVar12;
    sVar3 = _Size;
  }
  param_1[0xf] = lVar24;
  lVar24 = sVar3 + lVar17 + lVar13 + lVar9;
  if (lVar24 != 0) {
    local_78 = param_2;
    lVar9 = FUN_14955d750(lVar2);
    param_1[0x1f] = lVar9;
    param_2 = local_78;
    if (*(char *)(lVar2 + 0x61) == '\0') {
      lVar13 = param_1[0xd];
      lVar12 = lVar24;
      if (lVar13 == 0) {
        lVar12 = lVar24 + lVar8 * -0x38;
        if (lVar24 < lVar15) {
          lVar13 = 0;
          lVar12 = lVar24;
        }
        else {
          lVar13 = lVar9 + lVar12;
        }
      }
      param_1[0xd] = lVar13;
      lVar24 = param_1[0x10];
      lVar13 = lVar12;
      if (lVar24 == 0) {
        lVar13 = lVar12 + lVar7 * -0x38;
        if (lVar12 < lVar23) {
          lVar24 = 0;
          lVar13 = lVar12;
        }
        else {
          lVar24 = lVar9 + lVar13;
        }
      }
      param_1[0x10] = lVar24;
      lVar7 = param_1[0xe];
      lVar24 = lVar13;
      if (lVar7 == 0) {
        lVar24 = lVar13 + lVar19 * -8;
        if (lVar13 < lVar20) {
          lVar7 = 0;
          lVar24 = lVar13;
        }
        else {
          lVar7 = lVar9 + lVar24;
        }
      }
      param_1[0xe] = lVar7;
      lVar7 = param_1[0xf];
      if (lVar7 == 0) {
        if (lVar24 < (longlong)_Size) {
          lVar7 = 0;
        }
        else {
          lVar7 = lVar9 + lVar24 + lVar4 * -8;
        }
      }
      param_1[0xf] = lVar7;
    }
  }
  param_1[0x16] = *(longlong *)(param_2 + 0x128);
  *(undefined8 *)(param_2 + 0x128) = 0;
  *(uint *)(param_1 + 0x19) =
       (*(uint *)(param_1 + 0x19) & 0xfffffff3) + (*(byte *)(param_2 + 0x113) & 3) * 4;
  if (*(char *)(lVar2 + 0x61) == '\0') {
    *(int *)((longlong)param_1 + 0x2c) = local_6c;
    *(short *)(param_1 + 4) = local_7a;
    if (0 < local_7a) {
      plVar11 = (longlong *)(param_1[0x10] + 0x28);
      iVar6 = local_7a + 1;
      do {
        *plVar11 = lVar2;
        *(undefined2 *)(plVar11 + -4) = 1;
        *(undefined4 *)(plVar11 + -1) = 0;
        plVar11 = plVar11 + 7;
        iVar6 = iVar6 + -1;
      } while (1 < iVar6);
    }
    *(int *)(param_1 + 5) = iVar14;
    if (0 < iVar14) {
      plVar11 = (longlong *)(param_1[0xd] + 0x28);
      uVar5 = iVar14 + 1;
      do {
        *plVar11 = lVar2;
        *(undefined2 *)(plVar11 + -4) = 0x80;
        *(undefined4 *)(plVar11 + -1) = 0;
        plVar11 = plVar11 + 7;
        uVar5 = uVar5 - 1;
      } while (1 < uVar5);
    }
    memset((void *)param_1[0xf],0,_Size);
  }
  else {
    *(undefined2 *)(param_1 + 4) = 0;
    param_1[5] = 0;
  }
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x2df20da3;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc2) = 0xff02;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[6] = -0xffffffff;
  param_1[10] = 0;
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14955aa59 FUN_14955aa59 body=96 status=ok
// SIG undefined FUN_14955aa59(void)

void FUN_14955aa59(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined2 uVar3;
  
  lVar2 = *param_1;
  if (param_1[10] != 0) {
    FUN_14955d65a(lVar2);
  }
  if (param_1[0xb] != 0) {
    FUN_149582d29(lVar2);
  }
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 0x178);
    *piVar1 = *piVar1 - (uint)*(byte *)((longlong)param_1 + 0x24);
    if (*piVar1 == 0) {
      uVar3 = *(undefined2 *)(lVar2 + 0x17e);
    }
    else {
      uVar3 = 0;
    }
    *(undefined2 *)(lVar2 + 0x17c) = uVar3;
  }
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  return;
}



// FUNCTION 14955aab9 FUN_14955aab9 body=2402 status=ok
// SIG undefined FUN_14955aab9(void)

uint FUN_14955aab9(byte *param_1,byte *param_2,byte *param_3,uint param_4)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  size_t sVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_98 [47];
  byte local_69;
  byte *local_68;
  uint local_5c;
  byte *local_58;
  char local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_5c = (uint)param_3[1];
  local_69 = param_3[3];
  local_68 = (byte *)0x0;
LAB_14955ab1a:
  do {
    bVar6 = *param_1;
    uVar3 = (uint)bVar6;
    param_1 = param_1 + 1;
    local_58 = param_3;
    if ((char)bVar6 < '\0') {
      if (bVar6 < 0xc0) goto LAB_14955ab31;
      uVar3 = (uint)(byte)(&DAT_14bd40990)[bVar6 - 0xc0];
      bVar6 = *param_1;
      while (SBORROW1('\0',bVar6 & 0xc0)) {
        uVar3 = uVar3 << 6 | (uint)(bVar6 & 0x3f);
        pbVar1 = param_1 + 1;
        param_1 = param_1 + 1;
        bVar6 = *pbVar1;
      }
      uVar7 = 0xfffd;
      if ((((uVar3 & 0xfffffffe) != 0xfffe) && (0x7f < uVar3)) && ((uVar3 & 0xfffff800) != 0xd800))
      goto LAB_14955ab29;
    }
    else {
LAB_14955ab29:
      if (uVar3 == 0) {
        uVar3 = (uint)(*param_2 != 0);
        goto LAB_14955b1e1;
      }
LAB_14955ab31:
      uVar7 = uVar3;
      if (uVar3 == *param_3) {
        uVar3 = 2;
        break;
      }
    }
    if (uVar7 == param_4) {
      if (param_3[2] != 0) {
        bVar6 = *param_2;
        uVar3 = (uint)bVar6;
        param_2 = param_2 + 1;
        if (bVar6 < 0xc0) {
LAB_14955abd1:
          uVar7 = uVar3;
          if (uVar3 == 0) goto LAB_14955b1dc;
        }
        else {
          uVar3 = (uint)(byte)(&DAT_14bd40990)[bVar6 - 0xc0];
          bVar6 = *param_2;
          while (SBORROW1('\0',bVar6 & 0xc0)) {
            uVar3 = uVar3 << 6 | (uint)(bVar6 & 0x3f);
            pbVar1 = param_2 + 1;
            param_2 = param_2 + 1;
            bVar6 = *pbVar1;
          }
          uVar7 = 0xfffd;
          if ((((uVar3 & 0xfffffffe) != 0xfffe) && (0x7f < uVar3)) &&
             ((uVar3 & 0xfffff800) != 0xd800)) goto LAB_14955abd1;
        }
        bVar6 = *param_1;
        uVar3 = (uint)bVar6;
        param_1 = param_1 + 1;
        if (0xbf < bVar6) {
          uVar3 = (uint)(byte)(&DAT_14bd40990)[bVar6 - 0xc0];
          bVar6 = *param_1;
          while (SBORROW1('\0',bVar6 & 0xc0)) {
            uVar3 = uVar3 << 6 | (uint)(bVar6 & 0x3f);
            pbVar1 = param_1 + 1;
            param_1 = param_1 + 1;
            bVar6 = *pbVar1;
          }
          bVar10 = false;
          uVar4 = 0xfffd;
          if (((uVar3 & 0xfffffffe) == 0xfffe) || (uVar3 < 0x80)) {
            bVar11 = false;
            goto LAB_14955aded;
          }
          bVar11 = false;
          if ((uVar3 & 0xfffff800) == 0xd800) goto LAB_14955aded;
        }
        bVar10 = false;
        if (uVar3 == 0x5e) {
          uVar3 = (uint)*param_1;
          param_1 = param_1 + 1;
          bVar10 = true;
          if (0xbf < uVar3) {
            uVar3 = (uint)(byte)(&DAT_14bd40990)[uVar3 - 0xc0];
            bVar6 = *param_1;
            while (SBORROW1('\0',bVar6 & 0xc0)) {
              uVar3 = uVar3 << 6 | (uint)(bVar6 & 0x3f);
              pbVar1 = param_1 + 1;
              param_1 = param_1 + 1;
              bVar6 = *pbVar1;
            }
            bVar11 = false;
            uVar4 = 0xfffd;
            bVar10 = true;
            if ((((uVar3 & 0xfffffffe) == 0xfffe) || (uVar3 < 0x80)) ||
               ((uVar3 & 0xfffff800) == 0xd800)) goto LAB_14955aded;
          }
        }
        if (uVar3 == 0x5d) {
          bVar11 = uVar7 == 0x5d;
          bVar6 = *param_1;
          param_1 = param_1 + 1;
          uVar4 = (uint)bVar6;
          if (0xbf < bVar6) {
            uVar3 = (uint)(byte)(&DAT_14bd40990)[bVar6 - 0xc0];
            bVar6 = *param_1;
            while (SBORROW1('\0',bVar6 & 0xc0)) {
              uVar3 = uVar3 << 6 | (uint)(bVar6 & 0x3f);
              pbVar1 = param_1 + 1;
              param_1 = param_1 + 1;
              bVar6 = *pbVar1;
            }
            uVar4 = uVar3;
            if ((uVar3 & 0xfffff800) == 0xd800) {
              uVar4 = 0xfffd;
            }
            if (uVar3 < 0x80) {
              uVar4 = 0xfffd;
            }
            if ((uVar3 & 0xfffffffe) == 0xfffe) {
              uVar4 = 0xfffd;
            }
          }
        }
        else {
          bVar11 = false;
          uVar4 = uVar3;
        }
LAB_14955aded:
        uVar3 = 0;
LAB_14955adf3:
        if (uVar4 == 0x2d) {
          bVar6 = *param_1;
          uVar8 = (uint)bVar6;
          if (((bVar6 == 0x5d) || (uVar3 == 0)) || (bVar6 == 0)) goto LAB_14955ae0d;
          param_1 = param_1 + 1;
          if (0xbf < bVar6) {
            uVar4 = (uint)(byte)(&DAT_14bd40990)[bVar6 - 0xc0];
            bVar6 = *param_1;
            while (SBORROW1('\0',bVar6 & 0xc0)) {
              uVar4 = uVar4 << 6 | (uint)(bVar6 & 0x3f);
              pbVar1 = param_1 + 1;
              param_1 = param_1 + 1;
              bVar6 = *pbVar1;
            }
            uVar8 = uVar4;
            if ((uVar4 & 0xfffff800) == 0xd800) {
              uVar8 = 0xfffd;
            }
            if (uVar4 < 0x80) {
              uVar8 = 0xfffd;
            }
            if ((uVar4 & 0xfffffffe) == 0xfffe) {
              uVar8 = 0xfffd;
            }
          }
          bVar2 = true;
          if (uVar8 < uVar7) {
            bVar2 = bVar11;
          }
          if (uVar3 <= uVar7) {
            bVar11 = bVar2;
          }
          uVar3 = 0;
        }
        else {
          if (uVar4 == 0) goto LAB_14955b1dc;
          if (uVar4 == 0x5d) goto LAB_14955af1e;
LAB_14955ae0d:
          uVar3 = uVar4;
          if (uVar7 == uVar4) {
            bVar11 = true;
          }
        }
        bVar6 = *param_1;
        uVar4 = (uint)bVar6;
        param_1 = param_1 + 1;
        if (0xbf < bVar6) {
          uVar8 = (uint)(byte)(&DAT_14bd40990)[bVar6 - 0xc0];
          bVar6 = *param_1;
          while (SBORROW1('\0',bVar6 & 0xc0)) {
            uVar8 = uVar8 << 6 | (uint)(bVar6 & 0x3f);
            pbVar1 = param_1 + 1;
            param_1 = param_1 + 1;
            bVar6 = *pbVar1;
          }
          uVar4 = uVar8;
          if ((uVar8 & 0xfffff800) == 0xd800) {
            uVar4 = 0xfffd;
          }
          if (uVar8 < 0x80) {
            uVar4 = 0xfffd;
          }
          if ((uVar8 & 0xfffffffe) == 0xfffe) {
            uVar4 = 0xfffd;
          }
        }
        goto LAB_14955adf3;
      }
      bVar6 = *param_1;
      param_1 = param_1 + 1;
      uVar3 = (uint)bVar6;
      if (0xbf < bVar6) {
        uVar3 = (uint)(byte)(&DAT_14bd40990)[bVar6 - 0xc0];
        bVar6 = *param_1;
        while (SBORROW1('\0',bVar6 & 0xc0)) {
          uVar3 = uVar3 << 6 | (uint)(bVar6 & 0x3f);
          pbVar1 = param_1 + 1;
          param_1 = param_1 + 1;
          bVar6 = *pbVar1;
        }
        uVar7 = 0xfffd;
        local_68 = param_1;
        if ((((uVar3 & 0xfffffffe) == 0xfffe) || (uVar3 < 0x80)) || ((uVar3 & 0xfffff800) == 0xd800)
           ) goto LAB_14955b1bc;
      }
      uVar7 = uVar3;
      local_68 = param_1;
      if (uVar7 == 0) goto LAB_14955b1dc;
    }
LAB_14955b1bc:
    bVar6 = *param_2;
    uVar4 = (uint)bVar6;
    param_2 = param_2 + 1;
    if (0xbf < bVar6) {
      uVar3 = (uint)(byte)(&DAT_14bd40990)[bVar6 - 0xc0];
      bVar6 = *param_2;
      while (SBORROW1('\0',bVar6 & 0xc0)) {
        uVar3 = uVar3 << 6 | (uint)(bVar6 & 0x3f);
        pbVar1 = param_2 + 1;
        param_2 = param_2 + 1;
        bVar6 = *pbVar1;
      }
      uVar4 = uVar3;
      if ((uVar3 & 0xfffff800) == 0xd800) {
        uVar4 = 0xfffd;
      }
      if (uVar3 < 0x80) {
        uVar4 = 0xfffd;
      }
      if ((uVar3 & 0xfffffffe) == 0xfffe) {
        uVar4 = 0xfffd;
      }
    }
    if (((uVar7 != uVar4) &&
        (((local_69 == 0 || (0x7f < (uVar4 | uVar7))) ||
         ((&DAT_14bd3ff30)[uVar7 & 0xff] != (&DAT_14bd3ff30)[uVar4 & 0xff])))) &&
       (((uVar3 = 1, uVar7 != local_5c || (param_1 == local_68)) || (uVar4 == 0))))
    goto LAB_14955b1e1;
  } while( true );
  while (uVar7 != 0) {
LAB_14955afde:
    do {
      bVar6 = *param_1;
      uVar9 = (ulonglong)bVar6;
      param_1 = param_1 + 1;
      if (0xbf < bVar6) {
        uVar7 = (uint)(byte)(&DAT_14bd40990)[bVar6 - 0xc0];
        bVar6 = *param_1;
        while (SBORROW1('\0',bVar6 & 0xc0)) {
          uVar7 = uVar7 << 6 | (uint)(bVar6 & 0x3f);
          pbVar1 = param_1 + 1;
          param_1 = param_1 + 1;
          bVar6 = *pbVar1;
        }
        uVar9 = (ulonglong)uVar7;
        if ((uVar7 & 0xfffff800) == 0xd800) {
          uVar9 = 0xfffd;
        }
        if (uVar7 < 0x80) {
          uVar9 = 0xfffd;
        }
        if ((uVar7 & 0xfffffffe) == 0xfffe) {
          uVar9 = 0xfffd;
        }
      }
      uVar7 = (uint)uVar9;
      if (uVar7 != local_5c && uVar7 != *param_3) {
        if (uVar7 == 0) {
          uVar3 = 0;
        }
        else {
          if (uVar7 != param_4) goto LAB_14955b2f2;
          if (param_3[2] == 0) {
            bVar6 = *param_1;
            uVar3 = (uint)bVar6;
            param_1 = param_1 + 1;
            if (bVar6 < 0xc0) goto LAB_14955b2e7;
            uVar3 = (uint)(byte)(&DAT_14bd40990)[bVar6 - 0xc0];
            bVar6 = *param_1;
            while (SBORROW1('\0',bVar6 & 0xc0)) {
              uVar3 = uVar3 << 6 | (uint)(bVar6 & 0x3f);
              pbVar1 = param_1 + 1;
              param_1 = param_1 + 1;
              bVar6 = *pbVar1;
            }
            uVar9 = 0xfffd;
            if ((((uVar3 & 0xfffffffe) != 0xfffe) && (0x7f < uVar3)) &&
               ((uVar3 & 0xfffff800) != 0xd800)) {
LAB_14955b2e7:
              uVar9 = (ulonglong)uVar3;
              if (uVar3 != 0) {
LAB_14955b2f2:
                if (0x80 < (uint)uVar9) goto LAB_14955b373;
                if (local_69 == 0) {
                  local_4a = 0;
                }
                else {
                  local_4a = (&DAT_14bd3ff30)[uVar9];
                  local_49 = 0;
                  uVar9 = (ulonglong)(byte)((byte)uVar9 & (~(&DAT_14bd400b0)[uVar9] | 0xdf));
                }
                local_4b = (char)uVar9;
                while (sVar5 = strcspn((char *)param_2,&local_4b), param_2[sVar5] != 0) {
                  param_2 = param_2 + sVar5 + 1;
                  uVar3 = FUN_14955aab9(param_1,param_2,param_3,param_4);
                  if (uVar3 != 1) goto LAB_14955b1e1;
                }
              }
LAB_14955b40b:
              uVar3 = 2;
              goto LAB_14955b1e1;
            }
LAB_14955b373:
            do {
              bVar6 = *param_2;
              uVar3 = (uint)bVar6;
              param_2 = param_2 + 1;
              if ((char)bVar6 < '\0') {
                uVar7 = uVar3;
                if (0xbf < bVar6) {
                  uVar3 = (uint)(byte)(&DAT_14bd40990)[uVar3 - 0xc0];
                  bVar6 = *param_2;
                  while (SBORROW1('\0',bVar6 & 0xc0)) {
                    uVar3 = uVar3 << 6 | (uint)(bVar6 & 0x3f);
                    pbVar1 = param_2 + 1;
                    param_2 = param_2 + 1;
                    bVar6 = *pbVar1;
                  }
                  uVar7 = 0xfffd;
                  if ((((uVar3 & 0xfffffffe) != 0xfffe) && (0x7f < uVar3)) &&
                     ((uVar3 & 0xfffff800) != 0xd800)) goto LAB_14955b37d;
                }
              }
              else {
LAB_14955b37d:
                uVar7 = uVar3;
                if (uVar3 == 0) goto LAB_14955b40b;
              }
            } while ((uVar7 != (uint)uVar9) ||
                    (uVar3 = FUN_14955aab9(param_1,param_2,param_3,param_4), uVar3 == 1));
          }
          else {
            bVar6 = *param_2;
            uVar3 = 2;
            if (bVar6 != 0) {
              goto LAB_14955b12a;
            }
          }
        }
        goto LAB_14955b1e1;
      }
    } while (uVar7 != local_5c);
    bVar6 = *param_2;
    uVar7 = (uint)bVar6;
    param_2 = param_2 + 1;
    if (0xbf < bVar6) {
      uVar7 = (uint)(byte)(&DAT_14bd40990)[bVar6 - 0xc0];
      bVar6 = *param_2;
      while (SBORROW1('\0',bVar6 & 0xc0)) {
        uVar7 = uVar7 << 6 | (uint)(bVar6 & 0x3f);
        pbVar1 = param_2 + 1;
        param_2 = param_2 + 1;
        bVar6 = *pbVar1;
      }
      if ((((uVar7 & 0xfffffffe) == 0xfffe) || (uVar7 < 0x80)) || ((uVar7 & 0xfffff800) == 0xd800))
      goto LAB_14955afde;
    }
  }
  goto LAB_14955b1e1;
LAB_14955af1e:
  if (bVar11 == bVar10) goto LAB_14955b1dc;
  goto LAB_14955ab1a;
LAB_14955b1dc:
  uVar3 = 1;
  goto LAB_14955b1e1;
  while( true ) {
    if (bVar6 < 0xc0) {
      param_2 = param_2 + 1;
      bVar6 = *param_2;
    }
    else {
      do {
        bVar6 = param_2[1];
        param_2 = param_2 + 1;
      } while (SBORROW1('\0',bVar6 & 0xc0));
    }
    uVar3 = 2;
    if (bVar6 == 0) break;
LAB_14955b12a:
    uVar3 = FUN_14955aab9(param_1 + -1,param_2,param_3,param_4);
    if (uVar3 != 1) break;
  }
LAB_14955b1e1:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14955b41c FUN_14955b41c body=1205 status=ok
// SIG undefined FUN_14955b41c(void)

uint FUN_14955b41c(longlong param_1,char *param_2,code *param_3,undefined8 param_4)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  char **local_80;
  longlong local_70;
  uint local_64;
  undefined8 local_60;
  longlong local_58;
  char *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  local_60 = param_4;
  iVar3 = FUN_14955b8d2();
  if (iVar3 == 0) {
    local_88 = (longlong *)0x14bd4063a;
    uVar4 = 0x15;
    FUN_14955599e(0x15,"%s at line %d of [%.10s]","misuse",0x1dcbc);
  }
  else {
    pcVar10 = "";
    if (param_2 != (char *)0x0) {
      pcVar10 = param_2;
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      (*DAT_14c765d78)();
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    if (*(longlong *)(param_1 + 0x168) != 0) {
      FUN_14955de40(param_1,0);
    }
    while( true ) {
      if (*pcVar10 == '\0') break;
      local_58 = 0;
      local_88 = &local_58;
      local_80 = &local_50;
      uVar4 = FUN_14955ba6b(param_1,pcVar10,0x80,0);
      if (uVar4 != 0) goto LAB_14955b6fc;
      if (local_58 == 0) {
        uVar4 = 0;
        pcVar10 = local_50;
      }
      else {
        lVar7 = 0;
        bVar2 = false;
        uVar9 = 0;
        lVar12 = 0;
        lVar11 = local_58;
        local_70 = param_1;
        do {
          uVar4 = FUN_149555dda(lVar11);
          if (param_3 != (code *)0x0) {
            if (uVar4 == 100) {
              if (!bVar2) goto LAB_14955b602;
LAB_14955b517:
              lVar12 = lVar7 + (ulonglong)uVar9 * 8;
              local_64 = uVar4;
              if (uVar9 == 0) {
                uVar4 = 0;
              }
              else {
                uVar8 = 0;
                do {
                  lVar11 = local_58;
                  uVar5 = FUN_14955975f(local_58,uVar8 & 0xffffffff);
                  lVar6 = FUN_149558f28(uVar5);
                  FUN_1495597cd(lVar11);
                  lVar11 = local_58;
                  *(longlong *)(lVar12 + uVar8 * 8) = lVar6;
                  if (lVar6 == 0) {
                    lVar6 = FUN_14955975f(local_58,uVar8 & 0xffffffff);
                    uVar4 = *(uint *)(lVar6 + 8);
                    FUN_1495597cd(lVar11);
                    if ((0xaaaaaaaaaaaaaaaaU >> ((ulonglong)uVar4 & 0x3f) & 1) == 0) {
                      uVar4 = 100;
                      param_1 = local_70;
                      if ((*(char *)(local_70 + 0x61) == '\0') &&
                         (*(char *)(local_70 + 0x62) == '\0')) {
                        *(undefined1 *)(local_70 + 0x61) = 1;
                        if (0 < *(int *)(local_70 + 0xd4)) {
                          *(undefined4 *)(local_70 + 0x170) = 1;
                        }
                        *(int *)(local_70 + 0x178) = *(int *)(local_70 + 0x178) + 1;
                        *(undefined2 *)(local_70 + 0x17c) = 0;
                        if (*(longlong *)(local_70 + 0x138) != 0) {
                          *(undefined4 *)(*(longlong *)(local_70 + 0x138) + 0x18) = 7;
                        }
                      }
                      goto LAB_14955b703;
                    }
                  }
                  uVar8 = uVar8 + 1;
                  uVar4 = uVar9;
                } while (uVar9 != uVar8);
              }
              *(undefined8 *)(lVar12 + (ulonglong)uVar4 * 8) = 0;
              uVar4 = local_64;
            }
            else {
              if (((uVar4 != 0x65) || (bVar2)) || ((*(byte *)(local_70 + 0x31) & 1) == 0)) break;
LAB_14955b602:
              uVar9 = 0;
              if (lVar11 != 0) {
                uVar9 = (uint)*(ushort *)(lVar11 + 0xc0);
              }
              if (local_70 == 0) {
                lVar7 = FUN_145e3bd67(uVar9 << 4 | 8);
              }
              else {
                lVar7 = FUN_14955d750();
              }
              if (lVar7 == 0) {
                lVar7 = 0;
                param_1 = local_70;
                goto LAB_14955b703;
              }
              if (uVar9 != 0) {
                uVar8 = 0;
                do {
                  uVar5 = FUN_14955981e(lVar11,uVar8 & 0xffffffff);
                  *(undefined8 *)(lVar7 + uVar8 * 8) = uVar5;
                  uVar8 = uVar8 + 1;
                } while (uVar9 != uVar8);
              }
              if (uVar4 == 100) goto LAB_14955b517;
            }
            iVar3 = (*param_3)(local_60,uVar9,lVar12);
            lVar11 = local_58;
            bVar2 = true;
            if (iVar3 != 0) {
              if ((*(int *)(local_58 + 0x24) == 0x319c2973) ||
                 (*(int *)(local_58 + 0x24) == 0x2df20da3)) {
                FUN_149558ddf(local_58);
              }
              FUN_149569ad7(lVar11);
              param_1 = local_70;
              local_58 = 0;
              *(undefined4 *)(local_70 + 0x50) = 4;
              uVar4 = 4;
              FUN_14955de40(local_70,4);
              goto LAB_14955b70c;
            }
          }
        } while (uVar4 == 100);
        if ((*(int *)(lVar11 + 0x24) == 0x319c2973) ||
           (uVar4 = 0, *(int *)(lVar11 + 0x24) == 0x2df20da3)) {
          uVar4 = FUN_149558ddf(lVar11);
        }
        FUN_149569ad7(lVar11);
        param_1 = local_70;
        local_58 = 0;
        pcVar10 = local_50 + -1;
        do {
          pbVar1 = (byte *)(pcVar10 + 1);
          pcVar10 = pcVar10 + 1;
        } while (((&DAT_14bd400b0)[*pbVar1] & 1) != 0);
        if (lVar7 != 0) {
          FUN_14955d65a(local_70,lVar7);
        }
      }
      if (uVar4 != 0) goto LAB_14955b6fc;
    }
    uVar4 = 0;
LAB_14955b6fc:
    lVar7 = 0;
    lVar11 = local_58;
LAB_14955b703:
    if (lVar11 != 0) {
      if ((*(int *)(lVar11 + 0x24) == 0x319c2973) || (*(int *)(lVar11 + 0x24) == 0x2df20da3)) {
        FUN_149558ddf(lVar11);
      }
      FUN_149569ad7(lVar11);
    }
LAB_14955b70c:
    if (lVar7 != 0) {
      FUN_14955d65a(param_1,lVar7);
    }
    if ((uVar4 == 0xc0a) || (*(char *)(param_1 + 0x61) != '\0')) {
      FUN_149569b34(param_1);
      uVar4 = 7;
    }
    else {
      uVar4 = uVar4 & *(uint *)(param_1 + 0x54);
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      (*DAT_14c765d88)();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14955b8d2 FUN_14955b8d2 body=92 status=ok
// SIG undefined FUN_14955b8d2(void)

undefined8 FUN_14955b8d2(longlong param_1)

{
  int iVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    pcVar2 = "NULL";
  }
  else {
    iVar1 = *(int *)(param_1 + 0x70);
    if (iVar1 == -0x5fd65969) {
      return 1;
    }
    if ((iVar1 == 0x4b771290) || (iVar1 == -0xfc486fa)) {
      pcVar2 = "unopened";
    }
    else {
      pcVar2 = "invalid";
    }
  }
  FUN_14955599e(0x15,"API call with %s database connection pointer",pcVar2);
  return 0;
}



// FUNCTION 14955b92e FUN_14955b92e body=317 status=ok
// SIG undefined FUN_14955b92e(void)

char * FUN_14955b92e(longlong param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  char *pcVar4;
  
  if (param_1 == 0) {
    return "out of memory";
  }
  iVar1 = *(int *)(param_1 + 0x70);
  if (((iVar1 != -0x5fd65969) && (iVar1 != -0xfc486fa)) && (iVar1 != 0x4b771290)) {
    FUN_14955599e(0x15,"API call with %s database connection pointer","invalid");
    FUN_14955599e(0x15,"%s at line %d of [%.10s]","misuse",0x276e8,
                  "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6");
    return "bad parameter or other API misuse";
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (*DAT_14c765d78)();
  }
  if (*(char *)(param_1 + 0x61) != '\0') {
    pcVar4 = "out of memory";
    goto LAB_14955b974;
  }
  uVar3 = 0;
  if (*(int *)(param_1 + 0x50) == 0) {
LAB_14955b99e:
    if ((0x1410004UL >> (uVar3 & 0x3f) & 1) == 0) {
      pcVar4 = (&PTR_s_not_an_error_14bd49c10)[uVar3];
      goto LAB_14955b974;
    }
  }
  else {
    pcVar4 = (char *)FUN_149558f28(*(undefined8 *)(param_1 + 0x168));
    if (pcVar4 != (char *)0x0) goto LAB_14955b974;
    uVar2 = *(uint *)(param_1 + 0x50);
    if (uVar2 == 0x204) {
      pcVar4 = "abort due to ROLLBACK";
      goto LAB_14955b974;
    }
    if (uVar2 == 0x65) {
      pcVar4 = "no more rows available";
      goto LAB_14955b974;
    }
    if (uVar2 == 100) {
      pcVar4 = "another row available";
      goto LAB_14955b974;
    }
    uVar3 = (ulonglong)(uVar2 & 0xff);
    if ((uVar2 & 0xff) < 0x1d) goto LAB_14955b99e;
  }
  pcVar4 = "unknown error";
LAB_14955b974:
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (*DAT_14c765d88)();
  }
  return pcVar4;
}



// FUNCTION 14955ba6b FUN_14955ba6b body=385 status=ok
// SIG undefined FUN_14955ba6b(void)

uint FUN_14955ba6b(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  
  *param_5 = 0;
  iVar2 = FUN_14955b8d2();
  if ((param_2 == 0) || (iVar2 == 0)) {
    uVar3 = 0x15;
    FUN_14955599e(0x15,"%s at line %d of [%.10s]","misuse",0x1f297,
                  "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6");
  }
  else {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      (*DAT_14c765d78)();
    }
    if (*(char *)(param_1 + 0x69) == '\0') {
      FUN_14955dca3(param_1);
    }
    bVar1 = true;
    do {
      do {
        bVar5 = bVar1;
        uVar3 = FUN_1495819bd(param_1,param_2,param_3,param_4,param_5,param_6);
        bVar1 = bVar5;
      } while (uVar3 == 0x201);
      if (uVar3 != 0x11) goto LAB_14955bb9a;
      if ((*(int *)(param_1 + 0x48) == 0) && (iVar2 = *(int *)(param_1 + 0x28), 0 < iVar2)) {
        lVar4 = 0x18;
        lVar6 = 0;
        do {
          if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar4) + 0x72) & 8) != 0) {
            FUN_149578912();
            iVar2 = *(int *)(param_1 + 0x28);
          }
          lVar6 = lVar6 + 1;
          lVar4 = lVar4 + 0x20;
        } while (lVar6 < iVar2);
      }
      bVar1 = false;
    } while (bVar5);
    uVar3 = 0x11;
LAB_14955bb9a:
    if (*(char *)(param_1 + 0x69) == '\0') {
      FUN_14955dd00(param_1);
    }
    if ((uVar3 == 0xc0a) || (*(char *)(param_1 + 0x61) != '\0')) {
      FUN_149569b34(param_1);
      uVar3 = 7;
    }
    else {
      uVar3 = uVar3 & *(uint *)(param_1 + 0x54);
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      (*DAT_14c765d88)();
    }
  }
  return uVar3;
}



// FUNCTION 14955bbec FUN_14955bbec body=721 status=ok
// SIG undefined FUN_14955bbec(void)

uint FUN_14955bbec(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  undefined1 auStack_208 [32];
  char *local_1e8;
  longlong local_1d8;
  longlong local_1d0;
  undefined1 local_1c8 [8];
  longlong local_1c0;
  undefined4 local_114;
  undefined1 local_bc;
  longlong local_90;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1d8 = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (*DAT_14c765d78)();
  }
  plVar2 = *(longlong **)(param_1 + 0x210);
  if ((plVar2 == (longlong *)0x0) || ((int)plVar2[3] != 0)) {
    *(undefined4 *)(param_1 + 0x50) = 0x15;
    uVar6 = 0x15;
    FUN_14955de40(param_1,0x15);
    if (*(longlong *)(param_1 + 0x18) != 0) {
      (*DAT_14c765d88)();
    }
    local_1e8 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
    FUN_14955599e(0x15,"%s at line %d of [%.10s]","misuse",0x21d7d);
    goto LAB_14955bd91;
  }
  lVar3 = plVar2[1];
  memset(local_1c8,0,0x198);
  local_bc = 1;
  local_114 = 1;
  local_1d0 = param_1;
  iVar4 = FUN_14955bebe(&local_1d0,param_2,&local_1d8);
  if ((((local_90 == 0 || iVar4 != 0) || (*(char *)(param_1 + 0x61) != '\0')) ||
      (*(longlong *)(local_90 + 0x18) != 0)) || (*(int *)(local_90 + 0x54) != 0)) {
    puVar7 = &DAT_149dfbe46;
    if (local_1d8 == 0) {
      puVar7 = (undefined *)0x0;
    }
    uVar6 = 1;
    FUN_149556dbf(param_1,1,puVar7);
    if (local_1d8 != 0) {
      FUN_14955d65a(param_1);
    }
  }
  else {
    uVar6 = 0;
    if (*(longlong *)(lVar3 + 8) == 0) {
      *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(local_90 + 8);
      *(undefined2 *)(lVar3 + 0x46) = *(undefined2 *)(local_90 + 0x46);
      *(uint *)(lVar3 + 0x40) = *(uint *)(lVar3 + 0x40) | *(uint *)(local_90 + 0x40) & 0x280;
      *(undefined2 *)(local_90 + 0x46) = 0;
      *(undefined8 *)(local_90 + 8) = 0;
      uVar6 = 0;
      if (((*(byte *)(local_90 + 0x40) & 0x80) != 0) &&
         (*(longlong *)(**(longlong **)(*plVar2 + 8) + 0x68) != 0)) {
        for (lVar5 = *(longlong *)(local_90 + 0x10); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x28)
            ) {
          if ((*(uint *)(lVar5 + 100) & 3) == 2) goto LAB_14955be8d;
        }
        lVar5 = 0;
LAB_14955be8d:
        uVar6 = (uint)(*(short *)(lVar5 + 0x5e) != 1);
      }
      lVar5 = *(longlong *)(local_90 + 0x10);
      if (lVar5 != 0) {
        *(longlong *)(lVar3 + 0x10) = lVar5;
        *(undefined8 *)(local_90 + 0x10) = 0;
        *(longlong *)(lVar5 + 0x18) = lVar3;
      }
    }
    *(undefined4 *)(plVar2 + 3) = 1;
  }
  local_bc = 0;
  if (local_1c0 != 0) {
    if ((*(int *)(local_1c0 + 0x24) == 0x319c2973) || (*(int *)(local_1c0 + 0x24) == 0x2df20da3)) {
      FUN_149558ddf(local_1c0);
    }
    FUN_149569ad7(local_1c0);
  }
  if (local_90 != 0) {
    if ((param_1 == 0) || (*(longlong *)(param_1 + 0x2d8) == 0)) {
      piVar1 = (int *)(local_90 + 0x3c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) goto LAB_14955be33;
    }
    FUN_149585e6d(param_1);
  }
LAB_14955be33:
  FUN_14955aa59(&local_1d0);
  if (*(char *)(param_1 + 0x61) == '\0') {
    uVar6 = uVar6 & *(uint *)(param_1 + 0x54);
  }
  else {
    FUN_149569b34(param_1);
    uVar6 = 7;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (*DAT_14c765d88)();
  }
LAB_14955bd91:
  if ((local_30 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14955bebe FUN_14955bebe body=1713 status=ok
// SIG undefined FUN_14955bebe(void)

bool FUN_14955bebe(longlong *param_1,char *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ushort *puVar12;
  longlong lVar13;
  uint uVar14;
  ushort *puVar15;
  char *pcVar16;
  short sVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  undefined1 auStack_a48 [40];
  longlong *local_a20;
  longlong *local_a18;
  longlong *local_a10;
  undefined4 local_a08;
  undefined4 uStack_a04;
  undefined4 uStack_a00;
  undefined4 uStack_9fc;
  uint local_9ec;
  undefined4 local_9e8;
  undefined4 uStack_9e4;
  undefined4 uStack_9e0;
  undefined4 uStack_9dc;
  undefined8 local_9d8;
  undefined4 uStack_9d0;
  undefined4 uStack_9cc;
  ushort *local_9c0;
  longlong *local_9b8;
  ushort local_9b0 [1188];
  ushort local_68 [12];
  ushort *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a48;
  lVar2 = *param_1;
  iVar21 = *(int *)(lVar2 + 0x80);
  if (*(int *)(lVar2 + 200) == 0) {
    *(undefined4 *)(lVar2 + 0x170) = 0;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[0x27] = (longlong)param_2;
  local_9c0 = local_9b0;
  local_9b0[0] = 0;
  local_9b0[1] = 0;
  local_50 = local_68;
  param_1[0x16] = *(longlong *)(lVar2 + 0x138);
  *(longlong **)(lVar2 + 0x138) = param_1;
  local_a10 = param_1 + 0x20;
  uVar11 = 0xffffffff;
  local_a20 = param_1;
  local_a18 = param_3;
  local_9b8 = param_1;
  do {
    while( true ) {
      iVar9 = FUN_149584865(param_2,&local_9ec);
      iVar21 = iVar21 - iVar9;
      if (iVar21 < 0) {
        *(undefined4 *)(param_1 + 3) = 0x12;
        goto LAB_14955c2a8;
      }
      uVar14 = local_9ec;
      if ((int)local_9ec < 0xa1) goto LAB_14955bfde;
      if (*(int *)(lVar2 + 0x170) != 0) {
        *(undefined4 *)(param_1 + 3) = 9;
        goto LAB_14955c2a8;
      }
      if (local_9ec != 0xb3) break;
      param_2 = param_2 + iVar9;
    }
    if (*param_2 == '\0') {
      iVar9 = 0;
      uVar14 = 0;
      if (uVar11 != 1) {
        if (uVar11 == 0) break;
        uVar14 = 1;
      }
    }
    else if (local_9ec == 0xa3) {
      local_9d8 = param_2 + 6;
      if (uVar11 == 0x17) {
        iVar10 = FUN_149586803(&local_9d8);
        uVar14 = 0xa3;
        if (iVar10 == 0x16) goto LAB_14955bfde;
      }
      uVar14 = 0x3b;
    }
    else if (local_9ec == 0xa2) {
      local_9d8 = param_2 + 4;
      uVar14 = 0x3b;
      if (uVar11 == 0x17) {
        iVar10 = FUN_149586803(&local_9d8);
        uVar14 = 0x3b;
        if (iVar10 == 0x16) {
          uVar14 = 0xa2;
        }
        if (iVar10 == 0x3b) {
          uVar14 = 0xa2;
        }
      }
    }
    else {
      if (local_9ec != 0xa1) {
        FUN_14955a364(param_1,"unrecognized token: \"%.*s\"",iVar9,param_2);
        break;
      }
      local_9d8 = param_2 + 6;
      iVar10 = FUN_149586803(&local_9d8);
      uVar14 = 0x3b;
      if (iVar10 == 0x3b) {
        iVar10 = FUN_149586803(&local_9d8);
        uVar14 = 0x3b;
        if (iVar10 == 0x18) {
          uVar14 = 0xa1;
        }
      }
    }
LAB_14955bfde:
    local_9ec = uVar14;
    plVar4 = local_9b8;
    uVar11 = local_9ec;
    param_1[0x20] = (longlong)param_2;
    *(int *)(param_1 + 0x21) = iVar9;
    local_a08 = (undefined4)*local_a10;
    uStack_a04 = *(undefined4 *)((longlong)local_a10 + 4);
    uStack_a00 = (undefined4)local_a10[1];
    uStack_9fc = *(undefined4 *)((longlong)local_a10 + 0xc);
    uVar7 = *local_9c0;
    do {
      plVar5 = local_9b8;
      if (uVar7 < 0x227) {
        uVar8 = *(ushort *)(&DAT_14bd43440 + (ulonglong)uVar7 * 2);
        uVar18 = (ulonglong)uVar11;
        do {
          uVar19 = uVar18 & 0xffff;
          uVar20 = (ulonglong)((int)uVar19 + (uint)uVar8);
          sVar17 = (short)uVar18;
          if (*(short *)(&DAT_14bd43890 + uVar20 * 2) == sVar17) {
            puVar12 = (ushort *)(&DAT_14bd44950 + uVar20 * 2);
            goto LAB_14955c070;
          }
          uVar18 = (ulonglong)*(ushort *)(&DAT_14bd432d0 + uVar19 * 2);
        } while (*(ushort *)(&DAT_14bd432d0 + uVar19 * 2) != 0);
        if ((sVar17 == 0) || (*(short *)(&DAT_14bd43958 + (ulonglong)uVar8 * 2) != 100)) {
          puVar12 = (ushort *)(&DAT_14bd458a0 + (ulonglong)uVar7 * 2);
        }
        else {
          puVar12 = (ushort *)(&DAT_14bd44950 + ((ulonglong)uVar8 + 100) * 2);
        }
LAB_14955c070:
        uVar7 = *puVar12;
      }
      uVar14 = (uint)uVar7;
      if (uVar7 < 0x4a5) {
        if (uVar7 < 0x4a2) {
          if (local_50 < local_9c0 + 0xc) {
            FUN_149589128(&local_9c0);
          }
          else {
            uVar8 = uVar7 + 0x184;
            if (uVar14 < 0x227) {
              uVar8 = uVar7;
            }
            local_9c0[0xc] = uVar8;
            local_9c0[0xd] = (ushort)uVar11;
            *(undefined4 *)(local_9c0 + 0x10) = local_a08;
            *(undefined4 *)(local_9c0 + 0x12) = uStack_a04;
            *(undefined4 *)(local_9c0 + 0x14) = uStack_a00;
            *(undefined4 *)(local_9c0 + 0x16) = uStack_9fc;
            local_9c0 = local_9c0 + 0xc;
          }
        }
        else if (uVar14 == 0x4a3) {
          local_9c0 = local_9c0 + -0xc;
        }
        else {
          local_9d8 = (char *)CONCAT44(uStack_a04,local_a08);
          uStack_9d0 = uStack_a00;
          uStack_9cc = uStack_9fc;
          local_9e8 = local_a08;
          uStack_9e4 = uStack_a04;
          uStack_9e0 = uStack_a00;
          uStack_9dc = uStack_9fc;
          if (*(char *)CONCAT44(uStack_a04,local_a08) == '\0') {
            FUN_14955a364(local_9b8,"incomplete input");
          }
          else {
            FUN_14955a364(local_9b8,"near \"%T\": syntax error",&local_9e8);
          }
          local_9b8 = plVar5;
          FUN_14958902f(&local_9c0,uVar11,&local_9d8);
        }
        break;
      }
      local_9d8 = (char *)CONCAT44(uStack_a04,local_a08);
      uStack_9d0 = uStack_a00;
      uStack_9cc = uStack_9fc;
      uVar7 = FUN_1495868af(&local_9c0,uVar14 - 0x4a5,&local_9d8,plVar4);
    } while (local_9b0 < local_9c0);
    param_2 = param_2 + iVar9;
    param_1 = local_a20;
  } while ((int)local_a20[3] == 0);
LAB_14955c2a8:
  if (local_9b0 < local_9c0) {
    do {
      puVar12 = local_9c0 + 1;
      puVar15 = local_9c0 + 4;
      local_9c0 = local_9c0 + -0xc;
      FUN_14958902f(&local_9c0,*puVar12,puVar15);
    } while (local_9b0 < local_9c0);
  }
  plVar4 = local_a20;
  if (*(char *)(lVar2 + 0x61) == '\0') {
    uVar11 = *(uint *)(local_a20 + 3);
    if ((uVar11 != 0) && (uVar11 != 0x65)) goto LAB_14955c319;
  }
  else {
    *(undefined4 *)(local_a20 + 3) = 7;
    uVar11 = 7;
LAB_14955c319:
    if (local_a20[1] == 0) {
      if (uVar11 == 0x204) {
        pcVar16 = "abort due to ROLLBACK";
      }
      else if (uVar11 == 100) {
        pcVar16 = "another row available";
      }
      else {
        uVar11 = uVar11 & 0xff;
        pcVar16 = "unknown error";
        if ((uVar11 < 0x1d) && ((0x1410004UL >> ((ulonglong)uVar11 & 0x3f) & 1) == 0)) {
          pcVar16 = (&PTR_s_not_an_error_14bd49c10)[uVar11];
        }
      }
      lVar13 = FUN_14955a402(lVar2,&DAT_149dfbe46,pcVar16);
      plVar4[1] = lVar13;
    }
  }
  lVar13 = plVar4[1];
  if (lVar13 != 0) {
    *local_a18 = lVar13;
    FUN_14955599e((int)plVar4[3],"%s in \"%s\"",lVar13,plVar4[0x27]);
    plVar4[1] = 0;
  }
  plVar4[0x27] = (longlong)param_2;
  if (((plVar4[2] != 0) && (0 < (int)plVar4[6])) && (*(char *)((longlong)plVar4 + 0x1e) == '\0')) {
    FUN_149569ad7();
    plVar4[2] = 0;
  }
  if (*(char *)((longlong)plVar4 + 0x1e) == '\0') {
    if (plVar4[0x12] != 0) {
      FUN_14955d65a(lVar2);
    }
    plVar4[0x12] = 0;
    *(undefined4 *)(plVar4 + 0x11) = 0;
  }
  FUN_145e3b961(plVar4[0x2e]);
  bVar6 = *(byte *)((longlong)plVar4 + 0x114);
  if (bVar6 != 0) goto LAB_14955c403;
  if (plVar4[0x28] != 0) {
    if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x2d8) == 0)) {
      piVar1 = (int *)(plVar4[0x28] + 0x3c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) goto LAB_14955c450;
    }
    FUN_149585e6d(lVar2);
  }
LAB_14955c450:
  bVar6 = *(byte *)((longlong)plVar4 + 0x114);
LAB_14955c403:
  if (bVar6 < 2) {
    FUN_1495536cd(lVar2,plVar4[0x2a]);
  }
  if (plVar4[0x32] != 0) {
    FUN_149582c24(lVar2);
  }
  if (plVar4[0x25] == 0) goto LAB_14955c4dc;
  while( true ) {
    FUN_14955d65a(lVar2);
LAB_14955c4dc:
    if ((longlong *)plVar4[0x13] == (longlong *)0x0) break;
    plVar4[0x13] = *(longlong *)plVar4[0x13];
  }
LAB_14955c51b:
  lVar3 = plVar4[0x2f];
  if (lVar3 == 0) {
    *(longlong *)(lVar2 + 0x138) = plVar4[0x16];
    plVar4[0x16] = 0;
    if ((local_48 ^ (ulonglong)auStack_a48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return lVar13 != 0;
  }
  plVar4[0x2f] = *(longlong *)(lVar3 + 0x78);
  if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x2d8) == 0)) goto LAB_14955c50e;
  goto LAB_14955c513;
LAB_14955c50e:
  piVar1 = (int *)(lVar3 + 0x3c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
LAB_14955c513:
    FUN_149585e6d(lVar2);
  }
  goto LAB_14955c51b;
}



// FUNCTION 14955c570 FUN_14955c570 body=81 status=ok
// SIG undefined FUN_14955c570(void)

void FUN_14955c570(longlong param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)FUN_145e3bd67(0x38);
  }
  else {
    puVar1 = (undefined8 *)FUN_14955d750(param_1,0x38);
  }
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    *(undefined2 *)(puVar1 + 1) = 1;
    puVar1[5] = param_1;
  }
  return;
}



// FUNCTION 14955c5c1 FUN_14955c5c1 body=158 status=ok
// SIG undefined FUN_14955c5c1(void)

void FUN_14955c5c1(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (*DAT_14c765d78)();
  }
  if (*(char *)(param_1 + 0x69) == '\0') {
    FUN_14955dca3(param_1);
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if (0 < iVar2) {
    lVar4 = 8;
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar4);
      if (lVar1 != 0) {
        (*DAT_14c765e00)(*(undefined8 *)(*(longlong *)(**(longlong **)(lVar1 + 8) + 0x118) + 0x40));
        iVar2 = *(int *)(param_1 + 0x28);
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x20;
    } while (lVar3 < iVar2);
  }
  if (*(char *)(param_1 + 0x69) == '\0') {
    FUN_14955dd00(param_1);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014955c63b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14c765d88)();
    return;
  }
  return;
}



// FUNCTION 14955c65f FUN_14955c65f body=267 status=ok
// SIG undefined FUN_14955c65f(void)

void FUN_14955c65f(longlong param_1,int param_2)

{
  if (param_2 < 1) {
    if (*(longlong *)(param_1 + 0x18) == 0) {
      *(undefined4 *)(param_1 + 0x2b8) = 0;
      *(undefined8 *)(param_1 + 600) = 0;
      *(undefined8 *)(param_1 + 0x260) = 0;
      *(undefined8 *)(param_1 + 0x265) = 0;
    }
    else {
      (*DAT_14c765d78)();
      *(undefined4 *)(param_1 + 0x2b8) = 0;
      *(undefined8 *)(param_1 + 600) = 0;
      *(undefined8 *)(param_1 + 0x260) = 0;
      *(undefined8 *)(param_1 + 0x265) = 0;
      if (*(longlong *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014955c710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_14c765d88)();
        return;
      }
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x18) == 0) {
      *(code **)(param_1 + 600) = FUN_14955c76a;
      *(longlong *)(param_1 + 0x260) = param_1;
      *(undefined4 *)(param_1 + 0x268) = 0;
    }
    else {
      (*DAT_14c765d78)();
      *(code **)(param_1 + 600) = FUN_14955c76a;
      *(longlong *)(param_1 + 0x260) = param_1;
      *(undefined4 *)(param_1 + 0x268) = 0;
      *(undefined1 *)(param_1 + 0x26c) = 0;
      *(undefined4 *)(param_1 + 0x2b8) = 0;
      if (*(longlong *)(param_1 + 0x18) != 0) {
        (*DAT_14c765d88)();
      }
    }
    *(int *)(param_1 + 0x2b8) = param_2;
    *(undefined1 *)(param_1 + 0x26c) = 1;
  }
  return;
}



// FUNCTION 14955c76a FUN_14955c76a body=47 status=ok
// SIG undefined FUN_14955c76a(void)

bool FUN_14955c76a(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = param_2 * 1000 + 1000;
  lVar1 = param_1[0x57];
  if (iVar2 <= (int)lVar1) {
    (**(code **)(*param_1 + 0x70))(*param_1,1000000);
  }
  return iVar2 <= (int)lVar1;
}



// FUNCTION 14955c799 FUN_14955c799 body=266 status=ok
// SIG undefined FUN_14955c799(void)

void FUN_14955c799(longlong param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  char *pcVar2;
  longlong lVar3;
  undefined1 *puVar4;
  
  pcVar2 = (char *)FUN_14955c8a3(param_1,&DAT_14bd478e5,param_2,1,0);
  if (((pcVar2 != (char *)0x0) && ((*(uint *)(pcVar2 + 4) & 3) == 1)) && (*pcVar2 == param_2)) {
    if (*(int *)(param_1 + 200) != 0) {
      FUN_149556dbf(param_1,5,"unable to delete/modify user-function due to active statements");
      return;
    }
    for (lVar3 = *(longlong *)(param_1 + 8); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x10)) {
      *(uint *)(lVar3 + 200) = (*(uint *)(lVar3 + 200) & 0xfffffffc) + 1;
    }
  }
  puVar4 = (undefined1 *)FUN_14955c8a3(param_1,&DAT_14bd478e5,param_2,1,1);
  if (puVar4 != (undefined1 *)0x0) {
    piVar1 = *(int **)(puVar4 + 0x40);
    if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
      (**(code **)(piVar1 + 2))(*(undefined8 *)(piVar1 + 4));
      FUN_14955d65a(param_1,piVar1);
    }
    *(undefined8 *)(puVar4 + 0x40) = 0;
    *(uint *)(puVar4 + 4) = *(uint *)(puVar4 + 4) & 3 | 0x200000;
    *(code **)(puVar4 + 0x18) = FUN_1495cafab;
    *(undefined8 *)(puVar4 + 0x20) = 0;
    *(undefined8 *)(puVar4 + 0x28) = 0;
    *(undefined8 *)(puVar4 + 0x30) = 0;
    *(undefined8 *)(puVar4 + 8) = param_3;
    *puVar4 = (char)param_2;
  }
  return;
}



// FUNCTION 14955c8a3 FUN_14955c8a3 body=843 status=ok
// SIG undefined FUN_14955c8a3(void)

char * FUN_14955c8a3(longlong param_1,byte *param_2,int param_3,uint param_4,char param_5)

{
  byte bVar1;
  uint uVar2;
  size_t sVar3;
  longlong lVar4;
  char *_Dst;
  char *pcVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  bool bVar9;
  
  uVar8 = 0;
  if (param_2 != (byte *)0x0) {
    sVar3 = strlen((char *)param_2);
    uVar8 = (uint)sVar3 & 0x3fffffff;
  }
  lVar4 = FUN_14958201d(param_1 + 0x228,param_2,0);
  pcVar5 = *(char **)(lVar4 + 0x10);
  if (pcVar5 == (char *)0x0) {
    _Dst = (char *)0x0;
    bVar1 = 0;
    if (param_5 == '\0') goto LAB_14955c9cd;
    goto LAB_14955c98a;
  }
  _Dst = (char *)0x0;
  bVar1 = 0;
  do {
    bVar7 = 4;
    if (*pcVar5 == param_3) {
LAB_14955c922:
      if ((*(uint *)(pcVar5 + 4) & 3) == (param_4 & 0xff)) {
        bVar7 = bVar7 | 2;
      }
      else {
        bVar7 = bVar7 + (((*(uint *)(pcVar5 + 4) & param_4 & 0xff) >> 1 & 1) != 0);
      }
    }
    else if (param_3 == -2) {
      bVar7 = 6;
      if (*(longlong *)(pcVar5 + 0x18) == 0) {
        bVar7 = 0;
      }
    }
    else {
      bVar7 = 0;
      if (*pcVar5 < '\0') {
        bVar7 = 1;
        goto LAB_14955c922;
      }
    }
    if (bVar1 < bVar7) {
      _Dst = pcVar5;
      bVar1 = bVar7;
    }
    pcVar5 = *(char **)(pcVar5 + 0x10);
  } while (pcVar5 != (char *)0x0);
  if (param_5 != '\0') goto LAB_14955c98a;
  if (_Dst == (char *)0x0) {
    _Dst = (char *)0x0;
  }
  else if ((*(byte *)(param_1 + 0x2c) & 2) == 0) {
    bVar9 = false;
    goto LAB_14955c9a0;
  }
LAB_14955c9cd:
  uVar2 = (byte)(&DAT_14bd3ff30)[*param_2] + uVar8;
  pcVar5 = (char *)(&DAT_14cc1ecc8)[uVar2 / 0x17 + (uVar2 / 0x17) * -0x18 + uVar2];
  if (pcVar5 != (char *)0x0) {
LAB_14955ca0d:
    lVar4 = 0;
    do {
      bVar1 = *(byte *)(*(longlong *)(pcVar5 + 0x38) + lVar4);
      if (bVar1 == param_2[lVar4]) {
        if ((ulonglong)bVar1 == 0) {
          bVar1 = 0;
          goto LAB_14955ca6d;
        }
      }
      else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[param_2[lVar4]]) goto LAB_14955ca39;
      lVar4 = lVar4 + 1;
    } while( true );
  }
  bVar9 = false;
  goto LAB_14955c99b;
LAB_14955ca39:
  pcVar5 = *(char **)(pcVar5 + 0x40);
  bVar1 = 0;
  if (pcVar5 == (char *)0x0) goto LAB_14955c98a;
  goto LAB_14955ca0d;
  while( true ) {
    if (bVar1 < bVar7) {
      _Dst = pcVar5;
      bVar1 = bVar7;
    }
    pcVar5 = *(char **)(pcVar5 + 0x10);
    if (pcVar5 == (char *)0x0) break;
LAB_14955ca6d:
    bVar7 = 4;
    if (*pcVar5 == param_3) {
LAB_14955ca7c:
      if ((*(uint *)(pcVar5 + 4) & 3) == (param_4 & 0xff)) {
        bVar7 = bVar7 | 2;
      }
      else {
        bVar7 = bVar7 + (((*(uint *)(pcVar5 + 4) & param_4 & 0xff) >> 1 & 1) != 0);
      }
    }
    else if (param_3 == -2) {
      bVar7 = 6;
      if (*(longlong *)(pcVar5 + 0x18) == 0) {
        bVar7 = 0;
      }
    }
    else {
      bVar7 = 0;
      if (*pcVar5 < '\0') {
        bVar7 = 1;
        goto LAB_14955ca7c;
      }
    }
  }
LAB_14955c98a:
  bVar9 = param_5 != '\0';
  if ((bVar9) && (bVar1 < 6)) {
    if (param_1 == 0) {
      _Dst = (char *)FUN_145e3bd67((ulonglong)(uVar8 + 0x49));
    }
    else {
      _Dst = (char *)FUN_14955d750(param_1);
    }
    if (_Dst == (char *)0x0) {
      return (char *)0x0;
    }
    memset(_Dst,0,(ulonglong)(uVar8 + 0x49));
    pcVar5 = _Dst + 0x48;
    *(char **)(_Dst + 0x38) = pcVar5;
    *_Dst = (char)param_3;
    *(uint *)(_Dst + 4) = param_4 & 0xff;
    memcpy(pcVar5,param_2,(ulonglong)(uVar8 + 1));
    bVar1 = _Dst[0x48];
    if (bVar1 != 0) {
      pbVar6 = (byte *)(_Dst + 0x49);
      do {
        pbVar6[-1] = (&DAT_14bd3ff30)[bVar1];
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (bVar1 != 0);
      pcVar5 = *(char **)(_Dst + 0x38);
    }
    pcVar5 = (char *)FUN_14958256b(param_1 + 0x228,pcVar5,_Dst);
    if (pcVar5 == _Dst) {
      FUN_14955d65a(param_1,_Dst);
      if (*(char *)(param_1 + 0x61) != '\0') {
        return (char *)0x0;
      }
      if (*(char *)(param_1 + 0x62) != '\0') {
        return (char *)0x0;
      }
      *(undefined1 *)(param_1 + 0x61) = 1;
      if (0 < *(int *)(param_1 + 0xd4)) {
        *(undefined4 *)(param_1 + 0x170) = 1;
      }
      *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
      *(undefined2 *)(param_1 + 0x17c) = 0;
      if (*(longlong *)(param_1 + 0x138) == 0) {
        return (char *)0x0;
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x138) + 0x18) = 7;
      return (char *)0x0;
    }
    *(char **)(_Dst + 0x10) = pcVar5;
    bVar9 = true;
  }
LAB_14955c99b:
  if (_Dst == (char *)0x0) {
    return (char *)0x0;
  }
LAB_14955c9a0:
  if (bVar9) {
    return _Dst;
  }
  if (*(longlong *)(_Dst + 0x18) == 0) {
    return (char *)0x0;
  }
  return _Dst;
}



// FUNCTION 14955cbee FUN_14955cbee body=144 status=ok
// SIG undefined FUN_14955cbee(void)

void FUN_14955cbee(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  if ((int)param_2 < 1) {
    if (*(longlong *)(param_1 + 0x18) == 0) {
      *(undefined8 *)(param_1 + 0x140) = 0;
      *(undefined8 *)(param_1 + 0x148) = 0;
      return;
    }
    (*DAT_14c765d78)();
    lVar1 = *(longlong *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  else {
    if (*(longlong *)(param_1 + 0x18) == 0) {
      *(code **)(param_1 + 0x140) = FUN_14955cc7e;
      *(ulonglong *)(param_1 + 0x148) = (ulonglong)param_2;
      return;
    }
    (*DAT_14c765d78)();
    lVar1 = *(longlong *)(param_1 + 0x18);
    *(code **)(param_1 + 0x140) = FUN_14955cc7e;
    *(ulonglong *)(param_1 + 0x148) = (ulonglong)param_2;
  }
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014955cc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_14c765d88)();
  return;
}



// FUNCTION 14955cc7e FUN_14955cc7e body=29 status=ok
// SIG undefined FUN_14955cc7e(void)

undefined8 FUN_14955cc7e(int param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_1 <= param_4) {
    FUN_14955cc9b(param_2,param_3);
  }
  return 0;
}



// FUNCTION 14955cc9b FUN_14955cc9b body=228 status=ok
// SIG undefined FUN_14955cc9b(void)

void FUN_14955cc9b(longlong param_1,char *param_2)

{
  int iVar1;
  bool bVar2;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (*DAT_14c765d78)();
  }
  iVar1 = 10;
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
LAB_14955ccef:
    *(undefined4 *)(param_1 + 0x268) = 0;
    iVar1 = FUN_14955cd7f(param_1,iVar1,0,0,0);
    *(int *)(param_1 + 0x50) = iVar1;
    if ((iVar1 != 0) || (*(longlong *)(param_1 + 0x168) != 0)) {
      FUN_14955de40(param_1,iVar1);
      bVar2 = iVar1 == 0xc0a;
      goto LAB_14955cd25;
    }
  }
  else {
    iVar1 = FUN_149555d2a(param_1,param_2);
    if (-1 < iVar1) goto LAB_14955ccef;
    FUN_149556dbf(param_1,1,"unknown database: %s",param_2);
  }
  bVar2 = false;
LAB_14955cd25:
  if ((bVar2) || (*(char *)(param_1 + 0x61) != '\0')) {
    FUN_149569b34(param_1);
  }
  if (*(int *)(param_1 + 200) == 0) {
    *(undefined4 *)(param_1 + 0x170) = 0;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014955cd51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14c765d88)();
    return;
  }
  return;
}



// FUNCTION 14955cd7f FUN_14955cd7f body=478 status=ok
// SIG undefined FUN_14955cd7f(void)

int FUN_14955cd7f(longlong param_1,uint param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 local_60;
  
  iVar6 = *(int *)(param_1 + 0x28);
  if (iVar6 < 1) {
    iVar6 = 0;
  }
  else {
    lVar8 = 1;
    lVar9 = 8;
    bVar5 = false;
    do {
      if ((param_2 == 10) || (lVar8 - (ulonglong)param_2 == 1)) {
        puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x20) + lVar9);
        if (puVar2 == (undefined8 *)0x0) {
          iVar7 = 0;
        }
        else {
          plVar3 = (longlong *)puVar2[1];
          if ((*(char *)((longlong)puVar2 + 0x11) != '\0') &&
             (*(int *)((longlong)puVar2 + 0x14) = *(int *)((longlong)puVar2 + 0x14) + 1,
             *(char *)((longlong)puVar2 + 0x12) == '\0')) {
            FUN_14956624a(puVar2);
          }
          iVar7 = 6;
          if (*(char *)((longlong)plVar3 + 0x24) == '\0') {
            lVar4 = *plVar3;
            iVar7 = 0;
            if (*(longlong *)(lVar4 + 0x120) != 0) {
              if (param_3 == 0) {
                local_60 = 0;
              }
              else {
                local_60 = *(undefined8 *)(lVar4 + 0xe0);
              }
              iVar7 = FUN_149565343(*(longlong *)(lVar4 + 0x120),*puVar2,param_3,local_60,
                                    *(undefined8 *)(lVar4 + 0xe8),*(undefined1 *)(lVar4 + 0xf),
                                    *(undefined4 *)(lVar4 + 0xbc),*(undefined8 *)(lVar4 + 0x110),
                                    param_4,param_5);
            }
          }
          if (*(char *)((longlong)puVar2 + 0x11) != '\0') {
            piVar1 = (int *)((longlong)puVar2 + 0x14);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_1495662d2(puVar2);
            }
          }
        }
        if (iVar7 == 5) {
          bVar5 = true;
          iVar7 = 0;
        }
        iVar6 = *(int *)(param_1 + 0x28);
        param_4 = 0;
        param_5 = 0;
      }
      else {
        iVar7 = 0;
      }
      if (iVar6 <= lVar8) break;
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0x20;
    } while (iVar7 == 0);
    iVar6 = 5;
    if (!bVar5) {
      iVar6 = iVar7;
    }
    if (iVar7 != 0) {
      iVar6 = iVar7;
    }
  }
  return iVar6;
}



// FUNCTION 14955cf5d FUN_14955cf5d body=167 status=ok
// SIG undefined FUN_14955cf5d(void)

undefined8 FUN_14955cf5d(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)(param_1 + 0x2c);
  *(undefined1 *)(param_1 + 0x5e) =
       *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x18) + 0x71);
  if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x18) + 0x72) & 1) != 0) ||
     (uVar3 = FUN_149578a25(param_1,0,param_2,0), (int)uVar3 == 0)) {
    uVar4 = (ulonglong)*(int *)(param_1 + 0x28);
    if (1 < (longlong)uVar4) {
      lVar5 = uVar4 * 0x20 + -8;
      do {
        if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar5) + 0x72) & 1) == 0) &&
           (uVar3 = FUN_149578a25(param_1,(int)uVar4 + -1,param_2,0), (int)uVar3 != 0)) {
          return uVar3;
        }
        lVar5 = lVar5 + -0x20;
        bVar2 = 2 < uVar4;
        uVar4 = uVar4 - 1;
      } while (bVar2);
    }
    uVar3 = 0;
    if ((uVar1 & 1) == 0) {
      *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) & 0xfe;
    }
  }
  return uVar3;
}



// FUNCTION 14955d004 FUN_14955d004 body=317 status=ok
// SIG undefined FUN_14955d004(void)

longlong FUN_14955d004(longlong param_1,char *param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  
  iVar3 = *(int *)(param_1 + 0x28);
LAB_14955d033:
  if (0 < iVar3) {
    uVar7 = 0;
    do {
      uVar5 = (ulonglong)(uVar7 < 2 ^ uVar7);
      if (param_3 != 0) {
        lVar4 = 0;
        do {
          bVar1 = *(byte *)(param_3 + lVar4);
          bVar2 = *(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar5 * 0x20) + lVar4);
          if (bVar1 == bVar2) {
            if ((ulonglong)bVar1 == 0) break;
          }
          else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[bVar2]) goto LAB_14955d0a7;
          lVar4 = lVar4 + 1;
        } while( true );
      }
      lVar4 = FUN_14958201d(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x18 + uVar5 * 0x20) + 8,
                            param_2,0);
      if (*(longlong *)(lVar4 + 0x10) != 0) {
        return *(longlong *)(lVar4 + 0x10);
      }
      iVar3 = *(int *)(param_1 + 0x28);
LAB_14955d0a7:
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar3);
  }
  lVar4 = 0;
  do {
    bVar1 = param_2[lVar4];
    if (bVar1 == "sqlite_master"[lVar4]) {
      if ((ulonglong)bVar1 == 0) break;
    }
    else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[(byte)"sqlite_master"[lVar4]]) {
      return 0;
    }
    lVar4 = lVar4 + 1;
  } while( true );
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
  if (param_3 != 0) {
    if (lVar4 == 0) {
      return 0;
    }
    lVar6 = 0;
    do {
      bVar1 = *(byte *)(param_3 + lVar6);
      if (bVar1 == *(byte *)(lVar4 + lVar6)) {
        if ((ulonglong)bVar1 == 0) goto LAB_14955d12b;
      }
      else {
        iVar8 = (uint)(byte)(&DAT_14bd3ff30)[bVar1] -
                (uint)(byte)(&DAT_14bd3ff30)[*(byte *)(lVar4 + lVar6)];
        if (iVar8 != 0) goto LAB_14955d11d;
      }
      lVar6 = lVar6 + 1;
    } while( true );
  }
  iVar8 = -(uint)(lVar4 != 0);
LAB_14955d11d:
  param_2 = "sqlite_temp_master";
  if (iVar8 != 0) {
    return 0;
  }
  goto LAB_14955d033;
LAB_14955d12b:
  iVar8 = 0;
  goto LAB_14955d11d;
}



// FUNCTION 14955d141 FUN_14955d141 body=160 status=ok
// SIG undefined FUN_14955d141(void)

bool FUN_14955d141(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  lVar3 = 0;
  do {
    bVar1 = *(byte *)(param_1 + lVar3);
    if (bVar1 == (&DAT_14bd49fe7)[lVar3]) {
      if ((ulonglong)bVar1 == 0) {
        return true;
      }
    }
    else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[(byte)(&DAT_14bd49fe7)[lVar3]]) {
      lVar3 = 0;
      break;
    }
    lVar3 = lVar3 + 1;
  } while( true );
LAB_14955d17f:
  bVar1 = *(byte *)(param_1 + lVar3);
  if (bVar1 == "ROWID"[lVar3]) {
    if ((ulonglong)bVar1 == 0) {
      return true;
    }
  }
  else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[(byte)"ROWID"[lVar3]]) {
    lVar3 = 0;
    goto LAB_14955d1b3;
  }
  lVar3 = lVar3 + 1;
  goto LAB_14955d17f;
LAB_14955d1b3:
  bVar1 = *(byte *)(param_1 + lVar3);
  bVar2 = (&DAT_14bd49fef)[lVar3];
  if (bVar1 == bVar2) {
    if ((ulonglong)bVar1 == 0) goto LAB_14955d1d8;
  }
  else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[bVar2]) {
LAB_14955d1d8:
    return bVar1 == bVar2;
  }
  lVar3 = lVar3 + 1;
  goto LAB_14955d1b3;
}



// FUNCTION 14955d1e1 FUN_14955d1e1 body=197 status=ok
// SIG undefined FUN_14955d1e1(void)

undefined4 FUN_14955d1e1(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  uint uVar6;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (*DAT_14c765d78)();
  }
  uVar6 = 0;
  if (param_2 == 0) {
LAB_14955d20c:
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + (ulonglong)uVar6 * 0x20);
    if (lVar2 != 0) {
      if ((*(char *)(lVar2 + 0x11) != '\0') &&
         (*(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1, *(char *)(lVar2 + 0x12) == '\0')) {
        FUN_14956624a(lVar2);
      }
      plVar3 = *(longlong **)(**(longlong **)(lVar2 + 8) + 0x48);
      lVar4 = *plVar3;
      if (lVar4 == 0) {
        uVar5 = 0xc;
      }
      else {
        uVar5 = (**(code **)(lVar4 + 0x50))(plVar3,param_3,param_4);
      }
      if (*(char *)(lVar2 + 0x11) != '\0') {
        piVar1 = (int *)(lVar2 + 0x14);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1495662d2(lVar2);
        }
      }
      goto LAB_14955d281;
    }
  }
  else {
    uVar6 = FUN_149555d2a(param_1,param_2);
    if (-1 < (int)uVar6) goto LAB_14955d20c;
  }
  uVar5 = 1;
LAB_14955d281:
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (*DAT_14c765d88)();
  }
  return uVar5;
}



// FUNCTION 14955d2a6 FUN_14955d2a6 body=257 status=ok
// SIG undefined FUN_14955d2a6(void)

undefined4 FUN_14955d2a6(longlong param_1,uint param_2,uint param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0')) {
    FUN_14956624a(param_1);
  }
  if ((*(byte *)((longlong)puVar3 + 0x26) & 2) == 0) {
    if ((int)param_3 < 0) {
      param_3 = *(int *)(puVar3 + 6) - *(int *)((longlong)puVar3 + 0x34);
    }
    if ((param_2 - 0x200 < 0xfe01) && ((param_2 + 0x1ffff & param_2) == 0)) {
      *(uint *)(puVar3 + 6) = param_2;
      if (puVar3[0x10] != 0) {
        puVar3[0x10] = puVar3[0x10] + -4;
        FUN_14956234e();
        puVar3[0x10] = 0;
      }
    }
    uVar4 = FUN_14955ef5f(*puVar3,puVar3 + 6,param_3);
    *(uint *)((longlong)puVar3 + 0x34) = *(int *)(puVar3 + 6) - (param_3 & 0xffff);
    if (param_4 != 0) {
      *(byte *)((longlong)puVar3 + 0x26) = *(byte *)((longlong)puVar3 + 0x26) | 2;
    }
    if (*(char *)(param_1 + 0x11) == '\0') {
      return uVar4;
    }
    piVar1 = (int *)(param_1 + 0x14);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
  }
  else {
    if (*(char *)(param_1 + 0x11) == '\0') {
      return 8;
    }
    piVar1 = (int *)(param_1 + 0x14);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    uVar4 = 8;
  }
  if (iVar2 == 0) {
    FUN_1495662d2(param_1);
  }
  return uVar4;
}



// FUNCTION 14955d3a7 FUN_14955d3a7 body=187 status=ok
// SIG undefined FUN_14955d3a7(void)

char * FUN_14955d3a7(char *param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  ulonglong uVar4;
  char *pcVar5;
  
  if (param_2 != (char *)0x0 && param_1 != (char *)0x0) {
    do {
      do {
        pcVar5 = param_1;
        param_1 = pcVar5 + -1;
      } while (pcVar5[-1] != '\0');
    } while (((pcVar5[-2] != '\0') || (pcVar5[-3] != '\0')) || (pcVar5[-4] != '\0'));
    if (pcVar5 == (char *)0x0) {
      uVar4 = 0;
    }
    else {
      sVar3 = strlen(pcVar5);
      uVar4 = (ulonglong)((uint)sVar3 & 0x3fffffff);
    }
    if (pcVar5[uVar4 + 1] != '\0') {
      pcVar5 = pcVar5 + uVar4 + 1;
      do {
        iVar1 = strcmp(pcVar5,param_2);
        if (pcVar5 == (char *)0x0) {
          uVar2 = 0;
        }
        else {
          sVar3 = strlen(pcVar5);
          uVar2 = (uint)sVar3 & 0x3fffffff;
        }
        pcVar5 = pcVar5 + (ulonglong)uVar2 + 1;
        if (iVar1 == 0) {
          return pcVar5;
        }
        if (pcVar5 == (char *)0x0) {
          uVar4 = 0;
        }
        else {
          sVar3 = strlen(pcVar5);
          uVar4 = (ulonglong)((uint)sVar3 & 0x3fffffff);
        }
        pcVar5 = pcVar5 + uVar4 + 1;
      } while (*pcVar5 != '\0');
    }
  }
  return (char *)0x0;
}



// FUNCTION 14955d462 FUN_14955d462 body=216 status=ok
// SIG undefined FUN_14955d462(void)

ulonglong FUN_14955d462(char *param_1,ulonglong *param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  size_t sVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if ((*param_1 == '0') && ((byte)(param_1[1] | 0x20U) == 0x78)) {
    uVar3 = 1;
    do {
      lVar1 = uVar3 + 1;
      uVar3 = uVar3 + 1;
    } while (param_1[lVar1] == '0');
    iVar2 = (int)uVar3;
    uVar8 = (ulonglong)(byte)param_1[uVar3 & 0xffffffff];
    if (((&DAT_14bd400b0)[uVar8] & 8) == 0) {
      uVar7 = 0;
      uVar3 = uVar3 & 0xffffffff;
      iVar5 = iVar2;
    }
    else {
      uVar7 = 0;
      do {
        uVar7 = (ulonglong)(((char)((char)uVar8 * '\x02') >> 7 & 9U) + (char)uVar8 & 0xf) |
                uVar7 << 4;
        uVar8 = (ulonglong)(byte)param_1[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (((&DAT_14bd400b0)[uVar8] & 8) != 0);
      iVar5 = (int)uVar3;
    }
    *param_2 = uVar7;
    return (ulonglong)((uint)(0x10 < iVar5 - iVar2 || param_1[uVar3] != '\0') * 2);
  }
  uVar6 = 0;
  if (param_1 != (char *)0x0) {
    sVar4 = strlen(param_1);
    uVar6 = (uint)sVar4 & 0x3fffffff;
  }
  uVar3 = FUN_14956c622(param_1,param_2,uVar6,1);
  return uVar3;
}



// FUNCTION 14955d53a FUN_14955d53a body=288 status=ok
// SIG undefined FUN_14955d53a(void)

undefined8 FUN_14955d53a(longlong param_1)

{
  undefined *puVar1;
  uint uVar2;
  longlong lVar3;
  size_t sVar4;
  char cVar5;
  longlong lVar6;
  byte bVar7;
  char *_Str;
  char cVar8;
  int iVar9;
  uint uVar10;
  
  lVar3 = 0;
  do {
    if ((ulonglong)*(byte *)(param_1 + lVar3) == 0) {
      cVar8 = (&DAT_14bd3ff30)[(byte)"SQLITE_"[lVar3]];
      cVar5 = '\0';
LAB_14955d589:
      lVar3 = 7;
      if (cVar5 != cVar8) {
        lVar3 = 0;
      }
      goto LAB_14955d597;
    }
    cVar5 = (&DAT_14bd3ff30)[*(byte *)(param_1 + lVar3)];
    cVar8 = (&DAT_14bd3ff30)[(byte)"SQLITE_"[lVar3]];
    if (cVar5 != cVar8) goto LAB_14955d589;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 7);
  lVar3 = 7;
LAB_14955d597:
  lVar6 = 0;
  uVar2 = 0;
  _Str = (char *)(param_1 + lVar3);
  if (_Str != (char *)0x0) {
    sVar4 = strlen(_Str);
    uVar2 = (uint)sVar4 & 0x3fffffff;
  }
  do {
    puVar1 = (&PTR_s_COMPILER_clang_19_1_1_14bd4a000)[lVar6];
    if (_Str == (char *)0x0) {
      iVar9 = -(uint)(puVar1 != (undefined *)0x0);
LAB_14955d614:
      if (iVar9 == 0) goto LAB_14955d619;
    }
    else if (puVar1 != (undefined *)0x0) {
      if ((ulonglong)uVar2 != 0) {
        lVar3 = 0;
        iVar9 = uVar2 + 1;
        do {
          if ((ulonglong)(byte)_Str[lVar3] == 0) {
            bVar7 = (&DAT_14bd3ff30)[(byte)puVar1[lVar3]];
            uVar10 = 0;
LAB_14955d637:
            iVar9 = uVar10 - bVar7;
            goto LAB_14955d614;
          }
          uVar10 = (uint)(byte)(&DAT_14bd3ff30)[(byte)_Str[lVar3]];
          bVar7 = (&DAT_14bd3ff30)[(byte)puVar1[lVar3]];
          if ((&DAT_14bd3ff30)[(byte)_Str[lVar3]] != bVar7) goto LAB_14955d637;
          iVar9 = iVar9 + -1;
          lVar3 = lVar3 + 1;
        } while (1 < iVar9);
      }
LAB_14955d619:
      if (((&DAT_14bd400b0)[(byte)puVar1[uVar2]] & 0x46) == 0) {
        return 1;
      }
    }
    lVar6 = lVar6 + 1;
    if (lVar6 == 0xc) {
      return 0;
    }
  } while( true );
}



// FUNCTION 14955d65a FUN_14955d65a body=90 status=ok
// SIG undefined FUN_14955d65a(void)

void FUN_14955d65a(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  
  if (param_1 == 0) {
LAB_14955d6ac:
    FUN_145e3b961(param_2);
    return;
  }
  if (*(longlong *)(param_1 + 0x2d8) == 0) {
    if (param_2 < *(undefined8 **)(param_1 + 0x1c8)) {
      if (*(undefined8 **)(param_1 + 0x1b8) <= param_2) {
        *param_2 = *(undefined8 *)(param_1 + 0x1b0);
        *(undefined8 **)(param_1 + 0x1b0) = param_2;
        return;
      }
      if (*(undefined8 **)(param_1 + 0x1c0) <= param_2) {
        *param_2 = *(undefined8 *)(param_1 + 0x1a0);
        *(undefined8 **)(param_1 + 0x1a0) = param_2;
        return;
      }
    }
    goto LAB_14955d6ac;
  }
  if (param_2 < *(undefined8 **)(param_1 + 0x1c8)) {
    uVar1 = 0x80;
    if (*(undefined8 **)(param_1 + 0x1b8) <= param_2) goto LAB_14955d6e5;
    if (*(undefined8 **)(param_1 + 0x1c0) <= param_2) {
      uVar1 = (uint)*(ushort *)(param_1 + 0x17e);
      goto LAB_14955d6e5;
    }
  }
  uVar1 = (*DAT_14c765d30)(param_2);
LAB_14955d6e5:
  **(int **)(param_1 + 0x2d8) = **(int **)(param_1 + 0x2d8) + uVar1;
  return;
}



// FUNCTION 14955d6b4 FUN_14955d6b4 body=73 status=ok
// SIG undefined FUN_14955d6b4(void)

void FUN_14955d6b4(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  
  if (param_2 < *(ulonglong *)(param_1 + 0x1c8)) {
    uVar1 = 0x80;
    if (*(ulonglong *)(param_1 + 0x1b8) <= param_2) goto LAB_14955d6e5;
    if (*(ulonglong *)(param_1 + 0x1c0) <= param_2) {
      uVar1 = (uint)*(ushort *)(param_1 + 0x17e);
      goto LAB_14955d6e5;
    }
  }
  uVar1 = (*DAT_14c765d30)(param_2);
LAB_14955d6e5:
  **(int **)(param_1 + 0x2d8) = **(int **)(param_1 + 0x2d8) + uVar1;
  return;
}



// FUNCTION 14955d6fd FUN_14955d6fd body=83 status=ok
// SIG undefined FUN_14955d6fd(void)

void * FUN_14955d6fd(longlong param_1,void *param_2,ulonglong param_3)

{
  void *pvVar1;
  size_t _Size;
  
  if (param_2 == (void *)0x0) {
    pvVar1 = (void *)FUN_14955d750(param_1,param_3);
    return pvVar1;
  }
  if (param_2 < *(void **)(param_1 + 0x1c8)) {
    if (param_2 < *(void **)(param_1 + 0x1b8)) {
      if ((*(void **)(param_1 + 0x1c0) <= param_2) && (param_3 <= *(ushort *)(param_1 + 0x17e))) {
        return param_2;
      }
    }
    else if (param_3 < 0x81) {
      return param_2;
    }
  }
  if (*(char *)(param_1 + 0x61) == '\0') {
    if ((param_2 < *(void **)(param_1 + 0x1c0)) || (*(void **)(param_1 + 0x1c8) <= param_2)) {
      pvVar1 = (void *)FUN_1495539bb(param_2,param_3);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if ((*(char *)(param_1 + 0x61) == '\0') && (*(char *)(param_1 + 0x62) == '\0')) {
        *(undefined1 *)(param_1 + 0x61) = 1;
        if (0 < *(int *)(param_1 + 0xd4)) {
          *(undefined4 *)(param_1 + 0x170) = 1;
        }
        *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
        *(undefined2 *)(param_1 + 0x17c) = 0;
        if (*(longlong *)(param_1 + 0x138) != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x138) + 0x18) = 7;
        }
      }
    }
    else {
      pvVar1 = (void *)FUN_14955d750(param_1,param_3);
      if (pvVar1 != (void *)0x0) {
        _Size = 0x80;
        if (param_2 < *(void **)(param_1 + 0x1b8)) {
          _Size = (size_t)*(ushort *)(param_1 + 0x17e);
        }
        memcpy(pvVar1,param_2,_Size);
        if (param_2 == (void *)0x0) {
          return pvVar1;
        }
        FUN_14955d65a(param_1,param_2);
        return pvVar1;
      }
    }
  }
  return (void *)0x0;
}



// FUNCTION 14955d750 FUN_14955d750 body=166 status=ok
// SIG undefined FUN_14955d750(void)

undefined8 * FUN_14955d750(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  if (*(ushort *)(param_1 + 0x17c) < param_2) {
    if (*(int *)(param_1 + 0x178) == 0) {
      *(int *)(param_1 + 0x18c) = *(int *)(param_1 + 0x18c) + 1;
      puVar1 = (undefined8 *)FUN_14955d8d8();
      return puVar1;
    }
    if (*(char *)(param_1 + 0x61) != '\0') {
      return (undefined8 *)0x0;
    }
    puVar1 = (undefined8 *)FUN_145e3bd67(param_2);
    if (((puVar1 == (undefined8 *)0x0) && (*(char *)(param_1 + 0x61) == '\0')) &&
       (*(char *)(param_1 + 0x62) == '\0')) {
      *(undefined1 *)(param_1 + 0x61) = 1;
      if (0 < *(int *)(param_1 + 0xd4)) {
        *(undefined4 *)(param_1 + 0x170) = 1;
      }
      *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
      *(undefined2 *)(param_1 + 0x17c) = 0;
      if (*(longlong *)(param_1 + 0x138) != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x138) + 0x18) = 7;
      }
    }
    return puVar1;
  }
  if (param_2 < 0x81) {
    puVar1 = *(undefined8 **)(param_1 + 0x1b0);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x1b0) = *puVar1;
      goto LAB_14955d7c1;
    }
    puVar1 = *(undefined8 **)(param_1 + 0x1a8);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x1a8) = *puVar1;
      goto LAB_14955d7c1;
    }
  }
  puVar1 = *(undefined8 **)(param_1 + 0x1a0);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x198);
    if (puVar1 == (undefined8 *)0x0) {
      *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
      puVar1 = (undefined8 *)FUN_14955d8d8();
      return puVar1;
    }
    *(undefined8 *)(param_1 + 0x198) = *puVar1;
  }
  else {
    *(undefined8 *)(param_1 + 0x1a0) = *puVar1;
  }
LAB_14955d7c1:
  *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) + 1;
  return puVar1;
}



// FUNCTION 14955d7f6 FUN_14955d7f6 body=226 status=ok
// SIG undefined FUN_14955d7f6(void)

void * FUN_14955d7f6(longlong param_1,void *param_2,undefined8 param_3)

{
  void *pvVar1;
  size_t _Size;
  
  if (*(char *)(param_1 + 0x61) == '\0') {
    if ((param_2 < *(void **)(param_1 + 0x1c0)) || (*(void **)(param_1 + 0x1c8) <= param_2)) {
      pvVar1 = (void *)FUN_1495539bb(param_2,param_3);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if ((*(char *)(param_1 + 0x61) == '\0') && (*(char *)(param_1 + 0x62) == '\0')) {
        *(undefined1 *)(param_1 + 0x61) = 1;
        if (0 < *(int *)(param_1 + 0xd4)) {
          *(undefined4 *)(param_1 + 0x170) = 1;
        }
        *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
        *(undefined2 *)(param_1 + 0x17c) = 0;
        if (*(longlong *)(param_1 + 0x138) != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x138) + 0x18) = 7;
        }
      }
    }
    else {
      pvVar1 = (void *)FUN_14955d750(param_1,param_3);
      if (pvVar1 != (void *)0x0) {
        _Size = 0x80;
        if (param_2 < *(void **)(param_1 + 0x1b8)) {
          _Size = (size_t)*(ushort *)(param_1 + 0x17e);
        }
        memcpy(pvVar1,param_2,_Size);
        if (param_2 == (void *)0x0) {
          return pvVar1;
        }
        FUN_14955d65a(param_1,param_2);
        return pvVar1;
      }
    }
  }
  return (void *)0x0;
}



// FUNCTION 14955d8d8 FUN_14955d8d8 body=98 status=ok
// SIG undefined FUN_14955d8d8(void)

void FUN_14955d8d8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_145e3bd67(param_2);
  if (((lVar1 == 0) && (*(char *)(param_1 + 0x61) == '\0')) && (*(char *)(param_1 + 0x62) == '\0'))
  {
    *(undefined1 *)(param_1 + 0x61) = 1;
    if (0 < *(int *)(param_1 + 0xd4)) {
      *(undefined4 *)(param_1 + 0x170) = 1;
    }
    *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
    *(undefined2 *)(param_1 + 0x17c) = 0;
    if (*(longlong *)(param_1 + 0x138) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x138) + 0x18) = 7;
    }
  }
  return;
}



// FUNCTION 14955d93a FUN_14955d93a body=102 status=ok
// SIG undefined FUN_14955d93a(void)

void * FUN_14955d93a(longlong *param_1)

{
  void *_Dst;
  
  if (*param_1 == 0) {
    _Dst = (void *)FUN_145e3bd67((int)param_1[3] + 1);
  }
  else {
    _Dst = (void *)FUN_14955d750();
  }
  if (_Dst == (void *)0x0) {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 7;
    if (*(int *)((longlong)param_1 + 0x14) != 0) {
      FUN_1495557eb(param_1);
    }
  }
  else {
    memcpy(_Dst,(void *)param_1[1],(ulonglong)((int)param_1[3] + 1));
    *(byte *)((longlong)param_1 + 0x1d) = *(byte *)((longlong)param_1 + 0x1d) | 4;
  }
  param_1[1] = (longlong)_Dst;
  return _Dst;
}



// FUNCTION 14955d9a0 FUN_14955d9a0 body=28 status=ok
// SIG undefined FUN_14955d9a0(void)

undefined8 FUN_14955d9a0(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x2c) & 1) != 0) {
    FUN_145e3b961(*(undefined8 *)(param_1 + 0x20));
  }
  return 0;
}



// FUNCTION 14955d9bc FUN_14955d9bc body=99 status=ok
// SIG undefined FUN_14955d9bc(void)

undefined8 FUN_14955d9bc(longlong param_1,void *param_2,int param_3,longlong param_4)

{
  undefined8 uVar1;
  size_t sVar2;
  
  sVar2 = (size_t)param_3;
  if (*(longlong *)(param_1 + 8) < (longlong)(sVar2 + param_4)) {
    memset(param_2,0,sVar2);
    uVar1 = 0x20a;
    sVar2 = *(longlong *)(param_1 + 8) - param_4;
    if (sVar2 != 0 && param_4 <= *(longlong *)(param_1 + 8)) {
      memcpy(param_2,(void *)(param_4 + *(longlong *)(param_1 + 0x20)),sVar2);
    }
  }
  else {
    memcpy(param_2,(void *)(param_4 + *(longlong *)(param_1 + 0x20)),sVar2);
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 14955da1f FUN_14955da1f body=190 status=ok
// SIG undefined FUN_14955da1f(void)

undefined8 FUN_14955da1f(longlong param_1,void *param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(uint *)(param_1 + 0x2c) & 4) != 0) {
    return 8;
  }
  lVar1 = param_3 + param_4;
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 < lVar1) {
    if (*(longlong *)(param_1 + 0x10) < lVar1) {
      if ((*(uint *)(param_1 + 0x2c) & 2) == 0) {
        return 0xd;
      }
      if (0 < *(int *)(param_1 + 0x28)) {
        return 0xd;
      }
      lVar3 = *(longlong *)(param_1 + 0x18);
      if (lVar3 < lVar1) {
        return 0xd;
      }
      if (lVar1 * 2 < lVar3) {
        lVar3 = lVar1 * 2;
      }
      lVar2 = FUN_1495539bb(*(undefined8 *)(param_1 + 0x20));
      if (lVar2 == 0) {
        return 7;
      }
      *(longlong *)(param_1 + 0x20) = lVar2;
      *(longlong *)(param_1 + 0x10) = lVar3;
      lVar3 = *(longlong *)(param_1 + 8);
    }
    if (param_4 - lVar3 != 0 && lVar3 <= param_4) {
      memset((void *)(lVar3 + *(longlong *)(param_1 + 0x20)),0,param_4 - lVar3);
    }
    *(longlong *)(param_1 + 8) = lVar1;
  }
  memcpy((void *)(param_4 + *(longlong *)(param_1 + 0x20)),param_2,(longlong)param_3);
  return 0;
}



// FUNCTION 14955db12 FUN_14955db12 body=86 status=ok
// SIG undefined FUN_14955db12(void)

undefined8 FUN_14955db12(longlong param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  bool bVar2;
  
  if (param_2 == 0x24) {
    lVar1 = *param_3;
    if ((lVar1 < *(longlong *)(param_1 + 8)) &&
       (bVar2 = lVar1 < 0, lVar1 = *(longlong *)(param_1 + 8), bVar2)) {
      lVar1 = *(longlong *)(param_1 + 0x18);
    }
    *(longlong *)(param_1 + 0x18) = lVar1;
  }
  else {
    if (param_2 != 0xc) {
      return 0xc;
    }
    lVar1 = FUN_1495558d3("memdb(%p,%lld)",*(undefined8 *)(param_1 + 0x20),
                          *(undefined8 *)(param_1 + 8));
  }
  *param_3 = lVar1;
  return 0;
}



// FUNCTION 14955db91 FUN_14955db91 body=75 status=ok
// SIG undefined FUN_14955db91(void)

void FUN_14955db91(undefined8 *param_1)

{
  short *psVar1;
  longlong lVar2;
  
  if ((*(byte *)((longlong)param_1 + 0x34) & 0x20) != 0) {
    lVar2 = param_1[5];
    *(int *)(lVar2 + 0x98) = *(int *)(lVar2 + 0x98) + -1;
    param_1[4] = *(undefined8 *)(lVar2 + 0xa8);
    *(undefined8 **)(lVar2 + 0xa8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014955dbd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(lVar2 + 0x48) + 0x90))
              (*(longlong **)(lVar2 + 0x48),
               (longlong)*(int *)(lVar2 + 0xbc) * (ulonglong)(*(int *)(param_1 + 6) - 1),param_1[1])
    ;
    return;
  }
  *(int *)(param_1[3] + 0x18) = *(int *)(param_1[3] + 0x18) + -1;
  psVar1 = (short *)((longlong)param_1 + 0x36);
  *psVar1 = *psVar1 + -1;
  if (*psVar1 == 0) {
    if ((*(byte *)((longlong)param_1 + 0x34) & 1) == 0) {
      FUN_14955dc15(param_1,3);
      return;
    }
    if (*(char *)(param_1[3] + 0x2c) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014955dc0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14c765de0)(*(undefined8 *)(param_1[3] + 0x40),*param_1,0,DAT_14c765de0);
      return;
    }
  }
  return;
}



// FUNCTION 14955dbdc FUN_14955dbdc body=57 status=ok
// SIG undefined FUN_14955dbdc(void)

void FUN_14955dbdc(undefined8 *param_1)

{
  short *psVar1;
  
  *(int *)(param_1[3] + 0x18) = *(int *)(param_1[3] + 0x18) + -1;
  psVar1 = (short *)((longlong)param_1 + 0x36);
  *psVar1 = *psVar1 + -1;
  if (*psVar1 == 0) {
    if ((*(byte *)((longlong)param_1 + 0x34) & 1) == 0) {
      FUN_14955dc15(param_1,3);
      return;
    }
    if (*(char *)(param_1[3] + 0x2c) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014955dc0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14c765de0)(*(undefined8 *)(param_1[3] + 0x40),*param_1,0,DAT_14c765de0);
      return;
    }
  }
  return;
}



// FUNCTION 14955dc15 FUN_14955dc15 body=142 status=ok
// SIG undefined FUN_14955dc15(void)

void FUN_14955dc15(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if ((param_2 & 1) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (plVar1[2] == param_1) {
      plVar1[2] = lVar3;
    }
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0x40);
    if (*(longlong *)(param_1 + 0x38) == 0) {
      plVar4 = plVar1 + 1;
    }
    *plVar4 = lVar3;
    lVar2 = *(longlong *)(param_1 + 0x38);
    if (lVar3 == 0) {
      *plVar1 = lVar2;
      if (lVar2 == 0) {
        *(undefined1 *)((longlong)plVar1 + 0x2d) = 2;
      }
    }
    else {
      *(longlong *)(lVar3 + 0x38) = lVar2;
    }
  }
  if ((param_2 & 2) != 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    lVar3 = *plVar1;
    *(longlong *)(param_1 + 0x38) = lVar3;
    if (lVar3 == 0) {
      plVar1[1] = param_1;
      if (*(char *)((longlong)plVar1 + 0x2c) != '\0') {
        *(undefined1 *)((longlong)plVar1 + 0x2d) = 1;
      }
    }
    else {
      *(longlong *)(lVar3 + 0x40) = param_1;
    }
    *plVar1 = param_1;
    if ((plVar1[2] == 0) && ((*(byte *)(param_1 + 0x34) & 8) == 0)) {
      plVar1[2] = param_1;
    }
  }
  return;
}



// FUNCTION 14955dca3 FUN_14955dca3 body=93 status=ok
// SIG undefined FUN_14955dca3(void)

void FUN_14955dca3(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x28) < 1) {
    uVar2 = 1;
  }
  else {
    uVar2 = 1;
    lVar4 = 8;
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar4);
      if ((lVar1 != 0) && (*(char *)(lVar1 + 0x11) != '\0')) {
        *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
        if (*(char *)(lVar1 + 0x12) == '\0') {
          FUN_14956624a();
        }
        uVar2 = 0;
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x20;
    } while (lVar3 < *(int *)(param_1 + 0x28));
  }
  *(undefined1 *)(param_1 + 0x69) = uVar2;
  return;
}



// FUNCTION 14955dd00 FUN_14955dd00 body=80 status=ok
// SIG undefined FUN_14955dd00(void)

void FUN_14955dd00(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar4 = 8;
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar4);
      if ((lVar2 != 0) && (*(char *)(lVar2 + 0x11) != '\0')) {
        piVar1 = (int *)(lVar2 + 0x14);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1495662d2();
        }
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x20;
    } while (lVar3 < *(int *)(param_1 + 0x28));
  }
  return;
}



// FUNCTION 14955dd50 FUN_14955dd50 body=239 status=ok
// SIG undefined FUN_14955dd50(void)

undefined1 * FUN_14955dd50(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined1 *local_80;
  undefined4 local_78;
  int local_74;
  uint local_70;
  ushort local_6c;
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_74 = *(int *)(param_1 + 0x7c);
  local_80 = local_68;
  local_78 = 0x46;
  local_70 = 0;
  local_6c = 0x100;
  local_88 = param_1;
  FUN_149553b5b(&local_88);
  if (local_80 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    local_80[local_70] = 0;
    puVar1 = local_80;
    if ((local_74 != 0) && ((local_6c & 0x400) == 0)) {
      puVar1 = (undefined1 *)FUN_14955d93a(&local_88);
    }
  }
  if ((((char)local_6c == '\a') && (*(char *)(param_1 + 0x61) == '\0')) &&
     (*(char *)(param_1 + 0x62) == '\0')) {
    *(undefined1 *)(param_1 + 0x61) = 1;
    if (0 < *(int *)(param_1 + 0xd4)) {
      *(undefined4 *)(param_1 + 0x170) = 1;
    }
    *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
    *(undefined2 *)(param_1 + 0x17c) = 0;
    if (*(longlong *)(param_1 + 0x138) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x138) + 0x18) = 7;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14955de40 FUN_14955de40 body=103 status=ok
// SIG undefined FUN_14955de40(void)

void FUN_14955de40(longlong *param_1,uint param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  lVar1 = param_1[0x2d];
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 9) & 0x24) == 0) {
      *(undefined2 *)(lVar1 + 8) = 1;
    }
    else {
      FUN_14956b5ca();
    }
  }
  if ((param_2 & 0xfb) == 10 && param_2 != 0xc0a) {
    pcVar2 = *(code **)(*param_1 + 0x80);
    if (pcVar2 == (code *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (*pcVar2)(*param_1,0,0);
    }
    *(undefined4 *)(param_1 + 0xb) = uVar3;
  }
  return;
}



// FUNCTION 14955dea7 FUN_14955dea7 body=256 status=ok
// SIG undefined FUN_14955dea7(void)

undefined8 FUN_14955dea7(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)*param_1;
  uVar3 = 0;
  if ((*(longlong *)(puVar1[4] + 0x28) != 0) || (*(char *)((longlong)param_1 + 0x113) != '\0'))
  goto LAB_14955ded9;
  local_30 = 0x21e;
  local_38 = 0;
  iVar2 = FUN_14955dfa8(*puVar1,0,puVar1,&local_28);
  if (iVar2 == 0) {
    *(undefined8 *)(puVar1[4] + 0x28) = local_28;
    uVar3 = 0;
    iVar2 = FUN_14955d2a6(local_28,*(undefined4 *)((longlong)puVar1 + 0x6c),0xffffffff,0);
    if (iVar2 != 7) goto LAB_14955ded9;
    if ((*(char *)((longlong)puVar1 + 0x61) == '\0') && (*(char *)((longlong)puVar1 + 0x62) == '\0')
       ) {
      *(undefined1 *)((longlong)puVar1 + 0x61) = 1;
      if (0 < *(int *)((longlong)puVar1 + 0xd4)) {
        *(undefined4 *)(puVar1 + 0x2e) = 1;
      }
      *(int *)(puVar1 + 0x2f) = *(int *)(puVar1 + 0x2f) + 1;
      *(undefined2 *)((longlong)puVar1 + 0x17c) = 0;
      param_1 = (longlong *)puVar1[0x27];
      iVar2 = 7;
      if (param_1 != (longlong *)0x0) goto LAB_14955df9b;
    }
  }
  else {
    FUN_14955a364(param_1,"unable to open a temporary database file for storing temporary tables");
LAB_14955df9b:
    *(int *)(param_1 + 3) = iVar2;
  }
  uVar3 = 1;
LAB_14955ded9:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14955dfa8 FUN_14955dfa8 body=3894 status=ok
// SIG undefined FUN_14955dfa8(void)

uint FUN_14955dfa8(ulonglong param_1,char *param_2,longlong param_3,undefined8 *param_4,uint param_5
                  ,uint param_6)

{
  undefined8 *puVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  char *pcVar9;
  code *pcVar10;
  ulonglong *puVar11;
  undefined7 uVar15;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong *plVar16;
  longlong lVar17;
  longlong *plVar18;
  size_t sVar19;
  char *pcVar20;
  byte bVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  longlong *plVar25;
  longlong *plVar26;
  ulonglong uVar27;
  uint uVar28;
  bool bVar29;
  undefined1 auStack_158 [32];
  uint *local_138;
  undefined8 local_130;
  ulonglong local_128;
  size_t local_120;
  ulonglong local_118;
  ulonglong *local_110;
  ulonglong local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  char *local_f0;
  longlong local_e8;
  longlong *local_e0;
  uint local_d4;
  ulonglong *local_d0;
  size_t local_c8;
  uint local_bc;
  ulonglong local_b8 [2];
  byte bStack_a7;
  byte bStack_a4;
  ulonglong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_128 = param_1;
  if (param_2 == (char *)0x0) {
LAB_14955dfee:
    bVar29 = true;
    if (*(char *)(param_3 + 0x60) == '\x02') goto LAB_14955dffc;
LAB_14955e08f:
    uVar4 = (param_6 & 0x80) >> 7;
    param_5 = param_5 | (param_6 & 0x80) >> 6;
  }
  else {
    cVar3 = *param_2;
    bVar29 = cVar3 == '\0';
    iVar23 = strcmp(param_2,":memory:");
    if (iVar23 != 0) {
      if (cVar3 == '\0') goto LAB_14955dfee;
      bVar29 = false;
      goto LAB_14955e08f;
    }
LAB_14955dffc:
    param_5 = param_5 | 2;
    uVar4 = 1;
  }
  bVar2 = (byte)uVar4;
  uVar22 = param_6 & 0xfffffcff | 0x200;
  if (uVar4 == 0 && !bVar29) {
    uVar22 = param_6;
  }
  if ((param_6 & 0x100) == 0) {
    uVar22 = param_6;
  }
  plVar7 = (longlong *)FUN_145e3bd67(0x48);
  uVar4 = 7;
  if (plVar7 == (longlong *)0x0) goto LAB_14955e038;
  local_d0 = (ulonglong *)(plVar7 + 1);
  plVar7[5] = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[8] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = param_3;
  plVar7[6] = (longlong)plVar7;
  *(undefined4 *)(plVar7 + 7) = 1;
  local_e8 = param_3;
  local_e0 = plVar7;
  if (bVar29) {
    uVar12 = 0;
  }
  else {
    uVar5 = 0;
    uVar12 = 0;
    if ((uVar22 >> 0x11 & 1) != 0 && ((uVar22 & 0x40) == 0 & bVar2) == 0) {
      if (param_2 != (char *)0x0) {
        sVar19 = strlen(param_2);
        uVar5 = (uint)sVar19 & 0x3fffffff;
      }
      local_118 = (ulonglong)(uVar5 + 1);
      uVar28 = *(int *)(local_128 + 8) + 1;
      uVar12 = local_118;
      if ((int)(uVar5 + 1) < (int)uVar28) {
        uVar12 = (ulonglong)uVar28;
      }
      pcVar9 = (char *)FUN_145e3bd67(uVar12);
      *(undefined1 *)((longlong)local_e0 + 0x11) = 1;
      if (pcVar9 == (char *)0x0) {
LAB_14955e270:
        FUN_145e3b961(local_e0);
        goto LAB_14955e038;
      }
      if (bVar2 == 0) {
        *pcVar9 = '\0';
        uVar4 = (**(code **)(local_128 + 0x40))(local_128,param_2,uVar28,pcVar9);
        if ((uVar4 & 0xfffffdff) != 0) {
          FUN_145e3b961(pcVar9);
          goto LAB_14955e270;
        }
      }
      else {
        memcpy(pcVar9,param_2,local_118 & 0xffffffff);
      }
      uVar6 = 1;
      if (DAT_14c765cfc == '\0') {
        sVar19 = 0;
        local_130 = (ulonglong *)CONCAT71(local_130._1_7_,1);
        local_118 = 0;
      }
      else {
        local_118 = (*DAT_14c765d68)();
        bVar29 = local_118 == 0;
        if (!bVar29) {
          (*DAT_14c765d78)();
        }
        local_130 = (ulonglong *)CONCAT71(local_130._1_7_,bVar29);
        if ((DAT_14c765cfc == '\0') || (sVar19 = (*DAT_14c765d68)(), sVar19 == 0)) {
          sVar19 = 0;
        }
        else {
          (*DAT_14c765d78)(sVar19);
          uVar6 = 0;
        }
      }
      if (DAT_14cc1ee10 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        local_108 = CONCAT44(local_108._4_4_,uVar6);
        plVar7 = DAT_14cc1ee10;
        local_120 = sVar19;
        do {
          puVar11 = (ulonglong *)*plVar7;
          iVar23 = strcmp(pcVar9,(char *)puVar11[0x1a]);
          sVar19 = local_120;
          uVar6 = (int)local_108;
          if ((iVar23 == 0) && (*puVar11 == local_128)) {
            lVar17 = (longlong)*(int *)(local_e8 + 0x28);
            if (lVar17 < 1) goto LAB_14955ec09;
            uVar12 = lVar17 + 1;
            plVar16 = (longlong *)(lVar17 * 0x20 + *(longlong *)(local_e8 + 0x20) + -0x18);
            goto LAB_14955ed18;
          }
          plVar7 = (longlong *)plVar7[0xd];
        } while (plVar7 != (longlong *)0x0);
        plVar7 = (longlong *)0x0;
      }
      goto LAB_14955e500;
    }
  }
LAB_14955e0f2:
  plVar7 = (longlong *)FUN_145e3bd67(0x88);
  uVar4 = 7;
  if (plVar7 != (longlong *)0x0) {
    memset(plVar7,0,0x88);
    local_b8[0] = CONCAT44(local_b8[0]._4_4_,0x1000);
    iVar23 = 0x58;
    if (0x58 < *(int *)(local_128 + 4)) {
      iVar23 = *(int *)(local_128 + 4);
    }
    *plVar7 = 0;
    local_d4 = param_5 & 2;
    iVar24 = 1;
    local_118 = uVar12;
    local_100 = param_4;
    if (local_d4 == 0) {
      if (param_2 == (char *)0x0) {
        local_120 = 1;
        local_f0 = (char *)0x0;
        local_f8 = 0;
        goto LAB_14955e193;
      }
      if (*param_2 == '\0') {
        local_120 = 0;
        local_f8 = 0;
        local_f0 = param_2;
        goto LAB_14955e193;
      }
      local_108 = CONCAT44(local_108._4_4_,iVar23);
      iVar23 = *(int *)(local_128 + 8);
      puVar11 = (ulonglong *)FUN_145e3bd67((longlong)iVar23 * 2 + 2);
      uVar4 = 7;
      if (puVar11 == (ulonglong *)0x0) goto LAB_14955e64f;
      *(char *)puVar11 = '\0';
      uVar5 = (**(code **)(local_128 + 0x40))(local_128,param_2,iVar23 + 1,puVar11);
      uVar4 = (int)(uVar22 << 7) >> 0x1f & 0x60e;
      if (uVar5 != 0x200) {
        uVar4 = uVar5;
      }
      local_130 = puVar11;
      local_120 = strlen((char *)puVar11);
      sVar19 = strlen(param_2);
      uVar5 = (uint)sVar19 & 0x3fffffff;
      puVar11 = (ulonglong *)(param_2 + (ulonglong)uVar5 + 1);
      puVar8 = puVar11;
      if ((char)*puVar11 == '\0') {
        iVar23 = uVar5 + (int)param_2;
      }
      else {
        do {
          local_110 = puVar8;
          sVar19 = strlen((char *)puVar11);
          pcVar9 = (char *)(sVar19 + (longlong)puVar11);
          sVar19 = strlen((char *)((longlong)puVar11 + sVar19 + 1));
          puVar11 = (ulonglong *)(pcVar9 + sVar19 + 2);
          puVar8 = local_110;
        } while ((char)*puVar11 != '\0');
        iVar23 = (int)sVar19 + (int)pcVar9 + 1;
        puVar11 = local_110;
        param_4 = local_100;
      }
      puVar8 = local_130;
      if (uVar4 == 0) {
        uVar4 = (uint)local_120 & 0x3fffffff;
        uVar12 = (ulonglong)uVar4;
        if ((int)(uVar4 + 8) <= *(int *)(local_128 + 8)) {
          iVar24 = (iVar23 - (int)puVar11) + 2;
          local_120 = 0;
          local_f8 = 0;
          local_110 = puVar11;
          local_f0 = param_2;
          goto LAB_14955e19c;
        }
        local_138 = (uint *)0x14bd4063a;
        uVar4 = 0xe;
        FUN_14955599e(0xe,"%s at line %d of [%.10s]","cannot open file",0xdb9b);
        puVar8 = local_130;
      }
LAB_14955e64a:
      FUN_145e3b961(puVar8);
    }
    else if (param_2 == (char *)0x0) {
      local_f8 = 1;
      local_f0 = (char *)0x0;
      local_120 = 1;
LAB_14955e193:
      local_130 = (ulonglong *)0x0;
      uVar12 = 0;
      local_110 = (ulonglong *)0x0;
      local_108._0_4_ = iVar23;
LAB_14955e19c:
      local_c8 = (size_t)iVar24;
      uVar27 = (ulonglong)((int)local_108 + 7U & 0x7ffffff8);
      sVar19 = ((longlong)*(int *)(local_128 + 4) + 7U & 0xfffffffffffffff8) +
               uVar12 * 3 + uVar27 * 2 + local_c8 + 0x18e;
      local_108 = uVar12;
      puVar8 = (ulonglong *)FUN_145e3bd67(sVar19);
      if (puVar8 != (ulonglong *)0x0) {
        memset(puVar8,0,sVar19);
        uVar12 = local_108;
        puVar8[0x23] = (ulonglong)(puVar8 + 0x26);
        puVar8[9] = (ulonglong)(puVar8 + 0x2f);
        pcVar9 = (char *)((longlong)puVar8 +
                         ((longlong)*(int *)(local_128 + 4) + 7U & 0xfffffffffffffff8) + 0x178);
        puVar8[0xb] = (ulonglong)pcVar9;
        puVar8[10] = (ulonglong)(pcVar9 + uVar27);
        pcVar20 = pcVar9 + uVar27 + uVar27 + 4;
        puVar8[0x1a] = (ulonglong)pcVar20;
        if (local_108 == 0) {
          puVar8[0x1b] = 0;
          puVar8[0x25] = 0;
          param_4 = local_100;
        }
        else {
          memcpy(pcVar20,local_130,local_108);
          sVar19 = local_c8;
          if (local_110 == (ulonglong *)0x0) {
            lVar17 = uVar12 + 2;
          }
          else {
            memcpy(pcVar20 + uVar12 + 1,local_110,local_c8);
            lVar17 = sVar19 + uVar12 + 1;
          }
          param_4 = local_100;
          uVar12 = local_108;
          pcVar20 = pcVar20 + lVar17;
          puVar8[0x1b] = (ulonglong)pcVar20;
          local_110 = puVar8;
          memcpy(pcVar20,local_130,local_108);
          puVar11 = local_130;
          builtin_strncpy(pcVar9 + uVar12 + lVar17 + uVar27 + uVar27 + 4,"-journal",8);
          local_110[0x25] = (ulonglong)(pcVar20 + uVar12 + 9);
          memcpy(pcVar20 + uVar12 + 9,local_130,uVar12);
          puVar8 = local_110;
          builtin_strncpy(pcVar9 + local_108 + uVar12 + lVar17 + uVar27 + uVar27 + 0xd,"-wal",4);
          if (puVar11 != (ulonglong *)0x0) {
            FUN_145e3b961();
          }
        }
        *puVar8 = local_128;
        *(uint *)((longlong)puVar8 + 0xb4) = uVar22;
        if (((char)local_120 == '\0') && (*local_f0 != '\0')) {
          local_138 = &local_bc;
          local_bc = 0;
          uVar4 = (**(code **)(local_128 + 0x28))
                            (local_128,puVar8[0x1a],puVar8[9],uVar22 & 0x1087f7f);
          uVar22 = local_bc;
          if (uVar4 == 0) {
            uVar4 = local_bc & 1;
            bVar21 = (byte)uVar4;
            uVar6 = (**(code **)(*(longlong *)puVar8[9] + 0x60))();
            local_128 = CONCAT44(local_128._4_4_,uVar6);
            if (uVar4 == 0) {
              FUN_14955f2f7(puVar8);
              uVar4 = (uint)puVar8[0x17];
              if ((uint)local_b8[0] < uVar4) {
                if (uVar4 < 0x2001) {
                  local_b8[0] = CONCAT44(local_b8[0]._4_4_,uVar4);
                }
                else {
                  local_b8[0] = CONCAT44(local_b8[0]._4_4_,0x2000);
                }
              }
            }
            uVar12 = puVar8[0x1a];
            lVar17 = FUN_14955d3a7(uVar12,"nolock");
            if (lVar17 == 0) {
              bVar29 = false;
            }
            else {
              cVar3 = FUN_1495cab54(lVar17,1,0);
              bVar29 = cVar3 != '\0';
            }
            *(bool *)((longlong)puVar8 + 0x11) = bVar29;
            local_130 = (ulonglong *)(CONCAT44(local_130._4_4_,uVar22 >> 7) & 0xffffffff00000001);
            if (((uint)local_128 >> 0xd & 1) != 0) {
LAB_14955eec7:
              uVar22 = 1;
              goto LAB_14955e355;
            }
            lVar17 = FUN_14955d3a7(uVar12,"immutable");
            uVar14 = 0;
            if ((lVar17 != 0) && (uVar14 = FUN_1495cab54(lVar17,1,0), (char)uVar14 != '\0'))
            goto LAB_14955eec7;
            local_128 = CONCAT44(local_128._4_4_,(int)CONCAT71((int7)((ulonglong)uVar14 >> 8),1));
            cVar3 = '\0';
            goto LAB_14955e36d;
          }
        }
        else {
          local_130 = (ulonglong *)((ulonglong)local_130 & 0xffffffff00000000);
LAB_14955e355:
          ((char *)((longlong)puVar8 + 0x14))[0] = '\x01';
          ((char *)((longlong)puVar8 + 0x14))[1] = '\x04';
          *(char *)((longlong)puVar8 + 0x11) = '\x01';
          bVar21 = (byte)uVar22 & 1;
          cVar3 = '\x01';
          local_128 = local_128 & 0xffffffff00000000;
LAB_14955e36d:
          uVar4 = FUN_14955ef5f(puVar8,local_b8,0xffffffff);
          param_4 = local_100;
          if (uVar4 == 0) {
            pcVar10 = (code *)0x0;
            puVar1 = (undefined8 *)puVar8[0x23];
            if (local_d4 == 0) {
              pcVar10 = FUN_14955f358;
            }
            puVar1[4] = 0;
            puVar1[5] = 0;
            puVar1[6] = 0;
            puVar1[7] = 0;
            puVar1[2] = 0;
            puVar1[3] = 0;
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1[8] = 0;
            *(undefined4 *)(puVar1 + 5) = 0x88;
            *(byte *)((longlong)puVar1 + 0x2c) = (byte)(local_d4 >> 1) ^ 1;
            *(undefined1 *)((longlong)puVar1 + 0x2d) = 2;
            puVar1[6] = pcVar10;
            puVar1[7] = puVar8;
            *(undefined4 *)((longlong)puVar1 + 0x1c) = 100;
            puVar1[4] = &DAT_100000001;
            uVar4 = FUN_14955f41e(puVar1,local_b8[0] & 0xffffffff);
            param_4 = local_100;
            if (uVar4 == 0) {
              *(byte *)((longlong)puVar8 + 10) = (byte)(param_5 & 1) ^ 1;
              *(undefined4 *)(puVar8 + 0x18) = 0x3fffffff;
              *(char *)(puVar8 + 2) = cVar3;
              *(char *)(puVar8 + 1) = cVar3;
              *(char *)((longlong)puVar8 + 0x16) = cVar3;
              *(char *)((longlong)puVar8 + 0x13) = (char)local_f8;
              *(byte *)((longlong)puVar8 + 0x12) = bVar21;
              *(char *)((longlong)puVar8 + 0xb) = cVar3;
              if ((char)local_128 != '\0') {
                pcVar9 = (char *)((longlong)puVar8 + 0xc);
                pcVar9[0] = '\x01';
                pcVar9[1] = '\0';
                pcVar9[2] = '\x02';
                pcVar9[3] = '\n';
              }
              *(undefined2 *)(puVar8 + 0x16) = 0x88;
              puVar8[0x19] = 0xffffffffffffffff;
              FUN_14955f2f7(puVar8);
              param_4 = local_100;
              cVar3 = '\x02';
              if ((param_5 & 1) == 0) {
                cVar3 = '\x04';
                local_d4 = local_d4 | (uint)local_130;
                if (local_d4 != 0) goto LAB_14955e481;
              }
              else {
LAB_14955e481:
                *(char *)((longlong)puVar8 + 9) = cVar3;
              }
              puVar8[0x20] = (ulonglong)&LAB_14955eedf;
              if (*(int *)((longlong)puVar8 + 0x2c) == 0) {
                if (*(char *)((longlong)puVar8 + 0x1a) == '\0') {
                  pcVar10 = FUN_149562686;
                }
                else {
                  pcVar10 = FUN_149562436;
                }
              }
              else {
                pcVar10 = (code *)&LAB_14956242b;
              }
              puVar8[0x21] = (ulonglong)pcVar10;
              *plVar7 = (longlong)puVar8;
              puVar8[0x14] = *(ulonglong *)(local_e8 + 0x40);
              FUN_149564f9d(puVar8);
              local_68 = 0;
              uStack_60 = 0;
              local_78 = 0;
              uStack_70 = 0;
              local_88 = 0;
              uStack_80 = 0;
              local_98 = 0;
              uStack_90 = 0;
              local_a8 = 0;
              uStack_a0 = 0;
              local_b8[0] = 0;
              local_b8[1] = 0;
              local_58 = 0;
              lVar17 = **(longlong **)(*plVar7 + 0x48);
              if (((lVar17 != 0) &&
                  (uVar4 = (**(code **)(lVar17 + 0x10))
                                     (*(longlong **)(*plVar7 + 0x48),local_b8,100,0), uVar4 != 0x20a
                  )) && (uVar4 != 0)) goto LAB_14955e64f;
              *(char *)(plVar7 + 4) = (char)param_5;
              plVar7[1] = local_e8;
              lVar17 = *plVar7;
              *(code **)(lVar17 + 0xe0) = FUN_14955eefa;
              *(longlong **)(lVar17 + 0xe8) = plVar7;
              lVar13 = **(longlong **)(lVar17 + 0x48);
              if (lVar13 != 0) {
                (**(code **)(lVar13 + 0x50))(*(longlong **)(lVar17 + 0x48),0xf,lVar17 + 0xe0);
              }
              *local_d0 = (ulonglong)plVar7;
              plVar7[2] = 0;
              plVar7[3] = 0;
              if (*(char *)(*plVar7 + 0x12) != '\0') {
                *(byte *)((longlong)plVar7 + 0x26) = *(byte *)((longlong)plVar7 + 0x26) | 1;
              }
              iVar23 = (int)((local_a8 & 0xff) << 8);
              uVar4 = (uint)bStack_a7 * 0x10000 + iVar23;
              *(uint *)(plVar7 + 6) = uVar4;
              if (((iVar23 + (uint)bStack_a7 * 0x10000) - 0x10001 < 0xffff01ff) ||
                 ((uVar4 + 0x1ffff & uVar4) != 0)) {
                *(undefined4 *)(plVar7 + 6) = 0;
                uVar22 = 0;
                if (param_2 != (char *)0x0 && bVar2 == 0) {
                  *(undefined1 *)((longlong)plVar7 + 0x21) = 0;
                  bVar29 = false;
                  uVar22 = 0;
                  goto LAB_14955eb83;
                }
              }
              else {
                uVar22 = (uint)bStack_a4;
                *(ushort *)((longlong)plVar7 + 0x26) = *(ushort *)((longlong)plVar7 + 0x26) | 2;
                *(bool *)((longlong)plVar7 + 0x21) = local_88._4_4_ != 0;
                bVar29 = (int)local_78 != 0;
LAB_14955eb83:
                *(bool *)((longlong)plVar7 + 0x22) = bVar29;
              }
              uVar4 = FUN_14955ef5f(*plVar7,plVar7 + 6,uVar22);
              if (uVar4 == 0) {
                *(uint *)((longlong)plVar7 + 0x34) = (int)plVar7[6] - uVar22;
                *(undefined4 *)(plVar7 + 0xc) = 1;
                if (*(char *)((longlong)local_e0 + 0x11) == '\0') goto LAB_14955e520;
                if (DAT_14c765cfc != '\0') {
                  lVar17 = (*DAT_14c765d68)(2);
                  if (DAT_14c765cfc != '\0') {
                    lVar13 = (*DAT_14c765d68)(0);
                    plVar7[10] = lVar13;
                    uVar4 = 7;
                    if (lVar13 == 0) goto LAB_14955e64f;
                  }
                  if (lVar17 != 0) {
                    (*DAT_14c765d78)(lVar17);
                    plVar7[0xd] = (longlong)DAT_14cc1ee10;
                    DAT_14cc1ee10 = plVar7;
                    (*DAT_14c765d88)(lVar17);
                    goto LAB_14955e520;
                  }
                }
                plVar7[0xd] = (longlong)DAT_14cc1ee10;
                DAT_14cc1ee10 = plVar7;
                goto LAB_14955e520;
              }
              goto LAB_14955e64f;
            }
          }
        }
        plVar16 = (longlong *)puVar8[9];
        if (*plVar16 != 0) {
          (**(code **)(*plVar16 + 8))(plVar16);
          *plVar16 = 0;
        }
        FUN_14956234e(puVar8[0x22]);
        goto LAB_14955e64a;
      }
      uVar4 = 7;
      puVar8 = local_130;
      param_4 = local_100;
      if (local_130 != (ulonglong *)0x0) goto LAB_14955e64a;
    }
    else {
      if (*param_2 == '\0') {
        local_f8 = 1;
        local_120 = 0;
        local_f0 = param_2;
        goto LAB_14955e193;
      }
      local_108 = CONCAT44(local_108._4_4_,iVar23);
      sVar19 = strlen(param_2);
      puVar11 = (ulonglong *)FUN_145e3bd67(sVar19 + 1);
      uVar4 = 7;
      if (puVar11 != (ulonglong *)0x0) {
        memcpy(puVar11,param_2,sVar19 + 1);
        local_130 = puVar11;
        sVar19 = strlen((char *)puVar11);
        uVar12 = (ulonglong)((uint)sVar19 & 0x3fffffff);
        uVar15 = (undefined7)(sVar19 >> 8);
        local_120 = CONCAT71(uVar15,1);
        local_f0 = (char *)0x0;
        local_f8 = CONCAT71(uVar15,1);
        local_110 = (ulonglong *)0x0;
        iVar24 = 1;
        goto LAB_14955e19c;
      }
    }
LAB_14955e64f:
    uVar12 = local_118;
    if (*plVar7 != 0) {
      FUN_14955f0dd(*plVar7,0);
      uVar12 = local_118;
    }
  }
  FUN_145e3b961(plVar7);
  FUN_145e3b961(local_e0);
  *param_4 = 0;
  goto LAB_14955e67d;
  while( true ) {
    uVar12 = uVar12 - 1;
    plVar16 = plVar16 + -4;
    if (uVar12 < 2) break;
LAB_14955ed18:
    if ((*plVar16 != 0) && (*(longlong **)(*plVar16 + 8) == plVar7)) {
      if ((char)local_108 == '\0') {
        (*DAT_14c765d88)(local_120);
      }
      if ((char)local_130 == '\0') {
        (*DAT_14c765d88)(local_118);
      }
      FUN_145e3b961(pcVar9);
      FUN_145e3b961(local_e0);
      uVar4 = 0x13;
      goto LAB_14955e038;
    }
  }
LAB_14955ec09:
  *local_d0 = (ulonglong)plVar7;
  *(int *)(plVar7 + 0xc) = (int)plVar7[0xc] + 1;
LAB_14955e500:
  if ((char)uVar6 == '\0') {
    (*DAT_14c765d88)(sVar19);
  }
  FUN_145e3b961(pcVar9);
  uVar12 = local_118;
  if (plVar7 == (longlong *)0x0) goto LAB_14955e0f2;
LAB_14955e520:
  uVar12 = local_118;
  if ((*(char *)((longlong)local_e0 + 0x11) != '\0') && (0 < (longlong)*(int *)(local_e8 + 0x28))) {
    lVar17 = 0;
    do {
      plVar16 = *(longlong **)(*(longlong *)(local_e8 + 0x20) + 8 + lVar17);
      if ((plVar16 != (longlong *)0x0) && (*(char *)((longlong)plVar16 + 0x11) != '\0'))
      goto LAB_14955e5d8;
      lVar17 = lVar17 + 0x20;
    } while ((longlong)*(int *)(local_e8 + 0x28) * 0x20 != lVar17);
  }
  goto LAB_14955e562;
LAB_14955e5d8:
  do {
    plVar18 = plVar16;
    plVar16 = (longlong *)plVar18[5];
  } while ((longlong *)plVar18[5] != (longlong *)0x0);
  lVar17 = 0x20;
  if (*local_d0 < (ulonglong)plVar18[1]) {
    plVar25 = plVar18 + 5;
    plVar26 = (longlong *)0x0;
    plVar16 = local_e0;
  }
  else {
    do {
      plVar26 = plVar18;
      plVar16 = (longlong *)plVar26[4];
      if (plVar16 == (longlong *)0x0) {
        plVar25 = plVar26 + 4;
        plVar18 = (longlong *)0x0;
        plVar16 = local_e0;
        goto LAB_14955e608;
      }
      plVar18 = plVar16;
    } while ((ulonglong)plVar16[1] < *local_d0);
    plVar25 = plVar26 + 4;
    local_e0[4] = (longlong)plVar16;
    lVar17 = 0x28;
    plVar18 = plVar26;
    plVar26 = local_e0;
  }
LAB_14955e608:
  *(longlong **)((longlong)local_e0 + lVar17) = plVar18;
  plVar16[5] = (longlong)plVar26;
  *plVar25 = (longlong)local_e0;
LAB_14955e562:
  *param_4 = local_e0;
  uVar4 = 0;
  lVar17 = FUN_14955f26e(local_e0,0,0);
  if (lVar17 == 0) {
    lVar17 = *(longlong *)(*(longlong *)*local_d0 + 0x118);
    *(undefined4 *)(lVar17 + 0x1c) = 0xfffff830;
    (*DAT_14c765dc8)(*(undefined8 *)(lVar17 + 0x40),
                     0x1f4000 / (longlong)(*(int *)(lVar17 + 0x28) + *(int *)(lVar17 + 0x24)) &
                     0xffffffff);
  }
  lVar17 = **(longlong **)(*plVar7 + 0x48);
  if (lVar17 != 0) {
    (**(code **)(lVar17 + 0x50))(*(longlong **)(*plVar7 + 0x48),0x1e,plVar7 + 1);
  }
LAB_14955e67d:
  if (uVar12 != 0) {
    (*DAT_14c765d88)(uVar12);
  }
LAB_14955e038:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14955eefa FUN_14955eefa body=101 status=ok
// SIG undefined FUN_14955eefa(void)

undefined8 FUN_14955eefa(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  int iVar4;
  
  lVar1 = param_1[1];
  pcVar2 = *(code **)(lVar1 + 600);
  uVar3 = 0;
  if ((pcVar2 != (code *)0x0) && (-1 < *(int *)(lVar1 + 0x268))) {
    if (*(char *)(lVar1 + 0x26c) == '\0') {
      uVar3 = (*pcVar2)(*(undefined8 *)(lVar1 + 0x260));
    }
    else {
      uVar3 = (*pcVar2)(*(undefined8 *)(lVar1 + 0x260),*(int *)(lVar1 + 0x268),
                        *(undefined8 *)(*param_1 + 0x48));
    }
    if ((int)uVar3 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = *(int *)(lVar1 + 0x268) + 1;
    }
    *(int *)(lVar1 + 0x268) = iVar4;
  }
  return uVar3;
}



// FUNCTION 14955ef5f FUN_14955ef5f body=381 status=ok
// SIG undefined FUN_14955ef5f(void)

int FUN_14955ef5f(longlong param_1,uint *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = *param_2;
  uVar6 = (ulonglong)uVar5;
  if ((((*(char *)(param_1 + 0x13) != '\0') && (*(int *)(param_1 + 0x1c) != 0)) ||
      (uVar5 == 0 || *(int *)(*(longlong *)(param_1 + 0x118) + 0x18) != 0)) ||
     (uVar5 == *(uint *)(param_1 + 0xbc))) {
    uVar5 = *(uint *)(param_1 + 0xbc);
    puVar4 = param_2;
LAB_14955efbd:
    *param_2 = uVar5;
    if ((int)param_3 < 0) {
      param_3 = (uint)*(ushort *)(param_1 + 0xb2);
    }
    *(short *)(param_1 + 0xb2) = (short)param_3;
    FUN_149564f9d(param_1,puVar4);
    iVar1 = 0;
    goto LAB_14955efdc;
  }
  local_40 = 0;
  if (*(char *)(param_1 + 0x14) == '\0') {
LAB_14955f02d:
    lVar2 = FUN_149565030(uVar5 + 8);
    if (lVar2 == 0) {
      iVar1 = 7;
      goto LAB_14955f040;
    }
    *(undefined8 *)(lVar2 + uVar6) = 0;
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    for (lVar3 = *(longlong *)(param_1 + 0x70); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x40)) {
      *(undefined4 *)(lVar3 + 0x18) = 1;
    }
    FUN_149564708(*(undefined8 *)(param_1 + 0x118),0);
    iVar1 = FUN_14955f41e(*(undefined8 *)(param_1 + 0x118),uVar5);
    if (iVar1 == 0) {
      FUN_14956234e(*(undefined8 *)(param_1 + 0x110));
      *(longlong *)(param_1 + 0x110) = lVar2;
      lVar2 = local_40 + uVar6 + -1;
      puVar4 = (uint *)(lVar2 % (longlong)uVar6);
      *(int *)(param_1 + 0x1c) = (int)(lVar2 / (longlong)uVar6);
      *(uint *)(param_1 + 0xbc) = uVar5;
      goto LAB_14955efbd;
    }
  }
  else {
    lVar2 = **(longlong **)(param_1 + 0x48);
    if ((lVar2 == 0) ||
       (iVar1 = (**(code **)(lVar2 + 0x30))(*(longlong **)(param_1 + 0x48),&local_40), iVar1 == 0))
    goto LAB_14955f02d;
LAB_14955f040:
    lVar2 = 0;
  }
  FUN_14956234e(lVar2);
  *param_2 = *(uint *)(param_1 + 0xbc);
LAB_14955efdc:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar1;
}



// FUNCTION 14955f0dd FUN_14955f0dd body=401 status=ok
// SIG undefined FUN_14955f0dd(void)

void FUN_14955f0dd(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  lVar4 = *(longlong *)(param_1 + 0xa8);
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  while (lVar4 != 0) {
    lVar4 = *(longlong *)(lVar4 + 0x20);
    FUN_145e3b961();
  }
  *(undefined1 *)(param_1 + 8) = 0;
  if ((param_2 == 0) || ((*(byte *)(param_2 + 0x31) & 8) != 0)) {
    uVar7 = 0;
  }
  else {
    iVar2 = FUN_149565160(param_1);
    uVar7 = 0;
    if (iVar2 == 0) {
      uVar7 = uVar1;
    }
  }
  FUN_1495651db(*(undefined8 *)(param_1 + 0x120),param_2,*(undefined1 *)(param_1 + 0xf),
                *(undefined4 *)(param_1 + 0xbc),uVar7);
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
  for (lVar4 = *(longlong *)(param_1 + 0x70); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x40)) {
    *(undefined4 *)(lVar4 + 0x18) = 1;
  }
  FUN_149564708(*(undefined8 *)(param_1 + 0x118),0);
  if (*(char *)(param_1 + 0x13) != '\0') {
    FUN_149563041(param_1);
    goto LAB_14955f1ac;
  }
  plVar6 = *(longlong **)(param_1 + 0x50);
  lVar4 = *plVar6;
  if (lVar4 != 0) {
    if (*(char *)(param_1 + 0xb) == '\0') {
      uVar3 = (**(code **)(lVar4 + 0x28))(plVar6,2);
      if (uVar3 == 0) {
        plVar6 = *(longlong **)(param_1 + 0x50);
        lVar4 = *plVar6;
        goto LAB_14955f221;
      }
    }
    else {
LAB_14955f221:
      uVar3 = (**(code **)(lVar4 + 0x30))(plVar6,param_1 + 0x68);
    }
    if (((char)uVar3 == '\r') || ((uVar3 & 0xff) == 10)) {
      *(uint *)(param_1 + 0x2c) = uVar3;
      *(undefined1 *)(param_1 + 0x14) = 6;
      if (uVar3 == 0) {
        if (*(char *)(param_1 + 0x1a) == '\0') {
          pcVar5 = FUN_149562686;
        }
        else {
          pcVar5 = FUN_149562436;
        }
      }
      else {
        pcVar5 = (code *)&LAB_14956242b;
      }
      *(code **)(param_1 + 0x108) = pcVar5;
    }
  }
  FUN_149562b50(param_1);
LAB_14955f1ac:
  plVar6 = *(longlong **)(param_1 + 0x50);
  if (*plVar6 != 0) {
    (**(code **)(*plVar6 + 8))(plVar6);
    *plVar6 = 0;
  }
  plVar6 = *(longlong **)(param_1 + 0x48);
  if (*plVar6 != 0) {
    (**(code **)(*plVar6 + 8))(plVar6);
    *plVar6 = 0;
  }
  FUN_14956234e(uVar1);
  (*DAT_14c765df8)(*(undefined8 *)(*(longlong *)(param_1 + 0x118) + 0x40));
  FUN_145e3b961(param_1);
  return;
}



// FUNCTION 14955f26e FUN_14955f26e body=137 status=ok
// SIG undefined FUN_14955f26e(void)

undefined8 FUN_14955f26e(longlong param_1,uint param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  void *_Dst;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0')) {
    FUN_14956624a(param_1);
  }
  if ((param_2 != 0) && (*(longlong *)(lVar2 + 0x40) == 0)) {
    _Dst = (void *)FUN_145e3bd67((ulonglong)param_2);
    if (_Dst != (void *)0x0) {
      memset(_Dst,0,(ulonglong)param_2);
    }
    *(void **)(lVar2 + 0x40) = _Dst;
    *(undefined8 *)(lVar2 + 0x48) = param_3;
  }
  if (*(char *)(param_1 + 0x11) != '\0') {
    piVar1 = (int *)(param_1 + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1495662d2(param_1);
    }
  }
  return *(undefined8 *)(lVar2 + 0x40);
}



// FUNCTION 14955f2f7 FUN_14955f2f7 body=97 status=ok
// SIG undefined FUN_14955f2f7(void)

void FUN_14955f2f7(longlong param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0x200;
  if ((*(char *)(param_1 + 0x10) == '\0') &&
     (uVar2 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x60))(), (uVar2 >> 0xc & 1) == 0)) {
    pcVar1 = *(code **)(**(longlong **)(param_1 + 0x48) + 0x58);
    if (pcVar1 == (code *)0x0) {
      uVar4 = 0x1000;
    }
    else {
      uVar3 = (*pcVar1)();
      uVar2 = 0x10000;
      if (uVar3 < 0x10000) {
        uVar2 = uVar3;
      }
      uVar4 = 0x200;
      if (0x1f < (int)uVar3) {
        uVar4 = uVar2;
      }
    }
  }
  *(uint *)(param_1 + 0xb8) = uVar4;
  return;
}



// FUNCTION 14955f358 FUN_14955f358 body=198 status=ok
// SIG undefined FUN_14955f358(void)

undefined8 FUN_14955f358(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    return 0;
  }
  if (*(byte *)(param_1 + 0x18) != 0) {
    if ((*(byte *)(param_1 + 0x18) & 3) != 0) {
      return 0;
    }
    if ((*(byte *)(param_2 + 0x34) & 8) != 0) {
      return 0;
    }
  }
  *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
  *(undefined8 *)(param_2 + 0x20) = 0;
  if (*(longlong *)(param_1 + 0x120) == 0) {
    if ((((*(byte *)(param_2 + 0x34) & 8) != 0) || (*(char *)(param_1 + 0x14) == '\x03')) &&
       (uVar1 = FUN_14955fedf(param_1,1), (int)uVar1 != 0)) goto LAB_14955f3e1;
    uVar1 = FUN_149560109(param_1,param_2);
  }
  else {
    uVar1 = FUN_14955f4ab(param_2);
    if ((int)uVar1 != 0) goto LAB_14955f3e1;
    uVar1 = FUN_14955f6c0(param_1,param_2,0,0);
  }
  if ((int)uVar1 == 0) {
    FUN_1495602a2(param_2);
    return 0;
  }
LAB_14955f3e1:
  if (((char)uVar1 == '\r') || (((uint)uVar1 & 0xff) == 10)) {
    *(uint *)(param_1 + 0x2c) = (uint)uVar1;
    *(undefined1 *)(param_1 + 0x14) = 6;
    *(undefined1 **)(param_1 + 0x108) = &LAB_14956242b;
  }
  return uVar1;
}



// FUNCTION 14955f41e FUN_14955f41e body=141 status=ok
// SIG undefined FUN_14955f41e(void)

undefined8 FUN_14955f41e(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar1 = (*DAT_14c765dc0)(param_2,*(int *)(param_1 + 0x28) + 0x48,*(undefined1 *)(param_1 + 0x2c)
                            );
    if (lVar1 == 0) {
      uVar3 = 7;
    }
    else {
      lVar2 = (longlong)*(int *)(param_1 + 0x1c);
      if (lVar2 < 0) {
        lVar2 = (lVar2 * -0x400) /
                ((longlong)*(int *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x24));
      }
      (*DAT_14c765dc8)(lVar1,lVar2);
      if (*(longlong *)(param_1 + 0x40) != 0) {
        (*DAT_14c765df8)();
      }
      *(longlong *)(param_1 + 0x40) = lVar1;
      *(undefined4 *)(param_1 + 0x24) = param_2;
    }
  }
  return uVar3;
}



// FUNCTION 14955f4ab FUN_14955f4ab body=532 status=ok
// SIG undefined FUN_14955f4ab(void)

uint FUN_14955f4ab(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = *(longlong **)(param_1 + 0x28);
  uVar8 = (ulonglong)(int)plVar2[0x10];
  if (0 < (longlong)uVar8) {
    uVar9 = *(uint *)(param_1 + 0x30);
    lVar10 = plVar2[0xf];
    lVar11 = 0;
    do {
      if ((uVar9 <= *(uint *)(lVar10 + 0x18 + lVar11)) &&
         (iVar5 = FUN_1495602ed(*(undefined8 *)(lVar10 + 0x10 + lVar11),uVar9),
         iVar7 = DAT_14c765d14, iVar5 == 0)) {
        if (*(char *)((longlong)plVar2 + 9) != '\x02') {
          plVar3 = (longlong *)plVar2[0xb];
          if (*plVar3 == 0) {
            if ((*(char *)((longlong)plVar2 + 9) == '\x04') ||
               (*(char *)((longlong)plVar2 + 0x19) != '\0')) {
              lVar10 = *plVar2;
              plVar3[6] = 0;
              plVar3[7] = 0;
              plVar3[4] = 0;
              plVar3[5] = 0;
              plVar3[2] = 0;
              plVar3[3] = 0;
              plVar3[8] = 0;
              iVar7 = -1;
              iVar5 = 0x3f8;
            }
            else {
              lVar10 = *plVar2;
              plVar3[8] = 0;
              plVar3[9] = 0;
              plVar3[6] = 0;
              plVar3[7] = 0;
              plVar3[4] = 0;
              plVar3[5] = 0;
              plVar3[2] = 0;
              plVar3[3] = 0;
              *plVar3 = 0;
              plVar3[1] = 0;
              plVar3[10] = 0;
              if (iVar7 == 0) {
                local_58 = 0;
                uVar9 = (**(code **)(lVar10 + 0x28))(lVar10,0,plVar3,0x201e);
                if (uVar9 == 0) goto LAB_14955f59c;
                goto LAB_14955f569;
              }
              iVar5 = 0x3f8;
              if (0 < iVar7) {
                iVar5 = iVar7;
              }
            }
            *(int *)(plVar3 + 1) = iVar5;
            *plVar3 = (longlong)&DAT_14bd407b8;
            *(int *)((longlong)plVar3 + 0xc) = iVar7;
            *(undefined4 *)(plVar3 + 8) = 0x201e;
            plVar3[10] = 0;
            plVar3[9] = lVar10;
          }
LAB_14955f59c:
          uVar4 = *(undefined8 *)(param_1 + 8);
          lVar10 = ((longlong)*(int *)((longlong)plVar2 + 0xbc) + 4) *
                   (ulonglong)*(uint *)(plVar2 + 7);
          uVar9 = *(uint *)(param_1 + 0x30);
          local_44 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18
          ;
          uVar9 = (**(code **)(*(longlong *)plVar2[0xb] + 0x18))
                            ((longlong *)plVar2[0xb],&local_44,4,lVar10);
          if ((uVar9 != 0) ||
             (uVar9 = (**(code **)(*(longlong *)plVar2[0xb] + 0x18))
                                ((longlong *)plVar2[0xb],uVar4,
                                 *(undefined4 *)((longlong)plVar2 + 0xbc),lVar10 + 4), uVar9 != 0))
          goto LAB_14955f569;
          uVar8 = (ulonglong)*(uint *)(plVar2 + 0x10);
        }
        *(int *)(plVar2 + 7) = (int)plVar2[7] + 1;
        if (0 < (int)uVar8) {
          uVar1 = *(uint *)(param_1 + 0x30);
          lVar11 = 0;
          lVar10 = 0x18;
          uVar9 = 0;
          do {
            if (uVar1 <= *(uint *)(plVar2[0xf] + lVar10)) {
              uVar6 = FUN_1495607d9(*(undefined8 *)(plVar2[0xf] + -8 + lVar10),uVar1);
              uVar9 = uVar9 | uVar6;
              uVar8 = (ulonglong)*(uint *)(plVar2 + 0x10);
            }
            lVar11 = lVar11 + 1;
            lVar10 = lVar10 + 0x30;
          } while (lVar11 < (int)uVar8);
          goto LAB_14955f569;
        }
        break;
      }
      lVar11 = lVar11 + 0x30;
    } while (uVar8 * 0x30 != lVar11);
  }
  uVar9 = 0;
LAB_14955f569:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 14955f6c0 FUN_14955f6c0 body=2078 status=ok
// SIG undefined FUN_14955f6c0(void)

int FUN_14955f6c0(longlong param_1,longlong param_2,uint param_3,int param_4)

{
  void *_Buf2;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_118 [32];
  ulonglong *local_f8;
  uint local_e8;
  int local_e4;
  ulonglong local_e0;
  uint local_d4;
  longlong local_d0;
  uint *local_c8;
  longlong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  uint *local_a8;
  ulonglong local_a0;
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  uint local_70;
  uint local_6c;
  ulonglong local_68;
  uint local_60 [2];
  undefined8 local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_b8 = param_2;
  if (param_4 == 0) {
    iVar3 = 1;
    lVar15 = param_2;
  }
  else if (param_2 == 0) {
    iVar3 = 0;
    lVar15 = 0;
  }
  else {
    iVar3 = 0;
    plVar17 = &local_b8;
    do {
      if (*(uint *)(param_2 + 0x30) <= param_3) {
        plVar17 = (longlong *)(param_2 + 0x20);
      }
      iVar3 = iVar3 + (uint)(*(uint *)(param_2 + 0x30) <= param_3);
      param_2 = *(longlong *)(param_2 + 0x20);
      *plVar17 = param_2;
      lVar15 = local_b8;
    } while (param_2 != 0);
  }
  *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + iVar3;
  if (*(int *)(lVar15 + 0x30) == 1) {
    uVar11 = *(uint *)(*(longlong *)(lVar15 + 0x28) + 0x88);
    uVar11 = (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18) +
             1;
    uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 * 0x1000000
    ;
    *(uint *)(*(longlong *)(lVar15 + 8) + 0x18) = uVar11;
    *(uint *)(*(longlong *)(lVar15 + 8) + 0x5c) = uVar11;
    *(undefined4 *)(*(longlong *)(lVar15 + 8) + 0x60) = 0xd93f2e00;
  }
  local_e8 = (uint)*(byte *)(param_1 + 0xf);
  local_d4 = *(uint *)(param_1 + 0xbc);
  lVar10 = *(longlong *)(param_1 + 0x120);
  _Buf2 = (void *)**(undefined8 **)(lVar10 + 0x30);
  local_e4 = param_4;
  local_90 = param_1;
  iVar3 = memcmp((void *)(lVar10 + 0x48),_Buf2,0x30);
  if (iVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(int *)((longlong)_Buf2 + 0x10) + 1;
  }
  if (*(short *)(lVar10 + 0x3c) == 0) {
    if (*(int *)((longlong)_Buf2 + 0x60) == 0) {
LAB_14955f93a:
      if (*(char *)(lVar10 + 0x3f) == '\0') {
        (**(code **)(**(longlong **)(lVar10 + 8) + 0x70))(*(longlong **)(lVar10 + 8),3,1,5);
      }
      *(undefined2 *)(lVar10 + 0x3c) = 0xffff;
      iVar6 = 1;
      do {
        iVar3 = FUN_149560eb3(lVar10,&local_68,1,iVar6);
        iVar6 = iVar6 + 1;
      } while (iVar3 == -1);
    }
    else {
      FUN_149555acc(4,&local_68);
      if (*(char *)(lVar10 + 0x3f) != '\0') {
LAB_14955fb41:
        FUN_149560e5f(lVar10,local_68 & 0xffffffff);
        if (*(char *)(lVar10 + 0x3f) == '\0') {
          (**(code **)(**(longlong **)(lVar10 + 8) + 0x70))(*(longlong **)(lVar10 + 8),4,4,9);
        }
        goto LAB_14955f93a;
      }
      iVar3 = (**(code **)(**(longlong **)(lVar10 + 8) + 0x70))(*(longlong **)(lVar10 + 8),4,4,10);
      if (iVar3 == 5) goto LAB_14955f93a;
      if (iVar3 == 0) goto LAB_14955fb41;
    }
    if (iVar3 != 0) goto LAB_14955fa53;
  }
  uVar5 = local_d4;
  uVar9 = (ulonglong)*(uint *)(lVar10 + 0x58);
  if (uVar9 == 0) {
    local_68 = 0x18e22d0082067f37;
    local_60[0] = local_d4 >> 0x18 | (local_d4 & 0xff0000) >> 8 | (local_d4 & 0xff00) << 8 |
                  local_d4 << 0x18;
    uVar4 = *(uint *)(lVar10 + 0x88);
    local_60[1] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    if (uVar4 == 0) {
      FUN_149555acc(8,lVar10 + 0x68);
    }
    local_58 = *(undefined8 *)(lVar10 + 0x68);
    uVar4 = 0;
    uVar12 = 0xfffffffffffffff8;
    uVar8 = 0;
    do {
      uVar8 = uVar8 + uVar4 + *(int *)((longlong)local_60 + uVar12);
      uVar4 = uVar4 + *(int *)((longlong)local_60 + uVar12 + 4) + uVar8;
      uVar12 = uVar12 + 8;
    } while (uVar12 < 0x10);
    local_50 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 * 0x1000000;
    local_4c = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 * 0x1000000;
    *(uint *)(lVar10 + 0x38) = uVar5;
    *(undefined1 *)(lVar10 + 0x55) = 0;
    *(uint *)(lVar10 + 0x60) = uVar8;
    *(uint *)(lVar10 + 100) = uVar4;
    *(undefined1 *)(lVar10 + 0x43) = 1;
    iVar3 = (**(code **)(**(longlong **)(lVar10 + 0x10) + 0x18))
                      (*(longlong **)(lVar10 + 0x10),&local_68,0x20,0);
    if ((iVar3 != 0) ||
       (((*(char *)(lVar10 + 0x44) != '\0' && ((local_e8 >> 2 & 3) != 0)) &&
        (iVar3 = (**(code **)(**(longlong **)(lVar10 + 0x10) + 0x28))(), iVar3 != 0))))
    goto LAB_14955fa53;
  }
  local_98 = *(longlong **)(lVar10 + 0x10);
  local_78 = 0;
  local_70 = local_e8;
  local_6c = uVar5;
  lVar14 = (longlong)(int)uVar5 + 0x18;
  lVar18 = uVar9 * lVar14 + 0x20;
  iVar6 = 0;
  local_e0 = uVar9;
  local_88 = lVar10;
  local_80 = local_98;
  if (lVar15 == 0) {
    local_d0 = 0;
  }
  else {
    local_d0 = 0;
    lVar16 = lVar15;
    do {
      if (uVar11 == 0) {
LAB_14955f837:
        local_e0 = (ulonglong)((int)local_e0 + 1);
        uVar5 = 0;
        if (local_e4 != 0) {
          lVar19 = *(longlong *)(lVar16 + 0x20);
LAB_14955f86f:
          uVar5 = 0;
          if (lVar19 == 0) {
            uVar5 = param_3;
          }
        }
        iVar3 = FUN_149560b8d(&local_88,lVar16,uVar5,lVar18);
        if (iVar3 != 0) goto LAB_14955fa53;
        lVar18 = lVar18 + lVar14;
        *(byte *)(lVar16 + 0x34) = *(byte *)(lVar16 + 0x34) | 0x40;
        local_d0 = lVar16;
      }
      else {
        if ((local_e4 != 0) && (*(longlong *)(lVar16 + 0x20) == 0)) {
          local_e0 = (ulonglong)((int)local_e0 + 1);
          lVar19 = 0;
          goto LAB_14955f86f;
        }
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1495609ed(lVar10,*(undefined4 *)(lVar16 + 0x30),&local_68);
        if ((uint)local_68 < uVar11) goto LAB_14955f837;
        if ((uint)local_68 <= *(int *)(lVar10 + 0x7c) - 1U) {
          *(uint *)(lVar10 + 0x7c) = (uint)local_68;
        }
        iVar3 = (**(code **)(**(longlong **)(lVar10 + 0x10) + 0x18))
                          (*(longlong **)(lVar10 + 0x10),*(undefined8 *)(lVar16 + 8),local_d4,
                           (ulonglong)((uint)local_68 - 1) * lVar14 + 0x38);
        if (iVar3 != 0) goto LAB_14955fa53;
        *(byte *)(lVar16 + 0x34) = *(byte *)(lVar16 + 0x34) & 0xbf;
      }
      lVar16 = *(longlong *)(lVar16 + 0x20);
    } while (lVar16 != 0);
  }
  uVar11 = 0;
  if (local_e4 != 0) {
    if (*(int *)(lVar10 + 0x7c) != 0) {
      if (-0x18 < *(int *)(lVar10 + 0x38)) {
        uVar11 = *(int *)(lVar10 + 0x38) + 0x18;
        uVar9 = (ulonglong)uVar11;
        puVar7 = (uint *)FUN_145e3bd67(uVar9);
        if (puVar7 != (uint *)0x0) {
          lVar16 = 0x18;
          if (*(int *)(lVar10 + 0x7c) != 1) {
            lVar16 = (*(int *)(lVar10 + 0x7c) - 2) * uVar9 + 0x30;
          }
          local_c8 = puVar7;
          iVar3 = (**(code **)(**(longlong **)(lVar10 + 0x10) + 0x10))
                            (*(longlong **)(lVar10 + 0x10),puVar7,8,lVar16);
          uVar5 = *local_c8;
          *(uint *)(lVar10 + 0x60) =
               uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
          uVar5 = local_c8[1];
          *(uint *)(lVar10 + 100) =
               uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
          uVar5 = *(uint *)(lVar10 + 0x7c);
          *(undefined4 *)(lVar10 + 0x7c) = 0;
          if ((iVar3 == 0) && (uVar5 <= (uint)local_e0)) {
            local_a8 = local_c8 + 6;
            local_b0 = uVar9;
            do {
              puVar7 = local_c8;
              local_a0 = (ulonglong)(uVar5 + 1);
              local_c0 = (uVar5 - 1) * local_b0 + 0x20;
              iVar3 = (**(code **)(**(longlong **)(lVar10 + 0x10) + 0x10))
                                (*(longlong **)(lVar10 + 0x10),local_c8,uVar11);
              if (iVar3 != 0) {
                FUN_145e3b961(puVar7);
                goto LAB_14955fa53;
              }
              uVar5 = *puVar7;
              uVar4 = puVar7[1];
              local_f8 = &local_68;
              FUN_149561f16(lVar10,uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                                   uVar5 << 0x18,
                            uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                            uVar4 << 0x18,local_a8);
              iVar3 = (**(code **)(**(longlong **)(lVar10 + 0x10) + 0x18))
                                (*(longlong **)(lVar10 + 0x10),&local_68,0x18,local_c0);
              if (iVar3 != 0) break;
              uVar5 = (uint)local_a0;
            } while (uVar5 <= (uint)local_e0);
          }
          FUN_145e3b961(local_c8);
          if (iVar3 != 0) goto LAB_14955fa53;
          goto LAB_14955fcd7;
        }
      }
      iVar3 = 7;
      goto LAB_14955fa53;
    }
LAB_14955fcd7:
    local_e8 = local_e8 & 3;
    if (local_e8 == 0) {
      iVar6 = 0;
      uVar11 = 0;
    }
    else {
      if (*(char *)(lVar10 + 0x45) == '\0') {
        uVar11 = 0;
      }
      else {
        pcVar1 = *(code **)(**(longlong **)(lVar10 + 0x10) + 0x58);
        if (pcVar1 == (code *)0x0) {
          uVar9 = 0x1000;
        }
        else {
          uVar5 = (*pcVar1)();
          uVar11 = 0x10000;
          if (uVar5 < 0x10000) {
            uVar11 = uVar5;
          }
          uVar9 = 0x200;
          if (0x1f < (int)uVar5) {
            uVar9 = (ulonglong)uVar11;
          }
        }
        local_78 = uVar9 + lVar18 + -1;
        local_78 = local_78 - local_78 % (longlong)uVar9;
        iVar6 = 0;
        uVar11 = 0;
        lVar16 = local_78;
        if (lVar18 < local_78) {
          uVar11 = 0;
          lVar19 = lVar18;
          local_c0 = local_78;
          do {
            iVar3 = FUN_149560b8d(&local_88,local_d0,param_3,lVar19);
            if (iVar3 != 0) goto LAB_14955fa53;
            lVar19 = lVar19 + lVar14;
            uVar11 = uVar11 + 1;
            lVar16 = local_c0;
          } while (lVar19 < local_c0);
        }
        if (lVar16 != lVar18) goto LAB_14955fd9d;
      }
      iVar6 = (**(code **)(*local_98 + 0x28))(local_98,local_e8);
    }
LAB_14955fd9d:
    if ((*(char *)(lVar10 + 0x43) != '\0') && (lVar18 = *(longlong *)(lVar10 + 0x20), -1 < lVar18))
    {
      lVar14 = (ulonglong)((int)local_e0 + uVar11) * lVar14 + 0x20;
      if (lVar14 <= lVar18) {
        lVar14 = lVar18;
      }
      FUN_149560c18(lVar10,lVar14);
      *(undefined1 *)(lVar10 + 0x43) = 0;
    }
  }
  iVar13 = *(int *)(lVar10 + 0x58);
  lVar14 = lVar15;
  lVar18 = local_d0;
  iVar3 = iVar6;
  while ((local_d0 = lVar18, lVar14 != 0 && (iVar3 == 0))) {
    iVar3 = 0;
    if ((*(byte *)(lVar14 + 0x34) & 0x40) != 0) {
      iVar13 = iVar13 + 1;
      iVar3 = FUN_149560c93(lVar10,iVar13,*(undefined4 *)(lVar14 + 0x30));
    }
    lVar14 = *(longlong *)(lVar14 + 0x20);
    lVar18 = local_d0;
  }
  bVar20 = iVar3 == 0;
  if ((bVar20) && (0 < (int)uVar11)) {
    do {
      iVar13 = iVar13 + 1;
      iVar3 = FUN_149560c93(lVar10,iVar13,*(undefined4 *)(lVar18 + 0x30));
      bVar20 = iVar3 == 0;
      if (!bVar20) break;
      bVar2 = 1 < uVar11;
      uVar11 = uVar11 - 1;
    } while (bVar2);
  }
  if (bVar20) {
    *(ushort *)(lVar10 + 0x56) = (ushort)(local_d4 >> 0x10) | (ushort)local_d4 & 0xff00;
    *(int *)(lVar10 + 0x58) = iVar13;
    if (local_e4 != 0) {
      *(int *)(lVar10 + 0x50) = *(int *)(lVar10 + 0x50) + 1;
      *(uint *)(lVar10 + 0x5c) = param_3;
      FUN_149560dd5(lVar10);
      *(int *)(lVar10 + 0x18) = iVar13;
    }
    lVar14 = local_90;
    lVar10 = *(longlong *)(local_90 + 0x70);
    iVar3 = 0;
    if (lVar10 != 0 && lVar15 != 0) {
      while( true ) {
        if (lVar10 != 0) {
          FUN_149562110(lVar10,*(undefined4 *)(lVar15 + 0x30),*(undefined8 *)(lVar15 + 8));
        }
        lVar15 = *(longlong *)(lVar15 + 0x20);
        if (lVar15 == 0) break;
        lVar10 = *(longlong *)(lVar14 + 0x70);
      }
    }
  }
LAB_14955fa53:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14955fedf FUN_14955fedf body=553 status=ok
// SIG undefined FUN_14955fedf(void)

ulonglong FUN_14955fedf(longlong param_1,int param_2)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  uint local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x2c);
  if ((*(uint *)(param_1 + 0x2c) != 0) ||
     ((*(longlong *)(param_1 + 0x120) == 0 && (uVar4 = FUN_1495622e4(param_1,4), (int)uVar4 != 0))))
  goto LAB_14955ff01;
  if (*(char *)(param_1 + 0xb) == '\0') {
    if ((**(longlong **)(param_1 + 0x50) == 0) || (*(char *)(param_1 + 9) == '\x04')) {
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x60);
    }
    else {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x60))();
      if ((uVar3 >> 9 & 1) == 0) {
        local_50 = 0xd763a120f905d5d9;
        uVar1 = *(uint *)(param_1 + 0x30);
        local_48 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
        if (*(longlong *)(param_1 + 0x60) == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = ((*(longlong *)(param_1 + 0x60) + -1) /
                   (longlong)(ulonglong)*(uint *)(param_1 + 0xb8) + 1) *
                  (ulonglong)*(uint *)(param_1 + 0xb8);
        }
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))
                          (*(longlong **)(param_1 + 0x50),&local_40,8,lVar5);
        if ((int)uVar4 == 0) {
          if (local_40 == -0x289c5edf06fa2a27) {
            uVar4 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))
                              (*(longlong **)(param_1 + 0x50),&DAT_14bd408ab,1,lVar5);
            goto LAB_14956004a;
          }
        }
        else {
LAB_14956004a:
          if (((int)uVar4 != 0x20a) && ((int)uVar4 != 0)) goto LAB_14955ff01;
        }
        if ((((uVar3 & 0x400) == 0) &&
            (((*(char *)(param_1 + 0xc) != '\0' && (*(char *)(param_1 + 0xe) != '\0')) &&
             (uVar4 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x28))(), (int)uVar4 != 0))))
           || (uVar4 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))
                                 (*(longlong **)(param_1 + 0x50),&local_50,0xc,
                                  *(undefined8 *)(param_1 + 0x68)), (int)uVar4 != 0))
        goto LAB_14955ff01;
      }
      if ((((uVar3 & 0x400) == 0) && (*(char *)(param_1 + 0xe) != '\0')) &&
         (uVar4 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x28))(), (int)uVar4 != 0))
      goto LAB_14955ff01;
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x60);
      if ((param_2 != 0) && ((uVar3 & 0x200) == 0)) {
        *(undefined4 *)(param_1 + 0x30) = 0;
        uVar4 = FUN_149562193(param_1);
        if ((int)uVar4 != 0) goto LAB_14955ff01;
      }
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x118);
  for (lVar5 = *plVar2; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x38)) {
    *(byte *)(lVar5 + 0x34) = *(byte *)(lVar5 + 0x34) & 0xf7;
  }
  plVar2[2] = plVar2[1];
  *(undefined1 *)(param_1 + 0x14) = 4;
  uVar4 = 0;
LAB_14955ff01:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 149560109 FUN_149560109 body=408 status=ok
// SIG undefined FUN_149560109(void)

int FUN_149560109(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)param_1[9] == 0) {
    local_48 = 0;
    iVar6 = (**(code **)(*param_1 + 0x28))
                      (*param_1,0,(longlong *)param_1[9],
                       *(uint *)((longlong)param_1 + 0xb4) & 0x1087f61 | 0x1e);
    if (iVar6 != 0) goto LAB_14956026e;
  }
  uVar5 = *(uint *)((longlong)param_1 + 0x1c);
  if ((*(uint *)(param_1 + 5) < uVar5) &&
     ((*(longlong *)(param_2 + 0x20) != 0 || (*(uint *)(param_1 + 5) < *(uint *)(param_2 + 0x30)))))
  {
    local_40 = (longlong)*(int *)((longlong)param_1 + 0xbc) * (ulonglong)uVar5;
    lVar8 = *(longlong *)param_1[9];
    if (lVar8 != 0) {
      (**(code **)(lVar8 + 0x50))((longlong *)param_1[9],5,&local_40);
      uVar5 = *(uint *)((longlong)param_1 + 0x1c);
    }
    *(uint *)(param_1 + 5) = uVar5;
  }
  if (param_2 == 0) {
    iVar6 = 0;
  }
  else {
    do {
      uVar5 = *(uint *)(param_2 + 0x30);
      iVar6 = 0;
      if ((uVar5 <= *(uint *)((longlong)param_1 + 0x1c)) &&
         ((*(byte *)(param_2 + 0x34) & 0x10) == 0)) {
        iVar6 = *(int *)((longlong)param_1 + 0xbc);
        lVar8 = (longlong)iVar6;
        if (uVar5 == 1) {
          uVar7 = *(uint *)(*(longlong *)(param_2 + 0x28) + 0x88);
          uVar7 = (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18)
                  + 1;
          uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                  uVar7 * 0x1000000;
          *(uint *)(*(longlong *)(param_2 + 8) + 0x18) = uVar7;
          *(uint *)(*(longlong *)(param_2 + 8) + 0x5c) = uVar7;
          *(undefined4 *)(*(longlong *)(param_2 + 8) + 0x60) = 0xd93f2e00;
          iVar6 = *(int *)((longlong)param_1 + 0xbc);
        }
        lVar1 = *(longlong *)(param_2 + 8);
        iVar6 = (**(code **)(*(longlong *)param_1[9] + 0x18))
                          ((longlong *)param_1[9],lVar1,iVar6,lVar8 * (ulonglong)(uVar5 - 1));
        if (uVar5 == 1) {
          uVar2 = *(undefined4 *)(lVar1 + 0x1c);
          uVar3 = *(undefined4 *)(lVar1 + 0x20);
          uVar4 = *(undefined4 *)(lVar1 + 0x24);
          *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(lVar1 + 0x18);
          *(undefined4 *)((longlong)param_1 + 0x8c) = uVar2;
          *(undefined4 *)(param_1 + 0x12) = uVar3;
          *(undefined4 *)((longlong)param_1 + 0x94) = uVar4;
        }
        if (*(uint *)((longlong)param_1 + 0x24) < uVar5) {
          *(uint *)((longlong)param_1 + 0x24) = uVar5;
        }
        *(int *)(param_1 + 0x1f) = (int)param_1[0x1f] + 1;
        if (param_1[0xe] != 0) {
          FUN_149562110(param_1[0xe],uVar5,*(undefined8 *)(param_2 + 8));
        }
      }
    } while ((iVar6 == 0) && (param_2 = *(longlong *)(param_2 + 0x20), param_2 != 0));
  }
LAB_14956026e:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar6;
}



// FUNCTION 1495602a2 FUN_1495602a2 body=75 status=ok
// SIG undefined FUN_1495602a2(void)

void FUN_1495602a2(undefined8 *param_1)

{
  FUN_14955dc15(param_1,1);
  *(ushort *)((longlong)param_1 + 0x34) =
       ((ushort)*(undefined4 *)((longlong)param_1 + 0x34) & 0xfff0) + 1;
  if ((*(short *)((longlong)param_1 + 0x36) == 0) && (*(char *)(param_1[3] + 0x2c) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0001495602ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14c765de0)(*(undefined8 *)(param_1[3] + 0x40),*param_1,0,DAT_14c765de0);
    return;
  }
  return;
}



// FUNCTION 1495602ed FUN_1495602ed body=148 status=ok
// SIG undefined FUN_1495602ed(void)

bool FUN_1495602ed(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = param_2 - 1;
  if (uVar1 < *param_1) {
    do {
      uVar2 = param_1[2];
      if (uVar2 == 0) {
        if (*param_1 < 0xf81) {
          return (*(byte *)((longlong)param_1 + (ulonglong)(uVar1 >> 3) + 0x10) >> (uVar1 & 7) & 1)
                 != 0;
        }
        uVar3 = (ulonglong)(uVar1 % 0x7c);
        uVar2 = param_1[uVar3 + 4];
        if (uVar2 == 0) {
          return false;
        }
        do {
          if (uVar2 == uVar1 + 1) {
            return true;
          }
          uVar2 = (int)uVar3 + 1;
          if (uVar2 == 0x7c) {
            uVar2 = 0;
          }
          uVar3 = (ulonglong)uVar2;
          uVar2 = param_1[uVar3 + 4];
        } while (uVar2 != 0);
        return false;
      }
      uVar3 = (ulonglong)uVar1;
      uVar1 = uVar1 % uVar2;
      param_1 = *(uint **)(param_1 + (uVar3 / uVar2) * 2 + 4);
    } while (param_1 != (uint *)0x0);
  }
  return false;
}



// FUNCTION 149560381 FUN_149560381 body=51 status=ok
// SIG undefined FUN_149560381(void)

undefined8 FUN_149560381(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_145e3b961();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  return 0;
}



// FUNCTION 1495603b4 FUN_1495603b4 body=196 status=ok
// SIG undefined FUN_1495603b4(void)

undefined8 FUN_1495603b4(longlong param_1,void *param_2,int param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar6 = param_3 + param_4;
  uVar2 = 0x20a;
  if (lVar6 <= *(longlong *)(param_1 + 0x20)) {
    if ((param_4 == 0) || (*(longlong *)(param_1 + 0x30) != param_4)) {
      plVar5 = (longlong *)(param_1 + 0x18);
      lVar3 = 0;
      do {
        plVar5 = (longlong *)*plVar5;
        if (plVar5 == (longlong *)0x0) {
          plVar5 = (longlong *)0x0;
          break;
        }
        lVar3 = lVar3 + *(int *)(param_1 + 8);
      } while (lVar3 <= param_4);
    }
    else {
      plVar5 = *(longlong **)(param_1 + 0x38);
    }
    param_4 = param_4 % (longlong)*(int *)(param_1 + 8);
    do {
      iVar4 = *(int *)(param_1 + 8) - (int)param_4;
      iVar1 = iVar4;
      if (param_3 < iVar4) {
        iVar1 = param_3;
      }
      memcpy(param_2,(void *)((longlong)plVar5 + (longlong)(int)param_4 + 8),(longlong)iVar1);
      param_3 = param_3 - iVar4;
      if ((param_3 < 0) || (plVar5 = (longlong *)*plVar5, param_3 == 0)) break;
      param_2 = (void *)((longlong)param_2 + (longlong)iVar1);
      param_4 = 0;
    } while (plVar5 != (longlong *)0x0);
    if (plVar5 == (longlong *)0x0) {
      lVar6 = 0;
    }
    *(longlong *)(param_1 + 0x30) = lVar6;
    *(longlong **)(param_1 + 0x38) = plVar5;
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 149560478 FUN_149560478 body=733 status=ok
// SIG undefined FUN_149560478(void)

int FUN_149560478(longlong *param_1,void *param_2,int param_3,longlong param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  size_t _Size;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong *local_b8;
  longlong local_b0;
  undefined4 local_a8;
  uint local_a4;
  longlong *local_a0;
  undefined8 *local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((longlong)*(int *)((longlong)param_1 + 0xc) < 1) ||
     (param_3 + param_4 <= (longlong)*(int *)((longlong)param_1 + 0xc))) {
    local_b0 = param_4;
    if (0 < param_3) {
      local_b8 = param_1 + 3;
      lVar5 = param_1[4];
      iVar3 = 0xc0a;
      iVar8 = param_3;
      do {
        plVar7 = (longlong *)param_1[5];
        iVar9 = (int)param_1[1];
        lVar5 = lVar5 % (longlong)iVar9;
        iVar6 = iVar9 - (int)lVar5;
        if (iVar8 < iVar6) {
          iVar6 = iVar8;
        }
        plVar4 = plVar7;
        if (lVar5 == 0) {
          if ((iVar9 + 8 < 1) ||
             (plVar4 = (longlong *)FUN_145e3bd67(iVar9 + 8), plVar4 == (longlong *)0x0))
          goto LAB_14956068f;
          if (plVar7 == (longlong *)0x0) {
            plVar7 = local_b8;
          }
          *plVar4 = 0;
          *plVar7 = (longlong)plVar4;
          param_1[5] = (longlong)plVar4;
        }
        _Size = (size_t)iVar6;
        memcpy((void *)((longlong)plVar4 + lVar5 + 8),param_2,_Size);
        param_2 = (void *)((longlong)param_2 + _Size);
        lVar5 = param_1[4] + _Size;
        param_1[4] = lVar5;
        iVar9 = iVar8 - iVar6;
        bVar2 = iVar6 <= iVar8;
        iVar8 = iVar9;
      } while (iVar9 != 0 && bVar2);
    }
    *(int *)(param_1 + 2) = (int)local_b0 + param_3;
    iVar3 = 0;
  }
  else {
    puVar1 = (undefined8 *)((longlong)param_1 + 0xc);
    local_80 = *param_1;
    local_b8 = (longlong *)CONCAT44(local_b8._4_4_,(int)param_1[1]);
    local_50 = *(undefined4 *)((longlong)param_1 + 0x14);
    local_58 = *puVar1;
    plVar7 = (longlong *)param_1[3];
    lVar5 = param_1[4];
    local_68 = param_1[7];
    local_78 = param_1[5];
    lStack_70 = param_1[6];
    local_a4 = *(uint *)(param_1 + 8);
    local_a8 = *(undefined4 *)((longlong)param_1 + 0x44);
    local_88 = param_1[9];
    local_90 = param_1[10];
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    local_c8 = 0;
    iVar3 = (**(code **)(local_88 + 0x28))(local_88,local_90,param_1,local_a4 & 0x1087f7f);
    plVar4 = plVar7;
    if (iVar3 == 0) {
      if (plVar7 != (longlong *)0x0) {
        lVar10 = 0;
        iVar8 = (int)local_b8;
        local_b0 = param_4;
        local_a0 = plVar7;
        local_98 = puVar1;
        do {
          if (lVar5 < iVar8 + lVar10) {
            iVar8 = (int)lVar5 - (int)lVar10;
          }
          iVar3 = (**(code **)(*param_1 + 0x18))(param_1,plVar7 + 1,iVar8,lVar10);
          plVar4 = local_a0;
          puVar1 = local_98;
          if (iVar3 != 0) goto LAB_149560569;
          lVar10 = lVar10 + iVar8;
          plVar7 = (longlong *)*plVar7;
        } while (plVar7 != (longlong *)0x0);
        do {
          plVar4 = (longlong *)*plVar4;
          FUN_145e3b961();
        } while (plVar4 != (longlong *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
    }
LAB_149560569:
    local_98 = puVar1;
    if (*param_1 != 0) {
      (**(code **)(*param_1 + 8))(param_1);
    }
    *param_1 = local_80;
    *(int *)(param_1 + 1) = (int)local_b8;
    *(undefined4 *)(local_98 + 1) = local_50;
    *local_98 = local_58;
    param_1[3] = (longlong)plVar4;
    param_1[4] = lVar5;
    param_1[7] = local_68;
    param_1[5] = local_78;
    param_1[6] = lStack_70;
    *(uint *)(param_1 + 8) = local_a4;
    *(undefined4 *)((longlong)param_1 + 0x44) = local_a8;
    param_1[9] = local_88;
    param_1[10] = local_90;
  }
LAB_14956068f:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 14956077b FUN_14956077b body=81 status=ok
// SIG undefined FUN_14956077b(void)

undefined8 FUN_14956077b(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    while (puVar1 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*puVar1;
      FUN_145e3b961();
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return 0;
}



// FUNCTION 1495607d9 FUN_1495607d9 body=428 status=ok
// SIG undefined FUN_1495607d9(void)

/* WARNING: Type propagation algorithm not settling */

uint FUN_1495607d9(uint *param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint *puVar3;
  void *_Dst;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  uVar4 = param_2 - 1;
  uVar2 = *param_1;
  while( true ) {
    if (uVar2 < 0xf81) {
      pbVar1 = (byte *)((longlong)param_1 + (ulonglong)(uVar4 >> 3) + 0x10);
      *pbVar1 = *pbVar1 | (byte)(1 << ((byte)uVar4 & 7));
      return 0;
    }
    uVar2 = param_1[2];
    if (uVar2 == 0) break;
    uVar5 = (ulonglong)uVar4 / (ulonglong)uVar2;
    uVar4 = uVar4 % uVar2;
    puVar3 = *(uint **)(param_1 + uVar5 * 2 + 4);
    if (puVar3 == (uint *)0x0) {
      puVar3 = (uint *)FUN_145e3bd67(0x200);
      if (puVar3 == (uint *)0x0) {
        (param_1 + uVar5 * 2 + 4)[0] = 0;
        (param_1 + uVar5 * 2 + 4)[1] = 0;
        return 7;
      }
      memset(puVar3 + 1,0,0x1fc);
      *puVar3 = uVar2;
      *(uint **)(param_1 + uVar5 * 2 + 4) = puVar3;
    }
    uVar2 = *puVar3;
    param_1 = puVar3;
  }
  uVar2 = uVar4 + 1;
  uVar5 = (ulonglong)(uVar4 % 0x7c);
  puVar3 = param_1 + 4;
  uVar4 = param_1[uVar5 + 4];
  if (uVar4 == 0) {
    uVar4 = param_1[1];
    if (uVar4 < 0x7b) {
LAB_149560955:
      param_1[1] = uVar4 + 1;
      param_1[uVar5 + 4] = uVar2;
      return 0;
    }
  }
  else {
    do {
      if (uVar4 == uVar2) {
        return 0;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      if (0x7b < uVar4) {
        uVar5 = 0;
      }
      uVar4 = puVar3[uVar5];
    } while (uVar4 != 0);
    uVar4 = param_1[1];
    if (uVar4 < 0x3e) goto LAB_149560955;
  }
  _Dst = (void *)FUN_145e3bd67(0x1f0);
  uVar4 = 7;
  if (_Dst != (void *)0x0) {
    memcpy(_Dst,puVar3,0x1f0);
    lVar6 = 0;
    memset(puVar3,0,0x1f0);
    param_1[2] = (uint)(((ulonglong)*param_1 + 0x3d) / 0x3e);
    uVar4 = FUN_1495607d9(param_1,uVar2);
    do {
      if (*(int *)((longlong)_Dst + lVar6 * 4) != 0) {
        uVar2 = FUN_1495607d9(param_1);
        uVar4 = uVar4 | uVar2;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x7c);
    FUN_145e3b961(_Dst);
  }
  return uVar4;
}



// FUNCTION 149560985 FUN_149560985 body=104 status=ok
// SIG undefined FUN_149560985(void)

void FUN_149560985(int param_1,uint *param_2,int param_3,int *param_4,int *param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  
  if (param_4 == (int *)0x0) {
    iVar5 = 0;
    iVar6 = 0;
  }
  else {
    iVar6 = *param_4;
    iVar5 = param_4[1];
  }
  puVar4 = (uint *)((longlong)param_3 + (longlong)param_2);
  if (param_1 == 0) {
    do {
      uVar2 = *param_2;
      uVar3 = param_2[1];
      iVar6 = iVar6 + iVar5 +
              (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18);
      iVar5 = (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) +
              iVar5 + iVar6;
      param_2 = param_2 + 2;
    } while (param_2 < puVar4);
  }
  else {
    do {
      iVar6 = iVar6 + iVar5 + *param_2;
      puVar1 = param_2 + 1;
      param_2 = param_2 + 2;
      iVar5 = iVar5 + *puVar1 + iVar6;
    } while (param_2 < puVar4);
  }
  *param_5 = iVar6;
  param_5[1] = iVar5;
  return;
}



// FUNCTION 1495609ed FUN_1495609ed body=415 status=ok
// SIG undefined FUN_1495609ed(void)

int FUN_1495609ed(longlong param_1,int param_2,uint *param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  char *local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = *(uint *)(param_1 + 0x58);
  if ((uVar2 == 0) || ((*(short *)(param_1 + 0x3c) == 0 && (*(char *)(param_1 + 0x46) == '\0')))) {
    *param_3 = 0;
    iVar3 = 0;
  }
  else {
    uVar8 = (ulonglong)(uVar2 + 0x1000) + 0xffffffff021 >> 0xc;
    uVar4 = 0;
    iVar6 = (int)((ulonglong)(*(int *)(param_1 + 0x78) + 0x1000) + 0xffffffff021 >> 0xc);
    if (iVar6 <= (int)uVar8) {
      uVar9 = (ulonglong)(param_2 * 0x17f & 0x1fff);
      do {
        iVar7 = (int)uVar8;
        iVar3 = FUN_149561ea4(param_1,uVar8 & 0xffffffff,&local_60);
        if (iVar3 != 0) goto LAB_149560a60;
        if (*(short *)(local_60 + uVar9 * 2) != 0) {
          uVar4 = 0;
          iVar3 = -0x2001;
          uVar8 = uVar9;
          do {
            uVar1 = *(ushort *)(local_60 + uVar8 * 2);
            uVar5 = local_50 + (uint)uVar1;
            if (((uVar5 <= uVar2) && (*(uint *)(param_1 + 0x78) <= uVar5)) &&
               (*(int *)(local_58 + (ulonglong)uVar1 * 4) == param_2)) {
              uVar4 = uVar5;
            }
            iVar3 = iVar3 + 1;
            if (iVar3 == 0) {
              local_68 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
              iVar3 = 0xb;
              FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0xf2b8);
              goto LAB_149560a60;
            }
            uVar8 = (ulonglong)((int)uVar8 + 1U & 0x1fff);
          } while (*(short *)(local_60 + uVar8 * 2) != 0);
          if (uVar4 != 0) goto LAB_149560a5e;
        }
        uVar8 = (ulonglong)(iVar7 - 1);
      } while (iVar6 < iVar7);
      uVar4 = 0;
    }
LAB_149560a5e:
    *param_3 = uVar4;
    iVar3 = 0;
  }
LAB_149560a60:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 149560b8d FUN_149560b8d body=138 status=ok
// SIG undefined FUN_149560b8d(void)

void FUN_149560b8d(undefined8 *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_2 + 8);
  local_58 = local_48;
  FUN_149561f16(*param_1,*(undefined4 *)(param_2 + 0x30),param_3,uVar1);
  iVar2 = FUN_149561fa7(param_1,local_48,0x18,param_4);
  if (iVar2 == 0) {
    FUN_149561fa7(param_1,uVar1,*(undefined4 *)((longlong)param_1 + 0x1c),param_4 + 0x18);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149560c18 FUN_149560c18 body=122 status=ok
// SIG undefined FUN_149560c18(void)

void FUN_149560c18(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                    (*(longlong **)(param_1 + 0x10),&local_20);
  if (iVar1 == 0) {
    if (local_20 <= param_2) goto LAB_149560c5e;
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))
                      (*(longlong **)(param_1 + 0x10),param_2);
    if (iVar1 == 0) goto LAB_149560c5e;
  }
  FUN_14955599e(iVar1,"cannot limit WAL size: %s",*(undefined8 *)(param_1 + 0x80));
LAB_149560c5e:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149560c93 FUN_149560c93 body=321 status=ok
// SIG undefined FUN_149560c93(void)

int FUN_149560c93(undefined8 param_1,uint param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_88 [32];
  char *local_68;
  int local_58;
  undefined4 uStack_54;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar2 = FUN_149561ea4(param_1,(ulonglong)(param_2 + 0x1000) + 0xffffffff021 >> 0xc,&local_58);
  lVar1 = local_50;
  if (iVar2 == 0) {
    iVar2 = param_2 - local_48;
    if (iVar2 == 1) {
      memset((void *)(local_50 + 4),0,(longlong)((local_58 - (int)(void *)(local_50 + 4)) + 0x4000))
      ;
    }
    if (*(int *)(lVar1 + (longlong)iVar2 * 4) != 0) {
      FUN_149562047(param_1);
    }
    uVar3 = (ulonglong)(param_3 * 0x17f & 0x1fff);
    if (*(short *)(CONCAT44(uStack_54,local_58) + uVar3 * 2) != 0) {
      local_48 = ~param_2 + local_48;
      do {
        local_48 = local_48 + 1;
        if (local_48 == 0) {
          local_68 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
          iVar2 = 0xb;
          FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0xeb81);
          goto LAB_149560cdf;
        }
        uVar3 = (ulonglong)((int)uVar3 + 1U & 0x1fff);
      } while (*(short *)(CONCAT44(uStack_54,local_58) + uVar3 * 2) != 0);
    }
    *(int *)(local_50 + (longlong)iVar2 * 4) = param_3;
    *(short *)(CONCAT44(uStack_54,local_58) + uVar3 * 2) = (short)iVar2;
    iVar2 = 0;
  }
LAB_149560cdf:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar2;
}



// FUNCTION 149560dd5 FUN_149560dd5 body=138 status=ok
// SIG undefined FUN_149560dd5(void)

void FUN_149560dd5(longlong param_1)

{
  undefined8 *puVar1;
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
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  
  puVar1 = (undefined8 *)**(longlong **)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x54) = 1;
  *(undefined4 *)(param_1 + 0x48) = 0x2de218;
  iVar18 = 0;
  uVar19 = 0x40;
  iVar20 = 0;
  do {
    iVar20 = iVar20 + iVar18 + *(int *)(param_1 + 8 + uVar19);
    iVar18 = iVar18 + *(int *)(param_1 + 0xc + uVar19) + iVar20;
    uVar19 = uVar19 + 8;
  } while (uVar19 < 0x68);
  *(int *)(param_1 + 0x70) = iVar20;
  *(int *)(param_1 + 0x74) = iVar18;
  uVar2 = *(undefined4 *)(param_1 + 0x48);
  uVar3 = *(undefined4 *)(param_1 + 0x4c);
  uVar4 = *(undefined4 *)(param_1 + 0x50);
  uVar5 = *(undefined4 *)(param_1 + 0x54);
  uVar6 = *(undefined4 *)(param_1 + 0x58);
  uVar7 = *(undefined4 *)(param_1 + 0x5c);
  uVar8 = *(undefined4 *)(param_1 + 0x60);
  uVar9 = *(undefined4 *)(param_1 + 100);
  uVar10 = *(undefined4 *)(param_1 + 0x6c);
  uVar11 = *(undefined4 *)(param_1 + 0x70);
  uVar12 = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(puVar1 + 10) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)((longlong)puVar1 + 0x54) = uVar10;
  *(undefined4 *)(puVar1 + 0xb) = uVar11;
  *(undefined4 *)((longlong)puVar1 + 0x5c) = uVar12;
  *(undefined4 *)(puVar1 + 8) = uVar6;
  *(undefined4 *)((longlong)puVar1 + 0x44) = uVar7;
  *(undefined4 *)(puVar1 + 9) = uVar8;
  *(undefined4 *)((longlong)puVar1 + 0x4c) = uVar9;
  *(undefined4 *)(puVar1 + 6) = uVar2;
  *(undefined4 *)((longlong)puVar1 + 0x34) = uVar3;
  *(undefined4 *)(puVar1 + 7) = uVar4;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = uVar5;
  if (*(char *)(param_1 + 0x3f) != '\x02') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x78))();
  }
  uVar13 = *(undefined8 *)(param_1 + 0x48);
  uVar14 = *(undefined8 *)(param_1 + 0x50);
  uVar15 = *(undefined8 *)(param_1 + 0x58);
  uVar16 = *(undefined8 *)(param_1 + 0x60);
  uVar17 = *(undefined8 *)(param_1 + 0x70);
  puVar1[4] = *(undefined8 *)(param_1 + 0x68);
  puVar1[5] = uVar17;
  puVar1[2] = uVar15;
  puVar1[3] = uVar16;
  *puVar1 = uVar13;
  puVar1[1] = uVar14;
  return;
}



// FUNCTION 149560e5f FUN_149560e5f body=84 status=ok
// SIG undefined FUN_149560e5f(void)

void FUN_149560e5f(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar1 = **(longlong **)(param_1 + 0x30);
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  lVar3 = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar2 = *(uint *)(param_1 + 0x68);
  uVar2 = (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) + 1;
  *(uint *)(param_1 + 0x68) =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 * 0x1000000;
  *(undefined4 *)(param_1 + 0x6c) = param_2;
  FUN_149560dd5();
  *(undefined4 *)(lVar1 + 0x60) = 0;
  *(undefined4 *)(lVar1 + 0x80) = 0;
  *(undefined4 *)(lVar1 + 0x68) = 0;
  do {
    *(undefined4 *)(lVar1 + 0x6c + lVar3 * 4) = 0xffffffff;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  return;
}



// FUNCTION 149560eb3 FUN_149560eb3 body=1446 status=ok
// SIG undefined FUN_149560eb3(void)

uint FUN_149560eb3(longlong *param_1,undefined4 *param_2,int param_3,uint param_4)

{
  uint uVar1;
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
  char cVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  undefined4 uVar19;
  longlong *plVar20;
  undefined4 uVar21;
  longlong lVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  longlong *local_90;
  int *local_88;
  int local_80;
  undefined1 local_7c [4];
  undefined1 local_78 [8];
  longlong local_70;
  undefined1 local_68 [16];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (5 < (int)param_4) {
    uVar13 = 0xf;
    if (100 < param_4) goto LAB_14956101b;
    iVar23 = 1;
    if (9 < param_4) {
      iVar23 = (param_4 - 9) * (param_4 - 9) * 0x27;
    }
    (**(code **)(*param_1 + 0x70))(*param_1,iVar23);
  }
  if (param_3 != 0) {
    lVar22 = *(longlong *)param_1[6];
    uVar13 = 0;
    goto LAB_149560f2a;
  }
  if (*(char *)((longlong)param_1 + 0x46) != '\0') {
LAB_14956120d:
    if ((*(char *)((longlong)param_1 + 0x3f) == '\0') &&
       (uVar13 = (**(code **)(*(longlong *)param_1[1] + 0x70))((longlong *)param_1[1],3,1,6),
       uVar13 != 0)) {
      uVar16 = 0xffffffff;
      if (uVar13 != 5) {
        uVar16 = uVar13;
      }
    }
    else {
      *(undefined2 *)((longlong)param_1 + 0x3c) = 0;
      local_98 = local_78;
      puVar18 = (undefined1 *)0x0;
      uVar15 = (**(code **)(*(longlong *)param_1[1] + 0x68))((longlong *)param_1[1],0,0x8000,0);
      uVar16 = 0xffffffff;
      if (uVar15 != 8) {
        if (uVar15 == 0x508) {
          puVar2 = *(undefined4 **)param_1[6];
          uVar19 = puVar2[1];
          uVar21 = puVar2[2];
          uVar3 = puVar2[3];
          uVar4 = puVar2[4];
          uVar5 = puVar2[5];
          uVar6 = puVar2[6];
          uVar7 = puVar2[7];
          uVar8 = puVar2[8];
          uVar9 = puVar2[9];
          uVar10 = puVar2[10];
          uVar11 = puVar2[0xb];
          *(undefined4 *)(param_1 + 9) = *puVar2;
          *(undefined4 *)((longlong)param_1 + 0x4c) = uVar19;
          *(undefined4 *)(param_1 + 10) = uVar21;
          *(undefined4 *)((longlong)param_1 + 0x54) = uVar3;
          *(undefined4 *)(param_1 + 0xb) = uVar4;
          *(undefined4 *)((longlong)param_1 + 0x5c) = uVar5;
          *(undefined4 *)(param_1 + 0xc) = uVar6;
          *(undefined4 *)((longlong)param_1 + 100) = uVar7;
          *(undefined4 *)(param_1 + 0xd) = uVar8;
          *(undefined4 *)((longlong)param_1 + 0x6c) = uVar9;
          *(undefined4 *)(param_1 + 0xe) = uVar10;
          *(undefined4 *)((longlong)param_1 + 0x74) = uVar11;
          uVar16 = (**(code **)(*(longlong *)param_1[2] + 0x30))((longlong *)param_1[2],&local_70);
          if (uVar16 == 0) {
            if (local_70 < 0x20) {
              *param_2 = 1;
              puVar18 = (undefined1 *)0x0;
              uVar15 = -(uint)((int)param_1[0xb] != 0);
              goto LAB_14956131a;
            }
            uVar16 = (**(code **)(*(longlong *)param_1[2] + 0x10))
                               ((longlong *)param_1[2],local_68,0x20,0);
            if ((uVar16 == 0) && (uVar16 = 0xffffffff, param_1[0xd] == local_58)) {
              lVar22 = (ulonglong)*(ushort *)((longlong)param_1 + 0x56) + 0x18;
              puVar18 = (undefined1 *)FUN_145e3bd67(lVar22);
              uVar16 = 7;
              if (puVar18 != (undefined1 *)0x0) {
                lVar27 = ((ulonglong)*(ushort *)((longlong)param_1 + 0x56) + 0x18) *
                         (ulonglong)*(uint *)(param_1 + 0xb);
                lVar26 = lVar27 + lVar22 + 0x20;
                if (local_70 < lVar26) {
                  uVar15 = 0;
                  uVar19 = (int)param_1[0xc];
                  uVar21 = *(undefined4 *)((longlong)param_1 + 100);
                }
                else {
                  local_90 = (longlong *)
                             CONCAT44(local_90._4_4_,*(undefined4 *)((longlong)param_1 + 100));
                  local_88 = (int *)CONCAT44(local_88._4_4_,(int)param_1[0xc]);
                  lVar27 = lVar27 + 0x20;
                  do {
                    uVar15 = (**(code **)(*(longlong *)param_1[2] + 0x10))
                                       ((longlong *)param_1[2],puVar18,lVar22,lVar27);
                    if (uVar15 != 0) goto LAB_14956143c;
                    local_98 = puVar18;
                    iVar23 = FUN_149561d7a(param_1,local_7c,&local_80,puVar18 + 0x18);
                    if (iVar23 == 0) break;
                    if (local_80 != 0) {
                      uVar15 = 0xffffffff;
                      goto LAB_14956143c;
                    }
                    lVar26 = lVar26 + lVar22;
                    lVar27 = lVar27 + lVar22;
                  } while (lVar26 <= local_70);
                  uVar15 = 0;
LAB_14956143c:
                  uVar19 = local_88._0_4_;
                  uVar21 = local_90._0_4_;
                }
                *(undefined4 *)(param_1 + 0xc) = uVar19;
                *(undefined4 *)((longlong)param_1 + 100) = uVar21;
                goto LAB_14956131a;
              }
            }
          }
        }
        else {
LAB_14956131a:
          FUN_145e3b961(puVar18);
          uVar16 = uVar15;
          uVar13 = 0;
          if (uVar15 == 0) goto LAB_14956101b;
        }
      }
    }
    if (0 < (int)param_1[5]) {
      lVar22 = 0;
      do {
        FUN_145e3b961(*(undefined8 *)(param_1[6] + lVar22 * 8));
        *(undefined8 *)(param_1[6] + lVar22 * 8) = 0;
        lVar22 = lVar22 + 1;
      } while (lVar22 < (int)param_1[5]);
    }
    *(undefined1 *)((longlong)param_1 + 0x46) = 0;
    FUN_149561e35(param_1);
    *param_2 = 1;
    uVar13 = uVar16;
    goto LAB_14956101b;
  }
  uVar13 = FUN_14956145a(param_1,param_2);
  if (uVar13 == 0) {
    if (*(char *)((longlong)param_1 + 0x46) != '\0') goto LAB_14956120d;
    lVar22 = *(longlong *)param_1[6];
    uVar13 = 0;
    if (*(int *)(lVar22 + 0x60) == (int)param_1[0xb]) {
      cVar12 = *(char *)((longlong)param_1 + 0x3f);
      uVar13 = 0;
      if (cVar12 == '\0') {
        uVar13 = (**(code **)(*(longlong *)param_1[1] + 0x70))((longlong *)param_1[1],3,1,6);
        cVar12 = *(char *)((longlong)param_1 + 0x3f);
      }
      if (cVar12 != '\x02') {
        (**(code **)(*(longlong *)param_1[1] + 0x78))();
      }
      if (uVar13 == 5) goto LAB_149560f2a;
      if (uVar13 != 0) goto LAB_14956101b;
      iVar23 = memcmp(*(void **)param_1[6],param_1 + 9,0x30);
      if (iVar23 != 0) {
        uVar13 = 0xffffffff;
        if (*(char *)((longlong)param_1 + 0x3f) != '\0') goto LAB_14956101b;
        plVar20 = (longlong *)param_1[1];
        lVar22 = *plVar20;
        iVar23 = 3;
        goto LAB_14956108e;
      }
      *(undefined2 *)((longlong)param_1 + 0x3c) = 0;
    }
    else {
LAB_149560f2a:
      local_88 = (int *)(lVar22 + 0x60);
      plVar20 = param_1 + 6;
      uVar15 = *(uint *)(param_1 + 0xb);
      uVar17 = 0;
      uVar16 = 0;
      uVar25 = 0;
      do {
        uVar1 = *(uint *)(lVar22 + 0x68 + uVar17 * 4);
        uVar17 = uVar17 + 1;
        if (uVar1 <= uVar15 && uVar16 <= uVar1) {
          uVar25 = uVar17 & 0xffffffff;
          uVar16 = uVar1;
        }
        iVar24 = (int)uVar25;
      } while (uVar17 != 4);
      if ((*(byte *)((longlong)param_1 + 0x42) & 2) == 0) {
        if ((uVar16 < uVar15) || (iVar24 == 0)) {
          lVar26 = 0;
          local_90 = plVar20;
          do {
            if (*(char *)((longlong)param_1 + 0x3f) != '\0') {
LAB_1495610ac:
              *(uint *)(lVar22 + 0x68 + lVar26 * 4) = uVar15;
              iVar24 = (int)lVar26 + 1;
              plVar20 = local_90;
              uVar16 = uVar15;
              if (*(char *)((longlong)param_1 + 0x3f) == '\0') {
                (**(code **)(*(longlong *)param_1[1] + 0x70))
                          ((longlong *)param_1[1],lVar26 + 4U & 0xffffffff,1,9);
                plVar20 = local_90;
              }
              goto LAB_149560fbf;
            }
            uVar13 = (**(code **)(*(longlong *)param_1[1] + 0x70))
                               ((longlong *)param_1[1],lVar26 + 4U & 0xffffffff,1,10);
            if (uVar13 != 5) {
              if (uVar13 == 0) goto LAB_1495610ac;
              goto LAB_14956101b;
            }
            lVar26 = lVar26 + 1;
          } while ((int)lVar26 != 4);
          uVar13 = 5;
          plVar20 = local_90;
          goto LAB_149560fb6;
        }
      }
      else {
LAB_149560fb6:
        if (iVar24 == 0) {
          uVar13 = -(uint)(uVar13 == 5) | 0x508;
          goto LAB_14956101b;
        }
      }
LAB_149560fbf:
      iVar23 = iVar24 + 3;
      if ((*(char *)((longlong)param_1 + 0x3f) == '\0') &&
         (uVar15 = (**(code **)(*(longlong *)param_1[1] + 0x70))((longlong *)param_1[1],iVar23,1,6),
         uVar15 != 0)) {
        uVar13 = 0xffffffff;
        goto LAB_14956106d;
      }
      *(int *)(param_1 + 0xf) = *local_88 + 1;
      if (*(char *)((longlong)param_1 + 0x3f) != '\x02') {
        (**(code **)(*(longlong *)param_1[1] + 0x78))();
      }
      if ((*(uint *)(lVar22 + 100 + (longlong)iVar24 * 4) != uVar16) ||
         (iVar14 = memcmp(*(void **)*plVar20,param_1 + 9,0x30), iVar14 != 0)) {
        uVar13 = 0xffffffff;
        if (*(char *)((longlong)param_1 + 0x3f) != '\0') goto LAB_14956101b;
        plVar20 = (longlong *)param_1[1];
        lVar22 = *plVar20;
        goto LAB_14956108e;
      }
      *(short *)((longlong)param_1 + 0x3c) = (short)iVar24;
    }
    uVar13 = 0;
  }
  else {
    if (((uVar13 != 5) || (uVar13 = 0xffffffff, *(longlong *)param_1[6] == 0)) ||
       (*(char *)((longlong)param_1 + 0x3f) != '\0')) goto LAB_14956101b;
    uVar15 = (**(code **)(*(longlong *)param_1[1] + 0x70))((longlong *)param_1[1],2,1,6);
    if (uVar15 == 0) {
      if (*(char *)((longlong)param_1 + 0x3f) != '\0') goto LAB_14956101b;
      plVar20 = (longlong *)param_1[1];
      lVar22 = *plVar20;
      iVar23 = 2;
LAB_14956108e:
      (**(code **)(lVar22 + 0x70))(plVar20,iVar23,1,5);
      uVar13 = 0xffffffff;
      goto LAB_14956101b;
    }
    uVar13 = 0x105;
LAB_14956106d:
    if (uVar15 != 5) {
      uVar13 = uVar15;
    }
  }
LAB_14956101b:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
}



// FUNCTION 14956145a FUN_14956145a body=1635 status=ok
// SIG undefined FUN_14956145a(void)

int FUN_14956145a(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined1 auStack_d8 [32];
  char *local_b8;
  int local_a4;
  char *local_a0;
  longlong local_98;
  ulonglong local_90;
  char *local_88;
  longlong local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70;
  uint local_68;
  int local_64;
  uint local_60 [2];
  undefined8 local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_1 + 0x28) < 1) {
LAB_1495614a2:
    iVar4 = FUN_149561c70(param_1,0,&local_80);
    if (iVar4 != 0) {
      if (iVar4 != 0x508) goto LAB_149561521;
      *(undefined1 *)(param_1 + 0x46) = 1;
      *(undefined1 *)(param_1 + 0x3f) = 2;
      *param_2 = 1;
    }
    if (local_80 != 0) goto LAB_149561551;
LAB_1495614d5:
    if ((*(char *)(param_1 + 0x46) == '\0') && ((*(byte *)(param_1 + 0x42) & 2) != 0)) {
      iVar4 = 0x108;
      iVar5 = iVar4;
      if (((*(char *)(param_1 + 0x3f) == '\0') &&
          (iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))
                             (*(longlong **)(param_1 + 8),0,1,6), iVar5 == 0)) &&
         (iVar5 = iVar4, *(char *)(param_1 + 0x3f) == '\0')) {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),0,1,5);
      }
    }
    else if ((*(char *)(param_1 + 0x3f) != '\0') ||
            (iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))
                               (*(longlong **)(param_1 + 8),0,1,10), iVar5 == 0)) {
      *(undefined1 *)(param_1 + 0x40) = 1;
      if (((*(int *)(param_1 + 0x28) < 1) ||
          (local_80 = **(longlong **)(param_1 + 0x30), local_80 == 0)) &&
         (iVar4 = FUN_149561c70(param_1,0,&local_80), iVar4 != 0)) {
LAB_14956164e:
        *(undefined1 *)(param_1 + 0x40) = 0;
        iVar5 = iVar4;
        if (*(char *)(param_1 + 0x3f) != '\0') goto LAB_14956150b;
        bVar3 = false;
      }
      else {
        iVar4 = FUN_149561abe(param_1,param_2);
        if (iVar4 != 0) {
          iVar13 = 2 - (uint)*(byte *)(param_1 + 0x41);
          iVar5 = *(byte *)(param_1 + 0x41) + 1;
          if (*(char *)(param_1 + 0x3f) == '\0') {
            iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))
                              (*(longlong **)(param_1 + 8),iVar5,iVar13,10);
            if (iVar4 == 0) {
              if ((*(char *)(param_1 + 0x3f) != '\0') ||
                 (iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))
                                    (*(longlong **)(param_1 + 8),4,4,10), iVar4 == 0))
              goto LAB_1495616ca;
              if (*(char *)(param_1 + 0x3f) != '\0') goto LAB_149561761;
              plVar9 = *(longlong **)(param_1 + 8);
              lVar7 = *plVar9;
              goto LAB_149561722;
            }
          }
          else {
LAB_1495616ca:
            *(undefined8 *)(param_1 + 0x68) = 0;
            *(undefined8 *)(param_1 + 0x70) = 0;
            *(undefined8 *)(param_1 + 0x58) = 0;
            *(undefined8 *)(param_1 + 0x60) = 0;
            *(undefined8 *)(param_1 + 0x48) = 0;
            *(undefined8 *)(param_1 + 0x50) = 0;
            iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                              (*(longlong **)(param_1 + 0x10),&local_70);
            if (iVar4 == 0) {
              if (local_70 < 0x21) {
                uVar15 = 0;
                uVar14 = 0;
              }
              else {
                iVar12 = 0;
                iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
                                  (*(longlong **)(param_1 + 0x10),&local_68,0x20,0);
                if (iVar4 != 0) goto LAB_1495616ee;
                iVar4 = iVar12;
                if ((local_68 >> 0x18 & 0xfffffffe | (local_68 & 0xff0000) >> 8 |
                     (local_68 & 0xff00) << 8 | local_68 << 0x18) == 0x377f0682) {
                  uVar16 = local_60[0] >> 0x18 | (local_60[0] & 0xff0000) >> 8 |
                           (local_60[0] & 0xff00) << 8 | local_60[0] << 0x18;
                  if (uVar16 - 0x10001 < 0xffff01ff || (local_60[0] & local_60[0] - 1) != 0)
                  goto LAB_14956181d;
                  *(byte *)(param_1 + 0x55) = (byte)(local_68 >> 0x18) & 1;
                  *(uint *)(param_1 + 0x38) = uVar16;
                  *(uint *)(param_1 + 0x88) =
                       local_60[1] >> 0x18 | (local_60[1] & 0xff0000) >> 8 |
                       (local_60[1] & 0xff00) << 8 | local_60[1] << 0x18;
                  *(undefined8 *)(param_1 + 0x68) = local_58;
                  if ((local_68 >> 0x18 & 1) == 0) {
                    uVar6 = 0;
                    uVar11 = 0xfffffffffffffff8;
                    uVar8 = 0;
                    do {
                      uVar8 = uVar8 + uVar6 + *(int *)((longlong)local_60 + uVar11);
                      uVar6 = uVar6 + *(int *)((longlong)local_60 + uVar11 + 4) + uVar8;
                      uVar11 = uVar11 + 8;
                    } while (uVar11 < 0x10);
                  }
                  else {
                    uVar6 = 0;
                    uVar11 = 0xfffffffffffffff8;
                    uVar8 = 0;
                    do {
                      uVar1 = *(uint *)((longlong)local_60 + uVar11);
                      uVar2 = *(uint *)((longlong)local_60 + uVar11 + 4);
                      uVar8 = uVar8 + uVar6 +
                              (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                              uVar1 << 0x18);
                      uVar6 = (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                              uVar2 << 0x18) + uVar6 + uVar8;
                      uVar11 = uVar11 + 8;
                    } while (uVar11 < 0x10);
                  }
                  *(uint *)(param_1 + 0x60) = uVar8;
                  *(uint *)(param_1 + 100) = uVar6;
                  if ((uVar8 != (local_50 >> 0x18 | (local_50 & 0xff0000) >> 8 |
                                 (local_50 & 0xff00) << 8 | local_50 << 0x18)) ||
                     (iVar4 = 0,
                     uVar6 != (local_4c >> 0x18 | (local_4c & 0xff0000) >> 8 |
                               (local_4c & 0xff00) << 8 | local_4c << 0x18))) goto LAB_14956181d;
                  if (local_64 != 0x18e22d00) {
                    local_b8 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
                    iVar4 = 0xe;
                    FUN_14955599e(0xe,"%s at line %d of [%.10s]","cannot open file",0xec0b);
                    goto LAB_14956181d;
                  }
                  local_90 = (ulonglong)(uVar16 + 0x18);
                  local_a0 = (char *)FUN_145e3bd67();
                  iVar4 = 7;
                  if (local_a0 == (char *)0x0) goto LAB_1495616ee;
                  if (local_70 < (longlong)(local_90 + 0x20)) {
                    uVar14 = 0;
                    uVar15 = 0;
                  }
                  else {
                    local_88 = local_a0 + 0x18;
                    uVar15 = 0;
                    local_98 = 0x20;
                    local_a4 = 1;
                    uVar14 = 0;
                    do {
                      iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
                                        (*(longlong **)(param_1 + 0x10),local_a0,local_90,local_98);
                      if (iVar4 != 0) goto LAB_149561998;
                      local_b8 = local_a0;
                      iVar4 = FUN_149561d7a(param_1,&local_74,&local_78,local_88);
                      if (iVar4 == 0) break;
                      iVar4 = FUN_149560c93(param_1,local_a4,local_74);
                      if (iVar4 != 0) goto LAB_149561998;
                      if (local_78 != 0) {
                        *(int *)(param_1 + 0x58) = local_a4;
                        *(int *)(param_1 + 0x5c) = local_78;
                        *(ushort *)(param_1 + 0x56) =
                             (ushort)(uVar16 >> 0x10) | (ushort)((local_60[0] & 0xff0000) >> 8);
                        uVar15 = *(undefined4 *)(param_1 + 0x60);
                        uVar14 = *(undefined4 *)(param_1 + 100);
                      }
                      local_98 = local_98 + local_90;
                      local_a4 = local_a4 + 1;
                    } while ((longlong)(local_90 + local_98) <= local_70);
                  }
                  iVar4 = 0;
LAB_149561998:
                  FUN_145e3b961(local_a0);
                }
                else {
LAB_14956181d:
                  uVar14 = 0;
                  uVar15 = 0;
                }
                if (iVar4 != 0) goto LAB_1495616ee;
              }
              *(undefined4 *)(param_1 + 0x60) = uVar15;
              *(undefined4 *)(param_1 + 100) = uVar14;
              FUN_149560dd5(param_1);
              lVar7 = **(longlong **)(param_1 + 0x30);
              *(undefined4 *)(lVar7 + 0x60) = 0;
              *(undefined4 *)(lVar7 + 0x80) = *(undefined4 *)(param_1 + 0x58);
              *(undefined4 *)(lVar7 + 100) = 0;
              lVar10 = 0;
              do {
                *(undefined4 *)(lVar7 + 0x68 + lVar10 * 4) = 0xffffffff;
                lVar10 = lVar10 + 1;
              } while (lVar10 != 4);
              if (*(int *)(param_1 + 0x58) != 0) {
                *(int *)(lVar7 + 0x68) = *(int *)(param_1 + 0x58);
              }
              iVar4 = 0;
              if (*(int *)(param_1 + 0x5c) != 0) {
                FUN_14955599e(0x11b,"recovered %d frames from WAL file %s",
                              *(undefined4 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x80));
              }
            }
LAB_1495616ee:
            if ((*(char *)(param_1 + 0x3f) == '\0') &&
               ((**(code **)(**(longlong **)(param_1 + 8) + 0x70))
                          (*(longlong **)(param_1 + 8),iVar5,iVar13,9),
               *(char *)(param_1 + 0x3f) == '\0')) {
              plVar9 = *(longlong **)(param_1 + 8);
              lVar7 = *plVar9;
              iVar5 = 4;
              iVar13 = 4;
LAB_149561722:
              (**(code **)(lVar7 + 0x70))(plVar9,iVar5,iVar13,9);
            }
          }
LAB_149561761:
          *param_2 = 1;
          goto LAB_14956164e;
        }
        *(undefined1 *)(param_1 + 0x40) = 0;
        iVar4 = 0;
        if (*(char *)(param_1 + 0x3f) != '\0') goto LAB_149561564;
        bVar3 = true;
      }
      (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),0,1,9);
      iVar5 = iVar4;
      if (bVar3) goto LAB_149561564;
    }
LAB_14956150b:
    iVar4 = iVar5;
    if (*(char *)(param_1 + 0x46) == '\0') goto LAB_149561521;
    iVar4 = 0;
    if (iVar5 != 0) {
      FUN_149561c01(param_1,0);
      *(undefined1 *)(param_1 + 0x46) = 0;
      iVar4 = -1;
      if (iVar5 != 0x20a) {
        iVar4 = iVar5;
      }
    }
  }
  else {
    local_80 = **(longlong **)(param_1 + 0x30);
    iVar4 = 0;
    if (local_80 == 0) goto LAB_1495614a2;
LAB_149561551:
    iVar5 = FUN_149561abe(param_1,param_2);
    if (iVar5 != 0) goto LAB_1495614d5;
LAB_149561564:
    iVar5 = iVar4;
    if (*(int *)(param_1 + 0x48) == 0x2de218) goto LAB_14956150b;
    local_b8 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
    iVar4 = 0xe;
    FUN_14955599e(0xe,"%s at line %d of [%.10s]","cannot open file",0xefed);
    if (*(char *)(param_1 + 0x46) == '\0') goto LAB_149561521;
    FUN_149561c01(param_1,0);
    *(undefined1 *)(param_1 + 0x46) = 0;
    iVar4 = 0xe;
  }
  *(undefined1 *)(param_1 + 0x3f) = 0;
LAB_149561521:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149561abe FUN_149561abe body=322 status=ok
// SIG undefined FUN_149561abe(void)

undefined8 FUN_149561abe(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  int aiStack_4c [4];
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar1 = (undefined4 *)**(longlong **)(param_1 + 0x30);
  local_58 = *puVar1;
  uStack_54 = puVar1[1];
  iStack_50 = puVar1[2];
  aiStack_4c[0] = puVar1[3];
  aiStack_4c[1] = puVar1[4];
  aiStack_4c[2] = puVar1[5];
  aiStack_4c[3] = puVar1[6];
  uStack_3c = puVar1[7];
  local_38 = puVar1[8];
  uStack_34 = puVar1[9];
  iStack_30 = puVar1[10];
  iStack_2c = puVar1[0xb];
  if (*(char *)(param_1 + 0x3f) != '\x02') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x78))();
  }
  local_88 = *(undefined8 *)(puVar1 + 0xc);
  uStack_80 = *(undefined8 *)(puVar1 + 0xe);
  local_78 = *(undefined8 *)(puVar1 + 0x10);
  uStack_70 = *(undefined8 *)(puVar1 + 0x12);
  local_68 = *(undefined8 *)(puVar1 + 0x14);
  uStack_60 = *(undefined8 *)(puVar1 + 0x16);
  iVar2 = memcmp(&local_58,&local_88,0x30);
  uVar3 = 1;
  if ((iVar2 == 0) && ((char)aiStack_4c[0] != '\0')) {
    iVar2 = 0;
    uVar4 = 0xfffffffffffffff8;
    iVar5 = 0;
    do {
      iVar5 = iVar5 + iVar2 + *(int *)((longlong)&iStack_50 + uVar4);
      iVar2 = iVar2 + *(int *)((longlong)aiStack_4c + uVar4) + iVar5;
      uVar4 = uVar4 + 8;
    } while (uVar4 < 0x20);
    if ((iVar5 == iStack_30) && (iVar2 == iStack_2c)) {
      iVar2 = memcmp((undefined8 *)(param_1 + 0x48),&local_58,0x30);
      uVar3 = 0;
      if (iVar2 != 0) {
        *param_2 = 1;
        *(ulonglong *)(param_1 + 0x68) = CONCAT44(uStack_34,local_38);
        *(ulonglong *)(param_1 + 0x70) = CONCAT44(iStack_2c,iStack_30);
        *(ulonglong *)(param_1 + 0x58) = CONCAT44(aiStack_4c[2],aiStack_4c[1]);
        *(ulonglong *)(param_1 + 0x60) = CONCAT44(uStack_3c,aiStack_4c[3]);
        *(undefined8 *)(param_1 + 0x48) = CONCAT44(uStack_54,local_58);
        *(ulonglong *)(param_1 + 0x50) = CONCAT44(aiStack_4c[0],iStack_50);
        *(uint *)(param_1 + 0x38) =
             CONCAT22(*(undefined2 *)(param_1 + 0x56),*(undefined2 *)(param_1 + 0x56)) & 0x1fe00;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149561c01 FUN_149561c01 body=111 status=ok
// SIG undefined FUN_149561c01(void)

void FUN_149561c01(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = *(char *)(param_1 + 0x3f);
  if ((cVar1 == '\x02') || (*(char *)(param_1 + 0x46) != '\0')) {
    if (0 < *(int *)(param_1 + 0x28)) {
      lVar2 = 0;
      do {
        FUN_145e3b961(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar2 * 8));
        *(undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar2 < *(int *)(param_1 + 0x28));
      cVar1 = *(char *)(param_1 + 0x3f);
    }
    if (cVar1 == '\x02') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000149561c6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x80))(*(longlong **)(param_1 + 8),param_2);
  return;
}



// FUNCTION 149561c70 FUN_149561c70 body=266 status=ok
// SIG undefined FUN_149561c70(void)

ulonglong FUN_149561c70(longlong param_1,int param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  void *_Dst;
  ulonglong uVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x28) <= param_2) {
    lVar2 = FUN_1495539bb();
    if (lVar2 == 0) {
      uVar3 = 7;
      uVar4 = 0;
      goto LAB_149561cd6;
    }
    memset((void *)(lVar2 + (longlong)*(int *)(param_1 + 0x28) * 8),0,
           (((longlong)param_2 + 1) - (longlong)*(int *)(param_1 + 0x28)) * 8);
    *(longlong *)(param_1 + 0x30) = lVar2;
    *(int *)(param_1 + 0x28) = (int)((longlong)param_2 + 1);
  }
  if (*(char *)(param_1 + 0x3f) == '\x02') {
    _Dst = (void *)FUN_145e3bd67(0x8000);
    if (_Dst != (void *)0x0) {
      memset(_Dst,0,0x8000);
    }
    *(void **)(*(longlong *)(param_1 + 0x30) + (longlong)param_2 * 8) = _Dst;
    uVar3 = 7;
    if (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)param_2 * 8) != 0) {
      uVar3 = 0;
    }
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x68))
                      (*(longlong **)(param_1 + 8),param_2,0x8000,*(undefined1 *)(param_1 + 0x40),
                       (longlong)param_2 * 8 + *(longlong *)(param_1 + 0x30));
    uVar3 = uVar1;
    if ((char)uVar1 == '\b') {
      *(byte *)(param_1 + 0x42) = *(byte *)(param_1 + 0x42) | 2;
      uVar3 = uVar1 & 0xffffffff;
      if ((int)uVar1 == 8) {
        uVar3 = 0;
      }
    }
  }
  uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)param_2 * 8);
LAB_149561cd6:
  *param_3 = uVar4;
  return uVar3;
}



// FUNCTION 149561d7a FUN_149561d7a body=187 status=ok
// SIG undefined FUN_149561d7a(void)

undefined8
FUN_149561d7a(longlong param_1,uint *param_2,uint *param_3,undefined8 param_4,uint *param_5)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  bool bVar5;
  
  uVar4 = 0;
  if ((*(longlong *)(param_1 + 0x68) == *(longlong *)(param_5 + 2)) &&
     (uVar2 = *param_5, uVar2 != 0)) {
    lVar1 = param_1 + 0x60;
    bVar5 = *(char *)(param_1 + 0x55) == '\0';
    FUN_149560985(bVar5,param_5,8,lVar1,lVar1);
    FUN_149560985(bVar5,param_4,*(undefined4 *)(param_1 + 0x38),lVar1,lVar1);
    uVar3 = param_5[4];
    if ((*(uint *)(param_1 + 0x60) ==
         (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18)) &&
       (uVar3 = param_5[5], uVar4 = 0,
       *(uint *)(param_1 + 100) ==
       (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18))) {
      *param_2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      uVar2 = param_5[1];
      *param_3 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      uVar4 = 1;
    }
  }
  return uVar4;
}



// FUNCTION 149561e35 FUN_149561e35 body=111 status=ok
// SIG undefined FUN_149561e35(void)

void FUN_149561e35(longlong param_1)

{
  if (*(char *)(param_1 + 0x40) != '\0') {
    if (*(char *)(param_1 + 0x3f) == '\0') {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),0,1,9);
    }
    *(undefined1 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined1 *)(param_1 + 0x43) = 0;
  }
  if (-1 < (short)*(ushort *)(param_1 + 0x3c)) {
    if (*(char *)(param_1 + 0x3f) == '\0') {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x70))
                (*(longlong **)(param_1 + 8),*(ushort *)(param_1 + 0x3c) + 3,1,5);
    }
    *(undefined2 *)(param_1 + 0x3c) = 0xffff;
  }
  return;
}



// FUNCTION 149561ea4 FUN_149561ea4 body=114 status=ok
// SIG undefined FUN_149561ea4(void)

undefined8 FUN_149561ea4(longlong param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  plVar1 = param_3 + 1;
  if (param_2 < *(int *)(param_1 + 0x28)) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)param_2 * 8);
    *plVar1 = lVar2;
    if (lVar2 != 0) goto LAB_149561ecc;
  }
  uVar3 = FUN_149561c70(param_1,param_2,plVar1);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  lVar2 = *plVar1;
LAB_149561ecc:
  *param_3 = lVar2 + 0x4000;
  iVar4 = param_2 * 0x1000 + -0x22;
  if (param_2 == 0) {
    iVar4 = 0;
    lVar2 = lVar2 + 0x88;
  }
  *(int *)(param_3 + 2) = iVar4;
  param_3[1] = lVar2 + -4;
  return 0;
}



// FUNCTION 149561f16 FUN_149561f16 body=145 status=ok
// SIG undefined FUN_149561f16(void)

void FUN_149561f16(longlong param_1,uint param_2,uint param_3,undefined8 param_4,uint *param_5)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  
  *param_5 = param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 | param_2 << 0x18
  ;
  param_5[1] = param_3 >> 0x18 | (param_3 & 0xff0000) >> 8 | (param_3 & 0xff00) << 8 |
               param_3 << 0x18;
  if (*(int *)(param_1 + 0x7c) == 0) {
    lVar1 = param_1 + 0x60;
    *(undefined8 *)(param_5 + 2) = *(undefined8 *)(param_1 + 0x68);
    bVar3 = *(char *)(param_1 + 0x55) == '\0';
    FUN_149560985(bVar3,param_5,8,lVar1,lVar1);
    FUN_149560985(bVar3,param_4,*(undefined4 *)(param_1 + 0x38),lVar1,lVar1);
    uVar2 = *(uint *)(param_1 + 0x60);
    param_5[4] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = *(uint *)(param_1 + 100);
    param_5[5] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  }
  else {
    param_5[2] = 0;
    param_5[3] = 0;
    param_5[4] = 0;
    param_5[5] = 0;
  }
  return;
}



// FUNCTION 149561fa7 FUN_149561fa7 body=160 status=ok
// SIG undefined FUN_149561fa7(void)

void FUN_149561fa7(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar4 = lVar1 - param_4;
  if ((uVar4 == 0 || lVar1 < param_4) || (param_3 + param_4 < lVar1)) {
LAB_149561fd5:
                    /* WARNING: Could not recover jumptable at 0x000149561ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
              (*(longlong **)(param_1 + 8),param_2,param_3,param_4);
    return;
  }
  iVar3 = (int)uVar4;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                    (*(longlong **)(param_1 + 8),param_2,uVar4 & 0xffffffff,param_4);
  if (iVar2 == 0) {
    param_3 = param_3 - iVar3;
    if ((*(uint *)(param_1 + 0x18) & 3) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
    }
    if ((param_3 != 0) && (iVar2 == 0)) {
      param_4 = param_4 + iVar3;
      param_2 = param_2 + iVar3;
      goto LAB_149561fd5;
    }
  }
  return;
}



// FUNCTION 149562047 FUN_149562047 body=181 status=ok
// SIG undefined FUN_149562047(void)

void FUN_149562047(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x58) != 0) {
    iVar1 = FUN_149561ea4(param_1,(ulonglong)(*(int *)(param_1 + 0x58) + 0x1000) + 0xffffffff021 >>
                                  0xc,&local_30);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x58);
      lVar2 = 0;
      do {
        if (iVar1 - local_20 < (int)(uint)*(ushort *)(local_30 + lVar2 * 2)) {
          *(undefined2 *)(local_30 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 != 0x2000);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58,local_28);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149562110 FUN_149562110 body=131 status=ok
// SIG undefined FUN_149562110(void)

void FUN_149562110(longlong *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  
  do {
    if (((*(uint *)(param_1 + 6) < 7) && ((0x61U >> (*(uint *)(param_1 + 6) & 0x1f) & 1) != 0)) &&
       (param_2 < *(uint *)(param_1 + 3))) {
      if (*(longlong *)(*param_1 + 0x18) != 0) {
        (*DAT_14c765d78)();
      }
      iVar1 = FUN_149557d43(param_1,param_2,param_3,1);
      if (*(longlong *)(*param_1 + 0x18) != 0) {
        (*DAT_14c765d88)();
      }
      if (iVar1 != 0) {
        *(int *)(param_1 + 6) = iVar1;
      }
    }
    param_1 = (longlong *)param_1[8];
  } while (param_1 != (longlong *)0x0);
  return;
}



// FUNCTION 149562193 FUN_149562193 body=337 status=ok
// SIG undefined FUN_149562193(void)

int FUN_149562193(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  puVar1 = *(undefined8 **)(param_1 + 0x110);
  iVar4 = *(int *)(param_1 + 0x80);
  uVar2 = *(uint *)(param_1 + 0xb8);
  if (*(uint *)(param_1 + 0xbc) < *(uint *)(param_1 + 0xb8)) {
    uVar2 = *(uint *)(param_1 + 0xbc);
  }
  if (0 < iVar4) {
    lVar5 = 8;
    param_2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x78) + lVar5) == 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x78) + lVar5) = *(undefined8 *)(param_1 + 0x60);
        iVar4 = *(int *)(param_1 + 0x80);
      }
      param_2 = param_2 + 1;
      lVar5 = lVar5 + 0x30;
    } while (param_2 < iVar4);
  }
  if (*(longlong *)(param_1 + 0x60) == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x60) + -1;
    uVar6 = (ulonglong)*(uint *)(param_1 + 0xb8);
    param_2 = lVar5 % (longlong)uVar6;
    lVar5 = (lVar5 / (longlong)uVar6 + 1) * uVar6;
  }
  *(longlong *)(param_1 + 0x60) = lVar5;
  *(longlong *)(param_1 + 0x68) = lVar5;
  if (((*(char *)(param_1 + 0xb) == '\0') && (*(char *)(param_1 + 9) != '\x04')) &&
     (uVar3 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x60))
                        (*(longlong **)(param_1 + 0x48),param_2), (uVar3 >> 9 & 1) == 0)) {
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = 0;
  }
  else {
    *puVar1 = 0xd763a120f905d5d9;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  }
  FUN_149555acc(4);
  uVar3 = *(uint *)(param_1 + 0x34);
  *(uint *)((longlong)puVar1 + 0xc) =
       uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  uVar3 = *(uint *)(param_1 + 0x20);
  *(uint *)(puVar1 + 2) =
       uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  uVar3 = *(uint *)(param_1 + 0xb8);
  *(uint *)((longlong)puVar1 + 0x14) =
       uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  uVar3 = *(uint *)(param_1 + 0xbc);
  *(uint *)(puVar1 + 3) =
       uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  memset((void *)((longlong)puVar1 + 0x1c),0,(ulonglong)uVar2 - 0x1c);
  uVar3 = -uVar2;
  do {
    uVar3 = uVar3 + uVar2;
    if (*(uint *)(param_1 + 0xb8) <= uVar3) {
      return 0;
    }
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))
                      (*(longlong **)(param_1 + 0x50),puVar1,uVar2,*(undefined8 *)(param_1 + 0x60));
    *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + (ulonglong)uVar2;
  } while (iVar4 == 0);
  return iVar4;
}



// FUNCTION 1495622e4 FUN_1495622e4 body=106 status=ok
// SIG undefined FUN_1495622e4(void)

undefined8 FUN_1495622e4(longlong param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  
  while( true ) {
    bVar1 = *(byte *)(param_1 + 0x15);
    if (bVar1 != 5 && param_2 <= (int)(uint)bVar1) {
      return 0;
    }
    if (*(char *)(param_1 + 0x11) != '\0') break;
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x38))
                      (*(longlong **)(param_1 + 0x48),param_2);
    if ((int)uVar3 != 5) {
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      bVar1 = *(byte *)(param_1 + 0x15);
      break;
    }
    iVar2 = (**(code **)(param_1 + 0xe0))(*(undefined8 *)(param_1 + 0xe8));
    if (iVar2 == 0) {
      return 5;
    }
  }
  if ((param_2 == 4) || (bVar1 != 5)) {
    *(char *)(param_1 + 0x15) = (char)param_2;
  }
  return 0;
}



// FUNCTION 14956234e FUN_14956234e body=221 status=ok
// SIG undefined FUN_14956234e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14956234e(undefined8 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    if ((param_1 < DAT_14cc1ede8) || (DAT_14cc1edf0 <= param_1)) {
      iVar1 = (*DAT_14c765d30)(param_1);
      if (DAT_14cc1edf8 == 0) {
        _DAT_14cc1eb50 = _DAT_14cc1eb50 - iVar1;
      }
      else {
        (*DAT_14c765d78)();
        _DAT_14cc1eb50 = _DAT_14cc1eb50 - iVar1;
        if (DAT_14cc1edf8 != 0) {
          (*DAT_14c765d88)();
        }
      }
      FUN_145e3b961(param_1);
      return;
    }
    if (DAT_14cc1edf8 != 0) {
      (*DAT_14c765d78)();
    }
    DAT_14cc1eb48 = DAT_14cc1eb48 + -1;
    *param_1 = DAT_14cc1ee00;
    DAT_14cc1ee08 = DAT_14cc1ee08 + 1;
    DAT_14cc1ee0c = (uint)(DAT_14cc1ee08 < DAT_14cc1ede4);
    DAT_14cc1ee00 = param_1;
    if (DAT_14cc1edf8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001495623c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14c765d88)();
      return;
    }
  }
  return;
}



// FUNCTION 149562436 FUN_149562436 body=591 status=ok
// SIG undefined FUN_149562436(void)

int FUN_149562436(longlong param_1,uint param_2,longlong *param_3,uint param_4)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  size_t _Size;
  undefined1 auStack_88 [32];
  char *local_68;
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = 0;
  if (param_2 < 2) {
    if (param_2 == 0) {
      local_68 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
      iVar2 = 0xb;
      FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0xdede);
      goto LAB_149562535;
    }
  }
  else if (((param_4 & 2) != 0) || (*(char *)(param_1 + 0x14) == '\x01')) {
    if (*(longlong *)(param_1 + 0x120) != 0) {
      iVar2 = FUN_1495609ed(*(longlong *)(param_1 + 0x120),param_2,&local_4c);
      if (iVar2 != 0) {
        *param_3 = 0;
        goto LAB_149562535;
      }
      if (local_4c != 0) goto LAB_149562648;
    }
    local_58 = 0;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x88))();
    if (local_58 == 0 || iVar2 != 0) {
      if (iVar2 == 0) goto LAB_149562648;
LAB_14956252f:
      _Dst = (void *)0x0;
    }
    else {
      if ((*(byte *)(param_1 + 0x14) < 2) && (*(char *)(param_1 + 0x10) == '\0')) {
LAB_1495624eb:
        lVar1 = local_58;
        _Dst = *(void **)(param_1 + 0xa8);
        if (_Dst == (void *)0x0) {
          _Size = (ulonglong)*(ushort *)(param_1 + 0xb0) + 0x48;
          _Dst = (void *)FUN_145e3bd67(_Size);
          if (_Dst == (void *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x48) + 0x90))
                      (*(longlong **)(param_1 + 0x48),
                       (longlong)*(int *)(param_1 + 0xbc) * (ulonglong)(param_2 - 1),lVar1);
            iVar2 = 7;
            goto LAB_14956252f;
          }
          memset(_Dst,0,_Size);
          *(longlong *)((longlong)_Dst + 0x10) = (longlong)_Dst + 0x48;
          *(undefined4 *)((longlong)_Dst + 0x34) = 0x10020;
          *(longlong *)((longlong)_Dst + 0x28) = param_1;
        }
        else {
          *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)((longlong)_Dst + 0x20);
          *(undefined8 *)((longlong)_Dst + 0x20) = 0;
          **(undefined8 **)((longlong)_Dst + 0x10) = 0;
        }
        *(uint *)((longlong)_Dst + 0x30) = param_2;
        *(longlong *)((longlong)_Dst + 8) = lVar1;
        *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
      }
      else {
        _Dst = (void *)FUN_14956295c(param_1);
        if (_Dst == (void *)0x0) goto LAB_1495624eb;
        (**(code **)(**(longlong **)(param_1 + 0x48) + 0x90))
                  (*(longlong **)(param_1 + 0x48),
                   (longlong)*(int *)(param_1 + 0xbc) * (ulonglong)(param_2 - 1),local_58);
      }
      iVar2 = 0;
    }
    *param_3 = (longlong)_Dst;
    goto LAB_149562535;
  }
LAB_149562648:
  iVar2 = FUN_149562686(param_1,param_2,param_3,param_4);
LAB_149562535:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149562686 FUN_149562686 body=726 status=ok
// SIG undefined FUN_149562686(void)

int FUN_149562686(longlong param_1,ulonglong param_2,undefined8 *param_3,ulonglong param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = (uint)param_2;
  if (uVar5 == 0) {
    FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0xde6c,
                  "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6");
    return 0xb;
  }
  lVar3 = (*DAT_14c765dd8)(*(undefined8 *)(*(longlong *)(param_1 + 0x118) + 0x40),param_2,
                           *(byte *)(*(longlong *)(param_1 + 0x118) + 0x2d) & 3);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x118);
    iVar2 = 7;
    if (*(char *)(lVar3 + 0x2d) == '\x02') goto LAB_1495627a2;
    iVar2 = (*DAT_14c765dd0)(*(undefined8 *)(lVar3 + 0x40));
    if (*(int *)(lVar3 + 0x20) < iVar2) {
      for (lVar6 = *(longlong *)(lVar3 + 0x10); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x40)) {
        if ((*(short *)(lVar6 + 0x36) == 0) && ((*(byte *)(lVar6 + 0x34) & 8) == 0)) {
          *(longlong *)(lVar3 + 0x10) = lVar6;
          goto LAB_1495628e3;
        }
      }
      *(undefined8 *)(lVar3 + 0x10) = 0;
      for (lVar6 = *(longlong *)(lVar3 + 8); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x40)) {
        if (*(short *)(lVar6 + 0x36) == 0) goto LAB_1495628e3;
      }
    }
    goto LAB_1495628fb;
  }
LAB_1495626c4:
  plVar4 = *(longlong **)(lVar3 + 8);
  if (*plVar4 == 0) {
    plVar4 = (longlong *)FUN_1495629b7(*(longlong *)(param_1 + 0x118),param_2 & 0xffffffff,lVar3);
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x118) + 0x18);
    *piVar1 = *piVar1 + 1;
    *(short *)((longlong)plVar4 + 0x36) = *(short *)((longlong)plVar4 + 0x36) + 1;
  }
  *param_3 = plVar4;
  if (((param_4 & 1) == 0) && (plVar4[5] != 0)) {
    *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
    return 0;
  }
  if (((int)uVar5 < 0) || ((int)(0x40000000 / (longlong)*(int *)(param_1 + 0xbc)) + 1U == uVar5)) {
    iVar2 = 0xb;
    FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0xde8c,
                  "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6");
  }
  else {
    plVar4[5] = param_1;
    if (((**(longlong **)(param_1 + 0x48) == 0) || ((param_4 & 1) != 0)) ||
       (*(uint *)(param_1 + 0x1c) < uVar5)) {
      iVar2 = 0xd;
      if (uVar5 <= *(uint *)(param_1 + 0xc0)) {
        if ((param_4 & 1) != 0) {
          if (uVar5 <= *(uint *)(param_1 + 0x20)) {
            FUN_1495607d9(*(undefined8 *)(param_1 + 0x40));
          }
          iVar2 = *(int *)(param_1 + 0x80);
          if (0 < iVar2) {
            lVar3 = 0x18;
            lVar6 = 0;
            do {
              if (uVar5 <= *(uint *)(*(longlong *)(param_1 + 0x78) + lVar3)) {
                FUN_1495607d9(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + -8 + lVar3));
                iVar2 = *(int *)(param_1 + 0x80);
              }
              lVar6 = lVar6 + 1;
              lVar3 = lVar3 + 0x30;
            } while (lVar6 < iVar2);
          }
        }
        memset((void *)plVar4[1],0,(longlong)*(int *)(param_1 + 0xbc));
        return 0;
      }
    }
    else {
      *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
      iVar2 = FUN_149562a01(plVar4);
      if (iVar2 == 0) {
        return 0;
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_149562b0f(plVar4);
  }
LAB_1495627a2:
  if (*(int *)(*(longlong *)(param_1 + 0x118) + 0x18) == 0) {
    FUN_149562b50(param_1);
  }
  *param_3 = 0;
  return iVar2;
LAB_1495628e3:
  iVar2 = (**(code **)(lVar3 + 0x30))(*(undefined8 *)(lVar3 + 0x38));
  if ((iVar2 != 5) && (iVar2 != 0)) goto LAB_1495627a2;
LAB_1495628fb:
  lVar3 = (*DAT_14c765dd8)(*(undefined8 *)(lVar3 + 0x40),param_2 & 0xffffffff,2);
  iVar2 = 7;
  if (lVar3 == 0) goto LAB_1495627a2;
  goto LAB_1495626c4;
}



// FUNCTION 14956295c FUN_14956295c body=91 status=ok
// SIG undefined FUN_14956295c(void)

longlong * FUN_14956295c(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)0x0;
  lVar2 = (*DAT_14c765dd8)(*(undefined8 *)(*(longlong *)(param_1 + 0x118) + 0x40),param_2,0);
  if (lVar2 != 0) {
    plVar3 = *(longlong **)(lVar2 + 8);
    if (*plVar3 == 0) {
      plVar3 = (longlong *)FUN_1495629b7(*(longlong *)(param_1 + 0x118),param_2 & 0xffffffff,lVar2);
      return plVar3;
    }
    piVar1 = (int *)(*(longlong *)(param_1 + 0x118) + 0x18);
    *piVar1 = *piVar1 + 1;
    *(short *)((longlong)plVar3 + 0x36) = *(short *)((longlong)plVar3 + 0x36) + 1;
  }
  return plVar3;
}



// FUNCTION 1495629b7 FUN_1495629b7 body=74 status=ok
// SIG undefined FUN_1495629b7(void)

void FUN_1495629b7(longlong param_1,undefined4 param_2,longlong *param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_3[1];
  do {
    plVar1[6] = 0;
    plVar1[7] = 0;
    plVar1[4] = 0;
    plVar1[5] = 0;
    plVar1[8] = 0;
    *plVar1 = (longlong)param_3;
    plVar1[1] = *param_3;
    plVar1[2] = (longlong)(plVar1 + 9);
    plVar1[9] = 0;
    plVar1[3] = param_1;
    *(undefined4 *)(plVar1 + 6) = param_2;
    *(undefined2 *)((longlong)plVar1 + 0x34) = 1;
    plVar1 = (longlong *)param_3[1];
  } while (*plVar1 == 0);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  *(short *)((longlong)plVar1 + 0x36) = *(short *)((longlong)plVar1 + 0x36) + 1;
  return;
}



// FUNCTION 149562a01 FUN_149562a01 body=269 status=ok
// SIG undefined FUN_149562a01(void)

ulonglong FUN_149562a01(longlong param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 0x28);
  local_1c = 0;
  if (*(longlong *)(lVar2 + 0x120) == 0) {
LAB_149562a31:
    uVar5 = (**(code **)(**(longlong **)(lVar2 + 0x48) + 0x10))
                      (*(longlong **)(lVar2 + 0x48),*(undefined8 *)(param_1 + 8),
                       (longlong)*(int *)(lVar2 + 0xbc),
                       (ulonglong)(*(int *)(param_1 + 0x30) - 1) * (longlong)*(int *)(lVar2 + 0xbc))
    ;
    uVar6 = 0;
    if (uVar5 != 0x20a) {
      uVar6 = (ulonglong)uVar5;
    }
  }
  else {
    uVar6 = FUN_1495609ed(*(longlong *)(lVar2 + 0x120),*(undefined4 *)(param_1 + 0x30),&local_1c);
    if ((int)uVar6 != 0) goto LAB_149562a74;
    if (local_1c == 0) goto LAB_149562a31;
    uVar1 = *(undefined2 *)(*(longlong *)(lVar2 + 0x120) + 0x56);
    uVar7 = CONCAT22(uVar1,uVar1) & 0x1fe00;
    uVar5 = uVar7;
    if ((int)*(uint *)(lVar2 + 0xbc) <= (int)uVar7) {
      uVar5 = *(uint *)(lVar2 + 0xbc);
    }
    plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x120) + 0x10);
    uVar6 = (**(code **)(*plVar3 + 0x10))
                      (plVar3,*(undefined8 *)(param_1 + 8),uVar5,
                       (ulonglong)(uVar7 + 0x18) * (ulonglong)(local_1c - 1) + 0x38);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((int)uVar6 == 0) {
      uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x20);
      *(undefined8 *)(lVar2 + 0x88) = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18);
      *(undefined8 *)(lVar2 + 0x90) = uVar4;
      uVar6 = 0;
    }
    else {
      *(undefined4 *)(lVar2 + 0x88) = 0xffffffff;
      *(undefined4 *)(lVar2 + 0x8c) = 0xffffffff;
      *(undefined4 *)(lVar2 + 0x90) = 0xffffffff;
      *(undefined4 *)(lVar2 + 0x94) = 0xffffffff;
    }
  }
LAB_149562a74:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149562b0f FUN_149562b0f body=65 status=ok
// SIG undefined FUN_149562b0f(void)

void FUN_149562b0f(undefined8 *param_1)

{
  if ((*(byte *)((longlong)param_1 + 0x34) & 2) != 0) {
    FUN_14955dc15(param_1,1);
  }
  *(int *)(param_1[3] + 0x18) = *(int *)(param_1[3] + 0x18) + -1;
                    /* WARNING: Could not recover jumptable at 0x000149562b41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_14c765de0)(*(undefined8 *)(param_1[3] + 0x40),*param_1,1);
  return;
}



// FUNCTION 149562b50 FUN_149562b50 body=68 status=ok
// SIG undefined FUN_149562b50(void)

void FUN_149562b50(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x14);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      if (*(char *)(param_1 + 8) == '\0') {
        FUN_149562c6b(param_1,0,0);
      }
    }
    else if (cVar1 != '\x06') {
      FUN_149562b94(param_1);
    }
  }
  FUN_149563041(param_1);
  return;
}



// FUNCTION 149562b94 FUN_149562b94 body=215 status=ok
// SIG undefined FUN_149562b94(void)

void FUN_149562b94(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  
  bVar1 = *(byte *)(param_1 + 0x14);
  if ((bVar1 < 7) && ((0x43U >> (bVar1 & 0x1f) & 1) != 0)) {
    return;
  }
  if (*(longlong *)(param_1 + 0x120) == 0) {
    if ((bVar1 != 2) && (**(longlong **)(param_1 + 0x50) != 0)) {
      uVar2 = FUN_1495636b3(param_1,0);
      goto LAB_149562c06;
    }
    uVar2 = FUN_149562c6b(param_1,0,0);
    if ((bVar1 == 2) || (*(char *)(param_1 + 0x13) != '\0')) goto LAB_149562c06;
    *(undefined4 *)(param_1 + 0x2c) = 4;
    *(undefined1 *)(param_1 + 0x14) = 6;
  }
  else {
    uVar3 = FUN_1495631be(param_1,2,0xffffffff);
    uVar2 = FUN_149562c6b(param_1,*(undefined1 *)(param_1 + 0x17),0);
    if (uVar3 != 0) {
      uVar2 = uVar3;
    }
LAB_149562c06:
    if (((char)uVar2 != '\r') && ((uVar2 & 0xff) != 10)) {
      return;
    }
    *(uint *)(param_1 + 0x2c) = uVar2;
    *(undefined1 *)(param_1 + 0x14) = 6;
    if (uVar2 == 0) {
      if (*(char *)(param_1 + 0x1a) == '\0') {
        pcVar4 = FUN_149562686;
      }
      else {
        pcVar4 = FUN_149562436;
      }
      goto LAB_149562c24;
    }
  }
  pcVar4 = (code *)&LAB_14956242b;
LAB_149562c24:
  *(code **)(param_1 + 0x108) = pcVar4;
  return;
}



// FUNCTION 149562c6b FUN_149562c6b body=981 status=ok
// SIG undefined FUN_149562c6b(void)

int FUN_149562c6b(longlong *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)((longlong)param_1 + 0x14) < 2) &&
     (iVar8 = 0, *(byte *)((longlong)param_1 + 0x15) < 2)) goto LAB_149562c9d;
  FUN_14956479b(param_1);
  puVar2 = (undefined8 *)param_1[10];
  puVar3 = (undefined *)*puVar2;
  iVar6 = 0;
  if (puVar3 != (undefined *)0x0) {
    if (puVar3 == &DAT_14bd407b8) {
      puVar4 = (undefined8 *)puVar2[3];
      while (puVar4 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)*puVar4;
        FUN_145e3b961();
      }
      iVar6 = 0;
      puVar2[3] = 0;
      *puVar2 = 0;
    }
    else {
      cVar1 = *(char *)((longlong)param_1 + 9);
      if (cVar1 == '\x01') {
LAB_149562e79:
        bVar10 = true;
        if (param_2 == 0) {
          bVar10 = (char)param_1[2] != '\0';
        }
        iVar6 = 0;
        if (param_1[0xc] != 0) {
          lVar9 = param_1[0x19];
          if ((bool)(bVar10 | lVar9 == 0)) {
            iVar6 = (**(code **)(puVar3 + 0x20))(puVar2,0);
          }
          else {
            iVar6 = (**(code **)(puVar3 + 0x18))(puVar2,&DAT_14bd408d0,0x1c,0);
          }
          if (iVar6 == 0) {
            iVar6 = 0;
            if (*(char *)((longlong)param_1 + 0xb) == '\0') {
              iVar6 = (**(code **)(*(longlong *)param_1[10] + 0x28))
                                ((longlong *)param_1[10],*(byte *)((longlong)param_1 + 0xe) | 0x10);
            }
            if (((0 < lVar9 && iVar6 == 0) &&
                (iVar6 = (**(code **)(*(longlong *)param_1[10] + 0x30))
                                   ((longlong *)param_1[10],&local_40), iVar6 == 0)) &&
               (iVar6 = 0, lVar9 < local_40)) {
              iVar6 = (**(code **)(*(longlong *)param_1[10] + 0x20))((longlong *)param_1[10],lVar9);
            }
          }
        }
      }
      else {
        if (cVar1 != '\x03') {
          if ((cVar1 == '\x05') || ((char)param_1[1] == '\0')) {
            lVar9 = param_1[2];
            (**(code **)(puVar3 + 8))(puVar2);
            *puVar2 = 0;
            if ((char)lVar9 == '\0') {
              iVar6 = (**(code **)(*param_1 + 0x30))
                                (*param_1,param_1[0x1b],*(undefined1 *)((longlong)param_1 + 0xd));
            }
            goto LAB_149562cdd;
          }
          goto LAB_149562e79;
        }
        iVar6 = 0;
        if ((param_1[0xc] != 0) && (iVar6 = (**(code **)(puVar3 + 0x20))(puVar2,0), iVar6 == 0)) {
          if (*(char *)((longlong)param_1 + 0xc) == '\0') {
            iVar6 = 0;
          }
          else {
            iVar6 = 0;
            if (*(char *)((longlong)param_1 + 0xe) != '\0') {
              iVar6 = (**(code **)(*(longlong *)param_1[10] + 0x28))();
            }
          }
        }
      }
      param_1[0xc] = 0;
    }
  }
LAB_149562cdd:
  FUN_149563c27(param_1[8]);
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  if (iVar6 == 0) {
    if ((*(char *)((longlong)param_1 + 0x13) == '\0') &&
       (iVar8 = FUN_149564829(param_1,param_3), iVar8 == 0)) {
      plVar5 = (longlong *)param_1[0x23];
      for (lVar9 = *plVar5; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x38)) {
        *(byte *)(lVar9 + 0x34) = *(byte *)(lVar9 + 0x34) & 0xf3;
      }
      plVar5[2] = plVar5[1];
    }
    else {
      plVar5 = (longlong *)param_1[0x23];
      while (*plVar5 != 0) {
        FUN_1495602a2();
      }
    }
    FUN_149564708(param_1[0x23],*(undefined4 *)((longlong)param_1 + 0x1c));
  }
  lVar9 = param_1[0x24];
  if (lVar9 == 0) {
    if (((param_3 != 0) && (iVar6 == 0)) &&
       (iVar6 = 0, *(uint *)((longlong)param_1 + 0x1c) < *(uint *)((longlong)param_1 + 0x24))) {
      iVar6 = FUN_149564636(param_1);
    }
  }
  else if (*(char *)(lVar9 + 0x40) != '\0') {
    if (*(char *)(lVar9 + 0x3f) == '\0') {
      (**(code **)(**(longlong **)(lVar9 + 8) + 0x70))(*(longlong **)(lVar9 + 8),0,1,9);
    }
    *(undefined1 *)(lVar9 + 0x40) = 0;
    *(undefined4 *)(lVar9 + 0x7c) = 0;
    *(undefined1 *)(lVar9 + 0x43) = 0;
  }
  if ((param_3 != 0) && (iVar6 == 0)) {
    lVar9 = *(longlong *)param_1[9];
    if ((lVar9 == 0) ||
       (iVar6 = (**(code **)(lVar9 + 0x50))((longlong *)param_1[9],0x16,0), iVar6 == 0xc)) {
      iVar6 = 0;
    }
  }
  iVar8 = 0;
  if ((char)param_1[1] == '\0') {
    lVar9 = param_1[0x24];
    if (lVar9 == 0) {
LAB_149562efd:
      lVar9 = *(longlong *)param_1[9];
      iVar8 = 0;
      if (lVar9 != 0) {
        if (*(char *)((longlong)param_1 + 0x11) == '\0') {
          iVar8 = (**(code **)(lVar9 + 0x40))((longlong *)param_1[9],1);
        }
        if (*(char *)((longlong)param_1 + 0x15) != '\x05') {
          *(undefined1 *)((longlong)param_1 + 0x15) = 1;
        }
      }
      *(char *)((longlong)param_1 + 0x16) = (char)param_1[2];
    }
    else if (*(char *)(lVar9 + 0x3f) != '\0') {
      *(undefined1 *)(lVar9 + 0x3f) = 0;
      iVar7 = (**(code **)(**(longlong **)(lVar9 + 8) + 0x70))
                        (*(longlong **)(lVar9 + 8),*(short *)(lVar9 + 0x3c) + 3,1,6);
      if (iVar7 == 0) {
        iVar8 = 0;
        if (*(char *)(lVar9 + 0x3f) == '\0') goto LAB_149562efd;
      }
      else {
        *(undefined1 *)(lVar9 + 0x3f) = 1;
      }
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  if (iVar6 != 0) {
    iVar8 = iVar6;
  }
LAB_149562c9d:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149563041 FUN_149563041 body=381 status=ok
// SIG undefined FUN_149563041(void)

void FUN_149563041(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  
  FUN_149563c27(*(undefined8 *)(param_1 + 0x40));
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_14956479b(param_1);
  if (*(longlong *)(param_1 + 0x120) == 0) {
    if (*(char *)(param_1 + 8) == '\0') {
      if (**(longlong **)(param_1 + 0x48) == 0) {
LAB_1495630f4:
        plVar1 = *(longlong **)(param_1 + 0x50);
        if (*plVar1 != 0) {
          (**(code **)(*plVar1 + 8))(plVar1);
          *plVar1 = 0;
        }
      }
      else {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x60))();
        if (((uVar2 >> 0xb & 1) == 0) || ((*(byte *)(param_1 + 9) & 5) != 1)) goto LAB_1495630f4;
      }
      lVar5 = **(longlong **)(param_1 + 0x48);
      if (lVar5 == 0) {
        *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_1 + 0x10);
      }
      else {
        bVar6 = true;
        if (*(char *)(param_1 + 0x11) == '\0') {
          iVar3 = (**(code **)(lVar5 + 0x40))(*(longlong **)(param_1 + 0x48),0);
          bVar6 = iVar3 == 0;
        }
        if (*(char *)(param_1 + 0x15) != '\x05') {
          *(undefined1 *)(param_1 + 0x15) = 0;
        }
        *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_1 + 0x10);
        if ((!bVar6) && (*(char *)(param_1 + 0x14) == '\x06')) {
          *(undefined1 *)(param_1 + 0x15) = 5;
        }
      }
      goto LAB_149563179;
    }
  }
  else {
    FUN_149561e35();
LAB_149563179:
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0x2c) == 0) goto LAB_149563161;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    for (lVar5 = *(longlong *)(param_1 + 0x70); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x40)) {
      *(undefined4 *)(lVar5 + 0x18) = 1;
    }
    bVar6 = false;
    FUN_149564708(*(undefined8 *)(param_1 + 0x118),0);
    *(undefined1 *)(param_1 + 0x16) = 0;
  }
  else {
    bVar6 = **(longlong **)(param_1 + 0x50) == 0;
  }
  *(bool *)(param_1 + 0x14) = bVar6;
  if (*(char *)(param_1 + 0x1a) == '\0') {
    *(undefined4 *)(param_1 + 0x2c) = 0;
LAB_149563153:
    pcVar4 = FUN_149562686;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x90))(*(longlong **)(param_1 + 0x48),0,0);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    if (*(char *)(param_1 + 0x1a) == '\0') goto LAB_149563153;
    pcVar4 = FUN_149562436;
  }
  *(code **)(param_1 + 0x108) = pcVar4;
LAB_149563161:
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}



// FUNCTION 1495631be FUN_1495631be body=1268 status=ok
// SIG undefined FUN_1495631be(void)

int FUN_1495631be(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_64;
  longlong local_60;
  ulonglong local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar10 = *(int *)(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x2c) != 0) goto LAB_1495631e4;
  iVar10 = 0;
  if (*(int *)(param_1 + 0x80) <= param_3) goto LAB_1495631e4;
  iVar13 = (uint)(param_2 != 1) + param_3;
  if (iVar13 < *(int *)(param_1 + 0x80)) {
    lVar17 = (ulonglong)(param_2 != 1) + (longlong)param_3;
    lVar19 = lVar17 * 0x30 + 0x10;
    do {
      FUN_149563c27(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + lVar19));
      lVar17 = lVar17 + 1;
      lVar19 = lVar19 + 0x30;
    } while (lVar17 < *(int *)(param_1 + 0x80));
  }
  *(int *)(param_1 + 0x80) = iVar13;
  if (param_2 == 1) {
    iVar10 = 0;
    if (iVar13 != 0) goto LAB_1495631e4;
    puVar3 = *(undefined8 **)(param_1 + 0x58);
    if ((undefined *)*puVar3 == (undefined *)0x0) goto LAB_1495631e4;
    if ((undefined *)*puVar3 == &DAT_14bd407b8) {
      puVar4 = (undefined8 *)puVar3[3];
      while (puVar4 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)*puVar4;
        FUN_145e3b961();
      }
      *(undefined4 *)(puVar3 + 2) = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[7] = 0;
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  else {
    lVar17 = *(longlong *)(param_1 + 0x120);
    if ((lVar17 == 0) && (**(longlong **)(param_1 + 0x50) == 0)) goto LAB_1495631e4;
    if (iVar13 == 0) {
LAB_1495632ba:
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x20);
      *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_1 + 0x10);
      if (lVar17 != 0) {
        iVar10 = 0;
        if (*(char *)(lVar17 + 0x40) != '\0') {
          uVar16 = *(uint *)(lVar17 + 0x58);
          puVar12 = (undefined4 *)**(longlong **)(lVar17 + 0x30);
          uVar14 = *puVar12;
          uVar2 = puVar12[1];
          uVar5 = puVar12[2];
          uVar6 = puVar12[3];
          uVar7 = *(undefined8 *)(puVar12 + 6);
          uVar8 = *(undefined8 *)(puVar12 + 8);
          uVar9 = *(undefined8 *)(puVar12 + 10);
          *(undefined8 *)(lVar17 + 0x58) = *(undefined8 *)(puVar12 + 4);
          *(undefined8 *)(lVar17 + 0x60) = uVar7;
          *(undefined4 *)(lVar17 + 0x48) = uVar14;
          *(undefined4 *)(lVar17 + 0x4c) = uVar2;
          *(undefined4 *)(lVar17 + 0x50) = uVar5;
          *(undefined4 *)(lVar17 + 0x54) = uVar6;
          *(undefined8 *)(lVar17 + 0x68) = uVar8;
          *(undefined8 *)(lVar17 + 0x70) = uVar9;
          uVar11 = *(uint *)(lVar17 + 0x58);
          iVar10 = 0;
          if (uVar11 + 1 <= uVar16) {
            uVar11 = uVar11 + 0x1001;
            do {
              if (((ulonglong)uVar11 + 0xffffffff021 & 0xffffffff000) == 0) {
                puVar12 = (undefined4 *)
                          (**(longlong **)(lVar17 + 0x30) + (ulonglong)(uVar11 - 0x1000) * 4 + 0x84)
                ;
              }
              else {
                puVar12 = (undefined4 *)
                          ((ulonglong)((uVar11 - 0xfdf & 0xfff) << 2) +
                          (*(longlong **)(lVar17 + 0x30))
                          [(int)((ulonglong)uVar11 + 0xffffffff021 >> 0xc)]);
              }
              iVar10 = FUN_14956420d(param_1,*puVar12);
            } while ((iVar10 == 0) && (uVar1 = uVar11 - 0xfff, uVar11 = uVar11 + 1, uVar1 <= uVar16)
                    );
            uVar11 = *(uint *)(lVar17 + 0x58);
          }
          if (uVar16 != uVar11) {
            FUN_149562047(lVar17);
          }
        }
        lVar17 = FUN_149564278(*(undefined8 *)(param_1 + 0x118));
        if (iVar10 == 0 && lVar17 != 0) {
          do {
            lVar19 = *(longlong *)(lVar17 + 0x20);
            iVar10 = FUN_14956420d(param_1,*(undefined4 *)(lVar17 + 0x30));
            lVar17 = lVar19;
          } while (lVar19 != 0 && iVar10 == 0);
        }
        goto LAB_1495631e4;
      }
      lVar17 = *(longlong *)(param_1 + 0x60);
      uVar14 = 1;
      puVar12 = (undefined4 *)0x0;
      local_60 = 0;
LAB_1495632de:
      *(undefined8 *)(param_1 + 0x60) = 0;
      local_64 = uVar14;
LAB_1495632ee:
      plVar18 = (longlong *)(param_1 + 0x60);
      do {
        if (lVar17 <= *plVar18) {
          iVar10 = 0;
          break;
        }
        local_58 = local_58 & 0xffffffff00000000;
        local_78 = local_4c;
        iVar10 = FUN_149563fe8(param_1,0,lVar17,&local_58);
        uVar16 = (uint)local_58;
        if ((uint)local_58 == 0) {
          lVar19 = (ulonglong)*(uint *)(param_1 + 0xb8) + *(longlong *)(param_1 + 0x68);
          if (lVar19 == *(longlong *)(param_1 + 0x60)) {
            uVar16 = (uint)((lVar17 - lVar19) / ((longlong)*(int *)(param_1 + 0xbc) + 8));
            goto LAB_149563353;
          }
        }
        else {
LAB_149563353:
          if ((iVar10 == 0) && (uVar16 != 0)) {
            uVar11 = 1;
            while (*plVar18 < lVar17) {
              local_78 = (undefined1 *)CONCAT44(local_78._4_4_,1);
              iVar10 = FUN_149563c67(param_1,plVar18,puVar12,1);
              if ((iVar10 != 0) || (bVar20 = uVar16 <= uVar11, uVar11 = uVar11 + 1, bVar20))
              goto LAB_149563396;
            }
            iVar10 = 0;
          }
        }
LAB_149563396:
      } while (iVar10 == 0);
      if ((char)local_64 == '\0') goto LAB_14956351e;
    }
    else {
      lVar19 = (longlong)iVar13 * 0x30 + *(longlong *)(param_1 + 0x78);
      local_60 = lVar19 + -0x30;
      if (local_60 == 0) goto LAB_1495632ba;
      uVar2 = *(undefined4 *)(lVar19 + -0x18);
      puVar12 = (undefined4 *)FUN_145e3bd67(0x200);
      iVar10 = 7;
      if (puVar12 == (undefined4 *)0x0) goto LAB_1495631e4;
      uVar14 = 0;
      memset(puVar12 + 1,0,0x1fc);
      *puVar12 = uVar2;
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar19 + -0x18);
      *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_1 + 0x10);
      plVar18 = (longlong *)(param_1 + 0x60);
      lVar17 = *(longlong *)(param_1 + 0x60);
      if (*(longlong *)(param_1 + 0x120) != 0) goto LAB_1495632de;
      lVar15 = *(longlong *)(lVar19 + -0x28);
      if (*(longlong *)(lVar19 + -0x28) == 0) {
        lVar15 = lVar17;
      }
      *plVar18 = *(longlong *)(lVar19 + -0x30);
      do {
        if (lVar15 <= *plVar18) {
          local_64 = 0;
          goto LAB_1495632ee;
        }
        local_78 = (undefined1 *)CONCAT44(local_78._4_4_,1);
        iVar10 = FUN_149563c67(param_1,plVar18,puVar12,1);
      } while (iVar10 == 0);
LAB_14956351e:
      lVar15 = local_60;
      uVar16 = *(uint *)(local_60 + 0x1c);
      local_58 = ((longlong)*(int *)(param_1 + 0xbc) + 4) * (ulonglong)uVar16;
      lVar19 = *(longlong *)(param_1 + 0x120);
      if (lVar19 == 0) {
        if (iVar10 != 0) goto LAB_149563506;
      }
      else {
        if (*(int *)(local_60 + 0x2c) == *(int *)(lVar19 + 0x88)) {
          uVar11 = *(uint *)(local_60 + 0x20);
        }
        else {
          *(undefined4 *)(local_60 + 0x20) = 0;
          *(undefined4 *)(local_60 + 0x2c) = *(undefined4 *)(lVar19 + 0x88);
          uVar11 = 0;
        }
        if (uVar11 < *(uint *)(lVar19 + 0x58)) {
          *(uint *)(lVar19 + 0x58) = uVar11;
          *(undefined4 *)(lVar19 + 0x60) = *(undefined4 *)(local_60 + 0x24);
          *(undefined4 *)(lVar19 + 100) = *(undefined4 *)(local_60 + 0x28);
          FUN_149562047();
          uVar16 = *(uint *)(lVar15 + 0x1c);
        }
      }
      uVar16 = uVar16 - 1;
      do {
        uVar16 = uVar16 + 1;
        iVar10 = 0;
        if (*(uint *)(param_1 + 0x38) <= uVar16) break;
        local_78 = (undefined1 *)CONCAT44(local_78._4_4_,1);
        iVar10 = FUN_149563c67(param_1,&local_58,puVar12,0);
      } while (iVar10 == 0);
    }
LAB_149563506:
    FUN_149563c27(puVar12);
    if (iVar10 != 0) goto LAB_1495631e4;
    *(longlong *)(param_1 + 0x60) = lVar17;
  }
  iVar10 = 0;
LAB_1495631e4:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return iVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495636b3 FUN_1495636b3 body=1395 status=ok
// SIG undefined FUN_1495636b3(void)

int FUN_1495636b3(longlong *param_1,int param_2)

{
  ulonglong *puVar1;
  int iVar2;
  char *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong *_Dst;
  char *pcVar10;
  size_t sVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  char *_Str;
  longlong *plVar16;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  char *local_98;
  ulonglong local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  uint local_64;
  ulonglong local_60;
  int local_54;
  char *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar9 = *param_1;
  local_68 = 0;
  local_6c = 1;
  local_70 = *(undefined4 *)((longlong)param_1 + 0xbc);
  iVar8 = (**(code **)(*(longlong *)param_1[10] + 0x30))((longlong *)param_1[10],&local_60);
  uVar12 = 0;
  if (iVar8 == 0) {
    pcVar3 = (char *)param_1[0x22];
    iVar8 = FUN_1495644d7(param_1[10],pcVar3,*(int *)(*param_1 + 8) + 1);
    if (iVar8 == 0) {
      uVar12 = 0;
      iVar8 = 0;
      if (*pcVar3 != '\0') {
        iVar8 = (**(code **)(lVar9 + 0x38))(lVar9,pcVar3,0,&local_6c);
      }
      if ((iVar8 == 0) && (local_6c != 0)) {
        puVar1 = (ulonglong *)(param_1 + 0xc);
        param_1[0xc] = 0;
        uVar12 = 0;
        iVar14 = param_2;
LAB_149563783:
        local_a8 = &local_68;
        iVar8 = FUN_149563fe8(param_1,param_2,local_60,&local_64);
        uVar7 = local_68;
        if (iVar8 == 0) {
          uVar13 = (ulonglong)*(uint *)(param_1 + 0x17);
          if (local_64 == 0xffffffff) {
            local_64 = (uint)((longlong)(local_60 - uVar13) /
                             ((longlong)*(int *)((longlong)param_1 + 0xbc) + 8));
          }
          uVar4 = *puVar1;
          if ((local_64 == 0 && param_2 == 0) && (uVar13 + param_1[0xd] == uVar4)) {
            local_64 = (uint)((longlong)(local_60 - uVar4) /
                             ((longlong)*(int *)((longlong)param_1 + 0xbc) + 8));
          }
          uVar15 = local_64;
          if (uVar4 == uVar13) {
            local_90 = uVar12;
            iVar8 = FUN_149564636(param_1,local_68);
            uVar12 = local_90;
            if (iVar8 != 0) goto LAB_1495638c3;
            *(undefined4 *)((longlong)param_1 + 0x1c) = uVar7;
          }
          if (uVar15 != 0) {
            uVar15 = 0;
            do {
              if (iVar14 != 0) {
                *(int *)((longlong)param_1 + 0x84) = *(int *)((longlong)param_1 + 0x84) + 1;
                for (lVar9 = param_1[0xe]; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x40)) {
                  *(undefined4 *)(lVar9 + 0x18) = 1;
                }
                FUN_149564708(param_1[0x23],0);
              }
              local_a8 = (undefined4 *)((ulonglong)local_a8 & 0xffffffff00000000);
              iVar8 = FUN_149563c67(param_1,puVar1,0,1);
              if (iVar8 != 0) {
                if (iVar8 != 0x65) {
                  if (iVar8 == 0x20a) goto LAB_149563931;
                  goto LAB_14956392d;
                }
                *puVar1 = local_60;
                iVar14 = 0;
                break;
              }
              uVar12 = (ulonglong)((int)uVar12 + 1);
              uVar15 = uVar15 + 1;
              iVar14 = 0;
            } while (uVar15 < local_64);
          }
          goto LAB_149563783;
        }
        if (iVar8 == 0x65) goto LAB_149563931;
      }
      else {
LAB_14956392d:
        if (iVar8 == 0) {
LAB_149563931:
          iVar14 = (int)uVar12;
          iVar8 = FUN_14955ef5f(param_1,&local_70,0xffffffff);
          *(char *)((longlong)param_1 + 0x16) = (char)param_1[2];
          if (iVar8 != 0) goto LAB_1495638c9;
          pcVar3 = (char *)param_1[0x22];
          iVar8 = FUN_1495644d7(param_1[10],pcVar3,*(int *)(*param_1 + 8) + 1);
          if ((iVar8 != 0) ||
             (((byte)(*(char *)((longlong)param_1 + 0x14) - 4U) < 0xfd &&
              (iVar8 = FUN_149558315(param_1,0), iVar8 != 0)))) goto LAB_1495638c9;
          iVar8 = FUN_149562c6b(param_1,*pcVar3 != '\0',0);
          if ((iVar8 != 0) || ((iVar8 = 0, *pcVar3 == '\0' || (local_6c == 0)))) goto LAB_1495638c9;
          local_90 = CONCAT44(local_90._4_4_,param_2);
          lVar9 = *param_1;
          sVar11 = (longlong)*(int *)(lVar9 + 4) * 2;
          _Dst = (longlong *)FUN_145e3bd67(sVar11);
          iVar8 = 7;
          if (_Dst != (longlong *)0x0) {
            memset(_Dst,0,sVar11);
            iVar2 = *(int *)(lVar9 + 4);
            local_a8 = (undefined4 *)0x0;
            iVar8 = (**(code **)(lVar9 + 0x28))(lVar9,pcVar3,_Dst,0x4001);
            plVar16 = _Dst;
            if ((iVar8 == 0) && (iVar8 = (**(code **)(*_Dst + 0x30))(_Dst,&local_50), iVar8 == 0)) {
              local_78 = (longlong)*(int *)(lVar9 + 8);
              pcVar10 = (char *)FUN_145e3bd67(local_50 + local_78 + 3);
              if (pcVar10 == (char *)0x0) {
                iVar8 = 7;
                goto LAB_149563a80;
              }
              local_98 = local_50;
              iVar8 = (**(code **)(*_Dst + 0x10))(_Dst,pcVar10,local_50,0);
              if (iVar8 == 0) {
                pcVar10[(longlong)local_50] = '\0';
                (pcVar10 + 1)[(longlong)local_50] = '\0';
                if (0 < (longlong)local_50) {
                  local_88 = (longlong *)((longlong)_Dst + (longlong)iVar2);
                  local_78 = local_78 + 1;
                  local_98 = local_98 + (longlong)pcVar10 + 2;
                  _Str = pcVar10;
                  local_80 = _Dst;
                  do {
                    iVar8 = (**(code **)(lVar9 + 0x38))(lVar9,_Str,0,&local_54);
                    plVar6 = local_88;
                    plVar16 = local_80;
                    if (iVar8 != 0) goto LAB_149563a82;
                    if (local_54 != 0) {
                      local_a8 = (undefined4 *)0x0;
                      iVar8 = (**(code **)(lVar9 + 0x28))(lVar9,_Str,local_88,0x801);
                      plVar16 = local_80;
                      if (iVar8 != 0) goto LAB_149563a82;
                      iVar8 = FUN_1495644d7(plVar6,local_98);
                      lVar5 = *plVar6;
                      if (lVar5 != 0) {
                        (**(code **)(lVar5 + 8))(local_88);
                        *local_88 = 0;
                      }
                      _Dst = local_80;
                      plVar16 = local_80;
                      if (iVar8 != 0) goto LAB_149563a82;
                      if ((*local_98 != '\0') && (iVar8 = strcmp(local_98,pcVar3), iVar8 == 0)) {
                        iVar8 = 0;
                        plVar16 = local_80;
                        goto LAB_149563a82;
                      }
                    }
                    if (_Str == (char *)0x0) {
                      uVar12 = 0;
                    }
                    else {
                      sVar11 = strlen(_Str);
                      uVar12 = (ulonglong)((uint)sVar11 & 0x3fffffff);
                    }
                    _Str = _Str + uVar12 + 1;
                  } while ((longlong)_Str - (longlong)pcVar10 < (longlong)local_50);
                }
                if (*_Dst != 0) {
                  (**(code **)(*_Dst + 8))(_Dst);
                  *_Dst = 0;
                }
                iVar8 = (**(code **)(lVar9 + 0x30))(lVar9,pcVar3,0);
                plVar16 = _Dst;
              }
            }
            else {
LAB_149563a80:
              pcVar10 = (char *)0x0;
            }
LAB_149563a82:
            FUN_145e3b961(pcVar10);
            if (*plVar16 != 0) {
              (**(code **)(*plVar16 + 8))(plVar16);
              *plVar16 = 0;
            }
            FUN_145e3b961(plVar16);
          }
          param_2 = (int)local_90;
          goto LAB_1495638c9;
        }
      }
    }
  }
LAB_1495638c3:
  iVar14 = (int)uVar12;
  *(char *)((longlong)param_1 + 0x16) = (char)param_1[2];
LAB_1495638c9:
  if ((param_2 != 0) && (iVar14 != 0)) {
    FUN_14955599e(0x21b,"recovered %d pages from %s",iVar14,param_1[0x1b]);
  }
  FUN_14955f2f7(param_1);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar8;
}



// FUNCTION 149563c27 FUN_149563c27 body=64 status=ok
// SIG undefined FUN_149563c27(void)

void FUN_149563c27(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 8) != 0) {
    lVar1 = 2;
    do {
      FUN_149563c27(*(undefined8 *)(param_1 + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0x40);
  }
  FUN_145e3b961(param_1);
  return;
}



// FUNCTION 149563c67 FUN_149563c67 body=896 status=ok
// SIG undefined FUN_149563c67(void)

int FUN_149563c67(longlong param_1,longlong *param_2,longlong param_3,int param_4,int param_5)

{
  longlong *plVar1;
  longlong lVar2;
  void *_Dst;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  void *pvVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auStack_78 [32];
  void *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pvVar11 = *(void **)(param_1 + 0x110);
  plVar1 = *(longlong **)(param_1 + 0x50 + (ulonglong)(param_4 == 0) * 8);
  iVar6 = (**(code **)(*plVar1 + 0x10))(plVar1,&local_50,4,*param_2);
  if (iVar6 != 0) goto LAB_149563cc4;
  uVar12 = (uint)local_50;
  iVar6 = (**(code **)(*plVar1 + 0x10))(plVar1,pvVar11,*(undefined4 *)(param_1 + 0xbc),*param_2 + 4)
  ;
  if (iVar6 != 0) goto LAB_149563cc4;
  lVar10 = (longlong)(*(int *)(param_1 + 0xbc) + param_4 * 4 + 4) + *param_2;
  *param_2 = lVar10;
  local_58 = pvVar11;
  if (uVar12 != 0) {
    uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
    iVar6 = 0;
    if (uVar12 != (int)(0x40000000 / (longlong)*(int *)(param_1 + 0xbc)) + 1U) {
      if ((*(uint *)(param_1 + 0x1c) < uVar12) ||
         ((param_3 != 0 && (iVar7 = FUN_1495602ed(param_3,uVar12), iVar7 != 0))))
      goto LAB_149563cc4;
      if (param_4 != 0) {
        iVar6 = (**(code **)(*plVar1 + 0x10))(plVar1,&local_50,4,lVar10 + -4);
        if (iVar6 != 0) goto LAB_149563cc4;
        if (param_5 == 0) {
          uVar8 = *(uint *)(param_1 + 0x34);
          if (200 < (longlong)*(int *)(param_1 + 0xbc)) {
            uVar9 = (longlong)*(int *)(param_1 + 0xbc) + 200;
            do {
              uVar8 = uVar8 + *(byte *)((longlong)local_58 + (uVar9 - 400));
              uVar9 = uVar9 - 200;
            } while (400 < uVar9);
          }
          iVar6 = 0x65;
          if (((uint)local_50 >> 0x18 | ((uint)local_50 & 0xff0000) >> 8 |
               ((uint)local_50 & 0xff00) << 8 | (uint)local_50 << 0x18) != uVar8)
          goto LAB_149563cc4;
        }
      }
      if ((param_3 != 0) && (iVar6 = FUN_1495607d9(param_3,uVar12), iVar6 != 0)) goto LAB_149563cc4;
      pvVar11 = local_58;
      if ((uVar12 == 1) &&
         (*(ushort *)(param_1 + 0xb2) != (ushort)*(byte *)((longlong)local_58 + 0x14))) {
        *(ushort *)(param_1 + 0xb2) = (ushort)*(byte *)((longlong)local_58 + 0x14);
      }
      if (*(longlong *)(param_1 + 0x120) == 0) {
        local_50 = FUN_14956295c(param_1,uVar12);
        if (param_4 != 0) goto LAB_149563def;
        if (local_50 == 0) {
          bVar13 = true;
          lVar10 = 0;
        }
        else {
          bVar13 = (*(byte *)(local_50 + 0x34) & 8) == 0;
          lVar10 = local_50;
        }
      }
      else {
        local_50 = 0;
        if (param_4 == 0) {
          bVar13 = true;
          lVar10 = 0;
        }
        else {
LAB_149563def:
          bVar13 = true;
          lVar10 = local_50;
          if (*(char *)(param_1 + 0xb) == '\0') {
            bVar13 = *param_2 <= *(longlong *)(param_1 + 0x68);
          }
        }
      }
      lVar2 = **(longlong **)(param_1 + 0x48);
      if (lVar2 == 0) {
LAB_149563e1d:
        iVar7 = 0;
        iVar6 = iVar7;
        if ((param_4 == 0) && (lVar10 == 0)) {
          *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 2;
          iVar6 = (**(code **)(param_1 + 0x108))(param_1,uVar12,&local_50,1);
          *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfd;
          if (iVar6 != 0) goto LAB_149563cc4;
          FUN_149564475(local_50);
          lVar10 = local_50;
          iVar6 = iVar7;
        }
      }
      else {
        if (*(byte *)(param_1 + 0x14) < 4) {
          bVar13 = (bool)(*(byte *)(param_1 + 0x14) == 0 & bVar13);
        }
        if (!bVar13) goto LAB_149563e1d;
        iVar6 = (**(code **)(lVar2 + 0x18))
                          (*(longlong **)(param_1 + 0x48),pvVar11,(longlong)*(int *)(param_1 + 0xbc)
                           ,(ulonglong)(uVar12 - 1) * (longlong)*(int *)(param_1 + 0xbc));
        pvVar11 = local_58;
        if (*(uint *)(param_1 + 0x24) < uVar12) {
          *(uint *)(param_1 + 0x24) = uVar12;
        }
        if (*(longlong *)(param_1 + 0x70) != 0) {
          FUN_149562110(*(longlong *)(param_1 + 0x70),uVar12,local_58);
        }
      }
      if (lVar10 != 0) {
        _Dst = *(void **)(lVar10 + 8);
        memcpy(_Dst,pvVar11,(longlong)*(int *)(param_1 + 0xbc));
        (**(code **)(param_1 + 0x100))(local_50);
        if (uVar12 == 1) {
          uVar3 = *(undefined4 *)((longlong)_Dst + 0x1c);
          uVar4 = *(undefined4 *)((longlong)_Dst + 0x20);
          uVar5 = *(undefined4 *)((longlong)_Dst + 0x24);
          *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)((longlong)_Dst + 0x18);
          *(undefined4 *)(param_1 + 0x8c) = uVar3;
          *(undefined4 *)(param_1 + 0x90) = uVar4;
          *(undefined4 *)(param_1 + 0x94) = uVar5;
        }
        FUN_14955dbdc(local_50);
      }
      goto LAB_149563cc4;
    }
  }
  iVar6 = 0x65;
LAB_149563cc4:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar6;
}



// FUNCTION 149563fe8 FUN_149563fe8 body=548 status=ok
// SIG undefined FUN_149563fe8(void)

undefined8 FUN_149563fe8(longlong param_1,int param_2,longlong param_3,uint *param_4,uint *param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  uint local_30;
  uint local_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x60) == 0) {
    uVar2 = (ulonglong)*(uint *)(param_1 + 0xb8);
    lVar5 = 0;
  }
  else {
    uVar2 = (ulonglong)*(uint *)(param_1 + 0xb8);
    lVar5 = ((*(longlong *)(param_1 + 0x60) + -1) / (longlong)uVar2 + 1) * uVar2;
  }
  *(longlong *)(param_1 + 0x60) = lVar5;
  uVar1 = 0x65;
  if (((longlong)(uVar2 + lVar5) <= param_3) &&
     ((((param_2 == 0 && (lVar5 == *(longlong *)(param_1 + 0x68))) ||
       ((uVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))
                           (*(longlong **)(param_1 + 0x50),&local_28,8,lVar5), (int)uVar1 == 0 &&
        (uVar1 = 0x65, local_28 == -0x289c5edf06fa2a27)))) &&
      (uVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))
                         (*(longlong **)(param_1 + 0x50),&local_2c,4,lVar5 + 8), (int)uVar1 == 0))))
  {
    *param_4 = local_2c >> 0x18 | (local_2c & 0xff0000) >> 8 | (local_2c & 0xff00) << 8 |
               local_2c << 0x18;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))
                      (*(longlong **)(param_1 + 0x50),&local_2c,4,lVar5 + 0xc);
    if ((int)uVar1 == 0) {
      *(uint *)(param_1 + 0x34) =
           local_2c >> 0x18 | (local_2c & 0xff0000) >> 8 | (local_2c & 0xff00) << 8 |
           local_2c << 0x18;
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))
                        (*(longlong **)(param_1 + 0x50),&local_2c,4,lVar5 + 0x10);
      if ((int)uVar1 == 0) {
        *param_5 = local_2c >> 0x18 | (local_2c & 0xff0000) >> 8 | (local_2c & 0xff00) << 8 |
                   local_2c << 0x18;
        lVar3 = *(longlong *)(param_1 + 0x60);
        if (lVar3 == 0) {
          uVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))
                            (*(longlong **)(param_1 + 0x50),&local_2c,4,lVar5 + 0x14);
          uVar4 = local_2c;
          if (((int)uVar1 != 0) ||
             (uVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))
                                (*(longlong **)(param_1 + 0x50),&local_2c,4,lVar5 + 0x18),
             (int)uVar1 != 0)) goto LAB_14956403d;
          uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
          local_30 = local_2c >> 0x18 | (local_2c & 0xff0000) >> 8 | (local_2c & 0xff00) << 8 |
                     local_2c << 0x18;
          if (local_2c == 0) {
            local_30 = *(uint *)(param_1 + 0xbc);
          }
          uVar1 = 0x65;
          if (((uVar4 - 0x10001 < 0xffff001f || local_30 - 0x10001 < 0xffff01ff) ||
              ((local_30 + 0x1ffff & local_30) != 0)) || ((uVar4 + 0x1ffff & uVar4) != 0))
          goto LAB_14956403d;
          uVar1 = FUN_14955ef5f(param_1,&local_30,0xffffffff);
          *(uint *)(param_1 + 0xb8) = uVar4;
          lVar3 = *(longlong *)(param_1 + 0x60);
        }
        else {
          uVar4 = *(uint *)(param_1 + 0xb8);
          uVar1 = 0;
        }
        *(ulonglong *)(param_1 + 0x60) = (ulonglong)uVar4 + lVar3;
      }
    }
  }
LAB_14956403d:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14956420d FUN_14956420d body=107 status=ok
// SIG undefined FUN_14956420d(void)

int FUN_14956420d(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_14956295c();
  iVar1 = 0;
  if (lVar2 != 0) {
    if (*(short *)(lVar2 + 0x36) == 1) {
      FUN_149562b0f(lVar2);
    }
    else {
      iVar1 = FUN_149562a01(lVar2);
      if (iVar1 == 0) {
        (**(code **)(param_1 + 0x100))(lVar2);
      }
      FUN_14955db91(lVar2);
    }
  }
  for (lVar2 = *(longlong *)(param_1 + 0x70); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x40)) {
    *(undefined4 *)(lVar2 + 0x18) = 1;
  }
  return iVar1;
}



// FUNCTION 149564278 FUN_149564278 body=508 status=ok
// SIG undefined FUN_149564278(void)

undefined1 * FUN_149564278(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_188 [40];
  undefined1 local_160 [32];
  undefined1 *local_140;
  undefined1 *local_118 [32];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar3 = *param_1;
  if (*param_1 == 0) {
    memset(local_118,0,0x100);
    puVar6 = (undefined1 *)0x0;
  }
  else {
    do {
      lVar2 = *(longlong *)(lVar3 + 0x38);
      *(longlong *)(lVar3 + 0x20) = lVar2;
      lVar3 = lVar2;
    } while (lVar2 != 0);
    puVar5 = (undefined1 *)*param_1;
    memset(local_118,0,0x100);
    puVar6 = (undefined1 *)0x0;
    if (puVar5 != (undefined1 *)0x0) {
      do {
        puVar7 = *(undefined1 **)(puVar5 + 0x20);
        *(undefined8 *)(puVar5 + 0x20) = 0;
        lVar3 = 0;
        do {
          puVar6 = local_118[lVar3];
          puVar9 = local_160;
          if (local_118[lVar3] == (undefined1 *)0x0) {
            local_118[lVar3] = puVar5;
            goto LAB_1495643b2;
          }
          do {
            while (puVar4 = puVar6, *(uint *)(puVar5 + 0x30) <= *(uint *)(puVar4 + 0x30)) {
              *(undefined1 **)(puVar9 + 0x20) = puVar5;
              plVar1 = (longlong *)(puVar5 + 0x20);
              puVar6 = puVar4;
              puVar8 = puVar4;
              puVar4 = puVar5;
              puVar9 = puVar5;
              puVar5 = (undefined1 *)*plVar1;
              if ((undefined1 *)*plVar1 == (undefined1 *)0x0) goto LAB_149564335;
            }
            *(undefined1 **)(puVar9 + 0x20) = puVar4;
            puVar6 = *(undefined1 **)(puVar4 + 0x20);
            puVar8 = puVar5;
            puVar9 = puVar4;
          } while (*(undefined1 **)(puVar4 + 0x20) != (undefined1 *)0x0);
LAB_149564335:
          *(undefined1 **)(puVar4 + 0x20) = puVar8;
          local_118[lVar3] = (undefined1 *)0x0;
          lVar3 = lVar3 + 1;
          puVar5 = local_140;
          puVar6 = local_160;
        } while (lVar3 != 0x1f);
        do {
          while (puVar9 = local_118[0x1f], *(uint *)(puVar5 + 0x30) <= *(uint *)(puVar9 + 0x30)) {
            *(undefined1 **)(puVar6 + 0x20) = puVar5;
            plVar1 = (longlong *)(puVar5 + 0x20);
            puVar4 = puVar9;
            local_118[0x1f] = puVar9;
            puVar9 = puVar5;
            puVar6 = puVar5;
            puVar5 = (undefined1 *)*plVar1;
            if ((undefined1 *)*plVar1 == (undefined1 *)0x0) goto LAB_1495643a1;
          }
          *(undefined1 **)(puVar6 + 0x20) = puVar9;
          puVar4 = puVar5;
          local_118[0x1f] = *(undefined1 **)(puVar9 + 0x20);
          puVar6 = puVar9;
        } while (*(undefined1 **)(puVar9 + 0x20) != (undefined1 *)0x0);
LAB_1495643a1:
        *(undefined1 **)(puVar9 + 0x20) = puVar4;
        local_118[0x1f] = local_140;
LAB_1495643b2:
        puVar6 = local_118[0];
        puVar5 = puVar7;
      } while (puVar7 != (undefined1 *)0x0);
    }
  }
  lVar3 = 1;
  do {
    puVar5 = local_118[lVar3];
    puVar7 = puVar6;
    if ((puVar5 != (undefined1 *)0x0) &&
       (puVar7 = puVar5, puVar9 = local_160, puVar6 != (undefined1 *)0x0)) {
      do {
        while (puVar7 = puVar6, *(uint *)(puVar5 + 0x30) <= *(uint *)(puVar7 + 0x30)) {
          *(undefined1 **)(puVar9 + 0x20) = puVar5;
          plVar1 = (longlong *)(puVar5 + 0x20);
          puVar4 = puVar7;
          puVar6 = puVar7;
          puVar7 = puVar5;
          puVar9 = puVar5;
          puVar5 = (undefined1 *)*plVar1;
          if ((undefined1 *)*plVar1 == (undefined1 *)0x0) goto LAB_14956441c;
        }
        *(undefined1 **)(puVar9 + 0x20) = puVar7;
        puVar4 = puVar5;
        puVar6 = *(undefined1 **)(puVar7 + 0x20);
        puVar9 = puVar7;
      } while (*(undefined1 **)(puVar7 + 0x20) != (undefined1 *)0x0);
LAB_14956441c:
      *(undefined1 **)(puVar7 + 0x20) = puVar4;
      puVar7 = local_140;
    }
    lVar3 = lVar3 + 1;
    puVar6 = puVar7;
    if (lVar3 == 0x20) {
      if ((local_18 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return puVar7;
    }
  } while( true );
}



// FUNCTION 149564475 FUN_149564475 body=98 status=ok
// SIG undefined FUN_149564475(void)

void FUN_149564475(longlong param_1)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  uVar1 = *(ushort *)(param_1 + 0x34);
  if ((uVar1 & 0x11) != 0) {
    *(ushort *)(param_1 + 0x34) = uVar1 & 0xffef;
    if ((uVar1 & 1) != 0) {
      *(ushort *)(param_1 + 0x34) = uVar1 & 0xffef ^ 3;
      plVar2 = *(longlong **)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x40) = 0;
      lVar3 = *plVar2;
      *(longlong *)(param_1 + 0x38) = lVar3;
      if (lVar3 == 0) {
        plVar2[1] = param_1;
        if (*(char *)((longlong)plVar2 + 0x2c) != '\0') {
          *(undefined1 *)((longlong)plVar2 + 0x2d) = 1;
        }
      }
      else {
        *(longlong *)(lVar3 + 0x40) = param_1;
      }
      *plVar2 = param_1;
      if ((plVar2[2] == 0) && ((*(byte *)(param_1 + 0x34) & 8) == 0)) {
        plVar2[2] = param_1;
      }
    }
  }
  return;
}



// FUNCTION 1495644d7 FUN_1495644d7 body=350 status=ok
// SIG undefined FUN_1495644d7(void)

int FUN_1495644d7(longlong *param_1,undefined1 *param_2,uint param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  uint local_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  iVar1 = (**(code **)(*param_1 + 0x30))(param_1,&local_48);
  if ((0xf < local_48 && iVar1 == 0) &&
     (iVar1 = (**(code **)(*param_1 + 0x10))(param_1,&local_40,4,local_48 + -0x10), iVar1 == 0)) {
    uVar3 = local_40 >> 0x18 | (local_40 & 0xff0000) >> 8 | (local_40 & 0xff00) << 8 |
            local_40 << 0x18;
    iVar1 = 0;
    if (((uVar3 < param_3) &&
        (((uVar4 = (ulonglong)uVar3, local_40 != 0 && (longlong)uVar4 <= local_48 + -0x10 &&
          (iVar1 = (**(code **)(*param_1 + 0x10))(param_1,&local_40,4,local_48 + -0xc),
          uVar5 = local_40, iVar1 == 0)) &&
         (iVar1 = (**(code **)(*param_1 + 0x10))(param_1,&local_40,8,local_48 + -8), iVar1 == 0))))
       && ((iVar1 = 0, CONCAT44(uStack_3c,local_40) == -0x289c5edf06fa2a27 &&
           (iVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2,uVar3,(local_48 - uVar4) + -0x10)
           , iVar1 == 0)))) {
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      uVar2 = 0;
      do {
        uVar5 = uVar5 - (int)(char)param_2[uVar2];
        uVar2 = uVar2 + 1;
      } while (uVar4 != uVar2);
      iVar1 = 0;
      uVar4 = (ulonglong)uVar3;
      if (uVar5 != 0) {
        uVar4 = 0;
      }
      param_2[uVar4] = 0;
      param_2[(int)uVar4 + 1] = 0;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar1;
}



// FUNCTION 149564636 FUN_149564636 body=209 status=ok
// SIG undefined FUN_149564636(void)

undefined8 FUN_149564636(longlong param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  undefined8 uVar2;
  size_t _Size;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = 0;
  if ((**(longlong **)(param_1 + 0x48) == 0) || (0xfc < (byte)(*(char *)(param_1 + 0x14) - 4U)))
  goto LAB_149564682;
  iVar1 = *(int *)(param_1 + 0xbc);
  _Size = (size_t)iVar1;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x30))();
  if ((int)uVar2 != 0) goto LAB_149564682;
  lVar3 = param_2 * _Size;
  uVar2 = 0;
  if (local_38 == lVar3) goto LAB_149564682;
  if (lVar3 < local_38) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x20))
                      (*(longlong **)(param_1 + 0x48),lVar3);
LAB_1495646c7:
    if ((int)uVar2 != 0) goto LAB_149564682;
  }
  else if ((longlong)(local_38 + _Size) <= lVar3) {
    _Dst = *(void **)(param_1 + 0x110);
    memset(_Dst,0,_Size);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))
                      (*(longlong **)(param_1 + 0x48),_Dst,iVar1,lVar3 - _Size);
    goto LAB_1495646c7;
  }
  *(uint *)(param_1 + 0x24) = param_2;
  uVar2 = 0;
LAB_149564682:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 149564708 FUN_149564708 body=147 status=ok
// SIG undefined FUN_149564708(void)

void FUN_149564708(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (param_1[8] == 0) {
    return;
  }
  lVar3 = *param_1;
  while (lVar3 != 0) {
    lVar2 = *(longlong *)(lVar3 + 0x38);
    puVar1 = (uint *)(lVar3 + 0x30);
    lVar3 = lVar2;
    if (param_2 < *puVar1) {
      FUN_1495602a2();
    }
  }
  if (param_2 == 0) {
    if ((int)param_1[3] == 0) {
      param_2 = 0;
    }
    else {
      param_2 = 0;
      puVar4 = (undefined8 *)(*DAT_14c765dd8)(param_1[8],1,0);
      if (puVar4 != (undefined8 *)0x0) {
        memset((void *)*puVar4,0,(longlong)*(int *)((longlong)param_1 + 0x24));
        param_2 = 1;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000149564757. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_14c765df0)(param_1[8],param_2 + 1);
  return;
}



// FUNCTION 14956479b FUN_14956479b body=142 status=ok
// SIG undefined FUN_14956479b(void)

void FUN_14956479b(longlong param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  if (0 < *(int *)(param_1 + 0x80)) {
    lVar4 = 0x10;
    lVar3 = 0;
    do {
      FUN_149563c27(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + lVar4));
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x30;
    } while (lVar3 < *(int *)(param_1 + 0x80));
  }
  puVar1 = *(undefined8 **)(param_1 + 0x58);
  puVar2 = (undefined *)*puVar1;
  if (*(char *)(param_1 + 8) == '\0') {
    if (puVar2 == (undefined *)0x0) goto LAB_149564805;
  }
  else {
    bVar5 = puVar2 != &DAT_14bd407b8;
    puVar2 = &DAT_14bd407b8;
    if (bVar5) goto LAB_149564805;
  }
  (**(code **)(puVar2 + 8))(puVar1);
  *puVar1 = 0;
LAB_149564805:
  FUN_145e3b961(*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}


