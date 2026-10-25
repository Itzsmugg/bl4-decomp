// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14874e5aa FUN_14874e5aa body=58 status=ok
// SIG undefined FUN_14874e5aa(void)

void FUN_14874e5aa(undefined8 param_1,undefined8 *param_2)

{
  FUN_1412ebe6c(param_2);
  *param_2 = &PTR_FUN_14b2ded80;
  param_2[0x39] = 0;
  *(undefined4 *)(param_2 + 0x3a) = 0x19105;
  param_2[0x3b] = 0;
  return;
}



// FUNCTION 14874e628 FUN_14874e628 body=120 status=ok
// SIG undefined FUN_14874e628(void)

undefined8 FUN_14874e628(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f313ac(param_2,param_3);
    if ((*(longlong *)(param_2 + 0x1c8) != *(longlong *)(param_3 + 0x1c8)) ||
       (*(int *)(param_2 + 0x1d0) != *(int *)(param_3 + 0x1d0))) {
      *(longlong *)(param_2 + 0x1c8) = *(longlong *)(param_3 + 0x1c8);
      *(undefined4 *)(param_2 + 0x1d0) = *(undefined4 *)(param_3 + 0x1d0);
      *(undefined8 *)(param_2 + 0x1d8) = 0;
    }
    param_2 = param_2 + 0x1e0;
    param_3 = param_3 + 0x1e0;
  }
  return 1;
}



// FUNCTION 14874e6c8 FUN_14874e6c8 body=59 status=ok
// SIG undefined FUN_14874e6c8(void)

undefined8 FUN_14874e6c8(longlong *param_1)

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



// FUNCTION 14874e714 FUN_14874e714 body=38 status=ok
// SIG undefined FUN_14874e714(void)

void FUN_14874e714(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1e0) == '\x01') {
    FUN_140ff0132(param_2);
    *(undefined1 *)(param_2 + 0x1e0) = 0;
  }
  return;
}



// FUNCTION 14874e788 FUN_14874e788 body=38 status=ok
// SIG undefined FUN_14874e788(void)

undefined8 FUN_14874e788(undefined8 param_1,int param_2)

{
  FUN_140ff0132();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14874e7ae FUN_14874e7ae body=55 status=ok
// SIG undefined FUN_14874e7ae(void)

void FUN_14874e7ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb690e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb690e8 = FUN_140002ddd(FUN_14651effb,uVar1,L"GpsGeneratorSettings_GbxSkillTargetList");
  }
  return;
}



// FUNCTION 14874e7e6 FUN_14874e7e6 body=37 status=ok
// SIG undefined FUN_14874e7e6(void)

void FUN_14874e7e6(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x448);
  FUN_14874e988(param_2);
  return;
}



// FUNCTION 14874e838 FUN_14874e838 body=104 status=ok
// SIG undefined FUN_14874e838(void)

undefined1 FUN_14874e838(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2f73c(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x41c);
    uVar2 = *(undefined4 *)(param_3 + 0x420);
    uVar3 = *(undefined4 *)(param_3 + 0x424);
    uVar4 = *(undefined4 *)(param_3 + 0x428);
    uVar5 = *(undefined4 *)(param_3 + 0x42c);
    uVar6 = *(undefined4 *)(param_3 + 0x430);
    uVar7 = *(undefined4 *)(param_3 + 0x434);
    uVar8 = *(undefined4 *)(param_3 + 0x434);
    uVar9 = *(undefined4 *)(param_3 + 0x438);
    uVar10 = *(undefined4 *)(param_3 + 0x43c);
    uVar11 = *(undefined4 *)(param_3 + 0x440);
    *(undefined4 *)(param_2 + 0x418) = *(undefined4 *)(param_3 + 0x418);
    *(undefined4 *)(param_2 + 0x41c) = uVar1;
    *(undefined4 *)(param_2 + 0x420) = uVar2;
    *(undefined4 *)(param_2 + 0x424) = uVar3;
    *(undefined4 *)(param_2 + 0x428) = uVar4;
    *(undefined4 *)(param_2 + 0x42c) = uVar5;
    *(undefined4 *)(param_2 + 0x430) = uVar6;
    *(undefined4 *)(param_2 + 0x434) = uVar7;
    *(undefined4 *)(param_2 + 0x434) = uVar8;
    *(undefined4 *)(param_2 + 0x438) = uVar9;
    *(undefined4 *)(param_2 + 0x43c) = uVar10;
    *(undefined4 *)(param_2 + 0x440) = uVar11;
    param_2 = param_2 + 0x448;
    param_3 = param_3 + 0x448;
  }
  return 1;
}



// FUNCTION 14874e8c8 FUN_14874e8c8 body=59 status=ok
// SIG undefined FUN_14874e8c8(void)

undefined8 FUN_14874e8c8(longlong *param_1)

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



// FUNCTION 14874e914 FUN_14874e914 body=38 status=ok
// SIG undefined FUN_14874e914(void)

void FUN_14874e914(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x448) == '\x01') {
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0x448) = 0;
  }
  return;
}



// FUNCTION 14874e988 FUN_14874e988 body=125 status=ok
// SIG undefined FUN_14874e988(void)

void FUN_14874e988(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 2;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0x1000000000;
  *(undefined1 *)((longlong)param_1 + 0x3e4) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0xffffffff00000000;
  *(undefined1 *)(param_1 + 0x82) = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *param_1 = &PTR_FUN_14b2def80;
  return;
}



// FUNCTION 14874ea06 FUN_14874ea06 body=38 status=ok
// SIG undefined FUN_14874ea06(void)

undefined8 FUN_14874ea06(undefined8 param_1,int param_2)

{
  FUN_1405f0b44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14874ea2c FUN_14874ea2c body=55 status=ok
// SIG undefined FUN_14874ea2c(void)

void FUN_14874ea2c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69100 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69100 = FUN_140002ddd(FUN_14651f091,uVar1,L"GpsGenerator_GbxSkillTargetList");
  }
  return;
}



// FUNCTION 14874ea64 FUN_14874ea64 body=80 status=ok
// SIG undefined FUN_14874ea64(void)

void FUN_14874ea64(undefined8 param_1,undefined8 *param_2)

{
  FUN_1412ebe6c(param_2);
  *param_2 = &PTR_FUN_14b2df1d0;
  *(undefined4 *)(param_2 + 0x39) = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  *(undefined1 *)(param_2 + 0x42) = 0;
  return;
}



// FUNCTION 14874eadc FUN_14874eadc body=97 status=ok
// SIG undefined FUN_14874eadc(void)

undefined1 FUN_14874eadc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f313ac(param_2,param_3);
    FUN_140c19bee(param_2 + 0x1c8,param_3 + 0x1c8);
    *(undefined1 *)(param_2 + 0x210) = *(undefined1 *)(param_3 + 0x210);
    param_2 = param_2 + 0x218;
    param_3 = param_3 + 0x218;
  }
  return 1;
}



// FUNCTION 14874eb66 FUN_14874eb66 body=59 status=ok
// SIG undefined FUN_14874eb66(void)

undefined8 FUN_14874eb66(longlong *param_1)

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



// FUNCTION 14874ebb2 FUN_14874ebb2 body=60 status=ok
// SIG undefined FUN_14874ebb2(void)

void FUN_14874ebb2(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x43) == '\x01') {
    *param_2 = &PTR_FUN_14b2df1d0;
    FUN_1412dafa6(param_2 + 0x39);
    FUN_140ff0132(param_2);
    *(undefined1 *)(param_2 + 0x43) = 0;
  }
  return;
}



// FUNCTION 14874ec3e FUN_14874ec3e body=37 status=ok
// SIG undefined FUN_14874ec3e(void)

void FUN_14874ec3e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x448);
  FUN_14874ede0(param_2);
  return;
}



// FUNCTION 14874ec90 FUN_14874ec90 body=104 status=ok
// SIG undefined FUN_14874ec90(void)

undefined1 FUN_14874ec90(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2f73c(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x41c);
    uVar2 = *(undefined4 *)(param_3 + 0x420);
    uVar3 = *(undefined4 *)(param_3 + 0x424);
    uVar4 = *(undefined4 *)(param_3 + 0x428);
    uVar5 = *(undefined4 *)(param_3 + 0x42c);
    uVar6 = *(undefined4 *)(param_3 + 0x430);
    uVar7 = *(undefined4 *)(param_3 + 0x434);
    uVar8 = *(undefined4 *)(param_3 + 0x434);
    uVar9 = *(undefined4 *)(param_3 + 0x438);
    uVar10 = *(undefined4 *)(param_3 + 0x43c);
    uVar11 = *(undefined4 *)(param_3 + 0x440);
    *(undefined4 *)(param_2 + 0x418) = *(undefined4 *)(param_3 + 0x418);
    *(undefined4 *)(param_2 + 0x41c) = uVar1;
    *(undefined4 *)(param_2 + 0x420) = uVar2;
    *(undefined4 *)(param_2 + 0x424) = uVar3;
    *(undefined4 *)(param_2 + 0x428) = uVar4;
    *(undefined4 *)(param_2 + 0x42c) = uVar5;
    *(undefined4 *)(param_2 + 0x430) = uVar6;
    *(undefined4 *)(param_2 + 0x434) = uVar7;
    *(undefined4 *)(param_2 + 0x434) = uVar8;
    *(undefined4 *)(param_2 + 0x438) = uVar9;
    *(undefined4 *)(param_2 + 0x43c) = uVar10;
    *(undefined4 *)(param_2 + 0x440) = uVar11;
    param_2 = param_2 + 0x448;
    param_3 = param_3 + 0x448;
  }
  return 1;
}



// FUNCTION 14874ed20 FUN_14874ed20 body=59 status=ok
// SIG undefined FUN_14874ed20(void)

undefined8 FUN_14874ed20(longlong *param_1)

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



// FUNCTION 14874ed6c FUN_14874ed6c body=38 status=ok
// SIG undefined FUN_14874ed6c(void)

void FUN_14874ed6c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x448) == '\x01') {
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0x448) = 0;
  }
  return;
}



// FUNCTION 14874ede0 FUN_14874ede0 body=125 status=ok
// SIG undefined FUN_14874ede0(void)

void FUN_14874ede0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 2;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0x1000000000;
  *(undefined1 *)((longlong)param_1 + 0x3e4) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0xffffffff00000000;
  *(undefined1 *)(param_1 + 0x82) = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *param_1 = &PTR_FUN_14b2df3d0;
  return;
}



// FUNCTION 14874ee5e FUN_14874ee5e body=38 status=ok
// SIG undefined FUN_14874ee5e(void)

undefined8 FUN_14874ee5e(undefined8 param_1,int param_2)

{
  FUN_1405f0b44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14874ee84 FUN_14874ee84 body=55 status=ok
// SIG undefined FUN_14874ee84(void)

void FUN_14874ee84(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69130 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69130 = FUN_140002ddd(FUN_14651f186,uVar1,L"GpsGenerator_InteractiveObjects");
  }
  return;
}



// FUNCTION 14874eebc FUN_14874eebc body=56 status=ok
// SIG undefined FUN_14874eebc(void)

void FUN_14874eebc(undefined8 param_1,undefined8 *param_2)

{
  FUN_1412ebe6c(param_2);
  *param_2 = &PTR_FUN_14b2df720;
  *(undefined1 *)(param_2 + 0x39) = 1;
  *(undefined4 *)((longlong)param_2 + 0x1cc) = 1;
  *(undefined1 *)(param_2 + 0x3a) = 0;
  return;
}



// FUNCTION 14874ef1c FUN_14874ef1c body=88 status=ok
// SIG undefined FUN_14874ef1c(void)

undefined8 FUN_14874ef1c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f313ac(param_2,param_3);
    *(undefined8 *)(param_2 + 0x1c8) = *(undefined8 *)(param_3 + 0x1c8);
    *(undefined1 *)(param_2 + 0x1d0) = *(undefined1 *)(param_3 + 0x1d0);
    param_2 = param_2 + 0x1d8;
    param_3 = param_3 + 0x1d8;
  }
  return 1;
}



// FUNCTION 14874ef9c FUN_14874ef9c body=59 status=ok
// SIG undefined FUN_14874ef9c(void)

undefined8 FUN_14874ef9c(longlong *param_1)

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



// FUNCTION 14874efe8 FUN_14874efe8 body=38 status=ok
// SIG undefined FUN_14874efe8(void)

void FUN_14874efe8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d8) == '\x01') {
    FUN_140ff0132(param_2);
    *(undefined1 *)(param_2 + 0x1d8) = 0;
  }
  return;
}



// FUNCTION 14874f05e FUN_14874f05e body=37 status=ok
// SIG undefined FUN_14874f05e(void)

void FUN_14874f05e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x448);
  FUN_14874f200(param_2);
  return;
}



// FUNCTION 14874f0b0 FUN_14874f0b0 body=104 status=ok
// SIG undefined FUN_14874f0b0(void)

undefined1 FUN_14874f0b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2f73c(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x41c);
    uVar2 = *(undefined4 *)(param_3 + 0x420);
    uVar3 = *(undefined4 *)(param_3 + 0x424);
    uVar4 = *(undefined4 *)(param_3 + 0x428);
    uVar5 = *(undefined4 *)(param_3 + 0x42c);
    uVar6 = *(undefined4 *)(param_3 + 0x430);
    uVar7 = *(undefined4 *)(param_3 + 0x434);
    uVar8 = *(undefined4 *)(param_3 + 0x434);
    uVar9 = *(undefined4 *)(param_3 + 0x438);
    uVar10 = *(undefined4 *)(param_3 + 0x43c);
    uVar11 = *(undefined4 *)(param_3 + 0x440);
    *(undefined4 *)(param_2 + 0x418) = *(undefined4 *)(param_3 + 0x418);
    *(undefined4 *)(param_2 + 0x41c) = uVar1;
    *(undefined4 *)(param_2 + 0x420) = uVar2;
    *(undefined4 *)(param_2 + 0x424) = uVar3;
    *(undefined4 *)(param_2 + 0x428) = uVar4;
    *(undefined4 *)(param_2 + 0x42c) = uVar5;
    *(undefined4 *)(param_2 + 0x430) = uVar6;
    *(undefined4 *)(param_2 + 0x434) = uVar7;
    *(undefined4 *)(param_2 + 0x434) = uVar8;
    *(undefined4 *)(param_2 + 0x438) = uVar9;
    *(undefined4 *)(param_2 + 0x43c) = uVar10;
    *(undefined4 *)(param_2 + 0x440) = uVar11;
    param_2 = param_2 + 0x448;
    param_3 = param_3 + 0x448;
  }
  return 1;
}



// FUNCTION 14874f140 FUN_14874f140 body=59 status=ok
// SIG undefined FUN_14874f140(void)

undefined8 FUN_14874f140(longlong *param_1)

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



// FUNCTION 14874f18c FUN_14874f18c body=38 status=ok
// SIG undefined FUN_14874f18c(void)

void FUN_14874f18c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x448) == '\x01') {
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0x448) = 0;
  }
  return;
}



// FUNCTION 14874f200 FUN_14874f200 body=125 status=ok
// SIG undefined FUN_14874f200(void)

void FUN_14874f200(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 2;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0x1000000000;
  *(undefined1 *)((longlong)param_1 + 0x3e4) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0xffffffff00000000;
  *(undefined1 *)(param_1 + 0x82) = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *param_1 = &PTR_FUN_14b2df920;
  return;
}



// FUNCTION 14874f27e FUN_14874f27e body=38 status=ok
// SIG undefined FUN_14874f27e(void)

undefined8 FUN_14874f27e(undefined8 param_1,int param_2)

{
  FUN_1405f0b44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14874f2a4 FUN_14874f2a4 body=55 status=ok
// SIG undefined FUN_14874f2a4(void)

void FUN_14874f2a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69178 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69178 = FUN_140002ddd(FUN_14651f2ac,uVar1,L"GpsGenerator_InventoryPickups");
  }
  return;
}



// FUNCTION 14874f2dc FUN_14874f2dc body=32 status=ok
// SIG undefined FUN_14874f2dc(void)

void FUN_14874f2dc(undefined8 param_1,undefined8 *param_2)

{
  FUN_1412ebe6c(param_2);
  *param_2 = &PTR_FUN_14b2dfb70;
  return;
}



// FUNCTION 14874f324 FUN_14874f324 body=63 status=ok
// SIG undefined FUN_14874f324(void)

undefined1 FUN_14874f324(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f313ac(param_2,param_3);
    param_3 = param_3 + 0x1c8;
    param_2 = param_2 + 0x1c8;
  }
  return 1;
}



// FUNCTION 14874f38c FUN_14874f38c body=59 status=ok
// SIG undefined FUN_14874f38c(void)

undefined8 FUN_14874f38c(longlong *param_1)

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



// FUNCTION 14874f3d8 FUN_14874f3d8 body=38 status=ok
// SIG undefined FUN_14874f3d8(void)

void FUN_14874f3d8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c8) == '\x01') {
    FUN_140ff0132(param_2);
    *(undefined1 *)(param_2 + 0x1c8) = 0;
  }
  return;
}



// FUNCTION 14874f44e FUN_14874f44e body=37 status=ok
// SIG undefined FUN_14874f44e(void)

void FUN_14874f44e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x448);
  FUN_14874f5f0(param_2);
  return;
}



// FUNCTION 14874f4a0 FUN_14874f4a0 body=104 status=ok
// SIG undefined FUN_14874f4a0(void)

undefined1 FUN_14874f4a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2f73c(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x41c);
    uVar2 = *(undefined4 *)(param_3 + 0x420);
    uVar3 = *(undefined4 *)(param_3 + 0x424);
    uVar4 = *(undefined4 *)(param_3 + 0x428);
    uVar5 = *(undefined4 *)(param_3 + 0x42c);
    uVar6 = *(undefined4 *)(param_3 + 0x430);
    uVar7 = *(undefined4 *)(param_3 + 0x434);
    uVar8 = *(undefined4 *)(param_3 + 0x434);
    uVar9 = *(undefined4 *)(param_3 + 0x438);
    uVar10 = *(undefined4 *)(param_3 + 0x43c);
    uVar11 = *(undefined4 *)(param_3 + 0x440);
    *(undefined4 *)(param_2 + 0x418) = *(undefined4 *)(param_3 + 0x418);
    *(undefined4 *)(param_2 + 0x41c) = uVar1;
    *(undefined4 *)(param_2 + 0x420) = uVar2;
    *(undefined4 *)(param_2 + 0x424) = uVar3;
    *(undefined4 *)(param_2 + 0x428) = uVar4;
    *(undefined4 *)(param_2 + 0x42c) = uVar5;
    *(undefined4 *)(param_2 + 0x430) = uVar6;
    *(undefined4 *)(param_2 + 0x434) = uVar7;
    *(undefined4 *)(param_2 + 0x434) = uVar8;
    *(undefined4 *)(param_2 + 0x438) = uVar9;
    *(undefined4 *)(param_2 + 0x43c) = uVar10;
    *(undefined4 *)(param_2 + 0x440) = uVar11;
    param_2 = param_2 + 0x448;
    param_3 = param_3 + 0x448;
  }
  return 1;
}



// FUNCTION 14874f530 FUN_14874f530 body=59 status=ok
// SIG undefined FUN_14874f530(void)

undefined8 FUN_14874f530(longlong *param_1)

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



// FUNCTION 14874f57c FUN_14874f57c body=38 status=ok
// SIG undefined FUN_14874f57c(void)

void FUN_14874f57c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x448) == '\x01') {
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0x448) = 0;
  }
  return;
}



// FUNCTION 14874f5f0 FUN_14874f5f0 body=125 status=ok
// SIG undefined FUN_14874f5f0(void)

void FUN_14874f5f0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 2;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0x1000000000;
  *(undefined1 *)((longlong)param_1 + 0x3e4) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0xffffffff00000000;
  *(undefined1 *)(param_1 + 0x82) = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *param_1 = &PTR_FUN_14b2dfd70;
  return;
}



// FUNCTION 14874f66e FUN_14874f66e body=38 status=ok
// SIG undefined FUN_14874f66e(void)

undefined8 FUN_14874f66e(undefined8 param_1,int param_2)

{
  FUN_1405f0b44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14874f694 FUN_14874f694 body=55 status=ok
// SIG undefined FUN_14874f694(void)

void FUN_14874f694(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb691a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb691a8 = FUN_140002ddd(FUN_14651f3a2,uVar1,L"GpsGenerator_MissionActors");
  }
  return;
}



// FUNCTION 14874f6fc FUN_14874f6fc body=267 status=ok
// SIG undefined FUN_14874f6fc(void)

undefined8 FUN_14874f6fc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  if (param_4 != 0) {
    lVar11 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + 8 + lVar11);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar11);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar11);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 8 + lVar11);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_1470d00c2(param_2 + 0x28 + lVar11,param_3 + 0x28 + lVar11);
      *(undefined4 *)(param_2 + 0x38 + lVar11) = *(undefined4 *)(param_3 + 0x38 + lVar11);
      *(undefined4 *)(param_2 + 0x48 + lVar11) = *(undefined4 *)(param_3 + 0x48 + lVar11);
      *(undefined8 *)(param_2 + 0x40 + lVar11) = *(undefined8 *)(param_3 + 0x40 + lVar11);
      *(undefined8 *)(param_2 + 0x58 + lVar11) = *(undefined8 *)(param_3 + 0x58 + lVar11);
      *(undefined1 *)(param_2 + 0x60 + lVar11) = *(undefined1 *)(param_3 + 0x60 + lVar11);
      *(undefined4 *)(param_2 + 0x68 + lVar11) = *(undefined4 *)(param_3 + 0x68 + lVar11);
      *(undefined1 *)(param_2 + 0x80 + lVar11) = *(undefined1 *)(param_3 + 0x80 + lVar11);
      *(undefined8 *)(param_2 + 0x78 + lVar11) = *(undefined8 *)(param_3 + 0x78 + lVar11);
      puVar12 = (undefined8 *)(param_3 + 8 + lVar11 + 0x80);
      puVar13 = (undefined8 *)(param_2 + 8 + lVar11 + 0x80);
      for (lVar10 = 0xf; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      }
      *(undefined1 *)(param_2 + 0x100 + lVar11) = *(undefined1 *)(param_3 + 0x100 + lVar11);
      *(undefined1 *)(param_2 + 0x108 + lVar11) = *(undefined1 *)(param_3 + 0x108 + lVar11);
      lVar11 = lVar11 + 0x110;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14874f830 FUN_14874f830 body=59 status=ok
// SIG undefined FUN_14874f830(void)

undefined8 FUN_14874f830(longlong *param_1)

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



// FUNCTION 14874f87c FUN_14874f87c body=38 status=ok
// SIG undefined FUN_14874f87c(void)

void FUN_14874f87c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x110) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x110) = 0;
  }
  return;
}



// FUNCTION 14874f992 FUN_14874f992 body=105 status=ok
// SIG undefined FUN_14874f992(void)

undefined1 FUN_14874f992(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2f73c(param_2,param_3);
    FUN_14874fb00(param_2 + 0x418,param_3 + 0x418);
    param_3 = param_3 + 0x428;
    param_2 = param_2 + 0x428;
  }
  return 1;
}



// FUNCTION 14874fa24 FUN_14874fa24 body=59 status=ok
// SIG undefined FUN_14874fa24(void)

undefined8 FUN_14874fa24(longlong *param_1)

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



// FUNCTION 14874fa70 FUN_14874fa70 body=65 status=ok
// SIG undefined FUN_14874fa70(void)

void FUN_14874fa70(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x85) == '\x01') {
    *param_2 = &PTR_FUN_14b2e0210;
    if (param_2[0x83] != 0) {
      FUN_1400020a8();
    }
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0x85) = 0;
  }
  return;
}



// FUNCTION 14874fb00 FUN_14874fb00 body=88 status=ok
// SIG undefined FUN_14874fb00(void)

undefined8 * FUN_14874fb00(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14874fb58(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14874fb58 FUN_14874fb58 body=98 status=ok
// SIG undefined FUN_14874fb58(void)

void FUN_14874fb58(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14874fbbc FUN_14874fbbc body=80 status=ok
// SIG undefined FUN_14874fbbc(void)

void FUN_14874fbbc(undefined8 param_1,undefined8 *param_2)

{
  FUN_1412ebe6c(param_2);
  *param_2 = &PTR_FUN_14b2e0460;
  *(undefined4 *)(param_2 + 0x39) = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  *(undefined1 *)(param_2 + 0x42) = 0;
  return;
}



// FUNCTION 14874fc34 FUN_14874fc34 body=97 status=ok
// SIG undefined FUN_14874fc34(void)

undefined1 FUN_14874fc34(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f313ac(param_2,param_3);
    FUN_140c19bee(param_2 + 0x1c8,param_3 + 0x1c8);
    *(undefined1 *)(param_2 + 0x210) = *(undefined1 *)(param_3 + 0x210);
    param_2 = param_2 + 0x218;
    param_3 = param_3 + 0x218;
  }
  return 1;
}



// FUNCTION 14874fcbe FUN_14874fcbe body=59 status=ok
// SIG undefined FUN_14874fcbe(void)

undefined8 FUN_14874fcbe(longlong *param_1)

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



// FUNCTION 14874fd0a FUN_14874fd0a body=60 status=ok
// SIG undefined FUN_14874fd0a(void)

void FUN_14874fd0a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x43) == '\x01') {
    *param_2 = &PTR_FUN_14b2e0460;
    FUN_1412dafa6(param_2 + 0x39);
    FUN_140ff0132(param_2);
    *(undefined1 *)(param_2 + 0x43) = 0;
  }
  return;
}



// FUNCTION 14874fd94 FUN_14874fd94 body=57 status=ok
// SIG undefined FUN_14874fd94(void)

void FUN_14874fd94(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69208 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69208 = FUN_140002ddd(FUN_14651f55f,uVar1,L"GpsGeneratorSettings_Projectiles");
  }
  return;
}



// FUNCTION 14874fdce FUN_14874fdce body=37 status=ok
// SIG undefined FUN_14874fdce(void)

void FUN_14874fdce(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x448);
  FUN_14874ff70(param_2);
  return;
}



// FUNCTION 14874fe20 FUN_14874fe20 body=104 status=ok
// SIG undefined FUN_14874fe20(void)

undefined1 FUN_14874fe20(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2f73c(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x41c);
    uVar2 = *(undefined4 *)(param_3 + 0x420);
    uVar3 = *(undefined4 *)(param_3 + 0x424);
    uVar4 = *(undefined4 *)(param_3 + 0x428);
    uVar5 = *(undefined4 *)(param_3 + 0x42c);
    uVar6 = *(undefined4 *)(param_3 + 0x430);
    uVar7 = *(undefined4 *)(param_3 + 0x434);
    uVar8 = *(undefined4 *)(param_3 + 0x434);
    uVar9 = *(undefined4 *)(param_3 + 0x438);
    uVar10 = *(undefined4 *)(param_3 + 0x43c);
    uVar11 = *(undefined4 *)(param_3 + 0x440);
    *(undefined4 *)(param_2 + 0x418) = *(undefined4 *)(param_3 + 0x418);
    *(undefined4 *)(param_2 + 0x41c) = uVar1;
    *(undefined4 *)(param_2 + 0x420) = uVar2;
    *(undefined4 *)(param_2 + 0x424) = uVar3;
    *(undefined4 *)(param_2 + 0x428) = uVar4;
    *(undefined4 *)(param_2 + 0x42c) = uVar5;
    *(undefined4 *)(param_2 + 0x430) = uVar6;
    *(undefined4 *)(param_2 + 0x434) = uVar7;
    *(undefined4 *)(param_2 + 0x434) = uVar8;
    *(undefined4 *)(param_2 + 0x438) = uVar9;
    *(undefined4 *)(param_2 + 0x43c) = uVar10;
    *(undefined4 *)(param_2 + 0x440) = uVar11;
    param_2 = param_2 + 0x448;
    param_3 = param_3 + 0x448;
  }
  return 1;
}



// FUNCTION 14874feb0 FUN_14874feb0 body=59 status=ok
// SIG undefined FUN_14874feb0(void)

undefined8 FUN_14874feb0(longlong *param_1)

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



// FUNCTION 14874fefc FUN_14874fefc body=38 status=ok
// SIG undefined FUN_14874fefc(void)

void FUN_14874fefc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x448) == '\x01') {
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0x448) = 0;
  }
  return;
}



// FUNCTION 14874ff70 FUN_14874ff70 body=125 status=ok
// SIG undefined FUN_14874ff70(void)

void FUN_14874ff70(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 2;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0x1000000000;
  *(undefined1 *)((longlong)param_1 + 0x3e4) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0xffffffff00000000;
  *(undefined1 *)(param_1 + 0x82) = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *param_1 = &PTR_FUN_14b2e0660;
  return;
}



// FUNCTION 14874ffee FUN_14874ffee body=38 status=ok
// SIG undefined FUN_14874ffee(void)

undefined8 FUN_14874ffee(undefined8 param_1,int param_2)

{
  FUN_1405f0b44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148750014 FUN_148750014 body=55 status=ok
// SIG undefined FUN_148750014(void)

void FUN_148750014(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69220 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69220 = FUN_140002ddd(FUN_14651f5be,uVar1,L"GpsGenerator_Projectiles");
  }
  return;
}



// FUNCTION 14875007c FUN_14875007c body=504 status=ok
// SIG undefined FUN_14875007c(void)

undefined8 FUN_14875007c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong lVar18;
  
  if (param_4 != 0) {
    lVar18 = 0;
    do {
      lVar1 = lVar18 + param_2 + 0x1e0;
      lVar2 = param_3 + 0x1e0 + lVar18;
      puVar3 = (undefined4 *)(param_3 + 8 + lVar18);
      uVar5 = *puVar3;
      uVar6 = puVar3[1];
      uVar7 = puVar3[2];
      uVar8 = puVar3[3];
      puVar3 = (undefined4 *)(param_3 + 0x18 + lVar18);
      uVar9 = puVar3[1];
      uVar10 = puVar3[2];
      uVar11 = puVar3[3];
      puVar4 = (undefined4 *)(param_2 + 0x18 + lVar18);
      *puVar4 = *puVar3;
      puVar4[1] = uVar9;
      puVar4[2] = uVar10;
      puVar4[3] = uVar11;
      puVar3 = (undefined4 *)(param_2 + 8 + lVar18);
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_1470d00c2(param_2 + 0x28 + lVar18,param_3 + 0x28 + lVar18);
      *(undefined4 *)(param_2 + 0x38 + lVar18) = *(undefined4 *)(param_3 + 0x38 + lVar18);
      *(undefined1 *)(param_2 + 0x50 + lVar18) = *(undefined1 *)(param_3 + 0x50 + lVar18);
      *(undefined8 *)(param_2 + 0x48 + lVar18) = *(undefined8 *)(param_3 + 0x48 + lVar18);
      puVar16 = (undefined8 *)(lVar2 + -0x188);
      puVar17 = (undefined8 *)(lVar1 + -0x188);
      for (lVar15 = 0xf; lVar15 != 0; lVar15 = lVar15 + -1) {
        *puVar17 = *puVar16;
        puVar16 = puVar16 + 1;
        puVar17 = puVar17 + 1;
      }
      *(undefined1 *)(param_2 + 0xd0 + lVar18) = *(undefined1 *)(param_3 + 0xd0 + lVar18);
      *(undefined1 *)(param_2 + 0xe8 + lVar18) = *(undefined1 *)(param_3 + 0xe8 + lVar18);
      *(undefined8 *)(param_2 + 0xe0 + lVar18) = *(undefined8 *)(param_3 + 0xe0 + lVar18);
      puVar16 = (undefined8 *)(lVar2 + -0xf0);
      puVar17 = (undefined8 *)(lVar1 + -0xf0);
      for (lVar15 = 9; lVar15 != 0; lVar15 = lVar15 + -1) {
        *puVar17 = *puVar16;
        puVar16 = puVar16 + 1;
        puVar17 = puVar17 + 1;
      }
      *(undefined1 *)(param_2 + 0x148 + lVar18) = *(undefined1 *)(param_3 + 0x148 + lVar18);
      *(undefined8 *)(param_2 + 0x140 + lVar18) = *(undefined8 *)(param_3 + 0x140 + lVar18);
      *(undefined4 *)(param_2 + 0x150 + lVar18) = *(undefined4 *)(param_3 + 0x150 + lVar18);
      *(undefined8 *)(param_2 + 0x178 + lVar18) = *(undefined8 *)(param_3 + 0x178 + lVar18);
      puVar16 = (undefined8 *)(param_3 + 0x158 + lVar18);
      uVar12 = *puVar16;
      uVar13 = puVar16[1];
      puVar16 = (undefined8 *)(param_3 + 0x168 + lVar18);
      uVar14 = puVar16[1];
      puVar17 = (undefined8 *)(param_2 + 0x168 + lVar18);
      *puVar17 = *puVar16;
      puVar17[1] = uVar14;
      puVar16 = (undefined8 *)(param_2 + 0x158 + lVar18);
      *puVar16 = uVar12;
      puVar16[1] = uVar13;
      *(undefined8 *)(param_2 + 0x188 + lVar18) = *(undefined8 *)(param_3 + 0x188 + lVar18);
      *(undefined1 *)(param_2 + 400 + lVar18) = *(undefined1 *)(param_3 + 400 + lVar18);
      *(undefined4 *)(param_2 + 0x198 + lVar18) = *(undefined4 *)(param_3 + 0x198 + lVar18);
      *(undefined1 *)(param_2 + 0x1b0 + lVar18) = *(undefined1 *)(param_3 + 0x1b0 + lVar18);
      *(undefined8 *)(param_2 + 0x1a8 + lVar18) = *(undefined8 *)(param_3 + 0x1a8 + lVar18);
      *(undefined4 *)(param_2 + 0x1b8 + lVar18) = *(undefined4 *)(param_3 + 0x1b8 + lVar18);
      *(undefined8 *)(param_2 + 0x1c8 + lVar18) = *(undefined8 *)(param_3 + 0x1c8 + lVar18);
      *(undefined1 *)(param_2 + 0x1d0 + lVar18) = *(undefined1 *)(param_3 + 0x1d0 + lVar18);
      *(undefined4 *)(param_2 + 0x1d8 + lVar18) = *(undefined4 *)(param_3 + 0x1d8 + lVar18);
      *(undefined1 *)(param_2 + 0x1e0 + lVar18) = *(undefined1 *)(param_3 + 0x1e0 + lVar18);
      lVar18 = lVar18 + 0x1e8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14875029c FUN_14875029c body=59 status=ok
// SIG undefined FUN_14875029c(void)

undefined8 FUN_14875029c(longlong *param_1)

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



// FUNCTION 1487502e8 FUN_1487502e8 body=38 status=ok
// SIG undefined FUN_1487502e8(void)

void FUN_1487502e8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1e8) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x1e8) = 0;
  }
  return;
}



// FUNCTION 148750360 FUN_148750360 body=38 status=ok
// SIG undefined FUN_148750360(void)

undefined8 FUN_148750360(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148750386 FUN_148750386 body=55 status=ok
// SIG undefined FUN_148750386(void)

void FUN_148750386(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69268 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69268 = FUN_140002ddd(FUN_14651f684,uVar1,L"GpsGeneratorSettings_ProjectOntoShape");
  }
  return;
}



// FUNCTION 1487503be FUN_1487503be body=48 status=ok
// SIG undefined FUN_1487503be(void)

void FUN_1487503be(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x4e0);
  FUN_14875060c(param_2);
  *param_2 = &PTR_FUN_14b2e0b50;
  return;
}



// FUNCTION 1487503ee FUN_1487503ee body=32 status=ok
// SIG undefined FUN_1487503ee(void)

void FUN_1487503ee(undefined8 param_1,undefined8 *param_2)

{
  FUN_14875060c(param_2);
  *param_2 = &PTR_FUN_14b2e0b50;
  return;
}



// FUNCTION 148750432 FUN_148750432 body=240 status=ok
// SIG undefined FUN_148750432(void)

undefined8 FUN_148750432(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2f73c(param_2,param_3);
    uVar12 = *(undefined8 *)(param_3 + 0x420);
    uVar13 = *(undefined8 *)(param_3 + 0x428);
    uVar14 = *(undefined8 *)(param_3 + 0x430);
    uVar15 = *(undefined8 *)(param_3 + 0x438);
    uVar16 = *(undefined8 *)(param_3 + 0x440);
    *(undefined8 *)(param_2 + 0x418) = *(undefined8 *)(param_3 + 0x418);
    *(undefined8 *)(param_2 + 0x420) = uVar12;
    *(undefined8 *)(param_2 + 0x428) = uVar13;
    *(undefined8 *)(param_2 + 0x430) = uVar14;
    *(undefined8 *)(param_2 + 0x438) = uVar15;
    *(undefined8 *)(param_2 + 0x440) = uVar16;
    *(undefined8 *)(param_2 + 0x448) = *(undefined8 *)(param_3 + 0x448);
    uVar1 = *(undefined4 *)(param_3 + 0x450);
    uVar2 = *(undefined4 *)(param_3 + 0x454);
    uVar3 = *(undefined4 *)(param_3 + 0x458);
    uVar4 = *(undefined4 *)(param_3 + 0x45c);
    uVar5 = *(undefined4 *)(param_3 + 0x460);
    uVar6 = *(undefined4 *)(param_3 + 0x464);
    uVar7 = *(undefined4 *)(param_3 + 0x468);
    uVar8 = *(undefined4 *)(param_3 + 0x46c);
    uVar9 = *(undefined4 *)(param_3 + 0x46e);
    uVar10 = *(undefined4 *)(param_3 + 0x472);
    uVar11 = *(undefined4 *)(param_3 + 0x476);
    *(undefined4 *)(param_2 + 0x46a) = *(undefined4 *)(param_3 + 0x46a);
    *(undefined4 *)(param_2 + 0x46e) = uVar9;
    *(undefined4 *)(param_2 + 0x472) = uVar10;
    *(undefined4 *)(param_2 + 0x476) = uVar11;
    *(undefined4 *)(param_2 + 0x460) = uVar5;
    *(undefined4 *)(param_2 + 0x464) = uVar6;
    *(undefined4 *)(param_2 + 0x468) = uVar7;
    *(undefined4 *)(param_2 + 0x46c) = uVar8;
    *(undefined4 *)(param_2 + 0x450) = uVar1;
    *(undefined4 *)(param_2 + 0x454) = uVar2;
    *(undefined4 *)(param_2 + 0x458) = uVar3;
    *(undefined4 *)(param_2 + 0x45c) = uVar4;
    FUN_14470be02(param_2 + 0x480,param_3 + 0x480);
    FUN_14471637c(param_2 + 0x4b0,param_3 + 0x4b0);
    *(undefined8 *)(param_2 + 0x4d0) = *(undefined8 *)(param_3 + 0x4d0);
    *(undefined4 *)(param_2 + 0x4d8) = *(undefined4 *)(param_3 + 0x4d8);
    param_2 = param_2 + 0x4e0;
    param_3 = param_3 + 0x4e0;
  }
  return 1;
}



// FUNCTION 14875054a FUN_14875054a body=59 status=ok
// SIG undefined FUN_14875054a(void)

undefined8 FUN_14875054a(longlong *param_1)

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



// FUNCTION 148750596 FUN_148750596 body=40 status=ok
// SIG undefined FUN_148750596(void)

void FUN_148750596(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4e0) == '\x01') {
    FUN_1487507fe(param_2);
    *(undefined1 *)(param_2 + 0x4e0) = 0;
  }
  return;
}



// FUNCTION 14875060c FUN_14875060c body=305 status=ok
// SIG undefined FUN_14875060c(void)

void FUN_14875060c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 2;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0x1000000000;
  *(undefined1 *)((longlong)param_1 + 0x3e4) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0xffffffff00000000;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *param_1 = &PTR_FUN_14b2e0c40;
  param_1[0x85] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x83] = DAT_14c8464e0;
  param_1[0x84] = uVar1;
  uVar1 = DAT_14c846500;
  param_1[0x86] = DAT_14c8464f8;
  param_1[0x87] = uVar1;
  param_1[0x88] = DAT_14c846508;
  param_1[0x89] = 0x300000000;
  *(undefined4 *)((longlong)param_1 + 0x474) = 0;
  *(undefined2 *)(param_1 + 0x8f) = 0x101;
  param_1[0x94] = 0;
  param_1[0x95] = 0x800000000;
  param_1[0x98] = 0;
  param_1[0x99] = 0x400000000;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  *(undefined2 *)((longlong)param_1 + 0x461) = 1;
  *(undefined1 *)((longlong)param_1 + 0x463) = 0;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0x1000000;
  *(undefined1 *)(param_1 + 0x8d) = 1;
  return;
}



// FUNCTION 14875073e FUN_14875073e body=38 status=ok
// SIG undefined FUN_14875073e(void)

undefined8 FUN_14875073e(undefined8 param_1,int param_2)

{
  FUN_1487507fe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148750764 FUN_148750764 body=55 status=ok
// SIG undefined FUN_148750764(void)

void FUN_148750764(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69250 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69250 = FUN_140002ddd(FUN_14651f6e4,uVar1,L"GpsGenerator_ProjectOntoCylinder");
  }
  return;
}



// FUNCTION 14875079c FUN_14875079c body=38 status=ok
// SIG undefined FUN_14875079c(void)

undefined8 FUN_14875079c(undefined8 param_1,int param_2)

{
  FUN_1487507fe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487507c2 FUN_1487507c2 body=55 status=ok
// SIG undefined FUN_1487507c2(void)

void FUN_1487507c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69280 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69280 = FUN_140002ddd(FUN_14651f713,uVar1,L"GpsGenerator_ProjectOntoShape");
  }
  return;
}



// FUNCTION 1487507fe FUN_1487507fe body=65 status=ok
// SIG undefined FUN_1487507fe(void)

void FUN_1487507fe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2e0c40;
  if (param_1[0x98] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x94] != 0) {
    FUN_1400020a8();
  }
  FUN_1405f0b44(param_1);
  return;
}



// FUNCTION 148750840 FUN_148750840 body=37 status=ok
// SIG undefined FUN_148750840(void)

void FUN_148750840(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x180);
  FUN_145c3211c(param_2);
  return;
}



// FUNCTION 1487508b2 FUN_1487508b2 body=354 status=ok
// SIG undefined FUN_1487508b2(void)

undefined8 FUN_1487508b2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  
  if (param_4 != 0) {
    lVar16 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + 0x158 + lVar16);
      uVar3 = *(undefined4 *)(puVar1 + -0x2a);
      uVar4 = *(undefined4 *)((longlong)puVar1 + -0x14c);
      uVar5 = *(undefined4 *)(puVar1 + -0x29);
      uVar6 = *(undefined4 *)((longlong)puVar1 + -0x144);
      uVar7 = *(undefined4 *)((longlong)puVar1 + -0x13c);
      uVar8 = *(undefined4 *)(puVar1 + -0x27);
      uVar9 = *(undefined4 *)((longlong)puVar1 + -0x134);
      puVar2 = (undefined8 *)(param_2 + 0xf0 + lVar16);
      *(undefined4 *)(puVar2 + -0x1b) = *(undefined4 *)(puVar1 + -0x28);
      *(undefined4 *)((longlong)puVar2 + -0xd4) = uVar7;
      *(undefined4 *)(puVar2 + -0x1a) = uVar8;
      *(undefined4 *)((longlong)puVar2 + -0xcc) = uVar9;
      *(undefined4 *)(puVar2 + -0x1d) = uVar3;
      *(undefined4 *)((longlong)puVar2 + -0xe4) = uVar4;
      *(undefined4 *)(puVar2 + -0x1c) = uVar5;
      *(undefined4 *)((longlong)puVar2 + -0xdc) = uVar6;
      FUN_1470d00c2(lVar16 + param_2 + 0x28,param_3 + 0x28 + lVar16);
      *(undefined4 *)(puVar2 + -0x17) = *(undefined4 *)(puVar1 + -0x24);
      *(undefined1 *)(puVar2 + -0x14) = *(undefined1 *)(puVar1 + -0x21);
      puVar2[-0x15] = puVar1[-0x22];
      puVar14 = (undefined8 *)(param_3 + 0x158 + lVar16 + -0x100);
      puVar15 = (undefined8 *)(param_2 + lVar16 + 0x58);
      for (lVar13 = 0xf; lVar13 != 0; lVar13 = lVar13 + -1) {
        *puVar15 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar15 = puVar15 + 1;
      }
      *(undefined1 *)(puVar2 + -4) = *(undefined1 *)(puVar1 + -0x11);
      *(undefined1 *)(puVar2 + -1) = *(undefined1 *)(puVar1 + -0xe);
      puVar2[-2] = puVar1[-0xf];
      puVar14 = puVar1 + -0xd;
      puVar15 = puVar2;
      for (lVar13 = 9; lVar13 != 0; lVar13 = lVar13 + -1) {
        *puVar15 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar15 = puVar15 + 1;
      }
      *(undefined1 *)(puVar2 + 0xb) = *(undefined1 *)(puVar1 + -2);
      puVar2[10] = puVar1[-3];
      *(undefined4 *)(puVar2 + 0xc) = *(undefined4 *)(puVar1 + -1);
      puVar2[0x11] = puVar1[4];
      uVar10 = *puVar1;
      uVar11 = puVar1[1];
      uVar12 = puVar1[3];
      puVar2[0xf] = puVar1[2];
      puVar2[0x10] = uVar12;
      puVar2[0xd] = uVar10;
      puVar2[0xe] = uVar11;
      lVar16 = lVar16 + 0x180;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148750a3c FUN_148750a3c body=59 status=ok
// SIG undefined FUN_148750a3c(void)

undefined8 FUN_148750a3c(longlong *param_1)

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



// FUNCTION 148750a88 FUN_148750a88 body=38 status=ok
// SIG undefined FUN_148750a88(void)

void FUN_148750a88(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x180) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x180) = 0;
  }
  return;
}



// FUNCTION 148750afe FUN_148750afe body=37 status=ok
// SIG undefined FUN_148750afe(void)

void FUN_148750afe(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x4d0);
  FUN_14875060c(param_2);
  return;
}



// FUNCTION 148750b50 FUN_148750b50 body=214 status=ok
// SIG undefined FUN_148750b50(void)

undefined8 FUN_148750b50(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2f73c(param_2,param_3);
    uVar12 = *(undefined8 *)(param_3 + 0x420);
    uVar13 = *(undefined8 *)(param_3 + 0x428);
    uVar14 = *(undefined8 *)(param_3 + 0x430);
    uVar15 = *(undefined8 *)(param_3 + 0x438);
    uVar16 = *(undefined8 *)(param_3 + 0x440);
    *(undefined8 *)(param_2 + 0x418) = *(undefined8 *)(param_3 + 0x418);
    *(undefined8 *)(param_2 + 0x420) = uVar12;
    *(undefined8 *)(param_2 + 0x428) = uVar13;
    *(undefined8 *)(param_2 + 0x430) = uVar14;
    *(undefined8 *)(param_2 + 0x438) = uVar15;
    *(undefined8 *)(param_2 + 0x440) = uVar16;
    *(undefined8 *)(param_2 + 0x448) = *(undefined8 *)(param_3 + 0x448);
    uVar1 = *(undefined4 *)(param_3 + 0x450);
    uVar2 = *(undefined4 *)(param_3 + 0x454);
    uVar3 = *(undefined4 *)(param_3 + 0x458);
    uVar4 = *(undefined4 *)(param_3 + 0x45c);
    uVar5 = *(undefined4 *)(param_3 + 0x460);
    uVar6 = *(undefined4 *)(param_3 + 0x464);
    uVar7 = *(undefined4 *)(param_3 + 0x468);
    uVar8 = *(undefined4 *)(param_3 + 0x46c);
    uVar9 = *(undefined4 *)(param_3 + 0x46e);
    uVar10 = *(undefined4 *)(param_3 + 0x472);
    uVar11 = *(undefined4 *)(param_3 + 0x476);
    *(undefined4 *)(param_2 + 0x46a) = *(undefined4 *)(param_3 + 0x46a);
    *(undefined4 *)(param_2 + 0x46e) = uVar9;
    *(undefined4 *)(param_2 + 0x472) = uVar10;
    *(undefined4 *)(param_2 + 0x476) = uVar11;
    *(undefined4 *)(param_2 + 0x460) = uVar5;
    *(undefined4 *)(param_2 + 0x464) = uVar6;
    *(undefined4 *)(param_2 + 0x468) = uVar7;
    *(undefined4 *)(param_2 + 0x46c) = uVar8;
    *(undefined4 *)(param_2 + 0x450) = uVar1;
    *(undefined4 *)(param_2 + 0x454) = uVar2;
    *(undefined4 *)(param_2 + 0x458) = uVar3;
    *(undefined4 *)(param_2 + 0x45c) = uVar4;
    FUN_14470be02(param_2 + 0x480,param_3 + 0x480);
    FUN_14471637c(param_2 + 0x4b0,param_3 + 0x4b0);
    param_2 = param_2 + 0x4d0;
    param_3 = param_3 + 0x4d0;
  }
  return 1;
}



// FUNCTION 148750c4e FUN_148750c4e body=59 status=ok
// SIG undefined FUN_148750c4e(void)

undefined8 FUN_148750c4e(longlong *param_1)

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



// FUNCTION 148750c9a FUN_148750c9a body=40 status=ok
// SIG undefined FUN_148750c9a(void)

void FUN_148750c9a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4d0) == '\x01') {
    FUN_1487507fe(param_2);
    *(undefined1 *)(param_2 + 0x4d0) = 0;
  }
  return;
}



// FUNCTION 148750d38 FUN_148750d38 body=456 status=ok
// SIG undefined FUN_148750d38(void)

void FUN_148750d38(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  int local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  local_30 = 0x678bcdb;
  local_28 = 0;
  FUN_1446ef920();
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
  iVar1 = local_3c;
  local_40 = 0;
  FUN_144a64e42();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_38;
  local_58 = local_30;
  local_50 = 0;
  local_68 = local_48;
  FUN_1488bbb8e(param_1,&local_60,iVar1 != 0,local_40);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148750f36 FUN_148750f36 body=156 status=ok
// SIG undefined FUN_148750f36(void)

void FUN_148750f36(undefined8 param_1,longlong param_2)

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
  FUN_1488bbc4a(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148750fd8 FUN_148750fd8 body=158 status=ok
// SIG undefined FUN_148750fd8(void)

void FUN_148750fd8(undefined8 param_1,longlong param_2)

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
  FUN_1488bb962(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14875108a FUN_14875108a body=104 status=ok
// SIG undefined FUN_14875108a(void)

void FUN_14875108a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb69530) {
    FUN_144b3d300(&DAT_14cb69530);
    if (DAT_14cb69530 == -1) {
      FUN_1446f470e(&DAT_14cb69528,L"RepHazardInteractionState",1);
      _Init_thread_footer(&DAT_14cb69530);
      return;
    }
  }
  return;
}



// FUNCTION 1487511f6 FUN_1487511f6 body=48 status=ok
// SIG undefined FUN_1487511f6(void)

longlong FUN_1487511f6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d0;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148751226 FUN_148751226 body=48 status=ok
// SIG undefined FUN_148751226(void)

longlong FUN_148751226(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d8;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148751256 FUN_148751256 body=48 status=ok
// SIG undefined FUN_148751256(void)

longlong FUN_148751256(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3e0;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148751286 FUN_148751286 body=48 status=ok
// SIG undefined FUN_148751286(void)

longlong FUN_148751286(longlong param_1,int param_2)

{
  param_1 = param_1 + -1000;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487512b6 FUN_1487512b6 body=48 status=ok
// SIG undefined FUN_1487512b6(void)

longlong FUN_1487512b6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f0;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487512e6 FUN_1487512e6 body=48 status=ok
// SIG undefined FUN_1487512e6(void)

longlong FUN_1487512e6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148751316 FUN_148751316 body=45 status=ok
// SIG undefined FUN_148751316(void)

longlong FUN_148751316(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145ceb4ce(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148751344 FUN_148751344 body=48 status=ok
// SIG undefined FUN_148751344(void)

longlong FUN_148751344(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_145ceb4ce(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148751374 FUN_148751374 body=48 status=ok
// SIG undefined FUN_148751374(void)

longlong FUN_148751374(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_145ceb4ce(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487513a4 FUN_1487513a4 body=48 status=ok
// SIG undefined FUN_1487513a4(void)

longlong FUN_1487513a4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_145ceb4ce(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487513d4 FUN_1487513d4 body=45 status=ok
// SIG undefined FUN_1487513d4(void)

longlong FUN_1487513d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140c3b684(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148751408 FUN_148751408 body=48 status=ok
// SIG undefined FUN_148751408(void)

longlong FUN_148751408(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_140c3b684(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148751440 FUN_148751440 body=45 status=ok
// SIG undefined FUN_148751440(void)

longlong FUN_148751440(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d49de0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14875146e FUN_14875146e body=48 status=ok
// SIG undefined FUN_14875146e(void)

longlong FUN_14875146e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_145d49de0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14875149e FUN_14875149e body=48 status=ok
// SIG undefined FUN_14875149e(void)

longlong FUN_14875149e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_145d49de0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487514ce FUN_1487514ce body=48 status=ok
// SIG undefined FUN_1487514ce(void)

longlong FUN_1487514ce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_145d49de0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148751504 FUN_148751504 body=49 status=ok
// SIG undefined FUN_148751504(void)

void FUN_148751504(undefined8 param_1,undefined8 *param_2)

{
  FUN_1412ebe6c(param_2);
  *param_2 = &PTR_FUN_14b2e9250;
  *(undefined4 *)(param_2 + 0x39) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1cc) = 0;
  return;
}



// FUNCTION 14875155e FUN_14875155e body=86 status=ok
// SIG undefined FUN_14875155e(void)

undefined8 FUN_14875155e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f313ac(param_2,param_3);
    *(undefined4 *)(param_2 + 0x1c8) = *(undefined4 *)(param_3 + 0x1c8);
    *(undefined1 *)(param_2 + 0x1cc) = *(undefined1 *)(param_3 + 0x1cc);
    param_2 = param_2 + 0x1d0;
    param_3 = param_3 + 0x1d0;
  }
  return 1;
}



// FUNCTION 1487515dc FUN_1487515dc body=59 status=ok
// SIG undefined FUN_1487515dc(void)

undefined8 FUN_1487515dc(longlong *param_1)

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



// FUNCTION 148751628 FUN_148751628 body=38 status=ok
// SIG undefined FUN_148751628(void)

void FUN_148751628(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d0) == '\x01') {
    FUN_140ff0132(param_2);
    *(undefined1 *)(param_2 + 0x1d0) = 0;
  }
  return;
}



// FUNCTION 1487516ca FUN_1487516ca body=118 status=ok
// SIG undefined FUN_1487516ca(void)

undefined8 FUN_1487516ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2f73c(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x41c);
    uVar2 = *(undefined4 *)(param_3 + 0x420);
    uVar3 = *(undefined4 *)(param_3 + 0x424);
    uVar4 = *(undefined4 *)(param_3 + 0x428);
    uVar5 = *(undefined4 *)(param_3 + 0x42c);
    uVar6 = *(undefined4 *)(param_3 + 0x430);
    uVar7 = *(undefined4 *)(param_3 + 0x434);
    uVar8 = *(undefined4 *)(param_3 + 0x434);
    uVar9 = *(undefined4 *)(param_3 + 0x438);
    uVar10 = *(undefined4 *)(param_3 + 0x43c);
    uVar11 = *(undefined4 *)(param_3 + 0x440);
    *(undefined4 *)(param_2 + 0x418) = *(undefined4 *)(param_3 + 0x418);
    *(undefined4 *)(param_2 + 0x41c) = uVar1;
    *(undefined4 *)(param_2 + 0x420) = uVar2;
    *(undefined4 *)(param_2 + 0x424) = uVar3;
    *(undefined4 *)(param_2 + 0x428) = uVar4;
    *(undefined4 *)(param_2 + 0x42c) = uVar5;
    *(undefined4 *)(param_2 + 0x430) = uVar6;
    *(undefined4 *)(param_2 + 0x434) = uVar7;
    *(undefined4 *)(param_2 + 0x434) = uVar8;
    *(undefined4 *)(param_2 + 0x438) = uVar9;
    *(undefined4 *)(param_2 + 0x43c) = uVar10;
    *(undefined4 *)(param_2 + 0x440) = uVar11;
    *(undefined8 *)(param_2 + 0x448) = *(undefined8 *)(param_3 + 0x448);
    param_2 = param_2 + 0x450;
    param_3 = param_3 + 0x450;
  }
  return 1;
}



// FUNCTION 148751768 FUN_148751768 body=59 status=ok
// SIG undefined FUN_148751768(void)

undefined8 FUN_148751768(longlong *param_1)

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



// FUNCTION 1487517b4 FUN_1487517b4 body=38 status=ok
// SIG undefined FUN_1487517b4(void)

void FUN_1487517b4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x450) == '\x01') {
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0x450) = 0;
  }
  return;
}



// FUNCTION 14875182a FUN_14875182a body=63 status=ok
// SIG undefined FUN_14875182a(void)

void FUN_14875182a(undefined8 param_1,undefined8 *param_2)

{
  FUN_140d710e4(param_2);
  *param_2 = &PTR_FUN_14b2e96a0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  return;
}



// FUNCTION 148751892 FUN_148751892 body=63 status=ok
// SIG undefined FUN_148751892(void)

undefined1 FUN_148751892(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487519da(param_2,param_3);
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return 1;
}



// FUNCTION 1487518fa FUN_1487518fa body=59 status=ok
// SIG undefined FUN_1487518fa(void)

undefined8 FUN_1487518fa(longlong *param_1)

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



// FUNCTION 148751946 FUN_148751946 body=65 status=ok
// SIG undefined FUN_148751946(void)

void FUN_148751946(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    *param_2 = &PTR_FUN_14b2e96a0;
    if (param_2[0x16] != 0) {
      FUN_1400020a8();
    }
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1487519da FUN_1487519da body=170 status=ok
// SIG undefined FUN_1487519da(void)

longlong FUN_1487519da(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  FUN_145c56af0(param_1 + 0x80,param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  uVar1 = *(undefined4 *)(param_2 + 0xa4);
  uVar2 = *(undefined4 *)(param_2 + 0xa8);
  uVar3 = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  *(undefined4 *)(param_1 + 0xac) = uVar3;
  FUN_144a787a6(param_1 + 0xb0,param_2 + 0xb0);
  return param_1;
}



// FUNCTION 148751b20 FUN_148751b20 body=118 status=ok
// SIG undefined FUN_148751b20(void)

undefined8 FUN_148751b20(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_1470d03b0(param_2 + 8,param_3 + 8);
      FUN_1470d03b0(param_2 + 0x20,param_3 + 0x20);
    }
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    uVar1 = *(undefined8 *)(param_3 + 0x40);
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_3 + 0x38);
    *(undefined8 *)(param_2 + 0x40) = uVar1;
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
    *(undefined2 *)(param_2 + 0x54) = *(undefined2 *)(param_3 + 0x54);
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_3 + 0x58);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 148751bbe FUN_148751bbe body=59 status=ok
// SIG undefined FUN_148751bbe(void)

undefined8 FUN_148751bbe(longlong *param_1)

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



// FUNCTION 148751c04 FUN_148751c04 body=32 status=ok
// SIG undefined FUN_148751c04(void)

void FUN_148751c04(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148751c72 FUN_148751c72 body=38 status=ok
// SIG undefined FUN_148751c72(void)

undefined8 FUN_148751c72(undefined8 param_1,int param_2)

{
  FUN_140f9d4d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148751c98 FUN_148751c98 body=55 status=ok
// SIG undefined FUN_148751c98(void)

void FUN_148751c98(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69368 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69368 = FUN_140002ddd(FUN_1465202d8,uVar1,L"GpsTest_GbxSkillParam");
  }
  return;
}



// FUNCTION 148751cd0 FUN_148751cd0 body=65 status=ok
// SIG undefined FUN_148751cd0(void)

void FUN_148751cd0(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xa0);
  FUN_140d710e4(param_2);
  *param_2 = &PTR_FUN_14b2e9ae0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined8 *)((longlong)param_2 + 0x89) = 0;
  *(undefined8 *)((longlong)param_2 + 0x91) = 0;
  return;
}



// FUNCTION 148751d12 FUN_148751d12 body=49 status=ok
// SIG undefined FUN_148751d12(void)

void FUN_148751d12(undefined8 param_1,undefined8 *param_2)

{
  FUN_140d710e4(param_2);
  *param_2 = &PTR_FUN_14b2e9ae0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined8 *)((longlong)param_2 + 0x89) = 0;
  *(undefined8 *)((longlong)param_2 + 0x91) = 0;
  return;
}



// FUNCTION 148751d88 FUN_148751d88 body=166 status=ok
// SIG undefined FUN_148751d88(void)

undefined8 FUN_148751d88(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x78);
      uVar2 = *(undefined4 *)(param_3 + -0x74);
      uVar3 = *(undefined4 *)(param_3 + -0x70);
      uVar4 = *(undefined4 *)(param_3 + -0x6c);
      uVar5 = *(undefined4 *)(param_3 + -100);
      uVar6 = *(undefined4 *)(param_3 + -0x60);
      uVar7 = *(undefined4 *)(param_3 + -0x5c);
      *(undefined4 *)(param_2 + -0x68) = *(undefined4 *)(param_3 + -0x68);
      *(undefined4 *)(param_2 + -100) = uVar5;
      *(undefined4 *)(param_2 + -0x60) = uVar6;
      *(undefined4 *)(param_2 + -0x5c) = uVar7;
      *(undefined4 *)(param_2 + -0x78) = uVar1;
      *(undefined4 *)(param_2 + -0x74) = uVar2;
      *(undefined4 *)(param_2 + -0x70) = uVar3;
      *(undefined4 *)(param_2 + -0x6c) = uVar4;
      FUN_1470d00c2(param_2 + -0x58,param_3 + -0x58);
      *(undefined8 *)(param_2 + -0x40) = *(undefined8 *)(param_3 + -0x40);
      *(undefined1 *)(param_2 + -0x38) = *(undefined1 *)(param_3 + -0x38);
      *(undefined2 *)(param_2 + -0x30) = *(undefined2 *)(param_3 + -0x30);
      *(undefined1 *)(param_2 + -0x18) = *(undefined1 *)(param_3 + -0x18);
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_14870773e(param_2,param_3);
      *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_3 + 0x18);
      param_3 = param_3 + 0xa0;
      param_2 = param_2 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148751e56 FUN_148751e56 body=59 status=ok
// SIG undefined FUN_148751e56(void)

undefined8 FUN_148751e56(longlong *param_1)

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



// FUNCTION 148751ea2 FUN_148751ea2 body=38 status=ok
// SIG undefined FUN_148751ea2(void)

void FUN_148751ea2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 148751f16 FUN_148751f16 body=38 status=ok
// SIG undefined FUN_148751f16(void)

undefined8 FUN_148751f16(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148751f3c FUN_148751f3c body=55 status=ok
// SIG undefined FUN_148751f3c(void)

void FUN_148751f3c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69380 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69380 = FUN_140002ddd(FUN_14652036f,uVar1,L"GpsTestSettings_GbxSkillTargetList");
  }
  return;
}



// FUNCTION 148752012 FUN_148752012 body=118 status=ok
// SIG undefined FUN_148752012(void)

undefined8 FUN_148752012(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_1470d03b0(param_2 + 8,param_3 + 8);
      FUN_1470d03b0(param_2 + 0x20,param_3 + 0x20);
    }
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    uVar1 = *(undefined8 *)(param_3 + 0x40);
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_3 + 0x38);
    *(undefined8 *)(param_2 + 0x40) = uVar1;
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
    *(undefined2 *)(param_2 + 0x54) = *(undefined2 *)(param_3 + 0x54);
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_3 + 0x58);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 1487520b0 FUN_1487520b0 body=59 status=ok
// SIG undefined FUN_1487520b0(void)

undefined8 FUN_1487520b0(longlong *param_1)

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



// FUNCTION 1487520f6 FUN_1487520f6 body=32 status=ok
// SIG undefined FUN_1487520f6(void)

void FUN_1487520f6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148752164 FUN_148752164 body=38 status=ok
// SIG undefined FUN_148752164(void)

undefined8 FUN_148752164(undefined8 param_1,int param_2)

{
  FUN_140f9d4d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14875218a FUN_14875218a body=55 status=ok
// SIG undefined FUN_14875218a(void)

void FUN_14875218a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69398 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69398 = FUN_140002ddd(FUN_146520405,uVar1,L"GpsTest_GbxSkillTargetList");
  }
  return;
}



// FUNCTION 1487521f2 FUN_1487521f2 body=349 status=ok
// SIG undefined FUN_1487521f2(void)

undefined8 FUN_1487521f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      puVar1 = (undefined4 *)(param_3 + 8 + lVar10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar10);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 8 + lVar10);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_1470d00c2(param_2 + 0x28 + lVar10,param_3 + 0x28 + lVar10);
      *(undefined8 *)(param_2 + 0x40 + lVar10) = *(undefined8 *)(param_3 + 0x40 + lVar10);
      *(undefined1 *)(param_2 + 0x48 + lVar10) = *(undefined1 *)(param_3 + 0x48 + lVar10);
      *(undefined2 *)(param_2 + 0x50 + lVar10) = *(undefined2 *)(param_3 + 0x50 + lVar10);
      *(undefined1 *)(param_2 + 0x68 + lVar10) = *(undefined1 *)(param_3 + 0x68 + lVar10);
      *(undefined8 *)(param_2 + 0x60 + lVar10) = *(undefined8 *)(param_3 + 0x60 + lVar10);
      *(undefined4 *)(param_2 + 0x70 + lVar10) = *(undefined4 *)(param_3 + 0x70 + lVar10);
      *(undefined8 *)(param_2 + 0x78 + lVar10) = *(undefined8 *)(param_3 + 0x78 + lVar10);
      *(undefined8 *)(param_2 + 0x88 + lVar10) = *(undefined8 *)(param_3 + 0x88 + lVar10);
      *(undefined1 *)(param_2 + 0x90 + lVar10) = *(undefined1 *)(param_3 + 0x90 + lVar10);
      *(undefined4 *)(param_2 + 0x98 + lVar10) = *(undefined4 *)(param_3 + 0x98 + lVar10);
      *(undefined8 *)(param_2 + 0xa8 + lVar10) = *(undefined8 *)(param_3 + 0xa8 + lVar10);
      *(undefined1 *)(param_2 + 0xb0 + lVar10) = *(undefined1 *)(param_3 + 0xb0 + lVar10);
      *(undefined4 *)(param_2 + 0xb8 + lVar10) = *(undefined4 *)(param_3 + 0xb8 + lVar10);
      *(undefined1 *)(param_2 + 0xd0 + lVar10) = *(undefined1 *)(param_3 + 0xd0 + lVar10);
      *(undefined8 *)(param_2 + 200 + lVar10) = *(undefined8 *)(param_3 + 200 + lVar10);
      *(undefined4 *)(param_2 + 0xd8 + lVar10) = *(undefined4 *)(param_3 + 0xd8 + lVar10);
      *(undefined4 *)(param_2 + 0xe0 + lVar10) = *(undefined4 *)(param_3 + 0xe0 + lVar10);
      *(undefined1 *)(param_2 + 0xe4 + lVar10) = *(undefined1 *)(param_3 + 0xe4 + lVar10);
      lVar10 = lVar10 + 0xe8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148752378 FUN_148752378 body=59 status=ok
// SIG undefined FUN_148752378(void)

undefined8 FUN_148752378(longlong *param_1)

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



// FUNCTION 1487523c4 FUN_1487523c4 body=38 status=ok
// SIG undefined FUN_1487523c4(void)

void FUN_1487523c4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 148752494 FUN_148752494 body=54 status=ok
// SIG undefined FUN_148752494(void)

undefined1 FUN_148752494(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487525a6(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 1487524f2 FUN_1487524f2 body=59 status=ok
// SIG undefined FUN_1487524f2(void)

undefined8 FUN_1487524f2(longlong *param_1)

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



// FUNCTION 148752538 FUN_148752538 body=32 status=ok
// SIG undefined FUN_148752538(void)

void FUN_148752538(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1487525a6 FUN_1487525a6 body=109 status=ok
// SIG undefined FUN_1487525a6(void)

longlong FUN_1487525a6(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  return param_1;
}



// FUNCTION 148752614 FUN_148752614 body=90 status=ok
// SIG undefined FUN_148752614(void)

void FUN_148752614(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xa0);
  FUN_140d710e4(param_2);
  *param_2 = &PTR_FUN_14b2ea3f0;
  param_2[0x11] = 0;
  *(undefined1 *)(param_2 + 0x12) = 0;
  param_2[0x10] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_2 + 0x13) = 0x3ccccccd;
  return;
}



// FUNCTION 14875266e FUN_14875266e body=74 status=ok
// SIG undefined FUN_14875266e(void)

void FUN_14875266e(undefined8 param_1,undefined8 *param_2)

{
  FUN_140d710e4(param_2);
  *param_2 = &PTR_FUN_14b2ea3f0;
  param_2[0x11] = 0;
  *(undefined1 *)(param_2 + 0x12) = 0;
  param_2[0x10] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_2 + 0x13) = 0x3ccccccd;
  return;
}



// FUNCTION 1487526fc FUN_1487526fc body=237 status=ok
// SIG undefined FUN_1487526fc(void)

undefined8 FUN_1487526fc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      puVar2 = (undefined4 *)(param_3 + 8 + lVar10);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar2 = (undefined4 *)(param_3 + 0x18 + lVar10);
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar1 = (undefined4 *)(param_2 + 0x18 + lVar10);
      *puVar1 = *puVar2;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      puVar2 = (undefined4 *)(param_2 + 8 + lVar10);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      FUN_1470d00c2(param_2 + 0x28 + lVar10,param_3 + 0x28 + lVar10);
      *(undefined8 *)(param_2 + 0x40 + lVar10) = *(undefined8 *)(param_3 + 0x40 + lVar10);
      *(undefined1 *)(param_2 + 0x48 + lVar10) = *(undefined1 *)(param_3 + 0x48 + lVar10);
      *(undefined2 *)(param_2 + 0x50 + lVar10) = *(undefined2 *)(param_3 + 0x50 + lVar10);
      *(undefined1 *)(param_2 + 0x68 + lVar10) = *(undefined1 *)(param_3 + 0x68 + lVar10);
      *(undefined8 *)(param_2 + 0x60 + lVar10) = *(undefined8 *)(param_3 + 0x60 + lVar10);
      *(undefined4 *)(param_2 + 0x70 + lVar10) = *(undefined4 *)(param_3 + 0x70 + lVar10);
      *(undefined8 *)(param_2 + 0x78 + lVar10) = *(undefined8 *)(param_3 + 0x78 + lVar10);
      *(undefined8 *)(param_2 + 0x88 + lVar10) = *(undefined8 *)(param_3 + 0x88 + lVar10);
      *(undefined1 *)(param_2 + 0x90 + lVar10) = *(undefined1 *)(param_3 + 0x90 + lVar10);
      *(undefined4 *)(param_2 + 0x98 + lVar10) = *(undefined4 *)(param_3 + 0x98 + lVar10);
      lVar10 = lVar10 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148752812 FUN_148752812 body=59 status=ok
// SIG undefined FUN_148752812(void)

undefined8 FUN_148752812(longlong *param_1)

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



// FUNCTION 14875285e FUN_14875285e body=38 status=ok
// SIG undefined FUN_14875285e(void)

void FUN_14875285e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 1487528d2 FUN_1487528d2 body=38 status=ok
// SIG undefined FUN_1487528d2(void)

undefined8 FUN_1487528d2(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487528f8 FUN_1487528f8 body=55 status=ok
// SIG undefined FUN_1487528f8(void)

void FUN_1487528f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb693f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb693f8 = FUN_140002ddd(FUN_1465205c1,uVar1,L"GpsTestSettings_IsDamagingMe");
  }
  return;
}



// FUNCTION 1487529ca FUN_1487529ca body=54 status=ok
// SIG undefined FUN_1487529ca(void)

undefined1 FUN_1487529ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148752b3a(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 148752a28 FUN_148752a28 body=59 status=ok
// SIG undefined FUN_148752a28(void)

undefined8 FUN_148752a28(longlong *param_1)

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



// FUNCTION 148752a6e FUN_148752a6e body=32 status=ok
// SIG undefined FUN_148752a6e(void)

void FUN_148752a6e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 148752adc FUN_148752adc body=38 status=ok
// SIG undefined FUN_148752adc(void)

undefined8 FUN_148752adc(undefined8 param_1,int param_2)

{
  FUN_140f9d4d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148752b02 FUN_148752b02 body=55 status=ok
// SIG undefined FUN_148752b02(void)

void FUN_148752b02(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69410 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69410 = FUN_140002ddd(FUN_146520657,uVar1,L"GpsTest_IsDamagingMe");
  }
  return;
}



// FUNCTION 148752b3a FUN_148752b3a body=103 status=ok
// SIG undefined FUN_148752b3a(void)

longlong FUN_148752b3a(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  return param_1;
}



// FUNCTION 148752bd2 FUN_148752bd2 body=217 status=ok
// SIG undefined FUN_148752bd2(void)

undefined8 FUN_148752bd2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      puVar1 = (undefined4 *)(param_3 + 8 + lVar10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar10);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 8 + lVar10);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_1470d00c2(param_2 + 0x28 + lVar10,param_3 + 0x28 + lVar10);
      *(undefined8 *)(param_2 + 0x40 + lVar10) = *(undefined8 *)(param_3 + 0x40 + lVar10);
      *(undefined1 *)(param_2 + 0x48 + lVar10) = *(undefined1 *)(param_3 + 0x48 + lVar10);
      *(undefined2 *)(param_2 + 0x50 + lVar10) = *(undefined2 *)(param_3 + 0x50 + lVar10);
      *(undefined1 *)(param_2 + 0x68 + lVar10) = *(undefined1 *)(param_3 + 0x68 + lVar10);
      *(undefined8 *)(param_2 + 0x60 + lVar10) = *(undefined8 *)(param_3 + 0x60 + lVar10);
      *(undefined4 *)(param_2 + 0x70 + lVar10) = *(undefined4 *)(param_3 + 0x70 + lVar10);
      *(undefined8 *)(param_2 + 0x78 + lVar10) = *(undefined8 *)(param_3 + 0x78 + lVar10);
      *(undefined4 *)(param_2 + 0x80 + lVar10) = *(undefined4 *)(param_3 + 0x80 + lVar10);
      *(undefined1 *)(param_2 + 0x84 + lVar10) = *(undefined1 *)(param_3 + 0x84 + lVar10);
      lVar10 = lVar10 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148752cd4 FUN_148752cd4 body=59 status=ok
// SIG undefined FUN_148752cd4(void)

undefined8 FUN_148752cd4(longlong *param_1)

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



// FUNCTION 148752d20 FUN_148752d20 body=38 status=ok
// SIG undefined FUN_148752d20(void)

void FUN_148752d20(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148752df0 FUN_148752df0 body=118 status=ok
// SIG undefined FUN_148752df0(void)

undefined8 FUN_148752df0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_1470d03b0(param_2 + 8,param_3 + 8);
      FUN_1470d03b0(param_2 + 0x20,param_3 + 0x20);
    }
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    uVar1 = *(undefined8 *)(param_3 + 0x40);
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_3 + 0x38);
    *(undefined8 *)(param_2 + 0x40) = uVar1;
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
    *(undefined2 *)(param_2 + 0x54) = *(undefined2 *)(param_3 + 0x54);
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_3 + 0x58);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 148752e8e FUN_148752e8e body=59 status=ok
// SIG undefined FUN_148752e8e(void)

undefined8 FUN_148752e8e(longlong *param_1)

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



// FUNCTION 148752ed4 FUN_148752ed4 body=32 status=ok
// SIG undefined FUN_148752ed4(void)

void FUN_148752ed4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148752f8c FUN_148752f8c body=59 status=ok
// SIG undefined FUN_148752f8c(void)

undefined8 FUN_148752f8c(longlong *param_1)

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



// FUNCTION 148753088 FUN_148753088 body=59 status=ok
// SIG undefined FUN_148753088(void)

undefined8 FUN_148753088(longlong *param_1)

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



// FUNCTION 148753128 FUN_148753128 body=55 status=ok
// SIG undefined FUN_148753128(void)

void FUN_148753128(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb694b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb694b8 = FUN_140002ddd(FUN_146520871,uVar1,L"HazardInteractionBalanceStateValueResolver")
    ;
  }
  return;
}



// FUNCTION 148753218 FUN_148753218 body=49 status=ok
// SIG undefined FUN_148753218(void)

void FUN_148753218(undefined8 param_1,longlong param_2)

{
  FUN_1408c28ac(*(undefined8 *)(param_2 + 0x78),*(undefined4 *)(param_2 + 0x80));
  if (*(longlong *)(param_2 + 0x78) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148753260 FUN_148753260 body=63 status=ok
// SIG undefined FUN_148753260(void)

undefined1 FUN_148753260(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14875336a(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 1487532c8 FUN_1487532c8 body=59 status=ok
// SIG undefined FUN_1487532c8(void)

undefined8 FUN_1487532c8(longlong *param_1)

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



// FUNCTION 14875336a FUN_14875336a body=100 status=ok
// SIG undefined FUN_14875336a(void)

longlong * FUN_14875336a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((*param_1 != *param_2) || ((int)param_1[1] != (int)param_2[1])) {
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    param_1[2] = 0;
  }
  lVar1 = param_2[3];
  *(undefined8 *)((longlong)param_1 + 0x1d) = *(undefined8 *)((longlong)param_2 + 0x1d);
  param_1[3] = lVar1;
  FUN_140d02432(param_1 + 5,param_2 + 5);
  FUN_148636cfe(param_1 + 0xf,param_2 + 0xf);
  return param_1;
}



// FUNCTION 1487533d0 FUN_1487533d0 body=59 status=ok
// SIG undefined FUN_1487533d0(void)

void FUN_1487533d0(longlong param_1)

{
  if (*(char *)(param_1 + 0x88) == '\x01') {
    FUN_1408c28ac(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
    if (*(longlong *)(param_1 + 0x78) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  return;
}



// FUNCTION 14875342a FUN_14875342a body=63 status=ok
// SIG undefined FUN_14875342a(void)

undefined1 FUN_14875342a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148753552(param_2,param_3);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 148753492 FUN_148753492 body=59 status=ok
// SIG undefined FUN_148753492(void)

undefined8 FUN_148753492(longlong *param_1)

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



// FUNCTION 1487534de FUN_1487534de body=38 status=ok
// SIG undefined FUN_1487534de(void)

void FUN_1487534de(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_1410b1b9a(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 148753552 FUN_148753552 body=155 status=ok
// SIG undefined FUN_148753552(void)

longlong FUN_148753552(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  if ((*(longlong *)(param_1 + 0x20) != *(longlong *)(param_2 + 0x20)) ||
     (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28))) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if ((*(longlong *)(param_1 + 0x38) != *(longlong *)(param_2 + 0x38)) ||
     (*(int *)(param_1 + 0x40) != *(int *)(param_2 + 0x40))) {
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  FUN_1487535ee(param_1 + 0x50,param_2 + 0x50);
  FUN_14875336a(param_1 + 0x60,param_2 + 0x60);
  uVar1 = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xf0) = uVar1;
  return param_1;
}



// FUNCTION 1487535ee FUN_1487535ee body=93 status=ok
// SIG undefined FUN_1487535ee(void)

undefined8 * FUN_1487535ee(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1410b1c58(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14875364c(param_1,iVar1);
      FUN_1487536c2(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14875364c FUN_14875364c body=118 status=ok
// SIG undefined FUN_14875364c(void)

void FUN_14875364c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x88,8);
    iVar2 = (int)(uVar1 / 0x88);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x88,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1487536c2 FUN_1487536c2 body=60 status=ok
// SIG undefined FUN_1487536c2(void)

void FUN_1487536c2(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1487536fe(param_1,param_2);
    param_1 = param_1 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return;
}



// FUNCTION 1487536fe FUN_1487536fe body=133 status=ok
// SIG undefined FUN_1487536fe(void)

undefined8 * FUN_1487536fe(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  param_1[2] = 0;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x1d);
  param_1[3] = param_2[3];
  *(undefined8 *)((longlong)param_1 + 0x1d) = uVar1;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  FUN_144a7f96e(param_1 + 6,param_2 + 6);
  uVar1 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar1;
  param_1[0xb] = param_2[0xb];
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  FUN_148753784(param_1 + 0xf,param_2 + 0xf);
  return param_1;
}



// FUNCTION 148753784 FUN_148753784 body=77 status=ok
// SIG undefined FUN_148753784(void)

undefined8 * FUN_148753784(undefined8 *param_1,undefined8 *param_2)

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
    FUN_148636d5c(param_1,iVar1,0);
    FUN_148636dd2(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148753820 FUN_148753820 body=59 status=ok
// SIG undefined FUN_148753820(void)

undefined8 FUN_148753820(longlong *param_1)

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



// FUNCTION 14875390e FUN_14875390e body=59 status=ok
// SIG undefined FUN_14875390e(void)

undefined8 FUN_14875390e(longlong *param_1)

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



// FUNCTION 148753954 FUN_148753954 body=56 status=ok
// SIG undefined FUN_148753954(void)

void FUN_148753954(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148753a0a FUN_148753a0a body=63 status=ok
// SIG undefined FUN_148753a0a(void)

undefined1 FUN_148753a0a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148753b32(param_2,param_3);
    param_3 = param_3 + 0x658;
    param_2 = param_2 + 0x658;
  }
  return 1;
}



// FUNCTION 148753a72 FUN_148753a72 body=59 status=ok
// SIG undefined FUN_148753a72(void)

undefined8 FUN_148753a72(longlong *param_1)

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



// FUNCTION 148753abe FUN_148753abe body=38 status=ok
// SIG undefined FUN_148753abe(void)

void FUN_148753abe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x658) == '\x01') {
    FUN_140c3b746(param_2);
    *(undefined1 *)(param_2 + 0x658) = 0;
  }
  return;
}



// FUNCTION 148753b32 FUN_148753b32 body=745 status=ok
// SIG undefined FUN_148753b32(void)

longlong FUN_148753b32(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
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
  undefined4 uVar14;
  byte bVar15;
  longlong lVar16;
  
  if (param_2 == param_1) {
    *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  }
  else {
    FUN_1401b31d8(param_1,param_2);
    *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
    FUN_148753f24(param_1 + 0x20,param_2 + 0x20);
    FUN_148753f24(param_1 + 0x38,param_2 + 0x38);
  }
  FUN_140311eb6(param_1 + 0x50,param_2 + 0x50);
  lVar16 = *(longlong *)(param_2 + 0x60);
  if (DAT_14c950c29 == 1) {
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar16 = *(longlong *)(param_2 + 0x60);
    }
  }
  bVar15 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x60) = lVar16;
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  uVar4 = *(undefined4 *)(param_2 + 0x68);
  uVar5 = *(undefined4 *)(param_2 + 0x6c);
  uVar6 = *(undefined4 *)(param_2 + 0x70);
  uVar7 = *(undefined4 *)(param_2 + 0x74);
  uVar8 = *(undefined4 *)(param_2 + 0x7c);
  uVar9 = *(undefined4 *)(param_2 + 0x80);
  uVar10 = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = uVar8;
  *(undefined4 *)(param_1 + 0x80) = uVar9;
  *(undefined4 *)(param_1 + 0x84) = uVar10;
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  *(undefined4 *)(param_1 + 0x6c) = uVar5;
  *(undefined4 *)(param_1 + 0x70) = uVar6;
  *(undefined4 *)(param_1 + 0x74) = uVar7;
  lVar16 = *(longlong *)(param_2 + 0x90);
  if ((bVar15 & 1) != 0) {
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar16 = *(longlong *)(param_2 + 0x90);
    }
  }
  *(longlong *)(param_1 + 0x90) = lVar16;
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  uVar4 = *(undefined4 *)(param_2 + 0xa4);
  uVar5 = *(undefined4 *)(param_2 + 0xa8);
  uVar6 = *(undefined4 *)(param_2 + 0xac);
  uVar7 = *(undefined4 *)(param_2 + 0xad);
  uVar8 = *(undefined4 *)(param_2 + 0xb1);
  uVar9 = *(undefined4 *)(param_2 + 0xb5);
  uVar10 = *(undefined4 *)(param_2 + 0xb9);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = uVar4;
  *(undefined4 *)(param_1 + 0xa8) = uVar5;
  *(undefined4 *)(param_1 + 0xac) = uVar6;
  *(undefined4 *)(param_1 + 0xad) = uVar7;
  *(undefined4 *)(param_1 + 0xb1) = uVar8;
  *(undefined4 *)(param_1 + 0xb5) = uVar9;
  *(undefined4 *)(param_1 + 0xb9) = uVar10;
  FUN_147c5db4c(param_1 + 0xc0,param_2 + 0xc0);
  FUN_147c5db4c(param_1 + 0xd0,param_2 + 0xd0);
  FUN_148753e1c(param_1 + 0xe0,param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  FUN_14875410a(param_1 + 0xf8,param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x148);
  FUN_148753e6c(param_1 + 0x150,param_2 + 0x150);
  FUN_148754338(param_1 + 0x160,param_2 + 0x160);
  uVar4 = *(undefined4 *)(param_2 + 0x1b4);
  uVar5 = *(undefined4 *)(param_2 + 0x1b8);
  uVar6 = *(undefined4 *)(param_2 + 0x1bc);
  uVar7 = *(undefined4 *)(param_2 + 0x1c0);
  uVar8 = *(undefined4 *)(param_2 + 0x1c4);
  uVar9 = *(undefined4 *)(param_2 + 0x1c8);
  uVar10 = *(undefined4 *)(param_2 + 0x1cc);
  uVar11 = *(undefined4 *)(param_2 + 0x1d0);
  uVar12 = *(undefined4 *)(param_2 + 0x1d4);
  uVar13 = *(undefined4 *)(param_2 + 0x1d8);
  uVar14 = *(undefined4 *)(param_2 + 0x1dc);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  *(undefined4 *)(param_1 + 0x1b4) = uVar4;
  *(undefined4 *)(param_1 + 0x1b8) = uVar5;
  *(undefined4 *)(param_1 + 0x1bc) = uVar6;
  *(undefined4 *)(param_1 + 0x1c0) = uVar7;
  *(undefined4 *)(param_1 + 0x1c4) = uVar8;
  *(undefined4 *)(param_1 + 0x1c8) = uVar9;
  *(undefined4 *)(param_1 + 0x1cc) = uVar10;
  *(undefined4 *)(param_1 + 0x1d0) = uVar11;
  *(undefined4 *)(param_1 + 0x1d4) = uVar12;
  *(undefined4 *)(param_1 + 0x1d8) = uVar13;
  *(undefined4 *)(param_1 + 0x1dc) = uVar14;
  FUN_140d27362(param_1 + 0x1e0,param_2 + 0x1e0);
  FUN_1411f346e(param_1 + 0x1e8,param_2 + 0x1e8);
  *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_2 + 0x1f8);
  FUN_1487544a4(param_1 + 0x200,param_2 + 0x200);
  *(undefined4 *)(param_1 + 0x550) = *(undefined4 *)(param_2 + 0x550);
  FUN_148753ebc(param_1 + 0x558,param_2 + 0x558);
  uVar4 = *(undefined4 *)(param_2 + 0x58c);
  uVar5 = *(undefined4 *)(param_2 + 0x590);
  uVar6 = *(undefined4 *)(param_2 + 0x594);
  *(undefined4 *)(param_1 + 0x588) = *(undefined4 *)(param_2 + 0x588);
  *(undefined4 *)(param_1 + 0x58c) = uVar4;
  *(undefined4 *)(param_1 + 0x590) = uVar5;
  *(undefined4 *)(param_1 + 0x594) = uVar6;
  lVar16 = *(longlong *)(param_2 + 0x598);
  if (DAT_14c950c29 == 1) {
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar16 = *(longlong *)(param_2 + 0x598);
    }
  }
  *(longlong *)(param_1 + 0x598) = lVar16;
  *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(param_2 + 0x5a0);
  *(undefined8 *)(param_1 + 0x5a8) = *(undefined8 *)(param_2 + 0x5a8);
  FUN_140d75dba(param_1 + 0x5b0,param_2 + 0x5b0);
  uVar4 = *(undefined4 *)(param_2 + 0x5cc);
  uVar5 = *(undefined4 *)(param_2 + 0x5d0);
  uVar6 = *(undefined4 *)(param_2 + 0x5d4);
  *(undefined4 *)(param_1 + 0x5c8) = *(undefined4 *)(param_2 + 0x5c8);
  *(undefined4 *)(param_1 + 0x5cc) = uVar4;
  *(undefined4 *)(param_1 + 0x5d0) = uVar5;
  *(undefined4 *)(param_1 + 0x5d4) = uVar6;
  uVar2 = *(undefined8 *)(param_2 + 0x5d8);
  lVar16 = *(longlong *)(param_2 + 0x5e0);
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 0xc) = *(int *)(lVar16 + 0xc) + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 0x5e0);
  *(undefined8 *)(param_1 + 0x5d8) = uVar2;
  *(longlong *)(param_1 + 0x5e0) = lVar16;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0x5f0) = *(undefined4 *)(param_2 + 0x5f0);
  *(undefined8 *)(param_1 + 0x5e8) = *(undefined8 *)(param_2 + 0x5e8);
  FUN_14118c70e(param_1 + 0x5f8,param_2 + 0x5f8);
  return param_1;
}



// FUNCTION 148753e1c FUN_148753e1c body=79 status=ok
// SIG undefined FUN_148753e1c(void)

undefined8 * FUN_148753e1c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148754056(param_1,iVar1);
      FUN_1487540b8(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148753e6c FUN_148753e6c body=79 status=ok
// SIG undefined FUN_148753e6c(void)

undefined8 * FUN_148753e6c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148754276(param_1,iVar1);
      FUN_1487542d8(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148753ebc FUN_148753ebc body=104 status=ok
// SIG undefined FUN_148753ebc(void)

void * FUN_148753ebc(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x20);
    if (*(void **)((longlong)param_2 + 0x20) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x28);
    *(int *)((longlong)param_1 + 0x28) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
    }
    else {
      FUN_1487547bc(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x20);
        if (*(void **)((longlong)param_1 + 0x20) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 148753f24 FUN_148753f24 body=304 status=ok
// SIG undefined FUN_148753f24(void)

void FUN_148753f24(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148754056 FUN_148754056 body=98 status=ok
// SIG undefined FUN_148754056(void)

void FUN_148754056(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1487540b8 FUN_1487540b8 body=82 status=ok
// SIG undefined FUN_1487540b8(void)

void FUN_1487540b8(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 14875410a FUN_14875410a body=122 status=ok
// SIG undefined FUN_14875410a(void)

longlong FUN_14875410a(longlong param_1,longlong param_2)

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
    FUN_148754184(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148754184 FUN_148754184 body=242 status=ok
// SIG undefined FUN_148754184(void)

longlong * FUN_148754184(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140c3baee(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar7 = 0;
      uVar6 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar5 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar7) = *(undefined4 *)(lVar2 + lVar7);
          *(undefined4 *)(lVar4 + 4 + lVar7) = *(undefined4 *)(lVar2 + 4 + lVar7);
        }
        else {
          lVar3 = *(longlong *)(lVar2 + lVar7);
          *(longlong *)(lVar4 + lVar7) = lVar3;
          if ((lVar3 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          *(undefined8 *)(lVar4 + 8 + lVar7) = *(undefined8 *)(lVar2 + 8 + lVar7);
          *(undefined8 *)(lVar4 + 0x10 + lVar7) = *(undefined8 *)(lVar2 + 0x10 + lVar7);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x18;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 148754276 FUN_148754276 body=98 status=ok
// SIG undefined FUN_148754276(void)

void FUN_148754276(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1487542d8 FUN_1487542d8 body=96 status=ok
// SIG undefined FUN_1487542d8(void)

void FUN_1487542d8(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3);
      *(longlong *)(param_1 + lVar3) = lVar1;
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      *(undefined8 *)(param_1 + 8 + lVar3) = *(undefined8 *)(param_2 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148754338 FUN_148754338 body=122 status=ok
// SIG undefined FUN_148754338(void)

longlong FUN_148754338(longlong param_1,longlong param_2)

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
    FUN_1487543b2(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1487543b2 FUN_1487543b2 body=242 status=ok
// SIG undefined FUN_1487543b2(void)

longlong * FUN_1487543b2(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140c3ba72(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar7 = 0;
      uVar6 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar5 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar7) = *(undefined4 *)(lVar2 + lVar7);
          *(undefined4 *)(lVar4 + 4 + lVar7) = *(undefined4 *)(lVar2 + 4 + lVar7);
        }
        else {
          lVar3 = *(longlong *)(lVar2 + lVar7);
          *(longlong *)(lVar4 + lVar7) = lVar3;
          if ((lVar3 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          *(undefined4 *)(lVar4 + 8 + lVar7) = *(undefined4 *)(lVar2 + 8 + lVar7);
          *(undefined8 *)(lVar4 + 0x10 + lVar7) = *(undefined8 *)(lVar2 + 0x10 + lVar7);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x18;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 1487544a4 FUN_1487544a4 body=140 status=ok
// SIG undefined FUN_1487544a4(void)

longlong FUN_1487544a4(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x348);
    FUN_144a8ab24((void *)(param_1 + 0x330),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x330);
      if (*(void **)(param_1 + 0x340) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x340);
      }
      _Src = (void *)(param_2 + 0x330);
      if (*(void **)(param_2 + 0x340) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x340);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x348) = iVar1;
    FUN_148754530(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148754530 FUN_148754530 body=333 status=ok
// SIG undefined FUN_148754530(void)

longlong FUN_148754530(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 0x308);
    FUN_1405fdc96(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 0x308);
    *(uint *)(param_1 + 0x308) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x30c) - iVar2) < uVar1) {
      FUN_14185c474(param_1);
    }
    *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_2 + 0x328);
    *(undefined4 *)(param_1 + 0x32c) = *(undefined4 *)(param_2 + 0x32c);
    FUN_1470c60fc(param_1 + 0x310,param_2 + 0x310);
    lVar8 = *(longlong *)(param_1 + 0x300);
    if (*(longlong *)(param_1 + 0x300) == 0) {
      lVar8 = param_1;
    }
    lVar6 = *(longlong *)(param_2 + 0x300);
    if (*(longlong *)(param_2 + 0x300) == 0) {
      lVar6 = param_2;
    }
    if (0 < (int)uVar1) {
      lVar7 = 0;
      uVar5 = 0;
      do {
        lVar3 = *(longlong *)(param_2 + 0x318);
        if (*(longlong *)(param_2 + 0x318) == 0) {
          lVar3 = param_2 + 0x310;
        }
        if ((*(uint *)(lVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1) == 0) {
          *(undefined4 *)(lVar8 + lVar7) = *(undefined4 *)(lVar6 + lVar7);
          *(undefined4 *)(lVar8 + 4 + lVar7) = *(undefined4 *)(lVar6 + 4 + lVar7);
        }
        else {
          *(undefined8 *)(lVar8 + lVar7) = *(undefined8 *)(lVar6 + lVar7);
          *(undefined8 *)(lVar8 + 0x48 + lVar7) = 0;
          lVar3 = *(longlong *)(lVar6 + 0x48 + lVar7);
          lVar4 = lVar6 + 8 + lVar7;
          if (lVar3 != 0) {
            lVar4 = lVar3;
          }
          FUN_14875467e(lVar8 + 8 + lVar7,lVar4,*(undefined4 *)(lVar6 + 0x50 + lVar7));
          *(undefined8 *)(lVar8 + 0x58 + lVar7) = *(undefined8 *)(lVar6 + 0x58 + lVar7);
        }
        uVar5 = uVar5 + 1;
        lVar7 = lVar7 + 0x60;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 14875467e FUN_14875467e body=80 status=ok
// SIG undefined FUN_14875467e(void)

void FUN_14875467e(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x48) = param_3;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x4c) = 4;
    return;
  }
  FUN_1487546ce(param_1,param_3);
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar1 = param_1;
  }
  FUN_1487542d8(lVar1,param_2,param_3);
  return;
}



// FUNCTION 1487546ce FUN_1487546ce body=104 status=ok
// SIG undefined FUN_1487546ce(void)

void FUN_1487546ce(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    if (param_2 < 5) {
      iVar3 = 4;
    }
    else {
      iVar2 = 0;
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
      iVar3 = (int)(uVar1 >> 4);
      if (iVar3 < (int)param_2) {
        iVar3 = 0x7fffffff;
      }
      else if (iVar3 < 1) goto LAB_148754707;
    }
    iVar2 = iVar3;
    FUN_148754736(param_1,0,iVar2,0x10);
  }
LAB_148754707:
  *(int *)(param_1 + 0x4c) = iVar2;
  return;
}



// FUNCTION 148754736 FUN_148754736 body=133 status=ok
// SIG undefined FUN_148754736(void)

void FUN_148754736(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,param_4);
  return;
}



// FUNCTION 1487547bc FUN_1487547bc body=101 status=ok
// SIG undefined FUN_1487547bc(void)

void FUN_1487547bc(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 4;
    if (4 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_148754822(param_1,0,iVar3,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x2c) = param_3;
  return;
}



// FUNCTION 148754822 FUN_148754822 body=133 status=ok
// SIG undefined FUN_148754822(void)

void FUN_148754822(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,param_4);
  return;
}



// FUNCTION 148754904 FUN_148754904 body=54 status=ok
// SIG undefined FUN_148754904(void)

undefined1 FUN_148754904(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148754a02(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 148754962 FUN_148754962 body=59 status=ok
// SIG undefined FUN_148754962(void)

undefined8 FUN_148754962(longlong *param_1)

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



// FUNCTION 148754a02 FUN_148754a02 body=85 status=ok
// SIG undefined FUN_148754a02(void)

void FUN_148754a02(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((*param_1 != *param_2) || ((int)param_1[1] != (int)param_2[1])) {
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    param_1[2] = 0;
  }
  if ((param_1[3] != param_2[3]) || ((int)param_1[4] != (int)param_2[4])) {
    param_1[3] = param_2[3];
    *(int *)(param_1 + 4) = (int)param_2[4];
    param_1[5] = 0;
  }
  lVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = lVar1;
  return;
}



// FUNCTION 148754a76 FUN_148754a76 body=63 status=ok
// SIG undefined FUN_148754a76(void)

undefined1 FUN_148754a76(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148754b9e(param_2,param_3);
    param_3 = param_3 + 0x120;
    param_2 = param_2 + 0x120;
  }
  return 1;
}



// FUNCTION 148754ade FUN_148754ade body=59 status=ok
// SIG undefined FUN_148754ade(void)

undefined8 FUN_148754ade(longlong *param_1)

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



// FUNCTION 148754b2a FUN_148754b2a body=38 status=ok
// SIG undefined FUN_148754b2a(void)

void FUN_148754b2a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x120) == '\x01') {
    FUN_14112fd26(param_2);
    *(undefined1 *)(param_2 + 0x120) = 0;
  }
  return;
}



// FUNCTION 148754b9e FUN_148754b9e body=278 status=ok
// SIG undefined FUN_148754b9e(void)

longlong FUN_148754b9e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  FUN_148754cb4(param_1 + 0x20,param_2 + 0x20);
  if ((*(longlong *)(param_1 + 0x30) != *(longlong *)(param_2 + 0x30)) ||
     (*(int *)(param_1 + 0x38) != *(int *)(param_2 + 0x38))) {
    *(longlong *)(param_1 + 0x30) = *(longlong *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if ((*(longlong *)(param_1 + 0x48) != *(longlong *)(param_2 + 0x48)) ||
     (*(int *)(param_1 + 0x50) != *(int *)(param_2 + 0x50))) {
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  if ((*(longlong *)(param_1 + 0x60) != *(longlong *)(param_2 + 0x60)) ||
     (*(int *)(param_1 + 0x68) != *(int *)(param_2 + 0x68))) {
    *(longlong *)(param_1 + 0x60) = *(longlong *)(param_2 + 0x60);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  FUN_140d02432(param_1 + 0x78,param_2 + 0x78);
  uVar4 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = uVar4;
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  uVar1 = *(undefined4 *)(param_2 + 0xec);
  uVar2 = *(undefined4 *)(param_2 + 0xf0);
  uVar3 = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = uVar1;
  *(undefined4 *)(param_1 + 0xf0) = uVar2;
  *(undefined4 *)(param_1 + 0xf4) = uVar3;
  FUN_144a787a6(param_1 + 0xf8,param_2 + 0xf8);
  *(undefined1 *)(param_1 + 0x108) = *(undefined1 *)(param_2 + 0x108);
  FUN_148636cfe(param_1 + 0x110,param_2 + 0x110);
  return param_1;
}



// FUNCTION 148754cb4 FUN_148754cb4 body=79 status=ok
// SIG undefined FUN_148754cb4(void)

undefined8 * FUN_148754cb4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148754d04(param_1,iVar1);
      FUN_148754d66(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148754d04 FUN_148754d04 body=98 status=ok
// SIG undefined FUN_148754d04(void)

void FUN_148754d04(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148754d66 FUN_148754d66 body=80 status=ok
// SIG undefined FUN_148754d66(void)

void FUN_148754d66(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = 0;
    do {
      *(undefined8 *)(param_1 + lVar4) = *(undefined8 *)(param_2 + lVar4);
      *(undefined4 *)(param_1 + 8 + lVar4) = *(undefined4 *)(param_2 + 8 + lVar4);
      *(undefined8 *)(param_1 + 0x10 + lVar4) = 0;
      *(undefined8 *)(param_1 + 0x18 + lVar4) = *(undefined8 *)(param_2 + 0x18 + lVar4);
      *(undefined4 *)(param_1 + 0x20 + lVar4) = *(undefined4 *)(param_2 + 0x20 + lVar4);
      *(undefined8 *)(param_1 + 0x28 + lVar4) = 0;
      puVar1 = (undefined8 *)(param_2 + 0x30 + lVar4);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + 0x30 + lVar4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      lVar4 = lVar4 + 0x40;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148754db8 FUN_148754db8 body=68 status=ok
// SIG undefined FUN_148754db8(void)

void FUN_148754db8(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  FUN_141067f4a(param_2);
  *param_2 = &PTR_FUN_14b2ee310;
  param_2[5] = 0;
  param_2[6] = 0;
  return;
}



// FUNCTION 148754dfc FUN_148754dfc body=39 status=ok
// SIG undefined FUN_148754dfc(void)

void FUN_148754dfc(undefined8 param_1,undefined8 *param_2)

{
  FUN_141067f4a(param_2);
  *param_2 = &PTR_FUN_14b2ee310;
  param_2[5] = 0;
  param_2[6] = 0;
  return;
}



// FUNCTION 148754e74 FUN_148754e74 body=59 status=ok
// SIG undefined FUN_148754e74(void)

undefined8 FUN_148754e74(longlong *param_1)

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



// FUNCTION 148754eba FUN_148754eba body=34 status=ok
// SIG undefined FUN_148754eba(void)

void FUN_148754eba(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_145c30e7c(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148754f2a FUN_148754f2a body=38 status=ok
// SIG undefined FUN_148754f2a(void)

undefined8 FUN_148754f2a(undefined8 param_1,int param_2)

{
  FUN_145c30e7c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148754fba FUN_148754fba body=59 status=ok
// SIG undefined FUN_148754fba(void)

undefined8 FUN_148754fba(longlong *param_1)

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



// FUNCTION 14875505a FUN_14875505a body=29 status=ok
// SIG undefined FUN_14875505a(void)

undefined8 FUN_14875505a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148755096 FUN_148755096 body=63 status=ok
// SIG undefined FUN_148755096(void)

undefined1 FUN_148755096(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487552be(param_2,param_3);
    param_3 = param_3 + 0x1b8;
    param_2 = param_2 + 0x1b8;
  }
  return 1;
}



// FUNCTION 1487550fe FUN_1487550fe body=59 status=ok
// SIG undefined FUN_1487550fe(void)

undefined8 FUN_1487550fe(longlong *param_1)

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



// FUNCTION 14875514a FUN_14875514a body=38 status=ok
// SIG undefined FUN_14875514a(void)

void FUN_14875514a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b8) == '\x01') {
    FUN_1410bf5b2(param_2);
    *(undefined1 *)(param_2 + 0x1b8) = 0;
  }
  return;
}



// FUNCTION 1487552be FUN_1487552be body=255 status=ok
// SIG undefined FUN_1487552be(void)

longlong FUN_1487552be(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  FUN_144a787a6(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x54);
  uVar2 = *(undefined4 *)(param_2 + 0x58);
  uVar3 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  FUN_144a787a6(param_1 + 0x60,param_2 + 0x60);
  FUN_1403de7ba(param_1 + 0x70,param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  FUN_140d02432(param_1 + 0x98,param_2 + 0x98);
  *(undefined1 *)(param_1 + 0xe8) = *(undefined1 *)(param_2 + 0xe8);
  FUN_140d02432(param_1 + 0xf0,param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
  FUN_1487553be(param_1 + 0x150,param_2 + 0x150);
  *(undefined2 *)(param_1 + 0x160) = *(undefined2 *)(param_2 + 0x160);
  FUN_140d02432(param_1 + 0x168,param_2 + 0x168);
  return param_1;
}



// FUNCTION 1487553be FUN_1487553be body=79 status=ok
// SIG undefined FUN_1487553be(void)

undefined8 * FUN_1487553be(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14875540e(param_1,iVar1);
      FUN_148755470(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14875540e FUN_14875540e body=98 status=ok
// SIG undefined FUN_14875540e(void)

void FUN_14875540e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148755470 FUN_148755470 body=54 status=ok
// SIG undefined FUN_148755470(void)

void FUN_148755470(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
      *(undefined4 *)(param_1 + 8 + lVar1) = *(undefined4 *)(param_2 + 8 + lVar1);
      *(undefined8 *)(param_1 + 0x10 + lVar1) = 0;
      *(undefined8 *)(param_1 + 0x18 + lVar1) = *(undefined8 *)(param_2 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14875556c FUN_14875556c body=59 status=ok
// SIG undefined FUN_14875556c(void)

undefined8 FUN_14875556c(longlong *param_1)

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



// FUNCTION 148755620 FUN_148755620 body=63 status=ok
// SIG undefined FUN_148755620(void)

undefined1 FUN_148755620(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14875573c(param_2,param_3);
    param_3 = param_3 + 0x2b0;
    param_2 = param_2 + 0x2b0;
  }
  return 1;
}



// FUNCTION 148755688 FUN_148755688 body=59 status=ok
// SIG undefined FUN_148755688(void)

undefined8 FUN_148755688(longlong *param_1)

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



// FUNCTION 1487556d4 FUN_1487556d4 body=38 status=ok
// SIG undefined FUN_1487556d4(void)

void FUN_1487556d4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2b0) == '\x01') {
    FUN_140d2b21a(param_2);
    *(undefined1 *)(param_2 + 0x2b0) = 0;
  }
  return;
}



// FUNCTION 14875573c FUN_14875573c body=416 status=ok
// SIG undefined FUN_14875573c(void)

longlong FUN_14875573c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  FUN_148636cfe(param_1 + 0x20,param_2 + 0x20);
  FUN_140d02432(param_1 + 0x30,param_2 + 0x30);
  FUN_140d02432(param_1 + 0x80,param_2 + 0x80);
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
  FUN_140d02432(param_1 + 0xd8,param_2 + 0xd8);
  FUN_140d02432(param_1 + 0x128,param_2 + 0x128);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
  FUN_140d02432(param_1 + 0x180,param_2 + 0x180);
  FUN_140d02432(param_1 + 0x1d0,param_2 + 0x1d0);
  FUN_140115bdc(param_1 + 0x220,param_2 + 0x220);
  *(undefined2 *)(param_1 + 0x244) = *(undefined2 *)(param_2 + 0x244);
  *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_2 + 0x240);
  if ((*(longlong *)(param_1 + 0x248) != *(longlong *)(param_2 + 0x248)) ||
     (*(int *)(param_1 + 0x250) != *(int *)(param_2 + 0x250))) {
    *(longlong *)(param_1 + 0x248) = *(longlong *)(param_2 + 0x248);
    *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_2 + 0x250);
    *(undefined8 *)(param_1 + 600) = 0;
  }
  *(undefined1 *)(param_1 + 0x260) = *(undefined1 *)(param_2 + 0x260);
  if ((*(longlong *)(param_1 + 0x268) != *(longlong *)(param_2 + 0x268)) ||
     (*(int *)(param_1 + 0x270) != *(int *)(param_2 + 0x270))) {
    *(longlong *)(param_1 + 0x268) = *(longlong *)(param_2 + 0x268);
    *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_2 + 0x270);
    *(undefined8 *)(param_1 + 0x278) = 0;
  }
  *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_2 + 0x280);
  uVar1 = *(undefined4 *)(param_2 + 0x28c);
  uVar2 = *(undefined4 *)(param_2 + 0x290);
  uVar3 = *(undefined4 *)(param_2 + 0x294);
  *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_2 + 0x288);
  *(undefined4 *)(param_1 + 0x28c) = uVar1;
  *(undefined4 *)(param_1 + 0x290) = uVar2;
  *(undefined4 *)(param_1 + 0x294) = uVar3;
  FUN_144a787a6(param_1 + 0x298,param_2 + 0x298);
  *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_2 + 0x2a8);
  return param_1;
}



// FUNCTION 1487558ea FUN_1487558ea body=328 status=ok
// SIG undefined FUN_1487558ea(void)

void FUN_1487558ea(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[4] = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_58[2];
  uVar1 = FUN_14477b664(local_58[3]);
  local_68 = FUN_14477b664(uVar1);
  local_60 = local_58[4];
  (**(code **)(*param_1 + 0x18))(param_1,&local_70,plVar2);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148755a34 FUN_148755a34 body=328 status=ok
// SIG undefined FUN_148755a34(void)

void FUN_148755a34(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[4] = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_58[2];
  uVar1 = FUN_14477b664(local_58[3]);
  local_68 = FUN_14477b664(uVar1);
  local_60 = local_58[4];
  (**(code **)(*param_1 + 0x10))(param_1,&local_70,plVar2);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148755c80 FUN_148755c80 body=277 status=ok
// SIG undefined FUN_148755c80(void)

void FUN_148755c80(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined1 local_39;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  local_30 = 0xdeadbeef;
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
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  local_50 = local_30;
  local_48 = 0;
  FUN_143ca0c48(param_1,&local_58,local_39);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148755dae FUN_148755dae body=75 status=ok
// SIG undefined FUN_148755dae(void)

void FUN_148755dae(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1418676a6(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148755e8a FUN_148755e8a body=48 status=ok
// SIG undefined FUN_148755e8a(void)

longlong FUN_148755e8a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_140639d0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148755ec2 FUN_148755ec2 body=48 status=ok
// SIG undefined FUN_148755ec2(void)

longlong FUN_148755ec2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_140639d0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148755efa FUN_148755efa body=48 status=ok
// SIG undefined FUN_148755efa(void)

longlong FUN_148755efa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_140639d0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148755f32 FUN_148755f32 body=48 status=ok
// SIG undefined FUN_148755f32(void)

longlong FUN_148755f32(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_140639d0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148755f6a FUN_148755f6a body=48 status=ok
// SIG undefined FUN_148755f6a(void)

longlong FUN_148755f6a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_140639d0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148755fb2 FUN_148755fb2 body=48 status=ok
// SIG undefined FUN_148755fb2(void)

longlong FUN_148755fb2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_140639d0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148755fea FUN_148755fea body=48 status=ok
// SIG undefined FUN_148755fea(void)

longlong FUN_148755fea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_140639d0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148756022 FUN_148756022 body=48 status=ok
// SIG undefined FUN_148756022(void)

longlong FUN_148756022(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_140639d0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14875605a FUN_14875605a body=48 status=ok
// SIG undefined FUN_14875605a(void)

longlong FUN_14875605a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_140639d0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


