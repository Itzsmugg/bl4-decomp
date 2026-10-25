// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148686796 FUN_148686796 body=59 status=ok
// SIG undefined FUN_148686796(void)

undefined8 FUN_148686796(longlong *param_1)

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



// FUNCTION 148686836 FUN_148686836 body=55 status=ok
// SIG undefined FUN_148686836(void)

void FUN_148686836(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c0a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c0a8 = FUN_140002ddd(FUN_1464d410d,uVar1,L"GbxCondition_IsPlayer");
  }
  return;
}



// FUNCTION 1486868ee FUN_1486868ee body=59 status=ok
// SIG undefined FUN_1486868ee(void)

undefined8 FUN_1486868ee(longlong *param_1)

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



// FUNCTION 14868698e FUN_14868698e body=55 status=ok
// SIG undefined FUN_14868698e(void)

void FUN_14868698e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c0c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c0c0 = FUN_140002ddd(FUN_1464d41a3,uVar1,L"GbxCondition_IsLocalPlayer");
  }
  return;
}



// FUNCTION 148686a68 FUN_148686a68 body=59 status=ok
// SIG undefined FUN_148686a68(void)

undefined8 FUN_148686a68(longlong *param_1)

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



// FUNCTION 148686b08 FUN_148686b08 body=29 status=ok
// SIG undefined FUN_148686b08(void)

undefined8 FUN_148686b08(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148686b26 FUN_148686b26 body=55 status=ok
// SIG undefined FUN_148686b26(void)

void FUN_148686b26(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c0d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c0d8 = FUN_140002ddd(FUN_1464d4239,uVar1,L"GbxCondition_IsPlayerOrPet");
  }
  return;
}



// FUNCTION 148686b5e FUN_148686b5e body=51 status=ok
// SIG undefined FUN_148686b5e(void)

void FUN_148686b5e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x90);
  *param_2 = &PTR_FUN_14b103b80;
  *(undefined1 *)(param_2 + 8) = 0;
  *(undefined2 *)(param_2 + 0xf) = 0;
  return;
}



// FUNCTION 148686be6 FUN_148686be6 body=76 status=ok
// SIG undefined FUN_148686be6(void)

undefined1 FUN_148686be6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_148686d7e(param_2,param_3);
      param_3 = param_3 + 0x98;
      param_2 = param_2 + 0x98;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148686c5a FUN_148686c5a body=59 status=ok
// SIG undefined FUN_148686c5a(void)

undefined8 FUN_148686c5a(longlong *param_1)

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



// FUNCTION 148686ca6 FUN_148686ca6 body=79 status=ok
// SIG undefined FUN_148686ca6(void)

void FUN_148686ca6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x13) == '\x01') {
    *param_2 = &PTR_FUN_14b103b80;
    (*(code *)(&switchD_148704b3c::switchdataD_14b103c20)[*(byte *)(param_2 + 0x12)])(param_2 + 0xb)
    ;
    (*(code *)(&switchD_148704b3c::switchdataD_14b103c20)[*(byte *)(param_2 + 9)])(param_2 + 2);
    *(undefined1 *)(param_2 + 0x13) = 0;
  }
  return;
}



// FUNCTION 148686d44 FUN_148686d44 body=55 status=ok
// SIG undefined FUN_148686d44(void)

void FUN_148686d44(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c0f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c0f0 = FUN_140002ddd(FUN_1464d42cf,uVar1,L"GbxCondition_SkillComparison");
  }
  return;
}



// FUNCTION 148686d7e FUN_148686d7e body=397 status=ok
// SIG undefined FUN_148686d7e(void)

undefined8 * FUN_148686d7e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
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
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == param_1) {
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  }
  else {
    uStack_a0 = CONCAT71(uStack_a0._1_7_,*(byte *)(param_2 + 7));
    (*(code *)(&PTR_caseD_4_14b103c40)[*(byte *)(param_2 + 7)])(&local_d8,param_2);
    local_68 = (undefined4)local_a8;
    uStack_64 = local_a8._4_4_;
    uStack_60 = (undefined4)uStack_a0;
    uStack_5c = uStack_a0._4_4_;
    local_78 = (undefined4)local_b8;
    uStack_74 = local_b8._4_4_;
    uStack_70 = (undefined4)uStack_b0;
    uStack_6c = uStack_b0._4_4_;
    local_88 = (undefined4)local_c8;
    uStack_84 = local_c8._4_4_;
    uStack_80 = (undefined4)uStack_c0;
    uStack_7c = uStack_c0._4_4_;
    local_98 = (undefined4)local_d8;
    uStack_94 = local_d8._4_4_;
    uStack_90 = (undefined4)uStack_d0;
    uStack_8c = uStack_d0._4_4_;
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    uVar5 = param_1[4];
    uVar6 = param_1[5];
    uVar7 = param_1[6];
    uVar8 = param_1[7];
    *(undefined4 *)(param_1 + 6) = (undefined4)local_a8;
    *(undefined4 *)((longlong)param_1 + 0x34) = local_a8._4_4_;
    *(undefined4 *)(param_1 + 7) = (undefined4)uStack_a0;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_a0._4_4_;
    *(undefined4 *)(param_1 + 4) = (undefined4)local_b8;
    *(undefined4 *)((longlong)param_1 + 0x24) = local_b8._4_4_;
    *(undefined4 *)(param_1 + 5) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_b0._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)local_c8;
    *(undefined4 *)((longlong)param_1 + 0x14) = local_c8._4_4_;
    *(undefined4 *)(param_1 + 3) = (undefined4)uStack_c0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_c0._4_4_;
    *(undefined4 *)param_1 = (undefined4)local_d8;
    *(undefined4 *)((longlong)param_1 + 4) = local_d8._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_d0;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_d0._4_4_;
    local_d8 = uVar1;
    uStack_d0 = uVar2;
    local_c8 = uVar3;
    uStack_c0 = uVar4;
    local_b8 = uVar5;
    uStack_b0 = uVar6;
    local_a8 = uVar7;
    uStack_a0 = uVar8;
    (*(code *)(&switchD_148704b3c::switchdataD_14b103c20)[uVar8 & 0xff])(&local_d8);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    uStack_a0 = CONCAT71(uStack_a0._1_7_,*(byte *)(param_2 + 0x10));
    (*(code *)(&PTR_caseD_4_14b103c40)[*(byte *)(param_2 + 0x10)])(&local_d8,param_2 + 9);
    local_68 = (undefined4)local_a8;
    uStack_64 = local_a8._4_4_;
    uStack_60 = (undefined4)uStack_a0;
    uStack_5c = uStack_a0._4_4_;
    local_78 = (undefined4)local_b8;
    uStack_74 = local_b8._4_4_;
    uStack_70 = (undefined4)uStack_b0;
    uStack_6c = uStack_b0._4_4_;
    local_88 = (undefined4)local_c8;
    uStack_84 = local_c8._4_4_;
    uStack_80 = (undefined4)uStack_c0;
    uStack_7c = uStack_c0._4_4_;
    local_98 = (undefined4)local_d8;
    uStack_94 = local_d8._4_4_;
    uStack_90 = (undefined4)uStack_d0;
    uStack_8c = uStack_d0._4_4_;
    uVar1 = param_1[9];
    uVar2 = param_1[10];
    uVar3 = param_1[0xb];
    uVar4 = param_1[0xc];
    uVar5 = param_1[0xd];
    uVar6 = param_1[0xe];
    uVar7 = param_1[0xf];
    uVar8 = param_1[0x10];
    *(undefined4 *)(param_1 + 0xf) = (undefined4)local_a8;
    *(undefined4 *)((longlong)param_1 + 0x7c) = local_a8._4_4_;
    *(undefined4 *)(param_1 + 0x10) = (undefined4)uStack_a0;
    *(undefined4 *)((longlong)param_1 + 0x84) = uStack_a0._4_4_;
    *(undefined4 *)(param_1 + 0xd) = (undefined4)local_b8;
    *(undefined4 *)((longlong)param_1 + 0x6c) = local_b8._4_4_;
    *(undefined4 *)(param_1 + 0xe) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)param_1 + 0x74) = uStack_b0._4_4_;
    *(undefined4 *)(param_1 + 0xb) = (undefined4)local_c8;
    *(undefined4 *)((longlong)param_1 + 0x5c) = local_c8._4_4_;
    *(undefined4 *)(param_1 + 0xc) = (undefined4)uStack_c0;
    *(undefined4 *)((longlong)param_1 + 100) = uStack_c0._4_4_;
    *(undefined4 *)(param_1 + 9) = (undefined4)local_d8;
    *(undefined4 *)((longlong)param_1 + 0x4c) = local_d8._4_4_;
    *(undefined4 *)(param_1 + 10) = (undefined4)uStack_d0;
    *(undefined4 *)((longlong)param_1 + 0x54) = uStack_d0._4_4_;
    local_d8 = uVar1;
    uStack_d0 = uVar2;
    local_c8 = uVar3;
    uStack_c0 = uVar4;
    local_b8 = uVar5;
    uStack_b0 = uVar6;
    local_a8 = uVar7;
    uStack_a0 = uVar8;
    (*(code *)(&switchD_148704b3c::switchdataD_14b103c20)[uVar8 & 0xff])(&local_d8);
  }
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148686f12 caseD_5 body=104 status=ok
// SIG undefined caseD_5(void)

void switchD_148704b3c::caseD_5(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 2);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  _Src = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  return;
}



// FUNCTION 148686f7a caseD_6 body=32 status=ok
// SIG undefined caseD_6(void)

void switchD_148704b3c::caseD_6(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_144a7f96e();
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}



// FUNCTION 148687002 caseD_14 body=87 status=ok
// SIG undefined caseD_14(void)

undefined1
switchD_148704b3c::caseD_14(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      *(undefined1 *)(param_2 + -0x20) = *(undefined1 *)(param_3 + -0x20);
      FUN_148687156(param_2 + -0x18,param_3 + -0x18);
      FUN_145c56af0(param_2,param_3);
      *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_3 + 0x18);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148687082 caseD_1c body=59 status=ok
// SIG undefined caseD_1c(void)

undefined8 switchD_148704b3c::caseD_1c(longlong *param_1)

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



// FUNCTION 14868711e caseD_35 body=55 status=ok
// SIG undefined caseD_35(void)

void switchD_148704b3c::caseD_35(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c108 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c108 = FUN_140002ddd(FUN_1464d4365,uVar1,L"GbxCondition_SkillCondition");
  }
  return;
}



// FUNCTION 148687156 FUN_148687156 body=84 status=ok
// SIG undefined FUN_148687156(void)

longlong * FUN_148687156(longlong *param_1,longlong *param_2)

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



// FUNCTION 14868722c FUN_14868722c body=97 status=ok
// SIG undefined FUN_14868722c(void)

undefined8 FUN_14868722c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      *(undefined1 *)(param_2 + -0x20) = *(undefined1 *)(param_3 + -0x20);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      FUN_144983130(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x70;
      param_2 = param_2 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486872b6 FUN_1486872b6 body=59 status=ok
// SIG undefined FUN_1486872b6(void)

undefined8 FUN_1486872b6(longlong *param_1)

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



// FUNCTION 1486872fc FUN_1486872fc body=34 status=ok
// SIG undefined FUN_1486872fc(void)

void FUN_1486872fc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_145887742(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 14868736c FUN_14868736c body=55 status=ok
// SIG undefined FUN_14868736c(void)

void FUN_14868736c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c120 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c120 = FUN_140002ddd(FUN_1464d43fb,uVar1,L"GbxCondition_SkillParam");
  }
  return;
}



// FUNCTION 1486873dc FUN_1486873dc body=87 status=ok
// SIG undefined FUN_1486873dc(void)

undefined1 FUN_1486873dc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      *(undefined1 *)(param_2 + -0x20) = *(undefined1 *)(param_3 + -0x20);
      FUN_145c43818(param_2 + -0x18,param_3 + -0x18);
      FUN_145c56af0(param_2,param_3);
      *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_3 + 0x18);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14868745c FUN_14868745c body=59 status=ok
// SIG undefined FUN_14868745c(void)

undefined8 FUN_14868745c(longlong *param_1)

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



// FUNCTION 1486874f0 FUN_1486874f0 body=55 status=ok
// SIG undefined FUN_1486874f0(void)

void FUN_1486874f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c138 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c138 = FUN_140002ddd(FUN_1464d4491,uVar1,L"GbxCondition_SkillState");
  }
  return;
}



// FUNCTION 1486875f2 FUN_1486875f2 body=59 status=ok
// SIG undefined FUN_1486875f2(void)

undefined8 FUN_1486875f2(longlong *param_1)

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



// FUNCTION 148687692 FUN_148687692 body=29 status=ok
// SIG undefined FUN_148687692(void)

undefined8 FUN_148687692(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486876b0 FUN_1486876b0 body=55 status=ok
// SIG undefined FUN_1486876b0(void)

void FUN_1486876b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c150 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c150 = FUN_140002ddd(FUN_1464d4527,uVar1,L"GbxCondition_SkillStateSoft");
  }
  return;
}



// FUNCTION 148687720 FUN_148687720 body=80 status=ok
// SIG undefined FUN_148687720(void)

undefined1 FUN_148687720(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_140bee9ec(param_2 + 0x10,param_3 + 0x10);
    FUN_144a787a6(param_2 + 0x20,param_3 + 0x20);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 148687798 FUN_148687798 body=59 status=ok
// SIG undefined FUN_148687798(void)

undefined8 FUN_148687798(longlong *param_1)

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



// FUNCTION 1486877de FUN_1486877de body=34 status=ok
// SIG undefined FUN_1486877de(void)

void FUN_1486877de(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_145ae9974(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1486878f0 FUN_1486878f0 body=59 status=ok
// SIG undefined FUN_1486878f0(void)

undefined8 FUN_1486878f0(longlong *param_1)

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



// FUNCTION 148687990 FUN_148687990 body=29 status=ok
// SIG undefined FUN_148687990(void)

undefined8 FUN_148687990(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486879ae FUN_1486879ae body=55 status=ok
// SIG undefined FUN_1486879ae(void)

void FUN_1486879ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c1a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c1a0 = FUN_140002ddd(FUN_1464d4703,uVar1,L"GbxContextParam_Mission");
  }
  return;
}



// FUNCTION 148687a12 FUN_148687a12 body=60 status=ok
// SIG undefined FUN_148687a12(void)

undefined1 FUN_148687a12(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14867a274(param_2,param_3);
    *(undefined1 *)(param_2 + 0x48) = *(undefined1 *)(param_3 + 0x48);
    param_2 = param_2 + 0x50;
    param_3 = param_3 + 0x50;
  }
  return 1;
}



// FUNCTION 148687a76 FUN_148687a76 body=59 status=ok
// SIG undefined FUN_148687a76(void)

undefined8 FUN_148687a76(longlong *param_1)

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



// FUNCTION 148687abc FUN_148687abc body=32 status=ok
// SIG undefined FUN_148687abc(void)

void FUN_148687abc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_1411f306c(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148687b76 FUN_148687b76 body=59 status=ok
// SIG undefined FUN_148687b76(void)

undefined8 FUN_148687b76(longlong *param_1)

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



// FUNCTION 148687c9c FUN_148687c9c body=59 status=ok
// SIG undefined FUN_148687c9c(void)

undefined8 FUN_148687c9c(longlong *param_1)

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



// FUNCTION 148687d3c FUN_148687d3c body=55 status=ok
// SIG undefined FUN_148687d3c(void)

void FUN_148687d3c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c280 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c280 = FUN_140002ddd(FUN_1464d4ab1,uVar1,L"GbxCurrencyValueResolver");
  }
  return;
}



// FUNCTION 148687db4 FUN_148687db4 body=60 status=ok
// SIG undefined FUN_148687db4(void)

undefined8 FUN_148687db4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14861a322(param_2,param_3);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 148687e18 FUN_148687e18 body=59 status=ok
// SIG undefined FUN_148687e18(void)

undefined8 FUN_148687e18(longlong *param_1)

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



// FUNCTION 148687eba FUN_148687eba body=97 status=ok
// SIG undefined FUN_148687eba(void)

void FUN_148687eba(undefined8 param_1,undefined8 *param_2)

{
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b104ee0;
  FUN_144a5dc74(param_2 + 3);
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  return;
}



// FUNCTION 148687f1c FUN_148687f1c body=67 status=ok
// SIG undefined FUN_148687f1c(void)

void FUN_148687f1c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b104ee0;
  FUN_144a5dc74(param_2 + 3);
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  return;
}



// FUNCTION 148687f84 FUN_148687f84 body=54 status=ok
// SIG undefined FUN_148687f84(void)

undefined1 FUN_148687f84(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148688144(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 148687fe2 FUN_148687fe2 body=59 status=ok
// SIG undefined FUN_148687fe2(void)

undefined8 FUN_148687fe2(longlong *param_1)

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



// FUNCTION 148688028 FUN_148688028 body=34 status=ok
// SIG undefined FUN_148688028(void)

void FUN_148688028(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_1486880fa(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 14868809c FUN_14868809c body=38 status=ok
// SIG undefined FUN_14868809c(void)

undefined8 FUN_14868809c(undefined8 param_1,int param_2)

{
  FUN_1486880fa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486880c2 FUN_1486880c2 body=55 status=ok
// SIG undefined FUN_1486880c2(void)

void FUN_1486880c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c2b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c2b0 = FUN_140002ddd(FUN_1464d4bdd,uVar1,L"GbxCustomizationDef");
  }
  return;
}



// FUNCTION 1486880fa FUN_1486880fa body=74 status=ok
// SIG undefined FUN_1486880fa(void)

void FUN_1486880fa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b104ee0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 148688144 FUN_148688144 body=124 status=ok
// SIG undefined FUN_148688144(void)

longlong FUN_148688144(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  plVar1 = *(longlong **)(param_2 + 0x18);
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x18) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  FUN_1486881c0(param_1 + 0x30,param_2 + 0x30);
  FUN_14184443c(param_1 + 0x40,param_2 + 0x40);
  return param_1;
}



// FUNCTION 1486881c0 FUN_1486881c0 body=79 status=ok
// SIG undefined FUN_1486881c0(void)

undefined8 * FUN_1486881c0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148688210(param_1,iVar1);
      FUN_148688272(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148688210 FUN_148688210 body=98 status=ok
// SIG undefined FUN_148688210(void)

void FUN_148688210(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148688272 FUN_148688272 body=58 status=ok
// SIG undefined FUN_148688272(void)

void FUN_148688272(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1486195d6(param_1,param_2);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 1486882ae FUN_1486882ae body=104 status=ok
// SIG undefined FUN_1486882ae(void)

undefined8 FUN_1486882ae(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_148815c9a(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148688318 FUN_148688318 body=28 status=ok
// SIG undefined FUN_148688318(void)

undefined8 FUN_148688318(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148688346 FUN_148688346 body=37 status=ok
// SIG undefined FUN_148688346(void)

void FUN_148688346(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x88);
  FUN_148688508(param_2);
  return;
}



// FUNCTION 148688398 FUN_148688398 body=120 status=ok
// SIG undefined FUN_148688398(void)

undefined1 FUN_148688398(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + 8 + lVar10);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 8 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      FUN_148632524(param_2 + 0x18 + lVar10,param_3 + 0x18 + lVar10);
      puVar3 = (undefined8 *)(param_3 + 0x68 + lVar10);
      uVar9 = puVar3[1];
      puVar1 = (undefined4 *)(param_3 + 0x78 + lVar10);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar4 = (undefined8 *)(param_2 + 0x68 + lVar10);
      *puVar4 = *puVar3;
      puVar4[1] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 0x78 + lVar10);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      lVar10 = lVar10 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148688438 FUN_148688438 body=59 status=ok
// SIG undefined FUN_148688438(void)

undefined8 FUN_148688438(longlong *param_1)

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



// FUNCTION 148688484 FUN_148688484 body=54 status=ok
// SIG undefined FUN_148688484(void)

void FUN_148688484(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x11) == '\x01') {
    *param_2 = &PTR_FUN_14b105bb0;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x11) = 0;
  }
  return;
}



// FUNCTION 148688508 FUN_148688508 body=100 status=ok
// SIG undefined FUN_148688508(void)

void FUN_148688508(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b105bb0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(byte *)((longlong)param_1 + 0x19) = *(byte *)((longlong)param_1 + 0x19) & 0xf0;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 8) = 0x3007;
  param_1[9] = 0;
  param_1[10] = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 3;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x100000000;
  *(byte *)((longlong)param_1 + 100) = *(byte *)((longlong)param_1 + 100) & 0xfc;
  param_1[0xd] = 0xffffffff00000000;
  param_1[0xe] = 0xbf800000;
  param_1[0xf] = 0xffffffff00000000;
  param_1[0x10] = 0xffffffff;
  return;
}



// FUNCTION 14868860a FUN_14868860a body=54 status=ok
// SIG undefined FUN_14868860a(void)

undefined1 FUN_14868860a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148632524(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 148688668 FUN_148688668 body=59 status=ok
// SIG undefined FUN_148688668(void)

undefined8 FUN_148688668(longlong *param_1)

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



// FUNCTION 1486886ae FUN_1486886ae body=38 status=ok
// SIG undefined FUN_1486886ae(void)

void FUN_1486886ae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1486887fc FUN_1486887fc body=59 status=ok
// SIG undefined FUN_1486887fc(void)

undefined8 FUN_1486887fc(longlong *param_1)

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



// FUNCTION 148688848 FUN_148688848 body=44 status=ok
// SIG undefined FUN_148688848(void)

void FUN_148688848(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    if (*(longlong *)(param_2 + 0x48) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 1486888ec FUN_1486888ec body=54 status=ok
// SIG undefined FUN_1486888ec(void)

undefined1 FUN_1486888ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486889ea(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14868894a FUN_14868894a body=59 status=ok
// SIG undefined FUN_14868894a(void)

undefined8 FUN_14868894a(longlong *param_1)

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



// FUNCTION 1486889ea FUN_1486889ea body=91 status=ok
// SIG undefined FUN_1486889ea(void)

longlong * FUN_1486889ea(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
    }
  }
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 148688a7a FUN_148688a7a body=63 status=ok
// SIG undefined FUN_148688a7a(void)

undefined1 FUN_148688a7a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_143c4ef8a(param_2,param_3);
    param_3 = param_3 + 0x548;
    param_2 = param_2 + 0x548;
  }
  return 1;
}



// FUNCTION 148688ae2 FUN_148688ae2 body=59 status=ok
// SIG undefined FUN_148688ae2(void)

undefined8 FUN_148688ae2(longlong *param_1)

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



// FUNCTION 148688b2e FUN_148688b2e body=38 status=ok
// SIG undefined FUN_148688b2e(void)

void FUN_148688b2e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x548) == '\x01') {
    FUN_140d9830c(param_2);
    *(undefined1 *)(param_2 + 0x548) = 0;
  }
  return;
}



// FUNCTION 148688ba2 FUN_148688ba2 body=93 status=ok
// SIG undefined FUN_148688ba2(void)

undefined8 * FUN_148688ba2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14095cb81(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148688ed6(param_1,iVar1);
      FUN_14575a447(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148688c00 FUN_148688c00 body=79 status=ok
// SIG undefined FUN_148688c00(void)

undefined8 * FUN_148688c00(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1486891a2(param_1,iVar1);
      FUN_148689204(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148688c50 FUN_148688c50 body=122 status=ok
// SIG undefined FUN_148688c50(void)

longlong FUN_148688c50(longlong param_1,longlong param_2)

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
    FUN_148688d28(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148688cca FUN_148688cca body=93 status=ok
// SIG undefined FUN_148688cca(void)

undefined8 * FUN_148688cca(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14095c787(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148688f9a(param_1,iVar1);
      FUN_148689009(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148688d28 FUN_148688d28 body=216 status=ok
// SIG undefined FUN_148688d28(void)

undefined8 * FUN_148688d28(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14095c7ca(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140eca382(param_1);
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
          FUN_148688e00(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 0x1e) = *(undefined8 *)(puVar4 + 0x1e);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0x20;
        puVar6 = puVar6 + 0x20;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148688e00 FUN_148688e00 body=213 status=ok
// SIG undefined FUN_148688e00(void)

undefined8 * FUN_148688e00(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  param_1[2] = 0;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar4 = *(undefined4 *)(param_2 + 4);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
  FUN_144a8b00e(param_1 + 5,param_2 + 5);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar4 = *(undefined4 *)(param_2 + 8);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar6 = *(undefined4 *)(param_2 + 9);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x4c);
  uVar8 = *(undefined4 *)(param_2 + 10);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 8) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar5;
  *(undefined4 *)(param_1 + 9) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar7;
  *(undefined4 *)(param_1 + 10) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar9;
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  uVar2 = param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_148688ed6(param_1 + 0xb,iVar1,0);
    FUN_14575a447(param_1[0xb],uVar2,iVar1);
  }
  param_1[0xd] = 0;
  iVar1 = *(int *)(param_2 + 0xe);
  _Src = (void *)param_2[0xd];
  *(int *)(param_1 + 0xe) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  else {
    FUN_148688f38(param_1 + 0xd,iVar1,0);
    memcpy((void *)param_1[0xd],_Src,(longlong)iVar1 << 7);
  }
  return param_1;
}



// FUNCTION 148688ed6 FUN_148688ed6 body=98 status=ok
// SIG undefined FUN_148688ed6(void)

void FUN_148688ed6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148688f38 FUN_148688f38 body=98 status=ok
// SIG undefined FUN_148688f38(void)

void FUN_148688f38(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 7,0x10);
    iVar1 = (int)(uVar2 >> 7);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x80,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148688f9a FUN_148688f9a body=111 status=ok
// SIG undefined FUN_148688f9a(void)

void FUN_148688f9a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x68,8);
    iVar2 = (int)(uVar1 / 0x68);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x68,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148689009 FUN_148689009 body=52 status=ok
// SIG undefined FUN_148689009(void)

void FUN_148689009(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14868903e(param_1,param_2);
    param_1 = param_1 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return;
}



// FUNCTION 14868903e FUN_14868903e body=114 status=ok
// SIG undefined FUN_14868903e(void)

longlong * FUN_14868903e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_1486890b0(param_1 + 2,param_2 + 2);
  *(int *)(param_1 + 0xc) = (int)param_2[0xc];
  return param_1;
}



// FUNCTION 1486890b0 FUN_1486890b0 body=122 status=ok
// SIG undefined FUN_1486890b0(void)

longlong FUN_1486890b0(longlong param_1,longlong param_2)

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
    FUN_14868912a(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14868912a FUN_14868912a body=119 status=ok
// SIG undefined FUN_14868912a(void)

undefined8 * FUN_14868912a(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14095ca34(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140171ad2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x14);
    }
  }
  return param_1;
}



// FUNCTION 1486891a2 FUN_1486891a2 body=98 status=ok
// SIG undefined FUN_1486891a2(void)

void FUN_1486891a2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148689204 FUN_148689204 body=52 status=ok
// SIG undefined FUN_148689204(void)

void FUN_148689204(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148689238(param_1,param_2);
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return;
}



// FUNCTION 148689238 FUN_148689238 body=88 status=ok
// SIG undefined FUN_148689238(void)

longlong * FUN_148689238(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 148689292 FUN_148689292 body=92 status=ok
// SIG undefined FUN_148689292(void)

void FUN_148689292(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0x3002;
  param_2[3] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0x200000000;
  FUN_1405c5fa2();
  param_2[0xd] = &DAT_14cb769e8;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xc] = &PTR_FUN_14b0394b0;
  return;
}



// FUNCTION 14868932c FUN_14868932c body=59 status=ok
// SIG undefined FUN_14868932c(void)

undefined8 FUN_14868932c(longlong *param_1)

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



// FUNCTION 148689378 FUN_148689378 body=38 status=ok
// SIG undefined FUN_148689378(void)

void FUN_148689378(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_14111c174(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 148689434 FUN_148689434 body=59 status=ok
// SIG undefined FUN_148689434(void)

undefined8 FUN_148689434(longlong *param_1)

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



// FUNCTION 148689480 FUN_148689480 body=38 status=ok
// SIG undefined FUN_148689480(void)

void FUN_148689480(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x140) == '\x01') {
    FUN_141846ab8(param_2);
    *(undefined1 *)(param_2 + 0x140) = 0;
  }
  return;
}



// FUNCTION 1486894f6 FUN_1486894f6 body=190 status=ok
// SIG undefined FUN_1486894f6(void)

void FUN_1486894f6(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14485c47a(param_2,0);
  param_2[1] = 0x3ff0000000000000;
  param_2[2] = 0x3ff0000000000000;
  param_2[3] = 0x3ff0000000000000;
  *(undefined1 *)(param_2 + 4) = 0;
  param_2[5] = &PTR_FUN_14b00bdf8;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x6c) = 0;
  param_2[0xf] = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  *(undefined4 *)(param_2 + 0x13) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_2 + 0x9c) = 0x404;
  param_2[6] = &DAT_14a176f00;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  *(undefined2 *)((longlong)param_2 + 0xe1) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0xe3) = 1;
  return;
}



// FUNCTION 1486895b4 FUN_1486895b4 body=190 status=ok
// SIG undefined FUN_1486895b4(void)

void FUN_1486895b4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14485c47a(param_2,0);
  param_2[1] = 0x3ff0000000000000;
  param_2[2] = 0x3ff0000000000000;
  param_2[3] = 0x3ff0000000000000;
  *(undefined1 *)(param_2 + 4) = 0;
  param_2[5] = &PTR_FUN_14b00bdf8;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x6c) = 0;
  param_2[0xf] = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  *(undefined4 *)(param_2 + 0x13) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_2 + 0x9c) = 0x404;
  param_2[6] = &DAT_14a176f00;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  *(undefined2 *)((longlong)param_2 + 0xe1) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0xe3) = 1;
  return;
}



// FUNCTION 148689692 FUN_148689692 body=252 status=ok
// SIG undefined FUN_148689692(void)

undefined8 FUN_148689692(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      *(undefined1 *)(param_2 + 0x20 + lVar10) = *(undefined1 *)(param_3 + 0x20 + lVar10);
      puVar1 = (undefined4 *)(param_3 + lVar10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x10 + lVar10);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x10 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + lVar10);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      *(undefined4 *)(param_2 + 0x98 + lVar10) = *(undefined4 *)(param_3 + 0x98 + lVar10);
      *(undefined2 *)(param_2 + 0x9c + lVar10) = *(undefined2 *)(param_3 + 0x9c + lVar10);
      FUN_14093c00e(param_2 + lVar10 + 0xa0,param_3 + lVar10 + 0xa0);
      *(undefined8 *)(param_2 + 0xb0 + lVar10) = *(undefined8 *)(param_3 + 0xb0 + lVar10);
      puVar1 = (undefined4 *)(param_3 + 0xb8 + lVar10);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0xb8 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      FUN_144a787a6(param_2 + lVar10 + 200,param_3 + lVar10 + 200);
      *(undefined8 *)(param_2 + 0xd8 + lVar10) = *(undefined8 *)(param_3 + 0xd8 + lVar10);
      *(undefined4 *)(param_2 + 0xe0 + lVar10) = *(undefined4 *)(param_3 + 0xe0 + lVar10);
      lVar10 = lVar10 + 0xe8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486897b6 FUN_1486897b6 body=59 status=ok
// SIG undefined FUN_1486897b6(void)

undefined8 FUN_1486897b6(longlong *param_1)

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



// FUNCTION 148689802 FUN_148689802 body=39 status=ok
// SIG undefined FUN_148689802(void)

void FUN_148689802(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_14051f4c4(param_2 + 0x28);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 14868987a FUN_14868987a body=66 status=ok
// SIG undefined FUN_14868987a(void)

undefined8 * FUN_14868987a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b105b00;
  if (param_1[8] != 0) {
    FUN_140872868(param_1);
  }
  FUN_1403d7c6c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486898d0 FUN_1486898d0 body=1884 status=ok
// SIG undefined FUN_1486898d0(void)

void FUN_1486898d0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_368 [32];
  undefined4 local_348;
  undefined1 *local_340;
  undefined8 *local_338;
  undefined8 *local_330;
  undefined8 local_328;
  undefined8 *local_320;
  undefined4 local_318;
  undefined8 *local_310;
  undefined8 *local_308;
  undefined4 local_300;
  undefined1 local_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_238;
  int local_230;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined1 local_170 [4];
  undefined4 local_16c;
  undefined4 local_cc;
  undefined4 local_a0;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_368;
  local_40 = 0;
  FUN_1446f4b16();
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
  local_68 = 0;
  local_60 = 0x3005;
  local_58 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_6c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  memset(local_170,0,0x100);
  local_a0 = 0xffffffff;
  local_16c = 0x3f800000;
  local_cc = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_170);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_170);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_188 = 0;
  local_180 = 0x3002;
  local_178 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_188);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_188);
  }
  local_1a0 = 0;
  local_198 = 0x3003;
  local_190 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a0);
  }
  local_1a8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a8);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c0);
  }
  local_1c4 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c4);
  }
  FUN_141526700(&local_210);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_210);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_210);
  }
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_228);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_228);
  }
  local_22c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_22c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_22c);
  }
  local_230 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_230);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_230);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_308 = &local_248;
  local_248 = local_228;
  local_240 = local_220;
  local_238 = 0;
  local_310 = &local_290;
  local_290 = local_210;
  local_288 = local_208;
  local_280 = local_200;
  local_278 = local_1f8;
  local_270 = 0;
  local_268 = local_1e8;
  uStack_260 = uStack_1e0;
  local_258 = local_1d8;
  uStack_250 = uStack_1d0;
  local_320 = &local_2a8;
  local_2a8 = local_1c0;
  uStack_2a0 = uStack_1b8;
  local_298 = local_1b0;
  local_330 = &local_2c0;
  local_2c0 = local_1a0;
  local_2b8 = local_198;
  local_2b0 = 0;
  local_338 = &local_2d8;
  local_2d8 = local_188;
  local_2d0 = local_180;
  local_2c8 = 0;
  local_2f0 = local_68;
  local_2e8 = local_60;
  local_2e0 = 0;
  local_2f8 = local_230 != 0;
  local_340 = local_170;
  if (puVar1 != (undefined1 *)0x0) {
    local_340 = puVar1;
  }
  local_300 = local_22c;
  local_318 = local_1c4;
  local_328 = local_1a8;
  local_348 = local_6c;
  FUN_143d1125a(local_40,local_48,local_50);
  if ((local_38 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14868a02e FUN_14868a02e body=1028 status=ok
// SIG undefined FUN_14868a02e(void)

void FUN_14868a02e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_148 [32];
  undefined4 *local_128;
  longlong *local_120;
  undefined4 *local_118;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  uint uStack_d4;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong lStack_88;
  longlong local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_30 = 0;
  local_28 = 0x4000;
  local_20 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = 0;
  local_40 = 0x3005;
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
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_78 = 0;
  uStack_74 = uStack_74 & 0xffffff00;
  uStack_70 = 0;
  uStack_6c = uStack_6c & 0xffffff00;
  uStack_5c = 0;
  uStack_60 = uStack_60 & 0xffffff00;
  local_68 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_80 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  plVar1 = &local_80;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_98 = 0xffffffffffffffff;
  uStack_90 = 0;
  lStack_88 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b8 = (undefined4)local_98;
  uStack_b4 = local_98._4_4_;
  uStack_b0 = (undefined4)uStack_90;
  uStack_ac = uStack_90._4_4_;
  local_a8 = lStack_88;
  if ((lStack_88 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_128 = &local_d8;
  local_c8 = (undefined4)local_68;
  uStack_c4 = local_68._4_4_;
  uStack_c0 = uStack_60;
  uStack_bc = uStack_5c;
  local_d8 = local_78;
  uStack_d4 = uStack_74;
  uStack_d0 = uStack_70;
  uStack_cc = uStack_6c;
  local_f0 = local_48;
  local_e8 = local_40;
  local_e0 = 0;
  local_108 = local_30;
  local_100 = local_28;
  local_f8 = 0;
  local_118 = &local_b8;
  local_120 = plVar1;
  FUN_148825f88(&local_108,&local_f0,local_50,local_58);
  if ((DAT_14c950c29 == 1) && (*plVar1 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_18 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14868a434 FUN_14868a434 body=1113 status=ok
// SIG undefined FUN_14868a434(void)

void FUN_14868a434(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_208 [32];
  undefined4 *local_1e8;
  longlong *local_1e0;
  undefined4 *local_1d8;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198 [12];
  undefined4 local_138;
  uint uStack_134;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong lStack_e8;
  longlong local_e0;
  undefined4 local_d8;
  uint uStack_d4;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined8 local_c8;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8 [2];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_208;
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
  local_50 = 0;
  local_48 = 0x3005;
  local_40 = 0;
  FUN_1446ef920();
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
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3ff00000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0x3ff00000;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  local_d8 = 0;
  uStack_d4 = uStack_d4 & 0xffffff00;
  uStack_d0 = 0;
  uStack_cc = uStack_cc & 0xffffff00;
  uStack_bc = 0;
  uStack_c0 = uStack_c0 & 0xffffff00;
  local_c8 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  local_e0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  plVar2 = &local_e0;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_f8 = 0xffffffffffffffff;
  uStack_f0 = 0;
  lStack_e8 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_118 = (undefined4)local_f8;
  uStack_114 = local_f8._4_4_;
  uStack_110 = (undefined4)uStack_f0;
  uStack_10c = uStack_f0._4_4_;
  local_108 = lStack_e8;
  if ((lStack_e8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_1e8 = &local_138;
  local_128 = (undefined4)local_c8;
  uStack_124 = local_c8._4_4_;
  uStack_120 = uStack_c0;
  uStack_11c = uStack_bc;
  local_138 = local_d8;
  uStack_134 = uStack_d4;
  uStack_130 = uStack_d0;
  uStack_12c = uStack_cc;
  puVar3 = local_b8;
  puVar4 = local_198;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_1b0 = local_50;
  local_1a8 = local_48;
  local_1a0 = 0;
  local_1c8 = local_38;
  local_1c0 = local_30;
  local_1b8 = 0;
  local_1d8 = &local_118;
  local_1e0 = plVar2;
  FUN_148825de8(&local_1c8,&local_1b0,local_58);
  if ((DAT_14c950c29 == 1) && (*plVar2 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_20 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14868a896 FUN_14868a896 body=45 status=ok
// SIG undefined FUN_14868a896(void)

void FUN_14868a896(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1488265e4();
  FUN_14868a8c4(param_3,uVar1);
  return;
}



// FUNCTION 14868a8c4 FUN_14868a8c4 body=95 status=ok
// SIG undefined FUN_14868a8c4(void)

undefined8 * FUN_14868a8c4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145d32a2e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14868f0bc(param_1,iVar1);
      FUN_14868f11e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14868a93c FUN_14868a93c body=104 status=ok
// SIG undefined FUN_14868a93c(void)

void FUN_14868a93c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb5c538) {
    FUN_144b3d300(&DAT_14cb5c538);
    if (DAT_14cb5c538 == -1) {
      FUN_1446f470e(&DAT_14cb5c530,L"RandomSeed",1);
      _Init_thread_footer(&DAT_14cb5c538);
      return;
    }
  }
  return;
}



// FUNCTION 14868aa02 FUN_14868aa02 body=845 status=ok
// SIG undefined FUN_14868aa02(void)

void FUN_14868aa02(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar3 = local_34;
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
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  iVar2 = local_3c;
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
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  iVar1 = local_48;
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
  local_88 = iVar1 != 0;
  local_78 = local_50;
  local_80 = local_4c;
  local_90 = local_44;
  local_98 = local_40;
  FUN_148827734(&local_70,iVar3 != 0,local_38,iVar2 != 0);
  param_3[4] = local_60;
  param_3[5] = uStack_5c;
  param_3[6] = uStack_58;
  param_3[7] = uStack_54;
  *param_3 = local_70;
  param_3[1] = uStack_6c;
  param_3[2] = uStack_68;
  param_3[3] = uStack_64;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14868ad54 FUN_14868ad54 body=180 status=ok
// SIG undefined FUN_14868ad54(void)

void FUN_14868ad54(undefined8 param_1,longlong param_2)

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
  FUN_1487c22c4(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14868ae68 FUN_14868ae68 body=50 status=ok
// SIG undefined FUN_14868ae68(void)

void FUN_14868ae68(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x718) + 0x38))(param_1 + 0x718);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14868ae9a FUN_14868ae9a body=168 status=ok
// SIG undefined FUN_14868ae9a(void)

void FUN_14868ae9a(longlong param_1,longlong param_2)

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
  (**(code **)(*(longlong *)(param_1 + 0x718) + 0x48))(param_1 + 0x718,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14868af4e FUN_14868af4e body=45 status=ok
// SIG undefined FUN_14868af4e(void)

longlong FUN_14868af4e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868af7c FUN_14868af7c body=45 status=ok
// SIG undefined FUN_14868af7c(void)

longlong FUN_14868af7c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868afaa FUN_14868afaa body=45 status=ok
// SIG undefined FUN_14868afaa(void)

longlong FUN_14868afaa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868afd8 FUN_14868afd8 body=39 status=ok
// SIG undefined FUN_14868afd8(void)

bool FUN_14868afd8(longlong param_1)

{
  FUN_1405f85e0(param_1 + 0x3f0);
  return (byte)(*(char *)(param_1 + 0x4f1) - 3U) < 2;
}



// FUNCTION 14868b016 FUN_14868b016 body=48 status=ok
// SIG undefined FUN_14868b016(void)

longlong FUN_14868b016(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_145d32928(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b04e FUN_14868b04e body=48 status=ok
// SIG undefined FUN_14868b04e(void)

longlong FUN_14868b04e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_145d32928(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b08e FUN_14868b08e body=48 status=ok
// SIG undefined FUN_14868b08e(void)

longlong FUN_14868b08e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_145d32928(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b0c6 FUN_14868b0c6 body=48 status=ok
// SIG undefined FUN_14868b0c6(void)

longlong FUN_14868b0c6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_145d32928(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b0fe FUN_14868b0fe body=48 status=ok
// SIG undefined FUN_14868b0fe(void)

longlong FUN_14868b0fe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_145d32928(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b136 FUN_14868b136 body=154 status=ok
// SIG undefined FUN_14868b136(void)

undefined8 FUN_14868b136(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1406c9d00(param_1 + 0x30,&local_58);
  if (local_50 == 0) {
    local_50 = FUN_140927942();
  }
  uVar1 = FUN_14477b664(local_50);
  local_40 = local_58;
  uVar1 = FUN_14477b664(uVar1);
  local_38 = FUN_14477b664(uVar1);
  local_30 = local_48;
  FUN_1411f1bdc(param_2,&local_40);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14868b1d2 FUN_14868b1d2 body=48 status=ok
// SIG undefined FUN_14868b1d2(void)

longlong FUN_14868b1d2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c8;
  FUN_145d32928(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b20a FUN_14868b20a body=48 status=ok
// SIG undefined FUN_14868b20a(void)

longlong FUN_14868b20a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d0;
  FUN_145d32928(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b242 FUN_14868b242 body=48 status=ok
// SIG undefined FUN_14868b242(void)

longlong FUN_14868b242(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d8;
  FUN_145d32928(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b27a FUN_14868b27a body=48 status=ok
// SIG undefined FUN_14868b27a(void)

longlong FUN_14868b27a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3e0;
  FUN_145d32928(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b2b2 FUN_14868b2b2 body=48 status=ok
// SIG undefined FUN_14868b2b2(void)

longlong FUN_14868b2b2(longlong param_1,int param_2)

{
  param_1 = param_1 + -1000;
  FUN_145d32928(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b308 FUN_14868b308 body=45 status=ok
// SIG undefined FUN_14868b308(void)

longlong FUN_14868b308(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b336 FUN_14868b336 body=45 status=ok
// SIG undefined FUN_14868b336(void)

longlong FUN_14868b336(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b364 FUN_14868b364 body=45 status=ok
// SIG undefined FUN_14868b364(void)

longlong FUN_14868b364(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b3b8 FUN_14868b3b8 body=48 status=ok
// SIG undefined FUN_14868b3b8(void)

longlong FUN_14868b3b8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b3f0 FUN_14868b3f0 body=48 status=ok
// SIG undefined FUN_14868b3f0(void)

longlong FUN_14868b3f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b428 FUN_14868b428 body=48 status=ok
// SIG undefined FUN_14868b428(void)

longlong FUN_14868b428(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b460 FUN_14868b460 body=48 status=ok
// SIG undefined FUN_14868b460(void)

longlong FUN_14868b460(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b498 FUN_14868b498 body=48 status=ok
// SIG undefined FUN_14868b498(void)

longlong FUN_14868b498(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b4e0 FUN_14868b4e0 body=48 status=ok
// SIG undefined FUN_14868b4e0(void)

longlong FUN_14868b4e0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b518 FUN_14868b518 body=48 status=ok
// SIG undefined FUN_14868b518(void)

longlong FUN_14868b518(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b550 FUN_14868b550 body=48 status=ok
// SIG undefined FUN_14868b550(void)

longlong FUN_14868b550(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b588 FUN_14868b588 body=48 status=ok
// SIG undefined FUN_14868b588(void)

longlong FUN_14868b588(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b5c0 FUN_14868b5c0 body=48 status=ok
// SIG undefined FUN_14868b5c0(void)

longlong FUN_14868b5c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b610 FUN_14868b610 body=48 status=ok
// SIG undefined FUN_14868b610(void)

longlong FUN_14868b610(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b648 FUN_14868b648 body=48 status=ok
// SIG undefined FUN_14868b648(void)

longlong FUN_14868b648(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b680 FUN_14868b680 body=48 status=ok
// SIG undefined FUN_14868b680(void)

longlong FUN_14868b680(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b6b8 FUN_14868b6b8 body=48 status=ok
// SIG undefined FUN_14868b6b8(void)

longlong FUN_14868b6b8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b6f0 FUN_14868b6f0 body=48 status=ok
// SIG undefined FUN_14868b6f0(void)

longlong FUN_14868b6f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b728 FUN_14868b728 body=48 status=ok
// SIG undefined FUN_14868b728(void)

longlong FUN_14868b728(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b760 FUN_14868b760 body=48 status=ok
// SIG undefined FUN_14868b760(void)

longlong FUN_14868b760(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b798 FUN_14868b798 body=48 status=ok
// SIG undefined FUN_14868b798(void)

longlong FUN_14868b798(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b7d0 FUN_14868b7d0 body=48 status=ok
// SIG undefined FUN_14868b7d0(void)

longlong FUN_14868b7d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b808 FUN_14868b808 body=48 status=ok
// SIG undefined FUN_14868b808(void)

longlong FUN_14868b808(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b840 FUN_14868b840 body=48 status=ok
// SIG undefined FUN_14868b840(void)

longlong FUN_14868b840(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b878 FUN_14868b878 body=48 status=ok
// SIG undefined FUN_14868b878(void)

longlong FUN_14868b878(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b8b8 FUN_14868b8b8 body=48 status=ok
// SIG undefined FUN_14868b8b8(void)

longlong FUN_14868b8b8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a60;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b8f8 FUN_14868b8f8 body=48 status=ok
// SIG undefined FUN_14868b8f8(void)

longlong FUN_14868b8f8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a68;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b93c FUN_14868b93c body=48 status=ok
// SIG undefined FUN_14868b93c(void)

longlong FUN_14868b93c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a88;
  FUN_1458e0158(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b96c FUN_14868b96c body=45 status=ok
// SIG undefined FUN_14868b96c(void)

longlong FUN_14868b96c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b99a FUN_14868b99a body=45 status=ok
// SIG undefined FUN_14868b99a(void)

longlong FUN_14868b99a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b9c8 FUN_14868b9c8 body=45 status=ok
// SIG undefined FUN_14868b9c8(void)

longlong FUN_14868b9c8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868b9f6 FUN_14868b9f6 body=45 status=ok
// SIG undefined FUN_14868b9f6(void)

longlong FUN_14868b9f6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140acfb7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868ba2a FUN_14868ba2a body=48 status=ok
// SIG undefined FUN_14868ba2a(void)

longlong FUN_14868ba2a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_140acfb7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868ba62 FUN_14868ba62 body=48 status=ok
// SIG undefined FUN_14868ba62(void)

longlong FUN_14868ba62(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_140acfb7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868ba9a FUN_14868ba9a body=48 status=ok
// SIG undefined FUN_14868ba9a(void)

longlong FUN_14868ba9a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_140acfb7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868bb2a FUN_14868bb2a body=63 status=ok
// SIG undefined FUN_14868bb2a(void)

undefined1 FUN_14868bb2a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14862f10e(param_2,param_3);
    param_3 = param_3 + 0x228;
    param_2 = param_2 + 0x228;
  }
  return 1;
}



// FUNCTION 14868bb92 FUN_14868bb92 body=59 status=ok
// SIG undefined FUN_14868bb92(void)

undefined8 FUN_14868bb92(longlong *param_1)

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



// FUNCTION 14868bbde FUN_14868bbde body=38 status=ok
// SIG undefined FUN_14868bbde(void)

void FUN_14868bbde(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x228) == '\x01') {
    FUN_140d2194c(param_2);
    *(undefined1 *)(param_2 + 0x228) = 0;
  }
  return;
}



// FUNCTION 14868bc5c FUN_14868bc5c body=48 status=ok
// SIG undefined FUN_14868bc5c(void)

void FUN_14868bc5c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x220);
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b105b00;
  return;
}



// FUNCTION 14868bc8c FUN_14868bc8c body=32 status=ok
// SIG undefined FUN_14868bc8c(void)

void FUN_14868bc8c(undefined8 param_1,undefined8 *param_2)

{
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b105b00;
  return;
}



// FUNCTION 14868bd06 FUN_14868bd06 body=59 status=ok
// SIG undefined FUN_14868bd06(void)

undefined8 FUN_14868bd06(longlong *param_1)

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



// FUNCTION 14868bd52 FUN_14868bd52 body=63 status=ok
// SIG undefined FUN_14868bd52(void)

void FUN_14868bd52(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14b105b00;
    if (param_2[8] != 0) {
      FUN_140872868(param_2);
    }
    FUN_1403d7c6c(param_2);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 14868bdfa FUN_14868bdfa body=47 status=ok
// SIG undefined FUN_14868bdfa(void)

void FUN_14868bdfa(undefined8 param_1,longlong *param_2)

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



// FUNCTION 14868be40 FUN_14868be40 body=87 status=ok
// SIG undefined FUN_14868be40(void)

undefined1 FUN_14868be40(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14868bf5c(param_2,param_3);
    FUN_1405b70a4(param_2 + 0x10,param_3 + 0x10);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 14868bec0 FUN_14868bec0 body=59 status=ok
// SIG undefined FUN_14868bec0(void)

undefined8 FUN_14868bec0(longlong *param_1)

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



// FUNCTION 14868bf5c FUN_14868bf5c body=79 status=ok
// SIG undefined FUN_14868bf5c(void)

undefined8 * FUN_14868bf5c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14868bfac(param_1,iVar1);
      FUN_14868c00e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14868bfac FUN_14868bfac body=98 status=ok
// SIG undefined FUN_14868bfac(void)

void FUN_14868bfac(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14868c00e FUN_14868c00e body=82 status=ok
// SIG undefined FUN_14868c00e(void)

void FUN_14868c00e(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 14868c062 FUN_14868c062 body=51 status=ok
// SIG undefined FUN_14868c062(void)

void FUN_14868c062(longlong *param_1)

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



// FUNCTION 14868c096 FUN_14868c096 body=43 status=ok
// SIG undefined FUN_14868c096(void)

undefined8 FUN_14868c096(undefined8 param_1,int param_2)

{
  FUN_145d32a6e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x220);
  }
  return param_1;
}



// FUNCTION 14868c0c2 FUN_14868c0c2 body=55 status=ok
// SIG undefined FUN_14868c0c2(void)

void FUN_14868c0c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c590 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c590 = FUN_140002ddd(FUN_1464d5f2d,uVar1,L"GbxDangerZoneCracksBodyState");
  }
  return;
}



// FUNCTION 14868c0fa FUN_14868c0fa body=55 status=ok
// SIG undefined FUN_14868c0fa(void)

void FUN_14868c0fa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c560 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c560 = FUN_140002ddd(FUN_1464d5e23,uVar1,L"GbxDangerZoneCracksBodySettings");
  }
  return;
}



// FUNCTION 14868c1a6 FUN_14868c1a6 body=132 status=ok
// SIG undefined FUN_14868c1a6(void)

undefined8 FUN_14868c1a6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    bVar3 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar6);
      if ((bVar3 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar6);
          bVar3 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar6);
      *plVar1 = lVar2;
      lVar2 = 8;
      plVar4 = (longlong *)(param_3 + lVar6);
      plVar5 = plVar1;
      while( true ) {
        plVar5 = plVar5 + 1;
        plVar4 = plVar4 + 1;
        if (lVar2 == 0) break;
        lVar2 = lVar2 + -1;
        *plVar5 = *plVar4;
      }
      *(int *)(plVar1 + 9) = (int)((longlong *)(param_3 + lVar6))[9];
      lVar6 = lVar6 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14868c252 FUN_14868c252 body=59 status=ok
// SIG undefined FUN_14868c252(void)

undefined8 FUN_14868c252(longlong *param_1)

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



// FUNCTION 14868c34c FUN_14868c34c body=63 status=ok
// SIG undefined FUN_14868c34c(void)

undefined1 FUN_14868c34c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14868c474(param_2,param_3);
    param_3 = param_3 + 0x280;
    param_2 = param_2 + 0x280;
  }
  return 1;
}



// FUNCTION 14868c3b4 FUN_14868c3b4 body=59 status=ok
// SIG undefined FUN_14868c3b4(void)

undefined8 FUN_14868c3b4(longlong *param_1)

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



// FUNCTION 14868c400 FUN_14868c400 body=38 status=ok
// SIG undefined FUN_14868c400(void)

void FUN_14868c400(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x280) == '\x01') {
    FUN_140d2194c(param_2);
    *(undefined1 *)(param_2 + 0x280) = 0;
  }
  return;
}



// FUNCTION 14868c474 FUN_14868c474 body=123 status=ok
// SIG undefined FUN_14868c474(void)

longlong FUN_14868c474(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_14862f10e();
  *(undefined1 *)(param_1 + 0x228) = *(undefined1 *)(param_2 + 0x228);
  lVar1 = *(longlong *)(param_2 + 0x230);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x230);
    }
  }
  *(longlong *)(param_1 + 0x230) = lVar1;
  puVar2 = (undefined8 *)(param_2 + 0x238);
  puVar3 = (undefined8 *)(param_1 + 0x238);
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_2 + 0x278);
  return param_1;
}



// FUNCTION 14868c4fa FUN_14868c4fa body=48 status=ok
// SIG undefined FUN_14868c4fa(void)

void FUN_14868c4fa(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x220);
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b10dd20;
  return;
}



// FUNCTION 14868c52a FUN_14868c52a body=32 status=ok
// SIG undefined FUN_14868c52a(void)

void FUN_14868c52a(undefined8 param_1,undefined8 *param_2)

{
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b10dd20;
  return;
}



// FUNCTION 14868c5a4 FUN_14868c5a4 body=59 status=ok
// SIG undefined FUN_14868c5a4(void)

undefined8 FUN_14868c5a4(longlong *param_1)

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



// FUNCTION 14868c5f0 FUN_14868c5f0 body=40 status=ok
// SIG undefined FUN_14868c5f0(void)

void FUN_14868c5f0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x220) == '\x01') {
    FUN_145d32a6e(param_2);
    *(undefined1 *)(param_2 + 0x220) = 0;
  }
  return;
}



// FUNCTION 14868c6ae FUN_14868c6ae body=75 status=ok
// SIG undefined FUN_14868c6ae(void)

undefined8 FUN_14868c6ae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 14868c722 FUN_14868c722 body=59 status=ok
// SIG undefined FUN_14868c722(void)

undefined8 FUN_14868c722(longlong *param_1)

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



// FUNCTION 14868c7e2 FUN_14868c7e2 body=63 status=ok
// SIG undefined FUN_14868c7e2(void)

undefined1 FUN_14868c7e2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14868c936(param_2,param_3);
    param_3 = param_3 + 0x1c8;
    param_2 = param_2 + 0x1c8;
  }
  return 1;
}



// FUNCTION 14868c84a FUN_14868c84a body=59 status=ok
// SIG undefined FUN_14868c84a(void)

undefined8 FUN_14868c84a(longlong *param_1)

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



// FUNCTION 14868c896 FUN_14868c896 body=40 status=ok
// SIG undefined FUN_14868c896(void)

void FUN_14868c896(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c8) == '\x01') {
    FUN_1458346ba(param_2);
    *(undefined1 *)(param_2 + 0x1c8) = 0;
  }
  return;
}



// FUNCTION 14868c936 FUN_14868c936 body=213 status=ok
// SIG undefined FUN_14868c936(void)

longlong FUN_14868c936(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_14868ca0c();
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  uVar1 = *(undefined4 *)(param_2 + 0x14c);
  uVar2 = *(undefined4 *)(param_2 + 0x150);
  uVar3 = *(undefined4 *)(param_2 + 0x154);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
  *(undefined4 *)(param_1 + 0x14c) = uVar1;
  *(undefined4 *)(param_1 + 0x150) = uVar2;
  *(undefined4 *)(param_1 + 0x154) = uVar3;
  FUN_144a787a6(param_1 + 0x158,param_2 + 0x158);
  uVar1 = *(undefined4 *)(param_2 + 0x16c);
  uVar2 = *(undefined4 *)(param_2 + 0x170);
  uVar3 = *(undefined4 *)(param_2 + 0x174);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
  *(undefined4 *)(param_1 + 0x16c) = uVar1;
  *(undefined4 *)(param_1 + 0x170) = uVar2;
  *(undefined4 *)(param_1 + 0x174) = uVar3;
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
  FUN_14868cb42(param_1 + 0x180,param_2 + 0x180);
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_2 + 400);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  if ((*(longlong *)(param_1 + 0x1a8) != *(longlong *)(param_2 + 0x1a8)) ||
     (*(int *)(param_1 + 0x1b0) != *(int *)(param_2 + 0x1b0))) {
    *(longlong *)(param_1 + 0x1a8) = *(longlong *)(param_2 + 0x1a8);
    *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
    *(undefined8 *)(param_1 + 0x1b8) = 0;
  }
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_2 + 0x1c0);
  return param_1;
}



// FUNCTION 14868ca0c FUN_14868ca0c body=309 status=ok
// SIG undefined FUN_14868ca0c(void)

longlong FUN_14868ca0c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_147e1a790();
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  uVar2 = *(undefined4 *)(param_2 + 0x9c);
  uVar3 = *(undefined4 *)(param_2 + 0xa0);
  uVar4 = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x9c) = uVar2;
  *(undefined4 *)(param_1 + 0xa0) = uVar3;
  *(undefined4 *)(param_1 + 0xa4) = uVar4;
  FUN_144a787a6(param_1 + 0xa8,param_2 + 0xa8);
  FUN_148615fc0(param_1 + 0xb8,param_2 + 0xb8);
  FUN_1470c8d00(param_1 + 200,param_2 + 200);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  if ((*(longlong *)(param_1 + 0xe8) != *(longlong *)(param_2 + 0xe8)) ||
     (*(int *)(param_1 + 0xf0) != *(int *)(param_2 + 0xf0))) {
    *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_2 + 0xe8);
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x105) = *(undefined8 *)(param_2 + 0x105);
  *(undefined8 *)(param_1 + 0x100) = uVar1;
  FUN_14868cb92(param_1 + 0x110,param_2 + 0x110);
  if ((*(longlong *)(param_1 + 0x120) != *(longlong *)(param_2 + 0x120)) ||
     (*(int *)(param_1 + 0x128) != *(int *)(param_2 + 0x128))) {
    *(longlong *)(param_1 + 0x120) = *(longlong *)(param_2 + 0x120);
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 0x138);
  return param_1;
}



// FUNCTION 14868cb42 FUN_14868cb42 body=79 status=ok
// SIG undefined FUN_14868cb42(void)

undefined8 * FUN_14868cb42(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14868ccba(param_1,iVar1);
      FUN_14868cd29(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14868cb92 FUN_14868cb92 body=93 status=ok
// SIG undefined FUN_14868cb92(void)

undefined8 * FUN_14868cb92(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e380d1(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14868cbf0(param_1,iVar1);
      FUN_14868cc66(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14868cbf0 FUN_14868cbf0 body=118 status=ok
// SIG undefined FUN_14868cbf0(void)

void FUN_14868cbf0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14868cc66 FUN_14868cc66 body=84 status=ok
// SIG undefined FUN_14868cc66(void)

void FUN_14868cc66(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_3 != 0) {
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined8 *)(param_1 + -8) = *(undefined8 *)(param_2 + -8);
      uVar1 = *(undefined4 *)(param_2 + -0x14);
      uVar2 = *(undefined4 *)(param_2 + -0x10);
      uVar3 = *(undefined4 *)(param_2 + -0xc);
      *(undefined4 *)(param_1 + -0x18) = *(undefined4 *)(param_2 + -0x18);
      *(undefined4 *)(param_1 + -0x14) = uVar1;
      *(undefined4 *)(param_1 + -0x10) = uVar2;
      *(undefined4 *)(param_1 + -0xc) = uVar3;
      FUN_14185083e(param_1,param_2);
      param_1 = param_1 + 200;
      param_2 = param_2 + 200;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14868ccba FUN_14868ccba body=111 status=ok
// SIG undefined FUN_14868ccba(void)

void FUN_14868ccba(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14868cd29 FUN_14868cd29 body=118 status=ok
// SIG undefined FUN_14868cd29(void)

void FUN_14868cd29(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_1 + -0x10) = *(undefined8 *)(param_2 + -0x10);
      *(undefined4 *)(param_1 + -8) = *(undefined4 *)(param_2 + -8);
      FUN_144a7f96e(param_1,param_2);
      uVar1 = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x20) = uVar1;
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
      param_1 = param_1 + 0x58;
      param_2 = param_2 + 0x58;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14868ce1a FUN_14868ce1a body=59 status=ok
// SIG undefined FUN_14868ce1a(void)

undefined8 FUN_14868ce1a(longlong *param_1)

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



// FUNCTION 14868cebc FUN_14868cebc body=153 status=ok
// SIG undefined FUN_14868cebc(void)

void FUN_14868cebc(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x90);
  *(undefined2 *)((longlong)param_2 + 3) = 0x101;
  *(undefined1 *)((longlong)param_2 + 5) = 1;
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined ***)((longlong)param_2 + 0x18) = &PTR_FUN_14b00bdf8;
  *(undefined4 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined4 *)((longlong)param_2 + 0x88) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_2 + 0x8c) = 0x404;
  *(undefined **)((longlong)param_2 + 0x20) = &DAT_14a176f00;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc0) = 0;
  return;
}



// FUNCTION 14868cfee FUN_14868cfee body=208 status=ok
// SIG undefined FUN_14868cfee(void)

undefined8 FUN_14868cfee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined8 *)(param_2 + 0x10 + lVar6) = *(undefined8 *)(param_3 + 0x10 + lVar6);
      puVar1 = (undefined4 *)(param_3 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      *(undefined4 *)(param_2 + 0x88 + lVar6) = *(undefined4 *)(param_3 + 0x88 + lVar6);
      *(undefined2 *)(param_2 + 0x8c + lVar6) = *(undefined2 *)(param_3 + 0x8c + lVar6);
      FUN_14093c00e(param_2 + lVar6 + 0x90,param_3 + lVar6 + 0x90);
      *(undefined8 *)(param_2 + 0xa0 + lVar6) = *(undefined8 *)(param_3 + 0xa0 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0xa8 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0xa8 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      FUN_144a787a6(param_2 + lVar6 + 0xb8,param_3 + lVar6 + 0xb8);
      lVar6 = lVar6 + 200;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14868d0e6 FUN_14868d0e6 body=59 status=ok
// SIG undefined FUN_14868d0e6(void)

undefined8 FUN_14868d0e6(longlong *param_1)

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



// FUNCTION 14868d132 FUN_14868d132 body=39 status=ok
// SIG undefined FUN_14868d132(void)

void FUN_14868d132(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_14051f4c4(param_2 + 0x18);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 14868d1c8 FUN_14868d1c8 body=63 status=ok
// SIG undefined FUN_14868d1c8(void)

undefined1 FUN_14868d1c8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14868ca0c(param_2,param_3);
    param_3 = param_3 + 0x140;
    param_2 = param_2 + 0x140;
  }
  return 1;
}



// FUNCTION 14868d230 FUN_14868d230 body=59 status=ok
// SIG undefined FUN_14868d230(void)

undefined8 FUN_14868d230(longlong *param_1)

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



// FUNCTION 14868d27c FUN_14868d27c body=38 status=ok
// SIG undefined FUN_14868d27c(void)

void FUN_14868d27c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x140) == '\x01') {
    FUN_140e38032(param_2);
    *(undefined1 *)(param_2 + 0x140) = 0;
  }
  return;
}



// FUNCTION 14868d384 FUN_14868d384 body=59 status=ok
// SIG undefined FUN_14868d384(void)

undefined8 FUN_14868d384(longlong *param_1)

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



// FUNCTION 14868d48e FUN_14868d48e body=59 status=ok
// SIG undefined FUN_14868d48e(void)

undefined8 FUN_14868d48e(longlong *param_1)

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



// FUNCTION 14868d52e FUN_14868d52e body=34 status=ok
// SIG undefined FUN_14868d52e(void)

undefined8 FUN_14868d52e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14868d550 FUN_14868d550 body=55 status=ok
// SIG undefined FUN_14868d550(void)

void FUN_14868d550(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c688 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c688 = FUN_140002ddd(FUN_1464d6403,uVar1,L"GbxDeathHandler");
  }
  return;
}



// FUNCTION 14868d588 FUN_14868d588 body=41 status=ok
// SIG undefined FUN_14868d588(void)

void FUN_14868d588(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Game/GbxDeathHandler.h",0x17,
                L"Pure virtual not implemented (%s)",L"FGbxDeathHandler:HandleDeath");
  return;
}



// FUNCTION 14868d67c FUN_14868d67c body=59 status=ok
// SIG undefined FUN_14868d67c(void)

undefined8 FUN_14868d67c(longlong *param_1)

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



// FUNCTION 14868d780 FUN_14868d780 body=104 status=ok
// SIG undefined FUN_14868d780(void)

undefined1 FUN_14868d780(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14862f10e(param_2,param_3);
    lVar1 = *(longlong *)(param_3 + 0x228);
    if (DAT_14c950c29 == '\x01') {
      if (lVar1 == 0) {
        lVar1 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar1 = *(longlong *)(param_3 + 0x228);
      }
    }
    param_3 = param_3 + 0x230;
    *(longlong *)(param_2 + 0x228) = lVar1;
    param_2 = param_2 + 0x230;
  }
  return 1;
}



// FUNCTION 14868d810 FUN_14868d810 body=59 status=ok
// SIG undefined FUN_14868d810(void)

undefined8 FUN_14868d810(longlong *param_1)

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



// FUNCTION 14868d85c FUN_14868d85c body=38 status=ok
// SIG undefined FUN_14868d85c(void)

void FUN_14868d85c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x230) == '\x01') {
    FUN_140d2194c(param_2);
    *(undefined1 *)(param_2 + 0x230) = 0;
  }
  return;
}



// FUNCTION 14868d8da FUN_14868d8da body=48 status=ok
// SIG undefined FUN_14868d8da(void)

void FUN_14868d8da(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x220);
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b10f3d0;
  return;
}



// FUNCTION 14868d90a FUN_14868d90a body=32 status=ok
// SIG undefined FUN_14868d90a(void)

void FUN_14868d90a(undefined8 param_1,undefined8 *param_2)

{
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b10f3d0;
  return;
}



// FUNCTION 14868d984 FUN_14868d984 body=59 status=ok
// SIG undefined FUN_14868d984(void)

undefined8 FUN_14868d984(longlong *param_1)

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



// FUNCTION 14868d9d0 FUN_14868d9d0 body=40 status=ok
// SIG undefined FUN_14868d9d0(void)

void FUN_14868d9d0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x220) == '\x01') {
    FUN_1458e0104(param_2);
    *(undefined1 *)(param_2 + 0x220) = 0;
  }
  return;
}



// FUNCTION 14868da46 FUN_14868da46 body=43 status=ok
// SIG undefined FUN_14868da46(void)

undefined8 FUN_14868da46(undefined8 param_1,int param_2)

{
  FUN_1458e0104();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x220);
  }
  return param_1;
}



// FUNCTION 14868da72 FUN_14868da72 body=55 status=ok
// SIG undefined FUN_14868da72(void)

void FUN_14868da72(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c730 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c730 = FUN_140002ddd(FUN_1464d67cd,uVar1,L"GbxDecoCharacterBodyState");
  }
  return;
}



// FUNCTION 14868daaa FUN_14868daaa body=55 status=ok
// SIG undefined FUN_14868daaa(void)

void FUN_14868daaa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c700 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c700 = FUN_140002ddd(FUN_1464d66c2,uVar1,L"GbxDecoCharacterBodySettings");
  }
  return;
}



// FUNCTION 14868db36 FUN_14868db36 body=97 status=ok
// SIG undefined FUN_14868db36(void)

undefined8 FUN_14868db36(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144983130(param_2,param_3);
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_3 + 0x38);
    uVar1 = *(undefined4 *)(param_3 + 0x44);
    uVar2 = *(undefined4 *)(param_3 + 0x48);
    uVar3 = *(undefined4 *)(param_3 + 0x4c);
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_3 + 0x40);
    *(undefined4 *)(param_2 + 0x44) = uVar1;
    *(undefined4 *)(param_2 + 0x48) = uVar2;
    *(undefined4 *)(param_2 + 0x4c) = uVar3;
    FUN_144a787a6(param_2 + 0x50,param_3 + 0x50);
    *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_3 + 0x60);
    *(undefined1 *)(param_2 + 0x68) = *(undefined1 *)(param_3 + 0x68);
    param_2 = param_2 + 0x70;
    param_3 = param_3 + 0x70;
  }
  return 1;
}



// FUNCTION 14868dbc0 FUN_14868dbc0 body=59 status=ok
// SIG undefined FUN_14868dbc0(void)

undefined8 FUN_14868dbc0(longlong *param_1)

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



// FUNCTION 14868dc06 FUN_14868dc06 body=46 status=ok
// SIG undefined FUN_14868dc06(void)

void FUN_14868dc06(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    if (*(longlong *)(param_2 + 0x50) != 0) {
      FUN_1400020a8();
    }
    FUN_144a2da94(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 14868dc96 FUN_14868dc96 body=63 status=ok
// SIG undefined FUN_14868dc96(void)

undefined1 FUN_14868dc96(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14868df08(param_2,param_3);
    param_3 = param_3 + 0x100;
    param_2 = param_2 + 0x100;
  }
  return 1;
}



// FUNCTION 14868dcfe FUN_14868dcfe body=59 status=ok
// SIG undefined FUN_14868dcfe(void)

undefined8 FUN_14868dcfe(longlong *param_1)

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



// FUNCTION 14868dd4a FUN_14868dd4a body=38 status=ok
// SIG undefined FUN_14868dd4a(void)

void FUN_14868dd4a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x100) == '\x01') {
    FUN_14868de4e(param_2);
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 14868ddb2 FUN_14868ddb2 body=156 status=ok
// SIG undefined FUN_14868ddb2(void)

undefined8 * FUN_14868ddb2(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 6) = 4;
  *(undefined4 *)(param_1 + 3) = 0x41200000;
  *(undefined1 *)(param_1 + 7) = 3;
  *(char *)(param_1 + 8) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x71) = 0;
  *(undefined8 *)((longlong)param_1 + 0x79) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x3dcccccd;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x3dcccccd;
  *(undefined1 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_14044066a(param_1 + 0x19,10,1);
  return param_1;
}



// FUNCTION 14868de4e FUN_14868de4e body=186 status=ok
// SIG undefined FUN_14868de4e(void)

void FUN_14868de4e(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)(param_1 + 0xd0);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xf0) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xe8)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xe8)) {
    FUN_1400020a8(*plVar1);
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)(param_1 + 0x18);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x38) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x30)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (*(ushort *)(param_1 + 0x30) < 0x19) {
    return;
  }
  FUN_1400020a8(*plVar1);
  return;
}



// FUNCTION 14868df08 FUN_14868df08 body=158 status=ok
// SIG undefined FUN_14868df08(void)

undefined8 * FUN_14868df08(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_144983130(param_1 + 2,param_2 + 2);
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x5c);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)((longlong)param_1 + 100) = uVar3;
  FUN_144a787a6(param_1 + 0xd,param_2 + 0xd);
  param_1[0xf] = param_2[0xf];
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  FUN_140e78ece(param_1 + 0x11,param_2 + 0x11);
  FUN_140e78ece(param_1 + 0x15,param_2 + 0x15);
  FUN_144983130(param_1 + 0x19,param_2 + 0x19);
  return param_1;
}



// FUNCTION 14868dff4 FUN_14868dff4 body=110 status=ok
// SIG undefined FUN_14868dff4(void)

undefined8 FUN_14868dff4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      FUN_14868e19a(param_2 + -0x10,param_3 + -0x10);
      FUN_14868e1f8(param_2,param_3);
      uVar1 = *(undefined4 *)(param_3 + 0x14);
      uVar2 = *(undefined4 *)(param_3 + 0x18);
      uVar3 = *(undefined4 *)(param_3 + 0x1c);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x14) = uVar1;
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      *(undefined4 *)(param_2 + 0x1c) = uVar3;
      *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
      FUN_1403de7ba(param_2 + 0x28,param_3 + 0x28);
      param_3 = param_3 + 0x60;
      param_2 = param_2 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14868e08a FUN_14868e08a body=59 status=ok
// SIG undefined FUN_14868e08a(void)

undefined8 FUN_14868e08a(longlong *param_1)

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



// FUNCTION 14868e0d0 FUN_14868e0d0 body=32 status=ok
// SIG undefined FUN_14868e0d0(void)

void FUN_14868e0d0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_14868e132(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 14868e132 FUN_14868e132 body=103 status=ok
// SIG undefined FUN_14868e132(void)

void FUN_14868e132(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140e17bf8(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_140e17b7f(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14868e19a FUN_14868e19a body=93 status=ok
// SIG undefined FUN_14868e19a(void)

undefined8 * FUN_14868e19a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e17b7f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14868e256(param_1,iVar1);
      FUN_14868e2c5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14868e1f8 FUN_14868e1f8 body=93 status=ok
// SIG undefined FUN_14868e1f8(void)

undefined8 * FUN_14868e1f8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e17bf8(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14868e380(param_1,iVar1);
      FUN_14868e3e2(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14868e256 FUN_14868e256 body=111 status=ok
// SIG undefined FUN_14868e256(void)

void FUN_14868e256(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x70,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x70,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14868e2c5 FUN_14868e2c5 body=52 status=ok
// SIG undefined FUN_14868e2c5(void)

void FUN_14868e2c5(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14868e2fa(param_1,param_2);
    param_1 = param_1 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return;
}



// FUNCTION 14868e2fa FUN_14868e2fa body=134 status=ok
// SIG undefined FUN_14868e2fa(void)

longlong FUN_14868e2fa(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_14034cca6();
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined4 *)(param_2 + 0x44);
  uVar3 = *(undefined4 *)(param_2 + 0x48);
  uVar4 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  *(undefined8 *)(param_1 + 0x50) = 0;
  iVar1 = *(int *)(param_2 + 0x58);
  _Src = *(void **)(param_2 + 0x50);
  *(int *)(param_1 + 0x58) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 0x50),iVar1,0);
    memcpy(*(void **)(param_1 + 0x50),_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  return param_1;
}



// FUNCTION 14868e380 FUN_14868e380 body=98 status=ok
// SIG undefined FUN_14868e380(void)

void FUN_14868e380(longlong param_1,int param_2,int param_3)

{
  int extraout_var;
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_144a3809e((longlong)param_2 << 8,8);
    iVar1 = 0x7fffffff;
    if (param_2 <= extraout_var) {
      iVar1 = extraout_var;
    }
  }
  if (param_3 < iVar1) {
    FUN_1446f8d3c(param_1,0,iVar1,0x100,8);
    param_3 = iVar1;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14868e3e2 FUN_14868e3e2 body=60 status=ok
// SIG undefined FUN_14868e3e2(void)

void FUN_14868e3e2(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14868e41e(param_1,param_2);
    param_1 = param_1 + 0x100;
    param_2 = param_2 + 0x100;
  }
  return;
}



// FUNCTION 14868e41e FUN_14868e41e body=222 status=ok
// SIG undefined FUN_14868e41e(void)

undefined8 * FUN_14868e41e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_14034cca6(param_1 + 2,param_2 + 2);
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x5c);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uVar4 = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *(undefined4 *)((longlong)param_1 + 100) = uVar4;
  param_1[0xd] = 0;
  iVar1 = *(int *)(param_2 + 0xe);
  _Src = (void *)param_2[0xd];
  *(int *)(param_1 + 0xe) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xd,iVar1,0);
    memcpy((void *)param_1[0xd],_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  param_1[0xf] = param_2[0xf];
  FUN_140f7ece8(param_1 + 0x11,param_2 + 0x11);
  FUN_140f7ece8(param_1 + 0x15,param_2 + 0x15);
  FUN_14034cca6(param_1 + 0x19,param_2 + 0x19);
  return param_1;
}



// FUNCTION 14868e532 FUN_14868e532 body=63 status=ok
// SIG undefined FUN_14868e532(void)

undefined1 FUN_14868e532(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14868e672(param_2,param_3);
    param_3 = param_3 + 0x490;
    param_2 = param_2 + 0x490;
  }
  return 1;
}



// FUNCTION 14868e59a FUN_14868e59a body=59 status=ok
// SIG undefined FUN_14868e59a(void)

undefined8 FUN_14868e59a(longlong *param_1)

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



// FUNCTION 14868e5e6 FUN_14868e5e6 body=38 status=ok
// SIG undefined FUN_14868e5e6(void)

void FUN_14868e5e6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x490) == '\x01') {
    FUN_140d1f6d0(param_2);
    *(undefined1 *)(param_2 + 0x490) = 0;
  }
  return;
}



// FUNCTION 14868e672 FUN_14868e672 body=376 status=ok
// SIG undefined FUN_14868e672(void)

longlong FUN_14868e672(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  FUN_14862f7a6();
  FUN_14868e7ea(param_1 + 0x348,param_2 + 0x348);
  FUN_14868e83e(param_1 + 0x360,param_2 + 0x360);
  if ((*(longlong *)(param_1 + 0x370) != *(longlong *)(param_2 + 0x370)) ||
     (*(int *)(param_1 + 0x378) != *(int *)(param_2 + 0x378))) {
    *(longlong *)(param_1 + 0x370) = *(longlong *)(param_2 + 0x370);
    *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(param_2 + 0x378);
    *(undefined8 *)(param_1 + 0x380) = 0;
  }
  *(undefined8 *)(param_1 + 0x388) = *(undefined8 *)(param_2 + 0x388);
  uVar1 = *(undefined4 *)(param_2 + 0x394);
  uVar2 = *(undefined4 *)(param_2 + 0x398);
  uVar3 = *(undefined4 *)(param_2 + 0x39c);
  *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_2 + 0x390);
  *(undefined4 *)(param_1 + 0x394) = uVar1;
  *(undefined4 *)(param_1 + 0x398) = uVar2;
  *(undefined4 *)(param_1 + 0x39c) = uVar3;
  FUN_144a787a6(param_1 + 0x3a0,param_2 + 0x3a0);
  puVar5 = (undefined8 *)(param_2 + 0x3b0);
  puVar6 = (undefined8 *)(param_1 + 0x3b0);
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(param_2 + 0x400);
  FUN_14867c40c(param_1 + 0x408,param_2 + 0x408);
  *(undefined8 *)(param_1 + 0x420) = *(undefined8 *)(param_2 + 0x420);
  uVar1 = *(undefined4 *)(param_2 + 0x42c);
  uVar2 = *(undefined4 *)(param_2 + 0x430);
  uVar3 = *(undefined4 *)(param_2 + 0x434);
  *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_2 + 0x428);
  *(undefined4 *)(param_1 + 0x42c) = uVar1;
  *(undefined4 *)(param_1 + 0x430) = uVar2;
  *(undefined4 *)(param_1 + 0x434) = uVar3;
  FUN_144a787a6(param_1 + 0x438,param_2 + 0x438);
  *(undefined1 *)(param_1 + 0x448) = *(undefined1 *)(param_2 + 0x448);
  FUN_1403de7ba(param_1 + 0x450,param_2 + 0x450);
  if ((*(longlong *)(param_1 + 0x470) != *(longlong *)(param_2 + 0x470)) ||
     (*(int *)(param_1 + 0x478) != *(int *)(param_2 + 0x478))) {
    *(longlong *)(param_1 + 0x470) = *(longlong *)(param_2 + 0x470);
    *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(param_2 + 0x478);
    *(undefined8 *)(param_1 + 0x480) = 0;
  }
  *(undefined1 *)(param_1 + 0x488) = *(undefined1 *)(param_2 + 0x488);
  return param_1;
}



// FUNCTION 14868e7ea FUN_14868e7ea body=84 status=ok
// SIG undefined FUN_14868e7ea(void)

longlong * FUN_14868e7ea(longlong *param_1,longlong *param_2)

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


