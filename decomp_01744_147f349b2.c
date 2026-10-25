// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147f349b2 FUN_147f349b2 body=38 status=ok
// SIG undefined FUN_147f349b2(void)

void FUN_147f349b2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2c0) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x2c0) = 0;
  }
  return;
}



// FUNCTION 147f34d5c FUN_147f34d5c body=104 status=ok
// SIG undefined FUN_147f34d5c(void)

undefined1 FUN_147f34d5c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 147f34dec FUN_147f34dec body=59 status=ok
// SIG undefined FUN_147f34dec(void)

undefined8 FUN_147f34dec(longlong *param_1)

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



// FUNCTION 147f34e38 FUN_147f34e38 body=38 status=ok
// SIG undefined FUN_147f34e38(void)

void FUN_147f34e38(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x448) == '\x01') {
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0x448) = 0;
  }
  return;
}



// FUNCTION 147f34eae FUN_147f34eae body=48 status=ok
// SIG undefined FUN_147f34eae(void)

void FUN_147f34eae(undefined8 param_1,undefined8 *param_2)

{
  FUN_1412ebe6c(param_2);
  *param_2 = &PTR_FUN_14ac6f9c0;
  *(undefined2 *)(param_2 + 0x39) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0x1ca) = 1;
  return;
}



// FUNCTION 147f34f06 FUN_147f34f06 body=88 status=ok
// SIG undefined FUN_147f34f06(void)

undefined8 FUN_147f34f06(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f313ac(param_2,param_3);
    *(undefined2 *)(param_2 + 0x1c8) = *(undefined2 *)(param_3 + 0x1c8);
    *(undefined1 *)(param_2 + 0x1ca) = *(undefined1 *)(param_3 + 0x1ca);
    param_2 = param_2 + 0x1d0;
    param_3 = param_3 + 0x1d0;
  }
  return 1;
}



// FUNCTION 147f34f86 FUN_147f34f86 body=59 status=ok
// SIG undefined FUN_147f34f86(void)

undefined8 FUN_147f34f86(longlong *param_1)

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



// FUNCTION 147f34fd2 FUN_147f34fd2 body=38 status=ok
// SIG undefined FUN_147f34fd2(void)

void FUN_147f34fd2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d0) == '\x01') {
    FUN_140ff0132(param_2);
    *(undefined1 *)(param_2 + 0x1d0) = 0;
  }
  return;
}



// FUNCTION 147f35074 FUN_147f35074 body=104 status=ok
// SIG undefined FUN_147f35074(void)

undefined1 FUN_147f35074(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 147f35104 FUN_147f35104 body=59 status=ok
// SIG undefined FUN_147f35104(void)

undefined8 FUN_147f35104(longlong *param_1)

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



// FUNCTION 147f35150 FUN_147f35150 body=38 status=ok
// SIG undefined FUN_147f35150(void)

void FUN_147f35150(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x448) == '\x01') {
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0x448) = 0;
  }
  return;
}



// FUNCTION 147f352de FUN_147f352de body=90 status=ok
// SIG undefined FUN_147f352de(void)

undefined8 FUN_147f352de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_3 + 0x18);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f35360 FUN_147f35360 body=59 status=ok
// SIG undefined FUN_147f35360(void)

undefined8 FUN_147f35360(longlong *param_1)

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



// FUNCTION 147f353a6 FUN_147f353a6 body=32 status=ok
// SIG undefined FUN_147f353a6(void)

void FUN_147f353a6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 147f35442 FUN_147f35442 body=97 status=ok
// SIG undefined FUN_147f35442(void)

undefined1 FUN_147f35442(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2f73c(param_2,param_3);
    *(undefined1 *)(param_2 + 0x418) = *(undefined1 *)(param_3 + 0x418);
    FUN_147f2f87a(param_2 + 0x420,param_3 + 0x420);
    param_2 = param_2 + 0x7b0;
    param_3 = param_3 + 0x7b0;
  }
  return 1;
}



// FUNCTION 147f354cc FUN_147f354cc body=59 status=ok
// SIG undefined FUN_147f354cc(void)

undefined8 FUN_147f354cc(longlong *param_1)

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



// FUNCTION 147f35518 FUN_147f35518 body=60 status=ok
// SIG undefined FUN_147f35518(void)

void FUN_147f35518(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xf6) == '\x01') {
    *param_2 = &PTR_FUN_14ac70010;
    FUN_1405f0bde(param_2 + 0x84);
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0xf6) = 0;
  }
  return;
}



// FUNCTION 147f355d4 FUN_147f355d4 body=63 status=ok
// SIG undefined FUN_147f355d4(void)

undefined1 FUN_147f355d4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f35700(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 147f3563c FUN_147f3563c body=59 status=ok
// SIG undefined FUN_147f3563c(void)

undefined8 FUN_147f3563c(longlong *param_1)

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



// FUNCTION 147f35688 FUN_147f35688 body=38 status=ok
// SIG undefined FUN_147f35688(void)

void FUN_147f35688(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 147f35700 FUN_147f35700 body=283 status=ok
// SIG undefined FUN_147f35700(void)

longlong FUN_147f35700(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  lVar8 = *(longlong *)(param_2 + 0x58);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = *(longlong *)(param_2 + 0x58);
    }
  }
  *(longlong *)(param_1 + 0x58) = lVar8;
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined1 *)(param_1 + 0xd8) = *(undefined1 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined1 *)(param_1 + 0xe8) = *(undefined1 *)(param_2 + 0xe8);
  return param_1;
}



// FUNCTION 147f35848 FUN_147f35848 body=162 status=ok
// SIG undefined FUN_147f35848(void)

undefined8 FUN_147f35848(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2f73c(param_2,param_3);
    puVar2 = (undefined8 *)(param_3 + 0x418);
    puVar3 = (undefined8 *)(param_2 + 0x418);
    for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined1 *)(param_2 + 0x458) = *(undefined1 *)(param_3 + 0x458);
    FUN_140186ed8(param_2 + 0x460,param_3 + 0x460);
    FUN_1405b70a4(param_2 + 0x530,param_3 + 0x530);
    *(undefined8 *)(param_2 + 0x540) = *(undefined8 *)(param_3 + 0x540);
    param_2 = param_2 + 0x548;
    param_3 = param_3 + 0x548;
  }
  return 1;
}



// FUNCTION 147f35912 FUN_147f35912 body=59 status=ok
// SIG undefined FUN_147f35912(void)

undefined8 FUN_147f35912(longlong *param_1)

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



// FUNCTION 147f3595e FUN_147f3595e body=38 status=ok
// SIG undefined FUN_147f3595e(void)

void FUN_147f3595e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x548) == '\x01') {
    FUN_140cb119e(param_2);
    *(undefined1 *)(param_2 + 0x548) = 0;
  }
  return;
}



// FUNCTION 147f359d2 FUN_147f359d2 body=448 status=ok
// SIG undefined FUN_147f359d2(void)

undefined8 * FUN_147f359d2(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  *param_1 = &PTR_FUN_14ac70500;
  param_1[0x85] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x83] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x84] = uVar1;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x86) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x434) = uVar2;
  *(undefined4 *)(param_1 + 0x87) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x43c) = uVar4;
  param_1[0x88] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  FUN_1446f470e(local_48,L"FGbxTerritoryAreaDataCache::AABBTree",1);
  param_1[0x8d] = 0;
  param_1[0x8c] = &PTR_LAB_14a1e3c98;
  *(undefined4 *)(param_1 + 0x8e) = 0xffffffff;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  FUN_1446f470e(local_48,L"FGbxTerritoryAreaDataCache::ExclusionAABBTree",1);
  param_1[0x94] = 0;
  param_1[0x93] = &PTR_LAB_14a1e3c98;
  *(undefined4 *)(param_1 + 0x95) = 0xffffffff;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0xa1) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x50c) = uVar2;
  *(undefined4 *)(param_1 + 0xa2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x514) = uVar4;
  param_1[0xa3] = DAT_14c8464f0;
  param_1[0xa4] = 0x7f7fffff00000000;
  *(undefined4 *)(param_1 + 0xa5) = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f35bc4 FUN_147f35bc4 body=63 status=ok
// SIG undefined FUN_147f35bc4(void)

undefined1 FUN_147f35bc4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f35d0c(param_2,param_3);
    param_3 = param_3 + 0x378;
    param_2 = param_2 + 0x378;
  }
  return 1;
}



// FUNCTION 147f35c2c FUN_147f35c2c body=59 status=ok
// SIG undefined FUN_147f35c2c(void)

undefined8 FUN_147f35c2c(longlong *param_1)

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



// FUNCTION 147f35c78 FUN_147f35c78 body=65 status=ok
// SIG undefined FUN_147f35c78(void)

void FUN_147f35c78(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x6f) == '\x01') {
    *param_2 = &PTR_FUN_14ac708c0;
    if (param_2[0x65] != 0) {
      FUN_1400020a8();
    }
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x6f) = 0;
  }
  return;
}



// FUNCTION 147f35d0c FUN_147f35d0c body=537 status=ok
// SIG undefined FUN_147f35d0c(void)

longlong FUN_147f35d0c(longlong param_1,longlong param_2)

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
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
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
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  puVar13 = (undefined8 *)(param_2 + 0x60);
  puVar14 = (undefined8 *)(param_1 + 0x60);
  for (lVar12 = 0xf; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  *(undefined1 *)(param_1 + 0xd8) = *(undefined1 *)(param_2 + 0xd8);
  *(undefined1 *)(param_1 + 0xf0) = *(undefined1 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  puVar13 = (undefined8 *)(param_2 + 0xf8);
  puVar14 = (undefined8 *)(param_1 + 0xf8);
  for (lVar12 = 0xf; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  *(undefined1 *)(param_1 + 0x170) = *(undefined1 *)(param_2 + 0x170);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_2 + 0x188);
  *(undefined1 *)(param_1 + 400) = *(undefined1 *)(param_2 + 400);
  puVar13 = (undefined8 *)(param_2 + 0x198);
  puVar14 = (undefined8 *)(param_1 + 0x198);
  for (lVar12 = 9; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  *(undefined1 *)(param_1 + 0x1f0) = *(undefined1 *)(param_2 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_2 + 0x1e8);
  puVar13 = (undefined8 *)(param_2 + 0x1f8);
  puVar14 = (undefined8 *)(param_1 + 0x1f8);
  for (lVar12 = 0xf; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  *(undefined1 *)(param_1 + 0x270) = *(undefined1 *)(param_2 + 0x270);
  *(undefined1 *)(param_1 + 0x288) = *(undefined1 *)(param_2 + 0x288);
  *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_2 + 0x280);
  puVar13 = (undefined8 *)(param_2 + 0x290);
  puVar14 = (undefined8 *)(param_1 + 0x290);
  for (lVar12 = 9; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  *(undefined1 *)(param_1 + 0x2e8) = *(undefined1 *)(param_2 + 0x2e8);
  *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_2 + 0x2e0);
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_2 + 0x2f0);
  uVar1 = *(undefined4 *)(param_2 + 0x2f8);
  uVar2 = *(undefined4 *)(param_2 + 0x2fc);
  uVar3 = *(undefined4 *)(param_2 + 0x300);
  uVar4 = *(undefined4 *)(param_2 + 0x304);
  uVar5 = *(undefined4 *)(param_2 + 0x308);
  uVar6 = *(undefined4 *)(param_2 + 0x30c);
  uVar7 = *(undefined4 *)(param_2 + 0x310);
  uVar8 = *(undefined4 *)(param_2 + 0x314);
  uVar9 = *(undefined4 *)(param_2 + 0x31b);
  uVar10 = *(undefined4 *)(param_2 + 799);
  uVar11 = *(undefined4 *)(param_2 + 0x323);
  *(undefined4 *)(param_1 + 0x317) = *(undefined4 *)(param_2 + 0x317);
  *(undefined4 *)(param_1 + 0x31b) = uVar9;
  *(undefined4 *)(param_1 + 799) = uVar10;
  *(undefined4 *)(param_1 + 0x323) = uVar11;
  *(undefined4 *)(param_1 + 0x308) = uVar5;
  *(undefined4 *)(param_1 + 0x30c) = uVar6;
  *(undefined4 *)(param_1 + 0x310) = uVar7;
  *(undefined4 *)(param_1 + 0x314) = uVar8;
  *(undefined4 *)(param_1 + 0x2f8) = uVar1;
  *(undefined4 *)(param_1 + 0x2fc) = uVar2;
  *(undefined4 *)(param_1 + 0x300) = uVar3;
  *(undefined4 *)(param_1 + 0x304) = uVar4;
  FUN_147f335da(param_1 + 0x328,param_2 + 0x328);
  *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_2 + 0x340);
  *(undefined1 *)(param_1 + 0x348) = *(undefined1 *)(param_2 + 0x348);
  *(undefined4 *)(param_1 + 0x350) = *(undefined4 *)(param_2 + 0x350);
  *(undefined1 *)(param_1 + 0x368) = *(undefined1 *)(param_2 + 0x368);
  *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(param_2 + 0x360);
  *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_2 + 0x370);
  return param_1;
}



// FUNCTION 147f35f26 FUN_147f35f26 body=37 status=ok
// SIG undefined FUN_147f35f26(void)

void FUN_147f35f26(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x4a0);
  FUN_147f3610a(param_2);
  return;
}



// FUNCTION 147f35f78 FUN_147f35f78 body=141 status=ok
// SIG undefined FUN_147f35f78(void)

undefined8 FUN_147f35f78(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
    uVar8 = *(undefined4 *)(param_3 + 0x438);
    uVar9 = *(undefined4 *)(param_3 + 0x43c);
    uVar10 = *(undefined4 *)(param_3 + 0x440);
    uVar11 = *(undefined4 *)(param_3 + 0x444);
    *(undefined4 *)(param_2 + 0x418) = *(undefined4 *)(param_3 + 0x418);
    *(undefined4 *)(param_2 + 0x41c) = uVar1;
    *(undefined4 *)(param_2 + 0x420) = uVar2;
    *(undefined4 *)(param_2 + 0x424) = uVar3;
    *(undefined4 *)(param_2 + 0x428) = uVar4;
    *(undefined4 *)(param_2 + 0x42c) = uVar5;
    *(undefined4 *)(param_2 + 0x430) = uVar6;
    *(undefined4 *)(param_2 + 0x434) = uVar7;
    *(undefined4 *)(param_2 + 0x438) = uVar8;
    *(undefined4 *)(param_2 + 0x43c) = uVar9;
    *(undefined4 *)(param_2 + 0x440) = uVar10;
    *(undefined4 *)(param_2 + 0x444) = uVar11;
    FUN_147f3395a(param_2 + 0x448,param_3 + 0x448);
    *(undefined8 *)(param_2 + 0x498) = *(undefined8 *)(param_3 + 0x498);
    param_2 = param_2 + 0x4a0;
    param_3 = param_3 + 0x4a0;
  }
  return 1;
}



// FUNCTION 147f3602e FUN_147f3602e body=59 status=ok
// SIG undefined FUN_147f3602e(void)

undefined8 FUN_147f3602e(longlong *param_1)

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



// FUNCTION 147f3607a FUN_147f3607a body=65 status=ok
// SIG undefined FUN_147f3607a(void)

void FUN_147f3607a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x94) == '\x01') {
    *param_2 = &PTR_FUN_14ac70ac0;
    if (param_2[0x91] != 0) {
      FUN_1400020a8();
    }
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0x94) = 0;
  }
  return;
}



// FUNCTION 147f3610a FUN_147f3610a body=194 status=ok
// SIG undefined FUN_147f3610a(void)

void FUN_147f3610a(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14ac70ac0;
  param_1[0x85] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x83] = DAT_14c8464e0;
  param_1[0x84] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_1[0x86] = DAT_14c8464e0;
  param_1[0x87] = uVar1;
  param_1[0x88] = DAT_14c8464f0;
  param_1[0x91] = 0;
  param_1[0x92] = 0x800000000;
  param_1[0x93] = 0;
  return;
}



// FUNCTION 147f361cc FUN_147f361cc body=68 status=ok
// SIG undefined FUN_147f361cc(void)

undefined8 * FUN_147f361cc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac70ac0;
  if (param_1[0x91] != 0) {
    FUN_1400020a8();
  }
  FUN_1405f0b44(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f36210 FUN_147f36210 body=55 status=ok
// SIG undefined FUN_147f36210(void)

void FUN_147f36210(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22c50 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22c50 = FUN_140002ddd(FUN_14643b2b4,uVar1,L"GpsGenerator_Trace");
  }
  return;
}



// FUNCTION 147f36248 FUN_147f36248 body=72 status=ok
// SIG undefined FUN_147f36248(void)

void FUN_147f36248(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *param_2 = &PTR_FUN_14ac73f10;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0x3dcccccd;
  param_2[6] = 0;
  param_2[7] = 0;
  return;
}



// FUNCTION 147f362a6 FUN_147f362a6 body=54 status=ok
// SIG undefined FUN_147f362a6(void)

undefined1 FUN_147f362a6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f363f2(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 147f36304 FUN_147f36304 body=59 status=ok
// SIG undefined FUN_147f36304(void)

undefined8 FUN_147f36304(longlong *param_1)

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



// FUNCTION 147f3634a FUN_147f3634a body=32 status=ok
// SIG undefined FUN_147f3634a(void)

void FUN_147f3634a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1459fe94a(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147f363b8 FUN_147f363b8 body=57 status=ok
// SIG undefined FUN_147f363b8(void)

void FUN_147f363b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22c68 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22c68 = FUN_140002ddd(FUN_14643b34b,uVar1,L"GpsGlobals");
  }
  return;
}



// FUNCTION 147f363f2 FUN_147f363f2 body=118 status=ok
// SIG undefined FUN_147f363f2(void)

longlong FUN_147f363f2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  lVar4 = *(longlong *)(param_2 + 0x38);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(longlong *)(param_1 + 0x38) = lVar4;
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



// FUNCTION 147f36554 FUN_147f36554 body=147 status=ok
// SIG undefined FUN_147f36554(void)

undefined8 FUN_147f36554(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined8 *)(param_2 + 0x58 + lVar10) = *(undefined8 *)(param_3 + 0x58 + lVar10);
      lVar10 = lVar10 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f36610 FUN_147f36610 body=59 status=ok
// SIG undefined FUN_147f36610(void)

undefined8 FUN_147f36610(longlong *param_1)

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



// FUNCTION 147f36656 FUN_147f36656 body=32 status=ok
// SIG undefined FUN_147f36656(void)

void FUN_147f36656(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 147f366c4 FUN_147f366c4 body=38 status=ok
// SIG undefined FUN_147f366c4(void)

undefined8 FUN_147f366c4(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f366ea FUN_147f366ea body=55 status=ok
// SIG undefined FUN_147f366ea(void)

void FUN_147f366ea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22c98 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22c98 = FUN_140002ddd(FUN_14643b3d9,uVar1,L"GpsModifierSettings");
  }
  return;
}



// FUNCTION 147f36722 FUN_147f36722 body=38 status=ok
// SIG undefined FUN_147f36722(void)

undefined8 FUN_147f36722(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f36748 FUN_147f36748 body=55 status=ok
// SIG undefined FUN_147f36748(void)

void FUN_147f36748(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22dd0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22dd0 = FUN_140002ddd(FUN_14643b40a,uVar1,L"GpsScoringNodeSettings");
  }
  return;
}



// FUNCTION 147f36810 FUN_147f36810 body=108 status=ok
// SIG undefined FUN_147f36810(void)

undefined8 FUN_147f36810(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_1470d03b0(param_2 + 8,param_3 + 8);
      FUN_1470d03b0(param_2 + 0x20,param_3 + 0x20);
    }
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    uVar1 = *(undefined4 *)(param_3 + 0x3c);
    uVar2 = *(undefined4 *)(param_3 + 0x40);
    uVar3 = *(undefined4 *)(param_3 + 0x44);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + 0x38);
    *(undefined4 *)(param_2 + 0x3c) = uVar1;
    *(undefined4 *)(param_2 + 0x40) = uVar2;
    *(undefined4 *)(param_2 + 0x44) = uVar3;
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
    *(undefined2 *)(param_2 + 0x54) = *(undefined2 *)(param_3 + 0x54);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 147f368a4 FUN_147f368a4 body=59 status=ok
// SIG undefined FUN_147f368a4(void)

undefined8 FUN_147f368a4(longlong *param_1)

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



// FUNCTION 147f368ea FUN_147f368ea body=32 status=ok
// SIG undefined FUN_147f368ea(void)

void FUN_147f368ea(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 147f36958 FUN_147f36958 body=38 status=ok
// SIG undefined FUN_147f36958(void)

undefined8 FUN_147f36958(undefined8 param_1,int param_2)

{
  FUN_140f9d4d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f3697e FUN_147f3697e body=55 status=ok
// SIG undefined FUN_147f3697e(void)

void FUN_147f3697e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22cb0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22cb0 = FUN_140002ddd(FUN_14643b46a,uVar1,L"GpsModifier");
  }
  return;
}



// FUNCTION 147f369c8 FUN_147f369c8 body=38 status=ok
// SIG undefined FUN_147f369c8(void)

undefined8 FUN_147f369c8(undefined8 param_1,int param_2)

{
  FUN_140f9d4d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f369ee FUN_147f369ee body=55 status=ok
// SIG undefined FUN_147f369ee(void)

void FUN_147f369ee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22de8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22de8 = FUN_140002ddd(FUN_14643b49b,uVar1,L"GpsScoringNode");
  }
  return;
}



// FUNCTION 147f36a26 FUN_147f36a26 body=37 status=ok
// SIG undefined FUN_147f36a26(void)

void FUN_147f36a26(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x88);
  FUN_147f36c50(param_2);
  return;
}



// FUNCTION 147f36a98 FUN_147f36a98 body=207 status=ok
// SIG undefined FUN_147f36a98(void)

undefined8 FUN_147f36a98(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined8 *)(param_2 + 0x58 + lVar10) = *(undefined8 *)(param_3 + 0x58 + lVar10);
      *(undefined4 *)(param_2 + 0x60 + lVar10) = *(undefined4 *)(param_3 + 0x60 + lVar10);
      *(undefined1 *)(param_2 + 0x78 + lVar10) = *(undefined1 *)(param_3 + 0x78 + lVar10);
      *(undefined8 *)(param_2 + 0x70 + lVar10) = *(undefined8 *)(param_3 + 0x70 + lVar10);
      *(undefined4 *)(param_2 + 0x80 + lVar10) = *(undefined4 *)(param_3 + 0x80 + lVar10);
      lVar10 = lVar10 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f36b90 FUN_147f36b90 body=59 status=ok
// SIG undefined FUN_147f36b90(void)

undefined8 FUN_147f36b90(longlong *param_1)

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



// FUNCTION 147f36bdc FUN_147f36bdc body=38 status=ok
// SIG undefined FUN_147f36bdc(void)

void FUN_147f36bdc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 147f36c50 FUN_147f36c50 body=110 status=ok
// SIG undefined FUN_147f36c50(void)

void FUN_147f36c50(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[7] = &PTR_FUN_14a1a0a00;
  *(undefined2 *)(param_1 + 10) = 1;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  *param_1 = &PTR_FUN_14ac714f0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0xd] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x10) = 0x42c80000;
  return;
}



// FUNCTION 147f36cbe FUN_147f36cbe body=38 status=ok
// SIG undefined FUN_147f36cbe(void)

undefined8 FUN_147f36cbe(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f36ce4 FUN_147f36ce4 body=55 status=ok
// SIG undefined FUN_147f36ce4(void)

void FUN_147f36ce4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22ce0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22ce0 = FUN_140002ddd(FUN_14643b561,uVar1,L"GpsModifierSettings_Noise");
  }
  return;
}



// FUNCTION 147f36db8 FUN_147f36db8 body=118 status=ok
// SIG undefined FUN_147f36db8(void)

undefined8 FUN_147f36db8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 147f36e56 FUN_147f36e56 body=59 status=ok
// SIG undefined FUN_147f36e56(void)

undefined8 FUN_147f36e56(longlong *param_1)

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



// FUNCTION 147f36e9c FUN_147f36e9c body=32 status=ok
// SIG undefined FUN_147f36e9c(void)

void FUN_147f36e9c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 147f36f0a FUN_147f36f0a body=38 status=ok
// SIG undefined FUN_147f36f0a(void)

undefined8 FUN_147f36f0a(undefined8 param_1,int param_2)

{
  FUN_140f9d4d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f36f30 FUN_147f36f30 body=55 status=ok
// SIG undefined FUN_147f36f30(void)

void FUN_147f36f30(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22cf8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22cf8 = FUN_140002ddd(FUN_14643b5f7,uVar1,L"GpsModifier_Noise");
  }
  return;
}



// FUNCTION 147f36f98 FUN_147f36f98 body=63 status=ok
// SIG undefined FUN_147f36f98(void)

undefined1 FUN_147f36f98(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f37286(param_2,param_3);
    param_3 = param_3 + 0x1d0;
    param_2 = param_2 + 0x1d0;
  }
  return 1;
}



// FUNCTION 147f37000 FUN_147f37000 body=59 status=ok
// SIG undefined FUN_147f37000(void)

undefined8 FUN_147f37000(longlong *param_1)

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



// FUNCTION 147f3704c FUN_147f3704c body=65 status=ok
// SIG undefined FUN_147f3704c(void)

void FUN_147f3704c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3a) == '\x01') {
    *param_2 = &PTR_FUN_14ac719c0;
    if (param_2[0x13] != 0) {
      FUN_1400020a8();
    }
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x3a) = 0;
  }
  return;
}



// FUNCTION 147f370dc FUN_147f370dc body=425 status=ok
// SIG undefined FUN_147f370dc(void)

undefined8 * FUN_147f370dc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[7] = &PTR_FUN_14a1a0a00;
  *(undefined2 *)(param_1 + 10) = 1;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  *param_1 = &PTR_FUN_14ac719c0;
  *(undefined2 *)(param_1 + 0xc) = 0x102;
  FUN_140ef4e54(param_1 + 0xd);
  *(undefined1 *)(param_1 + 0x15) = 1;
  uVar1 = DAT_14c9ab028;
  param_1[0x17] = DAT_14c9ab028;
  *(undefined1 *)(param_1 + 0x18) = 2;
  param_1[0x16] = &PTR_FUN_14a1a0a20;
  param_1[0x1b] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined2 *)(param_1 + 0x1c) = 1;
  *(undefined1 *)((longlong)param_1 + 0xe2) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  param_1[0x1f] = uVar1;
  *(undefined1 *)(param_1 + 0x20) = 2;
  param_1[0x1e] = &PTR_FUN_14a1a0a20;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined2 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x42c80000;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x24] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x27) = 0x42c80000;
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x28] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x2b) = 0x447a0000;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x2c] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x31] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x34) = 0x428c0000;
  param_1[0x36] = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  param_1[0x35] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x38) = 0x42b40000;
  *(undefined1 *)(param_1 + 0x39) = 0;
  return param_1;
}



// FUNCTION 147f37286 FUN_147f37286 body=404 status=ok
// SIG undefined FUN_147f37286(void)

longlong FUN_147f37286(longlong param_1,longlong param_2)

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
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(param_2 + 0x60);
  uVar1 = *(undefined4 *)(param_2 + 0x68);
  uVar2 = *(undefined4 *)(param_2 + 0x6c);
  uVar3 = *(undefined4 *)(param_2 + 0x70);
  uVar4 = *(undefined4 *)(param_2 + 0x74);
  uVar5 = *(undefined4 *)(param_2 + 0x78);
  uVar6 = *(undefined4 *)(param_2 + 0x7c);
  uVar7 = *(undefined4 *)(param_2 + 0x80);
  uVar8 = *(undefined4 *)(param_2 + 0x84);
  uVar9 = *(undefined4 *)(param_2 + 0x8b);
  uVar10 = *(undefined4 *)(param_2 + 0x8f);
  uVar11 = *(undefined4 *)(param_2 + 0x93);
  *(undefined4 *)(param_1 + 0x87) = *(undefined4 *)(param_2 + 0x87);
  *(undefined4 *)(param_1 + 0x8b) = uVar9;
  *(undefined4 *)(param_1 + 0x8f) = uVar10;
  *(undefined4 *)(param_1 + 0x93) = uVar11;
  *(undefined4 *)(param_1 + 0x78) = uVar5;
  *(undefined4 *)(param_1 + 0x7c) = uVar6;
  *(undefined4 *)(param_1 + 0x80) = uVar7;
  *(undefined4 *)(param_1 + 0x84) = uVar8;
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  *(undefined4 *)(param_1 + 0x74) = uVar4;
  FUN_147f335da(param_1 + 0x98,param_2 + 0x98);
  FUN_147f3741a(param_1 + 0xa8,param_2 + 0xa8);
  FUN_147f374bc(param_1 + 0xe8,param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  *(undefined1 *)(param_1 + 0x130) = *(undefined1 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
  *(undefined1 *)(param_1 + 0x150) = *(undefined1 *)(param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x148);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  *(undefined1 *)(param_1 + 0x170) = *(undefined1 *)(param_2 + 0x170);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
  *(undefined1 *)(param_1 + 0x180) = *(undefined1 *)(param_2 + 0x180);
  *(undefined1 *)(param_1 + 0x198) = *(undefined1 *)(param_2 + 0x198);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_2 + 400);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined1 *)(param_1 + 0x1b8) = *(undefined1 *)(param_2 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_2 + 0x1b0);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x1c0);
  *(undefined1 *)(param_1 + 0x1c8) = *(undefined1 *)(param_2 + 0x1c8);
  return param_1;
}



// FUNCTION 147f3741a FUN_147f3741a body=162 status=ok
// SIG undefined FUN_147f3741a(void)

undefined1 * FUN_147f3741a(undefined1 *param_1,undefined1 *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  param_1[0x18] = param_2[0x18];
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  lVar2 = *(longlong *)(param_2 + 0x20);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = *(longlong *)(param_2 + 0x20);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x20) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x28);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = *(longlong *)(param_2 + 0x28);
      bVar1 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x28) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x30);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = *(longlong *)(param_2 + 0x30);
    }
  }
  *(longlong *)(param_1 + 0x30) = lVar2;
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_2 + 0x38);
  param_1[0x3a] = param_2[0x3a];
  return param_1;
}



// FUNCTION 147f374bc FUN_147f374bc body=120 status=ok
// SIG undefined FUN_147f374bc(void)

undefined1 * FUN_147f374bc(undefined1 *param_1,undefined1 *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  param_1[0x18] = param_2[0x18];
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  lVar2 = *(longlong *)(param_2 + 0x20);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = *(longlong *)(param_2 + 0x20);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x20) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x28);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = *(longlong *)(param_2 + 0x28);
    }
  }
  *(longlong *)(param_1 + 0x28) = lVar2;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  return param_1;
}



// FUNCTION 147f37562 FUN_147f37562 body=63 status=ok
// SIG undefined FUN_147f37562(void)

undefined1 FUN_147f37562(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f37706(param_2,param_3);
    param_3 = param_3 + 0x140;
    param_2 = param_2 + 0x140;
  }
  return 1;
}



// FUNCTION 147f375ca FUN_147f375ca body=59 status=ok
// SIG undefined FUN_147f375ca(void)

undefined8 FUN_147f375ca(longlong *param_1)

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



// FUNCTION 147f37616 FUN_147f37616 body=38 status=ok
// SIG undefined FUN_147f37616(void)

void FUN_147f37616(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x140) == '\x01') {
    FUN_143866dea(param_2);
    *(undefined1 *)(param_2 + 0x140) = 0;
  }
  return;
}



// FUNCTION 147f37706 FUN_147f37706 body=245 status=ok
// SIG undefined FUN_147f37706(void)

longlong FUN_147f37706(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_2 + 0x54);
  uVar5 = *(undefined4 *)(param_2 + 0x5c);
  uVar6 = *(undefined4 *)(param_2 + 0x60);
  uVar7 = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  *(undefined4 *)(param_1 + 0x60) = uVar6;
  *(undefined4 *)(param_1 + 100) = uVar7;
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  FUN_147f3395a(param_1 + 0x70,param_2 + 0x70);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  uVar2 = *(undefined8 *)(param_2 + 0xd0);
  lVar3 = *(longlong *)(param_2 + 0xd8);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd0) = uVar2;
  *(longlong *)(param_1 + 0xd8) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  FUN_147f377fc(param_1 + 0xf0,param_2 + 0xf0);
  return param_1;
}



// FUNCTION 147f377fc FUN_147f377fc body=104 status=ok
// SIG undefined FUN_147f377fc(void)

void * FUN_147f377fc(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x40);
    if (*(void **)((longlong)param_2 + 0x40) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x48);
    *(int *)((longlong)param_1 + 0x48) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x4c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x4c) = 0x10;
    }
    else {
      FUN_14784e0d2(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x40);
        if (*(void **)((longlong)param_1 + 0x40) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f37896 FUN_147f37896 body=439 status=ok
// SIG undefined FUN_147f37896(void)

undefined8 FUN_147f37896(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
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
  longlong lVar15;
  
  if (param_4 != 0) {
    lVar15 = 0;
    do {
      lVar1 = param_2 + 8 + lVar15;
      lVar2 = param_3 + 8 + lVar15;
      puVar3 = (undefined4 *)(param_3 + 8 + lVar15);
      uVar5 = *puVar3;
      uVar6 = puVar3[1];
      uVar7 = puVar3[2];
      uVar8 = puVar3[3];
      uVar9 = puVar3[5];
      uVar10 = puVar3[6];
      uVar11 = puVar3[7];
      puVar4 = (undefined8 *)(param_2 + 0x78 + lVar15);
      *(undefined4 *)(puVar4 + -0xc) = puVar3[4];
      *(undefined4 *)((longlong)puVar4 + -0x5c) = uVar9;
      *(undefined4 *)(puVar4 + -0xb) = uVar10;
      *(undefined4 *)((longlong)puVar4 + -0x54) = uVar11;
      *(undefined4 *)(puVar4 + -0xe) = uVar5;
      *(undefined4 *)((longlong)puVar4 + -0x6c) = uVar6;
      *(undefined4 *)(puVar4 + -0xd) = uVar7;
      *(undefined4 *)((longlong)puVar4 + -100) = uVar8;
      FUN_1470d00c2(param_2 + 0x28 + lVar15,param_3 + 0x28 + lVar15);
      puVar4[-7] = *(undefined8 *)(puVar3 + 0xe);
      *(undefined1 *)(puVar4 + -6) = *(undefined1 *)(puVar3 + 0x10);
      *(undefined2 *)(puVar4 + -5) = *(undefined2 *)(puVar3 + 0x12);
      puVar4[-4] = *(undefined8 *)(puVar3 + 0x14);
      *(undefined1 *)(puVar4 + -1) = *(undefined1 *)(puVar3 + 0x1a);
      puVar4[-2] = *(undefined8 *)(puVar3 + 0x18);
      puVar13 = (undefined8 *)(puVar3 + 0x1c);
      puVar14 = puVar4;
      for (lVar12 = 0xf; lVar12 != 0; lVar12 = lVar12 + -1) {
        *puVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      }
      *(undefined1 *)(puVar4 + 0xf) = *(undefined1 *)(puVar3 + 0x3a);
      *(undefined1 *)(puVar4 + 0x12) = *(undefined1 *)(puVar3 + 0x40);
      puVar4[0x11] = *(undefined8 *)(puVar3 + 0x3e);
      puVar13 = (undefined8 *)(lVar2 + 0x108);
      puVar14 = (undefined8 *)(lVar1 + 0x108);
      for (lVar12 = 0xf; lVar12 != 0; lVar12 = lVar12 + -1) {
        *puVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      }
      *(undefined1 *)(puVar4 + 0x22) = *(undefined1 *)(puVar3 + 0x60);
      puVar4[0x24] = *(undefined8 *)(puVar3 + 100);
      *(undefined1 *)(puVar4 + 0x25) = *(undefined1 *)(puVar3 + 0x66);
      puVar13 = (undefined8 *)(lVar2 + 0x1a0);
      puVar14 = (undefined8 *)(lVar1 + 0x1a0);
      for (lVar12 = 9; lVar12 != 0; lVar12 = lVar12 + -1) {
        *puVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      }
      *(undefined1 *)(puVar4 + 0x31) = *(undefined1 *)(puVar3 + 0x7e);
      puVar4[0x30] = *(undefined8 *)(puVar3 + 0x7c);
      puVar13 = (undefined8 *)(lVar2 + 0x200);
      puVar14 = (undefined8 *)(lVar1 + 0x200);
      for (lVar12 = 0xf; lVar12 != 0; lVar12 = lVar12 + -1) {
        *puVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      }
      *(undefined1 *)(puVar4 + 0x41) = *(undefined1 *)(puVar3 + 0x9e);
      lVar15 = lVar15 + 0x288;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f37a76 FUN_147f37a76 body=59 status=ok
// SIG undefined FUN_147f37a76(void)

undefined8 FUN_147f37a76(longlong *param_1)

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



// FUNCTION 147f37ac2 FUN_147f37ac2 body=38 status=ok
// SIG undefined FUN_147f37ac2(void)

void FUN_147f37ac2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x288) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x288) = 0;
  }
  return;
}



// FUNCTION 147f37c4e FUN_147f37c4e body=146 status=ok
// SIG undefined FUN_147f37c4e(void)

undefined8 FUN_147f37c4e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_1470d03b0(param_2 + 8,param_3 + 8);
      FUN_1470d03b0(param_2 + 0x20,param_3 + 0x20);
    }
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    uVar1 = *(undefined4 *)(param_3 + 0x3c);
    uVar2 = *(undefined4 *)(param_3 + 0x40);
    uVar3 = *(undefined4 *)(param_3 + 0x44);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + 0x38);
    *(undefined4 *)(param_2 + 0x3c) = uVar1;
    *(undefined4 *)(param_2 + 0x40) = uVar2;
    *(undefined4 *)(param_2 + 0x44) = uVar3;
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
    *(undefined2 *)(param_2 + 0x54) = *(undefined2 *)(param_3 + 0x54);
    puVar5 = (undefined8 *)(param_3 + 0x58);
    puVar6 = (undefined8 *)(param_2 + 0x58);
    for (lVar4 = 0xf; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    param_3 = param_3 + 0xd0;
    param_2 = param_2 + 0xd0;
  }
  return 1;
}



// FUNCTION 147f37d08 FUN_147f37d08 body=59 status=ok
// SIG undefined FUN_147f37d08(void)

undefined8 FUN_147f37d08(longlong *param_1)

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



// FUNCTION 147f37d54 FUN_147f37d54 body=38 status=ok
// SIG undefined FUN_147f37d54(void)

void FUN_147f37d54(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 147f37dc8 FUN_147f37dc8 body=38 status=ok
// SIG undefined FUN_147f37dc8(void)

undefined8 FUN_147f37dc8(undefined8 param_1,int param_2)

{
  FUN_140f9d4d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f37dee FUN_147f37dee body=55 status=ok
// SIG undefined FUN_147f37dee(void)

void FUN_147f37dee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22d70 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22d70 = FUN_140002ddd(FUN_14643b7da,uVar1,L"GpsModifier_Transform");
  }
  return;
}



// FUNCTION 147f37ec8 FUN_147f37ec8 body=78 status=ok
// SIG undefined FUN_147f37ec8(void)

undefined1 FUN_147f37ec8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 147f37f3e FUN_147f37f3e body=59 status=ok
// SIG undefined FUN_147f37f3e(void)

undefined8 FUN_147f37f3e(longlong *param_1)

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



// FUNCTION 147f37f84 FUN_147f37f84 body=32 status=ok
// SIG undefined FUN_147f37f84(void)

void FUN_147f37f84(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 147f3807c FUN_147f3807c body=94 status=ok
// SIG undefined FUN_147f3807c(void)

undefined8 FUN_147f3807c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_1470d03b0(param_2 + 8,param_3 + 8);
      FUN_1470d03b0(param_2 + 0x20,param_3 + 0x20);
    }
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    uVar1 = *(undefined4 *)(param_3 + 0x3c);
    uVar2 = *(undefined4 *)(param_3 + 0x40);
    uVar3 = *(undefined4 *)(param_3 + 0x44);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + 0x38);
    *(undefined4 *)(param_2 + 0x3c) = uVar1;
    *(undefined4 *)(param_2 + 0x40) = uVar2;
    *(undefined4 *)(param_2 + 0x44) = uVar3;
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 147f38102 FUN_147f38102 body=59 status=ok
// SIG undefined FUN_147f38102(void)

undefined8 FUN_147f38102(longlong *param_1)

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



// FUNCTION 147f38148 FUN_147f38148 body=32 status=ok
// SIG undefined FUN_147f38148(void)

void FUN_147f38148(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147f3828c FUN_147f3828c body=100 status=ok
// SIG undefined FUN_147f3828c(void)

undefined8 FUN_147f3828c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
      *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_3 + 0x20);
      *(undefined2 *)(param_2 + 0x28) = *(undefined2 *)(param_3 + 0x28);
      param_3 = param_3 + 0x58;
      param_2 = param_2 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f38318 FUN_147f38318 body=59 status=ok
// SIG undefined FUN_147f38318(void)

undefined8 FUN_147f38318(longlong *param_1)

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



// FUNCTION 147f3835e FUN_147f3835e body=32 status=ok
// SIG undefined FUN_147f3835e(void)

void FUN_147f3835e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 147f3845e FUN_147f3845e body=108 status=ok
// SIG undefined FUN_147f3845e(void)

undefined8 FUN_147f3845e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_1470d03b0(param_2 + 8,param_3 + 8);
      FUN_1470d03b0(param_2 + 0x20,param_3 + 0x20);
    }
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    uVar1 = *(undefined4 *)(param_3 + 0x3c);
    uVar2 = *(undefined4 *)(param_3 + 0x40);
    uVar3 = *(undefined4 *)(param_3 + 0x44);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + 0x38);
    *(undefined4 *)(param_2 + 0x3c) = uVar1;
    *(undefined4 *)(param_2 + 0x40) = uVar2;
    *(undefined4 *)(param_2 + 0x44) = uVar3;
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
    *(undefined2 *)(param_2 + 0x54) = *(undefined2 *)(param_3 + 0x54);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 147f384f2 FUN_147f384f2 body=59 status=ok
// SIG undefined FUN_147f384f2(void)

undefined8 FUN_147f384f2(longlong *param_1)

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



// FUNCTION 147f38538 FUN_147f38538 body=32 status=ok
// SIG undefined FUN_147f38538(void)

void FUN_147f38538(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 147f3865a FUN_147f3865a body=84 status=ok
// SIG undefined FUN_147f3865a(void)

undefined8 FUN_147f3865a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f386d6 FUN_147f386d6 body=59 status=ok
// SIG undefined FUN_147f386d6(void)

undefined8 FUN_147f386d6(longlong *param_1)

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



// FUNCTION 147f3871c FUN_147f3871c body=32 status=ok
// SIG undefined FUN_147f3871c(void)

void FUN_147f3871c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147f3878c FUN_147f3878c body=115 status=ok
// SIG undefined FUN_147f3878c(void)

void FUN_147f3878c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 7,0,0x3e0);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 2;
  *param_2 = &PTR_FUN_14ac66420;
  *(undefined4 *)((longlong)param_2 + 0x3dc) = 0x10;
  param_2[0x7d] = 0;
  param_2[0x7e] = 0;
  param_2[0x7f] = 0;
  param_2[0x80] = 0;
  param_2[0x81] = 0xffffffff00000000;
  return;
}



// FUNCTION 147f3889a FUN_147f3889a body=63 status=ok
// SIG undefined FUN_147f3889a(void)

undefined1 FUN_147f3889a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2f73c(param_2,param_3);
    param_3 = param_3 + 0x418;
    param_2 = param_2 + 0x418;
  }
  return 1;
}



// FUNCTION 147f38902 FUN_147f38902 body=59 status=ok
// SIG undefined FUN_147f38902(void)

undefined8 FUN_147f38902(longlong *param_1)

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



// FUNCTION 147f3894e FUN_147f3894e body=38 status=ok
// SIG undefined FUN_147f3894e(void)

void FUN_147f3894e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x418) == '\x01') {
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0x418) = 0;
  }
  return;
}



// FUNCTION 147f38a4a FUN_147f38a4a body=59 status=ok
// SIG undefined FUN_147f38a4a(void)

undefined8 FUN_147f38a4a(longlong *param_1)

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



// FUNCTION 147f38b0e FUN_147f38b0e body=63 status=ok
// SIG undefined FUN_147f38b0e(void)

undefined1 FUN_147f38b0e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f38c36(param_2,param_3);
    param_3 = param_3 + 0x390;
    param_2 = param_2 + 0x390;
  }
  return 1;
}



// FUNCTION 147f38b76 FUN_147f38b76 body=59 status=ok
// SIG undefined FUN_147f38b76(void)

undefined8 FUN_147f38b76(longlong *param_1)

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



// FUNCTION 147f38bc2 FUN_147f38bc2 body=38 status=ok
// SIG undefined FUN_147f38bc2(void)

void FUN_147f38bc2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x390) == '\x01') {
    FUN_140bf2fba(param_2);
    *(undefined1 *)(param_2 + 0x390) = 0;
  }
  return;
}



// FUNCTION 147f38c36 FUN_147f38c36 body=191 status=ok
// SIG undefined FUN_147f38c36(void)

longlong FUN_147f38c36(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_1470d0d20();
  uVar2 = *(undefined4 *)(param_2 + 0xac);
  uVar3 = *(undefined4 *)(param_2 + 0xb0);
  uVar4 = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = uVar2;
  *(undefined4 *)(param_1 + 0xb0) = uVar3;
  *(undefined4 *)(param_1 + 0xb4) = uVar4;
  FUN_147f38cf6(param_1 + 0xb8,param_2 + 0xb8);
  FUN_14054d6dc(param_1 + 200,param_2 + 200);
  uVar1 = *(undefined8 *)(param_2 + 0x335);
  *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_2 + 0x330);
  *(undefined8 *)(param_1 + 0x335) = uVar1;
  FUN_147f38d46(param_1 + 0x340,param_2 + 0x340);
  FUN_147f38d9e(param_1 + 0x350,param_2 + 0x350);
  FUN_147f38df6(param_1 + 0x360,param_2 + 0x360);
  FUN_147f38e4e(param_1 + 0x370,param_2 + 0x370);
  FUN_147f38ea6(param_1 + 0x380,param_2 + 0x380);
  return param_1;
}



// FUNCTION 147f38cf6 FUN_147f38cf6 body=79 status=ok
// SIG undefined FUN_147f38cf6(void)

undefined8 * FUN_147f38cf6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147f38efe(param_1,iVar1);
      FUN_147f38f60(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147f38d46 FUN_147f38d46 body=88 status=ok
// SIG undefined FUN_147f38d46(void)

undefined8 * FUN_147f38d46(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147f38fae(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f38d9e FUN_147f38d9e body=88 status=ok
// SIG undefined FUN_147f38d9e(void)

undefined8 * FUN_147f38d9e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147f39010(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f38df6 FUN_147f38df6 body=88 status=ok
// SIG undefined FUN_147f38df6(void)

undefined8 * FUN_147f38df6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147f39072(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f38e4e FUN_147f38e4e body=88 status=ok
// SIG undefined FUN_147f38e4e(void)

undefined8 * FUN_147f38e4e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147f390d4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f38ea6 FUN_147f38ea6 body=88 status=ok
// SIG undefined FUN_147f38ea6(void)

undefined8 * FUN_147f38ea6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147f39136(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f38efe FUN_147f38efe body=98 status=ok
// SIG undefined FUN_147f38efe(void)

void FUN_147f38efe(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147f38f60 FUN_147f38f60 body=78 status=ok
// SIG undefined FUN_147f38f60(void)

void FUN_147f38f60(longlong param_1,longlong param_2,int param_3)

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
        FUN_14689c22e();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 147f38fae FUN_147f38fae body=98 status=ok
// SIG undefined FUN_147f38fae(void)

void FUN_147f38fae(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147f39010 FUN_147f39010 body=98 status=ok
// SIG undefined FUN_147f39010(void)

void FUN_147f39010(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147f39072 FUN_147f39072 body=98 status=ok
// SIG undefined FUN_147f39072(void)

void FUN_147f39072(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147f390d4 FUN_147f390d4 body=98 status=ok
// SIG undefined FUN_147f390d4(void)

void FUN_147f390d4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147f39136 FUN_147f39136 body=98 status=ok
// SIG undefined FUN_147f39136(void)

void FUN_147f39136(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147f391a2 FUN_147f391a2 body=37 status=ok
// SIG undefined FUN_147f391a2(void)

void FUN_147f391a2(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xc78);
  FUN_143866f90(param_2);
  return;
}



// FUNCTION 147f39220 FUN_147f39220 body=59 status=ok
// SIG undefined FUN_147f39220(void)

undefined8 FUN_147f39220(longlong *param_1)

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



// FUNCTION 147f3926c FUN_147f3926c body=38 status=ok
// SIG undefined FUN_147f3926c(void)

void FUN_147f3926c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc78) == '\x01') {
    FUN_140cbbdb2(param_2);
    *(undefined1 *)(param_2 + 0xc78) = 0;
  }
  return;
}



// FUNCTION 147f392e0 FUN_147f392e0 body=38 status=ok
// SIG undefined FUN_147f392e0(void)

undefined8 FUN_147f392e0(undefined8 param_1,int param_2)

{
  FUN_140cbbdb2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f39306 FUN_147f39306 body=55 status=ok
// SIG undefined FUN_147f39306(void)

void FUN_147f39306(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22ed8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22ed8 = FUN_140002ddd(FUN_14643bcd3,uVar1,L"GpsQuery");
  }
  return;
}



// FUNCTION 147f3933e FUN_147f3933e body=37 status=ok
// SIG undefined FUN_147f3933e(void)

void FUN_147f3933e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14112fbd2(param_2 + 1);
  param_2[0x4e] = 0;
  return;
}



// FUNCTION 147f393a2 FUN_147f393a2 body=59 status=ok
// SIG undefined FUN_147f393a2(void)

undefined8 FUN_147f393a2(longlong *param_1)

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



// FUNCTION 147f393ee FUN_147f393ee body=46 status=ok
// SIG undefined FUN_147f393ee(void)

void FUN_147f393ee(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x4f) == '\x01') {
    *param_2 = 0;
    FUN_14076ba36(param_2 + 1);
    *(undefined1 *)(param_2 + 0x4f) = 0;
  }
  return;
}



// FUNCTION 147f394e2 FUN_147f394e2 body=185 status=ok
// SIG undefined FUN_147f394e2(void)

undefined8 FUN_147f394e2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar10 = lVar10 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f395c4 FUN_147f395c4 body=59 status=ok
// SIG undefined FUN_147f395c4(void)

undefined8 FUN_147f395c4(longlong *param_1)

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



// FUNCTION 147f39610 FUN_147f39610 body=38 status=ok
// SIG undefined FUN_147f39610(void)

void FUN_147f39610(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 147f39684 FUN_147f39684 body=38 status=ok
// SIG undefined FUN_147f39684(void)

undefined8 FUN_147f39684(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f396aa FUN_147f396aa body=55 status=ok
// SIG undefined FUN_147f396aa(void)

void FUN_147f396aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22f20 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22f20 = FUN_140002ddd(FUN_14180ec91,uVar1,L"GpsTestSettings");
  }
  return;
}



// FUNCTION 147f3977c FUN_147f3977c body=118 status=ok
// SIG undefined FUN_147f3977c(void)

undefined8 FUN_147f3977c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 147f3981a FUN_147f3981a body=59 status=ok
// SIG undefined FUN_147f3981a(void)

undefined8 FUN_147f3981a(longlong *param_1)

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



// FUNCTION 147f39860 FUN_147f39860 body=32 status=ok
// SIG undefined FUN_147f39860(void)

void FUN_147f39860(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 147f398ce FUN_147f398ce body=38 status=ok
// SIG undefined FUN_147f398ce(void)

undefined8 FUN_147f398ce(undefined8 param_1,int param_2)

{
  FUN_140f9d4d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f398f4 FUN_147f398f4 body=55 status=ok
// SIG undefined FUN_147f398f4(void)

void FUN_147f398f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22f38 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22f38 = FUN_140002ddd(FUN_14180ecfb,uVar1,L"GpsTest");
  }
  return;
}



// FUNCTION 147f3992c FUN_147f3992c body=87 status=ok
// SIG undefined FUN_147f3992c(void)

void FUN_147f3992c(undefined8 param_1,undefined8 *param_2)

{
  FUN_140d710e4(param_2);
  *param_2 = &PTR_FUN_14ac73750;
  param_2[0x11] = DAT_14c9ab028;
  *(undefined1 *)(param_2 + 0x12) = 2;
  param_2[0x10] = &PTR_FUN_14a1a0a20;
  param_2[0x13] = 0;
  *(undefined2 *)(param_2 + 0x14) = 0x103;
  return;
}



// FUNCTION 147f399ac FUN_147f399ac body=63 status=ok
// SIG undefined FUN_147f399ac(void)

undefined1 FUN_147f399ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f39ad4(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 147f39a14 FUN_147f39a14 body=59 status=ok
// SIG undefined FUN_147f39a14(void)

undefined8 FUN_147f39a14(longlong *param_1)

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



// FUNCTION 147f39a60 FUN_147f39a60 body=38 status=ok
// SIG undefined FUN_147f39a60(void)

void FUN_147f39a60(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 147f39ad4 FUN_147f39ad4 body=189 status=ok
// SIG undefined FUN_147f39ad4(void)

longlong FUN_147f39ad4(longlong param_1,longlong param_2)

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
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  lVar8 = *(longlong *)(param_2 + 0x98);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = *(longlong *)(param_2 + 0x98);
    }
  }
  *(longlong *)(param_1 + 0x98) = lVar8;
  *(undefined2 *)(param_1 + 0xa0) = *(undefined2 *)(param_2 + 0xa0);
  return param_1;
}



// FUNCTION 147f39bf0 FUN_147f39bf0 body=54 status=ok
// SIG undefined FUN_147f39bf0(void)

undefined1 FUN_147f39bf0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f39d02(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 147f39c4e FUN_147f39c4e body=59 status=ok
// SIG undefined FUN_147f39c4e(void)

undefined8 FUN_147f39c4e(longlong *param_1)

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



// FUNCTION 147f39c94 FUN_147f39c94 body=32 status=ok
// SIG undefined FUN_147f39c94(void)

void FUN_147f39c94(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 147f39d02 FUN_147f39d02 body=103 status=ok
// SIG undefined FUN_147f39d02(void)

longlong FUN_147f39d02(longlong param_1,longlong param_2)

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
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  return param_1;
}



// FUNCTION 147f39d9a FUN_147f39d9a body=63 status=ok
// SIG undefined FUN_147f39d9a(void)

undefined1 FUN_147f39d9a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f3a16a(param_2,param_3);
    param_3 = param_3 + 0x2c0;
    param_2 = param_2 + 0x2c0;
  }
  return 1;
}



// FUNCTION 147f39e02 FUN_147f39e02 body=59 status=ok
// SIG undefined FUN_147f39e02(void)

undefined8 FUN_147f39e02(longlong *param_1)

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



// FUNCTION 147f39e4e FUN_147f39e4e body=38 status=ok
// SIG undefined FUN_147f39e4e(void)

void FUN_147f39e4e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2c0) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x2c0) = 0;
  }
  return;
}



// FUNCTION 147f3a16a FUN_147f3a16a body=443 status=ok
// SIG undefined FUN_147f3a16a(void)

longlong FUN_147f3a16a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
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
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  puVar9 = (undefined8 *)(param_2 + 0xd8);
  puVar10 = (undefined8 *)(param_1 + 0xd8);
  for (lVar8 = 0xf; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined1 *)(param_1 + 0x150) = *(undefined1 *)(param_2 + 0x150);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
  *(undefined1 *)(param_1 + 0x170) = *(undefined1 *)(param_2 + 0x170);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  puVar9 = (undefined8 *)(param_2 + 0x178);
  puVar10 = (undefined8 *)(param_1 + 0x178);
  for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined1 *)(param_1 + 0x1d0) = *(undefined1 *)(param_2 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 0x1c8);
  puVar9 = (undefined8 *)(param_2 + 0x1d8);
  puVar10 = (undefined8 *)(param_1 + 0x1d8);
  for (lVar8 = 0xf; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined1 *)(param_1 + 0x250) = *(undefined1 *)(param_2 + 0x250);
  *(undefined1 *)(param_1 + 0x268) = *(undefined1 *)(param_2 + 0x268);
  *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_2 + 0x260);
  puVar9 = (undefined8 *)(param_2 + 0x270);
  puVar10 = (undefined8 *)(param_1 + 0x270);
  for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(param_2 + 0x2b8);
  return param_1;
}



// FUNCTION 147f3a380 FUN_147f3a380 body=63 status=ok
// SIG undefined FUN_147f3a380(void)

undefined1 FUN_147f3a380(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f3a4a8(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 147f3a3e8 FUN_147f3a3e8 body=59 status=ok
// SIG undefined FUN_147f3a3e8(void)

undefined8 FUN_147f3a3e8(longlong *param_1)

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



// FUNCTION 147f3a434 FUN_147f3a434 body=38 status=ok
// SIG undefined FUN_147f3a434(void)

void FUN_147f3a434(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 147f3a4a8 FUN_147f3a4a8 body=139 status=ok
// SIG undefined FUN_147f3a4a8(void)

longlong FUN_147f3a4a8(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
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
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  uVar4 = *(undefined8 *)(param_2 + 0x80);
  uVar5 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  *(undefined8 *)(param_1 + 0x80) = uVar4;
  *(undefined8 *)(param_1 + 0x88) = uVar5;
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  return param_1;
}



// FUNCTION 147f3a534 FUN_147f3a534 body=128 status=ok
// SIG undefined FUN_147f3a534(void)

void FUN_147f3a534(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147f3a694 FUN_147f3a694 body=339 status=ok
// SIG undefined FUN_147f3a694(void)

undefined8 FUN_147f3a694(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined8 *)(param_2 + 200 + lVar10) = *(undefined8 *)(param_3 + 200 + lVar10);
      *(undefined1 *)(param_2 + 0xd0 + lVar10) = *(undefined1 *)(param_3 + 0xd0 + lVar10);
      *(undefined4 *)(param_2 + 0xd8 + lVar10) = *(undefined4 *)(param_3 + 0xd8 + lVar10);
      *(undefined4 *)(param_2 + 0xe0 + lVar10) = *(undefined4 *)(param_3 + 0xe0 + lVar10);
      lVar10 = lVar10 + 0xe8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f3a810 FUN_147f3a810 body=59 status=ok
// SIG undefined FUN_147f3a810(void)

undefined8 FUN_147f3a810(longlong *param_1)

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



// FUNCTION 147f3a85c FUN_147f3a85c body=38 status=ok
// SIG undefined FUN_147f3a85c(void)

void FUN_147f3a85c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 147f3a93a FUN_147f3a93a body=54 status=ok
// SIG undefined FUN_147f3a93a(void)

undefined1 FUN_147f3a93a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f3aa4c(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 147f3a998 FUN_147f3a998 body=59 status=ok
// SIG undefined FUN_147f3a998(void)

undefined8 FUN_147f3a998(longlong *param_1)

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



// FUNCTION 147f3a9de FUN_147f3a9de body=32 status=ok
// SIG undefined FUN_147f3a9de(void)

void FUN_147f3a9de(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 147f3aa4c FUN_147f3aa4c body=109 status=ok
// SIG undefined FUN_147f3aa4c(void)

longlong FUN_147f3aa4c(longlong param_1,longlong param_2)

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



// FUNCTION 147f3aaea FUN_147f3aaea body=63 status=ok
// SIG undefined FUN_147f3aaea(void)

undefined1 FUN_147f3aaea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f3ac12(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 147f3ab52 FUN_147f3ab52 body=59 status=ok
// SIG undefined FUN_147f3ab52(void)

undefined8 FUN_147f3ab52(longlong *param_1)

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



// FUNCTION 147f3ab9e FUN_147f3ab9e body=38 status=ok
// SIG undefined FUN_147f3ab9e(void)

void FUN_147f3ab9e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 147f3ac12 FUN_147f3ac12 body=201 status=ok
// SIG undefined FUN_147f3ac12(void)

longlong FUN_147f3ac12(longlong param_1,longlong param_2)

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
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  lVar8 = *(longlong *)(param_2 + 0xa0);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = *(longlong *)(param_2 + 0xa0);
    }
  }
  *(longlong *)(param_1 + 0xa0) = lVar8;
  *(undefined2 *)(param_1 + 0xa8) = *(undefined2 *)(param_2 + 0xa8);
  return param_1;
}



// FUNCTION 147f3ad3a FUN_147f3ad3a body=54 status=ok
// SIG undefined FUN_147f3ad3a(void)

undefined1 FUN_147f3ad3a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f3ae4c(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 147f3ad98 FUN_147f3ad98 body=59 status=ok
// SIG undefined FUN_147f3ad98(void)

undefined8 FUN_147f3ad98(longlong *param_1)

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



// FUNCTION 147f3adde FUN_147f3adde body=32 status=ok
// SIG undefined FUN_147f3adde(void)

void FUN_147f3adde(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 147f3ae4c FUN_147f3ae4c body=103 status=ok
// SIG undefined FUN_147f3ae4c(void)

longlong FUN_147f3ae4c(longlong param_1,longlong param_2)

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
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  return param_1;
}



// FUNCTION 147f3aee4 FUN_147f3aee4 body=63 status=ok
// SIG undefined FUN_147f3aee4(void)

undefined1 FUN_147f3aee4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f3b00c(param_2,param_3);
    param_3 = param_3 + 0xe0;
    param_2 = param_2 + 0xe0;
  }
  return 1;
}



// FUNCTION 147f3af4c FUN_147f3af4c body=59 status=ok
// SIG undefined FUN_147f3af4c(void)

undefined8 FUN_147f3af4c(longlong *param_1)

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



// FUNCTION 147f3af98 FUN_147f3af98 body=38 status=ok
// SIG undefined FUN_147f3af98(void)

void FUN_147f3af98(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 147f3b00c FUN_147f3b00c body=259 status=ok
// SIG undefined FUN_147f3b00c(void)

longlong FUN_147f3b00c(longlong param_1,longlong param_2)

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
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  lVar8 = *(longlong *)(param_2 + 0x98);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = *(longlong *)(param_2 + 0x98);
    }
  }
  *(longlong *)(param_1 + 0x98) = lVar8;
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  return param_1;
}



// FUNCTION 147f3b13c FUN_147f3b13c body=63 status=ok
// SIG undefined FUN_147f3b13c(void)

undefined1 FUN_147f3b13c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f3b2e2(param_2,param_3);
    param_3 = param_3 + 0x100;
    param_2 = param_2 + 0x100;
  }
  return 1;
}



// FUNCTION 147f3b1a4 FUN_147f3b1a4 body=59 status=ok
// SIG undefined FUN_147f3b1a4(void)

undefined8 FUN_147f3b1a4(longlong *param_1)

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



// FUNCTION 147f3b1f0 FUN_147f3b1f0 body=38 status=ok
// SIG undefined FUN_147f3b1f0(void)

void FUN_147f3b1f0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x100) == '\x01') {
    FUN_143867f4c(param_2);
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 147f3b2e2 FUN_147f3b2e2 body=223 status=ok
// SIG undefined FUN_147f3b2e2(void)

longlong FUN_147f3b2e2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  uVar1 = *(undefined4 *)(param_2 + 100);
  uVar2 = *(undefined4 *)(param_2 + 0x68);
  uVar3 = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x88) == '\x01') {
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
      uVar1 = *(undefined4 *)(param_2 + 0x74);
      uVar2 = *(undefined4 *)(param_2 + 0x78);
      uVar3 = *(undefined4 *)(param_2 + 0x7c);
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
      *(undefined4 *)(param_1 + 0x74) = uVar1;
      *(undefined4 *)(param_1 + 0x78) = uVar2;
      *(undefined4 *)(param_1 + 0x7c) = uVar3;
      uVar5 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x88) != '\x01') goto LAB_147f3b342;
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 0x88) = uVar5;
  }
LAB_147f3b342:
  FUN_147f3395a(param_1 + 0x90,param_2 + 0x90);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  FUN_147f3b3c2(param_1 + 0xf0,param_2 + 0xf0);
  return param_1;
}



// FUNCTION 147f3b3c2 FUN_147f3b3c2 body=93 status=ok
// SIG undefined FUN_147f3b3c2(void)

undefined8 * FUN_147f3b3c2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141092a49(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147f3b420(param_1,iVar1);
      FUN_147f3b492(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147f3b420 FUN_147f3b420 body=114 status=ok
// SIG undefined FUN_147f3b420(void)

void FUN_147f3b420(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x130,8);
    iVar2 = (int)(uVar1 / 0x130);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x130,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147f3b492 FUN_147f3b492 body=60 status=ok
// SIG undefined FUN_147f3b492(void)

void FUN_147f3b492(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147f3b4ce(param_1,param_2);
    param_1 = param_1 + 0x130;
    param_2 = param_2 + 0x130;
  }
  return;
}



// FUNCTION 147f3b4ce FUN_147f3b4ce body=150 status=ok
// SIG undefined FUN_147f3b4ce(void)

void * FUN_147f3b4ce(void *param_1,void *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *_Dst;
  void *_Src;
  
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x108);
  _Src = *(void **)((longlong)param_2 + 0x100);
  *(int *)((longlong)param_1 + 0x108) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x10c) = 8;
  }
  else {
    if (_Src == (void *)0x0) {
      _Src = param_2;
    }
    FUN_147f3b564(param_1,iVar1);
    _Dst = *(void **)((longlong)param_1 + 0x100);
    if (*(void **)((longlong)param_1 + 0x100) == (void *)0x0) {
      _Dst = param_1;
    }
    memcpy(_Dst,_Src,(longlong)iVar1 << 5);
  }
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x110);
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x118);
  uVar4 = *(undefined8 *)((longlong)param_2 + 0x124);
  *(undefined8 *)((longlong)param_1 + 0x11c) = *(undefined8 *)((longlong)param_2 + 0x11c);
  *(undefined8 *)((longlong)param_1 + 0x124) = uVar4;
  *(undefined8 *)((longlong)param_1 + 0x110) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x118) = uVar3;
  return param_1;
}



// FUNCTION 147f3b564 FUN_147f3b564 body=99 status=ok
// SIG undefined FUN_147f3b564(void)

void FUN_147f3b564(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 9) {
    iVar3 = 8;
  }
  else {
    iVar2 = 0;
    uVar1 = FUN_144a3809e((longlong)(int)param_2 << 5,0);
    iVar3 = (int)(uVar1 >> 5);
    if (iVar3 < (int)param_2) {
      iVar3 = 0x7fffffff;
    }
    else if (iVar3 < 1) goto LAB_147f3b595;
  }
  iVar2 = iVar3;
  FUN_147f3b5c8(param_1,0,iVar2,0x20);
LAB_147f3b595:
  *(int *)(param_1 + 0x10c) = iVar2;
  return;
}



// FUNCTION 147f3b5c8 FUN_147f3b5c8 body=142 status=ok
// SIG undefined FUN_147f3b5c8(void)

void FUN_147f3b5c8(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,param_4);
  return;
}



// FUNCTION 147f3b688 FUN_147f3b688 body=452 status=ok
// SIG undefined FUN_147f3b688(void)

undefined8 FUN_147f3b688(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined8 *)(param_2 + 0x40 + lVar11) = *(undefined8 *)(param_3 + 0x40 + lVar11);
      *(undefined1 *)(param_2 + 0x48 + lVar11) = *(undefined1 *)(param_3 + 0x48 + lVar11);
      *(undefined2 *)(param_2 + 0x50 + lVar11) = *(undefined2 *)(param_3 + 0x50 + lVar11);
      *(undefined1 *)(param_2 + 0x68 + lVar11) = *(undefined1 *)(param_3 + 0x68 + lVar11);
      *(undefined8 *)(param_2 + 0x60 + lVar11) = *(undefined8 *)(param_3 + 0x60 + lVar11);
      *(undefined4 *)(param_2 + 0x70 + lVar11) = *(undefined4 *)(param_3 + 0x70 + lVar11);
      *(undefined8 *)(param_2 + 0x78 + lVar11) = *(undefined8 *)(param_3 + 0x78 + lVar11);
      *(undefined1 *)(param_2 + 0x90 + lVar11) = *(undefined1 *)(param_3 + 0x90 + lVar11);
      *(undefined8 *)(param_2 + 0x88 + lVar11) = *(undefined8 *)(param_3 + 0x88 + lVar11);
      puVar12 = (undefined8 *)(param_3 + 0x178 + lVar11 + -0xe0);
      puVar13 = (undefined8 *)(param_2 + 0x178 + lVar11 + -0xe0);
      for (lVar10 = 0xf; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      }
      *(undefined1 *)(param_2 + 0x110 + lVar11) = *(undefined1 *)(param_3 + 0x110 + lVar11);
      *(undefined1 *)(param_2 + 0x128 + lVar11) = *(undefined1 *)(param_3 + 0x128 + lVar11);
      *(undefined8 *)(param_2 + 0x120 + lVar11) = *(undefined8 *)(param_3 + 0x120 + lVar11);
      *(undefined4 *)(param_2 + 0x130 + lVar11) = *(undefined4 *)(param_3 + 0x130 + lVar11);
      *(undefined8 *)(param_2 + 0x140 + lVar11) = *(undefined8 *)(param_3 + 0x140 + lVar11);
      *(undefined1 *)(param_2 + 0x148 + lVar11) = *(undefined1 *)(param_3 + 0x148 + lVar11);
      *(undefined4 *)(param_2 + 0x150 + lVar11) = *(undefined4 *)(param_3 + 0x150 + lVar11);
      *(undefined8 *)(param_2 + 0x160 + lVar11) = *(undefined8 *)(param_3 + 0x160 + lVar11);
      *(undefined1 *)(param_2 + 0x168 + lVar11) = *(undefined1 *)(param_3 + 0x168 + lVar11);
      *(undefined4 *)(param_2 + 0x170 + lVar11) = *(undefined4 *)(param_3 + 0x170 + lVar11);
      *(undefined8 *)(param_2 + 0x178 + lVar11) = *(undefined8 *)(param_3 + 0x178 + lVar11);
      *(undefined1 *)(param_2 + 0x180 + lVar11) = *(undefined1 *)(param_3 + 0x180 + lVar11);
      lVar11 = lVar11 + 0x188;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f3b874 FUN_147f3b874 body=59 status=ok
// SIG undefined FUN_147f3b874(void)

undefined8 FUN_147f3b874(longlong *param_1)

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



// FUNCTION 147f3b8c0 FUN_147f3b8c0 body=38 status=ok
// SIG undefined FUN_147f3b8c0(void)

void FUN_147f3b8c0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x188) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x188) = 0;
  }
  return;
}



// FUNCTION 147f3baf6 FUN_147f3baf6 body=63 status=ok
// SIG undefined FUN_147f3baf6(void)

undefined1 FUN_147f3baf6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f3bc1e(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 147f3bb5e FUN_147f3bb5e body=59 status=ok
// SIG undefined FUN_147f3bb5e(void)

undefined8 FUN_147f3bb5e(longlong *param_1)

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



// FUNCTION 147f3bbaa FUN_147f3bbaa body=38 status=ok
// SIG undefined FUN_147f3bbaa(void)

void FUN_147f3bbaa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 147f3bc1e FUN_147f3bc1e body=123 status=ok
// SIG undefined FUN_147f3bc1e(void)

longlong FUN_147f3bc1e(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
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
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  return param_1;
}



// FUNCTION 147f3bc9a FUN_147f3bc9a body=37 status=ok
// SIG undefined FUN_147f3bc9a(void)

void FUN_147f3bc9a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xd0);
  FUN_145c19b8c(param_2);
  return;
}



// FUNCTION 147f3bd0c FUN_147f3bd0c body=313 status=ok
// SIG undefined FUN_147f3bd0c(void)

undefined8 FUN_147f3bd0c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined1 *)(param_2 + 0x84 + lVar10) = *(undefined1 *)(param_3 + 0x84 + lVar10);
      *(undefined4 *)(param_2 + 0x80 + lVar10) = *(undefined4 *)(param_3 + 0x80 + lVar10);
      *(undefined8 *)(param_2 + 0x90 + lVar10) = *(undefined8 *)(param_3 + 0x90 + lVar10);
      *(undefined1 *)(param_2 + 0x98 + lVar10) = *(undefined1 *)(param_3 + 0x98 + lVar10);
      *(undefined4 *)(param_2 + 0xa0 + lVar10) = *(undefined4 *)(param_3 + 0xa0 + lVar10);
      *(undefined8 *)(param_2 + 0xb0 + lVar10) = *(undefined8 *)(param_3 + 0xb0 + lVar10);
      *(undefined1 *)(param_2 + 0xb8 + lVar10) = *(undefined1 *)(param_3 + 0xb8 + lVar10);
      *(undefined4 *)(param_2 + 0xc0 + lVar10) = *(undefined4 *)(param_3 + 0xc0 + lVar10);
      *(undefined8 *)(param_2 + 200 + lVar10) = *(undefined8 *)(param_3 + 200 + lVar10);
      lVar10 = lVar10 + 0xd0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f3be6e FUN_147f3be6e body=59 status=ok
// SIG undefined FUN_147f3be6e(void)

undefined8 FUN_147f3be6e(longlong *param_1)

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



// FUNCTION 147f3beba FUN_147f3beba body=38 status=ok
// SIG undefined FUN_147f3beba(void)

void FUN_147f3beba(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 147f3bf2e FUN_147f3bf2e body=38 status=ok
// SIG undefined FUN_147f3bf2e(void)

undefined8 FUN_147f3bf2e(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f3bf54 FUN_147f3bf54 body=55 status=ok
// SIG undefined FUN_147f3bf54(void)

void FUN_147f3bf54(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23160 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23160 = FUN_140002ddd(FUN_14643cd5b,uVar1,L"GpsTestSettings_DistanceList");
  }
  return;
}



// FUNCTION 147f3c02a FUN_147f3c02a body=54 status=ok
// SIG undefined FUN_147f3c02a(void)

undefined1 FUN_147f3c02a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f3c1d0(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 147f3c088 FUN_147f3c088 body=59 status=ok
// SIG undefined FUN_147f3c088(void)

undefined8 FUN_147f3c088(longlong *param_1)

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



// FUNCTION 147f3c0ce FUN_147f3c0ce body=56 status=ok
// SIG undefined FUN_147f3c0ce(void)

void FUN_147f3c0ce(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xf) == '\x01') {
    *param_2 = &PTR_FUN_14ac7b6c0;
    if (param_2[0xd] != 0) {
      FUN_1400020a8();
    }
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0xf) = 0;
  }
  return;
}



// FUNCTION 147f3c154 FUN_147f3c154 body=65 status=ok
// SIG undefined FUN_147f3c154(void)

undefined8 * FUN_147f3c154(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac7b6c0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_140f9d4d6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f3c196 FUN_147f3c196 body=55 status=ok
// SIG undefined FUN_147f3c196(void)

void FUN_147f3c196(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23178 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23178 = FUN_140002ddd(FUN_14643cdef,uVar1,L"GpsTest_DistanceList");
  }
  return;
}



// FUNCTION 147f3c1d0 FUN_147f3c1d0 body=119 status=ok
// SIG undefined FUN_147f3c1d0(void)

longlong FUN_147f3c1d0(longlong param_1,longlong param_2)

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
  FUN_1405b70a4(param_1 + 0x68,param_2 + 0x68);
  return param_1;
}



// FUNCTION 147f3c248 FUN_147f3c248 body=48 status=ok
// SIG undefined FUN_147f3c248(void)

void FUN_147f3c248(undefined8 param_1,undefined8 *param_2)

{
  FUN_140d710e4(param_2);
  *param_2 = &PTR_FUN_14ac7baa0;
  *(undefined2 *)(param_2 + 0x10) = 0;
  *(undefined1 *)((longlong)param_2 + 0x82) = 0;
  return;
}



// FUNCTION 147f3c2a0 FUN_147f3c2a0 body=219 status=ok
// SIG undefined FUN_147f3c2a0(void)

undefined8 FUN_147f3c2a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined2 *)(param_2 + 0x80 + lVar10) = *(undefined2 *)(param_3 + 0x80 + lVar10);
      *(undefined1 *)(param_2 + 0x82 + lVar10) = *(undefined1 *)(param_3 + 0x82 + lVar10);
      lVar10 = lVar10 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f3c3a4 FUN_147f3c3a4 body=59 status=ok
// SIG undefined FUN_147f3c3a4(void)

undefined8 FUN_147f3c3a4(longlong *param_1)

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



// FUNCTION 147f3c3f0 FUN_147f3c3f0 body=38 status=ok
// SIG undefined FUN_147f3c3f0(void)

void FUN_147f3c3f0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 147f3c4c6 FUN_147f3c4c6 body=54 status=ok
// SIG undefined FUN_147f3c4c6(void)

undefined1 FUN_147f3c4c6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f3c5f4(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 147f3c524 FUN_147f3c524 body=59 status=ok
// SIG undefined FUN_147f3c524(void)

undefined8 FUN_147f3c524(longlong *param_1)

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



// FUNCTION 147f3c56a FUN_147f3c56a body=56 status=ok
// SIG undefined FUN_147f3c56a(void)

void FUN_147f3c56a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14ac7bca0;
    if (param_2[0xc] != 0) {
      FUN_1400020a8();
    }
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 147f3c5f4 FUN_147f3c5f4 body=109 status=ok
// SIG undefined FUN_147f3c5f4(void)

longlong FUN_147f3c5f4(longlong param_1,longlong param_2)

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
  FUN_147f3c662(param_1 + 0x60,param_2 + 0x60);
  return param_1;
}



// FUNCTION 147f3c662 FUN_147f3c662 body=89 status=ok
// SIG undefined FUN_147f3c662(void)

undefined8 * FUN_147f3c662(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147f3c6bc(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x28);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f3c6bc FUN_147f3c6bc body=115 status=ok
// SIG undefined FUN_147f3c6bc(void)

void FUN_147f3c6bc(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147f3c760 FUN_147f3c760 body=63 status=ok
// SIG undefined FUN_147f3c760(void)

undefined1 FUN_147f3c760(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f3c9e6(param_2,param_3);
    param_3 = param_3 + 0x170;
    param_2 = param_2 + 0x170;
  }
  return 1;
}



// FUNCTION 147f3c7c8 FUN_147f3c7c8 body=59 status=ok
// SIG undefined FUN_147f3c7c8(void)

undefined8 FUN_147f3c7c8(longlong *param_1)

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



// FUNCTION 147f3c814 FUN_147f3c814 body=60 status=ok
// SIG undefined FUN_147f3c814(void)

void FUN_147f3c814(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x2e) == '\x01') {
    *param_2 = &PTR_FUN_14ac7bee0;
    FUN_144a2da94(param_2 + 0x1a);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x2e) = 0;
  }
  return;
}



// FUNCTION 147f3c9e6 FUN_147f3c9e6 body=293 status=ok
// SIG undefined FUN_147f3c9e6(void)

longlong FUN_147f3c9e6(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
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
  *(undefined1 *)(param_1 + 0x84) = *(undefined1 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  FUN_144983130(param_1 + 0xd0,param_2 + 0xd0);
  puVar9 = (undefined8 *)(param_2 + 0x108);
  puVar10 = (undefined8 *)(param_1 + 0x108);
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined1 *)(param_1 + 0x168) = *(undefined1 *)(param_2 + 0x168);
  return param_1;
}



// FUNCTION 147f3cbaa FUN_147f3cbaa body=54 status=ok
// SIG undefined FUN_147f3cbaa(void)

undefined1 FUN_147f3cbaa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f3c1d0(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 147f3cc08 FUN_147f3cc08 body=59 status=ok
// SIG undefined FUN_147f3cc08(void)

undefined8 FUN_147f3cc08(longlong *param_1)

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



// FUNCTION 147f3cc4e FUN_147f3cc4e body=56 status=ok
// SIG undefined FUN_147f3cc4e(void)

void FUN_147f3cc4e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xf) == '\x01') {
    *param_2 = &PTR_FUN_14ac7b6c0;
    if (param_2[0xd] != 0) {
      FUN_1400020a8();
    }
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0xf) = 0;
  }
  return;
}



// FUNCTION 147f3ccd6 FUN_147f3ccd6 body=37 status=ok
// SIG undefined FUN_147f3ccd6(void)

void FUN_147f3ccd6(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x170);
  FUN_147f3ce86(param_2);
  return;
}



// FUNCTION 147f3cd48 FUN_147f3cd48 body=63 status=ok
// SIG undefined FUN_147f3cd48(void)

undefined1 FUN_147f3cd48(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f3d076(param_2,param_3);
    param_3 = param_3 + 0x170;
    param_2 = param_2 + 0x170;
  }
  return 1;
}



// FUNCTION 147f3cdb0 FUN_147f3cdb0 body=59 status=ok
// SIG undefined FUN_147f3cdb0(void)

undefined8 FUN_147f3cdb0(longlong *param_1)

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



// FUNCTION 147f3cdfc FUN_147f3cdfc body=60 status=ok
// SIG undefined FUN_147f3cdfc(void)

void FUN_147f3cdfc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x2e) == '\x01') {
    *param_2 = &PTR_FUN_14ac7c330;
    FUN_144a2da94(param_2 + 0x1a);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x2e) = 0;
  }
  return;
}



// FUNCTION 147f3ce86 FUN_147f3ce86 body=277 status=ok
// SIG undefined FUN_147f3ce86(void)

undefined8 * FUN_147f3ce86(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140d710e4();
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x10] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x13) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x15] = &PTR_FUN_14a1a0aa0;
  *(undefined4 *)(param_1 + 0x18) = 2;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *param_1 = &PTR_FUN_14ac7c330;
  param_1[0x1a] = 0;
  *(undefined2 *)(param_1 + 0x1e) = 4;
  *(undefined4 *)(param_1 + 0x1b) = 0x40a00000;
  *(undefined1 *)(param_1 + 0x1f) = 3;
  *(char *)(param_1 + 0x20) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined2 *)(param_1 + 0x23) = 0;
  param_1[0x26] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_1[0x24] = DAT_14c8464f8;
  param_1[0x25] = uVar1;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2c] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x2a] = DAT_14c8464e0;
  param_1[0x2b] = uVar1;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  return param_1;
}



// FUNCTION 147f3cf9c FUN_147f3cf9c body=63 status=ok
// SIG undefined FUN_147f3cf9c(void)

undefined8 * FUN_147f3cf9c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac7c330;
  FUN_144a2da94(param_1 + 0x1a);
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f3cfdc FUN_147f3cfdc body=55 status=ok
// SIG undefined FUN_147f3cfdc(void)

void FUN_147f3cfdc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23248 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23248 = FUN_140002ddd(FUN_14643d18b,uVar1,L"GpsTestSettings_EnemiesGroup");
  }
  return;
}



// FUNCTION 147f3d018 FUN_147f3d018 body=38 status=ok
// SIG undefined FUN_147f3d018(void)

undefined8 FUN_147f3d018(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f3d03e FUN_147f3d03e body=55 status=ok
// SIG undefined FUN_147f3d03e(void)

void FUN_147f3d03e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23398 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23398 = FUN_140002ddd(FUN_14643d1ba,uVar1,L"GpsTestSettings_GroupDistance");
  }
  return;
}



// FUNCTION 147f3d076 FUN_147f3d076 body=275 status=ok
// SIG undefined FUN_147f3d076(void)

longlong FUN_147f3d076(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
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
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_2 + 200);
  FUN_144983130(param_1 + 0xd0,param_2 + 0xd0);
  puVar9 = (undefined8 *)(param_2 + 0x108);
  puVar10 = (undefined8 *)(param_1 + 0x108);
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined1 *)(param_1 + 0x168) = *(undefined1 *)(param_2 + 0x168);
  return param_1;
}



// FUNCTION 147f3d236 FUN_147f3d236 body=54 status=ok
// SIG undefined FUN_147f3d236(void)

undefined1 FUN_147f3d236(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f3d456(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 147f3d294 FUN_147f3d294 body=59 status=ok
// SIG undefined FUN_147f3d294(void)

undefined8 FUN_147f3d294(longlong *param_1)

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



// FUNCTION 147f3d2da FUN_147f3d2da body=56 status=ok
// SIG undefined FUN_147f3d2da(void)

void FUN_147f3d2da(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xf) == '\x01') {
    *param_2 = &PTR_FUN_14ac7c6c0;
    if (param_2[0xd] != 0) {
      FUN_1400020a8();
    }
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0xf) = 0;
  }
  return;
}



// FUNCTION 147f3d360 FUN_147f3d360 body=65 status=ok
// SIG undefined FUN_147f3d360(void)

undefined8 * FUN_147f3d360(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac7c6c0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_140f9d4d6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f3d3a2 FUN_147f3d3a2 body=55 status=ok
// SIG undefined FUN_147f3d3a2(void)

void FUN_147f3d3a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23260 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23260 = FUN_140002ddd(FUN_14643d24d,uVar1,L"GpsTest_EnemiesGroup");
  }
  return;
}



// FUNCTION 147f3d3da FUN_147f3d3da body=65 status=ok
// SIG undefined FUN_147f3d3da(void)

undefined8 * FUN_147f3d3da(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac7c6c0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_140f9d4d6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f3d41c FUN_147f3d41c body=55 status=ok
// SIG undefined FUN_147f3d41c(void)

void FUN_147f3d41c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb233b0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb233b0 = FUN_140002ddd(FUN_14643d27c,uVar1,L"GpsTest_GroupDistance");
  }
  return;
}



// FUNCTION 147f3d456 FUN_147f3d456 body=119 status=ok
// SIG undefined FUN_147f3d456(void)

longlong FUN_147f3d456(longlong param_1,longlong param_2)

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
  FUN_1405b70a4(param_1 + 0x68,param_2 + 0x68);
  return param_1;
}



// FUNCTION 147f3d522 FUN_147f3d522 body=63 status=ok
// SIG undefined FUN_147f3d522(void)

undefined1 FUN_147f3d522(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f3d64a(param_2,param_3);
    param_3 = param_3 + 0x120;
    param_2 = param_2 + 0x120;
  }
  return 1;
}



// FUNCTION 147f3d58a FUN_147f3d58a body=59 status=ok
// SIG undefined FUN_147f3d58a(void)

undefined8 FUN_147f3d58a(longlong *param_1)

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



// FUNCTION 147f3d5d6 FUN_147f3d5d6 body=38 status=ok
// SIG undefined FUN_147f3d5d6(void)

void FUN_147f3d5d6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x120) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x120) = 0;
  }
  return;
}



// FUNCTION 147f3d64a FUN_147f3d64a body=260 status=ok
// SIG undefined FUN_147f3d64a(void)

longlong FUN_147f3d64a(longlong param_1,longlong param_2)

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
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  FUN_147f374bc(param_1 + 0x88,param_2 + 0x88);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined1 *)(param_1 + 0xf0) = *(undefined1 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  return param_1;
}



// FUNCTION 147f3d7ee FUN_147f3d7ee body=54 status=ok
// SIG undefined FUN_147f3d7ee(void)

undefined1 FUN_147f3d7ee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f3d95e(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 147f3d84c FUN_147f3d84c body=59 status=ok
// SIG undefined FUN_147f3d84c(void)

undefined8 FUN_147f3d84c(longlong *param_1)

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


