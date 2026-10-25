// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147052746 FUN_147052746 body=449 status=ok
// SIG undefined FUN_147052746(void)

void FUN_147052746(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  void *_Src;
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_98 [32];
  code *local_78;
  void *local_68;
  int local_60;
  void **local_58;
  void **local_50;
  undefined8 **local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_1 + 0x30))(param_1,&local_68,param_3,param_2);
  _Src = local_68;
  local_40 = (void *)0x0;
  local_38 = local_60;
  if ((longlong)local_60 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_60,0);
    memcpy(local_40,_Src,(longlong)local_60 * 2);
  }
  local_48 = &local_58;
  local_50 = (void **)&LAB_147059cd2;
  local_58 = &local_40;
  uVar2 = FUN_146298496();
  local_78 = FUN_147059c92;
  (**(code **)(*param_3 + 0x90))(param_3,param_2,uVar2,&local_50);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_40 = (void *)FUN_1462997f0();
  local_48._0_4_ = 1;
  local_50 = &local_40;
  cVar1 = (**(code **)(*param_3 + 0xe0))(param_3,param_2);
  if (cVar1 != '\0') {
    uVar2 = FUN_146298bc6();
    puVar3 = (undefined8 *)(**(code **)(*param_3 + 0xd0))(param_3,param_2,uVar2);
    if (puVar3 != (undefined8 *)0x0) {
      uVar2 = *puVar3;
      local_40 = (void *)FUN_1462997f0();
      local_48._0_4_ = 1;
      local_50 = &local_40;
      cVar1 = (**(code **)(*param_3 + 0xe0))(param_3,uVar2);
      if (cVar1 != '\0') {
        if (DAT_14c99f3e0 == 0) {
          uVar2 = FUN_140cd1756();
          DAT_14c99f3e0 = FUN_140002ddd(FUN_14629aeeb,uVar2,L"HideRowFromUITag");
        }
        (**(code **)(*param_3 + 0x88))(param_3,param_2,DAT_14c99f3e0);
      }
    }
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147052912 FUN_147052912 body=28 status=ok
// SIG undefined FUN_147052912(void)

undefined8 FUN_147052912(longlong *param_1,undefined8 param_2)

{
  undefined8 in_stack_00000038;
  
  (**(code **)(*param_1 + 0x50))(param_1,param_2,in_stack_00000038);
  return param_2;
}



// FUNCTION 147052932 FUN_147052932 body=125 status=ok
// SIG undefined FUN_147052932(void)

undefined8 FUN_147052932(undefined8 param_1,undefined8 param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99f554) {
    FUN_144b3d300(&DAT_14c99f554);
    if (DAT_14c99f554 == -1) {
      FUN_1446f470e(&DAT_14c99f54c,L"DisplayName",1);
      _Init_thread_footer(&DAT_14c99f554);
    }
  }
  FUN_140056680(param_2,L"<Invalid>");
  return param_2;
}



// FUNCTION 1470529d0 FUN_1470529d0 body=169 status=ok
// SIG undefined FUN_1470529d0(void)

longlong *
FUN_1470529d0(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_146298bc6();
  puVar2 = (undefined8 *)(**(code **)(*param_4 + 0xd0))(param_4,param_3,uVar1);
  if (puVar2 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *puVar2;
  }
  (**(code **)(*param_1 + 0x58))(param_1,param_4,param_3);
  (**(code **)(*param_1 + 0x48))(param_1,param_2,param_4,param_5,uVar1,param_3,param_6);
  if (*param_2 != 0) {
    FUN_147052746(param_1,param_3,param_4);
  }
  return param_2;
}



// FUNCTION 147052a7a FUN_147052a7a body=235 status=ok
// SIG undefined FUN_147052a7a(void)

void FUN_147052a7a(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong *local_38 [2];
  longlong local_28;
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
  plVar2 = &local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x10))(param_1,local_38,plVar2);
  FUN_140008f88(param_3,local_38);
  if (local_38[0] != (longlong *)0x0) {
    (**(code **)(*local_38[0] + 0x10))();
  }
  if (local_28 != 0) {
    piVar1 = (int *)(local_28 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147052b72 FUN_147052b72 body=429 status=ok
// SIG undefined FUN_147052b72(void)

void FUN_147052b72(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined4 local_58;
  int local_4c;
  longlong *local_48;
  undefined4 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar4 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  FUN_144a5dc74(&local_48);
  FUN_144a4a07e();
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
  iVar2 = local_4c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_48;
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 8))();
  }
  local_58 = local_40;
  uVar3 = (**(code **)(*param_1 + 0x20))(param_1,plVar4,&local_60,iVar2 != 0);
  *param_3 = uVar3;
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  if (local_38 != 0) {
    piVar1 = (int *)(local_38 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147052d2a FUN_147052d2a body=199 status=ok
// SIG undefined FUN_147052d2a(void)

void FUN_147052d2a(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = &local_30;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,plVar3);
  *param_3 = uVar2;
  if (local_30 != 0) {
    piVar1 = (int *)(local_30 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147052dfc FUN_147052dfc body=199 status=ok
// SIG undefined FUN_147052dfc(void)

void FUN_147052dfc(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = &local_30;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,plVar3);
  *param_3 = uVar2;
  if (local_30 != 0) {
    piVar1 = (int *)(local_30 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147052ed4 FUN_147052ed4 body=33 status=ok
// SIG undefined FUN_147052ed4(void)

undefined8 FUN_147052ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_147052ef6(param_3);
  FUN_144a5dc74(param_2);
  return param_2;
}



// FUNCTION 147052ef6 FUN_147052ef6 body=272 status=ok
// SIG undefined FUN_147052ef6(void)

void FUN_147052ef6(longlong *param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined1 local_48 [8];
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
  if (*(uint *)(plVar1 + 1) < 0x1000000) {
    if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000147052f3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
  FUN_147059e2a(local_48);
  FUN_1400021e4(local_48,&local_40);
  local_58 = &DAT_149dfb77a;
  if (local_38 != 0) {
    local_58 = local_40;
  }
  puVar2 = &DAT_14c99f64c;
  if (*param_1 != 0) {
    puVar2 = (undefined4 *)(*param_1 + 8);
  }
  FUN_140002266(&local_30,L"Element handle data type is \'%d\', but \'%d\' (%s) was requested!",
                *(undefined1 *)((longlong)puVar2 + 3),0);
  puVar3 = &DAT_149dfb77a;
  if (local_28 != 0) {
    puVar3 = local_30;
  }
  FUN_1415b7ec4(puVar3,2,0);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
}



// FUNCTION 147053024 FUN_147053024 body=38 status=ok
// SIG undefined FUN_147053024(void)

undefined8 FUN_147053024(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  FUN_147052ef6(param_2);
  if ((longlong *)*param_3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_3 + 0x10))();
  }
  return 0;
}



// FUNCTION 14705304a FUN_14705304a body=25 status=ok
// SIG undefined FUN_14705304a(void)

undefined8 FUN_14705304a(undefined8 param_1,undefined8 param_2)

{
  FUN_144a5dc74(param_2);
  return param_2;
}



// FUNCTION 147053064 FUN_147053064 body=25 status=ok
// SIG undefined FUN_147053064(void)

undefined8 FUN_147053064(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  if ((longlong *)*param_3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_3 + 0x10))();
  }
  return 0;
}



// FUNCTION 14705307e FUN_14705307e body=19 status=ok
// SIG undefined FUN_14705307e(void)

undefined8 FUN_14705307e(undefined8 param_1,undefined8 param_2)

{
  FUN_147052ef6(param_2);
  return 0;
}



// FUNCTION 147053092 FUN_147053092 body=19 status=ok
// SIG undefined FUN_147053092(void)

undefined8 FUN_147053092(undefined8 param_1,undefined8 param_2)

{
  FUN_147052ef6(param_2);
  return 0;
}



// FUNCTION 1470530a6 FUN_1470530a6 body=126 status=ok
// SIG undefined FUN_1470530a6(void)

void FUN_1470530a6(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_28,L"Test_PingPongPrePhys",1);
  local_20 = FUN_146297cfa();
  local_38 = &local_20;
  local_30 = 1;
  DAT_14c75f5c8 = (**(code **)(*param_2 + 0x10))(param_2,&local_38,local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147053126 FUN_147053126 body=2376 status=ok
// SIG undefined FUN_147053126(void)

void FUN_147053126(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined ***pppuVar16;
  undefined1 auStack_b78 [40];
  undefined8 local_b50;
  undefined8 local_b48;
  undefined8 local_b40;
  undefined8 local_b38;
  undefined8 local_b30;
  undefined8 local_b28;
  undefined1 local_b20 [4];
  undefined8 local_b1c;
  undefined8 local_b14;
  undefined8 uStack_b0c;
  undefined8 local_b04;
  undefined1 local_afc;
  undefined1 local_af8 [16];
  undefined8 local_ae8;
  undefined8 local_ae0;
  undefined8 local_ac8;
  undefined8 local_ac0;
  code *local_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined4 local_a58;
  undefined8 local_a08;
  undefined8 local_a00;
  undefined8 local_9f0;
  undefined8 local_9e8;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined **local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined4 local_164;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_f8;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined ***local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined **local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b78;
  (**(code **)(*param_2 + 0x130))(param_2,&local_b28,0);
  local_b20[0] = 0;
  local_b1c = local_b28;
  local_b14 = 0;
  uStack_b0c = 0;
  local_b04 = 0;
  local_afc = 1;
  FUN_1446f470e(&local_b30,L"PingPong PrePhysics->DurPhysics",1);
  local_ae8 = 0;
  local_ae0 = 0x200000000;
  local_ac8 = 0;
  local_ac0 = 0x200000000;
  local_ab8 = (code *)0x0;
  local_aa8 = (undefined ***)0x0;
  local_a78 = 0;
  uStack_a70 = 0;
  local_a68 = 0;
  uStack_a60 = 0;
  local_a58 = 0xff0300;
  local_a08 = 0;
  local_a00 = 0x800000000;
  local_9f0 = 0;
  local_9e8 = 0x800000000;
  local_420 = 0;
  local_418 = 0x800000000;
  local_400 = 0;
  local_3f8 = 0x800000000;
  local_3b0 = 0;
  local_3a8 = 0x800000000;
  local_320 = 0;
  local_318 = 0x800000000;
  local_308 = 0;
  local_300 = 0x800000000;
  local_2d8 = 0;
  local_2d0 = 0x800000000;
  local_2b8 = 0;
  local_2b0 = 0x800000000;
  local_228 = 0;
  local_220 = 0x800000000;
  local_1f8 = 0;
  local_1f0 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_1ec = 2;
  local_1e0 = 0;
  local_1d8 = 0x200000000;
  local_1c0 = 0;
  local_1b8 = 0x200000000;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_178 = 0;
  local_170 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_16c = 0xffffffff00000080;
  local_164 = 0;
  local_158 = 0;
  local_150 = 0;
  local_128 = 0;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  local_1a0 = &PTR_FUN_14a14f6a0;
  local_f8 = 1;
  uVar15 = FUN_146297cfa();
  FUN_147051702(local_af8,uVar15);
  FUN_147059edd(local_af8,local_b20);
  local_d8 = local_aa8;
  local_e8 = local_ab8;
  local_a78 = local_b30;
  local_78 = (undefined4)local_a88;
  uStack_74 = local_a88._4_4_;
  uStack_70 = (undefined4)uStack_a80;
  uStack_6c = uStack_a80._4_4_;
  local_88 = (undefined4)local_a98;
  uStack_84 = local_a98._4_4_;
  uStack_80 = (undefined4)uStack_a90;
  uStack_7c = uStack_a90._4_4_;
  local_98 = (undefined4)local_aa8;
  uStack_94 = local_aa8._4_4_;
  uStack_90 = (undefined4)uStack_aa0;
  uStack_8c = uStack_aa0._4_4_;
  local_a8 = local_ab8;
  uStack_a0 = (undefined4)uStack_ab0;
  uStack_9c = uStack_ab0._4_4_;
  uVar11 = local_b8;
  uVar12 = uStack_b4;
  uVar13 = uStack_b0;
  uVar14 = uStack_ac;
  local_ab8 = FUN_142af9e3e;
  uVar5 = uStack_e0;
  uVar6 = uStack_dc;
  uVar7 = uStack_d0;
  uVar8 = uStack_cc;
  local_aa8 = (undefined ***)0x0;
  uVar9 = uStack_c0;
  uVar10 = uStack_bc;
  local_a98 = &PTR_LAB_14a14fac0;
  uStack_c0 = (undefined4)uStack_a90;
  uStack_bc = uStack_a90._4_4_;
  uStack_e0 = (undefined4)uStack_ab0;
  uStack_dc = uStack_ab0._4_4_;
  local_b8 = (undefined4)local_a88;
  uStack_b4 = local_a88._4_4_;
  uStack_b0 = (undefined4)uStack_a80;
  uStack_ac = uStack_a80._4_4_;
  uStack_d0 = (undefined4)uStack_aa0;
  uStack_cc = uStack_aa0._4_4_;
  uStack_ab0._0_4_ = uVar5;
  uStack_ab0._4_4_ = uVar6;
  uStack_aa0._0_4_ = uVar7;
  uStack_aa0._4_4_ = uVar8;
  uStack_a90._0_4_ = uVar9;
  uStack_a90._4_4_ = uVar10;
  local_a88._0_4_ = uVar11;
  local_a88._4_4_ = uVar12;
  uStack_a80._0_4_ = uVar13;
  uStack_a80._4_4_ = uVar14;
  if (local_e8 != (undefined1 *)0x0) {
    pppuVar16 = local_d8;
    if (local_d8 == (undefined ***)0x0) {
      pppuVar16 = &local_c8;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  local_a8 = local_af8;
  uVar15 = FUN_1470514de(&local_a8);
  (**(code **)(*param_2 + 0x118))(param_2,uVar15);
  FUN_147056720(local_af8);
  (**(code **)(*param_2 + 0x130))(param_2,&local_b38,0);
  local_b20[0] = 1;
  local_b1c = local_b38;
  local_b14 = 0;
  uStack_b0c = 0;
  local_b04 = 0;
  local_afc = 1;
  FUN_1446f470e(&local_b40,L"PingPong DurPhysics->PostPhysics",1);
  local_ae8 = 0;
  local_ae0 = 0x200000000;
  local_ac8 = 0;
  local_ac0 = 0x200000000;
  local_ab8 = (code *)0x0;
  local_aa8 = (undefined ***)0x0;
  local_a78 = 0;
  uStack_a70 = 0;
  local_a68 = 0;
  uStack_a60 = 0;
  local_a58 = 0xff0300;
  local_a08 = 0;
  local_a00 = 0x800000000;
  local_9f0 = 0;
  local_9e8 = 0x800000000;
  local_420 = 0;
  local_418 = 0x800000000;
  local_400 = 0;
  local_3f8 = 0x800000000;
  local_3b0 = 0;
  local_3a8 = 0x800000000;
  local_320 = 0;
  local_318 = 0x800000000;
  local_308 = 0;
  local_300 = 0x800000000;
  local_2d8 = 0;
  local_2d0 = 0x800000000;
  local_2b8 = 0;
  local_2b0 = 0x800000000;
  local_228 = 0;
  local_220 = 0x800000000;
  local_1f8 = 0;
  local_1f0 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_1ec = 2;
  local_1e0 = 0;
  local_1d8 = 0x200000000;
  local_1c0 = 0;
  local_1b8 = 0x200000000;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_178 = 0;
  local_170 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_16c = 0xffffffff00000080;
  local_164 = 0;
  local_158 = 0;
  local_150 = 0;
  local_128 = 0;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  local_1a0 = &PTR_FUN_14a14f6a0;
  local_f8 = 1;
  uVar15 = FUN_146297d8c();
  FUN_147051702(local_af8,uVar15);
  FUN_147059edd(local_af8,local_b20);
  local_c8 = local_a98;
  local_d8 = local_aa8;
  local_e8 = local_ab8;
  local_a78 = local_b40;
  local_78 = (undefined4)local_a88;
  uStack_74 = local_a88._4_4_;
  uStack_70 = (undefined4)uStack_a80;
  uStack_6c = uStack_a80._4_4_;
  local_88 = (undefined4)local_a98;
  uStack_84 = local_a98._4_4_;
  uStack_80 = (undefined4)uStack_a90;
  uStack_7c = uStack_a90._4_4_;
  local_98 = (undefined4)local_aa8;
  uStack_94 = local_aa8._4_4_;
  uStack_90 = (undefined4)uStack_aa0;
  uStack_8c = uStack_aa0._4_4_;
  local_a8 = local_ab8;
  uStack_a0 = (undefined4)uStack_ab0;
  uStack_9c = uStack_ab0._4_4_;
  uVar11 = local_b8;
  uVar12 = uStack_b4;
  uVar13 = uStack_b0;
  uVar14 = uStack_ac;
  local_ab8 = FUN_142af9fba;
  uVar5 = uStack_e0;
  uVar6 = uStack_dc;
  uVar7 = uStack_d0;
  uVar8 = uStack_cc;
  local_aa8 = (undefined ***)0x0;
  uVar9 = uStack_c0;
  uVar10 = uStack_bc;
  local_a98 = &PTR_LAB_14a14fae0;
  uStack_c0 = (undefined4)uStack_a90;
  uStack_bc = uStack_a90._4_4_;
  uStack_e0 = (undefined4)uStack_ab0;
  uStack_dc = uStack_ab0._4_4_;
  local_b8 = (undefined4)local_a88;
  uStack_b4 = local_a88._4_4_;
  uStack_b0 = (undefined4)uStack_a80;
  uStack_ac = uStack_a80._4_4_;
  uStack_d0 = (undefined4)uStack_aa0;
  uStack_cc = uStack_aa0._4_4_;
  uStack_ab0._0_4_ = uVar5;
  uStack_ab0._4_4_ = uVar6;
  uStack_aa0._0_4_ = uVar7;
  uStack_aa0._4_4_ = uVar8;
  uStack_a90._0_4_ = uVar9;
  uStack_a90._4_4_ = uVar10;
  local_a88._0_4_ = uVar11;
  local_a88._4_4_ = uVar12;
  uStack_a80._0_4_ = uVar13;
  uStack_a80._4_4_ = uVar14;
  if (local_e8 != (undefined1 *)0x0) {
    pppuVar16 = local_d8;
    if (local_d8 == (undefined ***)0x0) {
      pppuVar16 = &local_c8;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  local_a8 = local_af8;
  uVar15 = FUN_1470514de(&local_a8);
  (**(code **)(*param_2 + 0x118))(param_2,uVar15);
  FUN_147056720(local_af8);
  (**(code **)(*param_2 + 0x130))(param_2,&local_b48,0);
  local_b20[0] = 2;
  local_b1c = local_b48;
  local_b14 = 0;
  uStack_b0c = 0;
  local_b04 = 0;
  local_afc = 1;
  FUN_1446f470e(&local_b50,L"PingPong PostPhysics->PrePhysics",1);
  local_ae8 = 0;
  local_ae0 = 0x200000000;
  local_ac8 = 0;
  local_ac0 = 0x200000000;
  local_ab8 = (code *)0x0;
  local_aa8 = (undefined ***)0x0;
  local_a78 = 0;
  uStack_a70 = 0;
  local_a68 = 0;
  uStack_a60 = 0;
  local_a58 = 0xff0300;
  local_a08 = 0;
  local_a00 = 0x800000000;
  local_9f0 = 0;
  local_9e8 = 0x800000000;
  local_420 = 0;
  local_418 = 0x800000000;
  local_400 = 0;
  local_3f8 = 0x800000000;
  local_3b0 = 0;
  local_3a8 = 0x800000000;
  local_320 = 0;
  local_318 = 0x800000000;
  local_308 = 0;
  local_300 = 0x800000000;
  local_2d8 = 0;
  local_2d0 = 0x800000000;
  local_2b8 = 0;
  local_2b0 = 0x800000000;
  local_228 = 0;
  local_220 = 0x800000000;
  local_1f8 = 0;
  local_1f0 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_1ec = 2;
  local_1e0 = 0;
  local_1d8 = 0x200000000;
  local_1c0 = 0;
  local_1b8 = 0x200000000;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_178 = 0;
  local_170 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_16c = 0xffffffff00000080;
  local_164 = 0;
  local_158 = 0;
  local_150 = 0;
  local_128 = 0;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  local_1a0 = &PTR_FUN_14a14f6a0;
  local_f8 = 1;
  uVar15 = FUN_146297e1e();
  FUN_147051702(local_af8,uVar15);
  FUN_147059edd(local_af8,local_b20);
  local_c8 = local_a98;
  local_d8 = local_aa8;
  local_e8 = local_ab8;
  local_a78 = local_b50;
  local_78 = (undefined4)local_a88;
  uStack_74 = local_a88._4_4_;
  uStack_70 = (undefined4)uStack_a80;
  uStack_6c = uStack_a80._4_4_;
  local_88 = (undefined4)local_a98;
  uStack_84 = local_a98._4_4_;
  uStack_80 = (undefined4)uStack_a90;
  uStack_7c = uStack_a90._4_4_;
  local_98 = (undefined4)local_aa8;
  uStack_94 = local_aa8._4_4_;
  uStack_90 = (undefined4)uStack_aa0;
  uStack_8c = uStack_aa0._4_4_;
  local_a8 = local_ab8;
  uStack_a0 = (undefined4)uStack_ab0;
  uStack_9c = uStack_ab0._4_4_;
  uVar3 = CONCAT44(uStack_b4,local_b8);
  uVar4 = CONCAT44(uStack_ac,uStack_b0);
  local_ab8 = FUN_142afa136;
  uVar15 = CONCAT44(uStack_dc,uStack_e0);
  uVar1 = CONCAT44(uStack_cc,uStack_d0);
  local_aa8 = (undefined ***)0x0;
  uVar2 = CONCAT44(uStack_bc,uStack_c0);
  local_a98 = &PTR_LAB_14a14fb00;
  uStack_c0 = (undefined4)uStack_a90;
  uStack_bc = uStack_a90._4_4_;
  uStack_e0 = (undefined4)uStack_ab0;
  uStack_dc = uStack_ab0._4_4_;
  local_b8 = (undefined4)local_a88;
  uStack_b4 = local_a88._4_4_;
  uStack_b0 = (undefined4)uStack_a80;
  uStack_ac = uStack_a80._4_4_;
  uStack_d0 = (undefined4)uStack_aa0;
  uStack_cc = uStack_aa0._4_4_;
  uStack_ab0 = uVar15;
  uStack_aa0 = uVar1;
  uStack_a90 = uVar2;
  local_a88 = uVar3;
  uStack_a80 = uVar4;
  if (local_e8 != (undefined1 *)0x0) {
    pppuVar16 = &local_c8;
    if (local_d8 != (undefined ***)0x0) {
      pppuVar16 = local_d8;
    }
    (*(code *)(*pppuVar16)[2])(pppuVar16);
  }
  local_a8 = local_af8;
  uVar15 = FUN_1470514de();
  (**(code **)(*param_2 + 0x118))(param_2,uVar15);
  FUN_147056720(local_af8);
  if ((local_60 ^ (ulonglong)auStack_b78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147053a70 FUN_147053a70 body=38 status=ok
// SIG undefined FUN_147053a70(void)

undefined8 FUN_147053a70(undefined8 param_1,int param_2)

{
  FUN_14171f70c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147053a96 FUN_147053a96 body=38 status=ok
// SIG undefined FUN_147053a96(void)

undefined8 FUN_147053a96(undefined8 param_1,int param_2)

{
  FUN_1470568f0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147053abc FUN_147053abc body=45 status=ok
// SIG undefined FUN_147053abc(void)

longlong FUN_147053abc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147053af0 FUN_147053af0 body=25 status=ok
// SIG undefined FUN_147053af0(void)

undefined8 FUN_147053af0(undefined8 param_1,undefined8 param_2)

{
  FUN_144a5dc74(param_2);
  return param_2;
}



// FUNCTION 147053b0a FUN_147053b0a body=25 status=ok
// SIG undefined FUN_147053b0a(void)

undefined8 FUN_147053b0a(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  if ((longlong *)*param_3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_3 + 0x10))();
  }
  return 0;
}



// FUNCTION 147053b24 FUN_147053b24 body=45 status=ok
// SIG undefined FUN_147053b24(void)

longlong FUN_147053b24(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147053b58 FUN_147053b58 body=45 status=ok
// SIG undefined FUN_147053b58(void)

longlong FUN_147053b58(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147053b90 FUN_147053b90 body=45 status=ok
// SIG undefined FUN_147053b90(void)

longlong FUN_147053b90(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147053c10 FUN_147053c10 body=59 status=ok
// SIG undefined FUN_147053c10(void)

undefined8 FUN_147053c10(longlong *param_1)

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



// FUNCTION 147053cfa FUN_147053cfa body=59 status=ok
// SIG undefined FUN_147053cfa(void)

undefined8 FUN_147053cfa(longlong *param_1)

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



// FUNCTION 147053de4 FUN_147053de4 body=59 status=ok
// SIG undefined FUN_147053de4(void)

undefined8 FUN_147053de4(longlong *param_1)

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



// FUNCTION 147053ece FUN_147053ece body=59 status=ok
// SIG undefined FUN_147053ece(void)

undefined8 FUN_147053ece(longlong *param_1)

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



// FUNCTION 147053fb8 FUN_147053fb8 body=59 status=ok
// SIG undefined FUN_147053fb8(void)

undefined8 FUN_147053fb8(longlong *param_1)

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



// FUNCTION 1470540a2 FUN_1470540a2 body=59 status=ok
// SIG undefined FUN_1470540a2(void)

undefined8 FUN_1470540a2(longlong *param_1)

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



// FUNCTION 14705418c FUN_14705418c body=59 status=ok
// SIG undefined FUN_14705418c(void)

undefined8 FUN_14705418c(longlong *param_1)

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



// FUNCTION 14705429a FUN_14705429a body=59 status=ok
// SIG undefined FUN_14705429a(void)

undefined8 FUN_14705429a(longlong *param_1)

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



// FUNCTION 147054370 FUN_147054370 body=54 status=ok
// SIG undefined FUN_147054370(void)

undefined1 FUN_147054370(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1470543ce FUN_1470543ce body=59 status=ok
// SIG undefined FUN_1470543ce(void)

undefined8 FUN_1470543ce(longlong *param_1)

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



// FUNCTION 147054414 FUN_147054414 body=37 status=ok
// SIG undefined FUN_147054414(void)

void FUN_147054414(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1470544d2 FUN_1470544d2 body=59 status=ok
// SIG undefined FUN_1470544d2(void)

undefined8 FUN_1470544d2(longlong *param_1)

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



// FUNCTION 1470545bc FUN_1470545bc body=59 status=ok
// SIG undefined FUN_1470545bc(void)

undefined8 FUN_1470545bc(longlong *param_1)

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



// FUNCTION 1470546a6 FUN_1470546a6 body=59 status=ok
// SIG undefined FUN_1470546a6(void)

undefined8 FUN_1470546a6(longlong *param_1)

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



// FUNCTION 147054790 FUN_147054790 body=59 status=ok
// SIG undefined FUN_147054790(void)

undefined8 FUN_147054790(longlong *param_1)

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



// FUNCTION 1470548a2 FUN_1470548a2 body=59 status=ok
// SIG undefined FUN_1470548a2(void)

undefined8 FUN_1470548a2(longlong *param_1)

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



// FUNCTION 14705498c FUN_14705498c body=59 status=ok
// SIG undefined FUN_14705498c(void)

undefined8 FUN_14705498c(longlong *param_1)

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



// FUNCTION 147054a76 FUN_147054a76 body=59 status=ok
// SIG undefined FUN_147054a76(void)

undefined8 FUN_147054a76(longlong *param_1)

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



// FUNCTION 147054b60 FUN_147054b60 body=59 status=ok
// SIG undefined FUN_147054b60(void)

undefined8 FUN_147054b60(longlong *param_1)

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



// FUNCTION 147054c38 FUN_147054c38 body=39 status=ok
// SIG undefined FUN_147054c38(void)

undefined8 FUN_147054c38(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147054c88 FUN_147054c88 body=59 status=ok
// SIG undefined FUN_147054c88(void)

undefined8 FUN_147054c88(longlong *param_1)

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



// FUNCTION 147054d96 FUN_147054d96 body=59 status=ok
// SIG undefined FUN_147054d96(void)

undefined8 FUN_147054d96(longlong *param_1)

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



// FUNCTION 147054ea4 FUN_147054ea4 body=59 status=ok
// SIG undefined FUN_147054ea4(void)

undefined8 FUN_147054ea4(longlong *param_1)

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



// FUNCTION 147054f8e FUN_147054f8e body=59 status=ok
// SIG undefined FUN_147054f8e(void)

undefined8 FUN_147054f8e(longlong *param_1)

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



// FUNCTION 14705507e FUN_14705507e body=59 status=ok
// SIG undefined FUN_14705507e(void)

undefined8 FUN_14705507e(longlong *param_1)

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



// FUNCTION 14705516e FUN_14705516e body=59 status=ok
// SIG undefined FUN_14705516e(void)

undefined8 FUN_14705516e(longlong *param_1)

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



// FUNCTION 14705525e FUN_14705525e body=59 status=ok
// SIG undefined FUN_14705525e(void)

undefined8 FUN_14705525e(longlong *param_1)

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



// FUNCTION 14705534e FUN_14705534e body=59 status=ok
// SIG undefined FUN_14705534e(void)

undefined8 FUN_14705534e(longlong *param_1)

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



// FUNCTION 14705543e FUN_14705543e body=59 status=ok
// SIG undefined FUN_14705543e(void)

undefined8 FUN_14705543e(longlong *param_1)

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



// FUNCTION 147055544 FUN_147055544 body=59 status=ok
// SIG undefined FUN_147055544(void)

undefined8 FUN_147055544(longlong *param_1)

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



// FUNCTION 147055652 FUN_147055652 body=59 status=ok
// SIG undefined FUN_147055652(void)

undefined8 FUN_147055652(longlong *param_1)

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



// FUNCTION 1470556f4 FUN_1470556f4 body=104 status=ok
// SIG undefined FUN_1470556f4(void)

void FUN_1470556f4(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x20;
    if (0x20 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_14705575c(param_1,0,iVar3,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x10c) = param_3;
  return;
}



// FUNCTION 14705575c FUN_14705575c body=142 status=ok
// SIG undefined FUN_14705575c(void)

void FUN_14705575c(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,param_4);
  return;
}



// FUNCTION 1470557ea FUN_1470557ea body=419 status=ok
// SIG undefined FUN_1470557ea(void)

void FUN_1470557ea(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  
  if (*param_4 != 0) {
    LOCK();
    piVar1 = (int *)(*param_4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  *param_4 = 0;
  param_4[1] = 0;
  if (*param_2 != 0) {
    uVar13 = *(uint *)(*param_2 + 8);
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x28));
    if (uVar13 < 0x1000000) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x30 + (ulonglong)((uVar13 >> 0x18) - 1) * 8);
    }
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x28));
    lVar14 = *param_3;
    uVar13 = 0;
    if ((((lVar14 == 0) || (lVar5 = FUN_144a8d392(), lVar5 == 0)) ||
        (*(int *)(lVar14 + 0x38) < *(int *)(lVar5 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) {
      lVar14 = 0;
    }
    else {
      lVar14 = *param_3;
    }
    uVar3 = *(uint *)(lVar8 + 0x20);
    lVar8 = *(longlong *)(lVar8 + 0x18);
    iVar10 = (int)((ulonglong)*(undefined8 *)(lVar14 + 0x18) >> 0x20);
    iVar9 = (int)*(undefined8 *)(lVar14 + 0x18);
    if (0 < (int)uVar3) {
      uVar13 = 0;
      uVar12 = uVar3;
      do {
        uVar2 = (uVar12 >> 1) + uVar13;
        lVar14 = (ulonglong)uVar2 * 0x10;
        iVar11 = *(int *)(lVar8 + lVar14) - iVar9;
        if (iVar11 == 0) {
          iVar11 = *(int *)(lVar8 + 4 + lVar14) - iVar10;
        }
        if (iVar11 < 0) {
          uVar13 = uVar2 + (uVar12 & 1);
        }
        bVar4 = 1 < uVar12;
        uVar12 = uVar12 >> 1;
      } while (bVar4);
    }
    if ((int)uVar13 < (int)uVar3) {
      lVar14 = (ulonglong)uVar13 * 0x10;
      iVar9 = iVar9 - *(int *)(lVar8 + lVar14);
      if (iVar9 == 0) {
        iVar9 = iVar10 - *(int *)(lVar8 + 4 + lVar14);
      }
      if ((-1 < iVar9) && (plVar6 = (longlong *)(lVar8 + lVar14 + 8), plVar6 != (longlong *)0x0)) {
        lVar8 = *plVar6;
        if ((DAT_14c950c29 == '\x01') && (lVar8 != 0)) {
          FUN_14689c22e(lVar8);
        }
        else if (lVar8 == 0) {
          return;
        }
        lVar14 = *param_2;
        lVar5 = *param_3;
        if (((lVar5 == 0) || (lVar7 = FUN_144a8d392(), lVar7 == 0)) ||
           ((*(int *)(lVar5 + 0x38) < *(int *)(lVar7 + 0x38) ||
            (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
             lVar7 + 0x30)))) {
          lVar5 = 0;
        }
        else {
          lVar5 = *param_3;
        }
        lVar8 = FUN_144718840(lVar8,lVar5);
        *param_4 = lVar14;
        if (lVar14 != 0) {
          LOCK();
          *(int *)(lVar14 + 0xc) = *(int *)(lVar14 + 0xc) + 1;
          UNLOCK();
        }
        param_4[1] = lVar8;
      }
    }
  }
  return;
}



// FUNCTION 14705598e FUN_14705598e body=132 status=ok
// SIG undefined FUN_14705598e(void)

void FUN_14705598e(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x10) == param_2) {
          FUN_147055a12(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_1 + 8);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147055a12 FUN_147055a12 body=90 status=ok
// SIG undefined FUN_147055a12(void)

void FUN_147055a12(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_147055a6c();
  return;
}



// FUNCTION 147055a6c FUN_147055a6c body=114 status=ok
// SIG undefined FUN_147055a6c(void)

void FUN_147055a6c(longlong *param_1,int param_2)

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



// FUNCTION 147055ade FUN_147055ade body=52 status=ok
// SIG undefined FUN_147055ade(void)

void FUN_147055ade(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 8);
    do {
      puVar1 = (undefined8 *)*plVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar2 = plVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147055b12 FUN_147055b12 body=312 status=ok
// SIG undefined FUN_147055b12(void)

undefined4 * FUN_147055b12(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147055c4c(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_147055d32(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
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
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_147055dae(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147055c4c FUN_147055c4c body=229 status=ok
// SIG undefined FUN_147055c4c(void)

int * FUN_147055c4c(longlong *param_1,int *param_2)

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



// FUNCTION 147055d32 FUN_147055d32 body=124 status=ok
// SIG undefined FUN_147055d32(void)

undefined8 FUN_147055d32(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
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
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_147055a6c(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147055dae FUN_147055dae body=477 status=ok
// SIG undefined FUN_147055dae(void)

void FUN_147055dae(longlong *param_1)

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



// FUNCTION 147055f8c FUN_147055f8c body=132 status=ok
// SIG undefined FUN_147055f8c(void)

void FUN_147055f8c(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x10) == param_2) {
          FUN_147056010(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_1 + 8);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147056010 FUN_147056010 body=90 status=ok
// SIG undefined FUN_147056010(void)

void FUN_147056010(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_14705606a();
  return;
}



// FUNCTION 14705606a FUN_14705606a body=114 status=ok
// SIG undefined FUN_14705606a(void)

void FUN_14705606a(longlong *param_1,int param_2)

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



// FUNCTION 1470560dc FUN_1470560dc body=312 status=ok
// SIG undefined FUN_1470560dc(void)

undefined4 * FUN_1470560dc(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147056216(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_1470562fc(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
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
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_147056378(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147056216 FUN_147056216 body=229 status=ok
// SIG undefined FUN_147056216(void)

int * FUN_147056216(longlong *param_1,int *param_2)

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



// FUNCTION 1470562fc FUN_1470562fc body=124 status=ok
// SIG undefined FUN_1470562fc(void)

undefined8 FUN_1470562fc(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
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
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_14705606a(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147056378 FUN_147056378 body=477 status=ok
// SIG undefined FUN_147056378(void)

void FUN_147056378(longlong *param_1)

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



// FUNCTION 147056556 FUN_147056556 body=38 status=ok
// SIG undefined FUN_147056556(void)

undefined8 FUN_147056556(undefined8 param_1,int param_2)

{
  FUN_1470568f0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14705657c FUN_14705657c body=52 status=ok
// SIG undefined FUN_14705657c(void)

void FUN_14705657c(longlong *param_1)

{
  FUN_1470565b0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1470565b0 FUN_1470565b0 body=325 status=ok
// SIG undefined FUN_1470565b0(void)

void FUN_1470565b0(longlong *param_1)

{
  longlong *plVar1;
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
      (*(code *)(&PTR_caseD_3_14a14f610)[*(byte *)(*local_70 + (longlong)iStack_54 * 0x28 + 0x18)])
                ();
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



// FUNCTION 1470566fa FUN_1470566fa body=38 status=ok
// SIG undefined FUN_1470566fa(void)

undefined8 FUN_1470566fa(undefined8 param_1,int param_2)

{
  FUN_1470568f0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147056720 FUN_147056720 body=283 status=ok
// SIG undefined FUN_147056720(void)

void FUN_147056720(longlong param_1)

{
  FUN_1470568f0(param_1 + 0x958);
  if (*(longlong *)(param_1 + 0x948) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x938) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x918) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x900) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x8e0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x8d0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x840) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x820) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x7f0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x7d8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x748) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    FUN_1400020a8();
  }
  FUN_14705683c(param_1 + 0x118);
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  FUN_14705687a(param_1);
  return;
}



// FUNCTION 14705683c FUN_14705683c body=62 status=ok
// SIG undefined FUN_14705683c(void)

void FUN_14705683c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x5c0);
  if (*(longlong *)(param_1 + 0x5c0) == 0) {
    lVar1 = param_1;
  }
  FUN_1470568c6(lVar1,*(undefined4 *)(param_1 + 0x5c8));
  if (*(longlong *)(param_1 + 0x5c0) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14705687a FUN_14705687a body=76 status=ok
// SIG undefined FUN_14705687a(void)

void FUN_14705687a(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    plVar1 = (longlong *)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x50);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1470568c6 FUN_1470568c6 body=41 status=ok
// SIG undefined FUN_1470568c6(void)

void FUN_1470568c6(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1470568f0(param_1);
    param_1 = param_1 + 0xb8;
  }
  return;
}



// FUNCTION 1470568f0 FUN_1470568f0 body=97 status=ok
// SIG undefined FUN_1470568f0(void)

void FUN_1470568f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a14f5f0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_14705657c(param_1 + 0xb);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_14705657c(param_1 + 1);
  return;
}



// FUNCTION 147056952 FUN_147056952 body=125 status=ok
// SIG undefined FUN_147056952(void)

void FUN_147056952(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x20;
    if (0x20 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x10c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x10c) = (int)uVar4;
    FUN_14705575c(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1470569d0 FUN_1470569d0 body=253 status=ok
// SIG undefined FUN_1470569d0(void)

undefined8 * FUN_1470569d0(longlong *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar9 = *param_1;
  if ((int)uVar2 < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    uVar4 = uVar2;
    do {
      uVar1 = (uVar4 >> 1) + uVar5;
      lVar6 = (ulonglong)uVar1 * 0x10;
      iVar7 = *(int *)(lVar9 + lVar6) - *param_2;
      if (iVar7 == 0) {
        iVar7 = *(int *)(lVar9 + 4 + lVar6) - param_2[1];
      }
      if (iVar7 < 0) {
        uVar5 = uVar1 + (uVar4 & 1);
      }
      bVar3 = 1 < uVar4;
      uVar4 = uVar4 >> 1;
    } while (bVar3);
    if ((int)uVar5 < (int)uVar2) {
      lVar6 = (ulonglong)uVar5 * 0x10;
      iVar7 = *param_2 - *(int *)(lVar9 + lVar6);
      if (iVar7 == 0) {
        iVar7 = param_2[1] - *(int *)(lVar9 + 4 + lVar6);
      }
      if (-1 < iVar7) {
        puVar8 = (undefined8 *)(lVar9 + lVar6);
        FUN_147055ade(puVar8,1);
        goto LAB_147056a9b;
      }
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_147056ace(param_1,uVar2);
    lVar9 = *param_1;
  }
  lVar6 = (ulonglong)uVar5 * 0x10;
  memmove((void *)(lVar9 + lVar6 + 0x10),(void *)(lVar9 + lVar6),(ulonglong)(uVar2 - uVar5) << 4);
  puVar8 = (undefined8 *)(lVar6 + *param_1);
LAB_147056a9b:
  *puVar8 = *(undefined8 *)param_2;
  puVar8[1] = 0;
  return puVar8 + 1;
}



// FUNCTION 147056ace FUN_147056ace body=132 status=ok
// SIG undefined FUN_147056ace(void)

void FUN_147056ace(longlong param_1,int param_2)

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



// FUNCTION 147056b53 FUN_147056b53 body=120 status=ok
// SIG undefined FUN_147056b53(void)

undefined8 * FUN_147056b53(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99f638) {
    FUN_144b3d300(&DAT_14c99f638);
    if (DAT_14c99f638 == -1) {
      FUN_1446f470e(&DAT_14c99f630,L"uint8",1);
      _Init_thread_footer(&DAT_14c99f638);
    }
  }
  *param_1 = DAT_14c99f630;
  return param_1;
}



// FUNCTION 147056bcc FUN_147056bcc body=73 status=ok
// SIG undefined FUN_147056bcc(void)

undefined8 * FUN_147056bcc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a14f730;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_147056e3c(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147056c76 FUN_147056c76 body=291 status=ok
// SIG undefined FUN_147056c76(void)

void FUN_147056c76(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x10);
  lVar2 = param_1 + 0x20;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x38) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar4 = *(int *)(param_1 + 0x38);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar4) || (uStack_50 != lVar2)) {
    do {
      local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)(*local_80 + 4 + (longlong)iStack_64 * 0x10)
                         );
      cVar3 = (*(code *)*param_2)(param_2[1],*local_80 + (longlong)iStack_64 * 0x10,&local_58);
      if (cVar3 == '\0') break;
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar2 || iStack_64 != iVar4));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147056d9a FUN_147056d9a body=26 status=ok
// SIG undefined FUN_147056d9a(void)

void FUN_147056d9a(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_147056eca(param_1 + 0x10,*param_2,param_2);
  *piVar1 = *piVar1 + 1;
  return;
}



// FUNCTION 147056e3c FUN_147056e3c body=52 status=ok
// SIG undefined FUN_147056e3c(void)

void FUN_147056e3c(longlong *param_1)

{
  FUN_147056e70();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147056e70 FUN_147056e70 body=89 status=ok
// SIG undefined FUN_147056e70(void)

void FUN_147056e70(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
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



// FUNCTION 147056eca FUN_147056eca body=181 status=ok
// SIG undefined FUN_147056eca(void)

longlong FUN_147056eca(longlong *param_1,uint param_2,char *param_3)

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
        lVar3 = *param_1 + (longlong)iVar1 * 0x10;
        if (*(char *)(*param_1 + (longlong)iVar1 * 0x10) == *param_3) {
          if (lVar3 != 0) goto LAB_147056f62;
          break;
        }
        iVar1 = *(int *)(lVar3 + 8);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_147056f80(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x10 + *param_1;
LAB_147056f62:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 4;
}



// FUNCTION 147056f80 FUN_147056f80 body=269 status=ok
// SIG undefined FUN_147056f80(void)

undefined4 * FUN_147056f80(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined1 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14705708e(param_1,local_48);
  *local_40 = *(undefined1 *)*param_4;
  *(undefined8 *)(local_40 + 4) = 0xffffffff00000000;
  cVar1 = FUN_147057174(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0xc) = param_3;
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 8) =
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
      FUN_147057266(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705708e FUN_14705708e body=229 status=ok
// SIG undefined FUN_14705708e(void)

int * FUN_14705708e(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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



// FUNCTION 147057174 FUN_147057174 body=127 status=ok
// SIG undefined FUN_147057174(void)

undefined8 FUN_147057174(longlong *param_1,uint param_2,char *param_3,int *param_4)

{
  undefined8 *puVar1;
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
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(char *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_1470571f4(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 1);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 1470571f4 FUN_1470571f4 body=114 status=ok
// SIG undefined FUN_1470571f4(void)

void FUN_1470571f4(longlong *param_1,int param_2)

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



// FUNCTION 147057266 FUN_147057266 body=413 status=ok
// SIG undefined FUN_147057266(void)

void FUN_147057266(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar2 + lVar6);
        *(uint *)(lVar2 + 0xc + lVar6) = uVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
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



// FUNCTION 147057456 FUN_147057456 body=90 status=ok
// SIG undefined FUN_147057456(void)

void FUN_147057456(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_1470571f4();
  return;
}



// FUNCTION 1470574b0 FUN_1470574b0 body=63 status=ok
// SIG undefined FUN_1470574b0(void)

void FUN_1470574b0(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_147056e70(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_147057266(param_1);
    return;
  }
  FUN_1470574f0(param_1);
  FUN_147056e70(param_1);
  return;
}



// FUNCTION 1470574f0 FUN_1470574f0 body=322 status=ok
// SIG undefined FUN_1470574f0(void)

void FUN_1470574f0(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 147057634 FUN_147057634 body=370 status=ok
// SIG undefined FUN_147057634(void)

void FUN_147057634(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  
  if (*param_4 != 0) {
    LOCK();
    piVar1 = (int *)(*param_4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  *param_4 = 0;
  param_4[1] = 0;
  if (*param_2 != 0) {
    uVar14 = *(uint *)(*param_2 + 8);
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x28));
    if (uVar14 < 0x1000000) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x30 + (ulonglong)((uVar14 >> 0x18) - 1) * 8);
    }
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x28));
    lVar11 = *param_3;
    uVar14 = 0;
    if ((((lVar11 == 0) || (lVar5 = FUN_144a8d392(), lVar5 == 0)) ||
        (*(int *)(lVar11 + 0x38) < *(int *)(lVar5 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) {
      lVar11 = 0;
    }
    else {
      lVar11 = *param_3;
    }
    uVar3 = *(uint *)(lVar8 + 0x20);
    lVar8 = *(longlong *)(lVar8 + 0x18);
    iVar10 = (int)((ulonglong)*(undefined8 *)(lVar11 + 0x18) >> 0x20);
    iVar9 = (int)*(undefined8 *)(lVar11 + 0x18);
    if (0 < (int)uVar3) {
      uVar14 = 0;
      uVar13 = uVar3;
      do {
        uVar2 = (uVar13 >> 1) + uVar14;
        lVar11 = (ulonglong)uVar2 * 0x10;
        iVar12 = *(int *)(lVar8 + lVar11) - iVar9;
        if (iVar12 == 0) {
          iVar12 = *(int *)(lVar8 + 4 + lVar11) - iVar10;
        }
        if (iVar12 < 0) {
          uVar14 = uVar2 + (uVar13 & 1);
        }
        bVar4 = 1 < uVar13;
        uVar13 = uVar13 >> 1;
      } while (bVar4);
    }
    if ((int)uVar14 < (int)uVar3) {
      lVar11 = (ulonglong)uVar14 * 0x10;
      iVar9 = iVar9 - *(int *)(lVar8 + lVar11);
      if (iVar9 == 0) {
        iVar9 = iVar10 - *(int *)(lVar8 + 4 + lVar11);
      }
      if ((-1 < iVar9) && (plVar6 = (longlong *)(lVar8 + lVar11 + 8), plVar6 != (longlong *)0x0)) {
        lVar8 = *plVar6;
        if ((DAT_14c950c29 == '\x01') && (lVar8 != 0)) {
          FUN_14689c22e(lVar8);
        }
        else if (lVar8 == 0) {
          return;
        }
        lVar11 = *param_2;
        uVar7 = FUN_1458f058c();
        lVar8 = FUN_144718840(lVar8,uVar7);
        *param_4 = lVar11;
        if (lVar11 != 0) {
          LOCK();
          *(int *)(lVar11 + 0xc) = *(int *)(lVar11 + 0xc) + 1;
          UNLOCK();
        }
        param_4[1] = lVar8;
      }
    }
    return;
  }
  return;
}



// FUNCTION 1470577a6 FUN_1470577a6 body=48 status=ok
// SIG undefined FUN_1470577a6(void)

void FUN_1470577a6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1470577d6 FUN_1470577d6 body=59 status=ok
// SIG undefined FUN_1470577d6(void)

void FUN_1470577d6(longlong param_1)

{
  if (param_1 != 0) {
    FUN_144760e21(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 147057811 FUN_147057811 body=38 status=ok
// SIG undefined FUN_147057811(void)

void FUN_147057811(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + lVar3 * 8);
      if (lVar2 != 0) {
        LOCK();
        piVar1 = (int *)(lVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      *(undefined8 *)(param_1 + lVar3 * 8) = 0;
      lVar3 = lVar3 + 1;
    } while (param_2 != (int)lVar3);
  }
  return;
}



// FUNCTION 14705784a FUN_14705784a body=96 status=ok
// SIG undefined FUN_14705784a(void)

void FUN_14705784a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1470578aa FUN_1470578aa body=132 status=ok
// SIG undefined FUN_1470578aa(void)

void FUN_1470578aa(longlong param_1,int param_2)

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



// FUNCTION 147057930 FUN_147057930 body=77 status=ok
// SIG undefined FUN_147057930(void)

undefined8 FUN_147057930(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1470578aa(param_1,iVar1);
  }
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 8) = 0;
  lVar3 = *param_2;
  if (lVar3 != 0) {
    *(longlong *)(lVar2 + (longlong)iVar1 * 8) = lVar3;
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



// FUNCTION 14705797e FUN_14705797e body=164 status=ok
// SIG undefined FUN_14705797e(void)

void FUN_14705797e(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1470579fe;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1470579fe:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 147057a22 FUN_147057a22 body=211 status=ok
// SIG undefined FUN_147057a22(void)

void FUN_147057a22(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar8 = false;
  do {
    lVar6 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar6) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar6), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4,param_5),
           cVar4 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar8) {
          return;
        }
        goto LAB_147057ac7;
      }
    }
    uVar5 = uVar7 - 1;
    bVar8 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_147057ac7:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 147057af6 FUN_147057af6 body=41 status=ok
// SIG undefined FUN_147057af6(void)

void FUN_147057af6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  FUN_14704f536(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 147057b20 FUN_147057b20 body=29 status=ok
// SIG undefined FUN_147057b20(void)

undefined8 FUN_147057b20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147057b3e FUN_147057b3e body=59 status=ok
// SIG undefined FUN_147057b3e(void)

void FUN_147057b3e(longlong param_1)

{
  if (param_1 != 0) {
    FUN_144760e21(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 147057b8c FUN_147057b8c body=16 status=ok
// SIG undefined FUN_147057b8c(void)

undefined1 FUN_147057b8c(void)

{
  FUN_147057b9c();
  return 1;
}



// FUNCTION 147057b9c FUN_147057b9c body=66 status=ok
// SIG undefined FUN_147057b9c(void)

void FUN_147057b9c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147057bde(param_1,iVar1);
  }
  lVar2 = *param_2;
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  return;
}



// FUNCTION 147057bde FUN_147057bde body=132 status=ok
// SIG undefined FUN_147057bde(void)

void FUN_147057bde(longlong param_1,int param_2)

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



// FUNCTION 147057c64 FUN_147057c64 body=164 status=ok
// SIG undefined FUN_147057c64(void)

void FUN_147057c64(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_147057ce4;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_147057ce4:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 147057d08 FUN_147057d08 body=211 status=ok
// SIG undefined FUN_147057d08(void)

void FUN_147057d08(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar8 = false;
  do {
    lVar6 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar6) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar6), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4,param_5),
           cVar4 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar8) {
          return;
        }
        goto LAB_147057dad;
      }
    }
    uVar5 = uVar7 - 1;
    bVar8 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_147057dad:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 147057ddc FUN_147057ddc body=41 status=ok
// SIG undefined FUN_147057ddc(void)

void FUN_147057ddc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  FUN_1470501c0(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 147057e06 FUN_147057e06 body=29 status=ok
// SIG undefined FUN_147057e06(void)

undefined8 FUN_147057e06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147057e24 FUN_147057e24 body=105 status=ok
// SIG undefined FUN_147057e24(void)

void FUN_147057e24(longlong *param_1,uint param_2)

{
  int *piVar1;
  longlong *_Dst;
  int iVar2;
  
  _Dst = (longlong *)(*param_1 + (longlong)(int)param_2 * 8);
  if (*_Dst != 0) {
    piVar1 = (int *)(*_Dst + 8);
    *piVar1 = *piVar1 + -1;
    if (*(int *)(*_Dst + 8) == 0) {
      if (*_Dst != 0) {
        FUN_1400020a8();
      }
      *_Dst = 0;
    }
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    memmove(_Dst,_Dst + 1,(longlong)(int)(~param_2 + iVar2) << 3);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 147057e8e FUN_147057e8e body=196 status=ok
// SIG undefined FUN_147057e8e(void)

void FUN_147057e8e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar7 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        lVar6 = (longlong)(int)uVar7;
        if (iVar3 < (int)uVar7) {
          iVar5 = *(int *)(lVar2 + lVar6 * 0x28);
          iVar1 = *(int *)(lVar2 + 4 + lVar6 * 0x28);
          uVar7 = (ulonglong)iVar1;
          if (uVar7 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar7 * 0x28) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x28) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar7 = (ulonglong)*(uint *)(lVar2 + 4 + lVar6 * 0x28);
        }
      } while ((int)uVar7 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar4) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144a6134a(param_1 + 2,iVar4,(int)param_1[5] - iVar4);
    iVar5 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) == iVar5) {
    return;
  }
  FUN_140549ad6(param_1,iVar5);
  return;
}



// FUNCTION 147057f52 FUN_147057f52 body=68 status=ok
// SIG undefined FUN_147057f52(void)

void FUN_147057f52(longlong param_1,uint param_2)

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
  FUN_147057f96(param_1);
  return;
}



// FUNCTION 147057f96 FUN_147057f96 body=455 status=ok
// SIG undefined FUN_147057f96(void)

void FUN_147057f96(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
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
  uVar4 = local_78;
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
    uVar4 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar5 = local_78._4_4_;
      local_78 = uVar4;
      do {
        lVar3 = *local_90;
        lVar10 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar10 * 0x28);
        iVar6 = FUN_144a788f7();
        uVar7 = (longlong)(iVar6 + (int)((ulonglong)uVar4 >> 0x20)) & (longlong)(int)param_1[9] - 1U
        ;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x24 + lVar10 * 0x28) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar10 * 0x28) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar5 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14705815e FUN_14705815e body=132 status=ok
// SIG undefined FUN_14705815e(void)

void FUN_14705815e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,8);
  return;
}



// FUNCTION 1470581e2 FUN_1470581e2 body=124 status=ok
// SIG undefined FUN_1470581e2(void)

void FUN_1470581e2(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,1);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,1);
  return;
}



// FUNCTION 14705825e FUN_14705825e body=95 status=ok
// SIG undefined FUN_14705825e(void)

void FUN_14705825e(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 2;
    if (2 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x1c)) {
    *(int *)(param_1 + 0x1c) = iVar3;
    FUN_14705815e(param_1,*(undefined4 *)(param_1 + 0x18));
    return;
  }
  return;
}



// FUNCTION 1470582be FUN_1470582be body=101 status=ok
// SIG undefined FUN_1470582be(void)

void FUN_1470582be(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
    if (2 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 3)) {
        uVar2 = uVar1 >> 3 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x1c)) {
    *(int *)(param_1 + 0x1c) = (int)uVar2;
    FUN_14029598c(param_1,*(undefined4 *)(param_1 + 0x18),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 147058324 FUN_147058324 body=87 status=ok
// SIG undefined FUN_147058324(void)

void FUN_147058324(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 2;
    if (2 < param_2) {
      iVar1 = FUN_144a3809e((longlong)(int)param_2,0);
      iVar2 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar2 = iVar1;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x14) = iVar2;
    FUN_1470581e2(param_1,*(undefined4 *)(param_1 + 0x10));
    return;
  }
  return;
}



// FUNCTION 14705837c FUN_14705837c body=108 status=ok
// SIG undefined FUN_14705837c(void)

void FUN_14705837c(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x1c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 * 2,0);
      iVar2 = (int)(uVar3 >> 1);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar5;
    FUN_1470583ea(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1470583ea FUN_1470583ea body=130 status=ok
// SIG undefined FUN_1470583ea(void)

void FUN_1470583ea(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,2);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 * 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,2);
  return;
}



// FUNCTION 14705846c FUN_14705846c body=110 status=ok
// SIG undefined FUN_14705846c(void)

void FUN_14705846c(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_1470584dc(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1470584dc FUN_1470584dc body=132 status=ok
// SIG undefined FUN_1470584dc(void)

void FUN_1470584dc(void *param_1,int param_2,undefined8 param_3)

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
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 147058560 FUN_147058560 body=93 status=ok
// SIG undefined FUN_147058560(void)

void FUN_147058560(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 * 2,0);
      iVar1 = (int)(uVar2 >> 1);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x1c)) {
    *(int *)(param_1 + 0x1c) = iVar3;
    FUN_1470583ea(param_1,*(undefined4 *)(param_1 + 0x18));
    return;
  }
  return;
}



// FUNCTION 1470585be FUN_1470585be body=95 status=ok
// SIG undefined FUN_1470585be(void)

void FUN_1470585be(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x4c)) {
    *(int *)(param_1 + 0x4c) = iVar3;
    FUN_1470584dc(param_1,*(undefined4 *)(param_1 + 0x48));
    return;
  }
  return;
}



// FUNCTION 14705861e FUN_14705861e body=95 status=ok
// SIG undefined FUN_14705861e(void)

void FUN_14705861e(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x4c)) {
    *(int *)(param_1 + 0x4c) = iVar3;
    FUN_14705867e(param_1,*(undefined4 *)(param_1 + 0x48));
    return;
  }
  return;
}



// FUNCTION 14705867e FUN_14705867e body=132 status=ok
// SIG undefined FUN_14705867e(void)

void FUN_14705867e(void *param_1,int param_2,undefined8 param_3)

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
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 147058702 FUN_147058702 body=87 status=ok
// SIG undefined FUN_147058702(void)

void FUN_147058702(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 8;
    if (8 < param_2) {
      iVar1 = FUN_144a3809e((longlong)(int)param_2,0);
      iVar2 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar2 = iVar1;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x14) = iVar2;
    FUN_14705875a(param_1,*(undefined4 *)(param_1 + 0x10));
    return;
  }
  return;
}



// FUNCTION 14705875a FUN_14705875a body=124 status=ok
// SIG undefined FUN_14705875a(void)

void FUN_14705875a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,1);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,1);
  return;
}



// FUNCTION 1470587d6 FUN_1470587d6 body=123 status=ok
// SIG undefined FUN_1470587d6(void)

void FUN_1470587d6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0xb8,0);
      iVar2 = (int)(uVar1 / 0xb8);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x5cc)) {
    *(int *)(param_1 + 0x5cc) = iVar3;
    FUN_147058852(param_1,*(undefined4 *)(param_1 + 0x5c8));
    return;
  }
  return;
}



// FUNCTION 147058852 FUN_147058852 body=147 status=ok
// SIG undefined FUN_147058852(void)

void FUN_147058852(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x5c0);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xb8);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x5c0,0,param_3,0xb8);
    memmove(*(void **)((longlong)param_1 + 0x5c0),param_1,(longlong)param_2 * 0xb8);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x5c0,param_2,param_3,0xb8);
  return;
}



// FUNCTION 1470588e6 FUN_1470588e6 body=104 status=ok
// SIG undefined FUN_1470588e6(void)

void FUN_1470588e6(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x8c)) {
    *(int *)(param_1 + 0x8c) = iVar3;
    FUN_14705894e(param_1,*(undefined4 *)(param_1 + 0x88));
    return;
  }
  return;
}



// FUNCTION 14705894e FUN_14705894e body=141 status=ok
// SIG undefined FUN_14705894e(void)

void FUN_14705894e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,0x10);
  return;
}



// FUNCTION 1470589dc FUN_1470589dc body=95 status=ok
// SIG undefined FUN_1470589dc(void)

void FUN_1470589dc(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 2,0);
      iVar1 = (int)(uVar2 >> 2);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x2c) = iVar3;
    FUN_147058a3c(param_1,*(undefined4 *)(param_1 + 0x28));
    return;
  }
  return;
}



// FUNCTION 147058a3c FUN_147058a3c body=132 status=ok
// SIG undefined FUN_147058a3c(void)

void FUN_147058a3c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,4);
  return;
}



// FUNCTION 147058ac0 FUN_147058ac0 body=110 status=ok
// SIG undefined FUN_147058ac0(void)

void FUN_147058ac0(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_14705867e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147058b30 FUN_147058b30 body=102 status=ok
// SIG undefined FUN_147058b30(void)

void FUN_147058b30(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 <= (int)uVar1) {
    iVar4 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x14)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      iVar2 = FUN_144a3809e(lVar3,0);
      iVar4 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar4 = iVar2;
      }
    }
    *(int *)(param_1 + 0x14) = iVar4;
    FUN_14705875a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147058b98 FUN_147058b98 body=138 status=ok
// SIG undefined FUN_147058b98(void)

void FUN_147058b98(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x5c8);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x5cc)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0xb8,0);
      iVar4 = (int)(uVar3 / 0xb8);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x5cc) = iVar5;
    FUN_147058852(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147058c24 FUN_147058c24 body=31 status=ok
// SIG undefined FUN_147058c24(void)

undefined8 FUN_147058c24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147058c5e FUN_147058c5e body=93 status=ok
// SIG undefined FUN_147058c5e(void)

void FUN_147058c5e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a14f7b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147058cbc FUN_147058cbc body=93 status=ok
// SIG undefined FUN_147058cbc(void)

void FUN_147058cbc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a14f7b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147058d1a FUN_147058d1a body=126 status=ok
// SIG undefined FUN_147058d1a(void)

void FUN_147058d1a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a14f7b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147058d89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147058d98 FUN_147058d98 body=35 status=ok
// SIG undefined FUN_147058d98(void)

void FUN_147058d98(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147058db7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 147058dbc FUN_147058dbc body=132 status=ok
// SIG undefined FUN_147058dbc(void)

void FUN_147058dbc(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147058e42 FUN_147058e42 body=96 status=ok
// SIG undefined FUN_147058e42(void)

void FUN_147058e42(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 147058ea2 FUN_147058ea2 body=95 status=ok
// SIG undefined FUN_147058ea2(void)

void FUN_147058ea2(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147058f02 FUN_147058f02 body=132 status=ok
// SIG undefined FUN_147058f02(void)

void FUN_147058f02(longlong param_1,int param_2)

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



// FUNCTION 147058f88 FUN_147058f88 body=95 status=ok
// SIG undefined FUN_147058f88(void)

void FUN_147058f88(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147058fe8 FUN_147058fe8 body=132 status=ok
// SIG undefined FUN_147058fe8(void)

void FUN_147058fe8(longlong param_1,int param_2)

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



// FUNCTION 14705906e FUN_14705906e body=394 status=ok
// SIG undefined FUN_14705906e(void)

longlong FUN_14705906e(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str2;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar9 = *param_1;
  uVar8 = 0;
  if (0 < (int)uVar1) {
    _Str2 = L"";
    if (*(int *)(param_2 + 1) != 0) {
      _Str2 = (wchar_t *)*param_2;
    }
    uVar8 = 0;
    uVar6 = (ulonglong)uVar1;
    do {
      uVar7 = (int)(uVar6 >> 1) + uVar8;
      lVar3 = (ulonglong)uVar7 * 0x30;
      pwVar4 = L"";
      if (*(int *)(lVar9 + 8 + lVar3) != 0) {
        pwVar4 = *(wchar_t **)(lVar9 + lVar3);
      }
      iVar2 = wcscmp(pwVar4,_Str2);
      uVar5 = (uint)uVar6;
      if (iVar2 < 0) {
        uVar8 = uVar7 + (uVar5 & 1);
      }
      uVar6 = uVar6 >> 1;
    } while (1 < uVar5);
    if ((int)uVar8 < (int)uVar1) {
      lVar3 = (ulonglong)uVar8 * 0x30;
      if (*(int *)(lVar9 + 8 + lVar3) == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = *(wchar_t **)(lVar9 + lVar3);
      }
      iVar2 = wcscmp(_Str2,pwVar4);
      if (-1 < iVar2) {
        lVar9 = lVar9 + lVar3;
        FUN_14010f8af(lVar9,1);
        goto LAB_1470591a3;
      }
    }
  }
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar1) {
    FUN_140234572(param_1,uVar1);
    lVar9 = *param_1;
  }
  lVar3 = (ulonglong)uVar8 * 0x30;
  memmove((void *)(lVar9 + lVar3 + 0x30),(void *)(lVar9 + lVar3),(ulonglong)(uVar1 - uVar8) * 0x30);
  lVar9 = lVar3 + *param_1;
LAB_1470591a3:
  FUN_1470591f8(lVar9,0,param_2,param_3);
  return lVar9 + 0x10;
}



// FUNCTION 1470591f8 FUN_1470591f8 body=133 status=ok
// SIG undefined FUN_1470591f8(void)

undefined8 *
FUN_1470591f8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  uVar5 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *(undefined4 *)(param_1 + 2) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  plVar2 = *(longlong **)(param_4 + 4);
  if (plVar2 == (longlong *)0x0) {
    param_1[4] = 0;
    uVar5 = 0;
  }
  else {
    param_1[4] = plVar2;
    (**(code **)(*plVar2 + 8))();
    uVar5 = param_4[6];
  }
  *(undefined4 *)(param_1 + 5) = uVar5;
  return param_1;
}



// FUNCTION 14705927e FUN_14705927e body=322 status=ok
// SIG undefined FUN_14705927e(void)

void FUN_14705927e(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 1470593c2 FUN_1470593c2 body=307 status=ok
// SIG undefined FUN_1470593c2(void)

void FUN_1470593c2(longlong *param_1)

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
      lVar2 = (longlong)iStack_54 * 0x20;
      FUN_147057811(*(undefined8 *)(lVar1 + 8 + lVar2),*(undefined4 *)(lVar1 + 0x10 + lVar2));
      if (*(longlong *)(lVar1 + 8 + lVar2) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470594f6 FUN_1470594f6 body=181 status=ok
// SIG undefined FUN_1470594f6(void)

longlong FUN_1470594f6(longlong *param_1,uint param_2,char *param_3)

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
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(char *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_14705958e;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1470595ac(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_14705958e:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1470595ac FUN_1470595ac body=278 status=ok
// SIG undefined FUN_1470595ac(void)

undefined4 * FUN_1470595ac(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined1 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1470596c4(param_1,local_48);
  *local_40 = *(undefined1 *)*param_4;
  *(undefined8 *)(local_40 + 8) = 0;
  *(undefined8 *)(local_40 + 0x10) = 0;
  FUN_147057811(0,0);
  *(undefined4 *)(local_40 + 0x18) = 0xffffffff;
  cVar1 = FUN_1470597aa(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x1c) = param_3;
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x18) =
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
      FUN_1470598c8(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470596c4 FUN_1470596c4 body=229 status=ok
// SIG undefined FUN_1470596c4(void)

int * FUN_1470596c4(longlong *param_1,int *param_2)

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



// FUNCTION 1470597aa FUN_1470597aa body=172 status=ok
// SIG undefined FUN_1470597aa(void)

undefined8 FUN_1470597aa(longlong *param_1,uint param_2,char *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
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
        if (*(char *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          FUN_147057811(*(undefined8 *)(puVar1 + 2),puVar1[4]);
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          uVar2 = *(undefined4 *)param_3;
          uVar3 = *(undefined4 *)(param_3 + 4);
          uVar4 = *(undefined4 *)(param_3 + 8);
          uVar5 = *(undefined4 *)(param_3 + 0xc);
          *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 0x10);
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
          FUN_147059856(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 147059856 FUN_147059856 body=114 status=ok
// SIG undefined FUN_147059856(void)

void FUN_147059856(longlong *param_1,int param_2)

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



// FUNCTION 1470598c8 FUN_1470598c8 body=413 status=ok
// SIG undefined FUN_1470598c8(void)

void FUN_1470598c8(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar2 + lVar6);
        *(uint *)(lVar2 + 0x1c + lVar6) = uVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
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



// FUNCTION 147059a66 FUN_147059a66 body=346 status=ok
// SIG undefined FUN_147059a66(void)

longlong * FUN_147059a66(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x280,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a14f820;
  plVar4 = plVar3 + 2;
  FUN_140a55f88(plVar4);
  plVar3[2] = (longlong)&PTR_FUN_14a14a9e0;
  plVar3[0x4f] = 0;
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_147059bea(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_147059b53;
    param_1[1] = 0;
LAB_147059b1d:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_147059b53;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_147059b53;
      goto LAB_147059b1d;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_147059b53;
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
LAB_147059b53:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x270;
  FUN_140a52e78(*param_1,"STedsWidget",
                ".\\Runtime/TypedElementFramework/Private/Elements/Interfaces/TypedElementDataStorageUiInterface.cpp"
                ,0x80);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147059bc2 FUN_147059bc2 body=9 status=ok
// SIG undefined FUN_147059bc2(void)

void FUN_147059bc2(longlong param_1)

{
  FUN_14171f70c(param_1 + 0x10);
  return;
}



// FUNCTION 147059bcc FUN_147059bcc body=29 status=ok
// SIG undefined FUN_147059bcc(void)

undefined8 FUN_147059bcc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147059bea FUN_147059bea body=167 status=ok
// SIG undefined FUN_147059bea(void)

void FUN_147059bea(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_147059c65;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_147059c65;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_147059c65:
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
                    /* WARNING: Could not recover jumptable at 0x000147059c85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147059c92 FUN_147059c92 body=64 status=ok
// SIG undefined FUN_147059c92(void)

void FUN_147059c92(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  if (param_2 != param_3) {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = *param_3;
    *param_3 = 0;
    *(int *)(param_2 + 1) = (int)param_3[1];
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_3 + 0xc);
    param_3[1] = 0;
  }
  return;
}



// FUNCTION 147059cfc FUN_147059cfc body=31 status=ok
// SIG undefined FUN_147059cfc(void)

undefined8 FUN_147059cfc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147059d38 FUN_147059d38 body=93 status=ok
// SIG undefined FUN_147059d38(void)

void FUN_147059d38(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a14f840;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147059d96 FUN_147059d96 body=126 status=ok
// SIG undefined FUN_147059d96(void)

void FUN_147059d96(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a14f840;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147059e05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147059e14 FUN_147059e14 body=21 status=ok
// SIG undefined FUN_147059e14(void)

undefined8 FUN_147059e14(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147059e2a FUN_147059e2a body=120 status=ok
// SIG undefined FUN_147059e2a(void)

undefined8 * FUN_147059e2a(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99f648) {
    FUN_144b3d300(&DAT_14c99f648);
    if (DAT_14c99f648 == -1) {
      FUN_1446ddc76(&DAT_14c99f640,"FTestTypedElementData",1);
      _Init_thread_footer(&DAT_14c99f648);
    }
  }
  *param_1 = DAT_14c99f640;
  return param_1;
}



// FUNCTION 147059ea2 FUN_147059ea2 body=59 status=ok
// SIG undefined FUN_147059ea2(void)

void FUN_147059ea2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000147059eda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2,param_3);
  return;
}



// FUNCTION 147059edd FUN_147059edd body=194 status=ok
// SIG undefined FUN_147059edd(void)

void FUN_147059edd(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  longlong lVar2;
  
  *(undefined1 *)(param_1 + 0xa0) = 1;
  *(undefined1 *)(param_1 + 0xa1) = *param_2;
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x1c);
  *(char *)(param_1 + 0xa2) = -(*(longlong *)(param_2 + 0x1c) == 0);
  if (*(longlong *)(param_2 + 0xc) != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
      FUN_141736066(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar2 = param_1;
    }
    *(undefined8 *)(lVar2 + (longlong)iVar1 * 8) = *(undefined8 *)(param_2 + 0xc);
  }
  if (*(longlong *)(param_2 + 0x14) != 0) {
    iVar1 = *(int *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x38) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x3c) < iVar1 + 1U) {
      FUN_141736066(param_1 + 0x20,iVar1);
    }
    lVar2 = param_1 + 0x20;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x30);
    }
    *(undefined8 *)(lVar2 + (longlong)iVar1 * 8) = *(undefined8 *)(param_2 + 0x14);
  }
  *(undefined1 *)(param_1 + 0xa3) = param_2[0x24];
  return;
}



// FUNCTION 147059fbe FUN_147059fbe body=399 status=ok
// SIG undefined FUN_147059fbe(void)

void FUN_147059fbe(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  undefined4 local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  plStack_30 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = 0x10100;
  uStack_44 = (uint)uStack_44._2_2_ << 0x10;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_48;
  iStack_54 = uStack_44;
  uStack_50 = (undefined4)uStack_40;
  uStack_4c = uStack_40._4_4_;
  local_68 = local_38;
  local_60 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_14705a14e(local_20,&local_68,&local_58);
  plVar3 = plStack_30;
  *param_3 = uVar4;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705a14e FUN_14705a14e body=414 status=ok
// SIG undefined FUN_14705a14e(void)

undefined4 FUN_14705a14e(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == 0) {
    FUN_1415b7ec4(L"SelectionSet is null.",2,0);
  }
  local_48 = *param_2;
  local_40 = (longlong *)param_2[1];
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  FUN_147050e88(&local_38,&local_48);
  plVar3 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_30;
  if (local_38 == 0) {
    uVar4 = 0;
    FUN_1415b7ec4(L"ElementList is in a invalid state.",2,0);
  }
  else {
    local_58 = *param_3;
    uStack_54 = param_3[1];
    uStack_50 = param_3[2];
    uStack_4c = param_3[3];
    if (local_30 == (longlong *)0x0) {
      local_68 = local_38;
      local_60 = (longlong *)0x0;
      uVar4 = FUN_14705f0c6(param_1,&local_68,&local_58);
    }
    else {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
      local_68 = local_38;
      local_60 = local_30;
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
      uVar4 = FUN_14705f0c6(param_1,&local_68,&local_58);
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
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  plVar3 = (longlong *)param_2[1];
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
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705a2ee FUN_14705a2ee body=466 status=ok
// SIG undefined FUN_14705a2ee(void)

void FUN_14705a2ee(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined2 local_44;
  undefined2 uStack_42;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  longlong *plStack_30;
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
  plStack_30 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = CONCAT44(uStack_40,CONCAT22(uStack_42,local_44));
  local_60 = uStack_3c;
  local_78 = local_38;
  local_70 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  FUN_14705a4c2(local_58,local_20,&local_78,&local_68);
  FUN_147048810(param_3,local_58);
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
  plVar1 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705a4c2 FUN_14705a4c2 body=661 status=ok
// SIG undefined FUN_14705a4c2(void)

undefined8 *
FUN_14705a4c2(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  longlong *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *plStack_50;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == 0) {
    FUN_1415b7ec4(L"SelectionSet is null.",2,0);
  }
  local_58 = *param_3;
  plStack_50 = (longlong *)param_3[1];
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
    UNLOCK();
  }
  FUN_147050e88(&local_40,&local_58);
  plVar4 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = local_38;
  if (local_40 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    local_88 = *param_4;
    local_80 = *(undefined4 *)(param_4 + 1);
    if (local_38 == (longlong *)0x0) {
      local_90 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
      local_90 = local_38;
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    FUN_14705f794(param_2,&local_78,local_98,&local_88);
    local_68 = local_78;
    local_60 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    FUN_14705100b(&local_58,&local_68);
    plVar1 = plStack_50;
    uVar5 = local_58;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    *param_1 = uVar5;
    param_1[1] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
      LOCK();
      plVar3 = plVar1 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    plVar1 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_50 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    plVar1 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_60 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)local_70 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
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
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_38 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  plVar4 = (longlong *)param_3[1];
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
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705a758 FUN_14705a758 body=309 status=ok
// SIG undefined FUN_14705a758(void)

void FUN_14705a758(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined2 local_2c;
  undefined2 uStack_2a;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = CONCAT44(uStack_28,CONCAT22(uStack_2a,local_2c));
  local_48 = uStack_24;
  FUN_14705a88e(local_40,local_20);
  FUN_147048810(param_3,local_40);
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
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705a88e FUN_14705a88e body=365 status=ok
// SIG undefined FUN_14705a88e(void)

longlong * FUN_14705a88e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == 0) {
    FUN_1415b7ec4(L"SelectionSet is null.",2,0);
  }
  local_60 = *param_3;
  local_58 = *(undefined4 *)(param_3 + 1);
  FUN_14705f6da(param_2,&local_50);
  local_40 = local_50;
  local_38 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  FUN_14705100b(&local_30,&local_40);
  plVar3 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_48 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  plVar3 = local_28;
  if (local_30 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else if (local_28 == (longlong *)0x0) {
    *param_1 = local_30;
    param_1[1] = 0;
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    *param_1 = local_30;
    param_1[1] = (longlong)local_28;
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705aa02 FUN_14705aa02 body=399 status=ok
// SIG undefined FUN_14705aa02(void)

void FUN_14705aa02(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  undefined4 local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  plStack_30 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = 0x10100;
  uStack_44 = (uint)uStack_44._2_2_ << 0x10;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_48;
  iStack_54 = uStack_44;
  uStack_50 = (undefined4)uStack_40;
  uStack_4c = uStack_40._4_4_;
  local_68 = local_38;
  local_60 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_14705ab92(local_20,&local_68,&local_58);
  plVar3 = plStack_30;
  *param_3 = uVar4;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705ab92 FUN_14705ab92 body=414 status=ok
// SIG undefined FUN_14705ab92(void)

undefined4 FUN_14705ab92(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == 0) {
    FUN_1415b7ec4(L"SelectionSet is null.",2,0);
  }
  local_48 = *param_2;
  local_40 = (longlong *)param_2[1];
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  FUN_147050e88(&local_38,&local_48);
  plVar3 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_30;
  if (local_38 == 0) {
    uVar4 = 0;
    FUN_1415b7ec4(L"ElementList is in a invalid state.",2,0);
  }
  else {
    local_58 = *param_3;
    uStack_54 = param_3[1];
    uStack_50 = param_3[2];
    uStack_4c = param_3[3];
    if (local_30 == (longlong *)0x0) {
      local_68 = local_38;
      local_60 = (longlong *)0x0;
      uVar4 = FUN_14705ec02(param_1,&local_68,&local_58);
    }
    else {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
      local_68 = local_38;
      local_60 = local_30;
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
      uVar4 = FUN_14705ec02(param_1,&local_68,&local_58);
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
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  plVar3 = (longlong *)param_2[1];
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
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705ad38 FUN_14705ad38 body=399 status=ok
// SIG undefined FUN_14705ad38(void)

void FUN_14705ad38(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  undefined4 local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  plStack_30 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = 0x10100;
  uStack_44 = (uint)uStack_44._2_2_ << 0x10;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_48;
  iStack_54 = uStack_44;
  uStack_50 = (undefined4)uStack_40;
  uStack_4c = uStack_40._4_4_;
  local_68 = local_38;
  local_60 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_14705aec8(local_20,&local_68,&local_58);
  plVar3 = plStack_30;
  *param_3 = uVar4;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705aec8 FUN_14705aec8 body=414 status=ok
// SIG undefined FUN_14705aec8(void)

undefined4 FUN_14705aec8(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 == 0) {
    FUN_1415b7ec4(L"SelectionSet is null.",2,0);
  }
  local_48 = *param_2;
  local_40 = (longlong *)param_2[1];
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  FUN_147050e88(&local_38,&local_48);
  plVar3 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_30;
  if (local_38 == 0) {
    local_78 = *param_3;
    uStack_74 = param_3[1];
    uStack_70 = param_3[2];
    uStack_6c = param_3[3];
    uVar4 = FUN_14705bcac(param_1);
  }
  else {
    local_58 = *param_3;
    uStack_54 = param_3[1];
    uStack_50 = param_3[2];
    uStack_4c = param_3[3];
    if (local_30 == (longlong *)0x0) {
      local_68 = local_38;
      local_60 = (longlong *)0x0;
      uVar4 = FUN_14705f350(param_1,&local_68,&local_58);
    }
    else {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
      local_68 = local_38;
      local_60 = local_30;
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
      uVar4 = FUN_14705f350(param_1,&local_68,&local_58);
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
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  plVar3 = (longlong *)param_2[1];
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
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14705b06a FUN_14705b06a body=109 status=ok
// SIG undefined FUN_14705b06a(void)

longlong FUN_14705b06a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)param_1[1];
  if ((plVar1 != (longlong *)0x0 && *param_1 != 0) &&
     (lVar4 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1), lVar4 != 0)) {
    if (param_2 == 0) {
      return lVar4;
    }
    lVar2 = *(longlong *)(lVar4 + 0x10);
    if ((*(int *)(param_2 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(param_2 + 0x38) * 8) ==
        param_2 + 0x30)) {
      return lVar4;
    }
    cVar3 = FUN_144a7ff9e(lVar2,param_2);
    if (cVar3 != '\0') {
      return lVar4;
    }
  }
  return 0;
}



// FUNCTION 14705b0d7 FUN_14705b0d7 body=174 status=ok
// SIG undefined FUN_14705b0d7(void)

ulonglong FUN_14705b0d7(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 **local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = &local_19;
  local_19 = 0;
  local_28 = &local_38;
  local_30 = &LAB_142afa780;
  local_48 = *param_1;
  local_40 = param_1[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  FUN_14705b186(&local_48,&local_30,param_2);
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_19);
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
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705b186 FUN_14705b186 body=128 status=ok
// SIG undefined FUN_14705b186(void)

void FUN_14705b186(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  code *local_20;
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = &local_30;
  local_20 = FUN_142afa792;
  local_30 = param_2;
  local_28 = param_3;
  FUN_14705b2ba(*param_1);
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
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705b207 FUN_14705b207 body=177 status=ok
// SIG undefined FUN_14705b207(void)

undefined4 FUN_14705b207(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined4 *local_38;
  undefined1 *local_30;
  undefined4 **local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = &local_1c;
  local_1c = 0;
  local_28 = &local_38;
  local_30 = &LAB_142afa78a;
  local_48 = *param_1;
  local_40 = param_1[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  FUN_14705b186(&local_48,&local_30,param_2);
  uVar4 = local_1c;
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
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705b2ba FUN_14705b2ba body=246 status=ok
// SIG undefined FUN_14705b2ba(void)

void FUN_14705b2ba(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  lStack_50 = 0;
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x68);
    lVar1 = lVar4 + (longlong)*(int *)(param_1 + 0x70) * 8;
    do {
      while( true ) {
        uVar3 = FUN_14479d2ce(param_1 + 0x10);
        local_48 = FUN_1458d3e86();
        if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(local_48);
        }
        FUN_14704f518(uVar3,lVar4,&local_48,&local_58);
        if ((local_58 == 0) || (lStack_50 == 0)) break;
        cVar2 = (*(code *)*param_2)(param_2[1],&local_58);
        if ((cVar2 == '\0') || (lVar4 = lVar4 + 8, lVar4 == lVar1)) goto LAB_14705b381;
      }
      lVar4 = lVar4 + 8;
    } while (lVar4 != lVar1);
LAB_14705b381:
    if (local_58 != 0) {
      LOCK();
      *(int *)(local_58 + 0xc) = *(int *)(local_58 + 0xc) + -1;
      UNLOCK();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14705b3b1 FUN_14705b3b1 body=212 status=ok
// SIG undefined FUN_14705b3b1(void)

undefined8 * FUN_14705b3b1(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined8 *local_38;
  code *local_30;
  undefined8 **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  local_48 = *param_2;
  iVar3 = *(int *)(local_48 + 0x70);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (iVar3 != 0) {
    FUN_14079e7a6(param_1);
    local_48 = *param_2;
  }
  local_28 = &local_38;
  local_30 = FUN_142afa7fe;
  local_40 = param_2[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  local_38 = param_1;
  FUN_14705b186(&local_48,&local_30,param_3);
  plVar4 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705b487 FUN_14705b487 body=317 status=ok
// SIG undefined FUN_14705b487(void)

longlong FUN_14705b487(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  longlong local_68 [3];
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = 0;
  local_68[1] = 0;
  lVar6 = *param_1;
  if (*(int *)(lVar6 + 0x70) < 1) {
    lVar5 = 0;
  }
  else {
    lVar7 = 0;
    do {
      local_50 = 0;
      lVar5 = *(longlong *)(*(longlong *)(lVar6 + 0x68) + lVar7 * 8);
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
        UNLOCK();
        local_50 = lVar5;
      }
      uVar4 = FUN_14479d2ce(lVar6 + 0x10);
      local_48 = FUN_1458d3e86();
      if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(local_48);
      }
      FUN_14704f518(uVar4,&local_50,&local_48,local_68);
      if (local_50 != 0) {
        LOCK();
        *(int *)(local_50 + 0xc) = *(int *)(local_50 + 0xc) + -1;
        UNLOCK();
      }
      lVar5 = FUN_14705b06a(local_68,param_2);
      if (lVar5 != 0) break;
      lVar7 = lVar7 + 1;
      lVar6 = *param_1;
    } while (lVar7 < *(int *)(lVar6 + 0x70));
    if (local_68[0] != 0) {
      LOCK();
      *(int *)(local_68[0] + 0xc) = *(int *)(local_68[0] + 0xc) + -1;
      UNLOCK();
    }
  }
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
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705b5c5 FUN_14705b5c5 body=305 status=ok
// SIG undefined FUN_14705b5c5(void)

longlong FUN_14705b5c5(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [32];
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = 0;
  local_68[1] = 0;
  uVar7 = (ulonglong)*(uint *)(*param_1 + 0x70);
  do {
    lVar6 = 0;
    if ((int)uVar7 < 1) break;
    lVar6 = *param_1;
    local_68[2] = 0;
    lVar3 = *(longlong *)(*(longlong *)(lVar6 + 0x68) + -8 + uVar7 * 8);
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
      UNLOCK();
      local_68[2] = lVar3;
    }
    uVar5 = FUN_14479d2ce(lVar6 + 0x10);
    local_68[3] = FUN_1458d3e86();
    if ((local_68[3] != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_68[3]);
    }
    FUN_14704f518(uVar5,local_68 + 2,local_68 + 3,local_68);
    if (local_68[2] != 0) {
      LOCK();
      *(int *)(local_68[2] + 0xc) = *(int *)(local_68[2] + 0xc) + -1;
      UNLOCK();
    }
    lVar6 = FUN_14705b06a(local_68,param_2);
    uVar7 = uVar7 - 1;
  } while (lVar6 == 0);
  if (local_68[0] != 0) {
    LOCK();
    *(int *)(local_68[0] + 0xc) = *(int *)(local_68[0] + 0xc) + -1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[1];
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
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 14705b708 FUN_14705b708 body=198 status=ok
// SIG undefined FUN_14705b708(void)

void FUN_14705b708(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = &local_30;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_14705b7d0(param_1,plVar3);
  *param_3 = uVar2;
  if (local_30 != 0) {
    piVar1 = (int *)(local_30 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705b7d0 FUN_14705b7d0 body=133 status=ok
// SIG undefined FUN_14705b7d0(void)

undefined4 FUN_14705b7d0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_2, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_20 = lVar1;
    if (lVar1 != 0) {
      uVar2 = FUN_14705f42a(param_1,&local_20);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_14705b819;
    }
  }
  uVar2 = 0;
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
LAB_14705b819:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705b85c FUN_14705b85c body=303 status=ok
// SIG undefined FUN_14705b85c(void)

void FUN_14705b85c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  longlong local_30;
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
  plVar3 = &local_30;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_40 = 0x10100;
  uStack_3c = (uint)uStack_3c._2_2_ << 0x10;
  uStack_38 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_40;
  iStack_54 = uStack_3c;
  uStack_50 = (undefined4)uStack_38;
  uStack_4c = uStack_38._4_4_;
  uVar2 = FUN_14705b98c(param_1,plVar3);
  *param_3 = uVar2;
  if (local_30 != 0) {
    piVar1 = (int *)(local_30 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705b98c FUN_14705b98c body=146 status=ok
// SIG undefined FUN_14705b98c(void)

undefined4 FUN_14705b98c(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_2, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_20 = lVar1;
    if (lVar1 != 0) {
      local_38 = *param_3;
      uStack_34 = param_3[1];
      uStack_30 = param_3[2];
      uStack_2c = param_3[3];
      uVar2 = FUN_14705e754(local_38,&local_20);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_14705b9d5;
    }
  }
  uVar2 = 0;
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
LAB_14705b9d5:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705ba26 FUN_14705ba26 body=303 status=ok
// SIG undefined FUN_14705ba26(void)

void FUN_14705ba26(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  longlong local_30;
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
  plVar3 = &local_30;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_40 = 0x10100;
  uStack_3c = (uint)uStack_3c._2_2_ << 0x10;
  uStack_38 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_40;
  iStack_54 = uStack_3c;
  uStack_50 = (undefined4)uStack_38;
  uStack_4c = uStack_38._4_4_;
  uVar2 = FUN_14705bb56(param_1,plVar3);
  *param_3 = uVar2;
  if (local_30 != 0) {
    piVar1 = (int *)(local_30 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705bb56 FUN_14705bb56 body=146 status=ok
// SIG undefined FUN_14705bb56(void)

undefined4 FUN_14705bb56(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_2, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_20 = lVar1;
    if (lVar1 != 0) {
      local_38 = *param_3;
      uStack_34 = param_3[1];
      uStack_30 = param_3[2];
      uStack_2c = param_3[3];
      uVar2 = FUN_14705e692(local_38,&local_20);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_14705bb9f;
    }
  }
  uVar2 = 0;
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
LAB_14705bb9f:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705bbf0 FUN_14705bbf0 body=186 status=ok
// SIG undefined FUN_14705bbf0(void)

void FUN_14705bbf0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  uint uStack_2c;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0x10100;
  uStack_2c = uStack_2c & 0xffff0000;
  uStack_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_30;
  uStack_44 = uStack_2c;
  uStack_40 = (undefined4)uStack_28;
  uStack_3c = uStack_28._4_4_;
  uVar1 = FUN_14705bcac(param_1);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705bcac FUN_14705bcac body=417 status=ok
// SIG undefined FUN_14705bcac(void)

ulonglong FUN_14705bcac(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_e8 [40];
  undefined4 local_c0;
  undefined1 local_bc;
  undefined7 local_bb;
  undefined1 uStack_b4;
  undefined3 uStack_b3;
  undefined1 local_b0 [16];
  undefined7 local_a0;
  uint uStack_99;
  longlong local_90 [8];
  longlong *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14704fe4e(local_b0,*(undefined8 *)(param_1 + 0x848),*(undefined1 *)((longlong)param_2 + 2));
  uVar5 = 0;
  local_50 = (longlong *)0x0;
  local_48 = 0x800000000;
  local_a0 = 0;
  uStack_99 = uStack_99 & 0xffffff00;
  FUN_14705f198(*(undefined8 *)(param_1 + 0x848),local_90,&local_a0);
  uVar1 = *param_2;
  local_a0 = (undefined7)*(undefined8 *)((longlong)param_2 + 5);
  uStack_99._1_3_ = (undefined3)((uint)param_2[3] >> 8);
  uStack_99._0_1_ = (undefined1)((ulonglong)*(undefined8 *)((longlong)param_2 + 5) >> 0x38);
  plVar4 = local_50;
  if (local_50 == (longlong *)0x0) {
    plVar4 = local_90;
  }
  if ((longlong)(int)local_48 != 0) {
    lVar6 = (longlong)(int)local_48 << 3;
    uVar5 = 0;
    do {
      local_bc = 1;
      local_bb = local_a0;
      _uStack_b4 = CONCAT31(uStack_99._1_3_,(undefined1)uStack_99);
      local_c0 = uVar1;
      bVar3 = FUN_14705ed88(param_1,plVar4,&local_c0);
      uVar5 = (ulonglong)(byte)((byte)uVar5 | bVar3);
      plVar4 = plVar4 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  FUN_14705f224(local_90);
  lVar6 = *(longlong *)(param_1 + 0x848);
  if (0 < *(int *)(lVar6 + 0x70)) {
    FUN_14704fc6e(lVar6);
    FUN_146f44312(lVar6 + 0x18);
    iVar2 = *(int *)(lVar6 + 0x74);
    FUN_147057811(*(undefined8 *)(lVar6 + 0x68),*(undefined4 *)(lVar6 + 0x70));
    *(undefined4 *)(lVar6 + 0x70) = 0;
    if ((iVar2 < 0) && (*(int *)(lVar6 + 0x74) != 0)) {
      FUN_14705784a(lVar6 + 0x68,0);
    }
    FUN_14704f264(lVar6 + 0x78);
    local_90[0] = 0;
    FUN_14704fc7e(lVar6,2,local_90);
    if (local_90[0] != 0) {
      LOCK();
      *(int *)(local_90[0] + 0xc) = *(int *)(local_90[0] + 0xc) + -1;
      UNLOCK();
    }
    uVar5 = CONCAT71((int7)((ulonglong)local_90 >> 8),1);
  }
  FUN_14704fe68(local_b0);
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar5 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705be4e FUN_14705be4e body=198 status=ok
// SIG undefined FUN_14705be4e(void)

void FUN_14705be4e(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
    FUN_1456cec3c();
  }
  uVar1 = FUN_14704fa44(*(undefined8 *)(param_1 + 0x848),&local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705bf16 FUN_14705bf16 body=163 status=ok
// SIG undefined FUN_14705bf16(void)

void FUN_14705bf16(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14705bfba(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705bfba FUN_14705bfba body=152 status=ok
// SIG undefined FUN_14705bfba(void)

undefined4 FUN_14705bfba(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(param_1 + 0x848);
  plVar3 = *(longlong **)(param_1 + 0x850);
  if (plVar3 == (longlong *)0x0) {
    local_20 = (longlong *)0x0;
    uVar4 = FUN_14705b207();
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_20 = plVar3;
    uVar4 = FUN_14705b207();
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
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705c05a FUN_14705c05a body=303 status=ok
// SIG undefined FUN_14705c05a(void)

void FUN_14705c05a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  longlong local_30;
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
  plVar3 = &local_30;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_40 = 0x10100;
  uStack_3c = (uint)uStack_3c._2_2_ << 0x10;
  uStack_38 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_40;
  iStack_54 = uStack_3c;
  uStack_50 = (undefined4)uStack_38;
  uStack_4c = uStack_38._4_4_;
  uVar2 = FUN_14705c18a(param_1,plVar3);
  *param_3 = uVar2;
  if (local_30 != 0) {
    piVar1 = (int *)(local_30 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705c18a FUN_14705c18a body=146 status=ok
// SIG undefined FUN_14705c18a(void)

undefined4 FUN_14705c18a(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_2, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_20 = lVar1;
    if (lVar1 != 0) {
      local_38 = *param_3;
      uStack_34 = param_3[1];
      uStack_30 = param_3[2];
      uStack_2c = param_3[3];
      uVar2 = FUN_14705ed88(local_38,&local_20);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_14705c1d3;
    }
  }
  uVar2 = 0;
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
LAB_14705c1d3:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705c224 FUN_14705c224 body=308 status=ok
// SIG undefined FUN_14705c224(void)

void FUN_14705c224(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  plVar2 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_48 = 0x10100;
  uStack_44 = (uint)uStack_44._2_2_ << 0x10;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_48;
  iStack_54 = uStack_44;
  uStack_50 = (undefined4)uStack_40;
  uStack_4c = uStack_40._4_4_;
  uVar1 = FUN_14705c35a(param_1,plVar2);
  *param_3 = uVar1;
  FUN_14704c977(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705c35a FUN_14705c35a body=142 status=ok
// SIG undefined FUN_14705c35a(void)

undefined4 FUN_14705c35a(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147051d3f(&local_58);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_48 = local_58;
  local_40 = local_50;
  uVar1 = FUN_14705f01a(param_1);
  FUN_147057811(local_58,local_50);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705c3ea FUN_14705c3ea body=164 status=ok
// SIG undefined FUN_14705c3ea(void)

void FUN_14705c3ea(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14705c490(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705c490 FUN_14705c490 body=155 status=ok
// SIG undefined FUN_14705c490(void)

undefined8 FUN_14705c490(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(param_1 + 0x848);
  plVar3 = *(longlong **)(param_1 + 0x850);
  if (plVar3 == (longlong *)0x0) {
    local_20 = (longlong *)0x0;
    uVar4 = FUN_14705b5c5();
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_20 = plVar3;
    uVar4 = FUN_14705b5c5();
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
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705c52c FUN_14705c52c body=132 status=ok
// SIG undefined FUN_14705c52c(void)

void FUN_14705c52c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14705c5b2(param_1,&local_30);
  *param_3 = local_30;
  FUN_1470629ea(param_3 + 1,&local_28);
  FUN_147062a3a(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705c5b2 FUN_14705c5b2 body=159 status=ok
// SIG undefined FUN_14705c5b2(void)

undefined8 * FUN_14705c5b2(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  code *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_14485c47a(param_2,param_1);
  lVar2 = *(longlong *)(param_1 + 0x848);
  iVar1 = *(int *)(lVar2 + 0x70);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (*(int *)((longlong)param_2 + 0x14) < iVar1) {
    FUN_147062e1c(param_2 + 1);
    lVar2 = *(longlong *)(param_1 + 0x848);
  }
  local_20 = &local_30;
  local_28 = FUN_142afaa2e;
  local_30 = param_2;
  FUN_14705fa38(lVar2);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705c672 FUN_14705c672 body=226 status=ok
// SIG undefined FUN_14705c672(void)

void FUN_14705c672(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_14705c756(param_1,&local_38,local_28);
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



// FUNCTION 14705c756 FUN_14705c756 body=169 status=ok
// SIG undefined FUN_14705c756(void)

undefined8 FUN_14705c756(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(param_1 + 0x848);
  plVar3 = *(longlong **)(param_1 + 0x850);
  if (plVar3 == (longlong *)0x0) {
    local_20 = (longlong *)0x0;
    FUN_14705b3b1(param_2);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_20 = plVar3;
    FUN_14705b3b1(param_2);
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705c802 FUN_14705c802 body=287 status=ok
// SIG undefined FUN_14705c802(void)

void FUN_14705c802(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_31;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  plVar2 = &local_30;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_31 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14705c922(param_1,&local_40,plVar2,local_31);
  *param_3 = local_40;
  if (local_30 != 0) {
    piVar1 = (int *)(local_30 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705c922 FUN_14705c922 body=386 status=ok
// SIG undefined FUN_14705c922(void)

longlong * FUN_14705c922(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  PSRWLOCK SRWLock;
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint *puVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((longlong *)*param_3 != (longlong *)0x0) && (lVar3 = *(longlong *)*param_3, lVar3 != 0)) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
    local_40 = lVar3;
    if (lVar3 != 0) {
      lVar3 = FUN_14479d2ce(*(longlong *)(param_1 + 0x848) + 0x10);
      FUN_14705f56e(param_1,&local_48,&local_40,param_4);
      puVar4 = &DAT_14c99f64c;
      if (local_48 != 0) {
        puVar4 = (uint *)(local_48 + 8);
      }
      uVar1 = *puVar4;
      if (uVar1 == DAT_14c99f64c) {
LAB_14705c9f0:
        *param_2 = 0;
      }
      else {
        SRWLock = (PSRWLOCK)(lVar3 + 0x28);
        AcquireSRWLockShared(SRWLock);
        if (uVar1 < 0x1000000) {
          ReleaseSRWLockShared(SRWLock);
LAB_14705ca3b:
          FUN_1415b7ec4(L"Element type ID has not been registered to this registry!",2,0);
          goto LAB_14705c9f0;
        }
        plVar2 = *(longlong **)(lVar3 + 0x30 + (ulonglong)((uVar1 >> 0x18) - 1) * 8);
        ReleaseSRWLockShared(SRWLock);
        if (plVar2 == (longlong *)0x0) goto LAB_14705ca3b;
        (**(code **)(*plVar2 + 0x20))(plVar2,&local_38,*puVar4 & 0xffffff);
        *param_2 = local_38;
        if ((local_38 != 0) && (*(int *)(local_38 + 8) == 0)) {
          FUN_1400020a8();
        }
      }
      if (local_48 != 0) {
        LOCK();
        *(int *)(local_48 + 0xc) = *(int *)(local_48 + 0xc) + -1;
        UNLOCK();
      }
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 0xc) = *(int *)(local_40 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_14705c978;
    }
  }
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
  *param_2 = 0;
LAB_14705c978:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705caa6 FUN_14705caa6 body=164 status=ok
// SIG undefined FUN_14705caa6(void)

void FUN_14705caa6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14705cb4c(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705cb4c FUN_14705cb4c body=155 status=ok
// SIG undefined FUN_14705cb4c(void)

undefined8 FUN_14705cb4c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(param_1 + 0x848);
  plVar3 = *(longlong **)(param_1 + 0x850);
  if (plVar3 == (longlong *)0x0) {
    local_20 = (longlong *)0x0;
    uVar4 = FUN_14705b487();
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_20 = plVar3;
    uVar4 = FUN_14705b487();
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
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705cbee FUN_14705cbee body=198 status=ok
// SIG undefined FUN_14705cbee(void)

void FUN_14705cbee(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
    FUN_1456cec3c();
  }
  uVar1 = FUN_14704f902(*(undefined8 *)(param_1 + 0x848),&local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705ccbc FUN_14705ccbc body=163 status=ok
// SIG undefined FUN_14705ccbc(void)

void FUN_14705ccbc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14705cd60(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705cd60 FUN_14705cd60 body=152 status=ok
// SIG undefined FUN_14705cd60(void)

undefined4 FUN_14705cd60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(param_1 + 0x848);
  plVar3 = *(longlong **)(param_1 + 0x850);
  if (plVar3 == (longlong *)0x0) {
    local_20 = (longlong *)0x0;
    uVar4 = FUN_14705b0d7();
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_20 = plVar3;
    uVar4 = FUN_14705b0d7();
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
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705ce00 FUN_14705ce00 body=300 status=ok
// SIG undefined FUN_14705ce00(void)

void FUN_14705ce00(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  plVar3 = &local_30;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_3c = local_3c & 0xffffff00;
  uStack_38 = 0;
  uStack_34 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = uStack_34;
  local_48 = CONCAT44(uStack_38,local_3c);
  uVar2 = FUN_14705cf2e(param_1,plVar3);
  *param_3 = uVar2;
  if (local_30 != 0) {
    piVar1 = (int *)(local_30 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705cf2e FUN_14705cf2e body=154 status=ok
// SIG undefined FUN_14705cf2e(void)

undefined4 FUN_14705cf2e(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_2, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_20 = lVar1;
    if (lVar1 != 0) {
      local_28 = *(undefined4 *)(param_3 + 1);
      local_30 = *param_3;
      uVar2 = FUN_14705e434(param_1,&local_20,&local_30);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_14705cf77;
    }
  }
  uVar2 = 0;
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
LAB_14705cf77:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705cfca FUN_14705cfca body=233 status=ok
// SIG undefined FUN_14705cfca(void)

void FUN_14705cfca(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  undefined4 local_30;
  longlong local_28;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_14705d0b4(param_1,&local_38,&local_40);
  FUN_147049538(param_3,&local_38);
  FUN_14704c977(local_38,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705d0b4 FUN_14705d0b4 body=169 status=ok
// SIG undefined FUN_14705d0b4(void)

undefined8 FUN_14705d0b4(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_3;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_14704fbe4(*(undefined8 *)(param_1 + 0x848),&local_30,&local_38);
  uVar1 = FUN_14479d2ce(*(longlong *)(param_1 + 0x848) + 0x10);
  FUN_147051bc5(param_2,&local_30,uVar1);
  FUN_147057811(local_30,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705d15e FUN_14705d15e body=202 status=ok
// SIG undefined FUN_14705d15e(void)

void FUN_14705d15e(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong lStack_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  lStack_30 = 0;
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
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14705d22a(param_1,puVar1);
  FUN_147062a3a(lStack_30,local_28 & 0xffffffff);
  if (lStack_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705d22a FUN_14705d22a body=407 status=ok
// SIG undefined FUN_14705d22a(void)

void FUN_14705d22a(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_898 [32];
  undefined1 *local_878;
  undefined4 local_870;
  undefined1 local_868;
  undefined4 local_867;
  undefined3 uStack_863;
  undefined8 local_860;
  longlong local_858;
  undefined1 local_850 [2048];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_898;
  cVar5 = FUN_14705fb30(param_2,param_1);
  if (cVar5 != '\0') {
    local_50 = (undefined1 *)0x0;
    local_48 = 0x10000000000;
    uVar8 = *(uint *)(param_2 + 0x10);
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar8);
    }
    if (0x100 < uVar8) {
      FUN_1470643fe(local_850);
      uVar8 = *(uint *)(param_2 + 0x10);
    }
    if (uVar8 != 0) {
      lVar2 = *(longlong *)(param_2 + 8);
      lVar9 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar9);
        (**(code **)(*plVar3 + 0x10))(plVar3,&local_858);
        uVar4 = local_48;
        if (local_858 != 0) {
          lVar10 = (longlong)(int)local_48;
          uVar6 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,uVar6);
          if (local_48._4_4_ < uVar6) {
            FUN_1470644e2(local_850,uVar4 & 0xffffffff);
          }
          puVar7 = local_50;
          if (local_50 == (undefined1 *)0x0) {
            puVar7 = local_850;
          }
          *(longlong *)(puVar7 + lVar10 * 8) = local_858;
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)(int)uVar8 * 8 != lVar9);
    }
    uVar1 = *(undefined1 *)(param_1 + 0x888);
    *(undefined1 *)(param_1 + 0x888) = 1;
    local_860 = *(undefined8 *)(param_1 + 0x898);
    local_868 = 1;
    local_867 = 0;
    uStack_863 = 0;
    local_878 = local_50;
    if (local_50 == (undefined1 *)0x0) {
      local_878 = local_850;
    }
    local_870 = (int)local_48;
    FUN_14705f2b0(param_1);
    *(undefined1 *)(param_1 + 0x888) = uVar1;
    FUN_14705fba8(local_850);
  }
  if ((local_40 ^ (ulonglong)auStack_898) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14705d3ca FUN_14705d3ca body=303 status=ok
// SIG undefined FUN_14705d3ca(void)

void FUN_14705d3ca(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  longlong local_30;
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
  plVar3 = &local_30;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_40 = 0x10100;
  uStack_3c = (uint)uStack_3c._2_2_ << 0x10;
  uStack_38 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_40;
  iStack_54 = uStack_3c;
  uStack_50 = (undefined4)uStack_38;
  uStack_4c = uStack_38._4_4_;
  uVar2 = FUN_14705d4fa(param_1,plVar3);
  *param_3 = uVar2;
  if (local_30 != 0) {
    piVar1 = (int *)(local_30 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705d4fa FUN_14705d4fa body=146 status=ok
// SIG undefined FUN_14705d4fa(void)

undefined4 FUN_14705d4fa(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((longlong *)*param_2 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_2, lVar1 != 0)) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
    local_20 = lVar1;
    if (lVar1 != 0) {
      local_38 = *param_3;
      uStack_34 = param_3[1];
      uStack_30 = param_3[2];
      uStack_2c = param_3[3];
      uVar2 = FUN_14705e816(local_38,&local_20);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + -1;
        UNLOCK();
      }
      goto LAB_14705d543;
    }
  }
  uVar2 = 0;
  FUN_1415b7ec4(L"InElementHandle is not a valid handle.",2,0);
LAB_14705d543:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705d594 FUN_14705d594 body=308 status=ok
// SIG undefined FUN_14705d594(void)

void FUN_14705d594(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  plVar2 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_48 = 0x10100;
  uStack_44 = (uint)uStack_44._2_2_ << 0x10;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_48;
  iStack_54 = uStack_44;
  uStack_50 = (undefined4)uStack_40;
  uStack_4c = uStack_40._4_4_;
  uVar1 = FUN_14705d6ca(param_1,plVar2);
  *param_3 = uVar1;
  FUN_14704c977(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705d6ca FUN_14705d6ca body=142 status=ok
// SIG undefined FUN_14705d6ca(void)

undefined4 FUN_14705d6ca(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147051d3f(&local_58);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_48 = local_58;
  local_40 = local_50;
  uVar1 = FUN_14705eaa8(param_1);
  FUN_147057811(local_58,local_50);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705d760 FUN_14705d760 body=308 status=ok
// SIG undefined FUN_14705d760(void)

void FUN_14705d760(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  plVar2 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_48 = 0x10100;
  uStack_44 = (uint)uStack_44._2_2_ << 0x10;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_48;
  iStack_54 = uStack_44;
  uStack_50 = (undefined4)uStack_40;
  uStack_4c = uStack_40._4_4_;
  uVar1 = FUN_14705d896(param_1,plVar2);
  *param_3 = uVar1;
  FUN_14704c977(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705d896 FUN_14705d896 body=142 status=ok
// SIG undefined FUN_14705d896(void)

undefined4 FUN_14705d896(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147051d3f(&local_58);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_48 = local_58;
  local_40 = local_50;
  uVar1 = FUN_14705f2b0(param_1);
  FUN_147057811(local_58,local_50);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705d928 FUN_14705d928 body=75 status=ok
// SIG undefined FUN_14705d928(void)

void FUN_14705d928(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_14705d974(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705d974 FUN_14705d974 body=825 status=ok
// SIG undefined FUN_14705d974(void)

void FUN_14705d974(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  ulonglong *puVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 unaff_RBP;
  undefined7 uVar13;
  ulonglong uVar12;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_a8 [35];
  undefined1 local_85;
  int local_84;
  longlong *local_80;
  longlong local_78;
  undefined4 local_70;
  longlong *local_68;
  longlong lStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = (longlong *)0x0;
  lStack_60 = 0;
  local_58 = 0;
  FUN_14485c47a(&local_68,param_1);
  if ((*(byte *)(param_2 + 5) & 4) == 0) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      uVar7 = FUN_145c635e4();
      local_84 = 0;
      puVar4 = (ulonglong *)param_2[1];
      piVar1 = (int *)*puVar4 + 1;
      if ((int *)puVar4[1] < piVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_84,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_84);
        }
      }
      else {
        local_84 = *(int *)*puVar4;
        *puVar4 = (ulonglong)piVar1;
      }
      FUN_14705e3f6(&lStack_60,local_84);
      if (0 < local_84) {
        iVar14 = 0;
        do {
          local_85 = 0;
          puVar4 = (ulonglong *)param_2[1];
          puVar3 = (undefined1 *)*puVar4 + 1;
          uVar13 = (undefined7)((ulonglong)unaff_RBP >> 8);
          if ((undefined1 *)puVar4[1] < puVar3) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_85,1);
          }
          else {
            local_85 = *(undefined1 *)*puVar4;
            *puVar4 = (ulonglong)puVar3;
          }
          uVar12 = CONCAT71(uVar13,local_85);
          local_80 = (longlong *)FUN_1458987e8();
          if ((local_80 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(local_80);
          }
          lVar8 = FUN_147051a0c(uVar7,uVar12 & 0xffffffff,&local_80);
          if (lVar8 == 0) {
            plVar10 = (longlong *)0x0;
          }
          else {
            uVar9 = FUN_1458987e8();
            plVar10 = (longlong *)FUN_144718840(lVar8,uVar9);
          }
          uVar5 = local_85;
          unaff_RBP = CONCAT71(uVar13,local_85);
          (**(code **)(*plVar10 + 0x88))(plVar10,&local_80);
          if (local_80 != (longlong *)0x0) {
            *(undefined1 *)(local_80 + 1) = uVar5;
          }
          (**(code **)(*local_80 + 0x20))(local_80,param_2);
          uVar12 = local_58;
          lVar8 = (longlong)(int)local_58;
          uVar6 = (int)local_58 + 1;
          local_58 = CONCAT44(local_58._4_4_,uVar6);
          if (local_58._4_4_ < uVar6) {
            FUN_147062e7c(&lStack_60,uVar12 & 0xffffffff);
          }
          *(longlong **)(lStack_60 + lVar8 * 8) = local_80;
          iVar14 = iVar14 + 1;
        } while (iVar14 < local_84);
      }
      if (*(longlong *)(param_1 + 0x848) != 0) {
        FUN_14705d22a(param_1,&local_68);
      }
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x848) != 0) {
      FUN_14705c5b2(param_1,&local_80);
      local_68 = local_80;
      FUN_1470629ea(&lStack_60,&local_78);
      FUN_147062a3a(local_78,local_70);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    local_80 = (longlong *)CONCAT44(local_80._4_4_,(int)local_58);
    puVar4 = (ulonglong *)param_2[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_80,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_80);
      }
    }
    else {
      local_80 = (longlong *)CONCAT44(local_80._4_4_,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    lVar8 = lStack_60;
    lVar11 = (longlong)(int)local_58;
    if (lVar11 != 0) {
      lVar15 = 0;
      do {
        local_84 = CONCAT31(local_84._1_3_,*(undefined1 *)(*(longlong *)(lVar8 + lVar15) + 8));
        puVar4 = (ulonglong *)param_2[1];
        puVar3 = (undefined1 *)*puVar4 + 1;
        if ((undefined1 *)puVar4[1] < puVar3) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_84,1);
        }
        else {
          local_84 = CONCAT31(local_84._1_3_,*(undefined1 *)*puVar4);
          *puVar4 = (ulonglong)puVar3;
        }
        plVar10 = *(longlong **)(lVar8 + lVar15);
        (**(code **)(*plVar10 + 0x20))(plVar10,param_2);
        lVar15 = lVar15 + 8;
      } while (lVar11 * 8 != lVar15);
    }
  }
  FUN_147062a3a(lStack_60,local_58 & 0xffffffff);
  if (lStack_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705dcae FUN_14705dcae body=500 status=ok
// SIG undefined FUN_14705dcae(void)

void FUN_14705dcae(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *plStack_70;
  longlong local_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = 0;
  lVar3 = *param_2;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
    local_60 = lVar3;
  }
  do {
    uVar6 = FUN_14479d2ce(*param_3 + 0x10);
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    local_58 = FUN_1458d3d9a();
    if ((local_58 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_58);
    }
    FUN_14704f518(uVar6,&local_60,&local_58,&local_78);
    iVar7 = 3;
    if (plStack_70 != (longlong *)0x0 && local_78 != 0) {
      (**(code **)(*plStack_70 + 0x18))(plStack_70,&local_58,&local_78,1);
      if (local_60 != 0) {
        LOCK();
        *(int *)(local_60 + 0xc) = *(int *)(local_60 + 0xc) + -1;
        UNLOCK();
      }
      local_60 = local_58;
      if (local_58 != 0) {
        cVar5 = FUN_14704fce6(*param_3,local_58 + 8);
        iVar7 = 1;
        if (cVar5 != '\0') goto LAB_14705ddb9;
      }
      iVar7 = 0;
    }
LAB_14705ddb9:
    if (local_78 != 0) {
      LOCK();
      *(int *)(local_78 + 0xc) = *(int *)(local_78 + 0xc) + -1;
      UNLOCK();
    }
    if (iVar7 != 0) {
      if (local_60 != 0) {
        LOCK();
        *(int *)(local_60 + 0xc) = *(int *)(local_60 + 0xc) + -1;
        UNLOCK();
      }
      if (iVar7 == 3) {
        uVar6 = *param_5;
        local_78 = 0;
        lVar3 = *param_2;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
          UNLOCK();
          local_78 = lVar3;
        }
        FUN_14704fd42(uVar6,&local_78);
        if (local_78 != 0) {
          LOCK();
          *(int *)(local_78 + 0xc) = *(int *)(local_78 + 0xc) + -1;
          UNLOCK();
        }
      }
      plVar4 = (longlong *)param_3[1];
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
      if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 14705dea4 FUN_14705dea4 body=218 status=ok
// SIG undefined FUN_14705dea4(void)

undefined8
FUN_14705dea4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14a156270;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14a156200;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1470635c6(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705df80 FUN_14705df80 body=218 status=ok
// SIG undefined FUN_14705df80(void)

undefined8
FUN_14705df80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14a156350;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14a1562e0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14706398c(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705e05c FUN_14705e05c body=521 status=ok
// SIG undefined FUN_14705e05c(void)

void FUN_14705e05c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [8];
  undefined1 local_68;
  undefined7 local_67;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = 1;
  local_67 = 0;
  uStack_60 = 0;
  uStack_5f = 0;
  if (*(int *)(*(longlong *)(param_1 + 0x848) + 0x70) != 0) {
    FUN_147050064(*(longlong *)(param_1 + 0x848),local_70);
    FUN_14704fe4e(local_80,*(undefined8 *)(param_1 + 0x848),0);
    if ((longlong)*(int *)(param_2 + 1) != 0) {
      plVar6 = (longlong *)*param_2;
      lVar7 = (longlong)*(int *)(param_2 + 1) << 3;
      do {
        FUN_14705e4e4(param_1,&local_a8,plVar6);
        if ((local_88 == (longlong *)0x0 || local_98 == 0) || (local_a0 == 0 || local_a8 == 0)) {
LAB_14705e177:
          puVar5 = (undefined4 *)(*plVar6 + 8);
          if (*plVar6 == 0) {
            puVar5 = &DAT_14c99f64c;
          }
          cVar4 = FUN_14704fe7c(*(undefined8 *)(param_1 + 0x848),puVar5);
        }
        else {
          cVar4 = (**(code **)(*local_88 + 0x18))(local_88,&local_a8,&local_68);
          if (cVar4 == '\0') goto LAB_14705e177;
          local_58 = local_98;
          local_50 = local_90;
          if (local_90 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_90 + 1) = (int)local_90[1] + 1;
            UNLOCK();
          }
          cVar4 = (**(code **)(*local_88 + 0x28))(local_88,&local_a8,&local_58,&local_68);
        }
        if (cVar4 != '\0') {
          cVar4 = (**(code **)(*local_88 + 0x10))(local_88,&local_a8,&local_68);
          if (cVar4 != '\0') {
            local_58 = local_98;
            local_50 = local_90;
            if (local_90 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_90 + 1) = (int)local_90[1] + 1;
              UNLOCK();
            }
            (**(code **)(*local_88 + 0x20))(local_88,&local_a8,&local_58,&local_68);
          }
        }
        plVar3 = local_90;
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_90 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_90)(local_90);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        if (local_a8 != 0) {
          LOCK();
          *(int *)(local_a8 + 0xc) = *(int *)(local_a8 + 0xc) + -1;
          UNLOCK();
        }
        plVar6 = plVar6 + 1;
        lVar7 = lVar7 + -8;
      } while (lVar7 != 0);
    }
    FUN_14704fe68(local_80);
    FUN_14704ffdc(local_70);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705e266 FUN_14705e266 body=218 status=ok
// SIG undefined FUN_14705e266(void)

undefined8
FUN_14705e266(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14a156430;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14a1563c0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_147063d52(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705e342 FUN_14705e342 body=89 status=ok
// SIG undefined FUN_14705e342(void)

void FUN_14705e342(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_147064560(param_1 + 0x858,param_1);
  local_18 = param_1;
  FUN_1447cd2ec(param_1 + 0x828);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705e39c FUN_14705e39c body=89 status=ok
// SIG undefined FUN_14705e39c(void)

void FUN_14705e39c(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_147064560(param_1 + 0x870,param_1);
  local_18 = param_1;
  FUN_1447cd2ec(param_1 + 0x838);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705e3f6 FUN_14705e3f6 body=61 status=ok
// SIG undefined FUN_14705e3f6(void)

void FUN_14705e3f6(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    FUN_147062f02(param_1);
    return;
  }
  FUN_147062a3a(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 14705e434 FUN_14705e434 body=175 status=ok
// SIG undefined FUN_14705e434(void)

undefined4 FUN_14705e434(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14705e4e4(param_1,&local_48,param_2);
  uVar3 = 0;
  if ((((local_48 != 0) && (local_40 != 0)) && (local_38 != 0)) && (uVar3 = 0, local_28 != 0)) {
    uVar3 = FUN_14705e5f2(&local_48,param_3);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 0xc) = *(int *)(local_48 + 0xc) + -1;
    UNLOCK();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


