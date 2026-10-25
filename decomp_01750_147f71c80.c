// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147f71c80 FUN_147f71c80 body=60 status=ok
// SIG undefined FUN_147f71c80(void)

undefined8 * FUN_147f71c80(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14acabc20;
  FUN_147f6f94a(param_1 + 0xb);
  FUN_140f9d4d6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f71cbc FUN_147f71cbc body=55 status=ok
// SIG undefined FUN_147f71cbc(void)

void FUN_147f71cbc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb251d8 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb251d8 = FUN_140002ddd(FUN_146445fa7,uVar1,L"GbxAudioGraphState_Merge");
  }
  return;
}



// FUNCTION 147f71dea FUN_147f71dea body=94 status=ok
// SIG undefined FUN_147f71dea(void)

undefined8 FUN_147f71dea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      uVar8 = *(undefined8 *)(param_3 + 0x18);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 0x18) = uVar8;
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f71e70 FUN_147f71e70 body=59 status=ok
// SIG undefined FUN_147f71e70(void)

undefined8 FUN_147f71e70(longlong *param_1)

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



// FUNCTION 147f71eb6 FUN_147f71eb6 body=32 status=ok
// SIG undefined FUN_147f71eb6(void)

void FUN_147f71eb6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147f71f24 FUN_147f71f24 body=38 status=ok
// SIG undefined FUN_147f71f24(void)

undefined8 FUN_147f71f24(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f71f4a FUN_147f71f4a body=55 status=ok
// SIG undefined FUN_147f71f4a(void)

void FUN_147f71f4a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb251f0 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb251f0 = FUN_140002ddd(FUN_14644603d,uVar1,L"GbxAudioGraphSettings_Metro");
  }
  return;
}



// FUNCTION 147f71f92 FUN_147f71f92 body=136 status=ok
// SIG undefined FUN_147f71f92(void)

void FUN_147f71f92(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 7,0,600);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[0x2c] = 0x800000000;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  *param_2 = &PTR_FUN_14acadd40;
  param_2[0x52] = 0;
  param_2[0x53] = 0x800000000;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x54] = 0;
  param_2[0x55] = 0;
  return;
}



// FUNCTION 147f720b6 FUN_147f720b6 body=113 status=ok
// SIG undefined FUN_147f720b6(void)

undefined8 FUN_147f720b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f6f99c(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x17c);
    uVar2 = *(undefined4 *)(param_3 + 0x180);
    uVar3 = *(undefined4 *)(param_3 + 0x184);
    *(undefined4 *)(param_2 + 0x178) = *(undefined4 *)(param_3 + 0x178);
    *(undefined4 *)(param_2 + 0x17c) = uVar1;
    *(undefined4 *)(param_2 + 0x180) = uVar2;
    *(undefined4 *)(param_2 + 0x184) = uVar3;
    *(undefined8 *)(param_2 + 0x188) = *(undefined8 *)(param_3 + 0x188);
    FUN_147f6f9f8(param_2 + 400,param_3 + 400);
    param_2 = param_2 + 0x2b0;
    param_3 = param_3 + 0x2b0;
  }
  return 1;
}



// FUNCTION 147f72150 FUN_147f72150 body=59 status=ok
// SIG undefined FUN_147f72150(void)

undefined8 FUN_147f72150(longlong *param_1)

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



// FUNCTION 147f721f2 FUN_147f721f2 body=82 status=ok
// SIG undefined FUN_147f721f2(void)

undefined8 * FUN_147f721f2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14acadd40;
  FUN_147f6f94a(param_1 + 0x32);
  *param_1 = &PTR_FUN_14acabc20;
  FUN_147f6f94a(param_1 + 0xb);
  FUN_140f9d4d6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f72244 FUN_147f72244 body=55 status=ok
// SIG undefined FUN_147f72244(void)

void FUN_147f72244(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25208 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25208 = FUN_140002ddd(FUN_1464460d3,uVar1,L"GbxAudioGraphState_Metro");
  }
  return;
}



// FUNCTION 147f7227c FUN_147f7227c body=81 status=ok
// SIG undefined FUN_147f7227c(void)

void FUN_147f7227c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x56) == '\x01') {
    *param_1 = &PTR_FUN_14acadd40;
    FUN_147f6f94a(param_1 + 0x32);
    *param_1 = &PTR_FUN_14acabc20;
    FUN_147f6f94a(param_1 + 0xb);
    FUN_140f9d4d6(param_1);
    *(undefined1 *)(param_1 + 0x56) = 0;
  }
  return;
}



// FUNCTION 147f7238a FUN_147f7238a body=99 status=ok
// SIG undefined FUN_147f7238a(void)

undefined8 FUN_147f7238a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
      *(undefined2 *)(param_2 + 0x20) = *(undefined2 *)(param_3 + 0x20);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f72416 FUN_147f72416 body=59 status=ok
// SIG undefined FUN_147f72416(void)

undefined8 FUN_147f72416(longlong *param_1)

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



// FUNCTION 147f7245c FUN_147f7245c body=56 status=ok
// SIG undefined FUN_147f7245c(void)

void FUN_147f7245c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_2 = &PTR_FUN_14acadf70;
    if (param_2[7] != 0) {
      FUN_1400020a8();
    }
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 147f724e2 FUN_147f724e2 body=65 status=ok
// SIG undefined FUN_147f724e2(void)

undefined8 * FUN_147f724e2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14acadf70;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f72524 FUN_147f72524 body=55 status=ok
// SIG undefined FUN_147f72524(void)

void FUN_147f72524(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25220 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25220 = FUN_140002ddd(FUN_146446169,uVar1,L"GbxAudioGraphSettings_Subdivide");
  }
  return;
}



// FUNCTION 147f7255c FUN_147f7255c body=191 status=ok
// SIG undefined FUN_147f7255c(void)

void FUN_147f7255c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 7,0,0x1f0);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 2;
  param_2[0x2c] = 0x800000000;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  *param_2 = &PTR_FUN_14acae1b0;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  *(undefined4 *)(param_2 + 0x31) = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  *(undefined4 *)(param_2 + 0x37) = 0;
  *(undefined4 *)(param_2 + 0x3a) = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  *(undefined2 *)(param_2 + 0x41) = 0xffff;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  *(undefined1 *)(param_2 + 0x44) = 0;
  return;
}



// FUNCTION 147f726f8 FUN_147f726f8 body=120 status=ok
// SIG undefined FUN_147f726f8(void)

undefined1 FUN_147f726f8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f6f99c(param_2,param_3);
    FUN_147f6dfb2(param_2 + 0x178,param_3 + 0x178);
    FUN_147f6e046(param_2 + 0x210,param_3 + 0x210);
    *(undefined1 *)(param_2 + 0x220) = *(undefined1 *)(param_3 + 0x220);
    param_2 = param_2 + 0x228;
    param_3 = param_3 + 0x228;
  }
  return 1;
}



// FUNCTION 147f72798 FUN_147f72798 body=59 status=ok
// SIG undefined FUN_147f72798(void)

undefined8 FUN_147f72798(longlong *param_1)

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



// FUNCTION 147f727e4 FUN_147f727e4 body=40 status=ok
// SIG undefined FUN_147f727e4(void)

void FUN_147f727e4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x228) == '\x01') {
    FUN_147f728b8(param_2);
    *(undefined1 *)(param_2 + 0x228) = 0;
  }
  return;
}



// FUNCTION 147f7285a FUN_147f7285a body=38 status=ok
// SIG undefined FUN_147f7285a(void)

undefined8 FUN_147f7285a(undefined8 param_1,int param_2)

{
  FUN_147f728b8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f72880 FUN_147f72880 body=55 status=ok
// SIG undefined FUN_147f72880(void)

void FUN_147f72880(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25238 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25238 = FUN_140002ddd(FUN_1464461ff,uVar1,L"GbxAudioGraphState_Subdivide");
  }
  return;
}



// FUNCTION 147f728b8 FUN_147f728b8 body=79 status=ok
// SIG undefined FUN_147f728b8(void)

void FUN_147f728b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14acae1b0;
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  FUN_141818bfa(param_1 + 0x2f);
  *param_1 = &PTR_FUN_14acabc20;
  FUN_147f6f94a(param_1 + 0xb);
  FUN_140f9d4d6(param_1);
  return;
}



// FUNCTION 147f729aa FUN_147f729aa body=78 status=ok
// SIG undefined FUN_147f729aa(void)

undefined1 FUN_147f729aa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f72a20 FUN_147f72a20 body=59 status=ok
// SIG undefined FUN_147f72a20(void)

undefined8 FUN_147f72a20(longlong *param_1)

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



// FUNCTION 147f72a66 FUN_147f72a66 body=32 status=ok
// SIG undefined FUN_147f72a66(void)

void FUN_147f72a66(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 147f72ad4 FUN_147f72ad4 body=38 status=ok
// SIG undefined FUN_147f72ad4(void)

undefined8 FUN_147f72ad4(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f72afa FUN_147f72afa body=55 status=ok
// SIG undefined FUN_147f72afa(void)

void FUN_147f72afa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25250 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25250 = FUN_140002ddd(FUN_146446295,uVar1,L"GbxAudioGraphSettings_Trickle");
  }
  return;
}



// FUNCTION 147f72b42 FUN_147f72b42 body=109 status=ok
// SIG undefined FUN_147f72b42(void)

void FUN_147f72b42(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 7,0,0x120);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 2;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0x800000000;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  *param_2 = &PTR_FUN_14acae620;
  return;
}



// FUNCTION 147f72c28 FUN_147f72c28 body=63 status=ok
// SIG undefined FUN_147f72c28(void)

undefined1 FUN_147f72c28(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f6f99c(param_2,param_3);
    param_3 = param_3 + 0x178;
    param_2 = param_2 + 0x178;
  }
  return 1;
}



// FUNCTION 147f72c90 FUN_147f72c90 body=59 status=ok
// SIG undefined FUN_147f72c90(void)

undefined8 FUN_147f72c90(longlong *param_1)

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



// FUNCTION 147f72cdc FUN_147f72cdc body=59 status=ok
// SIG undefined FUN_147f72cdc(void)

void FUN_147f72cdc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x2f) == '\x01') {
    *param_2 = &PTR_FUN_14acabc20;
    FUN_147f6f94a(param_2 + 0xb);
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x2f) = 0;
  }
  return;
}



// FUNCTION 147f72d66 FUN_147f72d66 body=60 status=ok
// SIG undefined FUN_147f72d66(void)

undefined8 * FUN_147f72d66(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14acabc20;
  FUN_147f6f94a(param_1 + 0xb);
  FUN_140f9d4d6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f72da2 FUN_147f72da2 body=55 status=ok
// SIG undefined FUN_147f72da2(void)

void FUN_147f72da2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25268 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25268 = FUN_140002ddd(FUN_14644632b,uVar1,L"GbxAudioGraphState_Trickle");
  }
  return;
}



// FUNCTION 147f72e84 FUN_147f72e84 body=91 status=ok
// SIG undefined FUN_147f72e84(void)

undefined1 FUN_147f72e84(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f72f08 FUN_147f72f08 body=59 status=ok
// SIG undefined FUN_147f72f08(void)

undefined8 FUN_147f72f08(longlong *param_1)

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



// FUNCTION 147f72f4e FUN_147f72f4e body=56 status=ok
// SIG undefined FUN_147f72f4e(void)

void FUN_147f72f4e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 9) == '\x01') {
    *param_2 = &PTR_FUN_14acae850;
    if (param_2[7] != 0) {
      FUN_1400020a8();
    }
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 9) = 0;
  }
  return;
}



// FUNCTION 147f72fd4 FUN_147f72fd4 body=65 status=ok
// SIG undefined FUN_147f72fd4(void)

undefined8 * FUN_147f72fd4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14acae850;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f73016 FUN_147f73016 body=55 status=ok
// SIG undefined FUN_147f73016(void)

void FUN_147f73016(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25280 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25280 = FUN_140002ddd(FUN_1464463c1,uVar1,L"GbxAudioGraphSettings_Filter");
  }
  return;
}



// FUNCTION 147f73052 FUN_147f73052 body=191 status=ok
// SIG undefined FUN_147f73052(void)

void FUN_147f73052(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 7,0,0x1f0);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 2;
  param_2[0x2c] = 0x800000000;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  *param_2 = &PTR_FUN_14acaea90;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  *(undefined4 *)(param_2 + 0x31) = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  *(undefined4 *)(param_2 + 0x37) = 0;
  *(undefined4 *)(param_2 + 0x3a) = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  *(undefined2 *)(param_2 + 0x41) = 0xffff;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  *(undefined1 *)(param_2 + 0x44) = 0;
  return;
}



// FUNCTION 147f731ee FUN_147f731ee body=120 status=ok
// SIG undefined FUN_147f731ee(void)

undefined1 FUN_147f731ee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f6f99c(param_2,param_3);
    FUN_147f6dfb2(param_2 + 0x178,param_3 + 0x178);
    FUN_147f6e046(param_2 + 0x210,param_3 + 0x210);
    *(undefined1 *)(param_2 + 0x220) = *(undefined1 *)(param_3 + 0x220);
    param_2 = param_2 + 0x228;
    param_3 = param_3 + 0x228;
  }
  return 1;
}



// FUNCTION 147f7328e FUN_147f7328e body=59 status=ok
// SIG undefined FUN_147f7328e(void)

undefined8 FUN_147f7328e(longlong *param_1)

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



// FUNCTION 147f732da FUN_147f732da body=40 status=ok
// SIG undefined FUN_147f732da(void)

void FUN_147f732da(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x228) == '\x01') {
    FUN_147f733ae(param_2);
    *(undefined1 *)(param_2 + 0x228) = 0;
  }
  return;
}



// FUNCTION 147f73350 FUN_147f73350 body=38 status=ok
// SIG undefined FUN_147f73350(void)

undefined8 FUN_147f73350(undefined8 param_1,int param_2)

{
  FUN_147f733ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f73376 FUN_147f73376 body=55 status=ok
// SIG undefined FUN_147f73376(void)

void FUN_147f73376(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25298 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25298 = FUN_140002ddd(FUN_146446457,uVar1,L"GbxAudioGraphState_Filter");
  }
  return;
}



// FUNCTION 147f733ae FUN_147f733ae body=79 status=ok
// SIG undefined FUN_147f733ae(void)

void FUN_147f733ae(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14acaea90;
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  FUN_141818bfa(param_1 + 0x2f);
  *param_1 = &PTR_FUN_14acabc20;
  FUN_147f6f94a(param_1 + 0xb);
  FUN_140f9d4d6(param_1);
  return;
}



// FUNCTION 147f7349e FUN_147f7349e body=54 status=ok
// SIG undefined FUN_147f7349e(void)

undefined1 FUN_147f7349e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f7360e(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 147f734fc FUN_147f734fc body=59 status=ok
// SIG undefined FUN_147f734fc(void)

undefined8 FUN_147f734fc(longlong *param_1)

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



// FUNCTION 147f73542 FUN_147f73542 body=32 status=ok
// SIG undefined FUN_147f73542(void)

void FUN_147f73542(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147f735b0 FUN_147f735b0 body=38 status=ok
// SIG undefined FUN_147f735b0(void)

undefined8 FUN_147f735b0(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f735d6 FUN_147f735d6 body=55 status=ok
// SIG undefined FUN_147f735d6(void)

void FUN_147f735d6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb252b0 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb252b0 = FUN_140002ddd(FUN_1464464ed,uVar1,L"GbxAudioGraphSettings_SubGraph");
  }
  return;
}



// FUNCTION 147f7360e FUN_147f7360e body=86 status=ok
// SIG undefined FUN_147f7360e(void)

longlong FUN_147f7360e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
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
  lVar8 = *(longlong *)(param_2 + 0x38);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = *(longlong *)(param_2 + 0x38);
    }
  }
  *(longlong *)(param_1 + 0x38) = lVar8;
  return param_1;
}



// FUNCTION 147f73666 FUN_147f73666 body=133 status=ok
// SIG undefined FUN_147f73666(void)

void FUN_147f73666(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 7,0,0x120);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 2;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0x800000000;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  *param_2 = &PTR_FUN_14acaef10;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0xbff0000000000000;
  return;
}



// FUNCTION 147f7377c FUN_147f7377c body=63 status=ok
// SIG undefined FUN_147f7377c(void)

undefined1 FUN_147f7377c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f73962(param_2,param_3);
    param_3 = param_3 + 400;
    param_2 = param_2 + 400;
  }
  return 1;
}



// FUNCTION 147f737e4 FUN_147f737e4 body=59 status=ok
// SIG undefined FUN_147f737e4(void)

undefined8 FUN_147f737e4(longlong *param_1)

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



// FUNCTION 147f73830 FUN_147f73830 body=40 status=ok
// SIG undefined FUN_147f73830(void)

void FUN_147f73830(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 400) == '\x01') {
    FUN_147f73904(param_2);
    *(undefined1 *)(param_2 + 400) = 0;
  }
  return;
}



// FUNCTION 147f738a6 FUN_147f738a6 body=38 status=ok
// SIG undefined FUN_147f738a6(void)

undefined8 FUN_147f738a6(undefined8 param_1,int param_2)

{
  FUN_147f73904();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f738cc FUN_147f738cc body=55 status=ok
// SIG undefined FUN_147f738cc(void)

void FUN_147f738cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb252c8 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb252c8 = FUN_140002ddd(FUN_146446583,uVar1,L"GbxAudioGraphState_SubGraph");
  }
  return;
}



// FUNCTION 147f73904 FUN_147f73904 body=93 status=ok
// SIG undefined FUN_147f73904(void)

void FUN_147f73904(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14acaef10;
  plVar3 = (longlong *)param_1[0x30];
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
  *param_1 = &PTR_FUN_14acabc20;
  FUN_147f6f94a(param_1 + 0xb);
  FUN_140f9d4d6(param_1);
  return;
}



// FUNCTION 147f73962 FUN_147f73962 body=123 status=ok
// SIG undefined FUN_147f73962(void)

longlong FUN_147f73962(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_147f6f99c();
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
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_2 + 0x188);
  return param_1;
}



// FUNCTION 147f73a2e FUN_147f73a2e body=59 status=ok
// SIG undefined FUN_147f73a2e(void)

undefined8 FUN_147f73a2e(longlong *param_1)

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



// FUNCTION 147f73b5a FUN_147f73b5a body=63 status=ok
// SIG undefined FUN_147f73b5a(void)

undefined1 FUN_147f73b5a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f73c82(param_2,param_3);
    param_3 = param_3 + 0x100;
    param_2 = param_2 + 0x100;
  }
  return 1;
}



// FUNCTION 147f73bc2 FUN_147f73bc2 body=59 status=ok
// SIG undefined FUN_147f73bc2(void)

undefined8 FUN_147f73bc2(longlong *param_1)

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



// FUNCTION 147f73c0e FUN_147f73c0e body=38 status=ok
// SIG undefined FUN_147f73c0e(void)

void FUN_147f73c0e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x100) == '\x01') {
    FUN_14061077e(param_2);
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 147f73c82 FUN_147f73c82 body=105 status=ok
// SIG undefined FUN_147f73c82(void)

longlong FUN_147f73c82(longlong param_1,longlong param_2)

{
  FUN_14123c256();
  FUN_14150acc4(param_1 + 0x18,param_2 + 0x18);
  FUN_1406fa324(param_1 + 0x30,param_2 + 0x30);
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  FUN_140c41132(param_1 + 0x48,param_2 + 0x48);
  FUN_1438a2406(param_1 + 0xa8,param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  return param_1;
}



// FUNCTION 147f73d36 FUN_147f73d36 body=59 status=ok
// SIG undefined FUN_147f73d36(void)

undefined8 FUN_147f73d36(longlong *param_1)

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



// FUNCTION 147f73d7c FUN_147f73d7c body=45 status=ok
// SIG undefined FUN_147f73d7c(void)

void FUN_147f73d7c(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(char *)(param_2 + 0x20) == '\x01') {
    plVar2 = *(longlong **)(param_2 + 8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 147f73e7e FUN_147f73e7e body=161 status=ok
// SIG undefined FUN_147f73e7e(void)

undefined8 FUN_147f73e7e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  void *_Src;
  void *_Dst;
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      _Src = (void *)(param_3 + lVar1);
      _Dst = (void *)(param_2 + lVar1);
      memcpy(_Dst,_Src,0x92);
      FUN_140d273b0((longlong)_Dst + 0x98,(longlong)_Src + 0x98);
      *(undefined1 *)(param_2 + 0xa8 + lVar1) = *(undefined1 *)(param_3 + 0xa8 + lVar1);
      FUN_140d27362((longlong)_Dst + 0xb0,(longlong)_Src + 0xb0);
      *(undefined1 *)(param_2 + 0xb8 + lVar1) = *(undefined1 *)(param_3 + 0xb8 + lVar1);
      lVar1 = lVar1 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f73f48 FUN_147f73f48 body=59 status=ok
// SIG undefined FUN_147f73f48(void)

undefined8 FUN_147f73f48(longlong *param_1)

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



// FUNCTION 147f73f94 FUN_147f73f94 body=59 status=ok
// SIG undefined FUN_147f73f94(void)

void FUN_147f73f94(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_144a61ac8(param_2 + 0xb0);
    if (*(longlong *)(param_2 + 0x98) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 147f740e4 FUN_147f740e4 body=59 status=ok
// SIG undefined FUN_147f740e4(void)

undefined8 FUN_147f740e4(longlong *param_1)

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



// FUNCTION 147f7412a FUN_147f7412a body=45 status=ok
// SIG undefined FUN_147f7412a(void)

void FUN_147f7412a(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(char *)(param_2 + 0x40) == '\x01') {
    plVar2 = *(longlong **)(param_2 + 0x10);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147f741a6 FUN_147f741a6 body=54 status=ok
// SIG undefined FUN_147f741a6(void)

longlong FUN_147f741a6(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
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



// FUNCTION 147f741dc FUN_147f741dc body=55 status=ok
// SIG undefined FUN_147f741dc(void)

void FUN_147f741dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25370 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25370 = FUN_140002ddd(FUN_1464468cb,uVar1,L"GbxAudioProviderBase");
  }
  return;
}



// FUNCTION 147f74246 FUN_147f74246 body=63 status=ok
// SIG undefined FUN_147f74246(void)

undefined1 FUN_147f74246(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f74370(param_2,param_3);
    param_3 = param_3 + 0x300;
    param_2 = param_2 + 0x300;
  }
  return 1;
}



// FUNCTION 147f742ae FUN_147f742ae body=59 status=ok
// SIG undefined FUN_147f742ae(void)

undefined8 FUN_147f742ae(longlong *param_1)

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



// FUNCTION 147f742fa FUN_147f742fa body=38 status=ok
// SIG undefined FUN_147f742fa(void)

void FUN_147f742fa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x300) == '\x01') {
    FUN_14060fc84(param_2);
    *(undefined1 *)(param_2 + 0x300) = 0;
  }
  return;
}



// FUNCTION 147f74370 FUN_147f74370 body=383 status=ok
// SIG undefined FUN_147f74370(void)

longlong FUN_147f74370(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x35) = *(undefined8 *)(param_2 + 0x35);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  if ((*(longlong *)(param_1 + 0x40) != *(longlong *)(param_2 + 0x40)) ||
     (*(int *)(param_1 + 0x48) != *(int *)(param_2 + 0x48))) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_2 + 0x40);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  memcpy((void *)(param_1 + 0x60),(void *)(param_2 + 0x60),0x92);
  FUN_140d273b0(param_1 + 0xf8,param_2 + 0xf8);
  *(undefined1 *)(param_1 + 0x108) = *(undefined1 *)(param_2 + 0x108);
  FUN_140d27362(param_1 + 0x110,param_2 + 0x110);
  *(undefined1 *)(param_1 + 0x118) = *(undefined1 *)(param_2 + 0x118);
  FUN_147f744f0(param_1 + 0x120,param_2 + 0x120);
  FUN_147f7454e(param_1 + 0x130,param_2 + 0x130);
  FUN_147f74778(param_1 + 0x140,param_2 + 0x140);
  FUN_147f744f0(param_1 + 400,param_2 + 400);
  FUN_147f744f0(param_1 + 0x1a0,param_2 + 0x1a0);
  FUN_147f74988(param_1 + 0x1b0,param_2 + 0x1b0);
  FUN_14065c844(param_1 + 0x200,param_2 + 0x200);
  FUN_14065c7f4(param_1 + 0x210,param_2 + 0x210);
  FUN_147f745ac(param_1 + 0x220,param_2 + 0x220);
  FUN_147f74b56(param_1 + 0x230,param_2 + 0x230);
  FUN_147f74cb6(param_1 + 0x280,param_2 + 0x280);
  FUN_141818ba6(param_1 + 0x2d0,param_2 + 0x2d0);
  FUN_141818ba6(param_1 + 0x2e8,param_2 + 0x2e8);
  return param_1;
}



// FUNCTION 147f744f0 FUN_147f744f0 body=93 status=ok
// SIG undefined FUN_147f744f0(void)

undefined8 * FUN_147f744f0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14060ffbf(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147f7460a(param_1,iVar1);
      FUN_147f7467d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147f7454e FUN_147f7454e body=93 status=ok
// SIG undefined FUN_147f7454e(void)

undefined8 * FUN_147f7454e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1406100df(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147f746ba(param_1,iVar1);
      FUN_147f7471c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147f745ac FUN_147f745ac body=93 status=ok
// SIG undefined FUN_147f745ac(void)

undefined8 * FUN_147f745ac(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14060ff25(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147f74af4(param_1,iVar1);
      FUN_1412e9105(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147f7460a FUN_147f7460a body=115 status=ok
// SIG undefined FUN_147f7460a(void)

void FUN_147f7460a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc0,0x10);
    iVar2 = (int)(uVar1 / 0xc0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc0,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147f7467d FUN_147f7467d body=60 status=ok
// SIG undefined FUN_147f7467d(void)

void FUN_147f7467d(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_141818e8a(param_1,param_2);
    param_1 = param_1 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return;
}



// FUNCTION 147f746ba FUN_147f746ba body=98 status=ok
// SIG undefined FUN_147f746ba(void)

void FUN_147f746ba(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147f7471c FUN_147f7471c body=92 status=ok
// SIG undefined FUN_147f7471c(void)

void FUN_147f7471c(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14cb26569;
    do {
      *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
      lVar1 = *(longlong *)(param_2 + 8 + lVar3);
      *(longlong *)(param_1 + 8 + lVar3) = lVar1;
      if ((lVar1 != 0) && ((bVar2 & 1) != 0)) {
        FUN_14036e5a4(*(undefined8 *)(lVar1 + 0x50));
        bVar2 = DAT_14cb26569;
      }
      lVar3 = lVar3 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147f74778 FUN_147f74778 body=122 status=ok
// SIG undefined FUN_147f74778(void)

longlong FUN_147f74778(longlong param_1,longlong param_2)

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
    FUN_147f747f2(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147f747f2 FUN_147f747f2 body=296 status=ok
// SIG undefined FUN_147f747f2(void)

longlong * FUN_147f747f2(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  if (param_1 != param_2) {
    uVar3 = *(uint *)(param_2 + 1);
    FUN_1406103b4(param_1,(ulonglong)uVar3);
    lVar8 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar8 + uVar3;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar8) < uVar3) {
      FUN_1406cd6a8(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar3) {
      lVar8 = *param_1;
      lVar4 = *param_2;
      lVar11 = 0;
      uVar10 = 0;
      do {
        plVar9 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar9 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar9 + (uVar10 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar10 & 0x1f) &
            1) == 0) {
          *(undefined4 *)(lVar8 + lVar11) = *(undefined4 *)(lVar4 + lVar11);
          *(undefined4 *)(lVar8 + 4 + lVar11) = *(undefined4 *)(lVar4 + 4 + lVar11);
        }
        else {
          puVar1 = (undefined4 *)(lVar11 + lVar8);
          puVar2 = (undefined4 *)(lVar4 + lVar11);
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          *puVar1 = *puVar2;
          puVar1[1] = uVar5;
          puVar1[2] = uVar6;
          puVar1[3] = uVar7;
          FUN_147f7491a(lVar8 + 0x10 + lVar11,lVar4 + 0x10 + lVar11);
          *(undefined8 *)(puVar1 + 0xe) = *(undefined8 *)(puVar2 + 0xe);
        }
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0x40;
      } while (uVar3 != uVar10);
    }
  }
  return param_1;
}



// FUNCTION 147f7491a FUN_147f7491a body=110 status=ok
// SIG undefined FUN_147f7491a(void)

longlong * FUN_147f7491a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x108) = *(int *)(lVar1 + 0x108) + 1;
  }
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_14036e5a4(*(undefined8 *)(lVar1 + 0x50));
  }
  param_1[2] = 0;
  param_1[3] = -1;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  return param_1;
}



// FUNCTION 147f74988 FUN_147f74988 body=122 status=ok
// SIG undefined FUN_147f74988(void)

longlong FUN_147f74988(longlong param_1,longlong param_2)

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
    FUN_147f74a02(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147f74a02 FUN_147f74a02 body=242 status=ok
// SIG undefined FUN_147f74a02(void)

longlong * FUN_147f74a02(longlong *param_1,longlong *param_2)

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
    FUN_1406101a0(param_1,(ulonglong)uVar1);
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
          *(undefined8 *)(lVar4 + lVar7) = *(undefined8 *)(lVar2 + lVar7);
          lVar3 = *(longlong *)(lVar2 + 8 + lVar7);
          *(longlong *)(lVar4 + 8 + lVar7) = lVar3;
          if ((lVar3 != 0) && ((DAT_14cb26569 & 1) != 0)) {
            FUN_14036e5a4(*(undefined8 *)(lVar3 + 0x50));
          }
          *(undefined8 *)(lVar4 + 0x10 + lVar7) = *(undefined8 *)(lVar2 + 0x10 + lVar7);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x18;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 147f74af4 FUN_147f74af4 body=98 status=ok
// SIG undefined FUN_147f74af4(void)

void FUN_147f74af4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147f74b56 FUN_147f74b56 body=122 status=ok
// SIG undefined FUN_147f74b56(void)

longlong FUN_147f74b56(longlong param_1,longlong param_2)

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
    FUN_147f74bd0(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147f74bd0 FUN_147f74bd0 body=229 status=ok
// SIG undefined FUN_147f74bd0(void)

longlong * FUN_147f74bd0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14061058e(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar5 = 0;
      uVar6 = 0;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar5) = *(undefined4 *)(lVar2 + lVar5);
          *(undefined4 *)(lVar4 + 4 + lVar5) = *(undefined4 *)(lVar2 + 4 + lVar5);
        }
        else {
          *(undefined8 *)(lVar4 + lVar5) = *(undefined8 *)(lVar2 + lVar5);
          *(undefined8 *)(lVar4 + 8 + lVar5) = *(undefined8 *)(lVar2 + 8 + lVar5);
          lVar3 = *(longlong *)(lVar2 + 0x10 + lVar5);
          *(longlong *)(lVar4 + 0x10 + lVar5) = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
            UNLOCK();
          }
          *(undefined8 *)(lVar4 + 0x18 + lVar5) = *(undefined8 *)(lVar2 + 0x18 + lVar5);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x20;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 147f74cb6 FUN_147f74cb6 body=122 status=ok
// SIG undefined FUN_147f74cb6(void)

longlong FUN_147f74cb6(longlong param_1,longlong param_2)

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
    FUN_147f74d30(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147f74d30 FUN_147f74d30 body=257 status=ok
// SIG undefined FUN_147f74d30(void)

longlong * FUN_147f74d30(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140610124(param_1,(ulonglong)uVar1);
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
          FUN_141818f7a(lVar5 + lVar3 + 8,lVar2 + 8 + lVar5);
          *(undefined8 *)(lVar3 + 0x20 + lVar5) = *(undefined8 *)(lVar2 + 0x20 + lVar5);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x28;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 147f74eb6 FUN_147f74eb6 body=99 status=ok
// SIG undefined FUN_147f74eb6(void)

undefined8 FUN_147f74eb6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
    do {
      *(undefined8 *)(param_2 + -0x1b) = *(undefined8 *)(param_3 + -0x1b);
      uVar1 = *(undefined4 *)(param_3 + -0x38);
      uVar2 = *(undefined4 *)(param_3 + -0x34);
      uVar3 = *(undefined4 *)(param_3 + -0x30);
      uVar4 = *(undefined4 *)(param_3 + -0x2c);
      uVar5 = *(undefined4 *)(param_3 + -0x24);
      uVar6 = *(undefined4 *)(param_3 + -0x20);
      uVar7 = *(undefined4 *)(param_3 + -0x1c);
      *(undefined4 *)(param_2 + -0x28) = *(undefined4 *)(param_3 + -0x28);
      *(undefined4 *)(param_2 + -0x24) = uVar5;
      *(undefined4 *)(param_2 + -0x20) = uVar6;
      *(undefined4 *)(param_2 + -0x1c) = uVar7;
      *(undefined4 *)(param_2 + -0x38) = uVar1;
      *(undefined4 *)(param_2 + -0x34) = uVar2;
      *(undefined4 *)(param_2 + -0x30) = uVar3;
      *(undefined4 *)(param_2 + -0x2c) = uVar4;
      FUN_147f75056(param_2 + -0x10,param_3 + -0x10);
      FUN_147f750b4(param_2,param_3);
      param_3 = param_3 + 0x60;
      param_2 = param_2 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f74f42 FUN_147f74f42 body=59 status=ok
// SIG undefined FUN_147f74f42(void)

undefined8 FUN_147f74f42(longlong *param_1)

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



// FUNCTION 147f74f88 FUN_147f74f88 body=34 status=ok
// SIG undefined FUN_147f74f88(void)

void FUN_147f74f88(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_145854b84(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 147f74ff8 FUN_147f74ff8 body=38 status=ok
// SIG undefined FUN_147f74ff8(void)

undefined8 FUN_147f74ff8(undefined8 param_1,int param_2)

{
  FUN_145854b84();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f7501e FUN_147f7501e body=55 status=ok
// SIG undefined FUN_147f7501e(void)

void FUN_147f7501e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb253a0 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb253a0 = FUN_140002ddd(FUN_1464469c3,uVar1,L"GbxWorldAudioProvider");
  }
  return;
}



// FUNCTION 147f75056 FUN_147f75056 body=93 status=ok
// SIG undefined FUN_147f75056(void)

undefined8 * FUN_147f75056(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14124dd15(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147f75114(param_1,iVar1);
      FUN_147f75176(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147f750b4 FUN_147f750b4 body=95 status=ok
// SIG undefined FUN_147f750b4(void)

undefined8 * FUN_147f750b4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145854bed(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147f7519e(param_1,iVar1);
      FUN_147f75211(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147f75114 FUN_147f75114 body=98 status=ok
// SIG undefined FUN_147f75114(void)

void FUN_147f75114(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147f75176 FUN_147f75176 body=40 status=ok
// SIG undefined FUN_147f75176(void)

void FUN_147f75176(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_2 + lVar2 * 8);
      *(longlong *)(param_1 + lVar2 * 8) = lVar1;
      if (lVar1 != 0) {
        *(int *)(lVar1 + 0x108) = *(int *)(lVar1 + 0x108) + 1;
      }
      lVar2 = lVar2 + 1;
    } while (param_3 != (int)lVar2);
  }
  return;
}



// FUNCTION 147f7519e FUN_147f7519e body=115 status=ok
// SIG undefined FUN_147f7519e(void)

void FUN_147f7519e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147f75211 FUN_147f75211 body=55 status=ok
// SIG undefined FUN_147f75211(void)

void FUN_147f75211(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      *(undefined8 *)(param_1 + 8 + lVar2) = *(undefined8 *)(param_2 + 8 + lVar2);
      lVar1 = *(longlong *)(param_2 + 0x10 + lVar2);
      *(longlong *)(param_1 + 0x10 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147f75268 FUN_147f75268 body=63 status=ok
// SIG undefined FUN_147f75268(void)

undefined1 FUN_147f75268(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f75384(param_2,param_3);
    param_3 = param_3 + 0x148;
    param_2 = param_2 + 0x148;
  }
  return 1;
}



// FUNCTION 147f752d0 FUN_147f752d0 body=59 status=ok
// SIG undefined FUN_147f752d0(void)

undefined8 FUN_147f752d0(longlong *param_1)

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



// FUNCTION 147f7531c FUN_147f7531c body=38 status=ok
// SIG undefined FUN_147f7531c(void)

void FUN_147f7531c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x148) == '\x01') {
    FUN_1407f61d0(param_2);
    *(undefined1 *)(param_2 + 0x148) = 0;
  }
  return;
}



// FUNCTION 147f75384 FUN_147f75384 body=145 status=ok
// SIG undefined FUN_147f75384(void)

longlong FUN_147f75384(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_147f744f0(param_1 + 0x18,param_2 + 0x18);
  FUN_145eff776(param_1 + 0x28,param_2 + 0x28);
  FUN_147f75416(param_1 + 0x78,param_2 + 0x78);
  FUN_14065c844(param_1 + 200,param_2 + 200);
  FUN_14065c7f4(param_1 + 0xd8,param_2 + 0xd8);
  FUN_147f745ac(param_1 + 0xe8,param_2 + 0xe8);
  FUN_147f74cb6(param_1 + 0xf8,param_2 + 0xf8);
  return param_1;
}



// FUNCTION 147f75416 FUN_147f75416 body=122 status=ok
// SIG undefined FUN_147f75416(void)

longlong FUN_147f75416(longlong param_1,longlong param_2)

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
    FUN_147f75490(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147f75490 FUN_147f75490 body=257 status=ok
// SIG undefined FUN_147f75490(void)

longlong * FUN_147f75490(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1407f6436(param_1,(ulonglong)uVar1);
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
          FUN_1415c5ebe(lVar5 + lVar3 + 8,lVar2 + 8 + lVar5);
          *(undefined8 *)(lVar3 + 0x20 + lVar5) = *(undefined8 *)(lVar2 + 0x20 + lVar5);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x28;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 147f755a6 FUN_147f755a6 body=48 status=ok
// SIG undefined FUN_147f755a6(void)

void FUN_147f755a6(undefined8 param_1,longlong *param_2)

{
  if ((longlong *)param_2[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_2[4] + 0x10))();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147f755ec FUN_147f755ec body=54 status=ok
// SIG undefined FUN_147f755ec(void)

undefined1 FUN_147f755ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f75712(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 147f7564a FUN_147f7564a body=59 status=ok
// SIG undefined FUN_147f7564a(void)

undefined8 FUN_147f7564a(longlong *param_1)

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



// FUNCTION 147f75690 FUN_147f75690 body=52 status=ok
// SIG undefined FUN_147f75690(void)

void FUN_147f75690(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[6] == '\x01') {
    if ((longlong *)param_2[4] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[4] + 0x10))();
    }
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 147f75712 FUN_147f75712 body=91 status=ok
// SIG undefined FUN_147f75712(void)

longlong FUN_147f75712(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_144a787a6();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
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
  return param_1;
}



// FUNCTION 147f757f6 FUN_147f757f6 body=59 status=ok
// SIG undefined FUN_147f757f6(void)

undefined8 FUN_147f757f6(longlong *param_1)

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



// FUNCTION 147f758ba FUN_147f758ba body=64 status=ok
// SIG undefined FUN_147f758ba(void)

undefined1 FUN_147f758ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14123c256(param_2,param_3);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 147f75922 FUN_147f75922 body=59 status=ok
// SIG undefined FUN_147f75922(void)

undefined8 FUN_147f75922(longlong *param_1)

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



// FUNCTION 147f759f8 FUN_147f759f8 body=123 status=ok
// SIG undefined FUN_147f759f8(void)

undefined1 FUN_147f759f8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0x20;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined1 *)(param_2 + -0x18 + lVar3) = *(undefined1 *)(param_3 + -0x18 + lVar3);
      *(undefined4 *)(param_2 + -8 + lVar3) = *(undefined4 *)(param_3 + -8 + lVar3);
      *(undefined8 *)(param_2 + -0x10 + lVar3) = *(undefined8 *)(param_3 + -0x10 + lVar3);
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f75a9c FUN_147f75a9c body=59 status=ok
// SIG undefined FUN_147f75a9c(void)

undefined8 FUN_147f75a9c(longlong *param_1)

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



// FUNCTION 147f75b3c FUN_147f75b3c body=55 status=ok
// SIG undefined FUN_147f75b3c(void)

void FUN_147f75b3c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25598 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25598 = FUN_140002ddd(FUN_146447047,uVar1,L"MovieSceneGbxAudioEventTemplate");
  }
  return;
}



// FUNCTION 147f75bfa FUN_147f75bfa body=59 status=ok
// SIG undefined FUN_147f75bfa(void)

undefined8 FUN_147f75bfa(longlong *param_1)

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



// FUNCTION 147f75c40 FUN_147f75c40 body=45 status=ok
// SIG undefined FUN_147f75c40(void)

void FUN_147f75c40(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_LAB_14acb0690;
    FUN_147521a50(param_2 + 2);
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 147f75cbc FUN_147f75cbc body=52 status=ok
// SIG undefined FUN_147f75cbc(void)

undefined8 * FUN_147f75cbc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14acb0690;
  FUN_147521a50(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f75d4e FUN_147f75d4e body=123 status=ok
// SIG undefined FUN_147f75d4e(void)

undefined1 FUN_147f75d4e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0x20;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined1 *)(param_2 + -0x18 + lVar3) = *(undefined1 *)(param_3 + -0x18 + lVar3);
      *(undefined4 *)(param_2 + -8 + lVar3) = *(undefined4 *)(param_3 + -8 + lVar3);
      *(undefined8 *)(param_2 + -0x10 + lVar3) = *(undefined8 *)(param_3 + -0x10 + lVar3);
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f75df2 FUN_147f75df2 body=59 status=ok
// SIG undefined FUN_147f75df2(void)

undefined8 FUN_147f75df2(longlong *param_1)

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



// FUNCTION 147f75e92 FUN_147f75e92 body=29 status=ok
// SIG undefined FUN_147f75e92(void)

undefined8 FUN_147f75e92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f75eb6 FUN_147f75eb6 body=55 status=ok
// SIG undefined FUN_147f75eb6(void)

void FUN_147f75eb6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb255f8 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb255f8 = FUN_140002ddd(FUN_1464471d7,uVar1,L"MovieSceneGbxAudioRTPCTemplate");
  }
  return;
}



// FUNCTION 147f75f4c FUN_147f75f4c body=70 status=ok
// SIG undefined FUN_147f75f4c(void)

longlong FUN_147f75f4c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x40) != 0) && (lVar1 = FUN_144aa8ebc(), lVar1 != 0)) {
    lVar2 = FUN_1458bc180();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 147f75f92 FUN_147f75f92 body=396 status=ok
// SIG undefined FUN_147f75f92(void)

void FUN_147f75f92(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 0x140) == '\0') {
    iVar5 = *(int *)(param_1 + 0x164);
    FUN_1403d8100(*(undefined8 *)(param_1 + 0x158),*(undefined4 *)(param_1 + 0x160));
    *(undefined4 *)(param_1 + 0x160) = 0;
    if ((iVar5 < 0) && (*(int *)(param_1 + 0x164) != 0)) {
      FUN_1470e8cfe(param_1 + 0x158,0);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_147f76120(param_1 + 0x158,*(longlong *)(param_1 + 0x40) + 0x58);
    }
    iVar5 = *(int *)(param_1 + 0x78);
    if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar5);
    }
    if (*(int *)(param_1 + 0x13c) < iVar5) {
      FUN_147f7e9e6(param_1 + 0x130);
      iVar5 = *(int *)(param_1 + 0x78);
    }
    if (0 < iVar5) {
      iVar5 = 0;
      do {
        plVar2 = (longlong *)FUN_142b3f8e4(param_1,iVar5);
        if (plVar2 != (longlong *)0x0) {
          lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
          lVar4 = FUN_14644586c();
          if ((((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
              (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
               lVar4 + 0x30)) && (cVar1 = (**(code **)(*plVar2 + 0x28))(plVar2), cVar1 != '\0')) {
            (**(code **)(*plVar2 + 0x78))(plVar2);
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_1 + 0x78));
    }
    plVar2 = (longlong *)FUN_142b3f8e4(param_1,0);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
      lVar4 = FUN_145a0a0e2();
      if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        *(undefined1 *)(param_1 + 0x140) = 1;
                    /* WARNING: Could not recover jumptable at 0x000147f760db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x80))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147f76120 FUN_147f76120 body=92 status=ok
// SIG undefined FUN_147f76120(void)

void FUN_147f76120(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_141115832(param_1,iVar2);
    }
    FUN_140b579f5((longlong)iVar2 * 0x58 + *param_1,*param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 147f7617c FUN_147f7617c body=350 status=ok
// SIG undefined FUN_147f7617c(void)

void FUN_147f7617c(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  bool bVar9;
  
  lVar4 = FUN_1408d3a8a();
  if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x155) & 0x20) == 0)) {
    uVar6 = *(uint *)(param_1 + 0x138);
    if (0 < (int)uVar6) {
      lVar4 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x130) + lVar4 * 8);
        if ((plVar1 != (longlong *)0x0) && ((char)plVar1[10] == '\x01')) {
          (**(code **)(*plVar1 + 0x88))();
          uVar6 = *(uint *)(param_1 + 0x138);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < (int)uVar6);
    }
    if (uVar6 != 0) {
      plVar1 = *(longlong **)(param_1 + 0x130);
      if (*plVar1 == 0) {
        bVar9 = true;
      }
      else {
        bVar9 = *(char *)(*plVar1 + 0x50) == '\0';
      }
      iVar5 = 0;
      uVar8 = 0;
LAB_147f76213:
      do {
        iVar3 = (int)uVar8;
        uVar8 = (ulonglong)(iVar3 + 1U);
        if ((int)(iVar3 + 1U) < (int)uVar6) {
          uVar8 = (longlong)iVar3 + 1;
          bVar2 = true;
          do {
            if (plVar1[uVar8] == 0) {
              if (bVar9 == false) goto LAB_147f76270;
            }
            else if ((*(char *)(plVar1[uVar8] + 0x50) == '\0') != bVar9) goto LAB_147f76258;
            uVar8 = uVar8 + 1;
            bVar2 = (longlong)uVar8 < (longlong)(int)uVar6;
          } while (uVar8 != (longlong)(int)uVar6);
          uVar8 = (ulonglong)uVar6;
LAB_147f76258:
          if (bVar9 != false) {
            bVar9 = false;
            if (!bVar2) break;
            goto LAB_147f76213;
          }
        }
        else {
          if (bVar9 != false) break;
          bVar2 = false;
        }
LAB_147f76270:
        iVar7 = (int)uVar8 - iVar3;
        if (iVar5 != iVar3) {
          memmove(plVar1 + iVar5,plVar1 + iVar3,(longlong)iVar7 << 3);
        }
        iVar5 = iVar5 + iVar7;
        bVar9 = true;
      } while (bVar2);
      *(int *)(param_1 + 0x138) = iVar5;
      if (iVar5 != 0) {
        return;
      }
    }
  }
  FUN_147f762da(param_1);
  return;
}



// FUNCTION 147f762da FUN_147f762da body=228 status=ok
// SIG undefined FUN_147f762da(void)

void FUN_147f762da(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = *(int *)(param_1 + 0x138);
  if ((longlong)iVar4 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x130);
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(lVar3 + lVar5);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x90))();
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar4 * 8 != lVar5);
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(int *)(param_1 + 0x13c) < 0) {
    FUN_147f7e9e6(param_1 + 0x130,0);
  }
  if (0 < *(int *)(param_1 + 0x78)) {
    iVar4 = 0;
    do {
      plVar2 = (longlong *)FUN_142b3f8e4(param_1,iVar4);
      if (plVar2 != (longlong *)0x0) {
        lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
        lVar5 = FUN_14644586c();
        if ((((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
            (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
             lVar5 + 0x30)) && (cVar1 = (**(code **)(*plVar2 + 0x28))(plVar2), cVar1 != '\0')) {
          (**(code **)(*plVar2 + 0x98))(plVar2);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x78));
  }
  *(undefined1 *)(param_1 + 0x140) = 2;
  return;
}



// FUNCTION 147f763de FUN_147f763de body=26 status=ok
// SIG undefined FUN_147f763de(void)

undefined8 * FUN_147f763de(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = &DAT_14c846480;
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_2;
}



// FUNCTION 147f763f8 FUN_147f763f8 body=108 status=ok
// SIG undefined FUN_147f763f8(void)

undefined8 FUN_147f763f8(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_1 == 0x50) {
    FUN_140056680(param_2,&DAT_149e01fe8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  local_18 = *(undefined8 *)(param_1 + -0x38);
  FUN_1400021e4(&local_18,param_2);
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147f7646c FUN_147f7646c body=42 status=ok
// SIG undefined FUN_147f7646c(void)

void FUN_147f7646c(longlong param_1)

{
  int *piVar1;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + 0x108);
    *piVar1 = *piVar1 + -1;
    FUN_140d274d8();
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147f76496 FUN_147f76496 body=738 status=ok
// SIG undefined FUN_147f76496(void)

void FUN_147f76496(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 auStack_278 [32];
  undefined8 *local_258;
  undefined8 local_250;
  longlong local_240 [2];
  longlong local_230;
  longlong local_228 [12];
  longlong local_1c8 [12];
  undefined8 local_168;
  undefined2 local_160;
  undefined8 local_15c;
  longlong local_148 [12];
  undefined8 local_e8;
  undefined2 local_e0;
  undefined8 local_dc;
  undefined8 local_c8 [12];
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined8 local_5c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_278;
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (((*(int *)(lVar2 + 0x38) != 1) && (*(longlong **)(param_1 + 0x50) != (longlong *)0x0)) &&
     (**(longlong **)(param_1 + 0x50) != -1)) goto LAB_147f76716;
  lVar5 = *(longlong *)(param_1 + 0x40);
  lVar6 = *(longlong *)(lVar5 + 0x148);
  if (lVar6 == 0) goto LAB_147f76716;
  if (*(char *)(lVar2 + 0xd0) == '\x01') {
    local_258 = local_c8;
    puVar7 = (undefined8 *)(lVar2 + 0x50);
    puVar9 = local_258;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    local_68 = *(undefined4 *)(lVar2 + 0xb0);
    local_64 = *(undefined4 *)(lVar2 + 0xb4);
    local_60 = *(undefined1 *)(lVar2 + 0xb8);
    local_5f = *(undefined1 *)(lVar2 + 0xb9);
    local_5c = *(undefined8 *)(lVar2 + 0xbc);
    uVar3 = *(undefined8 *)(lVar2 + 0x3c);
    FUN_140056680(local_148,L"AudioGraph");
    local_250 = 0;
    FUN_14071b0f2(lVar6,local_228,local_148,uVar3);
    FUN_1403c75f4(param_1 + 0x50,local_228);
    if (local_228[0] != 0) {
      *(int *)(local_228[0] + 0x108) = *(int *)(local_228[0] + 0x108) + -1;
      FUN_140d274d8();
    }
    if (local_148[0] != 0) {
      FUN_1400020a8();
    }
    goto LAB_147f76716;
  }
  if (*(longlong *)(lVar6 + 0x20) == 0) {
LAB_147f76616:
    plVar8 = &DAT_14c846480;
    plVar10 = local_228;
    for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
      *plVar10 = *plVar8;
      plVar8 = plVar8 + 1;
      plVar10 = plVar10 + 1;
    }
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x3c);
    cVar4 = FUN_144729dda(lVar6 + 0x18);
    if (cVar4 == '\0') goto LAB_147f76616;
    (**(code **)(**(longlong **)(lVar6 + 0x20) + 0x28))
              (*(longlong **)(lVar6 + 0x20),local_228,uVar3,0);
  }
  plVar8 = local_228;
  plVar10 = local_148;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *plVar10 = *plVar8;
    plVar8 = plVar8 + 1;
    plVar10 = plVar10 + 1;
  }
  local_e8 = 0x3f800000;
  local_e0 = 0;
  local_dc = 0;
  FUN_1400875ba(local_148,lVar2 + 0x50);
  uVar3 = *(undefined8 *)(lVar5 + 0x148);
  FUN_140056680(local_240,L"AudioGraph");
  local_258 = (undefined8 *)((ulonglong)local_258 & 0xffffffffffffff00);
  FUN_14084a140(uVar3,&local_230,local_240,0);
  FUN_1403c75f4((longlong *)(param_1 + 0x50),&local_230);
  if (local_230 != 0) {
    *(int *)(local_230 + 0x108) = *(int *)(local_230 + 0x108) + -1;
    FUN_140d274d8();
  }
  if (local_240[0] != 0) {
    FUN_1400020a8();
  }
  lVar2 = *(longlong *)(param_1 + 0x50);
  if (lVar2 != 0) {
    plVar8 = local_148;
    plVar10 = local_1c8;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *plVar10 = *plVar8;
      plVar8 = plVar8 + 1;
      plVar10 = plVar10 + 1;
    }
    local_168 = local_e8;
    local_160 = local_e0;
    local_15c = local_dc;
    FUN_14150591e(lVar2);
  }
LAB_147f76716:
  FUN_140d27362(param_4,param_1 + 0x50);
  plVar8 = *(longlong **)(param_3 + 8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f76780 FUN_147f76780 body=42 status=ok
// SIG undefined FUN_147f76780(void)

void FUN_147f76780(longlong param_1)

{
  int *piVar1;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + 0x108);
    *piVar1 = *piVar1 + -1;
    FUN_140d274d8();
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147f767aa FUN_147f767aa body=318 status=ok
// SIG undefined FUN_147f767aa(void)

void FUN_147f767aa(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x40);
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_38 = *(undefined8 *)(lVar1 + 0x148);
  local_30 = *(longlong *)(lVar1 + 0x150);
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  local_40 = FUN_140206ee8(lVar2 + 0x38,&local_38);
  if (local_40 == 0) {
    local_40 = 0;
  }
  else {
    FUN_140942716();
  }
  FUN_1407ec87c(param_1 + 0x50,&local_40);
  if ((local_40 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(local_40 + 0x50));
  }
  local_50 = *(undefined8 *)(lVar1 + 0x148);
  local_48 = *(longlong *)(lVar1 + 0x150);
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  local_40 = FUN_140206ee8(lVar2 + 0x70,&local_50);
  if (local_40 == 0) {
    local_40 = 0;
  }
  else {
    FUN_140942716();
  }
  FUN_1407ec87c(param_1 + 0x58,&local_40);
  if ((local_40 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(local_40 + 0x50));
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f768ea FUN_147f768ea body=90 status=ok
// SIG undefined FUN_147f768ea(void)

void FUN_147f768ea(longlong param_1)

{
  byte bVar1;
  
  if ((*(longlong *)(param_1 + 0x50) != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x50));
  }
  bVar1 = DAT_14cb26569;
  *(undefined8 *)(param_1 + 0x50) = 0;
  if ((*(longlong *)(param_1 + 0x58) != 0) && ((bVar1 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x50));
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}



// FUNCTION 147f76944 FUN_147f76944 body=525 status=ok
// SIG undefined FUN_147f76944(void)

void FUN_147f76944(longlong param_1,undefined4 *param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((((*(longlong *)(param_1 + 0x50) == 0) || ((DAT_14cb26569 & 1) == 0)) ||
      ((longlong *)*param_4 == (longlong *)0x0)) || (*(longlong *)*param_4 == -1))
  goto LAB_147f76a0e;
  lVar9 = *(longlong *)(param_1 + 0x40);
  lVar5 = *(longlong *)(param_1 + 0x48);
  lVar10 = *(longlong *)(lVar9 + 0x148);
  if ((lVar10 == 0) || (*(longlong *)(lVar10 + 0x20) == 0)) {
LAB_147f769d9:
    uVar8 = 0;
  }
  else {
    cVar7 = FUN_144729dda(lVar10 + 0x18);
    if (cVar7 == '\0') goto LAB_147f769d9;
    uVar8 = (**(code **)(**(longlong **)(*(longlong *)(lVar9 + 0x148) + 0x20) + 0x30))();
  }
  local_88 = *(undefined4 *)(lVar5 + 0xa0);
  FUN_14084a448(*param_4,&local_80,*(undefined8 *)(param_1 + 0x50),uVar8);
  if ((*(char *)(lVar5 + 0x68) != '\0') || (9.999999747378752e-05 < *(double *)(param_2 + 2))) {
    lVar9 = FUN_147f76b52(param_1);
    if (lVar9 != 0) {
      local_68 = *param_2;
      uStack_64 = param_2[1];
      uStack_60 = param_2[2];
      uStack_5c = param_2[3];
      local_58 = param_2[4];
      uStack_54 = param_2[5];
      uStack_50 = param_2[6];
      uStack_4c = param_2[7];
      lVar5 = *(longlong *)(param_1 + 0x58);
      if ((lVar5 != 0) && ((DAT_14cb26569 & 1) != 0)) {
        FUN_14036e5a4(*(undefined8 *)(lVar5 + 0x50),lVar5);
      }
      iVar4 = *(int *)(lVar9 + 0x188);
      *(uint *)(lVar9 + 0x188) = iVar4 + 1U;
      if (*(uint *)(lVar9 + 0x18c) < iVar4 + 1U) {
        FUN_147f7ea46((longlong *)(lVar9 + 0x180),iVar4);
      }
      lVar9 = *(longlong *)(lVar9 + 0x180);
      lVar10 = (longlong)iVar4 * 0x40;
      puVar3 = (undefined4 *)(lVar9 + 0x10 + lVar10);
      *puVar3 = local_58;
      puVar3[1] = uStack_54;
      puVar3[2] = uStack_50;
      puVar3[3] = uStack_4c;
      puVar3 = (undefined4 *)(lVar9 + lVar10);
      *puVar3 = local_68;
      puVar3[1] = uStack_64;
      puVar3[2] = uStack_60;
      puVar3[3] = uStack_5c;
      *(undefined8 *)(lVar9 + 0x20 + lVar10) = local_80;
      *(undefined8 *)(lVar9 + 0x28 + lVar10) = local_78;
      *(undefined8 *)(lVar9 + 0x30 + lVar10) = local_70;
      *(longlong *)(lVar9 + 0x38 + lVar10) = lVar5;
      if ((lVar5 != 0 & DAT_14cb26569) == 1) {
        FUN_14036e5a4(*(undefined8 *)(lVar5 + 0x50),lVar5);
      }
      if ((lVar5 != 0) && ((DAT_14cb26569 & 1) != 0)) {
        FUN_1400848c0(*(undefined8 *)(lVar5 + 0x50),lVar5);
      }
    }
  }
LAB_147f76a0e:
  plVar6 = *(longlong **)(param_3 + 8);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f76b52 FUN_147f76b52 body=54 status=ok
// SIG undefined FUN_147f76b52(void)

longlong FUN_147f76b52(void)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar2 = FUN_142b3fa50();
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    uVar3 = FUN_14587d3fe();
    cVar1 = FUN_1448093f4(lVar2,uVar3);
    lVar4 = 0;
    if (cVar1 != '\0') {
      lVar4 = lVar2;
    }
  }
  return lVar4;
}



// FUNCTION 147f76b8e FUN_147f76b8e body=222 status=ok
// SIG undefined FUN_147f76b8e(void)

void FUN_147f76b8e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x40);
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_30 = *(undefined8 *)(lVar1 + 0x148);
  local_28 = *(longlong *)(lVar1 + 0x150);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  local_38 = FUN_140206ee8(lVar2 + 0x38,&local_30);
  if (local_38 == 0) {
    local_38 = 0;
  }
  else {
    FUN_140942716();
  }
  FUN_1407ec87c(param_1 + 0x50,&local_38);
  if ((local_38 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(local_38 + 0x50));
  }
  if (*(longlong *)(lVar1 + 0x148) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_14479d2ce(*(longlong *)(lVar1 + 0x148) + 0x18);
  }
  FUN_14485c47a(param_1 + 0x58,uVar3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f76c6e FUN_147f76c6e body=331 status=ok
// SIG undefined FUN_147f76c6e(void)

void FUN_147f76c6e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((*(longlong *)(param_1 + 0x60) != 0) &&
       ((*(longlong *)(param_1 + 0x50) != 0 & DAT_14cb26569) == 1)) &&
      (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x148), lVar4 != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x48) + 0x68) == '\0')) {
    uVar6 = FUN_14479d2ce(lVar4 + 0x30);
    FUN_1408f67ec(&local_28,uVar6,1);
    if (local_28 != 0) {
      local_38 = *(undefined8 *)(param_1 + 0x60);
      fVar3 = *(float *)(*(longlong *)(param_1 + 0x50) + 0x48);
      local_30 = *(longlong *)(param_1 + 0x68);
      if (local_30 != 0) {
        LOCK();
        *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
        UNLOCK();
      }
      FUN_14119fb42(local_28,&local_38,(double)fVar3);
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
        }
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x50) != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x50));
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  puVar5 = *(undefined8 **)(param_1 + 0x68);
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    LOCK();
    piVar2 = (int *)(puVar5 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar5)(puVar5);
      LOCK();
      piVar2 = (int *)((longlong)puVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f76dca FUN_147f76dca body=559 status=ok
// SIG undefined FUN_147f76dca(void)

void FUN_147f76dca(longlong param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  double local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar6 = *(longlong *)(param_1 + 0x50);
  if ((((((lVar6 == 0) || ((DAT_14cb26569 & 1) == 0)) ||
        (param_4 = (longlong *)*param_4, param_4 == (longlong *)0x0)) ||
       ((*param_4 == -1 || (fVar8 = *(float *)(param_2 + 2), fVar8 < 0.0)))) ||
      ((128.0 <= fVar8 ||
       ((fVar9 = *(float *)((longlong)param_2 + 0x14), fVar9 < 0.0 || (128.0 <= fVar9)))))) ||
     ((fVar10 = *(float *)(param_2 + 3), fVar10 < 0.0 || (16.0 <= fVar10)))) goto LAB_147f76ef8;
  dVar3 = (double)param_2[1];
  uVar11 = SUB84(dVar3,0);
  uVar12 = (undefined4)((ulonglong)dVar3 >> 0x20);
  if (dVar3 <= 9.999999747378752e-05) goto LAB_147f76ef8;
  if (*(longlong *)(param_1 + 0x60) == 0) {
    uVar7 = FUN_14479d2ce(param_1 + 0x58);
    FUN_1418198c8(param_4,&local_60,uVar7,1);
    plVar1 = local_58;
    *(undefined8 *)(param_1 + 0x60) = local_60;
    local_60 = 0;
    plVar5 = *(longlong **)(param_1 + 0x68);
    if (local_58 == plVar5) {
LAB_147f76fb9:
      plVar5 = local_58;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_58 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_58)(local_58);
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
      local_58 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x68) = plVar1;
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
        goto LAB_147f76fb9;
      }
    }
    lVar6 = *(longlong *)(param_1 + 0x50);
    fVar8 = *(float *)(param_2 + 2);
    fVar9 = *(float *)((longlong)param_2 + 0x14);
    fVar10 = *(float *)(param_2 + 3);
    uVar11 = (undefined4)param_2[1];
    uVar12 = (undefined4)((ulonglong)param_2[1] >> 0x20);
  }
  uVar4 = *(undefined4 *)(lVar6 + 0x38);
  dVar3 = *(double *)(*param_3 + 0x10);
  local_78 = FUN_147f81be8(*param_3,*param_2);
  local_70 = *(undefined8 *)(param_1 + 0x60);
  local_68 = *(longlong *)(param_1 + 0x68);
  if (local_68 != 0) {
    LOCK();
    *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
    UNLOCK();
  }
  local_88 = (undefined1)(int)fVar10;
  local_80 = (double)CONCAT44(uVar12,uVar11) / dVar3;
  FUN_147f818e0(&local_70,uVar4,(int)fVar8,(int)fVar9);
LAB_147f76ef8:
  plVar5 = (longlong *)param_3[1];
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
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f77000 FUN_147f77000 body=560 status=ok
// SIG undefined FUN_147f77000(void)

void FUN_147f77000(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar6 = *(longlong *)(param_1 + 0x48);
  lVar10 = *(longlong *)(lVar6 + 0x40);
  if (lVar10 == 0) {
    if (DAT_14cb256c8 == 0) {
      uVar9 = FUN_140cd185c();
      DAT_14cb256c8 = FUN_140002ddd(FUN_141819010,uVar9,L"WwiseGameParameterDef");
    }
    lVar10 = FUN_14477b664(DAT_14cb256c8);
    *(longlong *)(lVar6 + 0x40) = lVar10;
  }
  plVar2 = (longlong *)(lVar6 + 0x38);
  lVar11 = *(longlong *)(lVar6 + 0x48);
  if (lVar11 == 0) {
    if ((lVar10 == 0) || (*plVar2 == 0)) goto LAB_147f7708e;
    plVar7 = *(longlong **)(lVar10 + 0xb8);
    if ((plVar7 == (longlong *)0x0) ||
       (cVar8 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar8 == '\0')) {
      *(undefined8 *)(lVar6 + 0x48) = 0;
      goto LAB_147f7708e;
    }
    uVar9 = (**(code **)(*plVar7 + 0x110))(plVar7);
    lVar11 = FUN_144aff482(uVar9,plVar2);
    *(longlong *)(lVar6 + 0x48) = lVar11;
    if (lVar11 == 0) goto LAB_147f7708e;
  }
  param_4 = (longlong *)*param_4;
  if ((param_4 != (longlong *)0x0) && (*param_4 != -1)) {
    dVar4 = *(double *)(param_2 + 8);
    dVar5 = *(double *)(*param_3 + 0x10);
    uVar3 = *(undefined4 *)(param_2 + 0x14);
    if (*(longlong *)(lVar6 + 0x40) == 0) {
      if (DAT_14cb256c8 == 0) {
        uVar9 = FUN_140cd185c(0,lVar11);
        DAT_14cb256c8 = FUN_140002ddd(FUN_141819010,uVar9,L"WwiseGameParameterDef");
      }
      lVar10 = FUN_14477b664(DAT_14cb256c8);
      *(longlong *)(lVar6 + 0x40) = lVar10;
      lVar11 = *(longlong *)(lVar6 + 0x48);
      if (((lVar11 == 0) && (lVar11 = 0, lVar10 != 0)) && (*plVar2 != 0)) {
        plVar7 = *(longlong **)(lVar10 + 0xb8);
        if ((plVar7 == (longlong *)0x0) ||
           (cVar8 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar8 == '\0')) {
          lVar11 = 0;
        }
        else {
          uVar9 = (**(code **)(*plVar7 + 0x110))(plVar7);
          lVar11 = FUN_144aff482(uVar9,plVar2);
        }
        *(longlong *)(lVar6 + 0x48) = lVar11;
      }
    }
    FUN_1447997cc(param_4,lVar11,uVar3,(int)((dVar4 / dVar5) * 1000.0),0);
  }
LAB_147f7708e:
  plVar2 = (longlong *)param_3[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147f770c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147f77236 FUN_147f77236 body=515 status=ok
// SIG undefined FUN_147f77236(void)

void FUN_147f77236(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  __uint64 *p_Var4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  lVar8 = *(longlong *)(lVar3 + 0x40);
  if (lVar8 == 0) {
    if (DAT_14cb25788 == 0) {
      uVar7 = FUN_140cd185c();
      DAT_14cb25788 = FUN_140002ddd(FUN_141819041,uVar7,L"WwiseSwitchDef");
    }
    lVar8 = FUN_14477b664(DAT_14cb25788);
    *(longlong *)(lVar3 + 0x40) = lVar8;
  }
  plVar1 = (longlong *)(lVar3 + 0x38);
  lVar9 = *(longlong *)(lVar3 + 0x48);
  if (lVar9 == 0) {
    if ((lVar8 == 0) || (*plVar1 == 0)) goto LAB_147f77350;
    plVar5 = *(longlong **)(lVar8 + 0xb8);
    if (plVar5 != (longlong *)0x0) {
      cVar6 = (**(code **)(*plVar5 + 0x108))(plVar5);
      if (cVar6 != '\0') {
        uVar7 = (**(code **)(*plVar5 + 0x110))(plVar5);
        lVar9 = FUN_144aff482(uVar7,plVar1);
        *(longlong *)(lVar3 + 0x48) = lVar9;
        if (lVar9 == 0) goto LAB_147f77350;
        goto LAB_147f77265;
      }
    }
    *(undefined8 *)(lVar3 + 0x48) = 0;
    goto LAB_147f77350;
  }
LAB_147f77265:
  p_Var4 = (__uint64 *)*param_4;
  if ((p_Var4 == (__uint64 *)0x0) || (*p_Var4 == 0xffffffffffffffff)) goto LAB_147f77350;
  if (*(longlong *)(lVar3 + 0x40) == 0) {
    if (DAT_14cb25788 == 0) {
      uVar7 = FUN_140cd185c();
      DAT_14cb25788 = FUN_140002ddd(FUN_141819041,uVar7,L"WwiseSwitchDef");
    }
    lVar8 = FUN_14477b664(DAT_14cb25788);
    *(longlong *)(lVar3 + 0x40) = lVar8;
    lVar9 = *(longlong *)(lVar3 + 0x48);
    if (lVar9 == 0) {
      if ((lVar8 == 0) || (*plVar1 == 0)) goto LAB_147f77350;
      plVar5 = *(longlong **)(lVar8 + 0xb8);
      if (plVar5 == (longlong *)0x0) {
LAB_147f77435:
        lVar9 = 0;
      }
      else {
        cVar6 = (**(code **)(*plVar5 + 0x108))(plVar5);
        if (cVar6 == '\0') goto LAB_147f77435;
        uVar7 = (**(code **)(*plVar5 + 0x110))(plVar5);
        lVar9 = FUN_144aff482(uVar7,plVar1);
      }
      *(longlong *)(lVar3 + 0x48) = lVar9;
    }
  }
  if ((lVar9 != 0 && *p_Var4 != 0xffffffffffffffff) && (DAT_14cb25ab0 == '\x01')) {
    AK::SoundEngine::SetSwitch(*(uint *)(lVar9 + 0x48),*(uint *)(lVar9 + 0x38),*p_Var4);
  }
LAB_147f77350:
  plVar1 = *(longlong **)(param_3 + 8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar1 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147f7737e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x10))(plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147f77440 FUN_147f77440 body=495 status=ok
// SIG undefined FUN_147f77440(void)

void FUN_147f77440(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  lVar7 = *(longlong *)(lVar3 + 0x40);
  if (lVar7 == 0) {
    if (DAT_14cb25758 == 0) {
      uVar6 = FUN_140cd185c();
      DAT_14cb25758 = FUN_140002ddd(FUN_146447bb9,uVar6,L"WwiseStateDef");
    }
    lVar7 = FUN_14477b664(DAT_14cb25758);
    *(longlong *)(lVar3 + 0x40) = lVar7;
  }
  plVar1 = (longlong *)(lVar3 + 0x38);
  lVar8 = *(longlong *)(lVar3 + 0x48);
  if (lVar8 == 0) {
    if ((lVar7 == 0) || (*plVar1 == 0)) goto LAB_147f77496;
    plVar4 = *(longlong **)(lVar7 + 0xb8);
    if (plVar4 != (longlong *)0x0) {
      cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4);
      if (cVar5 != '\0') {
        uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
        lVar8 = FUN_144aff482(uVar6,plVar1);
        *(longlong *)(lVar3 + 0x48) = lVar8;
        if ((lVar8 == 0) || (DAT_14cb259f8 == 0)) goto LAB_147f77496;
        lVar7 = *(longlong *)(lVar3 + 0x40);
        goto LAB_147f77474;
      }
    }
    *(undefined8 *)(lVar3 + 0x48) = 0;
    goto LAB_147f77496;
  }
  if (DAT_14cb259f8 == 0) goto LAB_147f77496;
LAB_147f77474:
  if (lVar7 == 0) {
    if (DAT_14cb25758 == 0) {
      uVar6 = FUN_140cd185c();
      DAT_14cb25758 = FUN_140002ddd(FUN_146447bb9,uVar6,L"WwiseStateDef");
    }
    lVar7 = FUN_14477b664(DAT_14cb25758);
    *(longlong *)(lVar3 + 0x40) = lVar7;
    lVar8 = *(longlong *)(lVar3 + 0x48);
    if (lVar8 == 0) {
      if ((lVar7 == 0) || (*plVar1 == 0)) goto LAB_147f77496;
      plVar4 = *(longlong **)(lVar7 + 0xb8);
      if (plVar4 == (longlong *)0x0) {
LAB_147f7762b:
        lVar8 = 0;
      }
      else {
        cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4);
        if (cVar5 == '\0') goto LAB_147f7762b;
        uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
        lVar8 = FUN_144aff482(uVar6,plVar1);
      }
      *(longlong *)(lVar3 + 0x48) = lVar8;
    }
  }
  if ((lVar8 != 0) && (DAT_14cb25ab0 != '\0')) {
    AK::SoundEngine::SetState(*(uint *)(lVar8 + 0x48),*(uint *)(lVar8 + 0x38));
  }
LAB_147f77496:
  plVar1 = *(longlong **)(param_3 + 8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar1 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147f774c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x10))(plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147f7763c FUN_147f7763c body=84 status=ok
// SIG undefined FUN_147f7763c(void)

void FUN_147f7763c(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (((longlong *)*param_4 != (longlong *)0x0) && (*(longlong *)*param_4 != -1)) {
    FUN_147f762da(*(undefined8 *)(param_1 + 0x40));
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
                    /* WARNING: Could not recover jumptable at 0x000147f7767a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147f77696 FUN_147f77696 body=166 status=ok
// SIG undefined FUN_147f77696(void)

void FUN_147f77696(longlong param_1)

{
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [144];
  undefined2 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  if (*(int *)(param_1 + 0xa4) < 0) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    FUN_147f7f652(param_1 + 0x98);
  }
  else {
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  memset(local_b0,0,0x98);
  local_20 = 0xffff;
  FUN_147f7aea4(param_1,local_b0);
  FUN_141818bfa(local_b0);
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f7773e FUN_147f7773e body=54 status=ok
// SIG undefined FUN_147f7773e(void)

longlong FUN_147f7773e(void)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_142b3fa50();
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    uVar4 = FUN_14644586c();
    cVar1 = FUN_1448093f4(lVar2,uVar4);
    lVar3 = 0;
    if (cVar1 != '\0') {
      lVar3 = lVar2;
    }
  }
  return lVar3;
}



// FUNCTION 147f77786 FUN_147f77786 body=154 status=ok
// SIG undefined FUN_147f77786(void)

void FUN_147f77786(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_3 - 1U < 2) {
    uVar2 = 0;
    if ((*(char *)(param_1 + 0xa8) == '\x01') && (uVar2 = 0, *(int *)(param_1 + 0x50) != 0)) {
      uVar2 = FUN_147f7f756(0,*(int *)(param_1 + 0x50) + -1,param_2);
    }
    if (param_3 == 1) {
      *param_2 = uVar2;
    }
    else {
      param_2[1] = uVar2;
    }
  }
  else if (param_3 != 0) {
    uVar1 = 0;
    if ((*(char *)(param_1 + 0xa8) == '\x01') && (*(int *)(param_1 + 0x50) != 0)) {
      uVar1 = FUN_147f7eacc(0,*(int *)(param_1 + 0x50) + -1,param_2);
    }
    switch(param_3) {
    case 3:
    case 6:
      *(undefined4 *)(param_2 + 2) = uVar1;
      break;
    case 4:
    case 7:
      *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
      break;
    case 5:
      *(undefined4 *)(param_2 + 3) = uVar1;
    }
  }
  return;
}



// FUNCTION 147f77826 FUN_147f77826 body=315 status=ok
// SIG undefined FUN_147f77826(void)

void FUN_147f77826(longlong param_1,double *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  plVar4 = (longlong *)FUN_147f7773e();
  if (((plVar4 != (longlong *)0x0) &&
      (plVar4 = (longlong *)(**(code **)(*plVar4 + 0xc0))(plVar4), plVar4 != (longlong *)0x0)) &&
     (0 < (int)plVar4[1])) {
    fVar7 = 0.0;
    if ((*(char *)(param_1 + 0xf8) == '\x01') && (*(int *)(param_1 + 0xa0) != 0)) {
      fVar7 = (float)FUN_147f7eacc(param_1 + 0x50,*(int *)(param_1 + 0xa0) + -1,param_2);
    }
    uVar3 = (int)ROUND(fVar7 + fVar7 + 0.5) >> 1;
    uVar6 = uVar3;
    if (((int)uVar3 < 0) || ((int)plVar4[1] <= (int)uVar3)) {
      iVar1 = *(int *)(lVar2 + 0x44);
      if (iVar1 == 2) {
        return;
      }
      if (iVar1 == 1) {
        uVar5 = (int)plVar4[1] - 1;
        if ((int)uVar3 < (int)uVar5) {
          uVar5 = uVar3;
        }
        uVar6 = 0;
        if (0 < (int)uVar5) {
          uVar6 = uVar5;
        }
      }
      else if (iVar1 == 0) {
        uVar5 = *(uint *)(plVar4 + 1);
        if (uVar5 == 0) {
          uVar6 = 0;
        }
        else if ((int)uVar3 < 0) {
          uVar6 = uVar5 - -uVar3 % uVar5;
          if (-uVar3 % uVar5 == 0) {
            uVar6 = 0;
          }
        }
        else {
          uVar6 = uVar3 % uVar5;
        }
      }
    }
    iVar1 = *(int *)(lVar2 + 0x40);
    if (iVar1 - 1U < 7) {
      fVar7 = *(float *)(*plVar4 + (longlong)(int)uVar6 * 4);
      switch(iVar1) {
      case 1:
        *param_2 = (double)fVar7;
        break;
      case 2:
        param_2[1] = (double)fVar7;
        break;
      default:
        *(float *)(param_2 + 2) = fVar7;
        break;
      case 4:
      case 7:
        *(float *)((longlong)param_2 + 0x14) = fVar7;
        break;
      case 5:
        *(float *)(param_2 + 3) = fVar7;
      }
    }
  }
  return;
}



// FUNCTION 147f77968 FUN_147f77968 body=164 status=ok
// SIG undefined FUN_147f77968(void)

void FUN_147f77968(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(lVar2 + 0x38) != 0) {
    plVar1 = (longlong *)FUN_147f7773e();
    if (plVar1 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 0xb8))(plVar1,*(undefined8 *)(lVar2 + 0x38));
      if (lVar2 != 0) {
        local_24 = 0;
        if ((*(char *)(param_1 + 0xf8) == '\x01') && (*(int *)(param_1 + 0xa0) != 0)) {
          local_24 = FUN_147f7eacc(param_1 + 0x50,*(int *)(param_1 + 0xa0) + -1,param_2);
        }
        FUN_1437eb57a(lVar2);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f77a0e FUN_147f77a0e body=66 status=ok
// SIG undefined FUN_147f77a0e(void)

void FUN_147f77a0e(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_141245f18();
  if (param_2 != 0) {
    uVar1 = FUN_14479d2ce(param_1 + 8);
    FUN_14485c47a(param_1 + 0x58,uVar1);
    return;
  }
  FUN_147f77a50(param_1);
  return;
}



// FUNCTION 147f77a50 FUN_147f77a50 body=173 status=ok
// SIG undefined FUN_147f77a50(void)

void FUN_147f77a50(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar7 = *(longlong **)(param_1 + 0x38);
  uVar6 = 0;
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    plVar8 = plVar7 + (longlong)*(int *)(param_1 + 0x40) * 2;
    do {
      lVar4 = *plVar7;
      plVar5 = (longlong *)plVar7[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      if (lVar4 != 0) {
        FUN_147f762da();
      }
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
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar8);
    uVar6 = *(undefined4 *)(param_1 + 0x40);
    plVar7 = *(longlong **)(param_1 + 0x38);
  }
  iVar3 = *(int *)(param_1 + 0x44);
  FUN_147f7ed41(plVar7,uVar6);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((iVar3 < 0) && (*(int *)(param_1 + 0x44) != 0)) {
    FUN_147f7ee10(param_1 + 0x38);
    return;
  }
  return;
}



// FUNCTION 147f77b0e FUN_147f77b0e body=396 status=ok
// SIG undefined FUN_147f77b0e(void)

void FUN_147f77b0e(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar9 = *(longlong *)(param_1 + 8);
    lVar8 = 0;
    do {
      lVar6 = *(longlong *)(lVar9 + lVar8);
      if (lVar6 != 0) {
        cVar4 = *(char *)(lVar6 + 0x140);
        if (cVar4 == '\0') {
          FUN_147f75f92();
          cVar4 = *(char *)(*(longlong *)(lVar9 + lVar8) + 0x140);
        }
        if (cVar4 == '\x01') {
          FUN_147f7617c();
        }
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar8);
    iVar1 = *(int *)(param_1 + 0x10);
    lVar9 = (longlong)iVar1;
    if (lVar9 != 0) {
      plVar2 = *(longlong **)(param_1 + 8);
      if (*plVar2 == 0) {
        bVar14 = true;
      }
      else {
        bVar14 = *(char *)(*plVar2 + 0x140) == '\x02';
      }
      iVar10 = 0;
      iVar5 = 0;
LAB_147f77bae:
      do {
        if (iVar5 + 1 < iVar1) {
          lVar6 = (longlong)iVar5;
          lVar8 = lVar6 + 2;
          plVar7 = plVar2 + lVar6 * 2 + 2;
          bVar3 = true;
          lVar13 = -1;
          do {
            iVar12 = (int)lVar13;
            if (*plVar7 == 0) {
              if (!bVar14) {
                iVar11 = iVar5 - iVar12;
                iVar12 = -iVar12;
                goto LAB_147f77c48;
              }
            }
            else if ((bool)(*(char *)(*plVar7 + 0x140) == '\x02' ^ bVar14)) {
              iVar11 = iVar5 - iVar12;
              break;
            }
            bVar3 = lVar8 < lVar9;
            lVar13 = lVar13 + -1;
            lVar8 = lVar8 + 1;
            plVar7 = plVar7 + 2;
            iVar11 = iVar1;
          } while (lVar6 - lVar9 != lVar13);
        }
        else {
          bVar3 = false;
          iVar11 = iVar5 + 1;
        }
        iVar12 = iVar11 - iVar5;
        if (bVar14) {
          FUN_147f7ed41(plVar2 + (longlong)iVar5 * 2,iVar12);
          bVar14 = false;
          iVar5 = iVar11;
          if (!bVar3) break;
          goto LAB_147f77bae;
        }
LAB_147f77c48:
        if (iVar10 != iVar5) {
          memmove(plVar2 + (longlong)iVar10 * 2,plVar2 + (longlong)iVar5 * 2,(longlong)iVar12 << 4);
        }
        iVar10 = iVar10 + iVar12;
        bVar14 = true;
        iVar5 = iVar11;
      } while (bVar3);
      *(int *)(param_1 + 0x10) = iVar10;
    }
  }
  return;
}



// FUNCTION 147f77c9a FUN_147f77c9a body=212 status=ok
// SIG undefined FUN_147f77c9a(void)

void FUN_147f77c9a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  plVar1 = (longlong *)(param_1 + 0x28);
  FUN_147f77d6e(plVar1,*(undefined4 *)(param_1 + 0x20));
  iVar2 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x18);
    lVar6 = 0;
    do {
      if ((*(longlong *)(lVar4 + lVar6) != 0) && (lVar5 = FUN_147f75f4c(), lVar5 != 0)) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar5);
        }
        iVar3 = *(int *)(param_1 + 0x30);
        *(uint *)(param_1 + 0x30) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x34) < iVar3 + 1U) {
          FUN_140845902(plVar1,iVar3);
        }
        *(longlong *)(*plVar1 + (longlong)iVar3 * 8) = lVar5;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar5);
        }
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar6);
  }
  (**(code **)(*param_2 + 0x90))
            (param_2,*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),0,0);
  return;
}



// FUNCTION 147f77d6e FUN_147f77d6e body=42 status=ok
// SIG undefined FUN_147f77d6e(void)

void FUN_147f77d6e(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_140c6998c();
    return;
  }
  return;
}



// FUNCTION 147f77d9a FUN_147f77d9a body=160 status=ok
// SIG undefined FUN_147f77d9a(void)

undefined8 FUN_147f77d9a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14479d2ce(param_1 + -0x18);
  if (lVar1 == 0) {
    FUN_140056680(&local_28,&DAT_149e01fe8);
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0x18);
    FUN_1400021e4(&local_18,&local_28);
  }
  puVar2 = local_28;
  if (local_20 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"%ls::FGbxAudioGraphManager",puVar2);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147f77e3c FUN_147f77e3c body=475 status=ok
// SIG undefined FUN_147f77e3c(void)

longlong * FUN_147f77e3c(longlong param_1,longlong *param_2,longlong param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 != 0) {
    cVar3 = FUN_144729dda(param_1 + 0x58);
    if (cVar3 != '\0') {
      plVar5 = *(longlong **)(param_3 + 0x38);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar6 = plVar5 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      local_40 = (longlong *)FUN_147f7e83a();
      local_48 = local_40 + 2;
      FUN_147f7e948();
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar5 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      plVar5 = local_48;
      uVar4 = FUN_14479d2ce(param_1 + 0x58);
      (**(code **)(*plVar5 + 0x10))(plVar5,*(undefined8 *)(param_3 + 0x30),uVar4);
      local_58 = *param_4;
      local_50 = param_4[1];
      local_68 = plVar5;
      if (local_50 != 0) {
        LOCK();
        *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
        UNLOCK();
        local_68 = local_48;
      }
      local_60 = local_40;
      if (local_40 == (longlong *)0x0) {
        plVar5 = local_68;
        plVar6 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
        plVar5 = local_48;
        plVar6 = local_40;
      }
      FUN_147f7801a(param_1,&local_68,&local_58);
      plVar2 = local_40;
      *param_2 = (longlong)plVar5;
      param_2[1] = (longlong)plVar6;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_40 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
      }
      goto LAB_147f77e7f;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_147f77e7f:
  plVar5 = (longlong *)param_4[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f7801a FUN_147f7801a body=284 status=ok
// SIG undefined FUN_147f7801a(void)

void FUN_147f7801a(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    uVar6 = *param_3;
    lVar7 = param_3[1];
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
    plVar5 = *(longlong **)(lVar4 + 0x150);
    *(undefined8 *)(lVar4 + 0x148) = uVar6;
    *(longlong *)(lVar4 + 0x150) = lVar7;
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
    FUN_147f75f92(*param_2);
    iVar3 = *(int *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x40) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x44) < iVar3 + 1U) {
      FUN_147f7ed8a((longlong *)(param_1 + 0x38),iVar3);
    }
    lVar4 = *(longlong *)(param_1 + 0x38);
    *(longlong *)(lVar4 + (longlong)iVar3 * 0x10) = *param_2;
    lVar7 = param_2[1];
    *(longlong *)(lVar4 + 8 + (longlong)iVar3 * 0x10) = lVar7;
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
  }
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
  plVar5 = (longlong *)param_3[1];
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
                    /* WARNING: Could not recover jumptable at 0x000147f78087. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147f78136 FUN_147f78136 body=65 status=ok
// SIG undefined FUN_147f78136(void)

void FUN_147f78136(double param_1,double param_2)

{
  uint uVar1;
  double *in_RCX;
  double *in_RDX;
  ulonglong uVar2;
  double *pdVar3;
  
  uVar1 = *(uint *)(in_RCX + 0x21);
  uVar2 = 0;
  if (0 < (int)uVar1) {
    pdVar3 = (double *)in_RCX[0x20];
    if ((double *)in_RCX[0x20] == (double *)0x0) {
      pdVar3 = in_RCX;
    }
    param_1 = *in_RDX;
    uVar2 = 0;
    do {
      param_2 = *pdVar3;
      if (param_1 < param_2) goto LAB_147f78172;
      uVar2 = uVar2 + 1;
      pdVar3 = pdVar3 + 4;
    } while (uVar1 != uVar2);
    uVar2 = (ulonglong)uVar1;
  }
LAB_147f78172:
  FUN_147f78178(param_1,param_2,uVar2);
  return;
}



// FUNCTION 147f78178 FUN_147f78178 body=154 status=ok
// SIG undefined FUN_147f78178(void)

int FUN_147f78178(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar2 = *(int *)(param_1 + 0x108);
  *(uint *)(param_1 + 0x108) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x10c) < iVar2 + 1U) {
    FUN_147f7ee40(param_1,iVar2);
  }
  lVar6 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar6 = param_1;
  }
  lVar7 = (longlong)param_3 * 0x20;
  memmove((void *)(lVar6 + lVar7 + 0x20),(void *)(lVar6 + lVar7),
          (ulonglong)(uint)(iVar2 - param_3) << 5);
  lVar6 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar6 = param_1;
  }
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined8 *)(lVar6 + lVar7) = *param_2;
  ((undefined8 *)(lVar6 + lVar7))[1] = uVar3;
  puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar7);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  return param_3;
}



// FUNCTION 147f78212 FUN_147f78212 body=137 status=ok
// SIG undefined FUN_147f78212(void)

void FUN_147f78212(longlong param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  
  uVar1 = *(uint *)((longlong)param_2 + 0x108);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x108);
    *(uint *)(param_1 + 0x108) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x10c) - iVar2) < uVar1) {
      FUN_147f7ee40(param_1,iVar2);
    }
    _Src = *(void **)((longlong)param_2 + 0x100);
    if (*(void **)((longlong)param_2 + 0x100) == (void *)0x0) {
      _Src = param_2;
    }
    lVar3 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar3 = param_1;
    }
    memcpy((void *)((longlong)iVar2 * 0x20 + lVar3),_Src,(longlong)(int)uVar1 << 5);
    return;
  }
  return;
}



// FUNCTION 147f7829c FUN_147f7829c body=1462 status=ok
// SIG undefined FUN_147f7829c(void)

void FUN_147f7829c(longlong param_1)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double *pdVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong *plVar12;
  double *pdVar13;
  longlong lVar14;
  double *pdVar15;
  int iVar16;
  double *pdVar17;
  double *pdVar18;
  ulonglong uVar19;
  double *pdVar20;
  double *pdVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  double *pdVar25;
  double *pdVar26;
  double *pdVar27;
  int iVar28;
  bool bVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_378;
  iVar22 = *(int *)(param_1 + 0x108);
  if (1 < (longlong)iVar22) {
    lVar14 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar14 = param_1;
    }
    memset(local_348,0,0x2f0);
    local_350 = (longlong)iVar22 * 0x20 + lVar14 + -0x20;
    local_358 = lVar14;
    fVar30 = logf((float)iVar22);
    local_348[0] = (int)(longlong)(fVar30 + fVar30);
    plVar12 = &local_358;
    do {
      pdVar18 = (double *)*plVar12;
      pdVar17 = (double *)plVar12[1];
      iVar22 = (int)plVar12[2];
      iVar28 = (int)((ulonglong)((longlong)pdVar17 - (longlong)pdVar18) >> 5);
      uVar23 = iVar28 + 1;
      pdVar15 = pdVar18;
      pdVar13 = pdVar18;
      pdVar20 = pdVar17;
      if (iVar22 != 0) {
LAB_147f7834d:
        if (8 < (int)uVar23) {
          uVar19 = (ulonglong)(uVar23 >> 1);
          dVar2 = pdVar15[uVar19 * 4];
          dVar3 = (pdVar15 + uVar19 * 4)[1];
          dVar4 = pdVar15[uVar19 * 4 + 2];
          dVar5 = (pdVar15 + uVar19 * 4 + 2)[1];
          dVar6 = *pdVar15;
          dVar7 = pdVar15[1];
          dVar8 = pdVar15[3];
          pdVar15[uVar19 * 4 + 2] = pdVar15[2];
          (pdVar15 + uVar19 * 4 + 2)[1] = dVar8;
          pdVar15[uVar19 * 4] = dVar6;
          (pdVar15 + uVar19 * 4)[1] = dVar7;
          pdVar15[2] = dVar4;
          pdVar15[3] = dVar5;
          *pdVar15 = dVar2;
          pdVar15[1] = dVar3;
          pdVar25 = pdVar20 + 4;
          pdVar13 = pdVar15;
          do {
            pdVar9 = pdVar13 + 4;
            pdVar21 = pdVar13 + 4;
            do {
              pdVar13 = pdVar21;
              pdVar27 = pdVar9;
              if (pdVar20 < pdVar13) break;
              pdVar9 = pdVar27 + 4;
              pdVar21 = pdVar13 + 4;
            } while (*pdVar13 < *pdVar15 || *pdVar13 == *pdVar15);
            pdVar9 = pdVar25 + -8;
            do {
              pdVar21 = pdVar25;
              pdVar26 = pdVar9;
              pdVar25 = pdVar21 + -4;
              if (pdVar25 <= pdVar15) break;
              pdVar9 = pdVar26 + -4;
            } while (*pdVar15 < *pdVar25 || *pdVar15 == *pdVar25);
            if (pdVar25 < pdVar13) goto LAB_147f7844f;
            dVar2 = *pdVar13;
            dVar3 = pdVar13[1];
            dVar4 = pdVar13[2];
            dVar5 = pdVar13[3];
            dVar6 = *pdVar25;
            dVar7 = pdVar21[-3];
            dVar8 = pdVar21[-1];
            pdVar13[2] = pdVar21[-2];
            pdVar13[3] = dVar8;
            *pdVar13 = dVar6;
            pdVar13[1] = dVar7;
            pdVar21[-2] = dVar4;
            pdVar21[-1] = dVar5;
            *pdVar25 = dVar2;
            pdVar21[-3] = dVar3;
          } while( true );
        }
        if (pdVar15 < pdVar20) {
          do {
            pdVar18 = pdVar15;
            if (pdVar15 + 4 <= pdVar20) {
              uVar31 = SUB84(*pdVar15,0);
              uVar32 = (undefined4)((ulonglong)*pdVar15 >> 0x20);
              pdVar17 = pdVar15 + 4;
              do {
                dVar2 = *pdVar17;
                if ((double)CONCAT44(uVar32,uVar31) <= dVar2 &&
                    dVar2 != (double)CONCAT44(uVar32,uVar31)) {
                  pdVar18 = pdVar17;
                }
                uVar10 = SUB84(dVar2,0);
                uVar11 = (int)((ulonglong)dVar2 >> 0x20);
                if (dVar2 <= (double)CONCAT44(uVar32,uVar31)) {
                  uVar10 = uVar31;
                  uVar11 = uVar32;
                }
                uVar32 = uVar11;
                uVar31 = uVar10;
                pdVar17 = pdVar17 + 4;
              } while (pdVar17 <= pdVar20);
            }
            local_58 = *pdVar18;
            uStack_50 = pdVar18[1];
            local_48 = pdVar18[2];
            dStack_40 = pdVar18[3];
            dVar5 = local_58;
            dVar6 = uStack_50;
            dVar2 = *pdVar20;
            dVar3 = pdVar20[1];
            dVar4 = pdVar20[3];
            pdVar18[2] = pdVar20[2];
            pdVar18[3] = dVar4;
            *pdVar18 = dVar2;
            pdVar18[1] = dVar3;
            local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
            pdVar20[2] = local_48;
            pdVar20[3] = dStack_40;
            *(undefined4 *)pdVar20 = (undefined4)local_58;
            *(undefined4 *)((longlong)pdVar20 + 4) = local_58._4_4_;
            *(undefined4 *)(pdVar20 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)pdVar20 + 0xc) = uStack_50._4_4_;
            pdVar20 = pdVar20 + -4;
            local_58 = dVar5;
            uStack_50 = dVar6;
          } while (pdVar15 < pdVar20);
        }
        goto LAB_147f7881b;
      }
LAB_147f7851f:
      if (uVar23 != 0) {
        iVar22 = (iVar28 - (iVar28 + -1 >> 0x1f)) + -1 >> 1;
        iVar28 = iVar22;
joined_r0x000147f78546:
        do {
          iVar24 = iVar22 * 2 + 1;
          if (iVar24 < (int)uVar23) {
            iVar16 = iVar22 * 2 + 2;
            if ((iVar16 < (int)uVar23) &&
               (pdVar13[(longlong)iVar24 * 4] < pdVar13[(longlong)iVar16 * 4] ||
                pdVar13[(longlong)iVar24 * 4] == pdVar13[(longlong)iVar16 * 4])) {
              iVar24 = iVar16;
            }
            if (pdVar13[(longlong)iVar22 * 4] <= pdVar13[(longlong)iVar24 * 4] &&
                pdVar13[(longlong)iVar24 * 4] != pdVar13[(longlong)iVar22 * 4]) {
              pdVar20 = pdVar13 + (longlong)iVar22 * 4;
              pdVar18 = pdVar13 + (longlong)iVar24 * 4;
              local_58 = *pdVar20;
              uStack_50 = pdVar20[1];
              local_48 = pdVar20[2];
              dStack_40 = pdVar20[3];
              dVar5 = local_58;
              dVar6 = uStack_50;
              dVar2 = *pdVar18;
              dVar3 = pdVar18[1];
              dVar4 = pdVar18[3];
              pdVar20[2] = pdVar18[2];
              pdVar20[3] = dVar4;
              *pdVar20 = dVar2;
              pdVar20[1] = dVar3;
              local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
              uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
              pdVar18[2] = local_48;
              pdVar18[3] = dStack_40;
              *(undefined4 *)pdVar18 = (undefined4)local_58;
              *(undefined4 *)((longlong)pdVar18 + 4) = local_58._4_4_;
              *(undefined4 *)(pdVar18 + 1) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)pdVar18 + 0xc) = uStack_50._4_4_;
              local_58 = dVar5;
              uStack_50 = dVar6;
              iVar22 = iVar24;
              goto joined_r0x000147f78546;
            }
          }
          bVar29 = iVar28 != 0;
          iVar22 = iVar28 + -1;
          iVar28 = iVar22;
        } while (bVar29);
        if (1 < (int)uVar23) {
          uVar19 = (ulonglong)uVar23 - 1;
          local_58 = *pdVar13;
          uStack_50 = pdVar13[1];
          local_48 = pdVar13[2];
          dStack_40 = pdVar13[3];
          dVar5 = local_58;
          dVar6 = uStack_50;
          dVar2 = pdVar13[uVar19 * 4];
          dVar3 = (pdVar13 + uVar19 * 4)[1];
          dVar4 = (pdVar13 + uVar19 * 4 + 2)[1];
          pdVar13[2] = pdVar13[uVar19 * 4 + 2];
          pdVar13[3] = dVar4;
          *pdVar13 = dVar2;
          pdVar13[1] = dVar3;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          pdVar13[uVar19 * 4 + 2] = local_48;
          (pdVar13 + uVar19 * 4 + 2)[1] = dStack_40;
          pdVar20 = pdVar13 + uVar19 * 4;
          *(undefined4 *)pdVar20 = (undefined4)local_58;
          *(undefined4 *)((longlong)pdVar20 + 4) = local_58._4_4_;
          *(undefined4 *)(pdVar20 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)pdVar20 + 0xc) = uStack_50._4_4_;
          local_58 = dVar5;
          uStack_50 = dVar6;
          if (uVar23 != 2) {
            do {
              iVar22 = 0;
              iVar24 = 1;
              iVar28 = 0;
              do {
                iVar22 = iVar22 + 2;
                iVar16 = iVar24;
                if (((longlong)iVar22 < (longlong)uVar19) &&
                   (pdVar13[(longlong)iVar24 * 4] < pdVar13[(longlong)iVar22 * 4] ||
                    pdVar13[(longlong)iVar24 * 4] == pdVar13[(longlong)iVar22 * 4])) {
                  iVar16 = iVar22;
                }
                if (pdVar13[(longlong)iVar16 * 4] < pdVar13[(longlong)iVar28 * 4] ||
                    pdVar13[(longlong)iVar16 * 4] == pdVar13[(longlong)iVar28 * 4]) break;
                pdVar18 = pdVar13 + (longlong)iVar28 * 4;
                pdVar20 = pdVar13 + (longlong)iVar16 * 4;
                dVar2 = *pdVar18;
                dVar3 = pdVar18[1];
                dVar4 = pdVar18[2];
                dVar5 = pdVar18[3];
                dVar6 = *pdVar20;
                dVar7 = pdVar20[1];
                dVar8 = pdVar20[3];
                pdVar18[2] = pdVar20[2];
                pdVar18[3] = dVar8;
                *pdVar18 = dVar6;
                pdVar18[1] = dVar7;
                pdVar20[2] = dVar4;
                pdVar20[3] = dVar5;
                *pdVar20 = dVar2;
                pdVar20[1] = dVar3;
                iVar22 = iVar16 * 2;
                iVar24 = iVar16 * 2 + 1;
                iVar28 = iVar16;
              } while ((longlong)iVar24 < (longlong)uVar19);
              uVar1 = uVar19 - 1;
              local_58 = *pdVar13;
              uStack_50 = pdVar13[1];
              local_48 = pdVar13[2];
              dStack_40 = pdVar13[3];
              dVar5 = local_58;
              dVar6 = uStack_50;
              dVar2 = pdVar13[uVar1 * 4];
              dVar3 = (pdVar13 + uVar1 * 4)[1];
              dVar4 = (pdVar13 + uVar1 * 4 + 2)[1];
              pdVar13[2] = pdVar13[uVar1 * 4 + 2];
              pdVar13[3] = dVar4;
              *pdVar13 = dVar2;
              pdVar13[1] = dVar3;
              local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
              uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
              pdVar13[uVar1 * 4 + 2] = local_48;
              (pdVar13 + uVar1 * 4 + 2)[1] = dStack_40;
              pdVar20 = pdVar13 + uVar1 * 4;
              *(undefined4 *)pdVar20 = (undefined4)local_58;
              *(undefined4 *)((longlong)pdVar20 + 4) = local_58._4_4_;
              *(undefined4 *)(pdVar20 + 1) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)pdVar20 + 0xc) = uStack_50._4_4_;
              bVar29 = 2 < uVar19;
              uVar19 = uVar1;
              local_58 = dVar5;
              uStack_50 = dVar6;
            } while (bVar29);
          }
        }
      }
LAB_147f7881b:
      plVar12 = plVar12 + -3;
    } while (&local_358 <= plVar12);
  }
  if ((local_38 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147f7844f:
  local_58 = *pdVar15;
  uStack_50 = pdVar15[1];
  local_48 = pdVar15[2];
  dStack_40 = pdVar15[3];
  dVar5 = local_58;
  dVar6 = uStack_50;
  dVar2 = *pdVar25;
  dVar3 = pdVar21[-3];
  dVar4 = pdVar21[-1];
  pdVar15[2] = pdVar21[-2];
  pdVar15[3] = dVar4;
  *pdVar15 = dVar2;
  pdVar15[1] = dVar3;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  pdVar21[-2] = local_48;
  pdVar21[-1] = dStack_40;
  *(undefined4 *)pdVar25 = (undefined4)local_58;
  *(undefined4 *)((longlong)pdVar21 + -0x1c) = local_58._4_4_;
  *(undefined4 *)(pdVar21 + -3) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)pdVar21 + -0x14) = uStack_50._4_4_;
  iVar22 = iVar22 + -1;
  pdVar21 = pdVar21 + -8;
  local_58 = dVar5;
  uStack_50 = dVar6;
  if ((longlong)pdVar26 - (longlong)pdVar18 < (longlong)pdVar17 - (longlong)pdVar27) {
    if (pdVar13 < pdVar20) {
      *plVar12 = (longlong)pdVar13;
      plVar12[1] = (longlong)pdVar20;
      *(int *)(plVar12 + 2) = iVar22;
      plVar12 = plVar12 + 3;
    }
    pdVar13 = pdVar15;
    pdVar17 = pdVar26;
    if (pdVar25 <= pdVar15 + 4) goto LAB_147f7881b;
  }
  else {
    if (pdVar15 + 4 < pdVar25) {
      *plVar12 = (longlong)pdVar15;
      plVar12[1] = (longlong)pdVar21;
      *(int *)(plVar12 + 2) = iVar22;
      plVar12 = plVar12 + 3;
    }
    pdVar15 = pdVar27;
    pdVar21 = pdVar20;
    pdVar17 = pdVar20;
    if (pdVar20 <= pdVar13) goto LAB_147f7881b;
  }
  iVar28 = (int)((ulonglong)((longlong)pdVar17 - (longlong)pdVar15) >> 5);
  uVar23 = iVar28 + 1;
  pdVar18 = pdVar15;
  pdVar15 = pdVar13;
  pdVar20 = pdVar21;
  if (iVar22 == 0) goto LAB_147f7851f;
  goto LAB_147f7834d;
}



// FUNCTION 147f78854 FUN_147f78854 body=548 status=ok
// SIG undefined FUN_147f78854(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147f78854(double *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  double *pdVar11;
  bool bVar12;
  double *pdVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  double dVar21;
  undefined1 auVar22 [16];
  
  *(undefined4 *)(param_2 + 0x108) = 0;
  if (*(int *)(param_2 + 0x10c) < 0) {
    FUN_147f7e7cc(param_2,0);
  }
  pdVar11 = (double *)param_1[0x22];
  if (pdVar11 == (double *)0x0) {
    FUN_147f78212(param_2,param_1);
    *(undefined4 *)(param_1 + 0x21) = 0;
    if (*(int *)((longlong)param_1 + 0x10c) < 0) {
      FUN_147f7e7cc(param_1,0);
      return;
    }
  }
  else {
    pdVar13 = (double *)param_1[0x20];
    if ((double *)param_1[0x20] == (double *)0x0) {
      pdVar13 = param_1;
    }
    iVar4 = *(int *)(param_1 + 0x21);
    if ((longlong)iVar4 != 0) {
      auVar22._8_4_ = (int)((ulonglong)DAT_14cb262c8 >> 0x20);
      auVar22._0_8_ = DAT_14cb262c8;
      auVar22._12_4_ = 0x45300000;
      dVar21 = ((((double)CONCAT44(0x43300000,(int)DAT_14cb262c8) - 4503599627370496.0) +
                (auVar22._8_8_ - 1.9342813113834067e+25)) * _DAT_14cb262c0 - *pdVar11) * pdVar11[2]
               + pdVar11[1];
      lVar19 = 0;
      do {
        if (*(double *)((longlong)pdVar13 + lVar19) <= dVar21) {
          iVar16 = *(int *)(param_2 + 0x108);
          *(uint *)(param_2 + 0x108) = iVar16 + 1U;
          if (*(uint *)(param_2 + 0x10c) < iVar16 + 1U) {
            FUN_147f7ee40(param_2,iVar16);
          }
          puVar1 = (undefined4 *)((longlong)pdVar13 + lVar19);
          lVar14 = *(longlong *)(param_2 + 0x100);
          if (*(longlong *)(param_2 + 0x100) == 0) {
            lVar14 = param_2;
          }
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          uVar8 = puVar1[2];
          uVar9 = puVar1[3];
          uVar10 = *(undefined8 *)(puVar1 + 6);
          puVar2 = (undefined8 *)(lVar14 + 0x10 + (longlong)iVar16 * 0x20);
          *puVar2 = *(undefined8 *)(puVar1 + 4);
          puVar2[1] = uVar10;
          puVar1 = (undefined4 *)(lVar14 + (longlong)iVar16 * 0x20);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          puVar1[2] = uVar8;
          puVar1[3] = uVar9;
        }
        lVar19 = lVar19 + 0x20;
      } while ((longlong)iVar4 * 0x20 != lVar19);
      iVar4 = *(int *)(param_1 + 0x21);
      lVar19 = (longlong)iVar4;
      if (lVar19 != 0) {
        pdVar11 = (double *)param_1[0x20];
        if ((double *)param_1[0x20] == (double *)0x0) {
          pdVar11 = param_1;
        }
        iVar20 = 0;
        bVar12 = *pdVar11 <= dVar21;
        iVar16 = 0;
        do {
          lVar14 = (longlong)iVar16;
          iVar5 = iVar16 + 1;
          if (iVar16 + 1 < iVar4) {
            iVar5 = iVar4;
          }
          pdVar13 = pdVar11 + lVar14 * 4 + 4;
          iVar17 = iVar16;
          lVar15 = lVar14;
          do {
            lVar15 = lVar15 + 1;
            iVar18 = iVar5;
            if (lVar19 <= lVar15) break;
            dVar3 = *pdVar13;
            iVar17 = iVar17 + 1;
            pdVar13 = pdVar13 + 4;
            iVar18 = iVar17;
          } while (bVar12 == dVar3 <= dVar21);
          if (bVar12 == false) {
            if (iVar20 != iVar16) {
              memmove(pdVar11 + (longlong)iVar20 * 4,pdVar11 + lVar14 * 4,
                      (longlong)(iVar18 - iVar16) << 5);
            }
            iVar20 = iVar20 + (iVar18 - iVar16);
          }
          bVar12 = (bool)(bVar12 ^ 1);
          iVar16 = iVar18;
        } while (lVar15 < lVar19);
        *(int *)(param_1 + 0x21) = iVar20;
      }
    }
  }
  return;
}



// FUNCTION 147f78a78 FUN_147f78a78 body=94 status=ok
// SIG undefined FUN_147f78a78(void)

void FUN_147f78a78(longlong param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x108) = 0;
  if (*(int *)(param_2 + 0x10c) < 0) {
    FUN_147f7e7cc(param_2,0);
  }
  FUN_147f78212(param_2,param_1);
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (-1 < *(int *)(param_1 + 0x10c)) {
    return;
  }
  FUN_147f7e7cc(param_1,0);
  return;
}



// FUNCTION 147f78ad6 FUN_147f78ad6 body=299 status=ok
// SIG undefined FUN_147f78ad6(void)

void FUN_147f78ad6(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  code *local_50;
  longlong **local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1438a36a2(param_1 + 0xb,&local_30,1);
  (**(code **)(*param_1 + 0xa8))(param_1,&local_40);
  local_60 = local_40;
  local_58 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  local_48 = &local_68;
  local_50 = FUN_1438a6edc;
  local_68 = param_1;
  FUN_1408f9750(param_1);
  plVar3 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f78c02 FUN_147f78c02 body=9 status=ok
// SIG undefined FUN_147f78c02(void)

void FUN_147f78c02(longlong param_1)

{
  FUN_1438a3518(param_1 + 0x58);
  return;
}



// FUNCTION 147f78c0c FUN_147f78c0c body=142 status=ok
// SIG undefined FUN_147f78c0c(void)

void FUN_147f78c0c(undefined8 param_1,longlong param_2,char param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined4 *local_38;
  code *local_30;
  undefined8 *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = &local_1c;
  local_1c = 0;
  local_28 = &local_48;
  local_30 = FUN_1438a6f68;
  local_48 = param_1;
  local_40 = param_2;
  FUN_1408f9750();
  if ((param_3 != '\0') && (*(undefined4 *)(param_2 + 0x108) = 0, *(int *)(param_2 + 0x10c) < 0)) {
    FUN_147f7e7cc(param_2,0);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f78c9c FUN_147f78c9c body=75 status=ok
// SIG undefined FUN_147f78c9c(void)

void FUN_147f78c9c(longlong param_1)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(undefined1 *)(param_1 + 0x50) = 1;
  local_10 = param_1;
  FUN_147f7eede(*(longlong *)(param_1 + 0x40) + 0x130);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f78ce8 FUN_147f78ce8 body=5 status=ok
// SIG undefined FUN_147f78ce8(void)

undefined8 FUN_147f78ce8(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// FUNCTION 147f78cfa FUN_147f78cfa body=1 status=ok
// SIG undefined FUN_147f78cfa(void)

void FUN_147f78cfa(void)

{
  return;
}



// FUNCTION 147f78dac FUN_147f78dac body=48 status=ok
// SIG undefined FUN_147f78dac(void)

void FUN_147f78dac(longlong *param_1)

{
  (**(code **)(*param_1 + 0x90))();
  if ((char)param_1[10] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000147f78dce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x80))(param_1);
    return;
  }
  return;
}



// FUNCTION 147f78de2 FUN_147f78de2 body=174 status=ok
// SIG undefined FUN_147f78de2(void)

void FUN_147f78de2(longlong param_1)

{
  int iVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  code *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_1 + 0x38) = 1;
  iVar1 = *(int *)(param_1 + 0x184);
  FUN_1403d8100(*(undefined8 *)(param_1 + 0x178),*(undefined4 *)(param_1 + 0x180));
  *(undefined4 *)(param_1 + 0x180) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x184) != 0)) {
    FUN_1470e8cfe(param_1 + 0x178,0);
  }
  FUN_147f76120(param_1 + 0x178,*(longlong *)(param_1 + 0x48) + 0x48);
  local_28 = &local_38;
  local_30 = FUN_1438a6fc0;
  local_38 = param_1;
  FUN_14480914e(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f78e92 FUN_147f78e92 body=78 status=ok
// SIG undefined FUN_147f78e92(void)

void FUN_147f78e92(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  code *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &local_20;
  local_18 = FUN_1438a7004;
  local_20 = param_1;
  FUN_14480914e();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f78ee2 FUN_147f78ee2 body=54 status=ok
// SIG undefined FUN_147f78ee2(void)

void FUN_147f78ee2(longlong param_1)

{
  if (*(int *)(param_1 + 0x160) < 1) {
    return;
  }
  FUN_147f78f18();
  FUN_147f78c0c(param_1,param_1 + 0x58,1);
  return;
}



// FUNCTION 147f78f18 FUN_147f78f18 body=319 status=ok
// SIG undefined FUN_147f78f18(void)

void FUN_147f78f18(longlong param_1)

{
  double *pdVar1;
  uint uVar2;
  double *pdVar3;
  double *pdVar4;
  ulonglong uVar5;
  double *pdVar6;
  undefined1 auStack_198 [40];
  longlong local_170;
  double *local_168;
  code *local_160;
  longlong *local_158;
  double local_150 [32];
  double *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_50 = (double *)0x0;
  local_48 = 0x800000000;
  pdVar1 = (double *)(param_1 + 0x58);
  FUN_147f78a78(pdVar1,local_150);
  pdVar4 = local_50;
  if (local_50 == (double *)0x0) {
    pdVar4 = local_150;
  }
  if ((longlong)(int)local_48 != 0) {
    pdVar6 = pdVar4 + (longlong)(int)local_48 * 4;
    do {
      local_160 = FUN_1438a704c;
      local_170 = param_1;
      local_168 = pdVar4;
      local_158 = &local_170;
      FUN_14480914e(param_1,&local_160);
      uVar2 = *(uint *)(param_1 + 0x160);
      uVar5 = 0;
      if (0 < (int)uVar2) {
        pdVar3 = *(double **)(param_1 + 0x158);
        if (*(double **)(param_1 + 0x158) == (double *)0x0) {
          pdVar3 = pdVar1;
        }
        uVar5 = 0;
        do {
          if (*pdVar4 < *pdVar3) goto LAB_147f79005;
          uVar5 = uVar5 + 1;
          pdVar3 = pdVar3 + 4;
        } while (uVar2 != uVar5);
        uVar5 = (ulonglong)uVar2;
      }
LAB_147f79005:
      FUN_147f78178(pdVar1,pdVar4,uVar5);
      pdVar4 = pdVar4 + 4;
    } while (pdVar4 != pdVar6);
  }
  if (local_50 != (double *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f79120 FUN_147f79120 body=163 status=ok
// SIG undefined FUN_147f79120(void)

void FUN_147f79120(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  code *local_30;
  longlong *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_1 + 0x38) = 1;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x148);
  if (lVar1 != 0) {
    FUN_1403c747e(lVar1,&local_20,*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x38));
    FUN_1403c75f4(param_1 + 0x178,&local_20);
    if (local_20 != 0) {
      *(int *)(local_20 + 0x108) = *(int *)(local_20 + 0x108) + -1;
      FUN_140d274d8();
    }
  }
  local_28 = &local_20;
  local_30 = FUN_1438a70a0;
  local_20 = param_1;
  FUN_14480914e(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f791c4 FUN_147f791c4 body=386 status=ok
// SIG undefined FUN_147f791c4(void)

void FUN_147f791c4(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong local_60;
  code *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x178) != 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x178) + 0x108);
    *piVar1 = *piVar1 + -1;
    FUN_140d274d8();
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  lVar8 = *(longlong *)(param_1 + 0x180);
  uVar6 = 0;
  if ((longlong)*(int *)(param_1 + 0x188) != 0) {
    lVar9 = (longlong)*(int *)(param_1 + 0x188) << 6;
    plVar7 = (longlong *)(lVar8 + 0x20);
    do {
      cVar4 = FUN_144904448(plVar7);
      if (cVar4 != '\0') {
        if ((plVar7[3] == 0) || ((DAT_14cb26569 & 1) == 0)) {
          FUN_14072d42a(plVar7,0);
        }
        else {
          plVar3 = (longlong *)*plVar7;
          if (((plVar3 != (longlong *)0x0) && (plVar7[1] != -1)) && (*plVar3 == plVar7[1])) {
            *(int *)(plVar3 + 0x21) = (int)plVar3[0x21] + 1;
            uVar5 = FUN_140ba21e6(plVar7);
            local_68 = 0;
            FUN_14084a448(plVar3,&local_48,plVar7[3],uVar5);
            local_48 = 0;
            local_40 = 0xffffffffffffffff;
            *(int *)(plVar3 + 0x21) = (int)plVar3[0x21] + -1;
            FUN_140d274d8(plVar3);
          }
        }
      }
      plVar7 = plVar7 + 8;
      lVar9 = lVar9 + -0x40;
    } while (lVar9 != 0);
    uVar6 = *(undefined4 *)(param_1 + 0x188);
    lVar8 = *(longlong *)(param_1 + 0x180);
  }
  iVar2 = *(int *)(param_1 + 0x18c);
  FUN_147f70cff(lVar8,uVar6);
  *(undefined4 *)(param_1 + 0x188) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x18c) != 0)) {
    FUN_147f7f0f4(param_1 + 0x180);
  }
  local_50 = &local_60;
  local_58 = FUN_1438a70e4;
  local_60 = param_1;
  FUN_14480914e(param_1);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f79348 FUN_147f79348 body=75 status=ok
// SIG undefined FUN_147f79348(void)

void FUN_147f79348(longlong param_1)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(undefined1 *)(param_1 + 0x50) = 1;
  local_10 = param_1;
  FUN_147f7eede(*(longlong *)(param_1 + 0x40) + 0x130);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f79394 FUN_147f79394 body=716 status=ok
// SIG undefined FUN_147f79394(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147f79394(double *param_1)

{
  longlong *plVar1;
  int *piVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  double *pdVar13;
  bool bVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined8 *puVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  code *local_1a8;
  double **local_1a0;
  double *local_198;
  longlong *local_190;
  longlong local_180 [32];
  longlong *local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_80 = (longlong *)0x0;
  local_78 = 0x800000000;
  FUN_147f78854(param_1 + 0xb,local_180);
  plVar15 = local_80;
  if (local_80 == (longlong *)0x0) {
    plVar15 = local_180;
  }
  if ((longlong)(int)local_78 != 0) {
    lVar16 = (longlong)(int)local_78 << 5;
    do {
      local_1a8 = FUN_1438a712c;
      local_1a0 = &local_198;
      local_198 = param_1;
      local_190 = plVar15;
      FUN_14480914e(param_1,&local_1a8);
      plVar15 = plVar15 + 4;
      lVar16 = lVar16 + -0x20;
    } while (lVar16 != 0);
  }
  FUN_1438a38f2(param_1 + 0xb,&local_198);
  plVar15 = local_190;
  auVar19._8_4_ = (int)((ulonglong)DAT_14cb262c8 >> 0x20);
  auVar19._0_8_ = DAT_14cb262c8;
  auVar19._12_4_ = 0x45300000;
  dVar18 = (((double)CONCAT44(0x43300000,(int)DAT_14cb262c8) - 4503599627370496.0) +
           (auVar19._8_8_ - 1.9342813113834067e+25)) * _DAT_14cb262c0;
  dVar4 = *local_198;
  dVar5 = local_198[2];
  dVar6 = local_198[1];
  if (local_190 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_190 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_190)(local_190);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  iVar10 = *(int *)(param_1 + 0x31);
  if (0 < iVar10) {
    pdVar3 = param_1 + 0x30;
    uVar12 = 0;
    bVar14 = false;
LAB_147f794eb:
    do {
      dVar7 = *pdVar3;
      puVar17 = (undefined8 *)(uVar12 * 0x40 + 0x20 + (longlong)dVar7);
      cVar9 = FUN_144904448(puVar17);
      if (cVar9 != '\0') {
        pdVar13 = (double *)((longlong)dVar7 + uVar12 * 0x40);
        if ((pdVar13[1] <= 9.999999747378752e-05) ||
           ((dVar18 - dVar4) * dVar5 + dVar6 < pdVar13[1] + *pdVar13)) goto LAB_147f7957c;
        if ((pdVar13[7] == 0.0) || ((DAT_14cb26569 & 1) == 0)) {
          FUN_14072d42a(puVar17,0);
        }
        else {
          pdVar8 = (double *)*puVar17;
          if (((pdVar8 != (double *)0x0) && (pdVar13[5] != -NAN)) && (*pdVar8 == pdVar13[5])) {
            *(int *)(pdVar8 + 0x21) = *(int *)(pdVar8 + 0x21) + 1;
            uVar11 = FUN_140ba21e6(puVar17);
            local_1b8 = 0;
            FUN_14084a448(pdVar8,&local_198,pdVar13[7],uVar11);
            local_198 = (double *)0x0;
            local_190 = (longlong *)0xffffffffffffffff;
            *(int *)(pdVar8 + 0x21) = *(int *)(pdVar8 + 0x21) + -1;
            FUN_140d274d8(pdVar8);
          }
        }
      }
      FUN_147f7f00e(pdVar3,uVar12 & 0xffffffff);
      bVar14 = true;
      if ((longlong)*(int *)(param_1 + 0x31) <= (longlong)uVar12) goto LAB_147f79651;
    } while( true );
  }
LAB_147f795e8:
  if ((*(int *)(param_1 + 0x2c) < 1) && (iVar10 == 0)) {
    (**(code **)((longlong)*param_1 + 0x90))(param_1);
  }
  if (local_80 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147f7957c:
  uVar12 = uVar12 + 1;
  iVar10 = *(int *)(param_1 + 0x31);
  if ((longlong)iVar10 <= (longlong)uVar12) goto LAB_147f795e2;
  goto LAB_147f794eb;
LAB_147f795e2:
  if (bVar14) {
LAB_147f79651:
    FUN_147f7efd0(pdVar3);
    iVar10 = *(int *)(param_1 + 0x31);
  }
  goto LAB_147f795e8;
}



// FUNCTION 147f79662 FUN_147f79662 body=134 status=ok
// SIG undefined FUN_147f79662(void)

void FUN_147f79662(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[0x30];
  uVar1 = 0;
  if ((longlong)(int)param_1[0x31] != 0) {
    lVar2 = (longlong)(int)param_1[0x31] << 6;
    lVar3 = lVar3 + 0x20;
    do {
      FUN_14072d42a(lVar3,0);
      lVar3 = lVar3 + 0x40;
      lVar2 = lVar2 + -0x40;
    } while (lVar2 != 0);
    uVar1 = (undefined4)param_1[0x31];
    lVar3 = param_1[0x30];
  }
  FUN_147f70cff(lVar3,uVar1);
  *(undefined4 *)(param_1 + 0x31) = 0;
  if (*(int *)((longlong)param_1 + 0x18c) != 0) {
    FUN_147f7f0f4(param_1 + 0x30);
  }
                    /* WARNING: Could not recover jumptable at 0x000147f796d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}



// FUNCTION 147f796e8 FUN_147f796e8 body=269 status=ok
// SIG undefined FUN_147f796e8(void)

void FUN_147f796e8(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 7) = 1;
  lVar3 = param_1[9];
  plVar4 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14acb7dd0;
  plVar1 = plVar4 + 2;
  FUN_147f819d6(plVar1,*(undefined8 *)(lVar3 + 0x38),*(undefined8 *)(lVar3 + 0x40));
  local_48 = plVar1;
  local_38 = plVar1;
  local_30 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    FUN_1438a36a2(param_1 + 0xb,&local_38,1);
    local_40 = (longlong *)0x0;
    (**(code **)(*param_1 + 0xb0))(param_1);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    FUN_1438a36a2(param_1 + 0xb,&local_38,1);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_40 = plVar4;
    (**(code **)(*param_1 + 0xb0))(param_1);
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f797f6 FUN_147f797f6 body=222 status=ok
// SIG undefined FUN_147f797f6(void)

void FUN_147f797f6(longlong param_1)

{
  double *pdVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  double *pdVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pdVar1 = (double *)(param_1 + 0x58);
  uStack_38 = 0;
  uStack_34 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_3c = 0;
  uVar4 = *(uint *)(param_1 + 0x160);
  uVar6 = 0;
  if (0 < (int)uVar4) {
    pdVar5 = *(double **)(param_1 + 0x158);
    if (*(double **)(param_1 + 0x158) == (double *)0x0) {
      pdVar5 = pdVar1;
    }
    uVar6 = 0;
    do {
      if (0.0 < *pdVar5) goto LAB_147f7985e;
      uVar6 = uVar6 + 1;
      pdVar5 = pdVar5 + 4;
    } while (uVar4 != uVar6);
    uVar6 = (ulonglong)uVar4;
  }
LAB_147f7985e:
  FUN_147f78178(pdVar1,&local_48,uVar6);
  FUN_1438a38f2(pdVar1,&local_58);
  FUN_147f81b60(local_58);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar3 = (int *)((longlong)local_50 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_147f78c0c(param_1,pdVar1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f7990e FUN_147f7990e body=319 status=ok
// SIG undefined FUN_147f7990e(void)

undefined8 * FUN_147f7990e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 0x48);
  param_1 = param_1 + 400;
  plVar4 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14acb7dd0;
  plVar1 = plVar4 + 2;
  FUN_147f819d6(plVar1,*(undefined8 *)(lVar3 + 0x38),*(undefined8 *)(lVar3 + 0x48));
  local_40 = plVar1;
  local_38 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    FUN_1438a36a2(param_1,&local_40,1);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    FUN_1438a36a2(param_1,&local_40,1);
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
  FUN_1438a38f2(param_1,&local_50);
  *param_2 = local_50;
  param_2[1] = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f79a84 FUN_147f79a84 body=75 status=ok
// SIG undefined FUN_147f79a84(void)

void FUN_147f79a84(longlong param_1)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(undefined1 *)(param_1 + 0x50) = 1;
  local_10 = param_1;
  FUN_147f7eede(*(longlong *)(param_1 + 0x40) + 0x130);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f79ad0 FUN_147f79ad0 body=1062 status=ok
// SIG undefined FUN_147f79ad0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147f79ad0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  double dVar9;
  byte bVar10;
  uint uVar11;
  double *pdVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  double **ppdVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  double *local_1a0;
  longlong *local_198;
  double *local_190;
  longlong *local_188;
  undefined8 local_180;
  undefined4 local_178;
  double **local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar17 = param_1[9];
  if (0 < (int)param_1[0x2c]) {
    plVar3 = param_1 + 0xb;
    local_90 = (double **)0x0;
    local_88 = 0x800000000;
    FUN_147f78854(plVar3,&local_190);
    ppdVar16 = local_90;
    if (local_90 == (double **)0x0) {
      ppdVar16 = &local_190;
    }
    lVar13 = (longlong)(int)local_88;
    if (lVar13 != 0) {
      lVar15 = 0;
      local_1a8 = lVar17;
      do {
        bVar10 = *(byte *)(param_1 + 0x2f);
        *(byte *)(param_1 + 0x2f) = bVar10 ^ 1;
        if (bVar10 == 0) {
          FUN_1438a38f2(plVar3,&local_1a0);
          plVar1 = local_198;
          if (local_198 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_198 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*local_198)(local_198);
              LOCK();
              piVar2 = (int *)((longlong)plVar1 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
              }
            }
          }
          FUN_1438a38f2(param_1 + 0x32,&local_1a0);
          FUN_147f81bce(local_1a0);
          plVar1 = local_198;
          if (local_198 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_198 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*local_198)(local_198);
              LOCK();
              piVar2 = (int *)((longlong)plVar1 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
              }
            }
          }
          param_1[0x30] = 0;
          dVar19 = -1.0;
          if (9.999999747378752e-05 < *(double *)((longlong)ppdVar16 + lVar15 + 8)) {
            FUN_1438a38f2(plVar3,&local_1a0);
            plVar1 = local_198;
            dVar19 = *(double *)((longlong)ppdVar16 + lVar15);
            dVar6 = *(double *)((longlong)ppdVar16 + lVar15 + 8);
            dVar7 = local_1a0[1];
            dVar18 = local_1a0[2];
            dVar9 = *local_1a0;
            if (local_198 != (longlong *)0x0) {
              LOCK();
              plVar4 = local_198 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*local_198)(local_198);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                }
              }
            }
            FUN_1438a38f2(param_1 + 0x32,&local_1a0);
            plVar1 = local_198;
            dVar19 = ((((dVar19 + dVar6) - dVar7) / dVar18 + dVar9) - *local_1a0) * local_1a0[2] +
                     local_1a0[1];
            if (local_198 != (longlong *)0x0) {
              LOCK();
              plVar4 = local_198 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*local_198)(local_198);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                }
              }
            }
          }
          param_1[0x31] = (longlong)dVar19;
        }
        lVar15 = lVar15 + 0x20;
        lVar17 = local_1a8;
      } while (lVar13 * 0x20 != lVar15);
    }
    if (local_90 != (double **)0x0) {
      FUN_1400020a8();
    }
  }
  if ((char)param_1[0x2f] == '\x01') {
    pdVar5 = (double *)(param_1 + 0x32);
    FUN_1438a38f2(pdVar5,&local_190);
    plVar3 = local_188;
    auVar20._8_4_ = (int)((ulonglong)DAT_14cb262c8 >> 0x20);
    auVar20._0_8_ = DAT_14cb262c8;
    auVar20._12_4_ = 0x45300000;
    dVar18 = (((double)CONCAT44(0x43300000,(int)DAT_14cb262c8) - 4503599627370496.0) +
             (auVar20._8_8_ - 1.9342813113834067e+25)) * _DAT_14cb262c0;
    dVar19 = *local_190;
    dVar6 = local_190[2];
    dVar7 = local_190[1];
    if (local_188 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_188 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_188)(local_188);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    pdVar8 = (double *)param_1[0x30];
    if ((double)pdVar8 <= (dVar18 - dVar19) * dVar6 + dVar7) {
      local_178 = 0;
      local_180 = 0;
      local_188 = *(longlong **)(lVar17 + 0x40);
      uVar11 = *(uint *)(param_1 + 0x53);
      uVar14 = 0;
      if (0 < (int)uVar11) {
        pdVar12 = (double *)param_1[0x52];
        if ((double *)param_1[0x52] == (double *)0x0) {
          pdVar12 = pdVar5;
        }
        uVar14 = 0;
        do {
          if ((double)pdVar8 < *pdVar12) goto LAB_147f79ec1;
          uVar14 = uVar14 + 1;
          pdVar12 = pdVar12 + 4;
        } while (uVar11 != uVar14);
        uVar14 = (ulonglong)uVar11;
      }
LAB_147f79ec1:
      local_190 = pdVar8;
      FUN_147f78178(pdVar5,&local_190,uVar14);
      param_1[0x30] = (longlong)(*(double *)(lVar17 + 0x40) + (double)param_1[0x30]);
      FUN_147f78c0c(param_1,pdVar5,1);
    }
    if ((0.0 < (double)param_1[0x31]) && ((double)param_1[0x31] <= (double)param_1[0x30])) {
      *(undefined1 *)(param_1 + 0x2f) = 0;
      (**(code **)(*param_1 + 0x90))(param_1);
    }
  }
  if (((char)param_1[0x2f] == '\0') && ((int)param_1[0x2c] < 1)) {
    (**(code **)(*param_1 + 0x90))(param_1);
  }
  if ((local_80 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f79efe FUN_147f79efe body=770 status=ok
// SIG undefined FUN_147f79efe(void)

void FUN_147f79efe(longlong param_1)

{
  undefined4 uVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 *puVar9;
  double *pdVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined1 auStack_328 [32];
  longlong local_308;
  longlong local_300;
  double *local_2f8;
  undefined1 local_2f0 [256];
  undefined1 *local_1f0;
  undefined8 local_1e8;
  double local_1e0 [32];
  double *local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  if (0 < *(int *)(param_1 + 0x160)) {
    lVar4 = *(longlong *)(param_1 + 0x48);
    local_308 = param_1 + 0x58;
    local_e0 = (double *)0x0;
    local_d8 = 0x800000000;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = 0x800000000;
    FUN_147f78a78(local_308,local_1e0);
    pdVar10 = local_e0;
    if (local_e0 == (double *)0x0) {
      pdVar10 = local_1e0;
    }
    if ((longlong)(int)local_d8 != 0) {
      local_2f8 = pdVar10 + (longlong)(int)local_d8 * 4;
      local_300 = param_1 + 0x178;
      do {
        fVar16 = 0.0;
        if ((*(char *)(param_1 + 0x220) == '\x01') && (*(int *)(param_1 + 0x1c8) != 0)) {
          fVar16 = (float)FUN_147f7eacc(local_300,*(int *)(param_1 + 0x1c8) + -1,pdVar10);
        }
        iVar11 = (int)ROUND(fVar16 + fVar16 + 0.5) >> 1;
        if (0 < iVar11) {
          dVar2 = pdVar10[1];
          dVar6 = 0.0;
          if (*(char *)(lVar4 + 0x48) == '\0') {
            uVar14 = 0;
            uVar15 = 0;
          }
          else {
            dVar2 = dVar2 / (double)iVar11;
            uVar14 = SUB84(dVar2,0);
            uVar15 = (undefined4)((ulonglong)dVar2 >> 0x20);
          }
          dVar3 = *pdVar10;
          iVar13 = 0;
          do {
            uVar7 = local_1e8;
            if (*(char *)(lVar4 + 0x49) == '\0') {
              fVar16 = *(float *)((longlong)pdVar10 + 0x14);
            }
            else {
              fVar16 = (float)iVar13;
            }
            uVar1 = *(undefined4 *)(pdVar10 + 2);
            dVar5 = pdVar10[3];
            lVar12 = (longlong)(int)local_1e8;
            uVar8 = (int)local_1e8 + 1;
            local_1e8 = CONCAT44(local_1e8._4_4_,uVar8);
            if (local_1e8._4_4_ < uVar8) {
              FUN_147f7ee40(local_2f0,uVar7 & 0xffffffff);
            }
            puVar9 = local_1f0;
            if (local_1f0 == (undefined1 *)0x0) {
              puVar9 = local_2f0;
            }
            lVar12 = lVar12 * 0x20;
            *(double *)(puVar9 + lVar12) = dVar6 * (double)CONCAT44(uVar15,uVar14) + dVar3;
            *(double *)(puVar9 + lVar12 + 8) = dVar2;
            *(undefined4 *)(puVar9 + lVar12 + 0x10) = uVar1;
            *(float *)(puVar9 + lVar12 + 0x14) = fVar16;
            *(double *)(puVar9 + lVar12 + 0x18) = dVar5;
            dVar6 = dVar6 + 1.0;
            iVar13 = iVar13 + 1;
          } while (iVar11 != iVar13);
        }
        pdVar10 = pdVar10 + 4;
      } while (pdVar10 != local_2f8);
    }
    lVar4 = local_308;
    FUN_147f78212(local_308,local_2f0);
    FUN_147f7829c(lVar4);
    FUN_147f78c0c(param_1,lVar4,1);
    if (local_1f0 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_e0 != (double *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f7a208 FUN_147f7a208 body=75 status=ok
// SIG undefined FUN_147f7a208(void)

void FUN_147f7a208(longlong param_1)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(undefined1 *)(param_1 + 0x50) = 1;
  local_10 = param_1;
  FUN_147f7eede(*(longlong *)(param_1 + 0x40) + 0x130);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f7a254 FUN_147f7a254 body=376 status=ok
// SIG undefined FUN_147f7a254(void)

void FUN_147f7a254(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  longlong *local_270;
  undefined8 local_268;
  longlong *local_260;
  undefined1 local_258 [256];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138 [256];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_298;
  local_38 = 0;
  local_30 = 0x800000000;
  FUN_147f78854(param_1 + 0xb,local_138);
  if (0 < (int)local_30) {
    local_158 = 0;
    local_150 = 0x800000000;
    local_148 = 0;
    uStack_140 = 0;
    FUN_1438a38f2(param_1 + 0xb,&local_278);
    local_268 = local_278;
    local_260 = local_270;
    if (local_270 == (longlong *)0x0) {
      FUN_1438a36a2(local_258,&local_268,1);
    }
    else {
      LOCK();
      *(int *)(local_270 + 1) = (int)local_270[1] + 1;
      UNLOCK();
      FUN_1438a36a2(local_258,&local_268,1);
      if (local_270 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_270 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_270)(local_270);
          LOCK();
          piVar2 = (int *)((longlong)local_270 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_270 + 0x10))(local_270);
          }
        }
      }
    }
    FUN_147f78212(local_258,local_138);
    FUN_147f7829c(local_258);
    FUN_147f78c0c(param_1,local_258,1);
    FUN_147f6f94a(local_258);
  }
  if ((int)param_1[0x2c] < 1) {
    (**(code **)(*param_1 + 0x90))(param_1);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f7a432 FUN_147f7a432 body=1034 status=ok
// SIG undefined FUN_147f7a432(void)

void FUN_147f7a432(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  longlong lVar11;
  ulonglong uVar12;
  double *pdVar13;
  longlong lVar14;
  float fVar15;
  undefined1 auStack_3f8 [40];
  double local_3d0;
  longlong *local_3c8;
  double local_3c0;
  longlong *local_3b8;
  double local_3b0;
  longlong *local_3a8;
  double *local_2b0;
  undefined8 local_2a8;
  double local_2a0 [32];
  double *local_1a0;
  ulonglong local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  double local_180 [32];
  double *local_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  if (0 < *(int *)(param_1 + 0x160)) {
    lVar11 = param_1 + 0x58;
    local_80 = (double *)0x0;
    local_78 = 0x800000000;
    local_70 = 0;
    uStack_68 = 0;
    local_1a0 = (double *)0x0;
    local_198 = 0x800000000;
    local_190 = 0;
    uStack_188 = 0;
    FUN_1438a38f2(lVar11,&local_3b0);
    plVar6 = local_3a8;
    local_3c0 = local_3b0;
    local_3b8 = local_3a8;
    if (local_3a8 == (longlong *)0x0) {
      FUN_1438a36a2(local_180,&local_3c0,1);
    }
    else {
      LOCK();
      *(int *)(local_3a8 + 1) = (int)local_3a8[1] + 1;
      UNLOCK();
      FUN_1438a36a2(local_180,&local_3c0,1);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
    FUN_1438a38f2(lVar11,&local_3b0);
    local_3d0 = local_3b0;
    local_3c8 = local_3a8;
    if (local_3a8 == (longlong *)0x0) {
      FUN_1438a36a2(local_2a0,&local_3d0);
    }
    else {
      LOCK();
      *(int *)(local_3a8 + 1) = (int)local_3a8[1] + 1;
      UNLOCK();
      FUN_1438a36a2(local_2a0,&local_3d0);
      if (local_3a8 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_3a8 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_3a8)(local_3a8);
          LOCK();
          piVar2 = (int *)((longlong)local_3a8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_3a8 + 0x10))(local_3a8);
          }
        }
      }
    }
    local_2b0 = (double *)0x0;
    local_2a8 = 0x800000000;
    FUN_147f78a78(lVar11,&local_3b0);
    pdVar10 = local_2b0;
    if (local_2b0 == (double *)0x0) {
      pdVar10 = &local_3b0;
    }
    if ((longlong)(int)local_2a8 != 0) {
      pdVar13 = pdVar10 + (longlong)(int)local_2a8 * 4;
      do {
        fVar15 = 0.0;
        if ((*(char *)(param_1 + 0x220) == '\x01') && (*(int *)(param_1 + 0x1c8) != 0)) {
          fVar15 = (float)FUN_147f7eacc(param_1 + 0x178,*(int *)(param_1 + 0x1c8) + -1);
        }
        if (ABS(fVar15) <= 0.0001) {
          pdVar9 = local_2a0;
          if (0 < (int)local_198) {
            pdVar8 = local_1a0;
            if (local_1a0 == (double *)0x0) {
              pdVar8 = local_2a0;
            }
            uVar12 = 0;
            do {
              if (*pdVar10 < *pdVar8) break;
              uVar12 = uVar12 + 1;
              pdVar8 = pdVar8 + 4;
            } while ((local_198 & 0xffffffff) != uVar12);
          }
        }
        else {
          pdVar9 = local_180;
          if (0 < (int)local_78) {
            pdVar8 = local_80;
            if (local_80 == (double *)0x0) {
              pdVar8 = local_180;
            }
            uVar12 = 0;
            do {
              if (*pdVar10 < *pdVar8) break;
              uVar12 = uVar12 + 1;
              pdVar8 = pdVar8 + 4;
            } while ((local_78 & 0xffffffff) != uVar12);
          }
        }
        FUN_147f78178(pdVar9,pdVar10);
        pdVar10 = pdVar10 + 4;
      } while (pdVar10 != pdVar13);
    }
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x48) + 0x30);
    if (lVar11 != 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x28);
      lVar14 = 0;
      do {
        if (((*(char *)(lVar3 + 8 + lVar14) == '\x03') && (*(longlong *)(lVar3 + lVar14) != 0)) &&
           (plVar6 = (longlong *)FUN_144a7f1e2(*(undefined8 *)(param_1 + 0x40)),
           plVar6 != (longlong *)0x0)) {
          uVar7 = FUN_14644586c();
          cVar5 = FUN_1448093f4(plVar6,uVar7);
          if (((cVar5 != '\0') && (cVar5 = (**(code **)(*plVar6 + 0x28))(plVar6), cVar5 != '\0')) &&
             (((lVar4 = *(longlong *)(lVar3 + 0xc + lVar14), lVar4 == DAT_14cb25808 &&
               (pdVar10 = local_180, 0 < (int)local_78)) ||
              ((lVar4 == DAT_14cb25810 && (pdVar10 = local_2a0, 0 < (int)local_198)))))) {
            FUN_1438a3518(plVar6 + 0xb,pdVar10);
            (**(code **)(*plVar6 + 0x80))(plVar6);
          }
        }
        lVar14 = lVar14 + 0x20;
      } while (lVar11 * 0x20 != lVar14);
    }
    if (local_2b0 != (double *)0x0) {
      FUN_1400020a8();
    }
    FUN_147f6f94a(local_2a0);
    FUN_147f6f94a(local_180);
  }
  if ((local_60 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f7a844 FUN_147f7a844 body=103 status=ok
// SIG undefined FUN_147f7a844(void)

void FUN_147f7a844(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_147f762da();
    *(undefined8 *)(param_1 + 0x178) = 0;
    plVar3 = *(longlong **)(param_1 + 0x180);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x180) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000147f7a8a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 147f7a8ac FUN_147f7a8ac body=75 status=ok
// SIG undefined FUN_147f7a8ac(void)

void FUN_147f7a8ac(longlong param_1)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(undefined1 *)(param_1 + 0x50) = 1;
  local_10 = param_1;
  FUN_147f7eede(*(longlong *)(param_1 + 0x40) + 0x130);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f7a8f8 FUN_147f7a8f8 body=226 status=ok
// SIG undefined FUN_147f7a8f8(void)

longlong * FUN_147f7a8f8(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    FUN_144747626(&local_28,DAT_14cb25ac8,param_2);
    plVar2 = local_20;
    if (local_28 != 0) {
      if (local_20 == (longlong *)0x0) {
        *param_1 = local_28;
      }
      else {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
        *param_1 = local_28;
        if ((longlong *)param_1[1] != local_20) {
          LOCK();
          *(int *)((longlong)local_20 + 0xc) = *(int *)((longlong)local_20 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar2;
        }
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
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_20 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f7a9dc FUN_147f7a9dc body=1043 status=ok
// SIG undefined FUN_147f7a9dc(void)

ulonglong FUN_147f7a9dc(longlong *param_1,undefined4 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  size_t sVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  wchar_t *pwVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  wchar_t *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400b22c2(&local_48,"start");
  iVar5 = (int)param_1[1];
  if (iVar5 == local_40) {
    bVar11 = true;
    if (1 < iVar5) {
      lVar8 = 0;
      while( true ) {
        uVar1 = *(ushort *)(*param_1 + lVar8);
        uVar3 = (uint)uVar1;
        uVar2 = *(ushort *)((longlong)local_48 + lVar8);
        uVar9 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_147f7aa4d;
          }
          iVar5 = uVar3 - uVar9;
          goto LAB_147f7adbe;
        }
        if (uVar1 == 0) break;
LAB_147f7aa4d:
        lVar8 = lVar8 + 2;
      }
      iVar5 = 0;
LAB_147f7adbe:
      bVar11 = iVar5 == 0;
    }
  }
  else {
    bVar11 = local_40 + iVar5 == 1;
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uVar7 = CONCAT71((int7)((ulonglong)&local_48 >> 8),1);
  uVar4 = 1;
  if (!bVar11) {
    FUN_1400b22c2(&local_48,"duration");
    pwVar10 = local_48;
    if (local_40 == 0) {
      pwVar10 = L"";
    }
    if (pwVar10 == (wchar_t *)0x0) {
      bVar11 = false;
    }
    else {
      sVar6 = wcslen(pwVar10);
      local_50 = 0xffffffff;
      local_58 = 0;
      iVar5 = FUN_1447ee042(param_1,pwVar10,sVar6 & 0xffffffff,1);
      bVar11 = iVar5 != -1;
    }
    if (local_48 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    uVar4 = 2;
    if (!bVar11) {
      FUN_1400b22c2(&local_48,&DAT_14acb375d);
      pwVar10 = local_48;
      if (local_40 == 0) {
        pwVar10 = L"";
      }
      if (pwVar10 == (wchar_t *)0x0) {
        bVar11 = false;
      }
      else {
        sVar6 = wcslen(pwVar10);
        local_50 = 0xffffffff;
        local_58 = 0;
        iVar5 = FUN_1447ee042(param_1,pwVar10,sVar6 & 0xffffffff,1);
        bVar11 = iVar5 != -1;
      }
      if (local_48 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      uVar4 = 3;
      if (!bVar11) {
        FUN_1400b22c2(&local_48,&DAT_14acb3762);
        pwVar10 = local_48;
        if (local_40 == 0) {
          pwVar10 = L"";
        }
        if (pwVar10 == (wchar_t *)0x0) {
          bVar11 = false;
        }
        else {
          sVar6 = wcslen(pwVar10);
          local_50 = 0xffffffff;
          local_58 = 0;
          iVar5 = FUN_1447ee042(param_1,pwVar10,sVar6 & 0xffffffff,1);
          bVar11 = iVar5 != -1;
        }
        if (local_48 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        uVar4 = 4;
        if (!bVar11) {
          FUN_1400b22c2(&local_48,&DAT_14acb3767);
          pwVar10 = local_48;
          if (local_40 == 0) {
            pwVar10 = L"";
          }
          if (pwVar10 == (wchar_t *)0x0) {
            bVar11 = false;
          }
          else {
            sVar6 = wcslen(pwVar10);
            local_50 = 0xffffffff;
            local_58 = 0;
            iVar5 = FUN_1447ee042(param_1,pwVar10,sVar6 & 0xffffffff,1);
            bVar11 = iVar5 != -1;
          }
          if (local_48 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          uVar4 = 5;
          if (!bVar11) {
            FUN_1400b22c2(&local_48,&DAT_14acb376c);
            pwVar10 = local_48;
            if (local_40 == 0) {
              pwVar10 = L"";
            }
            if (pwVar10 == (wchar_t *)0x0) {
              bVar11 = false;
            }
            else {
              sVar6 = wcslen(pwVar10);
              local_50 = 0xffffffff;
              local_58 = 0;
              iVar5 = FUN_1447ee042(param_1,pwVar10,sVar6 & 0xffffffff,1);
              bVar11 = iVar5 != -1;
            }
            if (local_48 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            uVar4 = 6;
            if (!bVar11) {
              FUN_1400b22c2(&local_48,"value");
              pwVar10 = L"";
              if (local_40 != 0) {
                pwVar10 = local_48;
              }
              if (pwVar10 == (wchar_t *)0x0) {
                uVar7 = 0;
              }
              else {
                sVar6 = wcslen(pwVar10);
                local_50 = 0xffffffff;
                local_58 = 0;
                iVar5 = FUN_1447ee042(param_1,pwVar10,sVar6 & 0xffffffff,1);
                uVar7 = CONCAT71((int7)((ulonglong)&local_48 >> 8),iVar5 != -1);
              }
              if (local_48 != (wchar_t *)0x0) {
                FUN_1400020a8();
              }
              uVar4 = 7;
              if ((char)uVar7 == '\0') {
                uVar4 = 0;
              }
            }
          }
        }
      }
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 147f7adf0 FUN_147f7adf0 body=178 status=ok
// SIG undefined FUN_147f7adf0(void)

void FUN_147f7adf0(undefined8 param_1,uint *param_2)

{
  int iVar1;
  size_t sVar2;
  wchar_t *_Str;
  uint uVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  wchar_t *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400b22c2(&local_30,&DAT_14acb3770);
  _Str = L"";
  if (local_28 != 0) {
    _Str = local_30;
  }
  if (_Str == (wchar_t *)0x0) {
    uVar3 = 0;
  }
  else {
    sVar2 = wcslen(_Str);
    local_40 = 0xffffffff;
    local_48 = 0;
    iVar1 = FUN_1447ee042(param_1,_Str,sVar2 & 0xffffffff,1);
    uVar3 = (uint)(iVar1 != -1);
  }
  if (local_30 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  *param_2 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f7aea4 FUN_147f7aea4 body=303 status=ok
// SIG undefined FUN_147f7aea4(void)

longlong * FUN_147f7aea4(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 == param_2) {
    *(int *)(param_1 + 2) = (int)param_2[2];
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(int *)(param_1 + 8) = (int)param_2[8];
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    *(int *)(param_1 + 2) = (int)param_2[2];
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    param_1[3] = param_2[3];
    param_2[3] = 0;
    *(int *)(param_1 + 4) = (int)param_2[4];
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = param_2[6];
    param_2[6] = 0;
    *(int *)(param_1 + 7) = (int)param_2[7];
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
    param_2[7] = 0;
    *(int *)(param_1 + 8) = (int)param_2[8];
    if (param_1[9] != 0) {
      FUN_1400020a8();
    }
    param_1[9] = param_2[9];
    param_2[9] = 0;
    *(int *)(param_1 + 10) = (int)param_2[10];
    *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
    param_2[10] = 0;
  }
  *(int *)(param_1 + 0xb) = (int)param_2[0xb];
  uVar1 = *(undefined4 *)((longlong)param_2 + 100);
  lVar3 = param_2[0xd];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(int *)(param_1 + 0xc) = (int)param_2[0xc];
  *(undefined4 *)((longlong)param_1 + 100) = uVar1;
  *(int *)(param_1 + 0xd) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar2;
  param_1[0xe] = param_2[0xe];
  FUN_147f6e33a(param_1 + 0xf,param_2 + 0xf);
  param_1[0x11] = param_2[0x11];
  *(short *)(param_1 + 0x12) = (short)param_2[0x12];
  return param_1;
}



// FUNCTION 147f7afd4 FUN_147f7afd4 body=231 status=ok
// SIG undefined FUN_147f7afd4(void)

undefined8 FUN_147f7afd4(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 ***pppuVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78 [40];
  undefined4 local_50;
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)param_1[1];
  uVar5 = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar1 + 0xb8))(plVar1,*param_1);
    uVar5 = 0;
    if (lVar3 != 0) {
      local_78[0] = 0;
      local_50 = 0;
      FUN_1447c3578(lVar3,local_48);
      uVar5 = FUN_144a7ecd0(local_48);
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
      if (pcVar2 != (code *)0x0) {
        pppuVar4 = local_48;
        if (0x18 < local_30) {
          pppuVar4 = (undefined8 ***)local_48[0];
        }
        (*pcVar2)(pppuVar4);
      }
      if (0x18 < local_30) {
        FUN_1400020a8(local_48[0]);
      }
      FUN_144a5ac3a(local_78);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f7b0bc FUN_147f7b0bc body=516 status=ok
// SIG undefined FUN_147f7b0bc(void)

void FUN_147f7b0bc(longlong *param_1,longlong *param_2,undefined4 param_3,float param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  cVar3 = FUN_144904448();
  if (cVar3 == '\0') goto LAB_147f7b161;
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    if (DAT_14cb256c8 == 0) {
      uVar5 = FUN_140cd185c();
      DAT_14cb256c8 = FUN_140002ddd(FUN_141819010,uVar5,L"WwiseGameParameterDef");
    }
    lVar4 = FUN_14477b664(DAT_14cb256c8);
    param_2[1] = lVar4;
  }
  if (param_2[2] == 0) {
    if ((lVar4 == 0) || (*param_2 == 0)) goto LAB_147f7b161;
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
      param_2[2] = 0;
      goto LAB_147f7b161;
    }
    uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar4 = FUN_144aff482(uVar5,param_2);
    param_2[2] = lVar4;
    if (lVar4 == 0) goto LAB_147f7b161;
  }
  plVar1 = (longlong *)*param_1;
  if (((plVar1 != (longlong *)0x0) && (param_1[1] != -1)) && (*plVar1 == param_1[1])) {
    *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + 1;
    lVar4 = param_2[1];
    if (lVar4 == 0) {
      if (DAT_14cb256c8 == 0) {
        uVar5 = FUN_140cd185c();
        DAT_14cb256c8 = FUN_140002ddd(FUN_141819010,uVar5,L"WwiseGameParameterDef");
      }
      lVar4 = FUN_14477b664(DAT_14cb256c8);
      param_2[1] = lVar4;
    }
    lVar6 = param_2[2];
    if (((lVar6 == 0) && (lVar6 = 0, lVar4 != 0)) && (*param_2 != 0)) {
      plVar2 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar6 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar5,param_2);
      }
      param_2[2] = lVar6;
    }
    FUN_1447997cc(plVar1,lVar6,param_3,(int)(param_4 * 1000.0),0);
    *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + -1;
    FUN_140d274d8(plVar1);
  }
LAB_147f7b161:
  *param_1 = 0;
  param_1[1] = -1;
  return;
}



// FUNCTION 147f7b2c0 FUN_147f7b2c0 body=499 status=ok
// SIG undefined FUN_147f7b2c0(void)

void FUN_147f7b2c0(longlong *param_1,longlong *param_2)

{
  __uint64 *p_Var1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  cVar3 = FUN_144904448();
  if (cVar3 == '\0') goto LAB_147f7b361;
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    if (DAT_14cb25788 == 0) {
      uVar5 = FUN_140cd185c();
      DAT_14cb25788 = FUN_140002ddd(FUN_141819041,uVar5,L"WwiseSwitchDef");
    }
    lVar4 = FUN_14477b664(DAT_14cb25788);
    param_2[1] = lVar4;
  }
  if (param_2[2] == 0) {
    if ((lVar4 == 0) || (*param_2 == 0)) goto LAB_147f7b361;
    plVar2 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      param_2[2] = 0;
      goto LAB_147f7b361;
    }
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar4 = FUN_144aff482(uVar5,param_2);
    param_2[2] = lVar4;
    if (lVar4 == 0) goto LAB_147f7b361;
  }
  p_Var1 = (__uint64 *)*param_1;
  if (((p_Var1 == (__uint64 *)0x0) || (param_1[1] == 0xffffffffffffffff)) || (*p_Var1 != param_1[1])
     ) goto LAB_147f7b361;
  *(int *)(p_Var1 + 0x21) = (int)p_Var1[0x21] + 1;
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    if (DAT_14cb25788 == 0) {
      uVar5 = FUN_140cd185c();
      DAT_14cb25788 = FUN_140002ddd(FUN_141819041,uVar5,L"WwiseSwitchDef");
    }
    lVar4 = FUN_14477b664(DAT_14cb25788);
    param_2[1] = lVar4;
  }
  lVar6 = param_2[2];
  if (lVar6 == 0) {
    if ((lVar4 != 0) && (*param_2 != 0)) {
      plVar2 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar6 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar5,param_2);
      }
      param_2[2] = lVar6;
      goto LAB_147f7b32b;
    }
  }
  else {
LAB_147f7b32b:
    if ((lVar6 != 0 && *p_Var1 != 0xffffffffffffffff) && (DAT_14cb25ab0 == '\x01')) {
      AK::SoundEngine::SetSwitch(*(uint *)(lVar6 + 0x48),*(uint *)(lVar6 + 0x38),*p_Var1);
    }
  }
  *(int *)(p_Var1 + 0x21) = (int)p_Var1[0x21] + -1;
  FUN_140d274d8(p_Var1);
LAB_147f7b361:
  *param_1 = 0;
  param_1[1] = -1;
  return;
}



// FUNCTION 147f7b4b4 FUN_147f7b4b4 body=498 status=ok
// SIG undefined FUN_147f7b4b4(void)

void FUN_147f7b4b4(longlong *param_1,longlong *param_2)

{
  __uint64 *p_Var1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  cVar3 = FUN_144904448();
  if (cVar3 == '\0') goto LAB_147f7b554;
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    if (DAT_14cb257b8 == 0) {
      uVar5 = FUN_140cd185c();
      DAT_14cb257b8 = FUN_140002ddd(FUN_146447ca7,uVar5,L"WwiseTriggerDef");
    }
    lVar4 = FUN_14477b664(DAT_14cb257b8);
    param_2[1] = lVar4;
  }
  if (param_2[2] == 0) {
    if ((lVar4 == 0) || (*param_2 == 0)) goto LAB_147f7b554;
    plVar2 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      param_2[2] = 0;
      goto LAB_147f7b554;
    }
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar4 = FUN_144aff482(uVar5,param_2);
    param_2[2] = lVar4;
    if (lVar4 == 0) goto LAB_147f7b554;
  }
  p_Var1 = (__uint64 *)*param_1;
  if (((p_Var1 == (__uint64 *)0x0) || (param_1[1] == 0xffffffffffffffff)) || (*p_Var1 != param_1[1])
     ) goto LAB_147f7b554;
  *(int *)(p_Var1 + 0x21) = (int)p_Var1[0x21] + 1;
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    if (DAT_14cb257b8 == 0) {
      uVar5 = FUN_140cd185c();
      DAT_14cb257b8 = FUN_140002ddd(FUN_146447ca7,uVar5,L"WwiseTriggerDef");
    }
    lVar4 = FUN_14477b664(DAT_14cb257b8);
    param_2[1] = lVar4;
  }
  lVar6 = param_2[2];
  if (lVar6 == 0) {
    if ((lVar4 != 0) && (*param_2 != 0)) {
      plVar2 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar6 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar5,param_2);
      }
      param_2[2] = lVar6;
      goto LAB_147f7b51f;
    }
  }
  else {
LAB_147f7b51f:
    if ((lVar6 != 0 && *p_Var1 != 0xffffffffffffffff) && (DAT_14cb25ab0 == '\x01')) {
      AK::SoundEngine::PostTrigger(*(uint *)(lVar6 + 0x38),*p_Var1);
    }
  }
  *(int *)(p_Var1 + 0x21) = (int)p_Var1[0x21] + -1;
  FUN_140d274d8(p_Var1);
LAB_147f7b554:
  *param_1 = 0;
  param_1[1] = -1;
  return;
}



// FUNCTION 147f7b6a6 FUN_147f7b6a6 body=54 status=ok
// SIG undefined FUN_147f7b6a6(void)

void FUN_147f7b6a6(undefined8 *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144904448();
  if (cVar1 != '\0') {
    FUN_147f7b6dc(param_1,param_2);
  }
  *param_1 = 0;
  param_1[1] = 0xffffffffffffffff;
  return;
}



// FUNCTION 147f7b6dc FUN_147f7b6dc body=95 status=ok
// SIG undefined FUN_147f7b6dc(void)

void FUN_147f7b6dc(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  
  cVar2 = FUN_144904448();
  if ((((cVar2 != '\0') && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) &&
      (param_1[1] != -1)) && (*plVar1 == param_1[1])) {
    *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + 1;
    FUN_140da2a90(plVar1,param_1[2],param_2);
    *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + -1;
    FUN_140d274d8(plVar1);
    return;
  }
  return;
}



// FUNCTION 147f7b73c FUN_147f7b73c body=244 status=ok
// SIG undefined FUN_147f7b73c(void)

undefined8 *
FUN_147f7b73c(undefined8 *param_1,longlong param_2,undefined8 param_3,longlong param_4,
             undefined1 param_5,undefined8 *param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8 [12];
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined1 local_3f;
  undefined8 local_3c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b0 = param_3;
  if (param_2 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    local_c0 = local_a8;
    puVar2 = param_6;
    puVar3 = local_c0;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    local_48 = *(undefined4 *)(param_6 + 0xc);
    local_44 = *(undefined4 *)((longlong)param_6 + 100);
    local_40 = *(undefined1 *)(param_6 + 0xd);
    local_3f = *(undefined1 *)((longlong)param_6 + 0x69);
    local_3c = *(undefined8 *)((longlong)param_6 + 0x6c);
    local_c8 = param_5;
    local_b8 = 0;
    FUN_141504178(param_1,param_2,param_4,&local_b0);
  }
  if ((*(longlong *)(param_4 + 0x28) != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_4 + 0x28) + 0x50));
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f7b832 FUN_147f7b832 body=224 status=ok
// SIG undefined FUN_147f7b832(void)

void FUN_147f7b832(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  cVar3 = FUN_1404fa388();
  if (cVar3 == '\0') goto LAB_147f7b848;
  lVar5 = param_2[1];
  if (lVar5 == 0) {
    if (DAT_14cb25788 == 0) {
      uVar4 = FUN_140cd185c();
      DAT_14cb25788 = FUN_140002ddd(FUN_141819041,uVar4,L"WwiseSwitchDef");
    }
    lVar5 = FUN_14477b664(DAT_14cb25788);
    param_2[1] = lVar5;
  }
  if (((param_2[2] == 0) && (lVar5 != 0)) && (*param_2 != 0)) {
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if (plVar2 == (longlong *)0x0) {
LAB_147f7b90e:
      lVar5 = 0;
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 == '\0') goto LAB_147f7b90e;
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar5 = FUN_144aff482(uVar4,param_2);
    }
    param_2[2] = lVar5;
  }
  FUN_145721bfe(param_1);
LAB_147f7b848:
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147f7b861. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 147f7b912 FUN_147f7b912 body=437 status=ok
// SIG undefined FUN_147f7b912(void)

void FUN_147f7b912(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    if (DAT_14cb25758 == 0) {
      uVar3 = FUN_140cd185c();
      DAT_14cb25758 = FUN_140002ddd(FUN_146447bb9,uVar3,L"WwiseStateDef");
    }
    lVar4 = FUN_14477b664(DAT_14cb25758);
    param_1[1] = lVar4;
  }
  lVar5 = param_1[2];
  if (lVar5 == 0) {
    if (lVar4 == 0) {
      return;
    }
    if (*param_1 == 0) {
      return;
    }
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      param_1[2] = 0;
      return;
    }
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar3,param_1);
    param_1[2] = lVar5;
    if (lVar5 == 0) {
      return;
    }
    if (DAT_14cb259f8 == 0) {
      return;
    }
    lVar4 = param_1[1];
  }
  else if (DAT_14cb259f8 == 0) {
    return;
  }
  if (lVar4 == 0) {
    if (DAT_14cb25758 == 0) {
      uVar3 = FUN_140cd185c();
      DAT_14cb25758 = FUN_140002ddd(FUN_146447bb9,uVar3,L"WwiseStateDef");
    }
    lVar4 = FUN_14477b664(DAT_14cb25758);
    param_1[1] = lVar4;
    lVar5 = param_1[2];
    if (lVar5 == 0) {
      if (lVar4 == 0) {
        return;
      }
      if (*param_1 == 0) {
        return;
      }
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        lVar5 = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar5 = FUN_144aff482(uVar3,param_1);
      }
      param_1[2] = lVar5;
    }
  }
  if ((lVar5 != 0) && (DAT_14cb25ab0 != '\0')) {
    AK::SoundEngine::SetState(*(uint *)(lVar5 + 0x48),*(uint *)(lVar5 + 0x38));
    return;
  }
  return;
}



// FUNCTION 147f7bac8 FUN_147f7bac8 body=210 status=ok
// SIG undefined FUN_147f7bac8(void)

void FUN_147f7bac8(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar3 = param_1[1];
  if (lVar3 == 0) {
    if (DAT_14cb256c8 == 0) {
      uVar4 = FUN_140cd185c();
      DAT_14cb256c8 = FUN_140002ddd(FUN_141819010,uVar4,L"WwiseGameParameterDef");
    }
    lVar3 = FUN_14477b664(DAT_14cb256c8);
    param_1[1] = lVar3;
  }
  lVar5 = param_1[2];
  if (((lVar5 != 0) || (lVar5 = 0, lVar3 == 0)) || (*param_1 == 0)) goto LAB_147f7baf3;
  plVar1 = *(longlong **)(lVar3 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_147f7bb96:
    lVar5 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x108))();
    if (cVar2 == '\0') goto LAB_147f7bb96;
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar4,param_1);
  }
  param_1[2] = lVar5;
LAB_147f7baf3:
  FUN_1400d4a02(lVar5,param_2,param_3);
  return;
}



// FUNCTION 147f7bb9a FUN_147f7bb9a body=253 status=ok
// SIG undefined FUN_147f7bb9a(void)

void FUN_147f7bb9a(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    FUN_14026e798(&local_30);
    if (local_30 != 0) {
      FUN_1403c747e(local_30,&local_38,param_3);
      if (local_38 != 0) {
        FUN_144904532();
        iVar3 = *(int *)(local_30 + 0x128);
        if ((longlong)iVar3 != 0) {
          lVar4 = *(longlong *)(local_30 + 0x120);
          lVar5 = 0;
          do {
            if (*(longlong *)(lVar4 + lVar5) == param_3) {
              *(undefined1 *)(lVar4 + 0xb8 + lVar5) = 0;
            }
            lVar5 = lVar5 + 0xc0;
          } while ((longlong)iVar3 * 0xc0 != lVar5);
        }
        if (local_38 != 0) {
          *(int *)(local_38 + 0x108) = *(int *)(local_38 + 0x108) + -1;
          FUN_140d274d8();
        }
      }
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f7bc98 FUN_147f7bc98 body=504 status=ok
// SIG undefined FUN_147f7bc98(void)

void FUN_147f7bc98(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 == 0) goto LAB_147f7bcfa;
  FUN_14026e798(&local_38,param_1);
  if (local_38 != 0) {
    lVar5 = param_3[1];
    if (lVar5 == 0) {
      if (DAT_14cb25698 == 0) {
        uVar4 = FUN_140cd185c();
        DAT_14cb25698 = FUN_140002ddd(FUN_141818fdf,uVar4,L"WwiseEventDef");
      }
      lVar5 = FUN_14477b664(DAT_14cb25698);
      param_3[1] = lVar5;
    }
    local_40 = param_3[2];
    if (local_40 == 0) {
      if ((lVar5 != 0) && (*param_3 != 0)) {
        plVar2 = *(longlong **)(lVar5 + 0xb8);
        if (plVar2 != (longlong *)0x0) {
          cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
          if (cVar3 != '\0') {
            uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
            local_40 = FUN_144aff482(uVar4,param_3);
            param_3[2] = local_40;
            if (local_40 != 0) {
              lVar5 = param_3[1];
              goto LAB_147f7bdcb;
            }
            goto LAB_147f7bdb9;
          }
        }
        param_3[2] = 0;
      }
LAB_147f7bdb9:
      local_40 = 0;
    }
    else {
LAB_147f7bdcb:
      if (lVar5 == 0) {
        if (DAT_14cb25698 == 0) {
          uVar4 = FUN_140cd185c();
          DAT_14cb25698 = FUN_140002ddd(FUN_141818fdf,uVar4,L"WwiseEventDef");
        }
        lVar5 = FUN_14477b664(DAT_14cb25698);
        param_3[1] = lVar5;
        local_40 = param_3[2];
        if (((local_40 == 0) && (local_40 = 0, lVar5 != 0)) && (*param_3 != 0)) {
          plVar2 = *(longlong **)(lVar5 + 0xb8);
          if (plVar2 == (longlong *)0x0) {
LAB_147f7be8d:
            local_40 = 0;
          }
          else {
            cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
            if (cVar3 == '\0') goto LAB_147f7be8d;
            uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
            local_40 = FUN_144aff482(uVar4,param_3);
          }
          param_3[2] = local_40;
        }
      }
      FUN_140942716();
    }
    FUN_147f7be92(local_38,param_2,&local_40);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
LAB_147f7bcfa:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f7be92 FUN_147f7be92 body=161 status=ok
// SIG undefined FUN_147f7be92(void)

void FUN_147f7be92(longlong param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  if (param_2 != 0) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar3 = (uint)param_2 & 0xffff;
    uVar2 = FUN_140d06a6c(param_1 + 0x1b0,
                          ((uint)param_2 << 0x10 | uVar3) + (int)((ulonglong)param_2 >> 0x20) +
                          (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4),&local_18);
    FUN_144a82394(uVar2,param_3);
  }
  if ((*param_3 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*param_3 + 0x50));
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f7bf34 FUN_147f7bf34 body=359 status=ok
// SIG undefined FUN_147f7bf34(void)

uint FUN_147f7bf34(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint unaff_EBP;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != 0) {
    lVar5 = param_3[1];
    if (lVar5 == 0) {
      if (DAT_14cb256c8 == 0) {
        uVar4 = FUN_140cd185c();
        DAT_14cb256c8 = FUN_140002ddd(FUN_141819010,uVar4,L"WwiseGameParameterDef");
      }
      lVar5 = FUN_14477b664(DAT_14cb256c8);
      param_3[1] = lVar5;
    }
    if (param_3[2] == 0) {
      if ((lVar5 != 0) && (*param_3 != 0)) {
        plVar2 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          param_3[2] = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar5 = FUN_144aff482(uVar4,param_3);
          param_3[2] = lVar5;
          if (lVar5 != 0) goto LAB_147f7bf74;
        }
      }
    }
    else {
LAB_147f7bf74:
      FUN_14026e798(&local_48,param_1);
      if (local_48 != 0) {
        unaff_EBP = FUN_147f7c09c(local_48,param_2,param_3,param_4);
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_40 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_40 + 0x10))(local_40);
          }
        }
      }
      if (local_48 != 0) goto LAB_147f7bfbe;
    }
  }
  unaff_EBP = 0;
LAB_147f7bfbe:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_EBP & 0xffffff01;
}



// FUNCTION 147f7c09c FUN_147f7c09c body=507 status=ok
// SIG undefined FUN_147f7c09c(void)

undefined4 FUN_147f7c09c(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = param_3[1];
  if (lVar6 == 0) {
    if (DAT_14cb256c8 == 0) {
      uVar5 = FUN_140cd185c();
      DAT_14cb256c8 = FUN_140002ddd(FUN_141819010,uVar5,L"WwiseGameParameterDef");
    }
    lVar6 = FUN_14477b664(DAT_14cb256c8);
    param_3[1] = lVar6;
  }
  if (param_3[2] == 0) {
    uVar4 = 0;
    if ((lVar6 == 0) || (uVar4 = 0, *param_3 == 0)) goto LAB_147f7c110;
    plVar1 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
      param_3[2] = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar6 = FUN_144aff482(uVar5,param_3);
      param_3[2] = lVar6;
      if (lVar6 != 0) goto LAB_147f7c0d7;
    }
  }
  else {
LAB_147f7c0d7:
    FUN_1403c747e(param_1,&local_40,param_2);
    plVar1 = local_40;
    if (local_40 != (longlong *)0x0) {
      if (*local_40 == -1) {
        uVar4 = 0;
      }
      else {
        lVar6 = param_3[1];
        if (lVar6 == 0) {
          if (DAT_14cb256c8 == 0) {
            uVar5 = FUN_140cd185c();
            DAT_14cb256c8 = FUN_140002ddd(FUN_141819010,uVar5,L"WwiseGameParameterDef");
          }
          lVar6 = FUN_14477b664(DAT_14cb256c8);
          param_3[1] = lVar6;
        }
        lVar7 = param_3[2];
        if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*param_3 != 0)) {
          plVar2 = *(longlong **)(lVar6 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
            lVar7 = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar7 = FUN_144aff482(uVar5,param_3);
          }
          param_3[2] = lVar7;
        }
        uVar4 = FUN_147f7cd32(plVar1,*(undefined4 *)(lVar7 + 0x38),param_4);
        if (local_40 == (longlong *)0x0) goto LAB_147f7c110;
      }
      *(int *)(local_40 + 0x21) = (int)local_40[0x21] + -1;
      FUN_140d274d8(local_40);
      goto LAB_147f7c110;
    }
  }
  uVar4 = 0;
LAB_147f7c110:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 147f7c298 FUN_147f7c298 body=176 status=ok
// SIG undefined FUN_147f7c298(void)

void FUN_147f7c298(longlong *param_1,undefined8 param_2,undefined1 *param_3,undefined4 *param_4,
                  undefined8 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  *param_4 = 0;
  param_5[2] = DAT_14c8464f0;
  uVar6 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *param_5 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_5[1] = uVar6;
  *(undefined8 *)(param_6 + 4) = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *param_6 = (undefined4)DAT_14c8464e0;
  param_6[1] = uVar1;
  param_6[2] = uVar2;
  param_6[3] = uVar3;
  if (param_1 != (longlong *)0x0) {
    lVar5 = (**(code **)(*param_1 + 0x180))();
    if (lVar5 != 0) {
      uVar6 = (**(code **)(*param_1 + 0x180))(param_1);
      uVar4 = FUN_14181a51d(uVar6,param_2,param_5,param_6,param_4,1,1);
      goto LAB_147f7c338;
    }
  }
  uVar4 = 0;
LAB_147f7c338:
  *param_3 = uVar4;
  return;
}



// FUNCTION 147f7c348 FUN_147f7c348 body=167 status=ok
// SIG undefined FUN_147f7c348(void)

undefined4 FUN_147f7c348(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_1 + 0x180))();
    if (lVar2 != 0) {
      FUN_14026e798(local_40,param_4);
      uVar3 = FUN_140206ee8(param_3,local_40);
      uVar1 = FUN_140849a6e(uVar3,lVar2,param_2);
      goto LAB_147f7c3b0;
    }
  }
  uVar1 = 0;
LAB_147f7c3b0:
  if ((*(longlong *)(param_3 + 0x28) != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_3 + 0x28) + 0x50));
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f7c3f0 FUN_147f7c3f0 body=147 status=ok
// SIG undefined FUN_147f7c3f0(void)

void FUN_147f7c3f0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (longlong *)0x0) {
    lVar3 = (**(code **)(*param_1 + 0x180))();
    if (((param_3 != 0) && (param_2 != 0)) && (lVar3 != 0)) {
      FUN_147f81710(local_30,lVar3,param_2,param_3);
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
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
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f7c484 FUN_147f7c484 body=208 status=ok
// SIG undefined FUN_147f7c484(void)

void FUN_147f7c484(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if ((param_1 != (longlong *)0x0) || (param_2[2] != 0)) {
    lVar1 = (**(code **)(*param_1 + 0x180))();
    if (lVar1 != 0) {
      uVar2 = FUN_14119d0a4(lVar1);
      lVar1 = FUN_147f7f9de(uVar2,*(undefined8 *)(param_3 + 4),param_3[1]);
      if (lVar1 == 0) {
        puVar3 = (undefined8 *)FUN_14001cc68(0x38,0x10);
        *puVar3 = &PTR_FUN_14acb4c90;
        puVar3[1] = *param_2;
        puVar3[2] = param_2[1];
        puVar3[3] = param_2[2];
        puVar3[4] = *(undefined8 *)(param_3 + 2);
        *(undefined4 *)(puVar3 + 5) = *param_3;
        *(undefined8 *)((longlong)puVar3 + 0x2c) = 0;
        FUN_14485c47a((longlong)puVar3 + 0x2c,*(undefined8 *)(param_3 + 4));
        FUN_140b1330e(uVar2,*(undefined8 *)(param_3 + 4),param_3[1],puVar3);
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0xffffffffffffffff;
  return;
}



// FUNCTION 147f7c554 FUN_147f7c554 body=124 status=ok
// SIG undefined FUN_147f7c554(void)

void FUN_147f7c554(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    FUN_1408f67ec(&local_20,param_1,0);
    if (local_20 != 0) {
      FUN_1413d8b4a();
    }
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_18)(local_18);
        LOCK();
        piVar2 = (int *)((longlong)local_18 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_18 + 0x10))(local_18);
        }
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f7c5d1 FUN_147f7c5d1 body=81 status=ok
// SIG undefined FUN_147f7c5d1(void)

void FUN_147f7c5d1(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((DAT_14cb259f8 != 0) && (DAT_14cb25ab0 == '\x01')) {
    lVar3 = (longlong)(int)(*(longlong **)(DAT_14cb259f8 + 0x40))[1];
    if (lVar3 != 0) {
      lVar1 = **(longlong **)(DAT_14cb259f8 + 0x40);
      lVar2 = 0;
      do {
        if (*(longlong *)(lVar1 + lVar2) != 0) {
          FUN_14033a7c0();
        }
        lVar2 = lVar2 + 8;
      } while (lVar3 * 8 != lVar2);
    }
  }
  return;
}



// FUNCTION 147f7c636 FUN_147f7c636 body=84 status=ok
// SIG undefined FUN_147f7c636(void)

void FUN_147f7c636(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14479d2ce(&DAT_14cb25820);
  lVar2 = 0;
  if (lVar1 != param_2) {
    lVar2 = param_2;
  }
  FUN_14485c47a(&DAT_14cb25820,lVar2);
  lVar2 = DAT_14cb259f8;
  if (DAT_14cb259f8 == 0) {
    return;
  }
  FUN_140072006(*(undefined8 *)(DAT_14cb259f8 + 0x40));
  FUN_1456c1d4e(*(undefined8 *)(lVar2 + 0x70));
  return;
}



// FUNCTION 147f7c68a FUN_147f7c68a body=154 status=ok
// SIG undefined FUN_147f7c68a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147f7c68a(void)

{
  _DAT_14cb25958 = &PTR_FUN_14acb4cb0;
  _DAT_14cb25960 = &PTR_FUN_14acb4ce0;
  _DAT_14cb25968 = 0;
  uRam000000014cb25970 = 0;
  DAT_14cb25978 = 0;
  DAT_14cb2597c = 0xffffffff;
  _DAT_14cb259a0 = 0;
  DAT_14cb259a8 = 0;
  DAT_14cb25980 = 0;
  _DAT_14cb25988 = 0;
  _DAT_14cb259ac = 0xffffffff00000080;
  _DAT_14cb259b4 = 0;
  DAT_14cb259c0 = 0;
  DAT_14cb259c8 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cb259d0);
                    /* WARNING: Could not recover jumptable at 0x000147f7c71d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cb259d0,4000);
  return;
}



// FUNCTION 147f7c724 FUN_147f7c724 body=258 status=ok
// SIG undefined FUN_147f7c724(void)

void FUN_147f7c724(void)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb25ab0 == '\x01') {
    plVar2 = (longlong *)FUN_144a7e30a();
    lVar4 = plVar2[0x22];
    if (lVar4 == 0) {
      (**(code **)(*plVar2 + 1000))(plVar2);
      lVar4 = plVar2[0x22];
    }
    local_38 = 0;
    iVar5 = *(int *)(lVar4 + 0x1d0);
    uVar1 = *(undefined8 *)(lVar4 + 0x1c8);
    local_30 = iVar5;
    if (iVar5 == 0) {
      local_2c = 0;
      iVar5 = 0;
    }
    else {
      FUN_140b856de(&local_38,iVar5,0);
      FUN_140b8566a(local_38,uVar1,iVar5);
      iVar5 = 0;
      if ((longlong)local_30 != 0) {
        lVar3 = (longlong)local_30 << 4;
        lVar4 = local_38;
        do {
          FUN_1438a4e74(lVar4);
          lVar4 = lVar4 + 0x10;
          lVar3 = lVar3 + -0x10;
          iVar5 = local_30;
        } while (lVar3 != 0);
      }
    }
    FUN_1447a1747(local_38,iVar5);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f7c828 FUN_147f7c828 body=46 status=ok
// SIG undefined FUN_147f7c828(void)

undefined8 * FUN_147f7c828(longlong param_1,undefined8 *param_2)

{
  if (DAT_14cb25ab0 == '\x01') {
    FUN_147f7c856(*(undefined8 *)(param_1 + 0x40),param_2);
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_2;
}



// FUNCTION 147f7c856 FUN_147f7c856 body=147 status=ok
// SIG undefined FUN_147f7c856(void)

longlong * FUN_147f7c856(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar7);
      if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) == param_3)) {
        lVar5 = *(longlong *)(lVar3 + 8 + lVar7);
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
        }
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_144796c16(param_2,iVar2);
        }
        lVar6 = *param_2;
        *(longlong *)(lVar6 + (longlong)iVar2 * 0x10) = lVar4;
        *(longlong *)(lVar6 + 8 + (longlong)iVar2 * 0x10) = lVar5;
      }
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar7);
  }
  return param_2;
}



// FUNCTION 147f7c8ea FUN_147f7c8ea body=64 status=ok
// SIG undefined FUN_147f7c8ea(void)

void FUN_147f7c8ea(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_147f7ff04();
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000147f7c91f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147f7c92a FUN_147f7c92a body=111 status=ok
// SIG undefined FUN_147f7c92a(void)

void FUN_147f7c92a(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  FUN_147f8000a();
  puVar2 = *(undefined8 **)(param_2 + 8);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f7c9aa FUN_147f7c9aa body=26 status=ok
// SIG undefined FUN_147f7c9aa(void)

void FUN_147f7c9aa(__uint64 *param_1,float param_2)

{
  *(float *)(param_1 + 0x22) = param_2;
  if (DAT_14cb25ab0 == '\x01') {
    AK::SoundEngine::SetScalingFactor(*param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 147f7c9c4 FUN_147f7c9c4 body=61 status=ok
// SIG undefined FUN_147f7c9c4(void)

void FUN_147f7c9c4(longlong param_1)

{
  longlong *in_stack_00000028;
  
  if ((*(int *)(param_1 + 0x38) != 0) && (*(longlong **)(param_1 + 0x30) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x60))();
  }
  if (*in_stack_00000028 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147f7ca02 FUN_147f7ca02 body=57 status=ok
// SIG undefined FUN_147f7ca02(void)

void FUN_147f7ca02(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  
  if ((*(int *)(param_1 + 0x68) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x60), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2,param_3);
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147f7ca3c FUN_147f7ca3c body=96 status=ok
// SIG undefined FUN_147f7ca3c(void)

void FUN_147f7ca3c(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(int *)(param_1 + 0x98) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x90), plVar1 != (longlong *)0x0)) {
    local_10 = *(undefined4 *)(param_3 + 1);
    local_18 = *param_3;
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f7ca9e FUN_147f7ca9e body=363 status=ok
// SIG undefined FUN_147f7ca9e(void)

void FUN_147f7ca9e(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_78 [36];
  uint local_54;
  uint *local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_54 = param_2;
  if (*(int *)(param_1 + 0x4f) != *(int *)((longlong)param_1 + 0x2a4)) {
    puVar4 = param_1 + 0x55;
    if ((undefined8 *)param_1[0x56] != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)param_1[0x56];
    }
    iVar5 = *(int *)((longlong)puVar4 + (ulonglong)(*(int *)(param_1 + 0x57) - 1U & param_2) * 4);
    if (iVar5 != -1) {
      lVar1 = param_1[0x4e];
      do {
        if (*(uint *)(lVar1 + (longlong)iVar5 * 0x18) == param_2) goto LAB_147f7cbe4;
        iVar5 = *(int *)(lVar1 + (longlong)iVar5 * 0x18 + 0x10);
      } while (iVar5 != -1);
    }
  }
  local_50 = &local_54;
  FUN_147f801a2(param_1 + 0x4e,&local_44);
  lVar1 = param_1[0x4e];
  puVar4 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  ((LPCRITICAL_SECTION)(puVar4 + 8))->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  puVar4[9] = 0;
  puVar4[0xe] = 0;
  FUN_147f7cc0a(puVar4);
  uVar3 = local_54;
  plVar6 = (longlong *)(lVar1 + (longlong)local_44 * 0x18 + 8);
  *plVar6 = (longlong)puVar4;
  uVar2 = *param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)(puVar4 + 8));
  puVar4[0xe] = uVar2;
  *(uint *)(puVar4 + 0xd) = uVar3;
  if ((LPCRITICAL_SECTION)(puVar4 + 8) != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(puVar4 + 8));
  }
  lVar1 = *plVar6;
  if ((*(char *)(lVar1 + 8) == '\0') && (DAT_14cb259f8 != 0)) {
    if (lVar1 != 0) {
      FUN_140aeb4a6(lVar1);
    }
    *(undefined1 *)(lVar1 + 8) = 1;
  }
LAB_147f7cbe4:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f7cc0a FUN_147f7cc0a body=107 status=ok
// SIG undefined FUN_147f7cc0a(void)

undefined8 * FUN_147f7cc0a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14acb4d38;
  *(undefined1 *)(param_1 + 1) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 2),4000);
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 8),4000);
  return param_1;
}



// FUNCTION 147f7cc76 FUN_147f7cc76 body=187 status=ok
// SIG undefined FUN_147f7cc76(void)

void FUN_147f7cc76(longlong param_1,uint param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x278) != *(int *)(param_1 + 0x2a4)) {
    lVar3 = param_1 + 0x2a8;
    if (*(longlong *)(param_1 + 0x2b0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x2b0);
    }
    uVar4 = *(uint *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x2b8) - 1U & param_2) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x270) + (longlong)(int)uVar4 * 0x18);
        if (*puVar1 == param_2) {
          if ((puVar1 + 2 != (uint *)0x0 && puVar1 != (uint *)0x0) &&
             (puVar2 = *(undefined8 **)(puVar1 + 2), puVar2 != (undefined8 *)0x0)) {
            if ((*(char *)(puVar2 + 1) == '\x01') && (DAT_14cb259f8 != 0)) {
              FUN_140993502(puVar2);
              *(undefined1 *)(puVar2 + 1) = 0;
              LOCK();
              *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
              UNLOCK();
            }
            (**(code **)*puVar2)(puVar2,1);
          }
          break;
        }
        uVar4 = puVar1[4];
      } while (uVar4 != 0xffffffff);
    }
  }
  FUN_147f8063c((longlong *)(param_1 + 0x270),param_2);
  return;
}



// FUNCTION 147f7cd32 FUN_147f7cd32 body=181 status=ok
// SIG undefined FUN_147f7cd32(void)

bool FUN_147f7cd32(longlong param_1,uint param_2,undefined4 *param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x278) != *(int *)(param_1 + 0x2a4)) {
    lVar4 = param_1 + 0x2a8;
    if (*(longlong *)(param_1 + 0x2b0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x2b0);
    }
    uVar2 = *(uint *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x2b8) - 1U & param_2) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x270) + (longlong)(int)uVar2 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 2 == (uint *)0x0 || puVar1 == (uint *)0x0) {
            return false;
          }
          lVar4 = *(longlong *)(puVar1 + 2);
          if (lVar4 == 0) {
            return false;
          }
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x10));
          *param_3 = *(undefined4 *)(lVar4 + 0x38);
          iVar3 = *(int *)(lVar4 + 0x3c);
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x10));
          return iVar3 != 0;
        }
        uVar2 = puVar1[4];
      } while (uVar2 != 0xffffffff);
    }
  }
  return false;
}



// FUNCTION 147f7cde8 FUN_147f7cde8 body=175 status=ok
// SIG undefined FUN_147f7cde8(void)

void FUN_147f7cde8(longlong param_1)

{
  AKRESULT AVar1;
  undefined1 auStackY_58 [32];
  RTPCValue_type local_30;
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStackY_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  local_2c = 0.0;
  local_30 = 2;
  AVar1 = AK::SoundEngine::Query::GetRTPCValue
                    (*(uint *)(param_1 + 0x68),*(__uint64 *)(param_1 + 0x70),0,&local_2c,&local_30);
  if (AVar1 == 1) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    *(float *)(param_1 + 0x38) = local_2c;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  LOCK();
  *(uint *)(param_1 + 0x3c) = (uint)(AVar1 == 1);
  UNLOCK();
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  if ((local_28 ^ (ulonglong)auStackY_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f7ce98 FUN_147f7ce98 body=8 status=ok
// SIG undefined FUN_147f7ce98(void)

void FUN_147f7ce98(undefined1 *param_1,undefined8 param_2)

{
  *param_1 = 1;
  *(undefined8 *)(param_1 + 4) = param_2;
  return;
}



// FUNCTION 147f7cea0 FUN_147f7cea0 body=229 status=ok
// SIG undefined FUN_147f7cea0(void)

undefined4
FUN_147f7cea0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  void *_Src;
  undefined4 uVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140056680(&local_58);
  _Src = local_58;
  local_68 = (void *)0x0;
  local_60 = local_50;
  if ((longlong)local_50 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_50,0);
    memcpy(local_68,_Src,(longlong)local_50 * 2);
  }
  local_70 = param_6;
  local_78 = param_5;
  uVar1 = FUN_147f7cf86(param_1,&local_68,param_3,param_4);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f7cf86 FUN_147f7cf86 body=812 status=ok
// SIG undefined FUN_147f7cf86(void)

undefined8
FUN_147f7cf86(longlong param_1,longlong *param_2,uint param_3,undefined8 param_4,undefined1 *param_5
             ,longlong *param_6)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_b8 [32];
  undefined2 **local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  longlong **local_60;
  longlong **local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar7 = 0;
  param_6[1] = 0;
  *(undefined4 *)(param_6 + 5) = *(undefined4 *)(param_1 + 0x24);
  param_6[3] = 0;
  *(undefined4 *)(param_6 + 2) = 0xffffffff;
  *param_6 = 0;
  if (param_3 == 3) goto LAB_147f7cfd7;
  local_98 = &local_78;
  local_78 = (undefined2 *)0x0;
  uStack_70 = 0;
  iVar2 = FUN_1438a4f8c(0,param_2,param_4,param_3);
  uVar7 = 2;
  if ((iVar2 == 1) && (1 < (int)uStack_70)) {
    if (param_3 == 0) {
      plVar5 = (longlong *)FUN_14054d1d4();
      puVar6 = local_78;
      if ((int)uStack_70 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      lVar4 = (**(code **)(*plVar5 + 0x108))(plVar5,puVar6);
      *param_6 = lVar4;
      if (0 < lVar4) {
        plVar3 = (longlong *)FUN_1400dbadc();
        plVar5 = (longlong *)*plVar3;
        if (plVar5 == (longlong *)0x0) {
          plVar5 = (longlong *)FUN_140e92164();
          *plVar3 = (longlong)plVar5;
        }
        puVar6 = local_78;
        if ((int)uStack_70 == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        lVar4 = (**(code **)(*plVar5 + 0x178))(plVar5,puVar6);
        if (lVar4 != 0) {
          *param_5 = 1;
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
          plVar5 = (longlong *)FUN_14001cc68(0x38,0x10);
          plVar5[1] = (longlong)&DAT_100000001;
          *plVar5 = (longlong)&PTR_FUN_14acb52a0;
          *(undefined1 *)(plVar5 + 3) = 0;
          plVar5[2] = (longlong)&PTR_FUN_14acb52c0;
          plVar5[4] = lVar4;
          plVar5[5] = 0;
          plVar5[6] = 0;
          goto LAB_147f7d153;
        }
      }
    }
    else if (param_3 < 3) {
      plVar3 = (longlong *)FUN_1400dbadc();
      plVar5 = (longlong *)*plVar3;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)FUN_140e92164();
        *plVar3 = (longlong)plVar5;
      }
      puVar6 = local_78;
      if ((int)uStack_70 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      lVar4 = (**(code **)(*plVar5 + 0x100))(plVar5,puVar6,0,0);
      if (lVar4 != 0) {
        *param_5 = 1;
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
        plVar5 = (longlong *)FUN_14001cc68(0x28,0x10);
        plVar5[1] = (longlong)&DAT_100000001;
        *plVar5 = (longlong)&PTR_FUN_14acb5320;
        *(undefined1 *)(plVar5 + 3) = 0;
        plVar5[2] = (longlong)&PTR_FUN_14acb5340;
        plVar5[4] = lVar4;
LAB_147f7d153:
        local_88 = plVar5 + 2;
        local_80 = plVar5;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          LOCK();
          plVar3 = plVar5 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar5)();
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar5 + 0x10))();
            }
          }
        }
        local_58 = &local_88;
        param_6[3] = (longlong)local_88;
        *(uint *)(param_6 + 2) = -(uint)(local_88 == (longlong *)0x0) | 0x10;
        local_60 = &local_90;
        local_90 = local_88;
        FUN_1449dba4a(param_1 + 0x28,local_4c);
        plVar5 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_80 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
        uVar7 = 1;
      }
    }
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_147f7cfd7:
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 147f7d2b4 FUN_147f7d2b4 body=257 status=ok
// SIG undefined FUN_147f7d2b4(void)

ulonglong FUN_147f7d2b4(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*(int *)(param_2 + 0x10) == 0x10) {
    lVar8 = *(longlong *)(param_2 + 0x18);
  }
  else {
    lVar8 = 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x70);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar7 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x60);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_1 + 0x68) - 1U &
                             (int)lVar8 + (int)((ulonglong)lVar8 >> 0x20) * 0x17) * 4);
    if (iVar6 != -1) {
      do {
        lVar7 = *(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 0x20) == lVar8) {
          LeaveCriticalSection(lpCriticalSection);
          if (lVar7 == 0) goto LAB_147f7d2f0;
          plVar3 = *(longlong **)(lVar7 + 8);
          plVar4 = *(longlong **)(lVar7 + 0x10);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          if (plVar3 != (longlong *)0x0) {
            uVar5 = (**(code **)(*plVar3 + 8))(plVar3,param_4);
            param_4 = (ulonglong)uVar5;
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
          if (plVar3 == (longlong *)0x0) goto LAB_147f7d2f0;
          goto LAB_147f7d2f5;
        }
        iVar6 = *(int *)(lVar7 + 0x18);
      } while (iVar6 != -1);
    }
  }
  LeaveCriticalSection(lpCriticalSection);
LAB_147f7d2f0:
  param_4 = 2;
LAB_147f7d2f5:
  return param_4 & 0xffffffff;
}



// FUNCTION 147f7d3bc FUN_147f7d3bc body=422 status=ok
// SIG undefined FUN_147f7d3bc(void)

undefined8 FUN_147f7d3bc(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[1] == 0) {
    if (DAT_14cb256c8 == 0) {
      uVar5 = FUN_140cd185c();
      DAT_14cb256c8 = FUN_140002ddd(FUN_141819010,uVar5,L"WwiseGameParameterDef");
    }
    uVar5 = FUN_14477b664(DAT_14cb256c8);
    param_1[1] = uVar5;
  }
  lVar6 = param_2[1];
  if ((param_2[1] == 0) && (lVar6 = DAT_14cb256c8, DAT_14cb256c8 == 0)) {
    uVar5 = FUN_140cd185c();
    lVar6 = FUN_140002ddd(FUN_141819010,uVar5,L"WwiseGameParameterDef");
    DAT_14cb256c8 = lVar6;
  }
  uVar5 = *param_2;
  uVar4 = FUN_14477b664(lVar6);
  local_48 = uVar5;
  uVar2 = FUN_144a7891a(uVar4);
  local_50 = *param_1;
  uVar5 = param_1[1];
  uVar3 = FUN_144a7891a(uVar5);
  local_68 = uVar4;
  local_60 = &local_48;
  cVar1 = FUN_144a789b8(uVar3,uVar5,&local_50,uVar2);
  if (cVar1 == '\0') {
    uVar5 = 0;
  }
  else {
    if (param_1[4] == 0) {
      uVar5 = FUN_14016979c();
      uVar5 = FUN_14477b664(uVar5);
      param_1[4] = uVar5;
    }
    lVar6 = param_2[4];
    if (lVar6 == 0) {
      lVar6 = FUN_14016979c();
    }
    uVar5 = param_2[3];
    uVar4 = FUN_14477b664(lVar6);
    local_48 = uVar5;
    uVar2 = FUN_144a7891a(uVar4);
    local_50 = param_1[3];
    uVar5 = param_1[4];
    uVar3 = FUN_144a7891a(uVar5);
    local_68 = uVar4;
    local_60 = &local_48;
    uVar5 = FUN_144a789b8(uVar3,uVar5,&local_50,uVar2);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f7d564 FUN_147f7d564 body=13 status=ok
// SIG undefined FUN_147f7d564(void)

void FUN_147f7d564(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  FUN_14485c47a(param_1 + 0x30);
  return;
}



// FUNCTION 147f7d5a6 FUN_147f7d5a6 body=29 status=ok
// SIG undefined FUN_147f7d5a6(void)

undefined8 FUN_147f7d5a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f7d60a FUN_147f7d60a body=102 status=ok
// SIG undefined FUN_147f7d60a(void)

undefined8 FUN_147f7d60a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
    do {
      if (*(char *)(param_3 + -0x30) == '\0') {
        *(undefined1 *)(param_2 + -0x30) = 0;
        *(undefined8 *)(param_2 + -0x38) = *(undefined8 *)(param_3 + -0x38);
      }
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      uVar1 = *(undefined4 *)(param_3 + -0x28);
      uVar2 = *(undefined4 *)(param_3 + -0x24);
      uVar3 = *(undefined4 *)(param_3 + -0x20);
      uVar4 = *(undefined4 *)(param_3 + -0x1c);
      uVar5 = *(undefined4 *)(param_3 + -0x14);
      uVar6 = *(undefined4 *)(param_3 + -0x10);
      uVar7 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar5;
      *(undefined4 *)(param_2 + -0x10) = uVar6;
      *(undefined4 *)(param_2 + -0xc) = uVar7;
      *(undefined4 *)(param_2 + -0x28) = uVar1;
      *(undefined4 *)(param_2 + -0x24) = uVar2;
      *(undefined4 *)(param_2 + -0x20) = uVar3;
      *(undefined4 *)(param_2 + -0x1c) = uVar4;
      FUN_147f7d776(param_2,param_3);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f7d698 FUN_147f7d698 body=59 status=ok
// SIG undefined FUN_147f7d698(void)

undefined8 FUN_147f7d698(longlong *param_1)

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



// FUNCTION 147f7d6de FUN_147f7d6de body=32 status=ok
// SIG undefined FUN_147f7d6de(void)

void FUN_147f7d6de(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_147f7d738(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}


