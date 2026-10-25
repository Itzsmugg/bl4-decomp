// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148ba5904 FUN_148ba5904 body=57 status=ok
// SIG undefined FUN_148ba5904(void)

void FUN_148ba5904(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x13) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5150;
    FUN_144a2da94(param_2 + 9);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x13) = 0;
  }
  return;
}



// FUNCTION 148ba598c FUN_148ba598c body=60 status=ok
// SIG undefined FUN_148ba598c(void)

undefined8 * FUN_148ba598c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ba59c8 FUN_148ba59c8 body=55 status=ok
// SIG undefined FUN_148ba59c8(void)

void FUN_148ba59c8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1a00 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1a00 =
         FUN_140002ddd(FUN_1465b1049,uVar1,L"GbxMomentNodeSettings_SetRespawnStationForAll");
  }
  return;
}



// FUNCTION 148ba5a00 FUN_148ba5a00 body=136 status=ok
// SIG undefined FUN_148ba5a00(void)

longlong FUN_148ba5a00(longlong param_1,longlong param_2)

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
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  if ((*(longlong *)(param_1 + 0x80) != *(longlong *)(param_2 + 0x80)) ||
     (*(int *)(param_1 + 0x88) != *(int *)(param_2 + 0x88))) {
    *(longlong *)(param_1 + 0x80) = *(longlong *)(param_2 + 0x80);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  return param_1;
}



// FUNCTION 148ba5b30 FUN_148ba5b30 body=54 status=ok
// SIG undefined FUN_148ba5b30(void)

undefined1 FUN_148ba5b30(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148ba5b8e FUN_148ba5b8e body=59 status=ok
// SIG undefined FUN_148ba5b8e(void)

undefined8 FUN_148ba5b8e(longlong *param_1)

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



// FUNCTION 148ba5c22 FUN_148ba5c22 body=55 status=ok
// SIG undefined FUN_148ba5c22(void)

void FUN_148ba5c22(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1a18 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1a18 = FUN_140002ddd(FUN_1465b10df,uVar1,L"GbxMomentNodeState_SetRespawnStationForAll")
    ;
  }
  return;
}



// FUNCTION 148ba5c5a FUN_148ba5c5a body=66 status=ok
// SIG undefined FUN_148ba5c5a(void)

void FUN_148ba5c5a(undefined8 param_1,undefined8 *param_2)

{
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
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
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b623720;
  return;
}



// FUNCTION 148ba5c9c FUN_148ba5c9c body=32 status=ok
// SIG undefined FUN_148ba5c9c(void)

void FUN_148ba5c9c(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b623720;
  return;
}



// FUNCTION 148ba5d00 FUN_148ba5d00 body=111 status=ok
// SIG undefined FUN_148ba5d00(void)

undefined8 FUN_148ba5d00(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x40);
      uVar2 = *(undefined4 *)(param_3 + -0x3c);
      uVar3 = *(undefined4 *)(param_3 + -0x38);
      uVar4 = *(undefined4 *)(param_3 + -0x34);
      uVar5 = *(undefined4 *)(param_3 + -0x2c);
      uVar6 = *(undefined4 *)(param_3 + -0x28);
      uVar7 = *(undefined4 *)(param_3 + -0x24);
      *(undefined4 *)(param_2 + -0x30) = *(undefined4 *)(param_3 + -0x30);
      *(undefined4 *)(param_2 + -0x2c) = uVar5;
      *(undefined4 *)(param_2 + -0x28) = uVar6;
      *(undefined4 *)(param_2 + -0x24) = uVar7;
      *(undefined4 *)(param_2 + -0x40) = uVar1;
      *(undefined4 *)(param_2 + -0x3c) = uVar2;
      *(undefined4 *)(param_2 + -0x38) = uVar3;
      *(undefined4 *)(param_2 + -0x34) = uVar4;
      FUN_1470d00c2(param_2 + -0x20,param_3 + -0x20);
      *(undefined1 *)(param_2 + -0x10) = *(undefined1 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_144983130(param_2,param_3);
      param_3 = param_3 + 0x80;
      param_2 = param_2 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148ba5d98 FUN_148ba5d98 body=59 status=ok
// SIG undefined FUN_148ba5d98(void)

undefined8 FUN_148ba5d98(longlong *param_1)

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



// FUNCTION 148ba5de4 FUN_148ba5de4 body=57 status=ok
// SIG undefined FUN_148ba5de4(void)

void FUN_148ba5de4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5150;
    FUN_144a2da94(param_2 + 9);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 148ba5e6c FUN_148ba5e6c body=60 status=ok
// SIG undefined FUN_148ba5e6c(void)

undefined8 * FUN_148ba5e6c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ba5ea8 FUN_148ba5ea8 body=55 status=ok
// SIG undefined FUN_148ba5ea8(void)

void FUN_148ba5ea8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1a30 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1a30 =
         FUN_140002ddd(FUN_1465b1175,uVar1,L"GbxMomentNodeSettings_ShowGameInstallingDialogBox");
  }
  return;
}



// FUNCTION 148ba5f8a FUN_148ba5f8a body=54 status=ok
// SIG undefined FUN_148ba5f8a(void)

undefined1 FUN_148ba5f8a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148ba5fe8 FUN_148ba5fe8 body=59 status=ok
// SIG undefined FUN_148ba5fe8(void)

undefined8 FUN_148ba5fe8(longlong *param_1)

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



// FUNCTION 148ba607c FUN_148ba607c body=55 status=ok
// SIG undefined FUN_148ba607c(void)

void FUN_148ba607c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1a48 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1a48 =
         FUN_140002ddd(FUN_1465b120b,uVar1,L"GbxMomentNodeState_ShowGameInstallingDialogBox");
  }
  return;
}



// FUNCTION 148ba60b4 FUN_148ba60b4 body=112 status=ok
// SIG undefined FUN_148ba60b4(void)

void FUN_148ba60b4(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xe8);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b623b90;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 0x6000;
  param_2[0x12] = 0;
  FUN_14044066a(param_2 + 0x13,0x11,7);
  *(undefined2 *)(param_2 + 0x1a) = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  return;
}



// FUNCTION 148ba6124 FUN_148ba6124 body=94 status=ok
// SIG undefined FUN_148ba6124(void)

void FUN_148ba6124(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b623b90;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 0x6000;
  param_2[0x12] = 0;
  FUN_14044066a(param_2 + 0x13,0x11,7);
  *(undefined2 *)(param_2 + 0x1a) = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  return;
}



// FUNCTION 148ba61c6 FUN_148ba61c6 body=63 status=ok
// SIG undefined FUN_148ba61c6(void)

undefined1 FUN_148ba61c6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba639e(param_2,param_3);
    param_3 = param_3 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return 1;
}



// FUNCTION 148ba622e FUN_148ba622e body=59 status=ok
// SIG undefined FUN_148ba622e(void)

undefined8 FUN_148ba622e(longlong *param_1)

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



// FUNCTION 148ba627a FUN_148ba627a body=40 status=ok
// SIG undefined FUN_148ba627a(void)

void FUN_148ba627a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_148ba634e(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 148ba62f0 FUN_148ba62f0 body=38 status=ok
// SIG undefined FUN_148ba62f0(void)

undefined8 FUN_148ba62f0(undefined8 param_1,int param_2)

{
  FUN_148ba634e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ba6316 FUN_148ba6316 body=55 status=ok
// SIG undefined FUN_148ba6316(void)

void FUN_148ba6316(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1a60 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1a60 = FUN_140002ddd(FUN_1465b12a1,uVar1,L"GbxMomentNodeSettings_TeleportPlayers");
  }
  return;
}



// FUNCTION 148ba634e FUN_148ba634e body=79 status=ok
// SIG undefined FUN_148ba634e(void)

void FUN_148ba634e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b623b90;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_144a2da94(param_1 + 0x13);
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 148ba639e FUN_148ba639e body=187 status=ok
// SIG undefined FUN_148ba639e(void)

longlong FUN_148ba639e(longlong param_1,longlong param_2)

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
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  if ((*(longlong *)(param_1 + 0x80) != *(longlong *)(param_2 + 0x80)) ||
     (*(int *)(param_1 + 0x88) != *(int *)(param_2 + 0x88))) {
    *(longlong *)(param_1 + 0x80) = *(longlong *)(param_2 + 0x80);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  FUN_144983130(param_1 + 0x98,param_2 + 0x98);
  *(undefined2 *)(param_1 + 0xd0) = *(undefined2 *)(param_2 + 0xd0);
  FUN_144a787a6(param_1 + 0xd8,param_2 + 0xd8);
  return param_1;
}



// FUNCTION 148ba645a FUN_148ba645a body=37 status=ok
// SIG undefined FUN_148ba645a(void)

void FUN_148ba645a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x170);
  FUN_148ba65e0(param_2);
  return;
}



// FUNCTION 148ba64ac FUN_148ba64ac body=75 status=ok
// SIG undefined FUN_148ba64ac(void)

undefined1 FUN_148ba64ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    FUN_148ba31ca(param_2 + 0x70,param_3 + 0x70);
    param_2 = param_2 + 0x170;
    param_3 = param_3 + 0x170;
  }
  return 1;
}



// FUNCTION 148ba6520 FUN_148ba6520 body=59 status=ok
// SIG undefined FUN_148ba6520(void)

undefined8 FUN_148ba6520(longlong *param_1)

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



// FUNCTION 148ba656c FUN_148ba656c body=38 status=ok
// SIG undefined FUN_148ba656c(void)

void FUN_148ba656c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x170) == '\x01') {
    FUN_144014b38(param_2);
    *(undefined1 *)(param_2 + 0x170) = 0;
  }
  return;
}



// FUNCTION 148ba65e0 FUN_148ba65e0 body=141 status=ok
// SIG undefined FUN_148ba65e0(void)

void FUN_148ba65e0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 2;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0;
  *param_1 = &PTR_FUN_14b623de0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x6000;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x16] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  return;
}



// FUNCTION 148ba666e FUN_148ba666e body=38 status=ok
// SIG undefined FUN_148ba666e(void)

undefined8 FUN_148ba666e(undefined8 param_1,int param_2)

{
  FUN_144014b38();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ba6694 FUN_148ba6694 body=55 status=ok
// SIG undefined FUN_148ba6694(void)

void FUN_148ba6694(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1a78 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1a78 = FUN_140002ddd(FUN_1465b1337,uVar1,L"GbxMomentNodeState_TeleportPlayers");
  }
  return;
}



// FUNCTION 148ba66cc FUN_148ba66cc body=58 status=ok
// SIG undefined FUN_148ba66cc(void)

void FUN_148ba66cc(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x90);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b624000;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  return;
}



// FUNCTION 148ba6706 FUN_148ba6706 body=42 status=ok
// SIG undefined FUN_148ba6706(void)

void FUN_148ba6706(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b624000;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  return;
}



// FUNCTION 148ba6774 FUN_148ba6774 body=181 status=ok
// SIG undefined FUN_148ba6774(void)

undefined8 FUN_148ba6774(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
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
      lVar1 = param_3 + lVar10;
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      lVar2 = param_2 + 0x28 + lVar10;
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + -0xc) = uVar7;
      *(undefined4 *)(lVar2 + -8) = uVar8;
      *(undefined4 *)(lVar2 + -4) = uVar9;
      *(undefined4 *)(lVar2 + -0x20) = uVar3;
      *(undefined4 *)(lVar2 + -0x1c) = uVar4;
      *(undefined4 *)(lVar2 + -0x18) = uVar5;
      *(undefined4 *)(lVar2 + -0x14) = uVar6;
      FUN_1470d00c2(lVar2,lVar1 + 0x28);
      *(undefined1 *)(lVar2 + 0x10) = *(undefined1 *)(lVar1 + 0x38);
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x40);
      FUN_144983130(param_2 + lVar10 + 0x48,param_3 + lVar10 + 0x48);
      FUN_148ba69b6(param_2 + lVar10 + 0x80,param_3 + lVar10 + 0x80);
      lVar10 = lVar10 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148ba6852 FUN_148ba6852 body=59 status=ok
// SIG undefined FUN_148ba6852(void)

undefined8 FUN_148ba6852(longlong *param_1)

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



// FUNCTION 148ba689e FUN_148ba689e body=40 status=ok
// SIG undefined FUN_148ba689e(void)

void FUN_148ba689e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_148ba6972(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 148ba6914 FUN_148ba6914 body=38 status=ok
// SIG undefined FUN_148ba6914(void)

undefined8 FUN_148ba6914(undefined8 param_1,int param_2)

{
  FUN_148ba6972();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ba693a FUN_148ba693a body=55 status=ok
// SIG undefined FUN_148ba693a(void)

void FUN_148ba693a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1a90 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1a90 = FUN_140002ddd(FUN_1465b13cd,uVar1,L"GbxMomentNodeSettings_TeleportToStations");
  }
  return;
}



// FUNCTION 148ba6972 FUN_148ba6972 body=67 status=ok
// SIG undefined FUN_148ba6972(void)

void FUN_148ba6972(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b624000;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 148ba69b6 FUN_148ba69b6 body=79 status=ok
// SIG undefined FUN_148ba69b6(void)

undefined8 * FUN_148ba69b6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148a849e8(param_1,iVar1);
      FUN_148a84a5b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148ba6aac FUN_148ba6aac body=54 status=ok
// SIG undefined FUN_148ba6aac(void)

undefined1 FUN_148ba6aac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148ba6b0a FUN_148ba6b0a body=59 status=ok
// SIG undefined FUN_148ba6b0a(void)

undefined8 FUN_148ba6b0a(longlong *param_1)

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



// FUNCTION 148ba6b9e FUN_148ba6b9e body=55 status=ok
// SIG undefined FUN_148ba6b9e(void)

void FUN_148ba6b9e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1aa8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1aa8 = FUN_140002ddd(FUN_1465b1463,uVar1,L"GbxMomentNodeState_TeleportToStations");
  }
  return;
}



// FUNCTION 148ba6bf4 FUN_148ba6bf4 body=63 status=ok
// SIG undefined FUN_148ba6bf4(void)

undefined1 FUN_148ba6bf4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba6d40(param_2,param_3);
    param_3 = param_3 + 0xe0;
    param_2 = param_2 + 0xe0;
  }
  return 1;
}



// FUNCTION 148ba6c5c FUN_148ba6c5c body=59 status=ok
// SIG undefined FUN_148ba6c5c(void)

undefined8 FUN_148ba6c5c(longlong *param_1)

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



// FUNCTION 148ba6d08 FUN_148ba6d08 body=55 status=ok
// SIG undefined FUN_148ba6d08(void)

void FUN_148ba6d08(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1ac8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1ac8 =
         FUN_140002ddd(FUN_1465b14f9,uVar1,L"GbxProgressionBehaviorData_AddPointsEachLevel");
  }
  return;
}



// FUNCTION 148ba6d40 FUN_148ba6d40 body=90 status=ok
// SIG undefined FUN_148ba6d40(void)

longlong FUN_148ba6d40(longlong param_1,longlong param_2)

{
  FUN_1486b7d4c(param_1 + 8,param_2 + 8);
  FUN_141855c14(param_1 + 0x20,param_2 + 0x20);
  FUN_140d02432(param_1 + 0x38,param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  FUN_140d02432(param_1 + 0x90,param_2 + 0x90);
  return param_1;
}



// FUNCTION 148ba6de2 FUN_148ba6de2 body=59 status=ok
// SIG undefined FUN_148ba6de2(void)

undefined8 FUN_148ba6de2(longlong *param_1)

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



// FUNCTION 148ba6e82 FUN_148ba6e82 body=172 status=ok
// SIG undefined FUN_148ba6e82(void)

undefined8 * FUN_148ba6e82(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b624670;
  FUN_1447325ac(&DAT_14cb790d0,&local_38,1);
  param_1[4] = local_38;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xf00000d0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba6f30 FUN_148ba6f30 body=57 status=ok
// SIG undefined FUN_148ba6f30(void)

void FUN_148ba6f30(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1bd0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1bd0 = FUN_140002ddd(FUN_1465b15e0,uVar1,L"GbxRewardData_Experience");
  }
  return;
}



// FUNCTION 148ba702c FUN_148ba702c body=63 status=ok
// SIG undefined FUN_148ba702c(void)

undefined1 FUN_148ba702c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba7196(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 148ba7094 FUN_148ba7094 body=59 status=ok
// SIG undefined FUN_148ba7094(void)

undefined8 FUN_148ba7094(longlong *param_1)

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



// FUNCTION 148ba7140 FUN_148ba7140 body=29 status=ok
// SIG undefined FUN_148ba7140(void)

undefined8 FUN_148ba7140(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ba715e FUN_148ba715e body=55 status=ok
// SIG undefined FUN_148ba715e(void)

void FUN_148ba715e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1be8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1be8 = FUN_140002ddd(FUN_1465b1677,uVar1,L"GbxRewardData_Faction");
  }
  return;
}



// FUNCTION 148ba7196 FUN_148ba7196 body=87 status=ok
// SIG undefined FUN_148ba7196(void)

longlong FUN_148ba7196(longlong param_1,longlong param_2)

{
  FUN_14124fed2(param_1 + 8,param_2 + 8);
  if ((*(longlong *)(param_1 + 0x20) != *(longlong *)(param_2 + 0x20)) ||
     (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28))) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  FUN_140d02432(param_1 + 0x38,param_2 + 0x38);
  return param_1;
}



// FUNCTION 148ba7242 FUN_148ba7242 body=75 status=ok
// SIG undefined FUN_148ba7242(void)

undefined1 FUN_148ba7242(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      FUN_14124fed2(param_2 + -0x18,param_3 + -0x18);
      FUN_140d02432(param_2,param_3);
      param_3 = param_3 + 0x70;
      param_2 = param_2 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148ba72b6 FUN_148ba72b6 body=59 status=ok
// SIG undefined FUN_148ba72b6(void)

undefined8 FUN_148ba72b6(longlong *param_1)

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



// FUNCTION 148ba7352 FUN_148ba7352 body=55 status=ok
// SIG undefined FUN_148ba7352(void)

void FUN_148ba7352(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1c00 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1c00 = FUN_140002ddd(FUN_1465b16d6,uVar1,L"GbxRewardData_VaultCardCurrency");
  }
  return;
}



// FUNCTION 148ba73e2 FUN_148ba73e2 body=81 status=ok
// SIG undefined FUN_148ba73e2(void)

undefined1 FUN_148ba73e2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      FUN_14124fed2(param_2 + -0x20,param_3 + -0x20);
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_140d02432(param_2,param_3);
      param_3 = param_3 + 0x78;
      param_2 = param_2 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148ba745c FUN_148ba745c body=59 status=ok
// SIG undefined FUN_148ba745c(void)

undefined8 FUN_148ba745c(longlong *param_1)

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



// FUNCTION 148ba74f8 FUN_148ba74f8 body=55 status=ok
// SIG undefined FUN_148ba74f8(void)

void FUN_148ba74f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1c18 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1c18 = FUN_140002ddd(FUN_1465b176d,uVar1,L"GbxRewardData_VaultCardExperience");
  }
  return;
}



// FUNCTION 148ba759a FUN_148ba759a body=85 status=ok
// SIG undefined FUN_148ba759a(void)

undefined8 FUN_148ba759a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_145c0fe5a(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined4 *)(param_2 + 0x20 + lVar1) = *(undefined4 *)(param_3 + 0x20 + lVar1);
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148ba7618 FUN_148ba7618 body=59 status=ok
// SIG undefined FUN_148ba7618(void)

undefined8 FUN_148ba7618(longlong *param_1)

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



// FUNCTION 148ba76b8 FUN_148ba76b8 body=29 status=ok
// SIG undefined FUN_148ba76b8(void)

undefined8 FUN_148ba76b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ba76d6 FUN_148ba76d6 body=55 status=ok
// SIG undefined FUN_148ba76d6(void)

void FUN_148ba76d6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1c30 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1c30 = FUN_140002ddd(FUN_1465b1803,uVar1,L"GbxRewardRefData_ChallengeTier");
  }
  return;
}



// FUNCTION 148ba770e FUN_148ba770e body=37 status=ok
// SIG undefined FUN_148ba770e(void)

void FUN_148ba770e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x168);
  FUN_145c42fa8(param_2);
  return;
}



// FUNCTION 148ba7760 FUN_148ba7760 body=63 status=ok
// SIG undefined FUN_148ba7760(void)

undefined1 FUN_148ba7760(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba78fa(param_2,param_3);
    param_3 = param_3 + 0x168;
    param_2 = param_2 + 0x168;
  }
  return 1;
}



// FUNCTION 148ba77c8 FUN_148ba77c8 body=59 status=ok
// SIG undefined FUN_148ba77c8(void)

undefined8 FUN_148ba77c8(longlong *param_1)

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



// FUNCTION 148ba7814 FUN_148ba7814 body=40 status=ok
// SIG undefined FUN_148ba7814(void)

void FUN_148ba7814(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x168) == '\x01') {
    FUN_145a38fa8(param_2);
    *(undefined1 *)(param_2 + 0x168) = 0;
  }
  return;
}



// FUNCTION 148ba788a FUN_148ba788a body=38 status=ok
// SIG undefined FUN_148ba788a(void)

undefined8 FUN_148ba788a(undefined8 param_1,int param_2)

{
  FUN_145a38fa8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ba78b0 FUN_148ba78b0 body=55 status=ok
// SIG undefined FUN_148ba78b0(void)

void FUN_148ba78b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1c60 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1c60 = FUN_140002ddd(FUN_1465b18c9,uVar1,L"GbxSkillComponent_ActionSkill");
  }
  return;
}



// FUNCTION 148ba78fa FUN_148ba78fa body=575 status=ok
// SIG undefined FUN_148ba78fa(void)

longlong FUN_148ba78fa(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  FUN_148704de0();
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  lVar12 = *(longlong *)(param_2 + 0x60);
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(longlong *)(param_1 + 0x60) = lVar12;
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
  uVar5 = *(undefined4 *)(param_2 + 0x68);
  uVar6 = *(undefined4 *)(param_2 + 0x6c);
  uVar7 = *(undefined4 *)(param_2 + 0x70);
  uVar8 = *(undefined4 *)(param_2 + 0x74);
  uVar9 = *(undefined4 *)(param_2 + 0x7c);
  uVar10 = *(undefined4 *)(param_2 + 0x80);
  uVar11 = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = uVar9;
  *(undefined4 *)(param_1 + 0x80) = uVar10;
  *(undefined4 *)(param_1 + 0x84) = uVar11;
  *(undefined4 *)(param_1 + 0x68) = uVar5;
  *(undefined4 *)(param_1 + 0x6c) = uVar6;
  *(undefined4 *)(param_1 + 0x70) = uVar7;
  *(undefined4 *)(param_1 + 0x74) = uVar8;
  uVar3 = *(undefined8 *)(param_2 + 0x88);
  lVar12 = *(longlong *)(param_2 + 0x90);
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  *(longlong *)(param_1 + 0x90) = lVar12;
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
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  uVar5 = *(undefined4 *)(param_2 + 0x9c);
  uVar6 = *(undefined4 *)(param_2 + 0xa0);
  uVar7 = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x9c) = uVar5;
  *(undefined4 *)(param_1 + 0xa0) = uVar6;
  *(undefined4 *)(param_1 + 0xa4) = uVar7;
  FUN_14054c6c4(param_1 + 0xb0,param_2 + 0xb0);
  FUN_14054c6c4(param_1 + 0xc0,param_2 + 0xc0);
  FUN_148ba7b3a(param_1 + 0xd0,param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  uVar3 = *(undefined8 *)(param_2 + 0xe8);
  lVar12 = *(longlong *)(param_2 + 0xf0);
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xe8) = uVar3;
  *(longlong *)(param_1 + 0xf0) = lVar12;
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
  uVar3 = *(undefined8 *)(param_2 + 0xf8);
  lVar12 = *(longlong *)(param_2 + 0x100);
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0xf8) = uVar3;
  *(longlong *)(param_1 + 0x100) = lVar12;
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
  uVar3 = *(undefined8 *)(param_2 + 0x108);
  lVar12 = *(longlong *)(param_2 + 0x110);
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x108) = uVar3;
  *(longlong *)(param_1 + 0x110) = lVar12;
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
  puVar13 = (undefined8 *)(param_2 + 0x118);
  puVar14 = (undefined8 *)(param_1 + 0x118);
  for (lVar12 = 9; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  *(undefined1 *)(param_1 + 0x162) = *(undefined1 *)(param_2 + 0x162);
  *(undefined2 *)(param_1 + 0x160) = *(undefined2 *)(param_2 + 0x160);
  return param_1;
}



// FUNCTION 148ba7b3a FUN_148ba7b3a body=88 status=ok
// SIG undefined FUN_148ba7b3a(void)

undefined8 * FUN_148ba7b3a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148ba7b92(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 148ba7b92 FUN_148ba7b92 body=98 status=ok
// SIG undefined FUN_148ba7b92(void)

void FUN_148ba7b92(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148ba7c2a FUN_148ba7c2a body=99 status=ok
// SIG undefined FUN_148ba7c2a(void)

undefined8 FUN_148ba7c2a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_145c43818();
      FUN_1486f89f0(param_2 + lVar2 + 0x28,param_3 + lVar2 + 0x28);
      lVar2 = lVar2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148ba7cb6 FUN_148ba7cb6 body=59 status=ok
// SIG undefined FUN_148ba7cb6(void)

undefined8 FUN_148ba7cb6(longlong *param_1)

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



// FUNCTION 148ba7da4 FUN_148ba7da4 body=67 status=ok
// SIG undefined FUN_148ba7da4(void)

undefined1 FUN_148ba7da4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1418557ae(param_2,param_3);
    FUN_148ba7eca(param_2 + 0x18,param_3 + 0x18);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 148ba7e10 FUN_148ba7e10 body=59 status=ok
// SIG undefined FUN_148ba7e10(void)

undefined8 FUN_148ba7e10(longlong *param_1)

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



// FUNCTION 148ba7e56 FUN_148ba7e56 body=38 status=ok
// SIG undefined FUN_148ba7e56(void)

void FUN_148ba7e56(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148ba7eca FUN_148ba7eca body=79 status=ok
// SIG undefined FUN_148ba7eca(void)

undefined8 * FUN_148ba7eca(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148ba7f1a(param_1,iVar1);
      FUN_148ba7f7c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148ba7f1a FUN_148ba7f1a body=98 status=ok
// SIG undefined FUN_148ba7f1a(void)

void FUN_148ba7f1a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148ba7f7c FUN_148ba7f7c body=87 status=ok
// SIG undefined FUN_148ba7f7c(void)

void FUN_148ba7f7c(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      *(undefined4 *)(param_1 + -0x20) = *(undefined4 *)(param_2 + -0x20);
      *(undefined8 *)(param_1 + -0x28) = *(undefined8 *)(param_2 + -0x28);
      FUN_141857172(param_1 + -0x18,param_2 + -0x18);
      FUN_141858964(param_1,param_2);
      param_1 = param_1 + 0x40;
      param_2 = param_2 + 0x40;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148ba7fd4 FUN_148ba7fd4 body=203 status=ok
// SIG undefined FUN_148ba7fd4(void)

void FUN_148ba7fd4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  memset(param_2 + 6,0,0x160);
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *param_2 = &PTR_FUN_14b626eb0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 10;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 10;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    memset(param_2 + 0x12,0,0x100);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba80a0 FUN_148ba80a0 body=186 status=ok
// SIG undefined FUN_148ba80a0(void)

void FUN_148ba80a0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *param_2 = &PTR_FUN_14b626eb0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 10;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 10;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    memset(param_2 + 0x12,0,0x100);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba8180 FUN_148ba8180 body=63 status=ok
// SIG undefined FUN_148ba8180(void)

undefined1 FUN_148ba8180(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba82e4(param_2,param_3);
    param_3 = param_3 + 400;
    param_2 = param_2 + 400;
  }
  return 1;
}



// FUNCTION 148ba81e8 FUN_148ba81e8 body=59 status=ok
// SIG undefined FUN_148ba81e8(void)

undefined8 FUN_148ba81e8(longlong *param_1)

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



// FUNCTION 148ba8234 FUN_148ba8234 body=40 status=ok
// SIG undefined FUN_148ba8234(void)

void FUN_148ba8234(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 400) == '\x01') {
    FUN_1458888c8(param_2);
    *(undefined1 *)(param_2 + 400) = 0;
  }
  return;
}



// FUNCTION 148ba82aa FUN_148ba82aa body=57 status=ok
// SIG undefined FUN_148ba82aa(void)

void FUN_148ba82aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1ca8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1ca8 = FUN_140002ddd(FUN_1465b1a8d,uVar1,L"GbxSkillComponentData_ActionSkill");
  }
  return;
}



// FUNCTION 148ba82e4 FUN_148ba82e4 body=393 status=ok
// SIG undefined FUN_148ba82e4(void)

longlong FUN_148ba82e4(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  FUN_146130eee(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  FUN_145c43818(param_1 + 0x38,param_2 + 0x38);
  lVar4 = *(longlong *)(param_2 + 0x50);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_2 + 0x50);
    }
  }
  *(longlong *)(param_1 + 0x50) = lVar4;
  if ((*(longlong *)(param_1 + 0x58) != *(longlong *)(param_2 + 0x58)) ||
     (*(int *)(param_1 + 0x60) != *(int *)(param_2 + 0x60))) {
    *(longlong *)(param_1 + 0x58) = *(longlong *)(param_2 + 0x58);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  FUN_1486b55b2(param_1 + 0x70,param_2 + 0x70);
  if ((*(longlong *)(param_1 + 0x80) != *(longlong *)(param_2 + 0x80)) ||
     (*(int *)(param_1 + 0x88) != *(int *)(param_2 + 0x88))) {
    *(longlong *)(param_1 + 0x80) = *(longlong *)(param_2 + 0x80);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x9c);
  uVar2 = *(undefined4 *)(param_2 + 0xa0);
  uVar3 = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  *(undefined4 *)(param_1 + 0xa0) = uVar2;
  *(undefined4 *)(param_1 + 0xa4) = uVar3;
  FUN_1418557ae(param_1 + 0xa8,param_2 + 0xa8);
  FUN_148ba7eca(param_1 + 0xc0,param_2 + 0xc0);
  FUN_1401f3db8(param_1 + 0xd0,param_2 + 0xd0);
  FUN_1401f3db8(param_1 + 0xe8,param_2 + 0xe8);
  FUN_145c43818(param_1 + 0x100,param_2 + 0x100);
  FUN_145c43818(param_1 + 0x118,param_2 + 0x118);
  FUN_145c43818(param_1 + 0x130,param_2 + 0x130);
  FUN_148ba846e(param_1 + 0x148,param_2 + 0x148);
  FUN_1401f3db8(param_1 + 0x160,param_2 + 0x160);
  FUN_1486f89f0(param_1 + 0x178,param_2 + 0x178);
  return param_1;
}



// FUNCTION 148ba846e FUN_148ba846e body=84 status=ok
// SIG undefined FUN_148ba846e(void)

longlong * FUN_148ba846e(longlong *param_1,longlong *param_2)

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



// FUNCTION 148ba84c4 FUN_148ba84c4 body=197 status=ok
// SIG undefined FUN_148ba84c4(void)

undefined1 * FUN_148ba84c4(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  FUN_145c43818(param_1 + 8,param_2 + 8);
  FUN_1401f3db8(param_1 + 0x20,param_2 + 0x20);
  FUN_1401f3db8(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined4 *)(param_2 + 0x5c);
  uVar2 = *(undefined4 *)(param_2 + 0x60);
  uVar3 = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  *(undefined4 *)(param_1 + 100) = uVar3;
  FUN_144a787a6(param_1 + 0x68,param_2 + 0x68);
  FUN_148ba858a(param_1 + 0x78,param_2 + 0x78);
  param_1[0x88] = param_2[0x88];
  FUN_1401f3db8(param_1 + 0x90,param_2 + 0x90);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  uVar1 = *(undefined4 *)(param_2 + 0xb4);
  uVar2 = *(undefined4 *)(param_2 + 0xb8);
  uVar3 = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = uVar1;
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  *(undefined4 *)(param_1 + 0xbc) = uVar3;
  FUN_144a787a6(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  return param_1;
}



// FUNCTION 148ba858a FUN_148ba858a body=95 status=ok
// SIG undefined FUN_148ba858a(void)

undefined8 * FUN_148ba858a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145888a28(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148ba85ea(param_1,iVar1);
      FUN_148ba864c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148ba85ea FUN_148ba85ea body=98 status=ok
// SIG undefined FUN_148ba85ea(void)

void FUN_148ba85ea(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148ba864c FUN_148ba864c body=52 status=ok
// SIG undefined FUN_148ba864c(void)

void FUN_148ba864c(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148ba8680(param_1,param_2);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 148ba8680 FUN_148ba8680 body=116 status=ok
// SIG undefined FUN_148ba8680(void)

longlong FUN_148ba8680(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_1401f3da4();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  uVar4 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  *(undefined8 *)(param_1 + 0x30) = 0;
  iVar1 = *(int *)(param_2 + 0x38);
  _Src = *(void **)(param_2 + 0x30);
  *(int *)(param_1 + 0x38) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 0x30),iVar1,0);
    memcpy(*(void **)(param_1 + 0x30),_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148ba86f4 FUN_148ba86f4 body=48 status=ok
// SIG undefined FUN_148ba86f4(void)

void FUN_148ba86f4(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x168);
  FUN_145c42fa8(param_2);
  *param_2 = &PTR_FUN_14b626190;
  return;
}



// FUNCTION 148ba8724 FUN_148ba8724 body=32 status=ok
// SIG undefined FUN_148ba8724(void)

void FUN_148ba8724(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c42fa8(param_2);
  *param_2 = &PTR_FUN_14b626190;
  return;
}



// FUNCTION 148ba8768 FUN_148ba8768 body=63 status=ok
// SIG undefined FUN_148ba8768(void)

undefined1 FUN_148ba8768(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba78fa(param_2,param_3);
    param_3 = param_3 + 0x168;
    param_2 = param_2 + 0x168;
  }
  return 1;
}



// FUNCTION 148ba87d0 FUN_148ba87d0 body=59 status=ok
// SIG undefined FUN_148ba87d0(void)

undefined8 FUN_148ba87d0(longlong *param_1)

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



// FUNCTION 148ba881c FUN_148ba881c body=40 status=ok
// SIG undefined FUN_148ba881c(void)

void FUN_148ba881c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x168) == '\x01') {
    FUN_145a38fa8(param_2);
    *(undefined1 *)(param_2 + 0x168) = 0;
  }
  return;
}



// FUNCTION 148ba8892 FUN_148ba8892 body=38 status=ok
// SIG undefined FUN_148ba8892(void)

undefined8 FUN_148ba8892(undefined8 param_1,int param_2)

{
  FUN_145a38fa8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ba88b8 FUN_148ba88b8 body=55 status=ok
// SIG undefined FUN_148ba88b8(void)

void FUN_148ba88b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1e68 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1e68 = FUN_140002ddd(FUN_1465b1e8b,uVar1,L"GbxSkillComponent_ActionSkill_DarkSiren");
  }
  return;
}



// FUNCTION 148ba8944 FUN_148ba8944 body=207 status=ok
// SIG undefined FUN_148ba8944(void)

undefined8 FUN_148ba8944(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined1 *)(param_2 + 0x80 + lVar10) = *(undefined1 *)(param_3 + 0x80 + lVar10);
      lVar10 = lVar10 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148ba8a3c FUN_148ba8a3c body=59 status=ok
// SIG undefined FUN_148ba8a3c(void)

undefined8 FUN_148ba8a3c(longlong *param_1)

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



// FUNCTION 148ba8a88 FUN_148ba8a88 body=38 status=ok
// SIG undefined FUN_148ba8a88(void)

void FUN_148ba8a88(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148ba8b98 FUN_148ba8b98 body=118 status=ok
// SIG undefined FUN_148ba8b98(void)

undefined8 FUN_148ba8b98(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 148ba8c36 FUN_148ba8c36 body=59 status=ok
// SIG undefined FUN_148ba8c36(void)

undefined8 FUN_148ba8c36(longlong *param_1)

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



// FUNCTION 148ba8c7c FUN_148ba8c7c body=32 status=ok
// SIG undefined FUN_148ba8c7c(void)

void FUN_148ba8c7c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148ba8cea FUN_148ba8cea body=38 status=ok
// SIG undefined FUN_148ba8cea(void)

undefined8 FUN_148ba8cea(undefined8 param_1,int param_2)

{
  FUN_140f9d4d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ba8d10 FUN_148ba8d10 body=55 status=ok
// SIG undefined FUN_148ba8d10(void)

void FUN_148ba8d10(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1e98 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1e98 = FUN_140002ddd(FUN_1465b1fb7,uVar1,L"GpsTest_Haunted");
  }
  return;
}



// FUNCTION 148ba8d48 FUN_148ba8d48 body=59 status=ok
// SIG undefined FUN_148ba8d48(void)

void FUN_148ba8d48(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x170);
  FUN_145c42fa8(param_2);
  *param_2 = &PTR_FUN_14b627170;
  param_2[0x2d] = 0;
  return;
}



// FUNCTION 148ba8d84 FUN_148ba8d84 body=43 status=ok
// SIG undefined FUN_148ba8d84(void)

void FUN_148ba8d84(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c42fa8(param_2);
  *param_2 = &PTR_FUN_14b627170;
  param_2[0x2d] = 0;
  return;
}



// FUNCTION 148ba8dd4 FUN_148ba8dd4 body=76 status=ok
// SIG undefined FUN_148ba8dd4(void)

undefined8 FUN_148ba8dd4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba78fa(param_2,param_3);
    *(undefined8 *)(param_2 + 0x168) = *(undefined8 *)(param_3 + 0x168);
    param_2 = param_2 + 0x170;
    param_3 = param_3 + 0x170;
  }
  return 1;
}



// FUNCTION 148ba8e48 FUN_148ba8e48 body=59 status=ok
// SIG undefined FUN_148ba8e48(void)

undefined8 FUN_148ba8e48(longlong *param_1)

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



// FUNCTION 148ba8e94 FUN_148ba8e94 body=40 status=ok
// SIG undefined FUN_148ba8e94(void)

void FUN_148ba8e94(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x170) == '\x01') {
    FUN_145a38fa8(param_2);
    *(undefined1 *)(param_2 + 0x170) = 0;
  }
  return;
}



// FUNCTION 148ba8f0a FUN_148ba8f0a body=38 status=ok
// SIG undefined FUN_148ba8f0a(void)

undefined8 FUN_148ba8f0a(undefined8 param_1,int param_2)

{
  FUN_145a38fa8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ba8f30 FUN_148ba8f30 body=55 status=ok
// SIG undefined FUN_148ba8f30(void)

void FUN_148ba8f30(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1eb0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1eb0 =
         FUN_140002ddd(FUN_1465b204d,uVar1,L"GbxSkillComponent_ActionSkill_DarkSiren_Domination");
  }
  return;
}



// FUNCTION 148ba8f68 FUN_148ba8f68 body=201 status=ok
// SIG undefined FUN_148ba8f68(void)

void FUN_148ba8f68(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  memset(param_2 + 6,0,0x160);
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  param_2[4] = local_48._0_8_;
  *(uchar (*) [8])(param_2 + 5) = local_48.Data4;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 10;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 10;
  memset(param_2 + 0x12,0,0x100);
  *param_2 = &PTR_FUN_14b6268a0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba9032 FUN_148ba9032 body=184 status=ok
// SIG undefined FUN_148ba9032(void)

void FUN_148ba9032(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  param_2[4] = local_48._0_8_;
  *(uchar (*) [8])(param_2 + 5) = local_48.Data4;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 10;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 10;
  memset(param_2 + 0x12,0,0x100);
  *param_2 = &PTR_FUN_14b6268a0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba9110 FUN_148ba9110 body=63 status=ok
// SIG undefined FUN_148ba9110(void)

undefined1 FUN_148ba9110(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba82e4(param_2,param_3);
    param_3 = param_3 + 400;
    param_2 = param_2 + 400;
  }
  return 1;
}



// FUNCTION 148ba9178 FUN_148ba9178 body=59 status=ok
// SIG undefined FUN_148ba9178(void)

undefined8 FUN_148ba9178(longlong *param_1)

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



// FUNCTION 148ba91c4 FUN_148ba91c4 body=40 status=ok
// SIG undefined FUN_148ba91c4(void)

void FUN_148ba91c4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 400) == '\x01') {
    FUN_1458888c8(param_2);
    *(undefined1 *)(param_2 + 400) = 0;
  }
  return;
}



// FUNCTION 148ba923a FUN_148ba923a body=38 status=ok
// SIG undefined FUN_148ba923a(void)

undefined8 FUN_148ba923a(undefined8 param_1,int param_2)

{
  FUN_1458888c8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ba9260 FUN_148ba9260 body=55 status=ok
// SIG undefined FUN_148ba9260(void)

void FUN_148ba9260(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1ec8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1ec8 =
         FUN_140002ddd(FUN_1465b20e3,uVar1,L"GbxSkillComponentData_ActionSkill_DarkSiren");
  }
  return;
}



// FUNCTION 148ba9298 FUN_148ba9298 body=201 status=ok
// SIG undefined FUN_148ba9298(void)

void FUN_148ba9298(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  memset(param_2 + 6,0,0x160);
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  param_2[4] = local_48._0_8_;
  *(uchar (*) [8])(param_2 + 5) = local_48.Data4;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 10;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 10;
  memset(param_2 + 0x12,0,0x100);
  *param_2 = &PTR_FUN_14b626a40;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba9362 FUN_148ba9362 body=184 status=ok
// SIG undefined FUN_148ba9362(void)

void FUN_148ba9362(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  param_2[4] = local_48._0_8_;
  *(uchar (*) [8])(param_2 + 5) = local_48.Data4;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 10;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 10;
  memset(param_2 + 0x12,0,0x100);
  *param_2 = &PTR_FUN_14b626a40;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba9440 FUN_148ba9440 body=63 status=ok
// SIG undefined FUN_148ba9440(void)

undefined1 FUN_148ba9440(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba82e4(param_2,param_3);
    param_3 = param_3 + 400;
    param_2 = param_2 + 400;
  }
  return 1;
}



// FUNCTION 148ba94a8 FUN_148ba94a8 body=59 status=ok
// SIG undefined FUN_148ba94a8(void)

undefined8 FUN_148ba94a8(longlong *param_1)

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



// FUNCTION 148ba94f4 FUN_148ba94f4 body=40 status=ok
// SIG undefined FUN_148ba94f4(void)

void FUN_148ba94f4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 400) == '\x01') {
    FUN_1458888c8(param_2);
    *(undefined1 *)(param_2 + 400) = 0;
  }
  return;
}



// FUNCTION 148ba956a FUN_148ba956a body=38 status=ok
// SIG undefined FUN_148ba956a(void)

undefined8 FUN_148ba956a(undefined8 param_1,int param_2)

{
  FUN_1458888c8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ba9590 FUN_148ba9590 body=55 status=ok
// SIG undefined FUN_148ba9590(void)

void FUN_148ba9590(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1ee0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1ee0 =
         FUN_140002ddd(FUN_1465b217b,uVar1,L"GbxSkillComponentData_ActionSkill_DarkSiren_Domination"
                      );
  }
  return;
}



// FUNCTION 148ba95c8 FUN_148ba95c8 body=65 status=ok
// SIG undefined FUN_148ba95c8(void)

void FUN_148ba95c8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x188);
  FUN_145c42fa8(param_2);
  *param_2 = &PTR_FUN_14b627210;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  return;
}



// FUNCTION 148ba960a FUN_148ba960a body=49 status=ok
// SIG undefined FUN_148ba960a(void)

void FUN_148ba960a(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c42fa8(param_2);
  *param_2 = &PTR_FUN_14b627210;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  return;
}



// FUNCTION 148ba9660 FUN_148ba9660 body=63 status=ok
// SIG undefined FUN_148ba9660(void)

undefined1 FUN_148ba9660(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba97ea(param_2,param_3);
    param_3 = param_3 + 0x188;
    param_2 = param_2 + 0x188;
  }
  return 1;
}



// FUNCTION 148ba96c8 FUN_148ba96c8 body=59 status=ok
// SIG undefined FUN_148ba96c8(void)

undefined8 FUN_148ba96c8(longlong *param_1)

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



// FUNCTION 148ba9714 FUN_148ba9714 body=40 status=ok
// SIG undefined FUN_148ba9714(void)

void FUN_148ba9714(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x188) == '\x01') {
    FUN_1461b22b8(param_2);
    *(undefined1 *)(param_2 + 0x188) = 0;
  }
  return;
}



// FUNCTION 148ba978a FUN_148ba978a body=38 status=ok
// SIG undefined FUN_148ba978a(void)

undefined8 FUN_148ba978a(undefined8 param_1,int param_2)

{
  FUN_1461b22b8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ba97b0 FUN_148ba97b0 body=57 status=ok
// SIG undefined FUN_148ba97b0(void)

void FUN_148ba97b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1ef8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1ef8 =
         FUN_140002ddd(FUN_1465b2211,uVar1,L"GbxSkillComponent_ActionSkill_DarkSiren_PhaseShard");
  }
  return;
}



// FUNCTION 148ba97ea FUN_148ba97ea body=185 status=ok
// SIG undefined FUN_148ba97ea(void)

longlong FUN_148ba97ea(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_148ba78fa();
  uVar3 = *(undefined8 *)(param_2 + 0x168);
  lVar4 = *(longlong *)(param_2 + 0x170);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x168) = uVar3;
  *(longlong *)(param_1 + 0x170) = lVar4;
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
  uVar3 = *(undefined8 *)(param_2 + 0x178);
  lVar4 = *(longlong *)(param_2 + 0x180);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x178) = uVar3;
  *(longlong *)(param_1 + 0x180) = lVar4;
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
  return param_1;
}



// FUNCTION 148ba98d0 FUN_148ba98d0 body=150 status=ok
// SIG undefined FUN_148ba98d0(void)

undefined8 FUN_148ba98d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ba82e4(param_2,param_3);
    *(undefined8 *)(param_2 + 400) = *(undefined8 *)(param_3 + 400);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    uVar1 = *(undefined4 *)(param_3 + 0x1a4);
    uVar2 = *(undefined4 *)(param_3 + 0x1a8);
    uVar3 = *(undefined4 *)(param_3 + 0x1ac);
    *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(param_3 + 0x1a0);
    *(undefined4 *)(param_2 + 0x1a4) = uVar1;
    *(undefined4 *)(param_2 + 0x1a8) = uVar2;
    *(undefined4 *)(param_2 + 0x1ac) = uVar3;
    FUN_144a787a6(param_2 + 0x1b0,param_3 + 0x1b0);
    FUN_148ba84c4(param_2 + 0x1c0,param_3 + 0x1c0);
    param_2 = param_2 + 0x298;
    param_3 = param_3 + 0x298;
  }
  return 1;
}



// FUNCTION 148ba998e FUN_148ba998e body=59 status=ok
// SIG undefined FUN_148ba998e(void)

undefined8 FUN_148ba998e(longlong *param_1)

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



// FUNCTION 148ba99da FUN_148ba99da body=40 status=ok
// SIG undefined FUN_148ba99da(void)

void FUN_148ba99da(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x298) == '\x01') {
    FUN_146156cd2(param_2);
    *(undefined1 *)(param_2 + 0x298) = 0;
  }
  return;
}



// FUNCTION 148ba9a50 FUN_148ba9a50 body=57 status=ok
// SIG undefined FUN_148ba9a50(void)

void FUN_148ba9a50(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1f10 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1f10 =
         FUN_140002ddd(FUN_1465b22a7,uVar1,L"GbxSkillComponentData_ActionSkill_DarkSiren_PhaseShard"
                      );
  }
  return;
}



// FUNCTION 148ba9a90 FUN_148ba9a90 body=296 status=ok
// SIG undefined FUN_148ba9a90(void)

void FUN_148ba9a90(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int local_3c;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446dcc8c();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  uStack_48 = (undefined4)local_28;
  uStack_44 = local_28._4_4_;
  FUN_148dcc4f4(&local_58,iVar1 != 0);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba9bba FUN_148ba9bba body=731 status=ok
// SIG undefined FUN_148ba9bba(void)

void FUN_148ba9bba(undefined8 param_1,longlong param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_2a8 [40];
  longlong local_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  longlong local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined **local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8;
  undefined8 local_1e4;
  undefined8 uStack_1dc;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined8 uStack_18f;
  undefined8 local_184;
  undefined8 uStack_17c;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 local_e4;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined **local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_268);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_268);
  }
  local_250 = &PTR_FUN_14b322ee0;
  local_248 = 0;
  local_240 = 0x34002;
  local_170 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  local_1e4 = 0;
  uStack_1dc = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  uStack_197 = 0;
  uStack_190 = 0;
  uStack_18f = 0;
  local_184 = 0;
  uStack_17c = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0x3002;
  local_140 = 0;
  local_108 = 0;
  local_100 = 0x200000000;
  local_f8 = 0;
  local_f0 = 0x3f800000;
  local_e8 = 0;
  local_e4 = 0;
  local_d8 = 0;
  local_d0 = 0xf00000d0;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_7c = 0xbf800000;
  FUN_1405c5fa2();
  local_70 = &DAT_14cb769e8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = &PTR_FUN_14b0394b0;
  local_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_250);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_250);
  }
  pppuVar1 = *(undefined ****)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_280 = local_268;
  if ((local_268 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  if (pppuVar1 == (undefined ***)0x0) {
    pppuVar1 = &local_250;
  }
  local_278 = (undefined4)uStack_260;
  uStack_274 = uStack_260._4_4_;
  uStack_270 = (undefined4)local_258;
  uStack_26c = local_258._4_4_;
  FUN_148dcc59a(&local_280,pppuVar1);
  FUN_140df0e32(&local_250);
  if ((local_30 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba9e9e FUN_148ba9e9e body=104 status=ok
// SIG undefined FUN_148ba9e9e(void)

undefined1 FUN_148ba9e9e(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  plVar1 = (longlong *)FUN_14479d2ce();
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_21);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_21;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba9f07 FUN_148ba9f07 body=89 status=ok
// SIG undefined FUN_148ba9f07(void)

void FUN_148ba9f07(undefined8 param_1)

{
  undefined1 auStack_58 [40];
  undefined2 local_30 [4];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30[0] = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_148ba9f62(local_30);
  FUN_1447cd2ec(param_1,local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ba9f62 FUN_148ba9f62 body=100 status=ok
// SIG undefined FUN_148ba9f62(void)

undefined2 * FUN_148ba9f62(undefined2 *param_1,undefined2 *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  lVar2 = *(longlong *)(param_2 + 4);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 4);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 4) = lVar2;
  lVar2 = *(longlong *)(param_2 + 8);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 8);
    }
  }
  *(longlong *)(param_1 + 8) = lVar2;
  return param_1;
}



// FUNCTION 148ba9fe2 FUN_148ba9fe2 body=37 status=ok
// SIG undefined FUN_148ba9fe2(void)

void FUN_148ba9fe2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148dce768();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148baa008 FUN_148baa008 body=95 status=ok
// SIG undefined FUN_148baa008(void)

void FUN_148baa008(longlong *param_1,undefined1 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [46];
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1a = param_2;
  local_19 = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cba2228);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1a);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148baa06e FUN_148baa06e body=238 status=ok
// SIG undefined FUN_148baa06e(void)

void FUN_148baa06e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148dce868(param_1,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148baa15e FUN_148baa15e body=238 status=ok
// SIG undefined FUN_148baa15e(void)

void FUN_148baa15e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
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
  uStack_40 = uStack_28;
  uStack_3c = uStack_24;
  FUN_148dce7ae(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148baa278 FUN_148baa278 body=47 status=ok
// SIG undefined FUN_148baa278(void)

void FUN_148baa278(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cba2250);
                    /* WARNING: Could not recover jumptable at 0x000148baa2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 148baa2a8 FUN_148baa2a8 body=95 status=ok
// SIG undefined FUN_148baa2a8(void)

void FUN_148baa2a8(longlong *param_1,undefined1 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [46];
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1a = param_2;
  local_19 = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cba2260);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1a);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148baa308 FUN_148baa308 body=91 status=ok
// SIG undefined FUN_148baa308(void)

void FUN_148baa308(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cba2270);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148baa364 FUN_148baa364 body=47 status=ok
// SIG undefined FUN_148baa364(void)

void FUN_148baa364(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cba2280);
                    /* WARNING: Could not recover jumptable at 0x000148baa390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 148baa394 FUN_148baa394 body=91 status=ok
// SIG undefined FUN_148baa394(void)

void FUN_148baa394(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cba2290);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148baa400 FUN_148baa400 body=47 status=ok
// SIG undefined FUN_148baa400(void)

void FUN_148baa400(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cba2310);
                    /* WARNING: Could not recover jumptable at 0x000148baa42c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 148baa480 FUN_148baa480 body=197 status=ok
// SIG undefined FUN_148baa480(void)

void FUN_148baa480(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba2350) {
    FUN_144b3d300(&DAT_14cba2350);
    if (DAT_14cba2350 == -1) {
      FUN_1446f470e(&DAT_14cba2348,L"bRevealed",1);
      _Init_thread_footer(&DAT_14cba2350);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba235c) {
    FUN_144b3d300(&DAT_14cba235c);
    if (DAT_14cba235c == -1) {
      FUN_1446f470e(&DAT_14cba2354,L"ElementalAttunement",1);
      _Init_thread_footer(&DAT_14cba235c);
      return;
    }
  }
  return;
}



// FUNCTION 148baa546 FUN_148baa546 body=198 status=ok
// SIG undefined FUN_148baa546(void)

void FUN_148baa546(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  FUN_1446dcc8c();
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
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_38 = (undefined4)uStack_20;
  uStack_34 = uStack_20._4_4_;
  uStack_30 = (undefined4)local_18;
  uStack_2c = local_18._4_4_;
  FUN_148dcf01c();
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148baa60e FUN_148baa60e body=198 status=ok
// SIG undefined FUN_148baa60e(void)

void FUN_148baa60e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  FUN_1446dcc8c();
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
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_38 = (undefined4)uStack_20;
  uStack_34 = uStack_20._4_4_;
  uStack_30 = (undefined4)local_18;
  uStack_2c = local_18._4_4_;
  FUN_148dcef94();
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148baa6d6 FUN_148baa6d6 body=205 status=ok
// SIG undefined FUN_148baa6d6(void)

void FUN_148baa6d6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_48 = (undefined4)uStack_30;
  uStack_44 = uStack_30._4_4_;
  uStack_40 = (undefined4)local_28;
  uStack_3c = local_28._4_4_;
  uVar1 = FUN_148dcf1d0();
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148baa7a4 FUN_148baa7a4 body=206 status=ok
// SIG undefined FUN_148baa7a4(void)

void FUN_148baa7a4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_48 = (undefined4)uStack_30;
  uStack_44 = uStack_30._4_4_;
  uStack_40 = (undefined4)local_28;
  uStack_3c = local_28._4_4_;
  uVar1 = FUN_148dcee54();
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148baa87a FUN_148baa87a body=328 status=ok
// SIG undefined FUN_148baa87a(void)

void FUN_148baa87a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_40;
  local_68 = local_50;
  uStack_64 = uStack_4c;
  uStack_60 = uStack_48;
  uStack_5c = uStack_44;
  local_80 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_78 = (undefined4)uStack_30;
  uStack_74 = uStack_30._4_4_;
  uStack_70 = (undefined4)local_28;
  uStack_6c = local_28._4_4_;
  uVar1 = FUN_148dcf0a2(&local_80,&local_68);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148baa9ca FUN_148baa9ca body=301 status=ok
// SIG undefined FUN_148baa9ca(void)

void FUN_148baa9ca(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  uVar1 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  uStack_48 = (undefined4)local_28;
  uStack_44 = local_28._4_4_;
  uVar2 = FUN_148dcf156(&local_58,uVar1);
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148baaafe FUN_148baaafe body=328 status=ok
// SIG undefined FUN_148baaafe(void)

void FUN_148baaafe(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_40;
  local_68 = local_50;
  uStack_64 = uStack_4c;
  uStack_60 = uStack_48;
  uStack_5c = uStack_44;
  local_80 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_78 = (undefined4)uStack_30;
  uStack_74 = uStack_30._4_4_;
  uStack_70 = (undefined4)local_28;
  uStack_6c = local_28._4_4_;
  uVar1 = FUN_148dcef0a(&local_80,&local_68);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148baac4a FUN_148baac4a body=138 status=ok
// SIG undefined FUN_148baac4a(void)

undefined8 * FUN_148baac4a(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [36];
  undefined8 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0xffffffffffffffff;
  local_2c = 0;
  plVar1 = (longlong *)FUN_14479d2ce(param_2);
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_2 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_34);
  *(undefined4 *)(param_1 + 1) = local_2c;
  *param_1 = local_34;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148baacda FUN_148baacda body=294 status=ok
// SIG undefined FUN_148baacda(void)

void FUN_148baacda(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  uVar1 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_28;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_40 = (undefined4)uStack_20;
  uStack_3c = uStack_20._4_4_;
  uStack_38 = (undefined4)local_18;
  uStack_34 = local_18._4_4_;
  FUN_148dcf456(&local_48,uVar1);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148baae02 FUN_148baae02 body=198 status=ok
// SIG undefined FUN_148baae02(void)

void FUN_148baae02(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  FUN_1446dcc8c();
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
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_38 = (undefined4)uStack_20;
  uStack_34 = uStack_20._4_4_;
  uStack_30 = (undefined4)local_18;
  uStack_2c = local_18._4_4_;
  FUN_148dcf576();
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148baaeca FUN_148baaeca body=205 status=ok
// SIG undefined FUN_148baaeca(void)

void FUN_148baaeca(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_48 = (undefined4)uStack_30;
  uStack_44 = uStack_30._4_4_;
  uStack_40 = (undefined4)local_28;
  uStack_3c = local_28._4_4_;
  uVar1 = FUN_148dcf5fc();
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148baaf9b FUN_148baaf9b body=102 status=ok
// SIG undefined FUN_148baaf9b(void)

void FUN_148baaf9b(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  plVar1 = (longlong *)FUN_14479d2ce();
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bab002 FUN_148bab002 body=38 status=ok
// SIG undefined FUN_148bab002(void)

void FUN_148bab002(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148dd9354();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148bab028 FUN_148bab028 body=47 status=ok
// SIG undefined FUN_148bab028(void)

void FUN_148bab028(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cba2620);
                    /* WARNING: Could not recover jumptable at 0x000148bab054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 148bab058 FUN_148bab058 body=93 status=ok
// SIG undefined FUN_148bab058(void)

void FUN_148bab058(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cba2630);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bab0c2 FUN_148bab0c2 body=250 status=ok
// SIG undefined FUN_148bab0c2(void)

void FUN_148bab0c2(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [64];
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_90 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_88 = (undefined4)uStack_30;
  uStack_84 = uStack_30._4_4_;
  uStack_80 = (undefined4)local_28;
  uStack_7c = local_28._4_4_;
  FUN_148dda1f8(local_78);
  FUN_148bab1be(param_3,local_78);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bab1be FUN_148bab1be body=115 status=ok
// SIG undefined FUN_148bab1be(void)

longlong * FUN_148bab1be(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  
  lVar6 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = *param_2;
    }
  }
  bVar5 = DAT_14c950c29;
  *param_1 = lVar6;
  lVar6 = param_2[1];
  if ((bVar5 & 1) != 0) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = param_2[1];
    }
  }
  param_1[1] = lVar6;
  lVar6 = param_2[3];
  lVar1 = param_2[4];
  lVar2 = param_2[5];
  lVar3 = param_2[6];
  lVar4 = param_2[7];
  param_1[2] = param_2[2];
  param_1[3] = lVar6;
  param_1[4] = lVar1;
  param_1[5] = lVar2;
  param_1[6] = lVar3;
  param_1[7] = lVar4;
  return param_1;
}



// FUNCTION 148bab238 FUN_148bab238 body=296 status=ok
// SIG undefined FUN_148bab238(void)

void FUN_148bab238(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int local_3c;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446dcc8c();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  uStack_48 = (undefined4)local_28;
  uStack_44 = local_28._4_4_;
  FUN_148dda162(&local_58,iVar1 != 0);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bab378 FUN_148bab378 body=45 status=ok
// SIG undefined FUN_148bab378(void)

longlong FUN_148bab378(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bab3a6 FUN_148bab3a6 body=45 status=ok
// SIG undefined FUN_148bab3a6(void)

longlong FUN_148bab3a6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bab3d4 FUN_148bab3d4 body=45 status=ok
// SIG undefined FUN_148bab3d4(void)

longlong FUN_148bab3d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bab412 FUN_148bab412 body=48 status=ok
// SIG undefined FUN_148bab412(void)

longlong FUN_148bab412(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x860;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bab442 FUN_148bab442 body=48 status=ok
// SIG undefined FUN_148bab442(void)

longlong FUN_148bab442(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x868;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bab472 FUN_148bab472 body=48 status=ok
// SIG undefined FUN_148bab472(void)

longlong FUN_148bab472(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x870;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bab4a2 FUN_148bab4a2 body=48 status=ok
// SIG undefined FUN_148bab4a2(void)

longlong FUN_148bab4a2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10a0;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bab4d2 FUN_148bab4d2 body=48 status=ok
// SIG undefined FUN_148bab4d2(void)

longlong FUN_148bab4d2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10a8;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bab502 FUN_148bab502 body=48 status=ok
// SIG undefined FUN_148bab502(void)

longlong FUN_148bab502(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10b0;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bab53a FUN_148bab53a body=48 status=ok
// SIG undefined FUN_148bab53a(void)

longlong FUN_148bab53a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10b8;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bab56a FUN_148bab56a body=48 status=ok
// SIG undefined FUN_148bab56a(void)

longlong FUN_148bab56a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10c0;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bab59a FUN_148bab59a body=48 status=ok
// SIG undefined FUN_148bab59a(void)

longlong FUN_148bab59a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10c8;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bab5ca FUN_148bab5ca body=48 status=ok
// SIG undefined FUN_148bab5ca(void)

longlong FUN_148bab5ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10d0;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bab602 FUN_148bab602 body=48 status=ok
// SIG undefined FUN_148bab602(void)

longlong FUN_148bab602(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10d8;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bab632 FUN_148bab632 body=48 status=ok
// SIG undefined FUN_148bab632(void)

longlong FUN_148bab632(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10e0;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bab662 FUN_148bab662 body=48 status=ok
// SIG undefined FUN_148bab662(void)

longlong FUN_148bab662(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10e8;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bab69a FUN_148bab69a body=48 status=ok
// SIG undefined FUN_148bab69a(void)

longlong FUN_148bab69a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10f0;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bab6ca FUN_148bab6ca body=48 status=ok
// SIG undefined FUN_148bab6ca(void)

longlong FUN_148bab6ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10f8;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bab6fa FUN_148bab6fa body=48 status=ok
// SIG undefined FUN_148bab6fa(void)

longlong FUN_148bab6fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1110;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bab72a FUN_148bab72a body=48 status=ok
// SIG undefined FUN_148bab72a(void)

longlong FUN_148bab72a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a80;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bab762 FUN_148bab762 body=48 status=ok
// SIG undefined FUN_148bab762(void)

longlong FUN_148bab762(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a88;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bab792 FUN_148bab792 body=48 status=ok
// SIG undefined FUN_148bab792(void)

longlong FUN_148bab792(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a90;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bab7c2 FUN_148bab7c2 body=48 status=ok
// SIG undefined FUN_148bab7c2(void)

longlong FUN_148bab7c2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3ad8;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bab802 FUN_148bab802 body=48 status=ok
// SIG undefined FUN_148bab802(void)

longlong FUN_148bab802(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3ae0;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bab832 FUN_148bab832 body=48 status=ok
// SIG undefined FUN_148bab832(void)

longlong FUN_148bab832(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3ae8;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bab862 FUN_148bab862 body=48 status=ok
// SIG undefined FUN_148bab862(void)

longlong FUN_148bab862(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b08;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bab892 FUN_148bab892 body=48 status=ok
// SIG undefined FUN_148bab892(void)

longlong FUN_148bab892(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b20;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bab8ca FUN_148bab8ca body=48 status=ok
// SIG undefined FUN_148bab8ca(void)

longlong FUN_148bab8ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b28;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bab920 FUN_148bab920 body=48 status=ok
// SIG undefined FUN_148bab920(void)

longlong FUN_148bab920(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b30;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bab958 FUN_148bab958 body=48 status=ok
// SIG undefined FUN_148bab958(void)

longlong FUN_148bab958(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b38;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bab990 FUN_148bab990 body=48 status=ok
// SIG undefined FUN_148bab990(void)

longlong FUN_148bab990(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b40;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bab9e8 FUN_148bab9e8 body=48 status=ok
// SIG undefined FUN_148bab9e8(void)

longlong FUN_148bab9e8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b48;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148baba18 FUN_148baba18 body=48 status=ok
// SIG undefined FUN_148baba18(void)

longlong FUN_148baba18(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b50;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148baba48 FUN_148baba48 body=48 status=ok
// SIG undefined FUN_148baba48(void)

longlong FUN_148baba48(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b58;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148baba78 FUN_148baba78 body=48 status=ok
// SIG undefined FUN_148baba78(void)

longlong FUN_148baba78(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b60;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bababc FUN_148bababc body=48 status=ok
// SIG undefined FUN_148bababc(void)

longlong FUN_148bababc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b98;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148babb02 FUN_148babb02 body=48 status=ok
// SIG undefined FUN_148babb02(void)

longlong FUN_148babb02(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3ba0;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148babb3a FUN_148babb3a body=48 status=ok
// SIG undefined FUN_148babb3a(void)

longlong FUN_148babb3a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3ba8;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148babb72 FUN_148babb72 body=48 status=ok
// SIG undefined FUN_148babb72(void)

longlong FUN_148babb72(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3bb0;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148babbaa FUN_148babbaa body=48 status=ok
// SIG undefined FUN_148babbaa(void)

longlong FUN_148babbaa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3bb8;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148babbf2 FUN_148babbf2 body=48 status=ok
// SIG undefined FUN_148babbf2(void)

longlong FUN_148babbf2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3bc0;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148babc2a FUN_148babc2a body=48 status=ok
// SIG undefined FUN_148babc2a(void)

longlong FUN_148babc2a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3bc8;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148babc6a FUN_148babc6a body=48 status=ok
// SIG undefined FUN_148babc6a(void)

longlong FUN_148babc6a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3be0;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148babca2 FUN_148babca2 body=48 status=ok
// SIG undefined FUN_148babca2(void)

longlong FUN_148babca2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3be8;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148babcda FUN_148babcda body=48 status=ok
// SIG undefined FUN_148babcda(void)

longlong FUN_148babcda(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3bf0;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148babd12 FUN_148babd12 body=48 status=ok
// SIG undefined FUN_148babd12(void)

longlong FUN_148babd12(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3bf8;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148babd4a FUN_148babd4a body=48 status=ok
// SIG undefined FUN_148babd4a(void)

longlong FUN_148babd4a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c00;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148babd8a FUN_148babd8a body=48 status=ok
// SIG undefined FUN_148babd8a(void)

longlong FUN_148babd8a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c08;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148babdc2 FUN_148babdc2 body=48 status=ok
// SIG undefined FUN_148babdc2(void)

longlong FUN_148babdc2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c10;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148babdfa FUN_148babdfa body=48 status=ok
// SIG undefined FUN_148babdfa(void)

longlong FUN_148babdfa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c18;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148babe32 FUN_148babe32 body=48 status=ok
// SIG undefined FUN_148babe32(void)

longlong FUN_148babe32(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c20;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148babe6a FUN_148babe6a body=48 status=ok
// SIG undefined FUN_148babe6a(void)

longlong FUN_148babe6a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c28;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148babea2 FUN_148babea2 body=48 status=ok
// SIG undefined FUN_148babea2(void)

longlong FUN_148babea2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c30;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148babed2 FUN_148babed2 body=48 status=ok
// SIG undefined FUN_148babed2(void)

longlong FUN_148babed2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c38;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148babf0a FUN_148babf0a body=48 status=ok
// SIG undefined FUN_148babf0a(void)

longlong FUN_148babf0a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c40;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148babf3a FUN_148babf3a body=48 status=ok
// SIG undefined FUN_148babf3a(void)

longlong FUN_148babf3a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c48;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148babf6a FUN_148babf6a body=48 status=ok
// SIG undefined FUN_148babf6a(void)

longlong FUN_148babf6a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c50;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148babf9c FUN_148babf9c body=48 status=ok
// SIG undefined FUN_148babf9c(void)

longlong FUN_148babf9c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c58;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148babfd4 FUN_148babfd4 body=48 status=ok
// SIG undefined FUN_148babfd4(void)

longlong FUN_148babfd4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c60;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bac006 FUN_148bac006 body=48 status=ok
// SIG undefined FUN_148bac006(void)

longlong FUN_148bac006(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c68;
  FUN_1461a6e7c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bac03e FUN_148bac03e body=48 status=ok
// SIG undefined FUN_148bac03e(void)

longlong FUN_148bac03e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bac076 FUN_148bac076 body=48 status=ok
// SIG undefined FUN_148bac076(void)

longlong FUN_148bac076(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bac0a6 FUN_148bac0a6 body=48 status=ok
// SIG undefined FUN_148bac0a6(void)

longlong FUN_148bac0a6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bac0d6 FUN_148bac0d6 body=48 status=ok
// SIG undefined FUN_148bac0d6(void)

longlong FUN_148bac0d6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bac10e FUN_148bac10e body=48 status=ok
// SIG undefined FUN_148bac10e(void)

longlong FUN_148bac10e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bac13e FUN_148bac13e body=48 status=ok
// SIG undefined FUN_148bac13e(void)

longlong FUN_148bac13e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c8;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bac176 FUN_148bac176 body=48 status=ok
// SIG undefined FUN_148bac176(void)

longlong FUN_148bac176(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d0;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bac1ae FUN_148bac1ae body=48 status=ok
// SIG undefined FUN_148bac1ae(void)

longlong FUN_148bac1ae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d8;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bac1de FUN_148bac1de body=48 status=ok
// SIG undefined FUN_148bac1de(void)

longlong FUN_148bac1de(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3e0;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bac20e FUN_148bac20e body=48 status=ok
// SIG undefined FUN_148bac20e(void)

longlong FUN_148bac20e(longlong param_1,int param_2)

{
  param_1 = param_1 + -1000;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bac23e FUN_148bac23e body=48 status=ok
// SIG undefined FUN_148bac23e(void)

longlong FUN_148bac23e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f0;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


